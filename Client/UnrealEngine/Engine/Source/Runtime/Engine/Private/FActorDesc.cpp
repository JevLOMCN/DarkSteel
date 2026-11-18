// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// StaticStruct @ 148a29c20

UScriptStruct * __cdecl FActorDesc::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FActorDesc.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FActorDesc.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FActorDesc,(UObject *)pUVar1,L"ActorDesc");
  }
  return Z_Registration_Info_UScriptStruct_FActorDesc.OuterSingleton;
}

// FActorDesc @ 148a416c0

FActorDesc * __thiscall FActorDesc::FActorDesc(FActorDesc *this)

{
  (this->Guid).A = 0;
  (this->Guid).B = 0;
  (this->Guid).C = 0;
  (this->Guid).D = 0;
  (this->Class).AssetPath.PackageName.ComparisonIndex = 0;
  (this->Class).AssetPath.PackageName.Number = 0;
  (this->Class).AssetPath.AssetName.ComparisonIndex = 0;
  (this->Class).AssetPath.AssetName.Number = 0;
  (this->Class).SubPathString.Data.ArrayNum = 0;
  (this->Class).SubPathString.Data.ArrayMax = 0;
  (this->Name).ComparisonIndex = 0;
  (this->Name).Number = 0;
  (this->Label).ComparisonIndex = 0;
  (this->Label).Number = 0;
  (this->Bounds).Min.field0_0x0._s_0.X = 0.0;
  (this->Bounds).Min.field0_0x0._s_0.Y = 0.0;
  (this->Bounds).Min.field0_0x0._s_0.Z = 0.0;
  (this->NativeClass).field0_0x0.DebugPtr = (UClass *)0x0;
  (this->Class).SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Bounds).Max.field0_0x0._s_0.X = 0.0;
  (this->Bounds).Max.field0_0x0._s_0.Y = 0.0;
  (this->Bounds).Max.field0_0x0._s_0.Z = 0.0;
  (this->Bounds).IsValid = '\0';
  (this->Bounds).Pad[0] = '\0';
  (this->Bounds).Pad[1] = '\0';
  (this->Bounds).Pad[2] = '\0';
  (this->Bounds).Pad[3] = '\0';
  (this->Bounds).Pad[4] = '\0';
  (this->Bounds).Pad[5] = '\0';
  (this->Bounds).Pad[6] = '\0';
  this->bIsSpatiallyLoaded = false;
  this->bActorIsEditorOnly = false;
  (this->RuntimeGrid).ComparisonIndex = 0;
  (this->RuntimeGrid).Number = 0;
  (this->ActorPackage).ComparisonIndex = 0;
  (this->ActorPackage).Number = 0;
  (this->ActorPath).ComparisonIndex = 0;
  (this->ActorPath).Number = 0;
  (this->DataLayerAssets).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DataLayerAssets).ArrayNum = 0;
  (this->DataLayerAssets).ArrayMax = 0;
  return this;
}

