// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IKRig
// Functions: 14

// StaticStruct @ 14dee8840

UScriptStruct * __cdecl FIKRetargetStretchChainOp::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FIKRetargetStretchChainOp.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UScriptStruct_FIKRetargetStretchChainOp.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FIKRetargetStretchChainOp,(UObject *)pUVar1,
                         L"IKRetargetStretchChainOp");
  }
  return Z_Registration_Info_UScriptStruct_FIKRetargetStretchChainOp.OuterSingleton;
}

// Initialize @ 14dee8900

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __thiscall
FIKRetargetStretchChainOp::Initialize
          (FIKRetargetStretchChainOp *this,FIKRetargetProcessor *param_1,FRetargetSkeleton *param_2,
          FTargetSkeleton *param_3,FIKRetargetOpBase *param_4,FIKRigLogger *param_5)

{
  int *piVar1;
  FChainStretcher *pFVar2;
  FName FVar3;
  ITextData *pIVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  FTargetSkeleton *pFVar7;
  ForAnyElementType _Src;
  bool bVar8;
  undefined1 uVar9;
  int iVar10;
  ulonglong uVar11;
  TArray<FResolvedBoneChain,TSizedDefaultAllocator<32>_> *pTVar12;
  FText *pFVar13;
  FText *pFVar14;
  FTextFormat *pFVar15;
  longlong lVar16;
  FText *pFVar17;
  UIKRigDefinition *pUVar18;
  FResolvedBoneChain *pFVar19;
  FRetargetStretchChainSettings *pFVar20;
  FResolvedBoneChain *pFVar21;
  FName *pFVar22;
  FName *pFVar23;
  longlong lVar24;
  FResolvedBoneChain *pFVar25;
  FRetargetStretchChainSettings *pFVar26;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  FRetargetSkeleton *local_res18;
  FTargetSkeleton *local_res20;
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_1b8;
  uint local_1a8;
  FName local_1a0;
  FRetargetStretchChainSettings *local_198;
  FChainStretcher local_190;
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
  piVar1 = &(this->ChainStretchers).ArrayMax;
  pFVar2 = (FChainStretcher *)(this->ChainStretchers).AllocatorInstance.Data;
  iVar10 = (this->ChainStretchers).ArrayNum;
  local_res18 = param_2;
  local_res20 = param_3;
  if (*piVar1 < 0) {
    DestructItems<FChainStretcher,int>(pFVar2,iVar10);
    (this->ChainStretchers).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,0,&(this->ChainStretchers).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<FChainStretcher,int>(pFVar2,iVar10);
    (this->ChainStretchers).ArrayNum = 0;
  }
  local_1a8 = (this->Settings).ChainsToStretch.ArrayNum;
  uVar11 = (ulonglong)(int)local_1a8;
  pFVar26 = (FRetargetStretchChainSettings *)(this->Settings).ChainsToStretch.AllocatorInstance.Data
  ;
  pFVar20 = pFVar26 + uVar11;
LAB_14dee89ad:
  local_198 = pFVar26;
  if ((this->Settings).ChainsToStretch.ArrayNum != (int)uVar11) {
    local_res8[0] = 0;
    `TCheckedPointerIterator<FRetargetStretchChainSettings,int,0>::operator!='::__l2::<lambda_1>::
    operator()(local_res8);
  }
  if (pFVar26 == pFVar20) {
    bVar8 = (this->ChainStretchers).ArrayNum != 0;
    *(bool *)((longlong)&this->_padding_ + 5) = bVar8;
    return bVar8;
  }
  if (pFVar26->bEnabled == false) goto LAB_14dee8e48;
  pUVar18 = (this->Settings).IKRigAsset.field0_0x0.DebugPtr;
  FVar3 = pFVar26->TargetChainName;
  if (pUVar18 == (UIKRigDefinition *)0x0) {
    pUVar18 = (param_1->AllBoneChains).DefaultTargetIKRig;
  }
  pTVar12 = TMapBase<UIKRigDefinition_const_*,TArray<FResolvedBoneChain,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UIKRigDefinition_const_*,TArray<FResolvedBoneChain,TSizedDefaultAllocator<32>_>,0>_>
            ::Find((TMapBase<UIKRigDefinition_const_*,TArray<FResolvedBoneChain,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UIKRigDefinition_const_*,TArray<FResolvedBoneChain,TSizedDefaultAllocator<32>_>,0>_>
                    *)&(param_1->AllBoneChains).TargetBoneChains,pUVar18);
  if (pTVar12 != (TArray<FResolvedBoneChain,TSizedDefaultAllocator<32>_> *)0x0) {
    pFVar21 = (FResolvedBoneChain *)(pTVar12->AllocatorInstance).Data;
    pFVar25 = pFVar21 + pTVar12->ArrayNum;
    for (; pFVar21 != pFVar25; pFVar21 = pFVar21 + 1) {
      if (pFVar21->ChainName == FVar3) {
        if (pFVar21 != (FResolvedBoneChain *)0x0) {
          iVar10 = (this->ChainMapping).ChainMap.ArrayNum;
          pFVar23 = (FName *)(this->ChainMapping).ChainMap.AllocatorInstance.Data;
          pFVar22 = pFVar23 + (longlong)iVar10 * 2;
          goto LAB_14dee8bd0;
        }
        break;
      }
    }
  }
  pFVar13 = FText::FromName(&local_a0,&pFVar26->TargetChainName);
  pFVar14 = FText::AsLocalizable_Advanced_LocText
                      (&local_f0,L"StretchChainOp",L"ChainStretchOpMissingChain",
                       L"Chain Stretch Op: chain data is out of sync with IK Rig. Missing target chain, \'{0}."
                      );
  pFVar15 = FTextFormat::FTextFormat(&local_90,pFVar14,Default);
  local_130.Type = Text;
  FText::FText((FText *)&local_130.TextValue,pFVar13);
  if ((local_130.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        ), bVar8)) {
    pcVar6 = (code *)swi(3);
    uVar9 = (*pcVar6)();
    return (bool)uVar9;
  }
  local_1b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1b8.ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x20,8,1,0,&local_1b8.AllocatorInstance,1,&local_1b8.ArrayMax);
  ConstructItems<FFormatArgumentValue,FFormatArgumentValue,int>
            (local_1b8.AllocatorInstance.Data,&local_130,1);
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
  FText::Format(&local_150,&local_160,&local_1b8);
  DestructItems<FFormatArgumentValue,int>
            ((FFormatArgumentValue *)local_1b8.AllocatorInstance.Data,local_1b8.ArrayNum);
  if ((FFormatArgumentValue *)local_1b8.AllocatorInstance.Data != (FFormatArgumentValue *)0x0) {
    FMemory::Free(local_1b8.AllocatorInstance.Data);
  }
  if (local_130.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)
                 *(ITextData *)local_130.TextValue.field0_0x0.TypedValue.TextData.Reference + 0x10))
              ();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((pFVar15->TextFormatData).SharedReferenceCount.ReferenceController);
  pIVar4 = (pFVar13->TextData).Reference;
  if (pIVar4 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar4 + 0x10))();
  }
  FIKRigLogger::LogWarning(param_5,&local_150);
  if (local_150.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_150.TextData.Reference + 0x10))();
  }
  if (local_f0.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_f0.TextData.Reference + 0x10))();
    uVar11 = (ulonglong)local_1a8;
    pFVar26 = pFVar26 + 1;
    goto LAB_14dee89ad;
  }
  goto LAB_14dee8e48;
LAB_14dee8bd0:
  if ((this->ChainMapping).ChainMap.ArrayNum != iVar10) {
    local_res10[0] = 0;
    `TCheckedPointerIterator<FRetargetChainPair_const_,int,0>::operator!='::__l2::<lambda_1>::
    operator()(local_res10);
  }
  pFVar26 = local_198;
  pFVar7 = local_res20;
  if (pFVar23 == pFVar22) {
    local_1a0.ComparisonIndex.Value = 0;
    local_1a0.Number = 0;
    goto LAB_14dee8c12;
  }
  if (*pFVar23 == FVar3) goto LAB_14dee8bf9;
  pFVar23 = pFVar23 + 2;
  goto LAB_14dee8bd0;
LAB_14dee8bf9:
  local_1a0 = pFVar23[1];
LAB_14dee8c12:
  if (&param_1->AllBoneChains != (FRetargeterBoneChains *)0x0) {
    pFVar25 = (FResolvedBoneChain *)(param_1->AllBoneChains).SourceBoneChains.AllocatorInstance.Data
    ;
    pFVar19 = pFVar25 + (param_1->AllBoneChains).SourceBoneChains.ArrayNum;
    for (; pFVar25 != pFVar19; pFVar25 = pFVar25 + 1) {
      if (pFVar25->ChainName == local_1a0) {
        if (pFVar25 != (FResolvedBoneChain *)0x0) {
          local_190.AllChildrenOfChain.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_190.AllChildrenOfChain.ArrayNum = 0;
          local_190.AllChildrenOfChain.ArrayMax = 0;
          bVar8 = FChainStretcher::Initialize
                            (&local_190,local_198,pFVar25,pFVar21,local_res18,
                             (FRetargetSkeleton *)local_res20);
          if (!bVar8) {
            local_168 = *(FName *)(pFVar7->_padding_ + 0x18);
            ::FName::ToString(&local_168,&local_140);
            pFVar13 = FText::FromString(&local_80,&local_140);
            pFVar14 = FText::FromName(&local_70,&pFVar26->TargetChainName);
            pFVar17 = FText::AsLocalizable_Advanced_LocText
                                (&local_d0,L"StretchChainOp",L"ChainStretchOpFailedInit",
                                 L"Chain Stretch Op: failed to initialize stretcher for chain, \'{0}\', on Skeletal Mesh: \'{1}\'"
                                );
            pFVar15 = FTextFormat::FTextFormat(local_60,pFVar17,Default);
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
            if (local_190.AllChildrenOfChain.AllocatorInstance.Data !=
                (FScriptContainerElement *)0x0) {
              FMemory::Free(local_190.AllChildrenOfChain.AllocatorInstance.Data);
            }
            return false;
          }
          pFVar2 = (FChainStretcher *)(this->ChainStretchers).AllocatorInstance.Data;
          if (((pFVar2 <= &local_190) && (&local_190 < pFVar2 + (this->ChainStretchers).ArrayMax))
             && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar8)) {
            pcVar6 = (code *)swi(3);
            uVar9 = (*pcVar6)();
            return (bool)uVar9;
          }
          iVar10 = (this->ChainStretchers).ArrayNum;
          if (iVar10 == (this->ChainStretchers).ArrayMax) {
            iVar10 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x828,&(this->ChainStretchers).AllocatorInstance,
                                &(this->ChainStretchers).ArrayMax);
          }
          _Src.Data = local_190.AllChildrenOfChain.AllocatorInstance.Data;
          lVar16 = (longlong)iVar10;
          (this->ChainStretchers).ArrayNum = iVar10 + 1;
          pFVar5 = (this->ChainStretchers).AllocatorInstance.Data;
          *(undefined8 *)(pFVar5 + lVar16 * 0x28) = 0;
          lVar24 = (longlong)local_190.AllChildrenOfChain.ArrayNum;
          *(int *)(pFVar5 + lVar16 * 0x28 + 8) = local_190.AllChildrenOfChain.ArrayNum;
          pFVar5 = pFVar5 + lVar16 * 0x28;
          if (local_190.AllChildrenOfChain.ArrayNum == 0) {
            *(int *)(pFVar5 + 0xc) = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,local_190.AllChildrenOfChain.ArrayNum,0,(ForAnyElementType *)pFVar5,
                       local_190.AllChildrenOfChain.ArrayNum,(int *)(pFVar5 + 0xc));
            memcpy(*(FScriptContainerElement **)&pFVar5->field_0x0,_Src.Data,lVar24 << 2);
          }
          *(FRetargetStretchChainSettings **)&pFVar5[0x10].field_0x0 = local_190.Settings;
          *(FResolvedBoneChain **)&pFVar5[0x18].field_0x0 = local_190.SourceBoneChain;
          *(FResolvedBoneChain **)&pFVar5[0x20].field_0x0 = local_190.TargetBoneChain;
          if (local_190.AllChildrenOfChain.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
          {
            FMemory::Free(local_190.AllChildrenOfChain.AllocatorInstance.Data);
          }
          goto LAB_14dee8e48;
        }
        break;
      }
    }
  }
  pFVar13 = FText::FromName(&local_c0,&local_198->TargetChainName);
  pFVar14 = FText::AsLocalizable_Advanced_LocText
                      (&local_100,L"StretchChainOp",L"ChainStretchOpMissingSource",
                       L"Chain Stretch Op: missing source chain. Cannot stretch a target chain without a source chain, \'{0}."
                      );
  pFVar15 = FTextFormat::FTextFormat(&local_b0,pFVar14,Default);
  pFVar13 = FText::Format<FText>(&local_110,pFVar15,pFVar13);
  FIKRigLogger::LogWarning(param_5,pFVar13);
  if (local_110.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_110.TextData.Reference + 0x10))();
  }
  if (local_100.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_100.TextData.Reference + 0x10))();
    uVar11 = (ulonglong)local_1a8;
    pFVar26 = pFVar26 + 1;
    goto LAB_14dee89ad;
  }
LAB_14dee8e48:
  uVar11 = (ulonglong)local_1a8;
  pFVar26 = pFVar26 + 1;
  goto LAB_14dee89ad;
}

// Run @ 14dee8ff0

void __thiscall
FIKRetargetStretchChainOp::Run
          (FIKRetargetStretchChainOp *this,FIKRetargetProcessor *param_1,double param_2,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_3,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_4)

{
  FChainStretcher *pFVar1;
  int iVar2;
  FChainStretcher *this_00;
  undefined1 local_res8 [8];
  
  iVar2 = (this->ChainStretchers).ArrayNum;
  this_00 = (FChainStretcher *)(this->ChainStretchers).AllocatorInstance.Data;
  pFVar1 = this_00 + iVar2;
  while( true ) {
    if ((this->ChainStretchers).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FChainStretcher,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (this_00 == pFVar1) break;
    FChainStretcher::StretchChain
              (this_00,param_3,(FRetargetSkeleton *)&param_1->TargetSkeleton,param_4);
    this_00 = this_00 + 1;
  }
  return;
}

// OnAddedToStack @ 14dee90c0

void __thiscall
FIKRetargetStretchChainOp::OnAddedToStack
          (FIKRetargetStretchChainOp *this,UIKRetargeter *param_1,FIKRetargetOpBase *param_2)

{
  UIKRigDefinition *pUVar1;
  UIKRigDefinition *pUVar2;
  
  pUVar1 = UIKRetargeter::GetIKRig(param_1,Source);
  pUVar2 = UIKRetargeter::GetIKRig(param_1,Target);
  ApplyIKRigs(this,pUVar1,pUVar2);
  FRetargetChainMapping::AutoMapChains(&this->ChainMapping,Fuzzy,bForceRemap);
  return;
}

// OnAssignIKRig @ 14dee9130

void __thiscall
FIKRetargetStretchChainOp::OnAssignIKRig
          (FIKRetargetStretchChainOp *this,ERetargetSourceOrTarget param_1,UIKRigDefinition *param_2
          ,FIKRetargetOpBase *param_3)

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

// GetSettings @ 14dee9180

FIKRetargetOpSettingsBase * __thiscall
FIKRetargetStretchChainOp::GetSettings(FIKRetargetStretchChainOp *this)

{
  return (FIKRetargetOpSettingsBase *)&this->Settings;
}

// GetSettingsType @ 14dee9190

UScriptStruct * __thiscall
FIKRetargetStretchChainOp::GetSettingsType(FIKRetargetStretchChainOp *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FIKRetargetStretchChainOpSettings.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UScriptStruct_FIKRetargetStretchChainOpSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FIKRetargetStretchChainOpSettings,
                         (UObject *)pUVar1,L"IKRetargetStretchChainOpSettings");
  }
  return Z_Registration_Info_UScriptStruct_FIKRetargetStretchChainOpSettings.OuterSingleton;
}

// GetType @ 14dee91d0

UScriptStruct * __thiscall FIKRetargetStretchChainOp::GetType(FIKRetargetStretchChainOp *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FIKRetargetStretchChainOp.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UScriptStruct_FIKRetargetStretchChainOp.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FIKRetargetStretchChainOp,(UObject *)pUVar1,
                         L"IKRetargetStretchChainOp");
  }
  return Z_Registration_Info_UScriptStruct_FIKRetargetStretchChainOp.OuterSingleton;
}

// GetCustomTargetIKRig @ 14dee9210

UIKRigDefinition * __thiscall
FIKRetargetStretchChainOp::GetCustomTargetIKRig(FIKRetargetStretchChainOp *this)

{
  return (this->Settings).IKRigAsset.field0_0x0.DebugPtr;
}

// GetChainMapping @ 14dee9220

FRetargetChainMapping * __thiscall
FIKRetargetStretchChainOp::GetChainMapping(FIKRetargetStretchChainOp *this)

{
  return &this->ChainMapping;
}

// OnTargetChainRenamed @ 14dee9240

void __thiscall
FIKRetargetStretchChainOp::OnTargetChainRenamed
          (FIKRetargetStretchChainOp *this,FName param_1,FName param_2)

{
  int iVar1;
  FName *pFVar2;
  FName *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = (this->Settings).ChainsToStretch.ArrayNum;
  pFVar3 = (FName *)(this->Settings).ChainsToStretch.AllocatorInstance.Data;
  pFVar2 = pFVar3 + (longlong)iVar1 * 4;
  while( true ) {
    if ((this->Settings).ChainsToStretch.ArrayNum != iVar1) {
      `TCheckedPointerIterator<FRetargetStretchChainSettings,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar3 == pFVar2) break;
    if (*pFVar3 == param_1) {
      *pFVar3 = param_2;
    }
    pFVar3 = pFVar3 + 4;
  }
  return;
}

// OnReinitPropertyEdited @ 14dee92c0

void __thiscall
FIKRetargetStretchChainOp::OnReinitPropertyEdited
          (FIKRetargetStretchChainOp *this,FPropertyChangedEvent *param_1)

{
  ApplyIKRigs(this,(this->ChainMapping).SourceIKRig.field0_0x0.DebugPtr,
              (this->Settings).IKRigAsset.field0_0x0.DebugPtr);
  return;
}

// ~FIKRetargetStretchChainOp @ 14df1bd20

void __thiscall
FIKRetargetStretchChainOp::~FIKRetargetStretchChainOp(FIKRetargetStretchChainOp *this)

{
  FScriptContainerElement *pFVar1;
  UObject *pUVar2;
  
  DestructItems<FChainStretcher,int>
            ((FChainStretcher *)(this->ChainStretchers).AllocatorInstance.Data,
             (this->ChainStretchers).ArrayNum);
  pFVar1 = (this->ChainStretchers).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ChainMapping).ChainMap.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Settings).ChainsToStretch.AllocatorInstance.Data;
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

// ApplyIKRigs @ 14df25920

/* WARNING: Type propagation algorithm not settling */

void __thiscall
FIKRetargetStretchChainOp::ApplyIKRigs
          (FIKRetargetStretchChainOp *this,UIKRigDefinition *param_1,UIKRigDefinition *param_2)

{
  int *piVar1;
  UIKRigDefinition *pUVar2;
  code *pcVar3;
  bool bVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  ForAnyElementType FVar8;
  FScriptContainerElement *pFVar9;
  int iVar10;
  FScriptContainerElement *pFVar11;
  FScriptContainerElement *pFVar12;
  longlong lVar13;
  TArray<FRetargetStretchChainSettings,TSizedDefaultAllocator<32>_> *pTVar14;
  longlong lVar15;
  byte bVar16;
  int iVar17;
  ForAnyElementType FVar18;
  TArray<FRetargetStretchChainSettings,TSizedDefaultAllocator<32>_> *local_res18;
  FScriptContainerElement *local_res20;
  undefined1 local_58 [8];
  ForAnyElementType local_50;
  undefined8 local_48;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_2 != (UIKRigDefinition *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_2);
  }
  (this->Settings).IKRigAsset.field0_0x0.DebugPtr = param_2;
  FRetargetChainMapping::ReinitializeWithIKRigs(&this->ChainMapping,param_1,param_2);
  if ((((this->ChainMapping).SourceIKRig.field0_0x0.DebugPtr != (UIKRigDefinition *)0x0) &&
      ((this->ChainMapping).TargetIKRig.field0_0x0.DebugPtr != (UIKRigDefinition *)0x0)) &&
     ((this->ChainMapping).ChainMap.ArrayNum != 0)) {
    iVar7 = 0;
    pUVar2 = (this->Settings).IKRigAsset.field0_0x0.DebugPtr;
    local_48 = 0;
    local_50.Data = (FScriptContainerElement *)0x0;
    iVar17 = (pUVar2->RetargetDefinition).BoneChains.ArrayNum;
    pFVar9 = (pUVar2->RetargetDefinition).BoneChains.AllocatorInstance.Data;
    pFVar12 = pFVar9 + (longlong)iVar17 * 0x30;
    while( true ) {
      if ((pUVar2->RetargetDefinition).BoneChains.ArrayNum != iVar17) {
        local_res18 = (TArray<FRetargetStretchChainSettings,TSizedDefaultAllocator<32>_> *)
                      ((ulonglong)local_res18 & 0xffffffffffffff00);
        `TCheckedPointerIterator<FBoneChain_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_res18);
        iVar7 = (int)local_48;
      }
      if (pFVar9 == pFVar12) break;
      iVar6 = iVar7;
      if ((local_50.Data <= pFVar9) && (pFVar9 < local_50.Data + (longlong)local_48._4_4_ * 8)) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar6 = (int)local_48;
      }
      if (iVar6 == local_48._4_4_) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,&local_50,(int *)((longlong)&local_48 + 4));
      }
      iVar7 = iVar6 + 1;
      local_48 = CONCAT44(local_48._4_4_,iVar7);
      lVar15 = *(longlong *)pFVar9;
      pFVar9 = pFVar9 + 0x30;
      *(longlong *)(local_50.Data + (longlong)iVar6 * 8) = lVar15;
    }
    iVar17 = (this->Settings).ChainsToStretch.ArrayNum;
    lVar15 = (longlong)iVar17;
    local_res18 = &(this->Settings).ChainsToStretch;
    FVar18.Data = local_50.Data;
    if (iVar17 != 0) {
      local_res20 = (local_res18->AllocatorInstance).Data;
      iVar17 = 0;
      if (local_50.Data != local_50.Data + (longlong)iVar7 * 8) {
        FVar8.Data = local_50.Data;
        do {
          if (*(longlong *)FVar8.Data == *(longlong *)local_res20) {
            bVar16 = 1;
            goto LAB_14df25ae5;
          }
          FVar8.Data = FVar8.Data + 8;
        } while (FVar8.Data != local_50.Data + (longlong)iVar7 * 8);
      }
      bVar16 = 0;
LAB_14df25ae5:
      lVar13 = 0;
      iVar6 = 0;
      do {
        lVar13 = lVar13 + 1;
        iVar10 = iVar6 + 1;
        if (lVar13 < lVar15) {
          pFVar9 = local_res20 + lVar13 * 0x20;
          do {
            if (FVar18.Data != FVar18.Data + (longlong)iVar7 * 8) {
              pFVar12 = FVar18.Data;
              do {
                if (*(longlong *)pFVar12 == *(longlong *)pFVar9) {
                  bVar5 = 1;
                  goto LAB_14df25b34;
                }
                pFVar12 = pFVar12 + 8;
              } while (pFVar12 != FVar18.Data + (longlong)iVar7 * 8);
            }
            bVar5 = 0;
LAB_14df25b34:
            if (bVar16 != bVar5) break;
            iVar10 = iVar10 + 1;
            lVar13 = lVar13 + 1;
            pFVar9 = pFVar9 + 0x20;
          } while (lVar13 < lVar15);
        }
        if (bVar16 != 0) {
          if (iVar17 != iVar6) {
            memmove(local_res20 + (longlong)iVar17 * 0x20,local_res20 + (longlong)iVar6 * 0x20,
                    (longlong)(iVar10 - iVar6) << 5);
            FVar18.Data = local_50.Data;
            iVar7 = (int)local_48;
          }
          iVar17 = iVar17 + (iVar10 - iVar6);
        }
        bVar16 = bVar16 ^ 1;
        iVar6 = iVar10;
      } while (lVar13 < lVar15);
      local_res18->ArrayNum = iVar17;
    }
    pFVar9 = FVar18.Data + (longlong)iVar7 * 8;
    pTVar14 = local_res18;
    iVar17 = iVar7;
LAB_14df25ba5:
    if (iVar17 != iVar7) {
      `TCheckedPointerIterator<FName,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_res20)
      ;
    }
    if (FVar18.Data != pFVar9) {
      pFVar12 = (pTVar14->AllocatorInstance).Data;
      lVar15 = *(longlong *)FVar18.Data;
      iVar17 = (this->Settings).ChainsToStretch.ArrayNum;
      pFVar11 = pFVar12 + (longlong)iVar17 * 0x20;
      while( true ) {
        if ((this->Settings).ChainsToStretch.ArrayNum != iVar17) {
          `TCheckedPointerIterator<FRetargetStretchChainSettings,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_58);
        }
        pTVar14 = local_res18;
        if (pFVar12 == pFVar11) {
          piVar1 = &(this->Settings).ChainsToStretch.ArrayMax;
          iVar17 = (this->Settings).ChainsToStretch.ArrayNum;
          if (iVar17 == *piVar1) {
            iVar17 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x820,&local_res18->AllocatorInstance,piVar1);
          }
          pTVar14->ArrayNum = iVar17 + 1;
          pFVar12 = (pTVar14->AllocatorInstance).Data;
          lVar13 = (longlong)iVar17 * 0x20;
          FVar18.Data = FVar18.Data + 8;
          *(longlong *)(pFVar12 + lVar13) = lVar15;
          pFVar12[lVar13 + 8] = (FScriptContainerElement)0x0;
          *(undefined8 *)(pFVar12 + lVar13 + 0x10) = 0;
          *(undefined8 *)(pFVar12 + lVar13 + 0x18) = 0x3ff0000000000000;
          iVar17 = (int)local_48;
          goto LAB_14df25ba5;
        }
        if (*(longlong *)pFVar12 == lVar15) break;
        pFVar12 = pFVar12 + 0x20;
      }
      FVar18.Data = FVar18.Data + 8;
      iVar17 = (int)local_48;
      goto LAB_14df25ba5;
    }
    if (local_50.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_50.Data);
    }
  }
  return;
}

