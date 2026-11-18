// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IKRig
// Functions: 11

// StaticStruct @ 14deebf90

UScriptStruct * __cdecl FIKRetargetIKChainsOp::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FIKRetargetIKChainsOp.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar1 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UScriptStruct_FIKRetargetIKChainsOp.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FIKRetargetIKChainsOp,(UObject *)pUVar1,
                         L"IKRetargetIKChainsOp");
  }
  return Z_Registration_Info_UScriptStruct_FIKRetargetIKChainsOp.OuterSingleton;
}

// Initialize @ 14deec040

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __thiscall
FIKRetargetIKChainsOp::Initialize
          (FIKRetargetIKChainsOp *this,FIKRetargetProcessor *param_1,FRetargetSkeleton *param_2,
          FTargetSkeleton *param_3,FIKRetargetOpBase *param_4,FIKRigLogger *param_5)

{
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  FName FVar4;
  longlong lVar5;
  FIKChainRetargeter *pFVar6;
  code *pcVar7;
  double dVar8;
  double dVar9;
  FIKRetargetIKChainsOp *pFVar10;
  FRetargetIKChainSettings *pFVar11;
  bool bVar12;
  undefined1 uVar13;
  int iVar14;
  FText *pFVar15;
  FText *pFVar16;
  FTextFormat *pFVar17;
  TArray<FResolvedBoneChain,TSizedDefaultAllocator<32>_> *pTVar18;
  FString *pFVar19;
  TRefCountPtr<ITextData> TVar20;
  ulonglong uVar21;
  UIKRigDefinition *pUVar22;
  FResolvedBoneChain *pFVar23;
  FScriptContainerElement *pFVar24;
  FRetargetIKChainSettings *pFVar25;
  longlong *plVar26;
  FName *pFVar27;
  FRetargeterBoneChains *pFVar28;
  FResolvedBoneChain *this_00;
  FResolvedBoneChain *pFVar29;
  FName *pFVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined1 auStackY_388 [32];
  undefined1 local_338;
  undefined1 local_337;
  undefined1 local_336 [6];
  FIKRigLogger *local_330;
  FName local_328;
  FIKRetargetIKChainsOp *local_320;
  uint local_318;
  FName local_310;
  FRetargetIKChainSettings *local_308;
  FRetargeterBoneChains *local_300;
  FName local_2f8;
  FRetargetIKChainSettings *local_2f0;
  FText local_2e8;
  FText local_2d8;
  FText local_2c8;
  FText local_2b8;
  FText local_2a8;
  FText local_298;
  FText local_288;
  FText local_278;
  FString local_268;
  FText local_258;
  FText local_248;
  FText local_238;
  FText local_228;
  FText local_218;
  FTextFormat local_208;
  FText local_1f8;
  FTextFormat local_1e8;
  FText local_1d8;
  FTextFormat local_1c8;
  FText local_1b8;
  FTextFormat local_1a8;
  FText local_198;
  FTextFormat local_188;
  FText local_178;
  FTextFormat local_168;
  FIKChainRetargeter local_158;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_388;
  piVar1 = &(this->IKChainRetargeters).ArrayMax;
  *(undefined1 *)((longlong)&this->_padding_ + 5) = 0;
  local_330 = param_5;
  (this->IKChainRetargeters).ArrayNum = 0;
  local_320 = this;
  if (*piVar1 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xf0,0x10,0,&(this->IKChainRetargeters).AllocatorInstance,0,piVar1);
  }
  dVar9 = _UNK_150689688;
  dVar8 = ___xmm_3ff00000000000003ff0000000000000;
  if (param_4 == (FIKRetargetOpBase *)0x0) {
    bVar12 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<5561704252834840832>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\IKRig\\Source\\IKRig\\Private\\Retargeter\\RetargetOps\\IKChainsOp.cpp"
                        ,0x100,"InParentOp");
    if (bVar12) {
      pcVar7 = (code *)swi(3);
      uVar13 = (*pcVar7)();
      return (bool)uVar13;
    }
  }
  else {
    if (*(longlong *)&param_4[1].ParentOpName.Number != 0) {
      local_318 = (local_320->Settings).ChainsToRetarget.ArrayNum;
      uVar21 = (ulonglong)(int)local_318;
      pFVar28 = &param_1->AllBoneChains;
      pFVar25 = (FRetargetIKChainSettings *)
                (local_320->Settings).ChainsToRetarget.AllocatorInstance.Data;
      local_2f0 = pFVar25 + uVar21;
      local_300 = pFVar28;
LAB_14deec1df:
      pFVar11 = local_2f0;
      local_308 = pFVar25;
      if ((local_320->Settings).ChainsToRetarget.ArrayNum != (int)uVar21) {
        local_338 = 0;
        `TCheckedPointerIterator<FRetargetIKChainSettings,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_338);
      }
      if (pFVar25 == pFVar11) {
        bVar12 = (local_320->IKChainRetargeters).ArrayNum != 0;
        *(bool *)((longlong)&local_320->_padding_ + 5) = bVar12;
        return bVar12;
      }
      pUVar22 = *(UIKRigDefinition **)&param_4[1].ParentOpName.Number;
      FVar4 = pFVar25->TargetChainName;
      if (pUVar22 == (UIKRigDefinition *)0x0) {
        pUVar22 = pFVar28->DefaultTargetIKRig;
      }
      local_328 = FVar4;
      pTVar18 = TMapBase<UIKRigDefinition_const_*,TArray<FResolvedBoneChain,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UIKRigDefinition_const_*,TArray<FResolvedBoneChain,TSizedDefaultAllocator<32>_>,0>_>
                ::Find((TMapBase<UIKRigDefinition_const_*,TArray<FResolvedBoneChain,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UIKRigDefinition_const_*,TArray<FResolvedBoneChain,TSizedDefaultAllocator<32>_>,0>_>
                        *)&pFVar28->TargetBoneChains,pUVar22);
      if (pTVar18 == (TArray<FResolvedBoneChain,TSizedDefaultAllocator<32>_> *)0x0) {
LAB_14deec730:
        pFVar15 = FText::FromName(&local_178,&local_328);
        pFVar16 = FText::AsLocalizable_Advanced_LocText
                            (&local_228,L"IKChainsOp",L"IKChainOpMissingChain",
                             L"IK Chain Op: chain data is out of sync with IK Rig. Missing target chain, \'{0}."
                            );
        pFVar17 = FTextFormat::FTextFormat(&local_168,pFVar16,Default);
        pFVar15 = FText::Format<FText>(&local_238,pFVar17,pFVar15);
        FIKRigLogger::LogWarning(param_5,pFVar15);
        TVar20.Reference = local_228.TextData.Reference;
        if (local_238.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_238.TextData.Reference + 0x10))();
          TVar20.Reference = local_228.TextData.Reference;
        }
      }
      else {
        this_00 = (FResolvedBoneChain *)(pTVar18->AllocatorInstance).Data;
        pFVar23 = this_00 + pTVar18->ArrayNum;
        for (; this_00 != pFVar23; this_00 = this_00 + 1) {
          if (this_00->ChainName == FVar4) goto LAB_14deec255;
        }
        this_00 = (FResolvedBoneChain *)0x0;
LAB_14deec255:
        if (this_00 == (FResolvedBoneChain *)0x0) goto LAB_14deec730;
        if (this_00->IKGoalName == (FName)0x0) {
          pFVar15 = FText::FromName(&local_1f8,&local_328);
          pFVar16 = FText::AsLocalizable_Advanced_LocText
                              (&local_2b8,L"IKChainsOp",L"IKChainOpChainHasNoIK",
                               L"IK Chain Op: an IK chain was found with no IK goal assigned to it, \'{0}."
                              );
          pFVar17 = FTextFormat::FTextFormat(&local_1e8,pFVar16,Default);
          pFVar15 = FText::Format<FText>(&local_2c8,pFVar17,pFVar15);
          FIKRigLogger::LogWarning(param_5,pFVar15);
          TVar20.Reference = local_2b8.TextData.Reference;
          if (local_2c8.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_2c8.TextData.Reference + 0x10))();
            TVar20.Reference = local_2b8.TextData.Reference;
          }
        }
        else {
          uVar3 = param_4[3].Name.Number;
          pFVar27 = *(FName **)&param_4[3].bIsEnabled;
          pFVar30 = pFVar27 + (longlong)(int)uVar3 * 2;
          while( true ) {
            if (param_4[3].Name.Number != uVar3) {
              local_337 = 0;
              `TCheckedPointerIterator<FRetargetChainPair_const_,int,0>::operator!='::__l2::
              <lambda_1>::operator()(&local_337);
            }
            pFVar28 = local_300;
            param_5 = local_330;
            if (pFVar27 == pFVar30) {
              local_310.ComparisonIndex.Value = 0;
              local_310.Number = 0;
              goto LAB_14deec327;
            }
            if (*pFVar27 == FVar4) break;
            pFVar27 = pFVar27 + 2;
          }
          local_310 = pFVar27[1];
LAB_14deec327:
          if (local_300 != (FRetargeterBoneChains *)0x0) {
            pFVar23 = (FResolvedBoneChain *)(local_300->SourceBoneChains).AllocatorInstance.Data;
            pFVar29 = pFVar23 + (local_300->SourceBoneChains).ArrayNum;
            for (; pFVar23 != pFVar29; pFVar23 = pFVar23 + 1) {
              if (pFVar23->ChainName == local_310) {
                if (pFVar23 != (FResolvedBoneChain *)0x0) {
                  uVar33 = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
                  uVar34 = (undefined4)
                           ((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20)
                  ;
                  local_158.GoalOutput.Rotation.ZW.m128d_f64[0] =
                       (double)GlobalVectorConstants::Float0001.m128_f32[2];
                  local_158.GoalOutput.Rotation.ZW.m128d_f64[1] =
                       (double)GlobalVectorConstants::Float0001.m128_f32[3];
                  local_158.GoalOutput.Translation.XY.m128d_f64[0] =
                       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
                  local_158.GoalOutput.Translation.XY.m128d_f64[1] =
                       (double)GlobalVectorConstants::FloatZero.m128_f32[1];
                  local_158.GoalOutput.Translation.ZW.m128d_f64[0] =
                       (double)GlobalVectorConstants::FloatZero.m128_f32[2];
                  local_158.GoalOutput.Translation.ZW.m128d_f64[1] =
                       (double)GlobalVectorConstants::FloatZero.m128_f32[3];
                  local_158.GoalOutput.Scale3D.XY.m128d_f64[0] =
                       (double)GlobalVectorConstants::Float1110.m128_f32[0];
                  local_158.GoalOutput.Scale3D.XY.m128d_f64[1] =
                       (double)GlobalVectorConstants::Float1110.m128_f32[1];
                  uVar31 = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
                  uVar32 = (undefined4)
                           ((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20)
                  ;
                  local_158.GoalOutput.Rotation.XY.m128d_f64[1]._0_4_ = uVar33;
                  local_158.GoalOutput.Rotation.XY.m128d_f64[0] =
                       (double)GlobalVectorConstants::Float0001.m128_f32[0];
                  local_158.GoalOutput.Rotation.XY.m128d_f64[1]._4_4_ = uVar34;
                  local_158.GoalOutput.Scale3D.ZW.m128d_f64[1]._0_4_ = uVar31;
                  local_158.GoalOutput.Scale3D.ZW.m128d_f64[0] =
                       (double)GlobalVectorConstants::Float1110.m128_f32[2];
                  local_158.GoalOutput.Scale3D.ZW.m128d_f64[1]._4_4_ = uVar32;
                  local_158.InitialTargetEndRelativeToSourceEnd.Scale3D.ZW.m128d_f64[1]._0_4_ =
                       uVar31;
                  local_158.InitialTargetEndRelativeToSourceEnd.Scale3D.ZW.m128d_f64[0] =
                       (double)GlobalVectorConstants::Float1110.m128_f32[2];
                  local_158.InitialTargetEndRelativeToSourceEnd.Scale3D.ZW.m128d_f64[1]._4_4_ =
                       uVar32;
                  local_158.InvInitialLengthSource = dVar8;
                  local_158.InitialTargetChainLength = dVar9;
                  local_158.InitialTargetEndRelativeToSourceEnd.Rotation.XY.m128d_f64[1]._0_4_ =
                       uVar33;
                  local_158.InitialTargetEndRelativeToSourceEnd.Rotation.XY.m128d_f64[0] =
                       (double)GlobalVectorConstants::Float0001.m128_f32[0];
                  local_158.InitialTargetEndRelativeToSourceEnd.Rotation.XY.m128d_f64[1]._4_4_ =
                       uVar34;
                  local_158.InitialTargetEndRelativeToSourceEnd.Rotation.ZW.m128d_f64[0] =
                       local_158.GoalOutput.Rotation.ZW.m128d_f64[0];
                  local_158.InitialTargetEndRelativeToSourceEnd.Rotation.ZW.m128d_f64[1] =
                       local_158.GoalOutput.Rotation.ZW.m128d_f64[1];
                  local_158.InitialTargetEndRelativeToSourceEnd.Translation.XY.m128d_f64[0] =
                       local_158.GoalOutput.Translation.XY.m128d_f64[0];
                  local_158.InitialTargetEndRelativeToSourceEnd.Translation.XY.m128d_f64[1] =
                       local_158.GoalOutput.Translation.XY.m128d_f64[1];
                  local_158.InitialTargetEndRelativeToSourceEnd.Translation.ZW.m128d_f64[0] =
                       local_158.GoalOutput.Translation.ZW.m128d_f64[0];
                  local_158.InitialTargetEndRelativeToSourceEnd.Translation.ZW.m128d_f64[1] =
                       local_158.GoalOutput.Translation.ZW.m128d_f64[1];
                  local_158.InitialTargetEndRelativeToSourceEnd.Scale3D.XY.m128d_f64[0] =
                       local_158.GoalOutput.Scale3D.XY.m128d_f64[0];
                  local_158.InitialTargetEndRelativeToSourceEnd.Scale3D.XY.m128d_f64[1] =
                       local_158.GoalOutput.Scale3D.XY.m128d_f64[1];
                  bVar12 = FIKChainRetargeter::Initialize
                                     (&local_158,pFVar23,this_00,local_308,local_330);
                  if (bVar12) {
                    lVar5 = *(longlong *)&param_4[1].ParentOpName.Number;
                    plVar26 = *(longlong **)(lVar5 + 200);
                    iVar14 = *(int *)(lVar5 + 0xd0);
                    plVar2 = plVar26 + iVar14;
                    goto LAB_14deec513;
                  }
                  pFVar15 = FText::FromName(&local_1d8,&local_328);
                  pFVar16 = FText::AsLocalizable_Advanced_LocText
                                      (&local_298,L"IKChainsOp",L"IKChainOpBadChain",
                                       L"IK Chain Op: could not initialize a mapped retarget chain for IK, \'{0}."
                                      );
                  pFVar17 = FTextFormat::FTextFormat(&local_1c8,pFVar16,Default);
                  pFVar15 = FText::Format<FText>(&local_2a8,pFVar17,pFVar15);
                  FIKRigLogger::LogWarning(param_5,pFVar15);
                  TVar20.Reference = local_298.TextData.Reference;
                  if (local_2a8.TextData.Reference != (ITextData *)0x0) {
                    (**(code **)((longlong)*local_2a8.TextData.Reference + 0x10))();
                    TVar20.Reference = local_298.TextData.Reference;
                  }
                  goto LAB_14deec7a1;
                }
                break;
              }
            }
          }
          pFVar15 = FText::FromName(&local_198,&local_328);
          pFVar16 = FText::AsLocalizable_Advanced_LocText
                              (&local_248,L"IKChainsOp",L"IKChainOpChainNotMapped",
                               L"IK Chain Op: found IK chain that was not mapped to a source chain, \'{0}."
                              );
          pFVar17 = FTextFormat::FTextFormat(&local_188,pFVar16,Default);
          pFVar15 = FText::Format<FText>(&local_258,pFVar17,pFVar15);
          param_5 = local_330;
          FIKRigLogger::LogWarning(local_330,pFVar15);
          TVar20.Reference = local_248.TextData.Reference;
          if (local_258.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_258.TextData.Reference + 0x10))();
            TVar20.Reference = local_248.TextData.Reference;
          }
        }
      }
LAB_14deec7a1:
      if (TVar20.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*TVar20.Reference + 0x10))();
      }
      goto LAB_14deec7ac;
    }
    local_2f8 = *(FName *)((longlong)&local_320->_padding_ + 4);
    pFVar15 = FText::FromName(&local_218,&local_2f8);
    pFVar16 = FText::AsLocalizable_Advanced_LocText
                        (&local_2d8,L"IKChainsOp",L"MissingIKRig",
                         L"{0}, is missing an IK rig. No chains can be retargeted.");
    pFVar17 = FTextFormat::FTextFormat(&local_208,pFVar16,Default);
    pFVar15 = FText::Format<FText>(&local_2e8,pFVar17,pFVar15);
    FIKRigLogger::LogWarning(param_5,pFVar15);
    if (local_2e8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_2e8.TextData.Reference + 0x10))();
    }
    if (local_2d8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_2d8.TextData.Reference + 0x10))();
    }
  }
  return false;
LAB_14deec513:
  if (*(int *)(lVar5 + 0xd0) != iVar14) {
    local_336[0] = 0;
    `TCheckedPointerIterator<UIKRigEffectorGoal_*_const,int,0>::operator!='::__l2::<lambda_1>::
    operator()(local_336);
  }
  param_5 = local_330;
  if (plVar26 == plVar2) goto LAB_14deec5f5;
  if (*(FName *)(*plVar26 + 0x28) == this_00->IKGoalName) goto LAB_14deec547;
  plVar26 = plVar26 + 1;
  goto LAB_14deec513;
LAB_14deec547:
  if (*(FName *)(*plVar26 + 0x30) != this_00->EndBone) {
    pFVar19 = ::FName::ToString(&this_00->ChainName,&local_268);
    pFVar15 = FText::FromString(&local_1b8,pFVar19);
    pFVar16 = FText::AsLocalizable_Advanced_LocText
                        (&local_278,L"IKChainsOp",L"TargetIKNotOnEndBone",
                         L"IK Chain Op: Retarget chain, \'{0}\' has an IK goal that is not on the End Bone of the chain."
                        );
    pFVar17 = FTextFormat::FTextFormat(&local_1a8,pFVar16,Default);
    pFVar15 = FText::Format<FText>(&local_288,pFVar17,pFVar15);
    param_5 = local_330;
    FIKRigLogger::LogWarning(local_330,pFVar15);
    if (local_288.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_288.TextData.Reference + 0x10))();
    }
    if (local_278.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_278.TextData.Reference + 0x10))();
    }
    if (local_268.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_268.Data.AllocatorInstance.Data);
    }
  }
LAB_14deec5f5:
  pFVar10 = local_320;
  pFVar6 = (FIKChainRetargeter *)(local_320->IKChainRetargeters).AllocatorInstance.Data;
  piVar1 = &(local_320->IKChainRetargeters).ArrayMax;
  if (((pFVar6 <= &local_158) && (&local_158 < pFVar6 + *piVar1)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar12)) {
    pcVar7 = (code *)swi(3);
    uVar13 = (*pcVar7)();
    return (bool)uVar13;
  }
  iVar14 = (pFVar10->IKChainRetargeters).ArrayNum;
  if (iVar14 == *piVar1) {
    iVar14 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x10f0,&(pFVar10->IKChainRetargeters).AllocatorInstance,piVar1);
  }
  (pFVar10->IKChainRetargeters).ArrayNum = iVar14 + 1;
  pFVar24 = (pFVar10->IKChainRetargeters).AllocatorInstance.Data + (longlong)iVar14 * 0xf0;
  *(double *)pFVar24 = local_158.GoalOutput.Rotation.XY.m128d_f64[0];
  *(double *)(pFVar24 + 8) = local_158.GoalOutput.Rotation.XY.m128d_f64[1];
  *(double *)(pFVar24 + 0x10) = local_158.GoalOutput.Rotation.ZW.m128d_f64[0];
  *(double *)(pFVar24 + 0x18) = local_158.GoalOutput.Rotation.ZW.m128d_f64[1];
  *(double *)(pFVar24 + 0x20) = local_158.GoalOutput.Translation.XY.m128d_f64[0];
  *(double *)(pFVar24 + 0x28) = local_158.GoalOutput.Translation.XY.m128d_f64[1];
  *(double *)(pFVar24 + 0x30) = local_158.GoalOutput.Translation.ZW.m128d_f64[0];
  *(double *)(pFVar24 + 0x38) = local_158.GoalOutput.Translation.ZW.m128d_f64[1];
  *(double *)(pFVar24 + 0x40) = local_158.GoalOutput.Scale3D.XY.m128d_f64[0];
  *(double *)(pFVar24 + 0x48) = local_158.GoalOutput.Scale3D.XY.m128d_f64[1];
  *(double *)(pFVar24 + 0x50) = local_158.GoalOutput.Scale3D.ZW.m128d_f64[0];
  *(double *)(pFVar24 + 0x58) = local_158.GoalOutput.Scale3D.ZW.m128d_f64[1];
  *(FResolvedBoneChain **)(pFVar24 + 0x60) = local_158.SourceBoneChain;
  *(FResolvedBoneChain **)(pFVar24 + 0x68) = local_158.TargetBoneChain;
  *(FRetargetIKChainSettings **)(pFVar24 + 0x70) = local_158.Settings;
  *(double *)(pFVar24 + 0x78) = local_158.InvInitialLengthSource;
  *(double *)(pFVar24 + 0x80) = local_158.InitialTargetChainLength;
  *(longlong *)(pFVar24 + 0x88) = local_158._padding_;
  *(double *)(pFVar24 + 0x90) =
       local_158.InitialTargetEndRelativeToSourceEnd.Rotation.XY.m128d_f64[0];
  *(double *)(pFVar24 + 0x98) =
       local_158.InitialTargetEndRelativeToSourceEnd.Rotation.XY.m128d_f64[1];
  *(double *)(pFVar24 + 0xa0) =
       local_158.InitialTargetEndRelativeToSourceEnd.Rotation.ZW.m128d_f64[0];
  *(double *)(pFVar24 + 0xa8) =
       local_158.InitialTargetEndRelativeToSourceEnd.Rotation.ZW.m128d_f64[1];
  *(double *)(pFVar24 + 0xb0) =
       local_158.InitialTargetEndRelativeToSourceEnd.Translation.XY.m128d_f64[0];
  *(double *)(pFVar24 + 0xb8) =
       local_158.InitialTargetEndRelativeToSourceEnd.Translation.XY.m128d_f64[1];
  *(double *)(pFVar24 + 0xc0) =
       local_158.InitialTargetEndRelativeToSourceEnd.Translation.ZW.m128d_f64[0];
  *(double *)(pFVar24 + 200) =
       local_158.InitialTargetEndRelativeToSourceEnd.Translation.ZW.m128d_f64[1];
  *(double *)(pFVar24 + 0xd0) =
       local_158.InitialTargetEndRelativeToSourceEnd.Scale3D.XY.m128d_f64[0];
  *(double *)(pFVar24 + 0xd8) =
       local_158.InitialTargetEndRelativeToSourceEnd.Scale3D.XY.m128d_f64[1];
  *(double *)(pFVar24 + 0xe0) =
       local_158.InitialTargetEndRelativeToSourceEnd.Scale3D.ZW.m128d_f64[0];
  *(double *)(pFVar24 + 0xe8) =
       local_158.InitialTargetEndRelativeToSourceEnd.Scale3D.ZW.m128d_f64[1];
  pFVar28 = local_300;
LAB_14deec7ac:
  pFVar25 = local_308 + 1;
  uVar21 = (ulonglong)local_318;
  goto LAB_14deec1df;
}

// Run @ 14deec890

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FIKRetargetIKChainsOp::Run
          (FIKRetargetIKChainsOp *this,FIKRetargetProcessor *param_1,double param_2,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_3,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_4)

{
  double dVar1;
  bool bVar2;
  int iVar3;
  double dVar4;
  double dVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  FIKRetargetProcessor *pFVar10;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTVar11;
  FName FVar12;
  bool bVar13;
  FName *pFVar14;
  FThreadSafeStaticStat<FStat_STAT_IKRetargetGoals> FVar15;
  TQuat<double> *pTVar16;
  TVector<double> *pTVar17;
  FName FVar18;
  FIKChainRetargeter *pFVar19;
  FIKChainRetargeter *this_00;
  FIKRetargetProcessor *local_res10 [2];
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *local_res20;
  FName local_160;
  FName local_158;
  FName local_150;
  TQuat<double> local_138;
  TVector<double> local_118;
  FIKRigGoal local_f8;
  
  FVar15 = StatPtr_STAT_IKRetargetGoals;
  local_res10[0] = param_1;
  local_res20 = param_3;
  if (StatPtr_STAT_IKRetargetGoals == (FThreadSafeStaticStat<FStat_STAT_IKRetargetGoals>)0x0) {
    pFVar14 = ::FName::FName(&local_158,"STAT_IKRetargetGoals");
    FVar15 = (FThreadSafeStaticStat<FStat_STAT_IKRetargetGoals>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_IKRetargetGoals,*pFVar14,
                        L"IK Retarget Goals","STATGROUP_Anim","STATCAT_Advanced",L"Anim",true,true,
                        ST_int64,true,false,MCR_Invalid);
  }
  FVar18 = *(FName *)FVar15;
  bVar7 = false;
  bVar9 = false;
  local_150.ComparisonIndex.Value = 0;
  local_150.Number = 0;
  bVar13 = false;
  bVar2 = false;
  if ((FVar18.ComparisonIndex.Value.Value != 0) ||
     (bVar6 = bVar7, bVar8 = bVar9, FVar18.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_160 = (FName)((ulonglong)local_160.Number << 0x20);
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_160,(char *)*(FName *)((longlong)FVar15 + 0x10));
      bVar7 = false;
      bVar9 = true;
      bVar13 = false;
      bVar2 = true;
      if (-1 < CpuChannel->Enabled) {
        local_160 = FVar18;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_160,(wchar_t *)*(FName *)((longlong)FVar15 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\IKRig\\Source\\IKRig\\Private\\Retargeter\\RetargetOps\\IKChainsOp.cpp"
                   ,0x160);
        bVar7 = true;
        bVar9 = true;
        bVar13 = true;
        bVar2 = true;
      }
    }
    bVar6 = bVar7;
    bVar8 = bVar9;
    if (FThreadStats::bPrimaryEnable != false) {
      local_160 = FVar18;
      FThreadStats::AddMessage(FVar18,CycleScopeStart);
      bVar13 = true;
      goto LAB_14deeca09;
    }
  }
  bVar9 = bVar2;
  bVar7 = bVar13;
  bVar13 = false;
  local_160 = local_150;
  FVar18 = local_150;
LAB_14deeca09:
  pFVar10 = local_res10[0];
  if (param_1->bIKForcedOff == false) {
    local_158 = (FName)FIKRetargetProcessor::GetFirstRetargetOpOfType<FIKRetargetPelvisMotionOp>
                                 (local_res10[0],ProcessorOps);
    iVar3 = (this->IKChainRetargeters).ArrayNum;
    this_00 = (FIKChainRetargeter *)(this->IKChainRetargeters).AllocatorInstance.Data;
    pFVar19 = this_00 + iVar3;
    while( true ) {
      FVar12 = local_158;
      if ((this->IKChainRetargeters).ArrayNum != iVar3) {
        `TCheckedPointerIterator<FIKChainRetargeter,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res10);
      }
      pTVar11 = local_res20;
      FVar18 = local_160;
      bVar6 = bVar7;
      bVar8 = bVar9;
      if (this_00 == pFVar19) break;
      pTVar16 = FIKChainRetargeter::CalculateGoalRotation(this_00,&local_138,local_res20);
      dVar1 = pTVar16->Z;
      dVar4 = pTVar16->W;
      dVar5 = pTVar16->Y;
      (this_00->GoalOutput).Rotation.XY.m128d_f64[0] = pTVar16->X;
      (this_00->GoalOutput).Rotation.XY.m128d_f64[1] = dVar5;
      (this_00->GoalOutput).Rotation.ZW.m128d_f64[0] = dVar1;
      (this_00->GoalOutput).Rotation.ZW.m128d_f64[1] = dVar4;
      pTVar17 = FIKChainRetargeter::CalculateGoalPosition
                          (this_00,&local_118,(FIKRetargetPelvisMotionOp *)FVar12,pTVar11,param_4,
                           &pFVar10->SourceSkeleton,(FRetargetSkeleton *)&pFVar10->TargetSkeleton);
      dVar4 = (pTVar17->field0_0x0)._s_0.Y;
      dVar1 = (pTVar17->field0_0x0)._s_0.Z;
      (this_00->GoalOutput).Translation.XY.m128d_f64[0] = (pTVar17->field0_0x0)._s_0.X;
      (this_00->GoalOutput).Translation.XY.m128d_f64[1] = dVar4;
      (this_00->GoalOutput).Translation.ZW.m128d_f64[0] = dVar1;
      (this_00->GoalOutput).Translation.ZW.m128d_f64[1] = 0.0;
      local_138.Z = (this_00->GoalOutput).Rotation.ZW.m128d_f64[0];
      local_138.W = (this_00->GoalOutput).Rotation.ZW.m128d_f64[1];
      local_138.X = (this_00->GoalOutput).Rotation.XY.m128d_f64[0];
      local_138.Y = (this_00->GoalOutput).Rotation.XY.m128d_f64[1];
      dVar4 = (this_00->GoalOutput).Translation.XY.m128d_f64[0];
      dVar5 = (this_00->GoalOutput).Translation.XY.m128d_f64[1];
      bVar2 = this_00->Settings->EnableIK;
      dVar1 = (this_00->GoalOutput).Translation.ZW.m128d_f64[0];
      local_f8.Name = this_00->TargetBoneChain->IKGoalName;
      local_f8.BoneName = this_00->TargetBoneChain->EndBone;
      local_f8.SourceBone.BoneName.ComparisonIndex.Value = 0;
      local_f8.SourceBone.BoneName.Number = 0;
      local_f8.TransformSource = Manual;
      local_f8.SourceBone.bUseSkeletonIndex = 0;
      local_f8.SourceBone.BoneIndex = -1;
      local_f8.SourceBone.CachedCompactPoseIndex = (FCompactPoseBoneIndex)0xffffffff;
      local_118.field0_0x0._s_0.Z = dVar1;
      local_f8.Position.field0_0x0._s_0.X = dVar4;
      local_f8.Position.field0_0x0._s_0.Y = dVar5;
      local_f8.Position.field0_0x0._s_0.Z = dVar1;
      UE::Math::TQuat<double>::Rotator(&local_138,&local_f8.Rotation);
      local_f8.FinalBlendedRotation.X = local_138.X;
      local_f8.FinalBlendedRotation.Y = local_138.Y;
      local_f8.FinalBlendedRotation.Z = local_138.Z;
      local_f8.FinalBlendedRotation.W = local_138.W;
      local_f8.PositionAlpha = 1.0;
      local_f8.RotationAlpha = 1.0;
      local_f8.PositionSpace = Component;
      local_f8.RotationSpace = Component;
      local_f8.FinalBlendedPosition.field0_0x0._s_0.X = dVar4;
      local_f8.FinalBlendedPosition.field0_0x0._s_0.Y = dVar5;
      local_f8.FinalBlendedPosition.field0_0x0._s_0.Z = dVar1;
      local_f8.bEnabled = bVar2;
      FIKRigGoalContainer::SetIKGoal(&pFVar10->GoalContainer,&local_f8);
      this_00 = this_00 + 1;
    }
  }
  if (bVar8) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar13) {
    FThreadStats::AddMessage(FVar18,CycleScopeEnd);
  }
  return;
}

// OnAddedToStack @ 14deecc10

void __thiscall
FIKRetargetIKChainsOp::OnAddedToStack
          (FIKRetargetIKChainsOp *this,UIKRetargeter *param_1,FIKRetargetOpBase *param_2)

{
  RegenerateChainSettings(this,param_2);
  return;
}

// OnAssignIKRig @ 14deecc30

void __thiscall
FIKRetargetIKChainsOp::OnAssignIKRig
          (FIKRetargetIKChainsOp *this,ERetargetSourceOrTarget param_1,UIKRigDefinition *param_2,
          FIKRetargetOpBase *param_3)

{
  RegenerateChainSettings(this,param_3);
  return;
}

// GetSettings @ 14deecc40

FIKRetargetOpSettingsBase * __thiscall
FIKRetargetIKChainsOp::GetSettings(FIKRetargetIKChainsOp *this)

{
  return (FIKRetargetOpSettingsBase *)&this->Settings;
}

// SetSettings @ 14deecc90

void __thiscall
FIKRetargetIKChainsOp::SetSettings(FIKRetargetIKChainsOp *this,FIKRetargetOpSettingsBase *param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  void *pvVar4;
  UStruct *pUVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  longlong *plVar8;
  longlong *plVar9;
  FName local_res8;
  TArray<FName,TSizedDefaultAllocator<32>_> local_38;
  
  ::FName::FName(&local_res8,"ChainsToRetarget");
  local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,4,1,0,&local_38.AllocatorInstance,1,&local_38.ArrayMax);
  *(FName *)local_38.AllocatorInstance.Data = local_res8;
  pvVar4 = (void *)(**(code **)(this->_padding_ + 0x48))(this);
  pUVar5 = (UStruct *)(**(code **)(this->_padding_ + 0x58))(this);
  FIKRetargetOpBase::CopyStructProperties(pUVar5,param_1,pvVar4,&local_38);
  iVar1 = param_1[1].LODThreshold;
  plVar8 = (longlong *)param_1[1]._padding_;
  plVar9 = plVar8 + (longlong)iVar1 * 0x14;
  while( true ) {
    if (param_1[1].LODThreshold != iVar1) {
      `TCheckedPointerIterator<FRetargetIKChainSettings_const_,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(&local_res8);
    }
    if (plVar8 == plVar9) break;
    iVar2 = (this->Settings).ChainsToRetarget.ArrayNum;
    pFVar6 = (this->Settings).ChainsToRetarget.AllocatorInstance.Data;
    pFVar7 = pFVar6 + (longlong)iVar2 * 0xa0;
    while( true ) {
      if ((this->Settings).ChainsToRetarget.ArrayNum != iVar2) {
        `TCheckedPointerIterator<FRetargetIKChainSettings,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_res8);
      }
      if (pFVar6 == pFVar7) break;
      if (*(longlong *)pFVar6 == *plVar8) {
        lVar3 = plVar8[1];
        *(longlong *)pFVar6 = *plVar8;
        *(longlong *)(pFVar6 + 8) = lVar3;
        lVar3 = plVar8[3];
        *(longlong *)(pFVar6 + 0x10) = plVar8[2];
        *(longlong *)(pFVar6 + 0x18) = lVar3;
        lVar3 = plVar8[5];
        *(longlong *)(pFVar6 + 0x20) = plVar8[4];
        *(longlong *)(pFVar6 + 0x28) = lVar3;
        lVar3 = plVar8[7];
        *(longlong *)(pFVar6 + 0x30) = plVar8[6];
        *(longlong *)(pFVar6 + 0x38) = lVar3;
        lVar3 = plVar8[9];
        *(longlong *)(pFVar6 + 0x40) = plVar8[8];
        *(longlong *)(pFVar6 + 0x48) = lVar3;
        lVar3 = plVar8[0xb];
        *(longlong *)(pFVar6 + 0x50) = plVar8[10];
        *(longlong *)(pFVar6 + 0x58) = lVar3;
        lVar3 = plVar8[0xd];
        *(longlong *)(pFVar6 + 0x60) = plVar8[0xc];
        *(longlong *)(pFVar6 + 0x68) = lVar3;
        lVar3 = plVar8[0xf];
        *(longlong *)(pFVar6 + 0x70) = plVar8[0xe];
        *(longlong *)(pFVar6 + 0x78) = lVar3;
        lVar3 = plVar8[0x11];
        *(longlong *)(pFVar6 + 0x80) = plVar8[0x10];
        *(longlong *)(pFVar6 + 0x88) = lVar3;
        lVar3 = plVar8[0x13];
        *(longlong *)(pFVar6 + 0x90) = plVar8[0x12];
        *(longlong *)(pFVar6 + 0x98) = lVar3;
      }
      pFVar6 = pFVar6 + 0xa0;
    }
    plVar8 = plVar8 + 0x14;
  }
  if ((FName *)local_38.AllocatorInstance.Data != (FName *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  return;
}

// GetSettingsType @ 14deece60

UScriptStruct * __thiscall FIKRetargetIKChainsOp::GetSettingsType(FIKRetargetIKChainsOp *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FIKRetargetIKChainsOpSettings.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UScriptStruct_FIKRetargetIKChainsOpSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FIKRetargetIKChainsOpSettings,(UObject *)pUVar1,
                         L"IKRetargetIKChainsOpSettings");
  }
  return Z_Registration_Info_UScriptStruct_FIKRetargetIKChainsOpSettings.OuterSingleton;
}

// GetType @ 14deecea0

UScriptStruct * __thiscall FIKRetargetIKChainsOp::GetType(FIKRetargetIKChainsOp *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FIKRetargetIKChainsOp.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar1 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UScriptStruct_FIKRetargetIKChainsOp.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FIKRetargetIKChainsOp,(UObject *)pUVar1,
                         L"IKRetargetIKChainsOp");
  }
  return Z_Registration_Info_UScriptStruct_FIKRetargetIKChainsOp.OuterSingleton;
}

// GetParentOpType @ 14deecee0

UScriptStruct * __thiscall FIKRetargetIKChainsOp::GetParentOpType(FIKRetargetIKChainsOp *this)

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

// OnTargetChainRenamed @ 14deecf20

void __thiscall
FIKRetargetIKChainsOp::OnTargetChainRenamed(FIKRetargetIKChainsOp *this,FName param_1,FName param_2)

{
  int iVar1;
  FName *pFVar2;
  FName *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = (this->Settings).ChainsToRetarget.ArrayNum;
  pFVar3 = (FName *)(this->Settings).ChainsToRetarget.AllocatorInstance.Data;
  pFVar2 = pFVar3 + (longlong)iVar1 * 0x14;
  while( true ) {
    if ((this->Settings).ChainsToRetarget.ArrayNum != iVar1) {
      `TCheckedPointerIterator<FRetargetIKChainSettings,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar3 == pFVar2) break;
    if (*pFVar3 == param_1) {
      *pFVar3 = param_2;
    }
    pFVar3 = pFVar3 + 0x14;
  }
  return;
}

