// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosVDRuntime
// Functions: 2

// StaticStruct @ 1436c5da0

UScriptStruct * __cdecl FChaosVDParticlePairMidPhase::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FChaosVDParticlePairMidPhase.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ChaosVDRuntime();
    Z_Registration_Info_UScriptStruct_FChaosVDParticlePairMidPhase.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FChaosVDParticlePairMidPhase,(UObject *)pUVar1,
                         L"ChaosVDParticlePairMidPhase");
  }
  return Z_Registration_Info_UScriptStruct_FChaosVDParticlePairMidPhase.OuterSingleton;
}

// Serialize @ 1436dfc30

bool __thiscall
FChaosVDParticlePairMidPhase::Serialize(FChaosVDParticlePairMidPhase *this,FArchive *param_1)

{
  undefined1 *puVar1;
  int *piVar2;
  longlong *plVar3;
  int *piVar4;
  byte bVar5;
  byte local_res8 [8];
  
  piVar2 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,this,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)this);
    }
  }
  else {
    this->SolverID = *piVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  local_res8[0] = 0;
  if ((param_1->field_0x28 & 1) == 0) {
    bVar5 = this->bIsActive;
    local_res8[0] = bVar5 != 0;
    if (this->bIsCCD != '\0') {
      local_res8[0] = bVar5 | 2;
      bVar5 = local_res8[0];
    }
    if (this->bIsCCDActive != '\0') {
      local_res8[0] = bVar5 | 4;
    }
    if (this->bIsSleeping != '\0') {
      local_res8[0] = local_res8[0] | 8;
    }
    if (this->bIsModified != '\0') {
      local_res8[0] = local_res8[0] | 0x10;
    }
    plVar3 = *(longlong **)&param_1->field_0x8;
    if ((byte *)plVar3[1] < (byte *)*plVar3 + 1) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,1);
    }
    else {
      local_res8[0] = *(byte *)*plVar3;
      *plVar3 = *plVar3 + 1;
    }
  }
  else {
    plVar3 = *(longlong **)&param_1->field_0x8;
    if ((byte *)plVar3[1] < (byte *)*plVar3 + 1) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,1);
    }
    else {
      local_res8[0] = *(byte *)*plVar3;
      *plVar3 = *plVar3 + 1;
    }
    this->bIsActive = '\0';
    this->bIsCCDActive = '\0';
    this->bIsCCD = '\0';
    this->field_0x5 = local_res8[0] & 4 | this->field_0x5 & 0xe7 | local_res8[0] & 0x1b;
  }
  piVar2 = &this->LastUsedEpoch;
  piVar4 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar4 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar2);
    }
  }
  else {
    *piVar2 = *piVar4;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  piVar2 = &this->Particle0Idx;
  piVar4 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar4 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar2);
    }
  }
  else {
    *piVar2 = *piVar4;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  piVar2 = &this->Particle1Idx;
  piVar4 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar4 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar2);
    }
  }
  else {
    *piVar2 = *piVar4;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  TArrayPrivateFriend::Serialize<FChaosVDConstraint,TSizedDefaultAllocator<32>_>
            (param_1,&this->Constraints);
  return (bool)((byte)~param_1->field_0x29 >> 1 & 1);
}

