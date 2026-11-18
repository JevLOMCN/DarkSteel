// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosVDRuntime
// Functions: 2

// StaticStruct @ 1436cadc0

UScriptStruct * __cdecl FChaosVDCharacterGroundConstraintStateDataWrapper::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FChaosVDCharacterGroundConstraintStateDataWrapper.
      OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ChaosVDRuntime();
    Z_Registration_Info_UScriptStruct_FChaosVDCharacterGroundConstraintStateDataWrapper.
    OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FChaosVDCharacterGroundConstraintStateDataWrapper
                         ,(UObject *)pUVar1,L"ChaosVDCharacterGroundConstraintStateDataWrapper");
  }
  return Z_Registration_Info_UScriptStruct_FChaosVDCharacterGroundConstraintStateDataWrapper.
         OuterSingleton;
}

// Serialize @ 1436db420

bool __thiscall
FChaosVDCharacterGroundConstraintStateDataWrapper::Serialize
          (FChaosVDCharacterGroundConstraintStateDataWrapper *this,FArchive *param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  int *piVar3;
  
  ::operator<<(param_1,(bool *)&this->_padding_);
  if ((char)this->_padding_ != '\0') {
    piVar1 = &this->Island;
    piVar3 = (int *)**(undefined8 **)&param_1->field_0x8;
    if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar3 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar1,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar1);
      }
    }
    else {
      *piVar1 = *piVar3;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    }
    piVar1 = &this->Level;
    puVar2 = &param_1->field_0x2a;
    piVar3 = (int *)**(undefined8 **)&param_1->field_0x8;
    if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar3 + 1) {
      if ((*puVar2 & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar1,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar1);
      }
    }
    else {
      *piVar1 = *piVar3;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    }
    piVar1 = &this->Color;
    piVar3 = (int *)**(undefined8 **)&param_1->field_0x8;
    if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar3 + 1) {
      if ((*puVar2 & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar1,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar1);
      }
    }
    else {
      *piVar1 = *piVar3;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    }
    piVar1 = &this->IslandSize;
    piVar3 = (int *)**(undefined8 **)&param_1->field_0x8;
    if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar3 + 1) {
      if ((*puVar2 & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar1,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar1);
      }
    }
    else {
      *piVar1 = *piVar3;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    }
    ::operator<<(param_1,&this->bDisabled);
    UE::Math::operator<<(param_1,&this->SolverAppliedForce);
    UE::Math::operator<<(param_1,&this->SolverAppliedTorque);
  }
  return (bool)((byte)~param_1->field_0x29 >> 1 & 1);
}

