// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 3

// FICUCachedFileData @ 1416d4ec0

FICUCachedFileData * __thiscall
FICUInternationalization::FICUCachedFileData::FICUCachedFileData
          (FICUCachedFileData *this,FICUCachedFileData *param_1)

{
  this->ReferenceCount = param_1->ReferenceCount;
  this->Buffer = param_1->Buffer;
  param_1->ReferenceCount = 0;
  param_1->Buffer = (void *)0x0;
  return this;
}

// FICUCachedFileData @ 1416d4ee0

FICUCachedFileData * __thiscall
FICUInternationalization::FICUCachedFileData::FICUCachedFileData
          (FICUCachedFileData *this,long64 param_1)

{
  void *pvVar1;
  
  this->ReferenceCount = 0;
  pvVar1 = _anon_134951D2::FICUOverrides::Malloc((void *)0x0,param_1);
  this->Buffer = pvVar1;
  return this;
}

// ~FICUCachedFileData @ 1416d8990

void __thiscall
FICUInternationalization::FICUCachedFileData::~FICUCachedFileData(FICUCachedFileData *this)

{
  void *pvVar1;
  ulong64 uVar2;
  
  pvVar1 = this->Buffer;
  if (pvVar1 != (void *)0x0) {
    uVar2 = FMemory::GetAllocSize(pvVar1);
    FICUOverrides::BytesInUseCount = FICUOverrides::BytesInUseCount - uVar2;
    if ((FThreadStats::TlsSlot != 0xffffffff) &&
       (FICUOverrides::CachedBytesInUseCount != FICUOverrides::BytesInUseCount)) {
      FICUOverrides::CachedBytesInUseCount = FICUOverrides::BytesInUseCount;
    }
    FMemory::Free(pvVar1);
    return;
  }
  return;
}

