// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeNodes
// Functions: 3

// operator<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<unsigned_char,void>_>_>_TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<unsigned_char,void>_>_> @ 14e47ef20

TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<unsigned_char,void>_>_>
* __thiscall
TPairInitializer<FString_const_&,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<unsigned_char,void>_>_&&>
::
operator<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<unsigned_char,void>_>_>_TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<unsigned_char,void>_>_>
          (TPairInitializer<FString_const_&,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<unsigned_char,void>_>_&&>
           *this,TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<unsigned_char,void>_>_>
                 *__return_storage_ptr__)

{
  TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<unsigned_char,void>_>
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

// operator<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<UE::Math::TMatrix<double>,void>_>_>_TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<UE::Math::TMatrix<double>,void>_>_> @ 14e47efb0

TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<UE::Math::TMatrix<double>,void>_>_>
* __thiscall
TPairInitializer<FString_const_&,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<UE::Math::TMatrix<double>,void>_>_&&>
::
operator<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<UE::Math::TMatrix<double>,void>_>_>_TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<UE::Math::TMatrix<double>,void>_>_>
          (TPairInitializer<FString_const_&,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<UE::Math::TMatrix<double>,void>_>_&&>
           *this,TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<UE::Math::TMatrix<double>,void>_>_>
                 *__return_storage_ptr__)

{
  TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<UE::Math::TMatrix<double>,void>_>
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

// operator<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<enum_EInterchangeAnimationPayLoadType,void>_>_>_TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<enum_EInterchangeAnimationPayLoadType,void>_>_> @ 14e47f040

TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<EInterchangeAnimationPayLoadType,void>_>_>
* __thiscall
TPairInitializer<FString_const_&,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<enum_EInterchangeAnimationPayLoadType,void>_>_&&>
::
operator<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<enum_EInterchangeAnimationPayLoadType,void>_>_>_TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<enum_EInterchangeAnimationPayLoadType,void>_>_>
          (void *this,
          TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<EInterchangeAnimationPayLoadType,void>_>_>
          *__return_storage_ptr__)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)((longlong)this + 8);
  ::FString::FString((FString *)__return_storage_ptr__,*(FString **)this);
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = *puVar1;
  *(undefined8 *)&__return_storage_ptr__->field_0x18 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x18 = puVar1[1];
  puVar1[1] = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x20 = *(undefined4 *)(puVar1 + 2);
  *(undefined4 *)&__return_storage_ptr__->field_0x24 = *(undefined4 *)((longlong)puVar1 + 0x14);
  puVar1[2] = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x28 = puVar1[3];
  *(undefined8 *)&__return_storage_ptr__->field_0x30 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x30 = puVar1[4];
  puVar1[4] = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x38 = *(undefined4 *)(puVar1 + 5);
  *(undefined4 *)&__return_storage_ptr__->field_0x3c = *(undefined4 *)((longlong)puVar1 + 0x2c);
  puVar1[5] = 0;
  return __return_storage_ptr__;
}

