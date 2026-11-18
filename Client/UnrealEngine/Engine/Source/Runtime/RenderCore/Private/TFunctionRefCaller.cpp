// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 60

// Call @ 145d13c20

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FRDGResourceDumpContext::Finish'::__l17::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  if ((*(FRDGResourceDumpContext **)param_1)->bStream != false) {
    FRDGResourceDumpContext::WaitAndReleaseStagingResources
              (*(FRDGResourceDumpContext **)param_1,param_2);
  }
  FRHICommandListImmediate::SubmitAndBlockUntilGPUIdle(param_2);
  GRHIValidateBufferSourceCopy = true;
  return;
}

// Call @ 145d13c60

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FRDGResourceDumpContext::LandCompletedResources'::__l28::<lambda_1>,void>::Call
          (void *param_1)

{
  code *pcVar1;
  bool bVar2;
  TArray<unsigned_char,TSizedDefaultAllocator<64>_> TStack_28;
  
  if (*(longlong *)(*(longlong *)((longlong)param_1 + 8) + 0x28) == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Staging->WriteToDiskComplete",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\DumpGPU.cpp"
                       ,0x70b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (**(int **)((longlong)param_1 + 8) != 3) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Staging->Status == FStagingResourceStatus::WritingToDisk",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\DumpGPU.cpp"
                       ,0x70c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TStack_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  TStack_28.ArrayNum = 0;
  TStack_28.ArrayMax = 0;
  FRDGResourceDumpContext::PostProcessTexture
            (*(FRDGResourceDumpContext **)param_1,
             (FTextureSubresourceDumpDesc *)(*(longlong *)((longlong)param_1 + 8) + 0x30),
             *(void **)((longlong)param_1 + 0x10),*(int *)((longlong)param_1 + 0x18),
             *(int *)((longlong)param_1 + 0x1c),&TStack_28);
  FRDGResourceDumpContext::DumpResourceBinaryToFile
            (*(FRDGResourceDumpContext **)param_1,(uchar *)TStack_28.AllocatorInstance.Data,
             TStack_28.ArrayNum,(FString *)(*(longlong *)((longlong)param_1 + 8) + 8));
  **(undefined4 **)((longlong)param_1 + 8) = 4;
  (**(code **)(**(longlong **)(*(longlong *)((longlong)param_1 + 8) + 0x28) + 0x10))();
  if (TStack_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(TStack_28.AllocatorInstance.Data);
  }
  return;
}

// Call @ 145d13c70

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::RenderCore::DumpGPU::TickEndFrame'::__l29::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  if (3 < (byte)LogDumpGPU._0_1_) {
    Logging::Private::BasicLog<4>
              ((FStaticBasicLogRecord *)&PTR_u_Remaining_frame_151130268,
               (FLogCategoryBase *)&LogDumpGPU);
  }
  if (GRDGResourceDumpContext_RenderThread->bStream != false) {
    FRDGResourceDumpContext::LandCompletedResources(GRDGResourceDumpContext_RenderThread,param_2);
    return;
  }
  return;
}

// Call @ 145d13cc0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FRDGResourceDumpContext::Start'::__l73::<lambda_1>,void>::Call(void *param_1)

{
  FRDGResourceDumpContext::DumpRenderingCVarsToCSV(*(FRDGResourceDumpContext **)param_1);
  return;
}

// Call @ 145d13cd0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FRDGResourceDumpContext::LandCompletedResources'::__l51::<lambda_2>,void>::Call
          (void *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (*(longlong *)(*(longlong *)((longlong)param_1 + 8) + 0x28) == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Staging->WriteToDiskComplete",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\DumpGPU.cpp"
                       ,0x739,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (**(int **)((longlong)param_1 + 8) != 3) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Staging->Status == FStagingResourceStatus::WritingToDisk",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\DumpGPU.cpp"
                       ,0x73a,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FRDGResourceDumpContext::DumpResourceBinaryToFile
            (*(FRDGResourceDumpContext **)param_1,*(uchar **)((longlong)param_1 + 0x10),
             (longlong)*(int *)(*(longlong *)((longlong)param_1 + 8) + 0x30),
             (FString *)(*(longlong *)((longlong)param_1 + 8) + 8));
  **(undefined4 **)((longlong)param_1 + 8) = 4;
                    /* WARNING: Could not recover jumptable at 0x000145d0e6bb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(*(longlong *)((longlong)param_1 + 8) + 0x28) + 0x10))();
  return;
}

// Call @ 145d13ce0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FRDGResourceDumpContext::Start'::__l76::<lambda_2>,void>::Call(void *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  int iVar3;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> *pTVar4;
  FString *pFVar5;
  wchar_t *pwVar6;
  ForAnyElementType FVar7;
  wchar_t *pwVar8;
  uint uVar9;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> TStack_58;
  FString FStack_48;
  FString FStack_38;
  FString FStack_28;
  
  pTVar4 = &::FString::FString(&FStack_28,L"Extras")->Data;
  TArray<wchar_t,TSizedDefaultAllocator<32>_>::TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
            (&TStack_58,pTVar4,0xf - (uint)(pTVar4->ArrayNum != 0));
  ::FString::PathAppend((FString *)&TStack_58,L"GPUDumpViewer",0xd);
  pFVar5 = FPaths::EngineDir(&FStack_38);
  ::FString::ConcatFF(&FStack_48,pFVar5,(FString *)&TStack_58);
  if (FStack_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_38.Data.AllocatorInstance.Data);
  }
  if (TStack_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(TStack_58.AllocatorInstance.Data);
  }
  if (FStack_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_28.Data.AllocatorInstance.Data);
  }
  iVar3 = FStack_48.Data.ArrayNum;
  FVar7.Data = FStack_48.Data.AllocatorInstance.Data;
  plVar1 = *(longlong **)((longlong)param_1 + 8);
  TStack_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  TStack_58.ArrayNum = FStack_48.Data.ArrayNum;
  pcVar2 = *(code **)(*plVar1 + 0x208);
  uVar9 = (0x14 - (uint)(FStack_48.Data.ArrayNum != 0)) + FStack_48.Data.ArrayNum;
  if ((int)uVar9 < FStack_48.Data.ArrayNum) {
                    /* WARNING: Subroutine does not return */
    OnInvalidArrayNum((ulonglong)uVar9);
  }
  pTVar4 = &TStack_58;
  ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,uVar9,0,&pTVar4->AllocatorInstance,FStack_48.Data.ArrayNum,&TStack_58.ArrayMax);
  if (iVar3 != 0) {
    memcpy(TStack_58.AllocatorInstance.Data,FVar7.Data,(longlong)iVar3 * 2);
  }
  ::FString::PathAppend((FString *)&TStack_58,L"GPUDumpViewer.html",0x12);
  pwVar8 = L"";
  FVar7.Data = (FScriptContainerElement *)L"";
  if (TStack_58.ArrayNum != 0) {
    FVar7.Data = TStack_58.AllocatorInstance.Data;
  }
  pFVar5 = ::operator/(&FStack_28,(FString *)(*(longlong *)param_1 + 0x18),L"GPUDumpViewer.html");
  if ((pFVar5->Data).ArrayNum == 0) {
    pwVar6 = L"";
  }
  else {
    pwVar6 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
  }
  (*pcVar2)(plVar1,pwVar6,FVar7.Data,0,(ulonglong)pTVar4 & 0xffffffffffffff00);
  if (FStack_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_28.Data.AllocatorInstance.Data);
  }
  if (TStack_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(TStack_58.AllocatorInstance.Data);
  }
  iVar3 = FStack_48.Data.ArrayNum;
  FVar7.Data = FStack_48.Data.AllocatorInstance.Data;
  plVar1 = *(longlong **)((longlong)param_1 + 8);
  TStack_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  TStack_58.ArrayNum = FStack_48.Data.ArrayNum;
  pcVar2 = *(code **)(*plVar1 + 0x208);
  uVar9 = (0x17 - (uint)(FStack_48.Data.ArrayNum != 0)) + FStack_48.Data.ArrayNum;
  if (FStack_48.Data.ArrayNum <= (int)uVar9) {
    pTVar4 = &TStack_58;
    ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,uVar9,0,&pTVar4->AllocatorInstance,FStack_48.Data.ArrayNum,&TStack_58.ArrayMax);
    if (iVar3 != 0) {
      memcpy(TStack_58.AllocatorInstance.Data,FVar7.Data,(longlong)iVar3 * 2);
    }
    ::FString::PathAppend((FString *)&TStack_58,L"OpenGPUDumpViewer.bat",0x15);
    FVar7.Data = (FScriptContainerElement *)L"";
    if (TStack_58.ArrayNum != 0) {
      FVar7.Data = TStack_58.AllocatorInstance.Data;
    }
    pFVar5 = ::operator/(&FStack_28,(FString *)(*(longlong *)param_1 + 0x18),
                         L"OpenGPUDumpViewer.bat");
    if ((pFVar5->Data).ArrayNum == 0) {
      pwVar6 = L"";
    }
    else {
      pwVar6 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
    }
    (*pcVar2)(plVar1,pwVar6,FVar7.Data,0,(ulonglong)pTVar4 & 0xffffffffffffff00);
    if (FStack_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_28.Data.AllocatorInstance.Data);
    }
    if (TStack_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(TStack_58.AllocatorInstance.Data);
    }
    FVar7.Data = FStack_48.Data.AllocatorInstance.Data;
    plVar1 = *(longlong **)((longlong)param_1 + 8);
    TStack_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TStack_58.ArrayNum = FStack_48.Data.ArrayNum;
    pcVar2 = *(code **)(*plVar1 + 0x208);
    uVar9 = (0x16 - (uint)(FStack_48.Data.ArrayNum != 0)) + FStack_48.Data.ArrayNum;
    if (FStack_48.Data.ArrayNum <= (int)uVar9) {
      pTVar4 = &TStack_58;
      ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,uVar9,0,&pTVar4->AllocatorInstance,FStack_48.Data.ArrayNum,&TStack_58.ArrayMax)
      ;
      if (FStack_48.Data.ArrayNum != 0) {
        memcpy(TStack_58.AllocatorInstance.Data,FVar7.Data,(longlong)FStack_48.Data.ArrayNum * 2);
      }
      ::FString::PathAppend((FString *)&TStack_58,L"OpenGPUDumpViewer.sh",0x14);
      FVar7.Data = (FScriptContainerElement *)L"";
      if (TStack_58.ArrayNum != 0) {
        FVar7.Data = TStack_58.AllocatorInstance.Data;
      }
      pFVar5 = ::operator/(&FStack_28,(FString *)(*(longlong *)param_1 + 0x18),
                           L"OpenGPUDumpViewer.sh");
      if ((pFVar5->Data).ArrayNum != 0) {
        pwVar8 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
      }
      (*pcVar2)(plVar1,pwVar8,FVar7.Data,0,(ulonglong)pTVar4 & 0xffffffffffffff00);
      if (FStack_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_28.Data.AllocatorInstance.Data);
      }
      if (TStack_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(TStack_58.AllocatorInstance.Data);
      }
      if (FStack_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_48.Data.AllocatorInstance.Data);
      }
      return;
    }
                    /* WARNING: Subroutine does not return */
    OnInvalidArrayNum((ulonglong)uVar9);
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar9);
}

// Call @ 145d13cf0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FRDGResourceDumpContext::Start'::__l2::<lambda_3>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = IsInRenderingThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\DumpGPU.cpp"
                       ,0x8b8,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  GRDGResourceDumpContext_RenderThread = *(FRDGResourceDumpContext **)param_1;
  FRHICommandListImmediate::SubmitAndBlockUntilGPUIdle(param_2);
  GRHIValidateBufferSourceCopy = false;
  return;
}

// Call @ 145da3600

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`SetNearClipPlaneGlobals'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>::
Call(void *param_1,FRHICommandListImmediate *param_2)

{
  GNearClippingPlane_RenderThread = *(float *)param_1;
  return;
}

// Call @ 145da3620

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``FRDGBuilder::SetupParallelExecute'::__l32::<lambda_2>::operator()'::__l3::<lambda_1>,void,FCrashContextExtendedWriter_&>
::Call(void *param_1,FCrashContextExtendedWriter *param_2)

{
  FRHIBreadcrumbNode *this;
  ForAnyElementType FVar1;
  FString local_18;
  
  this = *(FRHIBreadcrumbNode **)(*(longlong *)param_1 + 0x2f8);
  if (this != (FRHIBreadcrumbNode *)0x0) {
    GetCurrentThreadId();
    ::FString::PrintfImpl(&local_18,L"RDGTask_%d");
    FVar1.Data = (FScriptContainerElement *)L"";
    if (local_18.Data.ArrayNum != 0) {
      FVar1.Data = local_18.Data.AllocatorInstance.Data;
    }
    FRHIBreadcrumbNode::WriteCrashData(this,param_2,(wchar_t *)FVar1.Data);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// Call @ 145da36a0

void __cdecl
UE::Core::Private::Function::TFunctionRefCaller<`FRDGBuilder::~FRDGBuilder'::__l5::<lambda_1>,void>
::Call(void *param_1)

{
  return;
}

// Call @ 145da36b0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`RenderCaptureInterface::FScopedCapture::FScopedCapture'::__l12::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  FRHIBreadcrumbEventManual *this;
  code *pcVar1;
  bool bVar2;
  IRenderCaptureProvider *pIVar3;
  longlong lVar4;
  tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<3,FString>_const_*,std::tuple<FString_const_&>_>
  tStack_38;
  uint uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  pIVar3 = IRenderCaptureProvider::Get();
  (**(code **)((longlong)*pIVar3 + 0x10))(pIVar3,param_2,1,param_1);
  if (*(char *)((longlong)param_1 + 0x28) != '\0') {
    this = *(FRHIBreadcrumbEventManual **)((longlong)param_1 + 0x20);
    lVar4 = (longlong)param_1 + 0x10;
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) < ::_TSS0) {
      _Init_thread_header(&::_TSS0);
      if (::_TSS0 == -1) {
        ::Desc._padding_ = (longlong)::s_C__Workspace_UnrealEngine_Engin;
        ::Desc._padding_._0_4_ = 0x26;
        uStack_18 = 0;
        uStack_14 = 0;
        ::Desc._12_8_ = ZEXT48(uStack_1c);
        ::Desc._padding_._4_4_ = 0;
        ::Desc._padding_ = (longlong)u_FScopedCapture;
        ::Desc._padding_ = (longlong)u__s;
        InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
        ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
        ::Desc.TraceGpuSpecId = 0;
        ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
        atexit(```RenderCaptureInterface::FScopedCapture::FScopedCapture'::__l12::Desc::operator()'
               ::__l5::<lambda_1>::operator()<FString_const_&>'::__l2::
               _dynamic_atexit_destructor_for__Desc__);
        _Init_thread_footer(&::_TSS0);
      }
    }
    tStack_38._Myfirst._Val = &::Desc;
    tStack_38._padding_ = lVar4;
    if (*(char *)&this[1].Node.Node != '\0') {
      if ((this->Node).Node != (FRHIBreadcrumbNode *)0x0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("!Node",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.inl"
                           ,0x10a,L"Manual breadcrumb was destructed before it was ended.");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((this->Node).AllocatorRef.SharedReferenceCount.ReferenceController);
    }
    FRHIBreadcrumbEventManual::
    FRHIBreadcrumbEventManual<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<3,FString>,FString_const_&>
              (this,(FRHIComputeCommandList *)param_2,&tStack_38);
    *(undefined1 *)&this[1].Node.Node = 1;
  }
  return;
}

// Call @ 145da36c0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FRDGBuilder::Execute'::__l2::<lambda_2>,void,FCrashContextExtendedWriter_&>::
Call(void *param_1,FCrashContextExtendedWriter *param_2)

{
  if (*(FRHIBreadcrumbNode **)(*(longlong *)param_1 + 0x2f8) != (FRHIBreadcrumbNode *)0x0) {
    FRHIBreadcrumbNode::WriteCrashData
              (*(FRHIBreadcrumbNode **)(*(longlong *)param_1 + 0x2f8),param_2,
               L"RDGExecute_RenderThread");
    return;
  }
  return;
}

// Call @ 145da36f0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`RenderCaptureInterface::FScopedCapture::~FScopedCapture'::__l34::<lambda_2>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  FRHIBreadcrumbEventManual *this;
  code *pcVar1;
  bool bVar2;
  IRenderCaptureProvider *pIVar3;
  
  if (*(char *)param_1 != '\0') {
    this = *(FRHIBreadcrumbEventManual **)((longlong)param_1 + 8);
    if (*(char *)&this[1].Node.Node == '\0') {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    FRHIBreadcrumbEventManual::End(this,(FRHIComputeCommandList *)param_2);
  }
  pIVar3 = IRenderCaptureProvider::Get();
                    /* WARNING: Could not recover jumptable at 0x000145da375a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*pIVar3 + 0x18))(pIVar3,param_2,*(code **)((longlong)*pIVar3 + 0x18));
  return;
}

// Call @ 145dfa6f0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`BeginInitResource'::__l2::TSTR_InitCommand295>_>'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  longlong *plVar2;
  
  CheckCallable(*(void **)param_1);
  UNRECOVERED_JUMPTABLE = *(code **)param_1;
  plVar2 = (longlong *)((longlong)param_1 + 0x10);
  if (*(longlong **)((longlong)param_1 + 0x28) != (longlong *)0x0) {
    plVar2 = *(longlong **)((longlong)param_1 + 0x28);
  }
  uVar1 = (**(code **)(*plVar2 + 8))();
                    /* WARNING: Could not recover jumptable at 0x000145dfa73d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar1,param_2);
  return;
}

// Call @ 145dfa750

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`BeginReleaseResource'::__l2::TSTR_ReleaseCommand376>_>'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  longlong *plVar2;
  
  CheckCallable(*(void **)param_1);
  UNRECOVERED_JUMPTABLE = *(code **)param_1;
  plVar2 = (longlong *)((longlong)param_1 + 0x10);
  if (*(longlong **)((longlong)param_1 + 0x28) != (longlong *)0x0) {
    plVar2 = *(longlong **)((longlong)param_1 + 0x28);
  }
  uVar1 = (**(code **)(*plVar2 + 8))();
                    /* WARNING: Could not recover jumptable at 0x000145dfa78d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar1);
  return;
}

// Call @ 145dfa7a0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`BeginUpdateResourceRHI'::__l2::TSTR_UpdateCommand304>_>'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  longlong *plVar2;
  
  CheckCallable(*(void **)param_1);
  UNRECOVERED_JUMPTABLE = *(code **)param_1;
  plVar2 = (longlong *)((longlong)param_1 + 0x10);
  if (*(longlong **)((longlong)param_1 + 0x28) != (longlong *)0x0) {
    plVar2 = *(longlong **)((longlong)param_1 + 0x28);
  }
  uVar1 = (**(code **)(*plVar2 + 8))();
                    /* WARNING: Could not recover jumptable at 0x000145dfa7ed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar1,param_2);
  return;
}

// Call @ 145dfa800

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`AdvanceRenderingThreadStatsGT'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  FNameEntryId FVar1;
  int iVar2;
  bool bVar3;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  uchar auVar4 [8];
  FStatMessage FStack_18;
  
  iVar2 = FStatConstants::AdvanceFrame.Number;
  FVar1.Value = FStatConstants::AdvanceFrame.Index.Value;
  auVar4 = *(uchar (*) [8])param_1;
  if (FThreadStats::bPrimaryEnable) {
    if (FThreadStats::PrimaryDisableChangeTagLock.Counter != 0) {
      LOCK();
      FThreadStats::PrimaryEnableUpdateNumber.Counter =
           FThreadStats::PrimaryEnableUpdateNumber.Counter + 1;
      UNLOCK();
    }
    if (*(int *)((longlong)param_1 + 8) == FThreadStats::PrimaryEnableUpdateNumber.Counter)
    goto LAB_145df3617;
  }
  auVar4 = (uchar  [8])-(longlong)auVar4;
LAB_145df3617:
  if (((CONCAT44(FStatConstants::AdvanceFrame.Number,FStatConstants::AdvanceFrame.Index.Value) != 0)
      && (!FThreadStats::bPrimaryDisableForever)) && (FThreadStats::TlsSlot != 0xffffffff)) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    FStack_18.NameAndInfo.Index.Value = FVar1.Value;
    FStack_18.NameAndInfo.Number = iVar2 & 0xffff3fffU | 0x3000;
    FStack_18.StatData.Pad = auVar4;
    FThreadStats::AddStatMessage(this,&FStack_18);
    if (this->ScopeCount == 0) {
      FThreadStats::Flush(this,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(this,false,false);
    }
  }
  Stats::FStats::StatsFrameRT.bIsSet = true;
  Stats::FStats::StatsFrameRT.TypedValue = (long64)auVar4;
  bVar3 = IsInActualRenderingThread();
  if (!bVar3) {
    return;
  }
  FThreadStats::ExplicitFlush(false);
  return;
}

// Call @ 145dfa810

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`BeginInitResource'::__l2::<lambda_1>,void,FRHICommandList_&>::Call
          (void *param_1,FRHICommandList *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000145dfa816. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)param_1 + 0x18))();
  return;
}

// Call @ 145dfa820

void __cdecl
UE::Core::Private::Function::TFunctionRefCaller<`BeginReleaseResource'::__l2::<lambda_1>,void>::Call
          (void *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000145dfa826. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)param_1 + 0x20))();
  return;
}

// Call @ 145dfa830

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`BeginUpdateResourceRHI'::__l2::<lambda_1>,void,FRHICommandList_&>::Call
          (void *param_1,FRHICommandList *param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)param_1;
  if (((int)plVar1[3] != -1) && (GRHIGlobals.IsRHIInitialized)) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
    (**(code **)(*plVar1 + 8))(plVar1,param_2);
  }
  return;
}

// Call @ 145dfa880

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FRenderResource::ChangeFeatureLevel'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  FRenderResourceList *pFVar1;
  <lambda_1> local_18;
  
  local_18.NewFeatureLevel = *(Type *)param_1;
  local_18.RHICmdList = (FRHICommandList *)param_2;
  pFVar1 = FRenderResourceList::Get<0>();
  FRenderResourceList::
  ForEach<__FRenderResource::ChangeFeatureLevel_::__l2::<lambda_1>::operator()_::__l2::<lambda_1>_>
            (pFVar1,&local_18);
  pFVar1 = FRenderResourceList::Get<1>();
  FRenderResourceList::
  ForEach<__FRenderResource::ChangeFeatureLevel_::__l2::<lambda_1>::operator()_::__l2::<lambda_1>_>
            (pFVar1,&local_18);
  return;
}

// Call @ 145dfa8c0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FRenderCommandPipe::EnqueueAndLaunch'::__l2::<lambda_1>,void>::Call
          (void *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FRenderCommandPipe *pFVar3;
  undefined8 uVar4;
  longlong lVar5;
  FRenderCommandList *this;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  FCommandList *this_00;
  undefined8 *puVar9;
  bool bVar10;
  <lambda_1> <StackX_8;
  FTaskTagScope FStack_28;
  
  if ((CpuChannel->Enabled < 0) || (RenderCommandsChannel->Enabled < 0)) {
    bVar7 = false;
  }
  else {
    bVar7 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId2355,"RenderCommandPipe ReplayCommands",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderingThread.cpp"
               ,0x933);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId2355);
  }
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Magenta,*(wchar_t **)(*(longlong *)param_1 + 0x10))
  ;
  bVar10 = -1 < CpuChannel->Enabled;
  if (bVar10) {
    FCpuProfilerTrace::OutputBeginDynamicEvent
              (*(wchar_t **)(*(longlong *)param_1 + 0x10),
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderingThread.cpp"
               ,0x934);
  }
  FTaskTagScope::FTaskTagScope(&FStack_28,EParallelRenderingThread);
  pFVar3 = *(FRenderCommandPipe **)param_1;
  this_00 = FRenderCommandList::Get(*(FRenderCommandList **)((longlong)param_1 + 8),pFVar3);
  puVar9 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xed8);
  uVar4 = *puVar9;
  *puVar9 = pFVar3;
  <StackX_8.__this = pFVar3;
  RenderCommandPipe::FCommandList::
  ConsumeCommands<_FRenderCommandPipe::ExecuteCommands_::__l2::<lambda_1>_>(this_00,&<StackX_8);
  lVar5 = *(longlong *)param_1;
  *puVar9 = uVar4;
  LOCK();
  *(int *)(lVar5 + 0x54) = *(int *)(lVar5 + 0x54) + -1;
  UNLOCK();
  this = *(FRenderCommandList **)((longlong)param_1 + 8);
  LOCK();
  paVar1 = &this->NumPipeRefs;
  aVar2 = *paVar1;
  *paVar1 = (atomic<int>)((int)*paVar1 + -1);
  UNLOCK();
  if ((int)aVar2 + -1 < 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumRefs >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                       ,0x3d1,L"");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  else if ((aVar2 == (atomic<int>)0x1) && (this != (FRenderCommandList *)0x0)) {
    FRenderCommandList::_scalar_deleting_destructor_(this,1);
  }
  FTaskTagScope::~FTaskTagScope(&FStack_28);
  if (bVar10) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Call @ 145dfa8d0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FRenderThreadCommandPipe::EnqueueAndLaunch'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  FRenderThreadCommandPipe::ExecuteCommands(*(FRenderCommandList **)((longlong)param_1 + 8));
  return;
}

// Call @ 145dfa8e0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FConsoleRenderThreadPropagation::OnCVarChange'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  **(undefined4 **)param_1 = *(undefined4 *)((longlong)param_1 + 8);
  return;
}

// Call @ 145dfa8f0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FConsoleRenderThreadPropagation::OnCVarChange'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  **(undefined4 **)param_1 = *(undefined4 *)((longlong)param_1 + 8);
  return;
}

// Call @ 145dfa900

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FConsoleRenderThreadPropagation::OnCVarChange'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  **(undefined8 **)param_1 = *(undefined8 *)((longlong)param_1 + 8);
  return;
}

// Call @ 145dfa920

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FConsoleRenderThreadPropagation::OnCVarChange'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  ::FString::operator=(*(FString **)param_1,(FString *)((longlong)param_1 + 8));
  return;
}

// Call @ 145dfa940

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FConsoleRenderThreadPropagation::OnCVarChange'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  **(undefined1 **)param_1 = *(undefined1 *)((longlong)param_1 + 8);
  return;
}

// Call @ 145dfa950

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`OnRenderThreadPollPeriodMsChanged'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  GRenderThreadPollPeriodMs = *(int *)param_1;
  return;
}

// Call @ 145dfa960

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`ReleaseResourceAndFlush'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>::
Call(void *param_1,FRHICommandListImmediate *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000145dfa966. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)param_1 + 0x20))();
  return;
}

// Call @ 145dfa970

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FRenderCommandPipeRegistry::StartRecording'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  ulonglong uVar1;
  atomic<bool> aVar2;
  int iVar3;
  FTaskBase *this;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint *puVar12;
  uint uVar13;
  
  RHIResourceLifetimeAddRef(*(int *)((longlong)param_1 + 0x28));
  *(int *)(*(longlong *)param_1 + 0x1c) =
       *(int *)(*(longlong *)param_1 + 0x1c) + *(int *)((longlong)param_1 + 0x28);
  if ((*(longlong *)((longlong)param_1 + 8) != 0) &&
     (*(char *)(*(longlong *)((longlong)param_1 + 8) + 0xd0) == '\0')) {
    this = *(FTaskBase **)((longlong)param_1 + 8);
    LOCK();
    aVar2 = this->TaskTriggered;
    this->TaskTriggered = (atomic<bool>)0x1;
    UNLOCK();
    if (aVar2 == (atomic<bool>)0x0) {
      LOCK();
      this->RefCount = (atomic<unsigned_int>)((int)this->RefCount + 1);
      UNLOCK();
      Tasks::Private::FTaskBase::TryLaunch(this,0xd8);
    }
  }
  iVar3 = *(int *)((longlong)param_1 + 0x20);
  iVar9 = 0;
  iVar11 = 0;
  if (iVar3 != 0) {
    puVar12 = *(uint **)((longlong)param_1 + 0x18);
    if (*(uint **)((longlong)param_1 + 0x18) == (uint *)0x0) {
      puVar12 = (uint *)((longlong)param_1 + 0x10);
    }
    uVar6 = *puVar12;
    while (uVar6 == 0) {
      lVar8 = (longlong)iVar9;
      iVar11 = iVar11 + 0x20;
      iVar9 = iVar9 + 1;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar9) {
        return;
      }
      uVar6 = puVar12[lVar8 + 1];
    }
    uVar6 = -uVar6 & uVar6;
    uVar1 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar10 = iVar11 + -1 + (int)lVar8;
    if ((int)uVar10 < iVar3) {
      uVar13 = 0xffffffff;
      do {
        lVar8 = *(longlong *)param_1;
        uVar7 = 0;
        if ((int)uVar10 < *(int *)(lVar8 + 0x10)) {
          uVar7 = ~uVar10 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar13 = ~uVar6 & uVar13;
        *(undefined1 *)(*(longlong *)(*(longlong *)(lVar8 + 8) + (longlong)(int)uVar10 * 8) + 0x5d)
             = 1;
        iVar3 = *(int *)((longlong)param_1 + 0x20);
        puVar12 = (uint *)((longlong)param_1 + 0x10);
        if (*(uint **)((longlong)param_1 + 0x18) != (uint *)0x0) {
          puVar12 = *(uint **)((longlong)param_1 + 0x18);
        }
        uVar6 = uVar13 & puVar12[iVar9];
        while (uVar6 == 0) {
          lVar8 = (longlong)iVar9;
          iVar11 = iVar11 + 0x20;
          iVar9 = iVar9 + 1;
          if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar9) {
            return;
          }
          uVar13 = 0xffffffff;
          uVar6 = puVar12[lVar8 + 1];
        }
        uVar6 = -uVar6 & uVar6;
        uVar1 = (ulonglong)uVar6 * 2 + 1;
        lVar8 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
          }
        }
        uVar10 = iVar11 + -1 + (int)lVar8;
      } while (((int)uVar10 <= iVar3) && ((int)uVar10 < iVar3));
    }
  }
  return;
}

// Call @ 145dfa980

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FRenderCommandPipeRegistry::StopRecording'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  ulonglong uVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  FLowLevelMemTracker *this;
  FPageAllocator *this_00;
  int iVar10;
  uint uVar11;
  int iVar12;
  FQueuedCommandList *pFVar13;
  int *piVar14;
  uint *puVar15;
  uint uVar16;
  ForElementType<FRHICommandListImmediate::FQueuedCommandList> FStack_68;
  undefined8 uStack_60;
  FQueuedCommandList *pFStack_58;
  int iStack_50;
  undefined4 uStack_4c;
  TArrayView<FRHICommandListImmediate::FQueuedCommandList,int> TStack_48;
  
  uVar5 = *(uint *)((longlong)param_1 + 0x28);
  iVar12 = 0;
  FStack_68.Data = (FQueuedCommandList *)0x0;
  uStack_60 = 0;
  if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
    OnInvalidArrayNum((ulonglong)uVar5);
  }
  iVar7 = iVar12;
  if (0 < (int)uVar5) {
    ReallocTo<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<FRHICommandListImmediate::FQueuedCommandList>_>
              (8,8,uVar5,&FStack_68,0,(int *)((longlong)&uStack_60 + 4));
    iVar7 = (int)uStack_60;
  }
  if (*(FTaskBase **)((longlong)param_1 + 0x20) != (FTaskBase *)0x0) {
    Tasks::Private::FTaskBase::Wait(*(FTaskBase **)((longlong)param_1 + 0x20));
  }
  iVar2 = *(int *)((longlong)param_1 + 0x18);
  if (iVar2 != 0) {
    puVar15 = *(uint **)((longlong)param_1 + 0x10);
    if (*(uint **)((longlong)param_1 + 0x10) == (uint *)0x0) {
      puVar15 = (uint *)((longlong)param_1 + 8);
    }
    uVar5 = *puVar15;
    iVar10 = iVar12;
    while (uVar5 == 0) {
      lVar8 = (longlong)iVar10;
      iVar12 = iVar12 + 0x20;
      iVar10 = iVar10 + 1;
      if ((int)((iVar2 + -1 >> 0x1f & 0x1fU) + iVar2 + -1) >> 5 < iVar10) goto LAB_145df3f30;
      uVar5 = puVar15[lVar8 + 1];
    }
    uVar5 = -uVar5 & uVar5;
    uVar1 = (ulonglong)uVar5 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar11 = (int)lVar8 + -1 + iVar12;
    if ((int)uVar11 < iVar2) {
      uVar16 = 0xffffffff;
      do {
        lVar8 = *(longlong *)param_1;
        uVar6 = 0;
        if ((int)uVar11 < *(int *)(lVar8 + 0x10)) {
          uVar6 = ~uVar11 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        lVar8 = *(longlong *)(*(longlong *)(lVar8 + 8) + (longlong)(int)uVar11 * 8);
        if (*(FRHICommandListBase **)(lVar8 + 0x20) != (FRHICommandListBase *)0x0) {
          FRHICommandListBase::FinishRecording(*(FRHICommandListBase **)(lVar8 + 0x20));
          if (iVar7 == uStack_60._4_4_) {
            iVar7 = ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<FRHICommandListImmediate::FQueuedCommandList>_>
                              (0x808,&FStack_68,(int *)((longlong)&uStack_60 + 4));
          }
          lVar9 = (longlong)iVar7;
          iVar7 = iVar7 + 1;
          uStack_60 = CONCAT44(uStack_60._4_4_,iVar7);
          FStack_68.Data[lVar9].CmdList = *(FRHICommandListBase **)(lVar8 + 0x20);
          *(undefined8 *)(lVar8 + 0x20) = 0;
        }
        *(undefined1 *)(lVar8 + 0x5d) = 0;
        uVar16 = ~uVar5 & uVar16;
        iVar2 = *(int *)((longlong)param_1 + 0x18);
        lVar8 = (longlong)param_1 + 8;
        if (*(longlong *)((longlong)param_1 + 0x10) != 0) {
          lVar8 = *(longlong *)((longlong)param_1 + 0x10);
        }
        uVar5 = uVar16 & *(uint *)(lVar8 + (longlong)iVar10 * 4);
        while (uVar5 == 0) {
          lVar9 = (longlong)iVar10;
          iVar12 = iVar12 + 0x20;
          iVar10 = iVar10 + 1;
          if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_145df3f30;
          uVar16 = 0xffffffff;
          uVar5 = *(uint *)(lVar8 + 4 + lVar9 * 4);
        }
        uVar5 = -uVar5 & uVar5;
        uVar1 = (ulonglong)uVar5 * 2 + 1;
        lVar8 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
          }
        }
        uVar11 = iVar12 + -1 + (int)lVar8;
      } while (((int)uVar11 <= iVar2) && ((int)uVar11 < iVar2));
    }
  }
LAB_145df3f30:
  *(int *)(*(longlong *)param_1 + 0x1c) =
       *(int *)(*(longlong *)param_1 + 0x1c) - *(int *)((longlong)param_1 + 0x28);
  pFStack_58 = FStack_68.Data;
  if ((iVar7 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  TStack_48._12_4_ = uStack_4c;
  TStack_48.ArrayNum = iVar7;
  TStack_48.DataPtr = pFStack_58;
  iStack_50 = iVar7;
  FRHICommandListImmediate::QueueAsyncCommandListSubmit(param_2,&TStack_48,Disabled,0);
  RHIResourceLifetimeReleaseRef(param_2,*(int *)((longlong)param_1 + 0x28));
  if (FStack_68.Data != (FQueuedCommandList *)0x0) {
    pFVar13 = FStack_68.Data + -1;
    MemoryTrace_Free((ulong64)pFVar13,0,0);
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,pFVar13,FMalloc,true);
    }
    piVar14 = (int *)((longlong)pFVar13 - (ulonglong)*(uint *)&pFVar13->CmdList);
    LOCK();
    iVar12 = *piVar14;
    *piVar14 = *piVar14 + -1;
    UNLOCK();
    if (iVar12 == 1) {
      lVar8 = *(longlong *)(piVar14 + 0x10);
      MemoryTrace_UnmarkAllocAsHeap((ulong64)piVar14,0,0);
      if (lVar8 - (longlong)piVar14 == 0x10000) {
        this_00 = FPageAllocator::Get();
        FPageAllocator::Free(this_00,piVar14);
      }
      else {
        (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,piVar14);
      }
    }
  }
  return;
}

// Call @ 145dfa990

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`StopRenderCommandFenceBundler'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  atomic<bool> aVar1;
  FTaskBase *this;
  
  if ((*(longlong *)param_1 != 0) && (*(char *)(*(longlong *)param_1 + 0xd0) == '\0')) {
    this = *(FTaskBase **)param_1;
    LOCK();
    aVar1 = this->TaskTriggered;
    this->TaskTriggered = (atomic<bool>)0x1;
    UNLOCK();
    if (aVar1 == (atomic<bool>)0x0) {
      LOCK();
      this->RefCount = (atomic<unsigned_int>)((int)this->RefCount + 1);
      UNLOCK();
      Tasks::Private::FTaskBase::TryLaunch(this,0xd8);
      return;
    }
  }
  return;
}

// Call @ 145dfa9d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FFrameEndSync::Sync'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>::Call
          (void *param_1,FRHICommandListImmediate *param_2)

{
  ulong64 uVar1;
  ulong64 uVar2;
  undefined8 *puVar3;
  
  uVar1 = *(ulong64 *)param_1;
  uVar2 = *(ulong64 *)((longlong)param_1 + 8);
  if (((!GRHICommandList.bLatchedBypass) || ((param_2->field_0x29b & 0x20) == 0)) &&
     (param_2->field_0x64 == '\0')) {
    puVar3 = FMemStackBase::Alloc((FMemStackBase *)param_2,0x28,8);
    *(int *)&param_2->field_0x60 = *(int *)&param_2->field_0x60 + 1;
    **(undefined8 **)&param_2->field_0x30 = puVar3;
    *(undefined8 **)&param_2->field_0x30 = puVar3 + 1;
    puVar3[1] = 0;
    *puVar3 = &TRHILambdaCommand<FRHICommandListImmediate,``FFrameEndSync::Sync'::`2'::<lambda_1>::operator()'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar3[2] = uVar1;
    puVar3[3] = uVar2;
    puVar3[4] = L"TRHILambdaCommand";
    return;
  }
  RHISetFrameDebugInfo(GRHIGlobals.PresentCounter - 1,uVar1,uVar2);
  return;
}

// Call @ 145dfa9e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FRenderThreadCommandPipe::EnqueueAndLaunch'::__l5::<lambda_1>,void>::Call
          (void *param_1)

{
  FMutex FVar1;
  atomic<unsigned_char> aVar2;
  FMemStackBase *this;
  code *pcVar3;
  bool bVar4;
  atomic<unsigned_char> *paVar5;
  <lambda_1> <StackX_8;
  FContext FStack_68;
  
  paVar5 = (atomic<unsigned_char> *)(*(longlong *)param_1 + 8);
  LOCK();
  FVar1.State = *paVar5;
  if (FVar1.State == (atomic<unsigned_char>)0x0) {
    *paVar5 = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (FVar1.State != (atomic<unsigned_char>)0x0) {
    FMutex::LockSlow((FMutex *)paVar5);
  }
  bVar4 = (*(FContext **)((longlong)param_1 + 8))->bDeleteAfterExecute;
  FRenderCommandPipeBase::FContext::FContext(&FStack_68,*(FContext **)((longlong)param_1 + 8));
  paVar5 = (atomic<unsigned_char> *)(*(longlong *)param_1 + 8);
  LOCK();
  aVar2 = *paVar5;
  *paVar5 = (atomic<unsigned_char>)((char)*paVar5 + -1);
  UNLOCK();
  if (((byte)aVar2 & 2) != 0) {
    FMutex::WakeWaitingThread((FMutex *)paVar5);
  }
  FStack_68.CommandList.bClosed = true;
  <StackX_8.RHICmdList = &GRHICommandList.CommandListImmediate;
  RenderCommandPipe::FCommandList::
  ConsumeCommands<_FRenderThreadCommandPipe::ExecuteCommands_::__l2::<lambda_1>_>
            (&FStack_68.CommandList,&<StackX_8);
  if ((bVar4 != false) &&
     (this = *(FMemStackBase **)((longlong)param_1 + 8), this != (FMemStackBase *)0x0)) {
    RenderCommandPipe::FCommandList::~FCommandList((FCommandList *)(this + 1));
    if ((GIsCriticalError == false) &&
       ((this->NumMarks != 0 &&
        (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                           ("(GIsCriticalError || !NumMarks)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MemStack.h"
                            ,0x74,L""), bVar4)))) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    FMemStackBase::FreeChunks(this,(FTaggedMemory *)0x0);
    ::operator_delete(this,0x58);
  }
  RenderCommandPipe::FCommandList::~FCommandList(&FStack_68.CommandList);
  if (((GIsCriticalError == false) && (FStack_68.Allocator.NumMarks != 0)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(GIsCriticalError || !NumMarks)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MemStack.h"
                         ,0x74,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FMemStackBase::FreeChunks(&FStack_68.Allocator,(FTaggedMemory *)0x0);
  return;
}

// Call @ 145dfa9f0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FBatchedReleaseResources::Flush'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 auStackX_8 [8];
  
  piVar1 = (int *)((longlong)param_1 + 0x88);
  iVar3 = *piVar1;
  if (*(longlong **)((longlong)param_1 + 0x80) != (longlong *)0x0) {
    param_1 = *(longlong **)((longlong)param_1 + 0x80);
  }
  plVar2 = (longlong *)((longlong)param_1 + (longlong)iVar3 * 8);
  while( true ) {
    if (*piVar1 != iVar3) {
      auStackX_8[0] = 0;
      `TCheckedPointerIterator<FRenderResource_*_const,int,0>::operator!='::__l2::<lambda_1>::
      operator()(auStackX_8);
    }
    if (param_1 == plVar2) break;
    plVar4 = *(longlong **)param_1;
    if ((*(char *)((longlong)plVar4 + 0x1e) != '\x01') &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Resource->ResourceState == ERenderResourceState::BatchReleased",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderResource.cpp"
                           ,0x148,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    (**(code **)(*plVar4 + 0x20))(plVar4);
    param_1 = (void *)((longlong)param_1 + 8);
    *(undefined1 *)((longlong)plVar4 + 0x1e) = 0;
  }
  return;
}

// Call @ 145dfaa00

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FlushRenderCommandFenceBundler'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  atomic<bool> aVar1;
  FTaskBase *this;
  
  if ((*(longlong *)param_1 != 0) && (*(char *)(*(longlong *)param_1 + 0xd0) == '\0')) {
    this = *(FTaskBase **)param_1;
    LOCK();
    aVar1 = this->TaskTriggered;
    this->TaskTriggered = (atomic<bool>)0x1;
    UNLOCK();
    if (aVar1 == (atomic<bool>)0x0) {
      LOCK();
      this->RefCount = (atomic<unsigned_int>)((int)this->RefCount + 1);
      UNLOCK();
      Tasks::Private::FTaskBase::TryLaunch(this,0xd8);
      return;
    }
  }
  return;
}

// Call @ 145dfaa40

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FShaderPipelineType::GetShaderPipelineTypesByFilename'::__l5::<lambda_1>,bool,wchar_t_const_*>
::Call(void *param_1,wchar_t **param_2)

{
  bool bVar1;
  FRegexMatcher *this;
  FString local_38;
  FRegexMatcher local_28;
  
  ::FString::FString(&local_38,*param_2);
  this = FRegexMatcher::FRegexMatcher(&local_28,*(FRegexPattern **)param_1,&local_38);
  bVar1 = FRegexMatcher::FindNext(this);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.Implementation.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.Pattern.Implementation.SharedReferenceCount.ReferenceController);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return bVar1;
}

// Call @ 145dfaab0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FShaderType::GetShaderTypesByFilename'::__l5::<lambda_1>,bool,wchar_t_const_*>::
Call(void *param_1,wchar_t **param_2)

{
  bool bVar1;
  FRegexMatcher *this;
  FString local_38;
  FRegexMatcher local_28;
  
  ::FString::FString(&local_38,*param_2);
  this = FRegexMatcher::FRegexMatcher(&local_28,*(FRegexPattern **)param_1,&local_38);
  bVar1 = FRegexMatcher::FindNext(this);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.Implementation.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.Pattern.Implementation.SharedReferenceCount.ReferenceController);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return bVar1;
}

// Call @ 145dfab20

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FRenderCommandFence::BeginFence'::__l28::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  atomic<bool> aVar1;
  FTaskBase *this;
  
  if ((*(longlong *)param_1 != 0) && (*(char *)(*(longlong *)param_1 + 0xd0) == '\0')) {
    this = *(FTaskBase **)param_1;
    LOCK();
    aVar1 = this->TaskTriggered;
    this->TaskTriggered = (atomic<bool>)0x1;
    UNLOCK();
    if (aVar1 == (atomic<bool>)0x0) {
      LOCK();
      this->RefCount = (atomic<unsigned_int>)((int)this->RefCount + 1);
      UNLOCK();
      Tasks::Private::FTaskBase::TryLaunch(this,0xd8);
      return;
    }
  }
  return;
}

// Call @ 145dfab60

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FIoStoreShaderCodeArchive::CreateIoStoreShaderCodeArchiveHeader'::__l12::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `FIoStoreShaderCodeArchive::CreateIoStoreShaderCodeArchiveHeader'::__l12::<lambda_1>::operator()
            (param_1,*param_2);
  return;
}

// Call @ 145dfab70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FRenderCommandFence::BeginFence'::__l2::<lambda_2>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  atomic<unsigned_int> *paVar1;
  atomic<bool> aVar2;
  atomic<unsigned_int> aVar3;
  FTaskBase *this;
  code *pcVar4;
  bool bVar5;
  FTaskEvent FVar6;
  FTask *pFVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  TRefCountPtr<FBaseGraphTask> TVar10;
  FTaskEvent FStackX_8;
  undefined4 uStack_48;
  FTaskEvent FStack_40;
  undefined8 uStack_38;
  undefined4 uStack_30;
  uint uStack_2c;
  undefined8 uStack_28;
  longlong lStack_20;
  
  if (*(int *)((longlong)param_1 + 8) == 2) {
    FVar6 = (FTaskEvent)
            TLockFreeFixedSizeAllocator_TLSCacheBase<216,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
            ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<216,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                        *)&Tasks::Private::TaskEventBaseAllocator);
    if (FVar6 == (FTaskEvent)0x0) {
      uStack_48 = *(undefined4 *)((longlong)param_1 + 8);
      FStack_40 = (FTaskEvent)0x0;
    }
    else {
      Tasks::Private::FTaskBase::FTaskBase((FTaskBase *)FVar6,1,true);
      *(undefined ***)FVar6 = &___7FTaskEventBase_Private_Tasks_UE__6B_;
      TaskTrace::Created((ulong64)*(atomic<unsigned___int64> *)((longlong)FVar6 + 0x50),0xd8);
      if (((*(ulonglong *)((longlong)FVar6 + 0xb0) & 0x20) == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsCompleted()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Fundamental\\Task.h"
                             ,0x1dd,L"State: %d"), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      (**(code **)(*(longlong *)((longlong)FVar6 + 0xa0) + 0x18))
                ((undefined1 *)((longlong)FVar6 + 0xa0),(FTask *)((longlong)FVar6 + 0x78));
      *(FTaskEvent *)((longlong)FVar6 + 0x78) = FVar6;
      *(undefined ***)((longlong)FVar6 + 0xa0) =
           &
           ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_1>__1__0FTaskBase_Private_Tasks_UE__IEAAXPEB_WW4ETaskPriority_LowLevelTasks__W4EExtendedTaskPriority_45_W4ETaskFlags_45__Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV1_1__Init_FTaskBase_Private_Tasks_UE__IEAAX01W4EExtendedTaskPriority_89_W4ETaskFlags_89__Z_W4ETaskFlags_3__Z__0A____TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
      ;
      *(FTaskEvent *)((longlong)FVar6 + 0x80) = FVar6;
      pFVar7 = LowLevelTasks::FTask::GetActiveTask();
      uVar8 = 0;
      if (pFVar7 != (FTask *)0x0) {
        uVar8 = *(undefined8 *)&pFVar7->field_0x30;
      }
      *(undefined8 *)((longlong)FVar6 + 0xa8) = uVar8;
      *(undefined8 *)((longlong)FVar6 + 0xb0) = 0xc8000054453b7400;
      *(EExtendedTaskPriority *)((longlong)FVar6 + 0x44) = TaskEvent;
      FInheritedContextBase::CaptureInheritedContext((FInheritedContextBase *)((longlong)FVar6 + 8))
      ;
      Tasks::Private::FTaskBase::AddPrerequisites(*(FTaskBase **)param_1,(FTaskBase *)FVar6);
      uStack_48 = *(undefined4 *)((longlong)param_1 + 8);
      LOCK();
      *(atomic<unsigned_int> *)((longlong)FVar6 + 0x30) =
           (atomic<unsigned_int>)((int)*(atomic<unsigned_int> *)((longlong)FVar6 + 0x30) + 1);
      UNLOCK();
      FStack_40 = FVar6;
    }
    FVar6 = FStack_40;
    if (((GRHICommandList.bLatchedBypass == false) || ((param_2->field_0x29b & 0x20) == 0)) &&
       (param_2->field_0x64 == '\0')) {
      puVar9 = FMemStackBase::Alloc((FMemStackBase *)param_2,0x28,8);
      *(int *)&param_2->field_0x60 = *(int *)&param_2->field_0x60 + 1;
      **(undefined8 **)&param_2->field_0x30 = puVar9;
      *(undefined8 **)&param_2->field_0x30 = puVar9 + 1;
      *puVar9 = &TRHILambdaCommand<FRHICommandListImmediate,``FRenderCommandFence::BeginFence'::`2'::<lambda_2>::operator()'::`5'::<lambda_1>_>
                 ::_vftable_;
      puVar9[1] = 0;
      puVar9[3] = 0;
      *(undefined4 *)(puVar9 + 2) = uStack_48;
      *(FTaskEvent *)(puVar9 + 3) = FStack_40;
      FStack_40 = (FTaskEvent)0x0;
      puVar9[4] = L"TRHILambdaCommand";
    }
    else {
      RHITriggerTaskEventOnFlip(GRHIGlobals.PresentCounter - 1,&FStack_40);
    }
    if (FStack_40 != (FTaskEvent)0x0) {
      LOCK();
      paVar1 = (atomic<unsigned_int> *)((longlong)FStack_40 + 0x30);
      aVar3 = *paVar1;
      *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar3 == (atomic<unsigned_int>)0x1) {
        (*(code *)**(undefined8 **)FStack_40)(FStack_40,1);
      }
    }
    FRHICommandListImmediate::ImmediateFlush(param_2,DispatchToRHIThread,None);
    if (FVar6 == (FTaskEvent)0x0) goto LAB_145df496c;
    LOCK();
    paVar1 = (atomic<unsigned_int> *)((longlong)FVar6 + 0x30);
    aVar3 = *paVar1;
    *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar3 != (atomic<unsigned_int>)0x1) goto LAB_145df496c;
    puVar9 = *(undefined8 **)FVar6;
    FStackX_8 = FVar6;
  }
  else {
    if (*(int *)((longlong)param_1 + 8) != 1) goto LAB_145df496c;
    uStack_38 = 0;
    uStack_30 = 0;
    lStack_20 = (ulonglong)uStack_2c << 0x20;
    uStack_28 = 0;
    TVar10 = FRHICommandListExecutor::Submit
                       (&GRHICommandList,(TArrayView<FRHICommandListBase_*_const,int> *)&FStackX_8,
                        (ERHISubmitFlags)&uStack_28);
    if (*(FTaskBase **)TVar10.Reference != (FTaskBase *)0x0) {
      Tasks::Private::FTaskBase::AddPrerequisites
                (*(FTaskBase **)param_1,*(FTaskBase **)TVar10.Reference);
    }
    if (FStackX_8 == (FTaskEvent)0x0) goto LAB_145df496c;
    LOCK();
    paVar1 = (atomic<unsigned_int> *)((longlong)FStackX_8 + 0x30);
    aVar3 = *paVar1;
    *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
    UNLOCK();
    if ((aVar3 != (atomic<unsigned_int>)0x1) || (FStackX_8 == (FTaskEvent)0x0)) goto LAB_145df496c;
    puVar9 = *(undefined8 **)FStackX_8;
  }
  (*(code *)*puVar9)(FStackX_8,1);
LAB_145df496c:
  bVar5 = -1 < CpuChannel->Enabled;
  if (bVar5) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1047,"SyncTrigger_RenderThread",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderingThread.cpp"
               ,0x417);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1047);
  }
  if ((*(longlong *)param_1 != 0) && (*(char *)(*(longlong *)param_1 + 0xd0) == '\0')) {
    this = *(FTaskBase **)param_1;
    LOCK();
    aVar2 = this->TaskTriggered;
    this->TaskTriggered = (atomic<bool>)0x1;
    UNLOCK();
    if (aVar2 == (atomic<bool>)0x0) {
      LOCK();
      this->RefCount = (atomic<unsigned_int>)((int)this->RefCount + 1);
      UNLOCK();
      Tasks::Private::FTaskBase::TryLaunch(this,0xd8);
    }
  }
  if (!bVar5) {
    return;
  }
  FCpuProfilerTrace::OutputEndEvent();
  return;
}

// Call @ 145dfab80

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FShaderPipelineType::GetShaderPipelineTypesByFilename'::__l7::<lambda_2>,bool,wchar_t_const_*>
::Call(void *param_1,wchar_t **param_2)

{
  int iVar1;
  
  iVar1 = wcscmp(*(wchar_t **)param_1,*param_2);
  return iVar1 == 0;
}

// Call @ 145dfaba0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FShaderType::GetShaderTypesByFilename'::__l7::<lambda_2>,bool,wchar_t_const_*>::
Call(void *param_1,wchar_t **param_2)

{
  int iVar1;
  
  iVar1 = wcscmp(*(wchar_t **)param_1,*param_2);
  return iVar1 == 0;
}

// Call @ 145dfabc0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FIoStoreShaderCodeArchive::CreateIoStoreShaderCodeArchiveHeader'::__l13::<lambda_2>,void,int>
::Call(void *param_1,int *param_2)

{
  `FIoStoreShaderCodeArchive::CreateIoStoreShaderCodeArchiveHeader'::__l13::<lambda_2>::operator()
            (param_1,*param_2);
  return;
}

// Call @ 145dfabd0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FIoStoreShaderCodeArchive::CreateIoStoreShaderCodeArchiveHeader'::__l2::<lambda_8>,void,int>
::Call(void *param_1,int *param_2)

{
  `FIoStoreShaderCodeArchive::CreateIoStoreShaderCodeArchiveHeader'::__l2::<lambda_8>::operator()
            (param_1,*param_2);
  return;
}

// Call @ 145e4cdb0

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FShaderDiagnosticInfo::AddAndProcessErrorsForJob'::__l2::<lambda_1>,void,FShaderCompileJob_&>
::Call(void *param_1,FShaderCompileJob *param_2)

{
  int *piVar1;
  longlong lVar2;
  code *pcVar3;
  ForAnyElementType FVar4;
  int iVar5;
  bool bVar6;
  int iVar7;
  ForAnyElementType *pFVar8;
  EShaderPlatform aEStackX_8 [4];
  uint auStack_58 [2];
  FString FStack_50;
  FString FStack_40;
  
  aEStackX_8[0] = (EShaderPlatform)((param_2->Input).Target.field0_0x0.Packed >> 4);
  TArray<enum_EShaderPlatform,TSizedDefaultAllocator<32>_>::AddUniqueImpl<enum_EShaderPlatform>
            ((void *)(*(longlong *)param_1 + 0x30),aEStackX_8);
  if ((param_2->Output).Errors.ArrayNum == 0) {
    GetSingleJobCompilationDump(&FStack_40,param_2);
    ::FString::PrintfImpl(&FStack_50,L"Internal Error!\n\t%s");
    if (FStack_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_40.Data.AllocatorInstance.Data);
    }
    lVar2 = *(longlong *)param_1;
    if (((*(FString **)(lVar2 + 0x10) <= &FStack_50) &&
        (&FStack_50 < *(FString **)(lVar2 + 0x10) + *(int *)(lVar2 + 0x1c))) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar7 = *(int *)(lVar2 + 0x18);
    if (iVar7 == *(int *)(lVar2 + 0x1c)) {
      iVar7 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,(ForAnyElementType *)(lVar2 + 0x10),(int *)(lVar2 + 0x1c));
    }
    iVar5 = FStack_50.Data.ArrayNum;
    FVar4.Data = FStack_50.Data.AllocatorInstance.Data;
    *(int *)(lVar2 + 0x18) = iVar7 + 1;
    pFVar8 = (ForAnyElementType *)(*(longlong *)(lVar2 + 0x10) + (longlong)iVar7 * 0x10);
    pFVar8->Data = (FScriptContainerElement *)0x0;
    piVar1 = (int *)((longlong)&pFVar8[1].Data + 4);
    *(int *)&pFVar8[1].Data = FStack_50.Data.ArrayNum;
    if (FStack_50.Data.ArrayNum == 0) {
      *piVar1 = 0;
    }
    else {
      ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,FStack_50.Data.ArrayNum,0,pFVar8,FStack_50.Data.ArrayNum,piVar1);
      memcpy(pFVar8->Data,FVar4.Data,(longlong)iVar5 * 2);
    }
    lVar2 = *(longlong *)param_1;
    iVar7 = FStack_50.Data.ArrayNum + -1;
    FVar4.Data = FStack_50.Data.AllocatorInstance.Data;
    if (FStack_50.Data.ArrayNum == 0) {
      iVar7 = 0;
      FVar4.Data = (FScriptContainerElement *)L"";
    }
    auStack_58[0] = FCrc::Strihash_DEPRECATED<wchar_t>(iVar7,(wchar_t *)FVar4.Data);
    if (((*(uint **)(lVar2 + 0x50) <= auStack_58) &&
        (auStack_58 < *(uint **)(lVar2 + 0x50) + *(int *)(lVar2 + 0x5c))) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar7 = *(int *)(lVar2 + 0x58);
    if (iVar7 == *(int *)(lVar2 + 0x5c)) {
      iVar7 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,(ForAnyElementType *)(lVar2 + 0x50),(int *)(lVar2 + 0x5c));
    }
    *(int *)(lVar2 + 0x58) = iVar7 + 1;
    *(uint *)(*(longlong *)(lVar2 + 0x50) + (longlong)iVar7 * 4) = auStack_58[0];
    if (FStack_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_50.Data.AllocatorInstance.Data);
    }
  }
  iVar7 = FShaderDiagnosticInfo::AddAndProcessErrorsForFailedJobFiltered
                    (*(FShaderDiagnosticInfo **)param_1,param_2,L"error");
  if (iVar7 == 0) {
    FShaderDiagnosticInfo::AddAndProcessErrorsForFailedJobFiltered
              (*(FShaderDiagnosticInfo **)param_1,param_2,(wchar_t *)0x0);
  }
  return;
}

// Call @ 145e4cdc0

/* WARNING: Removing unreachable block (ram,0x000145e48561) */
/* WARNING: Removing unreachable block (ram,0x000145e48569) */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FShaderDiagnosticInfo::AddWarningsForJob'::__l2::<lambda_1>,void,FShaderCompileJob_const_&>
::Call(void *param_1,FShaderCompileJob *param_2)

{
  EShaderTypeForDynamicCast EVar1;
  int iVar2;
  TConsoleVariableData<int> *pTVar3;
  bool bVar4;
  longlong lVar5;
  FString *pFVar6;
  FShaderCompilerError *this;
  FShaderCompilerError *pFVar7;
  undefined4 auStackX_10 [2];
  FString FStack_58;
  FString aFStack_48 [2];
  
  pTVar3 = CVarShaderWarningsFilter.Ref;
  auStackX_10[0] = 0;
  EVar1 = ((param_2->Key).ShaderType)->ShaderTypeForDynamicCast;
  bVar4 = IsInParallelGameThread();
  if ((bVar4) || (bVar4 = IsInGameThread(), bVar4)) {
    lVar5 = 0;
  }
  else {
    lVar5 = 4;
  }
  iVar2 = *(int *)((longlong)pTVar3->ShadowedValue + lVar5);
  if ((iVar2 == 0) || ((iVar2 == 1 && (EVar1 != Global)))) {
    bVar4 = true;
  }
  else {
    bVar4 = false;
  }
  if (((param_2->_padding_ & 2) != 0) && (!bVar4)) {
    this = (FShaderCompilerError *)(param_2->Output).Errors.AllocatorInstance.Data;
    iVar2 = (param_2->Output).Errors.ArrayNum;
    pFVar7 = this + iVar2;
    while( true ) {
      if ((param_2->Output).Errors.ArrayNum != iVar2) {
        `TCheckedPointerIterator<FShaderCompilerError_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(auStackX_10);
      }
      if (this == pFVar7) break;
      lVar5 = *(longlong *)param_1;
      pFVar6 = FShaderCompilerError::GetErrorStringWithLineMarker(this,aFStack_48);
      FStack_58.Data.AllocatorInstance.Data = (pFVar6->Data).AllocatorInstance.Data;
      (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      FStack_58.Data.ArrayNum = (pFVar6->Data).ArrayNum;
      FStack_58.Data.ArrayMax = (pFVar6->Data).ArrayMax;
      (pFVar6->Data).ArrayNum = 0;
      (pFVar6->Data).ArrayMax = 0;
      if (aFStack_48[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(aFStack_48[0].Data.AllocatorInstance.Data);
      }
      TArray<FString,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FString>
                ((TArray<FString,TSizedDefaultAllocator<32>_> *)(lVar5 + 0x20),&FStack_58);
      if (FStack_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_58.Data.AllocatorInstance.Data);
      }
      this = this + 1;
    }
  }
  return;
}

// Call @ 145e4cdd0

/* WARNING: Removing unreachable block (ram,0x000145e4865d) */
/* WARNING: Removing unreachable block (ram,0x000145e486a6) */
/* WARNING: Removing unreachable block (ram,0x000145e486a7) */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FShaderCompileWorkerUtil::DumpDebugCompileInput'::__l2::<lambda_1>,void,FShaderCompileJob_&>
::Call(void *param_1,FShaderCompileJob *param_2)

{
  longlong lVar1;
  int iVar2;
  IFileManager *pIVar3;
  FArchive *pFVar4;
  wchar_t *pwVar5;
  TArray<TRefCountPtr<FShaderCommonCompileJob>,TSizedDefaultAllocator<32>_> TStack_30;
  FString FStack_20;
  
  ::operator/(&FStack_20,&(param_2->Input).DumpDebugInfoPath,DebugWorkerInputFileName);
  if (*(int *)(*(longlong *)param_1 + 8) < 2) {
    lVar1 = *(longlong *)((longlong)param_1 + 8);
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 0x20) = *(int *)(lVar1 + 0x20) + 1;
      UNLOCK();
    }
    TStack_30.ArrayNum = 0;
    TStack_30.ArrayMax = 0;
    TStack_30.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar2 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&TStack_30.AllocatorInstance,&TStack_30.ArrayMax);
    TStack_30.ArrayNum = iVar2 + 1;
    *(longlong *)(TStack_30.AllocatorInstance.Data + (longlong)iVar2 * 8) = 0;
    *(longlong *)(TStack_30.AllocatorInstance.Data + (longlong)iVar2 * 8) = lVar1;
    iVar2 = FStack_20.Data.ArrayNum + -1;
    if (FStack_20.Data.ArrayNum == 0) {
      iVar2 = 0;
    }
    ::FString::AssignRange
              (*(FString **)param_1,(wchar_t *)FStack_20.Data.AllocatorInstance.Data,iVar2);
    pIVar3 = IFileManager::Get();
    if (*(int *)(*(undefined8 **)param_1 + 1) == 0) {
      pwVar5 = L"";
    }
    else {
      pwVar5 = (wchar_t *)**(undefined8 **)param_1;
    }
    pFVar4 = (FArchive *)(**(code **)((longlong)*pIVar3 + 0x20))(pIVar3,pwVar5,1);
    FShaderCompileWorkerUtil::WriteTasks(&TStack_30,pFVar4,SkipSource|CompressTaskFile);
    (**(code **)(*(longlong *)pFVar4 + 0x210))(pFVar4);
    (*(code *)**(undefined8 **)pFVar4)(pFVar4,1);
    DestructItems<TRefCountPtr<FShaderCommonCompileJob>,int>
              ((TRefCountPtr<FShaderCommonCompileJob> *)TStack_30.AllocatorInstance.Data,
               TStack_30.ArrayNum);
    if (TStack_30.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(TStack_30.AllocatorInstance.Data);
    }
  }
  WriteShaderCompileWorkerDebugCommandLine
            ((FShaderCommonCompileJob *)param_2,&(param_2->Input).DumpDebugInfoPath,
             *(FString **)param_1,*(FShaderDebugDataContext **)((longlong)param_1 + 0x10));
  if (FStack_20.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_20.Data.AllocatorInstance.Data);
  }
  return;
}

// Call @ 145e4cde0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FShaderCompileJob::GetInputHash'::__l2::<lambda_1>,void,FString_const_*>::Call
          (void *param_1,FString **param_2)

{
  FString *pFVar1;
  code *pcVar2;
  bool bVar3;
  
  pFVar1 = *param_2;
  if ((pFVar1 == (FString *)0x0) || ((pFVar1->Data).ArrayNum < 2)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Directive && !Directive->IsEmpty()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderCore.cpp"
                       ,0x112e,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  ::operator<<(*(FArchive **)param_1,pFVar1);
  return;
}

// Call @ 145e4ce40

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FCompactFullName::ParseFromString'::__l2::<lambda_1>,void,TStringView<wchar_t>_>
::Call(void *param_1,TStringView<wchar_t> *param_2)

{
  TStringView<wchar_t> local_18;
  
  local_18.DataPtr = param_2->DataPtr;
  local_18.Size = param_2->Size;
  local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
  `FCompactFullName::ParseFromString'::__l2::<lambda_1>::operator()(param_1,&local_18);
  return;
}

// Call @ 145e4ce70

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FStableShaderKeyAndValue::ParseFromString'::__l2::<lambda_1>,void,TStringView<wchar_t>_>
::Call(void *param_1,TStringView<wchar_t> *param_2)

{
  TStringView<wchar_t> local_18;
  
  local_18.DataPtr = param_2->DataPtr;
  local_18.Size = param_2->Size;
  local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
  `FStableShaderKeyAndValue::ParseFromString'::__l2::<lambda_1>::operator()(param_1,&local_18);
  return;
}

// Call @ 145e4cea0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FStableShaderKeyAndValue::ParseFromStringCached'::__l2::<lambda_1>,void,TStringView<wchar_t>_>
::Call(void *param_1,TStringView<wchar_t> *param_2)

{
  TStringView<wchar_t> local_18;
  
  local_18.DataPtr = param_2->DataPtr;
  local_18.Size = param_2->Size;
  local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
  `FStableShaderKeyAndValue::ParseFromStringCached'::__l2::<lambda_1>::operator()(param_1,&local_18)
  ;
  return;
}

// Call @ 145e4ced0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FShaderLibraryInstance::PreloadShader'::__l5::<lambda_1>,bool,double>::Call
          (void *param_1,double *param_2)

{
  bool bVar1;
  
  bVar1 = FShaderLibraryInstance::OnExternalReadCallback
                    (*(FShaderLibraryInstance **)param_1,
                     (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                      *)((longlong)param_1 + 8),*param_2);
  return bVar1;
}

// Call @ 145e4cef0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FShaderCodeLibrary::InitForRuntime'::__l18::<lambda_1>,void,int>::Call
          (void *param_1,int *param_2)

{
  uint uVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  
  plVar2 = *(longlong **)param_1;
  uVar1 = *param_2;
  uVar5 = 0;
  if ((int)uVar1 < (int)plVar2[1]) {
    uVar5 = ~uVar1 >> 0x1f;
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
  FShaderCodeLibrary::OpenPluginShaderLibrary
            (*(IPlugin **)(*plVar2 + (longlong)(int)uVar1 * 0x10),true);
  return;
}

// Call @ 145e4cf70

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FShaderLibraryInstance::AddResource'::__l14::<lambda_1>,bool,double>::Call
          (void *param_1,double *param_2)

{
  bool bVar1;
  
  bVar1 = FShaderLibraryInstance::OnExternalReadCallback
                    (*(FShaderLibraryInstance **)param_1,
                     (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                      *)((longlong)param_1 + 8),*param_2);
  return bVar1;
}

// Call @ 145e4cf90

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FShaderLibrariesCollection::OnPakFileMounted'::__l14::<lambda_1>,void>::Call
          (void *param_1)

{
  FShaderPipelineCache::ShaderLibraryStateChanged
            (OpenedComponent,*(EShaderPlatform *)param_1,(FString *)((longlong)param_1 + 8),
             *(int *)((longlong)param_1 + 0x18));
  return;
}

// Call @ 145e91fb0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FShaderMapResource::BeginCreateAllShaders'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  FShaderMapResource *this;
  int iVar1;
  longlong lVar2;
  
  iVar1 = 0;
  this = *(FShaderMapResource **)param_1;
  if (this->NumRHIShaders != 0) {
    lVar2 = 0;
    do {
      if (*(longlong *)(&((this->RHIShaders).Ptr)->field_0x0 + lVar2) == 0) {
        FShaderMapResource::CreateShaderOrCrash(this,iVar1,true);
      }
      this = *(FShaderMapResource **)param_1;
      iVar1 = iVar1 + 1;
      lVar2 = lVar2 + 8;
    } while (iVar1 < (int)this->NumRHIShaders);
  }
  return;
}

// Call @ 145e92020

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FGlobalBoundShaderStateResource::FGlobalBoundShaderStateResource'::__l7::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  longlong lVar1;
  TLinkedList<FGlobalBoundShaderStateResource_*> *pTVar2;
  
  lVar1 = *(longlong *)param_1;
  pTVar2 = (TLinkedList<FGlobalBoundShaderStateResource_*> *)(lVar1 + 0x28);
  if (List != (TLinkedList<FGlobalBoundShaderStateResource_*> *)0x0) {
    List->_padding_ = (longlong)pTVar2;
  }
  pTVar2->_padding_ = (longlong)List;
  *(TLinkedList<FGlobalBoundShaderStateResource_*> ***)(lVar1 + 0x30) = &List;
  List = pTVar2;
  return;
}

// Call @ 145e92060

TIntVector3<int> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FRDGAsyncScatterUploadBuffer::End'::__l24::<lambda_1>,UE::Math::TIntVector3<int>_>
::Call(TIntVector3<int> *__return_storage_ptr__,void *param_1)

{
  `FRDGAsyncScatterUploadBuffer::End'::__l24::<lambda_1>::operator()(param_1,__return_storage_ptr__)
  ;
  return __return_storage_ptr__;
}

