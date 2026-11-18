// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 2

// CachePreAnimatedValue @ 14a3efbe0

FPreAnimatedControlRigState * __cdecl
UE::MovieScene::FPreAnimatedControlRigTraits::CachePreAnimatedValue
          (FPreAnimatedControlRigState *__return_storage_ptr__,FObjectKey param_1)

{
  int iVar1;
  longlong *plVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  bool bVar5;
  Type TVar6;
  UObject *pUVar7;
  UClass *pUVar8;
  FPreAnimatedControlRigState *pFVar9;
  USkeletalMeshComponent *this;
  FWeakObjectPtr local_res8;
  
  local_res8.ObjectIndex = param_1.ObjectIndex;
  local_res8.ObjectSerialNumber = param_1.ObjectSerialNumber;
  pUVar7 = FWeakObjectPtr::Get(&local_res8);
  if (pUVar7 != (UObject *)0x0) {
    pUVar8 = Z_Construct_UClass_UControlRig_NoRegister();
    iVar1 = (int)pUVar8->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar7->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar7->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar8->_padding_)) goto LAB_14a3efc5e;
  }
  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                    ("ControlRig",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Sequencer\\MovieSceneControlRigSystem.cpp"
                     ,0x30a,L"");
  pUVar7 = (UObject *)0x0;
  if (bVar5) {
    pcVar4 = (code *)swi(3);
    pFVar9 = (FPreAnimatedControlRigState *)(*pcVar4)();
    return pFVar9;
  }
LAB_14a3efc5e:
  (__return_storage_ptr__->SkeletalMeshRestoreState).SkeletalMeshCompEditorParams.AllocatorInstance.
  Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->SkeletalMeshRestoreState).SkeletalMeshCompEditorParams.ArrayNum = 0;
  (__return_storage_ptr__->SkeletalMeshRestoreState).SkeletalMeshCompEditorParams.ArrayMax = 0;
  plVar2 = *(longlong **)&pUVar7[0x17].field_0x8;
  pTVar3 = *(TReferenceControllerBase<1> **)&pUVar7[0x17].field_0x10;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (plVar2 == (longlong *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar9 = (FPreAnimatedControlRigState *)(*pcVar4)();
      return pFVar9;
    }
  }
  this = (USkeletalMeshComponent *)(**(code **)(*plVar2 + 0x28))(plVar2);
  if (this != (USkeletalMeshComponent *)0x0) {
    pUVar8 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
    iVar1 = (int)pUVar8->_padding_;
    if ((iVar1 <= *(int *)(this->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar8->_padding_)) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      FSkeletalMeshRestoreState::SaveState(&__return_storage_ptr__->SkeletalMeshRestoreState,this);
      TVar6 = USkeletalMeshComponent::GetAnimationMode(this);
      __return_storage_ptr__->AnimationMode = TVar6;
      return __return_storage_ptr__;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return __return_storage_ptr__;
}

// RestorePreAnimatedValue @ 14a452760

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UE::MovieScene::FPreAnimatedControlRigTraits::RestorePreAnimatedValue
          (FObjectKey *param_1,FPreAnimatedControlRigState *param_2,FRestoreStateParams *param_3)

{
  int iVar1;
  IControlRigObjectBinding *pIVar2;
  code *pcVar3;
  bool bVar4;
  Type TVar5;
  UControlRig *pUVar6;
  UClass *pUVar7;
  USkeletalMeshComponent *this;
  longlong lVar8;
  TReferenceControllerBase<1> *pTVar9;
  FWeakObjectPtr local_res8;
  
  local_res8.ObjectIndex = param_1->ObjectIndex;
  local_res8.ObjectSerialNumber = param_1->ObjectSerialNumber;
  pUVar6 = (UControlRig *)FWeakObjectPtr::Get(&local_res8);
  if (pUVar6 == (UControlRig *)0x0) {
    return;
  }
  pUVar7 = Z_Construct_UClass_UControlRig_NoRegister();
  iVar1 = (int)pUVar7->_padding_;
  if (*(int *)(pUVar6->_padding_ + 0x38) < iVar1) {
    return;
  }
  if ((longlong *)*(undefined1 **)(*(longlong *)(pUVar6->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
      &pUVar7->_padding_) {
    return;
  }
  (**(code **)(pUVar6->_padding_ + 0x2d0))(pUVar6);
  FControlRigBindingHelper::UnBindFromSequencerInstance(pUVar6);
  pTVar9 = (pUVar6->ObjectBinding).SharedReferenceCount.ReferenceController;
  pIVar2 = (pUVar6->ObjectBinding).Object;
  if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((pIVar2 == (IControlRigObjectBinding *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  this = (USkeletalMeshComponent *)(**(code **)((longlong)*pIVar2 + 0x28))(pIVar2);
  if (this == (USkeletalMeshComponent *)0x0) {
LAB_14a4528fe:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  }
  else {
    pUVar7 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
    iVar1 = (int)pUVar7->_padding_;
    if ((*(int *)(this->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(this->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar7->_padding_)) goto LAB_14a4528fe;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
    if ((this->_padding_ & 1) != 0) {
      USkeletalMeshComponent::SetUpdateAnimationInEditor(this,true);
      USkeletalMeshComponent::SetUpdateClothInEditor(this,true);
      if (this->bPostEvaluatingAnimation == '\0') {
        USkeletalMeshComponent::TickAnimation(this,0.0,false);
        (**(code **)(this->_padding_ + 0xb88))(this);
        USkinnedMeshComponent::RefreshFollowerComponents((USkinnedMeshComponent *)this);
        USceneComponent::UpdateComponentToWorld((USceneComponent *)this,None,None);
        (**(code **)(this->_padding_ + 0xbc8))(this);
        UActorComponent::MarkRenderTransformDirty((UActorComponent *)this);
        UActorComponent::MarkRenderDynamicDataDirty((UActorComponent *)this);
      }
      FSkeletalMeshRestoreState::RestoreState(&param_2->SkeletalMeshRestoreState);
      TVar5 = USkeletalMeshComponent::GetAnimationMode(this);
      if (TVar5 != param_2->AnimationMode) {
        USkeletalMeshComponent::SetAnimationMode(this,param_2->AnimationMode,true);
      }
    }
  }
  pTVar9 = (pUVar6->ObjectBinding).SharedReferenceCount.ReferenceController;
  pIVar2 = (pUVar6->ObjectBinding).Object;
  if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((pIVar2 == (IControlRigObjectBinding *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  lVar8 = (**(code **)((longlong)*pIVar2 + 0x28))(pIVar2);
  if (lVar8 != 0) {
    pUVar7 = Z_Construct_UClass_UControlRigComponent_NoRegister();
    iVar1 = (int)pUVar7->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)(lVar8 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar7->_padding_)) goto LAB_14a4529cf;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  pTVar9 = (pUVar6->ObjectBinding).SharedReferenceCount.ReferenceController;
  pIVar2 = (pUVar6->ObjectBinding).Object;
  if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((pIVar2 == (IControlRigObjectBinding *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  (**(code **)((longlong)*pIVar2 + 8))(pIVar2);
LAB_14a4529cf:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  return;
}

