// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IKRig
// Functions: 10

// StaticStruct @ 14dee1f70

UScriptStruct * __cdecl FIKRetargetStrideWarpingOp::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FIKRetargetStrideWarpingOp.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UScriptStruct_FIKRetargetStrideWarpingOp.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FIKRetargetStrideWarpingOp,(UObject *)pUVar1,
                         L"IKRetargetStrideWarpingOp");
  }
  return Z_Registration_Info_UScriptStruct_FIKRetargetStrideWarpingOp.OuterSingleton;
}

// Initialize @ 14dee2090

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __thiscall
FIKRetargetStrideWarpingOp::Initialize
          (FIKRetargetStrideWarpingOp *this,FIKRetargetProcessor *param_1,FRetargetSkeleton *param_2
          ,FTargetSkeleton *param_3,FIKRetargetOpBase *param_4,FIKRigLogger *param_5)

{
  TArray<FStrideWarpGoalData,TSizedDefaultAllocator<32>_> *pTVar1;
  FName *pFVar2;
  uint uVar3;
  UObject *pUVar4;
  FName FVar5;
  code *pcVar6;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTVar7;
  bool bVar8;
  undefined1 uVar9;
  uint uVar10;
  int iVar11;
  FText *pFVar12;
  FText *pFVar13;
  FTextFormat *pFVar14;
  ulonglong uVar15;
  TArray<FResolvedBoneChain,TSizedDefaultAllocator<32>_> *pTVar16;
  FText *pFVar17;
  TRefCountPtr<ITextData> TVar18;
  UIKRigDefinition *pUVar19;
  FName *pFVar20;
  uint uVar21;
  FName *pFVar22;
  FName *pFVar23;
  FName *pFVar24;
  FName *pFVar25;
  undefined1 local_res8 [8];
  FName local_1a0;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *local_198;
  FText local_190;
  FText local_180;
  FText local_170;
  FText local_160;
  FText local_150;
  FText local_140;
  FText local_130;
  FText local_120;
  FText local_110;
  FText local_100;
  FText local_f0;
  FTextFormat local_e0;
  FText local_d0;
  FTextFormat local_c0;
  FText local_b0;
  FText local_a0;
  FTextFormat local_90;
  FText local_80;
  FTextFormat local_70;
  FText local_60;
  FTextFormat local_50;
  
  pTVar1 = &this->GoalsToWarp;
  *(undefined1 *)((longlong)&this->_padding_ + 5) = 0;
  (this->GoalsToWarp).ArrayNum = 0;
  if ((this->GoalsToWarp).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x70,0x10,0,&pTVar1->AllocatorInstance,0,&(this->GoalsToWarp).ArrayMax);
  }
  if (param_4 == (FIKRetargetOpBase *)0x0) {
    bVar8 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_2516574282511810461>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\IKRig\\Source\\IKRig\\Private\\Retargeter\\RetargetOps\\StrideWarpingOp.cpp"
                       ,99,"InParentOp");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      uVar9 = (*pcVar6)();
      return (bool)uVar9;
    }
  }
  else {
    pUVar4 = *(UObject **)&param_4[1].ParentOpName.Number;
    if (pUVar4 != (UObject *)0x0) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(pUVar4);
      }
      (this->TargetIKRig).field0_0x0 =
           *(TObjectPtr<UIKRigDefinition_const_>_u_0 *)&param_4[1].ParentOpName.Number;
      local_198 = FResolvedRetargetPoseSet::GetGlobalRetargetPose
                            ((FResolvedRetargetPoseSet *)&param_3->_padding_);
      pFVar25 = (FName *)(this->Settings).ChainSettings.AllocatorInstance.Data;
      uVar3 = (this->Settings).ChainSettings.ArrayNum;
      uVar15 = (ulonglong)(int)uVar3;
      pFVar2 = (FName *)((longlong)pFVar25 + uVar15 * 0xc);
LAB_14dee2225:
      if ((this->Settings).ChainSettings.ArrayNum != (int)uVar15) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FRetargetStrideWarpChainSettings,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (pFVar25 == pFVar2) {
        bVar8 = (this->GoalsToWarp).ArrayNum != 0;
        *(bool *)((longlong)&this->_padding_ + 5) = bVar8;
        return bVar8;
      }
      if ((char)pFVar25[1].ComparisonIndex.Value != '\0') {
        pUVar19 = (this->TargetIKRig).field0_0x0.DebugPtr;
        FVar5 = *pFVar25;
        if (pUVar19 == (UIKRigDefinition *)0x0) {
          pUVar19 = (param_1->AllBoneChains).DefaultTargetIKRig;
        }
        pTVar16 = TMapBase<UIKRigDefinition_const_*,TArray<FResolvedBoneChain,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UIKRigDefinition_const_*,TArray<FResolvedBoneChain,TSizedDefaultAllocator<32>_>,0>_>
                  ::Find((TMapBase<UIKRigDefinition_const_*,TArray<FResolvedBoneChain,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UIKRigDefinition_const_*,TArray<FResolvedBoneChain,TSizedDefaultAllocator<32>_>,0>_>
                          *)&(param_1->AllBoneChains).TargetBoneChains,pUVar19);
        pTVar7 = local_198;
        if (pTVar16 != (TArray<FResolvedBoneChain,TSizedDefaultAllocator<32>_> *)0x0) {
          pFVar23 = (FName *)(pTVar16->AllocatorInstance).Data;
          pFVar24 = pFVar23 + (longlong)pTVar16->ArrayNum * 0x1e;
          for (; pFVar23 != pFVar24; pFVar23 = pFVar23 + 0x1e) {
            if (*pFVar23 == FVar5) {
              if (pFVar23 != (FName *)0x0) {
                if (pFVar23[3] != (FName)0x0) {
                  pFVar24 = (FName *)(param_1->GoalContainer).Goals.AllocatorInstance.Data;
                  pFVar20 = pFVar24 + (longlong)(param_1->GoalContainer).Goals.ArrayNum * 0x16;
                  goto joined_r0x00014dee23d3;
                }
                pFVar12 = FText::FromName(&local_d0,pFVar25);
                pFVar13 = FText::AsLocalizable_Advanced_LocText
                                    (&local_160,L"StrideWarpingOp",L"StrideWarpingChainWithNoGoal",
                                     L"Stride Warping Op: specified chain does not have an IK goal. Cannot stride warp, \'{0}."
                                    );
                pFVar14 = FTextFormat::FTextFormat(&local_c0,pFVar13,Default);
                pFVar12 = FText::Format<FText>(&local_170,pFVar14,pFVar12);
                FIKRigLogger::LogWarning(param_5,pFVar12);
                TVar18.Reference = local_160.TextData.Reference;
                if (local_170.TextData.Reference != (ITextData *)0x0) {
                  (**(code **)((longlong)*local_170.TextData.Reference + 0x10))();
                  TVar18.Reference = local_160.TextData.Reference;
                }
                goto LAB_14dee2311;
              }
              break;
            }
          }
        }
        pFVar12 = FText::FromName(&local_60,pFVar25);
        pFVar13 = FText::AsLocalizable_Advanced_LocText
                            (&local_100,L"StrideWarpingOp",L"StrideWarpingMissingChain",
                             L"Stride Warping Op: chain data is out of sync with IK Rig. Missing target chain, \'{0}."
                            );
        pFVar14 = FTextFormat::FTextFormat(&local_50,pFVar13,Default);
        pFVar12 = FText::Format<FText>(&local_110,pFVar14,pFVar12);
        FIKRigLogger::LogWarning(param_5,pFVar12);
        TVar18.Reference = local_100.TextData.Reference;
        if (local_110.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_110.TextData.Reference + 0x10))();
          TVar18.Reference = local_100.TextData.Reference;
        }
        goto LAB_14dee2311;
      }
      goto LAB_14dee2321;
    }
    local_1a0 = *(FName *)((longlong)&this->_padding_ + 4);
    pFVar12 = FText::FromName(&local_f0,&local_1a0);
    pFVar13 = FText::AsLocalizable_Advanced_LocText
                        (&local_180,L"StrideWarpingOp",L"MissingIKRig",
                         L"{0}, is missing an IK rig. No chains can be retargeted. ");
    pFVar14 = FTextFormat::FTextFormat(&local_e0,pFVar13,Default);
    pFVar12 = FText::Format<FText>(&local_190,pFVar14,pFVar12);
    FIKRigLogger::LogWarning(param_5,pFVar12);
    if (local_190.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_190.TextData.Reference + 0x10))();
    }
    if (local_180.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_180.TextData.Reference + 0x10))();
    }
  }
  return false;
joined_r0x00014dee23d3:
  if (pFVar24 == pFVar20) goto LAB_14dee23ea;
  if (*pFVar24 == pFVar23[3]) {
    if (pFVar24 != (FName *)0x0) {
      pFVar20 = (FName *)param_3->_padding_;
      pFVar22 = pFVar20;
      goto joined_r0x00014dee2480;
    }
    goto LAB_14dee23ea;
  }
  pFVar24 = pFVar24 + 0x16;
  goto joined_r0x00014dee23d3;
joined_r0x00014dee2480:
  if (pFVar22 == pFVar20 + (int)param_3->_padding_) goto LAB_14dee2494;
  if (*pFVar22 == pFVar24[1]) {
    uVar21 = (uint)((longlong)pFVar22 - (longlong)pFVar20 >> 3);
    if (uVar21 != 0xffffffff) {
      uVar10 = 0;
      if ((int)uVar21 < local_198->ArrayNum) {
        uVar10 = ~uVar21 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        uVar9 = (*pcVar6)();
        return (bool)uVar9;
      }
      iVar11 = (this->GoalsToWarp).ArrayNum;
      pFVar23 = (FName *)((pTVar7->AllocatorInstance).Data + (longlong)(int)uVar21 * 0x60);
      if (iVar11 == (this->GoalsToWarp).ArrayMax) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x1070,&pTVar1->AllocatorInstance,&(this->GoalsToWarp).ArrayMax);
      }
      (this->GoalsToWarp).ArrayNum = iVar11 + 1;
      pFVar20 = (FName *)((pTVar1->AllocatorInstance).Data + (longlong)iVar11 * 0x70);
      pFVar25 = (FName *)&pFVar25[1].Number;
      *pFVar20 = *pFVar24;
      FVar5 = pFVar23[1];
      uVar15 = (ulonglong)uVar3;
      pFVar20[2] = *pFVar23;
      pFVar20[3] = FVar5;
      FVar5 = pFVar23[3];
      pFVar20[4] = pFVar23[2];
      pFVar20[5] = FVar5;
      FVar5 = pFVar23[5];
      pFVar20[6] = pFVar23[4];
      pFVar20[7] = FVar5;
      FVar5 = pFVar23[7];
      pFVar20[8] = pFVar23[6];
      pFVar20[9] = FVar5;
      FVar5 = pFVar23[9];
      pFVar20[10] = pFVar23[8];
      pFVar20[0xb] = FVar5;
      FVar5 = pFVar23[0xb];
      pFVar20[0xc] = pFVar23[10];
      pFVar20[0xd] = FVar5;
      goto LAB_14dee2225;
    }
    goto LAB_14dee2494;
  }
  pFVar22 = pFVar22 + 1;
  goto joined_r0x00014dee2480;
LAB_14dee2494:
  pFVar12 = FText::FromName(&local_b0,pFVar24 + 1);
  pFVar13 = FText::FromName(&local_a0,pFVar23 + 3);
  pFVar17 = FText::AsLocalizable_Advanced_LocText
                      (&local_140,L"StrideWarpingOp",L"StrideWarpingMissingBone",
                       L"Stride Warping Op: IK goal, \'{0}\' references missing bone, \'{1}\'.");
  pFVar14 = FTextFormat::FTextFormat(&local_90,pFVar17,Default);
  pFVar12 = FText::Format<FText,FText>(&local_150,pFVar14,pFVar13,pFVar12);
  FIKRigLogger::LogWarning(param_5,pFVar12);
  TVar18.Reference = local_140.TextData.Reference;
  if (local_150.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_150.TextData.Reference + 0x10))();
    TVar18.Reference = local_140.TextData.Reference;
  }
  goto LAB_14dee2311;
LAB_14dee23ea:
  pFVar12 = FText::FromName(&local_80,pFVar23 + 3);
  pFVar13 = FText::AsLocalizable_Advanced_LocText
                      (&local_120,L"StrideWarpingOp",L"StrideWarpingRigWithNoGoal",
                       L"Stride Warping Op: target chain references a goal that is not present in the IK Rig, \'{0}."
                      );
  pFVar14 = FTextFormat::FTextFormat(&local_70,pFVar13,Default);
  pFVar12 = FText::Format<FText>(&local_130,pFVar14,pFVar12);
  FIKRigLogger::LogWarning(param_5,pFVar12);
  TVar18.Reference = local_120.TextData.Reference;
  if (local_130.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_130.TextData.Reference + 0x10))();
    TVar18.Reference = local_120.TextData.Reference;
  }
LAB_14dee2311:
  if (TVar18.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*TVar18.Reference + 0x10))();
  }
LAB_14dee2321:
  uVar15 = (ulonglong)uVar3;
  pFVar25 = (FName *)&pFVar25[1].Number;
  goto LAB_14dee2225;
}

// Run @ 14dee2640

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FIKRetargetStrideWarpingOp::Run
          (FIKRetargetStrideWarpingOp *this,FIKRetargetProcessor *param_1,double param_2,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_3,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_4)

{
  EWarpingDirectionSource EVar1;
  FName FVar2;
  code *pcVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  double dVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTVar11;
  TArray<FResolvedBoneChain,TSizedDefaultAllocator<32>_> *pTVar12;
  TQuat<double> *pTVar13;
  TVector<double> *pTVar14;
  FResolvedBoneChain *pFVar15;
  FScriptContainerElement *pFVar16;
  UIKRigDefinition *pUVar17;
  FScriptContainerElement *pFVar18;
  ulonglong uVar19;
  FScriptContainerElement *pFVar20;
  uint uVar21;
  FScriptContainerElement *pFVar22;
  FResolvedBoneChain *this_00;
  ulonglong uVar23;
  FScriptContainerElement *pFVar24;
  longlong lVar25;
  longlong lVar26;
  longlong lVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  double dVar41;
  double dVar42;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  double dVar55;
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  double dVar63;
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  double dVar64;
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  double dVar70;
  undefined4 uVar71;
  undefined4 uVar72;
  undefined8 uVar73;
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined4 uVar84;
  undefined4 uVar85;
  undefined8 uVar86;
  undefined8 uVar90;
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  double dVar91;
  double dVar92;
  double dVar95;
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  double dVar96;
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  double dVar99;
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined4 uVar102;
  undefined4 uVar103;
  int iVar104;
  undefined1 local_558 [16];
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> local_548;
  undefined1 local_538 [8];
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_530;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_520;
  TVector<double>_u_0 local_510;
  TVector<double>_u_0 local_4f8;
  FIKRetargetProcessor *local_4e0;
  TVector<double>_u_0 local_4d8;
  undefined1 local_4b8 [16];
  longlong local_4a8;
  longlong lStack_4a0;
  undefined8 local_498;
  longlong local_490;
  longlong lStack_488;
  undefined8 local_480;
  TVector<double>_u_0 local_478;
  TVector<double>_u_0 local_460;
  double local_448;
  double local_440;
  double local_438;
  double local_430;
  double local_428;
  undefined4 local_418;
  undefined4 uStack_414;
  undefined4 uStack_410;
  undefined4 uStack_40c;
  undefined1 local_408 [16];
  undefined1 local_3f8 [16];
  double local_3e8;
  double local_3e0;
  double dStack_3d8;
  double local_3d0;
  double local_3c8;
  double dStack_3c0;
  double local_3b8;
  double dStack_3b0;
  undefined8 local_3a8;
  double local_3a0;
  double dStack_398;
  undefined8 local_390;
  TVector<double> local_388;
  double local_368;
  double dStack_360;
  double local_358;
  double dStack_350;
  undefined1 local_348 [16];
  undefined1 local_338 [16];
  double local_328;
  double dStack_320;
  double local_318;
  undefined8 uStack_310;
  double local_308;
  undefined8 uStack_300;
  double local_2f8;
  double dStack_2f0;
  TVector<double>_u_0 local_2e8;
  TVector<double>_u_0 local_2c8;
  double local_2a8;
  double dStack_2a0;
  TQuat<double> local_298;
  undefined1 local_278 [32];
  TQuat<double> local_258;
  undefined1 local_238 [32];
  double local_218;
  double dStack_210;
  double local_208;
  double local_200;
  double dStack_1f8;
  double local_1f0;
  double local_1e8;
  double dStack_1e0;
  double local_1d8;
  double local_1d0;
  double dStack_1c8;
  double local_1c0;
  double local_1b8;
  double dStack_1b0;
  undefined8 local_1a8;
  TVector<double> local_1a0;
  TVector<double> local_188 [2];
  TVector<double> local_158;
  TVector<double> local_140 [3];
  TQuat<double> local_f8 [6];
  
  dVar55 = __real_3e45798ee0000000;
  if (param_1->bIKForcedOff != false) {
    return;
  }
  EVar1 = (this->Settings).DirectionSource;
  local_4e0 = param_1;
  if (EVar1 == Goals) {
    pFVar20 = (this->GoalsToWarp).AllocatorInstance.Data;
    iVar10 = 0;
    iVar104 = (this->GoalsToWarp).ArrayNum;
    local_520.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pFVar22 = pFVar20 + 0x30;
    pFVar24 = pFVar20 + (longlong)iVar104 * 0x70;
    local_520.ArrayNum = 0;
    local_520.ArrayMax = 0;
    local_530.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_530.ArrayNum = 0;
    local_530.ArrayMax = 0;
    while( true ) {
      if ((this->GoalsToWarp).ArrayNum != iVar104) {
        local_558[0] = 0;
        `TCheckedPointerIterator<FStrideWarpGoalData,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_558);
        iVar10 = local_520.ArrayNum;
      }
      if (pFVar20 == pFVar24) break;
      pFVar16 = (param_1->GoalContainer).Goals.AllocatorInstance.Data;
      pFVar18 = pFVar16 + (longlong)(param_1->GoalContainer).Goals.ArrayNum * 0xb0;
      if (pFVar16 == pFVar18) {
LAB_14dee3260:
        pFVar20 = pFVar20 + 0x70;
        pFVar22 = pFVar22 + 0x70;
      }
      else {
        do {
          if (*(longlong *)pFVar16 == *(longlong *)pFVar20) {
            local_4a8 = *(longlong *)pFVar22;
            lStack_4a0 = *(longlong *)(pFVar22 + 8);
            local_490 = *(longlong *)(pFVar16 + 0x28);
            lStack_488 = *(longlong *)(pFVar16 + 0x30);
            local_498 = 0;
            local_480 = 0;
            if ((local_520.AllocatorInstance.Data <= (FScriptContainerElement *)&local_4a8) &&
               ((FScriptContainerElement *)&local_4a8 <
                local_520.AllocatorInstance.Data + (longlong)local_520.ArrayMax * 0x18)) {
              bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                );
              if (bVar8) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              iVar10 = local_520.ArrayNum;
            }
            if (iVar10 == local_520.ArrayMax) {
              iVar10 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x818,&local_520.AllocatorInstance,&local_520.ArrayMax);
            }
            local_520.ArrayNum = iVar10 + 1;
            *(longlong *)(local_520.AllocatorInstance.Data + (longlong)iVar10 * 0x18) = local_4a8;
            *(longlong *)(local_520.AllocatorInstance.Data + (longlong)iVar10 * 0x18 + 8) =
                 lStack_4a0;
            *(undefined8 *)(local_520.AllocatorInstance.Data + (longlong)iVar10 * 0x18 + 0x10) =
                 local_498;
            if (((local_530.AllocatorInstance.Data <= (FScriptContainerElement *)&local_490) &&
                ((FScriptContainerElement *)&local_490 <
                 local_530.AllocatorInstance.Data + (longlong)local_530.ArrayMax * 0x18)) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar8)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            iVar10 = local_530.ArrayNum;
            if (local_530.ArrayNum == local_530.ArrayMax) {
              iVar10 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x818,&local_530.AllocatorInstance,&local_530.ArrayMax);
            }
            local_530.ArrayNum = iVar10 + 1;
            *(longlong *)(local_530.AllocatorInstance.Data + (longlong)iVar10 * 0x18) = local_490;
            *(longlong *)(local_530.AllocatorInstance.Data + (longlong)iVar10 * 0x18 + 8) =
                 lStack_488;
            *(undefined8 *)(local_530.AllocatorInstance.Data + (longlong)iVar10 * 0x18 + 0x10) =
                 local_480;
            iVar10 = local_520.ArrayNum;
            goto LAB_14dee3260;
          }
          pFVar16 = pFVar16 + 0xb0;
        } while (pFVar16 != pFVar18);
        pFVar20 = pFVar20 + 0x70;
        pFVar22 = pFVar22 + 0x70;
      }
    }
    pTVar13 = GetRotationFromDeformedPoints
                        (local_f8,&local_520,&local_530,(TVector<double> *)&local_4f8._s_0,
                         (TVector<double> *)&local_510._s_0);
    uVar71 = *(undefined4 *)&pTVar13->X;
    uVar72 = *(undefined4 *)((longlong)&pTVar13->X + 4);
    local_4d8._s_0.X = pTVar13->X;
    uVar84 = *(undefined4 *)&pTVar13->Y;
    uVar85 = *(undefined4 *)((longlong)&pTVar13->Y + 4);
    local_4d8._s_0.Y = pTVar13->Y;
    auVar45._0_8_ = pTVar13->Z;
    auVar45._8_8_ = pTVar13->W;
    local_4b8 = auVar45;
    local_418 = uVar71;
    uStack_414 = uVar72;
    uStack_410 = uVar84;
    uStack_40c = uVar85;
    local_408 = auVar45;
    if (local_530.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_530.AllocatorInstance.Data);
    }
    if (local_520.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_520.AllocatorInstance.Data);
    }
  }
  else if (EVar1 == Chain) {
    pUVar17 = (this->TargetIKRig).field0_0x0.DebugPtr;
    FVar2 = (this->Settings).DirectionChain;
    if (pUVar17 == (UIKRigDefinition *)0x0) {
      pUVar17 = (param_1->AllBoneChains).DefaultTargetIKRig;
    }
    pTVar12 = TMapBase<UIKRigDefinition_const_*,TArray<FResolvedBoneChain,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UIKRigDefinition_const_*,TArray<FResolvedBoneChain,TSizedDefaultAllocator<32>_>,0>_>
              ::Find((TMapBase<UIKRigDefinition_const_*,TArray<FResolvedBoneChain,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UIKRigDefinition_const_*,TArray<FResolvedBoneChain,TSizedDefaultAllocator<32>_>,0>_>
                      *)&(param_1->AllBoneChains).TargetBoneChains,pUVar17);
    if (pTVar12 == (TArray<FResolvedBoneChain,TSizedDefaultAllocator<32>_> *)0x0) {
      return;
    }
    this_00 = (FResolvedBoneChain *)(pTVar12->AllocatorInstance).Data;
    pFVar15 = this_00 + pTVar12->ArrayNum;
    if (this_00 == pFVar15) {
      return;
    }
    while (this_00->ChainName != FVar2) {
      this_00 = this_00 + 1;
      if (this_00 == pFVar15) {
        return;
      }
    }
    if (this_00 == (FResolvedBoneChain *)0x0) {
      return;
    }
    FResolvedBoneChain::GetChainTransformsFromPose(this_00,&local_548,param_4);
    iVar104 = (this_00->RefPoseGlobalTransforms).ArrayNum;
    if (iVar104 == 0) {
      bVar8 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_2516574282511810312>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\IKRig\\Source\\IKRig\\Private\\Retargeter\\RetargetOps\\StrideWarpingOp.cpp"
                         ,0xf8,"!InitialChainTransforms.IsEmpty()");
      if (bVar8) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (local_548.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
        return;
      }
      FMemory::Free(local_548.AllocatorInstance.Data);
      return;
    }
    uVar19 = 0;
    iVar10 = local_548.ArrayNum;
    local_4f8._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    local_510._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    local_4f8._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    local_4f8._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_510._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    local_510._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    uVar23 = uVar19;
    if (0 < iVar104) {
      do {
        uVar21 = (uint)uVar19;
        uVar9 = 0;
        if ((int)uVar21 < iVar104) {
          uVar9 = ~uVar21 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar20 = (this_00->RefPoseGlobalTransforms).AllocatorInstance.Data;
        pFVar22 = pFVar20 + uVar23 + 0x20;
        local_1e8 = *(double *)pFVar22;
        dStack_1e0 = *(double *)(pFVar22 + 8);
        local_1d8 = *(double *)(pFVar20 + uVar23 + 0x30);
        local_4f8._s_0.X = local_4f8._s_0.X + local_1e8;
        uVar9 = 0;
        if ((int)uVar21 < iVar10) {
          uVar9 = ~uVar21 >> 0x1f;
        }
        local_4f8._s_0.Y = local_4f8._s_0.Y + dStack_1e0;
        local_4f8._s_0.Z = local_4f8._s_0.Z + local_1d8;
        if ((uVar9 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar19 = (ulonglong)(uVar21 + 1);
        iVar104 = (this_00->RefPoseGlobalTransforms).ArrayNum;
        local_1d0 = *(double *)(local_548.AllocatorInstance.Data + uVar23 + 0x20);
        dStack_1c8 = *(double *)(local_548.AllocatorInstance.Data + uVar23 + 0x20 + 8);
        local_1c0 = *(double *)(local_548.AllocatorInstance.Data + uVar23 + 0x30);
        local_510._s_0.X = local_510._s_0.X + local_1d0;
        local_510._s_0.Y = local_510._s_0.Y + dStack_1c8;
        local_510._s_0.Z = local_510._s_0.Z + local_1c0;
        uVar23 = uVar23 + 0x60;
      } while ((int)(uVar21 + 1) < iVar104);
    }
    dVar64 = (double)(__real_3f800000 / (float)iVar104);
    local_4f8._s_0.Z = local_4f8._s_0.Z * dVar64;
    local_510._s_0.X = local_510._s_0.X * dVar64;
    local_510._s_0.Y = local_510._s_0.Y * dVar64;
    local_510._s_0.Z = local_510._s_0.Z * dVar64;
    local_4f8._s_0.X = local_4f8._s_0.X * dVar64;
    local_4f8._s_0.Y = local_4f8._s_0.Y * dVar64;
    if (iVar104 == 1) {
      pFVar22 = (this_00->RefPoseGlobalTransforms).AllocatorInstance.Data;
      auVar45 = *(undefined1 (*) [16])pFVar22;
      dVar64 = auVar45._0_8_;
      auVar68 = *(undefined1 (*) [16])(pFVar22 + 0x10);
      if ((iVar10 < 1) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      dVar92 = auVar45._8_8_;
      auVar66._8_4_ = auVar45._0_4_;
      auVar66._0_8_ = dVar64;
      auVar66._12_4_ = auVar45._4_4_;
      dVar91 = auVar68._0_8_;
      dVar95 = auVar68._8_8_;
      auVar30._8_4_ = auVar68._8_4_;
      auVar30._0_8_ = dVar95;
      auVar30._12_4_ = auVar68._12_4_;
      dVar70 = *(double *)(local_548.AllocatorInstance.Data + 0x10) *
               GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
      dVar42 = *(double *)(local_548.AllocatorInstance.Data + 0x18) *
               GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
      dVar99 = *(double *)local_548.AllocatorInstance.Data *
               GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
      dVar96 = *(double *)(local_548.AllocatorInstance.Data + 8) *
               GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
      auVar75._8_4_ = SUB84(dVar42,0);
      auVar75._0_8_ = dVar70;
      auVar75._12_4_ = (int)((ulonglong)dVar42 >> 0x20);
      auVar44._8_4_ = auVar45._8_4_;
      auVar44._0_8_ = dVar92;
      auVar44._12_4_ = auVar45._12_4_;
      auVar57._8_4_ = SUB84(dVar96,0);
      auVar57._0_8_ = dVar99;
      auVar57._12_4_ = (int)((ulonglong)dVar96 >> 0x20);
      auVar31._8_4_ = auVar68._0_4_;
      auVar31._0_8_ = dVar91;
      auVar31._12_4_ = auVar68._4_4_;
      local_258.X = dVar64 * auVar75._8_8_ *
                    GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
                    dVar95 * dVar99 +
                    dVar92 * dVar70 *
                    GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
                    dVar91 * auVar57._8_8_ *
                    GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
      local_258.Y = auVar66._8_8_ * dVar70 *
                    GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
                    auVar30._8_8_ * dVar96 +
                    auVar44._8_8_ * dVar42 *
                    GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
                    auVar31._8_8_ * dVar99 *
                    GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
      local_258.Z = dVar64 * auVar57._8_8_ *
                    GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
                    dVar95 * dVar70 +
                    dVar92 * dVar99 *
                    GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
                    dVar91 * auVar75._8_8_ *
                    GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
      local_258.W = dVar64 * dVar99 *
                    GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
                    dVar95 * dVar42 +
                    dVar92 * dVar96 *
                    GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
                    dVar91 * dVar70 *
                    GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
      pTVar14 = FIKRetargetStrideWarpingOpSettings::GetAxisVector
                          (&local_1a0,&(this->Settings).ForwardDirection);
      local_460._s_0.X = (pTVar14->field0_0x0)._s_0.X;
      local_460._s_0.Y = (pTVar14->field0_0x0)._s_0.Y;
      local_460._s_0.Z = (pTVar14->field0_0x0)._s_0.Z;
      local_2c8._s_0.X = (pTVar14->field0_0x0)._s_0.X;
      local_2c8._s_0.Y = (pTVar14->field0_0x0)._s_0.Y;
      local_2c8._s_0.Z = (pTVar14->field0_0x0)._s_0.Z;
      pTVar14 = UE::Math::TQuat<double>::RotateVector
                          (&local_258,local_188,(TVector<double> *)&local_2c8._s_0);
      local_478._s_0.X = (pTVar14->field0_0x0)._s_0.X;
      local_478._s_0.Y = (pTVar14->field0_0x0)._s_0.Y;
    }
    else {
      uVar9 = 0;
      if ((int)(iVar104 - 1U) < iVar104) {
        uVar9 = ~(iVar104 - 1U) >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar104 = (this_00->RefPoseGlobalTransforms).ArrayNum;
      pFVar20 = (this_00->RefPoseGlobalTransforms).AllocatorInstance.Data;
      lVar25 = (longlong)iVar104 * 0x60;
      pFVar22 = pFVar20 + lVar25 + -0x40;
      local_3b8 = *(double *)pFVar22;
      dStack_3b0 = *(double *)(pFVar22 + 8);
      local_3a8 = *(undefined8 *)(pFVar20 + lVar25 + -0x30);
      if ((iVar104 < 1) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar22 = (this_00->RefPoseGlobalTransforms).AllocatorInstance.Data;
      local_1b8 = *(double *)(pFVar22 + 0x20);
      dStack_1b0 = *(double *)(pFVar22 + 0x28);
      local_1a8 = *(undefined8 *)(pFVar22 + 0x30);
      uVar9 = 0;
      if ((int)(iVar10 - 1U) < iVar10) {
        uVar9 = ~(iVar10 - 1U) >> 0x1f;
      }
      local_460._s_0.X = local_3b8 - local_1b8;
      local_460._s_0.Y = dStack_3b0 - dStack_1b0;
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      lVar25 = (longlong)(iVar10 + -1) * 0x60;
      local_3a0 = *(double *)(local_548.AllocatorInstance.Data + lVar25 + 0x20);
      dStack_398 = *(double *)(local_548.AllocatorInstance.Data + lVar25 + 0x20 + 8);
      local_390 = *(undefined8 *)(local_548.AllocatorInstance.Data + lVar25 + 0x30);
      if ((iVar10 < 1) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      local_478._s_0.X = local_3a0 - *(double *)(local_548.AllocatorInstance.Data + 0x20);
      local_478._s_0.Y = dStack_398 - *(double *)(local_548.AllocatorInstance.Data + 0x28);
    }
    local_460._s_0.Z = 0.0;
    local_478._s_0.Z = 0.0;
    UE::Math::TVector<double>::Normalize((TVector<double> *)&local_460._s_0,dVar55);
    UE::Math::TVector<double>::Normalize((TVector<double> *)&local_478._s_0,dVar55);
    UE::Math::TQuat<double>::FindBetweenNormals
              ((TQuat<double> *)local_238,(TVector<double> *)&local_460._s_0,
               (TVector<double> *)&local_478._s_0);
    local_4d8._4_4_ = local_238._4_4_;
    local_4d8._0_4_ = local_238._0_4_;
    local_4d8._12_4_ = local_238._12_4_;
    local_4d8._8_4_ = local_238._8_4_;
    local_418 = local_238._0_4_;
    uStack_414 = local_238._4_4_;
    uStack_410 = local_238._8_4_;
    uStack_40c = local_238._12_4_;
    local_4b8 = local_238._16_16_;
    local_408 = local_238._16_16_;
    FMemory::Free(local_548.AllocatorInstance.Data);
    param_1 = local_4e0;
    auVar45 = local_238._16_16_;
    uVar71 = local_238._0_4_;
    uVar72 = local_238._4_4_;
    uVar84 = local_238._8_4_;
    uVar85 = local_238._12_4_;
  }
  else {
    if (EVar1 != RootBone) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("!\"Enclosing block should never be called\"",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\IKRig\\Source\\IKRig\\Private\\Retargeter\\RetargetOps\\StrideWarpingOp.cpp"
                         ,0x133,L"");
      if (!bVar8) {
        return;
      }
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pTVar11 = FResolvedRetargetPoseSet::GetGlobalRetargetPose
                        ((FResolvedRetargetPoseSet *)&(param_1->TargetSkeleton)._padding_);
    if ((pTVar11->ArrayNum < 1) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar22 = (pTVar11->AllocatorInstance).Data;
    local_4f8._s_0.X = (double)*(undefined8 *)(pFVar22 + 0x20);
    local_4f8._s_0.Y = (double)*(undefined8 *)(pFVar22 + 0x28);
    local_4f8._s_0.Z = (double)*(undefined8 *)(pFVar22 + 0x30);
    local_218 = local_4f8._s_0.X;
    dStack_210 = local_4f8._s_0.Y;
    local_208 = local_4f8._s_0.Z;
    if (((param_1->TargetSkeleton).OutputGlobalPose.ArrayNum < 1) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar22 = (param_1->TargetSkeleton).OutputGlobalPose.AllocatorInstance.Data;
    local_510._s_0.X = (double)*(undefined8 *)(pFVar22 + 0x20);
    local_510._s_0.Y = (double)*(undefined8 *)(pFVar22 + 0x28);
    local_510._s_0.Z = (double)*(undefined8 *)(pFVar22 + 0x30);
    local_200 = local_510._s_0.X;
    dStack_1f8 = local_510._s_0.Y;
    local_1f0 = local_510._s_0.Z;
    if ((pTVar11->ArrayNum < 1) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar22 = (pTVar11->AllocatorInstance).Data;
    auVar45 = *(undefined1 (*) [16])pFVar22;
    dVar64 = auVar45._0_8_;
    auVar68 = *(undefined1 (*) [16])(pFVar22 + 0x10);
    if (((param_1->TargetSkeleton).OutputGlobalPose.ArrayNum < 1) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar22 = (param_1->TargetSkeleton).OutputGlobalPose.AllocatorInstance.Data;
    dVar92 = auVar45._8_8_;
    auVar65._8_4_ = auVar45._0_4_;
    auVar65._0_8_ = dVar64;
    auVar65._12_4_ = auVar45._4_4_;
    dVar91 = auVar68._0_8_;
    dVar95 = auVar68._8_8_;
    auVar28._8_4_ = auVar68._8_4_;
    auVar28._0_8_ = dVar95;
    auVar28._12_4_ = auVar68._12_4_;
    dVar70 = *(double *)(pFVar22 + 0x10) *
             GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
    dVar42 = *(double *)(pFVar22 + 0x18) *
             GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
    dVar99 = *(double *)pFVar22 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
    dVar96 = *(double *)(pFVar22 + 8) * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1]
    ;
    auVar74._8_4_ = SUB84(dVar42,0);
    auVar74._0_8_ = dVar70;
    auVar74._12_4_ = (int)((ulonglong)dVar42 >> 0x20);
    auVar43._8_4_ = auVar45._8_4_;
    auVar43._0_8_ = dVar92;
    auVar43._12_4_ = auVar45._12_4_;
    auVar56._8_4_ = SUB84(dVar96,0);
    auVar56._0_8_ = dVar99;
    auVar56._12_4_ = (int)((ulonglong)dVar96 >> 0x20);
    auVar29._8_4_ = auVar68._0_4_;
    auVar29._0_8_ = dVar91;
    auVar29._12_4_ = auVar68._4_4_;
    local_298.X = dVar64 * auVar74._8_8_ *
                  GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] + dVar95 * dVar99
                  + dVar92 * dVar70 *
                    GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
                  dVar91 * auVar56._8_8_ *
                  GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
    local_298.Y = auVar65._8_8_ * dVar70 *
                  GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
                  auVar28._8_8_ * dVar96 +
                  auVar43._8_8_ * dVar42 *
                  GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
                  auVar29._8_8_ * dVar99 *
                  GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
    local_298.Z = dVar64 * auVar56._8_8_ *
                  GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] + dVar95 * dVar70
                  + dVar92 * dVar99 *
                    GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
                  dVar91 * auVar74._8_8_ *
                  GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
    local_298.W = dVar64 * dVar99 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1]
                  + dVar95 * dVar42 +
                  dVar92 * dVar96 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1]
                  + dVar91 * dVar70 *
                    GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
    FIKRetargetStrideWarpingOpSettings::GetAxisVector
              ((TVector<double> *)&local_4d8._s_0,&(this->Settings).ForwardDirection);
    local_2e8._s_0.X = local_4d8._s_0.X;
    local_2e8._s_0.Y = local_4d8._s_0.Y;
    local_2e8._s_0.Z = local_4d8._s_0.Z;
    UE::Math::TQuat<double>::RotateVector(&local_298,&local_388,(TVector<double> *)&local_2e8._s_0);
    local_4d8._s_0.Z = 0.0;
    local_388.field0_0x0._s_0.Z = 0.0;
    UE::Math::TVector<double>::Normalize((TVector<double> *)&local_4d8._s_0,dVar55);
    UE::Math::TVector<double>::Normalize(&local_388,dVar55);
    UE::Math::TQuat<double>::FindBetweenNormals
              ((TQuat<double> *)local_278,(TVector<double> *)&local_4d8._s_0,&local_388);
    local_4d8._4_4_ = local_278._4_4_;
    local_4d8._0_4_ = local_278._0_4_;
    local_4d8._12_4_ = local_278._12_4_;
    local_4d8._8_4_ = local_278._8_4_;
    local_418 = local_278._0_4_;
    uStack_414 = local_278._4_4_;
    uStack_410 = local_278._8_4_;
    uStack_40c = local_278._12_4_;
    local_4b8 = local_278._16_16_;
    local_408 = local_278._16_16_;
    auVar45 = local_278._16_16_;
    uVar71 = local_278._0_4_;
    uVar72 = local_278._4_4_;
    uVar84 = local_278._8_4_;
    uVar85 = local_278._12_4_;
  }
  uVar73 = local_4f8._s_0.Z;
  uVar90 = local_4f8._s_0.Y;
  uVar86 = local_4f8._s_0.X;
  dVar64 = _UNK_150689518;
  dVar55 = ___xmm_00000000000000003ff0000000000000;
  local_328 = local_510._s_0.X;
  dStack_320 = local_510._s_0.Y;
  local_368 = UE::Math::TQuat<double>::Identity.X;
  dStack_360 = UE::Math::TQuat<double>::Identity.Y;
  local_358 = UE::Math::TQuat<double>::Identity.Z;
  dStack_350 = UE::Math::TQuat<double>::Identity.W;
  local_318 = local_4f8._s_0.Z;
  uStack_310 = 0;
  local_308 = local_510._s_0.Z;
  uStack_300 = 0;
  local_3c8 = ___xmm_00000000000000003ff0000000000000;
  dStack_3c0 = _UNK_150689518;
  local_2f8 = local_4f8._s_0.X;
  dStack_2f0 = local_4f8._s_0.Y;
  pTVar14 = FIKRetargetStrideWarpingOpSettings::GetAxisVector
                      (&local_158,&(this->Settings).ForwardDirection);
  auVar68._4_4_ = uVar72;
  auVar68._0_4_ = uVar71;
  auVar68._8_4_ = uVar84;
  auVar68._12_4_ = uVar85;
  dVar42 = auVar45._0_8_;
  local_2a8 = auVar45._8_8_;
  dVar70 = (double)CONCAT44(uVar85,uVar84);
  local_338 = blendpd(auVar68,auVar45,2);
  auVar68 = *(undefined1 (*) [16])&pTVar14->field0_0x0;
  auVar32._8_4_ = auVar45._0_4_;
  auVar32._0_8_ = dVar70;
  auVar32._12_4_ = auVar45._4_4_;
  dVar96 = auVar68._8_8_;
  dVar55 = (pTVar14->field0_0x0)._s_0.Z * dVar55;
  dVar64 = dVar64 * 0.0;
  local_348._8_4_ = auVar45._0_4_;
  local_348._0_8_ = dVar70;
  local_348._12_4_ = auVar45._4_4_;
  auVar4._8_4_ = SUB84(dVar64,0);
  auVar4._0_8_ = dVar55;
  auVar4._12_4_ = (int)((ulonglong)dVar64 >> 0x20);
  auVar45 = blendpd(auVar68,auVar4,2);
  auVar100._0_8_ = dVar96 * (double)CONCAT44(uVar72,uVar71) - dVar70 * auVar68._0_8_;
  auVar100._8_8_ = dVar55 * (double)CONCAT44(uVar85,uVar84) - auVar32._8_8_ * dVar96;
  auVar46._0_8_ = auVar45._0_8_ * dVar42 - local_338._0_8_ * dVar55;
  auVar46._8_8_ = auVar45._8_8_ * local_2a8 - local_338._8_8_ * dVar64;
  auVar45 = blendpd(auVar100,auVar46,2);
  dVar64 = auVar100._8_8_ + auVar100._8_8_;
  dVar99 = auVar46._0_8_ + auVar46._0_8_;
  uVar102 = SUB84(dVar99,0);
  uVar103 = (undefined4)((ulonglong)dVar99 >> 0x20);
  auVar101._0_8_ = auVar45._0_8_ + auVar45._0_8_;
  auVar101._8_8_ = auVar45._8_8_ + auVar45._8_8_;
  auVar58._8_4_ = uVar102;
  auVar58._0_8_ = dVar64;
  auVar58._12_4_ = uVar103;
  auVar33._8_4_ = uVar102;
  auVar33._0_8_ = dVar64;
  auVar33._12_4_ = uVar103;
  auVar47._8_4_ = uVar102;
  auVar47._0_8_ = dVar64;
  auVar47._12_4_ = uVar103;
  auVar45 = blendpd(auVar47,auVar101,2);
  auVar59._0_8_ = auVar58._8_8_ * (double)CONCAT44(uVar72,uVar71) - dVar64 * dVar70;
  auVar59._8_8_ = auVar101._0_8_ * (double)CONCAT44(uVar85,uVar84) - auVar33._8_8_ * dVar42;
  auVar34._8_4_ = SUB84(auVar101._8_8_,0);
  auVar34._0_8_ = auVar101._0_8_;
  auVar34._12_4_ = (int)((ulonglong)auVar101._8_8_ >> 0x20);
  auVar48._0_8_ = auVar45._0_8_ * dVar42 - auVar101._0_8_ * local_338._0_8_;
  auVar48._8_8_ = auVar45._8_8_ * local_2a8 - auVar34._8_8_ * local_338._8_8_;
  auVar35._8_4_ = SUB84(auVar59._8_8_,0);
  auVar35._0_8_ = auVar59._0_8_;
  auVar35._12_4_ = (int)((ulonglong)auVar59._8_8_ >> 0x20);
  dVar42 = dVar64 * local_2a8 + auVar68._0_8_ + auVar35._8_8_;
  dVar64 = dVar99 * local_2a8 + dVar96 + auVar48._0_8_;
  iVar104 = (int)((ulonglong)dVar64 >> 0x20);
  auVar45 = blendpd(auVar59,auVar48,2);
  local_3f8._8_4_ = SUB84(dVar64,0);
  local_3f8._0_8_ = dVar42;
  local_3f8._12_4_ = iVar104;
  dVar99 = auVar101._0_8_ * local_2a8 + dVar55 + auVar45._0_8_;
  local_548.ArrayNum = SUB84(dVar64,0);
  local_548.AllocatorInstance.Data = (FScriptContainerElement *)dVar64;
  local_548.ArrayMax = iVar104;
  local_438 = dVar64 * UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Z -
              dVar99 * UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Y;
  local_428 = dVar99 * UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.X -
              dVar42 * UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Z;
  local_430 = dVar42 * UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Y -
              dVar64 * UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.X;
  local_3e8 = dVar99;
  dStack_2a0 = local_2a8;
  pTVar14 = FIKRetargetStrideWarpingOpSettings::GetAxisVector
                      (local_140,&(this->Settings).ForwardDirection);
  pFVar20 = (this->GoalsToWarp).AllocatorInstance.Data;
  iVar104 = (this->GoalsToWarp).ArrayNum;
  dVar55 = (pTVar14->field0_0x0)._s_0.Z;
  dVar64 = (pTVar14->field0_0x0)._s_0.Y;
  dVar70 = (pTVar14->field0_0x0)._s_0.X;
  pFVar22 = pFVar20 + 0x30;
  pFVar24 = pFVar20 + (longlong)iVar104 * 0x70;
  local_4e0 = (FIKRetargetProcessor *)
              (dVar64 * UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Z -
              dVar55 * UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Y);
  local_448 = dVar55 * UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.X -
              dVar70 * UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Z;
  local_440 = dVar70 * UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Y -
              dVar64 * UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.X;
  do {
    while( true ) {
      if ((this->GoalsToWarp).ArrayNum != iVar104) {
        `TCheckedPointerIterator<FStrideWarpGoalData,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_538);
      }
      if (pFVar20 == pFVar24) {
        return;
      }
      pFVar16 = (param_1->GoalContainer).Goals.AllocatorInstance.Data;
      pFVar18 = pFVar16 + (longlong)(param_1->GoalContainer).Goals.ArrayNum * 0xb0;
      if (pFVar16 != pFVar18) break;
LAB_14dee3a88:
      pFVar20 = pFVar20 + 0x70;
      pFVar22 = pFVar22 + 0x70;
    }
    do {
      if (*(longlong *)pFVar16 == *(longlong *)pFVar20) {
        local_3d0 = *(double *)(pFVar22 + 0x10);
        local_3e0 = *(double *)pFVar22;
        dStack_3d8 = *(double *)(pFVar22 + 8);
        dVar55 = local_368 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
        dVar64 = dStack_360 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
        uVar71 = (undefined4)((ulonglong)dVar64 >> 0x20);
        dVar70 = local_358 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
        dVar96 = dStack_350 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
        uVar72 = (undefined4)((ulonglong)dVar96 >> 0x20);
        dVar41 = local_3d0 - (double)uVar73;
        auVar60._8_4_ = SUB84(dVar64,0);
        auVar60._0_8_ = dVar55;
        auVar60._12_4_ = uVar71;
        auVar98._8_8_ = 0;
        auVar98._0_8_ = dVar41;
        dVar63 = auVar60._8_8_;
        auVar67._8_4_ = SUB84(dVar64,0);
        auVar67._0_8_ = dVar55;
        auVar67._12_4_ = uVar71;
        auVar5._8_4_ = SUB84(dVar96,0);
        auVar5._0_8_ = dVar70;
        auVar5._12_4_ = uVar72;
        auVar68 = blendpd(auVar67,auVar5,2);
        auVar36._8_4_ = SUB84(dVar70,0);
        auVar36._0_8_ = dVar63;
        auVar36._12_4_ = (int)((ulonglong)dVar70 >> 0x20);
        auVar97._8_4_ = SUB84(dVar96,0);
        auVar97._0_8_ = dVar70;
        auVar97._12_4_ = uVar72;
        dVar95 = local_3e0 - (double)uVar86;
        dVar7 = dStack_3d8 - (double)uVar90;
        uVar71 = (undefined4)((ulonglong)dVar7 >> 0x20);
        auVar87._8_4_ = SUB84(dVar7,0);
        auVar87._0_8_ = dVar95;
        auVar87._12_4_ = uVar71;
        auVar49._8_4_ = SUB84(dVar7,0);
        auVar49._0_8_ = dVar95;
        auVar49._12_4_ = uVar71;
        auVar45 = blendpd(auVar49,auVar98,2);
        auVar88._0_8_ = auVar87._8_8_ * dVar55 - dVar63 * dVar95;
        auVar88._8_8_ = dVar41 * dVar64 - auVar36._8_8_ * dVar7;
        auVar50._0_8_ = auVar45._0_8_ * dVar70 - auVar68._0_8_ * dVar41;
        auVar50._8_8_ = auVar45._8_8_ * dVar96 - auVar68._8_8_ * 0.0;
        auVar45 = blendpd(auVar88,auVar50,2);
        dVar92 = auVar88._8_8_ + auVar88._8_8_;
        dVar91 = auVar50._0_8_ + auVar50._0_8_;
        uVar71 = SUB84(dVar91,0);
        uVar72 = (undefined4)((ulonglong)dVar91 >> 0x20);
        auVar89._0_8_ = auVar45._0_8_ + auVar45._0_8_;
        auVar89._8_8_ = auVar45._8_8_ + auVar45._8_8_;
        auVar81._8_4_ = uVar71;
        auVar81._0_8_ = dVar92;
        auVar81._12_4_ = uVar72;
        auVar37._8_4_ = uVar71;
        auVar37._0_8_ = dVar92;
        auVar37._12_4_ = uVar72;
        auVar76._8_4_ = uVar71;
        auVar76._0_8_ = dVar92;
        auVar76._12_4_ = uVar72;
        auVar82._0_8_ = auVar81._8_8_ * dVar55 - dVar92 * dVar63;
        auVar82._8_8_ = auVar89._0_8_ * dVar64 - auVar37._8_8_ * dVar70;
        auVar45 = blendpd(auVar76,auVar89,2);
        auVar38._8_4_ = SUB84(auVar89._8_8_,0);
        auVar38._0_8_ = auVar89._0_8_;
        auVar38._12_4_ = (int)((ulonglong)auVar89._8_8_ >> 0x20);
        auVar77._0_8_ = auVar45._0_8_ * dVar70 - auVar89._0_8_ * auVar68._0_8_;
        auVar77._8_8_ = auVar45._8_8_ * dVar96 - auVar38._8_8_ * auVar68._8_8_;
        lVar25 = -(ulonglong)
                  ((double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                                    (uint)((ulonglong)local_3c8 >> 0x20),
                                    (uint)__xmm_7fffffffffffffff7fffffffffffffff &
                                    SUB84(local_3c8,0)) <=
                  (double)GlobalVectorConstants::SmallNumber.m128_f32[2]);
        auVar93._0_8_ =
             (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                              __xmm_3ff00000000000003ff0000000000000._4_4_,
                              (uint)__xmm_7fffffffffffffff7fffffffffffffff &
                              (uint)__xmm_3ff00000000000003ff0000000000000);
        auVar93._8_4_ = _UNK_15061cc88 & __xmm_3ff00000000000003ff0000000000000._8_4_;
        auVar93._12_4_ = _UNK_15061cc8c & __xmm_3ff00000000000003ff0000000000000._12_4_;
        lVar26 = -(ulonglong)
                  (auVar93._0_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[0]);
        lVar27 = -(ulonglong)
                  (auVar93._8_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[1]);
        auVar45 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,
                        ___xmm_3ff00000000000003ff0000000000000);
        auVar39._8_4_ = SUB84(auVar82._8_8_,0);
        auVar39._0_8_ = auVar82._0_8_;
        auVar39._12_4_ = (int)((ulonglong)auVar82._8_8_ >> 0x20);
        auVar94._0_8_ =
             (double)CONCAT44(~(uint)((ulonglong)lVar26 >> 0x20) & auVar45._4_4_,
                              ~(uint)lVar26 & auVar45._0_4_);
        auVar94._8_4_ = ~(uint)lVar27 & auVar45._8_4_;
        auVar94._12_4_ = ~(uint)((ulonglong)lVar27 >> 0x20) & auVar45._12_4_;
        auVar6._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
        auVar6._0_8_ = local_3c8;
        auVar6._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
        auVar45 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar6);
        auVar68 = blendpd(auVar82,auVar77,2);
        dVar92 = auVar94._0_8_ * (dVar92 * auVar97._8_8_ + dVar95 + auVar39._8_8_) *
                 (double)__xmm_3ff00000000000003ff0000000000000;
        dVar96 = auVar94._8_8_ * (dVar91 * dVar96 + dVar7 + auVar77._0_8_) *
                 __xmm_3ff00000000000003ff0000000000000._8_8_;
        auVar78._8_4_ = SUB84(dVar96,0);
        auVar78._0_8_ = dVar92;
        uVar71 = (undefined4)((ulonglong)dVar96 >> 0x20);
        auVar78._12_4_ = uVar71;
        auVar51._8_4_ = SUB84(dVar96,0);
        auVar51._0_8_ = dVar92;
        auVar51._12_4_ = uVar71;
        auVar83._0_8_ =
             (double)CONCAT44(~(uint)((ulonglong)lVar25 >> 0x20) & auVar45._4_4_,
                              ~(uint)lVar25 & auVar45._0_4_) *
             (auVar89._0_8_ * auVar97._8_8_ + dVar41 + auVar68._0_8_) * local_3c8;
        auVar83._8_8_ = dStack_3c0 * 0.0;
        auVar45 = blendpd(auVar51,auVar83,2);
        auVar79._0_8_ = auVar78._8_8_ * local_4d8._s_0.X - (double)local_348._0_8_ * dVar92;
        auVar79._8_8_ = auVar83._0_8_ * local_4d8._s_0.Y - (double)local_348._8_8_ * dVar96;
        auVar69._8_4_ = SUB84(auVar79._8_8_,0);
        auVar69._0_8_ = auVar79._0_8_;
        auVar69._12_4_ = (int)((ulonglong)auVar79._8_8_ >> 0x20);
        auVar52._0_8_ =
             auVar45._0_8_ * (double)local_4b8._0_8_ - (double)local_338._0_8_ * auVar83._0_8_;
        auVar52._8_8_ =
             auVar45._8_8_ * (double)local_4b8._8_8_ - (double)local_338._8_8_ * auVar83._8_8_;
        dVar64 = auVar69._8_8_ + auVar69._8_8_;
        dVar70 = auVar52._0_8_ + auVar52._0_8_;
        auVar45 = blendpd(auVar79,auVar52,2);
        auVar61._8_4_ = SUB84(dVar70,0);
        auVar61._0_8_ = dVar64;
        uVar71 = (undefined4)((ulonglong)dVar70 >> 0x20);
        auVar61._12_4_ = uVar71;
        auVar53._8_4_ = SUB84(dVar70,0);
        auVar53._0_8_ = dVar64;
        auVar53._12_4_ = uVar71;
        auVar80._0_8_ = auVar45._0_8_ + auVar45._0_8_;
        auVar80._8_8_ = auVar45._8_8_ + auVar45._8_8_;
        auVar45 = blendpd(auVar53,auVar80,2);
        auVar62._0_8_ = auVar61._8_8_ * local_4d8._s_0.X - (double)local_348._0_8_ * dVar64;
        auVar62._8_8_ = auVar80._0_8_ * local_4d8._s_0.Y - (double)local_348._8_8_ * dVar70;
        auVar54._0_8_ =
             auVar45._0_8_ * (double)local_4b8._0_8_ - (double)local_338._0_8_ * auVar80._0_8_;
        auVar54._8_8_ =
             auVar45._8_8_ * (double)local_4b8._8_8_ - (double)local_338._8_8_ * auVar80._8_8_;
        auVar40._8_4_ = SUB84(auVar62._8_8_,0);
        auVar40._0_8_ = auVar62._0_8_;
        auVar40._12_4_ = (int)((ulonglong)auVar62._8_8_ >> 0x20);
        auVar45 = blendpd(auVar62,auVar54,2);
        dVar55 = (this->Settings).WarpForwards;
        dVar64 = (dVar42 * *(double *)(pFVar16 + 0x28) +
                  (double)local_548.AllocatorInstance.Data * *(double *)(pFVar16 + 0x30) +
                 dVar99 * *(double *)(pFVar16 + 0x38)) -
                 (dVar42 * (local_2a8 * dVar64 + dVar92 + auVar40._8_8_ + local_328) +
                  (double)local_548.AllocatorInstance.Data *
                  (dStack_2a0 * dVar70 + dVar96 + auVar54._0_8_ + dStack_320) +
                 dVar99 * (local_2a8 * auVar80._0_8_ + auVar83._0_8_ + auVar45._0_8_ + local_308));
        dVar70 = (*(double *)(pFVar16 + 0x28) - dVar42 * dVar64) + dVar55 * dVar42 * dVar64;
        *(double *)(pFVar16 + 0x28) = dVar70;
        *(double *)(pFVar16 + 0x30) =
             (*(double *)(pFVar16 + 0x30) - (double)local_548.AllocatorInstance.Data * dVar64) +
             dVar55 * (double)local_548.AllocatorInstance.Data * dVar64;
        *(double *)(pFVar16 + 0x38) =
             (*(double *)(pFVar16 + 0x38) - dVar99 * dVar64) + dVar55 * dVar99 * dVar64;
        dVar55 = dStack_3d8 * dStack_3d8 + local_3e0 * local_3e0 + local_3d0 * local_3d0;
        uVar86 = dStack_3d8;
        uVar90 = local_3e0;
        uVar73 = local_3d0;
        if ((dVar55 != __real_3ff0000000000000) &&
           (uVar86 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,
           uVar90 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,
           uVar73 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,
           __real_3e45798ee0000000 <= dVar55)) {
          dVar55 = __real_3ff0000000000000 / SQRT(dVar55);
          uVar86 = dStack_3d8 * dVar55;
          uVar90 = local_3e0 * dVar55;
          uVar73 = local_3d0 * dVar55;
        }
        dVar55 = (this->Settings).SidewaysOffset;
        dVar42 = (double)(float)((double)local_4e0 * (double)uVar90 + (double)uVar86 * local_448 +
                                (double)uVar73 * local_440);
        dVar64 = local_428 * dVar55 * dVar42 + *(double *)(pFVar16 + 0x30);
        dVar70 = local_438 * dVar55 * dVar42 + dVar70;
        *(double *)(pFVar16 + 0x30) = dVar64;
        *(double *)(pFVar16 + 0x28) = dVar70;
        *(double *)(pFVar16 + 0x38) = local_430 * dVar55 * dVar42 + *(double *)(pFVar16 + 0x38);
        dVar55 = (this->Settings).WarpSplay;
        local_4b8 = local_408;
        local_4d8._s_0.X = (double)CONCAT44(uStack_414,local_418);
        local_4d8._s_0.Y = (double)CONCAT44(uStack_40c,uStack_410);
        *(double *)(pFVar16 + 0x30) = (dVar64 - local_510._s_0.Y) * dVar55 + local_510._s_0.Y;
        *(double *)(pFVar16 + 0x28) = (dVar70 - local_510._s_0.X) * dVar55 + local_510._s_0.X;
        local_548.ArrayNum = 0;
        local_548.ArrayMax = 0;
        local_548.AllocatorInstance.Data = (FScriptContainerElement *)local_3f8._8_8_;
        pFVar16[0x60] = (FScriptContainerElement)0x0;
        dVar42 = (double)local_3f8._0_8_;
        dVar99 = local_3e8;
        uVar86 = local_2f8;
        uVar90 = dStack_2f0;
        uVar73 = local_318;
        goto LAB_14dee3a88;
      }
      pFVar16 = pFVar16 + 0xb0;
    } while (pFVar16 != pFVar18);
    pFVar20 = pFVar20 + 0x70;
    pFVar22 = pFVar22 + 0x70;
  } while( true );
}

// OnAddedToStack @ 14dee3b20

void __thiscall
FIKRetargetStrideWarpingOp::OnAddedToStack
          (FIKRetargetStrideWarpingOp *this,UIKRetargeter *param_1,FIKRetargetOpBase *param_2)

{
  RegenerateChainSettings(this,param_2);
  return;
}

// OnAssignIKRig @ 14dee3b30

void __thiscall
FIKRetargetStrideWarpingOp::OnAssignIKRig
          (FIKRetargetStrideWarpingOp *this,ERetargetSourceOrTarget param_1,
          UIKRigDefinition *param_2,FIKRetargetOpBase *param_3)

{
  RegenerateChainSettings(this,param_3);
  return;
}

// GetSettings @ 14dee3b40

FIKRetargetOpSettingsBase * __thiscall
FIKRetargetStrideWarpingOp::GetSettings(FIKRetargetStrideWarpingOp *this)

{
  return (FIKRetargetOpSettingsBase *)&this->Settings;
}

// GetSettingsType @ 14dee3b50

UScriptStruct * __thiscall
FIKRetargetStrideWarpingOp::GetSettingsType(FIKRetargetStrideWarpingOp *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FIKRetargetStrideWarpingOpSettings.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UScriptStruct_FIKRetargetStrideWarpingOpSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FIKRetargetStrideWarpingOpSettings,
                         (UObject *)pUVar1,L"IKRetargetStrideWarpingOpSettings");
  }
  return Z_Registration_Info_UScriptStruct_FIKRetargetStrideWarpingOpSettings.OuterSingleton;
}

// GetType @ 14dee3b90

UScriptStruct * __thiscall FIKRetargetStrideWarpingOp::GetType(FIKRetargetStrideWarpingOp *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FIKRetargetStrideWarpingOp.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UScriptStruct_FIKRetargetStrideWarpingOp.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FIKRetargetStrideWarpingOp,(UObject *)pUVar1,
                         L"IKRetargetStrideWarpingOp");
  }
  return Z_Registration_Info_UScriptStruct_FIKRetargetStrideWarpingOp.OuterSingleton;
}

// GetParentOpType @ 14dee3bd0

UScriptStruct * __thiscall
FIKRetargetStrideWarpingOp::GetParentOpType(FIKRetargetStrideWarpingOp *this)

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

// OnTargetChainRenamed @ 14dee3c10

void __thiscall
FIKRetargetStrideWarpingOp::OnTargetChainRenamed
          (FIKRetargetStrideWarpingOp *this,FName param_1,FName param_2)

{
  FName *pFVar1;
  int iVar2;
  FName *pFVar3;
  undefined1 local_res8 [8];
  
  iVar2 = (this->Settings).ChainSettings.ArrayNum;
  pFVar3 = (FName *)(this->Settings).ChainSettings.AllocatorInstance.Data;
  pFVar1 = (FName *)((longlong)pFVar3 + (longlong)iVar2 * 0xc);
  while( true ) {
    if ((this->Settings).ChainSettings.ArrayNum != iVar2) {
      `TCheckedPointerIterator<FRetargetStrideWarpChainSettings,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    if (*pFVar3 == param_1) {
      *pFVar3 = param_2;
    }
    pFVar3 = (FName *)&pFVar3[1].Number;
  }
  return;
}

