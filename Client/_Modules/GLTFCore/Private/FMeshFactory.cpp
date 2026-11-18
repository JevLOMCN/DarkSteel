// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GLTFCore
// Functions: 9

// FMeshFactory @ 14e62af70

FMeshFactory * __thiscall GLTF::FMeshFactory::FMeshFactory(FMeshFactory *this)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  FMeshFactoryImpl *pFVar4;
  TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *pTVar5;
  longlong lVar6;
  
  pFVar4 = ::operator_new(0x210);
  if (pFVar4 != (FMeshFactoryImpl *)0x0) {
    pFVar4->_padding_ = 0;
    lVar6 = 10;
    pFVar4->_padding_ = 0;
    *(undefined8 *)&(pFVar4->MaterialIndicesUsed).Elements = 0;
    *(undefined8 *)&(pFVar4->MaterialIndicesUsed).Elements.field_0x8 = 0;
    *(undefined8 *)&(pFVar4->MaterialIndicesUsed).Elements.field_0x20 = 0;
    pFVar4->ImportUniformScale = 1.0;
    *(undefined4 *)&(pFVar4->MaterialIndicesUsed).Elements.field_0x28 = 0;
    *(undefined4 *)&(pFVar4->MaterialIndicesUsed).Elements.field_0x2c = 0x80;
    *(undefined4 *)&(pFVar4->MaterialIndicesUsed).Elements.field_0x30 = 0xffffffff;
    *(undefined4 *)&(pFVar4->MaterialIndicesUsed).Elements.field_0x34 = 0;
    (pFVar4->MaterialIndicesUsed).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    (pFVar4->MaterialIndicesUsed).HashSize = 0;
    *(undefined8 *)&pFVar4->MaterialIndexToPolygonGroupID = 0;
    *(undefined8 *)&(pFVar4->MaterialIndexToPolygonGroupID).field_0x8 = 0;
    *(undefined8 *)&(pFVar4->MaterialIndexToPolygonGroupID).field_0x20 = 0;
    *(undefined4 *)&(pFVar4->MaterialIndexToPolygonGroupID).field_0x28 = 0;
    *(undefined4 *)&(pFVar4->MaterialIndexToPolygonGroupID).field_0x2c = 0x80;
    *(undefined4 *)&(pFVar4->MaterialIndexToPolygonGroupID).field_0x30 = 0xffffffff;
    *(undefined4 *)&(pFVar4->MaterialIndexToPolygonGroupID).field_0x34 = 0;
    *(undefined8 *)&(pFVar4->MaterialIndexToPolygonGroupID).field_0x40 = 0;
    *(undefined4 *)&(pFVar4->MaterialIndexToPolygonGroupID).field_0x48 = 0;
    (pFVar4->PositionIndexToVertexIdPerPrim).AllocatorInstance.Data = (FScriptContainerElement *)0x0
    ;
    (pFVar4->PositionIndexToVertexIdPerPrim).ArrayNum = 0;
    (pFVar4->PositionIndexToVertexIdPerPrim).ArrayMax = 0;
    pTVar5 = pFVar4->Vector2dBuffers;
    do {
      (pTVar5->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      pTVar5->ArrayNum = 0;
      pTVar5->ArrayMax = 0;
      pTVar5 = pTVar5 + 1;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
    pFVar4->VectorBuffers[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    piVar1 = &(pFVar4->CornerVertexInstanceIDs).ArrayNum;
    pFVar4->VectorBuffers[0].ArrayNum = 0;
    pFVar4->VectorBuffers[0].ArrayMax = 0;
    piVar2 = &(pFVar4->CornerVertexInstanceIDs).ArrayMax;
    pFVar4->VectorBuffers[1].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pFVar4->VectorBuffers[1].ArrayNum = 0;
    pFVar4->VectorBuffers[1].ArrayMax = 0;
    pFVar4->VectorBuffers[2].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pFVar4->VectorBuffers[2].ArrayNum = 0;
    pFVar4->VectorBuffers[2].ArrayMax = 0;
    pFVar4->VectorBuffers[3].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pFVar4->VectorBuffers[3].ArrayNum = 0;
    pFVar4->VectorBuffers[3].ArrayMax = 0;
    pFVar4->Vector4dBuffers[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pFVar4->Vector4dBuffers[0].ArrayNum = 0;
    pFVar4->Vector4dBuffers[0].ArrayMax = 0;
    pFVar4->Vector4dBuffers[1].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pFVar4->Vector4dBuffers[1].ArrayNum = 0;
    pFVar4->Vector4dBuffers[1].ArrayMax = 0;
    pFVar4->Vector4dBuffers[2].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pFVar4->Vector4dBuffers[2].ArrayNum = 0;
    pFVar4->Vector4dBuffers[2].ArrayMax = 0;
    pFVar4->Vector4dBuffers[3].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pFVar4->Vector4dBuffers[3].ArrayNum = 0;
    pFVar4->Vector4dBuffers[3].ArrayMax = 0;
    *piVar1 = 0;
    (pFVar4->IntBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar4->IntBuffer).ArrayNum = 0;
    (pFVar4->IntBuffer).ArrayMax = 0;
    (pFVar4->CornerVertexInstanceIDs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *piVar2 = 0;
    iVar3 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,3,&(pFVar4->CornerVertexInstanceIDs).AllocatorInstance,piVar1,piVar2);
    DefaultConstructItems<FVertexInstanceID,int>
              ((pFVar4->CornerVertexInstanceIDs).AllocatorInstance.Data + (longlong)iVar3 * 4,3);
    (this->Impl).Ptr = pFVar4;
    return this;
  }
  (this->Impl).Ptr = (FMeshFactoryImpl *)0x0;
  return this;
}

// ~FMeshFactory @ 14e62bef0

void __thiscall GLTF::FMeshFactory::~FMeshFactory(FMeshFactory *this)

{
  FMeshFactoryImpl *this_00;
  
  this_00 = (this->Impl).Ptr;
  if (this_00 != (FMeshFactoryImpl *)0x0) {
    FMeshFactoryImpl::_scalar_deleting_destructor_(this_00,1);
    return;
  }
  return;
}

// CleanUp @ 14e6315b0

void __thiscall GLTF::FMeshFactory::CleanUp(FMeshFactory *this)

{
  FMeshFactoryImpl::CleanUp((this->Impl).Ptr);
  return;
}

// FillMeshDescription @ 14e634480

void __thiscall
GLTF::FMeshFactory::FillMeshDescription
          (FMeshFactory *this,FMesh *param_1,TTransform<double> *param_2,FMeshDescription *param_3,
          TArray<float,TSizedDefaultAllocator<32>_> *param_4)

{
  FMeshFactoryImpl::FillMeshDescription((this->Impl).Ptr,param_1,param_2,param_3,param_4);
  return;
}

// GetLogMessages @ 14e63c9a0

TArray<TTuple<GLTF::EMessageSeverity,FText>,TSizedDefaultAllocator<32>_> * __thiscall
GLTF::FMeshFactory::GetLogMessages(FMeshFactory *this)

{
  return (TArray<TTuple<GLTF::EMessageSeverity,FText>,TSizedDefaultAllocator<32>_> *)
         (this->Impl).Ptr;
}

// GetPositionIndexToVertexIdPerPrim @ 14e63d6e0

TArray<TMap<int,FVertexID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FVertexID,0>_>,TSizedDefaultAllocator<32>_>
* __thiscall GLTF::FMeshFactory::GetPositionIndexToVertexIdPerPrim(FMeshFactory *this)

{
  return &((this->Impl).Ptr)->PositionIndexToVertexIdPerPrim;
}

// GetUniformScale @ 14e63ebe0

float __thiscall GLTF::FMeshFactory::GetUniformScale(FMeshFactory *this)

{
  return ((this->Impl).Ptr)->ImportUniformScale;
}

// SetReserveSize @ 14e64b1e0

void __thiscall GLTF::FMeshFactory::SetReserveSize(FMeshFactory *this,uint param_1)

{
  ((this->Impl).Ptr)->MaxReserveSize = param_1;
  return;
}

// SetUniformScale @ 14e64bf60

void __thiscall GLTF::FMeshFactory::SetUniformScale(FMeshFactory *this,float param_1)

{
  ((this->Impl).Ptr)->ImportUniformScale = param_1;
  return;
}

