// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 1

// FNiagaraCollisionTrace @ 1490220b0

FNiagaraCollisionTrace * __thiscall
FNiagaraCollisionTrace::FNiagaraCollisionTrace
          (FNiagaraCollisionTrace *this,TVector<double> *param_1,TVector<double> *param_2,
          ECollisionChannel param_3,FCollisionQueryParams *param_4)

{
  TArray<unsigned_int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *pTVar1;
  int *piVar2;
  TArray<unsigned_int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *pTVar3;
  int iVar4;
  double dVar5;
  ForElementType<unsigned_int> FVar6;
  ForElementType<unsigned_int> FVar7;
  
  pTVar1 = &(this->CollisionQueryParams).IgnoreComponents;
  (this->CollisionTraceHandle).field0_0x0._Handle = 0;
  (this->CollisionTraceHandle).bTransactional = false;
  this->HitIndex = -1;
  (this->CollisionQueryParams).TraceTag = param_4->TraceTag;
  (this->CollisionQueryParams).OwnerTag = param_4->OwnerTag;
  (this->CollisionQueryParams).bTraceComplex = param_4->bTraceComplex;
  (this->CollisionQueryParams).bFindInitialOverlaps = param_4->bFindInitialOverlaps;
  (this->CollisionQueryParams).bReturnFaceIndex = param_4->bReturnFaceIndex;
  (this->CollisionQueryParams).bReturnPhysicalMaterial = param_4->bReturnPhysicalMaterial;
  (this->CollisionQueryParams).bIgnoreBlocks = param_4->bIgnoreBlocks;
  (this->CollisionQueryParams).bIgnoreTouches = param_4->bIgnoreTouches;
  (this->CollisionQueryParams).bSkipNarrowPhase = param_4->bSkipNarrowPhase;
  (this->CollisionQueryParams).bTraceIntoSubComponents = param_4->bTraceIntoSubComponents;
  (this->CollisionQueryParams).bReplaceHitWithSubComponents = param_4->bReplaceHitWithSubComponents;
  (this->CollisionQueryParams).MobilityType = param_4->MobilityType;
  (this->CollisionQueryParams).IgnoreMask = param_4->IgnoreMask;
  (this->CollisionQueryParams).StatId.StatIdPtr = (param_4->StatId).StatIdPtr;
  (this->CollisionQueryParams).bDebugQuery = param_4->bDebugQuery;
  (this->CollisionQueryParams).bComponentListUnique = param_4->bComponentListUnique;
  (this->CollisionQueryParams).IgnoreComponents.AllocatorInstance.SecondaryData =
       (ForElementType<unsigned_int>)0x0;
  FVar7 = (param_4->IgnoreComponents).AllocatorInstance.SecondaryData;
  iVar4 = (param_4->IgnoreComponents).ArrayNum;
  (this->CollisionQueryParams).IgnoreComponents.ArrayNum = iVar4;
  if (FVar7 == (ForElementType<unsigned_int>)0x0) {
    FVar7 = (ForElementType<unsigned_int>)&param_4->IgnoreComponents;
  }
  piVar2 = &(this->CollisionQueryParams).IgnoreComponents.ArrayMax;
  if (iVar4 == 0) {
    *piVar2 = 8;
  }
  else {
    UE::Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
              (4,4,iVar4,0,&pTVar1->AllocatorInstance,iVar4,piVar2);
    FVar6 = (this->CollisionQueryParams).IgnoreComponents.AllocatorInstance.SecondaryData;
    if (FVar6 == (ForElementType<unsigned_int>)0x0) {
      FVar6 = (ForElementType<unsigned_int>)pTVar1;
    }
    memcpy((void *)FVar6,(void *)FVar7,(longlong)iVar4 << 2);
  }
  pTVar3 = &(this->CollisionQueryParams).IgnoreSourceObjects;
  (this->CollisionQueryParams).IgnoreSourceObjects.AllocatorInstance.SecondaryData =
       (ForElementType<unsigned_int>)0x0;
  FVar7 = (param_4->IgnoreSourceObjects).AllocatorInstance.SecondaryData;
  iVar4 = (param_4->IgnoreSourceObjects).ArrayNum;
  (this->CollisionQueryParams).IgnoreSourceObjects.ArrayNum = iVar4;
  if (FVar7 == (ForElementType<unsigned_int>)0x0) {
    FVar7 = (ForElementType<unsigned_int>)&param_4->IgnoreSourceObjects;
  }
  piVar2 = &(this->CollisionQueryParams).IgnoreSourceObjects.ArrayMax;
  if (iVar4 == 0) {
    *piVar2 = 4;
  }
  else {
    UE::Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
              (4,4,iVar4,0,&pTVar3->AllocatorInstance,iVar4,piVar2);
    FVar6 = (this->CollisionQueryParams).IgnoreSourceObjects.AllocatorInstance.SecondaryData;
    if (FVar6 == (ForElementType<unsigned_int>)0x0) {
      FVar6 = (ForElementType<unsigned_int>)pTVar3;
    }
    memcpy((void *)FVar6,(void *)FVar7,(longlong)iVar4 << 2);
  }
  dVar5 = (param_1->field0_0x0)._s_0.Y;
  (this->StartPos).field0_0x0._s_0.X = (param_1->field0_0x0)._s_0.X;
  (this->StartPos).field0_0x0._s_0.Y = dVar5;
  (this->StartPos).field0_0x0._s_0.Z = (param_1->field0_0x0)._s_0.Z;
  dVar5 = (param_2->field0_0x0)._s_0.Y;
  (this->EndPos).field0_0x0._s_0.X = (param_2->field0_0x0)._s_0.X;
  (this->EndPos).field0_0x0._s_0.Y = dVar5;
  (this->EndPos).field0_0x0._s_0.Z = (param_2->field0_0x0)._s_0.Z;
  this->Channel = param_3;
  return this;
}

