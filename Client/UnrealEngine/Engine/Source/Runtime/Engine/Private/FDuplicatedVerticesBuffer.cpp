// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// ~FDuplicatedVerticesBuffer @ 148624de0

void __thiscall
FDuplicatedVerticesBuffer::~FDuplicatedVerticesBuffer(FDuplicatedVerticesBuffer *this)

{
  FRHIShaderResourceView *pFVar1;
  FRHIBuffer *pFVar2;
  
  this->_padding_ = (longlong)&___7FDuplicatedVerticesBuffer__6B_;
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&(this->DupVertIndexData).field_0x10);
  *(undefined ***)&(this->DupVertIndexData).field_0x8 = &___7FResourceArrayUploadInterface__6B_;
  *(undefined ***)&this->DupVertIndexData = &___7FSkeletalMeshVertexDataInterface__6B_;
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&(this->DupVertData).field_0x10);
  *(undefined ***)&(this->DupVertData).field_0x8 = &___7FResourceArrayUploadInterface__6B_;
  *(undefined ***)&this->DupVertData = &___7FSkeletalMeshVertexDataInterface__6B_;
  pFVar1 = (this->LengthAndIndexDuplicatedVerticesIndexBuffer).VertexBufferSRV.Reference;
  if (pFVar1 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  pFVar2 = (this->LengthAndIndexDuplicatedVerticesIndexBuffer).VertexBufferRHI.Reference;
  if (pFVar2 != (FRHIBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar2);
  }
  pFVar1 = (this->DuplicatedVerticesIndexBuffer).VertexBufferSRV.Reference;
  if (pFVar1 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  pFVar2 = (this->DuplicatedVerticesIndexBuffer).VertexBufferRHI.Reference;
  if (pFVar2 != (FRHIBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar2);
  }
  FRenderResource::~FRenderResource((FRenderResource *)this);
  return;
}

// GetFriendlyName @ 14864b120

FString * __thiscall
FDuplicatedVerticesBuffer::GetFriendlyName
          (FDuplicatedVerticesBuffer *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"FDuplicatedVerticesBuffer");
  return __return_storage_ptr__;
}

// InitRHI @ 1486553c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FDuplicatedVerticesBuffer::InitRHI(FDuplicatedVerticesBuffer *this,FRHICommandListBase *param_1)

{
  FVertexBufferAndSRV *pFVar1;
  TRefCountPtr<FRHIShaderResourceView> *pTVar2;
  FRHIBuffer *pFVar3;
  FRHIShaderResourceView *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  longlong *plVar8;
  TRefCountPtr<FRHIBuffer> TVar9;
  TRefCountPtr<FRHIShaderResourceView> TVar10;
  undefined8 local_res8;
  FRHIResource *local_res18;
  FRHIResource *local_res20;
  undefined8 local_148;
  undefined1 local_140 [16];
  wchar_t *local_130;
  FResourceArrayUploadInterface *pFStack_128;
  undefined8 local_120;
  FName FStack_118;
  FNameEntryId local_110;
  uint uStack_10c;
  undefined4 uStack_108;
  int iStack_104;
  wchar_t *local_100;
  longlong *plStack_f8;
  ERHIAccess local_f0;
  undefined4 uStack_ec;
  undefined8 uStack_e8;
  longlong local_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  int iStack_cc;
  wchar_t *local_c8;
  longlong *plStack_c0;
  ERHIAccess local_b8;
  undefined4 uStack_b4;
  undefined8 uStack_b0;
  longlong local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  wchar_t *local_90;
  longlong *plStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  longlong local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  wchar_t *local_58;
  longlong *plStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  longlong local_38;
  
  plVar8 = (longlong *)(**(code **)(*(longlong *)&this->DupVertData + 0x28))(&this->DupVertData);
  iVar7 = (**(code **)(*plVar8 + 0x10))(plVar8);
  if (iVar7 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("ResourceArray->GetResourceDataSize() > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\SkeletalMeshDuplicatedVerticesBuffer.h"
                       ,0x71,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  local_110.Value = (**(code **)(*plVar8 + 0x10))(plVar8);
  uStack_108 = 0x4101;
  iStack_104 = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
  uStack_10c = 0;
  local_100 = L"DuplicatedVerticesIndexBuffer";
  FLazyName::Resolve(&`public:_virtual_void___cdecl_FDuplicatedVerticesBuffer::InitRHI(FRHICommandListBase&___ptr64)___ptr64'
                      ::__l2::DuplicatedVerticesBuffeName);
  uStack_e8 = local_res8;
  local_e0 = this->_padding_;
  uStack_ec = 2;
  plStack_f8 = plVar8;
  local_f0 = RHIGetDefaultResourceState(VertexBuffer|ShaderResource|Static,false);
  local_a0 = CONCAT44(uStack_10c,local_110.Value);
  uStack_98 = CONCAT44(iStack_104,uStack_108);
  local_80 = CONCAT44(uStack_ec,local_f0);
  local_90 = local_100;
  plStack_88 = plStack_f8;
  uStack_78 = uStack_e8;
  local_70 = local_e0;
  TVar9 = FRHICommandListBase::CreateBuffer(param_1,(FRHIBufferCreateDesc *)&local_res18);
  pFVar1 = &this->DuplicatedVerticesIndexBuffer;
  if ((FRHIBuffer *)pFVar1 != TVar9.Reference) {
    pFVar3 = (pFVar1->VertexBufferRHI).Reference;
    (pFVar1->VertexBufferRHI).Reference = (FRHIBuffer *)(TVar9.Reference)->_padding_;
    (TVar9.Reference)->_padding_ = 0;
    if (pFVar3 != (FRHIBuffer *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar3);
    }
  }
  if (local_res18 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_res18);
  }
  pFStack_128 = (FResourceArrayUploadInterface *)0x0;
  local_130 = (wchar_t *)0x11c00;
  TVar10 = FRHICommandListBase::CreateShaderResourceView
                     (param_1,(FRHIBuffer *)&local_res20,
                      (FInitializer *)(pFVar1->VertexBufferRHI).Reference);
  pTVar2 = &(this->DuplicatedVerticesIndexBuffer).VertexBufferSRV;
  if ((FRHIShaderResourceView *)pTVar2 != TVar10.Reference) {
    pFVar4 = pTVar2->Reference;
                    /* WARNING: Load size is inaccurate */
    pTVar2->Reference = *TVar10.Reference;
    *(undefined8 *)TVar10.Reference = 0;
    if (pFVar4 != (FRHIShaderResourceView *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar4);
    }
  }
  if (local_res20 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_res20);
  }
  plVar8 = (longlong *)
           (**(code **)(*(longlong *)&this->DupVertIndexData + 0x28))(&this->DupVertIndexData);
  iVar7 = (**(code **)(*plVar8 + 0x10))(plVar8);
  if (iVar7 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("ResourceArray->GetResourceDataSize() > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\SkeletalMeshDuplicatedVerticesBuffer.h"
                       ,0x85,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  local_d8 = (**(code **)(*plVar8 + 0x10))(plVar8);
  iStack_cc = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
  uStack_d4 = 0;
  local_c8 = L"LengthAndIndexDuplicatedVerticesIndexBuffer";
  uStack_d0 = 0x4101;
  FLazyName::Resolve(&`public:_virtual_void___cdecl_FDuplicatedVerticesBuffer::InitRHI(FRHICommandListBase&___ptr64)___ptr64'
                      ::__l2::DuplicatedVerticesBuffeName);
  uStack_b0 = local_148;
  local_a8 = this->_padding_;
  uStack_b4 = 2;
  plStack_c0 = plVar8;
  local_b8 = RHIGetDefaultResourceState(VertexBuffer|ShaderResource|Static,false);
  local_68 = CONCAT44(uStack_d4,local_d8);
  uStack_60 = CONCAT44(iStack_cc,uStack_d0);
  local_48 = CONCAT44(uStack_b4,local_b8);
  local_58 = local_c8;
  plStack_50 = plStack_c0;
  uStack_40 = uStack_b0;
  local_38 = local_a8;
  TVar9 = FRHICommandListBase::CreateBuffer(param_1,(FRHIBufferCreateDesc *)local_140);
  pFVar1 = &this->LengthAndIndexDuplicatedVerticesIndexBuffer;
  if ((FRHIBuffer *)pFVar1 != TVar9.Reference) {
    pFVar3 = (pFVar1->VertexBufferRHI).Reference;
    (pFVar1->VertexBufferRHI).Reference = (FRHIBuffer *)(TVar9.Reference)->_padding_;
    (TVar9.Reference)->_padding_ = 0;
    if (pFVar3 != (FRHIBuffer *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar3);
    }
  }
  if ((FRHIResource *)local_140._0_8_ != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)local_140._0_8_);
  }
  FStack_118.ComparisonIndex.Value = 0;
  FStack_118.Number = 0;
  local_120._0_4_ = BVHRead|RTV|UAVMask;
  local_120._4_4_ = Default;
  TVar10 = FRHICommandListBase::CreateShaderResourceView
                     (param_1,(FRHIBuffer *)(local_140 + 8),
                      (FInitializer *)(pFVar1->VertexBufferRHI).Reference);
  pTVar2 = &(this->LengthAndIndexDuplicatedVerticesIndexBuffer).VertexBufferSRV;
  if ((FRHIShaderResourceView *)pTVar2 != TVar10.Reference) {
    pFVar4 = pTVar2->Reference;
                    /* WARNING: Load size is inaccurate */
    pTVar2->Reference = *TVar10.Reference;
    *(undefined8 *)TVar10.Reference = 0;
    if (pFVar4 != (FRHIShaderResourceView *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar4);
    }
  }
  if ((FRHIResource *)local_140._8_8_ != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)local_140._8_8_);
  }
  return;
}

// ReleaseRHI @ 14865f260

void __thiscall FDuplicatedVerticesBuffer::ReleaseRHI(FDuplicatedVerticesBuffer *this)

{
  FRHIBuffer *pFVar1;
  FRHIShaderResourceView *pFVar2;
  
  pFVar1 = (this->DuplicatedVerticesIndexBuffer).VertexBufferRHI.Reference;
  if (pFVar1 != (FRHIBuffer *)0x0) {
    (this->DuplicatedVerticesIndexBuffer).VertexBufferRHI.Reference = (FRHIBuffer *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  pFVar2 = (this->DuplicatedVerticesIndexBuffer).VertexBufferSRV.Reference;
  if (pFVar2 != (FRHIShaderResourceView *)0x0) {
    (this->DuplicatedVerticesIndexBuffer).VertexBufferSRV.Reference = (FRHIShaderResourceView *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar2);
  }
  (this->DuplicatedVerticesIndexBuffer).Size = 0;
  pFVar1 = (this->LengthAndIndexDuplicatedVerticesIndexBuffer).VertexBufferRHI.Reference;
  if (pFVar1 != (FRHIBuffer *)0x0) {
    (this->LengthAndIndexDuplicatedVerticesIndexBuffer).VertexBufferRHI.Reference =
         (FRHIBuffer *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  pFVar2 = (this->LengthAndIndexDuplicatedVerticesIndexBuffer).VertexBufferSRV.Reference;
  if (pFVar2 != (FRHIShaderResourceView *)0x0) {
    (this->LengthAndIndexDuplicatedVerticesIndexBuffer).VertexBufferSRV.Reference =
         (FRHIShaderResourceView *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar2);
  }
  (this->LengthAndIndexDuplicatedVerticesIndexBuffer).Size = 0;
  return;
}

