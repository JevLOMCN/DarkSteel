// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeImport
// Functions: 2

// FAsset @ 14e6b5320

FAsset * __thiscall GLTF::FAsset::FAsset(FAsset *this)

{
  (this->Name).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Name).Data.ArrayNum = 0;
  (this->Name).Data.ArrayMax = 0;
  (this->Buffers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Buffers).ArrayNum = 0;
  (this->Buffers).ArrayMax = 0;
  (this->BufferViews).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BufferViews).ArrayNum = 0;
  (this->BufferViews).ArrayMax = 0;
  (this->Accessors).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Accessors).ArrayNum = 0;
  (this->Accessors).ArrayMax = 0;
  (this->Meshes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Meshes).ArrayNum = 0;
  (this->Meshes).ArrayMax = 0;
  (this->Scenes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Scenes).ArrayNum = 0;
  (this->Scenes).ArrayMax = 0;
  (this->Nodes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Nodes).ArrayNum = 0;
  (this->Nodes).ArrayMax = 0;
  (this->Cameras).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Cameras).ArrayNum = 0;
  (this->Cameras).ArrayMax = 0;
  (this->Lights).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Lights).ArrayNum = 0;
  (this->Lights).ArrayMax = 0;
  (this->LightsIES).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LightsIES).ArrayNum = 0;
  (this->LightsIES).ArrayMax = 0;
  (this->Skins).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Skins).ArrayNum = 0;
  (this->Skins).ArrayMax = 0;
  (this->Animations).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Animations).ArrayNum = 0;
  (this->Animations).ArrayMax = 0;
  (this->Images).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Images).ArrayNum = 0;
  (this->Images).ArrayMax = 0;
  (this->Samplers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Samplers).ArrayNum = 0;
  (this->Samplers).ArrayMax = 0;
  (this->Textures).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Textures).ArrayNum = 0;
  (this->Textures).ArrayMax = 0;
  (this->Materials).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Materials).ArrayNum = 0;
  (this->Materials).ArrayMax = 0;
  (this->Variants).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Variants).ArrayNum = 0;
  (this->Variants).ArrayMax = 0;
  (this->ExtensionsUsed).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ExtensionsUsed).ArrayNum = 0;
  (this->ExtensionsUsed).ArrayMax = 0;
  (this->ExtensionsRequired).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ExtensionsRequired).ArrayNum = 0;
  (this->ExtensionsRequired).ArrayMax = 0;
  *(undefined8 *)&(this->ProcessedExtensions).Elements = 0;
  *(undefined8 *)&(this->ProcessedExtensions).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->ProcessedExtensions).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->ProcessedExtensions).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->ProcessedExtensions).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->ProcessedExtensions).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->ProcessedExtensions).Elements.field_0x30 = 0xffffffff;
  (this->ProcessedExtensions).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->ProcessedExtensions).HashSize = 0;
  (this->Metadata).GeneratorName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Metadata).GeneratorName.Data.ArrayNum = 0;
  (this->Metadata).GeneratorName.Data.ArrayMax = 0;
  (this->Metadata).Extras.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Metadata).Extras.ArrayNum = 0;
  (this->Metadata).Extras.ArrayMax = 0;
  this->HasAbnormalInverseBindMatrices = false;
  (this->BinData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BinData).ArrayNum = 0;
  (this->BinData).ArrayMax = 0;
  (this->ExtraBinData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ExtraBinData).ArrayNum = 0;
  (this->ExtraBinData).ArrayMax = 0;
  (this->UncompressedDracoBinData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->UncompressedDracoBinData).ArrayNum = 0;
  (this->UncompressedDracoBinData).ArrayMax = 0;
  return this;
}

// ~FAsset @ 14e6b9670

void __thiscall GLTF::FAsset::~FAsset(FAsset *this)

{
  FScriptContainerElement *pFVar1;
  ForElementType<FSetElementId> FVar2;
  
  DestructItems<TArray<unsigned_char,TSizedDefaultAllocator<64>_>,int>
            ((TArray<unsigned_char,TSizedDefaultAllocator<64>_> *)
             (this->UncompressedDracoBinData).AllocatorInstance.Data,
             (this->UncompressedDracoBinData).ArrayNum);
  pFVar1 = (this->UncompressedDracoBinData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ExtraBinData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->BinData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<GLTF::FMetadata::FExtraData,int>
            ((FExtraData *)(this->Metadata).Extras.AllocatorInstance.Data,
             (this->Metadata).Extras.ArrayNum);
  pFVar1 = (this->Metadata).Extras.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Metadata).GeneratorName.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  (this->ProcessedExtensions).HashSize = 0;
  FVar2 = (this->ProcessedExtensions).Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TSparseArray<TSparseSetElement<enum_GLTF::EExtension>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<enum_GLTF::EExtension>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->ProcessedExtensions);
  DestructItems<FString,int>
            ((FString *)(this->ExtensionsRequired).AllocatorInstance.Data,
             (this->ExtensionsRequired).ArrayNum);
  pFVar1 = (this->ExtensionsRequired).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FString,int>
            ((FString *)(this->ExtensionsUsed).AllocatorInstance.Data,
             (this->ExtensionsUsed).ArrayNum);
  pFVar1 = (this->ExtensionsUsed).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FString,int>
            ((FString *)(this->Variants).AllocatorInstance.Data,(this->Variants).ArrayNum);
  pFVar1 = (this->Variants).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<GLTF::FMaterial,int>
            ((FMaterial *)(this->Materials).AllocatorInstance.Data,(this->Materials).ArrayNum);
  pFVar1 = (this->Materials).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<GLTF::FTexture,int>
            ((FTexture *)(this->Textures).AllocatorInstance.Data,(this->Textures).ArrayNum);
  pFVar1 = (this->Textures).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Samplers).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<GLTF::FImage,int>
            ((FImage *)(this->Images).AllocatorInstance.Data,(this->Images).ArrayNum);
  pFVar1 = (this->Images).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<GLTF::FAnimation,int>
            ((FAnimation *)(this->Animations).AllocatorInstance.Data,(this->Animations).ArrayNum);
  pFVar1 = (this->Animations).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<GLTF::FSkinInfo,int>
            ((FSkinInfo *)(this->Skins).AllocatorInstance.Data,(this->Skins).ArrayNum);
  pFVar1 = (this->Skins).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<GLTF::FLightIES,int>
            ((FLightIES *)(this->LightsIES).AllocatorInstance.Data,(this->LightsIES).ArrayNum);
  pFVar1 = (this->LightsIES).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<GLTF::FLight,int>
            ((FLight *)(this->Lights).AllocatorInstance.Data,(this->Lights).ArrayNum);
  pFVar1 = (this->Lights).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<GLTF::FCamera,int>
            ((FCamera *)(this->Cameras).AllocatorInstance.Data,(this->Cameras).ArrayNum);
  pFVar1 = (this->Cameras).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<GLTF::FNode,int>
            ((FNode *)(this->Nodes).AllocatorInstance.Data,(this->Nodes).ArrayNum);
  pFVar1 = (this->Nodes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<GLTF::FScene,int>
            ((FScene *)(this->Scenes).AllocatorInstance.Data,(this->Scenes).ArrayNum);
  pFVar1 = (this->Scenes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<GLTF::FMesh,int>
            ((FMesh *)(this->Meshes).AllocatorInstance.Data,(this->Meshes).ArrayNum);
  pFVar1 = (this->Meshes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Accessors).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->BufferViews).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Buffers).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Name).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

