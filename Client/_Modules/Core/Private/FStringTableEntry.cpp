// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 10

// FStringTableEntry @ 141734ea0

FStringTableEntry * __thiscall
FStringTableEntry::FStringTableEntry
          (FStringTableEntry *this,TSharedRef<FStringTable_const_,1> *param_1,FString *param_2,
          FTextId param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  FScriptContainerElement *pFVar2;
  
  (this->OwnerTable).Object = param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (this->OwnerTable).WeakReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
    UNLOCK();
  }
  (this->SourceString).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SourceString).Data.AllocatorInstance.Data = (param_2->Data).AllocatorInstance.Data;
  (param_2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SourceString).Data.ArrayNum = (param_2->Data).ArrayNum;
  (this->SourceString).Data.ArrayMax = (param_2->Data).ArrayMax;
  (param_2->Data).ArrayNum = 0;
  (param_2->Data).ArrayMax = 0;
  this->DisplayStringId = param_3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  pFVar2 = (param_2->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return this;
}

// FStringTableEntry @ 141734f20

FStringTableEntry * __thiscall FStringTableEntry::FStringTableEntry(FStringTableEntry *this)

{
  (this->DisplayStringId).Namespace = -1;
  (this->DisplayStringId).Key = -1;
  (this->OwnerTable).Object = (FStringTable *)0x0;
  (this->OwnerTable).WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->SourceString).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SourceString).Data.ArrayNum = 0;
  (this->SourceString).Data.ArrayMax = 0;
  return this;
}

// Disown @ 1417518e0

void __thiscall FStringTableEntry::Disown(FStringTableEntry *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  if (this != (FStringTableEntry *)&stack0xffffffffffffffe8) {
    pTVar3 = (this->OwnerTable).WeakReferenceCount.ReferenceController;
    (this->OwnerTable).Object = (FStringTable *)0x0;
    (this->OwnerTable).WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar3->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
                    /* WARNING: Could not recover jumptable at 0x00014175191e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
        return;
      }
    }
  }
  return;
}

// GetDisplayString @ 14175c880

TDisplayStringPtr<FString_const_> __thiscall
FStringTableEntry::GetDisplayString(FStringTableEntry *this)

{
  code *pcVar1;
  bool bVar2;
  TDisplayStringPtr<FString_const_> TVar3;
  FTextLocalizationManager *this_00;
  TDisplayStringPtr<FString_const_> in_RDX;
  FString local_res18;
  
  if ((TextLocalizationManager::DisplayStringSupport != 0) &&
     (TextLocalizationManager::DisplayStringSupport != 1)) {
    if (TextLocalizationManager::DisplayStringSupport == 2) {
      *(undefined8 *)in_RDX = 0;
      return in_RDX;
    }
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Internationalization\\TextLocalizationManager.cpp"
                       ,0x2b7,L"Unknown EDisplayStringSupport!");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      TVar3 = (TDisplayStringPtr<FString_const_>)(*pcVar1)();
      return TVar3;
    }
  }
  this_00 = FTextLocalizationManager::Get();
  local_res18.Data.AllocatorInstance.Data._0_4_ = (this->DisplayStringId).Key.Index;
  local_res18.Data.ArrayNum = (this->DisplayStringId).Namespace.Index;
  FTextLocalizationManager::GetDisplayString
            (this_00,(FTextKey *)in_RDX,(FTextKey *)&local_res18.Data.ArrayNum,&local_res18);
  return in_RDX;
}

// GetDisplayStringId @ 14175cd80

FTextId __thiscall FStringTableEntry::GetDisplayStringId(FStringTableEntry *this)

{
  FTextId in_RDX;
  
  *(FTextId *)in_RDX = this->DisplayStringId;
  return in_RDX;
}

// GetPlaceholderSourceString @ 141760750

FString * __cdecl FStringTableEntry::GetPlaceholderSourceString(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FString::FString(&MissingSourceString,L"<MISSING STRING TABLE ENTRY>");
      atexit(`FStringTableEntry::GetPlaceholderSourceString'::__l2::
             _dynamic_atexit_destructor_for__MissingSourceString__);
      _Init_thread_footer(&::_TSS0);
      return &MissingSourceString;
    }
  }
  return &MissingSourceString;
}

// GetSourceString @ 141760f20

FString * __thiscall FStringTableEntry::GetSourceString(FStringTableEntry *this)

{
  return &this->SourceString;
}

// IsOwned @ 141766fe0

bool __thiscall FStringTableEntry::IsOwned(FStringTableEntry *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  if ((((this->OwnerTable).Object != (FStringTable *)0x0) &&
      (pTVar1 = (this->OwnerTable).WeakReferenceCount.ReferenceController,
      pTVar1 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar1->SharedReferenceCount)) {
    return true;
  }
  return false;
}

// IsOwnedBy @ 141767010

bool __thiscall FStringTableEntry::IsOwnedBy(FStringTableEntry *this,FStringTable *param_1)

{
  FStringTable *pFVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  FStringTable *pFVar4;
  FStringTable *pFVar5;
  bool bVar6;
  
  pFVar1 = (FStringTable *)(this->OwnerTable).WeakReferenceCount.ReferenceController;
  pFVar4 = (FStringTable *)0x0;
  pFVar5 = pFVar1;
  if (pFVar1 != (FStringTable *)0x0) {
    aVar2 = *(atomic<int> *)&pFVar1->_padding_;
    do {
      pFVar5 = pFVar4;
      if (aVar2 == (atomic<int>)0x0) goto LAB_141767045;
      LOCK();
      aVar3 = *(atomic<int> *)&pFVar1->_padding_;
      bVar6 = aVar2 == aVar3;
      if (bVar6) {
        *(atomic<int> *)&pFVar1->_padding_ = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar6);
    pFVar4 = (this->OwnerTable).Object;
    pFVar5 = pFVar1;
  }
LAB_141767045:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar5);
  return pFVar4 == param_1;
}

// NewStringTableEntry @ 14176d4d0

TSharedRef<FStringTableEntry,1> * __cdecl
FStringTableEntry::NewStringTableEntry
          (TSharedRef<FStringTableEntry,1> *__return_storage_ptr__,
          TSharedRef<FStringTable_const_,1> *param_1,FString *param_2,FTextId param_3)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  FScriptContainerElement *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  FStringTable *pFVar5;
  code *pcVar6;
  bool bVar7;
  TReferenceControllerBase<1> *pTVar8;
  TSharedRef<FStringTableEntry,1> *pTVar9;
  
  pTVar8 = ::operator_new(0x38);
  if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Object = (FStringTableEntry *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar8->SharedReferenceCount = (atomic<int>)0x1;
    pTVar8->WeakReferenceCount = (atomic<int>)0x1;
    pTVar8->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VFStringTableEntry___00_SharedPointerInternals__6B_;
    pFVar3 = (param_2->Data).AllocatorInstance.Data;
    (param_2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    aVar1 = (atomic<int>)(param_2->Data).ArrayNum;
    aVar2 = (atomic<int>)(param_2->Data).ArrayMax;
    (param_2->Data).ArrayNum = 0;
    (param_2->Data).ArrayMax = 0;
    pTVar4 = (param_1->SharedReferenceCount).ReferenceController;
    pFVar5 = param_1->Object;
    if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
      pTVar8[1]._padding_ = (longlong)pFVar5;
      pTVar8[1].SharedReferenceCount = (atomic<int>)0x0;
      pTVar8[1].WeakReferenceCount = (atomic<int>)0x0;
    }
    else {
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
      pTVar8[1]._padding_ = (longlong)pFVar5;
      *(TReferenceControllerBase<1> **)&pTVar8[1].SharedReferenceCount = pTVar4;
      LOCK();
      pTVar4->WeakReferenceCount = (atomic<int>)((int)pTVar4->WeakReferenceCount + 1);
      UNLOCK();
    }
    pTVar8[2]._padding_ = (longlong)pFVar3;
    pTVar8[2].SharedReferenceCount = aVar1;
    pTVar8[2].WeakReferenceCount = aVar2;
    pTVar8[3]._padding_ = (longlong)param_3;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar8;
    __return_storage_ptr__->Object = (FStringTableEntry *)(pTVar8 + 1);
    if ((FStringTableEntry *)(pTVar8 + 1) == (FStringTableEntry *)0x0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        pTVar9 = (TSharedRef<FStringTableEntry,1> *)(*pcVar6)();
        return pTVar9;
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  pFVar3 = (param_2->Data).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  return __return_storage_ptr__;
}

