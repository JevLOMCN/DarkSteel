// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DesktopPlatform
// Functions: 8

// Call @ 142d1daa0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FInstalledPlatformInfo::CanDisplayPlatform'::__l2::<lambda_1>,bool,FInstalledPlatformConfiguration>
::Call(void *param_1,FInstalledPlatformConfiguration *param_2)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = (param_2->PlatformName).Data.ArrayNum;
  if (iVar1 == *(int *)((longlong)param_1 + 8)) {
    if (iVar1 < 2) goto LAB_142d1dadb;
    iVar1 = FGenericPlatformStricmp::Stricmp
                      ((wchar_t *)(param_2->PlatformName).Data.AllocatorInstance.Data,
                       *(wchar_t **)param_1);
    bVar2 = iVar1 == 0;
  }
  else {
    bVar2 = iVar1 + *(int *)((longlong)param_1 + 8) == 1;
  }
  if (!bVar2) {
    return false;
  }
LAB_142d1dadb:
  if ((((param_2->bCanBeDisplayed == false) && (*(EProjectType *)((longlong)param_1 + 0x10) != Any))
      && (param_2->ProjectType != Any)) &&
     (param_2->ProjectType != *(EProjectType *)((longlong)param_1 + 0x10))) {
    return false;
  }
  return true;
}

// Call @ 142d1db20

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FDesktopPlatformBase::IsUnrealBuildToolRunning'::__l2::<lambda_1>,bool,wchar_t_const_*,bool>
::Call(void *param_1,wchar_t **param_2,bool *param_3)

{
  bool bVar1;
  
  bVar1 = `FDesktopPlatformBase::IsUnrealBuildToolRunning'::__l2::<lambda_1>::operator()
                    (param_1,*param_2,*param_3);
  return bVar1;
}

// Call @ 142d1db40

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FInstalledPlatformInfo::IsValidConfiguration'::__l2::<lambda_1>,bool,FInstalledPlatformConfiguration>
::Call(void *param_1,FInstalledPlatformConfiguration *param_2)

{
  if ((param_2->Configuration == *(EBuildConfiguration *)param_1) &&
     (((*(EProjectType *)((longlong)param_1 + 1) == Any || (param_2->ProjectType == Any)) ||
      (param_2->ProjectType == *(EProjectType *)((longlong)param_1 + 1))))) {
    return true;
  }
  return false;
}

// Call @ 142d1db70

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FInstalledPlatformInfo::IsValidPlatform'::__l2::<lambda_1>,bool,FInstalledPlatformConfiguration>
::Call(void *param_1,FInstalledPlatformConfiguration *param_2)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = (param_2->PlatformName).Data.ArrayNum;
  if (iVar1 == *(int *)((longlong)param_1 + 8)) {
    if (iVar1 < 2) goto LAB_142d1dbab;
    iVar1 = FGenericPlatformStricmp::Stricmp
                      ((wchar_t *)(param_2->PlatformName).Data.AllocatorInstance.Data,
                       *(wchar_t **)param_1);
    bVar2 = iVar1 == 0;
  }
  else {
    bVar2 = iVar1 + *(int *)((longlong)param_1 + 8) == 1;
  }
  if (!bVar2) {
    return false;
  }
LAB_142d1dbab:
  if (((*(EProjectType *)((longlong)param_1 + 0x10) != Any) && (param_2->ProjectType != Any)) &&
     (param_2->ProjectType != *(EProjectType *)((longlong)param_1 + 0x10))) {
    return false;
  }
  return true;
}

// Call @ 142d1dbe0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FInstalledPlatformInfo::IsValidPlatformAndConfiguration'::__l2::<lambda_1>,bool,FInstalledPlatformConfiguration>
::Call(void *param_1,FInstalledPlatformConfiguration *param_2)

{
  int iVar1;
  bool bVar2;
  
  if (param_2->Configuration != *(EBuildConfiguration *)param_1) {
    return false;
  }
  iVar1 = (param_2->PlatformName).Data.ArrayNum;
  if (iVar1 == *(int *)((longlong)param_1 + 0x10)) {
    if (iVar1 < 2) goto LAB_142d1dc23;
    iVar1 = FGenericPlatformStricmp::Stricmp
                      ((wchar_t *)(param_2->PlatformName).Data.AllocatorInstance.Data,
                       *(wchar_t **)((longlong)param_1 + 8));
    bVar2 = iVar1 == 0;
  }
  else {
    bVar2 = iVar1 + *(int *)((longlong)param_1 + 0x10) == 1;
  }
  if (!bVar2) {
    return false;
  }
LAB_142d1dc23:
  if (((*(EProjectType *)((longlong)param_1 + 0x18) != Any) && (param_2->ProjectType != Any)) &&
     (param_2->ProjectType != *(EProjectType *)((longlong)param_1 + 0x18))) {
    return false;
  }
  return true;
}

// Call @ 142d1dc60

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FInstalledPlatformInfo::IsValidPlatformArchitecture'::__l2::<lambda_1>,bool,FInstalledPlatformConfiguration>
::Call(void *param_1,FInstalledPlatformConfiguration *param_2)

{
  int iVar1;
  size_t sVar2;
  wchar_t *_Str;
  bool bVar3;
  
  iVar1 = (param_2->PlatformName).Data.ArrayNum;
  if (iVar1 == *(int *)((longlong)param_1 + 8)) {
    if (iVar1 < 2) goto LAB_142d1d15b;
    iVar1 = FGenericPlatformStricmp::Stricmp
                      ((wchar_t *)(param_2->PlatformName).Data.AllocatorInstance.Data,
                       *(wchar_t **)param_1);
    bVar3 = iVar1 == 0;
  }
  else {
    bVar3 = iVar1 + *(int *)((longlong)param_1 + 8) == 1;
  }
  if (!bVar3) {
    return false;
  }
LAB_142d1d15b:
  if (*(int *)((longlong)param_1 + 0x18) == 0) {
    _Str = L"";
  }
  else {
    _Str = *(wchar_t **)((longlong)param_1 + 0x10);
    if (_Str == (wchar_t *)0x0) {
      return false;
    }
  }
  sVar2 = wcslen(_Str);
  iVar1 = ::FString::Find(&param_2->Architecture,_Str,(int)sVar2,IgnoreCase,FromStart,-1);
  if (iVar1 == -1) {
    return false;
  }
  return true;
}

// Call @ 142d1dc70

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FInstalledPlatformInfo::IsValidTargetType'::__l2::<lambda_1>,bool,FInstalledPlatformConfiguration>
::Call(void *param_1,FInstalledPlatformConfiguration *param_2)

{
  return param_2->PlatformType == *(EBuildTargetType *)param_1;
}

// Call @ 142d1dc80

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FInstalledPlatformInfo::IsPlatformMissingRequiredFile'::__l5::<lambda_1>,bool,FInstalledPlatformConfiguration>
::Call(void *param_1,FInstalledPlatformConfiguration *param_2)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = (param_2->PlatformName).Data.ArrayNum;
  if (iVar1 == *(int *)((longlong)param_1 + 8)) {
    if (iVar1 < 2) goto LAB_142d1dcb4;
    iVar1 = FGenericPlatformStricmp::Stricmp
                      ((wchar_t *)(param_2->PlatformName).Data.AllocatorInstance.Data,
                       *(wchar_t **)param_1);
    bVar2 = iVar1 == 0;
  }
  else {
    bVar2 = iVar1 + *(int *)((longlong)param_1 + 8) == 1;
  }
  if (!bVar2) {
    return false;
  }
LAB_142d1dcb4:
  if ((1 < (param_2->RequiredFile).Data.ArrayNum) &&
     (bVar2 = FPaths::FileExists(&param_2->RequiredFile), !bVar2)) {
    return true;
  }
  return false;
}

