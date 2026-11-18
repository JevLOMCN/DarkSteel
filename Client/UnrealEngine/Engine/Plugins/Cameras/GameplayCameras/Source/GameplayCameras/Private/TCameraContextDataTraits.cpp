// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 4

// GetDataType @ 14d619f90

ECameraContextDataType __cdecl
UE::Cameras::TCameraContextDataTraits<FCameraActorAttachmentInfo>::GetDataType(void)

{
  return Struct;
}

// GetDataTypeObject @ 14d619fa0

UObject * __cdecl
UE::Cameras::TCameraContextDataTraits<FCameraActorAttachmentInfo>::GetDataTypeObject(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FCameraActorAttachmentInfo.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GameplayCameras();
    Z_Registration_Info_UScriptStruct_FCameraActorAttachmentInfo.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FCameraActorAttachmentInfo,(UObject *)pUVar1,
                         L"CameraActorAttachmentInfo");
  }
  return (UObject *)Z_Registration_Info_UScriptStruct_FCameraActorAttachmentInfo.OuterSingleton;
}

// GetDataType @ 14d65fd40

ECameraContextDataType __cdecl
UE::Cameras::TCameraContextDataTraits<FCameraActorTargetInfo>::GetDataType(void)

{
  return Struct;
}

// GetDataTypeObject @ 14d65fd50

UObject * __cdecl
UE::Cameras::TCameraContextDataTraits<FCameraActorTargetInfo>::GetDataTypeObject(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FCameraActorTargetInfo.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GameplayCameras();
    Z_Registration_Info_UScriptStruct_FCameraActorTargetInfo.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FCameraActorTargetInfo,(UObject *)pUVar1,
                         L"CameraActorTargetInfo");
  }
  return (UObject *)Z_Registration_Info_UScriptStruct_FCameraActorTargetInfo.OuterSingleton;
}

