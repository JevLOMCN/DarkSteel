// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionEngine
// Functions: 8

// ~FBoneMapVertexBuffer @ 1463a4f20

void __thiscall FBoneMapVertexBuffer::~FBoneMapVertexBuffer(FBoneMapVertexBuffer *this)

{
  FStaticMeshVertexDataInterface *pFVar1;
  FRHIShaderResourceView *this_00;
  
  this->_padding_ = (longlong)&___7FBoneMapVertexBuffer__6B_;
  pFVar1 = this->BoneMapData;
  if (pFVar1 != (FStaticMeshVertexDataInterface *)0x0) {
    (**(code **)*pFVar1)(pFVar1,1);
  }
  this->BoneMapData = (FStaticMeshVertexDataInterface *)0x0;
  this_00 = (this->VertexBufferSRV).Reference;
  if (this_00 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)this_00);
  }
  FVertexBuffer::~FVertexBuffer((FVertexBuffer *)this);
  return;
}

// AllocateData @ 1463aa2c0

void __thiscall FBoneMapVertexBuffer::AllocateData(FBoneMapVertexBuffer *this,bool param_1)

{
  FStaticMeshVertexDataInterface *pFVar1;
  
  pFVar1 = this->BoneMapData;
  if (pFVar1 != (FStaticMeshVertexDataInterface *)0x0) {
    (**(code **)*pFVar1)(pFVar1,1);
  }
  this->BoneMapData = (FStaticMeshVertexDataInterface *)0x0;
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStaticMeshVertexDataInterface *)0x0) {
    pFVar1[2] = (FStaticMeshVertexDataInterface)0x0;
    *pFVar1 = (FStaticMeshVertexDataInterface)&___7__TStaticMeshVertexData_G__6B_;
    pFVar1[1] = (FStaticMeshVertexDataInterface)&___7__TResourceArray_G_0A___6B_;
    pFVar1[3] = (FStaticMeshVertexDataInterface)0x0;
    *(bool *)(pFVar1 + 4) = param_1;
    this->BoneMapData = pFVar1;
    return;
  }
  this->BoneMapData = (FStaticMeshVertexDataInterface *)0x0;
  return;
}

// CleanUp @ 1463ae370

void __thiscall FBoneMapVertexBuffer::CleanUp(FBoneMapVertexBuffer *this)

{
  FStaticMeshVertexDataInterface *pFVar1;
  
  pFVar1 = this->BoneMapData;
  if (pFVar1 != (FStaticMeshVertexDataInterface *)0x0) {
    (**(code **)*pFVar1)(pFVar1,1);
  }
  this->BoneMapData = (FStaticMeshVertexDataInterface *)0x0;
  return;
}

// Init @ 1463b9580

void __thiscall
FBoneMapVertexBuffer::Init
          (FBoneMapVertexBuffer *this,TArray<unsigned_short,TSizedDefaultAllocator<32>_> *param_1,
          bool param_2)

{
  uint uVar1;
  uchar *_Dst;
  
  AllocateData(this,param_2);
  uVar1 = param_1->ArrayNum;
  this->NumVertices = uVar1;
  (**(code **)((longlong)*this->BoneMapData + 8))(this->BoneMapData,uVar1,0);
  if (this->NumVertices == 0) {
    _Dst = (uchar *)0x0;
  }
  else {
    _Dst = (uchar *)(**(code **)((longlong)*this->BoneMapData + 0x30))();
  }
  this->Data = _Dst;
  memcpy(_Dst,(param_1->AllocatorInstance).Data,(ulonglong)(this->NumVertices * 2));
  return;
}

// InitRHI @ 1463bb3c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FBoneMapVertexBuffer::InitRHI(FBoneMapVertexBuffer *this,FRHICommandListBase *param_1)

{
  longlong *plVar1;
  EBufferUsageFlags EVar2;
  FStaticMeshVertexDataInterface *pFVar3;
  FStaticMeshVertexDataInterface *pFVar4;
  FRHIShaderResourceView *this_00;
  bool bVar5;
  FRHIBuffer *pFVar6;
  TRefCountPtr<FRHIBuffer> TVar7;
  FShaderResourceViewInitializer *pFVar8;
  FRHIBuffer *pFVar9;
  FRHIBuffer *pFVar10;
  TRefCountPtr<FRHIShaderResourceView> *pTVar11;
  FRHIBuffer *this_01;
  FRHIBuffer *local_res8;
  FRHIResource *local_res18;
  undefined4 in_stack_ffffffffffffff94;
  undefined1 local_58 [16];
  FShaderResourceViewInitializer local_48;
  
  pFVar9 = (FRHIBuffer *)0x0;
  local_res8 = (FRHIBuffer *)((ulonglong)local_res8 & 0xffffffff00000000);
  pFVar3 = this->BoneMapData;
  EVar2 = this->NumVertices;
  pFVar6 = pFVar9;
  if (pFVar3 != (FStaticMeshVertexDataInterface *)0x0) {
    pFVar6 = (FRHIBuffer *)(**(code **)((longlong)*pFVar3 + 0x38))(pFVar3);
  }
  pFVar10 = pFVar9;
  if (EVar2 != None) {
    local_res8 = (FRHIBuffer *)this->_padding_;
    TVar7 = FRenderResource::CreateRHIBufferInternal
                      ((FRHICommandListBase *)&local_res18,(wchar_t *)param_1,
                       (FName *)L"FBoneMapVertexBuffer",(uint)&local_res8,EVar2,
                       (FResourceArrayInterface *)CONCAT44(in_stack_ffffffffffffff94,0x121),
                       SUB81(pFVar6,0));
    if ((FRHIBuffer *)(local_58 + 8) != TVar7.Reference) {
      pFVar10 = (FRHIBuffer *)(TVar7.Reference)->_padding_;
      (TVar7.Reference)->_padding_ = 0;
    }
    if (local_res18 != (FRHIResource *)0x0) {
      FRHIResource::Release(local_res18);
    }
  }
  bVar5 = FRenderResource::ShouldFreeResourceObject
                    (this->BoneMapData,(FResourceArrayInterface *)pFVar6);
  if (bVar5) {
    pFVar4 = this->BoneMapData;
    if (pFVar4 != (FStaticMeshVertexDataInterface *)0x0) {
      (**(code **)*pFVar4)(pFVar4,1);
    }
    this->BoneMapData = (FStaticMeshVertexDataInterface *)0x0;
  }
  plVar1 = &this->_padding_;
  if (plVar1 != (longlong *)(local_58 + 8)) {
    pFVar6 = (FRHIBuffer *)*plVar1;
    *plVar1 = (longlong)pFVar10;
    pFVar10 = pFVar6;
  }
  if (pFVar10 != (FRHIBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar10);
  }
  pFVar6 = (FRHIBuffer *)*plVar1;
  if (pFVar6 == (FRHIBuffer *)0x0) {
    return;
  }
  bVar5 = pFVar3 == (FStaticMeshVertexDataInterface *)0x0;
  pFVar10 = local_res8;
  this_01 = pFVar9;
  if (!bVar5) {
    FRHIResource::AddRef((FRHIResource *)pFVar6);
    pFVar9 = pFVar6;
    pFVar10 = pFVar6;
    this_01 = local_res8;
  }
  pFVar8 = FShaderResourceViewInitializer::FShaderResourceViewInitializer
                     (&local_48,pFVar9,PF_R16_UINT);
  FRHICommandListBase::CreateShaderResourceView
            (param_1,(FRHIBuffer *)local_58,(FInitializer *)pFVar8->Buffer);
  pTVar11 = &this->VertexBufferSRV;
  if (pTVar11 != (TRefCountPtr<FRHIShaderResourceView> *)local_58) {
    this_00 = pTVar11->Reference;
    pTVar11->Reference = (FRHIShaderResourceView *)local_58._0_8_;
    local_58._0_8_ = (FRHIShaderResourceView *)0x0;
    if (this_00 == (FRHIShaderResourceView *)0x0) goto LAB_1463bb558;
    FRHIResource::Release((FRHIResource *)this_00);
  }
  if ((FRHIShaderResourceView *)local_58._0_8_ != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)local_58._0_8_);
  }
LAB_1463bb558:
  if ((bVar5) && (this_01 != (FRHIBuffer *)0x0)) {
    FRHIResource::Release((FRHIResource *)this_01);
  }
  if ((!bVar5) && (pFVar10 != (FRHIBuffer *)0x0)) {
    FRHIResource::Release((FRHIResource *)pFVar10);
  }
  return;
}

// ReleaseRHI @ 1463c21e0

void __thiscall FBoneMapVertexBuffer::ReleaseRHI(FBoneMapVertexBuffer *this)

{
  FRHIShaderResourceView *this_00;
  
  this_00 = (this->VertexBufferSRV).Reference;
  if (this_00 != (FRHIShaderResourceView *)0x0) {
    (this->VertexBufferSRV).Reference = (FRHIShaderResourceView *)0x0;
    FRHIResource::Release((FRHIResource *)this_00);
  }
  FVertexBuffer::ReleaseRHI((FVertexBuffer *)this);
  return;
}

// ResizeBuffer @ 1463c47b0

void __thiscall FBoneMapVertexBuffer::ResizeBuffer(FBoneMapVertexBuffer *this,uint param_1)

{
  uchar *puVar1;
  
  this->NumVertices = param_1;
  (**(code **)((longlong)*this->BoneMapData + 8))(this->BoneMapData,param_1,0);
  if (this->NumVertices != 0) {
    puVar1 = (uchar *)(**(code **)((longlong)*this->BoneMapData + 0x30))();
    this->Data = puVar1;
    return;
  }
  this->Data = (uchar *)0x0;
  return;
}

// Serialize @ 1463c4810

void __thiscall
FBoneMapVertexBuffer::Serialize(FBoneMapVertexBuffer *this,FArchive *param_1,bool param_2)

{
  uint *puVar1;
  FStaticMeshVertexDataInterface *pFVar2;
  uchar *puVar3;
  
  this->bNeedsCPUAccess = param_2;
  puVar1 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar1 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&this->NumVertices,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,&this->NumVertices);
    }
  }
  else {
    this->NumVertices = *puVar1;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  if ((param_1->field_0x28 & 1) != 0) {
    AllocateData(this,param_2);
  }
  pFVar2 = this->BoneMapData;
  if (pFVar2 != (FStaticMeshVertexDataInterface *)0x0) {
    (**(code **)((longlong)*pFVar2 + 0x40))(pFVar2,param_1,0);
    if (this->NumVertices == 0) {
      puVar3 = (uchar *)0x0;
    }
    else {
      puVar3 = (uchar *)(**(code **)((longlong)*this->BoneMapData + 0x30))();
    }
    this->Data = puVar3;
  }
  return;
}

