// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 20

// FSkinWeightLookupVertexBuffer @ 1484428a0

FSkinWeightLookupVertexBuffer * __thiscall
FSkinWeightLookupVertexBuffer::FSkinWeightLookupVertexBuffer
          (FSkinWeightLookupVertexBuffer *this,FSkinWeightLookupVertexBuffer *param_1)

{
  FVertexBuffer::FVertexBuffer((FVertexBuffer *)this);
  this->_padding_ = (longlong)&___7FSkinWeightLookupVertexBuffer__6B_;
  (this->SRVValue).Reference = (FRHIShaderResourceView *)0x0;
  this->bNeedsCPUAccess = param_1->bNeedsCPUAccess;
  this->LookupData = (FStaticMeshVertexDataInterface *)0x0;
  this->Data = (uchar *)0x0;
  this->NumVertices = 0;
  return this;
}

// FSkinWeightLookupVertexBuffer @ 1484428f0

FSkinWeightLookupVertexBuffer * __thiscall
FSkinWeightLookupVertexBuffer::FSkinWeightLookupVertexBuffer(FSkinWeightLookupVertexBuffer *this)

{
  FVertexBuffer::FVertexBuffer((FVertexBuffer *)this);
  this->_padding_ = (longlong)&___7FSkinWeightLookupVertexBuffer__6B_;
  (this->SRVValue).Reference = (FRHIShaderResourceView *)0x0;
  this->bNeedsCPUAccess = false;
  this->LookupData = (FStaticMeshVertexDataInterface *)0x0;
  this->Data = (uchar *)0x0;
  this->NumVertices = 0;
  return this;
}

// ~FSkinWeightLookupVertexBuffer @ 148446370

void __thiscall
FSkinWeightLookupVertexBuffer::~FSkinWeightLookupVertexBuffer(FSkinWeightLookupVertexBuffer *this)

{
  FStaticMeshVertexDataInterface *pFVar1;
  FRHIShaderResourceView *this_00;
  
  this->_padding_ = (longlong)&___7FSkinWeightLookupVertexBuffer__6B_;
  pFVar1 = this->LookupData;
  if (pFVar1 != (FStaticMeshVertexDataInterface *)0x0) {
    (**(code **)*pFVar1)(pFVar1,1);
    this->LookupData = (FStaticMeshVertexDataInterface *)0x0;
  }
  this_00 = (this->SRVValue).Reference;
  if (this_00 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)this_00);
  }
  FVertexBuffer::~FVertexBuffer((FVertexBuffer *)this);
  return;
}

// operator= @ 1484476c0

FSkinWeightLookupVertexBuffer * __thiscall
FSkinWeightLookupVertexBuffer::operator=
          (FSkinWeightLookupVertexBuffer *this,FSkinWeightLookupVertexBuffer *param_1)

{
  FStaticMeshVertexDataInterface *pFVar1;
  
  pFVar1 = this->LookupData;
  if (pFVar1 != (FStaticMeshVertexDataInterface *)0x0) {
    (**(code **)*pFVar1)(pFVar1,1);
    this->LookupData = (FStaticMeshVertexDataInterface *)0x0;
  }
  this->bNeedsCPUAccess = param_1->bNeedsCPUAccess;
  return this;
}

// AllocateData @ 1484523a0

void __thiscall FSkinWeightLookupVertexBuffer::AllocateData(FSkinWeightLookupVertexBuffer *this)

{
  bool bVar1;
  FStaticMeshVertexDataInterface *pFVar2;
  
  pFVar2 = this->LookupData;
  if (pFVar2 != (FStaticMeshVertexDataInterface *)0x0) {
    (**(code **)*pFVar2)(pFVar2,1);
    this->LookupData = (FStaticMeshVertexDataInterface *)0x0;
  }
  pFVar2 = ::operator_new(0x28);
  if (pFVar2 != (FStaticMeshVertexDataInterface *)0x0) {
    bVar1 = this->bNeedsCPUAccess;
    *pFVar2 = (FStaticMeshVertexDataInterface)&___7__TStaticMeshVertexData_I__6B_;
    pFVar2[1] = (FStaticMeshVertexDataInterface)&___7__TResourceArray_I_0A___6B_;
    pFVar2[2] = (FStaticMeshVertexDataInterface)0x0;
    pFVar2[3] = (FStaticMeshVertexDataInterface)0x0;
    *(bool *)(pFVar2 + 4) = bVar1;
    this->LookupData = pFVar2;
    return;
  }
  this->LookupData = (FStaticMeshVertexDataInterface *)0x0;
  return;
}

// CleanUp @ 14845c360

void __thiscall FSkinWeightLookupVertexBuffer::CleanUp(FSkinWeightLookupVertexBuffer *this)

{
  FStaticMeshVertexDataInterface *pFVar1;
  
  pFVar1 = this->LookupData;
  if (pFVar1 != (FStaticMeshVertexDataInterface *)0x0) {
    (**(code **)*pFVar1)(pFVar1,1);
    this->LookupData = (FStaticMeshVertexDataInterface *)0x0;
  }
  return;
}

// CopyMetaData @ 14845d210

void __thiscall
FSkinWeightLookupVertexBuffer::CopyMetaData
          (FSkinWeightLookupVertexBuffer *this,FSkinWeightLookupVertexBuffer *param_1)

{
  this->NumVertices = param_1->NumVertices;
  return;
}

// CreateRHIBuffer @ 14845ea40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

TRefCountPtr<FRHIBuffer> __thiscall
FSkinWeightLookupVertexBuffer::CreateRHIBuffer
          (FSkinWeightLookupVertexBuffer *this,FRHICommandListBase *param_1)

{
  FStaticMeshVertexDataInterface **in_R8;
  undefined4 in_stack_ffffffffffffffe4;
  
  FRenderResource::CreateRHIBuffer<FStaticMeshVertexDataInterface_*>
            ((FRenderResource *)this,param_1,in_R8,(int)this + 0x38,this->NumVertices,
             (wchar_t *)CONCAT44(in_stack_ffffffffffffffe4,0x121));
  return (TRefCountPtr<FRHIBuffer>)(FRHIBuffer *)param_1;
}

// GetFriendlyName @ 14846c470

FString * __thiscall
FSkinWeightLookupVertexBuffer::GetFriendlyName
          (FSkinWeightLookupVertexBuffer *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"SkeletalMesh Vertex Weights Lookup");
  return __return_storage_ptr__;
}

// GetWeightOffsetAndInfluenceCount @ 1484742b0

void __thiscall
FSkinWeightLookupVertexBuffer::GetWeightOffsetAndInfluenceCount
          (FSkinWeightLookupVertexBuffer *this,uint param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  
  uVar1 = *(uint *)(this->Data + param_1 * 4);
  *param_2 = uVar1 >> 8;
  *param_3 = uVar1 & 0xff;
  return;
}

// Init @ 148474d10

void __thiscall
FSkinWeightLookupVertexBuffer::Init(FSkinWeightLookupVertexBuffer *this,uint param_1)

{
  uchar *puVar1;
  
  AllocateData(this);
  this->NumVertices = param_1;
  (**(code **)((longlong)*this->LookupData + 8))(this->LookupData,param_1,0);
  if (this->NumVertices != 0) {
    puVar1 = (uchar *)(**(code **)((longlong)*this->LookupData + 0x30))();
    this->Data = puVar1;
    return;
  }
  this->Data = (uchar *)0x0;
  return;
}

// InitRHI @ 148475d80

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FSkinWeightLookupVertexBuffer::InitRHI
          (FSkinWeightLookupVertexBuffer *this,FRHICommandListBase *param_1)

{
  longlong *plVar1;
  TRefCountPtr<FRHIShaderResourceView> *pTVar2;
  FRHIResource *pFVar3;
  FRHIShaderResourceView *this_00;
  TRefCountPtr<FRHIShaderResourceView> TVar4;
  FRHIResource *local_res8;
  undefined4 in_stack_ffffffffffffffc4;
  FRHIResource *local_28;
  uchar *local_20;
  FTaggedMemory *pFStack_18;
  
  FRenderResource::CreateRHIBuffer<FStaticMeshVertexDataInterface_*>
            ((FRenderResource *)this,(FRHICommandListBase *)&stack0xffffffffffffffd8,
             (FStaticMeshVertexDataInterface **)param_1,(int)this + 0x38,this->NumVertices,
             (wchar_t *)CONCAT44(in_stack_ffffffffffffffc4,0x121));
  plVar1 = &this->_padding_;
  if ((FRHIResource **)plVar1 != &stack0xffffffffffffffd8) {
    pFVar3 = (FRHIResource *)*plVar1;
    *plVar1 = (longlong)local_28;
    local_28 = pFVar3;
  }
  if (local_28 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_28);
  }
  if (((FInitializer *)*plVar1 != (FInitializer *)0x0) &&
     (ZPULL(GPixelFormats[0x1c],0,1) != 0 || this->bNeedsCPUAccess != false)) {
    pFStack_18 = (FTaggedMemory *)0x0;
    local_20 = (uchar *)0x11c00;
    TVar4 = FRHICommandListBase::CreateShaderResourceView
                      (param_1,(FRHIBuffer *)&stack0x00000008,(FInitializer *)*plVar1);
    pTVar2 = &this->SRVValue;
    if ((FRHIShaderResourceView *)pTVar2 != TVar4.Reference) {
      this_00 = pTVar2->Reference;
                    /* WARNING: Load size is inaccurate */
      pTVar2->Reference = *TVar4.Reference;
      *(undefined8 *)TVar4.Reference = 0;
      if (this_00 != (FRHIShaderResourceView *)0x0) {
        FRHIResource::Release((FRHIResource *)this_00);
      }
    }
    if (local_res8 != (FRHIResource *)0x0) {
      FRHIResource::Release(local_res8);
    }
  }
  return;
}

// InitRHIForStreaming @ 148476890

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FSkinWeightLookupVertexBuffer::InitRHIForStreaming
          (FSkinWeightLookupVertexBuffer *this,FRHIBuffer *param_1,
          FRHIResourceReplaceBatcher *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  
  if ((this->_padding_ != 0) && (param_1 != (FRHIBuffer *)0x0)) {
    iVar2 = (param_2->Infos).ArrayNum;
    if (iVar2 == (param_2->Infos).ArrayMax) {
      iVar2 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x818,&(param_2->Infos).AllocatorInstance,&(param_2->Infos).ArrayMax);
    }
    (param_2->Infos).ArrayNum = iVar2 + 1;
    pFVar1 = (param_2->Infos).AllocatorInstance.Data + (longlong)iVar2 * 0x18;
    *(longlong *)pFVar1 = this->_padding_;
    *(FRHIBuffer **)(pFVar1 + 8) = param_1;
    pFVar1[0x10] = (FScriptContainerElement)0x0;
  }
  return;
}

// IsLookupDataValid @ 148478680

bool __thiscall
FSkinWeightLookupVertexBuffer::IsLookupDataValid(FSkinWeightLookupVertexBuffer *this)

{
  return this->LookupData != (FStaticMeshVertexDataInterface *)0x0;
}

// ReleaseRHI @ 1484834f0

void __thiscall FSkinWeightLookupVertexBuffer::ReleaseRHI(FSkinWeightLookupVertexBuffer *this)

{
  FRHIShaderResourceView *this_00;
  
  this_00 = (this->SRVValue).Reference;
  if (this_00 != (FRHIShaderResourceView *)0x0) {
    (this->SRVValue).Reference = (FRHIShaderResourceView *)0x0;
    FRHIResource::Release((FRHIResource *)this_00);
  }
  FVertexBuffer::ReleaseRHI((FVertexBuffer *)this);
  return;
}

// ReleaseRHIForStreaming @ 1484837f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FSkinWeightLookupVertexBuffer::ReleaseRHIForStreaming
          (FSkinWeightLookupVertexBuffer *this,FRHIResourceReplaceBatcher *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  
  if (this->_padding_ != 0) {
    iVar2 = (param_1->Infos).ArrayNum;
    if (iVar2 == (param_1->Infos).ArrayMax) {
      iVar2 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x818,&(param_1->Infos).AllocatorInstance,&(param_1->Infos).ArrayMax);
    }
    (param_1->Infos).ArrayNum = iVar2 + 1;
    pFVar1 = (param_1->Infos).AllocatorInstance.Data + (longlong)iVar2 * 0x18;
    *(longlong *)pFVar1 = this->_padding_;
    *(longlong *)(pFVar1 + 8) = 0;
    pFVar1[0x10] = (FScriptContainerElement)0x0;
  }
  return;
}

// ResizeBuffer @ 14848bc70

void __thiscall
FSkinWeightLookupVertexBuffer::ResizeBuffer(FSkinWeightLookupVertexBuffer *this,uint param_1)

{
  uchar *puVar1;
  
  this->NumVertices = param_1;
  (**(code **)((longlong)*this->LookupData + 8))(this->LookupData,param_1,0);
  if (this->NumVertices != 0) {
    puVar1 = (uchar *)(**(code **)((longlong)*this->LookupData + 0x30))();
    this->Data = puVar1;
    return;
  }
  this->Data = (uchar *)0x0;
  return;
}

// SerializeMetaData @ 148492d50

void __thiscall
FSkinWeightLookupVertexBuffer::SerializeMetaData
          (FSkinWeightLookupVertexBuffer *this,FArchive *param_1)

{
  uint *puVar1;
  uint *puVar2;
  int iVar3;
  
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FAnimObjectVersion::GUID);
  iVar3 = FArchiveState::CustomVer((FArchiveState *)param_1,&FAnimObjectVersion::GUID);
  if (4 < iVar3) {
    puVar1 = &this->NumVertices;
    puVar2 = (uint *)**(undefined8 **)&param_1->field_0x8;
    if (puVar2 + 1 <= (uint *)(*(undefined8 **)&param_1->field_0x8)[1]) {
      *puVar1 = *puVar2;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
      return;
    }
    if ((param_1->field_0x2a & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000148492dd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar1,4);
      return;
    }
    FArchive::SerializeByteOrderSwapped(param_1,puVar1);
  }
  return;
}

// SetMetaData @ 148493b30

void __thiscall
FSkinWeightLookupVertexBuffer::SetMetaData(FSkinWeightLookupVertexBuffer *this,uint param_1)

{
  this->NumVertices = param_1;
  return;
}

// SetWeightOffsetAndInfluenceCount @ 1484948a0

void __thiscall
FSkinWeightLookupVertexBuffer::SetWeightOffsetAndInfluenceCount
          (FSkinWeightLookupVertexBuffer *this,uint param_1,uint param_2,uint param_3)

{
  *(uint *)(this->Data + param_1 * 4) = param_2 << 8 | param_3;
  return;
}

