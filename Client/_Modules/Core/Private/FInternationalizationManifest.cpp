// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 8

// AddSource @ 1416df690

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EFormatVersion": Some values do not have unique names */

bool __thiscall
FInternationalizationManifest::AddSource
          (FInternationalizationManifest *this,FLocKey *param_1,FLocItem *param_2,
          FManifestContext *param_3)

{
  int *piVar1;
  FManifestContext *pFVar2;
  code *pcVar3;
  FInternationalizationManifest *pFVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  int iVar8;
  TSharedRef<FManifestEntry,1> *this_00;
  wchar_t *_Str1;
  wchar_t *_Str2;
  longlong lVar9;
  ForElementType<TSharedRef<FManifestEntry,1>_> FVar10;
  TSharedRef<FManifestEntry,1> *pTVar11;
  FManifestEntry *pFVar12;
  ForElementType<TSharedRef<FManifestEntry,1>_> FVar13;
  undefined1 auStack_188 [32];
  FManifestContext *local_168;
  FManifestContext *local_160;
  longlong local_158;
  longlong local_150;
  undefined8 local_148;
  undefined1 local_138 [16];
  TSharedPtr<FManifestEntry,1> local_128;
  TSharedRef<FManifestEntry,1> local_118;
  undefined8 local_108;
  FSharedReferencer<1> local_100;
  TPairInitializer<FString_const_&,TSharedRef<FManifestEntry,1>_const_&> local_f8;
  TSet<TTuple<FString,TSharedRef<FManifestEntry,1>_>,FLocKeyMultiMapFuncs<TSharedRef<FManifestEntry,1>_>,FDefaultSetAllocator>
  *local_e8;
  FInternationalizationManifest *local_e0;
  undefined8 local_d8;
  FSharedReferencer<1> local_d0;
  TSharedRef<FManifestEntry,1> local_c8;
  FLocItem *local_b8;
  TSharedRef<FManifestEntry,1> *local_b0;
  TArray<TSharedRef<FManifestEntry,1>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
  local_a8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_188;
  if ((param_3->Key).Str.Data.ArrayNum < 2) {
    return false;
  }
  local_e0 = this;
  FindEntryByContext(this,&local_128,param_1,param_3);
  pFVar12 = local_128.Object;
  if (local_128.Object == (FManifestEntry *)0x0) {
    local_a8.AllocatorInstance.SecondaryData = (ForElementType<TSharedRef<FManifestEntry,1>_>)0x0;
    local_a8.ArrayNum = 0;
    local_e8 = (TSet<TTuple<FString,TSharedRef<FManifestEntry,1>_>,FLocKeyMultiMapFuncs<TSharedRef<FManifestEntry,1>_>,FDefaultSetAllocator>
                *)&this->EntriesBySourceText;
    local_a8.ArrayMax = 4;
    TMultiMap<FString,TSharedRef<FManifestEntry,1>,FDefaultSetAllocator,FLocKeyMultiMapFuncs<TSharedRef<FManifestEntry,1>_>_>
    ::MultiFind<TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
              ((TMultiMap<FString,TSharedRef<FManifestEntry,1>,FDefaultSetAllocator,FLocKeyMultiMapFuncs<TSharedRef<FManifestEntry,1>_>_>
                *)local_e8,&param_2->Text,&local_a8,false);
    iVar8 = local_a8.ArrayNum;
    FVar10 = (ForElementType<TSharedRef<FManifestEntry,1>_>)&local_a8;
    if (local_a8.AllocatorInstance.SecondaryData !=
        (ForElementType<TSharedRef<FManifestEntry,1>_>)0x0) {
      FVar10 = local_a8.AllocatorInstance.SecondaryData;
    }
    FVar13 = (ForElementType<TSharedRef<FManifestEntry,1>_>)
             ((longlong)local_a8.ArrayNum * 0x10 + (longlong)FVar10);
    do {
      if (local_a8.ArrayNum != iVar8) {
        local_138[0] = 0;
        `TCheckedPointerIterator<TSharedRef<FManifestEntry,1>,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(local_138);
      }
      if (FVar10 == FVar13) {
        pFVar12 = (FManifestEntry *)0x0;
        local_100.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        FVar10 = (ForElementType<TSharedRef<FManifestEntry,1>_>)&local_a8;
        if (local_a8.AllocatorInstance.SecondaryData !=
            (ForElementType<TSharedRef<FManifestEntry,1>_>)0x0) {
          FVar10 = local_a8.AllocatorInstance.SecondaryData;
        }
        DestructItems<TSharedRef<FManifestEntry,1>,int>
                  ((TSharedRef<FManifestEntry,1> *)FVar10,local_a8.ArrayNum);
        if (local_a8.AllocatorInstance.SecondaryData !=
            (ForElementType<TSharedRef<FManifestEntry,1>_>)0x0) {
          FMemory::Free((void *)local_a8.AllocatorInstance.SecondaryData);
        }
        goto LAB_1416df879;
      }
      bVar5 = FLocItem::operator==((FLocItem *)(*(longlong *)FVar10 + 0x18),param_2);
      if ((bVar5) &&
         (pFVar12 = *(FManifestEntry **)FVar10, (pFVar12->Namespace).Hash == param_1->Hash)) {
        if ((param_1->Str).Data.ArrayNum == 0) {
          _Str2 = L"";
        }
        else {
          _Str2 = (wchar_t *)(param_1->Str).Data.AllocatorInstance.Data;
        }
        if ((pFVar12->Namespace).Str.Data.ArrayNum == 0) {
          _Str1 = L"";
        }
        else {
          _Str1 = (wchar_t *)(pFVar12->Namespace).Str.Data.AllocatorInstance.Data;
        }
        iVar7 = wcscmp(_Str1,_Str2);
        if (iVar7 == 0) goto LAB_1416df80f;
      }
      FVar10 = (ForElementType<TSharedRef<FManifestEntry,1>_>)((longlong)FVar10 + 0x10);
    } while( true );
  }
  if ((local_128.Object == (FManifestEntry *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    uVar6 = (*pcVar3)();
    return (bool)uVar6;
  }
  bVar5 = FLocItem::IsExactMatch(param_2,&pFVar12->Source);
  goto LAB_1416dfb2b;
LAB_1416df80f:
  local_100.ReferenceController =
       ((FSharedReferencer<1> *)((longlong)FVar10 + 8))->ReferenceController;
  if (local_100.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_100.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_100.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  FVar10 = (ForElementType<TSharedRef<FManifestEntry,1>_>)&local_a8;
  if (local_a8.AllocatorInstance.SecondaryData != (ForElementType<TSharedRef<FManifestEntry,1>_>)0x0
     ) {
    FVar10 = local_a8.AllocatorInstance.SecondaryData;
  }
  DestructItems<TSharedRef<FManifestEntry,1>,int>
            ((TSharedRef<FManifestEntry,1> *)FVar10,local_a8.ArrayNum);
  if (local_a8.AllocatorInstance.SecondaryData != (ForElementType<TSharedRef<FManifestEntry,1>_>)0x0
     ) {
    FMemory::Free((void *)local_a8.AllocatorInstance.SecondaryData);
  }
LAB_1416df879:
  pTVar11 = (TSharedRef<FManifestEntry,1> *)0x0;
  local_108 = 0;
  local_128.Object = pFVar12;
  SharedPointerInternals::FSharedReferencer<1>::operator=
            (&local_128.SharedReferenceCount,&local_100);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_100.ReferenceController);
  pFVar12 = local_128.Object;
  if (local_128.Object == (FManifestEntry *)0x0) {
LAB_1416df906:
    this_00 = ::operator_new(0x48);
    if (this_00 != (TSharedRef<FManifestEntry,1> *)0x0) {
      ::FString::FString((FString *)this_00,&param_1->Str);
      *(uint *)&(((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&this_00[1].Object)->
                AllocatorInstance).Data = param_1->Hash;
      FLocItem::FLocItem((FLocItem *)&this_00[1].SharedReferenceCount,param_2);
      this_00[3].SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&this_00[4].Object)->AllocatorInstance).Data
           = (FScriptContainerElement *)0x0;
      pTVar11 = this_00;
    }
    local_f8.Value = pTVar11;
    TSharedRef<FManifestEntry,1>::TSharedRef<FManifestEntry,1><FManifestEntry>
              (&local_118,(TRawPtrProxy<FManifestEntry> *)&local_f8.Value);
    local_b8 = &(local_118.Object)->Source;
    local_b0 = &local_118;
    TSet<TTuple<FString,TSharedRef<FManifestEntry,1>_>,FLocKeyMultiMapFuncs<TSharedRef<FManifestEntry,1>_>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FString_const_&,TSharedRef<FManifestEntry,1>_const_&>_>
              (local_e8,&local_f8,(bool *)&local_b8);
    local_d0.ReferenceController = local_118.SharedReferenceCount.ReferenceController;
    if (local_118.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_118.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_118.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_128.Object = local_118.Object;
    local_d8 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&local_128.SharedReferenceCount,&local_d0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_d0.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_118.SharedReferenceCount.ReferenceController);
    pFVar12 = local_128.Object;
    if ((local_128.Object == (FManifestEntry *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
  }
  else {
    if ((local_128.Object == (FManifestEntry *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
    bVar5 = FLocItem::IsExactMatch(param_2,&pFVar12->Source);
    if (!bVar5) {
      bVar5 = false;
      goto LAB_1416dfb2b;
    }
    if (pFVar12 == (FManifestEntry *)0x0) goto LAB_1416df906;
  }
  pFVar2 = (FManifestContext *)(pFVar12->Contexts).AllocatorInstance.Data;
  if ((pFVar2 <= param_3) &&
     (lVar9 = (longlong)(pFVar12->Contexts).ArrayMax, param_3 < pFVar2 + lVar9)) {
    local_150 = (longlong)(pFVar12->Contexts).ArrayNum;
    local_148 = 0x58;
    local_168 = param_3;
    local_160 = pFVar2;
    local_158 = lVar9;
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
  }
  iVar8 = (pFVar12->Contexts).ArrayNum;
  piVar1 = &(pFVar12->Contexts).ArrayMax;
  if (iVar8 == *piVar1) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x858,&(pFVar12->Contexts).AllocatorInstance,piVar1);
  }
  (pFVar12->Contexts).ArrayNum = iVar8 + 1;
  FManifestContext::FManifestContext
            ((FManifestContext *)
             ((pFVar12->Contexts).AllocatorInstance.Data + (longlong)iVar8 * 0x58),param_3);
  pFVar4 = local_e0;
  if ((pFVar12 == (FManifestEntry *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x408,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    uVar6 = (*pcVar3)();
    return (bool)uVar6;
  }
  local_c8.Object = local_128.Object;
  local_c8.SharedReferenceCount.ReferenceController =
       local_128.SharedReferenceCount.ReferenceController;
  if (local_128.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_128.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_128.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((local_128.Object == (FManifestEntry *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    uVar6 = (*pcVar3)();
    return (bool)uVar6;
  }
  TMapBase<FLocKey,TSharedRef<FManifestEntry,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FLocKey,TSharedRef<FManifestEntry,1>,1>_>
  ::Emplace<FLocKey_const_&,TSharedRef<FManifestEntry,1>_>
            ((TMapBase<FLocKey,TSharedRef<FManifestEntry,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FLocKey,TSharedRef<FManifestEntry,1>,1>_>
              *)&pFVar4->EntriesByKey,&param_3->Key,&local_c8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_c8.SharedReferenceCount.ReferenceController);
  bVar5 = true;
LAB_1416dfb2b:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_128.SharedReferenceCount.ReferenceController);
  return bVar5;
}

// ClearEntries @ 1416e3250

/* WARNING: Enum "EFormatVersion": Some values do not have unique names */

void __thiscall FInternationalizationManifest::ClearEntries(FInternationalizationManifest *this)

{
  undefined1 *puVar1;
  int iVar2;
  bool bVar3;
  
  bVar3 = 1 < *(int *)&(this->EntriesBySourceText).field_0x48;
  if (!bVar3) {
    TSet<TTuple<FString,TSharedRef<FManifestEntry,1>_>,FLocKeyMultiMapFuncs<TSharedRef<FManifestEntry,1>_>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<FString,TSharedRef<FManifestEntry,1>_>,FLocKeyMultiMapFuncs<TSharedRef<FManifestEntry,1>_>,FDefaultSetAllocator>
                      *)&this->EntriesBySourceText);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,TSharedRef<FManifestEntry,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,TSharedRef<FManifestEntry,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)&this->EntriesBySourceText,0,*(int *)&(this->EntriesBySourceText).field_0x8);
  puVar1 = &(this->EntriesBySourceText).field_0xc;
  *(undefined4 *)&(this->EntriesBySourceText).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,(ForAnyElementType *)&this->EntriesBySourceText,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->EntriesBySourceText).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->EntriesBySourceText).field_0x34 = 0;
  iVar2 = *(int *)&(this->EntriesBySourceText).field_0x2c;
  *(undefined4 *)&(this->EntriesBySourceText).field_0x28 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(this->EntriesBySourceText).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->EntriesBySourceText).field_0x10,0);
  }
  if (bVar3) {
    *(undefined4 *)&(this->EntriesBySourceText).field_0x48 = 1;
    TSet<TTuple<FString,TSharedRef<FManifestEntry,1>_>,FLocKeyMultiMapFuncs<TSharedRef<FManifestEntry,1>_>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<FString,TSharedRef<FManifestEntry,1>_>,FLocKeyMultiMapFuncs<TSharedRef<FManifestEntry,1>_>,FDefaultSetAllocator>
              *)&this->EntriesBySourceText);
  }
  bVar3 = 1 < *(int *)&(this->EntriesByKey).field_0x48;
  if (!bVar3) {
    TSet<TTuple<FLocKey,TSharedRef<FManifestEntry,1>_>,TDefaultMapHashableKeyFuncs<FLocKey,TSharedRef<FManifestEntry,1>,1>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<FLocKey,TSharedRef<FManifestEntry,1>_>,TDefaultMapHashableKeyFuncs<FLocKey,TSharedRef<FManifestEntry,1>,1>,FDefaultSetAllocator>
                      *)&this->EntriesByKey);
  }
  TSparseArray<TSparseSetElement<TTuple<FLocKey,TSharedRef<FManifestEntry,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FLocKey,TSharedRef<FManifestEntry,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)&this->EntriesByKey,0,*(int *)&(this->EntriesByKey).field_0x8);
  puVar1 = &(this->EntriesByKey).field_0xc;
  *(undefined4 *)&(this->EntriesByKey).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,0,(ForAnyElementType *)&this->EntriesByKey,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->EntriesByKey).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->EntriesByKey).field_0x34 = 0;
  iVar2 = *(int *)&(this->EntriesByKey).field_0x2c;
  *(undefined4 *)&(this->EntriesByKey).field_0x28 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(this->EntriesByKey).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->EntriesByKey).field_0x10,0);
  }
  if (bVar3) {
    *(undefined4 *)&(this->EntriesByKey).field_0x48 = 1;
    TSet<TTuple<FLocKey,TSharedRef<FManifestEntry,1>_>,TDefaultMapHashableKeyFuncs<FLocKey,TSharedRef<FManifestEntry,1>,1>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<FLocKey,TSharedRef<FManifestEntry,1>_>,TDefaultMapHashableKeyFuncs<FLocKey,TSharedRef<FManifestEntry,1>,1>,FDefaultSetAllocator>
              *)&this->EntriesByKey);
  }
  return;
}

// FindEntryByContext @ 1416ee7f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EFormatVersion": Some values do not have unique names */

TSharedPtr<FManifestEntry,1> * __thiscall
FInternationalizationManifest::FindEntryByContext
          (FInternationalizationManifest *this,TSharedPtr<FManifestEntry,1> *__return_storage_ptr__,
          FLocKey *param_1,FManifestContext *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSharedPtr<FManifestEntry,1> *pTVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  FLocMetadataObject *pFVar8;
  FLocMetadataObject *pFVar9;
  wchar_t *pwVar10;
  ulonglong uVar11;
  wchar_t *pwVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  ForElementType<TSharedRef<FManifestEntry,1>_> FVar15;
  ForElementType<TSharedRef<FManifestEntry,1>_> FVar16;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [4];
  uint local_b4;
  TSharedPtr<FManifestEntry,1> *local_b0;
  FLocKey *local_a8;
  ForElementType<TSharedRef<FManifestEntry,1>_> local_a0;
  TArray<TSharedRef<FManifestEntry,1>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
  local_98;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_d8;
  local_98.ArrayMax = 4;
  local_98.AllocatorInstance.SecondaryData = (ForElementType<TSharedRef<FManifestEntry,1>_>)0x0;
  local_98.ArrayNum = 0;
  local_b0 = __return_storage_ptr__;
  local_a8 = param_1;
  TMultiMap<FLocKey,TSharedRef<FManifestEntry,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FLocKey,TSharedRef<FManifestEntry,1>,1>_>
  ::MultiFind<TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
            (&this->EntriesByKey,&param_2->Key,&local_98,false);
  uVar11 = (ulonglong)local_98.ArrayNum;
  local_b4 = local_98.ArrayNum;
  FVar16 = (ForElementType<TSharedRef<FManifestEntry,1>_>)&local_98;
  if (local_98.AllocatorInstance.SecondaryData != (ForElementType<TSharedRef<FManifestEntry,1>_>)0x0
     ) {
    FVar16 = local_98.AllocatorInstance.SecondaryData;
  }
  FVar15 = (ForElementType<TSharedRef<FManifestEntry,1>_>)(uVar11 * 0x10 + (longlong)FVar16);
  local_a0 = FVar15;
  while( true ) {
    if (local_98.ArrayNum != (uint)uVar11) {
      `TCheckedPointerIterator<TSharedRef<FManifestEntry,1>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_b8);
    }
    if (FVar16 == FVar15) break;
    puVar1 = *(undefined8 **)FVar16;
    if (*(uint *)(puVar1 + 2) == param_1->Hash) {
      if ((param_1->Str).Data.ArrayNum == 0) {
        pwVar12 = L"";
      }
      else {
        pwVar12 = (wchar_t *)(param_1->Str).Data.AllocatorInstance.Data;
      }
      if (*(int *)(puVar1 + 1) == 0) {
        pwVar10 = L"";
      }
      else {
        pwVar10 = (wchar_t *)*puVar1;
      }
      iVar6 = wcscmp(pwVar10,pwVar12);
      if (iVar6 == 0) {
        iVar6 = *(int *)(puVar1 + 8);
        puVar13 = (undefined8 *)puVar1[7];
        puVar14 = puVar13 + (longlong)iVar6 * 0xb;
        while( true ) {
          if (*(int *)(puVar1 + 8) != iVar6) {
            `TCheckedPointerIterator<FManifestContext,int,0>::operator!='::__l2::<lambda_1>::
            operator()(local_b8);
          }
          param_1 = local_a8;
          FVar15 = local_a0;
          if (puVar13 == puVar14) break;
          if (*(uint *)(puVar13 + 2) == (param_2->Key).Hash) {
            if ((param_2->Key).Str.Data.ArrayNum == 0) {
              pwVar12 = L"";
            }
            else {
              pwVar12 = (wchar_t *)(param_2->Key).Str.Data.AllocatorInstance.Data;
            }
            if (*(int *)(puVar13 + 1) == 0) {
              pwVar10 = L"";
            }
            else {
              pwVar10 = (wchar_t *)*puVar13;
            }
            iVar7 = wcscmp(pwVar10,pwVar12);
            if (iVar7 == 0) {
              lVar2 = puVar13[9];
              if ((lVar2 == 0) && ((param_2->KeyMetadataObj).Object == (FLocMetadataObject *)0x0)) {
LAB_1416ee995:
                local_b0->Object = *(FManifestEntry **)FVar16;
                pTVar3 = ((FSharedReferencer<1> *)((longlong)FVar16 + 8))->ReferenceController;
                (local_b0->SharedReferenceCount).ReferenceController = pTVar3;
                if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
                  LOCK();
                  pTVar3->SharedReferenceCount =
                       (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
                  UNLOCK();
                }
                FVar16 = (ForElementType<TSharedRef<FManifestEntry,1>_>)&local_98;
                if (local_98.AllocatorInstance.SecondaryData !=
                    (ForElementType<TSharedRef<FManifestEntry,1>_>)0x0) {
                  FVar16 = local_98.AllocatorInstance.SecondaryData;
                }
                goto LAB_1416eea2e;
              }
              pFVar8 = (param_2->KeyMetadataObj).Object;
              if ((lVar2 != 0) == (pFVar8 != (FLocMetadataObject *)0x0)) {
                pFVar8 = TSharedPtr<FLocMetadataObject,1>::operator*<FLocMetadataObject>
                                   ((TSharedPtr<FLocMetadataObject,1> *)(puVar13 + 9));
                pFVar9 = TSharedPtr<FLocMetadataObject,1>::operator*<FLocMetadataObject>
                                   (&param_2->KeyMetadataObj);
                bVar5 = FLocMetadataObject::operator==(pFVar8,pFVar9);
                if (bVar5) goto LAB_1416ee995;
              }
              else if (((lVar2 != 0) && (*(int *)(lVar2 + 8) == *(int *)(lVar2 + 0x34))) ||
                      ((pFVar8 != (FLocMetadataObject *)0x0 &&
                       (*(int *)&(pFVar8->Values).field_0x8 == *(int *)&(pFVar8->Values).field_0x34)
                       ))) goto LAB_1416ee995;
            }
          }
          puVar13 = puVar13 + 0xb;
        }
      }
    }
    uVar11 = (ulonglong)local_b4;
    FVar16 = (ForElementType<TSharedRef<FManifestEntry,1>_>)((longlong)FVar16 + 0x10);
  }
  local_b0->Object = (FManifestEntry *)0x0;
  (local_b0->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  FVar16 = (ForElementType<TSharedRef<FManifestEntry,1>_>)&local_98;
  if (local_98.AllocatorInstance.SecondaryData != (ForElementType<TSharedRef<FManifestEntry,1>_>)0x0
     ) {
    FVar16 = local_98.AllocatorInstance.SecondaryData;
  }
LAB_1416eea2e:
  pTVar4 = local_b0;
  DestructItems<TSharedRef<FManifestEntry,1>,int>
            ((TSharedRef<FManifestEntry,1> *)FVar16,local_98.ArrayNum);
  if (local_98.AllocatorInstance.SecondaryData != (ForElementType<TSharedRef<FManifestEntry,1>_>)0x0
     ) {
    FMemory::Free((void *)local_98.AllocatorInstance.SecondaryData);
  }
  return pTVar4;
}

// FindEntryByKey @ 1416eecb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EFormatVersion": Some values do not have unique names */

TSharedPtr<FManifestEntry,1> * __thiscall
FInternationalizationManifest::FindEntryByKey
          (FInternationalizationManifest *this,TSharedPtr<FManifestEntry,1> *__return_storage_ptr__,
          FLocKey *param_1,FLocKey *param_2,FString *param_3)

{
  int iVar1;
  FManifestEntry *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  int iVar4;
  int iVar5;
  wchar_t *_Str1;
  wchar_t *_Str2;
  uint uVar6;
  ulonglong uVar7;
  ForElementType<TSharedRef<FManifestEntry,1>_> FVar8;
  ForElementType<TSharedRef<FManifestEntry,1>_> FVar9;
  bool bVar10;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [8];
  TArray<TSharedRef<FManifestEntry,1>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
  local_90;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_b8;
  local_90.ArrayMax = 4;
  local_90.AllocatorInstance.SecondaryData = (ForElementType<TSharedRef<FManifestEntry,1>_>)0x0;
  local_90.ArrayNum = 0;
  TMultiMap<FLocKey,TSharedRef<FManifestEntry,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FLocKey,TSharedRef<FManifestEntry,1>,1>_>
  ::MultiFind<TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
            (&this->EntriesByKey,param_2,&local_90,false);
  iVar4 = local_90.ArrayNum;
  uVar7 = (ulonglong)local_90.ArrayNum;
  FVar8 = (ForElementType<TSharedRef<FManifestEntry,1>_>)&local_90;
  if (local_90.AllocatorInstance.SecondaryData != (ForElementType<TSharedRef<FManifestEntry,1>_>)0x0
     ) {
    FVar8 = local_90.AllocatorInstance.SecondaryData;
  }
  FVar9 = (ForElementType<TSharedRef<FManifestEntry,1>_>)(uVar7 * 0x10 + (longlong)FVar8);
  do {
    if ((uint)uVar7 != iVar4) {
      `TCheckedPointerIterator<TSharedRef<FManifestEntry,1>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_98);
      uVar7 = (ulonglong)(uint)local_90.ArrayNum;
    }
    uVar6 = (uint)uVar7;
    if (FVar8 == FVar9) {
      __return_storage_ptr__->Object = (FManifestEntry *)0x0;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      FVar8 = (ForElementType<TSharedRef<FManifestEntry,1>_>)&local_90;
      if (local_90.AllocatorInstance.SecondaryData !=
          (ForElementType<TSharedRef<FManifestEntry,1>_>)0x0) {
        FVar8 = local_90.AllocatorInstance.SecondaryData;
      }
      goto LAB_1416eee17;
    }
    pFVar2 = *(FManifestEntry **)FVar8;
    if ((pFVar2->Namespace).Hash == param_1->Hash) {
      if ((param_1->Str).Data.ArrayNum == 0) {
        _Str2 = L"";
      }
      else {
        _Str2 = (wchar_t *)(param_1->Str).Data.AllocatorInstance.Data;
      }
      if ((pFVar2->Namespace).Str.Data.ArrayNum == 0) {
        _Str1 = L"";
      }
      else {
        _Str1 = (wchar_t *)(pFVar2->Namespace).Str.Data.AllocatorInstance.Data;
      }
      iVar5 = wcscmp(_Str1,_Str2);
      if (iVar5 == 0) {
        if (param_3 == (FString *)0x0) {
LAB_1416eedd0:
          __return_storage_ptr__->Object = pFVar2;
          pTVar3 = ((FSharedReferencer<1> *)((longlong)FVar8 + 8))->ReferenceController;
          (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
          if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
            UNLOCK();
            uVar6 = local_90.ArrayNum;
          }
          FVar8 = (ForElementType<TSharedRef<FManifestEntry,1>_>)&local_90;
          if (local_90.AllocatorInstance.SecondaryData !=
              (ForElementType<TSharedRef<FManifestEntry,1>_>)0x0) {
            FVar8 = local_90.AllocatorInstance.SecondaryData;
          }
LAB_1416eee17:
          DestructItems<TSharedRef<FManifestEntry,1>,int>
                    ((TSharedRef<FManifestEntry,1> *)FVar8,uVar6);
          if (local_90.AllocatorInstance.SecondaryData !=
              (ForElementType<TSharedRef<FManifestEntry,1>_>)0x0) {
            FMemory::Free((void *)local_90.AllocatorInstance.SecondaryData);
          }
          return __return_storage_ptr__;
        }
        iVar5 = (pFVar2->Source).Text.Data.ArrayNum;
        iVar1 = (param_3->Data).ArrayNum;
        if (iVar5 == iVar1) {
          if (iVar5 < 2) goto LAB_1416eedd0;
          iVar5 = wcscmp((wchar_t *)(pFVar2->Source).Text.Data.AllocatorInstance.Data,
                         (wchar_t *)(param_3->Data).AllocatorInstance.Data);
          bVar10 = iVar5 == 0;
        }
        else {
          bVar10 = iVar5 + iVar1 == 1;
        }
        if (bVar10) goto LAB_1416eedd0;
      }
    }
    FVar8 = (ForElementType<TSharedRef<FManifestEntry,1>_>)((longlong)FVar8 + 0x10);
  } while( true );
}

// FindEntryBySource @ 1416eee60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EFormatVersion": Some values do not have unique names */

TSharedPtr<FManifestEntry,1> * __thiscall
FInternationalizationManifest::FindEntryBySource
          (FInternationalizationManifest *this,TSharedPtr<FManifestEntry,1> *__return_storage_ptr__,
          FLocKey *param_1,FLocItem *param_2)

{
  FManifestEntry *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  wchar_t *_Str1;
  wchar_t *_Str2;
  ForElementType<TSharedRef<FManifestEntry,1>_> FVar6;
  ForElementType<TSharedRef<FManifestEntry,1>_> FVar7;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [8];
  TArray<TSharedRef<FManifestEntry,1>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
  local_90;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_b8;
  local_90.ArrayMax = 4;
  local_90.AllocatorInstance.SecondaryData = (ForElementType<TSharedRef<FManifestEntry,1>_>)0x0;
  local_90.ArrayNum = 0;
  TMultiMap<FString,TSharedRef<FManifestEntry,1>,FDefaultSetAllocator,FLocKeyMultiMapFuncs<TSharedRef<FManifestEntry,1>_>_>
  ::MultiFind<TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
            (&this->EntriesBySourceText,&param_2->Text,&local_90,false);
  iVar3 = local_90.ArrayNum;
  FVar6 = (ForElementType<TSharedRef<FManifestEntry,1>_>)&local_90;
  if (local_90.AllocatorInstance.SecondaryData != (ForElementType<TSharedRef<FManifestEntry,1>_>)0x0
     ) {
    FVar6 = local_90.AllocatorInstance.SecondaryData;
  }
  FVar7 = (ForElementType<TSharedRef<FManifestEntry,1>_>)
          ((longlong)local_90.ArrayNum * 0x10 + (longlong)FVar6);
  do {
    if (local_90.ArrayNum != iVar3) {
      `TCheckedPointerIterator<TSharedRef<FManifestEntry,1>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_98);
    }
    if (FVar6 == FVar7) {
      __return_storage_ptr__->Object = (FManifestEntry *)0x0;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      FVar6 = (ForElementType<TSharedRef<FManifestEntry,1>_>)&local_90;
      if (local_90.AllocatorInstance.SecondaryData !=
          (ForElementType<TSharedRef<FManifestEntry,1>_>)0x0) {
        FVar6 = local_90.AllocatorInstance.SecondaryData;
      }
      goto LAB_1416eef8b;
    }
    bVar4 = FLocItem::operator==((FLocItem *)(*(longlong *)FVar6 + 0x18),param_2);
    if ((bVar4) && (pFVar1 = *(FManifestEntry **)FVar6, (pFVar1->Namespace).Hash == param_1->Hash))
    {
      if ((param_1->Str).Data.ArrayNum == 0) {
        _Str2 = L"";
      }
      else {
        _Str2 = (wchar_t *)(param_1->Str).Data.AllocatorInstance.Data;
      }
      if ((pFVar1->Namespace).Str.Data.ArrayNum == 0) {
        _Str1 = L"";
      }
      else {
        _Str1 = (wchar_t *)(pFVar1->Namespace).Str.Data.AllocatorInstance.Data;
      }
      iVar5 = wcscmp(_Str1,_Str2);
      if (iVar5 == 0) {
        __return_storage_ptr__->Object = pFVar1;
        pTVar2 = ((FSharedReferencer<1> *)((longlong)FVar6 + 8))->ReferenceController;
        (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
        if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
          UNLOCK();
        }
        FVar6 = (ForElementType<TSharedRef<FManifestEntry,1>_>)&local_90;
        if (local_90.AllocatorInstance.SecondaryData !=
            (ForElementType<TSharedRef<FManifestEntry,1>_>)0x0) {
          FVar6 = local_90.AllocatorInstance.SecondaryData;
        }
LAB_1416eef8b:
        DestructItems<TSharedRef<FManifestEntry,1>,int>
                  ((TSharedRef<FManifestEntry,1> *)FVar6,local_90.ArrayNum);
        if (local_90.AllocatorInstance.SecondaryData !=
            (ForElementType<TSharedRef<FManifestEntry,1>_>)0x0) {
          FMemory::Free((void *)local_90.AllocatorInstance.SecondaryData);
        }
        return __return_storage_ptr__;
      }
    }
    FVar6 = (ForElementType<TSharedRef<FManifestEntry,1>_>)((longlong)FVar6 + 0x10);
  } while( true );
}

// UpdateEntry @ 141719c60

/* WARNING: Enum "EFormatVersion": Some values do not have unique names */

void __thiscall
FInternationalizationManifest::UpdateEntry
          (FInternationalizationManifest *this,TSharedRef<FManifestEntry,1> *param_1,
          TSharedRef<FManifestEntry,1> *param_2)

{
  int iVar1;
  FManifestEntry *pFVar2;
  FLocKey *pFVar3;
  FLocKey *pFVar4;
  undefined1 local_res8 [8];
  FLocItem *local_38;
  TSharedRef<FManifestEntry,1> *local_30;
  
  pFVar2 = param_1->Object;
  iVar1 = (pFVar2->Contexts).ArrayNum;
  pFVar3 = (FLocKey *)(pFVar2->Contexts).AllocatorInstance.Data;
  pFVar4 = (FLocKey *)((longlong)pFVar3 + (longlong)iVar1 * 0x58);
  while( true ) {
    if ((pFVar2->Contexts).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FManifestContext,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar3 == pFVar4) break;
    TMultiMap<FLocKey,TSharedRef<FManifestEntry,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FLocKey,TSharedRef<FManifestEntry,1>,1>_>
    ::RemoveSingle(&this->EntriesByKey,pFVar3,param_1);
    pFVar3 = (FLocKey *)&pFVar3[3].Hash;
  }
  pFVar2 = param_2->Object;
  iVar1 = (pFVar2->Contexts).ArrayNum;
  pFVar3 = (FLocKey *)(pFVar2->Contexts).AllocatorInstance.Data;
  pFVar4 = (FLocKey *)((longlong)pFVar3 + (longlong)iVar1 * 0x58);
  while( true ) {
    if ((pFVar2->Contexts).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FManifestContext,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar3 == pFVar4) break;
    TMapBase<FLocKey,TSharedRef<FManifestEntry,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FLocKey,TSharedRef<FManifestEntry,1>,1>_>
    ::Emplace<FLocKey_const_&,TSharedRef<FManifestEntry,1>_const_&>
              ((TMapBase<FLocKey,TSharedRef<FManifestEntry,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FLocKey,TSharedRef<FManifestEntry,1>,1>_>
                *)&this->EntriesByKey,pFVar3,param_2);
    pFVar3 = (FLocKey *)&pFVar3[3].Hash;
  }
  TMultiMap<FString,TSharedRef<FManifestEntry,1>,FDefaultSetAllocator,FLocKeyMultiMapFuncs<TSharedRef<FManifestEntry,1>_>_>
  ::RemoveSingle(&this->EntriesBySourceText,&(param_1->Object->Source).Text,param_1);
  local_38 = &param_2->Object->Source;
  local_30 = param_2;
  TSet<TTuple<FString,TSharedRef<FManifestEntry,1>_>,FLocKeyMultiMapFuncs<TSharedRef<FManifestEntry,1>_>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_const_&,TSharedRef<FManifestEntry,1>_const_&>_>
            ((TSet<TTuple<FString,TSharedRef<FManifestEntry,1>_>,FLocKeyMultiMapFuncs<TSharedRef<FManifestEntry,1>_>,FDefaultSetAllocator>
              *)&this->EntriesBySourceText,
             (TPairInitializer<FString_const_&,TSharedRef<FManifestEntry,1>_const_&> *)local_res8,
             (bool *)&local_38);
  return;
}

// FInternationalizationManifest @ 141be4390

/* WARNING: Enum "EFormatVersion": Some values do not have unique names */

FInternationalizationManifest * __thiscall
FInternationalizationManifest::FInternationalizationManifest(FInternationalizationManifest *this)

{
  this->FormatVersion = EscapeFixes;
  *(undefined8 *)&this->EntriesBySourceText = 0;
  *(undefined8 *)&(this->EntriesBySourceText).field_0x8 = 0;
  *(undefined8 *)&(this->EntriesBySourceText).field_0x20 = 0;
  *(undefined4 *)&(this->EntriesBySourceText).field_0x28 = 0;
  *(undefined4 *)&(this->EntriesBySourceText).field_0x2c = 0x80;
  *(undefined4 *)&(this->EntriesBySourceText).field_0x34 = 0;
  *(undefined4 *)&(this->EntriesBySourceText).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->EntriesBySourceText).field_0x40 = 0;
  *(undefined4 *)&(this->EntriesBySourceText).field_0x48 = 0;
  *(undefined8 *)&this->EntriesByKey = 0;
  *(undefined8 *)&(this->EntriesByKey).field_0x8 = 0;
  *(undefined8 *)&(this->EntriesByKey).field_0x20 = 0;
  *(undefined4 *)&(this->EntriesByKey).field_0x28 = 0;
  *(undefined4 *)&(this->EntriesByKey).field_0x2c = 0x80;
  *(undefined4 *)&(this->EntriesByKey).field_0x34 = 0;
  *(undefined4 *)&(this->EntriesByKey).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->EntriesByKey).field_0x40 = 0;
  *(undefined4 *)&(this->EntriesByKey).field_0x48 = 0;
  return this;
}

// ~FInternationalizationManifest @ 141becd00

/* WARNING: Enum "EFormatVersion": Some values do not have unique names */

void __thiscall
FInternationalizationManifest::~FInternationalizationManifest(FInternationalizationManifest *this)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->EntriesByKey).field_0x48 = 0;
  pvVar1 = *(void **)&(this->EntriesByKey).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FLocKey,TSharedRef<FManifestEntry,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FLocKey,TSharedRef<FManifestEntry,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FLocKey,TSharedRef<FManifestEntry,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->EntriesByKey);
  *(undefined4 *)&(this->EntriesBySourceText).field_0x48 = 0;
  pvVar1 = *(void **)&(this->EntriesBySourceText).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,TSharedRef<FManifestEntry,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,TSharedRef<FManifestEntry,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,TSharedRef<FManifestEntry,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->EntriesBySourceText);
  return;
}

