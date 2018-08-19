from ctypes import*
import socket ,struct
import os

class IP(Structure):
	_fields_=[
		("version",	c_ubyte, 4),
		("ihl",		c_ubyte ,4),
		("tos",		c_ubyte),
		("len",		c_ushort),
		("id",		c_ushort),
		("flags",	c_ushort),
		("ttl",		c_ubyte),
		("protocol",	c_ubyte),
		("sum",		c_short),
		("src",		c_ulong),
		("dst",		c_ulong)
		 ]

	def __new__(self ,socket_buffer=None):
		return self.from_buffer_copy(socket_buffer)

	def __init__(self,socket_buffer=None):
		#map protocol constants to their names
		#self.protocol_map = {1:"ICMP", 6:"TCP" ,17:"UDP"}

		self.src_address=socket.inet_ntoa(struct.pack("@I",self.src))
		self.dst_address=socket.inet_ntoa(struct.pack("@I" ,self.dst))

ETH_HEADER_LEN =14
ETH_P_IP = 0x0800

sock = socket.socket(socket.AF_PACKET,socket.SOCK_RAW, socket.htons(ETH_P_IP))
sock.setsockopt(socket.SOL_SOCKET, socket.SO_REUSEADDR, 1)
sock.bind(('ens33', 0))

while True :
	data = sock.recvfrom(65565)[0]
	ip=IP(data[ETH_HEADER_LEN:])
	print(ip.version)
	print(ip.ihl)
	print(ip.tos)
	print(ip.len)
	print(ip.id)
	print(ip.flags)
	print(ip.ttl)
	print(ip.protocol)
	print(ip.sum)
	print(ip.src_address)
	print(ip.dst_address)



