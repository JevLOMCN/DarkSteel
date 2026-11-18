// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PoseSearch
// Functions: 6

// FSearchResults_Multi @ 14a919ae0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FSearchResults_Multi * __thiscall
UE::PoseSearch::FSearchResults_Multi::FSearchResults_Multi(FSearchResults_Multi *this,int param_1)

{
  int *piVar1;
  uint uVar2;
  code *pcVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  bool bVar7;
  FSearchResults_Multi *pFVar8;
  longlong *plVar9;
  undefined1 auStackY_148 [32];
  undefined8 uStack_110;
  longlong local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  longlong *plStack_f0;
  longlong local_e8;
  undefined8 uStack_e0;
  longlong local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  longlong *plStack_c0;
  longlong local_b8;
  undefined8 uStack_b0;
  longlong local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  longlong *plStack_90;
  longlong local_88;
  undefined8 uStack_80;
  longlong local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  longlong *plStack_60;
  longlong local_58;
  undefined8 uStack_50;
  longlong local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  longlong *plStack_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_148;
  FSearchResults::FSearchResults((FSearchResults *)this);
  *(undefined ***)this = &___7FSearchResults_Multi_PoseSearch_UE__6B_;
  piVar1 = &(this->SearchResults).ArrayMax;
  (this->SearchResults).AllocatorInstance.SecondaryData.Data = (FSearchResult *)0x0;
  (this->SearchResults).ArrayNum = 0;
  *piVar1 = 4;
  this->MaxNumberOfWantedResults = param_1;
  if (param_1 < 1) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("MaxNumberOfWantedResults > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchResult.cpp"
                       ,0x10d,L"");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      pFVar8 = (FSearchResults_Multi *)(*pcVar3)();
      return pFVar8;
    }
  }
  uVar2 = this->MaxNumberOfWantedResults;
  if (-1 < (int)uVar2) {
    if ((this->SearchResults).ArrayMax < (int)uVar2) {
      Core::Private::
      ReallocTo<2,TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>::ForElementType<UE::PoseSearch::FSearchResult>_>
                (0x1c,4,uVar2,&(this->SearchResults).AllocatorInstance,
                 (this->SearchResults).ArrayNum,piVar1);
    }
    lVar5 = *(longlong *)&this->field_0x10;
    local_108 = *(longlong *)&this->field_0x20;
    uStack_100 = *(undefined8 *)&this->field_0x28;
    uVar4 = *(undefined8 *)&this->field_0x30;
    plStack_f0 = *(longlong **)&this->field_0x38;
    *(code **)&this->field_0x10 =
         Core::Private::Function::
         TFunctionRefCaller<`UE::PoseSearch::FSearchResults_Multi::FSearchResults_Multi'::__l2::<lambda_1>,void,UE::PoseSearch::FSearchResult_const_&>
         ::Call;
    *(undefined8 *)&this->field_0x18 = uStack_110;
    *(undefined4 *)&this->field_0x20 = 0x52280d30;
    *(undefined4 *)&this->field_0x24 = 1;
    *(FSearchResults_Multi **)&this->field_0x28 = this;
    *(undefined4 *)&this->field_0x30 = (undefined4)local_f8;
    *(undefined4 *)&this->field_0x34 = local_f8._4_4_;
    *(undefined4 *)&this->field_0x38 = 0;
    *(undefined4 *)&this->field_0x3c = 0;
    local_f8 = uVar4;
    if (lVar5 != 0) {
      plVar9 = &local_108;
      if (plStack_f0 != (longlong *)0x0) {
        plVar9 = plStack_f0;
      }
      (**(code **)(*plVar9 + 0x10))();
    }
    local_e8 = *(longlong *)&this->field_0x40;
    uVar6 = *(undefined8 *)&this->field_0x48;
    local_d8 = *(longlong *)&this->field_0x50;
    uStack_d0 = *(undefined8 *)&this->field_0x58;
    uVar4 = *(undefined8 *)&this->field_0x60;
    plStack_c0 = *(longlong **)&this->field_0x68;
    *(code **)&this->field_0x40 =
         Core::Private::Function::
         TFunctionRefCaller<`UE::PoseSearch::FSearchResults_Multi::FSearchResults_Multi'::__l2::<lambda_2>,void>
         ::Call;
    *(undefined8 *)&this->field_0x48 = uStack_e0;
    *(undefined4 *)&this->field_0x50 = 0x52280d50;
    *(undefined4 *)&this->field_0x54 = 1;
    *(FSearchResults_Multi **)&this->field_0x58 = this;
    *(undefined4 *)&this->field_0x60 = (undefined4)local_c8;
    *(undefined4 *)&this->field_0x64 = local_c8._4_4_;
    *(undefined4 *)&this->field_0x68 = 0;
    *(undefined4 *)&this->field_0x6c = 0;
    uStack_e0 = uVar6;
    local_c8 = uVar4;
    if (local_e8 != 0) {
      plVar9 = &local_d8;
      if (plStack_c0 != (longlong *)0x0) {
        plVar9 = plStack_c0;
      }
      (**(code **)(*plVar9 + 0x10))();
    }
    local_b8 = *(longlong *)&this->field_0x70;
    uVar6 = *(undefined8 *)&this->field_0x78;
    local_a8 = *(longlong *)&this->field_0x80;
    uStack_a0 = *(undefined8 *)&this->field_0x88;
    uVar4 = *(undefined8 *)&this->field_0x90;
    plStack_90 = *(longlong **)&this->field_0x98;
    *(code **)&this->field_0x70 =
         Core::Private::Function::
         TFunctionRefCaller<`UE::PoseSearch::FSearchResults_Multi::FSearchResults_Multi'::__l2::<lambda_3>,UE::PoseSearch::FSearchResult>
         ::Call;
    *(undefined8 *)&this->field_0x78 = uStack_b0;
    *(undefined4 *)&this->field_0x80 = 0x52280d70;
    *(undefined4 *)&this->field_0x84 = 1;
    *(FSearchResults_Multi **)&this->field_0x88 = this;
    *(undefined4 *)&this->field_0x90 = (undefined4)local_98;
    *(undefined4 *)&this->field_0x94 = local_98._4_4_;
    *(undefined4 *)&this->field_0x98 = 0;
    *(undefined4 *)&this->field_0x9c = 0;
    uStack_b0 = uVar6;
    local_98 = uVar4;
    if (local_b8 != 0) {
      plVar9 = &local_a8;
      if (plStack_90 != (longlong *)0x0) {
        plVar9 = plStack_90;
      }
      (**(code **)(*plVar9 + 0x10))();
    }
    local_88 = *(longlong *)&this->field_0xa0;
    uVar6 = *(undefined8 *)&this->field_0xa8;
    local_78 = *(longlong *)&this->field_0xb0;
    uStack_70 = *(undefined8 *)&this->field_0xb8;
    uVar4 = *(undefined8 *)&this->field_0xc0;
    plStack_60 = *(longlong **)&this->field_0xc8;
    *(code **)&this->field_0xa0 =
         Core::Private::Function::
         TFunctionRefCaller<`UE::PoseSearch::FSearchResults_Multi::FSearchResults_Multi'::__l2::<lambda_4>,bool,float>
         ::Call;
    *(undefined8 *)&this->field_0xa8 = uStack_80;
    *(undefined4 *)&this->field_0xb0 = 0x52280d90;
    *(undefined4 *)&this->field_0xb4 = 1;
    *(FSearchResults_Multi **)&this->field_0xb8 = this;
    *(undefined4 *)&this->field_0xc0 = (undefined4)local_68;
    *(undefined4 *)&this->field_0xc4 = local_68._4_4_;
    *(undefined4 *)&this->field_0xc8 = 0;
    *(undefined4 *)&this->field_0xcc = 0;
    uStack_80 = uVar6;
    local_68 = uVar4;
    if (local_88 != 0) {
      plVar9 = &local_78;
      if (plStack_60 != (longlong *)0x0) {
        plVar9 = plStack_60;
      }
      (**(code **)(*plVar9 + 0x10))();
    }
    local_58 = *(longlong *)&this->field_0xd0;
    uVar6 = *(undefined8 *)&this->field_0xd8;
    local_48 = *(longlong *)&this->field_0xe0;
    uStack_40 = *(undefined8 *)&this->field_0xe8;
    uVar4 = *(undefined8 *)&this->field_0xf0;
    plStack_30 = *(longlong **)&this->field_0xf8;
    *(code **)&this->field_0xd0 =
         Core::Private::Function::
         TFunctionRefCaller<`UE::PoseSearch::FSearchResults_Multi::FSearchResults_Multi'::__l2::<lambda_5>,bool,TFunctionRef<bool___cdecl(UE::PoseSearch::FSearchResult_const_&)>_>
         ::Call;
    *(undefined8 *)&this->field_0xd8 = uStack_50;
    *(undefined4 *)&this->field_0xe0 = 0x52280db0;
    *(undefined4 *)&this->field_0xe4 = 1;
    *(FSearchResults_Multi **)&this->field_0xe8 = this;
    *(undefined4 *)&this->field_0xf0 = (undefined4)local_38;
    *(undefined4 *)&this->field_0xf4 = local_38._4_4_;
    *(undefined4 *)&this->field_0xf8 = 0;
    *(undefined4 *)&this->field_0xfc = 0;
    uStack_50 = uVar6;
    local_38 = uVar4;
    if (local_58 != 0) {
      plVar9 = &local_48;
      if (plStack_30 != (longlong *)0x0) {
        plVar9 = plStack_30;
      }
      (**(code **)(*plVar9 + 0x10))();
    }
    return this;
  }
                    /* WARNING: Subroutine does not return */
  Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
}

// operator() @ 14a91cb40

void __thiscall
`UE::PoseSearch::FSearchResults_Multi::FSearchResults_Multi'::__l2::<lambda_1>::operator()
          (void *this,FSearchResult *param_1)

{
  ForElementType<UE::PoseSearch::FSearchResult> *pFVar1;
  uchar *puVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  bool bVar12;
  int iVar13;
  uint uVar14;
  longlong lVar15;
  ForElementType<UE::PoseSearch::FSearchResult> *pFVar16;
  FSearchResult *pFVar17;
  uint uVar18;
  FIdentityFunctor local_res8 [8];
  undefined1 local_res10 [8];
  
  if (*(int *)param_1 != -1) {
    bVar12 = TWeakObjectPtr<UPoseSearchDatabase_const_,FWeakObjectPtr>::UEOpEquals
                       ((TWeakObjectPtr<UPoseSearchDatabase_const_,FWeakObjectPtr> *)
                        &param_1->field_0x4,(void *)0x0);
    if (!bVar12) goto LAB_14a91cb8f;
  }
  bVar12 = ::FDebug::CheckVerifyFailedImpl2
                     ("SearchResult.IsValid()",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchResult.cpp"
                      ,0x112,L"");
  if (bVar12) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
LAB_14a91cb8f:
  lVar15 = *(longlong *)this;
  pFVar1 = (ForElementType<UE::PoseSearch::FSearchResult> *)(lVar15 + 0x100);
  if (*(int *)(lVar15 + 0x180) <= *(int *)(lVar15 + 0x178)) {
    uVar18 = *(int *)(lVar15 + 0x178) - 1;
    uVar14 = 0;
    if ((int)uVar18 < *(int *)(lVar15 + 0x178)) {
      uVar14 = ~uVar18 >> 0x1f;
    }
    if (uVar14 == 0) {
      bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar12) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pFVar16 = *(ForElementType<UE::PoseSearch::FSearchResult> **)(lVar15 + 0x170);
    if (*(ForElementType<UE::PoseSearch::FSearchResult> **)(lVar15 + 0x170) ==
        (ForElementType<UE::PoseSearch::FSearchResult> *)0x0) {
      pFVar16 = pFVar1;
    }
    lVar15 = (longlong)*(int *)(lVar15 + 0x178) * 0x1c;
    if ((param_1->PoseCost).TotalCost <= *(float *)(pFVar16->InlineData + lVar15 + -0x10) &&
        *(float *)(pFVar16->InlineData + lVar15 + -0x10) != (param_1->PoseCost).TotalCost) {
      uVar5 = param_1->field_0x1;
      uVar6 = param_1->field_0x2;
      uVar7 = param_1->field_0x3;
      uVar8 = param_1->field_0x4;
      uVar9 = param_1->field_0x5;
      uVar10 = param_1->field_0x6;
      uVar11 = param_1->field_0x7;
      uVar4 = *(undefined8 *)&param_1->field_0x8;
      puVar2 = pFVar16->InlineData + lVar15 + -0x1c;
      puVar2[0] = param_1->field_0x0;
      puVar2[1] = uVar5;
      puVar2[2] = uVar6;
      puVar2[3] = uVar7;
      puVar2[4] = uVar8;
      puVar2[5] = uVar9;
      puVar2[6] = uVar10;
      puVar2[7] = uVar11;
      *(undefined8 *)(puVar2 + 8) = uVar4;
      *(undefined8 *)(pFVar16->InlineData + lVar15 + -0xc) = *(undefined8 *)&param_1->EventPoseIdx;
      uVar5 = param_1->field_0x19;
      uVar6 = param_1->field_0x1a;
      uVar7 = param_1->field_0x1b;
      puVar2 = pFVar16->InlineData + lVar15 + -4;
      puVar2[0] = param_1->bIsContinuingPoseSearch;
      puVar2[1] = uVar5;
      puVar2[2] = uVar6;
      puVar2[3] = uVar7;
      lVar15 = *(longlong *)this;
      pFVar17 = *(FSearchResult **)(lVar15 + 0x170);
      if (*(FSearchResult **)(lVar15 + 0x170) == (FSearchResult *)0x0) {
        pFVar17 = (FSearchResult *)(lVar15 + 0x100);
      }
      AlgoImpl::
      IntroSortInternal<UE::PoseSearch::FSearchResult,int,FIdentityFunctor,TDereferenceWrapper<UE::PoseSearch::FSearchResult,__UE::PoseSearch::FSearchResults_Multi::FSearchResults_Multi_::__l2::<lambda_1>::operator()_::__l17::<lambda_2>_>_>
                (pFVar17,*(int *)(lVar15 + 0x178),local_res8[0],(<lambda_2> *)local_res10);
    }
    return;
  }
  pFVar16 = *(ForElementType<UE::PoseSearch::FSearchResult> **)(lVar15 + 0x170);
  if (*(ForElementType<UE::PoseSearch::FSearchResult> **)(lVar15 + 0x170) ==
      (ForElementType<UE::PoseSearch::FSearchResult> *)0x0) {
    pFVar16 = pFVar1;
  }
  if ((pFVar16 <= param_1) &&
     (param_1 < (FSearchResult *)(pFVar16->InlineData + (longlong)*(int *)(lVar15 + 0x17c) * 0x1c)))
  {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar12) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar13 = *(int *)(lVar15 + 0x178);
  if (iVar13 == *(int *)(lVar15 + 0x17c)) {
    iVar13 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>::ForElementType<UE::PoseSearch::FSearchResult>_>
                       (0x41c,pFVar1,(int *)(lVar15 + 0x17c));
  }
  *(int *)(lVar15 + 0x178) = iVar13 + 1;
  uVar5 = param_1->field_0x1;
  uVar6 = param_1->field_0x2;
  uVar7 = param_1->field_0x3;
  uVar8 = param_1->field_0x4;
  uVar9 = param_1->field_0x5;
  uVar10 = param_1->field_0x6;
  uVar11 = param_1->field_0x7;
  uVar4 = *(undefined8 *)&param_1->field_0x8;
  pFVar16 = *(ForElementType<UE::PoseSearch::FSearchResult> **)(lVar15 + 0x170);
  if (*(ForElementType<UE::PoseSearch::FSearchResult> **)(lVar15 + 0x170) ==
      (ForElementType<UE::PoseSearch::FSearchResult> *)0x0) {
    pFVar16 = pFVar1;
  }
  lVar15 = (longlong)iVar13 * 0x1c;
  puVar2 = pFVar16->InlineData + lVar15;
  puVar2[0] = param_1->field_0x0;
  puVar2[1] = uVar5;
  puVar2[2] = uVar6;
  puVar2[3] = uVar7;
  puVar2[4] = uVar8;
  puVar2[5] = uVar9;
  puVar2[6] = uVar10;
  puVar2[7] = uVar11;
  *(undefined8 *)(puVar2 + 8) = uVar4;
  *(undefined8 *)(pFVar16->InlineData + lVar15 + 0x10) = *(undefined8 *)&param_1->EventPoseIdx;
  uVar5 = param_1->field_0x19;
  uVar6 = param_1->field_0x1a;
  uVar7 = param_1->field_0x1b;
  puVar2 = pFVar16->InlineData + lVar15 + 0x18;
  puVar2[0] = param_1->bIsContinuingPoseSearch;
  puVar2[1] = uVar5;
  puVar2[2] = uVar6;
  puVar2[3] = uVar7;
  lVar15 = *(longlong *)this;
  pFVar17 = *(FSearchResult **)(lVar15 + 0x170);
  if (*(FSearchResult **)(lVar15 + 0x170) == (FSearchResult *)0x0) {
    pFVar17 = (FSearchResult *)(lVar15 + 0x100);
  }
  AlgoImpl::
  IntroSortInternal<UE::PoseSearch::FSearchResult,int,FIdentityFunctor,TDereferenceWrapper<UE::PoseSearch::FSearchResult,__UE::PoseSearch::FSearchResults_Multi::FSearchResults_Multi_::__l2::<lambda_1>::operator()_::__l12::<lambda_1>_>_>
            (pFVar17,*(int *)(lVar15 + 0x178),local_res8[0],(<lambda_1> *)local_res8);
  return;
}

// operator() @ 14a91e040

void __thiscall
`UE::PoseSearch::FSearchResults_Multi::FSearchResults_Multi'::__l2::<lambda_2>::operator()
          (void *this)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  float fVar4;
  bool bVar5;
  UPoseSearchDatabase *this_00;
  longlong lVar6;
  float *pfVar7;
  float fVar8;
  undefined1 local_res8 [8];
  
  fVar4 = __real_7f7fffff;
  lVar2 = *(longlong *)this;
  iVar1 = *(int *)(lVar2 + 0x178);
  lVar6 = *(longlong *)(lVar2 + 0x170);
  if (*(longlong *)(lVar2 + 0x170) == 0) {
    lVar6 = lVar2 + 0x100;
  }
  pfVar7 = (float *)(lVar6 + 0x14);
  do {
    if (*(int *)(lVar2 + 0x178) != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<UE::PoseSearch::FSearchResult,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pfVar7 + -5 == (float *)((longlong)iVar1 * 0x1c + lVar6)) {
      return;
    }
    if (pfVar7[-5] == -NAN) {
LAB_14a91e0c5:
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("SearchResult.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchResult.cpp"
                         ,0x131,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    else {
      bVar5 = TWeakObjectPtr<UPoseSearchDatabase_const_,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UPoseSearchDatabase_const_,FWeakObjectPtr> *)(pfVar7 + -4),
                         (void *)0x0);
      if (bVar5) goto LAB_14a91e0c5;
    }
    if (fVar4 == *pfVar7) {
      this_00 = (UPoseSearchDatabase *)FWeakObjectPtr::Get((FWeakObjectPtr *)(pfVar7 + -4));
      fVar8 = UPoseSearchDatabase::GetNormalizedAssetTime(this_00,(int)pfVar7[-5]);
      if (fVar8 == fVar4) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsAssetTimeValid(InAssetTime)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Public\\PoseSearch\\PoseSearchResult.h"
                           ,0x4b,L"");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      *pfVar7 = fVar8;
    }
    pfVar7 = pfVar7 + 7;
  } while( true );
}

// operator() @ 14a91f680

FSearchResult * __thiscall
`UE::PoseSearch::FSearchResults_Multi::FSearchResults_Multi'::__l2::<lambda_3>::operator()
          (void *this,FSearchResult *__return_storage_ptr__)

{
  undefined8 uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  FSearchResult *pFVar5;
  undefined8 *puVar6;
  
  lVar2 = *(longlong *)this;
  if (*(int *)(lVar2 + 0x178) == 0) {
    *(undefined2 *)&__return_storage_ptr__->field_0x19 = 0;
    __return_storage_ptr__->field_0x1b = 0;
    *(undefined8 *)&__return_storage_ptr__->field_0x4 = 0;
    __return_storage_ptr__->bIsContinuingPoseSearch = false;
    *(undefined4 *)__return_storage_ptr__ = 0xffffffff;
    (__return_storage_ptr__->PoseCost).TotalCost = 3.4028235e+38;
    __return_storage_ptr__->EventPoseIdx = -1;
    __return_storage_ptr__->AssetTime = 3.4028235e+38;
    return __return_storage_ptr__;
  }
  if (*(int *)(lVar2 + 0x178) < 1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FSearchResult *)(*pcVar3)();
      return pFVar5;
    }
  }
  puVar6 = *(undefined8 **)(lVar2 + 0x170);
  if (*(undefined8 **)(lVar2 + 0x170) == (undefined8 *)0x0) {
    puVar6 = (undefined8 *)(lVar2 + 0x100);
  }
  uVar1 = puVar6[1];
  *(undefined8 *)__return_storage_ptr__ = *puVar6;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = uVar1;
  uVar1 = puVar6[2];
  __return_storage_ptr__->EventPoseIdx = (int)uVar1;
  __return_storage_ptr__->AssetTime = (float)(int)((ulonglong)uVar1 >> 0x20);
  *(undefined4 *)&__return_storage_ptr__->bIsContinuingPoseSearch = *(undefined4 *)(puVar6 + 3);
  return __return_storage_ptr__;
}

// operator() @ 14a91f760

bool __thiscall
`UE::PoseSearch::FSearchResults_Multi::FSearchResults_Multi'::__l2::<lambda_4>::operator()
          (void *this,float param_1)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  longlong lVar7;
  
  lVar2 = *(longlong *)this;
  iVar1 = *(int *)(lVar2 + 0x178);
  if (iVar1 == 0) {
    return true;
  }
  uVar6 = 0;
  if ((int)(iVar1 - 1U) < iVar1) {
    uVar6 = ~(iVar1 - 1U) >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  lVar7 = *(longlong *)(lVar2 + 0x170);
  if (*(longlong *)(lVar2 + 0x170) == 0) {
    lVar7 = lVar2 + 0x100;
  }
  return param_1 < *(float *)(lVar7 + -0x10 + (longlong)*(int *)(lVar2 + 0x178) * 0x1c);
}

// operator() @ 14a91fcc0

bool __thiscall
`UE::PoseSearch::FSearchResults_Multi::FSearchResults_Multi'::__l2::<lambda_5>::operator()
          (void *this,TFunctionRef<bool___cdecl(UE::PoseSearch::FSearchResult_const_&)> *param_1)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 local_res8 [8];
  
  lVar2 = *(longlong *)this;
  iVar1 = *(int *)(lVar2 + 0x178);
  lVar4 = *(longlong *)(lVar2 + 0x170);
  if (*(longlong *)(lVar2 + 0x170) == 0) {
    lVar4 = lVar2 + 0x100;
  }
  lVar5 = (longlong)iVar1 * 0x1c + lVar4;
  while( true ) {
    if (*(int *)(lVar2 + 0x178) != iVar1) {
      `TCheckedPointerIterator<UE::PoseSearch::FSearchResult,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (lVar4 == lVar5) break;
    cVar3 = (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,lVar4);
    if (cVar3 != '\0') {
      return true;
    }
    lVar4 = lVar4 + 0x1c;
  }
  return false;
}

