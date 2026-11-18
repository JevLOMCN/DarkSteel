// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Landscape
// Functions: 6

// CanApplyStreamableRenderAssetScaleFactor @ 145f843c0

bool __thiscall Nanite::FSceneProxy::CanApplyStreamableRenderAssetScaleFactor(FSceneProxy *this)

{
  return true;
}

// GetCoarseMeshStreamingHandle @ 145f8e910

short __thiscall Nanite::FSceneProxy::GetCoarseMeshStreamingHandle(FSceneProxy *this)

{
  return this->CoarseMeshStreamingHandle;
}

// GetLCIs @ 145f925c0

void __thiscall
Nanite::FSceneProxy::GetLCIs
          (FSceneProxy *this,
          TArray<FLightCacheInterface_*,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
          *param_1)

{
  ForElementType<FLightCacheInterface_*> FVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  ForElementType<FLightCacheInterface_*> FVar5;
  FMeshInfo *local_18 [2];
  
  local_18[0] = &this->MeshInfo;
  FVar1 = (param_1->AllocatorInstance).SecondaryData;
  FVar5 = (ForElementType<FLightCacheInterface_*>)param_1;
  if (FVar1 != (ForElementType<FLightCacheInterface_*>)0x0) {
    FVar5 = FVar1;
  }
  if ((ulonglong)FVar5 <= local_18) {
    FVar5 = (ForElementType<FLightCacheInterface_*>)param_1;
    if (FVar1 != (ForElementType<FLightCacheInterface_*>)0x0) {
      FVar5 = FVar1;
    }
    if ((local_18 < (FMeshInfo **)((longlong)FVar5 + (longlong)param_1->ArrayMax * 8)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = param_1->ArrayNum;
  if (iVar4 == param_1->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FLightCacheInterface_*>_>
                      (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar4 + 1;
  FVar1 = (param_1->AllocatorInstance).SecondaryData;
  if (FVar1 != (ForElementType<FLightCacheInterface_*>)0x0) {
    param_1 = (TArray<FLightCacheInterface_*,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
               *)FVar1;
  }
  *(FMeshInfo **)((longlong)param_1 + (longlong)iVar4 * 8) = local_18[0];
  return;
}

// GetMeshPaintTextureDescriptor @ 145f93140

TIntVector2<unsigned_int> __thiscall
Nanite::FSceneProxy::GetMeshPaintTextureDescriptor(FSceneProxy *this)

{
  TIntVector2<unsigned_int>_u_0 in_RDX;
  
  *(TIntVector2<unsigned_int>_u_0 *)in_RDX = (this->MeshPaintTextureDescriptor).field0_0x0;
  return (TIntVector2<unsigned_int>)in_RDX;
}

// IsRayTracingRelevant @ 145f97f80

bool __thiscall Nanite::FSceneProxy::IsRayTracingRelevant(FSceneProxy *this)

{
  return true;
}

// IsRayTracingStaticRelevant @ 145f97f90

bool __thiscall Nanite::FSceneProxy::IsRayTracingStaticRelevant(FSceneProxy *this)

{
  return (bool)(~this->bDynamicRayTracingGeometry & 1);
}

