// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryAlgorithms
// Functions: 4

// TOffsetPolygon2<TArrayView<UE::Math::TVector2<float>,int>,float> @ 1494ff0e0

TOffsetPolygon2<TArrayView<UE::Math::TVector2<float>,int>,float> * __thiscall
UE::Geometry::TOffsetPolygon2<TArrayView<UE::Math::TVector2<float>,int>,float>::
TOffsetPolygon2<TArrayView<UE::Math::TVector2<float>,int>,float>
          (TOffsetPolygon2<TArrayView<UE::Math::TVector2<float>,int>,float> *this,
          TArray<TArrayView<UE::Math::TVector2<float>,int>,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *_Src;
  
  piVar1 = &(this->Polygons).ArrayMax;
  (this->Polygons).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar2 = param_1->ArrayNum;
  _Src = (param_1->AllocatorInstance).Data;
  (this->Polygons).ArrayNum = iVar2;
  if (iVar2 == 0) {
    *piVar1 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar2,0,(ForAnyElementType *)this,iVar2,piVar1);
    memcpy((this->Polygons).AllocatorInstance.Data,_Src,(longlong)iVar2 << 4);
  }
  this->MaxStepsPerRadian = -1.0;
  this->DefaultStepsPerRadianScale = 1.0;
  this->JoinType = Square;
  this->EndType = Polygon;
  (this->Result).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Result).ArrayNum = 0;
  (this->Result).ArrayMax = 0;
  this->Offset = 1.0;
  this->MiterLimit = 2.0;
  return this;
}

// TOffsetPolygon2<TArrayView<UE::Math::TVector2<double>,int>,double> @ 1494ff1a0

TOffsetPolygon2<TArrayView<UE::Math::TVector2<double>,int>,double> * __thiscall
UE::Geometry::TOffsetPolygon2<TArrayView<UE::Math::TVector2<double>,int>,double>::
TOffsetPolygon2<TArrayView<UE::Math::TVector2<double>,int>,double>
          (TOffsetPolygon2<TArrayView<UE::Math::TVector2<double>,int>,double> *this,
          TArray<TArrayView<UE::Math::TVector2<double>,int>,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *_Src;
  
  piVar1 = &(this->Polygons).ArrayMax;
  (this->Polygons).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar2 = param_1->ArrayNum;
  _Src = (param_1->AllocatorInstance).Data;
  (this->Polygons).ArrayNum = iVar2;
  if (iVar2 == 0) {
    *piVar1 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar2,0,(ForAnyElementType *)this,iVar2,piVar1);
    memcpy((this->Polygons).AllocatorInstance.Data,_Src,(longlong)iVar2 << 4);
  }
  this->MiterLimit = 2.0;
  this->JoinType = Square;
  this->EndType = Polygon;
  this->MaxStepsPerRadian = -1.0;
  (this->Result).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Result).ArrayNum = 0;
  (this->Result).ArrayMax = 0;
  this->Offset = 1.0;
  this->DefaultStepsPerRadianScale = 1.0;
  return this;
}

// ComputeResult @ 149510400

bool __thiscall
UE::Geometry::TOffsetPolygon2<TArrayView<UE::Math::TVector2<float>,int>,float>::ComputeResult
          (TOffsetPolygon2<TArrayView<UE::Math::TVector2<float>,int>,float> *this)

{
  bool bVar1;
  float fVar2;
  
  fVar2 = this->MiterLimit;
  if (this->MiterLimit <= __real_40000000) {
    fVar2 = __real_40000000;
  }
  this->MiterLimit = fVar2;
  bVar1 = Geometry::Private::Offset<float>
                    (&this->Polygons,&this->JoinType,&this->EndType,&this->Offset,&this->MiterLimit,
                     &this->Result,this->MaxStepsPerRadian,this->DefaultStepsPerRadianScale);
  return bVar1;
}

// ComputeResult @ 149510450

bool __thiscall
UE::Geometry::TOffsetPolygon2<TArrayView<UE::Math::TVector2<double>,int>,double>::ComputeResult
          (TOffsetPolygon2<TArrayView<UE::Math::TVector2<double>,int>,double> *this)

{
  double dVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  dVar1 = this->MiterLimit;
  uVar3 = SUB84(dVar1,0);
  uVar4 = (undefined4)((ulonglong)dVar1 >> 0x20);
  if (dVar1 <= __real_4000000000000000) {
    uVar3 = SUB84(__real_4000000000000000,0);
    uVar4 = (undefined4)((ulonglong)__real_4000000000000000 >> 0x20);
  }
  this->MiterLimit = (double)CONCAT44(uVar4,uVar3);
  bVar2 = Geometry::Private::Offset<double>
                    (&this->Polygons,&this->JoinType,&this->EndType,&this->Offset,&this->MiterLimit,
                     &this->Result,this->MaxStepsPerRadian,this->DefaultStepsPerRadianScale);
  return bVar2;
}

