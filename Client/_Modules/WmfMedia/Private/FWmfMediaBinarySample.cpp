// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WmfMedia
// Functions: 5

// ~FWmfMediaBinarySample @ 14ea97580

void __thiscall FWmfMediaBinarySample::~FWmfMediaBinarySample(FWmfMediaBinarySample *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FWmfMediaBinarySample__6B_;
  pFVar1 = (this->Buffer).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7IMediaBinarySample__6B_;
  return;
}

// GetData @ 14eaacfb0

void * __thiscall FWmfMediaBinarySample::GetData(FWmfMediaBinarySample *this)

{
  return (this->Buffer).AllocatorInstance.Data;
}

// GetDuration @ 14eaad000

FTimespan __thiscall FWmfMediaBinarySample::GetDuration(FWmfMediaBinarySample *this)

{
  long64 *in_RDX;
  
  *in_RDX = (this->Duration).Ticks;
  return (FTimespan)(long64)in_RDX;
}

// GetSize @ 14eaaf260

uint __thiscall FWmfMediaBinarySample::GetSize(FWmfMediaBinarySample *this)

{
  return (this->Buffer).ArrayNum;
}

// GetTime @ 14eab06a0

FMediaTimeStamp * __thiscall
FWmfMediaBinarySample::GetTime(FWmfMediaBinarySample *this,FMediaTimeStamp *__return_storage_ptr__)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (this->Time).SequenceIndex;
  iVar2 = (this->Time).LoopIndex;
  (__return_storage_ptr__->Time).Ticks = (this->Time).Time.Ticks;
  __return_storage_ptr__->SequenceIndex = iVar1;
  __return_storage_ptr__->LoopIndex = iVar2;
  return __return_storage_ptr__;
}

