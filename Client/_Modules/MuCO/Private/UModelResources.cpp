// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuCO
// Functions: 6

// StaticClass @ 14ab9a9d0

UClass * __cdecl UModelResources::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UModelResources.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CustomizableObject",L"ModelResources",
               &Z_Registration_Info_UClass_UModelResources.InnerSingleton,
               StaticRegisterNativesUModelResources,0x5b8,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine"
               ,InternalConstructor<UModelResources>,InternalVTableHelperCtorCaller<UModelResources>
               ,local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UModelResources.InnerSingleton;
}

// UModelResources @ 14aba0460

UModelResources * __thiscall
UModelResources::UModelResources(UModelResources *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UModelResources__6B_;
  (this->ReferenceSkeletalMeshesData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ReferenceSkeletalMeshesData).ArrayNum = 0;
  (this->ReferenceSkeletalMeshesData).ArrayMax = 0;
  (this->Skeletons).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Skeletons).ArrayNum = 0;
  (this->Skeletons).ArrayMax = 0;
  (this->Materials).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Materials).ArrayNum = 0;
  (this->Materials).ArrayMax = 0;
  (this->PassThroughTextures).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PassThroughTextures).ArrayNum = 0;
  (this->PassThroughTextures).ArrayMax = 0;
  (this->PassThroughMeshes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PassThroughMeshes).ArrayNum = 0;
  (this->PassThroughMeshes).ArrayMax = 0;
  (this->PhysicsAssets).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PhysicsAssets).ArrayNum = 0;
  (this->PhysicsAssets).ArrayMax = 0;
  (this->AnimBPs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AnimBPs).ArrayNum = 0;
  (this->AnimBPs).ArrayMax = 0;
  (this->AnimBpOverridePhysiscAssetsInfo).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AnimBpOverridePhysiscAssetsInfo).ArrayNum = 0;
  (this->AnimBpOverridePhysiscAssetsInfo).ArrayMax = 0;
  (this->MaterialSlotNames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MaterialSlotNames).ArrayNum = 0;
  (this->MaterialSlotNames).ArrayMax = 0;
  *(undefined8 *)&this->BoneNamesMap = 0;
  *(undefined8 *)&(this->BoneNamesMap).field_0x8 = 0;
  *(undefined8 *)&(this->BoneNamesMap).field_0x20 = 0;
  *(undefined4 *)&(this->BoneNamesMap).field_0x28 = 0;
  *(undefined4 *)&(this->BoneNamesMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->BoneNamesMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->BoneNamesMap).field_0x34 = 0;
  *(undefined8 *)&(this->BoneNamesMap).field_0x40 = 0;
  *(undefined4 *)&(this->BoneNamesMap).field_0x48 = 0;
  *(undefined8 *)&this->Sockets = 0;
  *(undefined8 *)&(this->Sockets).field_0x8 = 0;
  *(undefined8 *)&(this->Sockets).field_0x20 = 0;
  *(undefined4 *)&(this->Sockets).field_0x28 = 0;
  *(undefined4 *)&(this->Sockets).field_0x2c = 0x80;
  *(undefined4 *)&(this->Sockets).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Sockets).field_0x34 = 0;
  *(undefined8 *)&(this->Sockets).field_0x40 = 0;
  *(undefined4 *)&(this->Sockets).field_0x48 = 0;
  (this->SkinWeightProfilesInfo).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SkinWeightProfilesInfo).ArrayNum = 0;
  (this->SkinWeightProfilesInfo).ArrayMax = 0;
  (this->ImageProperties).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ImageProperties).ArrayNum = 0;
  (this->ImageProperties).ArrayMax = 0;
  *(undefined8 *)&this->MeshMetadata = 0;
  *(undefined8 *)&(this->MeshMetadata).field_0x8 = 0;
  *(undefined8 *)&(this->MeshMetadata).field_0x20 = 0;
  *(undefined4 *)&(this->MeshMetadata).field_0x28 = 0;
  *(undefined4 *)&(this->MeshMetadata).field_0x2c = 0x80;
  *(undefined4 *)&(this->MeshMetadata).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->MeshMetadata).field_0x34 = 0;
  *(undefined8 *)&(this->MeshMetadata).field_0x40 = 0;
  *(undefined4 *)&(this->MeshMetadata).field_0x48 = 0;
  *(undefined8 *)&this->SurfaceMetadata = 0;
  *(undefined8 *)&(this->SurfaceMetadata).field_0x8 = 0;
  *(undefined8 *)&(this->SurfaceMetadata).field_0x20 = 0;
  *(undefined4 *)&(this->SurfaceMetadata).field_0x28 = 0;
  *(undefined4 *)&(this->SurfaceMetadata).field_0x2c = 0x80;
  *(undefined4 *)&(this->SurfaceMetadata).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SurfaceMetadata).field_0x34 = 0;
  *(undefined8 *)&(this->SurfaceMetadata).field_0x40 = 0;
  *(undefined4 *)&(this->SurfaceMetadata).field_0x48 = 0;
  *(undefined8 *)&this->ParameterUIDataMap = 0;
  *(undefined8 *)&(this->ParameterUIDataMap).field_0x8 = 0;
  *(undefined8 *)&(this->ParameterUIDataMap).field_0x20 = 0;
  *(undefined4 *)&(this->ParameterUIDataMap).field_0x28 = 0;
  *(undefined4 *)&(this->ParameterUIDataMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->ParameterUIDataMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ParameterUIDataMap).field_0x34 = 0;
  *(undefined8 *)&(this->ParameterUIDataMap).field_0x40 = 0;
  *(undefined4 *)&(this->ParameterUIDataMap).field_0x48 = 0;
  *(undefined8 *)&this->StateUIDataMap = 0;
  *(undefined8 *)&(this->StateUIDataMap).field_0x8 = 0;
  *(undefined8 *)&(this->StateUIDataMap).field_0x20 = 0;
  *(undefined4 *)&(this->StateUIDataMap).field_0x28 = 0;
  *(undefined4 *)&(this->StateUIDataMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->StateUIDataMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->StateUIDataMap).field_0x34 = 0;
  *(undefined8 *)&(this->StateUIDataMap).field_0x40 = 0;
  *(undefined4 *)&(this->StateUIDataMap).field_0x48 = 0;
  (this->ClothSharedConfigsData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ClothSharedConfigsData).ArrayNum = 0;
  (this->ClothSharedConfigsData).ArrayMax = 0;
  (this->ClothingAssetsData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ClothingAssetsData).ArrayNum = 0;
  (this->ClothingAssetsData).ArrayMax = 0;
  this->bAllowClothingPhysicsEditsPropagation = true;
  (this->StreamedResourceData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StreamedResourceData).ArrayNum = 0;
  (this->StreamedResourceData).ArrayMax = 0;
  (this->AlwaysLoadedExtensionData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AlwaysLoadedExtensionData).ArrayNum = 0;
  (this->AlwaysLoadedExtensionData).ArrayMax = 0;
  (this->StreamedExtensionData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StreamedExtensionData).ArrayNum = 0;
  (this->StreamedExtensionData).ArrayMax = 0;
  *(undefined8 *)&this->NumLODsAvailable = 0;
  *(undefined8 *)&(this->NumLODsAvailable).field_0x8 = 0;
  *(undefined8 *)&(this->NumLODsAvailable).field_0x20 = 0;
  *(undefined4 *)&(this->NumLODsAvailable).field_0x28 = 0;
  *(undefined4 *)&(this->NumLODsAvailable).field_0x2c = 0x80;
  *(undefined4 *)&(this->NumLODsAvailable).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->NumLODsAvailable).field_0x34 = 0;
  *(undefined8 *)&(this->NumLODsAvailable).field_0x40 = 0;
  *(undefined4 *)&(this->NumLODsAvailable).field_0x48 = 0;
  *(undefined8 *)&this->NumLODsToStream = 0;
  *(undefined8 *)&(this->NumLODsToStream).field_0x8 = 0;
  *(undefined8 *)&(this->NumLODsToStream).field_0x20 = 0;
  *(undefined4 *)&(this->NumLODsToStream).field_0x28 = 0;
  *(undefined4 *)&(this->NumLODsToStream).field_0x2c = 0x80;
  *(undefined4 *)&(this->NumLODsToStream).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->NumLODsToStream).field_0x34 = 0;
  *(undefined8 *)&(this->NumLODsToStream).field_0x40 = 0;
  *(undefined4 *)&(this->NumLODsToStream).field_0x48 = 0;
  *(undefined8 *)&this->FirstLODAvailable = 0;
  *(undefined8 *)&(this->FirstLODAvailable).field_0x8 = 0;
  *(undefined8 *)&(this->FirstLODAvailable).field_0x20 = 0;
  *(undefined4 *)&(this->FirstLODAvailable).field_0x28 = 0;
  *(undefined4 *)&(this->FirstLODAvailable).field_0x2c = 0x80;
  *(undefined4 *)&(this->FirstLODAvailable).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->FirstLODAvailable).field_0x34 = 0;
  *(undefined8 *)&(this->FirstLODAvailable).field_0x40 = 0;
  *(undefined4 *)&(this->FirstLODAvailable).field_0x48 = 0;
  (this->ComponentNamesPerObjectComponent).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ComponentNamesPerObjectComponent).ArrayNum = 0;
  (this->ComponentNamesPerObjectComponent).ArrayMax = 0;
  *(undefined8 *)&this->MinLODPerComponent = 0;
  *(undefined8 *)&(this->MinLODPerComponent).field_0x8 = 0;
  *(undefined8 *)&(this->MinLODPerComponent).field_0x20 = 0;
  *(undefined4 *)&(this->MinLODPerComponent).field_0x28 = 0;
  *(undefined4 *)&(this->MinLODPerComponent).field_0x2c = 0x80;
  *(undefined4 *)&(this->MinLODPerComponent).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->MinLODPerComponent).field_0x34 = 0;
  *(undefined8 *)&(this->MinLODPerComponent).field_0x40 = 0;
  *(undefined4 *)&(this->MinLODPerComponent).field_0x48 = 0;
  *(undefined8 *)&this->MinQualityLevelLODPerComponent = 0;
  *(undefined8 *)&(this->MinQualityLevelLODPerComponent).field_0x8 = 0;
  *(undefined8 *)&(this->MinQualityLevelLODPerComponent).field_0x20 = 0;
  *(undefined4 *)&(this->MinQualityLevelLODPerComponent).field_0x28 = 0;
  *(undefined4 *)&(this->MinQualityLevelLODPerComponent).field_0x2c = 0x80;
  *(undefined4 *)&(this->MinQualityLevelLODPerComponent).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->MinQualityLevelLODPerComponent).field_0x34 = 0;
  *(undefined8 *)&(this->MinQualityLevelLODPerComponent).field_0x40 = 0;
  *(undefined4 *)&(this->MinQualityLevelLODPerComponent).field_0x48 = 0;
  *(undefined8 *)&this->TextureParameterDefaultValues = 0;
  *(undefined8 *)&(this->TextureParameterDefaultValues).field_0x8 = 0;
  *(undefined8 *)&(this->TextureParameterDefaultValues).field_0x20 = 0;
  *(undefined4 *)&(this->TextureParameterDefaultValues).field_0x28 = 0;
  *(undefined4 *)&(this->TextureParameterDefaultValues).field_0x2c = 0x80;
  *(undefined4 *)&(this->TextureParameterDefaultValues).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->TextureParameterDefaultValues).field_0x34 = 0;
  *(undefined8 *)&(this->TextureParameterDefaultValues).field_0x40 = 0;
  *(undefined4 *)&(this->TextureParameterDefaultValues).field_0x48 = 0;
  *(undefined8 *)&this->SkeletalMeshParameterDefaultValues = 0;
  *(undefined8 *)&(this->SkeletalMeshParameterDefaultValues).field_0x8 = 0;
  *(undefined8 *)&(this->SkeletalMeshParameterDefaultValues).field_0x20 = 0;
  *(undefined4 *)&(this->SkeletalMeshParameterDefaultValues).field_0x28 = 0;
  *(undefined4 *)&(this->SkeletalMeshParameterDefaultValues).field_0x2c = 0x80;
  *(undefined4 *)&(this->SkeletalMeshParameterDefaultValues).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SkeletalMeshParameterDefaultValues).field_0x34 = 0;
  *(undefined8 *)&(this->SkeletalMeshParameterDefaultValues).field_0x40 = 0;
  *(undefined4 *)&(this->SkeletalMeshParameterDefaultValues).field_0x48 = 0;
  *(undefined8 *)&this->MaterialParameterDefaultValues = 0;
  *(undefined8 *)&(this->MaterialParameterDefaultValues).field_0x8 = 0;
  *(undefined8 *)&(this->MaterialParameterDefaultValues).field_0x20 = 0;
  *(undefined4 *)&(this->MaterialParameterDefaultValues).field_0x28 = 0;
  *(undefined4 *)&(this->MaterialParameterDefaultValues).field_0x2c = 0x80;
  *(undefined4 *)&(this->MaterialParameterDefaultValues).field_0x34 = 0;
  *(undefined4 *)&(this->MaterialParameterDefaultValues).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->MaterialParameterDefaultValues).field_0x40 = 0;
  *(undefined4 *)&(this->MaterialParameterDefaultValues).field_0x48 = 0;
  (this->ReleaseVersion).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ReleaseVersion).Data.ArrayNum = 0;
  (this->ReleaseVersion).Data.ArrayMax = 0;
  this->CodeVersion = 0;
  return this;
}

// UModelResources @ 14aba0910

UModelResources * __thiscall
UModelResources::UModelResources(UModelResources *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UModelResources__6B_;
  (this->ReferenceSkeletalMeshesData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ReferenceSkeletalMeshesData).ArrayNum = 0;
  (this->ReferenceSkeletalMeshesData).ArrayMax = 0;
  (this->Skeletons).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Skeletons).ArrayNum = 0;
  (this->Skeletons).ArrayMax = 0;
  (this->Materials).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Materials).ArrayNum = 0;
  (this->Materials).ArrayMax = 0;
  (this->PassThroughTextures).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PassThroughTextures).ArrayNum = 0;
  (this->PassThroughTextures).ArrayMax = 0;
  (this->PassThroughMeshes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PassThroughMeshes).ArrayNum = 0;
  (this->PassThroughMeshes).ArrayMax = 0;
  (this->PhysicsAssets).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PhysicsAssets).ArrayNum = 0;
  (this->PhysicsAssets).ArrayMax = 0;
  (this->AnimBPs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AnimBPs).ArrayNum = 0;
  (this->AnimBPs).ArrayMax = 0;
  (this->AnimBpOverridePhysiscAssetsInfo).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AnimBpOverridePhysiscAssetsInfo).ArrayNum = 0;
  (this->AnimBpOverridePhysiscAssetsInfo).ArrayMax = 0;
  (this->MaterialSlotNames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MaterialSlotNames).ArrayNum = 0;
  (this->MaterialSlotNames).ArrayMax = 0;
  *(undefined8 *)&this->BoneNamesMap = 0;
  *(undefined8 *)&(this->BoneNamesMap).field_0x8 = 0;
  *(undefined8 *)&(this->BoneNamesMap).field_0x20 = 0;
  *(undefined4 *)&(this->BoneNamesMap).field_0x28 = 0;
  *(undefined4 *)&(this->BoneNamesMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->BoneNamesMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->BoneNamesMap).field_0x34 = 0;
  *(undefined8 *)&(this->BoneNamesMap).field_0x40 = 0;
  *(undefined4 *)&(this->BoneNamesMap).field_0x48 = 0;
  *(undefined8 *)&this->Sockets = 0;
  *(undefined8 *)&(this->Sockets).field_0x8 = 0;
  *(undefined8 *)&(this->Sockets).field_0x20 = 0;
  *(undefined4 *)&(this->Sockets).field_0x28 = 0;
  *(undefined4 *)&(this->Sockets).field_0x2c = 0x80;
  *(undefined4 *)&(this->Sockets).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Sockets).field_0x34 = 0;
  *(undefined8 *)&(this->Sockets).field_0x40 = 0;
  *(undefined4 *)&(this->Sockets).field_0x48 = 0;
  (this->SkinWeightProfilesInfo).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SkinWeightProfilesInfo).ArrayNum = 0;
  (this->SkinWeightProfilesInfo).ArrayMax = 0;
  (this->ImageProperties).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ImageProperties).ArrayNum = 0;
  (this->ImageProperties).ArrayMax = 0;
  *(undefined8 *)&this->MeshMetadata = 0;
  *(undefined8 *)&(this->MeshMetadata).field_0x8 = 0;
  *(undefined8 *)&(this->MeshMetadata).field_0x20 = 0;
  *(undefined4 *)&(this->MeshMetadata).field_0x28 = 0;
  *(undefined4 *)&(this->MeshMetadata).field_0x2c = 0x80;
  *(undefined4 *)&(this->MeshMetadata).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->MeshMetadata).field_0x34 = 0;
  *(undefined8 *)&(this->MeshMetadata).field_0x40 = 0;
  *(undefined4 *)&(this->MeshMetadata).field_0x48 = 0;
  *(undefined8 *)&this->SurfaceMetadata = 0;
  *(undefined8 *)&(this->SurfaceMetadata).field_0x8 = 0;
  *(undefined8 *)&(this->SurfaceMetadata).field_0x20 = 0;
  *(undefined4 *)&(this->SurfaceMetadata).field_0x28 = 0;
  *(undefined4 *)&(this->SurfaceMetadata).field_0x2c = 0x80;
  *(undefined4 *)&(this->SurfaceMetadata).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SurfaceMetadata).field_0x34 = 0;
  *(undefined8 *)&(this->SurfaceMetadata).field_0x40 = 0;
  *(undefined4 *)&(this->SurfaceMetadata).field_0x48 = 0;
  *(undefined8 *)&this->ParameterUIDataMap = 0;
  *(undefined8 *)&(this->ParameterUIDataMap).field_0x8 = 0;
  *(undefined8 *)&(this->ParameterUIDataMap).field_0x20 = 0;
  *(undefined4 *)&(this->ParameterUIDataMap).field_0x28 = 0;
  *(undefined4 *)&(this->ParameterUIDataMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->ParameterUIDataMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ParameterUIDataMap).field_0x34 = 0;
  *(undefined8 *)&(this->ParameterUIDataMap).field_0x40 = 0;
  *(undefined4 *)&(this->ParameterUIDataMap).field_0x48 = 0;
  *(undefined8 *)&this->StateUIDataMap = 0;
  *(undefined8 *)&(this->StateUIDataMap).field_0x8 = 0;
  *(undefined8 *)&(this->StateUIDataMap).field_0x20 = 0;
  *(undefined4 *)&(this->StateUIDataMap).field_0x28 = 0;
  *(undefined4 *)&(this->StateUIDataMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->StateUIDataMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->StateUIDataMap).field_0x34 = 0;
  *(undefined8 *)&(this->StateUIDataMap).field_0x40 = 0;
  *(undefined4 *)&(this->StateUIDataMap).field_0x48 = 0;
  (this->ClothSharedConfigsData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ClothSharedConfigsData).ArrayNum = 0;
  (this->ClothSharedConfigsData).ArrayMax = 0;
  (this->ClothingAssetsData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ClothingAssetsData).ArrayNum = 0;
  (this->ClothingAssetsData).ArrayMax = 0;
  this->bAllowClothingPhysicsEditsPropagation = true;
  (this->StreamedResourceData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StreamedResourceData).ArrayNum = 0;
  (this->StreamedResourceData).ArrayMax = 0;
  (this->AlwaysLoadedExtensionData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AlwaysLoadedExtensionData).ArrayNum = 0;
  (this->AlwaysLoadedExtensionData).ArrayMax = 0;
  (this->StreamedExtensionData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StreamedExtensionData).ArrayNum = 0;
  (this->StreamedExtensionData).ArrayMax = 0;
  *(undefined8 *)&this->NumLODsAvailable = 0;
  *(undefined8 *)&(this->NumLODsAvailable).field_0x8 = 0;
  *(undefined8 *)&(this->NumLODsAvailable).field_0x20 = 0;
  *(undefined4 *)&(this->NumLODsAvailable).field_0x28 = 0;
  *(undefined4 *)&(this->NumLODsAvailable).field_0x2c = 0x80;
  *(undefined4 *)&(this->NumLODsAvailable).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->NumLODsAvailable).field_0x34 = 0;
  *(undefined8 *)&(this->NumLODsAvailable).field_0x40 = 0;
  *(undefined4 *)&(this->NumLODsAvailable).field_0x48 = 0;
  *(undefined8 *)&this->NumLODsToStream = 0;
  *(undefined8 *)&(this->NumLODsToStream).field_0x8 = 0;
  *(undefined8 *)&(this->NumLODsToStream).field_0x20 = 0;
  *(undefined4 *)&(this->NumLODsToStream).field_0x28 = 0;
  *(undefined4 *)&(this->NumLODsToStream).field_0x2c = 0x80;
  *(undefined4 *)&(this->NumLODsToStream).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->NumLODsToStream).field_0x34 = 0;
  *(undefined8 *)&(this->NumLODsToStream).field_0x40 = 0;
  *(undefined4 *)&(this->NumLODsToStream).field_0x48 = 0;
  *(undefined8 *)&this->FirstLODAvailable = 0;
  *(undefined8 *)&(this->FirstLODAvailable).field_0x8 = 0;
  *(undefined8 *)&(this->FirstLODAvailable).field_0x20 = 0;
  *(undefined4 *)&(this->FirstLODAvailable).field_0x28 = 0;
  *(undefined4 *)&(this->FirstLODAvailable).field_0x2c = 0x80;
  *(undefined4 *)&(this->FirstLODAvailable).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->FirstLODAvailable).field_0x34 = 0;
  *(undefined8 *)&(this->FirstLODAvailable).field_0x40 = 0;
  *(undefined4 *)&(this->FirstLODAvailable).field_0x48 = 0;
  (this->ComponentNamesPerObjectComponent).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ComponentNamesPerObjectComponent).ArrayNum = 0;
  (this->ComponentNamesPerObjectComponent).ArrayMax = 0;
  *(undefined8 *)&this->MinLODPerComponent = 0;
  *(undefined8 *)&(this->MinLODPerComponent).field_0x8 = 0;
  *(undefined8 *)&(this->MinLODPerComponent).field_0x20 = 0;
  *(undefined4 *)&(this->MinLODPerComponent).field_0x28 = 0;
  *(undefined4 *)&(this->MinLODPerComponent).field_0x2c = 0x80;
  *(undefined4 *)&(this->MinLODPerComponent).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->MinLODPerComponent).field_0x34 = 0;
  *(undefined8 *)&(this->MinLODPerComponent).field_0x40 = 0;
  *(undefined4 *)&(this->MinLODPerComponent).field_0x48 = 0;
  *(undefined8 *)&this->MinQualityLevelLODPerComponent = 0;
  *(undefined8 *)&(this->MinQualityLevelLODPerComponent).field_0x8 = 0;
  *(undefined8 *)&(this->MinQualityLevelLODPerComponent).field_0x20 = 0;
  *(undefined4 *)&(this->MinQualityLevelLODPerComponent).field_0x28 = 0;
  *(undefined4 *)&(this->MinQualityLevelLODPerComponent).field_0x2c = 0x80;
  *(undefined4 *)&(this->MinQualityLevelLODPerComponent).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->MinQualityLevelLODPerComponent).field_0x34 = 0;
  *(undefined8 *)&(this->MinQualityLevelLODPerComponent).field_0x40 = 0;
  *(undefined4 *)&(this->MinQualityLevelLODPerComponent).field_0x48 = 0;
  *(undefined8 *)&this->TextureParameterDefaultValues = 0;
  *(undefined8 *)&(this->TextureParameterDefaultValues).field_0x8 = 0;
  *(undefined8 *)&(this->TextureParameterDefaultValues).field_0x20 = 0;
  *(undefined4 *)&(this->TextureParameterDefaultValues).field_0x28 = 0;
  *(undefined4 *)&(this->TextureParameterDefaultValues).field_0x2c = 0x80;
  *(undefined4 *)&(this->TextureParameterDefaultValues).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->TextureParameterDefaultValues).field_0x34 = 0;
  *(undefined8 *)&(this->TextureParameterDefaultValues).field_0x40 = 0;
  *(undefined4 *)&(this->TextureParameterDefaultValues).field_0x48 = 0;
  *(undefined8 *)&this->SkeletalMeshParameterDefaultValues = 0;
  *(undefined8 *)&(this->SkeletalMeshParameterDefaultValues).field_0x8 = 0;
  *(undefined8 *)&(this->SkeletalMeshParameterDefaultValues).field_0x20 = 0;
  *(undefined4 *)&(this->SkeletalMeshParameterDefaultValues).field_0x28 = 0;
  *(undefined4 *)&(this->SkeletalMeshParameterDefaultValues).field_0x2c = 0x80;
  *(undefined4 *)&(this->SkeletalMeshParameterDefaultValues).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SkeletalMeshParameterDefaultValues).field_0x34 = 0;
  *(undefined8 *)&(this->SkeletalMeshParameterDefaultValues).field_0x40 = 0;
  *(undefined4 *)&(this->SkeletalMeshParameterDefaultValues).field_0x48 = 0;
  *(undefined8 *)&this->MaterialParameterDefaultValues = 0;
  *(undefined8 *)&(this->MaterialParameterDefaultValues).field_0x8 = 0;
  *(undefined8 *)&(this->MaterialParameterDefaultValues).field_0x20 = 0;
  *(undefined4 *)&(this->MaterialParameterDefaultValues).field_0x28 = 0;
  *(undefined4 *)&(this->MaterialParameterDefaultValues).field_0x2c = 0x80;
  *(undefined4 *)&(this->MaterialParameterDefaultValues).field_0x34 = 0;
  *(undefined4 *)&(this->MaterialParameterDefaultValues).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->MaterialParameterDefaultValues).field_0x40 = 0;
  *(undefined4 *)&(this->MaterialParameterDefaultValues).field_0x48 = 0;
  (this->ReleaseVersion).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ReleaseVersion).Data.ArrayNum = 0;
  (this->ReleaseVersion).Data.ArrayMax = 0;
  this->CodeVersion = 0;
  return this;
}

// ~UModelResources @ 14aba2b40

void __thiscall UModelResources::~UModelResources(UModelResources *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7UModelResources__6B_;
  pFVar1 = (this->ReleaseVersion).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->MaterialParameterDefaultValues).field_0x48 = 0;
  pvVar2 = *(void **)&(this->MaterialParameterDefaultValues).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TObjectPtr<UMaterialInterface>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TObjectPtr<UMaterialInterface>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TObjectPtr<UMaterialInterface>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->MaterialParameterDefaultValues);
  *(undefined4 *)&(this->SkeletalMeshParameterDefaultValues).field_0x48 = 0;
  pvVar2 = *(void **)&(this->SkeletalMeshParameterDefaultValues).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TObjectPtr<USkeletalMesh>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TObjectPtr<USkeletalMesh>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TObjectPtr<USkeletalMesh>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->SkeletalMeshParameterDefaultValues);
  *(undefined4 *)&(this->TextureParameterDefaultValues).field_0x48 = 0;
  pvVar2 = *(void **)&(this->TextureParameterDefaultValues).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TObjectPtr<UTexture>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TObjectPtr<UTexture>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TObjectPtr<UTexture>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->TextureParameterDefaultValues);
  *(undefined4 *)&(this->MinQualityLevelLODPerComponent).field_0x48 = 0;
  pvVar2 = *(void **)&(this->MinQualityLevelLODPerComponent).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FPerQualityLevelInt>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FPerQualityLevelInt>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FPerQualityLevelInt>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->MinQualityLevelLODPerComponent);
  *(undefined4 *)&(this->MinLODPerComponent).field_0x48 = 0;
  pvVar2 = *(void **)&(this->MinLODPerComponent).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FPerPlatformInt>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FPerPlatformInt>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FPerPlatformInt>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->MinLODPerComponent);
  pFVar1 = (this->ComponentNamesPerObjectComponent).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->FirstLODAvailable).field_0x48 = 0;
  pvVar2 = *(void **)&(this->FirstLODAvailable).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,unsigned_char>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,unsigned_char>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,unsigned_char>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->FirstLODAvailable);
  *(undefined4 *)&(this->NumLODsToStream).field_0x48 = 0;
  pvVar2 = *(void **)&(this->NumLODsToStream).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,unsigned_char>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,unsigned_char>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,unsigned_char>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->NumLODsToStream);
  *(undefined4 *)&(this->NumLODsAvailable).field_0x48 = 0;
  pvVar2 = *(void **)&(this->NumLODsAvailable).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,unsigned_char>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,unsigned_char>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,unsigned_char>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->NumLODsAvailable);
  DestructItems<FCustomizableObjectStreamedResourceData,int>
            ((FCustomizableObjectStreamedResourceData *)
             (this->StreamedExtensionData).AllocatorInstance.Data,
             (this->StreamedExtensionData).ArrayNum);
  pFVar1 = (this->StreamedExtensionData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FCustomizableObjectResourceData,int>
            ((FCustomizableObjectResourceData *)
             (this->AlwaysLoadedExtensionData).AllocatorInstance.Data,
             (this->AlwaysLoadedExtensionData).ArrayNum);
  pFVar1 = (this->AlwaysLoadedExtensionData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FCustomizableObjectStreamedResourceData,int>
            ((FCustomizableObjectStreamedResourceData *)
             (this->StreamedResourceData).AllocatorInstance.Data,
             (this->StreamedResourceData).ArrayNum);
  pFVar1 = (this->StreamedResourceData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FCustomizableObjectClothingAssetData,int>
            ((FCustomizableObjectClothingAssetData *)
             (this->ClothingAssetsData).AllocatorInstance.Data,(this->ClothingAssetsData).ArrayNum);
  pFVar1 = (this->ClothingAssetsData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FCustomizableObjectClothConfigData,int>
            ((FCustomizableObjectClothConfigData *)
             (this->ClothSharedConfigsData).AllocatorInstance.Data,
             (this->ClothSharedConfigsData).ArrayNum);
  pFVar1 = (this->ClothSharedConfigsData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->StateUIDataMap).field_0x48 = 0;
  pvVar2 = *(void **)&(this->StateUIDataMap).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FMutableStateData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FMutableStateData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FMutableStateData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->StateUIDataMap);
  *(undefined4 *)&(this->ParameterUIDataMap).field_0x48 = 0;
  pvVar2 = *(void **)&(this->ParameterUIDataMap).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FMutableParameterData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FMutableParameterData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FMutableParameterData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ParameterUIDataMap);
  *(undefined4 *)&(this->SurfaceMetadata).field_0x48 = 0;
  pvVar2 = *(void **)&(this->SurfaceMetadata).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,FMutableSurfaceMetadata>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,FMutableSurfaceMetadata>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,FMutableSurfaceMetadata>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->SurfaceMetadata);
  *(undefined4 *)&(this->MeshMetadata).field_0x48 = 0;
  pvVar2 = *(void **)&(this->MeshMetadata).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,FMutableMeshMetadata>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,FMutableMeshMetadata>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,FMutableMeshMetadata>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->MeshMetadata);
  DestructItems<FMutableModelImageProperties,int>
            ((FMutableModelImageProperties *)(this->ImageProperties).AllocatorInstance.Data,
             (this->ImageProperties).ArrayNum);
  pFVar1 = (this->ImageProperties).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SkinWeightProfilesInfo).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->Sockets).field_0x48 = 0;
  pvVar2 = *(void **)&(this->Sockets).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,FMutableRefSocket>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,FMutableRefSocket>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,FMutableRefSocket>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->Sockets);
  *(undefined4 *)&(this->BoneNamesMap).field_0x48 = 0;
  pvVar2 = *(void **)&(this->BoneNamesMap).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->BoneNamesMap);
  pFVar1 = (this->MaterialSlotNames).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FAnimBpOverridePhysicsAssetsInfo,int>
            ((FAnimBpOverridePhysicsAssetsInfo *)
             (this->AnimBpOverridePhysiscAssetsInfo).AllocatorInstance.Data,
             (this->AnimBpOverridePhysiscAssetsInfo).ArrayNum);
  pFVar1 = (this->AnimBpOverridePhysiscAssetsInfo).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TSoftClassPtr<UAnimInstance>,int>
            ((TSoftClassPtr<UAnimInstance> *)(this->AnimBPs).AllocatorInstance.Data,
             (this->AnimBPs).ArrayNum);
  pFVar1 = (this->AnimBPs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TSoftObjectPtr<UPhysicsAsset>,int>
            ((TSoftObjectPtr<UPhysicsAsset> *)(this->PhysicsAssets).AllocatorInstance.Data,
             (this->PhysicsAssets).ArrayNum);
  pFVar1 = (this->PhysicsAssets).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TSoftObjectPtr<UStreamableRenderAsset>,int>
            ((TSoftObjectPtr<UStreamableRenderAsset> *)
             (this->PassThroughMeshes).AllocatorInstance.Data,(this->PassThroughMeshes).ArrayNum);
  pFVar1 = (this->PassThroughMeshes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TSoftObjectPtr<UTexture>,int>
            ((TSoftObjectPtr<UTexture> *)(this->PassThroughTextures).AllocatorInstance.Data,
             (this->PassThroughTextures).ArrayNum);
  pFVar1 = (this->PassThroughTextures).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TSoftObjectPtr<UMaterialInterface>,int>
            ((TSoftObjectPtr<UMaterialInterface> *)(this->Materials).AllocatorInstance.Data,
             (this->Materials).ArrayNum);
  pFVar1 = (this->Materials).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TSoftObjectPtr<USkeleton>,int>
            ((TSoftObjectPtr<USkeleton> *)(this->Skeletons).AllocatorInstance.Data,
             (this->Skeletons).ArrayNum);
  pFVar1 = (this->Skeletons).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FMutableRefSkeletalMeshData,int>
            ((FMutableRefSkeletalMeshData *)
             (this->ReferenceSkeletalMeshesData).AllocatorInstance.Data,
             (this->ReferenceSkeletalMeshesData).ArrayNum);
  pFVar1 = (this->ReferenceSkeletalMeshesData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14aba5760

UClass * __cdecl UModelResources::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UModelResources.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CustomizableObject",L"ModelResources",
               &Z_Registration_Info_UClass_UModelResources.InnerSingleton,
               StaticRegisterNativesUModelResources,0x5b8,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine"
               ,InternalConstructor<UModelResources>,InternalVTableHelperCtorCaller<UModelResources>
               ,local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UModelResources.InnerSingleton;
}

// StaticRegisterNativesUModelResources @ 14aba69e0

void __cdecl UModelResources::StaticRegisterNativesUModelResources(void)

{
  return;
}

