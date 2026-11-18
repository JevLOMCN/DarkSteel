// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeCore
// Functions: 3

// operator<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>_>_TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>_> @ 14e324530

TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>_>
* __thiscall
TPairInitializer<FString_const_&,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>_&&>
::
operator<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>_>_TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>_>
          (TPairInitializer<FString_const_&,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>_&&>
           *this,TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>_>
                 *__return_storage_ptr__)

{
  TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>
  *pTVar1;
  
  pTVar1 = this->Value;
  ::FString::FString((FString *)__return_storage_ptr__,this->Key);
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = *(undefined8 *)pTVar1;
  *(undefined8 *)&__return_storage_ptr__->field_0x18 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x18 = *(undefined8 *)&pTVar1->field_0x8;
  *(undefined8 *)&pTVar1->field_0x8 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x20 = *(undefined4 *)&pTVar1->field_0x10;
  *(undefined4 *)&__return_storage_ptr__->field_0x24 = *(undefined4 *)&pTVar1->field_0x14;
  *(undefined8 *)&pTVar1->field_0x10 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x28 = *(undefined8 *)&pTVar1->field_0x18;
  *(undefined8 *)&__return_storage_ptr__->field_0x30 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x30 = *(undefined8 *)&pTVar1->field_0x20;
  *(undefined8 *)&pTVar1->field_0x20 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x38 = *(undefined4 *)&pTVar1->field_0x28;
  *(undefined4 *)&__return_storage_ptr__->field_0x3c = *(undefined4 *)&pTVar1->field_0x2c;
  *(undefined8 *)&pTVar1->field_0x28 = 0;
  return __return_storage_ptr__;
}

// operator<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>_>_TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>_> @ 14e3245c0

TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>_>
* __thiscall
TPairInitializer<FString_const_&,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>_&&>
::
operator<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>_>_TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>_>
          (TPairInitializer<FString_const_&,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>_&&>
           *this,TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>_>
                 *__return_storage_ptr__)

{
  TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>
  *pTVar1;
  
  pTVar1 = this->Value;
  ::FString::FString((FString *)__return_storage_ptr__,this->Key);
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = *(undefined8 *)pTVar1;
  *(undefined8 *)&__return_storage_ptr__->field_0x18 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x18 = *(undefined8 *)&pTVar1->field_0x8;
  *(undefined8 *)&pTVar1->field_0x8 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x20 = *(undefined4 *)&pTVar1->field_0x10;
  *(undefined4 *)&__return_storage_ptr__->field_0x24 = *(undefined4 *)&pTVar1->field_0x14;
  *(undefined8 *)&pTVar1->field_0x10 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x28 = *(undefined8 *)&pTVar1->field_0x18;
  *(undefined8 *)&__return_storage_ptr__->field_0x30 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x30 = *(undefined8 *)&pTVar1->field_0x20;
  *(undefined8 *)&pTVar1->field_0x20 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x38 = *(undefined4 *)&pTVar1->field_0x28;
  *(undefined4 *)&__return_storage_ptr__->field_0x3c = *(undefined4 *)&pTVar1->field_0x2c;
  *(undefined8 *)&pTVar1->field_0x28 = 0;
  return __return_storage_ptr__;
}

// operator<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>_>_TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>_> @ 14e324650

TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>_>
* __thiscall
TPairInitializer<FString_const_&,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>_&&>
::
operator<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>_>_TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>_>
          (TPairInitializer<FString_const_&,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>_&&>
           *this,TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>_>
                 *__return_storage_ptr__)

{
  TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>
  *pTVar1;
  
  pTVar1 = this->Value;
  ::FString::FString((FString *)__return_storage_ptr__,this->Key);
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = *(undefined8 *)pTVar1;
  *(undefined8 *)&__return_storage_ptr__->field_0x18 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x18 = *(undefined8 *)&pTVar1->field_0x8;
  *(undefined8 *)&pTVar1->field_0x8 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x20 = *(undefined4 *)&pTVar1->field_0x10;
  *(undefined4 *)&__return_storage_ptr__->field_0x24 = *(undefined4 *)&pTVar1->field_0x14;
  *(undefined8 *)&pTVar1->field_0x10 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x28 = *(undefined8 *)&pTVar1->field_0x18;
  *(undefined8 *)&__return_storage_ptr__->field_0x30 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x30 = *(undefined8 *)&pTVar1->field_0x20;
  *(undefined8 *)&pTVar1->field_0x20 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x38 = *(undefined4 *)&pTVar1->field_0x28;
  *(undefined4 *)&__return_storage_ptr__->field_0x3c = *(undefined4 *)&pTVar1->field_0x2c;
  *(undefined8 *)&pTVar1->field_0x28 = 0;
  return __return_storage_ptr__;
}

