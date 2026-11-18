// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IKRig
// Functions: 13

// StaticStruct @ 14df02550

UScriptStruct * __cdecl FIKRetargetAlignPoleVectorOp::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FIKRetargetAlignPoleVectorOp.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UScriptStruct_FIKRetargetAlignPoleVectorOp.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FIKRetargetAlignPoleVectorOp,(UObject *)pUVar1,
                         L"IKRetargetAlignPoleVectorOp");
  }
  return Z_Registration_Info_UScriptStruct_FIKRetargetAlignPoleVectorOp.OuterSingleton;
}

// Initialize @ 14df02690

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __thiscall
FIKRetargetAlignPoleVectorOp::Initialize
          (FIKRetargetAlignPoleVectorOp *this,FIKRetargetProcessor *param_1,
          FRetargetSkeleton *param_2,FTargetSkeleton *param_3,FIKRetargetOpBase *param_4,
          FIKRigLogger *param_5)

{
  int *piVar1;
  FRetargetPoleVectorSettings *pFVar2;
  FPoleVectorMatcher *pFVar3;
  FName FVar4;
  ITextData *pIVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  FTargetSkeleton *pFVar8;
  ForAnyElementType _Src;
  bool bVar9;
  undefined1 uVar10;
  int iVar11;
  TArray<FResolvedBoneChain,TSizedDefaultAllocator<32>_> *pTVar12;
  FText *pFVar13;
  FText *pFVar14;
  FTextFormat *pFVar15;
  FText *pFVar16;
  ulonglong uVar17;
  UIKRigDefinition *pUVar18;
  FResolvedBoneChain *pFVar19;
  FResolvedBoneChain *pFVar20;
  longlong lVar21;
  FRetargetPoleVectorSettings *pFVar22;
  FName *pFVar23;
  longlong lVar24;
  FName *pFVar25;
  FResolvedBoneChain *pFVar26;
  FScriptContainerElement *pFVar27;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  FRetargetSkeleton *local_res18;
  FTargetSkeleton *local_res20;
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_1c0;
  uint local_1b0;
  FName local_1a8;
  FPoleVectorMatcher local_1a0;
  FName local_168;
  FTextFormat local_160;
  FText local_150;
  FString local_140;
  FFormatArgumentValue local_130;
  FText local_110;
  FText local_100;
  FText local_f0;
  FText local_e0;
  FText local_d0;
  FText local_c0;
  FTextFormat local_b0;
  FText local_a0;
  FTextFormat local_90;
  FText local_80;
  FText local_70;
  FTextFormat local_60 [2];
  
  *(undefined1 *)((longlong)&this->_padding_ + 5) = 0;
  piVar1 = &(this->PoleVectorMatchers).ArrayMax;
  pFVar3 = (FPoleVectorMatcher *)(this->PoleVectorMatchers).AllocatorInstance.Data;
  iVar11 = (this->PoleVectorMatchers).ArrayNum;
  local_res18 = param_2;
  local_res20 = param_3;
  if (*piVar1 < 0) {
    DestructItems<FPoleVectorMatcher,int>(pFVar3,iVar11);
    (this->PoleVectorMatchers).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x38,8,0,&(this->PoleVectorMatchers).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<FPoleVectorMatcher,int>(pFVar3,iVar11);
    (this->PoleVectorMatchers).ArrayNum = 0;
  }
  local_1b0 = (this->Settings).ChainsToAlign.ArrayNum;
  uVar17 = (ulonglong)(int)local_1b0;
  pFVar22 = (FRetargetPoleVectorSettings *)(this->Settings).ChainsToAlign.AllocatorInstance.Data;
  pFVar2 = pFVar22 + uVar17;
LAB_14df0273b:
  if ((this->Settings).ChainsToAlign.ArrayNum != (int)uVar17) {
    local_res8[0] = 0;
    `TCheckedPointerIterator<FRetargetPoleVectorSettings,int,0>::operator!='::__l2::<lambda_1>::
    operator()(local_res8);
  }
  if (pFVar22 == pFVar2) {
    bVar9 = (this->PoleVectorMatchers).ArrayNum != 0;
    *(bool *)((longlong)&this->_padding_ + 5) = bVar9;
    return bVar9;
  }
  if (pFVar22->bEnabled != false) {
    pUVar18 = (this->Settings).IKRigAsset.field0_0x0.DebugPtr;
    FVar4 = pFVar22->TargetChainName;
    if (pUVar18 == (UIKRigDefinition *)0x0) {
      pUVar18 = (param_1->AllBoneChains).DefaultTargetIKRig;
    }
    pTVar12 = TMapBase<UIKRigDefinition_const_*,TArray<FResolvedBoneChain,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UIKRigDefinition_const_*,TArray<FResolvedBoneChain,TSizedDefaultAllocator<32>_>,0>_>
              ::Find((TMapBase<UIKRigDefinition_const_*,TArray<FResolvedBoneChain,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UIKRigDefinition_const_*,TArray<FResolvedBoneChain,TSizedDefaultAllocator<32>_>,0>_>
                      *)&(param_1->AllBoneChains).TargetBoneChains,pUVar18);
    if (pTVar12 != (TArray<FResolvedBoneChain,TSizedDefaultAllocator<32>_> *)0x0) {
      pFVar20 = (FResolvedBoneChain *)(pTVar12->AllocatorInstance).Data;
      pFVar26 = pFVar20 + pTVar12->ArrayNum;
      for (; pFVar20 != pFVar26; pFVar20 = pFVar20 + 1) {
        if (pFVar20->ChainName == FVar4) {
          if (pFVar20 != (FResolvedBoneChain *)0x0) {
            iVar11 = (this->ChainMapping).ChainMap.ArrayNum;
            pFVar25 = (FName *)(this->ChainMapping).ChainMap.AllocatorInstance.Data;
            pFVar23 = pFVar25 + (longlong)iVar11 * 2;
            goto LAB_14df02958;
          }
          break;
        }
      }
    }
    pFVar13 = FText::FromName(&local_a0,&pFVar22->TargetChainName);
    pFVar14 = FText::AsLocalizable_Advanced_LocText
                        (&local_f0,L"AlignPoleVectorOp",L"PoleVectorOpMissingChain",
                         L"Align Pole Vector Op: chain data is out of sync with IK Rig. Missing target chain, \'{0}."
                        );
    pFVar15 = FTextFormat::FTextFormat(&local_90,pFVar14,Default);
    local_130.Type = Text;
    FText::FText((FText *)&local_130.TextValue,pFVar13);
    if ((local_130.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0xbd,
                           L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                          ), bVar9)) {
      pcVar7 = (code *)swi(3);
      uVar10 = (*pcVar7)();
      return (bool)uVar10;
    }
    local_1c0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1c0.ArrayNum = 1;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,1,0,&local_1c0.AllocatorInstance,1,&local_1c0.ArrayMax);
    ConstructItems<FFormatArgumentValue,FFormatArgumentValue,int>
              (local_1c0.AllocatorInstance.Data,&local_130,1);
    local_160.TextFormatData.Object = (pFVar15->TextFormatData).Object;
    local_160.TextFormatData.SharedReferenceCount.ReferenceController =
         (pFVar15->TextFormatData).SharedReferenceCount.ReferenceController;
    if (local_160.TextFormatData.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_160.TextFormatData.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_160.TextFormatData.SharedReferenceCount.ReferenceController)->
                 SharedReferenceCount + 1);
      UNLOCK();
    }
    FText::Format(&local_150,&local_160,&local_1c0);
    DestructItems<FFormatArgumentValue,int>
              ((FFormatArgumentValue *)local_1c0.AllocatorInstance.Data,local_1c0.ArrayNum);
    if ((FFormatArgumentValue *)local_1c0.AllocatorInstance.Data != (FFormatArgumentValue *)0x0) {
      FMemory::Free(local_1c0.AllocatorInstance.Data);
    }
    if (local_130.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)
                   *(ITextData *)local_130.TextValue.field0_0x0.TypedValue.TextData.Reference + 0x10
                  ))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((pFVar15->TextFormatData).SharedReferenceCount.ReferenceController);
    pIVar5 = (pFVar13->TextData).Reference;
    if (pIVar5 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar5 + 0x10))();
    }
    FIKRigLogger::LogWarning(param_5,&local_150);
    if (local_150.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_150.TextData.Reference + 0x10))();
    }
    if (local_f0.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_f0.TextData.Reference + 0x10))();
    }
  }
  goto LAB_14df02930;
LAB_14df02958:
  if ((this->ChainMapping).ChainMap.ArrayNum != iVar11) {
    local_res10[0] = 0;
    `TCheckedPointerIterator<FRetargetChainPair_const_,int,0>::operator!='::__l2::<lambda_1>::
    operator()(local_res10);
  }
  pFVar8 = local_res20;
  if (pFVar25 == pFVar23) {
    local_1a8.ComparisonIndex.Value = 0;
    local_1a8.Number = 0;
    goto LAB_14df02997;
  }
  if (*pFVar25 == FVar4) goto LAB_14df02981;
  pFVar25 = pFVar25 + 2;
  goto LAB_14df02958;
LAB_14df02981:
  local_1a8 = pFVar25[1];
LAB_14df02997:
  if (&param_1->AllBoneChains != (FRetargeterBoneChains *)0x0) {
    pFVar26 = (FResolvedBoneChain *)(param_1->AllBoneChains).SourceBoneChains.AllocatorInstance.Data
    ;
    pFVar19 = pFVar26 + (param_1->AllBoneChains).SourceBoneChains.ArrayNum;
    for (; pFVar26 != pFVar19; pFVar26 = pFVar26 + 1) {
      if (pFVar26->ChainName == local_1a8) {
        if (pFVar26 != (FResolvedBoneChain *)0x0) {
          local_1a0.AllChildrenWithinChain.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_1a0.AllChildrenWithinChain.ArrayNum = 0;
          local_1a0.AllChildrenWithinChain.ArrayMax = 0;
          bVar9 = FPoleVectorMatcher::Initialize
                            (&local_1a0,pFVar22,pFVar26,pFVar20,local_res18,
                             (FRetargetSkeleton *)local_res20);
          if (!bVar9) {
            local_168 = *(FName *)(pFVar8->_padding_ + 0x18);
            ::FName::ToString(&local_168,&local_140);
            pFVar13 = FText::FromString(&local_80,&local_140);
            pFVar14 = FText::FromName(&local_70,&pFVar22->TargetChainName);
            pFVar16 = FText::AsLocalizable_Advanced_LocText
                                (&local_d0,L"AlignPoleVectorOp",L"PoleVectorOpFailedInit",
                                 L"Align Pole Vector Op: failed to initialize pole matching for chain, \'{0}\', on Skeletal Mesh: \'{1}\'"
                                );
            pFVar15 = FTextFormat::FTextFormat(local_60,pFVar16,Default);
            pFVar13 = FText::Format<FText,FText>(&local_e0,pFVar15,pFVar14,pFVar13);
            FIKRigLogger::LogWarning(param_5,pFVar13);
            if (local_e0.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_e0.TextData.Reference + 0x10))();
            }
            if (local_d0.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_d0.TextData.Reference + 0x10))();
            }
            if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_140.Data.AllocatorInstance.Data);
            }
            if (local_1a0.AllChildrenWithinChain.AllocatorInstance.Data !=
                (FScriptContainerElement *)0x0) {
              FMemory::Free(local_1a0.AllChildrenWithinChain.AllocatorInstance.Data);
            }
            return false;
          }
          pFVar3 = (FPoleVectorMatcher *)(this->PoleVectorMatchers).AllocatorInstance.Data;
          if (((pFVar3 <= &local_1a0) && (&local_1a0 < pFVar3 + (this->PoleVectorMatchers).ArrayMax)
              ) && (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x7a5,
                                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                      ), bVar9)) {
            pcVar7 = (code *)swi(3);
            uVar10 = (*pcVar7)();
            return (bool)uVar10;
          }
          iVar11 = (this->PoleVectorMatchers).ArrayNum;
          if (iVar11 == (this->PoleVectorMatchers).ArrayMax) {
            iVar11 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x838,&(this->PoleVectorMatchers).AllocatorInstance,
                                &(this->PoleVectorMatchers).ArrayMax);
          }
          _Src.Data = local_1a0.AllChildrenWithinChain.AllocatorInstance.Data;
          pFVar6 = (this->PoleVectorMatchers).AllocatorInstance.Data;
          lVar21 = (longlong)iVar11 * 0x38;
          (this->PoleVectorMatchers).ArrayNum = iVar11 + 1;
          pFVar27 = pFVar6 + lVar21 + 0x10;
          *(Type *)(pFVar6 + lVar21) = local_1a0.SourcePoleAxis;
          *(Type *)(pFVar6 + lVar21 + 4) = local_1a0.TargetPoleAxis;
          *(float *)(pFVar6 + lVar21 + 8) = local_1a0.TargetToSourceAngularOffsetAtRefPose;
          *(undefined8 *)&pFVar27->field_0x0 = 0;
          lVar24 = (longlong)local_1a0.AllChildrenWithinChain.ArrayNum;
          *(int *)&pFVar27[8].field_0x0 = local_1a0.AllChildrenWithinChain.ArrayNum;
          if (local_1a0.AllChildrenWithinChain.ArrayNum == 0) {
            *(int *)(pFVar6 + lVar21 + 0x1c) = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,local_1a0.AllChildrenWithinChain.ArrayNum,0,(ForAnyElementType *)pFVar27,
                       local_1a0.AllChildrenWithinChain.ArrayNum,(int *)(pFVar6 + lVar21 + 0x1c));
            memcpy(*(void **)&pFVar27->field_0x0,_Src.Data,lVar24 << 2);
          }
          *(FRetargetPoleVectorSettings **)(pFVar6 + lVar21 + 0x20) = local_1a0.Settings;
          *(FResolvedBoneChain **)(pFVar6 + lVar21 + 0x28) = local_1a0.SourceBoneChain;
          *(FResolvedBoneChain **)(pFVar6 + lVar21 + 0x30) = local_1a0.TargetBoneChain;
          if (local_1a0.AllChildrenWithinChain.AllocatorInstance.Data !=
              (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1a0.AllChildrenWithinChain.AllocatorInstance.Data);
          }
          pFVar22 = pFVar22 + 1;
          uVar17 = (ulonglong)local_1b0;
          goto LAB_14df0273b;
        }
        break;
      }
    }
  }
  pFVar13 = FText::FromName(&local_c0,&pFVar22->TargetChainName);
  pFVar14 = FText::AsLocalizable_Advanced_LocText
                      (&local_100,L"AlignPoleVectorOp",L"PoleVectorOpMissingSource",
                       L"Align Pole Vector Op: missing source chain. Cannot align a pole vector without a source chain, \'{0}."
                      );
  pFVar15 = FTextFormat::FTextFormat(&local_b0,pFVar14,Default);
  pFVar13 = FText::Format<FText>(&local_110,pFVar15,pFVar13);
  FIKRigLogger::LogWarning(param_5,pFVar13);
  if (local_110.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_110.TextData.Reference + 0x10))();
  }
  if (local_100.TextData.Reference == (ITextData *)0x0) {
LAB_14df02930:
    uVar17 = (ulonglong)local_1b0;
    pFVar22 = pFVar22 + 1;
  }
  else {
    (**(code **)((longlong)*local_100.TextData.Reference + 0x10))();
    uVar17 = (ulonglong)local_1b0;
    pFVar22 = pFVar22 + 1;
  }
  goto LAB_14df0273b;
}

// Run @ 14df02e10

void __thiscall
FIKRetargetAlignPoleVectorOp::Run
          (FIKRetargetAlignPoleVectorOp *this,FIKRetargetProcessor *param_1,double param_2,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_3,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_4)

{
  int iVar1;
  FPoleVectorMatcher *this_00;
  FPoleVectorMatcher *pFVar2;
  undefined1 local_res8 [8];
  
  iVar1 = (this->PoleVectorMatchers).ArrayNum;
  this_00 = (FPoleVectorMatcher *)(this->PoleVectorMatchers).AllocatorInstance.Data;
  pFVar2 = this_00 + iVar1;
  while( true ) {
    if ((this->PoleVectorMatchers).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FPoleVectorMatcher,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (this_00 == pFVar2) break;
    FPoleVectorMatcher::MatchPoleVector
              (this_00,param_3,(FRetargetSkeleton *)&param_1->TargetSkeleton,param_4);
    this_00 = this_00 + 1;
  }
  return;
}

// OnAddedToStack @ 14df02e90

void __thiscall
FIKRetargetAlignPoleVectorOp::OnAddedToStack
          (FIKRetargetAlignPoleVectorOp *this,UIKRetargeter *param_1,FIKRetargetOpBase *param_2)

{
  UIKRigDefinition *pUVar1;
  UIKRigDefinition *pUVar2;
  
  pUVar1 = UIKRetargeter::GetIKRig(param_1,Source);
  pUVar2 = UIKRetargeter::GetIKRig(param_1,Target);
  ApplyIKRigs(this,pUVar1,pUVar2);
  FRetargetChainMapping::AutoMapChains(&this->ChainMapping,Fuzzy,bForceRemap);
  return;
}

// OnAssignIKRig @ 14df02f40

void __thiscall
FIKRetargetAlignPoleVectorOp::OnAssignIKRig
          (FIKRetargetAlignPoleVectorOp *this,ERetargetSourceOrTarget param_1,
          UIKRigDefinition *param_2,FIKRetargetOpBase *param_3)

{
  UIKRigDefinition *pUVar1;
  
  pUVar1 = param_2;
  if ((param_1 == Source) ||
     (pUVar1 = (this->ChainMapping).SourceIKRig.field0_0x0.DebugPtr, param_1 != Target)) {
    param_2 = (this->ChainMapping).TargetIKRig.field0_0x0.DebugPtr;
  }
  ApplyIKRigs(this,pUVar1,param_2);
  FRetargetChainMapping::AutoMapChains(&this->ChainMapping,Fuzzy,bForceRemap);
  return;
}

// GetSettings @ 14df02f90

FIKRetargetOpSettingsBase * __thiscall
FIKRetargetAlignPoleVectorOp::GetSettings(FIKRetargetAlignPoleVectorOp *this)

{
  return (FIKRetargetOpSettingsBase *)&this->Settings;
}

// GetSettingsType @ 14df02fa0

UScriptStruct * __thiscall
FIKRetargetAlignPoleVectorOp::GetSettingsType(FIKRetargetAlignPoleVectorOp *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FIKRetargetAlignPoleVectorOpSettings.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UScriptStruct_FIKRetargetAlignPoleVectorOpSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FIKRetargetAlignPoleVectorOpSettings,
                         (UObject *)pUVar1,L"IKRetargetAlignPoleVectorOpSettings");
  }
  return Z_Registration_Info_UScriptStruct_FIKRetargetAlignPoleVectorOpSettings.OuterSingleton;
}

// GetType @ 14df03020

UScriptStruct * __thiscall FIKRetargetAlignPoleVectorOp::GetType(FIKRetargetAlignPoleVectorOp *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FIKRetargetAlignPoleVectorOp.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UScriptStruct_FIKRetargetAlignPoleVectorOp.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FIKRetargetAlignPoleVectorOp,(UObject *)pUVar1,
                         L"IKRetargetAlignPoleVectorOp");
  }
  return Z_Registration_Info_UScriptStruct_FIKRetargetAlignPoleVectorOp.OuterSingleton;
}

// GetCustomTargetIKRig @ 14df03060

UIKRigDefinition * __thiscall
FIKRetargetAlignPoleVectorOp::GetCustomTargetIKRig(FIKRetargetAlignPoleVectorOp *this)

{
  return (this->Settings).IKRigAsset.field0_0x0.DebugPtr;
}

// GetChainMapping @ 14df03070

FRetargetChainMapping * __thiscall
FIKRetargetAlignPoleVectorOp::GetChainMapping(FIKRetargetAlignPoleVectorOp *this)

{
  return &this->ChainMapping;
}

// OnTargetChainRenamed @ 14df030c0

void __thiscall
FIKRetargetAlignPoleVectorOp::OnTargetChainRenamed
          (FIKRetargetAlignPoleVectorOp *this,FName param_1,FName param_2)

{
  FName *pFVar1;
  int iVar2;
  FName *pFVar3;
  undefined1 local_res8 [8];
  
  iVar2 = (this->Settings).ChainsToAlign.ArrayNum;
  pFVar3 = (FName *)(this->Settings).ChainsToAlign.AllocatorInstance.Data;
  pFVar1 = pFVar3 + (longlong)iVar2 * 5;
  while( true ) {
    if ((this->Settings).ChainsToAlign.ArrayNum != iVar2) {
      `TCheckedPointerIterator<FRetargetPoleVectorSettings,int,0>::operator!='::__l2::<lambda_1>::
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

// OnReinitPropertyEdited @ 14df03140

void __thiscall
FIKRetargetAlignPoleVectorOp::OnReinitPropertyEdited
          (FIKRetargetAlignPoleVectorOp *this,FPropertyChangedEvent *param_1)

{
  ApplyIKRigs(this,(this->ChainMapping).SourceIKRig.field0_0x0.DebugPtr,
              (this->Settings).IKRigAsset.field0_0x0.DebugPtr);
  return;
}

// ~FIKRetargetAlignPoleVectorOp @ 14df1b950

void __thiscall
FIKRetargetAlignPoleVectorOp::~FIKRetargetAlignPoleVectorOp(FIKRetargetAlignPoleVectorOp *this)

{
  FScriptContainerElement *pFVar1;
  UObject *pUVar2;
  
  DestructItems<FPoleVectorMatcher,int>
            ((FPoleVectorMatcher *)(this->PoleVectorMatchers).AllocatorInstance.Data,
             (this->PoleVectorMatchers).ArrayNum);
  pFVar1 = (this->PoleVectorMatchers).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ChainMapping).ChainMap.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Settings).ChainsToAlign.AllocatorInstance.Data;
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

