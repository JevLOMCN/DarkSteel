// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 3

// ~ITwoAxisPropertyEditBehaviorTarget @ 14963df00

void __thiscall
ITwoAxisPropertyEditBehaviorTarget::~ITwoAxisPropertyEditBehaviorTarget
          (ITwoAxisPropertyEditBehaviorTarget *this)

{
  *this = (ITwoAxisPropertyEditBehaviorTarget)&___7ITwoAxisPropertyEditBehaviorTarget__6B_;
  return;
}

// GetCaptureKey @ 1496528c0

FKey * __thiscall
ITwoAxisPropertyEditBehaviorTarget::GetCaptureKey
          (ITwoAxisPropertyEditBehaviorTarget *this,FKey *__return_storage_ptr__)

{
  atomic<int> *paVar1;
  FSharedReferencer<1> FVar2;
  
  __return_storage_ptr__->KeyName = EKeys::B.KeyName;
  (__return_storage_ptr__->KeyDetails).Object = EKeys::B.KeyDetails.Object;
  FVar2 = EKeys::B.KeyDetails.SharedReferenceCount;
  (__return_storage_ptr__->KeyDetails).SharedReferenceCount.ReferenceController =
       EKeys::B.KeyDetails.SharedReferenceCount.ReferenceController;
  if (FVar2.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(FVar2.ReferenceController)->SharedReferenceCount;
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// PostDragUpdated @ 14965ee30

void __thiscall
ITwoAxisPropertyEditBehaviorTarget::PostDragUpdated(ITwoAxisPropertyEditBehaviorTarget *this)

{
  return;
}

