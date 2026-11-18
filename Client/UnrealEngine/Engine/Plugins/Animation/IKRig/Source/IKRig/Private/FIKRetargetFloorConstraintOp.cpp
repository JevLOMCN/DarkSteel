// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IKRig
// Functions: 12

// StaticStruct @ 14defc220

UScriptStruct * __cdecl FIKRetargetFloorConstraintOp::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FIKRetargetFloorConstraintOp.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UScriptStruct_FIKRetargetFloorConstraintOp.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FIKRetargetFloorConstraintOp,(UObject *)pUVar1,
                         L"IKRetargetFloorConstraintOp");
  }
  return Z_Registration_Info_UScriptStruct_FIKRetargetFloorConstraintOp.OuterSingleton;
}

// Initialize @ 14defc260

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __thiscall
FIKRetargetFloorConstraintOp::Initialize
          (FIKRetargetFloorConstraintOp *this,FIKRetargetProcessor *param_1,
          FRetargetSkeleton *param_2,FTargetSkeleton *param_3,FIKRetargetOpBase *param_4,
          FIKRigLogger *param_5)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  FName FVar4;
  ITextData *pIVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  FIKRetargetOpBase *pFVar8;
  bool bVar9;
  undefined1 uVar10;
  uint uVar11;
  int iVar12;
  FText *pFVar13;
  FText *pFVar14;
  FTextFormat *pFVar15;
  ulonglong uVar16;
  TArray<FResolvedBoneChain,TSizedDefaultAllocator<32>_> *pTVar17;
  longlong lVar18;
  uint uVar19;
  uint uVar20;
  UIKRigDefinition *pUVar21;
  FName *pFVar22;
  FRetargeterBoneChains *pFVar23;
  FName *pFVar24;
  FName *pFVar25;
  FIKRigLogger *this_00;
  undefined1 local_208 [8];
  FRetargeterBoneChains *local_200;
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_1f8;
  uint local_1e8;
  FName local_1e0;
  FName local_1d8;
  FName *local_1d0;
  FName local_1c8;
  FNameEntryId FStack_1c0;
  uint uStack_1bc;
  double local_1b8;
  FName *pFStack_1b0;
  FName local_1a8;
  FName *local_1a0;
  FTextFormat local_198;
  FText local_188;
  FFormatArgumentValue local_178;
  FText local_158;
  FText local_148;
  FText local_138;
  FText local_128;
  FText local_118;
  FText local_108;
  FText local_f8;
  undefined8 local_e8;
  undefined8 uStack_e0;
  double local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  double local_c0;
  FText local_b8;
  FTextFormat local_a8;
  FText local_98;
  FTextFormat local_88;
  FText local_78;
  FTextFormat local_68;
  FText local_58;
  FTextFormat local_48 [2];
  
  pFVar8 = param_4;
  *(undefined1 *)((longlong)&this->_padding_ + 5) = 0;
  if (*(longlong *)&param_4[1].ParentOpName.Number == 0) {
    local_1a8 = *(FName *)((longlong)&this->_padding_ + 4);
    pFVar13 = FText::FromName(&local_b8,&local_1a8);
    pFVar14 = FText::AsLocalizable_Advanced_LocText
                        (&local_148,L"FloorConstraintOp",L"MissingIKRig",
                         L"{0}, is missing an IK rig. No chains can be retargeted.");
    pFVar15 = FTextFormat::FTextFormat(&local_a8,pFVar14,Default);
    pFVar13 = FText::Format<FText>(&local_158,pFVar15,pFVar13);
    FIKRigLogger::LogWarning(param_5,pFVar13);
    if (local_158.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_158.TextData.Reference + 0x10))();
    }
    if (local_148.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_148.TextData.Reference + 0x10))();
    }
    return false;
  }
  (this->FloorConstraints).ArrayNum = 0;
  if ((this->FloorConstraints).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,&(this->FloorConstraints).AllocatorInstance,0,
               &(this->FloorConstraints).ArrayMax);
  }
  local_1e8 = (this->Settings).ChainsToAffect.ArrayNum;
  uVar16 = (ulonglong)(int)local_1e8;
  local_200 = &param_1->AllBoneChains;
  pFVar22 = (FName *)(this->Settings).ChainsToAffect.AllocatorInstance.Data;
  local_1a0 = pFVar22 + uVar16 * 4;
  pFVar23 = local_200;
  this_00 = param_5;
LAB_14defc3ba:
  do {
    pFVar24 = local_1a0;
    local_1d0 = pFVar22;
    if ((this->Settings).ChainsToAffect.ArrayNum != (int)uVar16) {
      param_4._0_1_ = 0;
      `TCheckedPointerIterator<FFloorConstraintChainSettings,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&param_4);
    }
    if (pFVar22 == pFVar24) {
      *(undefined1 *)((longlong)&this->_padding_ + 5) = 1;
      return true;
    }
    pUVar21 = *(UIKRigDefinition **)&pFVar8[1].ParentOpName.Number;
    FVar4 = *pFVar22;
    if (pUVar21 == (UIKRigDefinition *)0x0) {
      pUVar21 = pFVar23->DefaultTargetIKRig;
    }
    local_1d8 = FVar4;
    pTVar17 = TMapBase<UIKRigDefinition_const_*,TArray<FResolvedBoneChain,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UIKRigDefinition_const_*,TArray<FResolvedBoneChain,TSizedDefaultAllocator<32>_>,0>_>
              ::Find((TMapBase<UIKRigDefinition_const_*,TArray<FResolvedBoneChain,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UIKRigDefinition_const_*,TArray<FResolvedBoneChain,TSizedDefaultAllocator<32>_>,0>_>
                      *)&pFVar23->TargetBoneChains,pUVar21);
    if (pTVar17 != (TArray<FResolvedBoneChain,TSizedDefaultAllocator<32>_> *)0x0) {
      pFVar22 = (FName *)(pTVar17->AllocatorInstance).Data;
      pFVar24 = pFVar22 + (longlong)pTVar17->ArrayNum * 0x1e;
      for (; pFVar22 != pFVar24; pFVar22 = pFVar22 + 0x1e) {
        if (*pFVar22 == FVar4) {
          if (pFVar22 != (FName *)0x0) {
            if (pFVar22[3] != (FName)0x0) {
              uVar3 = pFVar8[3].Name.Number;
              pFVar24 = *(FName **)&pFVar8[3].bIsEnabled;
              pFVar25 = pFVar24 + (longlong)(int)uVar3 * 2;
              goto LAB_14defc684;
            }
            pFVar13 = FText::FromName(&local_98,&local_1d8);
            pFVar14 = FText::AsLocalizable_Advanced_LocText
                                (&local_128,L"FloorConstraintOp",L"FloorConstraintIKNotFound",
                                 L"Floor Constraint: target chain has no IK Goal, \'{0}.");
            pFVar15 = FTextFormat::FTextFormat(&local_88,pFVar14,Default);
            pFVar13 = FText::Format<FText>(&local_138,pFVar15,pFVar13);
            FIKRigLogger::LogWarning(this_00,pFVar13);
            if (local_138.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
            }
            if (local_128.TextData.Reference == (ITextData *)0x0) goto LAB_14defc780;
            (**(code **)((longlong)*local_128.TextData.Reference + 0x10))();
            pFVar22 = local_1d0 + 4;
            uVar16 = (ulonglong)local_1e8;
            goto LAB_14defc3ba;
          }
          break;
        }
      }
    }
    pFVar13 = FText::FromName(&local_58,&local_1d8);
    pFVar14 = FText::AsLocalizable_Advanced_LocText
                        (&local_f8,L"FloorConstraintOp",L"FloorConstraintChainNotFound",
                         L"Floor Constraint: target chain not found in IK Rig, \'{0}.");
    pFVar15 = FTextFormat::FTextFormat(local_48,pFVar14,Default);
    local_178.Type = Text;
    FText::FText((FText *)&local_178.TextValue,pFVar13);
    if ((local_178.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
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
    local_1f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1f8.ArrayNum = 1;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,1,0,&local_1f8.AllocatorInstance,1,&local_1f8.ArrayMax);
    ConstructItems<FFormatArgumentValue,FFormatArgumentValue,int>
              (local_1f8.AllocatorInstance.Data,&local_178,1);
    local_198.TextFormatData.Object = (pFVar15->TextFormatData).Object;
    local_198.TextFormatData.SharedReferenceCount.ReferenceController =
         (pFVar15->TextFormatData).SharedReferenceCount.ReferenceController;
    if (local_198.TextFormatData.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_198.TextFormatData.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_198.TextFormatData.SharedReferenceCount.ReferenceController)->
                 SharedReferenceCount + 1);
      UNLOCK();
    }
    FText::Format(&local_188,&local_198,&local_1f8);
    DestructItems<FFormatArgumentValue,int>
              ((FFormatArgumentValue *)local_1f8.AllocatorInstance.Data,local_1f8.ArrayNum);
    if ((FFormatArgumentValue *)local_1f8.AllocatorInstance.Data != (FFormatArgumentValue *)0x0) {
      FMemory::Free(local_1f8.AllocatorInstance.Data);
    }
    if (local_178.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)
                   *(ITextData *)local_178.TextValue.field0_0x0.TypedValue.TextData.Reference + 0x10
                  ))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((pFVar15->TextFormatData).SharedReferenceCount.ReferenceController);
    pIVar5 = (pFVar13->TextData).Reference;
    if (pIVar5 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar5 + 0x10))();
    }
    FIKRigLogger::LogWarning(this_00,&local_188);
    if (local_188.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_188.TextData.Reference + 0x10))();
    }
    if (local_f8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_f8.TextData.Reference + 0x10))();
    }
    pFVar22 = local_1d0 + 4;
    uVar16 = (ulonglong)local_1e8;
    pFVar23 = local_200;
  } while( true );
LAB_14defc684:
  if (pFVar8[3].Name.Number != uVar3) {
    local_208[0] = 0;
    `TCheckedPointerIterator<FRetargetChainPair_const_,int,0>::operator!='::__l2::<lambda_1>::
    operator()(local_208);
  }
  pFVar23 = local_200;
  if (pFVar24 == pFVar25) {
    local_1e0.ComparisonIndex.Value = 0;
    local_1e0.Number = 0;
    goto LAB_14defc6c2;
  }
  if (*pFVar24 == FVar4) goto LAB_14defc6a9;
  pFVar24 = pFVar24 + 2;
  goto LAB_14defc684;
LAB_14defc6a9:
  local_1e0 = pFVar24[1];
LAB_14defc6c2:
  if (local_200 != (FRetargeterBoneChains *)0x0) {
    pFVar24 = (FName *)(local_200->SourceBoneChains).AllocatorInstance.Data;
    pFVar25 = pFVar24 + (longlong)(local_200->SourceBoneChains).ArrayNum * 0x1e;
    for (; pFVar24 != pFVar25; pFVar24 = pFVar24 + 0x1e) {
      if (*pFVar24 == local_1e0) {
        if (pFVar24 != (FName *)0x0) {
          local_1b8 = 0.0;
          FStack_1c0.Value = 0xffffffff;
          pFStack_1b0 = (FName *)0x0;
          local_1c8 = pFVar22[3];
          uVar3 = pFVar24[0xd].ComparisonIndex.Value;
          uVar19 = uVar3 - 1;
          uVar11 = 0;
          if ((int)uVar19 < (int)uVar3) {
            uVar11 = ~uVar19 >> 0x1f;
          }
          if ((uVar11 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar7 = (code *)swi(3);
            uVar10 = (*pcVar7)();
            return (bool)uVar10;
          }
          FStack_1c0.Value =
               *(uint *)((longlong)pFVar24[0xc] + -4 +
                        (longlong)(int)pFVar24[0xd].ComparisonIndex.Value * 4);
          pFStack_1b0 = local_1d0;
          uVar3 = pFVar24[5].ComparisonIndex.Value;
          uVar19 = uVar3 - 1;
          uVar11 = 0;
          if ((int)uVar19 < (int)uVar3) {
            uVar11 = ~uVar19 >> 0x1f;
          }
          if ((uVar11 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar7 = (code *)swi(3);
            uVar10 = (*pcVar7)();
            return (bool)uVar10;
          }
          uVar3 = pFVar22[5].ComparisonIndex.Value;
          FVar4 = pFVar24[4];
          uVar11 = pFVar24[5].ComparisonIndex.Value;
          uVar20 = uVar3 - 1;
          uVar19 = 0;
          if ((int)uVar20 < (int)uVar3) {
            uVar19 = ~uVar20 >> 0x1f;
          }
          if ((uVar19 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar7 = (code *)swi(3);
            uVar10 = (*pcVar7)();
            return (bool)uVar10;
          }
          pFVar24 = (FName *)(this->FloorConstraints).AllocatorInstance.Data;
          piVar1 = &(this->FloorConstraints).ArrayMax;
          lVar18 = (longlong)(int)pFVar22[5].ComparisonIndex.Value * 0x60;
          puVar2 = (undefined8 *)(lVar18 + -0x40 + (longlong)pFVar22[4]);
          local_e8 = *puVar2;
          uStack_e0 = puVar2[1];
          local_d8 = *(double *)(lVar18 + -0x30 + (longlong)pFVar22[4]);
          lVar18 = ((longlong)(int)uVar11 + -1) * 0x60;
          local_c0 = *(double *)(lVar18 + 0x30 + (longlong)FVar4);
          puVar2 = (undefined8 *)(lVar18 + 0x20 + (longlong)FVar4);
          local_d0 = *puVar2;
          uStack_c8 = puVar2[1];
          local_1b8 = local_d8 - local_c0;
          if (((pFVar24 <= &local_1c8) && (&local_1c8 < pFVar24 + (longlong)*piVar1 * 4)) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar9)) {
            pcVar7 = (code *)swi(3);
            uVar10 = (*pcVar7)();
            return (bool)uVar10;
          }
          iVar12 = (this->FloorConstraints).ArrayNum;
          if (iVar12 == *piVar1) {
            iVar12 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x820,&(this->FloorConstraints).AllocatorInstance,piVar1);
          }
          FVar4.Number = uStack_1bc;
          FVar4.ComparisonIndex.Value = FStack_1c0.Value;
          (this->FloorConstraints).ArrayNum = iVar12 + 1;
          pFVar6 = (this->FloorConstraints).AllocatorInstance.Data;
          pFVar22 = local_1d0 + 4;
          pFVar24 = (FName *)(pFVar6 + (longlong)iVar12 * 0x20);
          *pFVar24 = local_1c8;
          pFVar24[1] = FVar4;
          pFVar6 = pFVar6 + (longlong)iVar12 * 0x20 + 0x10;
          *(double *)pFVar6 = local_1b8;
          *(FName **)(pFVar6 + 8) = pFStack_1b0;
          uVar16 = (ulonglong)local_1e8;
          pFVar23 = local_200;
          this_00 = param_5;
          goto LAB_14defc3ba;
        }
        break;
      }
    }
  }
  pFVar13 = FText::FromName(&local_78,&local_1d8);
  pFVar14 = FText::AsLocalizable_Advanced_LocText
                      (&local_108,L"FloorConstraintOp",L"FloorConstraintChainNotMapped",
                       L"Floor Constraint: found IK chain that was not mapped to a source chain, \'{0}."
                      );
  pFVar15 = FTextFormat::FTextFormat(&local_68,pFVar14,Default);
  pFVar13 = FText::Format<FText>(&local_118,pFVar15,pFVar13);
  this_00 = param_5;
  FIKRigLogger::LogWarning(param_5,pFVar13);
  if (local_118.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_118.TextData.Reference + 0x10))();
  }
  if (local_108.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_108.TextData.Reference + 0x10))();
  }
LAB_14defc780:
  pFVar22 = local_1d0 + 4;
  uVar16 = (ulonglong)local_1e8;
  goto LAB_14defc3ba;
}

// Run @ 14defca40

void __thiscall
FIKRetargetFloorConstraintOp::Run
          (FIKRetargetFloorConstraintOp *this,FIKRetargetProcessor *param_1,double param_2,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_3,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_4)

{
  FScriptContainerElement *pFVar1;
  undefined8 uVar2;
  int iVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  FScriptContainerElement *pFVar12;
  FScriptContainerElement *pFVar13;
  uint uVar14;
  uint uVar15;
  double dVar16;
  double dVar17;
  float fVar18;
  float fVar19;
  undefined1 local_res8 [8];
  
  uVar8 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar7 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  dVar6 = __real_3e45798ee2308c3a;
  dVar5 = __real_3ff0000000000000;
  iVar3 = (this->FloorConstraints).ArrayNum;
  pFVar12 = (this->FloorConstraints).AllocatorInstance.Data;
  pFVar13 = pFVar12 + (longlong)iVar3 * 0x20;
LAB_14defcab6:
  do {
    if ((this->FloorConstraints).ArrayNum != iVar3) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FFloorConstraint,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar12 == pFVar13) {
      return;
    }
    if ((*(char *)(*(longlong *)(pFVar12 + 0x18) + 8) != '\0') &&
       (uVar2 = *(undefined8 *)(*(longlong *)(pFVar12 + 0x18) + 0x10), uVar14 = (uint)uVar2 & uVar7,
       uVar15 = (uint)((ulonglong)uVar2 >> 0x20) & uVar8,
       dVar6 <= (double)CONCAT44(uVar15,uVar14) && (double)CONCAT44(uVar15,uVar14) != dVar6)) {
      pFVar11 = (param_1->GoalContainer).Goals.AllocatorInstance.Data;
      pFVar10 = pFVar11 + (longlong)(param_1->GoalContainer).Goals.ArrayNum * 0xb0;
      for (; pFVar11 != pFVar10; pFVar11 = pFVar11 + 0xb0) {
        if (*(longlong *)pFVar11 == *(longlong *)pFVar12) {
          dVar16 = (this->Settings).HeightFalloffDistance;
          uVar14 = *(uint *)(pFVar12 + 8);
          if (dVar16 <= 0.0) {
            dVar16 = 0.0;
          }
          fVar19 = (float)(this->Settings).HeightFalloffOffset;
          uVar15 = 0;
          if ((int)uVar14 < param_3->ArrayNum) {
            uVar15 = ~uVar14 >> 0x1f;
          }
          if ((uVar15 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pFVar10 = (param_3->AllocatorInstance).Data + (longlong)(int)uVar14 * 0x60 + 0x30;
          fVar18 = (float)(double)CONCAT44(*(uint *)(pFVar10 + 4) & uVar8,*(uint *)pFVar10 & uVar7);
          if ((float)(dVar16 + (double)fVar19) <= fVar18) goto LAB_14defcb59;
          dVar17 = dVar5;
          if (fVar19 <= fVar18) {
            dVar16 = (double)((float)(dVar16 + (double)fVar19) - fVar19);
            if (dVar16 <= dVar5) {
              dVar16 = dVar5;
            }
            dVar17 = dVar5 - (double)(fVar18 - fVar19) / dVar16;
          }
          pFVar10 = pFVar12 + 0x18;
          pFVar1 = pFVar12 + 0x10;
          pFVar12 = pFVar12 + 0x20;
          *(double *)(pFVar11 + 0x38) =
               ((*(double *)(*(longlong *)pFVar10 + 0x18) * *(double *)pFVar1 + (double)fVar18) -
               *(double *)(pFVar11 + 0x38)) * dVar17 * *(double *)(*(longlong *)pFVar10 + 0x10) +
               *(double *)(pFVar11 + 0x38);
          goto LAB_14defcab6;
        }
      }
      bVar9 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_4494057885076029302>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\IKRig\\Source\\IKRig\\Private\\Retargeter\\RetargetOps\\FloorConstraintOp.cpp"
                         ,0x8a,"Goal");
      if (bVar9) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
LAB_14defcb59:
    pFVar12 = pFVar12 + 0x20;
  } while( true );
}

// OnAddedToStack @ 14defccb0

void __thiscall
FIKRetargetFloorConstraintOp::OnAddedToStack
          (FIKRetargetFloorConstraintOp *this,UIKRetargeter *param_1,FIKRetargetOpBase *param_2)

{
  IKRetargetOpUtils::SynchronizeChainSettingsWithIKRig<FFloorConstraintChainSettings>
            (&(this->Settings).ChainsToAffect,param_2,false,true);
  return;
}

// OnAssignIKRig @ 14defccd0

void __thiscall
FIKRetargetFloorConstraintOp::OnAssignIKRig
          (FIKRetargetFloorConstraintOp *this,ERetargetSourceOrTarget param_1,
          UIKRigDefinition *param_2,FIKRetargetOpBase *param_3)

{
  IKRetargetOpUtils::SynchronizeChainSettingsWithIKRig<FFloorConstraintChainSettings>
            (&(this->Settings).ChainsToAffect,param_3,false,true);
  return;
}

// GetSettings @ 14defccf0

FIKRetargetOpSettingsBase * __thiscall
FIKRetargetFloorConstraintOp::GetSettings(FIKRetargetFloorConstraintOp *this)

{
  return (FIKRetargetOpSettingsBase *)&this->Settings;
}

// SetSettings @ 14defcd00

void __thiscall
FIKRetargetFloorConstraintOp::SetSettings
          (FIKRetargetFloorConstraintOp *this,FIKRetargetOpSettingsBase *param_1)

{
  if (param_1 != (FIKRetargetOpSettingsBase *)0x0) {
    FIKRetargetFloorConstraintOpSettings::operator=
              (&this->Settings,(FIKRetargetFloorConstraintOpSettings *)param_1);
    return;
  }
  return;
}

// GetSettingsType @ 14defcd20

UScriptStruct * __thiscall
FIKRetargetFloorConstraintOp::GetSettingsType(FIKRetargetFloorConstraintOp *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FIKRetargetFloorConstraintOpSettings.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UScriptStruct_FIKRetargetFloorConstraintOpSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FIKRetargetFloorConstraintOpSettings,
                         (UObject *)pUVar1,L"IKRetargetFloorConstraintOpSettings");
  }
  return Z_Registration_Info_UScriptStruct_FIKRetargetFloorConstraintOpSettings.OuterSingleton;
}

// GetType @ 14defcd60

UScriptStruct * __thiscall FIKRetargetFloorConstraintOp::GetType(FIKRetargetFloorConstraintOp *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FIKRetargetFloorConstraintOp.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UScriptStruct_FIKRetargetFloorConstraintOp.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FIKRetargetFloorConstraintOp,(UObject *)pUVar1,
                         L"IKRetargetFloorConstraintOp");
  }
  return Z_Registration_Info_UScriptStruct_FIKRetargetFloorConstraintOp.OuterSingleton;
}

// GetParentOpType @ 14defcda0

UScriptStruct * __thiscall
FIKRetargetFloorConstraintOp::GetParentOpType(FIKRetargetFloorConstraintOp *this)

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

// OnTargetChainRenamed @ 14defcde0

void __thiscall
FIKRetargetFloorConstraintOp::OnTargetChainRenamed
          (FIKRetargetFloorConstraintOp *this,FName param_1,FName param_2)

{
  int iVar1;
  FName *pFVar2;
  FName *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = (this->Settings).ChainsToAffect.ArrayNum;
  pFVar3 = (FName *)(this->Settings).ChainsToAffect.AllocatorInstance.Data;
  pFVar2 = pFVar3 + (longlong)iVar1 * 4;
  while( true ) {
    if ((this->Settings).ChainsToAffect.ArrayNum != iVar1) {
      `TCheckedPointerIterator<FFloorConstraintChainSettings,int,0>::operator!='::__l2::<lambda_1>::
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

// OnParentReinitPropertyEdited @ 14defce60

void __thiscall
FIKRetargetFloorConstraintOp::OnParentReinitPropertyEdited
          (FIKRetargetFloorConstraintOp *this,FIKRetargetOpBase *param_1,
          FPropertyChangedEvent *param_2)

{
  IKRetargetOpUtils::SynchronizeChainSettingsWithIKRig<FFloorConstraintChainSettings>
            (&(this->Settings).ChainsToAffect,param_1,false,true);
  return;
}

