// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosVDRuntime
// Functions: 2

// StaticStruct @ 1436c62f0

UScriptStruct * __cdecl FChaosVDGTJointStateDataWrapper::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FChaosVDGTJointStateDataWrapper.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ChaosVDRuntime();
    Z_Registration_Info_UScriptStruct_FChaosVDGTJointStateDataWrapper.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FChaosVDGTJointStateDataWrapper,(UObject *)pUVar1
                         ,L"ChaosVDGTJointStateDataWrapper");
  }
  return Z_Registration_Info_UScriptStruct_FChaosVDGTJointStateDataWrapper.OuterSingleton;
}

// Serialize @ 1436dcfc0

bool __thiscall
FChaosVDGTJointStateDataWrapper::Serialize(FChaosVDGTJointStateDataWrapper *this,FArchive *param_1)

{
  undefined1 *puVar1;
  float *pfVar2;
  longlong *plVar3;
  float *pfVar4;
  byte local_res8 [8];
  
  ::operator<<(param_1,(bool *)&this->_padding_);
  if ((char)this->_padding_ != '\0') {
    local_res8[0] = 0;
    if ((param_1->field_0x28 & 1) == 0) {
      this->bIsBreaking = '\0';
      this->bIsViolating = '\0';
      this->bDriveTargetChanged = '\0';
      this->bIsBroken = '\0';
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
        this->bIsBreaking = '\0';
        this->bIsViolating = '\0';
        this->bDriveTargetChanged = '\0';
        this->bIsBroken = '\0';
        this->field_0x10 = this->field_0x10 | local_res8[0] & 0xf;
      }
      else {
        local_res8[0] = *(byte *)*plVar3;
        *plVar3 = *plVar3 + 1;
        this->bIsBreaking = '\0';
        this->bIsViolating = '\0';
        this->bDriveTargetChanged = '\0';
        this->bIsBroken = '\0';
        this->field_0x10 = this->field_0x10 | local_res8[0] & 0xf;
      }
    }
    UE::Math::operator<<(param_1,&this->Force);
    UE::Math::operator<<(param_1,&this->Torque);
    pfVar2 = &this->LinearViolation;
    pfVar4 = (float *)**(undefined8 **)&param_1->field_0x8;
    if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar4 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar2,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar2);
      }
    }
    else {
      *pfVar2 = *pfVar4;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    }
    pfVar2 = &this->AngularViolation;
    pfVar4 = (float *)**(undefined8 **)&param_1->field_0x8;
    if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar4 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar2,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar2);
      }
    }
    else {
      *pfVar2 = *pfVar4;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    }
  }
  return (bool)((byte)~param_1->field_0x29 >> 1 & 1);
}

