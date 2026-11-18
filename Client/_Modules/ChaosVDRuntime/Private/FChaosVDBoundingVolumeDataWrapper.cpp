// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosVDRuntime
// Functions: 2

// StaticStruct @ 1436ca680

UScriptStruct * __cdecl FChaosVDBoundingVolumeDataWrapper::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FChaosVDBoundingVolumeDataWrapper.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ChaosVDRuntime();
    Z_Registration_Info_UScriptStruct_FChaosVDBoundingVolumeDataWrapper.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FChaosVDBoundingVolumeDataWrapper,
                         (UObject *)pUVar1,L"ChaosVDBoundingVolumeDataWrapper");
  }
  return Z_Registration_Info_UScriptStruct_FChaosVDBoundingVolumeDataWrapper.OuterSingleton;
}

// Serialize @ 1436daf40

bool __thiscall
FChaosVDBoundingVolumeDataWrapper::Serialize
          (FChaosVDBoundingVolumeDataWrapper *this,FArchive *param_1)

{
  longlong *plVar1;
  uint *puVar2;
  undefined4 *puVar3;
  uint *puVar4;
  
  ::operator<<(param_1,(bool *)&this->_padding_);
  if ((char)this->_padding_ != '\0') {
    plVar1 = &this->_padding_;
    puVar3 = (undefined4 *)**(undefined8 **)&param_1->field_0x8;
    if ((undefined4 *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar3 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,plVar1,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,(uint *)plVar1);
      }
    }
    else {
      *(undefined4 *)plVar1 = *puVar3;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    }
    puVar2 = (uint *)((longlong)&this->_padding_ + 4);
    puVar4 = (uint *)**(undefined8 **)&param_1->field_0x8;
    if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar4 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar2,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,puVar2);
      }
    }
    else {
      *puVar2 = *puVar4;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    }
    UE::Math::operator<<(param_1,&this->MElementsCounts);
    TArrayPrivateFriend::
    Serialize<TArray<FChaosVDBVCellElementDataWrapper,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
              (param_1,&this->MElements);
    ::operator<<(param_1,&this->MaxPayloadBounds);
  }
  return (bool)((byte)~param_1->field_0x29 >> 1 & 1);
}

