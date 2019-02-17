This is some fast code to iterate over dogecoind's block files to
extract blockchain data from the main blockchain.

## To build:

1. make

## Things you can do:

Show block hash and transaction size for each transaction in the main chain:

	./dogecoin-iterate -q --tx=%bh,%tl

This will produce output like:

    e1c69fc7daa90e6b2dcce5941fa0d5829b76d2f08441c783480215d6ad5d9d7e,109
    b2872d73d38f46601e9259c3bc7bced8761b069d4af972be93d6a0c7d4aa3b69,109
    f557782c1be2436f6f246f03f9ca76863dd896323e3ef4dda5259d5d8ac71355,109
    0598ca4fdfcacfebcfc0d2dd1d87ba40389c494abb10e8bf7feb4d36e05ac794,109
    2804708cbdd81361c01020a7f7b03c748133cf2b312aa798e0bb691b51fb1fcd,109
&hellip;

Show output script sizes in the main chain (block number, transaction
number, output number, output script length):

	./dogecoin-iterate -q --output=%bN,%tN,%oN:%ol

This will produce output like:

	0,0,0:67
	1,0,0:35
	2,0,0:35
	3,0,0:35
	4,0,0:35
	5,0,0:35
&hellip;

Show the five largest blocks, by height and blockhash:

	./dogecoin-iterate -q --block='%bl %bN %bh' | sort -nr | head -n5

This will produce output like:

	998194 108530 411dc03387c73c9854bcf8b9923451e3f4b74a294eb0883e3c129b9f8d7f17f3
	998185 110241 582509869cd749111360174453ff9cf84925b3fffdf5fb3d7bcf9e5708c67e47
	998137 109431 27c7530259d8c81b9e6d770a0c143d95caacce065001885618b2e150717d6691
	998120 116892 e757dbfc0e94bf00e87ddbc47bd779c56f5b8ec62459df96ee3070f806fc0db7
	997862 114182 02db872678e4f7073fa2e700bf9008bc10cec3e2049bcf63f5cb36650fb37fc1
&hellip;

You can see some examples by looking at the [manual page source](https://github.com/nerdcorenet/dogecoin-iterate/blob/master/doc/dogecoin-iterate.1.txt).

## Credits

Original [bitcoin-iterate](https://github.com/rustyrussell/bitcoin-iterate)
developed by Rusty Russell (rusty on #dogecoin-wizards on Freenode).

Dogecoin modifications by Mike Mallett (nerdcore on Freenode).
D7AinzNgAxZXyGzwKeynmeDGpuNYUy38Lp

Much alliteration!
Very fork!
Such WOW!
