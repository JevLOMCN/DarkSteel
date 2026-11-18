// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MRMesh
// Functions: 3

// DestroyObject @ 146c69790

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FMockDataMeshTrackerImpl::FCachedMeshData,SharedPointerInternals::DefaultDeleter<FMockDataMeshTrackerImpl::FCachedMeshData>,1>
::DestroyObject(TReferenceControllerWithDeleter<FMockDataMeshTrackerImpl::FCachedMeshData,SharedPointerInternals::DefaultDeleter<FMockDataMeshTrackerImpl::FCachedMeshData>,1>
                *this)

{
  if (this->Object != (FCachedMeshData *)0x0) {
    FMockDataMeshTrackerImpl::FCachedMeshData::_scalar_deleting_destructor_(this->Object,1);
    return;
  }
  return;
}

// DestroyObject @ 146c697b0

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FMeshArrayHolder,SharedPointerInternals::DefaultDeleter<FMeshArrayHolder>,1>
::DestroyObject(TReferenceControllerWithDeleter<FMeshArrayHolder,SharedPointerInternals::DefaultDeleter<FMeshArrayHolder>,1>
                *this)

{
  FMeshArrayHolder *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FMeshArrayHolder *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146c697c1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pFVar1->_padding_)(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 146c697d0

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FMockDataMeshTrackerImpl::FMeshTrackerComponentBrickDataReceipt,SharedPointerInternals::DefaultDeleter<FMockDataMeshTrackerImpl::FMeshTrackerComponentBrickDataReceipt>,1>
::DestroyObject(TReferenceControllerWithDeleter<FMockDataMeshTrackerImpl::FMeshTrackerComponentBrickDataReceipt,SharedPointerInternals::DefaultDeleter<FMockDataMeshTrackerImpl::FMeshTrackerComponentBrickDataReceipt>,1>
                *this)

{
  FMeshTrackerComponentBrickDataReceipt *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FMeshTrackerComponentBrickDataReceipt *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146c697e1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pFVar1->_padding_)(pFVar1,1);
    return;
  }
  return;
}

