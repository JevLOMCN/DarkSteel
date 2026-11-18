// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PixWinPlugin
// Functions: 13

// CaptureFrame @ 14e2c34e0

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
FPixWinPluginModule::CaptureFrame
          (FPixWinPluginModule *this,FViewport *param_1,uint param_2,FString *param_3)

{
  int *this_00;
  UGameViewportClient *pUVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  void *pvVar5;
  FString local_18;
  
  this_00 = &this[-1].CurrentCaptureDestFileName.Data.ArrayNum;
  if (*(char *)((longlong)&this->PixGraphicsAnalysisInterface + 1) == '\0') {
    if (GEngine == (UEngine *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("GEngine",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Developer\\PixWinPlugin\\Source\\PixWinPlugin\\Private\\PixWinPluginModule.cpp"
                         ,0x12f,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if ((param_1 == (FViewport *)0x0) &&
       (pUVar1 = (GEngine->GameViewport).field0_0x0.DebugPtr, pUVar1 != (UGameViewportClient *)0x0))
    {
      if (pUVar1->Viewport == (FViewport *)0x0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("GEngine->GameViewport->Viewport",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Developer\\PixWinPlugin\\Source\\PixWinPlugin\\Private\\PixWinPluginModule.cpp"
                           ,0x132,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      cVar4 = (**(code **)(((GEngine->GameViewport).field0_0x0.DebugPtr)->Viewport->_padding_ + 0xa0
                          ))();
      if (cVar4 != '\0') {
        param_1 = ((GEngine->GameViewport).field0_0x0.DebugPtr)->Viewport;
      }
    }
    MakeWinPixCaptureFilePath(&local_18,param_3);
    if (param_1 == (FViewport *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Viewport",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Developer\\PixWinPlugin\\Source\\PixWinPlugin\\Private\\PixWinPluginModule.cpp"
                         ,0x146,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pvVar5 = (void *)(**(code **)(param_1->_padding_ + 0x80))(param_1);
    BeginFrameCapture((FPixWinPluginModule *)this_00,pvVar5,&local_18);
    FViewport::Draw(param_1,true);
    EndFrameCapture((FPixWinPluginModule *)this_00,param_2,&local_18);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// BeginCapture @ 14e2c3650

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FPixWinPluginModule::BeginCapture
          (FPixWinPluginModule *this,FRHICommandListImmediate *param_1,uint param_2,FString *param_3
          )

{
  FAutoConsoleCommand **ppFVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  FString *pFVar5;
  undefined8 *puVar6;
  undefined1 local_38 [8];
  FString local_30;
  
  pFVar5 = MakeWinPixCaptureFilePath((FString *)local_38,param_3);
  ppFVar1 = &this->ConsoleCommandCaptureFrame;
  if ((FString *)ppFVar1 != pFVar5) {
    if (*ppFVar1 != (FAutoConsoleCommand *)0x0) {
      FMemory::Free(*ppFVar1);
    }
    *ppFVar1 = (FAutoConsoleCommand *)(pFVar5->Data).AllocatorInstance.Data;
    (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    uVar2 = *(undefined1 *)((longlong)&(pFVar5->Data).ArrayNum + 1);
    uVar3 = *(undefined1 *)((longlong)&(pFVar5->Data).ArrayNum + 2);
    uVar4 = *(undefined1 *)((longlong)&(pFVar5->Data).ArrayNum + 3);
    this->bBeginCaptureNextTick = (bool)*(undefined1 *)&(pFVar5->Data).ArrayNum;
    this->bEndCaptureNextTick = (bool)uVar2;
    this->bCurrentlyAttached = (bool)uVar3;
    this->field_0x2b = uVar4;
    *(int *)&this->field_0x2c = (pFVar5->Data).ArrayMax;
    (pFVar5->Data).ArrayNum = 0;
    (pFVar5->Data).ArrayMax = 0;
  }
  if (local_38 != (undefined1  [8])0x0) {
    FMemory::Free((void *)local_38);
  }
  *(uint *)&(this->CurrentCaptureDestFileName).Data.AllocatorInstance.Data = param_2;
  FRHICommandListImmediate::SubmitAndBlockUntilGPUIdle(param_1);
  local_38 = (undefined1  [8])this->_padding_;
  ::FString::FString(&local_30,(FString *)ppFVar1);
  if (((GRHICommandList.bLatchedBypass == false) || ((param_1->field_0x29b & 0x20) == 0)) &&
     (param_1->field_0x64 == '\0')) {
    puVar6 = FRHICommandListBase::AllocCommand((FRHICommandListBase *)param_1,0x30,8);
    *puVar6 = &TRHILambdaCommand<FRHICommandListImmediate,`FPixWinPluginModule::BeginCapture'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar6[1] = 0;
    puVar6[2] = local_38;
    puVar6[3] = 0;
    puVar6[3] = local_30.Data.AllocatorInstance.Data;
    local_30.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)(puVar6 + 4) = local_30.Data.ArrayNum;
    *(int *)((longlong)puVar6 + 0x24) = local_30.Data.ArrayMax;
    local_30.Data.ArrayNum = 0;
    local_30.Data.ArrayMax = 0;
    puVar6[5] = L"TRHILambdaCommand";
  }
  else {
    ::Impl::FPixGraphicsAnalysisInterface::BeginCapture
              ((FPixGraphicsAnalysisInterface *)local_38,(HWND__ *)0x0,&local_30);
  }
  if (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_30.Data.AllocatorInstance.Data);
  }
  return;
}

// EndCapture @ 14e2c37a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FPixWinPluginModule::EndCapture(FPixWinPluginModule *this,FRHICommandListImmediate *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  FAutoConsoleCommand *pFVar5;
  undefined8 *puVar6;
  FAutoConsoleCommand *pFVar7;
  longlong local_48;
  undefined4 local_40;
  FAutoConsoleCommand *local_38;
  undefined4 local_30;
  undefined4 local_2c;
  
  FRHICommandListImmediate::SubmitAndBlockUntilGPUIdle(param_1);
  lVar4 = this->_padding_;
  uVar1 = *(undefined4 *)&(this->CurrentCaptureDestFileName).Data.AllocatorInstance.Data;
  pFVar5 = this->ConsoleCommandCaptureFrame;
  this->ConsoleCommandCaptureFrame = (FAutoConsoleCommand *)0x0;
  uVar2._0_1_ = this->bBeginCaptureNextTick;
  uVar2._1_1_ = this->bEndCaptureNextTick;
  uVar2._2_1_ = this->bCurrentlyAttached;
  uVar2._3_1_ = this->field_0x2b;
  uVar3 = *(undefined4 *)&this->field_0x2c;
  this->bBeginCaptureNextTick = false;
  this->bEndCaptureNextTick = false;
  this->bCurrentlyAttached = false;
  *(undefined5 *)&this->field_0x2b = 0;
  local_48 = lVar4;
  local_40 = uVar1;
  local_38 = pFVar5;
  local_30 = uVar2;
  local_2c = uVar3;
  if (((GRHICommandList.bLatchedBypass == false) || ((param_1->field_0x29b & 0x20) == 0)) &&
     (param_1->field_0x64 == '\0')) {
    puVar6 = FRHICommandListBase::AllocCommand((FRHICommandListBase *)param_1,0x38,8);
    *puVar6 = &TRHILambdaCommand<FRHICommandListImmediate,`FPixWinPluginModule::EndCapture'::`2'::<lambda_1>_>
               ::_vftable_;
    pFVar7 = (FAutoConsoleCommand *)0x0;
    puVar6[2] = lVar4;
    *(undefined4 *)(puVar6 + 3) = uVar1;
    puVar6[4] = pFVar5;
    puVar6[1] = 0;
    *(undefined4 *)(puVar6 + 5) = uVar2;
    *(undefined4 *)((longlong)puVar6 + 0x2c) = uVar3;
    puVar6[6] = L"TRHILambdaCommand";
  }
  else {
    `FPixWinPluginModule::EndCapture'::__l2::<lambda_1>::operator()(&local_48,param_1);
    pFVar7 = local_38;
  }
  if (pFVar7 != (FAutoConsoleCommand *)0x0) {
    FMemory::Free(pFVar7);
  }
  *(undefined4 *)&(this->CurrentCaptureDestFileName).Data.AllocatorInstance.Data = 0;
  ::FString::Empty((FString *)&this->ConsoleCommandCaptureFrame);
  return;
}

// StartupModule @ 14e2c38b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FPixWinPluginModule::StartupModule(FPixWinPluginModule *this)

{
  int iVar1;
  FScriptContainerElement *_Src;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  FPixGraphicsAnalysisInterface *this_00;
  FAutoConsoleCommand *pFVar5;
  FString *pFVar6;
  IFileManager *pIVar7;
  IModularFeatures *pIVar8;
  FAutoConsoleCommand *pFVar9;
  undefined8 *puVar10;
  ulong64 uVar11;
  FAutoConsoleCommand *pFVar12;
  ForAnyElementType FVar13;
  uint uVar14;
  int *piVar15;
  undefined4 local_res8;
  FString local_98;
  code *local_88;
  ulonglong uStack_80;
  undefined1 local_78 [8];
  FDelegateAllocation local_70;
  FDestructionSentinel local_60;
  FDestructionSentinel local_48;
  FDelegateAllocation *local_30;
  
  pFVar12 = (FAutoConsoleCommand *)0x0;
  local_res8 = 0;
  this_00 = ::operator_new(8);
  pFVar5 = pFVar12;
  if (this_00 != (FPixGraphicsAnalysisInterface *)0x0) {
    pFVar5 = (FAutoConsoleCommand *)
             ::Impl::FPixGraphicsAnalysisInterface::FPixGraphicsAnalysisInterface(this_00);
  }
  this->PixGraphicsAnalysisInterface = (FPixGraphicsAnalysisInterface *)pFVar5;
  if (*(void **)pFVar5 == (void *)0x0) {
    if (4 < (byte)PixWinPlugin._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&PixWinPlugin);
      return;
    }
  }
  else {
    pFVar6 = FPaths::ProjectSavedDir();
    local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar1 = (pFVar6->Data).ArrayNum;
    _Src = (pFVar6->Data).AllocatorInstance.Data;
    uVar14 = (0xd - (uint)((pFVar6->Data).ArrayNum != 0)) + iVar1;
    local_98.Data.ArrayNum = iVar1;
    if ((int)uVar14 < iVar1) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar14);
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,uVar14,0,(ForAnyElementType *)&local_98,iVar1,&local_98.Data.ArrayMax);
    if (iVar1 != 0) {
      memcpy(local_98.Data.AllocatorInstance.Data,_Src,(longlong)iVar1 * 2);
    }
    ::FString::PathAppend(&local_98,L"PixCaptures",0xb);
    pIVar7 = IFileManager::Get();
    FVar13.Data = (FScriptContainerElement *)L"";
    if (local_98.Data.ArrayNum != 0) {
      FVar13.Data = local_98.Data.AllocatorInstance.Data;
    }
    cVar3 = (**(code **)((longlong)*pIVar7 + 0x58))(pIVar7,FVar13.Data);
    if (cVar3 == '\0') {
      pIVar7 = IFileManager::Get();
      FVar13.Data = (FScriptContainerElement *)L"";
      if (local_98.Data.ArrayNum != 0) {
        FVar13.Data = local_98.Data.AllocatorInstance.Data;
      }
      (**(code **)((longlong)*pIVar7 + 0x60))(pIVar7,FVar13.Data,1);
    }
    pIVar8 = IModularFeatures::Get();
    pcVar2 = *(code **)((longlong)*pIVar8 + 0x28);
    pFVar5 = (FAutoConsoleCommand *)&this->_padding_;
    if (this == (FPixWinPluginModule *)0x0) {
      pFVar5 = pFVar12;
    }
    pFVar9 = (FAutoConsoleCommand *)&pFVar5->field_0x8;
    if (pFVar5 == (FAutoConsoleCommand *)0x0) {
      pFVar9 = pFVar12;
    }
    piVar15 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x9d4c);
    if ((*piVar15 <
         `public:_static_class_FName___cdecl_IRenderCaptureProvider::GetModularFeatureName(void)'::
         __l2::_thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`public:_static_class_FName___cdecl_IRenderCaptureProvider::GetModularFeatureName(void)'
                             ::__l2::_thread_safe_static_guard_0__),
       `public:_static_class_FName___cdecl_IRenderCaptureProvider::GetModularFeatureName(void)'::
       __l2::_thread_safe_static_guard_0__ == -1)) {
      ::FName::FName(&`public:_static_class_FName___cdecl_IRenderCaptureProvider::GetModularFeatureName(void)'
                      ::__l2::FeatureName,L"RenderCaptureProvider");
      _Init_thread_footer(&`public:_static_class_FName___cdecl_IRenderCaptureProvider::GetModularFeatureName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
    (*pcVar2)(pIVar8,`public:_static_class_FName___cdecl_IRenderCaptureProvider::GetModularFeatureName(void)'
                     ::__l2::FeatureName,pFVar9);
    pIVar8 = IModularFeatures::Get();
    pcVar2 = *(code **)((longlong)*pIVar8 + 0x28);
    if ((*piVar15 <
         `public:_static_class_FName___cdecl_IInputDeviceModule::GetModularFeatureName(void)'::__l2
         ::_thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`public:_static_class_FName___cdecl_IInputDeviceModule::GetModularFeatureName(void)'
                             ::__l2::_thread_safe_static_guard_0__),
       `public:_static_class_FName___cdecl_IInputDeviceModule::GetModularFeatureName(void)'::__l2::
       _thread_safe_static_guard_0__ == -1)) {
      ::FName::FName(&`public:_static_class_FName___cdecl_IInputDeviceModule::GetModularFeatureName(void)'
                      ::__l2::FeatureName,L"InputDevice");
      _Init_thread_footer(&`public:_static_class_FName___cdecl_IInputDeviceModule::GetModularFeatureName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
    (*pcVar2)(pIVar8,`public:_static_class_FName___cdecl_IInputDeviceModule::GetModularFeatureName(void)'
                     ::__l2::FeatureName);
    pFVar9 = ::operator_new(0x10);
    pFVar5 = pFVar12;
    if (pFVar9 != (FAutoConsoleCommand *)0x0) {
      local_88 = CaptureFrame;
      uStack_80 = uStack_80 & 0xffffffff00000000;
      local_78 = (undefined1  [8])0x0;
      local_70.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_70.DelegateSize = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_78,
                 (FWriteAccessScope *)&local_48);
      local_30 = &local_70;
      puVar10 = UE::Core::Private::DelegateAllocate(0x30,&local_70);
      if (puVar10 != (undefined8 *)0x0) {
        *puVar10 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar11 = FDelegateHandle::GenerateNewID();
        puVar10[2] = uVar11;
        puVar10[4] = local_88;
        puVar10[5] = uStack_80;
        *puVar10 = &
                   ___7__TBaseRawMethodDelegateInstance__0A_VFPixWinPluginModule____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
        ;
        puVar10[3] = this;
        if ((puVar10[4] == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("InUserObject != nullptr && MethodPtr != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                               ,0x1d8,L""), bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      if (local_48.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
      }
      pFVar12 = FAutoConsoleCommand::FAutoConsoleCommand
                          (pFVar9,L"pix.GpuCaptureFrame",
                           L"Captures the rendering commands of the next frame.",
                           (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_78,0);
      pFVar5 = (FAutoConsoleCommand *)&DAT_00000001;
    }
    this->ConsoleCommandCaptureFrame = pFVar12;
    if (pFVar5 != (FAutoConsoleCommand *)0x0) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_78,
                 (FWriteAccessScope *)&local_60);
      if ((local_70.DelegateSize != 0) &&
         (local_70.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        (*(code *)**(undefined8 **)local_70.DelegateAllocator)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&local_70,0,0,0x10);
        local_70.DelegateSize = 0;
      }
      if (local_60.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_60.Accessor,&local_60);
      }
      if (local_70.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)local_70.DelegateAllocator);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_78);
    }
    uStack_80 = uStack_80 & 0xffffffff00000000;
    local_88 = OnPostEngineInit;
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddRaw<FPixWinPluginModule>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &FCoreDelegates::OnPostEngineInit,(FPixWinPluginModule *)&local_res8,
               (pmf_e18a5d0e *)this);
    if (4 < (byte)PixWinPlugin._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&PixWinPlugin);
    }
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// ShutdownModule @ 14e2c3d20

void __thiscall FPixWinPluginModule::ShutdownModule(FPixWinPluginModule *this)

{
  FAutoConsoleCommand *pFVar1;
  code *UNRECOVERED_JUMPTABLE;
  IModularFeatures *pIVar2;
  FAutoConsoleCommand **ppFVar3;
  FAutoConsoleCommand **ppFVar4;
  int *piVar5;
  FAutoConsoleCommand **ppFVar6;
  
  ::operator_delete(this->PixGraphicsAnalysisInterface,8);
  pFVar1 = this->ConsoleCommandCaptureFrame;
  ppFVar6 = (FAutoConsoleCommand **)0x0;
  this->PixGraphicsAnalysisInterface = (FPixGraphicsAnalysisInterface *)0x0;
  if (pFVar1 != (FAutoConsoleCommand *)0x0) {
    (*(code *)**(undefined8 **)pFVar1)(pFVar1,1);
  }
  this->ConsoleCommandCaptureFrame = (FAutoConsoleCommand *)0x0;
  pIVar2 = IModularFeatures::Get();
  UNRECOVERED_JUMPTABLE = *(code **)((longlong)*pIVar2 + 0x30);
  ppFVar3 = (FAutoConsoleCommand **)&this->_padding_;
  if (this == (FPixWinPluginModule *)0x0) {
    ppFVar3 = ppFVar6;
  }
  ppFVar4 = ppFVar3 + 1;
  if (ppFVar3 == (FAutoConsoleCommand **)0x0) {
    ppFVar4 = ppFVar6;
  }
  piVar5 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar5 < `public:_static_class_FName___cdecl_IRenderCaptureProvider::GetModularFeatureName(void)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName___cdecl_IRenderCaptureProvider::GetModularFeatureName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName___cdecl_IRenderCaptureProvider::GetModularFeatureName(void)'::
        __l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_static_class_FName___cdecl_IRenderCaptureProvider::GetModularFeatureName(void)'
                      ::__l2::FeatureName,L"RenderCaptureProvider");
      _Init_thread_footer(&`public:_static_class_FName___cdecl_IRenderCaptureProvider::GetModularFeatureName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  (*UNRECOVERED_JUMPTABLE)
            (pIVar2,`public:_static_class_FName___cdecl_IRenderCaptureProvider::GetModularFeatureName(void)'
                    ::__l2::FeatureName,ppFVar4);
  pIVar2 = IModularFeatures::Get();
  ppFVar3 = (FAutoConsoleCommand **)&this->_padding_;
  if (this == (FPixWinPluginModule *)0x0) {
    ppFVar3 = ppFVar6;
  }
  UNRECOVERED_JUMPTABLE = *(code **)((longlong)*pIVar2 + 0x30);
  if (*piVar5 < `public:_static_class_FName___cdecl_IInputDeviceModule::GetModularFeatureName(void)'
                ::__l2::_thread_safe_static_guard_0__) {
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
                    /* WARNING: Could not recover jumptable at 0x00014e2c3e0f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            (pIVar2,`public:_static_class_FName___cdecl_IInputDeviceModule::GetModularFeatureName(void)'
                    ::__l2::FeatureName,ppFVar3);
  return;
}

// CreateInputDevice @ 14e2c3e90

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<IInputDevice,1> * __thiscall
FPixWinPluginModule::CreateInputDevice
          (FPixWinPluginModule *this,TSharedPtr<IInputDevice,1> *__return_storage_ptr__,
          TSharedRef<FGenericApplicationMessageHandler,1> *param_1)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSharedPtr<IInputDevice,1> *pTVar4;
  
  if (4 < (byte)PixWinPlugin._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&PixWinPlugin);
  }
  pTVar3 = ::operator_new(0x20);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    pTVar3 = (TReferenceControllerBase<1> *)0x0;
    __return_storage_ptr__->Object = (IInputDevice *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFPixDummyInputDevice_Impl___00_SharedPointerInternals__6B_
    ;
    *(FPixWinPluginModule **)&pTVar3[1].SharedReferenceCount = this;
    pTVar3[1]._padding_ = (longlong)&___7FPixDummyInputDevice_Impl__6B_;
    if (pTVar3 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TSharedPtr<IInputDevice,1> *)(*pcVar1)();
        return pTVar4;
      }
    }
    __return_storage_ptr__->Object = (IInputDevice *)(pTVar3 + 1);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return __return_storage_ptr__;
}

// operator() @ 14e2c4fc0

void __thiscall
`FPixWinPluginModule::EndCapture'::__l2::<lambda_1>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  HMODULE hModule;
  FARPROC pFVar1;
  INT_PTR IVar2;
  wchar_t *lpFile;
  
  ::Impl::FPixGraphicsAnalysisInterface::EndCapture(*(FPixGraphicsAnalysisInterface **)this);
  if ((*(byte *)((longlong)this + 8) & 1) != 0) {
    if (**(longlong **)this != 0) {
      hModule = GetModuleHandleW(L"WinPixGpuCapturer.dll");
      if ((hModule == (HMODULE)0x0) ||
         (pFVar1 = GetProcAddress(hModule,"GetIsAttachedToPix"), pFVar1 == (FARPROC)0x0)) {
        OutputDebugStringW(
                          L"WinPixEventRuntime error: Mismatched header/dll. Please ensure that pix3.h and WinPixGpuCapturer.dll match"
                          );
      }
      else {
        IVar2 = (*pFVar1)();
        if ((char)IVar2 != '\0') {
          return;
        }
      }
    }
    if (**(longlong **)this != 0) {
      if (*(int *)((longlong)this + 0x18) == 0) {
        lpFile = L"";
      }
      else {
        lpFile = *(wchar_t **)((longlong)this + 0x10);
      }
      ShellExecuteW((HWND)0x0,(LPCWSTR)0x0,lpFile,(LPCWSTR)0x0,(LPCWSTR)0x0,5);
    }
  }
  return;
}

// BeginFrameCapture @ 14e2c52f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FPixWinPluginModule::BeginFrameCapture(FPixWinPluginModule *this,void *param_1,FString *param_2)

{
  FPixGraphicsAnalysisInterface *pFVar1;
  code *pcVar2;
  bool bVar3;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar4;
  code **ppcVar5;
  ulonglong uVar6;
  undefined1 auStack_c8 [32];
  FPixGraphicsAnalysisInterface *local_a8;
  HWND local_a0;
  FString local_98;
  code *local_88 [2];
  code *local_78 [3];
  code **local_60;
  undefined1 local_58 [40];
  code **local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  if (4 < (byte)PixWinPlugin._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&PixWinPlugin);
  }
  pFVar1 = this->PixGraphicsAnalysisInterface;
  if (param_1 == (void *)0x0) {
    param_1 = GetActiveWindow();
  }
  local_a8 = pFVar1;
  local_a0 = param_1;
  ::FString::FString(&local_98,param_2);
  local_88[0] = (code *)0x0;
  local_60 = FMemory::Malloc(0x28,8);
  ppcVar5 = local_60 + 1;
  *local_60 = (code *)&UE::Core::Private::Function::
                       TFunction_OwnedObject<`FPixWinPluginModule::BeginFrameCapture'::`2'::<lambda_1>,1,1>
                       ::_vftable_;
  *ppcVar5 = (code *)local_a8;
  local_60[2] = (code *)local_a0;
  ::FString::FString((FString *)(local_60 + 3),&local_98);
  if (ppcVar5 != (code **)0x0) {
    local_88[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FPixWinPluginModule::BeginFrameCapture'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                  ::Call;
  }
  this_00 = FRenderCommandList::GetInstanceTLS();
  if (this_00 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_FPixWinPluginModule::BeginFrameCapture_::__l2::TSTR_PixWinBeginFrameCapture343>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
    pFVar4 = (FRenderCommandTag *)
             TRenderCommandTag<`FPixWinPluginModule::BeginFrameCapture'::__l2::TSTR_PixWinBeginFrameCapture343>
             ::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_58,pFVar4);
    uVar6 = (ulonglong)local_28;
    if (2 < uVar6) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar6] ==
        UE::Core::Private::
        TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
      if ((code *)local_58._0_8_ != (code *)0x0) {
        ppcVar5 = (code **)(local_58 + 0x10);
        if (local_30 != (code **)0x0) {
          ppcVar5 = local_30;
        }
        (**(code **)(*ppcVar5 + 0x10))();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar6])(local_58);
    }
  }
  if (local_88[0] != (code *)0x0) {
    ppcVar5 = local_88 + 2;
    if (local_60 != (code **)0x0) {
      ppcVar5 = local_60;
    }
    (**(code **)(*ppcVar5 + 0x10))();
  }
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  return;
}

// CaptureFrame @ 14e2c55a0

void __thiscall FPixWinPluginModule::CaptureFrame(FPixWinPluginModule *this)

{
  void *local_18;
  undefined8 local_10;
  
  local_18 = (void *)0x0;
  local_10 = 0;
  (**(code **)(this->_padding_ + 8))(&this->_padding_,0,0,&local_18);
  if (local_18 != (void *)0x0) {
    FMemory::Free(local_18);
  }
  return;
}

// DoFrameCaptureCurrentViewport @ 14e2c5870

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
FPixWinPluginModule::DoFrameCaptureCurrentViewport
          (FPixWinPluginModule *this,FViewport *param_1,uint param_2,FString *param_3)

{
  UGameViewportClient *pUVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  void *pvVar5;
  FString local_18;
  
  if (GEngine == (UEngine *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("GEngine",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Developer\\PixWinPlugin\\Source\\PixWinPlugin\\Private\\PixWinPluginModule.cpp"
                       ,0x12f,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if ((param_1 == (FViewport *)0x0) &&
     (pUVar1 = (GEngine->GameViewport).field0_0x0.DebugPtr, pUVar1 != (UGameViewportClient *)0x0)) {
    if (pUVar1->Viewport == (FViewport *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("GEngine->GameViewport->Viewport",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Developer\\PixWinPlugin\\Source\\PixWinPlugin\\Private\\PixWinPluginModule.cpp"
                         ,0x132,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    cVar4 = (**(code **)(((GEngine->GameViewport).field0_0x0.DebugPtr)->Viewport->_padding_ + 0xa0))
                      ();
    if (cVar4 != '\0') {
      param_1 = ((GEngine->GameViewport).field0_0x0.DebugPtr)->Viewport;
    }
  }
  MakeWinPixCaptureFilePath(&local_18,param_3);
  if (param_1 == (FViewport *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Viewport",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Developer\\PixWinPlugin\\Source\\PixWinPlugin\\Private\\PixWinPluginModule.cpp"
                       ,0x146,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pvVar5 = (void *)(**(code **)(param_1->_padding_ + 0x80))(param_1);
  BeginFrameCapture(this,pvVar5,&local_18);
  FViewport::Draw(param_1,true);
  EndFrameCapture(this,param_2,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// EndFrameCapture @ 14e2c5a60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FPixWinPluginModule::EndFrameCapture(FPixWinPluginModule *this,uint param_1,FString *param_2)

{
  code *pcVar1;
  bool bVar2;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar3;
  code **ppcVar4;
  ulonglong uVar5;
  undefined1 auStack_c8 [32];
  FPixGraphicsAnalysisInterface *local_a8;
  uint local_a0;
  FString local_98;
  code *local_88 [2];
  code *local_78 [3];
  code **local_60;
  undefined1 local_58 [40];
  code **local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  local_a8 = this->PixGraphicsAnalysisInterface;
  local_a0 = param_1;
  ::FString::FString(&local_98,param_2);
  local_88[0] = (code *)0x0;
  local_60 = FMemory::Malloc(0x28,8);
  ppcVar4 = local_60 + 1;
  *local_60 = (code *)&UE::Core::Private::Function::
                       TFunction_OwnedObject<`FPixWinPluginModule::EndFrameCapture'::`2'::<lambda_1>,1,1>
                       ::_vftable_;
  *ppcVar4 = (code *)local_a8;
  *(uint *)(local_60 + 2) = local_a0;
  ::FString::FString((FString *)(local_60 + 3),&local_98);
  if (ppcVar4 != (code **)0x0) {
    local_88[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FPixWinPluginModule::EndFrameCapture'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                  ::Call;
  }
  this_00 = FRenderCommandList::GetInstanceTLS();
  if (this_00 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_FPixWinPluginModule::EndFrameCapture_::__l2::TSTR_PixWinEndFrameCapture358>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
    pFVar3 = (FRenderCommandTag *)
             TRenderCommandTag<`FPixWinPluginModule::EndFrameCapture'::__l2::TSTR_PixWinEndFrameCapture358>
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
        ppcVar4 = (code **)(local_58 + 0x10);
        if (local_30 != (code **)0x0) {
          ppcVar4 = local_30;
        }
        (**(code **)(*ppcVar4 + 0x10))();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar5])(local_58);
    }
  }
  if (local_88[0] != (code *)0x0) {
    ppcVar4 = local_88 + 2;
    if (local_60 != (code **)0x0) {
      ppcVar4 = local_60;
    }
    (**(code **)(*ppcVar4 + 0x10))();
  }
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  return;
}

// OnPostEngineInit @ 14e2c6680

void __thiscall FPixWinPluginModule::OnPostEngineInit(FPixWinPluginModule *this)

{
  return;
}

// Tick @ 14e2c6890

void __thiscall FPixWinPluginModule::Tick(FPixWinPluginModule *this,float param_1)

{
  HMODULE hModule;
  FARPROC pFVar1;
  INT_PTR IVar2;
  bool bVar3;
  FString local_18;
  
  if ((this->PixGraphicsAnalysisInterface != (FPixGraphicsAnalysisInterface *)0x0) &&
     (this->PixGraphicsAnalysisInterface->WinPixGpuCapturerHandle != (void *)0x0)) {
    hModule = GetModuleHandleW(L"WinPixGpuCapturer.dll");
    if ((hModule == (HMODULE)0x0) ||
       (pFVar1 = GetProcAddress(hModule,"GetIsAttachedToPix"), pFVar1 == (FARPROC)0x0)) {
      OutputDebugStringW(
                        L"WinPixEventRuntime error: Mismatched header/dll. Please ensure that pix3.h and WinPixGpuCapturer.dll match"
                        );
    }
    else {
      IVar2 = (*pFVar1)();
      if ((char)IVar2 != '\0') {
        bVar3 = true;
        goto LAB_14e2c68ee;
      }
    }
  }
  bVar3 = false;
LAB_14e2c68ee:
  if (bVar3 != this->bCurrentlyAttached) {
    if (bVar3 != false) {
      FDynamicRHI::EnableIdealGPUCaptureOptions(true);
    }
    this->bCurrentlyAttached = bVar3;
  }
  if (this->bBeginCaptureNextTick == false) {
    if (this->bEndCaptureNextTick == false) {
      return;
    }
    this->bEndCaptureNextTick = false;
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
    EndFrameCapture(this,0,&local_18);
  }
  else {
    this->bBeginCaptureNextTick = false;
    this->bEndCaptureNextTick = true;
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
    BeginFrameCapture(this,(void *)0x0,&local_18);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

