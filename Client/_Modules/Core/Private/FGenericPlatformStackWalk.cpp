// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 14

// CaptureStackBackTrace @ 14162df00

uint __cdecl
FGenericPlatformStackWalk::CaptureStackBackTrace(ulong64 *param_1,uint param_2,void *param_3)

{
  return 0;
}

// CaptureThreadStackBackTrace @ 14162dfa0

uint __cdecl
FGenericPlatformStackWalk::CaptureThreadStackBackTrace
          (ulong64 param_1,ulong64 *param_2,uint param_3,void *param_4)

{
  return 0;
}

// CopyVirtualPathToLocal @ 141630a90

void __cdecl
FGenericPlatformStackWalk::CopyVirtualPathToLocal(char *param_1,int param_2,char *param_3)

{
  char *_Str;
  int iVar1;
  char *_Str_00;
  char *pcVar2;
  char *pcVar3;
  size_t _MaxCount;
  
  _Str_00 = BuildSettings::GetVfsPaths();
  pcVar2 = strchr(_Str_00,0x3b);
  while( true ) {
    if (pcVar2 == (char *)0x0) {
      strncpy(param_1,param_3,(longlong)param_2);
      param_1[(longlong)param_2 - 1] = '\0';
      return;
    }
    _Str = pcVar2 + 1;
    pcVar3 = strchr(_Str,0x3b);
    _MaxCount = (size_t)((int)pcVar2 - (int)_Str_00);
    iVar1 = strncmp(param_3,_Str_00,_MaxCount);
    if (iVar1 == 0) break;
    _Str_00 = pcVar3 + 1;
    pcVar2 = strchr(_Str_00,0x3b);
  }
  iVar1 = ((int)pcVar3 - (int)_Str) + 1;
  if (param_2 < iVar1) {
    iVar1 = param_2;
  }
  strncpy(param_1,_Str,(longlong)iVar1);
  param_1[(longlong)iVar1 - 1] = '\0';
  TCString<char>::StrncatTruncateDest(param_1,param_2,param_3 + _MaxCount);
  return;
}

// GetStack @ 141646010

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TArray<FProgramCounterSymbolInfo,TSizedDefaultAllocator<32>_> * __cdecl
FGenericPlatformStackWalk::GetStack
          (TArray<FProgramCounterSymbolInfo,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          int param_1,int param_2,void *param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  TArray<FProgramCounterSymbolInfo,TSizedDefaultAllocator<32>_> *pTVar5;
  uint uVar6;
  ulong64 *puVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined1 auStack_398 [32];
  longlong local_378;
  longlong local_370;
  ulong64 local_368 [100];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_398;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  memset(local_368,0,800);
  uVar4 = param_1 + 2;
  if (param_3 != (void *)0x0) {
    uVar4 = param_1;
  }
  uVar6 = uVar4 + param_2;
  if (100 < (int)uVar6) {
    uVar6 = 100;
  }
  uVar6 = FWindowsPlatformStackWalk::CaptureStackBackTrace(local_368,uVar6,param_3);
  if (uVar4 < uVar6) {
    puVar7 = local_368 + uVar4;
    uVar9 = (ulonglong)(uVar6 - uVar4);
    do {
      uVar4 = __return_storage_ptr__->ArrayNum;
      if (uVar4 == __return_storage_ptr__->ArrayMax) {
        uVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0xc18,8,&__return_storage_ptr__->AllocatorInstance,
                           &__return_storage_ptr__->ArrayMax);
      }
      pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data;
      lVar8 = (longlong)(int)uVar4 * 0xc18;
      __return_storage_ptr__->ArrayNum = uVar4 + 1;
      DefaultConstructItems<FProgramCounterSymbolInfo,int>(pFVar1 + lVar8,1);
      uVar6 = 0;
      if ((int)uVar4 < __return_storage_ptr__->ArrayNum) {
        uVar6 = ~uVar4 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (local_378 = (longlong)(int)uVar4, local_370 = (longlong)__return_storage_ptr__->ArrayNum,
         bVar3 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TArray<FProgramCounterSymbolInfo,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
        return pTVar5;
      }
      FWindowsPlatformStackWalk::ProgramCounterToSymbolInfo
                (*puVar7,(FProgramCounterSymbolInfo *)
                         ((__return_storage_ptr__->AllocatorInstance).Data + lVar8));
      puVar7 = puVar7 + 1;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  return __return_storage_ptr__;
}

// GetSymbolMetaData @ 141646c20

TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_> * __cdecl
FGenericPlatformStackWalk::GetSymbolMetaData
          (TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
           *__return_storage_ptr__)

{
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x18 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x38 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x48 = 0;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x20 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x28 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x2c = 0x80;
  *(undefined4 *)&__return_storage_ptr__->field_0x34 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x30 = 0xffffffff;
  *(undefined8 *)&__return_storage_ptr__->field_0x40 = 0;
  return __return_storage_ptr__;
}

// Init @ 141647b70

void __cdecl FGenericPlatformStackWalk::Init(void)

{
  code *pcVar1;
  bool bVar2;
  
  if (GConfig == (FConfigCacheIni *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("GConfig",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\GenericPlatform\\GenericPlatformStackWalk.cpp"
                       ,0x25,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FConfigCacheIni::GetBool
            (GConfig,L"Core.System",L"DetailedCallstacksInNonMonolithicBuilds",
             &GWantsDetailedCallstacksInNonMonolithicBuilds,&GEngineIni);
  return;
}

// ProgramCounterToHumanReadableString @ 1416516c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
FGenericPlatformStackWalk::ProgramCounterToHumanReadableString
          (int param_1,ulong64 param_2,char *param_3,ulong64 param_4,FGenericCrashContext *param_5)

{
  bool bVar1;
  undefined1 auStack_c58 [32];
  FProgramCounterSymbolInfo local_c38;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c58;
  if ((param_3 == (char *)0x0) || (param_4 == 0)) {
    bVar1 = false;
  }
  else {
    FProgramCounterSymbolInfo::FProgramCounterSymbolInfo(&local_c38);
    FWindowsPlatformStackWalk::ProgramCounterToSymbolInfo(param_2,&local_c38);
    bVar1 = SymbolInfoToHumanReadableString(&local_c38,param_3,param_4);
  }
  return bVar1;
}

// StackWalkAndDump @ 141660830

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
FGenericPlatformStackWalk::StackWalkAndDump(char *param_1,ulong64 param_2,int param_3,void *param_4)

{
  ulong64 uVar1;
  uint uVar2;
  uint uVar3;
  size_t sVar4;
  char *pcVar5;
  int iVar6;
  char cVar7;
  char *pcVar8;
  ulong64 *puVar9;
  ulonglong uVar10;
  undefined1 auStack_f98 [32];
  FProgramCounterSymbolInfo local_f78;
  ulong64 local_358 [100];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_f98;
  memset(local_358,0,800);
  uVar2 = param_3 + 2;
  if (param_4 != (void *)0x0) {
    uVar2 = param_3;
  }
  uVar3 = FWindowsPlatformStackWalk::CaptureStackBackTrace(local_358,100,param_4);
  if (uVar2 < uVar3) {
    puVar9 = local_358 + uVar2;
    uVar10 = (ulonglong)(uVar3 - uVar2);
    do {
      uVar1 = *puVar9;
      if ((param_1 != (char *)0x0) && (param_2 != 0)) {
        FProgramCounterSymbolInfo::FProgramCounterSymbolInfo(&local_f78);
        FWindowsPlatformStackWalk::ProgramCounterToSymbolInfo(uVar1,&local_f78);
        SymbolInfoToHumanReadableString(&local_f78,param_1,param_2);
      }
      pcVar8 = "\r\n";
      sVar4 = strlen(param_1);
      iVar6 = (int)sVar4 + 1;
      if (iVar6 < (int)param_2) {
        cVar7 = '\r';
        pcVar5 = param_1 + (int)sVar4;
        do {
          *pcVar5 = cVar7;
          pcVar8 = pcVar8 + 1;
          cVar7 = *pcVar8;
          pcVar5 = pcVar5 + 1;
          iVar6 = iVar6 + 1;
          if (cVar7 == '\0') break;
        } while (iVar6 < (int)param_2);
        *pcVar5 = '\0';
      }
      puVar9 = puVar9 + 1;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  return;
}

// StackWalkAndDump @ 141660950

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
FGenericPlatformStackWalk::StackWalkAndDump
          (char *param_1,ulong64 param_2,void *param_3,void *param_4)

{
  ulong64 uVar1;
  uint uVar2;
  longlong lVar3;
  size_t sVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  char cVar8;
  char *pcVar9;
  undefined1 auStack_f88 [32];
  FProgramCounterSymbolInfo local_f68;
  ulong64 local_348 [100];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_f88;
  uVar2 = FWindowsPlatformStackWalk::CaptureStackBackTrace(local_348,100,param_4);
  iVar7 = 0;
  if ((param_3 != (void *)0x0) && (iVar6 = 0, iVar7 = 0, 0 < (int)uVar2)) {
    lVar3 = 0;
    do {
      iVar7 = iVar6;
      if ((void *)local_348[lVar3] == param_3) break;
      iVar6 = iVar6 + 1;
      lVar3 = lVar3 + 1;
      iVar7 = 0;
    } while (lVar3 < (int)uVar2);
  }
  lVar3 = (longlong)iVar7;
  do {
    if ((int)uVar2 <= lVar3) {
      return;
    }
    uVar1 = local_348[lVar3];
    if ((param_1 != (char *)0x0) && (param_2 != 0)) {
      FProgramCounterSymbolInfo::FProgramCounterSymbolInfo(&local_f68);
      FWindowsPlatformStackWalk::ProgramCounterToSymbolInfo(uVar1,&local_f68);
      SymbolInfoToHumanReadableString(&local_f68,param_1,param_2);
    }
    pcVar9 = "\r\n";
    sVar4 = strlen(param_1);
    iVar7 = (int)sVar4 + 1;
    if (iVar7 < (int)param_2) {
      cVar8 = '\r';
      pcVar5 = param_1 + (int)sVar4;
      do {
        *pcVar5 = cVar8;
        pcVar9 = pcVar9 + 1;
        cVar8 = *pcVar9;
        pcVar5 = pcVar5 + 1;
        iVar7 = iVar7 + 1;
        if (cVar8 == '\0') break;
      } while (iVar7 < (int)param_2);
      *pcVar5 = '\0';
    }
    lVar3 = lVar3 + 1;
  } while( true );
}

// StackWalkAndDumpEx @ 141660aa0

void __cdecl
FGenericPlatformStackWalk::StackWalkAndDumpEx
          (char *param_1,ulong64 param_2,int param_3,uint param_4,void *param_5)

{
  FWindowsPlatformStackWalk::StackWalkAndDump(param_1,param_2,param_3,param_5);
  return;
}

// StackWalkAndDumpEx @ 141660ab0

void __cdecl
FGenericPlatformStackWalk::StackWalkAndDumpEx
          (char *param_1,ulong64 param_2,void *param_3,uint param_4,void *param_5)

{
  FWindowsPlatformStackWalk::StackWalkAndDump(param_1,param_2,param_3,param_5);
  return;
}

// SymbolInfoToHumanReadableString @ 1416632c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
FGenericPlatformStackWalk::SymbolInfoToHumanReadableString
          (FProgramCounterSymbolInfo *param_1,char *param_2,ulong64 param_3)

{
  char *pcVar1;
  char *pcVar2;
  size_t sVar3;
  size_t sVar4;
  int iVar5;
  FProgramCounterSymbolInfo *_Str;
  char cVar6;
  undefined1 auStack_668 [32];
  int local_648;
  char local_638 [1024];
  char local_238;
  char local_237 [255];
  char local_138;
  char local_137 [255];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_668;
  if ((param_2 == (char *)0x0) || (param_3 == 0)) {
    return false;
  }
  memset(local_638,0,0x400);
  pcVar1 = strrchr(param_1->ModuleName,0x5c);
  pcVar2 = strrchr(param_1->ModuleName,0x2f);
  if (pcVar2 < pcVar1) {
    pcVar2 = pcVar1;
  }
  _Str = (FProgramCounterSymbolInfo *)(pcVar2 + 1);
  if (pcVar2 == (char *)0x0) {
    _Str = param_1;
  }
  memset(&local_238,0,0x100);
  TCString<char>::SnprintfImpl(&local_238,0x100,"0x%016llx ");
  pcVar2 = &local_238;
  if (local_238 != '\0') {
    sVar3 = strlen(local_638);
    iVar5 = (int)sVar3 + 1;
    if (iVar5 < 0x400) {
      pcVar1 = local_638 + (int)sVar3;
      do {
        *pcVar1 = local_238;
        pcVar2 = pcVar2 + 1;
        local_238 = *pcVar2;
        pcVar1 = pcVar1 + 1;
        iVar5 = iVar5 + 1;
        if (local_238 == '\0') break;
      } while (iVar5 < 0x400);
      *pcVar1 = '\0';
    }
  }
  sVar3 = strlen(_Str->ModuleName);
  if (0 < (int)sVar3) {
    cVar6 = _Str->ModuleName[0];
    if (cVar6 != '\0') {
      sVar3 = strlen(local_638);
      iVar5 = (int)sVar3 + 1;
      if (iVar5 < 0x400) {
        pcVar2 = local_638 + (int)sVar3;
        do {
          *pcVar2 = cVar6;
          _Str = (FProgramCounterSymbolInfo *)(_Str->ModuleName + 1);
          cVar6 = _Str->ModuleName[0];
          pcVar2 = pcVar2 + 1;
          iVar5 = iVar5 + 1;
          if (cVar6 == '\0') break;
        } while (iVar5 < 0x400);
        *pcVar2 = '\0';
      }
    }
    pcVar2 = "!";
    sVar3 = strlen(local_638);
    iVar5 = (int)sVar3 + 1;
    if (iVar5 < 0x400) {
      pcVar1 = local_638 + (int)sVar3;
      cVar6 = '!';
      do {
        *pcVar1 = cVar6;
        pcVar2 = pcVar2 + 1;
        cVar6 = *pcVar2;
        pcVar1 = pcVar1 + 1;
        iVar5 = iVar5 + 1;
        if (cVar6 == '\0') break;
      } while (iVar5 < 0x400);
      *pcVar1 = '\0';
    }
  }
  pcVar2 = param_1->FunctionName;
  sVar3 = strlen(pcVar2);
  if ((int)sVar3 < 1) {
    pcVar2 = "UnknownFunction";
    sVar4 = strlen(local_638);
    iVar5 = (int)sVar4 + 1;
    if (0x3ff < iVar5) goto LAB_14166354e;
    pcVar1 = local_638 + (int)sVar4;
    cVar6 = 'U';
    do {
      *pcVar1 = cVar6;
      pcVar2 = pcVar2 + 1;
      cVar6 = *pcVar2;
      pcVar1 = pcVar1 + 1;
      iVar5 = iVar5 + 1;
      if (cVar6 == '\0') break;
    } while (iVar5 < 0x400);
  }
  else {
    cVar6 = *pcVar2;
    if (cVar6 == '\0') goto LAB_14166354e;
    sVar4 = strlen(local_638);
    iVar5 = (int)sVar4 + 1;
    if (0x3ff < iVar5) goto LAB_14166354e;
    pcVar1 = local_638 + (int)sVar4;
    do {
      *pcVar1 = cVar6;
      pcVar2 = pcVar2 + 1;
      cVar6 = *pcVar2;
      pcVar1 = pcVar1 + 1;
      iVar5 = iVar5 + 1;
      if (cVar6 == '\0') break;
    } while (iVar5 < 0x400);
  }
  *pcVar1 = '\0';
LAB_14166354e:
  sVar4 = strlen(param_1->Filename);
  if (((int)sVar4 < 1) || (iVar5 = param_1->LineNumber, iVar5 < 1)) {
    pcVar2 = " []";
    sVar4 = strlen(local_638);
    iVar5 = (int)sVar4 + 1;
    if (iVar5 < 0x400) {
      pcVar1 = local_638 + (int)sVar4;
      cVar6 = ' ';
      do {
        *pcVar1 = cVar6;
        pcVar2 = pcVar2 + 1;
        cVar6 = *pcVar2;
        pcVar1 = pcVar1 + 1;
        iVar5 = iVar5 + 1;
        if (cVar6 == '\0') break;
      } while (iVar5 < 0x400);
      *pcVar1 = '\0';
    }
  }
  else {
    memset(&local_138,0,0x100);
    local_648 = iVar5;
    TCString<char>::SnprintfImpl(&local_138,0x100," [%s:%i]");
    pcVar2 = &local_138;
    if (local_138 != '\0') {
      sVar4 = strlen(local_638);
      iVar5 = (int)sVar4 + 1;
      if (iVar5 < 0x400) {
        pcVar1 = local_638 + (int)sVar4;
        do {
          *pcVar1 = local_138;
          pcVar2 = pcVar2 + 1;
          local_138 = *pcVar2;
          pcVar1 = pcVar1 + 1;
          iVar5 = iVar5 + 1;
          if (local_138 == '\0') break;
        } while (iVar5 < 0x400);
        *pcVar1 = '\0';
      }
    }
  }
  pcVar2 = local_638;
  if (local_638[0] != '\0') {
    sVar4 = strlen(param_2);
    iVar5 = (int)sVar4 + 1;
    if (iVar5 < (int)param_3) {
      pcVar1 = param_2 + (int)sVar4;
      do {
        *pcVar1 = local_638[0];
        pcVar2 = pcVar2 + 1;
        local_638[0] = *pcVar2;
        pcVar1 = pcVar1 + 1;
        iVar5 = iVar5 + 1;
        if (local_638[0] == '\0') break;
      } while (iVar5 < (int)param_3);
      *pcVar1 = '\0';
    }
  }
  return 0 < (int)sVar3;
}

// SymbolInfoToHumanReadableStringEx @ 1416636e0

bool __cdecl
FGenericPlatformStackWalk::SymbolInfoToHumanReadableStringEx
          (FProgramCounterSymbolInfoEx *param_1,FString *param_2)

{
  int *piVar1;
  FScriptContainerElement *_Src;
  bool bVar2;
  bool bVar3;
  ForAnyElementType _Src_00;
  int iVar4;
  FScriptContainerElement *pFVar5;
  longlong lVar6;
  FString *pFVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  FScriptContainerElement *pFVar11;
  FString local_58;
  FString local_48;
  FString local_38;
  
  _Src = (param_1->ModuleName).Data.AllocatorInstance.Data;
  iVar9 = (param_1->ModuleName).Data.ArrayNum;
  pFVar11 = _Src + (longlong)iVar9 * 2;
  pFVar5 = pFVar11;
  while (pFVar5 != _Src) {
    pFVar5 = pFVar5 + -2;
    if (*(short *)pFVar5 == 0x5c) {
      lVar6 = (longlong)pFVar5 - (longlong)_Src >> 1;
      goto LAB_141663740;
    }
  }
  lVar6 = 0xffffffff;
  iVar4 = -1;
  do {
    if (pFVar11 == _Src) {
      iVar8 = -1;
      goto LAB_141663756;
    }
LAB_141663740:
    iVar4 = (int)lVar6;
    pFVar11 = pFVar11 + -2;
  } while (*(short *)pFVar11 != 0x2f);
  iVar8 = (int)((longlong)pFVar11 - (longlong)_Src >> 1);
LAB_141663756:
  if (iVar8 < iVar4) {
    iVar8 = iVar4;
  }
  if (iVar8 < 1) {
    local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_48.Data.ArrayNum = iVar9;
    if (iVar9 == 0) {
      local_48.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar9,0,(ForAnyElementType *)&local_48,iVar9,&local_48.Data.ArrayMax);
      memcpy(local_48.Data.AllocatorInstance.Data,_Src,(longlong)iVar9 * 2);
    }
    pFVar7 = &local_48;
    bVar3 = false;
    bVar2 = true;
  }
  else {
    pFVar7 = ::FString::RightChop(&param_1->ModuleName,&local_38,iVar8 + 1);
    bVar3 = true;
    bVar2 = false;
  }
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.Data.ArrayNum = (pFVar7->Data).ArrayNum;
  lVar6 = (longlong)local_58.Data.ArrayNum;
  pFVar11 = (pFVar7->Data).AllocatorInstance.Data;
  if (local_58.Data.ArrayNum == 0) {
    local_58.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_58.Data.ArrayNum,0,(ForAnyElementType *)&local_58,local_58.Data.ArrayNum,
               &local_58.Data.ArrayMax);
    memcpy(local_58.Data.AllocatorInstance.Data,pFVar11,lVar6 * 2);
  }
  if ((bVar2) && (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  iVar9 = local_58.Data.ArrayNum;
  _Src_00.Data = local_58.Data.AllocatorInstance.Data;
  if (param_2 != &local_58) {
    iVar4 = (param_2->Data).ArrayMax;
    piVar1 = &(param_2->Data).ArrayMax;
    (param_2->Data).ArrayNum = local_58.Data.ArrayNum;
    if ((local_58.Data.ArrayNum == 0) && (iVar4 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_58.Data.ArrayNum,iVar4,(ForAnyElementType *)param_2,
                 local_58.Data.ArrayNum,piVar1);
      if (iVar9 != 0) {
        memcpy((param_2->Data).AllocatorInstance.Data,_Src_00.Data,(longlong)iVar9 * 2);
      }
    }
  }
  iVar9 = (param_1->FunctionName).Data.ArrayNum;
  iVar4 = iVar9 + -1;
  if (iVar9 == 0) {
    iVar4 = 0;
  }
  iVar9 = 0;
  if (0 < iVar4) {
    ::FString::AppendChars(param_2,L"!",1);
    iVar8 = (param_1->FunctionName).Data.ArrayNum;
    iVar10 = iVar8 + -1;
    if (iVar8 == 0) {
      iVar10 = iVar9;
    }
    ::FString::AppendChars
              (param_2,(wchar_t *)(param_1->FunctionName).Data.AllocatorInstance.Data,iVar10);
  }
  iVar8 = (param_1->Filename).Data.ArrayNum;
  iVar10 = iVar8 + -1;
  if (iVar8 == 0) {
    iVar10 = iVar9;
  }
  if ((0 < iVar10) && (param_1->LineNumber != 0)) {
    ::FString::PrintfImpl(&local_48,L" [%s:%i]");
    iVar8 = local_48.Data.ArrayNum + -1;
    if (local_48.Data.ArrayNum == 0) {
      iVar8 = iVar9;
    }
    ::FString::AppendChars(param_2,(wchar_t *)local_48.Data.AllocatorInstance.Data,iVar8);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  return 0 < iVar4;
}

// WantsDetailedCallstacksInNonMonolithicBuilds @ 14166b6a0

bool __cdecl FGenericPlatformStackWalk::WantsDetailedCallstacksInNonMonolithicBuilds(void)

{
  return GWantsDetailedCallstacksInNonMonolithicBuilds;
}

