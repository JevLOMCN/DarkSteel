// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineServicesInterface
// Functions: 1

// operator<FName,UE::Online::FSchemaServiceAttributeData>_TTuple<FName,UE::Online::FSchemaServiceAttributeData> @ 14ec1ce10

TTuple<FName,UE::Online::FSchemaServiceAttributeData> * __thiscall
TPairInitializer<FName_const_&,UE::Online::FSchemaServiceAttributeData_&&>::
operator<FName,UE::Online::FSchemaServiceAttributeData>_TTuple<FName,UE::Online::FSchemaServiceAttributeData>
          (TPairInitializer<FName_const_&,UE::Online::FSchemaServiceAttributeData_&&> *this,
          TTuple<FName,UE::Online::FSchemaServiceAttributeData> *__return_storage_ptr__)

{
  FSchemaServiceAttributeData *pFVar1;
  uint uVar2;
  
  pFVar1 = this->Value;
  uVar2 = this->Key->Number;
  *(uint *)&__return_storage_ptr__->field_0x0 = (this->Key->ComparisonIndex).Value;
  *(uint *)&__return_storage_ptr__->field_0x4 = uVar2;
  uVar2 = (pFVar1->Id).Number;
  *(uint *)&__return_storage_ptr__->field_0x8 = (pFVar1->Id).ComparisonIndex.Value;
  *(uint *)&__return_storage_ptr__->field_0xc = uVar2;
  __return_storage_ptr__->field_0x10 = pFVar1->Flags;
  *(undefined8 *)&__return_storage_ptr__->field_0x18 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x20 = 0;
  __return_storage_ptr__->field_0x28 = 0;
  __return_storage_ptr__->field_0x30 = 0;
  TVariant<FString,__int64,double,bool>::operator=
            ((TVariant<FString,__int64,double,bool> *)&__return_storage_ptr__->field_0x18,
             &(pFVar1->Value).VariantData);
  __return_storage_ptr__->field_0x30 = (pFVar1->Value).VariantType;
  (pFVar1->Value).VariantType = None;
  return __return_storage_ptr__;
}

