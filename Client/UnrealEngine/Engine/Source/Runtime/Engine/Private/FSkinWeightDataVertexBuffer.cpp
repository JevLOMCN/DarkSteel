// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 26

// FSkinWeightDataVertexBuffer @ 1484427e0

FSkinWeightDataVertexBuffer * __thiscall
FSkinWeightDataVertexBuffer::FSkinWeightDataVertexBuffer
          (FSkinWeightDataVertexBuffer *this,FSkinWeightDataVertexBuffer *param_1)

{
  FVertexBuffer::FVertexBuffer((FVertexBuffer *)this);
  this->_padding_ = (longlong)&___7FSkinWeightDataVertexBuffer__6B_;
  (this->SRVValue).Reference = (FRHIShaderResourceView *)0x0;
  this->bNeedsCPUAccess = param_1->bNeedsCPUAccess;
  this->bVariableBonesPerVertex = param_1->bVariableBonesPerVertex;
  this->MaxBoneInfluences = param_1->MaxBoneInfluences;
  this->bUse16BitBoneIndex = param_1->bUse16BitBoneIndex;
  this->bUse16BitBoneWeight = param_1->bUse16BitBoneWeight;
  this->WeightData = (FStaticMeshVertexDataInterface *)0x0;
  this->Data = (uchar *)0x0;
  this->NumVertices = 0;
  this->NumBoneWeights = 0;
  return this;
}

// FSkinWeightDataVertexBuffer @ 148442850

FSkinWeightDataVertexBuffer * __thiscall
FSkinWeightDataVertexBuffer::FSkinWeightDataVertexBuffer(FSkinWeightDataVertexBuffer *this)

{
  FVertexBuffer::FVertexBuffer((FVertexBuffer *)this);
  this->MaxBoneInfluences = 4;
  this->_padding_ = (longlong)&___7FSkinWeightDataVertexBuffer__6B_;
  (this->SRVValue).Reference = (FRHIShaderResourceView *)0x0;
  this->bNeedsCPUAccess = false;
  this->bVariableBonesPerVertex = false;
  this->bUse16BitBoneIndex = false;
  this->bUse16BitBoneWeight = false;
  this->WeightData = (FStaticMeshVertexDataInterface *)0x0;
  this->Data = (uchar *)0x0;
  this->NumVertices = 0;
  this->NumBoneWeights = 0;
  return this;
}

// ~FSkinWeightDataVertexBuffer @ 148446320

void __thiscall
FSkinWeightDataVertexBuffer::~FSkinWeightDataVertexBuffer(FSkinWeightDataVertexBuffer *this)

{
  FStaticMeshVertexDataInterface *pFVar1;
  FRHIShaderResourceView *this_00;
  
  this->_padding_ = (longlong)&___7FSkinWeightDataVertexBuffer__6B_;
  pFVar1 = this->WeightData;
  if (pFVar1 != (FStaticMeshVertexDataInterface *)0x0) {
    (**(code **)*pFVar1)(pFVar1,1);
    this->WeightData = (FStaticMeshVertexDataInterface *)0x0;
  }
  this_00 = (this->SRVValue).Reference;
  if (this_00 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)this_00);
  }
  FVertexBuffer::~FVertexBuffer((FVertexBuffer *)this);
  return;
}

// operator= @ 148447650

FSkinWeightDataVertexBuffer * __thiscall
FSkinWeightDataVertexBuffer::operator=
          (FSkinWeightDataVertexBuffer *this,FSkinWeightDataVertexBuffer *param_1)

{
  FStaticMeshVertexDataInterface *pFVar1;
  
  pFVar1 = this->WeightData;
  if (pFVar1 != (FStaticMeshVertexDataInterface *)0x0) {
    (**(code **)*pFVar1)(pFVar1,1);
    this->WeightData = (FStaticMeshVertexDataInterface *)0x0;
  }
  this->bNeedsCPUAccess = param_1->bNeedsCPUAccess;
  this->bVariableBonesPerVertex = param_1->bVariableBonesPerVertex;
  this->MaxBoneInfluences = param_1->MaxBoneInfluences;
  this->bUse16BitBoneIndex = param_1->bUse16BitBoneIndex;
  this->bUse16BitBoneWeight = param_1->bUse16BitBoneWeight;
  return this;
}

// AllocateData @ 148452320

void __thiscall FSkinWeightDataVertexBuffer::AllocateData(FSkinWeightDataVertexBuffer *this)

{
  FStaticMeshVertexDataInterface *pFVar1;
  
  pFVar1 = this->WeightData;
  if (pFVar1 != (FStaticMeshVertexDataInterface *)0x0) {
    (**(code **)*pFVar1)(pFVar1,1);
    this->WeightData = (FStaticMeshVertexDataInterface *)0x0;
  }
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStaticMeshVertexDataInterface *)0x0) {
    *(bool *)(pFVar1 + 4) = this->bNeedsCPUAccess;
    *pFVar1 = (FStaticMeshVertexDataInterface)&___7__FSkinWeightVertexData_E__6B_;
    pFVar1[2] = (FStaticMeshVertexDataInterface)0x0;
    pFVar1[3] = (FStaticMeshVertexDataInterface)0x0;
    pFVar1[1] = (FStaticMeshVertexDataInterface)&___7__TResourceArray_E_0A___6B_;
    this->WeightData = pFVar1;
    return;
  }
  this->WeightData = (FStaticMeshVertexDataInterface *)0x0;
  return;
}

// CleanUp @ 14845c330

void __thiscall FSkinWeightDataVertexBuffer::CleanUp(FSkinWeightDataVertexBuffer *this)

{
  FStaticMeshVertexDataInterface *pFVar1;
  
  pFVar1 = this->WeightData;
  if (pFVar1 != (FStaticMeshVertexDataInterface *)0x0) {
    (**(code **)*pFVar1)(pFVar1,1);
    this->WeightData = (FStaticMeshVertexDataInterface *)0x0;
  }
  return;
}

// CopyDataFromBuffer @ 14845d180

void __thiscall
FSkinWeightDataVertexBuffer::CopyDataFromBuffer
          (FSkinWeightDataVertexBuffer *this,uchar *param_1,uint param_2)

{
  Init(this,param_2 * this->MaxBoneInfluences,param_2);
  memcpy(this->Data,param_1,
         (ulonglong)
         (((uint)(this->bUse16BitBoneWeight != false) + (this->bUse16BitBoneIndex != false) + 2) *
         this->NumBoneWeights));
  return;
}

// CopyMetaData @ 14845d1e0

void __thiscall
FSkinWeightDataVertexBuffer::CopyMetaData
          (FSkinWeightDataVertexBuffer *this,FSkinWeightDataVertexBuffer *param_1)

{
  this->bVariableBonesPerVertex = param_1->bVariableBonesPerVertex;
  this->MaxBoneInfluences = param_1->MaxBoneInfluences;
  this->bUse16BitBoneIndex = param_1->bUse16BitBoneIndex;
  this->bUse16BitBoneWeight = param_1->bUse16BitBoneWeight;
  this->NumBoneWeights = param_1->NumBoneWeights;
  return;
}

// CreateRHIBuffer @ 14845ea00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

TRefCountPtr<FRHIBuffer> __thiscall
FSkinWeightDataVertexBuffer::CreateRHIBuffer
          (FSkinWeightDataVertexBuffer *this,FRHICommandListBase *param_1)

{
  FStaticMeshVertexDataInterface **in_R8;
  undefined4 in_stack_ffffffffffffffe4;
  
  FRenderResource::CreateRHIBuffer<FStaticMeshVertexDataInterface_*>
            ((FRenderResource *)this,param_1,in_R8,(int)this + 0x40,this->NumBoneWeights,
             (wchar_t *)CONCAT44(in_stack_ffffffffffffffe4,0x121));
  return (TRefCountPtr<FRHIBuffer>)(FRHIBuffer *)param_1;
}

// GetBoneIndex @ 14846abd0

uint __thiscall
FSkinWeightDataVertexBuffer::GetBoneIndex
          (FSkinWeightDataVertexBuffer *this,uint param_1,uint param_2,uint param_3)

{
  if (param_2 <= param_3) {
    return 0;
  }
  if (this->bUse16BitBoneIndex != false) {
    return (uint)*(ushort *)(this->Data + (ulonglong)param_3 * 2 + (ulonglong)param_1);
  }
  return (uint)this->Data[(ulonglong)param_3 + (ulonglong)param_1];
}

// GetBoneWeight @ 14846ac80

ushort __thiscall
FSkinWeightDataVertexBuffer::GetBoneWeight
          (FSkinWeightDataVertexBuffer *this,uint param_1,uint param_2,uint param_3)

{
  uchar uVar1;
  longlong lVar2;
  
  if (param_2 <= param_3) {
    return 0;
  }
  lVar2 = (ulonglong)(param_2 * ((this->bUse16BitBoneIndex != false) + 1)) +
          (ulonglong)(((this->bUse16BitBoneWeight != false) + 1) * param_3);
  if (this->bUse16BitBoneWeight != false) {
    return *(ushort *)(this->Data + (ulonglong)param_1 + lVar2);
  }
  uVar1 = this->Data[(ulonglong)param_1 + lVar2];
  return CONCAT11(uVar1,uVar1);
}

// GetFriendlyName @ 14846c440

FString * __thiscall
FSkinWeightDataVertexBuffer::GetFriendlyName
          (FSkinWeightDataVertexBuffer *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"SkeletalMesh Vertex Weights Data");
  return __return_storage_ptr__;
}

// GetRigidWeightBone @ 14846ec10

bool __thiscall
FSkinWeightDataVertexBuffer::GetRigidWeightBone
          (FSkinWeightDataVertexBuffer *this,uint param_1,uint param_2,int *param_3)

{
  uchar *puVar1;
  uint uVar2;
  ulonglong uVar3;
  
  puVar1 = this->Data;
  uVar3 = 0;
  if (param_2 != 0) {
    do {
      if (puVar1[(ulonglong)((int)uVar3 + ((this->bUse16BitBoneIndex != false) + 1) * param_2) +
                 (ulonglong)param_1] == 0xff) {
        if (this->bUse16BitBoneIndex != false) {
          *param_3 = (uint)*(ushort *)(puVar1 + uVar3 * 2 + (ulonglong)param_1);
          return true;
        }
        *param_3 = (uint)puVar1[uVar3 + param_1];
        return true;
      }
      uVar2 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar2;
    } while (uVar2 < param_2);
  }
  return false;
}

// Init @ 148474c90

void __thiscall
FSkinWeightDataVertexBuffer::Init(FSkinWeightDataVertexBuffer *this,uint param_1,uint param_2)

{
  uchar *puVar1;
  
  AllocateData(this);
  this->NumBoneWeights = param_1;
  this->NumVertices = param_2;
  (**(code **)((longlong)*this->WeightData + 8))
            (this->WeightData,
             ((uint)(this->bUse16BitBoneWeight != false) + (this->bUse16BitBoneIndex != false) + 2)
             * param_1,0);
  if (this->NumBoneWeights != 0) {
    puVar1 = (uchar *)(**(code **)((longlong)*this->WeightData + 0x30))();
    this->Data = puVar1;
  }
  return;
}

// InitRHI @ 148475bf0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FSkinWeightDataVertexBuffer::InitRHI(FSkinWeightDataVertexBuffer *this,FRHICommandListBase *param_1)

{
  longlong *plVar1;
  FRHIResource *pFVar2;
  FRHIShaderResourceView *this_00;
  bool bVar3;
  bool bVar4;
  byte bVar5;
  longlong lVar6;
  TRefCountPtr<FRHIShaderResourceView> TVar7;
  TRefCountPtr<FRHIShaderResourceView> *pTVar8;
  FRHIResource *local_res8;
  undefined4 in_stack_ffffffffffffffc4;
  FRHIResource *local_28;
  uchar *local_20;
  FTaggedMemory *pFStack_18;
  
  if ((CpuChannel->Enabled < 0) || (LoadTimeChannel->Enabled < 0)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId434,"FSkinWeightVertexBuffer_InitRHI",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\SkinWeightVertexBuffer.cpp"
               ,0x1b2);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId434);
  }
  FRenderResource::CreateRHIBuffer<FStaticMeshVertexDataInterface_*>
            ((FRenderResource *)this,(FRHICommandListBase *)&stack0xffffffffffffffd8,
             (FStaticMeshVertexDataInterface **)param_1,(int)this + 0x40,this->NumBoneWeights,
             (wchar_t *)CONCAT44(in_stack_ffffffffffffffc4,0x121));
  plVar1 = &this->_padding_;
  if ((FRHIResource **)plVar1 != &stack0xffffffffffffffd8) {
    pFVar2 = (FRHIResource *)*plVar1;
    *plVar1 = (longlong)local_28;
    local_28 = pFVar2;
  }
  if (local_28 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_28);
  }
  if ((FInitializer *)*plVar1 != (FInitializer *)0x0) {
    lVar6 = 0x540;
    if (this->bVariableBonesPerVertex != false) {
      lVar6 = 0xab0;
    }
    if (((&GPixelFormats[0].field_0x28)[lVar6] & 1) != 0) {
      bVar3 = true;
      goto LAB_148475ce8;
    }
  }
  bVar3 = false;
LAB_148475ce8:
  if (bVar3 || this->bNeedsCPUAccess != false) {
    bVar5 = 0x1c;
    if (this->bVariableBonesPerVertex != false) {
      bVar5 = 0x39;
    }
    pFStack_18 = (FTaggedMemory *)0x0;
    local_20 = (uchar *)(ulonglong)CONCAT12(1,(ushort)bVar5 << 8);
    TVar7 = FRHICommandListBase::CreateShaderResourceView
                      (param_1,(FRHIBuffer *)&stack0x00000008,(FInitializer *)*plVar1);
    pTVar8 = &this->SRVValue;
    if ((FRHIShaderResourceView *)pTVar8 != TVar7.Reference) {
      this_00 = pTVar8->Reference;
                    /* WARNING: Load size is inaccurate */
      pTVar8->Reference = *TVar7.Reference;
      *(undefined8 *)TVar7.Reference = 0;
      if (this_00 != (FRHIShaderResourceView *)0x0) {
        FRHIResource::Release((FRHIResource *)this_00);
      }
    }
    if (local_res8 != (FRHIResource *)0x0) {
      FRHIResource::Release(local_res8);
    }
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// InitRHIForStreaming @ 148476810

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FSkinWeightDataVertexBuffer::InitRHIForStreaming
          (FSkinWeightDataVertexBuffer *this,FRHIBuffer *param_1,FRHIResourceReplaceBatcher *param_2
          )

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

// IsWeightDataValid @ 148478b10

bool __thiscall FSkinWeightDataVertexBuffer::IsWeightDataValid(FSkinWeightDataVertexBuffer *this)

{
  return this->WeightData != (FStaticMeshVertexDataInterface *)0x0;
}

// ReleaseRHI @ 1484834b0

void __thiscall FSkinWeightDataVertexBuffer::ReleaseRHI(FSkinWeightDataVertexBuffer *this)

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

// ReleaseRHIForStreaming @ 148483780

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FSkinWeightDataVertexBuffer::ReleaseRHIForStreaming
          (FSkinWeightDataVertexBuffer *this,FRHIResourceReplaceBatcher *param_1)

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

// ResetVertexBoneWeights @ 148489de0

void __thiscall
FSkinWeightDataVertexBuffer::ResetVertexBoneWeights
          (FSkinWeightDataVertexBuffer *this,uint param_1,uint param_2)

{
  if (param_2 != 0) {
    memset(this->Data + param_1,0,
           (ulonglong)
           (param_2 *
           ((uint)(this->bUse16BitBoneWeight != false) + (this->bUse16BitBoneIndex != false) + 2)));
    return;
  }
  return;
}

// ResizeBuffer @ 14848bc10

void __thiscall
FSkinWeightDataVertexBuffer::ResizeBuffer
          (FSkinWeightDataVertexBuffer *this,uint param_1,uint param_2)

{
  uchar *puVar1;
  
  this->NumBoneWeights = param_1;
  this->NumVertices = param_2;
  (**(code **)((longlong)*this->WeightData + 8))
            (this->WeightData,
             ((uint)(this->bUse16BitBoneWeight != false) + (this->bUse16BitBoneIndex != false) + 2)
             * param_1,0);
  if (this->NumBoneWeights != 0) {
    puVar1 = (uchar *)(**(code **)((longlong)*this->WeightData + 0x30))();
    this->Data = puVar1;
  }
  return;
}

// SerializeMetaData @ 1484929d0

void __thiscall
FSkinWeightDataVertexBuffer::SerializeMetaData(FSkinWeightDataVertexBuffer *this,FArchive *param_1)

{
  uint *puVar1;
  ulonglong *puVar2;
  longlong *plVar3;
  int *piVar4;
  uint *puVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined1 *puVar9;
  uint local_res10 [2];
  uint local_res18 [4];
  
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FSkeletalMeshCustomVersion::GUID);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FAnimObjectVersion::GUID);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FUE5MainStreamObjectVersion::GUID);
  puVar9 = &param_1->field_0x28;
  if (((param_1->field_0x28 & 1) == 0) ||
     (iVar6 = FArchiveState::CustomVer((FArchiveState *)param_1,&FAnimObjectVersion::GUID),
     4 < iVar6)) {
    piVar4 = (int *)**(undefined8 **)&param_1->field_0x8;
    if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar4 + 1) {
      local_res10[0] = 0;
      if ((*puVar9 & 1) == 0) {
        local_res10[0] = (uint)(this->bVariableBonesPerVertex != false);
      }
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res10,4);
      if (1 < local_res10[0]) {
        FArchiveState::SetError((FArchiveState *)param_1);
      }
      if ((param_1->field_0x28 & 1) != 0) {
        this->bVariableBonesPerVertex = local_res10[0] != 0;
      }
    }
    else {
      this->bVariableBonesPerVertex = *piVar4 != 0;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    }
    puVar9 = &param_1->field_0x8;
    puVar1 = &this->MaxBoneInfluences;
    puVar5 = (uint *)**(undefined8 **)puVar9;
    if ((uint *)(*(undefined8 **)puVar9)[1] < puVar5 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar1,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,puVar1);
      }
    }
    else {
      *puVar1 = *puVar5;
      **(longlong **)puVar9 = **(longlong **)puVar9 + 4;
    }
    puVar1 = &this->NumBoneWeights;
    puVar5 = (uint *)**(undefined8 **)puVar9;
    if ((uint *)(*(undefined8 **)puVar9)[1] < puVar5 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar1,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,puVar1);
      }
    }
    else {
      *puVar1 = *puVar5;
      **(longlong **)puVar9 = **(longlong **)puVar9 + 4;
    }
    puVar1 = &this->NumVertices;
    puVar5 = (uint *)**(undefined8 **)puVar9;
    if ((uint *)(*(undefined8 **)puVar9)[1] < puVar5 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar1,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,puVar1);
      }
    }
    else {
      *puVar1 = *puVar5;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    }
    goto LAB_148492cf5;
  }
  iVar6 = FArchiveState::CustomVer((FArchiveState *)param_1,&FSkeletalMeshCustomVersion::GUID);
  puVar2 = *(ulonglong **)&param_1->field_0x8;
  uVar8 = 0;
  if (iVar6 < 0xc) {
    piVar4 = (int *)*puVar2 + 1;
    if ((int *)puVar2[1] < piVar4) {
      local_res10[0] = 0;
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res10,4);
      if (1 < local_res10[0]) {
        FArchiveState::SetError((FArchiveState *)param_1);
      }
      if ((*puVar9 & 1) != 0) {
        uVar8 = (uint)(local_res10[0] != 0);
      }
    }
    else {
      iVar6 = *(int *)*puVar2;
      *puVar2 = (ulonglong)piVar4;
      uVar8 = (uint)(iVar6 != 0);
    }
  }
  else {
    local_res18[0] = 0;
    puVar1 = (uint *)*puVar2 + 1;
    if ((uint *)puVar2[1] < puVar1) {
      local_res10[0] = 0;
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res10,4);
      if (1 < local_res10[0]) {
        FArchiveState::SetError((FArchiveState *)param_1);
      }
      uVar7 = local_res10[0];
      uVar8 = 0;
      if ((*puVar9 & 1) != 0) goto LAB_148492b13;
    }
    else {
      uVar7 = *(uint *)*puVar2;
      *puVar2 = (ulonglong)puVar1;
LAB_148492b13:
      uVar8 = (uint)(uVar7 != 0);
    }
    plVar3 = *(longlong **)&param_1->field_0x8;
    if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res18,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_res18);
      }
    }
    else {
      local_res18[0] = *(uint *)*plVar3;
      *plVar3 = *plVar3 + 4;
    }
  }
  ::operator<<(param_1,&this->NumVertices);
  uVar8 = uVar8 * 4 + 4;
  this->bVariableBonesPerVertex = false;
  this->MaxBoneInfluences = uVar8;
  this->NumBoneWeights = uVar8 * this->NumVertices;
LAB_148492cf5:
  iVar6 = FArchiveState::CustomVer((FArchiveState *)param_1,&FAnimObjectVersion::GUID);
  if (3 < iVar6) {
    ::operator<<(param_1,&this->bUse16BitBoneIndex);
  }
  iVar6 = FArchiveState::CustomVer((FArchiveState *)param_1,&FUE5MainStreamObjectVersion::GUID);
  if (0x59 < iVar6) {
    ::operator<<(param_1,&this->bUse16BitBoneWeight);
  }
  return;
}

// SetBoneIndex @ 1484931a0

void __thiscall
FSkinWeightDataVertexBuffer::SetBoneIndex
          (FSkinWeightDataVertexBuffer *this,uint param_1,uint param_2,uint param_3,uint param_4)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_2 <= param_3) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\SkinWeightVertexBuffer.cpp"
                       ,0x22a,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    return;
  }
  if (this->bUse16BitBoneIndex != false) {
    *(undefined2 *)(this->Data + (ulonglong)param_3 * 2 + (ulonglong)param_1) = (undefined2)param_4;
    return;
  }
  this->Data[(ulonglong)param_3 + (ulonglong)param_1] = (uchar)param_4;
  return;
}

// SetBoneWeight @ 1484932c0

void __thiscall
FSkinWeightDataVertexBuffer::SetBoneWeight
          (FSkinWeightDataVertexBuffer *this,uint param_1,uint param_2,uint param_3,ushort param_4)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_2 <= param_3) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\SkinWeightVertexBuffer.cpp"
                       ,0x259,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    return;
  }
  if (this->bUse16BitBoneWeight != false) {
    *(ushort *)
     (this->Data +
     (ulonglong)param_1 +
     (ulonglong)(param_2 * ((this->bUse16BitBoneIndex != false) + 1)) +
     (ulonglong)(((this->bUse16BitBoneWeight != false) + 1) * param_3)) = param_4;
    return;
  }
  this->Data
  [(ulonglong)param_1 +
   (ulonglong)(param_2 * ((this->bUse16BitBoneIndex != false) + 1)) +
   (ulonglong)(((this->bUse16BitBoneWeight != false) + 1) * param_3)] = (uchar)(param_4 >> 8);
  return;
}

// SetMaxBoneInfluences @ 148493a20

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FSkinWeightDataVertexBuffer::SetMaxBoneInfluences(FSkinWeightDataVertexBuffer *this,uint param_1)

{
  uint *puVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  
  if (0xc < param_1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InMaxBoneInfluences <= 12",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\SkinWeightVertexBuffer.cpp"
                       ,0x1d8,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  puVar1 = &this->MaxBoneInfluences;
  if (param_1 < 5) {
    uVar4 = 4;
    *puVar1 = 4;
  }
  else if (param_1 < 9) {
    *puVar1 = 8;
    uVar4 = 8;
  }
  else {
    uVar4 = 0xc;
    *puVar1 = 0xc;
  }
  bVar3 = FGPUBaseSkinVertexFactory::UseUnlimitedBoneInfluences(uVar4,(ITargetPlatform *)0x0);
  this->bVariableBonesPerVertex = bVar3;
  if (((*puVar1 == 0xc) && (!bVar3)) && (*puVar1 = 8, 1 < (byte)LogSkeletalMesh._0_1_)) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogSkeletalMesh);
  }
  return;
}

// SetMetaData @ 148493af0

void __thiscall
FSkinWeightDataVertexBuffer::SetMetaData
          (FSkinWeightDataVertexBuffer *this,uint param_1,uint param_2,bool param_3,bool param_4)

{
  this->NumVertices = param_1;
  this->bUse16BitBoneWeight = param_4;
  this->bUse16BitBoneIndex = param_3;
  SetMaxBoneInfluences(this,param_2);
  this->NumBoneWeights = this->MaxBoneInfluences * this->NumVertices;
  return;
}

