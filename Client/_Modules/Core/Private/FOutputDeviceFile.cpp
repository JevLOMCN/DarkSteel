// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 16

// FOutputDeviceFile @ 1418bc980

FOutputDeviceFile * __thiscall
FOutputDeviceFile::FOutputDeviceFile
          (FOutputDeviceFile *this,wchar_t *param_1,bool param_2,bool param_3,bool param_4,
          TFunction<void___cdecl(wchar_t_const_*)> *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong *plVar4;
  
  *(undefined2 *)&this->_padding_ = 0x100;
  this->_padding_ = (longlong)&___7FOutputDeviceFile__6B_;
  this->AsyncWriter = (FAsyncWriter *)0x0;
  this->WriterArchive = (FArchive *)0x0;
  *(undefined8 *)&this->OnFileOpenedFn = *(undefined8 *)param_5;
  *(undefined8 *)&(this->OnFileOpenedFn).field_0x28 = *(undefined8 *)&param_5->field_0x28;
  *(undefined8 *)&param_5->field_0x28 = 0;
  uVar1 = *(undefined4 *)&param_5->field_0x14;
  uVar2 = *(undefined4 *)&param_5->field_0x18;
  uVar3 = *(undefined4 *)&param_5->field_0x1c;
  *(undefined4 *)&(this->OnFileOpenedFn).field_0x10 = *(undefined4 *)&param_5->field_0x10;
  *(undefined4 *)&(this->OnFileOpenedFn).field_0x14 = uVar1;
  *(undefined4 *)&(this->OnFileOpenedFn).field_0x18 = uVar2;
  *(undefined4 *)&(this->OnFileOpenedFn).field_0x1c = uVar3;
  *(undefined8 *)&(this->OnFileOpenedFn).field_0x20 = *(undefined8 *)&param_5->field_0x20;
  if (*(longlong *)&this->OnFileOpenedFn != 0) {
    *(undefined8 *)param_5 = 0;
  }
  this->AppendIfExists = param_3;
  this->Dead = false;
  this->bCreatingWriter = false;
  this->bDisableBackup = param_2;
  (this->CategoryInclusionInternal).Ptr = (FCategoryInclusionInternal *)0x0;
  if (param_1 == (wchar_t *)0x0) {
    this->Filename[0] = L'\0';
  }
  else {
    wcsncpy(this->Filename,param_1,0x3ff);
    this->Filename[0x3ff] = L'\0';
  }
  if (!param_4) {
    CreateWriter(this,0x20);
  }
  if (*(longlong *)param_5 != 0) {
    plVar4 = (longlong *)&param_5->field_0x10;
    if (*(longlong **)&param_5->field_0x28 != (longlong *)0x0) {
      plVar4 = *(longlong **)&param_5->field_0x28;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  return this;
}

// ~FOutputDeviceFile @ 1418bf030

void __thiscall FOutputDeviceFile::~FOutputDeviceFile(FOutputDeviceFile *this)

{
  FAsyncWriter *pFVar1;
  FArchive *pFVar2;
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *this_00;
  longlong *plVar3;
  longlong *plVar4;
  
  this->_padding_ = (longlong)&___7FOutputDeviceFile__6B_;
  if (this->AsyncWriter != (FAsyncWriter *)0x0) {
    if ((char)this->_padding_ == '\0') {
      FGenericPlatformTime::StrTimestamp();
      FOutputDevice::LogfImpl((FOutputDevice *)this,L"Log file closed, %s");
    }
    pFVar1 = this->AsyncWriter;
    if (pFVar1 != (FAsyncWriter *)0x0) {
      (**(code **)(pFVar1->_padding_ + 0x28))(pFVar1,1);
    }
    this->AsyncWriter = (FAsyncWriter *)0x0;
  }
  pFVar2 = this->WriterArchive;
  if (pFVar2 != (FArchive *)0x0) {
    (*(code *)**(undefined8 **)pFVar2)(pFVar2,1);
  }
  this->WriterArchive = (FArchive *)0x0;
  this->Filename[0] = L'\0';
  this_00 = (TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)(this->CategoryInclusionInternal).Ptr;
  if (this_00 !=
      (TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
       *)0x0) {
    *(undefined4 *)&this_00[1].field_0x10 = 0;
    if (*(void **)&this_00[1].field_0x8 != (void *)0x0) {
      FMemory::Free(*(void **)&this_00[1].field_0x8);
    }
    TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (this_00);
    ::operator_delete(this_00,0x50);
  }
  if (*(longlong *)&this->OnFileOpenedFn != 0) {
    plVar3 = *(longlong **)&(this->OnFileOpenedFn).field_0x28;
    plVar4 = (longlong *)&(this->OnFileOpenedFn).field_0x10;
    if (plVar3 != (longlong *)0x0) {
      plVar4 = plVar3;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  this->_padding_ = (longlong)&___7FOutputDevice__6B_;
  return;
}

// CanBeUsedOnAnyThread @ 1418c9f60

bool __thiscall FOutputDeviceFile::CanBeUsedOnAnyThread(FOutputDeviceFile *this)

{
  return true;
}

// CanBeUsedOnPanicThread @ 1418c9fb0

bool __thiscall FOutputDeviceFile::CanBeUsedOnPanicThread(FOutputDeviceFile *this)

{
  return true;
}

// CreateBackupCopy @ 1418d2f40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl FOutputDeviceFile::CreateBackupCopy(wchar_t *param_1)

{
  int iVar1;
  IFileManager *pIVar2;
  longlong lVar3;
  FString *pFVar4;
  ForAnyElementType FVar5;
  FScriptContainerElement *pFVar6;
  undefined1 auStackY_178 [32];
  FString local_128;
  FString local_118;
  FDateTime local_108;
  FString local_100;
  FString local_f0;
  FString local_e0;
  FString local_d0;
  TStringBuilderBase<wchar_t> local_b8;
  wchar_t local_98 [48];
  ulonglong local_38 [2];
  
  local_38[0] = __security_cookie.value ^ (ulonglong)auStackY_178;
  pIVar2 = IFileManager::Get();
  lVar3 = (**(code **)((longlong)*pIVar2 + 0x110))(pIVar2,param_1);
  if (0 < lVar3) {
    pFVar6 = (FScriptContainerElement *)0x0;
    local_118.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_118.Data.ArrayNum = 0;
    local_118.Data.ArrayMax = 0;
    local_128.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_128.Data.ArrayNum = 0;
    local_128.Data.ArrayMax = 0;
    pFVar4 = ::FString::FString(&local_f0,param_1);
    ::FString::FString(&local_e0,L".");
    ::FString::Split(pFVar4,&local_e0,&local_118,&local_128,CaseSensitive,FromEnd);
    if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e0.Data.AllocatorInstance.Data);
    }
    if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f0.Data.AllocatorInstance.Data);
    }
    (**(code **)((longlong)*pIVar2 + 0xd8))(pIVar2,&local_108,param_1);
    local_b8.Base = local_98;
    local_b8.CurPos = local_98;
    local_b8.bIsDynamic = false;
    local_b8.bIsExternal = false;
    local_b8.End = (wchar_t *)local_38;
    FDateTime::ToString(&local_108,L"%Y.%m.%d-%H.%M.%S",&local_b8);
    pFVar4 = ::FString::ConstructFromPtrSize
                       (&local_f0,local_b8.Base,
                        (int)((longlong)local_b8.CurPos - (longlong)local_b8.Base >> 1));
    if (&local_d0 != pFVar4) {
      pFVar6 = (pFVar4->Data).AllocatorInstance.Data;
      (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar4->Data).ArrayNum = 0;
      (pFVar4->Data).ArrayMax = 0;
    }
    if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f0.Data.AllocatorInstance.Data);
    }
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_b8);
    ::FString::PrintfImpl(&local_100,L"%s%s%s.%s");
    if (pFVar6 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar6);
    }
    FVar5.Data = (FScriptContainerElement *)L"";
    if (local_100.Data.ArrayNum != 0) {
      FVar5.Data = local_100.Data.AllocatorInstance.Data;
    }
    iVar1 = (**(code **)((longlong)*pIVar2 + 0x40))(pIVar2,FVar5.Data,param_1,0);
    if (iVar1 == 0) {
      FVar5.Data = (FScriptContainerElement *)L"";
      if (local_100.Data.ArrayNum != 0) {
        FVar5.Data = local_100.Data.AllocatorInstance.Data;
      }
      (**(code **)((longlong)*pIVar2 + 0xe8))(pIVar2,FVar5.Data,local_108.Ticks);
    }
    if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_100.Data.AllocatorInstance.Data);
    }
    if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_128.Data.AllocatorInstance.Data);
    }
    if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_118.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// CreateWriter @ 1418d45d0

bool __thiscall FOutputDeviceFile::CreateWriter(FOutputDeviceFile *this,uint param_1)

{
  wchar_t *_Dest;
  longlong *plVar1;
  code *pcVar2;
  int iVar3;
  bool bVar4;
  FString *pFVar5;
  IFileManager *pIVar6;
  FArchive *pFVar7;
  FAsyncWriter *this_00;
  FAsyncWriter *pFVar8;
  undefined8 uVar9;
  FDateTime FVar10;
  longlong *plVar11;
  wchar_t *pwVar12;
  ForAnyElementType FVar13;
  FOutputDeviceFile *this_01;
  uint uVar14;
  uint uVar15;
  FOutputDeviceFile *local_res8;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  
  if ((this->AsyncWriter != (FAsyncWriter *)0x0) || (this->bCreatingWriter != false)) {
    return true;
  }
  _Dest = this->Filename;
  this->bCreatingWriter = true;
  local_res8 = this;
  if (*_Dest == L'\0') {
    pFVar5 = FGenericPlatformOutputDevices::GetAbsoluteLogFilename(&local_48);
    if ((pFVar5->Data).ArrayNum == 0) {
      pwVar12 = L"";
    }
    else {
      pwVar12 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
    }
    wcscpy(_Dest,pwVar12);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  if (this->bDisableBackup == false) {
    CreateBackupCopy(_Dest);
  }
  pIVar6 = IFileManager::Get();
  pFVar7 = (FArchive *)(**(code **)((longlong)*pIVar6 + 0x20))(pIVar6);
  pFVar8 = (FAsyncWriter *)0x0;
  this_01 = this;
  if (this->bDisableBackup == false) {
    if (pFVar7 == (FArchive *)0x0) {
      ::FString::FString(&local_88,"_");
      ::FString::FString(&local_78,_Dest);
      pFVar5 = FPaths::GetBaseFilename(&local_68,&local_78,false);
      ::FString::ConcatFF(&local_48,pFVar5,&local_88);
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
      if ((FAsyncWriter *)local_88.Data.AllocatorInstance.Data != (FAsyncWriter *)0x0) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
      }
      ::FString::FString(&local_78,_Dest);
      FPaths::GetExtension(&local_58,&local_78,true);
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
      FVar13.Data = (FScriptContainerElement *)pFVar8;
      uVar14 = 2;
      do {
        local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_78.Data.ArrayNum = 0;
        local_78.Data.ArrayMax = 0;
        uVar15 = uVar14 + 1;
        ::FString::AppendInt(&local_78,uVar14);
        ::FString::ConcatFF(&local_68,&local_48,&local_78);
        ::FString::ConcatFF(&local_88,&local_68,&local_58);
        if ((FAsyncWriter *)FVar13.Data != (FAsyncWriter *)0x0) {
          FMemory::Free(FVar13.Data);
        }
        FVar13.Data = local_88.Data.AllocatorInstance.Data;
        iVar3 = local_88.Data.ArrayNum;
        local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_88.Data.ArrayNum = 0;
        local_88.Data.ArrayMax = 0;
        if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Data.AllocatorInstance.Data);
        }
        if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78.Data.AllocatorInstance.Data);
        }
        if (iVar3 == 0) {
          CreateBackupCopy(L"");
          pwVar12 = L"";
        }
        else {
          CreateBackupCopy((wchar_t *)FVar13.Data);
          pwVar12 = (wchar_t *)FVar13.Data;
        }
        wcsncpy(_Dest,pwVar12,0x3ff);
        this->Filename[0x3ff] = L'\0';
        pIVar6 = IFileManager::Get();
        pFVar7 = (FArchive *)(**(code **)((longlong)*pIVar6 + 0x20))(pIVar6);
        this_01 = local_res8;
      } while ((pFVar7 == (FArchive *)0x0) && (uVar14 = uVar15, uVar15 < param_1));
      if ((FAsyncWriter *)FVar13.Data != (FAsyncWriter *)0x0) {
        FMemory::Free(FVar13.Data);
      }
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      goto LAB_1418d4874;
    }
  }
  else {
LAB_1418d4874:
    if (pFVar7 == (FArchive *)0x0) {
      bVar4 = false;
      goto LAB_1418d492d;
    }
  }
  this_01->WriterArchive = pFVar7;
  this_00 = ::operator_new(0x130);
  if (this_00 != (FAsyncWriter *)0x0) {
    pFVar8 = FAsyncWriter::FAsyncWriter(this_00,this_01->WriterArchive,FileName);
  }
  this_01->AsyncWriter = pFVar8;
  WriteByteOrderMarkToArchive(this_01,UTF8);
  if (*(void **)&this_01->OnFileOpenedFn != (void *)0x0) {
    local_res8 = (FOutputDeviceFile *)_Dest;
    UE::Core::Private::Function::CheckCallable(*(void **)&this_01->OnFileOpenedFn);
    plVar1 = *(longlong **)&(this_01->OnFileOpenedFn).field_0x28;
    pcVar2 = *(code **)&this_01->OnFileOpenedFn;
    plVar11 = (longlong *)&(this_01->OnFileOpenedFn).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar11 = plVar1;
    }
    uVar9 = (**(code **)(*plVar11 + 8))();
    (*pcVar2)(uVar9,&local_res8);
  }
  if ((char)this_01->_padding_ == '\0') {
    FGenericPlatformTime::StrTimestamp();
    FOutputDevice::LogfImpl((FOutputDevice *)this_01,L"Log file open, %s");
  }
  pIVar6 = IFileManager::Get();
  pcVar2 = *(code **)((longlong)*pIVar6 + 0xe8);
  FVar10 = FDateTime::UtcNow();
  (*pcVar2)(pIVar6,_Dest,*(undefined8 *)FVar10.Ticks);
  bVar4 = true;
LAB_1418d492d:
  this_01->bCreatingWriter = false;
  return bVar4;
}

// Flush @ 1418daac0

void __thiscall FOutputDeviceFile::Flush(FOutputDeviceFile *this)

{
  FAsyncWriter *pFVar1;
  
  pFVar1 = this->AsyncWriter;
  if (pFVar1 != (FAsyncWriter *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001418daad1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pFVar1->_padding_ + 0x208))(&pFVar1->_padding_);
    return;
  }
  return;
}

// IncludeCategory @ 1418e2740

void __thiscall FOutputDeviceFile::IncludeCategory(FOutputDeviceFile *this,FName *param_1)

{
  TUniquePtr<FOutputDeviceFile::FCategoryInclusionInternal,TDefaultDelete<FOutputDeviceFile::FCategoryInclusionInternal>_>
  *pTVar1;
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *this_00;
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *this_01;
  FName local_res8;
  longlong local_18 [2];
  
  pTVar1 = &this->CategoryInclusionInternal;
  if (pTVar1->Ptr == (FCategoryInclusionInternal *)0x0) {
    this_01 = ::operator_new(0x50);
    if (this_01 !=
        (TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
         *)0x0) {
      *(undefined8 *)(&this_01->field_0x0 + 0x10) = 0;
      *(undefined8 *)(&this_01->field_0x0 + 0x18) = 0;
      *(undefined8 *)(this_01 + 1) = 0;
      *(undefined8 *)&this_01[1].field_0x10 = 0;
      *(undefined8 *)&this_01->field_0x0 = 0;
      *(undefined8 *)(&this_01->field_0x0 + 8) = 0;
      *(undefined8 *)(&this_01->field_0x0 + 0x20) = 0;
      *(undefined4 *)(&this_01->field_0x0 + 0x28) = 0;
      *(undefined4 *)(&this_01->field_0x0 + 0x2c) = 0x80;
      *(undefined4 *)(&this_01->field_0x0 + 0x30) = 0xffffffff;
      *(undefined4 *)(&this_01->field_0x0 + 0x34) = 0;
      *(undefined8 *)&this_01[1].field_0x8 = 0;
    }
    if (pTVar1 == (TUniquePtr<FOutputDeviceFile::FCategoryInclusionInternal,TDefaultDelete<FOutputDeviceFile::FCategoryInclusionInternal>_>
                   *)local_18) {
      if (this_01 ==
          (TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *)0x0) goto LAB_1418e2817;
      *(undefined4 *)&this_01[1].field_0x10 = 0;
      if (*(void **)&this_01[1].field_0x8 != (void *)0x0) {
        FMemory::Free(*(void **)&this_01[1].field_0x8);
      }
      TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (this_01);
    }
    else {
      this_00 = (TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)pTVar1->Ptr;
      pTVar1->Ptr = (FCategoryInclusionInternal *)this_01;
      if (this_00 ==
          (TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *)0x0) goto LAB_1418e2817;
      *(undefined4 *)&this_00[1].field_0x10 = 0;
      if (*(void **)&this_00[1].field_0x8 != (void *)0x0) {
        FMemory::Free(*(void **)&this_00[1].field_0x8);
      }
      TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (this_00);
      this_01 = this_00;
    }
    ::operator_delete(this_01,0x50);
  }
LAB_1418e2817:
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName_const_&>
            (&pTVar1->Ptr->IncludedCategories,&local_res8,(bool *)param_1);
  return;
}

// IsBackupCopy @ 1418e29d0

bool __cdecl FOutputDeviceFile::IsBackupCopy(wchar_t *param_1)

{
  wchar_t wVar1;
  int iVar2;
  wchar_t *pwVar3;
  
  if (param_1 != (wchar_t *)0x0) {
    wVar1 = *param_1;
    while (wVar1 != L'\0') {
      pwVar3 = param_1 + 1;
      if (((wchar_t)(wVar1 - (-(ushort)((ushort)wVar1 - 0x61 < 0x1a) & 0x20)) == 0x2d) &&
         (iVar2 = FGenericPlatformStricmp::Strnicmp(pwVar3,L"backup-",7), iVar2 == 0)) {
        if (param_1 == (wchar_t *)0x0) {
          return false;
        }
        return true;
      }
      param_1 = pwVar3;
      wVar1 = *pwVar3;
    }
  }
  return false;
}

// IsOpened @ 1418e3410

bool __thiscall FOutputDeviceFile::IsOpened(FOutputDeviceFile *this)

{
  return this->AsyncWriter != (FAsyncWriter *)0x0;
}

// Serialize @ 1418f5a60

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FOutputDeviceFile::Serialize(FOutputDeviceFile *this,wchar_t *param_1,Type param_2,FName *param_3)

{
  (**(code **)(this->_padding_ + 8))();
  return;
}

// Serialize @ 1418f5a90

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FOutputDeviceFile::Serialize
          (FOutputDeviceFile *this,wchar_t *param_1,Type param_2,FName *param_3,double param_4)

{
  FCategoryInclusionInternal *pFVar1;
  FName FVar2;
  longlong lVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  wchar_t *pwVar7;
  ForElementType<FSetElementId> FVar8;
  
  pFVar1 = (this->CategoryInclusionInternal).Ptr;
  if (pFVar1 == (FCategoryInclusionInternal *)0x0) {
LAB_1418f5b29:
    if ((GIsCriticalError == false) || (Entry != false)) {
      if ((this->AsyncWriter == (FAsyncWriter *)0x0) &&
         ((this->Dead == false && (bVar4 = CreateWriter(this,0x20), !bVar4)))) {
        this->Dead = true;
      }
      if ((this->AsyncWriter != (FAsyncWriter *)0x0) && (param_2 != SetColor)) {
        FOutputDeviceHelper::FormatCastAndSerializeLine
                  ((FArchive *)&this->AsyncWriter->_padding_,param_1,param_2,param_3,param_4,
                   SUB81(this->_padding_,0),*(bool *)((longlong)&this->_padding_ + 1));
        if (GTestedCmdLine == false) {
          GTestedCmdLine = true;
          pwVar7 = FCommandLine::Get();
          GForceLogFlush = FParse::Param(pwVar7,L"FORCELOGFLUSH");
        }
        if (GForceLogFlush != false) {
          (**(code **)(this->AsyncWriter->_padding_ + 0x208))();
        }
      }
    }
    else {
      Entry = true;
      (**(code **)(this->_padding_ + 8))(this,param_1,param_2,param_3,param_4);
      Entry = false;
    }
  }
  else {
    FVar2 = *param_3;
    uVar5 = ::GetTypeHash(FVar2.ComparisonIndex.Value);
    if (*(int *)&(pFVar1->IncludedCategories).Elements.field_0x8 !=
        *(int *)&(pFVar1->IncludedCategories).Elements.field_0x34) {
      FVar8 = (pFVar1->IncludedCategories).Hash.SecondaryData;
      if (FVar8 == (ForElementType<FSetElementId>)0x0) {
        FVar8 = (ForElementType<FSetElementId>)&(pFVar1->IncludedCategories).Hash;
      }
      iVar6 = *(int *)((longlong)FVar8 +
                      (ulonglong)((pFVar1->IncludedCategories).HashSize - 1U & FVar2.Number + uVar5)
                      * 4);
      if (iVar6 != -1) {
        lVar3 = *(longlong *)&(pFVar1->IncludedCategories).Elements;
        do {
          if (*(FName *)(lVar3 + (longlong)iVar6 * 0x10) == FVar2) goto LAB_1418f5b29;
          iVar6 = *(int *)(lVar3 + 8 + (longlong)iVar6 * 0x10);
        } while (iVar6 != -1);
      }
    }
  }
  return;
}

// SetFilename @ 1418f8d60

void __thiscall FOutputDeviceFile::SetFilename(FOutputDeviceFile *this,wchar_t *param_1)

{
  (**(code **)(this->_padding_ + 0x28))();
  wcsncpy(this->Filename,param_1,0x3ff);
  this->Filename[0x3ff] = L'\0';
  return;
}

// TearDown @ 1418fa040

void __thiscall FOutputDeviceFile::TearDown(FOutputDeviceFile *this)

{
  FAsyncWriter *pFVar1;
  FArchive *pFVar2;
  
  if (this->AsyncWriter != (FAsyncWriter *)0x0) {
    if ((char)this->_padding_ == '\0') {
      FGenericPlatformTime::StrTimestamp();
      FOutputDevice::LogfImpl((FOutputDevice *)this,L"Log file closed, %s");
    }
    pFVar1 = this->AsyncWriter;
    if (pFVar1 != (FAsyncWriter *)0x0) {
      (**(code **)(pFVar1->_padding_ + 0x28))(pFVar1,1);
    }
    this->AsyncWriter = (FAsyncWriter *)0x0;
  }
  pFVar2 = this->WriterArchive;
  if (pFVar2 != (FArchive *)0x0) {
    (*(code *)**(undefined8 **)pFVar2)(pFVar2,1);
  }
  this->WriterArchive = (FArchive *)0x0;
  this->Filename[0] = L'\0';
  return;
}

// WriteByteOrderMarkToArchive @ 141900550

void __thiscall
FOutputDeviceFile::WriteByteOrderMarkToArchive(FOutputDeviceFile *this,EByteOrderMark param_1)

{
  code *pcVar1;
  bool bVar2;
  longlong *plVar3;
  
  if (param_1 == UTF8) {
    plVar3 = &this->AsyncWriter->_padding_;
                    /* WARNING: Could not recover jumptable at 0x00014190059f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 0x188))(plVar3,UTF8BOM,3);
    return;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\OutputDeviceFile.cpp"
                     ,0x1c4,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// WriteRaw @ 1419008d0

void __thiscall FOutputDeviceFile::WriteRaw(FOutputDeviceFile *this,wchar_t *param_1)

{
  size_t sVar1;
  longlong *plVar2;
  
  sVar1 = wcslen(param_1);
  plVar2 = &this->AsyncWriter->_padding_;
                    /* WARNING: Could not recover jumptable at 0x000141900906. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x188))(plVar2,param_1,(longlong)(int)sVar1 * 2);
  return;
}

