// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// FinalizeCommand @ 144f0c540

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */

void __thiscall
FCachedPassMeshDrawListContextImmediate::FinalizeCommand
          (FCachedPassMeshDrawListContextImmediate *this,FMeshBatch *param_1,int param_2,
          FMeshDrawCommandPrimitiveIdInfo *param_3,ERasterizerFillMode param_4,
          ERasterizerCullMode param_5,FMeshDrawCommandSortKey param_6,
          EFVisibleMeshDrawCommandFlags param_7,FGraphicsMinimalPipelineStateInitializer *param_8,
          FMeshProcessorShaders *param_9,FMeshDrawCommand *param_10)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  TSparseArrayBase<408,8,FDefaultSparseArrayAllocator> *this_00;
  longlong lVar5;
  bool local_28 [4];
  uint local_24;
  FSparseArrayAllocationInfo local_20;
  
  FCachedPassMeshDrawListContext::FinalizeCommandCommon
            ((FCachedPassMeshDrawListContext *)this,param_1,param_2,param_4,param_5,param_6,param_7,
             param_8,param_9,param_10);
  if (this->field_0x1cd == '\0') {
    this_00 = (TSparseArrayBase<408,8,FDefaultSparseArrayAllocator> *)
              (*(longlong *)&this->field_0x8 + 0x12d8 + (ulonglong)(byte)this->field_0x1cc * 0x40);
    TSparseArrayBase<408,8,FDefaultSparseArrayAllocator>::AddUninitializedAtLowestFreeIndex
              (this_00,&local_20,(int *)(this_00 + 1));
    if (local_20.Pointer != (FMeshDrawCommand *)0x0) {
      FMeshDrawCommand::FMeshDrawCommand(local_20.Pointer,param_10);
    }
    *(int *)&this->field_0x1b0 = local_20.Index;
    return;
  }
  local_28[0] = false;
  local_28[1] = false;
  local_28[2] = false;
  local_28[3] = false;
  lVar5 = (ulonglong)(byte)this->field_0x1cc * 0x78 + *(longlong *)&this->field_0x8;
  uVar4 = FMeshDrawCommand::GetDynamicInstancingHash(param_10);
  Experimental::RobinHoodHashTable_Private::
  TRobinHoodHashTable<FMeshDrawCommand,FMeshDrawCommandCount,MeshDrawCommandKeyFuncs,TSizedDefaultAllocator<32>_>
  ::FindOrUpdateIdByHashInternal<0,FMeshDrawCommand_const_&,FMeshDrawCommandCount>
            ((TRobinHoodHashTable<FMeshDrawCommand,FMeshDrawCommandCount,MeshDrawCommandKeyFuncs,TSizedDefaultAllocator<32>_>
              *)(lVar5 + 0x90),(FHashType)(uint)&local_24,
             (FMeshDrawCommand *)(ulonglong)(uVar4 & 0x7fffffff),(FMeshDrawCommandCount *)param_10,
             local_28);
  uVar4 = 0;
  if ((int)local_24 < *(int *)(lVar5 + 0x98)) {
    uVar4 = ~local_24 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)(int)local_24 * 0x1a0 + 0x198 + *(longlong *)(lVar5 + 0x90));
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  *(uint *)&this->field_0x1b4 = local_24;
  return;
}

