// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NavigationSystem
// Functions: 12

// DestroyObject @ 146d90980

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FAbstractNavigationPath,SharedPointerInternals::DefaultDeleter<FAbstractNavigationPath>,1>
::DestroyObject(TReferenceControllerWithDeleter<FAbstractNavigationPath,SharedPointerInternals::DefaultDeleter<FAbstractNavigationPath>,1>
                *this)

{
  FAbstractNavigationPath *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FAbstractNavigationPath *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146d90991. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined8 **)pFVar1)(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 146d909a0

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FNavigationQueryFilter,SharedPointerInternals::DefaultDeleter<FNavigationQueryFilter>,1>
::DestroyObject(TReferenceControllerWithDeleter<FNavigationQueryFilter,SharedPointerInternals::DefaultDeleter<FNavigationQueryFilter>,1>
                *this)

{
  int *piVar1;
  int iVar2;
  FNavigationQueryFilter *pFVar3;
  longlong *plVar4;
  
  pFVar3 = this->Object;
  if (pFVar3 != (FNavigationQueryFilter *)0x0) {
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((pFVar3->QueryFilterImpl).SharedReferenceCount.ReferenceController);
    plVar4 = (longlong *)pFVar3->_padding_;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
    ::operator_delete(pFVar3,0x28);
    return;
  }
  return;
}

// DestroyObject @ 146d90a00

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FAbstractQueryFilter,SharedPointerInternals::DefaultDeleter<FAbstractQueryFilter>,1>
::DestroyObject(TReferenceControllerWithDeleter<FAbstractQueryFilter,SharedPointerInternals::DefaultDeleter<FAbstractQueryFilter>,1>
                *this)

{
  FAbstractQueryFilter *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FAbstractQueryFilter *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146d90a11. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*pFVar1)(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 146d90a20

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FNavGraphGenerator,SharedPointerInternals::DefaultDeleter<FNavGraphGenerator>,1>
::DestroyObject(TReferenceControllerWithDeleter<FNavGraphGenerator,SharedPointerInternals::DefaultDeleter<FNavGraphGenerator>,1>
                *this)

{
  FNavGraphGenerator *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FNavGraphGenerator *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146d90a31. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pFVar1->_padding_)(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 146d90a40

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FNavigationOctree,SharedPointerInternals::DefaultDeleter<FNavigationOctree>,1>
::DestroyObject(TReferenceControllerWithDeleter<FNavigationOctree,SharedPointerInternals::DefaultDeleter<FNavigationOctree>,1>
                *this)

{
  FNavigationOctree *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FNavigationOctree *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146d90a51. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pFVar1->_padding_)(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 146d90a60

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<INavigationQueryFilterInterface,SharedPointerInternals::DefaultDeleter<INavigationQueryFilterInterface>,1>
::DestroyObject(TReferenceControllerWithDeleter<INavigationQueryFilterInterface,SharedPointerInternals::DefaultDeleter<INavigationQueryFilterInterface>,1>
                *this)

{
  INavigationQueryFilterInterface *pIVar1;
  
  pIVar1 = this->Object;
  if (pIVar1 != (INavigationQueryFilterInterface *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146d90a71. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*pIVar1)(pIVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 146de9da0

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FNavMeshTileData::FNavData,SharedPointerInternals::DefaultDeleter<FNavMeshTileData::FNavData>,1>
::DestroyObject(TReferenceControllerWithDeleter<FNavMeshTileData::FNavData,SharedPointerInternals::DefaultDeleter<FNavMeshTileData::FNavData>,1>
                *this)

{
  FNavData *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FNavData *)0x0) {
    dtFree(pFVar1->RawNavData,DT_ALLOC_PERM_TILE_DATA);
    ::operator_delete(pFVar1,0x10);
    return;
  }
  return;
}

// DestroyObject @ 146de9de0

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FNavMeshPath,SharedPointerInternals::DefaultDeleter<FNavMeshPath>,1>
::DestroyObject(TReferenceControllerWithDeleter<FNavMeshPath,SharedPointerInternals::DefaultDeleter<FNavMeshPath>,1>
                *this)

{
  FNavMeshPath *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FNavMeshPath *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146de9df1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pFVar1->_padding_)(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 146de9e00

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FNavDataGenerator,SharedPointerInternals::DefaultDeleter<FNavDataGenerator>,1>
::DestroyObject(TReferenceControllerWithDeleter<FNavDataGenerator,SharedPointerInternals::DefaultDeleter<FNavDataGenerator>,1>
                *this)

{
  FNavDataGenerator *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FNavDataGenerator *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146de9e11. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined8 **)pFVar1)(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 146de9e20

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FRecastQueryFilter,SharedPointerInternals::DefaultDeleter<FRecastQueryFilter>,1>
::DestroyObject(TReferenceControllerWithDeleter<FRecastQueryFilter,SharedPointerInternals::DefaultDeleter<FRecastQueryFilter>,1>
                *this)

{
  FRecastQueryFilter *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FRecastQueryFilter *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146de9e31. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined8 **)pFVar1)(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 146e46e70

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FRecastTileData::FRawData,SharedPointerInternals::DefaultDeleter<FRecastTileData::FRawData>,1>
::DestroyObject(TReferenceControllerWithDeleter<FRecastTileData::FRawData,SharedPointerInternals::DefaultDeleter<FRecastTileData::FRawData>,1>
                *this)

{
  FRawData *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FRawData *)0x0) {
    dtFree(pFVar1->RawData,DT_ALLOC_PERM_TILE_DATA);
    ::operator_delete(pFVar1,8);
    return;
  }
  return;
}

// DestroyObject @ 146e46eb0

/* WARNING: Enum "ERasterizeGeomTimeSlicedState": Some values do not have unique names */
/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FRecastTileGenerator,SharedPointerInternals::DefaultDeleter<FRecastTileGenerator>,1>
::DestroyObject(TReferenceControllerWithDeleter<FRecastTileGenerator,SharedPointerInternals::DefaultDeleter<FRecastTileGenerator>,1>
                *this)

{
  FRecastTileGenerator *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FRecastTileGenerator *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146e46ec1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pFVar1->_padding_)(pFVar1,1);
    return;
  }
  return;
}

