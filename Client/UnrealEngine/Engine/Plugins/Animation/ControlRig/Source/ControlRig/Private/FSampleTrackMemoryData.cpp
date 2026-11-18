// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 2

// StaticStruct @ 14a382020

UScriptStruct * __cdecl FSampleTrackMemoryData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FSampleTrackMemoryData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FSampleTrackMemoryData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSampleTrackMemoryData,(UObject *)pUVar1,
                         L"SampleTrackMemoryData");
  }
  return Z_Registration_Info_UScriptStruct_FSampleTrackMemoryData.OuterSingleton;
}

// Serialize @ 14a457830

void __thiscall FSampleTrackMemoryData::Serialize(FSampleTrackMemoryData *this,FArchive *param_1)

{
  TArrayPrivateFriend::Serialize<unsigned_char,TSizedDefaultAllocator<32>_>(param_1,&this->Buffer);
  TArrayPrivateFriend::Serialize<FName,TSizedDefaultAllocator<32>_>(param_1,&this->Names);
  TArrayPrivateFriend::Serialize<FString,TSizedDefaultAllocator<32>_>(param_1,&this->ObjectPaths);
  return;
}

