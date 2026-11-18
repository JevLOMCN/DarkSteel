// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 14

// FSkeletalMeshHalfEdgeBuffer @ 1484426e0

FSkeletalMeshHalfEdgeBuffer * __thiscall
FSkeletalMeshHalfEdgeBuffer::FSkeletalMeshHalfEdgeBuffer(FSkeletalMeshHalfEdgeBuffer *this)

{
  FRenderResource::FRenderResource((FRenderResource *)this);
  this->_padding_ = (longlong)&___7FSkeletalMeshHalfEdgeBuffer__6B_;
  (this->VertexToEdgeData)._padding_ = (longlong)&___7__TResourceArray_H_0A___6B_;
  (this->EdgeToTwinEdgeData)._padding_ = (longlong)&___7__TResourceArray_H_0A___6B_;
  (this->VertexToEdgeData)._padding_ = 0;
  (this->VertexToEdgeData)._padding_ = 0;
  (this->VertexToEdgeData).bNeedsCPUAccess = false;
  (this->EdgeToTwinEdgeData)._padding_ = 0;
  (this->EdgeToTwinEdgeData)._padding_ = 0;
  (this->EdgeToTwinEdgeData).bNeedsCPUAccess = false;
  (this->VertexToEdgeBufferRHI).Reference = (FRHIBuffer *)0x0;
  (this->VertexToEdgeBufferSRV).Reference = (FRHIShaderResourceView *)0x0;
  (this->EdgeToTwinEdgeBufferRHI).Reference = (FRHIBuffer *)0x0;
  (this->EdgeToTwinEdgeBufferSRV).Reference = (FRHIShaderResourceView *)0x0;
  return this;
}

// ~FSkeletalMeshHalfEdgeBuffer @ 148446230

void __thiscall
FSkeletalMeshHalfEdgeBuffer::~FSkeletalMeshHalfEdgeBuffer(FSkeletalMeshHalfEdgeBuffer *this)

{
  FRHIShaderResourceView *pFVar1;
  FRHIBuffer *pFVar2;
  
  this->_padding_ = (longlong)&___7FSkeletalMeshHalfEdgeBuffer__6B_;
  pFVar1 = (this->EdgeToTwinEdgeBufferSRV).Reference;
  if (pFVar1 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  pFVar2 = (this->EdgeToTwinEdgeBufferRHI).Reference;
  if (pFVar2 != (FRHIBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar2);
  }
  pFVar1 = (this->VertexToEdgeBufferSRV).Reference;
  if (pFVar1 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  pFVar2 = (this->VertexToEdgeBufferRHI).Reference;
  if (pFVar2 != (FRHIBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar2);
  }
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&(this->EdgeToTwinEdgeData)._padding_);
  (this->EdgeToTwinEdgeData)._padding_ = (longlong)&___7FResourceArrayUploadInterface__6B_;
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&(this->VertexToEdgeData)._padding_);
  (this->VertexToEdgeData)._padding_ = (longlong)&___7FResourceArrayUploadInterface__6B_;
  FRenderResource::~FRenderResource((FRenderResource *)this);
  return;
}

// CleanUp @ 14845c280

void __thiscall FSkeletalMeshHalfEdgeBuffer::CleanUp(FSkeletalMeshHalfEdgeBuffer *this)

{
  int iVar1;
  
  iVar1 = *(int *)((longlong)&(this->VertexToEdgeData)._padding_ + 4);
  *(undefined4 *)&(this->VertexToEdgeData)._padding_ = 0;
  if (iVar1 < 0) {
    UE::Core::Private::ReallocTo<1,TMemoryImageAllocator<0>::ForAnyElementType>
              (4,4,0,(ForAnyElementType *)&(this->VertexToEdgeData)._padding_,0,
               (int *)((longlong)&(this->VertexToEdgeData)._padding_ + 4));
  }
  iVar1 = *(int *)((longlong)&(this->EdgeToTwinEdgeData)._padding_ + 4);
  *(undefined4 *)&(this->EdgeToTwinEdgeData)._padding_ = 0;
  if (iVar1 < 0) {
    UE::Core::Private::ReallocTo<1,TMemoryImageAllocator<0>::ForAnyElementType>
              (4,4,0,(ForAnyElementType *)&(this->EdgeToTwinEdgeData)._padding_,0,
               (int *)((longlong)&(this->EdgeToTwinEdgeData)._padding_ + 4));
  }
  return;
}

// CreateRHIBuffer @ 14845e6d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRHIInfo * __thiscall
FSkeletalMeshHalfEdgeBuffer::CreateRHIBuffer
          (FSkeletalMeshHalfEdgeBuffer *this,FRHIInfo *__return_storage_ptr__,
          FRHICommandListBase *param_1)

{
  TRefCountPtr<FRHIBuffer> *pTVar1;
  FRHIBuffer *pFVar2;
  TRefCountPtr<FRHIBuffer> TVar3;
  FRHIResource *local_res8;
  
  pTVar1 = &__return_storage_ptr__->EdgeToTwinEdgeBufferRHI;
  (__return_storage_ptr__->VertexToEdgeBufferRHI).Reference = (FRHIBuffer *)0x0;
  pTVar1->Reference = (FRHIBuffer *)0x0;
  (**(code **)((this->VertexToEdgeData)._padding_ + 0x10))(&this->VertexToEdgeData);
  FLazyName::Resolve(&::ClassName);
  TVar3 = FRHICommandListBase::CreateBuffer(param_1,(FRHIBufferCreateDesc *)&local_res8);
  if ((FRHIBuffer *)__return_storage_ptr__ != TVar3.Reference) {
    pFVar2 = (__return_storage_ptr__->VertexToEdgeBufferRHI).Reference;
    (__return_storage_ptr__->VertexToEdgeBufferRHI).Reference =
         (FRHIBuffer *)(TVar3.Reference)->_padding_;
    (TVar3.Reference)->_padding_ = 0;
    if (pFVar2 != (FRHIBuffer *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar2);
    }
  }
  if (local_res8 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_res8);
  }
  (**(code **)((this->EdgeToTwinEdgeData)._padding_ + 0x10))(&this->EdgeToTwinEdgeData);
  FLazyName::Resolve(&::ClassName);
  TVar3 = FRHICommandListBase::CreateBuffer(param_1,(FRHIBufferCreateDesc *)&local_res8);
  if ((FRHIBuffer *)pTVar1 != TVar3.Reference) {
    pFVar2 = pTVar1->Reference;
    pTVar1->Reference = (FRHIBuffer *)(TVar3.Reference)->_padding_;
    (TVar3.Reference)->_padding_ = 0;
    if (pFVar2 != (FRHIBuffer *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar2);
    }
  }
  if (local_res8 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_res8);
  }
  return __return_storage_ptr__;
}

// GetMinBufferSize @ 14846caa0

uint __thiscall FSkeletalMeshHalfEdgeBuffer::GetMinBufferSize(FSkeletalMeshHalfEdgeBuffer *this)

{
  return 4;
}

// GetResourceSize @ 14846eb30

int __thiscall FSkeletalMeshHalfEdgeBuffer::GetResourceSize(FSkeletalMeshHalfEdgeBuffer *this)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (**(code **)((this->EdgeToTwinEdgeData)._padding_ + 0x10))(&this->EdgeToTwinEdgeData);
  iVar2 = (**(code **)((this->VertexToEdgeData)._padding_ + 0x10))(&this->VertexToEdgeData);
  return iVar2 + iVar1;
}

// Init @ 148474af0

void __thiscall
FSkeletalMeshHalfEdgeBuffer::Init
          (FSkeletalMeshHalfEdgeBuffer *this,FSkeletalMeshLODRenderData *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if ((int)(this->VertexToEdgeData)._padding_ != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("VertexToEdgeData.Num() == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\SkeletalMeshHalfEdgeBuffer.cpp"
                       ,0xdf,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  SkeletalMeshHalfEdgeUtility::BuildHalfEdgeBuffers
            (param_1,&this->VertexToEdgeData,&this->EdgeToTwinEdgeData);
  return;
}

// InitRHI @ 148475820

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FSkeletalMeshHalfEdgeBuffer::InitRHI(FSkeletalMeshHalfEdgeBuffer *this,FRHICommandListBase *param_1)

{
  FRHIBuffer *pFVar1;
  FRHIShaderResourceView *pFVar2;
  code *pcVar3;
  bool bVar4;
  TRefCountPtr<FRHIShaderResourceView> TVar5;
  TRefCountPtr<FRHIShaderResourceView> *pTVar6;
  FRHIResource *local_res8;
  FRHIResource *local_res18;
  FRHIInfo local_48;
  FInitializer local_38;
  FInitializer local_28;
  
  CreateRHIBuffer(this,&local_48,param_1);
  pFVar1 = (this->VertexToEdgeBufferRHI).Reference;
  if (pFVar1 != local_48.VertexToEdgeBufferRHI.Reference) {
    (this->VertexToEdgeBufferRHI).Reference = local_48.VertexToEdgeBufferRHI.Reference;
    if (local_48.VertexToEdgeBufferRHI.Reference != (FRHIBuffer *)0x0) {
      FRHIResource::AddRef((FRHIResource *)local_48.VertexToEdgeBufferRHI.Reference);
    }
    if (pFVar1 != (FRHIBuffer *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar1);
    }
  }
  pFVar1 = (this->EdgeToTwinEdgeBufferRHI).Reference;
  if (pFVar1 != local_48.EdgeToTwinEdgeBufferRHI.Reference) {
    (this->EdgeToTwinEdgeBufferRHI).Reference = local_48.EdgeToTwinEdgeBufferRHI.Reference;
    if (local_48.EdgeToTwinEdgeBufferRHI.Reference != (FRHIBuffer *)0x0) {
      FRHIResource::AddRef((FRHIResource *)local_48.EdgeToTwinEdgeBufferRHI.Reference);
    }
    if (pFVar1 != (FRHIBuffer *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar1);
    }
  }
  pFVar1 = (this->VertexToEdgeBufferRHI).Reference;
  if (pFVar1 == (FRHIBuffer *)0x0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7947771427162161460>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\SkeletalMeshHalfEdgeBuffer.cpp"
                       ,0x134,"VertexToEdgeBufferRHI");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    local_38._0_8_ = 0;
    local_38._8_8_ = 0;
    FRHIViewDesc::FBufferSRV::FInitializer::SetTypeFromBuffer(&local_38,pFVar1);
    TVar5 = FRHICommandListBase::CreateShaderResourceView
                      (param_1,(FRHIBuffer *)&local_res8,
                       (FInitializer *)(this->VertexToEdgeBufferRHI).Reference);
    pTVar6 = &this->VertexToEdgeBufferSRV;
    if ((FRHIShaderResourceView *)pTVar6 != TVar5.Reference) {
      pFVar2 = pTVar6->Reference;
                    /* WARNING: Load size is inaccurate */
      pTVar6->Reference = *TVar5.Reference;
      *(undefined8 *)TVar5.Reference = 0;
      if (pFVar2 != (FRHIShaderResourceView *)0x0) {
        FRHIResource::Release((FRHIResource *)pFVar2);
      }
    }
    if (local_res8 != (FRHIResource *)0x0) {
      FRHIResource::Release(local_res8);
    }
  }
  pFVar1 = (this->EdgeToTwinEdgeBufferRHI).Reference;
  if (pFVar1 == (FRHIBuffer *)0x0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7947771427162161464>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\SkeletalMeshHalfEdgeBuffer.cpp"
                       ,0x138,"EdgeToTwinEdgeBufferRHI");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    local_28._0_8_ = 0;
    local_28._8_8_ = 0;
    FRHIViewDesc::FBufferSRV::FInitializer::SetTypeFromBuffer(&local_28,pFVar1);
    TVar5 = FRHICommandListBase::CreateShaderResourceView
                      (param_1,(FRHIBuffer *)&local_res18,
                       (FInitializer *)(this->EdgeToTwinEdgeBufferRHI).Reference);
    pTVar6 = &this->EdgeToTwinEdgeBufferSRV;
    if ((FRHIShaderResourceView *)pTVar6 != TVar5.Reference) {
      pFVar2 = pTVar6->Reference;
                    /* WARNING: Load size is inaccurate */
      pTVar6->Reference = *TVar5.Reference;
      *(undefined8 *)TVar5.Reference = 0;
      if (pFVar2 != (FRHIShaderResourceView *)0x0) {
        FRHIResource::Release((FRHIResource *)pFVar2);
      }
    }
    if (local_res18 != (FRHIResource *)0x0) {
      FRHIResource::Release(local_res18);
    }
  }
  if (local_48.EdgeToTwinEdgeBufferRHI.Reference != (FRHIBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)local_48.EdgeToTwinEdgeBufferRHI.Reference);
  }
  if (local_48.VertexToEdgeBufferRHI.Reference != (FRHIBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)local_48.VertexToEdgeBufferRHI.Reference);
  }
  return;
}

// InitRHIForStreaming @ 148476700

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FSkeletalMeshHalfEdgeBuffer::InitRHIForStreaming
          (FSkeletalMeshHalfEdgeBuffer *this,FRHIInfo *param_1,FRHIResourceReplaceBatcher *param_2)

{
  FRHIBuffer *pFVar1;
  
  if (((this->VertexToEdgeBufferRHI).Reference != (FRHIBuffer *)0x0) &&
     ((param_1->VertexToEdgeBufferRHI).Reference != (FRHIBuffer *)0x0)) {
    FRHIResourceReplaceBatcher::
    EnqueueReplace<TRefCountPtr<FRHIBuffer>_&,TRefCountPtr<FRHIBuffer>_&>
              (param_2,&this->VertexToEdgeBufferRHI,&param_1->VertexToEdgeBufferRHI);
  }
  if (((this->EdgeToTwinEdgeBufferRHI).Reference != (FRHIBuffer *)0x0) &&
     ((param_1->EdgeToTwinEdgeBufferRHI).Reference != (FRHIBuffer *)0x0)) {
    FRHIResourceReplaceBatcher::
    EnqueueReplace<TRefCountPtr<FRHIBuffer>_&,TRefCountPtr<FRHIBuffer>_&>
              (param_2,&this->EdgeToTwinEdgeBufferRHI,&param_1->EdgeToTwinEdgeBufferRHI);
  }
  pFVar1 = (param_1->EdgeToTwinEdgeBufferRHI).Reference;
  if (pFVar1 != (FRHIBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  pFVar1 = (param_1->VertexToEdgeBufferRHI).Reference;
  if (pFVar1 != (FRHIBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  return;
}

// IsCPUDataValid @ 1484780d0

bool __thiscall FSkeletalMeshHalfEdgeBuffer::IsCPUDataValid(FSkeletalMeshHalfEdgeBuffer *this)

{
  if ((0 < (int)(this->VertexToEdgeData)._padding_) &&
     (0 < (int)(this->EdgeToTwinEdgeData)._padding_)) {
    return true;
  }
  return false;
}

// IsReadyForRendering @ 148478710

bool __thiscall FSkeletalMeshHalfEdgeBuffer::IsReadyForRendering(FSkeletalMeshHalfEdgeBuffer *this)

{
  if (((int)this->_padding_ != -1) && (4 < (((this->VertexToEdgeBufferRHI).Reference)->Desc).Size))
  {
    return true;
  }
  return false;
}

// ReleaseRHI @ 148483400

void __thiscall FSkeletalMeshHalfEdgeBuffer::ReleaseRHI(FSkeletalMeshHalfEdgeBuffer *this)

{
  FRHIBuffer *pFVar1;
  FRHIShaderResourceView *pFVar2;
  
  pFVar1 = (this->VertexToEdgeBufferRHI).Reference;
  if (pFVar1 != (FRHIBuffer *)0x0) {
    (this->VertexToEdgeBufferRHI).Reference = (FRHIBuffer *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  pFVar2 = (this->VertexToEdgeBufferSRV).Reference;
  if (pFVar2 != (FRHIShaderResourceView *)0x0) {
    (this->VertexToEdgeBufferSRV).Reference = (FRHIShaderResourceView *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar2);
  }
  pFVar1 = (this->EdgeToTwinEdgeBufferRHI).Reference;
  if (pFVar1 != (FRHIBuffer *)0x0) {
    (this->EdgeToTwinEdgeBufferRHI).Reference = (FRHIBuffer *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  pFVar2 = (this->EdgeToTwinEdgeBufferSRV).Reference;
  if (pFVar2 != (FRHIShaderResourceView *)0x0) {
    (this->EdgeToTwinEdgeBufferSRV).Reference = (FRHIShaderResourceView *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar2);
  }
  return;
}

// ReleaseRHIForStreaming @ 148483650

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FSkeletalMeshHalfEdgeBuffer::ReleaseRHIForStreaming
          (FSkeletalMeshHalfEdgeBuffer *this,FRHIResourceReplaceBatcher *param_1)

{
  TArray<FRHIResourceReplaceInfo,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  
  pTVar1 = &param_1->Infos;
  if ((this->VertexToEdgeBufferRHI).Reference != (FRHIBuffer *)0x0) {
    iVar4 = (param_1->Infos).ArrayNum;
    piVar2 = &(param_1->Infos).ArrayMax;
    if (iVar4 == *piVar2) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x818,&pTVar1->AllocatorInstance,piVar2);
    }
    (param_1->Infos).ArrayNum = iVar4 + 1;
    pFVar3 = (pTVar1->AllocatorInstance).Data + (longlong)iVar4 * 0x18;
    *(FRHIBuffer **)pFVar3 = (this->VertexToEdgeBufferRHI).Reference;
    *(undefined8 *)(pFVar3 + 8) = 0;
    pFVar3[0x10] = (FScriptContainerElement)0x0;
  }
  if ((this->EdgeToTwinEdgeBufferRHI).Reference != (FRHIBuffer *)0x0) {
    iVar4 = (param_1->Infos).ArrayNum;
    piVar2 = &(param_1->Infos).ArrayMax;
    if (iVar4 == *piVar2) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x818,&pTVar1->AllocatorInstance,piVar2);
      (param_1->Infos).ArrayNum = iVar4;
    }
    (param_1->Infos).ArrayNum = iVar4 + 1;
    pFVar3 = (pTVar1->AllocatorInstance).Data + (longlong)iVar4 * 0x18;
    *(FRHIBuffer **)pFVar3 = (this->EdgeToTwinEdgeBufferRHI).Reference;
    *(undefined8 *)(pFVar3 + 8) = 0;
    pFVar3[0x10] = (FScriptContainerElement)0x0;
  }
  return;
}

// Serialize @ 148491230

void __thiscall
FSkeletalMeshHalfEdgeBuffer::Serialize(FSkeletalMeshHalfEdgeBuffer *this,FArchive *param_1)

{
  TArray<int,TMemoryImageAllocator<0>_> *pTVar1;
  
  pTVar1 = (TArray<int,TMemoryImageAllocator<0>_> *)&(this->VertexToEdgeData)._padding_;
  if (this == (FSkeletalMeshHalfEdgeBuffer *)0xffffffffffffffe0) {
    pTVar1 = (TArray<int,TMemoryImageAllocator<0>_> *)0x0;
  }
  TArrayPrivateFriend::Serialize<int,TMemoryImageAllocator<0>_>(param_1,pTVar1);
  pTVar1 = (TArray<int,TMemoryImageAllocator<0>_> *)&(this->EdgeToTwinEdgeData)._padding_;
  if (this == (FSkeletalMeshHalfEdgeBuffer *)0xffffffffffffffc0) {
    pTVar1 = (TArray<int,TMemoryImageAllocator<0>_> *)0x0;
  }
  TArrayPrivateFriend::Serialize<int,TMemoryImageAllocator<0>_>(param_1,pTVar1);
  return;
}

