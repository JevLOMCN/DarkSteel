// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 5

// FSubUVBoundingGeometryBuffer @ 1481c80d0

FSubUVBoundingGeometryBuffer * __thiscall
FSubUVBoundingGeometryBuffer::FSubUVBoundingGeometryBuffer
          (FSubUVBoundingGeometryBuffer *this,
          TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *param_1)

{
  FVertexBuffer::FVertexBuffer((FVertexBuffer *)this);
  this->Vertices = param_1;
  this->_padding_ = (longlong)&___7FSubUVBoundingGeometryBuffer__6B_;
  (this->ShaderResourceView).Reference = (FRHIShaderResourceView *)0x0;
  return this;
}

// FSubUVBoundingGeometryBuffer @ 1481c8110

FSubUVBoundingGeometryBuffer * __thiscall
FSubUVBoundingGeometryBuffer::FSubUVBoundingGeometryBuffer(FSubUVBoundingGeometryBuffer *this)

{
  FVertexBuffer::FVertexBuffer((FVertexBuffer *)this);
  this->_padding_ = (longlong)&___7FSubUVBoundingGeometryBuffer__6B_;
  (this->ShaderResourceView).Reference = (FRHIShaderResourceView *)0x0;
  return this;
}

// ~FSubUVBoundingGeometryBuffer @ 1481c9590

void __thiscall
FSubUVBoundingGeometryBuffer::~FSubUVBoundingGeometryBuffer(FSubUVBoundingGeometryBuffer *this)

{
  FRHIShaderResourceView *this_00;
  
  this->_padding_ = (longlong)&___7FSubUVBoundingGeometryBuffer__6B_;
  this_00 = (this->ShaderResourceView).Reference;
  if (this_00 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)this_00);
  }
  FVertexBuffer::~FVertexBuffer((FVertexBuffer *)this);
  return;
}

// InitRHI @ 148204340

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FSubUVBoundingGeometryBuffer::InitRHI
          (FSubUVBoundingGeometryBuffer *this,FRHICommandListBase *param_1)

{
  longlong *plVar1;
  TRefCountPtr<FRHIShaderResourceView> *pTVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  FRHIResource *this_00;
  FRHIShaderResourceView *this_01;
  TRefCountPtr<FRHIShaderResourceView> TVar5;
  FRHIResource *local_res8;
  FRHIBufferCreateDesc local_a8;
  longlong *plStack_70;
  ERHIAccess local_68;
  undefined4 uStack_64;
  undefined8 uStack_60;
  undefined8 local_58;
  ulonglong local_50;
  undefined8 uStack_48;
  wchar_t *local_40;
  longlong *plStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  
  iVar3 = this->Vertices->ArrayNum;
  if (iVar3 < 1) {
    return;
  }
  pFVar4 = (this->Vertices->AllocatorInstance).Data;
  local_68 = RHIGetDefaultResourceState(VertexBuffer|ShaderResource|Static,false);
  local_a8._padding_ = (longlong)&___7FResourceArrayUploadArrayView__6B_;
  plStack_70 = &local_a8._padding_;
  local_a8.InitialData._0_4_ = iVar3 * 8;
  local_a8.ClassName.Number = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) - 1;
  local_a8.OwnerName = (FName)0x151a3d958;
  local_a8.InitAction = Default;
  local_40 = L"FSubUVBoundingGeometryBuffer";
  local_a8.ClassName.ComparisonIndex.Value = 0x4101;
  local_50 = (ulonglong)(ERHIAccess)local_a8.InitialData;
  uStack_48 = CONCAT44(local_a8.ClassName.Number,0x4101);
  uStack_60 = 0;
  uStack_64 = 2;
  local_58 = 0;
  local_30 = CONCAT44(2,local_68);
  uStack_28 = 0;
  local_20 = 0;
  local_a8.DebugName = (wchar_t *)pFVar4;
  local_a8.InitialState = (ERHIAccess)local_a8.InitialData;
  plStack_38 = plStack_70;
  FRHICommandListBase::CreateBuffer(param_1,&local_a8);
  plVar1 = &this->_padding_;
  if ((FRHIBufferCreateDesc *)plVar1 != &local_a8) {
    this_00 = (FRHIResource *)*plVar1;
    *plVar1 = local_a8._padding_;
    local_a8._padding_ = 0;
    if (this_00 == (FRHIResource *)0x0) goto LAB_148204442;
    FRHIResource::Release(this_00);
  }
  if ((FRHIResource *)local_a8._padding_ != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)local_a8._padding_);
  }
LAB_148204442:
  local_a8.DebugName = (wchar_t *)0x0;
  local_a8._padding_ = 0x11100;
  TVar5 = FRHICommandListBase::CreateShaderResourceView
                    (param_1,(FRHIBuffer *)&local_res8,(FInitializer *)*plVar1);
  pTVar2 = &this->ShaderResourceView;
  if ((FRHIShaderResourceView *)pTVar2 != TVar5.Reference) {
    this_01 = pTVar2->Reference;
                    /* WARNING: Load size is inaccurate */
    pTVar2->Reference = *TVar5.Reference;
    *(undefined8 *)TVar5.Reference = 0;
    if (this_01 != (FRHIShaderResourceView *)0x0) {
      FRHIResource::Release((FRHIResource *)this_01);
    }
  }
  if (local_res8 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_res8);
  }
  return;
}

// ReleaseRHI @ 14820e3e0

void __thiscall FSubUVBoundingGeometryBuffer::ReleaseRHI(FSubUVBoundingGeometryBuffer *this)

{
  FRHIShaderResourceView *this_00;
  
  FVertexBuffer::ReleaseRHI((FVertexBuffer *)this);
  this_00 = (this->ShaderResourceView).Reference;
  if (this_00 != (FRHIShaderResourceView *)0x0) {
    (this->ShaderResourceView).Reference = (FRHIShaderResourceView *)0x0;
    FRHIResource::Release((FRHIResource *)this_00);
    return;
  }
  return;
}

