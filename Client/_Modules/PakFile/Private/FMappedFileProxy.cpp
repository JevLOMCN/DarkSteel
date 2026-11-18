// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PakFile
// Functions: 2

// ~FMappedFileProxy @ 142a56650

void __thiscall FMappedFileProxy::~FMappedFileProxy(FMappedFileProxy *this)

{
  this->_padding_ = (longlong)&___7FMappedFileProxy__6B_;
  IMappedFileHandle::~IMappedFileHandle((IMappedFileHandle *)this);
  return;
}

// MapRegion @ 142a83dd0

IMappedFileRegion * __thiscall
FMappedFileProxy::MapRegion
          (FMappedFileProxy *this,long64 param_1,long64 param_2,FFileMappingFlags param_3)

{
  IMappedFileRegion *pIVar1;
  
  if (this->SharedMappedFileHandle != (IMappedFileHandle *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000142a83ddc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pIVar1 = (IMappedFileRegion *)(**(code **)(this->SharedMappedFileHandle->_padding_ + 8))();
    return pIVar1;
  }
  return (IMappedFileRegion *)0x0;
}

