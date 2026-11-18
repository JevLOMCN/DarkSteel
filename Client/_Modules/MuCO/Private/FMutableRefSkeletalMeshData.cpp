// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuCO
// Functions: 3

// StaticStruct @ 14ab97080

UScriptStruct * __cdecl FMutableRefSkeletalMeshData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMutableRefSkeletalMeshData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_CustomizableObject();
    Z_Registration_Info_UScriptStruct_FMutableRefSkeletalMeshData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMutableRefSkeletalMeshData,(UObject *)pUVar1,
                         L"MutableRefSkeletalMeshData");
  }
  return Z_Registration_Info_UScriptStruct_FMutableRefSkeletalMeshData.OuterSingleton;
}

// FMutableRefSkeletalMeshData @ 14ab9f8a0

FMutableRefSkeletalMeshData * __thiscall
FMutableRefSkeletalMeshData::FMutableRefSkeletalMeshData(FMutableRefSkeletalMeshData *this)

{
  undefined1 *puVar1;
  
  (this->SkeletalMesh).field0_0x0.DebugPtr = (USkeletalMesh *)0x0;
  puVar1 = &(this->SoftSkeletalMesh).SoftObjectPtr.field_0x18;
  *(undefined8 *)&(this->SoftSkeletalMesh).SoftObjectPtr = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined8 *)&(this->SoftSkeletalMesh).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->SoftSkeletalMesh).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->SoftSkeletalMesh).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)puVar1,0);
  puVar1 = &(this->PostProcessAnimInst).SoftObjectPtr.field_0x18;
  (this->SkeletalMeshLODSettings).field0_0x0.DebugPtr = (USkeletalMeshLODSettings *)0x0;
  *(undefined8 *)puVar1 = 0;
  *(undefined8 *)&(this->PostProcessAnimInst).SoftObjectPtr.field_0x20 = 0;
  (this->LODData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LODData).ArrayNum = 0;
  (this->LODData).ArrayMax = 0;
  (this->Sockets).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Sockets).ArrayNum = 0;
  (this->Sockets).ArrayMax = 0;
  (this->Bounds).Origin.field0_0x0._s_0.X = 0.0;
  (this->Bounds).Origin.field0_0x0._s_0.Y = 0.0;
  (this->Bounds).Origin.field0_0x0._s_0.Z = 0.0;
  (this->Bounds).BoxExtent.field0_0x0._s_0.X = 0.0;
  (this->Bounds).BoxExtent.field0_0x0._s_0.Y = 0.0;
  (this->Bounds).BoxExtent.field0_0x0._s_0.Z = 0.0;
  (this->Bounds).SphereRadius = 0.0;
  (this->Settings).bEnablePerPolyCollision = false;
  (this->Settings).DefaultUVChannelDensity = 0.0;
  (this->Skeleton).field0_0x0.DebugPtr = (USkeleton *)0x0;
  (this->PhysicsAsset).field0_0x0.DebugPtr = (UPhysicsAsset *)0x0;
  *(undefined8 *)&(this->PostProcessAnimInst).SoftObjectPtr = 0;
  *(undefined8 *)&(this->PostProcessAnimInst).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->PostProcessAnimInst).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)puVar1,0);
  (this->ShadowPhysicsAsset).field0_0x0.DebugPtr = (UPhysicsAsset *)0x0;
  (this->AssetUserDataIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AssetUserDataIndices).ArrayNum = 0;
  (this->AssetUserDataIndices).ArrayMax = 0;
  return this;
}

// ~FMutableRefSkeletalMeshData @ 14aba25f0

void __thiscall
FMutableRefSkeletalMeshData::~FMutableRefSkeletalMeshData(FMutableRefSkeletalMeshData *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  pFVar1 = (this->AssetUserDataIndices).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pvVar2 = *(void **)&(this->PostProcessAnimInst).SoftObjectPtr.field_0x18;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  pFVar1 = (this->Sockets).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->LODData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pvVar2 = *(void **)&(this->SoftSkeletalMesh).SoftObjectPtr.field_0x18;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
    return;
  }
  return;
}

