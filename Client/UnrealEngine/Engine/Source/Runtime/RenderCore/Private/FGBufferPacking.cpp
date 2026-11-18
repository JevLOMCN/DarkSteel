// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 1

// FGBufferPacking @ 145d09ff0

FGBufferPacking * __thiscall FGBufferPacking::FGBufferPacking(FGBufferPacking *this)

{
  this->bIsValid = false;
  this->bFull = false;
  this->TargetIndex = -1;
  this->DstChannelIndex = -1;
  this->DstBitStart = -1;
  this->SrcChannelIndex = -1;
  this->SrcBitStart = -1;
  this->BitNum = -1;
  return this;
}

