// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineServicesCommon
// Functions: 2

// operator<FName,UE::Online::FCustomSessionSettingUpdate>_TTuple<FName,UE::Online::FCustomSessionSettingUpdate> @ 14ed39980

TTuple<FName,UE::Online::FCustomSessionSettingUpdate> * __thiscall
TPairInitializer<FName_const_&,UE::Online::FCustomSessionSettingUpdate_&>::
operator<FName,UE::Online::FCustomSessionSettingUpdate>_TTuple<FName,UE::Online::FCustomSessionSettingUpdate>
          (TPairInitializer<FName_const_&,UE::Online::FCustomSessionSettingUpdate_&> *this,
          TTuple<FName,UE::Online::FCustomSessionSettingUpdate> *__return_storage_ptr__)

{
  FCustomSessionSettingUpdate *pFVar1;
  uint uVar2;
  
  pFVar1 = this->Value;
  uVar2 = this->Key->Number;
  *(uint *)&__return_storage_ptr__->field_0x0 = (this->Key->ComparisonIndex).Value;
  *(uint *)&__return_storage_ptr__->field_0x4 = uVar2;
  UE::Online::FSchemaVariant::FSchemaVariant
            ((FSchemaVariant *)&__return_storage_ptr__->field_0x8,(FSchemaVariant *)pFVar1);
  __return_storage_ptr__->field_0x28 = (pFVar1->OldValue).Visibility;
  *(int *)&__return_storage_ptr__->field_0x2c = (pFVar1->OldValue).ID;
  UE::Online::FSchemaVariant::FSchemaVariant
            ((FSchemaVariant *)&__return_storage_ptr__->field_0x30,&(pFVar1->NewValue).Data);
  __return_storage_ptr__->field_0x50 = (pFVar1->NewValue).Visibility;
  *(int *)&__return_storage_ptr__->field_0x54 = (pFVar1->NewValue).ID;
  return __return_storage_ptr__;
}

// operator<FString,UE::Online::FStatDefinition>_TTuple<FString,UE::Online::FStatDefinition> @ 14ef34910

TTuple<FString,UE::Online::FStatDefinition> * __thiscall
TPairInitializer<FString_&&,UE::Online::FStatDefinition_&&>::
operator<FString,UE::Online::FStatDefinition>_TTuple<FString,UE::Online::FStatDefinition>
          (TPairInitializer<FString_&&,UE::Online::FStatDefinition_&&> *this,
          TTuple<FString,UE::Online::FStatDefinition> *__return_storage_ptr__)

{
  FString *pFVar1;
  FStatDefinition *pFVar2;
  
  pFVar1 = this->Key;
  pFVar2 = this->Value;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(FScriptContainerElement **)__return_storage_ptr__ = (pFVar1->Data).AllocatorInstance.Data;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)&__return_storage_ptr__->field_0x8 = (pFVar1->Data).ArrayNum;
  *(int *)&__return_storage_ptr__->field_0xc = (pFVar1->Data).ArrayMax;
  (pFVar1->Data).ArrayNum = 0;
  (pFVar1->Data).ArrayMax = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
  *(FScriptContainerElement **)&__return_storage_ptr__->field_0x10 =
       (pFVar2->Name).Data.AllocatorInstance.Data;
  (pFVar2->Name).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)&__return_storage_ptr__->field_0x18 = (pFVar2->Name).Data.ArrayNum;
  *(int *)&__return_storage_ptr__->field_0x1c = (pFVar2->Name).Data.ArrayMax;
  (pFVar2->Name).Data.ArrayNum = 0;
  (pFVar2->Name).Data.ArrayMax = 0;
  *(int *)&__return_storage_ptr__->field_0x20 = pFVar2->Id;
  __return_storage_ptr__->field_0x24 = pFVar2->ModifyMethod;
  UE::Online::FSchemaVariant::FSchemaVariant
            ((FSchemaVariant *)&__return_storage_ptr__->field_0x28,&pFVar2->DefaultValue);
  return __return_storage_ptr__;
}

