// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GPUTextureTransfer
// Functions: 13

// StartupModule @ 14d756340

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall FGPUTextureTransferModule::StartupModule(FGPUTextureTransferModule *this)

{
  TConsoleVariableData<bool> *pTVar1;
  bool bVar2;
  longlong lVar3;
  TMulticastDelegateRegistration<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
  *this_00;
  FGPUDriverInfo *pFVar4;
  FGPUDriverInfo local_78;
  
  pTVar1 = CVarMediaIOEnableGPUDirect.Ref;
  bVar2 = IsInParallelGameThread();
  if (!bVar2) {
    bVar2 = IsInGameThread();
    if (!bVar2) {
      lVar3 = 1;
      goto LAB_14d756372;
    }
  }
  lVar3 = 0;
LAB_14d756372:
  if (pTVar1->ShadowedValue[lVar3] != false) {
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddRaw<FGPUTextureTransferModule>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &FCoreDelegates::OnAllModuleLoadingPhasesComplete,
               (FGPUTextureTransferModule *)&stack0x00000008,(pmf_b8caaade)this);
  }
  this_00 = (TMulticastDelegateRegistration<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
             *)(**(code **)(*(longlong *)CVarMediaIOEnableGPUDirect._padding_ + 0xe8))();
  TMulticastDelegateRegistration<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>::
  AddRaw<FGPUTextureTransferModule>
            (this_00,(FGPUTextureTransferModule *)&stack0x00000008,(pmf_85232170)this);
  pFVar4 = FWindowsPlatformMisc::GetGPUDriverInfo(&local_78,&GRHIGlobals.GpuInfo.AdapterName,true);
  FGPUDriverInfo::operator=(&this->CachedDriverInfo,pFVar4);
  if (local_78.RHIName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.RHIName.Data.AllocatorInstance.Data);
  }
  if (local_78.DriverDate.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.DriverDate.Data.AllocatorInstance.Data);
  }
  if (local_78.UserDriverVersion.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.UserDriverVersion.Data.AllocatorInstance.Data);
  }
  if (local_78.InternalDriverVersion.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
  {
    FMemory::Free(local_78.InternalDriverVersion.Data.AllocatorInstance.Data);
  }
  if (local_78.ProviderName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.ProviderName.Data.AllocatorInstance.Data);
  }
  if (local_78.DeviceDescription.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.DeviceDescription.Data.AllocatorInstance.Data);
  }
  return;
}

// ShutdownModule @ 14d756460

void __thiscall FGPUTextureTransferModule::ShutdownModule(FGPUTextureTransferModule *this)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  byte bVar4;
  longlong lVar6;
  uint uVar5;
  
  if (this->bInitialized != (atomic<bool>)0x0) {
    uVar5 = 1;
    lVar6 = 0x10;
    do {
      if (((this->TransferObjects).ArrayNum <= (int)uVar5) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      plVar1 = *(longlong **)((this->TransferObjects).AllocatorInstance.Data + lVar6);
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x80))();
      }
      bVar4 = (char)uVar5 + 1;
      uVar5 = (uint)bVar4;
      lVar6 = lVar6 + 0x10;
    } while (bVar4 < 4);
  }
  return;
}

// operator() @ 14d757950

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`FGPUTextureTransferModule::InitializeTextureTransfer'::__l2::<lambda_1>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  TReferenceControllerBase<1> *pTVar6;
  IVulkanDynamicRHI *pIVar7;
  undefined8 *puVar8;
  FSharedReferencer<1> FVar9;
  TReferenceControllerBase<1> *pTVar10;
  byte bVar11;
  undefined1 auStackY_e8 [32];
  TReferenceControllerBase<1> *local_b8;
  FSharedReferencer<1> FStack_b0;
  undefined8 local_a8;
  FSharedReferencer<1> local_a0;
  undefined8 local_98;
  FSharedReferencer<1> local_90;
  undefined8 local_88;
  FSharedReferencer<1> local_80;
  undefined8 local_78;
  TReferenceControllerBase<1> *pTStack_70;
  byte local_68 [8];
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  local_b8 = (TReferenceControllerBase<1> *)0x0;
  FStack_b0.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  iVar5 = (**(code **)(GDynamicRHI->_padding_ + 0x28))();
  if (iVar5 == 2) {
    bVar11 = 1;
  }
  else if (iVar5 == 3) {
    bVar11 = 2;
  }
  else if (iVar5 == 4) {
    bVar11 = 3;
  }
  else {
    bVar11 = 0;
  }
  pTVar10 = (TReferenceControllerBase<1> *)0x0;
  if (bVar11 == 1) {
    pTVar6 = ::operator_new(0x108);
    if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
      local_b8 = (TReferenceControllerBase<1> *)&DAT_00000010;
    }
    else {
      pTVar6->SharedReferenceCount = (atomic<int>)0x1;
      pTVar6->WeakReferenceCount = (atomic<int>)0x1;
      pTVar6->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_VFD3D11TextureTransfer_Private_GPUTextureTransfer_UE___00_SharedPointerInternals__6B_
      ;
      memset(pTVar6 + 1,0,0xf8);
      UE::GPUTextureTransfer::Private::FTextureTransferBase::FTextureTransferBase
                ((FTextureTransferBase *)(pTVar6 + 1));
      pTVar6[0x10]._padding_ = 0;
      local_b8 = pTVar6 + 1;
      pTVar6[1]._padding_ = (longlong)&___7FD3D11TextureTransfer_Private_GPUTextureTransfer_UE__6B_;
      if (local_b8 == (TReferenceControllerBase<1> *)0x0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
      pTVar10 = pTVar6;
    }
    local_88 = 0;
    local_80.ReferenceController = pTVar10;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_b0,&local_80);
    FVar9.ReferenceController = local_80.ReferenceController;
  }
  else if (bVar11 == 2) {
    pTVar6 = ::operator_new(0x110);
    if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
      local_b8 = (TReferenceControllerBase<1> *)&DAT_00000010;
    }
    else {
      pTVar6->SharedReferenceCount = (atomic<int>)0x1;
      pTVar6->WeakReferenceCount = (atomic<int>)0x1;
      pTVar6->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_VFD3D12TextureTransfer_Private_GPUTextureTransfer_UE___00_SharedPointerInternals__6B_
      ;
      memset(pTVar6 + 1,0,0x100);
      UE::GPUTextureTransfer::Private::FTextureTransferBase::FTextureTransferBase
                ((FTextureTransferBase *)(pTVar6 + 1));
      pTVar6[0x10]._padding_ = 0;
      pTVar6[0x10].SharedReferenceCount = (atomic<int>)0x0;
      pTVar6[0x10].WeakReferenceCount = (atomic<int>)0x0;
      local_b8 = pTVar6 + 1;
      pTVar6[1]._padding_ = (longlong)&___7FD3D12TextureTransfer_Private_GPUTextureTransfer_UE__6B_;
      if (local_b8 == (TReferenceControllerBase<1> *)0x0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
      pTVar10 = pTVar6;
    }
    local_98 = 0;
    local_90.ReferenceController = pTVar10;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_b0,&local_90);
    FVar9.ReferenceController = local_90.ReferenceController;
  }
  else {
    if (bVar11 != 3) {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_1755494648752635653>,true,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\MediaIOFramework\\Source\\GPUTextureTransfer\\Private\\GPUTextureTransferModule.cpp"
                         ,0xfb,"false");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      goto LAB_14d757c58;
    }
    pTVar6 = ::operator_new(0x118);
    if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
      local_b8 = (TReferenceControllerBase<1> *)&DAT_00000010;
    }
    else {
      pTVar6->SharedReferenceCount = (atomic<int>)0x1;
      pTVar6->WeakReferenceCount = (atomic<int>)0x1;
      pTVar6->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_VFVulkanTextureTransfer_Private_GPUTextureTransfer_UE___00_SharedPointerInternals__6B_
      ;
      memset(pTVar6 + 1,0,0x108);
      UE::GPUTextureTransfer::Private::FTextureTransferBase::FTextureTransferBase
                ((FTextureTransferBase *)(pTVar6 + 1));
      pTVar6[0x10]._padding_ = 0;
      pTVar6[0x10].SharedReferenceCount = (atomic<int>)0x0;
      pTVar6[0x10].WeakReferenceCount = (atomic<int>)0x0;
      pTVar6[0x11]._padding_ = 0;
      local_b8 = pTVar6 + 1;
      pTVar6[1]._padding_ = (longlong)&___7FVulkanTextureTransfer_Private_GPUTextureTransfer_UE__6B_
      ;
      if (local_b8 == (TReferenceControllerBase<1> *)0x0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
      pTVar10 = pTVar6;
    }
    local_a8 = 0;
    local_a0.ReferenceController = pTVar10;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_b0,&local_a0);
    FVar9.ReferenceController = local_a0.ReferenceController;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar9.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
LAB_14d757c58:
  local_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_68[0] = bVar11;
  local_60 = (**(code **)(GDynamicRHI->_padding_ + 0x388))();
  local_58 = (**(code **)(GDynamicRHI->_padding_ + 0x398))();
  if (bVar11 == 3) {
    pIVar7 = GetIVulkanDynamicRHI();
    local_50 = (**(code **)(*(longlong *)pIVar7 + 0x4d0))(pIVar7);
    puVar8 = (undefined8 *)(**(code **)(*(longlong *)pIVar7 + 0x4e0))(pIVar7);
    local_48 = *puVar8;
    uStack_40 = puVar8[1];
  }
  if (3 < (byte)LogGPUTextureTransfer._0_1_) {
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogGPUTextureTransfer);
  }
  if (local_b8 == (TReferenceControllerBase<1> *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  cVar4 = (**(code **)(local_b8->_padding_ + 0x78))(local_b8,local_68);
  if (cVar4 != '\0') {
    lVar1 = *(longlong *)this;
    if (*(int *)(lVar1 + 0x20) <= (int)(uint)bVar11) {
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
    puVar8 = (undefined8 *)((ulonglong)bVar11 * 0x10 + *(longlong *)(lVar1 + 0x18));
    if (FStack_b0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (FStack_b0.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FStack_b0.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_78 = *puVar8;
    pTStack_70 = (TReferenceControllerBase<1> *)puVar8[1];
    *puVar8 = local_b8;
    puVar8[1] = FStack_b0.ReferenceController;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_70);
  }
  LOCK();
  *(undefined1 *)(*(longlong *)this + 0x10) = 1;
  UNLOCK();
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_b0.ReferenceController);
  return;
}

// Get @ 14d7596e0

FGPUTextureTransferModule * __cdecl FGPUTextureTransferModule::Get(void)

{
  FName FVar1;
  FName *pFVar2;
  FModuleManager *this;
  FGPUTextureTransferModule *pFVar3;
  FName local_res8 [4];
  
  pFVar2 = ::FName::FName(local_res8,"GPUTextureTransfer");
  FVar1 = *pFVar2;
  this = FModuleManager::Get();
  pFVar3 = (FGPUTextureTransferModule *)FModuleManager::LoadModuleChecked(this,FVar1);
  return pFVar3;
}

// GetTextureTransfer @ 14d759970

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<UE::GPUTextureTransfer::ITextureTransfer,1> * __thiscall
FGPUTextureTransferModule::GetTextureTransfer
          (FGPUTextureTransferModule *this,
          TSharedPtr<UE::GPUTextureTransfer::ITextureTransfer,1> *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TSharedPtr<UE::GPUTextureTransfer::ITextureTransfer,1> *pTVar6;
  wchar_t *pwVar7;
  longlong lVar8;
  longlong lVar9;
  
  if (this->bInitialized == (atomic<bool>)0x0) {
    if (2 < (byte)LogGPUTextureTransfer._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogGPUTextureTransfer);
    }
    Initialize(this);
    FlushRenderingCommands();
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__)
     && (_Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                              _thread_safe_static_guard_0__),
        `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__
        == -1)) {
    pwVar7 = FCommandLine::Get();
    `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline =
         FParse::Param(pwVar7,L"nullrhi");
    _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                         _thread_safe_static_guard_0__);
  }
  if (((PRIVATE_GIsRunningCommandlet == false) || (PRIVATE_GAllowCommandletRendering != false)) &&
     (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline ==
      false)) {
    iVar5 = (**(code **)(GDynamicRHI->_padding_ + 0x28))();
    if (iVar5 == 2) {
      lVar8 = 1;
      lVar9 = 0x10;
    }
    else if (iVar5 == 3) {
      lVar8 = 2;
      lVar9 = 0x20;
    }
    else {
      if (iVar5 != 4) {
        if (1 < (byte)LogGPUTextureTransfer._0_1_) {
          UE::Logging::Private::BasicLog<2>
                    (&::LOG_Static,(FLogCategoryBase *)&LogGPUTextureTransfer);
        }
        goto LAB_14d759a3b;
      }
      lVar8 = 3;
      lVar9 = 0x30;
    }
    if (((this->TransferObjects).ArrayNum <= (int)lVar8) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TSharedPtr<UE::GPUTextureTransfer::ITextureTransfer,1> *)(*pcVar3)();
      return pTVar6;
    }
    if (*(longlong *)((this->TransferObjects).AllocatorInstance.Data + lVar8 * 0x10) != 0) {
      if (((this->TransferObjects).ArrayNum <= (int)lVar8) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TSharedPtr<UE::GPUTextureTransfer::ITextureTransfer,1> *)(*pcVar3)();
        return pTVar6;
      }
      pFVar1 = (this->TransferObjects).AllocatorInstance.Data;
      __return_storage_ptr__->Object = *(ITextureTransfer **)(pFVar1 + lVar9);
      pTVar2 = *(TReferenceControllerBase<1> **)(pFVar1 + lVar9 + 8);
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
      if (pTVar2 == (TReferenceControllerBase<1> *)0x0) {
        return __return_storage_ptr__;
      }
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
      return __return_storage_ptr__;
    }
  }
LAB_14d759a3b:
  __return_storage_ptr__->Object = (ITextureTransfer *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// Initialize @ 14d759e70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FGPUTextureTransferModule::Initialize(FGPUTextureTransferModule *this)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  wchar_t *pwVar4;
  FString *pFVar5;
  size_t sVar6;
  void *pvVar7;
  ForAnyElementType FVar8;
  FScriptContainerElement *pFVar9;
  int iVar10;
  undefined1 auStackY_158 [32];
  FString local_118;
  FString local_108;
  ForAnyElementType local_f8;
  int local_f0;
  int local_ec;
  FString local_e8;
  char **local_d8;
  int iStack_d0;
  undefined4 uStack_cc;
  FScriptContainerElement *local_c8;
  int iStack_c0;
  undefined4 uStack_bc;
  TStringView<wchar_t> local_b8;
  FScriptContainerElement *local_a8;
  int local_a0;
  FString local_98;
  TArrayView<char_const_*_const,int> local_88;
  TArrayView<char_const_*_const,int> local_78;
  char *local_68;
  char *pcStack_60;
  char *local_58;
  char *pcStack_50;
  char *local_48;
  TStringView<wchar_t> local_40;
  wchar_t *local_30;
  undefined4 local_28;
  wchar_t *local_20;
  int local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_158;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__)
     && (_Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                              _thread_safe_static_guard_0__),
        `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__
        == -1)) {
    pwVar4 = FCommandLine::Get();
    `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline =
         FParse::Param(pwVar4,L"nullrhi");
    _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                         _thread_safe_static_guard_0__);
  }
  if (((PRIVATE_GIsRunningCommandlet == false) || (PRIVATE_GAllowCommandletRendering != false)) &&
     (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline ==
      false)) {
    pwVar4 = FWindowsPlatformProcess::GetBinariesSubdirectory();
    pFVar5 = FPaths::EngineDir(&local_98);
    local_28 = 0x24;
    local_40.DataPtr = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
    iVar3 = (pFVar5->Data).ArrayNum;
    local_30 = L"Binaries/ThirdParty/NVIDIA/GPUDirect";
    iVar10 = 0;
    local_40.Size = iVar3 + -1;
    if (iVar3 == 0) {
      local_40.Size = iVar10;
    }
    local_18 = iVar10;
    local_20 = pwVar4;
    if (pwVar4 != (wchar_t *)0x0) {
      sVar6 = wcslen(pwVar4);
      local_18 = (int)sVar6;
    }
    FPaths::CombineInternal(&local_108,&local_40,3);
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
    FVar8.Data = (FScriptContainerElement *)L"";
    if (local_108.Data.ArrayNum != 0) {
      FVar8.Data = local_108.Data.AllocatorInstance.Data;
    }
    FWindowsPlatformProcess::PushDllDirectory((wchar_t *)FVar8.Data);
    local_118.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_118.Data.ArrayNum = 0;
    local_118.Data.ArrayMax = 0;
    ::FString::operator=(&local_118,L"dvp.dll");
    local_b8.DataPtr = (wchar_t *)local_108.Data.AllocatorInstance.Data;
    local_b8.Size = local_108.Data.ArrayNum + -1;
    if (local_108.Data.ArrayNum == 0) {
      local_b8.Size = iVar10;
    }
    local_a8 = local_118.Data.AllocatorInstance.Data;
    local_a0 = local_118.Data.ArrayNum + -1;
    if (local_118.Data.ArrayNum == 0) {
      local_a0 = 0;
    }
    FPaths::CombineInternal(&local_e8,&local_b8,2);
    if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_118.Data.AllocatorInstance.Data);
    }
    FVar8.Data = (FScriptContainerElement *)L"";
    if (local_e8.Data.ArrayNum != 0) {
      FVar8.Data = local_e8.Data.AllocatorInstance.Data;
    }
    local_118.Data.AllocatorInstance.Data = local_e8.Data.AllocatorInstance.Data;
    local_e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_e8.Data.ArrayNum = 0;
    local_e8.Data.ArrayMax = 0;
    pvVar7 = FWindowsPlatformProcess::GetDllHandle((wchar_t *)FVar8.Data);
    this->TextureTransferHandle = pvVar7;
    if ((pvVar7 == (void *)0x0) && (3 < (byte)LogGPUTextureTransfer._0_1_)) {
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogGPUTextureTransfer);
    }
    FVar8.Data = (FScriptContainerElement *)L"";
    if (local_108.Data.ArrayNum != 0) {
      FVar8.Data = local_108.Data.AllocatorInstance.Data;
    }
    FWindowsPlatformProcess::PopDllDirectory((wchar_t *)FVar8.Data);
    pvVar7 = this->TextureTransferHandle;
    if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_118.Data.AllocatorInstance.Data);
    }
    if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_108.Data.AllocatorInstance.Data);
    }
    if (pvVar7 != (void *)0x0) {
      local_f8.Data = (FScriptContainerElement *)0x0;
      local_68 = "VK_KHR_external_memory";
      local_f0 = 5;
      pcStack_60 = "VK_KHR_external_memory_win32";
      local_58 = "VK_KHR_external_semaphore_win32";
      pcStack_50 = "VK_KHR_surface";
      local_48 = "VK_KHR_win32_surface";
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,5,0,&local_f8,5,&local_ec);
      iStack_c0 = local_f0;
      local_d8 = (char **)0x0;
      iStack_d0 = 0;
      *(char **)local_f8.Data = local_68;
      *(char **)(local_f8.Data + 8) = pcStack_60;
      *(char **)(local_f8.Data + 0x10) = local_58;
      *(char **)(local_f8.Data + 0x18) = pcStack_50;
      *(char **)(local_f8.Data + 0x20) = local_48;
      local_c8 = local_f8.Data;
      if ((local_f0 < 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      local_88._12_4_ = uStack_cc;
      local_88.ArrayNum = iStack_d0;
      local_78._12_4_ = uStack_bc;
      local_78.ArrayNum = iStack_c0;
      local_78.DataPtr = (char **)local_c8;
      local_88.DataPtr = local_d8;
      IVulkanDynamicRHI::AddEnabledDeviceExtensionsAndLayers(&local_78,&local_88);
      if (local_f8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f8.Data);
      }
      iVar3 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x10,8,4,&(this->TransferObjects).AllocatorInstance,
                         &(this->TransferObjects).ArrayNum,&(this->TransferObjects).ArrayMax);
      pFVar9 = (this->TransferObjects).AllocatorInstance.Data + (longlong)iVar3 * 0x10;
      *(undefined8 *)pFVar9 = 0;
      *(undefined8 *)(pFVar9 + 8) = 0;
      *(undefined8 *)(pFVar9 + 0x10) = 0;
      *(undefined8 *)(pFVar9 + 0x18) = 0;
      *(undefined8 *)(pFVar9 + 0x20) = 0;
      *(undefined8 *)(pFVar9 + 0x28) = 0;
      *(undefined8 *)(pFVar9 + 0x30) = 0;
      *(undefined8 *)(pFVar9 + 0x38) = 0;
      InitializeTextureTransfer(this);
    }
  }
  return;
}

// InitializeTextureTransfer @ 14d75a400

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FGPUTextureTransferModule::InitializeTextureTransfer(FGPUTextureTransferModule *this)

{
  ulonglong *puVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  wchar_t *pwVar7;
  size_t sVar8;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar9;
  undefined ***pppuVar10;
  ForAnyElementType FVar11;
  ulonglong uVar12;
  longlong lVar13;
  FScriptContainerElement *pFVar14;
  ulonglong *puVar15;
  undefined1 auStackY_138 [32];
  undefined1 local_f8 [16];
  code *local_e8 [2];
  undefined **local_d8;
  FGPUTextureTransferModule *pFStack_d0;
  undefined8 local_c8;
  undefined ***local_c0;
  undefined1 local_b8 [16];
  undefined **local_a8;
  FGPUTextureTransferModule *pFStack_a0;
  undefined8 local_98;
  undefined ***local_90;
  byte local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  ulonglong local_38 [2];
  
  puVar15 = local_38;
  local_38[0] = __security_cookie.value ^ (ulonglong)auStackY_138;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FString::FString(&local_78,L"RTX A4");
    ::FString::FString(&local_68,L"RTX A5");
    ::FString::FString(&local_58,L"RTX A6");
    ::FString::FString(&local_48,L"Quadro");
    lVar13 = 4;
    SupportedGPUPrefixes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    SupportedGPUPrefixes.ArrayNum = 4;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,4,0,&SupportedGPUPrefixes.AllocatorInstance,4,&SupportedGPUPrefixes.ArrayMax);
    ConstructItems<FString,FString,int>(SupportedGPUPrefixes.AllocatorInstance.Data,&local_78,4);
    do {
      puVar1 = puVar15 + -2;
      puVar15 = puVar15 + -2;
      lVar13 = lVar13 + -1;
      if ((void *)*puVar1 != (void *)0x0) {
        FMemory::Free((void *)*puVar1);
      }
    } while (lVar13 != 0);
    atexit(`FGPUTextureTransferModule::InitializeTextureTransfer'::__l2::
           _dynamic_atexit_destructor_for__SupportedGPUPrefixes__);
    _Init_thread_footer(&::_TSS0);
  }
  if (((this->CachedDriverInfo).VendorId == 0x10de) &&
     (iVar5 = ::FString::Find(&(this->CachedDriverInfo).DeviceDescription,L"Tesla",5,IgnoreCase,
                              FromStart,-1), iVar5 == -1)) {
    bVar4 = true;
  }
  else {
    bVar4 = false;
  }
  pwVar7 = FCommandLine::Get();
  bVar3 = FParse::Param(pwVar7,L"AttachRenderDoc");
  iVar5 = SupportedGPUPrefixes.ArrayNum;
  if (bVar3) {
    if (3 < (byte)LogGPUTextureTransfer._0_1_) {
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogGPUTextureTransfer);
    }
  }
  else if (bVar4) {
    pFVar14 = SupportedGPUPrefixes.AllocatorInstance.Data +
              (longlong)SupportedGPUPrefixes.ArrayNum * 0x10;
    FVar11 = SupportedGPUPrefixes.AllocatorInstance;
    do {
      if (SupportedGPUPrefixes.ArrayNum != iVar5) {
        local_f8[0] = 0;
        `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_f8);
      }
      if (FVar11.Data == pFVar14) {
        return;
      }
      if (*(int *)(FVar11.Data + 8) == 0) {
        pwVar7 = L"";
LAB_14d75a53a:
        sVar8 = wcslen(pwVar7);
        iVar6 = ::FString::Find(&(this->CachedDriverInfo).DeviceDescription,pwVar7,(int)sVar8,
                                IgnoreCase,FromStart,-1);
        if (iVar6 != -1) {
          if (GDynamicRHI == (FDynamicRHI *)0x0) {
            return;
          }
          local_c0 = (undefined ***)0x0;
          local_d8 = &UE::Core::Private::Function::
                      TFunction_OwnedObject<`FGPUTextureTransferModule::InitializeTextureTransfer'::`2'::<lambda_1>,1,0>
                      ::_vftable_;
          local_e8[0] = UE::Core::Private::Function::
                        TFunctionRefCaller<`FGPUTextureTransferModule::InitializeTextureTransfer'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                        ::Call;
          pFStack_d0 = this;
          this_00 = FRenderCommandList::GetInstanceTLS();
          if (this_00 == (FRenderCommandList *)0x0) {
            FRenderThreadCommandPipe::
            Enqueue<TRenderCommandTag<_FGPUTextureTransferModule::InitializeTextureTransfer_::__l2::TSTR_InitializeTextureTransfer233>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                      ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_e8);
          }
          else {
            this_01 = FRenderCommandList::GetRenderThread(this_00);
            local_b8._0_8_ = local_e8[0];
            local_90 = local_c0;
            local_a8 = local_d8;
            pFStack_a0 = pFStack_d0;
            local_98 = local_c8;
            local_e8[0] = (code *)0x0;
            local_88 = 2;
            pFVar9 = (FRenderCommandTag *)
                     TRenderCommandTag<`FGPUTextureTransferModule::InitializeTextureTransfer'::__l2::TSTR_InitializeTextureTransfer233>
                     ::Get();
            UE::RenderCommandPipe::FCommandList::Enqueue
                      (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                                *)local_b8,pFVar9);
            uVar12 = (ulonglong)local_88;
            if ((2 < uVar12) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                   ,0xd4,L""), bVar4)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                          ::__l2::Destructors)[uVar12] ==
                UE::Core::Private::
                TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::
                Destruct) {
              if ((code *)local_b8._0_8_ != (code *)0x0) {
                pppuVar10 = (undefined ***)(local_b8 + 0x10);
                if (local_90 != (undefined ***)0x0) {
                  pppuVar10 = local_90;
                }
                (*(code *)(*pppuVar10)[2])();
              }
            }
            else {
              (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                          ::__l2::Destructors)[uVar12])(local_b8);
            }
          }
          if (local_e8[0] == (code *)0x0) {
            return;
          }
          pppuVar10 = &local_d8;
          if (local_c0 != (undefined ***)0x0) {
            pppuVar10 = local_c0;
          }
          (*(code *)(*pppuVar10)[2])();
          return;
        }
      }
      else {
        pwVar7 = *(wchar_t **)FVar11.Data;
        if (pwVar7 != (wchar_t *)0x0) goto LAB_14d75a53a;
      }
      FVar11.Data = FVar11.Data + 0x10;
    } while( true );
  }
  return;
}

// IsAvailable @ 14d75a7d0

bool __cdecl FGPUTextureTransferModule::IsAvailable(void)

{
  FName FVar1;
  TConsoleVariableData<bool> *pTVar2;
  bool bVar3;
  FName *pFVar4;
  FModuleManager *pFVar5;
  IModuleInterface *pIVar6;
  longlong lVar7;
  FName local_res8 [4];
  
  pFVar4 = ::FName::FName(local_res8,"GPUTextureTransfer");
  FVar1 = *pFVar4;
  pFVar5 = FModuleManager::Get();
  pIVar6 = FModuleManager::LoadModuleChecked(pFVar5,FVar1);
  if (*(char *)(pIVar6 + 2) == '\0') {
    return false;
  }
  pFVar4 = ::FName::FName(local_res8,"GPUTextureTransfer");
  FVar1 = *pFVar4;
  pFVar5 = FModuleManager::Get();
  FModuleManager::LoadModuleChecked(pFVar5,FVar1);
  pTVar2 = CVarMediaIOEnableGPUDirect.Ref;
  bVar3 = IsInParallelGameThread();
  if ((bVar3) || (bVar3 = IsInGameThread(), bVar3)) {
    lVar7 = 0;
  }
  else {
    lVar7 = 1;
  }
  if (pTVar2->ShadowedValue[lVar7] == false) {
    return false;
  }
  return true;
}

// IsEnabled @ 14d75a870

bool __thiscall FGPUTextureTransferModule::IsEnabled(FGPUTextureTransferModule *this)

{
  TConsoleVariableData<bool> *pTVar1;
  bool bVar2;
  
  pTVar1 = CVarMediaIOEnableGPUDirect.Ref;
  bVar2 = IsInParallelGameThread();
  if (!bVar2) {
    bVar2 = IsInGameThread();
    if (!bVar2) {
      return pTVar1->ShadowedValue[1];
    }
  }
  return pTVar1->ShadowedValue[0];
}

// IsInitialized @ 14d75a8b0

bool __thiscall FGPUTextureTransferModule::IsInitialized(FGPUTextureTransferModule *this)

{
  return (bool)this->bInitialized;
}

// LoadGPUDirectBinary @ 14d75a8e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FGPUTextureTransferModule::LoadGPUDirectBinary(FGPUTextureTransferModule *this)

{
  int iVar1;
  wchar_t *_Str;
  FString *pFVar2;
  size_t sVar3;
  void *pvVar4;
  ForAnyElementType FVar5;
  int iVar6;
  undefined1 auStack_98 [32];
  FString local_78;
  FString local_68;
  FString local_58;
  TStringView<wchar_t> local_48;
  FScriptContainerElement *local_38;
  int local_30;
  wchar_t *local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  _Str = FWindowsPlatformProcess::GetBinariesSubdirectory();
  pFVar2 = FPaths::EngineDir(&local_58);
  local_30 = 0x24;
  local_48.DataPtr = (wchar_t *)(pFVar2->Data).AllocatorInstance.Data;
  iVar1 = (pFVar2->Data).ArrayNum;
  local_38 = (FScriptContainerElement *)0x152bc9c70;
  iVar6 = 0;
  local_48.Size = iVar1 + -1;
  if (iVar1 == 0) {
    local_48.Size = iVar6;
  }
  local_20 = iVar6;
  local_28 = _Str;
  if (_Str != (wchar_t *)0x0) {
    sVar3 = wcslen(_Str);
    local_20 = (int)sVar3;
  }
  FPaths::CombineInternal(&local_68,&local_48,3);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  FVar5.Data = (FScriptContainerElement *)L"";
  if (local_68.Data.ArrayNum != 0) {
    FVar5.Data = local_68.Data.AllocatorInstance.Data;
  }
  FWindowsPlatformProcess::PushDllDirectory((wchar_t *)FVar5.Data);
  local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.Data.ArrayNum = 0;
  local_78.Data.ArrayMax = 0;
  ::FString::operator=(&local_78,L"dvp.dll");
  local_48.DataPtr = (wchar_t *)local_68.Data.AllocatorInstance.Data;
  local_48.Size = local_68.Data.ArrayNum + -1;
  if (local_68.Data.ArrayNum == 0) {
    local_48.Size = iVar6;
  }
  local_38 = local_78.Data.AllocatorInstance.Data;
  local_30 = local_78.Data.ArrayNum + -1;
  if (local_78.Data.ArrayNum == 0) {
    local_30 = 0;
  }
  FPaths::CombineInternal(&local_58,&local_48,2);
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  FVar5.Data = (FScriptContainerElement *)L"";
  if (local_58.Data.ArrayNum != 0) {
    FVar5.Data = local_58.Data.AllocatorInstance.Data;
  }
  local_78.Data.AllocatorInstance.Data = local_58.Data.AllocatorInstance.Data;
  pvVar4 = FWindowsPlatformProcess::GetDllHandle((wchar_t *)FVar5.Data);
  this->TextureTransferHandle = pvVar4;
  if ((pvVar4 == (void *)0x0) && (3 < (byte)LogGPUTextureTransfer._0_1_)) {
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogGPUTextureTransfer);
  }
  FVar5.Data = (FScriptContainerElement *)L"";
  if (local_68.Data.ArrayNum != 0) {
    FVar5.Data = local_68.Data.AllocatorInstance.Data;
  }
  FWindowsPlatformProcess::PopDllDirectory((wchar_t *)FVar5.Data);
  pvVar4 = this->TextureTransferHandle;
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  return pvVar4 != (void *)0x0;
}

// OnEnableGPUDirectCVarChange @ 14d75ae30

void __thiscall
FGPUTextureTransferModule::OnEnableGPUDirectCVarChange
          (FGPUTextureTransferModule *this,IConsoleVariable *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*(longlong *)param_1 + 0xc0))(param_1);
  if ((cVar1 != '\0') && (this->bInitialized == (atomic<bool>)0x0)) {
    Initialize(this);
    return;
  }
  return;
}

// UninitializeTextureTransfer @ 14d75c750

void __thiscall
FGPUTextureTransferModule::UninitializeTextureTransfer(FGPUTextureTransferModule *this)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  byte bVar4;
  longlong lVar6;
  uint uVar5;
  
  uVar5 = 1;
  lVar6 = 0x10;
  do {
    if ((this->TransferObjects).ArrayNum <= (int)uVar5) {
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
    plVar1 = *(longlong **)((this->TransferObjects).AllocatorInstance.Data + lVar6);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x80))();
    }
    bVar4 = (char)uVar5 + 1;
    uVar5 = (uint)bVar4;
    lVar6 = lVar6 + 0x10;
  } while (bVar4 < 4);
  return;
}

