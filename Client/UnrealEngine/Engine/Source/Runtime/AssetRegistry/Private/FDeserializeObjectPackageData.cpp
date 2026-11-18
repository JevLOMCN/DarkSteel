// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AssetRegistry
// Functions: 1

// DoSerialize @ 142b57e10

bool __thiscall
UE::AssetRegistry::FDeserializeObjectPackageData::DoSerialize
          (FDeserializeObjectPackageData *this,FArchive *param_1,
          EReadPackageDataMainErrorCode *param_2)

{
  int iVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = (**(code **)(*(longlong *)param_1 + 0x30))(param_1);
  ::operator<<(param_1,&this->ObjectPath);
  ::operator<<(param_1,&this->ObjectClassName);
  piVar2 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&this->TagCount,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)&this->TagCount);
    }
  }
  else {
    this->TagCount = *piVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  if ((((param_1->field_0x29 & 2) == 0) && (iVar1 = this->TagCount, -1 < iVar1)) &&
     (lVar4 = (**(code **)(*(longlong *)param_1 + 0x28))(param_1), lVar4 + iVar1 <= lVar3)) {
    return true;
  }
  *param_2 = InvalidTagCount;
  return false;
}

