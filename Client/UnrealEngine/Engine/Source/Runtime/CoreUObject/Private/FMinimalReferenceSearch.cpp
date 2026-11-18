// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 2

// HandleObjectReference @ 1421d1130

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::ReferenceChainSearch::FMinimalReferenceSearch::HandleObjectReference
          (FMinimalReferenceSearch *this,FWorkerContext *param_1,int param_2,UObject *param_3,
          UObject *param_4,FMemberId param_5,EOrigin param_6)

{
  ForElementType<FSetElementId> *pFVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  ForElementType<FSetElementId> FVar9;
  ForElementType<FSetElementId> FVar10;
  int iVar11;
  ulonglong uVar12;
  FThreadData *this_00;
  int local_res8 [2];
  int local_res18 [2];
  UObject *local_res20;
  UObject *local_38 [2];
  
  uVar7 = 0;
  if (param_2 < (int)this->_padding_) {
    uVar7 = (uint)~param_2 >> 0x1f;
  }
  local_res20 = param_3;
  if ((uVar7 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar6 = *(int *)&(this->TargetObjects).Elements.field_0x8;
  pFVar1 = &(this->TargetObjects).Hash;
  this_00 = (FThreadData *)((longlong)param_2 * 0x88 + this->_padding_);
  uVar7 = ((uint)((ulonglong)param_3 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_3 >> 4)) *
          -0x7a143595;
  uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
  uVar7 = uVar7 >> 0x10 ^ uVar7;
  iVar2 = *(int *)&(this->TargetObjects).Elements.field_0x34;
  if (iVar6 != iVar2) {
    FVar10 = (this->TargetObjects).Hash.SecondaryData;
    if (FVar10 == (ForElementType<FSetElementId>)0x0) {
      FVar10 = (ForElementType<FSetElementId>)pFVar1;
    }
    iVar11 = *(int *)((longlong)FVar10 +
                     (ulonglong)((this->TargetObjects).HashSize - 1U & uVar7) * 4);
    if (iVar11 != -1) {
      lVar3 = *(longlong *)&(this->TargetObjects).Elements;
      do {
        if (*(UObject **)(lVar3 + (longlong)iVar11 * 0x10) == param_3) {
          if (iVar11 != -1) {
LAB_1421d12e8:
            if (this_00->PreviousReferencingObject != param_4) {
              TReferenceSearchBase<UE::ReferenceChainSearch::FMinimalReferenceSearch>::FThreadData::
              FlushEdgeList(this_00,(FPolicyUObjectHeap *)this->_padding_);
            }
            this_00->PreviousReferencingObject = param_4;
            iVar6 = *(int *)&param_3->field_0xc;
            if ((iVar6 < 0) || (GUObjectArray.ObjObjects.NumElements <= iVar6)) {
              Logging::Private::BasicFatalLog
                        ((FStaticBasicLogRecord *)
                         &`public:_int___cdecl_UE::ReferenceChainSearch::FPolicyUObjectHeap::ObjectToVertex(UObject_const*___ptr64)const___ptr64'
                          ::__l3::LOG_Static,(FLogCategoryBase *)&LogReferenceChain);
            }
            local_res18[0] = iVar6;
            TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int>
                      (&this_00->CurrentEdgeList,local_res8,(bool *)local_res18);
            if (*(int *)&(this->TargetObjects).Elements.field_0x8 ==
                *(int *)&(this->TargetObjects).Elements.field_0x34) {
              return;
            }
            FVar10 = (this->TargetObjects).Hash.SecondaryData;
            if (FVar10 == (ForElementType<FSetElementId>)0x0) {
              FVar10 = (ForElementType<FSetElementId>)pFVar1;
            }
            iVar6 = *(int *)((longlong)FVar10 +
                            (ulonglong)((this->TargetObjects).HashSize - 1U & uVar7) * 4);
            if (iVar6 == -1) {
              return;
            }
            lVar3 = *(longlong *)&(this->TargetObjects).Elements;
            do {
              if (*(UObject **)(lVar3 + (longlong)iVar6 * 0x10) == param_3) {
                TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator>::
                Emplace<UObject_*_const_&>(&this->FoundTargets,local_38,(bool *)&local_res20);
                return;
              }
              iVar6 = *(int *)(lVar3 + 8 + (longlong)iVar6 * 0x10);
            } while (iVar6 != -1);
            return;
          }
          break;
        }
        iVar11 = *(int *)(lVar3 + 8 + (longlong)iVar11 * 0x10);
      } while (iVar11 != -1);
    }
  }
  uVar12 = *(ulonglong *)&param_3->field_0x20;
  if (uVar12 == 0) {
    return;
  }
  do {
    uVar8 = ((uint)(uVar12 >> 0x14) & 0xffff ^ (uint)(uVar12 >> 4)) * -0x7a143595;
    uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
    if (iVar6 != iVar2) {
      FVar10 = (this->TargetObjects).Hash.SecondaryData;
      FVar9 = (ForElementType<FSetElementId>)pFVar1;
      if (FVar10 != (ForElementType<FSetElementId>)0x0) {
        FVar9 = FVar10;
      }
      iVar11 = *(int *)((longlong)FVar9 +
                       (ulonglong)((this->TargetObjects).HashSize - 1U & (uVar8 >> 0x10 ^ uVar8)) *
                       4);
      if (iVar11 != -1) {
        lVar3 = *(longlong *)&(this->TargetObjects).Elements;
        do {
          if (*(ulonglong *)(lVar3 + (longlong)iVar11 * 0x10) == uVar12) {
            if (uVar12 == 0) {
              return;
            }
            goto LAB_1421d12e8;
          }
          iVar11 = *(int *)(lVar3 + 8 + (longlong)iVar11 * 0x10);
        } while (iVar11 != -1);
      }
    }
    uVar12 = *(ulonglong *)(uVar12 + 0x20);
    if (uVar12 == 0) {
      return;
    }
  } while( true );
}

// MergeGraph @ 1421d42f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::ReferenceChainSearch::FMinimalReferenceSearch::MergeGraph
          (FMinimalReferenceSearch *this,
          TArray<TArrayView<int_const_,int>,TSizedDefaultAllocator<32>_> *param_1)

{
  undefined1 *puVar1;
  TSet<UObject_const_*,DefaultKeyFuncs<UObject_const_*,0>,FDefaultSetAllocator> *pTVar2;
  longlong *plVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  TArray<TArrayView<int_const_,int>,TSizedDefaultAllocator<32>_> *pTVar6;
  longlong lVar7;
  TSet<UObject_const_*,DefaultKeyFuncs<UObject_const_*,0>,FDefaultSetAllocator> *pTVar8;
  bool bVar9;
  longlong lVar10;
  ulonglong uVar11;
  ForElementType<FSetElementId> FVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  longlong lVar16;
  uint *puVar17;
  uint uVar18;
  uint uVar19;
  longlong *plVar20;
  uint *puVar21;
  undefined1 *puVar22;
  uint *puVar23;
  longlong *plVar24;
  undefined1 auStack_1d8 [32];
  longlong local_1b8;
  longlong local_1b0;
  longlong local_1a8;
  undefined1 local_198;
  undefined1 local_197;
  undefined1 local_196 [2];
  uint local_194;
  int local_190;
  uint local_18c;
  longlong local_188;
  longlong local_180;
  int local_178;
  int local_174;
  int local_170 [2];
  TArray<TArrayView<int_const_,int>,TSizedDefaultAllocator<32>_> *local_168;
  longlong local_160;
  longlong local_158;
  FMinimalReferenceSearch *local_150;
  TArray<int,TSizedDefaultAllocator<32>_> local_148;
  TSet<UObject_const_*,DefaultKeyFuncs<UObject_const_*,0>,FDefaultSetAllocator> *local_138;
  int iStack_130;
  uint uStack_12c;
  undefined1 *local_128;
  undefined4 uStack_120;
  int iStack_11c;
  int local_118;
  undefined4 uStack_114;
  int iStack_110;
  undefined4 uStack_10c;
  TSet<UObject_const_*,DefaultKeyFuncs<UObject_const_*,0>,FDefaultSetAllocator> *local_108;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_100;
  undefined8 uStack_e0;
  longlong local_d8;
  int iStack_d0;
  undefined4 uStack_cc;
  uint *local_c8;
  int iStack_c0;
  uint *local_b8;
  int iStack_b0;
  undefined4 uStack_ac;
  undefined4 local_8c;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> local_88;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_1d8;
  iVar13 = (int)this->_padding_;
  plVar20 = (longlong *)this->_padding_;
  plVar24 = plVar20 + (longlong)iVar13 * 0x11;
  local_168 = param_1;
  local_150 = this;
  while( true ) {
    if ((int)this->_padding_ != iVar13) {
      local_198 = 0;
      `TCheckedPointerIterator<UE::ReferenceChainSearch::TReferenceSearchBase<UE::ReferenceChainSearch::FMinimalReferenceSearch>::FThreadData,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(&local_198);
    }
    if (plVar20 == plVar24) break;
    if ((*plVar20 != 0) && (0 < (int)plVar20[2] - *(int *)((longlong)plVar20 + 0x3c))) {
      iVar15 = *(int *)(*plVar20 + 0xc);
      if ((iVar15 < 0) || (GUObjectArray.ObjObjects.NumElements <= iVar15)) {
        Logging::Private::BasicFatalLog
                  ((FStaticBasicLogRecord *)
                   &`public:_int___cdecl_UE::ReferenceChainSearch::FPolicyUObjectHeap::ObjectToVertex(UObject_const*___ptr64)const___ptr64'
                    ::__l3::LOG_Static,(FLogCategoryBase *)&LogReferenceChain);
      }
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Array
                ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)(plVar20 + 1),&local_148);
      lVar10 = plVar20[0xc];
      TArray<int,TSizedDefaultAllocator<64>_>::Append<int,TSizedDefaultAllocator<32>_>
                ((TArray<int,TSizedDefaultAllocator<64>_> *)(plVar20 + 0xb),&local_148);
      local_d8 = lVar10 * 4;
      iStack_d0 = local_148.ArrayNum;
      if ((iStack_d0 < 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar18 = iVar15 - (int)plVar20[0x10];
      uVar19 = 0;
      if ((int)uVar18 < (int)plVar20[0xf]) {
        uVar19 = ~uVar18 >> 0x1f;
      }
      if (uVar19 == 0) {
        local_1b8 = (longlong)(int)uVar18;
        local_1b0 = (longlong)(int)plVar20[0xf];
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      plVar3 = (longlong *)(plVar20[0xe] + (longlong)(int)uVar18 * 0x10);
      *plVar3 = local_d8;
      plVar3[1] = CONCAT44(uStack_cc,iStack_d0);
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Reset
                ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)(plVar20 + 1));
      if (local_148.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_148.AllocatorInstance.Data);
      }
    }
    plVar20 = plVar20 + 0x11;
  }
  local_88.Elements._44_4_ = 0x80;
  puVar1 = &(this->TargetObjects).Elements.field_0x10;
  local_88.Elements._0_8_ = 0;
  local_88.Elements._8_8_ = 0;
  pTVar2 = &this->TargetObjects;
  local_88.Elements._32_8_ = 0;
  iStack_130 = 0;
  local_88.Elements._40_4_ = 0;
  uStack_12c = 1;
  local_88.Elements._52_4_ = 0;
  local_118 = 0;
  local_88.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_88.HashSize = 0;
  local_88.Elements._48_4_ = 0xffffffff;
  iVar13 = *(int *)&(this->TargetObjects).Elements.field_0x28;
  iStack_11c = local_118;
  if (iVar13 != 0) {
    puVar23 = *(uint **)&(this->TargetObjects).Elements.field_0x20;
    if (puVar23 == (uint *)0x0) {
      puVar23 = (uint *)puVar1;
    }
    uVar19 = *puVar23;
    local_118 = 0;
    iStack_130 = 0;
    while (uVar19 == 0) {
      lVar10 = (longlong)iStack_130;
      local_118 = local_118 + 0x20;
      iStack_130 = iStack_130 + 1;
      iStack_11c = iVar13;
      if ((int)(iVar13 + -1 + (iVar13 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_130) goto LAB_1421d453e;
      uVar19 = puVar23[lVar10 + 1];
    }
    uStack_12c = -uVar19 & uVar19;
    uVar11 = (ulonglong)uStack_12c * 2 + 1;
    lVar10 = 0x3f;
    if (uVar11 != 0) {
      for (; uVar11 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_178 = (int)lVar10;
    iStack_11c = local_118 + -1 + local_178;
    if (iVar13 < iStack_11c) {
      iStack_11c = iVar13;
    }
  }
LAB_1421d453e:
  uVar19 = *(uint *)&(this->TargetObjects).Elements.field_0x28;
  uStack_114 = local_8c;
  uVar18 = uVar19 & 0xffffffe0;
  iStack_110 = *(int *)&(this->TargetObjects).Elements.field_0x8 -
               *(int *)&(this->TargetObjects).Elements.field_0x34;
  uStack_120 = 0xffffffff;
  TStack_100._padding_ = CONCAT44(uStack_12c,iStack_130);
  TStack_100.CurrentBitIndex = iStack_11c;
  TStack_100.UnvisitedBitMask = 0xffffffff;
  iVar13 = (int)uVar19 >> 5;
  TStack_100._28_4_ = local_8c;
  TStack_100.BaseBitIndex = local_118;
  uStack_e0 = CONCAT44(uStack_10c,iStack_110);
  local_138 = pTVar2;
  local_128 = puVar1;
  local_108 = pTVar2;
  TStack_100.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if (((int)uVar19 < 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar14 = *(uint *)&(this->TargetObjects).Elements.field_0x28;
  if (uVar19 != uVar14) {
    puVar22 = *(undefined1 **)&(this->TargetObjects).Elements.field_0x20;
    if (puVar22 == (undefined1 *)0x0) {
      puVar22 = puVar1;
    }
    uVar19 = -1 << ((byte)uVar19 & 0x1f) & *(uint *)(puVar22 + (longlong)iVar13 * 4);
    while (uVar19 == 0) {
      lVar10 = (longlong)iVar13;
      uVar18 = uVar18 + 0x20;
      iVar13 = iVar13 + 1;
      uVar19 = uVar14;
      if ((int)((uVar14 - 1) + ((int)(uVar14 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13)
      goto LAB_1421d4630;
      uVar19 = *(uint *)(puVar22 + lVar10 * 4 + 4);
    }
    uVar11 = (ulonglong)(-uVar19 & uVar19) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar11 != 0) {
      for (; uVar11 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_174 = (int)lVar10;
    uVar19 = local_174 + -1 + uVar18;
    if ((int)uVar14 < (int)uVar19) {
      uVar19 = uVar14;
    }
  }
LAB_1421d4630:
  while( true ) {
    pTVar8 = local_108;
    if (*(int *)&(local_108->Elements).field_0x8 - *(int *)&(local_108->Elements).field_0x34 !=
        (int)uStack_e0) {
      local_197 = 0;
      `TSparseArray<TSparseSetElement<UObject_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_197);
    }
    if (((TStack_100.CurrentBitIndex == uVar19) &&
        (TStack_100.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar8 == pTVar2))
    break;
    iVar13 = *(int *)(*(longlong *)
                       (*(longlong *)&pTVar8->Elements + (longlong)TStack_100.CurrentBitIndex * 0x10
                       ) + 0xc);
    if ((iVar13 < 0) || (GUObjectArray.ObjObjects.NumElements <= iVar13)) {
      Logging::Private::BasicFatalLog
                ((FStaticBasicLogRecord *)
                 &`public:_int___cdecl_UE::ReferenceChainSearch::FPolicyUObjectHeap::ObjectToVertex(UObject_const*___ptr64)const___ptr64'
                  ::__l3::LOG_Static,(FLogCategoryBase *)&LogReferenceChain);
    }
    local_190 = iVar13;
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int>
              (&local_88,local_170,(bool *)&local_190);
    TStack_100.UnvisitedBitMask = TStack_100.UnvisitedBitMask & ~TStack_100._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_100);
  }
  local_18c = (uint)this->_padding_;
  uVar11 = (ulonglong)(int)local_18c;
  lVar10 = this->_padding_;
  lVar16 = uVar11 * 0x88 + lVar10;
  local_158 = lVar16;
  while( true ) {
    local_180 = lVar10;
    if ((int)this->_padding_ != (int)uVar11) {
      local_196[0] = 0;
      `TCheckedPointerIterator<UE::ReferenceChainSearch::TReferenceSearchBase<UE::ReferenceChainSearch::FMinimalReferenceSearch>::FThreadData,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_196);
    }
    if (lVar10 == lVar16) {
      local_88.HashSize = 0;
      if (local_88.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_88.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_88.Elements);
      return;
    }
    local_160 = *(longlong *)(lVar10 + 0x58);
    local_194 = 0;
    if (0 < *(int *)(lVar10 + 0x78)) break;
LAB_1421d4a49:
    uVar11 = (ulonglong)local_18c;
    lVar10 = lVar10 + 0x88;
  }
  local_188 = 0;
LAB_1421d4721:
  lVar7 = local_160;
  lVar16 = local_188;
  uVar19 = local_194;
  uVar14 = ~local_194;
  uVar18 = 0;
  if ((int)local_194 < *(int *)(lVar10 + 0x78)) {
    uVar18 = uVar14 >> 0x1f;
  }
  if (uVar18 == 0) {
    local_1b8 = (longlong)(int)local_194;
    local_1b0 = (longlong)*(int *)(lVar10 + 0x78);
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar9) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  puVar23 = (uint *)(lVar7 + (*(longlong *)(lVar16 + *(longlong *)(lVar10 + 0x70)) >> 2) * 4);
  uVar18 = 0;
  if ((int)uVar19 < *(int *)(lVar10 + 0x78)) {
    uVar18 = uVar14 >> 0x1f;
  }
  if (uVar18 == 0) {
    local_1b8 = (longlong)(int)uVar19;
    local_1b0 = (longlong)*(int *)(lVar10 + 0x78);
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar9) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar13 = *(int *)(*(longlong *)(lVar10 + 0x70) + 8 + lVar16);
  if ((iVar13 < 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  puVar21 = puVar23 + iVar13;
  puVar17 = puVar23;
LAB_1421d4810:
  while( true ) {
    if (puVar17 == puVar21) goto LAB_1421d48de;
    if (local_88.Elements._8_4_ == local_88.Elements._52_4_) break;
    FVar12 = (ForElementType<FSetElementId>)&local_88.Hash;
    if (local_88.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FVar12 = local_88.Hash.SecondaryData;
    }
    iVar15 = *(int *)((longlong)FVar12 + (ulonglong)(local_88.HashSize - 1U & *puVar17) * 4);
    while( true ) {
      if (iVar15 == -1) goto LAB_1421d4877;
      if (*(uint *)(local_88.Elements._0_8_ + (longlong)iVar15 * 0xc) == *puVar17) break;
      iVar15 = *(int *)(local_88.Elements._0_8_ + 4 + (longlong)iVar15 * 0xc);
    }
    puVar17 = puVar17 + 1;
  }
LAB_1421d4877:
  do {
    puVar21 = puVar21 + -1;
    if (puVar17 == puVar21) break;
    uVar19 = *puVar21;
    if (local_88.Elements._8_4_ != local_88.Elements._52_4_) {
      FVar12 = (ForElementType<FSetElementId>)&local_88.Hash;
      if (local_88.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FVar12 = local_88.Hash.SecondaryData;
      }
      for (iVar15 = *(int *)((longlong)FVar12 + (ulonglong)(local_88.HashSize - 1U & uVar19) * 4);
          iVar15 != -1; iVar15 = *(int *)(local_88.Elements._0_8_ + 4 + (longlong)iVar15 * 0xc)) {
        if (*(uint *)(local_88.Elements._0_8_ + (longlong)iVar15 * 0xc) == uVar19) {
          *puVar17 = uVar19;
          puVar17 = puVar17 + 1;
          goto LAB_1421d4810;
        }
      }
    }
  } while( true );
LAB_1421d48de:
  iVar15 = (int)((longlong)puVar17 - (longlong)puVar23 >> 2);
  if (iVar15 != 0) {
    if (iVar15 < 0) {
      local_1b8 = (longlong)iVar15;
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("InNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x15c,L"Invalid count (%lld)");
      if (bVar9) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    if (iVar13 < iVar15) {
      local_1b0 = (longlong)iVar15;
      local_1b8 = 0;
      local_1a8 = (longlong)iVar13;
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index + InNum <= ArrayNum",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x15d,
                         L"Range (index: %lld, count: %lld) lies outside the view of %lld elements")
      ;
      if (bVar9) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    iVar13 = iVar15;
    local_c8 = puVar23;
    iStack_c0 = iVar15;
    if ((iVar15 < 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), puVar23 = local_c8, iVar13 = iStack_c0, bVar9)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pTVar6 = local_168;
  lVar10 = local_180;
  uVar19 = local_194;
  uVar14 = *(int *)(local_180 + 0x80) + local_194;
  uVar18 = 0;
  if ((int)uVar14 < local_168->ArrayNum) {
    uVar18 = ~uVar14 >> 0x1f;
  }
  local_b8 = puVar23;
  iStack_b0 = iVar13;
  if (uVar18 == 0) {
    local_1b8 = (longlong)(int)uVar14;
    local_1b0 = (longlong)local_168->ArrayNum;
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar9) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  local_194 = uVar19 + 1;
  local_188 = local_188 + 0x10;
  pFVar4 = (pTVar6->AllocatorInstance).Data + (longlong)(int)uVar14 * 0x10;
  *(uint **)pFVar4 = local_b8;
  *(longlong *)(pFVar4 + 8) = CONCAT44(uStack_ac,iStack_b0);
  lVar16 = local_158;
  this = local_150;
  if (*(int *)(lVar10 + 0x78) <= (int)local_194) goto LAB_1421d4a49;
  goto LAB_1421d4721;
}

