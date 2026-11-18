// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 2

// ~FRWBuffer @ 1452ffb10

void __thiscall FRWBuffer::~FRWBuffer(FRWBuffer *this)

{
  FRHIBuffer *pFVar1;
  FRHIUnorderedAccessView *pFVar2;
  FRHIShaderResourceView *pFVar3;
  
  this->NumBytes = 0;
  pFVar1 = (this->Buffer).Reference;
  if (pFVar1 != (FRHIBuffer *)0x0) {
    (this->Buffer).Reference = (FRHIBuffer *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  pFVar2 = (this->UAV).Reference;
  if (pFVar2 != (FRHIUnorderedAccessView *)0x0) {
    (this->UAV).Reference = (FRHIUnorderedAccessView *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar2);
  }
  pFVar3 = (this->SRV).Reference;
  if (pFVar3 != (FRHIShaderResourceView *)0x0) {
    (this->SRV).Reference = (FRHIShaderResourceView *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar3);
  }
  pFVar3 = (this->SRV).Reference;
  if (pFVar3 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar3);
  }
  pFVar2 = (this->UAV).Reference;
  if (pFVar2 != (FRHIUnorderedAccessView *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar2);
  }
  pFVar1 = (this->Buffer).Reference;
  if (pFVar1 != (FRHIBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  return;
}

// Initialize @ 14532eff0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRWBuffer::Initialize
          (FRWBuffer *this,FRHICommandListBase *param_1,wchar_t *param_2,uint param_3,uint param_4,
          EPixelFormat param_5,ERHIAccess param_6,EBufferUsageFlags param_7,
          FResourceArrayUploadInterface *param_8)

{
  TRefCountPtr<FRHIUnorderedAccessView> *pTVar1;
  FRHIBuffer *pFVar2;
  FRHIUnorderedAccessView *this_00;
  FRHIShaderResourceView *this_01;
  code *pcVar3;
  EBufferUsageFlags EVar4;
  bool bVar5;
  TRefCountPtr<FRHIBuffer> TVar6;
  TRefCountPtr<FRHIShaderResourceView> TVar7;
  TRefCountPtr<FRHIShaderResourceView> *pTVar8;
  FRHIResource *local_res8;
  TRefCountPtr<FRHIUnorderedAccessView> local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  FRHIResource *local_b0;
  short local_a8;
  longlong lStack_a0;
  uint local_98;
  undefined4 uStack_94;
  EBufferUsageFlags EStack_90;
  int iStack_8c;
  wchar_t *local_88;
  longlong lStack_80;
  ERHIAccess local_78;
  undefined4 uStack_74;
  FName FStack_70;
  FName local_68;
  ulonglong local_60;
  ulonglong uStack_58;
  wchar_t *local_50;
  FResourceArrayUploadInterface *pFStack_48;
  ulonglong local_40;
  FName FStack_38;
  FName local_30;
  
  EVar4 = param_7;
  if (((param_7 >> 10 & 1) != 0) && (param_2 == (wchar_t *)0x0)) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1529500182670999312>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIUtilities.h"
                       ,0xf0,
                       "!(EnumHasAnyFlags(AdditionalUsage, EBufferUsageFlags::FastVRAM) && !InDebugName)"
                      );
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_98 = param_3 * param_4;
  uStack_94 = 0;
  EStack_90 = EVar4 | (VertexBuffer|ShaderResource|UnorderedAccess);
  lStack_80 = 0;
  this->NumBytes = local_98;
  iStack_8c = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
  local_60 = (ulonglong)local_98;
  uStack_58 = CONCAT44(iStack_8c,EVar4) | 0x4108;
  local_78 = param_6;
  FStack_70 = this->ClassName;
  local_68 = this->OwnerName;
  uStack_74 = 0;
  local_40 = (ulonglong)param_6;
  pFStack_48 = (FResourceArrayUploadInterface *)0x0;
  if (param_8 != (FResourceArrayUploadInterface *)0x0) {
    pFStack_48 = param_8;
    local_40 = CONCAT44(2,param_6);
  }
  local_88 = param_2;
  local_50 = param_2;
  FStack_38 = FStack_70;
  local_30 = local_68;
  TVar6 = FRHICommandListBase::CreateBuffer(param_1,(FRHIBufferCreateDesc *)&stack0x00000008);
  if ((FRHIBuffer *)this != TVar6.Reference) {
    pFVar2 = (this->Buffer).Reference;
    (this->Buffer).Reference = (FRHIBuffer *)(TVar6.Reference)->_padding_;
    (TVar6.Reference)->_padding_ = 0;
    if (pFVar2 != (FRHIBuffer *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar2);
    }
  }
  if (local_res8 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_res8);
  }
  pFVar2 = (this->Buffer).Reference;
  uStack_b8 = 0;
  local_c0._0_2_ = CONCAT11(param_5,1);
  local_c0 = (ulonglong)CONCAT12(1,(undefined2)local_c0);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_class_TRefCountPtr<FRHIUnorderedAccessView>___cdecl_FRHICommandListBase::CreateUnorderedAccessView(FRHIBuffer*___ptr64,FRHIViewDesc::FBufferUAV::FInitializer_const&___ptr64)___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_class_TRefCountPtr<FRHIUnorderedAccessView>___cdecl_FRHICommandListBase::CreateUnorderedAccessView(FRHIBuffer*___ptr64,FRHIViewDesc::FBufferUAV::FInitializer_const&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_class_TRefCountPtr<FRHIUnorderedAccessView>___cdecl_FRHICommandListBase::CreateUnorderedAccessView(FRHIBuffer*___ptr64,FRHIViewDesc::FBufferUAV::FInitializer_const&___ptr64)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_class_TRefCountPtr<FRHIUnorderedAccessView>___cdecl_FRHICommandListBase::CreateUnorderedAccessView(FRHIBuffer*___ptr64,FRHIViewDesc::FBufferUAV::FInitializer_const&___ptr64)___ptr64'
                      ::__l2::LLMScope_Name991,L"RHIMisc/CreateUnorderedAccessView");
      _Init_thread_footer(&`public:_class_TRefCountPtr<FRHIUnorderedAccessView>___cdecl_FRHICommandListBase::CreateUnorderedAccessView(FRHIBuffer*___ptr64,FRHIViewDesc::FBufferUAV::FInitializer_const&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FLLMScope::FLLMScope
            ((FLLMScope *)&param_7,
             `public:_class_TRefCountPtr<FRHIUnorderedAccessView>___cdecl_FRHICommandListBase::CreateUnorderedAccessView(FRHIBuffer*___ptr64,FRHIViewDesc::FBufferUAV::FInitializer_const&___ptr64)___ptr64'
             ::__l2::LLMScope_Name991,false,None,Default,true);
  FMemScope::FMemScope
            ((FMemScope *)&stack0x00000018,
             &`public:_class_TRefCountPtr<FRHIUnorderedAccessView>___cdecl_FRHICommandListBase::CreateUnorderedAccessView(FRHIBuffer*___ptr64,FRHIViewDesc::FBufferUAV::FInitializer_const&___ptr64)___ptr64'
              ::__l2::LLMScope_Name991,true);
  (**(code **)(GDynamicRHI->_padding_ + 0x1b8))(GDynamicRHI,&local_c8,param_1,pFVar2,&local_c0);
  FMemScope::~FMemScope((FMemScope *)&stack0x00000018);
  FLLMScope::~FLLMScope((FLLMScope *)&param_7);
  pTVar1 = &this->UAV;
  if (pTVar1 != &local_c8) {
    this_00 = pTVar1->Reference;
    pTVar1->Reference = local_c8.Reference;
    local_c8.Reference = (FRHIUnorderedAccessView *)0x0;
    if (this_00 == (FRHIUnorderedAccessView *)0x0) goto LAB_14532f1f8;
    FRHIResource::Release((FRHIResource *)this_00);
  }
  if (local_c8.Reference != (FRHIUnorderedAccessView *)0x0) {
    FRHIResource::Release((FRHIResource *)local_c8.Reference);
  }
LAB_14532f1f8:
  lStack_a0 = 0;
  local_a8 = (ushort)param_5 << 8;
  _local_a8 = (ulonglong)CONCAT12(1,local_a8);
  TVar7 = FRHICommandListBase::CreateShaderResourceView
                    (param_1,(FRHIBuffer *)&stack0xffffffffffffff50,
                     (FInitializer *)(this->Buffer).Reference);
  pTVar8 = &this->SRV;
  if ((FRHIShaderResourceView *)pTVar8 != TVar7.Reference) {
    this_01 = pTVar8->Reference;
                    /* WARNING: Load size is inaccurate */
    pTVar8->Reference = *TVar7.Reference;
    *(undefined8 *)TVar7.Reference = 0;
    if (this_01 != (FRHIShaderResourceView *)0x0) {
      FRHIResource::Release((FRHIResource *)this_01);
    }
  }
  if (local_b0 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_b0);
  }
  return;
}

