// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 14

// TChunkedArray<FMeshDrawCommand,16384,TSizedDefaultAllocator<32>_> @ 14472cc00

TChunkedArray<FMeshDrawCommand,16384,TSizedDefaultAllocator<32>_> * __thiscall
TChunkedArray<FMeshDrawCommand,16384,TSizedDefaultAllocator<32>_>::
TChunkedArray<FMeshDrawCommand,16384,TSizedDefaultAllocator<32>_>
          (TChunkedArray<FMeshDrawCommand,16384,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  void *pvVar7;
  TChunkedArray<FMeshDrawCommand,16384,TSizedDefaultAllocator<32>_> *pTVar8;
  undefined4 *puVar9;
  longlong lVar10;
  ulonglong uVar11;
  void *local_18 [2];
  
  this->NumElements = param_1;
  (this->Chunks).Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Chunks).Array.ArrayNum = 0;
  piVar1 = &(this->Chunks).Array.ArrayMax;
  *piVar1 = 0;
  uVar4 = (param_1 + 0x27) / 0x28;
  uVar11 = (ulonglong)uVar4;
  if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar4);
  }
  if ((uVar4 != 0) &&
     (UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,uVar4,(ForAnyElementType *)this,0,piVar1), 0 < (int)uVar4)) {
    do {
      pvVar7 = ::operator_new(0x3fc0);
      local_18[0] = (void *)0x0;
      if (pvVar7 != (void *)0x0) {
        lVar10 = 0x28;
        puVar9 = (undefined4 *)((longlong)pvVar7 + 0x18);
        do {
          *(undefined8 *)(puVar9 + -2) = 0;
          *puVar9 = 0;
          puVar9[1] = 2;
          *(undefined8 *)(puVar9 + 2) = 0;
          *(undefined8 *)(puVar9 + 4) = 0;
          *(undefined8 *)(puVar9 + 6) = 0;
          *(undefined8 *)(puVar9 + 8) = 0;
          *(undefined8 *)(puVar9 + 10) = 0;
          *(undefined8 *)(puVar9 + 0xc) = 0;
          *(undefined8 *)(puVar9 + 0xe) = 0;
          *(undefined8 *)(puVar9 + 0x10) = 0;
          *(undefined8 *)(puVar9 + 0x12) = 0;
          *(undefined8 *)(puVar9 + 0x14) = 0;
          puVar9[0x16] = 0;
          *(undefined8 *)(puVar9 + 0x2e) = 0;
          puVar9[0x30] = 0;
          puVar9[0x31] = 7;
          puVar9[0x34] = 0;
          *(undefined8 *)(puVar9 + 0x40) = 0;
          *(undefined8 *)(puVar9 + 0x42) = 0;
          *(undefined8 *)(puVar9 + 0x44) = 0;
          *(undefined8 *)(puVar9 + 0x46) = 0;
          *(undefined8 *)(puVar9 + 0x4c) = 0;
          *(undefined8 *)(puVar9 + 0x4e) = 0;
          *(undefined8 *)(puVar9 + 0x56) = 0;
          *(undefined8 *)(puVar9 + 0x5c) = 0;
          puVar9 = puVar9 + 0x66;
          lVar10 = lVar10 + -1;
          local_18[0] = pvVar7;
        } while (lVar10 != 0);
      }
      pFVar2 = (this->Chunks).Array.AllocatorInstance.Data;
      if (((pFVar2 <= (FScriptContainerElement *)local_18) &&
          ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)*piVar1 * 8)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar3 = (code *)swi(3);
        pTVar8 = (TChunkedArray<FMeshDrawCommand,16384,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
        return pTVar8;
      }
      iVar6 = (this->Chunks).Array.ArrayNum;
      if (iVar6 == *piVar1) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,(ForAnyElementType *)this,piVar1);
      }
      (this->Chunks).Array.ArrayNum = iVar6 + 1;
      *(void **)((this->Chunks).Array.AllocatorInstance.Data + (longlong)iVar6 * 8) = local_18[0];
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
  }
  return this;
}

// Add @ 144737300

int __thiscall
TChunkedArray<FMeshDrawCommand,16384,TSizedDefaultAllocator<32>_>::Add
          (TChunkedArray<FMeshDrawCommand,16384,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  int iVar4;
  bool bVar5;
  int iVar6;
  void *pvVar7;
  undefined4 *puVar8;
  longlong lVar9;
  ulonglong uVar10;
  void *local_18 [2];
  
  if ((param_1 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Count>=0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ChunkedArray.h"
                         ,0xf4,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    iVar6 = (*pcVar3)();
    return iVar6;
  }
  iVar1 = this->NumElements;
  iVar6 = iVar1 + param_1;
  this->NumElements = iVar6;
  iVar4 = (iVar6 + 0x27) / 0x28;
  iVar6 = (this->Chunks).Array.ArrayNum;
  if (iVar6 < iVar4) {
    uVar10 = (ulonglong)(uint)(iVar4 - iVar6);
    do {
      pvVar7 = ::operator_new(0x3fc0);
      local_18[0] = (void *)0x0;
      if (pvVar7 != (void *)0x0) {
        lVar9 = 0x28;
        puVar8 = (undefined4 *)((longlong)pvVar7 + 0x18);
        do {
          *(undefined8 *)(puVar8 + -2) = 0;
          *puVar8 = 0;
          puVar8[1] = 2;
          *(undefined8 *)(puVar8 + 2) = 0;
          *(undefined8 *)(puVar8 + 4) = 0;
          *(undefined8 *)(puVar8 + 6) = 0;
          *(undefined8 *)(puVar8 + 8) = 0;
          *(undefined8 *)(puVar8 + 10) = 0;
          *(undefined8 *)(puVar8 + 0xc) = 0;
          *(undefined8 *)(puVar8 + 0xe) = 0;
          *(undefined8 *)(puVar8 + 0x10) = 0;
          *(undefined8 *)(puVar8 + 0x12) = 0;
          *(undefined8 *)(puVar8 + 0x14) = 0;
          puVar8[0x16] = 0;
          *(undefined8 *)(puVar8 + 0x2e) = 0;
          puVar8[0x30] = 0;
          puVar8[0x31] = 7;
          puVar8[0x34] = 0;
          *(undefined8 *)(puVar8 + 0x40) = 0;
          *(undefined8 *)(puVar8 + 0x42) = 0;
          *(undefined8 *)(puVar8 + 0x44) = 0;
          *(undefined8 *)(puVar8 + 0x46) = 0;
          *(undefined8 *)(puVar8 + 0x4c) = 0;
          *(undefined8 *)(puVar8 + 0x4e) = 0;
          *(undefined8 *)(puVar8 + 0x56) = 0;
          *(undefined8 *)(puVar8 + 0x5c) = 0;
          puVar8 = puVar8 + 0x66;
          lVar9 = lVar9 + -1;
          local_18[0] = pvVar7;
        } while (lVar9 != 0);
      }
      pFVar2 = (this->Chunks).Array.AllocatorInstance.Data;
      if (((pFVar2 <= (FScriptContainerElement *)local_18) &&
          ((FScriptContainerElement *)local_18 <
           pFVar2 + (longlong)(this->Chunks).Array.ArrayMax * 8)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar3 = (code *)swi(3);
        iVar6 = (*pcVar3)();
        return iVar6;
      }
      iVar6 = (this->Chunks).Array.ArrayNum;
      if (iVar6 == (this->Chunks).Array.ArrayMax) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,(ForAnyElementType *)this,&(this->Chunks).Array.ArrayMax);
      }
      pFVar2 = (this->Chunks).Array.AllocatorInstance.Data;
      (this->Chunks).Array.ArrayNum = iVar6 + 1;
      *(void **)(pFVar2 + (longlong)iVar6 * 8) = local_18[0];
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  return iVar1;
}

// AddElement @ 14473aae0

/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

int __thiscall
TChunkedArray<FMeshDrawCommand,16384,TSizedDefaultAllocator<32>_>::AddElement
          (TChunkedArray<FMeshDrawCommand,16384,TSizedDefaultAllocator<32>_> *this,
          FMeshDrawCommand *param_1)

{
  int *piVar1;
  code *pcVar2;
  uint uVar3;
  undefined8 uVar4;
  FShaderMapBase *pFVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  FMeshDrawShaderBindings *_Dst;
  FMeshDrawShaderBindings *this_00;
  ForElementType<FVertexInputStream> _Src;
  
  iVar7 = Add(this,1);
  uVar3 = iVar7 / 0x28;
  uVar8 = 0;
  if ((int)uVar3 < (this->Chunks).Array.ArrayNum) {
    uVar8 = ~uVar3 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      iVar7 = (*pcVar2)();
      return iVar7;
    }
  }
  this_00 = (FMeshDrawShaderBindings *)
            (*(longlong *)((this->Chunks).Array.AllocatorInstance.Data + (longlong)(int)uVar3 * 8) +
            (ulonglong)(uint)(iVar7 % 0x28) * 0x198);
  if (this_00 != (FMeshDrawShaderBindings *)0x0) {
    (this_00->ShaderLayouts).AllocatorInstance.SecondaryData =
         (ForElementType<FMeshDrawShaderBindingsLayout>)0x0;
    (this_00->ShaderLayouts).ArrayNum = 0;
    (this_00->ShaderLayouts).ArrayMax = 2;
    (this_00->Data).InlineStorage[0] = (uchar *)0x0;
    (this_00->Data).InlineStorage[1] = (uchar *)0x0;
    (this_00->Data).InlineStorage[2] = (uchar *)0x0;
    (this_00->Data).InlineStorage[3] = (uchar *)0x0;
    (this_00->Data).InlineStorage[4] = (uchar *)0x0;
    (this_00->Data).InlineStorage[5] = (uchar *)0x0;
    (this_00->Data).InlineStorage[6] = (uchar *)0x0;
    (this_00->Data).InlineStorage[7] = (uchar *)0x0;
    (this_00->Data).InlineStorage[8] = (uchar *)0x0;
    (this_00->Data).InlineStorage[9] = (uchar *)0x0;
    this_00->ShaderFrequencyBits = 0;
    this_00->Size = 0;
    FMeshDrawShaderBindings::CopyFrom(this_00,&param_1->ShaderBindings);
    this_00[1].Data.InlineStorage[7] = (uchar *)0x0;
    _Src = (param_1->VertexStreams).AllocatorInstance.SecondaryData;
    iVar7 = (param_1->VertexStreams).ArrayNum;
    *(int *)(this_00[1].Data.InlineStorage + 8) = iVar7;
    if (_Src == (ForElementType<FVertexInputStream>)0x0) {
      _Src = (ForElementType<FVertexInputStream>)&param_1->VertexStreams;
    }
    piVar1 = (int *)((longlong)this_00[1].Data.InlineStorage + 0x44);
    if (iVar7 == 0) {
      *piVar1 = 7;
    }
    else {
      UE::Core::Private::
      ReallocForCopy<2,TSizedInlineAllocator<7,32,TSizedDefaultAllocator<32>_>::ForElementType<FVertexInputStream>_>
                (0xc,4,iVar7,0,(ForElementType<FVertexInputStream> *)(this_00 + 1),iVar7,piVar1);
      _Dst = (FMeshDrawShaderBindings *)this_00[1].Data.InlineStorage[7];
      if (_Dst == (FMeshDrawShaderBindings *)0x0) {
        _Dst = this_00 + 1;
      }
      memcpy(_Dst,(void *)_Src,(longlong)iVar7 * 0xc);
    }
    this_00[1].Data.InlineStorage[9] = (uchar *)param_1->IndexBuffer;
    *(FGraphicsMinimalPipelineStateId *)&this_00[1].ShaderFrequencyBits = param_1->CachedPipelineId;
    *(uint *)this_00[2].ShaderLayouts.AllocatorInstance.InlineData = param_1->FirstIndex;
    *(uint *)(this_00[2].ShaderLayouts.AllocatorInstance.InlineData + 4) = param_1->NumPrimitives;
    *(uint *)(this_00[2].ShaderLayouts.AllocatorInstance.InlineData + 8) = param_1->NumInstances;
    this_00[2].ShaderLayouts.AllocatorInstance.SecondaryData =
         (ForElementType<FMeshDrawShaderBindingsLayout>)(param_1->field7_0x100).VertexParams;
    uVar4 = *(undefined8 *)((longlong)&param_1->field7_0x100 + 8);
    this_00[2].ShaderLayouts.AllocatorInstance.SecondaryData =
         (ForElementType<FMeshDrawShaderBindingsLayout>)(param_1->field7_0x100).VertexParams;
    this_00[2].ShaderLayouts.ArrayNum = (int)uVar4;
    this_00[2].ShaderLayouts.ArrayMax = (int)((ulonglong)uVar4 >> 0x20);
    *(schar *)this_00[2].Data.InlineStorage = param_1->PrimitiveIdStreamIndex;
    *(uchar *)((longlong)this_00[2].Data.InlineStorage + 1) = param_1->StencilRef;
    *(uint *)((longlong)this_00[2].Data.InlineStorage + 4) =
         (*(uint *)&param_1->field_0x114 ^ *(uint *)((longlong)this_00[2].Data.InlineStorage + 4)) &
         0xfffffff8 ^ *(uint *)&param_1->field_0x114;
    pFVar5 = (param_1->DebugData).VertexShader.ShaderMap;
    this_00[2].Data.InlineStorage[1] = (uchar *)(param_1->DebugData).VertexShader.ShaderContent;
    this_00[2].Data.InlineStorage[2] = (uchar *)pFVar5;
    pFVar5 = (param_1->DebugData).PixelShader.ShaderMap;
    this_00[2].Data.InlineStorage[3] = (uchar *)(param_1->DebugData).PixelShader.ShaderContent;
    this_00[2].Data.InlineStorage[4] = (uchar *)pFVar5;
    this_00[2].Data.InlineStorage[5] =
         (uchar *)(param_1->DebugData).PrimitiveSceneProxyIfNotUsingStateBuckets;
    this_00[2].Data.InlineStorage[6] =
         (uchar *)(param_1->DebugData).MaterialRenderProxyIfNotUsingStateBuckets;
    ::FString::FString((FString *)(this_00[2].Data.InlineStorage + 7),
                       &(param_1->DebugData).MaterialRenderProxyName);
    this_00[2].Data.InlineStorage[9] = (uchar *)(param_1->DebugData).Material;
    *(FVertexFactory **)&this_00[2].ShaderFrequencyBits = (param_1->DebugData).VertexFactory;
    *(FVertexFactoryType **)this_00[3].ShaderLayouts.AllocatorInstance.InlineData =
         (param_1->DebugData).VertexFactoryType;
    *(FName *)(this_00[3].ShaderLayouts.AllocatorInstance.InlineData + 8) =
         (param_1->DebugData).ResourceName;
    *(uint *)&this_00[3].ShaderLayouts.AllocatorInstance.SecondaryData =
         (param_1->DebugData).PSOCollectorIndex;
    this_00[3].ShaderLayouts.AllocatorInstance.SecondaryData.field_0x4 =
         (param_1->DebugData).LODIndex;
    this_00[3].ShaderLayouts.ArrayNum = (param_1->DebugData).SegmentIndex;
    this_00[3].Data.InlineStorage[0] = (uchar *)(param_1->StatsData).CategoryName;
    *(uint *)(this_00[3].Data.InlineStorage + 1) = (param_1->StatsData).NumVertices;
  }
  return this->NumElements + -1;
}

// operator[] @ 144ef22d0

/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FMeshDrawCommand * __thiscall
TChunkedArray<FMeshDrawCommand,16384,TSizedDefaultAllocator<32>_>::operator[]
          (TChunkedArray<FMeshDrawCommand,16384,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  FMeshDrawCommand *pFVar5;
  
  uVar2 = param_1 / 0x28;
  uVar4 = 0;
  if ((int)uVar2 < (this->Chunks).Array.ArrayNum) {
    uVar4 = ~uVar2 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FMeshDrawCommand *)(*pcVar1)();
      return pFVar5;
    }
  }
  return (FMeshDrawCommand *)
         ((ulonglong)(uint)(param_1 % 0x28) * 0x198 +
         *(longlong *)((this->Chunks).Array.AllocatorInstance.Data + (longlong)(int)uVar2 * 8));
}

// TChunkedArray<int,16384,TSizedDefaultAllocator<32>_> @ 1452fcf70

TChunkedArray<int,16384,TSizedDefaultAllocator<32>_> * __thiscall
TChunkedArray<int,16384,TSizedDefaultAllocator<32>_>::
TChunkedArray<int,16384,TSizedDefaultAllocator<32>_>
          (TChunkedArray<int,16384,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  TChunkedArray<int,16384,TSizedDefaultAllocator<32>_> *pTVar7;
  ulonglong uVar8;
  void *local_18 [2];
  
  piVar1 = &(this->Chunks).Array.ArrayMax;
  *piVar1 = 0;
  this->NumElements = param_1;
  (this->Chunks).Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Chunks).Array.ArrayNum = 0;
  uVar5 = (int)(param_1 + 0xfff + (param_1 + 0xfff >> 0x1f & 0xfffU)) >> 0xc;
  uVar8 = (ulonglong)uVar5;
  if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum(uVar8);
  }
  if (uVar5 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar5,(ForAnyElementType *)this,0,piVar1);
  }
  if (0 < (int)uVar5) {
    do {
      local_18[0] = ::operator_new(0x4000);
      pFVar2 = (this->Chunks).Array.AllocatorInstance.Data;
      if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
         ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)*piVar1 * 8)) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          pTVar7 = (TChunkedArray<int,16384,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
          return pTVar7;
        }
      }
      iVar6 = (this->Chunks).Array.ArrayNum;
      if (iVar6 == *piVar1) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,(ForAnyElementType *)this,piVar1);
      }
      (this->Chunks).Array.ArrayNum = iVar6 + 1;
      *(void **)((this->Chunks).Array.AllocatorInstance.Data + (longlong)iVar6 * 8) = local_18[0];
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  return this;
}

// TChunkedArray<RayTracing::FRelevantCachedPrimitive,16384,TSizedDefaultAllocator<32>_> @ 1452fd0b0

TChunkedArray<RayTracing::FRelevantCachedPrimitive,16384,TSizedDefaultAllocator<32>_> * __thiscall
TChunkedArray<RayTracing::FRelevantCachedPrimitive,16384,TSizedDefaultAllocator<32>_>::
TChunkedArray<RayTracing::FRelevantCachedPrimitive,16384,TSizedDefaultAllocator<32>_>
          (TChunkedArray<RayTracing::FRelevantCachedPrimitive,16384,TSizedDefaultAllocator<32>_>
           *this,int param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  void *pvVar7;
  TChunkedArray<RayTracing::FRelevantCachedPrimitive,16384,TSizedDefaultAllocator<32>_> *pTVar8;
  undefined8 *puVar9;
  longlong lVar10;
  ulonglong uVar11;
  void *local_18 [2];
  
  this->NumElements = param_1;
  (this->Chunks).Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Chunks).Array.ArrayNum = 0;
  piVar1 = &(this->Chunks).Array.ArrayMax;
  *piVar1 = 0;
  uVar4 = (param_1 + 0x154) / 0x155;
  uVar11 = (ulonglong)uVar4;
  if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar4);
  }
  if ((uVar4 != 0) &&
     (UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,uVar4,(ForAnyElementType *)this,0,piVar1), 0 < (int)uVar4)) {
    do {
      pvVar7 = ::operator_new(0x3ff0);
      local_18[0] = (void *)0x0;
      if (pvVar7 != (void *)0x0) {
        lVar10 = 0x155;
        puVar9 = (undefined8 *)((longlong)pvVar7 + 0x10);
        do {
          puVar9[-2] = 0;
          *(undefined4 *)(puVar9 + -1) = 0;
          *puVar9 = 0;
          *(undefined4 *)(puVar9 + 1) = 0;
          puVar9[2] = 0xffffffffffffffff;
          *(undefined4 *)(puVar9 + 3) = 0xffffffff;
          puVar9 = puVar9 + 6;
          lVar10 = lVar10 + -1;
          local_18[0] = pvVar7;
        } while (lVar10 != 0);
      }
      pFVar2 = (this->Chunks).Array.AllocatorInstance.Data;
      if (((pFVar2 <= (FScriptContainerElement *)local_18) &&
          ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)*piVar1 * 8)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar3 = (code *)swi(3);
        pTVar8 = (TChunkedArray<RayTracing::FRelevantCachedPrimitive,16384,TSizedDefaultAllocator<32>_>
                  *)(*pcVar3)();
        return pTVar8;
      }
      iVar6 = (this->Chunks).Array.ArrayNum;
      if (iVar6 == *piVar1) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,(ForAnyElementType *)this,piVar1);
      }
      (this->Chunks).Array.ArrayNum = iVar6 + 1;
      *(void **)((this->Chunks).Array.AllocatorInstance.Data + (longlong)iVar6 * 8) = local_18[0];
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
  }
  return this;
}

// TChunkedArray<RayTracing::FRelevantPrimitive,16384,TSizedDefaultAllocator<32>_> @ 1452fd240

TChunkedArray<RayTracing::FRelevantPrimitive,16384,TSizedDefaultAllocator<32>_> * __thiscall
TChunkedArray<RayTracing::FRelevantPrimitive,16384,TSizedDefaultAllocator<32>_>::
TChunkedArray<RayTracing::FRelevantPrimitive,16384,TSizedDefaultAllocator<32>_>
          (TChunkedArray<RayTracing::FRelevantPrimitive,16384,TSizedDefaultAllocator<32>_> *this,
          int param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  void *pvVar7;
  TChunkedArray<RayTracing::FRelevantPrimitive,16384,TSizedDefaultAllocator<32>_> *pTVar8;
  undefined4 *puVar9;
  longlong lVar10;
  ulonglong uVar11;
  void *local_18 [2];
  
  this->NumElements = param_1;
  (this->Chunks).Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Chunks).Array.ArrayNum = 0;
  piVar1 = &(this->Chunks).Array.ArrayMax;
  *piVar1 = 0;
  uVar4 = (param_1 + 0xcb) / 0xcc;
  uVar11 = (ulonglong)uVar4;
  if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar4);
  }
  if ((uVar4 != 0) &&
     (UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,uVar4,(ForAnyElementType *)this,0,piVar1), 0 < (int)uVar4)) {
    do {
      pvVar7 = ::operator_new(0x3fc0);
      local_18[0] = (void *)0x0;
      if (pvVar7 != (void *)0x0) {
        lVar10 = 0xcc;
        puVar9 = (undefined4 *)((longlong)pvVar7 + 0x10);
        do {
          *(byte *)(puVar9 + 0xe) = *(byte *)(puVar9 + 0xe) & 0xfe;
          puVar9[8] = 0;
          *(byte *)((longlong)puVar9 + 0x22) = *(byte *)((longlong)puVar9 + 0x22) | 1;
          *(undefined8 *)(puVar9 + -4) = 0;
          *(undefined8 *)(puVar9 + -2) = 0;
          *puVar9 = 0;
          *(undefined8 *)(puVar9 + 2) = 0;
          puVar9[4] = 0;
          *(undefined8 *)(puVar9 + 6) = 0;
          *(undefined1 *)((longlong)puVar9 + 0x21) = 0x93;
          *(undefined8 *)(puVar9 + 10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar9 + 0xc) = 0xffffffffffffffff;
          puVar9 = puVar9 + 0x14;
          lVar10 = lVar10 + -1;
          local_18[0] = pvVar7;
        } while (lVar10 != 0);
      }
      pFVar2 = (this->Chunks).Array.AllocatorInstance.Data;
      if (((pFVar2 <= (FScriptContainerElement *)local_18) &&
          ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)*piVar1 * 8)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar3 = (code *)swi(3);
        pTVar8 = (TChunkedArray<RayTracing::FRelevantPrimitive,16384,TSizedDefaultAllocator<32>_> *)
                 (*pcVar3)();
        return pTVar8;
      }
      iVar6 = (this->Chunks).Array.ArrayNum;
      if (iVar6 == *piVar1) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,(ForAnyElementType *)this,piVar1);
      }
      (this->Chunks).Array.ArrayNum = iVar6 + 1;
      *(void **)((this->Chunks).Array.AllocatorInstance.Data + (longlong)iVar6 * 8) = local_18[0];
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
  }
  return this;
}

// TChunkedArray<FRayTracingMeshCommand,16384,TSizedDefaultAllocator<32>_> @ 1452fd3f0

TChunkedArray<FRayTracingMeshCommand,16384,TSizedDefaultAllocator<32>_> * __thiscall
TChunkedArray<FRayTracingMeshCommand,16384,TSizedDefaultAllocator<32>_>::
TChunkedArray<FRayTracingMeshCommand,16384,TSizedDefaultAllocator<32>_>
          (TChunkedArray<FRayTracingMeshCommand,16384,TSizedDefaultAllocator<32>_> *this,int param_1
          )

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  void *pvVar7;
  TChunkedArray<FRayTracingMeshCommand,16384,TSizedDefaultAllocator<32>_> *pTVar8;
  undefined4 *puVar9;
  longlong lVar10;
  ulonglong uVar11;
  void *local_18 [2];
  
  this->NumElements = param_1;
  (this->Chunks).Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Chunks).Array.ArrayNum = 0;
  piVar1 = &(this->Chunks).Array.ArrayMax;
  *piVar1 = 0;
  uVar4 = (param_1 + 0x6a) / 0x6b;
  uVar11 = (ulonglong)uVar4;
  if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar4);
  }
  if ((uVar4 != 0) &&
     (UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,uVar4,(ForAnyElementType *)this,0,piVar1), 0 < (int)uVar4)) {
    do {
      pvVar7 = ::operator_new(0x3f88);
      local_18[0] = (void *)0x0;
      if (pvVar7 != (void *)0x0) {
        lVar10 = 0x6b;
        puVar9 = (undefined4 *)((longlong)pvVar7 + 0x18);
        do {
          *(undefined8 *)(puVar9 + -2) = 0;
          *puVar9 = 0;
          puVar9[1] = 2;
          *(undefined8 *)(puVar9 + 2) = 0;
          *(undefined8 *)(puVar9 + 4) = 0;
          *(undefined8 *)(puVar9 + 6) = 0;
          *(undefined8 *)(puVar9 + 8) = 0;
          *(undefined8 *)(puVar9 + 10) = 0;
          *(undefined8 *)(puVar9 + 0xc) = 0;
          *(undefined8 *)(puVar9 + 0xe) = 0;
          *(undefined8 *)(puVar9 + 0x10) = 0;
          *(undefined8 *)(puVar9 + 0x12) = 0;
          *(undefined8 *)(puVar9 + 0x14) = 0;
          puVar9[0x16] = 0;
          *(byte *)((longlong)puVar9 + 0x72) = *(byte *)((longlong)puVar9 + 0x72) & 0xfc;
          *(undefined8 *)(puVar9 + 0x18) = 0;
          *(undefined8 *)(puVar9 + 0x1a) = 0xffffffffffffffff;
          *(undefined2 *)(puVar9 + 0x1c) = 0x3ff;
          puVar9[0x1d] = 0xffffffff;
          *(undefined2 *)(puVar9 + 0x1e) = 0xffff;
          puVar9 = puVar9 + 0x26;
          lVar10 = lVar10 + -1;
          local_18[0] = pvVar7;
        } while (lVar10 != 0);
      }
      pFVar2 = (this->Chunks).Array.AllocatorInstance.Data;
      if (((pFVar2 <= (FScriptContainerElement *)local_18) &&
          ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)*piVar1 * 8)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar3 = (code *)swi(3);
        pTVar8 = (TChunkedArray<FRayTracingMeshCommand,16384,TSizedDefaultAllocator<32>_> *)
                 (*pcVar3)();
        return pTVar8;
      }
      iVar6 = (this->Chunks).Array.ArrayNum;
      if (iVar6 == *piVar1) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,(ForAnyElementType *)this,piVar1);
      }
      (this->Chunks).Array.ArrayNum = iVar6 + 1;
      *(void **)((this->Chunks).Array.AllocatorInstance.Data + (longlong)iVar6 * 8) = local_18[0];
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
  }
  return this;
}

// Add @ 145307aa0

int __thiscall
TChunkedArray<RayTracing::FRelevantCachedPrimitive,16384,TSizedDefaultAllocator<32>_>::Add
          (TChunkedArray<RayTracing::FRelevantCachedPrimitive,16384,TSizedDefaultAllocator<32>_>
           *this,int param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  int iVar4;
  bool bVar5;
  int iVar6;
  void *pvVar7;
  undefined8 *puVar8;
  longlong lVar9;
  ulonglong uVar10;
  void *local_18 [2];
  
  if ((param_1 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Count>=0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ChunkedArray.h"
                         ,0xf4,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    iVar6 = (*pcVar3)();
    return iVar6;
  }
  iVar1 = this->NumElements;
  iVar6 = iVar1 + param_1;
  this->NumElements = iVar6;
  iVar4 = (iVar6 + 0x154) / 0x155;
  iVar6 = (this->Chunks).Array.ArrayNum;
  if (iVar6 < iVar4) {
    uVar10 = (ulonglong)(uint)(iVar4 - iVar6);
    do {
      pvVar7 = ::operator_new(0x3ff0);
      local_18[0] = (void *)0x0;
      if (pvVar7 != (void *)0x0) {
        lVar9 = 0x155;
        puVar8 = (undefined8 *)((longlong)pvVar7 + 0x10);
        do {
          puVar8[-2] = 0;
          *(undefined4 *)(puVar8 + -1) = 0;
          *puVar8 = 0;
          *(undefined4 *)(puVar8 + 1) = 0;
          puVar8[2] = 0xffffffffffffffff;
          *(undefined4 *)(puVar8 + 3) = 0xffffffff;
          puVar8 = puVar8 + 6;
          lVar9 = lVar9 + -1;
          local_18[0] = pvVar7;
        } while (lVar9 != 0);
      }
      pFVar2 = (this->Chunks).Array.AllocatorInstance.Data;
      if (((pFVar2 <= (FScriptContainerElement *)local_18) &&
          ((FScriptContainerElement *)local_18 <
           pFVar2 + (longlong)(this->Chunks).Array.ArrayMax * 8)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar3 = (code *)swi(3);
        iVar6 = (*pcVar3)();
        return iVar6;
      }
      iVar6 = (this->Chunks).Array.ArrayNum;
      if (iVar6 == (this->Chunks).Array.ArrayMax) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,(ForAnyElementType *)this,&(this->Chunks).Array.ArrayMax);
      }
      pFVar2 = (this->Chunks).Array.AllocatorInstance.Data;
      (this->Chunks).Array.ArrayNum = iVar6 + 1;
      *(void **)(pFVar2 + (longlong)iVar6 * 8) = local_18[0];
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  return iVar1;
}

// Add @ 145307c40

int __thiscall
TChunkedArray<RayTracing::FRelevantPrimitive,16384,TSizedDefaultAllocator<32>_>::Add
          (TChunkedArray<RayTracing::FRelevantPrimitive,16384,TSizedDefaultAllocator<32>_> *this,
          int param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  int iVar4;
  bool bVar5;
  int iVar6;
  void *pvVar7;
  undefined4 *puVar8;
  longlong lVar9;
  ulonglong uVar10;
  void *local_18 [2];
  
  if ((param_1 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Count>=0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ChunkedArray.h"
                         ,0xf4,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    iVar6 = (*pcVar3)();
    return iVar6;
  }
  iVar1 = this->NumElements;
  iVar6 = iVar1 + param_1;
  this->NumElements = iVar6;
  iVar4 = (iVar6 + 0xcb) / 0xcc;
  iVar6 = (this->Chunks).Array.ArrayNum;
  if (iVar6 < iVar4) {
    uVar10 = (ulonglong)(uint)(iVar4 - iVar6);
    do {
      pvVar7 = ::operator_new(0x3fc0);
      local_18[0] = (void *)0x0;
      if (pvVar7 != (void *)0x0) {
        lVar9 = 0xcc;
        puVar8 = (undefined4 *)((longlong)pvVar7 + 0x10);
        do {
          *(byte *)(puVar8 + 0xe) = *(byte *)(puVar8 + 0xe) & 0xfe;
          puVar8[8] = 0;
          *(byte *)((longlong)puVar8 + 0x22) = *(byte *)((longlong)puVar8 + 0x22) | 1;
          *(undefined8 *)(puVar8 + -4) = 0;
          *(undefined8 *)(puVar8 + -2) = 0;
          *puVar8 = 0;
          *(undefined8 *)(puVar8 + 2) = 0;
          puVar8[4] = 0;
          *(undefined8 *)(puVar8 + 6) = 0;
          *(undefined1 *)((longlong)puVar8 + 0x21) = 0x93;
          *(undefined8 *)(puVar8 + 10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar8 + 0xc) = 0xffffffffffffffff;
          puVar8 = puVar8 + 0x14;
          lVar9 = lVar9 + -1;
          local_18[0] = pvVar7;
        } while (lVar9 != 0);
      }
      pFVar2 = (this->Chunks).Array.AllocatorInstance.Data;
      if (((pFVar2 <= (FScriptContainerElement *)local_18) &&
          ((FScriptContainerElement *)local_18 <
           pFVar2 + (longlong)(this->Chunks).Array.ArrayMax * 8)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar3 = (code *)swi(3);
        iVar6 = (*pcVar3)();
        return iVar6;
      }
      iVar6 = (this->Chunks).Array.ArrayNum;
      if (iVar6 == (this->Chunks).Array.ArrayMax) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,(ForAnyElementType *)this,&(this->Chunks).Array.ArrayMax);
      }
      pFVar2 = (this->Chunks).Array.AllocatorInstance.Data;
      (this->Chunks).Array.ArrayNum = iVar6 + 1;
      *(void **)(pFVar2 + (longlong)iVar6 * 8) = local_18[0];
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  return iVar1;
}

// Add @ 145307e00

int __thiscall
TChunkedArray<FRayTracingMeshCommand,16384,TSizedDefaultAllocator<32>_>::Add
          (TChunkedArray<FRayTracingMeshCommand,16384,TSizedDefaultAllocator<32>_> *this,int param_1
          )

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  int iVar4;
  bool bVar5;
  int iVar6;
  void *pvVar7;
  undefined4 *puVar8;
  longlong lVar9;
  ulonglong uVar10;
  void *local_28 [2];
  
  if ((param_1 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Count>=0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ChunkedArray.h"
                         ,0xf4,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    iVar6 = (*pcVar3)();
    return iVar6;
  }
  iVar1 = this->NumElements;
  iVar6 = iVar1 + param_1;
  this->NumElements = iVar6;
  iVar4 = (iVar6 + 0x6a) / 0x6b;
  iVar6 = (this->Chunks).Array.ArrayNum;
  if (iVar6 < iVar4) {
    uVar10 = (ulonglong)(uint)(iVar4 - iVar6);
    do {
      pvVar7 = ::operator_new(0x3f88);
      local_28[0] = (void *)0x0;
      if (pvVar7 != (void *)0x0) {
        lVar9 = 0x6b;
        puVar8 = (undefined4 *)((longlong)pvVar7 + 0x18);
        do {
          *(undefined8 *)(puVar8 + -2) = 0;
          *puVar8 = 0;
          puVar8[1] = 2;
          *(undefined8 *)(puVar8 + 2) = 0;
          *(undefined8 *)(puVar8 + 4) = 0;
          *(undefined8 *)(puVar8 + 6) = 0;
          *(undefined8 *)(puVar8 + 8) = 0;
          *(undefined8 *)(puVar8 + 10) = 0;
          *(undefined8 *)(puVar8 + 0xc) = 0;
          *(undefined8 *)(puVar8 + 0xe) = 0;
          *(undefined8 *)(puVar8 + 0x10) = 0;
          *(undefined8 *)(puVar8 + 0x12) = 0;
          *(undefined8 *)(puVar8 + 0x14) = 0;
          puVar8[0x16] = 0;
          *(byte *)((longlong)puVar8 + 0x72) = *(byte *)((longlong)puVar8 + 0x72) & 0xfc;
          *(undefined8 *)(puVar8 + 0x18) = 0;
          *(undefined8 *)(puVar8 + 0x1a) = 0xffffffffffffffff;
          *(undefined2 *)(puVar8 + 0x1c) = 0x3ff;
          puVar8[0x1d] = 0xffffffff;
          *(undefined2 *)(puVar8 + 0x1e) = 0xffff;
          puVar8 = puVar8 + 0x26;
          lVar9 = lVar9 + -1;
          local_28[0] = pvVar7;
        } while (lVar9 != 0);
      }
      pFVar2 = (this->Chunks).Array.AllocatorInstance.Data;
      if (((pFVar2 <= (FScriptContainerElement *)local_28) &&
          ((FScriptContainerElement *)local_28 <
           pFVar2 + (longlong)(this->Chunks).Array.ArrayMax * 8)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar3 = (code *)swi(3);
        iVar6 = (*pcVar3)();
        return iVar6;
      }
      iVar6 = (this->Chunks).Array.ArrayNum;
      if (iVar6 == (this->Chunks).Array.ArrayMax) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,(ForAnyElementType *)this,&(this->Chunks).Array.ArrayMax);
      }
      pFVar2 = (this->Chunks).Array.AllocatorInstance.Data;
      (this->Chunks).Array.ArrayNum = iVar6 + 1;
      *(void **)(pFVar2 + (longlong)iVar6 * 8) = local_28[0];
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  return iVar1;
}

// AddElement @ 14530b920

int __thiscall
TChunkedArray<FRayTracingMeshCommand,16384,TSizedDefaultAllocator<32>_>::AddElement
          (TChunkedArray<FRayTracingMeshCommand,16384,TSizedDefaultAllocator<32>_> *this,
          FRayTracingMeshCommand *param_1)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  byte bVar6;
  byte bVar7;
  FMeshDrawShaderBindings *this_00;
  
  iVar4 = Add(this,1);
  uVar2 = iVar4 / 0x6b;
  uVar5 = 0;
  if ((int)uVar2 < (this->Chunks).Array.ArrayNum) {
    uVar5 = ~uVar2 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      iVar4 = (*pcVar1)();
      return iVar4;
    }
  }
  this_00 = (FMeshDrawShaderBindings *)
            (*(longlong *)((this->Chunks).Array.AllocatorInstance.Data + (longlong)(int)uVar2 * 8) +
            (ulonglong)(uint)(iVar4 % 0x6b) * 0x98);
  if (this_00 != (FMeshDrawShaderBindings *)0x0) {
    (this_00->ShaderLayouts).AllocatorInstance.SecondaryData =
         (ForElementType<FMeshDrawShaderBindingsLayout>)0x0;
    (this_00->ShaderLayouts).ArrayNum = 0;
    (this_00->ShaderLayouts).ArrayMax = 2;
    (this_00->Data).InlineStorage[0] = (uchar *)0x0;
    (this_00->Data).InlineStorage[1] = (uchar *)0x0;
    (this_00->Data).InlineStorage[2] = (uchar *)0x0;
    (this_00->Data).InlineStorage[3] = (uchar *)0x0;
    (this_00->Data).InlineStorage[4] = (uchar *)0x0;
    (this_00->Data).InlineStorage[5] = (uchar *)0x0;
    (this_00->Data).InlineStorage[6] = (uchar *)0x0;
    (this_00->Data).InlineStorage[7] = (uchar *)0x0;
    (this_00->Data).InlineStorage[8] = (uchar *)0x0;
    (this_00->Data).InlineStorage[9] = (uchar *)0x0;
    this_00->ShaderFrequencyBits = 0;
    this_00->Size = 0;
    FMeshDrawShaderBindings::CopyFrom(this_00,&param_1->ShaderBindings);
    *(FRHIRayTracingShader **)this_00[1].ShaderLayouts.AllocatorInstance.InlineData =
         param_1->MaterialShader;
    *(uint *)(this_00[1].ShaderLayouts.AllocatorInstance.InlineData + 8) =
         param_1->MaterialShaderIndex;
    *(uint *)(this_00[1].ShaderLayouts.AllocatorInstance.InlineData + 0xc) =
         param_1->GeometrySegmentIndex;
    *(uchar *)&this_00[1].ShaderLayouts.AllocatorInstance.SecondaryData = param_1->InstanceMask;
    bVar6 = this_00[1].ShaderLayouts.AllocatorInstance.SecondaryData.field_0x1;
    bVar6 = (bVar6 ^ param_1->bCastRayTracedShadows) & 1 ^ bVar6;
    this_00[1].ShaderLayouts.AllocatorInstance.SecondaryData.field_0x1 = bVar6;
    bVar6 = (bVar6 ^ param_1->field_0x89) & 2 ^ bVar6;
    this_00[1].ShaderLayouts.AllocatorInstance.SecondaryData.field_0x1 = bVar6;
    bVar6 = (bVar6 ^ param_1->field_0x89) & 4 ^ bVar6;
    this_00[1].ShaderLayouts.AllocatorInstance.SecondaryData.field_0x1 = bVar6;
    bVar6 = (bVar6 ^ param_1->field_0x89) & 8 ^ bVar6;
    this_00[1].ShaderLayouts.AllocatorInstance.SecondaryData.field_0x1 = bVar6;
    bVar6 = (bVar6 ^ param_1->field_0x89) & 0x10 ^ bVar6;
    this_00[1].ShaderLayouts.AllocatorInstance.SecondaryData.field_0x1 = bVar6;
    bVar6 = (bVar6 ^ param_1->field_0x89) & 0x20 ^ bVar6;
    this_00[1].ShaderLayouts.AllocatorInstance.SecondaryData.field_0x1 = bVar6;
    bVar6 = (bVar6 ^ param_1->field_0x89) & 0x40 ^ bVar6;
    this_00[1].ShaderLayouts.AllocatorInstance.SecondaryData.field_0x1 = bVar6;
    bVar7 = this_00[1].ShaderLayouts.AllocatorInstance.SecondaryData.field_0x2;
    this_00[1].ShaderLayouts.AllocatorInstance.SecondaryData.field_0x1 =
         (bVar6 ^ param_1->field_0x89) & 0x7f ^ param_1->field_0x89;
    bVar7 = (bVar7 ^ param_1->bNaniteRayTracing) & 1 ^ bVar7;
    this_00[1].ShaderLayouts.AllocatorInstance.SecondaryData.field_0x2 = bVar7;
    this_00[1].ShaderLayouts.AllocatorInstance.SecondaryData.field_0x2 =
         (bVar7 ^ param_1->field_0x8a) & 2 ^ bVar7;
    *(ushort *)&this_00[1].ShaderLayouts.AllocatorInstance.SecondaryData.field_0x4 =
         (param_1->ViewUniformBufferParameter).BaseIndex;
    *(ushort *)&this_00[1].ShaderLayouts.AllocatorInstance.SecondaryData.field_0x6 =
         (param_1->SceneUniformBufferParameter).BaseIndex;
    *(ushort *)&this_00[1].ShaderLayouts.ArrayNum =
         (param_1->NaniteUniformBufferParameter).BaseIndex;
  }
  return this->NumElements + -1;
}

// TChunkedArray<FPrimitiveOcclusionHistory,1024,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_> @ 14551d030

TChunkedArray<FPrimitiveOcclusionHistory,1024,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
* __thiscall
TChunkedArray<FPrimitiveOcclusionHistory,1024,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
::
TChunkedArray<FPrimitiveOcclusionHistory,1024,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
          (TChunkedArray<FPrimitiveOcclusionHistory,1024,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
           *this,int param_1)

{
  int *piVar1;
  void **ppvVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  void *pvVar7;
  TChunkedArray<FPrimitiveOcclusionHistory,1024,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
  *pTVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  void *local_18 [2];
  
  this->NumElements = param_1;
  (this->Chunks).Array.AllocatorInstance.Data = (void **)0x0;
  (this->Chunks).Array.ArrayNum = 0;
  piVar1 = &(this->Chunks).Array.ArrayMax;
  *piVar1 = 0;
  uVar4 = (param_1 + 9) / 10;
  uVar11 = (ulonglong)uVar4;
  if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar4);
  }
  if ((uVar4 != 0) &&
     (UE::Core::Private::
      ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<void_*>_>
                (8,8,uVar4,(ForElementType<void_*> *)this,0,piVar1), 0 < (int)uVar4)) {
    do {
      pvVar7 = ::operator_new(0x3c0);
      local_18[0] = (void *)0x0;
      if (pvVar7 != (void *)0x0) {
        lVar10 = 10;
        lVar9 = (longlong)pvVar7 + 0x3c;
        do {
          *(undefined4 *)(lVar9 + -0x3c) = 0;
          *(undefined8 *)(lVar9 + -4) = 0xffffffffffffffff;
          *(undefined8 *)(lVar9 + 4) = 0;
          *(undefined8 *)(lVar9 + 0xc) = 0;
          *(undefined8 *)(lVar9 + 0x14) = 0;
          *(undefined2 *)(lVar9 + 0x1c) = 0;
          *(undefined8 *)(lVar9 + -0x34) = 0;
          *(undefined8 *)(lVar9 + -0x14) = 0;
          *(undefined8 *)(lVar9 + -0x2c) = 0;
          *(undefined8 *)(lVar9 + -0x24) = 0;
          *(undefined8 *)(lVar9 + -0xc) = 0;
          *(undefined8 *)(lVar9 + -0x1c) = 0;
          lVar9 = lVar9 + 0x60;
          lVar10 = lVar10 + -1;
          local_18[0] = pvVar7;
        } while (lVar10 != 0);
      }
      ppvVar2 = (this->Chunks).Array.AllocatorInstance.Data;
      if (((ppvVar2 <= local_18) && (local_18 < ppvVar2 + *piVar1)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar3 = (code *)swi(3);
        pTVar8 = (TChunkedArray<FPrimitiveOcclusionHistory,1024,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
                  *)(*pcVar3)();
        return pTVar8;
      }
      iVar6 = (this->Chunks).Array.ArrayNum;
      if (iVar6 == *piVar1) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<void_*>_>
                          (0x808,(ForElementType<void_*> *)this,piVar1);
      }
      (this->Chunks).Array.ArrayNum = iVar6 + 1;
      (this->Chunks).Array.AllocatorInstance.Data[iVar6] = local_18[0];
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
  }
  return this;
}

// Add @ 1455263d0

int __thiscall
TChunkedArray<FPrimitiveOcclusionHistory,1024,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
::Add(TChunkedArray<FPrimitiveOcclusionHistory,1024,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
      *this,int param_1)

{
  int iVar1;
  void **ppvVar2;
  code *pcVar3;
  int iVar4;
  bool bVar5;
  int iVar6;
  void *pvVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  void *local_18 [2];
  
  if ((param_1 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Count>=0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ChunkedArray.h"
                         ,0xf4,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    iVar6 = (*pcVar3)();
    return iVar6;
  }
  iVar1 = this->NumElements;
  iVar6 = iVar1 + param_1;
  this->NumElements = iVar6;
  iVar4 = (iVar6 + 9) / 10;
  iVar6 = (this->Chunks).Array.ArrayNum;
  if (iVar6 < iVar4) {
    uVar10 = (ulonglong)(uint)(iVar4 - iVar6);
    do {
      pvVar7 = ::operator_new(0x3c0);
      local_18[0] = (void *)0x0;
      if (pvVar7 != (void *)0x0) {
        lVar9 = 10;
        lVar8 = (longlong)pvVar7 + 0x3c;
        do {
          *(undefined4 *)(lVar8 + -0x3c) = 0;
          *(undefined8 *)(lVar8 + -4) = 0xffffffffffffffff;
          *(undefined8 *)(lVar8 + 4) = 0;
          *(undefined8 *)(lVar8 + 0xc) = 0;
          *(undefined8 *)(lVar8 + 0x14) = 0;
          *(undefined2 *)(lVar8 + 0x1c) = 0;
          *(undefined8 *)(lVar8 + -0x34) = 0;
          *(undefined8 *)(lVar8 + -0x14) = 0;
          *(undefined8 *)(lVar8 + -0x2c) = 0;
          *(undefined8 *)(lVar8 + -0x24) = 0;
          *(undefined8 *)(lVar8 + -0xc) = 0;
          *(undefined8 *)(lVar8 + -0x1c) = 0;
          lVar8 = lVar8 + 0x60;
          lVar9 = lVar9 + -1;
          local_18[0] = pvVar7;
        } while (lVar9 != 0);
      }
      ppvVar2 = (this->Chunks).Array.AllocatorInstance.Data;
      if (((ppvVar2 <= local_18) && (local_18 < ppvVar2 + (this->Chunks).Array.ArrayMax)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar3 = (code *)swi(3);
        iVar6 = (*pcVar3)();
        return iVar6;
      }
      iVar6 = (this->Chunks).Array.ArrayNum;
      if (iVar6 == (this->Chunks).Array.ArrayMax) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<void_*>_>
                          (0x808,(ForElementType<void_*> *)this,&(this->Chunks).Array.ArrayMax);
      }
      ppvVar2 = (this->Chunks).Array.AllocatorInstance.Data;
      (this->Chunks).Array.ArrayNum = iVar6 + 1;
      ppvVar2[iVar6] = local_18[0];
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  return iVar1;
}

