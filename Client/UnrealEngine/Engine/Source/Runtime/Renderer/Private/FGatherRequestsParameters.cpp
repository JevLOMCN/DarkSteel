// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// FGatherRequestsParameters @ 1458cb8d0

FGatherRequestsParameters * __thiscall
FGatherRequestsParameters::FGatherRequestsParameters(FGatherRequestsParameters *this)

{
  this->System = (FVirtualTextureSystem *)0x0;
  this->UniquePageList = (FUniquePageList *)0x0;
  this->PageUpdateBuffers = (FPageUpdateBuffer *)0x0;
  this->RequestList = (FUniqueRequestList *)0x0;
  this->PageUpdateFlushCount = 0;
  this->PageStartIndex = 0;
  this->NumPages = 0;
  this->bForceContinuousUpdate = false;
  this->bEnableLoadRequests = false;
  return this;
}

