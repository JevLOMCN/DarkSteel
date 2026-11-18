// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineServicesCommon
// Functions: 1

// TTuple<UE::Online::FSchemaVariant,UE::Online::FSchemaVariant><UE::Online::FSchemaVariant_&,UE::Online::FSchemaVariant_&> @ 14efd2eb0

TTuple<UE::Online::FSchemaVariant,UE::Online::FSchemaVariant> * __thiscall
TTuple<UE::Online::FSchemaVariant,UE::Online::FSchemaVariant>::
TTuple<UE::Online::FSchemaVariant,UE::Online::FSchemaVariant><UE::Online::FSchemaVariant_&,UE::Online::FSchemaVariant_&>
          (TTuple<UE::Online::FSchemaVariant,UE::Online::FSchemaVariant> *this,
          FSchemaVariant *param_1,FSchemaVariant *param_2)

{
  UE::Online::FSchemaVariant::FSchemaVariant((FSchemaVariant *)this,param_1);
  UE::Online::FSchemaVariant::FSchemaVariant((FSchemaVariant *)&this->field_0x20,param_2);
  return this;
}

