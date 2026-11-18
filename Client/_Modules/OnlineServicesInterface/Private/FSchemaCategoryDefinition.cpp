// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineServicesInterface
// Functions: 1

// FSchemaCategoryDefinition @ 14ec22800

FSchemaCategoryDefinition * __thiscall
UE::Online::FSchemaCategoryDefinition::FSchemaCategoryDefinition
          (FSchemaCategoryDefinition *this,FSchemaCategoryDefinition *param_1)

{
  TMap<FName,UE::Online::FSchemaAttributeDefinition,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaAttributeDefinition,0>_>
  *pTVar1;
  TMap<FName,UE::Online::FSchemaAttributeDefinition,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaAttributeDefinition,0>_>
  *pTVar2;
  undefined1 *_Dst;
  undefined1 *_Src;
  void *pvVar3;
  
  pTVar1 = &this->SchemaAttributeDefinitions;
  this->Id = param_1->Id;
  pTVar2 = &param_1->SchemaAttributeDefinitions;
  this->SchemaCompatibilityAttributeId = param_1->SchemaCompatibilityAttributeId;
  this->SchemaCompatibilityServiceAttributeId = param_1->SchemaCompatibilityServiceAttributeId;
  *(undefined8 *)pTVar1 = 0;
  *(undefined8 *)&(this->SchemaAttributeDefinitions).field_0x8 = 0;
  *(undefined8 *)&(this->SchemaAttributeDefinitions).field_0x20 = 0;
  *(undefined4 *)&(this->SchemaAttributeDefinitions).field_0x28 = 0;
  *(undefined4 *)&(this->SchemaAttributeDefinitions).field_0x2c = 0x80;
  *(undefined4 *)&(this->SchemaAttributeDefinitions).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SchemaAttributeDefinitions).field_0x34 = 0;
  *(undefined8 *)&(this->SchemaAttributeDefinitions).field_0x40 = 0;
  *(undefined4 *)&(this->SchemaAttributeDefinitions).field_0x48 = 0;
  if (pTVar1 != pTVar2) {
    *(undefined8 *)pTVar1 = *(undefined8 *)pTVar2;
    *(undefined8 *)pTVar2 = 0;
    _Dst = &(this->SchemaAttributeDefinitions).field_0x10;
    *(undefined4 *)&(this->SchemaAttributeDefinitions).field_0x8 =
         *(undefined4 *)&(param_1->SchemaAttributeDefinitions).field_0x8;
    _Src = &(param_1->SchemaAttributeDefinitions).field_0x10;
    *(undefined4 *)&(this->SchemaAttributeDefinitions).field_0xc =
         *(undefined4 *)&(param_1->SchemaAttributeDefinitions).field_0xc;
    *(undefined8 *)&(param_1->SchemaAttributeDefinitions).field_0x8 = 0;
    if (_Dst != _Src) {
      if (*(longlong *)&(param_1->SchemaAttributeDefinitions).field_0x20 == 0) {
        memmove(_Dst,_Src,0x10);
      }
      pvVar3 = *(void **)&(this->SchemaAttributeDefinitions).field_0x20;
      if (pvVar3 != (void *)0x0) {
        FMemory::Free(pvVar3);
      }
      *(undefined8 *)&(this->SchemaAttributeDefinitions).field_0x20 =
           *(undefined8 *)&(param_1->SchemaAttributeDefinitions).field_0x20;
      *(undefined8 *)&(param_1->SchemaAttributeDefinitions).field_0x20 = 0;
      *(undefined4 *)&(this->SchemaAttributeDefinitions).field_0x28 =
           *(undefined4 *)&(param_1->SchemaAttributeDefinitions).field_0x28;
      *(undefined4 *)&(this->SchemaAttributeDefinitions).field_0x2c =
           *(undefined4 *)&(param_1->SchemaAttributeDefinitions).field_0x2c;
      *(undefined8 *)&(param_1->SchemaAttributeDefinitions).field_0x28 = 0;
    }
    *(undefined4 *)&(this->SchemaAttributeDefinitions).field_0x30 =
         *(undefined4 *)&(param_1->SchemaAttributeDefinitions).field_0x30;
    *(undefined4 *)&(this->SchemaAttributeDefinitions).field_0x34 =
         *(undefined4 *)&(param_1->SchemaAttributeDefinitions).field_0x34;
    *(undefined4 *)&(param_1->SchemaAttributeDefinitions).field_0x30 = 0xffffffff;
    *(undefined4 *)&(param_1->SchemaAttributeDefinitions).field_0x34 = 0;
  }
  if (*(longlong *)&(param_1->SchemaAttributeDefinitions).field_0x40 == 0) {
    *(undefined4 *)&(this->SchemaAttributeDefinitions).field_0x38 =
         *(undefined4 *)&(param_1->SchemaAttributeDefinitions).field_0x38;
  }
  pvVar3 = *(void **)&(this->SchemaAttributeDefinitions).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  *(undefined8 *)&(this->SchemaAttributeDefinitions).field_0x40 =
       *(undefined8 *)&(param_1->SchemaAttributeDefinitions).field_0x40;
  *(undefined8 *)&(param_1->SchemaAttributeDefinitions).field_0x40 = 0;
  *(undefined4 *)&(this->SchemaAttributeDefinitions).field_0x48 =
       *(undefined4 *)&(param_1->SchemaAttributeDefinitions).field_0x48;
  *(undefined4 *)&(param_1->SchemaAttributeDefinitions).field_0x48 = 0;
  TSet<TTuple<FName,UE::Online::FSchemaServiceAttributeDefinition>,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaServiceAttributeDefinition,0>,FDefaultSetAllocator>
  ::
  TSet<TTuple<FName,UE::Online::FSchemaServiceAttributeDefinition>,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaServiceAttributeDefinition,0>,FDefaultSetAllocator>
            ((TSet<TTuple<FName,UE::Online::FSchemaServiceAttributeDefinition>,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaServiceAttributeDefinition,0>,FDefaultSetAllocator>
              *)&this->ServiceAttributeDefinitions,
             (TSet<TTuple<FName,UE::Online::FSchemaServiceAttributeDefinition>,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaServiceAttributeDefinition,0>,FDefaultSetAllocator>
              *)&param_1->ServiceAttributeDefinitions);
  return this;
}

