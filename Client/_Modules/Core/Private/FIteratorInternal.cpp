// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 6

// FIteratorInternal @ 141b21d00

FIteratorInternal * __thiscall
TDirectoryTree<`FDirectoryTreeAPITests::TestBody'::__l2::FMoveConstructOnly>::FIteratorInternal::
FIteratorInternal(void *this,FTreeNode *param_1,EDirectoryTreeGetFlags param_2,wchar_t param_3)

{
  uint uVar1;
  int iVar2;
  void *pvVar3;
  FTreeNode *pFVar4;
  undefined8 *puVar5;
  
  *(undefined8 *)((longlong)this + 0x1e0) = 0;
  *(undefined4 *)((longlong)this + 0x1e8) = 0;
  *(undefined4 *)((longlong)this + 0x1ec) = 10;
  *(longlong *)((longlong)this + 0x1f0) = (longlong)this + 0x210;
  *(longlong *)((longlong)this + 0x1f8) = (longlong)this + 0x210;
  *(longlong *)((longlong)this + 0x200) = (longlong)this + 0x410;
  *(undefined2 *)((longlong)this + 0x208) = 0;
  *(EDirectoryTreeGetFlags *)((longlong)this + 0x410) = param_2;
  *(wchar_t *)((longlong)this + 0x414) = param_3;
  iVar2 = *(int *)((longlong)this + 0x1e8);
  if (iVar2 == *(int *)((longlong)this + 0x1ec)) {
    iVar2 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>::ForElementType<TDirectoryTree<_FDirectoryTreeAPITests::TestBody_::__l2::FMoveConstructOnly>::FIteratorInternal::FStackData>_>
                      (0x830,this,(int *)((longlong)this + 0x1ec));
  }
  *(int *)((longlong)this + 0x1e8) = iVar2 + 1;
  pvVar3 = this;
  if (*(void **)((longlong)this + 0x1e0) != (void *)0x0) {
    pvVar3 = *(void **)((longlong)this + 0x1e0);
  }
  puVar5 = (undefined8 *)((longlong)iVar2 * 0x30 + (longlong)pvVar3);
  *puVar5 = 0;
  *(undefined4 *)(puVar5 + 1) = 0;
  puVar5[2] = param_1;
  uVar1 = param_1->NumChildNodesAndFlags;
  *(undefined4 *)(puVar5 + 4) = 0xffffffff;
  *(undefined4 *)((longlong)puVar5 + 0x24) = 0;
  pFVar4 = param_1;
  if (-1 < (int)uVar1) {
    pFVar4 = (FTreeNode *)0x0;
  }
  *(undefined2 *)(puVar5 + 5) = 0;
  puVar5[3] = pFVar4;
  if (-1 < (int)param_1->NumChildNodesAndFlags) {
    *(undefined4 *)(puVar5 + 4) = 0;
  }
  TraverseToValid(this);
  return this;
}

// ~FIteratorInternal @ 141b2af60

void __thiscall
TDirectoryTree<`FDirectoryTreeAPITests::TestBody'::__l2::FMoveConstructOnly>::FIteratorInternal::
~FIteratorInternal(void *this)

{
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>
            ((TStringBuilderBase<wchar_t> *)((longlong)this + 0x1f0));
  if (*(void **)((longlong)this + 0x1e0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x1e0));
    return;
  }
  return;
}

// operator* @ 141b2c160

TTuple<TStringView<wchar_t>,_protected:_void___cdecl_FDirectoryTreeAPITests::TestBody(FString_const_&)_::_2_::FMoveConstructOnly_*>
* __thiscall
TDirectoryTree<`FDirectoryTreeAPITests::TestBody'::__l2::FMoveConstructOnly>::FIteratorInternal::
operator*(void *this,
         TTuple<TStringView<wchar_t>,_protected:_void___cdecl_FDirectoryTreeAPITests::TestBody(FString_const_&)_::_2_::FMoveConstructOnly_*>
         *__return_storage_ptr__)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  TTuple<TStringView<wchar_t>,_protected:_void___cdecl_FDirectoryTreeAPITests::TestBody(FString_const_&)_::_2_::FMoveConstructOnly_*>
  *pTVar5;
  uint uVar6;
  void *pvVar7;
  
  if (*(int *)((longlong)this + 0x1e8) == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!Stack.IsEmpty()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\DirectoryTree.h"
                       ,0x683,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TTuple<TStringView<wchar_t>,_protected:_void___cdecl_FDirectoryTreeAPITests::TestBody(FString_const_&)_::_2_::FMoveConstructOnly_*>
                *)(*pcVar2)();
      return pTVar5;
    }
  }
  uVar6 = *(int *)((longlong)this + 0x1e8) - 1;
  uVar4 = 0;
  if ((int)uVar6 < *(int *)((longlong)this + 0x1e8)) {
    uVar4 = ~uVar6 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TTuple<TStringView<wchar_t>,_protected:_void___cdecl_FDirectoryTreeAPITests::TestBody(FString_const_&)_::_2_::FMoveConstructOnly_*>
                *)(*pcVar2)();
      return pTVar5;
    }
  }
  iVar1 = *(int *)((longlong)this + 0x1e8);
  pvVar7 = this;
  if (*(void **)((longlong)this + 0x1e0) != (void *)0x0) {
    pvVar7 = *(void **)((longlong)this + 0x1e0);
  }
  *(undefined8 *)__return_storage_ptr__ = *(undefined8 *)((longlong)this + 0x1f0);
  *(int *)&__return_storage_ptr__->field_0x8 =
       (int)(*(longlong *)((longlong)this + 0x1f8) - *(longlong *)((longlong)this + 0x1f0) >> 1);
  *(undefined8 *)&__return_storage_ptr__->field_0x10 =
       *(undefined8 *)((longlong)pvVar7 + ((longlong)iVar1 + -1) * 0x30 + 0x18);
  return __return_storage_ptr__;
}

// operator++ @ 141b2c6c0

FIteratorInternal * __thiscall
TDirectoryTree<`FDirectoryTreeAPITests::TestBody'::__l2::FMoveConstructOnly>::FIteratorInternal::
operator++(void *this)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FIteratorInternal *pFVar6;
  uint uVar7;
  void *pvVar8;
  
  if (*(int *)((longlong)this + 0x1e8) == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(bool)*this",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\DirectoryTree.h"
                       ,0x698,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FIteratorInternal *)(*pcVar3)();
      return pFVar6;
    }
  }
  uVar7 = *(int *)((longlong)this + 0x1e8) - 1;
  uVar5 = 0;
  if ((int)uVar7 < *(int *)((longlong)this + 0x1e8)) {
    uVar5 = ~uVar7 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FIteratorInternal *)(*pcVar3)();
      return pFVar6;
    }
  }
  pvVar8 = this;
  if (*(void **)((longlong)this + 0x1e0) != (void *)0x0) {
    pvVar8 = *(void **)((longlong)this + 0x1e0);
  }
  iVar1 = *(int *)((longlong)this + 0x1e8);
  iVar2 = *(int *)((longlong)pvVar8 + (longlong)iVar1 * 0x30 + -0x10);
  if (iVar2 == -1) {
    *(undefined4 *)((longlong)pvVar8 + (longlong)iVar1 * 0x30 + -0x10) = 0;
  }
  else {
    if ((int)(*(uint *)(*(longlong *)((longlong)pvVar8 + (longlong)iVar1 * 0x30 + -0x20) + 0x18) &
             0x7fffffff) <= iVar2) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Data->ChildIndex < Data->Node->GetNumChildNodes()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\DirectoryTree.h"
                         ,0x6a5,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar6 = (FIteratorInternal *)(*pcVar3)();
        return pFVar6;
      }
    }
    if (*(char *)((longlong)pvVar8 + (longlong)iVar1 * 0x30 + -8) == '\0') {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Data->bChildRelPathInitialized",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\DirectoryTree.h"
                         ,0x6a6,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar6 = (FIteratorInternal *)(*pcVar3)();
        return pFVar6;
      }
    }
    if (*(int *)((longlong)pvVar8 + (longlong)iVar1 * 0x30 + -0x28) == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Data->RemainingChildRelPath.IsEmpty()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\DirectoryTree.h"
                         ,0x6a9,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar6 = (FIteratorInternal *)(*pcVar3)();
        return pFVar6;
      }
    }
    IncrementRemainingChildRelPath
              (this,(FStackData *)((longlong)pvVar8 + (longlong)iVar1 * 0x30 + -0x30));
  }
  TraverseToValid(this);
  return this;
}

// IncrementRemainingChildRelPath @ 141b449a0

void __thiscall
TDirectoryTree<`FDirectoryTreeAPITests::TestBody'::__l2::FMoveConstructOnly>::FIteratorInternal::
IncrementRemainingChildRelPath(void *this,FStackData *param_1)

{
  TStringBuilderBase<wchar_t> *this_00;
  ulong64 uVar1;
  wchar_t *pwVar2;
  int iVar3;
  void *pvVar4;
  longlong lVar5;
  int iVar6;
  TStringView<wchar_t> local_48;
  TStringView<wchar_t> local_38;
  TStringView<wchar_t> local_28;
  
  local_28.DataPtr = (param_1->RemainingChildRelPath).DataPtr;
  local_28.Size = (param_1->RemainingChildRelPath).Size;
  local_28._12_4_ = *(undefined4 *)&(param_1->RemainingChildRelPath).field_0xc;
  local_48.DataPtr = (wchar_t *)0x0;
  local_38.DataPtr = (wchar_t *)0x0;
  local_48.Size = 0;
  local_38.Size = 0;
  FPathViews::SplitFirstComponent(&local_28,&local_48,&local_38);
  (param_1->RemainingChildRelPath).DataPtr = local_38.DataPtr;
  *(ulonglong *)&(param_1->RemainingChildRelPath).Size = CONCAT44(local_38._12_4_,local_38.Size);
  this_00 = (TStringBuilderBase<wchar_t> *)((longlong)this + 0x1f0);
  lVar5 = *(longlong *)((longlong)this + 0x1f8);
  iVar6 = (int)(lVar5 - (longlong)this_00->Base >> 1);
  if (((iVar6 != 0) && (*(short *)(lVar5 + -2) != 0x2f)) && (*(short *)(lVar5 + -2) != 0x5c)) {
    if (*(ulonglong *)((longlong)this + 0x200) < lVar5 + 2U) {
      TStringBuilderBase<wchar_t>::Extend(this_00,1);
    }
    **(undefined2 **)((longlong)this + 0x1f8) = 0x2f;
    *(longlong *)((longlong)this + 0x1f8) = *(longlong *)((longlong)this + 0x1f8) + 2;
    lVar5 = *(longlong *)((longlong)this + 0x1f8);
  }
  iVar3 = local_48.Size;
  pwVar2 = local_48.DataPtr;
  uVar1 = (longlong)local_48.Size * 2;
  if (*(ulonglong *)((longlong)this + 0x200) < uVar1 + lVar5) {
    TStringBuilderBase<wchar_t>::Extend(this_00,(longlong)local_48.Size);
  }
  if (iVar3 != 0) {
    pvVar4 = FGenericPlatformString::Memcpy(*(void **)((longlong)this + 0x1f8),pwVar2,uVar1);
    *(void **)((longlong)this + 0x1f8) = (void *)((longlong)pvVar4 + uVar1);
  }
  UE::DirectoryTree::FixupPathSeparator(this_00,iVar6,*(wchar_t *)((longlong)this + 0x414));
  return;
}

// TraverseToValid @ 141bb9710

void __thiscall
TDirectoryTree<`FDirectoryTreeAPITests::TestBody'::__l2::FMoveConstructOnly>::FIteratorInternal::
TraverseToValid(void *this)

{
  longlong *plVar1;
  TStringBuilderBase<wchar_t> *this_00;
  code *pcVar2;
  ulong64 uVar3;
  wchar_t *pwVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  void *pvVar9;
  undefined8 *puVar10;
  longlong lVar11;
  void *pvVar12;
  longlong lVar13;
  longlong lVar14;
  int iVar15;
  int iVar16;
  undefined8 *puVar17;
  TStringView<wchar_t> local_b8;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  longlong local_98;
  longlong lStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined2 uStack_80;
  undefined6 uStack_7e;
  undefined8 local_78;
  undefined8 uStack_70;
  TStringView<wchar_t> local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  wchar_t *local_48;
  int iStack_40;
  undefined4 uStack_3c;
  TStringView<wchar_t> local_38;
  
  iVar8 = *(int *)((longlong)this + 0x1e8);
  if (iVar8 == 0) {
    return;
  }
LAB_141bb9752:
  uVar6 = 0;
  if (iVar8 + -1 < iVar8) {
    uVar6 = (uint)-iVar8 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pvVar12 = this;
  if (*(void **)((longlong)this + 0x1e0) != (void *)0x0) {
    pvVar12 = *(void **)((longlong)this + 0x1e0);
  }
  iVar8 = *(int *)((longlong)this + 0x1e8);
  do {
    plVar1 = (longlong *)((longlong)pvVar12 + (longlong)iVar8 * 0x30 + -0x20);
    while( true ) {
      iVar7 = *(int *)((longlong)pvVar12 + (longlong)iVar8 * 0x30 + -0x10);
      if (iVar7 == -1) break;
      lVar11 = *plVar1;
      if ((int)(*(uint *)(lVar11 + 0x18) & 0x7fffffff) <= iVar7) {
        if ((*(int *)((longlong)this + 0x1e8) < 1) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pvVar12 = this;
        if (*(void **)((longlong)this + 0x1e0) != (void *)0x0) {
          pvVar12 = *(void **)((longlong)this + 0x1e0);
        }
        uVar6 = *(int *)((longlong)this + 0x1e8) - 1;
        iVar8 = ~uVar6 + *(int *)((longlong)this + 0x1e8);
        pvVar12 = (void *)((longlong)(int)uVar6 * 0x30 + (longlong)pvVar12);
        if (iVar8 != 0) {
          memmove(pvVar12,(void *)((longlong)pvVar12 + 0x30),(longlong)iVar8 * 0x30);
        }
        *(int *)((longlong)this + 0x1e8) = *(int *)((longlong)this + 0x1e8) + -1;
LAB_141bb9c75:
        iVar8 = *(int *)((longlong)this + 0x1e8);
        if (iVar8 == 0) {
          return;
        }
        goto LAB_141bb9752;
      }
      if (*(char *)((longlong)pvVar12 + (longlong)iVar8 * 0x30 + -8) == '\0') {
        *(undefined1 *)((longlong)pvVar12 + (longlong)iVar8 * 0x30 + -8) = 1;
        this_00 = (TStringBuilderBase<wchar_t> *)((longlong)this + 0x1f0);
        lVar13 = (longlong)iVar7 * 0x10;
        *(int *)((longlong)pvVar12 + (longlong)iVar8 * 0x30 + -0xc) =
             (int)(*(longlong *)((longlong)this + 0x1f8) - (longlong)this_00->Base >> 1);
        if ((*(byte *)((longlong)this + 0x410) & 4) == 0) {
          uStack_70 = 0;
          local_78 = 0;
          *(undefined8 *)((longlong)pvVar12 + (longlong)iVar8 * 0x30 + -0x30) = 0;
          *(undefined8 *)((longlong)pvVar12 + (longlong)iVar8 * 0x30 + -0x28) = 0;
          lVar14 = *(longlong *)((longlong)this + 0x1f8);
          puVar17 = (undefined8 *)(*(longlong *)(lVar11 + 8) + lVar13);
          iVar7 = (int)(lVar14 - (longlong)this_00->Base >> 1);
          if (((iVar7 != 0) && (*(short *)(lVar14 + -2) != 0x2f)) &&
             (*(short *)(lVar14 + -2) != 0x5c)) {
            if (*(ulonglong *)((longlong)this + 0x200) < lVar14 + 2U) {
              TStringBuilderBase<wchar_t>::Extend(this_00,1);
            }
            **(undefined2 **)((longlong)this + 0x1f8) = 0x2f;
            *(longlong *)((longlong)this + 0x1f8) = *(longlong *)((longlong)this + 0x1f8) + 2;
            lVar14 = *(longlong *)((longlong)this + 0x1f8);
          }
          iVar15 = *(int *)(puVar17 + 1);
          pvVar9 = (void *)*puVar17;
          iVar16 = iVar15 + -1;
          if (iVar15 == 0) {
            iVar16 = 0;
          }
          uVar3 = (longlong)iVar16 * 2;
          if (*(ulonglong *)((longlong)this + 0x200) < lVar14 + uVar3) {
            TStringBuilderBase<wchar_t>::Extend(this_00,(longlong)iVar16);
          }
          if (iVar16 != 0) {
            pvVar9 = FGenericPlatformString::Memcpy(*(void **)((longlong)this + 0x1f8),pvVar9,uVar3)
            ;
            *(void **)((longlong)this + 0x1f8) = (void *)((longlong)pvVar9 + uVar3);
          }
        }
        else {
          local_b8.DataPtr = (wchar_t *)0x0;
          local_b8.Size = 0;
          local_68.DataPtr = (wchar_t *)0x0;
          local_48 = *(wchar_t **)(*(longlong *)(lVar11 + 8) + lVar13);
          iVar7 = *(int *)(*(longlong *)(lVar11 + 8) + 8 + lVar13);
          local_68.Size = 0;
          iStack_40 = iVar7 + -1;
          if (iVar7 == 0) {
            iStack_40 = 0;
          }
          local_38._12_4_ = uStack_3c;
          local_38.Size = iStack_40;
          *(wchar_t **)((longlong)pvVar12 + (longlong)iVar8 * 0x30 + -0x30) = local_48;
          *(undefined8 *)((longlong)pvVar12 + (longlong)iVar8 * 0x30 + -0x28) = local_38._8_8_;
          local_38.DataPtr = local_48;
          FPathViews::SplitFirstComponent(&local_38,&local_b8,&local_68);
          *(wchar_t **)((longlong)pvVar12 + (longlong)iVar8 * 0x30 + -0x30) = local_68.DataPtr;
          *(ulonglong *)((longlong)pvVar12 + (longlong)iVar8 * 0x30 + -0x28) =
               CONCAT44(local_68._12_4_,local_68.Size);
          lVar11 = *(longlong *)((longlong)this + 0x1f8);
          iVar7 = (int)(lVar11 - (longlong)this_00->Base >> 1);
          if (((iVar7 != 0) && (*(short *)(lVar11 + -2) != 0x2f)) &&
             (*(short *)(lVar11 + -2) != 0x5c)) {
            if (*(ulonglong *)((longlong)this + 0x200) < lVar11 + 2U) {
              TStringBuilderBase<wchar_t>::Extend(this_00,1);
            }
            **(undefined2 **)((longlong)this + 0x1f8) = 0x2f;
            *(longlong *)((longlong)this + 0x1f8) = *(longlong *)((longlong)this + 0x1f8) + 2;
            lVar11 = *(longlong *)((longlong)this + 0x1f8);
          }
          iVar15 = local_b8.Size;
          pwVar4 = local_b8.DataPtr;
          uVar3 = (longlong)local_b8.Size * 2;
          if (*(ulonglong *)((longlong)this + 0x200) < uVar3 + lVar11) {
            TStringBuilderBase<wchar_t>::Extend(this_00,(longlong)local_b8.Size);
          }
          if (iVar15 != 0) {
            pvVar9 = FGenericPlatformString::Memcpy(*(void **)((longlong)this + 0x1f8),pwVar4,uVar3)
            ;
            *(void **)((longlong)this + 0x1f8) = (void *)((longlong)pvVar9 + uVar3);
          }
        }
        UE::DirectoryTree::FixupPathSeparator(this_00,iVar7,*(wchar_t *)((longlong)this + 0x414));
      }
      else {
        if (*(int *)((longlong)pvVar12 + (longlong)iVar8 * 0x30 + -0x28) != 0) {
          return;
        }
        if (*(char *)((longlong)pvVar12 + (longlong)iVar8 * 0x30 + -7) == '\0') {
          *(undefined1 *)((longlong)pvVar12 + (longlong)iVar8 * 0x30 + -7) = 1;
          local_98 = (longlong)iVar7 * 0x20 + *(longlong *)(lVar11 + 0x10);
          local_a8 = 0;
          uStack_a0 = 0;
          lStack_90 = local_98;
          if (-1 < *(int *)(local_98 + 0x18)) {
            lStack_90 = *(longlong *)((longlong)pvVar12 + (longlong)iVar8 * 0x30 + -0x18);
          }
          puVar17 = *(undefined8 **)((longlong)this + 0x1e0);
          local_88 = 0xffffffff;
          uStack_84 = 0;
          puVar10 = this;
          if (puVar17 != (undefined8 *)0x0) {
            puVar10 = puVar17;
          }
          uStack_80 = 0;
          if (puVar10 <= &local_a8) {
            puVar10 = this;
            if (puVar17 != (undefined8 *)0x0) {
              puVar10 = puVar17;
            }
            if ((&local_a8 < puVar10 + (longlong)*(int *)((longlong)this + 0x1ec) * 6) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar5)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
          }
          iVar8 = *(int *)((longlong)this + 0x1e8);
          if (iVar8 == *(int *)((longlong)this + 0x1ec)) {
            iVar8 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>::ForElementType<TDirectoryTree<_FDirectoryTreeAPITests::TestBody_::__l2::FMoveConstructOnly>::FIteratorInternal::FStackData>_>
                              (0x830,this,(int *)((longlong)this + 0x1ec));
          }
          *(int *)((longlong)this + 0x1e8) = iVar8 + 1;
          lVar11 = (longlong)iVar8;
          pvVar12 = this;
          if (*(void **)((longlong)this + 0x1e0) != (void *)0x0) {
            pvVar12 = *(void **)((longlong)this + 0x1e0);
          }
          puVar17 = (undefined8 *)((longlong)pvVar12 + lVar11 * 0x30);
          *puVar17 = local_a8;
          puVar17[1] = CONCAT44(uStack_9c,uStack_a0);
          plVar1 = (longlong *)((longlong)pvVar12 + lVar11 * 0x30 + 0x10);
          *plVar1 = local_98;
          plVar1[1] = lStack_90;
          puVar17 = (undefined8 *)((longlong)pvVar12 + lVar11 * 0x30 + 0x20);
          *puVar17 = CONCAT44(uStack_84,local_88);
          puVar17[1] = CONCAT62(uStack_7e,uStack_80);
          goto LAB_141bb9c75;
        }
        *(undefined2 *)((longlong)pvVar12 + (longlong)iVar8 * 0x30 + -8) = 0;
        *(int *)((longlong)pvVar12 + (longlong)iVar8 * 0x30 + -0x10) = iVar7 + 1;
        uStack_50 = 0;
        local_58 = 0;
        *(undefined8 *)((longlong)pvVar12 + (longlong)iVar8 * 0x30 + -0x30) = 0;
        *(undefined8 *)((longlong)pvVar12 + (longlong)iVar8 * 0x30 + -0x28) = 0;
        iVar7 = (int)(*(longlong *)((longlong)this + 0x1f8) - *(longlong *)((longlong)this + 0x1f0)
                     >> 1);
        iVar15 = iVar7 - *(int *)((longlong)pvVar12 + (longlong)iVar8 * 0x30 + -0xc);
        if ((iVar7 < iVar15) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount <= Len()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\StringBuilder.h"
                               ,0xe8,L""), bVar5)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        *(longlong *)((longlong)this + 0x1f8) =
             *(longlong *)((longlong)this + 0x1f8) + (longlong)iVar15 * -2;
        *(undefined4 *)((longlong)pvVar12 + (longlong)iVar8 * 0x30 + -0xc) = 0;
      }
    }
    if ((*(uint *)((longlong)this + 0x410) & 4) != 0) {
      return;
    }
    uVar6 = *(uint *)(*plVar1 + 0x18);
    if ((int)uVar6 < 0) {
      return;
    }
    if (((*(uint *)((longlong)this + 0x410) & 1) == 0) && (1 < *(int *)((longlong)this + 0x1e8))) {
      *(uint *)((longlong)pvVar12 + (longlong)iVar8 * 0x30 + -0x10) = uVar6 & 0x7fffffff;
    }
    else {
      *(undefined4 *)((longlong)pvVar12 + (longlong)iVar8 * 0x30 + -0x10) = 0;
    }
  } while( true );
}

