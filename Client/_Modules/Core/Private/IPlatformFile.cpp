// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 55

// IPlatformFile @ 14161e860

IPlatformFile * __thiscall IPlatformFile::IPlatformFile(IPlatformFile *this)

{
  *this = (IPlatformFile)&___7IPlatformFile__6B_;
  return this;
}

// ~IPlatformFile @ 1416214c0

void __thiscall IPlatformFile::~IPlatformFile(IPlatformFile *this)

{
  *this = (IPlatformFile)&___7IPlatformFile__6B_;
  return;
}

// operator() @ 141622430

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
`IPlatformFile::FileJournalIterateDirectory'::__l2::<lambda_1>::operator()
          (void *this,wchar_t *param_1,FFileStatData *param_2)

{
  undefined1 uVar1;
  undefined1 auStack_58 [32];
  wchar_t *local_38;
  long64 local_30;
  uchar local_28 [4];
  uchar auStack_24 [4];
  uchar auStack_20 [4];
  uchar auStack_1c [4];
  uchar local_18 [4];
  byte local_14;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_58;
  local_30 = (param_2->ModificationTime).Ticks;
  uVar1 = param_2->field_0x20;
  local_18 = (uchar  [4])FileJournalFileHandleInvalid.Bytes._16_4_;
  local_14 = ((uVar1 & 2) * '\x02' | param_2->bIsDirectory) * '\x02' | param_2->bIsValid |
             local_14 & 0xf0;
  local_28 = (uchar  [4])FileJournalFileHandleInvalid.Bytes._0_4_;
  auStack_24 = (uchar  [4])FileJournalFileHandleInvalid.Bytes._4_4_;
  auStack_20 = (uchar  [4])FileJournalFileHandleInvalid.Bytes._8_4_;
  auStack_1c = (uchar  [4])FileJournalFileHandleInvalid.Bytes._12_4_;
  local_38 = param_1;
  uVar1 = (*(code *)**(undefined8 **)this)((*(undefined8 **)this)[1],&local_38,&local_30);
  return (bool)uVar1;
}

// AddLocalDirectories @ 141627be0

void __thiscall
IPlatformFile::AddLocalDirectories
          (IPlatformFile *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = (**(code **)((longlong)*this + 0x60))();
  if (lVar1 != 0) {
    plVar2 = (longlong *)(**(code **)((longlong)*this + 0x60))(this);
    (**(code **)(*plVar2 + 0x48))(plVar2,param_1);
  }
  return;
}

// BypassSecurity @ 14162cf20

void __thiscall IPlatformFile::BypassSecurity(IPlatformFile *this,bool param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined7 in_register_00000011;
  
  lVar1 = (**(code **)((longlong)*this + 0x60))(this,CONCAT71(in_register_00000011,param_1));
  if (lVar1 != 0) {
    plVar2 = (longlong *)(**(code **)((longlong)*this + 0x60))(this);
    (**(code **)(*plVar2 + 0x50))(plVar2,param_1);
  }
  return;
}

// ConvertToAbsolutePathForExternalAppForRead @ 14162f8e0

FString * __thiscall
IPlatformFile::ConvertToAbsolutePathForExternalAppForRead
          (IPlatformFile *this,FString *__return_storage_ptr__,wchar_t *param_1)

{
  FString local_18;
  
  ::FString::FString(&local_18,param_1);
  FPaths::ConvertRelativePathToFull(__return_storage_ptr__,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// ConvertToAbsolutePathForExternalAppForWrite @ 14162f930

FString * __thiscall
IPlatformFile::ConvertToAbsolutePathForExternalAppForWrite
          (IPlatformFile *this,FString *__return_storage_ptr__,wchar_t *param_1)

{
  FString local_18;
  
  ::FString::FString(&local_18,param_1);
  FPaths::ConvertRelativePathToFull(__return_storage_ptr__,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// CopyDirectoryTree @ 14162f980

bool __thiscall
IPlatformFile::CopyDirectoryTree(IPlatformFile *this,wchar_t *param_1,wchar_t *param_2,bool param_3)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  char cVar4;
  ForAnyElementType FVar5;
  FString local_68;
  FString local_58;
  undefined **local_48;
  undefined1 local_40;
  IPlatformFile *local_38;
  FScriptContainerElement *local_30;
  FScriptContainerElement *local_28;
  undefined1 local_20;
  
  if ((param_1 == (wchar_t *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("DestinationDirectory",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\GenericPlatform\\GenericPlatformFile.cpp"
                         ,0x393,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  if ((param_2 == (wchar_t *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Source",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\GenericPlatform\\GenericPlatformFile.cpp"
                         ,0x394,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  ::FString::FString(&local_68,param_1);
  FPaths::NormalizeDirectoryName(&local_68);
  ::FString::FString(&local_58,param_2);
  FPaths::NormalizeDirectoryName(&local_58);
  FVar5.Data = (FScriptContainerElement *)L"";
  if (local_58.Data.ArrayNum != 0) {
    FVar5.Data = local_58.Data.AllocatorInstance.Data;
  }
  cVar4 = (**(code **)((longlong)*this + 0x118))(this,FVar5.Data);
  if (cVar4 == '\0') {
LAB_14162fae0:
    uVar3 = 0;
  }
  else {
    FVar5.Data = (FScriptContainerElement *)L"";
    if (local_68.Data.ArrayNum != 0) {
      FVar5.Data = local_68.Data.AllocatorInstance.Data;
    }
    cVar4 = (**(code **)((longlong)*this + 0x118))(this,FVar5.Data);
    if (cVar4 == '\0') {
      FVar5.Data = (FScriptContainerElement *)L"";
      if (local_68.Data.ArrayNum != 0) {
        FVar5.Data = local_68.Data.AllocatorInstance.Data;
      }
      cVar4 = (**(code **)((longlong)*this + 0x200))(this,FVar5.Data);
      if (cVar4 == '\0') goto LAB_14162fae0;
    }
    local_28 = (FScriptContainerElement *)L"";
    if (local_68.Data.ArrayNum != 0) {
      local_28 = local_68.Data.AllocatorInstance.Data;
    }
    local_48 = &`IPlatformFile::CopyDirectoryTree'::`2'::FCopyFilesAndDirs::_vftable_;
    local_30 = (FScriptContainerElement *)L"";
    if (local_58.Data.ArrayNum != 0) {
      local_30 = local_58.Data.AllocatorInstance.Data;
    }
    local_40 = 0;
    local_38 = this;
    local_20 = param_3;
    uVar3 = (**(code **)((longlong)*this + 0x1d0))(this,local_30,&local_48);
    local_48 = &___7FDirectoryVisitor_IPlatformFile__6B_;
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  return (bool)uVar3;
}

// CopyFile @ 14162fb30

bool __thiscall
IPlatformFile::CopyFile
          (IPlatformFile *this,wchar_t *param_1,wchar_t *param_2,EPlatformFileRead param_3,
          EPlatformFileWrite param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  char cVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  void *pvVar8;
  char *pcVar9;
  longlong lVar10;
  int iVar11;
  longlong lVar12;
  
  plVar5 = (longlong *)(**(code **)((longlong)*this + 0xe8))(this,param_2,param_3 & AllowWrite);
  if (plVar5 == (longlong *)0x0) {
    return false;
  }
  plVar6 = (longlong *)(**(code **)((longlong)*this + 0x110))(this,param_1,0,param_4 & AllowRead);
  if (plVar6 == (longlong *)0x0) {
    bVar2 = false;
  }
  else {
    lVar7 = (**(code **)(*plVar5 + 0x50))(plVar5);
    if (0 < lVar7) {
      lVar12 = lVar7;
      if (0x100000 < lVar7) {
        lVar12 = 0x100000;
      }
      pvVar8 = FMemory::Malloc((longlong)(int)lVar12,0);
      if (pvVar8 != (void *)0x0) goto LAB_14162fc40;
      iVar11 = 0x37d;
      pcVar9 = "Buffer";
      do {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          (pcVar9,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\GenericPlatform\\GenericPlatformFile.cpp"
                           ,iVar11,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
LAB_14162fc40:
        lVar10 = lVar7;
        if (lVar12 < lVar7) {
          lVar10 = lVar12;
        }
        cVar4 = (**(code **)(*plVar5 + 0x20))(plVar5,pvVar8,lVar10);
        if ((cVar4 == '\0') ||
           (cVar4 = (**(code **)(*plVar6 + 0x30))(plVar6,pvVar8,lVar10), cVar4 == '\0'))
        goto LAB_14162fc89;
        lVar7 = lVar7 - lVar10;
        if (-1 < lVar7) goto LAB_14162fc84;
        iVar11 = 0x38a;
        pcVar9 = "Size >= 0";
      } while( true );
    }
    if ((lVar7 != 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Size == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\GenericPlatform\\GenericPlatformFile.cpp"
                           ,0x377,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    bVar2 = true;
  }
  if (plVar6 != (longlong *)0x0) {
LAB_14162fcd2:
    (**(code **)*plVar6)(plVar6,1);
  }
  (**(code **)*plVar5)(plVar5,1);
  return bVar2;
LAB_14162fc84:
  if (lVar7 == 0) {
LAB_14162fc89:
    FMemory::Free(pvVar8);
    if ((lVar7 < 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Size >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\GenericPlatform\\GenericPlatformFile.cpp"
                           ,0x38d,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    bVar2 = lVar7 == 0;
    goto LAB_14162fcd2;
  }
  goto LAB_14162fc40;
}

// CreateDirectoryTree @ 1416329f0

bool __thiscall IPlatformFile::CreateDirectoryTree(IPlatformFile *this,wchar_t *param_1)

{
  bool bVar1;
  FString local_18;
  
  ::FString::FString(&local_18,param_1);
  FPaths::NormalizeDirectoryName(&local_18);
  bVar1 = InternalCreateDirectoryTree(this,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar1;
}

// DeleteDirectoryRecursively @ 1416336d0

bool __thiscall IPlatformFile::DeleteDirectoryRecursively(IPlatformFile *this,wchar_t *param_1)

{
  char cVar1;
  undefined **local_28;
  undefined1 local_20;
  IPlatformFile *local_18;
  DWORD local_10;
  
  local_20 = 0;
  local_28 = &`IPlatformFile::DeleteDirectoryRecursively'::`2'::FRecurse::_vftable_;
  local_10 = 0;
  local_18 = this;
  (**(code **)((longlong)*this + 0x140))(this,param_1,&local_28);
  cVar1 = (**(code **)((longlong)*local_18 + 0x128))(local_18,param_1);
  if ((cVar1 == '\0') && (local_10 == 0)) {
    local_10 = FWindowsPlatformMisc::GetLastError();
  }
  cVar1 = (**(code **)((longlong)*this + 0x118))(this,param_1);
  if (cVar1 != '\0') {
    FWindowsPlatformMisc::SetLastError(local_10);
  }
  return cVar1 == '\0';
}

// DeleteFiles @ 141633770

bool __thiscall
IPlatformFile::DeleteFiles(IPlatformFile *this,TArrayView<wchar_t_const_*,int> *param_1)

{
  wchar_t **ppwVar1;
  bool bVar2;
  char cVar3;
  wchar_t **ppwVar4;
  
  ppwVar4 = param_1->DataPtr;
  bVar2 = false;
  ppwVar1 = ppwVar4 + param_1->ArrayNum;
  for (; ppwVar4 != ppwVar1; ppwVar4 = ppwVar4 + 1) {
    cVar3 = (**(code **)((longlong)*this + 0x88))(this,*ppwVar4);
    bVar2 = (bool)(bVar2 | cVar3 == '\0');
  }
  return !bVar2;
}

// DoesCreatePublicFiles @ 141636700

bool __thiscall IPlatformFile::DoesCreatePublicFiles(IPlatformFile *this)

{
  return false;
}

// FileJournalGetFileData @ 14163a170

FFileJournalData * __thiscall
IPlatformFile::FileJournalGetFileData
          (IPlatformFile *this,FFileJournalData *__return_storage_ptr__,wchar_t *param_1,
          FString *param_2)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  byte bVar4;
  longlong lVar5;
  undefined1 local_38 [48];
  
  lVar5 = (**(code **)((longlong)*this + 0x130))(this,local_38);
  (__return_storage_ptr__->ModificationTime).Ticks = 0;
  uVar2 = FileJournalFileHandleInvalid.Bytes._8_8_;
  *(undefined8 *)(__return_storage_ptr__->JournalHandle).Bytes =
       FileJournalFileHandleInvalid.Bytes._0_8_;
  *(undefined8 *)((__return_storage_ptr__->JournalHandle).Bytes + 8) = uVar2;
  uVar3 = FileJournalFileHandleInvalid.Bytes._16_4_;
  __return_storage_ptr__->bIsValid = false;
  __return_storage_ptr__->bIsReadOnly = false;
  __return_storage_ptr__->bIsReparsePoint = false;
  __return_storage_ptr__->bIsDirectory = false;
  *(undefined4 *)((__return_storage_ptr__->JournalHandle).Bytes + 0x10) = uVar3;
  (__return_storage_ptr__->ModificationTime).Ticks = *(long64 *)(lVar5 + 0x10);
  uVar2 = FileJournalFileHandleInvalid.Bytes._8_8_;
  *(undefined8 *)(__return_storage_ptr__->JournalHandle).Bytes =
       FileJournalFileHandleInvalid.Bytes._0_8_;
  *(undefined8 *)((__return_storage_ptr__->JournalHandle).Bytes + 8) = uVar2;
  *(undefined4 *)((__return_storage_ptr__->JournalHandle).Bytes + 0x10) =
       FileJournalFileHandleInvalid.Bytes._16_4_;
  bVar4 = *(byte *)(lVar5 + 0x20) >> 2 & 1 | __return_storage_ptr__->field_0x1c;
  __return_storage_ptr__->field_0x1c = bVar4;
  bVar4 = (*(byte *)(lVar5 + 0x20) & 1) * '\x02' | bVar4;
  __return_storage_ptr__->field_0x1c = bVar4;
  __return_storage_ptr__->field_0x1c = (*(byte *)(lVar5 + 0x20) & 2) << 2 | bVar4;
  return __return_storage_ptr__;
}

// FileJournalGetLatestEntry @ 14163a210

EFileJournalResult __thiscall
IPlatformFile::FileJournalGetLatestEntry
          (IPlatformFile *this,wchar_t *param_1,ulong64 *param_2,ulong64 *param_3,FString *param_4)

{
  if (param_4 != (FString *)0x0) {
    ::FString::operator=(param_4,L"PlatformFileJournal is not implemented on the current platform.")
    ;
  }
  *param_2 = 0xffffffffffffffff;
  *param_3 = 0xffffffffffffffff;
  return InvalidPlatform;
}

// FileJournalGetMaximumSize @ 14163a260

/* WARNING: Enum "Type": Some values do not have unique names */

ulong64 __thiscall
IPlatformFile::FileJournalGetMaximumSize
          (IPlatformFile *this,wchar_t *param_1,Type *param_2,FString *param_3)

{
  if (param_2 != (Type *)0x0) {
    *param_2 = Display;
  }
  if (param_3 != (FString *)0x0) {
    ::FString::operator=(param_3,L"PlatformFileJournal is not implemented on the current platform.")
    ;
  }
  return 0;
}

// FileJournalGetVolumeName @ 14163a290

FString * __thiscall
IPlatformFile::FileJournalGetVolumeName
          (IPlatformFile *this,FString *__return_storage_ptr__,TStringView<wchar_t> *param_1)

{
  FScriptContainerElement *pFVar1;
  FString *pFVar2;
  FString local_58;
  TStringView<wchar_t> local_48;
  FString local_38;
  TStringView<wchar_t> local_28;
  TStringView<wchar_t> local_18;
  
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.Data.ArrayNum = 0;
  local_58.Data.ArrayMax = 0;
  pFVar2 = ::FString::ConstructFromPtrSize
                     ((FString *)&local_28,param_1->DataPtr,(int)*(undefined8 *)&param_1->Size);
  if (&local_58 != pFVar2) {
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    local_58.Data.AllocatorInstance.Data = (pFVar2->Data).AllocatorInstance.Data;
    (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_58.Data.ArrayNum = (pFVar2->Data).ArrayNum;
    local_58.Data.ArrayMax = (pFVar2->Data).ArrayMax;
    (pFVar2->Data).ArrayNum = 0;
    (pFVar2->Data).ArrayMax = 0;
  }
  if (local_28.DataPtr != (wchar_t *)0x0) {
    FMemory::Free(local_28.DataPtr);
  }
  FPaths::ConvertRelativePathToFull(&local_38,&local_58);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  local_48.DataPtr = (wchar_t *)0x0;
  local_48.Size = 0;
  local_18.DataPtr = (wchar_t *)0x0;
  local_18.Size = 0;
  local_28.Size = local_38.Data.ArrayNum + -1;
  if (local_38.Data.ArrayNum == 0) {
    local_28.Size = 0;
  }
  local_28.DataPtr = (wchar_t *)local_38.Data.AllocatorInstance.Data;
  FPathViews::SplitVolumeSpecifier(&local_28,&local_48,&local_18);
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  pFVar2 = ::FString::ConstructFromPtrSize((FString *)&local_28,local_48.DataPtr,local_48.Size);
  if (__return_storage_ptr__ != pFVar2) {
    pFVar1 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (pFVar2->Data).AllocatorInstance.Data;
    (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = (pFVar2->Data).ArrayNum;
    (__return_storage_ptr__->Data).ArrayMax = (pFVar2->Data).ArrayMax;
    (pFVar2->Data).ArrayNum = 0;
    (pFVar2->Data).ArrayMax = 0;
  }
  if ((FScriptContainerElement *)local_28.DataPtr != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.DataPtr);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// FileJournalIsAvailable @ 14163a3f0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
IPlatformFile::FileJournalIsAvailable
          (IPlatformFile *this,wchar_t *param_1,Type *param_2,FString *param_3)

{
  if (param_2 != (Type *)0x0) {
    *param_2 = Display;
  }
  if (param_3 != (FString *)0x0) {
    ::FString::operator=(param_3,L"PlatformFileJournal is not implemented on the current platform.")
    ;
  }
  return false;
}

// FileJournalIterateDirectory @ 14163a420

bool __thiscall
IPlatformFile::FileJournalIterateDirectory
          (IPlatformFile *this,wchar_t *param_1,
          TFunctionRef<bool___cdecl(wchar_t_const_*,FFileJournalData_const_&)> *param_2,
          FString *param_3)

{
  undefined1 uVar1;
  TFunctionRef<bool___cdecl(wchar_t_const_*,FFileJournalData_const_&)> *local_res8 [4];
  code *local_18;
  TFunctionRef<bool___cdecl(wchar_t_const_*,FFileJournalData_const_&)> **local_10;
  
  local_10 = local_res8;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`IPlatformFile::FileJournalIterateDirectory'::__l2::<lambda_1>,bool,wchar_t_const_*,FFileStatData_const_&>
             ::Call;
  local_res8[0] = param_2;
  uVar1 = (**(code **)((longlong)*this + 0x148))(this,param_1,&local_18);
  return (bool)uVar1;
}

// FileJournalReadModified @ 14163a460

EFileJournalResult __thiscall
IPlatformFile::FileJournalReadModified
          (IPlatformFile *this,wchar_t *param_1,ulong64 *param_2,ulong64 *param_3,
          TMap<FFileJournalFileHandle,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FFileJournalFileHandle,FString,0>_>
          *param_4,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *param_5,
          ulong64 *param_6,FString *param_7)

{
  *param_6 = 0xffffffffffffffff;
  if (param_7 != (FString *)0x0) {
    ::FString::operator=(param_7,L"PlatformFileJournal is not implemented on the current platform.")
    ;
  }
  return InvalidPlatform;
}

// FindFiles @ 14163b630

void __thiscall
IPlatformFile::FindFiles
          (IPlatformFile *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,wchar_t *param_2
          ,wchar_t *param_3)

{
  code *pcVar1;
  BOOLEAN BVar2;
  bool bVar3;
  size_t sVar4;
  undefined **local_48;
  undefined1 local_40;
  IPlatformFile *local_38;
  RTL_SRWLOCK local_30;
  TArray<FString,TSizedDefaultAllocator<32>_> *local_28;
  wchar_t *local_20;
  undefined4 local_18;
  
  local_40 = 1;
  local_48 = &___7FFindFilesVisitor__6B_;
  local_18 = 0;
  local_30.Ptr = (PVOID)0x0;
  local_38 = this;
  local_28 = param_1;
  local_20 = param_3;
  if (param_3 != (wchar_t *)0x0) {
    sVar4 = wcslen(param_3);
    local_18 = (undefined4)sVar4;
  }
  (**(code **)((longlong)*this + 0x140))(this,param_2,&local_48);
  BVar2 = TryAcquireSRWLockExclusive(&local_30);
  if (BVar2 != '\0') {
    ReleaseSRWLockExclusive(&local_30);
    return;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("!IsLocked()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                     ,0x48,L"Destroying a lock that is still held!");
  if (bVar3) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// FindFilesRecursively @ 14163b6f0

void __thiscall
IPlatformFile::FindFilesRecursively
          (IPlatformFile *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,wchar_t *param_2
          ,wchar_t *param_3)

{
  code *pcVar1;
  BOOLEAN BVar2;
  bool bVar3;
  size_t sVar4;
  undefined **local_48;
  undefined1 local_40;
  IPlatformFile *local_38;
  RTL_SRWLOCK local_30;
  TArray<FString,TSizedDefaultAllocator<32>_> *local_28;
  wchar_t *local_20;
  undefined4 local_18;
  
  local_40 = 1;
  local_48 = &___7FFindFilesVisitor__6B_;
  local_18 = 0;
  local_30.Ptr = (PVOID)0x0;
  local_38 = this;
  local_28 = param_1;
  local_20 = param_3;
  if (param_3 != (wchar_t *)0x0) {
    sVar4 = wcslen(param_3);
    local_18 = (undefined4)sVar4;
  }
  (**(code **)((longlong)*this + 0x1d0))(this,param_2,&local_48);
  BVar2 = TryAcquireSRWLockExclusive(&local_30);
  if (BVar2 != '\0') {
    ReleaseSRWLockExclusive(&local_30);
    return;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("!IsLocked()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                     ,0x48,L"Destroying a lock that is still held!");
  if (bVar3) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// GetAllowedBytesToWriteThrottledStorage @ 14163e6b0

long64 __thiscall
IPlatformFile::GetAllowedBytesToWriteThrottledStorage(IPlatformFile *this,wchar_t *param_1)

{
  return 0x7fffffffffffffff;
}

// GetPhysicalTypeName @ 141644a10

wchar_t * __cdecl IPlatformFile::GetPhysicalTypeName(void)

{
  return L"PhysicalFile";
}

// GetTimeStampLocal @ 141647080

FDateTime __thiscall IPlatformFile::GetTimeStampLocal(IPlatformFile *this,wchar_t *param_1)

{
  FDateTime FVar1;
  FDateTime FVar2;
  
  (**(code **)((longlong)*this + 0xb0))();
  FVar1 = FDateTime::Now();
  FVar2 = FDateTime::UtcNow();
  *(longlong *)param_1 =
       *(longlong *)param_1 + (*(longlong *)FVar1.Ticks - *(longlong *)FVar2.Ticks);
  return (FDateTime)(long64)param_1;
}

// GetTimeStampPair @ 1416470d0

void __thiscall
IPlatformFile::GetTimeStampPair
          (IPlatformFile *this,wchar_t *param_1,wchar_t *param_2,FDateTime *param_3,
          FDateTime *param_4)

{
  longlong lVar1;
  longlong *plVar2;
  long64 *plVar3;
  undefined1 local_res8 [8];
  
  lVar1 = (**(code **)((longlong)*this + 0x60))();
  if (lVar1 == 0) {
    plVar3 = (long64 *)(**(code **)((longlong)*this + 0xb0))(this,local_res8,param_1);
    param_3->Ticks = *plVar3;
    plVar3 = (long64 *)(**(code **)((longlong)*this + 0xb0))(this,local_res8,param_2);
    param_4->Ticks = *plVar3;
  }
  else {
    plVar2 = (longlong *)(**(code **)((longlong)*this + 0x60))();
    (**(code **)(*plVar2 + 0x1b8))(plVar2,param_1,param_2,param_3,param_4);
  }
  return;
}

// HasMarkOfTheWeb @ 141647490

bool __thiscall
IPlatformFile::HasMarkOfTheWeb(IPlatformFile *this,TStringView<wchar_t> *param_1,FString *param_2)

{
  return false;
}

// InitializeAfterProjectFilePath @ 141648b70

void __thiscall IPlatformFile::InitializeAfterProjectFilePath(IPlatformFile *this)

{
  return;
}

// InitializeAfterSetActive @ 141648b80

void __thiscall IPlatformFile::InitializeAfterSetActive(IPlatformFile *this)

{
  return;
}

// InitializeNewAsyncIO @ 141649550

void __thiscall IPlatformFile::InitializeNewAsyncIO(IPlatformFile *this)

{
  return;
}

// IsSandboxEnabled @ 14164a360

bool __thiscall IPlatformFile::IsSandboxEnabled(IPlatformFile *this)

{
  return false;
}

// IsSymlink @ 14164a3b0

ESymlinkResult __thiscall IPlatformFile::IsSymlink(IPlatformFile *this,wchar_t *param_1)

{
  return Unimplemented;
}

// IterateDirectory @ 14164a6f0

bool __thiscall
IPlatformFile::IterateDirectory
          (IPlatformFile *this,wchar_t *param_1,
          TFunctionRef<bool___cdecl(wchar_t_const_*,bool)> *param_2)

{
  undefined1 uVar1;
  undefined **local_28;
  undefined1 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_20 = 0;
  local_28 = &___7FDirectoryVisitorFuncWrapper__6B_;
  local_18 = *(undefined8 *)param_2;
  local_10 = *(undefined8 *)&param_2->field_0x8;
  uVar1 = (**(code **)((longlong)*this + 0x140))(this,param_1,&local_28);
  return (bool)uVar1;
}

// IterateDirectoryRecursively @ 14164a730

/* WARNING: Removing unreachable block (ram,0x00014164a82a) */

bool __thiscall
IPlatformFile::IterateDirectoryRecursively
          (IPlatformFile *this,wchar_t *param_1,FDirectoryVisitor *param_2)

{
  code *pcVar1;
  atomic<bool> aVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  FScriptContainerElement *pFVar9;
  ulong64 uVar10;
  ForAnyElementType FVar11;
  EParallelForFlags EVar12;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar13;
  atomic<bool> local_res20 [8];
  undefined1 local_a8;
  undefined1 local_a7 [7];
  TArray<FString,TSizedDefaultAllocator<32>_> local_a0;
  ForAnyElementType local_90;
  undefined8 local_88;
  FString local_80;
  TArrayView<TArray<FString,TSizedDefaultAllocator<32>_>,int> local_70;
  <lambda_1> local_58;
  
  local_a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a0.ArrayNum = 0;
  local_a0.ArrayMax = 0;
  ::FString::FString(&local_80,param_1);
  if (((local_a0.AllocatorInstance.Data <= (FScriptContainerElement *)&local_80) &&
      ((FScriptContainerElement *)&local_80 <
       local_a0.AllocatorInstance.Data + (longlong)local_a0.ArrayMax * 0x10)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar1 = (code *)swi(3);
    uVar4 = (*pcVar1)();
    return (bool)uVar4;
  }
  iVar5 = local_a0.ArrayNum;
  if (local_a0.ArrayNum == local_a0.ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&local_a0.AllocatorInstance,&local_a0.ArrayMax);
  }
  local_a0.ArrayNum = iVar5 + 1;
  pFVar9 = local_a0.AllocatorInstance.Data + (longlong)iVar5 * 0x10;
  *(undefined8 *)pFVar9 = 0;
  *(FScriptContainerElement **)pFVar9 = local_80.Data.AllocatorInstance.Data;
  *(int *)(pFVar9 + 8) = local_80.Data.ArrayNum;
  *(int *)(pFVar9 + 0xc) = local_80.Data.ArrayMax;
  local_80.Data.ArrayNum = 0;
  local_80.Data.ArrayMax = 0;
  local_80.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  bVar3 = FTaskGraphInterface::IsRunning();
  if ((!bVar3) || (EVar12 = Unbalanced, (param_2->DirectoryVisitorFlags & ThreadSafe) == None)) {
    EVar12 = ForceSingleThread;
  }
  local_res20[0] = (atomic<bool>)0x1;
  local_90.Data = (FScriptContainerElement *)0x0;
  local_88 = 0;
  do {
    uVar10 = 0;
    iVar5 = local_a0.ArrayNum;
    if (local_a0.ArrayNum < 1) break;
    iVar6 = ParallelForImpl::GetNumberOfThreadTasks(local_a0.ArrayNum,1,EVar12);
    if ((longlong)local_88 < 0) {
      DestructItems<TArray<FString,TSizedDefaultAllocator<32>_>,int>
                ((TArray<FString,TSizedDefaultAllocator<32>_> *)local_90.Data,(int)local_88);
      bVar3 = local_88._4_4_ != 0;
      local_88 = (ulonglong)local_88._4_4_ << 0x20;
      if (bVar3) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,0,&local_90,0,(int *)((longlong)&local_88 + 4));
      }
    }
    else {
      DestructItems<TArray<FString,TSizedDefaultAllocator<32>_>,int>
                ((TArray<FString,TSizedDefaultAllocator<32>_> *)local_90.Data,(int)local_88);
      local_88 = local_88 & 0xffffffff00000000;
    }
    iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,iVar6,&local_90,(int *)&local_88,(int *)((longlong)&local_88 + 4));
    memset(local_90.Data + (longlong)iVar7 * 0x10,0,(longlong)iVar6 << 4);
    iVar6 = (int)local_88;
    local_70.DataPtr = (TArray<FString,TSizedDefaultAllocator<32>_> *)local_90.Data;
    if (((int)local_88 < 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
    local_58.DirectoriesToVisit = &local_a0;
    local_70.ArrayNum = iVar6;
    local_58.bResult = local_res20;
    local_58.__this = this;
    local_58.Visitor = param_2;
    ParallelForImpl::
    ParallelForInternal<_IPlatformFile::IterateDirectoryRecursively_::__l4::<lambda_1>,_ParallelForWithTaskContext<TArray<FString,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,_IPlatformFile::IterateDirectoryRecursively_::__l4::<lambda_1>_>_::__l5::<lambda_1>,TArray<FString,TSizedDefaultAllocator<32>_>_>
              (L"IterateDirectoryRecursively.PF",iVar5,1,&local_58,(<lambda_1>)0x1,EVar12,&local_70)
    ;
    iVar5 = (int)local_88;
    uVar8 = (ulonglong)(int)local_88;
    pTVar13 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(local_90.Data + uVar8 * 0x10);
    FVar11.Data = local_90.Data;
    while( true ) {
      if ((int)uVar8 != iVar5) {
        local_a8 = 0;
        `TCheckedPointerIterator<TArray<FString,TSizedDefaultAllocator<32>_>_const_,int,0>::
        operator!='::__l2::<lambda_1>::operator()(&local_a8);
        uVar8 = local_88 & 0xffffffff;
      }
      iVar6 = (int)uVar10;
      if ((TArray<FString,TSizedDefaultAllocator<32>_> *)FVar11.Data == pTVar13) break;
      uVar10 = (ulong64)(uint)(iVar6 + ((TArray<FString,TSizedDefaultAllocator<32>_> *)FVar11.Data)
                                       ->ArrayNum);
      FVar11.Data = FVar11.Data + 0x10;
    }
    if (iVar6 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(uVar10);
    }
    if (local_a0.ArrayMax < iVar6) {
      DestructItems<FString,int>((FString *)local_a0.AllocatorInstance.Data,local_a0.ArrayNum);
      iVar5 = local_a0.ArrayMax;
      local_a0._8_8_ = local_a0._8_8_ & 0xffffffff00000000;
      if (iVar5 != iVar6) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,iVar6,&local_a0.AllocatorInstance,0,&local_a0.ArrayMax);
      }
    }
    else {
      DestructItems<FString,int>((FString *)local_a0.AllocatorInstance.Data,local_a0.ArrayNum);
      local_a0._8_8_ = local_a0._8_8_ & 0xffffffff00000000;
    }
    iVar5 = (int)local_88;
    pTVar13 = (TArray<FString,TSizedDefaultAllocator<32>_> *)
              (local_90.Data + (longlong)(int)local_88 * 0x10);
    FVar11.Data = local_90.Data;
    while( true ) {
      if ((int)local_88 != iVar5) {
        local_a7[0] = 0;
        `TCheckedPointerIterator<TArray<FString,TSizedDefaultAllocator<32>_>,int,0>::operator!='::
        __l2::<lambda_1>::operator()(local_a7);
      }
      if ((TArray<FString,TSizedDefaultAllocator<32>_> *)FVar11.Data == pTVar13) break;
      if ((&local_a0 == (TArray<FString,TSizedDefaultAllocator<32>_> *)FVar11.Data) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(void*)this != (void*)&Source",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x986,L""), bVar3)) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
      iVar6 = ((TArray<FString,TSizedDefaultAllocator<32>_> *)FVar11.Data)->ArrayNum;
      if (iVar6 != 0) {
        iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x10,8,iVar6,&local_a0.AllocatorInstance,&local_a0.ArrayNum,
                           &local_a0.ArrayMax);
        memmove(local_a0.AllocatorInstance.Data + (longlong)iVar7 * 0x10,
                (((TArray<FString,TSizedDefaultAllocator<32>_> *)FVar11.Data)->AllocatorInstance).
                Data,(longlong)iVar6 << 4);
        ((TArray<FString,TSizedDefaultAllocator<32>_> *)FVar11.Data)->ArrayNum = 0;
      }
      FVar11.Data = FVar11.Data + 0x10;
    }
  } while (local_res20[0] != (atomic<bool>)0x0);
  aVar2 = local_res20[0];
  DestructItems<TArray<FString,TSizedDefaultAllocator<32>_>,int>
            ((TArray<FString,TSizedDefaultAllocator<32>_> *)local_90.Data,(int)local_88);
  if ((TArray<FString,TSizedDefaultAllocator<32>_> *)local_90.Data !=
      (TArray<FString,TSizedDefaultAllocator<32>_> *)0x0) {
    FMemory::Free(local_90.Data);
  }
  DestructItems<FString,int>((FString *)local_a0.AllocatorInstance.Data,local_a0.ArrayNum);
  if (local_a0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a0.AllocatorInstance.Data);
  }
  return (bool)aVar2;
}

// IterateDirectoryRecursively @ 14164aba0

bool __thiscall
IPlatformFile::IterateDirectoryRecursively
          (IPlatformFile *this,wchar_t *param_1,
          TFunctionRef<bool___cdecl(wchar_t_const_*,bool)> *param_2)

{
  undefined1 uVar1;
  undefined **local_28;
  undefined1 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_20 = 0;
  local_28 = &___7FDirectoryVisitorFuncWrapper__6B_;
  local_18 = *(undefined8 *)param_2;
  local_10 = *(undefined8 *)&param_2->field_0x8;
  uVar1 = (**(code **)((longlong)*this + 0x1d0))(this,param_1,&local_28);
  return (bool)uVar1;
}

// IterateDirectoryStat @ 14164abe0

bool __thiscall
IPlatformFile::IterateDirectoryStat
          (IPlatformFile *this,wchar_t *param_1,
          TFunctionRef<bool___cdecl(wchar_t_const_*,FFileStatData_const_&)> *param_2)

{
  undefined1 uVar1;
  undefined **local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_28 = &___7FDirectoryStatVisitorFuncWrapper__6B_;
  local_20 = *(undefined8 *)param_2;
  local_18 = *(undefined8 *)&param_2->field_0x8;
  uVar1 = (**(code **)((longlong)*this + 0x150))(this,param_1,&local_28);
  return (bool)uVar1;
}

// IterateDirectoryStatRecursively @ 14164ac20

bool __thiscall
IPlatformFile::IterateDirectoryStatRecursively
          (IPlatformFile *this,wchar_t *param_1,FDirectoryStatVisitor *param_2)

{
  undefined1 uVar1;
  undefined **local_28;
  IPlatformFile *local_20;
  FDirectoryStatVisitor *local_18;
  
  local_28 = &`IPlatformFile::IterateDirectoryStatRecursively'::`2'::FStatRecurse::_vftable_;
  local_20 = this;
  local_18 = param_2;
  uVar1 = (**(code **)((longlong)*this + 0x150))(this,param_1,&local_28);
  return (bool)uVar1;
}

// IterateDirectoryStatRecursively @ 14164ac60

bool __thiscall
IPlatformFile::IterateDirectoryStatRecursively
          (IPlatformFile *this,wchar_t *param_1,
          TFunctionRef<bool___cdecl(wchar_t_const_*,FFileStatData_const_&)> *param_2)

{
  undefined1 uVar1;
  undefined **local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_28 = &___7FDirectoryStatVisitorFuncWrapper__6B_;
  local_20 = *(undefined8 *)param_2;
  local_18 = *(undefined8 *)&param_2->field_0x8;
  uVar1 = (**(code **)((longlong)*this + 0x1e0))(this,param_1,&local_28);
  return (bool)uVar1;
}

// MakeUniquePakFilesForTheseFiles @ 14164d700

void __thiscall
IPlatformFile::MakeUniquePakFilesForTheseFiles
          (IPlatformFile *this,
          TArray<TArray<FString,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *param_1)

{
  return;
}

// OpenAsyncRead @ 14164f550

TValueOrError<TUniquePtr<IAsyncReadFileHandle,TDefaultDelete<IAsyncReadFileHandle>_>,FFileSystemError>
* __thiscall
IPlatformFile::OpenAsyncRead
          (IPlatformFile *this,
          TValueOrError<TUniquePtr<IAsyncReadFileHandle,TDefaultDelete<IAsyncReadFileHandle>_>,FFileSystemError>
          *__return_storage_ptr__,wchar_t *param_1,EOpenReadFlags param_2)

{
  longlong lVar1;
  wchar_t *pwVar2;
  FString local_18;
  
  if ((param_2 & AllowDelete) == None) {
    lVar1 = (**(code **)((longlong)*this + 400))(this,param_1,param_2 & AllowWrite);
    if (lVar1 != 0) {
      (__return_storage_ptr__->Variant)._padding_ = lVar1;
      (__return_storage_ptr__->Variant).TypeIndex = '\0';
      return __return_storage_ptr__;
    }
    pwVar2 = 
    L"[Unknown Error] Current IPlatformFile implementation does not support returning error messages"
    ;
  }
  else {
    pwVar2 = 
    L"The current IPlatformFile implementation does not support the EReadFlags::AllowDelete flag";
  }
  ::FString::FString(&local_18,pwVar2);
  (__return_storage_ptr__->Variant)._padding_ = (longlong)local_18.Data.AllocatorInstance.Data;
  *(int *)&(__return_storage_ptr__->Variant)._padding_ = local_18.Data.ArrayNum;
  *(int *)((longlong)&(__return_storage_ptr__->Variant)._padding_ + 4) = local_18.Data.ArrayMax;
  *(undefined4 *)&(__return_storage_ptr__->Variant)._padding_ = 0;
  (__return_storage_ptr__->Variant).TypeIndex = '\x01';
  return __return_storage_ptr__;
}

// OpenAsyncRead @ 14164f5e0

IAsyncReadFileHandle * __thiscall
IPlatformFile::OpenAsyncRead(IPlatformFile *this,wchar_t *param_1,bool param_2)

{
  FGenericAsyncReadFileHandle *pFVar1;
  
  pFVar1 = ::operator_new(0xa8);
  if (pFVar1 != (FGenericAsyncReadFileHandle *)0x0) {
    pFVar1 = FGenericAsyncReadFileHandle::FGenericAsyncReadFileHandle(pFVar1,this,param_1,param_2);
    return (IAsyncReadFileHandle *)pFVar1;
  }
  return (IAsyncReadFileHandle *)0x0;
}

// OpenMapped @ 14164f670

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

IMappedFileHandle * __thiscall IPlatformFile::OpenMapped(IPlatformFile *this,wchar_t *param_1)

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
  (**(code **)((longlong)*this + 0x1b0))(this,local_38,param_1,0);
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

// OpenMappedEx @ 14164f7e0

TValueOrError<TUniquePtr<IMappedFileHandle,TDefaultDelete<IMappedFileHandle>_>,FFileSystemError> *
__thiscall
IPlatformFile::OpenMappedEx
          (IPlatformFile *this,
          TValueOrError<TUniquePtr<IMappedFileHandle,TDefaultDelete<IMappedFileHandle>_>,FFileSystemError>
          *__return_storage_ptr__,wchar_t *param_1,EOpenReadFlags param_2,long64 param_3)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"OpenMappedEx is not implemented on this platform");
  (__return_storage_ptr__->Variant)._padding_ = (longlong)local_18.Data.AllocatorInstance.Data;
  *(int *)&(__return_storage_ptr__->Variant)._padding_ = local_18.Data.ArrayNum;
  *(int *)((longlong)&(__return_storage_ptr__->Variant)._padding_ + 4) = local_18.Data.ArrayMax;
  *(undefined4 *)&(__return_storage_ptr__->Variant)._padding_ = 0;
  (__return_storage_ptr__->Variant).TypeIndex = '\x01';
  return __return_storage_ptr__;
}

// OpenRead @ 14164f870

TValueOrError<TUniquePtr<IFileHandle,TDefaultDelete<IFileHandle>_>,FFileSystemError> * __thiscall
IPlatformFile::OpenRead
          (IPlatformFile *this,
          TValueOrError<TUniquePtr<IFileHandle,TDefaultDelete<IFileHandle>_>,FFileSystemError>
          *__return_storage_ptr__,wchar_t *param_1,EOpenReadFlags param_2)

{
  longlong lVar1;
  wchar_t *pwVar2;
  FString local_18;
  
  if ((param_2 & AllowDelete) == None) {
    lVar1 = (**(code **)((longlong)*this + 0xe8))(this,param_1,param_2 & AllowWrite);
    if (lVar1 != 0) {
      (__return_storage_ptr__->Variant)._padding_ = lVar1;
      (__return_storage_ptr__->Variant).TypeIndex = '\0';
      return __return_storage_ptr__;
    }
    pwVar2 = 
    L"[Unknown Error] Current IPlatformFile implementation does not support returning error messages"
    ;
  }
  else {
    pwVar2 = 
    L"The current IPlatformFile implementation does not support the EReadFlags::AllowDelete flag";
  }
  ::FString::FString(&local_18,pwVar2);
  (__return_storage_ptr__->Variant)._padding_ = (longlong)local_18.Data.AllocatorInstance.Data;
  *(int *)&(__return_storage_ptr__->Variant)._padding_ = local_18.Data.ArrayNum;
  *(int *)((longlong)&(__return_storage_ptr__->Variant)._padding_ + 4) = local_18.Data.ArrayMax;
  *(undefined4 *)&(__return_storage_ptr__->Variant)._padding_ = 0;
  (__return_storage_ptr__->Variant).TypeIndex = '\x01';
  return __return_storage_ptr__;
}

// OpenReadNoBuffering @ 14164f900

TValueOrError<TUniquePtr<IFileHandle,TDefaultDelete<IFileHandle>_>,FFileSystemError> * __thiscall
IPlatformFile::OpenReadNoBuffering
          (IPlatformFile *this,
          TValueOrError<TUniquePtr<IFileHandle,TDefaultDelete<IFileHandle>_>,FFileSystemError>
          *__return_storage_ptr__,wchar_t *param_1,EOpenReadFlags param_2)

{
  (**(code **)((longlong)*this + 0xf0))();
  return __return_storage_ptr__;
}

// OpenReadNoBuffering @ 14164f930

IFileHandle * __thiscall
IPlatformFile::OpenReadNoBuffering(IPlatformFile *this,wchar_t *param_1,bool param_2)

{
  IFileHandle *pIVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014164f933. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pIVar1 = (IFileHandle *)(**(code **)((longlong)*this + 0xe8))();
  return pIVar1;
}

// OpenWrite @ 14164f940

TValueOrError<TUniquePtr<IFileHandle,TDefaultDelete<IFileHandle>_>,FFileSystemError> * __thiscall
IPlatformFile::OpenWrite
          (IPlatformFile *this,
          TValueOrError<TUniquePtr<IFileHandle,TDefaultDelete<IFileHandle>_>,FFileSystemError>
          *__return_storage_ptr__,wchar_t *param_1,EOpenWriteFlags param_2)

{
  DWORD DVar1;
  longlong lVar2;
  FString local_18;
  
  lVar2 = (**(code **)((longlong)*this + 0x110))(this,param_1,param_2 >> 1 & 1,param_2 & AllowRead);
  if (lVar2 != 0) {
    (__return_storage_ptr__->Variant)._padding_ = lVar2;
    (__return_storage_ptr__->Variant).TypeIndex = '\0';
    return __return_storage_ptr__;
  }
  DVar1 = FWindowsPlatformMisc::GetLastError();
  ::FString::PrintfImpl(&local_18,L"Failed to open file \'%s\' for writing");
  (__return_storage_ptr__->Variant)._padding_ = (longlong)local_18.Data.AllocatorInstance.Data;
  *(int *)((longlong)&(__return_storage_ptr__->Variant)._padding_ + 4) = local_18.Data.ArrayMax;
  *(int *)&(__return_storage_ptr__->Variant)._padding_ = local_18.Data.ArrayNum;
  *(DWORD *)&(__return_storage_ptr__->Variant)._padding_ = DVar1;
  (__return_storage_ptr__->Variant).TypeIndex = '\x01';
  return __return_storage_ptr__;
}

// SendMessageToServer @ 141659d50

bool __thiscall
IPlatformFile::SendMessageToServer
          (IPlatformFile *this,wchar_t *param_1,IFileServerMessageHandler *param_2)

{
  return false;
}

// SetAsyncMinimumPriority @ 14165cdf0

/* WARNING: Enum "EAsyncIOPriorityAndFlags": Some values do not have unique names */

void __thiscall
IPlatformFile::SetAsyncMinimumPriority(IPlatformFile *this,EAsyncIOPriorityAndFlags param_1)

{
  return;
}

// SetCreatePublicFiles @ 14165ceb0

void __thiscall IPlatformFile::SetCreatePublicFiles(IPlatformFile *this,bool param_1)

{
  return;
}

// SetMarkOfTheWeb @ 14165daa0

bool __thiscall
IPlatformFile::SetMarkOfTheWeb
          (IPlatformFile *this,TStringView<wchar_t> *param_1,bool param_2,FString *param_3)

{
  return false;
}

// SetSandboxEnabled @ 14165e640

void __thiscall IPlatformFile::SetSandboxEnabled(IPlatformFile *this,bool param_1)

{
  return;
}

// ShouldBeUsed @ 141660300

bool __thiscall
IPlatformFile::ShouldBeUsed(IPlatformFile *this,IPlatformFile *param_1,wchar_t *param_2)

{
  return false;
}

// Tick @ 141664160

void __thiscall IPlatformFile::Tick(IPlatformFile *this)

{
  return;
}

// GetPlatformPhysical @ 141aacd10

IPlatformFile * __cdecl IPlatformFile::GetPlatformPhysical(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      IPlatformFile((IPlatformFile *)&::Singleton);
      ::Singleton = (FWindowsPlatformFile)&___7FWindowsPlatformFile__6B_;
      atexit(`IPlatformFile::GetPlatformPhysical'::__l2::_dynamic_atexit_destructor_for__Singleton__
            );
      _Init_thread_footer(&::_TSS0);
      return (IPlatformFile *)&::Singleton;
    }
  }
  return (IPlatformFile *)&::Singleton;
}

