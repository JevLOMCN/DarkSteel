// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// operator= @ 147cca590

FStaticMeshDataType * __thiscall
FStaticMeshDataType::operator=(FStaticMeshDataType *this,FStaticMeshDataType *param_1)

{
  TArray<FVertexStreamComponent,TFixedAllocator<4>_> *_Dst;
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uchar uVar5;
  uchar uVar6;
  TEnumAsByte<EVertexElementType> TVar7;
  EVertexStreamUsage EVar8;
  
  uVar4 = (param_1->PositionComponent).StreamOffset;
  uVar5 = (param_1->PositionComponent).Offset;
  uVar6 = (param_1->PositionComponent).Stride;
  TVar7.Value = (param_1->PositionComponent).Type.Value;
  EVar8 = (param_1->PositionComponent).VertexStreamUsage;
  _Dst = &this->TextureCoordinates;
  (this->PositionComponent).VertexBuffer = (param_1->PositionComponent).VertexBuffer;
  (this->PositionComponent).StreamOffset = uVar4;
  (this->PositionComponent).Offset = uVar5;
  (this->PositionComponent).Stride = uVar6;
  (this->PositionComponent).Type = (TEnumAsByte<EVertexElementType>)TVar7.Value;
  (this->PositionComponent).VertexStreamUsage = EVar8;
  uVar4 = param_1->TangentBasisComponents[0].StreamOffset;
  uVar5 = param_1->TangentBasisComponents[0].Offset;
  uVar6 = param_1->TangentBasisComponents[0].Stride;
  TVar7.Value = param_1->TangentBasisComponents[0].Type.Value;
  EVar8 = param_1->TangentBasisComponents[0].VertexStreamUsage;
  this->TangentBasisComponents[0].VertexBuffer = param_1->TangentBasisComponents[0].VertexBuffer;
  this->TangentBasisComponents[0].StreamOffset = uVar4;
  this->TangentBasisComponents[0].Offset = uVar5;
  this->TangentBasisComponents[0].Stride = uVar6;
  this->TangentBasisComponents[0].Type = (TEnumAsByte<EVertexElementType>)TVar7.Value;
  this->TangentBasisComponents[0].VertexStreamUsage = EVar8;
  uVar4 = param_1->TangentBasisComponents[1].StreamOffset;
  uVar5 = param_1->TangentBasisComponents[1].Offset;
  uVar6 = param_1->TangentBasisComponents[1].Stride;
  TVar7.Value = param_1->TangentBasisComponents[1].Type.Value;
  EVar8 = param_1->TangentBasisComponents[1].VertexStreamUsage;
  this->TangentBasisComponents[1].VertexBuffer = param_1->TangentBasisComponents[1].VertexBuffer;
  this->TangentBasisComponents[1].StreamOffset = uVar4;
  this->TangentBasisComponents[1].Offset = uVar5;
  this->TangentBasisComponents[1].Stride = uVar6;
  this->TangentBasisComponents[1].Type = (TEnumAsByte<EVertexElementType>)TVar7.Value;
  this->TangentBasisComponents[1].VertexStreamUsage = EVar8;
  if (_Dst != &param_1->TextureCoordinates) {
    iVar2 = (this->TextureCoordinates).ArrayMax;
    piVar1 = &(this->TextureCoordinates).ArrayMax;
    iVar3 = (param_1->TextureCoordinates).ArrayNum;
    (this->TextureCoordinates).ArrayNum = iVar3;
    if ((iVar3 == 0) && (iVar2 == 0)) {
      *piVar1 = 4;
    }
    else {
      UE::Core::Private::
      ReallocForCopy<0,TFixedAllocator<4>::ForElementType<FVertexStreamComponent>_>
                (0x10,8,iVar3,iVar2,&_Dst->AllocatorInstance,iVar3,piVar1);
      if (iVar3 != 0) {
        memcpy(_Dst,&param_1->TextureCoordinates,(longlong)iVar3 << 4);
      }
    }
  }
  uVar4 = (param_1->LightMapCoordinateComponent).StreamOffset;
  uVar5 = (param_1->LightMapCoordinateComponent).Offset;
  uVar6 = (param_1->LightMapCoordinateComponent).Stride;
  TVar7.Value = (param_1->LightMapCoordinateComponent).Type.Value;
  EVar8 = (param_1->LightMapCoordinateComponent).VertexStreamUsage;
  (this->LightMapCoordinateComponent).VertexBuffer =
       (param_1->LightMapCoordinateComponent).VertexBuffer;
  (this->LightMapCoordinateComponent).StreamOffset = uVar4;
  (this->LightMapCoordinateComponent).Offset = uVar5;
  (this->LightMapCoordinateComponent).Stride = uVar6;
  (this->LightMapCoordinateComponent).Type = (TEnumAsByte<EVertexElementType>)TVar7.Value;
  (this->LightMapCoordinateComponent).VertexStreamUsage = EVar8;
  uVar4 = (param_1->ColorComponent).StreamOffset;
  uVar5 = (param_1->ColorComponent).Offset;
  uVar6 = (param_1->ColorComponent).Stride;
  TVar7.Value = (param_1->ColorComponent).Type.Value;
  EVar8 = (param_1->ColorComponent).VertexStreamUsage;
  (this->ColorComponent).VertexBuffer = (param_1->ColorComponent).VertexBuffer;
  (this->ColorComponent).StreamOffset = uVar4;
  (this->ColorComponent).Offset = uVar5;
  (this->ColorComponent).Stride = uVar6;
  (this->ColorComponent).Type = (TEnumAsByte<EVertexElementType>)TVar7.Value;
  (this->ColorComponent).VertexStreamUsage = EVar8;
  this->PositionComponentSRV = param_1->PositionComponentSRV;
  this->TangentsSRV = param_1->TangentsSRV;
  this->TextureCoordinatesSRV = param_1->TextureCoordinatesSRV;
  this->ColorComponentsSRV = param_1->ColorComponentsSRV;
  this->ColorIndexMask = param_1->ColorIndexMask;
  this->LightMapCoordinateIndex = param_1->LightMapCoordinateIndex;
  this->NumTexCoords = param_1->NumTexCoords;
  this->LODLightmapDataIndex = param_1->LODLightmapDataIndex;
  return this;
}

