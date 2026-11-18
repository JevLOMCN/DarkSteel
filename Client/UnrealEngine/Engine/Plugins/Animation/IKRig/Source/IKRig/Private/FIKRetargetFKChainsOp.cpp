// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IKRig
// Functions: 17

// StaticStruct @ 14df08b40

UScriptStruct * __cdecl FIKRetargetFKChainsOp::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FIKRetargetFKChainsOp.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar1 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UScriptStruct_FIKRetargetFKChainsOp.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FIKRetargetFKChainsOp,(UObject *)pUVar1,
                         L"IKRetargetFKChainsOp");
  }
  return Z_Registration_Info_UScriptStruct_FIKRetargetFKChainsOp.OuterSingleton;
}

// Initialize @ 14df08bc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __thiscall
FIKRetargetFKChainsOp::Initialize
          (FIKRetargetFKChainsOp *this,FIKRetargetProcessor *param_1,FRetargetSkeleton *param_2,
          FTargetSkeleton *param_3,FIKRetargetOpBase *param_4,FIKRigLogger *param_5)

{
  int *piVar1;
  TArray<FChainPairFK,TSizedDefaultAllocator<32>_> *pTVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  FChainPairFK *pFVar6;
  ITextData *pIVar7;
  code *pcVar8;
  FName FVar9;
  FRetargetSkeleton *pFVar10;
  FRetargetFKChainSettings *pFVar11;
  FIKRetargetProcessor *pFVar12;
  bool bVar13;
  undefined1 uVar14;
  int iVar15;
  TArray<FResolvedBoneChain,TSizedDefaultAllocator<32>_> *pTVar16;
  FText *pFVar17;
  FText *pFVar18;
  FTextFormat *pFVar19;
  FIKRetargetFKChainsOp *pFVar20;
  FIKRetargetPelvisMotionOp *pFVar21;
  UIKRigDefinition *pUVar22;
  uint *puVar23;
  ulonglong uVar24;
  FResolvedBoneChain *pFVar25;
  FName *pFVar26;
  FRetargetSkeleton *pFVar27;
  FScriptContainerElement *pFVar28;
  FResolvedBoneChain *pFVar29;
  FName *pFVar30;
  FRetargetFKChainSettings *pFVar31;
  FScriptContainerElement *pFVar32;
  FResolvedBoneChain *pFVar33;
  ForAnyElementType FVar34;
  FTargetSkeleton *this_00;
  FName FVar35;
  undefined1 auStackY_2f8 [32];
  FIdentityFunctor local_2a8;
  undefined1 local_2a7 [7];
  FIKRetargetFKChainsOp *local_2a0;
  undefined1 local_298;
  undefined1 local_297;
  undefined1 local_296;
  undefined1 local_295;
  uint local_294;
  FIKRigLogger *local_290;
  FRetargetFKChainSettings *local_288;
  FName local_280;
  FRetargetSkeleton *local_278;
  FName local_270;
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_268;
  FName local_258;
  FTargetSkeleton *local_250;
  FRetargetSkeleton *local_248;
  FRetargetFKChainSettings *local_240;
  FIKRetargetProcessor *local_238;
  uint local_230 [2];
  TArray<int,TSizedDefaultAllocator<32>_> local_228;
  FIKRetargetFKChainsOp *local_218;
  FTextFormat local_210;
  FText local_200;
  FFormatArgumentValue local_1f0;
  FText local_1d0;
  FText local_1c0;
  FText local_1b0;
  FText local_1a0;
  FTextFormat local_190;
  FText local_180;
  FTextFormat local_170;
  FChainPairFK local_158;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_2f8;
  pTVar2 = &this->ChainPairsFK;
  *(undefined1 *)((longlong)&this->_padding_ + 5) = 0;
  piVar1 = &(this->ChainPairsFK).ArrayMax;
  iVar15 = (this->ChainPairsFK).ArrayNum;
  pFVar6 = (FChainPairFK *)(pTVar2->AllocatorInstance).Data;
  local_290 = param_5;
  local_2a0 = this;
  local_250 = param_3;
  local_248 = param_2;
  local_238 = param_1;
  if (*piVar1 < 0) {
    DestructItems<FChainPairFK,int>(pFVar6,iVar15);
    (this->ChainPairsFK).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x100,0x10,0,&pTVar2->AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<FChainPairFK,int>(pFVar6,iVar15);
    (this->ChainPairsFK).ArrayNum = 0;
  }
  local_294 = (local_2a0->Settings).ChainsToRetarget.ArrayNum;
  uVar24 = (ulonglong)(int)local_294;
  pFVar31 = (FRetargetFKChainSettings *)
            (local_2a0->Settings).ChainsToRetarget.AllocatorInstance.Data;
  local_240 = pFVar31 + uVar24;
LAB_14df08c8a:
  pFVar11 = local_240;
  local_288 = pFVar31;
  if ((local_2a0->Settings).ChainsToRetarget.ArrayNum != (int)uVar24) {
    local_2a7[0] = 0;
    `TCheckedPointerIterator<FRetargetFKChainSettings,int,0>::operator!='::__l2::<lambda_1>::
    operator()(local_2a7);
  }
  if (pFVar31 != pFVar11) {
    pUVar22 = (local_2a0->Settings).IKRigAsset.field0_0x0.DebugPtr;
    FVar35 = pFVar31->TargetChainName;
    if (pUVar22 == (UIKRigDefinition *)0x0) {
      pUVar22 = (param_1->AllBoneChains).DefaultTargetIKRig;
    }
    local_270 = FVar35;
    pTVar16 = TMapBase<UIKRigDefinition_const_*,TArray<FResolvedBoneChain,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UIKRigDefinition_const_*,TArray<FResolvedBoneChain,TSizedDefaultAllocator<32>_>,0>_>
              ::Find((TMapBase<UIKRigDefinition_const_*,TArray<FResolvedBoneChain,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UIKRigDefinition_const_*,TArray<FResolvedBoneChain,TSizedDefaultAllocator<32>_>,0>_>
                      *)&(param_1->AllBoneChains).TargetBoneChains,pUVar22);
    if (pTVar16 != (TArray<FResolvedBoneChain,TSizedDefaultAllocator<32>_> *)0x0) {
      pFVar29 = (FResolvedBoneChain *)(pTVar16->AllocatorInstance).Data;
      pFVar25 = pFVar29 + pTVar16->ArrayNum;
      for (; pFVar29 != pFVar25; pFVar29 = pFVar29 + 1) {
        if (pFVar29->ChainName == FVar35) {
          if (pFVar29 != (FResolvedBoneChain *)0x0) {
            iVar15 = (local_2a0->Settings).ChainMapping.ChainMap.ArrayNum;
            pFVar26 = (FName *)(local_2a0->Settings).ChainMapping.ChainMap.AllocatorInstance.Data;
            pFVar30 = pFVar26 + (longlong)iVar15 * 2;
            pFVar20 = local_2a0;
            goto LAB_14df08ea0;
          }
          break;
        }
      }
    }
    pFVar17 = FText::FromName(&local_180,&local_270);
    pFVar18 = FText::AsLocalizable_Advanced_LocText
                        (&local_1b0,L"FKChainsOp",L"FKChainOpMissingChain",
                         L"FK Chain Op: chain data is out of sync with IK Rig. Missing target chain, \'{0}."
                        );
    pFVar19 = FTextFormat::FTextFormat(&local_170,pFVar18,Default);
    local_1f0.Type = Text;
    FText::FText((FText *)&local_1f0.TextValue,pFVar17);
    if ((local_1f0.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsSet()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                            ,0xbd,
                            L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                           ), bVar13)) {
      pcVar8 = (code *)swi(3);
      uVar14 = (*pcVar8)();
      return (bool)uVar14;
    }
    local_268.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_268.ArrayNum = 1;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,1,0,&local_268.AllocatorInstance,1,&local_268.ArrayMax);
    ConstructItems<FFormatArgumentValue,FFormatArgumentValue,int>
              (local_268.AllocatorInstance.Data,&local_1f0,1);
    local_210.TextFormatData.Object = (pFVar19->TextFormatData).Object;
    local_210.TextFormatData.SharedReferenceCount.ReferenceController =
         (pFVar19->TextFormatData).SharedReferenceCount.ReferenceController;
    if (local_210.TextFormatData.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_210.TextFormatData.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_210.TextFormatData.SharedReferenceCount.ReferenceController)->
                 SharedReferenceCount + 1);
      UNLOCK();
    }
    FText::Format(&local_200,&local_210,&local_268);
    DestructItems<FFormatArgumentValue,int>
              ((FFormatArgumentValue *)local_268.AllocatorInstance.Data,local_268.ArrayNum);
    if ((FFormatArgumentValue *)local_268.AllocatorInstance.Data != (FFormatArgumentValue *)0x0) {
      FMemory::Free(local_268.AllocatorInstance.Data);
    }
    if (local_1f0.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)
                   *(ITextData *)local_1f0.TextValue.field0_0x0.TypedValue.TextData.Reference + 0x10
                  ))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((pFVar19->TextFormatData).SharedReferenceCount.ReferenceController);
    pIVar7 = (pFVar17->TextData).Reference;
    if (pIVar7 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar7 + 0x10))();
    }
    FIKRigLogger::LogWarning(param_5,&local_200);
    if (local_200.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_200.TextData.Reference + 0x10))();
    }
    if (local_1b0.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_1b0.TextData.Reference + 0x10))();
    }
    goto LAB_14df08f16;
  }
  local_218 = local_2a0;
  AlgoImpl::
  IntroSortInternal<FChainPairFK,int,FIdentityFunctor,TDereferenceWrapper<FChainPairFK,_FIKRetargetFKChainsOp::Initialize_::__l2::<lambda_1>_>_>
            ((FChainPairFK *)(pTVar2->AllocatorInstance).Data,(this->ChainPairsFK).ArrayNum,
             local_2a8,(<lambda_1> *)&local_218);
  pFVar12 = local_238;
  pFVar21 = FIKRetargetProcessor::GetFirstRetargetOpOfType<FIKRetargetPelvisMotionOp>
                      (local_238,ProcessorOps);
  if (pFVar21 == (FIKRetargetPelvisMotionOp *)0x0) {
LAB_14df09243:
    if ((pFVar12->RetargeterAsset == (UIKRetargeter *)0x0) ||
       (pUVar22 = UIKRetargeter::GetIKRig(pFVar12->RetargeterAsset,Target),
       pUVar22 == (UIKRigDefinition *)0x0)) {
      local_278 = (FRetargetSkeleton *)0x0;
      FVar35.ComparisonIndex.Value = 0;
      FVar35.Number = 0;
    }
    else {
      FVar35 = (pUVar22->RetargetDefinition).RootBone;
    }
  }
  else {
    if (pFVar21->field_0x1d == '\0') {
      local_280.ComparisonIndex.Value = 0;
      local_280.Number = 0;
      FVar35.ComparisonIndex.Value = 0;
      FVar35.Number = 0;
    }
    else {
      FVar35 = (pFVar21->Target).BoneName;
    }
    if (FVar35 == (FName)0x0) goto LAB_14df09243;
  }
  this_00 = local_250;
  pFVar26 = (FName *)local_250->_padding_;
  pFVar30 = pFVar26;
  goto joined_r0x00014df09283;
LAB_14df08ea0:
  if ((pFVar20->Settings).ChainMapping.ChainMap.ArrayNum != iVar15) {
    local_2a8 = (FIdentityFunctor)0x0;
    `TCheckedPointerIterator<FRetargetChainPair_const_,int,0>::operator!='::__l2::<lambda_1>::
    operator()(&local_2a8);
    pFVar20 = local_2a0;
  }
  param_5 = local_290;
  if (pFVar26 == pFVar30) {
    local_258.ComparisonIndex.Value = 0;
    local_258.Number = 0;
    goto LAB_14df08ee1;
  }
  if (*pFVar26 == FVar35) goto LAB_14df08eca;
  pFVar26 = pFVar26 + 2;
  goto LAB_14df08ea0;
LAB_14df08eca:
  local_258 = pFVar26[1];
LAB_14df08ee1:
  if (&param_1->AllBoneChains != (FRetargeterBoneChains *)0x0) {
    pFVar25 = (FResolvedBoneChain *)(param_1->AllBoneChains).SourceBoneChains.AllocatorInstance.Data
    ;
    pFVar33 = pFVar25 + (param_1->AllBoneChains).SourceBoneChains.ArrayNum;
    for (; pFVar25 != pFVar33; pFVar25 = pFVar25 + 1) {
      if (pFVar25->ChainName == local_258) {
        if (pFVar25 != (FResolvedBoneChain *)0x0) {
          local_158.FKEncoder.ChainParentCurrentGlobalTransform.Rotation.XY.m128d_f64[0] =
               (double)GlobalVectorConstants::Float0001.m128_f32[0];
          local_158.FKEncoder.ChainParentCurrentGlobalTransform.Rotation.XY.m128d_f64[1] =
               (double)GlobalVectorConstants::Float0001.m128_f32[1];
          local_158.FKEncoder.CurrentGlobalTransforms.AllocatorInstance.Data =
               (FScriptContainerElement *)0x0;
          local_158.FKEncoder.CurrentGlobalTransforms.ArrayNum = 0;
          local_158.FKEncoder.CurrentGlobalTransforms.ArrayMax = 0;
          local_158.FKEncoder.ChainParentCurrentGlobalTransform.Rotation.ZW.m128d_f64[0] =
               (double)GlobalVectorConstants::Float0001.m128_f32[2];
          local_158.FKEncoder.ChainParentCurrentGlobalTransform.Rotation.ZW.m128d_f64[1] =
               (double)GlobalVectorConstants::Float0001.m128_f32[3];
          local_158.FKDecoder.CachedData.SourceBoneIndices.AllocatorInstance.Data =
               (FScriptContainerElement *)0x0;
          local_158.FKDecoder.CachedData.SourceBoneIndices.ArrayNum = 0;
          local_158.FKDecoder.CachedData.SourceBoneIndices.ArrayMax = 0;
          local_158.FKDecoder.CachedData.FromToGlobalRotationDeltas.AllocatorInstance.Data =
               (FScriptContainerElement *)0x0;
          local_158.FKDecoder.CachedData.FromToGlobalRotationDeltas.ArrayNum = 0;
          local_158.FKDecoder.CachedData.FromToGlobalRotationDeltas.ArrayMax = 0;
          local_158.FKDecoder.CachedData.SourceRefPoseLengths.AllocatorInstance.Data =
               (FScriptContainerElement *)0x0;
          local_158.FKDecoder.CachedData.SourceRefPoseLengths.ArrayNum = 0;
          local_158.FKDecoder.CachedData.SourceRefPoseLengths.ArrayMax = 0;
          local_158.FKDecoder.CachedData.TargetRefPoseLengths.AllocatorInstance.Data =
               (FScriptContainerElement *)0x0;
          local_158.FKDecoder.CachedData.TargetRefPoseLengths.ArrayNum = 0;
          local_158.FKDecoder.CachedData.TargetRefPoseLengths.ArrayMax = 0;
          local_158.FKDecoder.IntermediateParentIndices.AllocatorInstance.Data =
               (FScriptContainerElement *)0x0;
          local_158.FKDecoder.IntermediateParentIndices.ArrayNum = 0;
          local_158.FKDecoder.IntermediateParentIndices.ArrayMax = 0;
          local_158.FKEncoder.ChainParentCurrentGlobalTransform.Translation.ZW.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[2];
          local_158.FKEncoder.ChainParentCurrentGlobalTransform.Translation.ZW.m128d_f64[1] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[3];
          local_158.FKDecoder.IntermediateLocalTransforms.AllocatorInstance.Data =
               (FScriptContainerElement *)0x0;
          local_158.FKDecoder.IntermediateLocalTransforms.ArrayNum = 0;
          local_158.FKDecoder.IntermediateLocalTransforms.ArrayMax = 0;
          local_158.FKEncoder.ChainParentCurrentGlobalTransform.Translation.XY.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
          local_158.FKEncoder.ChainParentCurrentGlobalTransform.Translation.XY.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[0];
          local_158.FKEncoder.ChainParentCurrentGlobalTransform.Translation.XY.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
          local_158.FKEncoder.ChainParentCurrentGlobalTransform.Scale3D.ZW.m128d_f64[0] =
               (double)GlobalVectorConstants::Float1110.m128_f32[2];
          local_158.FKEncoder.ChainParentCurrentGlobalTransform.Scale3D.ZW.m128d_f64[1] =
               (double)GlobalVectorConstants::Float1110.m128_f32[3];
          local_158.FKEncoder.ChainParentCurrentGlobalTransform.Scale3D.XY.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
          local_158.FKEncoder.ChainParentCurrentGlobalTransform.Scale3D.XY.m128d_f64[0] =
               (double)GlobalVectorConstants::Float1110.m128_f32[0];
          local_158.FKEncoder.ChainParentCurrentGlobalTransform.Scale3D.XY.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
          bVar13 = FChainPairFK::Initialize
                             (&local_158,pFVar25,pFVar29,local_248,local_250,local_288,local_290);
          if (bVar13) {
            pFVar6 = (FChainPairFK *)(pTVar2->AllocatorInstance).Data;
            piVar1 = &(this->ChainPairsFK).ArrayMax;
            if (((pFVar6 <= &local_158) && (&local_158 < pFVar6 + *piVar1)) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar13)) {
              pcVar8 = (code *)swi(3);
              uVar14 = (*pcVar8)();
              return (bool)uVar14;
            }
            iVar15 = (this->ChainPairsFK).ArrayNum;
            if (iVar15 == *piVar1) {
              iVar15 = UE::Core::Private::
                       ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x100,0x10,&pTVar2->AllocatorInstance,piVar1);
            }
            (this->ChainPairsFK).ArrayNum = iVar15 + 1;
            FChainPairFK::FChainPairFK
                      ((FChainPairFK *)((pTVar2->AllocatorInstance).Data + (longlong)iVar15 * 0x100)
                       ,&local_158);
          }
          else {
            pFVar17 = FText::FromName(&local_1a0,&local_270);
            pFVar18 = FText::AsLocalizable_Advanced_LocText
                                (&local_1c0,L"FKChainsOp",L"FKChainOpBadChain",
                                 L"FK Chain Op: could not initialize a mapped retarget chain, \'{0}."
                                );
            pFVar19 = FTextFormat::FTextFormat(&local_190,pFVar18,Default);
            pFVar17 = FText::Format<FText>(&local_1d0,pFVar19,pFVar17);
            FIKRigLogger::LogWarning(param_5,pFVar17);
            if (local_1d0.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_1d0.TextData.Reference + 0x10))();
            }
            if (local_1c0.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_1c0.TextData.Reference + 0x10))();
            }
          }
          if (local_158.FKDecoder.IntermediateLocalTransforms.AllocatorInstance.Data !=
              (FScriptContainerElement *)0x0) {
            FMemory::Free(local_158.FKDecoder.IntermediateLocalTransforms.AllocatorInstance.Data);
          }
          if (local_158.FKDecoder.IntermediateParentIndices.AllocatorInstance.Data !=
              (FScriptContainerElement *)0x0) {
            FMemory::Free(local_158.FKDecoder.IntermediateParentIndices.AllocatorInstance.Data);
          }
          if (local_158.FKDecoder.CachedData.TargetRefPoseLengths.AllocatorInstance.Data !=
              (FScriptContainerElement *)0x0) {
            FMemory::Free(local_158.FKDecoder.CachedData.TargetRefPoseLengths.AllocatorInstance.Data
                         );
          }
          if (local_158.FKDecoder.CachedData.SourceRefPoseLengths.AllocatorInstance.Data !=
              (FScriptContainerElement *)0x0) {
            FMemory::Free(local_158.FKDecoder.CachedData.SourceRefPoseLengths.AllocatorInstance.Data
                         );
          }
          if (local_158.FKDecoder.CachedData.FromToGlobalRotationDeltas.AllocatorInstance.Data !=
              (FScriptContainerElement *)0x0) {
            FMemory::Free(local_158.FKDecoder.CachedData.FromToGlobalRotationDeltas.
                          AllocatorInstance.Data);
          }
          if (local_158.FKDecoder.CachedData.SourceBoneIndices.AllocatorInstance.Data !=
              (FScriptContainerElement *)0x0) {
            FMemory::Free(local_158.FKDecoder.CachedData.SourceBoneIndices.AllocatorInstance.Data);
          }
          if (local_158.FKEncoder.CurrentGlobalTransforms.AllocatorInstance.Data !=
              (FScriptContainerElement *)0x0) {
            FMemory::Free(local_158.FKEncoder.CurrentGlobalTransforms.AllocatorInstance.Data);
          }
        }
        break;
      }
    }
  }
LAB_14df08f16:
  uVar24 = (ulonglong)local_294;
  pFVar31 = local_288 + 1;
  goto LAB_14df08c8a;
joined_r0x00014df09283:
  if (pFVar30 == pFVar26 + (int)local_250->_padding_) {
    pFVar31 = (FRetargetFKChainSettings *)0xffffffff;
LAB_14df0929c:
    piVar1 = &(local_2a0->NonRetargetedChildrenToUpdate).ArrayMax;
    (local_2a0->NonRetargetedChildrenToUpdate).ArrayNum = 0;
    local_288 = pFVar31;
    if (*piVar1 < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,&(local_2a0->NonRetargetedChildrenToUpdate).AllocatorInstance,0,piVar1);
    }
    iVar15 = (this->ChainPairsFK).ArrayNum;
    uVar24 = (ulonglong)iVar15;
    FVar35 = (FName)(pTVar2->AllocatorInstance).Data;
    local_270 = (FName)(uVar24 * 0x100 + (longlong)FVar35);
    local_290 = (FIKRigLogger *)CONCAT44(local_290._4_4_,iVar15);
    do {
      FVar9 = local_270;
      local_280 = FVar35;
      if ((this->ChainPairsFK).ArrayNum != (int)uVar24) {
        `TCheckedPointerIterator<FChainPairFK,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_298);
      }
      if (FVar35 == FVar9) {
        bVar13 = (local_2a0->ChainPairsFK).ArrayNum != 0;
        *(bool *)((longlong)&local_2a0->_padding_ + 5) = bVar13;
        return bVar13;
      }
      local_240 = *(FRetargetFKChainSettings **)((longlong)FVar35 + 0xf0);
      local_294 = *(uint *)&local_240[2].TranslationMode;
      uVar24 = (ulonglong)(int)local_294;
      pFVar27 = (FRetargetSkeleton *)local_240[2].RotationAlpha;
      local_248 = (FRetargetSkeleton *)
                  ((longlong)&(pFVar27->BoneNames).AllocatorInstance.Data + uVar24 * 4);
      while( true ) {
        pFVar10 = local_248;
        local_278 = pFVar27;
        if (*(int *)&local_240[2].TranslationMode != (int)uVar24) {
          `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (&local_297);
        }
        if (pFVar27 == pFVar10) break;
        local_228.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_228.ArrayNum = 0;
        local_228.ArrayMax = 0;
        FRetargetSkeleton::GetChildrenIndicesRecursive
                  ((FRetargetSkeleton *)this_00,*(int *)&(pFVar27->BoneNames).AllocatorInstance.Data
                   ,&local_228);
        iVar15 = local_228.ArrayNum;
        local_238 = (FIKRetargetProcessor *)
                    (local_228.AllocatorInstance.Data + (longlong)local_228.ArrayNum * 4);
        FVar34.Data = local_228.AllocatorInstance.Data;
        while( true ) {
          pFVar12 = local_238;
          if (local_228.ArrayNum != iVar15) {
            `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (&local_296);
          }
          if ((FIKRetargetProcessor *)FVar34.Data == pFVar12) break;
          uVar4 = (((FIKRetargetProcessor *)FVar34.Data)->Log).LogName.ComparisonIndex.Value;
          local_230[0] = uVar4;
          if ((uint)pFVar31 != uVar4) {
            iVar5 = (this->ChainPairsFK).ArrayNum;
            pFVar32 = (pTVar2->AllocatorInstance).Data;
            pFVar28 = pFVar32 + (longlong)iVar5 * 0x100;
            while( true ) {
              if ((this->ChainPairsFK).ArrayNum != iVar5) {
                `TCheckedPointerIterator<FChainPairFK,int,0>::operator!='::__l2::<lambda_1>::
                operator()(&local_295);
              }
              if (pFVar32 == pFVar28) break;
              puVar23 = *(uint **)(*(longlong *)(pFVar32 + 0xf0) + 0x60);
              puVar3 = puVar23 + *(int *)(*(longlong *)(pFVar32 + 0xf0) + 0x68);
              for (; puVar23 != puVar3; puVar23 = puVar23 + 1) {
                pFVar31 = local_288;
                if (*puVar23 == uVar4) goto LAB_14df0941c;
              }
              pFVar32 = pFVar32 + 0x100;
            }
            TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int_const_&>
                      (&local_2a0->NonRetargetedChildrenToUpdate,(int *)local_230);
            pFVar31 = local_288;
          }
LAB_14df0941c:
          FVar34.Data = (FScriptContainerElement *)
                        &(((FIKRetargetProcessor *)FVar34.Data)->Log).LogName.Number;
        }
        if ((FIKRetargetProcessor *)local_228.AllocatorInstance.Data != (FIKRetargetProcessor *)0x0)
        {
          FMemory::Free(local_228.AllocatorInstance.Data);
        }
        pFVar27 = (FRetargetSkeleton *)
                  ((longlong)&(local_278->BoneNames).AllocatorInstance.Data + 4);
        uVar24 = (ulonglong)local_294;
        this_00 = local_250;
      }
      FVar35 = (FName)((longlong)local_280 + 0x100);
      uVar24 = (ulonglong)local_290 & 0xffffffff;
    } while( true );
  }
  if (*pFVar30 == FVar35) {
    pFVar31 = (FRetargetFKChainSettings *)((longlong)pFVar30 - (longlong)pFVar26 >> 3);
    goto LAB_14df0929c;
  }
  pFVar30 = pFVar30 + 1;
  goto joined_r0x00014df09283;
}

// Run @ 14df094e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FIKRetargetFKChainsOp::Run
          (FIKRetargetFKChainsOp *this,FIKRetargetProcessor *param_1,double param_2,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_3,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_4)

{
  int *piVar1;
  FTargetSkeleton *this_00;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  TTransform<double> *pTVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  FIKRetargetProcessor *pFVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  FIKRetargetPelvisMotionOp *pFVar11;
  longlong lVar12;
  uint uVar13;
  FScriptContainerElement *pFVar14;
  FChainEncoderFK *this_01;
  FScriptContainerElement *pFVar15;
  FChainEncoderFK *pFVar16;
  undefined1 auStackY_118 [32];
  undefined1 local_c8;
  undefined1 local_c7;
  undefined1 local_c6 [6];
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *local_c0;
  FIKRetargetProcessor *local_b8;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *local_b0;
  TTransform<double> local_a8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_118;
  iVar3 = (this->ChainPairsFK).ArrayNum;
  this_00 = &param_1->TargetSkeleton;
  pFVar14 = (this->ChainPairsFK).AllocatorInstance.Data;
  pFVar15 = pFVar14 + (longlong)iVar3 * 0x100;
  local_b0 = param_4;
  local_c0 = param_3;
  local_b8 = param_1;
  while( true ) {
    if ((this->ChainPairsFK).ArrayNum != iVar3) {
      local_c8 = 0;
      `TCheckedPointerIterator<FChainPairFK,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_c8);
    }
    if (pFVar14 == pFVar15) break;
    FChainDecoderFK::UpdateIntermediateLocalTransforms
              ((FChainDecoderFK *)(pFVar14 + 0x80),this_00,param_4);
    pFVar14 = pFVar14 + 0x100;
  }
  pTVar2 = &this->ChildrenToUpdateLocalTransforms;
  piVar1 = &(this->ChildrenToUpdateLocalTransforms).ArrayMax;
  (this->ChildrenToUpdateLocalTransforms).ArrayNum = 0;
  if ((this->ChildrenToUpdateLocalTransforms).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,0x10,0,&pTVar2->AllocatorInstance,0,piVar1);
  }
  pFVar15 = (this->NonRetargetedChildrenToUpdate).AllocatorInstance.Data;
  iVar3 = (this->NonRetargetedChildrenToUpdate).ArrayNum;
  pFVar14 = pFVar15 + (longlong)iVar3 * 4;
  while( true ) {
    if ((this->NonRetargetedChildrenToUpdate).ArrayNum != iVar3) {
      local_c7 = 0;
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_c7);
    }
    pFVar7 = local_b8;
    if (pFVar15 == pFVar14) break;
    FRetargetSkeleton::GetLocalTransformOfSingleBone
              ((FRetargetSkeleton *)this_00,&local_a8,*(int *)pFVar15,param_4);
    pTVar4 = (TTransform<double> *)(pTVar2->AllocatorInstance).Data;
    if ((pTVar4 <= &local_a8) && (&local_a8 < pTVar4 + *piVar1)) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar8) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    iVar9 = (this->ChildrenToUpdateLocalTransforms).ArrayNum;
    if (iVar9 == *piVar1) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x1060,&pTVar2->AllocatorInstance,piVar1);
    }
    (this->ChildrenToUpdateLocalTransforms).ArrayNum = iVar9 + 1;
    pFVar5 = (pTVar2->AllocatorInstance).Data;
    lVar12 = (longlong)iVar9 * 0x60;
    pFVar15 = pFVar15 + 4;
    *(double *)(pFVar5 + lVar12) = local_a8.Rotation.XY.m128d_f64[0];
    *(double *)(pFVar5 + lVar12 + 8) = local_a8.Rotation.XY.m128d_f64[1];
    *(double *)(pFVar5 + lVar12 + 0x10) = local_a8.Rotation.ZW.m128d_f64[0];
    *(double *)(pFVar5 + lVar12 + 0x10 + 8) = local_a8.Rotation.ZW.m128d_f64[1];
    *(double *)(pFVar5 + lVar12 + 0x20) = local_a8.Translation.XY.m128d_f64[0];
    *(double *)(pFVar5 + lVar12 + 0x20 + 8) = local_a8.Translation.XY.m128d_f64[1];
    *(double *)(pFVar5 + lVar12 + 0x30) = local_a8.Translation.ZW.m128d_f64[0];
    *(double *)(pFVar5 + lVar12 + 0x30 + 8) = local_a8.Translation.ZW.m128d_f64[1];
    *(double *)(pFVar5 + lVar12 + 0x40) = local_a8.Scale3D.XY.m128d_f64[0];
    *(double *)(pFVar5 + lVar12 + 0x40 + 8) = local_a8.Scale3D.XY.m128d_f64[1];
    *(double *)(pFVar5 + lVar12 + 0x50) = local_a8.Scale3D.ZW.m128d_f64[0];
    *(double *)(pFVar5 + lVar12 + 0x50 + 8) = local_a8.Scale3D.ZW.m128d_f64[1];
  }
  pFVar11 = FIKRetargetProcessor::GetFirstRetargetOpOfType<FIKRetargetPelvisMotionOp>
                      (local_b8,ProcessorOps);
  pTVar2 = local_b0;
  iVar3 = (this->ChainPairsFK).ArrayNum;
  this_01 = (FChainEncoderFK *)(this->ChainPairsFK).AllocatorInstance.Data;
  pFVar16 = this_01 + (longlong)iVar3 * 2;
  while( true ) {
    if ((this->ChainPairsFK).ArrayNum != iVar3) {
      local_c6[0] = 0;
      `TCheckedPointerIterator<FChainPairFK,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_c6);
    }
    if (this_01 == pFVar16) break;
    FChainEncoderFK::EncodePose
              (this_01,&pFVar7->SourceSkeleton,
               (TArray<int,TSizedDefaultAllocator<32>_> *)
               ((longlong)this_01[1].ChainParentCurrentGlobalTransform.Scale3D.ZW.m128d_f64[1] +
               0x60),local_c0);
    FChainDecoderFK::DecodePose
              ((FChainDecoderFK *)(this_01 + 1),pFVar11,
               *(FRetargetFKChainSettings **)&this_01[1].field_0x78,
               &(this_01[1].BoneChain)->BoneIndices,this_01,local_c0,&pFVar7->SourceSkeleton,this_00
               ,pTVar2);
    this_01 = this_01 + 2;
  }
  uVar13 = 0;
  if (0 < (this->NonRetargetedChildrenToUpdate).ArrayNum) {
    lVar12 = 0;
    do {
      uVar10 = 0;
      if ((int)uVar13 < (this->NonRetargetedChildrenToUpdate).ArrayNum) {
        uVar10 = ~uVar13 >> 0x1f;
      }
      if (uVar10 == 0) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar8) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      iVar3 = *(int *)((this->NonRetargetedChildrenToUpdate).AllocatorInstance.Data + lVar12);
      uVar10 = 0;
      if ((int)uVar13 < (this->ChildrenToUpdateLocalTransforms).ArrayNum) {
        uVar10 = ~uVar13 >> 0x1f;
      }
      if (uVar10 == 0) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar8) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      FRetargetSkeleton::UpdateGlobalTransformOfSingleBone
                ((FRetargetSkeleton *)this_00,iVar3,
                 (TTransform<double> *)
                 ((this->ChildrenToUpdateLocalTransforms).AllocatorInstance.Data +
                 (longlong)(int)uVar13 * 0x60),&(param_1->TargetSkeleton).OutputGlobalPose);
      uVar13 = uVar13 + 1;
      lVar12 = lVar12 + 4;
    } while ((int)uVar13 < (this->NonRetargetedChildrenToUpdate).ArrayNum);
  }
  return;
}

// PostInitialize @ 14df09920

void __thiscall
FIKRetargetFKChainsOp::PostInitialize
          (FIKRetargetFKChainsOp *this,FIKRetargetProcessor *param_1,FRetargetSkeleton *param_2,
          FTargetSkeleton *param_3,FIKRigLogger *param_4)

{
  int iVar1;
  FName *pFVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  FIKRetargetPelvisMotionOp *pFVar6;
  UIKRigDefinition *pUVar7;
  FName FVar8;
  int iVar9;
  FName *pFVar10;
  FScriptContainerElement *pFVar11;
  FScriptContainerElement *pFVar12;
  FName FVar13;
  undefined1 local_res8 [8];
  
  pFVar6 = FIKRetargetProcessor::GetFirstRetargetOpOfType<FIKRetargetPelvisMotionOp>
                     (param_1,ProcessorOps);
  FVar13.ComparisonIndex.Value = 0;
  FVar13.Number = 0;
  if (pFVar6 != (FIKRetargetPelvisMotionOp *)0x0) {
    FVar8 = FVar13;
    if (pFVar6->field_0x1d != '\0') {
      FVar8 = (pFVar6->Target).BoneName;
    }
    if (FVar8 != (FName)0x0) goto LAB_14df09990;
  }
  FVar8 = FVar13;
  if ((param_1->RetargeterAsset != (UIKRetargeter *)0x0) &&
     (pUVar7 = UIKRetargeter::GetIKRig(param_1->RetargeterAsset,Target),
     pUVar7 != (UIKRigDefinition *)0x0)) {
    FVar8 = (pUVar7->RetargetDefinition).RootBone;
  }
LAB_14df09990:
  pFVar2 = (FName *)param_3->_padding_;
  pFVar10 = pFVar2;
  do {
    if (pFVar10 == pFVar2 + (int)param_3->_padding_) {
      iVar9 = -1;
LAB_14df099ba:
      iVar1 = (this->ChainPairsFK).ArrayNum;
      pFVar12 = (this->ChainPairsFK).AllocatorInstance.Data;
      pFVar11 = pFVar12 + (longlong)iVar1 * 0x100;
      while( true ) {
        if ((this->ChainPairsFK).ArrayNum != iVar1) {
          local_res8[0] = 0;
          `TCheckedPointerIterator<FChainPairFK,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res8);
        }
        if (pFVar12 == pFVar11) break;
        lVar3 = *(longlong *)(pFVar12 + 0xf0);
        if ((*(int *)(lVar3 + 0x68) < 1) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        FChainDecoderFK::InitializeIntermediateParentIndices
                  ((FChainDecoderFK *)(pFVar12 + 0x80),iVar9,**(int **)(lVar3 + 0x60),param_3);
        pFVar12 = pFVar12 + 0x100;
      }
      return;
    }
    if (*pFVar10 == FVar8) {
      iVar9 = (int)((longlong)pFVar10 - (longlong)pFVar2 >> 3);
      goto LAB_14df099ba;
    }
    pFVar10 = pFVar10 + 1;
  } while( true );
}

// OnAddedToStack @ 14df09a90

void __thiscall
FIKRetargetFKChainsOp::OnAddedToStack
          (FIKRetargetFKChainsOp *this,UIKRetargeter *param_1,FIKRetargetOpBase *param_2)

{
  UIKRigDefinition *pUVar1;
  UIKRigDefinition *pUVar2;
  
  pUVar1 = UIKRetargeter::GetIKRig(param_1,Source);
  pUVar2 = UIKRetargeter::GetIKRig(param_1,Target);
  ApplyIKRigs(this,pUVar1,pUVar2);
  FRetargetChainMapping::AutoMapChains(&(this->Settings).ChainMapping,Fuzzy,bForceRemap);
  return;
}

// OnAssignIKRig @ 14df09b00

void __thiscall
FIKRetargetFKChainsOp::OnAssignIKRig
          (FIKRetargetFKChainsOp *this,ERetargetSourceOrTarget param_1,UIKRigDefinition *param_2,
          FIKRetargetOpBase *param_3)

{
  UIKRigDefinition *pUVar1;
  
  pUVar1 = param_2;
  if ((param_1 == Source) ||
     (pUVar1 = (this->Settings).ChainMapping.SourceIKRig.field0_0x0.DebugPtr, param_1 != Target)) {
    param_2 = (this->Settings).ChainMapping.TargetIKRig.field0_0x0.DebugPtr;
  }
  ApplyIKRigs(this,pUVar1,param_2);
  FRetargetChainMapping::AutoMapChains(&(this->Settings).ChainMapping,Fuzzy,bForceRemap);
  return;
}

// CollectRetargetedBones @ 14df09b90

void __thiscall
FIKRetargetFKChainsOp::CollectRetargetedBones
          (FIKRetargetFKChainsOp *this,
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *param_1)

{
  bool *pbVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  bool *pbVar10;
  FScriptContainerElement *pFVar11;
  uint uVar12;
  FScriptContainerElement *pFVar13;
  undefined1 local_res8 [8];
  int local_res20 [2];
  
  iVar3 = (this->ChainPairsFK).ArrayNum;
  pFVar11 = (this->ChainPairsFK).AllocatorInstance.Data;
  pFVar13 = pFVar11 + (longlong)iVar3 * 0x100;
  while( true ) {
    if ((this->ChainPairsFK).ArrayNum != iVar3) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FChainPairFK_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar11 == pFVar13) break;
    iVar4 = *(int *)(*(longlong *)(pFVar11 + 0xf0) + 0x68);
    pbVar10 = *(bool **)(*(longlong *)(pFVar11 + 0xf0) + 0x60);
    if ((iVar4 < 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    uVar8 = *(int *)&(param_1->Elements).field_0x8 - *(int *)&(param_1->Elements).field_0x34;
    uVar12 = uVar8 + iVar4;
    if (uVar8 < uVar12) {
      if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar12);
      }
      TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::Reserve((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)param_1,uVar12);
      if (uVar12 < 4) {
        iVar9 = 1;
      }
      else {
        uVar2 = (ulonglong)((uVar12 >> 1) + 7) * 2 + 1;
        lVar5 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar5 == 0; lVar5 = lVar5 + -1) {
          }
        }
        iVar9 = 1 << ((byte)lVar5 & 0x1f);
      }
      if ((param_1->HashSize == 0) || (param_1->HashSize < iVar9)) {
        param_1->HashSize = iVar9;
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Rehash(param_1);
      }
    }
    pbVar1 = pbVar10 + (longlong)iVar4 * 4;
    for (; pbVar10 != pbVar1; pbVar10 = pbVar10 + 4) {
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                (param_1,local_res20,pbVar10);
    }
    pFVar11 = pFVar11 + 0x100;
  }
  return;
}

// GetSettings @ 14df09ce0

FIKRetargetOpSettingsBase * __thiscall
FIKRetargetFKChainsOp::GetSettings(FIKRetargetFKChainsOp *this)

{
  return (FIKRetargetOpSettingsBase *)&this->Settings;
}

// GetSettingsType @ 14df09cf0

UScriptStruct * __thiscall FIKRetargetFKChainsOp::GetSettingsType(FIKRetargetFKChainsOp *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FIKRetargetFKChainsOpSettings.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UScriptStruct_FIKRetargetFKChainsOpSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FIKRetargetFKChainsOpSettings,(UObject *)pUVar1,
                         L"IKRetargetFKChainsOpSettings");
  }
  return Z_Registration_Info_UScriptStruct_FIKRetargetFKChainsOpSettings.OuterSingleton;
}

// GetType @ 14df09e70

UScriptStruct * __thiscall FIKRetargetFKChainsOp::GetType(FIKRetargetFKChainsOp *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FIKRetargetFKChainsOp.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar1 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UScriptStruct_FIKRetargetFKChainsOp.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FIKRetargetFKChainsOp,(UObject *)pUVar1,
                         L"IKRetargetFKChainsOp");
  }
  return Z_Registration_Info_UScriptStruct_FIKRetargetFKChainsOp.OuterSingleton;
}

// GetCustomTargetIKRig @ 14df09eb0

UIKRigDefinition * __thiscall
FIKRetargetFKChainsOp::GetCustomTargetIKRig(FIKRetargetFKChainsOp *this)

{
  return (this->Settings).IKRigAsset.field0_0x0.DebugPtr;
}

// GetChainMapping @ 14df09f40

FRetargetChainMapping * __thiscall
FIKRetargetFKChainsOp::GetChainMapping(FIKRetargetFKChainsOp *this)

{
  return &(this->Settings).ChainMapping;
}

// OnTargetChainRenamed @ 14df09f50

void __thiscall
FIKRetargetFKChainsOp::OnTargetChainRenamed(FIKRetargetFKChainsOp *this,FName param_1,FName param_2)

{
  FName *pFVar1;
  int iVar2;
  FName *pFVar3;
  undefined1 local_res8 [8];
  
  iVar2 = (this->Settings).ChainsToRetarget.ArrayNum;
  pFVar3 = (FName *)(this->Settings).ChainsToRetarget.AllocatorInstance.Data;
  pFVar1 = pFVar3 + (longlong)iVar2 * 5;
  while( true ) {
    if ((this->Settings).ChainsToRetarget.ArrayNum != iVar2) {
      `TCheckedPointerIterator<FRetargetFKChainSettings,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    if (*pFVar3 == param_1) {
      *pFVar3 = param_2;
    }
    pFVar3 = pFVar3 + 5;
  }
  return;
}

// OnReinitPropertyEdited @ 14df09fd0

void __thiscall
FIKRetargetFKChainsOp::OnReinitPropertyEdited
          (FIKRetargetFKChainsOp *this,FPropertyChangedEvent *param_1)

{
  ApplyIKRigs(this,(this->Settings).ChainMapping.SourceIKRig.field0_0x0.DebugPtr,
              (this->Settings).IKRigAsset.field0_0x0.DebugPtr);
  return;
}

// PostLoad @ 14df09ff0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FIKRetargetFKChainsOp::PostLoad(FIKRetargetFKChainsOp *this,Type param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)(**(code **)(this->_padding_ + 0x48))();
  (**(code **)(*plVar1 + 0x10))(plVar1,param_1);
  if (param_1 - OpsOwnChainMapping < 3) {
    FRetargetChainMapping::operator=(&(this->Settings).ChainMapping,&this->ChainMapping_DEPRECATED);
  }
  return;
}

// FIKRetargetFKChainsOp @ 14df162e0

FIKRetargetFKChainsOp * __thiscall
FIKRetargetFKChainsOp::FIKRetargetFKChainsOp(FIKRetargetFKChainsOp *this)

{
  *(undefined1 *)&this->_padding_ = 1;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = (longlong)&___7FIKRetargetFKChainsOp__6B_;
  (this->Settings)._padding_ = (longlong)&___7FIKRetargetFKChainsOpSettings__6B_;
  (this->Settings).ChainDrawThickness = 1.0;
  (this->Settings).ChainDrawSize = 1.0;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0;
  *(undefined2 *)((longlong)&this->_padding_ + 4) = 1;
  *(undefined4 *)&(this->Settings)._padding_ = 0xffffffff;
  *(undefined1 *)((longlong)&(this->Settings)._padding_ + 4) = 1;
  (this->Settings)._padding_ = 0;
  (this->Settings).IKRigAsset.field0_0x0.DebugPtr = (UIKRigDefinition *)0x0;
  (this->Settings).ChainsToRetarget.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Settings).ChainsToRetarget.ArrayNum = 0;
  (this->Settings).ChainsToRetarget.ArrayMax = 0;
  (this->Settings).bDrawChainLines = true;
  (this->Settings).bDrawSingleBoneChains = true;
  (this->Settings).ChainMapping.ChainMap.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Settings).ChainMapping.ChainMap.ArrayNum = 0;
  (this->Settings).ChainMapping.ChainMap.ArrayMax = 0;
  (this->Settings).ChainMapping.SourceIKRig.field0_0x0.DebugPtr = (UIKRigDefinition *)0x0;
  (this->Settings).ChainMapping.TargetIKRig.field0_0x0.DebugPtr = (UIKRigDefinition *)0x0;
  (this->ChainPairsFK).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChainPairsFK).ArrayNum = 0;
  (this->ChainPairsFK).ArrayMax = 0;
  (this->NonRetargetedChildrenToUpdate).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NonRetargetedChildrenToUpdate).ArrayNum = 0;
  (this->NonRetargetedChildrenToUpdate).ArrayMax = 0;
  (this->ChildrenToUpdateLocalTransforms).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChildrenToUpdateLocalTransforms).ArrayNum = 0;
  (this->ChildrenToUpdateLocalTransforms).ArrayMax = 0;
  (this->ChainMapping_DEPRECATED).ChainMap.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChainMapping_DEPRECATED).ChainMap.ArrayNum = 0;
  (this->ChainMapping_DEPRECATED).ChainMap.ArrayMax = 0;
  (this->ChainMapping_DEPRECATED).SourceIKRig.field0_0x0.DebugPtr = (UIKRigDefinition *)0x0;
  (this->ChainMapping_DEPRECATED).TargetIKRig.field0_0x0.DebugPtr = (UIKRigDefinition *)0x0;
  return this;
}

// ~FIKRetargetFKChainsOp @ 14df1ba60

void __thiscall FIKRetargetFKChainsOp::~FIKRetargetFKChainsOp(FIKRetargetFKChainsOp *this)

{
  FScriptContainerElement *pFVar1;
  UObject *pUVar2;
  
  pFVar1 = (this->ChainMapping_DEPRECATED).ChainMap.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ChildrenToUpdateLocalTransforms).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->NonRetargetedChildrenToUpdate).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FChainPairFK,int>
            ((FChainPairFK *)(this->ChainPairsFK).AllocatorInstance.Data,
             (this->ChainPairsFK).ArrayNum);
  pFVar1 = (this->ChainPairsFK).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Settings).ChainMapping.ChainMap.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Settings).ChainsToRetarget.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  (this->Settings)._padding_ = (longlong)&___7FIKRetargetOpSettingsBase__6B_;
  pUVar2 = (UObject *)(this->Settings)._padding_;
  if (pUVar2 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar2);
    (this->Settings)._padding_ = 0;
  }
  this->_padding_ = (longlong)&___7FIKRetargetOpBase__6B_;
  return;
}

