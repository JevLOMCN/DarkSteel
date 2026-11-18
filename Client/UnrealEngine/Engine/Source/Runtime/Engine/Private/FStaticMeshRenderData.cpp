// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 16

// FStaticMeshRenderData @ 148711fa0

FStaticMeshRenderData * __thiscall
FStaticMeshRenderData::FStaticMeshRenderData(FStaticMeshRenderData *this)

{
  (this->LODResources).Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LODResources).Array.ArrayNum = 0;
  (this->LODResources).Array.ArrayMax = 0;
  (this->LODVertexFactories).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LODVertexFactories).ArrayNum = 0;
  (this->LODVertexFactories).ArrayMax = 0;
  this->RayTracingProxy = (FStaticMeshRayTracingProxy *)0x0;
  this->RayTracingGeometryGroupHandle = -1;
  this->bLODsShareStaticLighting = false;
  this->bHasNaniteFallbackMesh = false;
  this->bReadyForStreaming = false;
  this->NumInlinedLODs = '\0';
  (this->NaniteResourcesPtr).Ptr = (FResources *)0x0;
  this->CurrentFirstLODIdx = '\0';
  this->LODBiasModifier = '\0';
  this->bIsInitialized = false;
  this->ScreenSize[0].Default = 0.0;
  this->ScreenSize[1].Default = 0.0;
  this->ScreenSize[2].Default = 0.0;
  this->ScreenSize[3].Default = 0.0;
  this->ScreenSize[4].Default = 0.0;
  this->ScreenSize[5].Default = 0.0;
  this->ScreenSize[6].Default = 0.0;
  this->ScreenSize[7].Default = 0.0;
  ClearNaniteResources(&this->NaniteResourcesPtr);
  return this;
}

// ~FStaticMeshRenderData @ 148714600

void __thiscall FStaticMeshRenderData::~FStaticMeshRenderData(FStaticMeshRenderData *this)

{
  int *piVar1;
  FStaticMeshRayTracingProxy *this_00;
  TArray<FStaticMeshVertexFactories,TSizedDefaultAllocator<32>_> *pTVar2;
  FResources *pFVar3;
  undefined8 *puVar4;
  int iVar5;
  uint uVar6;
  FScriptContainerElement *pFVar8;
  undefined8 *puVar7;
  
  iVar5 = (this->LODResources).Array.ArrayNum;
  pFVar8 = (this->LODResources).Array.AllocatorInstance.Data;
  puVar7 = (undefined8 *)0x0;
  if (0 < iVar5) {
    do {
      puVar4 = *(undefined8 **)pFVar8;
      piVar1 = (int *)(puVar4 + 1);
      LOCK();
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        if (piVar1 == (int *)0x0) {
          puVar4 = (undefined8 *)0x0;
        }
        if (puVar4 != (undefined8 *)0x0) {
          (**(code **)*puVar4)(puVar4,1);
        }
      }
      *(longlong *)pFVar8 = 0;
      uVar6 = (int)puVar7 + 1;
      puVar7 = (undefined8 *)(ulonglong)uVar6;
      iVar5 = (this->LODResources).Array.ArrayNum;
      pFVar8 = pFVar8 + 8;
    } while ((int)uVar6 < iVar5);
  }
  pFVar8 = (this->LODResources).Array.AllocatorInstance.Data;
  for (; iVar5 != 0; iVar5 = iVar5 + -1) {
    puVar7 = *(undefined8 **)pFVar8;
    if (puVar7 != (undefined8 *)0x0) {
      (**(code **)*puVar7)(puVar7,1);
    }
    pFVar8 = pFVar8 + 8;
  }
  piVar1 = &(this->LODResources).Array.ArrayMax;
  (this->LODResources).Array.ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,(ForAnyElementType *)this,0,piVar1);
  }
  this_00 = this->RayTracingProxy;
  if (this_00 != (FStaticMeshRayTracingProxy *)0x0) {
    if ((this_00->bUsingRenderingLODs == false) &&
       (pTVar2 = this_00->LODVertexFactories,
       pTVar2 != (TArray<FStaticMeshVertexFactories,TSizedDefaultAllocator<32>_> *)0x0)) {
      DestructItems<FStaticMeshVertexFactories,int>
                ((FStaticMeshVertexFactories *)(pTVar2->AllocatorInstance).Data,pTVar2->ArrayNum);
      pFVar8 = (pTVar2->AllocatorInstance).Data;
      if (pFVar8 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar8);
      }
      ::operator_delete(pTVar2,0x10);
    }
    TIndirectArray<FStaticMeshRayTracingProxyLOD,TSizedDefaultAllocator<32>_>::
    ~TIndirectArray<FStaticMeshRayTracingProxyLOD,TSizedDefaultAllocator<32>_>(&this_00->LODs);
    ::operator_delete(this_00,0x20);
  }
  pFVar3 = (this->NaniteResourcesPtr).Ptr;
  if (pFVar3 != (FResources *)0x0) {
    (**(code **)&pFVar3[-1].NumHierarchyDwords)(&pFVar3[-1].NumHierarchyDwords);
  }
  DestructItems<FStaticMeshVertexFactories,int>
            ((FStaticMeshVertexFactories *)(this->LODVertexFactories).AllocatorInstance.Data,
             (this->LODVertexFactories).ArrayNum);
  pFVar8 = (this->LODVertexFactories).AllocatorInstance.Data;
  if (pFVar8 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar8);
  }
  pFVar8 = (this->LODResources).Array.AllocatorInstance.Data;
  for (iVar5 = (this->LODResources).Array.ArrayNum; iVar5 != 0; iVar5 = iVar5 + -1) {
    puVar7 = *(undefined8 **)pFVar8;
    if (puVar7 != (undefined8 *)0x0) {
      (**(code **)*puVar7)(puVar7,1);
    }
    pFVar8 = pFVar8 + 8;
  }
  (this->LODResources).Array.ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,(ForAnyElementType *)this,0,piVar1);
  }
  pFVar8 = (this->LODResources).Array.AllocatorInstance.Data;
  if (pFVar8 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar8);
  }
  return;
}

// operator() @ 14871a720

void __thiscall
`FStaticMeshRenderData::InitResources'::__l29::<lambda_1>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  longlong *plVar1;
  FRayTracingStreamableAsset *pFVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  long64 lVar9;
  uint uVar10;
  FString local_28;
  
  plVar1 = *(longlong **)(*(longlong *)this + 0x48);
  if ((((char)plVar1[3] != '\0') && ((int)plVar1[1] != *(int *)(*(longlong *)this + 8))) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!RayTracingProxy->bUsingRenderingLODs || RayTracingLODs.Num() == LODResources.Num()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\StaticMesh.cpp"
                         ,0xaf7,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar6 = (**(code **)((longlong)*GRayTracingGeometryManager + 0x40))
                    (GRayTracingGeometryManager,(int)plVar1[1]);
  uVar10 = 0;
  *(undefined4 *)(*(longlong *)this + 0x88) = uVar6;
  iVar8 = (int)plVar1[1];
  if (0 < iVar8) {
    do {
      uVar7 = 0;
      if ((int)uVar10 < iVar8) {
        uVar7 = ~uVar10 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar2 = *(FRayTracingStreamableAsset **)(*plVar1 + (longlong)(int)uVar10 * 8);
      if (*(int *)((longlong)pFVar2[3] + 0xac) != 0) {
        *(undefined4 *)((longlong)pFVar2[1] + 0xe0) = *(undefined4 *)(*(longlong *)this + 0x88);
        lVar9 = FBulkData::GetBulkDataSize((FBulkData *)(pFVar2 + 5));
        if ((lVar9 < 1) || (iVar8 = (**(code **)*pFVar2)(pFVar2), iVar8 == 0)) {
          bVar4 = false;
          if ((int)uVar10 < (int)(uint)*(byte *)(*(longlong *)this + 0x90)) goto LAB_14871a929;
        }
        else {
          bVar4 = true;
          if ((pFVar2[0xb].field_0x4 & 1) == 0) {
            if (*(UObjectBaseUtility **)((longlong)this + 8) == (UObjectBaseUtility *)0x0) {
              ::FString::FString(&local_28,L"None");
            }
            else {
              UObjectBaseUtility::GetPathName
                        (*(UObjectBaseUtility **)((longlong)this + 8),&local_28,(UObject *)0x0);
            }
            bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("RayTracingLOD.bOwnsRayTracingGeometry",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\StaticMesh.cpp"
                               ,0xb08,
                               L"Unexpected StreamableData on \'%s\' (StreamableData is only expected when ray tracing proxy owns the geometry)."
                              );
            if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_28.Data.AllocatorInstance.Data);
            }
            if (bVar5) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
          if (((pFVar2[0xb].field_0x4 & 4) != 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("!RayTracingLOD.bBuffersInlined",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\StaticMesh.cpp"
                                 ,0xb09,
                                 L"RayTracing LOD with streamable data shouldn\'t have buffers inlined"
                                ), bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
LAB_14871a929:
          *(undefined1 *)((longlong)pFVar2[1] + 0x88) = 1;
        }
        *(char *)((longlong)pFVar2[1] + 0xe4) = (char)uVar10;
        (**(code **)(*(longlong *)pFVar2[1] + 0x18))(pFVar2[1],param_1);
        if (bVar4) {
          FRayTracingGeometryManager::SetRayTracingGeometryStreamingData
                    ((FRayTracingGeometryManager *)GRayTracingGeometryManager,
                     (FRayTracingGeometry *)pFVar2[1],pFVar2);
        }
      }
      iVar8 = (int)plVar1[1];
      uVar10 = uVar10 + 1;
    } while ((int)uVar10 < iVar8);
  }
  return;
}

// AllocateLODResources @ 148721b10

void __thiscall FStaticMeshRenderData::AllocateLODResources(FStaticMeshRenderData *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  Type TVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  FStaticMeshLODResources *this_00;
  FStaticMeshLODResources *pFVar9;
  uint uVar10;
  FLocalVertexFactory *this_01;
  FStaticMeshLODResources *local_38 [2];
  
  if (((this->LODResources).Array.ArrayNum != 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("LODResources.Num() == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\StaticMesh.cpp"
                         ,0xb52,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
  }
  piVar1 = &(this->LODResources).Array.ArrayMax;
  if ((this->LODResources).Array.ArrayMax < param_1) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,param_1,(ForAnyElementType *)this,(this->LODResources).Array.ArrayNum,piVar1);
  }
  piVar2 = &(this->LODVertexFactories).ArrayMax;
  if ((this->LODVertexFactories).ArrayMax < param_1) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x470,8,param_1,&(this->LODVertexFactories).AllocatorInstance,
               (this->LODVertexFactories).ArrayNum,piVar2);
  }
  if ((this->LODResources).Array.ArrayNum < param_1) {
    do {
      this_00 = ::operator_new(0x350);
      pFVar9 = (FStaticMeshLODResources *)0x0;
      if (this_00 != (FStaticMeshLODResources *)0x0) {
        pFVar9 = FStaticMeshLODResources::FStaticMeshLODResources(this_00,true);
      }
      pFVar3 = (this->LODResources).Array.AllocatorInstance.Data;
      local_38[0] = pFVar9;
      if (((pFVar3 <= (FScriptContainerElement *)local_38) &&
          ((FScriptContainerElement *)local_38 < pFVar3 + (longlong)*piVar1 * 8)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar7 = (this->LODResources).Array.ArrayNum;
      if (iVar7 == *piVar1) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,(ForAnyElementType *)this,piVar1);
      }
      (this->LODResources).Array.ArrayNum = iVar7 + 1;
      *(FStaticMeshLODResources **)
       ((this->LODResources).Array.AllocatorInstance.Data + (longlong)iVar7 * 8) = local_38[0];
      uVar8 = (this->LODVertexFactories).ArrayNum;
      if (uVar8 == *piVar2) {
        uVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x470,8,&(this->LODVertexFactories).AllocatorInstance,piVar2);
      }
      (this->LODVertexFactories).ArrayNum = uVar8 + 1;
      uVar10 = 0;
      if ((int)uVar8 < (int)(uVar8 + 1)) {
        uVar10 = ~uVar8 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      TVar5 = GMaxRHIFeatureLevel;
      this_01 = (FLocalVertexFactory *)
                ((this->LODVertexFactories).AllocatorInstance.Data + (longlong)(int)uVar8 * 0x470);
      if (this_01 != (FLocalVertexFactory *)0x0) {
        FLocalVertexFactory::FLocalVertexFactory
                  (this_01,GMaxRHIFeatureLevel,"FStaticMeshVertexFactories");
        FLocalVertexFactory::FLocalVertexFactory
                  (this_01 + 1,TVar5,"FStaticMeshVertexFactories_Override");
        this_01[2]._padding_ = 0;
        this_01[2]._padding_ = 0;
        if ((4 < (int)TVar5) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("InFeatureLevel < ERHIFeatureLevel::Num",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\StaticMeshResources.h"
                               ,0x28b,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
    } while ((this->LODResources).Array.ArrayNum < param_1);
  }
  return;
}

// GetCPUAccessMemoryOverhead @ 14873a1e0

ulong64 __thiscall FStaticMeshRenderData::GetCPUAccessMemoryOverhead(FStaticMeshRenderData *this)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  ulong64 uVar4;
  ulong64 uVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  
  iVar6 = (this->LODResources).Array.ArrayNum;
  uVar4 = 0;
  uVar7 = 0;
  if (0 < iVar6) {
    lVar8 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar7 < iVar6) {
        uVar3 = ~uVar7 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return uVar4;
      }
      uVar5 = FStaticMeshLODResources::GetCPUAccessMemoryOverhead
                        (*(FStaticMeshLODResources **)
                          ((this->LODResources).Array.AllocatorInstance.Data + lVar8));
      iVar6 = (this->LODResources).Array.ArrayNum;
      uVar4 = uVar4 + uVar5;
      uVar7 = uVar7 + 1;
      lVar8 = lVar8 + 8;
    } while ((int)uVar7 < iVar6);
  }
  return uVar4;
}

// GetFirstValidLODIdx @ 14873bbc0

int __thiscall FStaticMeshRenderData::GetFirstValidLODIdx(FStaticMeshRenderData *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  
  iVar4 = (this->LODResources).Array.ArrayNum;
  if (iVar4 < 1) {
    return -1;
  }
  uVar3 = iVar4 - 1U;
  if (param_1 < (int)(iVar4 - 1U)) {
    uVar3 = param_1;
  }
  uVar5 = 0;
  if (0 < (int)uVar3) {
    uVar5 = uVar3;
  }
  if ((int)uVar5 < iVar4) {
    lVar6 = (longlong)(int)uVar5;
    do {
      uVar3 = 0;
      if ((int)uVar5 < (this->LODResources).Array.ArrayNum) {
        uVar3 = ~uVar5 >> 0x1f;
      }
      if (uVar3 == 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          iVar4 = (*pcVar1)();
          return iVar4;
        }
      }
      if (*(int *)(*(longlong *)((this->LODResources).Array.AllocatorInstance.Data + lVar6 * 8) +
                  0x17c) != 0) {
        uVar3 = 0;
        if ((int)uVar5 < (this->LODResources).Array.ArrayNum) {
          uVar3 = ~uVar5 >> 0x1f;
        }
        if (uVar3 == 0) {
          bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar2) {
            pcVar1 = (code *)swi(3);
            iVar4 = (*pcVar1)();
            return iVar4;
          }
        }
        if (*(int *)(*(longlong *)((this->LODResources).Array.AllocatorInstance.Data + lVar6 * 8) +
                    0x9c) != 0) break;
      }
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 1;
    } while (lVar6 < iVar4);
    if ((int)uVar5 < iVar4) {
      return uVar5;
    }
  }
  return -1;
}

// GetNumNonOptionalLODs @ 14873ce00

/* WARNING: Type propagation algorithm not settling */

int __thiscall FStaticMeshRenderData::GetNumNonOptionalLODs(FStaticMeshRenderData *this)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  
  iVar4 = 0;
  uVar5 = (this->LODResources).Array.ArrayNum - 1;
  if (-1 < (int)uVar5) {
    lVar6 = (longlong)(int)uVar5 * 8;
    do {
      uVar3 = 0;
      if ((int)uVar5 < (this->LODResources).Array.ArrayNum) {
        uVar3 = ~uVar5 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        iVar4 = (*pcVar1)();
        return iVar4;
      }
      if ((*(byte *)(*(longlong *)((this->LODResources).Array.AllocatorInstance.Data + lVar6) + 0x94
                    ) & 0x40) != 0) break;
      iVar4 = iVar4 + 1;
      lVar6 = lVar6 + -8;
      uVar5 = uVar5 - 1;
    } while (-1 < (int)uVar5);
    if (iVar4 != 0) {
      return iVar4;
    }
  }
  if ((this->LODResources).Array.ArrayNum == 0) {
    return 0;
  }
  return 1;
}

// GetNumNonStreamingLODs @ 14873ced0

/* WARNING: Type propagation algorithm not settling */

int __thiscall FStaticMeshRenderData::GetNumNonStreamingLODs(FStaticMeshRenderData *this)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  
  iVar4 = 0;
  uVar5 = (this->LODResources).Array.ArrayNum - 1;
  if (-1 < (int)uVar5) {
    lVar6 = (longlong)(int)uVar5 * 8;
    do {
      uVar3 = 0;
      if ((int)uVar5 < (this->LODResources).Array.ArrayNum) {
        uVar3 = ~uVar5 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        iVar4 = (*pcVar1)();
        return iVar4;
      }
      if ((*(byte *)(*(longlong *)((this->LODResources).Array.AllocatorInstance.Data + lVar6) + 0x94
                    ) & 0x20) == 0) break;
      iVar4 = iVar4 + 1;
      lVar6 = lVar6 + -8;
      uVar5 = uVar5 - 1;
    } while (-1 < (int)uVar5);
    if (iVar4 != 0) {
      return iVar4;
    }
  }
  if ((this->LODResources).Array.ArrayNum == 0) {
    return 0;
  }
  return 1;
}

// GetResourceSizeEx @ 14873f1a0

void __thiscall
FStaticMeshRenderData::GetResourceSizeEx(FStaticMeshRenderData *this,FResourceSizeEx *param_1)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  longlong lVar9;
  
  FResourceSizeEx::AddDedicatedSystemMemoryBytes(param_1,0x98);
  FResourceSizeEx::AddUnknownMemoryBytes
            (param_1,((longlong)(this->LODResources).Array.ArrayNum * 0x6a +
                     (longlong)(this->LODResources).Array.ArrayMax) * 8);
  iVar6 = (this->LODResources).Array.ArrayNum;
  uVar8 = 0;
  if (0 < iVar6) {
    lVar9 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar8 < iVar6) {
        uVar5 = ~uVar8 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      lVar1 = *(longlong *)((this->LODResources).Array.AllocatorInstance.Data + lVar9);
      uVar5 = 0;
      if ((int)uVar8 < (this->LODResources).Array.ArrayNum) {
        uVar5 = ~uVar8 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FStaticMeshLODResources::GetResourceSizeEx
                (*(FStaticMeshLODResources **)
                  ((this->LODResources).Array.AllocatorInstance.Data + lVar9),param_1);
      lVar2 = *(longlong *)(lVar1 + 0x40);
      if (lVar2 != 0) {
        FResourceSizeEx::AddDedicatedSystemMemoryBytes(param_1,0x118);
        for (lVar7 = lVar2 + 0x28; lVar7 != lVar2 + 0xd0; lVar7 = lVar7 + 0x38) {
          FResourceSizeEx::AddDedicatedSystemMemoryBytes(param_1,0x38);
        }
        FResourceSizeEx::AddDedicatedSystemMemoryBytes(param_1,(longlong)*(int *)(lVar2 + 0xdc));
      }
      if (*(longlong *)(lVar1 + 0x48) != 0) {
        FResourceSizeEx::AddDedicatedSystemMemoryBytes(param_1,0x98);
      }
      iVar6 = (this->LODResources).Array.ArrayNum;
      uVar8 = uVar8 + 1;
      lVar9 = lVar9 + 8;
    } while ((int)uVar8 < iVar6);
  }
  GetNaniteResourcesSizeEx(&this->NaniteResourcesPtr,param_1);
  return;
}

// HasNaniteFallbackMesh @ 148742a30

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
FStaticMeshRenderData::HasNaniteFallbackMesh(FStaticMeshRenderData *this,EShaderPlatform param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  if (0 < (((this->NaniteResourcesPtr).Ptr)->PageStreamingStates).ArrayNum) {
    return this->bHasNaniteFallbackMesh;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("HasValidNaniteData()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\StaticMesh.cpp"
                     ,0xbc1,
                     L"Should only call HasNaniteFallbackMesh(...) if HasValidNaniteData() returns true."
                    );
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return this->bHasNaniteFallbackMesh;
}

// HasValidNaniteData @ 148742b80

bool __thiscall FStaticMeshRenderData::HasValidNaniteData(FStaticMeshRenderData *this)

{
  return 0 < (((this->NaniteResourcesPtr).Ptr)->PageStreamingStates).ArrayNum;
}

// InitResources @ 148747e10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FStaticMeshRenderData::InitResources(FStaticMeshRenderData *this,Type param_1,UStaticMesh *param_2)

{
  FScriptContainerElement *pFVar1;
  FStaticMeshRayTracingProxy *pFVar2;
  TArray<FStaticMeshVertexFactories,TSizedDefaultAllocator<32>_> *pTVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  FRenderCommandList *pFVar7;
  FCommandList *pFVar8;
  FRenderCommandTag *pFVar9;
  wchar_t *pwVar10;
  int iVar11;
  undefined ***pppuVar12;
  uint uVar13;
  ulonglong uVar14;
  uint uVar15;
  longlong lVar16;
  undefined1 auStack_178 [32];
  FScriptContainerElement *local_158;
  longlong local_150;
  UStaticMesh *local_148;
  FString local_140;
  code *local_128 [2];
  undefined **local_118;
  FStaticMeshRenderData *pFStack_110;
  UStaticMesh *local_108;
  undefined ***local_100;
  code *local_f8 [2];
  undefined **local_e8;
  FStaticMeshRenderData *pFStack_e0;
  UStaticMesh *local_d8;
  undefined ***local_d0;
  undefined1 local_c8 [16];
  undefined **local_b8;
  FStaticMeshRenderData *pFStack_b0;
  UStaticMesh *local_a8;
  undefined ***local_a0;
  byte local_98;
  undefined1 local_88 [16];
  undefined **local_78;
  FStaticMeshRenderData *pFStack_70;
  UStaticMesh *local_68;
  undefined ***local_60;
  byte local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_178;
  local_148 = param_2;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__)
     && (_Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                              _thread_safe_static_guard_0__),
        `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__
        == -1)) {
    pwVar10 = FCommandLine::Get();
    `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline =
         FParse::Param(pwVar10,L"nullrhi");
    _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                         _thread_safe_static_guard_0__);
  }
  if ((((PRIVATE_GIsRunningCommandlet != false) && (PRIVATE_GAllowCommandletRendering == false)) ||
      (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline !=
       false)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("FApp::CanEverRender() || !FPlatformProperties::RequiresCookedData()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\StaticMesh.cpp"
                         ,0xad9,
                         L"RenderData should not initialize resources in headless cooked runs"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar11 = (this->LODResources).Array.ArrayNum;
  uVar13 = 0;
  if (0 < iVar11) {
    lVar16 = 0;
    do {
      uVar15 = ~uVar13 >> 0x1f;
      uVar6 = 0;
      if ((int)uVar13 < iVar11) {
        uVar6 = uVar15;
      }
      if (uVar6 == 0) {
        local_150 = (longlong)iVar11;
        local_158 = (FScriptContainerElement *)(longlong)(int)uVar13;
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      if (*(int *)(*(longlong *)((this->LODResources).Array.AllocatorInstance.Data + lVar16) + 0x17c
                  ) != 0) {
        iVar11 = (this->LODResources).Array.ArrayNum;
        uVar6 = 0;
        if ((int)uVar13 < iVar11) {
          uVar6 = uVar15;
        }
        if (uVar6 == 0) {
          local_158 = (FScriptContainerElement *)(longlong)(int)uVar13;
          local_150 = (longlong)iVar11;
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        FStaticMeshLODResources::InitResources
                  (*(FStaticMeshLODResources **)
                    ((this->LODResources).Array.AllocatorInstance.Data + lVar16),param_2,uVar13);
        iVar11 = (this->LODVertexFactories).ArrayNum;
        uVar6 = 0;
        if ((int)uVar13 < iVar11) {
          uVar6 = uVar15;
        }
        if (uVar6 == 0) {
          local_158 = (FScriptContainerElement *)(longlong)(int)uVar13;
          local_150 = (longlong)iVar11;
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        iVar11 = (this->LODResources).Array.ArrayNum;
        pFVar1 = (this->LODVertexFactories).AllocatorInstance.Data;
        uVar6 = 0;
        if ((int)uVar13 < iVar11) {
          uVar6 = uVar15;
        }
        if ((uVar6 == 0) &&
           (local_158 = (FScriptContainerElement *)(longlong)(int)uVar13,
           local_150 = (longlong)iVar11,
           bVar5 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
           bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        FStaticMeshVertexFactories::InitResources
                  ((FStaticMeshVertexFactories *)(pFVar1 + (longlong)(int)uVar13 * 0x470),
                   (FStaticMeshVertexBuffers *)
                   (*(longlong *)((this->LODResources).Array.AllocatorInstance.Data + lVar16) + 0xd0
                   ),uVar13,param_2);
      }
      iVar11 = (this->LODResources).Array.ArrayNum;
      uVar13 = uVar13 + 1;
      lVar16 = lVar16 + 8;
    } while ((int)uVar13 < iVar11);
  }
  if (((this->NaniteResourcesPtr).Ptr == (FResources *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("NaniteResourcesPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\StaticMesh.cpp"
                         ,0xae5,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  Nanite::FResources::InitResources((this->NaniteResourcesPtr).Ptr,(UObject *)param_2);
  pFVar2 = this->RayTracingProxy;
  if (pFVar2 != (FStaticMeshRayTracingProxy *)0x0) {
    iVar11 = (pFVar2->LODs).Array.ArrayNum;
    uVar13 = 0;
    if (0 < iVar11) {
      lVar16 = 0;
      do {
        uVar15 = ~uVar13 >> 0x1f;
        uVar6 = 0;
        if ((int)uVar13 < iVar11) {
          uVar6 = uVar15;
        }
        if (uVar6 == 0) {
          local_150 = (longlong)iVar11;
          local_158 = (FScriptContainerElement *)(longlong)(int)uVar13;
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        FStaticMeshRayTracingProxyLOD::InitResources
                  (*(FStaticMeshRayTracingProxyLOD **)
                    ((pFVar2->LODs).Array.AllocatorInstance.Data + lVar16),param_2,uVar13);
        if (pFVar2->bUsingRenderingLODs == false) {
          pTVar3 = pFVar2->LODVertexFactories;
          iVar11 = pTVar3->ArrayNum;
          uVar6 = 0;
          if ((int)uVar13 < iVar11) {
            uVar6 = uVar15;
          }
          if (uVar6 == 0) {
            local_158 = (FScriptContainerElement *)(longlong)(int)uVar13;
            local_150 = (longlong)iVar11;
            bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar5) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
          }
          iVar11 = (pFVar2->LODs).Array.ArrayNum;
          pFVar1 = (pTVar3->AllocatorInstance).Data;
          uVar6 = 0;
          if ((int)uVar13 < iVar11) {
            uVar6 = uVar15;
          }
          if ((uVar6 == 0) &&
             (local_158 = (FScriptContainerElement *)(longlong)(int)uVar13,
             local_150 = (longlong)iVar11,
             bVar5 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          FStaticMeshVertexFactories::InitResources
                    ((FStaticMeshVertexFactories *)(pFVar1 + (longlong)(int)uVar13 * 0x470),
                     *(FStaticMeshVertexBuffers **)
                      (*(longlong *)((pFVar2->LODs).Array.AllocatorInstance.Data + lVar16) + 0x18),
                     uVar13,local_148);
          param_2 = local_148;
        }
        iVar11 = (pFVar2->LODs).Array.ArrayNum;
        uVar13 = uVar13 + 1;
        lVar16 = lVar16 + 8;
      } while ((int)uVar13 < iVar11);
    }
  }
  bVar5 = IsRayTracingAllowed();
  if ((bVar5) && (this->RayTracingProxy != (FStaticMeshRayTracingProxy *)0x0)) {
    if (param_2->bSupportRayTracing == '\0') {
      UObjectBaseUtility::GetPathName((UObjectBaseUtility *)param_2,&local_140,(UObject *)0x0);
      local_158 = (FScriptContainerElement *)L"";
      if (local_140.Data.ArrayNum != 0) {
        local_158 = local_140.Data.AllocatorInstance.Data;
      }
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Owner->bSupportRayTracing",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\StaticMesh.cpp"
                         ,0xaf0,
                         L"Unexpected RayTracingProxy on \'%s\' (support ray tracing is disabled on this UStaticMesh)."
                        );
      if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_140.Data.AllocatorInstance.Data);
      }
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    local_100 = (undefined ***)0x0;
    local_118 = &UE::Core::Private::Function::
                 TFunction_OwnedObject<`FStaticMeshRenderData::InitResources'::`29'::<lambda_1>,1,0>
                 ::_vftable_;
    local_128[0] = UE::Core::Private::Function::
                   TFunctionRefCaller<`FStaticMeshRenderData::InitResources'::__l29::<lambda_1>,void,FRHICommandListImmediate_&>
                   ::Call;
    pFStack_110 = this;
    local_108 = param_2;
    pFVar7 = FRenderCommandList::GetInstanceTLS();
    if (pFVar7 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_FStaticMeshRenderData::InitResources_::__l29::TSTR_InitStaticMeshRayTracingGeometry2802>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_128);
    }
    else {
      pFVar8 = FRenderCommandList::GetRenderThread(pFVar7);
      local_c8._0_8_ = local_128[0];
      local_a0 = local_100;
      local_b8 = local_118;
      pFStack_b0 = pFStack_110;
      local_a8 = local_108;
      local_128[0] = (code *)0x0;
      local_98 = 2;
      pFVar9 = (FRenderCommandTag *)
               TRenderCommandTag<`FStaticMeshRenderData::InitResources'::__l29::TSTR_InitStaticMeshRayTracingGeometry2802>
               ::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (pFVar8,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                         *)local_c8,pFVar9);
      uVar14 = (ulonglong)local_98;
      if ((2 < uVar14) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar14] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if ((code *)local_c8._0_8_ != (code *)0x0) {
          pppuVar12 = (undefined ***)(local_c8 + 0x10);
          if (local_a0 != (undefined ***)0x0) {
            pppuVar12 = local_a0;
          }
          (*(code *)(*pppuVar12)[2])();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar14])(local_c8);
      }
    }
    if (local_128[0] != (code *)0x0) {
      pppuVar12 = &local_118;
      if (local_100 != (undefined ***)0x0) {
        pppuVar12 = local_100;
      }
      (*(code *)(*pppuVar12)[2])();
    }
  }
  local_d0 = (undefined ***)0x0;
  local_e8 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FStaticMeshRenderData::InitResources'::`2'::<lambda_2>,1,0>::
              _vftable_;
  local_f8[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FStaticMeshRenderData::InitResources'::__l2::<lambda_2>,void,FRHICommandListImmediate_&>
                ::Call;
  pFStack_e0 = this;
  local_d8 = param_2;
  pFVar7 = FRenderCommandList::GetInstanceTLS();
  if (pFVar7 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_FStaticMeshRenderData::InitResources_::__l2::TSTR_CmdSetStaticMeshReadyForStreaming2849>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_f8);
  }
  else {
    pFVar8 = FRenderCommandList::GetRenderThread(pFVar7);
    local_88._0_8_ = local_f8[0];
    local_60 = local_d0;
    local_78 = local_e8;
    pFStack_70 = pFStack_e0;
    local_68 = local_d8;
    local_f8[0] = (code *)0x0;
    local_58 = 2;
    pFVar9 = (FRenderCommandTag *)
             TRenderCommandTag<`FStaticMeshRenderData::InitResources'::__l2::TSTR_CmdSetStaticMeshReadyForStreaming2849>
             ::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (pFVar8,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                       *)local_88,pFVar9);
    uVar14 = (ulonglong)local_58;
    if ((2 < uVar14) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar14] ==
        UE::Core::Private::
        TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
      if ((code *)local_88._0_8_ != (code *)0x0) {
        pppuVar12 = (undefined ***)(local_88 + 0x10);
        if (local_60 != (undefined ***)0x0) {
          pppuVar12 = local_60;
        }
        (*(code *)(*pppuVar12)[2])();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar14])(local_88);
    }
  }
  if (local_f8[0] != (code *)0x0) {
    pppuVar12 = &local_e8;
    if (local_d0 != (undefined ***)0x0) {
      pppuVar12 = local_d0;
    }
    (*(code *)(*pppuVar12)[2])();
  }
  this->bIsInitialized = true;
  return;
}

// InitializeRayTracingRepresentationFromRenderingLODs @ 14874a480

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FStaticMeshRenderData::InitializeRayTracingRepresentationFromRenderingLODs
          (FStaticMeshRenderData *this)

{
  int *piVar1;
  longlong lVar2;
  FStaticMeshRayTracingProxy *pFVar3;
  longlong lVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  longlong lVar7;
  bool bVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  FRenderResource *this_00;
  FRenderResource *pFVar12;
  undefined8 *puVar13;
  FRenderResource *pFVar14;
  FRenderResource *pFVar15;
  uint uVar16;
  longlong lVar17;
  uint uVar18;
  longlong lVar19;
  undefined8 *local_58 [4];
  
  bVar8 = IsRayTracingEnableOnDemandSupported();
  uVar18 = (this->LODResources).Array.ArrayNum;
  lVar19 = (longlong)(int)uVar18;
  pFVar14 = (FRenderResource *)0x0;
  if ((!bVar8) && (pFVar12 = pFVar14, pFVar15 = pFVar14, 0 < (int)uVar18)) {
    do {
      uVar16 = (uint)pFVar15;
      uVar10 = 0;
      if ((int)uVar16 < (this->LODResources).Array.ArrayNum) {
        uVar10 = ~uVar16 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      lVar2 = *(longlong *)
               ((this->LODResources).Array.AllocatorInstance.Data + (longlong)pFVar12 * 8);
      if ((*(longlong *)(lVar2 + 0x50) != 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("LODModel.RayTracingGeometry == nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\StaticMesh.cpp"
                             ,0xb68,
                             L"LODModel.RayTracingGeometry expected to be null. Was the static mesh ray tracing representation already initialized?"
                            ), bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      this_00 = ::operator_new(0x100);
      pFVar15 = pFVar14;
      if (this_00 != (FRenderResource *)0x0) {
        memset(this_00,0,0x100);
        FRenderResource::FRenderResource(this_00);
        this_00->_padding_ = (longlong)&___7FRayTracingGeometry__6B_;
        *(undefined ***)&this_00[1].ListIndex = &___7__TResourceArray_E_0A___6B_;
        this_00[1]._padding_ = -1;
        this_00[1].OwnerName.ComparisonIndex = 0xffffffff;
        this_00[1].OwnerName.Number = 0xffffffff;
        this_00[1].ResourceName.ComparisonIndex = 0xffffffff;
        this_00[1].ResourceName.Number = 0xffffffff;
        this_00[2]._padding_ = 0;
        this_00[2].OwnerName.ComparisonIndex = 0;
        this_00[2].OwnerName.Number = 0;
        *(undefined1 *)&this_00[2].ResourceName.ComparisonIndex.Value = 0;
        this_00[2].ListIndex = -1;
        this_00[2].FeatureLevel = 0xff;
        this_00[2].InitPhase = ~Pre;
        this_00[2].ResourceState = ~Default;
        this_00[2].field_0x1f = 0xff;
        this_00[3]._padding_ = 0;
        this_00[3].OwnerName.ComparisonIndex.Value = 0;
        FRayTracingGeometryInitializer::FRayTracingGeometryInitializer
                  ((FRayTracingGeometryInitializer *)&this_00[3].ResourceName);
        *(undefined4 *)&this_00[7]._padding_ = 0xffffffff;
        *(undefined1 *)((longlong)&this_00[7]._padding_ + 4) = 0xff;
        this_00[7].OwnerName.ComparisonIndex = 0;
        this_00[7].OwnerName.Number = 0;
        this_00[7].ResourceName.ComparisonIndex.Value = 0;
        *(undefined8 *)&this_00[7].ResourceName.Number = 0xffffffffffffffff;
        pFVar15 = this_00;
      }
      *(FRenderResource **)(lVar2 + 0x50) = pFVar15;
      pFVar12 = (FRenderResource *)((longlong)&pFVar12->_padding_ + 1);
      pFVar15 = (FRenderResource *)(ulonglong)(uVar16 + 1);
    } while ((longlong)pFVar12 < lVar19);
  }
  if ((this->RayTracingProxy != (FStaticMeshRayTracingProxy *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("RayTracingProxy == nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\StaticMesh.cpp"
                         ,0xb6d,
                         L"RayTracingProxy expected to be null. Was the static mesh ray tracing representation already initialized?"
                        ), bVar9)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pFVar12 = ::operator_new(0x20);
  if (pFVar12 != (FRenderResource *)0x0) {
    *(undefined4 *)((longlong)&pFVar12->ListIndex + 1) = 0;
    pFVar12->InitPhase = Pre;
    pFVar12->ResourceState = Default;
    pFVar12->field_0x1f = 0;
    pFVar12->_padding_ = 0;
    (pFVar12->OwnerName).ComparisonIndex = 0;
    (pFVar12->OwnerName).Number = 0;
    (pFVar12->ResourceName).ComparisonIndex = 0;
    (pFVar12->ResourceName).Number = 0;
    pFVar14 = pFVar12;
  }
  this->RayTracingProxy = (FStaticMeshRayTracingProxy *)pFVar14;
  *(undefined1 *)&pFVar14->ListIndex = 1;
  pFVar3 = this->RayTracingProxy;
  if (((pFVar3->LODs).Array.ArrayNum != 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("RayTracingLODs.IsEmpty()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\StaticMesh.cpp"
                         ,0xb72,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if ((int)uVar18 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar18);
  }
  piVar1 = &(pFVar3->LODs).Array.ArrayMax;
  if ((pFVar3->LODs).Array.ArrayMax < (int)uVar18) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar18,(ForAnyElementType *)pFVar3,(pFVar3->LODs).Array.ArrayNum,piVar1);
  }
  lVar7 = _UNK_151b6c388;
  lVar2 = ___xmm_00000000000000d00000000000000010;
  uVar18 = 0;
  if (0 < lVar19) {
    lVar17 = 0;
    do {
      uVar10 = 0;
      if ((int)uVar18 < (this->LODResources).Array.ArrayNum) {
        uVar10 = ~uVar18 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      lVar4 = *(longlong *)((this->LODResources).Array.AllocatorInstance.Data + lVar17 * 8);
      puVar13 = ::operator_new(0x60);
      if (puVar13 == (undefined8 *)0x0) {
        puVar13 = (undefined8 *)0x0;
      }
      else {
        puVar13[5] = 0;
        *puVar13 = &___7FStaticMeshRayTracingProxyLOD__6B_;
        puVar13[1] = 0;
        puVar13[2] = 0;
        puVar13[3] = 0;
        puVar13[4] = 0;
        puVar13[6] = 0;
        puVar13[7] = 0;
        *(undefined4 *)((longlong)puVar13 + 0x35) = 0xffffffff;
        *(undefined1 *)((longlong)puVar13 + 0x39) = 0xff;
        puVar13[8] = FIoChunkId::InvalidChunkId.Id._0_8_;
        *(undefined4 *)(puVar13 + 9) = FIoChunkId::InvalidChunkId.Id._8_4_;
        puVar13[10] = 0;
        *(undefined4 *)(puVar13 + 0xb) = 0;
        *(byte *)((longlong)puVar13 + 0x5c) = *(byte *)((longlong)puVar13 + 0x5c) & 0xe3 | 3;
      }
      *(byte *)((longlong)puVar13 + 0x5c) =
           *(byte *)((longlong)puVar13 + 0x5c) ^ (*(byte *)((longlong)puVar13 + 0x5c) ^ bVar8) & 1;
      if (bVar8) {
        pFVar14 = ::operator_new(0x100);
        if (pFVar14 == (FRenderResource *)0x0) {
          pFVar14 = (FRenderResource *)0x0;
        }
        else {
          memset(pFVar14,0,0x100);
          FRenderResource::FRenderResource(pFVar14);
          pFVar14[2].ListIndex = -1;
          pFVar14[2].FeatureLevel = 0xff;
          pFVar14[2].InitPhase = ~Pre;
          pFVar14[2].ResourceState = ~Default;
          pFVar14[2].field_0x1f = 0xff;
          pFVar14->_padding_ = (longlong)&___7FRayTracingGeometry__6B_;
          *(undefined ***)&pFVar14[1].ListIndex = &___7__TResourceArray_E_0A___6B_;
          pFVar14[2]._padding_ = 0;
          pFVar14[2].OwnerName.ComparisonIndex = 0;
          pFVar14[2].OwnerName.Number = 0;
          *(undefined1 *)&pFVar14[2].ResourceName.ComparisonIndex.Value = 0;
          pFVar14[3]._padding_ = 0;
          pFVar14[3].OwnerName.ComparisonIndex.Value = 0;
          pFVar14[1]._padding_ = -1;
          pFVar14[1].OwnerName.ComparisonIndex = 0xffffffff;
          pFVar14[1].OwnerName.Number = 0xffffffff;
          pFVar14[1].ResourceName.ComparisonIndex = 0xffffffff;
          pFVar14[1].ResourceName.Number = 0xffffffff;
          FRayTracingGeometryInitializer::FRayTracingGeometryInitializer
                    ((FRayTracingGeometryInitializer *)&pFVar14[3].ResourceName);
          *(undefined4 *)&pFVar14[7]._padding_ = 0xffffffff;
          pFVar14[7].OwnerName.ComparisonIndex = 0;
          pFVar14[7].OwnerName.Number = 0;
          pFVar14[7].ResourceName.ComparisonIndex.Value = 0;
          *(undefined1 *)((longlong)&pFVar14[7]._padding_ + 4) = 0xff;
          *(undefined8 *)&pFVar14[7].ResourceName.Number = 0xffffffffffffffff;
        }
      }
      else {
        pFVar14 = *(FRenderResource **)(lVar4 + 0x50);
      }
      *(byte *)((longlong)puVar13 + 0x5c) = *(byte *)((longlong)puVar13 + 0x5c) & 0xfd;
      puVar13[4] = lVar4 + 0x228;
      puVar13[1] = pFVar14;
      puVar13[2] = lVar4 + lVar2;
      puVar13[3] = lVar4 + lVar7;
      pFVar5 = (pFVar3->LODs).Array.AllocatorInstance.Data;
      local_58[0] = puVar13;
      if (((pFVar5 <= (FScriptContainerElement *)local_58) &&
          ((FScriptContainerElement *)local_58 < pFVar5 + (longlong)*piVar1 * 8)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar11 = (pFVar3->LODs).Array.ArrayNum;
      if (iVar11 == *piVar1) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,(ForAnyElementType *)pFVar3,piVar1);
      }
      (pFVar3->LODs).Array.ArrayNum = iVar11 + 1;
      uVar18 = uVar18 + 1;
      lVar17 = lVar17 + 1;
      *(undefined8 **)((pFVar3->LODs).Array.AllocatorInstance.Data + (longlong)iVar11 * 8) =
           local_58[0];
    } while (lVar17 < lVar19);
  }
  this->RayTracingProxy->LODVertexFactories = &this->LODVertexFactories;
  return;
}

// ReleaseResources @ 1487527c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FStaticMeshRenderData::ReleaseResources(FStaticMeshRenderData *this)

{
  FStaticMeshLODResources *this_00;
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  FRenderCommandList *this_01;
  FCommandList *this_02;
  FRenderCommandTag *pFVar5;
  int iVar6;
  undefined ***pppuVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  FRenderResource *pFVar11;
  longlong lVar12;
  longlong lVar13;
  undefined1 auStack_d8 [32];
  longlong local_b8;
  longlong local_b0;
  code *local_a8 [2];
  undefined **local_98;
  FStaticMeshRenderData *pFStack_90;
  undefined8 local_88;
  undefined ***local_80;
  undefined1 local_78 [16];
  undefined **local_68;
  FStaticMeshRenderData *pFStack_60;
  undefined8 local_58;
  undefined ***local_50;
  byte local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_d8;
  bVar3 = this->bIsInitialized;
  this->bIsInitialized = false;
  if (this->RayTracingProxy != (FStaticMeshRayTracingProxy *)0x0) {
    FStaticMeshRayTracingProxy::ReleaseResources(this->RayTracingProxy);
  }
  iVar6 = (this->LODResources).Array.ArrayNum;
  uVar8 = 0;
  if (0 < iVar6) {
    lVar12 = 0;
    lVar13 = 0;
    do {
      uVar10 = ~uVar8 >> 0x1f;
      uVar4 = 0;
      if ((int)uVar8 < iVar6) {
        uVar4 = uVar10;
      }
      if (uVar4 == 0) {
        local_b0 = (longlong)iVar6;
        local_b8 = (longlong)(int)uVar8;
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      if (*(int *)(*(longlong *)((this->LODResources).Array.AllocatorInstance.Data + lVar13) + 0x17c
                  ) != 0) {
        iVar6 = (this->LODResources).Array.ArrayNum;
        uVar4 = 0;
        if ((int)uVar8 < iVar6) {
          uVar4 = uVar10;
        }
        if (uVar4 == 0) {
          local_b8 = (longlong)(int)uVar8;
          local_b0 = (longlong)iVar6;
          bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar2) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
        }
        this_00 = *(FStaticMeshLODResources **)
                   ((this->LODResources).Array.AllocatorInstance.Data + lVar13);
        FStaticMeshLODResources::UpdateVertexMemoryStats<0>(this_00);
        FStaticMeshLODResources::UpdateIndexMemoryStats<0>(this_00);
        BeginReleaseResource((FRenderResource *)&this_00->IndexBuffer,(FRenderCommandPipe *)0x0);
        BeginReleaseResource((FRenderResource *)&this_00->VertexBuffers,(FRenderCommandPipe *)0x0);
        BeginReleaseResource
                  ((FRenderResource *)&(this_00->VertexBuffers).PositionVertexBuffer,
                   (FRenderCommandPipe *)0x0);
        BeginReleaseResource
                  ((FRenderResource *)&(this_00->VertexBuffers).ColorVertexBuffer,
                   (FRenderCommandPipe *)0x0);
        BeginReleaseResource
                  ((FRenderResource *)&this_00->DepthOnlyIndexBuffer,(FRenderCommandPipe *)0x0);
        BeginReleaseResource
                  ((FRenderResource *)&this_00->AreaWeightedSectionSamplersBuffer,
                   (FRenderCommandPipe *)0x0);
        if (this_00->AdditionalIndexBuffers != (FAdditionalStaticMeshIndexBuffers *)0x0) {
          BeginReleaseResource
                    ((FRenderResource *)this_00->AdditionalIndexBuffers,(FRenderCommandPipe *)0x0);
          BeginReleaseResource
                    ((FRenderResource *)&this_00->AdditionalIndexBuffers->WireframeIndexBuffer,
                     (FRenderCommandPipe *)0x0);
          BeginReleaseResource
                    ((FRenderResource *)
                     &this_00->AdditionalIndexBuffers->ReversedDepthOnlyIndexBuffer,
                     (FRenderCommandPipe *)0x0);
        }
        if (this_00->RayTracingGeometry != (FRayTracingGeometry *)0x0) {
          BeginReleaseResource
                    ((FRenderResource *)this_00->RayTracingGeometry,(FRenderCommandPipe *)0x0);
        }
        iVar6 = (this->LODVertexFactories).ArrayNum;
        uVar4 = 0;
        if ((int)uVar8 < iVar6) {
          uVar4 = uVar10;
        }
        if (uVar4 == 0) {
          local_b8 = (longlong)(int)uVar8;
          local_b0 = (longlong)iVar6;
          bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar2) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
        }
        pFVar11 = (FRenderResource *)((this->LODVertexFactories).AllocatorInstance.Data + lVar12);
        BeginReleaseResource(pFVar11,(FRenderCommandPipe *)0x0);
        BeginReleaseResource
                  ((FRenderResource *)&pFVar11[0x11].ResourceName,(FRenderCommandPipe *)0x0);
        if ((FRenderResource *)pFVar11[0x23]._padding_ != (FRenderResource *)0x0) {
          BeginReleaseResource((FRenderResource *)pFVar11[0x23]._padding_,(FRenderCommandPipe *)0x0)
          ;
        }
        if (pFVar11[0x23].OwnerName != (FName)0x0) {
          BeginReleaseResource((FRenderResource *)pFVar11[0x23].OwnerName,(FRenderCommandPipe *)0x0)
          ;
        }
      }
      iVar6 = (this->LODResources).Array.ArrayNum;
      uVar8 = uVar8 + 1;
      lVar13 = lVar13 + 8;
      lVar12 = lVar12 + 0x470;
    } while ((int)uVar8 < iVar6);
  }
  if ((bVar3 != false) && (bVar3 = IsRayTracingAllowed(), bVar3)) {
    local_80 = (undefined ***)0x0;
    local_98 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`FStaticMeshRenderData::ReleaseResources'::`13'::<lambda_1>,1,0>
                ::_vftable_;
    local_a8[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FStaticMeshRenderData::ReleaseResources'::__l13::<lambda_1>,void,FRHICommandListImmediate_&>
                  ::Call;
    pFStack_90 = this;
    this_01 = FRenderCommandList::GetInstanceTLS();
    if (this_01 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_FStaticMeshRenderData::ReleaseResources_::__l13::TSTR_CmdReleaseRayTracingGeometryGroup2880>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_a8);
    }
    else {
      this_02 = FRenderCommandList::GetRenderThread(this_01);
      local_78._0_8_ = local_a8[0];
      local_50 = local_80;
      local_68 = local_98;
      pFStack_60 = pFStack_90;
      local_58 = local_88;
      local_a8[0] = (code *)0x0;
      local_48 = 2;
      pFVar5 = (FRenderCommandTag *)
               TRenderCommandTag<`FStaticMeshRenderData::ReleaseResources'::__l13::TSTR_CmdReleaseRayTracingGeometryGroup2880>
               ::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (this_02,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                          *)local_78,pFVar5);
      uVar9 = (ulonglong)local_48;
      if ((2 < uVar9) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar9] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if ((code *)local_78._0_8_ != (code *)0x0) {
          pppuVar7 = (undefined ***)(local_78 + 0x10);
          if (local_50 != (undefined ***)0x0) {
            pppuVar7 = local_50;
          }
          (*(code *)(*pppuVar7)[2])();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar9])(local_78);
      }
    }
    if (local_a8[0] != (code *)0x0) {
      pppuVar7 = &local_98;
      if (local_80 != (undefined ***)0x0) {
        pppuVar7 = local_80;
      }
      (*(code *)(*pppuVar7)[2])();
    }
  }
  if (((this->NaniteResourcesPtr).Ptr == (FResources *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("NaniteResourcesPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\StaticMesh.cpp"
                         ,0xb4c,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  Nanite::FResources::ReleaseResources((this->NaniteResourcesPtr).Ptr);
  return;
}

// Serialize @ 148757ae0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
FStaticMeshRenderData::Serialize
          (FStaticMeshRenderData *this,FArchive *param_1,UStaticMesh *param_2,bool param_3)

{
  uint *puVar1;
  int *piVar2;
  longlong *plVar3;
  uchar *puVar4;
  ulonglong *puVar5;
  longlong lVar6;
  undefined8 *puVar7;
  code *pcVar8;
  undefined4 uVar9;
  Type TVar10;
  TConsoleVariableData<int> *pTVar11;
  uint uVar12;
  FName *pFVar13;
  FThreadSafeStaticStat<_public:_void___cdecl_FStaticMeshRenderData::Serialize(FArchive_&,UStaticMesh_*,bool)_::_2_::FStat_STAT_StaticMeshRenderData_Serialize>
  FVar14;
  FStaticMeshRayTracingProxy *this_00;
  FDistanceFieldVolumeData *this_01;
  FDistanceFieldVolumeData *pFVar15;
  FName FVar16;
  uint uVar17;
  TPerPlatformProperty<FPerPlatformFloat,float,4> *pTVar18;
  ulonglong uVar19;
  char cVar20;
  ulonglong uVar21;
  longlong lVar22;
  byte bVar23;
  int iVar24;
  FLocalVertexFactory *this_02;
  bool bVar25;
  uint local_a8;
  char local_a4;
  byte local_a3;
  byte local_a2 [2];
  FStripDataFlags local_a0 [2];
  uint local_9c;
  uint local_98;
  uint local_94;
  FName local_90;
  FStripDataFlags local_88 [2];
  FColor_u_0 local_84;
  FName local_80;
  FName local_78;
  FString local_68;
  FName local_58;
  FName local_50 [2];
  
  bVar25 = CpuChannel->Enabled < 0;
  if (bVar25) {
    local_a4 = '\0';
  }
  else {
    local_a4 = '\x01';
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId2475,"FStaticMeshRenderData::Serialize",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\StaticMesh.cpp"
               ,0x9ab);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId2475);
  }
  cVar20 = !bVar25;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_StaticMeshRenderData_Serialize ==
        (FThreadSafeStaticStat<_public:_void___cdecl_FStaticMeshRenderData::Serialize(FArchive_&,UStaticMesh_*,bool)_::_2_::FStat_STAT_StaticMeshRenderData_Serialize>
         )0x0) {
      pFVar13 = ::FName::FName(&local_58,"STAT_StaticMeshRenderData_Serialize");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_StaticMeshRenderData_Serialize,*pFVar13,
                 L"FStaticMeshRenderData::Serialize","STATGROUP_LoadTime","STATCAT_Advanced",
                 L"LoadTime",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar14 = StatPtr_STAT_StaticMeshRenderData_Serialize;
  if (StatPtr_STAT_StaticMeshRenderData_Serialize ==
      (FThreadSafeStaticStat<_public:_void___cdecl_FStaticMeshRenderData::Serialize(FArchive_&,UStaticMesh_*,bool)_::_2_::FStat_STAT_StaticMeshRenderData_Serialize>
       )0x0) {
    pFVar13 = ::FName::FName(local_50,"STAT_StaticMeshRenderData_Serialize");
    FVar14 = (FThreadSafeStaticStat<_public:_void___cdecl_FStaticMeshRenderData::Serialize(FArchive_&,UStaticMesh_*,bool)_::_2_::FStat_STAT_StaticMeshRenderData_Serialize>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_StaticMeshRenderData_Serialize,
                          *pFVar13,L"FStaticMeshRenderData::Serialize","STATGROUP_LoadTime",
                          "STATCAT_Advanced",L"LoadTime",true,true,ST_int64,true,false,MCR_Invalid);
  }
  bVar23 = 0;
  local_78.ComparisonIndex.Value = 0;
  local_78.Number = 0;
  FVar16 = *(FName *)FVar14;
  local_a3 = 0;
  if ((FVar16.ComparisonIndex.Value.Value == 0) && (FVar16.Number == 0)) {
LAB_148757cbd:
    local_90 = local_78;
    FVar16 = local_78;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_84.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_84._s_0,(char *)*(FName *)((longlong)FVar14 + 0x10));
      bVar23 = 1;
      local_a3 = 1;
      if (-1 < CpuChannel->Enabled) {
        local_80.ComparisonIndex.Value = FVar16.ComparisonIndex.Value.Value;
        local_80.Number = FVar16.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_80,(wchar_t *)*(FName *)((longlong)FVar14 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\StaticMesh.cpp"
                   ,0x9ad);
        bVar23 = 3;
        local_a3 = 3;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_148757cbd;
    local_90 = FVar16;
    FThreadStats::AddMessage(FVar16,CycleScopeStart);
    local_a3 = bVar23 | 4;
  }
  pTVar11 = CVarStaticMeshKeepMobileMinLODSettingOnDesktop.Ref;
  if (param_3) {
    local_9c = 0;
    bVar25 = IsInParallelGameThread();
    if ((bVar25) || (bVar25 = IsInGameThread(), bVar25)) {
      lVar22 = 0;
    }
    else {
      lVar22 = 4;
    }
    if (*(int *)((longlong)pTVar11->ShadowedValue + lVar22) != 0) {
      plVar3 = *(longlong **)&param_1->field_0x8;
      if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
        if ((param_1->field_0x2a & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_9c,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,&local_9c);
        }
      }
      else {
        local_9c = *(uint *)*plVar3;
        *plVar3 = *plVar3 + 4;
      }
      if (((param_1->field_0x28 & 1) != 0) && (GMaxRHIFeatureLevel == ES3_1)) {
        this->LODBiasModifier = (uchar)local_9c;
      }
    }
  }
  TIndirectArray<FStaticMeshLODResources,TSizedDefaultAllocator<32>_>::Serialize
            (&this->LODResources,param_1,(UObject *)param_2);
  puVar4 = (uchar *)**(undefined8 **)&param_1->field_0x8;
  if ((uchar *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar4 + 1) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&this->NumInlinedLODs,1);
  }
  else {
    this->NumInlinedLODs = *puVar4;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
  }
  this->CurrentFirstLODIdx = (char)(this->LODResources).Array.ArrayNum - this->NumInlinedLODs;
  if ((param_1->field_0x28 & 1) != 0) {
    uVar12 = (this->LODResources).Array.ArrayNum;
    if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar12);
    }
    DestructItems<FStaticMeshVertexFactories,int>
              ((FStaticMeshVertexFactories *)(this->LODVertexFactories).AllocatorInstance.Data,
               (this->LODVertexFactories).ArrayNum);
    iVar24 = 0;
    piVar2 = &(this->LODVertexFactories).ArrayMax;
    (this->LODVertexFactories).ArrayNum = 0;
    if (*piVar2 != uVar12) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x470,8,uVar12,&(this->LODVertexFactories).AllocatorInstance,0,piVar2);
    }
    if (0 < (this->LODResources).Array.ArrayNum) {
      do {
        uVar12 = (this->LODVertexFactories).ArrayNum;
        if (uVar12 == (this->LODVertexFactories).ArrayMax) {
          uVar12 = UE::Core::Private::
                   ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x470,8,&(this->LODVertexFactories).AllocatorInstance,
                              &(this->LODVertexFactories).ArrayMax);
        }
        (this->LODVertexFactories).ArrayNum = uVar12 + 1;
        uVar17 = 0;
        if ((int)uVar12 < (int)(uVar12 + 1)) {
          uVar17 = ~uVar12 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar25)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        TVar10 = GMaxRHIFeatureLevel;
        this_02 = (FLocalVertexFactory *)
                  ((this->LODVertexFactories).AllocatorInstance.Data + (longlong)(int)uVar12 * 0x470
                  );
        if (this_02 != (FLocalVertexFactory *)0x0) {
          FLocalVertexFactory::FLocalVertexFactory
                    (this_02,GMaxRHIFeatureLevel,"FStaticMeshVertexFactories");
          FLocalVertexFactory::FLocalVertexFactory
                    (this_02 + 1,TVar10,"FStaticMeshVertexFactories_Override");
          this_02[2]._padding_ = 0;
          this_02[2]._padding_ = 0;
          if ((4 < (int)TVar10) &&
             (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                 ("InFeatureLevel < ERHIFeatureLevel::Num",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\StaticMeshResources.h"
                                  ,0x28b,L""), bVar25)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
        }
        iVar24 = iVar24 + 1;
        FVar16 = local_90;
        cVar20 = local_a4;
      } while (iVar24 < (this->LODResources).Array.ArrayNum);
    }
  }
  if (((this->NaniteResourcesPtr).Ptr == (FResources *)0x0) &&
     (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                         ("NaniteResourcesPtr.IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\StaticMesh.cpp"
                          ,0xa07,L""), bVar25)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  Nanite::FResources::Serialize((this->NaniteResourcesPtr).Ptr,param_1,(UObject *)param_2,param_3);
  puVar5 = *(ulonglong **)&param_1->field_0x8;
  bVar25 = this->RayTracingProxy != (FStaticMeshRayTracingProxy *)0x0;
  puVar1 = (uint *)*puVar5 + 1;
  if ((uint *)puVar5[1] < puVar1) {
    local_98 = 0;
    if ((param_1->field_0x28 & 1) == 0) {
      local_98 = (uint)(this->RayTracingProxy != (FStaticMeshRayTracingProxy *)0x0);
    }
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_98);
    if (1 < local_98) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
    bVar23 = param_1->field_0x28;
    uVar12 = local_98;
    if ((bVar23 & 1) == 0) goto LAB_148757ffc;
  }
  else {
    uVar12 = *(uint *)*puVar5;
    *puVar5 = (ulonglong)puVar1;
    bVar23 = param_1->field_0x28;
  }
  bVar25 = uVar12 != 0;
LAB_148757ffc:
  if (bVar25) {
    this_00 = this->RayTracingProxy;
    if (this_00 == (FStaticMeshRayTracingProxy *)0x0) {
      if (((bVar23 & 1) == 0) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("Ar.IsLoading()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\StaticMesh.cpp"
                              ,0xa1a,
                              L"bHasRayTracingProxy unexpectedly changed even though we are not loading data."
                             ), bVar25)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      this_00 = ::operator_new(0x20);
      if (this_00 != (FStaticMeshRayTracingProxy *)0x0) {
        *(undefined4 *)&this_00->field_0x19 = 0;
        *(undefined2 *)&this_00->field_0x1d = 0;
        this_00->field_0x1f = 0;
        (this_00->LODs).Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (this_00->LODs).Array.ArrayNum = 0;
        (this_00->LODs).Array.ArrayMax = 0;
        this_00->LODVertexFactories =
             (TArray<FStaticMeshVertexFactories,TSizedDefaultAllocator<32>_> *)0x0;
        this_00->bUsingRenderingLODs = false;
      }
      this->RayTracingProxy = this_00;
    }
    FStaticMeshRayTracingProxy::Serialize(this_00,param_1,(UObject *)param_2,this,param_3);
  }
  if (param_3) {
    SerializeInlineDataRepresentations(this,param_1,param_2);
    FStripDataFlags::FStripDataFlags(local_a0,param_1,'\0',&GOldestLoadablePackageFileUEVersion);
    if (((local_a0[0].GlobalStripFlags & 2) == 0) && ((local_a0[0].ClassStripFlags & 1) == 0)) {
      if ((param_1->field_0x28 & 4) != 0) {
        FDistanceFieldAsyncQueue::BlockUntilBuildComplete(GDistanceFieldAsyncQueue,param_2,false);
      }
      iVar24 = (this->LODResources).Array.ArrayNum;
      uVar21 = 0;
      uVar19 = uVar21;
      if (0 < iVar24) {
        do {
          uVar17 = (uint)uVar19;
          uVar12 = 0;
          if ((int)uVar17 < iVar24) {
            uVar12 = ~uVar17 >> 0x1f;
          }
          if ((uVar12 == 0) &&
             (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar25)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          lVar22 = *(longlong *)((this->LODResources).Array.AllocatorInstance.Data + uVar21);
          puVar5 = *(ulonglong **)&param_1->field_0x8;
          bVar25 = *(longlong *)(lVar22 + 0x40) != 0;
          puVar1 = (uint *)*puVar5 + 1;
          if ((uint *)puVar5[1] < puVar1) {
            local_94 = 0;
            if ((param_1->field_0x28 & 1) == 0) {
              local_94 = (uint)(*(longlong *)(lVar22 + 0x40) != 0);
            }
            (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_94);
            if (1 < local_94) {
              FArchiveState::SetError((FArchiveState *)param_1);
            }
            uVar12 = local_94;
            if ((param_1->field_0x28 & 1) != 0) goto LAB_1487581c6;
          }
          else {
            uVar12 = *(uint *)*puVar5;
            *puVar5 = (ulonglong)puVar1;
LAB_1487581c6:
            bVar25 = uVar12 != 0;
          }
          if (bVar25) {
            if (*(longlong *)(lVar22 + 0x40) == 0) {
              this_01 = ::operator_new(0x118);
              pFVar15 = (FDistanceFieldVolumeData *)0x0;
              if (this_01 != (FDistanceFieldVolumeData *)0x0) {
                pFVar15 = FDistanceFieldVolumeData::FDistanceFieldVolumeData(this_01);
              }
              *(FDistanceFieldVolumeData **)(lVar22 + 0x40) = pFVar15;
              uVar9 = *(undefined4 *)((longlong)&param_2->_padding_ + 4);
              (pFVar15->AssetName).ComparisonIndex =
                   (FNameEntryId)*(undefined4 *)&param_2->_padding_;
              (pFVar15->AssetName).Number = uVar9;
            }
            lVar6 = *(longlong *)(lVar22 + 0x40);
            iVar24 = _finite((double)*(float *)(lVar6 + 8));
            if ((((((iVar24 == 0) ||
                   (iVar24 = _finite((double)*(float *)(lVar6 + 0xc)), iVar24 == 0)) ||
                  (iVar24 = _finite((double)*(float *)(lVar6 + 0x10)), iVar24 == 0)) ||
                 ((iVar24 = _finite((double)*(float *)(lVar6 + 0x14)), iVar24 == 0 ||
                  (iVar24 = _finite((double)*(float *)(lVar6 + 0x18)), iVar24 == 0)))) ||
                (iVar24 = _finite((double)*(float *)(lVar6 + 0x1c)), iVar24 == 0)) &&
               (3 < (byte)LogStaticMesh._0_1_)) {
              if (param_2 == (UStaticMesh *)0x0) {
                ::FString::FString(&local_68,L"None");
              }
              else {
                UObjectBaseUtility::GetPathName
                          ((UObjectBaseUtility *)param_2,&local_68,(UObject *)0x0);
              }
              UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogStaticMesh);
              if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_68.Data.AllocatorInstance.Data);
              }
            }
            FDistanceFieldVolumeData::Serialize
                      (*(FDistanceFieldVolumeData **)(lVar22 + 0x40),param_1,(UObject *)param_2);
          }
          iVar24 = (this->LODResources).Array.ArrayNum;
          uVar19 = (ulonglong)(uVar17 + 1);
          uVar21 = uVar21 + 8;
          FVar16 = local_90;
          cVar20 = local_a4;
        } while ((int)(uVar17 + 1) < iVar24);
      }
    }
  }
  UE::Math::operator<<(param_1,&this->Bounds);
  local_a2[0] = -(this->bHasNaniteFallbackMesh != false) & 2U |
                this->bLODsShareStaticLighting != false;
  plVar3 = *(longlong **)&param_1->field_0x8;
  if ((byte *)plVar3[1] < (byte *)*plVar3 + 1) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_a2);
  }
  else {
    local_a2[0] = *(byte *)*plVar3;
    *plVar3 = *plVar3 + 1;
  }
  this->bHasNaniteFallbackMesh = (bool)(local_a2[0] >> 1 & 1);
  this->bLODsShareStaticLighting = (bool)(local_a2[0] & 1);
  if (((param_1->field_0x28 & 1) != 0) &&
     (iVar24 = FArchiveState::CustomVer((FArchiveState *)param_1,&FRenderingObjectVersion::GUID),
     iVar24 < 10)) {
    plVar3 = *(longlong **)&param_1->field_0x8;
    if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))();
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,&local_a8);
      }
    }
    else {
      local_a8 = *(uint *)*plVar3;
      *plVar3 = *plVar3 + 4;
    }
    plVar3 = *(longlong **)&param_1->field_0x8;
    if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))();
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,&local_a8);
      }
    }
    else {
      local_a8 = *(uint *)*plVar3;
      *plVar3 = *plVar3 + 4;
    }
    plVar3 = *(longlong **)&param_1->field_0x8;
    if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))();
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,&local_a8);
      }
    }
    else {
      local_a8 = *(uint *)*plVar3;
      *plVar3 = *plVar3 + 4;
    }
    plVar3 = *(longlong **)&param_1->field_0x8;
    if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))();
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,&local_a8);
      }
    }
    else {
      local_a8 = *(uint *)*plVar3;
      *plVar3 = *plVar3 + 4;
    }
    plVar3 = *(longlong **)&param_1->field_0x8;
    if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))();
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,&local_a8);
      }
    }
    else {
      local_a8 = *(uint *)*plVar3;
      *plVar3 = *plVar3 + 4;
    }
    plVar3 = *(longlong **)&param_1->field_0x8;
    if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))();
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,&local_a8);
      }
    }
    else {
      local_a8 = *(uint *)*plVar3;
      *plVar3 = *plVar3 + 4;
    }
    plVar3 = *(longlong **)&param_1->field_0x8;
    if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))();
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,&local_a8);
      }
    }
    else {
      local_a8 = *(uint *)*plVar3;
      *plVar3 = *plVar3 + 4;
    }
    plVar3 = *(longlong **)&param_1->field_0x8;
    if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))();
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,&local_a8);
      }
    }
    else {
      local_a8 = *(uint *)*plVar3;
      *plVar3 = *plVar3 + 4;
    }
    plVar3 = *(longlong **)&param_1->field_0x8;
    if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))();
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,&local_a8);
      }
    }
    else {
      local_a8 = *(uint *)*plVar3;
      *plVar3 = *plVar3 + 4;
    }
  }
  if (param_3) {
    pTVar18 = (TPerPlatformProperty<FPerPlatformFloat,float,4> *)this->ScreenSize;
    lVar22 = 8;
    do {
      operator<<<FPerPlatformFloat,float,4>(param_1,pTVar18);
      pTVar18 = pTVar18 + 4;
      lVar22 = lVar22 + -1;
      cVar20 = local_a4;
    } while (lVar22 != 0);
  }
  pTVar11 = CVarStripDistanceFieldDataDuringLoad.Ref;
  if ((param_1->field_0x28 & 1) != 0) {
    bVar25 = IsInParallelGameThread();
    if ((bVar25) || (bVar25 = IsInGameThread(), bVar25)) {
      lVar22 = 0;
    }
    else {
      lVar22 = 4;
    }
    uVar19 = 0;
    if ((*(int *)((longlong)pTVar11->ShadowedValue + lVar22) == 1) &&
       (iVar24 = (this->LODResources).Array.ArrayNum, uVar21 = uVar19, 0 < iVar24)) {
      do {
        uVar17 = (uint)uVar19;
        uVar12 = 0;
        if ((int)uVar17 < iVar24) {
          uVar12 = ~uVar17 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar25)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        lVar22 = *(longlong *)((this->LODResources).Array.AllocatorInstance.Data + uVar21);
        puVar7 = *(undefined8 **)(lVar22 + 0x40);
        if (puVar7 != (undefined8 *)0x0) {
          (**(code **)*puVar7)(puVar7,1);
          *(undefined8 *)(lVar22 + 0x40) = 0;
        }
        iVar24 = (this->LODResources).Array.ArrayNum;
        uVar19 = (ulonglong)(uVar17 + 1);
        uVar21 = uVar21 + 8;
      } while ((int)(uVar17 + 1) < iVar24);
    }
  }
  if ((param_3) && ((param_1->field_0x28 & 1) != 0)) {
    FStripDataFlags::FStripDataFlags(local_88,param_1,'\0',&GOldestLoadablePackageFileUEVersion);
  }
  bVar23 = local_a3;
  if ((local_a3 & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((bVar23 & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((bVar23 & 4) != 0) {
    FThreadStats::AddMessage(FVar16,CycleScopeEnd);
  }
  if (cVar20 != '\0') {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// SerializeInlineDataRepresentations @ 14875a4e0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FStaticMeshRenderData::SerializeInlineDataRepresentations
          (FStaticMeshRenderData *this,FArchive *param_1,UStaticMesh *param_2)

{
  uint *puVar1;
  longlong lVar2;
  ulonglong *puVar3;
  undefined1 *puVar4;
  code *pcVar5;
  atomic<unsigned_int> aVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  undefined8 *puVar10;
  FArchive *pFVar11;
  uint uVar12;
  ulonglong uVar13;
  undefined8 *puVar14;
  FLumenCardBuildData *pFVar15;
  FLumenCardBuildData *pFVar16;
  ulonglong uVar17;
  undefined1 local_res20 [8];
  FStripDataFlags local_58 [2];
  uint local_54;
  FString local_50;
  
  FStripDataFlags::FStripDataFlags(local_58,param_1,'\0',&GOldestLoadablePackageFileUEVersion);
  if (((local_58[0].GlobalStripFlags & 2) == 0) && ((local_58[0].ClassStripFlags & 2) == 0)) {
    if ((param_1->field_0x28 & 4) != 0) {
      FCardRepresentationAsyncQueue::BlockUntilBuildComplete
                (GCardRepresentationAsyncQueue,param_2,false);
    }
    iVar9 = (this->LODResources).Array.ArrayNum;
    uVar13 = 0;
    uVar17 = uVar13;
    if (0 < iVar9) {
      do {
        puVar14 = (undefined8 *)0x0;
        uVar12 = (uint)uVar13;
        uVar8 = 0;
        if ((int)uVar12 < iVar9) {
          uVar8 = ~uVar12 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        lVar2 = *(longlong *)((this->LODResources).Array.AllocatorInstance.Data + uVar17);
        puVar3 = *(ulonglong **)&param_1->field_0x8;
        bVar7 = *(longlong *)(lVar2 + 0x48) != 0;
        puVar1 = (uint *)*puVar3 + 1;
        if ((uint *)puVar3[1] < puVar1) {
          local_54 = 0;
          if ((param_1->field_0x28 & 1) == 0) {
            local_54 = (uint)(*(longlong *)(lVar2 + 0x48) != 0);
          }
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_54);
          if (1 < local_54) {
            FArchiveState::SetError((FArchiveState *)param_1);
          }
          uVar8 = local_54;
          if ((param_1->field_0x28 & 1) != 0) goto LAB_14875a62f;
        }
        else {
          uVar8 = *(uint *)*puVar3;
          *puVar3 = (ulonglong)puVar1;
LAB_14875a62f:
          bVar7 = uVar8 != 0;
        }
        if (bVar7) {
          puVar10 = *(undefined8 **)(lVar2 + 0x48);
          if (*(undefined8 **)(lVar2 + 0x48) == (undefined8 *)0x0) {
            if (((param_1->field_0x28 & 1) == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Ar.IsLoading()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\StaticMesh.cpp"
                                   ,0x998,L""), bVar7)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            puVar10 = ::operator_new(0x98);
            if (puVar10 != (undefined8 *)0x0) {
              *puVar10 = &___7FCardRepresentationData__6B_;
              puVar10[1] = 0;
              puVar10[2] = 0;
              puVar10[3] = 0;
              puVar10[4] = 0;
              puVar10[5] = 0;
              puVar10[6] = 0;
              *(undefined1 *)(puVar10 + 7) = 0;
              *(undefined8 *)((longlong)puVar10 + 0x39) = 0;
              puVar10[10] = 0;
              puVar10[0xc] = 0;
              puVar10[0xe] = 0;
              puVar10[0x10] = 0;
              puVar10[9] = 0;
              puVar10[0xb] = 0;
              puVar10[0xd] = 0;
              puVar10[0xf] = 0;
              *(undefined4 *)(puVar10 + 0x11) = 0;
              *(undefined4 *)(puVar10 + 0x12) = 0;
              LOCK();
              UNLOCK();
              aVar6 = (atomic<unsigned_int>)
                      ((int)`public:___cdecl_FCardRepresentationData::FCardRepresentationData(void)___ptr64'
                            ::__l2::NextCardRepresentationId + 1);
              *(atomic<unsigned_int> *)(puVar10 + 0x12) =
                   `public:___cdecl_FCardRepresentationData::FCardRepresentationData(void)___ptr64'
                   ::__l2::NextCardRepresentationId;
              `public:___cdecl_FCardRepresentationData::FCardRepresentationData(void)___ptr64'::__l2
              ::NextCardRepresentationId = aVar6;
              puVar14 = puVar10;
            }
            *(undefined8 **)(lVar2 + 0x48) = puVar14;
            puVar10 = puVar14;
          }
          iVar9 = _finite((double)puVar10[1]);
          if ((((iVar9 == 0) || (iVar9 = _finite((double)puVar10[2]), iVar9 == 0)) ||
              (iVar9 = _finite((double)puVar10[3]), iVar9 == 0)) ||
             (((iVar9 = _finite((double)puVar10[4]), iVar9 == 0 ||
               (iVar9 = _finite((double)puVar10[5]), iVar9 == 0)) ||
              (iVar9 = _finite((double)puVar10[6]), iVar9 == 0)))) {
LAB_14875a7a4:
            if (3 < (byte)LogStaticMesh._0_1_) {
              if (param_2 == (UStaticMesh *)0x0) {
                ::FString::FString(&local_50,L"None");
              }
              else {
                UObjectBaseUtility::GetPathName
                          ((UObjectBaseUtility *)param_2,&local_50,(UObject *)0x0);
              }
              UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogStaticMesh);
              if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_50.Data.AllocatorInstance.Data);
              }
            }
          }
          else {
            pFVar15 = (FLumenCardBuildData *)puVar10[9];
            pFVar16 = pFVar15 + *(int *)(puVar10 + 10);
            for (; pFVar15 != pFVar16; pFVar15 = pFVar15 + 1) {
              bVar7 = `FMeshCardsBuildData::ContainsNaN'::__l2::<lambda_1>::operator()
                                (local_res20,pFVar15);
              if (bVar7) {
                if (pFVar15 != (FLumenCardBuildData *)0x0) goto LAB_14875a7a4;
                break;
              }
            }
          }
          lVar2 = *(longlong *)(lVar2 + 0x48);
          pFVar11 = UE::Math::operator<<(param_1,(TVector<double> *)(lVar2 + 8));
          pFVar11 = UE::Math::operator<<(pFVar11,(TVector<double> *)(lVar2 + 0x20));
          puVar4 = (undefined1 *)**(undefined8 **)&pFVar11->field_0x8;
          if ((undefined1 *)(*(undefined8 **)&pFVar11->field_0x8)[1] < puVar4 + 1) {
            (**(code **)(*(longlong *)pFVar11 + 0x188))(pFVar11,(undefined1 *)(lVar2 + 0x38),1);
          }
          else {
            *(undefined1 *)(lVar2 + 0x38) = *puVar4;
            **(longlong **)&pFVar11->field_0x8 = **(longlong **)&pFVar11->field_0x8 + 1;
          }
          ::operator<<(param_1,(bool *)(lVar2 + 0x40));
          TArrayPrivateFriend::Serialize<FLumenCardBuildData,TSizedDefaultAllocator<32>_>
                    (param_1,(TArray<FLumenCardBuildData,TSizedDefaultAllocator<32>_> *)
                             (lVar2 + 0x48));
        }
        uVar13 = (ulonglong)(uVar12 + 1);
        iVar9 = (this->LODResources).Array.ArrayNum;
        uVar17 = uVar17 + 8;
      } while ((int)(uVar12 + 1) < iVar9);
    }
  }
  return;
}

