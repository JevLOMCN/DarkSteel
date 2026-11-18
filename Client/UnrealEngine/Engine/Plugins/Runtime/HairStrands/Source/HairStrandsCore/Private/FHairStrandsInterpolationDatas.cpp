// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsCore
// Functions: 2

// Reset @ 14e0aaa40

void __thiscall FHairStrandsInterpolationDatas::Reset(FHairStrandsInterpolationDatas *this)

{
  (this->CurveSimWeights).ArrayNum = 0;
  if ((this->CurveSimWeights).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,&(this->CurveSimWeights).AllocatorInstance,0,&(this->CurveSimWeights).ArrayMax)
    ;
  }
  (this->CurveSimIndices).ArrayNum = 0;
  if ((this->CurveSimIndices).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,(ForAnyElementType *)this,0,&(this->CurveSimIndices).ArrayMax);
  }
  (this->CurveSimRootPointIndex).ArrayNum = 0;
  if ((this->CurveSimRootPointIndex).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,&(this->CurveSimRootPointIndex).AllocatorInstance,0,
               &(this->CurveSimRootPointIndex).ArrayMax);
  }
  (this->PointSimLerps).ArrayNum = 0;
  if ((this->PointSimLerps).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,&(this->PointSimLerps).AllocatorInstance,0,&(this->PointSimLerps).ArrayMax);
  }
  (this->PointSimIndices).ArrayNum = 0;
  if ((this->PointSimIndices).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,&(this->PointSimIndices).AllocatorInstance,0,&(this->PointSimIndices).ArrayMax)
    ;
  }
  return;
}

// SetNum @ 14e0adce0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FHairStrandsInterpolationDatas::SetNum
          (FHairStrandsInterpolationDatas *this,uint param_1,uint param_2)

{
  TArray<UE::Math::TIntVector2<int>,TSizedDefaultAllocator<32>_>::SetNum
            (&this->CurveSimIndices,param_1,Default);
  TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>::SetNum
            (&this->CurveSimWeights,param_1,Default);
  TArray<UE::Math::TIntVector2<int>,TSizedDefaultAllocator<32>_>::SetNum
            (&this->CurveSimRootPointIndex,param_1,Default);
  TArray<UE::Math::TIntVector2<int>,TSizedDefaultAllocator<32>_>::SetNum
            (&this->PointSimIndices,param_2,Default);
  TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>::SetNum
            (&this->PointSimLerps,param_2,Default);
  return;
}

