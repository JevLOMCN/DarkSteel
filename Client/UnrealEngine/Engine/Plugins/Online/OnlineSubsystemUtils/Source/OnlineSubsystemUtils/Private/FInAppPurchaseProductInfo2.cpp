// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystemUtils
// Functions: 3

// StaticStruct @ 14ec47500

UScriptStruct * __cdecl FInAppPurchaseProductInfo2::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FInAppPurchaseProductInfo2.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_OnlineSubsystemUtils();
    Z_Registration_Info_UScriptStruct_FInAppPurchaseProductInfo2.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FInAppPurchaseProductInfo2,(UObject *)pUVar1,
                         L"InAppPurchaseProductInfo2");
  }
  return Z_Registration_Info_UScriptStruct_FInAppPurchaseProductInfo2.OuterSingleton;
}

// FInAppPurchaseProductInfo2 @ 14ec51fd0

FInAppPurchaseProductInfo2 * __thiscall
FInAppPurchaseProductInfo2::FInAppPurchaseProductInfo2(FInAppPurchaseProductInfo2 *this)

{
  (this->Identifier).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Identifier).Data.ArrayNum = 0;
  (this->Identifier).Data.ArrayMax = 0;
  (this->TransactionIdentifier).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TransactionIdentifier).Data.ArrayNum = 0;
  (this->TransactionIdentifier).Data.ArrayMax = 0;
  (this->DisplayName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DisplayName).Data.ArrayNum = 0;
  (this->DisplayName).Data.ArrayMax = 0;
  (this->DisplayDescription).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DisplayDescription).Data.ArrayNum = 0;
  (this->DisplayDescription).Data.ArrayMax = 0;
  (this->DisplayPrice).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DisplayPrice).Data.ArrayNum = 0;
  (this->DisplayPrice).Data.ArrayMax = 0;
  (this->CurrencyCode).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CurrencyCode).Data.ArrayNum = 0;
  (this->CurrencyCode).Data.ArrayMax = 0;
  (this->CurrencySymbol).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CurrencySymbol).Data.ArrayNum = 0;
  (this->CurrencySymbol).Data.ArrayMax = 0;
  (this->DecimalSeparator).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DecimalSeparator).Data.ArrayNum = 0;
  (this->DecimalSeparator).Data.ArrayMax = 0;
  (this->GroupingSeparator).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GroupingSeparator).Data.ArrayNum = 0;
  (this->GroupingSeparator).Data.ArrayMax = 0;
  (this->ReceiptData).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ReceiptData).Data.ArrayNum = 0;
  (this->ReceiptData).Data.ArrayMax = 0;
  *(undefined8 *)&this->DynamicFields = 0;
  *(undefined8 *)&(this->DynamicFields).field_0x8 = 0;
  *(undefined8 *)&(this->DynamicFields).field_0x20 = 0;
  this->RawPrice = 0.0;
  *(undefined4 *)&(this->DynamicFields).field_0x28 = 0;
  *(undefined4 *)&(this->DynamicFields).field_0x2c = 0x80;
  *(undefined4 *)&(this->DynamicFields).field_0x34 = 0;
  *(undefined4 *)&(this->DynamicFields).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->DynamicFields).field_0x40 = 0;
  *(undefined4 *)&(this->DynamicFields).field_0x48 = 0;
  return this;
}

// ~FInAppPurchaseProductInfo2 @ 14ec55d30

void __thiscall
FInAppPurchaseProductInfo2::~FInAppPurchaseProductInfo2(FInAppPurchaseProductInfo2 *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
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
  pFVar2 = (this->ReceiptData).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->GroupingSeparator).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->DecimalSeparator).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->CurrencySymbol).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->CurrencyCode).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->DisplayPrice).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->DisplayDescription).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->DisplayName).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->TransactionIdentifier).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->Identifier).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

