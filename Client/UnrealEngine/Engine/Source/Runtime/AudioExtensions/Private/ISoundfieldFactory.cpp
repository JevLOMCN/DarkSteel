// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioExtensions
// Functions: 9

// Get @ 144533830

ISoundfieldFactory * __cdecl ISoundfieldFactory::Get(FName *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  char cVar3;
  IModularFeatures *pIVar4;
  FName *pFVar5;
  int *piVar6;
  ForAnyElementType FVar7;
  ISoundfieldFactory *pIVar8;
  FName *local_res8;
  undefined1 local_res10 [8];
  TArray<ISoundfieldFactory_*,TSizedDefaultAllocator<32>_> local_28;
  
  piVar6 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar6 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&NoEncodingFormatName,L"No Encoding");
      _Init_thread_footer(&::_TSS0);
    }
  }
  if ((*param_1 == NoEncodingFormatName) || (*param_1 == (FName)0x0)) {
    return (ISoundfieldFactory *)0x0;
  }
  pIVar4 = IModularFeatures::Get();
  (**(code **)((longlong)*pIVar4 + 8))(pIVar4);
  pIVar4 = IModularFeatures::Get();
  if (*piVar6 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&SoundfieldFactoryName,L"Soundfield Format");
      _Init_thread_footer(&::_TSS0);
    }
  }
  IModularFeatures::GetModularFeatureImplementations<ISoundfieldFactory>
            (pIVar4,&local_28,SoundfieldFactoryName);
  pIVar4 = IModularFeatures::Get();
  (**(code **)((longlong)*pIVar4 + 0x10))(pIVar4);
  iVar2 = local_28.ArrayNum;
  pFVar1 = local_28.AllocatorInstance.Data + (longlong)local_28.ArrayNum * 8;
  FVar7.Data = local_28.AllocatorInstance.Data;
  while( true ) {
    if (local_28.ArrayNum != iVar2) {
      `TCheckedPointerIterator<ISoundfieldFactory_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_res8);
    }
    if (FVar7.Data == pFVar1) break;
    pIVar8 = *(ISoundfieldFactory **)FVar7.Data;
    if (pIVar8 != (ISoundfieldFactory *)0x0) {
      pFVar5 = (FName *)(**(code **)((longlong)*pIVar8 + 8))(pIVar8,local_res10);
      if (*param_1 == *pFVar5) {
        cVar3 = (**(code **)((longlong)*pIVar8 + 0x68))(pIVar8);
        if (cVar3 != '\0') {
          `ISoundfieldFactory::Get'::__l15::<lambda_1>::operator()(&local_res8);
        }
LAB_144533949:
        if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.AllocatorInstance.Data);
        }
        return pIVar8;
      }
    }
    FVar7.Data = FVar7.Data + 8;
  }
  local_res8 = param_1;
  `ISoundfieldFactory::Get'::__l2::<lambda_2>::operator()(&local_res8);
  pIVar8 = (ISoundfieldFactory *)0x0;
  goto LAB_144533949;
}

// GetAvailableSoundfieldFormats @ 144533fe0

TArray<FName,TSizedDefaultAllocator<32>_> * __cdecl
ISoundfieldFactory::GetAvailableSoundfieldFormats
          (TArray<FName,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  FName FVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  ulong uVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  FName *pFVar9;
  FModuleManager *this;
  IModuleInterface *pIVar10;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar11;
  IModularFeatures *pIVar12;
  FScriptContainerElement *pFVar13;
  ulonglong uVar14;
  ForAnyElementType FVar15;
  undefined1 local_res8 [8];
  FName local_res10;
  undefined1 local_res18 [8];
  FName local_48;
  FName local_40;
  TArray<ISoundfieldFactory_*,TSizedDefaultAllocator<32>_> local_38;
  
  FModuleManager::Get();
  pFVar9 = ::FName::FName(&local_res10,L"AudioExtensions");
  FVar2 = *pFVar9;
  this = FModuleManager::Get();
  pIVar10 = FModuleManager::LoadModule(this,FVar2,None);
  if (pIVar10 == (IModuleInterface *)0x0) {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<9096041056985677895>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioExtensions\\Private\\ISoundfieldFormat.cpp"
                       ,0x47,"FAudioExtensionsModule::Get() != nullptr");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pTVar11 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
      return pTVar11;
    }
  }
  uVar5 = _tls_index;
  uVar14 = (ulonglong)_tls_index;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar14 * 8) + 0x9d4c) < ::_TSS0)
  {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&InheritedFormatName,L"Inherited Encoding");
      _Init_thread_footer(&::_TSS0);
    }
  }
  pFVar9 = (FName *)(__return_storage_ptr__->AllocatorInstance).Data;
  local_48 = InheritedFormatName;
  if ((pFVar9 <= &local_48) && (&local_48 < pFVar9 + __return_storage_ptr__->ArrayMax)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pTVar11 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
      return pTVar11;
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
  *(FName *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar7 * 8) = local_48;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar14 * 8) + 0x9d4c) < ::_TSS0)
  {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&NoEncodingFormatName,L"No Encoding");
      _Init_thread_footer(&::_TSS0);
    }
  }
  pFVar9 = (FName *)(__return_storage_ptr__->AllocatorInstance).Data;
  local_40 = NoEncodingFormatName;
  if ((pFVar9 <= &local_40) && (&local_40 < pFVar9 + __return_storage_ptr__->ArrayMax)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pTVar11 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
      return pTVar11;
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
  *(FName *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar7 * 8) = local_40;
  pIVar12 = IModularFeatures::Get();
  (**(code **)((longlong)*pIVar12 + 8))(pIVar12);
  pIVar12 = IModularFeatures::Get();
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)uVar5 * 8) + 0x9d4c) <
      ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&SoundfieldFactoryName,L"Soundfield Format");
      _Init_thread_footer(&::_TSS0);
    }
  }
  IModularFeatures::GetModularFeatureImplementations<ISoundfieldFactory>
            (pIVar12,&local_38,SoundfieldFactoryName);
  pIVar12 = IModularFeatures::Get();
  (**(code **)((longlong)*pIVar12 + 0x10))(pIVar12);
  iVar7 = local_38.ArrayNum;
  pFVar1 = local_38.AllocatorInstance.Data + (longlong)iVar7 * 8;
  FVar15.Data = local_38.AllocatorInstance.Data;
  while( true ) {
    if (local_38.ArrayNum != iVar7) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<ISoundfieldFactory_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (FVar15.Data == pFVar1) break;
    pFVar13 = (FScriptContainerElement *)
              (**(code **)(**(longlong **)FVar15.Data + 8))(*(longlong **)FVar15.Data,local_res18);
    pFVar3 = (__return_storage_ptr__->AllocatorInstance).Data;
    if ((pFVar3 <= pFVar13) && (pFVar13 < pFVar3 + (longlong)__return_storage_ptr__->ArrayMax * 8))
    {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        pTVar11 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
        return pTVar11;
      }
    }
    iVar8 = __return_storage_ptr__->ArrayNum;
    if (iVar8 == __return_storage_ptr__->ArrayMax) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x408,&__return_storage_ptr__->AllocatorInstance,
                         &__return_storage_ptr__->ArrayMax);
    }
    __return_storage_ptr__->ArrayNum = iVar8 + 1;
    FVar15.Data = FVar15.Data + 8;
    *(undefined8 *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar8 * 8) =
         *(undefined8 *)pFVar13;
  }
  if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetFormatNameForInheritedEncoding @ 144534660

FName __cdecl ISoundfieldFactory::GetFormatNameForInheritedEncoding(void)

{
  FName in_RCX;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&InheritedFormatName,L"Inherited Encoding");
      _Init_thread_footer(&::_TSS0);
    }
  }
  *(FName *)in_RCX = InheritedFormatName;
  return in_RCX;
}

// GetFormatNameForNoEncoding @ 1445346e0

FName __cdecl ISoundfieldFactory::GetFormatNameForNoEncoding(void)

{
  FName in_RCX;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&NoEncodingFormatName,L"No Encoding");
      _Init_thread_footer(&::_TSS0);
    }
  }
  *(FName *)in_RCX = NoEncodingFormatName;
  return in_RCX;
}

// GetModularFeatureName @ 144534800

FName __cdecl ISoundfieldFactory::GetModularFeatureName(void)

{
  FName in_RCX;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&SoundfieldFactoryName,L"Soundfield Format");
      _Init_thread_footer(&::_TSS0);
    }
  }
  *(FName *)in_RCX = SoundfieldFactoryName;
  return in_RCX;
}

// RegisterSoundfieldFormat @ 144536da0

void __cdecl ISoundfieldFactory::RegisterSoundfieldFormat(ISoundfieldFactory *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  bool bVar1;
  IModularFeatures *pIVar2;
  ISoundfieldFactory *pIVar3;
  
  bVar1 = IsInGameThread();
  if (!bVar1) {
    bVar1 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioExtensions\\Private\\ISoundfieldFormat.cpp"
                       ,0x1e,L"");
    if (bVar1) {
      UNRECOVERED_JUMPTABLE = (code *)swi(3);
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
  }
  pIVar2 = IModularFeatures::Get();
  pIVar3 = param_1 + 1;
  if (param_1 == (ISoundfieldFactory *)0x0) {
    pIVar3 = (ISoundfieldFactory *)0x0;
  }
  UNRECOVERED_JUMPTABLE = *(code **)((longlong)*pIVar2 + 0x28);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&SoundfieldFactoryName,L"Soundfield Format");
      _Init_thread_footer(&::_TSS0);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000144536e49. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(pIVar2,SoundfieldFactoryName,pIVar3);
  return;
}

// UnregisterSoundfieldFormat @ 1445381c0

void __cdecl ISoundfieldFactory::UnregisterSoundfieldFormat(ISoundfieldFactory *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  bool bVar1;
  IModularFeatures *pIVar2;
  ISoundfieldFactory *pIVar3;
  
  bVar1 = IsInGameThread();
  if (!bVar1) {
    bVar1 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioExtensions\\Private\\ISoundfieldFormat.cpp"
                       ,0x24,L"");
    if (bVar1) {
      UNRECOVERED_JUMPTABLE = (code *)swi(3);
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
  }
  pIVar2 = IModularFeatures::Get();
  pIVar3 = param_1 + 1;
  if (param_1 == (ISoundfieldFactory *)0x0) {
    pIVar3 = (ISoundfieldFactory *)0x0;
  }
  UNRECOVERED_JUMPTABLE = *(code **)((longlong)*pIVar2 + 0x30);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&SoundfieldFactoryName,L"Soundfield Format");
      _Init_thread_footer(&::_TSS0);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000144538269. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(pIVar2,SoundfieldFactoryName,pIVar3);
  return;
}

// operator() @ 1504bffb0

bool __thiscall `ISoundfieldFactory::Get'::__l15::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<9096041056985677881>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<9096041056985677881>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504bfff0

bool __thiscall `ISoundfieldFactory::Get'::__l2::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<9096041056985677888>);
  if (bVar2) {
    ::FName::ToString(*(FName **)this,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<9096041056985677888>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_1504c0057;
    }
  }
  bVar2 = false;
LAB_1504c0057:
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

