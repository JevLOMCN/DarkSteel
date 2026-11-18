// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StorageServerClient
// Functions: 11

// ~FStorageServerFileSystemTOC @ 148cb64b0

void __thiscall
FStorageServerFileSystemTOC::~FStorageServerFileSystemTOC(FStorageServerFileSystemTOC *this)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  undefined8 *puVar4;
  FScriptContainerElement *pFVar5;
  void *pvVar6;
  code *pcVar7;
  bool bVar8;
  BOOLEAN BVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  uint uVar13;
  int iVar14;
  undefined1 *puVar15;
  int iVar16;
  uint *puVar17;
  uint uVar18;
  undefined1 local_res8 [8];
  int local_res10;
  int local_res18;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  AcquireSRWLockExclusive((PSRWLOCK)&this->TocLock);
  iVar3 = *(int *)&(this->Directories).field_0x28;
  puVar1 = &(this->Directories).field_0x10;
  iVar14 = 0;
  iVar16 = 0;
  uVar10 = 1;
  iVar11 = 0;
  if (iVar3 != 0) {
    puVar17 = *(uint **)&(this->Directories).field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)puVar1;
    }
    uVar13 = *puVar17;
    while (uVar13 == 0) {
      lVar12 = (longlong)iVar14;
      iVar16 = iVar16 + 0x20;
      iVar14 = iVar14 + 1;
      iVar11 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_148cb655f;
      uVar13 = puVar17[lVar12 + 1];
    }
    uVar10 = -uVar13 & uVar13;
    uVar2 = (ulonglong)uVar10 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_res10 = (int)lVar12;
    iVar11 = local_res10 + -1 + iVar16;
    if (iVar3 < iVar11) {
      iVar11 = iVar3;
    }
  }
LAB_148cb655f:
  uVar13 = *(uint *)&(this->Directories).field_0x28;
  uVar18 = uVar13 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar10,iVar14);
  TStack_60.CurrentBitIndex = iVar11;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)uVar13 >> 5;
  TStack_60._28_4_ = iVar11;
  TStack_60.BaseBitIndex = iVar16;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->Directories).field_0x8 -
                       *(int *)&(this->Directories).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar13 < 0) || (iVar3 < (int)uVar13)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar10 = *(uint *)&(this->Directories).field_0x28;
  if (uVar13 != uVar10) {
    puVar15 = *(undefined1 **)&(this->Directories).field_0x20;
    if (puVar15 == (undefined1 *)0x0) {
      puVar15 = puVar1;
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar14 * 4);
    while (uVar13 == 0) {
      lVar12 = (longlong)iVar14;
      uVar18 = uVar18 + 0x20;
      iVar14 = iVar14 + 1;
      uVar13 = uVar10;
      if ((int)((uVar10 - 1) + ((int)(uVar10 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14)
      goto LAB_148cb6670;
      uVar13 = *(uint *)(puVar15 + lVar12 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_res18 = (int)lVar12;
    uVar13 = local_res18 + -1 + uVar18;
    if ((int)uVar10 < (int)uVar13) {
      uVar13 = uVar10;
    }
  }
LAB_148cb6670:
  while( true ) {
    if (*(int *)&(this->Directories).field_0x8 - *(int *)&(this->Directories).field_0x34 !=
        (int)uStack_40) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FString,FStorageServerFileSystemTOC::FDirectory_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar13) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    puVar4 = *(undefined8 **)
              ((longlong)TStack_60.CurrentBitIndex * 0x20 + 0x10 + *(longlong *)&this->Directories);
    if (puVar4 != (undefined8 *)0x0) {
      if ((void *)puVar4[2] != (void *)0x0) {
        FMemory::Free((void *)puVar4[2]);
      }
      DestructItems<FString,int>((FString *)*puVar4,*(int *)(puVar4 + 1));
      if ((void *)*puVar4 != (void *)0x0) {
        FMemory::Free((void *)*puVar4);
      }
      ::operator_delete(puVar4,0x20);
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  ReleaseSRWLockExclusive((PSRWLOCK)&this->TocLock);
  BVar9 = TryAcquireSRWLockExclusive((PSRWLOCK)&this->TocLock);
  if (BVar9 == '\0') {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsLocked()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                       ,0x48,L"Destroying a lock that is still held!");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  else {
    ReleaseSRWLockExclusive((PSRWLOCK)&this->TocLock);
  }
  DestructItems<FStorageServerFileSystemTOC::FFile,int>
            ((FFile *)(this->Files).AllocatorInstance.Data,(this->Files).ArrayNum);
  pFVar5 = (this->Files).AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  *(undefined4 *)&(this->FilePathToIndexMap).field_0x48 = 0;
  pvVar6 = *(void **)&(this->FilePathToIndexMap).field_0x40;
  if (pvVar6 != (void *)0x0) {
    FMemory::Free(pvVar6);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->FilePathToIndexMap);
  *(undefined4 *)&(this->Directories).field_0x48 = 0;
  pvVar6 = *(void **)&(this->Directories).field_0x40;
  if (pvVar6 != (void *)0x0) {
    FMemory::Free(pvVar6);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FStorageServerFileSystemTOC::FDirectory_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FStorageServerFileSystemTOC::FDirectory_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FStorageServerFileSystemTOC::FDirectory_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->Directories);
  pFVar5 = (this->Root).Files.AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  DestructItems<FString,int>
            ((FString *)(this->Root).Directories.AllocatorInstance.Data,
             (this->Root).Directories.ArrayNum);
  pFVar5 = (this->Root).Directories.AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  return;
}

// AddDirectoriesRecursive @ 148cbb690

FDirectory * __thiscall
FStorageServerFileSystemTOC::AddDirectoriesRecursive
          (FStorageServerFileSystemTOC *this,FString *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  FDirectory **ppFVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  FDirectory *pFVar8;
  FStorageServerFileSystemTOC *pFVar9;
  longlong lVar10;
  TPairInitializer<FString_const_&,FStorageServerFileSystemTOC::FDirectory_*_const_&> local_res8;
  FString local_38;
  FString *local_28;
  FDirectory ***local_20;
  
  pFVar8 = ::operator_new(0x20);
  local_res8.Value = (FDirectory **)0x0;
  if (pFVar8 != (FDirectory *)0x0) {
    (pFVar8->Directories).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar8->Directories).ArrayNum = 0;
    (pFVar8->Directories).ArrayMax = 0;
    (pFVar8->Files).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar8->Files).ArrayNum = 0;
    (pFVar8->Files).ArrayMax = 0;
    local_res8.Value = (FDirectory **)pFVar8;
  }
  local_20 = &local_res8.Value;
  local_28 = param_1;
  TSet<TTuple<FString,FStorageServerFileSystemTOC::FDirectory_*>,TDefaultMapHashableKeyFuncs<FString,FStorageServerFileSystemTOC::FDirectory_*,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_const_&,FStorageServerFileSystemTOC::FDirectory_*_const_&>_>
            ((TSet<TTuple<FString,FStorageServerFileSystemTOC::FDirectory_*>,TDefaultMapHashableKeyFuncs<FString,FStorageServerFileSystemTOC::FDirectory_*,0>,FDefaultSetAllocator>
              *)&this->Directories,&local_res8,(bool *)&local_28);
  FPaths::GetPath(&local_38,param_1);
  pFVar9 = this;
  if (1 < local_38.Data.ArrayNum) {
    iVar7 = local_38.Data.ArrayNum + -1;
    if (local_38.Data.ArrayNum == 0) {
      iVar7 = 0;
    }
    uVar6 = FCrc::Strihash_DEPRECATED<wchar_t>
                      (iVar7,(wchar_t *)local_38.Data.AllocatorInstance.Data);
    iVar7 = TSet<TTuple<FString,FStorageServerFileSystemTOC::FDirectory_*>,TDefaultMapHashableKeyFuncs<FString,FStorageServerFileSystemTOC::FDirectory_*,0>,FDefaultSetAllocator>
            ::FindIndexByHash<FString>
                      ((TSet<TTuple<FString,FStorageServerFileSystemTOC::FDirectory_*>,TDefaultMapHashableKeyFuncs<FString,FStorageServerFileSystemTOC::FDirectory_*,0>,FDefaultSetAllocator>
                        *)&this->Directories,uVar6,&local_38);
    if (((iVar7 == -1) ||
        (lVar10 = (longlong)iVar7 * 0x20 + *(longlong *)&this->Directories, lVar10 == 0)) ||
       (pFVar9 = *(FStorageServerFileSystemTOC **)(lVar10 + 0x10),
       pFVar9 == (FStorageServerFileSystemTOC *)0x0)) {
      pFVar9 = (FStorageServerFileSystemTOC *)AddDirectoriesRecursive(this,&local_38);
    }
  }
  pFVar2 = (pFVar9->Root).Directories.AllocatorInstance.Data;
  if (((pFVar2 <= param_1) &&
      (param_1 < pFVar2 + (longlong)(pFVar9->Root).Directories.ArrayMax * 0x10)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar3 = (code *)swi(3);
    pFVar8 = (FDirectory *)(*pcVar3)();
    return pFVar8;
  }
  iVar7 = (pFVar9->Root).Directories.ArrayNum;
  piVar1 = &(pFVar9->Root).Directories.ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,(ForAnyElementType *)pFVar9,piVar1);
  }
  (pFVar9->Root).Directories.ArrayNum = iVar7 + 1;
  ::FString::FString((FString *)
                     ((pFVar9->Root).Directories.AllocatorInstance.Data + (longlong)iVar7 * 0x10),
                     param_1);
  ppFVar4 = local_res8.Value;
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return (FDirectory *)ppFVar4;
}

// AddFile @ 148cbbd20

void __thiscall
FStorageServerFileSystemTOC::AddFile
          (FStorageServerFileSystemTOC *this,FIoChunkId *param_1,TStringView<wchar_t> *param_2,
          long64 param_3)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  undefined8 uVar3;
  wchar_t *pwVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  ForAnyElementType FVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  FDirectory *pFVar12;
  int local_68 [2];
  FString local_60;
  FScriptContainerElement *local_50;
  int *local_48;
  wchar_t *local_38;
  undefined8 uStack_30;
  
  AcquireSRWLockExclusive((PSRWLOCK)&this->TocLock);
  iVar9 = (this->Files).ArrayNum;
  piVar1 = &(this->Files).ArrayMax;
  local_68[0] = iVar9;
  if (iVar9 == *piVar1) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x828,&(this->Files).AllocatorInstance,piVar1);
    (this->Files).ArrayNum = iVar9;
  }
  (this->Files).ArrayNum = iVar9 + 1;
  pFVar2 = (this->Files).AllocatorInstance.Data + (longlong)iVar9 * 0x28;
  DefaultConstructItems<FStorageServerFileSystemTOC::FFile,int>(pFVar2,1);
  pFVar5 = pFVar2 + 0x10;
  uVar3 = *(undefined8 *)&param_2->Size;
  pwVar4 = param_2->DataPtr;
  *(undefined8 *)pFVar2 = *(undefined8 *)param_1->Id;
  local_38 = param_2->DataPtr;
  uStack_30 = *(undefined8 *)&param_2->Size;
  *(undefined4 *)(pFVar2 + 8) = *(undefined4 *)(param_1->Id + 8);
  ::FString::AssignRange((FString *)pFVar5,pwVar4,(int)uVar3);
  local_48 = local_68;
  *(long64 *)(pFVar2 + 0x20) = param_3;
  local_50 = pFVar5;
  TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<FString_const_&,int_const_&>_>
            ((TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>
              *)&this->FilePathToIndexMap,
             (TPairInitializer<FString_const_&,int_const_&> *)&stack0x00000008,(bool *)&local_50);
  FPaths::GetPath(&local_60,(FString *)pFVar5);
  iVar9 = local_60.Data.ArrayNum + -1;
  FVar7.Data = local_60.Data.AllocatorInstance.Data;
  if (local_60.Data.ArrayNum == 0) {
    iVar9 = 0;
    FVar7.Data = (FScriptContainerElement *)L"";
  }
  uVar10 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar9,(wchar_t *)FVar7.Data);
  iVar9 = TSet<TTuple<FString,FStorageServerFileSystemTOC::FDirectory_*>,TDefaultMapHashableKeyFuncs<FString,FStorageServerFileSystemTOC::FDirectory_*,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,FStorageServerFileSystemTOC::FDirectory_*>,TDefaultMapHashableKeyFuncs<FString,FStorageServerFileSystemTOC::FDirectory_*,0>,FDefaultSetAllocator>
                      *)&this->Directories,uVar10,&local_60);
  if (((iVar9 == -1) ||
      (lVar11 = (longlong)iVar9 * 0x20 + *(longlong *)&this->Directories, lVar11 == 0)) ||
     (pFVar12 = *(FDirectory **)(lVar11 + 0x10), pFVar12 == (FDirectory *)0x0)) {
    pFVar12 = AddDirectoriesRecursive(this,&local_60);
  }
  pFVar5 = (pFVar12->Files).AllocatorInstance.Data;
  if (((pFVar5 <= (FScriptContainerElement *)local_68) &&
      ((FScriptContainerElement *)local_68 < pFVar5 + (longlong)(pFVar12->Files).ArrayMax * 4)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  iVar9 = (pFVar12->Files).ArrayNum;
  piVar1 = &(pFVar12->Files).ArrayMax;
  if (iVar9 == *piVar1) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&(pFVar12->Files).AllocatorInstance,piVar1);
  }
  (pFVar12->Files).ArrayNum = iVar9 + 1;
  *(int *)((pFVar12->Files).AllocatorInstance.Data + (longlong)iVar9 * 4) = local_68[0];
  if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_60.Data.AllocatorInstance.Data);
  }
  ReleaseSRWLockExclusive((PSRWLOCK)&this->TocLock);
  return;
}

// Clear @ 148cbecc0

void __thiscall FStorageServerFileSystemTOC::Clear(FStorageServerFileSystemTOC *this)

{
  ulonglong uVar1;
  TMap<FString,FStorageServerFileSystemTOC::FDirectory_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FStorageServerFileSystemTOC::FDirectory_*,0>_>
  *this_00;
  int *piVar2;
  undefined8 *puVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined1 *puVar12;
  int iVar13;
  uint *puVar14;
  uint uVar15;
  uint uVar16;
  undefined1 local_res8 [8];
  int local_res10;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  AcquireSRWLockExclusive((PSRWLOCK)&this->TocLock);
  iVar10 = *(int *)&(this->Directories).field_0x28;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Directories).field_0x10;
  iVar11 = 0;
  this_00 = &this->Directories;
  iVar13 = 0;
  uVar6 = 1;
  iVar9 = 0;
  iVar7 = 0;
  if (iVar10 != 0) {
    puVar14 = *(uint **)&(this->Directories).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)TStack_60.Array;
    }
    uVar15 = *puVar14;
    while (uVar15 == 0) {
      lVar8 = (longlong)iVar11;
      iVar13 = iVar13 + 0x20;
      iVar11 = iVar11 + 1;
      if ((int)(iVar10 + -1 + (iVar10 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) {
        iVar9 = *(int *)&(this->Directories).field_0x28;
        iVar7 = iVar10;
        goto LAB_148cbed75;
      }
      uVar15 = puVar14[lVar8 + 1];
    }
    iVar9 = *(int *)&(this->Directories).field_0x28;
    uVar6 = -uVar15 & uVar15;
    uVar1 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res10 = (int)lVar8;
    iVar7 = local_res10 + -1 + iVar13;
    if (iVar9 < iVar7) {
      iVar7 = iVar10;
    }
  }
LAB_148cbed75:
  uVar15 = *(uint *)&(this->Directories).field_0x28;
  uVar16 = uVar15 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar6,iVar11);
  TStack_60.CurrentBitIndex = iVar7;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar10 = (int)uVar15 >> 5;
  TStack_60._28_4_ = iVar7;
  TStack_60.BaseBitIndex = iVar13;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->Directories).field_0x8 -
                       *(int *)&(this->Directories).field_0x34);
  if ((((int)uVar15 < 0) || (iVar9 < (int)uVar15)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = *(uint *)&(this->Directories).field_0x28;
  if (uVar15 != uVar6) {
    puVar12 = *(undefined1 **)&(this->Directories).field_0x20;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = &(this->Directories).field_0x10;
    }
    uVar15 = -1 << ((byte)uVar15 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar10 * 4);
    while (uVar15 == 0) {
      lVar8 = (longlong)iVar10;
      uVar16 = uVar16 + 0x20;
      iVar10 = iVar10 + 1;
      uVar15 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_148cbee7e;
      uVar15 = *(uint *)(puVar12 + lVar8 * 4 + 4);
    }
    uVar1 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar15 = (int)lVar8 + -1 + uVar16;
    if ((int)uVar6 < (int)uVar15) {
      uVar15 = uVar6;
    }
  }
LAB_148cbee7e:
  while( true ) {
    if (*(int *)&(this->Directories).field_0x8 - *(int *)&(this->Directories).field_0x34 !=
        (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<FString,FStorageServerFileSystemTOC::FDirectory_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar15) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)&(this->Directories).field_0x10))
    break;
    puVar3 = *(undefined8 **)
              ((longlong)TStack_60.CurrentBitIndex * 0x20 + 0x10 + *(longlong *)&this_00->field_0x0)
    ;
    if (puVar3 != (undefined8 *)0x0) {
      if ((void *)puVar3[2] != (void *)0x0) {
        FMemory::Free((void *)puVar3[2]);
      }
      DestructItems<FString,int>((FString *)*puVar3,*(int *)(puVar3 + 1));
      if ((void *)*puVar3 != (void *)0x0) {
        FMemory::Free((void *)*puVar3);
      }
      ::operator_delete(puVar3,0x20);
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  DestructItems<FString,int>
            ((FString *)(this->Root).Directories.AllocatorInstance.Data,
             (this->Root).Directories.ArrayNum);
  piVar2 = &(this->Root).Directories.ArrayMax;
  (this->Root).Directories.ArrayNum = 0;
  if (*piVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,(ForAnyElementType *)this,0,piVar2);
  }
  piVar2 = &(this->Root).Files.ArrayMax;
  (this->Root).Files.ArrayNum = 0;
  if (*piVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->Root).Files.AllocatorInstance,0,piVar2);
  }
  DestructItems<FStorageServerFileSystemTOC::FFile,int>
            ((FFile *)(this->Files).AllocatorInstance.Data,(this->Files).ArrayNum);
  piVar2 = &(this->Files).ArrayMax;
  (this->Files).ArrayNum = 0;
  if (*piVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,&(this->Files).AllocatorInstance,0,piVar2);
  }
  bVar5 = 1 < *(int *)&(this->Directories).field_0x48;
  if (!bVar5) {
    TSet<TTuple<FString,FStorageServerFileSystemTOC::FDirectory_*>,TDefaultMapHashableKeyFuncs<FString,FStorageServerFileSystemTOC::FDirectory_*,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<FString,FStorageServerFileSystemTOC::FDirectory_*>,TDefaultMapHashableKeyFuncs<FString,FStorageServerFileSystemTOC::FDirectory_*,0>,FDefaultSetAllocator>
                      *)this_00);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FStorageServerFileSystemTOC::FDirectory_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,FStorageServerFileSystemTOC::FDirectory_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)this_00,0,*(int *)&(this->Directories).field_0x8);
  puVar12 = &(this->Directories).field_0xc;
  *(undefined4 *)&(this->Directories).field_0x8 = 0;
  if (*(int *)puVar12 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)this_00,0,(int *)puVar12);
  }
  *(undefined4 *)&(this->Directories).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Directories).field_0x34 = 0;
  iVar10 = *(int *)&(this->Directories).field_0x2c;
  *(undefined4 *)&(this->Directories).field_0x28 = 0;
  if ((iVar10 < 0) || (0x80 < iVar10)) {
    *(undefined4 *)&(this->Directories).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Directories).field_0x10,0);
  }
  if (bVar5) {
    *(undefined4 *)&(this->Directories).field_0x48 = 1;
    TSet<TTuple<FString,FStorageServerFileSystemTOC::FDirectory_*>,TDefaultMapHashableKeyFuncs<FString,FStorageServerFileSystemTOC::FDirectory_*,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<FString,FStorageServerFileSystemTOC::FDirectory_*>,TDefaultMapHashableKeyFuncs<FString,FStorageServerFileSystemTOC::FDirectory_*,0>,FDefaultSetAllocator>
              *)this_00);
  }
  bVar5 = 1 < *(int *)&(this->FilePathToIndexMap).field_0x48;
  if (!bVar5) {
    TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>::
    UnhashElements((TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>
                    *)&this->FilePathToIndexMap);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)&this->FilePathToIndexMap,0,*(int *)&(this->FilePathToIndexMap).field_0x8);
  puVar12 = &(this->FilePathToIndexMap).field_0xc;
  *(undefined4 *)&(this->FilePathToIndexMap).field_0x8 = 0;
  if (*(int *)puVar12 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)&this->FilePathToIndexMap,0,(int *)puVar12);
  }
  *(undefined4 *)&(this->FilePathToIndexMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->FilePathToIndexMap).field_0x34 = 0;
  iVar10 = *(int *)&(this->FilePathToIndexMap).field_0x2c;
  *(undefined4 *)&(this->FilePathToIndexMap).field_0x28 = 0;
  if ((iVar10 < 0) || (0x80 < iVar10)) {
    *(undefined4 *)&(this->FilePathToIndexMap).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->FilePathToIndexMap).field_0x10,0);
  }
  if (bVar5) {
    *(undefined4 *)&(this->FilePathToIndexMap).field_0x48 = 1;
    TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>::
    Rehash((TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>
            *)&this->FilePathToIndexMap);
  }
                    /* WARNING: Could not recover jumptable at 0x000148cbf144. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)&this->TocLock);
  return;
}

// DirectoryExists @ 148cc1a70

bool __thiscall
FStorageServerFileSystemTOC::DirectoryExists(FStorageServerFileSystemTOC *this,FString *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  wchar_t *pwVar4;
  
  AcquireSRWLockShared((PSRWLOCK)&this->TocLock);
  iVar1 = (param_1->Data).ArrayNum;
  iVar3 = iVar1 + -1;
  if (iVar1 == 0) {
    pwVar4 = L"";
    iVar3 = 0;
  }
  else {
    pwVar4 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  uVar2 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar3,pwVar4);
  iVar3 = TSet<TTuple<FString,FStorageServerFileSystemTOC::FDirectory_*>,TDefaultMapHashableKeyFuncs<FString,FStorageServerFileSystemTOC::FDirectory_*,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,FStorageServerFileSystemTOC::FDirectory_*>,TDefaultMapHashableKeyFuncs<FString,FStorageServerFileSystemTOC::FDirectory_*,0>,FDefaultSetAllocator>
                      *)&this->Directories,uVar2,param_1);
  ReleaseSRWLockShared((PSRWLOCK)&this->TocLock);
  return iVar3 != -1;
}

// FileExists @ 148cc2d70

bool __thiscall
FStorageServerFileSystemTOC::FileExists(FStorageServerFileSystemTOC *this,FString *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  wchar_t *pwVar4;
  
  AcquireSRWLockShared((PSRWLOCK)&this->TocLock);
  iVar1 = (param_1->Data).ArrayNum;
  iVar3 = iVar1 + -1;
  if (iVar1 == 0) {
    pwVar4 = L"";
    iVar3 = 0;
  }
  else {
    pwVar4 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  uVar2 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar3,pwVar4);
  iVar3 = TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>
                      *)&this->FilePathToIndexMap,uVar2,param_1);
  ReleaseSRWLockShared((PSRWLOCK)&this->TocLock);
  return iVar3 != -1;
}

// GetFileChunkId @ 148cc72d0

FIoChunkId * __thiscall
FStorageServerFileSystemTOC::GetFileChunkId(FStorageServerFileSystemTOC *this,FString *param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  uint *puVar4;
  FIoChunkId *pFVar5;
  uint uVar6;
  FScriptContainerElement *pFVar7;
  
  AcquireSRWLockShared((PSRWLOCK)&this->TocLock);
  puVar4 = (uint *)TMapBase<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_>
                   ::Find((TMapBase<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_>
                           *)&this->FilePathToIndexMap,param_1);
  pFVar7 = (FScriptContainerElement *)0x0;
  if (puVar4 != (uint *)0x0) {
    uVar1 = *puVar4;
    uVar6 = 0;
    if ((int)uVar1 < (this->Files).ArrayNum) {
      uVar6 = ~uVar1 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FIoChunkId *)(*pcVar2)();
        return pFVar5;
      }
    }
    pFVar7 = (this->Files).AllocatorInstance.Data + (longlong)(int)uVar1 * 0x28;
  }
  ReleaseSRWLockShared((PSRWLOCK)&this->TocLock);
  return (FIoChunkId *)pFVar7;
}

// GetFileData @ 148cc73a0

bool __thiscall
FStorageServerFileSystemTOC::GetFileData
          (FStorageServerFileSystemTOC *this,FString *param_1,FIoChunkId *param_2,long64 *param_3)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  uint *puVar7;
  longlong lVar8;
  
  AcquireSRWLockShared((PSRWLOCK)&this->TocLock);
  puVar7 = (uint *)TMapBase<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_>
                   ::Find((TMapBase<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_>
                           *)&this->FilePathToIndexMap,param_1);
  if (puVar7 == (uint *)0x0) {
    bVar4 = false;
  }
  else {
    uVar1 = *puVar7;
    lVar8 = (longlong)(int)uVar1;
    uVar6 = 0;
    if ((int)uVar1 < (this->Files).ArrayNum) {
      uVar6 = ~uVar1 >> 0x1f;
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
    pFVar2 = (this->Files).AllocatorInstance.Data;
    *(undefined8 *)param_2->Id = *(undefined8 *)(pFVar2 + lVar8 * 0x28);
    bVar4 = true;
    *(undefined4 *)(param_2->Id + 8) = *(undefined4 *)(pFVar2 + lVar8 * 0x28 + 8);
    *param_3 = *(long64 *)(pFVar2 + lVar8 * 0x28 + 0x20);
  }
  ReleaseSRWLockShared((PSRWLOCK)&this->TocLock);
  return bVar4;
}

// GetFileSize @ 148cc7490

long64 __thiscall
FStorageServerFileSystemTOC::GetFileSize(FStorageServerFileSystemTOC *this,FString *param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint *puVar5;
  long64 lVar6;
  
  AcquireSRWLockShared((PSRWLOCK)&this->TocLock);
  puVar5 = (uint *)TMapBase<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_>
                   ::Find((TMapBase<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_>
                           *)&this->FilePathToIndexMap,param_1);
  if (puVar5 == (uint *)0x0) {
    lVar6 = -1;
  }
  else {
    uVar1 = *puVar5;
    uVar4 = 0;
    if ((int)uVar1 < (this->Files).ArrayNum) {
      uVar4 = ~uVar1 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        lVar6 = (*pcVar2)();
        return lVar6;
      }
    }
    lVar6 = *(long64 *)((this->Files).AllocatorInstance.Data + (longlong)(int)uVar1 * 0x28 + 0x20);
  }
  ReleaseSRWLockShared((PSRWLOCK)&this->TocLock);
  return lVar6;
}

// IterateDirectory @ 148cce390

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FStorageServerFileSystemTOC::IterateDirectory
          (FStorageServerFileSystemTOC *this,FString *param_1,
          TFunctionRef<bool___cdecl(FIoChunkId_const_&,wchar_t_const_*,__int64)> *param_2)

{
  FPlatformRWLock *SRWLock;
  int iVar1;
  uint uVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  char cVar8;
  uint uVar9;
  FDirectory *pFVar10;
  longlong lVar11;
  FScriptContainerElement *pFVar12;
  FScriptContainerElement *pFVar13;
  undefined1 auStack_a8 [32];
  longlong local_88;
  longlong local_80;
  undefined1 local_78;
  undefined1 local_77 [7];
  undefined8 local_70;
  wchar_t *local_68;
  undefined8 local_60;
  wchar_t *local_58;
  undefined8 local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_a8;
  if (5 < (byte)LogStorageServerPlatformFile._0_1_) {
    UE::Logging::Private::BasicLog<6>
              (&::LOG_Static,(FLogCategoryBase *)&LogStorageServerPlatformFile);
  }
  SRWLock = &this->TocLock;
  AcquireSRWLockShared((PSRWLOCK)SRWLock);
  pFVar10 = TMapBase<FString,FStorageServerFileSystemTOC::FDirectory_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FStorageServerFileSystemTOC::FDirectory_*,0>_>
            ::FindRef((TMapBase<FString,FStorageServerFileSystemTOC::FDirectory_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FStorageServerFileSystemTOC::FDirectory_*,0>_>
                       *)&this->Directories,param_1);
  if (pFVar10 != (FDirectory *)0x0) {
    pFVar12 = (pFVar10->Files).AllocatorInstance.Data;
    iVar1 = (pFVar10->Files).ArrayNum;
    pFVar13 = pFVar12 + (longlong)iVar1 * 4;
    while( true ) {
      if ((pFVar10->Files).ArrayNum != iVar1) {
        local_78 = 0;
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_78);
      }
      if (pFVar12 == pFVar13) {
        iVar1 = (pFVar10->Directories).ArrayNum;
        pFVar13 = (pFVar10->Directories).AllocatorInstance.Data;
        pFVar12 = pFVar13 + (longlong)iVar1 * 0x10;
        while( true ) {
          if ((pFVar10->Directories).ArrayNum != iVar1) {
            `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (local_77);
          }
          if (pFVar13 == pFVar12) {
            ReleaseSRWLockShared((PSRWLOCK)SRWLock);
            return true;
          }
          if (*(int *)(pFVar13 + 8) == 0) {
            local_58 = L"";
          }
          else {
            local_58 = *(wchar_t **)pFVar13;
          }
          local_60 = 0;
          local_50 = 0;
          local_48 = 0;
          cVar8 = (**(code **)param_2)
                            (*(undefined8 *)&param_2->field_0x8,&local_50,&local_58,&local_60);
          if (cVar8 == '\0') break;
          pFVar13 = pFVar13 + 0x10;
        }
        break;
      }
      uVar2 = *(uint *)pFVar12;
      lVar11 = (longlong)(int)uVar2;
      iVar3 = (this->Files).ArrayNum;
      uVar9 = 0;
      if ((int)uVar2 < iVar3) {
        uVar9 = ~uVar2 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (local_88 = lVar11, local_80 = (longlong)iVar3,
         bVar6 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      pFVar4 = (this->Files).AllocatorInstance.Data;
      local_70 = *(undefined8 *)(pFVar4 + lVar11 * 0x28 + 0x20);
      if (*(int *)(pFVar4 + lVar11 * 0x28 + 0x18) == 0) {
        local_68 = L"";
      }
      else {
        local_68 = *(wchar_t **)(pFVar4 + lVar11 * 0x28 + 0x10);
      }
      cVar8 = (**(code **)param_2)
                        (*(undefined8 *)&param_2->field_0x8,pFVar4 + lVar11 * 0x28,&local_68,
                         &local_70);
      if (cVar8 == '\0') break;
      pFVar12 = pFVar12 + 4;
    }
  }
  ReleaseSRWLockShared((PSRWLOCK)SRWLock);
  return false;
}

// IterateDirectoryRecursively @ 148cce720

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FStorageServerFileSystemTOC::IterateDirectoryRecursively
          (FStorageServerFileSystemTOC *this,FString *param_1,
          TFunctionRef<bool___cdecl(FIoChunkId_const_&,wchar_t_const_*,__int64)> *param_2)

{
  int iVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  char cVar7;
  bool bVar8;
  uint uVar9;
  FDirectory *pFVar10;
  longlong lVar11;
  FScriptContainerElement *pFVar12;
  FScriptContainerElement *pFVar13;
  undefined1 local_res8 [8];
  undefined1 local_res20 [8];
  undefined8 local_58;
  wchar_t *local_50;
  TFunctionRef<bool___cdecl(FIoChunkId_const_&,wchar_t_const_*,__int64)> local_48;
  
  if (5 < (byte)LogStorageServerPlatformFile._0_1_) {
    UE::Logging::Private::BasicLog<6>
              (&::LOG_Static,(FLogCategoryBase *)&LogStorageServerPlatformFile);
  }
  AcquireSRWLockShared((PSRWLOCK)&this->TocLock);
  pFVar10 = TMapBase<FString,FStorageServerFileSystemTOC::FDirectory_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FStorageServerFileSystemTOC::FDirectory_*,0>_>
            ::FindRef((TMapBase<FString,FStorageServerFileSystemTOC::FDirectory_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FStorageServerFileSystemTOC::FDirectory_*,0>_>
                       *)&this->Directories,param_1);
  if (pFVar10 != (FDirectory *)0x0) {
    pFVar12 = (pFVar10->Files).AllocatorInstance.Data;
    iVar1 = (pFVar10->Files).ArrayNum;
    pFVar13 = pFVar12 + (longlong)iVar1 * 4;
    while( true ) {
      if ((pFVar10->Files).ArrayNum != iVar1) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (pFVar12 == pFVar13) {
        iVar1 = (pFVar10->Directories).ArrayNum;
        bVar5 = false;
        pFVar13 = (pFVar10->Directories).AllocatorInstance.Data;
        pFVar12 = pFVar13 + (longlong)iVar1 * 0x10;
        while( true ) {
          if ((pFVar10->Directories).ArrayNum != iVar1) {
            `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (local_res20);
          }
          if (pFVar13 == pFVar12) break;
          local_48._0_8_ = *(undefined8 *)param_2;
          local_48._8_8_ = *(undefined8 *)&param_2->field_0x8;
          bVar8 = IterateDirectoryRecursively(this,(FString *)pFVar13,&local_48);
          bVar5 = (bool)(bVar5 | !bVar8);
          pFVar13 = pFVar13 + 0x10;
        }
        ReleaseSRWLockShared((PSRWLOCK)&this->TocLock);
        return !bVar5;
      }
      uVar2 = *(uint *)pFVar12;
      lVar11 = (longlong)(int)uVar2;
      uVar9 = 0;
      if ((int)uVar2 < (this->Files).ArrayNum) {
        uVar9 = ~uVar2 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      pFVar3 = (this->Files).AllocatorInstance.Data;
      local_58 = *(undefined8 *)(pFVar3 + lVar11 * 0x28 + 0x20);
      if (*(int *)(pFVar3 + lVar11 * 0x28 + 0x18) == 0) {
        local_50 = L"";
      }
      else {
        local_50 = *(wchar_t **)(pFVar3 + lVar11 * 0x28 + 0x10);
      }
      cVar7 = (**(code **)param_2)
                        (*(undefined8 *)&param_2->field_0x8,pFVar3 + lVar11 * 0x28,&local_50,
                         &local_58);
      if (cVar7 == '\0') break;
      pFVar12 = pFVar12 + 4;
    }
  }
  ReleaseSRWLockShared((PSRWLOCK)&this->TocLock);
  return false;
}

