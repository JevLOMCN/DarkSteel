// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineServicesInterface
// Functions: 1

// TTuple<UE::Online::FSchemaVariant,UE::Online::FSchemaVariant> @ 14ec226f0

TTuple<UE::Online::FSchemaVariant,UE::Online::FSchemaVariant> * __thiscall
TTuple<UE::Online::FSchemaVariant,UE::Online::FSchemaVariant>::
TTuple<UE::Online::FSchemaVariant,UE::Online::FSchemaVariant>
          (TTuple<UE::Online::FSchemaVariant,UE::Online::FSchemaVariant> *this,
          TTuple<UE::Online::FSchemaVariant,UE::Online::FSchemaVariant> *param_1)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  this->field_0x10 = 0;
  this->field_0x18 = 0;
  TVariant<FString,__int64,double,bool>::operator=
            ((TVariant<FString,__int64,double,bool> *)this,
             (TVariant<FString,__int64,double,bool> *)param_1);
  this->field_0x18 = param_1->field_0x18;
  param_1->field_0x18 = 0;
  *(undefined8 *)&this->field_0x20 = 0;
  *(undefined8 *)&this->field_0x28 = 0;
  this->field_0x30 = 0;
  this->field_0x38 = 0;
  TVariant<FString,__int64,double,bool>::operator=
            ((TVariant<FString,__int64,double,bool> *)&this->field_0x20,
             (TVariant<FString,__int64,double,bool> *)&param_1->field_0x20);
  this->field_0x38 = param_1->field_0x38;
  param_1->field_0x38 = 0;
  return this;
}

