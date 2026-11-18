// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 11

// FOcclusionFeedback @ 145477740

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FOcclusionFeedback * __thiscall FOcclusionFeedback::FOcclusionFeedback(FOcclusionFeedback *this)

{
  FRenderResource::FRenderResource((FRenderResource *)this);
  this->_padding_ = (longlong)&___7FOcclusionFeedback__6B_;
  (this->BatchOcclusionQueries).AllocatorInstance.SecondaryData =
       (ForElementType<FOcclusionFeedback::FOcclusionBatch>)0x0;
  (this->BatchOcclusionQueries).ArrayNum = 0;
  (this->BatchOcclusionQueries).ArrayMax = 3;
  this->GPUFeedbackBuffer = (FRDGBuffer *)0x0;
  this->OcclusionBuffers[0].BatchedPrimitives.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  this->OcclusionBuffers[0].BatchedPrimitives.ArrayNum = 0;
  this->OcclusionBuffers[0].BatchedPrimitives.ArrayMax = 0;
  this->OcclusionBuffers[0].ReadbackBuffer = (FRHIGPUBufferReadback *)0x0;
  this->OcclusionBuffers[0].OcclusionFrameCounter = 0;
  this->OcclusionBuffers[1].BatchedPrimitives.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  this->OcclusionBuffers[1].BatchedPrimitives.ArrayNum = 0;
  this->OcclusionBuffers[1].BatchedPrimitives.ArrayMax = 0;
  this->OcclusionBuffers[1].ReadbackBuffer = (FRHIGPUBufferReadback *)0x0;
  this->OcclusionBuffers[1].OcclusionFrameCounter = 0;
  this->OcclusionBuffers[2].BatchedPrimitives.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  this->OcclusionBuffers[2].BatchedPrimitives.ArrayNum = 0;
  this->OcclusionBuffers[2].BatchedPrimitives.ArrayMax = 0;
  this->OcclusionBuffers[2].ReadbackBuffer = (FRHIGPUBufferReadback *)0x0;
  this->OcclusionBuffers[2].OcclusionFrameCounter = 0;
  *(undefined8 *)&(this->LatestOcclusionResults).Elements = 0;
  *(undefined8 *)&(this->LatestOcclusionResults).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->LatestOcclusionResults).Elements.field_0x20 = 0;
  this->CurrentBufferIndex = 0;
  *(undefined4 *)&(this->LatestOcclusionResults).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->LatestOcclusionResults).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->LatestOcclusionResults).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->LatestOcclusionResults).Elements.field_0x30 = 0xffffffff;
  (this->LatestOcclusionResults).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->LatestOcclusionResults).HashSize = 0;
  this->ResultsOcclusionFrameCounter = 0;
  (this->OcclusionVertexDeclarationRHI).Reference = (FRHIVertexDeclaration *)0x0;
  return this;
}

// ~FOcclusionFeedback @ 145479250

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall FOcclusionFeedback::~FOcclusionFeedback(FOcclusionFeedback *this)

{
  FRHIResource *this_00;
  ForElementType<FSetElementId> FVar1;
  FScriptContainerElement *pFVar2;
  ForElementType<FOcclusionFeedback::FOcclusionBatch> FVar3;
  longlong lVar4;
  FOcclusionBuffer *pFVar5;
  
  this->_padding_ = (longlong)&___7FOcclusionFeedback__6B_;
  this_00 = (FRHIResource *)(this->OcclusionVertexDeclarationRHI).Reference;
  if (this_00 != (FRHIResource *)0x0) {
    FRHIResource::Release(this_00);
  }
  (this->LatestOcclusionResults).HashSize = 0;
  FVar1 = (this->LatestOcclusionResults).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<FPrimitiveOcclusionHistoryKey>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FPrimitiveOcclusionHistoryKey>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->LatestOcclusionResults).Elements);
  pFVar5 = (FOcclusionBuffer *)&this->CurrentBufferIndex;
  lVar4 = 3;
  do {
    pFVar2 = pFVar5[-1].BatchedPrimitives.AllocatorInstance.Data;
    pFVar5 = pFVar5 + -1;
    lVar4 = lVar4 + -1;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
  } while (lVar4 != 0);
  FVar3 = (this->BatchOcclusionQueries).AllocatorInstance.SecondaryData;
  if (FVar3 != (ForElementType<FOcclusionFeedback::FOcclusionBatch>)0x0) {
    FMemory::Free((void *)FVar3);
  }
  FRenderResource::~FRenderResource((FRenderResource *)this);
  return;
}

// AddPrimitive @ 145491db0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FOcclusionFeedback::AddPrimitive
          (FOcclusionFeedback *this,FPrimitiveOcclusionHistoryKey *param_1,TVector<double> *param_2,
          TVector<double> *param_3,FGlobalDynamicVertexBuffer *param_4)

{
  TArray<FOcclusionFeedback::FOcclusionBatch,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>_>
  *pTVar1;
  int *piVar2;
  longlong *plVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  float *pfVar10;
  FPrimitiveOcclusionHistoryKey *pFVar11;
  code *pcVar12;
  bool bVar13;
  uint uVar14;
  int iVar15;
  FGlobalDynamicVertexBufferAllocation *pFVar16;
  ForElementType<FOcclusionFeedback::FOcclusionBatch> FVar17;
  ForElementType<FOcclusionFeedback::FOcclusionBatch> FVar18;
  longlong lVar19;
  longlong lVar20;
  uint uVar21;
  FOcclusionBuffer *pFVar22;
  FGlobalDynamicVertexBufferAllocation local_58;
  uchar *local_40;
  FVertexBuffer *pFStack_38;
  ulonglong local_30;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pTVar1 = &this->BatchOcclusionQueries;
  iVar15 = (this->BatchOcclusionQueries).ArrayNum;
  if (iVar15 != 0) {
    uVar14 = 0;
    if ((int)(iVar15 - 1U) < iVar15) {
      uVar14 = ~(iVar15 - 1U) >> 0x1f;
    }
    if ((uVar14 == 0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar13)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    FVar18 = (this->BatchOcclusionQueries).AllocatorInstance.SecondaryData;
    if (FVar18 == (ForElementType<FOcclusionFeedback::FOcclusionBatch>)0x0) {
      FVar18 = (ForElementType<FOcclusionFeedback::FOcclusionBatch>)pTVar1;
    }
    if ((uint)((longlong *)((longlong)FVar18 + -8))
              [(longlong)(this->BatchOcclusionQueries).ArrayNum * 4] < 0x200) goto LAB_145491fb5;
  }
  local_40 = (uchar *)0x0;
  pFStack_38 = (FVertexBuffer *)0x0;
  local_30 = local_30 & 0xffffffff00000000;
  uStack_28 = 0;
  pFVar16 = FGlobalDynamicVertexBuffer::Allocate(param_4,&local_58,0x4000);
  local_40 = pFVar16->Buffer;
  pFStack_38 = pFVar16->VertexBuffer;
  local_30 = *(ulonglong *)&pFVar16->VertexOffset;
  if ((local_40 == (uchar *)0x0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("OcclusionBatch.VertexAllocation.IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneOcclusion.cpp"
                          ,0x70f,L""), bVar13)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  FVar18 = (this->BatchOcclusionQueries).AllocatorInstance.SecondaryData;
  FVar17 = FVar18;
  if (FVar18 == (ForElementType<FOcclusionFeedback::FOcclusionBatch>)0x0) {
    FVar17 = (ForElementType<FOcclusionFeedback::FOcclusionBatch>)pTVar1;
  }
  if ((ulonglong)FVar17 <= &local_40) {
    if (FVar18 == (ForElementType<FOcclusionFeedback::FOcclusionBatch>)0x0) {
      FVar18 = (ForElementType<FOcclusionFeedback::FOcclusionBatch>)pTVar1;
    }
    if ((&local_40 <
         (uchar **)((longlong)FVar18 + (longlong)(this->BatchOcclusionQueries).ArrayMax * 0x20)) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar13)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
  }
  iVar15 = (this->BatchOcclusionQueries).ArrayNum;
  piVar2 = &(this->BatchOcclusionQueries).ArrayMax;
  if (iVar15 == *piVar2) {
    iVar15 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>::ForElementType<FOcclusionFeedback::FOcclusionBatch>_>
                       (0x820,&pTVar1->AllocatorInstance,piVar2);
  }
  (this->BatchOcclusionQueries).ArrayNum = iVar15 + 1;
  FVar18 = (this->BatchOcclusionQueries).AllocatorInstance.SecondaryData;
  if (FVar18 == (ForElementType<FOcclusionFeedback::FOcclusionBatch>)0x0) {
    FVar18 = (ForElementType<FOcclusionFeedback::FOcclusionBatch>)pTVar1;
  }
  plVar3 = (longlong *)((longlong)FVar18 + (longlong)iVar15 * 0x20);
  *plVar3 = (longlong)local_40;
  plVar3[1] = (longlong)pFStack_38;
  *(ulonglong *)((uchar *)((longlong)FVar18 + 0x10) + (longlong)iVar15 * 0x20) = local_30;
  *(ulonglong *)((uchar *)((longlong)FVar18 + 0x10) + (longlong)iVar15 * 0x20 + 8) =
       CONCAT44(uStack_24,uStack_28);
LAB_145491fb5:
  iVar15 = (this->BatchOcclusionQueries).ArrayNum;
  uVar21 = iVar15 - 1;
  uVar14 = 0;
  if ((int)uVar21 < iVar15) {
    uVar14 = ~uVar21 >> 0x1f;
  }
  if ((uVar14 == 0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar13)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  FVar18 = (this->BatchOcclusionQueries).AllocatorInstance.SecondaryData;
  lVar19 = (longlong)(this->BatchOcclusionQueries).ArrayNum;
  dVar4 = (param_2->field0_0x0)._s_0.X;
  dVar5 = (param_2->field0_0x0)._s_0.Y;
  if (FVar18 == (ForElementType<FOcclusionFeedback::FOcclusionBatch>)0x0) {
    FVar18 = (ForElementType<FOcclusionFeedback::FOcclusionBatch>)pTVar1;
  }
  dVar6 = (param_2->field0_0x0)._s_0.Z;
  dVar7 = (param_3->field0_0x0)._s_0.X;
  lVar20 = lVar19 * 0x20;
  pfVar10 = *(float **)
             ((((FOcclusionFeedback *)((longlong)FVar18 + -0x20))->BatchOcclusionQueries).
              AllocatorInstance.InlineData + lVar20 + -0x20);
  dVar8 = (param_3->field0_0x0)._s_0.Y;
  dVar9 = (param_3->field0_0x0)._s_0.Z;
  *(int *)((longlong *)((longlong)FVar18 + -8) + lVar19 * 4) =
       (int)((longlong *)((longlong)FVar18 + -8))[lVar19 * 4] + 1;
  *pfVar10 = (float)dVar4;
  pfVar10[1] = (float)dVar5;
  pfVar10[2] = (float)dVar6;
  pfVar10[3] = 0.0;
  pfVar10[4] = (float)dVar7;
  pfVar10[5] = (float)dVar8;
  pfVar10[6] = (float)dVar9;
  pfVar10[7] = 0.0;
  *(float **)
   ((((FOcclusionFeedback *)((longlong)FVar18 + -0x20))->BatchOcclusionQueries).AllocatorInstance.
    InlineData + lVar20 + -0x20) = pfVar10 + 8;
  pFVar22 = this->OcclusionBuffers + this->CurrentBufferIndex;
  pFVar11 = (FPrimitiveOcclusionHistoryKey *)(pFVar22->BatchedPrimitives).AllocatorInstance.Data;
  if (((pFVar11 <= param_1) && (param_1 < pFVar11 + (pFVar22->BatchedPrimitives).ArrayMax)) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar13)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  iVar15 = (pFVar22->BatchedPrimitives).ArrayNum;
  piVar2 = &(pFVar22->BatchedPrimitives).ArrayMax;
  if (iVar15 == *piVar2) {
    iVar15 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x408,(ForAnyElementType *)pFVar22,piVar2);
  }
  (pFVar22->BatchedPrimitives).ArrayNum = iVar15 + 1;
  *(FPrimitiveOcclusionHistoryKey *)
   ((pFVar22->BatchedPrimitives).AllocatorInstance.Data + (longlong)iVar15 * 8) = *param_1;
  return;
}

// AdvanceFrame @ 145492e20

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall FOcclusionFeedback::AdvanceFrame(FOcclusionFeedback *this,uint param_1)

{
  int *piVar1;
  uint uVar2;
  
  uVar2 = (this->CurrentBufferIndex + 1) % 3;
  this->CurrentBufferIndex = uVar2;
  piVar1 = &this->OcclusionBuffers[uVar2].BatchedPrimitives.ArrayMax;
  this->OcclusionBuffers[uVar2].BatchedPrimitives.ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,(ForAnyElementType *)(this->OcclusionBuffers + uVar2),0,piVar1);
  }
  this->OcclusionBuffers[uVar2].OcclusionFrameCounter = param_1;
  return;
}

// BeginOcclusionScope @ 145495910

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FOcclusionFeedback::BeginOcclusionScope(FOcclusionFeedback *this,FRDGBuilder *param_1)

{
  code *pcVar1;
  bool bVar2;
  byte bVar3;
  FRDGBufferUAV *pFVar4;
  FRDGBufferUAVDesc local_48;
  undefined4 local_38;
  uint uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  FRDGBufferDesc local_20;
  
  if (this->GPUFeedbackBuffer != (FRDGBuffer *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("GPUFeedbackBuffer == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneOcclusion.cpp"
                       ,0x69a,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  uStack_30 = 0x10109;
  local_38 = 4;
  local_28 = 0;
  uStack_34 = this->OcclusionBuffers[this->CurrentBufferIndex].BatchedPrimitives.ArrayNum;
  local_20.Metadata = (FShaderParametersMetadata *)0x0;
  if ((int)uStack_34 < 1) {
    uStack_34 = 1;
  }
  local_20.NumElements = uStack_34;
  local_20.BytesPerElement = 4;
  local_20._12_4_ = uStack_2c;
  local_20.Usage = StructuredBuffer|ShaderResource|SourceCopy|UnorderedAccess|Static;
  local_48.Buffer = FRDGBuilder::CreateBuffer(param_1,&local_20,L"FeedbackOcclusionBuffer",None);
  this->GPUFeedbackBuffer = local_48.Buffer;
  local_48._padding_._2_1_ = 0;
  bVar3 = 0;
  if ((((local_48.Buffer)->Desc).Usage & DrawIndirect) != None) {
    bVar3 = 0x1c;
  }
  local_48._padding_._0_2_ = (ushort)bVar3;
  pFVar4 = FRDGBuilder::CreateUAV(param_1,&local_48,None);
  AddClearUAVPass(param_1,pFVar4,0,Compute);
  return;
}

// EndOcclusionScope @ 1454a1da0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall FOcclusionFeedback::EndOcclusionScope(FOcclusionFeedback *this,FRDGBuilder *param_1)

{
  uint uVar1;
  FRHIGPUBufferReadback *pFVar2;
  code *pcVar3;
  bool bVar4;
  
  uVar1 = this->CurrentBufferIndex;
  pFVar2 = this->OcclusionBuffers[uVar1].ReadbackBuffer;
  if (pFVar2 == (FRHIGPUBufferReadback *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("ReadbackBuffer",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneOcclusion.cpp"
                       ,0x6aa,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  AddEnqueueCopyPass(param_1,pFVar2,this->GPUFeedbackBuffer,
                     this->OcclusionBuffers[uVar1].BatchedPrimitives.ArrayNum << 2);
  this->GPUFeedbackBuffer = (FRDGBuffer *)0x0;
  return;
}

// InitRHI @ 1454ab3a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall FOcclusionFeedback::InitRHI(FOcclusionFeedback *this,FRHICommandListBase *param_1)

{
  FRHIResource *this_00;
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FRHIGPUBufferReadback *pFVar4;
  FName *pFVar5;
  FRHIGPUBufferReadback *pFVar6;
  FRHIGPUBufferReadback *pFVar7;
  FRHIResource *this_01;
  longlong lVar8;
  undefined1 auStack_118 [32];
  undefined1 *local_f8;
  longlong local_f0;
  longlong local_e8;
  longlong local_e0;
  undefined8 local_d8;
  undefined2 local_c8;
  undefined4 uStack_c6;
  undefined2 uStack_c2;
  undefined2 local_c0;
  undefined4 uStack_be;
  undefined2 uStack_ba;
  undefined2 local_b8;
  undefined4 uStack_b6;
  undefined2 uStack_b2;
  undefined1 local_b0 [8];
  undefined8 local_a8 [17];
  int local_20;
  int local_1c;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_118;
  pFVar4 = ::operator_new(0x58);
  pFVar7 = (FRHIGPUBufferReadback *)0x0;
  pFVar6 = pFVar7;
  if (pFVar4 != (FRHIGPUBufferReadback *)0x0) {
    pFVar5 = ::FName::FName((FName *)local_b0,L"FeedbackOcclusionBuffer.Readback");
    pFVar6 = FRHIGPUBufferReadback::FRHIGPUBufferReadback(pFVar4,*pFVar5);
  }
  this->OcclusionBuffers[0].ReadbackBuffer = pFVar6;
  pFVar4 = ::operator_new(0x58);
  pFVar6 = pFVar7;
  if (pFVar4 != (FRHIGPUBufferReadback *)0x0) {
    pFVar5 = ::FName::FName((FName *)local_b0,L"FeedbackOcclusionBuffer.Readback");
    pFVar6 = FRHIGPUBufferReadback::FRHIGPUBufferReadback(pFVar4,*pFVar5);
  }
  this->OcclusionBuffers[1].ReadbackBuffer = pFVar6;
  pFVar6 = ::operator_new(0x58);
  if (pFVar6 != (FRHIGPUBufferReadback *)0x0) {
    pFVar5 = ::FName::FName((FName *)local_b0,L"FeedbackOcclusionBuffer.Readback");
    pFVar7 = FRHIGPUBufferReadback::FRHIGPUBufferReadback(pFVar6,*pFVar5);
  }
  this->OcclusionBuffers[2].ReadbackBuffer = pFVar7;
  local_20 = 0;
  local_1c = 0x11;
  local_c8 = 0;
  uStack_c6 = 0x100004;
  uStack_c2 = 0;
  iVar3 = 0;
  if ((local_a8 <= &local_c8) &&
     (&local_c8 < &((TArray<FVertexElement,TFixedAllocator<17>_> *)local_a8)->ArrayNum)) {
    local_d8 = 8;
    local_f0 = (longlong)local_a8;
    local_e0 = 0;
    local_e8 = 0x11;
    local_f8 = (undefined1 *)&local_c8;
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    iVar3 = local_20;
    if (local_20 == local_1c) {
      iVar3 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                        (0x208,(ForElementType<FVertexElement> *)local_a8,
                         &((TArray<FVertexElement,TFixedAllocator<17>_> *)local_a8)->ArrayMax);
    }
  }
  local_20 = iVar3 + 1;
  local_c0 = 1;
  uStack_be = 0x200104;
  uStack_ba = 1;
  (((TArray<FVertexElement,TFixedAllocator<17>_> *)local_a8)->AllocatorInstance).InlineData[iVar3] =
       (TTypeCompatibleBytes<FVertexElement>)CONCAT26(uStack_c2,CONCAT42(uStack_c6,local_c8));
  if ((local_a8 <= &local_c0) &&
     (&local_c0 <
      (((TArray<FVertexElement,TFixedAllocator<17>_> *)local_a8)->AllocatorInstance).InlineData +
      local_1c)) {
    local_e0 = (longlong)local_20;
    local_d8 = 8;
    local_f0 = (longlong)local_a8;
    local_f8 = (undefined1 *)&local_c0;
    local_e8 = (longlong)local_1c;
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (local_20 == local_1c) {
    local_20 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                         (0x208,(ForElementType<FVertexElement> *)local_a8,
                          &((TArray<FVertexElement,TFixedAllocator<17>_> *)local_a8)->ArrayMax);
  }
  local_b8 = 0x1001;
  lVar8 = (longlong)local_20;
  uStack_b6 = 0x200204;
  uStack_b2 = 1;
  local_20 = local_20 + 1;
  (((TArray<FVertexElement,TFixedAllocator<17>_> *)local_a8)->AllocatorInstance).InlineData[lVar8] =
       (TTypeCompatibleBytes<FVertexElement>)CONCAT26(uStack_ba,CONCAT42(uStack_be,local_c0));
  if ((local_a8 <= &local_b8) &&
     (&local_b8 <
      (((TArray<FVertexElement,TFixedAllocator<17>_> *)local_a8)->AllocatorInstance).InlineData +
      local_1c)) {
    local_e0 = (longlong)local_20;
    local_d8 = 8;
    local_f0 = (longlong)local_a8;
    local_f8 = (undefined1 *)&local_b8;
    local_e8 = (longlong)local_1c;
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (local_20 == local_1c) {
    local_20 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                         (0x208,(ForElementType<FVertexElement> *)local_a8,
                          &((TArray<FVertexElement,TFixedAllocator<17>_> *)local_a8)->ArrayMax);
  }
  lVar8 = (longlong)local_20;
  local_20 = local_20 + 1;
  (((TArray<FVertexElement,TFixedAllocator<17>_> *)local_a8)->AllocatorInstance).InlineData[lVar8] =
       (TTypeCompatibleBytes<FVertexElement>)CONCAT26(uStack_b2,CONCAT42(uStack_b6,local_b8));
  this_01 = (FRHIResource *)
            PipelineStateCache::GetOrCreateVertexDeclaration
                      ((TArray<FVertexElement,TFixedAllocator<17>_> *)local_a8);
  this_00 = (FRHIResource *)(this->OcclusionVertexDeclarationRHI).Reference;
  if (this_00 != this_01) {
    (this->OcclusionVertexDeclarationRHI).Reference = (FRHIVertexDeclaration *)this_01;
    if (this_01 != (FRHIResource *)0x0) {
      FRHIResource::AddRef(this_01);
    }
    if (this_00 != (FRHIResource *)0x0) {
      FRHIResource::Release(this_00);
    }
  }
  return;
}

// ReadbackResults @ 1454b41e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
FOcclusionFeedback::ReadbackResults(FOcclusionFeedback *this,FRHICommandListImmediate *param_1)

{
  int iVar1;
  FRHIGPUBufferReadback *pFVar2;
  longlong *plVar3;
  code *pcVar4;
  char cVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  ForElementType<unsigned_int> FVar9;
  ForElementType<unsigned_int> FVar10;
  int *piVar11;
  longlong lVar12;
  ForElementType<unsigned_int> FVar13;
  TSet<FPrimitiveOcclusionHistoryKey,DefaultKeyFuncs<FPrimitiveOcclusionHistoryKey,0>,FDefaultSetAllocator>
  *this_00;
  uint uVar14;
  FOcclusionBuffer *pFVar15;
  undefined1 auStackY_d8 [32];
  uint local_88;
  uint local_84;
  FScopeIdle local_80;
  int local_78;
  char local_74;
  DWORD local_70;
  FPrimitiveOcclusionHistoryKey local_68;
  LARGE_INTEGER local_60;
  LARGE_INTEGER local_58;
  ForElementType<unsigned_int> local_50;
  uint local_38;
  uint local_34;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  uVar14 = 1;
  FVar13 = (ForElementType<unsigned_int>)0x0;
  local_50.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_38 = 0;
  local_34 = 3;
  FVar10 = FVar13;
  FVar9 = FVar13;
  while( true ) {
    local_88 = (this->CurrentBufferIndex + uVar14) % 3;
    uVar7 = FVar9._0_4_;
    if (this->OcclusionBuffers[local_88].BatchedPrimitives.ArrayNum == 0) break;
    if (this->ResultsOcclusionFrameCounter < this->OcclusionBuffers[local_88].OcclusionFrameCounter)
    {
      pFVar2 = this->OcclusionBuffers[local_88].ReadbackBuffer;
      lVar12 = pFVar2->_padding_;
      if ((lVar12 != 0) &&
         ((FVar10 = local_50.SecondaryData, uVar7 = local_38, *(int *)(lVar12 + 0x18) != 0 ||
          (cVar5 = (**(code **)(*(longlong *)pFVar2->_padding_ + 0x20))(),
          FVar10 = local_50.SecondaryData, uVar7 = local_38, cVar5 == '\0')))) break;
      FVar9 = (ForElementType<unsigned_int>)&local_50;
      if (FVar10 != (ForElementType<unsigned_int>)0x0) {
        FVar9 = FVar10;
      }
      if ((ulonglong)FVar9 <= &local_88) {
        FVar9 = (ForElementType<unsigned_int>)&local_50;
        if (FVar10 != (ForElementType<unsigned_int>)0x0) {
          FVar9 = FVar10;
        }
        if ((&local_88 < (uint *)((longlong)FVar9 + (longlong)(int)local_34 * 4)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), FVar10 = local_50.SecondaryData, uVar7 = local_38, bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      if (uVar7 == local_34) {
        uVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
                          (0x404,&local_50,(int *)&local_34);
        FVar10 = local_50.SecondaryData;
      }
      local_38 = uVar7 + 1;
      FVar9 = (ForElementType<unsigned_int>)&local_50;
      if (FVar10 != (ForElementType<unsigned_int>)0x0) {
        FVar9 = FVar10;
      }
      *(uint *)((longlong)FVar9 + (longlong)(int)uVar7 * 4) = local_88;
      FVar9._4_4_ = 0;
      FVar9._0_4_ = local_38;
      FVar10 = local_50.SecondaryData;
    }
    uVar7 = FVar9._0_4_;
    uVar14 = uVar14 + 1;
    if (3 < uVar14) break;
  }
  if (((uVar7 == 0) &&
      (uVar14 = (this->CurrentBufferIndex + 1) % 3, local_84 = uVar14,
      0 < this->OcclusionBuffers[uVar14].BatchedPrimitives.ArrayNum)) &&
     (this->ResultsOcclusionFrameCounter < this->OcclusionBuffers[uVar14].OcclusionFrameCounter)) {
    bVar6 = IsInRHIThread();
    UE::Stats::FThreadIdleStats::FScopeIdle::FScopeIdle(&local_80,!bVar6);
    local_78 = 1;
    bVar6 = IsInRenderingThread();
    if (bVar6) {
      local_74 = '\x01';
      QueryPerformanceCounter(&local_60);
      local_70 = local_60.s.LowPart;
    }
    else {
      local_74 = '\0';
      local_70 = 0;
    }
    plVar3 = (longlong *)(this->OcclusionBuffers[uVar14].ReadbackBuffer)->_padding_;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x28))
                (plVar3,param_1,(1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1);
    }
    FVar10 = (ForElementType<unsigned_int>)&local_50;
    if (local_50.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar10 = local_50.SecondaryData;
    }
    if ((ulonglong)FVar10 <= &local_84) {
      FVar10 = (ForElementType<unsigned_int>)&local_50;
      if (local_50.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FVar10 = local_50.SecondaryData;
      }
      if ((&local_84 < (uint *)((longlong)FVar10 + (longlong)(int)local_34 * 4)) &&
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
    }
    if (local_38 == local_34) {
      local_38 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
                           (0x404,&local_50,(int *)&local_34);
    }
    FVar10 = (ForElementType<unsigned_int>)&local_50;
    if (local_50.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar10 = local_50.SecondaryData;
    }
    lVar12 = (longlong)(int)local_38;
    local_38 = local_38 + 1;
    *(uint *)((longlong)FVar10 + lVar12 * 4) = local_84;
    if (local_74 != '\0') {
      QueryPerformanceCounter(&local_58);
      GRenderThreadIdle[local_78] = GRenderThreadIdle[local_78] + (local_58.s.LowPart - local_70);
    }
    UE::Stats::FThreadIdleStats::FScopeIdle::~FScopeIdle(&local_80);
    FVar10 = local_50.SecondaryData;
    uVar7 = local_38;
  }
  else if (uVar7 == 0) goto LAB_1454b46e8;
  uVar14 = 0;
  if ((int)(uVar7 - 1) < (int)uVar7) {
    uVar14 = ~(uVar7 - 1) >> 0x1f;
  }
  if ((uVar14 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     FVar10 = local_50.SecondaryData, uVar7 = local_38, bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  FVar9 = (ForElementType<unsigned_int>)&local_50;
  if (FVar10 != (ForElementType<unsigned_int>)0x0) {
    FVar9 = FVar10;
  }
  pFVar15 = this->OcclusionBuffers + *(uint *)((longlong)FVar9 + (longlong)(int)(uVar7 - 1) * 4);
  this->ResultsOcclusionFrameCounter = pFVar15->OcclusionFrameCounter;
  this_00 = &this->LatestOcclusionResults;
  if (*(int *)&(this->LatestOcclusionResults).Elements.field_0x8 !=
      *(int *)&(this->LatestOcclusionResults).Elements.field_0x34) {
    TSet<FPrimitiveOcclusionHistoryKey,DefaultKeyFuncs<FPrimitiveOcclusionHistoryKey,0>,FDefaultSetAllocator>
    ::UnhashElements(this_00);
    iVar1 = *(int *)&(this->LatestOcclusionResults).Elements.field_0xc;
    *(undefined4 *)&(this->LatestOcclusionResults).Elements.field_0x8 = 0;
    if (iVar1 < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,0,(ForAnyElementType *)this_00,0,
                 (int *)&(this->LatestOcclusionResults).Elements.field_0xc);
    }
    *(undefined4 *)&(this->LatestOcclusionResults).Elements.field_0x30 = 0xffffffff;
    *(undefined4 *)&(this->LatestOcclusionResults).Elements.field_0x34 = 0;
    *(undefined4 *)&(this->LatestOcclusionResults).Elements.field_0x28 = 0;
  }
  uVar14 = (pFVar15->BatchedPrimitives).ArrayNum;
  piVar11 = FRHIGPUBufferReadback::Lock(pFVar15->ReadbackBuffer,uVar14 * 4);
  if (uVar14 != 0) {
    do {
      uVar7 = FVar13._0_4_;
      if (*piVar11 == 0) {
        uVar8 = 0;
        if ((int)uVar7 < (pFVar15->BatchedPrimitives).ArrayNum) {
          uVar8 = ~uVar7 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        TSet<FPrimitiveOcclusionHistoryKey,DefaultKeyFuncs<FPrimitiveOcclusionHistoryKey,0>,FDefaultSetAllocator>
        ::Emplace<FPrimitiveOcclusionHistoryKey_const_&>
                  (this_00,&local_68,
                   (bool *)((pFVar15->BatchedPrimitives).AllocatorInstance.Data +
                           (longlong)(int)uVar7 * 8));
      }
      FVar13._0_4_ = uVar7 + 1;
      FVar13._4_4_ = 0;
      piVar11 = piVar11 + 1;
    } while (FVar13._0_4_ < uVar14);
  }
  FRHIGPUBufferReadback::Unlock(pFVar15->ReadbackBuffer);
  FVar10 = local_50.SecondaryData;
LAB_1454b46e8:
  if (FVar10 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)FVar10);
  }
  return;
}

// ReleaseRHI @ 1454b4f80

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall FOcclusionFeedback::ReleaseRHI(FOcclusionFeedback *this)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  TSet<FPrimitiveOcclusionHistoryKey,DefaultKeyFuncs<FPrimitiveOcclusionHistoryKey,0>,FDefaultSetAllocator>
  *this_00;
  int iVar3;
  undefined8 *puVar4;
  FRHIResource *this_01;
  bool bVar5;
  longlong lVar6;
  uint uVar7;
  undefined8 *puVar8;
  int *piVar9;
  
  uVar7 = 0;
  piVar9 = &(this->BatchOcclusionQueries).ArrayMax;
  (this->BatchOcclusionQueries).ArrayNum = 0;
  if (*piVar9 != 0) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>::ForElementType<FOcclusionFeedback::FOcclusionBatch>_>
              (0x20,8,0,&(this->BatchOcclusionQueries).AllocatorInstance,0,piVar9);
  }
  piVar9 = &this->OcclusionBuffers[0].BatchedPrimitives.ArrayMax;
  do {
    puVar4 = *(undefined8 **)(piVar9 + 1);
    if (puVar4 != (undefined8 *)0x0) {
      puVar8 = puVar4 + 0xb;
      lVar6 = 8;
      do {
        puVar1 = puVar8 + -1;
        puVar8 = puVar8 + -1;
        lVar6 = lVar6 + -1;
        if ((FRHIResource *)*puVar1 != (FRHIResource *)0x0) {
          FRHIResource::Release((FRHIResource *)*puVar1);
        }
      } while (lVar6 != 0);
      *puVar4 = &___7FRHIGPUMemoryReadback__6B_;
      if ((FRHIResource *)puVar4[1] != (FRHIResource *)0x0) {
        FRHIResource::Release((FRHIResource *)puVar4[1]);
      }
      ::operator_delete(puVar4,0x58);
    }
    *(undefined8 *)(piVar9 + 1) = 0;
    piVar9[-1] = 0;
    if (*piVar9 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,0,(ForAnyElementType *)(piVar9 + -3),0,piVar9);
    }
    uVar7 = uVar7 + 1;
    piVar9 = piVar9 + 8;
  } while (uVar7 < 3);
  this->CurrentBufferIndex = 0;
  this_01 = (FRHIResource *)(this->OcclusionVertexDeclarationRHI).Reference;
  if (this_01 != (FRHIResource *)0x0) {
    (this->OcclusionVertexDeclarationRHI).Reference = (FRHIVertexDeclaration *)0x0;
    FRHIResource::Release(this_01);
  }
  this_00 = &this->LatestOcclusionResults;
  this->GPUFeedbackBuffer = (FRDGBuffer *)0x0;
  bVar5 = 1 < (this->LatestOcclusionResults).HashSize;
  if (!bVar5) {
    TSet<FPrimitiveOcclusionHistoryKey,DefaultKeyFuncs<FPrimitiveOcclusionHistoryKey,0>,FDefaultSetAllocator>
    ::UnhashElements(this_00);
  }
  puVar2 = &(this->LatestOcclusionResults).Elements.field_0xc;
  *(undefined4 *)&(this->LatestOcclusionResults).Elements.field_0x8 = 0;
  if (*(int *)puVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,(ForAnyElementType *)this_00,0,(int *)puVar2);
  }
  *(undefined4 *)&(this->LatestOcclusionResults).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->LatestOcclusionResults).Elements.field_0x34 = 0;
  iVar3 = *(int *)&(this->LatestOcclusionResults).Elements.field_0x2c;
  *(undefined4 *)&(this->LatestOcclusionResults).Elements.field_0x28 = 0;
  if ((iVar3 < 0) || (0x80 < iVar3)) {
    *(undefined4 *)&(this->LatestOcclusionResults).Elements.field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)
               &(this->LatestOcclusionResults).Elements.field_0x10,0);
  }
  if (bVar5) {
    (this->LatestOcclusionResults).HashSize = 1;
    TSet<FPrimitiveOcclusionHistoryKey,DefaultKeyFuncs<FPrimitiveOcclusionHistoryKey,0>,FDefaultSetAllocator>
    ::Rehash(this_00);
  }
  return;
}

// SubmitOcclusionDraws @ 1454bcac0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EApplyRendertargetOption": Some values do not have unique names */

void __thiscall
FOcclusionFeedback::SubmitOcclusionDraws
          (FOcclusionFeedback *this,FRHICommandList *param_1,FViewInfo *param_2)

{
  int *piVar1;
  char cVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  FRHIBuffer *pFVar6;
  FGlobalShaderMap *pFVar7;
  FShaderMapResource *pFVar8;
  ForElementType<FOcclusionFeedback::FOcclusionBatch> FVar9;
  code *pcVar10;
  FOcclusionFeedbackVS *this_00;
  FShaderMapBase *pFVar11;
  bool bVar12;
  TRefCountPtr<FRHIBuffer> *pTVar13;
  FShaderType *pFVar14;
  FName FVar15;
  atomic<FRHIShader_*> aVar16;
  FViewShaderParameters *pFVar17;
  IRHICommandContext *pIVar18;
  FShaderParametersMetadata *pFVar19;
  undefined8 *puVar20;
  FName *pFVar21;
  FThreadSafeStaticStat<FStat_STAT_OcclusionQueries> FVar22;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  longlong lVar23;
  uchar auVar24 [8];
  ForElementType<FOcclusionFeedback::FOcclusionBatch> FVar25;
  uint uVar26;
  undefined1 auStackY_2b8 [32];
  int local_258;
  uint local_254;
  longlong local_250;
  TShaderRefBase<FOcclusionFeedbackVS,FShaderMapPointerTable> local_248;
  ForElementType<FOcclusionFeedback::FOcclusionBatch> local_238;
  FRHIBuffer *local_230;
  longlong local_228;
  ForElementType<FOcclusionFeedback::FOcclusionBatch> local_220;
  FViewInfo *local_218;
  FOcclusionFeedback *local_210;
  FName local_208;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_200;
  FStatMessage local_1f0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  int local_1b8;
  uint local_1b4;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_1a8;
  undefined1 local_198 [8];
  undefined1 local_190 [8];
  FName local_188;
  FString local_180;
  FString local_170;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_158;
  FViewShaderParameters local_148;
  FGraphicsPipelineStateInitializer local_128;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_2b8;
  if ((this->BatchOcclusionQueries).ArrayNum != 0) {
    local_218 = param_2;
    local_210 = this;
    pTVar13 = GetUnitCubeIndexBuffer();
    local_230 = pTVar13->Reference;
    pTVar13 = GetUnitCubeVertexBuffer();
    uVar4 = *(undefined8 *)((longlong)&(param_2->ViewRect).field0_0x0 + 8);
    uVar5 = *(undefined8 *)&(param_2->ViewRect).field0_0x0;
    pFVar6 = pTVar13->Reference;
    FRHICommandList::SetViewport
              (param_1,(float)(int)uVar5,(float)(int)((ulonglong)uVar5 >> 0x20),0.0,
               (float)(int)uVar4,(float)(int)((ulonglong)uVar4 >> 0x20),__real_3f800000);
    pFVar7 = param_2->ShaderMap;
    pFVar14 = (FShaderType *)FOcclusionFeedbackVS::GetStaticType();
    FGlobalShaderMap::GetShader(pFVar7,&local_1a8,pFVar14,0);
    if (local_1a8.ShaderContent == (FShader *)0x0) {
      FVar15 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_198);
      ::FName::ToString((FName *)FVar15,&local_180);
      FOcclusionFeedbackVS::GetStaticType();
      bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("Shader.IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                          ,0xc0,L"Failed to find shader type %s in Platform %s");
      if (local_180.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_180.Data.AllocatorInstance.Data);
      }
      if (bVar12) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
    }
    FOcclusionFeedbackVS::GetStaticType();
    bVar12 = GOcclusionFeeback_Blending == 2;
    pFVar7 = param_2->ShaderMap;
    local_248.ShaderContent = (FOcclusionFeedbackVS *)local_1a8.ShaderContent;
    local_248.ShaderMap = local_1a8.ShaderMap;
    pFVar14 = (FShaderType *)FOcclusionFeedbackPS::GetStaticType();
    FGlobalShaderMap::GetShader(pFVar7,&local_200,pFVar14,(uint)bVar12);
    if (local_200.ShaderContent == (FShader *)0x0) {
      FVar15 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_190);
      ::FName::ToString((FName *)FVar15,&local_170);
      FOcclusionFeedbackPS::GetStaticType();
      bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("Shader.IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                          ,0xc0,L"Failed to find shader type %s in Platform %s");
      if (local_170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_170.Data.AllocatorInstance.Data);
      }
      if (bVar12) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
    }
    FOcclusionFeedbackPS::GetStaticType();
    aVar16 = (atomic<FRHIShader_*>)0x0;
    local_128.RenderTargetsEnabled = 0;
    local_128.RenderTargetFormats.Elements[0] = '\0';
    local_128.RenderTargetFormats.Elements[1] = '\0';
    local_128.RenderTargetFormats.Elements[2] = '\0';
    local_128.RenderTargetFormats.Elements[3] = '\0';
    local_128.BoundShaderState.VertexDeclarationRHI = (FRHIVertexDeclaration *)0x0;
    local_128.BoundShaderState.VertexShaderRHI = (FRHIVertexShader *)0x0;
    local_128.BoundShaderState.PixelShaderRHI = (FRHIPixelShader *)0x0;
    local_128.BoundShaderState.MeshShaderRHI = (FRHIMeshShader *)0x0;
    local_128.BoundShaderState.AmplificationShaderRHI = (FRHIAmplificationShader *)0x0;
    local_128.BoundShaderState.GeometryShaderRHI = (FRHIGeometryShader *)0x0;
    local_128.BoundShaderState.WorkGraphMeshShaderRHI = (FRHIWorkGraphShader *)0x0;
    local_128.BlendState = (FRHIBlendState *)0x0;
    local_128.RasterizerState = (FRHIRasterizerState *)0x0;
    local_128.DepthStencilState = (FRHIDepthStencilState *)0x0;
    local_128.ImmutableSamplerState.ImmutableSamplers.Elements[0] = (FRHISamplerState *)0x0;
    local_128.ImmutableSamplerState.ImmutableSamplers.Elements[1] = (FRHISamplerState *)0x0;
    local_128.RenderTargetFlags.Elements[0] = None;
    local_128.RenderTargetFlags.Elements[1] = None;
    local_128.RenderTargetFlags.Elements[2] = None;
    local_128.RenderTargetFlags.Elements[3] = None;
    local_128.RenderTargetFlags.Elements[4] = None;
    local_128.RenderTargetFlags.Elements[5] = None;
    local_128.RenderTargetFlags.Elements[6] = None;
    local_128.RenderTargetFlags.Elements[7] = None;
    local_128.RenderTargetFormats.Elements[4] = '\0';
    local_128.RenderTargetFormats.Elements[5] = '\0';
    local_128.RenderTargetFormats.Elements[6] = '\0';
    local_128.RenderTargetFormats.Elements[7] = '\0';
    local_128.DepthStencilTargetFormat = PF_Unknown;
    local_128.DepthStencilTargetFlag = None;
    local_128.DepthTargetLoadAction = ENoAction;
    local_128.DepthTargetStoreAction = ENoAction;
    local_128.StencilTargetLoadAction = ENoAction;
    local_128.StencilTargetStoreAction = ENoAction;
    local_128.DepthStencilAccess.Value = DepthNop;
    local_128.NumSamples = 0;
    local_128.SubpassHint = None;
    local_128.SubpassIndex = '\0';
    local_128.ConservativeRasterization = Disabled;
    local_128.bDepthBounds = false;
    local_128.MultiViewCount = '\0';
    local_128.bHasFragmentDensityAttachment = false;
    local_128.bAllowVariableRateShading = true;
    local_128.ShadingRate = VRSSR_1x1;
    local_128.field25_0xd2 = (FGraphicsPipelineStateInitializer_u_210)0x0;
    local_128.StatePrecachePSOHash = 0;
    FRHICommandList::ApplyCachedRenderTargets(param_1,&local_128);
    local_128.BlendState =
         TStaticStateRHI<TStaticBlendState<0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
         ::StaticResource.StateRHI.Reference;
    if (GOcclusionFeeback_Blending == 1) {
      local_128.BlendState =
           TStaticStateRHI<TStaticBlendState<8,0,1,1,0,0,1,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
           ::StaticResource.StateRHI.Reference;
    }
    local_128.DepthStencilState =
         TStaticStateRHI<TStaticDepthStencilState<0,3,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
         ::StaticResource.StateRHI.Reference;
    local_128.BoundShaderState.VertexDeclarationRHI =
         (this->OcclusionVertexDeclarationRHI).Reference;
    local_128.PrimitiveType = PT_TriangleList;
    local_128.BoundShaderState.VertexShaderRHI =
         TShaderRefBase<FOcclusionFeedbackVS,FShaderMapPointerTable>::GetVertexShader
                   (&local_248,true);
    if (local_200.ShaderContent != (FShader *)0x0) {
      pFVar8 = ((local_200.ShaderMap)->Resource).Reference;
      if ((pFVar8 == (FShaderMapResource *)0x0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("Resource",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                              ,0x426,L""), bVar12)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      aVar16 = (pFVar8->RHIShaders).Ptr[(local_200.ShaderContent)->ResourceIndex];
      if ((aVar16 == (atomic<FRHIShader_*>)0x0) &&
         (aVar16 = (atomic<FRHIShader_*>)
                   FShaderMapResource::CreateShaderOrCrash
                             (pFVar8,(local_200.ShaderContent)->ResourceIndex,true),
         aVar16 == (atomic<FRHIShader_*>)0x0)) {
        if (4 < (byte)LogShaders._0_1_) {
          if (((local_200.ShaderMap)->PointerTable == (FShaderMapPointerTable *)0x0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("PointerTable",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                                  ,0x9b4,L""), bVar12)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          FShader::GetType(local_200.ShaderContent,(local_200.ShaderMap)->PointerTable);
          UE::Logging::Private::BasicLog<5>
                    ((FStaticBasicLogRecord *)
                     &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<FOcclusionFeedbackPS,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                      ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
        }
        aVar16 = (atomic<FRHIShader_*>)0x0;
      }
    }
    local_128.RasterizerState =
         TStaticStateRHI<TStaticRasterizerState<2,2,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
         ::StaticResource.StateRHI.Reference;
    if ((char)param_2->_padding_ != '\0') {
      local_128.RasterizerState =
           TStaticStateRHI<TStaticRasterizerState<2,1,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
           ::StaticResource.StateRHI.Reference;
    }
    local_128.BoundShaderState.PixelShaderRHI = (FRHIPixelShader *)aVar16;
    SetGraphicsPipelineState(param_1,&local_128,0,CheckApply,true);
    FRHICommandList::SetStreamSource(param_1,0,pFVar6,0);
    this_00 = local_248.ShaderContent;
    local_250 = (longlong)(this->BatchOcclusionQueries).ArrayNum;
    local_254 = 0;
    local_258 = 0;
    if (0 < local_250) {
      local_238 = (ForElementType<FOcclusionFeedback::FOcclusionBatch>)&this->BatchOcclusionQueries;
      local_228 = 0;
      do {
        lVar23 = local_228;
        FVar25 = local_238;
        uVar26 = 0;
        if ((int)local_254 < *(int *)((longlong)local_238 + 0x68)) {
          uVar26 = ~local_254 >> 0x1f;
        }
        if ((uVar26 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        FVar9 = *(ForElementType<FOcclusionFeedback::FOcclusionBatch> *)((longlong)FVar25 + 0x60);
        local_1d8 = 0;
        uStack_1d0 = CONCAT71(uStack_1d0._1_7_,1);
        if (FVar9 != (ForElementType<FOcclusionFeedback::FOcclusionBatch>)0x0) {
          FVar25 = FVar9;
        }
        local_1c8 = 0;
        uStack_1c0 = CONCAT71(uStack_1c0._1_7_,1);
        local_220 = FVar25;
        pFVar17 = FViewInfo::GetShaderParameters(param_2,&local_148);
        local_1d8 = *(undefined8 *)&pFVar17->View;
        uStack_1d0 = *(undefined8 *)&(pFVar17->View).field_0x8;
        local_1c8 = *(undefined8 *)&pFVar17->InstancedView;
        uStack_1c0 = *(undefined8 *)&(pFVar17->InstancedView).field_0x8;
        uVar3 = *(undefined4 *)(lVar23 + 0x10 + (longlong)FVar25);
        uVar4 = *(undefined8 *)(*(longlong *)(lVar23 + 8 + (longlong)FVar25) + 0x20);
        local_1b8 = local_258;
        if ((GRHICommandList.bLatchedBypass == false) || ((param_1->field_0x29b & 0x20) == 0)) {
          puVar20 = FMemStackBase::Alloc((FMemStackBase *)param_1,0x28,8);
          *(int *)&param_1->field_0x60 = *(int *)&param_1->field_0x60 + 1;
          **(undefined8 **)&param_1->field_0x30 = puVar20;
          *(undefined8 **)&param_1->field_0x30 = puVar20 + 1;
          puVar20[1] = 0;
          *puVar20 = &___7FRHICommandSetStreamSource__6B_;
          *(undefined4 *)(puVar20 + 2) = 1;
          puVar20[3] = uVar4;
          *(undefined4 *)(puVar20 + 4) = uVar3;
        }
        else {
          pIVar18 = FRHICommandListBase::GetContext((FRHICommandListBase *)param_1);
          (**(code **)(pIVar18->_padding_ + 0x198))(pIVar18,1,uVar4);
        }
        uVar26 = 0;
        cVar2 = *(char *)((longlong)&param_2->_padding_ + 3);
        do {
          aVar16 = (atomic<FRHIShader_*>)0x0;
          local_1b4 = uVar26;
          if ((FShader *)this_00 != (FShader *)0x0) {
            pFVar8 = ((local_248.ShaderMap)->Resource).Reference;
            if ((pFVar8 == (FShaderMapResource *)0x0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Resource",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                                    ,0x426,L""), bVar12)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            aVar16 = (pFVar8->RHIShaders).Ptr[*(int *)&this_00->field_0xd4];
            if ((aVar16 == (atomic<FRHIShader_*>)0x0) &&
               (aVar16 = (atomic<FRHIShader_*>)
                         FShaderMapResource::CreateShaderOrCrash
                                   (pFVar8,*(int *)&this_00->field_0xd4,true),
               pFVar11 = local_248.ShaderMap, aVar16 == (atomic<FRHIShader_*>)0x0)) {
              if (4 < (byte)LogShaders._0_1_) {
                if (((local_248.ShaderMap)->PointerTable == (FShaderMapPointerTable *)0x0) &&
                   (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                       ("PointerTable",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                                        ,0x9b4,L""), bVar12)) {
                  pcVar10 = (code *)swi(3);
                  (*pcVar10)();
                  return;
                }
                FShader::GetType((FShader *)this_00,pFVar11->PointerTable);
                UE::Logging::Private::BasicLog<5>
                          ((FStaticBasicLogRecord *)
                           &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<FOcclusionFeedbackVS,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                            ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
                lVar23 = local_228;
              }
              aVar16 = (atomic<FRHIShader_*>)0x0;
            }
          }
          pFVar19 = FOcclusionFeedbackVS::FParameters::FTypeInfo::GetStructMetadata();
          local_158.ShaderContent = (FShader *)local_248.ShaderContent;
          local_158.ShaderMap = local_248.ShaderMap;
          ValidateShaderParameters(&local_158,pFVar19,&local_1d8);
          ::SetShaderParameters
                    (param_1,(FRHIGraphicsShader *)aVar16,(FShaderParameterBindings *)this_00,
                     pFVar19,&local_1d8);
          FVar25 = local_220;
          uVar3 = *(undefined4 *)(lVar23 + 0x18 + (longlong)local_220);
          if ((GRHICommandList.bLatchedBypass == false) || ((param_1->field_0x29b & 0x20) == 0)) {
            puVar20 = FMemStackBase::Alloc((FMemStackBase *)param_1,0x30,8);
            *(int *)&param_1->field_0x60 = *(int *)&param_1->field_0x60 + 1;
            **(undefined8 **)&param_1->field_0x30 = puVar20;
            *(undefined8 **)&param_1->field_0x30 = puVar20 + 1;
            puVar20[1] = 0;
            *puVar20 = &___7FRHICommandDrawIndexedPrimitive__6B_;
            puVar20[2] = local_230;
            puVar20[3] = 0;
            puVar20[4] = 8;
            *(undefined4 *)(puVar20 + 5) = 0xc;
            *(undefined4 *)((longlong)puVar20 + 0x2c) = uVar3;
          }
          else {
            pIVar18 = FRHICommandListBase::GetContext((FRHICommandListBase *)param_1);
            (**(code **)(pIVar18->_padding_ + 0x1f8))(pIVar18,local_230,0);
          }
          uVar26 = uVar26 + 1;
        } while (uVar26 < (cVar2 != '\0') + 1);
        local_258 = local_258 + *(int *)(lVar23 + 0x18 + (longlong)FVar25);
        local_228 = lVar23 + 0x20;
        local_254 = local_254 + 1;
        local_250 = local_250 + -1;
        param_2 = local_218;
        this = local_210;
      } while (local_250 != 0);
    }
    auVar24 = (uchar  [8])(longlong)(this->BatchOcclusionQueries).ArrayNum;
    if ((auVar24 != (uchar  [8])0x0) && (FThreadStats::bPrimaryEnable != false)) {
      FVar22 = StatPtr_STAT_OcclusionQueries;
      if (StatPtr_STAT_OcclusionQueries == (FThreadSafeStaticStat<FStat_STAT_OcclusionQueries>)0x0)
      {
        pFVar21 = ::FName::FName(&local_188,"STAT_OcclusionQueries");
        FVar22 = (FThreadSafeStaticStat<FStat_STAT_OcclusionQueries>)
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)&StatPtr_STAT_OcclusionQueries,*pFVar21,
                            L"Occlusion queries","STATGROUP_InitViews","STATCAT_Advanced",
                            L"Init Views",true,true,ST_int64,false,false,MCR_Invalid);
      }
      FVar15 = *(FName *)FVar22;
      if (((FVar15 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
         (FThreadStats::TlsSlot != 0xffffffff)) {
        this_01 = TlsGetValue(FThreadStats::TlsSlot);
        if (this_01 == (FThreadStats *)0x0) {
          this_02 = FThreadStatsPool::Get();
          this_01 = FThreadStatsPool::GetFromPool(this_02);
        }
        local_1f0.NameAndInfo.Number = FVar15.Number & 0xffffafff | 0xa000;
        local_208 = FVar15;
        local_1f0.StatData.Pad = auVar24;
        local_1f0.NameAndInfo.Index.Value = FVar15.ComparisonIndex.Value.Value;
        FThreadStats::AddStatMessage(this_01,&local_1f0);
        FStatsTrace::Add(&local_208,(long64)auVar24);
        if (this_01->ScopeCount == 0) {
          FThreadStats::Flush(this_01,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(this_01,false,false);
        }
      }
    }
    uVar26 = (this->BatchOcclusionQueries).ArrayNum;
    if ((int)uVar26 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar26);
    }
    piVar1 = &(this->BatchOcclusionQueries).ArrayMax;
    (this->BatchOcclusionQueries).ArrayNum = 0;
    if (*piVar1 != uVar26) {
      UE::Core::Private::
      ReallocTo<2,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>::ForElementType<FOcclusionFeedback::FOcclusionBatch>_>
                (0x20,8,uVar26,&(this->BatchOcclusionQueries).AllocatorInstance,0,piVar1);
    }
  }
  return;
}

// IsOccluded @ 145547690

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

bool __thiscall
FOcclusionFeedback::IsOccluded(FOcclusionFeedback *this,FPrimitiveOcclusionHistoryKey *param_1)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  ForElementType<FSetElementId> FVar5;
  
  uVar1 = (param_1->PrimitiveId).PrimIDValue;
  if (*(int *)&(this->LatestOcclusionResults).Elements.field_0x8 !=
      *(int *)&(this->LatestOcclusionResults).Elements.field_0x34) {
    FVar5 = (this->LatestOcclusionResults).Hash.SecondaryData;
    if (FVar5 == (ForElementType<FSetElementId>)0x0) {
      FVar5 = (ForElementType<FSetElementId>)&(this->LatestOcclusionResults).Hash;
    }
    iVar3 = *(int *)((longlong)FVar5 +
                    (ulonglong)
                    ((this->LatestOcclusionResults).HashSize - 1U &
                    ((uint)param_1->CustomIndex >> 0x14 ^ uVar1)) * 4);
    if (iVar3 != -1) {
      lVar2 = *(longlong *)&(this->LatestOcclusionResults).Elements;
      do {
        lVar4 = (longlong)iVar3;
        if ((*(uint *)(lVar2 + lVar4 * 0x10) == uVar1) &&
           (*(uint *)(lVar2 + 4 + lVar4 * 0x10) == param_1->CustomIndex)) goto LAB_145547705;
        iVar3 = *(int *)(lVar2 + 8 + lVar4 * 0x10);
      } while (iVar3 != -1);
    }
  }
  iVar3 = -1;
LAB_145547705:
  return iVar3 != -1;
}

