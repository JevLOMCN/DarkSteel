// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystemUtils
// Functions: 4

// StaticStruct @ 14ec461e0

UScriptStruct * __cdecl FOnlineProxyStoreOffer::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FOnlineProxyStoreOffer.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_OnlineSubsystemUtils();
    Z_Registration_Info_UScriptStruct_FOnlineProxyStoreOffer.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FOnlineProxyStoreOffer,(UObject *)pUVar1,
                         L"OnlineProxyStoreOffer");
  }
  return Z_Registration_Info_UScriptStruct_FOnlineProxyStoreOffer.OuterSingleton;
}

// FOnlineProxyStoreOffer @ 14ec52130

FOnlineProxyStoreOffer * __thiscall
FOnlineProxyStoreOffer::FOnlineProxyStoreOffer
          (FOnlineProxyStoreOffer *this,FOnlineProxyStoreOffer *param_1)

{
  ITextData *pIVar1;
  undefined1 local_res8 [8];
  
  ::FString::FString(&this->OfferId,&param_1->OfferId);
  (this->Title).TextData.Reference = (ITextData *)0x0;
  pIVar1 = (param_1->Title).TextData.Reference;
  (this->Title).TextData.Reference = pIVar1;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
  }
  (this->Title).Flags = (param_1->Title).Flags;
  (this->Description).TextData.Reference = (ITextData *)0x0;
  pIVar1 = (param_1->Description).TextData.Reference;
  (this->Description).TextData.Reference = pIVar1;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
  }
  (this->Description).Flags = (param_1->Description).Flags;
  (this->LongDescription).TextData.Reference = (ITextData *)0x0;
  pIVar1 = (param_1->LongDescription).TextData.Reference;
  (this->LongDescription).TextData.Reference = pIVar1;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
  }
  (this->LongDescription).Flags = (param_1->LongDescription).Flags;
  (this->RegularPriceText).TextData.Reference = (ITextData *)0x0;
  pIVar1 = (param_1->RegularPriceText).TextData.Reference;
  (this->RegularPriceText).TextData.Reference = pIVar1;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
  }
  (this->RegularPriceText).Flags = (param_1->RegularPriceText).Flags;
  this->RegularPrice = param_1->RegularPrice;
  (this->PriceText).TextData.Reference = (ITextData *)0x0;
  pIVar1 = (param_1->PriceText).TextData.Reference;
  (this->PriceText).TextData.Reference = pIVar1;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
  }
  (this->PriceText).Flags = (param_1->PriceText).Flags;
  this->NumericPrice = param_1->NumericPrice;
  ::FString::FString(&this->CurrencyCode,&param_1->CurrencyCode);
  (this->ReleaseDate).Ticks = (param_1->ReleaseDate).Ticks;
  (this->ExpirationDate).Ticks = (param_1->ExpirationDate).Ticks;
  this->DiscountType = param_1->DiscountType;
  *(undefined8 *)&(this->DynamicFields).field_0x0 = 0;
  *(undefined8 *)&(this->DynamicFields).field_0x8 = 0;
  *(undefined8 *)&(this->DynamicFields).field_0x20 = 0;
  *(undefined4 *)&(this->DynamicFields).field_0x28 = 0;
  *(undefined4 *)&(this->DynamicFields).field_0x2c = 0x80;
  *(undefined4 *)&(this->DynamicFields).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->DynamicFields).field_0x34 = 0;
  *(undefined8 *)&(this->DynamicFields).field_0x40 = 0;
  *(undefined4 *)&(this->DynamicFields).field_0x48 = 0;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::operator=((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
               *)&this->DynamicFields,
              (TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
               *)&param_1->DynamicFields);
  return this;
}

// FOnlineProxyStoreOffer @ 14ec52290

FOnlineProxyStoreOffer * __thiscall
FOnlineProxyStoreOffer::FOnlineProxyStoreOffer(FOnlineProxyStoreOffer *this)

{
  (this->OfferId).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OfferId).Data.ArrayNum = 0;
  (this->OfferId).Data.ArrayMax = 0;
  FText::FText(&this->Title);
  FText::FText(&this->Description);
  FText::FText(&this->LongDescription);
  FText::FText(&this->RegularPriceText);
  this->RegularPrice = 0;
  FText::FText(&this->PriceText);
  this->NumericPrice = 0;
  (this->CurrencyCode).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CurrencyCode).Data.ArrayNum = 0;
  (this->CurrencyCode).Data.ArrayMax = 0;
  (this->ReleaseDate).Ticks = 0;
  (this->ExpirationDate).Ticks = 0;
  this->DiscountType = NotOnSale;
  *(undefined8 *)&this->DynamicFields = 0;
  *(undefined8 *)&(this->DynamicFields).field_0x8 = 0;
  *(undefined8 *)&(this->DynamicFields).field_0x20 = 0;
  *(undefined4 *)&(this->DynamicFields).field_0x28 = 0;
  *(undefined4 *)&(this->DynamicFields).field_0x2c = 0x80;
  *(undefined4 *)&(this->DynamicFields).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->DynamicFields).field_0x34 = 0;
  *(undefined8 *)&(this->DynamicFields).field_0x40 = 0;
  *(undefined4 *)&(this->DynamicFields).field_0x48 = 0;
  return this;
}

// ~FOnlineProxyStoreOffer @ 14ec55ef0

void __thiscall FOnlineProxyStoreOffer::~FOnlineProxyStoreOffer(FOnlineProxyStoreOffer *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  ITextData *pIVar3;
  
  *(undefined4 *)&(this->DynamicFields).field_0x48 = 0;
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

