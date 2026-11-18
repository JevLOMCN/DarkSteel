// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsCore
// Functions: 2

// Reset @ 14e0a9df0

void __thiscall FHairCardsInterpolationDatas::Reset(FHairCardsInterpolationDatas *this)

{
  int *piVar1;
  
  piVar1 = &(this->PointsSimCurvesIndex).ArrayMax;
  (this->PointsSimCurvesIndex).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,(ForAnyElementType *)this,0,piVar1);
  }
  piVar1 = &(this->PointsSimCurvesVertexIndex).ArrayMax;
  (this->PointsSimCurvesVertexIndex).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->PointsSimCurvesVertexIndex).AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->PointsSimCurvesVertexLerp).ArrayMax;
  (this->PointsSimCurvesVertexLerp).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->PointsSimCurvesVertexLerp).AllocatorInstance,0,piVar1);
  }
  return;
}

// SetNum @ 14e0adbb0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FHairCardsInterpolationDatas::SetNum(FHairCardsInterpolationDatas *this,uint param_1)

{
  TArray<int,TSizedDefaultAllocator<32>_>::SetNum(&this->PointsSimCurvesIndex,param_1,Default);
  TArray<int,TSizedDefaultAllocator<32>_>::SetNum(&this->PointsSimCurvesVertexIndex,param_1,Default)
  ;
  TArray<float,TSizedDefaultAllocator<32>_>::SetNum
            (&this->PointsSimCurvesVertexLerp,param_1,Default);
  return;
}

