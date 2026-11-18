// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 2

// CheckFile @ 1431c5560

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FResumeData::CheckFile(FResumeData *this,FString *param_1)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  char cVar4;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *pTVar5;
  longlong lVar6;
  ForAnyElementType FVar7;
  bool bVar8;
  undefined1 auStackY_128 [32];
  FString local_f8;
  FString local_e8;
  undefined1 local_d8 [32];
  void *local_b8;
  undefined4 local_b0;
  uint local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  ForElementType<FSetElementId> local_98;
  int local_90;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> local_88;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_128;
  if (this->bHasResumeData == false) {
    return;
  }
  ::operator/(&local_e8,&this->StagingDir,param_1);
  FVar7.Data = (FScriptContainerElement *)L"";
  if (local_e8.Data.ArrayNum != 0) {
    FVar7.Data = local_e8.Data.AllocatorInstance.Data;
  }
  cVar4 = (**(code **)((longlong)*this->FileSystem + 0x18))
                    (this->FileSystem,FVar7.Data,&local_f8.Data.ArrayNum);
  local_ac = 0x80;
  local_d8._0_8_ = (FScriptContainerElement *)0x0;
  local_d8._8_8_ = 0;
  local_b8 = (void *)0x0;
  local_b0 = 0;
  local_a8 = 0xffffffff;
  local_a4 = 0;
  local_98 = (ForElementType<FSetElementId>)0x0;
  local_90 = 0;
  (**(code **)((longlong)*this->ManifestSet + 0x10))(this->ManifestSet,param_1,local_d8,1);
  pTVar5 = TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Intersect
                     (&this->LoadedResumeIds,&local_88,
                      (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_d8);
  iVar1 = *(int *)&(pTVar5->Elements).field_0x8;
  iVar2 = *(int *)&(pTVar5->Elements).field_0x34;
  local_88.HashSize = 0;
  if (local_88.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_88.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_88.Elements);
  if (iVar1 - iVar2 < 1) {
    if (cVar4 == '\0') goto LAB_1431c56d5;
  }
  else {
    lVar6 = (**(code **)((longlong)*this->ManifestSet + 0x70))();
    if ((lVar6 == 0) || (cVar4 == '\0')) goto LAB_1431c56d5;
    if ((local_f8.Data._8_8_ != 0) &&
       ((ulonglong)local_f8.Data._8_8_ <= *(ulonglong *)(lVar6 + 0x58))) {
      TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
                (&this->FilesStarted,&local_f8,(bool *)param_1);
    }
    uVar3 = *(ulonglong *)(lVar6 + 0x58);
    bVar8 = false;
    if (local_f8.Data._8_8_ == uVar3) {
      TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
                (&this->FilesCompleted,&local_f8,(bool *)param_1);
      uVar3 = *(ulonglong *)(lVar6 + 0x58);
      bVar8 = local_f8.Data._8_8_ == uVar3;
    }
    if ((ulonglong)local_f8.Data._8_8_ < uVar3 || bVar8) goto LAB_1431c56d5;
  }
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
            (&this->FilesIncompatible,&local_f8,(bool *)param_1);
LAB_1431c56d5:
  local_90 = 0;
  if (local_98 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_98);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_d8,0,local_d8._8_4_);
  iVar1 = SUB84(local_d8._8_8_,4);
  local_d8._8_8_ = local_d8._8_8_ & 0xffffffff00000000;
  if (iVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)local_d8,0,(int *)(local_d8 + 0xc));
  }
  local_a4 = 0;
  local_b0 = 0;
  local_a8 = 0xffffffff;
  if (0x80 < local_ac) {
    local_ac = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_d8 + 0x10),0);
  }
  if (local_b8 != (void *)0x0) {
    FMemory::Free(local_b8);
  }
  if ((FScriptContainerElement *)local_d8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_d8._0_8_);
  }
  if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.Data.AllocatorInstance.Data);
  }
  return;
}

// InitResume @ 1431e5c70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FResumeData::InitResume(FResumeData *this)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  FOutputDeviceRedirector *pFVar5;
  ulonglong uVar6;
  wchar_t *pwVar7;
  ForAnyElementType this_00;
  FScriptContainerElement *pFVar8;
  FString *pFVar9;
  undefined7 uVar10;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [8];
  TArray<FString,TSizedDefaultAllocator<32>_> local_b0;
  FString local_a0;
  undefined1 local_90 [8];
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> local_88;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_d8;
  this->bResumeEnabled = true;
  if ((this->ResumeDataFilename).Data.ArrayNum == 0) {
    pwVar7 = L"";
  }
  else {
    pwVar7 = (wchar_t *)(this->ResumeDataFilename).Data.AllocatorInstance.Data;
  }
  bVar2 = (bool)(**(code **)((longlong)*this->FileSystem + 0x80))(this->FileSystem,pwVar7);
  this->bHasResumeData = bVar2;
  pFVar5 = GetGlobalLogSingleton();
  FOutputDevice::LogfImpl((FOutputDevice *)pFVar5,L"BuildPatchResumeData file found: %s");
  if (this->bHasResumeData != false) {
    local_a0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_a0.Data.ArrayNum = 0;
    local_a0.Data.ArrayMax = 0;
    local_b0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_b0.ArrayNum = 0;
    local_b0.ArrayMax = 0;
    if ((this->ResumeDataFilename).Data.ArrayNum == 0) {
      pwVar7 = L"";
    }
    else {
      pwVar7 = (wchar_t *)(this->ResumeDataFilename).Data.AllocatorInstance.Data;
    }
    pFVar9 = &local_a0;
    (**(code **)((longlong)*this->FileSystem + 0x58))(this->FileSystem,pwVar7,pFVar9);
    uVar10 = (undefined7)((ulonglong)pFVar9 >> 8);
    ::FString::ParseIntoArrayLines(&local_a0,&local_b0,true);
    local_88.Elements._0_8_ = 0;
    local_88.Elements._8_8_ = 0;
    local_88.Elements._32_8_ = 0;
    local_88.Elements._40_4_ = 0;
    local_88.Elements._44_4_ = 0x80;
    local_88.Elements._48_4_ = 0xffffffff;
    local_88.Elements._52_4_ = 0;
    local_88.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    local_88.HashSize = 0;
    (**(code **)((longlong)*this->ManifestSet + 8))(this->ManifestSet,&local_88,CONCAT71(uVar10,1));
    TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Reserve
              (&this->LoadedResumeIds,local_b0.ArrayNum);
    iVar1 = local_b0.ArrayNum;
    uVar6 = (ulonglong)local_b0.ArrayNum;
    pFVar8 = local_b0.AllocatorInstance.Data + uVar6 * 0x10;
    this_00.Data = local_b0.AllocatorInstance.Data;
    while( true ) {
      if ((int)uVar6 != iVar1) {
        `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()(local_b8)
        ;
      }
      if (this_00.Data == pFVar8) break;
      ::FString::TrimStartAndEndInline((FString *)this_00.Data);
      TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
                (&this->LoadedResumeIds,(FString *)local_90,(bool *)this_00.Data);
      if (*(int *)(this_00.Data + 8) == 0) {
        pwVar7 = L"";
        iVar4 = 0;
      }
      else {
        pwVar7 = *(wchar_t **)this_00.Data;
        iVar4 = *(int *)(this_00.Data + 8) + -1;
      }
      uVar3 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar4,pwVar7);
      iVar4 = TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::
              FindIndexByHash<FString>(&local_88,uVar3,(FString *)this_00.Data);
      if (iVar4 != -1) {
        this->bHasResumeData = true;
        pFVar5 = GetGlobalLogSingleton();
        FOutputDevice::LogfImpl((FOutputDevice *)pFVar5,L"BuildPatchResumeData version matched %s");
      }
      uVar6 = local_b0._8_8_ & 0xffffffff;
      this_00.Data = this_00.Data + 0x10;
    }
    local_88.HashSize = 0;
    if (local_88.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_88.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_88.Elements);
    DestructItems<FString,int>((FString *)local_b0.AllocatorInstance.Data,local_b0.ArrayNum);
    if (local_b0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b0.AllocatorInstance.Data);
    }
    if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a0.Data.AllocatorInstance.Data);
    }
  }
  return;
}

