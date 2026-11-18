// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 5

// ~FGenericProcessSentinel @ 141620d60

void __thiscall FGenericProcessSentinel::~FGenericProcessSentinel(FGenericProcessSentinel *this)

{
  FArchive *pFVar1;
  FScriptContainerElement *pFVar2;
  IFileManager *pIVar3;
  wchar_t *pwVar4;
  
  this->_padding_ = (longlong)&___7FGenericProcessSentinel__6B_;
  pFVar1 = (this->FileHandle).Ptr;
  if (pFVar1 != (FArchive *)0x0) {
    (this->FileHandle).Ptr = (FArchive *)0x0;
    (*(code *)**(undefined8 **)pFVar1)(pFVar1,1);
  }
  pIVar3 = IFileManager::Get();
  if ((this->SavedFilename).Data.ArrayNum == 0) {
    pwVar4 = L"";
  }
  else {
    pwVar4 = (wchar_t *)(this->SavedFilename).Data.AllocatorInstance.Data;
  }
  (**(code **)((longlong)*pIVar3 + 0x38))(pIVar3,pwVar4,0,0,0);
  pFVar1 = (this->FileHandle).Ptr;
  if (pFVar1 != (FArchive *)0x0) {
    (*(code *)**(undefined8 **)pFVar1)(pFVar1,1);
  }
  pFVar2 = (this->SavedFilename).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
    return;
  }
  return;
}

// CreateSentinelFile @ 141633350

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FGenericProcessSentinel::CreateSentinelFile
          (FGenericProcessSentinel *this,wchar_t *param_1,FString *param_2)

{
  uint uVar1;
  FString *pFVar2;
  FScriptContainerElement *pFVar3;
  char cVar4;
  int iVar5;
  undefined8 *puVar6;
  IFileManager *pIVar7;
  FPlatformFileManager *this_00;
  IPlatformFile *pIVar8;
  longlong *plVar9;
  size_t sVar10;
  wchar_t *pwVar11;
  ForAnyElementType FVar12;
  wchar_t *_Str;
  undefined1 auStack_118 [32];
  undefined1 local_f8;
  FScriptContainerElement local_e8 [128];
  ForAnyElementType local_68;
  FScriptContainerElement *local_60;
  int local_58;
  void *local_48 [2];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_118;
  puVar6 = (undefined8 *)(**(code **)(this->_padding_ + 8))(this,local_48,param_1);
  pFVar2 = &this->SavedFilename;
  if (pFVar2 != (FString *)puVar6) {
    pFVar3 = (pFVar2->Data).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)*puVar6;
    *puVar6 = 0;
    (this->SavedFilename).Data.ArrayNum = *(int *)(puVar6 + 1);
    (this->SavedFilename).Data.ArrayMax = *(int *)((longlong)puVar6 + 0xc);
    puVar6[1] = 0;
  }
  if (local_48[0] != (void *)0x0) {
    FMemory::Free(local_48[0]);
  }
  pIVar7 = IFileManager::Get();
  _Str = L"";
  if ((this->SavedFilename).Data.ArrayNum == 0) {
    pwVar11 = L"";
  }
  else {
    pwVar11 = (wchar_t *)(pFVar2->Data).AllocatorInstance.Data;
  }
  cVar4 = (**(code **)((longlong)*pIVar7 + 0x50))(pIVar7,pwVar11);
  if (cVar4 != '\0') {
    pIVar7 = IFileManager::Get();
    if ((this->SavedFilename).Data.ArrayNum == 0) {
      pwVar11 = L"";
    }
    else {
      pwVar11 = (wchar_t *)(this->SavedFilename).Data.AllocatorInstance.Data;
    }
    local_f8 = 0;
    cVar4 = (**(code **)((longlong)*pIVar7 + 0x38))(pIVar7,pwVar11,0,0);
    if (cVar4 == '\0') {
      if ((byte)LogHAL._0_1_ < 2) {
        return false;
      }
      UE::Logging::Private::BasicLog<2>
                (&`public:_virtual_bool___cdecl_FGenericProcessSentinel::CreateSentinelFile(wchar_t_const*___ptr64,FString_const&___ptr64)___ptr64'
                  ::__l9::LOG_Static,(FLogCategoryBase *)&LogHAL);
      return false;
    }
  }
  this_00 = FPlatformFileManager::Get();
  pIVar8 = FPlatformFileManager::GetPlatformFile(this_00);
  if ((this->SavedFilename).Data.ArrayNum == 0) {
    pwVar11 = L"";
  }
  else {
    pwVar11 = (wchar_t *)(this->SavedFilename).Data.AllocatorInstance.Data;
  }
  plVar9 = (longlong *)(**(code **)((longlong)*pIVar8 + 0x110))(pIVar8,pwVar11,0,0);
  if (plVar9 == (longlong *)0x0) {
    return false;
  }
  FWindowsPlatformProcess::GetCurrentProcessId();
  iVar5 = TCString<char>::SprintfImpl((char *)local_48,"%d\n");
  (**(code **)(*plVar9 + 0x30))(plVar9,local_48,(longlong)iVar5);
  local_68.Data = (FScriptContainerElement *)0x0;
  if (((param_2->Data).ArrayNum == 0) ||
     (_Str = (wchar_t *)(param_2->Data).AllocatorInstance.Data,
     (FScriptContainerElement *)_Str != (FScriptContainerElement *)0x0)) {
    sVar10 = wcslen(_Str);
    local_58 = UE::Core::Private::GetConvertedLength((uchar *)0x0,_Str,(int)sVar10);
    uVar1 = local_58 + 1;
    FVar12.Data = (FScriptContainerElement *)0x0;
    if (0x80 < uVar1) {
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_68,0,uVar1,1);
      FVar12.Data = local_68.Data;
    }
    local_60 = local_e8;
    if (FVar12.Data != (FScriptContainerElement *)0x0) {
      local_60 = FVar12.Data;
    }
    UE::Core::Private::FTCHARToUTF8_Convert::Convert<wchar_t>
              ((uchar *)local_60,uVar1,_Str,(int)sVar10 + 1);
  }
  else {
    local_60 = (FScriptContainerElement *)0x0;
    local_58 = 0;
  }
  (**(code **)(*plVar9 + 0x30))(plVar9,local_60,(longlong)local_58);
  (**(code **)(*plVar9 + 0x38))(plVar9,1);
  if (local_68.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data);
  }
  return true;
}

// DoesSentinelFileExistImpl @ 1416367a0

bool __thiscall
FGenericProcessSentinel::DoesSentinelFileExistImpl
          (FGenericProcessSentinel *this,wchar_t *param_1,FString *param_2)

{
  FScriptContainerElement *pFVar1;
  bool bVar2;
  int iVar3;
  IFileManager *pIVar4;
  ForAnyElementType _Str;
  wchar_t *pwVar5;
  FString *this_00;
  wchar_t *pwVar6;
  FProcHandle local_res8;
  uint uVar7;
  FString local_68;
  FString local_58;
  FString local_48;
  wchar_t *local_38;
  int local_30;
  
  (**(code **)(this->_padding_ + 8))(this,&local_38);
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pwVar6 = L"";
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  this_00 = &local_48;
  if (param_2 != (FString *)0x0) {
    this_00 = param_2;
  }
  pwVar5 = L"";
  if (local_30 != 0) {
    pwVar5 = local_38;
  }
  bVar2 = FFileHelper::LoadFileToString(this_00,pwVar5,None,0);
  if (bVar2) {
    uVar7 = 0;
    iVar3 = ::FString::Find(this_00,L"\n",1,IgnoreCase,FromStart,-1);
    if (0 < iVar3) {
      ::FString::Mid(this_00,&local_58,0,iVar3);
      _Str.Data = (FScriptContainerElement *)L"";
      if (local_58.Data.ArrayNum != 0) {
        _Str.Data = local_58.Data.AllocatorInstance.Data;
      }
      _wtoi((wchar_t *)_Str.Data);
      ::FString::RightChop(this_00,&local_68,iVar3 + 1);
      if (this_00 != &local_68) {
        pFVar1 = (this_00->Data).AllocatorInstance.Data;
        if (pFVar1 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar1);
        }
        (this_00->Data).AllocatorInstance.Data = local_68.Data.AllocatorInstance.Data;
        (this_00->Data).ArrayNum = local_68.Data.ArrayNum;
        (this_00->Data).ArrayMax = local_68.Data.ArrayMax;
        local_68.Data.ArrayNum = 0;
        local_68.Data.ArrayMax = 0;
        local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
      FWindowsPlatformProcess::OpenProcess((uint)&local_res8);
      bVar2 = FWindowsPlatformProcess::IsProcRunning(&local_res8);
      if (bVar2) {
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        bVar2 = true;
        goto LAB_14163692e;
      }
      pIVar4 = IFileManager::Get();
      if ((this->SavedFilename).Data.ArrayNum != 0) {
        pwVar6 = (wchar_t *)(this->SavedFilename).Data.AllocatorInstance.Data;
      }
      (**(code **)((longlong)*pIVar4 + 0x38))(pIVar4,pwVar6,0,0,uVar7 & 0xffffff00);
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
    }
  }
  bVar2 = false;
LAB_14163692e:
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_38 != (wchar_t *)0x0) {
    FMemory::Free(local_38);
  }
  return bVar2;
}

// OnCrash @ 14164f040

void __thiscall FGenericProcessSentinel::OnCrash(FGenericProcessSentinel *this)

{
  FArchive *pFVar1;
  IFileManager *pIVar2;
  wchar_t *pwVar3;
  
  pFVar1 = (this->FileHandle).Ptr;
  if (pFVar1 != (FArchive *)0x0) {
    (this->FileHandle).Ptr = (FArchive *)0x0;
    (*(code *)**(undefined8 **)pFVar1)(pFVar1,1);
  }
  pIVar2 = IFileManager::Get();
  if ((this->SavedFilename).Data.ArrayNum == 0) {
    pwVar3 = L"";
  }
  else {
    pwVar3 = (wchar_t *)(this->SavedFilename).Data.AllocatorInstance.Data;
  }
  (**(code **)((longlong)*pIVar2 + 0x38))(pIVar2,pwVar3,0,0,0);
  return;
}

// OnShutdown @ 14164f490

void __thiscall FGenericProcessSentinel::OnShutdown(FGenericProcessSentinel *this)

{
  FArchive *pFVar1;
  IFileManager *pIVar2;
  wchar_t *pwVar3;
  
  pFVar1 = (this->FileHandle).Ptr;
  if (pFVar1 != (FArchive *)0x0) {
    (this->FileHandle).Ptr = (FArchive *)0x0;
    (*(code *)**(undefined8 **)pFVar1)(pFVar1,1);
  }
  pIVar2 = IFileManager::Get();
  if ((this->SavedFilename).Data.ArrayNum == 0) {
    pwVar3 = L"";
  }
  else {
    pwVar3 = (wchar_t *)(this->SavedFilename).Data.AllocatorInstance.Data;
  }
  (**(code **)((longlong)*pIVar2 + 0x38))(pIVar2,pwVar3,0,0,0);
  return;
}

