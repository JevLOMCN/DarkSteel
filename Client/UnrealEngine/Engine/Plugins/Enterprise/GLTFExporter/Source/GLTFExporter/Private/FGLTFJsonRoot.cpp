// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GLTFExporter
// Functions: 4

// FGLTFJsonRoot @ 14e5d1e00

FGLTFJsonRoot * __thiscall FGLTFJsonRoot::FGLTFJsonRoot(FGLTFJsonRoot *this)

{
  this->_padding_ = (longlong)&___7FGLTFJsonRoot__6B_;
  (this->Asset)._padding_ = (longlong)&___7FGLTFJsonAsset__6B_;
  ::FString::FString(&(this->Asset).Version,L"2.0");
  (this->Asset).Generator.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Asset).Generator.Data.ArrayNum = 0;
  (this->Asset).Generator.Data.ArrayMax = 0;
  (this->Asset).Copyright.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Asset).Copyright.Data.ArrayNum = 0;
  (this->Asset).Copyright.Data.ArrayMax = 0;
  *(undefined8 *)&(this->Extensions).Used.Elements = 0;
  *(undefined8 *)&(this->Extensions).Used.Elements.field_0x8 = 0;
  *(undefined8 *)&(this->Extensions).Used.Elements.field_0x20 = 0;
  *(undefined4 *)&(this->Extensions).Used.Elements.field_0x28 = 0;
  *(undefined4 *)&(this->Extensions).Used.Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->Extensions).Used.Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Extensions).Used.Elements.field_0x34 = 0;
  (this->Extensions).Used.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->Extensions).Used.HashSize = 0;
  *(undefined8 *)&(this->Extensions).Required.Elements = 0;
  *(undefined8 *)&(this->Extensions).Required.Elements.field_0x8 = 0;
  *(undefined8 *)&(this->Extensions).Required.Elements.field_0x20 = 0;
  *(undefined4 *)&(this->Extensions).Required.Elements.field_0x28 = 0;
  *(undefined4 *)&(this->Extensions).Required.Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->Extensions).Required.Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Extensions).Required.Elements.field_0x34 = 0;
  (this->Extensions).Required.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->Extensions).Required.HashSize = 0;
  (this->Accessors)._padding_ =
       (longlong)&___7__TGLTFJsonIndexedObjectArray_UFGLTFJsonAccessor__X__6B_;
  (this->Animations)._padding_ =
       (longlong)&___7__TGLTFJsonIndexedObjectArray_UFGLTFJsonAnimation__X__6B_;
  (this->Buffers)._padding_ = (longlong)&___7__TGLTFJsonIndexedObjectArray_UFGLTFJsonBuffer__X__6B_;
  (this->BufferViews)._padding_ =
       (longlong)&___7__TGLTFJsonIndexedObjectArray_UFGLTFJsonBufferView__X__6B_;
  (this->Cameras)._padding_ = (longlong)&___7__TGLTFJsonIndexedObjectArray_UFGLTFJsonCamera__X__6B_;
  (this->Materials)._padding_ =
       (longlong)&___7__TGLTFJsonIndexedObjectArray_UFGLTFJsonMaterial__X__6B_;
  (this->Meshes)._padding_ = (longlong)&___7__TGLTFJsonIndexedObjectArray_UFGLTFJsonMesh__X__6B_;
  (this->Nodes)._padding_ = (longlong)&___7__TGLTFJsonIndexedObjectArray_UFGLTFJsonNode__X__6B_;
  (this->Images)._padding_ = (longlong)&___7__TGLTFJsonIndexedObjectArray_UFGLTFJsonImage__X__6B_;
  (this->Samplers)._padding_ =
       (longlong)&___7__TGLTFJsonIndexedObjectArray_UFGLTFJsonSampler__X__6B_;
  (this->Scenes)._padding_ = (longlong)&___7__TGLTFJsonIndexedObjectArray_UFGLTFJsonScene__X__6B_;
  (this->Skins)._padding_ = (longlong)&___7__TGLTFJsonIndexedObjectArray_UFGLTFJsonSkin__X__6B_;
  this->DefaultScene = (FGLTFJsonScene *)0x0;
  (this->Accessors).Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Accessors).Array.ArrayNum = 0;
  (this->Accessors).Array.ArrayMax = 0;
  (this->Animations).Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Animations).Array.ArrayNum = 0;
  (this->Animations).Array.ArrayMax = 0;
  (this->Buffers).Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Buffers).Array.ArrayNum = 0;
  (this->Buffers).Array.ArrayMax = 0;
  (this->BufferViews).Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BufferViews).Array.ArrayNum = 0;
  (this->BufferViews).Array.ArrayMax = 0;
  (this->Cameras).Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Cameras).Array.ArrayNum = 0;
  (this->Cameras).Array.ArrayMax = 0;
  (this->Materials).Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Materials).Array.ArrayNum = 0;
  (this->Materials).Array.ArrayMax = 0;
  (this->Meshes).Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Meshes).Array.ArrayNum = 0;
  (this->Meshes).Array.ArrayMax = 0;
  (this->Nodes).Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Nodes).Array.ArrayNum = 0;
  (this->Nodes).Array.ArrayMax = 0;
  (this->Images).Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Images).Array.ArrayNum = 0;
  (this->Images).Array.ArrayMax = 0;
  (this->Samplers).Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Samplers).Array.ArrayNum = 0;
  (this->Samplers).Array.ArrayMax = 0;
  (this->Scenes).Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Scenes).Array.ArrayNum = 0;
  (this->Scenes).Array.ArrayMax = 0;
  (this->Skins).Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Skins).Array.ArrayNum = 0;
  (this->Skins).Array.ArrayMax = 0;
  (this->Textures)._padding_ =
       (longlong)&___7__TGLTFJsonIndexedObjectArray_UFGLTFJsonTexture__X__6B_;
  (this->Lights)._padding_ = (longlong)&___7__TGLTFJsonIndexedObjectArray_UFGLTFJsonLight__X__6B_;
  (this->LightMaps)._padding_ =
       (longlong)&___7__TGLTFJsonIndexedObjectArray_UFGLTFJsonLightMap__X__6B_;
  (this->LightIESs)._padding_ =
       (longlong)&___7__TGLTFJsonIndexedObjectArray_UFGLTFJsonLightIES__X__6B_;
  (this->LightIESInstances)._padding_ =
       (longlong)&___7__TGLTFJsonIndexedObjectArray_UFGLTFJsonLightIESInstance__X__6B_;
  (this->MaterialVariants)._padding_ =
       (longlong)&___7__TGLTFJsonIndexedObjectArray_UFGLTFJsonMaterialVariant__X__6B_;
  (this->Textures).Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Textures).Array.ArrayNum = 0;
  (this->Textures).Array.ArrayMax = 0;
  (this->Lights).Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Lights).Array.ArrayNum = 0;
  (this->Lights).Array.ArrayMax = 0;
  (this->LightMaps).Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LightMaps).Array.ArrayNum = 0;
  (this->LightMaps).Array.ArrayMax = 0;
  (this->LightIESs).Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LightIESs).Array.ArrayNum = 0;
  (this->LightIESs).Array.ArrayMax = 0;
  (this->LightIESInstances).Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LightIESInstances).Array.ArrayNum = 0;
  (this->LightIESInstances).Array.ArrayMax = 0;
  (this->MaterialVariants).Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MaterialVariants).Array.ArrayNum = 0;
  (this->MaterialVariants).Array.ArrayMax = 0;
  return this;
}

// ~FGLTFJsonRoot @ 14e5d7b00

void __thiscall FGLTFJsonRoot::~FGLTFJsonRoot(FGLTFJsonRoot *this)

{
  FScriptContainerElement *pFVar1;
  ForElementType<FSetElementId> FVar2;
  
  DestructItems<TUniquePtr<FGLTFJsonMaterialVariant,TDefaultDelete<FGLTFJsonMaterialVariant>_>,int>
            ((TUniquePtr<FGLTFJsonMaterialVariant,TDefaultDelete<FGLTFJsonMaterialVariant>_> *)
             (this->MaterialVariants).Array.AllocatorInstance.Data,
             (this->MaterialVariants).Array.ArrayNum);
  pFVar1 = (this->MaterialVariants).Array.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TUniquePtr<FGLTFJsonLightIESInstance,TDefaultDelete<FGLTFJsonLightIESInstance>_>,int>
            ((TUniquePtr<FGLTFJsonLightIESInstance,TDefaultDelete<FGLTFJsonLightIESInstance>_> *)
             (this->LightIESInstances).Array.AllocatorInstance.Data,
             (this->LightIESInstances).Array.ArrayNum);
  pFVar1 = (this->LightIESInstances).Array.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TUniquePtr<FGLTFJsonLightIES,TDefaultDelete<FGLTFJsonLightIES>_>,int>
            ((TUniquePtr<FGLTFJsonLightIES,TDefaultDelete<FGLTFJsonLightIES>_> *)
             (this->LightIESs).Array.AllocatorInstance.Data,(this->LightIESs).Array.ArrayNum);
  pFVar1 = (this->LightIESs).Array.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TUniquePtr<FGLTFJsonLightMap,TDefaultDelete<FGLTFJsonLightMap>_>,int>
            ((TUniquePtr<FGLTFJsonLightMap,TDefaultDelete<FGLTFJsonLightMap>_> *)
             (this->LightMaps).Array.AllocatorInstance.Data,(this->LightMaps).Array.ArrayNum);
  pFVar1 = (this->LightMaps).Array.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TUniquePtr<FGLTFJsonLight,TDefaultDelete<FGLTFJsonLight>_>,int>
            ((TUniquePtr<FGLTFJsonLight,TDefaultDelete<FGLTFJsonLight>_> *)
             (this->Lights).Array.AllocatorInstance.Data,(this->Lights).Array.ArrayNum);
  pFVar1 = (this->Lights).Array.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TUniquePtr<FGLTFJsonTexture,TDefaultDelete<FGLTFJsonTexture>_>,int>
            ((TUniquePtr<FGLTFJsonTexture,TDefaultDelete<FGLTFJsonTexture>_> *)
             (this->Textures).Array.AllocatorInstance.Data,(this->Textures).Array.ArrayNum);
  pFVar1 = (this->Textures).Array.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TUniquePtr<FGLTFJsonSkin,TDefaultDelete<FGLTFJsonSkin>_>,int>
            ((TUniquePtr<FGLTFJsonSkin,TDefaultDelete<FGLTFJsonSkin>_> *)
             (this->Skins).Array.AllocatorInstance.Data,(this->Skins).Array.ArrayNum);
  pFVar1 = (this->Skins).Array.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TUniquePtr<FGLTFJsonScene,TDefaultDelete<FGLTFJsonScene>_>,int>
            ((TUniquePtr<FGLTFJsonScene,TDefaultDelete<FGLTFJsonScene>_> *)
             (this->Scenes).Array.AllocatorInstance.Data,(this->Scenes).Array.ArrayNum);
  pFVar1 = (this->Scenes).Array.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TUniquePtr<FGLTFJsonSampler,TDefaultDelete<FGLTFJsonSampler>_>,int>
            ((TUniquePtr<FGLTFJsonSampler,TDefaultDelete<FGLTFJsonSampler>_> *)
             (this->Samplers).Array.AllocatorInstance.Data,(this->Samplers).Array.ArrayNum);
  pFVar1 = (this->Samplers).Array.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TUniquePtr<FGLTFJsonImage,TDefaultDelete<FGLTFJsonImage>_>,int>
            ((TUniquePtr<FGLTFJsonImage,TDefaultDelete<FGLTFJsonImage>_> *)
             (this->Images).Array.AllocatorInstance.Data,(this->Images).Array.ArrayNum);
  pFVar1 = (this->Images).Array.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TUniquePtr<FGLTFJsonNode,TDefaultDelete<FGLTFJsonNode>_>,int>
            ((TUniquePtr<FGLTFJsonNode,TDefaultDelete<FGLTFJsonNode>_> *)
             (this->Nodes).Array.AllocatorInstance.Data,(this->Nodes).Array.ArrayNum);
  pFVar1 = (this->Nodes).Array.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TUniquePtr<FGLTFJsonMesh,TDefaultDelete<FGLTFJsonMesh>_>,int>
            ((TUniquePtr<FGLTFJsonMesh,TDefaultDelete<FGLTFJsonMesh>_> *)
             (this->Meshes).Array.AllocatorInstance.Data,(this->Meshes).Array.ArrayNum);
  pFVar1 = (this->Meshes).Array.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TUniquePtr<FGLTFJsonMaterial,TDefaultDelete<FGLTFJsonMaterial>_>,int>
            ((TUniquePtr<FGLTFJsonMaterial,TDefaultDelete<FGLTFJsonMaterial>_> *)
             (this->Materials).Array.AllocatorInstance.Data,(this->Materials).Array.ArrayNum);
  pFVar1 = (this->Materials).Array.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TUniquePtr<FGLTFJsonCamera,TDefaultDelete<FGLTFJsonCamera>_>,int>
            ((TUniquePtr<FGLTFJsonCamera,TDefaultDelete<FGLTFJsonCamera>_> *)
             (this->Cameras).Array.AllocatorInstance.Data,(this->Cameras).Array.ArrayNum);
  pFVar1 = (this->Cameras).Array.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TUniquePtr<FGLTFJsonBufferView,TDefaultDelete<FGLTFJsonBufferView>_>,int>
            ((TUniquePtr<FGLTFJsonBufferView,TDefaultDelete<FGLTFJsonBufferView>_> *)
             (this->BufferViews).Array.AllocatorInstance.Data,(this->BufferViews).Array.ArrayNum);
  pFVar1 = (this->BufferViews).Array.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TUniquePtr<FGLTFJsonBuffer,TDefaultDelete<FGLTFJsonBuffer>_>,int>
            ((TUniquePtr<FGLTFJsonBuffer,TDefaultDelete<FGLTFJsonBuffer>_> *)
             (this->Buffers).Array.AllocatorInstance.Data,(this->Buffers).Array.ArrayNum);
  pFVar1 = (this->Buffers).Array.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TUniquePtr<FGLTFJsonAnimation,TDefaultDelete<FGLTFJsonAnimation>_>,int>
            ((TUniquePtr<FGLTFJsonAnimation,TDefaultDelete<FGLTFJsonAnimation>_> *)
             (this->Animations).Array.AllocatorInstance.Data,(this->Animations).Array.ArrayNum);
  pFVar1 = (this->Animations).Array.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TUniquePtr<FGLTFJsonAccessor,TDefaultDelete<FGLTFJsonAccessor>_>,int>
            ((TUniquePtr<FGLTFJsonAccessor,TDefaultDelete<FGLTFJsonAccessor>_> *)
             (this->Accessors).Array.AllocatorInstance.Data,(this->Accessors).Array.ArrayNum);
  pFVar1 = (this->Accessors).Array.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  (this->Extensions).Required.HashSize = 0;
  FVar2 = (this->Extensions).Required.Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TSparseArray<TSparseSetElement<enum_EGLTFJsonExtension>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<enum_EGLTFJsonExtension>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->Extensions).Required);
  (this->Extensions).Used.HashSize = 0;
  FVar2 = (this->Extensions).Used.Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TSparseArray<TSparseSetElement<enum_EGLTFJsonExtension>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<enum_EGLTFJsonExtension>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->Extensions);
  pFVar1 = (this->Asset).Copyright.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Asset).Generator.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Asset).Version.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// WriteJson @ 14e619ab0

void __thiscall
FGLTFJsonRoot::WriteJson(FGLTFJsonRoot *this,FArchive *param_1,bool param_2,float param_3)

{
  TGLTFJsonWriterImpl<char8_t,TGLTFCondensedJsonPrintPolicyUTF8> *pTVar1;
  TJsonWriter<char8_t,TGLTFPrettyJsonPrintPolicyUTF8> *pTVar2;
  TRawPtrProxy<TJsonWriter<char8_t,TGLTFPrettyJsonPrintPolicyUTF8>_> local_res8;
  TSharedRef<IGLTFJsonWriter,1> local_38 [2];
  
  if (param_2) {
    pTVar1 = ::operator_new(0x38);
    local_res8.Object = (TJsonWriter<char8_t,TGLTFPrettyJsonPrintPolicyUTF8> *)0x0;
    if (pTVar1 != (TGLTFJsonWriterImpl<char8_t,TGLTFCondensedJsonPrintPolicyUTF8> *)0x0) {
      *(undefined4 *)&pTVar1->_padding_ = 0;
      pTVar1->_padding_ = (longlong)&this->Extensions;
      pTVar1->_padding_ =
           (longlong)&___7__TGLTFJsonWriterImpl__QUTGLTFPrettyJsonPrintPolicyUTF8____6B_;
      (pTVar1->CurrentIdentifier).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pTVar1->CurrentIdentifier).Data.ArrayNum = 0;
      (pTVar1->CurrentIdentifier).Data.ArrayMax = 0;
      pTVar2 = ::operator_new(0x28);
      if (pTVar2 != (TJsonWriter<char8_t,TGLTFPrettyJsonPrintPolicyUTF8> *)0x0) {
        pTVar2->Stream = param_1;
        pTVar2->_padding_ = (longlong)&___7__TJsonWriter__QUTGLTFPrettyJsonPrintPolicyUTF8____6B_;
        (pTVar2->Stack).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pTVar2->Stack).ArrayNum = 0;
        (pTVar2->Stack).ArrayMax = 0;
        pTVar2->PreviousTokenWritten = None;
        pTVar2->IndentLevel = 0;
        local_res8.Object = pTVar2;
      }
      TSharedRef<TJsonWriter<char8_t,TGLTFPrettyJsonPrintPolicyUTF8>,1>::
      TSharedRef<TJsonWriter<char8_t,TGLTFPrettyJsonPrintPolicyUTF8>,1><TJsonWriter<char8_t,TGLTFPrettyJsonPrintPolicyUTF8>_>
                ((TSharedRef<TJsonWriter<char8_t,TGLTFPrettyJsonPrintPolicyUTF8>,1> *)
                 &pTVar1->JsonWriter,&local_res8);
      goto LAB_14e619b6b;
    }
  }
  else {
    pTVar1 = ::operator_new(0x38);
    if (pTVar1 != (TGLTFJsonWriterImpl<char8_t,TGLTFCondensedJsonPrintPolicyUTF8> *)0x0) {
      pTVar1 = TGLTFJsonWriterImpl<char8_t,TGLTFCondensedJsonPrintPolicyUTF8>::
               TGLTFJsonWriterImpl<char8_t,TGLTFCondensedJsonPrintPolicyUTF8>
                         (pTVar1,param_1,&this->Extensions);
      goto LAB_14e619b6b;
    }
  }
  pTVar1 = (TGLTFJsonWriterImpl<char8_t,TGLTFCondensedJsonPrintPolicyUTF8> *)0x0;
LAB_14e619b6b:
  local_res8.Object = (TJsonWriter<char8_t,TGLTFPrettyJsonPrintPolicyUTF8> *)pTVar1;
  TSharedRef<IGLTFJsonWriter,1>::TSharedRef<IGLTFJsonWriter,1><IGLTFJsonWriter>
            (local_38,(TRawPtrProxy<IGLTFJsonWriter> *)&local_res8);
  (local_38[0].Object)->DefaultTolerance = param_3;
  (**(code **)(this->_padding_ + 8))(this,local_38[0].Object);
  (**(code **)((local_38[0].Object)->_padding_ + 8))(local_38[0].Object);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38[0].SharedReferenceCount.ReferenceController);
  return;
}

// WriteObject @ 14e61da50

void __thiscall FGLTFJsonRoot::WriteObject(FGLTFJsonRoot *this,IGLTFJsonWriter *param_1)

{
  FGLTFJsonScene *pFVar1;
  bool local_res8 [8];
  EGLTFJsonExtension local_res10 [2];
  FString local_38;
  
  ::FString::FString(&local_38,L"asset");
  (**(code **)(param_1->_padding_ + 0x40))(param_1,&local_38);
  (**(code **)((this->Asset)._padding_ + 8))(&this->Asset,param_1);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  pFVar1 = this->DefaultScene;
  if (pFVar1 != (FGLTFJsonScene *)0x0) {
    ::FString::FString(&local_38,L"scene");
    (**(code **)(param_1->_padding_ + 0x40))(param_1,&local_38);
    (**(code **)(param_1->_padding_ + 0x30))(param_1,(int)pFVar1->_padding_);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if (0 < (this->Accessors).Array.ArrayNum) {
    ::FString::FString(&local_38,L"accessors");
    (**(code **)(param_1->_padding_ + 0x40))(param_1,&local_38);
    (**(code **)((this->Accessors)._padding_ + 8))(&this->Accessors,param_1);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if (0 < (this->Animations).Array.ArrayNum) {
    ::FString::FString(&local_38,L"animations");
    (**(code **)(param_1->_padding_ + 0x40))(param_1,&local_38);
    (**(code **)((this->Animations)._padding_ + 8))(&this->Animations,param_1);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if (0 < (this->Buffers).Array.ArrayNum) {
    ::FString::FString(&local_38,L"buffers");
    (**(code **)(param_1->_padding_ + 0x40))(param_1,&local_38);
    (**(code **)((this->Buffers)._padding_ + 8))(&this->Buffers,param_1);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if (0 < (this->BufferViews).Array.ArrayNum) {
    ::FString::FString(&local_38,L"bufferViews");
    (**(code **)(param_1->_padding_ + 0x40))(param_1,&local_38);
    (**(code **)((this->BufferViews)._padding_ + 8))(&this->BufferViews,param_1);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if (0 < (this->Cameras).Array.ArrayNum) {
    ::FString::FString(&local_38,L"cameras");
    (**(code **)(param_1->_padding_ + 0x40))(param_1,&local_38);
    (**(code **)((this->Cameras)._padding_ + 8))(&this->Cameras,param_1);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if (0 < (this->Images).Array.ArrayNum) {
    ::FString::FString(&local_38,L"images");
    (**(code **)(param_1->_padding_ + 0x40))(param_1,&local_38);
    (**(code **)((this->Images)._padding_ + 8))(&this->Images,param_1);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if (0 < (this->Materials).Array.ArrayNum) {
    ::FString::FString(&local_38,L"materials");
    (**(code **)(param_1->_padding_ + 0x40))(param_1,&local_38);
    (**(code **)((this->Materials)._padding_ + 8))(&this->Materials,param_1);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if (0 < (this->Meshes).Array.ArrayNum) {
    ::FString::FString(&local_38,L"meshes");
    (**(code **)(param_1->_padding_ + 0x40))(param_1,&local_38);
    (**(code **)((this->Meshes)._padding_ + 8))(&this->Meshes,param_1);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if (0 < (this->Nodes).Array.ArrayNum) {
    ::FString::FString(&local_38,L"nodes");
    (**(code **)(param_1->_padding_ + 0x40))(param_1,&local_38);
    (**(code **)((this->Nodes)._padding_ + 8))(&this->Nodes,param_1);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if (0 < (this->Samplers).Array.ArrayNum) {
    ::FString::FString(&local_38,L"samplers");
    (**(code **)(param_1->_padding_ + 0x40))(param_1,&local_38);
    (**(code **)((this->Samplers)._padding_ + 8))(&this->Samplers,param_1);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if (0 < (this->Scenes).Array.ArrayNum) {
    ::FString::FString(&local_38,L"scenes");
    (**(code **)(param_1->_padding_ + 0x40))(param_1,&local_38);
    (**(code **)((this->Scenes)._padding_ + 8))(&this->Scenes,param_1);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if (0 < (this->Skins).Array.ArrayNum) {
    ::FString::FString(&local_38,L"skins");
    (**(code **)(param_1->_padding_ + 0x40))(param_1,&local_38);
    (**(code **)((this->Skins)._padding_ + 8))(&this->Skins,param_1);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if (0 < (this->Textures).Array.ArrayNum) {
    ::FString::FString(&local_38,L"textures");
    (**(code **)(param_1->_padding_ + 0x40))(param_1,&local_38);
    (**(code **)((this->Textures)._padding_ + 8))(&this->Textures,param_1);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if ((((0 < (this->MaterialVariants).Array.ArrayNum) || (0 < (this->Lights).Array.ArrayNum)) ||
      (0 < (this->LightMaps).Array.ArrayNum)) || (0 < (this->LightIESs).Array.ArrayNum)) {
    ::FString::FString(&local_38,L"extensions");
    (**(code **)(param_1->_padding_ + 0x40))(param_1,&local_38);
    (**(code **)(param_1->_padding_ + 0x48))(param_1);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (0 < (this->MaterialVariants).Array.ArrayNum) {
      local_res8[0] = true;
      local_res8[1] = false;
      local_res8[2] = false;
      local_res8[3] = false;
      TSet<enum_EGLTFJsonExtension,DefaultKeyFuncs<enum_EGLTFJsonExtension,0>,FDefaultSetAllocator>
      ::Emplace<enum_EGLTFJsonExtension_const_&>(param_1->Extensions,local_res10,local_res8);
      ::FString::FString(&local_38,L"KHR_materials_variants");
      (**(code **)(param_1->_padding_ + 0x40))(param_1,&local_38);
      (**(code **)(param_1->_padding_ + 0x48))(param_1);
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      ::FString::FString(&local_38,L"variants");
      (**(code **)(param_1->_padding_ + 0x40))(param_1,&local_38);
      (**(code **)((this->MaterialVariants)._padding_ + 8))(&this->MaterialVariants,param_1);
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      (**(code **)(param_1->_padding_ + 0x50))(param_1);
    }
    if (0 < (this->Lights).Array.ArrayNum) {
      local_res8[0] = false;
      local_res8[1] = false;
      local_res8[2] = false;
      local_res8[3] = false;
      TSet<enum_EGLTFJsonExtension,DefaultKeyFuncs<enum_EGLTFJsonExtension,0>,FDefaultSetAllocator>
      ::Emplace<enum_EGLTFJsonExtension_const_&>(param_1->Extensions,local_res10,local_res8);
      ::FString::FString(&local_38,L"KHR_lights_punctual");
      (**(code **)(param_1->_padding_ + 0x40))(param_1,&local_38);
      (**(code **)(param_1->_padding_ + 0x48))(param_1);
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      ::FString::FString(&local_38,L"lights");
      (**(code **)(param_1->_padding_ + 0x40))(param_1,&local_38);
      (**(code **)((this->Lights)._padding_ + 8))(&this->Lights,param_1);
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      (**(code **)(param_1->_padding_ + 0x50))(param_1);
    }
    if (0 < (this->LightMaps).Array.ArrayNum) {
      local_res8[0] = true;
      local_res8[1] = false;
      local_res8[2] = false;
      local_res8[3] = false;
      TSet<enum_EGLTFJsonExtension,DefaultKeyFuncs<enum_EGLTFJsonExtension,0>,FDefaultSetAllocator>
      ::Emplace<enum_EGLTFJsonExtension_const_&>(param_1->Extensions,local_res10,local_res8);
      ::FString::FString(&local_38,L"EPIC_lightmap_textures");
      (**(code **)(param_1->_padding_ + 0x40))(param_1,&local_38);
      (**(code **)(param_1->_padding_ + 0x48))(param_1);
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      ::FString::FString(&local_38,L"lightmaps");
      (**(code **)(param_1->_padding_ + 0x40))(param_1,&local_38);
      (**(code **)((this->LightMaps)._padding_ + 8))(&this->LightMaps,param_1);
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      (**(code **)(param_1->_padding_ + 0x50))(param_1);
    }
    if (0 < (this->LightIESs).Array.ArrayNum) {
      local_res8[0] = true;
      local_res8[1] = false;
      local_res8[2] = false;
      local_res8[3] = false;
      TSet<enum_EGLTFJsonExtension,DefaultKeyFuncs<enum_EGLTFJsonExtension,0>,FDefaultSetAllocator>
      ::Emplace<enum_EGLTFJsonExtension_const_&>(param_1->Extensions,local_res10,local_res8);
      ::FString::FString(&local_38,L"EXT_lights_ies");
      (**(code **)(param_1->_padding_ + 0x40))(param_1,&local_38);
      (**(code **)(param_1->_padding_ + 0x48))(param_1);
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      ::FString::FString(&local_38,L"lights");
      (**(code **)(param_1->_padding_ + 0x40))(param_1,&local_38);
      (**(code **)((this->LightIESs)._padding_ + 8))(&this->LightIESs,param_1);
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      (**(code **)(param_1->_padding_ + 0x50))(param_1);
    }
    (**(code **)(param_1->_padding_ + 0x50))(param_1);
  }
  if (0 < *(int *)&(this->Extensions).Used.Elements.field_0x8 -
          *(int *)&(this->Extensions).Used.Elements.field_0x34) {
    ::FString::FString(&local_38,L"extensionsUsed");
    (**(code **)(param_1->_padding_ + 0x40))(param_1,&local_38);
    IGLTFJsonWriter::Write<enum_EGLTFJsonExtension>(param_1,&(this->Extensions).Used);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if (0 < *(int *)&(this->Extensions).Required.Elements.field_0x8 -
          *(int *)&(this->Extensions).Required.Elements.field_0x34) {
    ::FString::FString(&local_38,L"extensionsRequired");
    (**(code **)(param_1->_padding_ + 0x40))(param_1,&local_38);
    IGLTFJsonWriter::Write<enum_EGLTFJsonExtension>(param_1,&(this->Extensions).Required);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  return;
}

