// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 2

// CachePreAnimatedValue @ 146820070

FPreAnimatedSkeletalAnimationState * __thiscall
UE::MovieScene::FPreAnimatedSkeletalAnimationTraits::CachePreAnimatedValue
          (FPreAnimatedSkeletalAnimationTraits *this,
          FPreAnimatedSkeletalAnimationState *__return_storage_ptr__,FObjectKey *param_1)

{
  int iVar1;
  UAnimInstance *pUVar2;
  code *pcVar3;
  bool bVar4;
  Type TVar5;
  USkeletalMeshComponent *this_00;
  UClass *pUVar6;
  FPreAnimatedSkeletalAnimationState *pFVar7;
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res18;
  UAnimInstance *local_res20;
  
  (__return_storage_ptr__->CachedAnimInstance).WeakPtr = (FWeakObjectPtr)0x0;
  (__return_storage_ptr__->SkeletalMeshRestoreState).SkeletalMeshCompEditorParams.AllocatorInstance.
  Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->SkeletalMeshRestoreState).SkeletalMeshCompEditorParams.ArrayNum = 0;
  (__return_storage_ptr__->SkeletalMeshRestoreState).SkeletalMeshCompEditorParams.ArrayMax = 0;
  local_res18.ObjectIndex = param_1->ObjectIndex;
  local_res18.ObjectSerialNumber = param_1->ObjectSerialNumber;
  this_00 = (USkeletalMeshComponent *)FWeakObjectPtr::Get(&local_res18);
  if (this_00 != (USkeletalMeshComponent *)0x0) {
    pUVar6 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
    iVar1 = (int)pUVar6->_padding_;
    if ((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar6->_padding_)) {
      TVar5 = USkeletalMeshComponent::GetAnimationMode(this_00);
      __return_storage_ptr__->AnimationMode = TVar5;
      pUVar2 = (this_00->AnimScriptInstance).field0_0x0.DebugPtr;
      if (GC::GIsIncrementalReachabilityPending != false) {
        if (pUVar2 != (UAnimInstance *)0x0) {
          GC::MarkAsReachable((UObject *)pUVar2);
        }
        if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UAnimInstance *)0x0)) {
          GC::MarkAsReachable((UObject *)pUVar2);
        }
      }
      local_res10.ObjectIndex = 0;
      local_res10.ObjectSerialNumber = 0;
      local_res20 = pUVar2;
      if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UAnimInstance *)0x0)) {
        GC::MarkAsReachable((UObject *)pUVar2);
      }
      FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)&local_res20);
      (__return_storage_ptr__->CachedAnimInstance).WeakPtr = local_res10;
      FSkeletalMeshRestoreState::SaveState
                (&__return_storage_ptr__->SkeletalMeshRestoreState,this_00);
      return __return_storage_ptr__;
    }
  }
  bVar4 = Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_8775670319571533715>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneTracks\\Private\\Systems\\MovieSceneSkeletalAnimationSystem.cpp"
                     ,0x6d,"Component");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    pFVar7 = (FPreAnimatedSkeletalAnimationState *)(*pcVar3)();
    return pFVar7;
  }
  return __return_storage_ptr__;
}

// RestorePreAnimatedValue @ 146863e80

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UE::MovieScene::FPreAnimatedSkeletalAnimationTraits::RestorePreAnimatedValue
          (FPreAnimatedSkeletalAnimationTraits *this,FObjectKey *param_1,
          FPreAnimatedSkeletalAnimationState *param_2,FRestoreStateParams *param_3)

{
  int iVar1;
  UAnimInstance *this_00;
  UAnimInstance *pUVar2;
  int iVar3;
  bool bVar4;
  Type TVar5;
  USkeletalMeshComponent *this_01;
  UClass *pUVar6;
  UAnimSequencerInstance *this_02;
  longlong *plVar7;
  UObject *pUVar8;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar9;
  USkeletalMeshComponent *pUVar10;
  USkeletalMesh *pUVar11;
  USkeleton *pUVar12;
  USkeleton *pUVar13;
  UWorld *pUVar14;
  FWeakObjectPtr *pFVar15;
  FWeakObjectPtr *pFVar16;
  UObject *local_res10;
  FWeakObjectPtr local_38 [2];
  
  local_38[0].ObjectIndex = param_1->ObjectIndex;
  local_38[0].ObjectSerialNumber = param_1->ObjectSerialNumber;
  this_01 = (USkeletalMeshComponent *)FWeakObjectPtr::Get(local_38);
  if (this_01 != (USkeletalMeshComponent *)0x0) {
    pUVar6 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
    iVar1 = (int)pUVar6->_padding_;
    if (((iVar1 <= *(int *)(this_01->_padding_ + 0x38)) &&
        ((longlong *)
         *(undefined1 **)(*(longlong *)(this_01->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
         &pUVar6->_padding_)) && ((this_01->_padding_ & 1) != 0)) {
      this_02 = GetAnimSequencerInstance(this_01);
      if (this_02 != (UAnimSequencerInstance *)0x0) {
        pUVar6 = Z_Construct_UClass_USequencerAnimationSupport_NoRegister();
        plVar7 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)this_02,pUVar6);
        if (plVar7 != (longlong *)0x0) {
          (**(code **)(*plVar7 + 0x48))(plVar7);
          (**(code **)(*plVar7 + 0x40))(plVar7);
        }
      }
      FAnimCustomInstanceHelper::UnbindFromSkeletalMeshComponent<UAnimSequencerInstance>(this_01);
      iVar1 = (param_2->SkeletalMeshRestoreState).SkeletalMeshCompEditorParams.ArrayNum;
      pFVar15 = (FWeakObjectPtr *)
                (param_2->SkeletalMeshRestoreState).SkeletalMeshCompEditorParams.AllocatorInstance.
                Data;
      pFVar16 = pFVar15 + (longlong)iVar1 * 2;
      while( true ) {
        if ((param_2->SkeletalMeshRestoreState).SkeletalMeshCompEditorParams.ArrayNum != iVar1) {
          `TCheckedPointerIterator<FSkeletalMeshEditorParams,int,0>::operator!='::__l2::<lambda_1>::
          operator()(&local_res10);
        }
        if (pFVar15 == pFVar16) break;
        bVar4 = FWeakObjectPtr::IsValid(pFVar15);
        if (bVar4) {
          pUVar8 = FWeakObjectPtr::Get(pFVar15);
          (**(code **)(*(longlong *)pUVar8 + 3000))(pUVar8,pFVar15[1].ObjectSerialNumber);
        }
        pFVar15 = pFVar15 + 2;
      }
      TVar5 = USkeletalMeshComponent::GetAnimationMode(this_01);
      if (TVar5 != param_2->AnimationMode) {
        USkeletalMeshComponent::SetAnimationMode(this_01,param_2->AnimationMode,true);
      }
      TVar9 = FWeakObjectPtr::Pin(&(param_2->CachedAnimInstance).WeakPtr);
      this_00 = *(UAnimInstance **)TVar9.Object;
      *(undefined8 *)TVar9.Object = 0;
      if (local_res10 != (UObject *)0x0) {
        UEStrongObjectPtr_Private::ReleaseUObject(local_res10);
      }
      if (((this_00 != (UAnimInstance *)0x0) && ((*(uint *)&this_00->field_0x8 >> 0x1e & 1) == 0))
         && (pUVar10 = UAnimInstance::GetSkelMeshComponentChecked(this_00), pUVar10 == this_01)) {
        if (GC::GIsIncrementalReachabilityPending != false) {
          GC::MarkAsReachable((UObject *)this_00);
        }
        (this_01->AnimScriptInstance).field0_0x0.DebugPtr = this_00;
        (param_2->CachedAnimInstance).WeakPtr = (FWeakObjectPtr)0x0;
        if (((this_01->AnimScriptInstance).field0_0x0.DebugPtr != (UAnimInstance *)0x0) &&
           (pUVar11 = USkeletalMeshComponent::GetSkeletalMeshAsset(this_01),
           pUVar11 != (USkeletalMesh *)0x0)) {
          pUVar11 = USkeletalMeshComponent::GetSkeletalMeshAsset(this_01);
          pUVar12 = (USkeleton *)(**(code **)(pUVar11->_padding_ + 0x408))(pUVar11);
          pUVar13 = (((this_01->AnimScriptInstance).field0_0x0.DebugPtr)->CurrentSkeleton).
                    field0_0x0.DebugPtr;
          if (pUVar13 == (USkeleton *)0x0) {
            bVar4 = pUVar12 == (USkeleton *)0x0;
          }
          else {
            bVar4 = pUVar13 == pUVar12;
          }
          if (!bVar4) {
            pUVar11 = USkeletalMeshComponent::GetSkeletalMeshAsset(this_01);
            pUVar13 = (USkeleton *)(**(code **)(pUVar11->_padding_ + 0x408))(pUVar11);
            pUVar2 = (this_01->AnimScriptInstance).field0_0x0.DebugPtr;
            if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar13 != (USkeleton *)0x0)) {
              GC::MarkAsReachable((UObject *)pUVar13);
            }
            (pUVar2->CurrentSkeleton).field0_0x0.DebugPtr = pUVar13;
          }
        }
        USkeletalMeshComponent::InitializeAnimScriptInstance(this_01,true,false);
      }
      USkeletalMeshComponent::SetUpdateAnimationInEditor(this_01,true);
      USkeletalMeshComponent::SetUpdateClothInEditor(this_01,true);
      if (this_01->bPostEvaluatingAnimation == '\0') {
        USkeletalMeshComponent::TickAnimation(this_01,0.0,false);
        (**(code **)(this_01->_padding_ + 0xb88))(this_01);
        USkinnedMeshComponent::RefreshFollowerComponents((USkinnedMeshComponent *)this_01);
        USceneComponent::UpdateComponentToWorld((USceneComponent *)this_01,None,None);
        (**(code **)(this_01->_padding_ + 0xbc8))(this_01);
        UActorComponent::MarkRenderTransformDirty((UActorComponent *)this_01);
        UActorComponent::MarkRenderDynamicDataDirty((UActorComponent *)this_01);
      }
      iVar1 = (param_2->SkeletalMeshRestoreState).SkeletalMeshCompEditorParams.ArrayNum;
      pFVar15 = (FWeakObjectPtr *)
                (param_2->SkeletalMeshRestoreState).SkeletalMeshCompEditorParams.AllocatorInstance.
                Data;
      pFVar16 = pFVar15 + (longlong)iVar1 * 2;
      while( true ) {
        if ((param_2->SkeletalMeshRestoreState).SkeletalMeshCompEditorParams.ArrayNum != iVar1) {
          `TCheckedPointerIterator<FSkeletalMeshEditorParams,int,0>::operator!='::__l2::<lambda_1>::
          operator()(&local_res10);
        }
        if (pFVar15 == pFVar16) break;
        bVar4 = FWeakObjectPtr::IsValid(pFVar15);
        if (bVar4) {
          iVar3 = pFVar15[1].ObjectIndex;
          pUVar8 = FWeakObjectPtr::Get(pFVar15);
          pUVar8[0x33].field_0xc = (char)iVar3;
          pUVar8 = FWeakObjectPtr::Get(pFVar15);
          (**(code **)(*(longlong *)pUVar8 + 3000))(pUVar8,pFVar15[1].ObjectSerialNumber);
        }
        pFVar15 = pFVar15 + 2;
      }
      if ((this_01->_padding_ != 0) ||
         (pUVar14 = UActorComponent::GetWorld_Uncached((UActorComponent *)this_01),
         pUVar14 != (UWorld *)0x0)) {
        pUVar14 = (UWorld *)this_01->_padding_;
        if (pUVar14 == (UWorld *)0x0) {
          pUVar14 = UActorComponent::GetWorld_Uncached((UActorComponent *)this_01);
        }
        bVar4 = UWorld::IsGameWorld(pUVar14);
        if (!bVar4) {
          USkinnedMeshComponent::ClearMotionVector((USkinnedMeshComponent *)this_01);
        }
      }
      if (this_00 != (UAnimInstance *)0x0) {
        UEStrongObjectPtr_Private::ReleaseUObject((UObject *)this_00);
      }
    }
  }
  return;
}

