// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 6

// ~FSubstrateViewDebugData @ 145407c40

void __thiscall FSubstrateViewDebugData::~FSubstrateViewDebugData(FSubstrateViewDebugData *this)

{
  TNode *pTVar1;
  
  pTVar1 = (this->SystemInfoDebugDataReadbackQueries).Tail;
  while (pTVar1 != (TNode *)0x0) {
    (this->SystemInfoDebugDataReadbackQueries).Tail = pTVar1->NextNode;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((pTVar1->Item).SharedReferenceCount.ReferenceController);
    ::operator_delete(pTVar1,0x18);
    pTVar1 = (this->SystemInfoDebugDataReadbackQueries).Tail;
  }
  pTVar1 = (this->PixelMaterialDebugDataReadbackQueries).Tail;
  while (pTVar1 != (TNode *)0x0) {
    (this->PixelMaterialDebugDataReadbackQueries).Tail = pTVar1->NextNode;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((pTVar1->Item).SharedReferenceCount.ReferenceController);
    ::operator_delete(pTVar1,0x18);
    pTVar1 = (this->PixelMaterialDebugDataReadbackQueries).Tail;
  }
  return;
}

// FSubstrateViewDebugData @ 1456dd1a0

FSubstrateViewDebugData * __thiscall
FSubstrateViewDebugData::FSubstrateViewDebugData(FSubstrateViewDebugData *this)

{
  TNode *pTVar1;
  TNode *pTVar2;
  TNode *pTVar3;
  
  pTVar3 = (TNode *)0x0;
  this->PixelMaterialDebugDataSizeBytes = 0;
  pTVar1 = ::operator_new(0x18);
  pTVar2 = pTVar3;
  if (pTVar1 != (TNode *)0x0) {
    pTVar1->NextNode = (TNode *)0x0;
    (pTVar1->Item).Object = (FRHIGPUBufferReadback *)0x0;
    (pTVar1->Item).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pTVar1->NextNode = (TNode *)0x0;
    (pTVar1->Item).Object = (FRHIGPUBufferReadback *)0x0;
    (pTVar1->Item).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pTVar2 = pTVar1;
  }
  (this->PixelMaterialDebugDataReadbackQueries).Tail = pTVar2;
  (this->PixelMaterialDebugDataReadbackQueries).Head = pTVar2;
  this->SystemInfoDebugDataSizeBytes = 0;
  pTVar2 = ::operator_new(0x18);
  if (pTVar2 != (TNode *)0x0) {
    pTVar2->NextNode = (TNode *)0x0;
    (pTVar2->Item).Object = (FRHIGPUBufferReadback *)0x0;
    (pTVar2->Item).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pTVar2->NextNode = (TNode *)0x0;
    (pTVar2->Item).Object = (FRHIGPUBufferReadback *)0x0;
    (pTVar2->Item).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pTVar3 = pTVar2;
  }
  (this->SystemInfoDebugDataReadbackQueries).Tail = pTVar3;
  (this->SystemInfoDebugDataReadbackQueries).Head = pTVar3;
  return this;
}

// CreateDummyPixelDebugBuffer @ 1456fc810

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FTransientPixelDebugBuffer * __cdecl
FSubstrateViewDebugData::CreateDummyPixelDebugBuffer
          (FTransientPixelDebugBuffer *__return_storage_ptr__,FRDGBuilder *param_1)

{
  InternalCreateTransientPixelDebugBuffer<FSubstrateViewDebugData::FTransientPixelDebugBuffer>
            (__return_storage_ptr__,param_1,4,L"DummyPixelMaterialDebugData");
  return __return_storage_ptr__;
}

// CreateTransientPixelDebugBuffer @ 1456fd6c0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FTransientPixelDebugBuffer * __thiscall
FSubstrateViewDebugData::CreateTransientPixelDebugBuffer
          (FSubstrateViewDebugData *this,FTransientPixelDebugBuffer *__return_storage_ptr__,
          FRDGBuilder *param_1)

{
  InternalCreateTransientPixelDebugBuffer<FSubstrateViewDebugData::FTransientPixelDebugBuffer>
            (__return_storage_ptr__,param_1,0x770,L"PixelMaterialDebugData");
  this->PixelMaterialDebugDataSizeBytes = *(int *)__return_storage_ptr__ << 2;
  return __return_storage_ptr__;
}

// CreateTransientSystemInfoDebugBuffer @ 1456fd710

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FTransientSystemInfoDebugBuffer * __thiscall
FSubstrateViewDebugData::CreateTransientSystemInfoDebugBuffer
          (FSubstrateViewDebugData *this,FTransientSystemInfoDebugBuffer *__return_storage_ptr__,
          FRDGBuilder *param_1)

{
  FRDGBufferUAV *pFVar1;
  FRDGBufferUAVDesc local_38;
  undefined8 local_28;
  FRDGBufferDesc local_20;
  
  *(undefined4 *)__return_storage_ptr__ = 9;
  local_28 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
  local_38.Buffer = (FRDGBuffer *)CONCAT44(local_38.Buffer._4_4_,0x10109);
  local_38._padding_._0_2_ = 4;
  local_38._padding_._2_1_ = 0;
  local_38._padding_._3_1_ = 0;
  local_38._padding_._4_4_ = 9;
  local_20.BytesPerElement = 4;
  local_20.NumElements = 9;
  local_20.Metadata = (FShaderParametersMetadata *)0x0;
  local_20._12_4_ = local_38.Buffer._4_4_;
  local_20.Usage = StructuredBuffer|ShaderResource|SourceCopy|UnorderedAccess|Static;
  local_38.Buffer = FRDGBuilder::CreateBuffer(param_1,&local_20,L"SystemInfoDebugData",None);
  *(FRDGBuffer **)&__return_storage_ptr__->field_0x8 = local_38.Buffer;
  local_38._padding_._0_2_ = 0x1c;
  local_38._padding_._2_1_ = 0;
  pFVar1 = FRDGBuilder::CreateUAV(param_1,&local_38,None);
  *(FRDGBufferUAV **)&__return_storage_ptr__->field_0x10 = pFVar1;
  this->SystemInfoDebugDataSizeBytes = *(int *)__return_storage_ptr__ << 2;
  return __return_storage_ptr__;
}

// SafeRelease @ 145720c80

void __thiscall FSubstrateViewDebugData::SafeRelease(FSubstrateViewDebugData *this)

{
  TSharedPtr<FRHIGPUBufferReadback,1> *pTVar1;
  atomic<int> *paVar2;
  atomic<int> aVar3;
  TNode *pTVar4;
  TNode *pTVar5;
  FSharedReferencer<1> FVar6;
  TReferenceControllerBase<1> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  FRHIGPUBufferReadback *local_48;
  FSharedReferencer<1> FStack_40;
  undefined8 local_38;
  FSharedReferencer<1> FStack_30;
  undefined8 local_28;
  FSharedReferencer<1> FStack_20;
  
  local_48 = (FRHIGPUBufferReadback *)0x0;
  FStack_40.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar7 = (TReferenceControllerBase<1> *)0x0;
  pTVar8 = (TReferenceControllerBase<1> *)0x0;
  while (pTVar4 = ((this->PixelMaterialDebugDataReadbackQueries).Tail)->NextNode,
        pTVar4 != (TNode *)0x0) {
    pTVar1 = &pTVar4->Item;
    FVar6.ReferenceController = pTVar7;
    if ((TSharedPtr<FRHIGPUBufferReadback,1> *)&local_48 != pTVar1) {
      local_48 = pTVar1->Object;
      pTVar1->Object = (FRHIGPUBufferReadback *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&FStack_40,&(pTVar4->Item).SharedReferenceCount);
      FVar6.ReferenceController = FStack_40.ReferenceController;
    }
    pTVar5 = (this->PixelMaterialDebugDataReadbackQueries).Tail;
    (this->PixelMaterialDebugDataReadbackQueries).Tail = pTVar4;
    local_38 = 0;
    FStack_30.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (pTVar1 != (TSharedPtr<FRHIGPUBufferReadback,1> *)&local_38) {
      pTVar1->Object = (FRHIGPUBufferReadback *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(pTVar4->Item).SharedReferenceCount,&FStack_30);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_30.ReferenceController);
    if (pTVar5 != (TNode *)0x0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((pTVar5->Item).SharedReferenceCount.ReferenceController);
      ::operator_delete(pTVar5,0x18);
    }
    local_48 = (FRHIGPUBufferReadback *)0x0;
    pTVar7 = FVar6.ReferenceController;
    if (FVar6.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      FStack_40.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      LOCK();
      paVar2 = &(FVar6.ReferenceController)->SharedReferenceCount;
      aVar3 = *paVar2;
      *paVar2 = (atomic<int>)((int)*paVar2 + -1);
      UNLOCK();
      pTVar7 = pTVar8;
      if (aVar3 == (atomic<int>)0x1) {
        (**(code **)(FVar6.ReferenceController)->_padding_)();
        LOCK();
        paVar2 = &(FVar6.ReferenceController)->WeakReferenceCount;
        aVar3 = *paVar2;
        *paVar2 = (atomic<int>)((int)*paVar2 + -1);
        UNLOCK();
        if (aVar3 == (atomic<int>)0x1) {
          (**(code **)((FVar6.ReferenceController)->_padding_ + 8))(FVar6.ReferenceController,1);
          pTVar7 = (TReferenceControllerBase<1> *)0x0;
        }
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  while (pTVar4 = ((this->SystemInfoDebugDataReadbackQueries).Tail)->NextNode,
        pTVar4 != (TNode *)0x0) {
    pTVar1 = &pTVar4->Item;
    FVar6.ReferenceController = pTVar7;
    if ((TSharedPtr<FRHIGPUBufferReadback,1> *)&local_48 != pTVar1) {
      local_48 = pTVar1->Object;
      pTVar1->Object = (FRHIGPUBufferReadback *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&FStack_40,&(pTVar4->Item).SharedReferenceCount);
      FVar6.ReferenceController = FStack_40.ReferenceController;
    }
    pTVar5 = (this->SystemInfoDebugDataReadbackQueries).Tail;
    (this->SystemInfoDebugDataReadbackQueries).Tail = pTVar4;
    local_28 = 0;
    FStack_20.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (pTVar1 != (TSharedPtr<FRHIGPUBufferReadback,1> *)&local_28) {
      pTVar1->Object = (FRHIGPUBufferReadback *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(pTVar4->Item).SharedReferenceCount,&FStack_20);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_20.ReferenceController);
    if (pTVar5 != (TNode *)0x0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((pTVar5->Item).SharedReferenceCount.ReferenceController);
      ::operator_delete(pTVar5,0x18);
    }
    local_48 = (FRHIGPUBufferReadback *)0x0;
    pTVar7 = FVar6.ReferenceController;
    if (FVar6.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      FStack_40.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      LOCK();
      paVar2 = &(FVar6.ReferenceController)->SharedReferenceCount;
      aVar3 = *paVar2;
      *paVar2 = (atomic<int>)((int)*paVar2 + -1);
      UNLOCK();
      pTVar7 = pTVar8;
      if (aVar3 == (atomic<int>)0x1) {
        (**(code **)(FVar6.ReferenceController)->_padding_)();
        LOCK();
        paVar2 = &(FVar6.ReferenceController)->WeakReferenceCount;
        aVar3 = *paVar2;
        *paVar2 = (atomic<int>)((int)*paVar2 + -1);
        UNLOCK();
        if (aVar3 == (atomic<int>)0x1) {
          (**(code **)((FVar6.ReferenceController)->_padding_ + 8))(FVar6.ReferenceController,1);
          pTVar7 = (TReferenceControllerBase<1> *)0x0;
        }
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  return;
}

