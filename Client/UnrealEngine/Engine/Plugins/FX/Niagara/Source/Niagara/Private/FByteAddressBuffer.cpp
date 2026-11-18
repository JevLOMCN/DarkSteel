// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 1

// Initialize @ 14947d220

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FByteAddressBuffer::Initialize
          (FByteAddressBuffer *this,FRHICommandListBase *param_1,wchar_t *param_2,uint param_3,
          EBufferUsageFlags param_4)

{
  FRHIBuffer *pFVar1;
  FRHIShaderResourceView *this_00;
  code *pcVar2;
  bool bVar3;
  TRefCountPtr<FRHIBuffer> TVar4;
  TRefCountPtr<FRHIShaderResourceView> *pTVar5;
  FRHIResource *local_res8;
  FMemScope local_res18;
  FLLMScope local_res20 [2];
  TRefCountPtr<FRHIShaderResourceView> local_b8;
  uint local_b0;
  undefined4 uStack_ac;
  EBufferUsageFlags EStack_a8;
  int iStack_a4;
  wchar_t *local_a0;
  undefined8 uStack_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  ulonglong uStack_60;
  wchar_t *local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  this->NumBytes = param_3;
  if (((param_3 & 3) != 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumBytes % 4 == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIUtilities.h"
                         ,0x1f9,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_b0 = this->NumBytes;
  uStack_84 = 0;
  uStack_80 = 0;
  iStack_a4 = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
  uStack_ac = 4;
  EStack_a8 = param_4 | (StructuredBuffer|ShaderResource|ByteAddressBuffer);
  local_68 = CONCAT44(4,local_b0);
  uStack_60 = CONCAT44(iStack_a4,param_4) | 0x10110;
  uStack_98 = 0;
  uStack_8c = 0;
  uStack_88 = 0;
  local_90 = 0x70;
  local_48 = 0x70;
  uStack_40 = 0;
  uStack_7c = 0;
  uStack_50 = 0;
  local_38 = 0;
  local_a0 = param_2;
  local_58 = param_2;
  TVar4 = FRHICommandListBase::CreateBuffer(param_1,(FRHIBufferCreateDesc *)&local_res8);
  if ((FRHIBuffer *)this != TVar4.Reference) {
    pFVar1 = (this->Buffer).Reference;
    (this->Buffer).Reference = (FRHIBuffer *)(TVar4.Reference)->_padding_;
    (TVar4.Reference)->_padding_ = 0;
    if (pFVar1 != (FRHIBuffer *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar1);
    }
  }
  if (local_res8 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_res8);
  }
  pFVar1 = (this->Buffer).Reference;
  uStack_70 = 0;
  local_78 = 0x40000;
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
            (local_res20,
             `public:_class_TRefCountPtr<FRHIShaderResourceView>___cdecl_FRHICommandListBase::CreateShaderResourceView(FRHIBuffer*___ptr64,FRHIViewDesc::FBufferSRV::FInitializer_const&___ptr64)___ptr64'
             ::__l2::LLMScope_Name977,false,None,Default,true);
  FMemScope::FMemScope
            (&local_res18,
             &`public:_class_TRefCountPtr<FRHIShaderResourceView>___cdecl_FRHICommandListBase::CreateShaderResourceView(FRHIBuffer*___ptr64,FRHIViewDesc::FBufferSRV::FInitializer_const&___ptr64)___ptr64'
              ::__l2::LLMScope_Name977,true);
  (**(code **)(GDynamicRHI->_padding_ + 0x1b0))(GDynamicRHI,&local_b8,param_1,pFVar1,&local_78);
  FMemScope::~FMemScope(&local_res18);
  FLLMScope::~FLLMScope(local_res20);
  pTVar5 = &this->SRV;
  if (pTVar5 != &local_b8) {
    this_00 = pTVar5->Reference;
    pTVar5->Reference = local_b8.Reference;
    local_b8.Reference = (FRHIShaderResourceView *)0x0;
    if (this_00 == (FRHIShaderResourceView *)0x0) {
      return;
    }
    FRHIResource::Release((FRHIResource *)this_00);
  }
  if (local_b8.Reference != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)local_b8.Reference);
  }
  return;
}

