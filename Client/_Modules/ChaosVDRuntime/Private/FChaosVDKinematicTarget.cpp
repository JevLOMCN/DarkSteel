// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosVDRuntime
// Functions: 2

// StaticStruct @ 1436c9630

UScriptStruct * __cdecl FChaosVDKinematicTarget::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FChaosVDKinematicTarget.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ChaosVDRuntime();
    Z_Registration_Info_UScriptStruct_FChaosVDKinematicTarget.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FChaosVDKinematicTarget,(UObject *)pUVar1,
                         L"ChaosVDKinematicTarget");
  }
  return Z_Registration_Info_UScriptStruct_FChaosVDKinematicTarget.OuterSingleton;
}

// Serialize @ 1436de4f0

bool __thiscall FChaosVDKinematicTarget::Serialize(FChaosVDKinematicTarget *this,FArchive *param_1)

{
  EChaosVDKinematicTargetMode *pEVar1;
  EChaosVDKinematicTargetMode *pEVar2;
  
  ::operator<<(param_1,(bool *)&this->_padding_);
  if ((char)this->_padding_ != '\0') {
    UE::Math::operator<<(param_1,&this->Rotation);
    UE::Math::operator<<(param_1,&this->Position);
    pEVar1 = &this->Mode;
    pEVar2 = (EChaosVDKinematicTargetMode *)**(undefined8 **)&param_1->field_0x8;
    if ((EChaosVDKinematicTargetMode *)(*(undefined8 **)&param_1->field_0x8)[1] < pEVar2 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pEVar1,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,pEVar1);
      }
    }
    else {
      *pEVar1 = *pEVar2;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    }
  }
  return (bool)((byte)~param_1->field_0x29 >> 1 & 1);
}

