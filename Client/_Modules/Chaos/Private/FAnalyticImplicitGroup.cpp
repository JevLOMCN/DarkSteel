// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 1

// ~FAnalyticImplicitGroup @ 1440cd230

void __thiscall FAnalyticImplicitGroup::~FAnalyticImplicitGroup(FAnalyticImplicitGroup *this)

{
  int iVar1;
  FImplicitObject *pFVar2;
  undefined8 *puVar3;
  FLevelSet *this_00;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  
  pFVar5 = (this->Spheres).AllocatorInstance.Data;
  iVar1 = (this->Spheres).ArrayNum;
  pFVar4 = pFVar5 + (longlong)iVar1 * 8;
  while( true ) {
    if ((this->Spheres).ArrayNum != iVar1) {
      `TCheckedPointerIterator<Chaos::TSphere<double,3>_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar5 == pFVar4) break;
    pFVar2 = *(FImplicitObject **)pFVar5;
    if (pFVar2 != (FImplicitObject *)0x0) {
      pFVar2->_padding_ = (longlong)&___7__TSphere_N_02_Chaos__6B_;
      Chaos::FImplicitObject::~FImplicitObject(pFVar2);
      ::operator_delete(pFVar2,0x30);
    }
    pFVar5 = pFVar5 + 8;
  }
  pFVar5 = (this->Boxes).AllocatorInstance.Data;
  iVar1 = (this->Boxes).ArrayNum;
  pFVar4 = pFVar5 + (longlong)iVar1 * 8;
  while( true ) {
    if ((this->Boxes).ArrayNum != iVar1) {
      `TCheckedPointerIterator<Chaos::TBox<double,3>_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar5 == pFVar4) break;
    pFVar2 = *(FImplicitObject **)pFVar5;
    if (pFVar2 != (FImplicitObject *)0x0) {
      pFVar2->_padding_ = (longlong)&___7__TBox_N_02_Chaos__6B_;
      Chaos::FImplicitObject::~FImplicitObject(pFVar2);
      ::operator_delete(pFVar2,0x50);
    }
    pFVar5 = pFVar5 + 8;
  }
  pFVar5 = (this->Capsules).AllocatorInstance.Data;
  iVar1 = (this->Capsules).ArrayNum;
  pFVar4 = pFVar5 + (longlong)iVar1 * 8;
  while( true ) {
    if ((this->Capsules).ArrayNum != iVar1) {
      `TCheckedPointerIterator<Chaos::FCapsule_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar5 == pFVar4) break;
    pFVar2 = *(FImplicitObject **)pFVar5;
    if (pFVar2 != (FImplicitObject *)0x0) {
      pFVar2->_padding_ = (longlong)&___7FCapsule_Chaos__6B_;
      Chaos::FImplicitObject::~FImplicitObject(pFVar2);
      ::operator_delete(pFVar2,0x40);
    }
    pFVar5 = pFVar5 + 8;
  }
  pFVar5 = (this->TaperedCylinders).AllocatorInstance.Data;
  iVar1 = (this->TaperedCylinders).ArrayNum;
  pFVar4 = pFVar5 + (longlong)iVar1 * 8;
  while( true ) {
    if ((this->TaperedCylinders).ArrayNum != iVar1) {
      `TCheckedPointerIterator<Chaos::FTaperedCylinder_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar5 == pFVar4) break;
    puVar3 = *(undefined8 **)pFVar5;
    if (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)(puVar3,1);
    }
    pFVar5 = pFVar5 + 8;
  }
  pFVar5 = (this->ConvexHulls).AllocatorInstance.Data;
  iVar1 = (this->ConvexHulls).ArrayNum;
  pFVar4 = pFVar5 + (longlong)iVar1 * 8;
  while( true ) {
    if ((this->ConvexHulls).ArrayNum != iVar1) {
      `TCheckedPointerIterator<Chaos::FConvex_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar5 == pFVar4) break;
    pFVar2 = *(FImplicitObject **)pFVar5;
    if (pFVar2 != (FImplicitObject *)0x0) {
      Chaos::FConvexStructureData::DestroyDataContainer((FConvexStructureData *)&pFVar2[2].Type);
      if (*(void **)&pFVar2[1].Margin != (void *)0x0) {
        FMemory::Free(*(void **)&pFVar2[1].Margin);
      }
      if ((void *)pFVar2[1]._padding_ != (void *)0x0) {
        FMemory::Free((void *)pFVar2[1]._padding_);
      }
      Chaos::FImplicitObject::~FImplicitObject(pFVar2);
      ::operator_delete(pFVar2,0xb0);
    }
    pFVar5 = pFVar5 + 8;
  }
  pFVar5 = (this->LevelSets).AllocatorInstance.Data;
  iVar1 = (this->LevelSets).ArrayNum;
  pFVar4 = pFVar5 + (longlong)iVar1 * 8;
  while( true ) {
    if ((this->LevelSets).ArrayNum != iVar1) {
      `TCheckedPointerIterator<Chaos::FLevelSet_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar5 == pFVar4) break;
    this_00 = *(FLevelSet **)pFVar5;
    if (this_00 != (FLevelSet *)0x0) {
      Chaos::FLevelSet::~FLevelSet(this_00);
      ::operator_delete(this_00,0x120);
    }
    pFVar5 = pFVar5 + 8;
  }
  pFVar4 = (this->Children).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  pFVar4 = (this->Transforms).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  DestructItems<TArray<Chaos::TVector<int,3>,TSizedDefaultAllocator<32>_>,int>
            ((TArray<Chaos::TVector<int,3>,TSizedDefaultAllocator<32>_> *)
             (this->CollisionTriangles).AllocatorInstance.Data,(this->CollisionTriangles).ArrayNum);
  pFVar4 = (this->CollisionTriangles).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  DestructItems<TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_>,int>
            ((TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> *)
             (this->CollisionPoints).AllocatorInstance.Data,(this->CollisionPoints).ArrayNum);
  pFVar4 = (this->CollisionPoints).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  pFVar4 = (this->ContiguousCollisionPoints).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  pFVar4 = (this->LevelSets).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  pFVar4 = (this->ConvexHulls).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  pFVar4 = (this->TaperedCylinders).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  pFVar4 = (this->Capsules).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  pFVar4 = (this->Boxes).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  pFVar4 = (this->Spheres).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  return;
}

