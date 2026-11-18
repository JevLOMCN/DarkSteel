// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 5

// <lambda_invoker_cdecl> @ 147f5c170

void __cdecl
`FUniformExpressionCacheAsyncUpdateScope::FUniformExpressionCacheAsyncUpdateScope'::__l2::<lambda_1>
::<lambda_invoker_cdecl>(FRHICommandList *param_1)

{
  GUniformExpressionCacheAsyncUpdateTask.ReferenceCount =
       GUniformExpressionCacheAsyncUpdateTask.ReferenceCount + 1;
  return;
}

// <lambda_invoker_cdecl> @ 147f5c180

void __cdecl
`FUniformExpressionCacheAsyncUpdateScope::~FUniformExpressionCacheAsyncUpdateScope'::__l2::
<lambda_1>::<lambda_invoker_cdecl>(FRHICommandList *param_1)

{
  atomic<unsigned_int> *paVar1;
  atomic<unsigned_int> aVar2;
  code *pcVar3;
  bool bVar4;
  FTaskHandle FVar5;
  
  if ((GUniformExpressionCacheAsyncUpdateTask.ReferenceCount < 1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ReferenceCount > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialRenderProxy.cpp"
                         ,0x38,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  GUniformExpressionCacheAsyncUpdateTask.ReferenceCount =
       GUniformExpressionCacheAsyncUpdateTask.ReferenceCount + -1;
  if (GUniformExpressionCacheAsyncUpdateTask.ReferenceCount == 0) {
    FVar5.Pimpl.Reference = GUniformExpressionCacheAsyncUpdateTask.Task.Pimpl.Reference;
    if (GUniformExpressionCacheAsyncUpdateTask.Task.Pimpl.Reference != (FTaskBase *)0x0) {
      UE::Tasks::Private::FTaskBase::Wait
                ((FTaskBase *)GUniformExpressionCacheAsyncUpdateTask.Task.Pimpl.Reference);
      FVar5 = GUniformExpressionCacheAsyncUpdateTask.Task;
    }
    GUniformExpressionCacheAsyncUpdateTask.Task.Pimpl.Reference =
         (TRefCountPtr<UE::Tasks::Private::FTaskBase>)(FTaskBase *)0x0;
    if (FVar5.Pimpl.Reference != (FTaskBase *)0x0) {
      LOCK();
      paVar1 = &((FTaskBase *)FVar5.Pimpl.Reference)->RefCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<unsigned_int>)0x1) {
                    /* WARNING: Could not recover jumptable at 0x000147f5c208. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((FTaskBase *)FVar5.Pimpl.Reference)->_padding_)(FVar5.Pimpl.Reference,1);
        return;
      }
    }
  }
  return;
}

// FUniformExpressionCacheAsyncUpdateScope @ 147f667f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FUniformExpressionCacheAsyncUpdateScope * __thiscall
FUniformExpressionCacheAsyncUpdateScope::FUniformExpressionCacheAsyncUpdateScope
          (FUniformExpressionCacheAsyncUpdateScope *this)

{
  code *pcVar1;
  bool bVar2;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar3;
  FUniformExpressionCacheAsyncUpdateScope *pFVar4;
  undefined ***pppuVar5;
  ulonglong uVar6;
  undefined1 auStack_a8 [32];
  code *local_88 [2];
  undefined **local_78;
  code *pcStack_70;
  undefined8 local_68;
  undefined ***local_60;
  undefined1 local_58 [16];
  undefined **local_48;
  code *pcStack_40;
  undefined8 local_38;
  undefined ***local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  local_60 = (undefined ***)0x0;
  local_78 = &
             ___7__TFunction_OwnedObject_P6AXAEAVFRHICommandList___Z_00_0A__Function_Private_Core_UE__6B_
  ;
  pcStack_70 = `FUniformExpressionCacheAsyncUpdateScope::FUniformExpressionCacheAsyncUpdateScope'::
               __l2::<lambda_1>::<lambda_invoker_cdecl>;
  local_88[0] = UE::Core::Private::Function::
                TFunctionRefCaller<void_(__cdecl*)(FRHICommandList_&),void,FRHICommandListImmediate_&>
                ::Call;
  this_00 = FRenderCommandList::GetInstanceTLS();
  if (this_00 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_FUniformExpressionCacheAsyncUpdateScope::FUniformExpressionCacheAsyncUpdateScope_::__l2::TSTR_BeginAsyncUniformExpressionCacheUpdates90>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_88);
  }
  else {
    this_01 = FRenderCommandList::GetRenderThread(this_00);
    local_58._0_8_ = local_88[0];
    local_30 = local_60;
    local_48 = local_78;
    pcStack_40 = pcStack_70;
    local_38 = local_68;
    local_88[0] = (code *)0x0;
    local_28 = 2;
    pFVar3 = (FRenderCommandTag *)
             TRenderCommandTag<`FUniformExpressionCacheAsyncUpdateScope::FUniformExpressionCacheAsyncUpdateScope'::__l2::TSTR_BeginAsyncUniformExpressionCacheUpdates90>
             ::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_58,pFVar3);
    uVar6 = (ulonglong)local_28;
    if (2 < uVar6) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FUniformExpressionCacheAsyncUpdateScope *)(*pcVar1)();
        return pFVar4;
      }
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar6] ==
        UE::Core::Private::
        TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
      if ((code *)local_58._0_8_ != (code *)0x0) {
        pppuVar5 = (undefined ***)(local_58 + 0x10);
        if (local_30 != (undefined ***)0x0) {
          pppuVar5 = local_30;
        }
        (*(code *)(*pppuVar5)[2])();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar6])(local_58);
    }
  }
  if (local_88[0] != (code *)0x0) {
    pppuVar5 = &local_78;
    if (local_60 != (undefined ***)0x0) {
      pppuVar5 = local_60;
    }
    (*(code *)(*pppuVar5)[2])();
  }
  return this;
}

// ~FUniformExpressionCacheAsyncUpdateScope @ 147f69d10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FUniformExpressionCacheAsyncUpdateScope::~FUniformExpressionCacheAsyncUpdateScope
          (FUniformExpressionCacheAsyncUpdateScope *this)

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
  code *pcStack_70;
  undefined8 local_68;
  undefined ***local_60;
  undefined1 local_58 [16];
  undefined **local_48;
  code *pcStack_40;
  undefined8 local_38;
  undefined ***local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  local_60 = (undefined ***)0x0;
  local_78 = &
             ___7__TFunction_OwnedObject_P6AXAEAVFRHICommandList___Z_00_0A__Function_Private_Core_UE__6B_
  ;
  pcStack_70 = `FUniformExpressionCacheAsyncUpdateScope::~FUniformExpressionCacheAsyncUpdateScope'::
               __l2::<lambda_1>::<lambda_invoker_cdecl>;
  local_88[0] = UE::Core::Private::Function::
                TFunctionRefCaller<void_(__cdecl*)(FRHICommandList_&),void,FRHICommandListImmediate_&>
                ::Call;
  this_00 = FRenderCommandList::GetInstanceTLS();
  if (this_00 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_FUniformExpressionCacheAsyncUpdateScope::~FUniformExpressionCacheAsyncUpdateScope_::__l2::TSTR_EndAsyncUniformExpressionCacheUpdates99>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_88);
  }
  else {
    this_01 = FRenderCommandList::GetRenderThread(this_00);
    local_58._0_8_ = local_88[0];
    local_30 = local_60;
    local_48 = local_78;
    pcStack_40 = pcStack_70;
    local_38 = local_68;
    local_88[0] = (code *)0x0;
    local_28 = 2;
    pFVar3 = (FRenderCommandTag *)
             TRenderCommandTag<`FUniformExpressionCacheAsyncUpdateScope::~FUniformExpressionCacheAsyncUpdateScope'::__l2::TSTR_EndAsyncUniformExpressionCacheUpdates99>
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

// WaitForTask @ 147f8e1f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FUniformExpressionCacheAsyncUpdateScope::WaitForTask(void)

{
  EExtendedTaskPriority EVar1;
  Type TVar2;
  FTaskHandle this;
  byte bVar3;
  bool bVar4;
  Type TVar5;
  FTaskGraphInterface *pFVar6;
  Type TVar7;
  bool bVar8;
  LARGE_INTEGER LStackX_10;
  LARGE_INTEGER aLStackX_18 [2];
  LARGE_INTEGER LStack_28;
  undefined8 uStack_20;
  
  this.Pimpl.Reference = GUniformExpressionCacheAsyncUpdateTask.Task.Pimpl.Reference;
  if (GUniformExpressionCacheAsyncUpdateTask.Task.Pimpl.Reference == (FTaskBase *)0x0) {
    return;
  }
  if (GTaskGraphAlwaysWaitWithNamedThreadSupport) {
LAB_141a99947:
    if (*(char *)((longlong)this.Pimpl.Reference + 0xd0) == '\0') {
      bVar8 = CpuChannel->Enabled < 0;
      if (!bVar8) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId210,"FTaskBase::WaitWithNamedThreadsSupport",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Tasks\\TaskPrivate.cpp"
                   ,0xd2);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId210);
      }
      TaskTrace::FWaitingScope::FWaitingScope
                ((FWaitingScope *)&LStackX_10.s,*(ulong64 *)((longlong)this.Pimpl.Reference + 0x50))
      ;
      QueryPerformanceCounter(aLStackX_18);
      LStack_28 = aLStackX_18[0];
      uStack_20 = 0xffffffffffffffff;
      UE::Tasks::Private::FTaskBase::TryRetractAndExecute
                ((FTaskBase *)this.Pimpl.Reference,(FTimeout *)&LStack_28.s,0);
      if (*(char *)((longlong)this.Pimpl.Reference + 0xd0) == '\0') {
        bVar4 = UE::Tasks::Private::TryWaitOnNamedThread((FTaskBase *)this.Pimpl.Reference);
        if (!bVar4) {
          QueryPerformanceCounter(aLStackX_18);
          LStack_28 = aLStackX_18[0];
          uStack_20 = 0xffffffffffffffff;
          UE::Tasks::Private::FTaskBase::WaitImpl
                    ((FTaskBase *)this.Pimpl.Reference,(FTimeout *)&LStack_28.s);
        }
        TaskTrace::FWaitingScope::~FWaitingScope((FWaitingScope *)&LStackX_10.s);
        if (bVar8) {
          return;
        }
      }
      else {
        TaskTrace::FWaitingScope::~FWaitingScope((FWaitingScope *)&LStackX_10.s);
        if (bVar8) {
          return;
        }
      }
      FCpuProfilerTrace::OutputEndEvent();
    }
    return;
  }
  EVar1 = *(EExtendedTaskPriority *)
           ((longlong)GUniformExpressionCacheAsyncUpdateTask.Task.Pimpl.Reference + 0x44);
  if ('\x02' < (char)EVar1) {
    pFVar6 = FTaskGraphInterface::Get();
    bVar3 = (**(code **)((longlong)*pFVar6 + 0x10))(pFVar6,0);
    TVar7 = AnyNormalThreadNormalTask;
    if (bVar3 != AnyNormalThreadNormalTask) {
      TVar7 = (uint)bVar3;
    }
    if (TVar7 < NumThreadPriorities) {
      TVar5 = UE::Tasks::Private::TranslatePriority(EVar1);
      TVar2 = AnyNormalThreadNormalTask;
      if ((TVar5 & AnyNormalThreadNormalTask) != AnyNormalThreadNormalTask) {
        TVar2 = TVar5 & AnyNormalThreadNormalTask;
      }
      if (TVar2 == TVar7) goto LAB_141a99947;
    }
  }
  QueryPerformanceCounter(&LStackX_10);
  LStack_28 = LStackX_10;
  uStack_20 = 0xffffffffffffffff;
  UE::Tasks::Private::FTaskBase::WaitImpl
            ((FTaskBase *)this.Pimpl.Reference,(FTimeout *)&LStack_28.s);
  return;
}

