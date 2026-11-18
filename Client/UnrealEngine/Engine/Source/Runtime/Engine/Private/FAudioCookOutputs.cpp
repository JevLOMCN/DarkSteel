// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// StaticStruct @ 147607de0

UScriptStruct * __cdecl FAudioCookOutputs::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAudioCookOutputs.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FAudioCookOutputs.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAudioCookOutputs,(UObject *)pUVar1,
                         L"AudioCookOutputs");
  }
  return Z_Registration_Info_UScriptStruct_FAudioCookOutputs.OuterSingleton;
}

// GetVersion @ 147640b80

int __cdecl FAudioCookOutputs::GetVersion(void)

{
  return Ver;
}

// Serialize @ 14765d620

bool __thiscall FAudioCookOutputs::Serialize(FAudioCookOutputs *this,FArchive *param_1)

{
  uint *puVar1;
  int *piVar2;
  int *piVar3;
  uint *puVar4;
  
  if ((param_1->field_0x28 & 4) != 0) {
    this->Version = Ver;
    this->Id = 0x4f4341;
  }
  puVar1 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar1 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,this,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,&this->Id);
    }
  }
  else {
    this->Id = *puVar1;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  if (((param_1->field_0x28 & 1) == 0) || (this->Id == 0x4f4341)) {
    piVar2 = (int *)**(undefined8 **)&param_1->field_0x8;
    if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar2 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&this->Version,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,(uint *)&this->Version);
      }
    }
    else {
      this->Version = *piVar2;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    }
    if (((param_1->field_0x28 & 1) == 0) || (this->Version == Ver)) {
      piVar2 = &this->NumChannels;
      piVar3 = (int *)**(undefined8 **)&param_1->field_0x8;
      if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar3 + 1) {
        if ((param_1->field_0x2a & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar2,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar2);
        }
      }
      else {
        *piVar2 = *piVar3;
        **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
      }
      piVar2 = &this->SampleRate;
      piVar3 = (int *)**(undefined8 **)&param_1->field_0x8;
      if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar3 + 1) {
        if ((param_1->field_0x2a & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar2,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar2);
        }
      }
      else {
        *piVar2 = *piVar3;
        **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
      }
      puVar1 = &this->NumFrames;
      puVar4 = (uint *)**(undefined8 **)&param_1->field_0x8;
      if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar4 + 1) {
        if ((param_1->field_0x2a & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar1,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,puVar1);
        }
      }
      else {
        *puVar1 = *puVar4;
        **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
      }
      TArrayPrivateFriend::Serialize<unsigned_char,TSizedDefaultAllocator<32>_>
                (param_1,&this->EncodedData);
      return true;
    }
  }
  return false;
}

