// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 3

// Allocate @ 1450bcaa0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FOITSceneData::Allocate
          (FOITSceneData *this,FRHICommandListBase *param_1,EPrimitiveType param_2,
          FMeshBatchElement *param_3,FMeshBatchElementDynamicIndexBuffer *param_4)

{
  int *piVar1;
  TArray<FSortedIndexBuffer_*,TSizedDefaultAllocator<32>_> *this_00;
  uint uVar2;
  TNode *pTVar3;
  TNode *pTVar4;
  FIndexBuffer *pFVar5;
  undefined8 uVar6;
  longlong lVar7;
  code *pcVar8;
  TConsoleVariableData<int> *pTVar9;
  bool bVar10;
  uint uVar11;
  uint uVar12;
  FIndexBuffer *this_01;
  uint uVar13;
  uint uVar14;
  FScriptContainerElement *pFVar15;
  
  if (((param_3->IndexBuffer == (FIndexBuffer *)0x0) ||
      ((param_3->IndexBuffer->IndexBufferRHI).Reference == (FRHIBuffer *)0x0)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("InMeshElement.IndexBuffer && InMeshElement.IndexBuffer->IndexBufferRHI",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\OIT\\OIT.cpp"
                          ,0x164,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  if ((PT_TriangleStrip < param_2) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("InPrimitiveType == PT_TriangleList || InPrimitiveType == PT_TriangleStrip"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\OIT\\OIT.cpp"
                          ,0x165,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  uVar13 = 0xffffffff;
  pTVar3 = ((this->FreeSlots).Tail)->NextNode;
  if (pTVar3 != (TNode *)0x0) {
    uVar13 = pTVar3->Item;
    pTVar4 = (this->FreeSlots).Tail;
    (this->FreeSlots).Tail = pTVar3;
    pTVar3->Item = 0;
    ::operator_delete(pTVar4,0x10);
  }
  if (uVar13 == 0xffffffff) {
    uVar13 = (this->Allocations).ArrayNum;
    piVar1 = &(this->Allocations).ArrayMax;
    uVar11 = uVar13;
    if (uVar13 == *piVar1) {
      uVar11 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x838,(ForAnyElementType *)this,piVar1);
    }
    (this->Allocations).ArrayNum = uVar11 + 1;
    pFVar15 = (this->Allocations).AllocatorInstance.Data + (longlong)(int)uVar11 * 0x38;
    DefaultConstructItems<FSortedTriangleData,int>(pFVar15,1);
  }
  else {
    uVar11 = 0;
    if ((int)uVar13 < (this->Allocations).ArrayNum) {
      uVar11 = ~uVar13 >> 0x1f;
    }
    if ((uVar11 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    pFVar15 = (this->Allocations).AllocatorInstance.Data + (longlong)(int)uVar13 * 0x38;
  }
  pTVar9 = CVarOIT_SortedTriangles_Pool.Ref;
  uVar11 = param_3->NumPrimitives * 3;
  bVar10 = IsInParallelRenderingThread();
  if ((!bVar10) &&
     (bVar10 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007955>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6d3,"IsInParallelRenderingThread()"), bVar10)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  if (0 < pTVar9->ShadowedValue[1]) {
    uVar2 = (this->FreeBuffers).ArrayNum;
    this_00 = &this->FreeBuffers;
    uVar14 = 0;
    if (uVar2 != 0) {
      do {
        uVar12 = 0;
        if ((int)uVar14 < (this->FreeBuffers).ArrayNum) {
          uVar12 = ~uVar14 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        this_01 = *(FIndexBuffer **)((this_00->AllocatorInstance).Data + (longlong)(int)uVar14 * 8);
        if (((this_01 != (FIndexBuffer *)0x0) && (uVar11 <= (uint)this_01[1]._padding_)) &&
           (*(int *)((longlong)&this_01[1]._padding_ + 4) == -1)) {
          *(uint *)((longlong)&this_01[1]._padding_ + 4) = uVar13;
          uVar2 = uVar2 - 1;
          uVar13 = 0;
          if ((int)uVar2 < (this->FreeBuffers).ArrayNum) {
            uVar13 = ~uVar2 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          uVar6 = *(undefined8 *)((this_00->AllocatorInstance).Data + (longlong)(int)uVar2 * 8);
          uVar13 = 0;
          if ((int)uVar14 < (this->FreeBuffers).ArrayNum) {
            uVar13 = ~uVar14 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          *(undefined8 *)((this_00->AllocatorInstance).Data + (longlong)(int)uVar14 * 8) = uVar6;
          TArray<FSortedIndexBuffer_*,TSizedDefaultAllocator<32>_>::SetNum(this_00,uVar2,Default);
          goto LAB_1450bce21;
        }
        uVar14 = uVar14 + 1;
      } while (uVar14 < uVar2);
    }
  }
  this_01 = ::operator_new(0x58);
  if (this_01 == (FIndexBuffer *)0x0) {
    this_01 = (FIndexBuffer *)0x0;
  }
  else {
    pFVar5 = param_3->IndexBuffer;
    FIndexBuffer::FIndexBuffer(this_01);
    this_01[1]._padding_ = (longlong)pFVar5;
    this_01->_padding_ = (longlong)&___7FSortedIndexBuffer__6B_;
    this_01[1]._padding_ = (longlong)L"OIT::SortedIndexBuffer";
    *(uint *)&this_01[1]._padding_ = uVar11;
    *(uint *)((longlong)&this_01[1]._padding_ + 4) = uVar13;
    *(undefined4 *)&this_01[1]._padding_ = 0;
    this_01[1].IndexBufferRHI.Reference = (FRHIBuffer *)0x0;
    this_01[2]._padding_ = 0;
  }
  if (((this_01[1]._padding_ != 0) &&
      (lVar7 = *(longlong *)(this_01[1]._padding_ + 0x20), lVar7 != 0)) &&
     (*(int *)(lVar7 + 0xdc) != 0)) {
    (**(code **)(this_01->_padding_ + 0x18))(this_01,param_1);
  }
LAB_1450bce21:
  *(uint *)(pFVar15 + 0x24) = param_3->NumPrimitives;
  *(uint *)(pFVar15 + 0x28) = uVar11;
  *(uint *)(pFVar15 + 0x14) = param_3->FirstIndex;
  *(uint *)(pFVar15 + 0x18) = param_3->BaseVertexIndex;
  *(uint *)(pFVar15 + 0x1c) = param_3->MinVertexIndex;
  *(uint *)(pFVar15 + 0x20) = param_3->MaxVertexIndex;
  *(EPrimitiveType *)(pFVar15 + 0x2c) = param_2;
  *(undefined4 *)(pFVar15 + 0x10) = 0;
  *(undefined4 *)(pFVar15 + 0x30) = 0;
  *(FIndexBuffer **)pFVar15 = param_3->IndexBuffer;
  *(FIndexBuffer **)(pFVar15 + 8) = this_01;
  param_4->IndexBuffer = this_01;
  uVar13 = (*(uint *)&param_4->FirstIndex ^ *(uint *)(pFVar15 + 0x10)) & 0xffffff ^
           *(uint *)&param_4->FirstIndex;
  *(uint *)&param_4->FirstIndex = uVar13;
  *(uint *)&param_4->FirstIndex = (*(int *)(pFVar15 + 0x30) << 0x18 ^ uVar13) & 0x7000000 ^ uVar13;
  return;
}

// Deallocate @ 1450c2290

/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

void __thiscall FOITSceneData::Deallocate(FOITSceneData *this,FMeshBatchElement *param_1)

{
  int *piVar1;
  uint uVar2;
  TNode *pTVar3;
  TNode *pTVar4;
  code *pcVar5;
  TConsoleVariableData<int> *pTVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  TNode *pTVar10;
  TNode *pTVar11;
  longlong lVar12;
  FScriptContainerElement *pFVar13;
  FIndexBuffer *local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  
  pTVar6 = CVarOIT_SortedTriangles_Pool.Ref;
  local_c8 = (param_1->DynamicIndexBuffer).IndexBuffer;
  if (local_c8 == (FIndexBuffer *)0x0) {
    return;
  }
  uVar2 = *(uint *)((longlong)&local_c8[1]._padding_ + 4);
  if ((uint)(this->Allocations).ArrayNum <= uVar2) {
    return;
  }
  bVar7 = IsInParallelGameThread();
  if (!bVar7) {
    bVar7 = IsInGameThread();
    lVar12 = 4;
    if (!bVar7) goto LAB_1450c22f5;
  }
  lVar12 = 0;
LAB_1450c22f5:
  if (*(int *)((longlong)pTVar6->ShadowedValue + lVar12) < 1) {
    uVar9 = 0;
    if ((int)uVar2 < (this->Allocations).ArrayNum) {
      uVar9 = ~uVar2 >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pFVar13 = (this->Allocations).AllocatorInstance.Data + (longlong)(int)uVar2 * 0x38;
    pTVar10 = ::operator_new(0x10);
    if (pTVar10 != (TNode *)0x0) {
      pTVar10->NextNode = (TNode *)0x0;
      pTVar10->Item = *(FSortedIndexBuffer **)(pFVar13 + 8);
      pTVar3 = (this->PendingDeletes).Head;
      (this->PendingDeletes).Head = pTVar10;
      pTVar3->NextNode = pTVar10;
    }
    local_78 = 0;
    *(undefined8 *)pFVar13 = 0;
    *(undefined8 *)(pFVar13 + 8) = 0;
    uStack_70 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_58 = 0;
    *(undefined8 *)(pFVar13 + 0x10) = 0;
    *(undefined8 *)(pFVar13 + 0x18) = 0;
    *(undefined8 *)(pFVar13 + 0x20) = 0;
    *(undefined8 *)(pFVar13 + 0x28) = 0;
    *(undefined8 *)(pFVar13 + 0x30) = 0;
  }
  else {
    *(undefined4 *)((longlong)&local_c8[1]._padding_ + 4) = 0xffffffff;
    *(uint *)&local_c8[1]._padding_ = this->FrameIndex;
    pFVar13 = (this->FreeBuffers).AllocatorInstance.Data;
    if (((pFVar13 <= (FScriptContainerElement *)&local_c8) &&
        ((FScriptContainerElement *)&local_c8 < pFVar13 + (longlong)(this->FreeBuffers).ArrayMax * 8
        )) && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar8 = (this->FreeBuffers).ArrayNum;
    piVar1 = &(this->FreeBuffers).ArrayMax;
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&(this->FreeBuffers).AllocatorInstance,piVar1);
    }
    (this->FreeBuffers).ArrayNum = iVar8 + 1;
    local_90 = 0;
    local_b0 = 0;
    *(FIndexBuffer **)((this->FreeBuffers).AllocatorInstance.Data + (longlong)iVar8 * 8) = local_c8;
    uStack_a8 = 0;
    uVar9 = 0;
    if ((int)uVar2 < (this->Allocations).ArrayNum) {
      uVar9 = ~uVar2 >> 0x1f;
    }
    local_a0 = 0;
    uStack_98 = 0;
    local_c0 = 0;
    uStack_b8 = 0;
    if ((uVar9 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pFVar13 = (this->Allocations).AllocatorInstance.Data;
    lVar12 = (longlong)(int)uVar2 * 0x38;
    *(undefined8 *)(pFVar13 + lVar12) = 0;
    *(undefined8 *)(pFVar13 + lVar12 + 8) = 0;
    *(undefined8 *)(pFVar13 + lVar12 + 0x10) = 0;
    *(undefined8 *)(pFVar13 + lVar12 + 0x10 + 8) = 0;
    *(undefined8 *)(pFVar13 + lVar12 + 0x20) = 0;
    *(undefined8 *)(pFVar13 + lVar12 + 0x20 + 8) = 0;
    *(undefined8 *)(pFVar13 + lVar12 + 0x30) = 0;
  }
  pTVar11 = ::operator_new(0x10);
  if (pTVar11 != (TNode *)0x0) {
    pTVar11->NextNode = (TNode *)0x0;
    pTVar11->Item = uVar2;
    pTVar4 = (this->FreeSlots).Head;
    (this->FreeSlots).Head = pTVar11;
    pTVar4->NextNode = pTVar11;
  }
  return;
}

// ~FOITSceneData @ 145405610

void __thiscall FOITSceneData::~FOITSceneData(FOITSceneData *this)

{
  TNode *pTVar1;
  TNode *pTVar2;
  FScriptContainerElement *pFVar3;
  
  pTVar1 = (this->FreeSlots).Tail;
  while (pTVar1 != (TNode *)0x0) {
    (this->FreeSlots).Tail = pTVar1->NextNode;
    ::operator_delete(pTVar1,0x10);
    pTVar1 = (this->FreeSlots).Tail;
  }
  pTVar2 = (this->PendingDeletes).Tail;
  while (pTVar2 != (TNode *)0x0) {
    (this->PendingDeletes).Tail = pTVar2->NextNode;
    ::operator_delete(pTVar2,0x10);
    pTVar2 = (this->PendingDeletes).Tail;
  }
  pFVar3 = (this->FreeBuffers).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->Allocations).AllocatorInstance.Data;
  if (pFVar3 == (FScriptContainerElement *)0x0) {
    return;
  }
  FMemory::Free(pFVar3);
  return;
}

