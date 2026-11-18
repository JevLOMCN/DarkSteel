// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 2

// FIterationState @ 149be5bc0

FIterationState * __thiscall
PCGPathfindingElement::FIterationState::FIterationState(FIterationState *this)

{
  undefined1 *puVar1;
  
  this->LastPathIterationIndex = -1;
  this->PathIterationIndex = 0;
  (this->SearchState).OriginatingPointData = (UPCGPointData *)0x0;
  *(undefined8 *)&(this->SearchState).CostFunction = 0;
  *(undefined8 *)&(this->SearchState).CostFunction.field_0x28 = 0;
  *(undefined ***)&(this->SearchState).CostFunction.field_0x10 =
       &___7__TFunction_OwnedObject_P6ANNPEBUFPCGPoint__N0_Z_0A__0A__Function_Private_Core_UE__6B_;
  puVar1 = &(this->SearchState).CostFunction.field_0x18;
  *(code **)puVar1 = PCGSpatialAlgo::AStar::Cost::CalculateCost_EuclideanDistance;
  if (puVar1 != (undefined1 *)0x0) {
    *(code **)&(this->SearchState).CostFunction =
         UE::Core::Private::Function::
         TFunctionRefCaller<double_(__cdecl*)(double,FPCGPoint_const_*,double,FPCGPoint_const_*),double,double,FPCGPoint_const_*,double,FPCGPoint_const_*>
         ::Call;
  }
  *(undefined8 *)&(this->SearchState).HeuristicFunction = 0;
  *(undefined8 *)&(this->SearchState).HeuristicFunction.field_0x28 = 0;
  *(undefined ***)&(this->SearchState).HeuristicFunction.field_0x10 =
       &
       ___7__TFunction_OwnedObject_P6ANAEBU__TVector_N_Math_UE__0_Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  puVar1 = &(this->SearchState).HeuristicFunction.field_0x18;
  *(code **)puVar1 = PCGSpatialAlgo::AStar::Heuristic::CalculateHeuristic_EuclideanDistance;
  if (puVar1 != (undefined1 *)0x0) {
    *(code **)&(this->SearchState).HeuristicFunction =
         UE::Core::Private::Function::
         TFunctionRefCaller<double_(__cdecl*)(UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&),double,UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&>
         ::Call;
  }
  (this->SearchState).NodeList.AllocatorInstance.SecondaryData =
       (ForElementType<PCGSpatialAlgo::AStar::FNode>)0x0;
  (this->SearchState).NodeList.ArrayNum = 0;
  (this->SearchState).NodeList.ArrayMax = 0x400;
  (this->SearchState).OpenIndexList.AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
  (this->SearchState).OpenIndexList.ArrayNum = 0;
  (this->SearchState).OpenIndexList.ArrayMax = 0x400;
  (this->SearchState).ClosedIndexList.AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
  (this->SearchState).ClosedIndexList.ArrayNum = 0;
  (this->SearchState).ClosedIndexList.ArrayMax = 0x400;
  *(undefined8 *)&(this->SearchState).PointToNodeIndexMap = 0;
  *(undefined8 *)&(this->SearchState).PointToNodeIndexMap.field_0x8 = 0;
  *(undefined8 *)&(this->SearchState).PointToNodeIndexMap.field_0x20 = 0;
  *(undefined4 *)&(this->SearchState).PointToNodeIndexMap.field_0x28 = 0;
  *(undefined4 *)&(this->SearchState).PointToNodeIndexMap.field_0x2c = 0x80;
  *(undefined4 *)&(this->SearchState).PointToNodeIndexMap.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SearchState).PointToNodeIndexMap.field_0x34 = 0;
  *(undefined8 *)&(this->SearchState).PointToNodeIndexMap.field_0x40 = 0;
  *(undefined4 *)&(this->SearchState).PointToNodeIndexMap.field_0x48 = 0;
  return this;
}

// ~FIterationState @ 149be94c0

void __thiscall PCGSelfPruningElement::FIterationState::~FIterationState(FIterationState *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  pFVar1 = (this->SortedPoints).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->TemporaryBodyInstances).field_0x48 = 0;
  pvVar2 = *(void **)&(this->TemporaryBodyInstances).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FBodyInstance_*,FBodyInstance_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FBodyInstance_*,FBodyInstance_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FBodyInstance_*,FBodyInstance_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->TemporaryBodyInstances);
  FPCGCollisionWrapper::~FPCGCollisionWrapper(&this->CollisionWrapper);
  pFVar1 = (this->ExclusionPoints).Bits.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ExcludedPoints).Bits.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SortedPointRefs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

