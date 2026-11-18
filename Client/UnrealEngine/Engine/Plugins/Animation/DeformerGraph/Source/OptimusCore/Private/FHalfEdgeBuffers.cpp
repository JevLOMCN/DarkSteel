// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 1

// Init @ 14e1ea4c0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FHalfEdgeBuffers::Init
          (FHalfEdgeBuffers *this,FRDGBuilder *param_1,FSkeletalMeshLODRenderData *param_2)

{
  longlong *plVar1;
  FRDGPooledBuffer *pFVar2;
  FRDGPooledBuffer *pFVar3;
  longlong lVar4;
  FRDGBuffer *pFVar5;
  TRefCountPtr<FRDGPooledBuffer> *pTVar6;
  void *pvVar7;
  undefined4 uStack_6c;
  FRDGBufferDesc local_60;
  TResourceArray<int,0> local_48;
  TResourceArray<int,0> local_28;
  
  local_28._padding_ = 0;
  local_28._padding_ = (longlong)&___7__TResourceArray_H_0A___6B_;
  local_48._padding_ = (longlong)&___7__TResourceArray_H_0A___6B_;
  local_28._padding_ = 0;
  local_28.bNeedsCPUAccess = false;
  local_48._padding_ = 0;
  local_48._padding_ = 0;
  local_48.bNeedsCPUAccess = false;
  SkeletalMeshHalfEdgeUtility::BuildHalfEdgeBuffers(param_2,&local_28,&local_48);
  local_60.NumElements = (uint)local_28._padding_;
  local_60.BytesPerElement = 4;
  local_60._12_4_ = uStack_6c;
  local_60.Usage = StructuredBuffer|ShaderResource|UnorderedAccess|Static;
  local_60.Metadata = (FShaderParametersMetadata *)0x0;
  pFVar5 = FRDGBuilder::CreateBuffer(param_1,&local_60,L"Optimus.VertexToEdge",None);
  pvVar7 = (void *)local_28._padding_;
  if ((local_28._padding_ & 1U) != 0) {
    pvVar7 = (void *)((longlong)&local_28._padding_ + (local_28._padding_ >> 0x18));
  }
  FRDGBuilder::QueueBufferUpload
            (param_1,pFVar5,pvVar7,(longlong)(int)(uint)local_28._padding_ << 2,None);
  pTVar6 = FRDGBuilder::ConvertToExternalBuffer(param_1,pFVar5);
  pFVar2 = (this->VertexToEdgePooledBuffer).Reference;
  pFVar3 = pTVar6->Reference;
  if (pFVar2 != pFVar3) {
    (this->VertexToEdgePooledBuffer).Reference = pFVar3;
    if (pFVar3 != (FRDGPooledBuffer *)0x0) {
      LOCK();
      *(int *)&pFVar3->_padding_ = (int)pFVar3->_padding_ + 1;
      UNLOCK();
    }
    if (pFVar2 != (FRDGPooledBuffer *)0x0) {
      plVar1 = &pFVar2->_padding_;
      LOCK();
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if (((int)lVar4 == 1) && (plVar1 != (longlong *)0x0)) {
        (**(code **)pFVar2->_padding_)(pFVar2,1);
      }
    }
  }
  local_60.NumElements = (uint)local_48._padding_;
  local_60.BytesPerElement = 4;
  local_60.Usage = StructuredBuffer|ShaderResource|UnorderedAccess|Static;
  local_60.Metadata = (FShaderParametersMetadata *)0x0;
  pFVar5 = FRDGBuilder::CreateBuffer(param_1,&local_60,L"Optimus.EdgeToTwinEdge",None);
  pvVar7 = (void *)local_48._padding_;
  if ((local_48._padding_ & 1U) != 0) {
    pvVar7 = (void *)((longlong)&local_48._padding_ + (local_48._padding_ >> 0x18));
  }
  FRDGBuilder::QueueBufferUpload
            (param_1,pFVar5,pvVar7,(longlong)(int)(uint)local_48._padding_ << 2,None);
  pTVar6 = FRDGBuilder::ConvertToExternalBuffer(param_1,pFVar5);
  pFVar2 = (this->EdgeToTwinEdgePooledBuffer).Reference;
  pFVar3 = pTVar6->Reference;
  if (pFVar2 != pFVar3) {
    (this->EdgeToTwinEdgePooledBuffer).Reference = pFVar3;
    if (pFVar3 != (FRDGPooledBuffer *)0x0) {
      LOCK();
      *(int *)&pFVar3->_padding_ = (int)pFVar3->_padding_ + 1;
      UNLOCK();
    }
    if (pFVar2 != (FRDGPooledBuffer *)0x0) {
      plVar1 = &pFVar2->_padding_;
      LOCK();
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if (((int)lVar4 == 1) && (plVar1 != (longlong *)0x0)) {
        (**(code **)pFVar2->_padding_)(pFVar2,1);
      }
    }
  }
  this->bInitialized = true;
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&local_48._padding_);
  local_48._padding_ = (longlong)&___7FResourceArrayUploadInterface__6B_;
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&local_28._padding_);
  return;
}

