// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystemNull
// Functions: 1

// operator<FUniqueNetIdNull,TArray<FPurchaseReceipt,TSizedDefaultAllocator<32>_>_>_TTuple<FUniqueNetIdNull,TArray<FPurchaseReceipt,TSizedDefaultAllocator<32>_>_> @ 14ed0b340

TTuple<FUniqueNetIdNull,TArray<FPurchaseReceipt,TSizedDefaultAllocator<32>_>_> * __thiscall
TKeyInitializer<FUniqueNetIdNull_const_&>::
operator<FUniqueNetIdNull,TArray<FPurchaseReceipt,TSizedDefaultAllocator<32>_>_>_TTuple<FUniqueNetIdNull,TArray<FPurchaseReceipt,TSizedDefaultAllocator<32>_>_>
          (TKeyInitializer<FUniqueNetIdNull_const_&> *this,
          TTuple<FUniqueNetIdNull,TArray<FPurchaseReceipt,TSizedDefaultAllocator<32>_>_>
          *__return_storage_ptr__)

{
  FUniqueNetIdNull *pFVar1;
  
  pFVar1 = this->Key;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
  *(undefined ***)__return_storage_ptr__ = &___7FUniqueNetIdString__6B_;
  ::FString::FString((FString *)&__return_storage_ptr__->field_0x18,(FString *)&pFVar1->field_0x18);
  *(undefined8 *)&__return_storage_ptr__->field_0x28 = *(undefined8 *)&pFVar1->field_0x28;
  *(undefined ***)__return_storage_ptr__ = &___7FUniqueNetIdNull__6B_;
  *(undefined8 *)&__return_storage_ptr__->field_0x30 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x38 = 0;
  DestructItems<FPurchaseReceipt,int>((FPurchaseReceipt *)0x0,0);
  return __return_storage_ptr__;
}

