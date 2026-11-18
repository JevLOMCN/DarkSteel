// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SkeletalMeshDescription
// Functions: 3

// SetBoneWeights<TArrayAttribute<int>_> @ 144392150

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::AnimationCore::TBoneWeights<Internal::FAttributesRefAdapter>::
SetBoneWeights<TArrayAttribute<int>_>
          (TBoneWeights<Internal::FAttributesRefAdapter> *this,
          TArrayView<UE::AnimationCore::FBoneWeight_const_,int> *param_1,
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

// NormalizeWeights @ 1443aa5c0

void __thiscall
UE::AnimationCore::TBoneWeights<Internal::FAttributesRefAdapter>::NormalizeWeights
          (TBoneWeights<Internal::FAttributesRefAdapter> *this,EBoneWeightNormalizeType param_1)

{
  int iVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  TArrayView<int,int> *pTVar5;
  longlong lVar6;
  longlong lVar7;
  ushort uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  FBoneWeight local_res10;
  code *local_res18;
  TArrayView<int,int> local_98;
  TArrayView<int,int> local_88;
  TArrayView<int,int> local_78;
  TArrayView<int,int> local_68;
  TArrayView<int,int> local_58;
  TArrayView<int,int> local_48;
  
  pTVar5 = TAttributeArrayContainer<int>::Get
                     (this->Container->Array,&local_98,this->Container->Index);
  if (param_1 != None) {
    iVar1 = pTVar5->ArrayNum;
    lVar6 = (longlong)iVar1;
    if (iVar1 != 0) {
      if (iVar1 == 1) {
        if (param_1 == Always) {
          pTVar5 = TAttributeArrayContainer<int>::Get
                             (this->Container->Array,&local_88,this->Container->Index);
          local_res10.RawWeight = 0xffff;
          local_res10.BoneIndex = *(ushort *)((longlong)pTVar5->DataPtr + 2);
          ::Internal::FAttributesRefAdapter::Set(this->Container,0,local_res10);
          return;
        }
      }
      else {
        lVar11 = 0;
        lVar7 = lVar11;
        lVar10 = lVar11;
        if (0 < iVar1) {
          do {
            pTVar5 = TAttributeArrayContainer<int>::Get
                               (this->Container->Array,&local_78,this->Container->Index);
            lVar9 = lVar7 + 1;
            lVar10 = lVar10 + (ulonglong)*(ushort *)(pTVar5->DataPtr + lVar7);
            lVar7 = lVar9;
          } while (lVar9 < lVar6);
        }
        if (param_1 == Always) {
          if (lVar10 == 0) {
            bVar4 = Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<_2178690579725024073>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AnimationCore\\Public\\BoneWeights.h"
                               ,0x4b7,"WeightSum != 0");
            if (!bVar4) {
              return;
            }
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        else if (lVar10 < 0x10000) {
          return;
        }
        bVar4 = false;
        local_res10.BoneIndex = 0xffff;
        if (0 < lVar6) {
          local_res18 = (code *)0x0;
          do {
            pcVar3 = local_res18;
            pTVar5 = TAttributeArrayContainer<int>::Get
                               (this->Container->Array,&local_68,this->Container->Index);
            uVar2 = pTVar5->DataPtr[(longlong)pcVar3];
            lVar11 = lVar11 + (ulonglong)(uVar2 & 0xffff) * 0xffff;
            uVar8 = 0xffff;
            lVar7 = lVar11 / lVar10;
            if (lVar7 < 0xffff) {
              uVar8 = (ushort)lVar7;
            }
            lVar11 = lVar11 - (ulonglong)uVar8 * lVar10;
            pTVar5 = TAttributeArrayContainer<int>::Get
                               (this->Container->Array,&local_58,this->Container->Index);
            pTVar5->DataPtr[(longlong)local_res18] = uVar2 & 0xffff0000 | (uint)uVar8;
            if (local_res10.BoneIndex < uVar8) {
              bVar4 = true;
            }
            local_res18 = (code *)((longlong)local_res18 + 1);
            local_res10.BoneIndex = uVar8;
          } while ((longlong)local_res18 < lVar6);
          if (bVar4) {
            local_res18 = FBoneWeight::DescSortByWeightPredicate;
            pTVar5 = TAttributeArrayContainer<int>::Get
                               (this->Container->Array,&local_48,this->Container->Index);
            local_res10.BoneIndex._0_1_ = SUB21(uVar8,0);
            AlgoImpl::
            IntroSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,_Internal::FAttributesRefAdapter::Sort<bool_(__cdecl*)(UE::AnimationCore::FBoneWeight_const_&,UE::AnimationCore::FBoneWeight_const_&)>_::__l2::<lambda_1>_>_>
                      (pTVar5->DataPtr,pTVar5->ArrayNum,local_res10.BoneIndex._0_1_,
                       (<lambda_1> *)&local_res18);
          }
        }
      }
    }
  }
  return;
}

// SetBoneWeightsInternal @ 1443acf90

void __thiscall
UE::AnimationCore::TBoneWeights<Internal::FAttributesRefAdapter>::SetBoneWeightsInternal
          (TBoneWeights<Internal::FAttributesRefAdapter> *this,
          TArrayView<UE::AnimationCore::FBoneWeight,int> *param_1,FBoneWeightsSettings *param_2)

{
  ushort uVar1;
  int iVar2;
  FBoneWeight FVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  TArrayView<int,int> *pTVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  FIdentityFunctor local_res10;
  TArrayView<int,int> local_68;
  TArrayView<int,int> local_58;
  TArrayView<int,int> local_48;
  TArrayView<int,int> local_38;
  
  iVar2 = param_1->ArrayNum;
  AlgoImpl::
  IntroSortInternal<UE::AnimationCore::FBoneWeight,int,FIdentityFunctor,TDereferenceWrapper<UE::AnimationCore::FBoneWeight,bool___cdecl(UE::AnimationCore::FBoneWeight_const_&,UE::AnimationCore::FBoneWeight_const_&)>_>
            (param_1->DataPtr,iVar2,local_res10,
             (TDereferenceWrapper<UE::AnimationCore::FBoneWeight,bool___cdecl(UE::AnimationCore::FBoneWeight_const_&,UE::AnimationCore::FBoneWeight_const_&)>
              )0x142381760);
  iVar10 = param_2->MaxWeightCount;
  if (iVar2 < param_2->MaxWeightCount) {
    iVar10 = iVar2;
  }
  if ((iVar10 == 0) && (param_2->bHasDefaultBoneIndex != false)) {
    TAttributeArrayContainer<int>::SetElementSize
              (this->Container->Array,&local_68,this->Container->Index,1,true,false);
    uVar1 = param_2->DefaultBoneIndex;
    pTVar7 = TAttributeArrayContainer<int>::Get
                       (this->Container->Array,&local_58,this->Container->Index);
    *pTVar7->DataPtr = (uint)uVar1 << 0x10 | 0xffff;
    return;
  }
  TAttributeArrayContainer<int>::SetElementSize
            (this->Container->Array,&local_48,this->Container->Index,iVar10,true,false);
  uVar9 = 0;
  if (0 < iVar10) {
    lVar8 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar9 < iVar2) {
        uVar6 = ~uVar9 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      FVar3 = param_1->DataPtr[lVar8];
      pTVar7 = TAttributeArrayContainer<int>::Get
                         (this->Container->Array,&local_38,this->Container->Index);
      uVar9 = uVar9 + 1;
      pTVar7->DataPtr[lVar8] = (uint)FVar3 >> 0x10 | (int)FVar3 << 0x10;
      lVar8 = lVar8 + 1;
    } while (lVar8 < iVar10);
  }
  NormalizeWeights(this,param_2->NormalizeType);
  return;
}

