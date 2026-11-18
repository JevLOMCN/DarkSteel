// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuCO
// Functions: 2

// DestroyObject @ 14abd5e30

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FTexturePlatformData,SharedPointerInternals::DefaultDeleter<FTexturePlatformData>,1>
::DestroyObject(TReferenceControllerWithDeleter<FTexturePlatformData,SharedPointerInternals::DefaultDeleter<FTexturePlatformData>,1>
                *this)

{
  FTexturePlatformData *this_00;
  
  this_00 = this->Object;
  if (this_00 != (FTexturePlatformData *)0x0) {
    FTexturePlatformData::~FTexturePlatformData(this_00);
    ::operator_delete(this_00,0x38);
    return;
  }
  return;
}

// DestroyObject @ 14ac5b270

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<IBulkDataIORequest,SharedPointerInternals::DefaultDeleter<IBulkDataIORequest>,1>
::DestroyObject(TReferenceControllerWithDeleter<IBulkDataIORequest,SharedPointerInternals::DefaultDeleter<IBulkDataIORequest>,1>
                *this)

{
  IBulkDataIORequest *pIVar1;
  
  pIVar1 = this->Object;
  if (pIVar1 != (IBulkDataIORequest *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014ac5b281. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*pIVar1)(pIVar1,1);
    return;
  }
  return;
}

