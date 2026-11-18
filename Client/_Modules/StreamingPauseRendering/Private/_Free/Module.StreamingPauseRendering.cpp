// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StreamingPauseRendering
// Functions: 18

// `dynamic_initializer_for_'CVarRenderLastFrameInStreamingPause'' @ 1410acf00

void __cdecl _dynamic_initializer_for__CVarRenderLastFrameInStreamingPause__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 1;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarRenderLastFrameInStreamingPause,L"r.RenderLastFrameInStreamingPause",local_res8,
             L"If 1 the previous frame is displayed during streaming pause. If zero the screen is left black."
             ,0x20);
  atexit(_dynamic_atexit_destructor_for__CVarRenderLastFrameInStreamingPause__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantStreamingPauseRendering'' @ 1410acf50

void __cdecl _dynamic_initializer_for__ModuleRegistrantStreamingPauseRendering__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "StreamingPauseRendering";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"StreamingPauseRendering",0x17);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,
             FStaticallyLinkedModuleRegistrant<FStreamingPauseRenderingModule>::InitializeModule);
  return;
}

// Enqueue<TRenderCommandTag<`FStreamingPauseRenderingModule::BeginStreamingPause'::__l15::TSTR_EndDrawingCommand143>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 146c82280

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_FStreamingPauseRenderingModule::BeginStreamingPause_::__l15::TSTR_EndDrawingCommand143>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
            TRenderCommandTag<`FStreamingPauseRenderingModule::BeginStreamingPause'::__l15::TSTR_EndDrawingCommand143>
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
      if (bVar8) goto LAB_146c823d1;
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
    goto LAB_146c825c5;
  }
LAB_146c823d1:
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
LAB_146c824af:
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
    if (FThreadStats::bPrimaryEnable == false) goto LAB_146c824af;
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
LAB_146c825c5:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// ~TFunction_OwnedObject<`FStreamingPauseRenderingModule::BeginStreamingPause'::__l15::<lambda_1>,1,0> @ 146c82680

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FStreamingPauseRenderingModule::BeginStreamingPause'::__l15::<lambda_1>,1,0>
::
~TFunction_OwnedObject<_FStreamingPauseRenderingModule::BeginStreamingPause_::__l15::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FStreamingPauseRenderingModule::BeginStreamingPause'::`15'::<lambda_1>,1,0>
        ::_vftable_;
  return;
}

// `vcall'{64,{flat}}'_}' @ 146c82694

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* [thunk]: __cdecl FStreamingPauseRenderingModule::`vcall'{64,{flat}}' }' */

void __thiscall
FStreamingPauseRenderingModule::_vcall__64__flat______(FStreamingPauseRenderingModule *this)

{
                    /* WARNING: Could not recover jumptable at 0x000146c82697. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x40))();
  return;
}

// `vcall'{72,{flat}}'_}' @ 146c826a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* [thunk]: __cdecl FStreamingPauseRenderingModule::`vcall'{72,{flat}}' }' */

void __thiscall
FStreamingPauseRenderingModule::_vcall__72__flat______(FStreamingPauseRenderingModule *this)

{
                    /* WARNING: Could not recover jumptable at 0x000146c826a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x48))();
  return;
}

// `vector_deleting_destructor'`adjustor{24}' @ 146c826ac

/* [thunk]:public: virtual void * __ptr64 __cdecl FSlateRenderTargetRHI::`vector deleting
   destructor'`adjustor{24}' (unsigned int) __ptr64 */

void * __thiscall
FSlateRenderTargetRHI::_vector_deleting_destructor__adjustor_24__
          (FSlateRenderTargetRHI *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((FSlateRenderTargetRHI *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 146c826c0

void * __thiscall
IBaseDelegateInstance<void___cdecl(FViewport_*),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(FViewport_*),FDefaultDelegateUserPolicy> *this,
          uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146c826f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void * __thiscall
TBaseRawMethodDelegateInstance<0,FStreamingPauseRenderingModule,void___cdecl(FViewport_*),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FStreamingPauseRenderingModule,void___cdecl(FViewport_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146c82720

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void * __thiscall
TBaseRawMethodDelegateInstance<0,FStreamingPauseRenderingModule,void___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FStreamingPauseRenderingModule,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146c82750

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(FViewport_*),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(FViewport_*),FDefaultDelegateUserPolicy> *this,
          uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146c82780

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FStreamingPauseRenderingModule::BeginStreamingPause'::__l15::<lambda_1>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FStreamingPauseRenderingModule::BeginStreamingPause'::`15'::<lambda_1>,1,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146c827c0

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FBackgroundView,SharedPointerInternals::DefaultDeleter<FBackgroundView>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FBackgroundView,SharedPointerInternals::DefaultDeleter<FBackgroundView>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146c82800

void * __thiscall FBackgroundView::_scalar_deleting_destructor_(FBackgroundView *this,uint param_1)

{
  FSlateRenderTargetRHI *pFVar1;
  FRenderResource *pFVar2;
  
  this->_padding_ = (longlong)&___7FBackgroundView__6B_;
  pFVar2 = (FRenderResource *)&this->RenderTarget->_padding_;
  if (this->RenderTarget == (FSlateRenderTargetRHI *)0x0) {
    pFVar2 = (FRenderResource *)0x0;
  }
  ReleaseResourceAndFlush(pFVar2);
  pFVar1 = this->RenderTarget;
  if (pFVar1 != (FSlateRenderTargetRHI *)0x0) {
    (**(code **)(pFVar1->_padding_ + 0x38))(pFVar1,1);
  }
  this->_padding_ = (longlong)&___7ISlateViewport__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146c82880

void * __thiscall
FSlateRenderTargetRHI::_scalar_deleting_destructor_(FSlateRenderTargetRHI *this,uint param_1)

{
  FRenderResource::~FRenderResource((FRenderResource *)&this->_padding_);
  this->_padding_ = (longlong)&___7__TSlateTexture_V__TRefCountPtr_VFRHITexture______6B_;
  if ((FRHIResource *)this->_padding_ != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)this->_padding_);
  }
  *(undefined1 *)&this->_padding_ = 0x84;
  this->_padding_ = (longlong)&___7FSlateShaderResource__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146c828f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void * __thiscall
FStreamingPauseRenderingModule::_scalar_deleting_destructor_
          (FStreamingPauseRenderingModule *this,uint param_1)

{
  void *pvVar1;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->EndDelegate);
  pvVar1 = *(void **)&(this->EndDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->EndDelegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->BeginDelegate);
  pvVar1 = *(void **)&(this->BeginDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->BeginDelegate);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->BackgroundView).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ViewportWidget).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SceneViewport).SharedReferenceCount.ReferenceController);
  this->_padding_ = (longlong)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// IMPLEMENT_MODULE_StreamingPauseRendering @ 146c84820

void __cdecl IMPLEMENT_MODULE_StreamingPauseRendering(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'CVarRenderLastFrameInStreamingPause'' @ 1503dfdf0

void __cdecl _dynamic_atexit_destructor_for__CVarRenderLastFrameInStreamingPause__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarRenderLastFrameInStreamingPause);
  return;
}

