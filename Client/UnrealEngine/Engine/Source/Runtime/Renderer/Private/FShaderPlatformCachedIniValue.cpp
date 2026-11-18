// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 4

// Get @ 14487ab10

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

int __thiscall
FShaderPlatformCachedIniValue<int>::Get
          (FShaderPlatformCachedIniValue<int> *this,EShaderPlatform param_1)

{
  code *pcVar1;
  bool bVar2;
  EShaderPlatform EVar3;
  int iVar4;
  IConsoleVariable *pIVar5;
  IConsoleManager *pIVar6;
  wchar_t *pwVar7;
  FName local_res8;
  FShaderPlatformCachedIniValue<int> *local_res18;
  IConsoleVariable *local_38;
  TReferenceControllerBase<1> *local_30;
  void *local_28;
  undefined8 local_20;
  
  EVar3 = GetEditorShaderPlatform(param_1);
  ShaderPlatformToPlatformName((EShaderPlatform)&local_res8);
  if (this->CVar == (IConsoleVariable *)0x0) {
    if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
        (IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0))
       && (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                             ("Singleton != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                              ,0x4fb,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      iVar4 = (*pcVar1)();
      return iVar4;
    }
    if ((this->CVarName).Data.ArrayNum == 0) {
      pwVar7 = L"";
    }
    else {
      pwVar7 = (wchar_t *)(this->CVarName).Data.AllocatorInstance.Data;
    }
    pIVar5 = (IConsoleVariable *)
             (**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))
                       (IConsoleManager::Singleton,pwVar7,1);
    this->CVar = pIVar5;
  }
  bVar2 = ::FName::Equals(local_res8,"Windows");
  if ((bVar2) || (EVar3 == GMaxRHIShaderPlatform)) {
    if ((this->CVar == (IConsoleVariable *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("CVar != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPlatformCachedIniValue.h"
                           ,0x2c,
                           L"Failed to find CVar %s when getting current value for FShaderPlatformCachedIniValue"
                          ), bVar2)) {
      pcVar1 = (code *)swi(3);
      iVar4 = (*pcVar1)();
      return iVar4;
    }
    iVar4 = (**(code **)(*(longlong *)this->CVar + 200))();
  }
  else {
    pIVar5 = this->CVar;
    if (pIVar5 == (IConsoleVariable *)0x0) {
      pIVar6 = IConsoleManager::Get();
      if ((this->CVarName).Data.ArrayNum == 0) {
        pwVar7 = L"";
      }
      else {
        pwVar7 = (wchar_t *)(this->CVarName).Data.AllocatorInstance.Data;
      }
      pIVar5 = (IConsoleVariable *)(**(code **)((longlong)*pIVar6 + 0x18))(pIVar6,pwVar7,0,L"",4);
      this->CVar = pIVar5;
    }
    local_28 = (void *)0x0;
    local_20 = 0;
    (**(code **)(*(longlong *)pIVar5 + 0x100))(pIVar5,&local_38,local_res8,&local_28);
    if (local_28 != (void *)0x0) {
      FMemory::Free(local_28);
    }
    bVar2 = false;
    if (local_38 == (IConsoleVariable *)0x0) {
      local_res18 = this;
      `FShaderPlatformCachedIniValue<int>::Get'::__l2::<lambda_1>::operator()(&local_res18);
      bVar2 = local_38 == (IConsoleVariable *)0x0;
    }
    if (local_38 == (IConsoleVariable *)0x0) {
      local_38 = this->CVar;
    }
    else if ((bVar2) &&
            (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      iVar4 = (*pcVar1)();
      return iVar4;
    }
    iVar4 = (**(code **)(*(longlong *)local_38 + 200))();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_30);
  }
  return iVar4;
}

// Get @ 1454f0550

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
FShaderPlatformCachedIniValue<bool>::Get
          (FShaderPlatformCachedIniValue<bool> *this,EShaderPlatform param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  EShaderPlatform EVar4;
  IConsoleVariable *pIVar5;
  IConsoleManager *pIVar6;
  wchar_t *pwVar7;
  FName local_res8;
  FShaderPlatformCachedIniValue<bool> *local_res18;
  IConsoleVariable *local_38;
  TReferenceControllerBase<1> *local_30;
  void *local_28;
  undefined8 local_20;
  
  EVar4 = GetEditorShaderPlatform(param_1);
  ShaderPlatformToPlatformName((EShaderPlatform)&local_res8);
  if (this->CVar == (IConsoleVariable *)0x0) {
    if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
        (IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0))
       && (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                             ("Singleton != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                              ,0x4fb,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    if ((this->CVarName).Data.ArrayNum == 0) {
      pwVar7 = L"";
    }
    else {
      pwVar7 = (wchar_t *)(this->CVarName).Data.AllocatorInstance.Data;
    }
    pIVar5 = (IConsoleVariable *)
             (**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))
                       (IConsoleManager::Singleton,pwVar7,1);
    this->CVar = pIVar5;
  }
  bVar2 = ::FName::Equals(local_res8,"Windows");
  if ((bVar2) || (EVar4 == GMaxRHIShaderPlatform)) {
    if ((this->CVar == (IConsoleVariable *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("CVar != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPlatformCachedIniValue.h"
                           ,0x2c,
                           L"Failed to find CVar %s when getting current value for FShaderPlatformCachedIniValue"
                          ), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    uVar3 = (**(code **)(*(longlong *)this->CVar + 0xc0))();
  }
  else {
    pIVar5 = this->CVar;
    if (pIVar5 == (IConsoleVariable *)0x0) {
      pIVar6 = IConsoleManager::Get();
      if ((this->CVarName).Data.ArrayNum == 0) {
        pwVar7 = L"";
      }
      else {
        pwVar7 = (wchar_t *)(this->CVarName).Data.AllocatorInstance.Data;
      }
      pIVar5 = (IConsoleVariable *)(**(code **)((longlong)*pIVar6 + 0x20))(pIVar6,pwVar7,0,L"",4);
      this->CVar = pIVar5;
    }
    local_28 = (void *)0x0;
    local_20 = 0;
    (**(code **)(*(longlong *)pIVar5 + 0x100))(pIVar5,&local_38,local_res8,&local_28);
    if (local_28 != (void *)0x0) {
      FMemory::Free(local_28);
    }
    bVar2 = false;
    if (local_38 == (IConsoleVariable *)0x0) {
      local_res18 = this;
      `FShaderPlatformCachedIniValue<bool>::Get'::__l2::<lambda_1>::operator()(&local_res18);
      bVar2 = local_38 == (IConsoleVariable *)0x0;
    }
    if (local_38 == (IConsoleVariable *)0x0) {
      local_38 = this->CVar;
    }
    else if ((bVar2) &&
            (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    uVar3 = (**(code **)(*(longlong *)local_38 + 0xc0))();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_30);
  }
  return (bool)uVar3;
}

// operator() @ 1504c3de0

bool __thiscall `FShaderPlatformCachedIniValue<int>::Get'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<1796898352529408060>);
  if ((bVar2) &&
     (bVar2 = UE::Assert::Private::EnsureFailed
                        (&bGEnsureHasExecuted<1796898352529408060>,
                         &`public:___cdecl_`public:_int___cdecl_FShaderPlatformCachedIniValue<int>::Get(EShaderPlatform)___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                          ::__l2::ENSURE_Static), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 1504cf960

bool __thiscall `FShaderPlatformCachedIniValue<bool>::Get'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<1796898352529408060>);
  if ((bVar2) &&
     (bVar2 = UE::Assert::Private::EnsureFailed
                        (&bGEnsureHasExecuted<1796898352529408060>,
                         &`public:___cdecl_`public:_bool___cdecl_FShaderPlatformCachedIniValue<bool>::Get(EShaderPlatform)___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                          ::__l2::ENSURE_Static), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

