// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 21

// CaptureStackBackTrace @ 141aa1420

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint __cdecl
FWindowsPlatformStackWalk::CaptureStackBackTrace(ulong64 *param_1,uint param_2,void *param_3)

{
  ushort uVar1;
  uint uVar2;
  undefined1 auStackY_478 [32];
  uint local_448 [4];
  undefined1 local_438 [1024];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_478;
  if ((param_1 == (ulong64 *)0x0) || (param_2 == 0)) {
    uVar2 = 0;
  }
  else {
    local_448[0] = 0;
    if (param_3 == (void *)0x0) {
      uVar2 = param_2;
      if (0x80 < param_2) {
        uVar2 = 0x80;
      }
      uVar1 = RtlCaptureStackBackTrace(0,uVar2,local_438,0);
      if ((uVar1 == 0) && (uVar1 = RtlCaptureStackBackTrace(0,uVar2,local_438,0), uVar1 == 0)) {
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
          InitializeSRWLock((PSRWLOCK)&PrivateLock);
          ::Lock = &PrivateLock;
          _Init_thread_footer(&::_TSS0);
        }
        AcquireSRWLockShared((PSRWLOCK)::Lock);
        OutputDebugStringW(L"RtlCaptureStackBackTrace failed; returning an empty backtrace.");
        ReleaseSRWLockShared((PSRWLOCK)::Lock);
        uVar2 = 0;
      }
      else {
        uVar2 = (uint)uVar1;
        if (uVar1 != 0) {
          memcpy(param_1,local_438,(ulonglong)uVar2 << 3);
        }
      }
      if (uVar2 < param_2) {
        memset(param_1 + uVar1,0,(ulonglong)(ushort)((short)param_2 - uVar1) << 3);
      }
    }
    else {
      FMicrosoftPlatformStackWalk::CaptureStackTraceInternal
                (param_1,param_2,(void *)((longlong)param_3 + 0x10),
                 *(void **)((longlong)param_3 + 0x4e0),local_448);
      uVar2 = local_448[0];
    }
  }
  return uVar2;
}

// CaptureStackTraceByProcess @ 141aa1600

void __cdecl
FWindowsPlatformStackWalk::CaptureStackTraceByProcess
          (ulong64 *param_1,uint param_2,void *param_3,void *param_4,uint *param_5,bool param_6)

{
  HANDLE pvVar1;
  
  if ((!param_6) &&
     (FMicrosoftPlatformStackWalk::CaptureStackTraceInternal
                (param_1,param_2,param_3,param_4,param_5), *param_5 != 0)) {
    return;
  }
  pvVar1 = GetCurrentProcess();
  InitStackWalkingInternal(pvVar1,false);
  CaptureStackTraceExternalProcess(param_1,param_2,param_3,param_4,param_5);
  return;
}

// CaptureThreadStackBackTrace @ 141aa18a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint __cdecl
FWindowsPlatformStackWalk::CaptureThreadStackBackTrace
          (ulong64 param_1,ulong64 *param_2,uint param_3,void *param_4)

{
  bool bVar1;
  DWORD DVar2;
  uint uVar3;
  BOOL BVar4;
  HANDLE hThread;
  HANDLE pvVar5;
  _CONTEXT *p_Var6;
  undefined1 auStackY_558 [32];
  uint local_528 [4];
  _CONTEXT local_518;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_558;
  UE::FRecursiveWordMutex::Lock(&GStackWalkingLock);
  if ((param_2 != (ulong64 *)0x0) && (param_3 != 0)) {
    DVar2 = GetCurrentThreadId();
    if (param_1 == DVar2) {
      uVar3 = CaptureStackBackTrace(param_2,param_3,(void *)0x0);
      if (uVar3 != 0) goto LAB_141aa1a58;
    }
    hThread = OpenThread(0x1b,0,(DWORD)param_1);
    if (hThread != (HANDLE)0x0) {
      DVar2 = SuspendThread(hThread);
      if (DVar2 != 0xffffffff) {
        if (GProcessHandle == (void *)0xffffffffffffffff) {
LAB_141aa1962:
          bVar1 = false;
        }
        else {
          pvVar5 = GetCurrentProcess();
          if (GProcessHandle == pvVar5) goto LAB_141aa1962;
          bVar1 = true;
        }
        local_528[0] = 0;
        if (param_4 == (void *)0x0) {
          memset(&local_518,0,0x4d0);
          local_518.ContextFlags = 0x100001;
          BVar4 = GetThreadContext(hThread,(LPCONTEXT)&local_518);
          if (BVar4 != 0) {
            if (!bVar1) {
              FMicrosoftPlatformStackWalk::CaptureStackTraceInternal
                        (param_2,param_3,&local_518,hThread,local_528);
              if (local_528[0] != 0) goto LAB_141aa1a36;
            }
            pvVar5 = GetCurrentProcess();
            InitStackWalkingInternal(pvVar5,false);
            p_Var6 = &local_518;
            goto LAB_141aa1a1f;
          }
        }
        else {
          *(HANDLE *)((longlong)param_4 + 0x4e0) = hThread;
          if (!bVar1) {
            FMicrosoftPlatformStackWalk::CaptureStackTraceInternal
                      (param_2,param_3,(void *)((longlong)param_4 + 0x10),hThread,local_528);
            if (local_528[0] != 0) goto LAB_141aa1a36;
          }
          pvVar5 = GetCurrentProcess();
          InitStackWalkingInternal(pvVar5,false);
          p_Var6 = (_CONTEXT *)((longlong)param_4 + 0x10);
LAB_141aa1a1f:
          CaptureStackTraceExternalProcess(param_2,param_3,p_Var6,hThread,local_528);
        }
LAB_141aa1a36:
        ResumeThread(hThread);
        CloseHandle(hThread);
        uVar3 = local_528[0];
        goto LAB_141aa1a58;
      }
    }
  }
  uVar3 = 0;
LAB_141aa1a58:
  UE::FRecursiveWordMutex::Unlock(&GStackWalkingLock);
  return uVar3;
}

// EnumerateSymbolInfosForProgramCounter @ 141aa4ed0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
FWindowsPlatformStackWalk::EnumerateSymbolInfosForProgramCounter
          (ulong64 param_1,bool param_2,
          TFunctionRef<void___cdecl(FProgramCounterSymbolInfo_&)> *param_3)

{
  void *pvVar1;
  BOOL BVar2;
  int iVar3;
  uint uVar4;
  HANDLE pvVar5;
  FString *pFVar6;
  size_t sVar7;
  char *pcVar8;
  char cVar9;
  char *pcVar10;
  char *pcVar11;
  ulonglong uVar12;
  int iVar13;
  undefined1 auStack_1818 [32];
  int *local_17f8;
  int *local_17f0;
  HMODULE *local_17e8;
  int local_17d8 [2];
  HMODULE local_17d0;
  TFunctionRef<void___cdecl(FProgramCounterSymbolInfo_&)> *local_17c8;
  FString local_17c0;
  int local_17b0 [6];
  char *pcStack_1798;
  undefined8 local_1790;
  undefined8 local_1788;
  undefined8 uStack_1780;
  undefined8 local_1778;
  char *pcStack_1770;
  undefined8 local_1768;
  FProgramCounterSymbolInfo local_1758;
  undefined4 local_b38;
  undefined1 local_b34 [64];
  char local_af4 [1612];
  int local_4a8 [8];
  longlong local_488;
  undefined4 local_458;
  char local_454 [1036];
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x141aa4ef2;
  local_48 = __security_cookie.value ^ (ulonglong)auStack_1818;
  local_17c8 = param_3;
  UE::FRecursiveWordMutex::Lock(&GStackWalkingLock);
  pvVar5 = GetCurrentProcess();
  InitStackWalkingInternal(pvVar5,false);
  pFVar6 = GetSymbolSearchPath(&local_17c0);
  UE::FRecursiveWordMutex::Lock(&GStackWalkingLock);
  iVar13 = 0;
  local_17d0 = (HMODULE)0x0;
  BVar2 = GetModuleHandleExW(6,(LPCWSTR)param_1,&local_17d0);
  if (BVar2 != 0) {
    LoadSymbolsForModule((HINSTANCE__ *)local_17d0,pFVar6);
  }
  UE::FRecursiveWordMutex::Unlock(&GStackWalkingLock);
  if (local_17c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_17c0.Data.AllocatorInstance.Data);
  }
  FProgramCounterSymbolInfo::FProgramCounterSymbolInfo(&local_1758);
  pvVar1 = GProcessHandle;
  local_1758.ProgramCounter = param_1;
  memset(local_4a8,0,0x458);
  local_4a8[0] = 0x58;
  local_458 = 0x400;
  memset(local_b34,0,0x68c);
  local_b38 = 0x690;
  iVar3 = SymGetModuleInfo64(pvVar1,param_1,&local_b38);
  if (iVar3 != 0) {
    strncpy(local_1758.ModuleName,local_af4,0x400);
    local_1758.ModuleName[0x3ff] = '\0';
  }
  pcVar11 = "()";
  if ((param_2) && (uVar4 = SymAddrIncludeInlineTrace(pvVar1,param_1), uVar4 != 0)) {
    local_17e8 = &local_17d0;
    local_17d8[0] = 0;
    local_17f0 = local_17d8;
    local_17d0 = (HMODULE)((ulonglong)local_17d0 & 0xffffffff00000000);
    local_17f8 = (int *)param_1;
    iVar3 = SymQueryInlineTrace(pvVar1,param_1,0,param_1);
    if ((iVar3 != 0) && (uVar4 != 0)) {
      uVar12 = (ulonglong)uVar4;
      do {
        local_17f8 = local_4a8;
        local_17c0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        iVar3 = SymFromInlineContext(pvVar1,param_1,local_17d8[0],&local_17c0);
        if (iVar3 != 0) {
          strncpy(local_1758.FunctionName,"[Inline Frame] ",0x400);
          cVar9 = local_454[0];
          pcVar10 = local_454;
          local_1758.FunctionName[0x3ff] = '\0';
          if (local_454[0] != '\0') {
            sVar7 = strlen(local_1758.FunctionName);
            iVar3 = (int)sVar7 + 1;
            if (iVar3 < 0x400) {
              pcVar8 = local_1758.FunctionName + (int)sVar7;
              do {
                *pcVar8 = cVar9;
                pcVar10 = pcVar10 + 1;
                cVar9 = *pcVar10;
                pcVar8 = pcVar8 + 1;
                iVar3 = iVar3 + 1;
                if (cVar9 == '\0') break;
              } while (iVar3 < 0x400);
              *pcVar8 = '\0';
            }
          }
          pcVar10 = "()";
          sVar7 = strlen(local_1758.FunctionName);
          iVar3 = (int)sVar7 + 1;
          if (iVar3 < 0x400) {
            pcVar8 = local_1758.FunctionName + (int)sVar7;
            cVar9 = '(';
            do {
              *pcVar8 = cVar9;
              pcVar10 = pcVar10 + 1;
              cVar9 = *pcVar10;
              pcVar8 = pcVar8 + 1;
              iVar3 = iVar3 + 1;
              if (cVar9 == '\0') break;
            } while (iVar3 < 0x400);
            *pcVar8 = '\0';
          }
          local_17b0[2] = 0;
          local_17b0[3] = 0;
          local_17b0[0] = 0x28;
          local_17b0[1] = 0;
          local_1758.OffsetInModule = param_1 - local_488;
          local_1790 = 0;
          local_17f0 = local_17b0;
          local_17f8 = &local_1758.SymbolDisplacement;
          local_17b0[4] = 0;
          local_17b0[5] = 0;
          pcStack_1798 = (char *)0x0;
          iVar3 = SymGetLineFromInlineContext(pvVar1,param_1,local_17d8[0],0);
          if (iVar3 != 0) {
            local_1758.LineNumber = local_17b0[4];
            strncpy(local_1758.Filename,pcStack_1798,0x400);
            local_1758.Filename[0x3ff] = '\0';
            (**(code **)local_17c8)(*(undefined8 *)&local_17c8->field_0x8,&local_1758);
          }
        }
        local_17d8[0] = local_17d8[0] + 1;
        uVar12 = uVar12 - 1;
        param_3 = local_17c8;
      } while (uVar12 != 0);
    }
  }
  iVar3 = SymFromAddr(pvVar1,param_1,0,local_4a8);
  if (iVar3 != 0) {
    for (pcVar10 = local_454; *pcVar10 < ' '; pcVar10 = pcVar10 + 1) {
      iVar13 = iVar13 + 1;
    }
    local_1758.OffsetInModule = param_1 - local_488;
    strncpy(local_1758.FunctionName,local_454 + iVar13,0x400);
    local_1758.FunctionName[0x3ff] = '\0';
    sVar7 = strlen(local_1758.FunctionName);
    iVar13 = (int)sVar7 + 1;
    if (iVar13 < 0x400) {
      pcVar10 = local_1758.FunctionName + (int)sVar7;
      cVar9 = '(';
      do {
        *pcVar10 = cVar9;
        pcVar11 = pcVar11 + 1;
        cVar9 = *pcVar11;
        pcVar10 = pcVar10 + 1;
        iVar13 = iVar13 + 1;
        if (cVar9 == '\0') break;
      } while (iVar13 < 0x400);
      *pcVar10 = '\0';
    }
  }
  uStack_1780 = 0;
  local_1788 = 0x28;
  local_1768 = 0;
  local_1778 = 0;
  pcStack_1770 = (char *)0x0;
  iVar13 = SymGetLineFromAddr64(pvVar1,param_1,&local_1758.SymbolDisplacement,&local_1788);
  if (iVar13 != 0) {
    FGenericPlatformStackWalk::CopyVirtualPathToLocal(local_1758.Filename,0x400,pcStack_1770);
    local_1758.LineNumber = (int)local_1778;
  }
  (**(code **)param_3)(*(undefined8 *)&param_3->field_0x8,&local_1758);
  UE::FRecursiveWordMutex::Unlock(&GStackWalkingLock);
  return;
}

// GetDownstreamStorage @ 141aa8c90

FString * __cdecl FWindowsPlatformStackWalk::GetDownstreamStorage(FString *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  wchar_t *pwVar2;
  bool bVar3;
  FString *pFVar4;
  FString local_38;
  FString local_28;
  FString local_18;
  
  pwVar2 = CrashReporterSettings;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  bVar3 = FConfigCacheIni::GetString
                    (GConfig,pwVar2,L"DownstreamStorage",__return_storage_ptr__,
                     &GEditorPerProjectIni);
  if ((bVar3) && (1 < (__return_storage_ptr__->Data).ArrayNum)) {
    pFVar4 = FPaths::RootDir(&local_28);
    pFVar4 = FPaths::ConvertRelativePathToFull(&local_38,pFVar4,__return_storage_ptr__);
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
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  else {
    ::FString::FString(&local_38,L"Symbols");
    pFVar4 = FPaths::EngineIntermediateDir(&local_18);
    pFVar4 = FPaths::ConvertRelativePathToFull(&local_28,pFVar4,&local_38);
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
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    local_28.Data.AllocatorInstance.Data = local_38.Data.AllocatorInstance.Data;
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
      local_28.Data.AllocatorInstance.Data = local_38.Data.AllocatorInstance.Data;
    }
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  FPaths::MakePlatformFilename(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetFunctionDefinitionLocation @ 141aa9810

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
FWindowsPlatformStackWalk::GetFunctionDefinitionLocation
          (FString *param_1,FString *param_2,FString *param_3,uint *param_4,uint *param_5)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  TStringConversion<TStringConvert<wchar_t,char>,128> *pTVar3;
  bool bVar4;
  longlong lVar5;
  ForAnyElementType FVar6;
  undefined1 auStackY_988 [32];
  ForAnyElementType local_948;
  int local_940;
  int local_93c;
  FString local_938;
  uint *local_928;
  FString local_920;
  undefined4 local_910 [4];
  uint local_900;
  char *local_8f8;
  TStringConversion<TStringConvert<wchar_t,char>,128> local_8e8;
  undefined4 local_848 [2];
  undefined8 local_840;
  undefined4 local_830;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_988;
  local_928 = param_5;
  UE::FRecursiveWordMutex::Lock(&GStackWalkingLock);
  local_940 = (param_1->Data).ArrayNum;
  lVar5 = (longlong)local_940;
  bVar4 = false;
  pFVar1 = (param_1->Data).AllocatorInstance.Data;
  local_848[0] = 0x7f0;
  local_830 = 2000;
  local_948.Data = (FScriptContainerElement *)0x0;
  if (local_940 == 0) {
    local_93c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_940,0,&local_948,local_940,&local_93c);
    memcpy(local_948.Data,pFVar1,lVar5 * 2);
  }
  if (1 < (param_2->Data).ArrayNum) {
    ::FString::PrintfImpl(&local_920,L"%s!%s");
    if (local_948.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_948.Data);
    }
    local_948.Data = local_920.Data.AllocatorInstance.Data;
    local_940 = local_920.Data.ArrayNum;
    local_93c = local_920.Data.ArrayMax;
  }
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_940 != 0) {
    FVar6.Data = local_948.Data;
  }
  pTVar3 = StringCast<char,128,wchar_t>(&local_8e8,(wchar_t *)FVar6.Data);
  iVar2 = SymGetSymFromName64(GProcessHandle,pTVar3->Ptr,local_848);
  if ((void *)local_8e8._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_8e8._padding_);
  }
  if (iVar2 != 0) {
    local_910[0] = 0x28;
    iVar2 = SymGetLineFromAddr64(GProcessHandle,local_840,local_928,local_910);
    if (iVar2 != 0) {
      ::FString::FString(&local_938,local_8f8);
      if (param_3 != &local_938) {
        pFVar1 = (param_3->Data).AllocatorInstance.Data;
        if (pFVar1 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar1);
        }
        (param_3->Data).AllocatorInstance.Data = local_938.Data.AllocatorInstance.Data;
        (param_3->Data).ArrayNum = local_938.Data.ArrayNum;
        (param_3->Data).ArrayMax = local_938.Data.ArrayMax;
        local_938.Data.ArrayNum = 0;
        local_938.Data.ArrayMax = 0;
        local_938.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      if (local_938.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_938.Data.AllocatorInstance.Data);
      }
      bVar4 = true;
      *param_4 = local_900;
    }
  }
  if (local_948.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_948.Data);
  }
  UE::FRecursiveWordMutex::Unlock(&GStackWalkingLock);
  return bVar4;
}

// GetProcessModuleCount @ 141aad310

int __cdecl FWindowsPlatformStackWalk::GetProcessModuleCount(void)

{
  bool bVar1;
  HANDLE pvVar2;
  ulong local_res8 [8];
  
  pvVar2 = GetCurrentProcess();
  InitStackWalkingInternal(pvVar2,false);
  local_res8[0] = 0;
  bVar1 = (*FEnumProcessModules)(GProcessHandle,(HINSTANCE__ **)0x0,0,local_res8);
  if (!bVar1) {
    return 0;
  }
  return local_res8[0] >> 3;
}

// GetProcessModuleSignatures @ 141aad370

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

int __cdecl
FWindowsPlatformStackWalk::GetProcessModuleSignatures(FStackWalkModuleInfo *param_1,int param_2)

{
  HINSTANCE__ *pHVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  void *pvVar5;
  void *pvVar6;
  void *pvVar7;
  void **ppvVar8;
  FStackWalkModuleInfo *pFVar9;
  int iVar10;
  HANDLE pvVar11;
  HINSTANCE__ **ppHVar12;
  void **ppvVar13;
  longlong lVar14;
  ForAnyElementType _Source;
  ulonglong uVar15;
  FStackWalkModuleInfo *pFVar16;
  uint uVar17;
  undefined1 auStack_15e8 [32];
  FString local_15c8;
  _MODULEINFO local_15b8;
  FString local_15a0;
  void *local_1588;
  ulong uStack_1580;
  undefined4 uStack_157c;
  wchar_t local_1578 [31];
  undefined2 uStack_153a;
  wchar_t local_1538 [256];
  wchar_t local_1338 [256];
  undefined4 local_1138;
  undefined4 local_1134;
  undefined8 local_1130;
  undefined8 uStack_1128;
  undefined4 local_1118;
  undefined1 local_1114 [4];
  void *local_1110;
  ulong local_1108;
  undefined4 local_1104;
  wchar_t local_10f4 [32];
  wchar_t local_10b4 [256];
  wchar_t local_eb4 [1294];
  undefined4 local_498;
  undefined8 local_494;
  undefined8 uStack_48c;
  undefined4 local_484;
  wchar_t local_458 [264];
  wchar_t local_248 [264];
  ulonglong local_38;
  undefined8 uStack_30;
  ulonglong uVar18;
  
  uStack_30 = 0x141aad38e;
  local_38 = __security_cookie.value ^ (ulonglong)auStack_15e8;
  UE::FRecursiveWordMutex::Lock(&GStackWalkingLock);
  pvVar11 = GetCurrentProcess();
  InitStackWalkingInternal(pvVar11,false);
  pvVar7 = GProcessHandle;
  ppHVar12 = GetProcessModules(GProcessHandle);
  if (ppHVar12 == (HINSTANCE__ **)0x0) {
    uVar17 = 0;
  }
  else {
    memset(local_1114,0,0xcbc);
    uVar15 = 0;
    uVar17 = 0;
    local_1118 = 0xcc0;
    pHVar1 = *ppHVar12;
    uVar18 = uVar15;
    while ((pHVar1 != (HINSTANCE__ *)0x0 &&
           (uVar17 = (uint)uVar18, (longlong)uVar15 < (longlong)param_2))) {
      local_15b8.EntryPoint = (void *)0x0;
      local_15b8.lpBaseOfDll = (void *)0x0;
      local_15b8.SizeOfImage = 0;
      local_15b8._12_4_ = 0;
      memset(local_248,0,0x208);
      memset(local_458,0,0x208);
      (*FGetModuleInformation)(pvVar7,ppHVar12[uVar15],&local_15b8,0x18);
      (*FGetModuleFileNameEx)(pvVar7,ppHVar12[uVar15],local_458,0x104);
      (*FGetModuleBaseName)(pvVar7,ppHVar12[uVar15],local_248,0x104);
      memset(&local_1588,0,0x468);
      iVar10 = SymGetModuleInfoW64(pvVar7,local_15b8.lpBaseOfDll,&local_1118);
      if (iVar10 == 0) {
        local_1588 = local_15b8.lpBaseOfDll;
        wcscpy(local_1538,local_458);
        uStack_1580 = local_15b8.SizeOfImage;
        wcscpy(local_1338,local_458);
        ::FString::FString(&local_15a0,local_248);
        FPaths::GetBaseFilename(&local_15c8,&local_15a0,true);
        if (local_15a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_15a0.Data.AllocatorInstance.Data);
        }
        _Source.Data = (FScriptContainerElement *)L"";
        if (local_15c8.Data.ArrayNum != 0) {
          _Source.Data = local_15c8.Data.AllocatorInstance.Data;
        }
        wcsncpy(local_1578,(wchar_t *)_Source.Data,0x1f);
        uStack_153a = 0;
        if (5 < (byte)LogWindows._0_1_) {
          GetLastError();
          UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogWindows);
        }
        if (local_15c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_15c8.Data.AllocatorInstance.Data);
        }
      }
      else {
        local_1588 = local_1110;
        wcscpy(local_1538,local_10b4);
        uStack_1580 = local_1108;
        wcscpy(local_1338,local_eb4);
        wcscpy(local_1578,local_10f4);
        local_1134 = local_484;
        local_1138 = local_498;
        uStack_157c = local_1104;
        local_1130 = local_494;
        uStack_1128 = uStack_48c;
      }
      lVar14 = 8;
      ppvVar8 = &local_1588;
      pFVar9 = param_1;
      do {
        pFVar16 = pFVar9;
        ppvVar13 = ppvVar8;
        pvVar2 = ppvVar13[1];
        pvVar3 = ppvVar13[2];
        pvVar4 = ppvVar13[3];
        pFVar16->BaseOfImage = (ulong64)*ppvVar13;
        *(void **)&pFVar16->ImageSize = pvVar2;
        pvVar2 = ppvVar13[4];
        pvVar5 = ppvVar13[5];
        *(void **)pFVar16->ModuleName = pvVar3;
        *(void **)(pFVar16->ModuleName + 4) = pvVar4;
        pvVar3 = ppvVar13[6];
        pvVar4 = ppvVar13[7];
        *(void **)(pFVar16->ModuleName + 8) = pvVar2;
        *(void **)(pFVar16->ModuleName + 0xc) = pvVar5;
        pvVar2 = ppvVar13[8];
        pvVar5 = ppvVar13[9];
        *(void **)(pFVar16->ModuleName + 0x10) = pvVar3;
        *(void **)(pFVar16->ModuleName + 0x14) = pvVar4;
        pvVar3 = ppvVar13[10];
        pvVar4 = ppvVar13[0xb];
        *(void **)(pFVar16->ModuleName + 0x18) = pvVar2;
        *(void **)(pFVar16->ModuleName + 0x1c) = pvVar5;
        pvVar2 = ppvVar13[0xc];
        pvVar5 = ppvVar13[0xd];
        *(void **)pFVar16->ImageName = pvVar3;
        *(void **)(pFVar16->ImageName + 4) = pvVar4;
        pvVar3 = ppvVar13[0xe];
        pvVar4 = ppvVar13[0xf];
        *(void **)(pFVar16->ImageName + 8) = pvVar2;
        *(void **)(pFVar16->ImageName + 0xc) = pvVar5;
        *(void **)(pFVar16->ImageName + 0x10) = pvVar3;
        *(void **)(pFVar16->ImageName + 0x14) = pvVar4;
        lVar14 = lVar14 + -1;
        ppvVar8 = ppvVar13 + 0x10;
        pFVar9 = (FStackWalkModuleInfo *)(pFVar16->ImageName + 0x18);
      } while (lVar14 != 0);
      pvVar3 = ppvVar13[0x11];
      pvVar2 = ppvVar13[0x1c];
      uVar15 = uVar15 + 1;
      pvVar4 = ppvVar13[0x12];
      pvVar5 = ppvVar13[0x13];
      uVar17 = uVar17 + 1;
      uVar18 = (ulonglong)uVar17;
      param_1 = param_1 + 1;
      ((FStackWalkModuleInfo *)(pFVar16->ImageName + 0x18))->BaseOfImage = (ulong64)ppvVar13[0x10];
      *(void **)(pFVar16->ImageName + 0x1c) = pvVar3;
      pvVar3 = ppvVar13[0x14];
      pvVar6 = ppvVar13[0x15];
      *(void **)(pFVar16->ImageName + 0x20) = pvVar4;
      *(void **)(pFVar16->ImageName + 0x24) = pvVar5;
      pvVar4 = ppvVar13[0x16];
      pvVar5 = ppvVar13[0x17];
      *(void **)(pFVar16->ImageName + 0x28) = pvVar3;
      *(void **)(pFVar16->ImageName + 0x2c) = pvVar6;
      pvVar3 = ppvVar13[0x18];
      pvVar6 = ppvVar13[0x19];
      *(void **)(pFVar16->ImageName + 0x30) = pvVar4;
      *(void **)(pFVar16->ImageName + 0x34) = pvVar5;
      pvVar4 = ppvVar13[0x1a];
      pvVar5 = ppvVar13[0x1b];
      *(void **)(pFVar16->ImageName + 0x38) = pvVar3;
      *(void **)(pFVar16->ImageName + 0x3c) = pvVar6;
      *(void **)(pFVar16->ImageName + 0x40) = pvVar4;
      *(void **)(pFVar16->ImageName + 0x44) = pvVar5;
      *(void **)(pFVar16->ImageName + 0x48) = pvVar2;
      pHVar1 = ppHVar12[uVar15];
    }
    FMemory::Free(ppHVar12);
  }
  UE::FRecursiveWordMutex::Unlock(&GStackWalkingLock);
  return uVar17;
}

// GetStack @ 141aadae0

TArray<FProgramCounterSymbolInfo,TSizedDefaultAllocator<32>_> * __cdecl
FWindowsPlatformStackWalk::GetStack
          (TArray<FProgramCounterSymbolInfo,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          int param_1,int param_2,void *param_3)

{
  HANDLE pvVar1;
  int iVar2;
  
  UE::FRecursiveWordMutex::Lock(&GStackWalkingLock);
  pvVar1 = GetCurrentProcess();
  InitStackWalkingInternal(pvVar1,false);
  iVar2 = param_1 + 1;
  if (param_3 != (void *)0x0) {
    iVar2 = param_1;
  }
  FGenericPlatformStackWalk::GetStack(__return_storage_ptr__,iVar2,param_2,param_3);
  UE::FRecursiveWordMutex::Unlock(&GStackWalkingLock);
  return __return_storage_ptr__;
}

// InitStackWalking @ 141ab2230

bool __cdecl FWindowsPlatformStackWalk::InitStackWalking(void)

{
  bool bVar1;
  HANDLE pvVar2;
  
  pvVar2 = GetCurrentProcess();
  bVar1 = InitStackWalkingInternal(pvVar2,false);
  return bVar1;
}

// InitStackWalkingForProcess @ 141ab2250

bool __cdecl FWindowsPlatformStackWalk::InitStackWalkingForProcess(FProcHandle *param_1)

{
  bool bVar1;
  FProcHandle FVar2;
  
  FVar2 = *param_1;
  if (FVar2 == (FProcHandle)0x0) {
    FVar2 = (FProcHandle)GetCurrentProcess();
  }
  bVar1 = InitStackWalkingInternal((void *)FVar2,true);
  return bVar1;
}

// InitStackWalkingInternal @ 141ab2280

bool __cdecl FWindowsPlatformStackWalk::InitStackWalkingInternal(void *param_1,bool param_2)

{
  uint uVar1;
  void *pvVar2;
  ForAnyElementType FVar3;
  undefined1 uVar4;
  FString local_18;
  
  UE::FRecursiveWordMutex::Lock(&GStackWalkingLock);
  pvVar2 = param_1;
  if (GStackWalkingInitialized == false) {
LAB_141ab22e8:
    GProcessHandle = pvVar2;
    if (bHasRunOnce == false) {
      bHasRunOnce = true;
      pvVar2 = FWindowsPlatformProcess::GetDllHandle(L"PSAPI.DLL");
      if (pvVar2 == (void *)0x0) goto LAB_141ab244d;
      FEnumProcesses = FWindowsPlatformProcess::GetDllExport(pvVar2,L"EnumProcesses");
      FEnumProcessModules = FWindowsPlatformProcess::GetDllExport(pvVar2,L"EnumProcessModules");
      FGetModuleFileNameEx = FWindowsPlatformProcess::GetDllExport(pvVar2,L"GetModuleFileNameExW");
      FGetModuleBaseName = FWindowsPlatformProcess::GetDllExport(pvVar2,L"GetModuleBaseNameW");
      FGetModuleInformation = FWindowsPlatformProcess::GetDllExport(pvVar2,L"GetModuleInformation");
    }
    if ((((FEnumProcesses != (_func___cdecl_bool_uint_ptr_uint_uint_ptr *)0x0) &&
         (FEnumProcessModules !=
          (_func___cdecl_bool_void_ptr_HINSTANCE___ptr_ptr_uint_ulong_ptr *)0x0)) &&
        (FGetModuleFileNameEx != (_func___cdecl_uint_void_ptr_HINSTANCE___ptr_wchar_t_ptr_uint *)0x0
        )) && ((FGetModuleBaseName !=
                (_func___cdecl_uint_void_ptr_HINSTANCE___ptr_wchar_t_ptr_uint *)0x0 &&
               (FGetModuleInformation !=
                (_func___cdecl_bool_void_ptr_HINSTANCE___ptr__MODULEINFO_ptr_uint *)0x0)))) {
      if (GStackWalkingInitialized != false) {
        uVar4 = GStackWalkingInitialized;
        if (GNeedToRefreshSymbols == false) goto LAB_141ab244f;
        SymCleanup(GProcessHandle);
      }
      uVar1 = SymGetOptions();
      SymSetOptions(uVar1 | 0x616);
      GetSymbolSearchPath(&local_18);
      FVar3.Data = local_18.Data.AllocatorInstance.Data;
      if (local_18.Data.ArrayNum < 2) {
        FVar3.Data = (FScriptContainerElement *)0x0;
      }
      SymInitializeW(GProcessHandle,FVar3.Data,1);
      GStackWalkingInitialized = true;
      GNeedToRefreshSymbols = false;
      uVar4 = GStackWalkingInitialized;
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
        uVar4 = GStackWalkingInitialized;
      }
      goto LAB_141ab244f;
    }
  }
  else {
    if (param_1 == GProcessHandle) {
      pvVar2 = GProcessHandle;
      if (GNeedToRefreshSymbols == false) {
        uVar4 = 1;
        goto LAB_141ab244f;
      }
      goto LAB_141ab22e8;
    }
    if (param_2) {
      SymCleanup();
      GStackWalkingInitialized = false;
      GNeedToRefreshSymbols = false;
      pvVar2 = param_1;
      goto LAB_141ab22e8;
    }
  }
LAB_141ab244d:
  uVar4 = 0;
LAB_141ab244f:
  UE::FRecursiveWordMutex::Unlock(&GStackWalkingLock);
  return (bool)uVar4;
}

// MakeThreadContextWrapper @ 141ab59f0

void * __cdecl FWindowsPlatformStackWalk::MakeThreadContextWrapper(void *param_1,void *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  puVar4 = ::operator_new(0x4f0);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    *puVar4 = 0x5397fe56;
    memset(puVar4 + 4,0,0x4d0);
  }
  lVar5 = 9;
  puVar3 = (undefined8 *)(puVar4 + 4);
  do {
    puVar7 = param_1;
    puVar6 = puVar3;
    uVar1 = puVar7[1];
    *puVar6 = *puVar7;
    puVar6[1] = uVar1;
    uVar1 = puVar7[3];
    puVar6[2] = puVar7[2];
    puVar6[3] = uVar1;
    uVar1 = puVar7[5];
    puVar6[4] = puVar7[4];
    puVar6[5] = uVar1;
    uVar1 = puVar7[7];
    puVar6[6] = puVar7[6];
    puVar6[7] = uVar1;
    uVar1 = puVar7[9];
    puVar6[8] = puVar7[8];
    puVar6[9] = uVar1;
    uVar1 = puVar7[0xb];
    puVar6[10] = puVar7[10];
    puVar6[0xb] = uVar1;
    uVar1 = puVar7[0xd];
    puVar6[0xc] = puVar7[0xc];
    puVar6[0xd] = uVar1;
    uVar1 = puVar7[0xf];
    puVar6[0xe] = puVar7[0xe];
    puVar6[0xf] = uVar1;
    lVar5 = lVar5 + -1;
    puVar3 = puVar6 + 0x10;
    param_1 = puVar7 + 0x10;
  } while (lVar5 != 0);
  uVar1 = puVar7[0x11];
  puVar6[0x10] = puVar7[0x10];
  puVar6[0x11] = uVar1;
  uVar1 = puVar7[0x13];
  puVar6[0x12] = puVar7[0x12];
  puVar6[0x13] = uVar1;
  uVar1 = puVar7[0x15];
  puVar6[0x14] = puVar7[0x14];
  puVar6[0x15] = uVar1;
  uVar1 = puVar7[0x17];
  puVar6[0x16] = puVar7[0x16];
  puVar6[0x17] = uVar1;
  uVar1 = puVar7[0x18];
  uVar2 = puVar7[0x19];
  *(void **)(puVar4 + 0x138) = param_2;
  puVar6[0x18] = uVar1;
  puVar6[0x19] = uVar2;
  return puVar4;
}

// ProgramCounterToSymbolInfo @ 141aba1d0

void __cdecl
FWindowsPlatformStackWalk::ProgramCounterToSymbolInfo
          (ulong64 param_1,FProgramCounterSymbolInfo *param_2)

{
  FProgramCounterSymbolInfo *local_res10 [3];
  code *local_18;
  FProgramCounterSymbolInfo **local_10;
  
  local_10 = local_res10;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`FWindowsPlatformStackWalk::ProgramCounterToSymbolInfo'::__l2::<lambda_1>,void,FProgramCounterSymbolInfo_&>
             ::Call;
  local_res10[0] = param_2;
  EnumerateSymbolInfosForProgramCounter
            (param_1,false,(TFunctionRef<void___cdecl(FProgramCounterSymbolInfo_&)> *)&local_18);
  return;
}

// ProgramCounterToSymbolInfoEx @ 141aba210

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
FWindowsPlatformStackWalk::ProgramCounterToSymbolInfoEx
          (ulong64 param_1,FProgramCounterSymbolInfoEx *param_2)

{
  code *pcVar1;
  bool bVar2;
  size_t sVar3;
  wchar_t *pwVar4;
  ForAnyElementType FVar5;
  ForAnyElementType FVar6;
  uint uVar7;
  undefined1 auStack_24e8 [32];
  FProgramCounterSymbolInfo *local_24c8;
  code *local_24c0;
  FProgramCounterSymbolInfo **local_24b8;
  FScriptContainerElement local_24a8 [2048];
  ForAnyElementType local_1ca8;
  FScriptContainerElement *local_1ca0;
  int local_1c98;
  FScriptContainerElement local_1c88 [2048];
  ForAnyElementType local_1488;
  FScriptContainerElement *local_1480;
  int local_1478;
  FScriptContainerElement local_1468 [2048];
  ForAnyElementType local_c68;
  FScriptContainerElement *local_c60;
  int local_c58;
  FProgramCounterSymbolInfo local_c48;
  ulonglong local_28;
  undefined8 local_20;
  
  local_20 = 0x141aba230;
  local_28 = __security_cookie.value ^ (ulonglong)auStack_24e8;
  FProgramCounterSymbolInfo::FProgramCounterSymbolInfo(&local_c48);
  local_24c8 = &local_c48;
  local_24b8 = &local_24c8;
  local_24c0 = UE::Core::Private::Function::
               TFunctionRefCaller<`FWindowsPlatformStackWalk::ProgramCounterToSymbolInfo'::__l2::<lambda_1>,void,FProgramCounterSymbolInfo_&>
               ::Call;
  EnumerateSymbolInfosForProgramCounter
            (param_1,false,(TFunctionRef<void___cdecl(FProgramCounterSymbolInfo_&)> *)&local_24c0);
  param_2->LineNumber = local_c48.LineNumber;
  FVar6.Data = (FScriptContainerElement *)0x0;
  param_2->SymbolDisplacement = (longlong)local_c48.SymbolDisplacement;
  param_2->ProgramCounter = param_1;
  param_2->OffsetInModule = local_c48.OffsetInModule;
  local_1ca8.Data = (FScriptContainerElement *)0x0;
  sVar3 = strlen(local_c48.FunctionName);
  local_1c98 = (int)sVar3;
  uVar7 = local_1c98 + 1;
  FVar5.Data = FVar6.Data;
  if (0x400 < uVar7) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_1ca8,0,uVar7,2);
    FVar5.Data = local_1ca8.Data;
  }
  local_1ca0 = local_24a8;
  if (FVar5.Data != (FScriptContainerElement *)0x0) {
    local_1ca0 = FVar5.Data;
  }
  pwVar4 = FGenericPlatformString::Convert<char,wchar_t>
                     ((wchar_t *)local_1ca0,uVar7,local_c48.FunctionName,uVar7);
  if (pwVar4 == (wchar_t *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Result",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringConv.h"
                       ,0x25,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  ::FString::AssignRange(&param_2->FunctionName,(wchar_t *)local_1ca0,local_1c98);
  if (local_1ca8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1ca8.Data);
  }
  local_1488.Data = (FScriptContainerElement *)0x0;
  sVar3 = strlen(local_c48.ModuleName);
  local_1478 = (int)sVar3;
  uVar7 = local_1478 + 1;
  FVar5.Data = FVar6.Data;
  if (0x400 < uVar7) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_1488,0,uVar7,2);
    FVar5.Data = local_1488.Data;
  }
  local_1480 = local_1c88;
  if (FVar5.Data != (FScriptContainerElement *)0x0) {
    local_1480 = FVar5.Data;
  }
  pwVar4 = FGenericPlatformString::Convert<char,wchar_t>
                     ((wchar_t *)local_1480,uVar7,local_c48.ModuleName,uVar7);
  if (pwVar4 == (wchar_t *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Result",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringConv.h"
                       ,0x25,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  ::FString::AssignRange(&param_2->ModuleName,(wchar_t *)local_1480,local_1478);
  if (local_1488.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1488.Data);
  }
  local_c68.Data = (FScriptContainerElement *)0x0;
  sVar3 = strlen(local_c48.Filename);
  local_c58 = (int)sVar3;
  uVar7 = local_c58 + 1;
  if (0x400 < uVar7) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_c68,0,uVar7,2);
    FVar6.Data = local_c68.Data;
  }
  local_c60 = local_1468;
  if (FVar6.Data != (FScriptContainerElement *)0x0) {
    local_c60 = FVar6.Data;
  }
  pwVar4 = FGenericPlatformString::Convert<char,wchar_t>
                     ((wchar_t *)local_c60,uVar7,local_c48.Filename,uVar7);
  if (pwVar4 == (wchar_t *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Result",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringConv.h"
                       ,0x25,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  ::FString::AssignRange(&param_2->Filename,(wchar_t *)local_c60,local_c58);
  if (local_c68.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c68.Data);
  }
  return;
}

// RegisterOnModulesChanged @ 141abc030

void __cdecl FWindowsPlatformStackWalk::RegisterOnModulesChanged(void)

{
  FModuleManager *pFVar1;
  undefined1 local_res8 [32];
  
  pFVar1 = FModuleManager::Get();
  TMulticastDelegateRegistration<void___cdecl(FName,enum_EModuleChangeReason),FDefaultTSDelegateUserPolicy>
  ::AddStatic<>(&pFVar1->ModulesChangedEvent,
                (_func___cdecl_void_FName_EModuleChangeReason *)local_res8);
  return;
}

// ReleaseThreadContextWrapper @ 141abc5c0

void __cdecl FWindowsPlatformStackWalk::ReleaseThreadContextWrapper(void *param_1)

{
  ::operator_delete(param_1,0x4f0);
  return;
}

// StackWalkAndDump @ 141ac2580

void __cdecl
FWindowsPlatformStackWalk::StackWalkAndDump(char *param_1,ulong64 param_2,int param_3,void *param_4)

{
  HANDLE pvVar1;
  int iVar2;
  
  UE::FRecursiveWordMutex::Lock(&GStackWalkingLock);
  pvVar1 = GetCurrentProcess();
  InitStackWalkingInternal(pvVar1,false);
  iVar2 = param_3 + 1;
  if (param_4 != (void *)0x0) {
    iVar2 = param_3;
  }
  FGenericPlatformStackWalk::StackWalkAndDump(param_1,param_2,iVar2,param_4);
  if (param_4 == (void *)0x0) {
    ForceCompilerToReturnHere = ForceCompilerToReturnHere + (int)param_2;
  }
  UE::FRecursiveWordMutex::Unlock(&GStackWalkingLock);
  return;
}

// StackWalkAndDump @ 141ac2610

void __cdecl
FWindowsPlatformStackWalk::StackWalkAndDump
          (char *param_1,ulong64 param_2,void *param_3,void *param_4)

{
  HANDLE pvVar1;
  
  UE::FRecursiveWordMutex::Lock(&GStackWalkingLock);
  pvVar1 = GetCurrentProcess();
  InitStackWalkingInternal(pvVar1,false);
  FGenericPlatformStackWalk::StackWalkAndDump(param_1,param_2,param_3,param_4);
  UE::FRecursiveWordMutex::Unlock(&GStackWalkingLock);
  return;
}

// ThreadStackWalkAndDump @ 141ac2ee0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
FWindowsPlatformStackWalk::ThreadStackWalkAndDump
          (char *param_1,ulong64 param_2,int param_3,uint param_4)

{
  BOOL BVar1;
  HANDLE pvVar2;
  undefined1 auStack_548 [32];
  undefined4 local_528 [4];
  _CONTEXT local_518;
  HANDLE local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_548;
  UE::FRecursiveWordMutex::Lock(&GStackWalkingLock);
  pvVar2 = GetCurrentProcess();
  InitStackWalkingInternal(pvVar2,false);
  pvVar2 = OpenThread(0x1b,0,param_4);
  if (pvVar2 != (HANDLE)0x0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) < ::_TSS0) {
      _Init_thread_header(&::_TSS0);
      if (::_TSS0 == -1) {
        InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&Mutex,4000);
        atexit(`FWindowsPlatformStackWalk::ThreadStackWalkAndDump'::__l5::
               _dynamic_atexit_destructor_for__Mutex__);
        _Init_thread_footer(&::_TSS0);
      }
    }
    EnterCriticalSection((LPCRITICAL_SECTION)&Mutex);
    SuspendThread(pvVar2);
    FWindowsPlatformProcess::Sleep(__real_3c23d70a);
    local_528[0] = 0x5397fe56;
    memset(&local_518,0,0x4d0);
    local_518.ContextFlags = 0x100001;
    local_48 = pvVar2;
    BVar1 = GetThreadContext(pvVar2,&local_518);
    if (BVar1 != 0) {
      FGenericPlatformStackWalk::StackWalkAndDump(param_1,param_2,param_3,local_528);
    }
    ResumeThread(pvVar2);
    LeaveCriticalSection((LPCRITICAL_SECTION)&Mutex);
  }
  UE::FRecursiveWordMutex::Unlock(&GStackWalkingLock);
  return;
}

// UploadLocalSymbols @ 141ac3e40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl FWindowsPlatformStackWalk::UploadLocalSymbols(void)

{
  HINSTANCE__ *pHVar1;
  void *pvVar2;
  bool bVar3;
  BOOL BVar4;
  DWORD DVar5;
  HANDLE pvVar6;
  wchar_t *pwVar7;
  HINSTANCE__ **ppHVar8;
  longlong lVar9;
  FStaticBasicLogRecord *pFVar10;
  ForAnyElementType FVar11;
  longlong lVar12;
  undefined1 auStackY_ca8 [32];
  FString local_c68;
  FString local_c58;
  wchar_t local_c48 [264];
  wchar_t local_a38 [264];
  WCHAR local_828 [1024];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_ca8;
  pvVar6 = GetCurrentProcess();
  InitStackWalkingInternal(pvVar6,false);
  lVar12 = 0;
  local_c68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c68.Data.ArrayNum = 0;
  local_c68.Data.ArrayMax = 0;
  bVar3 = FConfigCacheIni::GetString
                    (GConfig,CrashReporterSettings,L"UploadSymbolsPath",&local_c68,
                     &GEditorPerProjectIni);
  if ((bVar3) && (1 < local_c68.Data.ArrayNum)) {
    pwVar7 = FCommandLine::Get();
    bVar3 = FParse::Param(pwVar7,L"DisableUploadSymbols");
    if (bVar3) {
      if (4 < (byte)LogWindows._0_1_) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogWindows);
      }
    }
    else {
      ::FString::ReplaceInline(&local_c68,L"/",L"\\",CaseSensitive);
      ::FString::ConcatCF(&local_c58,L"SRV*",&local_c68);
      if (local_c68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c68.Data.AllocatorInstance.Data);
      }
      pvVar2 = GProcessHandle;
      local_c68.Data.AllocatorInstance.Data = local_c58.Data.AllocatorInstance.Data;
      local_c68.Data.ArrayNum = local_c58.Data.ArrayNum;
      local_c68.Data.ArrayMax = local_c58.Data.ArrayMax;
      local_c58.Data.ArrayNum = 0;
      local_c58.Data.ArrayMax = 0;
      local_c58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      ppHVar8 = GetProcessModules(GProcessHandle);
      if (ppHVar8 == (HINSTANCE__ **)0x0) {
        GetLastError();
        bVar3 = false;
        goto LAB_141ac4214;
      }
      pHVar1 = *ppHVar8;
      while (pHVar1 != (HINSTANCE__ *)0x0) {
        memset(local_c48,0,0x208);
        (*FGetModuleFileNameEx)(pvVar2,pHVar1,local_c48,0x104);
        wcscpy(local_a38,local_c48);
        BVar4 = PathRenameExtensionW(local_a38,L".pdb");
        if ((BVar4 != 0) && (BVar4 = PathFileExistsW(local_a38), BVar4 != 0)) {
          if (4 < (byte)LogWindows._0_1_) {
            UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogWindows);
          }
          FVar11.Data = (FScriptContainerElement *)L"";
          if (local_c68.Data.ArrayNum != 0) {
            FVar11.Data = local_c68.Data.AllocatorInstance.Data;
          }
          lVar9 = SymSrvStoreFileW(pvVar2,FVar11.Data,local_c48,0x40);
          if (lVar9 == 0) {
            DVar5 = GetLastError();
            local_828[0] = L'\0';
            if (DVar5 == 0) {
              DVar5 = GetLastError();
            }
            FormatMessageW(0x1000,(LPCVOID)0x0,DVar5,0x400,local_828,0x400,(va_list *)0x0);
            pwVar7 = wcschr(local_828,L'\r');
            if (pwVar7 != (wchar_t *)0x0) {
              *pwVar7 = L'\0';
            }
            pwVar7 = wcschr(local_828,L'\n');
            if (pwVar7 != (wchar_t *)0x0) {
              *pwVar7 = L'\0';
            }
            if ((byte)LogWindows._0_1_ < 3) break;
            pFVar10 = &::LOG_Static;
          }
          else {
            if (4 < (byte)LogWindows._0_1_) {
              UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogWindows);
            }
            FVar11.Data = (FScriptContainerElement *)L"";
            if (local_c68.Data.ArrayNum != 0) {
              FVar11.Data = local_c68.Data.AllocatorInstance.Data;
            }
            lVar9 = SymSrvStoreFileW(pvVar2,FVar11.Data,local_a38,0x40);
            if (lVar9 != 0) goto LAB_141ac40bb;
            DVar5 = GetLastError();
            local_828[0] = L'\0';
            if (DVar5 == 0) {
              DVar5 = GetLastError();
            }
            FormatMessageW(0x1000,(LPCVOID)0x0,DVar5,0x400,local_828,0x400,(va_list *)0x0);
            pwVar7 = wcschr(local_828,L'\r');
            if (pwVar7 != (wchar_t *)0x0) {
              *pwVar7 = L'\0';
            }
            pwVar7 = wcschr(local_828,L'\n');
            if (pwVar7 != (wchar_t *)0x0) {
              *pwVar7 = L'\0';
            }
            if ((byte)LogWindows._0_1_ < 3) break;
            pFVar10 = &::LOG_Static;
          }
          UE::Logging::Private::BasicLog<3>(pFVar10,(FLogCategoryBase *)&LogWindows);
          break;
        }
LAB_141ac40bb:
        lVar9 = lVar12 + 1;
        lVar12 = lVar12 + 1;
        pHVar1 = ppHVar8[lVar9];
      }
    }
  }
  bVar3 = true;
LAB_141ac4214:
  if (local_c68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c68.Data.AllocatorInstance.Data);
  }
  return bVar3;
}

