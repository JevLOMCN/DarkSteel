// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AppleARKitFaceSupport
// Functions: 2

// DestroyObject @ 14d286e40

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FAppleARKitLiveLinkFileWriter,SharedPointerInternals::DefaultDeleter<FAppleARKitLiveLinkFileWriter>,1>
::DestroyObject(TReferenceControllerWithDeleter<FAppleARKitLiveLinkFileWriter,SharedPointerInternals::DefaultDeleter<FAppleARKitLiveLinkFileWriter>,1>
                *this)

{
  FAppleARKitLiveLinkFileWriter *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FAppleARKitLiveLinkFileWriter *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014d286e51. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pFVar1->_padding_)(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 14d286e60

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FAppleARKitLiveLinkSource,SharedPointerInternals::DefaultDeleter<FAppleARKitLiveLinkSource>,1>
::DestroyObject(TReferenceControllerWithDeleter<FAppleARKitLiveLinkSource,SharedPointerInternals::DefaultDeleter<FAppleARKitLiveLinkSource>,1>
                *this)

{
  FAppleARKitLiveLinkSource *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FAppleARKitLiveLinkSource *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014d286e76. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pFVar1->_padding_)(&pFVar1->_padding_,1);
    return;
  }
  return;
}

