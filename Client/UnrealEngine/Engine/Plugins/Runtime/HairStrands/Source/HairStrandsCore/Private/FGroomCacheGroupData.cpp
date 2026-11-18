// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsCore
// Functions: 3

// FGroomCacheGroupData @ 14dfedb20

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FGroomCacheGroupData * __thiscall
FGroomCacheGroupData::FGroomCacheGroupData(FGroomCacheGroupData *this,FGroomCacheGroupData *param_1)

{
  double dVar1;
  uchar uVar2;
  uchar uVar3;
  uchar uVar4;
  uchar uVar5;
  uchar uVar6;
  uchar uVar7;
  uchar uVar8;
  
  (this->VertexData).PointsPosition.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VertexData).PointsPosition.AllocatorInstance.Data =
       (param_1->VertexData).PointsPosition.AllocatorInstance.Data;
  (param_1->VertexData).PointsPosition.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VertexData).PointsPosition.ArrayNum = (param_1->VertexData).PointsPosition.ArrayNum;
  (this->VertexData).PointsPosition.ArrayMax = (param_1->VertexData).PointsPosition.ArrayMax;
  (param_1->VertexData).PointsPosition.ArrayNum = 0;
  (param_1->VertexData).PointsPosition.ArrayMax = 0;
  (this->VertexData).PointsRadius.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VertexData).PointsRadius.AllocatorInstance.Data =
       (param_1->VertexData).PointsRadius.AllocatorInstance.Data;
  (param_1->VertexData).PointsRadius.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VertexData).PointsRadius.ArrayNum = (param_1->VertexData).PointsRadius.ArrayNum;
  (this->VertexData).PointsRadius.ArrayMax = (param_1->VertexData).PointsRadius.ArrayMax;
  (param_1->VertexData).PointsRadius.ArrayNum = 0;
  (param_1->VertexData).PointsRadius.ArrayMax = 0;
  (this->VertexData).PointsCoordU.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VertexData).PointsCoordU.AllocatorInstance.Data =
       (param_1->VertexData).PointsCoordU.AllocatorInstance.Data;
  (param_1->VertexData).PointsCoordU.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VertexData).PointsCoordU.ArrayNum = (param_1->VertexData).PointsCoordU.ArrayNum;
  (this->VertexData).PointsCoordU.ArrayMax = (param_1->VertexData).PointsCoordU.ArrayMax;
  (param_1->VertexData).PointsCoordU.ArrayNum = 0;
  (param_1->VertexData).PointsCoordU.ArrayMax = 0;
  (this->VertexData).PointsBaseColor.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VertexData).PointsBaseColor.AllocatorInstance.Data =
       (param_1->VertexData).PointsBaseColor.AllocatorInstance.Data;
  (param_1->VertexData).PointsBaseColor.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VertexData).PointsBaseColor.ArrayNum = (param_1->VertexData).PointsBaseColor.ArrayNum;
  (this->VertexData).PointsBaseColor.ArrayMax = (param_1->VertexData).PointsBaseColor.ArrayMax;
  (param_1->VertexData).PointsBaseColor.ArrayNum = 0;
  (param_1->VertexData).PointsBaseColor.ArrayMax = 0;
  (this->VertexData).PositionBuffer.Reference = (FRDGPooledBuffer *)0x0;
  (this->VertexData).PositionBuffer.Reference = (param_1->VertexData).PositionBuffer.Reference;
  (param_1->VertexData).PositionBuffer.Reference = (FRDGPooledBuffer *)0x0;
  (this->VertexData).RadiusBuffer.Reference = (FRDGPooledBuffer *)0x0;
  (this->VertexData).RadiusBuffer.Reference = (param_1->VertexData).RadiusBuffer.Reference;
  (param_1->VertexData).RadiusBuffer.Reference = (FRDGPooledBuffer *)0x0;
  (this->StrandData).CurvesLength.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StrandData).CurvesLength.AllocatorInstance.Data =
       (param_1->StrandData).CurvesLength.AllocatorInstance.Data;
  (param_1->StrandData).CurvesLength.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StrandData).CurvesLength.ArrayNum = (param_1->StrandData).CurvesLength.ArrayNum;
  (this->StrandData).CurvesLength.ArrayMax = (param_1->StrandData).CurvesLength.ArrayMax;
  (param_1->StrandData).CurvesLength.ArrayNum = 0;
  (param_1->StrandData).CurvesLength.ArrayMax = 0;
  (this->StrandData).MaxLength = (param_1->StrandData).MaxLength;
  (this->StrandData).MaxRadius = (param_1->StrandData).MaxRadius;
  dVar1 = (param_1->BoundingBox).Min.field0_0x0._s_0.Y;
  (this->BoundingBox).Min.field0_0x0._s_0.X = (param_1->BoundingBox).Min.field0_0x0._s_0.X;
  (this->BoundingBox).Min.field0_0x0._s_0.Y = dVar1;
  dVar1 = (param_1->BoundingBox).Max.field0_0x0._s_0.X;
  (this->BoundingBox).Min.field0_0x0._s_0.Z = (param_1->BoundingBox).Min.field0_0x0._s_0.Z;
  (this->BoundingBox).Max.field0_0x0._s_0.X = dVar1;
  dVar1 = (param_1->BoundingBox).Max.field0_0x0._s_0.Z;
  (this->BoundingBox).Max.field0_0x0._s_0.Y = (param_1->BoundingBox).Max.field0_0x0._s_0.Y;
  (this->BoundingBox).Max.field0_0x0._s_0.Z = dVar1;
  uVar2 = (param_1->BoundingBox).Pad[0];
  uVar3 = (param_1->BoundingBox).Pad[1];
  uVar4 = (param_1->BoundingBox).Pad[2];
  uVar5 = (param_1->BoundingBox).Pad[3];
  uVar6 = (param_1->BoundingBox).Pad[4];
  uVar7 = (param_1->BoundingBox).Pad[5];
  uVar8 = (param_1->BoundingBox).Pad[6];
  (this->BoundingBox).IsValid = (param_1->BoundingBox).IsValid;
  (this->BoundingBox).Pad[0] = uVar2;
  (this->BoundingBox).Pad[1] = uVar3;
  (this->BoundingBox).Pad[2] = uVar4;
  (this->BoundingBox).Pad[3] = uVar5;
  (this->BoundingBox).Pad[4] = uVar6;
  (this->BoundingBox).Pad[5] = uVar7;
  (this->BoundingBox).Pad[6] = uVar8;
  return this;
}

// FGroomCacheGroupData @ 14dfedc30

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FGroomCacheGroupData * __thiscall
FGroomCacheGroupData::FGroomCacheGroupData(FGroomCacheGroupData *this,FHairStrandsDatas *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  double dVar4;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar5;
  float fVar6;
  float fVar7;
  
  (this->VertexData).PointsPosition.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VertexData).PointsPosition.AllocatorInstance.Data =
       (FScriptContainerElement *)param_1->_padding_;
  param_1->_padding_ = 0;
  (this->VertexData).PointsPosition.ArrayNum = (int)param_1->_padding_;
  (this->VertexData).PointsPosition.ArrayMax = *(int *)((longlong)&param_1->_padding_ + 4);
  pTVar5 = &(this->VertexData).PointsRadius;
  param_1->_padding_ = 0;
  (pTVar5->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (pTVar5->AllocatorInstance).Data = (FScriptContainerElement *)param_1->_padding_;
  param_1->_padding_ = 0;
  (this->VertexData).PointsRadius.ArrayNum = (int)param_1->_padding_;
  (this->VertexData).PointsRadius.ArrayMax = *(int *)((longlong)&param_1->_padding_ + 4);
  param_1->_padding_ = 0;
  (this->VertexData).PointsCoordU.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VertexData).PointsCoordU.AllocatorInstance.Data =
       (FScriptContainerElement *)param_1->_padding_;
  param_1->_padding_ = 0;
  (this->VertexData).PointsCoordU.ArrayNum = (int)param_1->_padding_;
  (this->VertexData).PointsCoordU.ArrayMax = *(int *)((longlong)&param_1->_padding_ + 4);
  param_1->_padding_ = 0;
  (this->VertexData).PointsBaseColor.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VertexData).PointsBaseColor.AllocatorInstance.Data =
       (FScriptContainerElement *)param_1->_padding_;
  param_1->_padding_ = 0;
  (this->VertexData).PointsBaseColor.ArrayNum = (int)param_1->_padding_;
  (this->VertexData).PointsBaseColor.ArrayMax = *(int *)((longlong)&param_1->_padding_ + 4);
  param_1->_padding_ = 0;
  (this->VertexData).PositionBuffer.Reference = (FRDGPooledBuffer *)0x0;
  (this->VertexData).RadiusBuffer.Reference = (FRDGPooledBuffer *)0x0;
  fVar6 = GetHairStrandsMaxRadius(pTVar5);
  fVar7 = GetHairStrandsMaxLength(param_1);
  (this->StrandData).CurvesLength.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StrandData).CurvesLength.AllocatorInstance.Data =
       (FScriptContainerElement *)param_1->_padding_;
  param_1->_padding_ = 0;
  (this->StrandData).CurvesLength.ArrayNum = (int)param_1->_padding_;
  (this->StrandData).CurvesLength.ArrayMax = *(int *)((longlong)&param_1->_padding_ + 4);
  param_1->_padding_ = 0;
  (this->StrandData).MaxLength = fVar7;
  (this->StrandData).MaxRadius = fVar6;
  uVar1 = *(undefined8 *)((longlong)&(param_1->BoundingBox).Min.field0_0x0 + 4);
  fVar6 = (param_1->BoundingBox).Max.field0_0x0._s_0.X;
  uVar2 = *(undefined8 *)((longlong)&(param_1->BoundingBox).Max.field0_0x0 + 4);
  (this->BoundingBox).Min.field0_0x0._s_0.X = (double)(param_1->BoundingBox).Min.field0_0x0._s_0.X;
  (this->BoundingBox).Min.field0_0x0._s_0.Y = (double)(float)uVar1;
  (this->BoundingBox).Min.field0_0x0._s_0.Z = (double)(float)((ulonglong)uVar1 >> 0x20);
  dVar4 = (double)(float)((ulonglong)uVar2 >> 0x20);
  (this->BoundingBox).Max.field0_0x0._s_0.X = (double)fVar6;
  auVar3._8_4_ = SUB84(dVar4,0);
  auVar3._0_8_ = (double)(float)uVar2;
  auVar3._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
  *(undefined1 (*) [16])((longlong)&(this->BoundingBox).Max.field0_0x0 + 8) = auVar3;
  (this->BoundingBox).IsValid = '\x01';
  return this;
}

// Serialize @ 14e027d00

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FGroomCacheGroupData::Serialize
          (FGroomCacheGroupData *this,FArchive *param_1,int param_2,EGroomCacheAttributes param_3)

{
  float *pfVar1;
  float *pfVar2;
  
  UE::Math::operator<<(param_1,&this->BoundingBox);
  if ((param_3 & Position) != None) {
    TArrayPrivateFriend::Serialize<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>
              (param_1,(TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)this);
  }
  if ((param_3 & Width) != None) {
    TArrayPrivateFriend::Serialize<float,TSizedDefaultAllocator<32>_>
              (param_1,&(this->VertexData).PointsRadius);
  }
  if ((param_3 & Color) != None) {
    TArrayPrivateFriend::Serialize<FLinearColor,TSizedDefaultAllocator<32>_>
              (param_1,&(this->VertexData).PointsBaseColor);
  }
  pfVar1 = &(this->StrandData).MaxLength;
  pfVar2 = (float *)**(undefined8 **)&param_1->field_0x8;
  if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar1);
    }
  }
  else {
    *pfVar1 = *pfVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  pfVar1 = &(this->StrandData).MaxRadius;
  pfVar2 = (float *)**(undefined8 **)&param_1->field_0x8;
  if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar1);
    }
  }
  else {
    *pfVar1 = *pfVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  TArrayPrivateFriend::Serialize<float,TSizedDefaultAllocator<32>_>
            (param_1,&(this->StrandData).CurvesLength);
  return;
}

