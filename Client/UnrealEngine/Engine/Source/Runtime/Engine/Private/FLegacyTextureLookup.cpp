// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// Serialize @ 147f86150

void __thiscall FLegacyTextureLookup::Serialize(FLegacyTextureLookup *this,FArchive *param_1)

{
  float *pfVar1;
  undefined1 *puVar2;
  int *piVar3;
  int *piVar4;
  float *pfVar5;
  
  piVar3 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,this,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)this);
    }
  }
  else {
    this->TexCoordIndex = *piVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  piVar3 = &this->TextureIndex;
  puVar2 = &param_1->field_0x2a;
  piVar4 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar4 + 1) {
    if ((*puVar2 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar3,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar3);
    }
  }
  else {
    *piVar3 = *piVar4;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  pfVar1 = &this->UScale;
  pfVar5 = (float *)**(undefined8 **)&param_1->field_0x8;
  if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar5 + 1) {
    if ((*puVar2 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar1);
    }
  }
  else {
    *pfVar1 = *pfVar5;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  pfVar1 = &this->VScale;
  pfVar5 = (float *)**(undefined8 **)&param_1->field_0x8;
  if (pfVar5 + 1 <= (float *)(*(undefined8 **)&param_1->field_0x8)[1]) {
    *pfVar1 = *pfVar5;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    return;
  }
  if ((*puVar2 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000147f8628b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar1,4);
    return;
  }
  FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar1);
  return;
}

