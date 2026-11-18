// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// FRHIBreadcrumbScope_GameThread<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<31,FName>,FName> @ 147d5e340

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FRHIBreadcrumbScope_GameThread * __thiscall
FRHIBreadcrumbScope_GameThread::
FRHIBreadcrumbScope_GameThread<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<31,FName>,FName>
          (FRHIBreadcrumbScope_GameThread *this,
          tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<31,FName>_const_*,std::tuple<FName>_>
          *param_1)

{
  TRHIBreadcrumbDesc<31,FName> *pTVar1;
  code *pcVar2;
  bool bVar3;
  TOptional<FRHIBreadcrumbScope> *pTVar4;
  FRHIBreadcrumbScope_GameThread *pFVar5;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar6;
  code **ppcVar7;
  ulonglong uVar8;
  undefined1 auStack_b8 [32];
  code *local_98 [2];
  code *local_88 [3];
  code **local_70;
  undefined1 local_68 [40];
  code **local_40;
  byte local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_b8;
  pTVar4 = ::operator_new(0x18);
  if (pTVar4 != (TOptional<FRHIBreadcrumbScope> *)0x0) {
    pTVar4->bIsSet = false;
  }
  this->Event = pTVar4;
  bVar3 = IsInGameThread();
  if (!bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ProfilingDebugging\\RealtimeGPUProfiler.h"
                       ,0x26,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FRHIBreadcrumbScope_GameThread *)(*pcVar2)();
      return pFVar5;
    }
  }
  pcVar2 = (code *)param_1->_padding_;
  pTVar1 = (param_1->_Myfirst)._Val;
  pTVar4 = this->Event;
  local_98[0] = (code *)0x0;
  local_70 = FMemory::Malloc(0x20,8);
  local_70[1] = (code *)pTVar4;
  *local_70 = (code *)&
                      ___7__TFunction_OwnedObject_V<lambda_1>__1_____0V__TRHIBreadcrumbDesc__0BP_VFName___Private_Breadcrumbs_RHI_UE__VFName___FRHIBreadcrumbScope_GameThread__QEAA___QEAV__tuple_PEBV__TRHIBreadcrumbDesc__0BP_VFName___Private_Breadcrumbs_RHI_UE__V__tuple_VFName___std___std___Z__00_00_Function_Private_Core_UE__6B_
  ;
  local_70[2] = pcVar2;
  local_70[3] = (code *)pTVar1;
  if (local_70 != (code **)&DAT_fffffffffffffff8) {
    local_98[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FRHIBreadcrumbScope_GameThread::FRHIBreadcrumbScope_GameThread<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<31,FName>,FName>'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                  ::Call;
  }
  this_00 = FRenderCommandList::GetInstanceTLS();
  if (this_00 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_FRHIBreadcrumbScope_GameThread::FRHIBreadcrumbScope_GameThread<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<31,FName>,FName>_::__l2::TSTR_FRHIBreadcrumbScope_GameThread_Begin40>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_98);
  }
  else {
    this_01 = FRenderCommandList::GetRenderThread(this_00);
    local_68._0_8_ = local_98[0];
    local_40 = local_70;
    local_70 = (code **)0x0;
    local_68._16_8_ = local_88[0];
    local_68._24_8_ = local_88[1];
    local_68._32_8_ = local_88[2];
    local_98[0] = (code *)0x0;
    local_38 = 2;
    pFVar6 = (FRenderCommandTag *)
             TRenderCommandTag<`FRHIBreadcrumbScope_GameThread::FRHIBreadcrumbScope_GameThread<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<31,FName>,FName>'::__l2::TSTR_FRHIBreadcrumbScope_GameThread_Begin40>
             ::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_68,pFVar6);
    uVar8 = (ulonglong)local_38;
    if (2 < uVar8) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FRHIBreadcrumbScope_GameThread *)(*pcVar2)();
        return pFVar5;
      }
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar8] ==
        UE::Core::Private::
        TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
      if ((code *)local_68._0_8_ != (code *)0x0) {
        ppcVar7 = (code **)(local_68 + 0x10);
        if (local_40 != (code **)0x0) {
          ppcVar7 = local_40;
        }
        (**(code **)(*ppcVar7 + 0x10))();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar8])(local_68);
    }
  }
  if (local_98[0] != (code *)0x0) {
    ppcVar7 = local_98 + 2;
    if (local_70 != (code **)0x0) {
      ppcVar7 = local_70;
    }
    (**(code **)(*ppcVar7 + 0x10))();
  }
  return this;
}

// ~FRHIBreadcrumbScope_GameThread @ 147d7b670

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FRHIBreadcrumbScope_GameThread::~FRHIBreadcrumbScope_GameThread
          (FRHIBreadcrumbScope_GameThread *this)

{
  code *pcVar1;
  bool bVar2;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar3;
  undefined ***pppuVar4;
  ulonglong uVar5;
  undefined1 auStack_a8 [32];
  code *local_88 [2];
  undefined **local_78;
  TOptional<FRHIBreadcrumbScope> *pTStack_70;
  undefined8 local_68;
  undefined ***local_60;
  undefined1 local_58 [16];
  undefined **local_48;
  TOptional<FRHIBreadcrumbScope> *pTStack_40;
  undefined8 local_38;
  undefined ***local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ProfilingDebugging\\RealtimeGPUProfiler.h"
                       ,0x34,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_60 = (undefined ***)0x0;
  local_78 = &
             ___7__TFunction_OwnedObject_V<lambda_1>__1___1FRHIBreadcrumbScope_GameThread__QEAA_XZ__00_0A__Function_Private_Core_UE__6B_
  ;
  pTStack_70 = this->Event;
  local_88[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FRHIBreadcrumbScope_GameThread::~FRHIBreadcrumbScope_GameThread'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                ::Call;
  this_00 = FRenderCommandList::GetInstanceTLS();
  if (this_00 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_FRHIBreadcrumbScope_GameThread::~FRHIBreadcrumbScope_GameThread_::__l2::TSTR_FRHIBreadcrumbScope_GameThread_End54>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_88);
  }
  else {
    this_01 = FRenderCommandList::GetRenderThread(this_00);
    local_58._0_8_ = local_88[0];
    local_30 = local_60;
    local_48 = local_78;
    pTStack_40 = pTStack_70;
    local_38 = local_68;
    local_88[0] = (code *)0x0;
    local_28 = 2;
    pFVar3 = (FRenderCommandTag *)
             TRenderCommandTag<`FRHIBreadcrumbScope_GameThread::~FRHIBreadcrumbScope_GameThread'::__l2::TSTR_FRHIBreadcrumbScope_GameThread_End54>
             ::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_58,pFVar3);
    uVar5 = (ulonglong)local_28;
    if (2 < uVar5) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar5] ==
        UE::Core::Private::
        TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
      if ((code *)local_58._0_8_ != (code *)0x0) {
        pppuVar4 = (undefined ***)(local_58 + 0x10);
        if (local_30 != (undefined ***)0x0) {
          pppuVar4 = local_30;
        }
        (*(code *)(*pppuVar4)[2])();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar5])(local_58);
    }
  }
  if (local_88[0] != (code *)0x0) {
    pppuVar4 = &local_78;
    if (local_60 != (undefined ***)0x0) {
      pppuVar4 = local_60;
    }
    (*(code *)(*pppuVar4)[2])();
  }
  return;
}

// FRHIBreadcrumbScope_GameThread<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<0>_> @ 147e8ec00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FRHIBreadcrumbScope_GameThread * __thiscall
FRHIBreadcrumbScope_GameThread::
FRHIBreadcrumbScope_GameThread<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<0>_>
          (FRHIBreadcrumbScope_GameThread *this,
          tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<0>_const_*,std::tuple<>_> *param_1
          )

{
  TRHIBreadcrumbDesc<0> *pTVar1;
  code *pcVar2;
  bool bVar3;
  TOptional<FRHIBreadcrumbScope> *pTVar4;
  FRHIBreadcrumbScope_GameThread *pFVar5;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar6;
  code **ppcVar7;
  ulonglong uVar8;
  undefined1 auStack_a8 [32];
  code *local_88 [2];
  code *local_78 [3];
  code **local_60;
  undefined1 local_58 [40];
  code **local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  pTVar4 = ::operator_new(0x18);
  if (pTVar4 != (TOptional<FRHIBreadcrumbScope> *)0x0) {
    pTVar4->bIsSet = false;
  }
  this->Event = pTVar4;
  bVar3 = IsInGameThread();
  if (!bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ProfilingDebugging\\RealtimeGPUProfiler.h"
                       ,0x26,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FRHIBreadcrumbScope_GameThread *)(*pcVar2)();
      return pFVar5;
    }
  }
  pTVar4 = this->Event;
  pTVar1 = (param_1->_Myfirst)._Val;
  local_88[0] = (code *)0x0;
  local_60 = FMemory::Malloc(0x20,8);
  local_60[1] = (code *)pTVar4;
  *local_60 = (code *)&
                      ___7__TFunction_OwnedObject_V<lambda_1>__1_____0V__TRHIBreadcrumbDesc__0A___V_Private_Breadcrumbs_RHI_UE____V_FRHIBreadcrumbScope_GameThread__QEAA___QEAV__tuple_PEBV__TRHIBreadcrumbDesc__0A___V_Private_Breadcrumbs_RHI_UE__V__tuple___V_std___std___Z__00_00_Function_Private_Core_UE__6B_
  ;
  local_60[3] = (code *)pTVar1;
  if (local_60 != (code **)&DAT_fffffffffffffff8) {
    local_88[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FRHIBreadcrumbScope_GameThread::FRHIBreadcrumbScope_GameThread<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<0>_>'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                  ::Call;
  }
  this_00 = FRenderCommandList::GetInstanceTLS();
  if (this_00 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_FRHIBreadcrumbScope_GameThread::FRHIBreadcrumbScope_GameThread<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<0>_>_::__l2::TSTR_FRHIBreadcrumbScope_GameThread_Begin40>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_88);
  }
  else {
    this_01 = FRenderCommandList::GetRenderThread(this_00);
    local_58._0_8_ = local_88[0];
    local_30 = local_60;
    local_60 = (code **)0x0;
    local_58._16_8_ = local_78[0];
    local_58._24_8_ = local_78[1];
    local_58._32_8_ = local_78[2];
    local_88[0] = (code *)0x0;
    local_28 = 2;
    pFVar6 = (FRenderCommandTag *)
             TRenderCommandTag<`FRHIBreadcrumbScope_GameThread::FRHIBreadcrumbScope_GameThread<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<0>_>'::__l2::TSTR_FRHIBreadcrumbScope_GameThread_Begin40>
             ::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_58,pFVar6);
    uVar8 = (ulonglong)local_28;
    if (2 < uVar8) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FRHIBreadcrumbScope_GameThread *)(*pcVar2)();
        return pFVar5;
      }
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar8] ==
        UE::Core::Private::
        TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
      if ((code *)local_58._0_8_ != (code *)0x0) {
        ppcVar7 = (code **)(local_58 + 0x10);
        if (local_30 != (code **)0x0) {
          ppcVar7 = local_30;
        }
        (**(code **)(*ppcVar7 + 0x10))();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar8])(local_58);
    }
  }
  if (local_88[0] != (code *)0x0) {
    ppcVar7 = local_88 + 2;
    if (local_60 != (code **)0x0) {
      ppcVar7 = local_60;
    }
    (**(code **)(*ppcVar7 + 0x10))();
  }
  return this;
}

// operator() @ 147eaaa90

void __thiscall
`FRHIBreadcrumbScope_GameThread::
FRHIBreadcrumbScope_GameThread<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<0>_>'::__l2::
<lambda_1>::operator()(void *this,FRHICommandListImmediate *param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  FRHIBreadcrumbScope *this_00;
  FRHIBreadcrumbData *pFVar1;
  bool bVar2;
  uint uVar3;
  FRHIBreadcrumbAllocator *pFVar4;
  FRHIBreadcrumbNode *pFVar5;
  
  this_00 = *(FRHIBreadcrumbScope **)this;
  if (*(char *)&this_00[1].RHICmdList != '\0') {
    FRHIBreadcrumbScope::~FRHIBreadcrumbScope(this_00);
  }
  pFVar4 = FRHIComputeCommandList::GetBreadcrumbAllocator((FRHIComputeCommandList *)param_1);
  pFVar1 = *(FRHIBreadcrumbData **)((longlong)this + 0x10);
  if (pFVar1 == (FRHIBreadcrumbData *)0x0) {
    pFVar5 = (FRHIBreadcrumbNode *)0x0;
  }
  else {
    pFVar5 = FMemStackBase::Alloc(&pFVar4->Inner,0x50,8);
    pFVar5->_padding_ = (longlong)&___7FRHIBreadcrumbNode__6B_;
    pFVar5->Parent = FRHIBreadcrumbNode::Sentinel;
    pFVar5->ListLink = (FRHIBreadcrumbNode *)0x0;
    (pFVar5->NextPtrs).Elements[0] = (FRHIBreadcrumbNode *)0x0;
    (pFVar5->NextPtrs).Elements[1] = (FRHIBreadcrumbNode *)0x0;
    pFVar5->Allocator = pFVar4;
    pFVar5->Data = pFVar1;
    pFVar5->TraceCpuSpecId = 0;
    pFVar5->TraceCpuMetadataId = 0;
    LOCK();
    UNLOCK();
    uVar3 = (uint)FRHIBreadcrumbNode::NextID | 0x80000000;
    FRHIBreadcrumbNode::NextID = (atomic<unsigned_int>)((int)FRHIBreadcrumbNode::NextID + 1);
    pFVar5->BeginPipes = (atomic<unsigned_char>)0x0;
    pFVar5->EndPipes = (atomic<unsigned_char>)0x0;
    pFVar5->ID = uVar3;
    pFVar5->_padding_ =
         (longlong)
         &
         ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__0A___V_Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
    ;
    pFVar5[1]._padding_ = (longlong)pFVar1;
    if (*(int *)((longlong)&pFVar1[2]._padding_ + 4) == 0) {
      bVar2 = UE::RHI::GPUProfiler::FGpuProfilerTrace::IsAvailable();
      if (bVar2) {
        lpCriticalSection = (LPCRITICAL_SECTION)(pFVar1 + 1);
        if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::ReportNotNullPtr();
        }
        EnterCriticalSection(lpCriticalSection);
        if (*(int *)((longlong)&pFVar1[2]._padding_ + 4) == 0) {
          uVar3 = FCpuProfilerTrace::OutputEventType
                            (pFVar1->StaticName,(char *)pFVar1->_padding_,(uint)pFVar1->_padding_);
          LOCK();
          *(uint *)((longlong)&pFVar1[2]._padding_ + 4) = uVar3;
          UNLOCK();
        }
        LeaveCriticalSection(lpCriticalSection);
      }
    }
    pFVar5->TraceCpuSpecId = *(uint *)((longlong)&pFVar1[2]._padding_ + 4);
  }
  FRHIBreadcrumbScope::FRHIBreadcrumbScope(this_00,(FRHIComputeCommandList *)param_1,pFVar5);
  *(undefined1 *)&this_00[1].RHICmdList = 1;
  return;
}

