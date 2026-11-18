// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 1

// StaticStruct @ 14d5e4a60

UScriptStruct * __cdecl FCameraActorAttachmentInfo::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FCameraActorAttachmentInfo.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GameplayCameras();
    Z_Registration_Info_UScriptStruct_FCameraActorAttachmentInfo.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FCameraActorAttachmentInfo,(UObject *)pUVar1,
                         L"CameraActorAttachmentInfo");
  }
  return Z_Registration_Info_UScriptStruct_FCameraActorAttachmentInfo.OuterSingleton;
}

