// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NamingTokensUI
// Functions: 3

// ~FNamingTokenDataTreeItem @ 14d0f0060

void __thiscall FNamingTokenDataTreeItem::~FNamingTokenDataTreeItem(FNamingTokenDataTreeItem *this)

{
  atomic<int> *paVar1;
  int *piVar2;
  atomic<int> aVar3;
  int iVar4;
  TReferenceControllerBase<1> *pTVar5;
  FScriptContainerElement *pFVar6;
  ITextData *pIVar7;
  longlong *plVar8;
  
  pTVar5 = (this->Parent).WeakReferenceCount.ReferenceController;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar5->WeakReferenceCount;
    aVar3 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar3 == (atomic<int>)0x1) {
      (**(code **)(pTVar5->_padding_ + 8))(pTVar5,1);
    }
  }
  DestructItems<TSharedPtr<FNamingTokenDataTreeItem,1>,int>
            ((TSharedPtr<FNamingTokenDataTreeItem,1> *)(this->ChildItems).AllocatorInstance.Data,
             (this->ChildItems).ArrayNum);
  pFVar6 = (this->ChildItems).AllocatorInstance.Data;
  if (pFVar6 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar6);
  }
  pIVar7 = (this->NamespaceDisplayName).TextData.Reference;
  if (pIVar7 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar7 + 0x10))();
  }
  pFVar6 = (this->Namespace).Data.AllocatorInstance.Data;
  if (pFVar6 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar6);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->NamingTokenData).SharedReferenceCount.ReferenceController);
  plVar8 = (longlong *)this->_padding_;
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar8 + 0xc);
    iVar4 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar4 == 1) {
      (**(code **)(*plVar8 + 8))(plVar8,1);
    }
  }
  return;
}

// IsNamespace @ 14d10b5b0

bool __thiscall FNamingTokenDataTreeItem::IsNamespace(FNamingTokenDataTreeItem *this)

{
  return (this->NamingTokenData).Object == (FNamingTokenData *)0x0;
}

// ToString @ 14d11beb0

FString * __thiscall
FNamingTokenDataTreeItem::ToString
          (FNamingTokenDataTreeItem *this,FString *__return_storage_ptr__,bool param_1)

{
  int iVar1;
  FNamingTokenData *pFVar2;
  FScriptContainerElement *_Src;
  bool bVar3;
  bool bVar4;
  FString *pFVar5;
  FString local_38;
  FString local_28;
  
  pFVar2 = (this->NamingTokenData).Object;
  if (pFVar2 == (FNamingTokenData *)0x0) {
    ::FString::FString(__return_storage_ptr__,&this->Namespace);
  }
  else {
    if (param_1) {
      pFVar5 = UE::NamingTokens::Utils::CombineNamespaceAndTokenKey
                         (&local_28,&this->Namespace,&pFVar2->TokenKey);
      bVar4 = true;
      bVar3 = false;
    }
    else {
      bVar4 = false;
      bVar3 = true;
      local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      _Src = (pFVar2->TokenKey).Data.AllocatorInstance.Data;
      iVar1 = (pFVar2->TokenKey).Data.ArrayNum;
      local_38.Data.ArrayNum = iVar1;
      if (iVar1 == 0) {
        local_38.Data.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,iVar1,0,(ForAnyElementType *)&local_38,iVar1,&local_38.Data.ArrayMax);
        memcpy(local_38.Data.AllocatorInstance.Data,_Src,(longlong)iVar1 * 2);
      }
      pFVar5 = &local_38;
    }
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (pFVar5->Data).AllocatorInstance.Data;
    (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = (pFVar5->Data).ArrayNum;
    (__return_storage_ptr__->Data).ArrayMax = (pFVar5->Data).ArrayMax;
    (pFVar5->Data).ArrayNum = 0;
    (pFVar5->Data).ArrayMax = 0;
    if (bVar3) {
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
    if ((bVar4) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
      return __return_storage_ptr__;
    }
  }
  return __return_storage_ptr__;
}

