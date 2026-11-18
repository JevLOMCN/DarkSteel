// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 3

// FGenerationInfo @ 1420a17b0

FGenerationInfo * __thiscall
FGenerationInfo::FGenerationInfo(FGenerationInfo *this,int param_1,int param_2)

{
  this->ExportCount = param_1;
  this->NameCount = param_2;
  return this;
}

// Serialize @ 1420d6380

void __thiscall
FGenerationInfo::Serialize(FGenerationInfo *this,FArchive *param_1,FPackageFileSummary *param_2)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar1 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,this,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)this);
    }
  }
  else {
    this->ExportCount = *piVar1;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  piVar1 = &this->NameCount;
  piVar2 = (int *)**(undefined8 **)&param_1->field_0x8;
  if (piVar2 + 1 <= (int *)(*(undefined8 **)&param_1->field_0x8)[1]) {
    *piVar1 = *piVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    return;
  }
  if ((param_1->field_0x2a & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001420d6429. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar1,4);
    return;
  }
  FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar1);
  return;
}

// Serialize @ 1420d6450

void __thiscall
FGenerationInfo::Serialize
          (FGenerationInfo *this,FStructuredArchiveSlot param_1,FPackageFileSummary *param_2)

{
  FArchive *pFVar1;
  int *piVar2;
  int *piVar3;
  
  pFVar1 = *(FArchive **)(*(longlong *)param_1 + 8);
  piVar2 = (int *)**(undefined8 **)&pFVar1->field_0x8;
  if ((int *)(*(undefined8 **)&pFVar1->field_0x8)[1] < piVar2 + 1) {
    if ((pFVar1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)pFVar1 + 0x188))(pFVar1,this,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(pFVar1,(uint *)this);
    }
  }
  else {
    this->ExportCount = *piVar2;
    **(longlong **)&pFVar1->field_0x8 = **(longlong **)&pFVar1->field_0x8 + 4;
  }
  piVar2 = &this->NameCount;
  pFVar1 = *(FArchive **)(*(longlong *)param_1 + 8);
  piVar3 = (int *)**(undefined8 **)&pFVar1->field_0x8;
  if (piVar3 + 1 <= (int *)(*(undefined8 **)&pFVar1->field_0x8)[1]) {
    *piVar2 = *piVar3;
    **(longlong **)&pFVar1->field_0x8 = **(longlong **)&pFVar1->field_0x8 + 4;
    return;
  }
  if ((pFVar1->field_0x2a & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001420d64f7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)pFVar1 + 0x188))(pFVar1,piVar2,4);
    return;
  }
  FArchive::SerializeByteOrderSwapped(pFVar1,(uint *)piVar2);
  return;
}

