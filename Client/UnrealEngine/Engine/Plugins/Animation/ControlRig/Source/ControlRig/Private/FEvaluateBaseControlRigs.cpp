// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 2

// ForEachEntity @ 14a40ea40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UE::MovieScene::FEvaluateBaseControlRigs::ForEachEntity
          (FEvaluateBaseControlRigs *this,FRootInstanceHandle param_1,FMovieSceneSequenceID *param_2
          ,FFrameTime param_3,float param_4,double *param_5,FControlRigSourceData *param_6,
          FBaseControlRigEvalData *param_7)

{
  int iVar1;
  uint uVar2;
  IControlRigObjectBinding *pIVar3;
  UMovieSceneControlRigParameterSection *this_00;
  UTickableConstraint *pUVar4;
  UControlRig *pUVar5;
  longlong *plVar6;
  code *pcVar7;
  FObjectPtr_u_0 FVar8;
  FSharedPlaybackState *pFVar9;
  FSharedReferencer<1> FVar10;
  bool bVar11;
  USkeletalMeshComponent *this_01;
  UClass *pUVar12;
  UAnimInstance *this_02;
  UWorld *pUVar13;
  FConstraintsManagerController *pFVar14;
  UTickableConstraint *pUVar15;
  longlong lVar16;
  undefined8 uVar17;
  FWeakObjectPtr *this_03;
  USceneComponent *pUVar18;
  longlong lVar19;
  ulonglong uVar20;
  FObjectPtr_u_0 FVar21;
  FMovieSceneSequenceID *pFVar22;
  longlong *plVar23;
  TReferenceControllerBase<1> *pTVar24;
  double dVar25;
  float fStackX_24;
  char local_a8 [4];
  uint local_a4;
  FObjectPtr_u_0 local_a0;
  undefined1 local_98 [8];
  UControlRig *local_90;
  FMovieSceneSequenceID local_88 [2];
  TReferenceControllerBase<1> *local_80;
  longlong *local_78;
  longlong *local_70;
  TSharedRef<UE::MovieScene::FSharedPlaybackState,1> local_68;
  undefined1 local_58 [16];
  FSharedPlaybackState *local_48;
  TReferenceControllerBase<1> *pTStack_40;
  
  local_90 = (UControlRig *)FWeakObjectPtr::Get(&(param_7->WeakControlRig).WeakPtr);
  if ((local_90 != (UControlRig *)0x0) &&
     ((local_90->DynamicHierarchy).field0_0x0.DebugPtr != (URigHierarchy *)0x0)) {
    param_7->field_0x10 =
         param_7->field_0x10 ^ (param_7->Section->bDoNotKey << 2 ^ param_7->field_0x10) & 4U;
    param_7->Section->bDoNotKey = false;
    pTVar24 = (local_90->ObjectBinding).SharedReferenceCount.ReferenceController;
    pIVar3 = (local_90->ObjectBinding).Object;
    if (pTVar24 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar24->SharedReferenceCount = (atomic<int>)((int)pTVar24->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((pIVar3 == (IControlRigObjectBinding *)0x0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar11)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    this_01 = (USkeletalMeshComponent *)(**(code **)((longlong)*pIVar3 + 0x28))(pIVar3);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar24);
    if (this_01 != (USkeletalMeshComponent *)0x0) {
      if (param_7->bIsActive != 0) {
        pUVar12 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
        iVar1 = (int)pUVar12->_padding_;
        if (((iVar1 <= *(int *)(this_01->_padding_ + 0x38)) &&
            ((longlong *)
             *(undefined1 **)(*(longlong *)(this_01->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
             &pUVar12->_padding_)) &&
           (this_02 = USkeletalMeshComponent::GetAnimInstance(this_01),
           this_02 != (UAnimInstance *)0x0)) {
          pUVar12 = UControlRigLayerInstance::StaticClass();
          iVar1 = (int)pUVar12->_padding_;
          if ((iVar1 <= *(int *)(*(longlong *)&this_02->field_0x10 + 0x38)) &&
             ((longlong *)
              *(undefined1 **)
               (*(longlong *)(*(longlong *)&this_02->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
              &pUVar12->_padding_)) {
            dVar25 = __real_3ff0000000000000;
            if (param_5 != (double *)0x0) {
              dVar25 = *param_5;
            }
            local_a4 = CONCAT22(local_a4._2_2_,0x101);
            UControlRigLayerInstance::UpdateControlRigTrack
                      ((UControlRigLayerInstance *)this_02,
                       *(int *)((longlong)&local_90->_padding_ + 4),(float)dVar25,
                       (FControlRigIOSettings *)&local_a4,true);
          }
        }
        URigVMHost::SetAbsoluteTime((URigVMHost *)local_90,param_4,false);
      }
      fStackX_24 = param_3.SubFrame;
      if (__real_3f000000 <= fStackX_24) {
        param_3.FrameNumber.Value = param_3.FrameNumber.Value.Value + 1;
        param_3.SubFrame = 0.0;
      }
      local_a0.Handle = (UObject *)((ulonglong)param_3 & 0xffffffff);
      lVar16 = *(longlong *)&this->InstanceRegistry->Instances;
      lVar19 = (ulonglong)((uint)param_1 & 0xffff) * 0x140;
      pTVar24 = *(TReferenceControllerBase<1> **)(lVar19 + 0x120 + lVar16);
      local_68.Object = *(FSharedPlaybackState **)(lVar19 + 0x118 + lVar16);
      if (pTVar24 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar24->SharedReferenceCount = (atomic<int>)((int)pTVar24->SharedReferenceCount + 1);
        UNLOCK();
      }
      pFVar22 = &MovieSceneSequenceID::Root;
      if (param_2 != (FMovieSceneSequenceID *)0x0) {
        pFVar22 = param_2;
      }
      uVar2 = pFVar22->Value;
      local_88[0].Value = uVar2;
      local_80 = pTVar24;
      local_68.SharedReferenceCount.ReferenceController = pTVar24;
      local_78 = (longlong *)(**(code **)(param_7->Section->_padding_ + 0x30))();
      FVar10.ReferenceController = local_68.SharedReferenceCount.ReferenceController;
      pFVar9 = local_68.Object;
      FVar8 = local_a0;
      local_a4 = *(uint *)(local_78 + 1);
      uVar20 = (ulonglong)(int)local_a4;
      plVar23 = (longlong *)*local_78;
      local_70 = plVar23 + uVar20 * 0x25;
      while( true ) {
        plVar6 = local_70;
        if ((int)local_78[1] != (int)uVar20) {
          `TCheckedPointerIterator<FConstraintAndActiveChannel,int,0>::operator!='::__l2::<lambda_1>
          ::operator()(local_98);
        }
        if (plVar23 == plVar6) break;
        local_a8[0] = '\0';
        (**(code **)(*plVar23 + 0xa0))(plVar23,FVar8.Handle,local_a8);
        this_00 = param_7->Section;
        pUVar4 = (UTickableConstraint *)plVar23[0x24];
        if ((GC::GIsIncrementalReachabilityPending == false) ||
           (pUVar4 == (UTickableConstraint *)0x0)) {
          pUVar13 = (UWorld *)(**(code **)(this_01->_padding_ + 0x180))(this_01);
          if (pUVar4 != (UTickableConstraint *)0x0) goto LAB_14a40ece7;
        }
        else {
          GC::MarkAsReachable((UObject *)pUVar4);
          pUVar13 = (UWorld *)(**(code **)(this_01->_padding_ + 0x180))(this_01);
LAB_14a40ece7:
          if (pUVar13 != (UWorld *)0x0) {
            pFVar14 = FConstraintsManagerController::Get(pUVar13);
            pUVar15 = FConstraintsManagerController::GetConstraint(pFVar14,&pUVar4->ConstraintID);
            if (pUVar15 == (UTickableConstraint *)0x0) {
              pFVar14 = FConstraintsManagerController::Get(pUVar13);
              FConstraintsManagerController::AddConstraint(pFVar14,pUVar4);
              pUVar5 = (this_00->ControlRig).field0_0x0.DebugPtr;
              if ((pUVar5 != (UControlRig *)0x0) &&
                 (lVar16 = (**(code **)(pUVar5->_padding_ + 0x180))(), lVar16 != 0)) {
                (**(code **)(this_00->_padding_ + 0x3a8))(this_00);
                UMovieSceneSignedObject::MarkAsChanged((UMovieSceneSignedObject *)this_00);
              }
            }
          }
        }
        local_a0 = (FObjectPtr_u_0)((FObjectPtr_u_0 *)(plVar23 + 0x24))->Handle;
        if (GC::GIsIncrementalReachabilityPending == false) {
LAB_14a40ed70:
          pTVar24 = local_80;
          if (local_a0.Handle != (UObject *)0x0) {
            pUVar12 = Z_Construct_UClass_UTickableTransformConstraint_NoRegister();
            bVar11 = FObjectPtr::IsA((FObjectPtr *)&local_a0,pUVar12);
            FVar21 = local_a0;
            if (bVar11) {
              if (local_a0.Handle != (UObject *)0x0) {
                pcVar7 = *(code **)(*(longlong *)local_a0.Handle + 0x300);
                uVar17 = (**(code **)(this_01->_padding_ + 0x180))(this_01);
                (*pcVar7)(FVar21.Handle,uVar17);
              }
            }
            else {
              FVar21.Handle = (UObject *)0x0;
            }
            pTVar24 = local_80;
            lVar16 = *(longlong *)local_a0.Handle;
            local_48 = pFVar9;
            pTStack_40 = FVar10.ReferenceController;
            if (local_80 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              local_80->SharedReferenceCount =
                   (atomic<int>)((int)local_80->SharedReferenceCount + 1);
              UNLOCK();
            }
            (**(code **)(lVar16 + 0x2e0))(local_a0.Handle,uVar2,&local_48,local_90);
            (**(code **)(*(longlong *)local_a0.Handle + 0x2c8))(local_a0.Handle,local_a8[0]);
            if ((((FVar21.Handle != (UObject *)0x0) && (local_a8[0] != '\0')) &&
                (bVar11 = TransformableHandleUtils::SkipTicking(), bVar11)) &&
               (*(longlong *)&FVar21.Handle[3].field_0x18 != 0)) {
              pUVar12 = Z_Construct_UClass_UTransformableComponentHandle_NoRegister();
              bVar11 = FObjectPtr::IsA((FObjectPtr *)&FVar21.Handle[3].field_0x18,pUVar12);
              if ((bVar11) &&
                 (plVar6 = *(longlong **)&FVar21.Handle[3].field_0x18, plVar6 != (longlong *)0x0)) {
                this_03 = (FWeakObjectPtr *)(**(code **)(*plVar6 + 0x330))(plVar6,local_58);
                pUVar18 = (USceneComponent *)FWeakObjectPtr::Get(this_03);
                if (pUVar18 == (USceneComponent *)0x0) {
LAB_14a40ee8c:
                  pUVar18 = (USceneComponent *)0x0;
                }
                else {
                  pUVar12 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
                  iVar1 = (int)pUVar12->_padding_;
                  if ((*(int *)(pUVar18->_padding_ + 0x38) < iVar1) ||
                     ((longlong *)
                      *(undefined1 **)
                       (*(longlong *)(pUVar18->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
                      &pUVar12->_padding_)) goto LAB_14a40ee8c;
                }
                TransformableHandleUtils::MarkComponentForEvaluation(pUVar18,true);
              }
            }
          }
        }
        else {
          pTVar24 = local_80;
          if (local_a0.Handle != (UObject *)0x0) {
            GC::MarkAsReachable(local_a0.Handle);
            goto LAB_14a40ed70;
          }
        }
        plVar23 = plVar23 + 0x25;
        uVar20 = (ulonglong)local_a4;
      }
      ResolveParentHandles((UObject *)this_01,local_90,param_7,local_88,&local_68);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar24);
    }
  }
  return;
}

// ResolveParentHandles @ 14a451490

/* WARNING: Enum "ERigElementType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UE::MovieScene::FEvaluateBaseControlRigs::ResolveParentHandles
          (UObject *param_1,UControlRig *param_2,FBaseControlRigEvalData *param_3,
          FMovieSceneSequenceID *param_4,TSharedRef<UE::MovieScene::FSharedPlaybackState,1> *param_5
          )

{
  UTransformableHandle *this;
  int iVar1;
  UMovieSceneControlRigParameterSection *this_00;
  UControlRig *pUVar2;
  FWeakObjectPtr *pFVar3;
  bool bVar4;
  UWorld *pUVar5;
  longlong lVar6;
  UWorld *this_01;
  UClass *pUVar7;
  UMovieSceneControlRigParameterTrack *pUVar8;
  FConstraintsManagerController *this_02;
  UTickableTransformConstraint *this_03;
  UObject *pUVar9;
  UControlRig *pUVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  FSharedPlaybackState **ppFVar13;
  code *pcVar14;
  ForAnyElementType this_04;
  UTransformableHandle *pUVar15;
  bool local_res8;
  undefined1 local_c8 [8];
  UMovieSceneControlRigParameterTrack *local_c0;
  uint local_b8;
  undefined8 local_b4;
  UWorld *local_a8;
  TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> local_a0;
  undefined1 local_90 [8];
  FSoftObjectPath local_88;
  UControlRig *local_68;
  FWeakObjectPtr *local_60;
  FSharedPlaybackState *local_58;
  TReferenceControllerBase<1> *local_50;
  FSharedPlaybackState *local_48;
  TReferenceControllerBase<1> *local_40;
  
  if (param_1 != (UObject *)0x0) {
    pUVar5 = (UWorld *)(**(code **)(*(longlong *)param_1 + 0x180))();
    local_a8 = pUVar5;
    lVar6 = (**(code **)(*(longlong *)param_1 + 0x180))(param_1);
    if (lVar6 == 0) {
      local_res8 = false;
    }
    else {
      this_01 = (UWorld *)(**(code **)(*(longlong *)param_1 + 0x180))(param_1);
      local_res8 = UWorld::IsGameWorld(this_01);
    }
    this_00 = param_3->Section;
    pUVar7 = UMovieSceneControlRigParameterTrack::StaticClass();
    pUVar8 = (UMovieSceneControlRigParameterTrack *)
             UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this_00,pUVar7);
    pUVar2 = (param_3->Section->ControlRig).field0_0x0.DebugPtr;
    local_c0 = pUVar8;
    this_02 = FConstraintsManagerController::Get(pUVar5);
    FConstraintsManagerController::GetAllConstraints(this_02,&local_a0,false);
    uVar11 = (ulonglong)local_a0.ArrayNum;
    local_b8 = local_a0.ArrayNum;
    local_60 = (FWeakObjectPtr *)(local_a0.AllocatorInstance.Data + uVar11 * 8);
    uVar12 = uVar11;
    this_04.Data = local_a0.AllocatorInstance.Data;
    while( true ) {
      pFVar3 = local_60;
      if ((int)uVar12 != (int)uVar11) {
        `TCheckedPointerIterator<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>_const_,int,0>::
        operator!='::__l2::<lambda_1>::operator()(local_c8);
      }
      if ((FWeakObjectPtr *)this_04.Data == pFVar3) break;
      this_03 = (UTickableTransformConstraint *)FWeakObjectPtr::Get((FWeakObjectPtr *)this_04.Data);
      if (this_03 != (UTickableTransformConstraint *)0x0) {
        pUVar7 = Z_Construct_UClass_UTickableTransformConstraint_NoRegister();
        iVar1 = (int)pUVar7->_padding_;
        if ((iVar1 <= *(int *)(this_03->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)(*(longlong *)(this_03->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
            &pUVar7->_padding_)) {
          if ((this_03->ParentTRSHandle).field0_0x0.DebugPtr == (UTransformableHandle *)0x0) {
LAB_14a4515f0:
            pUVar15 = (UTransformableHandle *)0x0;
          }
          else {
            pUVar7 = Z_Construct_UClass_UTransformableControlHandle_NoRegister();
            bVar4 = FObjectPtr::IsA((FObjectPtr *)&this_03->ParentTRSHandle,pUVar7);
            if (!bVar4) goto LAB_14a4515f0;
            pUVar15 = (this_03->ParentTRSHandle).field0_0x0.DebugPtr;
          }
          if (pUVar15 != (UTransformableHandle *)0x0) {
            this = pUVar15 + 1;
            if (pUVar8 == (UMovieSceneControlRigParameterTrack *)0x0) {
              pUVar8 = (UMovieSceneControlRigParameterTrack *)0x0;
            }
            else {
              pUVar9 = TPersistentObjectPtr<FSoftObjectPath>::Get
                                 ((TPersistentObjectPtr<FSoftObjectPath> *)this);
              pUVar8 = local_c0;
              if (pUVar9 != (UObject *)0x0) {
                pUVar7 = Z_Construct_UClass_UControlRig_NoRegister();
                iVar1 = (int)pUVar7->_padding_;
                pUVar8 = local_c0;
                if ((iVar1 <= *(int *)(*(longlong *)&pUVar9->field_0x10 + 0x38)) &&
                   ((longlong *)
                    *(undefined1 **)
                     (*(longlong *)(*(longlong *)&pUVar9->field_0x10 + 0x30) + (longlong)iVar1 * 8)
                    == &pUVar7->_padding_)) {
                  pUVar9 = TPersistentObjectPtr<FSoftObjectPath>::Get
                                     ((TPersistentObjectPtr<FSoftObjectPath> *)this);
                  if (pUVar9 == (UObject *)0x0) {
LAB_14a451676:
                    pUVar9 = (UObject *)0x0;
                  }
                  else {
                    pUVar7 = Z_Construct_UClass_UControlRig_NoRegister();
                    iVar1 = (int)pUVar7->_padding_;
                    if ((*(int *)(*(longlong *)&pUVar9->field_0x10 + 0x38) < iVar1) ||
                       ((longlong *)
                        *(undefined1 **)
                         (*(longlong *)(*(longlong *)&pUVar9->field_0x10 + 0x30) +
                         (longlong)iVar1 * 8) != &pUVar7->_padding_)) goto LAB_14a451676;
                  }
                  bVar4 = UObjectBaseUtility::IsInOuter
                                    ((UObjectBaseUtility *)pUVar9,(UObject *)local_c0);
                  pUVar8 = local_c0;
                  if (!bVar4) goto LAB_14a4517e1;
                }
              }
            }
            if (local_res8 == false) {
              pUVar10 = (UControlRig *)
                        TPersistentObjectPtr<FSoftObjectPath>::Get
                                  ((TPersistentObjectPtr<FSoftObjectPath> *)this);
              if (pUVar10 == (UControlRig *)0x0) {
LAB_14a451782:
                pUVar10 = (UControlRig *)0x0;
              }
              else {
                pUVar7 = Z_Construct_UClass_UControlRig_NoRegister();
                iVar1 = (int)pUVar7->_padding_;
                if ((*(int *)(pUVar10->_padding_ + 0x38) < iVar1) ||
                   ((longlong *)
                    *(undefined1 **)(*(longlong *)(pUVar10->_padding_ + 0x30) + (longlong)iVar1 * 8)
                    != &pUVar7->_padding_)) goto LAB_14a451782;
              }
              if ((pUVar8 == (UMovieSceneControlRigParameterTrack *)0x0) ||
                 (bVar4 = UMovieSceneControlRigParameterTrack::IsAGameInstance(pUVar8,pUVar10,false)
                 , !bVar4)) goto LAB_14a4517e1;
              pcVar14 = *(code **)(pUVar15->_padding_ + 0x2e0);
              local_48 = param_5->Object;
              local_40 = (param_5->SharedReferenceCount).ReferenceController;
              if (local_40 != (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                local_40->SharedReferenceCount =
                     (atomic<int>)((int)local_40->SharedReferenceCount + 1);
                UNLOCK();
              }
              ppFVar13 = &local_48;
            }
            else {
              if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UControlRig *)0x0)
                 ) {
                GC::MarkAsReachable((UObject *)pUVar2);
              }
              local_88.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_88.SubPathString.Data.ArrayNum = 0;
              local_88.SubPathString.Data.ArrayMax = 0;
              local_90 = (undefined1  [8])0x0;
              local_b4 = 0;
              local_88.AssetPath.AssetName.ComparisonIndex.Value = 0;
              local_88.AssetPath.AssetName.Number = 0;
              local_88.AssetPath.PackageName.ComparisonIndex.Value = 0;
              local_88.AssetPath.PackageName.Number = 0;
              FUtf8String::Reset(&local_88.SubPathString,0);
              local_68 = pUVar2;
              if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UControlRig *)0x0)
                 ) {
                GC::MarkAsReachable((UObject *)pUVar2);
              }
              FSoftObjectPtr::operator=((FSoftObjectPtr *)local_90,(FObjectPtr)&local_68);
              bVar4 = FSoftObjectPath::operator==
                                ((FSoftObjectPath *)&pUVar15[1]._padding_,&local_88);
              if (local_88.SubPathString.Data.AllocatorInstance.Data !=
                  (FScriptContainerElement *)0x0) {
                FMemory::Free(local_88.SubPathString.Data.AllocatorInstance.Data);
              }
              if (!bVar4) goto LAB_14a4517e1;
              pcVar14 = *(code **)(pUVar15->_padding_ + 0x2e0);
              local_58 = param_5->Object;
              local_50 = (param_5->SharedReferenceCount).ReferenceController;
              if (local_50 != (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                local_50->SharedReferenceCount =
                     (atomic<int>)((int)local_50->SharedReferenceCount + 1);
                UNLOCK();
              }
              ppFVar13 = &local_58;
            }
            (*pcVar14)(pUVar15,param_4->Value,ppFVar13,param_2);
            UTickableTransformConstraint::EnsurePrimaryDependency(this_03,local_a8);
          }
        }
      }
LAB_14a4517e1:
      uVar12 = (ulonglong)(uint)local_a0.ArrayNum;
      this_04.Data = this_04.Data + 8;
      uVar11 = (ulonglong)local_b8;
      pUVar8 = local_c0;
    }
    if ((FWeakObjectPtr *)local_a0.AllocatorInstance.Data != (FWeakObjectPtr *)0x0) {
      FMemory::Free(local_a0.AllocatorInstance.Data);
    }
  }
  return;
}

