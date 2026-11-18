// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PakFile
// Functions: 22

// FBaseIterator @ 142a50b30

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EVersion": Some values do not have unique names */

FBaseIterator * __thiscall
FPakFile::FBaseIterator::FBaseIterator
          (FBaseIterator *this,FPakFile *param_1,bool param_2,bool param_3)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  uint uVar3;
  FPakFile *pFVar4;
  ForElementType<TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>::FIteratorInternal::FStackData>
  FVar5;
  TIterator<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_const_>
  *pTVar6;
  longlong lVar7;
  code *pcVar8;
  bool bVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  FBaseIterator *pFVar13;
  FIteratorInternal *pFVar14;
  TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>
  *pTVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  uint uVar20;
  TIterator<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_const_>
  *pTVar21;
  uint *puVar22;
  undefined4 local_5c;
  FIteratorInternal *pFVar19;
  
  this->PakFile = param_1;
  pFVar19 = (FIteratorInternal *)0x0;
  uVar16 = 0;
  (this->TreeIt).Ptr =
       (TIterator<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_const_>
        *)0x0;
  (this->FileIt).bIsSet = false;
  (this->PathHashIt).bIsSet = false;
  (this->CachedFilename).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CachedFilename).Data.ArrayNum = 0;
  (this->CachedFilename).Data.ArrayMax = 0;
  (this->DirectoryIndexIt).bIsSet = false;
  (this->PakEntry).CompressionBlocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PakEntry).CompressionBlocks.ArrayNum = 0;
  (this->PakEntry).CompressionBlocks.ArrayMax = 0;
  FPakEntry::Reset(&this->PakEntry);
  pFVar4 = this->PakFile;
  this->bIncludeDeleted = param_2;
  this->bRequiresDirectoryIndexLock = false;
  uVar18 = 0;
  uVar20 = 0;
  if (param_3) {
    if ((pFVar4->bHasPathHashIndex == false) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("PakFile->bHasPathHashIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\PakFile.cpp"
                           ,0x9e7,L""), bVar9)) {
      pcVar8 = (code *)swi(3);
      pFVar13 = (FBaseIterator *)(*pcVar8)();
      return pFVar13;
    }
    pFVar4 = this->PakFile;
    uVar10 = 1;
    this->IteratorType = PathHash;
    uVar3 = *(uint *)&(pFVar4->PathHashIndex).field_0x28;
    puVar1 = &(pFVar4->PathHashIndex).field_0x10;
    uVar11 = uVar18;
    if (uVar3 != 0) {
      puVar22 = *(uint **)&(pFVar4->PathHashIndex).field_0x20;
      if (puVar22 == (uint *)0x0) {
        puVar22 = (uint *)puVar1;
      }
      uVar11 = *puVar22;
      pFVar14 = pFVar19;
      uVar20 = uVar16;
      uVar18 = uVar16;
      while (uVar11 == 0) {
        iVar17 = (int)pFVar19;
        uVar20 = (int)pFVar14 + 0x20;
        pFVar14 = (FIteratorInternal *)(ulonglong)uVar20;
        uVar18 = iVar17 + 1;
        pFVar19 = (FIteratorInternal *)(ulonglong)uVar18;
        uVar11 = uVar3;
        if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar18)
        goto LAB_142a50c58;
        uVar11 = puVar22[(longlong)iVar17 + 1];
      }
      uVar10 = -uVar11 & uVar11;
      uVar2 = (ulonglong)uVar10 * 2 + 1;
      lVar7 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      uVar11 = (uVar20 - 1) + (int)lVar7;
      if ((int)uVar3 < (int)uVar11) {
        uVar11 = uVar3;
      }
    }
LAB_142a50c58:
    *(TMap<unsigned___int64,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FPakEntryLocation,0>_>
      **)&(this->PathHashIt).TypedValue = &pFVar4->PathHashIndex;
    *(ulonglong *)&(this->PathHashIt).TypedValue.field_0x8 = CONCAT44(uVar10,uVar18);
    *(undefined1 **)&(this->PathHashIt).TypedValue.field_0x10 = puVar1;
    *(ulonglong *)&(this->PathHashIt).TypedValue.field_0x18 = CONCAT44(uVar11,0xffffffff);
    *(ulonglong *)&(this->PathHashIt).TypedValue.field_0x20 = CONCAT44(local_5c,uVar20);
    (this->PathHashIt).bIsSet = true;
  }
  else {
    bVar9 = pFVar4->bWillPruneDirectoryIndex;
    this->bRequiresDirectoryIndexLock = bVar9;
    if (bVar9 != false) {
      AcquireSRWLockShared((PSRWLOCK)&pFVar4->DirectoryIndexLock);
    }
    pFVar4 = this->PakFile;
    if (pFVar4->bUseDirectoryTree == false) {
      this->IteratorType = DirectoryIndex;
      uVar3 = *(uint *)&(pFVar4->DirectoryIndex).field_0x28;
      puVar1 = &(pFVar4->DirectoryIndex).field_0x10;
      uVar12 = 1;
      uVar10 = uVar18;
      uVar11 = uVar20;
      if (uVar3 != 0) {
        puVar22 = *(uint **)&(pFVar4->DirectoryIndex).field_0x20;
        if (puVar22 == (uint *)0x0) {
          puVar22 = (uint *)puVar1;
        }
        uVar10 = *puVar22;
        pFVar14 = pFVar19;
        uVar18 = uVar16;
        uVar11 = uVar16;
        while (uVar10 == 0) {
          iVar17 = (int)pFVar19;
          uVar18 = (int)pFVar14 + 0x20;
          pFVar14 = (FIteratorInternal *)(ulonglong)uVar18;
          uVar11 = iVar17 + 1;
          pFVar19 = (FIteratorInternal *)(ulonglong)uVar11;
          uVar10 = uVar3;
          if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar11)
          goto LAB_142a50e03;
          uVar10 = puVar22[(longlong)iVar17 + 1];
        }
        uVar12 = -uVar10 & uVar10;
        uVar2 = (ulonglong)uVar12 * 2 + 1;
        lVar7 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar7 == 0; lVar7 = lVar7 + -1) {
          }
        }
        uVar10 = (uVar18 - 1) + (int)lVar7;
        if ((int)uVar3 < (int)uVar10) {
          uVar10 = uVar3;
        }
      }
LAB_142a50e03:
      *(TMap<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>,0>_>
        **)&(this->DirectoryIndexIt).TypedValue = &pFVar4->DirectoryIndex;
      *(ulonglong *)&(this->DirectoryIndexIt).TypedValue.field_0x8 = CONCAT44(uVar12,uVar11);
      *(undefined1 **)&(this->DirectoryIndexIt).TypedValue.field_0x10 = puVar1;
      *(ulonglong *)&(this->DirectoryIndexIt).TypedValue.field_0x18 = CONCAT44(uVar10,0xffffffff);
      *(ulonglong *)&(this->DirectoryIndexIt).TypedValue.field_0x20 = CONCAT44(uVar10,uVar18);
      (this->DirectoryIndexIt).bIsSet = true;
    }
    else {
      this->IteratorType = DirectoryTree;
      pFVar14 = ::operator_new(0x418);
      if (pFVar14 != (FIteratorInternal *)0x0) {
        TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>
        ::FIteratorInternal::FIteratorInternal
                  (pFVar14,&(this->PakFile->DirectoryTreeIndex).Root,Recursive,
                   (this->PakFile->DirectoryTreeIndex).PathSeparator);
        pFVar19 = pFVar14;
      }
      pFVar14 = &((this->TreeIt).Ptr)->Internal;
      if ((pFVar14 != pFVar19) &&
         ((this->TreeIt).Ptr =
               (TIterator<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_const_>
                *)pFVar19, pFVar14 != (FIteratorInternal *)0x0)) {
        TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>
                  ((TStringBuilderBase<wchar_t> *)(&pFVar14->Stack + 1));
        FVar5 = (pFVar14->Stack).AllocatorInstance.SecondaryData;
        if (FVar5 != (ForElementType<TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>::FIteratorInternal::FStackData>
                      )0x0) {
          FMemory::Free((void *)FVar5);
        }
        ::operator_delete(pFVar14,0x418);
      }
    }
    if ((this->IteratorType != DirectoryTree && this->IteratorType != DirectoryIndex) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(IteratorType == EIteratorType::DirectoryIndex) | (IteratorType == EIteratorType::DirectoryTree)"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\PakFile.cpp"
                           ,0xa60,L""), bVar9)) {
      pcVar8 = (code *)swi(3);
      pFVar13 = (FBaseIterator *)(*pcVar8)();
      return pFVar13;
    }
    if (this->IteratorType == DirectoryTree) {
      bVar9 = (((this->TreeIt).Ptr)->Internal).Stack.ArrayNum != 0;
    }
    else {
      if ((this->IteratorType != DirectoryIndex) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IteratorType == EIteratorType::DirectoryIndex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\PakFile.cpp"
                             ,0xaa7,L""), bVar9)) {
        pcVar8 = (code *)swi(3);
        pFVar13 = (FBaseIterator *)(*pcVar8)();
        return pFVar13;
      }
      if (((this->DirectoryIndexIt).bIsSet == false) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar9)) {
        pcVar8 = (code *)swi(3);
        pFVar13 = (FBaseIterator *)(*pcVar8)();
        return pFVar13;
      }
      bVar9 = *(int *)&(this->DirectoryIndexIt).TypedValue.field_0x1c <
              *(int *)(*(longlong *)&(this->DirectoryIndexIt).TypedValue.field_0x10 + 0x18);
    }
    if (bVar9) {
      if ((this->IteratorType != DirectoryTree && this->IteratorType != DirectoryIndex) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(IteratorType == EIteratorType::DirectoryIndex) | (IteratorType == EIteratorType::DirectoryTree)"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\PakFile.cpp"
                             ,0xa8d,L""), bVar9)) {
        pcVar8 = (code *)swi(3);
        pFVar13 = (FBaseIterator *)(*pcVar8)();
        return pFVar13;
      }
      if (this->IteratorType == DirectoryTree) {
        pTVar6 = (this->TreeIt).Ptr;
        if ((pTVar6->Internal).Stack.ArrayNum == 0) {
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(bool)Internal",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\DirectoryTree.h"
                             ,0x72f,L"");
          if (bVar9) {
            pcVar8 = (code *)swi(3);
            pFVar13 = (FBaseIterator *)(*pcVar8)();
            return pFVar13;
          }
          if (((pTVar6->Internal).Stack.ArrayNum == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("!Stack.IsEmpty()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\DirectoryTree.h"
                                 ,0x683,L""), bVar9)) {
            pcVar8 = (code *)swi(3);
            pFVar13 = (FBaseIterator *)(*pcVar8)();
            return pFVar13;
          }
        }
        iVar17 = (pTVar6->Internal).Stack.ArrayNum;
        uVar18 = iVar17 - 1;
        if ((int)uVar18 < iVar17) {
          uVar20 = ~uVar18 >> 0x1f;
        }
        if ((uVar20 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar8 = (code *)swi(3);
          pFVar13 = (FBaseIterator *)(*pcVar8)();
          return pFVar13;
        }
        pTVar21 = *(TIterator<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_const_>
                    **)&(pTVar6->Internal).Stack.AllocatorInstance.SecondaryData.field_0x0;
        if (pTVar21 ==
            (TIterator<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_const_>
             *)0x0) {
          pTVar21 = pTVar6;
        }
        pTVar15 = *(TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>
                    **)(pTVar21[-1].Internal.Path.StringBuffer + 0xf8 +
                       (longlong)(pTVar6->Internal).Stack.ArrayNum * 0x18);
        if ((pTVar15 ==
             (TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>
              *)0x0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("InternalPair.Value != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\DirectoryTree.h"
                               ,0x731,L""), bVar9)) {
          pcVar8 = (code *)swi(3);
          pFVar13 = (FBaseIterator *)(*pcVar8)();
          return pFVar13;
        }
      }
      else {
        if ((this->IteratorType != DirectoryIndex) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("IteratorType == EIteratorType::DirectoryIndex",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\PakFile.cpp"
                               ,0xaa7,L""), bVar9)) {
          pcVar8 = (code *)swi(3);
          pFVar13 = (FBaseIterator *)(*pcVar8)();
          return pFVar13;
        }
        if (((this->DirectoryIndexIt).bIsSet == false) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsSet()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                               ,0x1bd,
                               L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                              ), bVar9)) {
          pcVar8 = (code *)swi(3);
          pFVar13 = (FBaseIterator *)(*pcVar8)();
          return pFVar13;
        }
        pTVar15 = (TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>
                   *)(**(longlong **)&(this->DirectoryIndexIt).TypedValue + 0x10 +
                     (longlong)*(int *)&(this->DirectoryIndexIt).TypedValue.field_0x1c * 0x68);
      }
      TOptional<TMapBase<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>::TConstIterator>
      ::
      Emplace<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_const_&>
                (&this->FileIt,pTVar15);
    }
  }
  AdvanceToValid(this);
  return this;
}

// ~FBaseIterator @ 142a55bf0

/* WARNING: Enum "EVersion": Some values do not have unique names */

void __thiscall FPakFile::FBaseIterator::~FBaseIterator(FBaseIterator *this)

{
  FScriptContainerElement *pFVar1;
  TIterator<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_const_>
  *pTVar2;
  ForElementType<TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>::FIteratorInternal::FStackData>
  FVar3;
  
  if (this->bRequiresDirectoryIndexLock != false) {
    ReleaseSRWLockShared((PSRWLOCK)&this->PakFile->DirectoryIndexLock);
  }
  pFVar1 = (this->PakEntry).CompressionBlocks.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CachedFilename).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pTVar2 = (this->TreeIt).Ptr;
  if (pTVar2 != (TIterator<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_const_>
                 *)0x0) {
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>
              ((TStringBuilderBase<wchar_t> *)&(pTVar2->Internal).Path);
    FVar3 = (pTVar2->Internal).Stack.AllocatorInstance.SecondaryData;
    if (FVar3 != (ForElementType<TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>::FIteratorInternal::FStackData>
                  )0x0) {
      FMemory::Free((void *)FVar3);
    }
    ::operator_delete(pTVar2,0x418);
    return;
  }
  return;
}

// operator! @ 142a58510

/* WARNING: Enum "EVersion": Some values do not have unique names */

bool __thiscall FPakFile::FBaseIterator::operator!(FBaseIterator *this)

{
  bool bVar1;
  
  bVar1 = operator_bool(this);
  return !bVar1;
}

// operator_bool @ 142a58800

/* WARNING: Enum "EVersion": Some values do not have unique names */

bool __thiscall FPakFile::FBaseIterator::operator_bool(FBaseIterator *this)

{
  EIteratorType EVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  TIterator<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_const_>
  *pTVar5;
  TConstIterator *pTVar6;
  TConstIterator *pTVar7;
  
  EVar1 = this->IteratorType;
  if (EVar1 == PathHash) {
    pTVar7 = GetPathHashIt(this);
    return *(int *)&pTVar7->field_0x1c < *(int *)(*(longlong *)&pTVar7->field_0x10 + 0x18);
  }
  if (EVar1 == DirectoryIndex) {
    pTVar6 = GetDirectoryIndexIt(this);
    return *(int *)&pTVar6->field_0x1c < *(int *)(*(longlong *)&pTVar6->field_0x10 + 0x18);
  }
  if (EVar1 == DirectoryTree) {
    pTVar5 = GetTreeIt(this);
    return (pTVar5->Internal).Stack.ArrayNum != 0;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\PakFile.cpp"
                     ,0x9c9,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  return false;
}

// operator++ @ 142a58b20

/* WARNING: Enum "EVersion": Some values do not have unique names */

FBaseIterator * __thiscall FPakFile::FBaseIterator::operator++(FBaseIterator *this)

{
  EIteratorType EVar1;
  code *pcVar2;
  bool bVar3;
  FBaseIterator *pFVar4;
  TConstIterator *pTVar5;
  
  EVar1 = this->IteratorType;
  if (EVar1 == PathHash) {
    pTVar5 = (TConstIterator *)GetPathHashIt(this);
  }
  else {
    if ((EVar1 != DirectoryIndex) && (EVar1 != DirectoryTree)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("!\"Enclosing block should never be called\"",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\PakFile.cpp"
                         ,0x9b2,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar4 = (FBaseIterator *)(*pcVar2)();
        return pFVar4;
      }
      goto LAB_142a58b92;
    }
    pTVar5 = GetFileIt(this);
  }
  *(uint *)&pTVar5->field_0x18 = *(uint *)&pTVar5->field_0x18 & ~*(uint *)&pTVar5->field_0xc;
  TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
            ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)&pTVar5->field_0x8);
LAB_142a58b92:
  AdvanceToValid(this);
  return this;
}

// AdvanceToValid @ 142a5f430

/* WARNING: Enum "EVersion": Some values do not have unique names */

void __thiscall FPakFile::FBaseIterator::AdvanceToValid(FBaseIterator *this)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  EIteratorType EVar3;
  int iVar4;
  uint uVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  FPakEntry *pFVar10;
  TConstIterator *pTVar11;
  TConstIterator *pTVar12;
  TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>
  *pTVar13;
  longlong lVar14;
  int iVar15;
  int iVar16;
  uint *puVar17;
  undefined4 local_4c;
  
  EVar3 = this->IteratorType;
  if (EVar3 == PathHash) {
    while( true ) {
      if ((this->IteratorType != PathHash) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IteratorType == EIteratorType::PathHash",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\PakFile.cpp"
                             ,0xa56,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if (((this->PathHashIt).bIsSet == false) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if (((*(int *)(*(longlong *)&(this->PathHashIt).TypedValue.field_0x10 + 0x18) <=
            *(int *)&(this->PathHashIt).TypedValue.field_0x1c) || (this->bIncludeDeleted != false))
         || (pFVar10 = Info(this), (pFVar10->Flags & 2) == 0)) break;
      if ((this->IteratorType != PathHash) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IteratorType == EIteratorType::PathHash",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\PakFile.cpp"
                             ,0xa56,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if (((this->PathHashIt).bIsSet == false) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      puVar1 = &(this->PathHashIt).TypedValue.field_0x18;
      *(uint *)puVar1 = *(uint *)puVar1 & ~*(uint *)&(this->PathHashIt).TypedValue.field_0xc;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)
                 &(this->PathHashIt).TypedValue.field_0x8);
    }
  }
  else {
    if ((EVar3 != DirectoryTree && EVar3 != DirectoryIndex) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(IteratorType == EIteratorType::DirectoryTree) | (IteratorType == EIteratorType::DirectoryIndex)"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\PakFile.cpp"
                           ,0xa3f,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    bVar7 = IsDirectoryItValid(this);
    if (bVar7) {
      do {
        pTVar11 = GetFileIt(this);
        if ((*(int *)&pTVar11->field_0x1c < *(int *)(*(longlong *)&pTVar11->field_0x10 + 0x18)) &&
           ((this->bIncludeDeleted != false || (pFVar10 = Info(this), (pFVar10->Flags & 2) == 0))))
        break;
        pTVar11 = GetFileIt(this);
        if (*(int *)&pTVar11->field_0x1c < *(int *)(*(longlong *)&pTVar11->field_0x10 + 0x18)) {
          pTVar11 = GetFileIt(this);
          *(uint *)&pTVar11->field_0x18 =
               *(uint *)&pTVar11->field_0x18 & ~*(uint *)&pTVar11->field_0xc;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                    ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)&pTVar11->field_0x8);
        }
        else {
          if ((this->IteratorType != DirectoryTree && this->IteratorType != DirectoryIndex) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(IteratorType == EIteratorType::DirectoryIndex) | (IteratorType == EIteratorType::DirectoryTree)"
                                 ,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\PakFile.cpp"
                                 ,0xa6f,L""), bVar7)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          if (this->IteratorType == DirectoryTree) {
            TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>
            ::FIteratorInternal::operator++(&((this->TreeIt).Ptr)->Internal);
          }
          else {
            pTVar12 = GetDirectoryIndexIt(this);
            *(uint *)&pTVar12->field_0x18 =
                 *(uint *)&pTVar12->field_0x18 & ~*(uint *)&pTVar12->field_0xc;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                      ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)&pTVar12->field_0x8);
          }
          bVar7 = IsDirectoryItValid(this);
          if (bVar7) {
            pTVar13 = GetDirectoryItValue(this);
            iVar4 = *(int *)&pTVar13->field_0x28;
            iVar15 = 0;
            iVar16 = 0;
            uVar8 = 1;
            iVar9 = 0;
            if (iVar4 != 0) {
              puVar17 = (uint *)&pTVar13->field_0x10;
              if (*(uint **)&pTVar13->field_0x20 != (uint *)0x0) {
                puVar17 = *(uint **)&pTVar13->field_0x20;
              }
              uVar5 = *puVar17;
              while (uVar5 == 0) {
                lVar14 = (longlong)iVar15;
                iVar16 = iVar16 + 0x20;
                iVar15 = iVar15 + 1;
                iVar9 = iVar4;
                if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar15)
                goto LAB_142a5f730;
                uVar5 = puVar17[lVar14 + 1];
              }
              uVar8 = -uVar5 & uVar5;
              uVar2 = (ulonglong)uVar8 * 2 + 1;
              lVar14 = 0x3f;
              if (uVar2 != 0) {
                for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
                }
              }
              iVar9 = iVar16 + -1 + (int)lVar14;
              if (iVar4 < iVar9) {
                iVar9 = iVar4;
              }
            }
LAB_142a5f730:
            *(TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>
              **)&(this->FileIt).TypedValue = pTVar13;
            *(ulonglong *)&(this->FileIt).TypedValue.field_0x8 = CONCAT44(uVar8,iVar15);
            *(undefined1 **)&(this->FileIt).TypedValue.field_0x10 = &pTVar13->field_0x10;
            *(ulonglong *)&(this->FileIt).TypedValue.field_0x18 = CONCAT44(iVar9,0xffffffff);
            *(ulonglong *)&(this->FileIt).TypedValue.field_0x20 = CONCAT44(local_4c,iVar16);
            (this->FileIt).bIsSet = true;
          }
        }
        bVar7 = IsDirectoryItValid(this);
      } while (bVar7);
    }
    ::FString::Reset(&this->CachedFilename,0);
  }
  return;
}

// Filename @ 142a6d260

/* WARNING: Enum "EVersion": Some values do not have unique names */

FString * __thiscall FPakFile::FBaseIterator::Filename(FBaseIterator *this)

{
  int iVar1;
  undefined8 uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  FString *pFVar6;
  TConstIterator *pTVar7;
  TArrowWrapper<TTuple<TStringView<wchar_t>,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_const_&>_>
  *pTVar8;
  TConstIterator *pTVar9;
  longlong lVar10;
  FString local_78;
  undefined8 local_68;
  int iStack_60;
  undefined4 uStack_5c;
  uchar *local_58;
  int iStack_50;
  undefined4 uStack_4c;
  TStringView<char8_t> local_48;
  TStringView<wchar_t> local_38;
  TArrowWrapper<TTuple<TStringView<wchar_t>,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_const_&>_>
  local_28;
  
  if (this->IteratorType == PathHash) {
    return &this->CachedFilename;
  }
  bVar5 = operator_bool(this);
  if ((!bVar5) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(bool)*this",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\PakFile.cpp"
                         ,0xa1b,L"It is not legal to call Filename() on an invalid iterator"), bVar5
     )) {
    pcVar4 = (code *)swi(3);
    pFVar6 = (FString *)(*pcVar4)();
    return pFVar6;
  }
  if (1 < (this->CachedFilename).Data.ArrayNum) {
    return &this->CachedFilename;
  }
  pTVar7 = GetFileIt(this);
  lVar10 = (longlong)*(int *)&pTVar7->field_0x1c * 0x20;
  local_58 = *(uchar **)(lVar10 + **(longlong **)pTVar7);
  iVar1 = *(int *)(lVar10 + 8 + **(longlong **)pTVar7);
  iStack_50 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_50 = 0;
  }
  if ((this->IteratorType != DirectoryTree && this->IteratorType != DirectoryIndex) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(IteratorType == EIteratorType::DirectoryIndex) | (IteratorType == EIteratorType::DirectoryTree)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\PakFile.cpp"
                         ,0xa7e,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pFVar6 = (FString *)(*pcVar4)();
    return pFVar6;
  }
  if (this->IteratorType == DirectoryTree) {
    pTVar8 = TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>
             ::
             TIterator<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_const_>
             ::operator->((this->TreeIt).Ptr,&local_28);
    local_38.Size = *(int *)&(pTVar8->Value).field_0x8;
    uStack_5c = *(undefined4 *)&(pTVar8->Value).field_0xc;
    local_38.DataPtr._0_4_ = *(undefined4 *)&pTVar8->Value;
    local_38.DataPtr._4_4_ = *(undefined4 *)&(pTVar8->Value).field_0x4;
  }
  else {
    pTVar9 = GetDirectoryIndexIt(this);
    lVar10 = (longlong)*(int *)&pTVar9->field_0x1c * 0x68;
    uVar2 = *(undefined8 *)(lVar10 + **(longlong **)pTVar9);
    iVar1 = *(int *)(lVar10 + 8 + **(longlong **)pTVar9);
    local_38.Size = iVar1 + -1;
    if (iVar1 == 0) {
      local_38.Size = 0;
    }
    local_68._0_4_ = (undefined4)uVar2;
    local_68._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
    local_38.DataPtr._0_4_ = (undefined4)local_68;
    local_38.DataPtr._4_4_ = local_68._4_4_;
    local_68 = uVar2;
    iStack_60 = local_38.Size;
  }
  local_48._12_4_ = uStack_4c;
  local_48.Size = iStack_50;
  local_48.DataPtr = local_58;
  local_38._12_4_ = uStack_5c;
  PakPathCombineInternal<char8_t>(&local_78,&local_38,&local_48);
  pFVar6 = &this->CachedFilename;
  if (pFVar6 != &local_78) {
    pFVar3 = (pFVar6->Data).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pFVar6->Data).AllocatorInstance.Data = local_78.Data.AllocatorInstance.Data;
    (this->CachedFilename).Data.ArrayNum = local_78.Data.ArrayNum;
    (this->CachedFilename).Data.ArrayMax = local_78.Data.ArrayMax;
    local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  return &this->CachedFilename;
}

// GetDirectoryIndexIt @ 142a73be0

/* WARNING: Enum "EVersion": Some values do not have unique names */

TConstIterator * __thiscall FPakFile::FBaseIterator::GetDirectoryIndexIt(FBaseIterator *this)

{
  code *pcVar1;
  bool bVar2;
  TConstIterator *pTVar3;
  
  if (this->IteratorType != DirectoryIndex) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IteratorType == EIteratorType::DirectoryIndex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\PakFile.cpp"
                       ,0xaa7,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConstIterator *)(*pcVar1)();
      return pTVar3;
    }
  }
  if ((this->DirectoryIndexIt).bIsSet == false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConstIterator *)(*pcVar1)();
      return pTVar3;
    }
  }
  return &(this->DirectoryIndexIt).TypedValue;
}

// GetDirectoryIndexIt @ 142a73c60

/* WARNING: Enum "EVersion": Some values do not have unique names */

TConstIterator * __thiscall FPakFile::FBaseIterator::GetDirectoryIndexIt(FBaseIterator *this)

{
  code *pcVar1;
  bool bVar2;
  TConstIterator *pTVar3;
  
  if (this->IteratorType != DirectoryIndex) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IteratorType == EIteratorType::DirectoryIndex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\PakFile.cpp"
                       ,0xaa7,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConstIterator *)(*pcVar1)();
      return pTVar3;
    }
  }
  if ((this->DirectoryIndexIt).bIsSet == false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConstIterator *)(*pcVar1)();
      return pTVar3;
    }
  }
  return &(this->DirectoryIndexIt).TypedValue;
}

// GetDirectoryItKey @ 142a73c70

/* WARNING: Enum "EVersion": Some values do not have unique names */

TStringView<wchar_t> * __thiscall
FPakFile::FBaseIterator::GetDirectoryItKey
          (FBaseIterator *this,TStringView<wchar_t> *__return_storage_ptr__)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  bool bVar6;
  TStringView<wchar_t> *pTVar7;
  TArrowWrapper<TTuple<TStringView<wchar_t>,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_const_&>_>
  *pTVar8;
  TConstIterator *pTVar9;
  int iVar10;
  longlong lVar11;
  TArrowWrapper<TTuple<TStringView<wchar_t>,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_const_&>_>
  local_28;
  
  if (this->IteratorType != DirectoryTree && this->IteratorType != DirectoryIndex) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(IteratorType == EIteratorType::DirectoryIndex) | (IteratorType == EIteratorType::DirectoryTree)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\PakFile.cpp"
                       ,0xa7e,L"");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TStringView<wchar_t> *)(*pcVar3)();
      return pTVar7;
    }
  }
  if (this->IteratorType == DirectoryTree) {
    pTVar8 = TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>
             ::
             TIterator<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_const_>
             ::operator->((this->TreeIt).Ptr,&local_28);
    uVar4 = *(undefined4 *)&(pTVar8->Value).field_0x8;
    uVar5 = *(undefined4 *)&(pTVar8->Value).field_0xc;
    __return_storage_ptr__->DataPtr = *(wchar_t **)&pTVar8->Value;
    __return_storage_ptr__->Size = uVar4;
    *(undefined4 *)&__return_storage_ptr__->field_0xc = uVar5;
    return __return_storage_ptr__;
  }
  pTVar9 = GetDirectoryIndexIt(this);
  lVar11 = (longlong)*(int *)&pTVar9->field_0x1c * 0x68;
  lVar2 = **(longlong **)pTVar9;
  __return_storage_ptr__->DataPtr = *(wchar_t **)(lVar11 + lVar2);
  iVar1 = *(int *)(lVar11 + 8 + lVar2);
  iVar10 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar10 = 0;
  }
  __return_storage_ptr__->Size = iVar10;
  return __return_storage_ptr__;
}

// GetDirectoryItValue @ 142a73d50

/* WARNING: Enum "EVersion": Some values do not have unique names */

TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>
* __thiscall FPakFile::FBaseIterator::GetDirectoryItValue(FBaseIterator *this)

{
  code *pcVar1;
  bool bVar2;
  TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>
  *pTVar3;
  TArrowWrapper<TTuple<TStringView<wchar_t>,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_const_&>_>
  *pTVar4;
  TConstIterator *pTVar5;
  TArrowWrapper<TTuple<TStringView<wchar_t>,TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_const_&>_>
  local_28;
  
  if (this->IteratorType != DirectoryTree && this->IteratorType != DirectoryIndex) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(IteratorType == EIteratorType::DirectoryIndex) | (IteratorType == EIteratorType::DirectoryTree)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\PakFile.cpp"
                       ,0xa8d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>
                *)(*pcVar1)();
      return pTVar3;
    }
  }
  if (this->IteratorType == DirectoryTree) {
    pTVar4 = TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>
             ::
             TIterator<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_const_>
             ::operator->((this->TreeIt).Ptr,&local_28);
    return *(TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>
             **)&(pTVar4->Value).field_0x10;
  }
  pTVar5 = GetDirectoryIndexIt(this);
  return (TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>
          *)(**(longlong **)pTVar5 + 0x10 + (longlong)*(int *)&pTVar5->field_0x1c * 0x68);
}

// GetFileIt @ 142a73df0

/* WARNING: Enum "EVersion": Some values do not have unique names */

TConstIterator * __thiscall FPakFile::FBaseIterator::GetFileIt(FBaseIterator *this)

{
  code *pcVar1;
  bool bVar2;
  TConstIterator *pTVar3;
  
  if (this->IteratorType != DirectoryTree && this->IteratorType != DirectoryIndex) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(IteratorType == EIteratorType::DirectoryIndex) | (IteratorType == EIteratorType::DirectoryTree)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\PakFile.cpp"
                       ,0xa9c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConstIterator *)(*pcVar1)();
      return pTVar3;
    }
  }
  if ((this->FileIt).bIsSet == false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConstIterator *)(*pcVar1)();
      return pTVar3;
    }
  }
  return &(this->FileIt).TypedValue;
}

// GetFileIt @ 142a73e80

/* WARNING: Enum "EVersion": Some values do not have unique names */

TConstIterator * __thiscall FPakFile::FBaseIterator::GetFileIt(FBaseIterator *this)

{
  code *pcVar1;
  bool bVar2;
  TConstIterator *pTVar3;
  
  if (this->IteratorType != DirectoryTree && this->IteratorType != DirectoryIndex) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(IteratorType == EIteratorType::DirectoryIndex) | (IteratorType == EIteratorType::DirectoryTree)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\PakFile.cpp"
                       ,0xa9c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConstIterator *)(*pcVar1)();
      return pTVar3;
    }
  }
  if ((this->FileIt).bIsSet == false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConstIterator *)(*pcVar1)();
      return pTVar3;
    }
  }
  return &(this->FileIt).TypedValue;
}

// GetPakEntryIndex @ 142a76b70

/* WARNING: Enum "EVersion": Some values do not have unique names */

FPakEntryLocation __thiscall FPakFile::FBaseIterator::GetPakEntryIndex(FBaseIterator *this)

{
  EIteratorType EVar1;
  code *pcVar2;
  bool bVar3;
  FPakEntryLocation FVar4;
  int iVar5;
  TConstIterator *pTVar6;
  TConstIterator *pTVar7;
  undefined4 *in_RDX;
  
  EVar1 = this->IteratorType;
  FVar4.Index = (int)in_RDX;
  if (EVar1 == PathHash) {
    pTVar7 = GetPathHashIt(this);
    *in_RDX = *(undefined4 *)
               (**(longlong **)pTVar7 + 8 + (longlong)*(int *)&pTVar7->field_0x1c * 0x18);
    return (FPakEntryLocation)FVar4.Index;
  }
  if ((EVar1 != DirectoryIndex) && (EVar1 != DirectoryTree)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\PakFile.cpp"
                       ,0xa2f,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar5 = (*pcVar2)();
      return (FPakEntryLocation)iVar5;
    }
    *in_RDX = 0x80000000;
    return (FPakEntryLocation)FVar4.Index;
  }
  pTVar6 = GetFileIt(this);
  *in_RDX = *(undefined4 *)
             ((longlong)*(int *)&pTVar6->field_0x1c * 0x20 + 0x10 + **(longlong **)pTVar6);
  return (FPakEntryLocation)FVar4.Index;
}

// GetPathHashIt @ 142a77ae0

/* WARNING: Enum "EVersion": Some values do not have unique names */

TConstIterator * __thiscall FPakFile::FBaseIterator::GetPathHashIt(FBaseIterator *this)

{
  code *pcVar1;
  bool bVar2;
  TConstIterator *pTVar3;
  
  if (this->IteratorType != PathHash) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IteratorType == EIteratorType::PathHash",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\PakFile.cpp"
                       ,0xa56,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConstIterator *)(*pcVar1)();
      return pTVar3;
    }
  }
  if ((this->PathHashIt).bIsSet == false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConstIterator *)(*pcVar1)();
      return pTVar3;
    }
  }
  return &(this->PathHashIt).TypedValue;
}

// GetPathHashIt @ 142a77b60

/* WARNING: Enum "EVersion": Some values do not have unique names */

TConstIterator * __thiscall FPakFile::FBaseIterator::GetPathHashIt(FBaseIterator *this)

{
  code *pcVar1;
  bool bVar2;
  TConstIterator *pTVar3;
  
  if (this->IteratorType != PathHash) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IteratorType == EIteratorType::PathHash",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\PakFile.cpp"
                       ,0xa56,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConstIterator *)(*pcVar1)();
      return pTVar3;
    }
  }
  if ((this->PathHashIt).bIsSet == false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConstIterator *)(*pcVar1)();
      return pTVar3;
    }
  }
  return &(this->PathHashIt).TypedValue;
}

// GetTreeIt @ 142a79f80

/* WARNING: Enum "EVersion": Some values do not have unique names */

TIterator<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_const_>
* __thiscall FPakFile::FBaseIterator::GetTreeIt(FBaseIterator *this)

{
  code *pcVar1;
  bool bVar2;
  TIterator<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_const_>
  *pTVar3;
  
  if (this->IteratorType == DirectoryTree) {
    return (this->TreeIt).Ptr;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IteratorType == EIteratorType::DirectoryTree",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\PakFile.cpp"
                     ,0xab3,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pTVar3 = (TIterator<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_const_>
              *)(*pcVar1)();
    return pTVar3;
  }
  return (this->TreeIt).Ptr;
}

// GetTreeIt @ 142a79fe0

/* WARNING: Enum "EVersion": Some values do not have unique names */

TIterator<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_const_>
* __thiscall FPakFile::FBaseIterator::GetTreeIt(FBaseIterator *this)

{
  code *pcVar1;
  bool bVar2;
  TIterator<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_const_>
  *pTVar3;
  
  if (this->IteratorType == DirectoryTree) {
    return (this->TreeIt).Ptr;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IteratorType == EIteratorType::DirectoryTree",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\PakFile.cpp"
                     ,0xab3,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pTVar3 = (TIterator<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_const_>
              *)(*pcVar1)();
    return pTVar3;
  }
  return (this->TreeIt).Ptr;
}

// HasFilename @ 142a7be40

/* WARNING: Enum "EVersion": Some values do not have unique names */

bool __thiscall FPakFile::FBaseIterator::HasFilename(FBaseIterator *this)

{
  return this->IteratorType == DirectoryTree || this->IteratorType == DirectoryIndex;
}

// IncrementDirectoryIt @ 142a7c0b0

/* WARNING: Enum "EVersion": Some values do not have unique names */

void __thiscall FPakFile::FBaseIterator::IncrementDirectoryIt(FBaseIterator *this)

{
  code *pcVar1;
  bool bVar2;
  TConstIterator *pTVar3;
  
  if (this->IteratorType != DirectoryTree && this->IteratorType != DirectoryIndex) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(IteratorType == EIteratorType::DirectoryIndex) | (IteratorType == EIteratorType::DirectoryTree)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\PakFile.cpp"
                       ,0xa6f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (this->IteratorType == DirectoryTree) {
    TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>
    ::FIteratorInternal::operator++(&((this->TreeIt).Ptr)->Internal);
    return;
  }
  pTVar3 = GetDirectoryIndexIt(this);
  *(uint *)&pTVar3->field_0x18 = *(uint *)&pTVar3->field_0x18 & ~*(uint *)&pTVar3->field_0xc;
  TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
            ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)&pTVar3->field_0x8);
  return;
}

// Info @ 142a7c210

/* WARNING: Enum "EVersion": Some values do not have unique names */

FPakEntry * __thiscall FPakFile::FBaseIterator::Info(FBaseIterator *this)

{
  EIteratorType EVar1;
  FPakFile *pFVar2;
  code *pcVar3;
  bool bVar4;
  FPakEntry *pFVar5;
  TConstIterator *pTVar6;
  TConstIterator *pTVar7;
  FPakEntryLocation local_res8 [2];
  
  EVar1 = this->IteratorType;
  pFVar2 = this->PakFile;
  if (EVar1 == PathHash) {
    pTVar7 = GetPathHashIt(this);
    local_res8[0].Index =
         *(int *)(**(longlong **)pTVar7 + 8 + (longlong)*(int *)&pTVar7->field_0x1c * 0x18);
  }
  else if ((EVar1 == DirectoryIndex) || (EVar1 == DirectoryTree)) {
    pTVar6 = GetFileIt(this);
    local_res8[0].Index =
         *(int *)((longlong)*(int *)&pTVar6->field_0x1c * 0x20 + 0x10 + **(longlong **)pTVar6);
  }
  else {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\PakFile.cpp"
                       ,0xa2f,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FPakEntry *)(*pcVar3)();
      return pFVar5;
    }
    local_res8[0].Index = -0x80000000;
  }
  GetPakEntry(local_res8,&this->PakEntry,&pFVar2->EncodedPakEntries,&pFVar2->Files,&pFVar2->Info);
  return &this->PakEntry;
}

// IsDirectoryItValid @ 142a7f030

/* WARNING: Enum "EVersion": Some values do not have unique names */

bool __thiscall FPakFile::FBaseIterator::IsDirectoryItValid(FBaseIterator *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  TConstIterator *pTVar4;
  
  if (this->IteratorType != DirectoryTree && this->IteratorType != DirectoryIndex) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(IteratorType == EIteratorType::DirectoryIndex) | (IteratorType == EIteratorType::DirectoryTree)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\PakFile.cpp"
                       ,0xa60,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  if (this->IteratorType == DirectoryTree) {
    return (((this->TreeIt).Ptr)->Internal).Stack.ArrayNum != 0;
  }
  pTVar4 = GetDirectoryIndexIt(this);
  return *(int *)&pTVar4->field_0x1c < *(int *)(*(longlong *)&pTVar4->field_0x10 + 0x18);
}

