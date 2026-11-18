// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystemNull
// Functions: 4

// ~FOnlineStoreOffer @ 14ed12e30

void __thiscall FOnlineStoreOffer::~FOnlineStoreOffer(FOnlineStoreOffer *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  ITextData *pIVar3;
  
  *(undefined4 *)&(this->DynamicFields).field_0x48 = 0;
  this->_padding_ = (longlong)&___7FOnlineStoreOffer__6B_;
  pvVar1 = *(void **)&(this->DynamicFields).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->DynamicFields);
  pFVar2 = (this->CurrencyCode).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pIVar3 = (this->PriceText).TextData.Reference;
  if (pIVar3 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar3 + 0x10))();
  }
  pIVar3 = (this->RegularPriceText).TextData.Reference;
  if (pIVar3 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar3 + 0x10))();
  }
  pIVar3 = (this->LongDescription).TextData.Reference;
  if (pIVar3 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar3 + 0x10))();
  }
  pIVar3 = (this->Description).TextData.Reference;
  if (pIVar3 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar3 + 0x10))();
  }
  pIVar3 = (this->Title).TextData.Reference;
  if (pIVar3 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar3 + 0x10))();
  }
  pFVar2 = (this->OfferId).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

// GetDisplayPrice @ 14ed252d0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

FText * __thiscall
FOnlineStoreOffer::GetDisplayPrice(FOnlineStoreOffer *this,FText *__return_storage_ptr__)

{
  ITextData *pIVar1;
  bool bVar2;
  undefined1 local_res8 [8];
  TSharedPtr<FCulture,1> local_18;
  
  bVar2 = FText::IsEmpty(&this->PriceText);
  if (!bVar2) {
    (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
    pIVar1 = (this->PriceText).TextData.Reference;
    (__return_storage_ptr__->TextData).Reference = pIVar1;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
    }
    __return_storage_ptr__->Flags = (this->PriceText).Flags;
    return __return_storage_ptr__;
  }
  local_18.Object = (FCulture *)0x0;
  local_18.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  FText::AsCurrencyBase(__return_storage_ptr__,this->NumericPrice,&this->CurrencyCode,&local_18,-1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// GetDisplayRegularPrice @ 14ed25380

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

FText * __thiscall
FOnlineStoreOffer::GetDisplayRegularPrice(FOnlineStoreOffer *this,FText *__return_storage_ptr__)

{
  ITextData *pIVar1;
  bool bVar2;
  undefined1 local_res8 [8];
  TSharedPtr<FCulture,1> local_18;
  
  bVar2 = FText::IsEmpty(&this->RegularPriceText);
  if (!bVar2) {
    (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
    pIVar1 = (this->RegularPriceText).TextData.Reference;
    (__return_storage_ptr__->TextData).Reference = pIVar1;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
    }
    __return_storage_ptr__->Flags = (this->RegularPriceText).Flags;
    return __return_storage_ptr__;
  }
  local_18.Object = (FCulture *)0x0;
  local_18.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  FText::AsCurrencyBase(__return_storage_ptr__,this->RegularPrice,&this->CurrencyCode,&local_18,-1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// IsPurchaseable @ 14ed27bc0

bool __thiscall FOnlineStoreOffer::IsPurchaseable(FOnlineStoreOffer *this)

{
  return true;
}

