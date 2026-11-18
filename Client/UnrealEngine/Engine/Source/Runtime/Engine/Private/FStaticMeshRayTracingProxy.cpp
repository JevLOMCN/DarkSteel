// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// ~FStaticMeshRayTracingProxy @ 1487144e0

void __thiscall
FStaticMeshRayTracingProxy::~FStaticMeshRayTracingProxy(FStaticMeshRayTracingProxy *this)

{
  TArray<FStaticMeshVertexFactories,TSizedDefaultAllocator<32>_> *pTVar1;
  FScriptContainerElement *pFVar2;
  
  if ((this->bUsingRenderingLODs == false) &&
     (pTVar1 = this->LODVertexFactories,
     pTVar1 != (TArray<FStaticMeshVertexFactories,TSizedDefaultAllocator<32>_> *)0x0)) {
    DestructItems<FStaticMeshVertexFactories,int>
              ((FStaticMeshVertexFactories *)(pTVar1->AllocatorInstance).Data,pTVar1->ArrayNum);
    pFVar2 = (pTVar1->AllocatorInstance).Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    ::operator_delete(pTVar1,0x10);
  }
  TIndirectArray<FStaticMeshRayTracingProxyLOD,TSizedDefaultAllocator<32>_>::
  ~TIndirectArray<FStaticMeshRayTracingProxyLOD,TSizedDefaultAllocator<32>_>(&this->LODs);
  return;
}

// InitResources @ 1487478e0

void __thiscall
FStaticMeshRayTracingProxy::InitResources(FStaticMeshRayTracingProxy *this,UStaticMesh *param_1)

{
  TArray<FStaticMeshVertexFactories,TSizedDefaultAllocator<32>_> *pTVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  
  iVar8 = (this->LODs).Array.ArrayNum;
  uVar6 = 0;
  if (0 < iVar8) {
    lVar9 = 0;
    do {
      uVar7 = ~uVar6 >> 0x1f;
      uVar5 = 0;
      if ((int)uVar6 < iVar8) {
        uVar5 = uVar7;
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
      FStaticMeshRayTracingProxyLOD::InitResources
                (*(FStaticMeshRayTracingProxyLOD **)
                  ((this->LODs).Array.AllocatorInstance.Data + lVar9),param_1,uVar6);
      if (this->bUsingRenderingLODs == false) {
        pTVar1 = this->LODVertexFactories;
        uVar5 = 0;
        if ((int)uVar6 < pTVar1->ArrayNum) {
          uVar5 = uVar7;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar2 = (pTVar1->AllocatorInstance).Data;
        uVar5 = 0;
        if ((int)uVar6 < (this->LODs).Array.ArrayNum) {
          uVar5 = uVar7;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        FStaticMeshVertexFactories::InitResources
                  ((FStaticMeshVertexFactories *)(pFVar2 + (longlong)(int)uVar6 * 0x470),
                   *(FStaticMeshVertexBuffers **)
                    (*(longlong *)((this->LODs).Array.AllocatorInstance.Data + lVar9) + 0x18),uVar6,
                   param_1);
      }
      iVar8 = (this->LODs).Array.ArrayNum;
      uVar6 = uVar6 + 1;
      lVar9 = lVar9 + 8;
    } while ((int)uVar6 < iVar8);
  }
  return;
}

// ReleaseResources @ 1487525a0

void __thiscall FStaticMeshRayTracingProxy::ReleaseResources(FStaticMeshRayTracingProxy *this)

{
  int iVar1;
  longlong lVar2;
  TArray<FStaticMeshVertexFactories,TSizedDefaultAllocator<32>_> *pTVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  FRenderResource *pFVar9;
  longlong lVar10;
  
  iVar1 = (this->LODs).Array.ArrayNum;
  uVar7 = 0;
  if (0 < iVar1) {
    lVar8 = 0;
    lVar10 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar7 < iVar1) {
        uVar6 = ~uVar7 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar2 = *(longlong *)((this->LODs).Array.AllocatorInstance.Data + lVar10);
      if ((*(byte *)(lVar2 + 0x5c) & 1) != 0) {
        BeginReleaseResource(*(FRenderResource **)(lVar2 + 8),(FRenderCommandPipe *)0x0);
      }
      if ((*(byte *)(lVar2 + 0x5c) & 2) != 0) {
        BeginReleaseResource(*(FRenderResource **)(lVar2 + 0x20),(FRenderCommandPipe *)0x0);
        BeginReleaseResource(*(FRenderResource **)(lVar2 + 0x18),(FRenderCommandPipe *)0x0);
        BeginReleaseResource
                  ((FRenderResource *)(*(longlong *)(lVar2 + 0x18) + 0xb8),(FRenderCommandPipe *)0x0
                  );
        BeginReleaseResource
                  ((FRenderResource *)(*(longlong *)(lVar2 + 0x18) + 0x108),
                   (FRenderCommandPipe *)0x0);
      }
      if (this->bUsingRenderingLODs == false) {
        pTVar3 = this->LODVertexFactories;
        uVar6 = 0;
        if ((int)uVar7 < pTVar3->ArrayNum) {
          uVar6 = ~uVar7 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar9 = (FRenderResource *)((pTVar3->AllocatorInstance).Data + lVar8);
        BeginReleaseResource(pFVar9,(FRenderCommandPipe *)0x0);
        BeginReleaseResource
                  ((FRenderResource *)&pFVar9[0x11].ResourceName,(FRenderCommandPipe *)0x0);
        if ((FRenderResource *)pFVar9[0x23]._padding_ != (FRenderResource *)0x0) {
          BeginReleaseResource((FRenderResource *)pFVar9[0x23]._padding_,(FRenderCommandPipe *)0x0);
        }
        if (pFVar9[0x23].OwnerName != (FName)0x0) {
          BeginReleaseResource((FRenderResource *)pFVar9[0x23].OwnerName,(FRenderCommandPipe *)0x0);
        }
      }
      iVar1 = (this->LODs).Array.ArrayNum;
      uVar7 = uVar7 + 1;
      lVar10 = lVar10 + 8;
      lVar8 = lVar8 + 0x470;
    } while ((int)uVar7 < iVar1);
  }
  return;
}

// Serialize @ 1487573f0

void __thiscall
FStaticMeshRayTracingProxy::Serialize
          (FStaticMeshRayTracingProxy *this,FArchive *param_1,UObject *param_2,
          FStaticMeshRenderData *param_3,bool param_4)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  TArray<FStaticMeshVertexFactories,TSizedDefaultAllocator<32>_> *pTVar5;
  FStaticMeshVertexFactories *this_00;
  int iVar6;
  TArray<FStaticMeshVertexFactories,TSizedDefaultAllocator<32>_> *pTVar7;
  uint uVar8;
  uint uVar9;
  TArray<FStaticMeshVertexFactories,TSizedDefaultAllocator<32>_> *pTVar10;
  longlong lVar11;
  FStripDataFlags local_res8 [4];
  
  FStripDataFlags::FStripDataFlags(local_res8,param_1,'\0',&GOldestLoadablePackageFileUEVersion);
  if (param_2 != (UObject *)0x0) {
    UStaticMesh::StaticClass();
  }
  ::operator<<(param_1,&this->bUsingRenderingLODs);
  if (((local_res8[0].GlobalStripFlags & 2) == 0) &&
     (TIndirectArray<FStaticMeshRayTracingProxyLOD,TSizedDefaultAllocator<32>_>::Serialize
                (&this->LODs,param_1,param_2), (param_1->field_0x28 & 1) != 0)) {
    if (this->bUsingRenderingLODs != false) {
      if (((this->LODs).Array.ArrayNum != (param_3->LODResources).Array.ArrayNum) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("LODs.Num() == LODResources.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\StaticMesh.cpp"
                             ,0x8f8,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar6 = (this->LODs).Array.ArrayNum;
      uVar9 = 0;
      if (0 < iVar6) {
        lVar11 = 0;
        do {
          uVar8 = ~uVar9 >> 0x1f;
          uVar4 = 0;
          if ((int)uVar9 < iVar6) {
            uVar4 = uVar8;
          }
          if ((uVar4 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          lVar1 = *(longlong *)((this->LODs).Array.AllocatorInstance.Data + lVar11);
          if (((*(byte *)(lVar1 + 0x5c) & 2) != 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("RayTracingLOD.bOwnsBuffers == false",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\StaticMesh.cpp"
                                 ,0x8fe,
                                 L"FStaticMeshRayTracingProxyLOD shouldn\'t own VB/IB/etc when bUsingRenderingLODs since they\'re owned by FStaticMeshLODResources"
                                ), bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          uVar4 = 0;
          if ((int)uVar9 < (param_3->LODResources).Array.ArrayNum) {
            uVar4 = uVar8;
          }
          if ((uVar4 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          *(longlong *)(lVar1 + 0x10) =
               *(longlong *)((param_3->LODResources).Array.AllocatorInstance.Data + lVar11) + 0x10;
          uVar4 = 0;
          if ((int)uVar9 < (param_3->LODResources).Array.ArrayNum) {
            uVar4 = uVar8;
          }
          if ((uVar4 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          *(longlong *)(lVar1 + 0x18) =
               *(longlong *)((param_3->LODResources).Array.AllocatorInstance.Data + lVar11) + 0xd0;
          uVar4 = 0;
          if ((int)uVar9 < (param_3->LODResources).Array.ArrayNum) {
            uVar4 = uVar8;
          }
          if ((uVar4 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          *(longlong *)(lVar1 + 0x20) =
               *(longlong *)((param_3->LODResources).Array.AllocatorInstance.Data + lVar11) + 0x228;
          if ((*(byte *)(lVar1 + 0x5c) & 1) == 0) {
            uVar4 = 0;
            if ((int)uVar9 < (param_3->LODResources).Array.ArrayNum) {
              uVar4 = uVar8;
            }
            if ((uVar4 == 0) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar3)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            *(undefined8 *)(lVar1 + 8) =
                 *(undefined8 *)
                  (*(longlong *)((param_3->LODResources).Array.AllocatorInstance.Data + lVar11) +
                  0x50);
          }
          iVar6 = (this->LODs).Array.ArrayNum;
          uVar9 = uVar9 + 1;
          lVar11 = lVar11 + 8;
        } while ((int)uVar9 < iVar6);
      }
      this->LODVertexFactories = &param_3->LODVertexFactories;
      return;
    }
    pTVar5 = ::operator_new(0x10);
    pTVar7 = (TArray<FStaticMeshVertexFactories,TSizedDefaultAllocator<32>_> *)0x0;
    pTVar10 = pTVar7;
    if (pTVar5 != (TArray<FStaticMeshVertexFactories,TSizedDefaultAllocator<32>_> *)0x0) {
      (pTVar5->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      pTVar5->ArrayNum = 0;
      pTVar5->ArrayMax = 0;
      pTVar10 = pTVar5;
    }
    uVar9 = (this->LODs).Array.ArrayNum;
    this->LODVertexFactories = pTVar10;
    if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar9);
    }
    DestructItems<FStaticMeshVertexFactories,int>
              ((FStaticMeshVertexFactories *)(pTVar10->AllocatorInstance).Data,pTVar10->ArrayNum);
    pTVar10->ArrayNum = 0;
    if (pTVar10->ArrayMax != uVar9) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x470,8,uVar9,&pTVar10->AllocatorInstance,0,&pTVar10->ArrayMax);
    }
    if (0 < (this->LODs).Array.ArrayNum) {
      do {
        this_00 = operator_new<FStaticMeshVertexFactories,TSizedDefaultAllocator<32>_>
                            (0x470,this->LODVertexFactories);
        if (this_00 != (FStaticMeshVertexFactories *)0x0) {
          FStaticMeshVertexFactories::FStaticMeshVertexFactories(this_00,GMaxRHIFeatureLevel);
        }
        uVar9 = (int)pTVar7 + 1;
        pTVar7 = (TArray<FStaticMeshVertexFactories,TSizedDefaultAllocator<32>_> *)(ulonglong)uVar9;
      } while ((int)uVar9 < (this->LODs).Array.ArrayNum);
    }
  }
  return;
}

