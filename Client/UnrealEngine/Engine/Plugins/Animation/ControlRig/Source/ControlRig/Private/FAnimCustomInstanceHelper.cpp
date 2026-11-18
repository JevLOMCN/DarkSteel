// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 2

// BindToSkeletalMeshComponent<UControlRigLayerInstance> @ 14a38dbc0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UControlRigLayerInstance * __cdecl
FAnimCustomInstanceHelper::BindToSkeletalMeshComponent<UControlRigLayerInstance>
          (USkeletalMeshComponent *param_1,bool *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  UObjectBaseUtility *this;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  char cVar9;
  Type TVar10;
  UClass *pUVar11;
  UAnimInstance *pUVar12;
  UClass *pUVar13;
  UControlRigLayerInstance *pUVar14;
  longlong *plVar15;
  UAnimInstance *pUVar16;
  UAnimInstance *pUVar17;
  UAnimInstance *pUVar18;
  ForAnyElementType FVar19;
  UAnimInstance *pUVar20;
  undefined1 local_res8 [8];
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  TArray<USceneComponent_*,TSizedDefaultAllocator<32>_> local_58;
  
  pUVar18 = (UAnimInstance *)0x0;
  pUVar20 = (UAnimInstance *)0x0;
  *param_2 = false;
  *(undefined1 *)((longlong)&param_1->_padding_ + 4) = 0;
  local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.ArrayNum = 0;
  local_58.ArrayMax = 0;
  USceneComponent::GetChildrenComponents((USceneComponent *)param_1,true,&local_58);
  iVar3 = local_58.ArrayNum;
  pFVar1 = local_58.AllocatorInstance.Data + (longlong)local_58.ArrayNum * 8;
  FVar19.Data = local_58.AllocatorInstance.Data;
  while( true ) {
    if (local_58.ArrayNum != iVar3) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<USceneComponent_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (FVar19.Data == pFVar1) break;
    lVar4 = *(longlong *)FVar19.Data;
    if (lVar4 != 0) {
      pUVar11 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
      iVar2 = (int)pUVar11->_padding_;
      if ((iVar2 <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)iVar2 * 8)
          == &pUVar11->_padding_)) {
        *(undefined1 *)(lVar4 + 0x804) = 0;
      }
    }
    FVar19.Data = FVar19.Data + 8;
  }
  bVar6 = ShouldCreateCustomInstancePlayer(param_1);
  pUVar17 = (param_1->AnimScriptInstance).field0_0x0.DebugPtr;
  pUVar12 = pUVar18;
  if (pUVar17 != (UAnimInstance *)0x0) {
    pUVar11 = Z_Construct_UClass_USequencerAnimationSupport_NoRegister();
    pUVar12 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)pUVar17,pUVar11);
  }
  pUVar11 = UControlRigLayerInstance::StaticClass();
  pUVar13 = Z_Construct_UClass_USequencerAnimationSupport_NoRegister();
  bVar7 = UClass::ImplementsInterface(pUVar11,pUVar13);
  bVar8 = false;
  if (bVar7) {
    pUVar11 = UControlRigLayerInstance::StaticClass();
    if ((pUVar11->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(pUVar11);
    }
    this = (UObjectBaseUtility *)(pUVar11->ClassDefaultObject).field0_0x0.DebugPtr;
    pUVar11 = UControlRigLayerInstance::StaticClass();
    lVar4 = *(longlong *)&this->field_0x10;
    iVar3 = (int)pUVar11->_padding_;
    if (((*(int *)(lVar4 + 0x38) < iVar3) ||
        ((longlong *)*(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar3 * 8) !=
         &pUVar11->_padding_)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Ret->IsA(T::StaticClass())",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                           ,0x1181,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      pUVar14 = (UControlRigLayerInstance *)(*pcVar5)();
      return pUVar14;
    }
    pUVar11 = Z_Construct_UClass_USequencerAnimationSupport_NoRegister();
    plVar15 = UObjectBaseUtility::GetInterfaceAddress(this,pUVar11);
    if ((plVar15 == (longlong *)0x0) ||
       (cVar9 = (**(code **)(*plVar15 + 0x20))(plVar15), cVar9 == '\0')) {
      bVar8 = false;
    }
    else {
      bVar8 = true;
    }
  }
  pUVar16 = pUVar20;
  if ((bVar6) && (pUVar12 == (UAnimInstance *)0x0)) {
    TVar10 = USkeletalMeshComponent::GetAnimationMode(param_1);
    if (TVar10 != AnimationCustomMode) {
      USkeletalMeshComponent::SetAnimationMode(param_1,AnimationCustomMode,true);
    }
    if ((param_1->AnimScriptInstance).field0_0x0.DebugPtr != (UAnimInstance *)0x0) {
      pUVar11 = UControlRigLayerInstance::StaticClass();
      bVar6 = FObjectPtr::IsA((FObjectPtr *)&param_1->AnimScriptInstance,pUVar11);
      if ((bVar6) &&
         (pUVar17 = (param_1->AnimScriptInstance).field0_0x0.DebugPtr,
         pUVar17 != (UAnimInstance *)0x0)) {
        lVar4 = *(longlong *)&pUVar17->field_0x10;
        pUVar11 = UControlRigLayerInstance::StaticClass();
        if (pUVar11 != (UClass *)0x0) {
          iVar3 = (int)pUVar11->_padding_;
          if ((*(int *)(lVar4 + 0x38) < iVar3) ||
             ((longlong *)*(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar3 * 8) !=
              &pUVar11->_padding_)) {
            bVar6 = false;
          }
          else {
            bVar6 = true;
          }
          if (bVar6) {
            lVar4 = *(longlong *)&((param_1->AnimScriptInstance).field0_0x0.DebugPtr)->field_0x10;
            pUVar11 = UControlRigLayerInstance::StaticClass();
            pUVar16 = pUVar18;
            if (pUVar11 == (UClass *)0x0) goto LAB_14a38e215;
            iVar3 = (int)pUVar11->_padding_;
            if ((*(int *)(lVar4 + 0x38) < iVar3) ||
               ((longlong *)*(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar3 * 8) !=
                &pUVar11->_padding_)) {
              bVar6 = false;
            }
            else {
              bVar6 = true;
            }
            if (!bVar6) goto LAB_14a38e215;
            goto LAB_14a38e1ed;
          }
        }
      }
    }
    local_res10 = 0;
    pUVar11 = UControlRigLayerInstance::StaticClass();
    pUVar16 = (UAnimInstance *)
              NewObject<UControlRigLayerInstance>
                        ((UObject *)param_1,pUVar11,(FName)0x0,RF_NoFlags,(UObject *)0x0,false,
                         (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar16 != (UAnimInstance *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar16);
    }
    (param_1->AnimScriptInstance).field0_0x0.DebugPtr = pUVar16;
    UAnimInstance::InitializeAnimation(pUVar16,false);
    *param_2 = true;
    goto LAB_14a38e215;
  }
  lVar4 = *(longlong *)&pUVar17->field_0x10;
  pUVar11 = UControlRigLayerInstance::StaticClass();
  if (pUVar11 == (UClass *)0x0) {
LAB_14a38dedc:
    if (pUVar12 != (UAnimInstance *)0x0) {
      pUVar20 = (UAnimInstance *)(**(code **)(*(longlong *)pUVar12 + 0x10))(pUVar12);
      if (pUVar20 == (UAnimInstance *)0x0) {
        cVar9 = (**(code **)(*(longlong *)pUVar12 + 0x20))(pUVar12);
        if (cVar9 == '\0') {
          if (2 < (byte)LogAnimation._0_1_) {
            UE::Logging::Private::BasicLog<3>
                      (&`public:_static_class_UControlRigLayerInstance*___ptr64___cdecl_FAnimCustomInstanceHelper::BindToSkeletalMeshComponent<UControlRigLayerInstance>(USkeletalMeshComponent*___ptr64,bool&___ptr64)'
                        ::__l43::LOG_Static,(FLogCategoryBase *)&LogAnimation);
          }
        }
        else {
          local_res18 = 0;
          pUVar11 = UControlRigLayerInstance::StaticClass();
          pUVar16 = (UAnimInstance *)
                    NewObject<UControlRigLayerInstance>
                              ((UObject *)param_1,pUVar11,(FName)0x0,RF_NoFlags,(UObject *)0x0,false
                               ,(FObjectInstancingGraph *)0x0,(UPackage *)0x0);
          UAnimInstance::InitializeAnimation(pUVar16,false);
          (**(code **)(*(longlong *)pUVar12 + 0x18))(pUVar12,pUVar16);
          *param_2 = true;
        }
        goto LAB_14a38e215;
      }
      lVar4 = *(longlong *)&pUVar20->field_0x10;
      pUVar11 = UControlRigLayerInstance::StaticClass();
      if (pUVar11 != (UClass *)0x0) {
        iVar3 = (int)pUVar11->_padding_;
        if ((*(int *)(lVar4 + 0x38) < iVar3) ||
           ((longlong *)*(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar3 * 8) !=
            &pUVar11->_padding_)) {
          bVar6 = false;
        }
        else {
          bVar6 = true;
        }
        if (bVar6) {
          pUVar11 = UControlRigLayerInstance::StaticClass();
          iVar3 = (int)pUVar11->_padding_;
          if ((iVar3 <= *(int *)(*(longlong *)&pUVar20->field_0x10 + 0x38)) &&
             ((longlong *)
              *(undefined1 **)
               (*(longlong *)(*(longlong *)&pUVar20->field_0x10 + 0x30) + (longlong)iVar3 * 8) ==
              &pUVar11->_padding_)) {
            pUVar16 = pUVar20;
          }
          goto LAB_14a38e215;
        }
      }
      if (((!bVar7) || (!bVar8)) ||
         (cVar9 = (**(code **)(*(longlong *)pUVar12 + 0x20))(pUVar12), cVar9 != '\0'))
      goto LAB_14a38e215;
      local_res20 = 0;
      pUVar11 = UControlRigLayerInstance::StaticClass();
      pUVar17 = (UAnimInstance *)
                NewObject<UControlRigLayerInstance>
                          ((UObject *)param_1,pUVar11,(FName)0x0,RF_NoFlags,(UObject *)0x0,false,
                           (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
      if (pUVar17 == (UAnimInstance *)0x0) {
LAB_14a38e060:
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("NewSequencerInterface",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AnimGraphRuntime\\Public\\AnimCustomInstanceHelper.h"
                           ,0x9b,L"");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          pUVar14 = (UControlRigLayerInstance *)(*pcVar5)();
          return pUVar14;
        }
      }
      else {
        pUVar11 = Z_Construct_UClass_USequencerAnimationSupport_NoRegister();
        pUVar18 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)pUVar17,pUVar11);
        if (pUVar18 == (UAnimInstance *)0x0) goto LAB_14a38e060;
      }
      cVar9 = (**(code **)(*(longlong *)pUVar18 + 0x20))(pUVar18);
      if (cVar9 != '\0') {
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (pUVar17 != (UAnimInstance *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar17);
        }
        (param_1->AnimScriptInstance).field0_0x0.DebugPtr = pUVar17;
        if ((pUVar17 == pUVar20) &&
           (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<3352955752510652575>,true,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AnimGraphRuntime\\Public\\AnimCustomInstanceHelper.h"
                               ,0x9f,"NewInstance != CurSourceInstance"), bVar6)) {
          pcVar5 = (code *)swi(3);
          pUVar14 = (UControlRigLayerInstance *)(*pcVar5)();
          return pUVar14;
        }
        (**(code **)(*(longlong *)pUVar18 + 0x18))(pUVar18);
        UAnimInstance::InitializeAnimation((param_1->AnimScriptInstance).field0_0x0.DebugPtr,false);
        *param_2 = true;
        pUVar16 = (UAnimInstance *)
                  Cast<UControlRigLayerInstance,UAnimInstance>(&param_1->AnimScriptInstance);
      }
      goto LAB_14a38e215;
    }
    if ((!bVar7) || (!bVar8)) goto LAB_14a38e215;
    pUVar11 = UControlRigLayerInstance::StaticClass();
    pUVar12 = (UAnimInstance *)
              NewObject<UControlRigLayerInstance>
                        ((UObject *)param_1,pUVar11,(FName)0x0,RF_NoFlags,(UObject *)0x0,false,
                         (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
    pUVar17 = pUVar18;
    if (pUVar12 == (UAnimInstance *)0x0) {
LAB_14a38e17e:
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("NewSequencerInterface",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AnimGraphRuntime\\Public\\AnimCustomInstanceHelper.h"
                         ,0xad,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pUVar14 = (UControlRigLayerInstance *)(*pcVar5)();
        return pUVar14;
      }
    }
    else {
      pUVar11 = Z_Construct_UClass_USequencerAnimationSupport_NoRegister();
      pUVar17 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)pUVar12,pUVar11);
      if (pUVar17 == (UAnimInstance *)0x0) goto LAB_14a38e17e;
    }
    cVar9 = (**(code **)(*(longlong *)pUVar17 + 0x20))(pUVar17);
    if (cVar9 == '\0') goto LAB_14a38e215;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar12 != (UAnimInstance *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar12);
    }
    (param_1->AnimScriptInstance).field0_0x0.DebugPtr = pUVar12;
    (**(code **)(*(longlong *)pUVar17 + 0x18))(pUVar17);
    UAnimInstance::InitializeAnimation((param_1->AnimScriptInstance).field0_0x0.DebugPtr,false);
    *param_2 = true;
  }
  else {
    iVar3 = (int)pUVar11->_padding_;
    if ((*(int *)(lVar4 + 0x38) < iVar3) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar3 * 8) !=
        &pUVar11->_padding_)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (!bVar6) goto LAB_14a38dedc;
  }
LAB_14a38e1ed:
  pUVar16 = pUVar18;
  if ((param_1->AnimScriptInstance).field0_0x0.DebugPtr != (UAnimInstance *)0x0) {
    pUVar11 = UControlRigLayerInstance::StaticClass();
    bVar6 = FObjectPtr::IsA((FObjectPtr *)&param_1->AnimScriptInstance,pUVar11);
    pUVar16 = pUVar20;
    if (bVar6) {
      pUVar16 = (param_1->AnimScriptInstance).field0_0x0.DebugPtr;
    }
  }
LAB_14a38e215:
  if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.AllocatorInstance.Data);
  }
  return (UControlRigLayerInstance *)pUVar16;
}

// UnbindFromSkeletalMeshComponent<UControlRigLayerInstance> @ 14a3b3780

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
FAnimCustomInstanceHelper::UnbindFromSkeletalMeshComponent<UControlRigLayerInstance>
          (USkeletalMeshComponent *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  Type TVar5;
  UAnimInstance *pUVar6;
  UClass *pUVar7;
  longlong *plVar8;
  UAnimInstance *pUVar9;
  UWorld *pUVar10;
  FScriptContainerElement *pFVar11;
  undefined1 local_res8 [8];
  
  TVar5 = USkeletalMeshComponent::GetAnimationMode(param_1);
  if (TVar5 == AnimationCustomMode) {
    pUVar6 = USkeletalMeshComponent::GetAnimInstance(param_1);
    if (pUVar6 != (UAnimInstance *)0x0) {
      pUVar7 = UControlRigLayerInstance::StaticClass();
      iVar2 = (int)pUVar7->_padding_;
      if ((*(int *)(*(longlong *)&pUVar6->field_0x10 + 0x38) < iVar2) ||
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar6->field_0x10 + 0x30) + (longlong)iVar2 * 8) !=
          &pUVar7->_padding_)) {
        pUVar7 = Z_Construct_UClass_USequencerAnimationSupport_NoRegister();
        plVar8 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)pUVar6,pUVar7);
        if ((plVar8 == (longlong *)0x0) ||
           (cVar3 = (**(code **)(*plVar8 + 0x20))(plVar8), cVar3 == '\0')) goto LAB_14a3b39e6;
        pUVar6 = (UAnimInstance *)(**(code **)(*plVar8 + 0x10))(plVar8);
        if (pUVar6 != (UAnimInstance *)0x0) {
          pUVar7 = UControlRigLayerInstance::StaticClass();
          iVar2 = (int)pUVar7->_padding_;
          if ((iVar2 <= *(int *)(*(longlong *)&pUVar6->field_0x10 + 0x38)) &&
             ((longlong *)
              *(undefined1 **)
               (*(longlong *)(*(longlong *)&pUVar6->field_0x10 + 0x30) + (longlong)iVar2 * 8) ==
              &pUVar7->_padding_)) {
            (**(code **)(*plVar8 + 0x18))(plVar8,0);
            goto LAB_14a3b39e6;
          }
        }
        if (pUVar6 == (UAnimInstance *)0x0) goto LAB_14a3b39e6;
        (**(code **)(*plVar8 + 0x18))(plVar8,0);
      }
      else {
        pUVar7 = Z_Construct_UClass_USequencerAnimationSupport_NoRegister();
        plVar8 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)pUVar6,pUVar7);
        if (((plVar8 == (longlong *)0x0) ||
            (cVar3 = (**(code **)(*plVar8 + 0x20))(plVar8), cVar3 == '\0')) ||
           (pUVar6 = (UAnimInstance *)(**(code **)(*plVar8 + 0x10))(plVar8),
           pUVar6 == (UAnimInstance *)0x0)) {
          USkeletalMeshComponent::ClearAnimScriptInstance(param_1);
          goto LAB_14a3b39e6;
        }
        (**(code **)(*plVar8 + 0x18))(plVar8,0);
      }
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)pUVar6);
      }
      (param_1->AnimScriptInstance).field0_0x0.DebugPtr = pUVar6;
    }
  }
  else {
    TVar5 = USkeletalMeshComponent::GetAnimationMode(param_1);
    if (TVar5 == AnimationBlueprint) {
      pUVar6 = USkeletalMeshComponent::GetAnimInstance(param_1);
      if (pUVar6 != (UAnimInstance *)0x0) {
        pUVar7 = Z_Construct_UClass_USequencerAnimationSupport_NoRegister();
        plVar8 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)pUVar6,pUVar7);
        if (((plVar8 != (longlong *)0x0) &&
            (cVar3 = (**(code **)(*plVar8 + 0x20))(plVar8), cVar3 != '\0')) &&
           (pUVar9 = (UAnimInstance *)(**(code **)(*plVar8 + 0x10))(plVar8),
           pUVar9 != (UAnimInstance *)0x0)) {
          (**(code **)(*plVar8 + 0x18))(plVar8);
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)pUVar9);
          }
          (param_1->AnimScriptInstance).field0_0x0.DebugPtr = pUVar9;
          pUVar6 = pUVar9;
        }
        pFVar11 = (param_1->LinkedInstances).AllocatorInstance.Data;
        iVar2 = (param_1->LinkedInstances).ArrayNum;
        pFVar1 = pFVar11 + (longlong)iVar2 * 8;
        while( true ) {
          if ((param_1->LinkedInstances).ArrayNum != iVar2) {
            `TCheckedPointerIterator<UAnimInstance_*_const,int,0>::operator!='::__l2::<lambda_1>::
            operator()(local_res8);
          }
          if (pFVar11 == pFVar1) break;
          UAnimInstance::UpdateAnimation(*(UAnimInstance **)pFVar11,0.0,false,ForceParallelUpdate);
          pFVar11 = pFVar11 + 8;
        }
        UAnimInstance::UpdateAnimation(pUVar6,0.0,false,Default);
      }
      (**(code **)(param_1->_padding_ + 0xb88))(param_1);
      USkinnedMeshComponent::RefreshFollowerComponents((USkinnedMeshComponent *)param_1);
      USceneComponent::UpdateComponentToWorld((USceneComponent *)param_1,None,None);
    }
  }
LAB_14a3b39e6:
  if ((param_1->_padding_ == 0) &&
     (pUVar10 = UActorComponent::GetWorld_Uncached((UActorComponent *)param_1),
     pUVar10 == (UWorld *)0x0)) {
    return;
  }
  pUVar10 = (UWorld *)param_1->_padding_;
  if (pUVar10 == (UWorld *)0x0) {
    pUVar10 = UActorComponent::GetWorld_Uncached((UActorComponent *)param_1);
  }
  bVar4 = UWorld::IsGameWorld(pUVar10);
  if (bVar4) {
    return;
  }
  USkinnedMeshComponent::ClearMotionVector((USkinnedMeshComponent *)param_1);
  return;
}

