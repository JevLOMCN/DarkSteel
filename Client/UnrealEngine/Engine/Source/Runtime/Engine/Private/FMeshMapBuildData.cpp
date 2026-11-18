// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// FMeshMapBuildData @ 147ea6190

FMeshMapBuildData * __thiscall
FMeshMapBuildData::FMeshMapBuildData(FMeshMapBuildData *this,FMeshMapBuildData *param_1)

{
  TArray<FGuid,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  TArray<FPerInstanceLightmapData,TSizedDefaultAllocator<32>_> *pTVar3;
  int iVar4;
  FLightMap *pFVar5;
  FShadowMap *pFVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  bool bVar9;
  FMeshMapBuildData *pFVar10;
  
  (this->LightMap).Reference = (FLightMap *)0x0;
  pFVar5 = (param_1->LightMap).Reference;
  (this->LightMap).Reference = pFVar5;
  if (pFVar5 != (FLightMap *)0x0) {
    bVar9 = IsInGameThread();
    if (!bVar9) {
      bVar9 = (*IsInAsyncLoadingThread)();
      if (!bVar9) {
        bVar9 = IsInParallelLoadingThread();
        if (!bVar9) {
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsInGameThread() || IsInAsyncLoadingThread() || IsInParallelLoadingThread()"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\LightMap.h"
                             ,0x5b,L"");
          if (bVar9) {
            pcVar8 = (code *)swi(3);
            pFVar10 = (FMeshMapBuildData *)(*pcVar8)();
            return pFVar10;
          }
        }
      }
    }
    pFVar5->NumRefs = pFVar5->NumRefs + 1;
  }
  (this->ShadowMap).Reference = (FShadowMap *)0x0;
  pFVar6 = (param_1->ShadowMap).Reference;
  (this->ShadowMap).Reference = pFVar6;
  if (pFVar6 != (FShadowMap *)0x0) {
    bVar9 = IsInGameThread();
    if (!bVar9) {
      bVar9 = (*IsInAsyncLoadingThread)();
      if (!bVar9) {
        bVar9 = IsInParallelLoadingThread();
        if (!bVar9) {
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsInGameThread() || IsInAsyncLoadingThread() || IsInParallelLoadingThread()"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\ShadowMap.h"
                             ,0x113,L"");
          if (bVar9) {
            pcVar8 = (code *)swi(3);
            pFVar10 = (FMeshMapBuildData *)(*pcVar8)();
            return pFVar10;
          }
        }
      }
    }
    pFVar6->NumRefs = pFVar6->NumRefs + 1;
  }
  pTVar1 = &this->IrrelevantLights;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->IrrelevantLights).ArrayMax;
  iVar4 = (param_1->IrrelevantLights).ArrayNum;
  pFVar7 = (param_1->IrrelevantLights).AllocatorInstance.Data;
  (this->IrrelevantLights).ArrayNum = iVar4;
  if (iVar4 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,iVar4,0,&pTVar1->AllocatorInstance,iVar4,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,pFVar7,(longlong)iVar4 << 4);
  }
  pTVar3 = &this->PerInstanceLightmapData;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->PerInstanceLightmapData).ArrayMax;
  iVar4 = (param_1->PerInstanceLightmapData).ArrayNum;
  pFVar7 = (param_1->PerInstanceLightmapData).AllocatorInstance.Data;
  (this->PerInstanceLightmapData).ArrayNum = iVar4;
  if (iVar4 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,iVar4,0,&pTVar3->AllocatorInstance,iVar4,piVar2);
    memcpy((pTVar3->AllocatorInstance).Data,pFVar7,(longlong)iVar4 << 4);
  }
  this->ResourceCluster = param_1->ResourceCluster;
  return this;
}

// FMeshMapBuildData @ 147ea6330

FMeshMapBuildData * __thiscall FMeshMapBuildData::FMeshMapBuildData(FMeshMapBuildData *this)

{
  (this->LightMap).Reference = (FLightMap *)0x0;
  (this->ShadowMap).Reference = (FShadowMap *)0x0;
  (this->IrrelevantLights).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->IrrelevantLights).ArrayNum = 0;
  (this->IrrelevantLights).ArrayMax = 0;
  (this->PerInstanceLightmapData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PerInstanceLightmapData).ArrayNum = 0;
  (this->PerInstanceLightmapData).ArrayMax = 0;
  this->ResourceCluster = (FLightmapResourceCluster *)0x0;
  return this;
}

// ~FMeshMapBuildData @ 147ea91a0

void __thiscall FMeshMapBuildData::~FMeshMapBuildData(FMeshMapBuildData *this)

{
  FScriptContainerElement *pFVar1;
  FShadowMap *this_00;
  FLightMap *this_01;
  
  pFVar1 = (this->PerInstanceLightmapData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->IrrelevantLights).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this_00 = (this->ShadowMap).Reference;
  if (this_00 != (FShadowMap *)0x0) {
    FShadowMap::Release(this_00);
  }
  this_01 = (this->LightMap).Reference;
  if (this_01 != (FLightMap *)0x0) {
    FLightMap::Release(this_01);
    return;
  }
  return;
}

// AddReferencedObjects @ 147eae970

void __thiscall
FMeshMapBuildData::AddReferencedObjects(FMeshMapBuildData *this,FReferenceCollector *param_1)

{
  FLightMap *pFVar1;
  FShadowMap *pFVar2;
  
  pFVar1 = (this->LightMap).Reference;
  if (pFVar1 != (FLightMap *)0x0) {
    (**(code **)(pFVar1->_padding_ + 8))();
  }
  pFVar2 = (this->ShadowMap).Reference;
  if (pFVar2 != (FShadowMap *)0x0) {
    (**(code **)(pFVar2->_padding_ + 8))(pFVar2,param_1);
  }
  return;
}

