// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 2

// InitRHI @ 1450de3b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall FSortedIndexBuffer::InitRHI(FSortedIndexBuffer *this,FRHICommandListBase *param_1)

{
  longlong *plVar1;
  TRefCountPtr<FRHIUnorderedAccessView> *pTVar2;
  uint uVar3;
  FRHIResource *this_00;
  longlong lVar4;
  FRHIUnorderedAccessView *this_01;
  FRHIBuffer *pFVar5;
  FRHIShaderResourceView *this_02;
  code *pcVar6;
  bool bVar7;
  TRefCountPtr<FRHIBuffer> TVar8;
  TRefCountPtr<FRHIShaderResourceView> *pTVar9;
  byte bVar10;
  int *piVar11;
  FLLMScope local_res8 [5];
  FLLMScope local_res18 [2];
  FRHIResource *local_res20;
  TRefCountPtr<FRHIUnorderedAccessView> local_e8;
  TRefCountPtr<FRHIShaderResourceView> local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  int local_c8;
  uint uStack_c4;
  undefined4 uStack_c0;
  int iStack_bc;
  wchar_t *local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  FMemScope local_90;
  FMemScope local_88;
  ulonglong local_80 [3];
  undefined8 uStack_68;
  wchar_t *local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  if (((this->SourceIndexBuffer == (FIndexBuffer *)0x0) ||
      ((this->SourceIndexBuffer->IndexBufferRHI).Reference == (FRHIBuffer *)0x0)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("SourceIndexBuffer && SourceIndexBuffer->IndexBufferRHI",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\OIT\\OIT.cpp"
                         ,0x11d,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar3 = (((this->SourceIndexBuffer->IndexBufferRHI).Reference)->Desc).Stride;
  if (((uVar3 != 2) && (uVar3 != 4)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("BytesPerElement == 2 || BytesPerElement == 4",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\OIT\\OIT.cpp"
                         ,0x11f,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uStack_c0 = 0x8108;
  local_a8 = 8;
  bVar10 = 0x1c;
  if (uVar3 == 2) {
    bVar10 = 0x20;
  }
  local_c8 = uVar3 * this->NumIndices;
  uStack_9c = 0;
  uStack_98 = 0;
  uStack_b0 = 0;
  uStack_a4 = 0;
  uStack_a0 = 0;
  uStack_94 = 0;
  iStack_bc = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
  local_80[2] = CONCAT44(uVar3,local_c8);
  uStack_68 = CONCAT44(iStack_bc,0x8108);
  local_b8 = this->DebugName;
  local_50 = 8;
  uStack_48 = 0;
  uStack_58 = 0;
  local_40 = 0;
  uStack_c4 = uVar3;
  local_60 = local_b8;
  TVar8 = FRHICommandListBase::CreateBuffer(param_1,(FRHIBufferCreateDesc *)&local_res20);
  plVar1 = &this->_padding_;
  if ((FRHIBuffer *)plVar1 != TVar8.Reference) {
    this_00 = (FRHIResource *)*plVar1;
    *plVar1 = (TVar8.Reference)->_padding_;
    (TVar8.Reference)->_padding_ = 0;
    if (this_00 != (FRHIResource *)0x0) {
      FRHIResource::Release(this_00);
    }
  }
  if (local_res20 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_res20);
  }
  lVar4 = *plVar1;
  uStack_d0 = 0;
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c);
  local_d8._0_2_ = CONCAT11(bVar10,1);
  local_d8 = (ulonglong)CONCAT12(1,(undefined2)local_d8);
  if ((*piVar11 <
       `public:_class_TRefCountPtr<FRHIUnorderedAccessView>___cdecl_FRHICommandListBase::CreateUnorderedAccessView(FRHIBuffer*___ptr64,FRHIViewDesc::FBufferUAV::FInitializer_const&___ptr64)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_class_TRefCountPtr<FRHIUnorderedAccessView>___cdecl_FRHICommandListBase::CreateUnorderedAccessView(FRHIBuffer*___ptr64,FRHIViewDesc::FBufferUAV::FInitializer_const&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_class_TRefCountPtr<FRHIUnorderedAccessView>___cdecl_FRHICommandListBase::CreateUnorderedAccessView(FRHIBuffer*___ptr64,FRHIViewDesc::FBufferUAV::FInitializer_const&___ptr64)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    ::FName::FName(&`public:_class_TRefCountPtr<FRHIUnorderedAccessView>___cdecl_FRHICommandListBase::CreateUnorderedAccessView(FRHIBuffer*___ptr64,FRHIViewDesc::FBufferUAV::FInitializer_const&___ptr64)___ptr64'
                    ::__l2::LLMScope_Name991,L"RHIMisc/CreateUnorderedAccessView");
    _Init_thread_footer(&`public:_class_TRefCountPtr<FRHIUnorderedAccessView>___cdecl_FRHICommandListBase::CreateUnorderedAccessView(FRHIBuffer*___ptr64,FRHIViewDesc::FBufferUAV::FInitializer_const&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  FLLMScope::FLLMScope
            (local_res8,
             `public:_class_TRefCountPtr<FRHIUnorderedAccessView>___cdecl_FRHICommandListBase::CreateUnorderedAccessView(FRHIBuffer*___ptr64,FRHIViewDesc::FBufferUAV::FInitializer_const&___ptr64)___ptr64'
             ::__l2::LLMScope_Name991,false,None,Default,true);
  FMemScope::FMemScope
            (&local_90,
             &`public:_class_TRefCountPtr<FRHIUnorderedAccessView>___cdecl_FRHICommandListBase::CreateUnorderedAccessView(FRHIBuffer*___ptr64,FRHIViewDesc::FBufferUAV::FInitializer_const&___ptr64)___ptr64'
              ::__l2::LLMScope_Name991,true);
  (**(code **)(GDynamicRHI->_padding_ + 0x1b8))(GDynamicRHI,&local_e8,param_1,lVar4,&local_d8);
  FMemScope::~FMemScope(&local_90);
  FLLMScope::~FLLMScope(local_res8);
  pTVar2 = &this->SortedIndexUAV;
  if (pTVar2 != &local_e8) {
    this_01 = pTVar2->Reference;
    pTVar2->Reference = local_e8.Reference;
    local_e8.Reference = (FRHIUnorderedAccessView *)0x0;
    if (this_01 == (FRHIUnorderedAccessView *)0x0) goto LAB_1450de5d6;
    FRHIResource::Release((FRHIResource *)this_01);
  }
  if (local_e8.Reference != (FRHIUnorderedAccessView *)0x0) {
    FRHIResource::Release((FRHIResource *)local_e8.Reference);
  }
LAB_1450de5d6:
  local_80[1] = 0;
  local_80[0]._0_2_ = (ushort)bVar10 << 8;
  local_80[0] = (ulonglong)CONCAT12(1,(short)local_80[0]);
  pFVar5 = (this->SourceIndexBuffer->IndexBufferRHI).Reference;
  if ((*piVar11 <
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
            (local_res18,
             `public:_class_TRefCountPtr<FRHIShaderResourceView>___cdecl_FRHICommandListBase::CreateShaderResourceView(FRHIBuffer*___ptr64,FRHIViewDesc::FBufferSRV::FInitializer_const&___ptr64)___ptr64'
             ::__l2::LLMScope_Name977,false,None,Default,true);
  FMemScope::FMemScope
            (&local_88,
             &`public:_class_TRefCountPtr<FRHIShaderResourceView>___cdecl_FRHICommandListBase::CreateShaderResourceView(FRHIBuffer*___ptr64,FRHIViewDesc::FBufferSRV::FInitializer_const&___ptr64)___ptr64'
              ::__l2::LLMScope_Name977,true);
  (**(code **)(GDynamicRHI->_padding_ + 0x1b0))(GDynamicRHI,&local_e0,param_1,pFVar5,local_80);
  FMemScope::~FMemScope(&local_88);
  FLLMScope::~FLLMScope(local_res18);
  pTVar9 = &this->SourceIndexSRV;
  if (pTVar9 != &local_e0) {
    this_02 = pTVar9->Reference;
    pTVar9->Reference = local_e0.Reference;
    local_e0.Reference = (FRHIShaderResourceView *)0x0;
    if (this_02 == (FRHIShaderResourceView *)0x0) {
      return;
    }
    FRHIResource::Release((FRHIResource *)this_02);
  }
  if (local_e0.Reference != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)local_e0.Reference);
  }
  return;
}

// ReleaseRHI @ 1450e7360

void __thiscall FSortedIndexBuffer::ReleaseRHI(FSortedIndexBuffer *this)

{
  FRHIResource *this_00;
  FRHIUnorderedAccessView *this_01;
  FRHIShaderResourceView *this_02;
  
  this_00 = (FRHIResource *)this->_padding_;
  if (this_00 != (FRHIResource *)0x0) {
    this->_padding_ = 0;
    FRHIResource::Release(this_00);
  }
  this_01 = (this->SortedIndexUAV).Reference;
  if (this_01 != (FRHIUnorderedAccessView *)0x0) {
    (this->SortedIndexUAV).Reference = (FRHIUnorderedAccessView *)0x0;
    FRHIResource::Release((FRHIResource *)this_01);
  }
  this_02 = (this->SourceIndexSRV).Reference;
  if (this_02 != (FRHIShaderResourceView *)0x0) {
    (this->SourceIndexSRV).Reference = (FRHIShaderResourceView *)0x0;
    FRHIResource::Release((FRHIResource *)this_02);
    return;
  }
  return;
}

