// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 2

// FClusteringData @ 149acf440

FClusteringData * __thiscall
PCGClusterElement::FClusteringData::FClusteringData(FClusteringData *this)

{
  this->ProcessingStage = '\x01';
  this->bConverged = false;
  this->OutPointData = (UPCGPointData *)0x0;
  this->OutputData = (UPCGBasePointData *)0x0;
  this->Iteration = 0;
  (this->Accessor).Ptr = (IPCGAttributeAccessor *)0x0;
  (this->Keys).Ptr = (IPCGAttributeAccessorKeys *)0x0;
  (this->Centroids).AllocatorInstance.SecondaryData =
       (ForElementType<UE::Math::TVector<double>_>)0x0;
  (this->Centroids).ArrayNum = 0;
  (this->Centroids).ArrayMax = 0x10;
  (this->PointToClusterAssignments).ArrayNum = 0;
  (this->PointToClusterAssignments).ArrayMax = 0;
  (this->PointToClusterAssignments).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EMData).Gaussians.AllocatorInstance.SecondaryData =
       (ForElementType<PCGClusterElement::FClusteringData::FExpectationMaximizationData::FGaussian>)
       0x0;
  (this->EMData).Gaussians.ArrayNum = 0;
  (this->EMData).Gaussians.ArrayMax = 0x10;
  (this->EMData).Probabilities.NumPoints = 0;
  (this->EMData).Probabilities.NumCentroids = 0;
  (this->EMData).Probabilities.Array.AllocatorInstance.SecondaryData = (ForElementType<double>)0x0;
  (this->EMData).Probabilities.Array.ArrayNum = 0;
  (this->EMData).Probabilities.Array.ArrayMax = 0x400;
  (this->EMData).ScalingFactor = 1.0;
  (this->EMData).Tolerance = 0.0001;
  (this->EMData).PreviousLogLikelihood = 1.7976931348623157e+308;
  (this->EMData).NormalizedPointLocations.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EMData).NormalizedPointLocations.ArrayNum = 0;
  (this->EMData).NormalizedPointLocations.ArrayMax = 0;
  (this->EMData).LogLikelihoodSum = (atomic<double>)0x0;
  return this;
}

// ~FClusteringData @ 149ad28a0

void __thiscall PCGClusterElement::FClusteringData::~FClusteringData(FClusteringData *this)

{
  FScriptContainerElement *pFVar1;
  ForElementType<double> FVar2;
  ForElementType<PCGClusterElement::FClusteringData::FExpectationMaximizationData::FGaussian> FVar3;
  ForElementType<UE::Math::TVector<double>_> FVar4;
  IPCGAttributeAccessorKeys *pIVar5;
  IPCGAttributeAccessor *pIVar6;
  
  pFVar1 = (this->EMData).NormalizedPointLocations.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FVar2 = (this->EMData).Probabilities.Array.AllocatorInstance.SecondaryData;
  if (FVar2 != (ForElementType<double>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  FVar3 = (this->EMData).Gaussians.AllocatorInstance.SecondaryData;
  if (FVar3 != (ForElementType<PCGClusterElement::FClusteringData::FExpectationMaximizationData::FGaussian>
                )0x0) {
    FMemory::Free((void *)FVar3);
  }
  pFVar1 = (this->PointToClusterAssignments).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FVar4 = (this->Centroids).AllocatorInstance.SecondaryData;
  if (FVar4 != (ForElementType<UE::Math::TVector<double>_>)0x0) {
    FMemory::Free((void *)FVar4);
  }
  pIVar5 = (this->Keys).Ptr;
  if (pIVar5 != (IPCGAttributeAccessorKeys *)0x0) {
    (**(code **)pIVar5->_padding_)(pIVar5,1);
  }
  pIVar6 = (this->Accessor).Ptr;
  if (pIVar6 != (IPCGAttributeAccessor *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000149ad2927. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pIVar6->_padding_)(pIVar6,1);
    return;
  }
  return;
}

