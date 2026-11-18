// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MRMesh
// Functions: 1

// ~FMeshTrackerComponentBrickDataReceipt @ 146c66d00

void __thiscall
FMockDataMeshTrackerImpl::FMeshTrackerComponentBrickDataReceipt::
~FMeshTrackerComponentBrickDataReceipt(FMeshTrackerComponentBrickDataReceipt *this)

{
  code *pcVar1;
  bool bVar2;
  
  this->_padding_ =
       (longlong)&___7FMeshTrackerComponentBrickDataReceipt_FMockDataMeshTrackerImpl__6B_;
  if ((this->CachedMeshData).Object == (FCachedMeshData *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FCachedMeshData::Recycle((this->CachedMeshData).Object,&this->CachedMeshData);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->CachedMeshData).SharedReferenceCount.ReferenceController);
  this->_padding_ = (longlong)&___7FBrickDataReceipt_IMRMesh__6B_;
  return;
}

