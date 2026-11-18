// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DesktopPlatform
// Functions: 15

// FInstalledPlatformInfo @ 142d1ba50

FInstalledPlatformInfo * __thiscall
FInstalledPlatformInfo::FInstalledPlatformInfo(FInstalledPlatformInfo *this)

{
  void *_Src;
  int iVar1;
  ForAnyElementType FVar2;
  FScriptContainerElement *pFVar3;
  longlong lVar4;
  undefined1 local_res8 [8];
  TArray<FString,TSizedDefaultAllocator<32>_> local_48;
  FString local_38;
  
  (this->InstalledPlatformConfigurations).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InstalledPlatformConfigurations).ArrayNum = 0;
  (this->InstalledPlatformConfigurations).ArrayMax = 0;
  local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.ArrayNum = 0;
  local_48.ArrayMax = 0;
  FConfigCacheIni::GetArray
            (GConfig,L"InstalledPlatforms",L"InstalledPlatformConfigurations",&local_48,&GEngineIni)
  ;
  iVar1 = local_48.ArrayNum;
  pFVar3 = local_48.AllocatorInstance.Data + (longlong)local_48.ArrayNum * 0x10;
  FVar2.Data = local_48.AllocatorInstance.Data;
  while( true ) {
    if (local_48.ArrayNum != iVar1) {
      `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8)
      ;
    }
    if (FVar2.Data == pFVar3) break;
    local_38.Data.ArrayNum = *(int *)(FVar2.Data + 8);
    lVar4 = (longlong)local_38.Data.ArrayNum;
    _Src = *(void **)FVar2.Data;
    local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_38.Data.ArrayNum == 0) {
      local_38.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_38.Data.ArrayNum,0,(ForAnyElementType *)&local_38,local_38.Data.ArrayNum,
                 &local_38.Data.ArrayMax);
      memcpy(local_38.Data.AllocatorInstance.Data,_Src,lVar4 * 2);
    }
    ParsePlatformConfiguration(this,&local_38);
    FVar2.Data = FVar2.Data + 0x10;
  }
  DestructItems<FString,int>((FString *)local_48.AllocatorInstance.Data,local_48.ArrayNum);
  if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.AllocatorInstance.Data);
  }
  return this;
}

// operator() @ 142d1d120

bool __thiscall
`FInstalledPlatformInfo::IsValidPlatformArchitecture'::__l2::<lambda_1>::operator()
          (void *this,FInstalledPlatformConfiguration *param_1)

{
  int iVar1;
  size_t sVar2;
  wchar_t *_Str;
  bool bVar3;
  
  iVar1 = (param_1->PlatformName).Data.ArrayNum;
  if (iVar1 == *(int *)((longlong)this + 8)) {
    if (iVar1 < 2) goto LAB_142d1d15b;
    iVar1 = FGenericPlatformStricmp::Stricmp
                      ((wchar_t *)(param_1->PlatformName).Data.AllocatorInstance.Data,
                       *(wchar_t **)this);
    bVar3 = iVar1 == 0;
  }
  else {
    bVar3 = iVar1 + *(int *)((longlong)this + 8) == 1;
  }
  if (!bVar3) {
    return false;
  }
LAB_142d1d15b:
  if (*(int *)((longlong)this + 0x18) == 0) {
    _Str = L"";
  }
  else {
    _Str = *(wchar_t **)((longlong)this + 0x10);
    if (_Str == (wchar_t *)0x0) {
      return false;
    }
  }
  sVar2 = wcslen(_Str);
  iVar1 = ::FString::Find(&param_1->Architecture,_Str,(int)sVar2,IgnoreCase,FromStart,-1);
  if (iVar1 == -1) {
    return false;
  }
  return true;
}

// CanDisplayPlatform @ 142d1dce0

bool __thiscall
FInstalledPlatformInfo::CanDisplayPlatform
          (FInstalledPlatformInfo *this,FString *param_1,EProjectType param_2)

{
  bool bVar1;
  code *local_38;
  FString *local_30;
  FString local_28;
  EProjectType local_18;
  
  ::FString::FString(&local_28,param_1);
  local_30 = &local_28;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`FInstalledPlatformInfo::CanDisplayPlatform'::__l2::<lambda_1>,bool,FInstalledPlatformConfiguration>
             ::Call;
  local_18 = param_2;
  bVar1 = ContainsMatchingConfiguration
                    (this,(TFunctionRef<bool___cdecl(FInstalledPlatformConfiguration)> *)&local_38);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return bVar1;
}

// ContainsMatchingConfiguration @ 142d1e5b0

bool __thiscall
FInstalledPlatformInfo::ContainsMatchingConfiguration
          (FInstalledPlatformInfo *this,
          TFunctionRef<bool___cdecl(FInstalledPlatformConfiguration)> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res18 [8];
  FScriptContainerElement local_68 [8];
  FString local_60;
  FScriptContainerElement local_50;
  FString local_48;
  FString local_38;
  FScriptContainerElement local_28;
  FScriptContainerElement local_27;
  
  bVar3 = FApp::IsEngineInstalled();
  if (bVar3) {
    iVar2 = (this->InstalledPlatformConfigurations).ArrayNum;
    pFVar5 = (this->InstalledPlatformConfigurations).AllocatorInstance.Data;
    pFVar1 = pFVar5 + (longlong)iVar2 * 0x48;
    while( true ) {
      if ((this->InstalledPlatformConfigurations).ArrayNum != iVar2) {
        `TCheckedPointerIterator<FInstalledPlatformConfiguration_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res18);
      }
      if (pFVar5 == pFVar1) {
        return false;
      }
      local_68[0] = *pFVar5;
      ::FString::FString(&local_60,(FString *)(pFVar5 + 8));
      local_50 = pFVar5[0x18];
      ::FString::FString(&local_48,(FString *)(pFVar5 + 0x20));
      ::FString::FString(&local_38,(FString *)(pFVar5 + 0x30));
      local_28 = pFVar5[0x40];
      local_27 = pFVar5[0x41];
      cVar4 = (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,local_68);
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_60.Data.AllocatorInstance.Data);
      }
      if (cVar4 != '\0') break;
      pFVar5 = pFVar5 + 0x48;
    }
  }
  return true;
}

// ContainsValidConfiguration @ 142d1e6d0

bool __thiscall
FInstalledPlatformInfo::ContainsValidConfiguration
          (FInstalledPlatformInfo *this,
          TFunctionRef<bool___cdecl(FInstalledPlatformConfiguration)> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res18 [16];
  FScriptContainerElement local_78 [8];
  FString local_70;
  FScriptContainerElement local_60;
  FString local_58;
  FString local_48;
  FScriptContainerElement local_38;
  FScriptContainerElement local_37;
  
  bVar3 = FApp::IsEngineInstalled();
  if (bVar3) {
    iVar2 = (this->InstalledPlatformConfigurations).ArrayNum;
    pFVar5 = (this->InstalledPlatformConfigurations).AllocatorInstance.Data;
    pFVar1 = pFVar5 + (longlong)iVar2 * 0x48;
    while( true ) {
      if ((this->InstalledPlatformConfigurations).ArrayNum != iVar2) {
        `TCheckedPointerIterator<FInstalledPlatformConfiguration_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res18);
      }
      if (pFVar5 == pFVar1) {
        return false;
      }
      local_78[0] = *pFVar5;
      ::FString::FString(&local_70,(FString *)(pFVar5 + 8));
      local_60 = pFVar5[0x18];
      ::FString::FString(&local_58,(FString *)(pFVar5 + 0x20));
      ::FString::FString(&local_48,(FString *)(pFVar5 + 0x30));
      local_38 = pFVar5[0x40];
      local_37 = pFVar5[0x41];
      cVar4 = (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,local_78);
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_70.Data.AllocatorInstance.Data);
      }
      if ((cVar4 != '\0') &&
         ((*(int *)(pFVar5 + 0x38) < 2 ||
          (bVar3 = FPaths::FileExists((FString *)(pFVar5 + 0x30)), bVar3)))) break;
      pFVar5 = pFVar5 + 0x48;
    }
  }
  return true;
}

// Get @ 142d226d0

FInstalledPlatformInfo * __cdecl FInstalledPlatformInfo::Get(void)

{
  void *_Src;
  int iVar1;
  ForAnyElementType FVar2;
  FScriptContainerElement *pFVar3;
  longlong lVar4;
  undefined1 local_res8 [8];
  TArray<FString,TSizedDefaultAllocator<32>_> local_48;
  FString local_38;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_48.ArrayNum = 0;
      local_48.ArrayMax = 0;
      FConfigCacheIni::GetArray
                (GConfig,L"InstalledPlatforms",L"InstalledPlatformConfigurations",&local_48,
                 &GEngineIni);
      iVar1 = local_48.ArrayNum;
      pFVar3 = local_48.AllocatorInstance.Data + (longlong)local_48.ArrayNum * 0x10;
      FVar2.Data = local_48.AllocatorInstance.Data;
      while( true ) {
        if (local_48.ArrayNum != iVar1) {
          `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res8);
        }
        if (FVar2.Data == pFVar3) break;
        local_38.Data.ArrayNum = *(int *)(FVar2.Data + 8);
        lVar4 = (longlong)local_38.Data.ArrayNum;
        _Src = *(void **)FVar2.Data;
        local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        if (local_38.Data.ArrayNum == 0) {
          local_38.Data.ArrayMax = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_38.Data.ArrayNum,0,(ForAnyElementType *)&local_38,
                     local_38.Data.ArrayNum,&local_38.Data.ArrayMax);
          memcpy(local_38.Data.AllocatorInstance.Data,_Src,lVar4 * 2);
        }
        ParsePlatformConfiguration(&InfoSingleton,&local_38);
        FVar2.Data = FVar2.Data + 0x10;
      }
      DestructItems<FString,int>((FString *)local_48.AllocatorInstance.Data,local_48.ArrayNum);
      if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.AllocatorInstance.Data);
      }
      atexit(`FInstalledPlatformInfo::Get'::__l2::_dynamic_atexit_destructor_for__InfoSingleton__);
      _Init_thread_footer(&::_TSS0);
      return &InfoSingleton;
    }
  }
  return &InfoSingleton;
}

// IsPlatformMissingRequiredFile @ 142d28c90

bool __thiscall
FInstalledPlatformInfo::IsPlatformMissingRequiredFile(FInstalledPlatformInfo *this,FString *param_1)

{
  bool bVar1;
  code *local_28;
  FString *local_20;
  FString local_18;
  
  bVar1 = FApp::IsEngineInstalled();
  if (bVar1) {
    ::FString::FString(&local_18,param_1);
    local_20 = &local_18;
    local_28 = UE::Core::Private::Function::
               TFunctionRefCaller<`FInstalledPlatformInfo::IsPlatformMissingRequiredFile'::__l5::<lambda_1>,bool,FInstalledPlatformConfiguration>
               ::Call;
    bVar1 = ContainsMatchingConfiguration
                      (this,(TFunctionRef<bool___cdecl(FInstalledPlatformConfiguration)> *)&local_28
                      );
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    return bVar1;
  }
  return false;
}

// IsValid @ 142d2a120

bool __thiscall
FInstalledPlatformInfo::IsValid
          (FInstalledPlatformInfo *this,TOptional<EBuildTargetType> param_1,
          TOptional<FString> *param_2,TOptional<EBuildConfiguration> param_3,EProjectType param_4,
          EInstalledPlatformState param_5)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  undefined6 in_register_00000012;
  FScriptContainerElement *pFVar6;
  undefined6 in_register_0000008a;
  undefined1 local_38 [16];
  
  bVar4 = FApp::IsEngineInstalled();
  if (!bVar4) {
LAB_142d2a210:
    if ((*(int *)((longlong)&param_2->field0_0x0 + 0xc) != -1) &&
       (pFVar1 = (param_2->field0_0x0).TypedValue.Data.AllocatorInstance.Data,
       pFVar1 != (FScriptContainerElement *)0x0)) {
      FMemory::Free(pFVar1);
    }
    return true;
  }
  iVar2 = (this->InstalledPlatformConfigurations).ArrayNum;
  pFVar6 = (this->InstalledPlatformConfigurations).AllocatorInstance.Data;
  pFVar1 = pFVar6 + (longlong)iVar2 * 0x48;
  do {
    if ((this->InstalledPlatformConfigurations).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FInstalledPlatformConfiguration_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_38);
    }
    if (pFVar6 == pFVar1) {
      if ((*(int *)((longlong)&param_2->field0_0x0 + 0xc) != -1) &&
         (pFVar1 = (param_2->field0_0x0).TypedValue.Data.AllocatorInstance.Data,
         pFVar1 != (FScriptContainerElement *)0x0)) {
        FMemory::Free(pFVar1);
      }
      return false;
    }
    if ((((FScriptContainerElement *)CONCAT62(in_register_00000012,param_1))[1] ==
         (FScriptContainerElement)0x0) ||
       (pFVar6[0x18] == *(FScriptContainerElement *)CONCAT62(in_register_00000012,param_1))) {
      if (*(int *)((longlong)&param_2->field0_0x0 + 0xc) != -1) {
        iVar5 = *(int *)(pFVar6 + 0x10);
        iVar3 = *(int *)((longlong)&param_2->field0_0x0 + 8);
        if (iVar5 == iVar3) {
          if (iVar5 < 2) goto LAB_142d2a1ca;
          iVar5 = FGenericPlatformStricmp::Stricmp
                            (*(wchar_t **)(pFVar6 + 8),
                             (wchar_t *)(param_2->field0_0x0).TypedValue.Data.AllocatorInstance.Data
                            );
          bVar4 = iVar5 == 0;
        }
        else {
          bVar4 = iVar5 + iVar3 == 1;
        }
        if (!bVar4) goto LAB_142d2a207;
      }
LAB_142d2a1ca:
      if ((((((FScriptContainerElement *)CONCAT62(in_register_0000008a,param_3))[1] ==
             (FScriptContainerElement)0x0) ||
           (*pFVar6 == *(FScriptContainerElement *)CONCAT62(in_register_0000008a,param_3))) &&
          ((param_4 == Any ||
           ((pFVar6[0x40] == (FScriptContainerElement)0x1 ||
            (pFVar6[0x40] == (FScriptContainerElement)param_4)))))) &&
         ((param_5 != Downloaded ||
          ((*(int *)(pFVar6 + 0x38) < 2 ||
           (bVar4 = FPaths::FileExists((FString *)(pFVar6 + 0x30)), bVar4)))))) goto LAB_142d2a210;
    }
LAB_142d2a207:
    pFVar6 = pFVar6 + 0x48;
  } while( true );
}

// IsValidConfiguration @ 142d2a260

bool __thiscall
FInstalledPlatformInfo::IsValidConfiguration
          (FInstalledPlatformInfo *this,EBuildConfiguration param_1,EProjectType param_2)

{
  bool bVar1;
  EBuildConfiguration local_res10;
  EProjectType local_res11;
  code *local_18;
  EBuildConfiguration *local_10;
  
  local_10 = &local_res10;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`FInstalledPlatformInfo::IsValidConfiguration'::__l2::<lambda_1>,bool,FInstalledPlatformConfiguration>
             ::Call;
  local_res10 = param_1;
  local_res11 = param_2;
  bVar1 = ContainsValidConfiguration
                    (this,(TFunctionRef<bool___cdecl(FInstalledPlatformConfiguration)> *)&local_18);
  return bVar1;
}

// IsValidPlatform @ 142d2a2a0

bool __thiscall
FInstalledPlatformInfo::IsValidPlatform
          (FInstalledPlatformInfo *this,FString *param_1,EProjectType param_2)

{
  bool bVar1;
  code *local_38;
  FString *local_30;
  FString local_28;
  EProjectType local_18;
  
  ::FString::FString(&local_28,param_1);
  local_30 = &local_28;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`FInstalledPlatformInfo::IsValidPlatform'::__l2::<lambda_1>,bool,FInstalledPlatformConfiguration>
             ::Call;
  local_18 = param_2;
  bVar1 = ContainsValidConfiguration
                    (this,(TFunctionRef<bool___cdecl(FInstalledPlatformConfiguration)> *)&local_38);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return bVar1;
}

// IsValidPlatformAndConfiguration @ 142d2a310

bool __thiscall
FInstalledPlatformInfo::IsValidPlatformAndConfiguration
          (FInstalledPlatformInfo *this,EBuildConfiguration param_1,FString *param_2,
          EProjectType param_3)

{
  bool bVar1;
  code *local_38;
  EBuildConfiguration *local_30;
  EBuildConfiguration local_28 [8];
  FString local_20;
  EProjectType local_10;
  
  local_28[0] = param_1;
  ::FString::FString(&local_20,param_2);
  local_30 = local_28;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`FInstalledPlatformInfo::IsValidPlatformAndConfiguration'::__l2::<lambda_1>,bool,FInstalledPlatformConfiguration>
             ::Call;
  local_10 = param_3;
  bVar1 = ContainsValidConfiguration
                    (this,(TFunctionRef<bool___cdecl(FInstalledPlatformConfiguration)> *)&local_38);
  if (local_20.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_20.Data.AllocatorInstance.Data);
  }
  return bVar1;
}

// IsValidPlatformArchitecture @ 142d2a380

bool __thiscall
FInstalledPlatformInfo::IsValidPlatformArchitecture
          (FInstalledPlatformInfo *this,FString *param_1,FString *param_2)

{
  bool bVar1;
  code *local_38;
  FString *local_30;
  FString local_28;
  FString local_18;
  
  ::FString::FString(&local_28,param_1);
  ::FString::FString(&local_18,param_2);
  local_30 = &local_28;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`FInstalledPlatformInfo::IsValidPlatformArchitecture'::__l2::<lambda_1>,bool,FInstalledPlatformConfiguration>
             ::Call;
  bVar1 = ContainsValidConfiguration
                    (this,(TFunctionRef<bool___cdecl(FInstalledPlatformConfiguration)> *)&local_38);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return bVar1;
}

// IsValidTargetType @ 142d2a4d0

bool __thiscall
FInstalledPlatformInfo::IsValidTargetType(FInstalledPlatformInfo *this,EBuildTargetType param_1)

{
  bool bVar1;
  EBuildTargetType local_res10 [24];
  code *local_18;
  EBuildTargetType *local_10;
  
  local_10 = local_res10;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`FInstalledPlatformInfo::IsValidTargetType'::__l2::<lambda_1>,bool,FInstalledPlatformConfiguration>
             ::Call;
  local_res10[0] = param_1;
  bVar1 = ContainsValidConfiguration
                    (this,(TFunctionRef<bool___cdecl(FInstalledPlatformConfiguration)> *)&local_18);
  return bVar1;
}

// OpenInstallerOptions @ 142d2b170

bool __cdecl FInstalledPlatformInfo::OpenInstallerOptions(void)

{
  FName FVar1;
  FScriptContainerElement *pFVar2;
  char cVar3;
  Type TVar4;
  FName *pFVar5;
  FModuleManager *pFVar6;
  IModuleInterface *pIVar7;
  longlong *plVar8;
  longlong *plVar9;
  FText *pFVar10;
  FString *pFVar11;
  undefined1 uVar12;
  FName local_res8;
  void *local_68 [2];
  FText local_58;
  FString local_48;
  undefined2 local_38;
  void *local_30;
  undefined8 local_28;
  FString local_20;
  
  FModuleManager::Get();
  pFVar5 = ::FName::FName(&local_res8,"DesktopPlatform");
  FVar1 = *pFVar5;
  pFVar6 = FModuleManager::Get();
  pIVar7 = FModuleManager::LoadModuleChecked(pFVar6,FVar1);
  plVar8 = (longlong *)(**(code **)((longlong)*pIVar7 + 0x40))(pIVar7);
  FModuleManager::Get();
  pFVar5 = ::FName::FName(&local_res8,"LauncherPlatform");
  FVar1 = *pFVar5;
  pFVar6 = FModuleManager::Get();
  pIVar7 = FModuleManager::LoadModuleChecked(pFVar6,FVar1);
  plVar9 = (longlong *)(**(code **)((longlong)*pIVar7 + 0x40))(pIVar7);
  if ((plVar8 != (longlong *)0x0) && (plVar9 != (longlong *)0x0)) {
    (**(code **)(*plVar8 + 0x38))(plVar8,local_68);
    cVar3 = (**(code **)(*plVar8 + 0xa0))(plVar8,local_68);
    if (cVar3 != '\0') {
      pFVar10 = FText::AsLocalizable_Advanced_LocText
                          (&local_58,L"InstalledPlatformInfo",L"NotInstalled_SelectedPlatform",
                           L"The Binaries for this Target Platform are not currently installed, would you like to use the Launcher to download them?"
                          );
      TVar4 = FMessageDialog::Open(YesNo,pFVar10);
      if (local_58.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
      }
      if (TVar4 == Yes) {
        (**(code **)(*plVar8 + 0x30))(plVar8,&local_48,local_68);
        ::FString::PrintfImpl((FString *)&local_58,L"ue/library/engines/UE_%s/installer");
        if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
        }
        pFVar11 = ::FString::FString(&local_48,(FString *)&local_58);
        local_38 = 0x100;
        local_30 = (void *)0x0;
        local_28 = 0;
        ::FString::FString(&local_20,pFVar11);
        uVar12 = local_38._1_1_;
        if (1 < local_20.Data.ArrayNum) {
          uVar12 = 0;
        }
        local_38 = CONCAT11(uVar12,(undefined1)local_38);
        pFVar2 = (pFVar11->Data).AllocatorInstance.Data;
        if (pFVar2 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar2);
        }
        cVar3 = (**(code **)(*plVar9 + 0x10))(plVar9,&local_38);
        if (cVar3 != '\0') {
          if (local_20.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_20.Data.AllocatorInstance.Data);
          }
          if (local_30 != (void *)0x0) {
            FMemory::Free(local_30);
          }
          if (local_58.TextData.Reference != (ITextData *)0x0) {
            FMemory::Free(local_58.TextData.Reference);
          }
          if (local_68[0] != (void *)0x0) {
            FMemory::Free(local_68[0]);
          }
          return true;
        }
        if (local_20.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_20.Data.AllocatorInstance.Data);
        }
        if (local_30 != (void *)0x0) {
          FMemory::Free(local_30);
        }
        if (local_58.TextData.Reference != (ITextData *)0x0) {
          FMemory::Free(local_58.TextData.Reference);
        }
      }
    }
    if (local_68[0] != (void *)0x0) {
      FMemory::Free(local_68[0]);
    }
  }
  return false;
}

// ParsePlatformConfiguration @ 142d2b5d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FInstalledPlatformInfo::ParsePlatformConfiguration(FInstalledPlatformInfo *this,FString *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  FString *pFVar8;
  size_t sVar9;
  wchar_t *pwVar10;
  ForAnyElementType FVar11;
  ForAnyElementType FVar12;
  wchar_t *pwVar13;
  longlong lVar14;
  FScriptContainerElement FVar15;
  FScriptContainerElement local_res10 [8];
  FScriptContainerElement local_res18 [8];
  FScriptContainerElement local_res20 [8];
  FString local_128;
  FScriptContainerElement local_118 [8];
  FString local_110;
  FScriptContainerElement local_100;
  FString local_f8;
  FString local_e8;
  FScriptContainerElement local_d8;
  FScriptContainerElement local_d7;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  TStringView<wchar_t> local_68;
  FScriptContainerElement *local_58;
  int local_50;
  FString local_48;
  
  ::FString::TrimStartInline(param_1);
  ::FString::RemoveFromStart(param_1,L"(",1,IgnoreCase);
  ::FString::RemoveFromEnd(param_1,L")",1,IgnoreCase);
  pwVar13 = L"";
  bVar5 = true;
  local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.Data.ArrayNum = 0;
  local_78.Data.ArrayMax = 0;
  local_res10[0] = (FScriptContainerElement)0x0;
  iVar7 = 0;
  if ((param_1->Data).ArrayNum == 0) {
    pwVar10 = L"";
  }
  else {
    pwVar10 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  bVar4 = FParse::Value(pwVar10,L"Configuration=",&local_78,true,(wchar_t **)0x0);
  if (bVar4) {
    FVar12.Data = (FScriptContainerElement *)L"";
    if (local_78.Data.ArrayNum != 0) {
      FVar12.Data = local_78.Data.AllocatorInstance.Data;
    }
    bVar4 = LexTryParseString((EBuildConfiguration *)local_res10,(wchar_t *)FVar12.Data);
    if ((!bVar4) || (local_res10[0] == (FScriptContainerElement)0x0)) goto LAB_142d2b6a1;
  }
  else {
LAB_142d2b6a1:
    if (2 < (byte)LogInstalledPlatforms._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogInstalledPlatforms);
    }
    bVar5 = false;
  }
  local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.Data.ArrayNum = 0;
  local_88.Data.ArrayMax = 0;
  if ((param_1->Data).ArrayNum == 0) {
    pwVar10 = L"";
  }
  else {
    pwVar10 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  bVar4 = FParse::Value(pwVar10,L"PlatformName=",&local_88,true,(wchar_t **)0x0);
  if (!bVar4) {
    if (2 < (byte)LogInstalledPlatforms._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogInstalledPlatforms);
    }
    bVar5 = false;
  }
  local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.Data.ArrayNum = 0;
  local_98.Data.ArrayMax = 0;
  if ((param_1->Data).ArrayNum == 0) {
    pwVar10 = L"";
  }
  else {
    pwVar10 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  bVar4 = FParse::Value(pwVar10,L"PlatformType=",&local_98,true,(wchar_t **)0x0);
  if (bVar4) {
    FVar12.Data = (FScriptContainerElement *)L"";
    if (local_98.Data.ArrayNum != 0) {
      FVar12.Data = local_98.Data.AllocatorInstance.Data;
    }
    bVar4 = LexTryParseString((EBuildTargetType *)local_res18,(wchar_t *)FVar12.Data);
    if (bVar4) goto LAB_142d2b782;
  }
  local_res18[0] = (FScriptContainerElement)0x1;
LAB_142d2b782:
  local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.Data.ArrayNum = 0;
  local_a8.Data.ArrayMax = 0;
  if ((param_1->Data).ArrayNum == 0) {
    pwVar10 = L"";
  }
  else {
    pwVar10 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  FParse::Value(pwVar10,L"Architecture=",&local_a8,true,(wchar_t **)0x0);
  local_128.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_128.Data.ArrayNum = 0;
  local_128.Data.ArrayMax = 0;
  if ((param_1->Data).ArrayNum == 0) {
    pwVar10 = L"";
  }
  else {
    pwVar10 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  bVar4 = FParse::Value(pwVar10,L"RequiredFile=",&local_128,true,(wchar_t **)0x0);
  if (bVar4) {
    FVar12.Data = (FScriptContainerElement *)L"";
    if (local_128.Data.ArrayNum != 0) {
      FVar12.Data = local_128.Data.AllocatorInstance.Data;
    }
    pFVar8 = FPaths::RootDir(&local_48);
    if ((pFVar8->Data).ArrayNum == 0) {
      local_68.DataPtr = L"";
    }
    else {
      local_68.DataPtr = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
    }
    local_68.Size = iVar7;
    if ((FScriptContainerElement *)local_68.DataPtr != (FScriptContainerElement *)0x0) {
      sVar9 = wcslen(local_68.DataPtr);
      local_68.Size = (int)sVar9;
    }
    local_58 = FVar12.Data;
    if (FVar12.Data != (FScriptContainerElement *)0x0) {
      sVar9 = wcslen((wchar_t *)FVar12.Data);
      iVar7 = (int)sVar9;
    }
    local_50 = iVar7;
    FPaths::CombineInternal(&local_c8,&local_68,2);
    if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_128.Data.AllocatorInstance.Data);
    }
    local_128.Data.AllocatorInstance.Data = local_c8.Data.AllocatorInstance.Data;
    local_128.Data.ArrayNum = local_c8.Data.ArrayNum;
    local_128.Data.ArrayMax = local_c8.Data.ArrayMax;
    local_c8.Data.ArrayNum = 0;
    local_c8.Data.ArrayMax = 0;
    local_c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  FVar15 = (FScriptContainerElement)0x1;
  local_b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.Data.ArrayNum = 0;
  local_b8.Data.ArrayMax = 0;
  if ((param_1->Data).ArrayNum == 0) {
    pwVar10 = L"";
  }
  else {
    pwVar10 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  bVar4 = FParse::Value(pwVar10,L"ProjectType=",&local_b8,true,(wchar_t **)0x0);
  FVar12.Data = local_b8.Data.AllocatorInstance.Data;
  if (bVar4) {
    iVar7 = local_b8.Data.ArrayNum;
    FVar11.Data = (FScriptContainerElement *)L"";
    if (local_b8.Data.ArrayNum != 0) {
      FVar11.Data = local_b8.Data.AllocatorInstance.Data;
    }
    iVar6 = wcscmp((wchar_t *)FVar11.Data,L"Any");
    if (iVar6 == 0) {
      FVar15 = (FScriptContainerElement)0x1;
    }
    else {
      FVar11.Data = (FScriptContainerElement *)L"";
      if (iVar7 != 0) {
        FVar11.Data = FVar12.Data;
      }
      iVar6 = wcscmp((wchar_t *)FVar11.Data,L"Code");
      if (iVar6 == 0) {
        FVar15 = (FScriptContainerElement)0x2;
      }
      else {
        FVar11.Data = (FScriptContainerElement *)L"";
        if (iVar7 != 0) {
          FVar11.Data = FVar12.Data;
        }
        iVar7 = wcscmp((wchar_t *)FVar11.Data,L"Content");
        if (iVar7 == 0) {
          FVar15 = (FScriptContainerElement)0x3;
        }
        else {
          FVar15 = (FScriptContainerElement)0x0;
          if (2 < (byte)LogInstalledPlatforms._0_1_) {
            UE::Logging::Private::BasicLog<3>
                      (&::LOG_Static,(FLogCategoryBase *)&LogInstalledPlatforms);
          }
          bVar5 = false;
        }
      }
    }
  }
  local_res20[0] = (FScriptContainerElement)0x0;
  if ((param_1->Data).ArrayNum != 0) {
    pwVar13 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  FParse::Bool(pwVar13,L"bCanBeDisplayed=",(bool *)local_res20);
  FVar12.Data = local_88.Data.AllocatorInstance.Data;
  if (bVar5) {
    lVar14 = (longlong)local_88.Data.ArrayNum;
    local_118[0] = local_res10[0];
    local_110.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_110.Data.ArrayNum = local_88.Data.ArrayNum;
    if (local_88.Data.ArrayNum == 0) {
      local_110.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_88.Data.ArrayNum,0,(ForAnyElementType *)&local_110,local_88.Data.ArrayNum
                 ,&local_110.Data.ArrayMax);
      memcpy(local_110.Data.AllocatorInstance.Data,FVar12.Data,lVar14 * 2);
    }
    FVar12.Data = local_a8.Data.AllocatorInstance.Data;
    lVar14 = (longlong)local_a8.Data.ArrayNum;
    local_100 = local_res18[0];
    local_f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_f8.Data.ArrayNum = local_a8.Data.ArrayNum;
    if (local_a8.Data.ArrayNum == 0) {
      local_f8.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_a8.Data.ArrayNum,0,(ForAnyElementType *)&local_f8,local_a8.Data.ArrayNum,
                 &local_f8.Data.ArrayMax);
      memcpy(local_f8.Data.AllocatorInstance.Data,FVar12.Data,lVar14 * 2);
    }
    FVar12.Data = local_128.Data.AllocatorInstance.Data;
    lVar14 = (longlong)local_128.Data.ArrayNum;
    local_e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_e8.Data.ArrayNum = local_128.Data.ArrayNum;
    if (local_128.Data.ArrayNum == 0) {
      local_e8.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_128.Data.ArrayNum,0,(ForAnyElementType *)&local_e8,
                 local_128.Data.ArrayNum,&local_e8.Data.ArrayMax);
      memcpy(local_e8.Data.AllocatorInstance.Data,FVar12.Data,lVar14 * 2);
    }
    pFVar2 = (this->InstalledPlatformConfigurations).AllocatorInstance.Data;
    local_d7 = local_res20[0];
    local_d8 = FVar15;
    if (((pFVar2 <= local_118) &&
        (local_118 < pFVar2 + (longlong)(this->InstalledPlatformConfigurations).ArrayMax * 0x48)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar7 = (this->InstalledPlatformConfigurations).ArrayNum;
    piVar1 = &(this->InstalledPlatformConfigurations).ArrayMax;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x848,(ForAnyElementType *)this,piVar1);
    }
    (this->InstalledPlatformConfigurations).ArrayNum = iVar7 + 1;
    pFVar2 = (this->InstalledPlatformConfigurations).AllocatorInstance.Data + (longlong)iVar7 * 0x48
    ;
    *pFVar2 = local_118[0];
    ::FString::FString((FString *)(pFVar2 + 8),&local_110);
    pFVar2[0x18] = local_100;
    ::FString::FString((FString *)(pFVar2 + 0x20),&local_f8);
    ::FString::FString((FString *)(pFVar2 + 0x30),&local_e8);
    pFVar2[0x40] = local_d8;
    pFVar2[0x41] = local_d7;
    if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e8.Data.AllocatorInstance.Data);
    }
    if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.Data.AllocatorInstance.Data);
    }
    if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_110.Data.AllocatorInstance.Data);
    }
  }
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_128.Data.AllocatorInstance.Data);
  }
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  pFVar2 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

