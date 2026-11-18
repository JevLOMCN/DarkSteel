// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ApplicationCore
// Functions: 86

// FWindowsApplication @ 1423c27d0

/* WARNING: Enum "Type": Some values do not have unique names */

FWindowsApplication * __thiscall
FWindowsApplication::FWindowsApplication
          (FWindowsApplication *this,HINSTANCE__ *param_1,HICON__ *param_2)

{
  FSharedReferencer<1> *this_00;
  atomic<int> *paVar1;
  TSharedPtr<FWindowsTextInputMethodSystem,1> *this_01;
  TSharedPtr<FTaskbarList,1> *pTVar2;
  tagSTICKYKEYS *pvParam;
  atomic<int> aVar3;
  uint uVar4;
  uint uVar5;
  TReferenceControllerBase<1> *pTVar6;
  code *pcVar7;
  uint uVar8;
  IConsoleManager *pIVar9;
  bool bVar10;
  FWindowsCursor *this_02;
  FWindowsUIAManager *pFVar11;
  FWindowsTextInputMethodSystem *pFVar12;
  FWindowsApplication *pFVar13;
  wchar_t *pwVar14;
  HHOOK pHVar15;
  undefined8 *puVar16;
  ulong64 uVar17;
  FWindowsRawInputRunnable *pFVar18;
  uint uVar19;
  bool local_res8 [8];
  bool local_res10 [8];
  bool local_res20 [8];
  FString *pFVar20;
  ulonglong uVar21;
  bool local_178;
  bool local_177;
  bool local_176 [14];
  code *local_168;
  undefined4 uStack_160;
  uint uStack_15c;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_158;
  FDelegateAllocation local_150;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_140;
  FDelegateAllocation local_138;
  FTaskbarList *local_128;
  FSharedReferencer<1> local_120;
  TSharedRef<FTaskbarList,1> local_118;
  TRawPtrProxy<FWindowsCursor> local_108;
  TRawPtrProxy<FWindowsTextInputMethodSystem> local_100;
  TRawPtrProxy<FTaskbarList> local_f8 [2];
  code *local_e8;
  undefined8 uStack_e0;
  TSharedPtr<ICursor,1> local_d8;
  FDestructionSentinel local_c8;
  FDestructionSentinel local_b0;
  FDestructionSentinel local_98;
  FDelegateAllocation *local_80;
  FDestructionSentinel local_78;
  FDelegateAllocation *local_60;
  undefined1 local_58 [32];
  
  this_02 = ::operator_new(0x100);
  local_108.Object = (FWindowsCursor *)0x0;
  if (this_02 != (FWindowsCursor *)0x0) {
    local_108.Object = FWindowsCursor::FWindowsCursor(this_02);
  }
  TSharedPtr<ICursor,1>::TSharedPtr<ICursor,1><FWindowsCursor>(&local_d8,&local_108);
  GenericApplication::GenericApplication((GenericApplication *)this,&local_d8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_d8.SharedReferenceCount.ReferenceController);
  this->bLowLevelMouseFilterIsApplied = false;
  this->InstanceHandle = param_1;
  (this->AsyncCursorEventCount).Count = (atomic<unsigned_int>)0x0;
  this->bAsyncCursorTaskActive = (atomic<bool>)0x0;
  (this->AsyncCursorTask).Pimpl.Reference = (FTaskBase *)0x0;
  *(undefined ***)this = &_vftable__for__GenericApplication__;
  *(undefined ***)&this->field_0xb8 = &_vftable__for__IInputInterface__;
  this->bMinimized = false;
  this->bUsingHighPrecisionMouseInput = false;
  this->bCachedUseWorkerThreadForRawInput = false;
  this->HighPrecisionMouseInputWindowHandle = (HWND__ *)0x0;
  (this->AsyncCursorRWLock).Mutex.Mutex.Ptr = (void *)0x0;
  this->bAsyncCursorPosValid = 0;
  (this->AsyncCursorPos).x = 0;
  (this->AsyncCursorPos).y = 0;
  this->AsyncCursorWindowHandle = (HWND__ *)0x0;
  this->bIsMouseAttached = false;
  this->bForceActivateByMouse = false;
  this->bForceNoGamepads = false;
  this->bConsumeAltSpace = false;
  (this->DeferredMessages).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DeferredMessages).ArrayNum = 0;
  (this->DeferredMessages).ArrayMax = 0;
  (this->DeferredDragDropOperations).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DeferredDragDropOperations).ArrayNum = 0;
  (this->DeferredDragDropOperations).ArrayMax = 0;
  (this->MessageHandlers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MessageHandlers).ArrayNum = 0;
  (this->MessageHandlers).ArrayMax = 0;
  (this->Windows).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Windows).ArrayNum = 0;
  (this->Windows).ArrayMax = 0;
  (this->ExternalInputDevices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ExternalInputDevices).ArrayNum = 0;
  (this->ExternalInputDevices).ArrayMax = 0;
  this->bHasLoadedInputPlugins = false;
  this->bAllowedToDeferMessageProcessing = 1;
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&this->CVarDeferMessageProcessing,L"Slate.DeferWindowsMessageProcessing",
             &this->bAllowedToDeferMessageProcessing,
             L"Whether windows message processing is deferred until tick or if they are processed immediately"
             ,0);
  this->bInModalSizeLoop = false;
  this_01 = &this->TextInputMethodSystem;
  (this->InitialDisplayMetrics).MonitorInfo.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pTVar2 = &this->TaskbarList;
  (this->InitialDisplayMetrics).MonitorInfo.ArrayNum = 0;
  (this->InitialDisplayMetrics).MonitorInfo.ArrayMax = 0;
  (this->InitialDisplayMetrics).PrimaryDisplayWorkAreaRect.Left = 0;
  (this->InitialDisplayMetrics).PrimaryDisplayWorkAreaRect.Top = 0;
  (this->InitialDisplayMetrics).PrimaryDisplayWorkAreaRect.Right = 0;
  (this->InitialDisplayMetrics).PrimaryDisplayWorkAreaRect.Bottom = 0;
  (this->InitialDisplayMetrics).VirtualDisplayRect.Left = 0;
  (this->InitialDisplayMetrics).VirtualDisplayRect.Top = 0;
  (this->InitialDisplayMetrics).VirtualDisplayRect.Right = 0;
  (this->InitialDisplayMetrics).VirtualDisplayRect.Bottom = 0;
  (this->InitialDisplayMetrics).TitleSafePaddingSize.field0_0x0._s_0.X = 0.0;
  (this->InitialDisplayMetrics).TitleSafePaddingSize.field0_0x0._s_0.Y = 0.0;
  (this->InitialDisplayMetrics).TitleSafePaddingSize.field0_0x0._s_0.Z = 0.0;
  (this->InitialDisplayMetrics).TitleSafePaddingSize.field0_0x0._s_0.W = 0.0;
  (this->InitialDisplayMetrics).ActionSafePaddingSize.field0_0x0._s_0.X = 0.0;
  (this->InitialDisplayMetrics).ActionSafePaddingSize.field0_0x0._s_0.Y = 0.0;
  (this->InitialDisplayMetrics).ActionSafePaddingSize.field0_0x0._s_0.Z = 0.0;
  (this->InitialDisplayMetrics).ActionSafePaddingSize.field0_0x0._s_0.W = 0.0;
  this_01->Object = (FWindowsTextInputMethodSystem *)0x0;
  (this->TextInputMethodSystem).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  pTVar2->Object = (FTaskbarList *)0x0;
  this_00 = &(this->TaskbarList).SharedReferenceCount;
  this_00->ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pFVar11 = ::operator_new(0xb8);
  if (pFVar11 == (FWindowsUIAManager *)0x0) {
    pFVar11 = (FWindowsUIAManager *)0x0;
  }
  else {
    pFVar11 = FWindowsUIAManager::FWindowsUIAManager(pFVar11,this);
  }
  (this->UIAManager).Ptr = pFVar11;
  (this->TouchInfoArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TouchInfoArray).ArrayNum = 0;
  (this->TouchInfoArray).ArrayMax = 0;
  this->bSimulatingHighPrecisionMouseInputForRDP = false;
  (this->LastCursorPoint).field0_0x0._s_0 =
       (TIntPoint<int>_u_0_s_0)UE::Math::TIntPoint<int>::ZeroValue.field0_0x0;
  (this->LastCursorPointPreWrap).field0_0x0._s_0 =
       (TIntPoint<int>_u_0_s_0)UE::Math::TIntPoint<int>::ZeroValue.field0_0x0;
  this->NumPreWrapMsgsToRespect = 0;
  (this->ClipCursorRect).left = 0;
  (this->ClipCursorRect).top = 0;
  (this->ClipCursorRect).right = 0;
  (this->ClipCursorRect).bottom = 0;
  this->RepeatTime[0] = 0.0;
  this->RepeatTime[1] = 0.0;
  this->RepeatTime[2] = 0.0;
  this->RepeatTime[3] = 0.0;
  this->RepeatTime[4] = 0.0;
  this->ModifierKeyState[0] = false;
  this->ModifierKeyState[1] = false;
  this->ModifierKeyState[2] = false;
  this->ModifierKeyState[3] = false;
  this->ModifierKeyState[4] = false;
  this->ModifierKeyState[5] = false;
  this->ModifierKeyState[6] = false;
  DisableProcessWindowsGhosting();
  RegisterClassW(this->InstanceHandle,param_2);
  OleInitialize((LPVOID)0x0);
  pFVar12 = ::operator_new(0x100);
  local_100.Object = (FWindowsTextInputMethodSystem *)0x0;
  if (pFVar12 != (FWindowsTextInputMethodSystem *)0x0) {
    (pFVar12->TSFInputProcessorProfiles).RawPointer = (ITfInputProcessorProfiles *)0x0;
    pFVar12->_padding_ = (longlong)&___7FWindowsTextInputMethodSystem__6B_;
    (pFVar12->TSFInputProcessorProfileManager).RawPointer = (ITfInputProcessorProfileMgr *)0x0;
    (pFVar12->TSFThreadManager).RawPointer = (ITfThreadMgr *)0x0;
    pFVar12->TSFClientId = 0;
    (pFVar12->TSFDisabledDocumentManager).RawPointer = (ITfDocumentMgr *)0x0;
    (pFVar12->TSFActivationProxy).RawPointer = (FTSFActivationProxy *)0x0;
    pFVar12->IMMContextId = (HIMC__ *)0x0;
    pFVar12->IMMProperties = 0;
    (pFVar12->ActiveContext).Object = (ITextInputMethodContext *)0x0;
    (pFVar12->ActiveContext).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    *(undefined8 *)&pFVar12->ContextToInternalContextMap = 0;
    *(undefined8 *)&(pFVar12->ContextToInternalContextMap).field_0x8 = 0;
    *(undefined8 *)&(pFVar12->ContextToInternalContextMap).field_0x20 = 0;
    *(undefined4 *)&(pFVar12->ContextToInternalContextMap).field_0x28 = 0;
    *(undefined4 *)&(pFVar12->ContextToInternalContextMap).field_0x2c = 0x80;
    *(undefined4 *)&(pFVar12->ContextToInternalContextMap).field_0x30 = 0xffffffff;
    *(undefined4 *)&(pFVar12->ContextToInternalContextMap).field_0x34 = 0;
    *(undefined8 *)&(pFVar12->ContextToInternalContextMap).field_0x40 = 0;
    *(undefined4 *)&(pFVar12->ContextToInternalContextMap).field_0x48 = 0;
    *(undefined8 *)&(pFVar12->KnownWindows).Elements = 0;
    *(undefined8 *)&(pFVar12->KnownWindows).Elements.field_0x8 = 0;
    *(undefined8 *)&(pFVar12->KnownWindows).Elements.field_0x20 = 0;
    *(undefined4 *)&(pFVar12->KnownWindows).Elements.field_0x28 = 0;
    *(undefined4 *)&(pFVar12->KnownWindows).Elements.field_0x2c = 0x80;
    *(undefined4 *)&(pFVar12->KnownWindows).Elements.field_0x30 = 0xffffffff;
    *(undefined4 *)&(pFVar12->KnownWindows).Elements.field_0x34 = 0;
    (pFVar12->KnownWindows).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    (pFVar12->KnownWindows).HashSize = 0;
    local_100.Object = pFVar12;
  }
  TSharedPtr<FWindowsTextInputMethodSystem,1>::operator=<FWindowsTextInputMethodSystem>
            (this_01,&local_100);
  if ((this_01->Object == (FWindowsTextInputMethodSystem *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar10)) {
    pcVar7 = (code *)swi(3);
    pFVar13 = (FWindowsApplication *)(*pcVar7)();
    return pFVar13;
  }
  bVar10 = FWindowsTextInputMethodSystem::Initialize(this_01->Object);
  if (!bVar10) {
    if (this_01 != (TSharedPtr<FWindowsTextInputMethodSystem,1> *)(local_58 + 8)) {
      this_01->Object = (FWindowsTextInputMethodSystem *)0x0;
      pTVar6 = (this->TextInputMethodSystem).SharedReferenceCount.ReferenceController;
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        (this->TextInputMethodSystem).SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        LOCK();
        paVar1 = &pTVar6->SharedReferenceCount;
        aVar3 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar3 == (atomic<int>)0x1) {
          (**(code **)pTVar6->_padding_)();
          LOCK();
          paVar1 = &pTVar6->WeakReferenceCount;
          aVar3 = *paVar1;
          *paVar1 = (atomic<int>)((int)*paVar1 + -1);
          UNLOCK();
          if (aVar3 == (atomic<int>)0x1) {
            (**(code **)(pTVar6->_padding_ + 8))(pTVar6,1);
          }
        }
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  local_f8[0].Object = ::operator_new(8);
  if (local_f8[0].Object != (FTaskbarList *)0x0) {
    (local_f8[0].Object)->TaskBarList3 = (ITaskbarList3 *)0x0;
  }
  TSharedRef<FTaskbarList,1>::TSharedRef<FTaskbarList,1><FTaskbarList>(&local_118,local_f8);
  FTaskbarList::Initialize(local_118.Object);
  local_128 = local_118.Object;
  local_120.ReferenceController = local_118.SharedReferenceCount.ReferenceController;
  if (local_118.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_118.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_118.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pTVar2 != (TSharedPtr<FTaskbarList,1> *)&local_128) {
    pTVar2->Object = local_118.Object;
    local_128 = (FTaskbarList *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(this_00,&local_120);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_120.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_118.SharedReferenceCount.ReferenceController);
  FDisplayMetrics::RebuildDisplayMetrics(&this->InitialDisplayMetrics);
  FConfigCacheIni::GetBool
            (GConfig,L"WindowsApplication",L"bConsumeAltSpace",&this->bConsumeAltSpace,&GEngineIni);
  pvParam = &this->StartupStickyKeys;
  pvParam->cbSize = 0;
  pvParam->dwFlags = 0;
  (this->StartupToggleKeys).cbSize = 0;
  (this->StartupToggleKeys).dwFlags = 0;
  (this->StartupFilterKeys).cbSize = 0;
  (this->StartupFilterKeys).dwFlags = 0;
  (this->StartupFilterKeys).iWaitMSec = 0;
  (this->StartupFilterKeys).iDelayMSec = 0;
  (this->StartupFilterKeys).iRepeatMSec = 0;
  (this->StartupFilterKeys).iBounceMSec = 0;
  pvParam->cbSize = 8;
  (this->StartupToggleKeys).cbSize = 8;
  (this->StartupFilterKeys).cbSize = 0x18;
  SystemParametersInfoW(0x3a,8,pvParam,0);
  SystemParametersInfoW(0x34,8,&this->StartupToggleKeys,0);
  SystemParametersInfoW(0x32,0x18,&this->StartupFilterKeys,0);
  uVar19 = (this->StartupStickyKeys).dwFlags;
  uVar4 = (this->StartupToggleKeys).dwFlags;
  uVar5 = (this->StartupFilterKeys).dwFlags;
  local_176[0] = (bool)((byte)(uVar19 >> 2) & 1);
  local_res20[0] = (bool)((byte)(uVar19 >> 3) & 1);
  local_res8[0] = (bool)((byte)(uVar4 >> 2) & 1);
  local_178 = (bool)((byte)(uVar4 >> 3) & 1);
  local_177 = (bool)((byte)(uVar5 >> 3) & 1);
  local_res10[0] = (bool)((byte)(uVar5 >> 2) & 1);
  FConfigCacheIni::GetBool
            (GConfig,L"WindowsApplication.Accessibility",L"StickyKeysHotkey",local_176,&GEngineIni);
  FConfigCacheIni::GetBool
            (GConfig,L"WindowsApplication.Accessibility",L"ToggleKeysHotkey",local_res8,&GEngineIni)
  ;
  FConfigCacheIni::GetBool
            (GConfig,L"WindowsApplication.Accessibility",L"FilterKeysHotkey",local_res10,&GEngineIni
            );
  FConfigCacheIni::GetBool
            (GConfig,L"WindowsApplication.Accessibility",L"StickyKeysConfirmation",local_res20,
             &GEngineIni);
  FConfigCacheIni::GetBool
            (GConfig,L"WindowsApplication.Accessibility",L"ToggleKeysConfirmation",&local_178,
             &GEngineIni);
  FConfigCacheIni::GetBool
            (GConfig,L"WindowsApplication.Accessibility",L"FilterKeysConfirmation",&local_177,
             &GEngineIni);
  uVar19 = (this->StartupStickyKeys).dwFlags;
  uVar4 = (this->StartupToggleKeys).dwFlags;
  uVar5 = (this->StartupFilterKeys).dwFlags;
  uVar8 = uVar19 & 0xfffffffb;
  if (local_176[0] != false) {
    uVar8 = uVar19 | 4;
  }
  uVar19 = uVar4 & 0xfffffffb;
  if (local_res8[0] != false) {
    uVar19 = uVar4 | 4;
  }
  uVar4 = uVar5 & 0xfffffffb;
  if (local_res10[0] != false) {
    uVar4 = uVar5 | 4;
  }
  uVar5 = uVar8 & 0xfffffff7;
  if (local_res20[0] != false) {
    uVar5 = uVar8 | 8;
  }
  (this->StartupStickyKeys).dwFlags = uVar5;
  uVar5 = uVar19 & 0xfffffff7;
  if (local_178 != false) {
    uVar5 = uVar19 | 8;
  }
  (this->StartupToggleKeys).dwFlags = uVar5;
  uVar19 = uVar4 & 0xfffffff7;
  if (local_177 != false) {
    uVar19 = uVar4 | 8;
  }
  (this->StartupFilterKeys).dwFlags = uVar19;
  FConfigCacheIni::SetBool
            (GConfig,L"WindowsApplication.Accessibility",L"StickyKeysHotkey",local_176[0],
             &GEngineIni);
  FConfigCacheIni::SetBool
            (GConfig,L"WindowsApplication.Accessibility",L"ToggleKeysHotkey",local_res8[0],
             &GEngineIni);
  FConfigCacheIni::SetBool
            (GConfig,L"WindowsApplication.Accessibility",L"FilterKeysHotkey",local_res10[0],
             &GEngineIni);
  FConfigCacheIni::SetBool
            (GConfig,L"WindowsApplication.Accessibility",L"StickyKeysConfirmation",local_res20[0],
             &GEngineIni);
  FConfigCacheIni::SetBool
            (GConfig,L"WindowsApplication.Accessibility",L"ToggleKeysConfirmation",local_178,
             &GEngineIni);
  pFVar20 = &GEngineIni;
  FConfigCacheIni::SetBool
            (GConfig,L"WindowsApplication.Accessibility",L"FilterKeysConfirmation",local_177,
             &GEngineIni);
  FConfigCacheIni::Flush(GConfig,false,&GEngineIni);
  uStack_160 = 0;
  local_168 = ShutDownAfterError;
  uStack_e0 = (ulonglong)uStack_15c << 0x20;
  local_e8 = ShutDownAfterError;
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
  AddRaw<FWindowsApplication>
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &FCoreDelegates::OnShutdownAfterError,(FWindowsApplication *)local_58,
             (pmf_e67c4e9f *)this);
  AllowAccessibilityShortcutKeys(this,false);
  QueryConnectedMice(this);
  pwVar14 = FCommandLine::Get();
  bVar10 = FParse::Param(pwVar14,L"NoGamepad");
  if (bVar10) {
    this->bForceNoGamepads = true;
  }
  pwVar14 = FCommandLine::Get();
  bVar10 = FParse::Param(pwVar14,L"FilterLowLevelMouse");
  if ((bVar10) && (this->bLowLevelMouseFilterIsApplied == false)) {
    pHVar15 = SetWindowsHookExW(0xe,HandleLowLevelMouseFilterHook,(HINSTANCE)0x0,0);
    this->LowLevelMouseFilterHook = (HHOOK__ *)pHVar15;
    this->bLowLevelMouseFilterIsApplied = true;
  }
  if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
      (IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Singleton != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x4fb,L""), bVar10)) {
    pcVar7 = (code *)swi(3);
    pFVar13 = (FWindowsApplication *)(*pcVar7)();
    return pFVar13;
  }
  pIVar9 = IConsoleManager::Singleton;
  uStack_160 = 0;
  local_158.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_150.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_150.DelegateSize = 0;
  pcVar7 = *(code **)((longlong)*IConsoleManager::Singleton + 0xa8);
  local_168 = ApplyLowLevelMouseFilter;
  uStack_15c = uStack_e0._4_4_;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_158,(FWriteAccessScope *)&local_98);
  local_80 = &local_150;
  puVar16 = UE::Core::Private::DelegateAllocate(0x30,&local_150);
  if (puVar16 != (undefined8 *)0x0) {
    *puVar16 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar17 = FDelegateHandle::GenerateNewID();
    puVar16[2] = uVar17;
    puVar16[4] = local_168;
    puVar16[5] = CONCAT44(uStack_15c,uStack_160);
    *puVar16 = &
               ___7__TBaseRawMethodDelegateInstance__0A_VFWindowsApplication____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar16[3] = this;
    if ((puVar16[4] == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("InUserObject != nullptr && MethodPtr != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                            ,0x1d8,L""), bVar10)) {
      pcVar7 = (code *)swi(3);
      pFVar13 = (FWindowsApplication *)(*pcVar7)();
      return pFVar13;
    }
  }
  if (local_98.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_98.Accessor,&local_98);
  }
  uVar21 = (ulonglong)pFVar20 & 0xffffffff00000000;
  (*pcVar7)(pIVar9,L"WindowsApplication.ApplyLowLevelMouseFilter",
            L"Applies Low Level mouse filter that filters out mouse inputs that act like touch inputs"
            ,&local_158,uVar21);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_158,(FWriteAccessScope *)&local_c8);
  if ((local_150.DelegateSize != 0) &&
     (local_150.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_150.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_150,0,0,0x10);
    local_150.DelegateSize = 0;
  }
  if (local_c8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_c8.Accessor,&local_c8);
  }
  if (local_150.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_150.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_158.AccessDetector);
  if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
      (IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Singleton != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x4fb,L""), bVar10)) {
    pcVar7 = (code *)swi(3);
    pFVar13 = (FWindowsApplication *)(*pcVar7)();
    return pFVar13;
  }
  pIVar9 = IConsoleManager::Singleton;
  uStack_160 = 0;
  local_140.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_138.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_138.DelegateSize = 0;
  pcVar7 = *(code **)((longlong)*IConsoleManager::Singleton + 0xa8);
  local_168 = RemoveLowLevelMouseFilter;
  uStack_15c = uStack_e0._4_4_;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_140,(FWriteAccessScope *)&local_78);
  local_60 = &local_138;
  puVar16 = UE::Core::Private::DelegateAllocate(0x30,&local_138);
  if (puVar16 != (undefined8 *)0x0) {
    *puVar16 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar17 = FDelegateHandle::GenerateNewID();
    puVar16[2] = uVar17;
    puVar16[4] = local_168;
    puVar16[5] = CONCAT44(uStack_15c,uStack_160);
    *puVar16 = &
               ___7__TBaseRawMethodDelegateInstance__0A_VFWindowsApplication____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar16[3] = this;
    if ((puVar16[4] == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("InUserObject != nullptr && MethodPtr != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                            ,0x1d8,L""), bVar10)) {
      pcVar7 = (code *)swi(3);
      pFVar13 = (FWindowsApplication *)(*pcVar7)();
      return pFVar13;
    }
  }
  if (local_78.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_78.Accessor,&local_78);
  }
  (*pcVar7)(pIVar9,L"WindowsApplication.RemoveLowLevelMouseFilter",
            L"Removes Low Level mouse filter that filters out mouse inputs that act like touch inputs"
            ,&local_140,uVar21 & 0xffffffff00000000);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_140,(FWriteAccessScope *)&local_b0);
  if ((local_138.DelegateSize != 0) &&
     (local_138.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_138.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_138,0,0,0x10);
    local_138.DelegateSize = 0;
  }
  if (local_b0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b0.Accessor,&local_b0);
  }
  if (local_138.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_138.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_140.AccessDetector);
  if (5 < (byte)UE::WindowsApplication::TouchpadSensitivity::LogWindowsTouchpad._0_1_) {
    UE::Logging::Private::BasicLog<6>
              (&::LOG_Static,
               (FLogCategoryBase *)&UE::WindowsApplication::TouchpadSensitivity::LogWindowsTouchpad)
    ;
  }
  UE::WindowsApplication::TouchpadSensitivity::CacheForceMaxTouchpadSensitivityMode();
  if (UE::WindowsApplication::TouchpadSensitivity::bForceMaxTouchpadSensitivity != false) {
    UE::WindowsApplication::TouchpadSensitivity::ApplyForceMaxTouchpadSensitivity();
  }
  bVar10 = FGenericPlatformProcess::SupportsMultithreading();
  if (bVar10) {
    bVar10 = IsInGameThread();
    if ((!bVar10) &&
       (bVar10 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<_8717070949721045977>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ApplicationCore\\Private\\Windows\\WindowsApplication.cpp"
                            ,0x427,"IsInGameThread()"), bVar10)) {
      pcVar7 = (code *)swi(3);
      pFVar13 = (FWindowsApplication *)(*pcVar7)();
      return pFVar13;
    }
    if (UE::WindowsApplication::RawInputThread::FWindowsRawInputRunnable::bInitialized == false) {
      if ((UE::WindowsApplication::RawInputThread::FWindowsRawInputRunnable::Thread !=
           (FRunnableThread *)0x0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Thread == nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ApplicationCore\\Private\\Windows\\WindowsApplication.cpp"
                              ,0x42b,L""), bVar10)) {
        pcVar7 = (code *)swi(3);
        pFVar13 = (FWindowsApplication *)(*pcVar7)();
        return pFVar13;
      }
      UE::WindowsApplication::RawInputThread::FWindowsRawInputRunnable::CreateWindowEvent =
           CreateEventW((LPSECURITY_ATTRIBUTES)0x0,1,0,(LPCWSTR)0x0);
      UE::WindowsApplication::RawInputThread::FWindowsRawInputRunnable::UnregisterEvent =
           CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
      if ((UE::WindowsApplication::RawInputThread::FWindowsRawInputRunnable::CreateWindowEvent ==
           (void *)0x0) ||
         (UE::WindowsApplication::RawInputThread::FWindowsRawInputRunnable::UnregisterEvent ==
          (HANDLE)0x0)) {
        if (1 < (byte)LogWindowsDesktop._0_1_) {
          GetLastError();
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWindowsDesktop);
        }
        if (UE::WindowsApplication::RawInputThread::FWindowsRawInputRunnable::UnregisterEvent !=
            (void *)0x0) {
          CloseHandle(UE::WindowsApplication::RawInputThread::FWindowsRawInputRunnable::
                      UnregisterEvent);
          UE::WindowsApplication::RawInputThread::FWindowsRawInputRunnable::UnregisterEvent =
               (void *)0x0;
        }
        if (UE::WindowsApplication::RawInputThread::FWindowsRawInputRunnable::CreateWindowEvent ==
            (void *)0x0) {
          return this;
        }
      }
      else {
        UE::WindowsApplication::RawInputThread::FWindowsRawInputRunnable::InstanceHandle = param_1;
        pFVar18 = UE::WindowsApplication::RawInputThread::FWindowsRawInputRunnable::GetInstance();
        UE::WindowsApplication::RawInputThread::FWindowsRawInputRunnable::Thread =
             FRunnableThread::Create
                       ((FRunnable *)pFVar18,L"WindowsRawInputThread",0,TPri_Highest,
                        0xffffffffffffffff,None);
        WaitForSingleObject(UE::WindowsApplication::RawInputThread::FWindowsRawInputRunnable::
                            CreateWindowEvent,0xffffffff);
        if (pFVar18->WindowHandle != (HWND__ *)0x0) {
          UE::WindowsApplication::RawInputThread::FWindowsRawInputRunnable::bInitialized = true;
          return this;
        }
        CloseHandle(UE::WindowsApplication::RawInputThread::FWindowsRawInputRunnable::
                    UnregisterEvent);
        UE::WindowsApplication::RawInputThread::FWindowsRawInputRunnable::UnregisterEvent =
             (void *)0x0;
      }
      CloseHandle(UE::WindowsApplication::RawInputThread::FWindowsRawInputRunnable::
                  CreateWindowEvent);
      UE::WindowsApplication::RawInputThread::FWindowsRawInputRunnable::CreateWindowEvent =
           (void *)0x0;
    }
  }
  return this;
}

// ~FWindowsApplication @ 1423c6dd0

void __thiscall FWindowsApplication::~FWindowsApplication(FWindowsApplication *this)

{
  atomic<unsigned_int> *paVar1;
  TEventCount<unsigned_int> *pTVar2;
  atomic<unsigned_int> aVar3;
  FWindowsTextInputMethodSystem *this_00;
  FTaskBase *pFVar4;
  FScriptContainerElement *pFVar5;
  FWindowsUIAManager *this_01;
  code *pcVar6;
  bool bVar7;
  BOOLEAN BVar8;
  uint uVar9;
  IModularFeatures *pIVar10;
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this_02;
  atomic<unsigned_int> *local_28;
  uint local_20;
  FWaitState local_18;
  
  *(undefined ***)this = &_vftable__for__GenericApplication__;
  *(undefined ***)&this->field_0xb8 = &_vftable__for__IInputInterface__;
  bVar7 = FGenericPlatformProcess::SupportsMultithreading();
  if (bVar7) {
    bVar7 = IsInGameThread();
    if (!bVar7) {
      bVar7 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_8717070949721045925>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ApplicationCore\\Private\\Windows\\WindowsApplication.cpp"
                         ,0x45b,"IsInGameThread()");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    if (UE::WindowsApplication::RawInputThread::FWindowsRawInputRunnable::bInitialized != false) {
      UE::WindowsApplication::RawInputThread::FWindowsRawInputRunnable::bInitialized = false;
      if (UE::WindowsApplication::RawInputThread::FWindowsRawInputRunnable::Thread !=
          (FRunnableThread *)0x0) {
        (**(code **)(UE::WindowsApplication::RawInputThread::FWindowsRawInputRunnable::Thread->
                     _padding_ + 0x18))
                  (UE::WindowsApplication::RawInputThread::FWindowsRawInputRunnable::Thread,1);
        if (UE::WindowsApplication::RawInputThread::FWindowsRawInputRunnable::Thread !=
            (FRunnableThread *)0x0) {
          (**(code **)(UE::WindowsApplication::RawInputThread::FWindowsRawInputRunnable::Thread->
                       _padding_ + 0x30))
                    (UE::WindowsApplication::RawInputThread::FWindowsRawInputRunnable::Thread,1);
        }
        UE::WindowsApplication::RawInputThread::FWindowsRawInputRunnable::Thread =
             (FRunnableThread *)0x0;
      }
      CloseHandle(UE::WindowsApplication::RawInputThread::FWindowsRawInputRunnable::
                  CreateWindowEvent);
      UE::WindowsApplication::RawInputThread::FWindowsRawInputRunnable::CreateWindowEvent =
           (void *)0x0;
      UE::WindowsApplication::RawInputThread::FWindowsRawInputRunnable::InstanceHandle =
           (HINSTANCE__ *)0x0;
    }
  }
  pIVar10 = IModularFeatures::Get();
  this_02 = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
            (**(code **)((longlong)*pIVar10 + 0x38))(pIVar10);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll(this_02,this);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &FCoreDelegates::OnShutdownAfterError,this);
  this_00 = (this->TextInputMethodSystem).Object;
  if (this_00 != (FWindowsTextInputMethodSystem *)0x0) {
    FWindowsTextInputMethodSystem::Terminate(this_00);
  }
  if (this->bAsyncCursorTaskActive != (atomic<bool>)0x0) {
    aVar3 = (this->AsyncCursorEventCount).Count;
    LOCK();
    (this->AsyncCursorEventCount).Count =
         (atomic<unsigned_int>)((uint)(this->AsyncCursorEventCount).Count | 1);
    UNLOCK();
    if (this->bAsyncCursorTaskActive != (atomic<bool>)0x0) {
      pTVar2 = &this->AsyncCursorEventCount;
      uVar9 = (uint)aVar3 & 0xfffffffe;
      if (((uint)pTVar2->Count & 0xfffffffe) == uVar9) {
        local_28 = &pTVar2->Count;
        local_20 = uVar9;
        UE::ParkingLot::Private::Wait
                  (&local_18,pTVar2,
                   UE::TFunctionWithContext<bool___cdecl(void)>::
                   Call<_UE::TEventCount<unsigned_int>::Wait_::__l5::<lambda_1>_>,&local_28,
                   (_func___cdecl_void_void_ptr *)0x0,(void *)0x0);
      }
    }
  }
  pFVar4 = (this->AsyncCursorTask).Pimpl.Reference;
  if (pFVar4 != (FTaskBase *)0x0) {
    UE::Tasks::Private::FTaskBase::Wait(pFVar4);
  }
  CoUninitialize();
  OleUninitialize();
  pFVar5 = (this->TouchInfoArray).AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  this_01 = (this->UIAManager).Ptr;
  if (this_01 != (FWindowsUIAManager *)0x0) {
    FWindowsUIAManager::~FWindowsUIAManager(this_01);
    ::operator_delete(this_01,0xb8);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->TaskbarList).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->TextInputMethodSystem).SharedReferenceCount.ReferenceController);
  DestructItems<FMonitorInfo,int>
            ((FMonitorInfo *)(this->InitialDisplayMetrics).MonitorInfo.AllocatorInstance.Data,
             (this->InitialDisplayMetrics).MonitorInfo.ArrayNum);
  pFVar5 = (this->InitialDisplayMetrics).MonitorInfo.AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  *(undefined ***)&(this->CVarDeferMessageProcessing).field_0x0 = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&this->CVarDeferMessageProcessing);
  DestructItems<TSharedPtr<IInputDevice,1>,int>
            ((TSharedPtr<IInputDevice,1> *)(this->ExternalInputDevices).AllocatorInstance.Data,
             (this->ExternalInputDevices).ArrayNum);
  pFVar5 = (this->ExternalInputDevices).AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  DestructItems<TSharedRef<FWindowsWindow,1>,int>
            ((TSharedRef<FWindowsWindow,1> *)(this->Windows).AllocatorInstance.Data,
             (this->Windows).ArrayNum);
  pFVar5 = (this->Windows).AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  pFVar5 = (this->MessageHandlers).AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  DestructItems<FDeferredWindowsDragDropOperation,int>
            ((FDeferredWindowsDragDropOperation *)
             (this->DeferredDragDropOperations).AllocatorInstance.Data,
             (this->DeferredDragDropOperations).ArrayNum);
  pFVar5 = (this->DeferredDragDropOperations).AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  DestructItems<FDeferredWindowsMessage,int>
            ((FDeferredWindowsMessage *)(this->DeferredMessages).AllocatorInstance.Data,
             (this->DeferredMessages).ArrayNum);
  pFVar5 = (this->DeferredMessages).AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  BVar8 = TryAcquireSRWLockExclusive((PSRWLOCK)&this->AsyncCursorRWLock);
  if (BVar8 == '\0') {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsLocked()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                       ,0x48,L"Destroying a lock that is still held!");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  else {
    ReleaseSRWLockExclusive((PSRWLOCK)&this->AsyncCursorRWLock);
  }
  pFVar4 = (this->AsyncCursorTask).Pimpl.Reference;
  if (pFVar4 != (FTaskBase *)0x0) {
    LOCK();
    paVar1 = &pFVar4->RefCount;
    aVar3 = *paVar1;
    *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar3 == (atomic<unsigned_int>)0x1) {
      (**(code **)pFVar4->_padding_)(pFVar4,1);
    }
  }
  *(undefined ***)&this->field_0xb8 = &___7IInputInterface__6B_;
  GenericApplication::~GenericApplication((GenericApplication *)this);
  return;
}

// operator() @ 1423c8870

void __thiscall `FWindowsApplication::CacheCursorInfo'::__l2::<lambda_1>::operator()(void *this)

{
  uint uVar1;
  uint uVar2;
  PSRWLOCK SRWLock;
  uint *puVar3;
  BOOL BVar4;
  HWND pHVar5;
  bool bVar6;
  
  bVar6 = -1 < CpuChannel->Enabled;
  if (bVar6) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId4621,"AsyncCursorTask",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ApplicationCore\\Private\\Windows\\WindowsApplication.cpp"
               ,0x120d);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId4621);
  }
  SRWLock = *(PSRWLOCK *)this;
  AcquireSRWLockExclusive(SRWLock);
  BVar4 = GetCursorPos(*(LPPOINT *)((longlong)this + 0x10));
  pHVar5 = (HWND)0x0;
  **(BOOL **)((longlong)this + 8) = BVar4;
  if (**(int **)((longlong)this + 8) != 0) {
    pHVar5 = WindowFromPoint(**(POINT **)((longlong)this + 0x10));
  }
  **(undefined8 **)((longlong)this + 0x18) = pHVar5;
  ReleaseSRWLockExclusive(SRWLock);
  LOCK();
  **(undefined1 **)((longlong)this + 0x20) = 0;
  UNLOCK();
  puVar3 = *(uint **)((longlong)this + 0x28);
  LOCK();
  uVar1 = *puVar3;
  *puVar3 = *puVar3;
  UNLOCK();
  if ((uVar1 & 1) != 0) {
    LOCK();
    uVar2 = *puVar3;
    if (uVar1 == uVar2) {
      *puVar3 = uVar1 + 1;
    }
    UNLOCK();
    if (uVar1 == uVar2) {
      UE::ParkingLot::WakeAll(puVar3);
    }
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// operator() @ 1423cb6d0

TMap<unsigned_int,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FString,0>_>
* __thiscall
`FWindowsApplication::ProcessMessage'::__l5::<lambda_1>::operator()
          (void *this,
          TMap<unsigned_int,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FString,0>_>
          *__return_storage_ptr__)

{
  undefined4 local_res10 [2];
  TPairInitializer<unsigned_int_&&,FString_&&> local_res18;
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x20 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x28 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x2c = 0x80;
  *(undefined4 *)&__return_storage_ptr__->field_0x30 = 0xffffffff;
  *(undefined4 *)&__return_storage_ptr__->field_0x34 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x40 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x48 = 0;
  ::FString::FString((FString *)local_18,L"WM_INPUTLANGCHANGEREQUEST");
  local_28._0_8_ = local_res10;
  local_res10[0] = 0x50;
  local_28._8_8_ = local_18;
  TSet<TTuple<unsigned_int,FString>,TDefaultMapHashableKeyFuncs<unsigned_int,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<unsigned_int_&&,FString_&&>_>
            ((TSet<TTuple<unsigned_int,FString>,TDefaultMapHashableKeyFuncs<unsigned_int,FString,0>,FDefaultSetAllocator>
              *)__return_storage_ptr__,&local_res18,(bool *)local_28);
  if ((FScriptContainerElement *)local_18._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_18._0_8_);
  }
  ::FString::FString((FString *)local_28,L"WM_INPUTLANGCHANGE");
  local_18._0_8_ = local_res10;
  local_res10[0] = 0x51;
  local_18._8_8_ = local_28;
  TSet<TTuple<unsigned_int,FString>,TDefaultMapHashableKeyFuncs<unsigned_int,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<unsigned_int_&&,FString_&&>_>
            ((TSet<TTuple<unsigned_int,FString>,TDefaultMapHashableKeyFuncs<unsigned_int,FString,0>,FDefaultSetAllocator>
              *)__return_storage_ptr__,&local_res18,(bool *)local_18);
  if ((FScriptContainerElement *)local_28._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_28._0_8_);
  }
  ::FString::FString((FString *)local_28,L"WM_IME_SETCONTEXT");
  local_18._0_8_ = local_res10;
  local_res10[0] = 0x281;
  local_18._8_8_ = local_28;
  TSet<TTuple<unsigned_int,FString>,TDefaultMapHashableKeyFuncs<unsigned_int,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<unsigned_int_&&,FString_&&>_>
            ((TSet<TTuple<unsigned_int,FString>,TDefaultMapHashableKeyFuncs<unsigned_int,FString,0>,FDefaultSetAllocator>
              *)__return_storage_ptr__,&local_res18,(bool *)local_18);
  if ((FScriptContainerElement *)local_28._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_28._0_8_);
  }
  ::FString::FString((FString *)local_28,L"WM_IME_NOTIFY");
  local_18._0_8_ = local_res10;
  local_res10[0] = 0x282;
  local_18._8_8_ = local_28;
  TSet<TTuple<unsigned_int,FString>,TDefaultMapHashableKeyFuncs<unsigned_int,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<unsigned_int_&&,FString_&&>_>
            ((TSet<TTuple<unsigned_int,FString>,TDefaultMapHashableKeyFuncs<unsigned_int,FString,0>,FDefaultSetAllocator>
              *)__return_storage_ptr__,&local_res18,(bool *)local_18);
  if ((FScriptContainerElement *)local_28._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_28._0_8_);
  }
  ::FString::FString((FString *)local_28,L"WM_IME_REQUEST");
  local_18._0_8_ = local_res10;
  local_res10[0] = 0x288;
  local_18._8_8_ = local_28;
  TSet<TTuple<unsigned_int,FString>,TDefaultMapHashableKeyFuncs<unsigned_int,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<unsigned_int_&&,FString_&&>_>
            ((TSet<TTuple<unsigned_int,FString>,TDefaultMapHashableKeyFuncs<unsigned_int,FString,0>,FDefaultSetAllocator>
              *)__return_storage_ptr__,&local_res18,(bool *)local_18);
  if ((FScriptContainerElement *)local_28._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_28._0_8_);
  }
  ::FString::FString((FString *)local_28,L"WM_IME_STARTCOMPOSITION");
  local_18._0_8_ = local_res10;
  local_res10[0] = 0x10d;
  local_18._8_8_ = local_28;
  TSet<TTuple<unsigned_int,FString>,TDefaultMapHashableKeyFuncs<unsigned_int,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<unsigned_int_&&,FString_&&>_>
            ((TSet<TTuple<unsigned_int,FString>,TDefaultMapHashableKeyFuncs<unsigned_int,FString,0>,FDefaultSetAllocator>
              *)__return_storage_ptr__,&local_res18,(bool *)local_18);
  if ((FScriptContainerElement *)local_28._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_28._0_8_);
  }
  ::FString::FString((FString *)local_28,L"WM_IME_COMPOSITION");
  local_18._0_8_ = local_res10;
  local_res10[0] = 0x10f;
  local_18._8_8_ = local_28;
  TSet<TTuple<unsigned_int,FString>,TDefaultMapHashableKeyFuncs<unsigned_int,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<unsigned_int_&&,FString_&&>_>
            ((TSet<TTuple<unsigned_int,FString>,TDefaultMapHashableKeyFuncs<unsigned_int,FString,0>,FDefaultSetAllocator>
              *)__return_storage_ptr__,&local_res18,(bool *)local_18);
  if ((FScriptContainerElement *)local_28._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_28._0_8_);
  }
  ::FString::FString((FString *)local_28,L"WM_IME_ENDCOMPOSITION");
  local_18._0_8_ = local_res10;
  local_res10[0] = 0x10e;
  local_18._8_8_ = local_28;
  TSet<TTuple<unsigned_int,FString>,TDefaultMapHashableKeyFuncs<unsigned_int,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<unsigned_int_&&,FString_&&>_>
            ((TSet<TTuple<unsigned_int,FString>,TDefaultMapHashableKeyFuncs<unsigned_int,FString,0>,FDefaultSetAllocator>
              *)__return_storage_ptr__,&local_res18,(bool *)local_18);
  if ((FScriptContainerElement *)local_28._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_28._0_8_);
  }
  ::FString::FString((FString *)local_28,L"WM_IME_CHAR");
  local_18._0_8_ = local_res10;
  local_res10[0] = 0x286;
  local_18._8_8_ = local_28;
  TSet<TTuple<unsigned_int,FString>,TDefaultMapHashableKeyFuncs<unsigned_int,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<unsigned_int_&&,FString_&&>_>
            ((TSet<TTuple<unsigned_int,FString>,TDefaultMapHashableKeyFuncs<unsigned_int,FString,0>,FDefaultSetAllocator>
              *)__return_storage_ptr__,&local_res18,(bool *)local_18);
  if ((FScriptContainerElement *)local_28._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_28._0_8_);
  }
  return __return_storage_ptr__;
}

// operator() @ 1423cc0e0

TMap<unsigned_int,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FString,0>_>
* __thiscall
`FWindowsApplication::ProcessMessage'::__l5::<lambda_2>::operator()
          (void *this,
          TMap<unsigned_int,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FString,0>_>
          *__return_storage_ptr__)

{
  undefined4 local_res10 [2];
  TPairInitializer<unsigned_int_&&,FString_&&> local_res18;
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x20 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x28 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x2c = 0x80;
  *(undefined4 *)&__return_storage_ptr__->field_0x30 = 0xffffffff;
  *(undefined4 *)&__return_storage_ptr__->field_0x34 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x40 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x48 = 0;
  ::FString::FString((FString *)local_18,L"IMN_CLOSESTATUSWINDOW");
  local_28._0_8_ = local_res10;
  local_res10[0] = 1;
  local_28._8_8_ = local_18;
  TSet<TTuple<unsigned_int,FString>,TDefaultMapHashableKeyFuncs<unsigned_int,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<unsigned_int_&&,FString_&&>_>
            ((TSet<TTuple<unsigned_int,FString>,TDefaultMapHashableKeyFuncs<unsigned_int,FString,0>,FDefaultSetAllocator>
              *)__return_storage_ptr__,&local_res18,(bool *)local_28);
  if ((FScriptContainerElement *)local_18._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_18._0_8_);
  }
  ::FString::FString((FString *)local_28,L"IMN_OPENSTATUSWINDOW");
  local_18._0_8_ = local_res10;
  local_res10[0] = 2;
  local_18._8_8_ = local_28;
  TSet<TTuple<unsigned_int,FString>,TDefaultMapHashableKeyFuncs<unsigned_int,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<unsigned_int_&&,FString_&&>_>
            ((TSet<TTuple<unsigned_int,FString>,TDefaultMapHashableKeyFuncs<unsigned_int,FString,0>,FDefaultSetAllocator>
              *)__return_storage_ptr__,&local_res18,(bool *)local_18);
  if ((FScriptContainerElement *)local_28._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_28._0_8_);
  }
  ::FString::FString((FString *)local_28,L"IMN_CHANGECANDIDATE");
  local_18._0_8_ = local_res10;
  local_res10[0] = 3;
  local_18._8_8_ = local_28;
  TSet<TTuple<unsigned_int,FString>,TDefaultMapHashableKeyFuncs<unsigned_int,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<unsigned_int_&&,FString_&&>_>
            ((TSet<TTuple<unsigned_int,FString>,TDefaultMapHashableKeyFuncs<unsigned_int,FString,0>,FDefaultSetAllocator>
              *)__return_storage_ptr__,&local_res18,(bool *)local_18);
  if ((FScriptContainerElement *)local_28._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_28._0_8_);
  }
  ::FString::FString((FString *)local_28,L"IMN_CLOSECANDIDATE");
  local_18._0_8_ = local_res10;
  local_res10[0] = 4;
  local_18._8_8_ = local_28;
  TSet<TTuple<unsigned_int,FString>,TDefaultMapHashableKeyFuncs<unsigned_int,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<unsigned_int_&&,FString_&&>_>
            ((TSet<TTuple<unsigned_int,FString>,TDefaultMapHashableKeyFuncs<unsigned_int,FString,0>,FDefaultSetAllocator>
              *)__return_storage_ptr__,&local_res18,(bool *)local_18);
  if ((FScriptContainerElement *)local_28._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_28._0_8_);
  }
  ::FString::FString((FString *)local_28,L"IMN_OPENCANDIDATE");
  local_18._0_8_ = local_res10;
  local_res10[0] = 5;
  local_18._8_8_ = local_28;
  TSet<TTuple<unsigned_int,FString>,TDefaultMapHashableKeyFuncs<unsigned_int,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<unsigned_int_&&,FString_&&>_>
            ((TSet<TTuple<unsigned_int,FString>,TDefaultMapHashableKeyFuncs<unsigned_int,FString,0>,FDefaultSetAllocator>
              *)__return_storage_ptr__,&local_res18,(bool *)local_18);
  if ((FScriptContainerElement *)local_28._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_28._0_8_);
  }
  ::FString::FString((FString *)local_28,L"IMN_SETCONVERSIONMODE");
  local_18._0_8_ = local_res10;
  local_res10[0] = 6;
  local_18._8_8_ = local_28;
  TSet<TTuple<unsigned_int,FString>,TDefaultMapHashableKeyFuncs<unsigned_int,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<unsigned_int_&&,FString_&&>_>
            ((TSet<TTuple<unsigned_int,FString>,TDefaultMapHashableKeyFuncs<unsigned_int,FString,0>,FDefaultSetAllocator>
              *)__return_storage_ptr__,&local_res18,(bool *)local_18);
  if ((FScriptContainerElement *)local_28._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_28._0_8_);
  }
  ::FString::FString((FString *)local_28,L"IMN_SETSENTENCEMODE");
  local_18._0_8_ = local_res10;
  local_res10[0] = 7;
  local_18._8_8_ = local_28;
  TSet<TTuple<unsigned_int,FString>,TDefaultMapHashableKeyFuncs<unsigned_int,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<unsigned_int_&&,FString_&&>_>
            ((TSet<TTuple<unsigned_int,FString>,TDefaultMapHashableKeyFuncs<unsigned_int,FString,0>,FDefaultSetAllocator>
              *)__return_storage_ptr__,&local_res18,(bool *)local_18);
  if ((FScriptContainerElement *)local_28._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_28._0_8_);
  }
  ::FString::FString((FString *)local_28,L"IMN_SETOPENSTATUS");
  local_18._0_8_ = local_res10;
  local_res10[0] = 8;
  local_18._8_8_ = local_28;
  TSet<TTuple<unsigned_int,FString>,TDefaultMapHashableKeyFuncs<unsigned_int,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<unsigned_int_&&,FString_&&>_>
            ((TSet<TTuple<unsigned_int,FString>,TDefaultMapHashableKeyFuncs<unsigned_int,FString,0>,FDefaultSetAllocator>
              *)__return_storage_ptr__,&local_res18,(bool *)local_18);
  if ((FScriptContainerElement *)local_28._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_28._0_8_);
  }
  ::FString::FString((FString *)local_28,L"IMN_SETCANDIDATEPOS");
  local_18._0_8_ = local_res10;
  local_res10[0] = 9;
  local_18._8_8_ = local_28;
  TSet<TTuple<unsigned_int,FString>,TDefaultMapHashableKeyFuncs<unsigned_int,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<unsigned_int_&&,FString_&&>_>
            ((TSet<TTuple<unsigned_int,FString>,TDefaultMapHashableKeyFuncs<unsigned_int,FString,0>,FDefaultSetAllocator>
              *)__return_storage_ptr__,&local_res18,(bool *)local_18);
  if ((FScriptContainerElement *)local_28._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_28._0_8_);
  }
  ::FString::FString((FString *)local_28,L"IMN_SETCOMPOSITIONFONT");
  local_18._0_8_ = local_res10;
  local_res10[0] = 10;
  local_18._8_8_ = local_28;
  TSet<TTuple<unsigned_int,FString>,TDefaultMapHashableKeyFuncs<unsigned_int,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<unsigned_int_&&,FString_&&>_>
            ((TSet<TTuple<unsigned_int,FString>,TDefaultMapHashableKeyFuncs<unsigned_int,FString,0>,FDefaultSetAllocator>
              *)__return_storage_ptr__,&local_res18,(bool *)local_18);
  if ((FScriptContainerElement *)local_28._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_28._0_8_);
  }
  ::FString::FString((FString *)local_28,L"IMN_SETCOMPOSITIONWINDOW");
  local_18._0_8_ = local_res10;
  local_res10[0] = 0xb;
  local_18._8_8_ = local_28;
  TSet<TTuple<unsigned_int,FString>,TDefaultMapHashableKeyFuncs<unsigned_int,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<unsigned_int_&&,FString_&&>_>
            ((TSet<TTuple<unsigned_int,FString>,TDefaultMapHashableKeyFuncs<unsigned_int,FString,0>,FDefaultSetAllocator>
              *)__return_storage_ptr__,&local_res18,(bool *)local_18);
  if ((FScriptContainerElement *)local_28._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_28._0_8_);
  }
  ::FString::FString((FString *)local_28,L"IMN_SETSTATUSWINDOWPOS");
  local_18._0_8_ = local_res10;
  local_res10[0] = 0xc;
  local_18._8_8_ = local_28;
  TSet<TTuple<unsigned_int,FString>,TDefaultMapHashableKeyFuncs<unsigned_int,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<unsigned_int_&&,FString_&&>_>
            ((TSet<TTuple<unsigned_int,FString>,TDefaultMapHashableKeyFuncs<unsigned_int,FString,0>,FDefaultSetAllocator>
              *)__return_storage_ptr__,&local_res18,(bool *)local_18);
  if ((FScriptContainerElement *)local_28._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_28._0_8_);
  }
  ::FString::FString((FString *)local_28,L"IMN_GUIDELINE");
  local_18._0_8_ = local_res10;
  local_res10[0] = 0xd;
  local_18._8_8_ = local_28;
  TSet<TTuple<unsigned_int,FString>,TDefaultMapHashableKeyFuncs<unsigned_int,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<unsigned_int_&&,FString_&&>_>
            ((TSet<TTuple<unsigned_int,FString>,TDefaultMapHashableKeyFuncs<unsigned_int,FString,0>,FDefaultSetAllocator>
              *)__return_storage_ptr__,&local_res18,(bool *)local_18);
  if ((FScriptContainerElement *)local_28._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_28._0_8_);
  }
  ::FString::FString((FString *)local_28,L"IMN_PRIVATE");
  local_18._0_8_ = local_res10;
  local_res10[0] = 0xe;
  local_18._8_8_ = local_28;
  TSet<TTuple<unsigned_int,FString>,TDefaultMapHashableKeyFuncs<unsigned_int,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<unsigned_int_&&,FString_&&>_>
            ((TSet<TTuple<unsigned_int,FString>,TDefaultMapHashableKeyFuncs<unsigned_int,FString,0>,FDefaultSetAllocator>
              *)__return_storage_ptr__,&local_res18,(bool *)local_18);
  if ((FScriptContainerElement *)local_28._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_28._0_8_);
  }
  return __return_storage_ptr__;
}

// operator() @ 1423cc5c0

TMap<unsigned_int,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FString,0>_>
* __thiscall
`FWindowsApplication::ProcessMessage'::__l5::<lambda_3>::operator()
          (void *this,
          TMap<unsigned_int,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FString,0>_>
          *__return_storage_ptr__)

{
  undefined4 local_res10 [2];
  TPairInitializer<unsigned_int_&&,FString_&&> local_res18;
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x20 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x28 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x2c = 0x80;
  *(undefined4 *)&__return_storage_ptr__->field_0x30 = 0xffffffff;
  *(undefined4 *)&__return_storage_ptr__->field_0x34 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x40 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x48 = 0;
  ::FString::FString((FString *)local_18,L"IMR_CANDIDATEWINDOW");
  local_28._0_8_ = local_res10;
  local_res10[0] = 2;
  local_28._8_8_ = local_18;
  TSet<TTuple<unsigned_int,FString>,TDefaultMapHashableKeyFuncs<unsigned_int,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<unsigned_int_&&,FString_&&>_>
            ((TSet<TTuple<unsigned_int,FString>,TDefaultMapHashableKeyFuncs<unsigned_int,FString,0>,FDefaultSetAllocator>
              *)__return_storage_ptr__,&local_res18,(bool *)local_28);
  if ((FScriptContainerElement *)local_18._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_18._0_8_);
  }
  ::FString::FString((FString *)local_28,L"IMR_COMPOSITIONFONT");
  local_18._0_8_ = local_res10;
  local_res10[0] = 3;
  local_18._8_8_ = local_28;
  TSet<TTuple<unsigned_int,FString>,TDefaultMapHashableKeyFuncs<unsigned_int,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<unsigned_int_&&,FString_&&>_>
            ((TSet<TTuple<unsigned_int,FString>,TDefaultMapHashableKeyFuncs<unsigned_int,FString,0>,FDefaultSetAllocator>
              *)__return_storage_ptr__,&local_res18,(bool *)local_18);
  if ((FScriptContainerElement *)local_28._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_28._0_8_);
  }
  ::FString::FString((FString *)local_28,L"IMR_COMPOSITIONWINDOW");
  local_18._0_8_ = local_res10;
  local_res10[0] = 1;
  local_18._8_8_ = local_28;
  TSet<TTuple<unsigned_int,FString>,TDefaultMapHashableKeyFuncs<unsigned_int,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<unsigned_int_&&,FString_&&>_>
            ((TSet<TTuple<unsigned_int,FString>,TDefaultMapHashableKeyFuncs<unsigned_int,FString,0>,FDefaultSetAllocator>
              *)__return_storage_ptr__,&local_res18,(bool *)local_18);
  if ((FScriptContainerElement *)local_28._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_28._0_8_);
  }
  ::FString::FString((FString *)local_28,L"IMR_CONFIRMRECONVERTSTRING");
  local_18._0_8_ = local_res10;
  local_res10[0] = 5;
  local_18._8_8_ = local_28;
  TSet<TTuple<unsigned_int,FString>,TDefaultMapHashableKeyFuncs<unsigned_int,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<unsigned_int_&&,FString_&&>_>
            ((TSet<TTuple<unsigned_int,FString>,TDefaultMapHashableKeyFuncs<unsigned_int,FString,0>,FDefaultSetAllocator>
              *)__return_storage_ptr__,&local_res18,(bool *)local_18);
  if ((FScriptContainerElement *)local_28._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_28._0_8_);
  }
  ::FString::FString((FString *)local_28,L"IMR_DOCUMENTFEED");
  local_18._0_8_ = local_res10;
  local_res10[0] = 7;
  local_18._8_8_ = local_28;
  TSet<TTuple<unsigned_int,FString>,TDefaultMapHashableKeyFuncs<unsigned_int,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<unsigned_int_&&,FString_&&>_>
            ((TSet<TTuple<unsigned_int,FString>,TDefaultMapHashableKeyFuncs<unsigned_int,FString,0>,FDefaultSetAllocator>
              *)__return_storage_ptr__,&local_res18,(bool *)local_18);
  if ((FScriptContainerElement *)local_28._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_28._0_8_);
  }
  ::FString::FString((FString *)local_28,L"IMR_QUERYCHARPOSITION");
  local_18._0_8_ = local_res10;
  local_res10[0] = 6;
  local_18._8_8_ = local_28;
  TSet<TTuple<unsigned_int,FString>,TDefaultMapHashableKeyFuncs<unsigned_int,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<unsigned_int_&&,FString_&&>_>
            ((TSet<TTuple<unsigned_int,FString>,TDefaultMapHashableKeyFuncs<unsigned_int,FString,0>,FDefaultSetAllocator>
              *)__return_storage_ptr__,&local_res18,(bool *)local_18);
  if ((FScriptContainerElement *)local_28._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_28._0_8_);
  }
  ::FString::FString((FString *)local_28,L"IMR_RECONVERTSTRING");
  local_18._0_8_ = local_res10;
  local_res10[0] = 4;
  local_18._8_8_ = local_28;
  TSet<TTuple<unsigned_int,FString>,TDefaultMapHashableKeyFuncs<unsigned_int,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<unsigned_int_&&,FString_&&>_>
            ((TSet<TTuple<unsigned_int,FString>,TDefaultMapHashableKeyFuncs<unsigned_int,FString,0>,FDefaultSetAllocator>
              *)__return_storage_ptr__,&local_res18,(bool *)local_18);
  if ((FScriptContainerElement *)local_28._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_28._0_8_);
  }
  return __return_storage_ptr__;
}

// AddExternalInputDevice @ 1423cfe10

void __thiscall
FWindowsApplication::AddExternalInputDevice
          (FWindowsApplication *this,TSharedPtr<IInputDevice,1> *param_1)

{
  int *piVar1;
  TArray<TSharedPtr<IInputDevice,1>,TSizedDefaultAllocator<32>_> *pTVar2;
  TSharedPtr<IInputDevice,1> *pTVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  
  if (param_1->Object != (IInputDevice *)0x0) {
    pTVar2 = &this->ExternalInputDevices;
    pTVar3 = (TSharedPtr<IInputDevice,1> *)(pTVar2->AllocatorInstance).Data;
    if ((pTVar3 <= param_1) && (param_1 < pTVar3 + (this->ExternalInputDevices).ArrayMax)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    iVar6 = (this->ExternalInputDevices).ArrayNum;
    piVar1 = &(this->ExternalInputDevices).ArrayMax;
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&pTVar2->AllocatorInstance,piVar1);
    }
    (this->ExternalInputDevices).ArrayNum = iVar6 + 1;
    pFVar7 = (pTVar2->AllocatorInstance).Data + (longlong)iVar6 * 0x10;
    *(IInputDevice **)pFVar7 = param_1->Object;
    *(TReferenceControllerBase<1> **)(pFVar7 + 8) =
         (param_1->SharedReferenceCount).ReferenceController;
    (param_1->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
    param_1->Object = (IInputDevice *)0x0;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// AddMessageHandler @ 1423d0100

void __thiscall
FWindowsApplication::AddMessageHandler(FWindowsApplication *this,IWindowsMessageHandler *param_1)

{
  IWindowsMessageHandler *local_res10 [3];
  
  local_res10[0] = param_1;
  TArray<IWindowsMessageHandler_*,TSizedDefaultAllocator<32>_>::
  AddUniqueImpl<IWindowsMessageHandler_*>(&WindowsApplication->MessageHandlers,local_res10);
  return;
}

// AllowAccessibilityShortcutKeys @ 1423d0610

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FWindowsApplication::AllowAccessibilityShortcutKeys(FWindowsApplication *this,bool param_1)

{
  undefined1 auVar1 [16];
  tagFILTERKEYS *pvParam;
  undefined1 auStack_58 [32];
  tagSTICKYKEYS local_38;
  tagTOGGLEKEYS local_30;
  tagFILTERKEYS local_28;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_58;
  if (param_1) {
    SystemParametersInfoW(0x3b,8,&this->StartupStickyKeys,0);
    SystemParametersInfoW(0x35,8,&this->StartupToggleKeys,0);
    pvParam = &this->StartupFilterKeys;
  }
  else {
    local_38 = this->StartupStickyKeys;
    if (((ulonglong)local_38 >> 0x20 & 1) == 0) {
      local_38 = (tagSTICKYKEYS)((ulonglong)local_38 & 0xfffffff3ffffffff);
      SystemParametersInfoW(0x3b,8,&local_38,0);
    }
    local_30 = this->StartupToggleKeys;
    if (((ulonglong)local_30 >> 0x20 & 1) == 0) {
      local_30 = (tagTOGGLEKEYS)((ulonglong)local_30 & 0xfffffff3ffffffff);
      SystemParametersInfoW(0x35,8,&local_30,0);
    }
    auVar1._0_4_ = (this->StartupFilterKeys).cbSize;
    auVar1._4_4_ = (this->StartupFilterKeys).dwFlags;
    auVar1._8_4_ = (this->StartupFilterKeys).iWaitMSec;
    auVar1._12_4_ = (this->StartupFilterKeys).iDelayMSec;
    local_28.iRepeatMSec = (this->StartupFilterKeys).iRepeatMSec;
    local_28.iBounceMSec = (this->StartupFilterKeys).iBounceMSec;
    if ((auVar1._0_8_ >> 0x20 & 1) != 0) {
      return;
    }
    pvParam = &local_28;
    local_28._0_8_ = auVar1._0_8_ & 0xfffffff3ffffffff;
    local_28.iWaitMSec = auVar1._8_4_;
    local_28.iDelayMSec = auVar1._12_4_;
  }
  SystemParametersInfoW(0x33,0x18,pvParam,0);
  return;
}

// AppWndProc @ 1423d0740

long64 __cdecl
FWindowsApplication::AppWndProc(HWND__ *param_1,uint param_2,ulong64 param_3,long64 param_4)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  long64 lVar4;
  
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_8717070949721044914>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ApplicationCore\\Private\\Windows\\WindowsApplication.cpp"
                       ,0x84e,"IsInGameThread()");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      lVar4 = (*pcVar1)();
      return lVar4;
    }
  }
  iVar3 = ProcessMessage(WindowsApplication,param_1,param_2,param_3,param_4);
  return (longlong)iVar3;
}

// ApplyForceMaxTouchpadSensitivity @ 1423d0cf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FWindowsApplication::ApplyForceMaxTouchpadSensitivity(FWindowsApplication *this)

{
  code *pcVar1;
  bool bVar2;
  BOOL BVar3;
  atomic<UE::WindowsApplication::TouchpadSensitivity::TOUCHPAD_SENSITIVITY_LEVEL> aVar4;
  ForAnyElementType _Str;
  undefined1 auStack_88 [32];
  FString FStack_68;
  FString FStack_58;
  FString FStack_48;
  FString FStack_38;
  undefined8 uStack_28;
  ulonglong uStack_20;
  undefined8 uStack_18;
  ulonglong uStack_10;
  
  uStack_10 = __security_cookie.value ^ (ulonglong)auStack_88;
  if (5 < (byte)UE::WindowsApplication::TouchpadSensitivity::LogWindowsTouchpad._0_1_) {
    UE::Logging::Private::BasicLog<6>
              (&::LOG_Static,
               (FLogCategoryBase *)&UE::WindowsApplication::TouchpadSensitivity::LogWindowsTouchpad)
    ;
  }
  bVar2 = IsInGameThread();
  if ((!bVar2) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ApplicationCore\\Private\\Windows\\WindowsApplication.cpp"
                         ,499,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if ((UE::WindowsApplication::TouchpadSensitivity::CachedForceMaxTouchpadSensitivityMode ==
       NotCached) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("CachedForceMaxTouchpadSensitivityMode != EForceMaxTouchpadSensitivityMode::NotCached"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ApplicationCore\\Private\\Windows\\WindowsApplication.cpp"
                         ,0xe5,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (6 < (byte)UE::WindowsApplication::TouchpadSensitivity::LogWindowsTouchpad._0_1_) {
    UE::Logging::Private::BasicLog<7>
              (&::LOG_Static,
               (FLogCategoryBase *)&UE::WindowsApplication::TouchpadSensitivity::LogWindowsTouchpad)
    ;
  }
  if (UE::WindowsApplication::TouchpadSensitivity::CachedForceMaxTouchpadSensitivityMode ==
      NotCached) {
    if (2 < (byte)UE::WindowsApplication::TouchpadSensitivity::LogWindowsTouchpad._0_1_) {
      UE::Logging::Private::BasicLog<3>
                (&::LOG_Static,
                 (FLogCategoryBase *)
                 &UE::WindowsApplication::TouchpadSensitivity::LogWindowsTouchpad);
    }
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ApplicationCore\\Private\\Windows\\WindowsApplication.cpp"
                       ,0x1f9,L"");
    if (bVar2) {
code_r0x0001423d112b:
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    goto LAB_1423d112c;
  }
  if (UE::WindowsApplication::TouchpadSensitivity::CachedForceMaxTouchpadSensitivityMode ==
      DoNothing) {
    if ((byte)UE::WindowsApplication::TouchpadSensitivity::LogWindowsTouchpad._0_1_ < 6) {
      return;
    }
    UE::Logging::Private::BasicLog<6>
              (&::LOG_Static,
               (FLogCategoryBase *)&UE::WindowsApplication::TouchpadSensitivity::LogWindowsTouchpad)
    ;
    goto LAB_1423d112c;
  }
  if (UE::WindowsApplication::TouchpadSensitivity::CachedForceMaxTouchpadSensitivityMode !=
      SetTouchpadParameters) {
    if (UE::WindowsApplication::TouchpadSensitivity::CachedForceMaxTouchpadSensitivityMode ==
        SetMaxTouchpadSensitivity) {
      bVar2 = UE::WindowsApplication::TouchpadSensitivity::SetMaxTouchpadSensitivity(true);
      if (bVar2) {
        if (4 < (byte)UE::WindowsApplication::TouchpadSensitivity::LogWindowsTouchpad._0_1_) {
          UE::Logging::Private::BasicLog<5>
                    (&::LOG_Static,
                     (FLogCategoryBase *)
                     &UE::WindowsApplication::TouchpadSensitivity::LogWindowsTouchpad);
        }
      }
      else if (2 < (byte)UE::WindowsApplication::TouchpadSensitivity::LogWindowsTouchpad._0_1_) {
        UE::Logging::Private::BasicLog<3>
                  (&::LOG_Static,
                   (FLogCategoryBase *)
                   &UE::WindowsApplication::TouchpadSensitivity::LogWindowsTouchpad);
      }
    }
    else {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ApplicationCore\\Private\\Windows\\WindowsApplication.cpp"
                         ,0x25c,L"");
      if (bVar2) goto code_r0x0001423d112b;
    }
    goto LAB_1423d112c;
  }
  if (5 < (byte)UE::WindowsApplication::TouchpadSensitivity::LogWindowsTouchpad._0_1_) {
    UE::Logging::Private::BasicLog<6>
              (&::LOG_Static,
               (FLogCategoryBase *)&UE::WindowsApplication::TouchpadSensitivity::LogWindowsTouchpad)
    ;
  }
  uStack_18 = 0;
  uStack_28 = 0;
  uStack_20 = 0;
  BVar3 = SystemParametersInfoW(0xae,0x18,&uStack_28,0);
  if (BVar3 == 0) {
    if ((byte)UE::WindowsApplication::TouchpadSensitivity::LogWindowsTouchpad._0_1_ < 3) {
      return;
    }
    UE::Logging::Private::BasicLog<3>
              (&::LOG_Static,
               (FLogCategoryBase *)&UE::WindowsApplication::TouchpadSensitivity::LogWindowsTouchpad)
    ;
    return;
  }
  if ((UE::WindowsApplication::TouchpadSensitivity::bRestoreTouchpadSensitivityFromRegistry == false
      ) || (UE::WindowsApplication::TouchpadSensitivity::bRegistrySavedValueConsumed != false)) {
LAB_1423d1008:
    if (uStack_20._0_4_ ==
        (atomic<UE::WindowsApplication::TouchpadSensitivity::TOUCHPAD_SENSITIVITY_LEVEL>)0x0) {
LAB_1423d100d:
      if ((byte)UE::WindowsApplication::TouchpadSensitivity::LogWindowsTouchpad._0_1_ < 5) {
        return;
      }
      UE::Logging::Private::BasicLog<5>
                (&::LOG_Static,
                 (FLogCategoryBase *)
                 &UE::WindowsApplication::TouchpadSensitivity::LogWindowsTouchpad);
      return;
    }
  }
  else {
    UE::WindowsApplication::TouchpadSensitivity::bRegistrySavedValueConsumed = true;
    if (uStack_20._0_4_ ==
        (atomic<UE::WindowsApplication::TouchpadSensitivity::TOUCHPAD_SENSITIVITY_LEVEL>)0x0) {
      if (UE::WindowsApplication::TouchpadSensitivity::bWriteSavedTouchpadSensitivityToRegistry ==
          false) goto LAB_1423d100d;
      FStack_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      FStack_68.Data.ArrayNum = 0;
      FStack_68.Data.ArrayMax = 0;
      FStack_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      FStack_48.Data.ArrayNum = 0;
      FStack_48.Data.ArrayMax = 0;
      FStack_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      FStack_58.Data.ArrayNum = 0;
      FStack_58.Data.ArrayMax = 0;
      UE::WindowsApplication::TouchpadSensitivity::GetRegistryStoreIdAndSection
                (&FStack_48,&FStack_58);
      ::FString::FString(&FStack_38,L"SavedTouchpadSensitivitySetting");
      bVar2 = FWindowsPlatformMisc::GetStoredValue(&FStack_48,&FStack_58,&FStack_38,&FStack_68);
      if (FStack_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_38.Data.AllocatorInstance.Data);
      }
      _Str.Data = (FScriptContainerElement *)L"";
      if (FStack_68.Data.ArrayNum != 0) {
        _Str.Data = FStack_68.Data.AllocatorInstance.Data;
      }
      aVar4 = (atomic<UE::WindowsApplication::TouchpadSensitivity::TOUCHPAD_SENSITIVITY_LEVEL>)
              _wtoi((wchar_t *)_Str.Data);
      if ((uint)aVar4 < 5) {
        if (FStack_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_58.Data.AllocatorInstance.Data);
        }
        if (FStack_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_48.Data.AllocatorInstance.Data);
        }
        if (FStack_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_68.Data.AllocatorInstance.Data);
        }
        if ((bVar2) &&
           (aVar4 != (atomic<UE::WindowsApplication::TouchpadSensitivity::TOUCHPAD_SENSITIVITY_LEVEL>
                      )0x0)) {
          if (4 < (byte)UE::WindowsApplication::TouchpadSensitivity::LogWindowsTouchpad._0_1_) {
            UE::Logging::Private::BasicLog<5>
                      (&::LOG_Static,
                       (FLogCategoryBase *)
                       &UE::WindowsApplication::TouchpadSensitivity::LogWindowsTouchpad);
          }
          LOCK();
          UNLOCK();
          UE::WindowsApplication::TouchpadSensitivity::ForceMaxTouchpadSensitivity_SavedSensitivity
               = aVar4;
          return;
        }
      }
      else {
        if (FStack_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_58.Data.AllocatorInstance.Data);
        }
        if (FStack_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_48.Data.AllocatorInstance.Data);
        }
        if (FStack_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_68.Data.AllocatorInstance.Data);
        }
      }
      goto LAB_1423d1008;
    }
  }
  if (UE::WindowsApplication::TouchpadSensitivity::ForceMaxTouchpadSensitivity_SavedSensitivity ==
      (atomic<UE::WindowsApplication::TouchpadSensitivity::TOUCHPAD_SENSITIVITY_LEVEL>)0xf) {
    if (5 < (byte)UE::WindowsApplication::TouchpadSensitivity::LogWindowsTouchpad._0_1_) {
      UE::Logging::Private::BasicLog<6>
                (&::LOG_Static,
                 (FLogCategoryBase *)
                 &UE::WindowsApplication::TouchpadSensitivity::LogWindowsTouchpad);
    }
    LOCK();
    UE::WindowsApplication::TouchpadSensitivity::ForceMaxTouchpadSensitivity_SavedSensitivity =
         uStack_20._0_4_;
    UNLOCK();
    UE::WindowsApplication::TouchpadSensitivity::WriteSavedSensitivityToRegistry
              ((TOUCHPAD_SENSITIVITY_LEVEL)uStack_20._0_4_);
  }
  uStack_20 = uStack_20 & 0xffffffff00000000;
  BVar3 = SystemParametersInfoW(0xaf,0x18,&uStack_28,0);
  if (BVar3 == 0) {
    if ((byte)UE::WindowsApplication::TouchpadSensitivity::LogWindowsTouchpad._0_1_ < 3) {
      return;
    }
    UE::Logging::Private::BasicLog<3>
              (&::LOG_Static,
               (FLogCategoryBase *)&UE::WindowsApplication::TouchpadSensitivity::LogWindowsTouchpad)
    ;
    return;
  }
  if (4 < (byte)UE::WindowsApplication::TouchpadSensitivity::LogWindowsTouchpad._0_1_) {
    UE::Logging::Private::BasicLog<5>
              (&::LOG_Static,
               (FLogCategoryBase *)&UE::WindowsApplication::TouchpadSensitivity::LogWindowsTouchpad)
    ;
  }
LAB_1423d112c:
  if (5 < (byte)UE::WindowsApplication::TouchpadSensitivity::LogWindowsTouchpad._0_1_) {
    UE::Logging::Private::BasicLog<6>
              (&::LOG_Static,
               (FLogCategoryBase *)&UE::WindowsApplication::TouchpadSensitivity::LogWindowsTouchpad)
    ;
  }
  return;
}

// ApplyLowLevelMouseFilter @ 1423d1180

void __thiscall FWindowsApplication::ApplyLowLevelMouseFilter(FWindowsApplication *this)

{
  HHOOK pHVar1;
  
  if (this->bLowLevelMouseFilterIsApplied == false) {
    pHVar1 = SetWindowsHookExW(0xe,HandleLowLevelMouseFilterHook,(HINSTANCE)0x0,0);
    this->LowLevelMouseFilterHook = (HHOOK__ *)pHVar1;
    this->bLowLevelMouseFilterIsApplied = true;
  }
  return;
}

// CacheCursorInfo @ 1423d1690

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall FWindowsApplication::CacheCursorInfo(FWindowsApplication *this)

{
  atomic<unsigned_int> *paVar1;
  atomic<bool> *paVar2;
  TEventCount<unsigned_int> *pTVar3;
  atomic<unsigned_int> aVar4;
  FTaskBase *pFVar5;
  uint uVar6;
  FTaskBase *this_00;
  undefined8 *puVar7;
  FTaskHandle *pFVar8;
  bool bVar9;
  longlong local_58;
  atomic<unsigned_int> *local_50;
  uint local_48;
  FWaitState local_40;
  
  bVar9 = -1 < CpuChannel->Enabled;
  if (bVar9) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId4600,"CacheCursorInfo",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ApplicationCore\\Private\\Windows\\WindowsApplication.cpp"
               ,0x11f8);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId4600);
  }
  paVar2 = &this->bAsyncCursorTaskActive;
  if (*paVar2 != (atomic<bool>)0x0) {
    aVar4 = (this->AsyncCursorEventCount).Count;
    LOCK();
    (this->AsyncCursorEventCount).Count =
         (atomic<unsigned_int>)((uint)(this->AsyncCursorEventCount).Count | 1);
    UNLOCK();
    if (this->bAsyncCursorTaskActive != (atomic<bool>)0x0) {
      pTVar3 = &this->AsyncCursorEventCount;
      uVar6 = (uint)aVar4 & 0xfffffffe;
      if (((uint)pTVar3->Count & 0xfffffffe) == uVar6) {
        local_50 = &pTVar3->Count;
        local_48 = uVar6;
        UE::ParkingLot::Private::Wait
                  (&local_40,pTVar3,
                   UE::TFunctionWithContext<bool___cdecl(void)>::
                   Call<_UE::TEventCount<unsigned_int>::Wait_::__l5::<lambda_1>_>,&local_50,
                   (_func___cdecl_void_void_ptr *)0x0,(void *)0x0);
      }
    }
  }
  LOCK();
  *paVar2 = (atomic<bool>)0x1;
  UNLOCK();
  this_00 = FMemory::Malloc(0x140,0x40);
  if (this_00 == (FTaskBase *)0x0) {
    this_00 = (FTaskBase *)0x0;
  }
  else {
    UE::Tasks::Private::FTaskBase::FTaskBase(this_00,2,true);
    this_00->_padding_ =
         (longlong)
         &UE::Tasks::Private::
          TExecutableTaskBase<`FWindowsApplication::CacheCursorInfo'::`2'::<lambda_1>,void,void>::
          _vftable_;
    UE::Tasks::Private::FTaskBase::Init
              (this_00,
               L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ApplicationCore\\Private\\Windows\\WindowsApplication.cpp(4613)"
               ,Default,None,None);
    this_00[1]._padding_ = (longlong)&this->AsyncCursorRWLock;
    this_00[1]._padding_ = (longlong)&this->bAsyncCursorPosValid;
    this_00[1]._padding_ = (longlong)&this->AsyncCursorPos;
    this_00[1]._padding_ = (longlong)&this->AsyncCursorWindowHandle;
    this_00[1]._padding_ = (longlong)paVar2;
    this_00[1]._padding_ = (longlong)&this->AsyncCursorEventCount;
    this_00->_padding_ =
         (longlong)
         &UE::Tasks::Private::
          TExecutableTask<`FWindowsApplication::CacheCursorInfo'::`2'::<lambda_1>_>::_vftable_;
  }
  UE::Tasks::Private::FTaskBase::TryLaunch(this_00,0x140);
  pFVar8 = &this->AsyncCursorTask;
  if (pFVar8 == (FTaskHandle *)&local_58) {
    if (this_00 == (FTaskBase *)0x0) goto LAB_1423d186a;
    LOCK();
    paVar1 = &this_00->RefCount;
    aVar4 = *paVar1;
    *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar4 != (atomic<unsigned_int>)0x1) goto LAB_1423d186a;
    puVar7 = (undefined8 *)this_00->_padding_;
  }
  else {
    pFVar5 = (pFVar8->Pimpl).Reference;
    (pFVar8->Pimpl).Reference = this_00;
    if (pFVar5 == (FTaskBase *)0x0) goto LAB_1423d186a;
    LOCK();
    paVar1 = &pFVar5->RefCount;
    aVar4 = *paVar1;
    *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar4 != (atomic<unsigned_int>)0x1) goto LAB_1423d186a;
    puVar7 = (undefined8 *)pFVar5->_padding_;
    this_00 = pFVar5;
  }
  (*(code *)*puVar7)(this_00,1);
LAB_1423d186a:
  if (bVar9) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// CheckForShiftUpEvents @ 1423d24e0

void __thiscall FWindowsApplication::CheckForShiftUpEvents(FWindowsApplication *this,int param_1)

{
  code *pcVar1;
  ForAnyElementType _Src;
  bool bVar2;
  SHORT SVar3;
  IPlatformInputDeviceMapper *pIVar4;
  int *piVar5;
  int iVar6;
  FString local_48;
  FInputDeviceScope local_38;
  
  if (1 < param_1 - 0xa0U) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("KeyCode == 0xA0 || KeyCode == 0xA1",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ApplicationCore\\Private\\Windows\\WindowsApplication.cpp"
                       ,0xbf1,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (this->ModifierKeyState[param_1 != 0xa0] != false) {
    SVar3 = GetKeyState(param_1);
    if (-1 < SVar3) {
      this->ModifierKeyState[param_1 != 0xa0] = false;
      _Src = UE::WindowsInput::KBMInputHardwareName.Data.AllocatorInstance;
      local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      iVar6 = UE::WindowsInput::KBMInputHardwareName.Data.ArrayNum;
      local_48.Data.ArrayNum = iVar6;
      if (iVar6 == 0) {
        local_48.Data.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,iVar6,0,(ForAnyElementType *)&local_48,iVar6,&local_48.Data.ArrayMax);
        memcpy(local_48.Data.AllocatorInstance.Data,_Src.Data,(longlong)iVar6 * 2);
      }
      pIVar4 = IPlatformInputDeviceMapper::Get();
      piVar5 = (int *)(**(code **)(pIVar4->_padding_ + 0x58))(pIVar4);
      FInputDeviceScope::FInputDeviceScope
                (&local_38,(IInputDevice *)0x0,UE::WindowsInput::InputClassName,*piVar5,&local_48);
      (**(code **)(**(longlong **)&this->field_0x18 + 0x20))
                (*(longlong **)&this->field_0x18,param_1,0,0);
      FInputDeviceScope::~FInputDeviceScope(&local_38);
    }
  }
  return;
}

// CreateWindowsApplication @ 1423d7740

FWindowsApplication * __cdecl
FWindowsApplication::CreateWindowsApplication(HINSTANCE__ *param_1,HICON__ *param_2)

{
  FWindowsApplication *this;
  
  this = ::operator_new(0x2e0);
  if (this != (FWindowsApplication *)0x0) {
    WindowsApplication = FWindowsApplication(this,param_1,param_2);
    return WindowsApplication;
  }
  WindowsApplication = (FWindowsApplication *)0x0;
  return (FWindowsApplication *)0x0;
}

// DeferDragDropOperation @ 1423d8210

void __thiscall
FWindowsApplication::DeferDragDropOperation
          (FWindowsApplication *this,FDeferredWindowsDragDropOperation *param_1)

{
  int *piVar1;
  TArray<FDeferredWindowsDragDropOperation,TSizedDefaultAllocator<32>_> *pTVar2;
  FDeferredWindowsDragDropOperation *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  
  pTVar2 = &this->DeferredDragDropOperations;
  pFVar3 = (FDeferredWindowsDragDropOperation *)(pTVar2->AllocatorInstance).Data;
  if ((pFVar3 <= param_1) && (param_1 < pFVar3 + (this->DeferredDragDropOperations).ArrayMax)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (this->DeferredDragDropOperations).ArrayNum;
  piVar1 = &(this->DeferredDragDropOperations).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x848,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->DeferredDragDropOperations).ArrayNum = iVar6 + 1;
  FDeferredWindowsDragDropOperation::FDeferredWindowsDragDropOperation
            ((FDeferredWindowsDragDropOperation *)
             ((pTVar2->AllocatorInstance).Data + (longlong)iVar6 * 0x48),param_1);
  return;
}

// DeferMessage @ 1423d82d0

void __thiscall
FWindowsApplication::DeferMessage
          (FWindowsApplication *this,TSharedPtr<FWindowsWindow,1> *param_1,HWND__ *param_2,
          uint param_3,ulong64 param_4,long64 param_5,int param_6,int param_7,uint param_8)

{
  int *piVar1;
  atomic<int> *paVar2;
  TArray<FDeferredWindowsMessage,TSizedDefaultAllocator<32>_> *pTVar3;
  atomic<int> aVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FWeakReferencer<1> FVar8;
  FScriptContainerElement *pFVar9;
  FWindowsWindow *local_88;
  TReferenceControllerBase<1> *local_80;
  HWND__ *local_78;
  uint local_70;
  ulong64 local_68;
  long64 local_60;
  int local_58;
  int local_54;
  uint local_50;
  FDeferredWindowsMessage local_48;
  
  if ((GPumpingMessagesOutsideOfMainLoop) && (this->bAllowedToDeferMessageProcessing != 0)) {
    local_88 = param_1->Object;
    local_80 = (param_1->SharedReferenceCount).ReferenceController;
    pTVar3 = &this->DeferredMessages;
    if (local_80 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_80->WeakReferenceCount = (atomic<int>)((int)local_80->WeakReferenceCount + 1);
      UNLOCK();
    }
    pFVar9 = (pTVar3->AllocatorInstance).Data;
    local_68 = param_4;
    local_60 = param_5;
    local_58 = param_6;
    local_54 = param_7;
    local_50 = param_8;
    local_78 = param_2;
    local_70 = param_3;
    if ((pFVar9 <= (FScriptContainerElement *)&local_88) &&
       ((FScriptContainerElement *)&local_88 <
        pFVar9 + (longlong)(this->DeferredMessages).ArrayMax * 0x40)) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    iVar7 = (this->DeferredMessages).ArrayNum;
    piVar1 = &(this->DeferredMessages).ArrayMax;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x840,&pTVar3->AllocatorInstance,piVar1);
    }
    (this->DeferredMessages).ArrayNum = iVar7 + 1;
    pFVar9 = (pTVar3->AllocatorInstance).Data + (longlong)iVar7 * 0x40;
    *(FWindowsWindow **)pFVar9 = local_88;
    *(TReferenceControllerBase<1> **)(pFVar9 + 8) = local_80;
    local_80 = (TReferenceControllerBase<1> *)0x0;
    local_88 = (FWindowsWindow *)0x0;
    *(HWND__ **)(pFVar9 + 0x10) = local_78;
    *(uint *)(pFVar9 + 0x18) = local_70;
    *(ulong64 *)(pFVar9 + 0x20) = local_68;
    *(long64 *)(pFVar9 + 0x28) = local_60;
    *(int *)(pFVar9 + 0x30) = local_58;
    *(int *)(pFVar9 + 0x34) = local_54;
    *(uint *)(pFVar9 + 0x38) = local_50;
    FVar8.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    local_48.NativeWindow.Object = param_1->Object;
    local_48.NativeWindow.WeakReferenceCount.ReferenceController =
         (param_1->SharedReferenceCount).ReferenceController;
    if (local_48.NativeWindow.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_48.NativeWindow.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
           (atomic<int>)
           ((int)(local_48.NativeWindow.WeakReferenceCount.ReferenceController)->WeakReferenceCount
           + 1);
      UNLOCK();
    }
    local_48.wParam = param_4;
    local_48.lParam = param_5;
    local_48.X = param_6;
    local_48.Y = param_7;
    local_48.RawInputFlags = param_8;
    local_48.hWND = param_2;
    local_48.Message = param_3;
    ProcessDeferredMessage(this,&local_48);
    FVar8.ReferenceController = local_48.NativeWindow.WeakReferenceCount.ReferenceController;
  }
  if (FVar8.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar2 = &(FVar8.ReferenceController)->WeakReferenceCount;
    aVar4 = *paVar2;
    *paVar2 = (atomic<int>)((int)*paVar2 + -1);
    UNLOCK();
    if (aVar4 == (atomic<int>)0x1) {
      (**(code **)((FVar8.ReferenceController)->_padding_ + 8))(FVar8.ReferenceController,1);
    }
  }
  return;
}

// DestroyApplication @ 1423d8e20

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FWindowsApplication::DestroyApplication(FWindowsApplication *this)

{
  code *pcVar1;
  bool bVar2;
  EForceMaxTouchpadSensitivityMode EVar3;
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  SystemParametersInfoW(0x3b,8,&this->StartupStickyKeys,0);
  SystemParametersInfoW(0x35,8,&this->StartupToggleKeys,0);
  SystemParametersInfoW(0x33,0x18,&this->StartupFilterKeys,0);
  FConfigCacheIni::EmptySection(GConfig,L"WindowsApplication.Accessibility",&GEngineIni);
  local_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->TaskbarList != (TSharedPtr<FTaskbarList,1> *)&local_18) {
    (this->TaskbarList).Object = (FTaskbarList *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->TaskbarList).SharedReferenceCount,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  if (this->bLowLevelMouseFilterIsApplied != false) {
    UnhookWindowsHookEx((HHOOK)this->LowLevelMouseFilterHook);
    this->bLowLevelMouseFilterIsApplied = false;
  }
  if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
    IConsoleManager::SetupSingleton();
    if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  (**(code **)((longlong)*IConsoleManager::Singleton + 0xb0))
            (IConsoleManager::Singleton,L"WindowsApplication.ApplyLowLevelMouseFilter",1);
  if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
    IConsoleManager::SetupSingleton();
    if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  (**(code **)((longlong)*IConsoleManager::Singleton + 0xb0))
            (IConsoleManager::Singleton,L"WindowsApplication.RemoveLowLevelMouseFilter",1);
  if (UE::WindowsApplication::TouchpadSensitivity::bForceMaxTouchpadSensitivity != false) {
    EVar3 = UE::WindowsApplication::TouchpadSensitivity::GetForceMaxTouchpadSensitivityMode();
    if (EVar3 == SetTouchpadParameters) {
      if (5 < (byte)UE::WindowsApplication::TouchpadSensitivity::LogWindowsTouchpad._0_1_) {
        UE::Logging::Private::BasicLog<6>
                  (&::LOG_Static,
                   (FLogCategoryBase *)
                   &UE::WindowsApplication::TouchpadSensitivity::LogWindowsTouchpad);
      }
      UE::WindowsApplication::TouchpadSensitivity::RemoveForceMaxTouchpadSensitivity();
      return;
    }
  }
  return;
}

// FinishedInputThisFrame @ 1423dc8b0

void __thiscall FWindowsApplication::FinishedInputThisFrame(FWindowsApplication *this)

{
  return;
}

// ForceUpdateAsyncCursor @ 1423dc8e0

void __thiscall FWindowsApplication::ForceUpdateAsyncCursor(FWindowsApplication *this)

{
  BOOL BVar1;
  HWND pHVar2;
  POINT local_res8;
  
  BVar1 = GetCursorPos(&local_res8);
  if (BVar1 == 0) {
    pHVar2 = (HWND)0x0;
  }
  else {
    pHVar2 = WindowFromPoint(local_res8);
  }
  AcquireSRWLockExclusive((PSRWLOCK)&this->AsyncCursorRWLock);
  (this->AsyncCursorPos).x = local_res8.x;
  (this->AsyncCursorPos).y = local_res8.y;
  this->bAsyncCursorPosValid = BVar1;
  this->AsyncCursorWindowHandle = (HWND__ *)pHVar2;
  ReleaseSRWLockExclusive((PSRWLOCK)&this->AsyncCursorRWLock);
  return;
}

// GetCapture @ 1423dde90

HWND __stdcall FWindowsApplication::GetCapture(void)

{
  HWND pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001423dde90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = ::GetCapture();
  return pHVar1;
}

// GetCursorPosition @ 1423de0b0

bool __thiscall FWindowsApplication::GetCursorPosition(FWindowsApplication *this,tagPOINT *param_1)

{
  int iVar1;
  
  AcquireSRWLockShared((PSRWLOCK)&this->AsyncCursorRWLock);
  *param_1 = this->AsyncCursorPos;
  iVar1 = this->bAsyncCursorPosValid;
  ReleaseSRWLockShared((PSRWLOCK)&this->AsyncCursorRWLock);
  return iVar1 != 0;
}

// GetFirstFreeTouchIndex @ 1423de6d0

uint __thiscall FWindowsApplication::GetFirstFreeTouchIndex(FWindowsApplication *this)

{
  int *piVar1;
  TArray<FWindowsApplication::TouchInfo,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  FScriptContainerElement local_28 [8];
  undefined8 local_20;
  undefined8 uStack_18;
  undefined4 local_10;
  FScriptContainerElement local_c;
  
  uVar7 = 0;
  pTVar2 = &this->TouchInfoArray;
  if (0 < (this->TouchInfoArray).ArrayNum) {
    lVar8 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar7 < (this->TouchInfoArray).ArrayNum) {
        uVar6 = ~uVar7 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar7 = (*pcVar4)();
        return uVar7;
      }
      if ((pTVar2->AllocatorInstance).Data[lVar8 + 0x1c] == (FScriptContainerElement)0x0) {
        return uVar7;
      }
      uVar7 = uVar7 + 1;
      lVar8 = lVar8 + 0x20;
    } while ((int)uVar7 < (this->TouchInfoArray).ArrayNum);
  }
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  local_28[0] = (FScriptContainerElement)0x0;
  local_c = (FScriptContainerElement)0x0;
  local_20 = 0;
  uStack_18 = 0;
  if (((pFVar3 <= local_28) &&
      (local_28 < pFVar3 + (longlong)(this->TouchInfoArray).ArrayMax * 0x20)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar7 = (*pcVar4)();
    return uVar7;
  }
  uVar7 = (this->TouchInfoArray).ArrayNum;
  piVar1 = &(this->TouchInfoArray).ArrayMax;
  if (uVar7 == *piVar1) {
    uVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,&pTVar2->AllocatorInstance,piVar1);
    (this->TouchInfoArray).ArrayNum = uVar7;
  }
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  (this->TouchInfoArray).ArrayNum = uVar7 + 1;
  lVar8 = (longlong)(int)uVar7 * 0x20;
  pFVar3[lVar8] = local_28[0];
  *(undefined8 *)(pFVar3 + lVar8 + 8) = local_20;
  *(undefined8 *)(pFVar3 + lVar8 + 8 + 8) = uStack_18;
  pFVar3[lVar8 + 0x1c] = (FScriptContainerElement)0x0;
  pFVar3[lVar8 + 0x1c] = local_c;
  if (local_c != (FScriptContainerElement)0x0) {
    *(undefined4 *)(pFVar3 + lVar8 + 0x18) = local_10;
  }
  return uVar7;
}

// GetForceMaxTouchpadSensitivityRestorationValue @ 1423dea80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

EForceMaxTouchpadSensitivityRestorationValues __thiscall
FWindowsApplication::GetForceMaxTouchpadSensitivityRestorationValue(FWindowsApplication *this)

{
  EForceMaxTouchpadSensitivityMode EVar1;
  atomic<UE::WindowsApplication::TouchpadSensitivity::TOUCHPAD_SENSITIVITY_LEVEL> aVar2;
  BOOL BVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_48;
  UE::WindowsApplication::TouchpadSensitivity::CacheForceMaxTouchpadSensitivityMode();
  EVar1 = UE::WindowsApplication::TouchpadSensitivity::GetForceMaxTouchpadSensitivityMode();
  aVar2 = UE::WindowsApplication::TouchpadSensitivity::ForceMaxTouchpadSensitivity_SavedSensitivity;
  if (EVar1 != SetTouchpadParameters) {
    if (5 < (byte)UE::WindowsApplication::TouchpadSensitivity::LogWindowsTouchpad._0_1_) {
      UE::Logging::Private::BasicLog<6>
                (&::LOG_Static,
                 (FLogCategoryBase *)
                 &UE::WindowsApplication::TouchpadSensitivity::LogWindowsTouchpad);
    }
    return RestorationNotNeeded;
  }
  if (UE::WindowsApplication::TouchpadSensitivity::ForceMaxTouchpadSensitivity_SavedSensitivity ==
      (atomic<UE::WindowsApplication::TouchpadSensitivity::TOUCHPAD_SENSITIVITY_LEVEL>)0xf) {
    local_18 = 0;
    local_28 = 0;
    uStack_20 = 0;
    BVar3 = SystemParametersInfoW(0xae,0x18,&local_28,0);
    if (BVar3 == 0) {
      if (2 < (byte)UE::WindowsApplication::TouchpadSensitivity::LogWindowsTouchpad._0_1_) {
        UE::Logging::Private::BasicLog<3>
                  (&::LOG_Static,
                   (FLogCategoryBase *)
                   &UE::WindowsApplication::TouchpadSensitivity::LogWindowsTouchpad);
      }
      aVar2 = (atomic<UE::WindowsApplication::TouchpadSensitivity::TOUCHPAD_SENSITIVITY_LEVEL>)
              0xfffffffe;
    }
    else if (uStack_20._0_4_ ==
             (atomic<UE::WindowsApplication::TouchpadSensitivity::TOUCHPAD_SENSITIVITY_LEVEL>)0x0) {
      if (5 < (byte)UE::WindowsApplication::TouchpadSensitivity::LogWindowsTouchpad._0_1_) {
        UE::Logging::Private::BasicLog<6>
                  (&::LOG_Static,
                   (FLogCategoryBase *)
                   &UE::WindowsApplication::TouchpadSensitivity::LogWindowsTouchpad);
      }
      aVar2 = (atomic<UE::WindowsApplication::TouchpadSensitivity::TOUCHPAD_SENSITIVITY_LEVEL>)
              0xffffffff;
    }
    else {
      aVar2 = uStack_20._0_4_;
      if (5 < (byte)UE::WindowsApplication::TouchpadSensitivity::LogWindowsTouchpad._0_1_) {
        UE::Logging::Private::BasicLog<6>
                  (&::LOG_Static,
                   (FLogCategoryBase *)
                   &UE::WindowsApplication::TouchpadSensitivity::LogWindowsTouchpad);
        aVar2 = uStack_20._0_4_;
      }
    }
  }
  else if (5 < (byte)UE::WindowsApplication::TouchpadSensitivity::LogWindowsTouchpad._0_1_) {
    UE::Logging::Private::BasicLog<6>
              (&::LOG_Static,
               (FLogCategoryBase *)&UE::WindowsApplication::TouchpadSensitivity::LogWindowsTouchpad)
    ;
  }
  return (EForceMaxTouchpadSensitivityRestorationValues)aVar2;
}

// GetInitialDisplayMetrics @ 1423df480

void __thiscall
FWindowsApplication::GetInitialDisplayMetrics(FWindowsApplication *this,FDisplayMetrics *param_1)

{
  TArray<FMonitorInfo,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  TArray<FMonitorInfo,TSizedDefaultAllocator<32>_> *pTVar3;
  int iVar4;
  FMonitorInfo *pFVar5;
  double dVar6;
  int iVar7;
  int iVar8;
  
  pTVar3 = &(this->InitialDisplayMetrics).MonitorInfo;
  pTVar1 = &param_1->MonitorInfo;
  param_1->PrimaryDisplayWidth = (this->InitialDisplayMetrics).PrimaryDisplayWidth;
  param_1->PrimaryDisplayHeight = (this->InitialDisplayMetrics).PrimaryDisplayHeight;
  if (pTVar1 != pTVar3) {
    DestructItems<FMonitorInfo,int>
              ((FMonitorInfo *)(pTVar1->AllocatorInstance).Data,(param_1->MonitorInfo).ArrayNum);
    iVar4 = (this->InitialDisplayMetrics).MonitorInfo.ArrayNum;
    piVar2 = &(param_1->MonitorInfo).ArrayMax;
    pFVar5 = (FMonitorInfo *)(pTVar3->AllocatorInstance).Data;
    (param_1->MonitorInfo).ArrayNum = iVar4;
    if ((iVar4 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x58,8,iVar4,*piVar2,&pTVar1->AllocatorInstance,iVar4,piVar2);
      ConstructItems<FMonitorInfo,FMonitorInfo,int>((pTVar1->AllocatorInstance).Data,pFVar5,iVar4);
    }
  }
  iVar4 = (this->InitialDisplayMetrics).PrimaryDisplayWorkAreaRect.Top;
  iVar7 = (this->InitialDisplayMetrics).PrimaryDisplayWorkAreaRect.Right;
  iVar8 = (this->InitialDisplayMetrics).PrimaryDisplayWorkAreaRect.Bottom;
  (param_1->PrimaryDisplayWorkAreaRect).Left =
       (this->InitialDisplayMetrics).PrimaryDisplayWorkAreaRect.Left;
  (param_1->PrimaryDisplayWorkAreaRect).Top = iVar4;
  (param_1->PrimaryDisplayWorkAreaRect).Right = iVar7;
  (param_1->PrimaryDisplayWorkAreaRect).Bottom = iVar8;
  iVar4 = (this->InitialDisplayMetrics).VirtualDisplayRect.Top;
  iVar7 = (this->InitialDisplayMetrics).VirtualDisplayRect.Right;
  iVar8 = (this->InitialDisplayMetrics).VirtualDisplayRect.Bottom;
  (param_1->VirtualDisplayRect).Left = (this->InitialDisplayMetrics).VirtualDisplayRect.Left;
  (param_1->VirtualDisplayRect).Top = iVar4;
  (param_1->VirtualDisplayRect).Right = iVar7;
  (param_1->VirtualDisplayRect).Bottom = iVar8;
  dVar6 = (this->InitialDisplayMetrics).TitleSafePaddingSize.field0_0x0._s_0.Y;
  (param_1->TitleSafePaddingSize).field0_0x0._s_0.X =
       (this->InitialDisplayMetrics).TitleSafePaddingSize.field0_0x0._s_0.X;
  (param_1->TitleSafePaddingSize).field0_0x0._s_0.Y = dVar6;
  dVar6 = (this->InitialDisplayMetrics).TitleSafePaddingSize.field0_0x0._s_0.W;
  (param_1->TitleSafePaddingSize).field0_0x0._s_0.Z =
       (this->InitialDisplayMetrics).TitleSafePaddingSize.field0_0x0._s_0.Z;
  (param_1->TitleSafePaddingSize).field0_0x0._s_0.W = dVar6;
  dVar6 = (this->InitialDisplayMetrics).ActionSafePaddingSize.field0_0x0._s_0.Y;
  (param_1->ActionSafePaddingSize).field0_0x0._s_0.X =
       (this->InitialDisplayMetrics).ActionSafePaddingSize.field0_0x0._s_0.X;
  (param_1->ActionSafePaddingSize).field0_0x0._s_0.Y = dVar6;
  dVar6 = (this->InitialDisplayMetrics).ActionSafePaddingSize.field0_0x0._s_0.W;
  (param_1->ActionSafePaddingSize).field0_0x0._s_0.Z =
       (this->InitialDisplayMetrics).ActionSafePaddingSize.field0_0x0._s_0.Z;
  (param_1->ActionSafePaddingSize).field0_0x0._s_0.W = dVar6;
  return;
}

// GetInputInterface @ 1423df630

IInputInterface * __thiscall FWindowsApplication::GetInputInterface(FWindowsApplication *this)

{
  IInputInterface *pIVar1;
  
  pIVar1 = (IInputInterface *)&this->field_0xb8;
  if (this == (FWindowsApplication *)0x0) {
    pIVar1 = (IInputInterface *)0x0;
  }
  return pIVar1;
}

// GetModifierKeys @ 1423dfae0

FModifierKeysState __thiscall FWindowsApplication::GetModifierKeys(FWindowsApplication *this)

{
  ushort *in_RDX;
  
  *in_RDX = *in_RDX & 0xfffe;
  *in_RDX = ((((((ushort)(this->ModifierKeyState[6] & 1) << 3 |
                (ushort)(this->ModifierKeyState[5] & 1)) * 2 |
               (ushort)(this->ModifierKeyState[4] & 1)) * 2 |
              (ushort)(this->ModifierKeyState[3] & 1)) * 2 | (ushort)(this->ModifierKeyState[2] & 1)
             ) * 2 | (ushort)(this->ModifierKeyState[1] & 1)) * 2 |
            (ushort)(this->ModifierKeyState[0] & 1) | *in_RDX & 0xfe01;
  return SUB82(in_RDX,0);
}

// GetTaskbarList @ 1423e43f0

TSharedPtr<FTaskbarList,1> * __thiscall
FWindowsApplication::GetTaskbarList
          (FWindowsApplication *this,TSharedPtr<FTaskbarList,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  
  __return_storage_ptr__->Object = (this->TaskbarList).Object;
  pTVar1 = (this->TaskbarList).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetTextInputMethodSystem @ 1423e4850

ITextInputMethodSystem * __thiscall
FWindowsApplication::GetTextInputMethodSystem(FWindowsApplication *this)

{
  return (ITextInputMethodSystem *)(this->TextInputMethodSystem).Object;
}

// GetTouchIndexForID @ 1423e49b0

uint __thiscall FWindowsApplication::GetTouchIndexForID(FWindowsApplication *this,int param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  
  uVar5 = 0;
  if (0 < (this->TouchInfoArray).ArrayNum) {
    lVar6 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar5 < (this->TouchInfoArray).ArrayNum) {
        uVar4 = ~uVar5 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return uVar5;
      }
      if ((this->TouchInfoArray).AllocatorInstance.Data[lVar6 + 0x1c] !=
          (FScriptContainerElement)0x0) {
        uVar4 = 0;
        if ((int)uVar5 < (this->TouchInfoArray).ArrayNum) {
          uVar4 = ~uVar5 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          uVar5 = (*pcVar2)();
          return uVar5;
        }
        pFVar1 = (this->TouchInfoArray).AllocatorInstance.Data;
        if ((pFVar1[lVar6 + 0x1c] == (FScriptContainerElement)0x0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsSet()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                               ,0x1bd,
                               L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                              ), bVar3)) {
          pcVar2 = (code *)swi(3);
          uVar5 = (*pcVar2)();
          return uVar5;
        }
        if (*(int *)(pFVar1 + lVar6 + 0x18) == param_1) {
          return uVar5;
        }
      }
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 0x20;
    } while ((int)uVar5 < (this->TouchInfoArray).ArrayNum);
  }
  return 0xffffffff;
}

// GetWindowTitleAlignment @ 1423e5610

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

Type __thiscall FWindowsApplication::GetWindowTitleAlignment(FWindowsApplication *this)

{
  BOOL BVar1;
  undefined8 uVar2;
  DWORDLONG dwlConditionMask;
  undefined1 auStack_158 [32];
  _OSVERSIONINFOEXW local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_158;
  memset(&local_138.dwBuildNumber,0,0x110);
  local_138.dwMajorVersion = 6;
  local_138.dwMinorVersion = 2;
  local_138.dwOSVersionInfoSize = 0x11c;
  uVar2 = VerSetConditionMask(0,2,3);
  dwlConditionMask = VerSetConditionMask(uVar2,1,3);
  BVar1 = VerifyVersionInfoW(&local_138,3,dwlConditionMask);
  return (Type)(BVar1 != 0);
}

// GetWindowTransparencySupport @ 1423e57e0

EWindowTransparency __thiscall
FWindowsApplication::GetWindowTransparencySupport(FWindowsApplication *this)

{
  return PerWindow;
}

// GetWorkArea @ 1423e5920

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FPlatformRect * __thiscall
FWindowsApplication::GetWorkArea
          (FWindowsApplication *this,FPlatformRect *__return_storage_ptr__,FPlatformRect *param_1)

{
  HMONITOR hMonitor;
  undefined1 auStack_68 [32];
  RECT local_48;
  tagMONITORINFO local_38;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_68;
  local_48.left = param_1->Left;
  local_48.top = param_1->Top;
  local_48.right = param_1->Right;
  local_48.bottom = param_1->Bottom;
  hMonitor = MonitorFromRect(&local_48,2);
  local_38.cbSize = 0x28;
  GetMonitorInfoW(hMonitor,&local_38);
  __return_storage_ptr__->Left = local_38.rcWork.left;
  __return_storage_ptr__->Top = local_38.rcWork.top;
  __return_storage_ptr__->Right = local_38.rcWork.right;
  __return_storage_ptr__->Bottom = local_38.rcWork.bottom;
  return __return_storage_ptr__;
}

// GetWorkAreaFromOS @ 1423e59e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FPlatformRect * __thiscall
FWindowsApplication::GetWorkAreaFromOS
          (FWindowsApplication *this,FPlatformRect *__return_storage_ptr__,FPlatformRect *param_1)

{
  HMONITOR hMonitor;
  undefined1 auStack_68 [32];
  RECT local_48;
  tagMONITORINFO local_38;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_68;
  local_48.left = param_1->Left;
  local_48.top = param_1->Top;
  local_48.right = param_1->Right;
  local_48.bottom = param_1->Bottom;
  hMonitor = MonitorFromRect(&local_48,2);
  local_38.cbSize = 0x28;
  GetMonitorInfoW(hMonitor,&local_38);
  __return_storage_ptr__->Left = local_38.rcWork.left;
  __return_storage_ptr__->Top = local_38.rcWork.top;
  __return_storage_ptr__->Right = local_38.rcWork.right;
  __return_storage_ptr__->Bottom = local_38.rcWork.bottom;
  return __return_storage_ptr__;
}

// HandleLowLevelMouseFilterHook @ 1423e6b90

long64 __cdecl
FWindowsApplication::HandleLowLevelMouseFilterHook(int param_1,ulong64 param_2,long64 param_3)

{
  LRESULT LVar1;
  ulonglong uVar2;
  
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001423e6bb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LVar1 = CallNextHookEx((HHOOK)0x0,param_1,param_2,param_3);
    return LVar1;
  }
  uVar2 = GetMessageExtraInfo();
  if (((uVar2 & 0xff515700) != 0xff515700) &&
     ((*(uint *)(param_3 + 0x18) & 0xff515700) != 0xff515700)) {
                    /* WARNING: Could not recover jumptable at 0x0001423e6bf1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LVar1 = CallNextHookEx((HHOOK)0x0,0,param_2,param_3);
    return LVar1;
  }
  CallNextHookEx((HHOOK)0x0,0,param_2,param_3);
  return 1;
}

// InitializeWindow @ 1423e9990

void __thiscall
FWindowsApplication::InitializeWindow
          (FWindowsApplication *this,TSharedRef<FGenericWindow,1> *param_1,
          TSharedRef<FGenericWindowDefinition,1> *param_2,TSharedPtr<FGenericWindow,1> *param_3,
          bool param_4)

{
  int *piVar1;
  TArray<TSharedRef<FWindowsWindow,1>,TSizedDefaultAllocator<32>_> *pTVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  FWindowsWindow *local_28;
  TReferenceControllerBase<1> *local_20;
  TSharedPtr<FWindowsWindow,1> local_18;
  
  local_28 = (FWindowsWindow *)param_1->Object;
  local_20 = (param_1->SharedReferenceCount).ReferenceController;
  if (local_20 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_20->SharedReferenceCount = (atomic<int>)((int)local_20->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_18.Object = (FWindowsWindow *)param_3->Object;
  local_18.SharedReferenceCount.ReferenceController =
       (param_3->SharedReferenceCount).ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar2 = &this->Windows;
  pFVar6 = (pTVar2->AllocatorInstance).Data;
  if ((pFVar6 <= (FScriptContainerElement *)&local_28) &&
     ((FScriptContainerElement *)&local_28 < pFVar6 + (longlong)(this->Windows).ArrayMax * 0x10)) {
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
  iVar5 = (this->Windows).ArrayNum;
  piVar1 = &(this->Windows).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&pTVar2->AllocatorInstance,piVar1);
  }
  pFVar6 = (pTVar2->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
  (this->Windows).ArrayNum = iVar5 + 1;
  *(FWindowsWindow **)pFVar6 = local_28;
  *(TReferenceControllerBase<1> **)(pFVar6 + 8) = local_20;
  if (local_20 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_20->SharedReferenceCount = (atomic<int>)((int)local_20->SharedReferenceCount + 1);
    UNLOCK();
  }
  FWindowsWindow::Initialize(local_28,this,param_2,this->InstanceHandle,&local_18,param_4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_20);
  return;
}

// IsCursorDirectlyOverSlateWindow @ 1423ea430

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FWindowsApplication::IsCursorDirectlyOverSlateWindow(FWindowsApplication *this)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  FName *pFVar5;
  FThreadSafeStaticStat<_public:_virtual_bool___cdecl_FWindowsApplication::IsCursorDirectlyOverSlateWindow(void)const_::_2_::FStat_STAT_IsCursorDirectlyOverSlateWindow>
  FVar6;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar7;
  FNameEntryId FVar8;
  FName FVar9;
  FNameEntryId FVar10;
  bool bVar11;
  LARGE_INTEGER local_res8;
  FName local_res10;
  undefined1 local_38 [12];
  uint uStack_2c;
  
  FVar10.Value = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (StatPtr_STAT_IsCursorDirectlyOverSlateWindow ==
          (FThreadSafeStaticStat<_public:_virtual_bool___cdecl_FWindowsApplication::IsCursorDirectlyOverSlateWindow(void)const_::_2_::FStat_STAT_IsCursorDirectlyOverSlateWindow>
           )0x0) {
        pFVar5 = ::FName::FName((FName *)&local_res8.s,"STAT_IsCursorDirectlyOverSlateWindow");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_STAT_IsCursorDirectlyOverSlateWindow,
                   *pFVar5,L"STAT_IsCursorDirectlyOverSlateWindow","STATGROUP_Quick",
                   "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar6 = StatPtr_STAT_IsCursorDirectlyOverSlateWindow;
  if (StatPtr_STAT_IsCursorDirectlyOverSlateWindow ==
      (FThreadSafeStaticStat<_public:_virtual_bool___cdecl_FWindowsApplication::IsCursorDirectlyOverSlateWindow(void)const_::_2_::FStat_STAT_IsCursorDirectlyOverSlateWindow>
       )0x0) {
    pFVar5 = ::FName::FName(&local_res10,"STAT_IsCursorDirectlyOverSlateWindow");
    FVar6 = (FThreadSafeStaticStat<_public:_virtual_bool___cdecl_FWindowsApplication::IsCursorDirectlyOverSlateWindow(void)const_::_2_::FStat_STAT_IsCursorDirectlyOverSlateWindow>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_IsCursorDirectlyOverSlateWindow,
                         *pFVar5,L"STAT_IsCursorDirectlyOverSlateWindow","STATGROUP_Quick",
                         "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar9 = *(FName *)FVar6;
  bVar2 = false;
  bVar4 = false;
  FVar8 = FVar9.ComparisonIndex.Value;
  uVar7 = FVar9.Number;
  if ((FVar8.Value != 0) || (uVar7 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar6 + 0x10));
      bVar2 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar8.Value;
        local_res8.s.HighPart = uVar7;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar6 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ApplicationCore\\Private\\Windows\\WindowsApplication.cpp"
                   ,0x62d);
        bVar2 = true;
        bVar4 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8.s.LowPart = FVar8.Value;
      local_res8.s.HighPart = uVar7;
      FThreadStats::AddMessage(FVar9,CycleScopeStart);
      bVar3 = true;
      FVar10.Value = FVar8.Value;
      goto LAB_1423ea5b3;
    }
  }
  bVar3 = false;
  FVar9.ComparisonIndex.Value = 0;
  FVar9.Number = 0;
LAB_1423ea5b3:
  AcquireSRWLockShared((PSRWLOCK)&this->AsyncCursorRWLock);
  if (this->bAsyncCursorPosValid == 0) {
    bVar11 = false;
  }
  else {
    FindWindowByHWND((TSharedPtr<FWindowsWindow,1> *)local_38,&this->Windows,
                     this->AsyncCursorWindowHandle);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)CONCAT44(uStack_2c,local_38._8_4_));
    bVar11 = (uchar  [8])local_38._0_8_ != (uchar  [8])0x0;
  }
  ReleaseSRWLockShared((PSRWLOCK)&this->AsyncCursorRWLock);
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar3) && (FVar9 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      uStack_2c = FVar9.Number & 0xffff6fff | 0x6000;
      local_38._8_4_ = FVar10.Value;
      QueryPerformanceCounter(&local_res8);
      local_38[4] = '\0';
      local_38[5] = '\0';
      local_38[6] = '\0';
      local_38[7] = '\0';
      local_38[0] = local_res8.s.LowPart._0_1_;
      local_38[1] = local_res8.s.LowPart._1_1_;
      local_38[2] = local_res8.s.LowPart._2_1_;
      local_38[3] = local_res8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,(FStatMessage *)local_38);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return bVar11;
}

// IsFakeMouseInputMessage @ 1423ea810

bool __cdecl FWindowsApplication::IsFakeMouseInputMessage(uint param_1)

{
  bool bVar1;
  ulonglong uVar2;
  
  if (bPreventDuplicateMouseEventsForTouch != 0) {
    bVar1 = IsMouseInputMessage(param_1);
    if (bVar1) {
      uVar2 = GetMessageExtraInfo();
      return (uVar2 & 0xff515700) == 0xff515700;
    }
  }
  return false;
}

// IsGamepadAttached @ 1423ea8f0

bool __thiscall FWindowsApplication::IsGamepadAttached(FWindowsApplication *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  char cVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  
  if (this->bForceNoGamepads == false) {
    for (iVar5 = 0; (-1 < iVar5 && (iVar5 < (this->ExternalInputDevices).ArrayNum));
        iVar5 = iVar5 + 1) {
      if (iVar5 < 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
      }
      pFVar6 = (this->ExternalInputDevices).AllocatorInstance.Data + (longlong)iVar5 * 0x10;
      if (*(longlong *)pFVar6 == 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
      }
      cVar4 = (**(code **)(**(longlong **)pFVar6 + 0x60))();
      if (cVar4 != '\0') {
        return true;
      }
    }
  }
  return false;
}

// IsInputMessage @ 1423eaa90

bool __cdecl FWindowsApplication::IsInputMessage(uint param_1)

{
  bool bVar1;
  
  switch(param_1) {
  case 0x100:
  case 0x101:
  case 0x102:
  case 0x104:
  case 0x105:
  case 0x106:
  case 0x112:
    break;
  default:
    bVar1 = IsMouseInputMessage(param_1);
    if (((!bVar1) && (param_1 != 0xfe)) && (param_1 != 0xff)) {
      return false;
    }
  }
  return true;
}

// IsKeyboardInputMessage @ 1423eab10

bool __cdecl FWindowsApplication::IsKeyboardInputMessage(uint param_1)

{
  switch(param_1) {
  case 0x100:
  case 0x101:
  case 0x102:
  case 0x104:
  case 0x105:
  case 0x106:
  case 0x112:
    return true;
  default:
    return false;
  }
}

// IsMinimized @ 1423eac40

bool __thiscall FWindowsApplication::IsMinimized(FWindowsApplication *this)

{
  return this->bMinimized;
}

// IsMouseAttached @ 1423eac90

bool __thiscall FWindowsApplication::IsMouseAttached(FWindowsApplication *this)

{
  return this->bIsMouseAttached;
}

// IsMouseInputMessage @ 1423eacb0

bool __cdecl FWindowsApplication::IsMouseInputMessage(uint param_1)

{
  if (0x200 < param_1) {
    switch(param_1) {
    case 0x201:
    case 0x202:
    case 0x203:
    case 0x204:
    case 0x205:
    case 0x206:
    case 0x207:
    case 0x208:
    case 0x209:
    case 0x20a:
    case 0x20b:
    case 0x20c:
    case 0x20d:
    case 0x20e:
    case 0x2a0:
    case 0x2a1:
    case 0x2a2:
    case 0x2a3:
      goto switchD_1423eacd6_caseD_a0;
    default:
switchD_1423eacd6_caseD_a1:
      return false;
    }
  }
  if (param_1 != 0x200) {
    switch(param_1) {
    case 0xa0:
    case 0xa4:
    case 0xa5:
    case 0xa6:
    case 0xa7:
    case 0xa8:
    case 0xa9:
    case 0xab:
    case 0xac:
    case 0xad:
      break;
    default:
      goto switchD_1423eacd6_caseD_a1;
    }
  }
switchD_1423eacd6_caseD_a0:
  return true;
}

// IsUsingHighPrecisionMouseMode @ 1423eb4b0

bool __thiscall FWindowsApplication::IsUsingHighPrecisionMouseMode(FWindowsApplication *this)

{
  return this->bUsingHighPrecisionMouseInput;
}

// MakeWindow @ 1423eebf0

TSharedRef<FGenericWindow,1> * __thiscall
FWindowsApplication::MakeWindow
          (FWindowsApplication *this,TSharedRef<FGenericWindow,1> *__return_storage_ptr__)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  FWindowsWindow *pFVar3;
  TRawPtrProxy<FWindowsWindow> local_res10 [3];
  TSharedRef<FWindowsWindow,1> local_18;
  
  pFVar3 = ::operator_new(0xb0);
  local_res10[0].Object = (FWindowsWindow *)0x0;
  if (pFVar3 != (FWindowsWindow *)0x0) {
    pFVar3->_padding_ = 0;
    pFVar3->_padding_ = 0;
    pFVar3->_padding_ = (longlong)&FWindowsWindow::_vftable__for__FGenericWindow__;
    pFVar3->_padding_ = (longlong)&FWindowsWindow::_vftable__for__IDropTarget__;
    pFVar3->HWnd = (HWND__ *)0x0;
    pFVar3->WindowMode = Windowed;
    pFVar3->OLEReferenceCount = 0;
    puVar2 = &pFVar3->field_0xa4;
    pFVar3->bIsVisible = false;
    pFVar3->bInitiallyMaximized = false;
    pFVar3->bInitiallyMinimized = false;
    pFVar3->bIsFirstTimeVisible = true;
    pFVar3->AspectRatio = 1.0;
    pFVar3->DPIScaleFactor = 1.0;
    pFVar3->bHandleManualDPIChanges = false;
    (pFVar3->PreFullscreenWindowPlacement).length = 0;
    (pFVar3->PreFullscreenWindowPlacement).flags = 0;
    (pFVar3->PreFullscreenWindowPlacement).showCmd = 0;
    (pFVar3->PreFullscreenWindowPlacement).ptMinPosition.x = 0;
    *(undefined8 *)&(pFVar3->PreFullscreenWindowPlacement).ptMinPosition.y = 0;
    *(undefined8 *)&(pFVar3->PreFullscreenWindowPlacement).ptMaxPosition.y = 0;
    (pFVar3->PreFullscreenWindowPlacement).rcNormalPosition.top = 0;
    (pFVar3->PreFullscreenWindowPlacement).rcNormalPosition.right = 0;
    (pFVar3->PreFullscreenWindowPlacement).rcNormalPosition.bottom = 0;
    (pFVar3->PreParentMinimizedWindowPlacement).flags = 0;
    (pFVar3->PreParentMinimizedWindowPlacement).showCmd = 0;
    (pFVar3->PreParentMinimizedWindowPlacement).ptMinPosition.x = 0;
    (pFVar3->PreParentMinimizedWindowPlacement).ptMinPosition.y = 0;
    (pFVar3->PreParentMinimizedWindowPlacement).ptMaxPosition.x = 0;
    (pFVar3->PreParentMinimizedWindowPlacement).ptMaxPosition.y = 0;
    (pFVar3->PreParentMinimizedWindowPlacement).rcNormalPosition.left = 0;
    (pFVar3->PreParentMinimizedWindowPlacement).rcNormalPosition.top = 0;
    (pFVar3->PreParentMinimizedWindowPlacement).rcNormalPosition.right = 0;
    (pFVar3->PreParentMinimizedWindowPlacement).rcNormalPosition.bottom = 0;
    (pFVar3->PreParentMinimizedWindowPlacement).length = 0x2c;
    local_res10[0].Object = pFVar3;
  }
  TSharedRef<FWindowsWindow,1>::TSharedRef<FWindowsWindow,1><FWindowsWindow>(&local_18,local_res10);
  __return_storage_ptr__->Object = (FGenericWindow *)local_18.Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       local_18.SharedReferenceCount.ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// OnInputDeviceModuleRegistered @ 1423f0a10

void __thiscall
FWindowsApplication::OnInputDeviceModuleRegistered
          (FWindowsApplication *this,FName *param_1,IModularFeature *param_2)

{
  IModularFeature *pIVar1;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName___cdecl_IInputDeviceModule::GetModularFeatureName(void)'::__l2::
      _thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName___cdecl_IInputDeviceModule::GetModularFeatureName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName___cdecl_IInputDeviceModule::GetModularFeatureName(void)'::__l2::
        _thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_static_class_FName___cdecl_IInputDeviceModule::GetModularFeatureName(void)'
                      ::__l2::FeatureName,L"InputDevice");
      _Init_thread_footer(&`public:_static_class_FName___cdecl_IInputDeviceModule::GetModularFeatureName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  if (*param_1 ==
      `public:_static_class_FName___cdecl_IInputDeviceModule::GetModularFeatureName(void)'::__l2::
      FeatureName) {
    pIVar1 = param_2 + -8;
    if (param_2 == (IModularFeature *)0x0) {
      pIVar1 = (IModularFeature *)0x0;
    }
    (**(code **)(*(longlong *)pIVar1 + 0x48))(pIVar1,&local_28,&this->field_0x18);
    local_18 = (undefined4)local_28;
    uStack_14 = local_28._4_4_;
    uStack_10 = (undefined4)uStack_20;
    uStack_c = uStack_20._4_4_;
    uStack_20 = (TReferenceControllerBase<1> *)0x0;
    local_28 = 0;
    (**(code **)(*(longlong *)this + 0x130))(this,&local_18);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(uStack_20);
  }
  return;
}

// OnOLEDragEnter @ 1423f0d30

undefined4 __thiscall
FWindowsApplication::OnOLEDragEnter
          (FWindowsApplication *this,HWND__ *param_1,FDragDropOLEData *param_2,ulong param_3,
          _POINTL param_4,ulong *param_5)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  undefined4 uVar5;
  BOOL BVar6;
  ulong uVar7;
  byte bVar8;
  TReferenceControllerBase<1> *pTVar9;
  TSharedPtr<FWindowsWindow,1> local_48;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  FindWindowByHWND(&local_48,&this->Windows,param_1);
  lVar2 = CONCAT44(local_48.Object._4_4_,local_48.Object._0_4_);
  if (lVar2 != 0) {
    this->CachedDragAndDropKeyState = 0;
    if (lVar2 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return uVar5;
      }
    }
    BVar6 = IsWindowEnabled(*(HWND *)(lVar2 + 0x28));
    if (BVar6 == 0) {
      *param_5 = 0;
    }
    else {
      UpdateAllModifierKeyStates(this);
      this->CachedDragAndDropKeyState = param_3;
      bVar8 = param_2->Type & 2;
      if ((param_2->Type & 1) != 0) {
        plVar1 = *(longlong **)&this->field_0x18;
        pTVar9 = (TReferenceControllerBase<1> *)
                 CONCAT44(local_48.SharedReferenceCount.ReferenceController._4_4_,
                          local_48.SharedReferenceCount.ReferenceController._0_4_);
        lVar2 = *plVar1;
        if (bVar8 == 0) {
          if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
            UNLOCK();
          }
          local_28 = local_48.Object._0_4_;
          uStack_24 = local_48.Object._4_4_;
          uStack_20 = local_48.SharedReferenceCount.ReferenceController._0_4_;
          uStack_1c = local_48.SharedReferenceCount.ReferenceController._4_4_;
          if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
            UNLOCK();
          }
          uVar7 = (**(code **)(lVar2 + 0x198))(plVar1,&local_28,param_2);
          *param_5 = uVar7;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)CONCAT44(uStack_1c,uStack_20));
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar9);
        }
        else {
          if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
            UNLOCK();
          }
          local_38 = local_48.Object._0_4_;
          uStack_34 = local_48.Object._4_4_;
          uStack_30 = local_48.SharedReferenceCount.ReferenceController._0_4_;
          uStack_2c = local_48.SharedReferenceCount.ReferenceController._4_4_;
          if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
            UNLOCK();
          }
          uVar7 = (**(code **)(lVar2 + 0x1a8))
                            (plVar1,&local_38,param_2,&param_2->OperationFilenames);
          *param_5 = uVar7;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)CONCAT44(uStack_2c,uStack_30));
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar9);
        }
        goto LAB_1423f0efb;
      }
      if (bVar8 != 0) {
        plVar1 = *(longlong **)&this->field_0x18;
        pTVar9 = (TReferenceControllerBase<1> *)
                 CONCAT44(local_48.SharedReferenceCount.ReferenceController._4_4_,
                          local_48.SharedReferenceCount.ReferenceController._0_4_);
        lVar2 = *plVar1;
        if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_18 = local_48.Object._0_4_;
        uStack_14 = local_48.Object._4_4_;
        uStack_10 = local_48.SharedReferenceCount.ReferenceController._0_4_;
        uStack_c = local_48.SharedReferenceCount.ReferenceController._4_4_;
        if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
          UNLOCK();
        }
        uVar7 = (**(code **)(lVar2 + 0x1a0))(plVar1,&local_18,&param_2->OperationFilenames);
        *param_5 = uVar7;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)CONCAT44(uStack_c,uStack_10));
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
        goto LAB_1423f0efb;
      }
    }
  }
  pTVar9 = (TReferenceControllerBase<1> *)
           CONCAT44(local_48.SharedReferenceCount.ReferenceController._4_4_,
                    local_48.SharedReferenceCount.ReferenceController._0_4_);
LAB_1423f0efb:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  return 0;
}

// OnOLEDragOut @ 1423f0f30

undefined4 __thiscall FWindowsApplication::OnOLEDragOut(FWindowsApplication *this,HWND__ *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  undefined4 uVar5;
  BOOL BVar6;
  TReferenceControllerBase<1> *pTVar7;
  TSharedPtr<FWindowsWindow,1> local_28;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  FindWindowByHWND(&local_28,&this->Windows,param_1);
  lVar2 = CONCAT44(local_28.Object._4_4_,local_28.Object._0_4_);
  if (lVar2 != 0) {
    if (lVar2 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return uVar5;
      }
    }
    BVar6 = IsWindowEnabled(*(HWND *)(lVar2 + 0x28));
    if (BVar6 != 0) {
      plVar1 = *(longlong **)&this->field_0x18;
      pTVar7 = (TReferenceControllerBase<1> *)
               CONCAT44(local_28.SharedReferenceCount.ReferenceController._4_4_,
                        local_28.SharedReferenceCount.ReferenceController._0_4_);
      lVar2 = *plVar1;
      if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_18 = local_28.Object._0_4_;
      uStack_14 = local_28.Object._4_4_;
      uStack_10 = local_28.SharedReferenceCount.ReferenceController._0_4_;
      uStack_c = local_28.SharedReferenceCount.ReferenceController._4_4_;
      if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
        UNLOCK();
      }
      (**(code **)(lVar2 + 0x1b8))(plVar1,&local_18);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)CONCAT44(uStack_c,uStack_10));
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
      goto LAB_1423f0fef;
    }
  }
  pTVar7 = (TReferenceControllerBase<1> *)
           CONCAT44(local_28.SharedReferenceCount.ReferenceController._4_4_,
                    local_28.SharedReferenceCount.ReferenceController._0_4_);
LAB_1423f0fef:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  return 0;
}

// OnOLEDragOver @ 1423f1010

undefined4 __thiscall
FWindowsApplication::OnOLEDragOver
          (FWindowsApplication *this,HWND__ *param_1,ulong param_2,_POINTL param_3,ulong *param_4)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  undefined4 uVar5;
  BOOL BVar6;
  ulong uVar7;
  TReferenceControllerBase<1> *pTVar8;
  TSharedPtr<FWindowsWindow,1> local_28;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  FindWindowByHWND(&local_28,&this->Windows,param_1);
  lVar2 = CONCAT44(local_28.Object._4_4_,local_28.Object._0_4_);
  if (lVar2 != 0) {
    if (lVar2 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return uVar5;
      }
    }
    BVar6 = IsWindowEnabled(*(HWND *)(lVar2 + 0x28));
    if (BVar6 != 0) {
      if (param_2 != this->CachedDragAndDropKeyState) {
        UpdateAllModifierKeyStates(this);
        this->CachedDragAndDropKeyState = param_2;
      }
      plVar1 = *(longlong **)&this->field_0x18;
      pTVar8 = (TReferenceControllerBase<1> *)
               CONCAT44(local_28.SharedReferenceCount.ReferenceController._4_4_,
                        local_28.SharedReferenceCount.ReferenceController._0_4_);
      lVar2 = *plVar1;
      if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_18 = local_28.Object._0_4_;
      uStack_14 = local_28.Object._4_4_;
      uStack_10 = local_28.SharedReferenceCount.ReferenceController._0_4_;
      uStack_c = local_28.SharedReferenceCount.ReferenceController._4_4_;
      if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
        UNLOCK();
      }
      uVar7 = (**(code **)(lVar2 + 0x1b0))(plVar1,&local_18);
      *param_4 = uVar7;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)CONCAT44(uStack_c,uStack_10));
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
      goto LAB_1423f10ff;
    }
    *param_4 = 0;
  }
  pTVar8 = (TReferenceControllerBase<1> *)
           CONCAT44(local_28.SharedReferenceCount.ReferenceController._4_4_,
                    local_28.SharedReferenceCount.ReferenceController._0_4_);
LAB_1423f10ff:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  return 0;
}

// OnOLEDrop @ 1423f1120

undefined4 __thiscall
FWindowsApplication::OnOLEDrop
          (FWindowsApplication *this,HWND__ *param_1,FDragDropOLEData *param_2,ulong param_3,
          _POINTL param_4,ulong *param_5)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  undefined4 uVar5;
  BOOL BVar6;
  ulong uVar7;
  TReferenceControllerBase<1> *pTVar8;
  TSharedPtr<FWindowsWindow,1> local_28;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  FindWindowByHWND(&local_28,&this->Windows,param_1);
  lVar2 = CONCAT44(local_28.Object._4_4_,local_28.Object._0_4_);
  if (lVar2 != 0) {
    if (lVar2 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return uVar5;
      }
    }
    BVar6 = IsWindowEnabled(*(HWND *)(lVar2 + 0x28));
    if (BVar6 != 0) {
      if (param_3 != this->CachedDragAndDropKeyState) {
        UpdateAllModifierKeyStates(this);
        this->CachedDragAndDropKeyState = param_3;
      }
      plVar1 = *(longlong **)&this->field_0x18;
      pTVar8 = (TReferenceControllerBase<1> *)
               CONCAT44(local_28.SharedReferenceCount.ReferenceController._4_4_,
                        local_28.SharedReferenceCount.ReferenceController._0_4_);
      lVar2 = *plVar1;
      if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_18 = local_28.Object._0_4_;
      uStack_14 = local_28.Object._4_4_;
      uStack_10 = local_28.SharedReferenceCount.ReferenceController._0_4_;
      uStack_c = local_28.SharedReferenceCount.ReferenceController._4_4_;
      if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
        UNLOCK();
      }
      uVar7 = (**(code **)(lVar2 + 0x1c0))(plVar1,&local_18);
      *param_5 = uVar7;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)CONCAT44(uStack_c,uStack_10));
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
      goto LAB_1423f120f;
    }
    *param_5 = 0;
  }
  pTVar8 = (TReferenceControllerBase<1> *)
           CONCAT44(local_28.SharedReferenceCount.ReferenceController._4_4_,
                    local_28.SharedReferenceCount.ReferenceController._0_4_);
LAB_1423f120f:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  return 0;
}

// PollGameDeviceState @ 1423f2650

void __thiscall FWindowsApplication::PollGameDeviceState(FWindowsApplication *this,float param_1)

{
  FScriptContainerElement *pFVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  IModularFeatures *pIVar6;
  TMulticastDelegateRegistration<void___cdecl(FName_const_&,IModularFeature_*),FDefaultDelegateUserPolicy>
  *this_00;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  undefined8 local_78;
  undefined8 uStack_70;
  TArray<IInputDeviceModule_*,TSizedDefaultAllocator<32>_> local_68;
  code *local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  if (this->bForceNoGamepads == false) {
    uVar8 = 0;
    if (this->bHasLoadedInputPlugins == false) {
      pIVar6 = IModularFeatures::Get();
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) <
           `public:_static_class_FName___cdecl_IInputDeviceModule::GetModularFeatureName(void)'::
           __l2::_thread_safe_static_guard_0__) &&
         (_Init_thread_header(&`public:_static_class_FName___cdecl_IInputDeviceModule::GetModularFeatureName(void)'
                               ::__l2::_thread_safe_static_guard_0__),
         `public:_static_class_FName___cdecl_IInputDeviceModule::GetModularFeatureName(void)'::__l2
         ::_thread_safe_static_guard_0__ == -1)) {
        ::FName::FName(&`public:_static_class_FName___cdecl_IInputDeviceModule::GetModularFeatureName(void)'
                        ::__l2::FeatureName,L"InputDevice");
        _Init_thread_footer(&`public:_static_class_FName___cdecl_IInputDeviceModule::GetModularFeatureName(void)'
                             ::__l2::_thread_safe_static_guard_0__);
      }
      IModularFeatures::GetModularFeatureImplementations<IInputDeviceModule>
                (pIVar6,&local_68,
                 `public:_static_class_FName___cdecl_IInputDeviceModule::GetModularFeatureName(void)'
                 ::__l2::FeatureName);
      for (uVar7 = uVar8; (-1 < (int)uVar7 && ((int)uVar7 < local_68.ArrayNum)); uVar7 = uVar7 + 1)
      {
        uVar5 = 0;
        if ((int)uVar7 < local_68.ArrayNum) {
          uVar5 = ~uVar7 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        (**(code **)(**(longlong **)(local_68.AllocatorInstance.Data + (longlong)(int)uVar7 * 8) +
                    0x48))(*(longlong **)
                            (local_68.AllocatorInstance.Data + (longlong)(int)uVar7 * 8),&local_78,
                           &this->field_0x18);
        local_48 = (undefined4)local_78;
        uStack_44 = local_78._4_4_;
        uStack_40 = (undefined4)uStack_70;
        uStack_3c = uStack_70._4_4_;
        uStack_70 = (TReferenceControllerBase<1> *)0x0;
        local_78 = 0;
        (**(code **)(*(longlong *)this + 0x130))(this,&local_48);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (uStack_70);
      }
      pIVar6 = IModularFeatures::Get();
      this_00 = (TMulticastDelegateRegistration<void___cdecl(FName_const_&,IModularFeature_*),FDefaultDelegateUserPolicy>
                 *)(**(code **)((longlong)*pIVar6 + 0x38))(pIVar6);
      uStack_50 = (ulonglong)uStack_50._4_4_ << 0x20;
      local_58 = OnInputDeviceModuleRegistered;
      TMulticastDelegateRegistration<void___cdecl(FName_const_&,IModularFeature_*),FDefaultDelegateUserPolicy>
      ::AddRaw<FWindowsApplication>
                (this_00,(FWindowsApplication *)&stack0x00000008,(pmf_8e82cf4a *)this);
      this->bHasLoadedInputPlugins = true;
      if (local_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.AllocatorInstance.Data);
      }
    }
    if ((FApp::bUseVRFocus == false) || (FApp::bHasVRFocus != false)) {
      for (; (-1 < (int)uVar8 && ((int)uVar8 < (this->ExternalInputDevices).ArrayNum));
          uVar8 = uVar8 + 1) {
        if (((int)uVar8 < 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar1 = (this->ExternalInputDevices).AllocatorInstance.Data;
        lVar9 = (longlong)(int)uVar8;
        if ((*(longlong *)(pFVar1 + lVar9 * 0x10) == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        plVar2 = *(longlong **)(pFVar1 + lVar9 * 0x10);
        (**(code **)(*plVar2 + 8))(plVar2,param_1);
        uVar7 = 0;
        if ((int)uVar8 < (this->ExternalInputDevices).ArrayNum) {
          uVar7 = ~uVar8 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar1 = (this->ExternalInputDevices).AllocatorInstance.Data;
        if ((*(longlong *)(pFVar1 + lVar9 * 0x10) == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        (**(code **)(**(longlong **)(pFVar1 + lVar9 * 0x10) + 0x10))();
      }
    }
  }
  return;
}

// PostPumpMessages @ 1423f2af0

void __thiscall FWindowsApplication::PostPumpMessages(FWindowsApplication *this)

{
  FWindowsApplication *this_00;
  bool bVar1;
  
  this_00 = WindowsApplication;
  if (WindowsApplication->bUsingHighPrecisionMouseInput == false) goto LAB_1423f2b36;
  if (UE::WindowsApplication::RawInputThread::bUseWorkerThreadForRawInput) {
    bVar1 = FGenericPlatformProcess::SupportsMultithreading();
    if (!bVar1) goto LAB_1423f2b1c;
    bVar1 = true;
  }
  else {
LAB_1423f2b1c:
    bVar1 = false;
  }
  if (this_00->bCachedUseWorkerThreadForRawInput != bVar1) {
    UnregisterHighPrecisionMouseMode(this_00);
    RegisterHighPrecisionMouseMode(this_00);
  }
LAB_1423f2b36:
  ProcessWorkerInputs(WindowsApplication);
  CacheCursorInfo(WindowsApplication);
  return;
}

// ProcessDeferredDragDropOperation @ 1423f2fa0

void __thiscall
FWindowsApplication::ProcessDeferredDragDropOperation
          (FWindowsApplication *this,FDeferredWindowsDragDropOperation *param_1)

{
  Type TVar1;
  FDeferredWindowsDragDropOperation *local_res10 [3];
  
  TVar1 = param_1->OperationType;
  if (TVar1 == DragEnter) {
    OnOLEDragEnter(this,param_1->HWnd,&param_1->OLEData,param_1->KeyState,param_1->CursorPosition,
                   (ulong *)local_res10);
    return;
  }
  if (TVar1 == DragOver) {
    OnOLEDragOver(this,param_1->HWnd,param_1->KeyState,param_1->CursorPosition,(ulong *)local_res10)
    ;
    return;
  }
  if (TVar1 == DragLeave) {
    OnOLEDragOut(this,param_1->HWnd);
    return;
  }
  if (TVar1 != Drop) {
    local_res10[0] = param_1;
    `FWindowsApplication::ProcessDeferredDragDropOperation'::__l4::<lambda_1>::operator()
              (local_res10);
    return;
  }
  OnOLEDrop(this,param_1->HWnd,&param_1->OLEData,param_1->KeyState,param_1->CursorPosition,
            (ulong *)local_res10);
  return;
}

// ProcessDeferredEvents @ 1423f3070

void __thiscall FWindowsApplication::ProcessDeferredEvents(FWindowsApplication *this,float param_1)

{
  int *piVar1;
  TArray<FDeferredWindowsMessage,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FDeferredWindowsDragDropOperation,TSizedDefaultAllocator<32>_> *pTVar3;
  int iVar4;
  FDeferredWindowsMessage *pFVar5;
  FDeferredWindowsDragDropOperation *pFVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  FScriptContainerElement *pFVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulong local_res18 [2];
  FScriptContainerElement *local_res20;
  ForAnyElementType local_48;
  int local_40;
  int local_3c;
  ForAnyElementType local_38;
  int local_30;
  int local_2c;
  
  pTVar2 = &this->DeferredMessages;
  uVar13 = 0;
  iVar4 = (this->DeferredMessages).ArrayNum;
  pFVar5 = (FDeferredWindowsMessage *)(pTVar2->AllocatorInstance).Data;
  local_48.Data = (FScriptContainerElement *)0x0;
  local_40 = iVar4;
  if (iVar4 == 0) {
    local_3c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x40,8,iVar4,0,&local_48,iVar4,&local_3c);
    ConstructItems<FDeferredWindowsMessage,FDeferredWindowsMessage,int>(local_48.Data,pFVar5,iVar4);
  }
  DestructItems<FDeferredWindowsMessage,int>
            ((FDeferredWindowsMessage *)(pTVar2->AllocatorInstance).Data,
             (this->DeferredMessages).ArrayNum);
  piVar1 = &(this->DeferredMessages).ArrayMax;
  (this->DeferredMessages).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x40,8,0,&pTVar2->AllocatorInstance,0,piVar1);
  }
  uVar12 = uVar13;
  if (0 < local_40) {
    do {
      uVar11 = (uint)uVar12;
      uVar9 = 0;
      if ((int)uVar11 < local_40) {
        uVar9 = ~uVar11 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      ProcessDeferredMessage
                (this,(FDeferredWindowsMessage *)(local_48.Data + (longlong)(int)uVar11 * 0x40));
      uVar12 = (ulonglong)(uVar11 + 1);
    } while ((int)(uVar11 + 1) < local_40);
  }
  CheckForShiftUpEvents(this,0xa0);
  CheckForShiftUpEvents(this,0xa1);
  DestructItems<FDeferredWindowsMessage,int>((FDeferredWindowsMessage *)local_48.Data,local_40);
  if ((FDeferredWindowsMessage *)local_48.Data != (FDeferredWindowsMessage *)0x0) {
    FMemory::Free(local_48.Data);
  }
  pTVar3 = &this->DeferredDragDropOperations;
  local_38.Data = (FScriptContainerElement *)0x0;
  iVar4 = (this->DeferredDragDropOperations).ArrayNum;
  pFVar6 = (FDeferredWindowsDragDropOperation *)(pTVar3->AllocatorInstance).Data;
  local_30 = iVar4;
  if (iVar4 == 0) {
    local_2c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x48,8,iVar4,0,&local_38,iVar4,&local_2c);
    ConstructItems<FDeferredWindowsDragDropOperation,FDeferredWindowsDragDropOperation,int>
              (local_38.Data,pFVar6,iVar4);
  }
  DestructItems<FDeferredWindowsDragDropOperation,int>
            ((FDeferredWindowsDragDropOperation *)(pTVar3->AllocatorInstance).Data,
             (this->DeferredDragDropOperations).ArrayNum);
  piVar1 = &(this->DeferredDragDropOperations).ArrayMax;
  (this->DeferredDragDropOperations).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x48,8,0,&pTVar3->AllocatorInstance,0,piVar1);
  }
  uVar12 = uVar13;
  if (0 < local_30) {
    do {
      uVar11 = (uint)uVar13;
      uVar9 = 0;
      if ((int)uVar11 < local_30) {
        uVar9 = ~uVar11 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar10 = local_38.Data + uVar12;
      local_res18[0] = 0;
      iVar4 = *(int *)pFVar10;
      if (iVar4 == 0) {
        OnOLEDragEnter(this,*(HWND__ **)(pFVar10 + 8),(FDragDropOLEData *)(pFVar10 + 0x10),
                       *(ulong *)(pFVar10 + 0x38),*(_POINTL *)(pFVar10 + 0x3c),local_res18);
      }
      else if (iVar4 == 1) {
        OnOLEDragOver(this,*(HWND__ **)(pFVar10 + 8),*(ulong *)(pFVar10 + 0x38),
                      *(_POINTL *)(pFVar10 + 0x3c),local_res18);
      }
      else if (iVar4 == 2) {
        OnOLEDragOut(this,*(HWND__ **)(pFVar10 + 8));
      }
      else if (iVar4 == 3) {
        OnOLEDrop(this,*(HWND__ **)(pFVar10 + 8),(FDragDropOLEData *)(pFVar10 + 0x10),
                  *(ulong *)(pFVar10 + 0x38),*(_POINTL *)(pFVar10 + 0x3c),local_res18);
      }
      else {
        local_res20 = pFVar10;
        `FWindowsApplication::ProcessDeferredDragDropOperation'::__l4::<lambda_1>::operator()
                  (&local_res20);
      }
      uVar13 = (ulonglong)(uVar11 + 1);
      uVar12 = uVar12 + 0x48;
    } while ((int)(uVar11 + 1) < local_30);
  }
  DestructItems<FDeferredWindowsDragDropOperation,int>
            ((FDeferredWindowsDragDropOperation *)local_38.Data,local_30);
  if ((FDeferredWindowsDragDropOperation *)local_38.Data != (FDeferredWindowsDragDropOperation *)0x0
     ) {
    FMemory::Free(local_38.Data);
  }
  return;
}

// ProcessDeferredMessage @ 1423f33b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
FWindowsApplication::ProcessDeferredMessage
          (FWindowsApplication *this,FDeferredWindowsMessage *param_1)

{
  undefined1 auVar1 [16];
  undefined4 uVar2;
  TReferenceControllerBase<1> *pTVar3;
  HWND__ *hWnd;
  HTOUCHINPUT hTouchInput;
  ulonglong uVar4;
  FWindowsTextInputMethodSystem *this_00;
  undefined4 uVar5;
  code *pcVar6;
  undefined1 auVar7 [16];
  atomic<int> aVar8;
  float fVar9;
  undefined4 uVar10;
  FWindowsWindow *this_01;
  char cVar11;
  byte bVar12;
  bool bVar13;
  short sVar14;
  SHORT SVar15;
  atomic<int> aVar16;
  EForceMaxTouchpadSensitivityMode EVar17;
  BOOL BVar18;
  UINT UVar19;
  UINT UVar20;
  uint uVar21;
  uint uVar22;
  int iVar23;
  longlong lVar24;
  FString *pFVar25;
  IPlatformInputDeviceMapper *pIVar26;
  int *piVar27;
  ulong64 _Size;
  longlong *plVar28;
  FScriptContainerElement *pFVar29;
  uint uVar30;
  short sVar31;
  PTOUCHINPUT ptVar32;
  FDeferredWindowsMessage *pFVar33;
  longlong lVar34;
  bool bVar35;
  double dVar36;
  double dVar37;
  undefined1 auStackY_428 [32];
  PTOUCHINPUT local_3d8;
  double local_3d0;
  double dStack_3c8;
  tagPOINT local_3c0;
  FDeferredWindowsMessage *local_3b8;
  FWindowsWindow *local_3b0;
  TReferenceControllerBase<1> *pTStack_3a8;
  FWindowsWindow *local_3a0;
  TReferenceControllerBase<1> *local_398;
  FWindowsWindow *local_390;
  TReferenceControllerBase<1> *local_388;
  FWindowsWindow *local_380;
  TReferenceControllerBase<1> *local_378;
  FWindowsWindow *local_370;
  TReferenceControllerBase<1> *local_368;
  FWindowsWindow *local_360;
  TReferenceControllerBase<1> *local_358;
  FWindowsWindow *local_350;
  TReferenceControllerBase<1> *local_348;
  FWindowsWindow *local_340;
  TReferenceControllerBase<1> *local_338;
  FWindowsWindow *local_330;
  TReferenceControllerBase<1> *local_328;
  HTOUCHINPUT local_300;
  FWindowsWindow *local_2f8;
  TReferenceControllerBase<1> *local_2f0;
  FWindowsWindow *local_2e8;
  TReferenceControllerBase<1> *local_2e0;
  FWindowsWindow *local_2d8;
  TReferenceControllerBase<1> *local_2d0;
  double local_2c8;
  double local_2c0;
  double local_2b8;
  double local_2b0;
  double local_2a8;
  double local_2a0;
  double local_298;
  double local_290;
  FScriptContainerElement local_288 [8];
  FScriptContainerElement local_280 [8];
  FInputDeviceScope local_278;
  FInputDeviceScope local_250;
  FString local_228;
  FString local_218;
  FString local_208;
  FString local_1f8;
  FString local_1e8;
  FString local_1d8;
  FString local_1c8;
  FString local_1b8;
  FInputDeviceScope local_1a8;
  FInputDeviceScope local_180;
  FInputDeviceScope local_158;
  FInputDeviceScope local_130;
  FInputDeviceScope local_108;
  FInputDeviceScope local_e0;
  ULONG_PTR local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  ulonglong local_70;
  
  local_70 = __security_cookie.value ^ (ulonglong)auStackY_428;
  iVar23 = 0;
  if ((this->Windows).ArrayNum == 0) {
    return 0;
  }
  if ((param_1->NativeWindow).Object == (FWindowsWindow *)0x0) {
    return 0;
  }
  pTVar3 = (param_1->NativeWindow).WeakReferenceCount.ReferenceController;
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    return 0;
  }
  if ((int)pTVar3->SharedReferenceCount < 1) {
    return 0;
  }
  pTStack_3a8 = (param_1->NativeWindow).WeakReferenceCount.ReferenceController;
  hWnd = param_1->hWND;
  hTouchInput = (HTOUCHINPUT)param_1->lParam;
  uVar21 = param_1->Message;
  uVar4 = param_1->wParam;
  if (pTStack_3a8 == (TReferenceControllerBase<1> *)0x0) {
    plVar28 = *(longlong **)&this->field_0x18;
    lVar24 = *plVar28;
    local_3b0 = (FWindowsWindow *)0x0;
  }
  else {
    aVar8 = pTStack_3a8->SharedReferenceCount;
    do {
      if (aVar8 == (atomic<int>)0x0) {
        plVar28 = *(longlong **)&this->field_0x18;
        lVar24 = *plVar28;
        local_3b0 = (FWindowsWindow *)0x0;
        pTStack_3a8 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_1423f349d;
      }
      LOCK();
      aVar16 = pTStack_3a8->SharedReferenceCount;
      bVar35 = aVar8 == aVar16;
      if (bVar35) {
        pTStack_3a8->SharedReferenceCount = (atomic<int>)((int)aVar8 + 1);
        aVar16 = aVar8;
      }
      UNLOCK();
      aVar8 = aVar16;
    } while (!bVar35);
    plVar28 = *(longlong **)&this->field_0x18;
    local_3b0 = (param_1->NativeWindow).Object;
    lVar24 = *plVar28;
    LOCK();
    pTStack_3a8->SharedReferenceCount = (atomic<int>)((int)pTStack_3a8->SharedReferenceCount + 1);
    UNLOCK();
  }
LAB_1423f349d:
  pTVar3 = pTStack_3a8;
  this_01 = local_3b0;
  local_3b8 = param_1;
  local_300 = hTouchInput;
  cVar11 = (**(code **)(lVar24 + 8))(plVar28,&local_3b0);
  if ((cVar11 == '\0') && (bVar35 = IsInputMessage(uVar21), bVar35)) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_3a8)
    ;
    bVar35 = IsKeyboardInputMessage(uVar21);
    if (bVar35) {
      UpdateAllModifierKeyStates(this);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      return 0;
    }
    goto LAB_1423f487a;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_3a8);
  sVar31 = (short)hTouchInput;
  uVar30 = 0;
  sVar14 = (short)((ulonglong)hTouchInput >> 0x10);
  if (uVar21 < 0x100) {
    if (uVar21 == 0xff) {
      pFVar25 = ::FString::FString(&local_1c8,&UE::WindowsInput::KBMInputHardwareName);
      pIVar26 = IPlatformInputDeviceMapper::Get();
      piVar27 = (int *)(**(code **)(pIVar26->_padding_ + 0x58))(pIVar26);
      FInputDeviceScope::FInputDeviceScope
                (&local_1a8,(IInputDevice *)0x0,UE::WindowsInput::InputClassName,*piVar27,pFVar25);
      lVar24 = **(longlong **)&this->field_0x18;
      if (local_3b8->RawInputFlags != 0) {
        (**(code **)(lVar24 + 0x70))();
        FInputDeviceScope::~FInputDeviceScope(&local_1a8);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
        return 0;
      }
      (**(code **)(lVar24 + 0x78))(*(longlong **)&this->field_0x18,local_3b8->X,local_3b8->Y);
      FInputDeviceScope::~FInputDeviceScope(&local_1a8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      return 0;
    }
    switch(uVar21) {
    case 5:
      if (this_01 != (FWindowsWindow *)0x0) {
        lVar24 = (**(code **)(this_01->_padding_ + 0xe0))(this_01);
        if ((*(char *)(lVar24 + 0x25) != '\0') && (*(char *)(lVar24 + 0x18) == '\0')) {
          FWindowsWindow::AdjustWindowRegion(this_01,(int)sVar31,(int)sVar14);
        }
        iVar23 = (**(code **)(this_01->_padding_ + 0x68))(this_01);
        if (iVar23 != 0) {
          plVar28 = *(longlong **)&this->field_0x18;
          lVar24 = *plVar28;
          if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
            UNLOCK();
            LOCK();
            pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
            UNLOCK();
          }
          local_350 = this_01;
          local_348 = pTVar3;
          (**(code **)(lVar24 + 0x128))(plVar28,&local_350,(int)sVar31,(int)sVar14);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_348);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar3);
        }
      }
      break;
    case 6:
      if ((uVar4 & 1) == 0) {
        cVar11 = ((uVar4 & 2) == 0) + '\x01';
      }
      else {
        cVar11 = this->bForceActivateByMouse != false;
      }
      this->bForceActivateByMouse = false;
      UpdateAllModifierKeyStates(this);
      if (this_01 != (FWindowsWindow *)0x0) {
        plVar28 = *(longlong **)&this->field_0x18;
        lVar24 = *plVar28;
        if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
          UNLOCK();
          LOCK();
          pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_370 = this_01;
        local_368 = pTVar3;
        cVar11 = (**(code **)(lVar24 + 0x170))(plVar28,&local_370,cVar11);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_368);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
        return (uint)(cVar11 == '\0');
      }
LAB_1423f37fa:
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      return 1;
    case 0x10:
      if (this_01 != (FWindowsWindow *)0x0) {
        plVar28 = *(longlong **)&this->field_0x18;
        lVar24 = *plVar28;
        if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
          UNLOCK();
          LOCK();
          pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_360 = this_01;
        local_358 = pTVar3;
        (**(code **)(lVar24 + 400))(plVar28,&local_360);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_358);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
        return 0;
      }
      goto LAB_1423f487a;
    case 0x18:
      if (this_01 != (FWindowsWindow *)0x0) {
        if (hTouchInput == (HTOUCHINPUT)&DAT_00000001) {
          GetWindowPlacement((HWND)this_01->HWnd,
                             (WINDOWPLACEMENT *)&this_01->PreParentMinimizedWindowPlacement);
          this->bMinimized = true;
        }
        else if (hTouchInput == (HTOUCHINPUT)&DAT_00000003) {
          SetWindowPlacement((HWND)this_01->HWnd,
                             (WINDOWPLACEMENT *)&this_01->PreParentMinimizedWindowPlacement);
          this->bMinimized = false;
        }
      }
      break;
    case 0x1a:
      if ((hTouchInput != (HTOUCHINPUT)0x0) &&
         (iVar23 = wcscmp((wchar_t *)hTouchInput,L"ConvertibleSlateMode"), iVar23 == 0)) {
        (**(code **)(**(longlong **)&this->field_0x18 + 0x180))();
      }
      if (((uVar4 == 0xaf) &&
          (UE::WindowsApplication::TouchpadSensitivity::bForceMaxTouchpadSensitivity != false)) &&
         (UE::WindowsApplication::TouchpadSensitivity::CachedForceMaxTouchpadSensitivityMode ==
          SetTouchpadParameters)) {
        if (5 < (byte)UE::WindowsApplication::TouchpadSensitivity::LogWindowsTouchpad._0_1_) {
          UE::Logging::Private::BasicLog<6>
                    (&::LOG_Static,
                     (FLogCategoryBase *)
                     &UE::WindowsApplication::TouchpadSensitivity::LogWindowsTouchpad);
        }
        local_78 = 0;
        local_88 = 0;
        uStack_80 = 0;
        BVar18 = SystemParametersInfoW(0xae,0x18,&local_88,0);
        if (BVar18 == 0) {
          if (2 < (byte)UE::WindowsApplication::TouchpadSensitivity::LogWindowsTouchpad._0_1_) {
            UE::Logging::Private::BasicLog<3>
                      (&::LOG_Static,
                       (FLogCategoryBase *)
                       &UE::WindowsApplication::TouchpadSensitivity::LogWindowsTouchpad);
          }
        }
        else {
          if (4 < (byte)UE::WindowsApplication::TouchpadSensitivity::LogWindowsTouchpad._0_1_) {
            UE::Logging::Private::BasicLog<5>
                      (&::LOG_Static,
                       (FLogCategoryBase *)
                       &UE::WindowsApplication::TouchpadSensitivity::LogWindowsTouchpad);
          }
          LOCK();
          UE::WindowsApplication::TouchpadSensitivity::ForceMaxTouchpadSensitivity_SavedSensitivity
               = uStack_80._0_4_;
          UNLOCK();
          if (uStack_80._0_4_ ==
              (atomic<UE::WindowsApplication::TouchpadSensitivity::TOUCHPAD_SENSITIVITY_LEVEL>)0x0)
          {
            UE::WindowsApplication::TouchpadSensitivity::ClearSavedSensitivityFromRegistry();
          }
          else {
            UE::WindowsApplication::TouchpadSensitivity::WriteSavedSensitivityToRegistry
                      ((TOUCHPAD_SENSITIVITY_LEVEL)uStack_80._0_4_);
          }
        }
      }
      break;
    case 0x1c:
      UpdateAllModifierKeyStates(this);
      (**(code **)(**(longlong **)&this->field_0x18 + 0x178))
                (*(longlong **)&this->field_0x18,uVar4 != 0);
      if ((UE::WindowsApplication::TouchpadSensitivity::bForceMaxTouchpadSensitivity != false) &&
         (EVar17 = UE::WindowsApplication::TouchpadSensitivity::GetForceMaxTouchpadSensitivityMode()
         , EVar17 == SetTouchpadParameters)) {
        if (5 < (byte)UE::WindowsApplication::TouchpadSensitivity::LogWindowsTouchpad._0_1_) {
          UE::Logging::Private::BasicLog<6>
                    (&::LOG_Static,
                     (FLogCategoryBase *)
                     &UE::WindowsApplication::TouchpadSensitivity::LogWindowsTouchpad);
        }
        if (uVar4 == 0) {
          UE::WindowsApplication::TouchpadSensitivity::RemoveForceMaxTouchpadSensitivity();
        }
        else {
          UE::WindowsApplication::TouchpadSensitivity::ApplyForceMaxTouchpadSensitivity();
        }
      }
      break;
    case 0x20:
      if ((this_01 == (FWindowsWindow *)0x0) &&
         (bVar35 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar35)) {
        pcVar6 = (code *)swi(3);
        iVar23 = (*pcVar6)();
        return iVar23;
      }
      lVar24 = (**(code **)(this_01->_padding_ + 0xe0))(this_01);
      if (((*(char *)(lVar24 + 0x18) == '\0') || (sVar14 != 0x200)) || (sVar31 == 1)) {
        cVar11 = (**(code **)(**(longlong **)&this->field_0x18 + 0x80))();
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
        return (uint)(cVar11 != '\0');
      }
      goto LAB_1423f487a;
    case 0x21:
      this->bForceActivateByMouse = (bool)(~(byte)hTouchInput & 1);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      return 0;
    case 0x50:
    case 0x51:
switchD_1423f352a_caseD_50:
      this_00 = (this->TextInputMethodSystem).Object;
      if (this_00 != (FWindowsTextInputMethodSystem *)0x0) {
        FWindowsTextInputMethodSystem::ProcessMessage(this_00,hWnd,uVar21,uVar4,(long64)hTouchInput)
        ;
      }
      if (uVar21 == 0x51) {
        (**(code **)(**(longlong **)&this->field_0x18 + 0x28))();
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
        return 0;
      }
LAB_1423f487a:
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      return 0;
    case 0x85:
      if ((this_01 != (FWindowsWindow *)0x0) &&
         (lVar24 = (**(code **)(this_01->_padding_ + 0xe0))(this_01),
         *(char *)(lVar24 + 0x18) == '\0')) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
        return 0;
      }
      break;
    case 0x86:
      if ((this_01 != (FWindowsWindow *)0x0) &&
         (lVar24 = (**(code **)(this_01->_padding_ + 0xe0))(this_01),
         *(char *)(lVar24 + 0x18) == '\0')) goto LAB_1423f37fa;
      break;
    case 0xa0:
switchD_1423f352a_caseD_a0:
      if (this->bUsingHighPrecisionMouseInput == false) {
        pFVar25 = ::FString::FString(&local_208,&UE::WindowsInput::KBMInputHardwareName);
        pIVar26 = IPlatformInputDeviceMapper::Get();
        piVar27 = (int *)(**(code **)(pIVar26->_padding_ + 0x58))(pIVar26);
        FInputDeviceScope::FInputDeviceScope
                  (&local_158,(IInputDevice *)0x0,UE::WindowsInput::InputClassName,*piVar27,pFVar25)
        ;
        bVar12 = (**(code **)(**(longlong **)&this->field_0x18 + 0x70))();
        uVar30 = (uint)bVar12;
        FInputDeviceScope::~FInputDeviceScope(&local_158);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      return (uint)(uVar30 == 0);
    }
    goto switchD_1423f352a_caseD_7;
  }
  if (uVar21 < 0x201) {
    if (uVar21 == 0x200) goto switchD_1423f352a_caseD_a0;
    uVar30 = (uint)((ulonglong)hTouchInput >> 0x10);
    switch(uVar21) {
    case 0x100:
    case 0x104:
      UVar19 = IntCastChecked<int,unsigned___int64>(uVar4);
      bVar12 = (byte)((ulonglong)hTouchInput >> 0x1e) & 1;
      if (UVar19 == 0x10) {
        UVar20 = MapVirtualKeyW(uVar30 & 0xff,3);
        if (UVar20 == 0xa0) {
          bVar12 = this->ModifierKeyState[0];
          this->ModifierKeyState[0] = true;
        }
        else {
          bVar12 = this->ModifierKeyState[1];
          this->ModifierKeyState[1] = true;
        }
      }
      else if (UVar19 == 0x11) {
        if (((ulonglong)hTouchInput >> 0x18 & 1) == 0) {
          bVar12 = this->ModifierKeyState[2];
          UVar20 = 0xa2;
          this->ModifierKeyState[2] = true;
        }
        else {
          bVar12 = this->ModifierKeyState[3];
          UVar20 = 0xa3;
          this->ModifierKeyState[3] = true;
        }
      }
      else if (UVar19 == 0x12) {
        if (((ulonglong)hTouchInput >> 0x18 & 1) == 0) {
          bVar12 = this->ModifierKeyState[4];
          UVar20 = 0xa4;
          this->ModifierKeyState[4] = true;
        }
        else {
          bVar12 = this->ModifierKeyState[5];
          UVar20 = 0xa5;
          this->ModifierKeyState[5] = true;
        }
      }
      else {
        UVar20 = UVar19;
        if (UVar19 == 0x14) {
          SVar15 = GetKeyState(0x14);
          this->ModifierKeyState[6] = (bool)((byte)SVar15 & 1);
        }
      }
      UVar19 = MapVirtualKeyW(UVar19,2);
      pFVar25 = ::FString::FString(&local_228,&UE::WindowsInput::KBMInputHardwareName);
      pIVar26 = IPlatformInputDeviceMapper::Get();
      piVar27 = (int *)(**(code **)(pIVar26->_padding_ + 0x58))(pIVar26);
      FInputDeviceScope::FInputDeviceScope
                (&local_278,(IInputDevice *)0x0,UE::WindowsInput::InputClassName,*piVar27,pFVar25);
      cVar11 = (**(code **)(**(longlong **)&this->field_0x18 + 0x18))
                         (*(longlong **)&this->field_0x18,UVar20,UVar19,bVar12);
      if ((cVar11 != '\0') || (uVar21 != 0x104)) {
        FInputDeviceScope::~FInputDeviceScope(&local_278);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
        return 0;
      }
      FInputDeviceScope::~FInputDeviceScope(&local_278);
      break;
    case 0x101:
    case 0x105:
      UVar19 = IntCastChecked<int,unsigned___int64>(uVar4);
      if (UVar19 == 0x10) {
        UVar20 = MapVirtualKeyW(uVar30 & 0xff,3);
        if (UVar20 == 0xa0) {
          this->ModifierKeyState[0] = false;
        }
        else {
          this->ModifierKeyState[1] = false;
        }
      }
      else if (UVar19 == 0x11) {
        if (((ulonglong)hTouchInput >> 0x18 & 1) == 0) {
          UVar20 = 0xa2;
          this->ModifierKeyState[2] = false;
        }
        else {
          UVar20 = 0xa3;
          this->ModifierKeyState[3] = false;
        }
      }
      else if (UVar19 == 0x12) {
        if (((ulonglong)hTouchInput >> 0x18 & 1) == 0) {
          UVar20 = 0xa4;
          this->ModifierKeyState[4] = false;
        }
        else {
          UVar20 = 0xa5;
          this->ModifierKeyState[5] = false;
        }
      }
      else {
        UVar20 = UVar19;
        if (UVar19 == 0x14) {
          SVar15 = GetKeyState(0x14);
          this->ModifierKeyState[6] = (bool)((byte)SVar15 & 1);
        }
      }
      UVar19 = MapVirtualKeyW(UVar19,2);
      pFVar25 = ::FString::FString(&local_218,&UE::WindowsInput::KBMInputHardwareName);
      pIVar26 = IPlatformInputDeviceMapper::Get();
      piVar27 = (int *)(**(code **)(pIVar26->_padding_ + 0x58))(pIVar26);
      FInputDeviceScope::FInputDeviceScope
                (&local_250,(IInputDevice *)0x0,UE::WindowsInput::InputClassName,*piVar27,pFVar25);
      cVar11 = (**(code **)(**(longlong **)&this->field_0x18 + 0x20))
                         (*(longlong **)&this->field_0x18,UVar20,UVar19,0);
      if ((cVar11 != '\0') || (uVar21 != 0x105)) {
        FInputDeviceScope::~FInputDeviceScope(&local_250);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
        return 0;
      }
      FInputDeviceScope::~FInputDeviceScope(&local_250);
      break;
    case 0x102:
      if ((uVar4 != (uVar4 & 0xffff)) &&
         (bVar35 = ::FDebug::CheckVerifyFailedImpl2
                             ("IntFitsIn<OutType>(In)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                              ,0xae,L"Loss of data caused by narrowing conversion, In = %llu"),
         bVar35)) {
        pcVar6 = (code *)swi(3);
        iVar23 = (*pcVar6)();
        return iVar23;
      }
      pFVar25 = ::FString::FString(&local_1b8,&UE::WindowsInput::KBMInputHardwareName);
      pIVar26 = IPlatformInputDeviceMapper::Get();
      piVar27 = (int *)(**(code **)(pIVar26->_padding_ + 0x58))(pIVar26);
      FInputDeviceScope::FInputDeviceScope
                (&local_180,(IInputDevice *)0x0,UE::WindowsInput::InputClassName,*piVar27,pFVar25);
      (**(code **)(**(longlong **)&this->field_0x18 + 0x10))
                (*(longlong **)&this->field_0x18,uVar4 & 0xffff,
                 (byte)((ulonglong)hTouchInput >> 0x1e) & 1);
      FInputDeviceScope::~FInputDeviceScope(&local_180);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      return 0;
    case 0x10d:
    case 0x10e:
    case 0x10f:
      goto switchD_1423f352a_caseD_50;
    }
    goto switchD_1423f352a_caseD_7;
  }
  if (0x31e < uVar21) goto switchD_1423f352a_caseD_7;
  if (uVar21 == 0x31e) {
    if ((this_01 == (FWindowsWindow *)0x0) &&
       (bVar35 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar35)) {
      pcVar6 = (code *)swi(3);
      iVar23 = (*pcVar6)();
      return iVar23;
    }
    (**(code **)(*(longlong *)this + 0xd0))(this);
    goto switchD_1423f352a_caseD_7;
  }
  switch(uVar21 - 0x201) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 10:
  case 0xb:
  case 0xc:
    local_3c0.x = (LONG)sVar31;
    local_3c0.y = (LONG)sVar14;
    ClientToScreen((HWND)hWnd,&local_3c0);
    bVar35 = false;
    dVar36 = (double)local_3c0.x;
    dVar37 = (double)local_3c0.y;
    uVar30 = (uint)(uVar4 >> 0x10);
    switch(uVar21 - 0x201) {
    case 1:
      bVar35 = true;
    case 0:
      break;
    case 2:
      bVar13 = true;
      goto LAB_1423f3fff;
    case 4:
      bVar35 = true;
    case 3:
      iVar23 = 2;
      break;
    case 5:
      bVar13 = true;
      iVar23 = 2;
      goto LAB_1423f3fff;
    case 7:
      bVar35 = true;
    case 6:
      iVar23 = 1;
      break;
    case 8:
      bVar13 = true;
      iVar23 = 1;
      goto LAB_1423f3fff;
    default:
      bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ApplicationCore\\Private\\Windows\\WindowsApplication.cpp"
                          ,0xd28,L"");
      iVar23 = 5;
      if (bVar13) {
        pcVar6 = (code *)swi(3);
        iVar23 = (*pcVar6)();
        return iVar23;
      }
      break;
    case 0xb:
      bVar35 = true;
    case 10:
      iVar23 = (~uVar30 & 1) + 3;
      break;
    case 0xc:
      bVar13 = true;
      iVar23 = (~uVar30 & 1) + 3;
      goto LAB_1423f3fff;
    }
    bVar13 = false;
LAB_1423f3fff:
    pFVar25 = ::FString::FString(&local_1f8,&UE::WindowsInput::KBMInputHardwareName);
    pIVar26 = IPlatformInputDeviceMapper::Get();
    piVar27 = (int *)(**(code **)(pIVar26->_padding_ + 0x58))(pIVar26);
    FInputDeviceScope::FInputDeviceScope
              (&local_130,(IInputDevice *)0x0,UE::WindowsInput::InputClassName,*piVar27,pFVar25);
    plVar28 = *(longlong **)&this->field_0x18;
    lVar24 = *plVar28;
    if (bVar35) {
      local_2c8 = dVar36;
      local_2c0 = dVar37;
      cVar11 = (**(code **)(lVar24 + 0x40))(plVar28,iVar23,&local_2c8);
      FInputDeviceScope::~FInputDeviceScope(&local_130);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      return (uint)(cVar11 == '\0');
    }
    if (!bVar13) {
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_2e8 = this_01;
      local_2e0 = pTVar3;
      local_2a8 = dVar36;
      local_2a0 = dVar37;
      (**(code **)(lVar24 + 0x30))(plVar28,&local_2e8,iVar23,&local_2a8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_2e0)
      ;
      FInputDeviceScope::~FInputDeviceScope(&local_130);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      return 0;
    }
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_2f8 = this_01;
    local_2f0 = pTVar3;
    local_2b8 = dVar36;
    local_2b0 = dVar37;
    (**(code **)(lVar24 + 0x50))(plVar28,&local_2f8,iVar23,&local_2b8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_2f0);
    FInputDeviceScope::~FInputDeviceScope(&local_130);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    return 0;
  case 9:
    pFVar25 = ::FString::FString(&local_1e8,&UE::WindowsInput::KBMInputHardwareName);
    pIVar26 = IPlatformInputDeviceMapper::Get();
    piVar27 = (int *)(**(code **)(pIVar26->_padding_ + 0x58))(pIVar26);
    FInputDeviceScope::FInputDeviceScope
              (&local_108,(IInputDevice *)0x0,UE::WindowsInput::InputClassName,*piVar27,pFVar25);
    local_298 = (double)(int)sVar31;
    local_290 = (double)(int)sVar14;
    cVar11 = (**(code **)(**(longlong **)&this->field_0x18 + 0x60))
                       (*(longlong **)&this->field_0x18,
                        (float)(int)(short)(uVar4 >> 0x10) * __real_3c088889,&local_298);
    FInputDeviceScope::~FInputDeviceScope(&local_108);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    return (uint)(cVar11 == '\0');
  case 0x13:
    if (this_01 != (FWindowsWindow *)0x0) {
      plVar28 = *(longlong **)&this->field_0x18;
      lVar24 = *plVar28;
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
        UNLOCK();
        LOCK();
        pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_340 = this_01;
      local_338 = pTVar3;
      (**(code **)(lVar24 + 0x140))(plVar28,&local_340);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_338)
      ;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    }
    break;
  case 0x30:
    if (this_01 != (FWindowsWindow *)0x0) {
      plVar28 = *(longlong **)&this->field_0x18;
      lVar24 = *plVar28;
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
        UNLOCK();
        LOCK();
        pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_330 = this_01;
      local_328 = pTVar3;
      (**(code **)(lVar24 + 0x148))(plVar28,&local_330);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_328)
      ;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    }
    break;
  case 0x31:
    if (this_01 != (FWindowsWindow *)0x0) {
      plVar28 = *(longlong **)&this->field_0x18;
      lVar24 = *plVar28;
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
        UNLOCK();
        LOCK();
        pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_3a0 = this_01;
      local_398 = pTVar3;
      (**(code **)(lVar24 + 0x150))(plVar28,&local_3a0);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_398)
      ;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    }
    break;
  case 0x3f:
    pFVar33 = (FDeferredWindowsMessage *)(uVar4 & 0xffff);
    if ((UINT)pFVar33 != 0) {
      auVar7._8_8_ = 0;
      auVar7._0_8_ = pFVar33;
      _Size = SUB168(ZEXT816(0x30) * auVar7,0);
      if (SUB168(ZEXT816(0x30) * auVar7,8) != 0) {
        _Size = 0xffffffffffffffff;
      }
      local_3b8 = pFVar33;
      local_3d8 = operator_new__(_Size);
      if (local_3d8 == (PTOUCHINPUT)0x0) {
        local_3d8 = (PTOUCHINPUT)0x0;
      }
      else {
        memset(local_3d8,0,_Size);
      }
      BVar18 = GetTouchInputInfo(hTouchInput,(UINT)pFVar33,local_3d8,0x30);
      if (BVar18 != 0) {
        pFVar25 = ::FString::FString(&local_1d8,&UE::WindowsInput::TouchInputHardwareName);
        pIVar26 = IPlatformInputDeviceMapper::Get();
        piVar27 = (int *)(**(code **)(pIVar26->_padding_ + 0x58))(pIVar26);
        FInputDeviceScope::FInputDeviceScope
                  (&local_e0,(IInputDevice *)0x0,UE::WindowsInput::InputClassName,*piVar27,pFVar25);
        uVar10 = __real_3f800000;
        fVar9 = __real_3c23d70a;
        ptVar32 = local_3d8;
        do {
          local_98 = ptVar32->dwExtraInfo;
          uStack_90._0_4_ = ptVar32->cxContact;
          uStack_90._4_4_ = ptVar32->cyContact;
          uVar2 = ptVar32->x;
          uVar5 = ptVar32->y;
          auVar1._0_4_ = ptVar32->dwID;
          auVar1._4_4_ = ptVar32->dwFlags;
          auVar1._8_4_ = ptVar32->dwMask;
          auVar1._12_4_ = ptVar32->dwTime;
          local_3d0 = (double)((float)(int)uVar2 * fVar9);
          dStack_3c8 = (double)((float)(int)uVar5 * fVar9);
          if ((auVar1._0_8_ >> 0x20 & 2) == 0) {
            if ((auVar1._4_4_ & 1) == 0) {
              if ((auVar1._4_4_ & 4) != 0) {
                uVar21 = GetTouchIndexForID(this,auVar1._0_4_);
                if (-1 < (int)uVar21) {
                  uVar22 = 0;
                  if ((int)uVar21 < (this->TouchInfoArray).ArrayNum) {
                    uVar22 = ~uVar21 >> 0x1f;
                  }
                  if ((uVar22 == 0) &&
                     (bVar35 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar35)) {
                    pcVar6 = (code *)swi(3);
                    iVar23 = (*pcVar6)();
                    return iVar23;
                  }
                  pFVar29 = (this->TouchInfoArray).AllocatorInstance.Data +
                            (longlong)(int)uVar21 * 0x20 + 0x18;
                  if ((local_280 != pFVar29) && (pFVar29[4] != (FScriptContainerElement)0x0)) {
                    pFVar29[4] = (FScriptContainerElement)0x0;
                  }
                  if (5 < (byte)LogWindowsDesktop._0_1_) {
                    UE::Logging::Private::BasicLog<6>
                              (&::LOG_Static,(FLogCategoryBase *)&LogWindowsDesktop);
                  }
                  (**(code **)(**(longlong **)&this->field_0x18 + 0xe0))
                            (*(longlong **)&this->field_0x18,&local_3d0,uVar21,0);
                }
              }
            }
            else {
              uVar21 = GetTouchIndexForID(this,auVar1._0_4_);
              lVar24 = (longlong)(int)uVar21;
              if (-1 < (int)uVar21) {
                if (5 < (byte)LogWindowsDesktop._0_1_) {
                  UE::Logging::Private::BasicLog<6>
                            (&::LOG_Static,(FLogCategoryBase *)&LogWindowsDesktop);
                }
                if (bEnableFirstTouchEvent != false) {
                  uVar22 = uVar30;
                  if ((int)uVar21 < (this->TouchInfoArray).ArrayNum) {
                    uVar22 = ~uVar21 >> 0x1f;
                  }
                  if ((uVar22 == 0) &&
                     (bVar35 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar35)) {
                    pcVar6 = (code *)swi(3);
                    iVar23 = (*pcVar6)();
                    return iVar23;
                  }
                  lVar34 = lVar24 * 0x20;
                  if ((this->TouchInfoArray).AllocatorInstance.Data[lVar34] ==
                      (FScriptContainerElement)0x0) {
                    uVar22 = uVar30;
                    if ((int)uVar21 < (this->TouchInfoArray).ArrayNum) {
                      uVar22 = ~uVar21 >> 0x1f;
                    }
                    if ((uVar22 == 0) &&
                       (bVar35 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar35)) {
                      pcVar6 = (code *)swi(3);
                      iVar23 = (*pcVar6)();
                      return iVar23;
                    }
                    pFVar29 = (this->TouchInfoArray).AllocatorInstance.Data;
                    if ((local_3d0 != *(double *)(pFVar29 + lVar34 + 8)) ||
                       (dStack_3c8 != *(double *)(pFVar29 + lVar34 + 0x10))) {
                      uVar22 = uVar30;
                      if ((int)uVar21 < (this->TouchInfoArray).ArrayNum) {
                        uVar22 = ~uVar21 >> 0x1f;
                      }
                      if ((uVar22 == 0) &&
                         (bVar35 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar35)) {
                        pcVar6 = (code *)swi(3);
                        iVar23 = (*pcVar6)();
                        return iVar23;
                      }
                      (this->TouchInfoArray).AllocatorInstance.Data[lVar24 * 0x20] =
                           (FScriptContainerElement)0x1;
                      (**(code **)(**(longlong **)&this->field_0x18 + 0x100))
                                (*(longlong **)&this->field_0x18,&local_3d0);
                    }
                  }
                }
                dVar37 = dStack_3c8;
                dVar36 = local_3d0;
                uVar22 = uVar30;
                if ((int)uVar21 < (this->TouchInfoArray).ArrayNum) {
                  uVar22 = ~uVar21 >> 0x1f;
                }
                if ((uVar22 == 0) &&
                   (bVar35 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar35)) {
                  pcVar6 = (code *)swi(3);
                  iVar23 = (*pcVar6)();
                  return iVar23;
                }
                pFVar29 = (this->TouchInfoArray).AllocatorInstance.Data + lVar24 * 0x20 + 8;
                *(double *)pFVar29 = dVar36;
                *(double *)(pFVar29 + 8) = dVar37;
                (**(code **)(**(longlong **)&this->field_0x18 + 0xd0))
                          (*(longlong **)&this->field_0x18,&local_3d0);
              }
            }
          }
          else {
            uVar21 = GetTouchIndexForID(this,auVar1._0_4_);
            if (uVar21 == 0xffffffff) {
              uVar21 = GetFirstFreeTouchIndex(this);
              if (((int)uVar21 < 0) &&
                 (bVar35 = ::FDebug::CheckVerifyFailedImpl2
                                     ("TouchIndex >= 0",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ApplicationCore\\Private\\Windows\\WindowsApplication.cpp"
                                      ,0xd96,L""), bVar35)) {
                pcVar6 = (code *)swi(3);
                iVar23 = (*pcVar6)();
                return iVar23;
              }
              uVar22 = uVar30;
              if ((int)uVar21 < (this->TouchInfoArray).ArrayNum) {
                uVar22 = ~uVar21 >> 0x1f;
              }
              if ((uVar22 == 0) &&
                 (bVar35 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar35)) {
                pcVar6 = (code *)swi(3);
                iVar23 = (*pcVar6)();
                return iVar23;
              }
              lVar24 = (longlong)(int)uVar21 * 0x20;
              pFVar29 = (this->TouchInfoArray).AllocatorInstance.Data + lVar24 + 0x18;
              if (local_288 != pFVar29) {
                *(undefined4 *)pFVar29 = auVar1._0_4_;
                pFVar29[4] = (FScriptContainerElement)0x1;
              }
              uVar22 = uVar30;
              if ((int)uVar21 < (this->TouchInfoArray).ArrayNum) {
                uVar22 = ~uVar21 >> 0x1f;
              }
              if ((uVar22 == 0) &&
                 (bVar35 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar35)) {
                pcVar6 = (code *)swi(3);
                iVar23 = (*pcVar6)();
                return iVar23;
              }
              dVar37 = dStack_3c8;
              dVar36 = local_3d0;
              (this->TouchInfoArray).AllocatorInstance.Data[lVar24] = (FScriptContainerElement)0x0;
              uVar22 = uVar30;
              if ((int)uVar21 < (this->TouchInfoArray).ArrayNum) {
                uVar22 = ~uVar21 >> 0x1f;
              }
              if ((uVar22 == 0) &&
                 (bVar35 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar35)) {
                pcVar6 = (code *)swi(3);
                iVar23 = (*pcVar6)();
                return iVar23;
              }
              pFVar29 = (this->TouchInfoArray).AllocatorInstance.Data +
                        (longlong)(int)uVar21 * 0x20 + 8;
              *(double *)pFVar29 = dVar36;
              *(double *)(pFVar29 + 8) = dVar37;
              if (5 < (byte)LogWindowsDesktop._0_1_) {
                UE::Logging::Private::BasicLog<6>
                          (&::LOG_Static,(FLogCategoryBase *)&LogWindowsDesktop);
              }
              plVar28 = *(longlong **)&this->field_0x18;
              lVar24 = *plVar28;
              if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
                UNLOCK();
              }
              local_2d8 = this_01;
              local_2d0 = pTVar3;
              (**(code **)(lVar24 + 0xc0))(plVar28,&local_2d8,&local_3d0,uVar10);
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_2d0);
            }
          }
          ptVar32 = ptVar32 + 1;
          local_3b8 = (FDeferredWindowsMessage *)&local_3b8[-1].field_0x3f;
        } while (local_3b8 != (FDeferredWindowsMessage *)0x0);
        CloseTouchInputHandle(local_300);
        FInputDeviceScope::~FInputDeviceScope(&local_e0);
        operator_delete__(local_3d8);
        goto LAB_1423f487a;
      }
      operator_delete__(local_3d8);
    }
    break;
  case 0x80:
  case 0x81:
  case 0x85:
  case 0x87:
    goto switchD_1423f352a_caseD_50;
  case 0xdf:
    if (this_01 != (FWindowsWindow *)0x0) {
      plVar28 = *(longlong **)&this->field_0x18;
      lVar24 = *plVar28;
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
        UNLOCK();
        LOCK();
        pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_390 = this_01;
      local_388 = pTVar3;
      (**(code **)(lVar24 + 0x160))(plVar28,&local_390);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_388)
      ;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      cVar11 = (**(code **)(this_01->_padding_ + 0x108))(this_01);
      if (cVar11 == '\0') {
        (**(code **)(this_01->_padding_ + 0x100))
                  (this_01,(float)((uint)uVar4 & 0xffff) *
                           `public:_static_bool___cdecl_UE::Core::Private::TIsType<TValueOrError<TUniquePtr<IFileHandle,TDefaultDelete<IFileHandle>_>,FFileSystemError>::FWrapErrorType,TUniquePtr<IFileHandle,TDefaultDelete<IFileHandle>_>,TValueOrError<class_TUniquePtr<class_IFileHandle,struct_TDefaultDelete<class_IFileHandle>_>,class_FFileSystemError>::FWrapErrorType,TValueOrError<class_TUniquePtr<class_IFileHandle,struct_TDefaultDelete<class_IFileHandle>_>,class_FFileSystemError>::FEmptyType>::IsSame(unsigned___int64)'
                           ::__l2::bIsSameType._4_4_);
        SetWindowPos((HWND)hWnd,(HWND)0x0,hTouchInput->unused,hTouchInput[1].unused,
                     hTouchInput[2].unused - hTouchInput->unused,
                     hTouchInput[3].unused - hTouchInput[1].unused,0x14);
        plVar28 = *(longlong **)&this->field_0x18;
        lVar24 = *plVar28;
        if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
          UNLOCK();
          LOCK();
          pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_380 = this_01;
        local_378 = pTVar3;
        (**(code **)(lVar24 + 0x158))(plVar28,&local_380);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_378);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      }
    }
  }
switchD_1423f352a_caseD_7:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return 0;
}

// ProcessMessage @ 1423f4d40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
FWindowsApplication::ProcessMessage
          (FWindowsApplication *this,HWND__ *param_1,uint param_2,ulong64 param_3,long64 param_4)

{
  float fVar1;
  FName FVar2;
  TReferenceControllerBase<1> *pTVar3;
  longlong *plVar4;
  FWindowsUIAManager *this_00;
  code *pcVar5;
  double dVar6;
  IRawElementProviderSimple IVar7;
  FSharedReferencer<1> FVar8;
  ForAnyElementType FVar9;
  bool bVar10;
  char cVar11;
  char cVar12;
  ushort uVar13;
  int iVar14;
  HRESULT HVar15;
  BOOL BVar16;
  uint uVar17;
  DWORD dwStyle;
  DWORD dwExStyle;
  UINT UVar18;
  uint uVar19;
  FName *pFVar20;
  FThreadSafeStaticStat<FStat_STAT_CustomMessageHandler_ProcessMessage> FVar21;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  int *piVar22;
  HANDLE hTimer;
  TSharedRef<FWindowsWindow,1> *pTVar23;
  longlong lVar24;
  IRawElementProviderSimple *pData;
  FWindowsUIAWindowProvider *pFVar25;
  LRESULT LVar26;
  ulonglong uVar27;
  FString *pFVar28;
  TTuple<unsigned_int,FString> *pTVar29;
  FWindowsWindow *pFVar30;
  float *pfVar31;
  float *pfVar32;
  ulonglong uVar33;
  FScriptContainerElement *pFVar34;
  FStaticBasicLogRecord *pFVar35;
  FScriptContainerElement *pFVar36;
  FName FVar37;
  undefined1 *puVar38;
  undefined1 *puVar39;
  undefined1 *puVar40;
  undefined1 *puVar41;
  byte bVar42;
  FNameEntryId FVar43;
  uint uVar44;
  IRawElementProviderSimple *pIVar45;
  uint *puVar46;
  longlong lVar47;
  int iVar48;
  int iVar49;
  IRawElementProviderSimple *pIVar50;
  IRawElementProviderSimple *pIVar51;
  float fVar52;
  undefined1 auStackY_5b8 [32];
  byte local_558 [8];
  IRawElementProviderSimple local_550;
  char local_548;
  UINT local_544;
  char local_540;
  FWindowsWindow *local_538;
  TReferenceControllerBase<1> *pTStack_530;
  undefined1 local_528 [16];
  TSharedPtr<FWindowsWindow,1> local_518;
  uint local_508;
  uint local_504;
  undefined1 local_500;
  undefined1 local_4ff;
  undefined1 local_4fe [6];
  FScriptContainerElement *local_4f8;
  uint local_4f0;
  int local_4ec;
  uint local_4e8;
  RawMouseInputResult local_4e0;
  FColor_u_0 local_4d0 [2];
  FName local_4c8;
  uint local_4c0;
  uint uStack_4bc;
  FScriptContainerElement *local_4b8;
  FString local_4b0;
  TOptional<float> local_4a0;
  TOptional<float> local_498 [3];
  FName local_480;
  float local_470;
  char local_46c;
  float local_468;
  char local_464;
  float local_460;
  char local_45c;
  float local_458;
  char local_454;
  LARGE_INTEGER local_450;
  LARGE_INTEGER local_448;
  TArray<TSharedRef<FWindowsWindow,1>,TSizedDefaultAllocator<32>_> *local_440;
  FWindowsApplication *local_438;
  LARGE_INTEGER local_430;
  FStatMessage local_428;
  FWindowsWindow *local_418;
  TReferenceControllerBase<1> *local_410;
  FWindowsWindow *local_408;
  TReferenceControllerBase<1> *pTStack_400;
  LARGE_INTEGER local_3f8;
  FScriptContainerElement *local_3f0;
  FWindowsWindow *local_3e8;
  TReferenceControllerBase<1> *pTStack_3e0;
  FWindowsWindow *local_3d8;
  TReferenceControllerBase<1> *pTStack_3d0;
  FWindowsWindow *local_3c8;
  TReferenceControllerBase<1> *pTStack_3c0;
  FWindowsWindow *local_3b8;
  TReferenceControllerBase<1> *pTStack_3b0;
  FWindowsWindow *local_3a8;
  TReferenceControllerBase<1> *pTStack_3a0;
  FWindowsWindow *local_398;
  TReferenceControllerBase<1> *pTStack_390;
  FWindowsWindow *local_388;
  TReferenceControllerBase<1> *pTStack_380;
  FWindowsWindow *local_378;
  TReferenceControllerBase<1> *pTStack_370;
  FWindowsWindow *local_368;
  TReferenceControllerBase<1> *pTStack_360;
  FWindowsWindow *local_358;
  TReferenceControllerBase<1> *pTStack_350;
  FWindowsWindow *local_348;
  TReferenceControllerBase<1> *pTStack_340;
  FWindowsWindow *local_338;
  TReferenceControllerBase<1> *pTStack_330;
  FDestructionSentinel local_328;
  FName local_310;
  TSharedRef<FWindowsWindow,1> local_308;
  TSharedRef<FWindowsWindow,1> local_2f8;
  FName local_2e8 [2];
  FDisplayMetrics local_2d8;
  tagRECT local_258;
  tagRECT local_248;
  tagRECT local_238;
  tagWINDOWINFO local_228;
  tagWINDOWINFO local_1e8;
  DWM_TIMING_INFO local_1a8;
  ulonglong local_78;
  
  puVar41 = auStackY_5b8;
  puVar38 = auStackY_5b8;
  puVar40 = auStackY_5b8;
  local_78 = __security_cookie.value ^ (ulonglong)local_558;
  local_440 = &this->Windows;
  uVar27 = (ulonglong)param_2;
  pData = (IRawElementProviderSimple *)0x0;
  uVar17 = 0;
  pIVar51 = (IRawElementProviderSimple *)0x0;
  local_550.lpVtbl = (IRawElementProviderSimpleVtbl *)param_1;
  local_544 = param_2;
  local_438 = this;
  FindWindowByHWND(&local_518,local_440,param_1);
  puVar39 = auStackY_5b8;
  if (((this->Windows).ArrayNum != 0) &&
     (puVar39 = auStackY_5b8, local_518.Object != (FWindowsWindow *)0x0)) {
    if ((local_518.Object == (FWindowsWindow *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x408,L""), bVar10)) {
      pcVar5 = (code *)swi(3);
      iVar14 = (*pcVar5)();
      return iVar14;
    }
    FVar8.ReferenceController = local_518.SharedReferenceCount.ReferenceController;
    local_538 = local_518.Object;
    pTStack_530 = local_518.SharedReferenceCount.ReferenceController;
    if (local_518.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_518.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_518.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((local_518.Object == (FWindowsWindow *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x25d,L""), bVar10)) {
      pcVar5 = (code *)swi(3);
      iVar14 = (*pcVar5)();
      return iVar14;
    }
    lVar24 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if ((*(int *)(lVar24 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      `FWindowsApplication::ProcessMessage'::__l5::<lambda_1>::operator()
                (&local_500,&WindowsMessageStrings);
      atexit(`FWindowsApplication::ProcessMessage'::__l5::
             _dynamic_atexit_destructor_for__WindowsMessageStrings__);
      _Init_thread_footer(&::_TSS0);
    }
    if ((*(int *)(lVar24 + 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
      `FWindowsApplication::ProcessMessage'::__l5::<lambda_2>::operator()(&local_4ff,&IMNStrings);
      atexit(`FWindowsApplication::ProcessMessage'::__l5::
             _dynamic_atexit_destructor_for__IMNStrings__);
      _Init_thread_footer(&::_TSS1);
    }
    if ((*(int *)(lVar24 + 0x9d4c) < ::_TSS2) && (_Init_thread_header(&::_TSS2), ::_TSS2 == -1)) {
      `FWindowsApplication::ProcessMessage'::__l5::<lambda_3>::operator()(local_4fe,&IMRStrings);
      atexit(`FWindowsApplication::ProcessMessage'::__l5::
             _dynamic_atexit_destructor_for__IMRStrings__);
      _Init_thread_footer(&::_TSS2);
    }
    local_504 = (this->MessageHandlers).ArrayNum;
    uVar33 = (ulonglong)(int)local_504;
    pFVar36 = (this->MessageHandlers).AllocatorInstance.Data;
    local_548 = '\0';
    local_4e8 = 0;
    local_3f0 = pFVar36 + uVar33 * 8;
    local_4ec = 5;
LAB_1423f4ed1:
    do {
      pFVar34 = local_3f0;
      local_4b8 = pFVar36;
      if ((this->MessageHandlers).ArrayNum != (int)uVar33) {
        local_528[0] = 0;
        `TCheckedPointerIterator<IWindowsMessageHandler_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_528);
      }
      if (pFVar36 == pFVar34) goto LAB_1423f51a6;
      local_4f8 = *(FScriptContainerElement **)pFVar36;
      if (bEnableWindowMessageProfilerScopes == false) {
        FVar21 = (FThreadSafeStaticStat<FStat_STAT_CustomMessageHandler_ProcessMessage>)
                 &TStatId::TStatId_NAME_None;
      }
      else {
        FVar21 = StatPtr_STAT_CustomMessageHandler_ProcessMessage;
        if (StatPtr_STAT_CustomMessageHandler_ProcessMessage ==
            (FThreadSafeStaticStat<FStat_STAT_CustomMessageHandler_ProcessMessage>)0x0) {
          pFVar20 = ::FName::FName(&local_310,"STAT_CustomMessageHandler_ProcessMessage");
          FVar21 = (FThreadSafeStaticStat<FStat_STAT_CustomMessageHandler_ProcessMessage>)
                   FThreadSafeStaticStatBase::DoSetup
                             ((FThreadSafeStaticStatBase *)
                              &StatPtr_STAT_CustomMessageHandler_ProcessMessage,*pFVar20,
                              L"WindowsApplication Custom Message Handler","STATGROUP_Quick",
                              "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid)
          ;
        }
      }
      FVar2 = *(FName *)FVar21;
      local_480.ComparisonIndex.Value = 0;
      local_480.Number = 0;
      local_558[0] = 0;
      FVar43 = FVar2.ComparisonIndex.Value;
      uVar19 = FVar2.Number;
      if ((FVar43.Value != 0) || (FVar37 = local_480, bVar42 = local_558[0], uVar19 != 0)) {
        if (GCycleStatsShouldEmitNamedEvents != 0) {
          local_4d0[0].Bits = 0;
          FGenericPlatformMisc::BeginNamedEvent
                    ((FColor *)&local_4d0[0]._s_0,(char *)*(FName *)((longlong)FVar21 + 0x10));
          local_558[0] = 1;
          if (-1 < CpuChannel->Enabled) {
            local_4c8.ComparisonIndex.Value = FVar43.Value;
            local_4c8.Number = uVar19;
            FCpuProfilerTrace::OutputBeginDynamicEventWithId
                      (&local_4c8,(wchar_t *)*(FName *)((longlong)FVar21 + 8),
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ApplicationCore\\Private\\Windows\\WindowsApplication.cpp"
                       ,0x89c);
            local_558[0] = 3;
          }
        }
        FVar37 = local_480;
        bVar42 = local_558[0];
        if (FThreadStats::bPrimaryEnable != false) {
          local_4c0 = FVar43.Value;
          uStack_4bc = uVar19;
          local_480 = FVar2;
          FThreadStats::AddMessage(FVar2,CycleScopeStart);
          FVar37 = FVar2;
          bVar42 = local_558[0] | 4;
        }
      }
      local_4f0 = 0;
      cVar11 = (*(code *)**(undefined8 **)local_4f8)();
      if ((cVar11 != '\0') && (local_548 == '\0')) {
        local_4e8 = local_4f0;
        local_548 = '\x01';
      }
      if ((bVar42 & 1) != 0) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if ((bVar42 & 2) != 0) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if (((((bVar42 & 4) != 0) && (FVar37 != (FName)0x0)) &&
          (FThreadStats::bPrimaryDisableForever == false)) && (FThreadStats::TlsSlot != 0xffffffff))
      {
        this_01 = TlsGetValue(FThreadStats::TlsSlot);
        if (this_01 == (FThreadStats *)0x0) {
          this_02 = FThreadStatsPool::Get();
          this_01 = FThreadStatsPool::GetFromPool(this_02);
        }
        if (this_01->bWaitForExplicitFlush < this_01->ScopeCount) {
          local_428.NameAndInfo.Index = FVar37.ComparisonIndex.Value;
          local_428.NameAndInfo.Number = FVar37.Number & 0xffff6fff | 0x6000;
          QueryPerformanceCounter(&local_3f8);
          local_428.StatData.Pad[4] = '\0';
          local_428.StatData.Pad[5] = '\0';
          local_428.StatData.Pad[6] = '\0';
          local_428.StatData.Pad[7] = '\0';
          local_428.StatData.Pad[0] = local_3f8.s.LowPart._0_1_;
          local_428.StatData.Pad[1] = local_3f8.s.LowPart._1_1_;
          local_428.StatData.Pad[2] = local_3f8.s.LowPart._2_1_;
          local_428.StatData.Pad[3] = local_3f8.s.LowPart._3_1_;
          FThreadStats::AddStatMessage(this_01,&local_428);
          piVar22 = &this_01->ScopeCount;
          *piVar22 = *piVar22 + -1;
          if (*piVar22 == 0) {
            FThreadStats::Flush(this_01,false,false);
            uVar33 = (ulonglong)local_504;
            pFVar36 = local_4b8 + 8;
            goto LAB_1423f4ed1;
          }
          if (FThreadStats::bIsRawStatsActive != false) {
            FThreadStats::FlushRawStats(this_01,false,false);
          }
        }
      }
      uVar33 = (ulonglong)local_504;
      pFVar36 = local_4b8 + 8;
    } while( true );
  }
  goto LAB_1423f5e20;
switchD_1423f5287_caseD_6:
LAB_1423f6aaf:
  DeferMessage(this,&local_518,param_1,param_2,param_3,param_4,0,0,0);
  puVar38 = auStackY_5b8;
  goto LAB_1423f5e00;
LAB_1423f51a6:
  if (((bPreventDuplicateMouseEventsForTouch != 0) &&
      (bVar10 = IsMouseInputMessage(param_2), bVar10)) &&
     (uVar33 = GetMessageExtraInfo(), (uVar33 & 0xff515700) == 0xff515700)) goto LAB_1423f6c10;
  local_4f8 = (FScriptContainerElement *)0x0;
  if (bEnableWindowMessageProfilerScopes == false) {
LAB_1423f5249:
    cVar11 = '\0';
    local_540 = '\0';
  }
  else {
    ::FString::PrintfImpl(&local_4b0,L"Window Message %u");
    FVar9.Data = local_4b0.Data.AllocatorInstance.Data;
    iVar14 = local_4b0.Data.ArrayNum;
    local_4f8 = local_4b0.Data.AllocatorInstance.Data;
    local_4b0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_4b0.Data.ArrayNum = 0;
    local_4b0.Data.ArrayMax = 0;
    if (((iVar14 == 0) || (iVar14 < 2)) || (CpuChannel->Enabled < 0)) goto LAB_1423f5249;
    cVar11 = '\x01';
    local_540 = '\x01';
    FCpuProfilerTrace::OutputBeginDynamicEvent
              ((wchar_t *)FVar9.Data,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ApplicationCore\\Private\\Windows\\WindowsApplication.cpp"
               ,0x8b5);
  }
  param_1 = (HWND__ *)local_550.lpVtbl;
  uVar19 = (uint)param_3;
  uVar44 = 0;
  uVar13 = (ushort)((ulonglong)param_4 >> 0x10);
  if (0xff < param_2) {
    if (param_2 < 0x201) {
      if (param_2 != 0x200) {
        switch(param_2) {
        case 0x100:
        case 0x101:
        case 0x105:
          goto switchD_1423f5287_caseD_a0;
        case 0x102:
          goto switchD_1423f6276_caseD_102;
        default:
          goto switchD_1423f5287_caseD_4;
        case 0x104:
          if (param_3 == 0x73) {
            puVar38 = auStackY_5b8;
            if (4 < (byte)LogWindowsDesktop._0_1_) {
              UE::Logging::Private::BasicLog<5>
                        (&::LOG_Static,(FLogCategoryBase *)&LogWindowsDesktop);
              puVar38 = auStackY_5b8;
              param_1 = (HWND__ *)local_550.lpVtbl;
            }
          }
          else if ((this->bConsumeAltSpace != false) || (puVar38 = auStackY_5b8, param_3 != 0x20))
          goto switchD_1423f5287_caseD_6;
          break;
        case 0x106:
          puVar41 = auStackY_5b8;
          if ((this->bConsumeAltSpace != false) ||
             (puVar41 = auStackY_5b8, (uVar13 >> 0xd & 1) == 0)) goto LAB_1423f66d3;
          puVar38 = auStackY_5b8;
          if (param_3 != 0x20) {
            puVar41 = auStackY_5b8;
            pData = (IRawElementProviderSimple *)0x0;
            goto switchD_1423f5287_caseD_1;
          }
          break;
        case 0x10d:
        case 0x10e:
        case 0x10f:
          goto switchD_1423f5287_caseD_50;
        case 0x112:
          uVar19 = uVar19 & 0xfff0;
          if (uVar19 == 0xf030) {
            plVar4 = *(longlong **)&this->field_0x18;
            local_348 = local_538;
            pTStack_340 = pTStack_530;
            pcVar5 = *(code **)(*plVar4 + 0x1c8);
            if (pTStack_530 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTStack_530->SharedReferenceCount =
                   (atomic<int>)((int)pTStack_530->SharedReferenceCount + 1);
              UNLOCK();
            }
            cVar12 = (*pcVar5)(plVar4,&local_348,2);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTStack_340);
            puVar38 = auStackY_5b8;
            param_1 = (HWND__ *)local_550.lpVtbl;
            param_2 = local_544;
            if (cVar12 != '\0') break;
            puVar41 = auStackY_5b8;
            pData = (IRawElementProviderSimple *)&DAT_00000001;
          }
          else if (uVar19 == 0xf060) {
            if ((GIsSlowTask == false) && (GSlateLoadingThreadId == 0)) {
              DeferMessage(this,&local_518,(HWND__ *)local_550.lpVtbl,0x10,0,0,0,0,0);
            }
            puVar41 = auStackY_5b8;
            pData = (IRawElementProviderSimple *)&DAT_00000001;
          }
          else if (uVar19 == 0xf120) {
            BVar16 = IsIconic((HWND)local_550.lpVtbl);
            if (BVar16 == 0) {
              plVar4 = *(longlong **)&this->field_0x18;
              local_358 = local_538;
              pTStack_350 = pTStack_530;
              pcVar5 = *(code **)(*plVar4 + 0x1c8);
              if (pTStack_530 != (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                pTStack_530->SharedReferenceCount =
                     (atomic<int>)((int)pTStack_530->SharedReferenceCount + 1);
                UNLOCK();
              }
              cVar12 = (*pcVar5)(plVar4,&local_358,3);
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (pTStack_350);
              puVar38 = auStackY_5b8;
              param_2 = local_544;
              if (cVar12 != '\0') break;
              puVar41 = auStackY_5b8;
              pData = (IRawElementProviderSimple *)&DAT_00000001;
            }
            else {
              ShowWindow((HWND)param_1,9);
              puVar41 = auStackY_5b8;
              pData = pIVar51;
            }
          }
          else {
            plVar4 = *(longlong **)&this->field_0x18;
            local_408 = local_538;
            pTStack_400 = pTStack_530;
            pcVar5 = *(code **)(*plVar4 + 8);
            if (pTStack_530 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTStack_530->SharedReferenceCount =
                   (atomic<int>)((int)pTStack_530->SharedReferenceCount + 1);
              UNLOCK();
            }
            cVar12 = (*pcVar5)(plVar4,&local_408);
            if ((cVar12 != '\0') && (bVar10 = IsInputMessage(param_2), bVar10)) {
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (pTStack_400);
              puVar38 = auStackY_5b8;
              param_1 = (HWND__ *)local_550.lpVtbl;
              break;
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTStack_400);
            puVar41 = auStackY_5b8;
            pData = pIVar51;
          }
          goto switchD_1423f5287_caseD_1;
        }
        goto LAB_1423f5e00;
      }
switchD_1423f5287_caseD_a0:
      goto LAB_1423f66a8;
    }
    if (0x31d < param_2) {
      if (param_2 == 0x31e) goto switchD_1423f5287_caseD_6;
      goto switchD_1423f5287_caseD_4;
    }
    if (param_2 == 0x31d) {
      TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                ((TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)
                 &this->field_0x98);
      puVar38 = auStackY_5b8;
      param_1 = (HWND__ *)local_550.lpVtbl;
      goto LAB_1423f5e00;
    }
    switch(param_2) {
    case 0x201:
    case 0x202:
    case 0x203:
    case 0x204:
    case 0x205:
    case 0x206:
    case 0x207:
    case 0x208:
    case 0x209:
    case 0x20a:
    case 0x20b:
    case 0x20c:
    case 0x20d:
    case 0x240:
      param_2 = local_544;
      goto switchD_1423f5287_caseD_a0;
    case 0x20e:
    case 0x20f:
    case 0x210:
    case 0x211:
    case 0x212:
    case 0x213:
    case 0x216:
    case 0x217:
    case 0x218:
    case 0x21a:
    case 0x21b:
    case 0x21c:
    case 0x21d:
    case 0x21e:
    case 0x21f:
    case 0x220:
    case 0x221:
    case 0x222:
    case 0x223:
    case 0x224:
    case 0x225:
    case 0x226:
    case 0x227:
    case 0x228:
    case 0x229:
    case 0x22a:
    case 0x22b:
    case 0x22c:
    case 0x22d:
    case 0x22e:
    case 0x22f:
    case 0x230:
    case 0x233:
    case 0x234:
    case 0x235:
    case 0x236:
    case 0x237:
    case 0x238:
    case 0x239:
    case 0x23a:
    case 0x23b:
    case 0x23c:
    case 0x23d:
    case 0x23e:
    case 0x23f:
    case 0x241:
    case 0x242:
    case 0x243:
    case 0x244:
    case 0x245:
    case 0x246:
    case 0x247:
    case 0x248:
    case 0x249:
    case 0x24a:
    case 0x24b:
    case 0x24c:
    case 0x24d:
    case 0x24e:
    case 0x24f:
    case 0x250:
    case 0x251:
    case 0x252:
    case 0x253:
    case 0x254:
    case 0x255:
    case 0x256:
    case 599:
    case 600:
    case 0x259:
    case 0x25a:
    case 0x25b:
    case 0x25c:
    case 0x25d:
    case 0x25e:
    case 0x25f:
    case 0x260:
    case 0x261:
    case 0x262:
    case 0x263:
    case 0x264:
    case 0x265:
    case 0x266:
    case 0x267:
    case 0x268:
    case 0x269:
    case 0x26a:
    case 0x26b:
    case 0x26c:
    case 0x26d:
    case 0x26e:
    case 0x26f:
    case 0x270:
    case 0x271:
    case 0x272:
    case 0x273:
    case 0x274:
    case 0x275:
    case 0x276:
    case 0x277:
    case 0x278:
    case 0x279:
    case 0x27a:
    case 0x27b:
    case 0x27c:
    case 0x27d:
    case 0x27e:
    case 0x27f:
    case 0x280:
    case 0x283:
    case 0x284:
    case 0x285:
    case 0x287:
    case 0x289:
    case 0x28a:
    case 0x28b:
    case 0x28c:
    case 0x28d:
    case 0x28e:
    case 0x28f:
    case 0x290:
    case 0x291:
    case 0x292:
    case 0x293:
    case 0x294:
    case 0x295:
    case 0x296:
    case 0x297:
    case 0x298:
    case 0x299:
    case 0x29a:
    case 0x29b:
    case 0x29c:
    case 0x29d:
    case 0x29e:
    case 0x29f:
    case 0x2a0:
    case 0x2a1:
    case 0x2a2:
    case 0x2a3:
    case 0x2a4:
    case 0x2a5:
    case 0x2a6:
    case 0x2a7:
    case 0x2a8:
    case 0x2a9:
    case 0x2aa:
    case 0x2ab:
    case 0x2ac:
    case 0x2ad:
    case 0x2ae:
    case 0x2af:
    case 0x2b0:
    case 0x2b1:
    case 0x2b2:
    case 0x2b3:
    case 0x2b4:
    case 0x2b5:
    case 0x2b6:
    case 0x2b7:
    case 0x2b8:
    case 0x2b9:
    case 0x2ba:
    case 699:
    case 700:
    case 0x2bd:
    case 0x2be:
    case 0x2bf:
    case 0x2c0:
    case 0x2c1:
    case 0x2c2:
    case 0x2c3:
    case 0x2c4:
    case 0x2c5:
    case 0x2c6:
    case 0x2c7:
    case 0x2c8:
    case 0x2c9:
    case 0x2ca:
    case 0x2cb:
    case 0x2cc:
    case 0x2cd:
    case 0x2ce:
    case 0x2cf:
    case 0x2d0:
    case 0x2d1:
    case 0x2d2:
    case 0x2d3:
    case 0x2d4:
    case 0x2d5:
    case 0x2d6:
    case 0x2d7:
    case 0x2d8:
    case 0x2d9:
    case 0x2da:
    case 0x2db:
    case 0x2dc:
    case 0x2dd:
    case 0x2de:
    case 0x2df:
      param_2 = local_544;
    default:
switchD_1423f5287_caseD_4:
      puVar38 = auStackY_5b8;
      if (local_548 != '\0') {
        puVar41 = auStackY_5b8;
        pData = (IRawElementProviderSimple *)(ulonglong)local_4e8;
        goto switchD_1423f5287_caseD_1;
      }
      break;
    case 0x214:
      DeferMessage(this,&local_518,(HWND__ *)local_550.lpVtbl,local_544,param_3,param_4,0,0,0);
      pFVar30 = TSharedPtr<FWindowsWindow,1>::operator->(&local_518);
      lVar24 = (**(code **)(pFVar30->_padding_ + 0xe0))(pFVar30);
      puVar38 = auStackY_5b8;
      param_2 = local_544;
      if (*(char *)(lVar24 + 0x28) != '\0') {
        local_1e8.cyWindowBorders = 0;
        local_1e8.atomWindowType = 0;
        local_1e8.wCreatorVersion = 0;
        local_1e8.cbSize = 0x3c;
        local_1e8.rcWindow.left = 0;
        local_1e8.rcWindow.top = 0;
        local_1e8.rcWindow.right = 0;
        local_1e8.rcWindow.bottom = 0;
        local_1e8.rcClient.left = 0;
        local_1e8.rcClient.top = 0;
        local_1e8.rcClient.right = 0;
        local_1e8.rcClient.bottom = 0;
        local_1e8.dwStyle = 0;
        local_1e8.dwExStyle = 0;
        local_1e8.dwWindowStatus = 0;
        local_1e8.cxWindowBorders = 0;
        GetWindowInfo((HWND)param_1,&local_1e8);
        lVar24 = (**(code **)(local_538->_padding_ + 0xe0))();
        if (*(char *)(lVar24 + 0x18) != '\0') {
          local_258.right = 0;
          local_258.bottom = 0;
          local_258.left = 0;
          local_258.top = 0;
          AdjustWindowRectEx(&local_258,local_1e8.dwStyle,0,local_1e8.dwExStyle);
          *(int *)param_4 = *(int *)param_4 - local_258.left;
          *(int *)(param_4 + 8) = *(int *)(param_4 + 8) - local_258.right;
          *(int *)(param_4 + 4) = *(int *)(param_4 + 4) - local_258.top;
          *(int *)(param_4 + 0xc) = *(int *)(param_4 + 0xc) - local_258.bottom;
        }
        pFVar30 = TSharedPtr<FWindowsWindow,1>::operator->(&local_518);
        plVar4 = *(longlong **)&this->field_0x18;
        fVar1 = pFVar30->AspectRatio;
        iVar14 = *(int *)(param_4 + 8) - *(int *)param_4;
        iVar48 = *(int *)(param_4 + 0xc) - *(int *)(param_4 + 4);
        local_338 = local_538;
        pTStack_330 = pTStack_530;
        pcVar5 = *(code **)(*plVar4 + 0x138);
        if (pTStack_530 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTStack_530->SharedReferenceCount =
               (atomic<int>)((int)pTStack_530->SharedReferenceCount + 1);
          UNLOCK();
        }
        (*pcVar5)(plVar4,&local_4a0,&local_338);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (pTStack_330);
        switch(param_3) {
        case 1:
        case 2:
        case 4:
        case 5:
        case 7:
        case 8:
          if ((local_4a0.bIsSet == false) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsSet()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                  ,0x1bd,
                                  L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                 ), bVar10)) {
            pcVar5 = (code *)swi(3);
            iVar14 = (*pcVar5)();
            return iVar14;
          }
          pfVar31 = TOptional<float>::GetValue(local_498);
          pfVar32 = TOptional<float>::GetValue(&local_4a0);
          if (*pfVar31 <= *pfVar32 && *pfVar32 != *pfVar31) {
            pfVar31 = TOptional<float>::GetValue(local_498);
            local_4a0.TypedValue = fVar1 * *pfVar31;
          }
          iVar48 = (int)local_4a0.TypedValue;
          if (iVar14 < iVar48) {
            if ((param_3 < 8) && ((0x92UL >> (param_3 & 0x3f) & 1) != 0)) {
              *(int *)param_4 = *(int *)param_4 + (iVar14 - iVar48);
            }
            else if ((param_3 < 9) && ((0x124UL >> (param_3 & 0x3f) & 1) != 0)) {
              *(int *)(param_4 + 8) = (*(int *)(param_4 + 8) - iVar14) + iVar48;
            }
          }
          break;
        case 3:
        case 6:
          pfVar31 = TOptional<float>::GetValue(local_498);
          fVar52 = *pfVar31;
          pfVar31 = TOptional<float>::GetValue(local_498);
          if ((local_4a0.bIsSet == false) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsSet()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                  ,0x1bd,
                                  L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                 ), bVar10)) {
            pcVar5 = (code *)swi(3);
            iVar14 = (*pcVar5)();
            return iVar14;
          }
          if (local_4a0.TypedValue < *pfVar31) {
            pfVar31 = TOptional<float>::GetValue(&local_4a0);
            fVar52 = *pfVar31 / fVar1;
          }
          iVar14 = (int)fVar52;
          if (iVar48 < iVar14) {
            if (param_3 == 3) {
              *(int *)(param_4 + 4) = (*(int *)(param_4 + 4) - iVar14) + iVar48;
            }
            else {
              *(int *)(param_4 + 0xc) = (*(int *)(param_4 + 0xc) - iVar48) + iVar14;
            }
          }
          break;
        default:
          lVar24 = (**(code **)(local_538->_padding_ + 0xe0))();
          if (*(char *)(lVar24 + 0x18) != '\0') {
            AdjustWindowRectEx((LPRECT)param_4,local_1e8.dwStyle,0,local_1e8.dwExStyle);
          }
          uVar17 = 1;
          goto LAB_1423f6a7f;
        }
                    /* WARNING: Could not recover jumptable at 0x0001423f6921. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        iVar14 = (*(code *)(switchD_1501dbc7b::caseD_1.e_magic + (&UINT_1423f6fbc)[param_3]))();
        return iVar14;
      }
      break;
    case 0x215:
      this->CaptureWindowHandle = (HWND__ *)param_4;
      param_2 = local_544;
      break;
    case 0x219:
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS4) && (_Init_thread_header(&::_TSS4), ::_TSS4 == -1)) {
        pFVar20 = ::FName::FName(local_2e8,L"Request_Device_Update");
        RequestUpdateProp.Name = *pFVar20;
        _Init_thread_footer(&::_TSS4);
      }
      while ((iVar14 = (int)pData, -1 < iVar14 && (iVar14 < (this->ExternalInputDevices).ArrayNum)))
      {
        if ((iVar14 < 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar5 = (code *)swi(3);
          iVar14 = (*pcVar5)();
          return iVar14;
        }
        pFVar36 = (this->ExternalInputDevices).AllocatorInstance.Data;
        if ((*(longlong *)(pFVar36 + (longlong)iVar14 * 0x10) == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar10)) {
          pcVar5 = (code *)swi(3);
          iVar14 = (*pcVar5)();
          return iVar14;
        }
        plVar4 = *(longlong **)(pFVar36 + (longlong)iVar14 * 0x10);
        (**(code **)(*plVar4 + 0x50))(plVar4,0xffffffff,&RequestUpdateProp);
        pData = (IRawElementProviderSimple *)(ulonglong)(iVar14 + 1);
      }
      QueryConnectedMice(this);
      puVar38 = auStackY_5b8;
      param_1 = (HWND__ *)local_550.lpVtbl;
      cVar11 = local_540;
      param_2 = local_544;
      break;
    case 0x231:
      this->bInModalSizeLoop = true;
    case 0x2e0:
      param_2 = local_544;
      goto switchD_1423f5287_caseD_6;
    case 0x232:
      param_2 = local_544;
      goto switchD_1423f5287_caseD_1c;
    case 0x281:
    case 0x286:
      uVar27 = (ulonglong)local_544;
      goto switchD_1423f5287_caseD_50;
    case 0x282:
      param_2 = local_544;
      if (5 < (byte)LogWindowsDesktop._0_1_) {
        uVar17 = IntCastChecked<unsigned_int,unsigned___int64>(param_3);
        pTVar29 = TSet<TTuple<unsigned_int,FString>,TDefaultMapHashableKeyFuncs<unsigned_int,FString,0>,FDefaultSetAllocator>
                  ::Find((TSet<TTuple<unsigned_int,FString>,TDefaultMapHashableKeyFuncs<unsigned_int,FString,0>,FDefaultSetAllocator>
                          *)&IMNStrings,uVar17);
        pIVar51 = (IRawElementProviderSimple *)&pTVar29->field_0x8;
        if (pTVar29 == (TTuple<unsigned_int,FString> *)0x0) {
          pIVar51 = pData;
        }
        if (pIVar51 == (IRawElementProviderSimple *)0x0) {
          pFVar35 = &::LOG_Static;
        }
        else {
          pFVar28 = TMapBase<unsigned_int,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FString,0>_>
                    ::FindChecked((TMapBase<unsigned_int,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FString,0>_>
                                   *)&IMNStrings,uVar19);
          if ((pFVar28->Data).ArrayNum == 0) {
            pFVar35 = &::LOG_Static;
          }
          else {
            pFVar35 = &::LOG_Static;
          }
        }
LAB_1423f6689:
        UE::Logging::Private::BasicLog<6>(pFVar35,(FLogCategoryBase *)&LogWindowsDesktop);
        param_2 = local_544;
      }
      goto switchD_1423f6276_caseD_102;
    case 0x288:
      param_2 = local_544;
      if (5 < (byte)LogWindowsDesktop._0_1_) {
        uVar17 = IntCastChecked<unsigned_int,unsigned___int64>(param_3);
        pTVar29 = TSet<TTuple<unsigned_int,FString>,TDefaultMapHashableKeyFuncs<unsigned_int,FString,0>,FDefaultSetAllocator>
                  ::Find((TSet<TTuple<unsigned_int,FString>,TDefaultMapHashableKeyFuncs<unsigned_int,FString,0>,FDefaultSetAllocator>
                          *)&IMRStrings,uVar17);
        pIVar51 = (IRawElementProviderSimple *)&pTVar29->field_0x8;
        if (pTVar29 == (TTuple<unsigned_int,FString> *)0x0) {
          pIVar51 = pData;
        }
        if (pIVar51 != (IRawElementProviderSimple *)0x0) {
          TMapBase<unsigned_int,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FString,0>_>
          ::FindChecked((TMapBase<unsigned_int,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FString,0>_>
                         *)&IMRStrings,uVar19);
        }
        pFVar35 = &::LOG_Static;
        goto LAB_1423f6689;
      }
switchD_1423f6276_caseD_102:
LAB_1423f66a8:
      DeferMessage(this,&local_518,(HWND__ *)local_550.lpVtbl,param_2,param_3,param_4,0,0,0);
      puVar41 = auStackY_5b8;
LAB_1423f66d3:
      pData = (IRawElementProviderSimple *)(ulonglong)uVar44;
      goto switchD_1423f5287_caseD_1;
    }
    goto LAB_1423f5e00;
  }
  if (param_2 == 0xff) {
    local_508 = 0;
    UVar18 = GetRawInputData((HRAWINPUT)param_4,0x10000003,(LPVOID)0x0,&local_508,0x18);
    puVar38 = auStackY_5b8;
    param_1 = (HWND__ *)local_550.lpVtbl;
    if (UVar18 == 0) {
      if (local_508 != 0) {
        uVar27 = (ulonglong)(local_508 + 0xf) + 0xf;
        if (uVar27 <= local_508 + 0xf) {
          uVar27 = 0xffffffffffffff0;
        }
        puVar40 = auStackY_5b8 + -(uVar27 & 0xfffffffffffffff0);
        pData = (IRawElementProviderSimple *)((longlong)&local_550 + -(uVar27 & 0xfffffffffffffff0))
        ;
      }
      *(undefined4 *)(puVar40 + 0x20) = 0x18;
      *(undefined8 *)(puVar40 + -8) = 0x1423f616d;
      UVar18 = GetRawInputData((HRAWINPUT)param_4,0x10000003,pData,&local_508,
                               *(UINT *)(puVar40 + 0x20));
      puVar38 = puVar40;
      param_1 = (HWND__ *)local_550.lpVtbl;
      if ((UVar18 == local_508) && (*(int *)&pData->lpVtbl == 0)) {
        *(undefined8 *)(puVar40 + -8) = 0x1423f618f;
        ProcessRawMouseInput(this,(tagRAWMOUSE *)(pData + 3),&local_4e0);
        IVar7.lpVtbl = local_550.lpVtbl;
        puVar41 = puVar40;
        if (local_4e0.bIsAbsoluteInput == false) {
          *(undefined4 *)(puVar40 + 0x40) = 0;
          *(int *)(puVar40 + 0x38) = local_4e0.DeltaY;
          *(int *)(puVar40 + 0x30) = local_4e0.DeltaX;
          *(long64 *)(puVar40 + 0x28) = param_4;
          *(ulong64 *)(puVar40 + 0x20) = param_3;
          *(undefined8 *)(puVar40 + -8) = 0x1423f6231;
          DeferMessage(this,&local_518,(HWND__ *)IVar7.lpVtbl,0xff,*(ulong64 *)(puVar40 + 0x20),
                       *(long64 *)(puVar40 + 0x28),*(int *)(puVar40 + 0x30),*(int *)(puVar40 + 0x38)
                       ,*(uint *)(puVar40 + 0x40));
          pData = (IRawElementProviderSimple *)&DAT_00000001;
        }
        else {
          uVar44 = 1;
          if (this->bSimulatingHighPrecisionMouseInputForRDP == false) {
            *(undefined4 *)(puVar40 + 0x40) = 1;
            *(undefined4 *)(puVar40 + 0x38) = 0;
            *(undefined4 *)(puVar40 + 0x30) = 0;
          }
          else {
            if (local_4e0.bSimulateRelativeMovement == false) goto LAB_1423f66d3;
            *(undefined4 *)(puVar40 + 0x40) = 0;
            *(int *)(puVar40 + 0x38) = local_4e0.DeltaY;
            *(int *)(puVar40 + 0x30) = local_4e0.DeltaX;
          }
          IVar7.lpVtbl = local_550.lpVtbl;
          *(long64 *)(puVar40 + 0x28) = param_4;
          *(ulong64 *)(puVar40 + 0x20) = param_3;
          *(undefined8 *)(puVar40 + -8) = 0x1423f61f0;
          DeferMessage(this,&local_518,(HWND__ *)IVar7.lpVtbl,0xff,*(ulong64 *)(puVar40 + 0x20),
                       *(long64 *)(puVar40 + 0x28),*(int *)(puVar40 + 0x30),*(int *)(puVar40 + 0x38)
                       ,*(uint *)(puVar40 + 0x40));
          pData = (IRawElementProviderSimple *)&DAT_00000001;
        }
        goto switchD_1423f5287_caseD_1;
      }
    }
    goto LAB_1423f5e00;
  }
  puVar41 = auStackY_5b8;
  switch(param_2) {
  case 1:
    break;
  case 2:
    pFVar36 = (this->Windows).AllocatorInstance.Data;
    if (((pFVar36 <= (FScriptContainerElement *)&local_538) &&
        ((FScriptContainerElement *)&local_538 < pFVar36 + (longlong)(this->Windows).ArrayMax * 0x10
        )) && (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar10)) {
      pcVar5 = (code *)swi(3);
      iVar14 = (*pcVar5)();
      return iVar14;
    }
    iVar14 = (this->Windows).ArrayNum;
    lVar24 = (longlong)iVar14;
    if (iVar14 != 0) {
      pFVar36 = (this->Windows).AllocatorInstance.Data;
      local_558[0] = *(FWindowsWindow **)pFVar36 != local_538;
      pFVar30 = local_538;
      pIVar45 = pData;
      pIVar50 = pData;
      do {
        iVar14 = (int)pData;
        pIVar45 = (IRawElementProviderSimple *)((longlong)&pIVar45->lpVtbl + 1);
        pData = (IRawElementProviderSimple *)(ulonglong)(iVar14 + 1);
        if ((longlong)pIVar45 < lVar24) {
          pFVar34 = pFVar36 + (longlong)pIVar45 * 0x10;
          do {
            if ((bool)local_558[0] != (*(FWindowsWindow **)pFVar34 != pFVar30)) break;
            pData = (IRawElementProviderSimple *)(ulonglong)((int)pData + 1);
            pIVar45 = (IRawElementProviderSimple *)((longlong)&pIVar45->lpVtbl + 1);
            pFVar34 = pFVar34 + 0x10;
          } while ((longlong)pIVar45 < lVar24);
        }
        iVar48 = (int)pData - iVar14;
        if (local_558[0] == 0) {
          DestructItems<TSharedRef<FWindowsWindow,1>,int>
                    ((TSharedRef<FWindowsWindow,1> *)(pFVar36 + (longlong)iVar14 * 0x10),iVar48);
          pFVar30 = local_538;
        }
        else {
          iVar49 = (int)pIVar50;
          if (iVar49 != iVar14) {
            memmove(pFVar36 + (longlong)iVar49 * 0x10,pFVar36 + (longlong)iVar14 * 0x10,
                    (longlong)iVar48 << 4);
            pFVar30 = local_538;
          }
          pIVar50 = (IRawElementProviderSimple *)(ulonglong)(uint)(iVar49 + iVar48);
        }
        local_558[0] = local_558[0] ^ 1;
      } while ((longlong)pIVar45 < lVar24);
      local_440->ArrayNum = (int)pIVar50;
      this = local_438;
      cVar11 = local_540;
    }
    pTVar3 = *(TReferenceControllerBase<1> **)&this->field_0x30;
    lVar24 = *(longlong *)&this->field_0x28;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((*(char *)(lVar24 + 8) == '\0') || (GAllowAccessibility == false)) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      puVar41 = auStackY_5b8;
      pData = pIVar51;
    }
    else {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      UiaReturnRawElementProvider((HWND)local_550.lpVtbl,0,0,(IRawElementProviderSimple *)0x0);
      puVar41 = auStackY_5b8;
      pData = pIVar51;
    }
    break;
  case 3:
    if ((MinimizedWindowPosition.field0_0x0._s_0.X == (short)param_4) &&
       (puVar38 = auStackY_5b8, MinimizedWindowPosition.field0_0x0._s_0.Y == (short)uVar13))
    goto LAB_1423f5e00;
    plVar4 = *(longlong **)&this->field_0x18;
    local_3d8 = local_538;
    pTStack_3d0 = pTStack_530;
    pcVar5 = *(code **)(*plVar4 + 0x168);
    if (pTStack_530 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTStack_530->SharedReferenceCount = (atomic<int>)((int)pTStack_530->SharedReferenceCount + 1);
      UNLOCK();
    }
    (*pcVar5)(plVar4,&local_3d8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_3d0)
    ;
    puVar41 = auStackY_5b8;
    pData = (IRawElementProviderSimple *)0x0;
    break;
  default:
    goto switchD_1423f5287_caseD_4;
  case 5:
    DeferMessage(this,&local_518,(HWND__ *)local_550.lpVtbl,param_2,param_3,param_4,0,0,0);
    if ((param_3 != 2) && (param_3 != 0)) goto LAB_1423f6a7f;
    plVar4 = *(longlong **)&this->field_0x18;
    local_3e8 = local_538;
    pTStack_3e0 = pTStack_530;
    pcVar5 = *(code **)(*plVar4 + 0x1c8);
    if (pTStack_530 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTStack_530->SharedReferenceCount = (atomic<int>)((int)pTStack_530->SharedReferenceCount + 1);
      UNLOCK();
    }
    (*pcVar5)(plVar4,&local_3e8,(param_3 != 2) + '\x02');
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_3e0)
    ;
    puVar41 = auStackY_5b8;
    pData = (IRawElementProviderSimple *)0x0;
    break;
  case 6:
  case 0x18:
  case 0x21:
    goto switchD_1423f5287_caseD_6;
  case 0xf:
    puVar38 = auStackY_5b8;
    if ((this->bInModalSizeLoop != false) &&
       (bVar10 = IsInGameThread(), puVar38 = auStackY_5b8, param_1 = (HWND__ *)local_550.lpVtbl,
       bVar10)) {
      plVar4 = *(longlong **)&this->field_0x18;
      pcVar5 = *(code **)(*plVar4 + 0x130);
      pTVar23 = TSharedPtr<FWindowsWindow,1>::ToSharedRef(&local_518,&local_308);
      local_418 = pTVar23->Object;
      local_410 = (pTVar23->SharedReferenceCount).ReferenceController;
      if (local_410 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_410->SharedReferenceCount = (atomic<int>)((int)local_410->SharedReferenceCount + 1);
        UNLOCK();
      }
      (*pcVar5)(plVar4,&local_418);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_410)
      ;
LAB_1423f585d:
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_308.SharedReferenceCount.ReferenceController);
      puVar38 = auStackY_5b8;
      param_1 = (HWND__ *)local_550.lpVtbl;
    }
    goto LAB_1423f5e00;
  case 0x10:
    DeferMessage(this,&local_518,(HWND__ *)local_550.lpVtbl,param_2,param_3,param_4,0,0,0);
    puVar41 = auStackY_5b8;
    pData = pIVar51;
    break;
  case 0x14:
switchD_1423f5287_caseD_14:
    puVar41 = auStackY_5b8;
    pData = (IRawElementProviderSimple *)&DAT_00000001;
    break;
  case 0x16:
    if (param_3 == 1) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &FCoreDelegates::OnUserLoginChangedEvent,(FWriteAccessScope *)&local_328);
      FCoreDelegates::OnUserLoginChangedEvent._28_4_ =
           FCoreDelegates::OnUserLoginChangedEvent._28_4_ + 1;
      uVar17 = FCoreDelegates::OnUserLoginChangedEvent._16_4_ - 1;
      local_548 = '\0';
      if (-1 < (int)uVar17) {
        lVar24 = (longlong)(int)uVar17 << 4;
        do {
          uVar19 = 0;
          if ((int)uVar17 < (int)FCoreDelegates::OnUserLoginChangedEvent._16_4_) {
            uVar19 = ~uVar17 >> 0x1f;
          }
          if ((uVar19 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar5 = (code *)swi(3);
            iVar14 = (*pcVar5)();
            return iVar14;
          }
          if (((*(int *)(lVar24 + 8 + FCoreDelegates::OnUserLoginChangedEvent._8_8_) == 0) ||
              (plVar4 = *(longlong **)(lVar24 + FCoreDelegates::OnUserLoginChangedEvent._8_8_),
              plVar4 == (longlong *)0x0)) ||
             (cVar12 = (**(code **)(*plVar4 + 0x68))(plVar4,0,0,0), cVar12 == '\0')) {
            local_548 = '\x01';
          }
          lVar24 = lVar24 + -0x10;
          uVar17 = uVar17 - 1;
        } while (-1 < (int)uVar17);
      }
      FCoreDelegates::OnUserLoginChangedEvent._28_4_ =
           FCoreDelegates::OnUserLoginChangedEvent._28_4_ + -1;
      if (local_548 != '\0') {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                   &FCoreDelegates::OnUserLoginChangedEvent,false);
      }
      param_2 = local_544;
      if (local_328.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_328.Accessor,&local_328);
        param_2 = local_544;
      }
    }
    LVar26 = DefWindowProcW((HWND)local_550.lpVtbl,param_2,param_3,param_4);
    uVar17 = IntCastChecked<int,__int64>(LVar26);
    puVar41 = auStackY_5b8;
    pData = (IRawElementProviderSimple *)(ulonglong)uVar17;
    break;
  case 0x1a:
    if ((param_4 != 0) &&
       (iVar14 = wcscmp(L"ConvertibleSlateMode",(wchar_t *)param_4),
       param_1 = (HWND__ *)local_550.lpVtbl, iVar14 == 0)) {
      DeferMessage(this,&local_518,(HWND__ *)local_550.lpVtbl,param_2,param_3,param_4,0,0,0);
    }
    puVar38 = auStackY_5b8;
    if (param_3 != 0xaf) goto LAB_1423f5e00;
    goto LAB_1423f6aaf;
  case 0x1c:
switchD_1423f5287_caseD_1c:
    this->bInModalSizeLoop = false;
    goto switchD_1423f5287_caseD_6;
  case 0x20:
    DeferMessage(this,&local_518,(HWND__ *)local_550.lpVtbl,param_2,param_3,param_4,0,0,0);
    lVar24 = (**(code **)(local_538->_padding_ + 0xe0))();
    puVar41 = auStackY_5b8;
    puVar38 = auStackY_5b8;
    if (*(char *)(lVar24 + 0x18) != '\0') goto LAB_1423f5e00;
    goto LAB_1423f66d3;
  case 0x24:
    plVar4 = *(longlong **)&this->field_0x18;
    local_3a8 = local_538;
    pTStack_3a0 = pTStack_530;
    pcVar5 = *(code **)(*plVar4 + 0x138);
    if (pTStack_530 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTStack_530->SharedReferenceCount = (atomic<int>)((int)pTStack_530->SharedReferenceCount + 1);
      UNLOCK();
    }
    (*pcVar5)(plVar4,&local_470,&local_3a8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_3a0)
    ;
    lVar24 = (**(code **)(local_538->_padding_ + 0xe0))();
    uVar17 = uVar44;
    if (*(char *)(lVar24 + 0x18) != '\0') {
      dwStyle = GetWindowLongW((HWND)local_550.lpVtbl,-0x10);
      dwExStyle = GetWindowLongW((HWND)local_550.lpVtbl,-0x14);
      local_248.left = 0;
      local_248.top = 0;
      local_248.right = 0;
      local_248.bottom = 0;
      AdjustWindowRectEx(&local_248,dwStyle,0,dwExStyle);
      uVar44 = local_248.right - local_248.left;
      uVar17 = local_248.bottom - local_248.top;
    }
    fVar52 = (float)(**(code **)(local_538->_padding_ + 0xf8))();
    fVar1 = __real_3f000000;
    if (local_46c == '\0') {
      local_470 = (float)*(int *)(param_4 + 0x18);
    }
    *(int *)(param_4 + 0x18) = (int)ROUND((local_470 + local_470) * fVar52 + __real_3f000000) >> 1;
    if (local_464 == '\0') {
      local_468 = (float)*(int *)(param_4 + 0x1c);
    }
    *(int *)(param_4 + 0x1c) = (int)ROUND((fVar52 + fVar52) * local_468 + fVar1) >> 1;
    if (local_45c == '\0') {
      local_460 = (float)*(int *)(param_4 + 0x20);
    }
    *(uint *)(param_4 + 0x20) = ((int)ROUND((local_460 + local_460) * fVar52 + fVar1) >> 1) + uVar44
    ;
    if (local_454 == '\0') {
      local_458 = (float)*(int *)(param_4 + 0x24);
    }
    *(uint *)(param_4 + 0x24) = ((int)ROUND((local_458 + local_458) * fVar52 + fVar1) >> 1) + uVar17
    ;
    puVar41 = auStackY_5b8;
    pData = pIVar51;
    break;
  case 0x3d:
    local_308.SharedReferenceCount.ReferenceController =
         *(TReferenceControllerBase<1> **)&this->field_0x30;
    lVar24 = *(longlong *)&this->field_0x28;
    if (local_308.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_308.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_308.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((*(char *)(lVar24 + 8) == '\0') || (GAllowAccessibility == false)) goto LAB_1423f585d;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_308.SharedReferenceCount.ReferenceController);
    this_00 = (this->UIAManager).Ptr;
    local_2f8.Object = local_538;
    local_2f8.SharedReferenceCount.ReferenceController = pTStack_530;
    if (pTStack_530 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTStack_530->SharedReferenceCount = (atomic<int>)((int)pTStack_530->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar25 = FWindowsUIAManager::GetWindowProvider(this_00,&local_2f8);
    puVar41 = &pFVar25->field_0x28;
    pIVar51 = (IRawElementProviderSimple *)puVar41;
    if (pFVar25 == (FWindowsUIAWindowProvider *)0x0) {
      pIVar51 = pData;
    }
    LVar26 = UiaReturnRawElementProvider((HWND)local_550.lpVtbl,param_3,param_4,pIVar51);
    uVar17 = IntCastChecked<int,__int64>(LVar26);
    (**(code **)(*(longlong *)puVar41 + 0x10))((IRawElementProviderSimple *)puVar41);
    puVar41 = auStackY_5b8;
    pData = (IRawElementProviderSimple *)(ulonglong)uVar17;
    break;
  case 0x50:
  case 0x51:
switchD_1423f5287_caseD_50:
    param_2 = (uint)uVar27;
    if (5 < (byte)LogWindowsDesktop._0_1_) {
      if (WindowsMessageStrings._8_4_ != WindowsMessageStrings._52_4_) {
        lVar24 = 0x155027f08;
        if (WindowsMessageStrings._64_8_ != 0) {
          lVar24 = WindowsMessageStrings._64_8_;
        }
        uVar17 = *(uint *)(lVar24 + (WindowsMessageStrings._72_4_ - 1 & uVar27) * 4);
        while (uVar17 != 0xffffffff) {
          puVar46 = (uint *)((longlong)(int)uVar17 * 0x20 + WindowsMessageStrings._0_8_);
          if (*puVar46 == local_544) {
            if (puVar46 != (uint *)0x0) goto LAB_1423f65a1;
            break;
          }
          uVar17 = puVar46[6];
        }
      }
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Pair != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                          ,0x27b,L"");
      if (bVar10) {
        pcVar5 = (code *)swi(3);
        iVar14 = (*pcVar5)();
        return iVar14;
      }
LAB_1423f65a1:
      pFVar35 = &::LOG_Static;
      goto LAB_1423f6689;
    }
    goto switchD_1423f6276_caseD_102;
  case 0x7e:
    local_2d8.MonitorInfo.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_2d8.MonitorInfo.ArrayNum = 0;
    local_2d8.MonitorInfo.ArrayMax = 0;
    local_2d8.PrimaryDisplayWorkAreaRect.Left = 0;
    local_2d8.PrimaryDisplayWorkAreaRect.Top = 0;
    local_2d8.PrimaryDisplayWorkAreaRect.Right = 0;
    local_2d8.PrimaryDisplayWorkAreaRect.Bottom = 0;
    local_2d8.VirtualDisplayRect.Left = 0;
    local_2d8.VirtualDisplayRect.Top = 0;
    local_2d8.TitleSafePaddingSize.field0_0x0._s_0.X = 0.0;
    local_2d8.TitleSafePaddingSize.field0_0x0._s_0.Y = 0.0;
    local_2d8.TitleSafePaddingSize.field0_0x0._s_0.Z = 0.0;
    local_2d8.TitleSafePaddingSize.field0_0x0._s_0.W = 0.0;
    local_2d8.ActionSafePaddingSize.field0_0x0._s_0.X = 0.0;
    local_2d8.ActionSafePaddingSize.field0_0x0._s_0.Y = 0.0;
    local_2d8.ActionSafePaddingSize.field0_0x0._s_0.Z = 0.0;
    local_2d8.ActionSafePaddingSize.field0_0x0._s_0.W = 0.0;
    local_2d8.VirtualDisplayRect.Right = 0;
    local_2d8.VirtualDisplayRect.Bottom = 0;
    FDisplayMetrics::RebuildDisplayMetrics(&local_2d8);
    GenericApplication::BroadcastDisplayMetricsChanged((GenericApplication *)this,&local_2d8);
    DestructItems<FMonitorInfo,int>
              ((FMonitorInfo *)local_2d8.MonitorInfo.AllocatorInstance.Data,
               local_2d8.MonitorInfo.ArrayNum);
    puVar38 = auStackY_5b8;
    param_1 = (HWND__ *)local_550.lpVtbl;
    if ((FMonitorInfo *)local_2d8.MonitorInfo.AllocatorInstance.Data != (FMonitorInfo *)0x0) {
      FMemory::Free(local_2d8.MonitorInfo.AllocatorInstance.Data);
      puVar38 = auStackY_5b8;
      param_1 = (HWND__ *)local_550.lpVtbl;
    }
    goto LAB_1423f5e00;
  case 0x83:
    puVar38 = auStackY_5b8;
    if ((param_3 == 0) ||
       (lVar24 = (**(code **)(local_538->_padding_ + 0xe0))(), puVar38 = auStackY_5b8,
       param_1 = (HWND__ *)local_550.lpVtbl, *(char *)(lVar24 + 0x18) != '\0')) goto LAB_1423f5e00;
    piVar22 = (int *)(**(code **)(local_538->_padding_ + 0xe0))();
    if ((*piVar22 == 5) && (cVar12 = (**(code **)(local_538->_padding_ + 0x70))(), cVar12 != '\0'))
    {
      local_228.cyWindowBorders = 0;
      local_228.atomWindowType = 0;
      local_228.wCreatorVersion = 0;
      local_228.cbSize = 0x3c;
      local_228.rcWindow.left = 0;
      local_228.rcWindow.top = 0;
      local_228.rcWindow.right = 0;
      local_228.rcWindow.bottom = 0;
      local_228.rcClient.left = 0;
      local_228.rcClient.top = 0;
      local_228.rcClient.right = 0;
      local_228.rcClient.bottom = 0;
      local_228.dwStyle = 0;
      local_228.dwExStyle = 0;
      local_228.dwWindowStatus = 0;
      local_228.cxWindowBorders = 0;
      GetWindowInfo((HWND)local_550.lpVtbl,&local_228);
      *(int *)(param_4 + 0xc) = *(int *)(param_4 + 0xc) - local_228.cxWindowBorders;
      *(UINT *)param_4 = *(int *)param_4 + local_228.cxWindowBorders;
      *(int *)(param_4 + 4) = *(int *)(param_4 + 4) + local_228.cxWindowBorders;
      *(int *)(param_4 + 8) = *(int *)(param_4 + 8) - local_228.cxWindowBorders;
      *(undefined4 *)(param_4 + 0x1c) = *(undefined4 *)(param_4 + 0xc);
      *(undefined4 *)(param_4 + 0x18) = *(undefined4 *)(param_4 + 8);
      *(undefined4 *)(param_4 + 0x10) = *(undefined4 *)param_4;
      *(undefined4 *)(param_4 + 0x14) = *(undefined4 *)(param_4 + 4);
      piVar22 = (int *)(*(longlong *)(param_4 + 0x30) + 0x10);
      *piVar22 = *piVar22 + local_228.cxWindowBorders;
      piVar22 = (int *)(*(longlong *)(param_4 + 0x30) + 0x14);
      *piVar22 = *piVar22 + local_228.cxWindowBorders;
      piVar22 = (int *)(*(longlong *)(param_4 + 0x30) + 0x18);
      *piVar22 = *piVar22 + local_228.cxWindowBorders * -2;
      piVar22 = (int *)(*(longlong *)(param_4 + 0x30) + 0x1c);
      *piVar22 = *piVar22 + local_228.cxWindowBorders * -2;
      puVar41 = auStackY_5b8;
      pData = (IRawElementProviderSimple *)0x400;
    }
    else {
      QueryPerformanceFrequency(&local_448);
      memset(&local_1a8.rateRefresh,0,0x120);
      local_1a8.cbSize = 0x124;
      HVar15 = DwmGetCompositionTimingInfo((HWND)0x0,&local_1a8);
      if (-1 < HVar15) {
        QueryPerformanceCounter(&local_450);
        lVar47 = local_1a8.qpcVBlank - (longlong)local_450;
        lVar24 = lVar47 - lVar47 % (longlong)local_1a8.qpcRefreshPeriod;
        if (lVar47 < 0) {
          lVar24 = lVar24 - local_1a8.qpcRefreshPeriod;
        }
        if ((IRawElementProviderSimple *)(lVar47 - lVar24) !=
            (IRawElementProviderSimple *)local_1a8.qpcRefreshPeriod) {
          pData = (IRawElementProviderSimple *)(lVar47 - lVar24);
        }
        if (((longlong)pData < 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("WaitTime >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ApplicationCore\\Private\\Windows\\WindowsApplication.cpp"
                                ,0x9b0,L""), bVar10)) {
          pcVar5 = (code *)swi(3);
          iVar14 = (*pcVar5)();
          return iVar14;
        }
        if (((longlong)local_1a8.qpcRefreshPeriod <= (longlong)pData) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("WaitTime < Period",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ApplicationCore\\Private\\Windows\\WindowsApplication.cpp"
                                ,0x9b1,L""), bVar10)) {
          pcVar5 = (code *)swi(3);
          iVar14 = (*pcVar5)();
          return iVar14;
        }
        hTimer = CreateWaitableTimerW((LPSECURITY_ATTRIBUTES)0x0,1,(LPCWSTR)0x0);
        if (hTimer != (HANDLE)0x0) {
          dVar6 = 0.0;
          if (0 < local_448.QuadPart) {
            dVar6 = ((double)(longlong)pData * __real_408f400000000000) / (double)local_448.QuadPart
            ;
          }
          local_430.QuadPart = (LONGLONG)(dVar6 * ___real_c0c3880000000000);
          BVar16 = SetWaitableTimer(hTimer,&local_430,0,(PTIMERAPCROUTINE)0x0,(LPVOID)0x0,0);
          if (BVar16 != 0) {
            WaitForSingleObject(hTimer,(int)(longlong)dVar6 + 10);
          }
          CloseHandle(hTimer);
          puVar41 = auStackY_5b8;
          pData = (IRawElementProviderSimple *)0x0;
          break;
        }
      }
LAB_1423f6a7f:
      puVar41 = auStackY_5b8;
      pData = (IRawElementProviderSimple *)(ulonglong)uVar17;
    }
    break;
  case 0x84:
    lVar24 = (**(code **)(local_538->_padding_ + 0xe0))();
    puVar38 = auStackY_5b8;
    param_1 = (HWND__ *)local_550.lpVtbl;
    if (*(char *)(lVar24 + 0x18) == '\0') {
      GetWindowRect((HWND)local_550.lpVtbl,&local_238);
      local_504 = (short)uVar13 - local_238.top;
      bVar10 = FWindowsWindow::IsRegularWindow(local_538);
      puVar38 = auStackY_5b8;
      param_1 = (HWND__ *)local_550.lpVtbl;
      if (bVar10) {
        plVar4 = *(longlong **)&this->field_0x18;
        local_3c8 = local_518.Object;
        pTStack_3c0 = FVar8.ReferenceController;
        pcVar5 = *(code **)(*plVar4 + 8);
        if (local_518.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_518.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_518.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        cVar12 = (*pcVar5)(plVar4,&local_3c8);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (pTStack_3c0);
        if (cVar12 != '\0') {
          plVar4 = *(longlong **)&this->field_0x18;
          local_3b8 = local_538;
          pTStack_3b0 = pTStack_530;
          pcVar5 = *(code **)(*plVar4 + 0x188);
          if (pTStack_530 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTStack_530->SharedReferenceCount =
                 (atomic<int>)((int)pTStack_530->SharedReferenceCount + 1);
            UNLOCK();
          }
          local_4ec = (*pcVar5)(plVar4,&local_3b8,(short)param_4 - local_238.left,local_504);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTStack_3b0);
        }
        uVar17 = IntCastChecked<int,__int64>(Results[local_4ec]);
        puVar41 = auStackY_5b8;
        pData = (IRawElementProviderSimple *)(ulonglong)uVar17;
        break;
      }
    }
    goto LAB_1423f5e00;
  case 0x85:
    lVar24 = (**(code **)(local_538->_padding_ + 0xe0))();
    puVar41 = auStackY_5b8;
    puVar38 = auStackY_5b8;
    param_1 = (HWND__ *)local_550.lpVtbl;
    pData = pIVar51;
    if (*(char *)(lVar24 + 0x18) != '\0') goto LAB_1423f5e00;
    break;
  case 0x86:
    lVar24 = (**(code **)(local_538->_padding_ + 0xe0))();
    puVar38 = auStackY_5b8;
    param_1 = (HWND__ *)local_550.lpVtbl;
    if (*(char *)(lVar24 + 0x18) == '\0') goto switchD_1423f5287_caseD_14;
    goto LAB_1423f5e00;
  case 0x87:
    puVar41 = auStackY_5b8;
    pData = (IRawElementProviderSimple *)&DAT_00000004;
    break;
  case 0xa0:
    goto switchD_1423f5287_caseD_a0;
  case 0xa1:
  case 0xa4:
  case 0xa7:
    if (param_3 == 2) {
      plVar4 = *(longlong **)&this->field_0x18;
      local_368 = local_538;
      pTStack_360 = pTStack_530;
      pcVar5 = *(code **)(*plVar4 + 0x1c8);
      if (pTStack_530 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTStack_530->SharedReferenceCount =
             (atomic<int>)((int)pTStack_530->SharedReferenceCount + 1);
        UNLOCK();
      }
      cVar12 = (*pcVar5)(plVar4,&local_368,1);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_360);
      puVar38 = auStackY_5b8;
      param_1 = (HWND__ *)local_550.lpVtbl;
      param_2 = local_544;
      if (cVar12 == '\0') {
        puVar41 = auStackY_5b8;
        pData = (IRawElementProviderSimple *)&DAT_00000001;
        break;
      }
    }
    else if (param_3 == 8) {
      plVar4 = *(longlong **)&this->field_0x18;
      local_378 = local_538;
      pTStack_370 = pTStack_530;
      pcVar5 = *(code **)(*plVar4 + 0x1c8);
      if (pTStack_530 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTStack_530->SharedReferenceCount =
             (atomic<int>)((int)pTStack_530->SharedReferenceCount + 1);
        UNLOCK();
      }
      cVar12 = (*pcVar5)(plVar4,&local_378,1);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_370);
      puVar38 = auStackY_5b8;
      param_1 = (HWND__ *)local_550.lpVtbl;
      param_2 = local_544;
      if (cVar12 == '\0') {
        puVar41 = auStackY_5b8;
        pData = (IRawElementProviderSimple *)&DAT_00000001;
        break;
      }
    }
    else if (param_3 == 9) {
      plVar4 = *(longlong **)&this->field_0x18;
      local_388 = local_538;
      pTStack_380 = pTStack_530;
      pcVar5 = *(code **)(*plVar4 + 0x1c8);
      if (pTStack_530 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTStack_530->SharedReferenceCount =
             (atomic<int>)((int)pTStack_530->SharedReferenceCount + 1);
        UNLOCK();
      }
      cVar12 = (*pcVar5)(plVar4,&local_388,1);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_380);
      puVar38 = auStackY_5b8;
      param_1 = (HWND__ *)local_550.lpVtbl;
      param_2 = local_544;
      if (cVar12 == '\0') {
        puVar41 = auStackY_5b8;
        pData = (IRawElementProviderSimple *)&DAT_00000001;
        break;
      }
    }
    else {
      puVar38 = auStackY_5b8;
      if (param_3 == 0x14) {
        plVar4 = *(longlong **)&this->field_0x18;
        local_398 = local_538;
        pTStack_390 = pTStack_530;
        pcVar5 = *(code **)(*plVar4 + 0x1c8);
        if (pTStack_530 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTStack_530->SharedReferenceCount =
               (atomic<int>)((int)pTStack_530->SharedReferenceCount + 1);
          UNLOCK();
        }
        uVar17 = 1;
        cVar12 = (*pcVar5)(plVar4,&local_398,1);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (pTStack_390);
        puVar38 = auStackY_5b8;
        param_1 = (HWND__ *)local_550.lpVtbl;
        param_2 = local_544;
        if (cVar12 == '\0') goto LAB_1423f6a7f;
      }
    }
LAB_1423f5e00:
    if (cVar11 != '\0') {
      *(undefined8 *)(puVar38 + -8) = 0x1423f5e09;
      FCpuProfilerTrace::OutputEndEvent();
    }
    pFVar36 = local_4f8;
    if (local_4f8 != (FScriptContainerElement *)0x0) {
      *(undefined8 *)(puVar38 + -8) = 0x1423f5e17;
      FMemory::Free(pFVar36);
    }
    pTVar3 = pTStack_530;
    *(undefined8 *)(puVar38 + -8) = 0x1423f5e20;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    puVar39 = puVar38;
LAB_1423f5e20:
    *(undefined8 *)(puVar39 + -8) = 0x1423f5e31;
    pData = (IRawElementProviderSimple *)DefWindowProcW((HWND)param_1,param_2,param_3,param_4);
    if (pData != (IRawElementProviderSimple *)(longlong)(int)pData) {
      *(IRawElementProviderSimple **)(puVar39 + 0x20) = pData;
      *(undefined8 *)(puVar39 + -8) = 0x1423f5e61;
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IntFitsIn<OutType>(In)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                          ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld");
      if (bVar10) {
        pcVar5 = (code *)swi(3);
        iVar14 = (*pcVar5)();
        return iVar14;
      }
    }
    goto LAB_1423f5e67;
  }
switchD_1423f5287_caseD_1:
  if (cVar11 != '\0') {
    *(undefined8 *)(puVar41 + -8) = 0x1423f6c02;
    FCpuProfilerTrace::OutputEndEvent();
  }
  pFVar36 = local_4f8;
  if (local_4f8 != (FScriptContainerElement *)0x0) {
    *(undefined8 *)(puVar41 + -8) = 0x1423f6c10;
    FMemory::Free(pFVar36);
  }
LAB_1423f6c10:
  pTVar3 = pTStack_530;
  *(undefined8 *)(puVar41 + -8) = 0x1423f6c19;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  puVar39 = puVar41;
LAB_1423f5e67:
  *(undefined8 *)(puVar39 + -8) = 0x1423f5e70;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_518.SharedReferenceCount.ReferenceController);
  *(undefined8 *)(puVar39 + -8) = 0x1423f5e82;
  return (int)pData;
}

// ProcessMouseButton @ 1423f7820

void __thiscall
FWindowsApplication::ProcessMouseButton
          (FWindowsApplication *this,double param_1,TSharedPtr<FGenericWindow,1> *param_2,
          ushort param_3,ushort param_4,ushort param_5,Type param_6,TVector2<double> *param_7)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  if ((param_4 & param_3) != 0) {
    lVar2 = (longlong)(int)param_6;
    lVar1 = **(longlong **)&this->field_0x18;
    local_28 = *(undefined4 *)&param_7->field0_0x0;
    uStack_24 = *(undefined4 *)((longlong)&param_7->field0_0x0 + 4);
    uStack_20 = *(undefined4 *)((longlong)&param_7->field0_0x0 + 8);
    uStack_1c = *(undefined4 *)((longlong)&param_7->field0_0x0 + 0xc);
    if (this->RepeatTime[lVar2] <= param_1 && param_1 != this->RepeatTime[lVar2]) {
      (**(code **)(lVar1 + 0x30))(*(longlong **)&this->field_0x18,param_2,lVar2,&local_28);
    }
    else {
      (**(code **)(lVar1 + 0x50))();
    }
    this->RepeatTime[lVar2] = param_1 + __real_3fe0000000000000;
    return;
  }
  if ((param_5 & param_3) != 0) {
    (**(code **)(**(longlong **)&this->field_0x18 + 0x48))(*(longlong **)&this->field_0x18,param_6);
  }
  return;
}

// ProcessRawMouseInput @ 1423f78d0

void __thiscall
FWindowsApplication::ProcessRawMouseInput
          (FWindowsApplication *this,tagRAWMOUSE *param_1,RawMouseInputResult *param_2)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  byte bVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  int iVar13;
  int iVar14;
  float fVar15;
  float fVar16;
  double local_58;
  double local_50;
  
  bVar2 = (bool)((byte)param_1->usFlags & 1);
  param_2->bIsAbsoluteInput = bVar2;
  if (bVar2 == false) {
    param_2->DeltaX = param_1->lLastX;
    param_2->DeltaY = param_1->lLastY;
    return;
  }
  if (this->bSimulatingHighPrecisionMouseInputForRDP == false) {
    return;
  }
  bVar8 = (byte)param_1->usFlags >> 1 & 1;
  if (bVar8 == 0) {
    iVar3 = 0;
    iVar4 = iVar3;
  }
  else {
    iVar3 = GetSystemMetrics(0x4c);
    iVar4 = GetSystemMetrics(0x4d);
  }
  iVar5 = GetSystemMetrics(-(uint)(bVar8 != 0) & 0x4e);
  iVar10 = 1;
  if (bVar8 != 0) {
    iVar10 = 0x4f;
  }
  iVar6 = GetSystemMetrics(iVar10);
  iVar10 = this->NumPreWrapMsgsToRespect;
  iVar13 = (this->ClipCursorRect).left;
  lVar11 = (longlong)param_1->lLastX * (longlong)iVar5;
  iVar5 = (this->ClipCursorRect).top;
  lVar11 = SUB168(SEXT816(-0x7fff7fff7fff7fff) * SEXT816(lVar11),8) + lVar11;
  lVar12 = (longlong)param_1->lLastY * (longlong)iVar6;
  iVar3 = ((int)(lVar11 >> 0xf) - (int)(lVar11 >> 0x3f)) + iVar3;
  lVar12 = SUB168(SEXT816(-0x7fff7fff7fff7fff) * SEXT816(lVar12),8) + lVar12;
  iVar7 = iVar3 - (this->LastCursorPoint).field0_0x0._s_0.X;
  iVar6 = (this->ClipCursorRect).bottom;
  iVar4 = ((int)(lVar12 >> 0xf) - (int)(lVar12 >> 0x3f)) + iVar4;
  iVar9 = iVar4 - (this->LastCursorPoint).field0_0x0._s_0.Y;
  fVar16 = (float)((this->ClipCursorRect).right - iVar13);
  this->NumPreWrapMsgsToRespect = iVar10 + -1;
  fVar15 = (float)(iVar6 - iVar5);
  if ((iVar7 != 0) || (iVar9 != 0)) {
    piVar1 = &(this->LastCursorPointPreWrap).field0_0x0._s_0.Y;
    if (iVar10 < 1) {
LAB_1423f7a7e:
      iVar6 = iVar5 - (int)(fVar15 * __real_bdcccccd);
      iVar5 = iVar5 - (int)(fVar15 * __real_bf666666);
      iVar10 = iVar13 - (int)(fVar16 * __real_bdcccccd);
      iVar13 = iVar13 - (int)(fVar16 * __real_bf666666);
      bVar2 = false;
      if (iVar4 < iVar6) {
        iVar14 = iVar5 + -0x32;
LAB_1423f7ae0:
        bVar2 = true;
      }
      else {
        iVar14 = iVar4;
        if (iVar5 < iVar4) {
          iVar14 = iVar6 + 0x32;
          goto LAB_1423f7ae0;
        }
      }
      if (iVar3 < iVar10) {
        iVar5 = iVar13 + -0x32;
LAB_1423f7afa:
        local_58 = (double)iVar5;
        local_50 = (double)iVar14;
        (**(code **)(**(longlong **)&this->field_0x18 + 0x1d0))
                  (*(longlong **)&this->field_0x18,&local_58);
        (this->LastCursorPoint).field0_0x0._s_0.Y = iVar14;
        (this->LastCursorPoint).field0_0x0._s_0.X = iVar5;
        this->NumPreWrapMsgsToRespect = 10;
        (this->LastCursorPointPreWrap).field0_0x0._s_0.X = iVar3;
        *piVar1 = iVar4;
        iVar3 = iVar5;
      }
      else {
        if (iVar13 < iVar3) {
          iVar5 = iVar10 + 0x32;
          goto LAB_1423f7afa;
        }
        iVar5 = iVar3;
        if (bVar2) goto LAB_1423f7afa;
      }
      (this->LastCursorPoint).field0_0x0._s_0.X = iVar3;
      (this->LastCursorPoint).field0_0x0._s_0.Y = iVar14;
    }
    else {
      iVar10 = iVar3 - (this->LastCursorPointPreWrap).field0_0x0._s_0.X;
      iVar6 = iVar4 - *piVar1;
      if (iVar9 * iVar9 + iVar7 * iVar7 <= iVar6 * iVar6 + iVar10 * iVar10) goto LAB_1423f7a7e;
      (this->LastCursorPointPreWrap).field0_0x0._s_0.X = iVar3;
      *piVar1 = iVar4;
      iVar7 = iVar10;
      iVar9 = iVar6;
    }
    if ((iVar7 != 0) || (iVar9 != 0)) {
      iVar3 = -iVar7;
      if (-iVar7 < 0) {
        iVar3 = iVar7;
      }
      if (iVar3 < (int)(fVar16 * __real_3ecccccd)) {
        iVar3 = -iVar9;
        if (-iVar9 < 0) {
          iVar3 = iVar9;
        }
        if (iVar3 < (int)(fVar15 * __real_3ecccccd)) {
          bVar2 = true;
          goto LAB_1423f7ba5;
        }
      }
    }
  }
  bVar2 = false;
LAB_1423f7ba5:
  param_2->DeltaX = iVar7;
  param_2->bSimulateRelativeMovement = bVar2;
  param_2->DeltaY = iVar9;
  return;
}

// ProcessWorkerInputs @ 1423f7c10

void __thiscall FWindowsApplication::ProcessWorkerInputs(FWindowsApplication *this)

{
  TNode *pTVar1;
  TNode *pTVar2;
  longlong *plVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  float fVar8;
  ForAnyElementType _Src;
  undefined8 uVar9;
  undefined2 uVar10;
  bool bVar11;
  int iVar12;
  IPlatformInputDeviceMapper *pIVar13;
  int *piVar14;
  FWindowsRawInputRunnable *pFVar15;
  TSharedPtr<FWindowsWindow,1> *pTVar16;
  atomic<unsigned_int> aVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  tagPOINT tVar20;
  int iVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  bool bVar24;
  double dVar25;
  double dVar26;
  FWindowsWindow *pFVar27;
  FSharedReferencer<1> FVar28;
  LARGE_INTEGER local_res10;
  uint local_res18;
  uint local_res20;
  RawMouseInputResult local_288;
  FString local_278;
  ulonglong local_268;
  TSharedPtr<FWindowsWindow,1> local_258;
  ulonglong local_240;
  ulonglong local_238;
  FWindowsWindow *local_228;
  TReferenceControllerBase<1> *pTStack_220;
  FWindowsWindow *local_218;
  TReferenceControllerBase<1> *pTStack_210;
  FWindowsWindow *local_208;
  TReferenceControllerBase<1> *pTStack_200;
  FWindowsWindow *local_1f8;
  TReferenceControllerBase<1> *pTStack_1f0;
  FWindowsWindow *local_1e8;
  TReferenceControllerBase<1> *pTStack_1e0;
  tagRAWMOUSE local_1d8;
  double local_1b8;
  double local_1b0;
  double local_1a8;
  double local_1a0;
  double local_198;
  double local_190;
  double local_188;
  double local_180;
  TSharedPtr<FWindowsWindow,1> local_178;
  double local_168;
  double dStack_160;
  double local_158;
  double dStack_150;
  double local_148;
  double dStack_140;
  double local_138;
  double dStack_130;
  double local_128;
  double dStack_120;
  double local_118;
  double dStack_110;
  double local_108;
  double dStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  FInputDeviceScope local_e0 [4];
  
  bVar24 = -1 < CpuChannel->Enabled;
  if (bVar24) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId4470,"ProcessWorkerInputs",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ApplicationCore\\Private\\Windows\\WindowsApplication.cpp"
               ,0x1176);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId4470);
  }
  _Src.Data = UE::WindowsInput::KBMInputHardwareName.Data.AllocatorInstance.Data;
  uVar19 = 0;
  local_278.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar12 = UE::WindowsInput::KBMInputHardwareName.Data.ArrayNum;
  local_278.Data.ArrayNum = iVar12;
  if (iVar12 == 0) {
    local_278.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar12,0,(ForAnyElementType *)&local_278,iVar12,&local_278.Data.ArrayMax);
    memcpy(local_278.Data.AllocatorInstance.Data,_Src.Data,(longlong)iVar12 * 2);
  }
  pIVar13 = IPlatformInputDeviceMapper::Get();
  piVar14 = (int *)(**(code **)(pIVar13->_padding_ + 0x58))(pIVar13);
  FInputDeviceScope::FInputDeviceScope
            (local_e0,(IInputDevice *)0x0,UE::WindowsInput::InputClassName,*piVar14,&local_278);
  iVar12 = GetSystemMetrics(0x17);
  uVar18 = uVar19;
  if (iVar12 == 0) {
    uVar18 = 2;
  }
  local_res20 = (uint)uVar18;
  local_res18 = -(uint)(iVar12 != 0) & 2;
  if (UE::WindowsApplication::RawInputThread::FWindowsRawInputRunnable::Thread ==
      (FRunnableThread *)0x0) {
    aVar17 = (atomic<unsigned_int>)0x0;
  }
  else {
    pFVar15 = UE::WindowsApplication::RawInputThread::FWindowsRawInputRunnable::GetInstance();
    uVar18 = (ulonglong)local_res20;
    LOCK();
    aVar17 = pFVar15->InputCount;
    pFVar15->InputCount = (atomic<unsigned_int>)0x0;
    UNLOCK();
  }
  fVar8 = __real_3c088889;
  dVar7 = __real_4170000000000000;
  dVar6 = __real_3fe0000000000000;
  if (aVar17 != (atomic<unsigned_int>)0x0) {
    local_240 = (ulonglong)local_res18;
    uVar23 = (ulonglong)(uint)aVar17;
    uVar22 = uVar19;
    local_238 = uVar18;
    do {
      local_268 = uVar23;
      bVar11 = IsInGameThread();
      if ((!bVar11) &&
         (bVar11 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<_8717070949721045883>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ApplicationCore\\Private\\Windows\\WindowsApplication.cpp"
                              ,0x485,"IsInGameThread()"), bVar11)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar15 = UE::WindowsApplication::RawInputThread::FWindowsRawInputRunnable::GetInstance();
      pTVar1 = ((pFVar15->MouseInputs).Tail)->NextNode;
      if (pTVar1 != (TNode *)0x0) {
        local_1d8.usFlags = (pTVar1->Item).usFlags;
        local_1d8._2_2_ = *(undefined2 *)&(pTVar1->Item).field_0x2;
        local_1d8.field1_0x4 = (pTVar1->Item).field1_0x4;
        local_1d8.ulRawButtons = (pTVar1->Item).ulRawButtons;
        local_1d8.lLastX = (pTVar1->Item).lLastX;
        pTVar2 = (pFVar15->MouseInputs).Tail;
        local_1d8.lLastY = (pTVar1->Item).lLastY;
        local_1d8.ulExtraInformation = (pTVar1->Item).ulExtraInformation;
        (pFVar15->MouseInputs).Tail = pTVar1;
        local_e8 = 0;
        (pTVar1->Item).usFlags = 0;
        *(undefined2 *)&(pTVar1->Item).field_0x2 = 0;
        (pTVar1->Item).field1_0x4 = (tagRAWMOUSE_u_4)0x0;
        (pTVar1->Item).ulRawButtons = 0;
        (pTVar1->Item).lLastX = 0;
        local_f8 = 0;
        uStack_f0 = 0;
        (pTVar1->Item).lLastY = 0;
        (pTVar1->Item).ulExtraInformation = 0;
        ::operator_delete(pTVar2,0x20);
      }
      ProcessRawMouseInput(this,&local_1d8,&local_288);
      iVar21 = (int)uVar22;
      iVar12 = (int)uVar19;
      if (local_288.bIsAbsoluteInput == false) {
        uVar22 = (ulonglong)(uint)(iVar21 + local_288.DeltaX);
        uVar19 = (ulonglong)(uint)(iVar12 + local_288.DeltaY);
      }
      else if (this->bSimulatingHighPrecisionMouseInputForRDP == false) {
        if ((iVar21 == 0) && (iVar12 == 0)) {
          (**(code **)(**(longlong **)&this->field_0x18 + 0x70))();
        }
        else {
          (**(code **)(**(longlong **)&this->field_0x18 + 0x78))
                    (*(longlong **)&this->field_0x18,uVar22,uVar19);
          uVar22 = 0;
          uVar19 = 0;
          (**(code **)(**(longlong **)&this->field_0x18 + 0x70))();
        }
      }
      else if (local_288.bSimulateRelativeMovement != false) {
        if ((iVar21 != 0) || (iVar12 != 0)) {
          (**(code **)(**(longlong **)&this->field_0x18 + 0x78))
                    (*(longlong **)&this->field_0x18,uVar22,uVar19);
          uVar22 = 0;
          uVar19 = 0;
        }
        (**(code **)(**(longlong **)&this->field_0x18 + 0x78))
                  (*(longlong **)&this->field_0x18,local_288.DeltaX,local_288.DeltaY);
      }
      uVar9 = local_1d8._0_8_;
      uVar10 = local_1d8.field1_0x4._s_1.usButtonFlags;
      if (local_1d8.field1_0x4._s_1.usButtonFlags != 0) {
        if (((int)uVar22 != 0) || ((int)uVar19 != 0)) {
          (**(code **)(**(longlong **)&this->field_0x18 + 0x78))
                    (*(longlong **)&this->field_0x18,uVar22,uVar19);
          uVar22 = 0;
          uVar19 = 0;
        }
        pFVar27 = (FWindowsWindow *)0x0;
        FVar28.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        local_258.Object = (FWindowsWindow *)0x0;
        local_258.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        AcquireSRWLockShared((PSRWLOCK)&this->AsyncCursorRWLock);
        if (this->bAsyncCursorPosValid == 0) {
          iVar12 = 0;
          tVar20.x = 0;
          tVar20.y = 0;
        }
        else {
          tVar20 = this->AsyncCursorPos;
          iVar12 = tVar20.y;
          if (this->AsyncCursorWindowHandle != (HWND__ *)0x0) {
            pTVar16 = FindWindowByHWND(&local_178,&this->Windows,this->AsyncCursorWindowHandle);
            if (&local_258 != pTVar16) {
              local_258.Object = pTVar16->Object;
              pTVar16->Object = (FWindowsWindow *)0x0;
              SharedPointerInternals::FSharedReferencer<1>::operator=
                        (&local_258.SharedReferenceCount,&pTVar16->SharedReferenceCount);
              pFVar27 = local_258.Object;
              FVar28.ReferenceController = local_258.SharedReferenceCount.ReferenceController;
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_178.SharedReferenceCount.ReferenceController);
          }
        }
        ReleaseSRWLockShared((PSRWLOCK)&this->AsyncCursorRWLock);
        dVar25 = (double)tVar20.x;
        dVar26 = (double)iVar12;
        QueryPerformanceCounter(&local_res10);
        uVar18 = local_240;
        dVar5 = (double)local_res10.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar7;
        if (FVar28.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (FVar28.ReferenceController)->SharedReferenceCount =
               (atomic<int>)((int)(FVar28.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_228 = pFVar27;
        pTStack_220 = FVar28.ReferenceController;
        if ((uVar9 & 0x100000000) == 0) {
          if ((uVar9 & 0x200000000) != 0) {
            (**(code **)(**(longlong **)&this->field_0x18 + 0x48))();
          }
        }
        else {
          plVar3 = *(longlong **)&this->field_0x18;
          if (this->RepeatTime[local_240] <= dVar5 && dVar5 != this->RepeatTime[local_240]) {
            local_1a8 = dVar25;
            local_1a0 = dVar26;
            (**(code **)(*plVar3 + 0x30))(plVar3,&local_228,local_res18,&local_1a8);
          }
          else {
            local_1b8 = dVar25;
            local_1b0 = dVar26;
            (**(code **)(*plVar3 + 0x50))(plVar3,&local_228,local_res18,&local_1b8);
          }
          this->RepeatTime[uVar18] = dVar5 + dVar6;
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (pTStack_220);
        uVar18 = local_238;
        if (FVar28.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (FVar28.ReferenceController)->SharedReferenceCount =
               (atomic<int>)((int)(FVar28.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_218 = pFVar27;
        pTStack_210 = FVar28.ReferenceController;
        if ((uVar9 & 0x400000000) == 0) {
          if ((uVar9 & 0x800000000) != 0) {
            (**(code **)(**(longlong **)&this->field_0x18 + 0x48))();
          }
        }
        else {
          plVar3 = *(longlong **)&this->field_0x18;
          if (this->RepeatTime[local_238] <= dVar5 && dVar5 != this->RepeatTime[local_238]) {
            local_188 = dVar25;
            local_180 = (double)iVar12;
            (**(code **)(*plVar3 + 0x30))(plVar3,&local_218,local_res20,&local_188);
          }
          else {
            local_198 = dVar25;
            local_190 = (double)iVar12;
            (**(code **)(*plVar3 + 0x50))(plVar3,&local_218,local_res20,&local_198);
          }
          this->RepeatTime[uVar18] = dVar5 + dVar6;
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (pTStack_210);
        if (FVar28.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (FVar28.ReferenceController)->SharedReferenceCount =
               (atomic<int>)((int)(FVar28.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_208 = pFVar27;
        pTStack_200 = FVar28.ReferenceController;
        if ((uVar9 & 0x1000000000) == 0) {
          if ((uVar9 & 0x2000000000) != 0) {
            (**(code **)(**(longlong **)&this->field_0x18 + 0x48))();
          }
        }
        else {
          plVar3 = *(longlong **)&this->field_0x18;
          if (this->RepeatTime[1] <= dVar5 && dVar5 != this->RepeatTime[1]) {
            local_158 = dVar25;
            dStack_150 = dVar26;
            (**(code **)(*plVar3 + 0x30))(plVar3,&local_208,1,&local_158);
          }
          else {
            local_168 = dVar25;
            dStack_160 = dVar26;
            (**(code **)(*plVar3 + 0x50))(plVar3,&local_208,1,&local_168);
          }
          this->RepeatTime[1] = dVar5 + dVar6;
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (pTStack_200);
        if (FVar28.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (FVar28.ReferenceController)->SharedReferenceCount =
               (atomic<int>)((int)(FVar28.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_1f8 = pFVar27;
        pTStack_1f0 = FVar28.ReferenceController;
        if ((uVar9 & 0x4000000000) == 0) {
          if (SUB81(uVar9,4) < '\0') {
            (**(code **)(**(longlong **)&this->field_0x18 + 0x48))();
          }
        }
        else {
          plVar3 = *(longlong **)&this->field_0x18;
          if (this->RepeatTime[3] <= dVar5 && dVar5 != this->RepeatTime[3]) {
            local_138 = dVar25;
            dStack_130 = dVar26;
            (**(code **)(*plVar3 + 0x30))(plVar3,&local_1f8,3,&local_138);
          }
          else {
            local_148 = dVar25;
            dStack_140 = dVar26;
            (**(code **)(*plVar3 + 0x50))(plVar3,&local_1f8,3,&local_148);
          }
          this->RepeatTime[3] = dVar5 + dVar6;
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (pTStack_1f0);
        if (FVar28.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (FVar28.ReferenceController)->SharedReferenceCount =
               (atomic<int>)((int)(FVar28.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_1e8 = pFVar27;
        pTStack_1e0 = FVar28.ReferenceController;
        if (((ushort)uVar10 >> 8 & 1) == 0) {
          if (((ushort)uVar10 >> 9 & 1) != 0) {
            (**(code **)(**(longlong **)&this->field_0x18 + 0x48))();
          }
        }
        else {
          plVar3 = *(longlong **)&this->field_0x18;
          if (this->RepeatTime[4] <= dVar5 && dVar5 != this->RepeatTime[4]) {
            local_118 = dVar25;
            dStack_110 = dVar26;
            (**(code **)(*plVar3 + 0x30))(plVar3,&local_1e8,4,&local_118);
            this->RepeatTime[4] = dVar5 + dVar6;
          }
          else {
            local_128 = dVar25;
            dStack_120 = dVar26;
            (**(code **)(*plVar3 + 0x50))(plVar3,&local_1e8,4,&local_128);
            this->RepeatTime[4] = dVar5 + dVar6;
          }
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (pTStack_1e0);
        if (((ushort)uVar10 >> 10 & 1) != 0) {
          local_108 = dVar25;
          dStack_100 = dVar26;
          (**(code **)(**(longlong **)&this->field_0x18 + 0x60))
                    (*(longlong **)&this->field_0x18,
                     (float)(int)(short)local_1d8.field1_0x4._s_1.usButtonData * fVar8,&local_108);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FVar28.ReferenceController);
        uVar23 = local_268;
      }
      uVar23 = uVar23 - 1;
    } while (uVar23 != 0);
    local_268 = uVar23;
    if (((int)uVar22 != 0) || ((int)uVar19 != 0)) {
      (**(code **)(**(longlong **)&this->field_0x18 + 0x78))
                (*(longlong **)&this->field_0x18,uVar22,uVar19);
    }
  }
  FInputDeviceScope::~FInputDeviceScope(local_e0);
  if (bVar24) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// PumpMessages @ 1423fc9e0

void __thiscall FWindowsApplication::PumpMessages(FWindowsApplication *this,float param_1)

{
  int iVar1;
  tagMSG local_38;
  
  iVar1 = PeekMessageW(&local_38,(HWND)0x0,0,0,1);
  while (iVar1 != 0) {
    TranslateMessage(&local_38);
    DispatchMessageW(&local_38);
    iVar1 = PeekMessageW(&local_38,(HWND)0x0,0,0,1);
  }
  PostPumpMessages(this);
  return;
}

// QueryConnectedMice @ 1423fcc20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FWindowsApplication::QueryConnectedMice(FWindowsApplication *this)

{
  code *pcVar1;
  bool bVar2;
  UINT UVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  FScriptContainerElement *_Dst;
  size_t sVar7;
  wchar_t *pwVar8;
  FScriptContainerElement *_Str;
  ForAnyElementType FVar9;
  PRAWINPUTDEVICELIST ptVar10;
  ForAnyElementType FVar11;
  int iVar12;
  undefined1 auStackY_1c8 [32];
  undefined1 local_198 [4];
  uint local_194;
  uint local_190 [2];
  ForAnyElementType local_188;
  undefined8 local_180;
  FString local_178;
  FWindowsApplication *local_168;
  FScriptContainerElement local_158 [256];
  ForAnyElementType local_58;
  FScriptContainerElement *local_50;
  int local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  iVar12 = 0;
  local_188.Data = (FScriptContainerElement *)0x0;
  local_180 = 0;
  local_190[0] = 0;
  local_168 = this;
  GetRawInputDeviceList((PRAWINPUTDEVICELIST)0x0,local_190,0x10);
  if (local_190[0] == 0) {
    bVar2 = false;
  }
  else {
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,local_190[0],&local_188,(int *)&local_180,(int *)((longlong)&local_180 + 4));
    GetRawInputDeviceList((PRAWINPUTDEVICELIST)local_188.Data,local_190,0x10);
    iVar5 = (int)local_180;
    uVar6 = (ulonglong)(int)local_180;
    ptVar10 = (PRAWINPUTDEVICELIST)(local_188.Data + uVar6 * 0x10);
    FVar11.Data = local_188.Data;
    while( true ) {
      FVar9.Data = (FScriptContainerElement *)0x0;
      if ((int)uVar6 != iVar5) {
        local_198[0] = 0;
        `TCheckedPointerIterator<tagRAWINPUTDEVICELIST,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_198);
      }
      if ((PRAWINPUTDEVICELIST)FVar11.Data == ptVar10) break;
      local_194 = 0;
      _Str = FVar9.Data;
      if ((((PRAWINPUTDEVICELIST)FVar11.Data)->dwType == 0) &&
         (UVar3 = GetRawInputDeviceInfoA
                            (((PRAWINPUTDEVICELIST)FVar11.Data)->hDevice,0x20000007,(LPVOID)0x0,
                             &local_194), UVar3 != 0xffffffff)) {
        uVar4 = local_194 + 1;
        _Dst = operator_new__((ulonglong)uVar4);
        if (_Dst != (FScriptContainerElement *)0x0) {
          memset(_Dst,0,(ulonglong)uVar4);
          _Str = _Dst;
        }
        operator_delete__((void *)0x0);
        operator_delete__((void *)0x0);
        UVar3 = GetRawInputDeviceInfoA
                          (((PRAWINPUTDEVICELIST)FVar11.Data)->hDevice,0x20000007,_Str,&local_194);
        if (UVar3 != 0xffffffff) {
          local_58.Data = (FScriptContainerElement *)0x0;
          _Str[local_194] = (FScriptContainerElement)0x0;
          if (_Str == (FScriptContainerElement *)0x0) {
            local_50 = (FScriptContainerElement *)0x0;
            local_48 = 0;
          }
          else {
            sVar7 = strlen((char *)_Str);
            local_48 = (int)sVar7;
            uVar4 = local_48 + 1;
            if (0x80 < uVar4) {
              TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                        (&local_58,0,uVar4,2);
              FVar9.Data = local_58.Data;
            }
            local_50 = local_158;
            if (FVar9.Data != (FScriptContainerElement *)0x0) {
              local_50 = FVar9.Data;
            }
            pwVar8 = FGenericPlatformString::Convert<char,wchar_t>
                               ((wchar_t *)local_50,uVar4,(char *)_Str,uVar4);
            if ((pwVar8 == (wchar_t *)0x0) &&
               (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Result",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringConv.h"
                                   ,0x25,L""), bVar2)) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
          }
          ::FString::FString(&local_178,(wchar_t *)local_50);
          if (local_58.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_58.Data);
          }
          ::FString::ReplaceInline(&local_178,L"#",L"\\",CaseSensitive);
          bVar2 = ::FString::StartsWith(&local_178,L"\\??\\ROOT\\RDP_MOU\\",0x11,IgnoreCase);
          if ((!bVar2) &&
             (bVar2 = ::FString::StartsWith(&local_178,L"\\\\?\\ROOT\\RDP_MOU\\",0x11,IgnoreCase),
             !bVar2)) {
            iVar12 = iVar12 + 1;
          }
          if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_178.Data.AllocatorInstance.Data);
          }
        }
      }
      operator_delete__(_Str);
      uVar6 = local_180 & 0xffffffff;
      FVar11.Data = FVar11.Data + 0x10;
    }
    bVar2 = false;
    if (iVar12 == 0) {
      iVar5 = GetSystemMetrics(0x1000);
      if (iVar5 != 0) {
        iVar12 = 1;
      }
      bVar2 = iVar12 == 0;
    }
    bVar2 = !bVar2 && -1 < iVar12;
    this = local_168;
  }
  this->bIsMouseAttached = bVar2;
  if ((PRAWINPUTDEVICELIST)local_188.Data != (PRAWINPUTDEVICELIST)0x0) {
    FMemory::Free(local_188.Data);
  }
  return;
}

// RegisterClassW @ 1423fe0a0

bool __cdecl FWindowsApplication::RegisterClassW(HINSTANCE__ *param_1,HICON__ *param_2)

{
  ATOM AVar1;
  FThreadHeartBeat *pFVar2;
  WNDCLASSW local_58;
  
  local_58.style = 8;
  local_58._4_4_ = 0;
  local_58.lpfnWndProc = AppWndProc;
  local_58.cbClsExtra = 0;
  local_58.cbWndExtra = 0;
  local_58.hCursor = (HCURSOR)0x0;
  local_58.hbrBackground = (HBRUSH)0x0;
  local_58.lpszMenuName = (LPCWSTR)0x0;
  local_58.lpszClassName = L"UnrealWindow";
  local_58.hInstance = (HINSTANCE)param_1;
  local_58.hIcon = (HICON)param_2;
  AVar1 = ::RegisterClassW(&local_58);
  if (AVar1 != 0) {
    return true;
  }
  pFVar2 = FThreadHeartBeat::GetNoInit();
  if (pFVar2 == (FThreadHeartBeat *)0x0) {
    MessageBoxW((HWND)0x0,L"Window Registration Failed!",L"Error!",0x30);
  }
  else {
    FThreadHeartBeat::SuspendHeartBeat(pFVar2,false);
    MessageBoxW((HWND)0x0,L"Window Registration Failed!",L"Error!",0x30);
    pFVar2 = FThreadHeartBeat::GetNoInit();
    if (pFVar2 != (FThreadHeartBeat *)0x0) {
      FThreadHeartBeat::ResumeHeartBeat(pFVar2,false);
      return false;
    }
  }
  return false;
}

// RegisterHighPrecisionMouseMode @ 1423fed30

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FWindowsApplication::RegisterHighPrecisionMouseMode(FWindowsApplication *this)

{
  code *pcVar1;
  bool bVar2;
  FWindowsRawInputRunnable *pFVar3;
  RAWINPUTDEVICE local_18;
  
  if (UE::WindowsApplication::RawInputThread::bUseWorkerThreadForRawInput) {
    bVar2 = FGenericPlatformProcess::SupportsMultithreading();
    if (bVar2) {
      bVar2 = IsInGameThread();
      if (!bVar2) {
        bVar2 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_8717070949721045903>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ApplicationCore\\Private\\Windows\\WindowsApplication.cpp"
                           ,0x471,"IsInGameThread()");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      pFVar3 = UE::WindowsApplication::RawInputThread::FWindowsRawInputRunnable::GetInstance();
      SendMessageW((HWND)pFVar3->WindowHandle,0x8001,0,0);
      this->bCachedUseWorkerThreadForRawInput = true;
      return;
    }
  }
  local_18.hwndTarget = (HWND)this->HighPrecisionMouseInputWindowHandle;
  local_18.usUsagePage = 1;
  local_18.usUsage = 2;
  local_18.dwFlags = 0;
  RegisterRawInputDevices(&local_18,1,0x10);
  if (5 < (byte)LogWindowsDesktop._0_1_) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogWindowsDesktop);
  }
  this->bCachedUseWorkerThreadForRawInput = false;
  return;
}

// RemoveForceMaxTouchpadSensitivity @ 142400a40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FWindowsApplication::RemoveForceMaxTouchpadSensitivity(FWindowsApplication *this)

{
  code *pcVar1;
  atomic<UE::WindowsApplication::TouchpadSensitivity::TOUCHPAD_SENSITIVITY_LEVEL> aVar2;
  bool bVar3;
  BOOL BVar4;
  undefined1 auStack_48 [32];
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  ulonglong uStack_10;
  
  uStack_10 = __security_cookie.value ^ (ulonglong)auStack_48;
  if (5 < (byte)UE::WindowsApplication::TouchpadSensitivity::LogWindowsTouchpad._0_1_) {
    UE::Logging::Private::BasicLog<6>
              (&::LOG_Static,
               (FLogCategoryBase *)&UE::WindowsApplication::TouchpadSensitivity::LogWindowsTouchpad)
    ;
  }
  bVar3 = IsInGameThread();
  if ((!bVar3) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ApplicationCore\\Private\\Windows\\WindowsApplication.cpp"
                         ,0x265,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if ((UE::WindowsApplication::TouchpadSensitivity::CachedForceMaxTouchpadSensitivityMode ==
       NotCached) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("CachedForceMaxTouchpadSensitivityMode != EForceMaxTouchpadSensitivityMode::NotCached"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ApplicationCore\\Private\\Windows\\WindowsApplication.cpp"
                         ,0xe5,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (6 < (byte)UE::WindowsApplication::TouchpadSensitivity::LogWindowsTouchpad._0_1_) {
    UE::Logging::Private::BasicLog<7>
              (&::LOG_Static,
               (FLogCategoryBase *)&UE::WindowsApplication::TouchpadSensitivity::LogWindowsTouchpad)
    ;
  }
  aVar2 = UE::WindowsApplication::TouchpadSensitivity::ForceMaxTouchpadSensitivity_SavedSensitivity;
  if (UE::WindowsApplication::TouchpadSensitivity::CachedForceMaxTouchpadSensitivityMode ==
      NotCached) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ApplicationCore\\Private\\Windows\\WindowsApplication.cpp"
                       ,0x26a,L"");
    if (bVar3) {
code_r0x000142400cdf:
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else if (UE::WindowsApplication::TouchpadSensitivity::CachedForceMaxTouchpadSensitivityMode ==
           DoNothing) {
    if ((byte)UE::WindowsApplication::TouchpadSensitivity::LogWindowsTouchpad._0_1_ < 6) {
      return;
    }
    UE::Logging::Private::BasicLog<6>
              (&::LOG_Static,
               (FLogCategoryBase *)&UE::WindowsApplication::TouchpadSensitivity::LogWindowsTouchpad)
    ;
  }
  else if (UE::WindowsApplication::TouchpadSensitivity::CachedForceMaxTouchpadSensitivityMode ==
           SetTouchpadParameters) {
    if (3 < (int)UE::WindowsApplication::TouchpadSensitivity::
                 ForceMaxTouchpadSensitivity_SavedSensitivity - 1U) {
      return;
    }
    if (5 < (byte)UE::WindowsApplication::TouchpadSensitivity::LogWindowsTouchpad._0_1_) {
      UE::Logging::Private::BasicLog<6>
                (&::LOG_Static,
                 (FLogCategoryBase *)
                 &UE::WindowsApplication::TouchpadSensitivity::LogWindowsTouchpad);
    }
    uStack_18 = 0;
    uStack_28 = 0;
    uStack_20 = 0;
    BVar4 = SystemParametersInfoW(0xae,0x18,&uStack_28,0);
    if (BVar4 == 0) {
      if ((byte)UE::WindowsApplication::TouchpadSensitivity::LogWindowsTouchpad._0_1_ < 3) {
        return;
      }
      UE::Logging::Private::BasicLog<3>
                (&::LOG_Static,
                 (FLogCategoryBase *)
                 &UE::WindowsApplication::TouchpadSensitivity::LogWindowsTouchpad);
      return;
    }
    uStack_20 = CONCAT44(uStack_20._4_4_,aVar2);
    BVar4 = SystemParametersInfoW(0xaf,0x18,&uStack_28,0);
    if (BVar4 == 0) {
      if ((byte)UE::WindowsApplication::TouchpadSensitivity::LogWindowsTouchpad._0_1_ < 3) {
        return;
      }
      UE::Logging::Private::BasicLog<3>
                (&::LOG_Static,
                 (FLogCategoryBase *)
                 &UE::WindowsApplication::TouchpadSensitivity::LogWindowsTouchpad);
      return;
    }
    UE::WindowsApplication::TouchpadSensitivity::ClearSavedSensitivityFromRegistry();
    if (4 < (byte)UE::WindowsApplication::TouchpadSensitivity::LogWindowsTouchpad._0_1_) {
      UE::Logging::Private::BasicLog<5>
                (&::LOG_Static,
                 (FLogCategoryBase *)
                 &UE::WindowsApplication::TouchpadSensitivity::LogWindowsTouchpad);
    }
  }
  else if (UE::WindowsApplication::TouchpadSensitivity::CachedForceMaxTouchpadSensitivityMode ==
           SetMaxTouchpadSensitivity) {
    bVar3 = UE::WindowsApplication::TouchpadSensitivity::SetMaxTouchpadSensitivity(false);
    if (bVar3) {
      if (4 < (byte)UE::WindowsApplication::TouchpadSensitivity::LogWindowsTouchpad._0_1_) {
        UE::Logging::Private::BasicLog<5>
                  (&::LOG_Static,
                   (FLogCategoryBase *)
                   &UE::WindowsApplication::TouchpadSensitivity::LogWindowsTouchpad);
      }
    }
    else if (2 < (byte)UE::WindowsApplication::TouchpadSensitivity::LogWindowsTouchpad._0_1_) {
      UE::Logging::Private::BasicLog<3>
                ((FStaticBasicLogRecord *)&PTR_u_RemoveForceMaxT_1508dae30,
                 (FLogCategoryBase *)
                 &UE::WindowsApplication::TouchpadSensitivity::LogWindowsTouchpad);
    }
  }
  else {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ApplicationCore\\Private\\Windows\\WindowsApplication.cpp"
                       ,0x2ad,L"");
    if (bVar3) goto code_r0x000142400cdf;
  }
  if (5 < (byte)UE::WindowsApplication::TouchpadSensitivity::LogWindowsTouchpad._0_1_) {
    UE::Logging::Private::BasicLog<6>
              (&::LOG_Static,
               (FLogCategoryBase *)&UE::WindowsApplication::TouchpadSensitivity::LogWindowsTouchpad)
    ;
  }
  return;
}

// RemoveLowLevelMouseFilter @ 142400ec0

void __thiscall FWindowsApplication::RemoveLowLevelMouseFilter(FWindowsApplication *this)

{
  if (this->bLowLevelMouseFilterIsApplied != false) {
    UnhookWindowsHookEx((HHOOK)this->LowLevelMouseFilterHook);
    this->bLowLevelMouseFilterIsApplied = false;
  }
  return;
}

// RemoveMessageHandler @ 142400f00

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FWindowsApplication::RemoveMessageHandler(FWindowsApplication *this,IWindowsMessageHandler *param_1)

{
  IWindowsMessageHandler *local_res10 [3];
  
  local_res10[0] = param_1;
  TArray<IWindowsMessageHandler_*,TSizedDefaultAllocator<32>_>::RemoveSwap
            (&WindowsApplication->MessageHandlers,local_res10,Default);
  return;
}

// ResetLightColor @ 142401690

void __thiscall FWindowsApplication::ResetLightColor(FWindowsApplication *this,int param_1)

{
  return;
}

// SetAccessibleMessageHandler @ 142403b50

void __thiscall
FWindowsApplication::SetAccessibleMessageHandler
          (FWindowsApplication *this,TSharedRef<FGenericAccessibleMessageHandler,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FGenericAccessibleMessageHandler *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  pFVar2 = param_1->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = *(TReferenceControllerBase<1> **)&this->field_0x30;
  *(FGenericAccessibleMessageHandler **)&this->field_0x28 = pFVar2;
  *(TReferenceControllerBase<1> **)&this->field_0x30 = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  FWindowsUIAManager::OnAccessibleMessageHandlerChanged((this->UIAManager).Ptr);
  return;
}

// SetCapture @ 142403e60

void __thiscall
FWindowsApplication::SetCapture(FWindowsApplication *this,TSharedPtr<FGenericWindow,1> *param_1)

{
  HWND hWnd;
  
  if (param_1->Object == (FGenericWindow *)0x0) {
    hWnd = (HWND)0x0;
  }
  else {
    hWnd = (HWND)(**(code **)(param_1->Object->_padding_ + 0xc0))();
  }
  if (hWnd != (HWND)this->CaptureWindowHandle) {
    if (hWnd != (HWND)0x0) {
      ::SetCapture(hWnd);
      this->CaptureWindowHandle = (HWND__ *)hWnd;
      return;
    }
    ReleaseCapture();
  }
  this->CaptureWindowHandle = (HWND__ *)hWnd;
  return;
}

// SetDeviceProperty @ 1424041e0

void __thiscall
FWindowsApplication::SetDeviceProperty
          (FWindowsApplication *this,int param_1,FInputDeviceProperty *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  longlong *plVar4;
  
  if ((!FApp::bUseVRFocus) || (FApp::bHasVRFocus)) {
    for (iVar3 = 0; (-1 < iVar3 && (iVar3 < *(int *)&this->field_0xb8)); iVar3 = iVar3 + 1) {
      if ((iVar3 < 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      plVar4 = (longlong *)((longlong)iVar3 * 0x10 + *(longlong *)&this->field_0xb0);
      if ((*plVar4 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      plVar4 = (longlong *)*plVar4;
      (**(code **)(*plVar4 + 0x50))(plVar4,param_1,param_2);
    }
  }
  return;
}

// SetForceFeedbackChannelValue @ 1424044e0

void __thiscall
FWindowsApplication::SetForceFeedbackChannelValue
          (FWindowsApplication *this,int param_1,FForceFeedbackChannelType param_2,float param_3)

{
  longlong lVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  
  if ((!FApp::bUseVRFocus) || (FApp::bHasVRFocus)) {
    for (iVar5 = 0; (-1 < iVar5 && (iVar5 < *(int *)&this->field_0xb8)); iVar5 = iVar5 + 1) {
      if ((iVar5 < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      lVar1 = *(longlong *)&this->field_0xb0;
      if ((*(longlong *)(lVar1 + (longlong)iVar5 * 0x10) == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      plVar2 = *(longlong **)(lVar1 + (longlong)iVar5 * 0x10);
      (**(code **)(*plVar2 + 0x28))(plVar2,param_1,param_2,param_3);
    }
  }
  return;
}

// SetForceFeedbackChannelValues @ 142404790

void __thiscall
FWindowsApplication::SetForceFeedbackChannelValues
          (FWindowsApplication *this,int param_1,FForceFeedbackValues *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  
  if ((!FApp::bUseVRFocus) || (FApp::bHasVRFocus)) {
    for (uVar7 = 0; (-1 < (int)uVar7 && ((int)uVar7 < *(int *)&this->field_0xb8)); uVar7 = uVar7 + 1
        ) {
      if (((int)uVar7 < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      lVar1 = *(longlong *)&this->field_0xb0;
      lVar8 = (longlong)(int)uVar7;
      if ((*(longlong *)(lVar1 + lVar8 * 0x10) == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      cVar5 = (**(code **)(**(longlong **)(lVar1 + lVar8 * 0x10) + 0x60))();
      if (cVar5 != '\0') {
        uVar6 = 0;
        if ((int)uVar7 < *(int *)&this->field_0xb8) {
          uVar6 = ~uVar7 >> 0x1f;
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
        lVar1 = *(longlong *)&this->field_0xb0;
        if ((*(longlong *)(lVar1 + lVar8 * 0x10) == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        plVar2 = *(longlong **)(lVar1 + lVar8 * 0x10);
        (**(code **)(*plVar2 + 0x30))(plVar2,param_1,param_2);
      }
    }
  }
  return;
}

// SetHapticFeedbackValues @ 142404c30

void __thiscall
FWindowsApplication::SetHapticFeedbackValues
          (FWindowsApplication *this,int param_1,int param_2,FHapticFeedbackValues *param_3)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  int iVar4;
  longlong *plVar5;
  
  if ((!FApp::bUseVRFocus) || (FApp::bHasVRFocus)) {
    for (iVar4 = 0; (-1 < iVar4 && (iVar4 < *(int *)&this->field_0xb8)); iVar4 = iVar4 + 1) {
      if ((iVar4 < 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      plVar5 = (longlong *)((longlong)iVar4 * 0x10 + *(longlong *)&this->field_0xb0);
      if ((*plVar5 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      puVar3 = (undefined8 *)(**(code **)(*(longlong *)*plVar5 + 0x58))();
      if (puVar3 != (undefined8 *)0x0) {
        (**(code **)*puVar3)(puVar3,param_1,param_2,param_3);
      }
    }
  }
  return;
}

// SetHighPrecisionMouseMode @ 142404f70

void __thiscall
FWindowsApplication::SetHighPrecisionMouseMode
          (FWindowsApplication *this,bool param_1,TSharedPtr<FGenericWindow,1> *param_2)

{
  bool bVar1;
  HWND__ *pHVar2;
  TIntPoint<int>_u_0 local_res8;
  
  if ((ForceRawInputSimulation != 0) ||
     ((EnableRawInputSimulationOverRDP != 0 &&
      (bVar1 = FWindowsPlatformMisc::IsRemoteSession(), bVar1)))) {
    if (param_1) {
      this->bUsingHighPrecisionMouseInput = true;
      this->bSimulatingHighPrecisionMouseInputForRDP = true;
      GetCursorPos((LPPOINT)&local_res8._s_0);
      GetClipCursor((LPRECT)&this->ClipCursorRect);
      (this->LastCursorPoint).field0_0x0 = local_res8;
      (this->LastCursorPointPreWrap).field0_0x0._s_0 =
           (TIntPoint<int>_u_0_s_0)UE::Math::TIntPoint<int>::ZeroValue.field0_0x0;
      this->NumPreWrapMsgsToRespect = 0;
      this->bUsingHighPrecisionMouseInput = true;
      goto LAB_14240500b;
    }
    this->bSimulatingHighPrecisionMouseInputForRDP = false;
    this->bUsingHighPrecisionMouseInput = false;
LAB_142405033:
    this->HighPrecisionMouseInputWindowHandle = (HWND__ *)0x0;
    if (param_1) goto LAB_142405043;
  }
  else {
    this->bUsingHighPrecisionMouseInput = param_1;
    if (!param_1) goto LAB_142405033;
LAB_14240500b:
    if (param_2->Object == (FGenericWindow *)0x0) goto LAB_142405033;
    pHVar2 = (HWND__ *)(**(code **)(param_2->Object->_padding_ + 0xc0))();
    this->HighPrecisionMouseInputWindowHandle = pHVar2;
LAB_142405043:
    if ((UE::WindowsApplication::RawInputThread::bUseWorkerThreadForRawInput == false) ||
       (bVar1 = FGenericPlatformProcess::SupportsMultithreading(), !bVar1)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (this->bCachedUseWorkerThreadForRawInput == bVar1) goto LAB_142405070;
  }
  UnregisterHighPrecisionMouseMode(this);
  if (!param_1) {
    return;
  }
LAB_142405070:
  RegisterHighPrecisionMouseMode(this);
  return;
}

// SetLightColor @ 1424050b0

void __thiscall
FWindowsApplication::SetLightColor(FWindowsApplication *this,int param_1,FColor param_2)

{
  return;
}

// SetMessageHandler @ 1424051a0

void __thiscall
FWindowsApplication::SetMessageHandler
          (FWindowsApplication *this,TSharedRef<FGenericApplicationMessageHandler,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FGenericApplicationMessageHandler *pFVar2;
  longlong *plVar3;
  code *pcVar4;
  TReferenceControllerBase<1> *pTVar5;
  bool bVar6;
  IModularFeatures *this_00;
  int iVar7;
  FScriptContainerElement *pFVar8;
  TArray<IInputDeviceModule_*,TSizedDefaultAllocator<32>_> local_18;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  pFVar2 = param_1->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar5 = *(TReferenceControllerBase<1> **)&this->field_0x20;
  *(FGenericApplicationMessageHandler **)&this->field_0x18 = pFVar2;
  *(TReferenceControllerBase<1> **)&this->field_0x20 = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  this_00 = IModularFeatures::Get();
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName___cdecl_IInputDeviceModule::GetModularFeatureName(void)'::__l2::
      _thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName___cdecl_IInputDeviceModule::GetModularFeatureName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName___cdecl_IInputDeviceModule::GetModularFeatureName(void)'::__l2::
        _thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_static_class_FName___cdecl_IInputDeviceModule::GetModularFeatureName(void)'
                      ::__l2::FeatureName,L"InputDevice");
      _Init_thread_footer(&`public:_static_class_FName___cdecl_IInputDeviceModule::GetModularFeatureName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  IModularFeatures::GetModularFeatureImplementations<IInputDeviceModule>
            (this_00,&local_18,
             `public:_static_class_FName___cdecl_IInputDeviceModule::GetModularFeatureName(void)'::
             __l2::FeatureName);
  for (iVar7 = 0; (-1 < iVar7 && (iVar7 < (this->ExternalInputDevices).ArrayNum)); iVar7 = iVar7 + 1
      ) {
    if (iVar7 < 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pFVar8 = (this->ExternalInputDevices).AllocatorInstance.Data + (longlong)iVar7 * 0x10;
    if (*(longlong *)pFVar8 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    plVar3 = *(longlong **)pFVar8;
    (**(code **)(*plVar3 + 0x18))(plVar3,param_1);
  }
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// ShutDownAfterError @ 142407640

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FWindowsApplication::ShutDownAfterError(FWindowsApplication *this)

{
  code *pcVar1;
  atomic<UE::WindowsApplication::TouchpadSensitivity::TOUCHPAD_SENSITIVITY_LEVEL> aVar2;
  bool bVar3;
  EForceMaxTouchpadSensitivityMode EVar4;
  BOOL BVar5;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  FSharedReferencer<1> FStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_58;
  SystemParametersInfoW(0x3b,8,&this->StartupStickyKeys,0);
  SystemParametersInfoW(0x35,8,&this->StartupToggleKeys,0);
  SystemParametersInfoW(0x33,0x18,&this->StartupFilterKeys,0);
  FConfigCacheIni::EmptySection(GConfig,L"WindowsApplication.Accessibility",&GEngineIni);
  local_38 = 0;
  FStack_30.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->TaskbarList != (TSharedPtr<FTaskbarList,1> *)&local_38) {
    (this->TaskbarList).Object = (FTaskbarList *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->TaskbarList).SharedReferenceCount,&FStack_30);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_30.ReferenceController);
  if (this->bLowLevelMouseFilterIsApplied != false) {
    UnhookWindowsHookEx((HHOOK)this->LowLevelMouseFilterHook);
    this->bLowLevelMouseFilterIsApplied = false;
  }
  if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
      (IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  (**(code **)((longlong)*IConsoleManager::Singleton + 0xb0))
            (IConsoleManager::Singleton,L"WindowsApplication.ApplyLowLevelMouseFilter",1);
  if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
      (IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  (**(code **)((longlong)*IConsoleManager::Singleton + 0xb0))
            (IConsoleManager::Singleton,L"WindowsApplication.RemoveLowLevelMouseFilter",1);
  if ((UE::WindowsApplication::TouchpadSensitivity::bForceMaxTouchpadSensitivity != false) &&
     (EVar4 = UE::WindowsApplication::TouchpadSensitivity::GetForceMaxTouchpadSensitivityMode(),
     EVar4 == SetTouchpadParameters)) {
    if (5 < (byte)UE::WindowsApplication::TouchpadSensitivity::LogWindowsTouchpad._0_1_) {
      UE::Logging::Private::BasicLog<6>
                (&::LOG_Static,
                 (FLogCategoryBase *)
                 &UE::WindowsApplication::TouchpadSensitivity::LogWindowsTouchpad);
    }
    if (UE::WindowsApplication::TouchpadSensitivity::bForceMaxTouchpadSensitivity != false) {
      if (5 < (byte)UE::WindowsApplication::TouchpadSensitivity::LogWindowsTouchpad._0_1_) {
        UE::Logging::Private::BasicLog<6>
                  (&::LOG_Static,
                   (FLogCategoryBase *)
                   &UE::WindowsApplication::TouchpadSensitivity::LogWindowsTouchpad);
      }
      aVar2 = UE::WindowsApplication::TouchpadSensitivity::
              ForceMaxTouchpadSensitivity_SavedSensitivity;
      if (3 < (int)UE::WindowsApplication::TouchpadSensitivity::
                   ForceMaxTouchpadSensitivity_SavedSensitivity - 1U) {
        return;
      }
      if (5 < (byte)UE::WindowsApplication::TouchpadSensitivity::LogWindowsTouchpad._0_1_) {
        UE::Logging::Private::BasicLog<6>
                  (&::LOG_Static,
                   (FLogCategoryBase *)
                   &UE::WindowsApplication::TouchpadSensitivity::LogWindowsTouchpad);
      }
      local_18 = 0;
      local_28 = 0;
      uStack_20 = 0;
      BVar5 = SystemParametersInfoW(0xae,0x18,&local_28,0);
      if (BVar5 == 0) {
        if ((byte)UE::WindowsApplication::TouchpadSensitivity::LogWindowsTouchpad._0_1_ < 3) {
          return;
        }
        UE::Logging::Private::BasicLog<3>
                  (&::LOG_Static,
                   (FLogCategoryBase *)
                   &UE::WindowsApplication::TouchpadSensitivity::LogWindowsTouchpad);
        return;
      }
      uStack_20 = CONCAT44(uStack_20._4_4_,aVar2);
      BVar5 = SystemParametersInfoW(0xaf,0x18,&local_28,0);
      if (BVar5 == 0) {
        if ((byte)UE::WindowsApplication::TouchpadSensitivity::LogWindowsTouchpad._0_1_ < 3) {
          return;
        }
        UE::Logging::Private::BasicLog<3>
                  (&::LOG_Static,
                   (FLogCategoryBase *)
                   &UE::WindowsApplication::TouchpadSensitivity::LogWindowsTouchpad);
        return;
      }
      if (4 < (byte)UE::WindowsApplication::TouchpadSensitivity::LogWindowsTouchpad._0_1_) {
        UE::Logging::Private::BasicLog<5>
                  (&::LOG_Static,
                   (FLogCategoryBase *)
                   &UE::WindowsApplication::TouchpadSensitivity::LogWindowsTouchpad);
      }
    }
    if (5 < (byte)UE::WindowsApplication::TouchpadSensitivity::LogWindowsTouchpad._0_1_) {
      UE::Logging::Private::BasicLog<6>
                (&::LOG_Static,
                 (FLogCategoryBase *)
                 &UE::WindowsApplication::TouchpadSensitivity::LogWindowsTouchpad);
    }
  }
  return;
}

// StaticForceUpdateAsyncCursor @ 142408370

void __cdecl FWindowsApplication::StaticForceUpdateAsyncCursor(void)

{
  FWindowsApplication *pFVar1;
  BOOL BVar2;
  HWND pHVar3;
  POINT local_res8;
  
  pFVar1 = WindowsApplication;
  if (WindowsApplication != (FWindowsApplication *)0x0) {
    BVar2 = GetCursorPos(&local_res8);
    if (BVar2 == 0) {
      pHVar3 = (HWND)0x0;
    }
    else {
      pHVar3 = WindowFromPoint(local_res8);
    }
    AcquireSRWLockExclusive((PSRWLOCK)&pFVar1->AsyncCursorRWLock);
    (pFVar1->AsyncCursorPos).x = local_res8.x;
    (pFVar1->AsyncCursorPos).y = local_res8.y;
    pFVar1->bAsyncCursorPosValid = BVar2;
    pFVar1->AsyncCursorWindowHandle = (HWND__ *)pHVar3;
    ReleaseSRWLockExclusive((PSRWLOCK)&pFVar1->AsyncCursorRWLock);
  }
  return;
}

// StaticGetCursorPosition @ 142408410

bool __cdecl FWindowsApplication::StaticGetCursorPosition(tagPOINT *param_1)

{
  FPlatformRWLock *SRWLock;
  int iVar1;
  FWindowsApplication *pFVar2;
  
  pFVar2 = WindowsApplication;
  if (WindowsApplication != (FWindowsApplication *)0x0) {
    SRWLock = &WindowsApplication->AsyncCursorRWLock;
    AcquireSRWLockShared((PSRWLOCK)SRWLock);
    *param_1 = pFVar2->AsyncCursorPos;
    iVar1 = pFVar2->bAsyncCursorPosValid;
    ReleaseSRWLockShared((PSRWLOCK)SRWLock);
    return iVar1 != 0;
  }
  return false;
}

// StaticPostPumpMessages @ 1424086e0

void __cdecl FWindowsApplication::StaticPostPumpMessages(void)

{
  FWindowsApplication *this;
  bool bVar1;
  
  this = WindowsApplication;
  if (WindowsApplication == (FWindowsApplication *)0x0) {
    return;
  }
  if (WindowsApplication->bUsingHighPrecisionMouseInput == false) goto LAB_1423f2b36;
  if (UE::WindowsApplication::RawInputThread::bUseWorkerThreadForRawInput) {
    bVar1 = FGenericPlatformProcess::SupportsMultithreading();
    if (!bVar1) goto LAB_1423f2b1c;
    bVar1 = true;
  }
  else {
LAB_1423f2b1c:
    bVar1 = false;
  }
  if (this->bCachedUseWorkerThreadForRawInput != bVar1) {
    UnregisterHighPrecisionMouseMode(this);
    RegisterHighPrecisionMouseMode(this);
  }
LAB_1423f2b36:
  ProcessWorkerInputs(WindowsApplication);
  CacheCursorInfo(WindowsApplication);
  return;
}

// SupportsForceMaxTouchpadSensitivity @ 142408820

bool __thiscall FWindowsApplication::SupportsForceMaxTouchpadSensitivity(FWindowsApplication *this)

{
  EForceMaxTouchpadSensitivityMode EVar1;
  
  UE::WindowsApplication::TouchpadSensitivity::CacheForceMaxTouchpadSensitivityMode();
  EVar1 = UE::WindowsApplication::TouchpadSensitivity::GetForceMaxTouchpadSensitivityMode();
  return EVar1 != DoNothing;
}

// UnregisterHighPrecisionMouseMode @ 14240b860

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FWindowsApplication::UnregisterHighPrecisionMouseMode(FWindowsApplication *this)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FWindowsRawInputRunnable *pFVar4;
  RAWINPUTDEVICE local_48;
  tagMSG local_38;
  
  if (this->bCachedUseWorkerThreadForRawInput == false) {
    local_48.usUsagePage = 1;
    local_48.usUsage = 2;
    local_48.dwFlags = 1;
    local_48.hwndTarget = (HWND)0x0;
    RegisterRawInputDevices(&local_48,1,0x10);
    if (5 < (byte)LogWindowsDesktop._0_1_) {
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogWindowsDesktop);
    }
    iVar3 = PeekMessageW(&local_38,(HWND)0x0,0,0,1);
    while (iVar3 != 0) {
      TranslateMessage(&local_38);
      DispatchMessageW(&local_38);
      iVar3 = PeekMessageW(&local_38,(HWND)0x0,0,0,1);
    }
    return;
  }
  bVar2 = IsInGameThread();
  if ((!bVar2) &&
     (bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_8717070949721045896>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ApplicationCore\\Private\\Windows\\WindowsApplication.cpp"
                         ,0x478,"IsInGameThread()"), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pFVar4 = UE::WindowsApplication::RawInputThread::FWindowsRawInputRunnable::GetInstance();
  SendMessageW((HWND)pFVar4->WindowHandle,0x8002,0,0);
  WaitForSingleObject(UE::WindowsApplication::RawInputThread::FWindowsRawInputRunnable::
                      UnregisterEvent,0xffffffff);
  ProcessWorkerInputs(this);
  return;
}

// UpdateAllModifierKeyStates @ 14240ba60

void __thiscall FWindowsApplication::UpdateAllModifierKeyStates(FWindowsApplication *this)

{
  SHORT SVar1;
  
  SVar1 = GetAsyncKeyState(0xa0);
  this->ModifierKeyState[0] = SUB21((ushort)SVar1 >> 0xf,0);
  SVar1 = GetAsyncKeyState(0xa1);
  this->ModifierKeyState[1] = SUB21((ushort)SVar1 >> 0xf,0);
  SVar1 = GetAsyncKeyState(0xa2);
  this->ModifierKeyState[2] = SUB21((ushort)SVar1 >> 0xf,0);
  SVar1 = GetAsyncKeyState(0xa3);
  this->ModifierKeyState[3] = SUB21((ushort)SVar1 >> 0xf,0);
  SVar1 = GetAsyncKeyState(0xa4);
  this->ModifierKeyState[4] = SUB21((ushort)SVar1 >> 0xf,0);
  SVar1 = GetAsyncKeyState(0xa5);
  this->ModifierKeyState[5] = SUB21((ushort)SVar1 >> 0xf,0);
  SVar1 = GetKeyState(0x14);
  this->ModifierKeyState[6] = (bool)((byte)SVar1 & 1);
  return;
}

// UpdateHighPrecisionMouseMode @ 14240bcd0

void __thiscall FWindowsApplication::UpdateHighPrecisionMouseMode(FWindowsApplication *this)

{
  bool bVar1;
  
  if (this->bUsingHighPrecisionMouseInput == false) {
    return;
  }
  if ((UE::WindowsApplication::RawInputThread::bUseWorkerThreadForRawInput) &&
     (bVar1 = FGenericPlatformProcess::SupportsMultithreading(), bVar1)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (this->bCachedUseWorkerThreadForRawInput == bVar1) {
    return;
  }
  UnregisterHighPrecisionMouseMode(this);
  RegisterHighPrecisionMouseMode(this);
  return;
}

// operator() @ 15048bf40

bool __thiscall
`FWindowsApplication::ProcessDeferredDragDropOperation'::__l4::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_8717070949721043286>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_8717070949721043286>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

