// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosVDRuntime
// Functions: 2

// StaticStruct @ 1436ca610

UScriptStruct * __cdecl FChaosVDBVCellElementDataWrapper::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FChaosVDBVCellElementDataWrapper.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ChaosVDRuntime();
    Z_Registration_Info_UScriptStruct_FChaosVDBVCellElementDataWrapper.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FChaosVDBVCellElementDataWrapper,
                         (UObject *)pUVar1,L"ChaosVDBVCellElementDataWrapper");
  }
  return Z_Registration_Info_UScriptStruct_FChaosVDBVCellElementDataWrapper.OuterSingleton;
}

// Serialize @ 1436dae90

bool __thiscall
FChaosVDBVCellElementDataWrapper::Serialize
          (FChaosVDBVCellElementDataWrapper *this,FArchive *param_1)

{
  int *piVar1;
  int *piVar2;
  
  ::operator<<(param_1,(bool *)&this->_padding_);
  if ((char)this->_padding_ != '\0') {
    UE::Math::operator<<(param_1,&this->Bounds);
    piVar1 = &this->ParticleIndex;
    piVar2 = (int *)**(undefined8 **)&param_1->field_0x8;
    if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar2 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar1,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar1);
      }
    }
    else {
      *piVar1 = *piVar2;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    }
    UE::Math::operator<<(param_1,&this->StartIdx);
    UE::Math::operator<<(param_1,&this->EndIdx);
  }
  return (bool)((byte)~param_1->field_0x29 >> 1 & 1);
}

