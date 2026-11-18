// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GLTFExporter
// Functions: 69

// FGLTFConvertBuilder @ 14e5d0190

FGLTFConvertBuilder * __thiscall
FGLTFConvertBuilder::FGLTFConvertBuilder
          (FGLTFConvertBuilder *this,FString *param_1,UGLTFExportOptions *param_2,
          TSet<AActor_*,DefaultKeyFuncs<AActor_*,0>,FDefaultSetAllocator> *param_3)

{
  FGLTFMaterialConverter *pFVar1;
  FGLTFSplineMeshConverter *this_00;
  FGLTFMaterialConverter *pFVar2;
  FGLTFStaticMeshConverter *this_01;
  FGLTFSkeletalMeshConverter *this_02;
  FGLTFLightMapConverter *this_03;
  FGLTFMaterialConverter *pFVar3;
  
  FGLTFAnalyticsBuilder::FGLTFAnalyticsBuilder((FGLTFAnalyticsBuilder *)this,param_1,param_2);
  pFVar3 = (FGLTFMaterialConverter *)0x0;
  *(undefined8 *)&(this->SelectedActors).Elements = 0;
  *(undefined8 *)&(this->SelectedActors).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->SelectedActors).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->SelectedActors).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->SelectedActors).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->SelectedActors).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SelectedActors).Elements.field_0x34 = 0;
  (this->SelectedActors).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->SelectedActors).HashSize = 0;
  TSet<AActor_*,DefaultKeyFuncs<AActor_*,0>,FDefaultSetAllocator>::operator=
            (&this->SelectedActors,param_3);
  pFVar1 = ::operator_new(0x60);
  pFVar2 = pFVar3;
  if (pFVar1 != (FGLTFMaterialConverter *)0x0) {
    pFVar1->_padding_ = (longlong)this;
    pFVar1->_padding_ = 0;
    pFVar1->_padding_ = 0;
    pFVar1->_padding_ = 0;
    *(undefined4 *)&pFVar1->_padding_ = 0;
    *(undefined4 *)((longlong)&pFVar1->_padding_ + 4) = 0x80;
    *(undefined4 *)&pFVar1->_padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&pFVar1->_padding_ + 4) = 0;
    pFVar1->_padding_ = 0;
    *(undefined4 *)&pFVar1->_padding_ = 0;
    pFVar1->_padding_ = (longlong)&___7FGLTFPositionBufferConverter__6B_;
    pFVar2 = pFVar1;
  }
  (this->PositionBufferConverter).Ptr =
       (TGLTFConverter<FGLTFJsonAccessor_*,FGLTFMeshSection_const_*,FPositionVertexBuffer_const_*> *
       )pFVar2;
  pFVar1 = ::operator_new(0x60);
  pFVar2 = pFVar3;
  if (pFVar1 != (FGLTFMaterialConverter *)0x0) {
    pFVar1->_padding_ = (longlong)this;
    pFVar1->_padding_ = 0;
    pFVar1->_padding_ = 0;
    pFVar1->_padding_ = 0;
    *(undefined4 *)&pFVar1->_padding_ = 0;
    *(undefined4 *)((longlong)&pFVar1->_padding_ + 4) = 0x80;
    *(undefined4 *)&pFVar1->_padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&pFVar1->_padding_ + 4) = 0;
    pFVar1->_padding_ = 0;
    *(undefined4 *)&pFVar1->_padding_ = 0;
    pFVar1->_padding_ = (longlong)&___7FGLTFPositionDeltaBufferConverter__6B_;
    pFVar2 = pFVar1;
  }
  (this->PositionDeltaBufferConverter).Ptr =
       (TGLTFConverter<FGLTFJsonAccessor_*,FGLTFMeshSection_const_*,TMap<unsigned_int,UE::Math::TVector<float>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Math::TVector<float>,0>_>_const_*>
        *)pFVar2;
  pFVar1 = ::operator_new(0x60);
  pFVar2 = pFVar3;
  if (pFVar1 != (FGLTFMaterialConverter *)0x0) {
    pFVar1->_padding_ = (longlong)this;
    pFVar1->_padding_ = 0;
    pFVar1->_padding_ = 0;
    pFVar1->_padding_ = 0;
    *(undefined4 *)&pFVar1->_padding_ = 0;
    *(undefined4 *)((longlong)&pFVar1->_padding_ + 4) = 0x80;
    *(undefined4 *)&pFVar1->_padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&pFVar1->_padding_ + 4) = 0;
    pFVar1->_padding_ = 0;
    *(undefined4 *)&pFVar1->_padding_ = 0;
    pFVar1->_padding_ = (longlong)&___7FGLTFColorBufferConverter__6B_;
    pFVar2 = pFVar1;
  }
  (this->ColorBufferConverter).Ptr =
       (TGLTFConverter<FGLTFJsonAccessor_*,FGLTFMeshSection_const_*,FColorVertexBuffer_const_*> *)
       pFVar2;
  pFVar1 = ::operator_new(0x60);
  pFVar2 = pFVar3;
  if (pFVar1 != (FGLTFMaterialConverter *)0x0) {
    pFVar1->_padding_ = (longlong)this;
    pFVar1->_padding_ = 0;
    pFVar1->_padding_ = 0;
    pFVar1->_padding_ = 0;
    *(undefined4 *)&pFVar1->_padding_ = 0;
    *(undefined4 *)((longlong)&pFVar1->_padding_ + 4) = 0x80;
    *(undefined4 *)&pFVar1->_padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&pFVar1->_padding_ + 4) = 0;
    pFVar1->_padding_ = 0;
    *(undefined4 *)&pFVar1->_padding_ = 0;
    pFVar1->_padding_ = (longlong)&___7FGLTFNormalBufferConverter__6B_;
    pFVar2 = pFVar1;
  }
  (this->NormalBufferConverter).Ptr =
       (TGLTFConverter<FGLTFJsonAccessor_*,FGLTFMeshSection_const_*,FStaticMeshVertexBuffer_const_*>
        *)pFVar2;
  pFVar1 = ::operator_new(0x60);
  pFVar2 = pFVar3;
  if (pFVar1 != (FGLTFMaterialConverter *)0x0) {
    pFVar1->_padding_ = (longlong)this;
    pFVar1->_padding_ = 0;
    pFVar1->_padding_ = 0;
    pFVar1->_padding_ = 0;
    *(undefined4 *)&pFVar1->_padding_ = 0;
    *(undefined4 *)((longlong)&pFVar1->_padding_ + 4) = 0x80;
    *(undefined4 *)&pFVar1->_padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&pFVar1->_padding_ + 4) = 0;
    pFVar1->_padding_ = 0;
    *(undefined4 *)&pFVar1->_padding_ = 0;
    pFVar1->_padding_ = (longlong)&___7FGLTFNormalDeltaBufferConverter__6B_;
    pFVar2 = pFVar1;
  }
  (this->NormalDeltaBufferConverter).Ptr =
       (TGLTFConverter<FGLTFJsonAccessor_*,FGLTFMeshSection_const_*,TMap<unsigned_int,UE::Math::TVector<float>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Math::TVector<float>,0>_>_const_*,bool>
        *)pFVar2;
  pFVar1 = ::operator_new(0x60);
  pFVar2 = pFVar3;
  if (pFVar1 != (FGLTFMaterialConverter *)0x0) {
    pFVar1->_padding_ = (longlong)this;
    pFVar1->_padding_ = 0;
    pFVar1->_padding_ = 0;
    pFVar1->_padding_ = 0;
    *(undefined4 *)&pFVar1->_padding_ = 0;
    *(undefined4 *)((longlong)&pFVar1->_padding_ + 4) = 0x80;
    *(undefined4 *)&pFVar1->_padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&pFVar1->_padding_ + 4) = 0;
    pFVar1->_padding_ = 0;
    *(undefined4 *)&pFVar1->_padding_ = 0;
    pFVar1->_padding_ = (longlong)&___7FGLTFTangentBufferConverter__6B_;
    pFVar2 = pFVar1;
  }
  (this->TangentBufferConverter).Ptr =
       (TGLTFConverter<FGLTFJsonAccessor_*,FGLTFMeshSection_const_*,FStaticMeshVertexBuffer_const_*>
        *)pFVar2;
  pFVar1 = ::operator_new(0x60);
  pFVar2 = pFVar3;
  if (pFVar1 != (FGLTFMaterialConverter *)0x0) {
    pFVar1->_padding_ = (longlong)this;
    pFVar1->_padding_ = 0;
    pFVar1->_padding_ = 0;
    pFVar1->_padding_ = 0;
    *(undefined4 *)&pFVar1->_padding_ = 0;
    *(undefined4 *)((longlong)&pFVar1->_padding_ + 4) = 0x80;
    *(undefined4 *)&pFVar1->_padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&pFVar1->_padding_ + 4) = 0;
    pFVar1->_padding_ = 0;
    *(undefined4 *)&pFVar1->_padding_ = 0;
    pFVar1->_padding_ = (longlong)&___7FGLTFUVBufferConverter__6B_;
    pFVar2 = pFVar1;
  }
  (this->UVBufferConverter).Ptr =
       (TGLTFConverter<FGLTFJsonAccessor_*,FGLTFMeshSection_const_*,FStaticMeshVertexBuffer_const_*,unsigned_int>
        *)pFVar2;
  pFVar1 = ::operator_new(0x60);
  pFVar2 = pFVar3;
  if (pFVar1 != (FGLTFMaterialConverter *)0x0) {
    pFVar1->_padding_ = (longlong)this;
    pFVar1->_padding_ = 0;
    pFVar1->_padding_ = 0;
    pFVar1->_padding_ = 0;
    *(undefined4 *)&pFVar1->_padding_ = 0;
    *(undefined4 *)((longlong)&pFVar1->_padding_ + 4) = 0x80;
    *(undefined4 *)&pFVar1->_padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&pFVar1->_padding_ + 4) = 0;
    pFVar1->_padding_ = 0;
    *(undefined4 *)&pFVar1->_padding_ = 0;
    pFVar1->_padding_ = (longlong)&___7FGLTFBoneIndexBufferConverter__6B_;
    pFVar2 = pFVar1;
  }
  (this->BoneIndexBufferConverter).Ptr =
       (TGLTFConverter<FGLTFJsonAccessor_*,FGLTFMeshSection_const_*,FSkinWeightVertexBuffer_const_*,unsigned_int>
        *)pFVar2;
  pFVar1 = ::operator_new(0x60);
  pFVar2 = pFVar3;
  if (pFVar1 != (FGLTFMaterialConverter *)0x0) {
    pFVar1->_padding_ = (longlong)this;
    pFVar1->_padding_ = 0;
    pFVar1->_padding_ = 0;
    pFVar1->_padding_ = 0;
    *(undefined4 *)&pFVar1->_padding_ = 0;
    *(undefined4 *)((longlong)&pFVar1->_padding_ + 4) = 0x80;
    *(undefined4 *)&pFVar1->_padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&pFVar1->_padding_ + 4) = 0;
    pFVar1->_padding_ = 0;
    *(undefined4 *)&pFVar1->_padding_ = 0;
    pFVar1->_padding_ = (longlong)&___7FGLTFBoneWeightBufferConverter__6B_;
    pFVar2 = pFVar1;
  }
  (this->BoneWeightBufferConverter).Ptr =
       (TGLTFConverter<FGLTFJsonAccessor_*,FGLTFMeshSection_const_*,FSkinWeightVertexBuffer_const_*,unsigned_int>
        *)pFVar2;
  pFVar1 = ::operator_new(0x60);
  pFVar2 = pFVar3;
  if (pFVar1 != (FGLTFMaterialConverter *)0x0) {
    pFVar1->_padding_ = (longlong)this;
    pFVar1->_padding_ = 0;
    pFVar1->_padding_ = 0;
    pFVar1->_padding_ = 0;
    *(undefined4 *)&pFVar1->_padding_ = 0;
    *(undefined4 *)((longlong)&pFVar1->_padding_ + 4) = 0x80;
    *(undefined4 *)&pFVar1->_padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&pFVar1->_padding_ + 4) = 0;
    pFVar1->_padding_ = 0;
    *(undefined4 *)&pFVar1->_padding_ = 0;
    pFVar1->_padding_ = (longlong)&___7FGLTFIndexBufferConverter__6B_;
    pFVar2 = pFVar1;
  }
  (this->IndexBufferConverter).Ptr =
       (TGLTFConverter<FGLTFJsonAccessor_*,FGLTFMeshSection_const_*> *)pFVar2;
  pFVar1 = ::operator_new(0x60);
  pFVar2 = pFVar3;
  if (pFVar1 != (FGLTFMaterialConverter *)0x0) {
    pFVar1->_padding_ = (longlong)this;
    pFVar1->_padding_ = 0;
    pFVar1->_padding_ = 0;
    pFVar1->_padding_ = 0;
    *(undefined4 *)&pFVar1->_padding_ = 0;
    *(undefined4 *)((longlong)&pFVar1->_padding_ + 4) = 0x80;
    *(undefined4 *)&pFVar1->_padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&pFVar1->_padding_ + 4) = 0;
    pFVar1->_padding_ = 0;
    *(undefined4 *)&pFVar1->_padding_ = 0;
    pFVar1->_padding_ = (longlong)&___7FGLTFPositionBufferConverterRaw__6B_;
    pFVar2 = pFVar1;
  }
  (this->PositionBufferConverterRaw).Ptr =
       (TGLTFConverter<FGLTFJsonAccessor_*,FMeshAttributesArray<UE::Math::TVector<float>_>_> *)
       pFVar2;
  pFVar1 = ::operator_new(0x60);
  pFVar2 = pFVar3;
  if (pFVar1 != (FGLTFMaterialConverter *)0x0) {
    pFVar1->_padding_ = (longlong)this;
    pFVar1->_padding_ = 0;
    pFVar1->_padding_ = 0;
    pFVar1->_padding_ = 0;
    *(undefined4 *)&pFVar1->_padding_ = 0;
    *(undefined4 *)((longlong)&pFVar1->_padding_ + 4) = 0x80;
    *(undefined4 *)&pFVar1->_padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&pFVar1->_padding_ + 4) = 0;
    pFVar1->_padding_ = 0;
    *(undefined4 *)&pFVar1->_padding_ = 0;
    pFVar1->_padding_ = (longlong)&___7FGLTFColorBufferConverterRaw__6B_;
    pFVar2 = pFVar1;
  }
  (this->ColorBufferConverterRaw).Ptr =
       (TGLTFConverter<FGLTFJsonAccessor_*,FMeshAttributesArray<FColor>_> *)pFVar2;
  pFVar1 = ::operator_new(0x60);
  pFVar2 = pFVar3;
  if (pFVar1 != (FGLTFMaterialConverter *)0x0) {
    pFVar1->_padding_ = (longlong)this;
    pFVar1->_padding_ = 0;
    pFVar1->_padding_ = 0;
    pFVar1->_padding_ = 0;
    *(undefined4 *)&pFVar1->_padding_ = 0;
    *(undefined4 *)((longlong)&pFVar1->_padding_ + 4) = 0x80;
    *(undefined4 *)&pFVar1->_padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&pFVar1->_padding_ + 4) = 0;
    pFVar1->_padding_ = 0;
    *(undefined4 *)&pFVar1->_padding_ = 0;
    pFVar1->_padding_ = (longlong)&___7FGLTFNormalBufferConverterRaw__6B_;
    pFVar2 = pFVar1;
  }
  (this->NormalBufferConverterRaw).Ptr =
       (TGLTFConverter<FGLTFJsonAccessor_*,FMeshAttributesArray<UE::Math::TVector<float>_>,bool> *)
       pFVar2;
  pFVar1 = ::operator_new(0x60);
  pFVar2 = pFVar3;
  if (pFVar1 != (FGLTFMaterialConverter *)0x0) {
    pFVar1->_padding_ = (longlong)this;
    pFVar1->_padding_ = 0;
    pFVar1->_padding_ = 0;
    pFVar1->_padding_ = 0;
    *(undefined4 *)&pFVar1->_padding_ = 0;
    *(undefined4 *)((longlong)&pFVar1->_padding_ + 4) = 0x80;
    *(undefined4 *)&pFVar1->_padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&pFVar1->_padding_ + 4) = 0;
    pFVar1->_padding_ = 0;
    *(undefined4 *)&pFVar1->_padding_ = 0;
    pFVar1->_padding_ = (longlong)&___7FGLTFTangentBufferConverterRaw__6B_;
    pFVar2 = pFVar1;
  }
  (this->TangentBufferConverterRaw).Ptr =
       (TGLTFConverter<FGLTFJsonAccessor_*,FMeshAttributesArray<UE::Math::TVector4<float>_>_> *)
       pFVar2;
  pFVar1 = ::operator_new(0x60);
  pFVar2 = pFVar3;
  if (pFVar1 != (FGLTFMaterialConverter *)0x0) {
    pFVar1->_padding_ = (longlong)this;
    pFVar1->_padding_ = 0;
    pFVar1->_padding_ = 0;
    pFVar1->_padding_ = 0;
    *(undefined4 *)&pFVar1->_padding_ = 0;
    *(undefined4 *)((longlong)&pFVar1->_padding_ + 4) = 0x80;
    *(undefined4 *)&pFVar1->_padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&pFVar1->_padding_ + 4) = 0;
    pFVar1->_padding_ = 0;
    *(undefined4 *)&pFVar1->_padding_ = 0;
    pFVar1->_padding_ = (longlong)&___7FGLTFUVBufferConverterRaw__6B_;
    pFVar2 = pFVar1;
  }
  (this->UVBufferConverterRaw).Ptr =
       (TGLTFConverter<FGLTFJsonAccessor_*,FMeshAttributesArray<UE::Math::TVector2<float>_>_> *)
       pFVar2;
  pFVar1 = ::operator_new(0x60);
  pFVar2 = pFVar3;
  if (pFVar1 != (FGLTFMaterialConverter *)0x0) {
    pFVar1->_padding_ = (longlong)this;
    pFVar1->_padding_ = 0;
    pFVar1->_padding_ = 0;
    pFVar1->_padding_ = 0;
    *(undefined4 *)&pFVar1->_padding_ = 0;
    *(undefined4 *)((longlong)&pFVar1->_padding_ + 4) = 0x80;
    *(undefined4 *)&pFVar1->_padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&pFVar1->_padding_ + 4) = 0;
    pFVar1->_padding_ = 0;
    *(undefined4 *)&pFVar1->_padding_ = 0;
    pFVar1->_padding_ = (longlong)&___7FGLTFIndexBufferConverterRaw__6B_;
    pFVar2 = pFVar1;
  }
  (this->IndexBufferConverterRaw).Ptr =
       (TGLTFConverter<FGLTFJsonAccessor_*,FMeshAttributesArray<int>,FString> *)pFVar2;
  pFVar1 = ::operator_new(0x60);
  pFVar2 = pFVar3;
  if (pFVar1 != (FGLTFMaterialConverter *)0x0) {
    pFVar1->_padding_ = (longlong)this;
    pFVar1->_padding_ = 0;
    pFVar1->_padding_ = 0;
    pFVar1->_padding_ = 0;
    *(undefined4 *)&pFVar1->_padding_ = 0;
    *(undefined4 *)((longlong)&pFVar1->_padding_ + 4) = 0x80;
    *(undefined4 *)&pFVar1->_padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&pFVar1->_padding_ + 4) = 0;
    pFVar1->_padding_ = 0;
    *(undefined4 *)&pFVar1->_padding_ = 0;
    pFVar1->_padding_ = (longlong)&___7FGLTFBoneIndexBufferConverterRaw__6B_;
    pFVar2 = pFVar1;
  }
  (this->BoneIndexBufferConverterRaw).Ptr =
       (TGLTFConverter<FGLTFJsonAccessor_*,FMeshAttributesArray<UE::Math::TIntVector4<unsigned_short>_>_>
        *)pFVar2;
  pFVar1 = ::operator_new(0x60);
  pFVar2 = pFVar3;
  if (pFVar1 != (FGLTFMaterialConverter *)0x0) {
    pFVar1->_padding_ = (longlong)this;
    pFVar1->_padding_ = 0;
    pFVar1->_padding_ = 0;
    pFVar1->_padding_ = 0;
    *(undefined4 *)&pFVar1->_padding_ = 0;
    *(undefined4 *)((longlong)&pFVar1->_padding_ + 4) = 0x80;
    *(undefined4 *)&pFVar1->_padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&pFVar1->_padding_ + 4) = 0;
    pFVar1->_padding_ = 0;
    *(undefined4 *)&pFVar1->_padding_ = 0;
    pFVar1->_padding_ = (longlong)&___7FGLTFBoneWeightBufferConverterRaw__6B_;
    pFVar2 = pFVar1;
  }
  (this->BoneWeightBufferConverterRaw).Ptr =
       (TGLTFConverter<FGLTFJsonAccessor_*,FMeshAttributesArray<UE::Math::TIntVector4<unsigned_short>_>_>
        *)pFVar2;
  this_00 = ::operator_new(200);
  pFVar2 = pFVar3;
  if (this_00 != (FGLTFSplineMeshConverter *)0x0) {
    pFVar2 = (FGLTFMaterialConverter *)
             FGLTFSplineMeshConverter::FGLTFSplineMeshConverter(this_00,this);
  }
  (this->SplineMeshConverter).Ptr =
       (TGLTFConverter<FGLTFJsonMesh_*,UStaticMesh_const_*,USplineMeshComponent_const_*,FGLTFMaterialArray,int>
        *)pFVar2;
  pFVar1 = ::operator_new(0x60);
  pFVar2 = pFVar3;
  if (pFVar1 != (FGLTFMaterialConverter *)0x0) {
    pFVar1->_padding_ = (longlong)this;
    pFVar1->_padding_ = 0;
    pFVar1->_padding_ = 0;
    pFVar1->_padding_ = 0;
    *(undefined4 *)&pFVar1->_padding_ = 0;
    *(undefined4 *)((longlong)&pFVar1->_padding_ + 4) = 0x80;
    *(undefined4 *)&pFVar1->_padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&pFVar1->_padding_ + 4) = 0;
    pFVar1->_padding_ = 0;
    *(undefined4 *)&pFVar1->_padding_ = 0;
    pFVar1->_padding_ = (longlong)&___7FGLTFLandscapeMeshConverter__6B_;
    pFVar2 = pFVar1;
  }
  (this->LandscapeConverter).Ptr =
       (TGLTFConverter<FGLTFJsonMesh_*,ULandscapeComponent_const_*,UMaterialInterface_const_*> *)
       pFVar2;
  this_01 = ::operator_new(200);
  pFVar2 = pFVar3;
  if (this_01 != (FGLTFStaticMeshConverter *)0x0) {
    pFVar2 = (FGLTFMaterialConverter *)
             FGLTFStaticMeshConverter::FGLTFStaticMeshConverter(this_01,this);
  }
  (this->StaticMeshConverter).Ptr =
       (TGLTFConverter<FGLTFJsonMesh_*,UStaticMesh_const_*,UStaticMeshComponent_const_*,FGLTFMaterialArray,int>
        *)pFVar2;
  this_02 = ::operator_new(200);
  pFVar2 = pFVar3;
  if (this_02 != (FGLTFSkeletalMeshConverter *)0x0) {
    pFVar2 = (FGLTFMaterialConverter *)
             FGLTFSkeletalMeshConverter::FGLTFSkeletalMeshConverter(this_02,this);
  }
  (this->SkeletalMeshConverter).Ptr =
       (TGLTFConverter<FGLTFJsonMesh_*,USkeletalMesh_const_*,USkeletalMeshComponent_const_*,FGLTFMaterialArray,int>
        *)pFVar2;
  pFVar1 = ::operator_new(0x168);
  pFVar2 = pFVar3;
  if (pFVar1 != (FGLTFMaterialConverter *)0x0) {
    pFVar2 = FGLTFMaterialConverter::FGLTFMaterialConverter(pFVar1,this);
  }
  (this->MaterialConverter).Ptr =
       (TGLTFConverter<FGLTFJsonMaterial_*,UMaterialInterface_const_*,FGLTFMeshData_const_*,FMeshAttributesArray<int>_>
        *)pFVar2;
  pFVar1 = ::operator_new(0x70);
  pFVar2 = pFVar3;
  if (pFVar1 != (FGLTFMaterialConverter *)0x0) {
    pFVar1->_padding_ = (longlong)this;
    pFVar1->_padding_ = 0;
    pFVar1->_padding_ = 0;
    pFVar1->_padding_ = 0;
    *(undefined4 *)&pFVar1->_padding_ = 0;
    *(undefined4 *)((longlong)&pFVar1->_padding_ + 4) = 0x80;
    *(undefined4 *)&pFVar1->_padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&pFVar1->_padding_ + 4) = 0;
    pFVar1->_padding_ = 0;
    *(undefined4 *)&pFVar1->_padding_ = 0;
    pFVar1->_padding_ =
         (longlong)&___7__TGLTFMeshDataConverter_VUStaticMesh__VUStaticMeshComponent____6B_;
    ((TGLTFMeshSectionConverter<UStaticMesh> *)&pFVar1->UVOverlapChecker)->_padding_ = 0;
    ((TGLTFMeshSectionConverter<UStaticMesh> *)&pFVar1->UVOverlapChecker)->_padding_ = 0;
    pFVar2 = pFVar1;
  }
  (this->StaticMeshDataConverter).Ptr =
       (TGLTFConverter<FGLTFMeshData_const_*,UStaticMesh_const_*,UStaticMeshComponent_const_*,int> *
       )pFVar2;
  pFVar1 = ::operator_new(0x70);
  pFVar2 = pFVar3;
  if (pFVar1 != (FGLTFMaterialConverter *)0x0) {
    pFVar1->_padding_ = (longlong)this;
    pFVar1->_padding_ = 0;
    pFVar1->_padding_ = 0;
    pFVar1->_padding_ = 0;
    *(undefined4 *)&pFVar1->_padding_ = 0;
    *(undefined4 *)((longlong)&pFVar1->_padding_ + 4) = 0x80;
    *(undefined4 *)&pFVar1->_padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&pFVar1->_padding_ + 4) = 0;
    pFVar1->_padding_ = 0;
    *(undefined4 *)&pFVar1->_padding_ = 0;
    pFVar1->_padding_ =
         (longlong)&___7__TGLTFMeshDataConverter_VUSkeletalMesh__VUSkeletalMeshComponent____6B_;
    ((TGLTFMeshSectionConverter<UStaticMesh> *)&pFVar1->UVOverlapChecker)->_padding_ = 0;
    ((TGLTFMeshSectionConverter<UStaticMesh> *)&pFVar1->UVOverlapChecker)->_padding_ = 0;
    pFVar2 = pFVar1;
  }
  (this->SkeletalMeshDataConverter).Ptr =
       (TGLTFConverter<FGLTFMeshData_const_*,USkeletalMesh_const_*,USkeletalMeshComponent_const_*,int>
        *)pFVar2;
  pFVar1 = ::operator_new(0x60);
  pFVar2 = pFVar3;
  if (pFVar1 != (FGLTFMaterialConverter *)0x0) {
    pFVar1->_padding_ = (longlong)this;
    pFVar1->_padding_ = 0;
    pFVar1->_padding_ = 0;
    pFVar1->_padding_ = 0;
    *(undefined4 *)&pFVar1->_padding_ = 0;
    *(undefined4 *)((longlong)&pFVar1->_padding_ + 4) = 0x80;
    *(undefined4 *)&pFVar1->_padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&pFVar1->_padding_ + 4) = 0;
    pFVar1->_padding_ = 0;
    *(undefined4 *)&pFVar1->_padding_ = 0;
    pFVar1->_padding_ = (longlong)&___7FGLTFSamplerConverter__6B_;
    pFVar2 = pFVar1;
  }
  (this->SamplerConverter).Ptr =
       (TGLTFConverter<FGLTFJsonSampler_*,TextureAddress,TextureAddress,TextureFilter,TextureGroup>
        *)pFVar2;
  pFVar1 = ::operator_new(0x60);
  pFVar2 = pFVar3;
  if (pFVar1 != (FGLTFMaterialConverter *)0x0) {
    pFVar1->_padding_ = (longlong)this;
    pFVar1->_padding_ = 0;
    pFVar1->_padding_ = 0;
    pFVar1->_padding_ = 0;
    *(undefined4 *)&pFVar1->_padding_ = 0;
    *(undefined4 *)((longlong)&pFVar1->_padding_ + 4) = 0x80;
    *(undefined4 *)&pFVar1->_padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&pFVar1->_padding_ + 4) = 0;
    pFVar1->_padding_ = 0;
    *(undefined4 *)&pFVar1->_padding_ = 0;
    pFVar1->_padding_ = (longlong)&___7FGLTFTexture2DConverter__6B_;
    pFVar2 = pFVar1;
  }
  (this->Texture2DConverter).Ptr =
       (TGLTFConverter<FGLTFJsonTexture_*,UTexture2D_const_*,bool,TextureAddress,TextureAddress> *)
       pFVar2;
  pFVar1 = ::operator_new(0x60);
  pFVar2 = pFVar3;
  if (pFVar1 != (FGLTFMaterialConverter *)0x0) {
    pFVar1->_padding_ = (longlong)this;
    pFVar1->_padding_ = 0;
    pFVar1->_padding_ = 0;
    pFVar1->_padding_ = 0;
    *(undefined4 *)&pFVar1->_padding_ = 0;
    *(undefined4 *)((longlong)&pFVar1->_padding_ + 4) = 0x80;
    *(undefined4 *)&pFVar1->_padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&pFVar1->_padding_ + 4) = 0;
    pFVar1->_padding_ = 0;
    *(undefined4 *)&pFVar1->_padding_ = 0;
    pFVar1->_padding_ = (longlong)&___7FGLTFTextureRenderTarget2DConverter__6B_;
    pFVar2 = pFVar1;
  }
  (this->TextureRenderTarget2DConverter).Ptr =
       (TGLTFConverter<FGLTFJsonTexture_*,UTextureRenderTarget2D_const_*,bool> *)pFVar2;
  pFVar1 = ::operator_new(0x60);
  pFVar2 = pFVar3;
  if (pFVar1 != (FGLTFMaterialConverter *)0x0) {
    pFVar1->_padding_ = (longlong)this;
    pFVar1->_padding_ = 0;
    pFVar1->_padding_ = 0;
    pFVar1->_padding_ = 0;
    *(undefined4 *)&pFVar1->_padding_ = 0;
    *(undefined4 *)((longlong)&pFVar1->_padding_ + 4) = 0x80;
    *(undefined4 *)&pFVar1->_padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&pFVar1->_padding_ + 4) = 0;
    pFVar1->_padding_ = 0;
    *(undefined4 *)&pFVar1->_padding_ = 0;
    pFVar1->_padding_ = (longlong)&___7FGLTFImageConverter__6B_;
    pFVar2 = pFVar1;
  }
  (this->ImageConverter).Ptr =
       (TGLTFConverter<FGLTFJsonImage_*,TGLTFSuperfluous<FString>,bool,UE::Math::TIntPoint<int>,TGLTFSharedArray<FColor,TArray<FColor,TSizedDefaultAllocator<32>_>,1>_>
        *)pFVar2;
  pFVar1 = ::operator_new(0x60);
  pFVar2 = pFVar3;
  if (pFVar1 != (FGLTFMaterialConverter *)0x0) {
    pFVar1->_padding_ = (longlong)this;
    pFVar1->_padding_ = 0;
    pFVar1->_padding_ = 0;
    pFVar1->_padding_ = 0;
    *(undefined4 *)&pFVar1->_padding_ = 0;
    *(undefined4 *)((longlong)&pFVar1->_padding_ + 4) = 0x80;
    *(undefined4 *)&pFVar1->_padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&pFVar1->_padding_ + 4) = 0;
    pFVar1->_padding_ = 0;
    *(undefined4 *)&pFVar1->_padding_ = 0;
    pFVar1->_padding_ = (longlong)&___7FGLTFSkinConverter__6B_;
    pFVar2 = pFVar1;
  }
  (this->SkinConverter).Ptr =
       (TGLTFConverter<FGLTFJsonSkin_*,FGLTFJsonNode_*,USkeletalMesh_const_*> *)pFVar2;
  pFVar1 = ::operator_new(0x60);
  pFVar2 = pFVar3;
  if (pFVar1 != (FGLTFMaterialConverter *)0x0) {
    pFVar1->_padding_ = (longlong)this;
    pFVar1->_padding_ = 0;
    pFVar1->_padding_ = 0;
    pFVar1->_padding_ = 0;
    *(undefined4 *)&pFVar1->_padding_ = 0;
    *(undefined4 *)((longlong)&pFVar1->_padding_ + 4) = 0x80;
    *(undefined4 *)&pFVar1->_padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&pFVar1->_padding_ + 4) = 0;
    pFVar1->_padding_ = 0;
    *(undefined4 *)&pFVar1->_padding_ = 0;
    pFVar1->_padding_ = (longlong)&___7FGLTFAnimationConverter__6B_;
    pFVar2 = pFVar1;
  }
  (this->AnimationConverter).Ptr =
       (TGLTFConverter<FGLTFJsonAnimation_*,FGLTFJsonNode_*,USkeletalMesh_const_*,UAnimSequence_const_*>
        *)pFVar2;
  pFVar1 = ::operator_new(0x60);
  pFVar2 = pFVar3;
  if (pFVar1 != (FGLTFMaterialConverter *)0x0) {
    pFVar1->_padding_ = (longlong)this;
    pFVar1->_padding_ = 0;
    pFVar1->_padding_ = 0;
    pFVar1->_padding_ = 0;
    *(undefined4 *)&pFVar1->_padding_ = 0;
    *(undefined4 *)((longlong)&pFVar1->_padding_ + 4) = 0x80;
    *(undefined4 *)&pFVar1->_padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&pFVar1->_padding_ + 4) = 0;
    pFVar1->_padding_ = 0;
    *(undefined4 *)&pFVar1->_padding_ = 0;
    pFVar1->_padding_ = (longlong)&___7FGLTFAnimationDataConverter__6B_;
    pFVar2 = pFVar1;
  }
  (this->AnimationDataConverter).Ptr =
       (TGLTFConverter<FGLTFJsonAnimation_*,FGLTFJsonNode_*,USkeletalMeshComponent_const_*> *)pFVar2
  ;
  pFVar1 = ::operator_new(0x60);
  pFVar2 = pFVar3;
  if (pFVar1 != (FGLTFMaterialConverter *)0x0) {
    pFVar1->_padding_ = (longlong)this;
    pFVar1->_padding_ = 0;
    pFVar1->_padding_ = 0;
    pFVar1->_padding_ = 0;
    *(undefined4 *)&pFVar1->_padding_ = 0;
    *(undefined4 *)((longlong)&pFVar1->_padding_ + 4) = 0x80;
    *(undefined4 *)&pFVar1->_padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&pFVar1->_padding_ + 4) = 0;
    pFVar1->_padding_ = 0;
    *(undefined4 *)&pFVar1->_padding_ = 0;
    pFVar1->_padding_ = (longlong)&___7FGLTFLevelSequenceConverter__6B_;
    pFVar2 = pFVar1;
  }
  (this->LevelSequenceConverter).Ptr =
       (TGLTFConverter<FGLTFJsonAnimation_*,ULevel_const_*,ULevelSequence_const_*> *)pFVar2;
  pFVar1 = ::operator_new(0x60);
  pFVar2 = pFVar3;
  if (pFVar1 != (FGLTFMaterialConverter *)0x0) {
    pFVar1->_padding_ = (longlong)this;
    pFVar1->_padding_ = 0;
    pFVar1->_padding_ = 0;
    pFVar1->_padding_ = 0;
    *(undefined4 *)&pFVar1->_padding_ = 0;
    *(undefined4 *)((longlong)&pFVar1->_padding_ + 4) = 0x80;
    *(undefined4 *)&pFVar1->_padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&pFVar1->_padding_ + 4) = 0;
    pFVar1->_padding_ = 0;
    *(undefined4 *)&pFVar1->_padding_ = 0;
    pFVar1->_padding_ = (longlong)&___7FGLTFLevelSequenceDataConverter__6B_;
    pFVar2 = pFVar1;
  }
  (this->LevelSequenceDataConverter).Ptr =
       (TGLTFConverter<FGLTFJsonAnimation_*,ALevelSequenceActor_const_*> *)pFVar2;
  pFVar1 = ::operator_new(0x60);
  pFVar2 = pFVar3;
  if (pFVar1 != (FGLTFMaterialConverter *)0x0) {
    pFVar1->_padding_ = (longlong)this;
    pFVar1->_padding_ = 0;
    pFVar1->_padding_ = 0;
    pFVar1->_padding_ = 0;
    *(undefined4 *)&pFVar1->_padding_ = 0;
    *(undefined4 *)((longlong)&pFVar1->_padding_ + 4) = 0x80;
    *(undefined4 *)&pFVar1->_padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&pFVar1->_padding_ + 4) = 0;
    pFVar1->_padding_ = 0;
    *(undefined4 *)&pFVar1->_padding_ = 0;
    pFVar1->_padding_ = (longlong)&___7FGLTFActorConverter__6B_;
    pFVar2 = pFVar1;
  }
  (this->ActorConverter).Ptr = (TGLTFConverter<FGLTFJsonNode_*,AActor_const_*> *)pFVar2;
  pFVar1 = ::operator_new(0x60);
  pFVar2 = pFVar3;
  if (pFVar1 != (FGLTFMaterialConverter *)0x0) {
    pFVar1->_padding_ = (longlong)this;
    pFVar1->_padding_ = 0;
    pFVar1->_padding_ = 0;
    pFVar1->_padding_ = 0;
    *(undefined4 *)&pFVar1->_padding_ = 0;
    *(undefined4 *)((longlong)&pFVar1->_padding_ + 4) = 0x80;
    *(undefined4 *)&pFVar1->_padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&pFVar1->_padding_ + 4) = 0;
    pFVar1->_padding_ = 0;
    *(undefined4 *)&pFVar1->_padding_ = 0;
    pFVar1->_padding_ = (longlong)&___7FGLTFComponentConverter__6B_;
    pFVar2 = pFVar1;
  }
  (this->ComponentConverter).Ptr = (TGLTFConverter<FGLTFJsonNode_*,USceneComponent_const_*> *)pFVar2
  ;
  pFVar1 = ::operator_new(0x60);
  pFVar2 = pFVar3;
  if (pFVar1 != (FGLTFMaterialConverter *)0x0) {
    pFVar1->_padding_ = (longlong)this;
    pFVar1->_padding_ = 0;
    pFVar1->_padding_ = 0;
    pFVar1->_padding_ = 0;
    *(undefined4 *)&pFVar1->_padding_ = 0;
    *(undefined4 *)((longlong)&pFVar1->_padding_ + 4) = 0x80;
    *(undefined4 *)&pFVar1->_padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&pFVar1->_padding_ + 4) = 0;
    pFVar1->_padding_ = 0;
    *(undefined4 *)&pFVar1->_padding_ = 0;
    pFVar1->_padding_ = (longlong)&___7FGLTFComponentSocketConverter__6B_;
    pFVar2 = pFVar1;
  }
  (this->ComponentSocketConverter).Ptr =
       (TGLTFConverter<FGLTFJsonNode_*,USceneComponent_const_*,FName> *)pFVar2;
  pFVar1 = ::operator_new(0x60);
  pFVar2 = pFVar3;
  if (pFVar1 != (FGLTFMaterialConverter *)0x0) {
    pFVar1->_padding_ = (longlong)this;
    pFVar1->_padding_ = 0;
    pFVar1->_padding_ = 0;
    pFVar1->_padding_ = 0;
    *(undefined4 *)&pFVar1->_padding_ = 0;
    *(undefined4 *)((longlong)&pFVar1->_padding_ + 4) = 0x80;
    *(undefined4 *)&pFVar1->_padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&pFVar1->_padding_ + 4) = 0;
    pFVar1->_padding_ = 0;
    *(undefined4 *)&pFVar1->_padding_ = 0;
    pFVar1->_padding_ = (longlong)&___7FGLTFStaticSocketConverter__6B_;
    pFVar2 = pFVar1;
  }
  (this->StaticSocketConverter).Ptr =
       (TGLTFConverter<FGLTFJsonNode_*,FGLTFJsonNode_*,UStaticMesh_const_*,FName> *)pFVar2;
  pFVar1 = ::operator_new(0x60);
  pFVar2 = pFVar3;
  if (pFVar1 != (FGLTFMaterialConverter *)0x0) {
    pFVar1->_padding_ = (longlong)this;
    pFVar1->_padding_ = 0;
    pFVar1->_padding_ = 0;
    pFVar1->_padding_ = 0;
    *(undefined4 *)&pFVar1->_padding_ = 0;
    *(undefined4 *)((longlong)&pFVar1->_padding_ + 4) = 0x80;
    *(undefined4 *)&pFVar1->_padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&pFVar1->_padding_ + 4) = 0;
    pFVar1->_padding_ = 0;
    *(undefined4 *)&pFVar1->_padding_ = 0;
    pFVar1->_padding_ = (longlong)&___7FGLTFSkeletalSocketConverter__6B_;
    pFVar2 = pFVar1;
  }
  (this->SkeletalSocketConverter).Ptr =
       (TGLTFConverter<FGLTFJsonNode_*,FGLTFJsonNode_*,USkeletalMesh_const_*,FName> *)pFVar2;
  pFVar1 = ::operator_new(0x60);
  pFVar2 = pFVar3;
  if (pFVar1 != (FGLTFMaterialConverter *)0x0) {
    pFVar1->_padding_ = (longlong)this;
    pFVar1->_padding_ = 0;
    pFVar1->_padding_ = 0;
    pFVar1->_padding_ = 0;
    *(undefined4 *)&pFVar1->_padding_ = 0;
    *(undefined4 *)((longlong)&pFVar1->_padding_ + 4) = 0x80;
    *(undefined4 *)&pFVar1->_padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&pFVar1->_padding_ + 4) = 0;
    pFVar1->_padding_ = 0;
    *(undefined4 *)&pFVar1->_padding_ = 0;
    pFVar1->_padding_ = (longlong)&___7FGLTFSkeletalBoneConverter__6B_;
    pFVar2 = pFVar1;
  }
  (this->SkeletalBoneConverter).Ptr =
       (TGLTFConverter<FGLTFJsonNode_*,FGLTFJsonNode_*,USkeletalMesh_const_*,int> *)pFVar2;
  pFVar1 = ::operator_new(0x60);
  pFVar2 = pFVar3;
  if (pFVar1 != (FGLTFMaterialConverter *)0x0) {
    pFVar1->_padding_ = (longlong)this;
    pFVar1->_padding_ = 0;
    pFVar1->_padding_ = 0;
    pFVar1->_padding_ = 0;
    *(undefined4 *)&pFVar1->_padding_ = 0;
    *(undefined4 *)((longlong)&pFVar1->_padding_ + 4) = 0x80;
    *(undefined4 *)&pFVar1->_padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&pFVar1->_padding_ + 4) = 0;
    pFVar1->_padding_ = 0;
    *(undefined4 *)&pFVar1->_padding_ = 0;
    pFVar1->_padding_ = (longlong)&___7FGLTFSceneConverter__6B_;
    pFVar2 = pFVar1;
  }
  (this->SceneConverter).Ptr = (TGLTFConverter<FGLTFJsonScene_*,UWorld_const_*> *)pFVar2;
  pFVar1 = ::operator_new(0x60);
  pFVar2 = pFVar3;
  if (pFVar1 != (FGLTFMaterialConverter *)0x0) {
    pFVar1->_padding_ = (longlong)this;
    pFVar1->_padding_ = 0;
    pFVar1->_padding_ = 0;
    pFVar1->_padding_ = 0;
    *(undefined4 *)&pFVar1->_padding_ = 0;
    *(undefined4 *)((longlong)&pFVar1->_padding_ + 4) = 0x80;
    *(undefined4 *)&pFVar1->_padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&pFVar1->_padding_ + 4) = 0;
    pFVar1->_padding_ = 0;
    *(undefined4 *)&pFVar1->_padding_ = 0;
    pFVar1->_padding_ = (longlong)&___7FGLTFCameraConverter__6B_;
    pFVar2 = pFVar1;
  }
  (this->CameraConverter).Ptr = (TGLTFConverter<FGLTFJsonCamera_*,UCameraComponent_const_*> *)pFVar2
  ;
  pFVar1 = ::operator_new(0x60);
  pFVar2 = pFVar3;
  if (pFVar1 != (FGLTFMaterialConverter *)0x0) {
    pFVar1->_padding_ = (longlong)this;
    pFVar1->_padding_ = 0;
    pFVar1->_padding_ = 0;
    pFVar1->_padding_ = 0;
    *(undefined4 *)&pFVar1->_padding_ = 0;
    *(undefined4 *)((longlong)&pFVar1->_padding_ + 4) = 0x80;
    *(undefined4 *)&pFVar1->_padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&pFVar1->_padding_ + 4) = 0;
    pFVar1->_padding_ = 0;
    *(undefined4 *)&pFVar1->_padding_ = 0;
    pFVar1->_padding_ = (longlong)&___7FGLTFLightConverter__6B_;
    pFVar2 = pFVar1;
  }
  (this->LightConverter).Ptr = (TGLTFConverter<FGLTFJsonLight_*,ULightComponent_const_*> *)pFVar2;
  pFVar1 = ::operator_new(0x60);
  pFVar2 = pFVar3;
  if (pFVar1 != (FGLTFMaterialConverter *)0x0) {
    pFVar1->_padding_ = (longlong)this;
    pFVar1->_padding_ = 0;
    pFVar1->_padding_ = 0;
    pFVar1->_padding_ = 0;
    *(undefined4 *)&pFVar1->_padding_ = 0;
    *(undefined4 *)((longlong)&pFVar1->_padding_ + 4) = 0x80;
    *(undefined4 *)&pFVar1->_padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&pFVar1->_padding_ + 4) = 0;
    pFVar1->_padding_ = 0;
    *(undefined4 *)&pFVar1->_padding_ = 0;
    pFVar1->_padding_ = (longlong)&___7FGLTFLightIESConverter__6B_;
    pFVar2 = pFVar1;
  }
  (this->LightIESConverter).Ptr =
       (TGLTFConverter<FGLTFJsonLightIES_*,ULightComponent_const_*> *)pFVar2;
  pFVar1 = ::operator_new(0x60);
  pFVar2 = pFVar3;
  if (pFVar1 != (FGLTFMaterialConverter *)0x0) {
    pFVar1->_padding_ = (longlong)this;
    pFVar1->_padding_ = 0;
    pFVar1->_padding_ = 0;
    pFVar1->_padding_ = 0;
    *(undefined4 *)&pFVar1->_padding_ = 0;
    *(undefined4 *)((longlong)&pFVar1->_padding_ + 4) = 0x80;
    *(undefined4 *)&pFVar1->_padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&pFVar1->_padding_ + 4) = 0;
    pFVar1->_padding_ = 0;
    *(undefined4 *)&pFVar1->_padding_ = 0;
    pFVar1->_padding_ = (longlong)&___7FGLTFLightIESInstanceConverter__6B_;
    pFVar2 = pFVar1;
  }
  (this->LightIESInstanceConverter).Ptr = (FGLTFLightIESInstanceConverter *)pFVar2;
  pFVar1 = ::operator_new(0x60);
  pFVar2 = pFVar3;
  if (pFVar1 != (FGLTFMaterialConverter *)0x0) {
    pFVar1->_padding_ = (longlong)this;
    pFVar1->_padding_ = 0;
    pFVar1->_padding_ = 0;
    pFVar1->_padding_ = 0;
    *(undefined4 *)&pFVar1->_padding_ = 0;
    *(undefined4 *)((longlong)&pFVar1->_padding_ + 4) = 0x80;
    *(undefined4 *)&pFVar1->_padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&pFVar1->_padding_ + 4) = 0;
    pFVar1->_padding_ = 0;
    *(undefined4 *)&pFVar1->_padding_ = 0;
    pFVar1->_padding_ = (longlong)&___7FGLTFMaterialVariantConverter__6B_;
    pFVar2 = pFVar1;
  }
  (this->MaterialVariantConverter).Ptr =
       (TGLTFConverter<FGLTFJsonMaterialVariant_*,UVariant_const_*> *)pFVar2;
  pFVar1 = ::operator_new(0x60);
  pFVar2 = pFVar3;
  if (pFVar1 != (FGLTFMaterialConverter *)0x0) {
    pFVar1->_padding_ = (longlong)this;
    pFVar1->_padding_ = 0;
    pFVar1->_padding_ = 0;
    pFVar1->_padding_ = 0;
    *(undefined4 *)&pFVar1->_padding_ = 0;
    *(undefined4 *)((longlong)&pFVar1->_padding_ + 4) = 0x80;
    *(undefined4 *)&pFVar1->_padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&pFVar1->_padding_ + 4) = 0;
    pFVar1->_padding_ = 0;
    *(undefined4 *)&pFVar1->_padding_ = 0;
    pFVar1->_padding_ = (longlong)&___7FGLTFTextureLightMapConverter__6B_;
    pFVar2 = pFVar1;
  }
  (this->TextureLightMapConverter).Ptr =
       (TGLTFConverter<FGLTFJsonTexture_*,ULightMapTexture2D_const_*> *)pFVar2;
  this_03 = ::operator_new(0x60);
  if (this_03 != (FGLTFLightMapConverter *)0x0) {
    pFVar3 = (FGLTFMaterialConverter *)FGLTFLightMapConverter::FGLTFLightMapConverter(this_03,this);
  }
  (this->LightMapConverter).Ptr =
       (TGLTFConverter<FGLTFJsonLightMap_*,UStaticMeshComponent_const_*> *)pFVar3;
  *(undefined8 *)&this->ObjectVariants = 0;
  *(undefined8 *)&(this->ObjectVariants).field_0x8 = 0;
  *(undefined8 *)&(this->ObjectVariants).field_0x20 = 0;
  *(undefined4 *)&(this->ObjectVariants).field_0x28 = 0;
  *(undefined4 *)&(this->ObjectVariants).field_0x2c = 0x80;
  *(undefined4 *)&(this->ObjectVariants).field_0x34 = 0;
  *(undefined4 *)&(this->ObjectVariants).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ObjectVariants).field_0x40 = 0;
  *(undefined4 *)&(this->ObjectVariants).field_0x48 = 0;
  return this;
}

// ~FGLTFConvertBuilder @ 14e5d74f0

void __thiscall FGLTFConvertBuilder::~FGLTFConvertBuilder(FGLTFConvertBuilder *this)

{
  void *pvVar1;
  TGLTFConverter<FGLTFJsonLightMap_*,UStaticMeshComponent_const_*> *pTVar2;
  TGLTFConverter<FGLTFJsonTexture_*,ULightMapTexture2D_const_*> *pTVar3;
  TGLTFConverter<FGLTFJsonMaterialVariant_*,UVariant_const_*> *pTVar4;
  FGLTFLightIESInstanceConverter *pFVar5;
  TGLTFConverter<FGLTFJsonLightIES_*,ULightComponent_const_*> *pTVar6;
  TGLTFConverter<FGLTFJsonLight_*,ULightComponent_const_*> *pTVar7;
  TGLTFConverter<FGLTFJsonCamera_*,UCameraComponent_const_*> *pTVar8;
  TGLTFConverter<FGLTFJsonScene_*,UWorld_const_*> *pTVar9;
  TGLTFConverter<FGLTFJsonNode_*,FGLTFJsonNode_*,USkeletalMesh_const_*,int> *pTVar10;
  TGLTFConverter<FGLTFJsonNode_*,FGLTFJsonNode_*,USkeletalMesh_const_*,FName> *pTVar11;
  TGLTFConverter<FGLTFJsonNode_*,FGLTFJsonNode_*,UStaticMesh_const_*,FName> *pTVar12;
  TGLTFConverter<FGLTFJsonNode_*,USceneComponent_const_*,FName> *pTVar13;
  TGLTFConverter<FGLTFJsonNode_*,USceneComponent_const_*> *pTVar14;
  TGLTFConverter<FGLTFJsonNode_*,AActor_const_*> *pTVar15;
  TGLTFConverter<FGLTFJsonAnimation_*,ALevelSequenceActor_const_*> *pTVar16;
  TGLTFConverter<FGLTFJsonAnimation_*,ULevel_const_*,ULevelSequence_const_*> *pTVar17;
  TGLTFConverter<FGLTFJsonAnimation_*,FGLTFJsonNode_*,USkeletalMeshComponent_const_*> *pTVar18;
  TGLTFConverter<FGLTFJsonAnimation_*,FGLTFJsonNode_*,USkeletalMesh_const_*,UAnimSequence_const_*>
  *pTVar19;
  TGLTFConverter<FGLTFJsonSkin_*,FGLTFJsonNode_*,USkeletalMesh_const_*> *pTVar20;
  TGLTFConverter<FGLTFJsonImage_*,TGLTFSuperfluous<FString>,bool,UE::Math::TIntPoint<int>,TGLTFSharedArray<FColor,TArray<FColor,TSizedDefaultAllocator<32>_>,1>_>
  *pTVar21;
  TGLTFConverter<FGLTFJsonTexture_*,UTextureRenderTarget2D_const_*,bool> *pTVar22;
  TGLTFConverter<FGLTFJsonTexture_*,UTexture2D_const_*,bool,TextureAddress,TextureAddress> *pTVar23;
  TGLTFConverter<FGLTFJsonSampler_*,TextureAddress,TextureAddress,TextureFilter,TextureGroup>
  *pTVar24;
  TGLTFConverter<FGLTFMeshData_const_*,USkeletalMesh_const_*,USkeletalMeshComponent_const_*,int>
  *pTVar25;
  TGLTFConverter<FGLTFMeshData_const_*,UStaticMesh_const_*,UStaticMeshComponent_const_*,int>
  *pTVar26;
  TGLTFConverter<FGLTFJsonMaterial_*,UMaterialInterface_const_*,FGLTFMeshData_const_*,FMeshAttributesArray<int>_>
  *pTVar27;
  TGLTFConverter<FGLTFJsonMesh_*,USkeletalMesh_const_*,USkeletalMeshComponent_const_*,FGLTFMaterialArray,int>
  *pTVar28;
  TGLTFConverter<FGLTFJsonMesh_*,UStaticMesh_const_*,UStaticMeshComponent_const_*,FGLTFMaterialArray,int>
  *pTVar29;
  TGLTFConverter<FGLTFJsonMesh_*,ULandscapeComponent_const_*,UMaterialInterface_const_*> *pTVar30;
  TGLTFConverter<FGLTFJsonMesh_*,UStaticMesh_const_*,USplineMeshComponent_const_*,FGLTFMaterialArray,int>
  *pTVar31;
  TGLTFConverter<FGLTFJsonAccessor_*,FMeshAttributesArray<UE::Math::TIntVector4<unsigned_short>_>_>
  *pTVar32;
  TGLTFConverter<FGLTFJsonAccessor_*,FMeshAttributesArray<int>,FString> *pTVar33;
  TGLTFConverter<FGLTFJsonAccessor_*,FMeshAttributesArray<UE::Math::TVector2<float>_>_> *pTVar34;
  TGLTFConverter<FGLTFJsonAccessor_*,FMeshAttributesArray<UE::Math::TVector4<float>_>_> *pTVar35;
  TGLTFConverter<FGLTFJsonAccessor_*,FMeshAttributesArray<UE::Math::TVector<float>_>,bool> *pTVar36;
  TGLTFConverter<FGLTFJsonAccessor_*,FMeshAttributesArray<FColor>_> *pTVar37;
  TGLTFConverter<FGLTFJsonAccessor_*,FMeshAttributesArray<UE::Math::TVector<float>_>_> *pTVar38;
  TGLTFConverter<FGLTFJsonAccessor_*,FGLTFMeshSection_const_*> *pTVar39;
  TGLTFConverter<FGLTFJsonAccessor_*,FGLTFMeshSection_const_*,FSkinWeightVertexBuffer_const_*,unsigned_int>
  *pTVar40;
  TGLTFConverter<FGLTFJsonAccessor_*,FGLTFMeshSection_const_*,FStaticMeshVertexBuffer_const_*,unsigned_int>
  *pTVar41;
  TGLTFConverter<FGLTFJsonAccessor_*,FGLTFMeshSection_const_*,FStaticMeshVertexBuffer_const_*>
  *pTVar42;
  TGLTFConverter<FGLTFJsonAccessor_*,FGLTFMeshSection_const_*,TMap<unsigned_int,UE::Math::TVector<float>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Math::TVector<float>,0>_>_const_*,bool>
  *pTVar43;
  TGLTFConverter<FGLTFJsonAccessor_*,FGLTFMeshSection_const_*,FColorVertexBuffer_const_*> *pTVar44;
  TGLTFConverter<FGLTFJsonAccessor_*,FGLTFMeshSection_const_*,TMap<unsigned_int,UE::Math::TVector<float>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Math::TVector<float>,0>_>_const_*>
  *pTVar45;
  TGLTFConverter<FGLTFJsonAccessor_*,FGLTFMeshSection_const_*,FPositionVertexBuffer_const_*>
  *pTVar46;
  ForElementType<FSetElementId> FVar47;
  
  *(undefined4 *)&(this->ObjectVariants).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ObjectVariants).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<UObject_const_*,TArray<UPropertyValue_const_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UObject_const_*,TArray<UPropertyValue_const_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UObject_const_*,TArray<UPropertyValue_const_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ObjectVariants);
  pTVar2 = (this->LightMapConverter).Ptr;
  if (pTVar2 != (TGLTFConverter<FGLTFJsonLightMap_*,UStaticMeshComponent_const_*> *)0x0) {
    (**(code **)pTVar2->_padding_)(pTVar2,1);
  }
  pTVar3 = (this->TextureLightMapConverter).Ptr;
  if (pTVar3 != (TGLTFConverter<FGLTFJsonTexture_*,ULightMapTexture2D_const_*> *)0x0) {
    (**(code **)pTVar3->_padding_)(pTVar3,1);
  }
  pTVar4 = (this->MaterialVariantConverter).Ptr;
  if (pTVar4 != (TGLTFConverter<FGLTFJsonMaterialVariant_*,UVariant_const_*> *)0x0) {
    (**(code **)pTVar4->_padding_)(pTVar4,1);
  }
  pFVar5 = (this->LightIESInstanceConverter).Ptr;
  if (pFVar5 != (FGLTFLightIESInstanceConverter *)0x0) {
    (*(code *)**(undefined8 **)pFVar5)(pFVar5,1);
  }
  pTVar6 = (this->LightIESConverter).Ptr;
  if (pTVar6 != (TGLTFConverter<FGLTFJsonLightIES_*,ULightComponent_const_*> *)0x0) {
    (**(code **)pTVar6->_padding_)(pTVar6,1);
  }
  pTVar7 = (this->LightConverter).Ptr;
  if (pTVar7 != (TGLTFConverter<FGLTFJsonLight_*,ULightComponent_const_*> *)0x0) {
    (**(code **)pTVar7->_padding_)(pTVar7,1);
  }
  pTVar8 = (this->CameraConverter).Ptr;
  if (pTVar8 != (TGLTFConverter<FGLTFJsonCamera_*,UCameraComponent_const_*> *)0x0) {
    (**(code **)pTVar8->_padding_)(pTVar8,1);
  }
  pTVar9 = (this->SceneConverter).Ptr;
  if (pTVar9 != (TGLTFConverter<FGLTFJsonScene_*,UWorld_const_*> *)0x0) {
    (**(code **)pTVar9->_padding_)(pTVar9,1);
  }
  pTVar10 = (this->SkeletalBoneConverter).Ptr;
  if (pTVar10 != (TGLTFConverter<FGLTFJsonNode_*,FGLTFJsonNode_*,USkeletalMesh_const_*,int> *)0x0) {
    (**(code **)pTVar10->_padding_)(pTVar10,1);
  }
  pTVar11 = (this->SkeletalSocketConverter).Ptr;
  if (pTVar11 != (TGLTFConverter<FGLTFJsonNode_*,FGLTFJsonNode_*,USkeletalMesh_const_*,FName> *)0x0)
  {
    (**(code **)pTVar11->_padding_)(pTVar11,1);
  }
  pTVar12 = (this->StaticSocketConverter).Ptr;
  if (pTVar12 != (TGLTFConverter<FGLTFJsonNode_*,FGLTFJsonNode_*,UStaticMesh_const_*,FName> *)0x0) {
    (**(code **)pTVar12->_padding_)(pTVar12,1);
  }
  pTVar13 = (this->ComponentSocketConverter).Ptr;
  if (pTVar13 != (TGLTFConverter<FGLTFJsonNode_*,USceneComponent_const_*,FName> *)0x0) {
    (**(code **)pTVar13->_padding_)(pTVar13,1);
  }
  pTVar14 = (this->ComponentConverter).Ptr;
  if (pTVar14 != (TGLTFConverter<FGLTFJsonNode_*,USceneComponent_const_*> *)0x0) {
    (**(code **)pTVar14->_padding_)(pTVar14,1);
  }
  pTVar15 = (this->ActorConverter).Ptr;
  if (pTVar15 != (TGLTFConverter<FGLTFJsonNode_*,AActor_const_*> *)0x0) {
    (**(code **)pTVar15->_padding_)(pTVar15,1);
  }
  pTVar16 = (this->LevelSequenceDataConverter).Ptr;
  if (pTVar16 != (TGLTFConverter<FGLTFJsonAnimation_*,ALevelSequenceActor_const_*> *)0x0) {
    (**(code **)pTVar16->_padding_)(pTVar16,1);
  }
  pTVar17 = (this->LevelSequenceConverter).Ptr;
  if (pTVar17 != (TGLTFConverter<FGLTFJsonAnimation_*,ULevel_const_*,ULevelSequence_const_*> *)0x0)
  {
    (**(code **)pTVar17->_padding_)(pTVar17,1);
  }
  pTVar18 = (this->AnimationDataConverter).Ptr;
  if (pTVar18 !=
      (TGLTFConverter<FGLTFJsonAnimation_*,FGLTFJsonNode_*,USkeletalMeshComponent_const_*> *)0x0) {
    (**(code **)pTVar18->_padding_)(pTVar18,1);
  }
  pTVar19 = (this->AnimationConverter).Ptr;
  if (pTVar19 !=
      (TGLTFConverter<FGLTFJsonAnimation_*,FGLTFJsonNode_*,USkeletalMesh_const_*,UAnimSequence_const_*>
       *)0x0) {
    (**(code **)pTVar19->_padding_)(pTVar19,1);
  }
  pTVar20 = (this->SkinConverter).Ptr;
  if (pTVar20 != (TGLTFConverter<FGLTFJsonSkin_*,FGLTFJsonNode_*,USkeletalMesh_const_*> *)0x0) {
    (**(code **)pTVar20->_padding_)(pTVar20,1);
  }
  pTVar21 = (this->ImageConverter).Ptr;
  if (pTVar21 !=
      (TGLTFConverter<FGLTFJsonImage_*,TGLTFSuperfluous<FString>,bool,UE::Math::TIntPoint<int>,TGLTFSharedArray<FColor,TArray<FColor,TSizedDefaultAllocator<32>_>,1>_>
       *)0x0) {
    (**(code **)pTVar21->_padding_)(pTVar21,1);
  }
  pTVar22 = (this->TextureRenderTarget2DConverter).Ptr;
  if (pTVar22 != (TGLTFConverter<FGLTFJsonTexture_*,UTextureRenderTarget2D_const_*,bool> *)0x0) {
    (**(code **)pTVar22->_padding_)(pTVar22,1);
  }
  pTVar23 = (this->Texture2DConverter).Ptr;
  if (pTVar23 !=
      (TGLTFConverter<FGLTFJsonTexture_*,UTexture2D_const_*,bool,TextureAddress,TextureAddress> *)
      0x0) {
    (**(code **)pTVar23->_padding_)(pTVar23,1);
  }
  pTVar24 = (this->SamplerConverter).Ptr;
  if (pTVar24 !=
      (TGLTFConverter<FGLTFJsonSampler_*,TextureAddress,TextureAddress,TextureFilter,TextureGroup> *
      )0x0) {
    (**(code **)pTVar24->_padding_)(pTVar24,1);
  }
  pTVar25 = (this->SkeletalMeshDataConverter).Ptr;
  if (pTVar25 !=
      (TGLTFConverter<FGLTFMeshData_const_*,USkeletalMesh_const_*,USkeletalMeshComponent_const_*,int>
       *)0x0) {
    (**(code **)pTVar25->_padding_)(pTVar25,1);
  }
  pTVar26 = (this->StaticMeshDataConverter).Ptr;
  if (pTVar26 !=
      (TGLTFConverter<FGLTFMeshData_const_*,UStaticMesh_const_*,UStaticMeshComponent_const_*,int> *)
      0x0) {
    (**(code **)pTVar26->_padding_)(pTVar26,1);
  }
  pTVar27 = (this->MaterialConverter).Ptr;
  if (pTVar27 !=
      (TGLTFConverter<FGLTFJsonMaterial_*,UMaterialInterface_const_*,FGLTFMeshData_const_*,FMeshAttributesArray<int>_>
       *)0x0) {
    (**(code **)pTVar27->_padding_)(pTVar27,1);
  }
  pTVar28 = (this->SkeletalMeshConverter).Ptr;
  if (pTVar28 !=
      (TGLTFConverter<FGLTFJsonMesh_*,USkeletalMesh_const_*,USkeletalMeshComponent_const_*,FGLTFMaterialArray,int>
       *)0x0) {
    (**(code **)pTVar28->_padding_)(pTVar28,1);
  }
  pTVar29 = (this->StaticMeshConverter).Ptr;
  if (pTVar29 !=
      (TGLTFConverter<FGLTFJsonMesh_*,UStaticMesh_const_*,UStaticMeshComponent_const_*,FGLTFMaterialArray,int>
       *)0x0) {
    (**(code **)pTVar29->_padding_)(pTVar29,1);
  }
  pTVar30 = (this->LandscapeConverter).Ptr;
  if (pTVar30 !=
      (TGLTFConverter<FGLTFJsonMesh_*,ULandscapeComponent_const_*,UMaterialInterface_const_*> *)0x0)
  {
    (**(code **)pTVar30->_padding_)(pTVar30,1);
  }
  pTVar31 = (this->SplineMeshConverter).Ptr;
  if (pTVar31 !=
      (TGLTFConverter<FGLTFJsonMesh_*,UStaticMesh_const_*,USplineMeshComponent_const_*,FGLTFMaterialArray,int>
       *)0x0) {
    (**(code **)pTVar31->_padding_)(pTVar31,1);
  }
  pTVar32 = (this->BoneWeightBufferConverterRaw).Ptr;
  if (pTVar32 !=
      (TGLTFConverter<FGLTFJsonAccessor_*,FMeshAttributesArray<UE::Math::TIntVector4<unsigned_short>_>_>
       *)0x0) {
    (**(code **)pTVar32->_padding_)(pTVar32,1);
  }
  pTVar32 = (this->BoneIndexBufferConverterRaw).Ptr;
  if (pTVar32 !=
      (TGLTFConverter<FGLTFJsonAccessor_*,FMeshAttributesArray<UE::Math::TIntVector4<unsigned_short>_>_>
       *)0x0) {
    (**(code **)pTVar32->_padding_)(pTVar32,1);
  }
  pTVar33 = (this->IndexBufferConverterRaw).Ptr;
  if (pTVar33 != (TGLTFConverter<FGLTFJsonAccessor_*,FMeshAttributesArray<int>,FString> *)0x0) {
    (**(code **)pTVar33->_padding_)(pTVar33,1);
  }
  pTVar34 = (this->UVBufferConverterRaw).Ptr;
  if (pTVar34 !=
      (TGLTFConverter<FGLTFJsonAccessor_*,FMeshAttributesArray<UE::Math::TVector2<float>_>_> *)0x0)
  {
    (**(code **)pTVar34->_padding_)(pTVar34,1);
  }
  pTVar35 = (this->TangentBufferConverterRaw).Ptr;
  if (pTVar35 !=
      (TGLTFConverter<FGLTFJsonAccessor_*,FMeshAttributesArray<UE::Math::TVector4<float>_>_> *)0x0)
  {
    (**(code **)pTVar35->_padding_)(pTVar35,1);
  }
  pTVar36 = (this->NormalBufferConverterRaw).Ptr;
  if (pTVar36 !=
      (TGLTFConverter<FGLTFJsonAccessor_*,FMeshAttributesArray<UE::Math::TVector<float>_>,bool> *)
      0x0) {
    (**(code **)pTVar36->_padding_)(pTVar36,1);
  }
  pTVar37 = (this->ColorBufferConverterRaw).Ptr;
  if (pTVar37 != (TGLTFConverter<FGLTFJsonAccessor_*,FMeshAttributesArray<FColor>_> *)0x0) {
    (**(code **)pTVar37->_padding_)(pTVar37,1);
  }
  pTVar38 = (this->PositionBufferConverterRaw).Ptr;
  if (pTVar38 !=
      (TGLTFConverter<FGLTFJsonAccessor_*,FMeshAttributesArray<UE::Math::TVector<float>_>_> *)0x0) {
    (**(code **)pTVar38->_padding_)(pTVar38,1);
  }
  pTVar39 = (this->IndexBufferConverter).Ptr;
  if (pTVar39 != (TGLTFConverter<FGLTFJsonAccessor_*,FGLTFMeshSection_const_*> *)0x0) {
    (**(code **)pTVar39->_padding_)(pTVar39,1);
  }
  pTVar40 = (this->BoneWeightBufferConverter).Ptr;
  if (pTVar40 !=
      (TGLTFConverter<FGLTFJsonAccessor_*,FGLTFMeshSection_const_*,FSkinWeightVertexBuffer_const_*,unsigned_int>
       *)0x0) {
    (**(code **)pTVar40->_padding_)(pTVar40,1);
  }
  pTVar40 = (this->BoneIndexBufferConverter).Ptr;
  if (pTVar40 !=
      (TGLTFConverter<FGLTFJsonAccessor_*,FGLTFMeshSection_const_*,FSkinWeightVertexBuffer_const_*,unsigned_int>
       *)0x0) {
    (**(code **)pTVar40->_padding_)(pTVar40,1);
  }
  pTVar41 = (this->UVBufferConverter).Ptr;
  if (pTVar41 !=
      (TGLTFConverter<FGLTFJsonAccessor_*,FGLTFMeshSection_const_*,FStaticMeshVertexBuffer_const_*,unsigned_int>
       *)0x0) {
    (**(code **)pTVar41->_padding_)(pTVar41,1);
  }
  pTVar42 = (this->TangentBufferConverter).Ptr;
  if (pTVar42 !=
      (TGLTFConverter<FGLTFJsonAccessor_*,FGLTFMeshSection_const_*,FStaticMeshVertexBuffer_const_*>
       *)0x0) {
    (**(code **)pTVar42->_padding_)(pTVar42,1);
  }
  pTVar43 = (this->NormalDeltaBufferConverter).Ptr;
  if (pTVar43 !=
      (TGLTFConverter<FGLTFJsonAccessor_*,FGLTFMeshSection_const_*,TMap<unsigned_int,UE::Math::TVector<float>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Math::TVector<float>,0>_>_const_*,bool>
       *)0x0) {
    (**(code **)pTVar43->_padding_)(pTVar43,1);
  }
  pTVar42 = (this->NormalBufferConverter).Ptr;
  if (pTVar42 !=
      (TGLTFConverter<FGLTFJsonAccessor_*,FGLTFMeshSection_const_*,FStaticMeshVertexBuffer_const_*>
       *)0x0) {
    (**(code **)pTVar42->_padding_)(pTVar42,1);
  }
  pTVar44 = (this->ColorBufferConverter).Ptr;
  if (pTVar44 !=
      (TGLTFConverter<FGLTFJsonAccessor_*,FGLTFMeshSection_const_*,FColorVertexBuffer_const_*> *)0x0
     ) {
    (**(code **)pTVar44->_padding_)(pTVar44,1);
  }
  pTVar45 = (this->PositionDeltaBufferConverter).Ptr;
  if (pTVar45 !=
      (TGLTFConverter<FGLTFJsonAccessor_*,FGLTFMeshSection_const_*,TMap<unsigned_int,UE::Math::TVector<float>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Math::TVector<float>,0>_>_const_*>
       *)0x0) {
    (**(code **)pTVar45->_padding_)(pTVar45,1);
  }
  pTVar46 = (this->PositionBufferConverter).Ptr;
  if (pTVar46 !=
      (TGLTFConverter<FGLTFJsonAccessor_*,FGLTFMeshSection_const_*,FPositionVertexBuffer_const_*> *)
      0x0) {
    (**(code **)pTVar46->_padding_)(pTVar46,1);
  }
  (this->SelectedActors).HashSize = 0;
  FVar47 = (this->SelectedActors).Hash.SecondaryData;
  if (FVar47 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar47);
  }
  TSparseArray<TSparseSetElement<AActor_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<AActor_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->SelectedActors).Elements);
  FGLTFAnalyticsBuilder::~FGLTFAnalyticsBuilder((FGLTFAnalyticsBuilder *)this);
  return;
}

// AddUniqueAnimation @ 14e5dffe0

FGLTFJsonAnimation * __thiscall
FGLTFConvertBuilder::AddUniqueAnimation
          (FGLTFConvertBuilder *this,FGLTFJsonNode *param_1,USkeletalMesh *param_2,
          UAnimSequence *param_3)

{
  FGLTFJsonAnimation *pFVar1;
  UAnimSequence *local_res10;
  UAnimSequence *local_18 [2];
  
  if (((param_1 == (FGLTFJsonNode *)0x0) || (param_2 == (USkeletalMesh *)0x0)) ||
     (param_3 == (UAnimSequence *)0x0)) {
    pFVar1 = (FGLTFJsonAnimation *)0x0;
  }
  else {
    local_18[0] = param_3;
    TSet<UAnimSequence_const_*,DefaultKeyFuncs<UAnimSequence_const_*,0>,FDefaultSetAllocator>::
    Emplace<UAnimSequence_const_*_const_&>
              ((TSet<UAnimSequence_const_*,DefaultKeyFuncs<UAnimSequence_const_*,0>,FDefaultSetAllocator>
                *)&this->_padding_,&local_res10,(bool *)local_18);
    pFVar1 = TGLTFConverter<FGLTFJsonAnimation_*,FGLTFJsonNode_*,USkeletalMesh_const_*,UAnimSequence_const_*>
             ::GetOrAdd((this->AnimationConverter).Ptr,param_1,param_2,param_3);
  }
  return pFVar1;
}

// AddUniqueAnimation @ 14e5e0070

FGLTFJsonAnimation * __thiscall
FGLTFConvertBuilder::AddUniqueAnimation
          (FGLTFConvertBuilder *this,FGLTFJsonNode *param_1,USkeletalMeshComponent *param_2)

{
  FGLTFJsonAnimation *pFVar1;
  
  if ((param_1 != (FGLTFJsonNode *)0x0) && (param_2 != (USkeletalMeshComponent *)0x0)) {
    pFVar1 = TGLTFConverter<FGLTFJsonAnimation_*,FGLTFJsonNode_*,USkeletalMeshComponent_const_*>::
             GetOrAdd((this->AnimationDataConverter).Ptr,param_1,param_2);
    return pFVar1;
  }
  return (FGLTFJsonAnimation *)0x0;
}

// AddUniqueAnimation @ 14e5e0090

FGLTFJsonAnimation * __thiscall
FGLTFConvertBuilder::AddUniqueAnimation(FGLTFConvertBuilder *this,ALevelSequenceActor *param_1)

{
  longlong lVar1;
  TGLTFConverter<FGLTFJsonAnimation_*,ALevelSequenceActor_const_*> *pTVar2;
  int iVar3;
  TGLTFConverter<FGLTFJsonAnimation_*,ALevelSequenceActor_const_*> *this_00;
  undefined8 *puVar4;
  uint uVar5;
  undefined1 *puVar6;
  TGLTFConverter<FGLTFJsonAnimation_*,ALevelSequenceActor_const_*> *local_res10;
  ALevelSequenceActor *local_res18;
  FGLTFJsonAnimation *local_res20;
  ALevelSequenceActor *local_48;
  ALevelSequenceActor **local_40;
  FGLTFJsonAnimation **local_38;
  
  if (param_1 == (ALevelSequenceActor *)0x0) {
    return (FGLTFJsonAnimation *)0x0;
  }
  pTVar2 = (this->LevelSequenceDataConverter).Ptr;
  local_res18 = param_1;
  (**(code **)(pTVar2->_padding_ + 8))(pTVar2,&local_res18);
  local_48 = local_res18;
  uVar5 = ((uint)((ulonglong)local_res18 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_res18 >> 4)) *
          -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  uVar5 = uVar5 >> 0x10 ^ uVar5;
  if (*(int *)&(pTVar2->CachedOutputs).field_0x8 != *(int *)&(pTVar2->CachedOutputs).field_0x34) {
    puVar6 = *(undefined1 **)&(pTVar2->CachedOutputs).field_0x40;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &(pTVar2->CachedOutputs).field_0x38;
    }
    iVar3 = *(int *)(puVar6 + (ulonglong)(*(int *)&(pTVar2->CachedOutputs).field_0x48 - 1U & uVar5)
                              * 4);
    if (iVar3 != -1) {
      do {
        lVar1 = *(longlong *)&pTVar2->CachedOutputs + (longlong)iVar3 * 0x18;
        if (*(ALevelSequenceActor **)(*(longlong *)&pTVar2->CachedOutputs + (longlong)iVar3 * 0x18)
            == local_res18) {
          puVar4 = (undefined8 *)(lVar1 + 8);
          if (lVar1 == 0) {
            puVar4 = (undefined8 *)0x0;
          }
          if (puVar4 != (undefined8 *)0x0) {
            return (FGLTFJsonAnimation *)*puVar4;
          }
          break;
        }
        iVar3 = *(int *)(lVar1 + 0x10);
      } while (iVar3 != -1);
    }
  }
  local_res10 = pTVar2;
  this_00 = UE::Core::Private::
            DereferenceIfNecessary<TGLTFConverter<FGLTFJsonAnimation_*,ALevelSequenceActor_const_*>,TGLTFConverter<FGLTFJsonAnimation_*,ALevelSequenceActor_const_*>_*>
                      (&local_res10);
  local_res20 = (FGLTFJsonAnimation *)
                TGLTFConverter<FGLTFJsonAnimation*___ptr64,ALevelSequenceActor_const*___ptr64>::
                _vcall__16__flat______
                          ((TGLTFConverter<FGLTFJsonAnimation*___ptr64,ALevelSequenceActor_const*___ptr64>
                            *)this_00);
  local_40 = &local_48;
  local_38 = &local_res20;
  TSet<TTuple<TTuple<ALevelSequenceActor_const_*>,FGLTFJsonAnimation_*>,TDefaultMapHashableKeyFuncs<TTuple<ALevelSequenceActor_const_*>,FGLTFJsonAnimation_*,0>,FDefaultSetAllocator>
  ::
  EmplaceByHash<TPairInitializer<TTuple<ALevelSequenceActor_const_*>_&&,FGLTFJsonAnimation_*_const_&>_>
            ((TSet<TTuple<TTuple<ALevelSequenceActor_const_*>,FGLTFJsonAnimation_*>,TDefaultMapHashableKeyFuncs<TTuple<ALevelSequenceActor_const_*>,FGLTFJsonAnimation_*,0>,FDefaultSetAllocator>
              *)&pTVar2->CachedOutputs,(uint)&local_res10,
             (TPairInitializer<TTuple<ALevelSequenceActor_const_*>_&&,FGLTFJsonAnimation_*_const_&>
              *)(ulonglong)uVar5,(bool *)&local_40);
  return local_res20;
}

// AddUniqueAnimation @ 14e5e0210

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FGLTFJsonAnimation * __thiscall
FGLTFConvertBuilder::AddUniqueAnimation
          (FGLTFConvertBuilder *this,ULevel *param_1,ULevelSequence *param_2)

{
  FGLTFJsonAnimation *pFVar1;
  ULevelSequence *local_res10;
  ULevelSequence *local_res20;
  
  if ((param_1 != (ULevel *)0x0) && (param_2 != (ULevelSequence *)0x0)) {
    local_res20 = param_2;
    TSet<ULevelSequence_const_*,DefaultKeyFuncs<ULevelSequence_const_*,0>,FDefaultSetAllocator>::
    Emplace<ULevelSequence_const_*_const_&>
              ((TSet<ULevelSequence_const_*,DefaultKeyFuncs<ULevelSequence_const_*,0>,FDefaultSetAllocator>
                *)&this->_padding_,&local_res10,(bool *)&local_res20);
    pFVar1 = TGLTFConverter<FGLTFJsonAnimation_*,ULevel_const_*,ULevelSequence_const_*>::GetOrAdd
                       ((this->LevelSequenceConverter).Ptr,param_1,param_2);
    return pFVar1;
  }
  return (FGLTFJsonAnimation *)0x0;
}

// AddUniqueCamera @ 14e5e0290

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

FGLTFJsonCamera * __thiscall
FGLTFConvertBuilder::AddUniqueCamera(FGLTFConvertBuilder *this,UCameraComponent *param_1)

{
  longlong lVar1;
  UCameraComponent *pUVar2;
  int iVar3;
  TGLTFConverter<FGLTFJsonCamera_*,UCameraComponent_const_*> *this_00;
  undefined8 *puVar4;
  uint uVar5;
  longlong *plVar6;
  UCameraComponent *local_res10;
  UCameraComponent *local_res18;
  FGLTFJsonCamera *local_res20;
  UCameraComponent *local_48;
  UCameraComponent **local_40;
  FGLTFJsonCamera **local_38;
  
  if (param_1 == (UCameraComponent *)0x0) {
    return (FGLTFJsonCamera *)0x0;
  }
  local_res18 = param_1;
  TSet<UCameraComponent_const_*,DefaultKeyFuncs<UCameraComponent_const_*,0>,FDefaultSetAllocator>::
  Emplace<UCameraComponent_const_*_const_&>
            ((TSet<UCameraComponent_const_*,DefaultKeyFuncs<UCameraComponent_const_*,0>,FDefaultSetAllocator>
              *)&this->_padding_,&local_res10,(bool *)&local_res18);
  pUVar2 = (UCameraComponent *)(this->CameraConverter).Ptr;
  local_res18 = param_1;
  (**(code **)(pUVar2->_padding_ + 8))(pUVar2,&local_res18);
  local_48 = local_res18;
  uVar5 = ((uint)((ulonglong)local_res18 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_res18 >> 4)) *
          -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  uVar5 = uVar5 >> 0x10 ^ uVar5;
  if ((int)pUVar2->_padding_ != *(int *)((longlong)&pUVar2->_padding_ + 4)) {
    plVar6 = (longlong *)pUVar2->_padding_;
    if ((longlong *)pUVar2->_padding_ == (longlong *)0x0) {
      plVar6 = &pUVar2->_padding_;
    }
    iVar3 = *(int *)((longlong)plVar6 + (ulonglong)((int)pUVar2->_padding_ - 1U & uVar5) * 4);
    if (iVar3 != -1) {
      do {
        lVar1 = *(longlong *)&pUVar2->_padding_ + (longlong)iVar3 * 0x18;
        if (*(UCameraComponent **)(*(longlong *)&pUVar2->_padding_ + (longlong)iVar3 * 0x18) ==
            local_res18) {
          puVar4 = (undefined8 *)(lVar1 + 8);
          if (lVar1 == 0) {
            puVar4 = (undefined8 *)0x0;
          }
          if (puVar4 != (undefined8 *)0x0) {
            return (FGLTFJsonCamera *)*puVar4;
          }
          break;
        }
        iVar3 = *(int *)(lVar1 + 0x10);
      } while (iVar3 != -1);
    }
  }
  local_res10 = pUVar2;
  this_00 = UE::Core::Private::
            DereferenceIfNecessary<TGLTFConverter<FGLTFJsonCamera_*,UCameraComponent_const_*>,TGLTFConverter<FGLTFJsonCamera_*,UCameraComponent_const_*>_*>
                      ((TGLTFConverter<FGLTFJsonCamera_*,UCameraComponent_const_*> **)&local_res10);
  local_res20 = (FGLTFJsonCamera *)
                TGLTFConverter<FGLTFJsonCamera*___ptr64,UCameraComponent_const*___ptr64>::
                _vcall__16__flat______
                          ((TGLTFConverter<FGLTFJsonCamera*___ptr64,UCameraComponent_const*___ptr64>
                            *)this_00);
  local_40 = &local_48;
  local_38 = &local_res20;
  TSet<TTuple<TTuple<UCameraComponent_const_*>,FGLTFJsonCamera_*>,TDefaultMapHashableKeyFuncs<TTuple<UCameraComponent_const_*>,FGLTFJsonCamera_*,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TPairInitializer<TTuple<UCameraComponent_const_*>_&&,FGLTFJsonCamera_*_const_&>_>
            ((TSet<TTuple<TTuple<UCameraComponent_const_*>,FGLTFJsonCamera_*>,TDefaultMapHashableKeyFuncs<TTuple<UCameraComponent_const_*>,FGLTFJsonCamera_*,0>,FDefaultSetAllocator>
              *)&pUVar2->_padding_,(uint)&local_res10,
             (TPairInitializer<TTuple<UCameraComponent_const_*>_&&,FGLTFJsonCamera_*_const_&> *)
             (ulonglong)uVar5,(bool *)&local_40);
  return local_res20;
}

// AddUniqueColorAccessor @ 14e5e0430

FGLTFJsonAccessor * __thiscall
FGLTFConvertBuilder::AddUniqueColorAccessor
          (FGLTFConvertBuilder *this,FMeshAttributesArray<FColor> *param_1)

{
  TGLTFConverter<FGLTFJsonAccessor_*,FMeshAttributesArray<FColor>_> *this_00;
  FMeshAttributesArray<FColor> *pFVar1;
  FGLTFJsonAccessor *pFVar2;
  FMeshAttributesArray<FColor> local_18;
  
  this_00 = (this->ColorBufferConverterRaw).Ptr;
  pFVar1 = FMeshAttributesArray<FColor>::FMeshAttributesArray<FColor>(&local_18,param_1);
  pFVar2 = TGLTFConverter<FGLTFJsonAccessor_*,FMeshAttributesArray<FColor>_>::GetOrAdd
                     (this_00,pFVar1);
  return pFVar2;
}

// AddUniqueColorAccessor @ 14e5e0460

FGLTFJsonAccessor * __thiscall
FGLTFConvertBuilder::AddUniqueColorAccessor
          (FGLTFConvertBuilder *this,FGLTFMeshSection *param_1,FColorVertexBuffer *param_2)

{
  FGLTFJsonAccessor *pFVar1;
  
  if (param_2 == (FColorVertexBuffer *)0x0) {
    return (FGLTFJsonAccessor *)0x0;
  }
  pFVar1 = TGLTFConverter<FGLTFJsonAccessor_*,FGLTFMeshSection_const_*,FColorVertexBuffer_const_*>::
           GetOrAdd((this->ColorBufferConverter).Ptr,param_1,param_2);
  return pFVar1;
}

// AddUniqueImage @ 14e5e0480

FGLTFJsonImage * __thiscall
FGLTFConvertBuilder::AddUniqueImage
          (FGLTFConvertBuilder *this,
          TGLTFSharedArray<FColor,TArray<FColor,TSizedDefaultAllocator<32>_>,1> *param_1,
          TIntPoint<int> param_2,bool param_3,FString *param_4)

{
  TGLTFConverter<FGLTFJsonImage_*,TGLTFSuperfluous<FString>,bool,UE::Math::TIntPoint<int>,TGLTFSharedArray<FColor,TArray<FColor,TSizedDefaultAllocator<32>_>,1>_>
  *this_00;
  FGLTFJsonImage *pFVar1;
  TGLTFSharedArray<FColor,TArray<FColor,TSizedDefaultAllocator<32>_>,1> local_28;
  FString local_18;
  
  local_28._0_8_ = *(undefined8 *)param_1;
  this_00 = (this->ImageConverter).Ptr;
  local_28._8_8_ = *(undefined8 *)&param_1->field_0x8;
  if (local_28._8_8_ != 0) {
    LOCK();
    *(int *)(local_28._8_8_ + 8) = *(int *)(local_28._8_8_ + 8) + 1;
    UNLOCK();
  }
  ::FString::FString(&local_18,param_4);
  pFVar1 = TGLTFConverter<FGLTFJsonImage_*,TGLTFSuperfluous<FString>,bool,UE::Math::TIntPoint<int>,TGLTFSharedArray<FColor,TArray<FColor,TSizedDefaultAllocator<32>_>,1>_>
           ::GetOrAdd(this_00,(TGLTFSuperfluous<FString> *)&local_18,param_3,param_2,&local_28);
  return pFVar1;
}

// AddUniqueIndexAccessor @ 14e5e0500

FGLTFJsonAccessor * __thiscall
FGLTFConvertBuilder::AddUniqueIndexAccessor
          (FGLTFConvertBuilder *this,FMeshAttributesArray<int> *param_1,FString *param_2)

{
  TGLTFConverter<FGLTFJsonAccessor_*,FMeshAttributesArray<int>,FString> *this_00;
  FString *pFVar1;
  FMeshAttributesArray<int> *pFVar2;
  FGLTFJsonAccessor *pFVar3;
  FString local_28;
  FMeshAttributesArray<int> local_18;
  
  this_00 = (this->IndexBufferConverterRaw).Ptr;
  pFVar1 = ::FString::FString(&local_28,param_2);
  pFVar2 = FMeshAttributesArray<int>::FMeshAttributesArray<int>(&local_18,param_1);
  pFVar3 = TGLTFConverter<FGLTFJsonAccessor_*,FMeshAttributesArray<int>,FString>::GetOrAdd
                     (this_00,pFVar2,pFVar1);
  return pFVar3;
}

// AddUniqueIndexAccessor @ 14e5e0560

FGLTFJsonAccessor * __thiscall
FGLTFConvertBuilder::AddUniqueIndexAccessor(FGLTFConvertBuilder *this,FGLTFMeshSection *param_1)

{
  longlong lVar1;
  TGLTFConverter<FGLTFJsonAccessor_*,FGLTFMeshSection_const_*> *pTVar2;
  int iVar3;
  TGLTFConverter<FGLTFJsonAccessor_*,FGLTFMeshSection_const_*> *this_00;
  undefined8 *puVar4;
  uint uVar5;
  undefined1 *puVar6;
  TGLTFConverter<FGLTFJsonAccessor_*,FGLTFMeshSection_const_*> *local_res10;
  FGLTFMeshSection *local_res18;
  FGLTFJsonAccessor *local_res20;
  FGLTFMeshSection *local_48;
  FGLTFMeshSection **local_40;
  FGLTFJsonAccessor **local_38;
  
  if (param_1 == (FGLTFMeshSection *)0x0) {
    return (FGLTFJsonAccessor *)0x0;
  }
  pTVar2 = (this->IndexBufferConverter).Ptr;
  local_res18 = param_1;
  (**(code **)(pTVar2->_padding_ + 8))(pTVar2,&local_res18);
  local_48 = local_res18;
  uVar5 = ((uint)((ulonglong)local_res18 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_res18 >> 4)) *
          -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  uVar5 = uVar5 >> 0x10 ^ uVar5;
  if (*(int *)&(pTVar2->CachedOutputs).field_0x8 != *(int *)&(pTVar2->CachedOutputs).field_0x34) {
    puVar6 = *(undefined1 **)&(pTVar2->CachedOutputs).field_0x40;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &(pTVar2->CachedOutputs).field_0x38;
    }
    iVar3 = *(int *)(puVar6 + (ulonglong)(*(int *)&(pTVar2->CachedOutputs).field_0x48 - 1U & uVar5)
                              * 4);
    if (iVar3 != -1) {
      do {
        lVar1 = *(longlong *)&pTVar2->CachedOutputs + (longlong)iVar3 * 0x18;
        if (*(FGLTFMeshSection **)(*(longlong *)&pTVar2->CachedOutputs + (longlong)iVar3 * 0x18) ==
            local_res18) {
          puVar4 = (undefined8 *)(lVar1 + 8);
          if (lVar1 == 0) {
            puVar4 = (undefined8 *)0x0;
          }
          if (puVar4 != (undefined8 *)0x0) {
            return (FGLTFJsonAccessor *)*puVar4;
          }
          break;
        }
        iVar3 = *(int *)(lVar1 + 0x10);
      } while (iVar3 != -1);
    }
  }
  local_res10 = pTVar2;
  this_00 = UE::Core::Private::
            DereferenceIfNecessary<TGLTFConverter<FGLTFJsonAccessor_*,FGLTFMeshSection_const_*>,TGLTFConverter<FGLTFJsonAccessor_*,FGLTFMeshSection_const_*>_*>
                      (&local_res10);
  local_res20 = (FGLTFJsonAccessor *)
                TGLTFConverter<FGLTFJsonAccessor*___ptr64,FGLTFMeshSection_const*___ptr64>::
                _vcall__16__flat______
                          ((TGLTFConverter<FGLTFJsonAccessor*___ptr64,FGLTFMeshSection_const*___ptr64>
                            *)this_00);
  local_40 = &local_48;
  local_38 = &local_res20;
  TSet<TTuple<TTuple<FGLTFMeshSection_const_*>,FGLTFJsonAccessor_*>,TDefaultMapHashableKeyFuncs<TTuple<FGLTFMeshSection_const_*>,FGLTFJsonAccessor_*,0>,FDefaultSetAllocator>
  ::
  EmplaceByHash<TPairInitializer<TTuple<FGLTFMeshSection_const_*>_&&,FGLTFJsonAccessor_*_const_&>_>
            ((TSet<TTuple<TTuple<FGLTFMeshSection_const_*>,FGLTFJsonAccessor_*>,TDefaultMapHashableKeyFuncs<TTuple<FGLTFMeshSection_const_*>,FGLTFJsonAccessor_*,0>,FDefaultSetAllocator>
              *)&pTVar2->CachedOutputs,(uint)&local_res10,
             (TPairInitializer<TTuple<FGLTFMeshSection_const_*>_&&,FGLTFJsonAccessor_*_const_&> *)
             (ulonglong)uVar5,(bool *)&local_40);
  return local_res20;
}

// AddUniqueJointAccessor @ 14e5e06e0

FGLTFJsonAccessor * __thiscall
FGLTFConvertBuilder::AddUniqueJointAccessor
          (FGLTFConvertBuilder *this,
          FMeshAttributesArray<UE::Math::TIntVector4<unsigned_short>_> *param_1)

{
  TGLTFConverter<FGLTFJsonAccessor_*,FMeshAttributesArray<UE::Math::TIntVector4<unsigned_short>_>_>
  *this_00;
  FMeshAttributesArray<UE::Math::TIntVector4<unsigned_short>_> *pFVar1;
  FGLTFJsonAccessor *pFVar2;
  FMeshAttributesArray<UE::Math::TIntVector4<unsigned_short>_> local_18;
  
  this_00 = (this->BoneIndexBufferConverterRaw).Ptr;
  pFVar1 = FMeshAttributesArray<UE::Math::TIntVector4<unsigned_short>_>::
           FMeshAttributesArray<UE::Math::TIntVector4<unsigned_short>_>(&local_18,param_1);
  pFVar2 = TGLTFConverter<FGLTFJsonAccessor_*,FMeshAttributesArray<UE::Math::TIntVector4<unsigned_short>_>_>
           ::GetOrAdd(this_00,pFVar1);
  return pFVar2;
}

// AddUniqueJointAccessor @ 14e5e0710

FGLTFJsonAccessor * __thiscall
FGLTFConvertBuilder::AddUniqueJointAccessor
          (FGLTFConvertBuilder *this,FGLTFMeshSection *param_1,FSkinWeightVertexBuffer *param_2,
          int param_3)

{
  FGLTFJsonAccessor *pFVar1;
  
  if (param_2 == (FSkinWeightVertexBuffer *)0x0) {
    return (FGLTFJsonAccessor *)0x0;
  }
  pFVar1 = TGLTFConverter<FGLTFJsonAccessor_*,FGLTFMeshSection_const_*,FSkinWeightVertexBuffer_const_*,unsigned_int>
           ::GetOrAdd((this->BoneIndexBufferConverter).Ptr,param_1,param_2,param_3);
  return pFVar1;
}

// AddUniqueLight @ 14e5e0730

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

FGLTFJsonLight * __thiscall
FGLTFConvertBuilder::AddUniqueLight(FGLTFConvertBuilder *this,ULightComponent *param_1)

{
  longlong lVar1;
  ULightComponent *pUVar2;
  int iVar3;
  TGLTFConverter<FGLTFJsonLight_*,ULightComponent_const_*> *this_00;
  undefined8 *puVar4;
  uint uVar5;
  longlong *plVar6;
  ULightComponent *local_res10;
  ULightComponent *local_res18;
  FGLTFJsonLight *local_res20;
  ULightComponent *local_48;
  ULightComponent **local_40;
  FGLTFJsonLight **local_38;
  
  if (param_1 == (ULightComponent *)0x0) {
    return (FGLTFJsonLight *)0x0;
  }
  local_res18 = param_1;
  TSet<ULightComponent_const_*,DefaultKeyFuncs<ULightComponent_const_*,0>,FDefaultSetAllocator>::
  Emplace<ULightComponent_const_*_const_&>
            ((TSet<ULightComponent_const_*,DefaultKeyFuncs<ULightComponent_const_*,0>,FDefaultSetAllocator>
              *)&this->_padding_,&local_res10,(bool *)&local_res18);
  pUVar2 = (ULightComponent *)(this->LightConverter).Ptr;
  local_res18 = param_1;
  (**(code **)(pUVar2->_padding_ + 8))(pUVar2,&local_res18);
  local_48 = local_res18;
  uVar5 = ((uint)((ulonglong)local_res18 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_res18 >> 4)) *
          -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  uVar5 = uVar5 >> 0x10 ^ uVar5;
  if ((int)pUVar2->_padding_ != *(int *)((longlong)&pUVar2->_padding_ + 4)) {
    plVar6 = (longlong *)pUVar2->_padding_;
    if ((longlong *)pUVar2->_padding_ == (longlong *)0x0) {
      plVar6 = &pUVar2->_padding_;
    }
    iVar3 = *(int *)((longlong)plVar6 + (ulonglong)((int)pUVar2->_padding_ - 1U & uVar5) * 4);
    if (iVar3 != -1) {
      do {
        lVar1 = *(longlong *)&pUVar2->_padding_ + (longlong)iVar3 * 0x18;
        if (*(ULightComponent **)(*(longlong *)&pUVar2->_padding_ + (longlong)iVar3 * 0x18) ==
            local_res18) {
          puVar4 = (undefined8 *)(lVar1 + 8);
          if (lVar1 == 0) {
            puVar4 = (undefined8 *)0x0;
          }
          if (puVar4 != (undefined8 *)0x0) {
            return (FGLTFJsonLight *)*puVar4;
          }
          break;
        }
        iVar3 = *(int *)(lVar1 + 0x10);
      } while (iVar3 != -1);
    }
  }
  local_res10 = pUVar2;
  this_00 = UE::Core::Private::
            DereferenceIfNecessary<TGLTFConverter<FGLTFJsonLight_*,ULightComponent_const_*>,TGLTFConverter<FGLTFJsonLight_*,ULightComponent_const_*>_*>
                      ((TGLTFConverter<FGLTFJsonLight_*,ULightComponent_const_*> **)&local_res10);
  local_res20 = (FGLTFJsonLight *)
                TGLTFConverter<FGLTFJsonLight*___ptr64,ULightComponent_const*___ptr64>::
                _vcall__16__flat______
                          ((TGLTFConverter<FGLTFJsonLight*___ptr64,ULightComponent_const*___ptr64> *
                           )this_00);
  local_40 = &local_48;
  local_38 = &local_res20;
  TSet<TTuple<TTuple<ULightComponent_const_*>,FGLTFJsonLight_*>,TDefaultMapHashableKeyFuncs<TTuple<ULightComponent_const_*>,FGLTFJsonLight_*,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TPairInitializer<TTuple<ULightComponent_const_*>_&&,FGLTFJsonLight_*_const_&>_>
            ((TSet<TTuple<TTuple<ULightComponent_const_*>,FGLTFJsonLight_*>,TDefaultMapHashableKeyFuncs<TTuple<ULightComponent_const_*>,FGLTFJsonLight_*,0>,FDefaultSetAllocator>
              *)&pUVar2->_padding_,(uint)&local_res10,
             (TPairInitializer<TTuple<ULightComponent_const_*>_&&,FGLTFJsonLight_*_const_&> *)
             (ulonglong)uVar5,(bool *)&local_40);
  return local_res20;
}

// AddUniqueLightIES @ 14e5e08d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

FGLTFJsonLightIES * __thiscall
FGLTFConvertBuilder::AddUniqueLightIES(FGLTFConvertBuilder *this,ULightComponent *param_1)

{
  longlong lVar1;
  TGLTFConverter<FGLTFJsonLightIES_*,ULightComponent_const_*> *pTVar2;
  int iVar3;
  TGLTFConverter<FGLTFJsonLightIES_*,ULightComponent_const_*> *this_00;
  undefined8 *puVar4;
  uint uVar5;
  undefined1 *puVar6;
  TGLTFConverter<FGLTFJsonLightIES_*,ULightComponent_const_*> *local_res10;
  ULightComponent *local_res18;
  FGLTFJsonLightIES *local_res20;
  ULightComponent *local_48;
  ULightComponent **local_40;
  FGLTFJsonLightIES **local_38;
  
  if (param_1 == (ULightComponent *)0x0) {
    return (FGLTFJsonLightIES *)0x0;
  }
  pTVar2 = (this->LightIESConverter).Ptr;
  local_res18 = param_1;
  (**(code **)(pTVar2->_padding_ + 8))(pTVar2,&local_res18);
  local_48 = local_res18;
  uVar5 = ((uint)((ulonglong)local_res18 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_res18 >> 4)) *
          -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  uVar5 = uVar5 >> 0x10 ^ uVar5;
  if (*(int *)&(pTVar2->CachedOutputs).field_0x8 != *(int *)&(pTVar2->CachedOutputs).field_0x34) {
    puVar6 = *(undefined1 **)&(pTVar2->CachedOutputs).field_0x40;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &(pTVar2->CachedOutputs).field_0x38;
    }
    iVar3 = *(int *)(puVar6 + (ulonglong)(*(int *)&(pTVar2->CachedOutputs).field_0x48 - 1U & uVar5)
                              * 4);
    if (iVar3 != -1) {
      do {
        lVar1 = *(longlong *)&pTVar2->CachedOutputs + (longlong)iVar3 * 0x18;
        if (*(ULightComponent **)(*(longlong *)&pTVar2->CachedOutputs + (longlong)iVar3 * 0x18) ==
            local_res18) {
          puVar4 = (undefined8 *)(lVar1 + 8);
          if (lVar1 == 0) {
            puVar4 = (undefined8 *)0x0;
          }
          if (puVar4 != (undefined8 *)0x0) {
            return (FGLTFJsonLightIES *)*puVar4;
          }
          break;
        }
        iVar3 = *(int *)(lVar1 + 0x10);
      } while (iVar3 != -1);
    }
  }
  local_res10 = pTVar2;
  this_00 = UE::Core::Private::
            DereferenceIfNecessary<TGLTFConverter<FGLTFJsonLightIES_*,ULightComponent_const_*>,TGLTFConverter<FGLTFJsonLightIES_*,ULightComponent_const_*>_*>
                      (&local_res10);
  local_res20 = (FGLTFJsonLightIES *)
                TGLTFConverter<FGLTFJsonLightIES*___ptr64,ULightComponent_const*___ptr64>::
                _vcall__16__flat______
                          ((TGLTFConverter<FGLTFJsonLightIES*___ptr64,ULightComponent_const*___ptr64>
                            *)this_00);
  local_40 = &local_48;
  local_38 = &local_res20;
  TSet<TTuple<TTuple<ULightComponent_const_*>,FGLTFJsonLightIES_*>,TDefaultMapHashableKeyFuncs<TTuple<ULightComponent_const_*>,FGLTFJsonLightIES_*,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TPairInitializer<TTuple<ULightComponent_const_*>_&&,FGLTFJsonLightIES_*_const_&>_>
            ((TSet<TTuple<TTuple<ULightComponent_const_*>,FGLTFJsonLightIES_*>,TDefaultMapHashableKeyFuncs<TTuple<ULightComponent_const_*>,FGLTFJsonLightIES_*,0>,FDefaultSetAllocator>
              *)&pTVar2->CachedOutputs,(uint)&local_res10,
             (TPairInitializer<TTuple<ULightComponent_const_*>_&&,FGLTFJsonLightIES_*_const_&> *)
             (ulonglong)uVar5,(bool *)&local_40);
  return local_res20;
}

// AddUniqueLightIESInstance @ 14e5e0a50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

FGLTFJsonLightIESInstance * __thiscall
FGLTFConvertBuilder::AddUniqueLightIESInstance(FGLTFConvertBuilder *this,ULightComponent *param_1)

{
  longlong lVar1;
  FGLTFLightIESInstanceConverter *pFVar2;
  int iVar3;
  TGLTFConverter<FGLTFJsonLightIESInstance_*,ULightComponent_const_*> *this_00;
  undefined8 *puVar4;
  uint uVar5;
  undefined1 *puVar6;
  FGLTFLightIESInstanceConverter *local_res10;
  ULightComponent *local_res18;
  FGLTFJsonLightIESInstance *local_res20;
  ULightComponent *local_48;
  ULightComponent **local_40;
  FGLTFJsonLightIESInstance **local_38;
  
  if (param_1 == (ULightComponent *)0x0) {
    return (FGLTFJsonLightIESInstance *)0x0;
  }
  pFVar2 = (this->LightIESInstanceConverter).Ptr;
  local_res18 = param_1;
  (**(code **)(*(longlong *)pFVar2 + 8))(pFVar2,&local_res18);
  local_48 = local_res18;
  uVar5 = ((uint)((ulonglong)local_res18 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_res18 >> 4)) *
          -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  uVar5 = uVar5 >> 0x10 ^ uVar5;
  if (*(int *)&pFVar2->field_0x10 != *(int *)&pFVar2->field_0x3c) {
    puVar6 = *(undefined1 **)&pFVar2->field_0x48;
    if (*(undefined1 **)&pFVar2->field_0x48 == (undefined1 *)0x0) {
      puVar6 = &pFVar2->field_0x40;
    }
    iVar3 = *(int *)(puVar6 + (ulonglong)(*(int *)&pFVar2->field_0x50 - 1U & uVar5) * 4);
    if (iVar3 != -1) {
      do {
        lVar1 = *(longlong *)&pFVar2->field_0x8 + (longlong)iVar3 * 0x18;
        if (*(ULightComponent **)(*(longlong *)&pFVar2->field_0x8 + (longlong)iVar3 * 0x18) ==
            local_res18) {
          puVar4 = (undefined8 *)(lVar1 + 8);
          if (lVar1 == 0) {
            puVar4 = (undefined8 *)0x0;
          }
          if (puVar4 != (undefined8 *)0x0) {
            return (FGLTFJsonLightIESInstance *)*puVar4;
          }
          break;
        }
        iVar3 = *(int *)(lVar1 + 0x10);
      } while (iVar3 != -1);
    }
  }
  local_res10 = pFVar2;
  this_00 = UE::Core::Private::
            DereferenceIfNecessary<TGLTFConverter<FGLTFJsonLightIESInstance_*,ULightComponent_const_*>,TGLTFConverter<FGLTFJsonLightIESInstance_*,ULightComponent_const_*>_*>
                      ((TGLTFConverter<FGLTFJsonLightIESInstance_*,ULightComponent_const_*> **)
                       &local_res10);
  local_res20 = (FGLTFJsonLightIESInstance *)
                TGLTFConverter<FGLTFJsonLightIESInstance*___ptr64,ULightComponent_const*___ptr64>::
                _vcall__16__flat______
                          ((TGLTFConverter<FGLTFJsonLightIESInstance*___ptr64,ULightComponent_const*___ptr64>
                            *)this_00);
  local_40 = &local_48;
  local_38 = &local_res20;
  TSet<TTuple<TTuple<ULightComponent_const_*>,FGLTFJsonLightIESInstance_*>,TDefaultMapHashableKeyFuncs<TTuple<ULightComponent_const_*>,FGLTFJsonLightIESInstance_*,0>,FDefaultSetAllocator>
  ::
  EmplaceByHash<TPairInitializer<TTuple<ULightComponent_const_*>_&&,FGLTFJsonLightIESInstance_*_const_&>_>
            ((TSet<TTuple<TTuple<ULightComponent_const_*>,FGLTFJsonLightIESInstance_*>,TDefaultMapHashableKeyFuncs<TTuple<ULightComponent_const_*>,FGLTFJsonLightIESInstance_*,0>,FDefaultSetAllocator>
              *)&pFVar2->field_0x8,(uint)&local_res10,
             (TPairInitializer<TTuple<ULightComponent_const_*>_&&,FGLTFJsonLightIESInstance_*_const_&>
              *)(ulonglong)uVar5,(bool *)&local_40);
  return local_res20;
}

// AddUniqueLightMap @ 14e5e0bd0

FGLTFJsonLightMap * __thiscall
FGLTFConvertBuilder::AddUniqueLightMap(FGLTFConvertBuilder *this,UStaticMeshComponent *param_1)

{
  longlong lVar1;
  TGLTFConverter<FGLTFJsonLightMap_*,UStaticMeshComponent_const_*> *pTVar2;
  int iVar3;
  TGLTFConverter<FGLTFJsonLightMap_*,UStaticMeshComponent_const_*> *this_00;
  undefined8 *puVar4;
  uint uVar5;
  undefined1 *puVar6;
  TGLTFConverter<FGLTFJsonLightMap_*,UStaticMeshComponent_const_*> *local_res10;
  UStaticMeshComponent *local_res18;
  FGLTFJsonLightMap *local_res20;
  UStaticMeshComponent *local_48;
  UStaticMeshComponent **local_40;
  FGLTFJsonLightMap **local_38;
  
  if (param_1 == (UStaticMeshComponent *)0x0) {
    return (FGLTFJsonLightMap *)0x0;
  }
  pTVar2 = (this->LightMapConverter).Ptr;
  local_res18 = param_1;
  (**(code **)(pTVar2->_padding_ + 8))(pTVar2,&local_res18);
  local_48 = local_res18;
  uVar5 = ((uint)((ulonglong)local_res18 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_res18 >> 4)) *
          -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  uVar5 = uVar5 >> 0x10 ^ uVar5;
  if (*(int *)&(pTVar2->CachedOutputs).field_0x8 != *(int *)&(pTVar2->CachedOutputs).field_0x34) {
    puVar6 = *(undefined1 **)&(pTVar2->CachedOutputs).field_0x40;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &(pTVar2->CachedOutputs).field_0x38;
    }
    iVar3 = *(int *)(puVar6 + (ulonglong)(*(int *)&(pTVar2->CachedOutputs).field_0x48 - 1U & uVar5)
                              * 4);
    if (iVar3 != -1) {
      do {
        lVar1 = *(longlong *)&pTVar2->CachedOutputs + (longlong)iVar3 * 0x18;
        if (*(UStaticMeshComponent **)(*(longlong *)&pTVar2->CachedOutputs + (longlong)iVar3 * 0x18)
            == local_res18) {
          puVar4 = (undefined8 *)(lVar1 + 8);
          if (lVar1 == 0) {
            puVar4 = (undefined8 *)0x0;
          }
          if (puVar4 != (undefined8 *)0x0) {
            return (FGLTFJsonLightMap *)*puVar4;
          }
          break;
        }
        iVar3 = *(int *)(lVar1 + 0x10);
      } while (iVar3 != -1);
    }
  }
  local_res10 = pTVar2;
  this_00 = UE::Core::Private::
            DereferenceIfNecessary<TGLTFConverter<FGLTFJsonLightMap_*,UStaticMeshComponent_const_*>,TGLTFConverter<FGLTFJsonLightMap_*,UStaticMeshComponent_const_*>_*>
                      (&local_res10);
  local_res20 = (FGLTFJsonLightMap *)
                TGLTFConverter<FGLTFJsonLightMap*___ptr64,UStaticMeshComponent_const*___ptr64>::
                _vcall__16__flat______
                          ((TGLTFConverter<FGLTFJsonLightMap*___ptr64,UStaticMeshComponent_const*___ptr64>
                            *)this_00);
  local_40 = &local_48;
  local_38 = &local_res20;
  TSet<TTuple<TTuple<UStaticMeshComponent_const_*>,FGLTFJsonLightMap_*>,TDefaultMapHashableKeyFuncs<TTuple<UStaticMeshComponent_const_*>,FGLTFJsonLightMap_*,0>,FDefaultSetAllocator>
  ::
  EmplaceByHash<TPairInitializer<TTuple<UStaticMeshComponent_const_*>_&&,FGLTFJsonLightMap_*_const_&>_>
            ((TSet<TTuple<TTuple<UStaticMeshComponent_const_*>,FGLTFJsonLightMap_*>,TDefaultMapHashableKeyFuncs<TTuple<UStaticMeshComponent_const_*>,FGLTFJsonLightMap_*,0>,FDefaultSetAllocator>
              *)&pTVar2->CachedOutputs,(uint)&local_res10,
             (TPairInitializer<TTuple<UStaticMeshComponent_const_*>_&&,FGLTFJsonLightMap_*_const_&>
              *)(ulonglong)uVar5,(bool *)&local_40);
  return local_res20;
}

// AddUniqueMaterial @ 14e5e0d50

FGLTFJsonMaterial * __thiscall
FGLTFConvertBuilder::AddUniqueMaterial
          (FGLTFConvertBuilder *this,UMaterialInterface *param_1,FGLTFMeshData *param_2,
          FMeshAttributesArray<int> *param_3)

{
  TGLTFConverter<FGLTFJsonMaterial_*,UMaterialInterface_const_*,FGLTFMeshData_const_*,FMeshAttributesArray<int>_>
  *this_00;
  FMeshAttributesArray<int> *pFVar1;
  FGLTFJsonMaterial *pFVar2;
  UMaterialInterface *local_res10;
  UMaterialInterface *local_18 [2];
  
  if (param_1 == (UMaterialInterface *)0x0) {
    pFVar2 = (FGLTFJsonMaterial *)0x0;
  }
  else {
    local_18[0] = param_1;
    TSet<UMaterialInterface_const_*,DefaultKeyFuncs<UMaterialInterface_const_*,0>,FDefaultSetAllocator>
    ::Emplace<UMaterialInterface_const_*_const_&>
              ((TSet<UMaterialInterface_const_*,DefaultKeyFuncs<UMaterialInterface_const_*,0>,FDefaultSetAllocator>
                *)&this->_padding_,&local_res10,(bool *)local_18);
    this_00 = (this->MaterialConverter).Ptr;
    pFVar1 = FMeshAttributesArray<int>::FMeshAttributesArray<int>
                       ((FMeshAttributesArray<int> *)local_18,param_3);
    pFVar2 = TGLTFConverter<FGLTFJsonMaterial_*,UMaterialInterface_const_*,FGLTFMeshData_const_*,FMeshAttributesArray<int>_>
             ::GetOrAdd(this_00,param_1,param_2,pFVar1);
  }
  return pFVar2;
}

// AddUniqueMaterial @ 14e5e0de0

/* WARNING: Type propagation algorithm not settling */

FGLTFJsonMaterial * __thiscall
FGLTFConvertBuilder::AddUniqueMaterial
          (FGLTFConvertBuilder *this,UMaterialInterface *param_1,UMeshComponent *param_2,int param_3
          ,int param_4)

{
  int iVar1;
  UStaticMesh *this_00;
  TGLTFConverter<FGLTFJsonMaterial_*,UMaterialInterface_const_*,FGLTFMeshData_const_*,FMeshAttributesArray<int>_>
  *pTVar2;
  void *pvVar3;
  UClass *pUVar4;
  FGLTFMeshData *pFVar5;
  FStaticMeshLODResources *pFVar6;
  FGLTFJsonMaterial *pFVar7;
  USkeletalMesh *pUVar8;
  FSkeletalMeshLODRenderData *pFVar9;
  longlong lVar10;
  USkeletalMesh *local_res18;
  FMeshAttributesArray<int> local_48;
  void *local_38;
  undefined8 local_30;
  
  if (param_2 != (UMeshComponent *)0x0) {
    pUVar4 = Z_Construct_UClass_UStaticMeshComponent_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(param_2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar4->_padding_)) {
      this_00 = (UStaticMesh *)param_2[1]._padding_;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this_00 != (UStaticMesh *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this_00);
      }
      local_48._0_8_ = this_00;
      TSet<UStaticMesh_const_*,DefaultKeyFuncs<UStaticMesh_const_*,0>,FDefaultSetAllocator>::
      Emplace<UStaticMesh_const_*_const_&>
                ((TSet<UStaticMesh_const_*,DefaultKeyFuncs<UStaticMesh_const_*,0>,FDefaultSetAllocator>
                  *)&this->_padding_,(UStaticMesh **)&local_res18,(bool *)&local_48);
      pFVar5 = TGLTFConverter<FGLTFMeshData_const_*,UStaticMesh_const_*,UStaticMeshComponent_const_*,int>
               ::GetOrAdd((this->StaticMeshDataConverter).Ptr,this_00,
                          (UStaticMeshComponent *)param_2,param_3);
      pFVar7 = (FGLTFJsonMaterial *)0x0;
      if (this_00 == (UStaticMesh *)0x0) {
        local_30 = 0;
        local_38 = (void *)0x0;
      }
      else {
        pFVar6 = UStaticMesh::GetLODForExport(this_00,pFVar5->LODIndex);
        FGLTFMeshUtilities::GetSectionIndices((FMeshAttributesArray<int> *)&local_38,pFVar6,param_4)
        ;
      }
      if (param_1 != (UMaterialInterface *)0x0) {
        local_48._0_8_ = param_1;
        TSet<UMaterialInterface_const_*,DefaultKeyFuncs<UMaterialInterface_const_*,0>,FDefaultSetAllocator>
        ::Emplace<UMaterialInterface_const_*_const_&>
                  ((TSet<UMaterialInterface_const_*,DefaultKeyFuncs<UMaterialInterface_const_*,0>,FDefaultSetAllocator>
                    *)&this->_padding_,(UMaterialInterface **)&local_res18,(bool *)&local_48);
        pvVar3 = local_38;
        lVar10 = (longlong)(int)local_30;
        pTVar2 = (this->MaterialConverter).Ptr;
        local_48._0_8_ = (UStaticMesh *)0x0;
        local_48._8_4_ = (int)local_30;
        if ((int)local_30 == 0) {
          local_48._12_4_ = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,(int)local_30,0,(ForAnyElementType *)&local_48,(int)local_30,
                     (int *)((longlong)&local_48 + 0xc));
          memcpy((void *)local_48._0_8_,pvVar3,lVar10 << 2);
        }
        pFVar7 = TGLTFConverter<FGLTFJsonMaterial_*,UMaterialInterface_const_*,FGLTFMeshData_const_*,FMeshAttributesArray<int>_>
                 ::GetOrAdd(pTVar2,param_1,pFVar5,&local_48);
      }
      if (local_38 == (void *)0x0) {
        return pFVar7;
      }
      FMemory::Free(local_38);
      return pFVar7;
    }
  }
  if (param_2 != (UMeshComponent *)0x0) {
    pUVar4 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(param_2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar4->_padding_)) {
      pUVar8 = USkeletalMeshComponent::GetSkeletalMeshAsset((USkeletalMeshComponent *)param_2);
      local_48._0_8_ = pUVar8;
      TSet<USkeletalMesh_const_*,DefaultKeyFuncs<USkeletalMesh_const_*,0>,FDefaultSetAllocator>::
      Emplace<USkeletalMesh_const_*_const_&>
                ((TSet<USkeletalMesh_const_*,DefaultKeyFuncs<USkeletalMesh_const_*,0>,FDefaultSetAllocator>
                  *)&this->_padding_,&local_res18,(bool *)&local_48);
      pFVar5 = TGLTFConverter<FGLTFMeshData_const_*,USkeletalMesh_const_*,USkeletalMeshComponent_const_*,int>
               ::GetOrAdd((this->SkeletalMeshDataConverter).Ptr,pUVar8,
                          (USkeletalMeshComponent *)param_2,param_3);
      pFVar7 = (FGLTFJsonMaterial *)0x0;
      if (pUVar8 == (USkeletalMesh *)0x0) {
        local_30 = 0;
        local_38 = (void *)0x0;
      }
      else {
        pFVar9 = FGLTFMeshUtilities::GetRenderData(pUVar8,pFVar5->LODIndex);
        FGLTFMeshUtilities::GetSectionIndices((FMeshAttributesArray<int> *)&local_38,pFVar9,param_4)
        ;
      }
      if (param_1 != (UMaterialInterface *)0x0) {
        local_48._0_8_ = param_1;
        TSet<UMaterialInterface_const_*,DefaultKeyFuncs<UMaterialInterface_const_*,0>,FDefaultSetAllocator>
        ::Emplace<UMaterialInterface_const_*_const_&>
                  ((TSet<UMaterialInterface_const_*,DefaultKeyFuncs<UMaterialInterface_const_*,0>,FDefaultSetAllocator>
                    *)&this->_padding_,(UMaterialInterface **)&local_res18,(bool *)&local_48);
        pvVar3 = local_38;
        lVar10 = (longlong)(int)local_30;
        pTVar2 = (this->MaterialConverter).Ptr;
        local_48._0_8_ = (USkeletalMesh *)0x0;
        local_48._8_4_ = (int)local_30;
        if ((int)local_30 == 0) {
          local_48._12_4_ = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,(int)local_30,0,(ForAnyElementType *)&local_48,(int)local_30,
                     (int *)((longlong)&local_48 + 0xc));
          memcpy((void *)local_48._0_8_,pvVar3,lVar10 << 2);
        }
        pFVar7 = TGLTFConverter<FGLTFJsonMaterial_*,UMaterialInterface_const_*,FGLTFMeshData_const_*,FMeshAttributesArray<int>_>
                 ::GetOrAdd(pTVar2,param_1,pFVar5,&local_48);
      }
      if (local_38 == (void *)0x0) {
        return pFVar7;
      }
      FMemory::Free(local_38);
      return pFVar7;
    }
  }
  return (FGLTFJsonMaterial *)0x0;
}

// AddUniqueMaterial @ 14e5e10f0

/* WARNING: Type propagation algorithm not settling */

FGLTFJsonMaterial * __thiscall
FGLTFConvertBuilder::AddUniqueMaterial
          (FGLTFConvertBuilder *this,UMaterialInterface *param_1,USkeletalMesh *param_2,int param_3,
          int param_4)

{
  TGLTFConverter<FGLTFJsonMaterial_*,UMaterialInterface_const_*,FGLTFMeshData_const_*,FMeshAttributesArray<int>_>
  *this_00;
  void *_Src;
  FGLTFMeshData *pFVar1;
  FSkeletalMeshLODRenderData *pFVar2;
  FGLTFJsonMaterial *pFVar3;
  longlong lVar4;
  USkeletalMesh *local_res8;
  USkeletalMesh *local_res10;
  void *local_48;
  undefined8 local_40;
  FMeshAttributesArray<int> local_38;
  
  local_res10 = param_2;
  TSet<USkeletalMesh_const_*,DefaultKeyFuncs<USkeletalMesh_const_*,0>,FDefaultSetAllocator>::
  Emplace<USkeletalMesh_const_*_const_&>
            ((TSet<USkeletalMesh_const_*,DefaultKeyFuncs<USkeletalMesh_const_*,0>,FDefaultSetAllocator>
              *)&this->_padding_,&local_res8,(bool *)&local_res10);
  pFVar1 = TGLTFConverter<FGLTFMeshData_const_*,USkeletalMesh_const_*,USkeletalMeshComponent_const_*,int>
           ::GetOrAdd((this->SkeletalMeshDataConverter).Ptr,param_2,(USkeletalMeshComponent *)0x0,
                      param_3);
  pFVar3 = (FGLTFJsonMaterial *)0x0;
  if (param_2 == (USkeletalMesh *)0x0) {
    local_48 = (void *)0x0;
    local_40 = 0;
  }
  else {
    pFVar2 = FGLTFMeshUtilities::GetRenderData(param_2,pFVar1->LODIndex);
    FGLTFMeshUtilities::GetSectionIndices((FMeshAttributesArray<int> *)&local_48,pFVar2,param_4);
  }
  if (param_1 != (UMaterialInterface *)0x0) {
    local_res10 = (USkeletalMesh *)param_1;
    TSet<UMaterialInterface_const_*,DefaultKeyFuncs<UMaterialInterface_const_*,0>,FDefaultSetAllocator>
    ::Emplace<UMaterialInterface_const_*_const_&>
              ((TSet<UMaterialInterface_const_*,DefaultKeyFuncs<UMaterialInterface_const_*,0>,FDefaultSetAllocator>
                *)&this->_padding_,(UMaterialInterface **)&local_res8,(bool *)&local_res10);
    _Src = local_48;
    this_00 = (this->MaterialConverter).Ptr;
    lVar4 = (longlong)(int)local_40;
    local_38._0_8_ = (FScriptContainerElement *)0x0;
    local_38._8_4_ = (int)local_40;
    if ((int)local_40 == 0) {
      local_38._12_4_ = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,(int)local_40,0,(ForAnyElementType *)&local_38,(int)local_40,
                 (int *)&local_38.field_0xc);
      memcpy((void *)local_38._0_8_,_Src,lVar4 << 2);
    }
    pFVar3 = TGLTFConverter<FGLTFJsonMaterial_*,UMaterialInterface_const_*,FGLTFMeshData_const_*,FMeshAttributesArray<int>_>
             ::GetOrAdd(this_00,param_1,pFVar1,&local_38);
  }
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  return pFVar3;
}

// AddUniqueMaterial @ 14e5e1270

/* WARNING: Type propagation algorithm not settling */

FGLTFJsonMaterial * __thiscall
FGLTFConvertBuilder::AddUniqueMaterial
          (FGLTFConvertBuilder *this,UMaterialInterface *param_1,USkeletalMeshComponent *param_2,
          int param_3,int param_4)

{
  TGLTFConverter<FGLTFJsonMaterial_*,UMaterialInterface_const_*,FGLTFMeshData_const_*,FMeshAttributesArray<int>_>
  *this_00;
  void *_Src;
  USkeletalMesh *pUVar1;
  FGLTFMeshData *pFVar2;
  FSkeletalMeshLODRenderData *pFVar3;
  FGLTFJsonMaterial *pFVar4;
  longlong lVar5;
  USkeletalMesh *local_res8;
  USkeletalMesh *local_res10;
  void *local_48;
  undefined8 local_40;
  FMeshAttributesArray<int> local_38;
  
  pUVar1 = USkeletalMeshComponent::GetSkeletalMeshAsset(param_2);
  local_res10 = pUVar1;
  TSet<USkeletalMesh_const_*,DefaultKeyFuncs<USkeletalMesh_const_*,0>,FDefaultSetAllocator>::
  Emplace<USkeletalMesh_const_*_const_&>
            ((TSet<USkeletalMesh_const_*,DefaultKeyFuncs<USkeletalMesh_const_*,0>,FDefaultSetAllocator>
              *)&this->_padding_,&local_res8,(bool *)&local_res10);
  pFVar2 = TGLTFConverter<FGLTFMeshData_const_*,USkeletalMesh_const_*,USkeletalMeshComponent_const_*,int>
           ::GetOrAdd((this->SkeletalMeshDataConverter).Ptr,pUVar1,param_2,param_3);
  pFVar4 = (FGLTFJsonMaterial *)0x0;
  if (pUVar1 == (USkeletalMesh *)0x0) {
    local_48 = (void *)0x0;
    local_40 = 0;
  }
  else {
    pFVar3 = FGLTFMeshUtilities::GetRenderData(pUVar1,pFVar2->LODIndex);
    FGLTFMeshUtilities::GetSectionIndices((FMeshAttributesArray<int> *)&local_48,pFVar3,param_4);
  }
  if (param_1 != (UMaterialInterface *)0x0) {
    local_res10 = (USkeletalMesh *)param_1;
    TSet<UMaterialInterface_const_*,DefaultKeyFuncs<UMaterialInterface_const_*,0>,FDefaultSetAllocator>
    ::Emplace<UMaterialInterface_const_*_const_&>
              ((TSet<UMaterialInterface_const_*,DefaultKeyFuncs<UMaterialInterface_const_*,0>,FDefaultSetAllocator>
                *)&this->_padding_,(UMaterialInterface **)&local_res8,(bool *)&local_res10);
    _Src = local_48;
    lVar5 = (longlong)(int)local_40;
    this_00 = (this->MaterialConverter).Ptr;
    local_38._0_8_ = (FScriptContainerElement *)0x0;
    local_38._8_4_ = (int)local_40;
    if ((int)local_40 == 0) {
      local_38._12_4_ = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,(int)local_40,0,(ForAnyElementType *)&local_38,(int)local_40,
                 (int *)&local_38.field_0xc);
      memcpy((void *)local_38._0_8_,_Src,lVar5 << 2);
    }
    pFVar4 = TGLTFConverter<FGLTFJsonMaterial_*,UMaterialInterface_const_*,FGLTFMeshData_const_*,FMeshAttributesArray<int>_>
             ::GetOrAdd(this_00,param_1,pFVar2,&local_38);
  }
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  return pFVar4;
}

// AddUniqueMaterial @ 14e5e13f0

/* WARNING: Type propagation algorithm not settling */

FGLTFJsonMaterial * __thiscall
FGLTFConvertBuilder::AddUniqueMaterial
          (FGLTFConvertBuilder *this,UMaterialInterface *param_1,UStaticMesh *param_2,int param_3,
          int param_4)

{
  TGLTFConverter<FGLTFJsonMaterial_*,UMaterialInterface_const_*,FGLTFMeshData_const_*,FMeshAttributesArray<int>_>
  *this_00;
  void *_Src;
  FGLTFMeshData *pFVar1;
  FStaticMeshLODResources *pFVar2;
  FGLTFJsonMaterial *pFVar3;
  longlong lVar4;
  UStaticMesh *local_res8;
  UStaticMesh *local_res10;
  void *local_48;
  undefined8 local_40;
  FMeshAttributesArray<int> local_38;
  
  local_res10 = param_2;
  TSet<UStaticMesh_const_*,DefaultKeyFuncs<UStaticMesh_const_*,0>,FDefaultSetAllocator>::
  Emplace<UStaticMesh_const_*_const_&>
            ((TSet<UStaticMesh_const_*,DefaultKeyFuncs<UStaticMesh_const_*,0>,FDefaultSetAllocator>
              *)&this->_padding_,&local_res8,(bool *)&local_res10);
  pFVar1 = TGLTFConverter<FGLTFMeshData_const_*,UStaticMesh_const_*,UStaticMeshComponent_const_*,int>
           ::GetOrAdd((this->StaticMeshDataConverter).Ptr,param_2,(UStaticMeshComponent *)0x0,
                      param_3);
  pFVar3 = (FGLTFJsonMaterial *)0x0;
  if (param_2 == (UStaticMesh *)0x0) {
    local_48 = (void *)0x0;
    local_40 = 0;
  }
  else {
    pFVar2 = UStaticMesh::GetLODForExport(param_2,pFVar1->LODIndex);
    FGLTFMeshUtilities::GetSectionIndices((FMeshAttributesArray<int> *)&local_48,pFVar2,param_4);
  }
  if (param_1 != (UMaterialInterface *)0x0) {
    local_res10 = (UStaticMesh *)param_1;
    TSet<UMaterialInterface_const_*,DefaultKeyFuncs<UMaterialInterface_const_*,0>,FDefaultSetAllocator>
    ::Emplace<UMaterialInterface_const_*_const_&>
              ((TSet<UMaterialInterface_const_*,DefaultKeyFuncs<UMaterialInterface_const_*,0>,FDefaultSetAllocator>
                *)&this->_padding_,(UMaterialInterface **)&local_res8,(bool *)&local_res10);
    _Src = local_48;
    this_00 = (this->MaterialConverter).Ptr;
    lVar4 = (longlong)(int)local_40;
    local_38._0_8_ = (FScriptContainerElement *)0x0;
    local_38._8_4_ = (int)local_40;
    if ((int)local_40 == 0) {
      local_38._12_4_ = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,(int)local_40,0,(ForAnyElementType *)&local_38,(int)local_40,
                 (int *)&local_38.field_0xc);
      memcpy((void *)local_38._0_8_,_Src,lVar4 << 2);
    }
    pFVar3 = TGLTFConverter<FGLTFJsonMaterial_*,UMaterialInterface_const_*,FGLTFMeshData_const_*,FMeshAttributesArray<int>_>
             ::GetOrAdd(this_00,param_1,pFVar1,&local_38);
  }
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  return pFVar3;
}

// AddUniqueMaterial @ 14e5e1570

/* WARNING: Type propagation algorithm not settling */

FGLTFJsonMaterial * __thiscall
FGLTFConvertBuilder::AddUniqueMaterial
          (FGLTFConvertBuilder *this,UMaterialInterface *param_1,UStaticMeshComponent *param_2,
          int param_3,int param_4)

{
  TObjectPtr<UStaticMesh>_u_0 this_00;
  TGLTFConverter<FGLTFJsonMaterial_*,UMaterialInterface_const_*,FGLTFMeshData_const_*,FMeshAttributesArray<int>_>
  *this_01;
  void *_Src;
  FGLTFMeshData *pFVar1;
  FStaticMeshLODResources *pFVar2;
  FGLTFJsonMaterial *pFVar3;
  longlong lVar4;
  UStaticMesh *local_res8;
  TObjectPtr<UStaticMesh>_u_0 local_res10;
  void *local_48;
  undefined8 local_40;
  FMeshAttributesArray<int> local_38;
  
  this_00 = (TObjectPtr<UStaticMesh>_u_0)(param_2->StaticMesh).field0_0x0.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (this_00.DebugPtr != (UStaticMesh *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this_00.DebugPtr);
  }
  local_res10 = this_00;
  TSet<UStaticMesh_const_*,DefaultKeyFuncs<UStaticMesh_const_*,0>,FDefaultSetAllocator>::
  Emplace<UStaticMesh_const_*_const_&>
            ((TSet<UStaticMesh_const_*,DefaultKeyFuncs<UStaticMesh_const_*,0>,FDefaultSetAllocator>
              *)&this->_padding_,&local_res8,(bool *)&local_res10);
  pFVar1 = TGLTFConverter<FGLTFMeshData_const_*,UStaticMesh_const_*,UStaticMeshComponent_const_*,int>
           ::GetOrAdd((this->StaticMeshDataConverter).Ptr,this_00.DebugPtr,param_2,param_3);
  pFVar3 = (FGLTFJsonMaterial *)0x0;
  if (this_00.DebugPtr == (UStaticMesh *)0x0) {
    local_40 = 0;
    local_48 = (void *)0x0;
  }
  else {
    pFVar2 = UStaticMesh::GetLODForExport(this_00.DebugPtr,pFVar1->LODIndex);
    FGLTFMeshUtilities::GetSectionIndices((FMeshAttributesArray<int> *)&local_48,pFVar2,param_4);
  }
  if (param_1 != (UMaterialInterface *)0x0) {
    local_res10 = (TObjectPtr<UStaticMesh>_u_0)param_1;
    TSet<UMaterialInterface_const_*,DefaultKeyFuncs<UMaterialInterface_const_*,0>,FDefaultSetAllocator>
    ::Emplace<UMaterialInterface_const_*_const_&>
              ((TSet<UMaterialInterface_const_*,DefaultKeyFuncs<UMaterialInterface_const_*,0>,FDefaultSetAllocator>
                *)&this->_padding_,(UMaterialInterface **)&local_res8,(bool *)&local_res10);
    _Src = local_48;
    lVar4 = (longlong)(int)local_40;
    this_01 = (this->MaterialConverter).Ptr;
    local_38._0_8_ = (FScriptContainerElement *)0x0;
    local_38._8_4_ = (int)local_40;
    if ((int)local_40 == 0) {
      local_38._12_4_ = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,(int)local_40,0,(ForAnyElementType *)&local_38,(int)local_40,
                 (int *)&local_38.field_0xc);
      memcpy((void *)local_38._0_8_,_Src,lVar4 << 2);
    }
    pFVar3 = TGLTFConverter<FGLTFJsonMaterial_*,UMaterialInterface_const_*,FGLTFMeshData_const_*,FMeshAttributesArray<int>_>
             ::GetOrAdd(this_01,param_1,pFVar1,&local_38);
  }
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  return pFVar3;
}

// AddUniqueMaterialVariant @ 14e5e17b0

FGLTFJsonMaterialVariant * __thiscall
FGLTFConvertBuilder::AddUniqueMaterialVariant(FGLTFConvertBuilder *this,UVariant *param_1)

{
  longlong lVar1;
  TGLTFConverter<FGLTFJsonMaterialVariant_*,UVariant_const_*> *pTVar2;
  int iVar3;
  TGLTFConverter<FGLTFJsonMaterialVariant_*,UVariant_const_*> *this_00;
  undefined8 *puVar4;
  uint uVar5;
  undefined1 *puVar6;
  TGLTFConverter<FGLTFJsonMaterialVariant_*,UVariant_const_*> *local_res10;
  UVariant *local_res18;
  FGLTFJsonMaterialVariant *local_res20;
  UVariant *local_48;
  UVariant **local_40;
  FGLTFJsonMaterialVariant **local_38;
  
  if (param_1 == (UVariant *)0x0) {
    return (FGLTFJsonMaterialVariant *)0x0;
  }
  pTVar2 = (this->MaterialVariantConverter).Ptr;
  local_res18 = param_1;
  (**(code **)(pTVar2->_padding_ + 8))(pTVar2,&local_res18);
  local_48 = local_res18;
  uVar5 = ((uint)((ulonglong)local_res18 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_res18 >> 4)) *
          -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  uVar5 = uVar5 >> 0x10 ^ uVar5;
  if (*(int *)&(pTVar2->CachedOutputs).field_0x8 != *(int *)&(pTVar2->CachedOutputs).field_0x34) {
    puVar6 = *(undefined1 **)&(pTVar2->CachedOutputs).field_0x40;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &(pTVar2->CachedOutputs).field_0x38;
    }
    iVar3 = *(int *)(puVar6 + (ulonglong)(*(int *)&(pTVar2->CachedOutputs).field_0x48 - 1U & uVar5)
                              * 4);
    if (iVar3 != -1) {
      do {
        lVar1 = *(longlong *)&pTVar2->CachedOutputs + (longlong)iVar3 * 0x18;
        if (*(UVariant **)(*(longlong *)&pTVar2->CachedOutputs + (longlong)iVar3 * 0x18) ==
            local_res18) {
          puVar4 = (undefined8 *)(lVar1 + 8);
          if (lVar1 == 0) {
            puVar4 = (undefined8 *)0x0;
          }
          if (puVar4 != (undefined8 *)0x0) {
            return (FGLTFJsonMaterialVariant *)*puVar4;
          }
          break;
        }
        iVar3 = *(int *)(lVar1 + 0x10);
      } while (iVar3 != -1);
    }
  }
  local_res10 = pTVar2;
  this_00 = UE::Core::Private::
            DereferenceIfNecessary<TGLTFConverter<FGLTFJsonMaterialVariant_*,UVariant_const_*>,TGLTFConverter<FGLTFJsonMaterialVariant_*,UVariant_const_*>_*>
                      (&local_res10);
  local_res20 = (FGLTFJsonMaterialVariant *)
                TGLTFConverter<FGLTFJsonMaterialVariant*___ptr64,UVariant_const*___ptr64>::
                _vcall__16__flat______
                          ((TGLTFConverter<FGLTFJsonMaterialVariant*___ptr64,UVariant_const*___ptr64>
                            *)this_00);
  local_40 = &local_48;
  local_38 = &local_res20;
  TSet<TTuple<TTuple<UVariant_const_*>,FGLTFJsonMaterialVariant_*>,TDefaultMapHashableKeyFuncs<TTuple<UVariant_const_*>,FGLTFJsonMaterialVariant_*,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TPairInitializer<TTuple<UVariant_const_*>_&&,FGLTFJsonMaterialVariant_*_const_&>_>
            ((TSet<TTuple<TTuple<UVariant_const_*>,FGLTFJsonMaterialVariant_*>,TDefaultMapHashableKeyFuncs<TTuple<UVariant_const_*>,FGLTFJsonMaterialVariant_*,0>,FDefaultSetAllocator>
              *)&pTVar2->CachedOutputs,(uint)&local_res10,
             (TPairInitializer<TTuple<UVariant_const_*>_&&,FGLTFJsonMaterialVariant_*_const_&> *)
             (ulonglong)uVar5,(bool *)&local_40);
  return local_res20;
}

// AddUniqueMesh @ 14e5e1930

FGLTFJsonMesh * __thiscall
FGLTFConvertBuilder::AddUniqueMesh
          (FGLTFConvertBuilder *this,ULandscapeComponent *param_1,UMaterialInterface *param_2)

{
  FGLTFJsonMesh *pFVar1;
  ULandscapeComponent *local_res10;
  ULandscapeComponent *local_res20;
  
  if (param_1 == (ULandscapeComponent *)0x0) {
    return (FGLTFJsonMesh *)0x0;
  }
  local_res20 = param_1;
  TSet<ULandscapeComponent_const_*,DefaultKeyFuncs<ULandscapeComponent_const_*,0>,FDefaultSetAllocator>
  ::Emplace<ULandscapeComponent_const_*_const_&>
            ((TSet<ULandscapeComponent_const_*,DefaultKeyFuncs<ULandscapeComponent_const_*,0>,FDefaultSetAllocator>
              *)&this->_padding_,&local_res10,(bool *)&local_res20);
  pFVar1 = TGLTFConverter<FGLTFJsonMesh_*,ULandscapeComponent_const_*,UMaterialInterface_const_*>::
           GetOrAdd((this->LandscapeConverter).Ptr,param_1,param_2);
  return pFVar1;
}

// AddUniqueMesh @ 14e5e19b0

FGLTFJsonMesh * __thiscall
FGLTFConvertBuilder::AddUniqueMesh
          (FGLTFConvertBuilder *this,UMeshComponent *param_1,FGLTFMaterialArray *param_2,int param_3
          )

{
  int iVar1;
  UClass *pUVar2;
  FGLTFJsonMesh *pFVar3;
  
  if (param_1 != (UMeshComponent *)0x0) {
    pUVar2 = Z_Construct_UClass_UStaticMeshComponent_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar2->_padding_)) {
      pFVar3 = AddUniqueMesh(this,(UStaticMeshComponent *)param_1,param_2,param_3);
      return pFVar3;
    }
  }
  if (param_1 != (UMeshComponent *)0x0) {
    pUVar2 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar2->_padding_)) {
      pFVar3 = AddUniqueMesh(this,(USkeletalMeshComponent *)param_1,param_2,param_3);
      return pFVar3;
    }
  }
  return (FGLTFJsonMesh *)0x0;
}

// AddUniqueMesh @ 14e5e1a70

FGLTFJsonMesh * __thiscall
FGLTFConvertBuilder::AddUniqueMesh
          (FGLTFConvertBuilder *this,USkeletalMesh *param_1,FGLTFMaterialArray *param_2,int param_3)

{
  TGLTFConverter<FGLTFJsonMesh_*,USkeletalMesh_const_*,USkeletalMeshComponent_const_*,FGLTFMaterialArray,int>
  *this_00;
  FGLTFMaterialArray *pFVar1;
  FGLTFJsonMesh *pFVar2;
  USkeletalMesh *local_res10;
  USkeletalMesh *local_18 [2];
  
  if (param_1 == (USkeletalMesh *)0x0) {
    pFVar2 = (FGLTFJsonMesh *)0x0;
  }
  else {
    local_18[0] = param_1;
    TSet<USkeletalMesh_const_*,DefaultKeyFuncs<USkeletalMesh_const_*,0>,FDefaultSetAllocator>::
    Emplace<USkeletalMesh_const_*_const_&>
              ((TSet<USkeletalMesh_const_*,DefaultKeyFuncs<USkeletalMesh_const_*,0>,FDefaultSetAllocator>
                *)&this->_padding_,&local_res10,(bool *)local_18);
    this_00 = (this->SkeletalMeshConverter).Ptr;
    pFVar1 = FGLTFMaterialArray::FGLTFMaterialArray((FGLTFMaterialArray *)local_18,param_2);
    pFVar2 = TGLTFConverter<FGLTFJsonMesh_*,USkeletalMesh_const_*,USkeletalMeshComponent_const_*,FGLTFMaterialArray,int>
             ::GetOrAdd(this_00,param_1,(USkeletalMeshComponent *)0x0,pFVar1,param_3);
  }
  return pFVar2;
}

// AddUniqueMesh @ 14e5e1b00

FGLTFJsonMesh * __thiscall
FGLTFConvertBuilder::AddUniqueMesh
          (FGLTFConvertBuilder *this,USkeletalMeshComponent *param_1,FGLTFMaterialArray *param_2,
          int param_3)

{
  TGLTFConverter<FGLTFJsonMesh_*,USkeletalMesh_const_*,USkeletalMeshComponent_const_*,FGLTFMaterialArray,int>
  *this_00;
  USkeletalMesh *pUVar1;
  FGLTFMaterialArray *pFVar2;
  FGLTFJsonMesh *pFVar3;
  USkeletalMesh *local_res10;
  USkeletalMesh *local_28 [2];
  
  if ((param_1 != (USkeletalMeshComponent *)0x0) &&
     (pUVar1 = USkeletalMeshComponent::GetSkeletalMeshAsset(param_1), pUVar1 != (USkeletalMesh *)0x0
     )) {
    local_28[0] = pUVar1;
    TSet<USkeletalMesh_const_*,DefaultKeyFuncs<USkeletalMesh_const_*,0>,FDefaultSetAllocator>::
    Emplace<USkeletalMesh_const_*_const_&>
              ((TSet<USkeletalMesh_const_*,DefaultKeyFuncs<USkeletalMesh_const_*,0>,FDefaultSetAllocator>
                *)&this->_padding_,&local_res10,(bool *)local_28);
    this_00 = (this->SkeletalMeshConverter).Ptr;
    pFVar2 = FGLTFMaterialArray::FGLTFMaterialArray((FGLTFMaterialArray *)local_28,param_2);
    pFVar3 = TGLTFConverter<FGLTFJsonMesh_*,USkeletalMesh_const_*,USkeletalMeshComponent_const_*,FGLTFMaterialArray,int>
             ::GetOrAdd(this_00,pUVar1,param_1,pFVar2,param_3);
    return pFVar3;
  }
  return (FGLTFJsonMesh *)0x0;
}

// AddUniqueMesh @ 14e5e1ba0

FGLTFJsonMesh * __thiscall
FGLTFConvertBuilder::AddUniqueMesh
          (FGLTFConvertBuilder *this,USplineMeshComponent *param_1,FGLTFMaterialArray *param_2,
          int param_3)

{
  UStaticMesh *pUVar1;
  TGLTFConverter<FGLTFJsonMesh_*,UStaticMesh_const_*,USplineMeshComponent_const_*,FGLTFMaterialArray,int>
  *this_00;
  FGLTFMaterialArray *pFVar2;
  FGLTFJsonMesh *pFVar3;
  UStaticMesh *local_res10;
  UStaticMesh *local_28 [2];
  
  if (param_1 == (USplineMeshComponent *)0x0) {
LAB_14e5e1c30:
    pFVar3 = (FGLTFJsonMesh *)0x0;
  }
  else {
    pUVar1 = (UStaticMesh *)param_1->_padding_;
    if (UE::GC::GIsIncrementalReachabilityPending) {
      if (pUVar1 == (UStaticMesh *)0x0) goto LAB_14e5e1c30;
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    else if (pUVar1 == (UStaticMesh *)0x0) goto LAB_14e5e1c30;
    local_28[0] = pUVar1;
    TSet<UStaticMesh_const_*,DefaultKeyFuncs<UStaticMesh_const_*,0>,FDefaultSetAllocator>::
    Emplace<UStaticMesh_const_*_const_&>
              ((TSet<UStaticMesh_const_*,DefaultKeyFuncs<UStaticMesh_const_*,0>,FDefaultSetAllocator>
                *)&this->_padding_,&local_res10,(bool *)local_28);
    this_00 = (this->SplineMeshConverter).Ptr;
    pFVar2 = FGLTFMaterialArray::FGLTFMaterialArray((FGLTFMaterialArray *)local_28,param_2);
    pFVar3 = TGLTFConverter<FGLTFJsonMesh_*,UStaticMesh_const_*,USplineMeshComponent_const_*,FGLTFMaterialArray,int>
             ::GetOrAdd(this_00,pUVar1,param_1,pFVar2,param_3);
  }
  return pFVar3;
}

// AddUniqueMesh @ 14e5e1c50

FGLTFJsonMesh * __thiscall
FGLTFConvertBuilder::AddUniqueMesh
          (FGLTFConvertBuilder *this,UStaticMesh *param_1,FGLTFMaterialArray *param_2,int param_3)

{
  TGLTFConverter<FGLTFJsonMesh_*,UStaticMesh_const_*,UStaticMeshComponent_const_*,FGLTFMaterialArray,int>
  *this_00;
  FGLTFMaterialArray *pFVar1;
  FGLTFJsonMesh *pFVar2;
  UStaticMesh *local_res10;
  UStaticMesh *local_18 [2];
  
  if (param_1 == (UStaticMesh *)0x0) {
    pFVar2 = (FGLTFJsonMesh *)0x0;
  }
  else {
    local_18[0] = param_1;
    TSet<UStaticMesh_const_*,DefaultKeyFuncs<UStaticMesh_const_*,0>,FDefaultSetAllocator>::
    Emplace<UStaticMesh_const_*_const_&>
              ((TSet<UStaticMesh_const_*,DefaultKeyFuncs<UStaticMesh_const_*,0>,FDefaultSetAllocator>
                *)&this->_padding_,&local_res10,(bool *)local_18);
    this_00 = (this->StaticMeshConverter).Ptr;
    pFVar1 = FGLTFMaterialArray::FGLTFMaterialArray((FGLTFMaterialArray *)local_18,param_2);
    pFVar2 = TGLTFConverter<FGLTFJsonMesh_*,UStaticMesh_const_*,UStaticMeshComponent_const_*,FGLTFMaterialArray,int>
             ::GetOrAdd(this_00,param_1,(UStaticMeshComponent *)0x0,pFVar1,param_3);
  }
  return pFVar2;
}

// AddUniqueMesh @ 14e5e1ce0

FGLTFJsonMesh * __thiscall
FGLTFConvertBuilder::AddUniqueMesh
          (FGLTFConvertBuilder *this,UStaticMeshComponent *param_1,FGLTFMaterialArray *param_2,
          int param_3)

{
  TObjectPtr<UStaticMesh>_u_0 TVar1;
  TGLTFConverter<FGLTFJsonMesh_*,UStaticMesh_const_*,UStaticMeshComponent_const_*,FGLTFMaterialArray,int>
  *this_00;
  FGLTFMaterialArray *pFVar2;
  FGLTFJsonMesh *pFVar3;
  UStaticMesh *local_res10;
  TObjectPtr<UStaticMesh>_u_0 local_28 [2];
  
  if (param_1 == (UStaticMeshComponent *)0x0) {
LAB_14e5e1d70:
    pFVar3 = (FGLTFJsonMesh *)0x0;
  }
  else {
    TVar1 = (TObjectPtr<UStaticMesh>_u_0)(param_1->StaticMesh).field0_0x0.DebugPtr;
    if (UE::GC::GIsIncrementalReachabilityPending) {
      if (TVar1.DebugPtr == (UStaticMesh *)0x0) goto LAB_14e5e1d70;
      UE::GC::MarkAsReachable((UObject *)TVar1.DebugPtr);
    }
    else if (TVar1.DebugPtr == (UStaticMesh *)0x0) goto LAB_14e5e1d70;
    local_28[0] = TVar1;
    TSet<UStaticMesh_const_*,DefaultKeyFuncs<UStaticMesh_const_*,0>,FDefaultSetAllocator>::
    Emplace<UStaticMesh_const_*_const_&>
              ((TSet<UStaticMesh_const_*,DefaultKeyFuncs<UStaticMesh_const_*,0>,FDefaultSetAllocator>
                *)&this->_padding_,&local_res10,(bool *)local_28);
    this_00 = (this->StaticMeshConverter).Ptr;
    pFVar2 = FGLTFMaterialArray::FGLTFMaterialArray
                       ((FGLTFMaterialArray *)&local_28[0].ObjectPtr,param_2);
    pFVar3 = TGLTFConverter<FGLTFJsonMesh_*,UStaticMesh_const_*,UStaticMeshComponent_const_*,FGLTFMaterialArray,int>
             ::GetOrAdd(this_00,TVar1.DebugPtr,param_1,pFVar2,param_3);
  }
  return pFVar3;
}

// AddUniqueMeshData @ 14e5e1d90

FGLTFMeshData * __thiscall
FGLTFConvertBuilder::AddUniqueMeshData
          (FGLTFConvertBuilder *this,USkeletalMesh *param_1,USkeletalMeshComponent *param_2,
          int param_3)

{
  FGLTFMeshData *pFVar1;
  USkeletalMesh *local_res8;
  USkeletalMesh *local_res10;
  
  local_res10 = param_1;
  TSet<USkeletalMesh_const_*,DefaultKeyFuncs<USkeletalMesh_const_*,0>,FDefaultSetAllocator>::
  Emplace<USkeletalMesh_const_*_const_&>
            ((TSet<USkeletalMesh_const_*,DefaultKeyFuncs<USkeletalMesh_const_*,0>,FDefaultSetAllocator>
              *)&this->_padding_,&local_res8,(bool *)&local_res10);
  pFVar1 = TGLTFConverter<FGLTFMeshData_const_*,USkeletalMesh_const_*,USkeletalMeshComponent_const_*,int>
           ::GetOrAdd((this->SkeletalMeshDataConverter).Ptr,param_1,param_2,param_3);
  return pFVar1;
}

// AddUniqueMeshData @ 14e5e1df0

FGLTFMeshData * __thiscall
FGLTFConvertBuilder::AddUniqueMeshData
          (FGLTFConvertBuilder *this,UStaticMesh *param_1,UStaticMeshComponent *param_2,int param_3)

{
  FGLTFMeshData *pFVar1;
  UStaticMesh *local_res8;
  UStaticMesh *local_res10;
  
  local_res10 = param_1;
  TSet<UStaticMesh_const_*,DefaultKeyFuncs<UStaticMesh_const_*,0>,FDefaultSetAllocator>::
  Emplace<UStaticMesh_const_*_const_&>
            ((TSet<UStaticMesh_const_*,DefaultKeyFuncs<UStaticMesh_const_*,0>,FDefaultSetAllocator>
              *)&this->_padding_,&local_res8,(bool *)&local_res10);
  pFVar1 = TGLTFConverter<FGLTFMeshData_const_*,UStaticMesh_const_*,UStaticMeshComponent_const_*,int>
           ::GetOrAdd((this->StaticMeshDataConverter).Ptr,param_1,param_2,param_3);
  return pFVar1;
}

// AddUniqueNode @ 14e5e1e50

FGLTFJsonNode * __thiscall
FGLTFConvertBuilder::AddUniqueNode
          (FGLTFConvertBuilder *this,FGLTFJsonNode *param_1,USkeletalMesh *param_2,int param_3)

{
  FGLTFJsonNode *pFVar1;
  
  if (((param_1 != (FGLTFJsonNode *)0x0) && (param_2 != (USkeletalMesh *)0x0)) && (param_3 != -1)) {
    pFVar1 = TGLTFConverter<FGLTFJsonNode_*,FGLTFJsonNode_*,USkeletalMesh_const_*,int>::GetOrAdd
                       ((this->SkeletalBoneConverter).Ptr,param_1,param_2,param_3);
    return pFVar1;
  }
  return (FGLTFJsonNode *)0x0;
}

// AddUniqueNode @ 14e5e1e80

FGLTFJsonNode * __thiscall
FGLTFConvertBuilder::AddUniqueNode
          (FGLTFConvertBuilder *this,FGLTFJsonNode *param_1,USkeletalMesh *param_2,FName param_3)

{
  FGLTFJsonNode *pFVar1;
  
  if (((param_1 != (FGLTFJsonNode *)0x0) && (param_2 != (USkeletalMesh *)0x0)) &&
     (param_3 != (FName)0x0)) {
    pFVar1 = TGLTFConverter<FGLTFJsonNode_*,FGLTFJsonNode_*,USkeletalMesh_const_*,FName>::GetOrAdd
                       ((this->SkeletalSocketConverter).Ptr,param_1,param_2,param_3);
    return pFVar1;
  }
  return (FGLTFJsonNode *)0x0;
}

// AddUniqueNode @ 14e5e1eb0

FGLTFJsonNode * __thiscall
FGLTFConvertBuilder::AddUniqueNode
          (FGLTFConvertBuilder *this,FGLTFJsonNode *param_1,UStaticMesh *param_2,FName param_3)

{
  FGLTFJsonNode *pFVar1;
  
  if (((param_1 != (FGLTFJsonNode *)0x0) && (param_2 != (UStaticMesh *)0x0)) &&
     (param_3 != (FName)0x0)) {
    pFVar1 = TGLTFConverter<FGLTFJsonNode_*,FGLTFJsonNode_*,UStaticMesh_const_*,FName>::GetOrAdd
                       ((this->StaticSocketConverter).Ptr,param_1,param_2,param_3);
    return pFVar1;
  }
  return (FGLTFJsonNode *)0x0;
}

// AddUniqueNode @ 14e5e1ee0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FGLTFJsonNode * __thiscall
FGLTFConvertBuilder::AddUniqueNode(FGLTFConvertBuilder *this,AActor *param_1)

{
  longlong lVar1;
  AActor *pAVar2;
  bool bVar3;
  int iVar4;
  TGLTFConverter<FGLTFJsonNode_*,AActor_const_*> *this_00;
  uint uVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  AActor *local_res10;
  AActor *local_res18;
  FGLTFJsonNode *local_res20;
  AActor *local_48;
  AActor **local_40;
  FGLTFJsonNode **local_38;
  
  if (param_1 == (AActor *)0x0) {
    return (FGLTFJsonNode *)0x0;
  }
  bVar3 = IsSelectedActor(this,param_1);
  if (bVar3) {
    local_res18 = param_1;
    TSet<AActor_const_*,DefaultKeyFuncs<AActor_const_*,0>,FDefaultSetAllocator>::
    Emplace<AActor_const_*_const_&>
              ((TSet<AActor_const_*,DefaultKeyFuncs<AActor_const_*,0>,FDefaultSetAllocator> *)
               &this->_padding_,&local_res10,(bool *)&local_res18);
  }
  pAVar2 = (AActor *)(this->ActorConverter).Ptr;
  local_res18 = param_1;
  (**(code **)(pAVar2->_padding_ + 8))(pAVar2,&local_res18);
  local_48 = local_res18;
  uVar5 = ((uint)((ulonglong)local_res18 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_res18 >> 4)) *
          -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  uVar5 = uVar5 >> 0x10 ^ uVar5;
  if ((int)pAVar2->_padding_ != *(int *)((longlong)&(pAVar2->PrimaryActorTick)._padding_ + 4)) {
    plVar7 = (longlong *)(pAVar2->PrimaryActorTick)._padding_;
    if (plVar7 == (longlong *)0x0) {
      plVar7 = &(pAVar2->PrimaryActorTick)._padding_;
    }
    iVar4 = *(int *)((longlong)plVar7 +
                    (ulonglong)(*(int *)&(pAVar2->PrimaryActorTick).Target - 1U & uVar5) * 4);
    if (iVar4 != -1) {
      do {
        lVar1 = *(longlong *)&pAVar2->_padding_ + (longlong)iVar4 * 0x18;
        if (*(AActor **)(*(longlong *)&pAVar2->_padding_ + (longlong)iVar4 * 0x18) == local_res18) {
          puVar6 = (undefined8 *)(lVar1 + 8);
          if (lVar1 == 0) {
            puVar6 = (undefined8 *)0x0;
          }
          if (puVar6 != (undefined8 *)0x0) {
            return (FGLTFJsonNode *)*puVar6;
          }
          break;
        }
        iVar4 = *(int *)(lVar1 + 0x10);
      } while (iVar4 != -1);
    }
  }
  local_res10 = pAVar2;
  this_00 = UE::Core::Private::
            DereferenceIfNecessary<TGLTFConverter<FGLTFJsonNode_*,AActor_const_*>,TGLTFConverter<FGLTFJsonNode_*,AActor_const_*>_*>
                      ((TGLTFConverter<FGLTFJsonNode_*,AActor_const_*> **)&local_res10);
  local_res20 = (FGLTFJsonNode *)
                TGLTFConverter<FGLTFJsonNode*___ptr64,AActor_const*___ptr64>::_vcall__16__flat______
                          ((TGLTFConverter<FGLTFJsonNode*___ptr64,AActor_const*___ptr64> *)this_00);
  local_40 = &local_48;
  local_38 = &local_res20;
  TSet<TTuple<TTuple<AActor_const_*>,FGLTFJsonNode_*>,TDefaultMapHashableKeyFuncs<TTuple<AActor_const_*>,FGLTFJsonNode_*,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TPairInitializer<TTuple<AActor_const_*>_&&,FGLTFJsonNode_*_const_&>_>
            ((TSet<TTuple<TTuple<AActor_const_*>,FGLTFJsonNode_*>,TDefaultMapHashableKeyFuncs<TTuple<AActor_const_*>,FGLTFJsonNode_*,0>,FDefaultSetAllocator>
              *)&pAVar2->_padding_,(uint)&local_res10,
             (TPairInitializer<TTuple<AActor_const_*>_&&,FGLTFJsonNode_*_const_&> *)(ulonglong)uVar5
             ,(bool *)&local_40);
  return local_res20;
}

// AddUniqueNode @ 14e5e2080

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FGLTFJsonNode * __thiscall
FGLTFConvertBuilder::AddUniqueNode(FGLTFConvertBuilder *this,USceneComponent *param_1)

{
  longlong lVar1;
  TGLTFConverter<FGLTFJsonNode_*,USceneComponent_const_*> *pTVar2;
  int iVar3;
  TGLTFConverter<FGLTFJsonNode_*,USceneComponent_const_*> *this_00;
  undefined8 *puVar4;
  uint uVar5;
  undefined1 *puVar6;
  TGLTFConverter<FGLTFJsonNode_*,USceneComponent_const_*> *local_res10;
  USceneComponent *local_res18;
  FGLTFJsonNode *local_res20;
  USceneComponent *local_48;
  USceneComponent **local_40;
  FGLTFJsonNode **local_38;
  
  if (param_1 == (USceneComponent *)0x0) {
    return (FGLTFJsonNode *)0x0;
  }
  pTVar2 = (this->ComponentConverter).Ptr;
  local_res18 = param_1;
  (**(code **)(pTVar2->_padding_ + 8))(pTVar2,&local_res18);
  local_48 = local_res18;
  uVar5 = ((uint)((ulonglong)local_res18 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_res18 >> 4)) *
          -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  uVar5 = uVar5 >> 0x10 ^ uVar5;
  if (*(int *)&(pTVar2->CachedOutputs).field_0x8 != *(int *)&(pTVar2->CachedOutputs).field_0x34) {
    puVar6 = *(undefined1 **)&(pTVar2->CachedOutputs).field_0x40;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &(pTVar2->CachedOutputs).field_0x38;
    }
    iVar3 = *(int *)(puVar6 + (ulonglong)(*(int *)&(pTVar2->CachedOutputs).field_0x48 - 1U & uVar5)
                              * 4);
    if (iVar3 != -1) {
      do {
        lVar1 = *(longlong *)&pTVar2->CachedOutputs + (longlong)iVar3 * 0x18;
        if (*(USceneComponent **)(*(longlong *)&pTVar2->CachedOutputs + (longlong)iVar3 * 0x18) ==
            local_res18) {
          puVar4 = (undefined8 *)(lVar1 + 8);
          if (lVar1 == 0) {
            puVar4 = (undefined8 *)0x0;
          }
          if (puVar4 != (undefined8 *)0x0) {
            return (FGLTFJsonNode *)*puVar4;
          }
          break;
        }
        iVar3 = *(int *)(lVar1 + 0x10);
      } while (iVar3 != -1);
    }
  }
  local_res10 = pTVar2;
  this_00 = UE::Core::Private::
            DereferenceIfNecessary<TGLTFConverter<FGLTFJsonNode_*,USceneComponent_const_*>,TGLTFConverter<FGLTFJsonNode_*,USceneComponent_const_*>_*>
                      (&local_res10);
  local_res20 = (FGLTFJsonNode *)
                TGLTFConverter<FGLTFJsonNode*___ptr64,USceneComponent_const*___ptr64>::
                _vcall__16__flat______
                          ((TGLTFConverter<FGLTFJsonNode*___ptr64,USceneComponent_const*___ptr64> *)
                           this_00);
  local_40 = &local_48;
  local_38 = &local_res20;
  TSet<TTuple<TTuple<USceneComponent_const_*>,FGLTFJsonNode_*>,TDefaultMapHashableKeyFuncs<TTuple<USceneComponent_const_*>,FGLTFJsonNode_*,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TPairInitializer<TTuple<USceneComponent_const_*>_&&,FGLTFJsonNode_*_const_&>_>
            ((TSet<TTuple<TTuple<USceneComponent_const_*>,FGLTFJsonNode_*>,TDefaultMapHashableKeyFuncs<TTuple<USceneComponent_const_*>,FGLTFJsonNode_*,0>,FDefaultSetAllocator>
              *)&pTVar2->CachedOutputs,(uint)&local_res10,
             (TPairInitializer<TTuple<USceneComponent_const_*>_&&,FGLTFJsonNode_*_const_&> *)
             (ulonglong)uVar5,(bool *)&local_40);
  return local_res20;
}

// AddUniqueNode @ 14e5e2200

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FGLTFJsonNode * __thiscall
FGLTFConvertBuilder::AddUniqueNode(FGLTFConvertBuilder *this,USceneComponent *param_1,FName param_2)

{
  FGLTFJsonNode *pFVar1;
  
  if (param_1 == (USceneComponent *)0x0) {
    return (FGLTFJsonNode *)0x0;
  }
  pFVar1 = TGLTFConverter<FGLTFJsonNode_*,USceneComponent_const_*,FName>::GetOrAdd
                     ((this->ComponentSocketConverter).Ptr,param_1,param_2);
  return pFVar1;
}

// AddUniqueNormalAccessor @ 14e5e2220

FGLTFJsonAccessor * __thiscall
FGLTFConvertBuilder::AddUniqueNormalAccessor
          (FGLTFConvertBuilder *this,FMeshAttributesArray<UE::Math::TVector<float>_> *param_1,
          bool *param_2)

{
  TMap<TTuple<FMeshAttributesArray<UE::Math::TVector<float>_>,bool>,FGLTFJsonAccessor_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FMeshAttributesArray<UE::Math::TVector<float>_>,bool>,FGLTFJsonAccessor_*,0>_>
  *this_00;
  longlong lVar1;
  uint uVar2;
  int iVar3;
  FMeshAttributesArray<UE::Math::TVector<float>_> *pFVar4;
  undefined8 *puVar5;
  TGLTFConverter<FGLTFJsonAccessor_*,FMeshAttributesArray<UE::Math::TVector<float>_>,bool> *pTVar6;
  FGLTFJsonAccessor *pFVar7;
  byte local_res8 [16];
  TGLTFConverter<FGLTFJsonAccessor_*,FMeshAttributesArray<UE::Math::TVector<float>_>,bool>
  *local_res18;
  FGLTFJsonAccessor *local_res20;
  undefined1 local_78 [16];
  FMeshAttributesArray<UE::Math::TVector<float>_> local_68;
  void *local_58 [2];
  byte local_48;
  
  pTVar6 = (this->NormalBufferConverterRaw).Ptr;
  local_res8[0] = *param_2;
  pFVar4 = FMeshAttributesArray<UE::Math::TVector<float>_>::
           FMeshAttributesArray<UE::Math::TVector<float>_>(&local_68,param_1);
  (**(code **)(pTVar6->_padding_ + 8))(pTVar6,pFVar4,local_res8);
  local_58[0] = *(void **)pFVar4;
  *(undefined8 *)pFVar4 = 0;
  local_58[1]._4_4_ = *(undefined4 *)&pFVar4->field_0xc;
  local_58[1]._0_4_ = *(undefined4 *)&pFVar4->field_0x8;
  local_48 = local_res8[0];
  *(undefined8 *)&pFVar4->field_0x8 = 0;
  uVar2 = ::GetTypeHash((FMeshAttributesArray<UE::Math::TVector<float>_> *)local_58);
  this_00 = &pTVar6->CachedOutputs;
  uVar2 = local_48 + 0x9e3779b9 + uVar2 * 0x40 + (uVar2 >> 2) ^ uVar2;
  iVar3 = TSet<TTuple<TTuple<FMeshAttributesArray<UE::Math::TVector<float>_>,bool>,FGLTFJsonAccessor_*>,TDefaultMapHashableKeyFuncs<TTuple<FMeshAttributesArray<UE::Math::TVector<float>_>,bool>,FGLTFJsonAccessor_*,0>,FDefaultSetAllocator>
          ::FindIndexByHash<TTuple<FMeshAttributesArray<UE::Math::TVector<float>_>,bool>_>
                    ((TSet<TTuple<TTuple<FMeshAttributesArray<UE::Math::TVector<float>_>,bool>,FGLTFJsonAccessor_*>,TDefaultMapHashableKeyFuncs<TTuple<FMeshAttributesArray<UE::Math::TVector<float>_>,bool>,FGLTFJsonAccessor_*,0>,FDefaultSetAllocator>
                      *)this_00,uVar2,
                     (TTuple<FMeshAttributesArray<UE::Math::TVector<float>_>,bool> *)local_58);
  if (iVar3 != -1) {
    lVar1 = *(longlong *)&this_00->field_0x0 + (longlong)iVar3 * 0x28;
    puVar5 = (undefined8 *)(lVar1 + 0x18);
    if (lVar1 == 0) {
      puVar5 = (undefined8 *)0x0;
    }
    if (puVar5 != (undefined8 *)0x0) {
      pFVar7 = (FGLTFJsonAccessor *)*puVar5;
      goto LAB_14e5e2345;
    }
  }
  local_res18 = pTVar6;
  pTVar6 = UE::Core::Private::
           DereferenceIfNecessary<TGLTFConverter<FGLTFJsonAccessor_*,FMeshAttributesArray<UE::Math::TVector<float>_>,bool>,TGLTFConverter<FGLTFJsonAccessor_*,FMeshAttributesArray<UE::Math::TVector<float>_>,bool>_*>
                     (&local_res18);
  FMeshAttributesArray<UE::Math::TVector<float>_>::FMeshAttributesArray<UE::Math::TVector<float>_>
            ((FMeshAttributesArray<UE::Math::TVector<float>_> *)local_78,
             (FMeshAttributesArray<UE::Math::TVector<float>_> *)local_58);
  local_res20 = (FGLTFJsonAccessor *)
                TGLTFConverter<FGLTFJsonAccessor*___ptr64,FMeshAttributesArray<UE::Math::TVector<float>_>,bool>
                ::_vcall__16__flat______
                          ((TGLTFConverter<FGLTFJsonAccessor*___ptr64,FMeshAttributesArray<UE::Math::TVector<float>_>,bool>
                            *)pTVar6);
  local_78._0_8_ = local_58;
  local_78._8_8_ = &local_res20;
  TSet<TTuple<TTuple<FMeshAttributesArray<UE::Math::TVector<float>_>,bool>,FGLTFJsonAccessor_*>,TDefaultMapHashableKeyFuncs<TTuple<FMeshAttributesArray<UE::Math::TVector<float>_>,bool>,FGLTFJsonAccessor_*,0>,FDefaultSetAllocator>
  ::
  EmplaceByHash<TPairInitializer<TTuple<FMeshAttributesArray<UE::Math::TVector<float>_>,bool>_&&,FGLTFJsonAccessor_*_const_&>_>
            ((TSet<TTuple<TTuple<FMeshAttributesArray<UE::Math::TVector<float>_>,bool>,FGLTFJsonAccessor_*>,TDefaultMapHashableKeyFuncs<TTuple<FMeshAttributesArray<UE::Math::TVector<float>_>,bool>,FGLTFJsonAccessor_*,0>,FDefaultSetAllocator>
              *)this_00,(uint)&local_res18,
             (TPairInitializer<TTuple<FMeshAttributesArray<UE::Math::TVector<float>_>,bool>_&&,FGLTFJsonAccessor_*_const_&>
              *)(ulonglong)uVar2,(bool *)local_78);
  pFVar7 = local_res20;
LAB_14e5e2345:
  if (local_58[0] != (void *)0x0) {
    FMemory::Free(local_58[0]);
  }
  if (*(void **)pFVar4 != (void *)0x0) {
    FMemory::Free(*(void **)pFVar4);
  }
  return pFVar7;
}

// AddUniqueNormalAccessor @ 14e5e2380

FGLTFJsonAccessor * __thiscall
FGLTFConvertBuilder::AddUniqueNormalAccessor
          (FGLTFConvertBuilder *this,FGLTFMeshSection *param_1,FStaticMeshVertexBuffer *param_2)

{
  FGLTFJsonAccessor *pFVar1;
  
  if (param_2 == (FStaticMeshVertexBuffer *)0x0) {
    return (FGLTFJsonAccessor *)0x0;
  }
  pFVar1 = TGLTFConverter<FGLTFJsonAccessor_*,FGLTFMeshSection_const_*,FStaticMeshVertexBuffer_const_*>
           ::GetOrAdd((this->NormalBufferConverter).Ptr,param_1,param_2);
  return pFVar1;
}

// AddUniqueNormalDeltaAccessor @ 14e5e23a0

FGLTFJsonAccessor * __thiscall
FGLTFConvertBuilder::AddUniqueNormalDeltaAccessor
          (FGLTFConvertBuilder *this,FGLTFMeshSection *param_1,
          TMap<unsigned_int,UE::Math::TVector<float>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Math::TVector<float>,0>_>
          *param_2,bool *param_3)

{
  FGLTFJsonAccessor *pFVar1;
  
  if (param_2 ==
      (TMap<unsigned_int,UE::Math::TVector<float>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Math::TVector<float>,0>_>
       *)0x0) {
    return (FGLTFJsonAccessor *)0x0;
  }
  pFVar1 = TGLTFConverter<FGLTFJsonAccessor_*,FGLTFMeshSection_const_*,TMap<unsigned_int,UE::Math::TVector<float>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Math::TVector<float>,0>_>_const_*,bool>
           ::GetOrAdd((this->NormalDeltaBufferConverter).Ptr,param_1,param_2,*param_3);
  return pFVar1;
}

// AddUniquePositionAccessor @ 14e5e23c0

FGLTFJsonAccessor * __thiscall
FGLTFConvertBuilder::AddUniquePositionAccessor
          (FGLTFConvertBuilder *this,FMeshAttributesArray<UE::Math::TVector<float>_> *param_1)

{
  TGLTFConverter<FGLTFJsonAccessor_*,FMeshAttributesArray<UE::Math::TVector<float>_>_> *this_00;
  FMeshAttributesArray<UE::Math::TVector<float>_> *pFVar1;
  FGLTFJsonAccessor *pFVar2;
  FMeshAttributesArray<UE::Math::TVector<float>_> local_18;
  
  this_00 = (this->PositionBufferConverterRaw).Ptr;
  pFVar1 = FMeshAttributesArray<UE::Math::TVector<float>_>::
           FMeshAttributesArray<UE::Math::TVector<float>_>(&local_18,param_1);
  pFVar2 = TGLTFConverter<FGLTFJsonAccessor_*,FMeshAttributesArray<UE::Math::TVector<float>_>_>::
           GetOrAdd(this_00,pFVar1);
  return pFVar2;
}

// AddUniquePositionAccessor @ 14e5e23f0

FGLTFJsonAccessor * __thiscall
FGLTFConvertBuilder::AddUniquePositionAccessor
          (FGLTFConvertBuilder *this,FGLTFMeshSection *param_1,FPositionVertexBuffer *param_2)

{
  FGLTFJsonAccessor *pFVar1;
  
  if (param_2 == (FPositionVertexBuffer *)0x0) {
    return (FGLTFJsonAccessor *)0x0;
  }
  pFVar1 = TGLTFConverter<FGLTFJsonAccessor_*,FGLTFMeshSection_const_*,FPositionVertexBuffer_const_*>
           ::GetOrAdd((this->PositionBufferConverter).Ptr,param_1,param_2);
  return pFVar1;
}

// AddUniquePositionDeltaAccessor @ 14e5e2410

FGLTFJsonAccessor * __thiscall
FGLTFConvertBuilder::AddUniquePositionDeltaAccessor
          (FGLTFConvertBuilder *this,FGLTFMeshSection *param_1,
          TMap<unsigned_int,UE::Math::TVector<float>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Math::TVector<float>,0>_>
          *param_2)

{
  FGLTFJsonAccessor *pFVar1;
  
  if (param_2 ==
      (TMap<unsigned_int,UE::Math::TVector<float>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Math::TVector<float>,0>_>
       *)0x0) {
    return (FGLTFJsonAccessor *)0x0;
  }
  pFVar1 = TGLTFConverter<FGLTFJsonAccessor_*,FGLTFMeshSection_const_*,TMap<unsigned_int,UE::Math::TVector<float>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Math::TVector<float>,0>_>_const_*>
           ::GetOrAdd((this->PositionDeltaBufferConverter).Ptr,param_1,param_2);
  return pFVar1;
}

// AddUniqueSampler @ 14e5e2430

FGLTFJsonSampler * __thiscall
FGLTFConvertBuilder::AddUniqueSampler(FGLTFConvertBuilder *this,UTexture *param_1)

{
  byte bVar1;
  byte bVar2;
  TextureAddress TVar3;
  TextureAddress TVar4;
  FGLTFJsonSampler *pFVar5;
  
  if (param_1 == (UTexture *)0x0) {
    return (FGLTFJsonSampler *)0x0;
  }
  bVar1 = (param_1->Filter).Value;
  bVar2 = (param_1->LODGroup).Value;
  TVar3 = (**(code **)(param_1->_padding_ + 0x390))(param_1);
  TVar4 = (**(code **)(param_1->_padding_ + 0x388))(param_1);
  pFVar5 = TGLTFConverter<FGLTFJsonSampler_*,enum_TextureAddress,enum_TextureAddress,enum_TextureFilter,enum_TextureGroup>
           ::GetOrAdd((this->SamplerConverter).Ptr,TVar4,TVar3,(uint)bVar1,(uint)bVar2);
  return pFVar5;
}

// AddUniqueSampler @ 14e5e24d0

FGLTFJsonSampler * __thiscall
FGLTFConvertBuilder::AddUniqueSampler
          (FGLTFConvertBuilder *this,TextureAddress param_1,TextureAddress param_2,
          TextureFilter param_3,TextureGroup param_4)

{
  FGLTFJsonSampler *pFVar1;
  
  pFVar1 = TGLTFConverter<FGLTFJsonSampler_*,enum_TextureAddress,enum_TextureAddress,enum_TextureFilter,enum_TextureGroup>
           ::GetOrAdd((this->SamplerConverter).Ptr,param_1,param_2,param_3,param_4);
  return pFVar1;
}

// AddUniqueSampler @ 14e5e24f0

FGLTFJsonSampler * __thiscall
FGLTFConvertBuilder::AddUniqueSampler
          (FGLTFConvertBuilder *this,TextureAddress param_1,TextureFilter param_2,
          TextureGroup param_3)

{
  FGLTFJsonSampler *pFVar1;
  
  pFVar1 = TGLTFConverter<FGLTFJsonSampler_*,enum_TextureAddress,enum_TextureAddress,enum_TextureFilter,enum_TextureGroup>
           ::GetOrAdd((this->SamplerConverter).Ptr,param_1,param_1,param_2,param_3);
  return pFVar1;
}

// AddUniqueScene @ 14e5e2520

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FGLTFJsonScene * __thiscall
FGLTFConvertBuilder::AddUniqueScene(FGLTFConvertBuilder *this,UWorld *param_1)

{
  longlong lVar1;
  TGLTFConverter<FGLTFJsonScene_*,UWorld_const_*> *pTVar2;
  int iVar3;
  TGLTFConverter<FGLTFJsonScene_*,UWorld_const_*> *this_00;
  undefined8 *puVar4;
  uint uVar5;
  undefined1 *puVar6;
  TGLTFConverter<FGLTFJsonScene_*,UWorld_const_*> *local_res10;
  UWorld *local_res18;
  FGLTFJsonScene *local_res20;
  UWorld *local_48;
  UWorld **local_40;
  FGLTFJsonScene **local_38;
  
  if (param_1 == (UWorld *)0x0) {
    return (FGLTFJsonScene *)0x0;
  }
  pTVar2 = (this->SceneConverter).Ptr;
  local_res18 = param_1;
  (**(code **)(pTVar2->_padding_ + 8))(pTVar2,&local_res18);
  local_48 = local_res18;
  uVar5 = ((uint)((ulonglong)local_res18 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_res18 >> 4)) *
          -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  uVar5 = uVar5 >> 0x10 ^ uVar5;
  if (*(int *)&(pTVar2->CachedOutputs).field_0x8 != *(int *)&(pTVar2->CachedOutputs).field_0x34) {
    puVar6 = *(undefined1 **)&(pTVar2->CachedOutputs).field_0x40;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &(pTVar2->CachedOutputs).field_0x38;
    }
    iVar3 = *(int *)(puVar6 + (ulonglong)(*(int *)&(pTVar2->CachedOutputs).field_0x48 - 1U & uVar5)
                              * 4);
    if (iVar3 != -1) {
      do {
        lVar1 = *(longlong *)&pTVar2->CachedOutputs + (longlong)iVar3 * 0x18;
        if (*(UWorld **)(*(longlong *)&pTVar2->CachedOutputs + (longlong)iVar3 * 0x18) ==
            local_res18) {
          puVar4 = (undefined8 *)(lVar1 + 8);
          if (lVar1 == 0) {
            puVar4 = (undefined8 *)0x0;
          }
          if (puVar4 != (undefined8 *)0x0) {
            return (FGLTFJsonScene *)*puVar4;
          }
          break;
        }
        iVar3 = *(int *)(lVar1 + 0x10);
      } while (iVar3 != -1);
    }
  }
  local_res10 = pTVar2;
  this_00 = UE::Core::Private::
            DereferenceIfNecessary<TGLTFConverter<FGLTFJsonScene_*,UWorld_const_*>,TGLTFConverter<FGLTFJsonScene_*,UWorld_const_*>_*>
                      (&local_res10);
  local_res20 = (FGLTFJsonScene *)
                TGLTFConverter<FGLTFJsonScene*___ptr64,UWorld_const*___ptr64>::
                _vcall__16__flat______
                          ((TGLTFConverter<FGLTFJsonScene*___ptr64,UWorld_const*___ptr64> *)this_00)
  ;
  local_40 = &local_48;
  local_38 = &local_res20;
  TSet<TTuple<TTuple<UWorld_const_*>,FGLTFJsonScene_*>,TDefaultMapHashableKeyFuncs<TTuple<UWorld_const_*>,FGLTFJsonScene_*,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TPairInitializer<TTuple<UWorld_const_*>_&&,FGLTFJsonScene_*_const_&>_>
            ((TSet<TTuple<TTuple<UWorld_const_*>,FGLTFJsonScene_*>,TDefaultMapHashableKeyFuncs<TTuple<UWorld_const_*>,FGLTFJsonScene_*,0>,FDefaultSetAllocator>
              *)&pTVar2->CachedOutputs,(uint)&local_res10,
             (TPairInitializer<TTuple<UWorld_const_*>_&&,FGLTFJsonScene_*_const_&> *)
             (ulonglong)uVar5,(bool *)&local_40);
  return local_res20;
}

// AddUniqueSkin @ 14e5e26a0

FGLTFJsonSkin * __thiscall
FGLTFConvertBuilder::AddUniqueSkin
          (FGLTFConvertBuilder *this,FGLTFJsonNode *param_1,USkeletalMesh *param_2)

{
  FGLTFJsonSkin *pFVar1;
  
  if ((param_1 != (FGLTFJsonNode *)0x0) && (param_2 != (USkeletalMesh *)0x0)) {
    pFVar1 = TGLTFConverter<FGLTFJsonSkin_*,FGLTFJsonNode_*,USkeletalMesh_const_*>::GetOrAdd
                       ((this->SkinConverter).Ptr,param_1,param_2);
    return pFVar1;
  }
  return (FGLTFJsonSkin *)0x0;
}

// AddUniqueSkin @ 14e5e26c0

FGLTFJsonSkin * __thiscall
FGLTFConvertBuilder::AddUniqueSkin
          (FGLTFConvertBuilder *this,FGLTFJsonNode *param_1,USkeletalMeshComponent *param_2)

{
  USkeletalMesh *pUVar1;
  FGLTFJsonSkin *pFVar2;
  
  if ((param_1 != (FGLTFJsonNode *)0x0) && (param_2 != (USkeletalMeshComponent *)0x0)) {
    pUVar1 = USkeletalMeshComponent::GetSkeletalMeshAsset(param_2);
    if (pUVar1 != (USkeletalMesh *)0x0) {
      pFVar2 = TGLTFConverter<FGLTFJsonSkin_*,FGLTFJsonNode_*,USkeletalMesh_const_*>::GetOrAdd
                         ((this->SkinConverter).Ptr,param_1,pUVar1);
      return pFVar2;
    }
  }
  return (FGLTFJsonSkin *)0x0;
}

// AddUniqueTangentAccessor @ 14e5e2720

FGLTFJsonAccessor * __thiscall
FGLTFConvertBuilder::AddUniqueTangentAccessor
          (FGLTFConvertBuilder *this,FMeshAttributesArray<UE::Math::TVector4<float>_> *param_1)

{
  TGLTFConverter<FGLTFJsonAccessor_*,FMeshAttributesArray<UE::Math::TVector4<float>_>_> *this_00;
  FMeshAttributesArray<UE::Math::TVector4<float>_> *pFVar1;
  FGLTFJsonAccessor *pFVar2;
  FMeshAttributesArray<UE::Math::TVector4<float>_> local_18;
  
  this_00 = (this->TangentBufferConverterRaw).Ptr;
  pFVar1 = FMeshAttributesArray<UE::Math::TVector4<float>_>::
           FMeshAttributesArray<UE::Math::TVector4<float>_>(&local_18,param_1);
  pFVar2 = TGLTFConverter<FGLTFJsonAccessor_*,FMeshAttributesArray<UE::Math::TVector4<float>_>_>::
           GetOrAdd(this_00,pFVar1);
  return pFVar2;
}

// AddUniqueTangentAccessor @ 14e5e2750

FGLTFJsonAccessor * __thiscall
FGLTFConvertBuilder::AddUniqueTangentAccessor
          (FGLTFConvertBuilder *this,FGLTFMeshSection *param_1,FStaticMeshVertexBuffer *param_2)

{
  FGLTFJsonAccessor *pFVar1;
  
  if (param_2 == (FStaticMeshVertexBuffer *)0x0) {
    return (FGLTFJsonAccessor *)0x0;
  }
  pFVar1 = TGLTFConverter<FGLTFJsonAccessor_*,FGLTFMeshSection_const_*,FStaticMeshVertexBuffer_const_*>
           ::GetOrAdd((this->TangentBufferConverter).Ptr,param_1,param_2);
  return pFVar1;
}

// AddUniqueTexture @ 14e5e2770

FGLTFJsonTexture * __thiscall
FGLTFConvertBuilder::AddUniqueTexture(FGLTFConvertBuilder *this,ULightMapTexture2D *param_1)

{
  longlong lVar1;
  TGLTFConverter<FGLTFJsonTexture_*,ULightMapTexture2D_const_*> *pTVar2;
  int iVar3;
  TGLTFConverter<FGLTFJsonTexture_*,ULightMapTexture2D_const_*> *this_00;
  undefined8 *puVar4;
  uint uVar5;
  undefined1 *puVar6;
  TGLTFConverter<FGLTFJsonTexture_*,ULightMapTexture2D_const_*> *local_res10;
  ULightMapTexture2D *local_res18;
  FGLTFJsonTexture *local_res20;
  ULightMapTexture2D *local_48;
  ULightMapTexture2D **local_40;
  FGLTFJsonTexture **local_38;
  
  if (param_1 == (ULightMapTexture2D *)0x0) {
    return (FGLTFJsonTexture *)0x0;
  }
  pTVar2 = (this->TextureLightMapConverter).Ptr;
  local_res18 = param_1;
  (**(code **)(pTVar2->_padding_ + 8))(pTVar2,&local_res18);
  local_48 = local_res18;
  uVar5 = ((uint)((ulonglong)local_res18 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_res18 >> 4)) *
          -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  uVar5 = uVar5 >> 0x10 ^ uVar5;
  if (*(int *)&(pTVar2->CachedOutputs).field_0x8 != *(int *)&(pTVar2->CachedOutputs).field_0x34) {
    puVar6 = *(undefined1 **)&(pTVar2->CachedOutputs).field_0x40;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &(pTVar2->CachedOutputs).field_0x38;
    }
    iVar3 = *(int *)(puVar6 + (ulonglong)(*(int *)&(pTVar2->CachedOutputs).field_0x48 - 1U & uVar5)
                              * 4);
    if (iVar3 != -1) {
      do {
        lVar1 = *(longlong *)&pTVar2->CachedOutputs + (longlong)iVar3 * 0x18;
        if (*(ULightMapTexture2D **)(*(longlong *)&pTVar2->CachedOutputs + (longlong)iVar3 * 0x18)
            == local_res18) {
          puVar4 = (undefined8 *)(lVar1 + 8);
          if (lVar1 == 0) {
            puVar4 = (undefined8 *)0x0;
          }
          if (puVar4 != (undefined8 *)0x0) {
            return (FGLTFJsonTexture *)*puVar4;
          }
          break;
        }
        iVar3 = *(int *)(lVar1 + 0x10);
      } while (iVar3 != -1);
    }
  }
  local_res10 = pTVar2;
  this_00 = UE::Core::Private::
            DereferenceIfNecessary<TGLTFConverter<FGLTFJsonTexture_*,ULightMapTexture2D_const_*>,TGLTFConverter<FGLTFJsonTexture_*,ULightMapTexture2D_const_*>_*>
                      (&local_res10);
  local_res20 = (FGLTFJsonTexture *)
                TGLTFConverter<FGLTFJsonTexture*___ptr64,ULightMapTexture2D_const*___ptr64>::
                _vcall__16__flat______
                          ((TGLTFConverter<FGLTFJsonTexture*___ptr64,ULightMapTexture2D_const*___ptr64>
                            *)this_00);
  local_40 = &local_48;
  local_38 = &local_res20;
  TSet<TTuple<TTuple<ULightMapTexture2D_const_*>,FGLTFJsonTexture_*>,TDefaultMapHashableKeyFuncs<TTuple<ULightMapTexture2D_const_*>,FGLTFJsonTexture_*,0>,FDefaultSetAllocator>
  ::
  EmplaceByHash<TPairInitializer<TTuple<ULightMapTexture2D_const_*>_&&,FGLTFJsonTexture_*_const_&>_>
            ((TSet<TTuple<TTuple<ULightMapTexture2D_const_*>,FGLTFJsonTexture_*>,TDefaultMapHashableKeyFuncs<TTuple<ULightMapTexture2D_const_*>,FGLTFJsonTexture_*,0>,FDefaultSetAllocator>
              *)&pTVar2->CachedOutputs,(uint)&local_res10,
             (TPairInitializer<TTuple<ULightMapTexture2D_const_*>_&&,FGLTFJsonTexture_*_const_&> *)
             (ulonglong)uVar5,(bool *)&local_40);
  return local_res20;
}

// AddUniqueTexture @ 14e5e28f0

FGLTFJsonTexture * __thiscall
FGLTFConvertBuilder::AddUniqueTexture(FGLTFConvertBuilder *this,UTexture2D *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FGLTFJsonTexture *pFVar3;
  bool bVar4;
  UTexture *local_res10;
  UTexture2D *local_res18;
  
  bVar4 = (bool)(*(byte *)((longlong)&param_1->_padding_ + 6) & 1);
  pUVar2 = Z_Construct_UClass_UTexture2D_NoRegister();
  iVar1 = (int)pUVar2->_padding_;
  if (((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
      ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
       == &pUVar2->_padding_)) && (param_1 != (UTexture2D *)0x0)) {
    local_res18 = param_1;
    TSet<UTexture_const_*,DefaultKeyFuncs<UTexture_const_*,0>,FDefaultSetAllocator>::
    Emplace<UTexture_const_*_const_&>
              ((TSet<UTexture_const_*,DefaultKeyFuncs<UTexture_const_*,0>,FDefaultSetAllocator> *)
               &this->_padding_,&local_res10,(bool *)&local_res18);
    pFVar3 = TGLTFConverter<FGLTFJsonTexture_*,UTexture2D_const_*,bool,enum_TextureAddress,enum_TextureAddress>
             ::GetOrAdd((this->Texture2DConverter).Ptr,param_1,bVar4,TA_MAX,TA_MAX);
    return pFVar3;
  }
  pUVar2 = Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
  iVar1 = (int)pUVar2->_padding_;
  if (((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
      ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
       == &pUVar2->_padding_)) && (param_1 != (UTexture2D *)0x0)) {
    pFVar3 = AddUniqueTexture(this,(UTexture *)param_1,bVar4,TA_MAX,TA_MAX);
    return pFVar3;
  }
  return (FGLTFJsonTexture *)0x0;
}

// AddUniqueTexture @ 14e5e2a00

FGLTFJsonTexture * __thiscall
FGLTFConvertBuilder::AddUniqueTexture
          (FGLTFConvertBuilder *this,UTexture2D *param_1,bool param_2,TextureAddress param_3,
          TextureAddress param_4)

{
  FGLTFJsonTexture *pFVar1;
  UTexture *local_res10;
  UTexture2D *local_18 [2];
  
  if (param_1 == (UTexture2D *)0x0) {
    pFVar1 = (FGLTFJsonTexture *)0x0;
  }
  else {
    local_18[0] = param_1;
    TSet<UTexture_const_*,DefaultKeyFuncs<UTexture_const_*,0>,FDefaultSetAllocator>::
    Emplace<UTexture_const_*_const_&>
              ((TSet<UTexture_const_*,DefaultKeyFuncs<UTexture_const_*,0>,FDefaultSetAllocator> *)
               &this->_padding_,&local_res10,(bool *)local_18);
    pFVar1 = TGLTFConverter<FGLTFJsonTexture_*,UTexture2D_const_*,bool,enum_TextureAddress,enum_TextureAddress>
             ::GetOrAdd((this->Texture2DConverter).Ptr,param_1,param_2,param_3,param_4);
  }
  return pFVar1;
}

// AddUniqueTexture @ 14e5e2a90

FGLTFJsonTexture * __thiscall
FGLTFConvertBuilder::AddUniqueTexture(FGLTFConvertBuilder *this,UTexture *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FGLTFJsonTexture *pFVar3;
  bool bVar4;
  UTexture *local_res10;
  UTexture *local_res18;
  
  bVar4 = param_1->SRGB;
  pUVar2 = Z_Construct_UClass_UTexture2D_NoRegister();
  iVar1 = (int)pUVar2->_padding_;
  if (((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
      ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
       == &pUVar2->_padding_)) && (param_1 != (UTexture *)0x0)) {
    local_res18 = param_1;
    TSet<UTexture_const_*,DefaultKeyFuncs<UTexture_const_*,0>,FDefaultSetAllocator>::
    Emplace<UTexture_const_*_const_&>
              ((TSet<UTexture_const_*,DefaultKeyFuncs<UTexture_const_*,0>,FDefaultSetAllocator> *)
               &this->_padding_,&local_res10,(bool *)&local_res18);
    pFVar3 = TGLTFConverter<FGLTFJsonTexture_*,UTexture2D_const_*,bool,enum_TextureAddress,enum_TextureAddress>
             ::GetOrAdd((this->Texture2DConverter).Ptr,(UTexture2D *)param_1,bVar4,TA_MAX,TA_MAX);
    return pFVar3;
  }
  pUVar2 = Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
  iVar1 = (int)pUVar2->_padding_;
  if (((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
      ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
       == &pUVar2->_padding_)) && (param_1 != (UTexture *)0x0)) {
    pFVar3 = AddUniqueTexture(this,param_1,bVar4,TA_MAX,TA_MAX);
    return pFVar3;
  }
  return (FGLTFJsonTexture *)0x0;
}

// AddUniqueTexture @ 14e5e2ba0

FGLTFJsonTexture * __thiscall
FGLTFConvertBuilder::AddUniqueTexture
          (FGLTFConvertBuilder *this,UTexture *param_1,bool param_2,TextureAddress param_3,
          TextureAddress param_4)

{
  int iVar1;
  UClass *pUVar2;
  FGLTFJsonTexture *pFVar3;
  UTexture *local_res10;
  UTexture *local_18 [2];
  
  do {
    if (param_1 == (UTexture *)0x0) {
      return (FGLTFJsonTexture *)0x0;
    }
    pUVar2 = Z_Construct_UClass_UTexture2D_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar2->_padding_)) {
      local_18[0] = param_1;
      TSet<UTexture_const_*,DefaultKeyFuncs<UTexture_const_*,0>,FDefaultSetAllocator>::
      Emplace<UTexture_const_*_const_&>
                ((TSet<UTexture_const_*,DefaultKeyFuncs<UTexture_const_*,0>,FDefaultSetAllocator> *)
                 &this->_padding_,&local_res10,(bool *)local_18);
      pFVar3 = TGLTFConverter<FGLTFJsonTexture_*,UTexture2D_const_*,bool,enum_TextureAddress,enum_TextureAddress>
               ::GetOrAdd((this->Texture2DConverter).Ptr,(UTexture2D *)param_1,param_2,param_3,
                          param_4);
      return pFVar3;
    }
    pUVar2 = Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if (*(int *)(param_1->_padding_ + 0x38) < iVar1) {
      return (FGLTFJsonTexture *)0x0;
    }
  } while ((longlong *)
           *(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
           &pUVar2->_padding_);
  return (FGLTFJsonTexture *)0x0;
}

// AddUniqueTexture @ 14e5e2c70

FGLTFJsonTexture * __thiscall
FGLTFConvertBuilder::AddUniqueTexture(FGLTFConvertBuilder *this,UTextureRenderTarget2D *param_1)

{
  FGLTFJsonTexture *pFVar1;
  
  pFVar1 = AddUniqueTexture(this,param_1,(bool)(*(byte *)((longlong)&param_1->_padding_ + 6) & 1));
  return pFVar1;
}

// AddUniqueTexture @ 14e5e2c90

FGLTFJsonTexture * __thiscall
FGLTFConvertBuilder::AddUniqueTexture
          (FGLTFConvertBuilder *this,UTextureRenderTarget2D *param_1,bool param_2)

{
  UTextureRenderTarget2D *pUVar1;
  longlong *plVar2;
  TGLTFConverter<FGLTFJsonTexture_*,UTextureRenderTarget2D_const_*,bool> *this_00;
  uint uVar3;
  longlong *plVar4;
  int iVar5;
  byte local_res10 [16];
  UTextureRenderTarget2D *local_res20;
  UTextureRenderTarget2D *local_58;
  FGLTFJsonTexture *local_50;
  UTextureRenderTarget2D *local_48;
  byte local_40;
  UTextureRenderTarget2D **local_38;
  FGLTFJsonTexture **local_30;
  
  if (param_1 == (UTextureRenderTarget2D *)0x0) {
    return (FGLTFJsonTexture *)0x0;
  }
  local_res20 = param_1;
  TSet<UTexture_const_*,DefaultKeyFuncs<UTexture_const_*,0>,FDefaultSetAllocator>::
  Emplace<UTexture_const_*_const_&>
            ((TSet<UTexture_const_*,DefaultKeyFuncs<UTexture_const_*,0>,FDefaultSetAllocator> *)
             &this->_padding_,(UTexture **)local_res10,(bool *)&local_res20);
  pUVar1 = (UTextureRenderTarget2D *)(this->TextureRenderTarget2DConverter).Ptr;
  local_res10[0] = param_2;
  local_58 = param_1;
  (**(code **)(pUVar1->_padding_ + 8))(pUVar1,&local_58,local_res10);
  local_48 = local_58;
  local_40 = local_res10[0];
  uVar3 = ((uint)((ulonglong)local_58 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_58 >> 4)) *
          -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  uVar3 = uVar3 >> 0x10 ^ uVar3;
  uVar3 = local_res10[0] + 0x9e3779b9 + uVar3 * 0x40 + (uVar3 >> 2) ^ uVar3;
  if ((int)pUVar1->_padding_ != *(int *)((longlong)&pUVar1->_padding_ + 4)) {
    plVar2 = (longlong *)pUVar1->_padding_;
    if ((longlong *)pUVar1->_padding_ == (longlong *)0x0) {
      plVar2 = &pUVar1->_padding_;
    }
    iVar5 = *(int *)((longlong)plVar2 + (ulonglong)((int)pUVar1->_padding_ - 1U & uVar3) * 4);
    if (iVar5 != -1) {
      do {
        plVar2 = (longlong *)((longlong)iVar5 * 0x20 + *(longlong *)&pUVar1->_padding_);
        if (((UTextureRenderTarget2D *)*plVar2 == local_58) &&
           (*(byte *)(plVar2 + 1) == local_res10[0])) {
          if (iVar5 != -1) {
            plVar4 = plVar2 + 2;
            if (plVar2 == (longlong *)0x0) {
              plVar4 = (longlong *)0x0;
            }
            if (plVar4 != (longlong *)0x0) {
              return (FGLTFJsonTexture *)*plVar4;
            }
          }
          break;
        }
        iVar5 = (int)plVar2[3];
      } while (iVar5 != -1);
    }
  }
  local_res20 = pUVar1;
  this_00 = UE::Core::Private::
            DereferenceIfNecessary<TGLTFConverter<FGLTFJsonTexture_*,UTextureRenderTarget2D_const_*,bool>,TGLTFConverter<FGLTFJsonTexture_*,UTextureRenderTarget2D_const_*,bool>_*>
                      ((TGLTFConverter<FGLTFJsonTexture_*,UTextureRenderTarget2D_const_*,bool> **)
                       &local_res20);
  local_50 = (FGLTFJsonTexture *)
             TGLTFConverter<FGLTFJsonTexture*___ptr64,UTextureRenderTarget2D_const*___ptr64,bool>::
             _vcall__16__flat______
                       ((TGLTFConverter<FGLTFJsonTexture*___ptr64,UTextureRenderTarget2D_const*___ptr64,bool>
                         *)this_00);
  local_38 = &local_48;
  local_30 = &local_50;
  TSet<TTuple<TTuple<UTextureRenderTarget2D_const_*,bool>,FGLTFJsonTexture_*>,TDefaultMapHashableKeyFuncs<TTuple<UTextureRenderTarget2D_const_*,bool>,FGLTFJsonTexture_*,0>,FDefaultSetAllocator>
  ::
  EmplaceByHash<TPairInitializer<TTuple<UTextureRenderTarget2D_const_*,bool>_&&,FGLTFJsonTexture_*_const_&>_>
            ((TSet<TTuple<TTuple<UTextureRenderTarget2D_const_*,bool>,FGLTFJsonTexture_*>,TDefaultMapHashableKeyFuncs<TTuple<UTextureRenderTarget2D_const_*,bool>,FGLTFJsonTexture_*,0>,FDefaultSetAllocator>
              *)&pUVar1->_padding_,(uint)&local_res20,
             (TPairInitializer<TTuple<UTextureRenderTarget2D_const_*,bool>_&&,FGLTFJsonTexture_*_const_&>
              *)(ulonglong)uVar3,(bool *)&local_38);
  return local_50;
}

// AddUniqueUVAccessor @ 14e5e2e70

FGLTFJsonAccessor * __thiscall
FGLTFConvertBuilder::AddUniqueUVAccessor
          (FGLTFConvertBuilder *this,FMeshAttributesArray<UE::Math::TVector2<float>_> *param_1)

{
  TGLTFConverter<FGLTFJsonAccessor_*,FMeshAttributesArray<UE::Math::TVector2<float>_>_> *this_00;
  FMeshAttributesArray<UE::Math::TVector2<float>_> *pFVar1;
  FGLTFJsonAccessor *pFVar2;
  FMeshAttributesArray<UE::Math::TVector2<float>_> local_18;
  
  this_00 = (this->UVBufferConverterRaw).Ptr;
  pFVar1 = FMeshAttributesArray<UE::Math::TVector2<float>_>::
           FMeshAttributesArray<UE::Math::TVector2<float>_>(&local_18,param_1);
  pFVar2 = TGLTFConverter<FGLTFJsonAccessor_*,FMeshAttributesArray<UE::Math::TVector2<float>_>_>::
           GetOrAdd(this_00,pFVar1);
  return pFVar2;
}

// AddUniqueUVAccessor @ 14e5e2ea0

FGLTFJsonAccessor * __thiscall
FGLTFConvertBuilder::AddUniqueUVAccessor
          (FGLTFConvertBuilder *this,FGLTFMeshSection *param_1,FStaticMeshVertexBuffer *param_2,
          int param_3)

{
  FGLTFJsonAccessor *pFVar1;
  
  if (param_2 == (FStaticMeshVertexBuffer *)0x0) {
    return (FGLTFJsonAccessor *)0x0;
  }
  pFVar1 = TGLTFConverter<FGLTFJsonAccessor_*,FGLTFMeshSection_const_*,FStaticMeshVertexBuffer_const_*,unsigned_int>
           ::GetOrAdd((this->UVBufferConverter).Ptr,param_1,param_2,param_3);
  return pFVar1;
}

// AddUniqueWeightAccessor @ 14e5e2ec0

FGLTFJsonAccessor * __thiscall
FGLTFConvertBuilder::AddUniqueWeightAccessor
          (FGLTFConvertBuilder *this,
          FMeshAttributesArray<UE::Math::TIntVector4<unsigned_short>_> *param_1)

{
  TGLTFConverter<FGLTFJsonAccessor_*,FMeshAttributesArray<UE::Math::TIntVector4<unsigned_short>_>_>
  *this_00;
  FMeshAttributesArray<UE::Math::TIntVector4<unsigned_short>_> *pFVar1;
  FGLTFJsonAccessor *pFVar2;
  FMeshAttributesArray<UE::Math::TIntVector4<unsigned_short>_> local_18;
  
  this_00 = (this->BoneWeightBufferConverterRaw).Ptr;
  pFVar1 = FMeshAttributesArray<UE::Math::TIntVector4<unsigned_short>_>::
           FMeshAttributesArray<UE::Math::TIntVector4<unsigned_short>_>(&local_18,param_1);
  pFVar2 = TGLTFConverter<FGLTFJsonAccessor_*,FMeshAttributesArray<UE::Math::TIntVector4<unsigned_short>_>_>
           ::GetOrAdd(this_00,pFVar1);
  return pFVar2;
}

// AddUniqueWeightAccessor @ 14e5e2ef0

FGLTFJsonAccessor * __thiscall
FGLTFConvertBuilder::AddUniqueWeightAccessor
          (FGLTFConvertBuilder *this,FGLTFMeshSection *param_1,FSkinWeightVertexBuffer *param_2,
          int param_3)

{
  FGLTFJsonAccessor *pFVar1;
  
  if (param_2 == (FSkinWeightVertexBuffer *)0x0) {
    return (FGLTFJsonAccessor *)0x0;
  }
  pFVar1 = TGLTFConverter<FGLTFJsonAccessor_*,FGLTFMeshSection_const_*,FSkinWeightVertexBuffer_const_*,unsigned_int>
           ::GetOrAdd((this->BoneWeightBufferConverter).Ptr,param_1,param_2,param_3);
  return pFVar1;
}

// GetObjectVariants @ 14e5f80a0

TArray<UPropertyValue_const_*,TSizedDefaultAllocator<32>_> * __thiscall
FGLTFConvertBuilder::GetObjectVariants(FGLTFConvertBuilder *this,UObject *param_1)

{
  TArray<UPropertyValue_const_*,TSizedDefaultAllocator<32>_> *pTVar1;
  
  pTVar1 = TMapBase<UObject_const_*,TArray<UPropertyValue_const_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_const_*,TArray<UPropertyValue_const_*,TSizedDefaultAllocator<32>_>,0>_>
           ::Find((TMapBase<UObject_const_*,TArray<UPropertyValue_const_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_const_*,TArray<UPropertyValue_const_*,TSizedDefaultAllocator<32>_>,0>_>
                   *)&this->ObjectVariants,param_1);
  return pTVar1;
}

// IsRootActor @ 14e601d40

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall FGLTFConvertBuilder::IsRootActor(FGLTFConvertBuilder *this,AActor *param_1)

{
  bool bVar1;
  AActor *pAVar2;
  
  pAVar2 = AActor::GetAttachParentActor(param_1);
  if (pAVar2 != (AActor *)0x0) {
    bVar1 = IsSelectedActor(this,pAVar2);
    if (bVar1) {
      return false;
    }
  }
  return true;
}

// IsSelectedActor @ 14e601d80

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall FGLTFConvertBuilder::IsSelectedActor(FGLTFConvertBuilder *this,AActor *param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  ForElementType<FSetElementId> FVar4;
  
  if (*(int *)&(this->SelectedActors).Elements.field_0x8 ==
      *(int *)&(this->SelectedActors).Elements.field_0x34) {
    return true;
  }
  FVar4 = (this->SelectedActors).Hash.SecondaryData;
  uVar3 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  if (FVar4 == (ForElementType<FSetElementId>)0x0) {
    FVar4 = (ForElementType<FSetElementId>)&(this->SelectedActors).Hash;
  }
  iVar2 = *(int *)((longlong)FVar4 +
                  (ulonglong)((uVar3 >> 0x10 ^ uVar3) & (this->SelectedActors).HashSize - 1U) * 4);
  if (iVar2 != -1) {
    lVar1 = *(longlong *)&(this->SelectedActors).Elements;
    do {
      if (*(AActor **)(lVar1 + (longlong)iVar2 * 0x10) == param_1) {
        return true;
      }
      iVar2 = *(int *)(lVar1 + 8 + (longlong)iVar2 * 0x10);
    } while (iVar2 != -1);
  }
  return false;
}

// RegisterObjectVariant @ 14e60a060

void __thiscall
FGLTFConvertBuilder::RegisterObjectVariant
          (FGLTFConvertBuilder *this,UObject *param_1,UPropertyValue *param_2)

{
  TArray<UPropertyValue_const_*,TSizedDefaultAllocator<32>_> *this_00;
  uint uVar1;
  UObject *local_res10;
  UPropertyValue *local_res18 [2];
  
  uVar1 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
  local_res10 = param_1;
  local_res18[0] = param_2;
  this_00 = TMapBase<UObject_const_*,TArray<UPropertyValue_const_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_const_*,TArray<UPropertyValue_const_*,TSizedDefaultAllocator<32>_>,0>_>
            ::FindOrAddImpl<UObject_const_*_const_&>
                      ((TMapBase<UObject_const_*,TArray<UPropertyValue_const_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_const_*,TArray<UPropertyValue_const_*,TSizedDefaultAllocator<32>_>,0>_>
                        *)&this->ObjectVariants,uVar1 >> 0x10 ^ uVar1,&local_res10);
  TArray<UPropertyValue_const_*,TSizedDefaultAllocator<32>_>::
  AddUniqueImpl<UPropertyValue_const_*_const_&>(this_00,local_res18);
  return;
}

