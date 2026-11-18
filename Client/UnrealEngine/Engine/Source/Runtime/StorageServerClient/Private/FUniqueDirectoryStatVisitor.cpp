// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StorageServerClient
// Functions: 6

// PerformMergedIteration @ 148cd2430

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FUniqueDirectoryStatVisitor<IPlatformFile::FDirectoryStatVisitor,FFileStatData_const_&>::
PerformMergedIteration
          (FUniqueDirectoryStatVisitor<IPlatformFile::FDirectoryStatVisitor,FFileStatData_const_&>
           *this,wchar_t *param_1,
          TFunctionRef<bool___cdecl(wchar_t_const_*,IPlatformFile::FDirectoryStatVisitor_&)>
          *param_2,TFunctionRef<bool___cdecl(wchar_t_const_*,IPlatformFile::FDirectoryStatVisitor_&)>
                   *param_3)

{
  FPlatformRWLock *SRWLock;
  FStorageServerPlatformFile *pFVar1;
  ForAnyElementType FVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  bool bVar7;
  undefined1 auStack_8a8 [32];
  FString local_888;
  TStringBuilderBase<wchar_t> local_878;
  FScriptContainerElement local_858 [2048];
  ulonglong local_58 [3];
  
  local_58[0] = __security_cookie.value ^ (ulonglong)auStack_8a8;
  local_888.Data.AllocatorInstance.Data = local_888.Data.AllocatorInstance.Data & 0xffffffff00000000
  ;
  bVar7 = false;
  if ((GPreferLocalForNonAssets) &&
     (local_888.Data.AllocatorInstance.Data = (FScriptContainerElement *)param_1,
     cVar3 = (**(code **)param_2)(*(undefined8 *)&param_2->field_0x8,&local_888,this), cVar3 == '\0'
     )) {
    return false;
  }
  local_878.Base = (wchar_t *)local_858;
  local_878.CurPos = (wchar_t *)local_858;
  local_878.End = (wchar_t *)local_58;
  local_878.bIsDynamic = false;
  local_878.bIsExternal = false;
  bVar4 = FStorageServerPlatformFile::MakeStorageServerPath
                    (this->ServerPlatformFile,param_1,&local_878);
  if (bVar4) {
    pFVar1 = this->ServerPlatformFile;
    if (local_878.End < (FScriptContainerElement *)((longlong)local_878.CurPos + 2)) {
      TStringBuilderBase<wchar_t>::Extend(&local_878,1);
    }
    *local_878.CurPos = 0;
    ::FString::FString(&local_888,local_878.Base);
    SRWLock = &(pFVar1->ServerToc).TocLock;
    AcquireSRWLockShared((PSRWLOCK)SRWLock);
    iVar6 = local_888.Data.ArrayNum + -1;
    FVar2.Data = local_888.Data.AllocatorInstance.Data;
    if (local_888.Data.ArrayNum == 0) {
      iVar6 = 0;
      FVar2.Data = (FScriptContainerElement *)L"";
    }
    uVar5 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar6,(wchar_t *)FVar2.Data);
    iVar6 = TSet<TTuple<FString,FStorageServerFileSystemTOC::FDirectory_*>,TDefaultMapHashableKeyFuncs<FString,FStorageServerFileSystemTOC::FDirectory_*,0>,FDefaultSetAllocator>
            ::FindIndexByHash<FString>
                      ((TSet<TTuple<FString,FStorageServerFileSystemTOC::FDirectory_*>,TDefaultMapHashableKeyFuncs<FString,FStorageServerFileSystemTOC::FDirectory_*,0>,FDefaultSetAllocator>
                        *)&(pFVar1->ServerToc).Directories,uVar5,&local_888);
    ReleaseSRWLockShared((PSRWLOCK)SRWLock);
    bVar7 = true;
    if (iVar6 == -1) goto LAB_148cd257a;
    bVar4 = true;
  }
  else {
LAB_148cd257a:
    bVar4 = false;
  }
  if ((bVar7) && (local_888.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_888.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    if (local_878.End < (FScriptContainerElement *)((longlong)local_878.CurPos + 2)) {
      TStringBuilderBase<wchar_t>::Extend(&local_878,1);
    }
    *local_878.CurPos = 0;
    local_888.Data.AllocatorInstance.Data = (FScriptContainerElement *)local_878.Base;
    cVar3 = (**(code **)param_3)(*(undefined8 *)&param_3->field_0x8,&local_888,this);
    if (cVar3 == '\0') goto LAB_148cd2609;
  }
  if ((GPreferLocalForNonAssets != false) ||
     (local_888.Data.AllocatorInstance.Data = (FScriptContainerElement *)param_1,
     cVar3 = (**(code **)param_2)(*(undefined8 *)&param_2->field_0x8,&local_888,this), cVar3 != '\0'
     )) {
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_878);
    return true;
  }
LAB_148cd2609:
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_878);
  return false;
}

// PerformMergedIteration @ 148cd2650

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FUniqueDirectoryStatVisitor<IPlatformFile::FDirectoryVisitor,bool>::PerformMergedIteration
          (FUniqueDirectoryStatVisitor<IPlatformFile::FDirectoryVisitor,bool> *this,wchar_t *param_1
          ,TFunctionRef<bool___cdecl(wchar_t_const_*,IPlatformFile::FDirectoryVisitor_&)> *param_2,
          TFunctionRef<bool___cdecl(wchar_t_const_*,IPlatformFile::FDirectoryVisitor_&)> *param_3)

{
  FPlatformRWLock *SRWLock;
  FStorageServerPlatformFile *pFVar1;
  ForAnyElementType FVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  bool bVar7;
  undefined1 auStack_8a8 [32];
  FString local_888;
  TStringBuilderBase<wchar_t> local_878;
  FScriptContainerElement local_858 [2048];
  ulonglong local_58 [3];
  
  local_58[0] = __security_cookie.value ^ (ulonglong)auStack_8a8;
  local_888.Data.AllocatorInstance.Data = local_888.Data.AllocatorInstance.Data & 0xffffffff00000000
  ;
  bVar7 = false;
  if ((GPreferLocalForNonAssets) &&
     (local_888.Data.AllocatorInstance.Data = (FScriptContainerElement *)param_1,
     cVar3 = (**(code **)param_2)(*(undefined8 *)&param_2->field_0x8,&local_888,this), cVar3 == '\0'
     )) {
    return false;
  }
  local_878.Base = (wchar_t *)local_858;
  local_878.CurPos = (wchar_t *)local_858;
  local_878.End = (wchar_t *)local_58;
  local_878.bIsDynamic = false;
  local_878.bIsExternal = false;
  bVar4 = FStorageServerPlatformFile::MakeStorageServerPath
                    (this->ServerPlatformFile,param_1,&local_878);
  if (bVar4) {
    pFVar1 = this->ServerPlatformFile;
    if (local_878.End < (FScriptContainerElement *)((longlong)local_878.CurPos + 2)) {
      TStringBuilderBase<wchar_t>::Extend(&local_878,1);
    }
    *local_878.CurPos = 0;
    ::FString::FString(&local_888,local_878.Base);
    SRWLock = &(pFVar1->ServerToc).TocLock;
    AcquireSRWLockShared((PSRWLOCK)SRWLock);
    iVar6 = local_888.Data.ArrayNum + -1;
    FVar2.Data = local_888.Data.AllocatorInstance.Data;
    if (local_888.Data.ArrayNum == 0) {
      iVar6 = 0;
      FVar2.Data = (FScriptContainerElement *)L"";
    }
    uVar5 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar6,(wchar_t *)FVar2.Data);
    iVar6 = TSet<TTuple<FString,FStorageServerFileSystemTOC::FDirectory_*>,TDefaultMapHashableKeyFuncs<FString,FStorageServerFileSystemTOC::FDirectory_*,0>,FDefaultSetAllocator>
            ::FindIndexByHash<FString>
                      ((TSet<TTuple<FString,FStorageServerFileSystemTOC::FDirectory_*>,TDefaultMapHashableKeyFuncs<FString,FStorageServerFileSystemTOC::FDirectory_*,0>,FDefaultSetAllocator>
                        *)&(pFVar1->ServerToc).Directories,uVar5,&local_888);
    ReleaseSRWLockShared((PSRWLOCK)SRWLock);
    bVar7 = true;
    if (iVar6 == -1) goto LAB_148cd279a;
    bVar4 = true;
  }
  else {
LAB_148cd279a:
    bVar4 = false;
  }
  if ((bVar7) && (local_888.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_888.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    if (local_878.End < (FScriptContainerElement *)((longlong)local_878.CurPos + 2)) {
      TStringBuilderBase<wchar_t>::Extend(&local_878,1);
    }
    *local_878.CurPos = 0;
    local_888.Data.AllocatorInstance.Data = (FScriptContainerElement *)local_878.Base;
    cVar3 = (**(code **)param_3)(*(undefined8 *)&param_3->field_0x8,&local_888,this);
    if (cVar3 == '\0') goto LAB_148cd2829;
  }
  if ((GPreferLocalForNonAssets != false) ||
     (local_888.Data.AllocatorInstance.Data = (FScriptContainerElement *)param_1,
     cVar3 = (**(code **)param_2)(*(undefined8 *)&param_2->field_0x8,&local_888,this), cVar3 != '\0'
     )) {
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_878);
    return true;
  }
LAB_148cd2829:
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_878);
  return false;
}

// ShouldVisitLeafPathname @ 148cdf8e0

bool __thiscall
FUniqueDirectoryStatVisitor<IPlatformFile::FDirectoryStatVisitor,FFileStatData_const_&>::
ShouldVisitLeafPathname
          (FUniqueDirectoryStatVisitor<IPlatformFile::FDirectoryStatVisitor,FFileStatData_const_&>
           *this,TStringView<wchar_t> *param_1)

{
  undefined1 uVar1;
  undefined4 local_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined4 uStack_c;
  
  local_18 = *(undefined4 *)&param_1->DataPtr;
  uStack_14 = *(undefined4 *)((longlong)&param_1->DataPtr + 4);
  iStack_10 = param_1->Size;
  uStack_c = *(undefined4 *)&param_1->field_0xc;
  uVar1 = (**(code **)((longlong)*this->RealVisitor + 8))(this->RealVisitor,&local_18);
  return (bool)uVar1;
}

// ShouldVisitLeafPathname @ 148cdf910

bool __thiscall
FUniqueDirectoryStatVisitor<IPlatformFile::FDirectoryVisitor,bool>::ShouldVisitLeafPathname
          (FUniqueDirectoryStatVisitor<IPlatformFile::FDirectoryVisitor,bool> *this,
          TStringView<wchar_t> *param_1)

{
  undefined1 uVar1;
  undefined4 local_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined4 uStack_c;
  
  local_18 = *(undefined4 *)&param_1->DataPtr;
  uStack_14 = *(undefined4 *)((longlong)&param_1->DataPtr + 4);
  iStack_10 = param_1->Size;
  uStack_c = *(undefined4 *)&param_1->field_0xc;
  uVar1 = (**(code **)(this->RealVisitor->_padding_ + 8))(this->RealVisitor,&local_18);
  return (bool)uVar1;
}

// Visit @ 148ce36a0

bool __thiscall
FUniqueDirectoryStatVisitor<IPlatformFile::FDirectoryStatVisitor,FFileStatData_const_&>::Visit
          (FUniqueDirectoryStatVisitor<IPlatformFile::FDirectoryStatVisitor,FFileStatData_const_&>
           *this,wchar_t *param_1,FFileStatData *param_2)

{
  ForAnyElementType FVar1;
  undefined1 uVar2;
  uint uVar3;
  int iVar4;
  FString local_28;
  FString local_18;
  
  if (GPreferLocalForNonAssets) {
    ::FString::FString(&local_18,param_1);
    FPaths::ConvertRelativePathToFull(&local_28,&local_18);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    iVar4 = local_28.Data.ArrayNum + -1;
    FVar1.Data = local_28.Data.AllocatorInstance.Data;
    if (local_28.Data.ArrayNum == 0) {
      iVar4 = 0;
      FVar1.Data = (FScriptContainerElement *)L"";
    }
    uVar3 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar4,(wchar_t *)FVar1.Data);
    iVar4 = TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::FindIndexByHash<FString>
                      (&this->AlreadyVisited,uVar3,&local_28);
    if (iVar4 != -1) {
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      return true;
    }
    TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
              (&this->AlreadyVisited,(FString *)&stack0x00000020,(bool *)&local_28);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  uVar2 = (**(code **)((longlong)*this->RealVisitor + 0x10))(this->RealVisitor,param_1,param_2);
  return (bool)uVar2;
}

// Visit @ 148ce3790

bool __thiscall
FUniqueDirectoryStatVisitor<IPlatformFile::FDirectoryVisitor,bool>::Visit
          (FUniqueDirectoryStatVisitor<IPlatformFile::FDirectoryVisitor,bool> *this,wchar_t *param_1
          ,bool param_2)

{
  ForAnyElementType FVar1;
  undefined1 uVar2;
  uint uVar3;
  int iVar4;
  FString local_28;
  FString local_18;
  
  if (GPreferLocalForNonAssets) {
    ::FString::FString(&local_18,param_1);
    FPaths::ConvertRelativePathToFull(&local_28,&local_18);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    iVar4 = local_28.Data.ArrayNum + -1;
    FVar1.Data = local_28.Data.AllocatorInstance.Data;
    if (local_28.Data.ArrayNum == 0) {
      iVar4 = 0;
      FVar1.Data = (FScriptContainerElement *)L"";
    }
    uVar3 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar4,(wchar_t *)FVar1.Data);
    iVar4 = TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::FindIndexByHash<FString>
                      (&this->AlreadyVisited,uVar3,&local_28);
    if (iVar4 != -1) {
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      return true;
    }
    TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
              (&this->AlreadyVisited,(FString *)&stack0x00000020,(bool *)&local_28);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  uVar2 = (**(code **)(this->RealVisitor->_padding_ + 0x10))(this->RealVisitor,param_1,param_2);
  return (bool)uVar2;
}

