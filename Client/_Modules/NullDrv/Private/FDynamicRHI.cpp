// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NullDrv
// Functions: 59

// FlushPendingLogs @ 1446c5d20

void __thiscall FDynamicRHI::FlushPendingLogs(FDynamicRHI *this)

{
  return;
}

// GetInterfaceType @ 1446c5e50

ERHIInterfaceType __thiscall FDynamicRHI::GetInterfaceType(FDynamicRHI *this)

{
  return Hidden;
}

// GetNonValidationRHI @ 1446c5ef0

FDynamicRHI * __thiscall FDynamicRHI::GetNonValidationRHI(FDynamicRHI *this)

{
  return this;
}

// LockBuffer_BottomOfPipe @ 1446c6200

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void * __thiscall
FDynamicRHI::LockBuffer_BottomOfPipe
          (FDynamicRHI *this,FRHICommandListBase *param_1,FRHIBuffer *param_2,uint param_3,
          uint param_4,EResourceLockMode param_5)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DynamicRHI.h"
                     ,0x3c7,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// PostInit @ 1446c62e0

void __thiscall FDynamicRHI::PostInit(FDynamicRHI *this)

{
  return;
}

// RHIAcquireThreadOwnership @ 1446c62f0

void __thiscall FDynamicRHI::RHIAcquireThreadOwnership(FDynamicRHI *this)

{
  return;
}

// RHIAliasTextureResources @ 1446c6310

void __thiscall
FDynamicRHI::RHIAliasTextureResources
          (FDynamicRHI *this,TRefCountPtr<FRHITexture> *param_1,TRefCountPtr<FRHITexture> *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DynamicRHI.h"
                     ,0x2ae,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// RHIBeginRenderQueryBatch_TopOfPipe @ 1446c6650

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FDynamicRHI::RHIBeginRenderQueryBatch_TopOfPipe
          (FDynamicRHI *this,FRHICommandListBase *param_1,ERenderQueryType param_2)

{
  return;
}

// RHIBeginSuspendRendering @ 1446c6660

void __thiscall FDynamicRHI::RHIBeginSuspendRendering(FDynamicRHI *this)

{
  return;
}

// RHICalcRayTracingClusterOperationSize @ 1446c6780

/* WARNING: Enum "EVertexElementType": Some values do not have unique names */

FRayTracingClusterOperationSize * __thiscall
FDynamicRHI::RHICalcRayTracingClusterOperationSize
          (FDynamicRHI *this,FRayTracingClusterOperationSize *__return_storage_ptr__,
          FRayTracingClusterOperationInitializer *param_1)

{
  code *pcVar1;
  bool bVar2;
  FRayTracingClusterOperationSize *pFVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DynamicRHI.h"
                     ,1000,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FRayTracingClusterOperationSize *)(*pcVar1)();
    return pFVar3;
  }
  __return_storage_ptr__->ResultMaxSizeInBytes = 0;
  __return_storage_ptr__->ScratchSizeInBytes = 0;
  return __return_storage_ptr__;
}

// RHICalcRayTracingGeometrySize @ 1446c67d0

FRayTracingAccelerationStructureSize * __thiscall
FDynamicRHI::RHICalcRayTracingGeometrySize
          (FDynamicRHI *this,FRayTracingAccelerationStructureSize *__return_storage_ptr__,
          FRayTracingGeometryInitializer *param_1)

{
  code *pcVar1;
  bool bVar2;
  FRayTracingAccelerationStructureSize *pFVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DynamicRHI.h"
                     ,0x3e2,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FRayTracingAccelerationStructureSize *)(*pcVar1)();
    return pFVar3;
  }
  __return_storage_ptr__->ResultSize = 0;
  __return_storage_ptr__->BuildScratchSize = 0;
  __return_storage_ptr__->UpdateScratchSize = 0;
  return __return_storage_ptr__;
}

// RHICalcRayTracingSceneSize @ 1446c6820

FRayTracingAccelerationStructureSize * __thiscall
FDynamicRHI::RHICalcRayTracingSceneSize
          (FDynamicRHI *this,FRayTracingAccelerationStructureSize *__return_storage_ptr__,
          FRayTracingSceneInitializer *param_1)

{
  code *pcVar1;
  bool bVar2;
  FRayTracingAccelerationStructureSize *pFVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DynamicRHI.h"
                     ,0x3dc,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FRayTracingAccelerationStructureSize *)(*pcVar1)();
    return pFVar3;
  }
  __return_storage_ptr__->ResultSize = 0;
  __return_storage_ptr__->BuildScratchSize = 0;
  __return_storage_ptr__->UpdateScratchSize = 0;
  return __return_storage_ptr__;
}

// RHICloseTranslateChain @ 1446c68f0

void __thiscall
FDynamicRHI::RHICloseTranslateChain
          (FDynamicRHI *this,FRHIFinalizeContextArgs *param_1,
          TRHIPipelineArray<IRHIPlatformCommandList_*> *param_2,bool param_3)

{
  if (param_3) {
                    /* WARNING: Could not recover jumptable at 0x0001446c68f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->_padding_ + 0x3e0))();
    return;
  }
  return;
}

// RHICreateAliasedTexture @ 1446c69c0

TRefCountPtr<FRHITexture> __thiscall
FDynamicRHI::RHICreateAliasedTexture(FDynamicRHI *this,TRefCountPtr<FRHITexture> *param_1)

{
  code *pcVar1;
  bool bVar2;
  TRefCountPtr<FRHITexture> TVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DynamicRHI.h"
                     ,0x2b3,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    TVar3.Reference = (FRHITexture *)(*pcVar1)();
    return (TRefCountPtr<FRHITexture>)TVar3.Reference;
  }
  param_1->Reference = (FRHITexture *)0x0;
  return (TRefCountPtr<FRHITexture>)(FRHITexture *)param_1;
}

// RHICreateAmplificationShader @ 1446c6a10

TRefCountPtr<FRHIAmplificationShader> __thiscall
FDynamicRHI::RHICreateAmplificationShader
          (FDynamicRHI *this,TArrayView<unsigned_char_const_,int> *param_1,FSHAHash *param_2)

{
  param_1->DataPtr = (uchar *)0x0;
  return (TRefCountPtr<FRHIAmplificationShader>)(FRHIAmplificationShader *)param_1;
}

// RHICreateMeshShader @ 1446c70e0

TRefCountPtr<FRHIMeshShader> __thiscall
FDynamicRHI::RHICreateMeshShader
          (FDynamicRHI *this,TArrayView<unsigned_char_const_,int> *param_1,FSHAHash *param_2)

{
  param_1->DataPtr = (uchar *)0x0;
  return (TRefCountPtr<FRHIMeshShader>)(FRHIMeshShader *)param_1;
}

// RHICreateRayTracingGeometry @ 1446c71e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

TRefCountPtr<FRHIRayTracingGeometry> __thiscall
FDynamicRHI::RHICreateRayTracingGeometry
          (FDynamicRHI *this,FRHICommandListBase *param_1,FRayTracingGeometryInitializer *param_2)

{
  code *pcVar1;
  bool bVar2;
  TRefCountPtr<FRHIRayTracingGeometry> TVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DynamicRHI.h"
                     ,0x3f4,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    TVar3.Reference = (FRHIRayTracingGeometry *)(*pcVar1)();
    return (TRefCountPtr<FRHIRayTracingGeometry>)TVar3.Reference;
  }
  (param_1->MemManager).Top = (uchar *)0x0;
  return (TRefCountPtr<FRHIRayTracingGeometry>)(FRHIRayTracingGeometry *)param_1;
}

// RHICreateRayTracingPipelineState @ 1446c7230

TRefCountPtr<FRHIRayTracingPipelineState> __thiscall
FDynamicRHI::RHICreateRayTracingPipelineState
          (FDynamicRHI *this,FRayTracingPipelineStateInitializer *param_1)

{
  code *pcVar1;
  bool bVar2;
  TRefCountPtr<FRHIRayTracingPipelineState> TVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DynamicRHI.h"
                     ,0x406,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    TVar3.Reference = (FRHIRayTracingPipelineState *)(*pcVar1)();
    return (TRefCountPtr<FRHIRayTracingPipelineState>)TVar3.Reference;
  }
  param_1->_padding_ = 0;
  return (TRefCountPtr<FRHIRayTracingPipelineState>)(FRHIRayTracingPipelineState *)param_1;
}

// RHICreateRayTracingScene @ 1446c7280

TRefCountPtr<FRHIRayTracingScene> __thiscall
FDynamicRHI::RHICreateRayTracingScene(FDynamicRHI *this,FRayTracingSceneInitializer *param_1)

{
  code *pcVar1;
  bool bVar2;
  TRefCountPtr<FRHIRayTracingScene> TVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DynamicRHI.h"
                     ,0x3fa,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    TVar3.Reference = (FRHIRayTracingScene *)(*pcVar1)();
    return (TRefCountPtr<FRHIRayTracingScene>)TVar3.Reference;
  }
  param_1->MaxNumInstances = 0;
  param_1->NumTotalSegments = 0;
  return (TRefCountPtr<FRHIRayTracingScene>)(FRHIRayTracingScene *)param_1;
}

// RHICreateRayTracingShader @ 1446c72d0

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

TRefCountPtr<FRHIRayTracingShader> __thiscall
FDynamicRHI::RHICreateRayTracingShader
          (FDynamicRHI *this,TArrayView<unsigned_char_const_,int> *param_1,FSHAHash *param_2,
          EShaderFrequency param_3)

{
  code *pcVar1;
  bool bVar2;
  TRefCountPtr<FRHIRayTracingShader> TVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DynamicRHI.h"
                     ,0x400,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    TVar3.Reference = (FRHIRayTracingShader *)(*pcVar1)();
    return (TRefCountPtr<FRHIRayTracingShader>)TVar3.Reference;
  }
  param_1->DataPtr = (uchar *)0x0;
  return (TRefCountPtr<FRHIRayTracingShader>)(FRHIRayTracingShader *)param_1;
}

// RHICreateResourceCollection @ 1446c7390

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

TRefCountPtr<FRHIResourceCollection> __thiscall
FDynamicRHI::RHICreateResourceCollection
          (FDynamicRHI *this,FRHICommandListBase *param_1,
          TArrayView<FRHIResourceCollectionMember_const_,int> *param_2)

{
  (param_1->MemManager).Top = (uchar *)0x0;
  return (TRefCountPtr<FRHIResourceCollection>)(FRHIResourceCollection *)param_1;
}

// RHICreateShaderBindingTable @ 1446c7420

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

TRefCountPtr<FRHIShaderBindingTable> __thiscall
FDynamicRHI::RHICreateShaderBindingTable
          (FDynamicRHI *this,FRHICommandListBase *param_1,
          FRayTracingShaderBindingTableInitializer *param_2)

{
  code *pcVar1;
  bool bVar2;
  TRefCountPtr<FRHIShaderBindingTable> TVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DynamicRHI.h"
                     ,0x40c,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    TVar3.Reference = (FRHIShaderBindingTable *)(*pcVar1)();
    return (TRefCountPtr<FRHIShaderBindingTable>)TVar3.Reference;
  }
  (param_1->MemManager).Top = (uchar *)0x0;
  return (TRefCountPtr<FRHIShaderBindingTable>)(FRHIShaderBindingTable *)param_1;
}

// RHICreateShaderBundle @ 1446c7470

TRefCountPtr<FRHIShaderBundle> __thiscall
FDynamicRHI::RHICreateShaderBundle(FDynamicRHI *this,FShaderBundleCreateInfo *param_1)

{
  code *pcVar1;
  bool bVar2;
  TRefCountPtr<FRHIShaderBundle> TVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DynamicRHI.h"
                     ,0x419,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    TVar3.Reference = (FRHIShaderBundle *)(*pcVar1)();
    return (TRefCountPtr<FRHIShaderBundle>)TVar3.Reference;
  }
  param_1->NumRecords = 0;
  param_1->ArgOffset = 0;
  return (TRefCountPtr<FRHIShaderBundle>)(FRHIShaderBundle *)param_1;
}

// RHICreateShaderLibrary @ 1446c74c0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

TRefCountPtr<FRHIShaderLibrary> __thiscall
FDynamicRHI::RHICreateShaderLibrary
          (FDynamicRHI *this,EShaderPlatform param_1,FString *param_2,FString *param_3)

{
  undefined6 in_register_00000012;
  
  *(undefined8 *)CONCAT62(in_register_00000012,param_1) = 0;
  return (TRefCountPtr<FRHIShaderLibrary>)
         (FRHIShaderLibrary *)CONCAT62(in_register_00000012,param_1);
}

// RHICreateStagingBuffer @ 1446c75f0

TRefCountPtr<FRHIStagingBuffer> __thiscall FDynamicRHI::RHICreateStagingBuffer(FDynamicRHI *this)

{
  FRHIStagingBuffer *pFVar1;
  FRHIResource *this_00;
  undefined1 in_DL;
  undefined7 in_register_00000011;
  
  pFVar1 = (FRHIStagingBuffer *)CONCAT71(in_register_00000011,in_DL);
  this_00 = ::operator_new(0x30);
  if (this_00 != (FRHIResource *)0x0) {
    FRHIResource::FRHIResource(this_00,RRT_StagingBuffer);
    *(undefined1 *)&this_00[1]._padding_ = 0;
    this_00->_padding_ = (longlong)&___7FGenericRHIStagingBuffer__6B_;
    this_00[1].AtomicFlags = (atomic<unsigned_int>)0x0;
    this_00[1].ResourceType = RRT_None;
    this_00[1].field_0xd = 0;
    this_00[1]._padding_ = 0;
    pFVar1->_padding_ = (longlong)this_00;
    FRHIResource::AddRef(this_00);
    return (TRefCountPtr<FRHIStagingBuffer>)pFVar1;
  }
  pFVar1->_padding_ = 0;
  return (TRefCountPtr<FRHIStagingBuffer>)pFVar1;
}

// RHICreateTransientResourceAllocator @ 1446c7a30

IRHITransientResourceAllocator * __thiscall
FDynamicRHI::RHICreateTransientResourceAllocator(FDynamicRHI *this)

{
  return (IRHITransientResourceAllocator *)0x0;
}

// RHICreateTransition @ 1446c7a40

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
FDynamicRHI::RHICreateTransition
          (FDynamicRHI *this,FRHITransition *param_1,FRHITransitionCreateInfo *param_2)

{
  return;
}

// RHICreateWorkGraphPipelineState @ 1446c7d60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */

TRefCountPtr<FRHIWorkGraphPipelineState> __thiscall
FDynamicRHI::RHICreateWorkGraphPipelineState
          (FDynamicRHI *this,FWorkGraphPipelineStateInitializer *param_1)

{
  code *pcVar1;
  bool bVar2;
  TRefCountPtr<FRHIWorkGraphPipelineState> TVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DynamicRHI.h"
                     ,0x1a6,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    TVar3.Reference = (FRHIWorkGraphPipelineState *)(*pcVar1)();
    return (TRefCountPtr<FRHIWorkGraphPipelineState>)TVar3.Reference;
  }
  param_1->_padding_ = 0;
  return (TRefCountPtr<FRHIWorkGraphPipelineState>)(FRHIWorkGraphPipelineState *)param_1;
}

// RHICreateWorkGraphShader @ 1446c7db0

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

TRefCountPtr<FRHIWorkGraphShader> __thiscall
FDynamicRHI::RHICreateWorkGraphShader
          (FDynamicRHI *this,TArrayView<unsigned_char_const_,int> *param_1,FSHAHash *param_2,
          EShaderFrequency param_3)

{
  param_1->DataPtr = (uchar *)0x0;
  return (TRefCountPtr<FRHIWorkGraphShader>)(FRHIWorkGraphShader *)param_1;
}

// RHIEndRenderQueryBatch_TopOfPipe @ 1446c8290

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FDynamicRHI::RHIEndRenderQueryBatch_TopOfPipe
          (FDynamicRHI *this,FRHICommandListBase *param_1,ERenderQueryType param_2)

{
  return;
}

// RHIFinalizeParallelContext @ 1446c8320

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

IRHIPlatformCommandList * __thiscall
FDynamicRHI::RHIFinalizeParallelContext(FDynamicRHI *this,IRHIComputeContext *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  IRHIPlatformCommandList *pIVar4;
  IRHIComputeContext *local_res10 [3];
  IRHIPlatformCommandList *local_38;
  undefined8 uStack_30;
  ForAnyElementType local_28;
  undefined8 local_20;
  
  local_28.Data = (FScriptContainerElement *)0x0;
  local_20 = 0;
  local_res10[0] = param_1;
  (**(code **)(param_1->_padding_ + 0x250))(param_1);
  if (((local_28.Data <= (FScriptContainerElement *)local_res10) &&
      ((FScriptContainerElement *)local_res10 < local_28.Data + (longlong)local_20._4_4_ * 8)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    pIVar4 = (IRHIPlatformCommandList *)(*pcVar1)();
    return pIVar4;
  }
  iVar3 = (int)local_20;
  if ((int)local_20 == local_20._4_4_) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&local_28,(int *)((longlong)&local_20 + 4));
  }
  local_20 = CONCAT44(local_20._4_4_,iVar3 + 1);
  *(IRHIComputeContext **)(local_28.Data + (longlong)iVar3 * 8) = local_res10[0];
  local_38 = (IRHIPlatformCommandList *)0x0;
  uStack_30 = 0;
  (**(code **)(this->_padding_ + 0x3e0))(this,&local_28,&local_38);
  pIVar4 = local_38;
  if (local_28.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data);
  }
  return pIVar4;
}

// RHIGetDisplaysInformation @ 1446c84a0

void __thiscall
FDynamicRHI::RHIGetDisplaysInformation
          (FDynamicRHI *this,TArray<FDisplayInformation,TSizedDefaultAllocator<32>_> *param_1)

{
  return;
}

// RHIGetHTilePlatformConfig @ 1446c84c0

uint __thiscall FDynamicRHI::RHIGetHTilePlatformConfig(FDynamicRHI *this,FRHITextureDesc *param_1)

{
  return 0;
}

// RHIGetHTilePlatformConfig @ 1446c84d0

uint __thiscall FDynamicRHI::RHIGetHTilePlatformConfig(FDynamicRHI *this,uint param_1,uint param_2)

{
  return 0;
}

// RHIGetNativeCommandBuffer @ 1446c84e0

void * __thiscall FDynamicRHI::RHIGetNativeCommandBuffer(FDynamicRHI *this)

{
  return (void *)0x0;
}

// RHIGetNativeComputeQueue @ 1446c8500

void * __thiscall FDynamicRHI::RHIGetNativeComputeQueue(FDynamicRHI *this)

{
  return (void *)0x0;
}

// RHIGetNativeGraphicsQueue @ 1446c8520

void * __thiscall FDynamicRHI::RHIGetNativeGraphicsQueue(FDynamicRHI *this)

{
  return (void *)0x0;
}

// RHIGetNativePhysicalDevice @ 1446c8540

void * __thiscall FDynamicRHI::RHIGetNativePhysicalDevice(FDynamicRHI *this)

{
  return (void *)0x0;
}

// RHIGetParallelCommandContext @ 1446c8550

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

IRHIComputeContext * __thiscall
FDynamicRHI::RHIGetParallelCommandContext
          (FDynamicRHI *this,FRHIParallelRenderPassInfo *param_1,FRHIGPUMask param_2)

{
  IRHIComputeContext *pIVar1;
  undefined4 in_register_00000084;
  
  pIVar1 = (IRHIComputeContext *)
           (**(code **)(this->_padding_ + 0x3c0))
                     (this,1,CONCAT44(in_register_00000084,param_2.GPUMask));
  (**(code **)(pIVar1->_padding_ + 0x248))(pIVar1,param_1,param_1->PassName);
  return pIVar1;
}

// RHIGetPlatformTextureMaxSampleCount @ 1446c85b0

ushort __thiscall FDynamicRHI::RHIGetPlatformTextureMaxSampleCount(FDynamicRHI *this)

{
  return 8;
}

// RHIGetRayTracingGeometryOfflineMetadata @ 1446c85c0

FRayTracingAccelerationStructureOfflineMetadata * __thiscall
FDynamicRHI::RHIGetRayTracingGeometryOfflineMetadata
          (FDynamicRHI *this,FRayTracingAccelerationStructureOfflineMetadata *__return_storage_ptr__
          ,FRayTracingGeometryOfflineDataHeader *param_1)

{
  code *pcVar1;
  bool bVar2;
  FRayTracingAccelerationStructureOfflineMetadata *pFVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DynamicRHI.h"
                     ,0x3ee,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FRayTracingAccelerationStructureOfflineMetadata *)(*pcVar1)();
    return pFVar3;
  }
  __return_storage_ptr__->Size = 0;
  __return_storage_ptr__->ScratchSize = 0;
  __return_storage_ptr__->SerializedSize = 0;
  __return_storage_ptr__->SerializedOffset = 0;
  return __return_storage_ptr__;
}

// RHIGetUploadContext @ 1446c8650

IRHIUploadContext * __thiscall FDynamicRHI::RHIGetUploadContext(FDynamicRHI *this)

{
  return (IRHIUploadContext *)0x0;
}

// RHIGetViewportBackBufferUAV @ 1446c87d0

TRefCountPtr<FRHIUnorderedAccessView> __thiscall
FDynamicRHI::RHIGetViewportBackBufferUAV(FDynamicRHI *this,FRHIViewport *param_1)

{
  *(undefined8 *)param_1 = 0;
  return (TRefCountPtr<FRHIUnorderedAccessView>)(FRHIUnorderedAccessView *)param_1;
}

// RHIGetViewportNextPresentGPUIndex @ 1446c87f0

uint __thiscall
FDynamicRHI::RHIGetViewportNextPresentGPUIndex(FDynamicRHI *this,FRHIViewport *param_1)

{
  return 0;
}

// RHIHandleDisplayChange @ 1446c8810

void __thiscall FDynamicRHI::RHIHandleDisplayChange(FDynamicRHI *this)

{
  return;
}

// RHIIsRenderingSuspended @ 1446c8820

bool __thiscall FDynamicRHI::RHIIsRenderingSuspended(FDynamicRHI *this)

{
  return false;
}

// RHIPreferredPixelFormatHint @ 1446c8970

EPixelFormat __thiscall
FDynamicRHI::RHIPreferredPixelFormatHint(FDynamicRHI *this,EPixelFormat param_1)

{
  return param_1;
}

// RHIProcessDeleteQueue @ 1446c8980

void __thiscall FDynamicRHI::RHIProcessDeleteQueue(FDynamicRHI *this)

{
  return;
}

// RHIReleaseThreadOwnership @ 1446c8aa0

void __thiscall FDynamicRHI::RHIReleaseThreadOwnership(FDynamicRHI *this)

{
  return;
}

// RHIReleaseTransition @ 1446c8ab0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall FDynamicRHI::RHIReleaseTransition(FDynamicRHI *this,FRHITransition *param_1)

{
  return;
}

// RHIResizeViewport @ 1446c8ae0

void __thiscall
FDynamicRHI::RHIResizeViewport
          (FDynamicRHI *this,FRHIViewport *param_1,uint param_2,uint param_3,bool param_4,
          EPixelFormat param_5)

{
                    /* WARNING: Could not recover jumptable at 0x0001446c8af3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x318))();
  return;
}

// RHIResumeRendering @ 1446c8b10

void __thiscall FDynamicRHI::RHIResumeRendering(FDynamicRHI *this)

{
  return;
}

// RHISerializeAccelerationStructure @ 1446c8b30

void __thiscall
FDynamicRHI::RHISerializeAccelerationStructure
          (FDynamicRHI *this,FRHICommandListImmediate *param_1,FRHIRayTracingScene *param_2,
          wchar_t *param_3)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DynamicRHI.h"
                     ,0x413,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// RHISignalFlipEvent @ 1446c8e50

void __thiscall FDynamicRHI::RHISignalFlipEvent(FDynamicRHI *this)

{
  return;
}

// RHISuspendRendering @ 1446c8e70

void __thiscall FDynamicRHI::RHISuspendRendering(FDynamicRHI *this)

{
  return;
}

// RHIUpdateFromBufferTexture2D @ 1446c8f70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FDynamicRHI::RHIUpdateFromBufferTexture2D
          (FDynamicRHI *this,FRHICommandListBase *param_1,FRHITexture *param_2,uint param_3,
          FUpdateTextureRegion2D *param_4,uint param_5,FRHIBuffer *param_6,uint param_7)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DynamicRHI.h"
                     ,0x24d,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// RHIUpdateResourceCollection @ 1446c8fb0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FDynamicRHI::RHIUpdateResourceCollection
          (FDynamicRHI *this,FRHICommandListBase *param_1,FRHIResourceCollection *param_2,
          uint param_3,TArrayView<FRHIResourceCollectionMember_const_,int> *param_4)

{
  return;
}

// RHIWaitForFlip @ 1446c8ff0

FRHIFlipDetails * __thiscall
FDynamicRHI::RHIWaitForFlip
          (FDynamicRHI *this,FRHIFlipDetails *__return_storage_ptr__,double param_1)

{
  __return_storage_ptr__->PresentIndex = 0;
  __return_storage_ptr__->FlipTimeInSeconds = 0.0;
  __return_storage_ptr__->VBlankTimeInSeconds = 0.0;
  __return_storage_ptr__->VBlankTimeInCycles = 0;
  return __return_storage_ptr__;
}

// UnlockBuffer_BottomOfPipe @ 1446c92b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FDynamicRHI::UnlockBuffer_BottomOfPipe
          (FDynamicRHI *this,FRHICommandListBase *param_1,FRHIBuffer *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DynamicRHI.h"
                     ,0x3ce,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

