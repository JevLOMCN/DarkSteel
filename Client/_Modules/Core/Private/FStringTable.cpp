// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 29

// FStringTable @ 141734dd0

FStringTable * __thiscall FStringTable::FStringTable(FStringTable *this)

{
  this->bIsLoaded = true;
  this->bIsInternal = false;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->OwnerAsset = (UStringTable *)0x0;
  *(undefined8 *)&this->KeysToEntries = 0;
  *(undefined8 *)&(this->KeysToEntries).field_0x8 = 0;
  *(undefined8 *)&(this->KeysToEntries).field_0x20 = 0;
  (this->TableNamespace).Index = -1;
  *(undefined4 *)&(this->KeysToEntries).field_0x28 = 0;
  *(undefined4 *)&(this->KeysToEntries).field_0x2c = 0x80;
  *(undefined4 *)&(this->KeysToEntries).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->KeysToEntries).field_0x34 = 0;
  *(undefined8 *)&(this->KeysToEntries).field_0x40 = 0;
  *(undefined4 *)&(this->KeysToEntries).field_0x48 = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->KeyMappingCS,4000);
  *(undefined8 *)&this->KeysToMetaData = 0;
  *(undefined8 *)&(this->KeysToMetaData).field_0x8 = 0;
  *(undefined8 *)&(this->KeysToMetaData).field_0x20 = 0;
  *(undefined4 *)&(this->KeysToMetaData).field_0x28 = 0;
  *(undefined4 *)&(this->KeysToMetaData).field_0x2c = 0x80;
  *(undefined4 *)&(this->KeysToMetaData).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->KeysToMetaData).field_0x34 = 0;
  *(undefined8 *)&(this->KeysToMetaData).field_0x40 = 0;
  *(undefined4 *)&(this->KeysToMetaData).field_0x48 = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->KeysToMetaDataCS,4000);
  return this;
}

// ~FStringTable @ 141739420

void __thiscall FStringTable::~FStringTable(FStringTable *this)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  longlong *plVar4;
  
  ClearSourceStrings(this,0);
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->KeysToMetaDataCS);
  *(undefined4 *)&(this->KeysToMetaData).field_0x48 = 0;
  pvVar3 = *(void **)&(this->KeysToMetaData).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<FTextKey,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FTextKey,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FTextKey,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->KeysToMetaData);
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->KeyMappingCS);
  *(undefined4 *)&(this->KeysToEntries).field_0x48 = 0;
  pvVar3 = *(void **)&(this->KeysToEntries).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<FTextKey,TSharedPtr<FStringTableEntry,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FTextKey,TSharedPtr<FStringTableEntry,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FTextKey,TSharedPtr<FStringTableEntry,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->KeysToEntries);
  plVar4 = (longlong *)this->_padding_;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar4 + 8))(plVar4,1);
    }
  }
  return;
}

// ClearMetaData @ 14174b880

void __thiscall FStringTable::ClearMetaData(FStringTable *this,FTextKey *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  lpCriticalSection = &this->KeysToMetaDataCS;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (*(int *)&(this->KeysToMetaData).field_0x8 != *(int *)&(this->KeysToMetaData).field_0x34) {
    uVar3 = ::GetTypeHash(param_1);
    TSet<TTuple<FTextKey,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>,TDefaultMapHashableKeyFuncs<FTextKey,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>,0>,FDefaultSetAllocator>
    ::RemoveImpl<FTextKey>
              ((TSet<TTuple<FTextKey,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>,TDefaultMapHashableKeyFuncs<FTextKey,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>,0>,FDefaultSetAllocator>
                *)&this->KeysToMetaData,uVar3,param_1);
  }
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return;
}

// ClearMetaData @ 14174b920

void __thiscall FStringTable::ClearMetaData(FStringTable *this,int param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  code *pcVar1;
  bool bVar2;
  
  lpCriticalSection = &this->KeysToMetaDataCS;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  TSet<TTuple<FTextKey,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>,TDefaultMapHashableKeyFuncs<FTextKey,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>,0>,FDefaultSetAllocator>
  ::Empty((TSet<TTuple<FTextKey,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>,TDefaultMapHashableKeyFuncs<FTextKey,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>,0>,FDefaultSetAllocator>
           *)&this->KeysToMetaData,param_1);
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return;
}

// ClearSourceStrings @ 14174ba70

void __thiscall FStringTable::ClearSourceStrings(FStringTable *this,int param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  ulonglong uVar2;
  undefined1 *puVar3;
  FWindowsRecursiveMutex *lpCriticalSection_00;
  int iVar4;
  uint uVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  code *pcVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  uint uVar13;
  int iVar14;
  undefined1 *puVar15;
  int iVar16;
  uint *puVar17;
  undefined1 local_res8 [8];
  int local_res10;
  int local_res18;
  int local_res20;
  undefined4 uStack_ac;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_a0;
  undefined8 uStack_80;
  undefined8 local_78 [5];
  undefined4 local_4c;
  
  lpCriticalSection = &this->KeyMappingCS;
  local_res10 = param_1;
  if ((lpCriticalSection == (FWindowsRecursiveMutex *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  iVar14 = 0;
  iVar4 = *(int *)&(this->KeysToEntries).field_0x28;
  TStack_a0.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->KeysToEntries).field_0x10;
  iVar16 = 0;
  uVar10 = 1;
  iVar11 = 0;
  if (iVar4 != 0) {
    puVar17 = *(uint **)&(this->KeysToEntries).field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)TStack_a0.Array;
    }
    uVar13 = *puVar17;
    while (uVar13 == 0) {
      lVar12 = (longlong)iVar14;
      iVar16 = iVar16 + 0x20;
      iVar14 = iVar14 + 1;
      iVar11 = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_14174bb4f;
      uVar13 = puVar17[lVar12 + 1];
    }
    uVar10 = -uVar13 & uVar13;
    uVar2 = (ulonglong)uVar10 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_res18 = (int)lVar12;
    iVar11 = local_res18 + -1 + iVar16;
    if (iVar4 < iVar11) {
      iVar11 = iVar4;
    }
  }
LAB_14174bb4f:
  puVar3 = &(this->KeysToEntries).field_0x10;
  uVar13 = *(uint *)&(this->KeysToEntries).field_0x28;
  TStack_a0.CurrentBitIndex = iVar11;
  TStack_a0.UnvisitedBitMask = 0xffffffff;
  TStack_a0._padding_ = CONCAT44(uVar10,iVar14);
  uVar10 = uVar13 & 0xffffffe0;
  iVar14 = (int)uVar13 >> 5;
  TStack_a0._28_4_ = local_4c;
  TStack_a0.BaseBitIndex = iVar16;
  uStack_80 = CONCAT44(uStack_ac,
                       *(int *)&(this->KeysToEntries).field_0x8 -
                       *(int *)&(this->KeysToEntries).field_0x34);
  if ((((int)uVar13 < 0) || (iVar4 < (int)uVar13)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  uVar5 = *(uint *)&(this->KeysToEntries).field_0x28;
  if (uVar13 != uVar5) {
    puVar15 = *(undefined1 **)&(this->KeysToEntries).field_0x20;
    if (puVar15 == (undefined1 *)0x0) {
      puVar15 = puVar3;
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar14 * 4);
    while (uVar13 == 0) {
      lVar12 = (longlong)iVar14;
      uVar10 = uVar10 + 0x20;
      iVar14 = iVar14 + 1;
      uVar13 = uVar5;
      if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_14174bc4f;
      uVar13 = *(uint *)(puVar15 + lVar12 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_res20 = (int)lVar12;
    uVar13 = local_res20 + -1 + uVar10;
    if ((int)uVar5 < (int)uVar13) {
      uVar13 = uVar5;
    }
  }
LAB_14174bc4f:
  while( true ) {
    if (*(int *)&(this->KeysToEntries).field_0x8 - *(int *)&(this->KeysToEntries).field_0x34 !=
        (int)uStack_80) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FTextKey,TSharedPtr<FStringTableEntry,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    iVar4 = local_res10;
    if ((TStack_a0.CurrentBitIndex == uVar13) &&
       (TStack_a0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar3)) break;
    lVar12 = *(longlong *)&this->KeysToEntries + (longlong)TStack_a0.CurrentBitIndex * 0x20;
    if ((*(longlong *)(lVar12 + 8) == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar9)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    puVar6 = *(undefined8 **)(lVar12 + 8);
    if (puVar6 != local_78) {
      plVar7 = (longlong *)puVar6[1];
      *puVar6 = 0;
      puVar6[1] = 0;
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar7 + 8))(plVar7,1);
        }
      }
    }
    TStack_a0.UnvisitedBitMask = TStack_a0.UnvisitedBitMask & ~TStack_a0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_a0);
  }
  TSet<TTuple<FTextKey,TSharedPtr<FStringTableEntry,1>_>,TDefaultMapHashableKeyFuncs<FTextKey,TSharedPtr<FStringTableEntry,1>,0>,FDefaultSetAllocator>
  ::Empty((TSet<TTuple<FTextKey,TSharedPtr<FStringTableEntry,1>_>,TDefaultMapHashableKeyFuncs<FTextKey,TSharedPtr<FStringTableEntry,1>,0>,FDefaultSetAllocator>
           *)&this->KeysToEntries,local_res10);
  lpCriticalSection_00 = &this->KeysToMetaDataCS;
  if ((lpCriticalSection_00 == (FWindowsRecursiveMutex *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection_00);
  TSet<TTuple<FTextKey,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>,TDefaultMapHashableKeyFuncs<FTextKey,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>,0>,FDefaultSetAllocator>
  ::Empty((TSet<TTuple<FTextKey,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>,TDefaultMapHashableKeyFuncs<FTextKey,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>,0>,FDefaultSetAllocator>
           *)&this->KeysToMetaData,iVar4);
  if (lpCriticalSection_00 != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection_00);
  }
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return;
}

// EnumerateKeysAndSourceStrings @ 141753b60

void __thiscall
FStringTable::EnumerateKeysAndSourceStrings
          (FStringTable *this,TFunctionRef<bool___cdecl(FTextKey_const_&,FString_const_&)> *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  undefined1 *puVar12;
  int iVar13;
  uint *puVar14;
  uint uVar15;
  undefined1 local_res8 [8];
  undefined4 uStack_94;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_88;
  undefined8 uStack_68;
  undefined4 local_44;
  
  lpCriticalSection = &this->KeyMappingCS;
  if ((lpCriticalSection == (FWindowsRecursiveMutex *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  iVar3 = *(int *)&(this->KeysToEntries).field_0x28;
  puVar1 = &(this->KeysToEntries).field_0x10;
  iVar11 = 0;
  uVar7 = 1;
  iVar13 = 0;
  iVar8 = 0;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&(this->KeysToEntries).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar10 = *puVar14;
    while (uVar10 == 0) {
      lVar9 = (longlong)iVar11;
      iVar13 = iVar13 + 0x20;
      iVar11 = iVar11 + 1;
      iVar8 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_141753c3e;
      uVar10 = puVar14[lVar9 + 1];
    }
    uVar7 = -uVar10 & uVar10;
    uVar2 = (ulonglong)uVar7 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    iVar8 = (int)lVar9 + -1 + iVar13;
    if (iVar3 < iVar8) {
      iVar8 = iVar3;
    }
  }
LAB_141753c3e:
  uVar10 = *(uint *)&(this->KeysToEntries).field_0x28;
  uVar15 = uVar10 & 0xffffffe0;
  TStack_88._padding_ = CONCAT44(uVar7,iVar11);
  TStack_88.CurrentBitIndex = iVar8;
  TStack_88.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar10 >> 5;
  TStack_88._28_4_ = local_44;
  TStack_88.BaseBitIndex = iVar13;
  uStack_68 = CONCAT44(uStack_94,
                       *(int *)&(this->KeysToEntries).field_0x8 -
                       *(int *)&(this->KeysToEntries).field_0x34);
  TStack_88.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar7 = *(uint *)&(this->KeysToEntries).field_0x28;
  if (uVar10 != uVar7) {
    puVar12 = *(undefined1 **)&(this->KeysToEntries).field_0x20;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = puVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar11 * 4);
    while (uVar10 == 0) {
      lVar9 = (longlong)iVar11;
      uVar15 = uVar15 + 0x20;
      iVar11 = iVar11 + 1;
      uVar10 = uVar7;
      if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_141753d50;
      uVar10 = *(uint *)(puVar12 + lVar9 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar10 = (int)lVar9 + -1 + uVar15;
    if ((int)uVar7 < (int)uVar10) {
      uVar10 = uVar7;
    }
  }
LAB_141753d50:
  do {
    if (*(int *)&(this->KeysToEntries).field_0x8 - *(int *)&(this->KeysToEntries).field_0x34 !=
        (int)uStack_68) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FTextKey,TSharedPtr<FStringTableEntry,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_88.CurrentBitIndex == uVar10) &&
       (TStack_88.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) {
LAB_141753dea:
      if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
        LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      }
      return;
    }
    lVar9 = *(longlong *)&this->KeysToEntries + (longlong)TStack_88.CurrentBitIndex * 0x20;
    if ((*(longlong *)(lVar9 + 8) == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    cVar6 = (**(code **)param_1)
                      (*(undefined8 *)&param_1->field_0x8,lVar9,*(longlong *)(lVar9 + 8) + 0x10);
    if (cVar6 == '\0') goto LAB_141753dea;
    TStack_88.UnvisitedBitMask = TStack_88.UnvisitedBitMask & ~TStack_88._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_88);
  } while( true );
}

// EnumerateMetaData @ 141753e20

void __thiscall
FStringTable::EnumerateMetaData
          (FStringTable *this,FTextKey *param_1,
          TFunctionRef<bool___cdecl(FName,FString_const_&)> *param_2)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_> *pTVar6;
  bool bVar7;
  char cVar8;
  TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_> *pTVar9;
  longlong lVar10;
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar11;
  int iVar12;
  undefined1 *puVar13;
  undefined8 *puVar14;
  uint *puVar15;
  uint uVar16;
  undefined1 local_res8 [8];
  undefined8 local_c8;
  LPCRITICAL_SECTION local_c0;
  TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_> *local_b8;
  int iStack_b0;
  uint uStack_ac;
  undefined1 *local_a8;
  undefined4 uStack_a0;
  int iStack_9c;
  int local_98;
  undefined4 uStack_94;
  int iStack_90;
  undefined4 uStack_8c;
  TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_> *local_88;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_80;
  undefined8 uStack_60;
  undefined4 local_3c;
  
  lpCriticalSection = (LPCRITICAL_SECTION)&this->KeysToMetaDataCS;
  local_c0 = lpCriticalSection;
  if ((lpCriticalSection == (LPCRITICAL_SECTION)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  EnterCriticalSection(lpCriticalSection);
  pTVar9 = TMapBase<FTextKey,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextKey,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>,0>_>
           ::Find((TMapBase<FTextKey,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextKey,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>,0>_>
                   *)&this->KeysToMetaData,param_1);
  if (pTVar9 != (TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                 *)0x0) {
    iVar3 = *(int *)&pTVar9->field_0x28;
    iStack_b0 = 0;
    puVar1 = &pTVar9->field_0x10;
    uStack_ac = 1;
    local_98 = 0;
    iStack_9c = 0;
    if (iVar3 != 0) {
      puVar15 = *(uint **)&pTVar9->field_0x20;
      if (*(uint **)&pTVar9->field_0x20 == (uint *)0x0) {
        puVar15 = (uint *)puVar1;
      }
      uVar11 = *puVar15;
      while (uVar11 == 0) {
        lVar10 = (longlong)iStack_b0;
        local_98 = local_98 + 0x20;
        iStack_b0 = iStack_b0 + 1;
        iStack_9c = iVar3;
        if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_b0) goto LAB_141753f3e;
        uVar11 = puVar15[lVar10 + 1];
      }
      uStack_ac = -uVar11 & uVar11;
      uVar2 = (ulonglong)uStack_ac * 2 + 1;
      lVar10 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      iStack_9c = local_98 + -1 + (int)lVar10;
      if (iVar3 < iStack_9c) {
        iStack_9c = iVar3;
      }
    }
LAB_141753f3e:
    uVar11 = *(uint *)&pTVar9->field_0x28;
    uStack_94 = local_3c;
    uVar16 = uVar11 & 0xffffffe0;
    iStack_90 = *(int *)&pTVar9->field_0x8 - *(int *)&pTVar9->field_0x34;
    uStack_a0 = 0xffffffff;
    TStack_80._padding_ = CONCAT44(uStack_ac,iStack_b0);
    TStack_80.CurrentBitIndex = iStack_9c;
    TStack_80.UnvisitedBitMask = 0xffffffff;
    iVar12 = (int)uVar11 >> 5;
    TStack_80._28_4_ = local_3c;
    TStack_80.BaseBitIndex = local_98;
    uStack_60 = CONCAT44(uStack_8c,iStack_90);
    local_b8 = pTVar9;
    local_a8 = puVar1;
    local_88 = pTVar9;
    TStack_80.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if ((((int)uVar11 < 0) || (iVar3 < (int)uVar11)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar4 = *(uint *)&pTVar9->field_0x28;
    if (uVar11 != uVar4) {
      puVar13 = *(undefined1 **)&pTVar9->field_0x20;
      if (*(undefined1 **)&pTVar9->field_0x20 == (undefined1 *)0x0) {
        puVar13 = puVar1;
      }
      uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar12 * 4);
      while (uVar11 == 0) {
        lVar10 = (longlong)iVar12;
        uVar16 = uVar16 + 0x20;
        iVar12 = iVar12 + 1;
        uVar11 = uVar4;
        if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12)
        goto LAB_141754050;
        uVar11 = *(uint *)(puVar13 + lVar10 * 4 + 4);
      }
      uVar2 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
      lVar10 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      uVar11 = (int)lVar10 + -1 + uVar16;
      if ((int)uVar4 < (int)uVar11) {
        uVar11 = uVar4;
      }
    }
LAB_141754050:
    do {
      pTVar6 = local_88;
      if (*(int *)&local_88->field_0x8 - *(int *)&local_88->field_0x34 != (int)uStack_60) {
        `TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (((TStack_80.CurrentBitIndex == uVar11) &&
          (TStack_80.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
         (lpCriticalSection = local_c0, pTVar6 == pTVar9)) break;
      puVar14 = (undefined8 *)((longlong)TStack_80.CurrentBitIndex * 0x20 + *(longlong *)pTVar6);
      local_c8 = *puVar14;
      cVar8 = (**(code **)param_2)(*(undefined8 *)&param_2->field_0x8,&local_c8,puVar14 + 1);
      lpCriticalSection = local_c0;
      if (cVar8 == '\0') break;
      TStack_80.UnvisitedBitMask = TStack_80.UnvisitedBitMask & ~TStack_80._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_80);
    } while( true );
  }
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(lpCriticalSection);
  }
  return;
}

// EnumerateSourceStrings @ 141754100

void __thiscall
FStringTable::EnumerateSourceStrings
          (FStringTable *this,TFunctionRef<bool___cdecl(FString_const_&,FString_const_&)> *param_1)

{
  TFunctionRef<bool___cdecl(FString_const_&,FString_const_&)> *local_res10 [3];
  code *local_18;
  TFunctionRef<bool___cdecl(FString_const_&,FString_const_&)> **local_10;
  
  local_10 = local_res10;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`FStringTable::EnumerateSourceStrings'::__l2::<lambda_1>,bool,FTextKey_const_&,FString_const_&>
             ::Call;
  local_res10[0] = param_1;
  EnumerateKeysAndSourceStrings
            (this,(TFunctionRef<bool___cdecl(FTextKey_const_&,FString_const_&)> *)&local_18);
  return;
}

// ExportStrings @ 141754b30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall FStringTable::ExportStrings(FStringTable *this,FString *param_1)

{
  FWindowsRecursiveMutex *pFVar1;
  undefined1 *puVar2;
  ulonglong uVar3;
  TBitArray<FDefaultBitArrayAllocator> *pTVar4;
  void *pvVar5;
  FName FVar6;
  code *pcVar7;
  undefined8 uVar8;
  LPCRITICAL_SECTION lpCriticalSection;
  LPCRITICAL_SECTION lpCriticalSection_00;
  TMap<FTextKey,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextKey,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>,0>_>
  *pTVar9;
  longlong *plVar10;
  TMap<FTextKey,TSharedPtr<FStringTableEntry,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextKey,TSharedPtr<FStringTableEntry,1>,0>_>
  *pTVar11;
  bool bVar12;
  undefined1 uVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  TConstSetBitIterator<FDefaultBitArrayAllocator> *pTVar17;
  FString *pFVar18;
  TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
  *this_00;
  TTuple<FName,FString> *pTVar19;
  IFileManager *pIVar20;
  byte bVar21;
  longlong lVar22;
  int iVar23;
  TBitArray<FDefaultBitArrayAllocator> *pTVar24;
  ForElementType<unsigned_int> FVar25;
  uint *puVar26;
  longlong lVar27;
  wchar_t *pwVar28;
  uint uVar29;
  TMap<FTextKey,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextKey,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>,0>_>
  *pTVar30;
  FTextKey *pFVar31;
  uint uVar32;
  TBitArray<FDefaultBitArrayAllocator> *pTVar33;
  undefined1 auStackY_3a8 [32];
  undefined1 local_368;
  undefined1 local_367;
  undefined1 local_366;
  undefined1 local_365;
  undefined1 local_364 [4];
  FString local_360;
  TMap<FTextKey,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextKey,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>,0>_>
  *local_350;
  undefined8 uStack_348;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_340;
  uint uStack_338;
  uint uStack_334;
  uint uStack_330;
  undefined4 uStack_32c;
  int local_328;
  undefined4 uStack_324;
  FString local_320;
  undefined8 local_310;
  ForElementType<unsigned_int> local_308;
  FString local_300;
  FString local_2f0;
  FStringTable *local_2e0;
  TMap<FTextKey,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextKey,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>,0>_>
  *local_2d8;
  LPCRITICAL_SECTION local_2d0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_2c8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_2a8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_288;
  int local_268;
  int local_264;
  FName local_260;
  int local_258;
  int local_254;
  int local_250;
  FTextKey *local_248;
  FString *local_240;
  TMap<FTextKey,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextKey,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>,0>_>
  *local_238;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_230;
  undefined8 uStack_210;
  TMap<FTextKey,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextKey,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>,0>_>
  *local_208;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_200;
  undefined8 uStack_1e0;
  longlong *local_1d8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1d0;
  undefined8 uStack_1b0;
  TMap<FTextKey,TSharedPtr<FStringTableEntry,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextKey,TSharedPtr<FStringTableEntry,1>,0>_>
  *local_1a8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1a0;
  undefined8 uStack_180;
  TMap<FTextKey,TSharedPtr<FStringTableEntry,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextKey,TSharedPtr<FStringTableEntry,1>,0>_>
  *local_178;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_170;
  undefined8 uStack_150;
  FScriptContainerElement *local_148;
  int iStack_140;
  undefined4 uStack_13c;
  FString local_138;
  TStringView<wchar_t> local_128;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_118;
  undefined4 local_dc;
  undefined4 local_bc;
  undefined4 local_9c;
  undefined1 local_98 [32];
  uint *local_78;
  uint local_70;
  undefined4 local_6c;
  undefined4 local_68;
  int local_64;
  ForElementType<FSetElementId> local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_3a8;
  pFVar1 = &this->KeyMappingCS;
  local_360.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_360.Data.ArrayNum = 0;
  local_360.Data.ArrayMax = 0;
  local_2e0 = this;
  local_2d0 = (LPCRITICAL_SECTION)pFVar1;
  local_240 = param_1;
  if ((pFVar1 == (FWindowsRecursiveMutex *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("Mutex",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                          ,0x1b,L""), bVar12)) {
    pcVar7 = (code *)swi(3);
    uVar13 = (*pcVar7)();
    return (bool)uVar13;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)pFVar1);
  pFVar1 = &this->KeysToMetaDataCS;
  local_310 = (LPCRITICAL_SECTION)pFVar1;
  if ((pFVar1 == (FWindowsRecursiveMutex *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("Mutex",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                          ,0x1b,L""), bVar12)) {
    pcVar7 = (code *)swi(3);
    uVar13 = (*pcVar7)();
    return (bool)uVar13;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)pFVar1);
  local_98._0_8_ = 0;
  pTVar30 = &this->KeysToMetaData;
  local_98._8_8_ = 0;
  puVar2 = &(this->KeysToMetaData).field_0x10;
  local_78 = (uint *)0x0;
  local_70 = 0;
  local_6c = 0x80;
  local_68 = 0xffffffff;
  local_64 = 0;
  local_58 = (ForElementType<FSetElementId>)0x0;
  local_50 = 0;
  local_2a8._padding_._0_4_ = 0;
  local_2a8._padding_._4_4_ = 1;
  local_2a8.UnvisitedBitMask = 0xffffffff;
  local_2a8.CurrentBitIndex = 0;
  local_2a8.BaseBitIndex = 0;
  local_2d8 = pTVar30;
  local_2a8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
  if (*(int *)&(this->KeysToMetaData).field_0x28 != 0) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_2a8);
  }
  uStack_348 = CONCAT44(local_2a8._padding_._4_4_,(undefined4)local_2a8._padding_);
  uStack_334 = local_2a8.CurrentBitIndex;
  uStack_338 = local_2a8.UnvisitedBitMask;
  uStack_32c = local_2a8._28_4_;
  uStack_330 = local_2a8.BaseBitIndex;
  local_328 = *(int *)&(this->KeysToMetaData).field_0x8 - *(int *)&(this->KeysToMetaData).field_0x34
  ;
  pTStack_340 = local_2a8.Array;
  uStack_1e0 = CONCAT44(uStack_324,local_328);
  TStack_200.Array = local_2a8.Array;
  local_350 = pTVar30;
  local_208 = pTVar30;
  TStack_200._padding_ = uStack_348;
  TStack_200._16_8_ = _uStack_338;
  TStack_200._24_8_ = _uStack_330;
  pTVar17 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
            TConstSetBitIterator<FDefaultBitArrayAllocator>
                      (&local_118,(TBitArray<FDefaultBitArrayAllocator> *)puVar2,
                       *(int *)&(this->KeysToMetaData).field_0x28);
  uStack_348 = pTVar17->_padding_;
  pTVar33 = pTVar17->Array;
  uVar8._0_4_ = pTVar17->UnvisitedBitMask;
  uVar8._4_4_ = pTVar17->CurrentBitIndex;
  uStack_330 = pTVar17->BaseBitIndex;
  uStack_32c = *(undefined4 *)&pTVar17->field_0x1c;
  pTStack_340 = pTVar33;
  _uStack_338 = uVar8;
  while( true ) {
    pTVar9 = local_208;
    if (*(int *)&local_208->field_0x8 - *(int *)&local_208->field_0x34 != (int)uStack_1e0) {
      local_368 = 0;
      `TSparseArray<TSparseSetElement<TTuple<FTextKey,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_368);
    }
    if (((TStack_200.CurrentBitIndex == uVar8._4_4_) && (TStack_200.Array == pTVar33)) &&
       (pTVar9 == pTVar30)) break;
    uVar15 = 1;
    iVar14 = 0;
    lVar27 = (longlong)TStack_200.CurrentBitIndex * 0x60 + *(longlong *)pTVar9;
    iVar23 = *(int *)(lVar27 + 0x30);
    pTVar4 = (TBitArray<FDefaultBitArrayAllocator> *)(lVar27 + 0x18);
    local_350 = (TMap<FTextKey,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextKey,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>,0>_>
                 *)(lVar27 + 8);
    uStack_334 = iVar14;
    uStack_330 = iVar14;
    if (iVar23 != 0) {
      pTVar24 = pTVar4;
      if (*(TBitArray<FDefaultBitArrayAllocator> **)(lVar27 + 0x28) !=
          (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar24 = *(TBitArray<FDefaultBitArrayAllocator> **)(lVar27 + 0x28);
      }
      uVar29 = *(uint *)(pTVar24->AllocatorInstance).InlineData;
      while (uVar29 == 0) {
        lVar22 = (longlong)iVar14;
        uStack_330 = uStack_330 + 0x20;
        iVar14 = iVar14 + 1;
        uStack_334 = iVar23;
        if ((int)(iVar23 + -1 + (iVar23 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_141754dce;
        uVar29 = *(uint *)((pTVar24->AllocatorInstance).InlineData + lVar22 * 4 + 4);
      }
      uVar15 = -uVar29 & uVar29;
      uVar3 = (ulonglong)uVar15 * 2 + 1;
      lVar22 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar22 == 0; lVar22 = lVar22 + -1) {
        }
      }
      local_268 = (int)lVar22;
      uStack_334 = local_268 + -1 + uStack_330;
      if (iVar23 < (int)uStack_334) {
        uStack_334 = iVar23;
      }
    }
LAB_141754dce:
    local_328 = *(int *)(lVar27 + 0x10) - *(int *)(lVar27 + 0x3c);
    uVar29 = *(uint *)(lVar27 + 0x30);
    uVar32 = uVar29 & 0xffffffe0;
    uStack_348 = CONCAT44(uVar15,iVar14);
    uStack_338 = 0xffffffff;
    uStack_32c = local_dc;
    TStack_230._padding_ = uStack_348;
    iVar14 = (int)uVar29 >> 5;
    uStack_210 = CONCAT44(uStack_324,local_328);
    TStack_230.UnvisitedBitMask = 0xffffffff;
    TStack_230.CurrentBitIndex = uStack_334;
    TStack_230.BaseBitIndex = uStack_330;
    TStack_230._28_4_ = local_dc;
    pTStack_340 = pTVar4;
    local_308 = (ForElementType<unsigned_int>)local_350;
    local_238 = local_350;
    TStack_230.Array = pTVar4;
    if ((((int)uVar29 < 0) || (iVar23 < (int)uVar29)) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar12)) {
      pcVar7 = (code *)swi(3);
      uVar13 = (*pcVar7)();
      return (bool)uVar13;
    }
    FVar25 = local_308;
    uVar15 = *(uint *)(lVar27 + 0x30);
    if (uVar29 != uVar15) {
      pTVar24 = pTVar4;
      if (*(TBitArray<FDefaultBitArrayAllocator> **)(lVar27 + 0x28) !=
          (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar24 = *(TBitArray<FDefaultBitArrayAllocator> **)(lVar27 + 0x28);
      }
      uVar29 = -1 << ((byte)uVar29 & 0x1f) &
               *(uint *)((pTVar24->AllocatorInstance).InlineData + (longlong)iVar14 * 4);
      while (uVar29 == 0) {
        lVar27 = (longlong)iVar14;
        uVar32 = uVar32 + 0x20;
        iVar14 = iVar14 + 1;
        uVar29 = uVar15;
        if ((int)((uVar15 - 1) + ((int)(uVar15 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14)
        goto LAB_141754f00;
        uVar29 = *(uint *)((pTVar24->AllocatorInstance).InlineData + lVar27 * 4 + 4);
      }
      uVar3 = (ulonglong)(-uVar29 & uVar29) * 2 + 1;
      lVar27 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar27 == 0; lVar27 = lVar27 + -1) {
        }
      }
      local_264 = (int)lVar27;
      uVar29 = local_264 + -1 + uVar32;
      if ((int)uVar15 < (int)uVar29) {
        uVar29 = uVar15;
      }
    }
LAB_141754f00:
    while( true ) {
      pTVar30 = local_238;
      if (*(int *)&local_238->field_0x8 - *(int *)&local_238->field_0x34 != (int)uStack_210) {
        local_367 = 0;
        `TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_367);
      }
      if (((TStack_230.CurrentBitIndex == uVar29) && (TStack_230.Array == pTVar4)) &&
         ((ForElementType<unsigned_int>)pTVar30 == FVar25)) break;
      TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName_const_&>
                ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)local_98,&local_260,
                 (bool *)((longlong)TStack_230.CurrentBitIndex * 0x20 + *(longlong *)pTVar30));
      TStack_230.UnvisitedBitMask = TStack_230.UnvisitedBitMask & ~TStack_230._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_230);
    }
    TStack_200.UnvisitedBitMask = TStack_200.UnvisitedBitMask & ~TStack_200._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_200);
    pTVar30 = local_2d8;
  }
  ::FString::AppendChars(&local_360,L"Key,SourceString",0x10);
  lpCriticalSection = local_310;
  local_288.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
  local_288._padding_._0_4_ = 0;
  local_288._padding_._4_4_ = 1;
  local_288.UnvisitedBitMask = 0xffffffff;
  local_288.CurrentBitIndex = 0;
  local_288.BaseBitIndex = 0;
  if (local_70 != 0) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_288);
  }
  uVar15 = local_70;
  uStack_348 = CONCAT44(local_288._padding_._4_4_,(undefined4)local_288._padding_);
  local_350 = (TMap<FTextKey,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextKey,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>,0>_>
               *)local_98;
  uStack_334 = local_288.CurrentBitIndex;
  uStack_338 = local_288.UnvisitedBitMask;
  uStack_32c = local_288._28_4_;
  uStack_330 = local_288.BaseBitIndex;
  pTVar33 = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
  bVar21 = (byte)local_70 & 0x1f;
  local_328 = local_98._8_4_ - local_64;
  local_2c8._padding_._0_4_ = (int)local_70 >> 5;
  local_2c8._padding_._4_4_ = 1 << bVar21;
  local_2c8.UnvisitedBitMask = -1 << bVar21;
  pTStack_340 = local_288.Array;
  local_2c8.BaseBitIndex = local_70 & 0xffffffe0;
  local_2c8.CurrentBitIndex = local_70;
  uStack_1b0 = CONCAT44(uStack_324,local_328);
  TStack_1d0.Array = local_288.Array;
  local_2c8.Array = pTVar33;
  local_1d8 = (longlong *)local_350;
  TStack_1d0._padding_ = uStack_348;
  TStack_1d0._16_8_ = _uStack_338;
  TStack_1d0._24_8_ = _uStack_330;
  if (((int)local_70 < 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar12)) {
    pcVar7 = (code *)swi(3);
    uVar13 = (*pcVar7)();
    return (bool)uVar13;
  }
  if (uVar15 != local_70) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_2c8);
    pTVar33 = local_2c8.Array;
    uVar15 = local_2c8.CurrentBitIndex;
  }
  while( true ) {
    plVar10 = local_1d8;
    if ((int)local_1d8[1] - *(int *)((longlong)local_1d8 + 0x34) != (int)uStack_1b0) {
      local_366 = 0;
      `TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_366);
    }
    lVar27 = (longlong)TStack_1d0.CurrentBitIndex;
    if (((TStack_1d0.CurrentBitIndex == uVar15) && (TStack_1d0.Array == pTVar33)) &&
       (plVar10 == (longlong *)local_98)) break;
    lVar22 = *plVar10;
    ::FString::AppendChars(&local_360,L",",1);
    pFVar18 = ::FName::ToString((FName *)(lVar27 * 0x10 + lVar22),&local_138);
    iVar23 = (pFVar18->Data).ArrayNum;
    iVar14 = iVar23 + -1;
    if (iVar23 == 0) {
      iVar14 = 0;
    }
    ::FString::AppendChars(&local_360,(wchar_t *)(pFVar18->Data).AllocatorInstance.Data,iVar14);
    if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_138.Data.AllocatorInstance.Data);
    }
    TStack_1d0.UnvisitedBitMask = TStack_1d0.UnvisitedBitMask & ~TStack_1d0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1d0);
  }
  ::FString::AppendChars(&local_360,L"\n",1);
  iVar14 = 0;
  iVar23 = *(int *)&(local_2e0->KeysToEntries).field_0x28;
  local_308 = (ForElementType<unsigned_int>)&(local_2e0->KeysToEntries).field_0x10;
  uVar15 = 1;
  uStack_330 = 0;
  local_350 = (TMap<FTextKey,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextKey,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>,0>_>
               *)&local_2e0->KeysToEntries;
  uStack_334 = uStack_330;
  if (iVar23 != 0) {
    puVar26 = *(uint **)&(local_2e0->KeysToEntries).field_0x20;
    if (puVar26 == (uint *)0x0) {
      puVar26 = (uint *)&(local_2e0->KeysToEntries).field_0x10;
    }
    uVar29 = *puVar26;
    uStack_330 = 0;
    while (uVar29 == 0) {
      lVar27 = (longlong)iVar14;
      uStack_330 = uStack_330 + 0x20;
      iVar14 = iVar14 + 1;
      uStack_334 = iVar23;
      if ((int)(iVar23 + -1 + (iVar23 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_141755232;
      uVar29 = puVar26[lVar27 + 1];
    }
    uVar15 = -uVar29 & uVar29;
    uVar3 = (ulonglong)uVar15 * 2 + 1;
    lVar27 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar27 == 0; lVar27 = lVar27 + -1) {
      }
    }
    local_260.Number = (uint)lVar27;
    uStack_334 = (local_260.Number - 1) + uStack_330;
    if (iVar23 < (int)uStack_334) {
      uStack_334 = iVar23;
    }
  }
LAB_141755232:
  pTStack_340 = (TBitArray<FDefaultBitArrayAllocator> *)&(local_2e0->KeysToEntries).field_0x10;
  uVar29 = *(uint *)&(local_2e0->KeysToEntries).field_0x28;
  local_328 = *(int *)&(local_2e0->KeysToEntries).field_0x8 -
              *(int *)&(local_2e0->KeysToEntries).field_0x34;
  uVar32 = uVar29 & 0xffffffe0;
  uStack_348 = CONCAT44(uVar15,iVar14);
  uStack_338 = 0xffffffff;
  uStack_32c = local_bc;
  TStack_170._padding_ = uStack_348;
  iVar14 = (int)uVar29 >> 5;
  uStack_150 = CONCAT44(uStack_324,local_328);
  TStack_170.BaseBitIndex = uStack_330;
  TStack_170._28_4_ = local_bc;
  TStack_170.UnvisitedBitMask = 0xffffffff;
  TStack_170.CurrentBitIndex = uStack_334;
  local_2e0 = (FStringTable *)local_350;
  local_178 = (TMap<FTextKey,TSharedPtr<FStringTableEntry,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextKey,TSharedPtr<FStringTableEntry,1>,0>_>
               *)local_350;
  TStack_170.Array = pTStack_340;
  local_310._0_4_ = uVar29;
  if ((((int)uVar29 < 0) || (iVar23 < (int)uVar29)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar12)) {
    pcVar7 = (code *)swi(3);
    uVar13 = (*pcVar7)();
    return (bool)uVar13;
  }
  uVar15 = *(int *)((longlong)local_308 + 0x18);
  uVar16 = (uint)local_310;
  if (uVar29 != uVar15) {
    FVar25 = *(ForElementType<unsigned_int> *)((longlong)local_308 + 0x10);
    if (*(ForElementType<unsigned_int> *)((longlong)local_308 + 0x10) ==
        (ForElementType<unsigned_int>)0x0) {
      FVar25 = local_308;
    }
    uVar29 = -1 << ((byte)uVar29 & 0x1f) & *(uint *)((longlong)FVar25 + (longlong)iVar14 * 4);
    while (uVar29 == 0) {
      lVar27 = (longlong)iVar14;
      uVar32 = uVar32 + 0x20;
      iVar14 = iVar14 + 1;
      uVar16 = uVar15;
      local_310._0_4_ = uVar15;
      if ((int)((uVar15 - 1) + ((int)(uVar15 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14)
      goto LAB_141755370;
      uVar29 = *(uint *)((undefined1 *)((longlong)FVar25 + 4) + lVar27 * 4);
    }
    uVar3 = (ulonglong)(-uVar29 & uVar29) * 2 + 1;
    lVar27 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar27 == 0; lVar27 = lVar27 + -1) {
      }
    }
    local_258 = (int)lVar27;
    uVar16 = (uVar32 - 1) + local_258;
    local_310._0_4_ = uVar16;
    if ((int)uVar15 < (int)uVar16) {
      uVar16 = uVar15;
      local_310._0_4_ = uVar15;
    }
  }
LAB_141755370:
  do {
    pTVar11 = local_178;
    pwVar28 = L"";
    if (*(int *)&local_178->field_0x8 - *(int *)&local_178->field_0x34 != (int)uStack_150) {
      local_365 = 0;
      `TSparseArray<TSparseSetElement<TTuple<FTextKey,TSharedPtr<FStringTableEntry,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_365);
    }
    lpCriticalSection_00 = local_2d0;
    if (((TStack_170.CurrentBitIndex == uVar16) &&
        ((ForElementType<unsigned_int>)TStack_170.Array == local_308)) &&
       ((FStringTable *)pTVar11 == local_2e0)) {
      local_50 = 0;
      if (local_58 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_58);
      }
      TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_98);
      if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
        LeaveCriticalSection(lpCriticalSection);
      }
      if (lpCriticalSection_00 != (LPCRITICAL_SECTION)0x0) {
        LeaveCriticalSection(lpCriticalSection_00);
      }
      pIVar20 = IFileManager::Get();
      if ((local_240->Data).ArrayNum != 0) {
        pwVar28 = (wchar_t *)(local_240->Data).AllocatorInstance.Data;
      }
      local_148 = local_360.Data.AllocatorInstance.Data;
      iStack_140 = local_360.Data.ArrayNum + -1;
      if (local_360.Data.ArrayNum == 0) {
        iStack_140 = 0;
      }
      local_128._12_4_ = uStack_13c;
      local_128.Size = iStack_140;
      local_128.DataPtr = (wchar_t *)local_360.Data.AllocatorInstance.Data;
      bVar12 = FFileHelper::SaveStringToFile(&local_128,pwVar28,AutoDetect,pIVar20,0);
      if (local_360.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_360.Data.AllocatorInstance.Data);
      }
      return bVar12;
    }
    pFVar31 = (FTextKey *)((longlong)TStack_170.CurrentBitIndex * 0x20 + *(longlong *)pTVar11);
    local_2f0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_2f0.Data.ArrayNum = 0;
    local_2f0.Data.ArrayMax = 0;
    local_248 = pFVar31;
    FTextKey::AppendString(pFVar31,&local_2f0);
    ::FString::ReplaceCharWithEscapedCharInline
              (&local_2f0,(TArray<wchar_t,TSizedDefaultAllocator<32>_> *)0x0);
    ::FString::ReplaceInline(&local_2f0,L"\"",L"\"\"",IgnoreCase);
    if ((*(longlong *)(pFVar31 + 2) == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar12)) {
      pcVar7 = (code *)swi(3);
      uVar13 = (*pcVar7)();
      return (bool)uVar13;
    }
    local_300.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_300.Data.ArrayNum = *(int *)(*(longlong *)(pFVar31 + 2) + 0x18);
    lVar27 = (longlong)local_300.Data.ArrayNum;
    pvVar5 = *(void **)(*(longlong *)(pFVar31 + 2) + 0x10);
    if (local_300.Data.ArrayNum == 0) {
      local_300.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_300.Data.ArrayNum,0,(ForAnyElementType *)&local_300,
                 local_300.Data.ArrayNum,&local_300.Data.ArrayMax);
      memcpy(local_300.Data.AllocatorInstance.Data,pvVar5,lVar27 * 2);
    }
    ::FString::ReplaceCharWithEscapedCharInline
              (&local_300,(TArray<wchar_t,TSizedDefaultAllocator<32>_> *)0x0);
    ::FString::ReplaceInline(&local_300,L"\"",L"\"\"",IgnoreCase);
    ::FString::AppendChars(&local_360,L"\"",1);
    iVar23 = local_2f0.Data.ArrayNum + -1;
    if (local_2f0.Data.ArrayNum == 0) {
      iVar23 = 0;
    }
    ::FString::AppendChars(&local_360,(wchar_t *)local_2f0.Data.AllocatorInstance.Data,iVar23);
    ::FString::AppendChars(&local_360,L"\"",1);
    ::FString::AppendChars(&local_360,L",",1);
    ::FString::AppendChars(&local_360,L"\"",1);
    iVar23 = local_300.Data.ArrayNum + -1;
    if (local_300.Data.ArrayNum == 0) {
      iVar23 = 0;
    }
    ::FString::AppendChars(&local_360,(wchar_t *)local_300.Data.AllocatorInstance.Data,iVar23);
    ::FString::AppendChars(&local_360,L"\"",1);
    uVar29 = local_70;
    uVar15 = 0;
    uVar32 = 1;
    uStack_334 = uVar15;
    uStack_330 = uVar15;
    if (local_70 != 0) {
      puVar26 = (uint *)(local_98 + 0x10);
      if (local_78 != (uint *)0x0) {
        puVar26 = local_78;
      }
      uVar16 = *puVar26;
      uStack_330 = 0;
      uVar15 = 0;
      while (uVar16 == 0) {
        lVar27 = (longlong)(int)uVar15;
        uStack_330 = uStack_330 + 0x20;
        uVar15 = uVar15 + 1;
        uStack_334 = local_70;
        if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar15)
        goto LAB_1417555e0;
        uVar16 = (puVar26 + 1)[lVar27];
      }
      uVar32 = -uVar16 & uVar16;
      uVar3 = (ulonglong)uVar32 * 2 + 1;
      lVar27 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar27 == 0; lVar27 = lVar27 + -1) {
        }
      }
      local_254 = (int)lVar27;
      uStack_334 = (uStack_330 - 1) + local_254;
      if ((int)local_70 < (int)uStack_334) {
        uStack_334 = local_70;
      }
    }
LAB_1417555e0:
    local_350 = (TMap<FTextKey,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextKey,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>,0>_>
                 *)local_98;
    pTStack_340 = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
    uVar16 = local_70 & 0xffffffe0;
    local_328 = local_98._8_4_ - local_64;
    uStack_348 = CONCAT44(uVar32,uVar15);
    uStack_338 = 0xffffffff;
    uStack_32c = local_9c;
    TStack_1a0._padding_ = uStack_348;
    iVar23 = (int)local_70 >> 5;
    uStack_180 = CONCAT44(uStack_324,local_328);
    bVar21 = (byte)local_70;
    TStack_1a0.UnvisitedBitMask = 0xffffffff;
    TStack_1a0.CurrentBitIndex = uStack_334;
    TStack_1a0.BaseBitIndex = uStack_330;
    TStack_1a0._28_4_ = local_9c;
    local_1a8 = (TMap<FTextKey,TSharedPtr<FStringTableEntry,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextKey,TSharedPtr<FStringTableEntry,1>,0>_>
                 *)local_350;
    TStack_1a0.Array = pTStack_340;
    if (((int)local_70 < 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar12)) {
      pcVar7 = (code *)swi(3);
      uVar13 = (*pcVar7)();
      return (bool)uVar13;
    }
    pFVar31 = local_248;
    if (uVar29 != local_70) {
      puVar26 = (uint *)(local_98 + 0x10);
      if (local_78 != (uint *)0x0) {
        puVar26 = local_78;
      }
      uVar15 = -1 << (bVar21 & 0x1f) & puVar26[iVar23];
      while (uVar15 == 0) {
        lVar27 = (longlong)iVar23;
        uVar16 = uVar16 + 0x20;
        iVar23 = iVar23 + 1;
        uVar29 = local_70;
        if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar23)
        goto LAB_141755722;
        uVar15 = (puVar26 + 1)[lVar27];
      }
      uVar3 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
      lVar27 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar27 == 0; lVar27 = lVar27 + -1) {
        }
      }
      local_250 = (int)lVar27;
      uVar29 = local_250 + -1 + uVar16;
      if ((int)local_70 < (int)uVar29) {
        uVar29 = local_70;
      }
    }
LAB_141755722:
    while( true ) {
      pTVar11 = local_1a8;
      if (*(int *)&local_1a8->field_0x8 - *(int *)&local_1a8->field_0x34 != (int)uStack_180) {
        local_364[0] = 0;
        `TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_364);
      }
      if (((TStack_1a0.CurrentBitIndex == uVar29) &&
          (TStack_1a0.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10))) &&
         (pTVar11 ==
          (TMap<FTextKey,TSharedPtr<FStringTableEntry,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextKey,TSharedPtr<FStringTableEntry,1>,0>_>
           *)local_98)) break;
      FVar6 = *(FName *)(*(longlong *)pTVar11 + (longlong)TStack_1a0.CurrentBitIndex * 0x10);
      if ((lpCriticalSection == (LPCRITICAL_SECTION)0x0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("Mutex",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                              ,0x1b,L""), bVar12)) {
        pcVar7 = (code *)swi(3);
        uVar13 = (*pcVar7)();
        return (bool)uVar13;
      }
      EnterCriticalSection(lpCriticalSection);
      this_00 = (TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
                 *)TMapBase<FTextKey,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextKey,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>,0>_>
                   ::Find((TMapBase<FTextKey,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextKey,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>,0>_>
                           *)local_2d8,pFVar31);
      if (this_00 ==
          (TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
           *)0x0) {
        local_320.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_320.Data.ArrayNum = 0;
        local_320.Data.ArrayMax = 0;
      }
      else {
        pTVar19 = TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
                  ::Find(this_00,FVar6);
        local_320.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        if (pTVar19 == (TTuple<FName,FString> *)0x0) {
          local_320.Data.ArrayNum = 0;
          local_320.Data.ArrayMax = 0;
        }
        else {
          iVar23 = *(int *)&pTVar19->field_0x10;
          pvVar5 = *(void **)&pTVar19->field_0x8;
          local_320.Data.ArrayNum = iVar23;
          if (iVar23 == 0) {
            local_320.Data.ArrayNum = 0;
            local_320.Data.ArrayMax = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,iVar23,0,(ForAnyElementType *)&local_320,iVar23,&local_320.Data.ArrayMax)
            ;
            memcpy(local_320.Data.AllocatorInstance.Data,pvVar5,(longlong)iVar23 * 2);
          }
        }
      }
      if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
        LeaveCriticalSection(lpCriticalSection);
      }
      ::FString::ReplaceInline(&local_320,L"\"",L"\"\"",IgnoreCase);
      ::FString::AppendChars(&local_360,L",",1);
      ::FString::AppendChars(&local_360,L"\"",1);
      iVar23 = local_320.Data.ArrayNum + -1;
      if (local_320.Data.ArrayNum == 0) {
        iVar23 = 0;
      }
      ::FString::AppendChars(&local_360,(wchar_t *)local_320.Data.AllocatorInstance.Data,iVar23);
      ::FString::AppendChars(&local_360,L"\"",1);
      if (local_320.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_320.Data.AllocatorInstance.Data);
      }
      TStack_1a0.UnvisitedBitMask = TStack_1a0.UnvisitedBitMask & ~TStack_1a0._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1a0);
    }
    ::FString::AppendChars(&local_360,L"\n",1);
    uVar16 = (uint)local_310;
    if (local_300.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_300.Data.AllocatorInstance.Data);
    }
    if (local_2f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2f0.Data.AllocatorInstance.Data);
    }
    TStack_170.UnvisitedBitMask = TStack_170.UnvisitedBitMask & ~TStack_170._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_170);
  } while( true );
}

// FindEntry @ 141756d90

TSharedPtr<FStringTableEntry_const_,1> * __thiscall
FStringTable::FindEntry
          (FStringTable *this,TSharedPtr<FStringTableEntry_const_,1> *__return_storage_ptr__,
          FTextKey *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  code *pcVar1;
  bool bVar2;
  TSharedPtr<FStringTableEntry_const_,1> *pTVar3;
  TTuple<FTextKey,TSharedPtr<FStringTableEntry,1>_> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  FStringTableEntry *pFVar6;
  
  lpCriticalSection = &this->KeyMappingCS;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TSharedPtr<FStringTableEntry_const_,1> *)(*pcVar1)();
      return pTVar3;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pTVar4 = TSet<TTuple<FTextKey,TSharedPtr<FStringTableEntry,1>_>,TDefaultMapHashableKeyFuncs<FTextKey,TSharedPtr<FStringTableEntry,1>,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FTextKey,TSharedPtr<FStringTableEntry,1>_>,TDefaultMapHashableKeyFuncs<FTextKey,TSharedPtr<FStringTableEntry,1>,0>,FDefaultSetAllocator>
                   *)&this->KeysToEntries,param_1);
  if (pTVar4 == (TTuple<FTextKey,TSharedPtr<FStringTableEntry,1>_> *)0x0) {
    pTVar5 = (TReferenceControllerBase<1> *)0x0;
    pFVar6 = (FStringTableEntry *)0x0;
  }
  else {
    pTVar5 = *(TReferenceControllerBase<1> **)&pTVar4->field_0x10;
    pFVar6 = *(FStringTableEntry **)&pTVar4->field_0x8;
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  __return_storage_ptr__->Object = pFVar6;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar5;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return __return_storage_ptr__;
}

// FindKey @ 141756e50

bool __thiscall
FStringTable::FindKey
          (FStringTable *this,TSharedRef<FStringTableEntry_const_,1> *param_1,FString *param_2)

{
  int iVar1;
  code *pcVar2;
  FTextKey FVar3;
  bool bVar4;
  undefined1 uVar5;
  FTextKeyState *SRWLock;
  FKeyData *pFVar6;
  FTextKey local_res20 [2];
  
  local_res20[0].Index = -1;
  bVar4 = FindKey(this,param_1,local_res20);
  if (!bVar4) {
    return false;
  }
  ::FString::Reset(param_2,0);
  FVar3.Index = local_res20[0].Index;
  if (local_res20[0].Index != -1) {
    SRWLock = FTextKeyState::GetState();
    if ((SRWLock == (FTextKeyState *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Mutex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                           ,0x1c,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
    AcquireSRWLockShared((PSRWLOCK)SRWLock);
    pFVar6 = TChunkedPackedArray<FTextKeyState::FKeyData,16>::Get
                       (&(SRWLock->KeyDataAllocations).Elements,FVar3.Index);
    iVar1 = pFVar6->StrLen;
    if (iVar1 < 0) {
      if ((iVar1 != -1) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsGuid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Internationalization\\TextKey.cpp"
                             ,0x157,L"AsGuid called on a FKeyData that doesn\'t reference a GUID!"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
      FGuid::AppendString(pFVar6->DataPtr,param_2,Digits);
    }
    else {
      ::FString::AppendChars(param_2,pFVar6->DataPtr,iVar1);
    }
    if (SRWLock != (FTextKeyState *)0x0) {
      ReleaseSRWLockShared((PSRWLOCK)SRWLock);
    }
  }
  return true;
}

// FindKey @ 141756f70

/* WARNING: Type propagation algorithm not settling */

bool __thiscall
FStringTable::FindKey
          (FStringTable *this,TSharedRef<FStringTableEntry_const_,1> *param_1,FTextKey *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  undefined1 *puVar1;
  ulonglong uVar2;
  uint uVar3;
  FStringTableEntry *pFVar4;
  code *pcVar5;
  TSharedRef<FStringTableEntry_const_,1> *pTVar6;
  undefined1 uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  int *piVar13;
  FStringTable *pFVar14;
  uint uVar15;
  int iVar16;
  FStringTable *pFVar17;
  uint uVar18;
  undefined1 *puVar20;
  FStringTable *pFVar21;
  uint *puVar22;
  bool bVar23;
  undefined1 local_res8 [8];
  TSharedRef<FStringTableEntry_const_,1> *local_res10;
  FTextKey *local_res18;
  int local_res20;
  undefined4 local_ac;
  undefined4 uStack_7c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  undefined8 uStack_50;
  FStringTable *pFVar19;
  
  pFVar4 = param_1->Object;
  pFVar17 = (FStringTable *)0x0;
  uVar15 = 0;
  pFVar19 = (FStringTable *)(pFVar4->OwnerTable).WeakReferenceCount.ReferenceController;
  pFVar14 = pFVar17;
  pFVar21 = pFVar19;
  if (pFVar19 != (FStringTable *)0x0) {
    iVar16 = (int)pFVar19->_padding_;
    do {
      pFVar14 = (FStringTable *)0x0;
      pFVar21 = pFVar17;
      if (iVar16 == 0) goto LAB_141756fc6;
      LOCK();
      iVar8 = (int)pFVar19->_padding_;
      bVar23 = iVar16 == iVar8;
      if (bVar23) {
        *(int *)&pFVar19->_padding_ = iVar16 + 1;
        iVar8 = iVar16;
      }
      UNLOCK();
      iVar16 = iVar8;
    } while (!bVar23);
    pFVar14 = (pFVar4->OwnerTable).Object;
    pFVar21 = pFVar19;
  }
LAB_141756fc6:
  local_res10 = param_1;
  local_res18 = param_2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar21);
  if (pFVar14 == this) {
    lpCriticalSection = &this->KeyMappingCS;
    if ((lpCriticalSection == (FWindowsRecursiveMutex *)0x0) &&
       (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                           ("Mutex",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                            ,0x1b,L""), bVar23)) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    uVar3 = *(uint *)&(this->KeysToEntries).field_0x28;
    puVar1 = &(this->KeysToEntries).field_0x10;
    uVar9 = 1;
    uVar18 = 0;
    uVar10 = uVar15;
    if (uVar3 != 0) {
      puVar22 = *(uint **)&(this->KeysToEntries).field_0x20;
      if (puVar22 == (uint *)0x0) {
        puVar22 = (uint *)puVar1;
      }
      uVar10 = *puVar22;
      pFVar19 = pFVar17;
      uVar18 = 0;
      uVar15 = 0;
      while (uVar10 == 0) {
        iVar16 = (int)pFVar17;
        uVar18 = (int)pFVar19 + 0x20;
        pFVar19 = (FStringTable *)(ulonglong)uVar18;
        uVar15 = iVar16 + 1;
        pFVar17 = (FStringTable *)(ulonglong)uVar15;
        uVar10 = uVar3;
        if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar15)
        goto LAB_1417570ad;
        uVar10 = puVar22[(longlong)iVar16 + 1];
      }
      uVar9 = -uVar10 & uVar10;
      uVar2 = (ulonglong)uVar9 * 2 + 1;
      lVar12 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      local_res20 = (int)lVar12;
      uVar10 = local_res20 + -1 + uVar18;
      if ((int)uVar3 < (int)uVar10) {
        uVar10 = uVar3;
      }
    }
LAB_1417570ad:
    uVar11 = *(uint *)&(this->KeysToEntries).field_0x28;
    TStack_70._padding_ = CONCAT44(uVar9,uVar15);
    uVar15 = uVar11 & 0xffffffe0;
    TStack_70.CurrentBitIndex = uVar10;
    TStack_70.UnvisitedBitMask = 0xffffffff;
    iVar16 = (int)uVar11 >> 5;
    TStack_70._28_4_ = local_ac;
    TStack_70.BaseBitIndex = uVar18;
    uStack_50 = CONCAT44(uStack_7c,
                         *(int *)&(this->KeysToEntries).field_0x8 -
                         *(int *)&(this->KeysToEntries).field_0x34);
    TStack_70.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if ((((int)uVar11 < 0) || ((int)uVar3 < (int)uVar11)) &&
       (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar23)) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
    pTVar6 = local_res10;
    uVar3 = *(uint *)&(this->KeysToEntries).field_0x28;
    if (uVar11 != uVar3) {
      puVar20 = *(undefined1 **)&(this->KeysToEntries).field_0x20;
      if (puVar20 == (undefined1 *)0x0) {
        puVar20 = puVar1;
      }
      uVar18 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar20 + (longlong)iVar16 * 4);
      while (uVar18 == 0) {
        lVar12 = (longlong)iVar16;
        uVar15 = uVar15 + 0x20;
        iVar16 = iVar16 + 1;
        uVar11 = uVar3;
        if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar16)
        goto LAB_1417571c0;
        uVar18 = *(uint *)(puVar20 + lVar12 * 4 + 4);
      }
      uVar2 = (ulonglong)(-uVar18 & uVar18) * 2 + 1;
      lVar12 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      uVar11 = (int)lVar12 + -1 + uVar15;
      if ((int)uVar3 < (int)uVar11) {
        uVar11 = uVar3;
      }
    }
LAB_1417571c0:
    while( true ) {
      if (*(int *)&(this->KeysToEntries).field_0x8 - *(int *)&(this->KeysToEntries).field_0x34 !=
          (int)uStack_50) {
        `TSparseArray<TSparseSetElement<TTuple<FTextKey,TSharedPtr<FStringTableEntry,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if ((TStack_70.CurrentBitIndex == uVar11) &&
         (TStack_70.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
      piVar13 = (int *)((longlong)TStack_70.CurrentBitIndex * 0x20 +
                       *(longlong *)&this->KeysToEntries);
      pFVar4 = *(FStringTableEntry **)(piVar13 + 2);
      if ((pFVar4 != (FStringTableEntry *)0x0) && (pFVar4 == pTVar6->Object)) {
        local_res18->Index = *piVar13;
        if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
          LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        }
        return true;
      }
      TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
    }
    if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
  }
  return false;
}

// GetMetaData @ 14175f7c0

FString * __thiscall
FStringTable::GetMetaData
          (FStringTable *this,FString *__return_storage_ptr__,FTextKey *param_1,FName param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
  *this_00;
  TTuple<FName,FString> *pTVar4;
  
  lpCriticalSection = &this->KeysToMetaDataCS;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FString *)(*pcVar1)();
      return pFVar3;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  this_00 = (TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
             *)TMapBase<FTextKey,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextKey,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>,0>_>
               ::Find((TMapBase<FTextKey,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextKey,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>,0>_>
                       *)&this->KeysToMetaData,param_1);
  if (this_00 !=
      (TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
       *)0x0) {
    pTVar4 = TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
             ::Find(this_00,param_2);
    if (pTVar4 != (TTuple<FName,FString> *)0x0) {
      ::FString::FString(__return_storage_ptr__,(FString *)&pTVar4->field_0x8);
      goto LAB_14175f85c;
    }
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
LAB_14175f85c:
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return __return_storage_ptr__;
}

// GetNamespace @ 14175fc00

FString * __thiscall FStringTable::GetNamespace(FStringTable *this,FString *__return_storage_ptr__)

{
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  FTextKey::AppendString(&this->TableNamespace,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetOwnerAsset @ 141760710

UStringTable * __thiscall FStringTable::GetOwnerAsset(FStringTable *this)

{
  return this->OwnerAsset;
}

// GetSourceString @ 141760e50

bool __thiscall FStringTable::GetSourceString(FStringTable *this,FTextKey *param_1,FString *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  TTuple<FTextKey,TSharedPtr<FStringTableEntry,1>_> *pTVar5;
  TReferenceControllerBase<1> *pTVar6;
  
  lpCriticalSection = &this->KeyMappingCS;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pTVar5 = TSet<TTuple<FTextKey,TSharedPtr<FStringTableEntry,1>_>,TDefaultMapHashableKeyFuncs<FTextKey,TSharedPtr<FStringTableEntry,1>,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FTextKey,TSharedPtr<FStringTableEntry,1>_>,TDefaultMapHashableKeyFuncs<FTextKey,TSharedPtr<FStringTableEntry,1>,0>,FDefaultSetAllocator>
                   *)&this->KeysToEntries,param_1);
  if (pTVar5 == (TTuple<FTextKey,TSharedPtr<FStringTableEntry,1>_> *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar6 = *(TReferenceControllerBase<1> **)&pTVar5->field_0x10;
    lVar1 = *(longlong *)&pTVar5->field_0x8;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (lVar1 != 0) {
      ::FString::operator=(param_2,(FString *)(lVar1 + 0x10));
      bVar3 = true;
      goto LAB_141760ee2;
    }
  }
  bVar3 = false;
LAB_141760ee2:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return bVar3;
}

// ImportStrings @ 141763940

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FStringTable::ImportStrings(FStringTable *this,FString *param_1)

{
  TMap<FTextKey,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextKey,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>,0>_>
  *this_00;
  ulonglong uVar1;
  int iVar2;
  undefined1 *puVar3;
  code *pcVar4;
  FStringTable *this_01;
  longlong *plVar5;
  void *pvVar6;
  bool bVar7;
  bool bVar8;
  undefined1 uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  size_t sVar13;
  ulong64 uVar14;
  TSharedRef<FStringTable,1> *pTVar15;
  byte bVar16;
  int *piVar17;
  wchar_t *pwVar18;
  undefined1 *puVar19;
  LPCRITICAL_SECTION lpCriticalSection;
  LPCRITICAL_SECTION lpCriticalSection_00;
  uint *puVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  ForAnyElementType FVar24;
  FTextKeyState *pFVar25;
  TSparseSetElement<TTuple<FTextKey,TSharedPtr<FStringTableEntry,1>_>_> *pTVar26;
  undefined4 uVar27;
  longlong lVar28;
  FTextId FVar29;
  TSparseSetElement<TTuple<FTextKey,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>_>
  *pTVar30;
  undefined1 auStackY_378 [32];
  undefined1 local_338 [4];
  uint local_334;
  uint local_330;
  FTextKey local_32c;
  uint local_328;
  uint local_324;
  uint local_320;
  FString local_318;
  FString local_308;
  FString local_2f8;
  FString local_2e8;
  FTextKey local_2d8;
  int local_2d4;
  int local_2d0 [2];
  FStringTable *local_2c8;
  FString local_2c0;
  FString local_2b0;
  FTextKeyState *local_2a0;
  FString local_298;
  FName local_288;
  longlong local_280;
  FString local_278;
  longlong local_268;
  LPCRITICAL_SECTION local_260;
  LPCRITICAL_SECTION local_258;
  TKeyInitializer<FTextKey_&&> local_250;
  undefined1 local_248 [16];
  longlong local_238;
  TSparseSetElement<TTuple<FTextKey,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>_>
  *local_228;
  int iStack_220;
  undefined4 uStack_21c;
  TSparseSetElement<TTuple<FTextKey,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>_>
  *local_218;
  int iStack_210;
  undefined4 uStack_20c;
  longlong *local_208;
  int iStack_200;
  uint uStack_1fc;
  TBitArray<FDefaultBitArrayAllocator> *local_1f8;
  undefined4 uStack_1f0;
  uint uStack_1ec;
  int local_1e8;
  undefined4 uStack_1e4;
  int iStack_1e0;
  undefined4 uStack_1dc;
  FCsvParser local_1d8;
  longlong *local_1a8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1a0;
  undefined8 uStack_180;
  TPairInitializer<FString_&,TSharedRef<FStringTableEntry,1>_&> local_178;
  FSparseArrayAllocationInfo local_168;
  FSparseArrayAllocationInfo local_158;
  longlong local_148;
  FString *local_140;
  TSharedRef<FStringTableEntry,1> local_138;
  FName *local_128;
  uint *local_120;
  TSharedRef<FStringTable_const_,1> local_118;
  TStringView<wchar_t> local_108;
  TSharedRef<FStringTable,1> local_f8;
  TStringView<wchar_t> local_e8;
  undefined4 local_cc;
  undefined4 local_bc;
  undefined4 local_9c;
  undefined1 local_98 [32];
  uint *local_78;
  uint local_70;
  undefined4 local_6c;
  undefined4 local_68;
  int local_64;
  ForElementType<FSetElementId> local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_378;
  bVar8 = false;
  local_278.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_278.Data.ArrayNum = 0;
  local_278.Data.ArrayMax = 0;
  if ((param_1->Data).ArrayNum == 0) {
    pwVar18 = L"";
  }
  else {
    pwVar18 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  local_2c8 = this;
  bVar7 = FFileHelper::LoadFileToString(&local_278,pwVar18,None,0);
  if (!bVar7) {
    if (2 < (byte)LogStringTable._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogStringTable);
    }
    goto LAB_141764830;
  }
  FCsvParser::FCsvParser(&local_1d8,&local_278);
  FVar24.Data = local_1d8.Rows.AllocatorInstance.Data;
  if (local_1d8.Rows.ArrayNum < 2) {
    bVar8 = false;
    if (2 < (byte)LogStringTable._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogStringTable);
    }
  }
  else {
    uVar22 = 0xffffffff;
    local_98._0_8_ = 0;
    local_98._8_8_ = 0;
    local_78 = (uint *)0x0;
    local_70 = 0;
    local_6c = 0x80;
    uVar21 = 0xffffffff;
    local_68 = 0xffffffff;
    local_64 = 0;
    local_58 = (ForElementType<FSetElementId>)0x0;
    local_50 = 0;
    iVar10 = *(int *)(local_1d8.Rows.AllocatorInstance.Data + 8);
    local_324 = 0xffffffff;
    local_328 = 0xffffffff;
    local_330 = 0;
    uVar12 = local_328;
    uVar23 = local_324;
    if (0 < iVar10) {
      do {
        uVar12 = local_330;
        uVar23 = 0;
        if ((int)local_330 < iVar10) {
          uVar23 = ~local_330 >> 0x1f;
        }
        if ((uVar23 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar4 = (code *)swi(3);
          uVar9 = (*pcVar4)();
          return (bool)uVar9;
        }
        pwVar18 = *(wchar_t **)(*(longlong *)FVar24.Data + (longlong)(int)uVar12 * 8);
        iVar10 = FGenericPlatformStricmp::Stricmp(pwVar18,L"Key");
        if ((((iVar10 != 0) || (uVar12 = uVar21, uVar23 = local_330, uVar22 != 0xffffffff)) &&
            ((iVar10 = FGenericPlatformStricmp::Stricmp(pwVar18,L"SourceString"), uVar23 = uVar22,
             iVar10 != 0 || (uVar12 = local_330, uVar21 != 0xffffffff)))) &&
           (::FName::FName(&local_288,pwVar18), uVar12 = uVar21, local_288 != (FName)0x0)) {
          local_128 = &local_288;
          local_120 = &local_330;
          TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::
          Emplace<TPairInitializer<FName_const_&,int_const_&>_>
                    ((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                      *)local_98,(TPairInitializer<FName_const_&,int_const_&> *)local_248,
                     (bool *)&local_128);
        }
        uVar22 = uVar23;
        uVar21 = uVar12;
        iVar10 = *(int *)(FVar24.Data + 8);
        local_330 = local_330 + 1;
        uVar12 = uVar21;
        uVar23 = uVar22;
      } while ((int)local_330 < iVar10);
    }
    local_324 = uVar23;
    local_328 = uVar12;
    uVar23 = local_324;
    uVar12 = local_328;
    bVar8 = true;
    if ((local_324 == 0xffffffff) && (bVar8 = false, 2 < (byte)LogStringTable._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogStringTable);
    }
    if (uVar12 == 0xffffffff) {
      if ((byte)LogStringTable._0_1_ < 3) {
LAB_141763c0a:
        bVar8 = false;
      }
      else {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogStringTable);
        bVar8 = false;
      }
    }
    else {
      if (!bVar8) goto LAB_141763c0a;
      lpCriticalSection = (LPCRITICAL_SECTION)&this->KeyMappingCS;
      local_258 = lpCriticalSection;
      if ((lpCriticalSection == (LPCRITICAL_SECTION)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Mutex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                             ,0x1b,L""), bVar8)) {
        pcVar4 = (code *)swi(3);
        uVar9 = (*pcVar4)();
        return (bool)uVar9;
      }
      EnterCriticalSection(lpCriticalSection);
      lpCriticalSection_00 = (LPCRITICAL_SECTION)&this->KeysToMetaDataCS;
      local_260 = lpCriticalSection_00;
      if ((lpCriticalSection_00 == (LPCRITICAL_SECTION)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Mutex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                             ,0x1b,L""), bVar8)) {
        pcVar4 = (code *)swi(3);
        uVar9 = (*pcVar4)();
        return (bool)uVar9;
      }
      EnterCriticalSection(lpCriticalSection_00);
      ClearSourceStrings(this,local_1d8.Rows.ArrayNum + -1);
      this_01 = local_2c8;
      local_320 = 1;
      if (1 < local_1d8.Rows.ArrayNum) {
        local_238 = (longlong)(int)uVar12;
        local_280 = 0x10;
        uVar27 = local_cc;
        do {
          lVar28 = local_280;
          uVar21 = local_320;
          uVar22 = 0;
          if ((int)local_320 < local_1d8.Rows.ArrayNum) {
            uVar22 = ~local_320 >> 0x1f;
          }
          if ((uVar22 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar4 = (code *)swi(3);
            uVar9 = (*pcVar4)();
            return (bool)uVar9;
          }
          pFVar25 = (FTextKeyState *)(local_1d8.Rows.AllocatorInstance.Data + lVar28);
          local_2a0 = pFVar25;
          if ((((-1 < (int)uVar23) &&
               (iVar10 = *(int *)&(pFVar25->KeyDataAllocations).Elements.Chunks.AllocatorInstance.
                                  Data, (int)uVar23 < iVar10)) && (-1 < (int)uVar12)) &&
             ((int)uVar12 < iVar10)) {
            if (((int)uVar23 < 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar4 = (code *)swi(3);
              uVar9 = (*pcVar4)();
              return (bool)uVar9;
            }
            ::FString::FString(&local_2e8,
                               *(wchar_t **)
                                ((longlong)(pFVar25->DataRW).Mutex.Mutex.Ptr +
                                (longlong)(int)uVar23 * 8));
            FVar24.Data = local_2e8.Data.AllocatorInstance.Data;
            lVar28 = (longlong)local_2e8.Data.ArrayNum;
            local_318.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_318.Data.ArrayNum = local_2e8.Data.ArrayNum;
            if (local_2e8.Data.ArrayNum == 0) {
              local_318.Data.ArrayNum = 0;
              local_318.Data.ArrayMax = 0;
            }
            else {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (2,2,local_2e8.Data.ArrayNum,0,(ForAnyElementType *)&local_318,
                         local_2e8.Data.ArrayNum,&local_318.Data.ArrayMax);
              memcpy(local_318.Data.AllocatorInstance.Data,FVar24.Data,lVar28 * 2);
            }
            ::FString::ReplaceEscapedCharWithCharInline
                      (&local_318,(TArray<wchar_t,TSizedDefaultAllocator<32>_> *)0x0);
            if ((TSparseSetElement<TTuple<FTextKey,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>_>
                 *)local_2e8.Data.AllocatorInstance.Data !=
                (TSparseSetElement<TTuple<FTextKey,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>_>
                 *)0x0) {
              FMemory::Free(local_2e8.Data.AllocatorInstance.Data);
            }
            local_2e8.Data.AllocatorInstance.Data = local_318.Data.AllocatorInstance.Data;
            local_2e8.Data.ArrayNum = local_318.Data.ArrayNum;
            local_2e8.Data.ArrayMax = local_318.Data.ArrayMax;
            uVar12 = 0;
            if ((int)local_328 <
                *(int *)&(pFVar25->KeyDataAllocations).Elements.Chunks.AllocatorInstance.Data) {
              uVar12 = ~local_328 >> 0x1f;
            }
            local_318.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_318.Data.ArrayNum = 0;
            local_318.Data.ArrayMax = 0;
            if ((uVar12 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar4 = (code *)swi(3);
              uVar9 = (*pcVar4)();
              return (bool)uVar9;
            }
            ::FString::FString(&local_2c0,
                               *(wchar_t **)
                                ((longlong)(pFVar25->DataRW).Mutex.Mutex.Ptr + local_238 * 8));
            FVar24.Data = local_2c0.Data.AllocatorInstance.Data;
            local_2f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            lVar28 = (longlong)local_2c0.Data.ArrayNum;
            local_2f8.Data.ArrayNum = local_2c0.Data.ArrayNum;
            if (local_2c0.Data.ArrayNum == 0) {
              local_2f8.Data.ArrayNum = 0;
              local_2f8.Data.ArrayMax = 0;
            }
            else {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (2,2,local_2c0.Data.ArrayNum,0,(ForAnyElementType *)&local_2f8,
                         local_2c0.Data.ArrayNum,&local_2f8.Data.ArrayMax);
              memcpy(local_2f8.Data.AllocatorInstance.Data,FVar24.Data,lVar28 * 2);
            }
            ::FString::ReplaceEscapedCharWithCharInline
                      (&local_2f8,(TArray<wchar_t,TSizedDefaultAllocator<32>_> *)0x0);
            if ((FStringTable *)local_2c0.Data.AllocatorInstance.Data != (FStringTable *)0x0) {
              FMemory::Free(local_2c0.Data.AllocatorInstance.Data);
            }
            FVar24.Data = local_2e8.Data.AllocatorInstance.Data;
            local_2c0.Data.ArrayMax = local_2f8.Data.ArrayMax;
            local_2c8 = (FStringTable *)local_2f8.Data.AllocatorInstance.Data;
            local_2c0.Data.AllocatorInstance.Data = local_2f8.Data.AllocatorInstance.Data;
            local_2f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_2c0.Data.ArrayNum = local_2f8.Data.ArrayNum;
            iVar10 = local_2e8.Data.ArrayNum + -1;
            if (local_2e8.Data.ArrayNum == 0) {
              iVar10 = 0;
            }
            local_2f8.Data.ArrayNum = 0;
            local_2f8.Data.ArrayMax = 0;
            local_228 = (TSparseSetElement<TTuple<FTextKey,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>_>
                         *)local_2e8.Data.AllocatorInstance.Data;
            local_2d8.Index = -1;
            iStack_220 = iVar10;
            if (iVar10 != 0) {
              uStack_21c = uVar27;
              pFVar25 = FTextKeyState::GetState();
              if ((TSparseSetElement<TTuple<FTextKey,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>_>
                   *)FVar24.Data ==
                  (TSparseSetElement<TTuple<FTextKey,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>_>
                   *)0x0) {
                FVar24.Data = (FScriptContainerElement *)0x0;
                iVar10 = 0;
              }
              else {
                if ((0 < iVar10) && (*(short *)(FVar24.Data + (longlong)iVar10 * 2 + -2) == 0)) {
                  iVar10 = iVar10 + -1;
                }
                if (iVar10 == -1) {
                  sVar13 = wcslen((wchar_t *)FVar24.Data);
                  iVar10 = (int)sVar13;
                }
              }
              uVar14 = CityHash64((char *)FVar24.Data,iVar10 * 2);
              local_108._12_4_ = uStack_21c;
              local_108.Size = iStack_220;
              local_108.DataPtr = (wchar_t *)local_228;
              FTextKeyState::FindOrAddImpl
                        (pFVar25,&local_108,(int)(uVar14 >> 0x20) * 0x17 + (int)uVar14,&local_2d8);
            }
            iVar10 = local_2c0.Data.ArrayNum;
            FVar24.Data = local_2c0.Data.AllocatorInstance.Data;
            FVar29.Key.Index = local_2d8.Index;
            FVar29.Namespace.Index = (this_01->TableNamespace).Index;
            local_298.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_298.Data.ArrayNum = local_2c0.Data.ArrayNum;
            if (local_2c0.Data.ArrayNum == 0) {
              local_298.Data.ArrayMax = 0;
            }
            else {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (2,2,local_2c0.Data.ArrayNum,0,(ForAnyElementType *)&local_298,
                         local_2c0.Data.ArrayNum,&local_298.Data.ArrayMax);
              memcpy(local_298.Data.AllocatorInstance.Data,FVar24.Data,(longlong)iVar10 * 2);
            }
            pTVar15 = TSharedFromThis<FStringTable,1>::AsShared
                                ((TSharedFromThis<FStringTable,1> *)this_01,&local_f8);
            local_118.Object = pTVar15->Object;
            local_118.SharedReferenceCount.ReferenceController =
                 (pTVar15->SharedReferenceCount).ReferenceController;
            if (local_118.SharedReferenceCount.ReferenceController !=
                (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              (local_118.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                   (atomic<int>)
                   ((int)(local_118.SharedReferenceCount.ReferenceController)->SharedReferenceCount
                   + 1);
              UNLOCK();
            }
            FStringTableEntry::NewStringTableEntry(&local_138,&local_118,&local_298,FVar29);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_f8.SharedReferenceCount.ReferenceController);
            iVar10 = *(int *)&(this_01->KeysToEntries).field_0x34;
            local_178.Key = &local_2e8;
            local_178.Value = &local_138;
            if (iVar10 == 0) {
              iVar11 = UE::Core::Private::
                       ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x20,8,1,(ForAnyElementType *)&this_01->KeysToEntries,
                                  (int *)&(this_01->KeysToEntries).field_0x8,
                                  (int *)&(this_01->KeysToEntries).field_0xc);
              TBitArray<FDefaultBitArrayAllocator>::Add
                        ((TBitArray<FDefaultBitArrayAllocator> *)
                         &(this_01->KeysToEntries).field_0x10,false);
            }
            else {
              iVar11 = *(int *)&(this_01->KeysToEntries).field_0x30;
              lVar28 = *(longlong *)&this_01->KeysToEntries;
              iVar2 = *(int *)((longlong)iVar11 * 0x20 + 4 + lVar28);
              iVar10 = iVar10 + -1;
              *(int *)&(this_01->KeysToEntries).field_0x30 = iVar2;
              *(int *)&(this_01->KeysToEntries).field_0x34 = iVar10;
              if (iVar10 != 0) {
                *(undefined4 *)((longlong)iVar2 * 0x20 + lVar28) = 0xffffffff;
              }
            }
            TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::AllocateIndex((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                             *)&this_01->KeysToEntries,&local_168,iVar11);
            pTVar26 = local_168.Pointer;
            if (local_168.Pointer ==
                (TSparseSetElement<TTuple<FTextKey,TSharedPtr<FStringTableEntry,1>_>_> *)0x0) {
              pTVar26 = (TSparseSetElement<TTuple<FTextKey,TSharedPtr<FStringTableEntry,1>_>_> *)0x0
              ;
            }
            else {
              TPairInitializer<FString_&,TSharedRef<FStringTableEntry,1>_&>::
              operator<FTextKey,TSharedPtr<FStringTableEntry,1>_>_TTuple<FTextKey,TSharedPtr<FStringTableEntry,1>_>
                        (&local_178,local_168.Pointer);
              *(undefined4 *)((longlong)pTVar26 + 0x18) = 0xffffffff;
            }
            local_2d4 = local_168.Index;
            uVar12 = ::GetTypeHash((FTextKey *)pTVar26);
            bVar8 = TSet<TTuple<FTextKey,TSharedPtr<FStringTableEntry,1>_>,TDefaultMapHashableKeyFuncs<FTextKey,TSharedPtr<FStringTableEntry,1>,0>,FDefaultSetAllocator>
                    ::TryReplaceExisting
                              ((TSet<TTuple<FTextKey,TSharedPtr<FStringTableEntry,1>_>,TDefaultMapHashableKeyFuncs<FTextKey,TSharedPtr<FStringTableEntry,1>,0>,FDefaultSetAllocator>
                                *)&this_01->KeysToEntries,uVar12,pTVar26,&local_2d4,(bool *)0x0);
            if (!bVar8) {
              TSet<TTuple<FTextKey,TSharedPtr<FStringTableEntry,1>_>,TDefaultMapHashableKeyFuncs<FTextKey,TSharedPtr<FStringTableEntry,1>,0>,FDefaultSetAllocator>
              ::RehashOrLink((TSet<TTuple<FTextKey,TSharedPtr<FStringTableEntry,1>_>,TDefaultMapHashableKeyFuncs<FTextKey,TSharedPtr<FStringTableEntry,1>,0>,FDefaultSetAllocator>
                              *)&this_01->KeysToEntries,uVar12,pTVar26,local_2d4);
            }
            iStack_200 = 0;
            uStack_1fc = 1;
            local_1e8 = 0;
            uStack_1ec = 0;
            if (local_70 != 0) {
              puVar20 = (uint *)(local_98 + 0x10);
              if (local_78 != (uint *)0x0) {
                puVar20 = local_78;
              }
              uVar12 = *puVar20;
              while (uVar12 == 0) {
                lVar28 = (longlong)iStack_200;
                local_1e8 = local_1e8 + 0x20;
                iStack_200 = iStack_200 + 1;
                uStack_1ec = local_70;
                if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_200)
                goto LAB_141764251;
                uVar12 = puVar20[lVar28 + 1];
              }
              uStack_1fc = -uVar12 & uVar12;
              uVar1 = (ulonglong)uStack_1fc * 2 + 1;
              lVar28 = 0x3f;
              if (uVar1 != 0) {
                for (; uVar1 >> lVar28 == 0; lVar28 = lVar28 + -1) {
                }
              }
              local_248._4_4_ = (undefined4)lVar28;
              uStack_1ec = local_1e8 + -1 + local_248._4_4_;
              if ((int)local_70 < (int)uStack_1ec) {
                uStack_1ec = local_70;
              }
            }
LAB_141764251:
            local_208 = (longlong *)local_98;
            uStack_1e4 = local_9c;
            uVar12 = local_70 & 0xffffffe0;
            iStack_1e0 = local_98._8_4_ - local_64;
            local_1f8 = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
            TStack_1a0._padding_ = CONCAT44(uStack_1fc,iStack_200);
            uStack_1f0 = 0xffffffff;
            TStack_1a0.CurrentBitIndex = uStack_1ec;
            TStack_1a0.UnvisitedBitMask = 0xffffffff;
            iVar10 = (int)local_70 >> 5;
            TStack_1a0._28_4_ = local_9c;
            TStack_1a0.BaseBitIndex = local_1e8;
            uStack_180 = CONCAT44(uStack_1dc,iStack_1e0);
            bVar16 = (byte)local_70;
            local_334 = local_70;
            local_1a8 = local_208;
            TStack_1a0.Array = local_1f8;
            if (((int)local_70 < 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                   ,0x7af,L""), bVar8)) {
              pcVar4 = (code *)swi(3);
              uVar9 = (*pcVar4)();
              return (bool)uVar9;
            }
            pFVar25 = local_2a0;
            if (local_334 != local_70) {
              puVar20 = (uint *)(local_98 + 0x10);
              if (local_78 != (uint *)0x0) {
                puVar20 = local_78;
              }
              uVar23 = -1 << (bVar16 & 0x1f) & puVar20[iVar10];
              while (uVar23 == 0) {
                lVar28 = (longlong)iVar10;
                uVar12 = uVar12 + 0x20;
                iVar10 = iVar10 + 1;
                if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) {
                  local_334 = local_70;
                  goto LAB_1417643c0;
                }
                uVar23 = puVar20[lVar28 + 1];
              }
              uVar1 = (ulonglong)(-uVar23 & uVar23) * 2 + 1;
              lVar28 = 0x3f;
              if (uVar1 != 0) {
                for (; uVar1 >> lVar28 == 0; lVar28 = lVar28 + -1) {
                }
              }
              local_248._8_4_ = (undefined4)lVar28;
              local_334 = (uVar12 - 1) + local_248._8_4_;
              if ((int)local_70 < (int)local_334) {
                local_334 = local_70;
              }
            }
LAB_1417643c0:
            uVar12 = local_334;
            while( true ) {
              plVar5 = local_1a8;
              if ((int)local_1a8[1] - *(int *)((longlong)local_1a8 + 0x34) != (int)uStack_180) {
                local_338[0] = 0;
                `TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_338);
              }
              if (((TStack_1a0.CurrentBitIndex == uVar12) &&
                  (TStack_1a0.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10)))
                 && (plVar5 == (longlong *)local_98)) break;
              local_268 = *plVar5;
              iVar10 = *(int *)(local_268 + 8 + (longlong)TStack_1a0.CurrentBitIndex * 0x14);
              local_268 = local_268 + (longlong)TStack_1a0.CurrentBitIndex * 0x14;
              if ((-1 < iVar10) &&
                 (iVar10 < *(int *)&(pFVar25->KeyDataAllocations).Elements.Chunks.AllocatorInstance.
                                    Data)) {
                if ((iVar10 < 0) &&
                   (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar8)) {
                  pcVar4 = (code *)swi(3);
                  uVar9 = (*pcVar4)();
                  return (bool)uVar9;
                }
                ::FString::FString(&local_2b0,
                                   *(wchar_t **)
                                    ((longlong)(pFVar25->DataRW).Mutex.Mutex.Ptr +
                                    (longlong)iVar10 * 8));
                FVar24.Data = local_2b0.Data.AllocatorInstance.Data;
                lVar28 = (longlong)local_2b0.Data.ArrayNum;
                local_308.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                local_308.Data.ArrayNum = local_2b0.Data.ArrayNum;
                if (local_2b0.Data.ArrayNum == 0) {
                  local_308.Data.ArrayNum = 0;
                  local_308.Data.ArrayMax = 0;
                }
                else {
                  UE::Core::Private::
                  ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (2,2,local_2b0.Data.ArrayNum,0,(ForAnyElementType *)&local_308,
                             local_2b0.Data.ArrayNum,&local_308.Data.ArrayMax);
                  memcpy(local_308.Data.AllocatorInstance.Data,FVar24.Data,lVar28 * 2);
                }
                ::FString::ReplaceEscapedCharWithCharInline
                          (&local_308,(TArray<wchar_t,TSizedDefaultAllocator<32>_> *)0x0);
                if (local_2b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_2b0.Data.AllocatorInstance.Data);
                }
                FVar24.Data = local_2e8.Data.AllocatorInstance.Data;
                iVar10 = local_308.Data.ArrayNum;
                local_2b0.Data.AllocatorInstance.Data = local_308.Data.AllocatorInstance.Data;
                local_308.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                local_2b0.Data.ArrayNum = local_308.Data.ArrayNum;
                local_2b0.Data.ArrayMax = local_308.Data.ArrayMax;
                local_308.Data.ArrayNum = 0;
                local_308.Data.ArrayMax = 0;
                if (1 < iVar10) {
                  this_00 = &this_01->KeysToMetaData;
                  local_218 = (TSparseSetElement<TTuple<FTextKey,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>_>
                               *)local_2e8.Data.AllocatorInstance.Data;
                  uStack_20c = local_bc;
                  local_32c.Index = -1;
                  iVar10 = local_2e8.Data.ArrayNum + -1;
                  if (local_2e8.Data.ArrayNum == 0) {
                    iVar10 = 0;
                  }
                  iStack_210 = iVar10;
                  if (iVar10 != 0) {
                    local_2a0 = FTextKeyState::GetState();
                    if ((TSparseSetElement<TTuple<FTextKey,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>_>
                         *)FVar24.Data ==
                        (TSparseSetElement<TTuple<FTextKey,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>_>
                         *)0x0) {
                      iVar10 = 0;
                      FVar24.Data = (FScriptContainerElement *)
                                    (TSparseSetElement<TTuple<FTextKey,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>_>
                                     *)0x0;
                    }
                    else {
                      if ((0 < iVar10) && (*(short *)(FVar24.Data + (longlong)iVar10 * 2 + -2) == 0)
                         ) {
                        iVar10 = iVar10 + -1;
                      }
                      if (iVar10 == -1) {
                        sVar13 = wcslen((wchar_t *)FVar24.Data);
                        iVar10 = (int)sVar13;
                      }
                    }
                    uVar14 = CityHash64((char *)FVar24.Data,iVar10 * 2);
                    local_e8._12_4_ = uStack_20c;
                    local_e8.Size = iStack_210;
                    local_e8.DataPtr = (wchar_t *)local_218;
                    FTextKeyState::FindOrAddImpl
                              (local_2a0,&local_e8,(int)(uVar14 >> 0x20) * 0x17 + (int)uVar14,
                               &local_32c);
                  }
                  uVar12 = ::GetTypeHash(&local_32c);
                  local_2c8 = (FStringTable *)CONCAT44(local_2c8._4_4_,uVar12);
                  if (*(int *)&(this_01->KeysToMetaData).field_0x8 !=
                      *(int *)&(this_01->KeysToMetaData).field_0x34) {
                    puVar3 = *(undefined1 **)&(this_01->KeysToMetaData).field_0x40;
                    puVar19 = &(this_01->KeysToMetaData).field_0x38;
                    if (puVar3 != (undefined1 *)0x0) {
                      puVar19 = puVar3;
                    }
                    iVar10 = *(int *)(puVar19 +
                                     (ulonglong)
                                     (*(int *)&(this_01->KeysToMetaData).field_0x48 - 1U & uVar12) *
                                     4);
                    if (iVar10 != -1) {
                      do {
                        piVar17 = (int *)((longlong)iVar10 * 0x60 + *(longlong *)&this_00->field_0x0
                                         );
                        if (*piVar17 == local_32c.Index) {
                          if (piVar17 != (int *)0x0) goto LAB_1417646d9;
                          break;
                        }
                        iVar10 = piVar17[0x16];
                      } while (iVar10 != -1);
                    }
                  }
                  local_250.Key = &local_32c;
                  TSparseArrayBase<96,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ::AddUninitialized((TSparseArrayBase<96,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                                      *)this_00,&local_158);
                  pvVar6 = local_158.Pointer;
                  pTVar30 = (TSparseSetElement<TTuple<FTextKey,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>_>
                             *)0x0;
                  if (local_158.Pointer !=
                      (TSparseSetElement<TTuple<FTextKey,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>_>
                       *)0x0) {
                    TKeyInitializer<FTextKey_&&>::
                    operator<FTextKey,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>_TTuple<FTextKey,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>
                              (&local_250,local_158.Pointer);
                    *(undefined4 *)((longlong)pvVar6 + 0x58) = 0xffffffff;
                    pTVar30 = pvVar6;
                  }
                  local_2d0[0] = local_158.Index;
                  bVar8 = TSet<TTuple<FTextKey,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>,TDefaultMapHashableKeyFuncs<FTextKey,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>,0>,FDefaultSetAllocator>
                          ::TryReplaceExisting
                                    ((TSet<TTuple<FTextKey,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>,TDefaultMapHashableKeyFuncs<FTextKey,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>,0>,FDefaultSetAllocator>
                                      *)this_00,uVar12,pTVar30,local_2d0,(bool *)0x0);
                  lVar28 = (longlong)local_2d0[0];
                  if (!bVar8) {
                    TSet<TTuple<FTextKey,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>,TDefaultMapHashableKeyFuncs<FTextKey,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>,0>,FDefaultSetAllocator>
                    ::RehashOrLink((TSet<TTuple<FTextKey,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>,TDefaultMapHashableKeyFuncs<FTextKey,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>,0>,FDefaultSetAllocator>
                                    *)this_00,(uint)local_2c8,pTVar30,local_2d0[0]);
                  }
                  piVar17 = (int *)(lVar28 * 0x60 + *(longlong *)&this_00->field_0x0);
LAB_1417646d9:
                  local_148 = local_268;
                  local_140 = &local_2b0;
                  TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
                  ::Emplace<TPairInitializer<FName_const_&,FString_const_&>_>
                            ((TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
                              *)(piVar17 + 2),
                             (TPairInitializer<FName_const_&,FString_const_&> *)(local_248 + 0xc),
                             (bool *)&local_148);
                }
                uVar12 = local_334;
                if (local_2b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_2b0.Data.AllocatorInstance.Data);
                  uVar12 = local_334;
                }
              }
              TStack_1a0.UnvisitedBitMask =
                   TStack_1a0.UnvisitedBitMask & ~TStack_1a0._padding_._4_4_;
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1a0);
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_138.SharedReferenceCount.ReferenceController);
            uVar27 = local_cc;
            uVar21 = local_320;
            if ((FStringTable *)local_2c0.Data.AllocatorInstance.Data != (FStringTable *)0x0) {
              FMemory::Free(local_2c0.Data.AllocatorInstance.Data);
            }
            uVar12 = local_328;
            uVar23 = local_324;
            if ((TSparseSetElement<TTuple<FTextKey,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>_>
                 *)local_2e8.Data.AllocatorInstance.Data !=
                (TSparseSetElement<TTuple<FTextKey,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>_>
                 *)0x0) {
              FMemory::Free(local_2e8.Data.AllocatorInstance.Data);
              uVar12 = local_328;
              uVar23 = local_324;
            }
          }
          local_320 = uVar21 + 1;
          local_280 = local_280 + 0x10;
          lpCriticalSection = local_258;
          lpCriticalSection_00 = local_260;
        } while ((int)local_320 < local_1d8.Rows.ArrayNum);
      }
      if (lpCriticalSection_00 != (LPCRITICAL_SECTION)0x0) {
        LeaveCriticalSection(lpCriticalSection_00);
      }
      if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
        LeaveCriticalSection(lpCriticalSection);
      }
      bVar8 = true;
    }
    local_50 = 0;
    if (local_58 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_58);
    }
    TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_98);
  }
  DestructItems<TArray<wchar_t_const_*,TSizedDefaultAllocator<32>_>,int>
            ((TArray<wchar_t_const_*,TSizedDefaultAllocator<32>_> *)
             local_1d8.Rows.AllocatorInstance.Data,local_1d8.Rows.ArrayNum);
  if ((TArray<wchar_t_const_*,TSizedDefaultAllocator<32>_> *)local_1d8.Rows.AllocatorInstance.Data
      != (TArray<wchar_t_const_*,TSizedDefaultAllocator<32>_> *)0x0) {
    FMemory::Free(local_1d8.Rows.AllocatorInstance.Data);
  }
  if (local_1d8.SourceString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1d8.SourceString.Data.AllocatorInstance.Data);
  }
LAB_141764830:
  if (local_278.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_278.Data.AllocatorInstance.Data);
  }
  return bVar8;
}

// IsInternal @ 141766ed0

void __thiscall FStringTable::IsInternal(FStringTable *this,bool param_1)

{
  this->bIsInternal = param_1;
  return;
}

// IsInternal @ 141766ee0

bool __thiscall FStringTable::IsInternal(FStringTable *this)

{
  return this->bIsInternal;
}

// IsLoaded @ 141766ef0

void __thiscall FStringTable::IsLoaded(FStringTable *this,bool param_1)

{
  this->bIsLoaded = param_1;
  return;
}

// IsLoaded @ 141766f00

bool __thiscall FStringTable::IsLoaded(FStringTable *this)

{
  return this->bIsLoaded;
}

// NewStringTable @ 14176d3b0

TSharedRef<FStringTable,1> * __cdecl
FStringTable::NewStringTable(TSharedRef<FStringTable,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  pTVar1 = ::operator_new(0x120);
  pTVar2 = (TReferenceControllerBase<1> *)0x0;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    pTVar1->SharedReferenceCount = (atomic<int>)0x1;
    pTVar1->WeakReferenceCount = (atomic<int>)0x1;
    pTVar1[1]._padding_ = 0;
    pTVar1->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VFStringTable___00_SharedPointerInternals__6B_;
    pTVar1[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar1[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar1[2]._padding_ = 0;
    *(undefined2 *)&pTVar1[2].SharedReferenceCount = 1;
    pTVar1[2].WeakReferenceCount = (atomic<int>)0xffffffff;
    pTVar1[3]._padding_ = 0;
    pTVar1[3].SharedReferenceCount = (atomic<int>)0x0;
    pTVar1[3].WeakReferenceCount = (atomic<int>)0x0;
    pTVar1[5]._padding_ = 0;
    pTVar1[5].SharedReferenceCount = (atomic<int>)0x0;
    pTVar1[5].WeakReferenceCount = (atomic<int>)0x80;
    *(undefined4 *)&pTVar1[6]._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&pTVar1[6]._padding_ + 4) = 0;
    pTVar1[7]._padding_ = 0;
    pTVar1[7].SharedReferenceCount = (atomic<int>)0x0;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(pTVar1 + 8),4000);
    pTVar1[10].SharedReferenceCount = (atomic<int>)0x0;
    pTVar1[10].WeakReferenceCount = (atomic<int>)0x0;
    pTVar1[0xb]._padding_ = 0;
    pTVar1[0xc].SharedReferenceCount = (atomic<int>)0x0;
    pTVar1[0xc].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar1[0xd]._padding_ = 0;
    *(undefined4 *)((longlong)&pTVar1[0xd]._padding_ + 4) = 0x80;
    pTVar1[0xd].SharedReferenceCount = (atomic<int>)0xffffffff;
    pTVar1[0xd].WeakReferenceCount = (atomic<int>)0x0;
    pTVar1[0xe].SharedReferenceCount = (atomic<int>)0x0;
    pTVar1[0xe].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar1[0xf]._padding_ = 0;
    InitializeCriticalSectionAndSpinCount
              ((LPCRITICAL_SECTION)&pTVar1[0xf].SharedReferenceCount,4000);
    pTVar2 = pTVar1;
  }
  TSharedRef<FStringTable,1>::TSharedRef<FStringTable,1>
            (__return_storage_ptr__,(FStringTable *)(pTVar2 + 1),pTVar2);
  return __return_storage_ptr__;
}

// RemoveMetaData @ 141776cd0

void __thiscall FStringTable::RemoveMetaData(FStringTable *this,FTextKey *param_1,FName param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
  *this_00;
  FName local_res8;
  uint uStackX_1c;
  
  lpCriticalSection = &this->KeysToMetaDataCS;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  this_00 = (TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
             *)TMapBase<FTextKey,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextKey,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>,0>_>
               ::Find((TMapBase<FTextKey,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextKey,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>,0>_>
                       *)&this->KeysToMetaData,param_1);
  if (this_00 !=
      (TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
       *)0x0) {
    local_res8 = param_2;
    if (*(int *)&(this_00->Elements).field_0x8 != *(int *)&(this_00->Elements).field_0x34) {
      uVar3 = ::GetTypeHash(param_2.ComparisonIndex.Value);
      uStackX_1c = param_2.Number;
      TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
      ::RemoveImpl<FName>(this_00,uStackX_1c + uVar3,&local_res8);
    }
    if ((*(int *)&(this_00->Elements).field_0x8 == *(int *)&(this_00->Elements).field_0x34) &&
       (*(int *)&(this->KeysToMetaData).field_0x8 != *(int *)&(this->KeysToMetaData).field_0x34)) {
      uVar3 = ::GetTypeHash(param_1);
      TSet<TTuple<FTextKey,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>,TDefaultMapHashableKeyFuncs<FTextKey,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>,0>,FDefaultSetAllocator>
      ::RemoveImpl<FTextKey>
                ((TSet<TTuple<FTextKey,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>,TDefaultMapHashableKeyFuncs<FTextKey,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>,0>,FDefaultSetAllocator>
                  *)&this->KeysToMetaData,uVar3,param_1);
    }
  }
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return;
}

// RemoveSourceString @ 141776dc0

void __thiscall FStringTable::RemoveSourceString(FStringTable *this,FTextKey *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  FWindowsRecursiveMutex *lpCriticalSection_00;
  int iVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  TTuple<FTextKey,TSharedPtr<FStringTableEntry,1>_> *pTVar8;
  TReferenceControllerBase<1> *pTVar9;
  undefined8 local_18 [2];
  
  lpCriticalSection = &this->KeyMappingCS;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pTVar8 = TSet<TTuple<FTextKey,TSharedPtr<FStringTableEntry,1>_>,TDefaultMapHashableKeyFuncs<FTextKey,TSharedPtr<FStringTableEntry,1>,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FTextKey,TSharedPtr<FStringTableEntry,1>_>,TDefaultMapHashableKeyFuncs<FTextKey,TSharedPtr<FStringTableEntry,1>,0>,FDefaultSetAllocator>
                   *)&this->KeysToEntries,param_1);
  if (pTVar8 == (TTuple<FTextKey,TSharedPtr<FStringTableEntry,1>_> *)0x0) {
    pTVar9 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar9 = *(TReferenceControllerBase<1> **)&pTVar8->field_0x10;
    puVar3 = *(undefined8 **)&pTVar8->field_0x8;
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (puVar3 != (undefined8 *)0x0) {
      if (puVar3 != local_18) {
        plVar4 = (longlong *)puVar3[1];
        *puVar3 = 0;
        puVar3[1] = 0;
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar4 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*plVar4 + 8))(plVar4,1);
          }
        }
      }
      if (*(int *)&(this->KeysToEntries).field_0x8 != *(int *)&(this->KeysToEntries).field_0x34) {
        uVar7 = ::GetTypeHash(param_1);
        TSet<TTuple<FTextKey,TSharedPtr<FStringTableEntry,1>_>,TDefaultMapHashableKeyFuncs<FTextKey,TSharedPtr<FStringTableEntry,1>,0>,FDefaultSetAllocator>
        ::RemoveImpl<FTextKey>
                  ((TSet<TTuple<FTextKey,TSharedPtr<FStringTableEntry,1>_>,TDefaultMapHashableKeyFuncs<FTextKey,TSharedPtr<FStringTableEntry,1>,0>,FDefaultSetAllocator>
                    *)&this->KeysToEntries,uVar7,param_1);
      }
      lpCriticalSection_00 = &this->KeysToMetaDataCS;
      if (lpCriticalSection_00 == (FWindowsRecursiveMutex *)0x0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Mutex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                           ,0x1b,L"");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection_00);
      if (*(int *)&(this->KeysToMetaData).field_0x8 != *(int *)&(this->KeysToMetaData).field_0x34) {
        uVar7 = ::GetTypeHash(param_1);
        TSet<TTuple<FTextKey,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>,TDefaultMapHashableKeyFuncs<FTextKey,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>,0>,FDefaultSetAllocator>
        ::RemoveImpl<FTextKey>
                  ((TSet<TTuple<FTextKey,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>,TDefaultMapHashableKeyFuncs<FTextKey,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>,0>,FDefaultSetAllocator>
                    *)&this->KeysToMetaData,uVar7,param_1);
      }
      if (lpCriticalSection_00 != (FWindowsRecursiveMutex *)0x0) {
        LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection_00);
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return;
}

// Serialize @ 141779490

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FStringTable::Serialize(FStringTable *this,FArchive *param_1)

{
  undefined1 *puVar1;
  TMap<FTextKey,TSharedPtr<FStringTableEntry,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextKey,TSharedPtr<FStringTableEntry,1>,0>_>
  *pTVar2;
  TMap<FTextKey,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextKey,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>,0>_>
  *this_00;
  void *_Src;
  code *pcVar3;
  TBitArray<FDefaultBitArrayAllocator> *pTVar4;
  undefined8 uVar5;
  atomic<int> aVar6;
  longlong *plVar7;
  FTextKeyState *pFVar8;
  FTextKeyState *pFVar9;
  FArchiveState *pFVar10;
  LPCRITICAL_SECTION p_Var11;
  TMap<FTextKey,TSharedPtr<FStringTableEntry,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextKey,TSharedPtr<FStringTableEntry,1>,0>_>
  *pTVar12;
  bool bVar13;
  uint uVar14;
  atomic<int> aVar15;
  TConstSetBitIterator<FDefaultBitArrayAllocator> *pTVar16;
  ulonglong uVar17;
  FTextKeyState *pFVar18;
  size_t sVar19;
  ulong64 uVar20;
  ForAnyElementType FVar21;
  wchar_t *pwVar22;
  uint uVar23;
  uint uVar24;
  int iVar25;
  int *piVar26;
  longlong lVar27;
  undefined8 *puVar28;
  PRTL_CRITICAL_SECTION_DEBUG this_01;
  TReferenceControllerBase<1> *pTVar29;
  LPCRITICAL_SECTION p_Var30;
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar31;
  ulonglong uVar32;
  ForElementType<unsigned_int> FVar34;
  ulonglong uVar35;
  ForElementType<unsigned_int> FVar36;
  uint *puVar37;
  int iVar38;
  FScriptContainerElement *_Str;
  FStringTable *pFVar39;
  longlong *plVar40;
  undefined1 auStackY_3d8 [32];
  undefined1 local_398 [8];
  FTextKeyState *local_390;
  int local_388 [2];
  FStringTable *local_380;
  ulonglong local_378;
  undefined1 local_370;
  undefined1 local_36f [3];
  FTextKey local_36c;
  ForElementType<unsigned_int> local_368;
  int local_360;
  FTextKey local_35c;
  FArchiveState *local_358;
  LPCRITICAL_SECTION local_350;
  LPCRITICAL_SECTION local_348;
  FString local_338;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_328;
  int local_318;
  FTextKey local_314;
  FString local_310;
  TMap<FTextKey,TSharedPtr<FStringTableEntry,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextKey,TSharedPtr<FStringTableEntry,1>,0>_>
  *local_300;
  undefined8 uStack_2f8;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  int local_2d8;
  undefined4 uStack_2d4;
  uint local_2d0;
  uint uStack_2cc;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_2c8;
  undefined4 local_2c0;
  uint uStack_2bc;
  uint uStack_2b8;
  undefined4 uStack_2b4;
  LPCRITICAL_SECTION local_2b0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_2a8;
  undefined8 uStack_288;
  FString local_280;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_270;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_250;
  undefined4 local_230;
  int local_22c;
  int local_228;
  undefined1 local_224 [12];
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_218;
  TMap<FTextKey,TSharedPtr<FStringTableEntry,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextKey,TSharedPtr<FStringTableEntry,1>,0>_>
  *local_1f8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1f0;
  undefined8 uStack_1d0;
  LPCRITICAL_SECTION local_1c8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1c0;
  undefined8 uStack_1a0;
  FString *local_198;
  _RTL_CRITICAL_SECTION **local_190;
  FSparseArrayAllocationInfo local_188;
  TStringView<wchar_t> local_178;
  int local_15c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_158;
  undefined4 local_11c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_118;
  undefined1 local_f8 [32];
  ForElementType<unsigned_int> local_d8;
  uint local_d0;
  int local_cc;
  int local_c8;
  int local_c4;
  FScriptContainerElement local_c0 [8];
  ForAnyElementType local_b8;
  uint local_b0;
  undefined1 local_a8 [32];
  ULONG_PTR local_88;
  int local_80;
  undefined4 local_7c;
  undefined4 local_78;
  int local_74;
  ForElementType<FSetElementId> local_68;
  int local_60;
  ulonglong local_58;
  ulonglong uVar33;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_3d8;
  p_Var30 = (LPCRITICAL_SECTION)&this->KeyMappingCS;
  local_380 = this;
  local_358 = (FArchiveState *)param_1;
  local_348 = p_Var30;
  if ((p_Var30 == (LPCRITICAL_SECTION)0x0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("Mutex",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                          ,0x1b,L""), bVar13)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  EnterCriticalSection(p_Var30);
  lpCriticalSection = (LPCRITICAL_SECTION)&this->KeysToMetaDataCS;
  local_350 = lpCriticalSection;
  if ((lpCriticalSection == (LPCRITICAL_SECTION)0x0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("Mutex",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                          ,0x1b,L""), bVar13)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  EnterCriticalSection(lpCriticalSection);
  FTextKey::SerializeAsString(&this->TableNamespace,param_1);
  if ((param_1->field_0x28 & 4) == 0) {
    if ((param_1->field_0x28 & 1) != 0) {
      local_388[0] = 0;
      ::operator<<(param_1,local_388);
      ClearSourceStrings(this,local_388[0]);
      pFVar8 = _UNK_150651568;
      plVar7 = ___xmm_00000000000000000000000000000010;
      local_368 = (ForElementType<unsigned_int>)((ulonglong)(uint)local_368._4_4_ << 0x20);
      local_378 = 1;
      if (0 < local_388[0]) {
        do {
          local_36c.Index = -1;
          FTextKey::SerializeAsString(&local_36c,param_1);
          local_280.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_280.Data.ArrayNum = 0;
          local_280.Data.ArrayMax = 0;
          ::operator<<(param_1,&local_280);
          pTVar29 = (TReferenceControllerBase<1> *)
                    CONCAT44(local_36c.Index,(this->TableNamespace).Index);
          local_328.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          TArray<wchar_t,TSizedDefaultAllocator<32>_>::CopyToEmpty<wchar_t,int>
                    (&local_328,(wchar_t *)local_280.Data.AllocatorInstance.Data,
                     local_280.Data.ArrayNum,0);
          local_390 = (FTextKeyState *)this->_padding_;
          pFVar39 = (FStringTable *)0x0;
          if (local_390 != (FTextKeyState *)0x0) {
            aVar6 = ((TReferenceControllerBase<1> *)local_390)->SharedReferenceCount;
            do {
              if (aVar6 == (atomic<int>)0x0) {
                local_390 = (FTextKeyState *)0x0;
                pFVar39 = (FStringTable *)0x0;
                goto LAB_141779df3;
              }
              LOCK();
              aVar15 = ((TReferenceControllerBase<1> *)local_390)->SharedReferenceCount;
              bVar13 = aVar6 == aVar15;
              if (bVar13) {
                ((TReferenceControllerBase<1> *)local_390)->SharedReferenceCount =
                     (atomic<int>)((int)aVar6 + 1);
                aVar15 = aVar6;
              }
              UNLOCK();
              aVar6 = aVar15;
            } while (!bVar13);
            pFVar39 = (FStringTable *)this->_padding_;
          }
LAB_141779df3:
          pFVar9 = local_390;
          if ((pFVar39 != this) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("SharedThis.Get() == this",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x67f,L""), bVar13)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if (pFVar39 == (FStringTable *)0x0) {
            bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x416,L"");
            if (bVar13) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x26c,L"");
            if (bVar13) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)0x0);
          if (pFVar9 != (FTextKeyState *)0x0) {
            LOCK();
            *(atomic<int> *)&pFVar9->KeyDataAllocations =
                 (atomic<int>)((int)*(atomic<int> *)&pFVar9->KeyDataAllocations + 1);
            UNLOCK();
          }
          pFVar18 = ::operator_new(0x38);
          FVar21.Data = local_328.AllocatorInstance.Data;
          if (pFVar18 == (FTextKeyState *)0x0) {
            pFVar18 = (FTextKeyState *)0x0;
            local_390 = pFVar8;
            plVar40 = plVar7;
          }
          else {
            *(int *)&(pFVar18->KeyDataAllocations).Elements.Chunks.AllocatorInstance.Data =
                 (int)local_378;
            *(int *)((longlong)&(pFVar18->KeyDataAllocations).Elements.Chunks.AllocatorInstance.Data
                    + 4) = (int)local_378;
            (pFVar18->DataRW).Mutex.Mutex.Ptr =
                 &
                 ___7__TIntrusiveReferenceController_VFStringTableEntry___00_SharedPointerInternals__6B_
            ;
            iVar38 = local_328.ArrayNum;
            iVar25 = local_328.ArrayMax;
            local_328.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_328.ArrayNum = 0;
            local_328.ArrayMax = 0;
            if (pFVar9 == (FTextKeyState *)0x0) {
              *(FStringTable **)&(pFVar18->KeyDataAllocations).Elements.Chunks.ArrayNum = pFVar39;
              (pFVar18->KeyDataAllocations).Elements.ChunkCursors.AllocatorInstance.Data =
                   (FScriptContainerElement *)0x0;
            }
            else {
              LOCK();
              *(atomic<int> *)&pFVar9->KeyDataAllocations =
                   (atomic<int>)((int)*(atomic<int> *)&pFVar9->KeyDataAllocations + 1);
              UNLOCK();
              *(FStringTable **)&(pFVar18->KeyDataAllocations).Elements.Chunks.ArrayNum = pFVar39;
              (pFVar18->KeyDataAllocations).Elements.ChunkCursors.AllocatorInstance.Data =
                   (FScriptContainerElement *)local_390;
              LOCK();
              *(atomic<int> *)((longlong)pFVar9 + 0xc) =
                   (atomic<int>)((int)*(atomic<int> *)((longlong)pFVar9 + 0xc) + 1);
              UNLOCK();
            }
            *(FScriptContainerElement **)
             &(pFVar18->KeyDataAllocations).Elements.ChunkCursors.ArrayNum = FVar21.Data;
            *(int *)&((TSharedPtr<FStringTable,1> *)&(pFVar18->KeyDataAllocations).Elements.Count)->
                     Object = iVar38;
            *(int *)&(pFVar18->KeyDataAllocations).Elements.field_0x24 = iVar25;
            ((FSharedReferencer<1> *)&(pFVar18->KeyDataAllocations).HashSize)->ReferenceController =
                 pTVar29;
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      ((TReferenceControllerBase<1> *)pFVar9);
            plVar40 = (longlong *)&(pFVar18->KeyDataAllocations).Elements.Chunks.ArrayNum;
            local_390 = pFVar18;
            if ((plVar40 == (longlong *)0x0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("InObject != nullptr",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x246,L""), bVar13)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)pFVar9);
          if (local_328.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_328.AllocatorInstance.Data);
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)pFVar9);
          TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::AddUninitialized((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                              *)&this->KeysToEntries,&local_188);
          pFVar9 = local_390;
          pFVar39 = (FStringTable *)0x0;
          if (local_188.Pointer != (FStringTable *)0x0) {
            *(int *)local_188.Pointer = local_36c.Index;
            *(longlong **)((longlong)local_188.Pointer + 8) = plVar40;
            *(FTextKeyState **)((longlong)local_188.Pointer + 0x10) = local_390;
            if (pFVar18 != (FTextKeyState *)0x0) {
              LOCK();
              *(int *)&(pFVar18->KeyDataAllocations).Elements.Chunks.AllocatorInstance.Data =
                   *(int *)&(pFVar18->KeyDataAllocations).Elements.Chunks.AllocatorInstance.Data + 1
              ;
              UNLOCK();
            }
            *(undefined4 *)((longlong)local_188.Pointer + 0x18) = 0xffffffff;
            pFVar39 = local_188.Pointer;
          }
          local_360 = local_188.Index;
          uVar31 = ::GetTypeHash((FTextKey *)pFVar39);
          bVar13 = TSet<TTuple<FTextKey,TSharedPtr<FStringTableEntry,1>_>,TDefaultMapHashableKeyFuncs<FTextKey,TSharedPtr<FStringTableEntry,1>,0>,FDefaultSetAllocator>
                   ::TryReplaceExisting
                             ((TSet<TTuple<FTextKey,TSharedPtr<FStringTableEntry,1>_>,TDefaultMapHashableKeyFuncs<FTextKey,TSharedPtr<FStringTableEntry,1>,0>,FDefaultSetAllocator>
                               *)&this->KeysToEntries,uVar31,
                              (TSparseSetElement<TTuple<FTextKey,TSharedPtr<FStringTableEntry,1>_>_>
                               *)pFVar39,&local_360,(bool *)0x0);
          if (!bVar13) {
            TSet<TTuple<FTextKey,TSharedPtr<FStringTableEntry,1>_>,TDefaultMapHashableKeyFuncs<FTextKey,TSharedPtr<FStringTableEntry,1>,0>,FDefaultSetAllocator>
            ::RehashOrLink((TSet<TTuple<FTextKey,TSharedPtr<FStringTableEntry,1>_>,TDefaultMapHashableKeyFuncs<FTextKey,TSharedPtr<FStringTableEntry,1>,0>,FDefaultSetAllocator>
                            *)&this->KeysToEntries,uVar31,
                           (TSparseSetElement<TTuple<FTextKey,TSharedPtr<FStringTableEntry,1>_>_> *)
                           pFVar39,local_360);
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)pFVar9);
          if (local_280.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_280.Data.AllocatorInstance.Data);
          }
          iVar38 = local_368._0_4_ + 1;
          local_368._0_4_ = iVar38;
          param_1 = (FArchive *)local_358;
        } while (iVar38 < local_388[0]);
      }
      uVar33 = local_378;
      local_a8._0_8_ = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
      local_a8._8_8_ = 0;
      local_88 = 0;
      local_80 = 0;
      local_7c = 0x80;
      local_78 = 0xffffffff;
      local_74 = 0;
      local_68 = (ForElementType<FSetElementId>)0x0;
      local_60 = 0;
      TSetPrivateFriend::
      Serialize<TTuple<FString,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>,FLocKeyMapFuncs<TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>,FDefaultSetAllocator>
                (param_1,(TSet<TTuple<FString,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>,FLocKeyMapFuncs<TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>,FDefaultSetAllocator>
                          *)local_a8);
      this_00 = &this->KeysToMetaData;
      local_390 = (FTextKeyState *)this_00;
      TSet<TTuple<FTextKey,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>,TDefaultMapHashableKeyFuncs<FTextKey,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>,0>,FDefaultSetAllocator>
      ::Reset((TSet<TTuple<FTextKey,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>,TDefaultMapHashableKeyFuncs<FTextKey,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>,0>,FDefaultSetAllocator>
               *)this_00);
      TSet<TTuple<FTextKey,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>,TDefaultMapHashableKeyFuncs<FTextKey,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>,0>,FDefaultSetAllocator>
      ::Reserve((TSet<TTuple<FTextKey,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>,TDefaultMapHashableKeyFuncs<FTextKey,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>,0>,FDefaultSetAllocator>
                 *)this_00,local_a8._8_4_ - local_74);
      local_250.Array = (TBitArray<FDefaultBitArrayAllocator> *)((longlong)local_a8 + 0x10);
      local_250._padding_._0_4_ = 0;
      local_250._padding_._4_4_ = (undefined4)uVar33;
      local_250.UnvisitedBitMask = 0xffffffff;
      local_250.CurrentBitIndex = 0;
      local_250.BaseBitIndex = 0;
      if (local_80 != 0) {
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_250);
      }
      TStack_2a8._padding_ = CONCAT44(local_250._padding_._4_4_,(undefined4)local_250._padding_);
      local_2b0 = (LPCRITICAL_SECTION)local_a8;
      TStack_2a8.CurrentBitIndex = local_250.CurrentBitIndex;
      TStack_2a8.UnvisitedBitMask = local_250.UnvisitedBitMask;
      TStack_2a8._28_4_ = local_250._28_4_;
      TStack_2a8.BaseBitIndex = local_250.BaseBitIndex;
      TStack_2a8.Array = local_250.Array;
      uStack_288 = CONCAT44(uStack_288._4_4_,local_a8._8_4_ - local_74);
      TStack_1c0.Array = local_250.Array;
      uStack_1a0 = uStack_288;
      local_1c8 = local_2b0;
      TStack_1c0._padding_ = TStack_2a8._padding_;
      TStack_1c0._16_8_ = TStack_2a8._16_8_;
      TStack_1c0._24_8_ = TStack_2a8._24_8_;
      pTVar16 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
                TConstSetBitIterator<FDefaultBitArrayAllocator>
                          (&local_118,(TBitArray<FDefaultBitArrayAllocator> *)(local_a8 + 0x10),
                           local_80);
      pFVar8 = local_390;
      TStack_2a8._padding_ = pTVar16->_padding_;
      FVar36 = (ForElementType<unsigned_int>)pTVar16->Array;
      TStack_2a8.UnvisitedBitMask = pTVar16->UnvisitedBitMask;
      TStack_2a8.CurrentBitIndex = pTVar16->CurrentBitIndex;
      TStack_2a8.BaseBitIndex = pTVar16->BaseBitIndex;
      TStack_2a8._28_4_ = *(undefined4 *)&pTVar16->field_0x1c;
      TStack_2a8.Array = (TBitArray<FDefaultBitArrayAllocator> *)FVar36;
      while( true ) {
        p_Var11 = local_1c8;
        if (local_1c8->LockCount - local_1c8[1].RecursionCount != (int)uStack_1a0) {
          `TSparseArray<TSparseSetElement<TTuple<FString,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_36f);
        }
        p_Var30 = local_348;
        lpCriticalSection = local_350;
        if (((TStack_1c0.CurrentBitIndex == TStack_2a8.CurrentBitIndex) &&
            ((ForElementType<unsigned_int>)TStack_1c0.Array == FVar36)) &&
           (p_Var11 == (LPCRITICAL_SECTION)local_a8)) break;
        puVar28 = (undefined8 *)
                  ((longlong)TStack_1c0.CurrentBitIndex * 0x68 + (longlong)p_Var11->DebugInfo);
        local_35c.Index = -1;
        _Str = (FScriptContainerElement *)*puVar28;
        iVar38 = *(int *)(puVar28 + 1) + -1;
        if (*(int *)(puVar28 + 1) == 0) {
          iVar38 = 0;
        }
        local_338.Data.ArrayMax = local_15c;
        local_338.Data.ArrayNum = iVar38;
        local_338.Data.AllocatorInstance.Data = _Str;
        if (iVar38 != 0) {
          local_390 = FTextKeyState::GetState();
          if (_Str == (FScriptContainerElement *)0x0) {
            _Str = (FScriptContainerElement *)0x0;
            iVar38 = 0;
          }
          else {
            if ((0 < iVar38) && (*(short *)(_Str + (longlong)iVar38 * 2 + -2) == 0)) {
              iVar38 = iVar38 + -1;
            }
            if (iVar38 == -1) {
              sVar19 = wcslen((wchar_t *)_Str);
              iVar38 = (int)sVar19;
            }
          }
          uVar20 = CityHash64((char *)_Str,iVar38 * 2);
          local_178.DataPtr = (wchar_t *)local_338.Data.AllocatorInstance.Data;
          local_178.Size = local_338.Data.ArrayNum;
          local_178._12_4_ = local_338.Data.ArrayMax;
          FTextKeyState::FindOrAddImpl
                    (local_390,&local_178,(int)(uVar20 >> 0x20) * 0x17 + (int)uVar20,&local_35c);
        }
        TMapBase<FTextKey,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextKey,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>,0>_>
        ::
        Emplace<FTextKey,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>
                  ((TMapBase<FTextKey,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextKey,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>,0>_>
                    *)pFVar8,&local_35c,
                   (TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                    *)(puVar28 + 2));
        TStack_1c0.UnvisitedBitMask = TStack_1c0.UnvisitedBitMask & ~TStack_1c0._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1c0);
      }
      local_60 = 0;
      if (local_68 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_68);
      }
      TSparseArray<TSparseSetElement<TTuple<FString,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FString,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FString,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_a8);
      param_1 = (FArchive *)local_358;
      this = local_380;
    }
    goto LAB_14177a2f6;
  }
  local_318 = *(int *)&(this->KeysToEntries).field_0x8 - *(int *)&(this->KeysToEntries).field_0x34;
  ::operator<<(param_1,&local_318);
  uVar33 = 0;
  puVar1 = &(this->KeysToEntries).field_0x10;
  pTVar2 = &this->KeysToEntries;
  local_378 = 1;
  local_270._padding_._4_4_ = 1;
  local_270._padding_._0_4_ = 0;
  local_270.UnvisitedBitMask = 0xffffffff;
  local_270.CurrentBitIndex = 0;
  local_270.BaseBitIndex = 0;
  local_270.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if (*(int *)&(this->KeysToEntries).field_0x28 != 0) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_270);
  }
  uStack_2f8 = CONCAT44(local_270._padding_._4_4_,(undefined4)local_270._padding_);
  uStack_2e8._4_4_ = local_270.CurrentBitIndex;
  uStack_2e8._0_4_ = local_270.UnvisitedBitMask;
  uStack_2e0._4_4_ = local_270._28_4_;
  uStack_2e0._0_4_ = local_270.BaseBitIndex;
  local_2d8 = *(int *)&(this->KeysToEntries).field_0x8 - *(int *)&(this->KeysToEntries).field_0x34;
  pTStack_2f0 = local_270.Array;
  uStack_1d0 = CONCAT44(uStack_2d4,local_2d8);
  TStack_1f0.Array = local_270.Array;
  local_300 = pTVar2;
  local_1f8 = pTVar2;
  TStack_1f0._padding_ = uStack_2f8;
  TStack_1f0._16_8_ = uStack_2e8;
  TStack_1f0._24_8_ = uStack_2e0;
  pTVar16 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
            TConstSetBitIterator<FDefaultBitArrayAllocator>
                      (&local_158,(TBitArray<FDefaultBitArrayAllocator> *)puVar1,
                       *(int *)&(this->KeysToEntries).field_0x28);
  pFVar10 = local_358;
  uStack_2f8 = pTVar16->_padding_;
  pTVar4 = pTVar16->Array;
  uVar5._0_4_ = pTVar16->UnvisitedBitMask;
  uVar5._4_4_ = pTVar16->CurrentBitIndex;
  uStack_2e0 = *(undefined8 *)&pTVar16->BaseBitIndex;
  pTStack_2f0 = pTVar4;
  uStack_2e8 = uVar5;
  while( true ) {
    pTVar12 = local_1f8;
    if (*(int *)&local_1f8->field_0x8 - *(int *)&local_1f8->field_0x34 != (int)uStack_1d0) {
      local_398[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FTextKey,TSharedPtr<FStringTableEntry,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_398);
    }
    lpCriticalSection = local_350;
    pFVar39 = local_380;
    if (((TStack_1f0.CurrentBitIndex == uVar5._4_4_) && (TStack_1f0.Array == pTVar4)) &&
       (pTVar12 == pTVar2)) break;
    piVar26 = (int *)(*(longlong *)pTVar12 + (longlong)TStack_1f0.CurrentBitIndex * 0x20);
    local_314.Index = *piVar26;
    FTextKey::SerializeAsString(&local_314,(FArchive *)pFVar10);
    if ((*(longlong *)(piVar26 + 2) == 0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar13)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    local_310.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_310.Data.ArrayNum = *(int *)(*(longlong *)(piVar26 + 2) + 0x18);
    lVar27 = (longlong)local_310.Data.ArrayNum;
    _Src = *(void **)(*(longlong *)(piVar26 + 2) + 0x10);
    if (local_310.Data.ArrayNum == 0) {
      local_310.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_310.Data.ArrayNum,0,(ForAnyElementType *)&local_310,
                 local_310.Data.ArrayNum,&local_310.Data.ArrayMax);
      memcpy(local_310.Data.AllocatorInstance.Data,_Src,lVar27 * 2);
    }
    ::operator<<((FArchive *)pFVar10,&local_310);
    if (local_310.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_310.Data.AllocatorInstance.Data);
    }
    TStack_1f0.UnvisitedBitMask = TStack_1f0.UnvisitedBitMask & ~TStack_1f0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1f0);
  }
  local_f8._0_8_ = (FScriptContainerElement *)0x0;
  local_f8._8_8_ = 0;
  local_d8 = (ForElementType<unsigned_int>)0x0;
  local_d0 = 0;
  local_cc = 0x80;
  local_c8 = -1;
  local_c4 = 0;
  local_b8.Data = (FScriptContainerElement *)0x0;
  local_b0 = 0;
  uVar23 = *(int *)&(local_380->KeysToMetaData).field_0x8 -
           *(int *)&(local_380->KeysToMetaData).field_0x34;
  uVar31 = 0;
  if (uVar23 == 0) {
    uVar14 = (uint)local_378;
  }
  else {
    if ((int)uVar23 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar23);
    }
    TSparseArrayBase<104,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Reserve((TSparseArrayBase<104,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)local_f8,uVar23);
    uVar14 = (uint)local_378;
    uVar24 = uVar14;
    if (3 < uVar23) {
      uVar32 = (ulonglong)((uVar23 >> 1) + 7) * 2 + 1;
      lVar27 = 0x3f;
      if (uVar32 != 0) {
        for (; uVar32 >> lVar27 == 0; lVar27 = lVar27 + -1) {
        }
      }
      local_230 = (undefined4)lVar27;
      uVar24 = uVar14 << ((byte)lVar27 & 0x1f);
    }
    if ((local_b0 == 0) || ((int)local_b0 < (int)uVar24)) {
      local_b0 = uVar24;
      if (local_b8.Data != (FScriptContainerElement *)0x0) {
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_b8,0,0,4);
      }
      if (uVar24 != 0) {
        uVar23 = uVar24;
        if (uVar24 < 2) {
          if (local_b8.Data != (FScriptContainerElement *)0x0) {
            uVar23 = 0;
            goto LAB_14177984c;
          }
        }
        else {
LAB_14177984c:
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_b8,0,uVar23,4)
          ;
        }
        if (0 < (int)uVar24) {
          uVar35 = (ulonglong)uVar24;
          uVar32 = uVar33;
          do {
            FVar21.Data = local_c0;
            if (local_b8.Data != (FScriptContainerElement *)0x0) {
              FVar21.Data = local_b8.Data;
            }
            uVar17 = (longlong)(int)uVar24 - 1U & uVar32;
            uVar32 = uVar32 + 1;
            *(undefined4 *)(FVar21.Data + uVar17 * 4) = 0xffffffff;
            uVar35 = uVar35 - 1;
          } while (uVar35 != 0);
        }
      }
      if (local_b0 != 0) {
        pTStack_2c8 = (TBitArray<FDefaultBitArrayAllocator> *)(local_f8 + 0x10);
        local_2d0 = 0;
        uStack_2bc = 0;
        uStack_2b8 = 0;
        uVar32 = uVar33;
        uStack_2cc = uVar14;
        if (local_d0 != 0) {
          FVar36 = (ForElementType<unsigned_int>)((longlong)local_f8 + 0x10);
          if (local_d8 != (ForElementType<unsigned_int>)0x0) {
            FVar36 = local_d8;
          }
          uVar23 = *(uint *)FVar36;
          uVar35 = uVar33;
          while (uVar23 == 0) {
            uStack_2b8 = (int)uVar35 + 0x20;
            uVar35 = (ulonglong)uStack_2b8;
            iVar38 = (int)uVar32;
            local_2d0 = iVar38 + 1;
            uVar32 = (ulonglong)local_2d0;
            if ((int)((local_d0 - 1) + ((int)(local_d0 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_2d0)
            goto LAB_14177995d;
            uVar23 = ((uint *)((longlong)FVar36 + 4))[iVar38];
          }
          uStack_2cc = -uVar23 & uVar23;
          uVar32 = (ulonglong)uStack_2cc * 2 + 1;
          lVar27 = 0x3f;
          if (uVar32 != 0) {
            for (; uVar32 >> lVar27 == 0; lVar27 = lVar27 + -1) {
            }
          }
          local_22c = (int)lVar27;
          uStack_2bc = (uStack_2b8 - 1) + local_22c;
          uVar32 = (ulonglong)uStack_2bc;
          if ((int)local_d0 < (int)uStack_2bc) {
LAB_14177995d:
            uVar32 = (ulonglong)local_d0;
            uStack_2bc = local_d0;
          }
        }
        local_2c0 = 0xffffffff;
        local_224._4_8_ = local_f8;
        local_218._padding_ = CONCAT44(uStack_2cc,local_2d0);
        local_218.CurrentBitIndex = uStack_2bc;
        local_218.UnvisitedBitMask = 0xffffffff;
        local_218._28_4_ = uStack_2b4;
        local_218.BaseBitIndex = uStack_2b8;
        pFVar39 = local_380;
        local_218.Array = pTStack_2c8;
        if ((int)uVar32 < (int)local_d0) {
          do {
            puVar28 = (undefined8 *)((longlong)(int)uVar32 * 0x68 + *(longlong *)local_224._4_8_);
            if (*(int *)(puVar28 + 1) == 0) {
              pwVar22 = L"";
            }
            else {
              pwVar22 = (wchar_t *)*puVar28;
            }
            uVar23 = FCrc::StrCrc32<wchar_t>(pwVar22,0);
            uVar23 = uVar23 & local_b0 - 1;
            *(uint *)((longlong)puVar28 + 100) = uVar23;
            FVar21.Data = local_c0;
            if (local_b8.Data != (FScriptContainerElement *)0x0) {
              FVar21.Data = local_b8.Data;
            }
            uVar35 = (longlong)(int)local_b0 - 1U & (longlong)(int)uVar23;
            *(undefined4 *)(puVar28 + 0xc) = *(undefined4 *)(FVar21.Data + uVar35 * 4);
            *(int *)(FVar21.Data + uVar35 * 4) = (int)uVar32;
            local_218.UnvisitedBitMask = local_218.UnvisitedBitMask & ~local_218._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_218);
            uVar32 = (ulonglong)(uint)local_218.CurrentBitIndex;
            pFVar39 = local_380;
          } while (local_218.CurrentBitIndex < (local_218.Array)->NumBits);
        }
      }
    }
  }
  local_368 = (ForElementType<unsigned_int>)&(pFVar39->KeysToMetaData).field_0x10;
  uVar23 = *(uint *)&(pFVar39->KeysToMetaData).field_0x28;
  local_350 = (LPCRITICAL_SECTION)&pFVar39->KeysToMetaData;
  iVar38 = 0;
  uStack_2e8._4_4_ = uVar31;
  uStack_2e0._0_4_ = uVar31;
  if (uVar23 != 0) {
    puVar37 = *(uint **)&(pFVar39->KeysToMetaData).field_0x20;
    if (puVar37 == (uint *)0x0) {
      puVar37 = (uint *)local_368;
    }
    uVar24 = *puVar37;
    uVar32 = uVar33;
    uStack_2e0._0_4_ = 0;
    uVar31 = 0;
    while (uVar24 == 0) {
      iVar38 = (int)uVar33;
      uStack_2e0._0_4_ = (int)uVar32 + 0x20;
      uVar32 = (ulonglong)(uint)uStack_2e0;
      uVar31 = iVar38 + 1;
      uVar33 = (ulonglong)uVar31;
      if ((int)((uVar23 - 1) + ((int)(uVar23 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar31) {
        iVar38 = *(int *)&(pFVar39->KeysToMetaData).field_0x28;
        uStack_2e8._4_4_ = uVar23;
        goto LAB_141779ae1;
      }
      uVar24 = puVar37[(longlong)iVar38 + 1];
    }
    iVar38 = *(int *)&(pFVar39->KeysToMetaData).field_0x28;
    uVar14 = -uVar24 & uVar24;
    local_378 = (ulonglong)uVar14;
    uVar33 = local_378 * 2 + 1;
    lVar27 = 0x3f;
    if (uVar33 != 0) {
      for (; uVar33 >> lVar27 == 0; lVar27 = lVar27 + -1) {
      }
    }
    local_228 = (int)lVar27;
    uStack_2e8._4_4_ = ((uint)uStack_2e0 - 1) + local_228;
    if (iVar38 < (int)uStack_2e8._4_4_) {
      uStack_2e8._4_4_ = uVar23;
    }
  }
LAB_141779ae1:
  local_2d8 = *(int *)&(local_380->KeysToMetaData).field_0x8 -
              *(int *)&(local_380->KeysToMetaData).field_0x34;
  uVar23 = *(uint *)&(local_380->KeysToMetaData).field_0x28;
  uStack_2e8._0_4_ = 0xffffffff;
  uStack_2f8 = CONCAT44(uVar14,uVar31);
  uVar31 = uVar23 & 0xffffffe0;
  uStack_2e0._4_4_ = local_11c;
  TStack_2a8._padding_ = uStack_2f8;
  iVar25 = (int)uVar23 >> 5;
  uStack_288 = CONCAT44(uStack_2d4,local_2d8);
  TStack_2a8.UnvisitedBitMask = 0xffffffff;
  TStack_2a8.CurrentBitIndex = uStack_2e8._4_4_;
  TStack_2a8.BaseBitIndex = (uint)uStack_2e0;
  TStack_2a8._28_4_ = local_11c;
  local_300 = (TMap<FTextKey,TSharedPtr<FStringTableEntry,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextKey,TSharedPtr<FStringTableEntry,1>,0>_>
               *)local_350;
  pTStack_2f0 = (TBitArray<FDefaultBitArrayAllocator> *)local_368;
  local_2b0 = local_350;
  TStack_2a8.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_368;
  if ((((int)uVar23 < 0) || (iVar38 < (int)uVar23)) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar13)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  p_Var30 = local_350;
  FVar36 = local_368;
  uVar14 = *(int *)((longlong)local_368 + 0x18);
  if (uVar23 != uVar14) {
    FVar34 = local_368;
    if (*(ForElementType<unsigned_int> *)((longlong)local_368 + 0x10) !=
        (ForElementType<unsigned_int>)0x0) {
      FVar34 = *(ForElementType<unsigned_int> *)((longlong)local_368 + 0x10);
    }
    uVar23 = -1 << ((byte)uVar23 & 0x1f) & *(uint *)((longlong)FVar34 + (longlong)iVar25 * 4);
    while (uVar23 == 0) {
      lVar27 = (longlong)iVar25;
      uVar31 = uVar31 + 0x20;
      iVar25 = iVar25 + 1;
      uVar23 = uVar14;
      if ((int)((uVar14 - 1) + ((int)(uVar14 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar25)
      goto LAB_141779c10;
      uVar23 = *(uint *)((longlong)FVar34 + 4 + lVar27 * 4);
    }
    uVar33 = (ulonglong)(-uVar23 & uVar23) * 2 + 1;
    lVar27 = 0x3f;
    if (uVar33 != 0) {
      for (; uVar33 >> lVar27 == 0; lVar27 = lVar27 + -1) {
      }
    }
    uVar23 = (int)lVar27 + -1 + uVar31;
    if ((int)uVar14 < (int)uVar23) {
      uVar23 = uVar14;
    }
  }
LAB_141779c10:
  while( true ) {
    p_Var11 = local_2b0;
    if (local_2b0->LockCount - local_2b0[1].RecursionCount != (int)uStack_288) {
      `TSparseArray<TSparseSetElement<TTuple<FTextKey,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_370);
    }
    param_1 = (FArchive *)local_358;
    if (((TStack_2a8.CurrentBitIndex == uVar23) &&
        ((ForElementType<unsigned_int>)TStack_2a8.Array == FVar36)) && (p_Var11 == p_Var30)) break;
    this_01 = p_Var11->DebugInfo + (longlong)TStack_2a8.CurrentBitIndex * 2;
    local_338.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_338.Data.ArrayNum = 0;
    local_338.Data.ArrayMax = 0;
    FTextKey::AppendString((FTextKey *)this_01,&local_338);
    local_198 = &local_338;
    local_190 = &this_01->CriticalSection;
    TSet<TTuple<FString,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>,FLocKeyMapFuncs<TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>,FDefaultSetAllocator>
    ::
    Emplace<TPairInitializer<FString_&&,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_const_&>_>
              ((TSet<TTuple<FString,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>,FLocKeyMapFuncs<TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>,FDefaultSetAllocator>
                *)local_f8,
               (TPairInitializer<FString_&&,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_const_&>
                *)local_224,(bool *)&local_198);
    if (local_338.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_338.Data.AllocatorInstance.Data);
    }
    TStack_2a8.UnvisitedBitMask = TStack_2a8.UnvisitedBitMask & ~TStack_2a8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_2a8);
  }
  TSetPrivateFriend::
  Serialize<TTuple<FString,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>,FLocKeyMapFuncs<TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>,FDefaultSetAllocator>
            ((FArchive *)local_358,
             (TSet<TTuple<FString,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>,FLocKeyMapFuncs<TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>,FDefaultSetAllocator>
              *)local_f8);
  p_Var30 = local_348;
  local_b0 = 0;
  if (local_b8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_f8);
  this = local_380;
LAB_14177a2f6:
  if (0 < *(int *)&(this->KeysToEntries).field_0x8 - *(int *)&(this->KeysToEntries).field_0x34) {
    FArchiveState::ThisRequiresLocalizationGather((FArchiveState *)param_1);
  }
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(lpCriticalSection);
  }
  if (p_Var30 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(p_Var30);
  }
  return;
}

// SetMetaData @ 14177d220

void __thiscall
FStringTable::SetMetaData(FStringTable *this,FTextKey *param_1,FName param_2,FString *param_3)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
  *this_00;
  FName local_res18 [2];
  FName *local_28;
  FString *local_20;
  
  lpCriticalSection = &this->KeysToMetaDataCS;
  local_res18[0] = param_2;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  uVar3 = ::GetTypeHash(param_1);
  this_00 = (TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
             *)TMapBase<FTextKey,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextKey,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>,0>_>
               ::FindOrAddImpl<FTextKey_const_&>
                         ((TMapBase<FTextKey,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextKey,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>,0>_>
                           *)&this->KeysToMetaData,uVar3,param_1);
  local_28 = local_res18;
  local_20 = param_3;
  TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<FName_const_&,FString_const_&>_>
            (this_00,(TPairInitializer<FName_const_&,FString_const_&> *)&stack0x00000008,
             (bool *)&local_28);
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return;
}

// SetNamespace @ 14177d340

void __thiscall FStringTable::SetNamespace(FStringTable *this,FTextKey *param_1)

{
  undefined1 *puVar1;
  int *piVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  void *_Src;
  code *pcVar10;
  atomic<int> aVar11;
  ForAnyElementType FVar12;
  TMap<FTextKey,TSharedPtr<FStringTableEntry,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextKey,TSharedPtr<FStringTableEntry,1>,0>_>
  *pTVar13;
  bool bVar14;
  atomic<int> aVar15;
  TReferenceControllerBase<1> *pTVar16;
  longlong lVar17;
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar18;
  undefined4 *puVar19;
  int iVar20;
  undefined1 *puVar21;
  uint *puVar22;
  uint uVar23;
  FStringTable *pFVar24;
  TReferenceControllerBase<1> *pTVar25;
  TReferenceControllerBase<1> *pTVar26;
  undefined1 local_res8 [8];
  undefined4 *local_res10;
  int local_res18;
  int local_res20;
  ForAnyElementType local_118;
  undefined8 local_110;
  TReferenceControllerBase<1> *local_108;
  FSharedReferencer<1> local_100;
  FSharedReferencer<1> *local_f8;
  TReferenceControllerBase<1> *local_f0;
  LPCRITICAL_SECTION local_e8;
  TMap<FTextKey,TSharedPtr<FStringTableEntry,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextKey,TSharedPtr<FStringTableEntry,1>,0>_>
  *local_e0;
  int iStack_d8;
  uint uStack_d4;
  undefined1 *local_d0;
  undefined4 uStack_c8;
  int iStack_c4;
  int local_c0;
  undefined4 uStack_bc;
  int iStack_b8;
  undefined4 uStack_b4;
  TMap<FTextKey,TSharedPtr<FStringTableEntry,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextKey,TSharedPtr<FStringTableEntry,1>,0>_>
  *local_b0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_a8;
  undefined8 uStack_88;
  undefined8 local_80 [5];
  undefined4 local_54;
  
  lpCriticalSection = (LPCRITICAL_SECTION)&this->KeyMappingCS;
  local_e8 = lpCriticalSection;
  if ((lpCriticalSection == (LPCRITICAL_SECTION)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("Mutex",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                          ,0x1b,L""), bVar14)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  EnterCriticalSection(lpCriticalSection);
  if ((this->TableNamespace).Index != param_1->Index) {
    iStack_d8 = 0;
    puVar1 = &(this->KeysToEntries).field_0x10;
    (this->TableNamespace).Index = param_1->Index;
    local_e0 = &this->KeysToEntries;
    iVar4 = *(int *)&(this->KeysToEntries).field_0x28;
    local_c0 = 0;
    uStack_d4 = 1;
    iStack_c4 = 0;
    if (iVar4 != 0) {
      puVar22 = *(uint **)&(this->KeysToEntries).field_0x20;
      if (puVar22 == (uint *)0x0) {
        puVar22 = (uint *)puVar1;
      }
      uVar18 = *puVar22;
      while (uVar18 == 0) {
        lVar17 = (longlong)iStack_d8;
        local_c0 = local_c0 + 0x20;
        iStack_d8 = iStack_d8 + 1;
        iStack_c4 = iVar4;
        if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_d8) goto LAB_14177d44e;
        uVar18 = puVar22[lVar17 + 1];
      }
      uStack_d4 = -uVar18 & uVar18;
      uVar3 = (ulonglong)uStack_d4 * 2 + 1;
      lVar17 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar17 == 0; lVar17 = lVar17 + -1) {
        }
      }
      local_res18 = (int)lVar17;
      iStack_c4 = local_c0 + -1 + local_res18;
      if (iVar4 < iStack_c4) {
        iStack_c4 = iVar4;
      }
    }
LAB_14177d44e:
    uVar18 = *(uint *)&(this->KeysToEntries).field_0x28;
    uStack_bc = local_54;
    iStack_b8 = *(int *)&(this->KeysToEntries).field_0x8 - *(int *)&(this->KeysToEntries).field_0x34
    ;
    uVar23 = uVar18 & 0xffffffe0;
    uStack_c8 = 0xffffffff;
    TStack_a8._padding_ = CONCAT44(uStack_d4,iStack_d8);
    TStack_a8.CurrentBitIndex = iStack_c4;
    TStack_a8.UnvisitedBitMask = 0xffffffff;
    iVar20 = (int)uVar18 >> 5;
    TStack_a8._28_4_ = local_54;
    TStack_a8.BaseBitIndex = local_c0;
    uStack_88 = CONCAT44(uStack_b4,iStack_b8);
    local_res10 = (undefined4 *)CONCAT44(local_res10._4_4_,uVar18);
    local_d0 = puVar1;
    local_b0 = local_e0;
    TStack_a8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if ((((int)uVar18 < 0) || (iVar4 < (int)uVar18)) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar14)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    uVar5 = *(uint *)&(this->KeysToEntries).field_0x28;
    if (uVar18 != uVar5) {
      puVar21 = *(undefined1 **)&(this->KeysToEntries).field_0x20;
      local_res10 = (undefined4 *)CONCAT44(local_res10._4_4_,uVar5);
      if (puVar21 == (undefined1 *)0x0) {
        puVar21 = puVar1;
      }
      uVar18 = -1 << ((byte)uVar18 & 0x1f) & *(uint *)(puVar21 + (longlong)iVar20 * 4);
      while (uVar18 == 0) {
        lVar17 = (longlong)iVar20;
        uVar23 = uVar23 + 0x20;
        iVar20 = iVar20 + 1;
        if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar20)
        goto LAB_14177d550;
        uVar18 = *(uint *)(puVar21 + lVar17 * 4 + 4);
      }
      uVar3 = (ulonglong)(-uVar18 & uVar18) * 2 + 1;
      lVar17 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar17 == 0; lVar17 = lVar17 + -1) {
        }
      }
      local_res20 = (int)lVar17;
      uVar23 = local_res20 + -1 + uVar23;
      if ((int)uVar5 < (int)uVar23) {
        uVar23 = uVar5;
      }
      local_res10 = (undefined4 *)CONCAT44(local_res10._4_4_,uVar23);
    }
LAB_14177d550:
    iVar4 = (int)local_res10;
    while( true ) {
      pTVar13 = local_b0;
      if (*(int *)&local_b0->field_0x8 - *(int *)&local_b0->field_0x34 != (int)uStack_88) {
        local_res8[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<FTextKey,TSharedPtr<FStringTableEntry,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (((TStack_a8.CurrentBitIndex == iVar4) &&
          (TStack_a8.Array ==
           (TBitArray<FDefaultBitArrayAllocator> *)&(this->KeysToEntries).field_0x10)) &&
         (lpCriticalSection = local_e8, pTVar13 == &this->KeysToEntries)) break;
      puVar19 = (undefined4 *)((longlong)TStack_a8.CurrentBitIndex * 0x20 + *(longlong *)pTVar13);
      puVar8 = *(undefined8 **)(puVar19 + 2);
      local_f8 = (FSharedReferencer<1> *)(puVar19 + 4);
      local_f0 = local_f8->ReferenceController;
      if (local_f0 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_f0->SharedReferenceCount = (atomic<int>)((int)local_f0->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_res10 = puVar19;
      if (puVar8 == (undefined8 *)0x0) {
        bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L"");
        if (bVar14) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
LAB_14177d5f9:
        plVar9 = (longlong *)puVar8[1];
        *puVar8 = 0;
        puVar8[1] = 0;
        if (plVar9 != (longlong *)0x0) {
          LOCK();
          piVar2 = (int *)((longlong)plVar9 + 0xc);
          iVar20 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar20 == 1) {
            (**(code **)(*plVar9 + 8))(plVar9,1);
          }
        }
      }
      else if (puVar8 != local_80) goto LAB_14177d5f9;
      pFVar24 = (FStringTable *)0x0;
      uVar6 = *puVar19;
      iVar20 = (this->TableNamespace).Index;
      if ((puVar8 == (undefined8 *)0x0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar14)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      local_118.Data = (FScriptContainerElement *)0x0;
      iVar7 = *(int *)(puVar8 + 3);
      _Src = (void *)puVar8[2];
      local_110 = CONCAT44(local_110._4_4_,iVar7);
      if (iVar7 == 0) {
        local_110 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,iVar7,0,&local_118,iVar7,(int *)((longlong)&local_110 + 4));
        memcpy(local_118.Data,_Src,(longlong)iVar7 * 2);
      }
      pTVar25 = (TReferenceControllerBase<1> *)this->_padding_;
      if (pTVar25 != (TReferenceControllerBase<1> *)0x0) {
        aVar11 = pTVar25->SharedReferenceCount;
        do {
          if (aVar11 == (atomic<int>)0x0) {
            pTVar25 = (TReferenceControllerBase<1> *)0x0;
            goto LAB_14177d6e7;
          }
          LOCK();
          aVar15 = pTVar25->SharedReferenceCount;
          bVar14 = aVar11 == aVar15;
          if (bVar14) {
            pTVar25->SharedReferenceCount = (atomic<int>)((int)aVar11 + 1);
            aVar15 = aVar11;
          }
          UNLOCK();
          aVar11 = aVar15;
        } while (!bVar14);
        pFVar24 = (FStringTable *)this->_padding_;
      }
LAB_14177d6e7:
      if ((pFVar24 != this) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("SharedThis.Get() == this",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x67f,L""), bVar14)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      if (pFVar24 == (FStringTable *)0x0) {
        bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x416,L"");
        if (bVar14) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x26c,L"");
        if (bVar14) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      if (pTVar25 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar25->SharedReferenceCount = (atomic<int>)((int)pTVar25->SharedReferenceCount + 1);
        UNLOCK();
      }
      pTVar16 = ::operator_new(0x38);
      FVar12.Data = local_118.Data;
      if (pTVar16 == (TReferenceControllerBase<1> *)0x0) {
        pTVar16 = (TReferenceControllerBase<1> *)0x0;
        pTVar26 = (TReferenceControllerBase<1> *)&DAT_00000010;
      }
      else {
        pTVar16->SharedReferenceCount = (atomic<int>)0x1;
        pTVar16->WeakReferenceCount = (atomic<int>)0x1;
        pTVar16->_padding_ =
             (longlong)
             &
             ___7__TIntrusiveReferenceController_VFStringTableEntry___00_SharedPointerInternals__6B_
        ;
        aVar11 = local_110._0_4_;
        aVar15 = local_110._4_4_;
        local_118.Data = (FScriptContainerElement *)0x0;
        local_110 = 0;
        if (pTVar25 == (TReferenceControllerBase<1> *)0x0) {
          pTVar16[1]._padding_ = (longlong)pFVar24;
          pTVar16[1].SharedReferenceCount = (atomic<int>)0x0;
          pTVar16[1].WeakReferenceCount = (atomic<int>)0x0;
        }
        else {
          LOCK();
          pTVar25->SharedReferenceCount = (atomic<int>)((int)pTVar25->SharedReferenceCount + 1);
          UNLOCK();
          pTVar16[1]._padding_ = (longlong)pFVar24;
          *(TReferenceControllerBase<1> **)&pTVar16[1].SharedReferenceCount = pTVar25;
          LOCK();
          pTVar25->WeakReferenceCount = (atomic<int>)((int)pTVar25->WeakReferenceCount + 1);
          UNLOCK();
        }
        pTVar16[2]._padding_ = (longlong)FVar12.Data;
        pTVar16[2].SharedReferenceCount = aVar11;
        pTVar16[2].WeakReferenceCount = aVar15;
        pTVar16[3]._padding_ = CONCAT44(uVar6,iVar20);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar25)
        ;
        pTVar26 = pTVar16 + 1;
        if ((pTVar26 == (TReferenceControllerBase<1> *)0x0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("InObject != nullptr",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x246,L""), bVar14)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar25);
      if (local_118.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_118.Data);
      }
      if (pTVar16 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar16->SharedReferenceCount = (atomic<int>)((int)pTVar16->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_108 = pTVar26;
      local_100.ReferenceController = pTVar16;
      if ((TReferenceControllerBase<1> **)(local_res10 + 2) != &local_108) {
        *(TReferenceControllerBase<1> **)(local_res10 + 2) = pTVar26;
        local_108 = (TReferenceControllerBase<1> *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(local_f8,&local_100);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_100.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar16);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar25);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_f0);
      TStack_a8.UnvisitedBitMask = TStack_a8.UnvisitedBitMask & ~TStack_a8._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_a8);
    }
  }
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(lpCriticalSection);
  }
  return;
}

// SetOwnerAsset @ 14177db30

void __thiscall FStringTable::SetOwnerAsset(FStringTable *this,UStringTable *param_1)

{
  this->OwnerAsset = param_1;
  return;
}

// SetSourceString @ 14177db60

void __thiscall FStringTable::SetSourceString(FStringTable *this,FTextKey *param_1,FString *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  TMap<FTextKey,TSharedPtr<FStringTableEntry,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextKey,TSharedPtr<FStringTableEntry,1>,0>_>
  *this_00;
  int *piVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  FStringTableEntry *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  TTuple<FTextKey,TSharedPtr<FStringTableEntry,1>_> *pTVar10;
  FString *pFVar11;
  TSharedRef<FStringTable,1> *pTVar12;
  TSharedRef<FStringTableEntry,1> *pTVar13;
  TSparseSetElement<TTuple<FTextKey,TSharedPtr<FStringTableEntry,1>_>_> *pTVar14;
  FTextId FVar15;
  int local_res8 [2];
  undefined8 *local_a8;
  FSharedReferencer<1> FStack_a0;
  undefined8 local_98;
  FSharedReferencer<1> local_90;
  TSharedRef<FStringTable_const_,1> local_88;
  FSparseArrayAllocationInfo local_78;
  TSharedRef<FStringTableEntry,1> local_68;
  TSharedRef<FStringTable,1> local_58;
  undefined8 local_48 [2];
  FString local_38;
  
  if ((param_1->Index == -1) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("!InKey.IsEmpty()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Internationalization\\StringTableCore.cpp"
                         ,0xad,L"String table key cannot be empty!"), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  lpCriticalSection = &this->KeyMappingCS;
  if ((lpCriticalSection == (FWindowsRecursiveMutex *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  this_00 = &this->KeysToEntries;
  pTVar10 = TSet<TTuple<FTextKey,TSharedPtr<FStringTableEntry,1>_>,TDefaultMapHashableKeyFuncs<FTextKey,TSharedPtr<FStringTableEntry,1>,0>,FDefaultSetAllocator>
            ::Find((TSet<TTuple<FTextKey,TSharedPtr<FStringTableEntry,1>_>,TDefaultMapHashableKeyFuncs<FTextKey,TSharedPtr<FStringTableEntry,1>,0>,FDefaultSetAllocator>
                    *)this_00,param_1);
  if (pTVar10 == (TTuple<FTextKey,TSharedPtr<FStringTableEntry,1>_> *)0x0) {
    local_a8 = (undefined8 *)0x0;
    FStack_a0.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    local_a8 = *(undefined8 **)&pTVar10->field_0x8;
    FStack_a0.ReferenceController = *(TReferenceControllerBase<1> **)&pTVar10->field_0x10;
    if (FStack_a0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (FStack_a0.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FStack_a0.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  pTVar14 = (TSparseSetElement<TTuple<FTextKey,TSharedPtr<FStringTableEntry,1>_>_> *)0x0;
  if (local_a8 != (undefined8 *)0x0) {
    if ((local_a8 == (undefined8 *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if (local_a8 != local_48) {
      plVar4 = (longlong *)local_a8[1];
      *local_a8 = 0;
      local_a8[1] = 0;
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4,1);
        }
      }
    }
  }
  FVar15.Key.Index = param_1->Index;
  FVar15.Namespace.Index = (this->TableNamespace).Index;
  pFVar11 = ::FString::FString(&local_38,param_2);
  pTVar12 = TSharedFromThis<FStringTable,1>::AsShared
                      ((TSharedFromThis<FStringTable,1> *)this,&local_58);
  local_88.Object = pTVar12->Object;
  local_88.SharedReferenceCount.ReferenceController =
       (pTVar12->SharedReferenceCount).ReferenceController;
  if (local_88.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar13 = FStringTableEntry::NewStringTableEntry(&local_68,&local_88,pFVar11,FVar15);
  local_90.ReferenceController = (pTVar13->SharedReferenceCount).ReferenceController;
  pFVar5 = pTVar13->Object;
  if (local_90.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_90.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_90.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_98 = 0;
  SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_a0,&local_90);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_90.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_58.SharedReferenceCount.ReferenceController);
  iVar2 = *(int *)&(this->KeysToEntries).field_0x34;
  if (iVar2 == 0) {
    iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,1,(ForAnyElementType *)this_00,(int *)&(this->KeysToEntries).field_0x8
                       ,(int *)&(this->KeysToEntries).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->KeysToEntries).field_0x10,false);
  }
  else {
    iVar8 = *(int *)&(this->KeysToEntries).field_0x30;
    iVar3 = *(int *)((longlong)iVar8 * 0x20 + 4 + *(longlong *)&this_00->field_0x0);
    iVar2 = iVar2 + -1;
    *(int *)&(this->KeysToEntries).field_0x30 = iVar3;
    *(int *)&(this->KeysToEntries).field_0x34 = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)((longlong)iVar3 * 0x20 + *(longlong *)&this_00->field_0x0) = 0xffffffff;
    }
  }
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this_00,&local_78,iVar8);
  if (local_78.Pointer !=
      (TSparseSetElement<TTuple<FTextKey,TSharedPtr<FStringTableEntry,1>_>_> *)0x0) {
    *(int *)local_78.Pointer = param_1->Index;
    *(FStringTableEntry **)((longlong)local_78.Pointer + 8) = pFVar5;
    *(TReferenceControllerBase<1> **)((longlong)local_78.Pointer + 0x10) =
         FStack_a0.ReferenceController;
    if (FStack_a0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (FStack_a0.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FStack_a0.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    *(undefined4 *)((longlong)local_78.Pointer + 0x18) = 0xffffffff;
    pTVar14 = local_78.Pointer;
  }
  local_res8[0] = local_78.Index;
  uVar9 = ::GetTypeHash((FTextKey *)pTVar14);
  bVar7 = TSet<TTuple<FTextKey,TSharedPtr<FStringTableEntry,1>_>,TDefaultMapHashableKeyFuncs<FTextKey,TSharedPtr<FStringTableEntry,1>,0>,FDefaultSetAllocator>
          ::TryReplaceExisting
                    ((TSet<TTuple<FTextKey,TSharedPtr<FStringTableEntry,1>_>,TDefaultMapHashableKeyFuncs<FTextKey,TSharedPtr<FStringTableEntry,1>,0>,FDefaultSetAllocator>
                      *)this_00,uVar9,pTVar14,local_res8,(bool *)0x0);
  if (!bVar7) {
    TSet<TTuple<FTextKey,TSharedPtr<FStringTableEntry,1>_>,TDefaultMapHashableKeyFuncs<FTextKey,TSharedPtr<FStringTableEntry,1>,0>,FDefaultSetAllocator>
    ::RehashOrLink((TSet<TTuple<FTextKey,TSharedPtr<FStringTableEntry,1>_>,TDefaultMapHashableKeyFuncs<FTextKey,TSharedPtr<FStringTableEntry,1>,0>,FDefaultSetAllocator>
                    *)this_00,uVar9,pTVar14,local_res8[0]);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_a0.ReferenceController);
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return;
}

