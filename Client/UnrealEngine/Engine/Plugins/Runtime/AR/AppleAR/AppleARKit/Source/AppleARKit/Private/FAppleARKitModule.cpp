// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AppleARKit
// Functions: 7

// CreateTrackingSystem @ 14cfcb9f0

TSharedPtr<IXRTrackingSystem,1> * __thiscall
FAppleARKitModule::CreateTrackingSystem
          (FAppleARKitModule *this,TSharedPtr<IXRTrackingSystem,1> *__return_storage_ptr__)

{
  __return_storage_ptr__->Object = (IXRTrackingSystem *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// GetModuleKeyName @ 14cfcba10

FString * __thiscall
FAppleARKitModule::GetModuleKeyName(FAppleARKitModule *this,FString *__return_storage_ptr__)

{
  int *piVar1;
  ForAnyElementType _Src;
  int iVar2;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FString::FString(&ModuleKeyName,L"AppleARKit");
      atexit(`FAppleARKitModule::GetModuleKeyName'::__l2::
             _dynamic_atexit_destructor_for__ModuleKeyName__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  piVar1 = &(__return_storage_ptr__->Data).ArrayMax;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  _Src = ModuleKeyName.Data.AllocatorInstance;
  iVar2 = ModuleKeyName.Data.ArrayNum;
  (__return_storage_ptr__->Data).ArrayNum = iVar2;
  if (iVar2 == 0) {
    *piVar1 = 0;
    return __return_storage_ptr__;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,iVar2,0,(ForAnyElementType *)__return_storage_ptr__,iVar2,piVar1);
  memcpy((__return_storage_ptr__->Data).AllocatorInstance.Data,_Src.Data,(longlong)iVar2 * 2);
  return __return_storage_ptr__;
}

// StartupModule @ 14cfcbb10

void __thiscall FAppleARKitModule::StartupModule(FAppleARKitModule *this)

{
  code *pcVar1;
  bool bVar2;
  FModuleManager *this_00;
  FName *pFVar3;
  IModuleInterface *pIVar4;
  IModularFeatures *pIVar5;
  IPluginManager *pIVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  FAppleARKitModule *pFVar9;
  undefined1 local_res8 [8];
  FName local_res10;
  FAppleARKitModule local_res18;
  uint uStack_ac;
  FString local_a8;
  FString local_98;
  TStringView<wchar_t> local_88;
  wchar_t *local_78;
  undefined4 local_70;
  code *local_68;
  longlong lStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  void *local_48 [2];
  undefined1 local_38 [8];
  TReferenceControllerBase<1> *local_30;
  
  this_00 = FModuleManager::Get();
  pFVar3 = ::FName::FName(&local_res10,"AugmentedReality");
  pIVar4 = FModuleManager::LoadModule(this_00,*pFVar3,None);
  if (pIVar4 == (IModuleInterface *)0x0) {
    local_res8[0] = 0;
    `FAppleARKitModule::StartupModule'::__l2::<lambda_1>::operator()(local_res8);
  }
  pIVar5 = IModularFeatures::Get();
  pFVar9 = this + 1;
  if (this == (FAppleARKitModule *)0x0) {
    pFVar9 = (FAppleARKitModule *)0x0;
  }
  pcVar1 = *(code **)((longlong)*pIVar5 + 0x28);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName___cdecl_IHeadMountedDisplayModule::GetModularFeatureName(void)'::
      __l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName___cdecl_IHeadMountedDisplayModule::GetModularFeatureName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName___cdecl_IHeadMountedDisplayModule::GetModularFeatureName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_static_class_FName___cdecl_IHeadMountedDisplayModule::GetModularFeatureName(void)'
                      ::__l2::HMDFeatureName,L"HMD");
      _Init_thread_footer(&`public:_static_class_FName___cdecl_IHeadMountedDisplayModule::GetModularFeatureName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  (*pcVar1)(pIVar5,`public:_static_class_FName___cdecl_IHeadMountedDisplayModule::GetModularFeatureName(void)'
                   ::__l2::HMDFeatureName,pFVar9);
  lStack_60 = (ulonglong)uStack_ac << 0x20;
  local_68 = PreExit;
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
  AddRaw<FAppleARKitModule>
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &FCoreDelegates::OnPreExit,&local_res18,(pmf_24396fe9 *)this);
  pIVar6 = IPluginManager::Get();
  local_58 = 0x507b63c8;
  uStack_54 = 1;
  uStack_50 = 10;
  plVar7 = (longlong *)(**(code **)((longlong)*pIVar6 + 0x70))(pIVar6,local_38,&local_58);
  if (*plVar7 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  puVar8 = (undefined8 *)(**(code **)(*(longlong *)*plVar7 + 0x20))((longlong *)*plVar7,local_48);
  local_70 = 7;
  local_88.DataPtr = (wchar_t *)*puVar8;
  local_88.Size = *(int *)(puVar8 + 1) + -1;
  if (*(int *)(puVar8 + 1) == 0) {
    local_88.Size = 0;
  }
  local_78 = L"Shaders";
  FPaths::CombineInternal(&local_98,&local_88,2);
  if (local_48[0] != (void *)0x0) {
    FMemory::Free(local_48[0]);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_30);
  ::FString::FString(&local_a8,L"/AppleARKit");
  AddShaderSourceDirectoryMapping(&local_a8,&local_98);
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  return;
}

// ShutdownModule @ 14cfcbd40

void __thiscall FAppleARKitModule::ShutdownModule(FAppleARKitModule *this)

{
  return;
}

// GetARKitSystem @ 14cfd59b0

TSharedPtr<FAppleARKitSystem,1> * __cdecl
FAppleARKitModule::GetARKitSystem(TSharedPtr<FAppleARKitSystem,1> *__return_storage_ptr__)

{
  atomic<int> aVar1;
  FWeakReferencer<1> FVar2;
  atomic<int> aVar3;
  bool bVar4;
  
  __return_storage_ptr__->Object = (FAppleARKitSystem *)0x0;
  FVar2 = FAppleARKitARKitSystemPtr.WeakReferenceCount;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       FAppleARKitARKitSystemPtr.WeakReferenceCount.ReferenceController;
  if (FVar2.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = (FVar2.ReferenceController)->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        break;
      }
      LOCK();
      aVar3 = (FVar2.ReferenceController)->SharedReferenceCount;
      bVar4 = aVar1 == aVar3;
      if (bVar4) {
        (FVar2.ReferenceController)->SharedReferenceCount = (atomic<int>)((int)aVar1 + 1);
        aVar3 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar3;
    } while (!bVar4);
  }
  if ((__return_storage_ptr__->SharedReferenceCount).ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Object = FAppleARKitARKitSystemPtr.Object;
  }
  return __return_storage_ptr__;
}

// PreExit @ 14cfdc630

void __thiscall FAppleARKitModule::PreExit(FAppleARKitModule *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  code *pcVar3;
  atomic<int> aVar4;
  FWeakReferencer<1> FVar5;
  FWeakReferencer<1> FVar6;
  FAppleARKitSystem *pFVar7;
  bool bVar8;
  
  FVar6.ReferenceController = FAppleARKitARKitSystemPtr.WeakReferenceCount.ReferenceController;
  if (((FAppleARKitARKitSystemPtr.Object == (FAppleARKitSystem *)0x0) ||
      (FAppleARKitARKitSystemPtr.WeakReferenceCount.ReferenceController ==
       (TReferenceControllerBase<1> *)0x0)) ||
     ((int)(FAppleARKitARKitSystemPtr.WeakReferenceCount.ReferenceController)->SharedReferenceCount
      < 1)) goto LAB_14cfdc6eb;
  FVar5.ReferenceController = FVar6.ReferenceController;
  pFVar7 = (FAppleARKitSystem *)0x0;
  if (FAppleARKitARKitSystemPtr.WeakReferenceCount.ReferenceController ==
      (TReferenceControllerBase<1> *)0x0) {
LAB_14cfdc697:
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    FVar6.ReferenceController = FVar5.ReferenceController;
    if (bVar8) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    aVar2 = (FAppleARKitARKitSystemPtr.WeakReferenceCount.ReferenceController)->SharedReferenceCount
    ;
    do {
      FVar5.ReferenceController = (TReferenceControllerBase<1> *)(FAppleARKitSystem *)0x0;
      pFVar7 = (FAppleARKitSystem *)0x0;
      if (aVar2 == (atomic<int>)0x0) goto LAB_14cfdc697;
      LOCK();
      aVar4 = (FVar6.ReferenceController)->SharedReferenceCount;
      bVar8 = aVar2 == aVar4;
      if (bVar8) {
        (FVar6.ReferenceController)->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar4 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar4;
    } while (!bVar8);
    FVar5.ReferenceController = FVar6.ReferenceController;
    pFVar7 = FAppleARKitARKitSystemPtr.Object;
    if (FAppleARKitARKitSystemPtr.Object == (FAppleARKitSystem *)0x0) goto LAB_14cfdc697;
  }
  (pFVar7->CameraDepth).field0_0x0.DebugPtr = (UAppleARKitTextureCameraDepth *)0x0;
  (pFVar7->CameraImage).field0_0x0.DebugPtr = (UAppleARKitCameraVideoTexture *)0x0;
  (pFVar7->SceneDepthMap).field0_0x0.DebugPtr = (UAppleARKitTextureCameraImage *)0x0;
  (pFVar7->SceneDepthConfidenceMap).field0_0x0.DebugPtr = (UAppleARKitTextureCameraImage *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar6.ReferenceController);
LAB_14cfdc6eb:
  FVar6.ReferenceController = FAppleARKitARKitSystemPtr.WeakReferenceCount.ReferenceController;
  FAppleARKitARKitSystemPtr.Object = (FAppleARKitSystem *)0x0;
  FAppleARKitARKitSystemPtr.WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  if (FVar6.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(FVar6.ReferenceController)->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
                    /* WARNING: Could not recover jumptable at 0x00014cfdc725. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)((FVar6.ReferenceController)->_padding_ + 8))(FVar6.ReferenceController,1);
      return;
    }
  }
  return;
}

// operator() @ 150578ba0

bool __thiscall `FAppleARKitModule::StartupModule'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<7731411019402051632>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<7731411019402051632>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

