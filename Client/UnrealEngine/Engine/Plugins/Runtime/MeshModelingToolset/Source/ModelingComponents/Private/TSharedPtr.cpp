// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 5

// operator*<FKAggregateGeom> @ 14cab11b0

FKAggregateGeom * __thiscall
TSharedPtr<FKAggregateGeom,1>::operator*<FKAggregateGeom>(TSharedPtr<FKAggregateGeom,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FKAggregateGeom *pFVar3;
  
  if (this->Object != (FKAggregateGeom *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x44d,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FKAggregateGeom *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator-> @ 14cad33f0

FPhysicsDataCollection * __thiscall
TSharedPtr<FPhysicsDataCollection,1>::operator->(TSharedPtr<FPhysicsDataCollection,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FPhysicsDataCollection *pFVar3;
  
  if (this->Object != (FPhysicsDataCollection *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FPhysicsDataCollection *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator-> @ 14cb65ca0

FGeometrySelectionTarget * __thiscall
TSharedPtr<UGeometrySelectionManager::FGeometrySelectionTarget,1>::operator->
          (TSharedPtr<UGeometrySelectionManager::FGeometrySelectionTarget,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FGeometrySelectionTarget *pFVar3;
  
  if (this->Object != (FGeometrySelectionTarget *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FGeometrySelectionTarget *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator-> @ 14cb65cf0

FMeshTopologySelector * __thiscall
TSharedPtr<FMeshTopologySelector,1>::operator->(TSharedPtr<FMeshTopologySelector,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FMeshTopologySelector *pFVar3;
  
  if (this->Object != (FMeshTopologySelector *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FMeshTopologySelector *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator-> @ 14cb65d40

FSceneGeometrySpatialCache * __thiscall
TSharedPtr<UE::Geometry::FSceneGeometrySpatialCache,1>::operator->
          (TSharedPtr<UE::Geometry::FSceneGeometrySpatialCache,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FSceneGeometrySpatialCache *pFVar3;
  
  if (this->Object != (FSceneGeometrySpatialCache *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FSceneGeometrySpatialCache *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

