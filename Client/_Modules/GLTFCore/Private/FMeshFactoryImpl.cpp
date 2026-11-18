// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GLTFCore
// Functions: 10

// FMeshFactoryImpl @ 14e62b140

FMeshFactoryImpl * __thiscall GLTF::FMeshFactoryImpl::FMeshFactoryImpl(FMeshFactoryImpl *this)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *pTVar4;
  longlong lVar5;
  
  this->ImportUniformScale = 1.0;
  this->_padding_ = 0;
  pTVar4 = this->Vector2dBuffers;
  this->_padding_ = 0;
  *(undefined8 *)&(this->MaterialIndicesUsed).Elements = 0;
  *(undefined8 *)&(this->MaterialIndicesUsed).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->MaterialIndicesUsed).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->MaterialIndicesUsed).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->MaterialIndicesUsed).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->MaterialIndicesUsed).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->MaterialIndicesUsed).Elements.field_0x34 = 0;
  (this->MaterialIndicesUsed).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->MaterialIndicesUsed).HashSize = 0;
  *(undefined8 *)&this->MaterialIndexToPolygonGroupID = 0;
  *(undefined8 *)&(this->MaterialIndexToPolygonGroupID).field_0x8 = 0;
  *(undefined8 *)&(this->MaterialIndexToPolygonGroupID).field_0x20 = 0;
  *(undefined4 *)&(this->MaterialIndexToPolygonGroupID).field_0x28 = 0;
  *(undefined4 *)&(this->MaterialIndexToPolygonGroupID).field_0x2c = 0x80;
  *(undefined4 *)&(this->MaterialIndexToPolygonGroupID).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->MaterialIndexToPolygonGroupID).field_0x34 = 0;
  *(undefined8 *)&(this->MaterialIndexToPolygonGroupID).field_0x40 = 0;
  *(undefined4 *)&(this->MaterialIndexToPolygonGroupID).field_0x48 = 0;
  (this->PositionIndexToVertexIdPerPrim).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PositionIndexToVertexIdPerPrim).ArrayNum = 0;
  (this->PositionIndexToVertexIdPerPrim).ArrayMax = 0;
  lVar5 = 10;
  do {
    (pTVar4->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    pTVar4->ArrayNum = 0;
    pTVar4->ArrayMax = 0;
    pTVar4 = pTVar4 + 1;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  this->VectorBuffers[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->CornerVertexInstanceIDs).ArrayNum;
  this->VectorBuffers[0].ArrayNum = 0;
  this->VectorBuffers[0].ArrayMax = 0;
  piVar2 = &(this->CornerVertexInstanceIDs).ArrayMax;
  this->VectorBuffers[1].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->VectorBuffers[1].ArrayNum = 0;
  this->VectorBuffers[1].ArrayMax = 0;
  this->VectorBuffers[2].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->VectorBuffers[2].ArrayNum = 0;
  this->VectorBuffers[2].ArrayMax = 0;
  this->VectorBuffers[3].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->VectorBuffers[3].ArrayNum = 0;
  this->VectorBuffers[3].ArrayMax = 0;
  this->Vector4dBuffers[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Vector4dBuffers[0].ArrayNum = 0;
  this->Vector4dBuffers[0].ArrayMax = 0;
  this->Vector4dBuffers[1].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Vector4dBuffers[1].ArrayNum = 0;
  this->Vector4dBuffers[1].ArrayMax = 0;
  this->Vector4dBuffers[2].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Vector4dBuffers[2].ArrayNum = 0;
  this->Vector4dBuffers[2].ArrayMax = 0;
  this->Vector4dBuffers[3].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Vector4dBuffers[3].ArrayNum = 0;
  this->Vector4dBuffers[3].ArrayMax = 0;
  *piVar1 = 0;
  (this->IntBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->IntBuffer).ArrayNum = 0;
  (this->IntBuffer).ArrayMax = 0;
  (this->CornerVertexInstanceIDs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *piVar2 = 0;
  iVar3 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,3,&(this->CornerVertexInstanceIDs).AllocatorInstance,piVar1,piVar2);
  DefaultConstructItems<FVertexInstanceID,int>
            ((this->CornerVertexInstanceIDs).AllocatorInstance.Data + (longlong)iVar3 * 4,3);
  return this;
}

// CleanUp @ 14e6315c0

void __thiscall GLTF::FMeshFactoryImpl::CleanUp(FMeshFactoryImpl *this)

{
  undefined1 *puVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  
  piVar3 = &(this->IntBuffer).ArrayMax;
  uVar2 = *piVar3;
  uVar4 = this->MaxReserveSize;
  if (uVar2 < this->MaxReserveSize) {
    uVar4 = uVar2;
  }
  if (-1 < (int)uVar4) {
    (this->IntBuffer).ArrayNum = 0;
    if (uVar2 != uVar4) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar4,&(this->IntBuffer).AllocatorInstance,0,piVar3);
    }
    piVar3 = &this->Vector2dBuffers[0].ArrayMax;
    this->Vector2dBuffers[0].ArrayNum = 0;
    if (*piVar3 != uVar4) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,uVar4,&this->Vector2dBuffers[0].AllocatorInstance,0,piVar3);
    }
    if (this->VectorBuffers !=
        (TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)this->Vector4dBuffers) {
      piVar3 = &this->VectorBuffers[0].ArrayMax;
      do {
        piVar3[-1] = 0;
        if (*piVar3 != uVar4) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0xc,4,uVar4,(ForAnyElementType *)(piVar3 + -3),0,piVar3);
        }
        puVar1 = (undefined1 *)(piVar3 + 1);
        piVar3 = piVar3 + 4;
      } while ((TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> *)puVar1 !=
               this->Vector4dBuffers);
    }
    piVar3 = &this->Vector2dBuffers[1].ArrayMax;
    this->Vector2dBuffers[1].ArrayNum = 0;
    if (*piVar3 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,0,&this->Vector2dBuffers[1].AllocatorInstance,0,piVar3);
    }
    piVar3 = &this->Vector2dBuffers[2].ArrayMax;
    this->Vector2dBuffers[2].ArrayNum = 0;
    if (*piVar3 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,0,&this->Vector2dBuffers[2].AllocatorInstance,0,piVar3);
    }
    piVar3 = &this->Vector2dBuffers[3].ArrayMax;
    this->Vector2dBuffers[3].ArrayNum = 0;
    if (*piVar3 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,0,&this->Vector2dBuffers[3].AllocatorInstance,0,piVar3);
    }
    piVar3 = &this->Vector2dBuffers[4].ArrayMax;
    this->Vector2dBuffers[4].ArrayNum = 0;
    if (*piVar3 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,0,&this->Vector2dBuffers[4].AllocatorInstance,0,piVar3);
    }
    piVar3 = &this->Vector2dBuffers[5].ArrayMax;
    this->Vector2dBuffers[5].ArrayNum = 0;
    if (*piVar3 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,0,&this->Vector2dBuffers[5].AllocatorInstance,0,piVar3);
    }
    piVar3 = &this->Vector2dBuffers[6].ArrayMax;
    this->Vector2dBuffers[6].ArrayNum = 0;
    if (*piVar3 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,0,&this->Vector2dBuffers[6].AllocatorInstance,0,piVar3);
    }
    piVar3 = &this->Vector2dBuffers[7].ArrayMax;
    this->Vector2dBuffers[7].ArrayNum = 0;
    if (*piVar3 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,0,&this->Vector2dBuffers[7].AllocatorInstance,0,piVar3);
    }
    piVar3 = &this->Vector2dBuffers[8].ArrayMax;
    this->Vector2dBuffers[8].ArrayNum = 0;
    if (*piVar3 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,0,&this->Vector2dBuffers[8].AllocatorInstance,0,piVar3);
    }
    if (this->Vector4dBuffers !=
        (TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> *)&this->IntBuffer) {
      piVar3 = &this->Vector4dBuffers[0].ArrayMax;
      do {
        piVar3[-1] = 0;
        if (*piVar3 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,0x10,0,(ForAnyElementType *)(piVar3 + -3),0,piVar3);
        }
        puVar1 = (undefined1 *)(piVar3 + 1);
        piVar3 = piVar3 + 4;
      } while ((TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)puVar1 != &this->IntBuffer);
    }
    DestructItems<TTuple<enum_GLTF::EMessageSeverity,FText>,int>
              ((TTuple<GLTF::EMessageSeverity,FText> *)this->_padding_,(int)this->_padding_);
    piVar3 = (int *)((longlong)&this->_padding_ + 4);
    *(undefined4 *)&this->_padding_ = 0;
    if (*piVar3 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,0,(ForAnyElementType *)this,0,piVar3);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar4);
}

// FillMeshDescription @ 14e634490

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
GLTF::FMeshFactoryImpl::FillMeshDescription
          (FMeshFactoryImpl *this,FMesh *param_1,TTransform<double> *param_2,
          FMeshDescription *param_3,TArray<float,TSizedDefaultAllocator<32>_> *param_4)

{
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar1;
  int *piVar2;
  TArray<TMap<int,FVertexID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FVertexID,0>_>,TSizedDefaultAllocator<32>_>
  *this_00;
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *pTVar3;
  ulonglong uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  uint uVar9;
  ITextData *pIVar10;
  undefined1 *puVar11;
  code *pcVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  bool bVar22;
  double dVar23;
  FName FVar24;
  FMeshDescription *pFVar25;
  FPolygonGroupID *pFVar26;
  bool bVar27;
  bool bVar28;
  char cVar29;
  int iVar30;
  FName *pFVar31;
  FPrimitive *pFVar32;
  FMeshElementContainer *pFVar33;
  FAttributesSetEntry *pFVar34;
  FText *pFVar35;
  FText *pFVar36;
  FTextFormat *pFVar37;
  TMeshAttributeArrayBase<UE::Math::TVector<float>_> *pTVar38;
  TVector<float> *pTVar39;
  TMeshAttributeArrayBase<FName> *this_01;
  byte bVar40;
  FAccessor *this_02;
  longlong lVar41;
  longlong lVar42;
  longlong lVar43;
  ForAnyElementType FVar44;
  FScriptContainerElement *pFVar45;
  <lambda_1> <Var46;
  TMeshAttributeArraySet<UE::Math::TVector<float>_> *this_03;
  TMeshAttributeArraySet<FName> *this_04;
  TArray<GLTF::FPrimitive,TSizedDefaultAllocator<32>_> *pTVar47;
  longlong lVar48;
  undefined1 *puVar49;
  FScriptContainerElement *pFVar50;
  uint uVar51;
  TMeshAttributeArraySet<FName> *pTVar52;
  TSet<TTuple<int,FVertexID>,TDefaultMapHashableKeyFuncs<int,FVertexID,0>,FDefaultSetAllocator>
  *this_05;
  int iVar53;
  TMeshAttributeArraySet<FName> *this_06;
  uint uVar54;
  double dVar55;
  double dVar56;
  double dVar57;
  undefined1 local_428 [4];
  uint local_424;
  uint local_420 [2];
  FMesh *local_418;
  uint local_410;
  undefined **local_408;
  FMeshDescription *local_400;
  int local_3f8;
  int local_3f4;
  int local_3f0;
  int local_3ec;
  uint local_3e8;
  FName local_3e0;
  FMeshDescription *local_3d8;
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_3d0;
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_3c0;
  Vector3fMorphTargetAttributes local_3b0 [2];
  longlong local_3a8;
  longlong local_3a0;
  TArray<GLTF::FPrimitive,TSizedDefaultAllocator<32>_> *local_398;
  FString local_390;
  TArray<float,TSizedDefaultAllocator<32>_> *local_380;
  longlong local_378;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_370;
  undefined4 local_350;
  int local_34c;
  undefined1 local_348 [8];
  undefined4 local_340;
  int local_33c;
  TPairInitializer<int_const_&,FPolygonGroupID_const_&> local_338;
  TTransform<double> *local_328;
  TMeshAttributesRef<FPolygonID,FName> local_320;
  TMeshAttributesRef<FVertexInstanceID,UE::Math::TVector<float>_> local_318;
  TMeshAttributesRef<FVertexInstanceID,UE::Math::TVector<float>_> local_310;
  TMeshAttributesRef<FVertexInstanceID,UE::Math::TVector2<float>_> local_308;
  TMeshAttributesRef<FVertexInstanceID,UE::Math::TVector4<float>_> local_300;
  TMeshAttributesRef<FEdgeID,bool> local_2f8;
  TMeshAttributesRef<FVertexInstanceID,float> local_2f0;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_2e8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_2e0;
  undefined8 uStack_2c0;
  FText local_2b8;
  uint *local_2a8;
  int *local_2a0;
  uint *local_298;
  int *local_290;
  int *local_288;
  int *local_280;
  FTextFormat local_278;
  FText local_268;
  FTextFormat local_258;
  FFormatArgumentValue local_248;
  FFormatArgumentValue local_228;
  undefined4 local_208;
  longlong local_200;
  longlong *local_1f8;
  undefined4 local_1f0;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_1e8;
  longlong lStack_1e0;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  int local_1c0;
  undefined4 uStack_1bc;
  FText local_1b8;
  FText local_1a8;
  FText local_198;
  FName local_188;
  FText local_180;
  TMatrix<double> local_168;
  FText local_e8;
  FTextFormat local_d8;
  FText local_c8;
  FTextFormat local_b8;
  FTextFormat local_a8;
  FText local_98 [5];
  
  uVar54 = 0;
  local_380 = param_4;
  iVar53 = (param_1->Name).Data.ArrayNum;
  iVar30 = iVar53 + -1;
  if (iVar53 == 0) {
    iVar30 = 0;
  }
  local_418 = param_1;
  local_3d8 = param_3;
  local_328 = param_2;
  pFVar31 = ::FName::FName(&local_188,iVar30,(wchar_t *)(param_1->Name).Data.AllocatorInstance.Data,
                           FNAME_Add);
  local_3e0 = *pFVar31;
  <Var46.Index = uVar54;
  local_398 = &param_1->Primitives;
  do {
    pFVar32 = TArray<GLTF::FPrimitive,TSizedDefaultAllocator<32>_>::
              FindByPredicate<_GLTF::FMesh::HasTexCoords_::__l2::<lambda_1>_>
                        (&param_1->Primitives,<Var46);
    if (pFVar32 == (FPrimitive *)0x0) break;
    uVar54 = uVar54 + 1;
    <Var46.Index = <Var46.Index + 1;
  } while ((int)<Var46.Index < 8);
  if ((int)uVar54 < 1) {
    uVar54 = 1;
  }
  local_408 = &___7FStaticMeshAttributes__6B_;
  local_400 = param_3;
  local_3e8 = uVar54;
  FStaticMeshAttributes::Register((FStaticMeshAttributes *)&local_408,false);
  FStaticMeshAttributes::RegisterPolygonObjectNameAttribute((FStaticMeshAttributes *)&local_408);
  UE::Math::TTransform<double>::ToMatrixWithScale(param_2,&local_168);
  pFVar33 = FMeshElementChannels::Get(local_400->VertexElements,0);
  pFVar34 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
            ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                    *)&pFVar33->Attributes,MeshAttribute::Vertex::Position);
  if (((pFVar34 == (FAttributesSetEntry *)0x0) ||
      (this_03 = (TMeshAttributeArraySet<UE::Math::TVector<float>_> *)(pFVar34->Ptr).Ptr,
      *(uint *)&this_03->_padding_ != 1)) || (*(uint *)((longlong)&this_03->_padding_ + 4) != 1)) {
    this_03 = (TMeshAttributeArraySet<UE::Math::TVector<float>_> *)0x0;
  }
  pTVar52 = (TMeshAttributeArraySet<FName> *)0x0;
  pFVar33 = FMeshElementChannels::Get(local_400->EdgeElements,0);
  pFVar34 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
            ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                    *)&pFVar33->Attributes,MeshAttribute::Edge::IsHard);
  if (((pFVar34 == (FAttributesSetEntry *)0x0) ||
      (local_2f8.ArrayPtr = (pFVar34->Ptr).Ptr,
      *(uint *)&((TMeshAttributeArraySet<FName> *)local_2f8.ArrayPtr)->_padding_ != 5)) ||
     (*(uint *)((longlong)&((TMeshAttributeArraySet<FName> *)local_2f8.ArrayPtr)->_padding_ + 4) !=
      1)) {
    local_2f8.ArrayPtr = (FMeshAttributeArraySetBase *)pTVar52;
  }
  pFVar33 = FMeshElementChannels::Get(local_400->PolygonGroupElements,0);
  pFVar34 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
            ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                    *)&pFVar33->Attributes,MeshAttribute::PolygonGroup::ImportedMaterialSlotName);
  if (((pFVar34 == (FAttributesSetEntry *)0x0) ||
      (this_04 = (TMeshAttributeArraySet<FName> *)(pFVar34->Ptr).Ptr,
      *(uint *)&this_04->_padding_ != 6)) || (*(uint *)((longlong)&this_04->_padding_ + 4) != 1)) {
    this_04 = pTVar52;
  }
  pFVar33 = FMeshElementChannels::Get(local_400->VertexInstanceElements,0);
  pFVar34 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
            ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                    *)&pFVar33->Attributes,MeshAttribute::VertexInstance::Normal);
  if (((pFVar34 == (FAttributesSetEntry *)0x0) ||
      (local_310.ArrayPtr = (pFVar34->Ptr).Ptr,
      *(uint *)&((TMeshAttributeArraySet<FName> *)local_310.ArrayPtr)->_padding_ != 1)) ||
     (*(uint *)((longlong)&((TMeshAttributeArraySet<FName> *)local_310.ArrayPtr)->_padding_ + 4) !=
      1)) {
    local_310.ArrayPtr = (FMeshAttributeArraySetBase *)pTVar52;
  }
  pFVar33 = FMeshElementChannels::Get(local_400->VertexInstanceElements,0);
  pFVar34 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
            ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                    *)&pFVar33->Attributes,MeshAttribute::VertexInstance::Tangent);
  if (((pFVar34 == (FAttributesSetEntry *)0x0) ||
      (local_318.ArrayPtr = (pFVar34->Ptr).Ptr,
      *(uint *)&((TMeshAttributeArraySet<FName> *)local_318.ArrayPtr)->_padding_ != 1)) ||
     (*(uint *)((longlong)&((TMeshAttributeArraySet<FName> *)local_318.ArrayPtr)->_padding_ + 4) !=
      1)) {
    local_318.ArrayPtr = (FMeshAttributeArraySetBase *)pTVar52;
  }
  pFVar33 = FMeshElementChannels::Get(local_400->VertexInstanceElements,0);
  pFVar34 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
            ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                    *)&pFVar33->Attributes,MeshAttribute::VertexInstance::BinormalSign);
  if (((pFVar34 == (FAttributesSetEntry *)0x0) ||
      (local_2f0.ArrayPtr = (pFVar34->Ptr).Ptr,
      *(uint *)&((TMeshAttributeArraySet<FName> *)local_2f0.ArrayPtr)->_padding_ != 3)) ||
     (*(uint *)((longlong)&((TMeshAttributeArraySet<FName> *)local_2f0.ArrayPtr)->_padding_ + 4) !=
      1)) {
    local_2f0.ArrayPtr = (FMeshAttributeArraySetBase *)pTVar52;
  }
  pFVar33 = FMeshElementChannels::Get(local_400->VertexInstanceElements,0);
  pFVar34 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
            ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                    *)&pFVar33->Attributes,MeshAttribute::VertexInstance::TextureCoordinate);
  if (((pFVar34 == (FAttributesSetEntry *)0x0) ||
      (this_06 = (TMeshAttributeArraySet<FName> *)(pFVar34->Ptr).Ptr,
      *(uint *)&this_06->_padding_ != 2)) || (*(uint *)((longlong)&this_06->_padding_ + 4) != 1)) {
    this_06 = pTVar52;
  }
  local_308.ArrayPtr = (FMeshAttributeArraySetBase *)this_06;
  pFVar33 = FMeshElementChannels::Get(local_400->VertexInstanceElements,0);
  pFVar34 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
            ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                    *)&pFVar33->Attributes,MeshAttribute::VertexInstance::Color);
  if (((pFVar34 == (FAttributesSetEntry *)0x0) ||
      (local_300.ArrayPtr = (pFVar34->Ptr).Ptr,
      *(uint *)&((TMeshAttributeArraySet<FName> *)local_300.ArrayPtr)->_padding_ != 0)) ||
     (*(uint *)((longlong)&((TMeshAttributeArraySet<FName> *)local_300.ArrayPtr)->_padding_ + 4) !=
      1)) {
    local_300.ArrayPtr = (FMeshAttributeArraySetBase *)pTVar52;
  }
  pFVar33 = FMeshElementChannels::Get(local_400->PolygonElements,0);
  pFVar34 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
            ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                    *)&pFVar33->Attributes,MeshAttribute::Polygon::ObjectName);
  if (((pFVar34 == (FAttributesSetEntry *)0x0) ||
      (local_320.ArrayPtr = (pFVar34->Ptr).Ptr,
      *(uint *)&((TMeshAttributeArraySet<FName> *)local_320.ArrayPtr)->_padding_ != 6)) ||
     (*(uint *)((longlong)&((TMeshAttributeArraySet<FName> *)local_320.ArrayPtr)->_padding_ + 4) !=
      1)) {
    local_320.ArrayPtr = (FMeshAttributeArraySetBase *)pTVar52;
  }
  TMeshAttributeArraySet<UE::Math::TVector2<float>_>::SetNumChannels
            ((TMeshAttributeArraySet<UE::Math::TVector2<float>_> *)this_06,uVar54);
  pTVar1 = &this->MaterialIndicesUsed;
  for (lVar42 = 0x3f; 0x19UL >> lVar42 == 0; lVar42 = lVar42 + -1) {
  }
  iVar53 = 1 << ((byte)lVar42 & 0x1f);
  local_350 = (undefined4)lVar42;
  iVar30 = (this->MaterialIndicesUsed).HashSize;
  if ((iVar30 < iVar53) || (iVar53 < iVar30)) {
    TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Empty(&pTVar1->Elements,10);
    (this->MaterialIndicesUsed).HashSize = iVar53;
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Rehash(pTVar1);
  }
  else {
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::UnhashElements(pTVar1);
    TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Empty(&pTVar1->Elements,10);
  }
  piVar2 = &(this->PositionIndexToVertexIdPerPrim).ArrayNum;
  uVar54 = *piVar2;
  this_00 = &this->PositionIndexToVertexIdPerPrim;
  uVar51 = uVar54;
  if ((int)uVar54 < (local_418->Primitives).ArrayNum) {
    uVar51 = (local_418->Primitives).ArrayNum;
  }
  if ((int)uVar54 < (int)uVar51) {
    iVar30 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x50,8,uVar51 - uVar54,&this_00->AllocatorInstance,piVar2,
                        &(this->PositionIndexToVertexIdPerPrim).ArrayMax);
    DefaultConstructItems<TMap<int,FVertexID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FVertexID,0>_>,int>
              ((this_00->AllocatorInstance).Data + (longlong)iVar30 * 0x50,uVar51 - uVar54);
  }
  else {
    if ((int)uVar51 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar51);
    }
    if ((int)uVar51 < (int)uVar54) {
      uVar54 = uVar54 - uVar51;
      if (((int)(uVar54 | uVar51) < 0) &&
         (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x458,
                              L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                             ), bVar27)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      if (uVar54 != 0) {
        TArray<TMap<int,FVertexID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FVertexID,0>_>,TSizedDefaultAllocator<32>_>
        ::RemoveAtImpl(this_00,uVar51,uVar54);
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x50,8,&this_00->AllocatorInstance,
                   (this->PositionIndexToVertexIdPerPrim).ArrayNum,
                   &(this->PositionIndexToVertexIdPerPrim).ArrayMax);
      }
    }
  }
  dVar23 = __real_3ff0000000000000;
  local_410 = 0;
  if (0 < (local_418->Primitives).ArrayNum) {
    local_3a8 = 0;
    local_3a0 = 0;
    local_378 = 0;
    do {
      lVar42 = local_378;
      uVar51 = ~local_410;
      uVar54 = 0;
      if ((int)local_410 < (local_418->Primitives).ArrayNum) {
        uVar54 = uVar51 >> 0x1f;
      }
      if ((uVar54 == 0) &&
         (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar27)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      pFVar32 = (FPrimitive *)((local_418->Primitives).AllocatorInstance.Data + lVar42);
      if ((pFVar32->bIsValidCache).bIsSet == false) {
        cVar29 = FPrimitive::IsValidPrivate(pFVar32);
      }
      else {
        cVar29 = (pFVar32->bIsValidCache).TypedValue;
      }
      if (cVar29 == '\0') {
        pFVar35 = FText::FromString(&local_e8,&local_418->Name);
        pFVar36 = FText::AsLocalizable_Advanced_LocText
                            (&local_180,L"InterchangeGLTFMeshFactory",L"InvalidMeshPrimitive",
                             L"Mesh has an invalid primitive : {0}");
        pFVar37 = FTextFormat::FTextFormat(&local_d8,pFVar36,Default);
        local_248.Type = Text;
        FText::FText((FText *)&local_248.TextValue,pFVar35);
        if ((local_248.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
           (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsSet()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                ,0xbd,
                                L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                               ), bVar27)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        local_3c0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_3c0.ArrayNum = 1;
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,1,0,&local_3c0.AllocatorInstance,1,&local_3c0.ArrayMax);
        ConstructItems<FFormatArgumentValue,FFormatArgumentValue,int>
                  (local_3c0.AllocatorInstance.Data,&local_248,1);
        local_258.TextFormatData.Object = (pFVar37->TextFormatData).Object;
        local_258.TextFormatData.SharedReferenceCount.ReferenceController =
             (pFVar37->TextFormatData).SharedReferenceCount.ReferenceController;
        if (local_258.TextFormatData.SharedReferenceCount.ReferenceController !=
            (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_258.TextFormatData.SharedReferenceCount.ReferenceController)->SharedReferenceCount
               = (atomic<int>)
                 ((int)(local_258.TextFormatData.SharedReferenceCount.ReferenceController)->
                       SharedReferenceCount + 1);
          UNLOCK();
        }
        FText::Format(&local_2b8,&local_258,&local_3c0);
        DestructItems<FFormatArgumentValue,int>
                  ((FFormatArgumentValue *)local_3c0.AllocatorInstance.Data,local_3c0.ArrayNum);
        if ((FFormatArgumentValue *)local_3c0.AllocatorInstance.Data != (FFormatArgumentValue *)0x0)
        {
          FMemory::Free(local_3c0.AllocatorInstance.Data);
        }
        if (local_248.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)
                       *(ITextData *)local_248.TextValue.field0_0x0.TypedValue.TextData.Reference +
                      0x10))();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((pFVar37->TextFormatData).SharedReferenceCount.ReferenceController);
        pIVar10 = (pFVar35->TextData).Reference;
        if (pIVar10 != (ITextData *)0x0) {
          (**(code **)((longlong)*pIVar10 + 0x10))();
        }
        iVar30 = (int)this->_padding_;
        piVar2 = (int *)((longlong)&this->_padding_ + 4);
        if (iVar30 == *piVar2) {
          iVar30 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x818,(ForAnyElementType *)this,piVar2);
        }
        *(int *)&this->_padding_ = iVar30 + 1;
        lVar41 = this->_padding_;
        lVar42 = (longlong)iVar30 * 3 + 1;
        *(undefined4 *)(lVar41 + -8 + lVar42 * 8) = 1;
        FText::FText((FText *)(lVar41 + lVar42 * 8),&local_2b8);
        if (local_2b8.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_2b8.TextData.Reference + 0x10))();
        }
        if (local_180.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_180.TextData.Reference + 0x10))();
        }
      }
      else {
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                  (&this->MaterialIndicesUsed,&local_34c,(bool *)&pFVar32->MaterialIndex);
        uVar54 = this->VectorBuffers[1].ArrayMax;
        pTVar3 = this->VectorBuffers + 1;
        if ((int)uVar54 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar54);
        }
        piVar2 = &this->VectorBuffers[1].ArrayMax;
        this->VectorBuffers[1].ArrayNum = 0;
        if (*piVar2 != uVar54) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0xc,4,uVar54,&pTVar3->AllocatorInstance,0,piVar2);
        }
        if (((int)pFVar32->_padding_ < 1) || (*(char *)pFVar32->_padding_ != '\0')) {
          this_02 = &EmptyAccessor;
        }
        else {
          this_02 = *(FAccessor **)((char *)pFVar32->_padding_ + 8);
        }
        FAccessor::GetCoordArray(this_02,pTVar3);
        local_3b0[0] = POSITIONS;
        UpdateVector3fFromMorphTargets(this,pTVar3,pFVar32,local_380,local_3b0);
        uVar54 = 0;
        if ((int)local_410 < (this->PositionIndexToVertexIdPerPrim).ArrayNum) {
          uVar54 = uVar51 >> 0x1f;
        }
        if ((uVar54 == 0) &&
           (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar27)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        this_05 = (TSet<TTuple<int,FVertexID>,TDefaultMapHashableKeyFuncs<int,FVertexID,0>,FDefaultSetAllocator>
                   *)((this->PositionIndexToVertexIdPerPrim).AllocatorInstance.Data + local_3a0);
        TSet<TTuple<int,FVertexID>,TDefaultMapHashableKeyFuncs<int,FVertexID,0>,FDefaultSetAllocator>
        ::Empty(this_05,this->VectorBuffers[1].ArrayNum);
        pFVar25 = local_3d8;
        lVar48 = 0;
        lVar42 = lVar48;
        lVar41 = lVar48;
        lVar43 = lVar48;
        do {
          if (*(double *)((longlong)UE::Math::TMatrix<double>::Identity.M[0] + lVar42) !=
              *(double *)((longlong)local_168.M[0] + lVar42)) {
            local_420[0] = 0;
            if (0 < this->VectorBuffers[1].ArrayNum) {
              do {
                pFVar33 = FMeshElementChannels::Get(pFVar25->VertexElements,0);
                local_3f4 = FMeshElementContainer::Add(pFVar33);
                lVar42 = (longlong)(int)local_420[0];
                uVar54 = 0;
                if ((int)local_420[0] < this->VectorBuffers[1].ArrayNum) {
                  uVar54 = ~local_420[0] >> 0x1f;
                }
                if ((uVar54 == 0) &&
                   (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar27)) {
                  pcVar12 = (code *)swi(3);
                  (*pcVar12)();
                  return;
                }
                iVar30 = local_3f4;
                fVar5 = this->ImportUniformScale;
                pFVar45 = (pTVar3->AllocatorInstance).Data;
                dVar57 = (double)(fVar5 * *(float *)(pFVar45 + lVar42 * 0xc));
                dVar13 = (double)(fVar5 * *(float *)(pFVar45 + lVar42 * 0xc + 4));
                dVar55 = (double)(fVar5 * *(float *)(pFVar45 + lVar42 * 0xc + 8));
                dVar14 = dVar57 * local_168.M[0][0];
                dVar16 = dVar57 * local_168.M[0][1];
                dVar57 = dVar57 * local_168.M[0][2];
                dVar20 = dVar13 * local_168.M[1][0];
                dVar21 = dVar13 * local_168.M[1][1];
                dVar13 = dVar13 * local_168.M[1][2];
                dVar18 = dVar55 * local_168.M[2][0];
                dVar19 = dVar55 * local_168.M[2][1];
                dVar55 = dVar55 * local_168.M[2][2];
                dVar15 = dVar23 * local_168.M[3][0];
                dVar17 = dVar23 * local_168.M[3][1];
                dVar56 = dVar23 * local_168.M[3][2];
                pTVar38 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel
                                    (this_03,0);
                pTVar39 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase
                                    (pTVar38,iVar30);
                (pTVar39->field0_0x0)._s_0.X = (float)(dVar20 + dVar14 + dVar18 + dVar15);
                (pTVar39->field0_0x0)._s_0.Y = (float)(dVar21 + dVar16 + dVar19 + dVar17);
                (pTVar39->field0_0x0)._s_0.Z = (float)(dVar13 + dVar57 + dVar55 + dVar56);
                local_298 = local_420;
                local_290 = &local_3f4;
                TSet<TTuple<int,FVertexID>,TDefaultMapHashableKeyFuncs<int,FVertexID,0>,FDefaultSetAllocator>
                ::Emplace<TPairInitializer<int_const_&,FVertexID_const_&>_>
                          (this_05,(TPairInitializer<int_const_&,FVertexID_const_&> *)
                                   (local_348 + 4),(bool *)&local_298);
                local_420[0] = local_420[0] + 1;
              } while ((int)local_420[0] < this->VectorBuffers[1].ArrayNum);
            }
            goto LAB_14e634f87;
          }
          lVar41 = lVar41 + 1;
          lVar42 = lVar42 + 8;
        } while ((lVar41 < 4) ||
                (lVar42 = lVar43 + 0x20, lVar41 = lVar48, lVar43 = lVar42, lVar42 < 0x80));
        local_424 = 0;
        if (0 < this->VectorBuffers[1].ArrayNum) {
          do {
            pFVar33 = FMeshElementChannels::Get(pFVar25->VertexElements,0);
            local_3f8 = FMeshElementContainer::Add(pFVar33);
            lVar42 = (longlong)(int)local_424;
            uVar54 = 0;
            if ((int)local_424 < this->VectorBuffers[1].ArrayNum) {
              uVar54 = ~local_424 >> 0x1f;
            }
            if ((uVar54 == 0) &&
               (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar27)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            iVar30 = local_3f8;
            pFVar45 = (pTVar3->AllocatorInstance).Data;
            fVar5 = this->ImportUniformScale;
            fVar6 = *(float *)(pFVar45 + lVar42 * 0xc);
            fVar7 = *(float *)(pFVar45 + lVar42 * 0xc + 4);
            fVar8 = *(float *)(pFVar45 + lVar42 * 0xc + 8);
            pTVar38 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel
                                (this_03,0);
            pTVar39 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase
                                (pTVar38,iVar30);
            (pTVar39->field0_0x0)._s_0.X = fVar5 * fVar6;
            (pTVar39->field0_0x0)._s_0.Y = fVar5 * fVar7;
            (pTVar39->field0_0x0)._s_0.Z = fVar5 * fVar8;
            local_2a8 = &local_424;
            local_2a0 = &local_3f8;
            TSet<TTuple<int,FVertexID>,TDefaultMapHashableKeyFuncs<int,FVertexID,0>,FDefaultSetAllocator>
            ::Emplace<TPairInitializer<int_const_&,FVertexID_const_&>_>
                      (this_05,(TPairInitializer<int_const_&,FVertexID_const_&> *)local_348,
                       (bool *)&local_2a8);
            local_424 = local_424 + 1;
          } while ((int)local_424 < this->VectorBuffers[1].ArrayNum);
        }
      }
LAB_14e634f87:
      local_410 = local_410 + 1;
      local_378 = local_378 + 0xa0;
      local_3a8 = local_3a8 + 1;
      local_3a0 = local_3a0 + 0x50;
    } while ((int)local_410 < (local_418->Primitives).ArrayNum);
  }
  for (lVar42 = 0x3f; 0x19UL >> lVar42 == 0; lVar42 = lVar42 + -1) {
  }
  iVar53 = 1 << ((byte)lVar42 & 0x1f);
  local_340 = (undefined4)lVar42;
  iVar30 = *(int *)&(this->MaterialIndexToPolygonGroupID).field_0x48;
  if ((iVar30 < iVar53) || (iVar53 < iVar30)) {
    TSparseArray<TSparseSetElement<TTuple<int,FPolygonGroupID>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Empty((TSparseArray<TSparseSetElement<TTuple<int,FPolygonGroupID>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)&this->MaterialIndexToPolygonGroupID,10);
    *(int *)&(this->MaterialIndexToPolygonGroupID).field_0x48 = iVar53;
    TSet<TTuple<int,FPolygonGroupID>,TDefaultMapHashableKeyFuncs<int,FPolygonGroupID,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<int,FPolygonGroupID>,TDefaultMapHashableKeyFuncs<int,FPolygonGroupID,0>,FDefaultSetAllocator>
              *)&this->MaterialIndexToPolygonGroupID);
  }
  else {
    TSet<TTuple<int,FPolygonGroupID>,TDefaultMapHashableKeyFuncs<int,FPolygonGroupID,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<int,FPolygonGroupID>,TDefaultMapHashableKeyFuncs<int,FPolygonGroupID,0>,FDefaultSetAllocator>
                      *)&this->MaterialIndexToPolygonGroupID);
    TSparseArray<TSparseSetElement<TTuple<int,FPolygonGroupID>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Empty((TSparseArray<TSparseSetElement<TTuple<int,FPolygonGroupID>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)&this->MaterialIndexToPolygonGroupID,10);
  }
  local_370._padding_._4_4_ = 1;
  local_370.Array =
       (TBitArray<FDefaultBitArrayAllocator> *)&(this->MaterialIndicesUsed).Elements.field_0x10;
  local_370._padding_._0_4_ = 0;
  local_370.UnvisitedBitMask = 0xffffffff;
  local_370.CurrentBitIndex = 0;
  local_370.BaseBitIndex = 0;
  if (*(int *)&(this->MaterialIndicesUsed).Elements.field_0x28 != 0) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_370);
  }
  uVar54 = *(uint *)&(this->MaterialIndicesUsed).Elements.field_0x28;
  local_2e8 = &this->MaterialIndicesUsed;
  TStack_2e0._padding_ = CONCAT44(local_370._padding_._4_4_,(undefined4)local_370._padding_);
  TStack_2e0.CurrentBitIndex = local_370.CurrentBitIndex;
  TStack_2e0.UnvisitedBitMask = local_370.UnvisitedBitMask;
  TStack_2e0._28_4_ = local_370._28_4_;
  TStack_2e0.BaseBitIndex = local_370.BaseBitIndex;
  local_1c0 = *(int *)&(this->MaterialIndicesUsed).Elements.field_0x8 -
              *(int *)&(this->MaterialIndicesUsed).Elements.field_0x34;
  pTStack_1d8 = local_370.Array;
  uVar51 = uVar54 & 0xffffffe0;
  iVar30 = (int)uVar54 >> 5;
  uStack_2c0 = CONCAT44(uStack_1bc,local_1c0);
  TStack_2e0.Array = local_370.Array;
  local_1e8 = local_2e8;
  lStack_1e0 = TStack_2e0._padding_;
  uStack_1d0 = TStack_2e0._16_8_;
  uStack_1c8 = TStack_2e0._24_8_;
  if (((int)uVar54 < 0) &&
     (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar27)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  uVar9 = *(uint *)&(this->MaterialIndicesUsed).Elements.field_0x28;
  if (uVar54 != uVar9) {
    puVar11 = *(undefined1 **)&(this->MaterialIndicesUsed).Elements.field_0x20;
    puVar49 = &(this->MaterialIndicesUsed).Elements.field_0x10;
    if (puVar11 != (undefined1 *)0x0) {
      puVar49 = puVar11;
    }
    uVar54 = -1 << ((byte)uVar54 & 0x1f) & *(uint *)(puVar49 + (longlong)iVar30 * 4);
    while (uVar54 == 0) {
      lVar42 = (longlong)iVar30;
      uVar51 = uVar51 + 0x20;
      iVar30 = iVar30 + 1;
      uVar54 = uVar9;
      if ((int)((uVar9 - 1) + ((int)(uVar9 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar30) goto LAB_14e635151;
      uVar54 = *(uint *)(puVar49 + lVar42 * 4 + 4);
    }
    uVar4 = (ulonglong)(-uVar54 & uVar54) * 2 + 1;
    lVar42 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar42 == 0; lVar42 = lVar42 + -1) {
      }
    }
    local_33c = (int)lVar42;
    uVar54 = (uVar51 - 1) + local_33c;
    if ((int)uVar9 < (int)uVar54) {
      uVar54 = uVar9;
    }
  }
LAB_14e635151:
  while( true ) {
    pTVar1 = local_2e8;
    if (*(int *)&(local_2e8->Elements).field_0x8 - *(int *)&(local_2e8->Elements).field_0x34 !=
        (int)uStack_2c0) {
      local_428[0] = 0;
      `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_428);
    }
    FVar24 = local_3e0;
    if (((TStack_2e0.CurrentBitIndex == uVar54) &&
        (TStack_2e0.Array ==
         (TBitArray<FDefaultBitArrayAllocator> *)&(this->MaterialIndicesUsed).Elements.field_0x10))
       && (pTVar1 == &this->MaterialIndicesUsed)) break;
    local_3f0 = *(int *)(*(longlong *)&pTVar1->Elements + (longlong)TStack_2e0.CurrentBitIndex * 0xc
                        );
    pFVar33 = FMeshElementChannels::Get(local_3d8->PolygonGroupElements,0);
    local_3ec = FMeshElementContainer::Add(pFVar33);
    local_288 = &local_3f0;
    local_280 = &local_3ec;
    TSet<TTuple<int,FPolygonGroupID>,TDefaultMapHashableKeyFuncs<int,FPolygonGroupID,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<int_const_&,FPolygonGroupID_const_&>_>
              ((TSet<TTuple<int,FPolygonGroupID>,TDefaultMapHashableKeyFuncs<int,FPolygonGroupID,0>,FDefaultSetAllocator>
                *)&this->MaterialIndexToPolygonGroupID,&local_338,(bool *)&local_288);
    local_390.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_390.Data.ArrayNum = 0;
    local_390.Data.ArrayMax = 0;
    ::FString::AppendInt(&local_390,local_3f0);
    FVar44.Data = (FScriptContainerElement *)L"";
    if (local_390.Data.ArrayNum != 0) {
      FVar44.Data = local_390.Data.AllocatorInstance.Data;
    }
    ::FName::FName((FName *)&local_338.Value,(wchar_t *)FVar44.Data);
    if (local_390.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_390.Data.AllocatorInstance.Data);
    }
    pFVar26 = local_338.Value;
    iVar30 = local_3ec;
    this_01 = TMeshAttributeArraySet<FName>::GetArrayForChannel(this_04,0);
    pFVar31 = TMeshAttributeArrayBase<FName>::GetElementBase(this_01,iVar30);
    *pFVar31 = (FName)pFVar26;
    TStack_2e0.UnvisitedBitMask = TStack_2e0.UnvisitedBitMask & ~TStack_2e0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_2e0);
  }
  bVar27 = false;
  uVar54 = 0;
  if (0 < (local_418->Primitives).ArrayNum) {
    lVar42 = 0;
    pTVar47 = local_398;
    do {
      uVar51 = 0;
      if ((int)uVar54 < pTVar47->ArrayNum) {
        uVar51 = ~uVar54 >> 0x1f;
      }
      if ((uVar51 == 0) &&
         (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar28)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      pFVar32 = (FPrimitive *)((pTVar47->AllocatorInstance).Data + lVar42);
      if ((pFVar32->bIsValidCache).bIsSet == false) {
        cVar29 = FPrimitive::IsValidPrivate(pFVar32);
      }
      else {
        cVar29 = (pFVar32->bIsValidCache).TypedValue;
      }
      if (cVar29 != '\0') {
        pFVar45 = (pTVar47->AllocatorInstance).Data;
        pFVar50 = pFVar45 + (longlong)pTVar47->ArrayNum * 0xa0;
        for (; pFVar45 != pFVar50; pFVar45 = pFVar45 + 0xa0) {
          if ((0xb < *(int *)(pFVar45 + 8)) && (*(char *)(*(longlong *)pFVar45 + 0xb0) == '\v')) {
            lVar41 = *(longlong *)(*(longlong *)pFVar45 + 0xb8);
            if ((*(longlong *)(lVar41 + 0x98) == 0) && (*(char *)(lVar41 + 0x18) == '\0')) {
              bVar28 = false;
            }
            else {
              bVar28 = true;
            }
            if (bVar28) {
              bVar28 = pFVar45 != (FScriptContainerElement *)0x0;
              pFVar45 = (pTVar47->AllocatorInstance).Data;
              pFVar50 = pFVar45 + (longlong)pTVar47->ArrayNum * 0xa0;
              goto LAB_14e635390;
            }
          }
        }
        pFVar45 = (pTVar47->AllocatorInstance).Data;
        bVar28 = false;
        pFVar50 = pFVar45 + (longlong)pTVar47->ArrayNum * 0xa0;
        if (pFVar45 != pFVar50) {
LAB_14e635390:
          do {
            if ((2 < *(int *)(pFVar45 + 8)) && (*(char *)(*(longlong *)pFVar45 + 0x20) == '\x02')) {
              lVar41 = *(longlong *)(*(longlong *)pFVar45 + 0x28);
              if ((*(longlong *)(lVar41 + 0x98) == 0) && (*(char *)(lVar41 + 0x18) == '\0')) {
                bVar22 = false;
              }
              else {
                bVar22 = true;
              }
              if (bVar22) goto LAB_14e6353ea;
            }
            pFVar45 = pFVar45 + 0xa0;
          } while (pFVar45 != pFVar50);
        }
        pFVar45 = (FScriptContainerElement *)0x0;
LAB_14e6353ea:
        bVar28 = ImportPrimitive(this,pFVar32,FVar24,uVar54,local_3e8,
                                 pFVar45 != (FScriptContainerElement *)0x0,bVar28,&local_310,
                                 &local_318,&local_2f0,&local_308,&local_300,&local_2f8,&local_320,
                                 local_328,local_3d8,local_380);
        bVar27 = (bool)(bVar27 | pFVar32->MaterialIndex == -1);
        uVar51 = 0;
        if (0 < (int)local_3e8) {
          while (uVar51 < 8) {
            bVar40 = (byte)(uVar51 + 3);
            if (((int)pFVar32->_padding_ <= (int)(uVar51 + 3 & 0xff)) ||
               (*(byte *)(pFVar32->_padding_ + (ulonglong)bVar40 * 0x10) != bVar40)) break;
            lVar41 = *(longlong *)(pFVar32->_padding_ + 8 + (ulonglong)bVar40 * 0x10);
            if ((*(longlong *)(lVar41 + 0x98) == 0) && (*(char *)(lVar41 + 0x18) == '\0')) {
              bVar22 = false;
            }
            else {
              bVar22 = true;
            }
            if ((!bVar22) || (uVar51 = uVar51 + 1, (int)local_3e8 <= (int)uVar51)) break;
          }
        }
        if (bVar28) {
          pFVar35 = FText::FromString(&local_c8,&local_418->Name);
          pFVar36 = FText::AsLocalizable_Advanced_LocText
                              (&local_1b8,L"InterchangeGLTFMeshFactory",
                               L"PrimitiveFoundDegenerateTriangles",
                               L"Mesh {0} has primitive with degenerate triangles: {1}");
          pFVar37 = FTextFormat::FTextFormat(&local_b8,pFVar36,Default);
          local_228.Type = Text;
          FText::FText((FText *)&local_228.TextValue,pFVar35);
          if ((local_228.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
             (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsSet()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                  ,0xbd,
                                  L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                                 ), bVar28)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          local_200 = (longlong)(int)uVar54;
          local_208 = 0;
          local_1f8 = (longlong *)0x0;
          local_1f0 = 0;
          local_3d0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_3d0.ArrayNum = 2;
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x20,8,2,0,&local_3d0.AllocatorInstance,2,&local_3d0.ArrayMax);
          ConstructItems<FFormatArgumentValue,FFormatArgumentValue,int>
                    (local_3d0.AllocatorInstance.Data,&local_228,2);
          local_278.TextFormatData.Object = (pFVar37->TextFormatData).Object;
          local_278.TextFormatData.SharedReferenceCount.ReferenceController =
               (pFVar37->TextFormatData).SharedReferenceCount.ReferenceController;
          if (local_278.TextFormatData.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_278.TextFormatData.SharedReferenceCount.ReferenceController)->
            SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_278.TextFormatData.SharedReferenceCount.ReferenceController)->
                       SharedReferenceCount + 1);
            UNLOCK();
          }
          FText::Format(&local_268,&local_278,&local_3d0);
          DestructItems<FFormatArgumentValue,int>
                    ((FFormatArgumentValue *)local_3d0.AllocatorInstance.Data,local_3d0.ArrayNum);
          if ((FFormatArgumentValue *)local_3d0.AllocatorInstance.Data !=
              (FFormatArgumentValue *)0x0) {
            FMemory::Free(local_3d0.AllocatorInstance.Data);
          }
          if (local_1f8 != (longlong *)0x0) {
            (**(code **)(*local_1f8 + 0x10))();
          }
          if (local_228.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)
                         *(ITextData *)local_228.TextValue.field0_0x0.TypedValue.TextData.Reference
                        + 0x10))();
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((pFVar37->TextFormatData).SharedReferenceCount.ReferenceController);
          pIVar10 = (pFVar35->TextData).Reference;
          if (pIVar10 != (ITextData *)0x0) {
            (**(code **)((longlong)*pIVar10 + 0x10))();
          }
          iVar30 = (int)this->_padding_;
          piVar2 = (int *)((longlong)&this->_padding_ + 4);
          if (iVar30 == *piVar2) {
            iVar30 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x818,(ForAnyElementType *)this,piVar2);
          }
          *(int *)&this->_padding_ = iVar30 + 1;
          lVar43 = this->_padding_;
          lVar41 = (longlong)iVar30 * 3 + 1;
          *(undefined4 *)(lVar43 + -8 + lVar41 * 8) = 1;
          FText::FText((FText *)(lVar43 + lVar41 * 8),&local_268);
          if (local_268.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_268.TextData.Reference + 0x10))();
          }
          pTVar47 = local_398;
          if (local_1b8.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_1b8.TextData.Reference + 0x10))();
            pTVar47 = local_398;
          }
        }
      }
      uVar54 = uVar54 + 1;
      lVar42 = lVar42 + 0xa0;
    } while ((int)uVar54 < (local_418->Primitives).ArrayNum);
    if (bVar27) {
      pFVar35 = FText::FromString(local_98,&local_418->Name);
      pFVar36 = FText::AsLocalizable_Advanced_LocText
                          (&local_198,L"InterchangeGLTFMeshFactory",L"PrimitiveNoMaterialsAssigned",
                           L"Mesh has primitives with no materials assigned: {0}");
      pFVar37 = FTextFormat::FTextFormat(&local_a8,pFVar36,Default);
      pFVar35 = FText::Format<FText>(&local_1a8,pFVar37,pFVar35);
      piVar2 = (int *)((longlong)&this->_padding_ + 4);
      iVar30 = (int)this->_padding_;
      if (iVar30 == *piVar2) {
        iVar30 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x818,(ForAnyElementType *)this,piVar2);
      }
      *(int *)&this->_padding_ = iVar30 + 1;
      lVar41 = this->_padding_;
      lVar42 = (longlong)iVar30 * 3 + 1;
      *(undefined4 *)(lVar41 + -8 + lVar42 * 8) = 1;
      FText::FText((FText *)(lVar41 + lVar42 * 8),pFVar35);
      if (local_1a8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_1a8.TextData.Reference + 0x10))();
      }
      if (local_198.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_198.TextData.Reference + 0x10))();
      }
    }
  }
  return;
}

// GetVector2dBuffer @ 14e640410

TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> * __thiscall
GLTF::FMeshFactoryImpl::GetVector2dBuffer(FMeshFactoryImpl *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *pTVar3;
  ulonglong uVar4;
  uint uVar5;
  
  uVar4 = (ulonglong)param_1;
  if (9 < uVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index < (sizeof(Vector2dBuffers) / sizeof(Vector2dBuffers[0]))",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Parsers\\GLTFCore\\Private\\GLTFMeshFactory.cpp"
                       ,0x3c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar3;
    }
  }
  pTVar3 = this->Vector2dBuffers + uVar4;
  uVar5 = (this->Vector2dBuffers[uVar4].ArrayNum - this->Vector2dBuffers[uVar4].ArrayNum) +
          this->Vector2dBuffers[uVar4].ArrayMax;
  if (-1 < (int)uVar5) {
    pTVar3->ArrayNum = 0;
    if (pTVar3->ArrayMax != uVar5) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,uVar5,&pTVar3->AllocatorInstance,0,&pTVar3->ArrayMax);
    }
    return pTVar3;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar5);
}

// GetVector4dBuffer @ 14e6404d0

TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> * __thiscall
GLTF::FMeshFactoryImpl::GetVector4dBuffer(FMeshFactoryImpl *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> *pTVar3;
  ulonglong uVar4;
  uint uVar5;
  
  uVar4 = (ulonglong)param_1;
  if (3 < uVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index < (sizeof(Vector4dBuffers) / sizeof(Vector4dBuffers[0]))",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Parsers\\GLTFCore\\Private\\GLTFMeshFactory.cpp"
                       ,0x2c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar3;
    }
  }
  pTVar3 = this->Vector4dBuffers + uVar4;
  uVar5 = (this->Vector4dBuffers[uVar4].ArrayNum - this->Vector4dBuffers[uVar4].ArrayNum) +
          this->Vector4dBuffers[uVar4].ArrayMax;
  if (-1 < (int)uVar5) {
    pTVar3->ArrayNum = 0;
    if (pTVar3->ArrayMax != uVar5) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,0x10,uVar5,&pTVar3->AllocatorInstance,0,&pTVar3->ArrayMax);
    }
    return pTVar3;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar5);
}

// GetVectorBuffer @ 14e640580

TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> * __thiscall
GLTF::FMeshFactoryImpl::GetVectorBuffer(FMeshFactoryImpl *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *pTVar3;
  ulonglong uVar4;
  uint uVar5;
  
  uVar4 = (ulonglong)param_1;
  if (3 < uVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index < (sizeof(VectorBuffers) / sizeof(VectorBuffers[0]))",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Parsers\\GLTFCore\\Private\\GLTFMeshFactory.cpp"
                       ,0x34,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar3;
    }
  }
  pTVar3 = this->VectorBuffers + uVar4;
  uVar5 = (this->VectorBuffers[uVar4].ArrayNum - this->VectorBuffers[uVar4].ArrayNum) +
          this->VectorBuffers[uVar4].ArrayMax;
  if (-1 < (int)uVar5) {
    pTVar3->ArrayNum = 0;
    if (pTVar3->ArrayMax != uVar5) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,uVar5,&pTVar3->AllocatorInstance,0,&pTVar3->ArrayMax);
    }
    return pTVar3;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar5);
}

// ImportPrimitive @ 14e644490

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
GLTF::FMeshFactoryImpl::ImportPrimitive
          (FMeshFactoryImpl *this,FPrimitive *param_1,FName param_2,int param_3,int param_4,
          bool param_5,bool param_6,
          TMeshAttributesRef<FVertexInstanceID,UE::Math::TVector<float>_> *param_7,
          TMeshAttributesRef<FVertexInstanceID,UE::Math::TVector<float>_> *param_8,
          TMeshAttributesRef<FVertexInstanceID,float> *param_9,
          TMeshAttributesRef<FVertexInstanceID,UE::Math::TVector2<float>_> *param_10,
          TMeshAttributesRef<FVertexInstanceID,UE::Math::TVector4<float>_> *param_11,
          TMeshAttributesRef<FEdgeID,bool> *param_12,TMeshAttributesRef<FPolygonID,FName> *param_13,
          TTransform<double> *param_14,FMeshDescription *param_15,
          TArray<float,TSizedDefaultAllocator<32>_> *param_16)

{
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  int iVar7;
  FVertexID FVar8;
  TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *pTVar9;
  FMeshAttributeArraySetBase *pFVar10;
  code *pcVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double *pdVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  double dVar22;
  bool bVar23;
  int iVar24;
  int iVar25;
  float fVar26;
  float _Y;
  FPolygonGroupID FVar27;
  FMeshDescription *pFVar28;
  TMeshAttributesRef<FEdgeID,bool> *pTVar29;
  bool bVar30;
  undefined1 uVar31;
  byte bVar32;
  int iVar33;
  uint uVar34;
  int iVar35;
  FPolygonID FVar36;
  FVertexInstanceID FVar38;
  FPolygonID FVar39;
  FPolygonGroupID *pFVar40;
  TMatrix<double> *pTVar41;
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *pTVar42;
  TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> *pTVar43;
  TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> *pTVar44;
  TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> *pTVar45;
  FVertexID *pFVar46;
  FMeshElementContainer *pFVar47;
  TMeshAttributeArrayBase<UE::Math::TVector<float>_> *pTVar48;
  TVector<float> *pTVar49;
  TMeshAttributeArrayBase<FName> *this_00;
  FName *pFVar50;
  longlong lVar51;
  FAccessor *pFVar52;
  ulonglong uVar53;
  uint uVar54;
  longlong lVar55;
  longlong lVar56;
  uint uVar57;
  FScriptContainerElement *pFVar58;
  TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> *pTVar59;
  FMeshAttributeArraySetBase *pFVar60;
  uint uVar61;
  int *piVar62;
  FScriptContainerElement *pFVar63;
  FMeshFactoryImpl *pFVar64;
  uint uVar65;
  int *piVar66;
  uint uVar67;
  longlong lVar68;
  float fVar69;
  double dVar70;
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  double dVar75;
  double dVar76;
  double dVar77;
  double dVar78;
  float fVar79;
  float fVar80;
  float fVar81;
  undefined4 uVar82;
  undefined4 uVar83;
  undefined4 uVar84;
  undefined4 uVar85;
  undefined4 uVar86;
  undefined4 uVar87;
  undefined4 uVar88;
  undefined4 uVar89;
  undefined4 uVar90;
  undefined4 uVar91;
  undefined4 uVar92;
  undefined4 uVar93;
  undefined4 uVar94;
  undefined4 uVar95;
  undefined1 auStackY_558 [32];
  bool local_528;
  uint local_524;
  undefined1 local_51c;
  undefined1 local_51b;
  undefined1 local_51a;
  char local_519;
  undefined1 local_518;
  undefined1 local_517 [7];
  FMeshFactoryImpl *local_510;
  TArray<float,TSizedDefaultAllocator<32>_> *local_508;
  TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> *local_500;
  FPolygonGroupID local_4f8;
  ulonglong local_4f0;
  uint local_4e8;
  uint local_4e4;
  FPolygonID local_4e0;
  undefined8 local_4d8;
  float fStack_4d0;
  float fStack_4cc;
  uint local_4c8;
  double local_4b8;
  double dStack_4b0;
  TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> *local_4a8;
  double dStack_4a0;
  FName local_498;
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *local_490;
  uint local_488;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *local_480;
  TArray<FEdgeID,TSizedDefaultAllocator<32>_> local_478;
  TArray<FEdgeID,TSizedDefaultAllocator<32>_> local_468;
  TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> *local_458;
  double dStack_450;
  FMeshDescription *local_448;
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *local_440;
  undefined8 local_438;
  float fStack_430;
  float fStack_42c;
  Vector4dMorphTargetAttributes local_428;
  Vector3fMorphTargetAttributes local_424;
  Vector4dMorphTargetAttributes local_420;
  Vector3fMorphTargetAttributes local_41c;
  FLinearColor_u_0 local_418;
  TMeshAttributesRef<FVertexInstanceID,UE::Math::TVector<float>_> *local_408;
  TMeshAttributesRef<FVertexInstanceID,UE::Math::TVector<float>_> *local_400;
  TMeshAttributesRef<FVertexInstanceID,float> *local_3f8;
  TMeshAttributesRef<FVertexInstanceID,UE::Math::TVector2<float>_> *local_3f0;
  TMeshAttributesRef<FVertexInstanceID,UE::Math::TVector4<float>_> *local_3e8;
  TMeshAttributesRef<FEdgeID,bool> *local_3e0;
  undefined8 local_3d8;
  undefined4 uStack_3d0;
  undefined4 uStack_3cc;
  FVertexInstanceID *local_3c8;
  int iStack_3c0;
  undefined4 uStack_3bc;
  FVertexInstanceID *local_3b8;
  int iStack_3b0;
  undefined4 uStack_3ac;
  TVector<double>_u_0 local_3a8;
  float local_388;
  float fStack_384;
  float fStack_380;
  float fStack_37c;
  undefined4 local_378;
  undefined4 uStack_374;
  uint uStack_370;
  int iStack_36c;
  undefined4 local_368;
  undefined4 uStack_364;
  uint uStack_360;
  int iStack_35c;
  undefined4 local_358;
  undefined4 uStack_354;
  undefined4 uStack_350;
  undefined4 uStack_34c;
  undefined1 local_348 [16];
  double local_338;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  double local_328;
  double dStack_320;
  undefined4 local_318;
  undefined4 uStack_314;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  double local_308;
  TVector4<float>_u_0 local_2f8;
  TVector4<float>_u_0 local_2e8;
  TArrayView<FVertexInstanceID_const_,int> local_2d8;
  TArrayView<FVertexInstanceID_const_,int> local_2c8;
  float local_2b8;
  float fStack_2b4;
  float fStack_2b0;
  float fStack_2ac;
  undefined4 local_2a8;
  undefined4 uStack_2a4;
  uint uStack_2a0;
  int iStack_29c;
  undefined4 local_298;
  undefined4 uStack_294;
  uint uStack_290;
  int iStack_28c;
  undefined4 local_288;
  undefined4 uStack_284;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  undefined1 local_278 [16];
  double local_268;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  double local_258;
  double dStack_250;
  undefined4 local_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  TMatrix<double> local_238;
  TMatrix<double> local_1b8;
  undefined1 local_138 [8];
  FVertexID local_130;
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> local_128 [4];
  ulonglong local_e8;
  uint uVar37;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_558;
  local_438 = param_13;
  local_3e0 = param_12;
  local_3e8 = param_11;
  local_3f0 = param_10;
  local_3f8 = param_9;
  local_400 = param_8;
  local_448 = param_15;
  local_408 = param_7;
  local_508 = param_16;
  local_510 = this;
  local_498 = param_2;
  pFVar40 = TMapBase<int,FPolygonGroupID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FPolygonGroupID,0>_>
            ::FindChecked((TMapBase<int,FPolygonGroupID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FPolygonGroupID,0>_>
                           *)&this->MaterialIndexToPolygonGroupID,param_1->MaterialIndex);
  local_4f8 = *pFVar40;
  local_4c8 = FPrimitive::TriangleCount(param_1);
  pTVar1 = &this->IntBuffer;
  local_480 = pTVar1;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_>::Empty(pTVar1,(this->IntBuffer).ArrayMax);
  FPrimitive::GetTriangleIndices(param_1,pTVar1);
  bVar23 = false;
  UE::Math::TTransform<double>::ToMatrixWithScale(param_14,&local_1b8);
  pTVar41 = UE::Math::TMatrix<double>::Inverse(&local_1b8,&local_238);
  local_418._s_0.B = (float)*(undefined4 *)pTVar41->M[1];
  local_418._s_0.A = *(float *)((longlong)pTVar41->M[1] + 4);
  local_468.ArrayNum = *(int *)(pTVar41->M[1] + 1);
  local_468.ArrayMax = *(int *)((longlong)pTVar41->M[1] + 0xc);
  local_418._s_0.R = (float)*(undefined4 *)pTVar41->M[0];
  local_418._s_0.G = *(float *)((longlong)pTVar41->M[0] + 4);
  local_468.AllocatorInstance.Data._0_4_ = *(undefined4 *)(pTVar41->M[0] + 1);
  local_468.AllocatorInstance.Data._4_4_ = *(undefined4 *)((longlong)pTVar41->M[0] + 0xc);
  local_478.AllocatorInstance.Data._0_4_ = *(undefined4 *)pTVar41->M[2];
  local_478.AllocatorInstance.Data._4_4_ = *(undefined4 *)((longlong)pTVar41->M[2] + 4);
  local_3d8._0_4_ = *(undefined4 *)(pTVar41->M[2] + 1);
  local_3d8._4_4_ = *(undefined4 *)((longlong)pTVar41->M[2] + 0xc);
  local_478.ArrayNum = *(int *)pTVar41->M[3];
  local_478.ArrayMax = *(int *)((longlong)pTVar41->M[3] + 4);
  uStack_3d0 = *(undefined4 *)(pTVar41->M[3] + 1);
  uStack_3cc = *(undefined4 *)((longlong)pTVar41->M[3] + 0xc);
  auVar72 = *(undefined1 (*) [16])(pTVar41->M[0] + 2);
  auVar73 = *(undefined1 (*) [16])(pTVar41->M[1] + 2);
  uVar94 = auVar73._0_4_;
  uVar95 = auVar73._4_4_;
  local_4b8 = pTVar41->M[2][2];
  pdVar19 = pTVar41->M[2] + 3;
  local_318 = *(undefined4 *)pdVar19;
  uStack_314 = *(undefined4 *)((longlong)pTVar41->M[2] + 0x1c);
  local_4a8 = (TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> *)*pdVar19;
  pdVar19 = pTVar41->M[3] + 2;
  uStack_330 = *(undefined4 *)pdVar19;
  uStack_32c = *(undefined4 *)((longlong)pTVar41->M[3] + 0x14);
  dStack_4b0 = *pdVar19;
  pdVar19 = pTVar41->M[3] + 3;
  uStack_310 = *(undefined4 *)pdVar19;
  uStack_30c = *(undefined4 *)((longlong)pTVar41->M[3] + 0x1c);
  dStack_4a0 = *pdVar19;
  local_458 = auVar72._8_8_;
  dStack_450 = auVar73._8_8_;
  dVar12 = auVar72._0_8_;
  local_278._8_4_ = uVar94;
  local_278._0_8_ = dVar12;
  local_278._12_4_ = uVar95;
  local_348._8_4_ = uVar94;
  local_348._0_8_ = dVar12;
  local_348._12_4_ = uVar95;
  local_388 = local_418._s_0.R;
  fStack_384 = local_418._s_0.G;
  fStack_380 = local_418._s_0.B;
  fStack_37c = local_418._s_0.A;
  local_378 = local_478.AllocatorInstance.Data._0_4_;
  uStack_374 = local_478.AllocatorInstance.Data._4_4_;
  uStack_370 = local_478.ArrayNum;
  iStack_36c = local_478.ArrayMax;
  local_368 = local_468.AllocatorInstance.Data._0_4_;
  uStack_364 = local_468.AllocatorInstance.Data._4_4_;
  uStack_360 = local_468.ArrayNum;
  iStack_35c = local_468.ArrayMax;
  local_358 = (undefined4)local_3d8;
  uStack_354 = local_3d8._4_4_;
  uStack_350 = uStack_3d0;
  uStack_34c = uStack_3cc;
  local_338 = local_4b8;
  local_328 = (double)local_458;
  dStack_320 = dStack_450;
  local_2b8 = local_418._s_0.R;
  fStack_2b4 = local_418._s_0.G;
  fStack_2b0 = local_418._s_0.B;
  fStack_2ac = local_418._s_0.A;
  local_2a8 = local_478.AllocatorInstance.Data._0_4_;
  uStack_2a4 = local_478.AllocatorInstance.Data._4_4_;
  uStack_2a0 = local_478.ArrayNum;
  iStack_29c = local_478.ArrayMax;
  local_298 = local_468.AllocatorInstance.Data._0_4_;
  uStack_294 = local_468.AllocatorInstance.Data._4_4_;
  uStack_290 = local_468.ArrayNum;
  iStack_28c = local_468.ArrayMax;
  local_288 = (undefined4)local_3d8;
  uStack_284 = local_3d8._4_4_;
  uStack_280 = uStack_3d0;
  uStack_27c = uStack_3cc;
  local_268 = local_4b8;
  uStack_260 = uStack_330;
  uStack_25c = uStack_32c;
  local_258 = (double)local_458;
  dStack_250 = dStack_450;
  local_248 = local_318;
  uStack_244 = uStack_314;
  uStack_240 = uStack_310;
  uStack_23c = uStack_30c;
  dVar70 = UE::Math::TMatrix<double>::Determinant(&local_1b8);
  local_519 = dVar70 < 0.0;
  fVar79 = __real_3f800000;
  if ((bool)local_519) {
    fVar79 = __real_bf800000;
  }
  local_4f0 = CONCAT44(local_4f0._4_4_,fVar79);
  local_490 = GetVectorBuffer(this,0);
  if ((1 < (int)param_1->_padding_) && (*(char *)(param_1->_padding_ + 0x10) == '\x01')) {
    lVar56 = *(longlong *)(param_1->_padding_ + 0x18);
    if ((*(longlong *)(lVar56 + 0x98) == 0) && (*(char *)(lVar56 + 0x18) == '\0')) {
      bVar30 = false;
    }
    else {
      bVar30 = true;
    }
    if (bVar30) {
      pTVar42 = GetVectorBuffer(this,2);
      if (((int)param_1->_padding_ < 2) || (*(char *)(param_1->_padding_ + 0x10) != '\x01')) {
        pFVar52 = &EmptyAccessor;
      }
      else {
        pFVar52 = *(FAccessor **)(param_1->_padding_ + 0x18);
      }
      local_440 = pTVar42;
      FAccessor::GetCoordArray(pFVar52,local_490);
      local_41c = NORMALS;
      UpdateVector3fFromMorphTargets(this,local_490,param_1,param_16,&local_41c);
      uVar91 = local_3d8._4_4_;
      uVar90 = (undefined4)local_3d8;
      uVar85 = local_418._s_0.A;
      uVar84 = local_418._s_0.B;
      uVar83 = local_418._s_0.G;
      uVar82 = local_418._s_0.R;
      iVar33 = local_468.ArrayMax;
      uVar34 = local_468.ArrayNum;
      uVar89 = local_468.AllocatorInstance.Data._4_4_;
      uVar88 = local_468.AllocatorInstance.Data._0_4_;
      uVar87 = local_478.AllocatorInstance.Data._4_4_;
      uVar86 = local_478.AllocatorInstance.Data._0_4_;
      dVar76 = local_4b8;
      dVar18 = __real_3e45798ee0000000;
      dVar70 = __real_3ff0000000000000;
      lVar68 = 0;
      lVar56 = lVar68;
      lVar51 = lVar68;
      lVar55 = lVar68;
LAB_14e644810:
      if (*(double *)((longlong)UE::Math::TMatrix<double>::Identity.M[0] + lVar56) ==
          *(double *)((longlong)&local_388 + lVar56)) goto code_r0x00014e644836;
      dVar78 = (double)CONCAT44(local_418._s_0.G,local_418._s_0.R);
      auVar21._8_4_ = local_418._s_0.B;
      auVar21._0_8_ = dVar78;
      auVar21._12_4_ = local_418._s_0.A;
      dVar14 = (double)CONCAT44(local_478.AllocatorInstance.Data._4_4_,
                                local_478.AllocatorInstance.Data._0_4_);
      dVar17 = (double)CONCAT44(local_468.AllocatorInstance.Data._4_4_,
                                local_468.AllocatorInstance.Data._0_4_);
      auVar20._8_4_ = local_468.ArrayNum;
      auVar20._0_8_ = dVar17;
      auVar20._12_4_ = local_468.ArrayMax;
      iVar35 = local_490->ArrayNum;
      pTVar43 = (TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> *)
                (local_490->AllocatorInstance).Data;
      dVar22 = (double)CONCAT44(local_3d8._4_4_,(undefined4)local_3d8);
      pTVar44 = (TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> *)
                ((longlong)&pTVar43->AllocatorInstance + (longlong)iVar35 * 0xc);
      pTVar42 = local_490;
      local_4d8 = pTVar44;
      while( true ) {
        if (pTVar42->ArrayNum != iVar35) {
          local_51c = 0;
          `TCheckedPointerIterator<UE::Math::TVector<float>,int,0>::operator!='::__l2::<lambda_1>::
          operator()(&local_51c);
          pTVar44 = local_4d8;
          pTVar42 = local_490;
        }
        if (pTVar43 == pTVar44) break;
        pFVar58 = (pTVar43->AllocatorInstance).Data;
        dVar75 = (double)SUB84(pFVar58,0);
        dVar15 = (double)(float)((ulonglong)pFVar58 >> 0x20);
        dVar13 = (double)(float)pTVar43->ArrayNum;
        auVar71._8_4_ = SUB84(dVar75,0);
        auVar71._0_8_ = dVar75;
        auVar71._12_4_ = (int)((ulonglong)dVar75 >> 0x20);
        dVar16 = dVar15 * dVar17 + dVar75 * dVar78 + dVar13 * dVar12 + (double)local_458 * 0.0;
        dVar77 = dVar15 * auVar20._8_8_ + auVar71._8_8_ * auVar21._8_8_ + dVar13 * auVar73._0_8_ +
                 dStack_450 * 0.0;
        dVar13 = dVar15 * dVar22 + dVar75 * dVar14 + dVar13 * dVar76 + (double)local_4a8 * 0.0;
        dVar75 = dVar77 * dVar77 + dVar16 * dVar16 + dVar13 * dVar13;
        if (dVar75 <= dVar18) {
          dVar77 = 0.0;
          dVar13 = 0.0;
          dVar16 = 0.0;
        }
        else {
          local_308 = dVar70 / SQRT(dVar75);
          dVar77 = dVar77 * local_308;
          dVar13 = dVar13 * local_308;
          dVar16 = dVar16 * local_308;
        }
        *(float *)&(pTVar43->AllocatorInstance).Data = (float)dVar16;
        *(float *)((longlong)&(pTVar43->AllocatorInstance).Data + 4) = (float)dVar77;
        pTVar43->ArrayNum = (int)(float)dVar13;
        pTVar43 = (TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> *)
                  &pTVar43->ArrayMax;
      }
      pTVar42 = local_440;
      param_16 = local_508;
      fVar79 = (float)local_4f0;
LAB_14e644867:
      GLTF::`anonymous_namespace'::ReIndex<UE::Math::TVector<float>_>(local_490,local_480,pTVar42);
      pFVar64 = local_510;
      iVar35 = pTVar42->ArrayNum;
      iVar7 = pTVar42->ArrayMax;
      pFVar58 = (local_490->AllocatorInstance).Data;
      iVar24 = local_490->ArrayNum;
      iVar25 = local_490->ArrayMax;
      (local_490->AllocatorInstance).Data = (pTVar42->AllocatorInstance).Data;
      local_490->ArrayNum = iVar35;
      local_490->ArrayMax = iVar7;
      (pTVar42->AllocatorInstance).Data = pFVar58;
      pTVar42->ArrayNum = iVar24;
      pTVar42->ArrayMax = iVar25;
      local_500 = GetVector4dBuffer(local_510,1);
      if (((int)param_1->_padding_ < 3) || (*(char *)(param_1->_padding_ + 0x20) != '\x02')) {
        bVar23 = false;
        goto LAB_14e644eb6;
      }
      lVar56 = *(longlong *)(param_1->_padding_ + 0x28);
      if ((*(longlong *)(lVar56 + 0x98) == 0) && (*(char *)(lVar56 + 0x18) == '\0')) {
        bVar30 = false;
      }
      else {
        bVar30 = true;
      }
      if (!bVar30) goto LAB_14e644eb6;
      pTVar43 = GetVector4dBuffer(pFVar64,2);
      local_4d8 = pTVar43;
      FPrimitive::GetTangents(param_1,local_500);
      pTVar44 = local_500;
      local_420 = TANGENTS;
      UpdateVector4dFromMorphTargets(local_510,local_500,param_1,param_16,&local_420);
      bVar23 = false;
      lVar56 = lVar68;
      lVar51 = lVar68;
      lVar55 = lVar68;
LAB_14e644ac0:
      local_500 = pTVar44;
      if (*(double *)((longlong)UE::Math::TMatrix<double>::Identity.M[0] + lVar56) ==
          *(double *)((longlong)&local_388 + lVar56)) {
        lVar51 = lVar51 + 1;
        lVar56 = lVar56 + 8;
        if ((lVar51 < 4) ||
           (lVar56 = lVar55 + 0x20, lVar51 = lVar68, lVar55 = lVar56, lVar56 < 0x80))
        goto LAB_14e644ac0;
      }
      else {
        pFVar58 = (pTVar44->AllocatorInstance).Data;
        iVar35 = pTVar44->ArrayNum;
        pFVar63 = pFVar58 + (longlong)iVar35 * 0x10;
        uVar92 = auVar72._0_4_;
        uVar93 = auVar72._4_4_;
        while( true ) {
          if (pTVar44->ArrayNum != iVar35) {
            local_51b = 0;
            `TCheckedPointerIterator<UE::Math::TVector4<float>,int,0>::operator!='::__l2::<lambda_1>
            ::operator()(&local_51b);
          }
          pTVar43 = local_4d8;
          if (pFVar58 == pFVar63) break;
          fVar80 = *(float *)(pFVar58 + 0xc);
          FLinearColor::FLinearColor((FLinearColor *)&local_418._s_0,(TVector4<float> *)pFVar58);
          dVar76 = (double)local_418._s_0.B;
          dVar14 = (double)local_418._s_0.R;
          dVar12 = (double)local_418._s_0.G;
          auVar72._8_4_ = SUB84(dVar14,0);
          auVar72._0_8_ = dVar14;
          auVar72._12_4_ = (int)((ulonglong)dVar14 >> 0x20);
          dVar17 = dVar12 * (double)CONCAT44(uVar89,uVar88) +
                   dVar14 * (double)CONCAT44(uVar83,uVar82) +
                   dVar76 * (double)CONCAT44(uVar93,uVar92) + (double)local_458 * 0.0;
          dVar78 = dVar12 * (double)CONCAT44(iVar33,uVar34) +
                   auVar72._8_8_ * (double)CONCAT44(uVar85,uVar84) +
                   dVar76 * (double)CONCAT44(uVar95,uVar94) + dStack_450 * 0.0;
          dVar12 = dVar12 * (double)CONCAT44(uVar91,uVar90) +
                   dVar14 * (double)CONCAT44(uVar87,uVar86) + dVar76 * local_4b8 +
                   (double)local_4a8 * 0.0;
          dVar76 = dVar78 * dVar78 + dVar17 * dVar17 + dVar12 * dVar12;
          if (dVar76 <= dVar18) {
            dVar17 = 0.0;
            dVar78 = 0.0;
            dVar12 = 0.0;
          }
          else {
            local_3d8 = dVar70 / SQRT(dVar76);
            dVar17 = dVar17 * local_3d8;
            dVar78 = dVar78 * local_3d8;
            dVar12 = dVar12 * local_3d8;
          }
          (((TVector4<float>_u_0 *)&pFVar58->field_0x0)->_s_0).X = (float)dVar17;
          *(float *)(pFVar58 + 4) = (float)dVar78;
          *(float *)(pFVar58 + 8) = (float)dVar12;
          *(float *)(pFVar58 + 0xc) = fVar79 * fVar80;
          pFVar58 = pFVar58 + 0x10;
          local_4a8 = (TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> *)
                      CONCAT44(uStack_314,local_318);
          dStack_4a0 = (double)CONCAT44(uStack_30c,uStack_310);
          local_458 = (TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> *)local_328;
          dStack_450 = dStack_320;
          local_4b8 = local_338;
          dStack_4b0 = (double)CONCAT44(uStack_32c,uStack_330);
          fVar79 = (float)local_4f0;
          uVar82 = local_388;
          uVar83 = fStack_384;
          uVar84 = fStack_380;
          uVar85 = fStack_37c;
          uVar86 = local_378;
          uVar87 = uStack_374;
          uVar88 = local_368;
          uVar89 = uStack_364;
          uVar34 = uStack_360;
          iVar33 = iStack_35c;
          uVar90 = local_358;
          uVar91 = uStack_354;
          uVar92 = local_348._0_4_;
          uVar93 = local_348._4_4_;
          uVar94 = local_348._8_4_;
          uVar95 = local_348._12_4_;
        }
      }
      GLTF::`anonymous_namespace'::ReIndex<UE::Math::TVector4<float>_>(pTVar44,local_480,pTVar43);
      iVar33 = pTVar43->ArrayNum;
      iVar35 = pTVar43->ArrayMax;
      pFVar58 = (pTVar44->AllocatorInstance).Data;
      iVar7 = pTVar44->ArrayNum;
      iVar24 = pTVar44->ArrayMax;
      (pTVar44->AllocatorInstance).Data = (pTVar43->AllocatorInstance).Data;
      pTVar44->ArrayNum = iVar33;
      pTVar44->ArrayMax = iVar35;
      (pTVar43->AllocatorInstance).Data = pFVar58;
      pTVar43->ArrayNum = iVar7;
      pTVar43->ArrayMax = iVar24;
      goto LAB_14e644ee8;
    }
  }
  pTVar42 = GetVectorBuffer(this,1);
  if (((int)param_1->_padding_ < 1) || (*(char *)param_1->_padding_ != '\0')) {
    pFVar52 = &EmptyAccessor;
  }
  else {
    pFVar52 = *(FAccessor **)((char *)param_1->_padding_ + 8);
  }
  FAccessor::GetCoordArray(pFVar52,pTVar42);
  lVar68 = 0;
  local_424 = POSITIONS;
  UpdateVector3fFromMorphTargets(local_510,pTVar42,param_1,param_16,&local_424);
  dVar12 = __real_3ff0000000000000;
  lVar56 = lVar68;
  lVar51 = lVar68;
  lVar55 = lVar68;
LAB_14e644d60:
  if (*(double *)((longlong)UE::Math::TMatrix<double>::Identity.M[0] + lVar56) ==
      *(double *)((longlong)local_1b8.M[0] + lVar56)) {
    lVar51 = lVar51 + 1;
    lVar56 = lVar56 + 8;
    if ((lVar51 < 4) || (lVar56 = lVar55 + 0x20, lVar51 = lVar68, lVar55 = lVar56, lVar56 < 0x80))
    goto LAB_14e644d60;
  }
  else {
    iVar33 = pTVar42->ArrayNum;
    pTVar43 = (TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> *)
              (pTVar42->AllocatorInstance).Data;
    pTVar44 = (TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> *)
              ((longlong)&pTVar43->AllocatorInstance + (longlong)iVar33 * 0xc);
    local_4d8 = pTVar44;
    while( true ) {
      if (pTVar42->ArrayNum != iVar33) {
        local_51a = 0;
        `TCheckedPointerIterator<UE::Math::TVector<float>,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_51a);
        pTVar44 = local_4d8;
      }
      if (pTVar43 == pTVar44) break;
      pFVar58 = (pTVar43->AllocatorInstance).Data;
      dVar70 = (double)SUB84(pFVar58,0);
      dVar18 = (double)(float)((ulonglong)pFVar58 >> 0x20);
      dVar76 = (double)(float)pTVar43->ArrayNum;
      auVar73._8_4_ = SUB84(dVar70,0);
      auVar73._0_8_ = dVar70;
      auVar73._12_4_ = (int)((ulonglong)dVar70 >> 0x20);
      auVar74._8_4_ = SUB84(dVar12,0);
      auVar74._0_8_ = dVar12;
      auVar74._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
      *(float *)&(pTVar43->AllocatorInstance).Data =
           (float)(dVar18 * local_1b8.M[1][0] + dVar70 * local_1b8.M[0][0] +
                   dVar76 * local_1b8.M[2][0] + dVar12 * local_1b8.M[3][0]);
      *(float *)((longlong)&(pTVar43->AllocatorInstance).Data + 4) =
           (float)(dVar18 * local_1b8.M[1][1] + auVar73._8_8_ * local_1b8.M[0][1] +
                   dVar76 * local_1b8.M[2][1] + auVar74._8_8_ * local_1b8.M[3][1]);
      pTVar43->ArrayNum =
           (int)(float)(dVar18 * local_1b8.M[1][2] + dVar70 * local_1b8.M[0][2] +
                        dVar76 * local_1b8.M[2][2] + dVar12 * local_1b8.M[3][2]);
      pTVar43 = (TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> *)&pTVar43->ArrayMax;
    }
  }
  GLTF::`anonymous_namespace'::GenerateFlatNormals(pTVar42,local_480,local_490);
  bVar23 = true;
  local_500 = GetVector4dBuffer(local_510,1);
LAB_14e644eb6:
  pTVar44 = local_500;
  if (param_5) {
    uVar34 = FPrimitive::VertexCount(param_1);
    local_2f8._0_8_ = ___xmm_3f80000000000000000000003f800000;
    local_2f8._8_8_ = _UNK_15076b188;
    TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>::Init
              (pTVar44,(TVector4<float> *)&local_2f8._s_0,uVar34);
  }
LAB_14e644ee8:
  pFVar64 = local_510;
  pTVar43 = (TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> *)0x0;
  pTVar44 = GetVector4dBuffer(local_510,0);
  local_458 = pTVar44;
  if (((int)param_1->_padding_ < 0xc) || (*(char *)(param_1->_padding_ + 0xb0) != '\v')) {
LAB_14e6450ef:
    if (param_6) {
      uVar34 = FPrimitive::VertexCount(param_1);
      local_2e8._0_8_ = ___xmm_3f80000000000000000000003f800000;
      local_2e8._8_8_ = _UNK_15076b188;
      TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>::Init
                (pTVar44,(TVector4<float> *)&local_2e8._s_0,uVar34);
    }
  }
  else {
    lVar56 = *(longlong *)(param_1->_padding_ + 0xb8);
    if ((*(longlong *)(lVar56 + 0x98) == 0) && (*(char *)(lVar56 + 0x18) == '\0')) {
      bVar30 = false;
    }
    else {
      bVar30 = true;
    }
    if (!bVar30) goto LAB_14e6450ef;
    pTVar45 = GetVector4dBuffer(pFVar64,2);
    if (((int)param_1->_padding_ < 0xc) || (*(char *)(param_1->_padding_ + 0xb0) != '\v')) {
      pFVar52 = &EmptyAccessor;
    }
    else {
      pFVar52 = *(FAccessor **)(param_1->_padding_ + 0xb8);
    }
    local_4a8 = pTVar45;
    if (pFVar52->Type == Vec4) {
      if (((pFVar52->BufferView).Buffer.Data != (uchar *)0x0) ||
         ((pFVar52->Sparse).bHasSparse != false)) {
        TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>::SetNumZeroed
                  (pTVar44,pFVar52->Count,No);
      }
      FAccessor::GetVec4Array(pFVar52,(TVector4<float> *)(pTVar44->AllocatorInstance).Data);
    }
    else if (pFVar52->Type == Vec3) {
      uVar34 = pFVar52->Count;
      if ((int)uVar34 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar34);
      }
      piVar66 = &pTVar44->ArrayMax;
      if (*piVar66 < (int)uVar34) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,0x10,uVar34,&local_458->AllocatorInstance,local_458->ArrayNum,piVar66);
      }
      pTVar44 = local_458;
      pTVar59 = pTVar43;
      pTVar45 = local_4a8;
      if (0 < (int)uVar34) {
        do {
          FAccessor::GetVec3(pFVar52,(TVector<double> *)&local_3a8._s_0,(uint)pTVar59);
          iVar33 = pTVar44->ArrayNum;
          fVar79 = (float)local_3a8._s_0.X;
          fVar80 = (float)local_3a8._s_0.Y;
          fVar81 = (float)local_3a8._s_0.Z;
          if (iVar33 == *piVar66) {
            iVar33 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x1010,&pTVar44->AllocatorInstance,piVar66);
          }
          uVar54 = (uint)pTVar59 + 1;
          pTVar44->ArrayNum = iVar33 + 1;
          lVar56 = (longlong)iVar33;
          pFVar58 = (pTVar44->AllocatorInstance).Data;
          *(float *)(pFVar58 + lVar56 * 0x10) = fVar79;
          *(float *)(pFVar58 + lVar56 * 0x10 + 4) = fVar80;
          *(float *)(pFVar58 + lVar56 * 0x10 + 8) = fVar81;
          *(undefined4 *)(pFVar58 + lVar56 * 0x10 + 0xc) = 0x3f800000;
          pTVar59 = (TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> *)
                    (ulonglong)uVar54;
          pTVar45 = local_4a8;
        } while ((int)uVar54 < (int)uVar34);
      }
    }
    pFVar64 = local_510;
    local_428 = COLORS;
    UpdateVector4dFromMorphTargets(local_510,pTVar44,param_1,local_508,&local_428);
    GLTF::`anonymous_namespace'::ReIndex<UE::Math::TVector4<float>_>
              (pTVar44,&pFVar64->IntBuffer,pTVar45);
    iVar33 = pTVar45->ArrayNum;
    iVar35 = pTVar45->ArrayMax;
    pFVar58 = (pTVar44->AllocatorInstance).Data;
    iVar7 = pTVar44->ArrayNum;
    iVar24 = pTVar44->ArrayMax;
    (pTVar44->AllocatorInstance).Data = (pTVar45->AllocatorInstance).Data;
    pTVar44->ArrayNum = iVar33;
    pTVar44->ArrayMax = iVar35;
    (pTVar45->AllocatorInstance).Data = pFVar58;
    pTVar45->ArrayNum = iVar7;
    pTVar45->ArrayMax = iVar24;
  }
  pTVar44 = pTVar43;
  pTVar45 = pTVar43;
  if (param_4 < 1) goto LAB_14e64531c;
  do {
    local_4d8 = (TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> *)
                ((longlong)&(pTVar44->AllocatorInstance).Data + 1);
    if ((TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> *)&DAT_00000009 < pTVar44) {
      bVar30 = ::FDebug::CheckVerifyFailedImpl2
                         ("Index < (sizeof(Vector2dBuffers) / sizeof(Vector2dBuffers[0]))",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Parsers\\GLTFCore\\Private\\GLTFMeshFactory.cpp"
                          ,0x3c,L"");
      if (bVar30) {
        pcVar11 = (code *)swi(3);
        uVar31 = (*pcVar11)();
        return (bool)uVar31;
      }
    }
    uVar34 = pFVar64->Vector2dBuffers[(longlong)pTVar44].ArrayMax;
    pFVar58 = (FScriptContainerElement *)(pFVar64->Vector2dBuffers + (longlong)pTVar44);
    if ((int)uVar34 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar34);
    }
    *(undefined4 *)&pFVar58[8].field_0x0 = 0;
    if (*(uint *)(pFVar58 + 0xc) != uVar34) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,uVar34,(ForAnyElementType *)pFVar58,0,(int *)(pFVar58 + 0xc));
    }
    uVar34 = (uint)pTVar45;
    (&local_128[0].AllocatorInstance)[(int)uVar34].Data = pFVar58;
    if (uVar34 < 8) {
      bVar32 = (byte)(uVar34 + 3);
      if ((((int)(uVar34 + 3 & 0xff) < (int)param_1->_padding_) &&
          (*(byte *)(param_1->_padding_ + (ulonglong)bVar32 * 0x10) == bVar32)) &&
         ((lVar56 = *(longlong *)(param_1->_padding_ + 8 + (ulonglong)bVar32 * 0x10),
          *(longlong *)(lVar56 + 0x98) != 0 || (*(char *)(lVar56 + 0x18) != '\0')))) {
        bVar30 = true;
      }
      else {
        bVar30 = false;
      }
      if (!bVar30) goto LAB_14e6452b2;
      uVar54 = pFVar64->Vector2dBuffers[8].ArrayMax;
      if ((int)uVar54 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar54);
      }
      pFVar64->Vector2dBuffers[8].ArrayNum = 0;
      uVar54 = uVar34 + 3 & 0xff;
      if ((int)uVar54 < (int)param_1->_padding_) {
        if (*(char *)(param_1->_padding_ + (ulonglong)uVar54 * 0x10) != (char)(uVar34 + 3))
        goto LAB_14e645255;
        pFVar52 = *(FAccessor **)(param_1->_padding_ + 8 + (ulonglong)uVar54 * 0x10);
      }
      else {
LAB_14e645255:
        pFVar52 = &EmptyAccessor;
      }
      FAccessor::GetVec2Array
                (pFVar52,(TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *)
                         (&local_128[0].AllocatorInstance)[(int)uVar34].Data);
      pTVar9 = (TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *)
               (&local_128[0].AllocatorInstance)[(int)uVar34].Data;
      UpdateTexCoordsFromMorphTargets(local_510,pTVar9,param_1,local_508,uVar34);
      GLTF::`anonymous_namespace'::ReIndex<UE::Math::TVector2<float>_>
                (pTVar9,local_480,pFVar64->Vector2dBuffers + 8);
      iVar33 = pFVar64->Vector2dBuffers[8].ArrayNum;
      iVar35 = pFVar64->Vector2dBuffers[8].ArrayMax;
      pFVar58 = (pTVar9->AllocatorInstance).Data;
      iVar7 = pTVar9->ArrayNum;
      iVar24 = pTVar9->ArrayMax;
      (pTVar9->AllocatorInstance).Data = pFVar64->Vector2dBuffers[8].AllocatorInstance.Data;
      pTVar9->ArrayNum = iVar33;
      pTVar9->ArrayMax = iVar35;
      pFVar64->Vector2dBuffers[8].AllocatorInstance.Data = pFVar58;
      pFVar64->Vector2dBuffers[8].ArrayNum = iVar7;
      pFVar64->Vector2dBuffers[8].ArrayMax = iVar24;
    }
    else {
LAB_14e6452b2:
      pFVar58 = (&local_128[0].AllocatorInstance)[(int)uVar34].Data;
      iVar33 = local_4c8 * 3;
      iVar35 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (8,4,iVar33,(ForAnyElementType *)pFVar58,(int *)(pFVar58 + 8),
                          (int *)(pFVar58 + 0xc));
      memset(*(FScriptContainerElement **)&pFVar58->field_0x0 + (longlong)iVar35 * 8,0,
             (longlong)iVar33 << 3);
    }
    pTVar45 = (TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> *)
              (ulonglong)(uVar34 + 1);
    pTVar44 = local_4d8;
    pFVar64 = local_510;
    if (param_4 <= (int)(uVar34 + 1)) {
LAB_14e64531c:
      _Y = __real_4019999a;
      fVar26 = __real_3f72a76f;
      fVar81 = __real_3d9e8391;
      fVar80 = __real_3d55891a;
      fVar79 = __real_3d25aee6;
      local_528 = false;
      local_138 = (undefined1  [8])0xffffffffffffffff;
      local_130 = (FVertexID)0xffffffff;
      iVar33 = local_4c8 * 3 + -1;
      FVar36 = (FPolygonID)0x0;
      uVar37 = 0;
      uVar54 = 0;
      uVar34 = 0;
      bVar30 = false;
      if (local_519 == '\0') {
        local_524 = 0;
        if (local_4c8 != 0) {
          local_4a8 = (TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> *)
                      (longlong)param_3;
          local_4e4 = (uint)~param_3 >> 0x1f;
          local_4f0 = (longlong)local_4a8 * 0x50;
          pTVar44 = pTVar43;
          do {
            pTVar1 = local_480;
            uVar67 = (uint)pTVar44;
            uVar61 = uVar67 * 3;
            FVar39 = FVar36;
            if ((int)uVar61 < local_480->ArrayNum) {
              FVar39 = (FPolygonID)(~uVar61 >> 0x1f);
            }
            if (FVar39 == (FPolygonID)0x0) {
              bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar30) {
                pcVar11 = (code *)swi(3);
                uVar31 = (*pcVar11)();
                return (bool)uVar31;
              }
            }
            pFVar64 = local_510;
            iVar33 = *(int *)((pTVar1->AllocatorInstance).Data + (longlong)(int)uVar61 * 4);
            uVar57 = uVar34;
            if (param_3 < (local_510->PositionIndexToVertexIdPerPrim).ArrayNum) {
              uVar57 = local_4e4;
            }
            if (uVar57 == 0) {
              bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar30) {
                pcVar11 = (code *)swi(3);
                uVar31 = (*pcVar11)();
                return (bool)uVar31;
              }
            }
            pFVar46 = TMapBase<int,FVertexID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FVertexID,0>_>
                      ::FindChecked((TMapBase<int,FVertexID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FVertexID,0>_>
                                     *)((pFVar64->PositionIndexToVertexIdPerPrim).AllocatorInstance.
                                        Data + local_4f0),iVar33);
            uVar61 = uVar61 + 1;
            local_138._0_4_ = *pFVar46;
            uVar57 = uVar34;
            if ((int)uVar61 < (pFVar64->IntBuffer).ArrayNum) {
              uVar57 = ~uVar61 >> 0x1f;
            }
            if (uVar57 == 0) {
              bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar30) {
                pcVar11 = (code *)swi(3);
                uVar31 = (*pcVar11)();
                return (bool)uVar31;
              }
            }
            uVar57 = local_4e4;
            iVar33 = *(int *)((pFVar64->IntBuffer).AllocatorInstance.Data +
                             (longlong)(int)uVar61 * 4);
            uVar61 = uVar34;
            if (param_3 < (pFVar64->PositionIndexToVertexIdPerPrim).ArrayNum) {
              uVar61 = local_4e4;
            }
            if (uVar61 == 0) {
              bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar30) {
                pcVar11 = (code *)swi(3);
                uVar31 = (*pcVar11)();
                return (bool)uVar31;
              }
            }
            pFVar46 = TMapBase<int,FVertexID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FVertexID,0>_>
                      ::FindChecked((TMapBase<int,FVertexID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FVertexID,0>_>
                                     *)((pFVar64->PositionIndexToVertexIdPerPrim).AllocatorInstance.
                                        Data + local_4f0),iVar33);
            uVar61 = uVar67 * 3 + 2;
            local_138._4_4_ = *pFVar46;
            uVar65 = uVar34;
            if ((int)uVar61 < (pFVar64->IntBuffer).ArrayNum) {
              uVar65 = ~uVar61 >> 0x1f;
            }
            if (uVar65 == 0) {
              bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar30) {
                pcVar11 = (code *)swi(3);
                uVar31 = (*pcVar11)();
                return (bool)uVar31;
              }
            }
            iVar33 = *(int *)((pFVar64->IntBuffer).AllocatorInstance.Data +
                             (longlong)(int)uVar61 * 4);
            uVar61 = uVar34;
            if (param_3 < (pFVar64->PositionIndexToVertexIdPerPrim).ArrayNum) {
              uVar61 = uVar57;
            }
            if (uVar61 == 0) {
              bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar30) {
                pcVar11 = (code *)swi(3);
                uVar31 = (*pcVar11)();
                return (bool)uVar31;
              }
            }
            pFVar46 = TMapBase<int,FVertexID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FVertexID,0>_>
                      ::FindChecked((TMapBase<int,FVertexID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FVertexID,0>_>
                                     *)((pFVar64->PositionIndexToVertexIdPerPrim).AllocatorInstance.
                                        Data + local_4f0),iVar33);
            local_130 = *pFVar46;
            if (((local_138._0_4_ == local_138._4_4_) || ((FVertexID)local_138._4_4_ == local_130))
               || ((FVertexID)local_138._0_4_ == local_130)) {
              local_528 = true;
              local_524 = uVar67;
            }
            else {
              local_488 = uVar67 * -3;
              pTVar44 = (TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> *)local_138;
              uVar67 = uVar67 * 3;
              do {
                pFVar28 = local_448;
                uVar61 = local_488;
                FVar8 = *(FVertexID *)&(pTVar44->AllocatorInstance).Data;
                local_4d8 = pTVar44;
                pFVar47 = FMeshElementChannels::Get(local_448->VertexInstanceElements,0);
                FVar38 = (FVertexInstanceID)FMeshElementContainer::Add(pFVar47);
                FMeshDescription::CreateVertexInstance_Internal(pFVar28,FVar38,FVar8);
                pFVar64 = local_510;
                if ((local_510->CornerVertexInstanceIDs).ArrayNum <= (int)(uVar67 + uVar61)) {
                  bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                  ;
                  if (bVar30) {
                    pcVar11 = (code *)swi(3);
                    uVar31 = (*pcVar11)();
                    return (bool)uVar31;
                  }
                }
                pTVar42 = local_490;
                *(FVertexInstanceID *)
                 ((pFVar64->CornerVertexInstanceIDs).AllocatorInstance.Data +
                 (longlong)(int)(uVar67 + uVar61) * 4) = FVar38;
                uVar61 = uVar34;
                if ((int)uVar67 < local_490->ArrayNum) {
                  uVar61 = ~uVar67 >> 0x1f;
                }
                if (uVar61 == 0) {
                  bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                  ;
                  if (bVar30) {
                    pcVar11 = (code *)swi(3);
                    uVar31 = (*pcVar11)();
                    return (bool)uVar31;
                  }
                }
                pFVar58 = (pTVar42->AllocatorInstance).Data;
                lVar56 = (longlong)(int)uVar67;
                uVar6 = *(undefined8 *)(pFVar58 + lVar56 * 0xc);
                fVar69 = *(float *)(pFVar58 + lVar56 * 0xc + 8);
                pTVar48 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel
                                    ((TMeshAttributeArraySet<UE::Math::TVector<float>_> *)
                                     local_408->ArrayPtr,0);
                pTVar49 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase
                                    (pTVar48,(int)FVar38);
                *(undefined8 *)&pTVar49->field0_0x0 = uVar6;
                (pTVar49->field0_0x0)._s_0.Z = fVar69;
                if ((!bVar23) && (0 < local_500->ArrayNum)) {
                  uVar61 = uVar34;
                  if ((int)uVar67 < local_500->ArrayNum) {
                    uVar61 = ~uVar67 >> 0x1f;
                  }
                  if (uVar61 == 0) {
                    bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       );
                    if (bVar30) {
                      pcVar11 = (code *)swi(3);
                      uVar31 = (*pcVar11)();
                      return (bool)uVar31;
                    }
                  }
                  pTVar45 = local_500;
                  pFVar58 = (local_500->AllocatorInstance).Data;
                  fVar69 = *(float *)(pFVar58 + lVar56 * 0x10);
                  fVar4 = *(float *)(pFVar58 + lVar56 * 0x10 + 4);
                  fVar5 = *(float *)(pFVar58 + lVar56 * 0x10 + 8);
                  pTVar48 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel
                                      ((TMeshAttributeArraySet<UE::Math::TVector<float>_> *)
                                       local_400->ArrayPtr,0);
                  pTVar49 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase
                                      (pTVar48,(int)FVar38);
                  (pTVar49->field0_0x0)._s_0.X = fVar69;
                  (pTVar49->field0_0x0)._s_0.Y = fVar4;
                  (pTVar49->field0_0x0)._s_0.Z = fVar5;
                  uVar61 = uVar34;
                  if ((int)uVar67 < pTVar45->ArrayNum) {
                    uVar61 = ~uVar67 >> 0x1f;
                  }
                  if (uVar61 == 0) {
                    bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       );
                    if (bVar30) {
                      pcVar11 = (code *)swi(3);
                      uVar31 = (*pcVar11)();
                      return (bool)uVar31;
                    }
                  }
                  uVar94 = *(undefined4 *)((pTVar45->AllocatorInstance).Data + lVar56 * 0x10 + 0xc);
                  pFVar10 = local_3f8->ArrayPtr;
                  if ((int)pFVar10[2].Type < 1) {
                    bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       );
                    if (bVar30) {
                      pcVar11 = (code *)swi(3);
                      uVar31 = (*pcVar11)();
                      return (bool)uVar31;
                    }
                  }
                  pFVar60 = pFVar10 + 1;
                  if ((FMeshAttributeArraySetBase *)pFVar10[2]._padding_ !=
                      (FMeshAttributeArraySetBase *)0x0) {
                    pFVar60 = (FMeshAttributeArraySetBase *)pFVar10[2]._padding_;
                  }
                  uVar61 = (int)FVar38 * pFVar60->NumElements;
                  FVar39 = FVar36;
                  if ((int)uVar61 < (int)pFVar60->Type) {
                    FVar39 = (FPolygonID)(~uVar61 >> 0x1f);
                  }
                  if (FVar39 == (FPolygonID)0x0) {
                    bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       );
                    if (bVar30) {
                      pcVar11 = (code *)swi(3);
                      uVar31 = (*pcVar11)();
                      return (bool)uVar31;
                    }
                  }
                  *(undefined4 *)(pFVar60->_padding_ + (longlong)(int)uVar61 * 4) = uVar94;
                }
                local_4e8 = 0;
                if (0 < param_4) {
                  local_508 = (TArray<float,TSizedDefaultAllocator<32>_> *)0x0;
                  local_4e0 = (FPolygonID)(~uVar67 >> 0x1f);
                  pTVar42 = local_128;
                  local_4b8 = 0.0;
                  pTVar45 = pTVar43;
                  do {
                    pFVar58 = (pTVar42->AllocatorInstance).Data;
                    FVar39 = FVar36;
                    if ((int)uVar67 < *(int *)(pFVar58 + 8)) {
                      FVar39 = local_4e0;
                    }
                    if (FVar39 == (FPolygonID)0x0) {
                      bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         );
                      if (bVar30) {
                        pcVar11 = (code *)swi(3);
                        uVar31 = (*pcVar11)();
                        return (bool)uVar31;
                      }
                    }
                    uVar6 = *(undefined8 *)(*(longlong *)pFVar58 + (longlong)(int)uVar67 * 8);
                    pFVar10 = local_3f0->ArrayPtr;
                    uVar61 = uVar54;
                    if ((int)(uint)pTVar45 < (int)pFVar10[2].Type) {
                      uVar61 = ~(uint)pTVar45 >> 0x1f;
                    }
                    if (uVar61 == 0) {
                      bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         );
                      if (bVar30) {
                        pcVar11 = (code *)swi(3);
                        uVar31 = (*pcVar11)();
                        return (bool)uVar31;
                      }
                    }
                    pFVar60 = pFVar10 + 1;
                    if ((FMeshAttributeArraySetBase *)pFVar10[2]._padding_ !=
                        (FMeshAttributeArraySetBase *)0x0) {
                      pFVar60 = (FMeshAttributeArraySetBase *)pFVar10[2]._padding_;
                    }
                    uVar57 = (int)FVar38 *
                             *(int *)((longlong)&pFVar60->NumElements + (longlong)local_4b8);
                    uVar61 = uVar54;
                    if ((int)uVar57 < *(int *)((longlong)&pFVar60->Type + (longlong)local_4b8)) {
                      uVar61 = ~uVar57 >> 0x1f;
                    }
                    if (uVar61 == 0) {
                      bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         );
                      if (bVar30) {
                        pcVar11 = (code *)swi(3);
                        uVar31 = (*pcVar11)();
                        return (bool)uVar31;
                      }
                    }
                    plVar2 = (longlong *)((longlong)&pFVar60->_padding_ + (longlong)local_4b8);
                    pTVar42 = (TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)
                              &pTVar42->ArrayNum;
                    local_4b8 = (double)((longlong)local_4b8 + 0x18);
                    local_508 = (TArray<float,TSizedDefaultAllocator<32>_> *)
                                ((longlong)&(local_508->AllocatorInstance).Data + 1);
                    local_4e8 = local_4e8 + 1;
                    pTVar45 = (TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> *)
                              (ulonglong)local_4e8;
                    *(undefined8 *)(*plVar2 + (longlong)(int)uVar57 * 8) = uVar6;
                    pTVar44 = local_4d8;
                  } while ((int)local_4e8 < param_4);
                }
                pTVar45 = local_458;
                if (0 < local_458->ArrayNum) {
                  uVar61 = uVar54;
                  if ((int)uVar67 < local_458->ArrayNum) {
                    uVar61 = ~uVar67 >> 0x1f;
                  }
                  if (uVar61 == 0) {
                    bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       );
                    if (bVar30) {
                      pcVar11 = (code *)swi(3);
                      uVar31 = (*pcVar11)();
                      return (bool)uVar31;
                    }
                  }
                  pFVar58 = (pTVar45->AllocatorInstance).Data + (longlong)(int)uVar67 * 0x10;
                  local_4d8._0_4_ = *(float *)pFVar58;
                  local_4d8._4_4_ = *(float *)(pFVar58 + 4);
                  fStack_4d0 = *(float *)(pFVar58 + 8);
                  fStack_4cc = *(float *)(pFVar58 + 0xc);
                  if (fVar79 < (float)local_4d8) {
                    local_4d8._0_4_ = powf((float)local_4d8 * fVar26 + fVar80,_Y);
                  }
                  else {
                    local_4d8._0_4_ = (float)local_4d8 * fVar81;
                  }
                  if (fVar79 < local_4d8._4_4_) {
                    fVar69 = powf(local_4d8._4_4_ * fVar26 + fVar80,_Y);
                  }
                  else {
                    fVar69 = local_4d8._4_4_ * fVar81;
                  }
                  local_4d8 = (TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> *)
                              CONCAT44(fVar69,(float)local_4d8);
                  if (fVar79 < fStack_4d0) {
                    fStack_4d0 = powf(fStack_4d0 * fVar26 + fVar80,_Y);
                  }
                  else {
                    fStack_4d0 = fStack_4d0 * fVar81;
                  }
                  pFVar10 = local_3e8->ArrayPtr;
                  if ((int)pFVar10[2].Type < 1) {
                    bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       );
                    if (bVar30) {
                      pcVar11 = (code *)swi(3);
                      uVar31 = (*pcVar11)();
                      return (bool)uVar31;
                    }
                  }
                  pFVar60 = pFVar10 + 1;
                  if ((FMeshAttributeArraySetBase *)pFVar10[2]._padding_ !=
                      (FMeshAttributeArraySetBase *)0x0) {
                    pFVar60 = (FMeshAttributeArraySetBase *)pFVar10[2]._padding_;
                  }
                  uVar57 = (int)FVar38 * pFVar60->NumElements;
                  uVar61 = uVar54;
                  if ((int)uVar57 < (int)pFVar60->Type) {
                    uVar61 = ~uVar57 >> 0x1f;
                  }
                  if (uVar61 == 0) {
                    bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       );
                    if (bVar30) {
                      pcVar11 = (code *)swi(3);
                      uVar31 = (*pcVar11)();
                      return (bool)uVar31;
                    }
                  }
                  puVar3 = (undefined8 *)(pFVar60->_padding_ + (longlong)(int)uVar57 * 0x10);
                  *puVar3 = local_4d8;
                  puVar3[1] = CONCAT44(fStack_4cc,fStack_4d0);
                }
                FVar27 = local_4f8;
                uVar67 = uVar67 + 1;
                pTVar44 = (TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> *)
                          ((longlong)&(pTVar44->AllocatorInstance).Data + 4);
              } while (uVar67 + local_488 < 3);
              local_478.AllocatorInstance.Data._0_4_ = 0;
              local_478.AllocatorInstance.Data._4_4_ = 0;
              local_478.ArrayNum = 0;
              local_478.ArrayMax = 0;
              local_3b8 = (FVertexInstanceID *)
                          (local_510->CornerVertexInstanceIDs).AllocatorInstance.Data;
              iVar33 = (local_510->CornerVertexInstanceIDs).ArrayNum;
              local_4d8 = pTVar44;
              if (iVar33 < 0) {
                bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                   ("InCount >= 0",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0xeb,L"");
                if (bVar30) {
                  pcVar11 = (code *)swi(3);
                  uVar31 = (*pcVar11)();
                  return (bool)uVar31;
                }
              }
              pFVar28 = local_448;
              iStack_3b0 = iVar33;
              pFVar47 = FMeshElementChannels::Get(local_448->PolygonElements,0);
              local_4e0 = (FPolygonID)FMeshElementContainer::Add(pFVar47);
              local_2c8._12_4_ = uStack_3ac;
              local_2c8.ArrayNum = iStack_3b0;
              local_2c8.DataPtr = local_3b8;
              FMeshDescription::CreatePolygon_Internal
                        (pFVar28,local_4e0,FVar27,&local_2c8,&local_478);
              pTVar29 = local_3e0;
              iVar33 = local_478.ArrayNum;
              uVar53 = (ulonglong)local_478.ArrayNum;
              piVar66 = (int *)CONCAT44(local_478.AllocatorInstance.Data._4_4_,
                                        local_478.AllocatorInstance.Data._0_4_);
              piVar62 = piVar66 + uVar53;
              while( true ) {
                if ((uint)uVar53 != iVar33) {
                  local_517[0] = 0;
                  `TCheckedPointerIterator<FEdgeID,int,0>::operator!='::__l2::<lambda_1>::operator()
                            (local_517);
                }
                if (piVar66 == piVar62) break;
                pFVar10 = pTVar29->ArrayPtr;
                iVar35 = *piVar66;
                if ((int)pFVar10[2].Type < 1) {
                  bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                  ;
                  if (bVar30) {
                    pcVar11 = (code *)swi(3);
                    uVar31 = (*pcVar11)();
                    return (bool)uVar31;
                  }
                }
                pFVar60 = pFVar10 + 1;
                if ((FMeshAttributeArraySetBase *)pFVar10[2]._padding_ !=
                    (FMeshAttributeArraySetBase *)0x0) {
                  pFVar60 = (FMeshAttributeArraySetBase *)pFVar10[2]._padding_;
                }
                uVar67 = iVar35 * pFVar60->NumElements;
                uVar61 = uVar37;
                if ((int)uVar67 < (int)pFVar60->Type) {
                  uVar61 = ~uVar67 >> 0x1f;
                }
                if (uVar61 == 0) {
                  bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                  ;
                  if (bVar30) {
                    pcVar11 = (code *)swi(3);
                    uVar31 = (*pcVar11)();
                    return (bool)uVar31;
                  }
                }
                piVar66 = piVar66 + 1;
                *(undefined1 *)((longlong)(int)uVar67 + pFVar60->_padding_) = 0;
                uVar53 = (ulonglong)(uint)local_478.ArrayNum;
              }
              this_00 = TMeshAttributeArraySet<FName>::GetArrayForChannel
                                  ((TMeshAttributeArraySet<FName> *)local_438->ArrayPtr,0);
              pFVar50 = TMeshAttributeArrayBase<FName>::GetElementBase(this_00,(int)local_4e0);
              *pFVar50 = local_498;
              if ((void *)CONCAT44(local_478.AllocatorInstance.Data._4_4_,
                                   local_478.AllocatorInstance.Data._0_4_) != (void *)0x0) {
                FMemory::Free((void *)CONCAT44(local_478.AllocatorInstance.Data._4_4_,
                                               local_478.AllocatorInstance.Data._0_4_));
              }
            }
            local_524 = local_524 + 1;
            pTVar44 = (TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> *)
                      (ulonglong)local_524;
            bVar30 = local_528;
          } while (local_524 < local_4c8);
        }
      }
      else {
        local_4f0 = local_4f0 & 0xffffffff00000000;
        if (local_4c8 != 0) {
          local_4a8 = (TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> *)
                      (longlong)param_3;
          uVar61 = (uint)~param_3 >> 0x1f;
          local_498 = (FName)((longlong)local_4a8 * 0x50);
          pTVar44 = pTVar43;
          local_4e4 = uVar61;
          do {
            pTVar1 = local_480;
            iVar35 = (int)pTVar44;
            uVar57 = iVar33 + iVar35 * -3;
            uVar67 = 0;
            if ((int)uVar57 < local_480->ArrayNum) {
              uVar67 = ~uVar57 >> 0x1f;
            }
            if (uVar67 == 0) {
              bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar30) {
                pcVar11 = (code *)swi(3);
                uVar31 = (*pcVar11)();
                return (bool)uVar31;
              }
            }
            pFVar64 = local_510;
            iVar7 = *(int *)((pTVar1->AllocatorInstance).Data + (longlong)(int)uVar57 * 4);
            uVar67 = uVar34;
            if (param_3 < (local_510->PositionIndexToVertexIdPerPrim).ArrayNum) {
              uVar67 = uVar61;
            }
            if (uVar67 == 0) {
              bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar30) {
                pcVar11 = (code *)swi(3);
                uVar31 = (*pcVar11)();
                return (bool)uVar31;
              }
            }
            pFVar46 = TMapBase<int,FVertexID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FVertexID,0>_>
                      ::FindChecked((TMapBase<int,FVertexID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FVertexID,0>_>
                                     *)((pFVar64->PositionIndexToVertexIdPerPrim).AllocatorInstance.
                                        Data + (longlong)local_498),iVar7);
            uVar57 = uVar57 - 1;
            local_138._0_4_ = *pFVar46;
            uVar67 = uVar34;
            if ((int)uVar57 < (pFVar64->IntBuffer).ArrayNum) {
              uVar67 = ~uVar57 >> 0x1f;
            }
            if (uVar67 == 0) {
              bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar30) {
                pcVar11 = (code *)swi(3);
                uVar31 = (*pcVar11)();
                return (bool)uVar31;
              }
            }
            iVar7 = *(int *)((pFVar64->IntBuffer).AllocatorInstance.Data + (longlong)(int)uVar57 * 4
                            );
            uVar67 = uVar34;
            if (param_3 < (pFVar64->PositionIndexToVertexIdPerPrim).ArrayNum) {
              uVar67 = uVar61;
            }
            if (uVar67 == 0) {
              bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar30) {
                pcVar11 = (code *)swi(3);
                uVar31 = (*pcVar11)();
                return (bool)uVar31;
              }
            }
            pFVar46 = TMapBase<int,FVertexID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FVertexID,0>_>
                      ::FindChecked((TMapBase<int,FVertexID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FVertexID,0>_>
                                     *)((pFVar64->PositionIndexToVertexIdPerPrim).AllocatorInstance.
                                        Data + (longlong)local_498),iVar7);
            local_138._4_4_ = *pFVar46;
            uVar57 = (iVar33 + iVar35 * -3) - 2;
            uVar67 = uVar34;
            if ((int)uVar57 < (pFVar64->IntBuffer).ArrayNum) {
              uVar67 = ~uVar57 >> 0x1f;
            }
            if (uVar67 == 0) {
              bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar30) {
                pcVar11 = (code *)swi(3);
                uVar31 = (*pcVar11)();
                return (bool)uVar31;
              }
            }
            iVar7 = *(int *)((pFVar64->IntBuffer).AllocatorInstance.Data + (longlong)(int)uVar57 * 4
                            );
            uVar67 = uVar34;
            if (param_3 < (pFVar64->PositionIndexToVertexIdPerPrim).ArrayNum) {
              uVar67 = uVar61;
            }
            if (uVar67 == 0) {
              bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar30) {
                pcVar11 = (code *)swi(3);
                uVar31 = (*pcVar11)();
                return (bool)uVar31;
              }
            }
            pFVar46 = TMapBase<int,FVertexID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FVertexID,0>_>
                      ::FindChecked((TMapBase<int,FVertexID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FVertexID,0>_>
                                     *)((pFVar64->PositionIndexToVertexIdPerPrim).AllocatorInstance.
                                        Data + (longlong)local_498),iVar7);
            local_130 = *pFVar46;
            if (((local_138._0_4_ == local_138._4_4_) || ((FVertexID)local_138._4_4_ == local_130))
               || ((FVertexID)local_138._0_4_ == local_130)) {
              local_528 = true;
            }
            else {
              local_4e0 = (FPolygonID)(iVar33 + iVar35 * -3);
              local_4e8 = 0;
              local_4d8 = (TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> *)local_138
              ;
              pTVar44 = pTVar43;
              do {
                pFVar28 = local_448;
                FVar39 = local_4e0;
                FVar8 = *(FVertexID *)&(local_4d8->AllocatorInstance).Data;
                pFVar47 = FMeshElementChannels::Get(local_448->VertexInstanceElements,0);
                FVar38 = (FVertexInstanceID)FMeshElementContainer::Add(pFVar47);
                FMeshDescription::CreateVertexInstance_Internal(pFVar28,FVar38,FVar8);
                iVar35 = (int)pTVar44;
                if ((pFVar64->CornerVertexInstanceIDs).ArrayNum <= iVar35) {
                  bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                  ;
                  if (bVar30) {
                    pcVar11 = (code *)swi(3);
                    uVar31 = (*pcVar11)();
                    return (bool)uVar31;
                  }
                }
                pTVar42 = local_490;
                uVar67 = (int)FVar39 - iVar35;
                *(FVertexInstanceID *)
                 ((pFVar64->CornerVertexInstanceIDs).AllocatorInstance.Data + (longlong)iVar35 * 4)
                     = FVar38;
                uVar61 = uVar34;
                if ((int)uVar67 < local_490->ArrayNum) {
                  uVar61 = ~uVar67 >> 0x1f;
                }
                if (uVar61 == 0) {
                  bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                  ;
                  if (bVar30) {
                    pcVar11 = (code *)swi(3);
                    uVar31 = (*pcVar11)();
                    return (bool)uVar31;
                  }
                }
                pFVar58 = (pTVar42->AllocatorInstance).Data;
                lVar56 = (longlong)(int)uVar67;
                uVar6 = *(undefined8 *)(pFVar58 + lVar56 * 0xc);
                fVar69 = *(float *)(pFVar58 + lVar56 * 0xc + 8);
                pTVar48 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel
                                    ((TMeshAttributeArraySet<UE::Math::TVector<float>_> *)
                                     local_408->ArrayPtr,0);
                pTVar49 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase
                                    (pTVar48,(int)FVar38);
                pTVar44 = local_500;
                *(undefined8 *)&pTVar49->field0_0x0 = uVar6;
                (pTVar49->field0_0x0)._s_0.Z = fVar69;
                if ((!bVar23) && (0 < local_500->ArrayNum)) {
                  uVar61 = uVar34;
                  if ((int)uVar67 < local_500->ArrayNum) {
                    uVar61 = ~uVar67 >> 0x1f;
                  }
                  if (uVar61 == 0) {
                    bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       );
                    if (bVar30) {
                      pcVar11 = (code *)swi(3);
                      uVar31 = (*pcVar11)();
                      return (bool)uVar31;
                    }
                  }
                  pFVar58 = (pTVar44->AllocatorInstance).Data;
                  fVar69 = *(float *)(pFVar58 + lVar56 * 0x10);
                  fVar4 = *(float *)(pFVar58 + lVar56 * 0x10 + 4);
                  fVar5 = *(float *)(pFVar58 + lVar56 * 0x10 + 8);
                  pTVar48 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel
                                      ((TMeshAttributeArraySet<UE::Math::TVector<float>_> *)
                                       local_400->ArrayPtr,0);
                  pTVar49 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase
                                      (pTVar48,(int)FVar38);
                  (pTVar49->field0_0x0)._s_0.X = fVar69;
                  (pTVar49->field0_0x0)._s_0.Y = fVar4;
                  (pTVar49->field0_0x0)._s_0.Z = fVar5;
                  uVar61 = uVar34;
                  if ((int)uVar67 < pTVar44->ArrayNum) {
                    uVar61 = ~uVar67 >> 0x1f;
                  }
                  if (uVar61 == 0) {
                    bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       );
                    if (bVar30) {
                      pcVar11 = (code *)swi(3);
                      uVar31 = (*pcVar11)();
                      return (bool)uVar31;
                    }
                  }
                  uVar94 = *(undefined4 *)((pTVar44->AllocatorInstance).Data + lVar56 * 0x10 + 0xc);
                  pFVar10 = local_3f8->ArrayPtr;
                  if ((int)pFVar10[2].Type < 1) {
                    bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       );
                    if (bVar30) {
                      pcVar11 = (code *)swi(3);
                      uVar31 = (*pcVar11)();
                      return (bool)uVar31;
                    }
                  }
                  pFVar60 = pFVar10 + 1;
                  if ((FMeshAttributeArraySetBase *)pFVar10[2]._padding_ !=
                      (FMeshAttributeArraySetBase *)0x0) {
                    pFVar60 = (FMeshAttributeArraySetBase *)pFVar10[2]._padding_;
                  }
                  uVar57 = (int)FVar38 * pFVar60->NumElements;
                  uVar61 = uVar37;
                  if ((int)uVar57 < (int)pFVar60->Type) {
                    uVar61 = ~uVar57 >> 0x1f;
                  }
                  if (uVar61 == 0) {
                    bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       );
                    if (bVar30) {
                      pcVar11 = (code *)swi(3);
                      uVar31 = (*pcVar11)();
                      return (bool)uVar31;
                    }
                  }
                  *(undefined4 *)(pFVar60->_padding_ + (longlong)(int)uVar57 * 4) = uVar94;
                }
                if (0 < param_4) {
                  local_508 = (TArray<float,TSizedDefaultAllocator<32>_> *)0x0;
                  local_488 = ~uVar67 >> 0x1f;
                  local_440 = local_128;
                  local_4b8 = 0.0;
                  pTVar44 = pTVar43;
                  do {
                    pFVar58 = (local_440->AllocatorInstance).Data;
                    uVar61 = uVar37;
                    if ((int)uVar67 < *(int *)(pFVar58 + 8)) {
                      uVar61 = local_488;
                    }
                    if (uVar61 == 0) {
                      bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         );
                      if (bVar30) {
                        pcVar11 = (code *)swi(3);
                        uVar31 = (*pcVar11)();
                        return (bool)uVar31;
                      }
                    }
                    uVar57 = (uint)pTVar44;
                    uVar6 = *(undefined8 *)(*(longlong *)pFVar58 + (longlong)(int)uVar67 * 8);
                    pFVar10 = local_3f0->ArrayPtr;
                    uVar61 = uVar54;
                    if ((int)uVar57 < (int)pFVar10[2].Type) {
                      uVar61 = ~uVar57 >> 0x1f;
                    }
                    if (uVar61 == 0) {
                      bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         );
                      if (bVar30) {
                        pcVar11 = (code *)swi(3);
                        uVar31 = (*pcVar11)();
                        return (bool)uVar31;
                      }
                    }
                    pFVar60 = pFVar10 + 1;
                    if ((FMeshAttributeArraySetBase *)pFVar10[2]._padding_ !=
                        (FMeshAttributeArraySetBase *)0x0) {
                      pFVar60 = (FMeshAttributeArraySetBase *)pFVar10[2]._padding_;
                    }
                    uVar65 = (int)FVar38 *
                             *(int *)((longlong)&pFVar60->NumElements + (longlong)local_4b8);
                    uVar61 = uVar54;
                    if ((int)uVar65 < *(int *)((longlong)&pFVar60->Type + (longlong)local_4b8)) {
                      uVar61 = ~uVar65 >> 0x1f;
                    }
                    if (uVar61 == 0) {
                      bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         );
                      if (bVar30) {
                        pcVar11 = (code *)swi(3);
                        uVar31 = (*pcVar11)();
                        return (bool)uVar31;
                      }
                    }
                    plVar2 = (longlong *)((longlong)&pFVar60->_padding_ + (longlong)local_4b8);
                    pTVar44 = (TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> *)
                              (ulonglong)(uVar57 + 1);
                    local_4b8 = (double)((longlong)local_4b8 + 0x18);
                    local_508 = (TArray<float,TSizedDefaultAllocator<32>_> *)
                                ((longlong)&(local_508->AllocatorInstance).Data + 1);
                    *(undefined8 *)(*plVar2 + (longlong)(int)uVar65 * 8) = uVar6;
                    local_440 = (TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)
                                &local_440->ArrayNum;
                  } while ((int)(uVar57 + 1) < param_4);
                }
                pTVar44 = local_458;
                if (0 < local_458->ArrayNum) {
                  uVar61 = uVar54;
                  if ((int)uVar67 < local_458->ArrayNum) {
                    uVar61 = ~uVar67 >> 0x1f;
                  }
                  if (uVar61 == 0) {
                    bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       );
                    if (bVar30) {
                      pcVar11 = (code *)swi(3);
                      uVar31 = (*pcVar11)();
                      return (bool)uVar31;
                    }
                  }
                  pFVar58 = (pTVar44->AllocatorInstance).Data + (longlong)(int)uVar67 * 0x10;
                  local_438._0_4_ = *(float *)pFVar58;
                  local_438._4_4_ = *(float *)(pFVar58 + 4);
                  fStack_430 = *(float *)(pFVar58 + 8);
                  fStack_42c = *(float *)(pFVar58 + 0xc);
                  if (fVar79 < (float)local_438) {
                    local_438._0_4_ = powf((float)local_438 * fVar26 + fVar80,_Y);
                  }
                  else {
                    local_438._0_4_ = (float)local_438 * fVar81;
                  }
                  if (fVar79 < local_438._4_4_) {
                    fVar69 = powf(local_438._4_4_ * fVar26 + fVar80,_Y);
                  }
                  else {
                    fVar69 = local_438._4_4_ * fVar81;
                  }
                  local_438 = (TMeshAttributesRef<FPolygonID,FName> *)
                              CONCAT44(fVar69,(float)local_438);
                  if (fVar79 < fStack_430) {
                    fStack_430 = powf(fStack_430 * fVar26 + fVar80,_Y);
                  }
                  else {
                    fStack_430 = fStack_430 * fVar81;
                  }
                  pFVar10 = local_3e8->ArrayPtr;
                  if ((int)pFVar10[2].Type < 1) {
                    bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       );
                    if (bVar30) {
                      pcVar11 = (code *)swi(3);
                      uVar31 = (*pcVar11)();
                      return (bool)uVar31;
                    }
                  }
                  pFVar60 = pFVar10 + 1;
                  if ((FMeshAttributeArraySetBase *)pFVar10[2]._padding_ !=
                      (FMeshAttributeArraySetBase *)0x0) {
                    pFVar60 = (FMeshAttributeArraySetBase *)pFVar10[2]._padding_;
                  }
                  uVar67 = (int)FVar38 * pFVar60->NumElements;
                  uVar61 = uVar54;
                  if ((int)uVar67 < (int)pFVar60->Type) {
                    uVar61 = ~uVar67 >> 0x1f;
                  }
                  if (uVar61 == 0) {
                    bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       );
                    if (bVar30) {
                      pcVar11 = (code *)swi(3);
                      uVar31 = (*pcVar11)();
                      return (bool)uVar31;
                    }
                  }
                  puVar3 = (undefined8 *)(pFVar60->_padding_ + (longlong)(int)uVar67 * 0x10);
                  *puVar3 = local_438;
                  puVar3[1] = CONCAT44(fStack_42c,fStack_430);
                }
                FVar27 = local_4f8;
                local_4e8 = local_4e8 + 1;
                pTVar44 = (TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> *)
                          (ulonglong)local_4e8;
                local_4d8 = (TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> *)
                            ((longlong)&(local_4d8->AllocatorInstance).Data + 4);
                pFVar64 = local_510;
              } while (local_4e8 < 3);
              local_3c8 = (FVertexInstanceID *)
                          (local_510->CornerVertexInstanceIDs).AllocatorInstance.Data;
              iVar35 = (local_510->CornerVertexInstanceIDs).ArrayNum;
              local_468.AllocatorInstance.Data._0_4_ = 0;
              local_468.AllocatorInstance.Data._4_4_ = 0;
              local_468.ArrayNum = 0;
              local_468.ArrayMax = 0;
              if (iVar35 < 0) {
                bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                   ("InCount >= 0",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0xeb,L"");
                if (bVar30) {
                  pcVar11 = (code *)swi(3);
                  uVar31 = (*pcVar11)();
                  return (bool)uVar31;
                }
              }
              pFVar28 = local_448;
              iStack_3c0 = iVar35;
              pFVar47 = FMeshElementChannels::Get(local_448->PolygonElements,0);
              FVar39 = (FPolygonID)FMeshElementContainer::Add(pFVar47);
              local_2d8._12_4_ = uStack_3bc;
              local_2d8.ArrayNum = iStack_3c0;
              local_2d8.DataPtr = local_3c8;
              FMeshDescription::CreatePolygon_Internal(pFVar28,FVar39,FVar27,&local_2d8,&local_468);
              pTVar29 = local_3e0;
              iVar35 = local_468.ArrayNum;
              uVar53 = (ulonglong)local_468.ArrayNum;
              piVar62 = (int *)CONCAT44(local_468.AllocatorInstance.Data._4_4_,
                                        local_468.AllocatorInstance.Data._0_4_);
              piVar66 = piVar62 + uVar53;
              while( true ) {
                if ((uint)uVar53 != iVar35) {
                  local_518 = 0;
                  `TCheckedPointerIterator<FEdgeID,int,0>::operator!='::__l2::<lambda_1>::operator()
                            (&local_518);
                }
                if (piVar62 == piVar66) break;
                pFVar10 = pTVar29->ArrayPtr;
                iVar7 = *piVar62;
                if ((int)pFVar10[2].Type < 1) {
                  bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                  ;
                  if (bVar30) {
                    pcVar11 = (code *)swi(3);
                    uVar31 = (*pcVar11)();
                    return (bool)uVar31;
                  }
                }
                pFVar60 = pFVar10 + 1;
                if ((FMeshAttributeArraySetBase *)pFVar10[2]._padding_ !=
                    (FMeshAttributeArraySetBase *)0x0) {
                  pFVar60 = (FMeshAttributeArraySetBase *)pFVar10[2]._padding_;
                }
                uVar61 = iVar7 * pFVar60->NumElements;
                FVar39 = FVar36;
                if ((int)uVar61 < (int)pFVar60->Type) {
                  FVar39 = (FPolygonID)(~uVar61 >> 0x1f);
                }
                if (FVar39 == (FPolygonID)0x0) {
                  bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                  ;
                  if (bVar30) {
                    pcVar11 = (code *)swi(3);
                    uVar31 = (*pcVar11)();
                    return (bool)uVar31;
                  }
                }
                piVar62 = piVar62 + 1;
                *(undefined1 *)((longlong)(int)uVar61 + pFVar60->_padding_) = 0;
                uVar53 = (ulonglong)(uint)local_468.ArrayNum;
              }
              if ((void *)CONCAT44(local_468.AllocatorInstance.Data._4_4_,
                                   local_468.AllocatorInstance.Data._0_4_) != (void *)0x0) {
                FMemory::Free((void *)CONCAT44(local_468.AllocatorInstance.Data._4_4_,
                                               local_468.AllocatorInstance.Data._0_4_));
              }
              uVar61 = local_4e4;
              iVar35 = (int)(float)local_4f0;
            }
            uVar67 = iVar35 + 1;
            pTVar44 = (TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> *)
                      (ulonglong)uVar67;
            local_4f0 = CONCAT44(local_4f0._4_4_,uVar67);
            bVar30 = local_528;
          } while (uVar67 < local_4c8);
        }
      }
      return bVar30;
    }
  } while( true );
code_r0x00014e644836:
  lVar51 = lVar51 + 1;
  lVar56 = lVar56 + 8;
  if ((lVar51 < 4) || (lVar56 = lVar55 + 0x20, lVar51 = lVar68, lVar55 = lVar56, lVar56 < 0x80))
  goto LAB_14e644810;
  goto LAB_14e644867;
}

// UpdateTexCoordsFromMorphTargets @ 14e65b690

void __thiscall
GLTF::FMeshFactoryImpl::UpdateTexCoordsFromMorphTargets
          (FMeshFactoryImpl *this,
          TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *param_1,FPrimitive *param_2
          ,TArray<float,TSizedDefaultAllocator<32>_> *param_3,int param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  float fVar7;
  bool bVar8;
  byte bVar9;
  uint uVar10;
  TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *pTVar11;
  int iVar12;
  FAccessor *this_00;
  uint uVar13;
  longlong lVar14;
  uint uVar15;
  longlong lVar16;
  longlong local_res18;
  
  fVar7 = __real_3f800000;
  iVar12 = (param_2->MorphTargets).ArrayNum;
  if ((param_3->ArrayNum == iVar12) && (uVar13 = 0, 0 < iVar12)) {
    lVar16 = 0;
    local_res18 = 0;
    do {
      if ((int)uVar13 < param_3->ArrayNum) {
        if (((int)uVar13 < 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        fVar1 = *(float *)((param_3->AllocatorInstance).Data + local_res18 * 4);
        if ((0.0 < fVar1) && (fVar1 <= fVar7)) {
          pTVar11 = GetVector2dBuffer(this,9);
          uVar15 = 0;
          if ((int)uVar13 < (param_2->MorphTargets).ArrayNum) {
            uVar15 = ~uVar13 >> 0x1f;
          }
          if ((uVar15 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pFVar5 = (param_2->MorphTargets).AllocatorInstance.Data;
          if ((uint)param_4 < 8) {
            bVar9 = (char)param_4 + 3;
            uVar15 = (uint)bVar9;
            if ((int)(uint)bVar9 < *(int *)(pFVar5 + lVar16 + 8)) {
              lVar14 = *(longlong *)(pFVar5 + lVar16);
              if ((*(byte *)(lVar14 + (longlong)(int)uVar15 * 0x10) != bVar9) ||
                 ((lVar14 = *(longlong *)(lVar14 + 8 + (longlong)(int)uVar15 * 0x10),
                  *(longlong *)(lVar14 + 0x98) == 0 && (*(char *)(lVar14 + 0x18) == '\0'))))
              goto LAB_14e65b834;
              bVar8 = true;
            }
            else {
LAB_14e65b834:
              bVar8 = false;
            }
            if (bVar8) {
              uVar10 = 0;
              if ((int)uVar13 < (param_2->MorphTargets).ArrayNum) {
                uVar10 = ~uVar13 >> 0x1f;
              }
              if ((uVar10 == 0) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar8)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              pFVar5 = (param_2->MorphTargets).AllocatorInstance.Data;
              if (((int)uVar15 < *(int *)(pFVar5 + lVar16 + 8)) &&
                 (lVar14 = *(longlong *)(pFVar5 + lVar16),
                 *(byte *)(lVar14 + (ulonglong)bVar9 * 0x10) == bVar9)) {
                this_00 = *(FAccessor **)(lVar14 + 8 + (ulonglong)bVar9 * 0x10);
              }
              else {
                this_00 = &EmptyAccessor;
              }
              FAccessor::GetVec2Array(this_00,pTVar11);
              iVar12 = pTVar11->ArrayNum;
              if (param_1->ArrayNum == iVar12) {
                uVar15 = 0;
                lVar14 = 0;
                if (0 < iVar12) {
                  do {
                    uVar10 = 0;
                    if ((int)uVar15 < iVar12) {
                      uVar10 = ~uVar15 >> 0x1f;
                    }
                    if ((uVar10 == 0) &&
                       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                          ("(Index >= 0) & (Index < ArrayNum)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x447,
                                           L"Array index out of bounds: %lld into an array of size %lld"
                                          ), bVar8)) {
                      pcVar6 = (code *)swi(3);
                      (*pcVar6)();
                      return;
                    }
                    pFVar5 = (pTVar11->AllocatorInstance).Data;
                    fVar2 = *(float *)(pFVar5 + lVar14 * 8);
                    fVar3 = *(float *)(pFVar5 + lVar14 * 8 + 4);
                    uVar10 = 0;
                    if ((int)uVar15 < param_1->ArrayNum) {
                      uVar10 = ~uVar15 >> 0x1f;
                    }
                    if ((uVar10 == 0) &&
                       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                          ("(Index >= 0) & (Index < ArrayNum)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x447,
                                           L"Array index out of bounds: %lld into an array of size %lld"
                                          ), bVar8)) {
                      pcVar6 = (code *)swi(3);
                      (*pcVar6)();
                      return;
                    }
                    pFVar5 = (param_1->AllocatorInstance).Data;
                    uVar15 = uVar15 + 1;
                    fVar4 = *(float *)(pFVar5 + lVar14 * 8 + 4);
                    *(float *)(pFVar5 + lVar14 * 8) =
                         fVar1 * fVar2 + *(float *)(pFVar5 + lVar14 * 8);
                    *(float *)(pFVar5 + lVar14 * 8 + 4) = fVar1 * fVar3 + fVar4;
                    lVar14 = lVar14 + 1;
                    iVar12 = pTVar11->ArrayNum;
                  } while ((int)uVar15 < iVar12);
                }
              }
            }
          }
        }
      }
      local_res18 = local_res18 + 1;
      uVar13 = uVar13 + 1;
      lVar16 = lVar16 + 0x18;
    } while ((int)uVar13 < (param_2->MorphTargets).ArrayNum);
  }
  return;
}

// UpdateVector3fFromMorphTargets @ 14e65c250

void __thiscall
GLTF::FMeshFactoryImpl::UpdateVector3fFromMorphTargets
          (FMeshFactoryImpl *this,
          TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *param_1,FPrimitive *param_2,
          TArray<float,TSizedDefaultAllocator<32>_> *param_3,Vector3fMorphTargetAttributes *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  FScriptContainerElement *pFVar5;
  char *pcVar6;
  code *pcVar7;
  float fVar8;
  bool bVar9;
  uint uVar10;
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *pTVar11;
  int iVar12;
  FAccessor *this_00;
  uint uVar13;
  longlong lVar14;
  longlong lVar15;
  uint uVar16;
  longlong local_b8;
  
  fVar8 = __real_3f800000;
  iVar12 = (param_2->MorphTargets).ArrayNum;
  if ((param_3->ArrayNum == iVar12) && (uVar16 = 0, 0 < iVar12)) {
    lVar15 = 0;
    local_b8 = 0;
    do {
      if ((int)uVar16 < param_3->ArrayNum) {
        uVar13 = ~uVar16 >> 0x1f;
        if (((int)uVar16 < 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        fVar1 = *(float *)((param_3->AllocatorInstance).Data + local_b8 * 4);
        if ((0.0 < fVar1) && (fVar1 <= fVar8)) {
          pTVar11 = GetVectorBuffer(this,3);
          if (*param_4 == POSITIONS) {
            uVar10 = 0;
            if ((int)uVar16 < (param_2->MorphTargets).ArrayNum) {
              uVar10 = uVar13;
            }
            if ((uVar10 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            pFVar5 = (param_2->MorphTargets).AllocatorInstance.Data;
            if ((0 < *(int *)(pFVar5 + lVar15 + 8)) &&
               (pcVar6 = *(char **)(pFVar5 + lVar15), *pcVar6 == '\0')) {
              lVar14 = *(longlong *)(pcVar6 + 8);
              if ((*(longlong *)(lVar14 + 0x98) == 0) && (*(char *)(lVar14 + 0x18) == '\0')) {
                bVar9 = false;
              }
              else {
                bVar9 = true;
              }
              if (bVar9) {
                uVar10 = 0;
                if ((int)uVar16 < (param_2->MorphTargets).ArrayNum) {
                  uVar10 = uVar13;
                }
                if ((uVar10 == 0) &&
                   (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar9)) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                pFVar5 = (param_2->MorphTargets).AllocatorInstance.Data;
                if ((*(int *)(pFVar5 + lVar15 + 8) < 1) ||
                   (pcVar6 = *(char **)(pFVar5 + lVar15), *pcVar6 != '\0')) goto LAB_14e65c56f;
                this_00 = *(FAccessor **)(pcVar6 + 8);
                goto LAB_14e65c576;
              }
            }
          }
          else {
            if (*param_4 != NORMALS) {
              return;
            }
            uVar10 = 0;
            if ((int)uVar16 < (param_2->MorphTargets).ArrayNum) {
              uVar10 = uVar13;
            }
            if ((uVar10 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            pFVar5 = (param_2->MorphTargets).AllocatorInstance.Data;
            if ((1 < *(int *)(pFVar5 + lVar15 + 8)) &&
               (lVar14 = *(longlong *)(pFVar5 + lVar15), *(char *)(lVar14 + 0x10) == '\x01')) {
              lVar14 = *(longlong *)(lVar14 + 0x18);
              if ((*(longlong *)(lVar14 + 0x98) == 0) && (*(char *)(lVar14 + 0x18) == '\0')) {
                bVar9 = false;
              }
              else {
                bVar9 = true;
              }
              if (bVar9) {
                uVar10 = 0;
                if ((int)uVar16 < (param_2->MorphTargets).ArrayNum) {
                  uVar10 = uVar13;
                }
                if ((uVar10 == 0) &&
                   (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar9)) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                pFVar5 = (param_2->MorphTargets).AllocatorInstance.Data;
                if ((*(int *)(pFVar5 + lVar15 + 8) < 2) ||
                   (lVar14 = *(longlong *)(pFVar5 + lVar15), *(char *)(lVar14 + 0x10) != '\x01')) {
LAB_14e65c56f:
                  this_00 = &EmptyAccessor;
                }
                else {
                  this_00 = *(FAccessor **)(lVar14 + 0x18);
                }
LAB_14e65c576:
                FAccessor::GetCoordArray(this_00,pTVar11);
                iVar12 = pTVar11->ArrayNum;
                if ((param_1->ArrayNum == iVar12) && (uVar13 = 0, 0 < iVar12)) {
                  lVar14 = 0;
                  do {
                    uVar10 = 0;
                    if ((int)uVar13 < iVar12) {
                      uVar10 = ~uVar13 >> 0x1f;
                    }
                    if ((uVar10 == 0) &&
                       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                          ("(Index >= 0) & (Index < ArrayNum)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x447,
                                           L"Array index out of bounds: %lld into an array of size %lld"
                                          ), bVar9)) {
                      pcVar7 = (code *)swi(3);
                      (*pcVar7)();
                      return;
                    }
                    pFVar5 = (pTVar11->AllocatorInstance).Data;
                    fVar2 = *(float *)(pFVar5 + lVar14);
                    fVar3 = *(float *)(pFVar5 + lVar14 + 4);
                    fVar4 = *(float *)(pFVar5 + lVar14 + 8);
                    uVar10 = 0;
                    if ((int)uVar13 < param_1->ArrayNum) {
                      uVar10 = ~uVar13 >> 0x1f;
                    }
                    if ((uVar10 == 0) &&
                       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                          ("(Index >= 0) & (Index < ArrayNum)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x447,
                                           L"Array index out of bounds: %lld into an array of size %lld"
                                          ), bVar9)) {
                      pcVar7 = (code *)swi(3);
                      (*pcVar7)();
                      return;
                    }
                    pFVar5 = (param_1->AllocatorInstance).Data;
                    uVar13 = uVar13 + 1;
                    *(float *)(pFVar5 + lVar14) = fVar1 * fVar2 + *(float *)(pFVar5 + lVar14);
                    *(float *)(pFVar5 + lVar14 + 4) =
                         fVar1 * fVar3 + *(float *)(pFVar5 + lVar14 + 4);
                    *(float *)(pFVar5 + lVar14 + 8) =
                         fVar1 * fVar4 + *(float *)(pFVar5 + lVar14 + 8);
                    lVar14 = lVar14 + 0xc;
                    iVar12 = pTVar11->ArrayNum;
                  } while ((int)uVar13 < iVar12);
                }
              }
            }
          }
        }
      }
      local_b8 = local_b8 + 1;
      uVar16 = uVar16 + 1;
      lVar15 = lVar15 + 0x18;
    } while ((int)uVar16 < (param_2->MorphTargets).ArrayNum);
  }
  return;
}

// UpdateVector4dFromMorphTargets @ 14e65c730

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
GLTF::FMeshFactoryImpl::UpdateVector4dFromMorphTargets
          (FMeshFactoryImpl *this,
          TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> *param_1,FPrimitive *param_2
          ,TArray<float,TSizedDefaultAllocator<32>_> *param_3,Vector4dMorphTargetAttributes *param_4
          )

{
  int *piVar1;
  float fVar2;
  float fVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  float fVar6;
  bool bVar7;
  int iVar8;
  TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> *this_00;
  FAccessor *pFVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  uint uVar13;
  longlong lVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  TVector<double>_u_0 local_d8;
  TVector<double>_u_0 local_c0 [5];
  
  fVar6 = __real_3f800000;
  iVar8 = (param_2->MorphTargets).ArrayNum;
  if ((param_3->ArrayNum == iVar8) && (uVar13 = 0, 0 < iVar8)) {
    lVar14 = 0;
    do {
      if ((int)uVar13 < param_3->ArrayNum) {
        uVar10 = ~uVar13 >> 0x1f;
        if (((int)uVar13 < 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        fVar2 = *(float *)((param_3->AllocatorInstance).Data + lVar14 * 4);
        if ((0.0 < fVar2) && (fVar2 <= fVar6)) {
          this_00 = GetVector4dBuffer(this,3);
          if (*param_4 == TANGENTS) {
            uVar11 = 0;
            if ((int)uVar13 < (param_2->MorphTargets).ArrayNum) {
              uVar11 = uVar10;
            }
            if ((uVar11 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pFVar4 = (param_2->MorphTargets).AllocatorInstance.Data;
            if ((2 < *(int *)(pFVar4 + lVar14 * 0x18 + 8)) &&
               (lVar12 = *(longlong *)(pFVar4 + lVar14 * 0x18), *(char *)(lVar12 + 0x20) == '\x02'))
            {
              lVar12 = *(longlong *)(lVar12 + 0x28);
              if ((*(longlong *)(lVar12 + 0x98) == 0) && (*(char *)(lVar12 + 0x18) == '\0')) {
                bVar7 = false;
              }
              else {
                bVar7 = true;
              }
              if (bVar7) {
                uVar10 = 0;
                if ((int)uVar13 < (param_2->MorphTargets).ArrayNum) {
                  uVar10 = ~uVar13 >> 0x1f;
                }
                if ((uVar10 == 0) &&
                   (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar7)) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                pFVar4 = (param_2->MorphTargets).AllocatorInstance.Data;
                if ((*(int *)(pFVar4 + lVar14 * 0x18 + 8) < 3) ||
                   (lVar12 = *(longlong *)(pFVar4 + lVar14 * 0x18),
                   *(char *)(lVar12 + 0x20) != '\x02')) {
                  pFVar9 = &EmptyAccessor;
                }
                else {
                  pFVar9 = *(FAccessor **)(lVar12 + 0x28);
                }
                uVar10 = pFVar9->Count;
                if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
                  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar10);
                }
                piVar1 = &this_00->ArrayMax;
                if (this_00->ArrayMax < (int)uVar10) {
                  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x10,0x10,uVar10,&this_00->AllocatorInstance,this_00->ArrayNum,piVar1);
                }
                uVar11 = 0;
                if (0 < (int)uVar10) {
                  do {
                    FAccessor::GetVec3(pFVar9,(TVector<double> *)&local_c0[0]._s_0,uVar11);
                    iVar8 = this_00->ArrayNum;
                    fVar15 = (float)(double)local_c0[0]._0_8_;
                    fVar16 = (float)(double)local_c0[0]._16_8_;
                    fVar17 = (float)(double)local_c0[0]._8_8_;
                    if (iVar8 == *piVar1) {
                      iVar8 = UE::Core::Private::
                              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                        (0x1010,&this_00->AllocatorInstance,piVar1);
                    }
                    uVar11 = uVar11 + 1;
                    this_00->ArrayNum = iVar8 + 1;
                    lVar12 = (longlong)iVar8;
                    pFVar4 = (this_00->AllocatorInstance).Data;
                    *(float *)(pFVar4 + lVar12 * 0x10) = fVar15;
                    *(float *)(pFVar4 + lVar12 * 0x10 + 4) = fVar16;
                    *(float *)(pFVar4 + lVar12 * 0x10 + 8) = fVar17;
                    *(undefined4 *)(pFVar4 + lVar12 * 0x10 + 0xc) = 0;
                  } while ((int)uVar11 < (int)uVar10);
                }
                goto LAB_14e65cc50;
              }
            }
          }
          else {
            if (*param_4 != COLORS) {
              return;
            }
            uVar11 = 0;
            if ((int)uVar13 < (param_2->MorphTargets).ArrayNum) {
              uVar11 = uVar10;
            }
            if ((uVar11 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pFVar4 = (param_2->MorphTargets).AllocatorInstance.Data;
            if ((0xb < *(int *)(pFVar4 + lVar14 * 0x18 + 8)) &&
               (lVar12 = *(longlong *)(pFVar4 + lVar14 * 0x18), *(char *)(lVar12 + 0xb0) == '\v')) {
              lVar12 = *(longlong *)(lVar12 + 0xb8);
              if ((*(longlong *)(lVar12 + 0x98) == 0) && (*(char *)(lVar12 + 0x18) == '\0')) {
                bVar7 = false;
              }
              else {
                bVar7 = true;
              }
              if (bVar7) {
                uVar11 = 0;
                if ((int)uVar13 < (param_2->MorphTargets).ArrayNum) {
                  uVar11 = uVar10;
                }
                if ((uVar11 == 0) &&
                   (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar7)) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                pFVar4 = (param_2->MorphTargets).AllocatorInstance.Data;
                if ((*(int *)(pFVar4 + lVar14 * 0x18 + 8) < 0xc) ||
                   (lVar12 = *(longlong *)(pFVar4 + lVar14 * 0x18), *(char *)(lVar12 + 0xb0) != '\v'
                   )) {
                  pFVar9 = &EmptyAccessor;
                }
                else {
                  pFVar9 = *(FAccessor **)(lVar12 + 0xb8);
                }
                if (pFVar9->Type == Vec4) {
                  if (((pFVar9->BufferView).Buffer.Data != (uchar *)0x0) ||
                     ((pFVar9->Sparse).bHasSparse != false)) {
                    TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>::SetNumZeroed
                              (this_00,pFVar9->Count,No);
                  }
                  FAccessor::GetVec4Array
                            (pFVar9,(TVector4<float> *)(this_00->AllocatorInstance).Data);
                }
                else if (pFVar9->Type == Vec3) {
                  uVar10 = pFVar9->Count;
                  if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
                    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar10);
                  }
                  piVar1 = &this_00->ArrayMax;
                  if (this_00->ArrayMax < (int)uVar10) {
                    UE::Core::Private::
                    ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x10,0x10,uVar10,&this_00->AllocatorInstance,this_00->ArrayNum,piVar1
                              );
                  }
                  uVar11 = 0;
                  if (0 < (int)uVar10) {
                    do {
                      FAccessor::GetVec3(pFVar9,(TVector<double> *)&local_d8._s_0,uVar11);
                      iVar8 = this_00->ArrayNum;
                      fVar15 = (float)local_d8._s_0.X;
                      fVar16 = (float)local_d8._s_0.Y;
                      fVar17 = (float)local_d8._s_0.Z;
                      if (iVar8 == *piVar1) {
                        iVar8 = UE::Core::Private::
                                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                          (0x1010,&this_00->AllocatorInstance,piVar1);
                      }
                      uVar11 = uVar11 + 1;
                      this_00->ArrayNum = iVar8 + 1;
                      lVar12 = (longlong)iVar8;
                      pFVar4 = (this_00->AllocatorInstance).Data;
                      *(float *)(pFVar4 + lVar12 * 0x10) = fVar15;
                      *(float *)(pFVar4 + lVar12 * 0x10 + 4) = fVar16;
                      *(float *)(pFVar4 + lVar12 * 0x10 + 8) = fVar17;
                      *(undefined4 *)(pFVar4 + lVar12 * 0x10 + 0xc) = 0;
                    } while ((int)uVar11 < (int)uVar10);
                  }
                }
LAB_14e65cc50:
                iVar8 = this_00->ArrayNum;
                if ((param_1->ArrayNum == iVar8) && (uVar10 = 0, 0 < iVar8)) {
                  lVar12 = 0;
                  do {
                    uVar11 = 0;
                    if ((int)uVar10 < iVar8) {
                      uVar11 = ~uVar10 >> 0x1f;
                    }
                    if ((uVar11 == 0) &&
                       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                          ("(Index >= 0) & (Index < ArrayNum)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x447,
                                           L"Array index out of bounds: %lld into an array of size %lld"
                                          ), bVar7)) {
                      pcVar5 = (code *)swi(3);
                      (*pcVar5)();
                      return;
                    }
                    pFVar4 = (this_00->AllocatorInstance).Data;
                    fVar15 = *(float *)(pFVar4 + lVar12);
                    fVar16 = *(float *)(pFVar4 + lVar12 + 4);
                    fVar17 = *(float *)(pFVar4 + lVar12 + 8);
                    fVar3 = *(float *)(pFVar4 + lVar12 + 0xc);
                    uVar11 = 0;
                    if ((int)uVar10 < param_1->ArrayNum) {
                      uVar11 = ~uVar10 >> 0x1f;
                    }
                    if ((uVar11 == 0) &&
                       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                          ("(Index >= 0) & (Index < ArrayNum)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x447,
                                           L"Array index out of bounds: %lld into an array of size %lld"
                                          ), bVar7)) {
                      pcVar5 = (code *)swi(3);
                      (*pcVar5)();
                      return;
                    }
                    pFVar4 = (param_1->AllocatorInstance).Data;
                    *(float *)(pFVar4 + lVar12) = fVar2 * fVar15 + *(float *)(pFVar4 + lVar12);
                    *(float *)(pFVar4 + lVar12 + 4) =
                         fVar2 * fVar16 + *(float *)(pFVar4 + lVar12 + 4);
                    *(float *)(pFVar4 + lVar12 + 8) =
                         fVar2 * fVar17 + *(float *)(pFVar4 + lVar12 + 8);
                    *(float *)(pFVar4 + lVar12 + 0xc) =
                         fVar2 * fVar3 + *(float *)(pFVar4 + lVar12 + 0xc);
                    if (*param_4 == COLORS) {
                      uVar11 = 0;
                      if ((int)uVar10 < param_1->ArrayNum) {
                        uVar11 = ~uVar10 >> 0x1f;
                      }
                      if ((uVar11 == 0) &&
                         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                            ("(Index >= 0) & (Index < ArrayNum)",
                                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                             ,0x447,
                                             L"Array index out of bounds: %lld into an array of size %lld"
                                            ), bVar7)) {
                        pcVar5 = (code *)swi(3);
                        (*pcVar5)();
                        return;
                      }
                      fVar15 = *(float *)((param_1->AllocatorInstance).Data + lVar12);
                      if (fVar6 <= fVar15) {
                        fVar15 = fVar6;
                      }
                      uVar11 = 0;
                      if ((int)uVar10 < param_1->ArrayNum) {
                        uVar11 = ~uVar10 >> 0x1f;
                      }
                      if (fVar15 <= 0.0) {
                        fVar15 = 0.0;
                      }
                      if ((uVar11 == 0) &&
                         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                            ("(Index >= 0) & (Index < ArrayNum)",
                                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                             ,0x447,
                                             L"Array index out of bounds: %lld into an array of size %lld"
                                            ), bVar7)) {
                        pcVar5 = (code *)swi(3);
                        (*pcVar5)();
                        return;
                      }
                      *(float *)((param_1->AllocatorInstance).Data + lVar12) = fVar15;
                      uVar11 = 0;
                      if ((int)uVar10 < param_1->ArrayNum) {
                        uVar11 = ~uVar10 >> 0x1f;
                      }
                      if ((uVar11 == 0) &&
                         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                            ("(Index >= 0) & (Index < ArrayNum)",
                                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                             ,0x447,
                                             L"Array index out of bounds: %lld into an array of size %lld"
                                            ), bVar7)) {
                        pcVar5 = (code *)swi(3);
                        (*pcVar5)();
                        return;
                      }
                      fVar15 = *(float *)((param_1->AllocatorInstance).Data + lVar12 + 4);
                      if (fVar6 <= fVar15) {
                        fVar15 = fVar6;
                      }
                      uVar11 = 0;
                      if ((int)uVar10 < param_1->ArrayNum) {
                        uVar11 = ~uVar10 >> 0x1f;
                      }
                      if (fVar15 <= 0.0) {
                        fVar15 = 0.0;
                      }
                      if ((uVar11 == 0) &&
                         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                            ("(Index >= 0) & (Index < ArrayNum)",
                                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                             ,0x447,
                                             L"Array index out of bounds: %lld into an array of size %lld"
                                            ), bVar7)) {
                        pcVar5 = (code *)swi(3);
                        (*pcVar5)();
                        return;
                      }
                      *(float *)((param_1->AllocatorInstance).Data + lVar12 + 4) = fVar15;
                      uVar11 = 0;
                      if ((int)uVar10 < param_1->ArrayNum) {
                        uVar11 = ~uVar10 >> 0x1f;
                      }
                      if ((uVar11 == 0) &&
                         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                            ("(Index >= 0) & (Index < ArrayNum)",
                                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                             ,0x447,
                                             L"Array index out of bounds: %lld into an array of size %lld"
                                            ), bVar7)) {
                        pcVar5 = (code *)swi(3);
                        (*pcVar5)();
                        return;
                      }
                      fVar15 = *(float *)((param_1->AllocatorInstance).Data + lVar12 + 0xc);
                      if (fVar6 <= fVar15) {
                        fVar15 = fVar6;
                      }
                      uVar11 = 0;
                      if ((int)uVar10 < param_1->ArrayNum) {
                        uVar11 = ~uVar10 >> 0x1f;
                      }
                      if (fVar15 <= 0.0) {
                        fVar15 = 0.0;
                      }
                      if ((uVar11 == 0) &&
                         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                            ("(Index >= 0) & (Index < ArrayNum)",
                                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                             ,0x447,
                                             L"Array index out of bounds: %lld into an array of size %lld"
                                            ), bVar7)) {
                        pcVar5 = (code *)swi(3);
                        (*pcVar5)();
                        return;
                      }
                      *(float *)((param_1->AllocatorInstance).Data + lVar12 + 8) = fVar15;
                      uVar11 = 0;
                      if ((int)uVar10 < param_1->ArrayNum) {
                        uVar11 = ~uVar10 >> 0x1f;
                      }
                      if ((uVar11 == 0) &&
                         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                            ("(Index >= 0) & (Index < ArrayNum)",
                                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                             ,0x447,
                                             L"Array index out of bounds: %lld into an array of size %lld"
                                            ), bVar7)) {
                        pcVar5 = (code *)swi(3);
                        (*pcVar5)();
                        return;
                      }
                      fVar15 = *(float *)((param_1->AllocatorInstance).Data + lVar12 + 8);
                      if (fVar6 <= fVar15) {
                        fVar15 = fVar6;
                      }
                      uVar11 = 0;
                      if ((int)uVar10 < param_1->ArrayNum) {
                        uVar11 = ~uVar10 >> 0x1f;
                      }
                      if (fVar15 <= 0.0) {
                        fVar15 = 0.0;
                      }
                      if ((uVar11 == 0) &&
                         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                            ("(Index >= 0) & (Index < ArrayNum)",
                                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                             ,0x447,
                                             L"Array index out of bounds: %lld into an array of size %lld"
                                            ), bVar7)) {
                        pcVar5 = (code *)swi(3);
                        (*pcVar5)();
                        return;
                      }
                      *(float *)((param_1->AllocatorInstance).Data + lVar12 + 0xc) = fVar15;
                    }
                    iVar8 = this_00->ArrayNum;
                    uVar10 = uVar10 + 1;
                    lVar12 = lVar12 + 0x10;
                  } while ((int)uVar10 < iVar8);
                }
              }
            }
          }
        }
      }
      uVar13 = uVar13 + 1;
      lVar14 = lVar14 + 1;
    } while ((int)uVar13 < (param_2->MorphTargets).ArrayNum);
  }
  return;
}

