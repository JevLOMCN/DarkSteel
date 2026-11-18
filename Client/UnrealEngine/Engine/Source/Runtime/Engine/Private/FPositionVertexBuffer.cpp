// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 24

// FPositionVertexBuffer @ 14834b2d0

FPositionVertexBuffer * __thiscall
FPositionVertexBuffer::FPositionVertexBuffer(FPositionVertexBuffer *this)

{
  FVertexBuffer::FVertexBuffer((FVertexBuffer *)this);
  this->bNeedsCPUAccess = true;
  this->_padding_ = (longlong)&___7FPositionVertexBuffer__6B_;
  (this->PositionComponentSRV).Reference = (FRHIShaderResourceView *)0x0;
  this->VertexData = (FPositionVertexData *)0x0;
  this->Data = (uchar *)0x0;
  this->Stride = 0;
  this->NumVertices = 0;
  return this;
}

// ~FPositionVertexBuffer @ 14834d4a0

void __thiscall FPositionVertexBuffer::~FPositionVertexBuffer(FPositionVertexBuffer *this)

{
  FPositionVertexData *pFVar1;
  FRHIShaderResourceView *this_00;
  
  this->_padding_ = (longlong)&___7FPositionVertexBuffer__6B_;
  pFVar1 = this->VertexData;
  if (pFVar1 != (FPositionVertexData *)0x0) {
    (*(code *)**(undefined8 **)pFVar1)(pFVar1,1);
    this->VertexData = (FPositionVertexData *)0x0;
  }
  this_00 = (this->PositionComponentSRV).Reference;
  if (this_00 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)this_00);
  }
  FVertexBuffer::~FVertexBuffer((FVertexBuffer *)this);
  return;
}

// operator= @ 14834e5e0

void __thiscall
FPositionVertexBuffer::operator=(FPositionVertexBuffer *this,FPositionVertexBuffer *param_1)

{
  this->VertexData = (FPositionVertexData *)0x0;
  return;
}

// AllocateData @ 148357540

void __thiscall FPositionVertexBuffer::AllocateData(FPositionVertexBuffer *this,bool param_1)

{
  uint uVar1;
  FPositionVertexData *pFVar2;
  FPositionVertexData *pFVar3;
  
  pFVar3 = (FPositionVertexData *)0x0;
  pFVar2 = this->VertexData;
  if (pFVar2 != (FPositionVertexData *)0x0) {
    (*(code *)**(undefined8 **)pFVar2)(pFVar2,1);
    this->VertexData = (FPositionVertexData *)0x0;
  }
  pFVar2 = ::operator_new(0x28);
  if (pFVar2 != (FPositionVertexData *)0x0) {
    *(undefined8 *)&pFVar2->field_0x10 = 0;
    *(undefined8 *)&pFVar2->field_0x18 = 0;
    *(undefined ***)&pFVar2->field_0x8 = &___7__TResourceArray_UFPositionVertex___0A___6B_;
    *(undefined ***)pFVar2 = &___7FPositionVertexData__6B_;
    pFVar2->field_0x20 = param_1;
    pFVar3 = pFVar2;
  }
  this->VertexData = pFVar3;
  uVar1 = (**(code **)(*(longlong *)pFVar3 + 0x20))();
  this->Stride = uVar1;
  return;
}

// AppendVertices @ 148357770

bool __thiscall
FPositionVertexBuffer::AppendVertices
          (FPositionVertexBuffer *this,FStaticMeshBuildVertex *param_1,uint param_2)

{
  uint uVar1;
  float fVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uchar *puVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  uint local_res18 [2];
  uint *local_18;
  FPositionVertexBuffer *local_10;
  
  local_res18[0] = param_2;
  if (0x7ffffffe < (ulonglong)param_2 + (ulonglong)this->NumVertices) {
    local_18 = local_res18;
    local_10 = this;
    bVar4 = `FPositionVertexBuffer::AppendVertices'::__l3::<lambda_1>::operator()(&local_18);
    if (!bVar4) {
      return false;
    }
  }
  if (this->VertexData == (FPositionVertexData *)0x0) {
    if (local_res18[0] == 0) {
      return true;
    }
    AllocateData(this,this->bNeedsCPUAccess);
  }
  if (local_res18[0] != 0) {
    if ((this->VertexData == (FPositionVertexData *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("VertexData != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PositionVertexBuffer.cpp"
                           ,0x84,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    if ((param_1 == (FStaticMeshBuildVertex *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Vertices != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PositionVertexBuffer.cpp"
                           ,0x85,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    uVar1 = this->NumVertices;
    uVar8 = local_res18[0] + uVar1;
    this->NumVertices = uVar8;
    (**(code **)(*(longlong *)this->VertexData + 8))(this->VertexData,uVar8,0);
    if (this->NumVertices != 0) {
      puVar6 = (uchar *)(**(code **)(*(longlong *)this->VertexData + 0x30))();
      this->Data = puVar6;
      uVar8 = 0;
      if (local_res18[0] != 0) {
        do {
          uVar7 = (ulonglong)((uVar8 + uVar1) * this->Stride);
          uVar9 = uVar8 + 1;
          puVar6 = this->Data;
          fVar2 = param_1[uVar8].Position.field0_0x0._s_0.Z;
          *(undefined8 *)(puVar6 + uVar7) = *(undefined8 *)&param_1[uVar8].Position.field0_0x0;
          *(float *)(puVar6 + uVar7 + 8) = fVar2;
          uVar8 = uVar9;
        } while (uVar9 < local_res18[0]);
      }
    }
  }
  return true;
}

// BindPositionVertexBuffer @ 148359400

void __thiscall
FPositionVertexBuffer::BindPositionVertexBuffer
          (FPositionVertexBuffer *this,FVertexFactory *param_1,FStaticMeshDataType *param_2)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  
  uVar1 = this->Stride;
  if (0xff < uVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InStride <= 0xFF",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\VertexStreamComponent.h"
                       ,0x39,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  (param_2->PositionComponent).VertexBuffer = (FVertexBuffer *)this;
  (param_2->PositionComponent).StreamOffset = 0;
  (param_2->PositionComponent).Offset = '\0';
  (param_2->PositionComponent).Stride = (uchar)uVar1;
  (param_2->PositionComponent).Type = '\x03';
  (param_2->PositionComponent).VertexStreamUsage = Default;
  param_2->PositionComponentSRV = (this->PositionComponentSRV).Reference;
  return;
}

// CleanUp @ 148363290

void __thiscall FPositionVertexBuffer::CleanUp(FPositionVertexBuffer *this)

{
  FPositionVertexData *pFVar1;
  
  pFVar1 = this->VertexData;
  if (pFVar1 != (FPositionVertexData *)0x0) {
    (*(code *)**(undefined8 **)pFVar1)(pFVar1,1);
    this->VertexData = (FPositionVertexData *)0x0;
  }
  return;
}

// ClearMetaData @ 148363860

void __thiscall FPositionVertexBuffer::ClearMetaData(FPositionVertexBuffer *this)

{
  this->Stride = 0;
  this->NumVertices = 0;
  return;
}

// CreateRHIBuffer @ 1483693d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

TRefCountPtr<FRHIBuffer> __thiscall
FPositionVertexBuffer::CreateRHIBuffer(FPositionVertexBuffer *this,FRHICommandListBase *param_1)

{
  EBufferUsageFlags EVar1;
  FRHIResource *this_00;
  FPositionVertexData *pFVar2;
  bool bVar3;
  FResourceArrayInterface *pFVar4;
  TRefCountPtr<FRHIBuffer> TVar5;
  wchar_t *in_R8;
  longlong local_res8;
  FRHIResource *local_res10;
  undefined4 in_stack_ffffffffffffffd4;
  
  EVar1 = this->NumVertices;
  (param_1->MemManager).Top = (uchar *)0x0;
  if (this->VertexData == (FPositionVertexData *)0x0) {
    pFVar4 = (FResourceArrayInterface *)0x0;
  }
  else {
    pFVar4 = (FResourceArrayInterface *)(**(code **)(*(longlong *)this->VertexData + 0x38))();
  }
  if (EVar1 != None) {
    local_res8 = this->_padding_;
    TVar5 = FRenderResource::CreateRHIBufferInternal
                      ((FRHICommandListBase *)&local_res10,in_R8,(FName *)L"FPositionVertexBuffer",
                       (uint)&local_res8,EVar1,
                       (FResourceArrayInterface *)CONCAT44(in_stack_ffffffffffffffd4,0x101),
                       SUB81(pFVar4,0));
    if (param_1 != (FRHICommandListBase *)TVar5.Reference) {
      this_00 = (FRHIResource *)(param_1->MemManager).Top;
      (param_1->MemManager).Top = (uchar *)(TVar5.Reference)->_padding_;
      (TVar5.Reference)->_padding_ = 0;
      if (this_00 != (FRHIResource *)0x0) {
        FRHIResource::Release(this_00);
      }
    }
    if (local_res10 != (FRHIResource *)0x0) {
      FRHIResource::Release(local_res10);
    }
  }
  bVar3 = FRenderResource::ShouldFreeResourceObject(this->VertexData,pFVar4);
  if (bVar3) {
    pFVar2 = this->VertexData;
    if (pFVar2 != (FPositionVertexData *)0x0) {
      (*(code *)**(undefined8 **)pFVar2)(pFVar2,1);
    }
    this->VertexData = (FPositionVertexData *)0x0;
  }
  return (TRefCountPtr<FRHIBuffer>)(FRHIBuffer *)param_1;
}

// GetAllowCPUAccess @ 14837e610

bool __thiscall FPositionVertexBuffer::GetAllowCPUAccess(FPositionVertexBuffer *this)

{
  undefined1 uVar1;
  
  if (this->VertexData != (FPositionVertexData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014837e61c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*(longlong *)this->VertexData + 0x58))();
    return (bool)uVar1;
  }
  return false;
}

// GetFriendlyName @ 148381b60

FString * __thiscall
FPositionVertexBuffer::GetFriendlyName(FPositionVertexBuffer *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"PositionOnly Static-mesh vertices");
  return __return_storage_ptr__;
}

// Init @ 14838c650

void __thiscall
FPositionVertexBuffer::Init
          (FPositionVertexBuffer *this,FConstMeshBuildVertexView *param_1,bool param_2)

{
  float fVar1;
  uchar *puVar2;
  TVector<float> *pTVar3;
  ulonglong uVar4;
  int iVar5;
  uchar *puVar6;
  
  this->NumVertices = (param_1->Position).NumElements;
  this->bNeedsCPUAccess = param_2;
  AllocateData(this,param_2);
  (**(code **)(*(longlong *)this->VertexData + 8))(this->VertexData,this->NumVertices,0);
  puVar6 = (uchar *)0x0;
  puVar2 = puVar6;
  if (this->NumVertices != 0) {
    puVar2 = (uchar *)(**(code **)(*(longlong *)this->VertexData + 0x30))();
  }
  this->Data = puVar2;
  if (0 < (param_1->Position).NumElements) {
    do {
      iVar5 = (int)puVar6;
      pTVar3 = TStridedView<UE::Math::TVector<float>_const_,int>::GetElementPtr
                         (&param_1->Position,iVar5);
      puVar6 = (uchar *)(ulonglong)(iVar5 + 1U);
      uVar4 = (ulonglong)(iVar5 * this->Stride);
      fVar1 = (pTVar3->field0_0x0)._s_0.Z;
      puVar2 = this->Data;
      *(undefined8 *)(puVar2 + uVar4) = *(undefined8 *)&pTVar3->field0_0x0;
      *(float *)(puVar2 + uVar4 + 8) = fVar1;
    } while ((int)(iVar5 + 1U) < (param_1->Position).NumElements);
  }
  return;
}

// Init @ 14838c700

void __thiscall
FPositionVertexBuffer::Init(FPositionVertexBuffer *this,FPositionVertexBuffer *param_1,bool param_2)

{
  code *pcVar1;
  bool bVar2;
  uchar *puVar3;
  
  this->bNeedsCPUAccess = param_2;
  if (param_1->NumVertices != 0) {
    this->NumVertices = param_1->NumVertices;
    AllocateData(this,param_2);
    (**(code **)(*(longlong *)this->VertexData + 8))(this->VertexData,this->NumVertices,0);
    if (this->NumVertices == 0) {
      puVar3 = (uchar *)0x0;
    }
    else {
      puVar3 = (uchar *)(**(code **)(*(longlong *)this->VertexData + 0x30))();
    }
    this->Data = puVar3;
    if (this->Stride != param_1->Stride) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Stride == InVertexBuffer.GetStride()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PositionVertexBuffer.cpp"
                         ,0x5f,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    memcpy(this->Data,param_1->Data,(ulonglong)(this->NumVertices * this->Stride));
  }
  return;
}

// Init @ 14838c7b0

void __thiscall
FPositionVertexBuffer::Init
          (FPositionVertexBuffer *this,
          TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *param_1,bool param_2)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  uchar *_Dst;
  
  uVar1 = param_1->ArrayNum;
  this->NumVertices = uVar1;
  this->bNeedsCPUAccess = param_2;
  if (uVar1 != 0) {
    AllocateData(this,param_2);
    if (this->Stride != 0xc) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Stride == InPositions.GetTypeSize()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PositionVertexBuffer.cpp"
                         ,0x6d,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    (**(code **)(*(longlong *)this->VertexData + 8))(this->VertexData,this->NumVertices,0);
    _Dst = (uchar *)(**(code **)(*(longlong *)this->VertexData + 0x30))();
    this->Data = _Dst;
    memcpy(_Dst,(param_1->AllocatorInstance).Data,(ulonglong)(this->NumVertices * this->Stride));
  }
  return;
}

// Init @ 14838c850

void __thiscall
FPositionVertexBuffer::Init
          (FPositionVertexBuffer *this,
          TArray<FStaticMeshBuildVertex,TSizedDefaultAllocator<32>_> *param_1,bool param_2)

{
  float fVar1;
  code *pcVar2;
  bool bVar3;
  uchar *puVar4;
  TVector<float> *pTVar5;
  ulonglong uVar6;
  int iVar7;
  uchar *puVar8;
  TArrayView<FStaticMeshBuildVertex_const_,int> local_a8;
  FConstMeshBuildVertexView local_98;
  
  local_a8.DataPtr = (FStaticMeshBuildVertex *)(param_1->AllocatorInstance).Data;
  iVar7 = param_1->ArrayNum;
  if ((iVar7 < 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_a8.ArrayNum = iVar7;
  MakeConstMeshBuildVertexView(&local_98,&local_a8);
  this->NumVertices = local_98.Position.NumElements;
  this->bNeedsCPUAccess = param_2;
  AllocateData(this,param_2);
  (**(code **)(*(longlong *)this->VertexData + 8))(this->VertexData,this->NumVertices,0);
  puVar8 = (uchar *)0x0;
  puVar4 = puVar8;
  if (this->NumVertices != 0) {
    puVar4 = (uchar *)(**(code **)(*(longlong *)this->VertexData + 0x30))();
  }
  this->Data = puVar4;
  if (0 < local_98.Position.NumElements) {
    do {
      iVar7 = (int)puVar8;
      pTVar5 = TStridedView<UE::Math::TVector<float>_const_,int>::GetElementPtr
                         (&local_98.Position,iVar7);
      puVar8 = (uchar *)(ulonglong)(iVar7 + 1U);
      uVar6 = (ulonglong)(iVar7 * this->Stride);
      fVar1 = (pTVar5->field0_0x0)._s_0.Z;
      puVar4 = this->Data;
      *(undefined8 *)(puVar4 + uVar6) = *(undefined8 *)&pTVar5->field0_0x0;
      *(float *)(puVar4 + uVar6 + 8) = fVar1;
    } while ((int)(iVar7 + 1U) < local_98.Position.NumElements);
  }
  if (local_98.UVs.AllocatorInstance.SecondaryData !=
      (ForElementType<TStridedView<UE::Math::TVector2<float>_const_,int>_>)0x0) {
    FMemory::Free((void *)local_98.UVs.AllocatorInstance.SecondaryData);
  }
  if (local_98.BoneWeights.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.BoneWeights.AllocatorInstance.Data);
  }
  if (local_98.BoneIndices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.BoneIndices.AllocatorInstance.Data);
  }
  return;
}

// Init @ 14838c980

void __thiscall FPositionVertexBuffer::Init(FPositionVertexBuffer *this,uint param_1,bool param_2)

{
  uchar *puVar1;
  
  this->NumVertices = param_1;
  this->bNeedsCPUAccess = param_2;
  AllocateData(this,param_2);
  (**(code **)(*(longlong *)this->VertexData + 8))(this->VertexData,this->NumVertices,0);
  if (this->NumVertices != 0) {
    puVar1 = (uchar *)(**(code **)(*(longlong *)this->VertexData + 0x30))();
    this->Data = puVar1;
    return;
  }
  this->Data = (uchar *)0x0;
  return;
}

// InitRHI @ 14838db50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FPositionVertexBuffer::InitRHI(FPositionVertexBuffer *this,FRHICommandListBase *param_1)

{
  longlong *plVar1;
  EBufferUsageFlags EVar2;
  FPositionVertexData *pFVar3;
  FRHIResource *pFVar4;
  FRHIShaderResourceView *this_00;
  bool bVar5;
  FResourceArrayInterface *pFVar6;
  TRefCountPtr<FRHIBuffer> TVar7;
  TRefCountPtr<FRHIShaderResourceView> TVar8;
  FRHIResource *this_01;
  TRefCountPtr<FRHIShaderResourceView> *pTVar9;
  bool bVar10;
  FRHIResource *local_res8;
  FRHIResource *local_res18;
  undefined4 in_stack_ffffffffffffffa4;
  longlong local_40;
  longlong lStack_38;
  
  bVar10 = -1 < CpuChannel->Enabled;
  if (bVar10) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId236,"FPositionVertexBuffer::InitRHI",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PositionVertexBuffer.cpp"
               ,0xec);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId236);
  }
  this_01 = (FRHIResource *)0x0;
  EVar2 = this->NumVertices;
  if (this->VertexData == (FPositionVertexData *)0x0) {
    pFVar6 = (FResourceArrayInterface *)0x0;
  }
  else {
    pFVar6 = (FResourceArrayInterface *)(**(code **)(*(longlong *)this->VertexData + 0x38))();
  }
  if (EVar2 != None) {
    local_res8 = (FRHIResource *)this->_padding_;
    TVar7 = FRenderResource::CreateRHIBufferInternal
                      ((FRHICommandListBase *)&stack0x00000018,(wchar_t *)param_1,
                       (FName *)L"FPositionVertexBuffer",(uint)&stack0x00000008,EVar2,
                       (FResourceArrayInterface *)CONCAT44(in_stack_ffffffffffffffa4,0x101),
                       SUB81(pFVar6,0));
    if ((FRHIBuffer *)&stack0xffffffffffffffb8 != TVar7.Reference) {
      this_01 = (FRHIResource *)(TVar7.Reference)->_padding_;
      (TVar7.Reference)->_padding_ = 0;
    }
    if (local_res18 != (FRHIResource *)0x0) {
      FRHIResource::Release(local_res18);
    }
  }
  bVar5 = FRenderResource::ShouldFreeResourceObject(this->VertexData,pFVar6);
  if (bVar5) {
    pFVar3 = this->VertexData;
    if (pFVar3 != (FPositionVertexData *)0x0) {
      (*(code *)**(undefined8 **)pFVar3)(pFVar3,1);
    }
    this->VertexData = (FPositionVertexData *)0x0;
  }
  plVar1 = &this->_padding_;
  if (plVar1 != (longlong *)&stack0xffffffffffffffb8) {
    pFVar4 = (FRHIResource *)*plVar1;
    *plVar1 = (longlong)this_01;
    this_01 = pFVar4;
  }
  if (this_01 != (FRHIResource *)0x0) {
    FRHIResource::Release(this_01);
  }
  if ((FInitializer *)*plVar1 != (FInitializer *)0x0) {
    lStack_38 = 0;
    local_40 = 0x10d00;
    TVar8 = FRHICommandListBase::CreateShaderResourceView
                      (param_1,(FRHIBuffer *)&stack0x00000008,(FInitializer *)*plVar1);
    pTVar9 = &this->PositionComponentSRV;
    if ((FRHIShaderResourceView *)pTVar9 != TVar8.Reference) {
      this_00 = pTVar9->Reference;
                    /* WARNING: Load size is inaccurate */
      pTVar9->Reference = *TVar8.Reference;
      *(undefined8 *)TVar8.Reference = 0;
      if (this_00 != (FRHIShaderResourceView *)0x0) {
        FRHIResource::Release((FRHIResource *)this_00);
      }
    }
    if (local_res8 != (FRHIResource *)0x0) {
      FRHIResource::Release(local_res8);
    }
  }
  if (bVar10) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// InitRHIForStreaming @ 14838dec0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FPositionVertexBuffer::InitRHIForStreaming
          (FPositionVertexBuffer *this,FRHIBuffer *param_1,FRHIResourceReplaceBatcher *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  
  if (this->_padding_ == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("VertexBufferRHI",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PositionVertexBuffer.cpp"
                       ,0xdd,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (param_1 != (FRHIBuffer *)0x0) {
    iVar5 = (param_2->Infos).ArrayNum;
    piVar1 = &(param_2->Infos).ArrayMax;
    if (iVar5 == *piVar1) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x818,&(param_2->Infos).AllocatorInstance,piVar1);
    }
    (param_2->Infos).ArrayNum = iVar5 + 1;
    pFVar2 = (param_2->Infos).AllocatorInstance.Data + (longlong)iVar5 * 0x18;
    *(longlong *)pFVar2 = this->_padding_;
    *(FRHIBuffer **)(pFVar2 + 8) = param_1;
    pFVar2[0x10] = (FScriptContainerElement)0x0;
  }
  return;
}

// ReleaseRHI @ 14839de70

void __thiscall FPositionVertexBuffer::ReleaseRHI(FPositionVertexBuffer *this)

{
  FRHIShaderResourceView *this_00;
  
  this_00 = (this->PositionComponentSRV).Reference;
  if (this_00 != (FRHIShaderResourceView *)0x0) {
    (this->PositionComponentSRV).Reference = (FRHIShaderResourceView *)0x0;
    FRHIResource::Release((FRHIResource *)this_00);
  }
  FVertexBuffer::ReleaseRHI((FVertexBuffer *)this);
  return;
}

// ReleaseRHIForStreaming @ 14839e030

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FPositionVertexBuffer::ReleaseRHIForStreaming
          (FPositionVertexBuffer *this,FRHIResourceReplaceBatcher *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  
  if (this->_padding_ == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("VertexBufferRHI",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PositionVertexBuffer.cpp"
                       ,0xe6,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = (param_1->Infos).ArrayNum;
  piVar1 = &(param_1->Infos).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,&(param_1->Infos).AllocatorInstance,piVar1);
  }
  (param_1->Infos).ArrayNum = iVar5 + 1;
  pFVar2 = (param_1->Infos).AllocatorInstance.Data + (longlong)iVar5 * 0x18;
  *(longlong *)pFVar2 = this->_padding_;
  *(longlong *)(pFVar2 + 8) = 0;
  pFVar2[0x10] = (FScriptContainerElement)0x0;
  return;
}

// Serialize @ 1483a3a00

void __thiscall
FPositionVertexBuffer::Serialize(FPositionVertexBuffer *this,FArchive *param_1,bool param_2)

{
  uint *puVar1;
  uint *puVar2;
  FPositionVertexData *pFVar3;
  uchar *puVar4;
  
  this->bNeedsCPUAccess = param_2;
  puVar2 = &this->Stride;
  puVar1 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar1 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,puVar2);
    }
  }
  else {
    *puVar2 = *puVar1;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  puVar2 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&this->NumVertices,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,&this->NumVertices);
    }
  }
  else {
    this->NumVertices = *puVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  if ((param_1->field_0x28 & 1) != 0) {
    AllocateData(this,param_2);
  }
  pFVar3 = this->VertexData;
  if (pFVar3 != (FPositionVertexData *)0x0) {
    (**(code **)(*(longlong *)pFVar3 + 0x40))(pFVar3,param_1,0);
    if (this->NumVertices == 0) {
      puVar4 = (uchar *)0x0;
    }
    else {
      puVar4 = (uchar *)(**(code **)(*(longlong *)this->VertexData + 0x30))();
    }
    this->Data = puVar4;
  }
  return;
}

// SerializeMetaData @ 1483a3d40

void __thiscall
FPositionVertexBuffer::SerializeMetaData(FPositionVertexBuffer *this,FArchive *param_1)

{
  uint *puVar1;
  uint *puVar2;
  
  puVar1 = &this->Stride;
  puVar2 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,puVar1);
    }
  }
  else {
    *puVar1 = *puVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  puVar1 = &this->NumVertices;
  puVar2 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if (puVar2 + 1 <= (uint *)(*(undefined8 **)&param_1->field_0x8)[1]) {
    *puVar1 = *puVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    return;
  }
  if ((param_1->field_0x2a & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001483a3de8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar1,4);
    return;
  }
  FArchive::SerializeByteOrderSwapped(param_1,puVar1);
  return;
}

// SetMetaData @ 1483a96a0

void __thiscall
FPositionVertexBuffer::SetMetaData(FPositionVertexBuffer *this,uint param_1,uint param_2)

{
  this->Stride = param_1;
  this->NumVertices = param_2;
  return;
}

// operator() @ 15052a330

bool __thiscall `FPositionVertexBuffer::AppendVertices'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<3044040994250031223>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<3044040994250031223>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

