// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GPUTextureTransfer
// Functions: 25

// `dynamic_initializer_for_'CVarMediaIOEnableGPUDirect'' @ 1413dc350

void __cdecl _dynamic_initializer_for__CVarMediaIOEnableGPUDirect__(void)

{
  bool local_res8 [32];
  
  local_res8[0] = false;
  TAutoConsoleVariable<bool>::TAutoConsoleVariable<bool>
            (&CVarMediaIOEnableGPUDirect,L"MediaIO.EnableGPUDirect",local_res8,
             L"Whether to enable GPU direct for faster video frame copies. (Experimental)",0x20);
  atexit(_dynamic_atexit_destructor_for__CVarMediaIOEnableGPUDirect__);
  return;
}

// `dynamic_initializer_for_'LogGPUTextureTransfer'' @ 1413dc3a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogGPUTextureTransfer__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogGPUTextureTransfer,L"LogGPUTextureTransfer",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogGPUTextureTransfer__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantGPUTextureTransfer'' @ 1413dc3e0

void __cdecl _dynamic_initializer_for__ModuleRegistrantGPUTextureTransfer__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "GPUTextureTransfer";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"GPUTextureTransfer",0x12);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,
             FStaticallyLinkedModuleRegistrant<FGPUTextureTransferModule>::InitializeModule);
  return;
}

// `dynamic_initializer_for_'TextureTransfersWrapper'' @ 1413dc430

void __cdecl UE::GPUTextureTransfer::_dynamic_initializer_for__TextureTransfersWrapper__(void)

{
  code *pcVar1;
  bool bVar2;
  byte bVar3;
  longlong lVar5;
  uint uVar4;
  
  Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,4,(ForAnyElementType *)&TextureTransfersWrapper,
             &TextureTransfersWrapper.Transfers.ArrayNum,&TextureTransfersWrapper.Transfers.ArrayMax
            );
  uVar4 = 0;
  lVar5 = 0;
  do {
    if (TextureTransfersWrapper.Transfers.ArrayNum <= (int)uVar4) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    bVar3 = (char)uVar4 + 1;
    uVar4 = (uint)bVar3;
    *(undefined8 *)(TextureTransfersWrapper.Transfers.AllocatorInstance.Data + lVar5 * 8) = 0;
    lVar5 = lVar5 + 1;
  } while (bVar3 < 4);
  atexit(_dynamic_atexit_destructor_for__TextureTransfersWrapper__);
  return;
}

// `scalar_deleting_destructor' @ 14d756510

void * __thiscall
FGPUTextureTransferModule::_scalar_deleting_destructor_
          (FGPUTextureTransferModule *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  FGPUDriverInfo::~FGPUDriverInfo(&this->CachedDriverInfo);
  DestructItems<TSharedPtr<UE::GPUTextureTransfer::ITextureTransfer,1>,int>
            ((TSharedPtr<UE::GPUTextureTransfer::ITextureTransfer,1> *)
             (this->TransferObjects).AllocatorInstance.Data,(this->TransferObjects).ArrayNum);
  pFVar1 = (this->TransferObjects).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x90);
  }
  return this;
}

// DestructItems<TSharedPtr<UE::GPUTextureTransfer::ITextureTransfer,1>,int> @ 14d756aa0

void __cdecl
DestructItems<TSharedPtr<UE::GPUTextureTransfer::ITextureTransfer,1>,int>
          (TSharedPtr<UE::GPUTextureTransfer::ITextureTransfer,1> *param_1,int param_2)

{
  FSharedReferencer<1> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &param_1->SharedReferenceCount;
    do {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pFVar1->ReferenceController);
      pFVar1 = pFVar1 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// Enqueue<TRenderCommandTag<`FGPUTextureTransferModule::InitializeTextureTransfer'::__l2::TSTR_InitializeTextureTransfer233>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 14d756fb0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_FGPUTextureTransferModule::InitializeTextureTransfer_::__l2::TSTR_InitializeTextureTransfer233>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
          (TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *param_1)

{
  int *piVar1;
  int iVar2;
  TStatIdData *pTVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  FRenderCommandTag *pFVar10;
  FRHICommandListImmediate *pFVar11;
  undefined8 uVar12;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  longlong *plVar13;
  FName FVar14;
  FColor_u_0 FVar15;
  FNameEntryId FVar16;
  FColor_u_0 local_res10;
  uint uStackX_14;
  FColor_u_0 local_res18;
  uint local_res1c;
  FConstructor local_res20;
  undefined8 *local_68;
  LARGE_INTEGER local_60;
  FName local_58;
  FStatMessage local_48;
  
  pFVar10 = (FRenderCommandTag *)
            TRenderCommandTag<`FGPUTextureTransferModule::InitializeTextureTransfer'::__l2::TSTR_InitializeTextureTransfer233>
            ::Get();
  if ((CpuChannel->Enabled < 0) || (RenderCommandsChannel->Enabled < 0)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&pFVar10->SpecId,pFVar10->Name,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
               ,0x255);
    FCpuProfilerTrace::OutputBeginEvent(pFVar10->SpecId);
  }
  bVar8 = IsInRenderingThread();
  if (!bVar8) {
    if (GIsThreadedRendering == false) {
      bVar8 = IsInGameThread();
      if (bVar8) goto LAB_14d757101;
    }
    if (GMainThreadBlockedOnRenderThread != (TAtomic<bool>)0x0) {
      bVar8 = IsInGameThread();
      if (bVar8) {
        bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<2708370973442179152>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                           ,0x50,
                           "!GMainThreadBlockedOnRenderThread.Load(EMemoryOrder::Relaxed) || !IsInGameThread()"
                          );
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
    }
    if (GRenderCommandPipeMode == None) {
      local_res20.Prerequisites =
           (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
            *)0x0;
      TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>_>
      ::FConstructor::
      ConstructAndDispatchWhenReady<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>,FRenderCommandTag_const_&>
                (&local_res20,(TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)&local_68
                 ,(FRenderCommandTag *)param_1);
      if (local_68 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_68 + 6);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)*local_68)(local_68,1);
        }
      }
    }
    else {
      EnqueueAndLaunch(&Instance,param_1,pFVar10);
    }
    goto LAB_14d7572f5;
  }
LAB_14d757101:
  pTVar3 = (pFVar10->StatId).StatIdPtr;
  FVar16.Value = 0;
  bVar8 = false;
  bVar7 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  FVar14 = *(FName *)&pTVar3->Name;
  FVar15.Bits = (uint)FVar14.ComparisonIndex.Value;
  uVar9 = FVar14.Number;
  if ((FVar15.Bits == 0) && (uVar9 == 0)) {
LAB_14d7571df:
    bVar5 = false;
    FVar14 = local_58;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10._s_0,(pTVar3->StatDescriptionAnsi).Ptr);
      bVar8 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.Bits = FVar15.Bits;
        local_res1c = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res18._s_0,(pTVar3->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                   ,0x266);
        bVar8 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14d7571df;
    local_res10.Bits = FVar15.Bits;
    uStackX_14 = uVar9;
    local_58 = FVar14;
    FThreadStats::AddMessage(FVar14,CycleScopeStart);
    bVar5 = true;
    FVar16.Value = local_58.ComparisonIndex.Value;
  }
  pFVar11 = GetImmediateCommandList_ForRenderCommand();
  UE::Core::Private::Function::CheckCallable(*(void **)param_1);
  pcVar4 = *(code **)param_1;
  plVar13 = (longlong *)&param_1->field_0x10;
  if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
    plVar13 = *(longlong **)&param_1->field_0x28;
  }
  uVar12 = (**(code **)(*plVar13 + 8))();
  (*pcVar4)(uVar12,pFVar11);
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      local_48.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      local_48.NameAndInfo.Index.Value = FVar16.Value;
      QueryPerformanceCounter(&local_60);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_60.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_60.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_60.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_60.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this,&local_48);
      piVar1 = &this->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this,false,false);
      }
    }
  }
LAB_14d7572f5:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// ~TFunction_OwnedObject<`FGPUTextureTransferModule::InitializeTextureTransfer'::__l2::<lambda_1>,1,0> @ 14d757630

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FGPUTextureTransferModule::InitializeTextureTransfer'::__l2::<lambda_1>,1,0>
::
~TFunction_OwnedObject<_FGPUTextureTransferModule::InitializeTextureTransfer_::__l2::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FGPUTextureTransferModule::InitializeTextureTransfer'::`2'::<lambda_1>,1,0>
        ::_vftable_;
  return;
}

// `scalar_deleting_destructor' @ 14d757df0

void * __thiscall
TBaseRawMethodDelegateInstance<0,FGPUTextureTransferModule,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FGPUTextureTransferModule,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d757e20

void * __thiscall
TBaseRawMethodDelegateInstance<0,FGPUTextureTransferModule,void___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FGPUTextureTransferModule,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d757e50

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FGPUTextureTransferModule::InitializeTextureTransfer'::__l2::<lambda_1>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FGPUTextureTransferModule::InitializeTextureTransfer'::`2'::<lambda_1>,1,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d757e90

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::GPUTextureTransfer::Private::FD3D11TextureTransfer,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<UE::GPUTextureTransfer::Private::FD3D11TextureTransfer,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x108);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d757ed0

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::GPUTextureTransfer::Private::FD3D12TextureTransfer,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<UE::GPUTextureTransfer::Private::FD3D12TextureTransfer,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x110);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d757f10

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::GPUTextureTransfer::Private::FVulkanTextureTransfer,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<UE::GPUTextureTransfer::Private::FVulkanTextureTransfer,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x118);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d757f50

void * __thiscall
UE::GPUTextureTransfer::Private::FD3D11TextureTransfer::_scalar_deleting_destructor_
          (FD3D11TextureTransfer *this,uint param_1)

{
  FTextureTransferBase::~FTextureTransferBase((FTextureTransferBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d757f90

void * __thiscall
UE::GPUTextureTransfer::Private::FD3D12TextureTransfer::_scalar_deleting_destructor_
          (FD3D12TextureTransfer *this,uint param_1)

{
  FTextureTransferBase::~FTextureTransferBase((FTextureTransferBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x100);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d757fd0

void * __thiscall
UE::GPUTextureTransfer::Private::FTextureTransferBase::_scalar_deleting_destructor_
          (FTextureTransferBase *this,uint param_1)

{
  ~FTextureTransferBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d758010

void * __thiscall
UE::GPUTextureTransfer::Private::FVulkanTextureTransfer::_scalar_deleting_destructor_
          (FVulkanTextureTransfer *this,uint param_1)

{
  FTextureTransferBase::~FTextureTransferBase((FTextureTransferBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x108);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d758050

void * __thiscall
UE::GPUTextureTransfer::ITextureTransfer::_scalar_deleting_destructor_
          (ITextureTransfer *this,uint param_1)

{
  *this = (ITextureTransfer)&___7ITextureTransfer_GPUTextureTransfer_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// GetIVulkanDynamicRHI @ 14d7598b0

IVulkanDynamicRHI * __cdecl GetIVulkanDynamicRHI(void)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  IVulkanDynamicRHI *pIVar4;
  
  if ((GDynamicRHI == (FDynamicRHI *)0x0) &&
     (bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("GDynamicRHI",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Public\\IVulkanDynamicRHI.h"
                         ,0x6b,L"Tried to fetch RHI too early"), bVar2)) {
    pcVar1 = (code *)swi(3);
    pIVar4 = (IVulkanDynamicRHI *)(*pcVar1)();
    return pIVar4;
  }
  iVar3 = (**(code **)(GDynamicRHI->_padding_ + 0x28))();
  if ((iVar3 != 4) &&
     (bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("GDynamicRHI->GetInterfaceType() == ERHIInterfaceType::Vulkan",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Public\\IVulkanDynamicRHI.h"
                         ,0x6c,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pIVar4 = (IVulkanDynamicRHI *)(*pcVar1)();
    return pIVar4;
  }
                    /* WARNING: Could not recover jumptable at 0x00014d75992c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pIVar4 = (IVulkanDynamicRHI *)(**(code **)(GDynamicRHI->_padding_ + 0x30))();
  return pIVar4;
}

// IMPLEMENT_MODULE_GPUTextureTransfer @ 14d75cc50

void __cdecl IMPLEMENT_MODULE_GPUTextureTransfer(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'CVarMediaIOEnableGPUDirect'' @ 150459110

void __cdecl _dynamic_atexit_destructor_for__CVarMediaIOEnableGPUDirect__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarMediaIOEnableGPUDirect);
  return;
}

// `dynamic_atexit_destructor_for_'LogGPUTextureTransfer'' @ 150459130

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogGPUTextureTransfer__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogGPUTextureTransfer);
  return;
}

// `dynamic_atexit_destructor_for_'SupportedGPUPrefixes'' @ 150459150

void __cdecl
`FGPUTextureTransferModule::InitializeTextureTransfer'::__l2::
_dynamic_atexit_destructor_for__SupportedGPUPrefixes__(void)

{
  DestructItems<FString,int>
            ((FString *)SupportedGPUPrefixes.AllocatorInstance.Data,SupportedGPUPrefixes.ArrayNum);
  if (SupportedGPUPrefixes.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(SupportedGPUPrefixes.AllocatorInstance.Data);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'TextureTransfersWrapper'' @ 150459190

void __cdecl UE::GPUTextureTransfer::_dynamic_atexit_destructor_for__TextureTransfersWrapper__(void)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  byte bVar4;
  
  bVar4 = 1;
  do {
    if (TextureTransfersWrapper.Transfers.ArrayNum <= (int)(uint)bVar4) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    plVar1 = *(longlong **)
              (TextureTransfersWrapper.Transfers.AllocatorInstance.Data + (ulonglong)bVar4 * 8);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x80))(plVar1);
      (**(code **)*plVar1)(plVar1,1);
      if (TextureTransfersWrapper.Transfers.ArrayNum <= (int)(uint)bVar4) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      *(undefined8 *)
       (TextureTransfersWrapper.Transfers.AllocatorInstance.Data + (ulonglong)bVar4 * 8) = 0;
    }
    bVar4 = bVar4 + 1;
  } while (bVar4 < 4);
  if (TextureTransfersWrapper.Transfers.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(TextureTransfersWrapper.Transfers.AllocatorInstance.Data);
  }
  return;
}

