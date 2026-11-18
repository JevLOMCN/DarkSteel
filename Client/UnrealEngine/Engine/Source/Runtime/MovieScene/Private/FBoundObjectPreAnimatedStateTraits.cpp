// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 5

// FindGroupImpl @ 1461a8580

FPreAnimatedStorageGroupHandle __thiscall
UE::MovieScene::FBoundObjectPreAnimatedStateTraits::FindGroupImpl
          (FBoundObjectPreAnimatedStateTraits *this,FObjectComponent *param_1)

{
  FPreAnimatedObjectGroupManager *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  UObject *pUVar5;
  TTuple<FObjectKey,UE::MovieScene::FPreAnimatedStorageGroupHandle> *pTVar6;
  FObjectComponent *in_R8;
  FWeakObjectPtr local_res8;
  FObjectKey local_res10;
  UObject *local_res20;
  
  if ((this->ObjectGroupManager).Object == (FPreAnimatedObjectGroupManager *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return (FPreAnimatedStorageGroupHandle)iVar4;
    }
  }
  pFVar1 = (this->ObjectGroupManager).Object;
  pUVar5 = FObjectComponent::GetObject(in_R8);
  local_res10.ObjectIndex = 0;
  local_res10.ObjectSerialNumber = 0;
  if (pUVar5 != (UObject *)0x0) {
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable(pUVar5);
    }
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    local_res20 = pUVar5;
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable(pUVar5);
    }
    FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res20);
    local_res10.ObjectIndex = local_res8.ObjectIndex;
    local_res10.ObjectSerialNumber = local_res8.ObjectSerialNumber;
  }
  pTVar6 = TSet<TTuple<FObjectKey,UE::MovieScene::FPreAnimatedStorageGroupHandle>,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FPreAnimatedStorageGroupHandle,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FObjectKey,UE::MovieScene::FPreAnimatedStorageGroupHandle>,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FPreAnimatedStorageGroupHandle,0>,FDefaultSetAllocator>
                   *)&pFVar1->field_0x18,&local_res10);
  if (pTVar6 != (TTuple<FObjectKey,UE::MovieScene::FPreAnimatedStorageGroupHandle> *)0x0) {
    *(undefined4 *)&(param_1->ObjectPtr).field0_0x0 = *(undefined4 *)&pTVar6->field_0x8;
    return (FPreAnimatedStorageGroupHandle)(int)param_1;
  }
  *(undefined4 *)&(param_1->ObjectPtr).field0_0x0 = 0xffffffff;
  return (FPreAnimatedStorageGroupHandle)(int)param_1;
}

// FindGroupImpl @ 1461a8670

FPreAnimatedStorageGroupHandle __thiscall
UE::MovieScene::FBoundObjectPreAnimatedStateTraits::FindGroupImpl
          (FBoundObjectPreAnimatedStateTraits *this,UObject *param_1)

{
  FPreAnimatedObjectGroupManager *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TTuple<FObjectKey,UE::MovieScene::FPreAnimatedStorageGroupHandle> *pTVar5;
  UObject *in_R8;
  FWeakObjectPtr local_res8;
  FObjectKey local_res10;
  undefined1 local_res18 [8];
  
  if ((this->ObjectGroupManager).Object == (FPreAnimatedObjectGroupManager *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return (FPreAnimatedStorageGroupHandle)iVar4;
    }
  }
  pFVar1 = (this->ObjectGroupManager).Object;
  local_res10.ObjectIndex = 0;
  local_res10.ObjectSerialNumber = 0;
  if (in_R8 != (UObject *)0x0) {
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable(in_R8);
    }
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable(in_R8);
    }
    FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)local_res18);
    local_res10.ObjectIndex = local_res8.ObjectIndex;
    local_res10.ObjectSerialNumber = local_res8.ObjectSerialNumber;
  }
  pTVar5 = TSet<TTuple<FObjectKey,UE::MovieScene::FPreAnimatedStorageGroupHandle>,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FPreAnimatedStorageGroupHandle,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FObjectKey,UE::MovieScene::FPreAnimatedStorageGroupHandle>,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FPreAnimatedStorageGroupHandle,0>,FDefaultSetAllocator>
                   *)&pFVar1->field_0x18,&local_res10);
  if (pTVar5 != (TTuple<FObjectKey,UE::MovieScene::FPreAnimatedStorageGroupHandle> *)0x0) {
    *(undefined4 *)param_1 = *(undefined4 *)&pTVar5->field_0x8;
    return (FPreAnimatedStorageGroupHandle)(int)param_1;
  }
  *(undefined4 *)param_1 = 0xffffffff;
  return (FPreAnimatedStorageGroupHandle)(int)param_1;
}

// Initialize @ 1461b5960

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::FBoundObjectPreAnimatedStateTraits::Initialize
          (FBoundObjectPreAnimatedStateTraits *this,FPreAnimatedStorageID param_1,
          FPreAnimatedStateExtension *param_2)

{
  TSharedPtr<UE::MovieScene::FPreAnimatedObjectGroupManager,1> *pTVar1;
  TSharedPtr<UE::MovieScene::FPreAnimatedObjectGroupManager,1> local_18;
  
  pTVar1 = FPreAnimatedStateExtension::
           GetOrCreateGroupManager<UE::MovieScene::FPreAnimatedObjectGroupManager>
                     (param_2,&local_18);
  if (&this->ObjectGroupManager != pTVar1) {
    (this->ObjectGroupManager).Object = pTVar1->Object;
    pTVar1->Object = (FPreAnimatedObjectGroupManager *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->ObjectGroupManager).SharedReferenceCount,&pTVar1->SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return;
}

// MakeGroupImpl @ 1461be0c0

/* WARNING: Enum "Type": Some values do not have unique names */

FPreAnimatedStorageGroupHandle __thiscall
UE::MovieScene::FBoundObjectPreAnimatedStateTraits::MakeGroupImpl
          (FBoundObjectPreAnimatedStateTraits *this,FObjectComponent *param_1)

{
  TPreAnimatedStateGroupManager<FObjectKey> *this_00;
  code *pcVar1;
  bool bVar2;
  int iVar3;
  UObject *pUVar4;
  FObjectComponent *in_R8;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res10;
  UObject *local_res20;
  
  if ((this->ObjectGroupManager).Object == (FPreAnimatedObjectGroupManager *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return (FPreAnimatedStorageGroupHandle)iVar3;
    }
  }
  this_00 = (TPreAnimatedStateGroupManager<FObjectKey> *)(this->ObjectGroupManager).Object;
  pUVar4 = FObjectComponent::GetObject(in_R8);
  local_res10.ObjectIndex = 0;
  local_res10.ObjectSerialNumber = 0;
  if (pUVar4 != (UObject *)0x0) {
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable(pUVar4);
    }
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    local_res20 = pUVar4;
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable(pUVar4);
    }
    FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res20);
    local_res10 = local_res8;
  }
  TPreAnimatedStateGroupManager<FObjectKey>::MakeGroupForKey(this_00,(FObjectKey *)param_1);
  return (FPreAnimatedStorageGroupHandle)(int)param_1;
}

// MakeGroupImpl @ 1461be190

/* WARNING: Enum "Type": Some values do not have unique names */

FPreAnimatedStorageGroupHandle __thiscall
UE::MovieScene::FBoundObjectPreAnimatedStateTraits::MakeGroupImpl
          (FBoundObjectPreAnimatedStateTraits *this,UObject *param_1)

{
  TPreAnimatedStateGroupManager<FObjectKey> *this_00;
  code *pcVar1;
  bool bVar2;
  int iVar3;
  UObject *in_R8;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res10;
  undefined1 local_res18 [8];
  
  if ((this->ObjectGroupManager).Object == (FPreAnimatedObjectGroupManager *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return (FPreAnimatedStorageGroupHandle)iVar3;
    }
  }
  this_00 = (TPreAnimatedStateGroupManager<FObjectKey> *)(this->ObjectGroupManager).Object;
  local_res10.ObjectIndex = 0;
  local_res10.ObjectSerialNumber = 0;
  if (in_R8 != (UObject *)0x0) {
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable(in_R8);
    }
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable(in_R8);
    }
    FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)local_res18);
    local_res10 = local_res8;
  }
  TPreAnimatedStateGroupManager<FObjectKey>::MakeGroupForKey(this_00,(FObjectKey *)param_1);
  return (FPreAnimatedStorageGroupHandle)(int)param_1;
}

