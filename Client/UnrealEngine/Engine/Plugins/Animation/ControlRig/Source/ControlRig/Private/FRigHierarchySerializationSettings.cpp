// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 3

// FRigHierarchySerializationSettings @ 14a2dc960

/* WARNING: Enum "Type": Some values do not have unique names */

FRigHierarchySerializationSettings * __thiscall
FRigHierarchySerializationSettings::FRigHierarchySerializationSettings
          (FRigHierarchySerializationSettings *this,FArchive *param_1)

{
  Type TVar1;
  bool bVar2;
  
  this->ControlRigVersion = LatestVersion;
  this->bIsSerializingToPackage = false;
  this->bUseCompressedArchive = false;
  this->bStoreCompactTransforms = true;
  this->bSerializeLocalTransform = true;
  this->bSerializeGlobalTransform = true;
  this->bSerializeInitialTransform = true;
  this->bSerializeCurrentTransform = true;
  this->SerializationPhase = StaticData;
  if ((((*(uint *)&param_1->field_0x34 & 0x1000) == 0) && ((param_1->field_0x29 & 1) != 0)) &&
     ((param_1->field_0x2b & 9) == 0)) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  this->bIsSerializingToPackage = bVar2;
  TVar1 = FArchiveState::CustomVer((FArchiveState *)param_1,&FControlRigObjectVersion::GUID);
  this->ControlRigVersion = TVar1;
  return this;
}

// Load @ 14a32c0f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FRigHierarchySerializationSettings::Load(FRigHierarchySerializationSettings *this,FArchive *param_1)

{
  longlong *plVar1;
  Type local_res8 [2];
  ESerializationPhase local_res10 [2];
  
  local_res8[0] = ~BeforeCustomVersionWasAdded;
  plVar1 = *(longlong **)&param_1->field_0x8;
  local_res10[0] = ~StaticData;
  if ((Type *)plVar1[1] < (Type *)*plVar1 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,local_res8);
    }
  }
  else {
    local_res8[0] = *(Type *)*plVar1;
    *plVar1 = *plVar1 + 4;
  }
  ::operator<<(param_1,&this->bIsSerializingToPackage);
  ::operator<<(param_1,&this->bUseCompressedArchive);
  ::operator<<(param_1,&this->bStoreCompactTransforms);
  ::operator<<(param_1,&this->bSerializeLocalTransform);
  ::operator<<(param_1,&this->bSerializeGlobalTransform);
  ::operator<<(param_1,&this->bSerializeInitialTransform);
  ::operator<<(param_1,&this->bSerializeCurrentTransform);
  plVar1 = *(longlong **)&param_1->field_0x8;
  if ((ESerializationPhase *)plVar1[1] < (ESerializationPhase *)*plVar1 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res10,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,local_res10);
    }
  }
  else {
    local_res10[0] = *(ESerializationPhase *)*plVar1;
    *plVar1 = *plVar1 + 4;
  }
  this->ControlRigVersion = local_res8[0];
  this->SerializationPhase = local_res10[0];
  return;
}

// Save @ 14a3454f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FRigHierarchySerializationSettings::Save(FRigHierarchySerializationSettings *this,FArchive *param_1)

{
  longlong *plVar1;
  Type local_res8 [2];
  ESerializationPhase local_res10 [2];
  
  local_res8[0] = this->ControlRigVersion;
  plVar1 = *(longlong **)&param_1->field_0x8;
  local_res10[0] = this->SerializationPhase;
  if ((Type *)plVar1[1] < (Type *)*plVar1 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,local_res8);
    }
  }
  else {
    local_res8[0] = *(Type *)*plVar1;
    *plVar1 = *plVar1 + 4;
  }
  ::operator<<(param_1,&this->bIsSerializingToPackage);
  ::operator<<(param_1,&this->bUseCompressedArchive);
  ::operator<<(param_1,&this->bStoreCompactTransforms);
  ::operator<<(param_1,&this->bSerializeLocalTransform);
  ::operator<<(param_1,&this->bSerializeGlobalTransform);
  ::operator<<(param_1,&this->bSerializeInitialTransform);
  ::operator<<(param_1,&this->bSerializeCurrentTransform);
  plVar1 = *(longlong **)&param_1->field_0x8;
  if (*plVar1 + 4U <= (ulonglong)plVar1[1]) {
    *plVar1 = *plVar1 + 4;
    return;
  }
  if ((param_1->field_0x2a & 1) == 0) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res10,4);
    return;
  }
  FArchive::SerializeByteOrderSwapped(param_1,local_res10);
  return;
}

