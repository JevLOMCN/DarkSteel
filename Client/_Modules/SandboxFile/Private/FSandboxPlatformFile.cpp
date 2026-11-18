// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SandboxFile
// Functions: 53

// FSandboxPlatformFile @ 148b804c0

FSandboxPlatformFile * __thiscall
FSandboxPlatformFile::FSandboxPlatformFile(FSandboxPlatformFile *this,bool param_1)

{
  IPlatformFile::IPlatformFile((IPlatformFile *)this);
  this->bEntireEngineWillUseThisSandbox = param_1;
  this->_padding_ = (longlong)&___7FSandboxPlatformFile__6B_;
  this->LowerLevel = (IPlatformFile *)0x0;
  (this->SandboxDirectory).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SandboxDirectory).Data.ArrayNum = 0;
  (this->SandboxDirectory).Data.ArrayMax = 0;
  (this->GameSandboxDirectoryName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GameSandboxDirectoryName).Data.ArrayNum = 0;
  (this->GameSandboxDirectoryName).Data.ArrayMax = 0;
  (this->RelativeRootDirectory).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RelativeRootDirectory).Data.ArrayNum = 0;
  (this->RelativeRootDirectory).Data.ArrayMax = 0;
  (this->AbsoluteRootDirectory).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AbsoluteRootDirectory).Data.ArrayNum = 0;
  (this->AbsoluteRootDirectory).Data.ArrayMax = 0;
  (this->AbsoluteGameDirectory).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AbsoluteGameDirectory).Data.ArrayNum = 0;
  (this->AbsoluteGameDirectory).Data.ArrayMax = 0;
  (this->AbsolutePathToGameDirectory).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AbsolutePathToGameDirectory).Data.ArrayNum = 0;
  (this->AbsolutePathToGameDirectory).Data.ArrayMax = 0;
  (this->FileExclusionWildcards).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FileExclusionWildcards).ArrayNum = 0;
  (this->FileExclusionWildcards).ArrayMax = 0;
  (this->DirectoryExclusionWildcards).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DirectoryExclusionWildcards).ArrayNum = 0;
  (this->DirectoryExclusionWildcards).ArrayMax = 0;
  (this->InjectedSourceDirectory).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InjectedSourceDirectory).Data.ArrayNum = 0;
  (this->InjectedSourceDirectory).Data.ArrayMax = 0;
  (this->InjectedSourceDirectoryParent).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->InjectedSourceDirectoryParent).Data.ArrayNum = 0;
  (this->InjectedSourceDirectoryParent).Data.ArrayMax = 0;
  (this->InjectedTargetDirectory).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InjectedTargetDirectory).Data.ArrayNum = 0;
  (this->InjectedTargetDirectory).Data.ArrayMax = 0;
  (this->InjectedTargetDirectoryParent).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->InjectedTargetDirectoryParent).Data.ArrayNum = 0;
  (this->InjectedTargetDirectoryParent).Data.ArrayMax = 0;
  this->bSandboxOnly = false;
  this->bSandboxEnabled = true;
  return this;
}

// ~FSandboxPlatformFile @ 148b80590

void __thiscall FSandboxPlatformFile::~FSandboxPlatformFile(FSandboxPlatformFile *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FSandboxPlatformFile__6B_;
  pFVar1 = (this->InjectedTargetDirectoryParent).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->InjectedTargetDirectory).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->InjectedSourceDirectoryParent).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->InjectedSourceDirectory).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FString,int>
            ((FString *)(this->DirectoryExclusionWildcards).AllocatorInstance.Data,
             (this->DirectoryExclusionWildcards).ArrayNum);
  pFVar1 = (this->DirectoryExclusionWildcards).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FString,int>
            ((FString *)(this->FileExclusionWildcards).AllocatorInstance.Data,
             (this->FileExclusionWildcards).ArrayNum);
  pFVar1 = (this->FileExclusionWildcards).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->AbsolutePathToGameDirectory).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->AbsoluteGameDirectory).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->AbsoluteRootDirectory).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->RelativeRootDirectory).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->GameSandboxDirectoryName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SandboxDirectory).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  IPlatformFile::~IPlatformFile((IPlatformFile *)this);
  return;
}

// AddExclusion @ 148b808e0

void __thiscall
FSandboxPlatformFile::AddExclusion(FSandboxPlatformFile *this,wchar_t *param_1,bool param_2)

{
  FString *pFVar1;
  TArray<FString,TSizedDefaultAllocator<32>_> *this_00;
  FString local_18;
  
  if (param_2) {
    pFVar1 = ::FString::FString(&local_18,param_1);
    this_00 = &this->DirectoryExclusionWildcards;
  }
  else {
    pFVar1 = ::FString::FString(&local_18,param_1);
    this_00 = &this->FileExclusionWildcards;
  }
  TArray<FString,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FString>(this_00,pFVar1);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// ConvertFromSandboxPath @ 148b80930

FString * __thiscall
FSandboxPlatformFile::ConvertFromSandboxPath
          (FSandboxPlatformFile *this,FString *__return_storage_ptr__,wchar_t *param_1)

{
  FScriptContainerElement *_Src;
  bool bVar1;
  size_t sVar2;
  FString *pFVar3;
  ForAnyElementType FVar4;
  longlong lVar5;
  int iVar6;
  wchar_t *pwVar7;
  FString local_88;
  ForAnyElementType local_78;
  int local_70;
  int local_6c;
  FString local_68;
  FString local_58;
  FString local_48;
  TStringView<wchar_t> local_38;
  wchar_t *local_28;
  undefined4 local_20;
  
  ::FString::FString(&local_48,param_1);
  FPaths::ConvertRelativePathToFull(&local_58,&local_48);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if ((this->SandboxDirectory).Data.ArrayNum == 0) {
    local_38.DataPtr = L"";
  }
  else {
    local_38.DataPtr = (wchar_t *)(this->SandboxDirectory).Data.AllocatorInstance.Data;
  }
  local_38.Size = 0;
  if ((FScriptContainerElement *)local_38.DataPtr != (FScriptContainerElement *)0x0) {
    sVar2 = wcslen(local_38.DataPtr);
    local_38.Size = (int)sVar2;
  }
  local_28 = GInternalProjectName;
  sVar2 = wcslen(GInternalProjectName);
  local_20 = (undefined4)sVar2;
  FPaths::CombineInternal(&local_68,&local_38,2);
  local_70 = (this->SandboxDirectory).Data.ArrayNum;
  lVar5 = (longlong)local_70;
  _Src = (this->SandboxDirectory).Data.AllocatorInstance.Data;
  local_78.Data = (FScriptContainerElement *)0x0;
  if (local_70 == 0) {
    local_6c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_70,0,&local_78,local_70,&local_6c);
    memcpy(local_78.Data,_Src,lVar5 * 2);
  }
  local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.Data.ArrayNum = 0;
  local_88.Data.ArrayMax = 0;
  iVar6 = local_68.Data.ArrayNum + -1;
  FVar4.Data = local_68.Data.AllocatorInstance.Data;
  if (local_68.Data.ArrayNum == 0) {
    iVar6 = 0;
    FVar4.Data = (FScriptContainerElement *)L"";
  }
  bVar1 = ::FString::StartsWith(&local_58,(wchar_t *)FVar4.Data,iVar6,IgnoreCase);
  if (bVar1) {
    pFVar3 = FPaths::ProjectDir((FString *)&local_38);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar7 = L"";
    }
    else {
      pwVar7 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
    FVar4.Data = (FScriptContainerElement *)L"";
    if (local_68.Data.ArrayNum != 0) {
      FVar4.Data = local_68.Data.AllocatorInstance.Data;
    }
    pFVar3 = ::FString::Replace(&local_58,&local_48,(wchar_t *)FVar4.Data,pwVar7,IgnoreCase);
    if (&local_88 != pFVar3) {
      if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
      }
      local_88.Data.AllocatorInstance.Data = (pFVar3->Data).AllocatorInstance.Data;
      (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_88.Data.ArrayNum = (pFVar3->Data).ArrayNum;
      local_88.Data.ArrayMax = (pFVar3->Data).ArrayMax;
      (pFVar3->Data).ArrayNum = 0;
      (pFVar3->Data).ArrayMax = 0;
    }
    FVar4.Data = (FScriptContainerElement *)local_38.DataPtr;
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
      FVar4.Data = (FScriptContainerElement *)local_38.DataPtr;
    }
  }
  else {
    iVar6 = local_70 + -1;
    FVar4.Data = local_78.Data;
    if (local_70 == 0) {
      iVar6 = 0;
      FVar4.Data = (FScriptContainerElement *)L"";
    }
    bVar1 = ::FString::StartsWith(&local_58,(wchar_t *)FVar4.Data,iVar6,IgnoreCase);
    if (!bVar1) goto LAB_148b80b8f;
    pFVar3 = FPaths::RootDir(&local_48);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar7 = L"";
    }
    else {
      pwVar7 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
    FVar4.Data = (FScriptContainerElement *)L"";
    if (local_70 != 0) {
      FVar4.Data = local_78.Data;
    }
    pFVar3 = ::FString::Replace(&local_58,(FString *)&local_38,(wchar_t *)FVar4.Data,pwVar7,
                                IgnoreCase);
    if (&local_88 != pFVar3) {
      if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
      }
      local_88.Data.AllocatorInstance.Data = (pFVar3->Data).AllocatorInstance.Data;
      (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_88.Data.ArrayNum = (pFVar3->Data).ArrayNum;
      local_88.Data.ArrayMax = (pFVar3->Data).ArrayMax;
      (pFVar3->Data).ArrayNum = 0;
      (pFVar3->Data).ArrayMax = 0;
    }
    FVar4.Data = local_48.Data.AllocatorInstance.Data;
    if ((FScriptContainerElement *)local_38.DataPtr != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.DataPtr);
      FVar4.Data = local_48.Data.AllocatorInstance.Data;
    }
  }
  if (FVar4.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar4.Data);
  }
LAB_148b80b8f:
  ::FString::ReplaceInline(&local_88,L"//",L"/",IgnoreCase);
  FPaths::ConvertRelativePathToFull(__return_storage_ptr__,&local_88);
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  if (local_78.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data);
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// ConvertToAbsolutePathForExternalAppForRead @ 148b80c20

FString * __thiscall
FSandboxPlatformFile::ConvertToAbsolutePathForExternalAppForRead
          (FSandboxPlatformFile *this,FString *__return_storage_ptr__,wchar_t *param_1)

{
  char cVar1;
  bool bVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  ForAnyElementType FVar5;
  FString local_28;
  FString local_18;
  
  pFVar3 = ConvertToSandboxPath(this,&local_18,param_1);
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar4 = L"";
  }
  else {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  ::FString::FString(&local_28,pwVar4);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  FVar5.Data = (FScriptContainerElement *)L"";
  if (local_28.Data.ArrayNum != 0) {
    FVar5.Data = local_28.Data.AllocatorInstance.Data;
  }
  cVar1 = (**(code **)((longlong)*this->LowerLevel + 0x78))(this->LowerLevel,FVar5.Data);
  if ((cVar1 != '\0') || (bVar2 = OkForInnerAccess(this,param_1,false), !bVar2)) {
    (__return_storage_ptr__->Data).AllocatorInstance.Data = local_28.Data.AllocatorInstance.Data;
    (__return_storage_ptr__->Data).ArrayNum = local_28.Data.ArrayNum;
    (__return_storage_ptr__->Data).ArrayMax = local_28.Data.ArrayMax;
    return __return_storage_ptr__;
  }
  ::FString::FString(&local_18,param_1);
  FPaths::ConvertRelativePathToFull(__return_storage_ptr__,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return __return_storage_ptr__;
  }
  FMemory::Free(local_28.Data.AllocatorInstance.Data);
  return __return_storage_ptr__;
}

// ConvertToAbsolutePathForExternalAppForWrite @ 148b80d20

FString * __thiscall
FSandboxPlatformFile::ConvertToAbsolutePathForExternalAppForWrite
          (FSandboxPlatformFile *this,FString *__return_storage_ptr__,wchar_t *param_1)

{
  FString *pFVar1;
  FString local_18;
  
  pFVar1 = ConvertToSandboxPath(this,&local_18,param_1);
  FPaths::ConvertRelativePathToFull(__return_storage_ptr__,pFVar1);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// ConvertToSandboxPath @ 148b80d60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

FString * __thiscall
FSandboxPlatformFile::ConvertToSandboxPath
          (FSandboxPlatformFile *this,FString *__return_storage_ptr__,wchar_t *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  undefined1 _Src [8];
  bool bVar6;
  FNameEntryId FVar7;
  int iVar8;
  int iVar9;
  FName *pFVar10;
  FThreadSafeStaticStat<_public:_class_FString___cdecl_FSandboxPlatformFile::ConvertToSandboxPath(wchar_t_const_*)const_::_2_::FStat_STAT_SandboxPlatformFile_ConvertToSandboxPath>
  FVar11;
  FThreadStats *this_00;
  FThreadStatsPool *pFVar12;
  FString *pFVar13;
  size_t sVar14;
  ForAnyElementType FVar15;
  wchar_t *pwVar16;
  wchar_t *pwVar17;
  FName FVar18;
  wchar_t *_Str;
  int iVar19;
  uint uVar20;
  longlong lVar21;
  undefined1 auStackY_168 [32];
  undefined1 local_108 [8];
  FName local_100;
  FName local_f8;
  FStatMessage local_f0;
  LARGE_INTEGER local_e0;
  FString local_d8;
  TStringView<wchar_t> local_c8;
  wchar_t *local_b8;
  undefined4 local_b0;
  FString local_a8;
  FName local_98;
  FName local_88 [2];
  undefined1 local_78 [8];
  FName local_70;
  FScriptContainerElement *local_68;
  undefined4 local_60;
  FScriptContainerElement *local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_168;
  local_e0 = (LARGE_INTEGER)__return_storage_ptr__;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_SandboxPlatformFile_ConvertToSandboxPath ==
        (FThreadSafeStaticStat<_public:_class_FString___cdecl_FSandboxPlatformFile::ConvertToSandboxPath(wchar_t_const_*)const_::_2_::FStat_STAT_SandboxPlatformFile_ConvertToSandboxPath>
         )0x0) {
      pFVar10 = ::FName::FName(&local_f8,"STAT_SandboxPlatformFile_ConvertToSandboxPath");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SandboxPlatformFile_ConvertToSandboxPath
                 ,*pFVar10,L"FSandboxPlatformFile::ConvertToSandboxPath","STATGROUP_LoadTimeVerbose"
                 ,"STATCAT_Advanced",L"LoadTimeVerbose",false,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar11 = StatPtr_STAT_SandboxPlatformFile_ConvertToSandboxPath;
  if (StatPtr_STAT_SandboxPlatformFile_ConvertToSandboxPath ==
      (FThreadSafeStaticStat<_public:_class_FString___cdecl_FSandboxPlatformFile::ConvertToSandboxPath(wchar_t_const_*)const_::_2_::FStat_STAT_SandboxPlatformFile_ConvertToSandboxPath>
       )0x0) {
    pFVar10 = ::FName::FName((FName *)local_78,"STAT_SandboxPlatformFile_ConvertToSandboxPath");
    FVar11 = (FThreadSafeStaticStat<_public:_class_FString___cdecl_FSandboxPlatformFile::ConvertToSandboxPath(wchar_t_const_*)const_::_2_::FStat_STAT_SandboxPlatformFile_ConvertToSandboxPath>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_SandboxPlatformFile_ConvertToSandboxPath,*pFVar10,
                          L"FSandboxPlatformFile::ConvertToSandboxPath","STATGROUP_LoadTimeVerbose",
                          "STATCAT_Advanced",L"LoadTimeVerbose",false,true,ST_int64,true,false,
                          MCR_Invalid);
  }
  FVar18 = *(FName *)FVar11;
  bVar3 = false;
  bVar5 = false;
  local_98.ComparisonIndex.Value = 0;
  local_98.Number = 0;
  if ((FVar18.ComparisonIndex.Value.Value == 0) && (FVar18.Number == 0)) {
LAB_148b80edd:
    bVar4 = false;
    FVar18 = local_98;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_f8 = (FName)((ulonglong)local_f8 & 0xffffffff00000000);
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_f8,(char *)*(FName *)((longlong)FVar11 + 0x10));
      bVar3 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_f8 = FVar18;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_f8,(wchar_t *)*(FName *)((longlong)FVar11 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SandboxFile\\Private\\IPlatformFileSandboxWrapper.cpp"
                   ,0xd9);
        bVar3 = true;
        bVar5 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_148b80edd;
    local_f8 = FVar18;
    FThreadStats::AddMessage(FVar18,CycleScopeStart);
    bVar4 = true;
  }
  ::FString::FString((FString *)local_108,param_1);
  FPaths::MakeStandardFilename((FString *)local_108);
  if (this->bSandboxEnabled == true) {
    iVar19 = (this->SandboxDirectory).Data.ArrayNum;
    iVar8 = iVar19 + -1;
    if (iVar19 == 0) {
      iVar8 = 0;
    }
    if (iVar8 < 1) goto LAB_148b816cb;
    iVar8 = (this->InjectedTargetDirectory).Data.ArrayNum;
    iVar19 = iVar8 + -1;
    if (iVar8 == 0) {
      iVar19 = 0;
    }
    if (iVar19 == 0) {
      FPaths::ConvertRelativePathToFull(&local_a8,(FString *)local_108);
      local_f8.ComparisonIndex.Value = 0;
      local_f8.Number = 0;
      pwVar16._0_4_ = 0;
      pwVar16._4_4_ = 0;
      uVar20 = 0;
      pFVar13 = FPaths::ProjectDir((FString *)&local_c8);
      pFVar10 = (FName *)FPaths::ConvertRelativePathToFull((FString *)&local_f0,pFVar13);
      if (local_88 != pFVar10) {
        pwVar16 = *(wchar_t **)pFVar10;
        pFVar10->ComparisonIndex = 0;
        pFVar10->Number = 0;
        uVar20 = pFVar10[1].ComparisonIndex.Value;
        pFVar10[1].ComparisonIndex = 0;
        pFVar10[1].Number = 0;
        local_f8 = (FName)pwVar16;
      }
      if (local_f0.StatData.Pad != (uchar  [8])0x0) {
        FMemory::Free((void *)local_f0.StatData.Pad);
      }
      if ((FName)local_c8.DataPtr != (FName)0x0) {
        FMemory::Free(local_c8.DataPtr);
      }
      _Str = L"";
      if ((this->SandboxDirectory).Data.ArrayNum == 0) {
        local_c8.DataPtr = L"";
      }
      else {
        local_c8.DataPtr = (wchar_t *)(this->SandboxDirectory).Data.AllocatorInstance.Data;
      }
      local_c8.Size = 0;
      if ((FName)local_c8.DataPtr != (FName)0x0) {
        sVar14 = wcslen(local_c8.DataPtr);
        local_c8.Size = (int)sVar14;
      }
      local_b8 = GInternalProjectName;
      sVar14 = wcslen(GInternalProjectName);
      local_b0 = (undefined4)sVar14;
      FPaths::CombineInternal((FString *)&local_f0,&local_c8,2);
      if (local_f0.NameAndInfo.Index.Value == 0) {
        iVar19 = 0;
        pwVar17 = L"";
      }
      else {
        iVar19 = local_f0.NameAndInfo.Index.Value - 1;
        pwVar17 = (wchar_t *)local_f0.StatData.Pad;
      }
      bVar6 = ::FString::StartsWith(&local_a8,pwVar17,iVar19,IgnoreCase);
      if (!bVar6) {
        iVar19 = uVar20 - 1;
        if (uVar20 == 0) {
          pwVar16 = L"";
          uVar20 = 0;
          iVar19 = 0;
        }
        bVar6 = ::FString::StartsWith(&local_a8,pwVar16,iVar19,IgnoreCase);
        if (bVar6) {
          FVar15.Data = (FScriptContainerElement *)L"";
          if (local_a8.Data.ArrayNum != 0) {
            FVar15.Data = local_a8.Data.AllocatorInstance.Data;
          }
          if (uVar20 == 0) {
            iVar19 = 0;
          }
          else {
            iVar19 = uVar20 - 1;
          }
          if ((this->SandboxDirectory).Data.ArrayNum != 0) {
            _Str = (wchar_t *)(this->SandboxDirectory).Data.AllocatorInstance.Data;
          }
          pFVar2 = FVar15.Data + (longlong)iVar19 * 2;
          uVar20 = 0;
          FVar7.Value = uVar20;
          local_78 = (undefined1  [8])_Str;
          if ((FName)_Str != (FName)0x0) {
            sVar14 = wcslen(_Str);
            FVar7.Value = (uint)sVar14;
          }
          local_70.ComparisonIndex.Value = FVar7.Value;
          local_68 = (FScriptContainerElement *)GInternalProjectName;
          sVar14 = wcslen(GInternalProjectName);
          local_60 = (undefined4)sVar14;
          local_58 = pFVar2;
          if (pFVar2 != (FScriptContainerElement *)0x0) {
            sVar14 = wcslen((wchar_t *)pFVar2);
            uVar20 = (uint)sVar14;
          }
          iVar19 = 3;
          local_50 = uVar20;
LAB_148b813a7:
          FPaths::CombineInternal((FString *)&local_c8,(TStringView<wchar_t> *)local_78,iVar19);
          if ((FName)local_108 != (FName)0x0) {
            FMemory::Free((void *)local_108);
          }
          local_108 = (undefined1  [8])local_c8.DataPtr;
          local_100.Number = local_c8._12_4_;
          local_100.ComparisonIndex.Value = local_c8.Size;
        }
        else {
          if ((this->AbsoluteRootDirectory).Data.ArrayNum == 0) {
            pwVar16 = L"";
LAB_148b81317:
            sVar14 = wcslen(pwVar16);
            iVar19 = (int)sVar14;
          }
          else {
            pwVar16 = (wchar_t *)(this->AbsoluteRootDirectory).Data.AllocatorInstance.Data;
            if ((FScriptContainerElement *)pwVar16 != (FScriptContainerElement *)0x0)
            goto LAB_148b81317;
            iVar19 = 0;
          }
          bVar6 = ::FString::StartsWith(&local_a8,pwVar16,iVar19,IgnoreCase);
          if (bVar6) {
            iVar19 = (this->AbsoluteRootDirectory).Data.ArrayNum;
            FVar15.Data = (FScriptContainerElement *)L"";
            if (local_a8.Data.ArrayNum != 0) {
              FVar15.Data = local_a8.Data.AllocatorInstance.Data;
            }
            iVar8 = iVar19 + -1;
            if (iVar19 == 0) {
              iVar8 = 0;
            }
            if ((this->SandboxDirectory).Data.ArrayNum != 0) {
              _Str = (wchar_t *)(this->SandboxDirectory).Data.AllocatorInstance.Data;
            }
            pFVar2 = FVar15.Data + (longlong)iVar8 * 2;
            FVar7.Value = 0;
            local_78 = (undefined1  [8])_Str;
            if ((FName)_Str != (FName)0x0) {
              sVar14 = wcslen(_Str);
              FVar7.Value = (uint)sVar14;
            }
            local_70.ComparisonIndex.Value = FVar7.Value;
            local_60 = 0;
            local_68 = pFVar2;
            if (pFVar2 != (FScriptContainerElement *)0x0) {
              sVar14 = wcslen((wchar_t *)pFVar2);
              local_60 = (undefined4)sVar14;
            }
            iVar19 = 2;
            goto LAB_148b813a7;
          }
          iVar19 = ::FString::Find((FString *)local_108,L"/",1,CaseSensitive,FromStart,-1);
          iVar8 = ::FString::Find((FString *)local_108,L"\\",1,CaseSensitive,FromStart,-1);
          _Src = local_108;
          if ((iVar19 < 0) || ((-1 < iVar8 && (iVar8 < iVar19)))) {
            iVar19 = iVar8;
          }
          local_d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          lVar21 = (longlong)(int)local_100.ComparisonIndex.Value;
          local_d8.Data.ArrayNum = local_100.ComparisonIndex.Value;
          if (local_100.ComparisonIndex.Value == 0) {
            local_d8.Data.ArrayMax = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,local_100.ComparisonIndex.Value,0,(ForAnyElementType *)&local_d8,
                       local_100.ComparisonIndex.Value,&local_d8.Data.ArrayMax);
            memcpy(local_d8.Data.AllocatorInstance.Data,(void *)_Src,lVar21 * 2);
          }
          if (iVar19 != -1) {
            pFVar13 = ::FString::Mid((FString *)local_108,(FString *)&local_c8,0,iVar19);
            if (&local_d8 != pFVar13) {
              if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_d8.Data.AllocatorInstance.Data);
              }
              local_d8.Data.AllocatorInstance.Data = (pFVar13->Data).AllocatorInstance.Data;
              (pFVar13->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_d8.Data.ArrayNum = (pFVar13->Data).ArrayNum;
              local_d8.Data.ArrayMax = (pFVar13->Data).ArrayMax;
              (pFVar13->Data).ArrayNum = 0;
              (pFVar13->Data).ArrayMax = 0;
            }
            if ((FName)local_c8.DataPtr != (FName)0x0) {
              FMemory::Free(local_c8.DataPtr);
            }
          }
          bVar6 = FPaths::IsDrive(&local_d8);
          if (!bVar6) {
            pwVar16 = FWindowsPlatformProcess::BaseDir();
            ::FString::FString((FString *)&local_c8,pwVar16);
            FPaths::MakeStandardFilename((FString *)&local_c8);
            iVar8 = local_c8.Size;
            pwVar16 = local_c8.DataPtr;
            iVar19 = local_100.ComparisonIndex.Value - 1;
            if (local_100.ComparisonIndex.Value == 0) {
              iVar19 = 0;
            }
            iVar9 = iVar19 + 1;
            if ((local_c8.Size == 0) && (iVar9 != 0)) {
              iVar9 = iVar19 + 2;
LAB_148b8156c:
              local_78._0_4_ = 0;
              local_78._4_4_ = 0;
              if (iVar9 != 0) goto LAB_148b81579;
              local_70.Number = 0;
              local_70.ComparisonIndex.Value = local_c8.Size;
            }
            else {
              if (local_c8.Size == 0) goto LAB_148b8156c;
LAB_148b81579:
              local_70.ComparisonIndex.Value = local_c8.Size;
              local_78._0_4_ = 0;
              local_78._4_4_ = 0;
              uVar20 = iVar9 + local_c8.Size;
              if ((int)uVar20 < local_c8.Size) {
                    /* WARNING: Subroutine does not return */
                UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar20);
              }
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (2,2,uVar20,0,(ForAnyElementType *)local_78,local_c8.Size,
                         (int *)&local_70.Number);
              if (iVar8 != 0) {
                memcpy((void *)local_78,pwVar16,(longlong)iVar8 * 2);
              }
            }
            ::FString::PathAppend((FString *)local_78,(wchar_t *)local_108,iVar19);
            if ((FName)local_108 != (FName)0x0) {
              FMemory::Free((void *)local_108);
            }
            local_108 = local_78;
            local_100 = local_70;
            if ((this->SandboxDirectory).Data.ArrayNum == 0) {
              pwVar16 = L"";
            }
            else {
              pwVar16 = (wchar_t *)(this->SandboxDirectory).Data.AllocatorInstance.Data;
            }
            if ((this->RelativeRootDirectory).Data.ArrayNum != 0) {
              _Str = (wchar_t *)(this->RelativeRootDirectory).Data.AllocatorInstance.Data;
            }
            pFVar10 = (FName *)::FString::Replace((FString *)local_108,(FString *)local_78,_Str,
                                                  pwVar16,IgnoreCase);
            if ((FName *)local_108 != pFVar10) {
              if ((FName)local_108 != (FName)0x0) {
                FMemory::Free((void *)local_108);
              }
              local_108 = *(undefined1 (*) [8])pFVar10;
              pFVar10->ComparisonIndex = 0;
              pFVar10->Number = 0;
              local_100 = pFVar10[1];
              pFVar10[1].ComparisonIndex = 0;
              pFVar10[1].Number = 0;
            }
            if ((FName)local_78 != (FName)0x0) {
              FMemory::Free((void *)local_78);
            }
            if ((FName)local_c8.DataPtr != (FName)0x0) {
              FMemory::Free(local_c8.DataPtr);
            }
          }
          if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_d8.Data.AllocatorInstance.Data);
          }
        }
        if (local_f0.StatData.Pad != (uchar  [8])0x0) {
          FMemory::Free((void *)local_f0.StatData.Pad);
        }
        if (local_f8 != (FName)0x0) {
          FMemory::Free((void *)local_f8);
        }
        __return_storage_ptr__ = (FString *)local_e0;
        if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a8.Data.AllocatorInstance.Data);
          __return_storage_ptr__ = (FString *)local_e0;
        }
        goto LAB_148b816cb;
      }
      (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)local_108;
      (__return_storage_ptr__->Data).ArrayNum = local_100.ComparisonIndex.Value;
      uVar20 = local_100.Number;
      local_100.ComparisonIndex.Value = 0;
      local_100.Number = 0;
      local_108._0_4_ = 0;
      local_108._4_4_ = 0;
      (__return_storage_ptr__->Data).ArrayMax = uVar20;
      if (local_f0.StatData.Pad != (uchar  [8])0x0) {
        FMemory::Free((void *)local_f0.StatData.Pad);
      }
      if ((FName)pwVar16 != (FName)0x0) {
        FMemory::Free(pwVar16);
      }
      if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.Data.AllocatorInstance.Data);
      }
    }
    else {
      iVar8 = (this->InjectedSourceDirectory).Data.ArrayNum;
      iVar19 = iVar8 + -1;
      if (iVar8 == 0) {
        iVar19 = 0;
        pwVar16 = L"";
      }
      else {
        pwVar16 = (wchar_t *)(this->InjectedSourceDirectory).Data.AllocatorInstance.Data;
      }
      bVar6 = ::FString::StartsWith((FString *)local_108,pwVar16,iVar19,IgnoreCase);
      if (bVar6) {
        iVar8 = (this->InjectedSourceDirectory).Data.ArrayNum;
        iVar19 = iVar8 + -1;
        if (iVar8 == 0) {
          iVar19 = 0;
        }
        ::FString::RightChop((FString *)local_108,(FString *)&local_f0,iVar19);
        ::FString::ConcatFF((FString *)local_78,&this->InjectedTargetDirectory,(FString *)&local_f0)
        ;
        if (local_f0.StatData.Pad != (uchar  [8])0x0) {
          FMemory::Free((void *)local_f0.StatData.Pad);
        }
        if (5 < (byte)LogInit._0_1_) {
          UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogInit);
        }
        (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)local_78;
        (__return_storage_ptr__->Data).ArrayNum = local_70.ComparisonIndex.Value;
        (__return_storage_ptr__->Data).ArrayMax = local_70.Number;
        local_70.ComparisonIndex.Value = 0;
        local_70.Number = 0;
        local_78._0_4_ = 0;
        local_78._4_4_ = 0;
        if ((FName)local_108 != (FName)0x0) {
          FMemory::Free((void *)local_108);
        }
        if (bVar5) {
          FGenericPlatformMisc::EndNamedEvent();
        }
        if (bVar3) {
          FCpuProfilerTrace::OutputEndEvent();
        }
        if (!bVar4) {
          return __return_storage_ptr__;
        }
        if (FVar18 == (FName)0x0) {
          return __return_storage_ptr__;
        }
        if (FThreadStats::bPrimaryDisableForever != false) {
          return __return_storage_ptr__;
        }
        if (FThreadStats::TlsSlot == 0xffffffff) {
          return __return_storage_ptr__;
        }
        this_00 = TlsGetValue(FThreadStats::TlsSlot);
        if (this_00 == (FThreadStats *)0x0) {
          pFVar12 = FThreadStatsPool::Get();
          this_00 = FThreadStatsPool::GetFromPool(pFVar12);
        }
        if (this_00->ScopeCount <= this_00->bWaitForExplicitFlush) {
          return __return_storage_ptr__;
        }
        local_f0.NameAndInfo.Number = FVar18.Number & 0xffff6fff | 0x6000;
        local_f0.NameAndInfo.Index.Value = FVar18.ComparisonIndex.Value.Value;
        QueryPerformanceCounter(&local_e0);
        local_f0.StatData.Pad = (uchar  [8])(local_e0.QuadPart & 0xffffffff);
        FThreadStats::AddStatMessage(this_00,&local_f0);
        piVar1 = &this_00->ScopeCount;
        *piVar1 = *piVar1 + -1;
        iVar19 = *piVar1;
        goto joined_r0x000148b81796;
      }
      ::FString::FString(__return_storage_ptr__,param_1);
    }
    if ((FName)local_108 != (FName)0x0) {
      FMemory::Free((void *)local_108);
    }
  }
  else {
LAB_148b816cb:
    *(undefined1 (*) [8])__return_storage_ptr__ = local_108;
    (((FName *)((longlong)__return_storage_ptr__ + 8))->ComparisonIndex).Value =
         local_100.ComparisonIndex.Value;
    *(uint *)((longlong)__return_storage_ptr__ + 0xc) = local_100.Number;
    local_100.ComparisonIndex.Value = 0;
    local_100.Number = 0;
    local_108._0_4_ = 0;
    local_108._4_4_ = 0;
  }
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (!bVar4) {
    return (FString *)(LONGLONG)__return_storage_ptr__;
  }
  if (FVar18 == (FName)0x0) {
    return (FString *)(LONGLONG)__return_storage_ptr__;
  }
  if (FThreadStats::bPrimaryDisableForever != false) {
    return (FString *)(LONGLONG)__return_storage_ptr__;
  }
  if (FThreadStats::TlsSlot == 0xffffffff) {
    return (FString *)(LONGLONG)__return_storage_ptr__;
  }
  this_00 = TlsGetValue(FThreadStats::TlsSlot);
  if (this_00 == (FThreadStats *)0x0) {
    pFVar12 = FThreadStatsPool::Get();
    this_00 = FThreadStatsPool::GetFromPool(pFVar12);
  }
  if (this_00->ScopeCount <= this_00->bWaitForExplicitFlush) {
    return (FString *)(LONGLONG)__return_storage_ptr__;
  }
  local_f0.NameAndInfo.Number = FVar18.Number & 0xffff6fff | 0x6000;
  local_f0.NameAndInfo.Index.Value = FVar18.ComparisonIndex.Value.Value;
  QueryPerformanceCounter(&local_e0);
  local_f0.StatData.Pad = (uchar  [8])(local_e0.QuadPart & 0xffffffff);
  FThreadStats::AddStatMessage(this_00,&local_f0);
  piVar1 = &this_00->ScopeCount;
  *piVar1 = *piVar1 + -1;
  iVar19 = *piVar1;
joined_r0x000148b81796:
  if (iVar19 == 0) {
    FThreadStats::Flush(this_00,false,false);
  }
  else if (FThreadStats::bIsRawStatsActive != false) {
    FThreadStats::FlushRawStats(this_00,false,false);
  }
  return (FString *)((LARGE_INTEGER)__return_storage_ptr__).QuadPart;
}

// CopyFile @ 148b81890

bool __thiscall
FSandboxPlatformFile::CopyFile
          (FSandboxPlatformFile *this,wchar_t *param_1,wchar_t *param_2,EPlatformFileRead param_3,
          EPlatformFileWrite param_4)

{
  IPlatformFile *pIVar1;
  code *pcVar2;
  char cVar3;
  undefined1 uVar4;
  FString *pFVar5;
  wchar_t *pwVar6;
  wchar_t *pwVar7;
  FString local_48;
  FString local_38;
  
  pIVar1 = this->LowerLevel;
  pcVar2 = *(code **)((longlong)*pIVar1 + 0x78);
  pFVar5 = ConvertToSandboxPath(this,&local_48,param_2);
  pwVar6 = L"";
  if ((pFVar5->Data).ArrayNum == 0) {
    pwVar7 = L"";
  }
  else {
    pwVar7 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
  }
  cVar3 = (*pcVar2)(pIVar1,pwVar7);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  pIVar1 = this->LowerLevel;
  if (cVar3 == '\0') {
    pcVar2 = *(code **)((longlong)*pIVar1 + 0x208);
    pFVar5 = ConvertToSandboxPath(this,&local_38,param_1);
    if ((pFVar5->Data).ArrayNum != 0) {
      pwVar6 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
    }
    uVar4 = (*pcVar2)(pIVar1,pwVar6,param_2,param_3,param_4);
  }
  else {
    pcVar2 = *(code **)((longlong)*pIVar1 + 0x208);
    pFVar5 = ConvertToSandboxPath(this,&local_38,param_2);
    if ((pFVar5->Data).ArrayNum == 0) {
      pwVar7 = L"";
    }
    else {
      pwVar7 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
    }
    pFVar5 = ConvertToSandboxPath(this,&local_48,param_1);
    if ((pFVar5->Data).ArrayNum != 0) {
      pwVar6 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
    }
    uVar4 = (*pcVar2)(pIVar1,pwVar6,pwVar7,param_3,param_4);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return (bool)uVar4;
}

// Create @ 148b81a00

TUniquePtr<FSandboxPlatformFile,TDefaultDelete<FSandboxPlatformFile>_> __cdecl
FSandboxPlatformFile::Create(bool param_1)

{
  IPlatformFile *this;
  undefined7 in_register_00000009;
  FSandboxPlatformFile *pFVar1;
  undefined1 in_DL;
  
  pFVar1 = (FSandboxPlatformFile *)CONCAT71(in_register_00000009,param_1);
  this = ::operator_new(0xe0);
  if (this != (IPlatformFile *)0x0) {
    IPlatformFile::IPlatformFile(this);
    *(undefined1 *)(this + 0x12) = in_DL;
    *this = (IPlatformFile)&___7FSandboxPlatformFile__6B_;
    this[1] = (IPlatformFile)0x0;
    this[2] = (IPlatformFile)0x0;
    this[3] = (IPlatformFile)0x0;
    this[4] = (IPlatformFile)0x0;
    this[5] = (IPlatformFile)0x0;
    this[6] = (IPlatformFile)0x0;
    this[7] = (IPlatformFile)0x0;
    this[8] = (IPlatformFile)0x0;
    this[9] = (IPlatformFile)0x0;
    this[10] = (IPlatformFile)0x0;
    this[0xb] = (IPlatformFile)0x0;
    this[0xc] = (IPlatformFile)0x0;
    this[0xd] = (IPlatformFile)0x0;
    this[0xe] = (IPlatformFile)0x0;
    this[0xf] = (IPlatformFile)0x0;
    this[0x10] = (IPlatformFile)0x0;
    this[0x11] = (IPlatformFile)0x0;
    this[0x13] = (IPlatformFile)0x0;
    this[0x14] = (IPlatformFile)0x0;
    this[0x15] = (IPlatformFile)0x0;
    this[0x16] = (IPlatformFile)0x0;
    this[0x17] = (IPlatformFile)0x0;
    this[0x18] = (IPlatformFile)0x0;
    this[0x19] = (IPlatformFile)0x0;
    this[0x1a] = (IPlatformFile)0x0;
    *(undefined1 *)(this + 0x1b) = 0;
    this[0x12].field_0x1 = 1;
    pFVar1->_padding_ = (longlong)this;
    return (TUniquePtr<FSandboxPlatformFile,TDefaultDelete<FSandboxPlatformFile>_>)pFVar1;
  }
  pFVar1->_padding_ = 0;
  return (TUniquePtr<FSandboxPlatformFile,TDefaultDelete<FSandboxPlatformFile>_>)pFVar1;
}

// CreateDirectory @ 148b81b10

bool __thiscall FSandboxPlatformFile::CreateDirectory(FSandboxPlatformFile *this,wchar_t *param_1)

{
  IPlatformFile *pIVar1;
  code *pcVar2;
  undefined1 uVar3;
  FString *pFVar4;
  wchar_t *pwVar5;
  FString local_18;
  
  pIVar1 = this->LowerLevel;
  pcVar2 = *(code **)((longlong)*pIVar1 + 0x120);
  pFVar4 = ConvertToSandboxPath(this,&local_18,param_1);
  if ((pFVar4->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
  uVar3 = (*pcVar2)(pIVar1,pwVar5);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return (bool)uVar3;
}

// CreateDirectoryTree @ 148b81b80

bool __thiscall
FSandboxPlatformFile::CreateDirectoryTree(FSandboxPlatformFile *this,wchar_t *param_1)

{
  IPlatformFile *pIVar1;
  code *pcVar2;
  undefined1 uVar3;
  FString *pFVar4;
  wchar_t *pwVar5;
  FString local_18;
  
  pIVar1 = this->LowerLevel;
  pcVar2 = *(code **)((longlong)*pIVar1 + 0x200);
  pFVar4 = ConvertToSandboxPath(this,&local_18,param_1);
  if ((pFVar4->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
  uVar3 = (*pcVar2)(pIVar1,pwVar5);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return (bool)uVar3;
}

// DeleteDirectory @ 148b81bf0

bool __thiscall
FSandboxPlatformFile::DeleteDirectory(FSandboxPlatformFile *this,wchar_t *param_1,bool param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  char cVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> *pTVar8;
  ForAnyElementType FVar9;
  uint uVar10;
  ulonglong uVar11;
  int iVar12;
  ulonglong uVar13;
  bool bVar14;
  TArray<FString,TSizedDefaultAllocator<32>_> local_98;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_88;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_78;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  
  if (!param_2) {
    cVar4 = (**(code **)((longlong)*this->LowerLevel + 0x128))();
    if ((cVar4 == '\0') &&
       (cVar4 = (**(code **)((longlong)*this->LowerLevel + 0x118))(this->LowerLevel,param_1),
       cVar4 != '\0')) {
      return false;
    }
    return true;
  }
  bVar2 = true;
  pTVar8 = &::FString::FString(&local_58,param_1)->Data;
  TArray<wchar_t,TSizedDefaultAllocator<32>_>::TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
            (&local_78,pTVar8,3 - (uint)(pTVar8->ArrayNum != 0));
  ::FString::PathAppend((FString *)&local_78,L"*",1);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  uVar11 = 0;
  FVar9.Data = (FScriptContainerElement *)L"";
  if (local_78.ArrayNum != 0) {
    FVar9.Data = local_78.AllocatorInstance.Data;
  }
  local_98.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.ArrayNum = 0;
  local_98.ArrayMax = 0;
  FindFiles(this,&local_98,(wchar_t *)FVar9.Data,true,false);
  uVar13 = uVar11;
  bVar14 = bVar2;
  if (0 < local_98.ArrayNum) {
    do {
      uVar10 = (uint)uVar11;
      uVar6 = 0;
      if ((int)uVar10 < local_98.ArrayNum) {
        uVar6 = ~uVar10 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      FVar9.Data = local_98.AllocatorInstance.Data;
      pTVar8 = &::FString::FString(&local_48,param_1)->Data;
      iVar7 = *(int *)(FVar9.Data + uVar13 + 8);
      iVar12 = iVar7 + -1;
      if (iVar7 == 0) {
        iVar12 = 0;
      }
      if ((pTVar8->ArrayNum != 0) || (iVar7 = 2, iVar12 == -1)) {
        iVar7 = 1;
      }
      TArray<wchar_t,TSizedDefaultAllocator<32>_>::
      TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>(&local_88,pTVar8,iVar12 + iVar7);
      ::FString::PathAppend((FString *)&local_88,*(wchar_t **)(FVar9.Data + uVar13),iVar12);
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      FVar9.Data = (FScriptContainerElement *)L"";
      if (local_88.ArrayNum != 0) {
        FVar9.Data = local_88.AllocatorInstance.Data;
      }
      cVar4 = (**(code **)((longlong)*this->LowerLevel + 0x78))(this->LowerLevel,FVar9.Data);
      if (cVar4 == '\0') {
        bVar2 = false;
      }
      else {
        FVar9.Data = (FScriptContainerElement *)L"";
        if (local_88.ArrayNum != 0) {
          FVar9.Data = local_88.AllocatorInstance.Data;
        }
        (**(code **)((longlong)*this->LowerLevel + 0xa8))(this->LowerLevel,FVar9.Data);
        FVar9.Data = (FScriptContainerElement *)L"";
        if (local_88.ArrayNum != 0) {
          FVar9.Data = local_88.AllocatorInstance.Data;
        }
        cVar4 = (**(code **)((longlong)*this->LowerLevel + 0x88))(this->LowerLevel,FVar9.Data);
        bVar2 = false;
        if (cVar4 != '\0') {
          bVar2 = bVar14;
        }
      }
      if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.AllocatorInstance.Data);
      }
      uVar11 = (ulonglong)(uVar10 + 1);
      uVar13 = uVar13 + 0x10;
      bVar14 = bVar2;
    } while ((int)(uVar10 + 1) < local_98.ArrayNum);
  }
  uVar11 = 0;
  DestructItems<FString,int>((FString *)local_98.AllocatorInstance.Data,local_98.ArrayNum);
  bVar14 = local_98.ArrayMax != 0;
  local_98._8_8_ = (ulonglong)(uint)local_98.ArrayMax << 0x20;
  if (bVar14) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&local_98.AllocatorInstance,0,&local_98.ArrayMax);
  }
  FVar9.Data = (FScriptContainerElement *)L"";
  if (local_78.ArrayNum != 0) {
    FVar9.Data = local_78.AllocatorInstance.Data;
  }
  FindFiles(this,&local_98,(wchar_t *)FVar9.Data,false,true);
  uVar13 = uVar11;
  bVar14 = bVar2;
  if (0 < local_98.ArrayNum) {
    do {
      uVar10 = (uint)uVar11;
      uVar6 = 0;
      if ((int)uVar10 < local_98.ArrayNum) {
        uVar6 = ~uVar10 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      FVar9.Data = local_98.AllocatorInstance.Data;
      pTVar8 = &::FString::FString(&local_38,param_1)->Data;
      iVar7 = *(int *)(FVar9.Data + uVar13 + 8);
      iVar12 = iVar7 + -1;
      if (iVar7 == 0) {
        iVar12 = 0;
      }
      if ((pTVar8->ArrayNum != 0) || (iVar7 = 2, iVar12 == -1)) {
        iVar7 = 1;
      }
      TArray<wchar_t,TSizedDefaultAllocator<32>_>::
      TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>(&local_68,pTVar8,iVar12 + iVar7);
      ::FString::PathAppend((FString *)&local_68,*(wchar_t **)(FVar9.Data + uVar13),iVar12);
      FVar9.Data = (FScriptContainerElement *)L"";
      if (local_68.ArrayNum != 0) {
        FVar9.Data = local_68.AllocatorInstance.Data;
      }
      bVar5 = DeleteDirectory(this,(wchar_t *)FVar9.Data,true);
      if (local_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.AllocatorInstance.Data);
      }
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      bVar2 = false;
      if (bVar5) {
        bVar2 = bVar14;
      }
      uVar11 = (ulonglong)(uVar10 + 1);
      uVar13 = uVar13 + 0x10;
      bVar14 = bVar2;
    } while ((int)(uVar10 + 1) < local_98.ArrayNum);
  }
  bVar14 = DeleteDirectory(this,param_1,false);
  if ((bVar14) && (bVar2)) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  DestructItems<FString,int>((FString *)local_98.AllocatorInstance.Data,local_98.ArrayNum);
  if (local_98.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.AllocatorInstance.Data);
  }
  if (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.AllocatorInstance.Data);
  }
  return bVar2;
}

// DeleteDirectory @ 148b82040

bool __thiscall FSandboxPlatformFile::DeleteDirectory(FSandboxPlatformFile *this,wchar_t *param_1)

{
  IPlatformFile *pIVar1;
  code *pcVar2;
  undefined1 uVar3;
  FString *pFVar4;
  wchar_t *pwVar5;
  FString local_18;
  
  pIVar1 = this->LowerLevel;
  pcVar2 = *(code **)((longlong)*pIVar1 + 0x128);
  pFVar4 = ConvertToSandboxPath(this,&local_18,param_1);
  if ((pFVar4->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
  uVar3 = (*pcVar2)(pIVar1,pwVar5);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return (bool)uVar3;
}

// DeleteDirectoryRecursively @ 148b820b0

bool __thiscall
FSandboxPlatformFile::DeleteDirectoryRecursively(FSandboxPlatformFile *this,wchar_t *param_1)

{
  IPlatformFile *pIVar1;
  code *pcVar2;
  undefined1 uVar3;
  FString *pFVar4;
  wchar_t *pwVar5;
  FString local_18;
  
  pIVar1 = this->LowerLevel;
  pcVar2 = *(code **)((longlong)*pIVar1 + 0x1f8);
  pFVar4 = ConvertToSandboxPath(this,&local_18,param_1);
  if ((pFVar4->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
  uVar3 = (*pcVar2)(pIVar1,pwVar5);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return (bool)uVar3;
}

// DeleteFile @ 148b82120

bool __thiscall FSandboxPlatformFile::DeleteFile(FSandboxPlatformFile *this,wchar_t *param_1)

{
  IPlatformFile *pIVar1;
  code *pcVar2;
  char cVar3;
  undefined1 uVar4;
  FString *pFVar5;
  wchar_t *pwVar6;
  ForAnyElementType FVar7;
  wchar_t *pwVar8;
  FString local_28;
  FString local_18;
  
  uVar4 = 1;
  pFVar5 = ConvertToSandboxPath(this,&local_18,param_1);
  pwVar8 = L"";
  if ((pFVar5->Data).ArrayNum == 0) {
    pwVar6 = L"";
  }
  else {
    pwVar6 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
  }
  ::FString::FString(&local_28,pwVar6);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  FVar7.Data = (FScriptContainerElement *)L"";
  if (local_28.Data.ArrayNum != 0) {
    FVar7.Data = local_28.Data.AllocatorInstance.Data;
  }
  cVar3 = (**(code **)((longlong)*this->LowerLevel + 0x78))(this->LowerLevel,FVar7.Data);
  if (cVar3 != '\0') {
    pIVar1 = this->LowerLevel;
    pcVar2 = *(code **)((longlong)*pIVar1 + 0x88);
    pFVar5 = ConvertToSandboxPath(this,&local_18,param_1);
    if ((pFVar5->Data).ArrayNum != 0) {
      pwVar8 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
    }
    uVar4 = (*pcVar2)(pIVar1,pwVar8);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return (bool)uVar4;
}

// DirectoryExists @ 148b82210

bool __thiscall FSandboxPlatformFile::DirectoryExists(FSandboxPlatformFile *this,wchar_t *param_1)

{
  IPlatformFile *pIVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  FString *pFVar5;
  wchar_t *pwVar6;
  FString local_18;
  
  pIVar1 = this->LowerLevel;
  pcVar2 = *(code **)((longlong)*pIVar1 + 0x118);
  pFVar5 = ConvertToSandboxPath(this,&local_18,param_1);
  if ((pFVar5->Data).ArrayNum == 0) {
    pwVar6 = L"";
  }
  else {
    pwVar6 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
  }
  cVar3 = (*pcVar2)(pIVar1,pwVar6);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if ((cVar3 == '\0') && (bVar4 = OkForInnerAccess(this,param_1,true), bVar4)) {
    cVar3 = (**(code **)((longlong)*this->LowerLevel + 0x118))(this->LowerLevel,param_1);
  }
  return (bool)cVar3;
}

// FileExists @ 148b822c0

bool __thiscall FSandboxPlatformFile::FileExists(FSandboxPlatformFile *this,wchar_t *param_1)

{
  IPlatformFile *pIVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  FString *pFVar5;
  wchar_t *pwVar6;
  FString local_18;
  
  pIVar1 = this->LowerLevel;
  pcVar2 = *(code **)((longlong)*pIVar1 + 0x78);
  pFVar5 = ConvertToSandboxPath(this,&local_18,param_1);
  if ((pFVar5->Data).ArrayNum == 0) {
    pwVar6 = L"";
  }
  else {
    pwVar6 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
  }
  cVar3 = (*pcVar2)(pIVar1,pwVar6);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if ((cVar3 == '\0') && (bVar4 = OkForInnerAccess(this,param_1,false), bVar4)) {
    cVar3 = (**(code **)((longlong)*this->LowerLevel + 0x78))(this->LowerLevel,param_1);
  }
  return (bool)cVar3;
}

// FileSize @ 148b82360

long64 __thiscall FSandboxPlatformFile::FileSize(FSandboxPlatformFile *this,wchar_t *param_1)

{
  IPlatformFile *pIVar1;
  code *pcVar2;
  bool bVar3;
  FString *pFVar4;
  long64 lVar5;
  wchar_t *pwVar6;
  FString local_18;
  
  pIVar1 = this->LowerLevel;
  pcVar2 = *(code **)((longlong)*pIVar1 + 0x80);
  pFVar4 = ConvertToSandboxPath(this,&local_18,param_1);
  if ((pFVar4->Data).ArrayNum == 0) {
    pwVar6 = L"";
  }
  else {
    pwVar6 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
  lVar5 = (*pcVar2)(pIVar1,pwVar6);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if ((lVar5 < 0) && (bVar3 = OkForInnerAccess(this,param_1,false), bVar3)) {
    lVar5 = (**(code **)((longlong)*this->LowerLevel + 0x80))(this->LowerLevel,param_1);
  }
  return lVar5;
}

// FindFiles @ 148b82410

void __thiscall
FSandboxPlatformFile::FindFiles
          (FSandboxPlatformFile *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          wchar_t *param_2,bool param_3,bool param_4)

{
  IPlatformFile *pIVar1;
  code *pcVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  FString local_58;
  FString local_48;
  undefined **local_38;
  undefined1 local_30;
  TArray<FString,TSizedDefaultAllocator<32>_> *local_28;
  FString local_20;
  undefined1 local_10;
  bool local_f;
  
  ::FString::FString(&local_58,param_2);
  pFVar3 = FPaths::GetCleanFilename(&local_48,&local_58);
  local_30 = 0;
  local_38 = &`FSandboxPlatformFile::FindFiles'::`2'::FFileMatch::_vftable_;
  local_28 = param_1;
  ::FString::FString(&local_20,pFVar3);
  local_f = param_4;
  local_10 = param_3;
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  pIVar1 = this->LowerLevel;
  pcVar2 = *(code **)((longlong)*pIVar1 + 0x140);
  ::FString::FString(&local_58,param_2);
  pFVar3 = FPaths::GetPath(&local_48,&local_58);
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar4 = L"";
  }
  else {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  (*pcVar2)(pIVar1,pwVar4,&local_38);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (local_20.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_20.Data.AllocatorInstance.Data);
  }
  return;
}

// GetAbsoluteGameDirectory @ 148b82530

/* WARNING: Enum "Type": Some values do not have unique names */

FString * __thiscall FSandboxPlatformFile::GetAbsoluteGameDirectory(FSandboxPlatformFile *this)

{
  FString *pFVar1;
  FScriptContainerElement *pFVar2;
  FString *pFVar3;
  FString *pFVar4;
  FString local_18;
  
  pFVar1 = &this->AbsoluteGameDirectory;
  if ((this->AbsoluteGameDirectory).Data.ArrayNum < 2) {
    pFVar3 = FPaths::ProjectDir(&local_18);
    if (pFVar1 != pFVar3) {
      pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      (pFVar1->Data).AllocatorInstance.Data = (pFVar3->Data).AllocatorInstance.Data;
      (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (this->AbsoluteGameDirectory).Data.ArrayNum = (pFVar3->Data).ArrayNum;
      (this->AbsoluteGameDirectory).Data.ArrayMax = (pFVar3->Data).ArrayMax;
      (pFVar3->Data).ArrayNum = 0;
      (pFVar3->Data).ArrayMax = 0;
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if ((this->AbsoluteGameDirectory).Data.ArrayNum < 2) {
      UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&SandboxFile);
    }
    pFVar3 = FPaths::ConvertRelativePathToFull(&local_18,pFVar1);
    if (pFVar1 != pFVar3) {
      pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      (pFVar1->Data).AllocatorInstance.Data = (pFVar3->Data).AllocatorInstance.Data;
      (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (this->AbsoluteGameDirectory).Data.ArrayNum = (pFVar3->Data).ArrayNum;
      (this->AbsoluteGameDirectory).Data.ArrayMax = (pFVar3->Data).ArrayMax;
      (pFVar3->Data).ArrayNum = 0;
      (pFVar3->Data).ArrayMax = 0;
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    pFVar3 = FPaths::GetPath(&local_18,&this->AbsoluteGameDirectory);
    pFVar4 = &this->AbsoluteGameDirectory;
    if (pFVar4 != pFVar3) {
      pFVar2 = (pFVar4->Data).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      (pFVar4->Data).AllocatorInstance.Data = (pFVar3->Data).AllocatorInstance.Data;
      (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (this->AbsoluteGameDirectory).Data.ArrayNum = (pFVar3->Data).ArrayNum;
      (this->AbsoluteGameDirectory).Data.ArrayMax = (pFVar3->Data).ArrayMax;
      (pFVar3->Data).ArrayNum = 0;
      (pFVar3->Data).ArrayMax = 0;
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return pFVar1;
}

// GetAbsolutePathToGameDirectory @ 148b82670

FString * __thiscall
FSandboxPlatformFile::GetAbsolutePathToGameDirectory(FSandboxPlatformFile *this)

{
  FString *pFVar1;
  FScriptContainerElement *pFVar2;
  FString *pFVar3;
  FString local_18;
  
  pFVar1 = &this->AbsolutePathToGameDirectory;
  if ((this->AbsolutePathToGameDirectory).Data.ArrayNum < 2) {
    pFVar3 = GetAbsoluteGameDirectory(this);
    pFVar3 = FPaths::GetPath(&local_18,pFVar3);
    if (pFVar1 != pFVar3) {
      pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      (pFVar1->Data).AllocatorInstance.Data = (pFVar3->Data).AllocatorInstance.Data;
      (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (this->AbsolutePathToGameDirectory).Data.ArrayNum = (pFVar3->Data).ArrayNum;
      (this->AbsolutePathToGameDirectory).Data.ArrayMax = (pFVar3->Data).ArrayMax;
      (pFVar3->Data).ArrayNum = 0;
      (pFVar3->Data).ArrayMax = 0;
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return pFVar1;
}

// GetAbsoluteRootDirectory @ 148b826f0

FString * __thiscall FSandboxPlatformFile::GetAbsoluteRootDirectory(FSandboxPlatformFile *this)

{
  return &this->AbsoluteRootDirectory;
}

// GetAccessTimeStamp @ 148b82700

FDateTime __thiscall
FSandboxPlatformFile::GetAccessTimeStamp(FSandboxPlatformFile *this,wchar_t *param_1)

{
  char cVar1;
  bool bVar2;
  FString *pFVar3;
  undefined8 *puVar4;
  wchar_t *pwVar5;
  ForAnyElementType FVar6;
  wchar_t *in_R8;
  undefined1 local_res8 [8];
  FString local_28;
  FString local_18;
  
  param_1[0] = L'\0';
  param_1[1] = L'\0';
  param_1[2] = L'\0';
  param_1[3] = L'\0';
  pFVar3 = ConvertToSandboxPath(this,&local_18,in_R8);
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  ::FString::FString(&local_28,pwVar5);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_28.Data.ArrayNum != 0) {
    FVar6.Data = local_28.Data.AllocatorInstance.Data;
  }
  cVar1 = (**(code **)((longlong)*this->LowerLevel + 0x78))(this->LowerLevel,FVar6.Data);
  if ((cVar1 != '\0') || (bVar2 = OkForInnerAccess(this,in_R8,false), bVar2)) {
    puVar4 = (undefined8 *)
             (**(code **)((longlong)*this->LowerLevel + 0xc0))(this->LowerLevel,local_res8);
    *(undefined8 *)param_1 = *puVar4;
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return (FDateTime)(long64)param_1;
}

// GetFilenameOnDisk @ 148b829e0

FString * __thiscall
FSandboxPlatformFile::GetFilenameOnDisk
          (FSandboxPlatformFile *this,FString *__return_storage_ptr__,wchar_t *param_1)

{
  FScriptContainerElement *pFVar1;
  char cVar2;
  bool bVar3;
  FString *pFVar4;
  wchar_t *pwVar5;
  ForAnyElementType FVar6;
  wchar_t *pwVar7;
  FString local_28;
  FString local_18;
  
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  pFVar4 = ConvertToSandboxPath(this,&local_18,param_1);
  pwVar7 = L"";
  if ((pFVar4->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
  ::FString::FString(&local_28,pwVar5);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_28.Data.ArrayNum != 0) {
    FVar6.Data = local_28.Data.AllocatorInstance.Data;
  }
  cVar2 = (**(code **)((longlong)*this->LowerLevel + 0x78))(this->LowerLevel,FVar6.Data);
  if (cVar2 == '\0') {
    bVar3 = OkForInnerAccess(this,param_1,false);
    pwVar7 = param_1;
    if (!bVar3) goto LAB_148b82ad5;
  }
  else if (local_28.Data.ArrayNum != 0) {
    pwVar7 = (wchar_t *)local_28.Data.AllocatorInstance.Data;
  }
  pFVar4 = (FString *)
           (**(code **)((longlong)*this->LowerLevel + 200))(this->LowerLevel,&local_18,pwVar7);
  if (__return_storage_ptr__ != pFVar4) {
    pFVar1 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (pFVar4->Data).AllocatorInstance.Data;
    (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = (pFVar4->Data).ArrayNum;
    (__return_storage_ptr__->Data).ArrayMax = (pFVar4->Data).ArrayMax;
    (pFVar4->Data).ArrayNum = 0;
    (pFVar4->Data).ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
LAB_148b82ad5:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetGameSandboxDirectoryName @ 148b82b10

FString * __thiscall FSandboxPlatformFile::GetGameSandboxDirectoryName(FSandboxPlatformFile *this)

{
  FString *pFVar1;
  FScriptContainerElement *pFVar2;
  FString local_18;
  
  pFVar1 = &this->GameSandboxDirectoryName;
  if ((this->GameSandboxDirectoryName).Data.ArrayNum < 2) {
    ::FString::PrintfImpl(&local_18,L"%s/");
    if (pFVar1 != &local_18) {
      pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      (pFVar1->Data).AllocatorInstance.Data = local_18.Data.AllocatorInstance.Data;
      (this->GameSandboxDirectoryName).Data.ArrayNum = local_18.Data.ArrayNum;
      (this->GameSandboxDirectoryName).Data.ArrayMax = local_18.Data.ArrayMax;
      local_18.Data.ArrayNum = 0;
      local_18.Data.ArrayMax = 0;
      local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return pFVar1;
}

// GetLowerLevel @ 148b82ba0

IPlatformFile * __thiscall FSandboxPlatformFile::GetLowerLevel(FSandboxPlatformFile *this)

{
  return this->LowerLevel;
}

// GetName @ 148b82bb0

wchar_t * __thiscall FSandboxPlatformFile::GetName(FSandboxPlatformFile *this)

{
  return L"SandboxFile";
}

// GetSandboxDirectory @ 148b82bc0

FString * __thiscall FSandboxPlatformFile::GetSandboxDirectory(FSandboxPlatformFile *this)

{
  return &this->SandboxDirectory;
}

// GetStatData @ 148b82bd0

FFileStatData * __thiscall
FSandboxPlatformFile::GetStatData
          (FSandboxPlatformFile *this,FFileStatData *__return_storage_ptr__,wchar_t *param_1)

{
  IPlatformFile *pIVar1;
  code *pcVar2;
  long64 lVar3;
  bool bVar4;
  long64 *plVar5;
  FString local_48;
  undefined1 local_38 [48];
  
  pIVar1 = this->LowerLevel;
  pcVar2 = *(code **)((longlong)*pIVar1 + 0x130);
  ConvertToSandboxPath(this,&local_48,param_1);
  (*pcVar2)(pIVar1,__return_storage_ptr__);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (((!__return_storage_ptr__->bIsValid) && (bVar4 = OkForInnerAccess(this,param_1,false), bVar4))
     && (bVar4 = OkForInnerAccess(this,param_1,true), bVar4)) {
    plVar5 = (long64 *)
             (**(code **)((longlong)*this->LowerLevel + 0x130))(this->LowerLevel,local_38,param_1);
    lVar3 = plVar5[1];
    (__return_storage_ptr__->CreationTime).Ticks = *plVar5;
    (__return_storage_ptr__->AccessTime).Ticks = lVar3;
    lVar3 = plVar5[3];
    (__return_storage_ptr__->ModificationTime).Ticks = plVar5[2];
    __return_storage_ptr__->FileSize = lVar3;
    *(long64 *)&__return_storage_ptr__->field_0x20 = plVar5[4];
  }
  return __return_storage_ptr__;
}

// GetTimeStamp @ 148b82cb0

FDateTime __thiscall FSandboxPlatformFile::GetTimeStamp(FSandboxPlatformFile *this,wchar_t *param_1)

{
  longlong lVar1;
  bool bVar2;
  FString *pFVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  wchar_t *pwVar6;
  wchar_t *in_R8;
  undefined1 local_res8 [8];
  FString local_28;
  FString local_18;
  
  param_1[0] = L'\0';
  param_1[1] = L'\0';
  param_1[2] = L'\0';
  param_1[3] = L'\0';
  pFVar3 = ConvertToSandboxPath(this,&local_18,in_R8);
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar6 = L"";
  }
  else {
    pwVar6 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  ::FString::FString(&local_28,pwVar6);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  plVar4 = (longlong *)
           (**(code **)((longlong)*this->LowerLevel + 0xb0))(this->LowerLevel,local_res8);
  lVar1 = *plVar4;
  *(longlong *)param_1 = lVar1;
  if ((lVar1 == 0) && (bVar2 = OkForInnerAccess(this,in_R8,false), bVar2)) {
    puVar5 = (undefined8 *)
             (**(code **)((longlong)*this->LowerLevel + 0xb0))(this->LowerLevel,local_res8);
    *(undefined8 *)param_1 = *puVar5;
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return (FDateTime)(long64)param_1;
}

// Initialize @ 148b82da0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
FSandboxPlatformFile::Initialize(FSandboxPlatformFile *this,IPlatformFile *param_1,wchar_t *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  IPlatformFile *pIVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  FString *pFVar10;
  FString *pFVar11;
  FString *pFVar12;
  wchar_t *pwVar13;
  FGuid *this_00;
  ForAnyElementType FVar14;
  int iVar15;
  int iVar16;
  FString local_168;
  FString local_158;
  FString local_148;
  FString local_138;
  FString local_128;
  FString local_118;
  FString local_108;
  FString local_f8;
  FString local_e8;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  FGuid local_28;
  
  local_168.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_168.Data.ArrayNum = 0;
  local_168.Data.ArrayMax = 0;
  bVar5 = FParse::Value(param_2,L"-InjectionSandbox=",&local_168,true,(wchar_t **)0x0);
  if (bVar5) {
    iVar8 = ::FString::Find(&local_168,L";",1,IgnoreCase,FromStart,-1);
    if ((iVar8 < 1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("DividerLoc > 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SandboxFile\\Private\\IPlatformFileSandboxWrapper.cpp"
                           ,0x4c,
                           L"The format is -InjectionSandbox=<RelativeEngineDir>;<AdditionalDir>"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    pFVar10 = ::FString::Mid(&local_168,&local_b8,0,iVar8);
    pFVar12 = &this->InjectedSourceDirectory;
    if (pFVar12 != pFVar10) {
      pFVar2 = (pFVar12->Data).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      (pFVar12->Data).AllocatorInstance.Data = (pFVar10->Data).AllocatorInstance.Data;
      (pFVar10->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (this->InjectedSourceDirectory).Data.ArrayNum = (pFVar10->Data).ArrayNum;
      (this->InjectedSourceDirectory).Data.ArrayMax = (pFVar10->Data).ArrayMax;
      (pFVar10->Data).ArrayNum = 0;
      (pFVar10->Data).ArrayMax = 0;
    }
    if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.Data.AllocatorInstance.Data);
    }
    ::FString::RightChop(&local_168,&local_158,iVar8 + 1);
    pFVar10 = &this->InjectedTargetDirectory;
    if (pFVar10 != &local_158) {
      pFVar2 = (pFVar10->Data).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      (pFVar10->Data).AllocatorInstance.Data = local_158.Data.AllocatorInstance.Data;
      (this->InjectedTargetDirectory).Data.ArrayNum = local_158.Data.ArrayNum;
      (this->InjectedTargetDirectory).Data.ArrayMax = local_158.Data.ArrayMax;
      local_158.Data.ArrayNum = 0;
      local_158.Data.ArrayMax = 0;
      local_158.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_158.Data.AllocatorInstance.Data);
    }
    pFVar11 = FPaths::GetPath(&local_a8,pFVar12);
    pFVar12 = &this->InjectedSourceDirectoryParent;
    if (pFVar12 != pFVar11) {
      pFVar2 = (pFVar12->Data).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      (pFVar12->Data).AllocatorInstance.Data = (pFVar11->Data).AllocatorInstance.Data;
      (pFVar11->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (this->InjectedSourceDirectoryParent).Data.ArrayNum = (pFVar11->Data).ArrayNum;
      (this->InjectedSourceDirectoryParent).Data.ArrayMax = (pFVar11->Data).ArrayMax;
      (pFVar11->Data).ArrayNum = 0;
      (pFVar11->Data).ArrayMax = 0;
    }
    if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
    }
    pFVar11 = FPaths::GetPath(&local_98,pFVar10);
    pFVar12 = &this->InjectedTargetDirectoryParent;
    if (pFVar12 != pFVar11) {
      pFVar2 = (pFVar12->Data).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      (pFVar12->Data).AllocatorInstance.Data = (pFVar11->Data).AllocatorInstance.Data;
      (pFVar11->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (this->InjectedTargetDirectoryParent).Data.ArrayNum = (pFVar11->Data).ArrayNum;
      (this->InjectedTargetDirectoryParent).Data.ArrayMax = (pFVar11->Data).ArrayMax;
      (pFVar11->Data).ArrayNum = 0;
      (pFVar11->Data).ArrayMax = 0;
    }
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
    iVar8 = (this->InjectedTargetDirectory).Data.ArrayNum;
    iVar15 = iVar8 + -1;
    if (iVar8 == 0) {
      iVar15 = 0;
    }
    ::FString::AssignRange(&local_168,(wchar_t *)(pFVar10->Data).AllocatorInstance.Data,iVar15);
  }
  else {
    FParse::Value(param_2,L"-Sandbox=",&local_168,true,(wchar_t **)0x0);
  }
  if ((local_168.Data.ArrayNum < 2) && (this->bEntireEngineWillUseThisSandbox != false)) {
    pFVar12 = GetCookedSandboxDir(&local_88);
    if (&local_168 != pFVar12) {
      if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_168.Data.AllocatorInstance.Data);
      }
      local_168.Data.AllocatorInstance.Data = (pFVar12->Data).AllocatorInstance.Data;
      (pFVar12->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_168.Data.ArrayNum = (pFVar12->Data).ArrayNum;
      local_168.Data.ArrayMax = (pFVar12->Data).ArrayMax;
      (pFVar12->Data).ArrayNum = 0;
      (pFVar12->Data).ArrayMax = 0;
    }
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    if (3 < (byte)LogInit._0_1_) {
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogInit);
    }
    ::FString::FString(&local_108,L"*.uasset");
    TArray<FString,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FString>
              (&this->FileExclusionWildcards,&local_108);
    if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_108.Data.AllocatorInstance.Data);
    }
    ::FString::FString(&local_f8,L"*.umap");
    TArray<FString,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FString>
              (&this->FileExclusionWildcards,&local_f8);
    if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.Data.AllocatorInstance.Data);
    }
  }
  this->LowerLevel = param_1;
  if ((param_1 == (IPlatformFile *)0x0) || (local_168.Data.ArrayNum < 2)) goto LAB_148b835e2;
  pFVar10 = FPaths::GetRelativePathToRoot();
  pFVar12 = &this->RelativeRootDirectory;
  if (pFVar12 != pFVar10) {
    iVar8 = (pFVar10->Data).ArrayNum;
    piVar1 = &(this->RelativeRootDirectory).Data.ArrayMax;
    pFVar2 = (pFVar10->Data).AllocatorInstance.Data;
    iVar15 = *piVar1;
    (this->RelativeRootDirectory).Data.ArrayNum = iVar8;
    if ((iVar8 == 0) && (iVar15 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar8,iVar15,(ForAnyElementType *)pFVar12,iVar8,piVar1);
      if (iVar8 != 0) {
        memcpy((pFVar12->Data).AllocatorInstance.Data,pFVar2,(longlong)iVar8 * 2);
      }
    }
  }
  pFVar10 = FPaths::ConvertRelativePathToFull(&local_78,pFVar12);
  pFVar12 = &this->AbsoluteRootDirectory;
  if (pFVar12 != pFVar10) {
    pFVar2 = (pFVar12->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar12->Data).AllocatorInstance.Data = (pFVar10->Data).AllocatorInstance.Data;
    (pFVar10->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->AbsoluteRootDirectory).Data.ArrayNum = (pFVar10->Data).ArrayNum;
    (this->AbsoluteRootDirectory).Data.ArrayMax = (pFVar10->Data).ArrayMax;
    (pFVar10->Data).ArrayNum = 0;
    (pFVar10->Data).ArrayMax = 0;
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  bVar5 = false;
  FPaths::NormalizeFilename(&local_168);
  iVar8 = ::FString::Find(&local_168,L":",1,CaseSensitive,FromStart,-1);
  iVar15 = 0;
  if (iVar8 != -1) {
    ::FString::Mid(&local_168,&local_e8,0,iVar8 + 1);
    bVar7 = FPaths::IsDrive(&local_e8);
    if (!bVar7) {
      ::FString::RightChop(&local_168,&local_138,iVar8 + 1);
      iVar16 = local_168.Data.ArrayNum + -1;
      if (local_168.Data.ArrayNum == 0) {
        iVar16 = iVar15;
      }
      iVar9 = iVar16;
      if (iVar8 < iVar16) {
        iVar9 = iVar8;
      }
      iVar8 = 0;
      if (0 < iVar9) {
        iVar8 = iVar9;
      }
      ::FString::RemoveAt(&local_168,iVar8,iVar16 - iVar8,No);
      FVar14.Data = (FScriptContainerElement *)L"";
      if (local_138.Data.ArrayNum != 0) {
        FVar14.Data = local_138.Data.AllocatorInstance.Data;
      }
      iVar8 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar14.Data,L"wipe");
      bVar5 = iVar8 == 0;
      if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_138.Data.AllocatorInstance.Data);
      }
    }
    if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e8.Data.AllocatorInstance.Data);
    }
  }
  FVar14.Data = (FScriptContainerElement *)L"";
  if (local_168.Data.ArrayNum != 0) {
    FVar14.Data = local_168.Data.AllocatorInstance.Data;
  }
  iVar8 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar14.Data,L"User");
  if (iVar8 == 0) {
    pFVar12 = &this->SandboxDirectory;
    pwVar13 = FWindowsPlatformProcess::UserDir();
    ::FString::operator=(pFVar12,pwVar13);
    ::FString::AppendChars(pFVar12,L"My Games/",9);
    ::FString::AppendChars(pFVar12,L"UE/",3);
  }
  else {
    FVar14.Data = (FScriptContainerElement *)L"";
    if (local_168.Data.ArrayNum != 0) {
      FVar14.Data = local_168.Data.AllocatorInstance.Data;
    }
    iVar8 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar14.Data,L"Unique");
    if (iVar8 == 0) {
      pFVar12 = FPaths::GetRelativePathToRoot();
      ::operator/(&local_d8,pFVar12,L"");
      this_00 = FGuid::NewGuid(&local_28);
      local_148.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_148.Data.ArrayNum = 0;
      local_148.Data.ArrayMax = 0;
      FGuid::AppendString(this_00,&local_148,Digits);
      FVar14.Data = (FScriptContainerElement *)L"";
      if (local_148.Data.ArrayNum != 0) {
        FVar14.Data = local_148.Data.AllocatorInstance.Data;
      }
      pFVar12 = FPaths::ConvertToSandboxPath(&local_68,&local_d8,(wchar_t *)FVar14.Data);
      ::FString::operator=(&this->SandboxDirectory,pFVar12);
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
      local_c8.Data.AllocatorInstance.Data = local_d8.Data.AllocatorInstance.Data;
      if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_148.Data.AllocatorInstance.Data);
        local_c8.Data.AllocatorInstance.Data = local_d8.Data.AllocatorInstance.Data;
      }
LAB_148b83481:
      if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c8.Data.AllocatorInstance.Data);
      }
    }
    else {
      bVar7 = ::FString::StartsWith(&local_168,L"..",2,IgnoreCase);
      if (!bVar7) {
        iVar8 = ::FString::Find(&local_168,L"/",1,CaseSensitive,FromStart,-1);
        pFVar12 = ::FString::Mid(&local_168,&local_58,0,iVar8);
        bVar7 = FPaths::IsDrive(pFVar12);
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        if (bVar7) {
          iVar8 = local_168.Data.ArrayNum + -1;
          if (local_168.Data.ArrayNum == 0) {
            iVar8 = iVar15;
          }
          ::FString::AssignRange
                    (&this->SandboxDirectory,(wchar_t *)local_168.Data.AllocatorInstance.Data,iVar8)
          ;
          goto LAB_148b834d9;
        }
        pFVar12 = FPaths::GetRelativePathToRoot();
        ::operator/(&local_c8,pFVar12,L"");
        FVar14.Data = (FScriptContainerElement *)L"";
        if (local_168.Data.ArrayNum != 0) {
          FVar14.Data = local_168.Data.AllocatorInstance.Data;
        }
        pFVar12 = FPaths::ConvertToSandboxPath(&local_48,&local_c8,(wchar_t *)FVar14.Data);
        ::FString::operator=(&this->SandboxDirectory,pFVar12);
        if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
        }
        goto LAB_148b83481;
      }
      iVar8 = local_168.Data.ArrayNum + -1;
      if (local_168.Data.ArrayNum == 0) {
        iVar8 = iVar15;
      }
      ::FString::AssignRange
                (&this->SandboxDirectory,(wchar_t *)local_168.Data.AllocatorInstance.Data,iVar8);
    }
    pFVar10 = &this->SandboxDirectory;
    FPaths::MakeStandardFilename(pFVar10);
    pFVar12 = FPaths::ConvertRelativePathToFull(&local_38,pFVar10);
    ::FString::operator=(pFVar10,pFVar12);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
LAB_148b834d9:
  pFVar12 = &this->SandboxDirectory;
  if (bVar5) {
    if ((this->SandboxDirectory).Data.ArrayNum == 0) {
      pwVar13 = L"";
    }
    else {
      pwVar13 = (wchar_t *)(pFVar12->Data).AllocatorInstance.Data;
    }
    DeleteDirectory(this,pwVar13,true);
  }
  bVar5 = ::FString::EndsWith(pFVar12,L"/",1,IgnoreCase);
  if (!bVar5) {
    ::FString::AppendChars(pFVar12,L"/",1);
  }
  if (this->bEntireEngineWillUseThisSandbox != false) {
    iVar8 = (this->InjectedTargetDirectory).Data.ArrayNum;
    iVar16 = iVar8 + -1;
    if (iVar8 == 0) {
      iVar16 = iVar15;
    }
    if (iVar16 == 0) {
      ::FString::PrintfImpl(&local_118,L"-Sandbox=%s");
      FVar14.Data = (FScriptContainerElement *)L"";
      if (local_118.Data.ArrayNum != 0) {
        FVar14.Data = local_118.Data.AllocatorInstance.Data;
      }
      FCommandLine::AddToSubprocessCommandLine((wchar_t *)FVar14.Data,AllContexts);
      local_128.Data.AllocatorInstance.Data = local_118.Data.AllocatorInstance.Data;
    }
    else {
      ::FString::PrintfImpl(&local_128,L"-InjectedSandbox=%s;%s");
      FVar14.Data = (FScriptContainerElement *)L"";
      if (local_128.Data.ArrayNum != 0) {
        FVar14.Data = local_128.Data.AllocatorInstance.Data;
      }
      FCommandLine::AddToSubprocessCommandLine((wchar_t *)FVar14.Data,AllContexts);
    }
    if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_128.Data.AllocatorInstance.Data);
    }
  }
LAB_148b835e2:
  pIVar3 = this->LowerLevel;
  if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_168.Data.AllocatorInstance.Data);
  }
  return pIVar3 != (IPlatformFile *)0x0;
}

// IsReadOnly @ 148b83670

bool __thiscall FSandboxPlatformFile::IsReadOnly(FSandboxPlatformFile *this,wchar_t *param_1)

{
  char cVar1;
  undefined1 uVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  ForAnyElementType FVar5;
  FString local_28;
  FString local_18;
  
  uVar2 = 0;
  pFVar3 = ConvertToSandboxPath(this,&local_18,param_1);
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar4 = L"";
  }
  else {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  ::FString::FString(&local_28,pwVar4);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  FVar5.Data = (FScriptContainerElement *)L"";
  if (local_28.Data.ArrayNum != 0) {
    FVar5.Data = local_28.Data.AllocatorInstance.Data;
  }
  cVar1 = (**(code **)((longlong)*this->LowerLevel + 0x78))(this->LowerLevel,FVar5.Data);
  if (cVar1 != '\0') {
    FVar5.Data = (FScriptContainerElement *)L"";
    if (local_28.Data.ArrayNum != 0) {
      FVar5.Data = local_28.Data.AllocatorInstance.Data;
    }
    uVar2 = (**(code **)((longlong)*this->LowerLevel + 0x98))(this->LowerLevel,FVar5.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return (bool)uVar2;
}

// IsSandboxEnabled @ 148b83730

bool __thiscall FSandboxPlatformFile::IsSandboxEnabled(FSandboxPlatformFile *this)

{
  return this->bSandboxEnabled;
}

// IterateDirectory @ 148b83740

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FSandboxPlatformFile::IterateDirectory
          (FSandboxPlatformFile *this,wchar_t *param_1,FDirectoryVisitor *param_2)

{
  char cVar1;
  int iVar2;
  ForAnyElementType FVar3;
  undefined1 auStackY_f8 [32];
  FString local_c8;
  undefined **local_b8;
  undefined1 local_b0;
  FDirectoryVisitor *local_a8;
  FSandboxPlatformFile *local_a0;
  undefined1 local_98 [32];
  void *local_78;
  undefined4 local_70;
  uint local_6c;
  undefined4 local_68;
  undefined4 local_64;
  void *local_58;
  undefined4 local_50;
  undefined1 local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  local_b0 = 0;
  local_98._0_8_ = (FScriptContainerElement *)0x0;
  local_b8 = &___7FSandboxVisitor__6B_;
  local_98._8_8_ = 0;
  local_78 = (void *)0x0;
  local_70 = 0;
  local_6c = 0x80;
  local_68 = 0xffffffff;
  local_64 = 0;
  local_58 = (void *)0x0;
  local_50 = 0;
  local_48 = 0;
  local_a8 = param_2;
  local_a0 = this;
  ConvertToSandboxPath(this,&local_c8,param_1);
  FVar3.Data = (FScriptContainerElement *)L"";
  if (local_c8.Data.ArrayNum != 0) {
    FVar3.Data = local_c8.Data.AllocatorInstance.Data;
  }
  cVar1 = (**(code **)((longlong)*this->LowerLevel + 0x140))(this->LowerLevel,FVar3.Data,&local_b8);
  if (cVar1 != '\0') {
    FVar3.Data = (FScriptContainerElement *)L"";
    if (local_c8.Data.ArrayNum != 0) {
      FVar3.Data = local_c8.Data.AllocatorInstance.Data;
    }
    iVar2 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar3.Data,param_1);
    if (iVar2 != 0) {
      cVar1 = (**(code **)((longlong)*this->LowerLevel + 0x140))(this->LowerLevel,param_1,&local_b8)
      ;
    }
  }
  if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
  local_50 = 0;
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_98,0,local_98._8_4_);
  iVar2 = SUB84(local_98._8_8_,4);
  local_98._8_8_ = local_98._8_8_ & 0xffffffff00000000;
  if (iVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)local_98,0,(int *)(local_98 + 0xc));
  }
  local_68 = 0xffffffff;
  local_64 = 0;
  local_70 = 0;
  if (0x80 < local_6c) {
    local_6c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10),0);
  }
  if (local_78 != (void *)0x0) {
    FMemory::Free(local_78);
  }
  if ((FScriptContainerElement *)local_98._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_98._0_8_);
  }
  return (bool)cVar1;
}

// IterateDirectoryRecursively @ 148b838f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FSandboxPlatformFile::IterateDirectoryRecursively
          (FSandboxPlatformFile *this,wchar_t *param_1,FDirectoryVisitor *param_2)

{
  char cVar1;
  int iVar2;
  ForAnyElementType FVar3;
  undefined1 auStackY_f8 [32];
  FString local_c8;
  undefined **local_b8;
  undefined1 local_b0;
  FDirectoryVisitor *local_a8;
  FSandboxPlatformFile *local_a0;
  undefined1 local_98 [32];
  void *local_78;
  undefined4 local_70;
  uint local_6c;
  undefined4 local_68;
  undefined4 local_64;
  void *local_58;
  undefined4 local_50;
  undefined1 local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  local_b0 = 0;
  local_98._0_8_ = (FScriptContainerElement *)0x0;
  local_b8 = &___7FSandboxVisitor__6B_;
  local_98._8_8_ = 0;
  local_78 = (void *)0x0;
  local_70 = 0;
  local_6c = 0x80;
  local_68 = 0xffffffff;
  local_64 = 0;
  local_58 = (void *)0x0;
  local_50 = 0;
  local_48 = 1;
  local_a8 = param_2;
  local_a0 = this;
  ConvertToSandboxPath(this,&local_c8,param_1);
  FVar3.Data = (FScriptContainerElement *)L"";
  if (local_c8.Data.ArrayNum != 0) {
    FVar3.Data = local_c8.Data.AllocatorInstance.Data;
  }
  cVar1 = (**(code **)((longlong)*this->LowerLevel + 0x1d0))(this->LowerLevel,FVar3.Data,&local_b8);
  if (cVar1 != '\0') {
    FVar3.Data = (FScriptContainerElement *)L"";
    if (local_c8.Data.ArrayNum != 0) {
      FVar3.Data = local_c8.Data.AllocatorInstance.Data;
    }
    iVar2 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar3.Data,param_1);
    if (iVar2 != 0) {
      cVar1 = (**(code **)((longlong)*this->LowerLevel + 0x1d0))(this->LowerLevel,param_1,&local_b8)
      ;
    }
  }
  if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
  local_50 = 0;
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_98,0,local_98._8_4_);
  iVar2 = SUB84(local_98._8_8_,4);
  local_98._8_8_ = local_98._8_8_ & 0xffffffff00000000;
  if (iVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)local_98,0,(int *)(local_98 + 0xc));
  }
  local_68 = 0xffffffff;
  local_64 = 0;
  local_70 = 0;
  if (0x80 < local_6c) {
    local_6c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10),0);
  }
  if (local_78 != (void *)0x0) {
    FMemory::Free(local_78);
  }
  if ((FScriptContainerElement *)local_98._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_98._0_8_);
  }
  return (bool)cVar1;
}

// IterateDirectoryStat @ 148b83aa0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
FSandboxPlatformFile::IterateDirectoryStat
          (FSandboxPlatformFile *this,wchar_t *param_1,FDirectoryStatVisitor *param_2)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  ForAnyElementType FVar4;
  undefined1 auStackY_e8 [32];
  FString local_b8;
  undefined **local_a8;
  FDirectoryStatVisitor *local_a0;
  FSandboxPlatformFile *local_98;
  undefined1 local_90 [32];
  void *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  void *local_50;
  undefined4 local_48;
  undefined1 local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  local_a8 = &___7FSandboxStatVisitor__6B_;
  local_90._0_8_ = (FScriptContainerElement *)0x0;
  local_90._8_8_ = 0;
  local_70 = (void *)0x0;
  local_68 = ___xmm_00000000ffffffff0000008000000000;
  uStack_60 = _UNK_150631d98;
  local_50 = (void *)0x0;
  local_48 = 0;
  local_40 = 0;
  local_a0 = param_2;
  local_98 = this;
  ConvertToSandboxPath(this,&local_b8,param_1);
  FVar4.Data = (FScriptContainerElement *)L"";
  if (local_b8.Data.ArrayNum != 0) {
    FVar4.Data = local_b8.Data.AllocatorInstance.Data;
  }
  cVar2 = (**(code **)((longlong)*this->LowerLevel + 0x150))(this->LowerLevel,FVar4.Data,&local_a8);
  if (cVar2 != '\0') {
    FVar4.Data = (FScriptContainerElement *)L"";
    if (local_b8.Data.ArrayNum != 0) {
      FVar4.Data = local_b8.Data.AllocatorInstance.Data;
    }
    iVar3 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar4.Data,param_1);
    if (iVar3 != 0) {
      cVar2 = (**(code **)((longlong)*this->LowerLevel + 0x150))(this->LowerLevel,param_1,&local_a8)
      ;
    }
  }
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  local_48 = 0;
  if (local_50 != (void *)0x0) {
    FMemory::Free(local_50);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_90,0,local_90._8_4_);
  iVar3 = SUB84(local_90._8_8_,4);
  local_90._8_8_ = local_90._8_8_ & 0xffffffff00000000;
  if (iVar3 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)local_90,0,(int *)(local_90 + 0xc));
  }
  uVar1 = local_68._4_4_;
  uStack_60 = 0xffffffff;
  local_68 = (ulonglong)local_68._4_4_ << 0x20;
  if (0x80 < uVar1) {
    local_68 = 0x8000000000;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_90 + 0x10),0);
  }
  if (local_70 != (void *)0x0) {
    FMemory::Free(local_70);
  }
  if ((FScriptContainerElement *)local_90._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_90._0_8_);
  }
  return (bool)cVar2;
}

// IterateDirectoryStatRecursively @ 148b83c40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
FSandboxPlatformFile::IterateDirectoryStatRecursively
          (FSandboxPlatformFile *this,wchar_t *param_1,FDirectoryStatVisitor *param_2)

{
  IPlatformFile *pIVar1;
  code *pcVar2;
  uint uVar3;
  char cVar4;
  int iVar5;
  FString *pFVar6;
  wchar_t *pwVar7;
  ForAnyElementType FVar8;
  undefined1 auStackY_f8 [32];
  FString local_c8;
  FString local_b8;
  undefined **local_a8;
  FDirectoryStatVisitor *local_a0;
  FSandboxPlatformFile *local_98;
  undefined1 local_90 [32];
  void *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  void *local_50;
  undefined4 local_48;
  undefined1 local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  local_a8 = &___7FSandboxStatVisitor__6B_;
  local_90._0_8_ = (FScriptContainerElement *)0x0;
  local_90._8_8_ = 0;
  local_70 = (void *)0x0;
  local_68 = ___xmm_00000000ffffffff0000008000000000;
  uStack_60 = _UNK_150631d98;
  local_50 = (void *)0x0;
  local_48 = 0;
  local_40 = 1;
  local_a0 = param_2;
  local_98 = this;
  ConvertToSandboxPath(this,&local_c8,param_1);
  pIVar1 = this->LowerLevel;
  pcVar2 = *(code **)((longlong)*pIVar1 + 0x1e0);
  pFVar6 = ConvertToSandboxPath(this,&local_b8,param_1);
  if ((pFVar6->Data).ArrayNum == 0) {
    pwVar7 = L"";
  }
  else {
    pwVar7 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
  }
  cVar4 = (*pcVar2)(pIVar1,pwVar7,&local_a8);
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  if (cVar4 != '\0') {
    FVar8.Data = (FScriptContainerElement *)L"";
    if (local_c8.Data.ArrayNum != 0) {
      FVar8.Data = local_c8.Data.AllocatorInstance.Data;
    }
    iVar5 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar8.Data,param_1);
    if (iVar5 != 0) {
      cVar4 = (**(code **)((longlong)*this->LowerLevel + 0x1e0))(this->LowerLevel,param_1,&local_a8)
      ;
    }
  }
  if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
  local_48 = 0;
  if (local_50 != (void *)0x0) {
    FMemory::Free(local_50);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_90,0,local_90._8_4_);
  iVar5 = SUB84(local_90._8_8_,4);
  local_90._8_8_ = local_90._8_8_ & 0xffffffff00000000;
  if (iVar5 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)local_90,0,(int *)(local_90 + 0xc));
  }
  uVar3 = local_68._4_4_;
  uStack_60 = 0xffffffff;
  local_68 = (ulonglong)local_68._4_4_ << 0x20;
  if (0x80 < uVar3) {
    local_68 = 0x8000000000;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_90 + 0x10),0);
  }
  if (local_70 != (void *)0x0) {
    FMemory::Free(local_70);
  }
  if ((FScriptContainerElement *)local_90._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_90._0_8_);
  }
  return (bool)cVar4;
}

// MoveFile @ 148b83e10

bool __thiscall
FSandboxPlatformFile::MoveFile(FSandboxPlatformFile *this,wchar_t *param_1,wchar_t *param_2)

{
  IPlatformFile *pIVar1;
  code *pcVar2;
  char cVar3;
  undefined1 uVar4;
  FString *pFVar5;
  wchar_t *pwVar6;
  ForAnyElementType FVar7;
  wchar_t *pwVar8;
  FString local_38;
  FString local_28;
  
  uVar4 = 0;
  pFVar5 = ConvertToSandboxPath(this,&local_28,param_2);
  pwVar8 = L"";
  if ((pFVar5->Data).ArrayNum == 0) {
    pwVar6 = L"";
  }
  else {
    pwVar6 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
  }
  ::FString::FString(&local_38,pwVar6);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  FVar7.Data = (FScriptContainerElement *)L"";
  if (local_38.Data.ArrayNum != 0) {
    FVar7.Data = local_38.Data.AllocatorInstance.Data;
  }
  cVar3 = (**(code **)((longlong)*this->LowerLevel + 0x78))(this->LowerLevel,FVar7.Data);
  if (cVar3 == '\0') {
    FVar7.Data = (FScriptContainerElement *)L"";
    if (local_38.Data.ArrayNum != 0) {
      FVar7.Data = local_38.Data.AllocatorInstance.Data;
    }
    cVar3 = (**(code **)((longlong)*this->LowerLevel + 0x118))(this->LowerLevel,FVar7.Data);
    if (cVar3 == '\0') goto LAB_148b83f07;
  }
  FVar7.Data = (FScriptContainerElement *)L"";
  if (local_38.Data.ArrayNum != 0) {
    FVar7.Data = local_38.Data.AllocatorInstance.Data;
  }
  pIVar1 = this->LowerLevel;
  pcVar2 = *(code **)((longlong)*pIVar1 + 0xa0);
  pFVar5 = ConvertToSandboxPath(this,&local_28,param_1);
  if ((pFVar5->Data).ArrayNum != 0) {
    pwVar8 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
  }
  uVar4 = (*pcVar2)(pIVar1,pwVar8,FVar7.Data);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
LAB_148b83f07:
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return (bool)uVar4;
}

// OkForInnerAccess @ 148b83f40

bool __thiscall
FSandboxPlatformFile::OkForInnerAccess(FSandboxPlatformFile *this,wchar_t *param_1,bool param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  uint uVar7;
  wchar_t *pwVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  FString local_18;
  
  if (((this->DirectoryExclusionWildcards).ArrayNum != 0) ||
     ((this->FileExclusionWildcards).ArrayNum != 0)) {
    ::FString::FString(&local_18,param_1);
    FPaths::MakeStandardFilename(&local_18);
    uVar10 = 0;
    if (param_2) {
      uVar11 = uVar10;
      if (0 < (this->DirectoryExclusionWildcards).ArrayNum) {
        do {
          uVar9 = (uint)uVar10;
          uVar6 = 0;
          uVar7 = uVar6;
          if ((int)uVar9 < (this->DirectoryExclusionWildcards).ArrayNum) {
            uVar7 = ~uVar9 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
          pFVar2 = (this->DirectoryExclusionWildcards).AllocatorInstance.Data;
          iVar1 = *(int *)(pFVar2 + uVar11 + 8);
          if (iVar1 == 0) {
            pwVar8 = L"";
          }
          else {
            pwVar8 = *(wchar_t **)(pFVar2 + uVar11);
            uVar6 = iVar1 - 1;
          }
          bVar4 = ::FString::MatchesWildcard(&local_18,pwVar8,uVar6,IgnoreCase);
          if (bVar4) {
LAB_148b84123:
            if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_18.Data.AllocatorInstance.Data);
            }
            return false;
          }
          uVar10 = (ulonglong)(uVar9 + 1);
          uVar11 = uVar11 + 0x10;
        } while ((int)(uVar9 + 1) < (this->DirectoryExclusionWildcards).ArrayNum);
      }
    }
    else {
      uVar11 = uVar10;
      if (0 < (this->FileExclusionWildcards).ArrayNum) {
        do {
          uVar9 = (uint)uVar10;
          uVar6 = 0;
          uVar7 = uVar6;
          if ((int)uVar9 < (this->FileExclusionWildcards).ArrayNum) {
            uVar7 = ~uVar9 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
          pFVar2 = (this->FileExclusionWildcards).AllocatorInstance.Data;
          iVar1 = *(int *)(pFVar2 + uVar11 + 8);
          if (iVar1 == 0) {
            pwVar8 = L"";
          }
          else {
            pwVar8 = *(wchar_t **)(pFVar2 + uVar11);
            uVar6 = iVar1 - 1;
          }
          bVar4 = ::FString::MatchesWildcard(&local_18,pwVar8,uVar6,IgnoreCase);
          if (bVar4) goto LAB_148b84123;
          uVar10 = (ulonglong)(uVar9 + 1);
          uVar11 = uVar11 + 0x10;
        } while ((int)(uVar9 + 1) < (this->FileExclusionWildcards).ArrayNum);
      }
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return this->bSandboxOnly == false;
}

// OpenAsyncRead @ 148b84140

IAsyncReadFileHandle * __thiscall
FSandboxPlatformFile::OpenAsyncRead(FSandboxPlatformFile *this,wchar_t *param_1,bool param_2)

{
  bool bVar1;
  char cVar2;
  FString *pFVar3;
  IAsyncReadFileHandle *pIVar4;
  wchar_t *pwVar5;
  ForAnyElementType FVar6;
  FString local_28;
  FString local_18;
  
  pFVar3 = ConvertToSandboxPath(this,&local_18,param_1);
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  ::FString::FString(&local_28,pwVar5);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  bVar1 = OkForInnerAccess(this,param_1,false);
  if (bVar1) {
    FVar6.Data = (FScriptContainerElement *)L"";
    if (local_28.Data.ArrayNum != 0) {
      FVar6.Data = local_28.Data.AllocatorInstance.Data;
    }
    cVar2 = (**(code **)((longlong)*this->LowerLevel + 0x78))(this->LowerLevel,FVar6.Data);
    if (cVar2 == '\0') goto LAB_148b841da;
  }
  param_1 = L"";
  if (local_28.Data.ArrayNum != 0) {
    param_1 = (wchar_t *)local_28.Data.AllocatorInstance.Data;
  }
LAB_148b841da:
  pIVar4 = (IAsyncReadFileHandle *)
           (**(code **)((longlong)*this->LowerLevel + 400))(this->LowerLevel,param_1,param_2);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return pIVar4;
}

// OpenMapped @ 148b84220

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

IMappedFileHandle * __thiscall
FSandboxPlatformFile::OpenMapped(FSandboxPlatformFile *this,wchar_t *param_1)

{
  code *pcVar1;
  bool bVar2;
  IMappedFileHandle *pIVar3;
  ulonglong uVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  IMappedFileHandle *local_38 [3];
  byte local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_68;
  pIVar3 = (IMappedFileHandle *)0x0;
  local_48 = 0;
  (**(code **)(this->_padding_ + 0x1b0))(this,local_38,param_1,0);
  uVar4 = (ulonglong)local_20;
  if (2 < uVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x12f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pIVar3 = (IMappedFileHandle *)(*pcVar1)();
      return pIVar3;
    }
  }
  if ((&`public:_static_bool___cdecl_UE::Core::Private::TIsType<TValueOrError<TUniquePtr<IMappedFileHandle,TDefaultDelete<IMappedFileHandle>_>,FFileSystemError>::FWrapErrorType,TUniquePtr<IMappedFileHandle,TDefaultDelete<IMappedFileHandle>_>,TValueOrError<class_TUniquePtr<class_IMappedFileHandle,struct_TDefaultDelete<class_IMappedFileHandle>_>,class_FFileSystemError>::FWrapErrorType,TValueOrError<class_TUniquePtr<class_IMappedFileHandle,struct_TDefaultDelete<class_IMappedFileHandle>_>,class_FFileSystemError>::FEmptyType>::IsSame(unsigned___int64)'
        ::__l2::bIsSameType)[uVar4] == '\0') {
    if (local_20 != 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pIVar3 = (IMappedFileHandle *)(*pcVar1)();
        return pIVar3;
      }
    }
    pIVar3 = local_38[0];
    local_38[0] = (IMappedFileHandle *)0x0;
    if (2 < local_20) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pIVar3 = (IMappedFileHandle *)(*pcVar1)();
        return pIVar3;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniquePtr<IMappedFileHandle,TDefaultDelete<IMappedFileHandle>_>,TValueOrError<TUniquePtr<IMappedFileHandle,TDefaultDelete<IMappedFileHandle>_>,FFileSystemError>::FWrapErrorType,TValueOrError<class_TUniquePtr<class_IMappedFileHandle,struct_TDefaultDelete<class_IMappedFileHandle>_>,class_FFileSystemError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_20])(local_38);
    local_20 = 2;
  }
  uVar4 = (ulonglong)local_20;
  if (2 < local_20) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pIVar3 = (IMappedFileHandle *)(*pcVar1)();
      return pIVar3;
    }
  }
  if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniquePtr<IMappedFileHandle,TDefaultDelete<IMappedFileHandle>_>,TValueOrError<TUniquePtr<IMappedFileHandle,TDefaultDelete<IMappedFileHandle>_>,FFileSystemError>::FWrapErrorType,TValueOrError<class_TUniquePtr<class_IMappedFileHandle,struct_TDefaultDelete<class_IMappedFileHandle>_>,class_FFileSystemError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar4] !=
      UE::Core::Private::
      TDestructorCaller<TValueOrError<TUniquePtr<IMappedFileHandle,TDefaultDelete<IMappedFileHandle>_>,FFileSystemError>::FEmptyType>
      ::Destruct) {
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniquePtr<IMappedFileHandle,TDefaultDelete<IMappedFileHandle>_>,TValueOrError<TUniquePtr<IMappedFileHandle,TDefaultDelete<IMappedFileHandle>_>,FFileSystemError>::FWrapErrorType,TValueOrError<class_TUniquePtr<class_IMappedFileHandle,struct_TDefaultDelete<class_IMappedFileHandle>_>,class_FFileSystemError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar4])(local_38);
  }
  return pIVar3;
}

// OpenMappedEx @ 148b84390

TValueOrError<TUniquePtr<IMappedFileHandle,TDefaultDelete<IMappedFileHandle>_>,FFileSystemError> *
__thiscall
FSandboxPlatformFile::OpenMappedEx
          (FSandboxPlatformFile *this,
          TValueOrError<TUniquePtr<IMappedFileHandle,TDefaultDelete<IMappedFileHandle>_>,FFileSystemError>
          *__return_storage_ptr__,wchar_t *param_1,EOpenReadFlags param_2,long64 param_3)

{
  bool bVar1;
  char cVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  ForAnyElementType FVar5;
  FString local_28;
  FString local_18;
  
  pFVar3 = ConvertToSandboxPath(this,&local_18,param_1);
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar4 = L"";
  }
  else {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  ::FString::FString(&local_28,pwVar4);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  bVar1 = OkForInnerAccess(this,param_1,false);
  if (bVar1) {
    FVar5.Data = (FScriptContainerElement *)L"";
    if (local_28.Data.ArrayNum != 0) {
      FVar5.Data = local_28.Data.AllocatorInstance.Data;
    }
    cVar2 = (**(code **)((longlong)*this->LowerLevel + 0x78))(this->LowerLevel,FVar5.Data);
    if (cVar2 == '\0') goto LAB_148b84430;
  }
  param_1 = L"";
  if (local_28.Data.ArrayNum != 0) {
    param_1 = (wchar_t *)local_28.Data.AllocatorInstance.Data;
  }
LAB_148b84430:
  (**(code **)((longlong)*this->LowerLevel + 0x1b0))
            (this->LowerLevel,__return_storage_ptr__,param_1,param_2,param_3);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// OpenRead @ 148b84490

IFileHandle * __thiscall
FSandboxPlatformFile::OpenRead(FSandboxPlatformFile *this,wchar_t *param_1,bool param_2)

{
  IPlatformFile *pIVar1;
  code *pcVar2;
  bool bVar3;
  FString *pFVar4;
  IFileHandle *pIVar5;
  wchar_t *pwVar6;
  FString local_18;
  
  pIVar1 = this->LowerLevel;
  pcVar2 = *(code **)((longlong)*pIVar1 + 0xe8);
  pFVar4 = ConvertToSandboxPath(this,&local_18,param_1);
  if ((pFVar4->Data).ArrayNum == 0) {
    pwVar6 = L"";
  }
  else {
    pwVar6 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
  pIVar5 = (IFileHandle *)(*pcVar2)(pIVar1,pwVar6);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if ((pIVar5 == (IFileHandle *)0x0) && (bVar3 = OkForInnerAccess(this,param_1,false), bVar3)) {
    pIVar5 = (IFileHandle *)
             (**(code **)((longlong)*this->LowerLevel + 0xe8))(this->LowerLevel,param_1,0);
  }
  return pIVar5;
}

// OpenWrite @ 148b84550

IFileHandle * __thiscall
FSandboxPlatformFile::OpenWrite
          (FSandboxPlatformFile *this,wchar_t *param_1,bool param_2,bool param_3)

{
  IPlatformFile *pIVar1;
  code *pcVar2;
  FString *pFVar3;
  IFileHandle *pIVar4;
  wchar_t *pwVar5;
  FString local_18;
  
  pIVar1 = this->LowerLevel;
  pcVar2 = *(code **)((longlong)*pIVar1 + 0x110);
  pFVar3 = ConvertToSandboxPath(this,&local_18,param_1);
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pIVar4 = (IFileHandle *)(*pcVar2)(pIVar1,pwVar5,param_2,param_3);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return pIVar4;
}

// RemoveExclusion @ 148b845e0

void __thiscall
FSandboxPlatformFile::RemoveExclusion(FSandboxPlatformFile *this,wchar_t *param_1,bool param_2)

{
  FString *pFVar1;
  TArray<FString,TSizedDefaultAllocator<32>_> *this_00;
  FString local_18;
  
  if (param_2) {
    pFVar1 = ::FString::FString(&local_18,param_1);
    this_00 = &this->DirectoryExclusionWildcards;
  }
  else {
    pFVar1 = ::FString::FString(&local_18,param_1);
    this_00 = &this->FileExclusionWildcards;
  }
  TArray<FString,TSizedDefaultAllocator<32>_>::Remove(this_00,pFVar1);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// SetAsyncMinimumPriority @ 148b84630

/* WARNING: Enum "EAsyncIOPriorityAndFlags": Some values do not have unique names */

void __thiscall
FSandboxPlatformFile::SetAsyncMinimumPriority
          (FSandboxPlatformFile *this,EAsyncIOPriorityAndFlags param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000148b84637. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*this->LowerLevel + 0x1a0))();
  return;
}

// SetLowerLevel @ 148b84650

void __thiscall
FSandboxPlatformFile::SetLowerLevel(FSandboxPlatformFile *this,IPlatformFile *param_1)

{
  this->LowerLevel = param_1;
  return;
}

// SetReadOnly @ 148b84660

bool __thiscall
FSandboxPlatformFile::SetReadOnly(FSandboxPlatformFile *this,wchar_t *param_1,bool param_2)

{
  char cVar1;
  undefined1 uVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  ForAnyElementType FVar5;
  FString local_28;
  FString local_18;
  
  uVar2 = 0;
  pFVar3 = ConvertToSandboxPath(this,&local_18,param_1);
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar4 = L"";
  }
  else {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  ::FString::FString(&local_28,pwVar4);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  FVar5.Data = (FScriptContainerElement *)L"";
  if (local_28.Data.ArrayNum != 0) {
    FVar5.Data = local_28.Data.AllocatorInstance.Data;
  }
  cVar1 = (**(code **)((longlong)*this->LowerLevel + 0x78))(this->LowerLevel,FVar5.Data);
  if (cVar1 != '\0') {
    FVar5.Data = (FScriptContainerElement *)L"";
    if (local_28.Data.ArrayNum != 0) {
      FVar5.Data = local_28.Data.AllocatorInstance.Data;
    }
    uVar2 = (**(code **)((longlong)*this->LowerLevel + 0xa8))(this->LowerLevel,FVar5.Data,param_2);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return (bool)uVar2;
}

// SetSandboxEnabled @ 148b84730

void __thiscall FSandboxPlatformFile::SetSandboxEnabled(FSandboxPlatformFile *this,bool param_1)

{
  this->bSandboxEnabled = param_1;
  return;
}

// SetSandboxOnly @ 148b84740

void __thiscall FSandboxPlatformFile::SetSandboxOnly(FSandboxPlatformFile *this,bool param_1)

{
  this->bSandboxOnly = param_1;
  return;
}

// SetTimeStamp @ 148b84750

void __thiscall
FSandboxPlatformFile::SetTimeStamp(FSandboxPlatformFile *this,wchar_t *param_1,FDateTime param_2)

{
  char cVar1;
  bool bVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  ForAnyElementType FVar5;
  wchar_t *pwVar6;
  FString local_28;
  FString local_18;
  
  pFVar3 = ConvertToSandboxPath(this,&local_18,param_1);
  pwVar6 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar4 = L"";
  }
  else {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  ::FString::FString(&local_28,pwVar4);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  FVar5.Data = (FScriptContainerElement *)L"";
  if (local_28.Data.ArrayNum != 0) {
    FVar5.Data = local_28.Data.AllocatorInstance.Data;
  }
  cVar1 = (**(code **)((longlong)*this->LowerLevel + 0x78))(this->LowerLevel,FVar5.Data);
  if (cVar1 == '\0') {
    bVar2 = OkForInnerAccess(this,param_1,false);
    pwVar6 = param_1;
    if (!bVar2) goto LAB_148b847f9;
  }
  else if (local_28.Data.ArrayNum != 0) {
    pwVar6 = (wchar_t *)local_28.Data.AllocatorInstance.Data;
  }
  (**(code **)((longlong)*this->LowerLevel + 0xb8))(this->LowerLevel,pwVar6,param_2.Ticks);
LAB_148b847f9:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return;
}

// ShouldBeUsed @ 148b84830

bool __thiscall
FSandboxPlatformFile::ShouldBeUsed
          (FSandboxPlatformFile *this,IPlatformFile *param_1,wchar_t *param_2)

{
  bool bVar1;
  undefined1 uVar2;
  FPlatformFileManager *pFVar3;
  IPlatformFile *pIVar4;
  FString *pFVar5;
  ForAnyElementType FVar6;
  FString local_28;
  FString local_18;
  
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Data.ArrayNum = 0;
  local_28.Data.ArrayMax = 0;
  bVar1 = FParse::Value(param_2,L"-InjectionSandbox=",&local_28,true,(wchar_t **)0x0);
  if (bVar1) {
    uVar2 = 1;
  }
  else {
    uVar2 = FParse::Value(param_2,L"-Sandbox=",&local_28,true,(wchar_t **)0x0);
    if (local_28.Data.ArrayNum < 2) {
      pFVar3 = FPlatformFileManager::Get();
      pIVar4 = FPlatformFileManager::GetPlatformFile(pFVar3);
      if ((param_1 == pIVar4) && (this->bEntireEngineWillUseThisSandbox != false)) {
        pFVar5 = GetCookedSandboxDir(&local_18);
        if (&local_28 != pFVar5) {
          if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_28.Data.AllocatorInstance.Data);
          }
          local_28.Data.AllocatorInstance.Data = (pFVar5->Data).AllocatorInstance.Data;
          (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_28.Data.ArrayNum = (pFVar5->Data).ArrayNum;
          local_28.Data.ArrayMax = (pFVar5->Data).ArrayMax;
          (pFVar5->Data).ArrayNum = 0;
          (pFVar5->Data).ArrayMax = 0;
        }
        if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_18.Data.AllocatorInstance.Data);
        }
        pFVar3 = FPlatformFileManager::Get();
        pIVar4 = FPlatformFileManager::GetPlatformFile(pFVar3);
        FVar6.Data = (FScriptContainerElement *)L"";
        if (local_28.Data.ArrayNum != 0) {
          FVar6.Data = local_28.Data.AllocatorInstance.Data;
        }
        uVar2 = (**(code **)((longlong)*pIVar4 + 0x118))(pIVar4,FVar6.Data);
      }
    }
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return (bool)uVar2;
}

// WipeSandboxFolder @ 148b85590

bool __thiscall FSandboxPlatformFile::WipeSandboxFolder(FSandboxPlatformFile *this,wchar_t *param_1)

{
  bool bVar1;
  
  bVar1 = DeleteDirectory(this,param_1,true);
  return bVar1;
}

