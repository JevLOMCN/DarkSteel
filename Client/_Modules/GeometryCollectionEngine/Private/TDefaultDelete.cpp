// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionEngine
// Functions: 1

// operator() @ 1463a7950

void __thiscall
TDefaultDelete<FGeometryCollectionRenderData>::operator()
          (TDefaultDelete<FGeometryCollectionRenderData> *this,
          FGeometryCollectionRenderData *param_1)

{
  FResources *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  
  if (param_1 != (FGeometryCollectionRenderData *)0x0) {
    if (param_1->bIsInitialized != false) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!bIsInitialized",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\GeometryCollectionEngine\\Private\\GeometryCollection\\GeometryCollectionRenderData.cpp"
                         ,0x2c5,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pFVar1 = (param_1->NaniteResourcesPtr).Ptr;
    if (pFVar1 != (FResources *)0x0) {
      (**(code **)&pFVar1[-1].NumHierarchyDwords)(&pFVar1[-1].NumHierarchyDwords);
    }
    pFVar2 = (param_1->MeshDescription).SubSections.AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    pFVar2 = (param_1->MeshDescription).SectionsNoInternal.AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    pFVar2 = (param_1->MeshDescription).Sections.AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    FGeometryCollectionMeshResources::~FGeometryCollectionMeshResources(&param_1->MeshResource);
    ::operator_delete(param_1,0x278);
  }
  return;
}

