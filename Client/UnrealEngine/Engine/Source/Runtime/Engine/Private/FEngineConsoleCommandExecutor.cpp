// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 16

// FEngineConsoleCommandExecutor @ 147bb8f10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FEngineConsoleCommandExecutor * __thiscall
FEngineConsoleCommandExecutor::FEngineConsoleCommandExecutor
          (FEngineConsoleCommandExecutor *this,UGameEngine *param_1)

{
  code *pcVar1;
  IModularFeatures *pIVar2;
  UGameEngine **ppUVar3;
  
  this->GameEngine = param_1;
  this->_padding_ = (longlong)&___7FEngineConsoleCommandExecutor__6B_;
  pIVar2 = IModularFeatures::Get();
  ppUVar3 = &this->GameEngine;
  if (this == (FEngineConsoleCommandExecutor *)0x0) {
    ppUVar3 = (UGameEngine **)0x0;
  }
  pcVar1 = *(code **)((longlong)*pIVar2 + 0x28);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName___cdecl_IConsoleCommandExecutor::ModularFeatureName(void)'::__l2::
      _thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName___cdecl_IConsoleCommandExecutor::ModularFeatureName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName___cdecl_IConsoleCommandExecutor::ModularFeatureName(void)'::__l2
        ::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_static_class_FName___cdecl_IConsoleCommandExecutor::ModularFeatureName(void)'
                      ::__l2::Name,L"ConsoleCommandExecutor");
      _Init_thread_footer(&`public:_static_class_FName___cdecl_IConsoleCommandExecutor::ModularFeatureName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  (*pcVar1)(pIVar2,`public:_static_class_FName___cdecl_IConsoleCommandExecutor::ModularFeatureName(void)'
                   ::__l2::Name,ppUVar3);
  return this;
}

// ~FEngineConsoleCommandExecutor @ 147bbeb00

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
FEngineConsoleCommandExecutor::~FEngineConsoleCommandExecutor(FEngineConsoleCommandExecutor *this)

{
  code *UNRECOVERED_JUMPTABLE;
  IModularFeatures *pIVar1;
  UGameEngine **ppUVar2;
  
  this->_padding_ = (longlong)&___7FEngineConsoleCommandExecutor__6B_;
  pIVar1 = IModularFeatures::Get();
  ppUVar2 = &this->GameEngine;
  if (this == (FEngineConsoleCommandExecutor *)0x0) {
    ppUVar2 = (UGameEngine **)0x0;
  }
  UNRECOVERED_JUMPTABLE = *(code **)((longlong)*pIVar1 + 0x30);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName___cdecl_IConsoleCommandExecutor::ModularFeatureName(void)'::__l2::
      _thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName___cdecl_IConsoleCommandExecutor::ModularFeatureName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName___cdecl_IConsoleCommandExecutor::ModularFeatureName(void)'::__l2
        ::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_static_class_FName___cdecl_IConsoleCommandExecutor::ModularFeatureName(void)'
                      ::__l2::Name,L"ConsoleCommandExecutor");
      _Init_thread_footer(&`public:_static_class_FName___cdecl_IConsoleCommandExecutor::ModularFeatureName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000147bbeb84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            (pIVar1,`public:_static_class_FName___cdecl_IConsoleCommandExecutor::ModularFeatureName(void)'
                    ::__l2::Name,ppUVar2);
  return;
}

// operator() @ 147bc3d70

/* WARNING: Removing unreachable block (ram,0x000147bc3f37) */
/* WARNING: Removing unreachable block (ram,0x000147bc3f49) */

void __thiscall
`FEngineConsoleCommandExecutor::GetSuggestedCompletions'::__l2::<lambda_1>::operator()
          (void *this,wchar_t *param_1,IConsoleObject *param_2)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ulonglong uVar6;
  FText *this_00;
  FString *pFVar7;
  FString *pFVar8;
  FScriptContainerElement *pFVar9;
  longlong *local_58 [2];
  FString local_48;
  FString local_38;
  FString local_28;
  FString local_18;
  
  uVar6 = (**(code **)(param_2->_padding_ + 0x18))(param_2);
  if ((uVar6 & 8) == 0) {
    pFVar2 = *(ForAnyElementType **)this;
    this_00 = (FText *)(**(code **)(param_2->_padding_ + 0x28))(param_2,local_58);
    pFVar7 = FText::ToString(this_00);
    pFVar7 = ::FString::FString(&local_48,pFVar7);
    pFVar8 = ::FString::FString(&local_38,param_1);
    ::FString::FString(&local_28,pFVar8);
    ::FString::FString(&local_18,pFVar7);
    pFVar9 = (pFVar8->Data).AllocatorInstance.Data;
    if (pFVar9 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar9);
    }
    pFVar9 = (pFVar7->Data).AllocatorInstance.Data;
    if (pFVar9 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar9);
    }
    if (((pFVar2->Data <= (FScriptContainerElement *)&local_28) &&
        ((FScriptContainerElement *)&local_28 <
         pFVar2->Data + (longlong)*(int *)((longlong)&pFVar2[1].Data + 4) * 0x20)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar5 = *(int *)&pFVar2[1].Data;
    piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
    if (iVar5 == *piVar1) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x820,pFVar2,piVar1);
    }
    *(int *)&pFVar2[1].Data = iVar5 + 1;
    pFVar9 = pFVar2->Data + (longlong)iVar5 * 0x20;
    *(undefined8 *)pFVar9 = 0;
    *(FScriptContainerElement **)pFVar9 = local_28.Data.AllocatorInstance.Data;
    *(int *)(pFVar9 + 8) = local_28.Data.ArrayNum;
    *(int *)(pFVar9 + 0xc) = local_28.Data.ArrayMax;
    *(undefined8 *)(pFVar9 + 0x10) = 0;
    *(FScriptContainerElement **)(pFVar9 + 0x10) = local_18.Data.AllocatorInstance.Data;
    *(int *)(pFVar9 + 0x18) = local_18.Data.ArrayNum;
    *(int *)(pFVar9 + 0x1c) = local_18.Data.ArrayMax;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.Data.ArrayNum = 0;
    local_28.Data.ArrayMax = 0;
    local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_58[0] != (longlong *)0x0) {
      (**(code **)(*local_58[0] + 0x10))();
    }
  }
  return;
}

// AllowHotKeyClose @ 147bc9380

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall FEngineConsoleCommandExecutor::AllowHotKeyClose(FEngineConsoleCommandExecutor *this)

{
  return true;
}

// AllowMultiLine @ 147bc9390

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall FEngineConsoleCommandExecutor::AllowMultiLine(FEngineConsoleCommandExecutor *this)

{
  return true;
}

// Exec @ 147bd93b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FEngineConsoleCommandExecutor::Exec(FEngineConsoleCommandExecutor *this,wchar_t *param_1)

{
  UGameEngine *pUVar1;
  UGameEngine *pUVar2;
  char *pcVar3;
  code *pcVar4;
  ForAnyElementType FVar5;
  bool bVar6;
  undefined1 uVar7;
  byte bVar8;
  int iVar9;
  size_t sVar10;
  ULocalPlayer *pUVar11;
  undefined8 uVar12;
  FOutputDeviceRedirector *pFVar13;
  int *piVar14;
  int *piVar15;
  longlong lVar16;
  int iVar17;
  byte bVar18;
  wchar_t *local_res10;
  int *piVar19;
  ForAnyElementType local_38;
  int local_30 [2];
  
  local_res10 = param_1;
  if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
      (IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    uVar7 = (*pcVar4)();
    return (bool)uVar7;
  }
  (**(code **)((longlong)*IConsoleManager::Singleton + 0xf0))
            (IConsoleManager::Singleton,L"",local_res10);
  sVar10 = wcslen(local_res10);
  local_38.Data = (FScriptContainerElement *)0x0;
  local_30[0] = 0;
  local_30[1] = 0;
  iVar17 = (int)sVar10 + 1;
  piVar19 = local_30 + 1;
  piVar15 = local_30;
  iVar9 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,iVar17,&local_38,piVar15,piVar19);
  memset(local_38.Data + (longlong)iVar9 * 2,0,(longlong)iVar17 * 2);
  bVar18 = 0;
  bVar6 = FParse::Line(&local_res10,(wchar_t *)local_38.Data,local_30[0],false);
  if (bVar6) {
    do {
      FVar5.Data = local_38.Data;
      pUVar11 = UEngine::GetDebugLocalPlayer((UEngine *)this->GameEngine);
      if (pUVar11 == (ULocalPlayer *)0x0) {
        pUVar1 = this->GameEngine;
        pcVar4 = *(code **)(pUVar1->_padding_ + 8);
        pFVar13 = GetGlobalLogSingleton();
        pUVar2 = this->GameEngine;
        for (iVar9 = 0;
            (-1 < iVar9 &&
            (iVar17 = (int)pUVar2->_padding_, piVar14 = (int *)(longlong)iVar17, iVar9 < iVar17));
            iVar9 = iVar9 + 1) {
          if (iVar9 < 0) {
            piVar15 = (int *)(longlong)iVar9;
            bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            piVar19 = piVar14;
            if (bVar6) {
              pcVar4 = (code *)swi(3);
              uVar7 = (*pcVar4)();
              return (bool)uVar7;
            }
          }
          pcVar3 = *(char **)(pUVar2->_padding_ + (longlong)iVar9 * 8);
          if ((*pcVar3 == '\x01') && (lVar16 = *(longlong *)(pcVar3 + 0x2c0), lVar16 != 0))
          goto LAB_147bd95a2;
        }
        lVar16 = 0;
LAB_147bd95a2:
        bVar8 = (*pcVar4)(&pUVar1->_padding_,lVar16,FVar5.Data,pFVar13,piVar15,piVar19);
      }
      else {
        pcVar4 = *(code **)(pUVar11->_padding_ + 8);
        GetGlobalLogSingleton();
        uVar12 = (**(code **)(pUVar11->_padding_ + 0x180))(pUVar11);
        bVar8 = (*pcVar4)(&pUVar11->_padding_,uVar12,FVar5.Data);
      }
      bVar18 = bVar18 | bVar8;
      bVar6 = FParse::Line(&local_res10,(wchar_t *)local_38.Data,local_30[0],false);
    } while (bVar6);
  }
  if (local_38.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data);
  }
  return (bool)bVar18;
}

// ExecInternal @ 147bd9c00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FEngineConsoleCommandExecutor::ExecInternal(FEngineConsoleCommandExecutor *this,wchar_t *param_1)

{
  code *pcVar1;
  UGameEngine *pUVar2;
  UGameEngine *pUVar3;
  char *pcVar4;
  undefined1 uVar5;
  bool bVar6;
  ULocalPlayer *pUVar7;
  FOutputDeviceRedirector *pFVar8;
  undefined8 uVar9;
  longlong lVar10;
  int iVar11;
  
  pUVar7 = UEngine::GetDebugLocalPlayer((UEngine *)this->GameEngine);
  if (pUVar7 == (ULocalPlayer *)0x0) {
    pUVar2 = this->GameEngine;
    pcVar1 = *(code **)(pUVar2->_padding_ + 8);
    pFVar8 = GetGlobalLogSingleton();
    pUVar3 = this->GameEngine;
    for (iVar11 = 0; (-1 < iVar11 && (iVar11 < (int)pUVar3->_padding_)); iVar11 = iVar11 + 1) {
      if (iVar11 < 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar1 = (code *)swi(3);
          uVar5 = (*pcVar1)();
          return (bool)uVar5;
        }
      }
      pcVar4 = *(char **)(pUVar3->_padding_ + (longlong)iVar11 * 8);
      if ((*pcVar4 == '\x01') && (lVar10 = *(longlong *)(pcVar4 + 0x2c0), lVar10 != 0))
      goto LAB_147bd9cea;
    }
    lVar10 = 0;
LAB_147bd9cea:
    uVar5 = (*pcVar1)(&pUVar2->_padding_,lVar10,param_1,pFVar8);
  }
  else {
    pcVar1 = *(code **)(pUVar7->_padding_ + 8);
    pFVar8 = GetGlobalLogSingleton();
    uVar9 = (**(code **)(pUVar7->_padding_ + 0x180))(pUVar7);
    uVar5 = (*pcVar1)(&pUVar7->_padding_,uVar9,param_1,pFVar8);
  }
  return (bool)uVar5;
}

// GetDescription @ 147bdf8a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FText * __thiscall
FEngineConsoleCommandExecutor::GetDescription
          (FEngineConsoleCommandExecutor *this,FText *__return_storage_ptr__)

{
  FText::AsLocalizable_Advanced_LocText
            (__return_storage_ptr__,L"EngineConsoleCommandExecutor",L"Description",
             L"Execute Unreal Console Commands");
  return __return_storage_ptr__;
}

// GetDisplayName @ 147bdfa80

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FText * __thiscall
FEngineConsoleCommandExecutor::GetDisplayName
          (FEngineConsoleCommandExecutor *this,FText *__return_storage_ptr__)

{
  FText::AsLocalizable_Advanced_LocText
            (__return_storage_ptr__,L"EngineConsoleCommandExecutor",L"DisplayName",L"Cmd");
  return __return_storage_ptr__;
}

// GetExecHistory @ 147be0100

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
FEngineConsoleCommandExecutor::GetExecHistory
          (FEngineConsoleCommandExecutor *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  code *pcVar1;
  bool bVar2;
  
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
                    /* WARNING: Could not recover jumptable at 0x000147be0161. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*IConsoleManager::Singleton + 0xf8))
            (IConsoleManager::Singleton,L"",param_1);
  return;
}

// GetHintText @ 147be0950

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FText * __thiscall
FEngineConsoleCommandExecutor::GetHintText
          (FEngineConsoleCommandExecutor *this,FText *__return_storage_ptr__)

{
  FText::AsLocalizable_Advanced_LocText
            (__return_storage_ptr__,L"EngineConsoleCommandExecutor",L"HintText",
             L"Enter Console Command");
  return __return_storage_ptr__;
}

// GetHotKey @ 147be09a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FInputChord * __thiscall
FEngineConsoleCommandExecutor::GetHotKey
          (FEngineConsoleCommandExecutor *this,FInputChord *__return_storage_ptr__)

{
  FInputChord::FInputChord(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetIterateExecutorHotKey @ 147be0b50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FInputChord * __thiscall
FEngineConsoleCommandExecutor::GetIterateExecutorHotKey
          (FEngineConsoleCommandExecutor *this,FInputChord *__return_storage_ptr__)

{
  FInputChord::FInputChord(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetName @ 147be3730

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FName __thiscall FEngineConsoleCommandExecutor::GetName(FEngineConsoleCommandExecutor *this)

{
  FName in_RDX;
  
  FLazyName::Resolve(&GEngineConsoleCommandExecutorName);
  return in_RDX;
}

// GetSuggestedCompletions @ 147beb6b0

/* WARNING: Removing unreachable block (ram,0x000147bebb87) */
/* WARNING: Removing unreachable block (ram,0x000147bebb96) */
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
FEngineConsoleCommandExecutor::GetSuggestedCompletions
          (FEngineConsoleCommandExecutor *this,wchar_t *param_1,
          TArray<FConsoleSuggestion,TSizedDefaultAllocator<32>_> *param_2)

{
  void *_Src;
  code *pcVar1;
  IConsoleManager *pIVar2;
  ForAnyElementType _Src_00;
  int iVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  ulong64 uVar7;
  UClass *this_00;
  size_t sVar8;
  FString *pFVar9;
  longlong *plVar10;
  ulonglong uVar11;
  FText *this_01;
  wchar_t *pwVar12;
  FScriptContainerElement *pFVar13;
  longlong lVar14;
  ForAnyElementType FVar15;
  FScriptContainerElement *pFVar16;
  undefined1 local_res10 [8];
  wchar_t *local_res18 [2];
  FString local_138;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_128;
  FDelegateAllocation local_120;
  FString local_110;
  FString local_100;
  FString local_f0;
  FString local_e0;
  TArray<FString,TSizedDefaultAllocator<32>_> local_d0;
  wchar_t *local_b8;
  int iStack_b0;
  undefined4 uStack_ac;
  FDestructionSentinel local_a8;
  FDestructionSentinel local_90;
  FDelegateAllocation *local_78;
  TStringView<wchar_t> local_68;
  FString local_58;
  longlong *local_48 [2];
  
  if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
      (IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pIVar2 = IConsoleManager::Singleton;
  pcVar1 = *(code **)((longlong)*IConsoleManager::Singleton + 0xe0);
  local_128.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_120.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_120.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_128,(FWriteAccessScope *)&local_90);
  local_78 = &local_120;
  puVar6 = UE::Core::Private::DelegateAllocate(0x20,&local_120);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &
              ___7__TCommonDelegateInstanceState___A6AXPEB_WPEAVIConsoleObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar7 = FDelegateHandle::GenerateNewID();
    puVar6[2] = uVar7;
    *puVar6 = &TBaseFunctorDelegateInstance<void___cdecl(wchar_t_const_*,IConsoleObject_*),FDefaultDelegateUserPolicy,`FEngineConsoleCommandExecutor::GetSuggestedCompletions'::`2'::<lambda_1>_const_>
               ::_vftable_;
    puVar6[3] = param_2;
  }
  if (local_90.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_90.Accessor,&local_90);
  }
  (*pcVar1)(pIVar2,&local_128);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_128,(FWriteAccessScope *)&local_a8);
  if ((local_120.DelegateSize != 0) &&
     (local_120.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_120.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_120,0,0,0x10);
    local_120.DelegateSize = 0;
  }
  if (local_a8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_a8.Accessor,&local_a8);
  }
  if (local_120.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_120.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_128.AccessDetector);
  this_00 = Z_Construct_UClass_UConsoleSettings_NoRegister();
  if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this_00);
  }
  iStack_b0 = 0;
  local_b8 = param_1;
  if (param_1 != (wchar_t *)0x0) {
    sVar8 = wcslen(param_1);
    iStack_b0 = (int)sVar8;
  }
  local_68._12_4_ = uStack_ac;
  local_68.Size = iStack_b0;
  local_68.DataPtr = local_b8;
  UConsoleSettings::GetFilteredManualAutoCompleteCommands
            ((UConsoleSettings *)(this_00->ClassDefaultObject).field0_0x0.DebugPtr,&local_d0,
             &local_68);
  iVar3 = local_d0.ArrayNum;
  pFVar16 = local_d0.AllocatorInstance.Data + (longlong)local_d0.ArrayNum * 0x10;
  FVar15.Data = local_d0.AllocatorInstance.Data;
  do {
    if (local_d0.ArrayNum != iVar3) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (FVar15.Data == pFVar16) {
      DestructItems<FString,int>((FString *)local_d0.AllocatorInstance.Data,local_d0.ArrayNum);
      if (local_d0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d0.AllocatorInstance.Data);
      }
      return;
    }
    local_138.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_138.Data.ArrayNum = 0;
    local_138.Data.ArrayMax = 0;
    if (*(int *)(FVar15.Data + 8) == 0) {
      local_res18[0] = L"";
    }
    else {
      local_res18[0] = *(wchar_t **)FVar15.Data;
    }
    pcVar1 = *(code **)((longlong)*pIVar2 + 200);
    pFVar9 = FParse::Token(&local_58,local_res18,false);
    if ((pFVar9->Data).ArrayNum == 0) {
      pwVar12 = L"";
    }
    else {
      pwVar12 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
    }
    plVar10 = (longlong *)(*pcVar1)(pIVar2,pwVar12,0);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if ((plVar10 == (longlong *)0x0) ||
       (uVar11 = (**(code **)(*plVar10 + 0x18))(plVar10), (uVar11 & 8) != 0)) {
LAB_147beb9b7:
      iVar5 = local_138.Data.ArrayNum;
    }
    else {
      this_01 = (FText *)(**(code **)(*plVar10 + 0x28))(plVar10,local_48);
      pFVar9 = FText::ToString(this_01);
      if (&local_138 == pFVar9) {
LAB_147beb9a4:
        iVar5 = local_138.Data.ArrayNum;
      }
      else {
        iVar5 = (pFVar9->Data).ArrayNum;
        pFVar13 = (pFVar9->Data).AllocatorInstance.Data;
        local_138.Data.ArrayNum = iVar5;
        if ((iVar5 != 0) || (local_138.Data.ArrayMax != 0)) {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,iVar5,local_138.Data.ArrayMax,(ForAnyElementType *)&local_138,iVar5,
                     &local_138.Data.ArrayMax);
          if (iVar5 != 0) {
            memcpy(local_138.Data.AllocatorInstance.Data,pFVar13,(longlong)iVar5 * 2);
          }
          goto LAB_147beb9a4;
        }
        local_138.Data.ArrayNum = 0;
        local_138.Data.ArrayMax = 0;
        iVar5 = 0;
      }
      if (local_48[0] != (longlong *)0x0) {
        (**(code **)(*local_48[0] + 0x10))();
        goto LAB_147beb9b7;
      }
    }
    _Src_00.Data = local_138.Data.AllocatorInstance.Data;
    local_e0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_e0.Data.ArrayNum = iVar5;
    if (iVar5 == 0) {
      local_e0.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar5,0,(ForAnyElementType *)&local_e0,iVar5,&local_e0.Data.ArrayMax);
      memcpy(local_e0.Data.AllocatorInstance.Data,_Src_00.Data,(longlong)iVar5 * 2);
    }
    local_f0.Data.ArrayNum = *(int *)(FVar15.Data + 8);
    lVar14 = (longlong)local_f0.Data.ArrayNum;
    _Src = *(void **)FVar15.Data;
    local_f0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_f0.Data.ArrayNum == 0) {
      local_f0.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_f0.Data.ArrayNum,0,(ForAnyElementType *)&local_f0,local_f0.Data.ArrayNum,
                 &local_f0.Data.ArrayMax);
      memcpy(local_f0.Data.AllocatorInstance.Data,_Src,lVar14 * 2);
    }
    ::FString::FString(&local_110,&local_f0);
    ::FString::FString(&local_100,&local_e0);
    if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f0.Data.AllocatorInstance.Data);
    }
    if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e0.Data.AllocatorInstance.Data);
    }
    pFVar13 = (param_2->AllocatorInstance).Data;
    if (((pFVar13 <= (FScriptContainerElement *)&local_110) &&
        ((FScriptContainerElement *)&local_110 < pFVar13 + (longlong)param_2->ArrayMax * 0x20)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    iVar5 = param_2->ArrayNum;
    if (iVar5 == param_2->ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x820,&param_2->AllocatorInstance,&param_2->ArrayMax);
    }
    param_2->ArrayNum = iVar5 + 1;
    pFVar13 = (param_2->AllocatorInstance).Data + (longlong)iVar5 * 0x20;
    *(undefined8 *)pFVar13 = 0;
    *(FScriptContainerElement **)pFVar13 = local_110.Data.AllocatorInstance.Data;
    *(int *)(pFVar13 + 8) = local_110.Data.ArrayNum;
    *(int *)(pFVar13 + 0xc) = local_110.Data.ArrayMax;
    *(undefined8 *)(pFVar13 + 0x10) = 0;
    *(FScriptContainerElement **)(pFVar13 + 0x10) = local_100.Data.AllocatorInstance.Data;
    *(int *)(pFVar13 + 0x18) = local_100.Data.ArrayNum;
    *(int *)(pFVar13 + 0x1c) = local_100.Data.ArrayMax;
    local_100.Data.ArrayNum = 0;
    local_100.Data.ArrayMax = 0;
    local_100.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_110.Data.ArrayNum = 0;
    local_110.Data.ArrayMax = 0;
    local_110.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_138.Data.AllocatorInstance.Data);
    }
    FVar15.Data = FVar15.Data + 0x10;
  } while( true );
}

// StaticName @ 147c033f0

FName __cdecl FEngineConsoleCommandExecutor::StaticName(void)

{
  FName in_RCX;
  
  FLazyName::Resolve(&GEngineConsoleCommandExecutorName);
  return in_RCX;
}

