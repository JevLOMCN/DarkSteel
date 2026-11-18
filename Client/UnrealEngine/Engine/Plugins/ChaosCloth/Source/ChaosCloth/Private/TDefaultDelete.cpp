// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosCloth
// Functions: 4

// operator() @ 14dbb0850

void __thiscall
TDefaultDelete<Chaos::FClothingSimulationCloth::FLODData>::operator()
          (TDefaultDelete<Chaos::FClothingSimulationCloth::FLODData> *this,FLODData *param_1)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  if (param_1 != (FLODData *)0x0) {
    *(undefined4 *)&(param_1->SolverData).field_0x48 = 0;
    pvVar1 = *(void **)&(param_1->SolverData).field_0x40;
    if (pvVar1 != (void *)0x0) {
      FMemory::Free(pvVar1);
    }
    TSparseArray<TSparseSetElement<TTuple<Chaos::FClothingSimulationSolver_*,Chaos::FClothingSimulationCloth::FLODData::FSolverData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<Chaos::FClothingSimulationSolver_*,Chaos::FClothingSimulationCloth::FLODData::FSolverData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<Chaos::FClothingSimulationSolver_*,Chaos::FClothingSimulationCloth::FLODData::FSolverData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&param_1->SolverData);
    Chaos::FTriangleMesh::~FTriangleMesh(&param_1->NoOffsetTriangleMesh);
    pFVar2 = (param_1->PatternData).WeldedFaceVertexPatternPositions.AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    Chaos::FTriangleMesh::~FTriangleMesh(&(param_1->PatternData).PatternTriangleMesh);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->ManagedArrayCollection).SharedReferenceCount.ReferenceController);
    pFVar2 = (param_1->Tethers).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    *(undefined4 *)&(param_1->FaceIntMaps).field_0x48 = 0;
    pvVar1 = *(void **)&(param_1->FaceIntMaps).field_0x40;
    if (pvVar1 != (void *)0x0) {
      FMemory::Free(pvVar1);
    }
    TSparseArray<TSparseSetElement<TTuple<FString,TArrayView<int_const_,int>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FString,TArrayView<int_const_,int>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FString,TArrayView<int_const_,int>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&param_1->FaceIntMaps);
    *(undefined4 *)&(param_1->FaceSets).field_0x48 = 0;
    pvVar1 = *(void **)&(param_1->FaceSets).field_0x40;
    if (pvVar1 != (void *)0x0) {
      FMemory::Free(pvVar1);
    }
    TSparseArray<TSparseSetElement<TTuple<FString,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FString,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FString,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&param_1->FaceSets);
    *(undefined4 *)&(param_1->VertexSets).field_0x48 = 0;
    pvVar1 = *(void **)&(param_1->VertexSets).field_0x40;
    if (pvVar1 != (void *)0x0) {
      FMemory::Free(pvVar1);
    }
    TSparseArray<TSparseSetElement<TTuple<FString,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FString,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FString,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&param_1->VertexSets);
    *(undefined4 *)&(param_1->WeightMaps).field_0x48 = 0;
    pvVar1 = *(void **)&(param_1->WeightMaps).field_0x40;
    if (pvVar1 != (void *)0x0) {
      FMemory::Free(pvVar1);
    }
    TSparseArray<TSparseSetElement<TTuple<FString,TArrayView<float_const_,int>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FString,TArrayView<float_const_,int>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FString,TArrayView<float_const_,int>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&param_1->WeightMaps);
    ::operator_delete(param_1,0x490);
  }
  return;
}

// operator() @ 14dbb0980

void __thiscall
TDefaultDelete<Chaos::FClothConstraints>::operator()
          (TDefaultDelete<Chaos::FClothConstraints> *this,FClothConstraints *param_1)

{
  if (param_1 != (FClothConstraints *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->RepulsionConstraints).SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->ClothFaceSpringConstraints).SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->ClothVertexFaceSpringConstraints).SharedReferenceCount.ReferenceController)
    ;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->ClothVertexSpringConstraints).SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->SkinnedTriangleCollisionsConstraint).SharedReferenceCount.
               ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->CollisionConstraint).SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->ExternalForces).SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->VelocityAndPressureField).SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->ExtremeDeformationConstraints).SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->MultiResConstraints).SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->GSCorotatedCodimensionalConstraint).SharedReferenceCount.
               ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->GSMainConstraint).SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->SelfCollisionSphereConstraints).SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->SelfIntersectionConstraints).SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->SelfCollisionConstraints).SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->SelfCollisionInit).SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->AnimDriveConstraints).SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->BackstopConstraints).SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->MaximumDistanceConstraints).SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->LongRangeConstraints).SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->XAreaConstraints).SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->AreaConstraints).SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->XAnisoBendingElementConstraints).SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->XBendingElementConstraints).SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->BendingElementConstraints).SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->XBendingConstraints).SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->BendingConstraints).SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->XAnisoSpringConstraints).SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->XStretchBiasConstraints).SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->XEdgeConstraints).SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->EdgeConstraints).SharedReferenceCount.ReferenceController);
    ::operator_delete(param_1,0x2a8);
  }
  return;
}

// operator() @ 14dbb0b10

void __thiscall
TDefaultDelete<Chaos::FClothingSimulationCloth>::operator()
          (TDefaultDelete<Chaos::FClothingSimulationCloth> *this,FClothingSimulationCloth *param_1)

{
  FClothingSimulationConfig *pFVar1;
  FScriptContainerElement *pFVar2;
  void *pvVar3;
  
  if (param_1 != (FClothingSimulationCloth *)0x0) {
    if (((param_1->PropertyCollection).Object != (FManagedArrayCollection *)0x0) &&
       (pFVar1 = param_1->Config, pFVar1 != (FClothingSimulationConfig *)0x0)) {
      DestructItems<TUniquePtr<Chaos::Softs::FCollectionPropertyMutableFacade,TDefaultDelete<Chaos::Softs::FCollectionPropertyMutableFacade>_>,int>
                ((TUniquePtr<Chaos::Softs::FCollectionPropertyMutableFacade,TDefaultDelete<Chaos::Softs::FCollectionPropertyMutableFacade>_>
                  *)(pFVar1->Properties).AllocatorInstance.Data,(pFVar1->Properties).ArrayNum);
      pFVar2 = (pFVar1->Properties).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      DestructItems<TSharedPtr<FManagedArrayCollection,1>,int>
                ((TSharedPtr<FManagedArrayCollection,1> *)
                 (pFVar1->PropertyCollections).AllocatorInstance.Data,
                 (pFVar1->PropertyCollections).ArrayNum);
      pFVar2 = (pFVar1->PropertyCollections).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      ::operator_delete(pFVar1,0x28);
    }
    *(undefined4 *)&(param_1->LODIndices).field_0x48 = 0;
    pvVar3 = *(void **)&(param_1->LODIndices).field_0x40;
    if (pvVar3 != (void *)0x0) {
      FMemory::Free(pvVar3);
    }
    TSparseArray<TSparseSetElement<TTuple<Chaos::FClothingSimulationSolver_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<Chaos::FClothingSimulationSolver_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<Chaos::FClothingSimulationSolver_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&param_1->LODIndices);
    DestructItems<TUniquePtr<Chaos::FClothingSimulationCloth::FLODData,TDefaultDelete<Chaos::FClothingSimulationCloth::FLODData>_>,int>
              ((TUniquePtr<Chaos::FClothingSimulationCloth::FLODData,TDefaultDelete<Chaos::FClothingSimulationCloth::FLODData>_>
                *)(param_1->LODData).AllocatorInstance.Data,(param_1->LODData).ArrayNum);
    pFVar2 = (param_1->LODData).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    pFVar2 = (param_1->ResetRestLengthsMorphTargetName).Data.AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->PropertyCollection).SharedReferenceCount.ReferenceController);
    pFVar2 = (param_1->Colliders).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    ::operator_delete(param_1,0x160);
  }
  return;
}

// operator() @ 14dbb0c10

void __thiscall
TDefaultDelete<Chaos::ClothingSimulationConsole::FCommand>::operator()
          (TDefaultDelete<Chaos::ClothingSimulationConsole::FCommand> *this,FCommand *param_1)

{
  int iVar1;
  undefined8 uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res10 [8];
  
  if (param_1 != (FCommand *)0x0) {
    pFVar6 = (param_1->ConsoleObjects).AllocatorInstance.Data;
    iVar1 = (param_1->ConsoleObjects).ArrayNum;
    pFVar3 = pFVar6 + (longlong)iVar1 * 8;
    while( true ) {
      if ((param_1->ConsoleObjects).ArrayNum != iVar1) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<IConsoleObject_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res10);
      }
      if (pFVar6 == pFVar3) break;
      uVar2 = *(undefined8 *)pFVar6;
      if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
        IConsoleManager::SetupSingleton();
        if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Singleton != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                             ,0x4fb,L"");
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
      }
      (**(code **)((longlong)*IConsoleManager::Singleton + 0xb8))
                (IConsoleManager::Singleton,uVar2,1);
      pFVar6 = pFVar6 + 8;
    }
    pFVar3 = (param_1->ConsoleObjects).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    ::operator_delete(param_1,0x20);
  }
  return;
}

