// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// InitRHI @ 147cab430

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall FSortOffsetBuffers::InitRHI(FSortOffsetBuffers *this,FRHICommandListBase *param_1)

{
  TRefCountPtr<FRHIShaderResourceView> *pTVar1;
  TRefCountPtr<FRHIUnorderedAccessView> *pTVar2;
  ERHIPipeline EVar3;
  FRHIBuffer *pFVar4;
  FRHIShaderResourceView *this_00;
  FRHIUnorderedAccessView *this_01;
  code *pcVar5;
  void *pvVar6;
  bool bVar7;
  longlong *plVar8;
  TRefCountPtr<FRHIBuffer> *pTVar9;
  int *piVar10;
  longlong lVar11;
  undefined1 auStackY_188 [32];
  FLLMScope local_158;
  FLLMScope local_154;
  TRefCountPtr<FRHIBuffer> local_150;
  TRefCountPtr<FRHIShaderResourceView> local_148;
  TRefCountPtr<FRHIUnorderedAccessView> local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  longlong local_128;
  undefined4 uStack_120;
  int iStack_11c;
  wchar_t *local_118;
  FResourceArrayUploadInterface *pFStack_110;
  ERHIAccess local_108;
  ERHIBufferInitAction EStack_104;
  FNameEntryId FStack_100;
  uint uStack_fc;
  FNameEntryId FStack_f8;
  uint uStack_f4;
  FMemScope local_f0;
  FMemScope local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  FRHIBufferCreateDesc local_d0;
  undefined1 local_98 [48];
  FRHICommandListBase *local_68;
  FRHIBuffer *local_60;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_188;
  local_128 = 0x1000;
  pFStack_110 = (FResourceArrayUploadInterface *)0x0;
  iStack_11c = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
  EStack_104 = Default;
  FStack_100.Value = 0;
  uStack_fc = 0;
  FStack_f8.Value = 0;
  local_118 = L"SortOffset";
  uStack_f4 = 0;
  uStack_120 = 0x4109;
  local_108 = RHIGetDefaultResourceState(VertexBuffer|ShaderResource|UnorderedAccess|Static,false);
  pvVar6 = ThreadLocalStoragePointer;
  local_d0._padding_ = CONCAT44(iStack_11c,uStack_120);
  pTVar9 = this->Buffers;
  lVar11 = 2;
  local_d0._padding_ = local_128;
  local_d0.InitAction = EStack_104;
  local_d0.InitialState = local_108;
  local_d0.ClassName.Number = uStack_fc;
  local_d0.ClassName.ComparisonIndex.Value = FStack_100.Value;
  local_d0.DebugName = local_118;
  local_d0.InitialData = pFStack_110;
  local_d0.OwnerName.Number = uStack_f4;
  local_d0.OwnerName.ComparisonIndex.Value = FStack_f8.Value;
  do {
    if ((int)local_d0._padding_ == 0) {
      if (((uint)local_d0._padding_ >> 0x14 & 1) == 0) {
        FRHICommandListBase::InvalidBufferFatalError(param_1,&local_d0);
      }
      else if ((local_d0._padding_._4_4_ != 0) || ((uint)local_d0._padding_ != 0x100000)) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Size == 0 && Stride == 0 && Usage == EBufferUsageFlags::NullResource",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                           ,0x54f,L"");
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
    }
    if (local_d0.InitAction == Initializer) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("CreateDesc.InitAction != ERHIBufferInitAction::Initializer",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                         ,0x327,
                         L"Buffer InitAction set to Initializer when calling CreateBuffer which doesn\'t write to its initializer"
                        );
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    EVar3 = param_1->ActivePipelines;
    if ((EVar3 != None) && ((EVar3 & EVar3 - Graphics) != None)) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("ActivePipelines == ERHIPipeline::None || IsSingleRHIPipeline(ActivePipelines)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                         ,0x2a5,L"");
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    bVar7 = param_1->ActivePipelines == None;
    if (bVar7) {
      FRHICommandListBase::SwitchPipeline(param_1,Graphics);
    }
    (**(code **)(GDynamicRHI->_padding_ + 0x140))(GDynamicRHI,local_98);
    FRHIBufferInitializer::Finalize((FRHIBufferInitializer *)local_98);
    if ((local_68 != (FRHICommandListBase *)0x0) && (local_60 != (FRHIBuffer *)0x0)) {
      FRHIBufferInitializer::RemovePendingBufferUpload((FRHIBufferInitializer *)local_98);
    }
    if (local_98._0_8_ != 0) {
      plVar8 = (longlong *)(local_98 + 0x10);
      if ((longlong *)local_98._40_8_ != (longlong *)0x0) {
        plVar8 = (longlong *)local_98._40_8_;
      }
      (**(code **)(*plVar8 + 0x10))();
    }
    if (bVar7) {
      FRHICommandListBase::SwitchPipeline(param_1,None);
    }
    if (pTVar9 == &local_150) {
LAB_147cab644:
      if (local_150.Reference != (FRHIBuffer *)0x0) {
        FRHIResource::Release((FRHIResource *)local_150.Reference);
      }
    }
    else {
      pFVar4 = pTVar9->Reference;
      pTVar9->Reference = local_150.Reference;
      local_150.Reference = (FRHIBuffer *)0x0;
      if (pFVar4 != (FRHIBuffer *)0x0) {
        FRHIResource::Release((FRHIResource *)pFVar4);
        goto LAB_147cab644;
      }
    }
    uStack_d8 = 0;
    local_e0 = 0x11c00;
    piVar10 = (int *)(*(longlong *)((longlong)pvVar6 + (ulonglong)_tls_index * 8) + 0x9d4c);
    if (*piVar10 <
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
              (&local_158,
               `public:_class_TRefCountPtr<FRHIShaderResourceView>___cdecl_FRHICommandListBase::CreateShaderResourceView(FRHIBuffer*___ptr64,FRHIViewDesc::FBufferSRV::FInitializer_const&___ptr64)___ptr64'
               ::__l2::LLMScope_Name977,false,None,Default,true);
    FMemScope::FMemScope
              (&local_f0,
               &`public:_class_TRefCountPtr<FRHIShaderResourceView>___cdecl_FRHICommandListBase::CreateShaderResourceView(FRHIBuffer*___ptr64,FRHIViewDesc::FBufferSRV::FInitializer_const&___ptr64)___ptr64'
                ::__l2::LLMScope_Name977,true);
    (**(code **)(GDynamicRHI->_padding_ + 0x1b0))(GDynamicRHI,&local_148);
    FMemScope::~FMemScope(&local_f0);
    FLLMScope::~FLLMScope(&local_158);
    pTVar1 = (TRefCountPtr<FRHIShaderResourceView> *)(pTVar9 + 2);
    if (pTVar1 == &local_148) {
LAB_147cab746:
      if (local_148.Reference != (FRHIShaderResourceView *)0x0) {
        FRHIResource::Release((FRHIResource *)local_148.Reference);
      }
    }
    else {
      this_00 = pTVar1->Reference;
      pTVar1->Reference = local_148.Reference;
      local_148.Reference = (FRHIShaderResourceView *)0x0;
      if (this_00 != (FRHIShaderResourceView *)0x0) {
        FRHIResource::Release((FRHIResource *)this_00);
        goto LAB_147cab746;
      }
    }
    pFVar4 = pTVar9->Reference;
    uStack_130 = 0;
    local_138 = 0x11c01;
    if (*piVar10 <
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
              (&local_154,
               `public:_class_TRefCountPtr<FRHIUnorderedAccessView>___cdecl_FRHICommandListBase::CreateUnorderedAccessView(FRHIBuffer*___ptr64,FRHIViewDesc::FBufferUAV::FInitializer_const&___ptr64)___ptr64'
               ::__l2::LLMScope_Name991,false,None,Default,true);
    FMemScope::FMemScope
              (&local_e8,
               &`public:_class_TRefCountPtr<FRHIUnorderedAccessView>___cdecl_FRHICommandListBase::CreateUnorderedAccessView(FRHIBuffer*___ptr64,FRHIViewDesc::FBufferUAV::FInitializer_const&___ptr64)___ptr64'
                ::__l2::LLMScope_Name991,true);
    (**(code **)(GDynamicRHI->_padding_ + 0x1b8))(GDynamicRHI,&local_140,param_1,pFVar4);
    FMemScope::~FMemScope(&local_e8);
    FLLMScope::~FLLMScope(&local_154);
    pTVar2 = (TRefCountPtr<FRHIUnorderedAccessView> *)(pTVar9 + 4);
    if (pTVar2 == &local_140) {
LAB_147cab83e:
      if (local_140.Reference != (FRHIUnorderedAccessView *)0x0) {
        FRHIResource::Release((FRHIResource *)local_140.Reference);
      }
    }
    else {
      this_01 = pTVar2->Reference;
      pTVar2->Reference = local_140.Reference;
      local_140.Reference = (FRHIUnorderedAccessView *)0x0;
      if (this_01 != (FRHIUnorderedAccessView *)0x0) {
        FRHIResource::Release((FRHIResource *)this_01);
        goto LAB_147cab83e;
      }
    }
    pTVar9 = pTVar9 + 1;
    lVar11 = lVar11 + -1;
    if (lVar11 == 0) {
      return;
    }
  } while( true );
}

// ReleaseRHI @ 147cab890

void __thiscall FSortOffsetBuffers::ReleaseRHI(FSortOffsetBuffers *this)

{
  FRHIUnorderedAccessView *this_00;
  FRHIShaderResourceView *this_01;
  FRHIBuffer *this_02;
  TRefCountPtr<FRHIShaderResourceView> *pTVar1;
  longlong lVar2;
  
  pTVar1 = this->BufferSRVs;
  lVar2 = 2;
  do {
    this_00 = ((TRefCountPtr<FRHIUnorderedAccessView> *)(pTVar1 + 2))->Reference;
    if (this_00 != (FRHIUnorderedAccessView *)0x0) {
      ((TRefCountPtr<FRHIUnorderedAccessView> *)(pTVar1 + 2))->Reference =
           (FRHIUnorderedAccessView *)0x0;
      FRHIResource::Release((FRHIResource *)this_00);
    }
    this_01 = pTVar1->Reference;
    if (this_01 != (FRHIShaderResourceView *)0x0) {
      pTVar1->Reference = (FRHIShaderResourceView *)0x0;
      FRHIResource::Release((FRHIResource *)this_01);
    }
    this_02 = ((TRefCountPtr<FRHIBuffer> *)(pTVar1 + -2))->Reference;
    if (this_02 != (FRHIBuffer *)0x0) {
      ((TRefCountPtr<FRHIBuffer> *)(pTVar1 + -2))->Reference = (FRHIBuffer *)0x0;
      FRHIResource::Release((FRHIResource *)this_02);
    }
    pTVar1 = pTVar1 + 1;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  return;
}

// ~FSortOffsetBuffers @ 147cc8db0

void __thiscall FSortOffsetBuffers::~FSortOffsetBuffers(FSortOffsetBuffers *this)

{
  TRefCountPtr<FRHIShaderResourceView> *pTVar1;
  TRefCountPtr<FRHIBuffer> *pTVar2;
  FRHIUnorderedAccessView *this_00;
  longlong lVar3;
  FSortOffsetBuffers *pFVar4;
  TRefCountPtr<FRHIUnorderedAccessView> *pTVar5;
  longlong lVar6;
  TRefCountPtr<FRHIBuffer> *pTVar7;
  
  lVar3 = 2;
  pFVar4 = this + 1;
  lVar6 = 2;
  do {
    this_00 = pFVar4[-1].BufferUAVs[1].Reference;
    pFVar4 = (FSortOffsetBuffers *)(pFVar4[-1].BufferUAVs + 1);
    lVar6 = lVar6 + -1;
    if (this_00 != (FRHIUnorderedAccessView *)0x0) {
      FRHIResource::Release((FRHIResource *)this_00);
    }
  } while (lVar6 != 0);
  pTVar5 = this->BufferUAVs;
  lVar6 = 2;
  do {
    pTVar1 = (TRefCountPtr<FRHIShaderResourceView> *)(pTVar5 + -1);
    pTVar5 = pTVar5 + -1;
    lVar6 = lVar6 + -1;
    if (pTVar1->Reference != (FRHIShaderResourceView *)0x0) {
      FRHIResource::Release((FRHIResource *)pTVar1->Reference);
    }
  } while (lVar6 != 0);
  pTVar7 = (TRefCountPtr<FRHIBuffer> *)this->BufferSRVs;
  do {
    pTVar2 = pTVar7 + -1;
    pTVar7 = pTVar7 + -1;
    lVar3 = lVar3 + -1;
    if (pTVar2->Reference != (FRHIBuffer *)0x0) {
      FRHIResource::Release((FRHIResource *)pTVar2->Reference);
    }
  } while (lVar3 != 0);
  FRenderResource::~FRenderResource((FRenderResource *)this);
  return;
}

// DumpOffsets @ 147cf1b60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FSortOffsetBuffers::DumpOffsets(FSortOffsetBuffers *this,FRHICommandListBase *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  void *_Src;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  ForAnyElementType local_48;
  int local_40 [2];
  FString local_38;
  FString local_28;
  
  uVar4 = 0;
  local_48.Data = (FScriptContainerElement *)0x0;
  local_40[0] = 0;
  local_40[1] = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,0x400,&local_48,0,local_40 + 1);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,0x400,&local_48,local_40,local_40 + 1);
  _Src = FRHICommandListBase::LockBuffer
                   (param_1,this->Buffers[param_2].Reference,0,0x1000,RLM_ReadOnly);
  memcpy(local_48.Data,_Src,0x1000);
  FRHICommandListBase::UnlockBuffer(param_1,this->Buffers[param_2].Reference);
  do {
    local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.Data.ArrayNum = 0;
    local_38.Data.ArrayMax = 0;
    lVar6 = 0x10;
    do {
      uVar3 = 0;
      if ((int)uVar4 < local_40[0]) {
        uVar3 = ~uVar4 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      ::FString::PrintfImpl(&local_28,L" %04d");
      iVar5 = local_28.Data.ArrayNum + -1;
      if (local_28.Data.ArrayNum == 0) {
        iVar5 = 0;
      }
      ::FString::AppendChars(&local_38,(wchar_t *)local_28.Data.AllocatorInstance.Data,iVar5);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      uVar4 = uVar4 + 1;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
    if (4 < (byte)LogGPUSort._0_1_) {
      UE::Logging::Private::BasicLog<5>
                (&`public:_void___cdecl_FSortOffsetBuffers::DumpOffsets(FRHICommandListBase&___ptr64,int)___ptr64'
                  ::__l7::LOG_Static,(FLogCategoryBase *)&LogGPUSort);
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  } while ((int)uVar4 < 0x400);
  if (4 < (byte)LogGPUSort._0_1_) {
    UE::Logging::Private::BasicLog<5>
              (&`public:_void___cdecl_FSortOffsetBuffers::DumpOffsets(FRHICommandListBase&___ptr64,int)___ptr64'
                ::__l25::LOG_Static,(FLogCategoryBase *)&LogGPUSort);
  }
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data);
  }
  return;
}

