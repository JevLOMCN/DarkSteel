// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D12RHI
// Functions: 6

// FD3D12BindlessDescriptorAllocator @ 1459a7ba0

/* WARNING: Enum "D3D_ROOT_SIGNATURE_VERSION": Some values do not have unique names */
/* WARNING: Enum "D3D_SHADER_MODEL": Some values do not have unique names */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

FD3D12BindlessDescriptorAllocator * __thiscall
FD3D12BindlessDescriptorAllocator::FD3D12BindlessDescriptorAllocator
          (FD3D12BindlessDescriptorAllocator *this,FD3D12Adapter *param_1)

{
  this->_padding_ = (longlong)param_1;
  this->BindlessConfiguration = Disabled;
  this->MaxResourceHeapSize = 0;
  this->MaxSamplerHeapSize = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->ResourceHeapsCS,4000);
  this->ResourceAllocator = (FRHIHeapDescriptorAllocator *)0x0;
  this->SamplerAllocator = (FRHIHeapDescriptorAllocator *)0x0;
  return this;
}

// AllocateDescriptor @ 1459b1c80

FRHIDescriptorHandle __thiscall
FD3D12BindlessDescriptorAllocator::AllocateDescriptor
          (FD3D12BindlessDescriptorAllocator *this,ERHIDescriptorType param_1)

{
  code *pcVar1;
  bool bVar2;
  FRHIDescriptorHandle FVar3;
  undefined7 in_register_00000011;
  char in_R8B;
  undefined8 local_res20;
  int local_28;
  undefined4 uStack_24;
  uint local_20;
  undefined4 uStack_1c;
  TOptional<FRHIDescriptorAllocation> local_18;
  
  FVar3._1_7_ = in_register_00000011;
  FVar3.Index._0_1_ = param_1;
  if (in_R8B == '\a') {
    if (this->SamplerAllocator == (FRHIHeapDescriptorAllocator *)0x0) {
LAB_1459b1cf9:
      *(undefined8 *)FVar3 = 0;
      *(undefined4 *)FVar3 = 0xffffffff;
      *(undefined1 *)((longlong)FVar3 + 4) = 9;
      return FVar3;
    }
    FRHIHeapDescriptorAllocator::Allocate(this->SamplerAllocator,(ERHIDescriptorType)&local_28);
    if (((local_28 == -1) || ((char)uStack_24 == '\t')) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Result.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12BindlessDescriptors.cpp"
                           ,0xaf,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      FVar3 = (FRHIDescriptorHandle)(*pcVar1)();
      return FVar3;
    }
    local_res20 = CONCAT44(uStack_24,local_28);
  }
  else {
    if (this->ResourceAllocator == (FRHIHeapDescriptorAllocator *)0x0) goto LAB_1459b1cf9;
    FRHIHeapDescriptorAllocator::Allocate(this->ResourceAllocator,(ERHIDescriptorType)&local_res20);
    if (((int)local_res20 == -1) || (local_res20._4_1_ == '\t')) {
      ResizeGrowAndAllocate(this,&local_18,1);
      if ((local_18.bIsSet == false) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar2)) {
        pcVar1 = (code *)swi(3);
        FVar3 = (FRHIDescriptorHandle)(*pcVar1)();
        return FVar3;
      }
      local_20 = local_18.TypedValue.StartIndex;
      uStack_1c = CONCAT31(uStack_1c._1_3_,in_R8B);
      local_res20 = CONCAT44(uStack_1c,local_18.TypedValue.StartIndex);
    }
    if ((((int)local_res20 == -1) || ((char)((ulonglong)local_res20 >> 0x20) == '\t')) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Result.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12BindlessDescriptors.cpp"
                           ,0xc2,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      FVar3 = (FRHIDescriptorHandle)(*pcVar1)();
      return FVar3;
    }
  }
  *(undefined8 *)FVar3 = local_res20;
  return FVar3;
}

// AllocateDescriptors @ 1459b1df0

TOptional<FRHIDescriptorAllocation> * __thiscall
FD3D12BindlessDescriptorAllocator::AllocateDescriptors
          (FD3D12BindlessDescriptorAllocator *this,
          TOptional<FRHIDescriptorAllocation> *__return_storage_ptr__,ERHIDescriptorType param_1,
          uint param_2)

{
  FRHIHeapDescriptorAllocator *this_00;
  
  if (param_1 == Sampler) {
    this_00 = this->SamplerAllocator;
  }
  else {
    this_00 = this->ResourceAllocator;
  }
  if (this_00 != (FRHIHeapDescriptorAllocator *)0x0) {
    FRHIHeapDescriptorAllocator::Allocate(this_00,__return_storage_ptr__,param_2);
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->bIsSet = false;
  return __return_storage_ptr__;
}

// FreeDescriptor @ 1459c10c0

void __thiscall
FD3D12BindlessDescriptorAllocator::FreeDescriptor
          (FD3D12BindlessDescriptorAllocator *this,FRHIDescriptorHandle param_1)

{
  code *pcVar1;
  ERHIDescriptorType EVar2;
  bool bVar3;
  ERHIDescriptorTypeMask EVar4;
  FRHIHeapDescriptorAllocator *this_00;
  
  if ((param_1.Index != 0xffffffff) && (EVar2 = param_1.Type, EVar2 != Invalid)) {
    this_00 = this->SamplerAllocator;
    if ((this_00 != (FRHIHeapDescriptorAllocator *)0x0) &&
       ((this_00->TypeMask >> (param_1._4_2_ & 0xf) & 1) != 0)) {
LAB_1459c1121:
      FRHIHeapDescriptorAllocator::Free(this_00,param_1);
      return;
    }
    this_00 = this->ResourceAllocator;
    if (this_00 != (FRHIHeapDescriptorAllocator *)0x0) {
      if (EVar2 == Invalid) {
        EVar4 = None;
      }
      else {
        EVar4 = 1 << (EVar2 & 0x1f);
      }
      if ((this_00->TypeMask & EVar4) != None) goto LAB_1459c1121;
    }
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12BindlessDescriptors.cpp"
                       ,0x106,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// Init @ 1459c3a10

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FD3D12BindlessDescriptorAllocator::Init(FD3D12BindlessDescriptorAllocator *this)

{
  code *pcVar1;
  bool bVar2;
  ERHIBindlessConfiguration EVar3;
  FName *pFVar4;
  FRHIHeapDescriptorAllocator *this_00;
  FRHIHeapDescriptorAllocator *pFVar5;
  FRHIHeapDescriptorAllocator *pFVar6;
  uint uVar7;
  uint uVar8;
  FLLMScope local_res8 [2];
  FMemScope local_res10;
  FName local_res18;
  FName local_res20;
  TStatId local_98;
  FThreadSafeStaticStat<FStat_STAT_BindlessResourceDescriptorsAllocated> local_90;
  TStatId *local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  TStatId local_78 [2];
  TStatId *local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  TArrayView<TStatId_const_,int> local_58;
  TArrayView<TStatId_const_,int> local_48;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&LLMScope_Name119,L"RHIMisc/BindlessDescriptorAllocator");
    _Init_thread_footer(&::_TSS0);
  }
  FLLMScope::FLLMScope(local_res8,LLMScope_Name119,false,None,Default,true);
  FMemScope::FMemScope(&local_res10,&LLMScope_Name119,true);
  EVar3 = RHIGetRuntimeBindlessConfiguration(GMaxRHIShaderPlatform);
  this->BindlessConfiguration = EVar3;
  if ((this->_padding_ == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("ParentAdapter != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                         ,0x41,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  this->MaxResourceHeapSize = *(uint *)(this->_padding_ + 200);
  if ((this->_padding_ == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("ParentAdapter != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                         ,0x41,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  uVar7 = *(uint *)(this->_padding_ + 0xcc);
  this->MaxSamplerHeapSize = uVar7;
  if (((this->MaxResourceHeapSize == 0) || (uVar7 == 0)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("MaxResourceHeapSize != 0 && MaxSamplerHeapSize != 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12BindlessDescriptors.cpp"
                         ,0x7e,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (this->BindlessConfiguration != Disabled) {
    uVar7 = 1;
    if (1 < GBindlessResourceDescriptorHeapSize) {
      uVar7 = GBindlessResourceDescriptorHeapSize;
    }
    uVar8 = 1;
    if (1 < GBindlessSamplerDescriptorHeapSize) {
      uVar8 = GBindlessSamplerDescriptorHeapSize;
    }
    if (0x800 < uVar8) {
      if (1 < (byte)LogD3D12RHI._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogD3D12RHI);
      }
      uVar8 = 0x800;
    }
    if (4 < (byte)LogD3D12RHI._0_1_) {
      GetBindlessConfigurationString(this->BindlessConfiguration);
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogD3D12RHI);
    }
    pFVar6 = (FRHIHeapDescriptorAllocator *)0x0;
    local_98.StatIdPtr = (TStatIdData *)StatPtr_STAT_ResourceDescriptorsAllocated;
    if (StatPtr_STAT_ResourceDescriptorsAllocated ==
        (FThreadSafeStaticStat<FStat_STAT_ResourceDescriptorsAllocated>)0x0) {
      pFVar4 = ::FName::FName(&local_res18,"STAT_ResourceDescriptorsAllocated");
      local_98.StatIdPtr =
           FThreadSafeStaticStatBase::DoSetup
                     ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ResourceDescriptorsAllocated,
                      *pFVar4,L"Resource Descriptors Allocated","STATGROUP_RHI","STATCAT_Advanced",
                      L"RHI",true,false,ST_int64,false,false,MCR_Invalid);
    }
    local_90 = StatPtr_STAT_BindlessResourceDescriptorsAllocated;
    if (StatPtr_STAT_BindlessResourceDescriptorsAllocated ==
        (FThreadSafeStaticStat<FStat_STAT_BindlessResourceDescriptorsAllocated>)0x0) {
      pFVar4 = ::FName::FName(&local_res20,"STAT_BindlessResourceDescriptorsAllocated");
      local_90 = (FThreadSafeStaticStat<FStat_STAT_BindlessResourceDescriptorsAllocated>)
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)
                            &StatPtr_STAT_BindlessResourceDescriptorsAllocated,*pFVar4,
                            L"Bindless Resource Descriptors Allocated","STATGROUP_RHI",
                            "STATCAT_Advanced",L"RHI",true,false,ST_int64,false,false,MCR_Invalid);
    }
    this_00 = ::operator_new(0x58);
    pFVar5 = pFVar6;
    if (this_00 != (FRHIHeapDescriptorAllocator *)0x0) {
      local_88 = &local_98;
      uStack_80 = 2;
      local_58._12_4_ = uStack_7c;
      local_58.ArrayNum = 2;
      local_58.DataPtr = local_88;
      pFVar5 = FRHIHeapDescriptorAllocator::FRHIHeapDescriptorAllocator
                         (this_00,CBV|TextureUAV|TextureSRV|TypedBufferUAV|TypedBufferSRV|BufferUAV|
                                  BufferSRV,uVar7,&local_58);
    }
    this->ResourceAllocator = pFVar5;
    FThreadSafeStaticStatInner<FStat_STAT_SamplerDescriptorsAllocated,1>::GetStatId
              ((FThreadSafeStaticStatInner<FStat_STAT_SamplerDescriptorsAllocated,1> *)
               &StatPtr_STAT_SamplerDescriptorsAllocated);
    FThreadSafeStaticStatInner<FStat_STAT_BindlessSamplerDescriptorsAllocated,1>::GetStatId
              ((FThreadSafeStaticStatInner<FStat_STAT_BindlessSamplerDescriptorsAllocated,1> *)
               &StatPtr_STAT_BindlessSamplerDescriptorsAllocated);
    pFVar5 = ::operator_new(0x58);
    if (pFVar5 != (FRHIHeapDescriptorAllocator *)0x0) {
      local_68 = local_78;
      uStack_60 = 2;
      local_48._12_4_ = uStack_5c;
      local_48.ArrayNum = 2;
      local_48.DataPtr = local_68;
      pFVar6 = FRHIHeapDescriptorAllocator::FRHIHeapDescriptorAllocator
                         (pFVar5,Sampler,uVar8,&local_48);
    }
    this->SamplerAllocator = pFVar6;
  }
  FMemScope::~FMemScope(&local_res10);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// ResizeGrowAndAllocate @ 1459d6df0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

TOptional<FRHIDescriptorAllocation> * __thiscall
FD3D12BindlessDescriptorAllocator::ResizeGrowAndAllocate
          (FD3D12BindlessDescriptorAllocator *this,
          TOptional<FRHIDescriptorAllocation> *__return_storage_ptr__,uint param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  longlong *plVar1;
  longlong *plVar2;
  uint uVar3;
  longlong *plVar4;
  FD3D12DescriptorHeap *pFVar5;
  code *pcVar6;
  bool bVar7;
  TOptional<FRHIDescriptorAllocation> *pTVar8;
  FD3D12DescriptorHeap *pFVar9;
  longlong lVar10;
  uint uVar11;
  longlong *plVar12;
  bool bVar13;
  
  bVar13 = -1 < CpuChannel->Enabled;
  if (bVar13) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId221,
               "FD3D12Adapter::BindlessResourceAllocateHandle(GrowHeap)",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12BindlessDescriptors.cpp"
               ,0xdd);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId221);
  }
  lpCriticalSection = &this->ResourceHeapsCS;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  uVar3 = (uint)this->ResourceAllocator->_padding_;
  uVar11 = this->MaxResourceHeapSize;
  if (uVar3 * 2 < this->MaxResourceHeapSize) {
    uVar11 = uVar3 * 2;
  }
  if (uVar3 == uVar11) {
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogD3D12RHI);
  }
  FRHIDescriptorAllocator::ResizeGrowAndAllocate
            ((FRHIDescriptorAllocator *)this->ResourceAllocator,__return_storage_ptr__,uVar11,
             param_1);
  if ((this->_padding_ == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("ParentAdapter != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                         ,0x41,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    pTVar8 = (TOptional<FRHIDescriptorAllocation> *)(*pcVar6)();
    return pTVar8;
  }
  lVar10 = (longlong)(int)GNumExplicitGPUsForRendering;
  plVar12 = (longlong *)(this->_padding_ + 0x800);
  if (((int)GNumExplicitGPUsForRendering < 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    pTVar8 = (TOptional<FRHIDescriptorAllocation> *)(*pcVar6)();
    return pTVar8;
  }
  plVar2 = plVar12 + lVar10;
  while( true ) {
    if (plVar12 == plVar2) {
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      if (bVar13) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      return __return_storage_ptr__;
    }
    plVar4 = *(longlong **)(*plVar12 + 0x740);
    if ((*plVar4 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Parent != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                           ,0x59,L""), bVar7)) break;
    pFVar9 = UE::D3D12BindlessDescriptors::CreateCpuHeap((FD3D12Device *)*plVar4,Standard,uVar11);
    if (pFVar9 != (FD3D12DescriptorHeap *)0x0) {
      LOCK();
      *(int *)&pFVar9->_padding_ = (int)pFVar9->_padding_ + 1;
      UNLOCK();
    }
    pFVar5 = (FD3D12DescriptorHeap *)plVar4[2];
    if ((*plVar4 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Parent != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                           ,0x59,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      pTVar8 = (TOptional<FRHIDescriptorAllocation> *)(*pcVar6)();
      return pTVar8;
    }
    UE::D3D12Descriptors::CopyDescriptors((FD3D12Device *)*plVar4,pFVar9,pFVar5,0,uVar3);
    pFVar5 = (FD3D12DescriptorHeap *)plVar4[2];
    if (pFVar5 != pFVar9) {
      plVar4[2] = (longlong)pFVar9;
      if (pFVar9 != (FD3D12DescriptorHeap *)0x0) {
        LOCK();
        *(int *)&pFVar9->_padding_ = (int)pFVar9->_padding_ + 1;
        UNLOCK();
      }
      if (pFVar5 != (FD3D12DescriptorHeap *)0x0) {
        plVar1 = &pFVar5->_padding_;
        LOCK();
        lVar10 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if (((int)lVar10 == 1) && (plVar1 != (longlong *)0x0)) {
          (**(code **)pFVar5->_padding_)();
        }
      }
    }
    if (-1 < *(int *)((longlong)plVar4 + 0x1d4)) {
      *(undefined2 *)(plVar4 + 6) = 0x101;
    }
    if (pFVar9 != (FD3D12DescriptorHeap *)0x0) {
      plVar4 = &pFVar9->_padding_;
      LOCK();
      lVar10 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if (((int)lVar10 == 1) && (plVar4 != (longlong *)0x0)) {
        (**(code **)pFVar9->_padding_)(pFVar9);
      }
    }
    plVar12 = plVar12 + 1;
  }
  pcVar6 = (code *)swi(3);
  pTVar8 = (TOptional<FRHIDescriptorAllocation> *)(*pcVar6)();
  return pTVar8;
}

