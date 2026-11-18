// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// Initialize @ 144887bd0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FReadBuffer::Initialize
          (FReadBuffer *this,FRHICommandListBase *param_1,wchar_t *param_2,uint param_3,uint param_4
          ,EPixelFormat param_5,EBufferUsageFlags param_6,FResourceArrayUploadInterface *param_7)

{
  FRHIBuffer *pFVar1;
  FRHIShaderResourceView *this_00;
  TRefCountPtr<FRHIBuffer> TVar2;
  TRefCountPtr<FRHIShaderResourceView> *pTVar3;
  TRefCountPtr<FRHIShaderResourceView> local_98;
  uint local_90;
  undefined4 uStack_8c;
  EBufferUsageFlags EStack_88;
  int iStack_84;
  wchar_t *local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  ulonglong uStack_40;
  wchar_t *local_38;
  FResourceArrayUploadInterface *pFStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  local_90 = param_3 * param_4;
  uStack_64 = 0;
  uStack_60 = 0;
  uStack_8c = 0;
  uStack_78 = 0;
  this->NumBytes = local_90;
  iStack_84 = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
  EStack_88 = param_6 | (VertexBuffer|ShaderResource);
  uStack_6c = 0;
  uStack_68 = 0;
  local_48 = (ulonglong)local_90;
  uStack_40 = CONCAT44(iStack_84,param_6) | 0x4100;
  local_70 = 0x70;
  uStack_5c = 0;
  local_28 = 0x70;
  uStack_20 = 0;
  pFStack_30 = (FResourceArrayUploadInterface *)0x0;
  local_18 = 0;
  if (param_7 != (FResourceArrayUploadInterface *)0x0) {
    pFStack_30 = param_7;
    local_28 = 0x200000070;
  }
  local_80 = param_2;
  local_38 = param_2;
  TVar2 = FRHICommandListBase::CreateBuffer(param_1,(FRHIBufferCreateDesc *)&param_7);
  if ((FRHIBuffer *)this != TVar2.Reference) {
    pFVar1 = (this->Buffer).Reference;
    (this->Buffer).Reference = (FRHIBuffer *)(TVar2.Reference)->_padding_;
    (TVar2.Reference)->_padding_ = 0;
    if (pFVar1 != (FRHIBuffer *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar1);
    }
  }
  if (param_7 != (FResourceArrayUploadInterface *)0x0) {
    FRHIResource::Release((FRHIResource *)param_7);
  }
  pFVar1 = (this->Buffer).Reference;
  uStack_50 = 0;
  local_58 = (ulonglong)CONCAT12(1,(ushort)param_5 << 8);
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
            ((FLLMScope *)&param_5,
             `public:_class_TRefCountPtr<FRHIShaderResourceView>___cdecl_FRHICommandListBase::CreateShaderResourceView(FRHIBuffer*___ptr64,FRHIViewDesc::FBufferSRV::FInitializer_const&___ptr64)___ptr64'
             ::__l2::LLMScope_Name977,false,None,Default,true);
  FMemScope::FMemScope
            ((FMemScope *)&param_7,
             &`public:_class_TRefCountPtr<FRHIShaderResourceView>___cdecl_FRHICommandListBase::CreateShaderResourceView(FRHIBuffer*___ptr64,FRHIViewDesc::FBufferSRV::FInitializer_const&___ptr64)___ptr64'
              ::__l2::LLMScope_Name977,true);
  (**(code **)(GDynamicRHI->_padding_ + 0x1b0))(GDynamicRHI,&local_98,param_1,pFVar1,&local_58);
  FMemScope::~FMemScope((FMemScope *)&param_7);
  FLLMScope::~FLLMScope((FLLMScope *)&param_5);
  pTVar3 = &this->SRV;
  if (pTVar3 != &local_98) {
    this_00 = pTVar3->Reference;
    pTVar3->Reference = local_98.Reference;
    local_98.Reference = (FRHIShaderResourceView *)0x0;
    if (this_00 == (FRHIShaderResourceView *)0x0) {
      return;
    }
    FRHIResource::Release((FRHIResource *)this_00);
  }
  if (local_98.Reference != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)local_98.Reference);
  }
  return;
}

