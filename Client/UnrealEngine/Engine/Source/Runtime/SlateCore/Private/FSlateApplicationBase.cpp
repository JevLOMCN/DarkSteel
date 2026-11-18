// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 20

// FSlateApplicationBase @ 14242d0c0

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

FSlateApplicationBase * __thiscall
FSlateApplicationBase::FSlateApplicationBase(FSlateApplicationBase *this)

{
  code *pcVar1;
  bool bVar2;
  FSlateAccessibleMessageHandler *pFVar3;
  FSlateAccessibleMessageHandler *pFVar4;
  FSlateAccessibleMessageHandler *pFVar5;
  FSlateApplicationBase *pFVar6;
  FTextLocalizationManager *pFVar7;
  <lambda_1> local_res10 [8];
  
  pFVar5 = (FSlateAccessibleMessageHandler *)0x0;
  *(undefined ***)this = &___7FSlateApplicationBase__6B_;
  *(undefined8 *)&(this->ActiveTimerHandles).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->ActiveTimerHandles).Elements = 0;
  *(undefined8 *)&(this->ActiveTimerHandles).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->ActiveTimerHandles).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->ActiveTimerHandles).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->ActiveTimerHandles).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ActiveTimerHandles).Elements.field_0x34 = 0;
  (this->ActiveTimerHandles).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->ActiveTimerHandles).HashSize = 0;
  (this->Renderer).Object = (FSlateRenderer *)0x0;
  (this->Renderer).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->HitTesting).SlateApp = this;
  (this->CachedDisplayMetrics).MonitorInfo.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CachedDisplayMetrics).MonitorInfo.ArrayNum = 0;
  (this->CachedDisplayMetrics).MonitorInfo.ArrayMax = 0;
  (this->CachedDisplayMetrics).PrimaryDisplayWorkAreaRect.Left = 0;
  (this->CachedDisplayMetrics).PrimaryDisplayWorkAreaRect.Top = 0;
  (this->CachedDisplayMetrics).PrimaryDisplayWorkAreaRect.Right = 0;
  (this->CachedDisplayMetrics).PrimaryDisplayWorkAreaRect.Bottom = 0;
  (this->CachedDisplayMetrics).VirtualDisplayRect.Left = 0;
  (this->CachedDisplayMetrics).VirtualDisplayRect.Top = 0;
  (this->CachedDisplayMetrics).VirtualDisplayRect.Right = 0;
  (this->CachedDisplayMetrics).VirtualDisplayRect.Bottom = 0;
  (this->CachedDisplayMetrics).TitleSafePaddingSize.field0_0x0._s_0.X = 0.0;
  (this->CachedDisplayMetrics).TitleSafePaddingSize.field0_0x0._s_0.Y = 0.0;
  (this->CachedDisplayMetrics).TitleSafePaddingSize.field0_0x0._s_0.Z = 0.0;
  (this->CachedDisplayMetrics).TitleSafePaddingSize.field0_0x0._s_0.W = 0.0;
  (this->CachedDisplayMetrics).ActionSafePaddingSize.field0_0x0._s_0.X = 0.0;
  (this->CachedDisplayMetrics).ActionSafePaddingSize.field0_0x0._s_0.Y = 0.0;
  (this->CachedDisplayMetrics).ActionSafePaddingSize.field0_0x0._s_0.Z = 0.0;
  (this->CachedDisplayMetrics).ActionSafePaddingSize.field0_0x0._s_0.W = 0.0;
  pFVar3 = ::operator_new(0x98);
  pFVar4 = pFVar5;
  if (pFVar3 != (FSlateAccessibleMessageHandler *)0x0) {
    pFVar4 = FSlateAccessibleMessageHandler::FSlateAccessibleMessageHandler(pFVar3);
  }
  (this->AccessibleMessageHandler).Object = pFVar4;
  pFVar3 = ::operator_new(0x18);
  if (pFVar3 != (FSlateAccessibleMessageHandler *)0x0) {
    *(undefined4 *)&pFVar3->_padding_ = 1;
    pFVar3->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFSlateAccessibleMessageHandler__U__DefaultDeleter_VFSlateAccessibleMessageHandler___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    *(undefined4 *)((longlong)&pFVar3->_padding_ + 4) = 1;
    pFVar3->_padding_ = (longlong)pFVar4;
    pFVar5 = pFVar3;
  }
  (this->AccessibleMessageHandler).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)pFVar5;
  if ((pFVar4 == (FSlateAccessibleMessageHandler *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar6 = (FSlateApplicationBase *)(*pcVar1)();
    return pFVar6;
  }
  *(undefined8 *)&this->OnInvalidateAllWidgetsEvent = 0;
  *(undefined8 *)&(this->OnInvalidateAllWidgetsEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnInvalidateAllWidgetsEvent).field_0x10 = 0;
  *(undefined8 *)&(this->OnInvalidateAllWidgetsEvent).field_0x18 = 2;
  *(undefined8 *)&this->OnGlobalInvalidationToggledEvent = 0;
  *(undefined8 *)&(this->OnGlobalInvalidationToggledEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnGlobalInvalidationToggledEvent).field_0x10 = 0;
  *(undefined8 *)&(this->OnGlobalInvalidationToggledEvent).field_0x18 = 2;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->ActiveTimerCS,4000);
  this->bIsSlateAsleep = false;
  this->CustomSafeZoneState = Unset;
  (this->CustomSafeZoneRatio).Left = 0.0;
  (this->CustomSafeZoneRatio).Top = 0.0;
  (this->CustomSafeZoneRatio).Right = 0.0;
  (this->CustomSafeZoneRatio).Bottom = 0.0;
  this->bAnyActiveTimersPending = false;
  pFVar7 = FTextLocalizationManager::Get();
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
  AddLambda<_FSlateApplicationBase::FSlateApplicationBase_::__l2::<lambda_1>_>
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &pFVar7->OnTextRevisionChangedEvent,local_res10);
  return this;
}

// ~FSlateApplicationBase @ 14242f170

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall FSlateApplicationBase::~FSlateApplicationBase(FSlateApplicationBase *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  ForElementType<FSetElementId> FVar3;
  
  *(undefined ***)this = &___7FSlateApplicationBase__6B_;
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->ActiveTimerCS);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnGlobalInvalidationToggledEvent).field_0x8,
             *(int *)&(this->OnGlobalInvalidationToggledEvent).field_0x10);
  pvVar1 = *(void **)&(this->OnGlobalInvalidationToggledEvent).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnGlobalInvalidationToggledEvent);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnInvalidateAllWidgetsEvent).field_0x8,
             *(int *)&(this->OnInvalidateAllWidgetsEvent).field_0x10);
  pvVar1 = *(void **)&(this->OnInvalidateAllWidgetsEvent).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnInvalidateAllWidgetsEvent);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->AccessibleMessageHandler).SharedReferenceCount.ReferenceController);
  DestructItems<FMonitorInfo,int>
            ((FMonitorInfo *)(this->CachedDisplayMetrics).MonitorInfo.AllocatorInstance.Data,
             (this->CachedDisplayMetrics).MonitorInfo.ArrayNum);
  pFVar2 = (this->CachedDisplayMetrics).MonitorInfo.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Renderer).SharedReferenceCount.ReferenceController);
  (this->ActiveTimerHandles).HashSize = 0;
  FVar3 = (this->ActiveTimerHandles).Hash.SecondaryData;
  if (FVar3 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar3);
  }
  TSparseArray<TSparseSetElement<TWeakPtr<FActiveTimerHandle,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TWeakPtr<FActiveTimerHandle,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->ActiveTimerHandles).Elements);
  return;
}

// operator() @ 14242f7b0

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`FSlateApplicationBase::FSlateApplicationBase'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  FSlateApplicationBase *pFVar2;
  bool bVar3;
  
  if (FSlateApplicationBase::CurrentBaseApplication.Object != (FSlateApplicationBase *)0x0) {
    if ((FSlateApplicationBase::CurrentBaseApplication.Object == (FSlateApplicationBase *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("CurrentBaseApplication.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Application\\SlateApplicationBase.h"
                           ,0x22a,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if ((FSlateApplicationBase::CurrentBaseApplication.Object == (FSlateApplicationBase *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x44d,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pFVar2 = FSlateApplicationBase::CurrentBaseApplication.Object;
    bVar3 = DoesThreadOwnSlateRendering();
    if (bVar3) {
      FGenericPlatformMisc::BeginNamedEvent(&FColor::Red,"Slate_GlobalInvalidate");
      bVar3 = -1 < CpuChannel->Enabled;
      if (bVar3) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId227,"Slate_GlobalInvalidate",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Application\\SlateApplicationBase.cpp"
                   ,0xe3);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId227);
      }
      if (4 < (byte)LogSlate._0_1_) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogSlate);
      }
      TMulticastDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy>::Broadcast
                ((TMulticastDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy> *)
                 &pFVar2->OnInvalidateAllWidgetsEvent,false);
      if (bVar3) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      FGenericPlatformMisc::EndNamedEvent();
      return;
    }
  }
  return;
}

// Get @ 14243e3a0

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

FSlateApplicationBase * __cdecl FSlateApplicationBase::Get(void)

{
  code *pcVar1;
  bool bVar2;
  FSlateApplicationBase *pFVar3;
  
  if (CurrentBaseApplication.Object == (FSlateApplicationBase *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("CurrentBaseApplication.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Application\\SlateApplicationBase.h"
                       ,0x22a,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FSlateApplicationBase *)(*pcVar1)();
      return pFVar3;
    }
    if ((CurrentBaseApplication.Object == (FSlateApplicationBase *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x44d,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FSlateApplicationBase *)(*pcVar1)();
      return pFVar3;
    }
  }
  return CurrentBaseApplication.Object;
}

// GetCachedDisplayMetrics @ 14243e8d0

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall
FSlateApplicationBase::GetCachedDisplayMetrics(FSlateApplicationBase *this,FDisplayMetrics *param_1)

{
  FDisplayMetrics::operator=(param_1,&this->CachedDisplayMetrics);
  return;
}

// GetDisplayMetrics @ 14243eb10

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall
FSlateApplicationBase::GetDisplayMetrics(FSlateApplicationBase *this,FDisplayMetrics *param_1)

{
  float fVar1;
  
  FDisplayMetrics::RebuildDisplayMetrics(param_1);
  FDisplayMetrics::operator=(&this->CachedDisplayMetrics,param_1);
  fVar1 = FDisplayMetrics::GetDebugTitleSafeZoneRatio();
  this->CachedDebugTitleSafeRatio = fVar1;
  return;
}

// GetHitTesting @ 14243ee20

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

FHitTesting * __thiscall FSlateApplicationBase::GetHitTesting(FSlateApplicationBase *this)

{
  return &this->HitTesting;
}

// GetPlatformApplication @ 14243f5c0

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

TSharedPtr<GenericApplication,1> * __thiscall
FSlateApplicationBase::GetPlatformApplication
          (FSlateApplicationBase *this,TSharedPtr<GenericApplication,1> *__return_storage_ptr__)

{
  atomic<int> *paVar1;
  FSharedReferencer<1> FVar2;
  
  __return_storage_ptr__->Object = PlatformApplication.Object;
  FVar2 = PlatformApplication.SharedReferenceCount;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       PlatformApplication.SharedReferenceCount.ReferenceController;
  if (FVar2.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(FVar2.ReferenceController)->SharedReferenceCount;
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetSafeZoneRatio @ 14243f6d0

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall
FSlateApplicationBase::GetSafeZoneRatio(FSlateApplicationBase *this,FMargin *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  FDisplayMetrics local_88;
  
  if ((this->CustomSafeZoneState == Set) ||
     ((this->CustomSafeZoneState == Debug &&
      (((((this->CustomSafeZoneRatio).Left != 0.0 || ((this->CustomSafeZoneRatio).Right != 0.0)) ||
        ((this->CustomSafeZoneRatio).Top != 0.0)) || ((this->CustomSafeZoneRatio).Bottom != 0.0)))))
     ) {
    fVar2 = (this->CustomSafeZoneRatio).Top;
    fVar3 = (this->CustomSafeZoneRatio).Right;
    fVar1 = (this->CustomSafeZoneRatio).Bottom;
    param_1->Left = (this->CustomSafeZoneRatio).Left;
    param_1->Top = fVar2;
    param_1->Right = fVar3;
    param_1->Bottom = fVar1;
  }
  else {
    local_88.MonitorInfo.ArrayNum = 0;
    local_88.MonitorInfo.ArrayMax = 0;
    local_88.PrimaryDisplayWorkAreaRect.Left = 0;
    local_88.PrimaryDisplayWorkAreaRect.Top = 0;
    local_88.PrimaryDisplayWorkAreaRect.Right = 0;
    local_88.PrimaryDisplayWorkAreaRect.Bottom = 0;
    local_88.VirtualDisplayRect.Left = 0;
    local_88.VirtualDisplayRect.Top = 0;
    local_88.MonitorInfo.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_88.VirtualDisplayRect.Right = 0;
    local_88.VirtualDisplayRect.Bottom = 0;
    local_88.TitleSafePaddingSize.field0_0x0._s_0.X = 0.0;
    local_88.TitleSafePaddingSize.field0_0x0._s_0.Y = 0.0;
    local_88.TitleSafePaddingSize.field0_0x0._s_0.Z = 0.0;
    local_88.TitleSafePaddingSize.field0_0x0._s_0.W = 0.0;
    local_88.ActionSafePaddingSize.field0_0x0._s_0.X = 0.0;
    local_88.ActionSafePaddingSize.field0_0x0._s_0.Y = 0.0;
    local_88.ActionSafePaddingSize.field0_0x0._s_0.Z = 0.0;
    local_88.ActionSafePaddingSize.field0_0x0._s_0.W = 0.0;
    FDisplayMetrics::operator=(&local_88,&this->CachedDisplayMetrics);
    fVar2 = __real_40000000 / (float)local_88.PrimaryDisplayWidth;
    fVar3 = __real_40000000 / (float)local_88.PrimaryDisplayHeight;
    param_1->Left = (float)local_88.TitleSafePaddingSize.field0_0x0._s_0.X * fVar2;
    param_1->Right = (float)local_88.TitleSafePaddingSize.field0_0x0._s_0.Z * fVar2;
    param_1->Top = (float)local_88.TitleSafePaddingSize.field0_0x0._s_0.Y * fVar3;
    param_1->Bottom = (float)local_88.TitleSafePaddingSize.field0_0x0._s_0.W * fVar3;
    DestructItems<FMonitorInfo,int>
              ((FMonitorInfo *)local_88.MonitorInfo.AllocatorInstance.Data,
               local_88.MonitorInfo.ArrayNum);
    if ((FMonitorInfo *)local_88.MonitorInfo.AllocatorInstance.Data != (FMonitorInfo *)0x0) {
      FMemory::Free(local_88.MonitorInfo.AllocatorInstance.Data);
      return;
    }
  }
  return;
}

// GetSafeZoneSize @ 14243f820

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall
FSlateApplicationBase::GetSafeZoneSize
          (FSlateApplicationBase *this,FMargin *param_1,FDeprecateVector2DParameter *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float local_res8;
  float fStackX_c;
  FDisplayMetrics local_f8;
  
  local_res8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0._0_4_;
  fStackX_c = UE::Math::TVector2<float>::ZeroVector.field0_0x0._4_4_;
  if ((local_res8 == 0.0) && (fStackX_c == 0.0)) {
    local_f8.MonitorInfo.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_f8.MonitorInfo.ArrayNum = 0;
    local_f8.MonitorInfo.ArrayMax = 0;
    local_f8.PrimaryDisplayWorkAreaRect.Left = 0;
    local_f8.PrimaryDisplayWorkAreaRect.Top = 0;
    local_f8.PrimaryDisplayWorkAreaRect.Right = 0;
    local_f8.PrimaryDisplayWorkAreaRect.Bottom = 0;
    local_f8.VirtualDisplayRect.Left = 0;
    local_f8.VirtualDisplayRect.Top = 0;
    local_f8.VirtualDisplayRect.Right = 0;
    local_f8.VirtualDisplayRect.Bottom = 0;
    local_f8.TitleSafePaddingSize.field0_0x0._s_0.X = 0.0;
    local_f8.TitleSafePaddingSize.field0_0x0._s_0.Y = 0.0;
    local_f8.TitleSafePaddingSize.field0_0x0._s_0.Z = 0.0;
    local_f8.TitleSafePaddingSize.field0_0x0._s_0.W = 0.0;
    local_f8.ActionSafePaddingSize.field0_0x0._s_0.X = 0.0;
    local_f8.ActionSafePaddingSize.field0_0x0._s_0.Y = 0.0;
    local_f8.ActionSafePaddingSize.field0_0x0._s_0.Z = 0.0;
    local_f8.ActionSafePaddingSize.field0_0x0._s_0.W = 0.0;
    FDisplayMetrics::operator=(&local_f8,&this->CachedDisplayMetrics);
    local_res8 = (float)local_f8.PrimaryDisplayWidth;
    fStackX_c = (float)local_f8.PrimaryDisplayHeight;
    DestructItems<FMonitorInfo,int>
              ((FMonitorInfo *)local_f8.MonitorInfo.AllocatorInstance.Data,
               local_f8.MonitorInfo.ArrayNum);
    if ((FMonitorInfo *)local_f8.MonitorInfo.AllocatorInstance.Data != (FMonitorInfo *)0x0) {
      FMemory::Free(local_f8.MonitorInfo.AllocatorInstance.Data);
    }
  }
  if ((this->CustomSafeZoneState == Set) ||
     ((this->CustomSafeZoneState == Debug &&
      (((((this->CustomSafeZoneRatio).Left != 0.0 || ((this->CustomSafeZoneRatio).Right != 0.0)) ||
        ((this->CustomSafeZoneRatio).Top != 0.0)) || ((this->CustomSafeZoneRatio).Bottom != 0.0)))))
     ) {
    fVar2 = (this->CustomSafeZoneRatio).Left;
    fVar5 = (this->CustomSafeZoneRatio).Top;
    fVar4 = (this->CustomSafeZoneRatio).Right;
    fVar3 = (this->CustomSafeZoneRatio).Bottom;
  }
  else {
    local_f8.MonitorInfo.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_f8.MonitorInfo.ArrayNum = 0;
    local_f8.MonitorInfo.ArrayMax = 0;
    local_f8.PrimaryDisplayWorkAreaRect.Left = 0;
    local_f8.PrimaryDisplayWorkAreaRect.Top = 0;
    local_f8.PrimaryDisplayWorkAreaRect.Right = 0;
    local_f8.PrimaryDisplayWorkAreaRect.Bottom = 0;
    local_f8.VirtualDisplayRect.Left = 0;
    local_f8.VirtualDisplayRect.Top = 0;
    local_f8.TitleSafePaddingSize.field0_0x0._s_0.X = 0.0;
    local_f8.TitleSafePaddingSize.field0_0x0._s_0.Y = 0.0;
    local_f8.TitleSafePaddingSize.field0_0x0._s_0.Z = 0.0;
    local_f8.TitleSafePaddingSize.field0_0x0._s_0.W = 0.0;
    local_f8.ActionSafePaddingSize.field0_0x0._s_0.X = 0.0;
    local_f8.ActionSafePaddingSize.field0_0x0._s_0.Y = 0.0;
    local_f8.ActionSafePaddingSize.field0_0x0._s_0.Z = 0.0;
    local_f8.ActionSafePaddingSize.field0_0x0._s_0.W = 0.0;
    local_f8.VirtualDisplayRect.Right = 0;
    local_f8.VirtualDisplayRect.Bottom = 0;
    FDisplayMetrics::operator=(&local_f8,&this->CachedDisplayMetrics);
    fVar5 = (float)local_f8.TitleSafePaddingSize.field0_0x0._s_0.Y *
            (__real_40000000 / (float)local_f8.PrimaryDisplayHeight);
    fVar3 = (float)local_f8.TitleSafePaddingSize.field0_0x0._s_0.W *
            (__real_40000000 / (float)local_f8.PrimaryDisplayHeight);
    fVar2 = (float)local_f8.TitleSafePaddingSize.field0_0x0._s_0.X *
            (__real_40000000 / (float)local_f8.PrimaryDisplayWidth);
    fVar4 = (float)local_f8.TitleSafePaddingSize.field0_0x0._s_0.Z *
            (__real_40000000 / (float)local_f8.PrimaryDisplayWidth);
    DestructItems<FMonitorInfo,int>
              ((FMonitorInfo *)local_f8.MonitorInfo.AllocatorInstance.Data,
               local_f8.MonitorInfo.ArrayNum);
    if ((FMonitorInfo *)local_f8.MonitorInfo.AllocatorInstance.Data != (FMonitorInfo *)0x0) {
      FMemory::Free(local_f8.MonitorInfo.AllocatorInstance.Data);
    }
  }
  fVar1 = __real_3f000000;
  param_1->Left = local_res8 * fVar2 * __real_3f000000;
  param_1->Right = fVar4 * local_res8 * fVar1;
  param_1->Bottom = fVar3 * fStackX_c * fVar1;
  param_1->Top = fStackX_c * fVar5 * fVar1;
  return;
}

// InvalidateAllWidgets @ 1424451f0

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FSlateApplicationBase::InvalidateAllWidgets(FSlateApplicationBase *this,bool param_1)

{
  bool bVar1;
  
  bVar1 = DoesThreadOwnSlateRendering();
  if (bVar1) {
    FGenericPlatformMisc::BeginNamedEvent(&FColor::Red,"Slate_GlobalInvalidate");
    bVar1 = -1 < CpuChannel->Enabled;
    if (bVar1) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId227,"Slate_GlobalInvalidate",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Application\\SlateApplicationBase.cpp"
                 ,0xe3);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId227);
    }
    if (4 < (byte)LogSlate._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogSlate);
    }
    TMulticastDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy>::Broadcast
              ((TMulticastDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy> *)
               &this->OnInvalidateAllWidgetsEvent,param_1);
    if (bVar1) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    FGenericPlatformMisc::EndNamedEvent();
  }
  return;
}

// IsCustomSafeZoneSet @ 142445810

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

bool __thiscall FSlateApplicationBase::IsCustomSafeZoneSet(FSlateApplicationBase *this)

{
  if ((this->CustomSafeZoneState != Set) &&
     ((this->CustomSafeZoneState != Debug ||
      (((((this->CustomSafeZoneRatio).Left == 0.0 && ((this->CustomSafeZoneRatio).Right == 0.0)) &&
        ((this->CustomSafeZoneRatio).Top == 0.0)) && ((this->CustomSafeZoneRatio).Bottom == 0.0)))))
     ) {
    return false;
  }
  return true;
}

// IsSlateAsleep @ 142445b90

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

bool __thiscall FSlateApplicationBase::IsSlateAsleep(FSlateApplicationBase *this)

{
  return this->bIsSlateAsleep;
}

// RegisterActiveTimer @ 14244da60

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall
FSlateApplicationBase::RegisterActiveTimer
          (FSlateApplicationBase *this,TSharedRef<FActiveTimerHandle,1> *param_1)

{
  atomic<int> *paVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  atomic<int> aVar2;
  FActiveTimerHandle *local_18;
  TReferenceControllerBase<1> *local_10;
  
  lpCriticalSection = &this->ActiveTimerCS;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    local_18 = param_1->Object;
    local_10 = (param_1->SharedReferenceCount).ReferenceController;
    if (local_10 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_10->WeakReferenceCount = (atomic<int>)((int)local_10->WeakReferenceCount + 1);
      UNLOCK();
    }
    TSet<TWeakPtr<FActiveTimerHandle,1>,DefaultKeyFuncs<TWeakPtr<FActiveTimerHandle,1>,0>,FDefaultSetAllocator>
    ::Emplace<TWeakPtr<FActiveTimerHandle,1>_>
              (&this->ActiveTimerHandles,(TWeakPtr<FActiveTimerHandle,1> *)&stack0x00000008,
               (bool *)&local_18);
    if (local_10 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &local_10->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)(local_10->_padding_ + 8))(local_10,1);
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00014244daf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// ResetCustomSafeZone @ 1424506b0

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall FSlateApplicationBase::ResetCustomSafeZone(FSlateApplicationBase *this)

{
  this->CustomSafeZoneState = Unset;
  (this->CustomSafeZoneRatio).Left = 0.0;
  (this->CustomSafeZoneRatio).Top = 0.0;
  (this->CustomSafeZoneRatio).Right = 0.0;
  (this->CustomSafeZoneRatio).Bottom = 0.0;
  return;
}

// SetCustomSafeZone @ 142452090

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall
FSlateApplicationBase::SetCustomSafeZone(FSlateApplicationBase *this,FMargin *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = param_1->Left;
  fVar2 = param_1->Top;
  fVar3 = param_1->Right;
  fVar4 = param_1->Bottom;
  this->CustomSafeZoneState = Set;
  (this->CustomSafeZoneRatio).Left = fVar1;
  (this->CustomSafeZoneRatio).Top = fVar2;
  (this->CustomSafeZoneRatio).Right = fVar3;
  (this->CustomSafeZoneRatio).Bottom = fVar4;
  return;
}

// ToggleGlobalInvalidation @ 142454a30

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall
FSlateApplicationBase::ToggleGlobalInvalidation(FSlateApplicationBase *this,bool param_1)

{
  if (GSlateEnableGlobalInvalidation != param_1) {
    GSlateEnableGlobalInvalidation = param_1;
    TMulticastDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy>::Broadcast
              ((TMulticastDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy> *)
               &this->OnGlobalInvalidationToggledEvent,param_1);
    return;
  }
  return;
}

// UnRegisterActiveTimer @ 1424551a0

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall
FSlateApplicationBase::UnRegisterActiveTimer
          (FSlateApplicationBase *this,TSharedRef<FActiveTimerHandle,1> *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  TWeakPtr<FActiveTimerHandle_const_,1> local_18;
  
  lpCriticalSection = &this->ActiveTimerCS;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    local_18.Object = param_1->Object;
    local_18.WeakReferenceCount.ReferenceController =
         (param_1->SharedReferenceCount).ReferenceController;
    if (local_18.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_18.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
           (atomic<int>)
           ((int)(local_18.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
      UNLOCK();
    }
    TSet<TWeakPtr<FActiveTimerHandle,1>,DefaultKeyFuncs<TWeakPtr<FActiveTimerHandle,1>,0>,FDefaultSetAllocator>
    ::Remove(&this->ActiveTimerHandles,&local_18);
                    /* WARNING: Could not recover jumptable at 0x000142455204. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// UpdateAnyActiveTimersArePending @ 142455b30

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall FSlateApplicationBase::UpdateAnyActiveTimersArePending(FSlateApplicationBase *this)

{
  ulonglong uVar1;
  undefined1 *puVar2;
  code *pcVar3;
  double dVar4;
  atomic<int> aVar5;
  TSet<TWeakPtr<FActiveTimerHandle,1>,DefaultKeyFuncs<TWeakPtr<FActiveTimerHandle,1>,0>,FDefaultSetAllocator>
  *pTVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  atomic<int> aVar10;
  byte bVar11;
  longlong lVar12;
  uint uVar13;
  longlong lVar14;
  int iVar15;
  TReferenceControllerBase<1> *pTVar16;
  int iVar17;
  undefined1 *puVar18;
  int iVar19;
  uint *puVar20;
  undefined1 *puVar21;
  uint uVar22;
  bool bVar23;
  bool bVar24;
  undefined1 local_res8 [8];
  uint local_res10;
  int local_res18;
  int local_res20;
  undefined4 uStack_bc;
  undefined1 local_b8 [12];
  uint local_ac;
  longlong local_a8;
  uint local_a0;
  int local_9c;
  TSet<TWeakPtr<FActiveTimerHandle,1>,DefaultKeyFuncs<TWeakPtr<FActiveTimerHandle,1>,0>,FDefaultSetAllocator>
  *local_90;
  TSet<TWeakPtr<FActiveTimerHandle,1>,DefaultKeyFuncs<TWeakPtr<FActiveTimerHandle,1>,0>,FDefaultSetAllocator>
  *local_88;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_80;
  undefined8 uStack_60;
  
  if (&this->ActiveTimerCS == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&this->ActiveTimerCS);
  TSet<TWeakPtr<FActiveTimerHandle,1>,DefaultKeyFuncs<TWeakPtr<FActiveTimerHandle,1>,0>,FDefaultSetAllocator>
  ::TIterator::TIterator((TIterator *)local_b8,&this->ActiveTimerHandles);
  if (local_9c < *(int *)(local_a8 + 0x18)) {
    do {
      if (((*(longlong *)(*(longlong *)local_b8._0_8_ + (longlong)local_9c * 0x18) == 0) ||
          (lVar12 = *(longlong *)(*(longlong *)local_b8._0_8_ + 8 + (longlong)local_9c * 0x18),
          lVar12 == 0)) || (*(int *)(lVar12 + 8) < 1)) {
        TSet<TWeakPtr<FActiveTimerHandle,1>,DefaultKeyFuncs<TWeakPtr<FActiveTimerHandle,1>,0>,FDefaultSetAllocator>
        ::RemoveByIndex(local_90,local_9c);
      }
      local_a0 = local_a0 & ~local_ac;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_b8 + 8));
    } while (local_9c < *(int *)(local_a8 + 0x18));
  }
  dVar4 = (double)(**(code **)(*(longlong *)this + 0x60))(this);
  iVar15 = *(int *)&(this->ActiveTimerHandles).Elements.field_0x28;
  TStack_80.Array =
       (TBitArray<FDefaultBitArrayAllocator> *)&(this->ActiveTimerHandles).Elements.field_0x10;
  iVar17 = 0;
  iVar19 = 0;
  bVar23 = false;
  bVar24 = false;
  uVar8 = 1;
  iVar9 = 0;
  if (iVar15 != 0) {
    puVar20 = *(uint **)&(this->ActiveTimerHandles).Elements.field_0x20;
    if (puVar20 == (uint *)0x0) {
      puVar20 = (uint *)TStack_80.Array;
    }
    uVar22 = *puVar20;
    while (uVar22 == 0) {
      lVar12 = (longlong)iVar17;
      iVar19 = iVar19 + 0x20;
      iVar17 = iVar17 + 1;
      if ((int)(iVar15 + -1 + (iVar15 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar17) goto LAB_142455c84;
      uVar22 = puVar20[lVar12 + 1];
    }
    uVar8 = -uVar22 & uVar22;
    uVar1 = (ulonglong)uVar8 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_res18 = (int)lVar12;
    iVar9 = iVar19 + -1 + local_res18;
    if (iVar15 < iVar9) {
LAB_142455c84:
      iVar9 = iVar15;
    }
  }
  puVar21 = &(this->ActiveTimerHandles).Elements.field_0x10;
  local_res10 = *(uint *)&(this->ActiveTimerHandles).Elements.field_0x28;
  uVar22 = local_res10 & 0xffffffe0;
  TStack_80.CurrentBitIndex = iVar9;
  TStack_80.UnvisitedBitMask = 0xffffffff;
  TStack_80._padding_ = CONCAT44(uVar8,iVar17);
  iVar15 = (int)local_res10 >> 5;
  TStack_80._28_4_ = iVar9;
  TStack_80.BaseBitIndex = iVar19;
  uStack_60 = CONCAT44(uStack_bc,
                       *(int *)&(this->ActiveTimerHandles).Elements.field_0x8 -
                       *(int *)&(this->ActiveTimerHandles).Elements.field_0x34);
  bVar11 = (byte)local_res10;
  local_88 = &this->ActiveTimerHandles;
  if (((int)local_res10 < 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar8 = *(uint *)&(this->ActiveTimerHandles).Elements.field_0x28;
  if (local_res10 != uVar8) {
    puVar2 = *(undefined1 **)&(this->ActiveTimerHandles).Elements.field_0x20;
    puVar18 = puVar21;
    if (puVar2 != (undefined1 *)0x0) {
      puVar18 = puVar2;
    }
    uVar13 = -1 << (bVar11 & 0x1f) & *(uint *)(puVar18 + (longlong)iVar15 * 4);
    while (uVar13 == 0) {
      lVar12 = (longlong)iVar15;
      uVar22 = uVar22 + 0x20;
      iVar15 = iVar15 + 1;
      local_res10 = uVar8;
      if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15) goto LAB_142455d8f;
      uVar13 = *(uint *)(puVar18 + lVar12 * 4 + 4);
    }
    uVar1 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_res20 = (int)lVar12;
    local_res10 = local_res20 + -1 + uVar22;
    if ((int)uVar8 < (int)local_res10) {
      local_res10 = uVar8;
    }
  }
LAB_142455d8f:
  uVar8 = local_res10;
  do {
    pTVar6 = local_88;
    if (*(int *)&(local_88->Elements).field_0x8 - *(int *)&(local_88->Elements).field_0x34 !=
        (int)uStack_60) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<TWeakPtr<FActiveTimerHandle,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_80.CurrentBitIndex == uVar8) &&
        (TStack_80.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar21)) &&
       (pTVar6 == &this->ActiveTimerHandles)) {
      this->bAnyActiveTimersPending = bVar24;
                    /* WARNING: Could not recover jumptable at 0x000142455ef1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      LeaveCriticalSection((LPCRITICAL_SECTION)&this->ActiveTimerCS);
      return;
    }
    lVar12 = *(longlong *)&pTVar6->Elements;
    lVar14 = 0;
    pTVar16 = *(TReferenceControllerBase<1> **)
               (lVar12 + 8 + (longlong)TStack_80.CurrentBitIndex * 0x18);
    if (pTVar16 == (TReferenceControllerBase<1> *)0x0) {
LAB_142455e04:
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("ActiveTimerInfoPinned.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Application\\SlateApplicationBase.cpp"
                         ,0x8d,L"");
      if (bVar7) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar7) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    else {
      aVar5 = pTVar16->SharedReferenceCount;
      do {
        if (aVar5 == (atomic<int>)0x0) {
          pTVar16 = (TReferenceControllerBase<1> *)0x0;
          goto LAB_142455e04;
        }
        LOCK();
        aVar10 = pTVar16->SharedReferenceCount;
        bVar7 = aVar5 == aVar10;
        if (bVar7) {
          pTVar16->SharedReferenceCount = (atomic<int>)((int)aVar5 + 1);
          aVar10 = aVar5;
        }
        UNLOCK();
        aVar5 = aVar10;
      } while (!bVar7);
      lVar14 = *(longlong *)(lVar12 + (longlong)TStack_80.CurrentBitIndex * 0x18);
      if (lVar14 == 0) goto LAB_142455e04;
    }
    if (*(char *)(lVar14 + 0x28) == '\0') {
      bVar7 = *(double *)(lVar14 + 0x20) <= dVar4;
      *(bool *)(lVar14 + 0x28) = bVar7;
      bVar24 = bVar23;
      if (bVar7) {
        bVar23 = true;
        bVar24 = true;
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar16);
    TStack_80.UnvisitedBitMask = TStack_80.UnvisitedBitMask & ~TStack_80._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_80);
  } while( true );
}

// UpdateCustomSafeZone @ 142455f10

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall
FSlateApplicationBase::UpdateCustomSafeZone
          (FSlateApplicationBase *this,FMargin *param_1,bool param_2)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  ECustomSafeZoneState EVar4;
  float fVar5;
  FDisplayMetrics local_88;
  
  if (param_2) {
    local_88.MonitorInfo.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_88.MonitorInfo.ArrayNum = 0;
    local_88.MonitorInfo.ArrayMax = 0;
    local_88.PrimaryDisplayWorkAreaRect.Left = 0;
    local_88.PrimaryDisplayWorkAreaRect.Top = 0;
    local_88.PrimaryDisplayWorkAreaRect.Right = 0;
    local_88.PrimaryDisplayWorkAreaRect.Bottom = 0;
    local_88.VirtualDisplayRect.Left = 0;
    local_88.VirtualDisplayRect.Top = 0;
    local_88.TitleSafePaddingSize.field0_0x0._s_0.X = 0.0;
    local_88.TitleSafePaddingSize.field0_0x0._s_0.Y = 0.0;
    local_88.TitleSafePaddingSize.field0_0x0._s_0.Z = 0.0;
    local_88.TitleSafePaddingSize.field0_0x0._s_0.W = 0.0;
    local_88.ActionSafePaddingSize.field0_0x0._s_0.X = 0.0;
    local_88.ActionSafePaddingSize.field0_0x0._s_0.Y = 0.0;
    local_88.ActionSafePaddingSize.field0_0x0._s_0.Z = 0.0;
    local_88.ActionSafePaddingSize.field0_0x0._s_0.W = 0.0;
    local_88.VirtualDisplayRect.Right = 0;
    local_88.VirtualDisplayRect.Bottom = 0;
    FDisplayMetrics::RebuildDisplayMetrics(&local_88);
    FDisplayMetrics::operator=(&this->CachedDisplayMetrics,&local_88);
    fVar5 = FDisplayMetrics::GetDebugTitleSafeZoneRatio();
    this->CachedDebugTitleSafeRatio = fVar5;
    DestructItems<FMonitorInfo,int>
              ((FMonitorInfo *)local_88.MonitorInfo.AllocatorInstance.Data,
               local_88.MonitorInfo.ArrayNum);
    if ((FMonitorInfo *)local_88.MonitorInfo.AllocatorInstance.Data != (FMonitorInfo *)0x0) {
      FMemory::Free(local_88.MonitorInfo.AllocatorInstance.Data);
    }
  }
  EVar4 = this->CustomSafeZoneState;
  fVar5 = param_1->Top;
  fVar2 = param_1->Right;
  fVar3 = param_1->Bottom;
  (this->CustomSafeZoneRatio).Left = param_1->Left;
  (this->CustomSafeZoneRatio).Top = fVar5;
  (this->CustomSafeZoneRatio).Right = fVar2;
  (this->CustomSafeZoneRatio).Bottom = fVar3;
  if (EVar4 != Set) {
    if ((((param_1->Left != 0.0) || (param_1->Right != 0.0)) || (param_1->Top != 0.0)) ||
       (bVar1 = true, param_1->Bottom != 0.0)) {
      bVar1 = false;
    }
    EVar4 = Debug;
    if (bVar1) {
      EVar4 = Unset;
    }
    this->CustomSafeZoneState = EVar4;
  }
  return;
}

