// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 2

// AddCommand @ 145308780

FRayTracingMeshCommand * __thiscall
FDynamicRayTracingMeshCommandContext::AddCommand
          (FDynamicRayTracingMeshCommandContext *this,FRayTracingMeshCommand *param_1)

{
  TChunkedArray<FRayTracingMeshCommand,16384,TSizedDefaultAllocator<32>_> *pTVar1;
  code *pcVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FRayTracingMeshCommand *pFVar7;
  
  iVar5 = TChunkedArray<FRayTracingMeshCommand,16384,TSizedDefaultAllocator<32>_>::AddElement
                    (this->DynamicCommandStorage,param_1);
  pTVar1 = this->DynamicCommandStorage;
  uVar3 = iVar5 / 0x6b;
  uVar6 = 0;
  if ((int)uVar3 < (pTVar1->Chunks).Array.ArrayNum) {
    uVar6 = ~uVar3 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pFVar7 = (FRayTracingMeshCommand *)(*pcVar2)();
      return pFVar7;
    }
  }
  pFVar7 = (FRayTracingMeshCommand *)
           (*(longlong *)((pTVar1->Chunks).Array.AllocatorInstance.Data + (longlong)(int)uVar3 * 8)
           + (ulonglong)(uint)(iVar5 % 0x6b) * 0x98);
  pFVar7->GeometrySegmentIndex = this->GeometrySegmentIndex;
  return pFVar7;
}

// FinalizeCommand @ 1453864c0

void __thiscall
FDynamicRayTracingMeshCommandContext::FinalizeCommand
          (FDynamicRayTracingMeshCommandContext *this,FRayTracingMeshCommand *param_1)

{
  FRayTracingSBTAllocation *this_00;
  TArray<FRayTracingShaderBindingData,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
  *pTVar1;
  FRayTracingShaderBindingData *pFVar2;
  FRayTracingShaderBindingData *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FRayTracingShaderBindingData local_48;
  FRayTracingShaderBindingData local_28;
  
  if ((this->GeometrySegmentIndex != param_1->GeometrySegmentIndex) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("GeometrySegmentIndex == RayTracingMeshCommand.GeometrySegmentIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\RayTracing\\RayTracingMeshDrawCommands.cpp"
                         ,0x11,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  this_00 = this->SBTAllocation;
  if (this_00 != (FRayTracingSBTAllocation *)0x0) {
    if ((this_00->AllocatedLayers & Base) != None) {
      bVar5 = param_1->bDecal;
      local_48.SBTRecordIndex =
           FRayTracingSBTAllocation::GetRecordIndex(this_00,Base,param_1->GeometrySegmentIndex);
      local_48.RayTracingGeometry = this->RayTracingGeometry;
      local_48.RayTracingMeshCommandIndex = 0xffffffff;
      local_48.BindingType = Transient;
      local_48.RayTracingMeshCommand = param_1;
      local_48.bHidden = bVar5;
      if ((local_48.RayTracingGeometry == (FRHIRayTracingGeometry *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("RayTracingGeometry != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\RayTracingMeshDrawCommands.h"
                             ,0xb6,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pTVar1 = this->ShaderBindings;
      pFVar2 = (pTVar1->AllocatorInstance).Data;
      if (((pFVar2 <= &local_48) && (&local_48 < pFVar2 + pTVar1->ArrayMax)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar6 = pTVar1->ArrayNum;
      if (iVar6 == pTVar1->ArrayMax) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FRayTracingShaderBindingData>_>
                          (0x820,&pTVar1->AllocatorInstance,&pTVar1->ArrayMax);
      }
      pTVar1->ArrayNum = iVar6 + 1;
      pFVar3 = (pTVar1->AllocatorInstance).Data;
      pFVar2 = pFVar3 + iVar6;
      pFVar2->RayTracingMeshCommand = local_48.RayTracingMeshCommand;
      pFVar2->RayTracingGeometry = local_48.RayTracingGeometry;
      pFVar3 = pFVar3 + iVar6;
      pFVar3->RayTracingMeshCommandIndex = local_48.RayTracingMeshCommandIndex;
      pFVar3->SBTRecordIndex = local_48.SBTRecordIndex;
      *(ulonglong *)(&pFVar3->RayTracingMeshCommandIndex + 2) =
           CONCAT62(local_48._26_6_,CONCAT11(local_48.bHidden,local_48.BindingType));
    }
    if ((this->SBTAllocation->AllocatedLayers & Decals) != None) {
      bVar5 = (bool)(~param_1->bDecal & 1);
      local_28.SBTRecordIndex =
           FRayTracingSBTAllocation::GetRecordIndex
                     (this->SBTAllocation,Decals,param_1->GeometrySegmentIndex);
      local_28.RayTracingGeometry = this->RayTracingGeometry;
      local_28.RayTracingMeshCommandIndex = 0xffffffff;
      local_28.BindingType = Transient;
      local_28.RayTracingMeshCommand = param_1;
      local_28.bHidden = bVar5;
      if ((local_28.RayTracingGeometry == (FRHIRayTracingGeometry *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("RayTracingGeometry != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\RayTracingMeshDrawCommands.h"
                             ,0xb6,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pTVar1 = this->ShaderBindings;
      pFVar2 = (pTVar1->AllocatorInstance).Data;
      if (((pFVar2 <= &local_28) && (&local_28 < pFVar2 + pTVar1->ArrayMax)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar6 = pTVar1->ArrayNum;
      if (iVar6 == pTVar1->ArrayMax) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FRayTracingShaderBindingData>_>
                          (0x820,&pTVar1->AllocatorInstance,&pTVar1->ArrayMax);
      }
      pTVar1->ArrayNum = iVar6 + 1;
      pFVar3 = (pTVar1->AllocatorInstance).Data;
      pFVar2 = pFVar3 + iVar6;
      pFVar2->RayTracingMeshCommand = local_28.RayTracingMeshCommand;
      pFVar2->RayTracingGeometry = local_28.RayTracingGeometry;
      pFVar3 = pFVar3 + iVar6;
      pFVar3->RayTracingMeshCommandIndex = local_28.RayTracingMeshCommandIndex;
      pFVar3->SBTRecordIndex = local_28.SBTRecordIndex;
      *(ulonglong *)(&pFVar3->RayTracingMeshCommandIndex + 2) =
           CONCAT62(local_28._26_6_,CONCAT11(local_28.bHidden,local_28.BindingType));
    }
  }
  return;
}

