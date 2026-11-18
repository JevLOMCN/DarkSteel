// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 3

// FLinkerExportArchive @ 141ed38d0

FLinkerExportArchive * __thiscall
FLinkerExportArchive::FLinkerExportArchive
          (FLinkerExportArchive *this,FLinkerLoad *param_1,long64 param_2,long64 param_3)

{
  FArchiveProxy::FArchiveProxy((FArchiveProxy *)this,(FArchive *)&param_1->_padding_);
  this->ExportSerialOffset = param_2;
  this->_padding_ = (longlong)&___7FLinkerExportArchive__6B_;
  this->ExportSerialSize = param_3;
  if (((param_1->_padding_ & 2) == 0) ||
     ((int)((ulonglong)*(undefined8 *)((longlong)&param_1->_padding_ + 4) >> 0x20) < 0x3f1)) {
    this->bExportsCookedToSeparateArchive = false;
  }
  else {
    this->bExportsCookedToSeparateArchive = true;
  }
  return this;
}

// Seek @ 141f0f1e0

void __thiscall FLinkerExportArchive::Seek(FLinkerExportArchive *this,long64 param_1)

{
  if ((this->bExportsCookedToSeparateArchive != false) && (param_1 <= this->ExportSerialSize)) {
    param_1 = param_1 + this->ExportSerialOffset;
  }
                    /* WARNING: Could not recover jumptable at 0x000141f0f206. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this->_padding_ + 0x1b8))((longlong *)this->_padding_,param_1);
  return;
}

// Tell @ 141f14cd0

long64 __thiscall FLinkerExportArchive::Tell(FLinkerExportArchive *this)

{
  long64 lVar1;
  
  lVar1 = (**(code **)(*(longlong *)this->_padding_ + 0x28))();
  if (this->bExportsCookedToSeparateArchive != false) {
    lVar1 = lVar1 - this->ExportSerialOffset;
  }
  return lVar1;
}

