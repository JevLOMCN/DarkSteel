// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 2

// BindToSequencerInstance @ 14a3ebe80

/* WARNING: Enum "ERigElementType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __cdecl FControlRigBindingHelper::BindToSequencerInstance(UControlRig *param_1)

{
  FName *pFVar1;
  int iVar2;
  TReferenceControllerBase<1> *pTVar3;
  IControlRigObjectBinding *pIVar4;
  code *pcVar5;
  uint uVar6;
  bool bVar7;
  undefined1 uVar8;
  char cVar9;
  USkeletalMeshComponent *this;
  UClass *pUVar10;
  USkeletalMesh *pUVar11;
  UAnimInstance *this_00;
  USkeletalMeshComponent *pUVar12;
  FControlRigLayerInstanceProxy *pFVar13;
  FAnimNode_ControlRig_ExternalSource *pFVar14;
  longlong lVar15;
  UControlRigComponent *this_01;
  UControlRig *pUVar16;
  UWorld *pUVar17;
  ulonglong uVar18;
  FName *pFVar19;
  FName *pFVar20;
  FName *pFVar21;
  bool local_res8 [8];
  undefined1 local_res10 [8];
  FName *local_38;
  uint local_30;
  FName *local_28;
  uint local_20;
  
  if (param_1 != (UControlRig *)0x0) {
    pTVar3 = (param_1->ObjectBinding).SharedReferenceCount.ReferenceController;
    pIVar4 = (param_1->ObjectBinding).Object;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((pIVar4 == (IControlRigObjectBinding *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      uVar8 = (*pcVar5)();
      return (bool)uVar8;
    }
    this = (USkeletalMeshComponent *)(**(code **)((longlong)*pIVar4 + 0x28))(pIVar4);
    if (this != (USkeletalMeshComponent *)0x0) {
      pUVar10 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
      iVar2 = (int)pUVar10->_padding_;
      if ((iVar2 <= *(int *)(this->_padding_ + 0x38)) &&
         ((longlong *)*(undefined1 **)(*(longlong *)(this->_padding_ + 0x30) + (longlong)iVar2 * 8)
          == &pUVar10->_padding_)) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
        pUVar11 = USkeletalMeshComponent::GetSkeletalMeshAsset(this);
        if (pUVar11 == (USkeletalMesh *)0x0) {
          return false;
        }
        local_res8[0] = false;
        this_00 = (UAnimInstance *)
                  FAnimCustomInstanceHelper::BindToSkeletalMeshComponent<UControlRigLayerInstance>
                            (this,local_res8);
        if (this_00 != (UAnimInstance *)0x0) {
          if (local_res8[0] == false) {
            iVar2 = *(int *)((longlong)&param_1->_padding_ + 4);
            bVar7 = IsInGameThread();
            if ((!bVar7) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsInGameThread()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimInstance.h"
                                   ,0x687,L""), bVar7)) {
              pcVar5 = (code *)swi(3);
              uVar8 = (*pcVar5)();
              return (bool)uVar8;
            }
            bVar7 = UAnimInstance::IsSkeletalMeshComponent(*(UObject **)&this_00->field_0x20);
            if (bVar7) {
              pUVar12 = UAnimInstance::GetSkelMeshComponentChecked(this_00);
              UAnimInstance::HandleExistingParallelEvaluationTask(pUVar12);
            }
            pFVar13 = (FControlRigLayerInstanceProxy *)this_00->AnimInstanceProxy;
            if (pFVar13 == (FControlRigLayerInstanceProxy *)0x0) {
              pFVar13 = (FControlRigLayerInstanceProxy *)
                        (**(code **)(*(longlong *)this_00 + 0x378))(this_00);
              this_00->AnimInstanceProxy = (FAnimInstanceProxy *)pFVar13;
            }
            pFVar14 = FControlRigLayerInstanceProxy::FindControlRigNode(pFVar13,iVar2);
            if (pFVar14 != (FAnimNode_ControlRig_ExternalSource *)0x0) {
              return local_res8[0];
            }
          }
          UAnimInstance::RecalcRequiredBones(this_00);
          iVar2 = *(int *)((longlong)&param_1->_padding_ + 4);
          cVar9 = (**(code **)(param_1->_padding_ + 0x490))(param_1);
          if ((cVar9 != '\0') &&
             (lVar15 = (**(code **)(*(longlong *)&this_00->field_0x428 + 0x10))(), lVar15 != 0)) {
            *(byte *)(lVar15 + 0x31) = *(byte *)(lVar15 + 0x31) & 0xfe;
          }
          bVar7 = IsInGameThread();
          if ((!bVar7) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsInGameThread()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimInstance.h"
                                 ,0x687,L""), bVar7)) {
            pcVar5 = (code *)swi(3);
            uVar8 = (*pcVar5)();
            return (bool)uVar8;
          }
          bVar7 = UAnimInstance::IsSkeletalMeshComponent(*(UObject **)&this_00->field_0x20);
          if (bVar7) {
            pUVar12 = UAnimInstance::GetSkelMeshComponentChecked(this_00);
            UAnimInstance::HandleExistingParallelEvaluationTask(pUVar12);
          }
          pFVar13 = (FControlRigLayerInstanceProxy *)this_00->AnimInstanceProxy;
          if (pFVar13 == (FControlRigLayerInstanceProxy *)0x0) {
            pFVar13 = (FControlRigLayerInstanceProxy *)
                      (**(code **)(*(longlong *)this_00 + 0x378))(this_00);
            this_00->AnimInstanceProxy = (FAnimInstanceProxy *)pFVar13;
          }
          FControlRigLayerInstanceProxy::AddControlRigTrack(pFVar13,iVar2,param_1);
          (**(code **)(param_1->_padding_ + 0x438))(param_1,&local_38);
          (**(code **)(param_1->_padding_ + 0x2c0))(param_1,1);
          (**(code **)(param_1->_padding_ + 0x318))(param_1);
          (**(code **)(param_1->_padding_ + 0x468))(param_1,this,1);
          (**(code **)(param_1->_padding_ + 0x2d0))(param_1);
          (**(code **)(param_1->_padding_ + 0x438))(param_1,&local_28);
          pFVar19 = local_28;
          pFVar21 = local_38;
          if ((local_30 != local_20) ||
             (bVar7 = CompareItems<FName,int>(local_38,local_28,local_30), !bVar7)) {
            (**(code **)(param_1->_padding_ + 0x430))(param_1,0);
            uVar6 = local_30;
            uVar18 = (ulonglong)(int)local_30;
            pFVar1 = local_38 + uVar18;
            pFVar20 = local_38;
            while( true ) {
              if ((uint)uVar18 != uVar6) {
                `TCheckedPointerIterator<FName,int,0>::operator!='::__l2::<lambda_1>::operator()
                          (local_res10);
              }
              pFVar19 = local_28;
              pFVar21 = local_38;
              if (pFVar20 == pFVar1) break;
              (**(code **)(param_1->_padding_ + 0x428))(param_1,pFVar20,1,0);
              uVar18 = (ulonglong)local_30;
              pFVar20 = pFVar20 + 1;
            }
          }
          if (pFVar19 != (FName *)0x0) {
            FMemory::Free(pFVar19);
            pFVar21 = local_38;
          }
          if (pFVar21 != (FName *)0x0) {
            FMemory::Free(pFVar21);
          }
        }
        return local_res8[0];
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    pTVar3 = (param_1->ObjectBinding).SharedReferenceCount.ReferenceController;
    pIVar4 = (param_1->ObjectBinding).Object;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((pIVar4 == (IControlRigObjectBinding *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      uVar8 = (*pcVar5)();
      return (bool)uVar8;
    }
    this_01 = (UControlRigComponent *)(**(code **)((longlong)*pIVar4 + 0x28))(pIVar4);
    if (this_01 != (UControlRigComponent *)0x0) {
      pUVar10 = Z_Construct_UClass_UControlRigComponent_NoRegister();
      iVar2 = (int)pUVar10->_padding_;
      if ((iVar2 <= *(int *)(this_01->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(this_01->_padding_ + 0x30) + (longlong)iVar2 * 8) ==
          &pUVar10->_padding_)) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
        pUVar16 = UControlRigComponent::GetControlRig(this_01);
        if (pUVar16 == param_1) {
          return false;
        }
        UControlRigComponent::Initialize(this_01);
        if ((this_01->_padding_ == 0) &&
           (pUVar17 = UActorComponent::GetWorld_Uncached((UActorComponent *)this_01),
           pUVar17 == (UWorld *)0x0)) {
          return false;
        }
        pUVar17 = (UWorld *)this_01->_padding_;
        if (pUVar17 == (UWorld *)0x0) {
          pUVar17 = UActorComponent::GetWorld_Uncached((UActorComponent *)this_01);
        }
        bVar7 = UWorld::IsGameWorld(pUVar17);
        if (bVar7) {
          return false;
        }
        UControlRigComponent::SetControlRig(this_01,param_1);
        return false;
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  }
  return false;
}

// UnBindFromSequencerInstance @ 14a45d250

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl FControlRigBindingHelper::UnBindFromSequencerInstance(UControlRig *param_1)

{
  int iVar1;
  IControlRigObjectBinding *pIVar2;
  code *pcVar3;
  bool bVar4;
  longlong lVar5;
  UClass *pUVar6;
  USkeletalMeshComponent *this;
  UAnimInstance *this_00;
  UControlRig *pUVar7;
  TReferenceControllerBase<1> *pTVar8;
  
  if ((param_1 == (UControlRig *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ControlRig",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Sequencer\\MovieSceneControlRigParameterTemplate.cpp"
                         ,0x28f,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  bVar4 = UObjectBase::IsValidLowLevel((UObjectBase *)param_1);
  if (!bVar4) {
    return;
  }
  bVar4 = URigVMHost::IsGarbageOrDestroyed((UObject *)param_1);
  if (bVar4) {
    return;
  }
  if (param_1 == (UControlRig *)0x0) {
    return;
  }
  if (((uint)param_1->_padding_ >> 0x1e & 1) != 0) {
    return;
  }
  pTVar8 = (param_1->ObjectBinding).SharedReferenceCount.ReferenceController;
  pIVar2 = (param_1->ObjectBinding).Object;
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
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
  lVar5 = (**(code **)((longlong)*pIVar2 + 0x28))(pIVar2);
  if (lVar5 != 0) {
    pUVar6 = Z_Construct_UClass_UControlRigComponent_NoRegister();
    iVar1 = (int)pUVar6->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar6->_padding_)) goto LAB_14a45d49f;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  pTVar8 = (param_1->ObjectBinding).SharedReferenceCount.ReferenceController;
  pIVar2 = (param_1->ObjectBinding).Object;
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
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
  if (this != (USkeletalMeshComponent *)0x0) {
    pUVar6 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
    iVar1 = (int)pUVar6->_padding_;
    if ((iVar1 <= *(int *)(this->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar6->_padding_)) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
      bVar4 = UObjectBase::IsValidLowLevel((UObjectBase *)this);
      if (!bVar4) {
        return;
      }
      bVar4 = URigVMHost::IsGarbageOrDestroyed((UObject *)this);
      if (bVar4) {
        return;
      }
      if (((uint)this->_padding_ >> 0x1e & 1) != 0) {
        return;
      }
      this_00 = USkeletalMeshComponent::GetAnimInstance(this);
      if (this_00 != (UAnimInstance *)0x0) {
        pUVar6 = UControlRigLayerInstance::StaticClass();
        iVar1 = (int)pUVar6->_padding_;
        if ((iVar1 <= *(int *)(*(longlong *)&this_00->field_0x10 + 0x38)) &&
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)&this_00->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
            &pUVar6->_padding_)) {
          bVar4 = UObjectBase::IsValidLowLevel((UObjectBase *)this_00);
          if (!bVar4) {
            return;
          }
          bVar4 = URigVMHost::IsGarbageOrDestroyed((UObject *)this_00);
          if (bVar4) {
            return;
          }
          if ((*(uint *)&this_00->field_0x8 >> 0x1e & 1) != 0) {
            return;
          }
          (**(code **)(*(longlong *)&this_00->field_0x428 + 0x40))();
          UAnimInstance::RecalcRequiredBones(this_00);
          UControlRigLayerInstance::RemoveControlRigTrack
                    ((UControlRigLayerInstance *)this_00,*(int *)((longlong)&param_1->_padding_ + 4)
                    );
          pUVar7 = UControlRigLayerInstance::GetFirstAvailableControlRig
                             ((UControlRigLayerInstance *)this_00);
          if (pUVar7 != (UControlRig *)0x0) {
            return;
          }
        }
      }
      FAnimCustomInstanceHelper::UnbindFromSkeletalMeshComponent<UControlRigLayerInstance>(this);
      return;
    }
  }
LAB_14a45d49f:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  return;
}

