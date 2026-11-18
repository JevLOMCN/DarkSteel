// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IKRig
// Functions: 16

// StaticStruct @ 14def75a0

UScriptStruct * __cdecl FIKRetargetSpeedPlantingOp::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FIKRetargetSpeedPlantingOp.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UScriptStruct_FIKRetargetSpeedPlantingOp.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FIKRetargetSpeedPlantingOp,(UObject *)pUVar1,
                         L"IKRetargetSpeedPlantingOp");
  }
  return Z_Registration_Info_UScriptStruct_FIKRetargetSpeedPlantingOp.OuterSingleton;
}

// Initialize @ 14def7620

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __thiscall
FIKRetargetSpeedPlantingOp::Initialize
          (FIKRetargetSpeedPlantingOp *this,FIKRetargetProcessor *param_1,FRetargetSkeleton *param_2
          ,FTargetSkeleton *param_3,FIKRetargetOpBase *param_4,FIKRigLogger *param_5)

{
  int *piVar1;
  FName FVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  undefined8 uVar5;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  FText *pFVar9;
  FText *pFVar10;
  FTextFormat *pFVar11;
  TArray<FResolvedBoneChain,TSizedDefaultAllocator<32>_> *pTVar12;
  ulonglong uVar13;
  FName *pFVar14;
  TRefCountPtr<ITextData> TVar15;
  FName *pFVar16;
  UIKRigDefinition *pUVar17;
  longlong lVar18;
  FName *pFVar19;
  FName *pFVar20;
  undefined1 local_res8 [8];
  FName local_138;
  FName local_130;
  FText local_128;
  FText local_118;
  FText local_108;
  FText local_f8;
  FText local_e8;
  FText local_d8;
  FText local_c8;
  FText local_b8;
  FText local_a8;
  FTextFormat local_98;
  FText local_88;
  FTextFormat local_78;
  FText local_68;
  FTextFormat local_58;
  FText local_48;
  FTextFormat local_38;
  
  *(undefined1 *)((longlong)&this->_padding_ + 5) = 0;
  if (param_4 == (FIKRetargetOpBase *)0x0) {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<2311533879535599670>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\IKRig\\Source\\IKRig\\Private\\Retargeter\\RetargetOps\\SpeedPlantingOp.cpp"
                       ,0x36,"InParentOp");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      uVar7 = (*pcVar4)();
      return (bool)uVar7;
    }
  }
  else {
    if (*(longlong *)&param_4[1].ParentOpName.Number != 0) {
      piVar1 = &(this->GoalsToPlant).ArrayMax;
      (this->GoalsToPlant).ArrayNum = 0;
      if ((this->GoalsToPlant).ArrayMax < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x68,8,0,&(this->GoalsToPlant).AllocatorInstance,0,piVar1);
      }
      local_138.ComparisonIndex.Value = (this->Settings).ChainsToSpeedPlant.ArrayNum;
      uVar13 = (ulonglong)(int)local_138.ComparisonIndex.Value;
      pFVar20 = (FName *)(this->Settings).ChainsToSpeedPlant.AllocatorInstance.Data;
      local_128.TextData.Reference = (ITextData *)(pFVar20 + uVar13 * 2);
LAB_14def7792:
      do {
        TVar15.Reference = local_128.TextData.Reference;
        if ((this->Settings).ChainsToSpeedPlant.ArrayNum != (int)uVar13) {
          `TCheckedPointerIterator<FRetargetSpeedPlantingSettings,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res8);
        }
        if (pFVar20 == (FName *)TVar15.Reference) {
          bVar6 = (this->GoalsToPlant).ArrayNum != 0;
          *(bool *)((longlong)&this->_padding_ + 5) = bVar6;
          return bVar6;
        }
        pUVar17 = *(UIKRigDefinition **)&param_4[1].ParentOpName.Number;
        FVar2 = *pFVar20;
        if (pUVar17 == (UIKRigDefinition *)0x0) {
          pUVar17 = (param_1->AllBoneChains).DefaultTargetIKRig;
        }
        local_130 = FVar2;
        pTVar12 = TMapBase<UIKRigDefinition_const_*,TArray<FResolvedBoneChain,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UIKRigDefinition_const_*,TArray<FResolvedBoneChain,TSizedDefaultAllocator<32>_>,0>_>
                  ::Find((TMapBase<UIKRigDefinition_const_*,TArray<FResolvedBoneChain,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UIKRigDefinition_const_*,TArray<FResolvedBoneChain,TSizedDefaultAllocator<32>_>,0>_>
                          *)&(param_1->AllBoneChains).TargetBoneChains,pUVar17);
        if (pTVar12 != (TArray<FResolvedBoneChain,TSizedDefaultAllocator<32>_> *)0x0) {
          pFVar14 = (FName *)(pTVar12->AllocatorInstance).Data;
          pFVar19 = pFVar14 + (longlong)pTVar12->ArrayNum * 0x1e;
          for (; pFVar14 != pFVar19; pFVar14 = pFVar14 + 0x1e) {
            if (*pFVar14 == FVar2) {
              if (pFVar14 != (FName *)0x0) {
                if (pFVar14[3] == (FName)0x0) {
                  pFVar9 = FText::FromName(&local_88,&local_130);
                  pFVar10 = FText::AsLocalizable_Advanced_LocText
                                      (&local_f8,L"SpeedPlantingOp",L"SpeedPlantingChainWithoutGoal"
                                       ,
                                       L"Speed Planting Op: specified chain does not have an IK goal. Cannot speed plant, \'{0}."
                                      );
                  pFVar11 = FTextFormat::FTextFormat(&local_78,pFVar10,Default);
                  pFVar9 = FText::Format<FText>(&local_108,pFVar11,pFVar9);
                  FIKRigLogger::LogWarning(param_5,pFVar9);
                  TVar15.Reference = local_f8.TextData.Reference;
                  if (local_108.TextData.Reference != (ITextData *)0x0) {
                    (**(code **)((longlong)*local_108.TextData.Reference + 0x10))();
                    TVar15.Reference = local_f8.TextData.Reference;
                  }
                  goto LAB_14def7922;
                }
                pFVar19 = (FName *)(param_1->GoalContainer).Goals.AllocatorInstance.Data;
                pFVar16 = pFVar19 + (longlong)(param_1->GoalContainer).Goals.ArrayNum * 0x16;
                goto joined_r0x00014def7961;
              }
              break;
            }
          }
        }
        pFVar9 = FText::FromName(&local_48,&local_130);
        pFVar10 = FText::AsLocalizable_Advanced_LocText
                            (&local_b8,L"SpeedPlantingOp",L"SpeedPlantingMissingChain",
                             L"Speed Planting Op: chain data is out of sync with IK Rig. Missing target chain, \'{0}."
                            );
        pFVar11 = FTextFormat::FTextFormat(&local_38,pFVar10,Default);
        pFVar9 = FText::Format<FText>(&local_c8,pFVar11,pFVar9);
        FIKRigLogger::LogWarning(param_5,pFVar9);
        if (local_c8.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_c8.TextData.Reference + 0x10))();
        }
        if (local_b8.TextData.Reference == (ITextData *)0x0) goto LAB_14def7934;
        (**(code **)((longlong)*local_b8.TextData.Reference + 0x10))();
        uVar13 = (ulonglong)local_138 & 0xffffffff;
        pFVar20 = pFVar20 + 2;
      } while( true );
    }
    local_138 = *(FName *)((longlong)&this->_padding_ + 4);
    pFVar9 = FText::FromName(&local_a8,&local_138);
    pFVar10 = FText::AsLocalizable_Advanced_LocText
                        (&local_118,L"SpeedPlantingOp",L"MissingIKRig",
                         L"{0}, is missing an IK rig. No chains can be retargeted. ");
    pFVar11 = FTextFormat::FTextFormat(&local_98,pFVar10,Default);
    pFVar9 = FText::Format<FText>(&local_128,pFVar11,pFVar9);
    FIKRigLogger::LogWarning(param_5,pFVar9);
    if (local_128.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_128.TextData.Reference + 0x10))();
    }
    if (local_118.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_118.TextData.Reference + 0x10))();
    }
  }
  return false;
joined_r0x00014def7961:
  if (pFVar19 == pFVar16) goto LAB_14def7974;
  if (*pFVar19 == pFVar14[3]) {
    iVar8 = (this->GoalsToPlant).ArrayNum;
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x868,&(this->GoalsToPlant).AllocatorInstance,piVar1);
    }
    (this->GoalsToPlant).ArrayNum = iVar8 + 1;
    pFVar3 = (this->GoalsToPlant).AllocatorInstance.Data;
    lVar18 = (longlong)iVar8 * 0x68;
    *(FName *)(pFVar3 + lVar18) = pFVar14[3];
    *(FName **)(pFVar3 + lVar18 + 8) = pFVar20;
    uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    pFVar20 = pFVar20 + 2;
    *(double *)(pFVar3 + lVar18 + 0x10) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    *(undefined8 *)(pFVar3 + lVar18 + 0x10 + 8) = uVar5;
    *(double *)(pFVar3 + lVar18 + 0x20) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    *(double *)(pFVar3 + lVar18 + 0x28) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    *(undefined8 *)(pFVar3 + lVar18 + 0x28 + 8) = uVar5;
    *(double *)(pFVar3 + lVar18 + 0x38) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    pFVar3[lVar18 + 0x40] = (FScriptContainerElement)0x0;
    FVar2 = pFVar19[6];
    *(FName *)(pFVar3 + lVar18 + 0x48) = pFVar19[5];
    ((FName *)(pFVar3 + lVar18 + 0x48))[1] = FVar2;
    *(FName *)(pFVar3 + lVar18 + 0x58) = pFVar19[7];
    *(undefined8 *)(pFVar3 + lVar18 + 0x60) = 0xbff0000000000000;
    uVar13 = (ulonglong)local_138 & 0xffffffff;
    goto LAB_14def7792;
  }
  pFVar19 = pFVar19 + 0x16;
  goto joined_r0x00014def7961;
LAB_14def7974:
  pFVar9 = FText::FromName(&local_68,pFVar14 + 3);
  pFVar10 = FText::AsLocalizable_Advanced_LocText
                      (&local_d8,L"SpeedPlantingOp",L"SpeedPlantingRigWithoutGoal",
                       L"Speed Planting Op: target chain references a goal that is not present in the IK Rig, \'{0}."
                      );
  pFVar11 = FTextFormat::FTextFormat(&local_58,pFVar10,Default);
  pFVar9 = FText::Format<FText>(&local_e8,pFVar11,pFVar9);
  FIKRigLogger::LogWarning(param_5,pFVar9);
  TVar15.Reference = local_d8.TextData.Reference;
  if (local_e8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_e8.TextData.Reference + 0x10))();
    TVar15.Reference = local_d8.TextData.Reference;
  }
LAB_14def7922:
  if (TVar15.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*TVar15.Reference + 0x10))();
  }
LAB_14def7934:
  pFVar20 = pFVar20 + 2;
  uVar13 = (ulonglong)local_138 & 0xffffffff;
  goto LAB_14def7792;
}

// Run @ 14def7b90

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FIKRetargetSpeedPlantingOp::Run
          (FIKRetargetSpeedPlantingOp *this,FIKRetargetProcessor *param_1,double param_2,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_3,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_4)

{
  double *pdVar1;
  double dVar2;
  int iVar3;
  longlong lVar4;
  double dVar5;
  float fVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined8 uVar12;
  TVector<double> *pTVar13;
  FScriptContainerElement *pFVar14;
  FScriptContainerElement *pFVar15;
  FScriptContainerElement *pFVar16;
  FScriptContainerElement *pFVar17;
  FScriptContainerElement *pFVar18;
  undefined1 local_res10 [8];
  TVector<double>_u_0 local_148;
  TVector<double>_u_0 local_128;
  TVector<double>_u_0 local_108;
  TVector<double>_u_0 local_e8;
  TVector<double> local_c8 [6];
  
  dVar11 = _UNK_15076c718;
  dVar10 = ___xmm_bff0000000000000bff0000000000000;
  dVar9 = _UNK_150689688;
  dVar8 = ___xmm_3ff00000000000003ff0000000000000;
  dVar7 = __real_bff0000000000000;
  fVar6 = __real_3f800000;
  dVar5 = __real_3ff0000000000000;
  if (param_1->bIKForcedOff == false) {
    pFVar16 = (this->GoalsToPlant).AllocatorInstance.Data;
    iVar3 = (this->GoalsToPlant).ArrayNum;
    pFVar17 = pFVar16 + 0x48;
    pFVar18 = pFVar16 + (longlong)iVar3 * 0x68;
LAB_14def7c40:
    if ((this->GoalsToPlant).ArrayNum != iVar3) {
      `TCheckedPointerIterator<FSpeedPlantingGoalState,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if (pFVar16 != pFVar18) {
      pFVar15 = (param_1->GoalContainer).Goals.AllocatorInstance.Data;
      pFVar14 = pFVar15 + (longlong)(param_1->GoalContainer).Goals.ArrayNum * 0xb0;
      if (pFVar15 == pFVar14) {
LAB_14def7de3:
        pFVar16 = pFVar16 + 0x68;
        pFVar17 = pFVar17 + 0x68;
      }
      else {
        do {
          if (*(longlong *)pFVar15 == *(longlong *)pFVar16) {
            dVar2 = *(double *)(pFVar17 + 0x18);
            if ((dVar2 < 0.0) ||
               (pdVar1 = &(this->Settings).SpeedThreshold, *pdVar1 <= dVar2 && dVar2 != *pdVar1)) {
              lVar4 = *(longlong *)(pFVar15 + 0x30);
              *(longlong *)pFVar17 = *(longlong *)(pFVar15 + 0x28);
              *(longlong *)(pFVar17 + 8) = lVar4;
              *(longlong *)(pFVar17 + 0x10) = *(longlong *)(pFVar15 + 0x38);
              uVar12 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
              *(double *)(pFVar17 + -0x20) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X
              ;
              *(undefined8 *)(pFVar17 + -0x18) = uVar12;
              *(double *)(pFVar17 + -0x10) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z
              ;
              pFVar17[-8] = (FScriptContainerElement)0x0;
              *(longlong *)(pFVar17 + -0x38) = *(longlong *)(pFVar17 + -0x20);
              *(longlong *)(pFVar17 + -0x30) = *(longlong *)(pFVar17 + -0x18);
              *(longlong *)(pFVar17 + -0x28) = *(longlong *)(pFVar17 + -0x10);
              goto LAB_14def7de3;
            }
            local_108._s_0.X = (double)*(undefined8 *)(pFVar15 + 0x28);
            local_108._s_0.Y = (double)*(undefined8 *)(pFVar15 + 0x30);
            local_108._s_0.Z = (double)*(undefined8 *)(pFVar15 + 0x38);
            local_e8._s_0.X = (double)*(undefined8 *)pFVar17;
            local_e8._s_0.Y = (double)*(undefined8 *)(pFVar17 + 8);
            local_e8._s_0.Z = (double)*(undefined8 *)(pFVar17 + 0x10);
            local_148._s_0.Z = dVar5;
            local_128._s_0.Z = dVar7;
            local_148._s_0.X = dVar8;
            local_148._s_0.Y = dVar9;
            local_128._s_0.X = dVar10;
            local_128._s_0.Y = dVar11;
            pTVar13 = UKismetMathLibrary::VectorSpringInterp
                                (local_c8,(TVector<double> *)&local_e8._s_0,
                                 (TVector<double> *)&local_108._s_0,
                                 (FVectorSpringState *)(pFVar17 + -0x38),
                                 (float)(this->Settings).Stiffness,
                                 (float)(this->Settings).CriticalDamping,(float)param_2,fVar6,0.0,
                                 false,(TVector<double> *)&local_128._s_0,
                                 (TVector<double> *)&local_148._s_0,false);
            pFVar16 = pFVar16 + 0x68;
            pFVar17 = pFVar17 + 0x68;
            dVar2 = (pTVar13->field0_0x0)._s_0.Y;
            *(double *)(pFVar15 + 0x28) = (pTVar13->field0_0x0)._s_0.X;
            *(double *)(pFVar15 + 0x30) = dVar2;
            *(double *)(pFVar15 + 0x38) = (pTVar13->field0_0x0)._s_0.Z;
            goto LAB_14def7c40;
          }
          pFVar15 = pFVar15 + 0xb0;
        } while (pFVar15 != pFVar14);
        pFVar16 = pFVar16 + 0x68;
        pFVar17 = pFVar17 + 0x68;
      }
      goto LAB_14def7c40;
    }
  }
  return;
}

// OnAddedToStack @ 14def7ef0

void __thiscall
FIKRetargetSpeedPlantingOp::OnAddedToStack
          (FIKRetargetSpeedPlantingOp *this,UIKRetargeter *param_1,FIKRetargetOpBase *param_2)

{
  RegenerateChainSettings(this,param_2);
  return;
}

// OnAssignIKRig @ 14def7f80

void __thiscall
FIKRetargetSpeedPlantingOp::OnAssignIKRig
          (FIKRetargetSpeedPlantingOp *this,ERetargetSourceOrTarget param_1,
          UIKRigDefinition *param_2,FIKRetargetOpBase *param_3)

{
  RegenerateChainSettings(this,param_3);
  return;
}

// GetSettings @ 14def7f90

FIKRetargetOpSettingsBase * __thiscall
FIKRetargetSpeedPlantingOp::GetSettings(FIKRetargetSpeedPlantingOp *this)

{
  return (FIKRetargetOpSettingsBase *)&this->Settings;
}

// GetSettingsType @ 14def7fa0

UScriptStruct * __thiscall
FIKRetargetSpeedPlantingOp::GetSettingsType(FIKRetargetSpeedPlantingOp *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FIKRetargetSpeedPlantingOpSettings.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UScriptStruct_FIKRetargetSpeedPlantingOpSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FIKRetargetSpeedPlantingOpSettings,
                         (UObject *)pUVar1,L"IKRetargetSpeedPlantingOpSettings");
  }
  return Z_Registration_Info_UScriptStruct_FIKRetargetSpeedPlantingOpSettings.OuterSingleton;
}

// GetType @ 14def8020

UScriptStruct * __thiscall FIKRetargetSpeedPlantingOp::GetType(FIKRetargetSpeedPlantingOp *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FIKRetargetSpeedPlantingOp.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UScriptStruct_FIKRetargetSpeedPlantingOp.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FIKRetargetSpeedPlantingOp,(UObject *)pUVar1,
                         L"IKRetargetSpeedPlantingOp");
  }
  return Z_Registration_Info_UScriptStruct_FIKRetargetSpeedPlantingOp.OuterSingleton;
}

// OnPlaybackReset @ 14def8060

void __thiscall FIKRetargetSpeedPlantingOp::OnPlaybackReset(FIKRetargetSpeedPlantingOp *this)

{
  int iVar1;
  undefined8 uVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  
  pFVar5 = (this->GoalsToPlant).AllocatorInstance.Data;
  iVar1 = (this->GoalsToPlant).ArrayNum;
  pFVar3 = pFVar5 + 0x28;
  pFVar4 = pFVar5 + (longlong)iVar1 * 0x68;
  while( true ) {
    if ((this->GoalsToPlant).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FSpeedPlantingGoalState,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    if (pFVar5 == pFVar4) break;
    pFVar5 = pFVar5 + 0x68;
    *(double *)pFVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    *(undefined8 *)(pFVar3 + 8) = uVar2;
    *(double *)(pFVar3 + 0x10) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    pFVar3[0x18] = (FScriptContainerElement)0x0;
    *(double *)(pFVar3 + -0x18) = *(double *)pFVar3;
    *(double *)(pFVar3 + -0x10) = *(double *)(pFVar3 + 8);
    *(double *)(pFVar3 + -8) = *(double *)(pFVar3 + 0x10);
    pFVar3 = pFVar3 + 0x68;
  }
  this->ResetThisTick = true;
  return;
}

// AnimGraphPreUpdateMainThread @ 14def80f0

void __thiscall
FIKRetargetSpeedPlantingOp::AnimGraphPreUpdateMainThread
          (FIKRetargetSpeedPlantingOp *this,USkeletalMeshComponent *param_1,
          USkeletalMeshComponent *param_2)

{
  int iVar1;
  UAnimInstance *this_00;
  TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_> *this_01;
  float *pfVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  
  if ((*(char *)((longlong)&this->_padding_ + 5) != '\0') &&
     (this_00 = USkeletalMeshComponent::GetAnimInstance(param_1), this_00 != (UAnimInstance *)0x0))
  {
    this_01 = UAnimInstance::GetAnimationCurveList(this_00,AttributeCurve);
    iVar1 = (this->GoalsToPlant).ArrayNum;
    pFVar3 = (this->GoalsToPlant).AllocatorInstance.Data;
    pFVar4 = pFVar3 + (longlong)iVar1 * 0x68;
    while( true ) {
      if ((this->GoalsToPlant).ArrayNum != iVar1) {
        `TCheckedPointerIterator<FSpeedPlantingGoalState,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (pFVar3 == pFVar4) break;
      pfVar2 = TMapBase<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>
               ::Find((TMapBase<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>
                       *)this_01,*(FName *)(*(longlong *)(pFVar3 + 8) + 8));
      if (pfVar2 == (float *)0x0) {
        *(undefined8 *)(pFVar3 + 0x60) = *(undefined8 *)(pFVar3 + 0x60);
        pFVar3 = pFVar3 + 0x68;
      }
      else {
        *(double *)(pFVar3 + 0x60) = (double)*pfVar2;
        pFVar3 = pFVar3 + 0x68;
      }
    }
  }
  return;
}

// AnimGraphEvaluateAnyThread @ 14def81b0

void __thiscall
FIKRetargetSpeedPlantingOp::AnimGraphEvaluateAnyThread
          (FIKRetargetSpeedPlantingOp *this,FPoseContext *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  float fVar9;
  undefined1 local_res8 [8];
  
  if (*(char *)((longlong)&this->_padding_ + 5) != '\0') {
    pFVar7 = (this->GoalsToPlant).AllocatorInstance.Data;
    iVar1 = (this->GoalsToPlant).ArrayNum;
    pFVar8 = pFVar7 + (longlong)iVar1 * 0x68;
    while( true ) {
      if ((this->GoalsToPlant).ArrayNum != iVar1) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FSpeedPlantingGoalState,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (pFVar7 == pFVar8) break;
      fVar9 = (float)*(double *)(pFVar7 + 0x60);
      uVar4 = UE::Anim::TNamedValueArray<TMemStackAllocator<0>,UE::Anim::FCurveElement>::IndexOf
                        ((TNamedValueArray<TMemStackAllocator<0>,UE::Anim::FCurveElement> *)
                         &param_1->Curve,*(FName *)(*(longlong *)(pFVar7 + 8) + 8));
      if (uVar4 != 0xffffffff) {
        uVar6 = 0;
        if ((int)uVar4 < *(int *)&(param_1->Curve).field_0x8) {
          uVar6 = ~uVar4 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        lVar5 = (longlong)(int)uVar4 * 0x10 + *(longlong *)&param_1->Curve;
        if (lVar5 != 0) {
          fVar9 = *(float *)(lVar5 + 8);
        }
      }
      *(double *)(pFVar7 + 0x60) = (double)fVar9;
      pFVar7 = pFVar7 + 0x68;
    }
  }
  return;
}

// GetParentOpType @ 14def82d0

UScriptStruct * __thiscall
FIKRetargetSpeedPlantingOp::GetParentOpType(FIKRetargetSpeedPlantingOp *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FIKRetargetRunIKRigOp.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar1 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UScriptStruct_FIKRetargetRunIKRigOp.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FIKRetargetRunIKRigOp,(UObject *)pUVar1,
                         L"IKRetargetRunIKRigOp");
  }
  return Z_Registration_Info_UScriptStruct_FIKRetargetRunIKRigOp.OuterSingleton;
}

// OnTargetChainRenamed @ 14def8310

void __thiscall
FIKRetargetSpeedPlantingOp::OnTargetChainRenamed
          (FIKRetargetSpeedPlantingOp *this,FName param_1,FName param_2)

{
  int iVar1;
  FName *pFVar2;
  FName *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = (this->Settings).ChainsToSpeedPlant.ArrayNum;
  pFVar3 = (FName *)(this->Settings).ChainsToSpeedPlant.AllocatorInstance.Data;
  pFVar2 = pFVar3 + (longlong)iVar1 * 2;
  while( true ) {
    if ((this->Settings).ChainsToSpeedPlant.ArrayNum != iVar1) {
      `TCheckedPointerIterator<FRetargetSpeedPlantingSettings,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (pFVar3 == pFVar2) break;
    if (*pFVar3 == param_1) {
      *pFVar3 = param_2;
    }
    pFVar3 = pFVar3 + 2;
  }
  return;
}

// OnParentReinitPropertyEdited @ 14def8390

void __thiscall
FIKRetargetSpeedPlantingOp::OnParentReinitPropertyEdited
          (FIKRetargetSpeedPlantingOp *this,FIKRetargetOpBase *param_1,
          FPropertyChangedEvent *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  byte bVar5;
  FScriptContainerElement *pFVar6;
  ForAnyElementType FVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  TArray<FRetargetSpeedPlantingSettings,TSizedDefaultAllocator<32>_> *pTVar11;
  longlong lVar12;
  FScriptContainerElement *pFVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  ForAnyElementType FVar16;
  byte bVar17;
  int iVar18;
  TArray<FRetargetSpeedPlantingSettings,TSizedDefaultAllocator<32>_> *pTStackX_10;
  undefined1 auStackX_18 [8];
  TArray<FName,TSizedDefaultAllocator<32>_> TStack_48;
  
  if (param_1 == (FIKRetargetOpBase *)0x0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<2311533879535599914>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\IKRig\\Source\\IKRig\\Private\\Retargeter\\RetargetOps\\SpeedPlantingOp.cpp"
                       ,0x12a,"ParentOp");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    FIKRetargetRunIKRigOp::GetRequiredTargetChains((FIKRetargetRunIKRigOp *)param_1,&TStack_48);
    if (TStack_48.ArrayNum != 0) {
      iVar18 = (this->Settings).ChainsToSpeedPlant.ArrayNum;
      lVar12 = (longlong)iVar18;
      pTStackX_10 = &(this->Settings).ChainsToSpeedPlant;
      uVar14 = TStack_48._8_8_;
      FVar16.Data = TStack_48.AllocatorInstance.Data;
      if (iVar18 != 0) {
        pFVar2 = (pTStackX_10->AllocatorInstance).Data;
        iVar18 = 0;
        if (TStack_48.AllocatorInstance.Data !=
            TStack_48.AllocatorInstance.Data + (longlong)TStack_48.ArrayNum * 8) {
          FVar7.Data = TStack_48.AllocatorInstance.Data;
          do {
            if (*(longlong *)FVar7.Data == *(longlong *)pFVar2) {
              bVar17 = 1;
              goto LAB_14df4d34b;
            }
            FVar7.Data = FVar7.Data + 8;
          } while (FVar7.Data != TStack_48.AllocatorInstance.Data + (longlong)TStack_48.ArrayNum * 8
                  );
        }
        bVar17 = 0;
LAB_14df4d34b:
        lVar10 = 0;
        iVar8 = 0;
        do {
          lVar10 = lVar10 + 1;
          iVar9 = iVar8 + 1;
          if (lVar10 < lVar12) {
            pFVar13 = pFVar2 + lVar10 * 0x10;
            do {
              if (FVar16.Data != FVar16.Data + (longlong)(int)uVar14 * 8) {
                pFVar6 = FVar16.Data;
                do {
                  if (*(longlong *)pFVar6 == *(longlong *)pFVar13) {
                    bVar5 = 1;
                    goto LAB_14df4d394;
                  }
                  pFVar6 = pFVar6 + 8;
                } while (pFVar6 != FVar16.Data + (longlong)(int)uVar14 * 8);
              }
              bVar5 = 0;
LAB_14df4d394:
              if (bVar17 != bVar5) break;
              iVar9 = iVar9 + 1;
              lVar10 = lVar10 + 1;
              pFVar13 = pFVar13 + 0x10;
            } while (lVar10 < lVar12);
          }
          if (bVar17 != 0) {
            if (iVar18 != iVar8) {
              memmove(pFVar2 + (longlong)iVar18 * 0x10,pFVar2 + (longlong)iVar8 * 0x10,
                      (longlong)(iVar9 - iVar8) << 4);
              uVar14 = TStack_48._8_8_;
              FVar16.Data = TStack_48.AllocatorInstance.Data;
            }
            iVar18 = iVar18 + (iVar9 - iVar8);
          }
          bVar17 = bVar17 ^ 1;
          iVar8 = iVar9;
        } while (lVar10 < lVar12);
        pTStackX_10->ArrayNum = iVar18;
      }
      pFVar2 = FVar16.Data + (longlong)(int)uVar14 * 8;
      pTVar11 = pTStackX_10;
      uVar15 = uVar14;
LAB_14df4d410:
      if ((int)uVar15 != (int)uVar14) {
        `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&pTStackX_10);
      }
      if (FVar16.Data != pFVar2) {
        iVar18 = (this->Settings).ChainsToSpeedPlant.ArrayNum;
        pFVar13 = (pTVar11->AllocatorInstance).Data;
        lVar12 = *(longlong *)FVar16.Data;
        pFVar6 = pFVar13 + (longlong)iVar18 * 0x10;
        while( true ) {
          if ((this->Settings).ChainsToSpeedPlant.ArrayNum != iVar18) {
            `TCheckedPointerIterator<FRetargetSpeedPlantingSettings,int,0>::operator!='::__l2::
            <lambda_1>::operator()(auStackX_18);
          }
          if (pFVar13 == pFVar6) {
            iVar18 = (this->Settings).ChainsToSpeedPlant.ArrayNum;
            piVar1 = &(this->Settings).ChainsToSpeedPlant.ArrayMax;
            pTVar11 = &(this->Settings).ChainsToSpeedPlant;
            if (iVar18 == *piVar1) {
              iVar18 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x410,&pTVar11->AllocatorInstance,piVar1);
            }
            (this->Settings).ChainsToSpeedPlant.ArrayNum = iVar18 + 1;
            pFVar13 = (pTVar11->AllocatorInstance).Data;
            FVar16.Data = FVar16.Data + 8;
            *(longlong *)(pFVar13 + (longlong)iVar18 * 0x10) = lVar12;
            *(undefined8 *)(pFVar13 + (longlong)iVar18 * 0x10 + 8) = 0;
            uVar15 = TStack_48._8_8_;
            goto LAB_14df4d410;
          }
          if (*(longlong *)pFVar13 == lVar12) break;
          pFVar13 = pFVar13 + 0x10;
        }
        pTVar11 = &(this->Settings).ChainsToSpeedPlant;
        FVar16.Data = FVar16.Data + 8;
        uVar15 = TStack_48._8_8_;
        goto LAB_14df4d410;
      }
    }
    if (TStack_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(TStack_48.AllocatorInstance.Data);
    }
  }
  return;
}

// GetRequiredSpeedCurves @ 14df3e3f0

TArray<FName,TSizedDefaultAllocator<32>_> * __thiscall
FIKRetargetSpeedPlantingOp::GetRequiredSpeedCurves
          (FIKRetargetSpeedPlantingOp *this,
          TArray<FName,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res8 [8];
  longlong local_38;
  ForAnyElementType local_30;
  undefined8 local_28;
  
  iVar1 = (this->Settings).ChainsToSpeedPlant.ArrayNum;
  iVar6 = 0;
  pFVar7 = (this->Settings).ChainsToSpeedPlant.AllocatorInstance.Data;
  pFVar8 = pFVar7 + (longlong)iVar1 * 0x10;
  local_30.Data = (FScriptContainerElement *)0x0;
  local_28 = 0;
  while( true ) {
    if ((this->Settings).ChainsToSpeedPlant.ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FRetargetSpeedPlantingSettings_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
      iVar6 = (int)local_28;
    }
    if (pFVar7 == pFVar8) break;
    local_38 = *(longlong *)(pFVar7 + 8);
    if (local_38 != 0) {
      iVar4 = iVar6;
      if ((local_30.Data <= (FScriptContainerElement *)&local_38) &&
         ((FScriptContainerElement *)&local_38 < local_30.Data + (longlong)local_28._4_4_ * 8)) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          pTVar5 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
          return pTVar5;
        }
        iVar4 = (int)local_28;
      }
      if (iVar4 == local_28._4_4_) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,&local_30,(int *)((longlong)&local_28 + 4));
      }
      iVar6 = iVar4 + 1;
      local_28 = CONCAT44(local_28._4_4_,iVar6);
      *(longlong *)(local_30.Data + (longlong)iVar4 * 8) = local_38;
    }
    pFVar7 = pFVar7 + 0x10;
  }
  (__return_storage_ptr__->AllocatorInstance).Data = local_30.Data;
  __return_storage_ptr__->ArrayNum = iVar6;
  __return_storage_ptr__->ArrayMax = local_28._4_4_;
  return __return_storage_ptr__;
}

// RegenerateChainSettings @ 14df4d270

void __thiscall
FIKRetargetSpeedPlantingOp::RegenerateChainSettings
          (FIKRetargetSpeedPlantingOp *this,FIKRetargetOpBase *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  byte bVar5;
  FScriptContainerElement *pFVar6;
  ForAnyElementType FVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  TArray<FRetargetSpeedPlantingSettings,TSizedDefaultAllocator<32>_> *pTVar11;
  longlong lVar12;
  FScriptContainerElement *pFVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  ForAnyElementType FVar16;
  byte bVar17;
  int iVar18;
  TArray<FRetargetSpeedPlantingSettings,TSizedDefaultAllocator<32>_> *local_res10;
  undefined1 local_res18 [8];
  TArray<FName,TSizedDefaultAllocator<32>_> local_48;
  
  if (param_1 == (FIKRetargetOpBase *)0x0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<2311533879535599914>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\IKRig\\Source\\IKRig\\Private\\Retargeter\\RetargetOps\\SpeedPlantingOp.cpp"
                       ,0x12a,"ParentOp");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    FIKRetargetRunIKRigOp::GetRequiredTargetChains((FIKRetargetRunIKRigOp *)param_1,&local_48);
    if (local_48.ArrayNum != 0) {
      iVar18 = (this->Settings).ChainsToSpeedPlant.ArrayNum;
      lVar12 = (longlong)iVar18;
      local_res10 = &(this->Settings).ChainsToSpeedPlant;
      uVar14 = local_48._8_8_;
      FVar16.Data = local_48.AllocatorInstance.Data;
      if (iVar18 != 0) {
        pFVar2 = (local_res10->AllocatorInstance).Data;
        iVar18 = 0;
        if (local_48.AllocatorInstance.Data !=
            local_48.AllocatorInstance.Data + (longlong)local_48.ArrayNum * 8) {
          FVar7.Data = local_48.AllocatorInstance.Data;
          do {
            if (*(longlong *)FVar7.Data == *(longlong *)pFVar2) {
              bVar17 = 1;
              goto LAB_14df4d34b;
            }
            FVar7.Data = FVar7.Data + 8;
          } while (FVar7.Data != local_48.AllocatorInstance.Data + (longlong)local_48.ArrayNum * 8);
        }
        bVar17 = 0;
LAB_14df4d34b:
        lVar10 = 0;
        iVar8 = 0;
        do {
          lVar10 = lVar10 + 1;
          iVar9 = iVar8 + 1;
          if (lVar10 < lVar12) {
            pFVar13 = pFVar2 + lVar10 * 0x10;
            do {
              if (FVar16.Data != FVar16.Data + (longlong)(int)uVar14 * 8) {
                pFVar6 = FVar16.Data;
                do {
                  if (*(longlong *)pFVar6 == *(longlong *)pFVar13) {
                    bVar5 = 1;
                    goto LAB_14df4d394;
                  }
                  pFVar6 = pFVar6 + 8;
                } while (pFVar6 != FVar16.Data + (longlong)(int)uVar14 * 8);
              }
              bVar5 = 0;
LAB_14df4d394:
              if (bVar17 != bVar5) break;
              iVar9 = iVar9 + 1;
              lVar10 = lVar10 + 1;
              pFVar13 = pFVar13 + 0x10;
            } while (lVar10 < lVar12);
          }
          if (bVar17 != 0) {
            if (iVar18 != iVar8) {
              memmove(pFVar2 + (longlong)iVar18 * 0x10,pFVar2 + (longlong)iVar8 * 0x10,
                      (longlong)(iVar9 - iVar8) << 4);
              uVar14 = local_48._8_8_;
              FVar16.Data = local_48.AllocatorInstance.Data;
            }
            iVar18 = iVar18 + (iVar9 - iVar8);
          }
          bVar17 = bVar17 ^ 1;
          iVar8 = iVar9;
        } while (lVar10 < lVar12);
        local_res10->ArrayNum = iVar18;
      }
      pFVar2 = FVar16.Data + (longlong)(int)uVar14 * 8;
      pTVar11 = local_res10;
      uVar15 = uVar14;
LAB_14df4d410:
      if ((int)uVar15 != (int)uVar14) {
        `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_res10);
      }
      if (FVar16.Data != pFVar2) {
        iVar18 = (this->Settings).ChainsToSpeedPlant.ArrayNum;
        pFVar13 = (pTVar11->AllocatorInstance).Data;
        lVar12 = *(longlong *)FVar16.Data;
        pFVar6 = pFVar13 + (longlong)iVar18 * 0x10;
        while( true ) {
          if ((this->Settings).ChainsToSpeedPlant.ArrayNum != iVar18) {
            `TCheckedPointerIterator<FRetargetSpeedPlantingSettings,int,0>::operator!='::__l2::
            <lambda_1>::operator()(local_res18);
          }
          if (pFVar13 == pFVar6) {
            iVar18 = (this->Settings).ChainsToSpeedPlant.ArrayNum;
            piVar1 = &(this->Settings).ChainsToSpeedPlant.ArrayMax;
            pTVar11 = &(this->Settings).ChainsToSpeedPlant;
            if (iVar18 == *piVar1) {
              iVar18 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x410,&pTVar11->AllocatorInstance,piVar1);
            }
            (this->Settings).ChainsToSpeedPlant.ArrayNum = iVar18 + 1;
            pFVar13 = (pTVar11->AllocatorInstance).Data;
            FVar16.Data = FVar16.Data + 8;
            *(longlong *)(pFVar13 + (longlong)iVar18 * 0x10) = lVar12;
            *(undefined8 *)(pFVar13 + (longlong)iVar18 * 0x10 + 8) = 0;
            uVar15 = local_48._8_8_;
            goto LAB_14df4d410;
          }
          if (*(longlong *)pFVar13 == lVar12) break;
          pFVar13 = pFVar13 + 0x10;
        }
        pTVar11 = &(this->Settings).ChainsToSpeedPlant;
        FVar16.Data = FVar16.Data + 8;
        uVar15 = local_48._8_8_;
        goto LAB_14df4d410;
      }
    }
    if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.AllocatorInstance.Data);
    }
  }
  return;
}

