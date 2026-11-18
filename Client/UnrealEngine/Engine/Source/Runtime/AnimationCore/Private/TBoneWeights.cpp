// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimationCore
// Functions: 8

// AddBoneWeight<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_> @ 14237b730

bool __thiscall
UE::AnimationCore::
TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
::
AddBoneWeight<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>
          (TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
           *this,FBoneWeight param_1,FBoneWeightsSettings *param_2)

{
  undefined4 uVar1;
  EBoneWeightNormalizeType EVar2;
  ForElementType<UE::AnimationCore::FBoneWeight> FVar3;
  code *pcVar4;
  undefined1 uVar5;
  bool bVar6;
  ushort uVar7;
  int iVar8;
  TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>
  *pTVar9;
  ForElementType<UE::AnimationCore::FBoneWeight> FVar10;
  TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>
  *pTVar11;
  ForElementType<UE::AnimationCore::FBoneWeight> FVar12;
  longlong lVar13;
  undefined4 local_res8;
  FIdentityFunctor local_res10;
  ushort uStackX_12;
  code *local_res20;
  FBoneWeight local_28 [4];
  
  FVar3 = (ForElementType<UE::AnimationCore::FBoneWeight>)this->Container;
  FVar12 = *(ForElementType<UE::AnimationCore::FBoneWeight> *)
            &((ForElementType<UE::AnimationCore::FBoneWeight> *)((longlong)FVar3 + 0x30))->field_0x0
  ;
  lVar13 = (longlong)*(int *)((longlong)FVar3 + 0x38);
  if (FVar12 == (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
    FVar12 = FVar3;
  }
  uStackX_12 = param_1.RawWeight;
  pTVar9 = (TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>
            *)FVar12;
  do {
    if (pTVar9 == (TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>
                   *)((((TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>
                         *)FVar12)->AllocatorInstance).InlineData + lVar13 * 4)) {
LAB_14237b76e:
      if (uStackX_12 < param_2->WeightThreshold) {
        return false;
      }
      FVar10 = *(ForElementType<UE::AnimationCore::FBoneWeight> *)((longlong)FVar3 + 0x30);
      if (*(int *)((longlong)FVar3 + 0x38) == param_2->MaxWeightCount) {
        if (FVar10 == (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
          FVar10 = FVar3;
        }
        if (uStackX_12 < *(ushort *)((undefined1 *)((longlong)FVar10 + -2) + lVar13 * 4)) {
          return false;
        }
        *(FBoneWeight *)
         (&((TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>
             *)((longlong)FVar12 + -0x40))->ArrayMax + lVar13) = param_1;
      }
      else {
        if (FVar10 == (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
          FVar10 = FVar3;
        }
        local_28[0] = param_1;
        if ((((ulonglong)FVar10 <= local_28) &&
            (local_28 <
             (FBoneWeight *)((longlong)FVar10 + (longlong)*(int *)((longlong)FVar3 + 0x3c) * 4))) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar4 = (code *)swi(3);
          uVar5 = (*pcVar4)();
          return (bool)uVar5;
        }
        iVar8 = *(int *)((longlong)FVar3 + 0x38);
        if (iVar8 == *(int *)((longlong)FVar3 + 0x3c)) {
          iVar8 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::AnimationCore::FBoneWeight>_>
                            (0x204,(ForElementType<UE::AnimationCore::FBoneWeight> *)FVar3,
                             (int *)((longlong)FVar3 + 0x3c));
        }
        *(int *)((longlong)FVar3 + 0x38) = iVar8 + 1;
        FVar12 = (ForElementType<UE::AnimationCore::FBoneWeight>)
                 *(TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>
                   **)((longlong)FVar3 + 0x30);
        if (*(TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>
              **)((longlong)FVar3 + 0x30) ==
            (TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>
             *)0x0) {
          FVar12 = FVar3;
        }
        *(FBoneWeight *)
         ((((TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>
             *)FVar12)->AllocatorInstance).InlineData + (longlong)iVar8 * 4) = local_28[0];
      }
      bVar6 = true;
LAB_14237b8c0:
      pTVar9 = this->Container;
      local_res10 = param_1.BoneIndex._0_1_;
      local_res20 = FBoneWeight::DescSortByWeightPredicate;
      pTVar11 = *(TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>
                  **)&(pTVar9->AllocatorInstance).SecondaryData.field_0x0;
      if (pTVar11 ==
          (TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>
           *)0x0) {
        pTVar11 = pTVar9;
      }
      AlgoImpl::
      IntroSortInternal<UE::AnimationCore::FBoneWeight,int,FIdentityFunctor,TDereferenceWrapper<UE::AnimationCore::FBoneWeight,bool_(__cdecl*)(UE::AnimationCore::FBoneWeight_const_&,UE::AnimationCore::FBoneWeight_const_&)>_>
                ((FBoneWeight *)pTVar11,pTVar9->ArrayNum,local_res10,
                 (TDereferenceWrapper<UE::AnimationCore::FBoneWeight,bool_(__cdecl*)(UE::AnimationCore::FBoneWeight_const_&,UE::AnimationCore::FBoneWeight_const_&)>
                  )&local_res20);
      EVar2 = param_2->NormalizeType;
      if ((((EVar2 == Always) || ((EVar2 == AboveOne && (bVar6)))) &&
          (NormalizeWeights(this,EVar2), param_2->NormalizeType == Always)) &&
         (bVar6 = CullWeights(this,param_2), bVar6)) {
        NormalizeWeights(this,Always);
      }
      return true;
    }
    if (param_1.BoneIndex == *(ushort *)(pTVar9->AllocatorInstance).InlineData) {
      iVar8 = (int)((longlong)pTVar9 - (longlong)FVar12 >> 2);
      if (iVar8 != -1) {
        uVar1 = *(undefined4 *)
                 ((((TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>
                     *)FVar12)->AllocatorInstance).InlineData + (longlong)iVar8 * 4);
        if (uStackX_12 < param_2->WeightThreshold) {
          FBoneWeights::
          TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>
          ::Remove((TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>
                    *)FVar3,iVar8);
          if (param_2->NormalizeType != Always) {
            return false;
          }
          NormalizeWeights(this,Always);
          return false;
        }
        uVar7 = (ushort)((uint)uVar1 >> 0x10);
        bVar6 = uVar7 < uStackX_12;
        if (uVar7 == uStackX_12) {
          return true;
        }
        local_res8 = CONCAT22(uStackX_12,(short)uVar1);
        *(undefined4 *)
         ((((TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>
             *)FVar12)->AllocatorInstance).InlineData + (longlong)iVar8 * 4) = local_res8;
        goto LAB_14237b8c0;
      }
      goto LAB_14237b76e;
    }
    pTVar9 = (TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>
              *)((pTVar9->AllocatorInstance).InlineData + 4);
  } while( true );
}

// Blend<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>,UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>,TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_> @ 14237b940

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::AnimationCore::
TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
::
Blend<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>,UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>,TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>
          (TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
           *this,TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
                 *param_1,
          TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
          *param_2,float param_3,FBoneWeightsSettings *param_4)

{
  code *pcVar1;
  ushort uVar2;
  TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
  *pTVar3;
  bool bVar4;
  uint uVar5;
  ForElementType<UE::AnimationCore::FBoneWeight> FVar6;
  int iVar7;
  TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>
  *pTVar8;
  ForElementType<int> FVar9;
  longlong lVar10;
  TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>
  *pTVar11;
  ForElementType<UE::AnimationCore::FBoneWeight> FVar12;
  ForElementType<UE::AnimationCore::FBoneWeight> FVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  ForElementType<int> FVar17;
  longlong lVar18;
  uint uVar19;
  longlong lVar20;
  undefined1 auStackY_228 [32];
  FIdentityFunctor local_1d8;
  uint local_1d6;
  uint local_1d2;
  FBoneWeight local_1cc;
  uint local_1c8;
  int local_1c4;
  int local_1c0;
  FBoneWeightsSettings *local_1b8;
  ForElementType<UE::AnimationCore::FBoneWeight> local_1b0;
  FBoneWeight local_1a8 [2];
  TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
  *local_1a0;
  TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>
  *local_198;
  TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>
  *local_190;
  FBoneWeightsSettings *local_188;
  TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
  *local_180;
  ForElementType<UE::AnimationCore::FBoneWeight> local_178;
  int iStack_170;
  undefined4 uStack_16c;
  TArrayView<UE::AnimationCore::FBoneWeight,int> local_168;
  TArray<int,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_> local_158;
  TArray<int,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_> local_118;
  ForElementType<UE::AnimationCore::FBoneWeight> local_d8;
  int local_70;
  int local_6c;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_228;
  local_188 = param_4;
  local_1a0 = param_2;
  local_180 = this;
  if ((param_1->Container->ArrayNum == 0) && (param_2->Container->ArrayNum == 0)) {
    if (param_4->bHasDefaultBoneIndex == false) {
      FBoneWeights::
      TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>
      ::SetNum(this->Container,0);
    }
    else {
      FBoneWeights::
      TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>
      ::SetNum(this->Container,1);
      pTVar8 = *(TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>
                 **)&(this->Container->AllocatorInstance).SecondaryData.field_0x0;
      if (pTVar8 == (TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>
                     *)0x0) {
        pTVar8 = this->Container;
      }
      *(uint *)(pTVar8->AllocatorInstance).InlineData = param_4->DefaultBoneIndex | 0xffff0000;
    }
  }
  else {
    iVar14 = 0;
    local_118.ArrayMax = 0xc;
    local_118.AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
    local_118.ArrayNum = 0;
    TArray<int,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>::SetNumUninitialized
              (&local_118,param_1->Container->ArrayNum,Default);
    iVar15 = local_118.ArrayNum;
    FVar9 = (ForElementType<int>)&local_118;
    if (local_118.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
      FVar9 = local_118.AllocatorInstance.SecondaryData;
    }
    if ((local_118.ArrayNum < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar4)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    FVar17 = FVar9;
    if (0 < iVar15) {
      do {
        if ((iVar14 < 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar4)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        *(int *)FVar17 = iVar14;
        iVar14 = iVar14 + 1;
        FVar17 = (ForElementType<int>)((longlong)FVar17 + 4);
      } while (iVar14 < iVar15);
    }
    iVar14 = 0;
    local_198 = param_1->Container;
    AlgoImpl::
    IntroSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,__UE::AnimationCore::TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>::Blend<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>,UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>,TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_::__l2::<lambda_1>::operator()<UE::AnimationCore::TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>_>_::__l2::<lambda_1>_>_>
              ((int *)FVar9,iVar15,local_1d8,(<lambda_1> *)&local_198);
    local_158.AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
    local_158.ArrayNum = 0;
    local_158.ArrayMax = 0xc;
    TArray<int,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>::SetNumUninitialized
              (&local_158,param_2->Container->ArrayNum,Default);
    iVar15 = local_158.ArrayNum;
    FVar9 = (ForElementType<int>)&local_158;
    if (local_158.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
      FVar9 = local_158.AllocatorInstance.SecondaryData;
    }
    if ((local_158.ArrayNum < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar4)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    FVar17 = FVar9;
    if (0 < iVar15) {
      do {
        if ((iVar14 < 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar4)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        *(int *)FVar17 = iVar14;
        iVar14 = iVar14 + 1;
        FVar17 = (ForElementType<int>)((longlong)FVar17 + 4);
      } while (iVar14 < iVar15);
    }
    local_190 = param_2->Container;
    AlgoImpl::
    IntroSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,__UE::AnimationCore::TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>::Blend<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>,UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>,TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_::__l2::<lambda_1>::operator()<UE::AnimationCore::TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>_>_::__l2::<lambda_1>_>_>
              ((int *)FVar9,iVar15,local_1d8,(<lambda_1> *)&local_190);
    local_d8.SecondaryData = (ForElementType<UE::AnimationCore::FBoneWeight>)0x0;
    local_70 = 0;
    local_6c = 0x18;
    uVar19 = param_2->Container->ArrayNum + param_1->Container->ArrayNum;
    if ((int)uVar19 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)uVar19);
    }
    if (0x18 < (int)uVar19) {
      Core::Private::
      ReallocTo<2,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::AnimationCore::FBoneWeight>_>
                (4,2,uVar19,&local_d8,0,&local_6c);
    }
    FVar12 = (ForElementType<UE::AnimationCore::FBoneWeight>)&local_d8;
    pTVar8 = param_1->Container;
    uVar19 = 0;
    local_1b8 = param_4;
    uVar16 = 0;
    local_1c4 = (int)(param_3 * __real_477fff00);
    local_1c8 = 0;
    iVar15 = 0xffff - local_1c4;
    local_1c0 = iVar15;
    local_1b0 = FVar12;
    if (0 < pTVar8->ArrayNum) {
      lVar18 = 0;
      lVar20 = 0;
      do {
        if (param_2->Container->ArrayNum <= (int)uVar19) break;
        uVar5 = 0;
        if ((int)uVar16 < local_118.ArrayNum) {
          uVar5 = ~uVar16 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        FVar9 = (ForElementType<int>)&local_118;
        if (local_118.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
          FVar9 = local_118.AllocatorInstance.SecondaryData;
        }
        pTVar8 = *(TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>
                   **)&(param_1->Container->AllocatorInstance).SecondaryData.field_0x0;
        pTVar11 = param_1->Container;
        if (pTVar8 != (TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>
                       *)0x0) {
          pTVar11 = pTVar8;
        }
        local_1cc = *(FBoneWeight *)
                     ((pTVar11->AllocatorInstance).InlineData +
                     (longlong)*(int *)(lVar20 + (longlong)FVar9) * 4);
        uVar5 = 0;
        if ((int)uVar19 < local_158.ArrayNum) {
          uVar5 = ~uVar19 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        uVar2 = local_1cc.BoneIndex;
        FVar9 = (ForElementType<int>)&local_158;
        if (local_158.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
          FVar9 = local_158.AllocatorInstance.SecondaryData;
        }
        pTVar8 = *(TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>
                   **)&(param_2->Container->AllocatorInstance).SecondaryData.field_0x0;
        pTVar11 = param_2->Container;
        if (pTVar8 != (TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>
                       *)0x0) {
          pTVar11 = pTVar8;
        }
        local_1a8[0] = *(FBoneWeight *)
                        ((pTVar11->AllocatorInstance).InlineData +
                        (longlong)*(int *)(lVar18 + (longlong)FVar9) * 4);
        if (local_1cc.BoneIndex == local_1a8[0].BoneIndex) {
          iVar15 = ((uint)local_1a8[0] >> 0x10) * local_1c4 + ((uint)local_1cc >> 0x10) * iVar15;
          if (local_70 == local_6c) {
            local_70 = Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::AnimationCore::FBoneWeight>_>
                                 (0x204,&local_d8,&local_6c);
          }
          lVar10 = (longlong)local_70;
          FVar12 = (ForElementType<UE::AnimationCore::FBoneWeight>)&local_d8;
          if (local_d8.SecondaryData != (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
            FVar12 = local_d8.SecondaryData;
          }
          uVar16 = uVar16 + 1;
          lVar20 = lVar20 + 4;
          local_70 = local_70 + 1;
          *(short *)((uchar *)((longlong)FVar12 + 2) + lVar10 * 4) =
               ((short)(iVar15 / 0xffff) + (short)(iVar15 >> 0x1f)) -
               (short)((longlong)iVar15 * 0x80008001 >> 0x3f);
          *(ushort *)((longlong)FVar12 + lVar10 * 4) = uVar2;
          iVar15 = local_1c0;
LAB_14237bdf4:
          uVar19 = uVar19 + 1;
          lVar18 = lVar18 + 4;
          local_1c8 = uVar19;
        }
        else {
          if (local_1a8[0].BoneIndex <= local_1cc.BoneIndex) {
            `UE::AnimationCore::
            TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
            ::
            Blend<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>,UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>,TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>'
            ::__l2::<lambda_2>::operator()(&local_1b8,local_1a8,local_1c4);
            goto LAB_14237bdf4;
          }
          `UE::AnimationCore::
          TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
          ::
          Blend<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>,UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>,TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>'
          ::__l2::<lambda_2>::operator()(&local_1b8,&local_1cc,iVar15);
          uVar16 = uVar16 + 1;
          lVar20 = lVar20 + 4;
        }
        pTVar8 = param_1->Container;
        param_2 = local_1a0;
      } while ((int)uVar16 < pTVar8->ArrayNum);
      FVar12 = local_1b0;
      iVar15 = local_1c0;
      if ((int)uVar16 < pTVar8->ArrayNum) {
        lVar18 = (longlong)(int)uVar16 * 4;
        do {
          uVar19 = 0;
          if ((int)uVar16 < local_118.ArrayNum) {
            uVar19 = ~uVar16 >> 0x1f;
          }
          if ((uVar19 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          FVar9 = (ForElementType<int>)&local_118;
          if (local_118.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
            FVar9 = local_118.AllocatorInstance.SecondaryData;
          }
          pTVar8 = *(TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>
                     **)&(param_1->Container->AllocatorInstance).SecondaryData.field_0x0;
          pTVar11 = param_1->Container;
          if (pTVar8 != (TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>
                         *)0x0) {
            pTVar11 = pTVar8;
          }
          uVar19 = *(uint *)((pTVar11->AllocatorInstance).InlineData +
                            (longlong)*(int *)(lVar18 + (longlong)FVar9) * 4);
          local_1d6 = uVar19;
          if (local_1b8->bBlendZeroInfluence == false) {
            FVar13 = *(ForElementType<UE::AnimationCore::FBoneWeight> *)((longlong)FVar12 + 0x60);
            FVar6 = FVar13;
            if (FVar13 == (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
              FVar6 = FVar12;
            }
            if ((ulonglong)FVar6 <= &local_1d6) {
              FVar6 = FVar12;
              if (FVar13 != (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
                FVar6 = FVar13;
              }
              if ((&local_1d6 <
                   (uint *)((longlong)FVar6 + (longlong)*(int *)((longlong)FVar12 + 0x6c) * 4)) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar4)) {
                pcVar1 = (code *)swi(3);
                (*pcVar1)();
                return;
              }
            }
            iVar14 = *(int *)((longlong)FVar12 + 0x68);
            if (iVar14 == *(int *)((longlong)FVar12 + 0x6c)) {
              iVar14 = Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::AnimationCore::FBoneWeight>_>
                                 (0x204,(ForElementType<UE::AnimationCore::FBoneWeight> *)FVar12,
                                  (int *)((longlong)FVar12 + 0x6c));
            }
            *(int *)((longlong)FVar12 + 0x68) = iVar14 + 1;
            FVar13 = FVar12;
            if (*(ForElementType<UE::AnimationCore::FBoneWeight> *)((longlong)FVar12 + 0x60) !=
                (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
              FVar13 = *(ForElementType<UE::AnimationCore::FBoneWeight> *)((longlong)FVar12 + 0x60);
            }
            *(uint *)((longlong)FVar13 + (longlong)iVar14 * 4) = local_1d6;
          }
          else {
            iVar7 = (uVar19 >> 0x10) * iVar15;
            iVar14 = *(int *)((longlong)FVar12 + 0x68);
            if (iVar14 == *(int *)((longlong)FVar12 + 0x6c)) {
              iVar14 = Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::AnimationCore::FBoneWeight>_>
                                 (0x204,(ForElementType<UE::AnimationCore::FBoneWeight> *)FVar12,
                                  (int *)((longlong)FVar12 + 0x6c));
            }
            *(int *)((longlong)FVar12 + 0x68) = iVar14 + 1;
            FVar13 = FVar12;
            if (*(ForElementType<UE::AnimationCore::FBoneWeight> *)((longlong)FVar12 + 0x60) !=
                (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
              FVar13 = *(ForElementType<UE::AnimationCore::FBoneWeight> *)((longlong)FVar12 + 0x60);
            }
            *(short *)((longlong)FVar13 + (longlong)iVar14 * 4) = (short)uVar19;
            *(short *)((longlong)FVar13 + 2 + (longlong)iVar14 * 4) =
                 ((short)(iVar7 / 0xffff) + (short)(iVar7 >> 0x1f)) -
                 (short)((longlong)iVar7 * 0x80008001 >> 0x3f);
          }
          uVar16 = uVar16 + 1;
          lVar18 = lVar18 + 4;
          uVar19 = local_1c8;
        } while ((int)uVar16 < param_1->Container->ArrayNum);
      }
    }
    pTVar3 = local_1a0;
    if ((int)uVar19 < local_1a0->Container->ArrayNum) {
      lVar18 = (longlong)(int)uVar19 * 4;
      do {
        uVar16 = 0;
        if ((int)uVar19 < local_158.ArrayNum) {
          uVar16 = ~uVar19 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        pTVar8 = pTVar3->Container;
        FVar9 = (ForElementType<int>)&local_158;
        if (local_158.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
          FVar9 = local_158.AllocatorInstance.SecondaryData;
        }
        pTVar11 = *(TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>
                    **)&(pTVar8->AllocatorInstance).SecondaryData.field_0x0;
        if (pTVar11 !=
            (TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>
             *)0x0) {
          pTVar8 = pTVar11;
        }
        uVar16 = *(uint *)((pTVar8->AllocatorInstance).InlineData +
                          (longlong)*(int *)(lVar18 + (longlong)FVar9) * 4);
        local_1d2 = uVar16;
        if (local_1b8->bBlendZeroInfluence == false) {
          FVar13 = *(ForElementType<UE::AnimationCore::FBoneWeight> *)((longlong)FVar12 + 0x60);
          FVar6 = FVar13;
          if (FVar13 == (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
            FVar6 = FVar12;
          }
          if ((ulonglong)FVar6 <= &local_1d2) {
            FVar6 = FVar12;
            if (FVar13 != (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
              FVar6 = FVar13;
            }
            if ((&local_1d2 <
                 (uint *)((longlong)FVar6 + (longlong)*(int *)((longlong)FVar12 + 0x6c) * 4)) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar4)) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
          }
          iVar15 = *(int *)((longlong)FVar12 + 0x68);
          if (iVar15 == *(int *)((longlong)FVar12 + 0x6c)) {
            iVar15 = Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::AnimationCore::FBoneWeight>_>
                               (0x204,(ForElementType<UE::AnimationCore::FBoneWeight> *)FVar12,
                                (int *)((longlong)FVar12 + 0x6c));
          }
          *(int *)((longlong)FVar12 + 0x68) = iVar15 + 1;
          FVar13 = FVar12;
          if (*(ForElementType<UE::AnimationCore::FBoneWeight> *)((longlong)FVar12 + 0x60) !=
              (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
            FVar13 = *(ForElementType<UE::AnimationCore::FBoneWeight> *)((longlong)FVar12 + 0x60);
          }
          *(uint *)((longlong)FVar13 + (longlong)iVar15 * 4) = local_1d2;
        }
        else {
          iVar14 = (uVar16 >> 0x10) * local_1c4;
          iVar15 = *(int *)((longlong)FVar12 + 0x68);
          if (iVar15 == *(int *)((longlong)FVar12 + 0x6c)) {
            iVar15 = Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::AnimationCore::FBoneWeight>_>
                               (0x204,(ForElementType<UE::AnimationCore::FBoneWeight> *)FVar12,
                                (int *)((longlong)FVar12 + 0x6c));
          }
          *(int *)((longlong)FVar12 + 0x68) = iVar15 + 1;
          FVar13 = FVar12;
          if (*(ForElementType<UE::AnimationCore::FBoneWeight> *)((longlong)FVar12 + 0x60) !=
              (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
            FVar13 = *(ForElementType<UE::AnimationCore::FBoneWeight> *)((longlong)FVar12 + 0x60);
          }
          *(short *)((longlong)FVar13 + (longlong)iVar15 * 4) = (short)uVar16;
          *(short *)((longlong)FVar13 + 2 + (longlong)iVar15 * 4) =
               ((short)(iVar14 / 0xffff) + (short)(iVar14 >> 0x1f)) -
               (short)((longlong)iVar14 * 0x80008001 >> 0x3f);
        }
        uVar19 = uVar19 + 1;
        lVar18 = lVar18 + 4;
      } while ((int)uVar19 < pTVar3->Container->ArrayNum);
    }
    iVar15 = local_70;
    local_178 = (ForElementType<UE::AnimationCore::FBoneWeight>)&local_d8;
    if (local_d8.SecondaryData != (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
      local_178 = local_d8.SecondaryData;
    }
    if ((local_70 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar4)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    iStack_170 = iVar15;
    local_168._12_4_ = uStack_16c;
    local_168.ArrayNum = iVar15;
    local_168.DataPtr = (FBoneWeight *)local_178;
    SetBoneWeightsInternal(local_180,&local_168,local_188);
    if (local_d8.SecondaryData != (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
      FMemory::Free((void *)local_d8.SecondaryData);
    }
    if (local_158.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
      FMemory::Free((void *)local_158.AllocatorInstance.SecondaryData);
    }
    if (local_118.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
      FMemory::Free((void *)local_118.AllocatorInstance.SecondaryData);
    }
  }
  return;
}

// SetBoneWeights<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_> @ 14237e000

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::AnimationCore::
TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
::
SetBoneWeights<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>
          (TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
           *this,ushort *param_1,float *param_2,int param_3,FBoneWeightsSettings *param_4)

{
  code *pcVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  bool bVar5;
  ushort uVar6;
  uint uVar7;
  ForElementType<UE::AnimationCore::FBoneWeight> FVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ForElementType<UE::AnimationCore::FBoneWeight> FVar12;
  float fVar13;
  undefined1 auStackY_148 [32];
  undefined4 local_f8;
  ForElementType<UE::AnimationCore::FBoneWeight> local_e8;
  int iStack_e0;
  undefined4 uStack_dc;
  TArrayView<UE::AnimationCore::FBoneWeight,int> local_d8;
  ForElementType<UE::AnimationCore::FBoneWeight> local_c8;
  uint local_90;
  uint local_8c;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_148;
  uVar11 = 0;
  local_90 = 0;
  local_c8.SecondaryData = (ForElementType<UE::AnimationCore::FBoneWeight>)0x0;
  local_8c = 0xc;
  if (param_3 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_3);
  }
  uVar10 = uVar11;
  if (0xc < param_3) {
    Core::Private::
    ReallocTo<2,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::AnimationCore::FBoneWeight>_>
              (4,2,param_3,&local_c8,0,(int *)&local_8c);
    uVar10 = (ulonglong)local_90;
  }
  fVar4 = __real_477fff00;
  fVar3 = __real_3f000000;
  fVar2 = __real_3f800000;
  iVar9 = (int)uVar10;
  FVar12 = local_c8.SecondaryData;
  if ((longlong)param_3 != 0) {
    do {
      fVar13 = param_2[uVar11];
      if (fVar2 <= param_2[uVar11]) {
        fVar13 = fVar2;
      }
      if (fVar13 <= 0.0) {
        fVar13 = 0.0;
      }
      uVar6 = (ushort)(int)(fVar13 * fVar4 + fVar3);
      local_f8 = CONCAT22(uVar6,param_1[uVar11]);
      if (param_4->WeightThreshold <= uVar6) {
        FVar8 = (ForElementType<UE::AnimationCore::FBoneWeight>)&local_c8;
        if (FVar12 != (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
          FVar8 = FVar12;
        }
        uVar7 = (uint)uVar10;
        if ((ulonglong)FVar8 <= &local_f8) {
          FVar8 = (ForElementType<UE::AnimationCore::FBoneWeight>)&local_c8;
          if (FVar12 != (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
            FVar8 = FVar12;
          }
          if ((&local_f8 < (undefined4 *)((longlong)FVar8 + (longlong)(int)local_8c * 4)) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), FVar12 = local_c8.SecondaryData, uVar7 = local_90, bVar5)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
        }
        if (uVar7 == local_8c) {
          uVar7 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::AnimationCore::FBoneWeight>_>
                            (0x204,&local_c8,(int *)&local_8c);
          FVar12 = local_c8.SecondaryData;
        }
        local_90 = uVar7 + 1;
        FVar8 = (ForElementType<UE::AnimationCore::FBoneWeight>)&local_c8;
        if (FVar12 != (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
          FVar8 = FVar12;
        }
        *(undefined4 *)((longlong)FVar8 + (longlong)(int)uVar7 * 4) = local_f8;
        uVar10 = (ulonglong)local_90;
        FVar12 = local_c8.SecondaryData;
      }
      iVar9 = (int)uVar10;
      uVar11 = uVar11 + 1;
    } while ((longlong)uVar11 < (longlong)param_3);
  }
  local_e8 = (ForElementType<UE::AnimationCore::FBoneWeight>)&local_c8;
  if (FVar12 != (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
    local_e8 = FVar12;
  }
  if ((iVar9 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar5)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_d8._12_4_ = uStack_dc;
  local_d8.ArrayNum = iVar9;
  local_d8.DataPtr = (FBoneWeight *)local_e8;
  iStack_e0 = iVar9;
  SetBoneWeightsInternal(this,&local_d8,param_4);
  if (local_c8.SecondaryData != (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
    FMemory::Free((void *)local_c8.SecondaryData);
  }
  return;
}

// SetBoneWeights<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_> @ 14237e2a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::AnimationCore::
TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
::
SetBoneWeights<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>
          (TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
           *this,TArrayView<UE::AnimationCore::FBoneWeight_const_,int> *param_1,
          FBoneWeightsSettings *param_2)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  ForElementType<UE::AnimationCore::FBoneWeight> FVar5;
  ForElementType<UE::AnimationCore::FBoneWeight> FVar6;
  ForElementType<UE::AnimationCore::FBoneWeight> FVar7;
  ForElementType<UE::AnimationCore::FBoneWeight> FVar8;
  undefined1 auStackY_e8 [32];
  undefined4 uStack_8c;
  TArrayView<UE::AnimationCore::FBoneWeight,int> local_88;
  ForElementType<UE::AnimationCore::FBoneWeight> local_78;
  int local_40;
  int local_3c;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  uVar1 = param_1->ArrayNum;
  local_3c = 0xc;
  local_78.SecondaryData = (ForElementType<UE::AnimationCore::FBoneWeight>)0x0;
  local_40 = 0;
  if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar1);
  }
  if (0xc < (int)uVar1) {
    Core::Private::
    ReallocTo<2,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::AnimationCore::FBoneWeight>_>
              (4,2,uVar1,&local_78,0,&local_3c);
  }
  FVar7 = (ForElementType<UE::AnimationCore::FBoneWeight>)param_1->DataPtr;
  FVar6 = (ForElementType<UE::AnimationCore::FBoneWeight>)
          ((longlong)FVar7 + (longlong)(int)uVar1 * 4);
  FVar8 = local_78.SecondaryData;
  iVar4 = local_40;
  for (; FVar7 != FVar6;
      FVar7 = (ForElementType<UE::AnimationCore::FBoneWeight>)((longlong)FVar7 + 4)) {
    if (param_2->WeightThreshold <= *(ushort *)((longlong)FVar7 + 2)) {
      FVar5 = (ForElementType<UE::AnimationCore::FBoneWeight>)&local_78;
      if (FVar8 != (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
        FVar5 = FVar8;
      }
      if ((ulonglong)FVar5 <= (ulonglong)FVar7) {
        FVar5 = (ForElementType<UE::AnimationCore::FBoneWeight>)&local_78;
        if (FVar8 != (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
          FVar5 = FVar8;
        }
        if (((ulonglong)FVar7 < (ulonglong)((longlong)FVar5 + (longlong)local_3c * 4)) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), FVar8 = local_78.SecondaryData, iVar4 = local_40, bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      if (iVar4 == local_3c) {
        iVar4 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::AnimationCore::FBoneWeight>_>
                          (0x204,&local_78,&local_3c);
        FVar8 = local_78.SecondaryData;
      }
      local_40 = iVar4 + 1;
      FVar5 = (ForElementType<UE::AnimationCore::FBoneWeight>)&local_78;
      if (FVar8 != (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
        FVar5 = FVar8;
      }
      *(FBoneWeight *)((longlong)FVar5 + (longlong)iVar4 * 4) = *(FBoneWeight *)FVar7;
      FVar8 = local_78.SecondaryData;
      iVar4 = local_40;
    }
  }
  FVar6 = (ForElementType<UE::AnimationCore::FBoneWeight>)&local_78;
  if (FVar8 != (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
    FVar6 = FVar8;
  }
  if ((iVar4 < 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_88._12_4_ = uStack_8c;
  local_88.ArrayNum = iVar4;
  local_88.DataPtr = (FBoneWeight *)FVar6;
  SetBoneWeightsInternal(this,&local_88,param_2);
  if (local_78.SecondaryData != (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
    FMemory::Free((void *)local_78.SecondaryData);
  }
  return;
}

// operator() @ 14237efa0

void __thiscall
`UE::AnimationCore::
TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
::
Blend<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>,UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>,TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>'
::__l2::<lambda_2>::operator()(void *this,FBoneWeight *param_1,int param_2)

{
  ushort uVar1;
  ForElementType<UE::AnimationCore::FBoneWeight> FVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ForElementType<UE::AnimationCore::FBoneWeight> FVar6;
  int iVar7;
  
  FVar2 = *(ForElementType<UE::AnimationCore::FBoneWeight> *)((longlong)this + 8);
  if (*(char *)(*(longlong *)this + 0xd) != '\0') {
    uVar1 = param_1->BoneIndex;
    iVar7 = (uint)param_1->RawWeight * param_2;
    iVar5 = *(int *)((ForElementType<UE::AnimationCore::FBoneWeight> *)((longlong)FVar2 + 0x68))->
                    InlineData;
    if (iVar5 == *(int *)((longlong)FVar2 + 0x6c)) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::AnimationCore::FBoneWeight>_>
                        (0x204,(ForElementType<UE::AnimationCore::FBoneWeight> *)FVar2,
                         (int *)((longlong)FVar2 + 0x6c));
    }
    *(int *)((ForElementType<UE::AnimationCore::FBoneWeight> *)((longlong)FVar2 + 0x68))->InlineData
         = iVar5 + 1;
    FVar6 = *(ForElementType<UE::AnimationCore::FBoneWeight> *)((longlong)FVar2 + 0x60);
    if (*(ForElementType<UE::AnimationCore::FBoneWeight> *)((longlong)FVar2 + 0x60) ==
        (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
      FVar6 = FVar2;
    }
    *(short *)((longlong)FVar6 + 2 + (longlong)iVar5 * 4) =
         ((short)(iVar7 / 0xffff) + (short)(iVar7 >> 0x1f)) -
         (short)((longlong)iVar7 * 0x80008001 >> 0x3f);
    *(ushort *)((longlong)FVar6 + (longlong)iVar5 * 4) = uVar1;
    return;
  }
  FVar6 = *(ForElementType<UE::AnimationCore::FBoneWeight> *)((longlong)FVar2 + 0x60);
  if (*(ForElementType<UE::AnimationCore::FBoneWeight> *)((longlong)FVar2 + 0x60) ==
      (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
    FVar6 = FVar2;
  }
  if (((ulonglong)FVar6 <= param_1) &&
     (param_1 < (FBoneWeight *)((longlong)FVar6 + (longlong)*(int *)((longlong)FVar2 + 0x6c) * 4)))
  {
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
  iVar5 = *(int *)((longlong)FVar2 + 0x68);
  if (iVar5 == *(int *)((longlong)FVar2 + 0x6c)) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::AnimationCore::FBoneWeight>_>
                      (0x204,(ForElementType<UE::AnimationCore::FBoneWeight> *)FVar2,
                       (int *)((longlong)FVar2 + 0x6c));
  }
  *(int *)((longlong)FVar2 + 0x68) = iVar5 + 1;
  FVar6 = *(ForElementType<UE::AnimationCore::FBoneWeight> *)((longlong)FVar2 + 0x60);
  if (*(ForElementType<UE::AnimationCore::FBoneWeight> *)((longlong)FVar2 + 0x60) ==
      (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
    FVar6 = FVar2;
  }
  *(FBoneWeight *)((longlong)FVar6 + (longlong)iVar5 * 4) = *param_1;
  return;
}

// CullWeights @ 1423815c0

bool __thiscall
UE::AnimationCore::
TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
::CullWeights(TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
              *this,FBoneWeightsSettings *param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  ForElementType<UE::AnimationCore::FBoneWeight> FVar6;
  uint uVar7;
  ulonglong uVar8;
  ForElementType<UE::AnimationCore::FBoneWeight> FVar9;
  uint uVar10;
  bool bVar11;
  longlong lVar12;
  
  iVar5 = param_1->MaxWeightCount;
  uVar10 = this->Container->ArrayNum;
  uVar7 = uVar10;
  if (iVar5 < (int)uVar10) {
    FBoneWeights::
    TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>
    ::SetNum(this->Container,iVar5);
    uVar7 = param_1->MaxWeightCount;
  }
  bVar3 = iVar5 < (int)uVar10;
  if (0 < (int)uVar7) {
    lVar12 = (longlong)(int)uVar7;
    bVar11 = bVar3;
    do {
      FVar9 = (ForElementType<UE::AnimationCore::FBoneWeight>)this->Container;
      uVar8 = (ulonglong)uVar7;
      FVar6 = FVar9;
      if (*(ForElementType<UE::AnimationCore::FBoneWeight> *)((longlong)FVar9 + 0x30) !=
          (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
        FVar6 = *(ForElementType<UE::AnimationCore::FBoneWeight> *)((longlong)FVar9 + 0x30);
      }
      if (param_1->WeightThreshold <= *(ushort *)((undefined1 *)((longlong)FVar6 + -2) + lVar12 * 4)
         ) {
        return bVar11;
      }
      iVar5 = *(int *)((longlong)FVar9 + 0x38);
      piVar1 = (int *)((longlong)FVar9 + 0x38);
      uVar7 = uVar7 - 1;
      lVar12 = lVar12 + -1;
      if (iVar5 < (int)uVar7) {
        Core::Private::
        ReallocGrow<2,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::AnimationCore::FBoneWeight>_>
                  (4,2,uVar7 - iVar5,(ForElementType<UE::AnimationCore::FBoneWeight> *)FVar9,piVar1,
                   (int *)((longlong)FVar9 + 0x3c));
      }
      else {
        if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
          Core::Private::OnInvalidArrayNum((ulonglong)uVar7);
        }
        if ((int)uVar7 < iVar5) {
          uVar10 = iVar5 - uVar7;
          if (((int)(uVar10 | uVar7) < 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x458,
                                 L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                ), bVar3)) {
            pcVar2 = (code *)swi(3);
            uVar4 = (*pcVar2)();
            return (bool)uVar4;
          }
          if (uVar10 != 0) {
            if (*(ForElementType<UE::AnimationCore::FBoneWeight> **)((longlong)FVar9 + 0x30) !=
                (ForElementType<UE::AnimationCore::FBoneWeight> *)0x0) {
              FVar9 = (ForElementType<UE::AnimationCore::FBoneWeight>)
                      *(ForElementType<UE::AnimationCore::FBoneWeight> **)((longlong)FVar9 + 0x30);
            }
            iVar5 = (*piVar1 - uVar10) - uVar7;
            if (iVar5 != 0) {
              memmove(((ForElementType<UE::AnimationCore::FBoneWeight> *)FVar9)->InlineData +
                      uVar8 * 4 + -4,
                      ((ForElementType<UE::AnimationCore::FBoneWeight> *)FVar9)->InlineData +
                      uVar8 * 4 + -4 + (longlong)(int)uVar10 * 4,(longlong)iVar5 << 2);
            }
            *piVar1 = *piVar1 - uVar10;
          }
        }
      }
      bVar11 = true;
      bVar3 = true;
    } while (0 < (int)uVar7);
  }
  return bVar3;
}

// NormalizeWeights @ 142384260

/* WARNING: Type propagation algorithm not settling */

void __thiscall
UE::AnimationCore::
TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
::NormalizeWeights(TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
                   *this,EBoneWeightNormalizeType param_1)

{
  int iVar1;
  uint uVar2;
  ForElementType<UE::AnimationCore::FBoneWeight> FVar3;
  code *pcVar4;
  bool bVar5;
  longlong lVar6;
  longlong lVar7;
  TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>
  *pTVar8;
  longlong lVar9;
  ushort uVar10;
  ForElementType<UE::AnimationCore::FBoneWeight> FVar11;
  TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>
  *pTVar12;
  ushort uVar13;
  longlong lVar14;
  TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>
  *pTVar15;
  longlong lVar16;
  undefined4 local_res8;
  undefined4 local_res10;
  code *local_res18 [2];
  
  if (param_1 != None) {
    FVar3 = (ForElementType<UE::AnimationCore::FBoneWeight>)this->Container;
    iVar1 = *(int *)((longlong)FVar3 + 0x38);
    lVar6 = (longlong)iVar1;
    if (iVar1 != 0) {
      if (iVar1 == 1) {
        if (param_1 == Always) {
          FVar11 = *(ForElementType<UE::AnimationCore::FBoneWeight> *)
                    &((ForElementType<UE::AnimationCore::FBoneWeight> *)((longlong)FVar3 + 0x30))->
                     field_0x0;
          if (FVar11 == (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
            FVar11 = FVar3;
          }
          local_res10 = CONCAT22(0xffff,(short)*(undefined4 *)
                                                (((
                                                  TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>
                                                  *)FVar11)->AllocatorInstance).InlineData);
          *(undefined4 *)
           (((TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>
              *)FVar11)->AllocatorInstance).InlineData = local_res10;
          return;
        }
      }
      else {
        lVar14 = 0;
        lVar16 = lVar14;
        if (0 < iVar1) {
          lVar7 = lVar14;
          do {
            FVar11 = FVar3;
            if (*(ForElementType<UE::AnimationCore::FBoneWeight> *)((longlong)FVar3 + 0x30) !=
                (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
              FVar11 = *(ForElementType<UE::AnimationCore::FBoneWeight> *)((longlong)FVar3 + 0x30);
            }
            lVar9 = lVar7 * 4;
            lVar7 = lVar7 + 1;
            lVar16 = lVar16 + (ulonglong)*(ushort *)((uchar *)((longlong)FVar11 + 2) + lVar9);
          } while (lVar7 < lVar6);
        }
        if (param_1 == Always) {
          if (lVar16 == 0) {
            bVar5 = Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<_2178690579725024073>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AnimationCore\\Public\\BoneWeights.h"
                               ,0x4b7,"WeightSum != 0");
            if (!bVar5) {
              return;
            }
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        else if (lVar16 < 0x10000) {
          return;
        }
        bVar5 = false;
        uVar13 = 0xffff;
        lVar7 = lVar14;
        if (0 < lVar6) {
          do {
            pTVar15 = this->Container;
            uVar10 = 0xffff;
            pTVar12 = *(TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>
                        **)&(pTVar15->AllocatorInstance).SecondaryData.field_0x0;
            pTVar8 = pTVar15;
            if (pTVar12 !=
                (TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>
                 *)0x0) {
              pTVar8 = pTVar12;
            }
            uVar2 = *(uint *)((pTVar8->AllocatorInstance).InlineData + lVar14 * 4);
            lVar7 = lVar7 + (ulonglong)(uVar2 >> 0x10) * 0xffff;
            lVar9 = lVar7 / lVar16;
            if (lVar9 < 0xffff) {
              uVar10 = (ushort)lVar9;
            }
            local_res8 = CONCAT22(uVar10,(short)uVar2);
            if (pTVar12 !=
                (TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>
                 *)0x0) {
              pTVar15 = pTVar12;
            }
            if (uVar13 < uVar10) {
              bVar5 = true;
            }
            *(undefined4 *)((pTVar15->AllocatorInstance).InlineData + lVar14 * 4) = local_res8;
            lVar14 = lVar14 + 1;
            lVar7 = lVar7 - (ulonglong)uVar10 * lVar16;
            uVar13 = uVar10;
          } while (lVar14 < lVar6);
          if (bVar5) {
            pTVar15 = this->Container;
            local_res18[0] = FBoneWeight::DescSortByWeightPredicate;
            pTVar12 = *(TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>
                        **)&(pTVar15->AllocatorInstance).SecondaryData.field_0x0;
            if (pTVar12 ==
                (TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>
                 *)0x0) {
              pTVar12 = pTVar15;
            }
            AlgoImpl::
            IntroSortInternal<UE::AnimationCore::FBoneWeight,int,FIdentityFunctor,TDereferenceWrapper<UE::AnimationCore::FBoneWeight,bool_(__cdecl*)(UE::AnimationCore::FBoneWeight_const_&,UE::AnimationCore::FBoneWeight_const_&)>_>
                      ((FBoneWeight *)pTVar12,pTVar15->ArrayNum,local_res10._0_1_,
                       (TDereferenceWrapper<UE::AnimationCore::FBoneWeight,bool_(__cdecl*)(UE::AnimationCore::FBoneWeight_const_&,UE::AnimationCore::FBoneWeight_const_&)>
                        )local_res18);
          }
        }
      }
    }
  }
  return;
}

// SetBoneWeightsInternal @ 142385960

void __thiscall
UE::AnimationCore::
TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
::SetBoneWeightsInternal
          (TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
           *this,TArrayView<UE::AnimationCore::FBoneWeight,int> *param_1,
          FBoneWeightsSettings *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>
  *pTVar5;
  TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>
  *pTVar6;
  longlong lVar7;
  int iVar8;
  uint uVar9;
  FIdentityFunctor local_res10;
  
  iVar1 = param_1->ArrayNum;
  AlgoImpl::
  IntroSortInternal<UE::AnimationCore::FBoneWeight,int,FIdentityFunctor,TDereferenceWrapper<UE::AnimationCore::FBoneWeight,bool___cdecl(UE::AnimationCore::FBoneWeight_const_&,UE::AnimationCore::FBoneWeight_const_&)>_>
            (param_1->DataPtr,iVar1,local_res10,
             (TDereferenceWrapper<UE::AnimationCore::FBoneWeight,bool___cdecl(UE::AnimationCore::FBoneWeight_const_&,UE::AnimationCore::FBoneWeight_const_&)>
              )0x142381760);
  iVar8 = param_2->MaxWeightCount;
  if (iVar1 < param_2->MaxWeightCount) {
    iVar8 = iVar1;
  }
  if ((iVar8 == 0) && (param_2->bHasDefaultBoneIndex != false)) {
    FBoneWeights::
    TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>
    ::SetNum(this->Container,1);
    pTVar5 = *(TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>
               **)&(this->Container->AllocatorInstance).SecondaryData.field_0x0;
    if (pTVar5 == (TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>
                   *)0x0) {
      pTVar5 = this->Container;
    }
    *(uint *)(pTVar5->AllocatorInstance).InlineData = param_2->DefaultBoneIndex | 0xffff0000;
    return;
  }
  FBoneWeights::
  TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>
  ::SetNum(this->Container,iVar8);
  uVar9 = 0;
  if (0 < iVar8) {
    lVar7 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar9 < iVar1) {
        uVar4 = ~uVar9 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pTVar5 = *(TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>
                 **)&(this->Container->AllocatorInstance).SecondaryData.field_0x0;
      pTVar6 = this->Container;
      if (pTVar5 != (TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>
                     *)0x0) {
        pTVar6 = pTVar5;
      }
      uVar9 = uVar9 + 1;
      *(FBoneWeight *)((pTVar6->AllocatorInstance).InlineData + lVar7 * 4) = param_1->DataPtr[lVar7]
      ;
      lVar7 = lVar7 + 1;
    } while (lVar7 < iVar8);
  }
  NormalizeWeights(this,param_2->NormalizeType);
  return;
}

