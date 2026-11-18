// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 2

// InitRHI @ 14981db90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
PCGComputeDummies::FPCGEmptyBufferSRV::InitRHI
          (FPCGEmptyBufferSRV *this,FRHICommandListBase *param_1)

{
  TRefCountPtr<FRHIBuffer> *pTVar1;
  FRHIBuffer *pFVar2;
  FRHIShaderResourceView *this_00;
  TRefCountPtr<FRHIBuffer> TVar3;
  TRefCountPtr<FRHIShaderResourceView> *pTVar4;
  FRHIResource *local_res8;
  FMemScope local_res18;
  TRefCountPtr<FRHIShaderResourceView> local_a8;
  int local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  int iStack_94;
  FScriptContainerElement *local_90;
  undefined8 uStack_88;
  ERHIAccess local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  FScriptContainerElement *local_48;
  undefined8 uStack_40;
  ERHIAccess local_38;
  undefined4 uStack_34;
  undefined8 uStack_30;
  undefined8 local_28;
  
  local_a0 = GPixelFormats[this->PixelFormat].BlockBytes;
  if ((this->DebugName).Data.ArrayNum == 0) {
    local_90 = (FScriptContainerElement *)0x15060d16c;
  }
  else {
    local_90 = (this->DebugName).Data.AllocatorInstance.Data;
  }
  iStack_94 = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
  uStack_9c = 0;
  uStack_88 = 0;
  uStack_7c = 0;
  uStack_78 = 0;
  uStack_74 = 0;
  uStack_70 = 0;
  uStack_6c = 0;
  uStack_98 = 0x4101;
  local_80 = RHIGetDefaultResourceState(VertexBuffer|ShaderResource|Static,false);
  local_58 = CONCAT44(uStack_9c,local_a0);
  uStack_50 = CONCAT44(iStack_94,uStack_98);
  uStack_30 = CONCAT44(uStack_74,uStack_78);
  local_48 = local_90;
  uStack_40 = uStack_88;
  local_28 = CONCAT44(uStack_6c,uStack_70);
  _local_38 = CONCAT44(1,local_80);
  TVar3 = FRHICommandListBase::CreateBuffer(param_1,(FRHIBufferCreateDesc *)&local_res8);
  pTVar1 = &this->Buffer;
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
  pFVar2 = pTVar1->Reference;
  uStack_60 = 0;
  local_68 = (ulonglong)CONCAT12(1,(ushort)this->PixelFormat << 8);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_class_TRefCountPtr<FRHIShaderResourceView>___cdecl_FRHICommandListBase::CreateShaderResourceView(FRHIBuffer*___ptr64,FRHIViewDesc::FBufferSRV::FInitializer_const&___ptr64)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_class_TRefCountPtr<FRHIShaderResourceView>___cdecl_FRHICommandListBase::CreateShaderResourceView(FRHIBuffer*___ptr64,FRHIViewDesc::FBufferSRV::FInitializer_const&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_class_TRefCountPtr<FRHIShaderResourceView>___cdecl_FRHICommandListBase::CreateShaderResourceView(FRHIBuffer*___ptr64,FRHIViewDesc::FBufferSRV::FInitializer_const&___ptr64)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    ::FName::FName(&`public:_class_TRefCountPtr<FRHIShaderResourceView>___cdecl_FRHICommandListBase::CreateShaderResourceView(FRHIBuffer*___ptr64,FRHIViewDesc::FBufferSRV::FInitializer_const&___ptr64)___ptr64'
                    ::__l2::LLMScope_Name977,L"RHIMisc/CreateShaderResourceView");
    _Init_thread_footer(&`public:_class_TRefCountPtr<FRHIShaderResourceView>___cdecl_FRHICommandListBase::CreateShaderResourceView(FRHIBuffer*___ptr64,FRHIViewDesc::FBufferSRV::FInitializer_const&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  FLLMScope::FLLMScope
            ((FLLMScope *)&local_res8,
             `public:_class_TRefCountPtr<FRHIShaderResourceView>___cdecl_FRHICommandListBase::CreateShaderResourceView(FRHIBuffer*___ptr64,FRHIViewDesc::FBufferSRV::FInitializer_const&___ptr64)___ptr64'
             ::__l2::LLMScope_Name977,false,None,Default,true);
  FMemScope::FMemScope
            (&local_res18,
             &`public:_class_TRefCountPtr<FRHIShaderResourceView>___cdecl_FRHICommandListBase::CreateShaderResourceView(FRHIBuffer*___ptr64,FRHIViewDesc::FBufferSRV::FInitializer_const&___ptr64)___ptr64'
              ::__l2::LLMScope_Name977,true);
  (**(code **)(GDynamicRHI->_padding_ + 0x1b0))(GDynamicRHI,&local_a8,param_1,pFVar2,&local_68);
  FMemScope::~FMemScope(&local_res18);
  FLLMScope::~FLLMScope((FLLMScope *)&local_res8);
  pTVar4 = &this->BufferSRV;
  if (pTVar4 != &local_a8) {
    this_00 = pTVar4->Reference;
    pTVar4->Reference = local_a8.Reference;
    local_a8.Reference = (FRHIShaderResourceView *)0x0;
    if (this_00 == (FRHIShaderResourceView *)0x0) {
      return;
    }
    FRHIResource::Release((FRHIResource *)this_00);
  }
  if (local_a8.Reference != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)local_a8.Reference);
  }
  return;
}

// ReleaseRHI @ 149829fb0

void __thiscall PCGComputeDummies::FPCGEmptyBufferSRV::ReleaseRHI(FPCGEmptyBufferSRV *this)

{
  FRHIShaderResourceView *this_00;
  FRHIBuffer *this_01;
  
  this_00 = (this->BufferSRV).Reference;
  if (this_00 != (FRHIShaderResourceView *)0x0) {
    (this->BufferSRV).Reference = (FRHIShaderResourceView *)0x0;
    FRHIResource::Release((FRHIResource *)this_00);
  }
  this_01 = (this->Buffer).Reference;
  if (this_01 != (FRHIBuffer *)0x0) {
    (this->Buffer).Reference = (FRHIBuffer *)0x0;
    FRHIResource::Release((FRHIResource *)this_01);
    return;
  }
  return;
}

