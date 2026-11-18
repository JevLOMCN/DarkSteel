// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NavigationSystem
// Functions: 2

// FPathFindingQueryData @ 146d751b0

FPathFindingQueryData * __thiscall
FPathFindingQueryData::FPathFindingQueryData
          (FPathFindingQueryData *this,FPathFindingQueryData *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  double dVar2;
  uint uVar3;
  
  (this->Owner).WeakPtr = (param_1->Owner).WeakPtr;
  dVar2 = (param_1->StartLocation).field0_0x0._s_0.Y;
  (this->StartLocation).field0_0x0._s_0.X = (param_1->StartLocation).field0_0x0._s_0.X;
  (this->StartLocation).field0_0x0._s_0.Y = dVar2;
  (this->StartLocation).field0_0x0._s_0.Z = (param_1->StartLocation).field0_0x0._s_0.Z;
  dVar2 = (param_1->EndLocation).field0_0x0._s_0.Y;
  (this->EndLocation).field0_0x0._s_0.X = (param_1->EndLocation).field0_0x0._s_0.X;
  (this->EndLocation).field0_0x0._s_0.Y = dVar2;
  (this->EndLocation).field0_0x0._s_0.Z = (param_1->EndLocation).field0_0x0._s_0.Z;
  (this->QueryFilter).Object = (param_1->QueryFilter).Object;
  pTVar1 = (param_1->QueryFilter).SharedReferenceCount.ReferenceController;
  (this->QueryFilter).SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  this->CostLimit = param_1->CostLimit;
  this->NavDataFlags = param_1->NavDataFlags;
  uVar3 = (this->bAllowPartialPaths ^ param_1->bAllowPartialPaths) & 1 ^ *(uint *)&this->field_0x54;
  *(uint *)&this->field_0x54 = uVar3;
  *(uint *)&this->field_0x54 = (uVar3 ^ *(uint *)&param_1->field_0x54) & 2 ^ uVar3;
  return this;
}

// operator= @ 146ddb000

FPathFindingQueryData * __thiscall
FPathFindingQueryData::operator=(FPathFindingQueryData *this,FPathFindingQueryData *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FNavigationQueryFilter *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  double dVar4;
  uint uVar5;
  
  (this->Owner).WeakPtr = (param_1->Owner).WeakPtr;
  dVar4 = (param_1->StartLocation).field0_0x0._s_0.Y;
  (this->StartLocation).field0_0x0._s_0.X = (param_1->StartLocation).field0_0x0._s_0.X;
  (this->StartLocation).field0_0x0._s_0.Y = dVar4;
  (this->StartLocation).field0_0x0._s_0.Z = (param_1->StartLocation).field0_0x0._s_0.Z;
  dVar4 = (param_1->EndLocation).field0_0x0._s_0.Y;
  (this->EndLocation).field0_0x0._s_0.X = (param_1->EndLocation).field0_0x0._s_0.X;
  (this->EndLocation).field0_0x0._s_0.Y = dVar4;
  (this->EndLocation).field0_0x0._s_0.Z = (param_1->EndLocation).field0_0x0._s_0.Z;
  pTVar1 = (param_1->QueryFilter).SharedReferenceCount.ReferenceController;
  pFVar2 = (param_1->QueryFilter).Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = (this->QueryFilter).SharedReferenceCount.ReferenceController;
  (this->QueryFilter).Object = pFVar2;
  (this->QueryFilter).SharedReferenceCount.ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  this->CostLimit = param_1->CostLimit;
  this->NavDataFlags = param_1->NavDataFlags;
  uVar5 = (this->bAllowPartialPaths ^ param_1->bAllowPartialPaths) & 1 ^ *(uint *)&this->field_0x54;
  *(uint *)&this->field_0x54 = uVar5;
  *(uint *)&this->field_0x54 = (uVar5 ^ *(uint *)&param_1->field_0x54) & 2 ^ uVar5;
  return this;
}

