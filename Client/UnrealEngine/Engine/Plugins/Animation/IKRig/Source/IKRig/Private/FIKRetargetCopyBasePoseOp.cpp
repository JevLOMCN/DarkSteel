// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IKRig
// Functions: 9

// StaticStruct @ 14dee41e0

UScriptStruct * __cdecl FIKRetargetCopyBasePoseOp::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FIKRetargetCopyBasePoseOp.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UScriptStruct_FIKRetargetCopyBasePoseOp.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FIKRetargetCopyBasePoseOp,(UObject *)pUVar1,
                         L"IKRetargetCopyBasePoseOp");
  }
  return Z_Registration_Info_UScriptStruct_FIKRetargetCopyBasePoseOp.OuterSingleton;
}

// Initialize @ 14dee42c0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __thiscall
FIKRetargetCopyBasePoseOp::Initialize
          (FIKRetargetCopyBasePoseOp *this,FIKRetargetProcessor *param_1,FRetargetSkeleton *param_2,
          FTargetSkeleton *param_3,FIKRetargetOpBase *param_4,FIKRigLogger *param_5)

{
  TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *this_00;
  int *piVar1;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar2;
  FName *pFVar3;
  longlong *plVar4;
  undefined1 *puVar5;
  code *pcVar6;
  bool bVar7;
  undefined1 uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  FText *pFVar12;
  FText *pFVar13;
  FText *pFVar14;
  FTextFormat *pFVar15;
  longlong *plVar16;
  undefined1 *puVar17;
  ForAnyElementType FVar18;
  FScriptContainerElement *pFVar19;
  longlong lVar20;
  uint uVar21;
  FName *pFVar22;
  FScriptContainerElement *pFVar23;
  uint uVar24;
  undefined1 local_158 [4];
  int local_154;
  uint local_150;
  uint local_14c;
  TArray<int,TSizedDefaultAllocator<32>_> local_148;
  int local_138 [2];
  FName local_130;
  undefined1 local_128 [12];
  FName local_11c;
  FString local_110;
  FString local_100;
  int *local_f0;
  uint *local_e8;
  FText local_e0;
  FText local_d0;
  FText local_c0;
  FText local_b0;
  FText local_a0;
  FText local_90;
  FTextFormat local_80;
  FText local_70;
  FText local_60;
  FTextFormat local_50;
  
  local_130 = (this->Settings).CopyFromStart.BoneName;
  *(undefined1 *)((longlong)&this->_padding_ + 5) = 1;
  if (local_130 == (FName)0x0) {
    uVar21 = 0;
  }
  else {
    pFVar3 = (FName *)(param_2->BoneNames).AllocatorInstance.Data;
    for (pFVar22 = pFVar3; pFVar22 != pFVar3 + (param_2->BoneNames).ArrayNum; pFVar22 = pFVar22 + 1)
    {
      if (*pFVar22 == local_130) {
        uVar21 = (uint)((longlong)pFVar22 - (longlong)pFVar3 >> 3);
        goto LAB_14dee4328;
      }
    }
    uVar21 = 0xffffffff;
  }
LAB_14dee4328:
  if (local_130 == (FName)0x0) {
    uVar24 = 0;
  }
  else {
    pFVar3 = (FName *)param_3->_padding_;
    for (pFVar22 = pFVar3; pFVar22 != pFVar3 + (int)param_3->_padding_; pFVar22 = pFVar22 + 1) {
      if (*pFVar22 == local_130) {
        uVar24 = (uint)((longlong)pFVar22 - (longlong)pFVar3 >> 3);
        goto LAB_14dee4369;
      }
    }
    uVar24 = 0xffffffff;
  }
LAB_14dee4369:
  if (local_130 != (FName)0x0) {
    if (uVar21 == 0xffffffff) {
      local_128._4_8_ = param_2->SkeletalMesh->_padding_;
      ::FName::ToString((FName *)(local_128 + 4),&local_110);
      pFVar12 = FText::FromString(&local_a0,&local_110);
      pFVar13 = FText::FromName(&local_90,&local_130);
      pFVar14 = FText::AsLocalizable_Advanced_LocText
                          (&local_d0,L"CopyBasePoseOp",L"MissingSourceRootToCopyFrom",
                           L"The root bone to copy from, {0} was not found in the source mesh {1}");
      pFVar15 = FTextFormat::FTextFormat(&local_80,pFVar14,Default);
      pFVar12 = FText::Format<FText,FText>(&local_e0,pFVar15,pFVar13,pFVar12);
      FIKRigLogger::LogWarning(param_5,pFVar12);
      if (local_e0.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_e0.TextData.Reference + 0x10))();
      }
      if (local_d0.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_d0.TextData.Reference + 0x10))();
      }
      if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_110.Data.AllocatorInstance.Data);
      }
    }
    if (uVar24 == 0xffffffff) {
      local_11c = (FName)param_2->SkeletalMesh->_padding_;
      ::FName::ToString(&local_11c,&local_100);
      pFVar12 = FText::FromString(&local_70,&local_100);
      pFVar13 = FText::FromName(&local_60,&local_130);
      pFVar14 = FText::AsLocalizable_Advanced_LocText
                          (&local_b0,L"CopyBasePoseOp",L"MissingTargetRootToCopyFrom",
                           L"The root bone to copy from, {0} was not found in the target mesh {1}");
      pFVar15 = FTextFormat::FTextFormat(&local_50,pFVar14,Default);
      pFVar12 = FText::Format<FText,FText>(&local_c0,pFVar15,pFVar13,pFVar12);
      FIKRigLogger::LogWarning(param_5,pFVar12);
      if (local_c0.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_c0.TextData.Reference + 0x10))();
      }
      if (local_b0.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_b0.TextData.Reference + 0x10))();
      }
      if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_100.Data.AllocatorInstance.Data);
      }
    }
  }
  local_148.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_148.ArrayNum = 0;
  local_148.ArrayMax = 0;
  iVar11 = (this->Settings).BonesToExclude.ArrayNum;
  pFVar19 = (this->Settings).BonesToExclude.AllocatorInstance.Data;
  pFVar23 = pFVar19 + (longlong)iVar11 * 0x10;
  iVar9 = 0;
LAB_14dee4513:
  do {
    if ((this->Settings).BonesToExclude.ArrayNum != iVar11) {
      local_158[0] = 0;
      `TCheckedPointerIterator<FBoneReference,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_158);
      iVar9 = local_148.ArrayNum;
    }
    if (pFVar19 == pFVar23) {
      this_00 = &this->SourceToTargetBoneIndexMap;
      TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::Reset
                ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                  *)this_00);
      local_14c = 0;
      if ((param_2->BoneNames).ArrayNum < 1) goto LAB_14dee4796;
      break;
    }
    plVar4 = (longlong *)param_3->_padding_;
    for (plVar16 = plVar4; plVar16 != plVar4 + (int)param_3->_padding_; plVar16 = plVar16 + 1) {
      if (*plVar16 == *(longlong *)pFVar19) {
        local_154 = (int)((longlong)plVar16 - (longlong)plVar4 >> 3);
        if (local_154 == -1) goto LAB_14dee4566;
        if ((local_148.AllocatorInstance.Data <= (FScriptContainerElement *)&local_154) &&
           ((FScriptContainerElement *)&local_154 <
            local_148.AllocatorInstance.Data + (longlong)local_148.ArrayMax * 4)) {
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar7) {
            pcVar6 = (code *)swi(3);
            uVar8 = (*pcVar6)();
            return (bool)uVar8;
          }
          iVar9 = local_148.ArrayNum;
        }
        if (iVar9 == local_148.ArrayMax) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&local_148.AllocatorInstance,&local_148.ArrayMax);
        }
        local_148.ArrayNum = iVar9 + 1;
        *(int *)(local_148.AllocatorInstance.Data + (longlong)iVar9 * 4) = local_154;
        FRetargetSkeleton::GetChildrenIndicesRecursive
                  ((FRetargetSkeleton *)param_3,local_154,&local_148);
        pFVar19 = pFVar19 + 0x10;
        iVar9 = local_148.ArrayNum;
        goto LAB_14dee4513;
      }
    }
    local_154 = -1;
LAB_14dee4566:
    pFVar19 = pFVar19 + 0x10;
  } while( true );
LAB_14dee4673:
  if ((uVar21 == 0xffffffff) || (local_14c == uVar21)) {
LAB_14dee46fe:
    lVar20 = (longlong)(int)local_14c;
    uVar10 = 0;
    if ((int)local_14c < (param_2->BoneNames).ArrayNum) {
      uVar10 = ~local_14c >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar6 = (code *)swi(3);
      uVar8 = (*pcVar6)();
      return (bool)uVar8;
    }
    plVar4 = (longlong *)param_3->_padding_;
    for (plVar16 = plVar4; plVar16 != plVar4 + (int)param_3->_padding_; plVar16 = plVar16 + 1) {
      if (*plVar16 == *(longlong *)((param_2->BoneNames).AllocatorInstance.Data + lVar20 * 8)) {
        local_138[0] = (int)((longlong)plVar16 - (longlong)plVar4 >> 3);
        if (local_138[0] == -1) goto LAB_14dee477e;
        FVar18.Data = local_148.AllocatorInstance.Data;
        goto joined_r0x00014dee4943;
      }
    }
    local_138[0] = -1;
  }
  else {
    for (uVar10 = FRetargetSkeleton::GetParentIndex(param_2,local_14c); uVar10 != 0xffffffff;
        uVar10 = *(uint *)((param_2->ParentIndices).AllocatorInstance.Data +
                          (longlong)(int)uVar10 * 4)) {
      if (uVar10 == uVar21) goto LAB_14dee46fe;
      if (((int)uVar10 < 0) || ((param_2->ParentIndices).ArrayNum <= (int)uVar10)) break;
      if (((int)uVar10 < 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        uVar8 = (*pcVar6)();
        return (bool)uVar8;
      }
    }
  }
  goto LAB_14dee477e;
joined_r0x00014dee4943:
  if (FVar18.Data == local_148.AllocatorInstance.Data + (longlong)local_148.ArrayNum * 4)
  goto LAB_14dee4956;
  if (*(int *)FVar18.Data == local_138[0]) goto LAB_14dee477e;
  FVar18.Data = FVar18.Data + 4;
  goto joined_r0x00014dee4943;
LAB_14dee4956:
  local_f0 = local_138;
  local_e8 = &local_14c;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<int_const_&,int_&>_>
            ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *)
             this_00,(TPairInitializer<int_const_&,int_&> *)local_128,(bool *)&local_f0);
LAB_14dee477e:
  local_14c = local_14c + 1;
  if ((param_2->BoneNames).ArrayNum <= (int)local_14c) goto LAB_14dee4796;
  goto LAB_14dee4673;
LAB_14dee4796:
  pTVar2 = &this->ChildrenToUpdate;
  piVar1 = &(this->ChildrenToUpdate).ArrayMax;
  (this->ChildrenToUpdate).ArrayNum = 0;
  if ((this->ChildrenToUpdate).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&pTVar2->AllocatorInstance,0,piVar1);
  }
  iVar11 = FRetargetSkeleton::GetCachedEndOfBranchIndex((FRetargetSkeleton *)param_3,uVar24);
  if (iVar11 != -1) {
joined_r0x00014dee47f0:
    local_150 = uVar24 + 1;
    if ((int)local_150 <= iVar11) {
      if (*(int *)&(this->SourceToTargetBoneIndexMap).field_0x8 !=
          *(int *)&(this->SourceToTargetBoneIndexMap).field_0x34) {
        puVar5 = *(undefined1 **)&(this->SourceToTargetBoneIndexMap).field_0x40;
        puVar17 = &(this->SourceToTargetBoneIndexMap).field_0x38;
        if (puVar5 != (undefined1 *)0x0) {
          puVar17 = puVar5;
        }
        iVar9 = *(int *)(puVar17 +
                        (ulonglong)
                        (*(int *)&(this->SourceToTargetBoneIndexMap).field_0x48 - 1U & local_150) *
                        4);
        if (iVar9 != -1) {
          do {
            uVar24 = local_150;
            if (*(uint *)(*(longlong *)&this_00->field_0x0 + (longlong)iVar9 * 0x10) == local_150)
            goto joined_r0x00014dee47f0;
            iVar9 = *(int *)(*(longlong *)&this_00->field_0x0 + 8 + (longlong)iVar9 * 0x10);
          } while (iVar9 != -1);
        }
      }
      pFVar19 = (pTVar2->AllocatorInstance).Data;
      if (((pFVar19 <= (FScriptContainerElement *)&local_150) &&
          ((FScriptContainerElement *)&local_150 < pFVar19 + (longlong)*piVar1 * 4)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar6 = (code *)swi(3);
        uVar8 = (*pcVar6)();
        return (bool)uVar8;
      }
      iVar9 = (this->ChildrenToUpdate).ArrayNum;
      if (iVar9 == *piVar1) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&pTVar2->AllocatorInstance,piVar1);
      }
      (this->ChildrenToUpdate).ArrayNum = iVar9 + 1;
      *(uint *)((pTVar2->AllocatorInstance).Data + (longlong)iVar9 * 4) = local_150;
      uVar24 = local_150;
      goto joined_r0x00014dee47f0;
    }
  }
  if (local_148.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_148.AllocatorInstance.Data);
  }
  return true;
}

// Run @ 14dee4990

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FIKRetargetCopyBasePoseOp::Run
          (FIKRetargetCopyBasePoseOp *this,FIKRetargetProcessor *param_1,double param_2,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_3,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_4)

{
  FScriptContainerElement *pFVar1;
  FName *pFVar2;
  code *pcVar3;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTVar4;
  FIKRetargetProcessor *pFVar5;
  TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *pTVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  bool bVar19;
  uint uVar20;
  uint uVar21;
  longlong lVar22;
  TTransform<double> *pTVar23;
  ulonglong uVar24;
  int iVar25;
  int iVar26;
  FName *pFVar27;
  uint uVar28;
  longlong lVar29;
  uint uVar30;
  undefined1 *puVar31;
  uint *puVar32;
  TBitArray<FDefaultBitArrayAllocator> *pTVar33;
  FScriptContainerElement *pFVar34;
  undefined1 auStack_418 [32];
  longlong local_3f8;
  longlong local_3f0;
  undefined1 local_3e8;
  undefined1 local_3e7 [3];
  uint local_3e4;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *local_3e0;
  FIKRetargetCopyBasePoseOp *local_3d8;
  TBitArray<FDefaultBitArrayAllocator> *local_3d0;
  TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *local_3c8;
  int iStack_3c0;
  uint uStack_3bc;
  undefined1 *local_3b8;
  undefined4 uStack_3b0;
  int iStack_3ac;
  int local_3a8;
  int iStack_3a4;
  int iStack_3a0;
  undefined4 uStack_39c;
  int local_398;
  int local_394;
  TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *local_390;
  FIKRetargetProcessor *local_388;
  TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *local_380;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_378;
  undefined8 uStack_358;
  TTransform<double> local_348;
  TTransform<double> local_2e8;
  TTransform<double> local_288;
  TTransform<double> local_228;
  TTransform<double> local_1c8;
  TTransform<double> local_168;
  TTransform<double> local_108;
  ulonglong local_a8;
  
  local_a8 = __security_cookie.value ^ (ulonglong)auStack_418;
  if ((this->Settings).bCopyBasePose == false) {
    return;
  }
  iStack_3c0 = 0;
  local_3a8 = 0;
  local_3c8 = &this->SourceToTargetBoneIndexMap;
  pTVar33 = (TBitArray<FDefaultBitArrayAllocator> *)&(this->SourceToTargetBoneIndexMap).field_0x10;
  iVar26 = *(int *)&(this->SourceToTargetBoneIndexMap).field_0x28;
  uStack_3bc = 1;
  iStack_3ac = 0;
  if (iVar26 != 0) {
    puVar32 = *(uint **)&(this->SourceToTargetBoneIndexMap).field_0x20;
    if (puVar32 == (uint *)0x0) {
      puVar32 = (uint *)pTVar33;
    }
    uVar30 = *puVar32;
    while (uVar30 == 0) {
      lVar22 = (longlong)iStack_3c0;
      local_3a8 = local_3a8 + 0x20;
      iStack_3c0 = iStack_3c0 + 1;
      iStack_3ac = iVar26;
      if ((int)(iVar26 + -1 + (iVar26 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_3c0) goto LAB_14dee4a7d;
      uVar30 = puVar32[lVar22 + 1];
    }
    uStack_3bc = -uVar30 & uVar30;
    uVar24 = (ulonglong)uStack_3bc * 2 + 1;
    lVar22 = 0x3f;
    if (uVar24 != 0) {
      for (; uVar24 >> lVar22 == 0; lVar22 = lVar22 + -1) {
      }
    }
    local_398 = (int)lVar22;
    iStack_3ac = local_398 + -1 + local_3a8;
    if (iVar26 < iStack_3ac) {
      iStack_3ac = iVar26;
    }
  }
LAB_14dee4a7d:
  iStack_3a0 = *(int *)&(this->SourceToTargetBoneIndexMap).field_0x8 -
               *(int *)&(this->SourceToTargetBoneIndexMap).field_0x34;
  uVar30 = *(uint *)&(this->SourceToTargetBoneIndexMap).field_0x28;
  uStack_3b0 = 0xffffffff;
  TStack_378._padding_ = CONCAT44(uStack_3bc,iStack_3c0);
  uVar28 = uVar30 & 0xffffffe0;
  TStack_378.CurrentBitIndex = iStack_3ac;
  TStack_378.UnvisitedBitMask = 0xffffffff;
  iVar25 = (int)uVar30 >> 5;
  TStack_378._28_4_ = iStack_3ac;
  TStack_378.BaseBitIndex = local_3a8;
  uStack_358 = CONCAT44(uStack_39c,iStack_3a0);
  local_3e4 = uVar30;
  local_3e0 = param_3;
  local_3d8 = this;
  local_3d0 = pTVar33;
  local_3b8 = (undefined1 *)pTVar33;
  iStack_3a4 = iStack_3ac;
  local_390 = local_3c8;
  local_388 = param_1;
  local_380 = local_3c8;
  TStack_378.Array = pTVar33;
  if ((((int)uVar30 < 0) || (iVar26 < (int)uVar30)) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar19)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar21 = *(uint *)&(this->SourceToTargetBoneIndexMap).field_0x28;
  if (uVar30 != uVar21) {
    puVar31 = *(undefined1 **)&(this->SourceToTargetBoneIndexMap).field_0x20;
    if (puVar31 == (undefined1 *)0x0) {
      puVar31 = (undefined1 *)pTVar33;
    }
    uVar30 = -1 << ((byte)uVar30 & 0x1f) & *(uint *)(puVar31 + (longlong)iVar25 * 4);
    while (uVar30 == 0) {
      lVar22 = (longlong)iVar25;
      uVar28 = uVar28 + 0x20;
      iVar25 = iVar25 + 1;
      uVar30 = uVar21;
      local_3e4 = uVar21;
      if ((int)((uVar21 - 1) + ((int)(uVar21 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar25)
      goto LAB_14dee4bd0;
      uVar30 = *(uint *)(puVar31 + lVar22 * 4 + 4);
    }
    uVar24 = (ulonglong)(-uVar30 & uVar30) * 2 + 1;
    lVar22 = 0x3f;
    if (uVar24 != 0) {
      for (; uVar24 >> lVar22 == 0; lVar22 = lVar22 + -1) {
      }
    }
    local_394 = (int)lVar22;
    uVar30 = local_394 + -1 + uVar28;
    local_3e4 = uVar30;
    if ((int)uVar21 < (int)uVar30) {
      uVar30 = uVar21;
      local_3e4 = uVar21;
    }
  }
LAB_14dee4bd0:
  do {
    pTVar6 = local_380;
    if (*(int *)&local_380->field_0x8 - *(int *)&local_380->field_0x34 != (int)uStack_358) {
      local_3e8 = 0;
      `TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_3e8);
    }
    if (((TStack_378.CurrentBitIndex == uVar30) && (TStack_378.Array == pTVar33)) &&
       (pTVar6 == local_390)) {
      local_3e4 = (local_3d8->ChildrenToUpdate).ArrayNum;
      uVar24 = (ulonglong)(int)local_3e4;
      pFVar34 = (local_3d8->ChildrenToUpdate).AllocatorInstance.Data;
      local_3d0 = (TBitArray<FDefaultBitArrayAllocator> *)(pFVar34 + uVar24 * 4);
      break;
    }
    lVar22 = *(longlong *)pTVar6;
    uVar30 = *(uint *)(lVar22 + (longlong)TStack_378.CurrentBitIndex * 0x10);
    lVar29 = (longlong)(int)uVar30;
    uVar28 = *(uint *)(lVar22 + 4 + (longlong)TStack_378.CurrentBitIndex * 0x10);
    lVar22 = (longlong)(int)uVar28;
    if (((int)uVar30 < 0) ||
       (iVar26 = (int)(param_1->TargetSkeleton)._padding_, iVar26 <= (int)uVar30)) {
LAB_14dee4cc8:
      pTVar23 = &UE::Math::TTransform<double>::Identity;
    }
    else {
      if (((int)uVar30 < 0) &&
         (local_3f8 = lVar29, local_3f0 = (longlong)iVar26,
         bVar19 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar19)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar21 = *(uint *)((param_1->TargetSkeleton)._padding_ + lVar29 * 4);
      if (uVar21 == 0xffffffff) goto LAB_14dee4cc8;
      uVar20 = 0;
      if ((int)uVar21 < param_4->ArrayNum) {
        uVar20 = ~uVar21 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (local_3f8 = (longlong)(int)uVar21, local_3f0 = (longlong)param_4->ArrayNum,
         bVar19 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar19)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pTVar23 = (TTransform<double> *)
                ((param_4->AllocatorInstance).Data + (longlong)(int)uVar21 * 0x60);
    }
    pFVar5 = local_388;
    local_228.Rotation.XY.m128d_f64[0] = (pTVar23->Rotation).XY.m128d_f64[0];
    local_228.Rotation.XY.m128d_f64[1] = (pTVar23->Rotation).XY.m128d_f64[1];
    local_228.Rotation.ZW.m128d_f64[0] = (pTVar23->Rotation).ZW.m128d_f64[0];
    local_228.Rotation.ZW.m128d_f64[1] = (pTVar23->Rotation).ZW.m128d_f64[1];
    local_228.Translation.XY.m128d_f64[0] = (pTVar23->Translation).XY.m128d_f64[0];
    local_228.Translation.XY.m128d_f64[1] = (pTVar23->Translation).XY.m128d_f64[1];
    local_228.Translation.ZW.m128d_f64[0] = (pTVar23->Translation).ZW.m128d_f64[0];
    local_228.Translation.ZW.m128d_f64[1] = (pTVar23->Translation).ZW.m128d_f64[1];
    local_228.Scale3D.XY.m128d_f64[0] = (pTVar23->Scale3D).XY.m128d_f64[0];
    local_228.Scale3D.XY.m128d_f64[1] = (pTVar23->Scale3D).XY.m128d_f64[1];
    local_228.Scale3D.ZW.m128d_f64[0] = (pTVar23->Scale3D).ZW.m128d_f64[0];
    local_228.Scale3D.ZW.m128d_f64[1] = (pTVar23->Scale3D).ZW.m128d_f64[1];
    if (((int)uVar28 < 0) ||
       (iVar26 = (local_388->SourceSkeleton).ParentIndices.ArrayNum, iVar26 <= (int)uVar28)) {
LAB_14dee4dd7:
      pTVar23 = &UE::Math::TTransform<double>::Identity;
    }
    else {
      if (((int)uVar28 < 0) &&
         (local_3f8 = lVar22, local_3f0 = (longlong)iVar26,
         bVar19 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar19)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar21 = *(uint *)((pFVar5->SourceSkeleton).ParentIndices.AllocatorInstance.Data + lVar22 * 4)
      ;
      if (uVar21 == 0xffffffff) goto LAB_14dee4dd7;
      uVar20 = 0;
      if ((int)uVar21 < local_3e0->ArrayNum) {
        uVar20 = ~uVar21 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (local_3f8 = (longlong)(int)uVar21, local_3f0 = (longlong)local_3e0->ArrayNum,
         bVar19 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar19)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pTVar23 = (TTransform<double> *)
                ((local_3e0->AllocatorInstance).Data + (longlong)(int)uVar21 * 0x60);
    }
    pTVar4 = local_3e0;
    local_288.Rotation.XY.m128d_f64[0] = (pTVar23->Rotation).XY.m128d_f64[0];
    local_288.Rotation.XY.m128d_f64[1] = (pTVar23->Rotation).XY.m128d_f64[1];
    local_288.Rotation.ZW.m128d_f64[0] = (pTVar23->Rotation).ZW.m128d_f64[0];
    local_288.Rotation.ZW.m128d_f64[1] = (pTVar23->Rotation).ZW.m128d_f64[1];
    local_288.Translation.XY.m128d_f64[0] = (pTVar23->Translation).XY.m128d_f64[0];
    local_288.Translation.XY.m128d_f64[1] = (pTVar23->Translation).XY.m128d_f64[1];
    local_288.Translation.ZW.m128d_f64[0] = (pTVar23->Translation).ZW.m128d_f64[0];
    local_288.Translation.ZW.m128d_f64[1] = (pTVar23->Translation).ZW.m128d_f64[1];
    local_288.Scale3D.XY.m128d_f64[0] = (pTVar23->Scale3D).XY.m128d_f64[0];
    local_288.Scale3D.XY.m128d_f64[1] = (pTVar23->Scale3D).XY.m128d_f64[1];
    local_288.Scale3D.ZW.m128d_f64[0] = (pTVar23->Scale3D).ZW.m128d_f64[0];
    local_288.Scale3D.ZW.m128d_f64[1] = (pTVar23->Scale3D).ZW.m128d_f64[1];
    uVar21 = 0;
    if ((int)uVar28 < local_3e0->ArrayNum) {
      uVar21 = ~uVar28 >> 0x1f;
    }
    if ((uVar21 == 0) &&
       (local_3f8 = lVar22, local_3f0 = (longlong)local_3e0->ArrayNum,
       bVar19 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar19)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    UE::Math::TTransform<double>::GetRelativeTransform
              ((TTransform<double> *)((pTVar4->AllocatorInstance).Data + lVar22 * 0x60),&local_108,
               &local_288);
    local_348.Rotation.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
    local_348.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    local_348.Rotation.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
    local_348.Rotation.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
    local_348.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
    local_348.Rotation.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
    local_348.Translation.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
    local_348.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    local_348.Translation.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
    local_348.Translation.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
    local_348.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    local_348.Translation.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
    local_348.Scale3D.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
    local_348.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    local_348.Scale3D.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
    local_348.Scale3D.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
    local_348.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    local_348.Scale3D.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
    UE::Math::TTransform<double>::Multiply(&local_348,&local_108,&local_228);
    dVar7 = local_348.Rotation.XY.m128d_f64[0];
    dVar8 = local_348.Rotation.XY.m128d_f64[1];
    dVar9 = local_348.Rotation.ZW.m128d_f64[0];
    dVar10 = local_348.Rotation.ZW.m128d_f64[1];
    dVar11 = local_348.Translation.XY.m128d_f64[0];
    dVar12 = local_348.Translation.XY.m128d_f64[1];
    dVar13 = local_348.Translation.ZW.m128d_f64[0];
    dVar14 = local_348.Translation.ZW.m128d_f64[1];
    dVar15 = local_348.Scale3D.XY.m128d_f64[0];
    dVar16 = local_348.Scale3D.XY.m128d_f64[1];
    dVar17 = local_348.Scale3D.ZW.m128d_f64[0];
    dVar18 = local_348.Scale3D.ZW.m128d_f64[1];
    uVar28 = 0;
    if ((int)uVar30 < param_4->ArrayNum) {
      uVar28 = ~uVar30 >> 0x1f;
    }
    if ((uVar28 == 0) &&
       (local_3f8 = lVar29, local_3f0 = (longlong)param_4->ArrayNum,
       bVar19 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar19)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar34 = (param_4->AllocatorInstance).Data;
    lVar29 = lVar29 * 0x60;
    *(double *)(pFVar34 + lVar29) = dVar7;
    *(double *)(pFVar34 + lVar29 + 8) = dVar8;
    *(double *)(pFVar34 + lVar29 + 0x10) = dVar9;
    *(double *)(pFVar34 + lVar29 + 0x10 + 8) = dVar10;
    *(double *)(pFVar34 + lVar29 + 0x20) = dVar11;
    *(double *)(pFVar34 + lVar29 + 0x20 + 8) = dVar12;
    *(double *)(pFVar34 + lVar29 + 0x30) = dVar13;
    *(double *)(pFVar34 + lVar29 + 0x30 + 8) = dVar14;
    *(double *)(pFVar34 + lVar29 + 0x40) = dVar15;
    *(double *)(pFVar34 + lVar29 + 0x40 + 8) = dVar16;
    *(double *)(pFVar34 + lVar29 + 0x50) = dVar17;
    *(double *)(pFVar34 + lVar29 + 0x50 + 8) = dVar18;
    TStack_378.UnvisitedBitMask = TStack_378.UnvisitedBitMask & ~TStack_378._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_378);
    pTVar33 = local_3d0;
    uVar30 = local_3e4;
  } while( true );
LAB_14dee4fb2:
  pTVar33 = local_3d0;
  if ((local_3d8->ChildrenToUpdate).ArrayNum != (int)uVar24) {
    local_3e7[0] = 0;
    `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_3e7);
  }
  if ((TBitArray<FDefaultBitArrayAllocator> *)pFVar34 == pTVar33) {
    pFVar2 = (FName *)(param_1->TargetSkeleton)._padding_;
    pFVar27 = pFVar2;
    goto joined_r0x00014dee52d1;
  }
  uVar30 = *(uint *)pFVar34;
  lVar22 = (longlong)(int)uVar30;
  if (((int)uVar30 < 0) ||
     (iVar26 = (int)(param_1->TargetSkeleton)._padding_, iVar26 <= (int)uVar30)) {
LAB_14dee5093:
    pTVar23 = &UE::Math::TTransform<double>::Identity;
  }
  else {
    if (((int)uVar30 < 0) &&
       (local_3f8 = lVar22, local_3f0 = (longlong)iVar26,
       bVar19 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar19)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    uVar28 = *(uint *)((param_1->TargetSkeleton)._padding_ + lVar22 * 4);
    if (uVar28 == 0xffffffff) goto LAB_14dee5093;
    uVar21 = 0;
    if ((int)uVar28 < param_4->ArrayNum) {
      uVar21 = ~uVar28 >> 0x1f;
    }
    if ((uVar21 == 0) &&
       (local_3f8 = (longlong)(int)uVar28, local_3f0 = (longlong)param_4->ArrayNum,
       bVar19 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar19)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pTVar23 = (TTransform<double> *)
              ((param_4->AllocatorInstance).Data + (longlong)(int)uVar28 * 0x60);
  }
  local_1c8.Rotation.XY.m128d_f64[0] = (pTVar23->Rotation).XY.m128d_f64[0];
  local_1c8.Rotation.XY.m128d_f64[1] = (pTVar23->Rotation).XY.m128d_f64[1];
  local_1c8.Rotation.ZW.m128d_f64[0] = (pTVar23->Rotation).ZW.m128d_f64[0];
  local_1c8.Rotation.ZW.m128d_f64[1] = (pTVar23->Rotation).ZW.m128d_f64[1];
  local_1c8.Translation.XY.m128d_f64[0] = (pTVar23->Translation).XY.m128d_f64[0];
  local_1c8.Translation.XY.m128d_f64[1] = (pTVar23->Translation).XY.m128d_f64[1];
  local_1c8.Translation.ZW.m128d_f64[0] = (pTVar23->Translation).ZW.m128d_f64[0];
  local_1c8.Translation.ZW.m128d_f64[1] = (pTVar23->Translation).ZW.m128d_f64[1];
  local_1c8.Scale3D.XY.m128d_f64[0] = (pTVar23->Scale3D).XY.m128d_f64[0];
  local_1c8.Scale3D.XY.m128d_f64[1] = (pTVar23->Scale3D).XY.m128d_f64[1];
  local_1c8.Scale3D.ZW.m128d_f64[0] = (pTVar23->Scale3D).ZW.m128d_f64[0];
  local_1c8.Scale3D.ZW.m128d_f64[1] = (pTVar23->Scale3D).ZW.m128d_f64[1];
  iVar26 = (param_1->TargetSkeleton).InputLocalPose.ArrayNum;
  uVar28 = 0;
  if ((int)uVar30 < iVar26) {
    uVar28 = ~uVar30 >> 0x1f;
  }
  if ((uVar28 == 0) &&
     (local_3f8 = lVar22, local_3f0 = (longlong)iVar26,
     bVar19 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar19)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar1 = (param_1->TargetSkeleton).InputLocalPose.AllocatorInstance.Data;
  lVar29 = lVar22 * 0x60;
  local_168.Rotation.XY.m128d_f64[0] = *(double *)(pFVar1 + lVar29);
  local_168.Rotation.XY.m128d_f64[1] = *(double *)(pFVar1 + lVar29 + 8);
  local_168.Rotation.ZW.m128d_f64[0] = *(double *)(pFVar1 + lVar29 + 0x10);
  local_168.Rotation.ZW.m128d_f64[1] = *(double *)(pFVar1 + lVar29 + 0x10 + 8);
  local_168.Translation.XY.m128d_f64[0] = *(double *)(pFVar1 + lVar29 + 0x20);
  local_168.Translation.XY.m128d_f64[1] = *(double *)(pFVar1 + lVar29 + 0x20 + 8);
  local_168.Translation.ZW.m128d_f64[0] = *(double *)(pFVar1 + lVar29 + 0x30);
  local_168.Translation.ZW.m128d_f64[1] = *(double *)(pFVar1 + lVar29 + 0x30 + 8);
  local_168.Scale3D.XY.m128d_f64[0] = *(double *)(pFVar1 + lVar29 + 0x40);
  local_168.Scale3D.XY.m128d_f64[1] = *(double *)(pFVar1 + lVar29 + 0x40 + 8);
  local_168.Scale3D.ZW.m128d_f64[0] = *(double *)(pFVar1 + lVar29 + 0x50);
  local_168.Scale3D.ZW.m128d_f64[1] = *(double *)(pFVar1 + lVar29 + 0x50 + 8);
  local_2e8.Rotation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  local_2e8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_2e8.Rotation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_2e8.Rotation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  local_2e8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_2e8.Rotation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_2e8.Translation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_2e8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_2e8.Translation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_2e8.Translation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  local_2e8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_2e8.Translation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  local_2e8.Scale3D.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_2e8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_2e8.Scale3D.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_2e8.Scale3D.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  local_2e8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_2e8.Scale3D.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  UE::Math::TTransform<double>::Multiply(&local_2e8,&local_168,&local_1c8);
  dVar7 = local_2e8.Rotation.XY.m128d_f64[0];
  dVar8 = local_2e8.Rotation.XY.m128d_f64[1];
  dVar9 = local_2e8.Rotation.ZW.m128d_f64[0];
  dVar10 = local_2e8.Rotation.ZW.m128d_f64[1];
  dVar11 = local_2e8.Translation.XY.m128d_f64[0];
  dVar12 = local_2e8.Translation.XY.m128d_f64[1];
  uVar28 = 0;
  if ((int)uVar30 < param_4->ArrayNum) {
    uVar28 = ~uVar30 >> 0x1f;
  }
  dVar13 = local_2e8.Translation.ZW.m128d_f64[0];
  dVar14 = local_2e8.Translation.ZW.m128d_f64[1];
  dVar15 = local_2e8.Scale3D.XY.m128d_f64[0];
  dVar16 = local_2e8.Scale3D.XY.m128d_f64[1];
  dVar17 = local_2e8.Scale3D.ZW.m128d_f64[0];
  dVar18 = local_2e8.Scale3D.ZW.m128d_f64[1];
  if ((uVar28 == 0) &&
     (local_3f8 = lVar22, local_3f0 = (longlong)param_4->ArrayNum,
     bVar19 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar19)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar1 = (param_4->AllocatorInstance).Data;
  pFVar34 = pFVar34 + 4;
  uVar24 = (ulonglong)local_3e4;
  *(double *)(pFVar1 + lVar29) = dVar7;
  *(double *)(pFVar1 + lVar29 + 8) = dVar8;
  *(double *)(pFVar1 + lVar29 + 0x10) = dVar9;
  *(double *)(pFVar1 + lVar29 + 0x10 + 8) = dVar10;
  *(double *)(pFVar1 + lVar29 + 0x20) = dVar11;
  *(double *)(pFVar1 + lVar29 + 0x20 + 8) = dVar12;
  *(double *)(pFVar1 + lVar29 + 0x30) = dVar13;
  *(double *)(pFVar1 + lVar29 + 0x30 + 8) = dVar14;
  *(double *)(pFVar1 + lVar29 + 0x40) = dVar15;
  *(double *)(pFVar1 + lVar29 + 0x40 + 8) = dVar16;
  *(double *)(pFVar1 + lVar29 + 0x50) = dVar17;
  *(double *)(pFVar1 + lVar29 + 0x50 + 8) = dVar18;
  goto LAB_14dee4fb2;
joined_r0x00014dee52d1:
  if (pFVar27 == pFVar2 + (int)(param_1->TargetSkeleton)._padding_) {
LAB_14dee52e1:
    iVar26 = -1;
LAB_14dee52e6:
    FRetargetSkeleton::UpdateLocalTransformsBelowBone
              ((FRetargetSkeleton *)&param_1->TargetSkeleton,iVar26,
               &(param_1->TargetSkeleton).InputLocalPose,param_4);
    return;
  }
  if (*pFVar27 == (local_3d8->Settings).CopyFromStart.BoneName) {
    iVar26 = (int)((longlong)pFVar27 - (longlong)pFVar2 >> 3);
    if ((-1 < iVar26) && (iVar25 = (int)(param_1->TargetSkeleton)._padding_, iVar26 < iVar25)) {
      if (iVar26 < 0) {
        local_3f8 = (longlong)iVar26;
        local_3f0 = (longlong)iVar25;
        bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar19) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      iVar26 = *(int *)((param_1->TargetSkeleton)._padding_ + (longlong)iVar26 * 4);
      goto LAB_14dee52e6;
    }
    goto LAB_14dee52e1;
  }
  pFVar27 = pFVar27 + 1;
  goto joined_r0x00014dee52d1;
}

// GetSettings @ 14dee5390

FIKRetargetOpSettingsBase * __thiscall
FIKRetargetCopyBasePoseOp::GetSettings(FIKRetargetCopyBasePoseOp *this)

{
  return (FIKRetargetOpSettingsBase *)&this->Settings;
}

// GetSettingsType @ 14dee53a0

UScriptStruct * __thiscall
FIKRetargetCopyBasePoseOp::GetSettingsType(FIKRetargetCopyBasePoseOp *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FIKRetargetCopyBasePoseOpSettings.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UScriptStruct_FIKRetargetCopyBasePoseOpSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FIKRetargetCopyBasePoseOpSettings,
                         (UObject *)pUVar1,L"IKRetargetCopyBasePoseOpSettings");
  }
  return Z_Registration_Info_UScriptStruct_FIKRetargetCopyBasePoseOpSettings.OuterSingleton;
}

// GetType @ 14dee53e0

UScriptStruct * __thiscall FIKRetargetCopyBasePoseOp::GetType(FIKRetargetCopyBasePoseOp *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FIKRetargetCopyBasePoseOp.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UScriptStruct_FIKRetargetCopyBasePoseOp.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FIKRetargetCopyBasePoseOp,(UObject *)pUVar1,
                         L"IKRetargetCopyBasePoseOp");
  }
  return Z_Registration_Info_UScriptStruct_FIKRetargetCopyBasePoseOp.OuterSingleton;
}

// IsSingleton @ 14dee5420

bool __thiscall FIKRetargetCopyBasePoseOp::IsSingleton(FIKRetargetCopyBasePoseOp *this)

{
  return true;
}

// FIKRetargetCopyBasePoseOp @ 14df16050

FIKRetargetCopyBasePoseOp * __thiscall
FIKRetargetCopyBasePoseOp::FIKRetargetCopyBasePoseOp(FIKRetargetCopyBasePoseOp *this)

{
  undefined1 *puVar1;
  
  *(undefined1 *)&this->_padding_ = 1;
  this->_padding_ = (longlong)&___7FIKRetargetCopyBasePoseOp__6B_;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0;
  (this->Settings)._padding_ = (longlong)&___7FIKRetargetCopyBasePoseOpSettings__6B_;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0;
  *(undefined2 *)((longlong)&this->_padding_ + 4) = 1;
  *(undefined4 *)&(this->Settings)._padding_ = 0xffffffff;
  *(undefined1 *)((longlong)&(this->Settings)._padding_ + 4) = 1;
  (this->Settings)._padding_ = 0;
  (this->Settings).bCopyBasePose = true;
  (this->Settings).CopyFromStart.BoneName.ComparisonIndex = 0;
  (this->Settings).CopyFromStart.BoneName.Number = 0;
  puVar1 = &(this->Settings).CopyFromStart.field_0x8;
  (this->Settings).CopyFromStart.BoneIndex = -1;
  (this->Settings).CopyFromStart.bUseSkeletonIndex = 0;
  (this->Settings).CopyFromStart.CachedCompactPoseIndex = (FCompactPoseBoneIndex)0xffffffff;
  (this->Settings).BonesToExclude.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Settings).BonesToExclude.ArrayNum = 0;
  (this->Settings).BonesToExclude.ArrayMax = 0;
  (this->Settings).CopyBasePoseRoot_DEPRECATED.ComparisonIndex = 0;
  (this->Settings).CopyBasePoseRoot_DEPRECATED.Number = 0;
  *(undefined8 *)&this->SourceToTargetBoneIndexMap = 0;
  *(undefined8 *)&(this->SourceToTargetBoneIndexMap).field_0x8 = 0;
  *(undefined8 *)&(this->SourceToTargetBoneIndexMap).field_0x20 = 0;
  *(undefined4 *)&(this->SourceToTargetBoneIndexMap).field_0x28 = 0;
  *(undefined4 *)&(this->SourceToTargetBoneIndexMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->SourceToTargetBoneIndexMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SourceToTargetBoneIndexMap).field_0x34 = 0;
  *(undefined8 *)&(this->SourceToTargetBoneIndexMap).field_0x40 = 0;
  *(undefined4 *)&(this->SourceToTargetBoneIndexMap).field_0x48 = 0;
  (this->ChildrenToUpdate).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChildrenToUpdate).ArrayNum = 0;
  (this->ChildrenToUpdate).ArrayMax = 0;
  return this;
}

// ~FIKRetargetCopyBasePoseOp @ 14df1b9d0

void __thiscall
FIKRetargetCopyBasePoseOp::~FIKRetargetCopyBasePoseOp(FIKRetargetCopyBasePoseOp *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  UObject *pUVar3;
  
  pFVar1 = (this->ChildrenToUpdate).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->SourceToTargetBoneIndexMap).field_0x48 = 0;
  pvVar2 = *(void **)&(this->SourceToTargetBoneIndexMap).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->SourceToTargetBoneIndexMap);
  pFVar1 = (this->Settings).BonesToExclude.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  (this->Settings)._padding_ = (longlong)&___7FIKRetargetOpSettingsBase__6B_;
  pUVar3 = (UObject *)(this->Settings)._padding_;
  if (pUVar3 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar3);
    (this->Settings)._padding_ = 0;
  }
  this->_padding_ = (longlong)&___7FIKRetargetOpBase__6B_;
  return;
}

