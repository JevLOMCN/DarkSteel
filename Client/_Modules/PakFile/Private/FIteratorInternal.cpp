// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PakFile
// Functions: 5

// FIteratorInternal @ 142a52040

FIteratorInternal * __thiscall
TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>
::FIteratorInternal::FIteratorInternal
          (FIteratorInternal *this,FTreeNode *param_1,EDirectoryTreeGetFlags param_2,wchar_t param_3
          )

{
  wchar_t *pwVar1;
  uint uVar2;
  ForElementType<TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>::FIteratorInternal::FStackData>
  FVar3;
  int iVar4;
  ForElementType<TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>::FIteratorInternal::FStackData>
  FVar5;
  FTreeNode *pFVar6;
  undefined8 *puVar7;
  
  pwVar1 = (this->Path).StringBuffer;
  (this->Stack).AllocatorInstance.SecondaryData =
       (ForElementType<TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>::FIteratorInternal::FStackData>
        )0x0;
  (this->Stack).ArrayNum = 0;
  (this->Stack).ArrayMax = 10;
  (this->Path)._padding_ = (longlong)pwVar1;
  (this->Path)._padding_ = (longlong)pwVar1;
  (this->Path)._padding_ = (longlong)&this->Flags;
  *(undefined2 *)&(this->Path)._padding_ = 0;
  this->Flags = param_2;
  this->PathSeparator = param_3;
  iVar4 = (this->Stack).ArrayNum;
  if (iVar4 == (this->Stack).ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>::ForElementType<TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>::FIteratorInternal::FStackData>_>
                      (0x830,(ForElementType<TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>::FIteratorInternal::FStackData>
                              *)this,&(this->Stack).ArrayMax);
  }
  (this->Stack).ArrayNum = iVar4 + 1;
  FVar3 = (this->Stack).AllocatorInstance.SecondaryData;
  FVar5 = (ForElementType<TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>::FIteratorInternal::FStackData>
           )this;
  if (FVar3 != (ForElementType<TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>::FIteratorInternal::FStackData>
                )0x0) {
    FVar5 = FVar3;
  }
  puVar7 = (undefined8 *)((longlong)iVar4 * 0x30 + (longlong)FVar5);
  *puVar7 = 0;
  *(undefined4 *)(puVar7 + 1) = 0;
  puVar7[2] = param_1;
  uVar2 = param_1->NumChildNodesAndFlags;
  *(undefined4 *)(puVar7 + 4) = 0xffffffff;
  *(undefined4 *)((longlong)puVar7 + 0x24) = 0;
  pFVar6 = param_1;
  if (-1 < (int)uVar2) {
    pFVar6 = (FTreeNode *)0x0;
  }
  *(undefined2 *)(puVar7 + 5) = 0;
  puVar7[3] = pFVar6;
  if (-1 < (int)param_1->NumChildNodesAndFlags) {
    *(undefined4 *)(puVar7 + 4) = 0;
  }
  TraverseToValid(this);
  return this;
}

// operator* @ 142a58a30

TTuple<TStringView<wchar_t>,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_*>
* __thiscall
TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>
::FIteratorInternal::operator*
          (FIteratorInternal *this,
          TTuple<TStringView<wchar_t>,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_*>
          *__return_storage_ptr__)

{
  uchar *puVar1;
  int iVar2;
  ForElementType<TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>::FIteratorInternal::FStackData>
  FVar3;
  code *pcVar4;
  uchar uVar5;
  uchar uVar6;
  uchar uVar7;
  uchar uVar8;
  uchar uVar9;
  uchar uVar10;
  uchar uVar11;
  bool bVar12;
  uint uVar13;
  TTuple<TStringView<wchar_t>,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_*>
  *pTVar14;
  uint uVar15;
  ForElementType<TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>::FIteratorInternal::FStackData>
  FVar16;
  
  if ((this->Stack).ArrayNum == 0) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("!Stack.IsEmpty()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\DirectoryTree.h"
                        ,0x683,L"");
    if (bVar12) {
      pcVar4 = (code *)swi(3);
      pTVar14 = (TTuple<TStringView<wchar_t>,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_*>
                 *)(*pcVar4)();
      return pTVar14;
    }
  }
  iVar2 = (this->Stack).ArrayNum;
  uVar15 = iVar2 - 1;
  uVar13 = 0;
  if ((int)uVar15 < iVar2) {
    uVar13 = ~uVar15 >> 0x1f;
  }
  if (uVar13 == 0) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar12) {
      pcVar4 = (code *)swi(3);
      pTVar14 = (TTuple<TStringView<wchar_t>,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_*>
                 *)(*pcVar4)();
      return pTVar14;
    }
  }
  FVar3 = (this->Stack).AllocatorInstance.SecondaryData;
  iVar2 = (this->Stack).ArrayNum;
  FVar16 = (ForElementType<TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>::FIteratorInternal::FStackData>
            )this;
  if (FVar3 != (ForElementType<TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>::FIteratorInternal::FStackData>
                )0x0) {
    FVar16 = FVar3;
  }
  *(longlong *)__return_storage_ptr__ = (this->Path)._padding_;
  *(int *)&__return_storage_ptr__->field_0x8 =
       (int)((this->Path)._padding_ - (this->Path)._padding_ >> 1);
  puVar1 = (uchar *)((longlong)FVar16 + 0x18) + ((longlong)iVar2 + -1) * 0x30;
  uVar5 = puVar1[1];
  uVar6 = puVar1[2];
  uVar7 = puVar1[3];
  uVar8 = puVar1[4];
  uVar9 = puVar1[5];
  uVar10 = puVar1[6];
  uVar11 = puVar1[7];
  __return_storage_ptr__->field_0x10 = puVar1[0];
  __return_storage_ptr__->field_0x11 = uVar5;
  __return_storage_ptr__->field_0x12 = uVar6;
  __return_storage_ptr__->field_0x13 = uVar7;
  __return_storage_ptr__->field_0x14 = uVar8;
  __return_storage_ptr__->field_0x15 = uVar9;
  __return_storage_ptr__->field_0x16 = uVar10;
  __return_storage_ptr__->field_0x17 = uVar11;
  return __return_storage_ptr__;
}

// operator++ @ 142a58bb0

FIteratorInternal * __thiscall
TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>
::FIteratorInternal::operator++(FIteratorInternal *this)

{
  int iVar1;
  ForElementType<TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>::FIteratorInternal::FStackData>
  FVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FIteratorInternal *pFVar6;
  uint uVar7;
  ForElementType<TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>::FIteratorInternal::FStackData>
  FVar8;
  longlong lVar9;
  
  if ((this->Stack).ArrayNum == 0) {
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
  iVar1 = (this->Stack).ArrayNum;
  uVar7 = iVar1 - 1;
  uVar5 = 0;
  if ((int)uVar7 < iVar1) {
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
  FVar2 = (this->Stack).AllocatorInstance.SecondaryData;
  FVar8 = (ForElementType<TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>::FIteratorInternal::FStackData>
           )this;
  if (FVar2 != (ForElementType<TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>::FIteratorInternal::FStackData>
                )0x0) {
    FVar8 = FVar2;
  }
  lVar9 = (longlong)(this->Stack).ArrayNum * 0x30 + (longlong)FVar8;
  if (*(int *)(lVar9 + -0x10) == -1) {
    *(undefined4 *)(lVar9 + -0x10) = 0;
  }
  else {
    if ((int)(*(uint *)(*(longlong *)(lVar9 + -0x20) + 0x60) & 0x7fffffff) <=
        *(int *)(lVar9 + -0x10)) {
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
    if (*(char *)(lVar9 + -8) == '\0') {
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
    if (*(int *)(lVar9 + -0x28) == 0) {
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
    IncrementRemainingChildRelPath(this,(FStackData *)(lVar9 + -0x30));
  }
  TraverseToValid(this);
  return this;
}

// IncrementRemainingChildRelPath @ 142a7c140

void __thiscall
TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>
::FIteratorInternal::IncrementRemainingChildRelPath(FIteratorInternal *this,FStackData *param_1)

{
  longlong *plVar1;
  TStringBuilderWithBuffer<wchar_t,256> *this_00;
  longlong lVar2;
  int iVar3;
  TStringView<wchar_t> local_38;
  TStringView<wchar_t> local_28;
  TStringView<wchar_t> local_18;
  
  local_18.DataPtr = (param_1->RemainingChildRelPath).DataPtr;
  local_18.Size = (param_1->RemainingChildRelPath).Size;
  local_18._12_4_ = *(undefined4 *)&(param_1->RemainingChildRelPath).field_0xc;
  local_38.DataPtr = (wchar_t *)0x0;
  local_28.DataPtr = (wchar_t *)0x0;
  local_38.Size = 0;
  local_28.Size = 0;
  FPathViews::SplitFirstComponent(&local_18,&local_38,&local_28);
  (param_1->RemainingChildRelPath).DataPtr = local_28.DataPtr;
  *(ulonglong *)&(param_1->RemainingChildRelPath).Size = CONCAT44(local_28._12_4_,local_28.Size);
  this_00 = &this->Path;
  lVar2 = (this->Path)._padding_;
  iVar3 = (int)(lVar2 - this_00->_padding_ >> 1);
  if (((iVar3 != 0) && (*(short *)(lVar2 + -2) != 0x2f)) && (*(short *)(lVar2 + -2) != 0x5c)) {
    if ((ulonglong)(this->Path)._padding_ < lVar2 + 2U) {
      TStringBuilderBase<wchar_t>::Extend((TStringBuilderBase<wchar_t> *)this_00,1);
    }
    *(undefined2 *)(this->Path)._padding_ = 0x2f;
    plVar1 = &(this->Path)._padding_;
    *plVar1 = *plVar1 + 2;
  }
  TStringBuilderBase<wchar_t>::Append<wchar_t,0>
            ((TStringBuilderBase<wchar_t> *)this_00,local_38.DataPtr,local_38.Size);
  UE::DirectoryTree::FixupPathSeparator
            ((TStringBuilderBase<wchar_t> *)this_00,iVar3,this->PathSeparator);
  return;
}

// TraverseToValid @ 142aa3d40

void __thiscall
TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>
::FIteratorInternal::TraverseToValid(FIteratorInternal *this)

{
  longlong *plVar1;
  TStringBuilderWithBuffer<wchar_t,256> *this_00;
  int *piVar2;
  ForElementType<TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>::FIteratorInternal::FStackData>
  FVar3;
  longlong lVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  ForElementType<TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>::FIteratorInternal::FStackData>
  FVar10;
  void *_Dst;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  undefined8 *puVar14;
  uint uVar15;
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
  uint uStack_40;
  undefined4 uStack_3c;
  TStringView<wchar_t> local_38;
  
  iVar9 = (this->Stack).ArrayNum;
  if (iVar9 == 0) {
    return;
  }
LAB_142aa3d82:
  uVar15 = 0;
  uVar8 = uVar15;
  if (iVar9 + -1 < iVar9) {
    uVar8 = (uint)-iVar9 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  FVar3 = (this->Stack).AllocatorInstance.SecondaryData;
  FVar10 = (ForElementType<TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>::FIteratorInternal::FStackData>
            )this;
  if (FVar3 != (ForElementType<TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>::FIteratorInternal::FStackData>
                )0x0) {
    FVar10 = FVar3;
  }
  lVar13 = (longlong)(this->Stack).ArrayNum * 0x30 + (longlong)FVar10;
  do {
    while( true ) {
      iVar9 = *(int *)(lVar13 + -0x10);
      if (iVar9 == -1) break;
      lVar4 = *(longlong *)(lVar13 + -0x20);
      if ((int)(*(uint *)(lVar4 + 0x60) & 0x7fffffff) <= iVar9) {
        if (((this->Stack).ArrayNum < 1) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        FVar3 = (this->Stack).AllocatorInstance.SecondaryData;
        iVar9 = (this->Stack).ArrayNum;
        FVar10 = (ForElementType<TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>::FIteratorInternal::FStackData>
                  )this;
        if (FVar3 != (ForElementType<TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>::FIteratorInternal::FStackData>
                      )0x0) {
          FVar10 = FVar3;
        }
        uVar8 = iVar9 - 1;
        iVar9 = ~uVar8 + iVar9;
        _Dst = (void *)((longlong)(int)uVar8 * 0x30 + (longlong)FVar10);
        if (iVar9 != 0) {
          memmove(_Dst,(void *)((longlong)_Dst + 0x30),(longlong)iVar9 * 0x30);
        }
        piVar2 = &(this->Stack).ArrayNum;
        *piVar2 = *piVar2 + -1;
LAB_142aa422f:
        iVar9 = (this->Stack).ArrayNum;
        if (iVar9 == 0) {
          return;
        }
        goto LAB_142aa3d82;
      }
      if (*(char *)(lVar13 + -8) == '\0') {
        *(undefined1 *)(lVar13 + -8) = 1;
        this_00 = &this->Path;
        lVar11 = (longlong)iVar9 * 0x10;
        *(int *)(lVar13 + -0xc) = (int)((this->Path)._padding_ - this_00->_padding_ >> 1);
        if ((this->Flags & ImpliedChildren) == None) {
          uStack_70 = 0;
          local_78 = 0;
          *(undefined8 *)(lVar13 + -0x30) = 0;
          *(undefined8 *)(lVar13 + -0x28) = 0;
          lVar5 = (this->Path)._padding_;
          puVar14 = (undefined8 *)(*(longlong *)(lVar4 + 0x50) + lVar11);
          iVar9 = (int)(lVar5 - this_00->_padding_ >> 1);
          if (((iVar9 != 0) && (*(short *)(lVar5 + -2) != 0x2f)) && (*(short *)(lVar5 + -2) != 0x5c)
             ) {
            if ((ulonglong)(this->Path)._padding_ < lVar5 + 2U) {
              TStringBuilderBase<wchar_t>::Extend((TStringBuilderBase<wchar_t> *)this_00,1);
            }
            *(undefined2 *)(this->Path)._padding_ = 0x2f;
            plVar1 = &(this->Path)._padding_;
            *plVar1 = *plVar1 + 2;
          }
          iVar12 = *(int *)(puVar14 + 1);
          uVar8 = iVar12 - 1;
          if (iVar12 == 0) {
            uVar8 = uVar15;
          }
          TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                    ((TStringBuilderBase<wchar_t> *)this_00,(wchar_t *)*puVar14,uVar8);
          UE::DirectoryTree::FixupPathSeparator
                    ((TStringBuilderBase<wchar_t> *)this_00,iVar9,this->PathSeparator);
        }
        else {
          local_b8.DataPtr = (wchar_t *)0x0;
          local_b8.Size = 0;
          local_68.DataPtr = (wchar_t *)0x0;
          local_48 = *(wchar_t **)(*(longlong *)(lVar4 + 0x50) + lVar11);
          iVar9 = *(int *)(*(longlong *)(lVar4 + 0x50) + 8 + lVar11);
          local_68.Size = 0;
          uStack_40 = iVar9 - 1;
          if (iVar9 == 0) {
            uStack_40 = uVar15;
          }
          local_38._12_4_ = uStack_3c;
          local_38.Size = uStack_40;
          *(wchar_t **)(lVar13 + -0x30) = local_48;
          *(undefined8 *)(lVar13 + -0x28) = local_38._8_8_;
          local_38.DataPtr = local_48;
          FPathViews::SplitFirstComponent(&local_38,&local_b8,&local_68);
          *(wchar_t **)(lVar13 + -0x30) = local_68.DataPtr;
          *(ulonglong *)(lVar13 + -0x28) = CONCAT44(local_68._12_4_,local_68.Size);
          lVar4 = (this->Path)._padding_;
          iVar9 = (int)(lVar4 - this_00->_padding_ >> 1);
          if (((iVar9 != 0) && (*(short *)(lVar4 + -2) != 0x2f)) && (*(short *)(lVar4 + -2) != 0x5c)
             ) {
            if ((ulonglong)(this->Path)._padding_ < lVar4 + 2U) {
              TStringBuilderBase<wchar_t>::Extend((TStringBuilderBase<wchar_t> *)this_00,1);
            }
            *(undefined2 *)(this->Path)._padding_ = 0x2f;
            plVar1 = &(this->Path)._padding_;
            *plVar1 = *plVar1 + 2;
          }
          TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                    ((TStringBuilderBase<wchar_t> *)this_00,local_b8.DataPtr,local_b8.Size);
          UE::DirectoryTree::FixupPathSeparator
                    ((TStringBuilderBase<wchar_t> *)this_00,iVar9,this->PathSeparator);
        }
      }
      else {
        if (*(int *)(lVar13 + -0x28) != 0) {
          return;
        }
        if (*(char *)(lVar13 + -7) == '\0') {
          *(undefined1 *)(lVar13 + -7) = 1;
          local_98 = (longlong)iVar9 * 0x68 + *(longlong *)(lVar4 + 0x58);
          local_a8 = 0;
          uStack_a0 = 0;
          lStack_90 = local_98;
          if (-1 < *(int *)(local_98 + 0x60)) {
            lStack_90 = *(longlong *)(lVar13 + -0x18);
          }
          FVar3 = (this->Stack).AllocatorInstance.SecondaryData;
          local_88 = 0xffffffff;
          uStack_84 = 0;
          FVar10 = (ForElementType<TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>::FIteratorInternal::FStackData>
                    )this;
          if (FVar3 != (ForElementType<TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>::FIteratorInternal::FStackData>
                        )0x0) {
            FVar10 = FVar3;
          }
          uStack_80 = 0;
          if ((ulonglong)FVar10 <= &local_a8) {
            FVar10 = (ForElementType<TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>::FIteratorInternal::FStackData>
                      )this;
            if (FVar3 != (ForElementType<TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>::FIteratorInternal::FStackData>
                          )0x0) {
              FVar10 = FVar3;
            }
            if ((&local_a8 <
                 (undefined8 *)((longlong)(this->Stack).ArrayMax * 0x30 + (longlong)FVar10)) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar7)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
          }
          iVar9 = (this->Stack).ArrayNum;
          piVar2 = &(this->Stack).ArrayMax;
          if (iVar9 == *piVar2) {
            iVar9 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>::ForElementType<TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>::FIteratorInternal::FStackData>_>
                              (0x830,(ForElementType<TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>::FIteratorInternal::FStackData>
                                      *)this,piVar2);
          }
          (this->Stack).ArrayNum = iVar9 + 1;
          FVar3 = (this->Stack).AllocatorInstance.SecondaryData;
          lVar13 = (longlong)iVar9;
          FVar10 = (ForElementType<TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>::FIteratorInternal::FStackData>
                    )this;
          if (FVar3 != (ForElementType<TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>::FIteratorInternal::FStackData>
                        )0x0) {
            FVar10 = FVar3;
          }
          puVar14 = (undefined8 *)((longlong)FVar10 + lVar13 * 0x30);
          *puVar14 = local_a8;
          puVar14[1] = CONCAT44(uStack_9c,uStack_a0);
          *(longlong *)((uchar *)((longlong)FVar10 + 0x10) + lVar13 * 0x30) = local_98;
          *(longlong *)((uchar *)((longlong)FVar10 + 0x10) + lVar13 * 0x30 + 8) = lStack_90;
          *(ulonglong *)((uchar *)((longlong)FVar10 + 0x20) + lVar13 * 0x30) =
               CONCAT44(uStack_84,local_88);
          *(ulonglong *)((uchar *)((longlong)FVar10 + 0x20) + lVar13 * 0x30 + 8) =
               CONCAT62(uStack_7e,uStack_80);
          goto LAB_142aa422f;
        }
        *(undefined2 *)(lVar13 + -8) = 0;
        *(int *)(lVar13 + -0x10) = iVar9 + 1;
        uStack_50 = 0;
        local_58 = 0;
        *(undefined8 *)(lVar13 + -0x30) = 0;
        *(undefined8 *)(lVar13 + -0x28) = 0;
        iVar9 = (int)((this->Path)._padding_ - (this->Path)._padding_ >> 1);
        iVar12 = iVar9 - *(int *)(lVar13 + -0xc);
        if ((iVar9 < iVar12) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount <= Len()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\StringBuilder.h"
                               ,0xe8,L""), bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        plVar1 = &(this->Path)._padding_;
        *plVar1 = *plVar1 + (longlong)iVar12 * -2;
        *(undefined4 *)(lVar13 + -0xc) = 0;
      }
    }
    if ((this->Flags & ImpliedChildren) != None) {
      return;
    }
    uVar8 = *(uint *)(*(longlong *)(lVar13 + -0x20) + 0x60);
    if ((int)uVar8 < 0) {
      return;
    }
    if (((this->Flags & Recursive) == None) && (1 < (this->Stack).ArrayNum)) {
      *(uint *)(lVar13 + -0x10) = uVar8 & 0x7fffffff;
    }
    else {
      *(undefined4 *)(lVar13 + -0x10) = 0;
    }
  } while( true );
}

