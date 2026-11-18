// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioExtensions
// Functions: 7

// CanTranscodeToSoundfieldFormat @ 144532590

bool __thiscall
ISoundfieldEndpointFactory::CanTranscodeToSoundfieldFormat
          (ISoundfieldEndpointFactory *this,FName param_1,ISoundfieldEncodingSettingsProxy *param_2)

{
  return false;
}

// CreateDecoderStream @ 144532930

TUniquePtr<ISoundfieldDecoderStream,TDefaultDelete<ISoundfieldDecoderStream>_> __thiscall
ISoundfieldEndpointFactory::CreateDecoderStream
          (ISoundfieldEndpointFactory *this,FAudioPluginInitializationParams *param_1,
          ISoundfieldEncodingSettingsProxy *param_2)

{
  code *pcVar1;
  bool bVar2;
  TUniquePtr<ISoundfieldDecoderStream,TDefaultDelete<ISoundfieldDecoderStream>_> TVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioExtensions\\Private\\ISoundfieldEndpoint.cpp"
                     ,0xa9,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    TVar3.Ptr = (ISoundfieldDecoderStream *)(*pcVar1)();
    return (TUniquePtr<ISoundfieldDecoderStream,TDefaultDelete<ISoundfieldDecoderStream>_>)TVar3.Ptr
    ;
  }
  param_1->NumSources = 0;
  param_1->NumOutputChannels = 0;
  return (TUniquePtr<ISoundfieldDecoderStream,TDefaultDelete<ISoundfieldDecoderStream>_>)
         (ISoundfieldDecoderStream *)param_1;
}

// DefaultSoundfieldEndpointName @ 144532da0

FName __cdecl ISoundfieldEndpointFactory::DefaultSoundfieldEndpointName(void)

{
  FName in_RCX;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&DefaultEndpointName,L"Default Soundfield Endpoint");
      _Init_thread_footer(&::_TSS0);
    }
  }
  *(FName *)in_RCX = DefaultEndpointName;
  return in_RCX;
}

// Get @ 144533670

ISoundfieldEndpointFactory * __cdecl ISoundfieldEndpointFactory::Get(FName *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  IModularFeatures *pIVar3;
  FName *pFVar4;
  int *piVar5;
  ForAnyElementType FVar6;
  ISoundfieldEndpointFactory *pIVar7;
  FName *local_res8;
  undefined1 local_res10 [8];
  TArray<ISoundfieldEndpointFactory_*,TSizedDefaultAllocator<32>_> local_28;
  
  piVar5 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar5 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&DefaultEndpointName,L"Default Soundfield Endpoint");
      _Init_thread_footer(&::_TSS0);
    }
  }
  if ((*param_1 == DefaultEndpointName) || (*param_1 == (FName)0x0)) {
    return (ISoundfieldEndpointFactory *)0x0;
  }
  pIVar3 = IModularFeatures::Get();
  (**(code **)((longlong)*pIVar3 + 8))(pIVar3);
  pIVar3 = IModularFeatures::Get();
  if (*piVar5 < `public:_static_class_FName___cdecl_ISoundfieldEndpointFactory::GetModularFeatureName(void)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName___cdecl_ISoundfieldEndpointFactory::GetModularFeatureName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName___cdecl_ISoundfieldEndpointFactory::GetModularFeatureName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_static_class_FName___cdecl_ISoundfieldEndpointFactory::GetModularFeatureName(void)'
                      ::__l2::SoundfieldEndpointName,L"Soundfield Endpoint");
      _Init_thread_footer(&`public:_static_class_FName___cdecl_ISoundfieldEndpointFactory::GetModularFeatureName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  IModularFeatures::GetModularFeatureImplementations<ISoundfieldEndpointFactory>
            (pIVar3,&local_28,
             `public:_static_class_FName___cdecl_ISoundfieldEndpointFactory::GetModularFeatureName(void)'
             ::__l2::SoundfieldEndpointName);
  pIVar3 = IModularFeatures::Get();
  (**(code **)((longlong)*pIVar3 + 0x10))(pIVar3);
  iVar2 = local_28.ArrayNum;
  pFVar1 = local_28.AllocatorInstance.Data + (longlong)local_28.ArrayNum * 8;
  FVar6.Data = local_28.AllocatorInstance.Data;
  while( true ) {
    if (local_28.ArrayNum != iVar2) {
      `TCheckedPointerIterator<ISoundfieldEndpointFactory_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_res8);
    }
    if (FVar6.Data == pFVar1) break;
    pIVar7 = *(ISoundfieldEndpointFactory **)FVar6.Data;
    if (pIVar7 != (ISoundfieldEndpointFactory *)0x0) {
      pFVar4 = (FName *)(**(code **)((longlong)*pIVar7 + 0x70))(pIVar7,local_res10);
      if (*param_1 == *pFVar4) goto LAB_144533770;
    }
    FVar6.Data = FVar6.Data + 8;
  }
  local_res8 = param_1;
  `ISoundfieldEndpointFactory::Get'::__l2::<lambda_1>::operator()(&local_res8);
  pIVar7 = (ISoundfieldEndpointFactory *)0x0;
LAB_144533770:
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  return pIVar7;
}

// GetAllSoundfieldEndpointTypes @ 144533a40

TArray<FName,TSizedDefaultAllocator<32>_> * __cdecl
ISoundfieldEndpointFactory::GetAllSoundfieldEndpointTypes
          (TArray<FName,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  FName FVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  FName *pFVar8;
  FModuleManager *this;
  IModuleInterface *pIVar9;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar10;
  IModularFeatures *pIVar11;
  FScriptContainerElement *pFVar12;
  ulonglong uVar13;
  ForAnyElementType FVar14;
  undefined1 local_res8 [8];
  FName local_res10;
  undefined1 local_res18 [8];
  FName local_48;
  TArray<ISoundfieldEndpointFactory_*,TSizedDefaultAllocator<32>_> local_40;
  
  FModuleManager::Get();
  pFVar8 = ::FName::FName(&local_res10,L"AudioExtensions");
  FVar2 = *pFVar8;
  this = FModuleManager::Get();
  pIVar9 = FModuleManager::LoadModule(this,FVar2,None);
  if (pIVar9 == (IModuleInterface *)0x0) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_7103220469804826482>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioExtensions\\Private\\ISoundfieldEndpoint.cpp"
                       ,0x8e,"FAudioExtensionsModule::Get() != nullptr");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar10 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
      return pTVar10;
    }
  }
  uVar13 = (ulonglong)_tls_index;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar13 * 8) + 0x9d4c) < ::_TSS0)
  {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&DefaultEndpointName,L"Default Soundfield Endpoint");
      _Init_thread_footer(&::_TSS0);
    }
  }
  pFVar8 = (FName *)(__return_storage_ptr__->AllocatorInstance).Data;
  local_48 = DefaultEndpointName;
  if ((pFVar8 <= &local_48) && (&local_48 < pFVar8 + __return_storage_ptr__->ArrayMax)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar10 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
      return pTVar10;
    }
  }
  iVar6 = __return_storage_ptr__->ArrayNum;
  if (iVar6 == __return_storage_ptr__->ArrayMax) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x408,&__return_storage_ptr__->AllocatorInstance,
                       &__return_storage_ptr__->ArrayMax);
  }
  __return_storage_ptr__->ArrayNum = iVar6 + 1;
  *(FName *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar6 * 8) = local_48;
  pIVar11 = IModularFeatures::Get();
  (**(code **)((longlong)*pIVar11 + 8))(pIVar11);
  pIVar11 = IModularFeatures::Get();
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar13 * 8) + 0x9d4c) <
      `public:_static_class_FName___cdecl_ISoundfieldEndpointFactory::GetModularFeatureName(void)'::
      __l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName___cdecl_ISoundfieldEndpointFactory::GetModularFeatureName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName___cdecl_ISoundfieldEndpointFactory::GetModularFeatureName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_static_class_FName___cdecl_ISoundfieldEndpointFactory::GetModularFeatureName(void)'
                      ::__l2::SoundfieldEndpointName,L"Soundfield Endpoint");
      _Init_thread_footer(&`public:_static_class_FName___cdecl_ISoundfieldEndpointFactory::GetModularFeatureName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  IModularFeatures::GetModularFeatureImplementations<ISoundfieldEndpointFactory>
            (pIVar11,&local_40,
             `public:_static_class_FName___cdecl_ISoundfieldEndpointFactory::GetModularFeatureName(void)'
             ::__l2::SoundfieldEndpointName);
  pIVar11 = IModularFeatures::Get();
  (**(code **)((longlong)*pIVar11 + 0x10))(pIVar11);
  iVar6 = local_40.ArrayNum;
  pFVar1 = local_40.AllocatorInstance.Data + (longlong)iVar6 * 8;
  FVar14.Data = local_40.AllocatorInstance.Data;
  while( true ) {
    if (local_40.ArrayNum != iVar6) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<ISoundfieldEndpointFactory_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (FVar14.Data == pFVar1) break;
    pFVar12 = (FScriptContainerElement *)
              (**(code **)(**(longlong **)FVar14.Data + 0x70))
                        (*(longlong **)FVar14.Data,local_res18);
    pFVar3 = (__return_storage_ptr__->AllocatorInstance).Data;
    if ((pFVar3 <= pFVar12) && (pFVar12 < pFVar3 + (longlong)__return_storage_ptr__->ArrayMax * 8))
    {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar10 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
        return pTVar10;
      }
    }
    iVar7 = __return_storage_ptr__->ArrayNum;
    if (iVar7 == __return_storage_ptr__->ArrayMax) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x408,&__return_storage_ptr__->AllocatorInstance,
                         &__return_storage_ptr__->ArrayMax);
    }
    __return_storage_ptr__->ArrayNum = iVar7 + 1;
    FVar14.Data = FVar14.Data + 8;
    *(undefined8 *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar7 * 8) =
         *(undefined8 *)pFVar12;
  }
  if (local_40.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_40.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetSoundfieldFormatName @ 144535850

FName __thiscall
ISoundfieldEndpointFactory::GetSoundfieldFormatName(ISoundfieldEndpointFactory *this)

{
  FName in_RDX;
  
  (**(code **)((longlong)*this + 0x70))();
  return in_RDX;
}

// operator() @ 1504bfed0

bool __thiscall `ISoundfieldEndpointFactory::Get'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_7103220469804826489>);
  if (bVar2) {
    ::FName::ToString(*(FName **)this,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_7103220469804826489>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_1504bff37;
    }
  }
  bVar2 = false;
LAB_1504bff37:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

