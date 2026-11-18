// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 12

// FRegisterComponentContext @ 1477edf50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FRegisterComponentContext * __thiscall
FRegisterComponentContext::FRegisterComponentContext
          (FRegisterComponentContext *this,UWorld *param_1)

{
  LARGE_INTEGER local_res8 [4];
  
  this->World = param_1;
  QueryPerformanceCounter(local_res8);
  (this->Timeout).StartCycles = (ulong64)local_res8[0];
  (this->Timeout).TimeoutCycles = 0;
  this->IncrementalUpdateAddPrimitiveBatchSize = 0;
  this->IncrementalUpdateNumComponentsToUpdate = 0;
  this->AsyncRegisterLevelContext = (FAsyncRegisterLevelContext *)0x0;
  (this->AddPrimitiveBatches).AllocatorInstance.Data = (UPrimitiveComponent **)0x0;
  (this->AddPrimitiveBatches).ArrayNum = 0;
  (this->AddPrimitiveBatches).ArrayMax = 0;
  (this->SendRenderDynamicDataPrimitives).AllocatorInstance.Data = (UPrimitiveComponent **)0x0;
  (this->SendRenderDynamicDataPrimitives).ArrayNum = 0;
  (this->SendRenderDynamicDataPrimitives).ArrayMax = 0;
  return this;
}

// ~FRegisterComponentContext @ 1477f3c50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FRegisterComponentContext::~FRegisterComponentContext(FRegisterComponentContext *this)

{
  UPrimitiveComponent **ppUVar1;
  code *pcVar2;
  bool bVar3;
  
  Process(this);
  if (this->AsyncRegisterLevelContext != (FAsyncRegisterLevelContext *)0x0) {
    bVar3 = FAsyncRegisterLevelContext::IsRunningAsync(this->AsyncRegisterLevelContext);
    if (bVar3) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("!AsyncRegisterLevelContext || !AsyncRegisterLevelContext->IsRunningAsync()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\ActorComponent.cpp"
                         ,0x8f,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
  }
  ppUVar1 = (this->SendRenderDynamicDataPrimitives).AllocatorInstance.Data;
  if (ppUVar1 != (UPrimitiveComponent **)0x0) {
    TLinearAllocatorBase<FDefaultBlockAllocationTag,0>::Free(ppUVar1);
  }
  ppUVar1 = (this->AddPrimitiveBatches).AllocatorInstance.Data;
  if (ppUVar1 != (UPrimitiveComponent **)0x0) {
    TLinearAllocatorBase<FDefaultBlockAllocationTag,0>::Free(ppUVar1);
    return;
  }
  return;
}

// operator() @ 1477ffb40

void __thiscall
`FRegisterComponentContext::Process'::__l10::<lambda_1>::operator()(void *this,int param_1)

{
  longlong lVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FTaskTagScope local_18;
  
  FTaskTagScope::FTaskTagScope(&local_18,EParallelGameThread);
  lVar1 = *(longlong *)this;
  uVar5 = 0;
  if (param_1 < *(int *)(lVar1 + 0x30)) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  plVar2 = *(longlong **)(*(longlong *)(lVar1 + 0x28) + (longlong)param_1 * 8);
  if (((plVar2 != (longlong *)0x0) && ((*(uint *)(plVar2 + 1) >> 0x1e & 1) == 0)) &&
     ((*(byte *)(plVar2 + 0x13) & 1) != 0)) {
    if (((*(byte *)(plVar2 + 0x13) & 2) == 0) && (**(char **)((longlong)this + 8) != '\0')) {
      (**(code **)(*plVar2 + 0x388))(plVar2,0);
    }
    else if (plVar2[0xa6] == 0) {
      (**(code **)(*(longlong *)**(undefined8 **)((longlong)this + 0x10) + 8))
                ((longlong *)**(undefined8 **)((longlong)this + 0x10),plVar2);
    }
  }
  FTaskTagScope::~FTaskTagScope(&local_18);
  return;
}

// AddPrimitive @ 147804b30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FRegisterComponentContext::AddPrimitive
          (FRegisterComponentContext *this,UPrimitiveComponent *param_1)

{
  int *piVar1;
  UPrimitiveComponent **ppUVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UPrimitiveComponent *local_res10 [3];
  
  local_res10[0] = param_1;
  if (this->AsyncRegisterLevelContext != (FAsyncRegisterLevelContext *)0x0) {
    FAsyncRegisterLevelContext::AddPrimitive(this->AsyncRegisterLevelContext,param_1);
    return;
  }
  ppUVar2 = (this->AddPrimitiveBatches).AllocatorInstance.Data;
  if ((ppUVar2 <= local_res10) && (local_res10 < ppUVar2 + (this->AddPrimitiveBatches).ArrayMax)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = (this->AddPrimitiveBatches).ArrayNum;
  piVar1 = &(this->AddPrimitiveBatches).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<UPrimitiveComponent_*>_>
                      (0x808,&(this->AddPrimitiveBatches).AllocatorInstance,piVar1);
  }
  (this->AddPrimitiveBatches).ArrayNum = iVar5 + 1;
  (this->AddPrimitiveBatches).AllocatorInstance.Data[iVar5] = local_res10[0];
  if ((0 < this->IncrementalUpdateAddPrimitiveBatchSize) &&
     (this->IncrementalUpdateAddPrimitiveBatchSize <= (this->AddPrimitiveBatches).ArrayNum)) {
    Process(this);
  }
  return;
}

// AddSendRenderDynamicData @ 147805310

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FRegisterComponentContext::AddSendRenderDynamicData
          (FRegisterComponentContext *this,UPrimitiveComponent *param_1)

{
  int *piVar1;
  UPrimitiveComponent **ppUVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UPrimitiveComponent *local_res10 [3];
  
  local_res10[0] = param_1;
  if (this->AsyncRegisterLevelContext != (FAsyncRegisterLevelContext *)0x0) {
    FAsyncRegisterLevelContext::AddSendRenderDynamicData(this->AsyncRegisterLevelContext,param_1);
    return;
  }
  ppUVar2 = (this->SendRenderDynamicDataPrimitives).AllocatorInstance.Data;
  if ((ppUVar2 <= local_res10) &&
     (local_res10 < ppUVar2 + (this->SendRenderDynamicDataPrimitives).ArrayMax)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = (this->SendRenderDynamicDataPrimitives).ArrayNum;
  piVar1 = &(this->SendRenderDynamicDataPrimitives).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<UPrimitiveComponent_*>_>
                      (0x808,&(this->SendRenderDynamicDataPrimitives).AllocatorInstance,piVar1);
  }
  (this->SendRenderDynamicDataPrimitives).ArrayNum = iVar5 + 1;
  (this->SendRenderDynamicDataPrimitives).AllocatorInstance.Data[iVar5] = local_res10[0];
  return;
}

// OnIncrementalRegisterComponentsDone @ 147845d40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FRegisterComponentContext::OnIncrementalRegisterComponentsDone(FRegisterComponentContext *this)

{
  bool bVar1;
  
  if (this->AsyncRegisterLevelContext != (FAsyncRegisterLevelContext *)0x0) {
    FAsyncRegisterLevelContext::SetIncrementalRegisterComponentsDone
              (this->AsyncRegisterLevelContext,true);
    FAsyncRegisterLevelContext::Tick(this->AsyncRegisterLevelContext);
    bVar1 = FAsyncRegisterLevelContext::HasRemainingWork(this->AsyncRegisterLevelContext);
    return !bVar1;
  }
  Process(this);
  return true;
}

// Process @ 147855e20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FRegisterComponentContext::Process(FRegisterComponentContext *this)

{
  int *piVar1;
  UPrimitiveComponent **ppUVar2;
  int iVar3;
  UPrimitiveComponent *pUVar4;
  code *pcVar5;
  bool bVar6;
  wchar_t *pwVar7;
  UPrimitiveComponent **ppUVar8;
  bool bVar9;
  <lambda_1> local_res8 [8];
  undefined1 local_res10 [8];
  FSceneInterface *local_res18;
  TArrayView<std::nullptr_t,int> local_68;
  code *local_58;
  FRegisterComponentContext **local_50;
  FRegisterComponentContext *local_48;
  <lambda_1> *local_40;
  FSceneInterface **local_38;
  
  bVar9 = -1 < CpuChannel->Enabled;
  if (bVar9) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId232,"FRegisterComponentContext::Process",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\ActorComponent.cpp"
               ,0xe8);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId232);
  }
  if (this->AsyncRegisterLevelContext == (FAsyncRegisterLevelContext *)0x0) {
    if ((this->AddPrimitiveBatches).ArrayNum != 0) {
      local_res18 = this->World->Scene;
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) <
           `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
           _thread_safe_static_guard_0__) &&
         (_Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                               _thread_safe_static_guard_0__),
         `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
         _thread_safe_static_guard_0__ == -1)) {
        pwVar7 = FCommandLine::Get();
        `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline =
             FParse::Param(pwVar7,L"nullrhi");
        _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                             _thread_safe_static_guard_0__);
      }
      if (((PRIVATE_GIsRunningCommandlet == false) || (PRIVATE_GAllowCommandletRendering != false))
         && (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline
             == false)) {
        local_res8[0] = (<lambda_1>)0x1;
      }
      else {
        local_res8[0] = (<lambda_1>)0x0;
      }
      bVar6 = FApp::ShouldUseThreadingForPerformance();
      local_40 = local_res8;
      local_38 = &local_res18;
      local_58 = UE::Core::Private::Function::
                 TFunctionRefCaller<`FRegisterComponentContext::Process'::__l10::<lambda_1>,void,int>
                 ::Call;
      local_50 = &local_48;
      local_68.DataPtr = (void **)0x0;
      local_68.ArrayNum = 0;
      local_48 = this;
      ParallelForImpl::
      ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
                (L"ParallelFor Task",(this->AddPrimitiveBatches).ArrayNum,1,
                 (TFunctionRef<void___cdecl(int)> *)&local_58,local_res8[0],
                 bVar6 ^ ForceSingleThread,&local_68);
      piVar1 = &(this->AddPrimitiveBatches).ArrayMax;
      (this->AddPrimitiveBatches).ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::
        ReallocTo<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<UPrimitiveComponent_*>_>
                  (8,8,0,&(this->AddPrimitiveBatches).AllocatorInstance,0,piVar1);
      }
    }
    ppUVar8 = (this->SendRenderDynamicDataPrimitives).AllocatorInstance.Data;
    iVar3 = (this->SendRenderDynamicDataPrimitives).ArrayNum;
    ppUVar2 = ppUVar8 + iVar3;
    while( true ) {
      if ((this->SendRenderDynamicDataPrimitives).ArrayNum != iVar3) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<UPrimitiveComponent_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res10);
      }
      if (ppUVar8 == ppUVar2) break;
      pUVar4 = *ppUVar8;
      if ((pUVar4 != (UPrimitiveComponent *)0x0) && ((*(uint *)&pUVar4->field_0x8 >> 0x1e & 1) == 0)
         ) {
        (**(code **)(*(longlong *)pUVar4 + 0x398))();
      }
      ppUVar8 = ppUVar8 + 1;
    }
    piVar1 = &(this->SendRenderDynamicDataPrimitives).ArrayMax;
    (this->SendRenderDynamicDataPrimitives).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::
      ReallocTo<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<UPrimitiveComponent_*>_>
                (8,8,0,&(this->SendRenderDynamicDataPrimitives).AllocatorInstance,0,piVar1);
    }
  }
  else {
    FAsyncRegisterLevelContext::Tick(this->AsyncRegisterLevelContext);
  }
  if (((this->AddPrimitiveBatches).ArrayNum != 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("AddPrimitiveBatches.IsEmpty()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\ActorComponent.cpp"
                         ,0x123,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (((this->SendRenderDynamicDataPrimitives).ArrayNum != 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("SendRenderDynamicDataPrimitives.IsEmpty()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\ActorComponent.cpp"
                         ,0x124,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (bVar9) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// SendRenderDynamicData @ 147862f30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
FRegisterComponentContext::SendRenderDynamicData
          (FRegisterComponentContext *param_1,UPrimitiveComponent *param_2)

{
  int *piVar1;
  UPrimitiveComponent **ppUVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UPrimitiveComponent *local_18 [2];
  
  if (param_1 == (FRegisterComponentContext *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014786300f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)param_2 + 0x398))(param_2);
    return;
  }
  local_18[0] = param_2;
  if (param_1->AsyncRegisterLevelContext != (FAsyncRegisterLevelContext *)0x0) {
    FAsyncRegisterLevelContext::AddSendRenderDynamicData(param_1->AsyncRegisterLevelContext,param_2)
    ;
    return;
  }
  ppUVar2 = (param_1->SendRenderDynamicDataPrimitives).AllocatorInstance.Data;
  if ((ppUVar2 <= local_18) &&
     (local_18 < ppUVar2 + (param_1->SendRenderDynamicDataPrimitives).ArrayMax)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = (param_1->SendRenderDynamicDataPrimitives).ArrayNum;
  piVar1 = &(param_1->SendRenderDynamicDataPrimitives).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<UPrimitiveComponent_*>_>
                      (0x808,&(param_1->SendRenderDynamicDataPrimitives).AllocatorInstance,piVar1);
  }
  (param_1->SendRenderDynamicDataPrimitives).ArrayNum = iVar5 + 1;
  (param_1->SendRenderDynamicDataPrimitives).AllocatorInstance.Data[iVar5] = local_18[0];
  return;
}

// SetAsyncRegisterLevelContext @ 147869260

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FRegisterComponentContext * __thiscall
FRegisterComponentContext::SetAsyncRegisterLevelContext
          (FRegisterComponentContext *this,FAsyncRegisterLevelContext *param_1)

{
  this->AsyncRegisterLevelContext = param_1;
  return this;
}

// SetIncrementalUpdateAddPrimitiveBatchSize @ 14786b2a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FRegisterComponentContext * __thiscall
FRegisterComponentContext::SetIncrementalUpdateAddPrimitiveBatchSize
          (FRegisterComponentContext *this,int param_1)

{
  this->IncrementalUpdateAddPrimitiveBatchSize = param_1;
  return this;
}

// SetIncrementalUpdateNumComponentsToUpdate @ 14786b2b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FRegisterComponentContext * __thiscall
FRegisterComponentContext::SetIncrementalUpdateNumComponentsToUpdate
          (FRegisterComponentContext *this,int param_1)

{
  this->IncrementalUpdateNumComponentsToUpdate = param_1;
  return this;
}

// SetIncrementalUpdateTimeout @ 14786b2c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FRegisterComponentContext * __thiscall
FRegisterComponentContext::SetIncrementalUpdateTimeout
          (FRegisterComponentContext *this,FTimeout *param_1)

{
  ulong64 uVar1;
  
  uVar1 = param_1->TimeoutCycles;
  (this->Timeout).StartCycles = param_1->StartCycles;
  (this->Timeout).TimeoutCycles = uVar1;
  return this;
}

