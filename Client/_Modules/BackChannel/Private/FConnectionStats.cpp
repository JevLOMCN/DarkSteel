// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BackChannel
// Functions: 1

// FConnectionStats @ 14e7f31f0

FConnectionStats * __thiscall
IBackChannelSocketConnection::FConnectionStats::FConnectionStats(FConnectionStats *this)

{
  LARGE_INTEGER local_res8 [4];
  
  this->PacketsSent = 0;
  this->PacketsReceived = 0;
  this->BytesSent = 0;
  this->BytesReceived = 0;
  this->Errors = 0;
  this->LastSendTime = 0.0;
  this->LastReceiveTime = 0.0;
  QueryPerformanceCounter(local_res8);
  this->LastErrorTime =
       (double)local_res8[0].QuadPart * FGenericPlatformTime::SecondsPerCycle +
       __real_4170000000000000;
  QueryPerformanceCounter(local_res8);
  this->LastSuccessTime =
       (double)local_res8[0].QuadPart * FGenericPlatformTime::SecondsPerCycle +
       __real_4170000000000000;
  return this;
}

