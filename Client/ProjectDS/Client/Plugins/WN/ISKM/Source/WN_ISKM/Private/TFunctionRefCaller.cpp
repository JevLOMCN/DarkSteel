// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WN_ISKM
// Functions: 8

// Call @ 14a844670

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UWN_ISKM_ISKMComponent::SendRenderDynamicData_Concurrent'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  longlong lVar1;
  uint *puVar2;
  code *pcVar3;
  bool bVar4;
  
  lVar1 = *(longlong *)param_1;
  puVar2 = *(uint **)((longlong)param_1 + 8);
  if (puVar2 != *(uint **)(lVar1 + 0x3b0)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InDynamicData == UpdatedDynamicData",
                       "C:\\Workspace\\ProjectDS\\Client\\Plugins\\WN_ISKM\\Source\\WN_ISKM\\Private\\WN_ISKM_Renderer.cpp"
                       ,0x172,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (*(longlong *)(lVar1 + 0x3a8) != 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("DynamicData == nullptr",
                       "C:\\Workspace\\ProjectDS\\Client\\Plugins\\WN_ISKM\\Source\\WN_ISKM\\Private\\WN_ISKM_Renderer.cpp"
                       ,0x173,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  *puVar2 = GFrameNumberRenderThread;
  *(uint **)(lVar1 + 0x3a8) = puVar2;
  return;
}

// Call @ 14a844680

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UWN_ISKM_Profile::BeginDestroy'::__l8::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  UWN_ISKM_Profile::ReleaseRenderResources(*(UWN_ISKM_Profile **)param_1);
  return;
}

// Call @ 14a844690

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UWN_ISKM_ISKMComponent::RefreshRenderingData'::__l9::<lambda_1>,void,int>::Call
          (void *param_1,int *param_2)

{
  `UWN_ISKM_ISKMComponent::RefreshRenderingData'::__l9::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 14a8446a0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UWN_ISKM_Profile::__InitRenderDatas'::__l11::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  UWN_ISKM_Profile::ReleaseRenderResources(*(UWN_ISKM_Profile **)param_1);
  return;
}

// Call @ 14a8446b0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UWN_ISKM_Subsystem::Tick'::__l15::<lambda_1>,void,int>::Call
          (void *param_1,int *param_2)

{
  `UWN_ISKM_Subsystem::Tick'::__l15::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 14a8446c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UWN_ISKM_Profile::__InitRenderDatas'::__l2::<lambda_2>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  UWN_ISKM_Profile::InitRenderResources
            (*(UWN_ISKM_Profile **)param_1,(FRHICommandListBase *)param_2);
  return;
}

// Call @ 14a8446d0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UWN_ISKM_Subsystem::Tick'::__l21::<lambda_2>,void,int>::Call
          (void *param_1,int *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  
  iVar4 = 0;
  iVar3 = *(int *)((longlong)param_1 + 4) * *param_2;
  if (0 < *(int *)((longlong)param_1 + 4)) {
    lVar5 = (longlong)iVar3 * 8;
    do {
      if (*(int *)param_1 <= iVar4 + iVar3) {
        return;
      }
      lVar1 = *(longlong *)(lVar5 + *(longlong *)((longlong)param_1 + 8));
      plVar2 = *(longlong **)(lVar1 + 0x18);
      (**(code **)(*plVar2 + 0x28))(plVar2,lVar1,*(undefined4 *)((longlong)param_1 + 0x10));
      iVar4 = iVar4 + 1;
      lVar5 = lVar5 + 8;
    } while (iVar4 < *(int *)((longlong)param_1 + 4));
  }
  return;
}

// Call @ 14a844750

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UWN_ISKM_Subsystem::Tick'::__l30::<lambda_3>,void,int>::Call
          (void *param_1,int *param_2)

{
  `UWN_ISKM_Subsystem::Tick'::__l30::<lambda_3>::operator()(param_1,*param_2);
  return;
}

