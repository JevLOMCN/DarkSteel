// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IKRig
// Functions: 8

// operator() @ 14df1f9e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`FRetargeterBoneChains::Initialize'::__l2::<lambda_1>::operator()
          (void *this,FRetargetSkeleton *param_1,
          TArray<FBoneChain,TSizedDefaultAllocator<32>_> *param_2,FIKRigLogger *param_3,
          TArray<FResolvedBoneChain,TSizedDefaultAllocator<32>_> *param_4)

{
  int iVar1;
  FResolvedBoneChain *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FBoneChain *pFVar6;
  FBoneChain *pFVar7;
  undefined1 auStack_188 [32];
  FResolvedBoneChain *local_168;
  FResolvedBoneChain *local_160;
  longlong local_158;
  longlong local_150;
  undefined8 local_148;
  undefined1 local_138 [16];
  FResolvedBoneChain local_128;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_188;
  iVar1 = param_2->ArrayNum;
  pFVar7 = (FBoneChain *)(param_2->AllocatorInstance).Data;
  pFVar6 = pFVar7 + iVar1;
  while( true ) {
    if (param_2->ArrayNum != iVar1) {
      local_138[0] = 0;
      `TCheckedPointerIterator<FBoneChain_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_138);
    }
    if (pFVar7 == pFVar6) break;
    FResolvedBoneChain::FResolvedBoneChain(&local_128,pFVar7,param_1,param_3);
    FResolvedBoneChain::GetWarnings(&local_128,param_1,param_3);
    if ((((local_128.bFoundStartBone != false) && (local_128.bFoundEndBone != false)) &&
        (local_128.bEndIsStartOrChildOfStart != false)) &&
       ((local_128.BoneIndices.ArrayNum == local_128.RefPoseGlobalTransforms.ArrayNum &&
        (local_128.BoneIndices.ArrayNum == local_128.RefPoseLocalTransforms.ArrayNum)))) {
      pFVar2 = (FResolvedBoneChain *)(param_4->AllocatorInstance).Data;
      if ((pFVar2 <= &local_128) && (&local_128 < pFVar2 + param_4->ArrayMax)) {
        local_150 = (longlong)param_4->ArrayNum;
        local_148 = 0xf0;
        local_168 = &local_128;
        local_160 = pFVar2;
        local_158 = (longlong)param_4->ArrayMax;
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
      }
      iVar5 = param_4->ArrayNum;
      if (iVar5 == param_4->ArrayMax) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x10f0,&param_4->AllocatorInstance,&param_4->ArrayMax);
      }
      param_4->ArrayNum = iVar5 + 1;
      FResolvedBoneChain::FResolvedBoneChain
                ((FResolvedBoneChain *)((param_4->AllocatorInstance).Data + (longlong)iVar5 * 0xf0),
                 &local_128);
    }
    if (local_128.BoneIndices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_128.BoneIndices.AllocatorInstance.Data);
    }
    if (local_128.Params.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_128.Params.AllocatorInstance.Data);
    }
    if (local_128.CurrentLocalTransforms.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_128.CurrentLocalTransforms.AllocatorInstance.Data);
    }
    if (local_128.RefPoseLocalTransforms.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_128.RefPoseLocalTransforms.AllocatorInstance.Data);
    }
    if (local_128.RefPoseGlobalTransforms.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
    {
      FMemory::Free(local_128.RefPoseGlobalTransforms.AllocatorInstance.Data);
    }
    pFVar7 = pFVar7 + 1;
  }
  return;
}

// GetAllResolvedTargetBoneChains @ 14df34e30

TMap<UIKRigDefinition_const_*,TArray<FResolvedBoneChain,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UIKRigDefinition_const_*,TArray<FResolvedBoneChain,TSizedDefaultAllocator<32>_>,0>_>
* __thiscall FRetargeterBoneChains::GetAllResolvedTargetBoneChains(FRetargeterBoneChains *this)

{
  return &this->TargetBoneChains;
}

// GetChainsThatContainBone @ 14df37130

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> * __thiscall
FRetargeterBoneChains::GetChainsThatContainBone
          (FRetargeterBoneChains *this,
          TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *__return_storage_ptr__,
          int param_1,ERetargetSourceOrTarget param_2)

{
  undefined1 *puVar1;
  int *piVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  code *pcVar6;
  TMap<UIKRigDefinition_const_*,TArray<FResolvedBoneChain,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UIKRigDefinition_const_*,TArray<FResolvedBoneChain,TSizedDefaultAllocator<32>_>,0>_>
  *pTVar7;
  bool bVar8;
  longlong lVar9;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *pTVar10;
  int *piVar11;
  undefined1 *puVar12;
  int iVar13;
  FScriptContainerElement *pFVar14;
  bool *pbVar15;
  uint uVar16;
  FScriptContainerElement *pFVar17;
  int iVar18;
  uint *puVar19;
  uint uVar20;
  bool *pbVar21;
  TMap<UIKRigDefinition_const_*,TArray<FResolvedBoneChain,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UIKRigDefinition_const_*,TArray<FResolvedBoneChain,TSizedDefaultAllocator<32>_>,0>_>
  *pTVar22;
  undefined1 auStack_138 [32];
  undefined1 local_118;
  undefined1 local_117;
  undefined1 local_116 [6];
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *local_110;
  TMap<UIKRigDefinition_const_*,TArray<FResolvedBoneChain,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UIKRigDefinition_const_*,TArray<FResolvedBoneChain,TSizedDefaultAllocator<32>_>,0>_>
  *local_108;
  int iStack_100;
  uint uStack_fc;
  undefined1 *local_f8;
  undefined4 uStack_f0;
  int iStack_ec;
  int local_e8;
  int iStack_e4;
  int iStack_e0;
  undefined4 uStack_dc;
  FName local_d8;
  FName local_d0;
  TMap<UIKRigDefinition_const_*,TArray<FResolvedBoneChain,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UIKRigDefinition_const_*,TArray<FResolvedBoneChain,TSizedDefaultAllocator<32>_>,0>_>
  *local_c8;
  TMap<UIKRigDefinition_const_*,TArray<FResolvedBoneChain,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UIKRigDefinition_const_*,TArray<FResolvedBoneChain,TSizedDefaultAllocator<32>_>,0>_>
  *local_c0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_b8;
  undefined8 uStack_98;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> local_88;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_138;
  local_88.Elements._0_8_ = 0;
  local_88.Elements._8_8_ = 0;
  local_88.Elements._32_8_ = 0;
  iVar18 = 0;
  local_88.Elements._40_4_ = 0;
  local_88.Elements._44_4_ = 0x80;
  local_88.Elements._48_4_ = 0xffffffff;
  local_88.Elements._52_4_ = 0;
  local_88.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_88.HashSize = 0;
  local_110 = __return_storage_ptr__;
  if (param_2 == Source) {
    iVar18 = (this->SourceBoneChains).ArrayNum;
    pFVar14 = (this->SourceBoneChains).AllocatorInstance.Data;
    pFVar17 = pFVar14 + (longlong)iVar18 * 0xf0;
    while( true ) {
      if ((this->SourceBoneChains).ArrayNum != iVar18) {
        `TCheckedPointerIterator<FResolvedBoneChain_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_118);
      }
      pTVar10 = local_110;
      if (pFVar14 == pFVar17) break;
      piVar11 = *(int **)(pFVar14 + 0x60);
      piVar2 = piVar11 + *(int *)(pFVar14 + 0x68);
      if (piVar11 == piVar2) {
LAB_14df37200:
        pFVar14 = pFVar14 + 0xf0;
      }
      else {
        do {
          if (*piVar11 == param_1) {
            TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName_const_&>
                      (&local_88,&local_d8,(bool *)pFVar14);
            goto LAB_14df37200;
          }
          piVar11 = piVar11 + 1;
        } while (piVar11 != piVar2);
        pFVar14 = pFVar14 + 0xf0;
      }
    }
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>(local_110,&local_88);
  }
  else {
    iVar4 = *(int *)&(this->TargetBoneChains).field_0x28;
    pTVar22 = &this->TargetBoneChains;
    puVar1 = &(this->TargetBoneChains).field_0x10;
    uStack_fc = 1;
    local_e8 = 0;
    iStack_ec = local_e8;
    if (iVar4 != 0) {
      puVar19 = *(uint **)&(this->TargetBoneChains).field_0x20;
      if (puVar19 == (uint *)0x0) {
        puVar19 = (uint *)puVar1;
      }
      uVar16 = *puVar19;
      local_e8 = 0;
      iVar18 = 0;
      while (uVar16 == 0) {
        lVar9 = (longlong)iVar18;
        local_e8 = local_e8 + 0x20;
        iVar18 = iVar18 + 1;
        iStack_ec = iVar4;
        if ((int)((iVar4 + -1 >> 0x1f & 0x1fU) + iVar4 + -1) >> 5 < iVar18) goto LAB_14df372af;
        uVar16 = puVar19[lVar9 + 1];
      }
      uStack_fc = -uVar16 & uVar16;
      uVar3 = (ulonglong)uStack_fc * 2 + 1;
      lVar9 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      local_d8.Number = (uint)lVar9;
      iStack_ec = local_e8 + -1 + local_d8.Number;
      if (iVar4 < iStack_ec) {
        iStack_ec = iVar4;
      }
    }
LAB_14df372af:
    uVar16 = *(uint *)&(this->TargetBoneChains).field_0x28;
    iStack_e0 = *(int *)&(this->TargetBoneChains).field_0x8 -
                *(int *)&(this->TargetBoneChains).field_0x34;
    uVar20 = uVar16 & 0xffffffe0;
    uStack_f0 = 0xffffffff;
    TStack_b8._padding_ = CONCAT44(uStack_fc,iVar18);
    TStack_b8.CurrentBitIndex = iStack_ec;
    TStack_b8.UnvisitedBitMask = 0xffffffff;
    iVar13 = (int)uVar16 >> 5;
    TStack_b8._28_4_ = iStack_ec;
    TStack_b8.BaseBitIndex = local_e8;
    uStack_98 = CONCAT44(uStack_dc,iStack_e0);
    local_108 = pTVar22;
    iStack_100 = iVar18;
    local_f8 = puVar1;
    iStack_e4 = iStack_ec;
    local_c8 = pTVar22;
    local_c0 = pTVar22;
    TStack_b8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if ((((int)uVar16 < 0) || (iVar4 < (int)uVar16)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      pTVar10 = (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)(*pcVar6)();
      return pTVar10;
    }
    uVar5 = *(uint *)&(this->TargetBoneChains).field_0x28;
    if (uVar16 != uVar5) {
      puVar12 = *(undefined1 **)&(this->TargetBoneChains).field_0x20;
      if (puVar12 == (undefined1 *)0x0) {
        puVar12 = puVar1;
      }
      uVar16 = -1 << ((byte)uVar16 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar13 * 4);
      while (uVar16 == 0) {
        lVar9 = (longlong)iVar13;
        uVar20 = uVar20 + 0x20;
        iVar13 = iVar13 + 1;
        uVar16 = uVar5;
        if ((int)(((int)(uVar5 - 1) >> 0x1f & 0x1fU) + (uVar5 - 1)) >> 5 < iVar13)
        goto LAB_14df373c0;
        uVar16 = *(uint *)(puVar12 + lVar9 * 4 + 4);
      }
      uVar3 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
      lVar9 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      uVar16 = (int)lVar9 + -1 + uVar20;
      if ((int)uVar5 < (int)uVar16) {
        uVar16 = uVar5;
      }
    }
LAB_14df373c0:
    while( true ) {
      pTVar7 = local_c0;
      if (*(int *)&local_c0->field_0x8 - *(int *)&local_c0->field_0x34 != (int)uStack_98) {
        `TSparseArray<TSparseSetElement<TTuple<UIKRigDefinition_const_*,TArray<FResolvedBoneChain,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_117);
      }
      pTVar10 = local_110;
      if (((TStack_b8.CurrentBitIndex == uVar16) &&
          (TStack_b8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
         (pTVar7 == pTVar22)) break;
      lVar9 = (longlong)TStack_b8.CurrentBitIndex * 0x20 + *(longlong *)pTVar7;
      iVar18 = *(int *)(lVar9 + 0x10);
      pbVar15 = *(bool **)(lVar9 + 8);
      pbVar21 = pbVar15 + (longlong)iVar18 * 0xf0;
      while( true ) {
        if (*(int *)(lVar9 + 0x10) != iVar18) {
          `TCheckedPointerIterator<FResolvedBoneChain_const_,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_116);
        }
        if (pbVar15 == pbVar21) break;
        piVar11 = *(int **)(pbVar15 + 0x60);
        piVar2 = piVar11 + *(int *)(pbVar15 + 0x68);
        if (piVar11 == piVar2) {
LAB_14df37460:
          pbVar15 = pbVar15 + 0xf0;
        }
        else {
          do {
            if (*piVar11 == param_1) {
              TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName_const_&>
                        (&local_88,&local_d0,pbVar15);
              goto LAB_14df37460;
            }
            piVar11 = piVar11 + 1;
          } while (piVar11 != piVar2);
          pbVar15 = pbVar15 + 0xf0;
        }
      }
      TStack_b8.UnvisitedBitMask = TStack_b8.UnvisitedBitMask & ~TStack_b8._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_b8);
      pTVar22 = local_c8;
    }
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>(local_110,&local_88);
  }
  local_88.HashSize = 0;
  if (local_88.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_88.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_88.Elements);
  return pTVar10;
}

// GetResolvedBoneChainByName @ 14df3e770

FResolvedBoneChain * __thiscall
FRetargeterBoneChains::GetResolvedBoneChainByName
          (FRetargeterBoneChains *this,FName param_1,ERetargetSourceOrTarget param_2,
          UIKRigDefinition *param_3)

{
  FResolvedBoneChain *pFVar1;
  FResolvedBoneChain *pFVar2;
  
  if (param_2 != Source) {
    if (param_3 == (UIKRigDefinition *)0x0) {
      param_3 = this->DefaultTargetIKRig;
    }
    this = (FRetargeterBoneChains *)
           TMapBase<UIKRigDefinition_const_*,TArray<FResolvedBoneChain,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UIKRigDefinition_const_*,TArray<FResolvedBoneChain,TSizedDefaultAllocator<32>_>,0>_>
           ::Find((TMapBase<UIKRigDefinition_const_*,TArray<FResolvedBoneChain,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UIKRigDefinition_const_*,TArray<FResolvedBoneChain,TSizedDefaultAllocator<32>_>,0>_>
                   *)&this->TargetBoneChains,param_3);
  }
  if (this != (FRetargeterBoneChains *)0x0) {
    pFVar1 = (FResolvedBoneChain *)(this->SourceBoneChains).AllocatorInstance.Data;
    pFVar2 = pFVar1 + (this->SourceBoneChains).ArrayNum;
    for (; pFVar1 != pFVar2; pFVar1 = pFVar1 + 1) {
      if (pFVar1->ChainName == param_1) {
        return pFVar1;
      }
    }
  }
  return (FResolvedBoneChain *)0x0;
}

// GetResolvedBoneChains @ 14df3e7d0

TArray<FResolvedBoneChain,TSizedDefaultAllocator<32>_> * __thiscall
FRetargeterBoneChains::GetResolvedBoneChains
          (FRetargeterBoneChains *this,ERetargetSourceOrTarget param_1,UIKRigDefinition *param_2)

{
  TArray<FResolvedBoneChain,TSizedDefaultAllocator<32>_> *pTVar1;
  
  if (param_1 == Source) {
    return &this->SourceBoneChains;
  }
  if (param_2 == (UIKRigDefinition *)0x0) {
    param_2 = this->DefaultTargetIKRig;
  }
  pTVar1 = TMapBase<UIKRigDefinition_const_*,TArray<FResolvedBoneChain,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UIKRigDefinition_const_*,TArray<FResolvedBoneChain,TSizedDefaultAllocator<32>_>,0>_>
           ::Find((TMapBase<UIKRigDefinition_const_*,TArray<FResolvedBoneChain,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UIKRigDefinition_const_*,TArray<FResolvedBoneChain,TSizedDefaultAllocator<32>_>,0>_>
                   *)&this->TargetBoneChains,param_2);
  return pTVar1;
}

// Initialize @ 14df45630

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FRetargeterBoneChains::Initialize
          (FRetargeterBoneChains *this,UIKRetargeter *param_1,
          TArray<UIKRigDefinition_const_*,TSizedDefaultAllocator<32>_> *param_2,
          FRetargetSkeleton *param_3,FRetargetSkeleton *param_4,FIKRigLogger *param_5)

{
  int *piVar1;
  undefined1 *puVar2;
  int iVar3;
  uint uVar4;
  FResolvedBoneChain *pFVar5;
  code *pcVar6;
  TSet<TTuple<UIKRigDefinition_const_*,TArray<FResolvedBoneChain,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UIKRigDefinition_const_*,TArray<FResolvedBoneChain,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  *pTVar7;
  FScriptContainerElement *pFVar8;
  TSet<TTuple<UIKRigDefinition_const_*,TArray<FResolvedBoneChain,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UIKRigDefinition_const_*,TArray<FResolvedBoneChain,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  *pTVar9;
  bool bVar10;
  undefined1 uVar11;
  int iVar12;
  UIKRigDefinition *pUVar13;
  TArray<UIKRigDefinition_const_*,TSizedDefaultAllocator<32>_> *pTVar14;
  longlong lVar15;
  ulonglong uVar16;
  FScriptContainerElement *pFVar17;
  longlong lVar18;
  uint uVar19;
  FBoneChain *pFVar20;
  uint uVar21;
  FBoneChain *pFVar22;
  undefined1 *puVar23;
  uint *puVar24;
  undefined1 auStackY_278 [32];
  FIdentityFunctor local_228;
  undefined1 local_227;
  undefined1 local_226;
  undefined1 local_225;
  TKeyInitializer<UIKRigDefinition_const_*_const_&> local_224;
  TArray<UIKRigDefinition_const_*,TSizedDefaultAllocator<32>_> *local_218;
  longlong local_210;
  FScriptContainerElement *local_208;
  TSet<TTuple<UIKRigDefinition_const_*,TArray<FResolvedBoneChain,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UIKRigDefinition_const_*,TArray<FResolvedBoneChain,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  *local_200;
  FRetargeterBoneChains *local_1f8;
  int local_1f0;
  longlong *local_1e8;
  FScriptContainerElement *local_1e0;
  FRetargeterBoneChains *local_1d8;
  TSet<TTuple<UIKRigDefinition_const_*,TArray<FResolvedBoneChain,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UIKRigDefinition_const_*,TArray<FResolvedBoneChain,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  *local_1d0;
  int iStack_1c8;
  uint uStack_1c4;
  undefined1 *local_1c0;
  undefined4 uStack_1b8;
  int iStack_1b4;
  int local_1b0;
  undefined4 uStack_1ac;
  int iStack_1a8;
  undefined4 uStack_1a4;
  TSet<TTuple<UIKRigDefinition_const_*,TArray<FResolvedBoneChain,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UIKRigDefinition_const_*,TArray<FResolvedBoneChain,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  *local_1a0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_198;
  undefined8 uStack_178;
  undefined4 local_154;
  FResolvedBoneChain local_148;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_278;
  piVar1 = &(this->SourceBoneChains).ArrayMax;
  pFVar5 = (FResolvedBoneChain *)(this->SourceBoneChains).AllocatorInstance.Data;
  iVar3 = (this->SourceBoneChains).ArrayNum;
  local_218 = param_2;
  local_1d8 = this;
  if ((this->SourceBoneChains).ArrayMax < 0) {
    DestructItems<FResolvedBoneChain,int>(pFVar5,iVar3);
    (this->SourceBoneChains).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xf0,0x10,0,(ForAnyElementType *)this,0,piVar1);
    }
  }
  else {
    DestructItems<FResolvedBoneChain,int>(pFVar5,iVar3);
    (this->SourceBoneChains).ArrayNum = 0;
  }
  pUVar13 = (UIKRigDefinition *)0x0;
  local_200 = (TSet<TTuple<UIKRigDefinition_const_*,TArray<FResolvedBoneChain,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UIKRigDefinition_const_*,TArray<FResolvedBoneChain,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
               *)&this->TargetBoneChains;
  TSet<TTuple<UIKRigDefinition_const_*,TArray<FResolvedBoneChain,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UIKRigDefinition_const_*,TArray<FResolvedBoneChain,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::Reset(local_200);
  pTVar14 = local_218;
  if (local_218->ArrayNum != 0) {
    if ((local_218->ArrayNum < 1) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar6 = (code *)swi(3);
      uVar11 = (*pcVar6)();
      return (bool)uVar11;
    }
    pUVar13 = *(UIKRigDefinition **)(pTVar14->AllocatorInstance).Data;
  }
  this->DefaultTargetIKRig = pUVar13;
  pUVar13 = UIKRetargeter::GetIKRig(param_1,Source);
  if (pUVar13 != (UIKRigDefinition *)0x0) {
    `FRetargeterBoneChains::Initialize'::__l2::<lambda_1>::operator()
              (&local_228,param_3,&(pUVar13->RetargetDefinition).BoneChains,param_5,
               &this->SourceBoneChains);
  }
  pFVar17 = (pTVar14->AllocatorInstance).Data;
  local_224.Key._4_4_ = pTVar14->ArrayNum;
  uVar16 = (ulonglong)(int)local_224.Key._4_4_;
  local_1e0 = pFVar17 + uVar16 * 8;
  while( true ) {
    pFVar8 = local_1e0;
    local_208 = pFVar17;
    if (pTVar14->ArrayNum != (int)uVar16) {
      local_227 = 0;
      `TCheckedPointerIterator<UIKRigDefinition_const_*_const,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(&local_227);
    }
    pTVar7 = local_200;
    if (pFVar17 == pFVar8) break;
    local_210 = *(longlong *)pFVar17;
    local_1e8 = &local_210;
    TSet<TTuple<UIKRigDefinition_const_*,TArray<FResolvedBoneChain,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UIKRigDefinition_const_*,TArray<FResolvedBoneChain,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::Emplace<TKeyInitializer<UIKRigDefinition_const_*_const_&>_>
              (local_200,&local_224,(bool *)&local_1e8);
    lVar15 = local_210;
    iVar3 = *(int *)(local_210 + 0xf8);
    lVar18 = *(longlong *)&pTVar7->Elements + (longlong)(int)local_224.Key * 0x20;
    pFVar22 = *(FBoneChain **)(local_210 + 0xf0);
    pFVar20 = pFVar22 + iVar3;
    while( true ) {
      if (*(int *)(lVar15 + 0xf8) != iVar3) {
        local_226 = 0;
        `TCheckedPointerIterator<FBoneChain_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_226);
      }
      if (pFVar22 == pFVar20) break;
      FResolvedBoneChain::FResolvedBoneChain(&local_148,pFVar22,param_4,param_5);
      FResolvedBoneChain::GetWarnings(&local_148,param_4,param_5);
      if (((local_148.bFoundStartBone != false) && (local_148.bFoundEndBone != false)) &&
         ((local_148.bEndIsStartOrChildOfStart != false &&
          ((local_148.BoneIndices.ArrayNum == local_148.RefPoseGlobalTransforms.ArrayNum &&
           (local_148.BoneIndices.ArrayNum == local_148.RefPoseLocalTransforms.ArrayNum)))))) {
        if ((*(FResolvedBoneChain **)(lVar18 + 8) <= &local_148) &&
           ((&local_148 < *(FResolvedBoneChain **)(lVar18 + 8) + *(int *)(lVar18 + 0x14) &&
            (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar10)))) {
          pcVar6 = (code *)swi(3);
          uVar11 = (*pcVar6)();
          return (bool)uVar11;
        }
        iVar12 = *(int *)(lVar18 + 0x10);
        if (iVar12 == *(int *)(lVar18 + 0x14)) {
          iVar12 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x10f0,(ForAnyElementType *)(lVar18 + 8),(int *)(lVar18 + 0x14));
        }
        *(int *)(lVar18 + 0x10) = iVar12 + 1;
        FResolvedBoneChain::FResolvedBoneChain
                  ((FResolvedBoneChain *)((longlong)iVar12 * 0xf0 + *(longlong *)(lVar18 + 8)),
                   &local_148);
      }
      if (local_148.BoneIndices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_148.BoneIndices.AllocatorInstance.Data);
      }
      if (local_148.Params.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_148.Params.AllocatorInstance.Data);
      }
      if (local_148.CurrentLocalTransforms.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
      {
        FMemory::Free(local_148.CurrentLocalTransforms.AllocatorInstance.Data);
      }
      if (local_148.RefPoseLocalTransforms.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
      {
        FMemory::Free(local_148.RefPoseLocalTransforms.AllocatorInstance.Data);
      }
      if (local_148.RefPoseGlobalTransforms.AllocatorInstance.Data != (FScriptContainerElement *)0x0
         ) {
        FMemory::Free(local_148.RefPoseGlobalTransforms.AllocatorInstance.Data);
      }
      pFVar22 = pFVar22 + 1;
    }
    pFVar17 = local_208 + 8;
    uVar16 = (ulonglong)local_224.Key._4_4_;
    pTVar14 = local_218;
  }
  local_1f8 = local_1d8;
  AlgoImpl::
  IntroSortInternal<FResolvedBoneChain,int,FIdentityFunctor,TDereferenceWrapper<FResolvedBoneChain,_FRetargeterBoneChains::Initialize_::__l2::<lambda_2>_>_>
            ((FResolvedBoneChain *)(local_1d8->SourceBoneChains).AllocatorInstance.Data,
             (local_1d8->SourceBoneChains).ArrayNum,local_228,(<lambda_2> *)&local_1f8);
  pTVar7 = local_200;
  iStack_1c8 = 0;
  iVar3 = *(int *)&(local_200->Elements).field_0x28;
  puVar2 = &(local_200->Elements).field_0x10;
  uStack_1c4 = 1;
  local_1b0 = 0;
  iStack_1b4 = 0;
  if (iVar3 != 0) {
    puVar24 = *(uint **)&(local_200->Elements).field_0x20;
    if (puVar24 == (uint *)0x0) {
      puVar24 = (uint *)puVar2;
    }
    uVar21 = *puVar24;
    while (uVar21 == 0) {
      lVar15 = (longlong)iStack_1c8;
      local_1b0 = local_1b0 + 0x20;
      iStack_1c8 = iStack_1c8 + 1;
      iStack_1b4 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_1c8) goto LAB_14df45a1f;
      uVar21 = puVar24[lVar15 + 1];
    }
    uStack_1c4 = -uVar21 & uVar21;
    uVar16 = (ulonglong)uStack_1c4 * 2 + 1;
    lVar15 = 0x3f;
    if (uVar16 != 0) {
      for (; uVar16 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_1f0 = (int)lVar15;
    iStack_1b4 = local_1b0 + -1 + local_1f0;
    if (iVar3 < iStack_1b4) {
      iStack_1b4 = iVar3;
    }
  }
LAB_14df45a1f:
  uStack_1ac = local_154;
  iStack_1a8 = *(int *)&(local_200->Elements).field_0x8 - *(int *)&(local_200->Elements).field_0x34;
  uVar21 = *(uint *)&(local_200->Elements).field_0x28;
  uStack_1b8 = 0xffffffff;
  local_1d0 = local_200;
  TStack_198._padding_ = CONCAT44(uStack_1c4,iStack_1c8);
  uVar19 = uVar21 & 0xffffffe0;
  TStack_198.CurrentBitIndex = iStack_1b4;
  TStack_198.UnvisitedBitMask = 0xffffffff;
  local_1a0 = local_200;
  iVar12 = (int)uVar21 >> 5;
  TStack_198._28_4_ = local_154;
  TStack_198.BaseBitIndex = local_1b0;
  uStack_178 = CONCAT44(uStack_1a4,iStack_1a8);
  local_1c0 = puVar2;
  TStack_198.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
  if ((((int)uVar21 < 0) || (iVar3 < (int)uVar21)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar10)) {
    pcVar6 = (code *)swi(3);
    uVar11 = (*pcVar6)();
    return (bool)uVar11;
  }
  uVar4 = *(uint *)&(pTVar7->Elements).field_0x28;
  if (uVar21 != uVar4) {
    puVar23 = *(undefined1 **)&(pTVar7->Elements).field_0x20;
    if (puVar23 == (undefined1 *)0x0) {
      puVar23 = puVar2;
    }
    uVar21 = -1 << ((byte)uVar21 & 0x1f) & *(uint *)(puVar23 + (longlong)iVar12 * 4);
    while (uVar21 == 0) {
      lVar15 = (longlong)iVar12;
      uVar19 = uVar19 + 0x20;
      iVar12 = iVar12 + 1;
      uVar21 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_14df45b20;
      uVar21 = *(uint *)(puVar23 + lVar15 * 4 + 4);
    }
    uVar16 = (ulonglong)(-uVar21 & uVar21) * 2 + 1;
    lVar15 = 0x3f;
    if (uVar16 != 0) {
      for (; uVar16 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    uVar21 = (int)lVar15 + -1 + uVar19;
    if ((int)uVar4 < (int)uVar21) {
      uVar21 = uVar4;
    }
  }
LAB_14df45b20:
  while( true ) {
    pTVar9 = local_1a0;
    if (*(int *)&(local_1a0->Elements).field_0x8 - *(int *)&(local_1a0->Elements).field_0x34 !=
        (int)uStack_178) {
      `TSparseArray<TSparseSetElement<TTuple<UIKRigDefinition_const_*,TArray<FResolvedBoneChain,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_225);
    }
    if (((TStack_198.CurrentBitIndex == uVar21) &&
        (TStack_198.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) && (pTVar9 == pTVar7))
    break;
    lVar15 = *(longlong *)&pTVar9->Elements;
    AlgoImpl::
    IntroSortInternal<FResolvedBoneChain,int,FIdentityFunctor,TDereferenceWrapper<FResolvedBoneChain,_FRetargeterBoneChains::Initialize_::__l2::<lambda_2>_>_>
              (*(FResolvedBoneChain **)((longlong)TStack_198.CurrentBitIndex * 0x20 + 8 + lVar15),
               *(int *)((longlong)TStack_198.CurrentBitIndex * 0x20 + 0x10 + lVar15),local_228,
               (<lambda_2> *)&local_1f8);
    TStack_198.UnvisitedBitMask = TStack_198.UnvisitedBitMask & ~TStack_198._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_198);
  }
  return true;
}

// Reset @ 14df4ef40

void __thiscall FRetargeterBoneChains::Reset(FRetargeterBoneChains *this)

{
  int *piVar1;
  int iVar2;
  FResolvedBoneChain *pFVar3;
  
  piVar1 = &(this->SourceBoneChains).ArrayMax;
  pFVar3 = (FResolvedBoneChain *)(this->SourceBoneChains).AllocatorInstance.Data;
  iVar2 = (this->SourceBoneChains).ArrayNum;
  if ((this->SourceBoneChains).ArrayMax < 0) {
    DestructItems<FResolvedBoneChain,int>(pFVar3,iVar2);
    (this->SourceBoneChains).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xf0,0x10,0,(ForAnyElementType *)this,0,piVar1);
    }
  }
  else {
    DestructItems<FResolvedBoneChain,int>(pFVar3,iVar2);
    (this->SourceBoneChains).ArrayNum = 0;
  }
  TSet<TTuple<UIKRigDefinition_const_*,TArray<FResolvedBoneChain,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UIKRigDefinition_const_*,TArray<FResolvedBoneChain,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<UIKRigDefinition_const_*,TArray<FResolvedBoneChain,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UIKRigDefinition_const_*,TArray<FResolvedBoneChain,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
           *)&this->TargetBoneChains);
  return;
}

// UpdatePoseFromSkeleton @ 14df5eac0

void __thiscall
FRetargeterBoneChains::UpdatePoseFromSkeleton
          (FRetargeterBoneChains *this,FRetargetSkeleton *param_1,ERetargetSourceOrTarget param_2)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  TMap<UIKRigDefinition_const_*,TArray<FResolvedBoneChain,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UIKRigDefinition_const_*,TArray<FResolvedBoneChain,TSizedDefaultAllocator<32>_>,0>_>
  *pTVar6;
  bool bVar7;
  longlong lVar8;
  int iVar9;
  FResolvedBoneChain *pFVar10;
  uint uVar11;
  FResolvedBoneChain *pFVar12;
  uint uVar13;
  undefined1 *puVar14;
  uint *puVar15;
  TMap<UIKRigDefinition_const_*,TArray<FResolvedBoneChain,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UIKRigDefinition_const_*,TArray<FResolvedBoneChain,TSizedDefaultAllocator<32>_>,0>_>
  *pTVar16;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_b8 [8];
  TMap<UIKRigDefinition_const_*,TArray<FResolvedBoneChain,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UIKRigDefinition_const_*,TArray<FResolvedBoneChain,TSizedDefaultAllocator<32>_>,0>_>
  *local_b0;
  int iStack_a8;
  uint uStack_a4;
  undefined1 *local_a0;
  undefined4 uStack_98;
  int iStack_94;
  int local_90;
  int iStack_8c;
  int iStack_88;
  undefined4 uStack_84;
  int local_80;
  TMap<UIKRigDefinition_const_*,TArray<FResolvedBoneChain,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UIKRigDefinition_const_*,TArray<FResolvedBoneChain,TSizedDefaultAllocator<32>_>,0>_>
  *local_78;
  TMap<UIKRigDefinition_const_*,TArray<FResolvedBoneChain,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UIKRigDefinition_const_*,TArray<FResolvedBoneChain,TSizedDefaultAllocator<32>_>,0>_>
  *local_70;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_68;
  undefined8 uStack_48;
  
  if (param_2 == Source) {
    iVar3 = (this->SourceBoneChains).ArrayNum;
    pFVar10 = (FResolvedBoneChain *)(this->SourceBoneChains).AllocatorInstance.Data;
    pFVar12 = pFVar10 + iVar3;
    while( true ) {
      if ((this->SourceBoneChains).ArrayNum != iVar3) {
        `TCheckedPointerIterator<FResolvedBoneChain,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res18);
      }
      if (pFVar10 == pFVar12) break;
      FResolvedBoneChain::UpdatePoseFromSkeleton(pFVar10,param_1);
      pFVar10 = pFVar10 + 1;
    }
  }
  else {
    iVar3 = *(int *)&(this->TargetBoneChains).field_0x28;
    pTVar16 = &this->TargetBoneChains;
    iStack_a8 = 0;
    puVar1 = &(this->TargetBoneChains).field_0x10;
    uStack_a4 = 1;
    local_90 = 0;
    iStack_94 = 0;
    if (iVar3 != 0) {
      puVar15 = *(uint **)&(this->TargetBoneChains).field_0x20;
      if (puVar15 == (uint *)0x0) {
        puVar15 = (uint *)puVar1;
      }
      uVar13 = *puVar15;
      while (uVar13 == 0) {
        lVar8 = (longlong)iStack_a8;
        local_90 = local_90 + 0x20;
        iStack_a8 = iStack_a8 + 1;
        iStack_94 = iVar3;
        if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_a8) goto LAB_14df5ebbd;
        uVar13 = puVar15[lVar8 + 1];
      }
      uStack_a4 = -uVar13 & uVar13;
      uVar2 = (ulonglong)uStack_a4 * 2 + 1;
      lVar8 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      local_80 = (int)lVar8;
      iStack_94 = local_90 + -1 + local_80;
      if (iVar3 < iStack_94) {
        iStack_94 = iVar3;
      }
    }
LAB_14df5ebbd:
    uVar13 = *(uint *)&(this->TargetBoneChains).field_0x28;
    iStack_88 = *(int *)&(this->TargetBoneChains).field_0x8 -
                *(int *)&(this->TargetBoneChains).field_0x34;
    uVar11 = uVar13 & 0xffffffe0;
    uStack_98 = 0xffffffff;
    TStack_68._padding_ = CONCAT44(uStack_a4,iStack_a8);
    TStack_68.CurrentBitIndex = iStack_94;
    TStack_68.UnvisitedBitMask = 0xffffffff;
    iVar9 = (int)uVar13 >> 5;
    TStack_68._28_4_ = iStack_94;
    TStack_68.BaseBitIndex = local_90;
    uStack_48 = CONCAT44(uStack_84,iStack_88);
    local_b0 = pTVar16;
    local_a0 = puVar1;
    iStack_8c = iStack_94;
    local_78 = pTVar16;
    local_70 = pTVar16;
    TStack_68.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if ((((int)uVar13 < 0) || (iVar3 < (int)uVar13)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar4 = *(uint *)&(this->TargetBoneChains).field_0x28;
    if (uVar13 != uVar4) {
      puVar14 = *(undefined1 **)&(this->TargetBoneChains).field_0x20;
      if (puVar14 == (undefined1 *)0x0) {
        puVar14 = puVar1;
      }
      uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar14 + (longlong)iVar9 * 4);
      while (uVar13 == 0) {
        lVar8 = (longlong)iVar9;
        uVar11 = uVar11 + 0x20;
        iVar9 = iVar9 + 1;
        uVar13 = uVar4;
        if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar9)
        goto LAB_14df5ecc0;
        uVar13 = *(uint *)(puVar14 + lVar8 * 4 + 4);
      }
      uVar2 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
      lVar8 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      uVar13 = (int)lVar8 + -1 + uVar11;
      if ((int)uVar4 < (int)uVar13) {
        uVar13 = uVar4;
      }
    }
LAB_14df5ecc0:
    while( true ) {
      pTVar6 = local_70;
      if (*(int *)&local_70->field_0x8 - *(int *)&local_70->field_0x34 != (int)uStack_48) {
        `TSparseArray<TSparseSetElement<TTuple<UIKRigDefinition_const_*,TArray<FResolvedBoneChain,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
      }
      if (((TStack_68.CurrentBitIndex == uVar13) &&
          (TStack_68.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
         (pTVar6 == pTVar16)) break;
      lVar8 = (longlong)TStack_68.CurrentBitIndex * 0x20 + *(longlong *)pTVar6;
      iVar3 = *(int *)(lVar8 + 0x10);
      pFVar10 = *(FResolvedBoneChain **)(lVar8 + 8);
      pFVar12 = pFVar10 + iVar3;
      while( true ) {
        if (*(int *)(lVar8 + 0x10) != iVar3) {
          `TCheckedPointerIterator<FResolvedBoneChain,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_b8);
        }
        if (pFVar10 == pFVar12) break;
        FResolvedBoneChain::UpdatePoseFromSkeleton(pFVar10,param_1);
        pFVar10 = pFVar10 + 1;
      }
      TStack_68.UnvisitedBitMask = TStack_68.UnvisitedBitMask & ~TStack_68._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_68);
      pTVar16 = local_78;
    }
  }
  return;
}

