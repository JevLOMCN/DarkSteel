// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioExtensions
// Functions: 12

// GetEndpointTypeName @ 14452b6a0

FName __thiscall IAudioEndpointFactory::GetEndpointTypeName(IAudioEndpointFactory *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// CreateNewEndpointInstance @ 14452b730

TUniquePtr<IAudioEndpoint,TDefaultDelete<IAudioEndpoint>_> __thiscall
IAudioEndpointFactory::CreateNewEndpointInstance
          (IAudioEndpointFactory *this,FAudioPluginInitializationParams *param_1,
          IAudioEndpointSettingsProxy *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0xf8);
  if (puVar1 != (undefined8 *)0x0) {
    memset(puVar1 + 5,0,0xd0);
    *puVar1 = &___7IAudioEndpoint__6B_;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(puVar1 + 5),4000);
    puVar1[10] = 0;
    puVar1[0xb] = 0;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(puVar1 + 0xc),4000);
    puVar1[0x11] = 0;
    puVar1[0x12] = 0;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(puVar1 + 0x13),4000);
    puVar1[0x18] = 0;
    puVar1[0x19] = 0;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(puVar1 + 0x1a),4000);
    *(undefined8 **)param_1 = puVar1;
    return (TUniquePtr<IAudioEndpoint,TDefaultDelete<IAudioEndpoint>_>)(IAudioEndpoint *)param_1;
  }
  param_1->NumSources = 0;
  param_1->NumOutputChannels = 0;
  return (TUniquePtr<IAudioEndpoint,TDefaultDelete<IAudioEndpoint>_>)(IAudioEndpoint *)param_1;
}

// GetCustomSettingsClass @ 14452b820

UClass * __thiscall IAudioEndpointFactory::GetCustomSettingsClass(IAudioEndpointFactory *this)

{
  return (UClass *)0x0;
}

// GetDefaultSettings @ 14452b830

UAudioEndpointSettingsBase * __thiscall
IAudioEndpointFactory::GetDefaultSettings(IAudioEndpointFactory *this)

{
  UClass *this_00;
  
  this_00 = UDummyEndpointSettings::StaticClass();
  if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this_00);
    return (UAudioEndpointSettingsBase *)(this_00->ClassDefaultObject).field0_0x0.DebugPtr;
  }
  return (UAudioEndpointSettingsBase *)(this_00->ClassDefaultObject).field0_0x0.DebugPtr;
}

// ~IAudioEndpointFactory @ 1445309b0

void __thiscall IAudioEndpointFactory::~IAudioEndpointFactory(IAudioEndpointFactory *this)

{
  this->_padding_ = (longlong)&___7IAudioEndpointFactory__6B_;
  return;
}

// Get @ 144533390

/* WARNING: Enum "Type": Some values do not have unique names */

IAudioEndpointFactory * __cdecl IAudioEndpointFactory::Get(FName *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  IModularFeatures *pIVar3;
  FName *pFVar4;
  IAudioEndpointFactory *pIVar5;
  ForAnyElementType FVar6;
  int *piVar7;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  TArray<IAudioEndpointFactory_*,TSizedDefaultAllocator<32>_> local_48;
  FString local_38;
  
  piVar7 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if ((*piVar7 < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&DefaultEndpointName,L"Default Endpoint");
    _Init_thread_footer(&::_TSS0);
  }
  if ((*param_1 == DefaultEndpointName) || (*param_1 == (FName)0x0)) {
    return (IAudioEndpointFactory *)0x0;
  }
  pIVar3 = IModularFeatures::Get();
  (**(code **)((longlong)*pIVar3 + 8))(pIVar3);
  pIVar3 = IModularFeatures::Get();
  if ((*piVar7 < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&ModularFeatureName,L"External Audio Endpoint");
    _Init_thread_footer(&::_TSS0);
  }
  IModularFeatures::GetModularFeatureImplementations<IAudioEndpointFactory>
            (pIVar3,&local_48,ModularFeatureName);
  pIVar3 = IModularFeatures::Get();
  (**(code **)((longlong)*pIVar3 + 0x10))(pIVar3);
  iVar2 = local_48.ArrayNum;
  pFVar1 = local_48.AllocatorInstance.Data + (longlong)local_48.ArrayNum * 8;
  FVar6.Data = local_48.AllocatorInstance.Data;
  while( true ) {
    if (local_48.ArrayNum != iVar2) {
      `TCheckedPointerIterator<IAudioEndpointFactory_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (FVar6.Data == pFVar1) break;
    pIVar5 = *(IAudioEndpointFactory **)FVar6.Data;
    if (((pIVar5 != (IAudioEndpointFactory *)0x0) && (pIVar5->bIsImplemented != false)) &&
       (pFVar4 = (FName *)(**(code **)(pIVar5->_padding_ + 8))(pIVar5,local_res10),
       *param_1 == *pFVar4)) goto LAB_1445334eb;
    FVar6.Data = FVar6.Data + 8;
  }
  if (3 < (byte)LogAudioEndpoints._0_1_) {
    ::FName::ToString(param_1,&local_38);
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogAudioEndpoints);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if ((*piVar7 < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    atexit(`IAudioEndpointFactory::GetDummyFactory'::__l2::
           _dynamic_atexit_destructor_for__DummyFactory__);
    _Init_thread_footer(&::_TSS0);
  }
  pIVar5 = &DummyFactory;
LAB_1445334eb:
  if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.AllocatorInstance.Data);
  }
  return pIVar5;
}

// GetAvailableEndpointTypes @ 144533d60

TArray<FName,TSizedDefaultAllocator<32>_> * __cdecl
IAudioEndpointFactory::GetAvailableEndpointTypes
          (TArray<FName,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FName *pFVar6;
  FModuleManager *this;
  IModuleInterface *pIVar7;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar8;
  IModularFeatures *pIVar9;
  ForAnyElementType FVar10;
  ulonglong uVar11;
  undefined1 local_res8 [8];
  FName local_res10;
  undefined1 local_res18 [16];
  FName local_48;
  TArray<IAudioEndpointFactory_*,TSizedDefaultAllocator<32>_> local_40;
  
  FModuleManager::Get();
  pFVar6 = ::FName::FName(&local_res10,L"AudioExtensions");
  FVar2 = *pFVar6;
  this = FModuleManager::Get();
  pIVar7 = FModuleManager::LoadModule(this,FVar2,None);
  if (pIVar7 == (IModuleInterface *)0x0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_6129695673227935558>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioExtensions\\Private\\IAudioEndpoint.cpp"
                       ,0xba,"FAudioExtensionsModule::Get() != nullptr");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar8 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
      return pTVar8;
    }
  }
  uVar11 = (ulonglong)_tls_index;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar11 * 8) + 0x9d4c) < ::_TSS0)
  {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&DefaultEndpointName,L"Default Endpoint");
      _Init_thread_footer(&::_TSS0);
    }
  }
  pFVar6 = (FName *)(__return_storage_ptr__->AllocatorInstance).Data;
  local_48 = DefaultEndpointName;
  if ((pFVar6 <= &local_48) && (&local_48 < pFVar6 + __return_storage_ptr__->ArrayMax)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar8 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
      return pTVar8;
    }
  }
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == __return_storage_ptr__->ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x408,&__return_storage_ptr__->AllocatorInstance,
                       &__return_storage_ptr__->ArrayMax);
  }
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  *(FName *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 8) = local_48;
  pIVar9 = IModularFeatures::Get();
  (**(code **)((longlong)*pIVar9 + 8))(pIVar9);
  pIVar9 = IModularFeatures::Get();
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar11 * 8) + 0x9d4c) < ::_TSS0)
  {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&ModularFeatureName,L"External Audio Endpoint");
      _Init_thread_footer(&::_TSS0);
    }
  }
  IModularFeatures::GetModularFeatureImplementations<IAudioEndpointFactory>
            (pIVar9,&local_40,ModularFeatureName);
  pIVar9 = IModularFeatures::Get();
  (**(code **)((longlong)*pIVar9 + 0x10))(pIVar9);
  iVar5 = local_40.ArrayNum;
  pFVar1 = local_40.AllocatorInstance.Data + (longlong)iVar5 * 8;
  FVar10.Data = local_40.AllocatorInstance.Data;
  while( true ) {
    if (local_40.ArrayNum != iVar5) {
      `TCheckedPointerIterator<IAudioEndpointFactory_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (FVar10.Data == pFVar1) break;
    pFVar6 = (FName *)(**(code **)(**(longlong **)FVar10.Data + 8))
                                (*(longlong **)FVar10.Data,local_res18);
    TArray<FName,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FName>(__return_storage_ptr__,pFVar6);
    FVar10.Data = FVar10.Data + 8;
  }
  if (local_40.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_40.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetDummyFactory @ 1445345e0

IAudioEndpointFactory * __cdecl IAudioEndpointFactory::GetDummyFactory(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`IAudioEndpointFactory::GetDummyFactory'::__l2::
             _dynamic_atexit_destructor_for__DummyFactory__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return &DummyFactory;
}

// GetModularFeatureName @ 144534780

FName __cdecl IAudioEndpointFactory::GetModularFeatureName(void)

{
  FName in_RCX;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&ModularFeatureName,L"External Audio Endpoint");
      _Init_thread_footer(&::_TSS0);
    }
  }
  *(FName *)in_RCX = ModularFeatureName;
  return in_RCX;
}

// GetTypeNameForDefaultEndpoint @ 1445358a0

FName __cdecl IAudioEndpointFactory::GetTypeNameForDefaultEndpoint(void)

{
  FName in_RCX;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&DefaultEndpointName,L"Default Endpoint");
      _Init_thread_footer(&::_TSS0);
    }
  }
  *(FName *)in_RCX = DefaultEndpointName;
  return in_RCX;
}

// RegisterEndpointType @ 144536ac0

void __cdecl IAudioEndpointFactory::RegisterEndpointType(IAudioEndpointFactory *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  IModularFeatures *pIVar1;
  bool *pbVar2;
  
  pIVar1 = IModularFeatures::Get();
  pbVar2 = &param_1->bIsImplemented;
  if (param_1 == (IAudioEndpointFactory *)0x0) {
    pbVar2 = (bool *)0x0;
  }
  UNRECOVERED_JUMPTABLE = *(code **)((longlong)*pIVar1 + 0x28);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&ModularFeatureName,L"External Audio Endpoint");
      _Init_thread_footer(&::_TSS0);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000144536b3a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(pIVar1,ModularFeatureName,pbVar2);
  return;
}

// UnregisterEndpointType @ 144538090

void __cdecl IAudioEndpointFactory::UnregisterEndpointType(IAudioEndpointFactory *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  IModularFeatures *pIVar1;
  bool *pbVar2;
  
  pIVar1 = IModularFeatures::Get();
  pbVar2 = &param_1->bIsImplemented;
  if (param_1 == (IAudioEndpointFactory *)0x0) {
    pbVar2 = (bool *)0x0;
  }
  UNRECOVERED_JUMPTABLE = *(code **)((longlong)*pIVar1 + 0x30);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&ModularFeatureName,L"External Audio Endpoint");
      _Init_thread_footer(&::_TSS0);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014453810a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(pIVar1,ModularFeatureName,pbVar2);
  return;
}

