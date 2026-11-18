// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 2

// FMaterialParameterKey @ 146807f30

FMaterialParameterKey * __thiscall
UE::MovieScene::FMaterialParameterKey::FMaterialParameterKey
          (FMaterialParameterKey *this,FObjectComponent *param_1,FMaterialParameterInfo *param_2)

{
  TEnumAsByte<EMaterialParameterAssociation> TVar1;
  undefined3 uVar2;
  int iVar3;
  FWeakObjectPtr local_res8;
  UObject *local_res18 [2];
  
  local_res18[0] = FObjectComponent::GetObject(param_1);
  (this->BoundMaterial).ObjectIndex = 0;
  (this->BoundMaterial).ObjectSerialNumber = 0;
  if (local_res18[0] != (UObject *)0x0) {
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable(local_res18[0]);
    }
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable(local_res18[0]);
    }
    FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)local_res18);
    (this->BoundMaterial).ObjectIndex = local_res8.ObjectIndex;
    (this->BoundMaterial).ObjectSerialNumber = local_res8.ObjectSerialNumber;
  }
  TVar1.Value = (param_2->Association).Value;
  uVar2 = *(undefined3 *)&param_2->field_0x9;
  iVar3 = param_2->Index;
  (this->ParameterInfo).Name = param_2->Name;
  (this->ParameterInfo).Association = (TEnumAsByte<EMaterialParameterAssociation>)TVar1.Value;
  *(undefined3 *)&(this->ParameterInfo).field_0x9 = uVar2;
  (this->ParameterInfo).Index = iVar3;
  return this;
}

// FMaterialParameterKey @ 146807fc0

FMaterialParameterKey * __thiscall
UE::MovieScene::FMaterialParameterKey::FMaterialParameterKey
          (FMaterialParameterKey *this,FObjectComponent *param_1,FName *param_2)

{
  FWeakObjectPtr local_res8;
  UObject *local_res18 [2];
  
  local_res18[0] = FObjectComponent::GetObject(param_1);
  (this->BoundMaterial).ObjectIndex = 0;
  (this->BoundMaterial).ObjectSerialNumber = 0;
  if (local_res18[0] != (UObject *)0x0) {
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable(local_res18[0]);
    }
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable(local_res18[0]);
    }
    FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)local_res18);
    (this->BoundMaterial).ObjectIndex = local_res8.ObjectIndex;
    (this->BoundMaterial).ObjectSerialNumber = local_res8.ObjectSerialNumber;
  }
  (this->ParameterInfo).Name = *param_2;
  (this->ParameterInfo).Association.Value = '\x02';
  (this->ParameterInfo).Index = -1;
  return this;
}

