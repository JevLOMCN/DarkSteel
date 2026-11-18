// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 16

// FStringTableRegistry @ 141734f50

FStringTableRegistry * __thiscall
FStringTableRegistry::FStringTableRegistry(FStringTableRegistry *this)

{
  *(undefined8 *)&this->RegisteredStringTables = 0;
  *(undefined8 *)&(this->RegisteredStringTables).field_0x8 = 0;
  *(undefined8 *)&(this->RegisteredStringTables).field_0x20 = 0;
  *(undefined4 *)&(this->RegisteredStringTables).field_0x28 = 0;
  *(undefined4 *)&(this->RegisteredStringTables).field_0x2c = 0x80;
  *(undefined4 *)&(this->RegisteredStringTables).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->RegisteredStringTables).field_0x34 = 0;
  *(undefined8 *)&(this->RegisteredStringTables).field_0x40 = 0;
  *(undefined4 *)&(this->RegisteredStringTables).field_0x48 = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->RegisteredStringTablesCS,4000);
  *(undefined8 *)&this->LoggedMissingEntries = 0;
  *(undefined8 *)&(this->LoggedMissingEntries).field_0x8 = 0;
  *(undefined8 *)&(this->LoggedMissingEntries).field_0x20 = 0;
  *(undefined4 *)&(this->LoggedMissingEntries).field_0x28 = 0;
  *(undefined4 *)&(this->LoggedMissingEntries).field_0x2c = 0x80;
  *(undefined4 *)&(this->LoggedMissingEntries).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->LoggedMissingEntries).field_0x34 = 0;
  *(undefined8 *)&(this->LoggedMissingEntries).field_0x40 = 0;
  *(undefined4 *)&(this->LoggedMissingEntries).field_0x48 = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->LoggedMissingEntriesCS,4000);
  return this;
}

// ~FStringTableRegistry @ 141739580

void __thiscall FStringTableRegistry::~FStringTableRegistry(FStringTableRegistry *this)

{
  void *pvVar1;
  
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->LoggedMissingEntriesCS);
  *(undefined4 *)&(this->LoggedMissingEntries).field_0x48 = 0;
  pvVar1 = *(void **)&(this->LoggedMissingEntries).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TSet<FTextKey,DefaultKeyFuncs<FTextKey,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TSet<FTextKey,DefaultKeyFuncs<FTextKey,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TSet<FTextKey,DefaultKeyFuncs<FTextKey,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->LoggedMissingEntries);
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->RegisteredStringTablesCS);
  *(undefined4 *)&(this->RegisteredStringTables).field_0x48 = 0;
  pvVar1 = *(void **)&(this->RegisteredStringTables).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TSharedPtr<FStringTable,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TSharedPtr<FStringTable,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TSharedPtr<FStringTable,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this);
  return;
}

// EnumerateStringTables @ 141754140

void __thiscall
FStringTableRegistry::EnumerateStringTables
          (FStringTableRegistry *this,
          TFunctionRef<bool___cdecl(FName_const_&,TSharedRef<FStringTable_const_,1>_const_&)>
          *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  ulonglong uVar1;
  undefined1 *puVar2;
  int iVar3;
  uint uVar4;
  TReferenceControllerBase<1> *pTVar5;
  longlong lVar6;
  code *pcVar7;
  TFunctionRef<bool___cdecl(FName_const_&,TSharedRef<FStringTable_const_,1>_const_&)> *pTVar8;
  FStringTableRegistry *pFVar9;
  bool bVar10;
  char cVar11;
  longlong lVar12;
  uint uVar13;
  int iVar14;
  undefined1 *puVar15;
  uint *puVar16;
  uint uVar17;
  undefined1 local_res8 [8];
  TFunctionRef<bool___cdecl(FName_const_&,TSharedRef<FStringTable_const_,1>_const_&)> *local_res10;
  int local_res18;
  int local_res20;
  longlong local_e0;
  TReferenceControllerBase<1> *local_d8;
  FStringTableRegistry *local_d0;
  int iStack_c8;
  uint uStack_c4;
  undefined1 *local_c0;
  undefined4 uStack_b8;
  int iStack_b4;
  int local_b0;
  undefined4 uStack_ac;
  int iStack_a8;
  undefined4 uStack_a4;
  FStringTableRegistry *local_a0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_98;
  undefined8 uStack_78;
  undefined4 local_54;
  
  lpCriticalSection = &this->RegisteredStringTablesCS;
  local_res10 = param_1;
  if ((lpCriticalSection == (FWindowsRecursiveMutex *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Mutex",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                          ,0x1b,L""), bVar10)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  iVar3 = *(int *)&(this->RegisteredStringTables).field_0x28;
  puVar2 = &(this->RegisteredStringTables).field_0x10;
  iStack_c8 = 0;
  uStack_c4 = 1;
  local_b0 = 0;
  iStack_b4 = 0;
  if (iVar3 != 0) {
    puVar16 = *(uint **)&(this->RegisteredStringTables).field_0x20;
    if (puVar16 == (uint *)0x0) {
      puVar16 = (uint *)puVar2;
    }
    uVar13 = *puVar16;
    while (uVar13 == 0) {
      lVar12 = (longlong)iStack_c8;
      local_b0 = local_b0 + 0x20;
      iStack_c8 = iStack_c8 + 1;
      iStack_b4 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_c8) goto LAB_14175421e;
      uVar13 = puVar16[lVar12 + 1];
    }
    uStack_c4 = -uVar13 & uVar13;
    uVar1 = (ulonglong)uStack_c4 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_res18 = (int)lVar12;
    iStack_b4 = local_res18 + -1 + local_b0;
    if (iVar3 < iStack_b4) {
      iStack_b4 = iVar3;
    }
  }
LAB_14175421e:
  uVar13 = *(uint *)&(this->RegisteredStringTables).field_0x28;
  uStack_ac = local_54;
  uVar17 = uVar13 & 0xffffffe0;
  iStack_a8 = *(int *)&(this->RegisteredStringTables).field_0x8 -
              *(int *)&(this->RegisteredStringTables).field_0x34;
  uStack_b8 = 0xffffffff;
  TStack_98._padding_ = CONCAT44(uStack_c4,iStack_c8);
  TStack_98.CurrentBitIndex = iStack_b4;
  TStack_98.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)uVar13 >> 5;
  TStack_98._28_4_ = local_54;
  TStack_98.BaseBitIndex = local_b0;
  uStack_78 = CONCAT44(uStack_a4,iStack_a8);
  local_d0 = this;
  local_c0 = puVar2;
  local_a0 = this;
  TStack_98.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
  if ((((int)uVar13 < 0) || (iVar3 < (int)uVar13)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar10)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pTVar8 = local_res10;
  uVar4 = *(uint *)&(this->RegisteredStringTables).field_0x28;
  if (uVar13 != uVar4) {
    puVar15 = *(undefined1 **)&(this->RegisteredStringTables).field_0x20;
    if (puVar15 == (undefined1 *)0x0) {
      puVar15 = puVar2;
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar14 * 4);
    while (uVar13 == 0) {
      lVar12 = (longlong)iVar14;
      uVar17 = uVar17 + 0x20;
      iVar14 = iVar14 + 1;
      uVar13 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_141754330;
      uVar13 = *(uint *)(puVar15 + lVar12 * 4 + 4);
    }
    uVar1 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_res20 = (int)lVar12;
    uVar13 = local_res20 + -1 + uVar17;
    if ((int)uVar4 < (int)uVar13) {
      uVar13 = uVar4;
    }
  }
LAB_141754330:
  do {
    pFVar9 = local_a0;
    if (*(int *)&(local_a0->RegisteredStringTables).field_0x8 -
        *(int *)&(local_a0->RegisteredStringTables).field_0x34 != (int)uStack_78) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FName,TSharedPtr<FStringTable,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_98.CurrentBitIndex == uVar13) &&
        (TStack_98.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) && (pFVar9 == this)) {
LAB_141754429:
      if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
        LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      }
      return;
    }
    lVar12 = (longlong)TStack_98.CurrentBitIndex * 0x20 +
             *(longlong *)&pFVar9->RegisteredStringTables;
    if ((*(longlong *)(lVar12 + 8) == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x408,L""), bVar10)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pTVar5 = *(TReferenceControllerBase<1> **)(lVar12 + 0x10);
    lVar6 = *(longlong *)(lVar12 + 8);
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((lVar6 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x25d,L""), bVar10)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_e0 = lVar6;
    local_d8 = pTVar5;
    cVar11 = (**(code **)pTVar8)(*(undefined8 *)&pTVar8->field_0x8,lVar12,&local_e0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_d8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
    if (cVar11 == '\0') goto LAB_141754429;
    TStack_98.UnvisitedBitMask = TStack_98.UnvisitedBitMask & ~TStack_98._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_98);
  } while( true );
}

// FindMutableStringTable @ 141757280

TSharedPtr<FStringTable,1> * __thiscall
FStringTableRegistry::FindMutableStringTable
          (FStringTableRegistry *this,TSharedPtr<FStringTable,1> *__return_storage_ptr__,
          FName param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  TSharedPtr<FStringTable,1> *pTVar4;
  TTuple<FName,TSharedPtr<FStringTable,1>_> *pTVar5;
  
  lpCriticalSection = &this->RegisteredStringTablesCS;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedPtr<FStringTable,1> *)(*pcVar2)();
      return pTVar4;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pTVar5 = TSet<TTuple<FName,TSharedPtr<FStringTable,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FStringTable,1>,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,TSharedPtr<FStringTable,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FStringTable,1>,0>,FDefaultSetAllocator>
                   *)this,param_1);
  if (pTVar5 == (TTuple<FName,TSharedPtr<FStringTable,1>_> *)0x0) {
    __return_storage_ptr__->Object = (FStringTable *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    __return_storage_ptr__->Object = *(FStringTable **)&pTVar5->field_0x8;
    pTVar1 = *(TReferenceControllerBase<1> **)&pTVar5->field_0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return __return_storage_ptr__;
}

// FindStringTable @ 1417584f0

TSharedPtr<FStringTable_const_,1> * __thiscall
FStringTableRegistry::FindStringTable
          (FStringTableRegistry *this,TSharedPtr<FStringTable_const_,1> *__return_storage_ptr__,
          FName param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  code *pcVar1;
  bool bVar2;
  TSharedPtr<FStringTable_const_,1> *pTVar3;
  TTuple<FName,TSharedPtr<FStringTable,1>_> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  FStringTable *pFVar6;
  
  lpCriticalSection = &this->RegisteredStringTablesCS;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TSharedPtr<FStringTable_const_,1> *)(*pcVar1)();
      return pTVar3;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pTVar4 = TSet<TTuple<FName,TSharedPtr<FStringTable,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FStringTable,1>,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,TSharedPtr<FStringTable,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FStringTable,1>,0>,FDefaultSetAllocator>
                   *)this,param_1);
  if (pTVar4 == (TTuple<FName,TSharedPtr<FStringTable,1>_> *)0x0) {
    pTVar5 = (TReferenceControllerBase<1> *)0x0;
    pFVar6 = (FStringTable *)0x0;
  }
  else {
    pTVar5 = *(TReferenceControllerBase<1> **)&pTVar4->field_0x10;
    pFVar6 = *(FStringTable **)&pTVar4->field_0x8;
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

// FindStringTableAsset @ 1417585b0

UStringTable * __thiscall
FStringTableRegistry::FindStringTableAsset(FStringTableRegistry *this,FName param_1)

{
  code *pcVar1;
  bool bVar2;
  UStringTable *pUVar3;
  TSharedPtr<FStringTable_const_,1> local_18;
  
  pUVar3 = (UStringTable *)0x0;
  FindStringTable(this,&local_18,param_1);
  if (local_18.Object != (FStringTable *)0x0) {
    if (local_18.Object == (FStringTable *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pUVar3 = (UStringTable *)(*pcVar1)();
        return pUVar3;
      }
    }
    pUVar3 = (local_18.Object)->OwnerAsset;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return pUVar3;
}

// FindTableIdAndKey @ 141758630

bool __thiscall
FStringTableRegistry::FindTableIdAndKey
          (FStringTableRegistry *this,FText *param_1,FName *param_2,FString *param_3)

{
  bool bVar1;
  
  bVar1 = FTextInspector::GetTableIdAndKey(param_1,param_2,param_3);
  return bVar1;
}

// Get @ 14175b430

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FStringTableRegistry * __cdecl FStringTableRegistry::Get(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      InitializeCriticalSectionAndSpinCount
                ((LPCRITICAL_SECTION)&::Instance.RegisteredStringTablesCS,4000);
      ::Instance.LoggedMissingEntries._40_8_ = ___xmm_00000000ffffffff0000008000000000;
      ::Instance.LoggedMissingEntries._48_8_ = _UNK_150631d98;
      ::Instance.LoggedMissingEntries._0_8_ = 0;
      ::Instance.LoggedMissingEntries._8_8_ = 0;
      ::Instance.LoggedMissingEntries._32_8_ = 0;
      ::Instance.LoggedMissingEntries._64_8_ = 0;
      ::Instance.LoggedMissingEntries._72_4_ = 0;
      InitializeCriticalSectionAndSpinCount
                ((LPCRITICAL_SECTION)&::Instance.LoggedMissingEntriesCS,4000);
      atexit(`FStringTableRegistry::Get'::__l2::_dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
      return &::Instance;
    }
  }
  return &::Instance;
}

// Internal_FindLocTableEntry @ 141766480

FText * __thiscall
FStringTableRegistry::Internal_FindLocTableEntry
          (FStringTableRegistry *this,FText *__return_storage_ptr__,FName param_1,FTextKey *param_2,
          EStringTableLoadingPolicy param_3)

{
  FTextHistory_StringTableEntry *pFVar1;
  FTextHistory_StringTableEntry *pFVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 == (FTextHistory_StringTableEntry *)0x0) {
    pFVar1 = (FTextHistory_StringTableEntry *)0x0;
  }
  else {
    pFVar2 = FTextHistory_StringTableEntry::FTextHistory_StringTableEntry
                       (pFVar1,param_1,param_2,param_3);
    pFVar1 = (FTextHistory_StringTableEntry *)0x0;
    if (pFVar2 != (FTextHistory_StringTableEntry *)0x0) {
      LOCK();
      *(int *)&pFVar2->_padding_ = (int)pFVar2->_padding_ + 1;
      UNLOCK();
      pFVar1 = pFVar2;
    }
  }
  (__return_storage_ptr__->TextData).Reference = (ITextData *)pFVar1;
  __return_storage_ptr__->Flags = 0;
  return __return_storage_ptr__;
}

// Internal_LocTableFromFile @ 1417664f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FStringTableRegistry::Internal_LocTableFromFile
          (FStringTableRegistry *this,FName param_1,FTextKey *param_2,FString *param_3,
          FString *param_4)

{
  bool bVar1;
  FString local_28;
  TSharedRef<FStringTable,1> local_18;
  
  FStringTable::NewStringTable(&local_18);
  FStringTable::SetNamespace(local_18.Object,param_2);
  ::operator/(&local_28,param_4,param_3);
  bVar1 = FStringTable::ImportStrings(local_18.Object,&local_28);
  if ((!bVar1) && (2 < (byte)LogStringTable._0_1_)) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogStringTable);
  }
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  RegisterStringTable(this,param_1,&local_18);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return;
}

// Internal_NewLocTable @ 1417665e0

void __thiscall
FStringTableRegistry::Internal_NewLocTable
          (FStringTableRegistry *this,FName param_1,FTextKey *param_2)

{
  TSharedRef<FStringTable,1> local_18;
  
  FStringTable::NewStringTable(&local_18);
  FStringTable::SetNamespace(local_18.Object,param_2);
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  RegisterStringTable(this,param_1,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return;
}

// Internal_SetLocTableEntry @ 141766660

void __thiscall
FStringTableRegistry::Internal_SetLocTableEntry
          (FStringTableRegistry *this,FName param_1,FTextKey *param_2,FString *param_3)

{
  code *pcVar1;
  bool bVar2;
  FName local_res10;
  TSharedPtr<FStringTable,1> local_28;
  FString local_18;
  
  local_res10 = param_1;
  FindMutableStringTable(this,&local_28,param_1);
  if (local_28.Object == (FStringTable *)0x0) {
    ::FName::ToString(&local_res10,&local_18);
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("StringTable.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Internationalization\\StringTableRegistry.cpp"
                       ,0xde,
                       L"Attempting to add a string table entry to the unknown string table \'%s\'")
    ;
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FStringTable::SetSourceString(local_28.Object,param_2,param_3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  return;
}

// Internal_SetLocTableEntryMetaData @ 141766760

void __thiscall
FStringTableRegistry::Internal_SetLocTableEntryMetaData
          (FStringTableRegistry *this,FName param_1,FTextKey *param_2,FName param_3,FString *param_4
          )

{
  FWindowsRecursiveMutex *lpCriticalSection;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
  *this_00;
  FName local_res10 [3];
  FName local_58;
  TSharedPtr<FStringTable,1> local_50;
  FName *local_40;
  FString *local_38;
  FString local_30;
  
  local_res10[0] = param_1;
  FindMutableStringTable(this,&local_50,param_1);
  if (local_50.Object == (FStringTable *)0x0) {
    ::FName::ToString(local_res10,&local_30);
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("StringTable.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Internationalization\\StringTableRegistry.cpp"
                       ,0xe6,
                       L"Attempting to add string table entry meta-data to the unknown string table \'%s\'"
                      );
    if (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.Data.AllocatorInstance.Data);
    }
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  lpCriticalSection = &(local_50.Object)->KeysToMetaDataCS;
  local_58 = param_3;
  if ((lpCriticalSection == (FWindowsRecursiveMutex *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  uVar3 = ::GetTypeHash(param_2);
  this_00 = (TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
             *)TMapBase<FTextKey,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextKey,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>,0>_>
               ::FindOrAddImpl<FTextKey_const_&>
                         ((TMapBase<FTextKey,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextKey,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>,0>_>
                           *)&(local_50.Object)->KeysToMetaData,uVar3,param_2);
  local_40 = &local_58;
  local_38 = param_4;
  TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<FName_const_&,FString_const_&>_>
            (this_00,(TPairInitializer<FName_const_&,FString_const_&> *)(local_res10 + 2),
             (bool *)&local_40);
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_50.SharedReferenceCount.ReferenceController);
  return;
}

// LogMissingStringTableEntry @ 14176ccf0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FStringTableRegistry::LogMissingStringTableEntry
          (FStringTableRegistry *this,FName param_1,FTextKey *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  FName *pFVar5;
  TSet<FTextKey,DefaultKeyFuncs<FTextKey,0>,FDefaultSetAllocator> *this_00;
  undefined1 *puVar6;
  FName *pFVar7;
  FName FVar8;
  FTextKey local_res8 [2];
  FName local_res10;
  FString local_48;
  FString local_38;
  
  lpCriticalSection = &this->LoggedMissingEntriesCS;
  local_res10 = param_1;
  if ((lpCriticalSection == (FWindowsRecursiveMutex *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  FVar8 = local_res10;
  uVar3 = ::GetTypeHash(local_res10.ComparisonIndex.Value);
  if (*(int *)&(this->LoggedMissingEntries).field_0x8 !=
      *(int *)&(this->LoggedMissingEntries).field_0x34) {
    puVar6 = *(undefined1 **)&(this->LoggedMissingEntries).field_0x40;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &(this->LoggedMissingEntries).field_0x38;
    }
    uVar3 = *(uint *)(puVar6 + (ulonglong)
                               (*(int *)&(this->LoggedMissingEntries).field_0x48 - 1U &
                               FVar8.Number + uVar3) * 4);
    if (uVar3 != 0xffffffff) {
      do {
        pFVar5 = (FName *)((longlong)(int)uVar3 * 0x60 + *(longlong *)&this->LoggedMissingEntries);
        if (*pFVar5 == FVar8) {
          pFVar7 = pFVar5 + 1;
          if (pFVar5 == (FName *)0x0) {
            pFVar7 = (FName *)0x0;
          }
          if ((pFVar7 != (FName *)0x0) &&
             (uVar3 = ::GetTypeHash(param_2), pFVar7[1].ComparisonIndex.Value != pFVar7[6].Number))
          {
            FVar8 = pFVar7[8];
            if (pFVar7[8] == (FName)0x0) {
              FVar8 = (FName)(pFVar7 + 7);
            }
            iVar4 = *(int *)((longlong)FVar8 +
                            (ulonglong)(pFVar7[9].ComparisonIndex.Value - 1 & uVar3) * 4);
            if (iVar4 != -1) {
              goto LAB_14176ce20;
            }
          }
          break;
        }
        uVar3 = pFVar5[0xb].ComparisonIndex.Value;
      } while (uVar3 != 0xffffffff);
    }
  }
  goto LAB_14176ce3a;
  while (iVar4 = *(int *)((longlong)*pFVar7 + 4 + (longlong)iVar4 * 0xc), iVar4 != -1) {
LAB_14176ce20:
    if (*(int *)((longlong)*pFVar7 + (longlong)iVar4 * 0xc) == param_2->Index) goto LAB_14176ceec;
  }
LAB_14176ce3a:
  FVar8 = local_res10;
  uVar3 = ::GetTypeHash(local_res10.ComparisonIndex.Value);
  this_00 = TMapBase<FName,TSet<FTextKey,DefaultKeyFuncs<FTextKey,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<FTextKey,DefaultKeyFuncs<FTextKey,0>,FDefaultSetAllocator>,0>_>
            ::FindOrAddImpl<FName_const_&>
                      ((TMapBase<FName,TSet<FTextKey,DefaultKeyFuncs<FTextKey,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<FTextKey,DefaultKeyFuncs<FTextKey,0>,FDefaultSetAllocator>,0>_>
                        *)&this->LoggedMissingEntries,uVar3 + FVar8.Number,&local_res10);
  TSet<FTextKey,DefaultKeyFuncs<FTextKey,0>,FDefaultSetAllocator>::Emplace<FTextKey_const_&>
            (this_00,local_res8,(bool *)param_2);
  if (2 < (byte)LogStringTable._0_1_) {
    local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_48.Data.ArrayNum = 0;
    local_48.Data.ArrayMax = 0;
    FTextKey::AppendString(param_2,&local_48);
    ::FName::ToString(&local_res10,&local_38);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogStringTable);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
LAB_14176ceec:
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return;
}

// RegisterStringTable @ 1417731f0

void __thiscall
FStringTableRegistry::RegisterStringTable
          (FStringTableRegistry *this,FName param_1,TSharedRef<FStringTable,1> *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  code *pcVar1;
  bool bVar2;
  char cVar3;
  TTuple<FName,TSharedPtr<FStringTable,1>_> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  TReferenceControllerBase<1> *pTVar6;
  TPairInitializer<FName_const_&,TSharedPtr<FStringTable,1>_&&> local_res8;
  FStringTable *local_58;
  TReferenceControllerBase<1> *local_50;
  TSharedPtr<FStringTable,1> **local_48;
  FStringTable **local_40;
  FString local_38;
  
  lpCriticalSection = &this->RegisteredStringTablesCS;
  local_res8.Value = (TSharedPtr<FStringTable,1> *)param_1;
  if ((lpCriticalSection == (FWindowsRecursiveMutex *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (((FName)local_res8.Value == (FName)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!InTableId.IsNone()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Internationalization\\StringTableRegistry.cpp"
                         ,0x43,L"String table ID cannot be \'None\'!"), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pTVar4 = TSet<TTuple<FName,TSharedPtr<FStringTable,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FStringTable,1>,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,TSharedPtr<FStringTable,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FStringTable,1>,0>,FDefaultSetAllocator>
                   *)this,(FName)local_res8.Value);
  if (pTVar4 == (TTuple<FName,TSharedPtr<FStringTable,1>_> *)0x0) {
    pTVar5 = (TReferenceControllerBase<1> *)0x0;
    pTVar6 = pTVar5;
  }
  else {
    pTVar6 = *(TReferenceControllerBase<1> **)&pTVar4->field_0x10;
    pTVar5 = *(TReferenceControllerBase<1> **)&pTVar4->field_0x8;
    if (pTVar6 == (TReferenceControllerBase<1> *)0x0) goto LAB_1417732ac;
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
LAB_1417732ac:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  if ((pTVar5 != (TReferenceControllerBase<1> *)0x0) &&
     (((IStringTableEngineBridge::InstancePtr == (IStringTableEngineBridge *)0x0 ||
       (pTVar5[1]._padding_ == 0)) ||
      (cVar3 = (**(code **)((longlong)*IStringTableEngineBridge::InstancePtr + 0x40))(),
      cVar3 == '\0')))) {
    ::FName::ToString((FName *)&local_res8.Value,&local_38);
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!ExistingStringTable.IsValid() || IStringTableEngineBridge::IsStringTableAssetBeingReplaced(ExistingStringTable->GetOwnerAsset())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Internationalization\\StringTableRegistry.cpp"
                       ,0x47,L"String table ID \'%s\' is already in use!");
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  local_58 = param_2->Object;
  local_50 = (param_2->SharedReferenceCount).ReferenceController;
  if (local_50 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_50->SharedReferenceCount = (atomic<int>)((int)local_50->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_48 = &local_res8.Value;
  local_40 = &local_58;
  TSet<TTuple<FName,TSharedPtr<FStringTable,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FStringTable,1>,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_const_&,TSharedPtr<FStringTable,1>_&&>_>
            ((TSet<TTuple<FName,TSharedPtr<FStringTable,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FStringTable,1>,0>,FDefaultSetAllocator>
              *)this,&local_res8,(bool *)&local_48);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_50);
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return;
}

// UnregisterStringTable @ 141781de0

bool __thiscall
FStringTableRegistry::UnregisterStringTable(FStringTableRegistry *this,FName param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  int iVar5;
  FName local_res8;
  FName local_res10;
  
  lpCriticalSection = &this->RegisteredStringTablesCS;
  local_res10 = param_1;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  local_res8 = param_1;
  if (*(int *)&(this->RegisteredStringTables).field_0x8 ==
      *(int *)&(this->RegisteredStringTables).field_0x34) {
    iVar5 = 0;
  }
  else {
    uVar4 = ::GetTypeHash(param_1.ComparisonIndex.Value);
    iVar5 = TSet<TTuple<FName,TSharedPtr<FStringTable,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FStringTable,1>,0>,FDefaultSetAllocator>
            ::RemoveImpl<FName>((TSet<TTuple<FName,TSharedPtr<FStringTable,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FStringTable,1>,0>,FDefaultSetAllocator>
                                 *)this,local_res10.Number + uVar4,&local_res8);
  }
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return 0 < iVar5;
}

