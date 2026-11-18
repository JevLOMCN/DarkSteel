// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// StaticStruct @ 1485858f0

UScriptStruct * __cdecl FSkeletalMeshClothBuildParams::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FSkeletalMeshClothBuildParams.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FSkeletalMeshClothBuildParams.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSkeletalMeshClothBuildParams,(UObject *)pUVar1,
                         L"SkeletalMeshClothBuildParams");
  }
  return Z_Registration_Info_UScriptStruct_FSkeletalMeshClothBuildParams.OuterSingleton;
}

// FSkeletalMeshClothBuildParams @ 1485a4b90

FSkeletalMeshClothBuildParams * __thiscall
FSkeletalMeshClothBuildParams::FSkeletalMeshClothBuildParams(FSkeletalMeshClothBuildParams *this)

{
  undefined1 *this_00;
  undefined8 local_res8;
  
  (this->TargetAsset).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = 0;
  FWeakObjectPtr::operator=((FWeakObjectPtr *)this,(FObjectPtr)&local_res8);
  this->TargetLod = -1;
  this->bRemapParameters = false;
  ::FString::FString(&this->AssetName,"Clothing");
  this->LodIndex = 0;
  this->SourceSection = 0;
  this_00 = &(this->PhysicsAsset).SoftObjectPtr.field_0x18;
  this->bRemoveFromMesh = false;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->PhysicsAsset).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->PhysicsAsset).SoftObjectPtr = 0;
  *(undefined8 *)&(this->PhysicsAsset).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->PhysicsAsset).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)this_00,0);
  local_res8 = 0;
  FSoftObjectPtr::operator=(&(this->PhysicsAsset).SoftObjectPtr,(FObjectPtr)&local_res8);
  return this;
}

