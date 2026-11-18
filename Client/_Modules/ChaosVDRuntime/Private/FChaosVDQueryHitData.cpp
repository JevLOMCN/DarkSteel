// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosVDRuntime
// Functions: 2

// StaticStruct @ 1436c9500

UScriptStruct * __cdecl FChaosVDQueryHitData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FChaosVDQueryHitData.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_ChaosVDRuntime();
    Z_Registration_Info_UScriptStruct_FChaosVDQueryHitData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FChaosVDQueryHitData,(UObject *)pUVar1,
                         L"ChaosVDQueryHitData");
  }
  return Z_Registration_Info_UScriptStruct_FChaosVDQueryHitData.OuterSingleton;
}

// Serialize @ 1436e0300

bool __thiscall FChaosVDQueryHitData::Serialize(FChaosVDQueryHitData *this,FArchive *param_1)

{
  float *pfVar1;
  int *piVar2;
  float *pfVar3;
  int *piVar4;
  
  ::operator<<(param_1,(bool *)&this->_padding_);
  if ((char)this->_padding_ != '\0') {
    pfVar1 = &this->Distance;
    pfVar3 = (float *)**(undefined8 **)&param_1->field_0x8;
    if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar3 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar1,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar1);
      }
    }
    else {
      *pfVar1 = *pfVar3;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    }
    piVar2 = &this->FaceIdx;
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
    ::operator<<(param_1,&this->Flags);
    UE::Math::operator<<(param_1,&this->WorldPosition);
    UE::Math::operator<<(param_1,&this->WorldNormal);
    UE::Math::operator<<(param_1,&this->FaceNormal);
    ::operator<<(param_1,(bool *)&this->_padding_);
  }
  return (bool)((byte)~param_1->field_0x29 >> 1 & 1);
}

