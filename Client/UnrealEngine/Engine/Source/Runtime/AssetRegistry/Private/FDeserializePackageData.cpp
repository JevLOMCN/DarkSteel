// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AssetRegistry
// Functions: 1

// DoSerialize @ 142b57ee0

bool __thiscall
UE::AssetRegistry::FDeserializePackageData::DoSerialize
          (FDeserializePackageData *this,FArchive *param_1,FPackageFileSummary *param_2,
          EReadPackageDataMainErrorCode *param_3)

{
  int iVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (((param_2->FileVersionUE).FileVersionUE4 < 0x209) || ((int)param_2->PackageFlags < 0)) {
    this->DependencyDataOffset = -1;
  }
  else {
    ::operator<<(param_1,&this->DependencyDataOffset);
  }
  this->ObjectCount = 0;
  piVar2 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&this->ObjectCount,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)&this->ObjectCount);
    }
  }
  else {
    this->ObjectCount = *piVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  lVar3 = (**(code **)(*(longlong *)param_1 + 0x30))(param_1);
  if ((((param_1->field_0x29 & 2) == 0) && (iVar1 = this->ObjectCount, -1 < iVar1)) &&
     (lVar4 = (**(code **)(*(longlong *)param_1 + 0x28))(param_1), lVar4 + iVar1 <= lVar3)) {
    return true;
  }
  *param_3 = InvalidObjectCount;
  return false;
}

