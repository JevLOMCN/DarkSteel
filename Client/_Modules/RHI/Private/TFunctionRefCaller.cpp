// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHI
// Functions: 42

// Call @ 145c52bc0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::RHI::GPUProfiler::FTable::ToStringInner'::__l19::<lambda_10>,void,`UE::RHI::GPUProfiler::FTable::ToStringInner'::__l2::FColumn>
::Call(void *param_1,FColumn *param_2)

{
  `UE::RHI::GPUProfiler::FTable::ToStringInner'::__l19::<lambda_10>::operator()(param_1,*param_2);
  return;
}

// Call @ 145c52bd0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::RHI::GPUProfiler::FTable::ToStringInner'::__l2::<lambda_11>,void,`UE::RHI::GPUProfiler::FTable::ToStringInner'::__l2::FColumn>
::Call(void *param_1,FColumn *param_2)

{
  wchar_t *_Str;
  ulonglong uVar1;
  size_t sVar2;
  uint uVar3;
  
  uVar1 = (ulonglong)*param_2 >> 0x20;
  uVar3 = (*param_2).Width;
  while (uVar3 != 0) {
    uVar3 = (int)uVar1 - 1;
    _Str = (wchar_t *)**(undefined8 **)((longlong)param_1 + 8);
    sVar2 = wcslen(_Str);
    ::FString::AppendChars(*(FString **)param_1,_Str,(int)sVar2);
    uVar1 = (ulonglong)uVar3;
  }
  return;
}

// Call @ 145c52c30

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`ExecuteOnGameThread<`FPipelineFileCacheManager::BroadcastNewPSOsDelegate'::__l8::<lambda_1>_>'::__l2::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  `FPipelineFileCacheManager::BroadcastNewPSOsDelegate'::__l8::<lambda_1>::operator()(param_1);
  return false;
}

// Call @ 145c52c50

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FPipelineFileCacheRasterizerState::FromString'::__l2::<lambda_1>,void,TStringView<wchar_t>_>
::Call(void *param_1,TStringView<wchar_t> *param_2)

{
  TStringView<wchar_t> local_18;
  
  local_18.DataPtr = param_2->DataPtr;
  local_18.Size = param_2->Size;
  local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
  `FPipelineFileCacheRasterizerState::FromString'::__l2::<lambda_1>::operator()(param_1,&local_18);
  return;
}

// Call @ 145c52c80

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FPipelineCacheFileFormatPSO::GraphicsDescriptor::ShadersFromString'::__l2::<lambda_1>,void,TStringView<wchar_t>_>
::Call(void *param_1,TStringView<wchar_t> *param_2)

{
  TStringView<wchar_t> local_18;
  
  local_18.DataPtr = param_2->DataPtr;
  local_18.Size = param_2->Size;
  local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
  `FPipelineCacheFileFormatPSO::GraphicsDescriptor::ShadersFromString'::__l2::<lambda_1>::operator()
            (param_1,&local_18);
  return;
}

// Call @ 145c52cb0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FPipelineCacheFileFormatPSO::GraphicsDescriptor::StateFromString'::__l2::<lambda_1>,void,TStringView<wchar_t>_>
::Call(void *param_1,TStringView<wchar_t> *param_2)

{
  TStringView<wchar_t> local_18;
  
  local_18.DataPtr = param_2->DataPtr;
  local_18.Size = param_2->Size;
  local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
  `FPipelineCacheFileFormatPSO::GraphicsDescriptor::StateFromString'::__l2::<lambda_1>::operator()
            (param_1,&local_18);
  return;
}

// Call @ 145c52ce0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FPipelineCacheFile::FetchPSODescriptors'::__l4::<lambda_1>,bool,double>::Call
          (void *param_1,double *param_2)

{
  bool bVar1;
  
  bVar1 = `FPipelineCacheFile::FetchPSODescriptors'::__l4::<lambda_1>::operator()(param_1,*param_2);
  return bVar1;
}

// Call @ 145c52cf0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::RHI::GPUProfiler::FTable::ToStringInner'::__l2::<lambda_4>,void,`UE::RHI::GPUProfiler::FTable::ToStringInner'::__l2::FGroup>
::Call(void *param_1,FGroup *param_2)

{
  wchar_t *_Str;
  ulonglong uVar1;
  size_t sVar2;
  uint uVar3;
  
  uVar1 = (ulonglong)*param_2 >> 0x20;
  uVar3 = (*param_2).Width;
  while (uVar3 != 0) {
    uVar3 = (int)uVar1 - 1;
    _Str = (wchar_t *)**(undefined8 **)((longlong)param_1 + 8);
    sVar2 = wcslen(_Str);
    ::FString::AppendChars(*(FString **)param_1,_Str,(int)sVar2);
    uVar1 = (ulonglong)uVar3;
  }
  return;
}

// Call @ 145c52d50

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::RHI::GPUProfiler::FTable::ToStringInner'::__l2::<lambda_5>,void,`UE::RHI::GPUProfiler::FTable::ToStringInner'::__l2::FGroup>
::Call(void *param_1,FGroup *param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = (*param_2).Index;
  uVar2 = (*param_2).Width;
  if (uVar1 != 2) {
    if (uVar1 == 0) {
      `UE::RHI::GPUProfiler::FTable::ToStringInner'::__l2::<lambda_3>::operator()
                (*(void **)((longlong)param_1 + 8),L"Exclusive",uVar2);
      return;
    }
    if (uVar1 == 1) {
      `UE::RHI::GPUProfiler::FTable::ToStringInner'::__l2::<lambda_3>::operator()
                (*(void **)((longlong)param_1 + 8),L"Inclusive",uVar2);
      return;
    }
    if (uVar1 == 2) {
      `UE::RHI::GPUProfiler::FTable::ToStringInner'::__l2::<lambda_3>::operator()
                (*(void **)((longlong)param_1 + 8),L"Events",uVar2);
      return;
    }
  }
  `UE::RHI::GPUProfiler::FTable::ToStringInner'::__l2::<lambda_3>::operator()
            (*(void **)((longlong)param_1 + 8),L"",uVar2);
  return;
}

// Call @ 145c52dd0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FQueueState::<unnamed-type-Profile>::LogTree'::__l41::<lambda_5>,void>
::Call(void *param_1)

{
  code *pcVar1;
  bool bVar2;
  FModuleManager *pFVar3;
  IModuleInterface *pIVar4;
  FText *pFVar5;
  wchar_t *pwVar6;
  FName FStackX_10;
  undefined8 uStack_28;
  longlong lStack_20;
  FString FStack_18;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&ProfileVisualizerModule,L"ProfileVisualizer");
    _Init_thread_footer(&::_TSS0);
  }
  pFVar3 = FModuleManager::Get();
  bVar2 = FModuleManager::IsModuleLoaded(pFVar3,ProfileVisualizerModule);
  if (bVar2) {
    FStackX_10 = ProfileVisualizerModule;
    pFVar3 = FModuleManager::Get();
    bVar2 = FModuleManager::IsModuleLoaded(pFVar3,FStackX_10);
    pwVar6 = L"";
    if (!bVar2) {
      ::FName::ToString(&FStackX_10,&FStack_18);
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("ModuleManager.IsModuleLoaded(ModuleName)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Modules\\ModuleManager.h"
                         ,0x15a,L"Tried to get module interface for unloaded module: \'%s\'");
      if (FStack_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_18.Data.AllocatorInstance.Data);
      }
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    pIVar4 = FModuleManager::GetModule(pFVar3,FStackX_10);
    pcVar1 = *(code **)((longlong)*pIVar4 + 0x40);
    pFVar5 = FText::GetEmpty();
    if (*(int *)((longlong)param_1 + 8) != 0) {
      pwVar6 = *(wchar_t **)param_1;
    }
    uStack_28 = *(undefined8 *)((longlong)param_1 + 0x10);
    lStack_20 = *(longlong *)((longlong)param_1 + 0x18);
    if (lStack_20 != 0) {
      LOCK();
      *(int *)(lStack_20 + 8) = *(int *)(lStack_20 + 8) + 1;
      UNLOCK();
    }
    (*pcVar1)(pIVar4,&uStack_28,pwVar6,pFVar5,&FLinearColor::White);
  }
  return;
}

// Call @ 145c52de0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::RHI::GPUProfiler::FTable::ToStringInner'::__l2::<lambda_6>,void,`UE::RHI::GPUProfiler::FTable::ToStringInner'::__l2::FColumn>
::Call(void *param_1,FColumn *param_2)

{
  `UE::RHI::GPUProfiler::FTable::ToStringInner'::__l2::<lambda_6>::operator()(param_1,*param_2);
  return;
}

// Call @ 145c52df0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::RHI::GPUProfiler::FTable::ToStringInner'::__l2::<lambda_7>,void,`UE::RHI::GPUProfiler::FTable::ToStringInner'::__l2::FColumn>
::Call(void *param_1,FColumn *param_2)

{
  FColumn FVar1;
  wchar_t *pwVar2;
  
  FVar1 = *param_2;
  pwVar2 = RHI::GPUProfiler::FTable::GetColumnHeader
                     (*(FTable **)((longlong)param_1 + 8),FVar1.Index);
  `UE::RHI::GPUProfiler::FTable::ToStringInner'::__l2::<lambda_3>::operator()
            (*(void **)param_1,pwVar2,FVar1.Width);
  return;
}

// Call @ 145c52e30

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::RHI::GPUProfiler::FTable::ToStringInner'::__l2::<lambda_8>,void,`UE::RHI::GPUProfiler::FTable::ToStringInner'::__l2::FColumn>
::Call(void *param_1,FColumn *param_2)

{
  wchar_t *_Str;
  ulonglong uVar1;
  size_t sVar2;
  uint uVar3;
  
  uVar1 = (ulonglong)*param_2 >> 0x20;
  uVar3 = (*param_2).Width;
  while (uVar3 != 0) {
    uVar3 = (int)uVar1 - 1;
    _Str = *(wchar_t **)(*(longlong *)((longlong)param_1 + 8) + 8);
    sVar2 = wcslen(_Str);
    ::FString::AppendChars(*(FString **)param_1,_Str,(int)sVar2);
    uVar1 = (ulonglong)uVar3;
  }
  return;
}

// Call @ 145c52e90

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::RHI::GPUProfiler::FTable::ToStringInner'::__l22::<lambda_9>,void,`UE::RHI::GPUProfiler::FTable::ToStringInner'::__l2::FColumn>
::Call(void *param_1,FColumn *param_2)

{
  wchar_t *_Str;
  ulonglong uVar1;
  size_t sVar2;
  uint uVar3;
  
  uVar1 = (ulonglong)*param_2 >> 0x20;
  uVar3 = (*param_2).Width;
  while (uVar3 != 0) {
    uVar3 = (int)uVar1 - 1;
    _Str = *(wchar_t **)(*(longlong *)((longlong)param_1 + 8) + 8);
    sVar2 = wcslen(_Str);
    ::FString::AppendChars(*(FString **)param_1,_Str,(int)sVar2);
    uVar1 = (ulonglong)uVar3;
  }
  return;
}

// Call @ 145c92d60

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``FRHICommandListExecutor::Submit'::__l56::<lambda_3>::operator()'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  FGenericPlatformMisc::BeginNamedEvent(&FColor::White,"RHI_SubmitToGPU");
  if (CpuChannel->Enabled < 0) {
    FRHICommandListExecutor::FSubmitState::Submit
              (*(FSubmitState **)param_1,(FSubmitArgs *)((longlong)param_1 + 8));
    FGenericPlatformMisc::EndNamedEvent();
    return;
  }
  FCpuProfilerTrace::GetOrCreateSpecId
            (&__CpuProfilerEventSpecId1481,"RHI_SubmitToGPU",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHICommandList.cpp"
             ,0x5c9);
  FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1481);
  FRHICommandListExecutor::FSubmitState::Submit
            (*(FSubmitState **)param_1,(FSubmitArgs *)((longlong)param_1 + 8));
  FCpuProfilerTrace::OutputEndEvent();
  FGenericPlatformMisc::EndNamedEvent();
  return;
}

// Call @ 145c92d70

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FRHICommandListBase::Execute'::__l2::<lambda_1>,void,FCrashContextExtendedWriter_&>
::Call(void *param_1,FCrashContextExtendedWriter *param_2)

{
  if (*(FRHIBreadcrumbNode **)(*(longlong *)param_1 + 0x2f8) != (FRHIBreadcrumbNode *)0x0) {
    FRHIBreadcrumbNode::WriteCrashData
              (*(FRHIBreadcrumbNode **)(*(longlong *)param_1 + 0x2f8),param_2,
               *(wchar_t **)((longlong)param_1 + 8));
    return;
  }
  return;
}

// Call @ 145c92da0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FRHICommandListExecutor::FTranslateState::Finalize'::__l2::<lambda_1>,void>::
Call(void *param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  byte bVar4;
  bool bVar5;
  byte bVar6;
  int iVar7;
  undefined8 uVar8;
  longlong lVar9;
  ForAnyElementType FVar10;
  FScriptContainerElement *pFVar11;
  FScriptContainerElement *pFVar12;
  longlong lVar13;
  bool bVar14;
  undefined8 uStack_38;
  undefined8 uStack_30;
  ForAnyElementType FStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  FGenericPlatformMisc::BeginNamedEvent(&FColor::White,"RHI_Finalize");
  bVar14 = -1 < CpuChannel->Enabled;
  if (bVar14) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1140,"RHI_Finalize",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHICommandList.cpp"
               ,0x474);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1140);
  }
  pFVar2 = *(FScriptContainerElement **)param_1;
  FVar10.Data = (FScriptContainerElement *)0x0;
  FStack_28.Data = (FScriptContainerElement *)0x0;
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_20 = 0;
  if (pFVar2 != pFVar2 + 0x40) {
    pFVar11 = pFVar2 + 0x10;
    pFVar12 = FVar10.Data;
    do {
      iVar7 = (int)pFVar12;
      if (*(longlong *)pFVar11 != 0) {
        if ((FVar10.Data <= pFVar11) && (pFVar11 < FVar10.Data + (longlong)uStack_20._4_4_ * 8)) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar5) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          iVar7 = (int)uStack_20;
          FVar10.Data = FStack_28.Data;
        }
        if (iVar7 == uStack_20._4_4_) {
          iVar7 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&FStack_28,(int *)((longlong)&uStack_20 + 4));
          FVar10.Data = FStack_28.Data;
        }
        uStack_20 = CONCAT44(uStack_20._4_4_,iVar7 + 1U);
        *(longlong *)(FVar10.Data + (longlong)iVar7 * 8) = *(longlong *)pFVar11;
        pFVar12 = (FScriptContainerElement *)(ulonglong)(iVar7 + 1U);
        FVar10.Data = FStack_28.Data;
      }
      pFVar1 = pFVar11 + 0x10;
      pFVar11 = pFVar11 + 0x20;
    } while (pFVar1 != pFVar2 + 0x40);
  }
  if (GDynamicRHI != (FDynamicRHI *)0x0) {
    lVar9 = *(longlong *)param_1;
    uStack_18 = *(undefined8 *)(lVar9 + 0x40);
    if (*(char *)(lVar9 + 0x95) == '\0') {
      (**(code **)(GDynamicRHI->_padding_ + 0x3d8))
                (GDynamicRHI,&FStack_28,&uStack_38,*(undefined1 *)(lVar9 + 0x96));
      bVar6 = 3;
      do {
        bVar4 = ~bVar6 + 1 & bVar6;
        if ((bVar4 == 1) || (bVar4 != 2)) {
          lVar9 = 0x10;
          lVar13 = 0x18;
        }
        else {
          lVar9 = 0x30;
          lVar13 = 0x38;
        }
        if (*(longlong *)(*(longlong *)param_1 + lVar9) != 0) {
          if ((bVar4 == 1) || (uVar8 = uStack_30, bVar4 != 2)) {
            uVar8 = uStack_38;
          }
          *(undefined8 *)(*(longlong *)param_1 + lVar13) = uVar8;
        }
        bVar6 = bVar6 & ~(~bVar6 + 1);
        FVar10.Data = FStack_28.Data;
      } while (bVar6 != 0);
    }
    else {
      uVar8 = (**(code **)(GDynamicRHI->_padding_ + 1000))
                        (GDynamicRHI,*(undefined8 *)(lVar9 + 0x10));
      *(undefined8 *)(lVar9 + 0x18) = uVar8;
      FVar10.Data = FStack_28.Data;
    }
  }
  if (FVar10.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar10.Data);
  }
  if (bVar14) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  return;
}

// Call @ 145c92db0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FBlendStateInitializerRHI::FromString'::__l2::<lambda_1>,void,TStringView<wchar_t>_>
::Call(void *param_1,TStringView<wchar_t> *param_2)

{
  TStringView<wchar_t> local_18;
  
  local_18.DataPtr = param_2->DataPtr;
  local_18.Size = param_2->Size;
  local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
  `FBlendStateInitializerRHI::FromString'::__l2::<lambda_1>::operator()(param_1,&local_18);
  return;
}

// Call @ 145c92de0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FDepthStencilStateInitializerRHI::FromString'::__l2::<lambda_1>,void,TStringView<wchar_t>_>
::Call(void *param_1,TStringView<wchar_t> *param_2)

{
  TStringView<wchar_t> local_18;
  
  local_18.DataPtr = param_2->DataPtr;
  local_18.Size = param_2->Size;
  local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
  `FDepthStencilStateInitializerRHI::FromString'::__l2::<lambda_1>::operator()(param_1,&local_18);
  return;
}

// Call @ 145c92e10

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FVertexElement::FromString'::__l2::<lambda_1>,void,TStringView<wchar_t>_>::Call
          (void *param_1,TStringView<wchar_t> *param_2)

{
  TStringView<wchar_t> local_18;
  
  local_18.DataPtr = param_2->DataPtr;
  local_18.Size = param_2->Size;
  local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
  `FVertexElement::FromString'::__l2::<lambda_1>::operator()(param_1,&local_18);
  return;
}

// Call @ 145c92e40

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FRHICommandListExecutor::FTaskPipe::LaunchTask'::__l2::<lambda_1>,void,enum_ENamedThreads::Type,TRefCountPtr<FBaseGraphTask>_const_&>
::Call(void *param_1,Type *param_2,TRefCountPtr<FBaseGraphTask> *param_3)

{
  code *pcVar1;
  bool bVar2;
  
  if (*param_2 != *(Type *)(*(longlong *)((longlong)param_1 + 8) + 0x70)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("NamedThread == Task->ActualThread",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHICommandList.cpp"
                       ,0x263,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FRHICommandListExecutor::FTaskPipe::Execute
            (*(FTaskPipe **)param_1,*(FTask **)((longlong)param_1 + 8),param_3);
  return;
}

// Call @ 145c92eb0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`RHIGetTrackedResourceStats'::__l2::<lambda_1>,void,int>::Call
          (void *param_1,int *param_2)

{
  `RHIGetTrackedResourceStats'::__l2::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 145c92ec0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TSharedPipelineStateCache<FRHIComputeShader_*,FComputePipelineState_*>::StartAsyncCacheConsolidation'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  int *piVar1;
  int iVar2;
  TSharedPipelineStateCache<FRHIComputeShader_*,FComputePipelineState_*> *this;
  FTaskBase *this_00;
  bool bVar3;
  longlong lVar4;
  bool bVar5;
  FTaskTagScope FStack_28;
  
  FTaskTagScope::FTaskTagScope(&FStack_28,EParallelRhiThread);
  this = *(TSharedPipelineStateCache<FRHIComputeShader_*,FComputePipelineState_*> **)param_1;
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Purple,"RHIAsyncCacheConsolidation");
  bVar5 = -1 < CpuChannel->Enabled;
  if (bVar5) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`private:_void___cdecl_TSharedPipelineStateCache<FRHIComputeShader*___ptr64,FComputePipelineState*___ptr64>::RHIAsyncCacheConsolidation(void)___ptr64'
                ::__l2::__CpuProfilerEventSpecId1959,"RHIAsyncCacheConsolidation",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineStateCache.cpp"
               ,0x7a7);
    FCpuProfilerTrace::OutputBeginEvent
              (`private:_void___cdecl_TSharedPipelineStateCache<FRHIComputeShader*___ptr64,FComputePipelineState*___ptr64>::RHIAsyncCacheConsolidation(void)___ptr64'
               ::__l2::__CpuProfilerEventSpecId1959);
  }
  bVar3 = IsInParallelRHIThread();
  if ((bVar3) || (lVar4 = 0x2b4, GEnablePSOAsyncCacheConsolidation == false)) {
    lVar4 = 0x2b8;
  }
  LOCK();
  piVar1 = (int *)((longlong)&(this->Uncompleted).AllocatorInstance.Data + lVar4);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (-1 < iVar2 + -1) {
    Logging::Private::BasicFatalLog
              ((FStaticBasicLogRecord *)
               &`public:___cdecl_TSharedPipelineStateCache<FRHIComputeShader*___ptr64,FComputePipelineState*___ptr64>::FScopeVerifyDecrement::FScopeVerifyDecrement(int_volatile_(&___ptr64)[2])___ptr64'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  TSharedPipelineStateCache<FRHIComputeShader_*,FComputePipelineState_*>::ConsolidateThreadCache
            (this,this->CurrentMap,this->BackfillMap,&this->NewRenderThreadPipelineStates,false);
  TSet<TTuple<FRHIComputeShader_*,FComputePipelineState_*>,TDefaultMapHashableKeyFuncs<FRHIComputeShader_*,FComputePipelineState_*,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<FRHIComputeShader_*,FComputePipelineState_*>,TDefaultMapHashableKeyFuncs<FRHIComputeShader_*,FComputePipelineState_*,0>,FDefaultSetAllocator>
           *)&this->NewRenderThreadPipelineStates);
  TSharedPipelineStateCache<FRHIComputeShader_*,FComputePipelineState_*>::ConsolidatePipelineStates
            (this,&this->NewRHIThreadPipelineStates,&this->RHIThreadsPipelineStateCache);
  TSharedPipelineStateCache<FRHIComputeShader_*,FComputePipelineState_*>::ConsolidateThreadCache
            (this,this->CurrentMap,this->BackfillMap,&this->NewRHIThreadPipelineStates,true);
  TSharedPipelineStateCache<FRHIComputeShader_*,FComputePipelineState_*>::ManageIncompleteTasks
            (this);
  if (this->bDiscardAndSwap != false) {
    TSet<TTuple<FRHIComputeShader_*,FComputePipelineState_*>,TDefaultMapHashableKeyFuncs<FRHIComputeShader_*,FComputePipelineState_*,0>,FDefaultSetAllocator>
    ::Reset((TSet<TTuple<FRHIComputeShader_*,FComputePipelineState_*>,TDefaultMapHashableKeyFuncs<FRHIComputeShader_*,FComputePipelineState_*,0>,FDefaultSetAllocator>
             *)this->BackfillMap);
    TSharedPipelineStateCache<FRHIComputeShader_*,FComputePipelineState_*>::DiscardAndSwap
              (this,&this->CurrentMap,&this->BackfillMap);
  }
  LOCK();
  piVar1 = (int *)((longlong)&(this->Uncompleted).AllocatorInstance.Data + lVar4);
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  if (*piVar1 != 0) {
    Logging::Private::BasicFatalLog
              ((FStaticBasicLogRecord *)
               &`public:___cdecl_TSharedPipelineStateCache<FRHIComputeShader*___ptr64,FComputePipelineState*___ptr64>::FScopeVerifyDecrement::~FScopeVerifyDecrement(void)___ptr64'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  this_00 = (FTaskBase *)(this->RHICompletionEvent).Reference;
  if (this_00->ExtendedPriority == TaskEvent) {
    LOCK();
    this_00->RefCount = (atomic<unsigned_int>)((int)this_00->RefCount + 1);
    UNLOCK();
  }
  Tasks::Private::FTaskBase::TryLaunch(this_00,0);
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  FTaskTagScope::~FTaskTagScope(&FStack_28);
  return;
}

// Call @ 145c92ed0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TSharedPipelineStateCache<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>::StartAsyncCacheConsolidation'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  int *piVar1;
  int iVar2;
  TSharedPipelineStateCache<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*> *this;
  FTaskBase *this_00;
  bool bVar3;
  longlong lVar4;
  bool bVar5;
  FTaskTagScope FStack_28;
  
  FTaskTagScope::FTaskTagScope(&FStack_28,EParallelRhiThread);
  this = *(TSharedPipelineStateCache<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*> **)
          param_1;
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Purple,"RHIAsyncCacheConsolidation");
  bVar5 = -1 < CpuChannel->Enabled;
  if (bVar5) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`private:_void___cdecl_TSharedPipelineStateCache<FGraphicsPipelineStateInitializer,FGraphicsPipelineState*___ptr64>::RHIAsyncCacheConsolidation(void)___ptr64'
                ::__l2::__CpuProfilerEventSpecId1959,"RHIAsyncCacheConsolidation",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineStateCache.cpp"
               ,0x7a7);
    FCpuProfilerTrace::OutputBeginEvent
              (`private:_void___cdecl_TSharedPipelineStateCache<FGraphicsPipelineStateInitializer,FGraphicsPipelineState*___ptr64>::RHIAsyncCacheConsolidation(void)___ptr64'
               ::__l2::__CpuProfilerEventSpecId1959);
  }
  bVar3 = IsInParallelRHIThread();
  if ((bVar3) || (lVar4 = 0x2b4, GEnablePSOAsyncCacheConsolidation == false)) {
    lVar4 = 0x2b8;
  }
  LOCK();
  piVar1 = (int *)((longlong)&(this->Uncompleted).AllocatorInstance.Data + lVar4);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (-1 < iVar2 + -1) {
    Logging::Private::BasicFatalLog
              ((FStaticBasicLogRecord *)
               &`public:___cdecl_TSharedPipelineStateCache<FGraphicsPipelineStateInitializer,FGraphicsPipelineState*___ptr64>::FScopeVerifyDecrement::FScopeVerifyDecrement(int_volatile_(&___ptr64)[2])___ptr64'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  TSharedPipelineStateCache<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>::
  ConsolidateThreadCache
            (this,this->CurrentMap,this->BackfillMap,&this->NewRenderThreadPipelineStates,false);
  TSet<TTuple<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>,TDefaultMapHashableKeyFuncs<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>,TDefaultMapHashableKeyFuncs<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,0>,FDefaultSetAllocator>
           *)&this->NewRenderThreadPipelineStates);
  TSharedPipelineStateCache<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>::
  ConsolidatePipelineStates
            (this,&this->NewRHIThreadPipelineStates,&this->RHIThreadsPipelineStateCache);
  TSharedPipelineStateCache<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>::
  ConsolidateThreadCache
            (this,this->CurrentMap,this->BackfillMap,&this->NewRHIThreadPipelineStates,true);
  TSharedPipelineStateCache<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>::
  ManageIncompleteTasks(this);
  if (this->bDiscardAndSwap != false) {
    TSet<TTuple<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>,TDefaultMapHashableKeyFuncs<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,0>,FDefaultSetAllocator>
    ::Reset((TSet<TTuple<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>,TDefaultMapHashableKeyFuncs<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,0>,FDefaultSetAllocator>
             *)this->BackfillMap);
    TSharedPipelineStateCache<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>::
    DiscardAndSwap(this,&this->CurrentMap,&this->BackfillMap);
  }
  LOCK();
  piVar1 = (int *)((longlong)&(this->Uncompleted).AllocatorInstance.Data + lVar4);
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  if (*piVar1 != 0) {
    Logging::Private::BasicFatalLog
              ((FStaticBasicLogRecord *)
               &`public:___cdecl_TSharedPipelineStateCache<FGraphicsPipelineStateInitializer,FGraphicsPipelineState*___ptr64>::FScopeVerifyDecrement::~FScopeVerifyDecrement(void)___ptr64'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  this_00 = (FTaskBase *)(this->RHICompletionEvent).Reference;
  if (this_00->ExtendedPriority == TaskEvent) {
    LOCK();
    this_00->RefCount = (atomic<unsigned_int>)((int)this_00->RefCount + 1);
    UNLOCK();
  }
  Tasks::Private::FTaskBase::TryLaunch(this_00,0);
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  FTaskTagScope::~FTaskTagScope(&FStack_28);
  return;
}

// Call @ 145c92ee0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TSharedPipelineStateCache<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>::StartAsyncCacheConsolidation'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  int *piVar1;
  int iVar2;
  TSharedPipelineStateCache<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*> *this;
  FTaskBase *this_00;
  bool bVar3;
  longlong lVar4;
  bool bVar5;
  FTaskTagScope FStack_28;
  
  FTaskTagScope::FTaskTagScope(&FStack_28,EParallelRhiThread);
  this = *(TSharedPipelineStateCache<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>
           **)param_1;
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Purple,"RHIAsyncCacheConsolidation");
  bVar5 = -1 < CpuChannel->Enabled;
  if (bVar5) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`private:_void___cdecl_TSharedPipelineStateCache<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState*___ptr64>::RHIAsyncCacheConsolidation(void)___ptr64'
                ::__l2::__CpuProfilerEventSpecId1959,"RHIAsyncCacheConsolidation",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineStateCache.cpp"
               ,0x7a7);
    FCpuProfilerTrace::OutputBeginEvent
              (`private:_void___cdecl_TSharedPipelineStateCache<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState*___ptr64>::RHIAsyncCacheConsolidation(void)___ptr64'
               ::__l2::__CpuProfilerEventSpecId1959);
  }
  bVar3 = IsInParallelRHIThread();
  if ((bVar3) || (lVar4 = 0x2b4, GEnablePSOAsyncCacheConsolidation == false)) {
    lVar4 = 0x2b8;
  }
  LOCK();
  piVar1 = (int *)((longlong)&(this->Uncompleted).AllocatorInstance.Data + lVar4);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (-1 < iVar2 + -1) {
    Logging::Private::BasicFatalLog
              ((FStaticBasicLogRecord *)
               &`public:___cdecl_TSharedPipelineStateCache<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState*___ptr64>::FScopeVerifyDecrement::FScopeVerifyDecrement(int_volatile_(&___ptr64)[2])___ptr64'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  TSharedPipelineStateCache<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>::
  ConsolidateThreadCache
            (this,this->CurrentMap,this->BackfillMap,&this->NewRenderThreadPipelineStates,false);
  TSet<TTuple<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>,TDefaultMapHashableKeyFuncs<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>,TDefaultMapHashableKeyFuncs<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,0>,FDefaultSetAllocator>
           *)&this->NewRenderThreadPipelineStates);
  TSharedPipelineStateCache<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>::
  ConsolidatePipelineStates
            (this,&this->NewRHIThreadPipelineStates,&this->RHIThreadsPipelineStateCache);
  TSharedPipelineStateCache<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>::
  ConsolidateThreadCache
            (this,this->CurrentMap,this->BackfillMap,&this->NewRHIThreadPipelineStates,true);
  TSharedPipelineStateCache<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>::
  ManageIncompleteTasks(this);
  if (this->bDiscardAndSwap != false) {
    TSet<TTuple<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>,TDefaultMapHashableKeyFuncs<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,0>,FDefaultSetAllocator>
    ::Reset((TSet<TTuple<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>,TDefaultMapHashableKeyFuncs<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,0>,FDefaultSetAllocator>
             *)this->BackfillMap);
    TSharedPipelineStateCache<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>::
    DiscardAndSwap(this,&this->CurrentMap,&this->BackfillMap);
  }
  LOCK();
  piVar1 = (int *)((longlong)&(this->Uncompleted).AllocatorInstance.Data + lVar4);
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  if (*piVar1 != 0) {
    Logging::Private::BasicFatalLog
              ((FStaticBasicLogRecord *)
               &`public:___cdecl_TSharedPipelineStateCache<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState*___ptr64>::FScopeVerifyDecrement::~FScopeVerifyDecrement(void)___ptr64'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  this_00 = (FTaskBase *)(this->RHICompletionEvent).Reference;
  if (this_00->ExtendedPriority == TaskEvent) {
    LOCK();
    this_00->RefCount = (atomic<unsigned_int>)((int)this_00->RefCount + 1);
    UNLOCK();
  }
  Tasks::Private::FTaskBase::TryLaunch(this_00,0);
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  FTaskTagScope::~FTaskTagScope(&FStack_28);
  return;
}

// Call @ 145c92ef0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`InternalAsyncCompilePipelineState<FCompileComputePipelineStateTask,FComputePipelineStateInitializer>'::__l7::<lambda_1>,void,FPSOPrecacheAsyncTask_const_*>
::Call(void *param_1,FPSOPrecacheAsyncTask **param_2)

{
  EPSOPrecacheCompileType local_res8 [32];
  
  local_res8[0] = GetPSOCompileTypeFromQueuePri((EQueuedWorkPriority)(*param_2)->_padding_);
  TCompilePipelineStateTaskBase<FCompileComputePipelineStateTask,FComputePipelineStateInitializer>::
  CompilePSO(*(TCompilePipelineStateTaskBase<FCompileComputePipelineStateTask,FComputePipelineStateInitializer>
               **)param_1,local_res8);
  return;
}

// Call @ 145c92f30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`InternalAsyncCompilePipelineState<FCompileGraphicsPipelineStateTask,FGraphicsPipelineStateInitializer>'::__l7::<lambda_1>,void,FPSOPrecacheAsyncTask_const_*>
::Call(void *param_1,FPSOPrecacheAsyncTask **param_2)

{
  EPSOPrecacheCompileType local_res8 [32];
  
  local_res8[0] = GetPSOCompileTypeFromQueuePri((EQueuedWorkPriority)(*param_2)->_padding_);
  TCompilePipelineStateTaskBase<FCompileGraphicsPipelineStateTask,FGraphicsPipelineStateInitializer>
  ::CompilePSO(*(TCompilePipelineStateTaskBase<FCompileGraphicsPipelineStateTask,FGraphicsPipelineStateInitializer>
                 **)param_1,local_res8);
  return;
}

// Call @ 145c92f70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FRHICommandListExecutor::FSubmitState::Dispatch'::__l10::<lambda_1>,void>::Call
          (void *param_1)

{
  FGenericPlatformMisc::BeginNamedEvent(&FColor::White,"RHI_Translate");
  if (CpuChannel->Enabled < 0) {
    FRHICommandListExecutor::FTranslateState::Translate
              (*(FTranslateState **)param_1,*(FRHICommandListBase **)((longlong)param_1 + 8));
    FGenericPlatformMisc::EndNamedEvent();
    return;
  }
  FCpuProfilerTrace::GetOrCreateSpecId
            (&__CpuProfilerEventSpecId1042,"RHI_Translate",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHICommandList.cpp"
             ,0x412);
  FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1042);
  FRHICommandListExecutor::FTranslateState::Translate
            (*(FTranslateState **)param_1,*(FRHICommandListBase **)((longlong)param_1 + 8));
  FCpuProfilerTrace::OutputEndEvent();
  FGenericPlatformMisc::EndNamedEvent();
  return;
}

// Call @ 145c92f80

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TSharedPipelineStateCache<FRHIComputeShader_*,FComputePipelineState_*>::ExecuteImmediateCommand<`TSharedPipelineStateCache<FRHIComputeShader_*,FComputePipelineState_*>::ProcessDelayedCleanup'::__l2::<lambda_1>_>'::__l7::<lambda_2>,void>
::Call(void *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  void *pvVar3;
  code *pcVar4;
  bool bVar5;
  undefined8 *puVar6;
  void *pvVar7;
  void *pvStack_18;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  bVar5 = IsInRenderingThread();
  if (!bVar5) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                       ,0x1594,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pvVar3 = *(void **)param_1;
  pvVar7 = (void *)0x0;
  *(undefined8 *)param_1 = 0;
  uVar1 = *(undefined4 *)((longlong)param_1 + 8);
  uVar2 = *(undefined4 *)((longlong)param_1 + 0xc);
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  pvStack_18 = pvVar3;
  uStack_10 = uVar1;
  uStack_c = uVar2;
  if (((GRHICommandList.bLatchedBypass == false) ||
      ((GRHICommandList.CommandListImmediate._667_1_ & 0x20) == 0)) &&
     (GRHICommandList.CommandListImmediate._100_1_ == '\0')) {
    puVar6 = FMemStackBase::Alloc((FMemStackBase *)&GRHICommandList.CommandListImmediate,0x28,8);
    GRHICommandList.CommandListImmediate._96_4_ = GRHICommandList.CommandListImmediate._96_4_ + 1;
    *(undefined8 **)GRHICommandList.CommandListImmediate._48_8_ = puVar6;
    GRHICommandList.CommandListImmediate._48_8_ = puVar6 + 1;
    *(undefined8 *)GRHICommandList.CommandListImmediate._48_8_ = 0;
    *puVar6 = &
              ___7__TRHILambdaCommand_VFRHICommandListImmediate__V<lambda_1>__1___R<lambda_2>__6____ExecuteImmediateCommand_V<lambda_1>__1__ProcessDelayedCleanup___TSharedPipelineStateCache_PEAVFRHIComputeShader__PEAVFComputePipelineState____AEAAXXZ____TSharedPipelineStateCache_PEAVFRHIComputeShader__PEAVFComputePipelineState____AEAAX__QEAV2_1__ProcessDelayedCleanup_4_AEAAXXZ__Z_QEAA_XZ___6B_
    ;
    puVar6[2] = pvVar3;
    *(undefined4 *)(puVar6 + 3) = uVar1;
    *(undefined4 *)((longlong)puVar6 + 0x1c) = uVar2;
    puVar6[4] = L"TRHILambdaCommand";
  }
  else {
    `TSharedPipelineStateCache<FRHIComputeShader_*,FComputePipelineState_*>::ProcessDelayedCleanup'
    ::__l2::<lambda_1>::operator()(&pvStack_18,&GRHICommandList.CommandListImmediate);
    pvVar7 = pvStack_18;
  }
  if (pvVar7 != (void *)0x0) {
    FMemory::Free(pvVar7);
  }
  return;
}

// Call @ 145c92f90

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TSharedPipelineStateCache<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>::ExecuteImmediateCommand<`TSharedPipelineStateCache<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>::ProcessDelayedCleanup'::__l2::<lambda_1>_>'::__l7::<lambda_2>,void>
::Call(void *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  void *pvVar3;
  code *pcVar4;
  bool bVar5;
  undefined8 *puVar6;
  void *pvVar7;
  void *pvStack_18;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  bVar5 = IsInRenderingThread();
  if (!bVar5) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                       ,0x1594,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pvVar3 = *(void **)param_1;
  pvVar7 = (void *)0x0;
  *(undefined8 *)param_1 = 0;
  uVar1 = *(undefined4 *)((longlong)param_1 + 8);
  uVar2 = *(undefined4 *)((longlong)param_1 + 0xc);
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  pvStack_18 = pvVar3;
  uStack_10 = uVar1;
  uStack_c = uVar2;
  if (((GRHICommandList.bLatchedBypass == false) ||
      ((GRHICommandList.CommandListImmediate._667_1_ & 0x20) == 0)) &&
     (GRHICommandList.CommandListImmediate._100_1_ == '\0')) {
    puVar6 = FMemStackBase::Alloc((FMemStackBase *)&GRHICommandList.CommandListImmediate,0x28,8);
    GRHICommandList.CommandListImmediate._96_4_ = GRHICommandList.CommandListImmediate._96_4_ + 1;
    *(undefined8 **)GRHICommandList.CommandListImmediate._48_8_ = puVar6;
    GRHICommandList.CommandListImmediate._48_8_ = puVar6 + 1;
    *(undefined8 *)GRHICommandList.CommandListImmediate._48_8_ = 0;
    *puVar6 = &
              ___7__TRHILambdaCommand_VFRHICommandListImmediate__V<lambda_1>__1___R<lambda_2>__6____ExecuteImmediateCommand_V<lambda_1>__1__ProcessDelayedCleanup___TSharedPipelineStateCache_VFGraphicsPipelineStateInitializer__PEAVFGraphicsPipelineState____AEAAXXZ____TSharedPipelineStateCache_VFGraphicsPipelineStateInitializer__PEAVFGraphicsPipelineState____AEAAX__QEAV2_1__ProcessDelayedCleanup_4_AEAAXXZ__Z_QEAA_XZ___6B_
    ;
    puVar6[2] = pvVar3;
    *(undefined4 *)(puVar6 + 3) = uVar1;
    *(undefined4 *)((longlong)puVar6 + 0x1c) = uVar2;
    puVar6[4] = L"TRHILambdaCommand";
  }
  else {
    `TSharedPipelineStateCache<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>::
    ProcessDelayedCleanup'::__l2::<lambda_1>::operator()
              (&pvStack_18,&GRHICommandList.CommandListImmediate);
    pvVar7 = pvStack_18;
  }
  if (pvVar7 != (void *)0x0) {
    FMemory::Free(pvVar7);
  }
  return;
}

// Call @ 145c92fa0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TSharedPipelineStateCache<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>::ExecuteImmediateCommand<`TSharedPipelineStateCache<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>::ProcessDelayedCleanup'::__l2::<lambda_1>_>'::__l7::<lambda_2>,void>
::Call(void *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  void *pvVar3;
  code *pcVar4;
  bool bVar5;
  undefined8 *puVar6;
  void *pvVar7;
  void *pvStack_18;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  bVar5 = IsInRenderingThread();
  if (!bVar5) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                       ,0x1594,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pvVar3 = *(void **)param_1;
  pvVar7 = (void *)0x0;
  *(undefined8 *)param_1 = 0;
  uVar1 = *(undefined4 *)((longlong)param_1 + 8);
  uVar2 = *(undefined4 *)((longlong)param_1 + 0xc);
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  pvStack_18 = pvVar3;
  uStack_10 = uVar1;
  uStack_c = uVar2;
  if (((GRHICommandList.bLatchedBypass == false) ||
      ((GRHICommandList.CommandListImmediate._667_1_ & 0x20) == 0)) &&
     (GRHICommandList.CommandListImmediate._100_1_ == '\0')) {
    puVar6 = FMemStackBase::Alloc((FMemStackBase *)&GRHICommandList.CommandListImmediate,0x28,8);
    GRHICommandList.CommandListImmediate._96_4_ = GRHICommandList.CommandListImmediate._96_4_ + 1;
    *(undefined8 **)GRHICommandList.CommandListImmediate._48_8_ = puVar6;
    GRHICommandList.CommandListImmediate._48_8_ = puVar6 + 1;
    *(undefined8 *)GRHICommandList.CommandListImmediate._48_8_ = 0;
    *puVar6 = &
              ___7__TRHILambdaCommand_VFRHICommandListImmediate__V<lambda_1>__1___R<lambda_2>__6____ExecuteImmediateCommand_V<lambda_1>__1__ProcessDelayedCleanup___TSharedPipelineStateCache_VFWorkGraphPipelineStateInitializer__PEAVFWorkGraphPipelineState____AEAAXXZ____TSharedPipelineStateCache_VFWorkGraphPipelineStateInitializer__PEAVFWorkGraphPipelineState____AEAAX__QEAV2_1__ProcessDelayedCleanup_4_AEAAXXZ__Z_QEAA_XZ___6B_
    ;
    puVar6[2] = pvVar3;
    *(undefined4 *)(puVar6 + 3) = uVar1;
    *(undefined4 *)((longlong)puVar6 + 0x1c) = uVar2;
    puVar6[4] = L"TRHILambdaCommand";
  }
  else {
    `TSharedPipelineStateCache<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>::
    ProcessDelayedCleanup'::__l2::<lambda_1>::operator()
              (&pvStack_18,&GRHICommandList.CommandListImmediate);
    pvVar7 = pvStack_18;
  }
  if (pvVar7 != (void *)0x0) {
    FMemory::Free(pvVar7);
  }
  return;
}

// Call @ 145c92fb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TSharedPipelineStateCache<FRHIComputeShader_*,FComputePipelineState_*>::ExecuteImmediateCommand<`TSharedPipelineStateCache<FRHIComputeShader_*,FComputePipelineState_*>::DiscardAndSwap'::__l5::<lambda_1>_>'::__l7::<lambda_2>,void>
::Call(void *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined1 auStack_88 [32];
  undefined1 auStack_68 [72];
  undefined4 uStack_20;
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStack_88;
  bVar2 = IsInRenderingThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                       ,0x1594,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TMap<FRHIComputeShader_*,FComputePipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRHIComputeShader_*,FComputePipelineState_*,0>_>
  ::
  TMap<FRHIComputeShader_*,FComputePipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRHIComputeShader_*,FComputePipelineState_*,0>_>
            ((TMap<FRHIComputeShader_*,FComputePipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRHIComputeShader_*,FComputePipelineState_*,0>_>
              *)auStack_68,param_1);
  if (((GRHICommandList.bLatchedBypass == false) ||
      ((GRHICommandList.CommandListImmediate._667_1_ & 0x20) == 0)) &&
     (GRHICommandList.CommandListImmediate._100_1_ == '\0')) {
    puVar3 = FMemStackBase::Alloc((FMemStackBase *)&GRHICommandList.CommandListImmediate,0x68,8);
    GRHICommandList.CommandListImmediate._96_4_ = GRHICommandList.CommandListImmediate._96_4_ + 1;
    *(undefined8 **)GRHICommandList.CommandListImmediate._48_8_ = puVar3;
    GRHICommandList.CommandListImmediate._48_8_ = puVar3 + 1;
    *(undefined8 *)GRHICommandList.CommandListImmediate._48_8_ = 0;
    *puVar3 = &
              ___7__TRHILambdaCommand_VFRHICommandListImmediate__V<lambda_1>__1___R<lambda_2>__6____ExecuteImmediateCommand_V<lambda_1>__4__DiscardAndSwap___TSharedPipelineStateCache_PEAVFRHIComputeShader__PEAVFComputePipelineState____AEAAHAEAPEAV__TMap_PEAVFRHIComputeShader__PEAVFComputePipelineState__VFDefaultSetAllocator__U__TDefaultMapHashableKeyFuncs_PEAVFRHIComputeShader__PEAVFComputePipelineState___0A_____0_Z____TSharedPipelineStateCache_PEAVFRHIComputeShader__PEAVFComputePipelineState____AEAAX__QEAV2_4__DiscardAndSwap_4_AEAAHAEAPEAV__TMap_PEAVFRHIComputeShader__PEAVFComputePipelineState__VFDefaultSetAllocator__U__TDefaultMapHashableKeyFuncs_PEAVFRHIComputeShader__PEAVFComputePipelineState___0A_____0_Z__Z_QEAA_XZ___6B_
    ;
    TMap<FRHIComputeShader_*,FComputePipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRHIComputeShader_*,FComputePipelineState_*,0>_>
    ::
    TMap<FRHIComputeShader_*,FComputePipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRHIComputeShader_*,FComputePipelineState_*,0>_>
              ((TMap<FRHIComputeShader_*,FComputePipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRHIComputeShader_*,FComputePipelineState_*,0>_>
                *)(puVar3 + 2),
               (TMap<FRHIComputeShader_*,FComputePipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRHIComputeShader_*,FComputePipelineState_*,0>_>
                *)auStack_68);
    puVar3[0xc] = L"TRHILambdaCommand";
  }
  else {
    `TSharedPipelineStateCache<FRHIComputeShader_*,FComputePipelineState_*>::DiscardAndSwap'::__l5::
    <lambda_1>::operator()(auStack_68,&GRHICommandList.CommandListImmediate);
  }
  uStack_20 = 0;
  if ((void *)auStack_68._64_8_ != (void *)0x0) {
    FMemory::Free((void *)auStack_68._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FRHIComputeShader_*,FComputePipelineState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FRHIComputeShader_*,FComputePipelineState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FRHIComputeShader_*,FComputePipelineState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)auStack_68);
  return;
}

// Call @ 145c92fc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TSharedPipelineStateCache<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>::ExecuteImmediateCommand<`TSharedPipelineStateCache<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>::DiscardAndSwap'::__l5::<lambda_1>_>'::__l7::<lambda_2>,void>
::Call(void *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined1 auStack_88 [32];
  undefined1 auStack_68 [72];
  undefined4 uStack_20;
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStack_88;
  bVar2 = IsInRenderingThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                       ,0x1594,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TMap<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,0>_>
  ::
  TMap<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,0>_>
            ((TMap<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,0>_>
              *)auStack_68,param_1);
  if (((GRHICommandList.bLatchedBypass == false) ||
      ((GRHICommandList.CommandListImmediate._667_1_ & 0x20) == 0)) &&
     (GRHICommandList.CommandListImmediate._100_1_ == '\0')) {
    puVar3 = FMemStackBase::Alloc((FMemStackBase *)&GRHICommandList.CommandListImmediate,0x68,8);
    GRHICommandList.CommandListImmediate._96_4_ = GRHICommandList.CommandListImmediate._96_4_ + 1;
    *(undefined8 **)GRHICommandList.CommandListImmediate._48_8_ = puVar3;
    GRHICommandList.CommandListImmediate._48_8_ = puVar3 + 1;
    *(undefined8 *)GRHICommandList.CommandListImmediate._48_8_ = 0;
    *puVar3 = &
              ___7__TRHILambdaCommand_VFRHICommandListImmediate__V<lambda_1>__1___R<lambda_2>__6____ExecuteImmediateCommand_V<lambda_1>__4__DiscardAndSwap___TSharedPipelineStateCache_VFGraphicsPipelineStateInitializer__PEAVFGraphicsPipelineState____AEAAHAEAPEAV__TMap_VFGraphicsPipelineStateInitializer__PEAVFGraphicsPipelineState__VFDefaultSetAllocator__U__TDefaultMapHashableKeyFuncs_VFGraphicsPipelineStateInitializer__PEAVFGraphicsPipelineState___0A_____0_Z____TSharedPipelineStateCache_VFGraphicsPipelineStateInitializer__PEAVFGraphicsPipelineState____AEAAX__QEAV2_4__DiscardAndSwap_4_AEAAHAEAPEAV__TMap_VFGraphicsPipelineStateInitializer__PEAVFGraphicsPipelineState__VFDefaultSetAllocator__U__TDefaultMapHashableKeyFuncs_VFGraphicsPipelineStateInitializer__PEAVFGraphicsPipelineState___0A_____0_Z__Z_QEAA_XZ___6B_
    ;
    TMap<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,0>_>
    ::
    TMap<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,0>_>
              ((TMap<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,0>_>
                *)(puVar3 + 2),
               (TMap<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,0>_>
                *)auStack_68);
    puVar3[0xc] = L"TRHILambdaCommand";
  }
  else {
    `TSharedPipelineStateCache<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>::
    DiscardAndSwap'::__l5::<lambda_1>::operator()(auStack_68,&GRHICommandList.CommandListImmediate);
  }
  uStack_20 = 0;
  if ((void *)auStack_68._64_8_ != (void *)0x0) {
    FMemory::Free((void *)auStack_68._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)auStack_68);
  return;
}

// Call @ 145c92fd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TSharedPipelineStateCache<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>::ExecuteImmediateCommand<`TSharedPipelineStateCache<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>::DiscardAndSwap'::__l5::<lambda_1>_>'::__l7::<lambda_2>,void>
::Call(void *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined1 auStack_88 [32];
  TSet<TTuple<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>,TDefaultMapHashableKeyFuncs<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,0>,FDefaultSetAllocator>
  TStack_68;
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStack_88;
  bVar2 = IsInRenderingThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                       ,0x1594,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TSet<TTuple<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>,TDefaultMapHashableKeyFuncs<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,0>,FDefaultSetAllocator>
  ::
  TSet<TTuple<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>,TDefaultMapHashableKeyFuncs<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,0>,FDefaultSetAllocator>
            (&TStack_68,param_1);
  if (((GRHICommandList.bLatchedBypass == false) ||
      ((GRHICommandList.CommandListImmediate._667_1_ & 0x20) == 0)) &&
     (GRHICommandList.CommandListImmediate._100_1_ == '\0')) {
    puVar3 = FMemStackBase::Alloc((FMemStackBase *)&GRHICommandList.CommandListImmediate,0x68,8);
    GRHICommandList.CommandListImmediate._96_4_ = GRHICommandList.CommandListImmediate._96_4_ + 1;
    *(undefined8 **)GRHICommandList.CommandListImmediate._48_8_ = puVar3;
    GRHICommandList.CommandListImmediate._48_8_ = puVar3 + 1;
    *(undefined8 *)GRHICommandList.CommandListImmediate._48_8_ = 0;
    *puVar3 = &
              ___7__TRHILambdaCommand_VFRHICommandListImmediate__V<lambda_1>__1___R<lambda_2>__6____ExecuteImmediateCommand_V<lambda_1>__4__DiscardAndSwap___TSharedPipelineStateCache_VFWorkGraphPipelineStateInitializer__PEAVFWorkGraphPipelineState____AEAAHAEAPEAV__TMap_VFWorkGraphPipelineStateInitializer__PEAVFWorkGraphPipelineState__VFDefaultSetAllocator__U__TDefaultMapHashableKeyFuncs_VFWorkGraphPipelineStateInitializer__PEAVFWorkGraphPipelineState___0A_____0_Z____TSharedPipelineStateCache_VFWorkGraphPipelineStateInitializer__PEAVFWorkGraphPipelineState____AEAAX__QEAV2_4__DiscardAndSwap_4_AEAAHAEAPEAV__TMap_VFWorkGraphPipelineStateInitializer__PEAVFWorkGraphPipelineState__VFDefaultSetAllocator__U__TDefaultMapHashableKeyFuncs_VFWorkGraphPipelineStateInitializer__PEAVFWorkGraphPipelineState___0A_____0_Z__Z_QEAA_XZ___6B_
    ;
    TSet<TTuple<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>,TDefaultMapHashableKeyFuncs<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,0>,FDefaultSetAllocator>
    ::
    TSet<TTuple<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>,TDefaultMapHashableKeyFuncs<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,0>,FDefaultSetAllocator>
              ((TSet<TTuple<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>,TDefaultMapHashableKeyFuncs<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,0>,FDefaultSetAllocator>
                *)(puVar3 + 2),&TStack_68);
    puVar3[0xc] = L"TRHILambdaCommand";
  }
  else {
    `TSharedPipelineStateCache<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>::
    DiscardAndSwap'::__l5::<lambda_1>::operator()(&TStack_68,&GRHICommandList.CommandListImmediate);
  }
  TStack_68.HashSize = 0;
  if (TStack_68.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)TStack_68.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&TStack_68.Elements);
  return;
}

// Call @ 145c92fe0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FRHICommandListExecutor::Submit'::__l53::<lambda_2>,void>::Call(void *param_1)

{
  FGenericPlatformMisc::BeginNamedEvent(&FColor::White,"RHI_Dispatch");
  if (CpuChannel->Enabled < 0) {
    FRHICommandListExecutor::FSubmitState::Dispatch
              (*(FSubmitState **)param_1,*(FRHICommandListBase **)((longlong)param_1 + 8));
    FGenericPlatformMisc::EndNamedEvent();
    return;
  }
  FCpuProfilerTrace::GetOrCreateSpecId
            (&__CpuProfilerEventSpecId1435,"RHI_Dispatch",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHICommandList.cpp"
             ,0x59b);
  FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1435);
  FRHICommandListExecutor::FSubmitState::Dispatch
            (*(FSubmitState **)param_1,*(FRHICommandListBase **)((longlong)param_1 + 8));
  FCpuProfilerTrace::OutputEndEvent();
  FGenericPlatformMisc::EndNamedEvent();
  return;
}

// Call @ 145c92ff0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FRHICommandListExecutor::Submit'::__l56::<lambda_3>,void>::Call(void *param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  byte bVar5;
  byte bVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  code **ppcVar9;
  undefined8 *puVar10;
  TAtomic<ENamedThreads::Type> TVar11;
  char cVar12;
  code *pcVar13;
  code *pcVar14;
  bool bVar15;
  undefined1 auStack_b8 [32];
  code *pcStack_98;
  code *pcStack_90;
  code *pcStack_88;
  code *pcStack_80;
  char cStack_78;
  longlong lStack_70;
  code *apcStack_68 [2];
  code *apcStack_58 [3];
  code **ppcStack_40;
  ulonglong uStack_38;
  
  uStack_38 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FGenericPlatformMisc::BeginNamedEvent(&FColor::White,"RHI_FinalizeAndSubmit");
  bVar15 = -1 < CpuChannel->Enabled;
  if (bVar15) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1461,"RHI_FinalizeAndSubmit",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHICommandList.cpp"
               ,0x5b5);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1461);
  }
  FRHICommandListExecutor::FSubmitState::FinalizeCurrent(*(FSubmitState **)((longlong)param_1 + 8));
  if (pcStack_98 != (code *)0x0) {
    LOCK();
    pcVar13 = pcStack_98 + 0x30;
    iVar2 = *(int *)pcVar13;
    *(int *)pcVar13 = *(int *)pcVar13 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (pcStack_98 != (code *)0x0)) {
      (*(code *)**(undefined8 **)pcStack_98)(pcStack_98,1);
    }
  }
  bVar6 = 3;
  cStack_78 = '\0';
  do {
    bVar5 = ~bVar6 + 1 & bVar6;
    if ((bVar5 == 1) || (bVar5 != 2)) {
      pcVar13 = (code *)GRHICommandList.Breadcrumbs.GPU._0_8_;
      if ((bVar5 == 1) || (bVar5 != 2)) {
        ppcVar9 = &pcStack_90;
      }
      else {
        ppcVar9 = &pcStack_88;
      }
    }
    else {
      ppcVar9 = &pcStack_88;
      pcVar13 = (code *)GRHICommandList.Breadcrumbs.GPU._48_8_;
    }
    *ppcVar9 = pcVar13;
    bVar6 = bVar6 & ~(~bVar6 + 1);
  } while (bVar6 != 0);
  cVar12 = cStack_78;
  if (((code **)((longlong)param_1 + 0x10) != &pcStack_80) &&
     (*(char *)((longlong)param_1 + 0x18) != '\0')) {
    pcStack_80 = *(code **)((longlong)param_1 + 0x10);
    cVar12 = '\x01';
  }
  lVar3 = *(longlong *)param_1;
  pcVar13 = *(code **)((longlong)param_1 + 8);
  pcVar14 = pcStack_98;
  if (cVar12 != '\0') {
    pcVar14 = pcStack_80;
  }
  apcStack_68[0] = (code *)0x0;
  ppcStack_40 = FMemory::Malloc(0x30,8);
  ppcStack_40[1] = pcVar13;
  *ppcStack_40 = (code *)&TFunction_OwnedObject<``FRHICommandListExecutor::Submit'::`56'::<lambda_3>::operator()'::`2'::<lambda_1>,0,1>
                          ::_vftable_;
  ppcStack_40[2] = pcStack_90;
  ppcStack_40[3] = pcStack_88;
  *(char *)(ppcStack_40 + 5) = cVar12;
  if (cVar12 != '\0') {
    ppcStack_40[4] = pcVar14;
  }
  if (ppcStack_40 != (code **)&DAT_fffffffffffffff8) {
    apcStack_68[0] =
         TFunctionRefCaller<``FRHICommandListExecutor::Submit'::__l56::<lambda_3>::operator()'::__l2::<lambda_1>,void>
         ::Call;
  }
  TVar11 = ENamedThreads::FRenderThreadStatics::RenderThread_Local;
  if ((*(char *)(lVar3 + 0x30) == '\0') && (GIsRunningRHIInSeparateThread_InternalUseOnly != false))
  {
    TVar11 = (TAtomic<ENamedThreads::Type>)0x0;
  }
  FRHICommandListExecutor::FTaskPipe::Enqueue
            ((FTaskPipe *)(lVar3 + 0x1c00),(Type)TVar11,
             (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
              *)(*(longlong *)((longlong)param_1 + 8) + 0x18),
             (TFunction<void___cdecl(void)> *)apcStack_68);
  if (apcStack_68[0] != (code *)0x0) {
    ppcVar9 = apcStack_68 + 2;
    if (ppcStack_40 != (code **)0x0) {
      ppcVar9 = ppcStack_40;
    }
    (**(code **)(*ppcVar9 + 0x10))();
  }
  lVar3 = *(longlong *)param_1;
  if (*(FTask **)(lVar3 + 0x1c00) != (FTask *)0x0) {
    FRHICommandListExecutor::FTaskPipe::FTask::Release(*(FTask **)(lVar3 + 0x1c00));
    *(undefined8 *)(lVar3 + 0x1c00) = 0;
  }
  puVar10 = *(undefined8 **)(lVar3 + 0x1c08);
  if (puVar10 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar10 + 6) = *(int *)(puVar10 + 6) + 1;
    UNLOCK();
  }
  plVar7 = (longlong *)(*(longlong *)param_1 + 0x1c28);
  if (plVar7 == &lStack_70) {
    if (puVar10 == (undefined8 *)0x0) goto LAB_145c8f0a5;
    LOCK();
    piVar1 = (int *)(puVar10 + 6);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 != 1) goto LAB_145c8f0a5;
    puVar8 = (undefined8 *)*puVar10;
  }
  else {
    puVar4 = (undefined8 *)*plVar7;
    *plVar7 = (longlong)puVar10;
    if (puVar4 == (undefined8 *)0x0) goto LAB_145c8f0a5;
    LOCK();
    piVar1 = (int *)(puVar4 + 6);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 != 1) goto LAB_145c8f0a5;
    puVar8 = (undefined8 *)*puVar4;
    puVar10 = puVar4;
  }
  (*(code *)*puVar8)(puVar10,1);
LAB_145c8f0a5:
  if (bVar15) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  return;
}

// Call @ 145cd7200

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

TRefCountPtr<FRHITexture> __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FValidationRHI::FRHIValidationTextureInitializer::FRHIValidationTextureInitializer'::__l2::<lambda_1>,TRefCountPtr<FRHITexture>,FRHICommandListBase_&>
::Call(void *param_1,FRHICommandListBase *param_2)

{
  `FValidationRHI::FRHIValidationTextureInitializer::FRHIValidationTextureInitializer'::__l2::
  <lambda_1>::operator()(param_2,param_1);
  return (TRefCountPtr<FRHITexture>)param_1;
}

// Call @ 145cd7230

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`RHIValidation::FOperation::Replay'::__l4::<lambda_2>,void,RHIValidation::FSubresourceState_&,RHIValidation::FSubresourceIndex_const_&>
::Call(void *param_1,FSubresourceState *param_2,FSubresourceIndex *param_3)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)param_1;
  RHIValidation::FSubresourceState::BeginTransition
            (param_2,*(FResource **)(lVar1 + 8),param_3,(FState *)(lVar1 + 0x28),
             (FState *)(lVar1 + 0x30),*(EResourceTransitionFlags *)(lVar1 + 0x38),
             *(ERHITransitionCreateFlags *)(lVar1 + 0x3c),**(ERHIPipeline **)((longlong)param_1 + 8)
             ,(TRHIPipelineArray<unsigned___int64> *)
              (*(ERHIPipeline **)((longlong)param_1 + 8) + 0x10),*(void **)(lVar1 + 0x40));
  return;
}

// Call @ 145cd7290

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`RHIValidation::FOperation::Replay'::__l4::<lambda_3>,void,RHIValidation::FSubresourceState_&,RHIValidation::FSubresourceIndex_const_&>
::Call(void *param_1,FSubresourceState *param_2,FSubresourceIndex *param_3)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)param_1;
  RHIValidation::FSubresourceState::EndTransition
            (param_2,*(FResource **)(lVar1 + 8),param_3,(FState *)(lVar1 + 0x28),
             (FState *)(lVar1 + 0x30),*(EResourceTransitionFlags *)(lVar1 + 0x38),
             **(ERHIPipeline **)((longlong)param_1 + 8),
             *(undefined8 *)(*(ERHIPipeline **)((longlong)param_1 + 8) + 8),*(void **)(lVar1 + 0x40)
            );
  return;
}

// Call @ 145cd72f0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`RHIValidation::FOperation::Replay'::__l116::<lambda_4>,void,RHIValidation::FSubresourceState_&,RHIValidation::FSubresourceIndex_const_&>
::Call(void *param_1,FSubresourceState *param_2,FSubresourceIndex *param_3)

{
  RHIValidation::FSubresourceState::AssertTracked
            (param_2,*(FResource **)(*(longlong *)param_1 + 8),param_3,
             (FState *)(*(longlong *)param_1 + 0x10),**(ERHIPipeline **)((longlong)param_1 + 8));
  return;
}

// Call @ 145cd7320

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`RHIValidation::FOperation::Replay'::__l4::<lambda_5>,void,RHIValidation::FSubresourceState_&,RHIValidation::FSubresourceIndex_const_&>
::Call(void *param_1,FSubresourceState *param_2,FSubresourceIndex *param_3)

{
  RHIValidation::FSubresourceState::Assert
            (param_2,*(FResource **)(*(longlong *)param_1 + 8),param_3,
             (FState *)(*(longlong *)param_1 + 0x28),
             *(bool *)(*(longlong *)((longlong)param_1 + 8) + 0x38));
  return;
}

// Call @ 145cd7360

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`RHIValidation::FOperation::Replay'::__l4::<lambda_6>,void,RHIValidation::FSubresourceState_&,RHIValidation::FSubresourceIndex_const_&>
::Call(void *param_1,FSubresourceState *param_2,FSubresourceIndex *param_3)

{
  char cVar1;
  char cVar2;
  FResource *pFVar3;
  ForAnyElementType FVar4;
  longlong lVar5;
  FString FStack_38;
  FString FStack_28;
  
  pFVar3 = *(FResource **)(*(longlong *)param_1 + 8);
  cVar1 = *(char *)(*(longlong *)param_1 + 0x28);
  cVar2 = **(char **)((longlong)param_1 + 8);
  if (pFVar3->LoggingMode != None) {
    ::FString::PrintfImpl(&FStack_38,L"Allow: %s");
    FVar4.Data = (FScriptContainerElement *)L"";
    if (FStack_38.Data.ArrayNum != 0) {
      FVar4.Data = FStack_38.Data.AllocatorInstance.Data;
    }
    RHIValidation::Log(pFVar3,param_3,(void *)0x0,(wchar_t *)0x0,L"UAVOverlap",(wchar_t *)FVar4.Data
                      );
    if (FStack_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_38.Data.AllocatorInstance.Data);
    }
  }
  if ((cVar2 == '\x01') || (lVar5 = 0x4c, cVar2 != '\x02')) {
    lVar5 = 0x24;
  }
  if ((&(param_2->LastTransitionFences).field_0x0)[lVar5] == cVar1) {
    if (((param_3->MipIndex == -1) && (param_3->ArraySlice == -1)) && (param_3->PlaneIndex == -1)) {
      ::FString::PrintfImpl(&FStack_38,L"\"%s\" (0x%p) (Whole Resource)");
    }
    else {
      ::FString::PrintfImpl(&FStack_38,L"\"%s\" (0x%p) (Mip %d, Slice %d, Plane %d)");
    }
    ::FString::PrintfImpl
              (&FStack_28,
               L"RHI validation failed: UAV overlap mismatch:\n\n--------------------------------------------------------------------\n              RHI Resource Transition Validation Error              \n--------------------------------------------------------------------\n\n\nMismatched call to %sUAVOverlap(FRHIUnorderedAccessView*) for the resource %s.\n\n    --- Ensure all calls to RHICmdList.BeginUAVOverlap() are paired with a call to RHICmdList.EndUAVOverlap().\n\n\n--------------------------------------------------------------------\n\n\n"
              );
    if (FStack_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_38.Data.AllocatorInstance.Data);
    }
    FVar4.Data = (FScriptContainerElement *)L"";
    if (FStack_28.Data.ArrayNum != 0) {
      FVar4.Data = FStack_28.Data.AllocatorInstance.Data;
    }
    FValidationRHI::ReportValidationFailure((wchar_t *)FVar4.Data);
    if (FStack_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_28.Data.AllocatorInstance.Data);
    }
  }
  (&(param_2->LastTransitionFences).field_0x0)[lVar5] = cVar1;
  return;
}

