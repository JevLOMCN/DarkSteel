// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystemUtils
// Functions: 3

// ~FOnlineSessionSearch @ 14ec560b0

void __thiscall FOnlineSessionSearch::~FOnlineSessionSearch(FOnlineSessionSearch *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  *(undefined4 *)&(this->QuerySettings).SearchParams.field_0x48 = 0;
  this->_padding_ = (longlong)&___7FOnlineSessionSearch__6B_;
  pvVar1 = *(void **)&(this->QuerySettings).SearchParams.field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FOnlineSessionSearchParam>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FOnlineSessionSearchParam>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FOnlineSessionSearchParam>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->QuerySettings).SearchParams);
  DestructItems<FOnlineSessionSearchResult,int>
            ((FOnlineSessionSearchResult *)(this->SearchResults).AllocatorInstance.Data,
             (this->SearchResults).ArrayNum);
  pFVar2 = (this->SearchResults).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

// GetDefaultSessionSettings @ 14ec75060

TSharedPtr<FOnlineSessionSettings,1> * __thiscall
FOnlineSessionSearch::GetDefaultSessionSettings
          (FOnlineSessionSearch *this,TSharedPtr<FOnlineSessionSettings,1> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSharedPtr<FOnlineSessionSettings,1> *pTVar4;
  
  pTVar3 = ::operator_new(0xe8);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    pTVar3 = (TReferenceControllerBase<1> *)0x0;
    __return_storage_ptr__->Object = (FOnlineSessionSettings *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFOnlineSessionSettings___00_SharedPointerInternals__6B_
    ;
    FOnlineSessionSettings::FOnlineSessionSettings((FOnlineSessionSettings *)(pTVar3 + 1));
    if ((FOnlineSessionSettings *)(pTVar3 + 1) == (FOnlineSessionSettings *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TSharedPtr<FOnlineSessionSettings,1> *)(*pcVar1)();
        return pTVar4;
      }
    }
    __return_storage_ptr__->Object = (FOnlineSessionSettings *)(pTVar3 + 1);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return __return_storage_ptr__;
}

// SortSearchResults @ 14ec98b60

void __thiscall FOnlineSessionSearch::SortSearchResults(FOnlineSessionSearch *this)

{
  return;
}

