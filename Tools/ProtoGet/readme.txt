Place the latest ProjectDS.exe binary into this folder.
Make sure to run this if you haven't already "python -m pip install protobuf"
Then run GetProtos.bat

GetProtos.bat = .proto files
GetProtosC.bat = .protoc files/.proto files

--- protoget_full.py (added 2026-10-22) ---
protod3.py misses descriptors that have no package line and truncates large ones (client_msg / server_msg / client_msg_twoway / api_*).
protoget_full.py extracts the complete set with exact descriptor extents and adds option csharp_namespace so Server/M5.Protocol can compile them.
  python -I protoget_full.py <ProjectDS.exe> <out dir> <seed dir>   (e.g. Server\Protos\Global for both out dir and seed dir)
The files in Server/Protos/Global were regenerated this way; after a client patch re-run it, then build M5.Protocol.

