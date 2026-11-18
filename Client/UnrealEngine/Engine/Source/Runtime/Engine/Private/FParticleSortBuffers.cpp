// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// GetSortBuffers @ 14817e190

FGPUSortBuffers * __thiscall
FParticleSortBuffers::GetSortBuffers
          (FParticleSortBuffers *this,FGPUSortBuffers *__return_storage_ptr__)

{
  __return_storage_ptr__->FirstValuesSRV = (FRHIShaderResourceView *)0x0;
  __return_storage_ptr__->FinalValuesUAV = (FRHIUnorderedAccessView *)0x0;
  __return_storage_ptr__->RemoteKeySRVs[0] = this->KeyBufferSRVs[0].Reference;
  __return_storage_ptr__->RemoteKeyUAVs[0] = this->KeyBufferUAVs[0].Reference;
  __return_storage_ptr__->RemoteValueSRVs[0] = this->VertexBufferSortSRVs[0].Reference;
  __return_storage_ptr__->RemoteValueUAVs[0] = this->VertexBufferSortUAVs[0].Reference;
  __return_storage_ptr__->RemoteKeySRVs[1] = this->KeyBufferSRVs[1].Reference;
  __return_storage_ptr__->RemoteKeyUAVs[1] = this->KeyBufferUAVs[1].Reference;
  __return_storage_ptr__->RemoteValueSRVs[1] = this->VertexBufferSortSRVs[1].Reference;
  __return_storage_ptr__->RemoteValueUAVs[1] = this->VertexBufferSortUAVs[1].Reference;
  return __return_storage_ptr__;
}

// InitRHI @ 1481822f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FParticleSortBuffers::InitRHI(FParticleSortBuffers *this,FRHICommandListBase *param_1)

{
  TRefCountPtr<FRHIShaderResourceView> *pTVar1;
  TRefCountPtr<FRHIUnorderedAccessView> *pTVar2;
  TRefCountPtr<FRHIBuffer> *pTVar3;
  ERHIPipeline EVar4;
  uint uVar5;
  FRHIBuffer *pFVar6;
  FRHIShaderResourceView *pFVar7;
  FRHIUnorderedAccessView *pFVar8;
  code *pcVar9;
  void *pvVar10;
  FParticleSortBuffers *pFVar11;
  bool bVar12;
  longlong *plVar13;
  int *piVar14;
  longlong lVar15;
  TRefCountPtr<FRHIBuffer> *pTVar16;
  undefined1 auStackY_2a8 [32];
  FLLMScope local_278;
  FLLMScope local_274;
  FLLMScope local_270;
  FLLMScope local_26c;
  TRefCountPtr<FRHIBuffer> local_268;
  TRefCountPtr<FRHIShaderResourceView> local_260;
  TRefCountPtr<FRHIUnorderedAccessView> local_258;
  TRefCountPtr<FRHIBuffer> local_250;
  TRefCountPtr<FRHIShaderResourceView> local_248;
  TRefCountPtr<FRHIUnorderedAccessView> local_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  int local_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  int iStack_20c;
  wchar_t *local_208;
  FResourceArrayUploadInterface *pFStack_200;
  ERHIAccess local_1f8;
  ERHIBufferInitAction EStack_1f4;
  FNameEntryId FStack_1f0;
  uint uStack_1ec;
  FNameEntryId FStack_1e8;
  uint uStack_1e4;
  int local_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  int iStack_1d4;
  wchar_t *local_1d0;
  FResourceArrayUploadInterface *pFStack_1c8;
  ERHIAccess local_1c0;
  ERHIBufferInitAction EStack_1bc;
  FNameEntryId FStack_1b8;
  uint uStack_1b4;
  FNameEntryId FStack_1b0;
  uint uStack_1ac;
  FMemScope local_1a8;
  FMemScope local_1a0;
  FMemScope local_198;
  FMemScope local_190;
  FParticleSortBuffers *local_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  FRHIBufferCreateDesc local_160;
  FRHIBufferCreateDesc local_128;
  undefined1 local_e8 [48];
  FRHICommandListBase *local_b8;
  FRHIBuffer *local_b0;
  undefined1 local_98 [48];
  FRHICommandListBase *local_68;
  FRHIBuffer *local_60;
  ulonglong local_48;
  
  pvVar10 = ThreadLocalStoragePointer;
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_2a8;
  pTVar16 = this->KeyBuffers;
  lVar15 = 2;
  local_188 = this;
  do {
    pFVar11 = local_188;
    uVar5 = local_188->BufferSize;
    iStack_20c = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
    local_208 = L"PartialSortKeyBuffer";
    local_218 = uVar5 << 2;
    uStack_214 = 0;
    pFStack_200 = (FResourceArrayUploadInterface *)0x0;
    EStack_1f4 = Default;
    FStack_1f0.Value = 0;
    uStack_1ec = 0;
    FStack_1e8.Value = 0;
    uStack_1e4 = 0;
    uStack_210 = 0x4109;
    local_1f8 = RHIGetDefaultResourceState(VertexBuffer|ShaderResource|UnorderedAccess|Static,false)
    ;
    local_160._padding_ = CONCAT44(uStack_214,local_218);
    local_160._padding_ = CONCAT44(iStack_20c,uStack_210);
    local_160.InitAction = EStack_1f4;
    local_160.InitialState = local_1f8;
    local_160.ClassName.Number = uStack_1ec;
    local_160.ClassName.ComparisonIndex.Value = FStack_1f0.Value;
    local_160.DebugName = local_208;
    local_160.InitialData = pFStack_200;
    local_160.OwnerName.Number = uStack_1e4;
    local_160.OwnerName.ComparisonIndex.Value = FStack_1e8.Value;
    if ((uVar5 & 0x3fffffff) == 0) {
      FRHICommandListBase::InvalidBufferFatalError(param_1,&local_160);
    }
    if (local_160.InitAction == Initializer) {
      bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("CreateDesc.InitAction != ERHIBufferInitAction::Initializer",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                          ,0x327,
                          L"Buffer InitAction set to Initializer when calling CreateBuffer which doesn\'t write to its initializer"
                         );
      if (bVar12) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
    EVar4 = param_1->ActivePipelines;
    if ((EVar4 != None) && ((EVar4 & EVar4 - Graphics) != None)) {
      bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("ActivePipelines == ERHIPipeline::None || IsSingleRHIPipeline(ActivePipelines)"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                          ,0x2a5,L"");
      if (bVar12) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
    bVar12 = param_1->ActivePipelines == None;
    if (bVar12) {
      FRHICommandListBase::SwitchPipeline(param_1,Graphics);
    }
    (**(code **)(GDynamicRHI->_padding_ + 0x140))(GDynamicRHI,local_e8);
    FRHIBufferInitializer::Finalize((FRHIBufferInitializer *)local_e8);
    if ((local_b8 != (FRHICommandListBase *)0x0) && (local_b0 != (FRHIBuffer *)0x0)) {
      FRHIBufferInitializer::RemovePendingBufferUpload((FRHIBufferInitializer *)local_e8);
    }
    if (local_e8._0_8_ != 0) {
      plVar13 = (longlong *)(local_e8 + 0x10);
      if ((longlong *)local_e8._40_8_ != (longlong *)0x0) {
        plVar13 = (longlong *)local_e8._40_8_;
      }
      (**(code **)(*plVar13 + 0x10))();
    }
    if (bVar12) {
      FRHICommandListBase::SwitchPipeline(param_1,None);
    }
    if (pTVar16 == &local_268) {
LAB_1481824f0:
      if (local_268.Reference != (FRHIBuffer *)0x0) {
        FRHIResource::Release((FRHIResource *)local_268.Reference);
      }
    }
    else {
      pFVar6 = pTVar16->Reference;
      pTVar16->Reference = local_268.Reference;
      local_268.Reference = (FRHIBuffer *)0x0;
      if (pFVar6 != (FRHIBuffer *)0x0) {
        FRHIResource::Release((FRHIResource *)pFVar6);
        goto LAB_1481824f0;
      }
    }
    uStack_178 = 0;
    local_180 = 0x11c00;
    piVar14 = (int *)(*(longlong *)((longlong)pvVar10 + (ulonglong)_tls_index * 8) + 0x9d4c);
    if (*piVar14 <
        `public:_class_TRefCountPtr<FRHIShaderResourceView>___cdecl_FRHICommandListBase::CreateShaderResourceView(FRHIBuffer*___ptr64,FRHIViewDesc::FBufferSRV::FInitializer_const&___ptr64)___ptr64'
        ::__l2::_thread_safe_static_guard_0__) {
      _Init_thread_header(&`public:_class_TRefCountPtr<FRHIShaderResourceView>___cdecl_FRHICommandListBase::CreateShaderResourceView(FRHIBuffer*___ptr64,FRHIViewDesc::FBufferSRV::FInitializer_const&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
      if (`public:_class_TRefCountPtr<FRHIShaderResourceView>___cdecl_FRHICommandListBase::CreateShaderResourceView(FRHIBuffer*___ptr64,FRHIViewDesc::FBufferSRV::FInitializer_const&___ptr64)___ptr64'
          ::__l2::_thread_safe_static_guard_0__ == -1) {
        ::FName::FName(&`public:_class_TRefCountPtr<FRHIShaderResourceView>___cdecl_FRHICommandListBase::CreateShaderResourceView(FRHIBuffer*___ptr64,FRHIViewDesc::FBufferSRV::FInitializer_const&___ptr64)___ptr64'
                        ::__l2::LLMScope_Name977,L"RHIMisc/CreateShaderResourceView");
        _Init_thread_footer(&`public:_class_TRefCountPtr<FRHIShaderResourceView>___cdecl_FRHICommandListBase::CreateShaderResourceView(FRHIBuffer*___ptr64,FRHIViewDesc::FBufferSRV::FInitializer_const&___ptr64)___ptr64'
                             ::__l2::_thread_safe_static_guard_0__);
      }
    }
    FLLMScope::FLLMScope
              (&local_278,
               `public:_class_TRefCountPtr<FRHIShaderResourceView>___cdecl_FRHICommandListBase::CreateShaderResourceView(FRHIBuffer*___ptr64,FRHIViewDesc::FBufferSRV::FInitializer_const&___ptr64)___ptr64'
               ::__l2::LLMScope_Name977,false,None,Default,true);
    FMemScope::FMemScope
              (&local_1a8,
               &`public:_class_TRefCountPtr<FRHIShaderResourceView>___cdecl_FRHICommandListBase::CreateShaderResourceView(FRHIBuffer*___ptr64,FRHIViewDesc::FBufferSRV::FInitializer_const&___ptr64)___ptr64'
                ::__l2::LLMScope_Name977,true);
    (**(code **)(GDynamicRHI->_padding_ + 0x1b0))(GDynamicRHI,&local_260);
    FMemScope::~FMemScope(&local_1a8);
    FLLMScope::~FLLMScope(&local_278);
    pTVar1 = (TRefCountPtr<FRHIShaderResourceView> *)(pTVar16 + 2);
    if (pTVar1 == &local_260) {
LAB_1481825f7:
      if (local_260.Reference != (FRHIShaderResourceView *)0x0) {
        FRHIResource::Release((FRHIResource *)local_260.Reference);
      }
    }
    else {
      pFVar7 = pTVar1->Reference;
      pTVar1->Reference = local_260.Reference;
      local_260.Reference = (FRHIShaderResourceView *)0x0;
      if (pFVar7 != (FRHIShaderResourceView *)0x0) {
        FRHIResource::Release((FRHIResource *)pFVar7);
        goto LAB_1481825f7;
      }
    }
    pFVar6 = pTVar16->Reference;
    uStack_230 = 0;
    local_238 = 0x11c01;
    if (*piVar14 <
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
              (&local_274,
               `public:_class_TRefCountPtr<FRHIUnorderedAccessView>___cdecl_FRHICommandListBase::CreateUnorderedAccessView(FRHIBuffer*___ptr64,FRHIViewDesc::FBufferUAV::FInitializer_const&___ptr64)___ptr64'
               ::__l2::LLMScope_Name991,false,None,Default,true);
    FMemScope::FMemScope
              (&local_1a0,
               &`public:_class_TRefCountPtr<FRHIUnorderedAccessView>___cdecl_FRHICommandListBase::CreateUnorderedAccessView(FRHIBuffer*___ptr64,FRHIViewDesc::FBufferUAV::FInitializer_const&___ptr64)___ptr64'
                ::__l2::LLMScope_Name991,true);
    (**(code **)(GDynamicRHI->_padding_ + 0x1b8))(GDynamicRHI,&local_258,param_1,pFVar6);
    FMemScope::~FMemScope(&local_1a0);
    FLLMScope::~FLLMScope(&local_274);
    pTVar2 = (TRefCountPtr<FRHIUnorderedAccessView> *)(pTVar16 + 4);
    if (pTVar2 == &local_258) {
LAB_1481826f1:
      if (local_258.Reference != (FRHIUnorderedAccessView *)0x0) {
        FRHIResource::Release((FRHIResource *)local_258.Reference);
      }
    }
    else {
      pFVar8 = pTVar2->Reference;
      pTVar2->Reference = local_258.Reference;
      local_258.Reference = (FRHIUnorderedAccessView *)0x0;
      if (pFVar8 != (FRHIUnorderedAccessView *)0x0) {
        FRHIResource::Release((FRHIResource *)pFVar8);
        goto LAB_1481826f1;
      }
    }
    uVar5 = pFVar11->BufferSize;
    iStack_1d4 = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
    local_1e0 = uVar5 << 2;
    local_1d0 = L"PartialSortVertexBuffer";
    uStack_1dc = 0;
    pFStack_1c8 = (FResourceArrayUploadInterface *)0x0;
    EStack_1bc = Default;
    FStack_1b8.Value = 0;
    uStack_1b4 = 0;
    FStack_1b0.Value = 0;
    uStack_1ac = 0;
    uStack_1d8 = 0x4109;
    local_1c0 = RHIGetDefaultResourceState(VertexBuffer|ShaderResource|UnorderedAccess|Static,false)
    ;
    local_128._padding_ = CONCAT44(uStack_1dc,local_1e0);
    local_128._padding_ = CONCAT44(iStack_1d4,uStack_1d8);
    local_128.InitAction = EStack_1bc;
    local_128.InitialState = local_1c0;
    local_128.ClassName.Number = uStack_1b4;
    local_128.ClassName.ComparisonIndex.Value = FStack_1b8.Value;
    local_128.DebugName = local_1d0;
    local_128.InitialData = pFStack_1c8;
    local_128.OwnerName.Number = uStack_1ac;
    local_128.OwnerName.ComparisonIndex.Value = FStack_1b0.Value;
    if ((uVar5 & 0x3fffffff) == 0) {
      FRHICommandListBase::InvalidBufferFatalError(param_1,&local_128);
    }
    if (local_128.InitAction == Initializer) {
      bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("CreateDesc.InitAction != ERHIBufferInitAction::Initializer",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                          ,0x327,
                          L"Buffer InitAction set to Initializer when calling CreateBuffer which doesn\'t write to its initializer"
                         );
      if (bVar12) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
    EVar4 = param_1->ActivePipelines;
    if ((EVar4 != None) && ((EVar4 & EVar4 - Graphics) != None)) {
      bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("ActivePipelines == ERHIPipeline::None || IsSingleRHIPipeline(ActivePipelines)"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                          ,0x2a5,L"");
      if (bVar12) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
    bVar12 = param_1->ActivePipelines == None;
    if (bVar12) {
      FRHICommandListBase::SwitchPipeline(param_1,Graphics);
    }
    (**(code **)(GDynamicRHI->_padding_ + 0x140))(GDynamicRHI,local_98);
    FRHIBufferInitializer::Finalize((FRHIBufferInitializer *)local_98);
    if ((local_68 != (FRHICommandListBase *)0x0) && (local_60 != (FRHIBuffer *)0x0)) {
      FRHIBufferInitializer::RemovePendingBufferUpload((FRHIBufferInitializer *)local_98);
    }
    if (local_98._0_8_ != 0) {
      plVar13 = (longlong *)(local_98 + 0x10);
      if ((longlong *)local_98._40_8_ != (longlong *)0x0) {
        plVar13 = (longlong *)local_98._40_8_;
      }
      (**(code **)(*plVar13 + 0x10))();
    }
    if (bVar12) {
      FRHICommandListBase::SwitchPipeline(param_1,None);
    }
    pTVar3 = pTVar16 + 6;
    if (pTVar3 == &local_250) {
LAB_1481828c0:
      if (local_250.Reference != (FRHIBuffer *)0x0) {
        FRHIResource::Release((FRHIResource *)local_250.Reference);
      }
    }
    else {
      pFVar6 = pTVar3->Reference;
      pTVar3->Reference = local_250.Reference;
      local_250.Reference = (FRHIBuffer *)0x0;
      if (pFVar6 != (FRHIBuffer *)0x0) {
        FRHIResource::Release((FRHIResource *)pFVar6);
        goto LAB_1481828c0;
      }
    }
    uStack_168 = 0;
    local_170 = 0x11c00;
    piVar14 = (int *)(*(longlong *)((longlong)pvVar10 + (ulonglong)_tls_index * 8) + 0x9d4c);
    if (*piVar14 <
        `public:_class_TRefCountPtr<FRHIShaderResourceView>___cdecl_FRHICommandListBase::CreateShaderResourceView(FRHIBuffer*___ptr64,FRHIViewDesc::FBufferSRV::FInitializer_const&___ptr64)___ptr64'
        ::__l2::_thread_safe_static_guard_0__) {
      _Init_thread_header(&`public:_class_TRefCountPtr<FRHIShaderResourceView>___cdecl_FRHICommandListBase::CreateShaderResourceView(FRHIBuffer*___ptr64,FRHIViewDesc::FBufferSRV::FInitializer_const&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
      if (`public:_class_TRefCountPtr<FRHIShaderResourceView>___cdecl_FRHICommandListBase::CreateShaderResourceView(FRHIBuffer*___ptr64,FRHIViewDesc::FBufferSRV::FInitializer_const&___ptr64)___ptr64'
          ::__l2::_thread_safe_static_guard_0__ == -1) {
        ::FName::FName(&`public:_class_TRefCountPtr<FRHIShaderResourceView>___cdecl_FRHICommandListBase::CreateShaderResourceView(FRHIBuffer*___ptr64,FRHIViewDesc::FBufferSRV::FInitializer_const&___ptr64)___ptr64'
                        ::__l2::LLMScope_Name977,L"RHIMisc/CreateShaderResourceView");
        _Init_thread_footer(&`public:_class_TRefCountPtr<FRHIShaderResourceView>___cdecl_FRHICommandListBase::CreateShaderResourceView(FRHIBuffer*___ptr64,FRHIViewDesc::FBufferSRV::FInitializer_const&___ptr64)___ptr64'
                             ::__l2::_thread_safe_static_guard_0__);
      }
    }
    FLLMScope::FLLMScope
              (&local_270,
               `public:_class_TRefCountPtr<FRHIShaderResourceView>___cdecl_FRHICommandListBase::CreateShaderResourceView(FRHIBuffer*___ptr64,FRHIViewDesc::FBufferSRV::FInitializer_const&___ptr64)___ptr64'
               ::__l2::LLMScope_Name977,false,None,Default,true);
    FMemScope::FMemScope
              (&local_198,
               &`public:_class_TRefCountPtr<FRHIShaderResourceView>___cdecl_FRHICommandListBase::CreateShaderResourceView(FRHIBuffer*___ptr64,FRHIViewDesc::FBufferSRV::FInitializer_const&___ptr64)___ptr64'
                ::__l2::LLMScope_Name977,true);
    (**(code **)(GDynamicRHI->_padding_ + 0x1b0))(GDynamicRHI,&local_248);
    FMemScope::~FMemScope(&local_198);
    FLLMScope::~FLLMScope(&local_270);
    pTVar1 = (TRefCountPtr<FRHIShaderResourceView> *)(pTVar16 + 8);
    if (pTVar1 == &local_248) {
LAB_1481829c7:
      if (local_248.Reference != (FRHIShaderResourceView *)0x0) {
        FRHIResource::Release((FRHIResource *)local_248.Reference);
      }
    }
    else {
      pFVar7 = pTVar1->Reference;
      pTVar1->Reference = local_248.Reference;
      local_248.Reference = (FRHIShaderResourceView *)0x0;
      if (pFVar7 != (FRHIShaderResourceView *)0x0) {
        FRHIResource::Release((FRHIResource *)pFVar7);
        goto LAB_1481829c7;
      }
    }
    pFVar6 = pTVar3->Reference;
    uStack_220 = 0;
    local_228 = 0x11c01;
    if (*piVar14 <
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
              (&local_26c,
               `public:_class_TRefCountPtr<FRHIUnorderedAccessView>___cdecl_FRHICommandListBase::CreateUnorderedAccessView(FRHIBuffer*___ptr64,FRHIViewDesc::FBufferUAV::FInitializer_const&___ptr64)___ptr64'
               ::__l2::LLMScope_Name991,false,None,Default,true);
    FMemScope::FMemScope
              (&local_190,
               &`public:_class_TRefCountPtr<FRHIUnorderedAccessView>___cdecl_FRHICommandListBase::CreateUnorderedAccessView(FRHIBuffer*___ptr64,FRHIViewDesc::FBufferUAV::FInitializer_const&___ptr64)___ptr64'
                ::__l2::LLMScope_Name991,true);
    (**(code **)(GDynamicRHI->_padding_ + 0x1b8))(GDynamicRHI,&local_240,param_1,pFVar6);
    FMemScope::~FMemScope(&local_190);
    FLLMScope::~FLLMScope(&local_26c);
    pTVar2 = (TRefCountPtr<FRHIUnorderedAccessView> *)(pTVar16 + 10);
    if (pTVar2 == &local_240) {
LAB_148182abd:
      if (local_240.Reference != (FRHIUnorderedAccessView *)0x0) {
        FRHIResource::Release((FRHIResource *)local_240.Reference);
      }
    }
    else {
      pFVar8 = pTVar2->Reference;
      pTVar2->Reference = local_240.Reference;
      local_240.Reference = (FRHIUnorderedAccessView *)0x0;
      if (pFVar8 != (FRHIUnorderedAccessView *)0x0) {
        FRHIResource::Release((FRHIResource *)pFVar8);
        goto LAB_148182abd;
      }
    }
    pTVar16 = pTVar16 + 1;
    lVar15 = lVar15 + -1;
    if (lVar15 == 0) {
      return;
    }
  } while( true );
}

// ReleaseRHI @ 14818f160

void __thiscall FParticleSortBuffers::ReleaseRHI(FParticleSortBuffers *this)

{
  FRHIUnorderedAccessView *pFVar1;
  FRHIShaderResourceView *pFVar2;
  FRHIBuffer *pFVar3;
  TRefCountPtr<FRHIShaderResourceView> *pTVar4;
  longlong lVar5;
  
  pTVar4 = this->KeyBufferSRVs;
  lVar5 = 2;
  do {
    pFVar1 = ((TRefCountPtr<FRHIUnorderedAccessView> *)(pTVar4 + 2))->Reference;
    if (pFVar1 != (FRHIUnorderedAccessView *)0x0) {
      ((TRefCountPtr<FRHIUnorderedAccessView> *)(pTVar4 + 2))->Reference =
           (FRHIUnorderedAccessView *)0x0;
      FRHIResource::Release((FRHIResource *)pFVar1);
    }
    pFVar2 = pTVar4->Reference;
    if (pFVar2 != (FRHIShaderResourceView *)0x0) {
      pTVar4->Reference = (FRHIShaderResourceView *)0x0;
      FRHIResource::Release((FRHIResource *)pFVar2);
    }
    pFVar3 = ((TRefCountPtr<FRHIBuffer> *)(pTVar4 + -2))->Reference;
    if (pFVar3 != (FRHIBuffer *)0x0) {
      ((TRefCountPtr<FRHIBuffer> *)(pTVar4 + -2))->Reference = (FRHIBuffer *)0x0;
      FRHIResource::Release((FRHIResource *)pFVar3);
    }
    pFVar1 = ((TRefCountPtr<FRHIUnorderedAccessView> *)(pTVar4 + 8))->Reference;
    if (pFVar1 != (FRHIUnorderedAccessView *)0x0) {
      ((TRefCountPtr<FRHIUnorderedAccessView> *)(pTVar4 + 8))->Reference =
           (FRHIUnorderedAccessView *)0x0;
      FRHIResource::Release((FRHIResource *)pFVar1);
    }
    pFVar2 = pTVar4[6].Reference;
    if (pFVar2 != (FRHIShaderResourceView *)0x0) {
      pTVar4[6].Reference = (FRHIShaderResourceView *)0x0;
      FRHIResource::Release((FRHIResource *)pFVar2);
    }
    pFVar3 = ((TRefCountPtr<FRHIBuffer> *)(pTVar4 + 4))->Reference;
    if (pFVar3 != (FRHIBuffer *)0x0) {
      ((TRefCountPtr<FRHIBuffer> *)(pTVar4 + 4))->Reference = (FRHIBuffer *)0x0;
      FRHIResource::Release((FRHIResource *)pFVar3);
    }
    pTVar4 = pTVar4 + 1;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  return;
}

