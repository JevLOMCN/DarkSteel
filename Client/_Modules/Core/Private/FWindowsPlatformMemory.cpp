// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 14

// BaseAllocator @ 141aa0550

FMalloc * __cdecl FWindowsPlatformMemory::BaseAllocator(void)

{
  WCHAR WVar1;
  LPWSTR pWVar2;
  int iVar3;
  LPWSTR pWVar4;
  FMallocAnsi *this;
  FMallocStomp *this_00;
  FMallocMimalloc *this_01;
  FMallocLibpas *this_02;
  FMallocBinned2 *this_03;
  FMallocBinned3 *this_04;
  FMallocBinned *pFVar5;
  FGenericPlatformMemoryConstants *pFVar6;
  wchar_t *pwVar7;
  FMallocBinned *pFVar8;
  
  pFVar8 = (FMallocBinned *)::Instance;
  if (::Instance == (FMalloc *)0x0) {
    FGenericPlatformMemory::AllocatorToUse = Binned2;
    pWVar4 = GetCommandLineW();
    pFVar8 = (FMallocBinned *)0x0;
    if (pWVar4 != (LPWSTR)0x0) {
      WVar1 = *pWVar4;
      pWVar2 = pWVar4;
      while (WVar1 != L'\0') {
        pwVar7 = pWVar2 + 1;
        if (((WCHAR)(WVar1 - (-(ushort)((ushort)WVar1 - 0x61 < 0x1a) & 0x20)) == 0x2d) &&
           (iVar3 = FGenericPlatformStricmp::Strnicmp(pwVar7,L"libpasmalloc",0xc), iVar3 == 0)) {
          if (pWVar2 != (LPWSTR)0x0) {
            FGenericPlatformMemory::AllocatorToUse = Libpas;
            goto LAB_141aa08eb;
          }
          break;
        }
        pWVar2 = pwVar7;
        WVar1 = *pwVar7;
      }
      WVar1 = *pWVar4;
      pWVar2 = pWVar4;
      while (WVar1 != L'\0') {
        pwVar7 = pWVar2 + 1;
        if (((WCHAR)(WVar1 - (-(ushort)((ushort)WVar1 - 0x61 < 0x1a) & 0x20)) == 0x2d) &&
           (iVar3 = FGenericPlatformStricmp::Strnicmp(pwVar7,L"ansimalloc",10), iVar3 == 0)) {
          if (pWVar2 != (LPWSTR)0x0) {
            FGenericPlatformMemory::AllocatorToUse = Ansi;
            goto LAB_141aa08eb;
          }
          break;
        }
        pWVar2 = pwVar7;
        WVar1 = *pwVar7;
      }
      WVar1 = *pWVar4;
      pWVar2 = pWVar4;
      while (WVar1 != L'\0') {
        pwVar7 = pWVar2 + 1;
        if (((WCHAR)(WVar1 - (-(ushort)((ushort)WVar1 - 0x61 < 0x1a) & 0x20)) == 0x2d) &&
           (iVar3 = FGenericPlatformStricmp::Strnicmp(pwVar7,L"tbbmalloc",9), iVar3 == 0)) {
          if (pWVar2 != (LPWSTR)0x0) {
            FGenericPlatformMemory::AllocatorToUse = TBB;
            goto LAB_141aa08eb;
          }
          break;
        }
        pWVar2 = pwVar7;
        WVar1 = *pwVar7;
      }
      WVar1 = *pWVar4;
      pWVar2 = pWVar4;
      while (WVar1 != L'\0') {
        pwVar7 = pWVar2 + 1;
        if (((WCHAR)(WVar1 - (-(ushort)((ushort)WVar1 - 0x61 < 0x1a) & 0x20)) == 0x2d) &&
           (iVar3 = FGenericPlatformStricmp::Strnicmp(pwVar7,L"mimalloc",8), iVar3 == 0)) {
          if (pWVar2 != (LPWSTR)0x0) {
            FGenericPlatformMemory::AllocatorToUse = Mimalloc;
            goto LAB_141aa08eb;
          }
          break;
        }
        pWVar2 = pwVar7;
        WVar1 = *pwVar7;
      }
      WVar1 = *pWVar4;
      pWVar2 = pWVar4;
      while (WVar1 != L'\0') {
        pwVar7 = pWVar2 + 1;
        if (((WCHAR)(WVar1 - (-(ushort)((ushort)WVar1 - 0x61 < 0x1a) & 0x20)) == 0x2d) &&
           (iVar3 = FGenericPlatformStricmp::Strnicmp(pwVar7,L"binnedmalloc3",0xd), iVar3 == 0)) {
          if (pWVar2 != (LPWSTR)0x0) {
            FGenericPlatformMemory::AllocatorToUse = Binned3;
            goto LAB_141aa08eb;
          }
          break;
        }
        pWVar2 = pwVar7;
        WVar1 = *pwVar7;
      }
      WVar1 = *pWVar4;
      pWVar2 = pWVar4;
      while (WVar1 != L'\0') {
        pwVar7 = pWVar2 + 1;
        if (((WCHAR)(WVar1 - (-(ushort)((ushort)WVar1 - 0x61 < 0x1a) & 0x20)) == 0x2d) &&
           (iVar3 = FGenericPlatformStricmp::Strnicmp(pwVar7,L"binnedmalloc2",0xd), iVar3 == 0)) {
          if (pWVar2 != (LPWSTR)0x0) {
            FGenericPlatformMemory::AllocatorToUse = Binned2;
            goto LAB_141aa08eb;
          }
          break;
        }
        pWVar2 = pwVar7;
        WVar1 = *pwVar7;
      }
      WVar1 = *pWVar4;
      pWVar2 = pWVar4;
      while (WVar1 != L'\0') {
        pwVar7 = pWVar2 + 1;
        if (((WCHAR)(WVar1 - (-(ushort)((ushort)WVar1 - 0x61 < 0x1a) & 0x20)) == 0x2d) &&
           (iVar3 = FGenericPlatformStricmp::Strnicmp(pwVar7,L"binnedmalloc",0xc), iVar3 == 0)) {
          if (pWVar2 != (LPWSTR)0x0) {
            FGenericPlatformMemory::AllocatorToUse = Binned;
            goto LAB_141aa08eb;
          }
          break;
        }
        pWVar2 = pwVar7;
        WVar1 = *pwVar7;
      }
      WVar1 = *pWVar4;
      pWVar2 = pWVar4;
      while (WVar1 != L'\0') {
        pwVar7 = pWVar2 + 1;
        if (((WCHAR)(WVar1 - (-(ushort)((ushort)WVar1 - 0x61 < 0x1a) & 0x20)) == 0x2d) &&
           (iVar3 = FGenericPlatformStricmp::Strnicmp(pwVar7,L"stompmalloc",0xb), iVar3 == 0)) {
          if (pWVar2 != (LPWSTR)0x0) {
            FGenericPlatformMemory::AllocatorToUse = Stomp;
          }
          break;
        }
        pWVar2 = pwVar7;
        WVar1 = *pwVar7;
      }
LAB_141aa08eb:
      WVar1 = *pWVar4;
      while (WVar1 != L'\0') {
        pwVar7 = pWVar4 + 1;
        if (((WCHAR)(WVar1 - (-(ushort)((ushort)WVar1 - 0x61 < 0x1a) & 0x20)) == 0x2d) &&
           (iVar3 = FGenericPlatformStricmp::Strnicmp(pwVar7,L"doublefreefinder",0x10), iVar3 == 0))
        {
          if (pWVar4 != (LPWSTR)0x0) {
            GMallocDoubleFreeFinderEnabled = true;
          }
          break;
        }
        pWVar4 = pwVar7;
        WVar1 = *pwVar7;
      }
    }
    switch(FGenericPlatformMemory::AllocatorToUse) {
    case Ansi:
      this = FUseSystemMallocForNew::operator_new(8);
      if (this != (FMallocAnsi *)0x0) {
        pFVar8 = (FMallocBinned *)FMallocAnsi::FMallocAnsi(this);
      }
      break;
    case Stomp:
      this_00 = FUseSystemMallocForNew::operator_new(0x18);
      if (this_00 != (FMallocStomp *)0x0) {
        pFVar8 = (FMallocBinned *)FMallocStomp::FMallocStomp(this_00,false);
      }
      break;
    case TBB:
      pFVar5 = FUseSystemMallocForNew::operator_new(8);
      if (pFVar5 != (FMallocBinned *)0x0) {
        pFVar5->_padding_ = (longlong)&___7FMallocTBB__6B_;
        pFVar8 = pFVar5;
      }
      break;
    default:
      pFVar5 = FUseSystemMallocForNew::operator_new(0x412f0);
      pFVar8 = (FMallocBinned *)0x0;
      if (pFVar5 != (FMallocBinned *)0x0) {
        pFVar6 = GetConstants();
        pFVar8 = FMallocBinned::FMallocBinned(pFVar5,(uint)pFVar6->BinnedPageSize,0x100000000);
      }
      break;
    case Binned2:
      this_03 = FUseSystemMallocForNew::operator_new(0x16e0);
      if (this_03 != (FMallocBinned2 *)0x0) {
        pFVar8 = (FMallocBinned *)FMallocBinned2::FMallocBinned2(this_03);
      }
      break;
    case Binned3:
      this_04 = FUseSystemMallocForNew::operator_new(0x3a40);
      if (this_04 != (FMallocBinned3 *)0x0) {
        pFVar8 = (FMallocBinned *)
                 FMallocBinned3::FMallocBinned3(this_04,(FPlatformVirtualMemoryBlock *)0x0);
      }
      break;
    case Mimalloc:
      this_01 = FUseSystemMallocForNew::operator_new(8);
      if (this_01 != (FMallocMimalloc *)0x0) {
        pFVar8 = (FMallocBinned *)FMallocMimalloc::FMallocMimalloc(this_01);
      }
      break;
    case Libpas:
      this_02 = FUseSystemMallocForNew::operator_new(8);
      pFVar8 = (FMallocBinned *)0x0;
      if (this_02 != (FMallocLibpas *)0x0) {
        pFVar8 = (FMallocBinned *)FMallocLibpas::FMallocLibpas(this_02);
      }
    }
  }
  ::Instance = (FMalloc *)pFVar8;
  return (FMalloc *)pFVar8;
}

// BinnedAllocFromOS @ 141aa0ec0

void * __cdecl FWindowsPlatformMemory::BinnedAllocFromOS(ulong64 param_1)

{
  LPVOID pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = VirtualAlloc((LPVOID)0x0,param_1,0x3000,4);
  if (FLowLevelMemTracker::EnabledState != Disabled) {
    this = FLowLevelMemTracker::TrackerInstance;
    if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
      this = FLowLevelMemTracker::Construct();
    }
    FLowLevelMemTracker::OnLowLevelAlloc(this,Platform,pvVar1,param_1,Untagged,None,true);
  }
  return pvVar1;
}

// BinnedFreeToOS @ 141aa0f40

void __cdecl FWindowsPlatformMemory::BinnedFreeToOS(void *param_1,ulong64 param_2)

{
  code *pcVar1;
  bool bVar2;
  BOOL BVar3;
  FLowLevelMemTracker *this;
  
  if (FLowLevelMemTracker::EnabledState != Disabled) {
    this = FLowLevelMemTracker::TrackerInstance;
    if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
      this = FLowLevelMemTracker::Construct();
    }
    FLowLevelMemTracker::OnLowLevelFree(this,Platform,param_1,None,true);
  }
  BVar3 = VirtualFree(param_1,0,0x8000);
  if (BVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("VirtualFree( Ptr, 0, 0x00008000 ) != 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Windows\\WindowsPlatformMemory.cpp"
                       ,0x225,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// GetConstants @ 141aa7ca0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

FGenericPlatformMemoryConstants * __cdecl FWindowsPlatformMemory::GetConstants(void)

{
  longlong lVar1;
  bool bVar2;
  BOOL BVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  char cVar6;
  undefined1 auStackY_158 [32];
  DWORD local_128 [2];
  _SYSTEM_INFO local_120;
  _MEMORYSTATUSEX local_e8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  ulonglong local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulong64 local_38;
  ulong64 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_158;
  uVar4 = MemoryConstants.TotalVirtual;
  if (MemoryConstants.TotalPhysical == 0) {
    local_e8.ullTotalPhys = 0;
    local_e8.dwLength = 0x40;
    local_e8.dwMemoryLoad = 0;
    local_e8.ullAvailPhys = 0;
    local_e8.ullTotalPageFile = 0;
    local_e8.ullAvailPageFile = 0;
    local_e8.ullTotalVirtual = 0;
    local_e8.ullAvailVirtual = 0;
    local_e8.ullAvailExtendedVirtual = 0;
    GlobalMemoryStatusEx(&local_e8);
    local_120.u = (_union_552)0x0;
    local_120.dwPageSize = 0;
    local_120.lpMinimumApplicationAddress = (LPVOID)0x0;
    local_120.lpMaximumApplicationAddress = (LPVOID)0x0;
    local_120.dwActiveProcessorMask = 0;
    local_120.dwNumberOfProcessors = 0;
    local_120.dwProcessorType = 0;
    local_120.dwAllocationGranularity = 0;
    local_120.wProcessorLevel = 0;
    local_120.wProcessorRevision = 0;
    GetSystemInfo(&local_120);
    MemoryConstants.OsAllocationGranularity = local_120._40_8_ & 0xffffffff;
    MemoryConstants.TotalVirtual = local_e8.ullTotalPageFile;
    MemoryConstants.PageSize = (ulonglong)local_120._0_8_ >> 0x20;
    uVar4 = 1;
    if (local_e8.ullTotalPhys != 0) {
      uVar4 = local_e8.ullTotalPhys;
    }
    uVar5 = uVar4 - 1;
    lVar1 = 0x3f;
    if (uVar5 != 0) {
      for (; uVar5 >> lVar1 == 0; lVar1 = lVar1 + -1) {
      }
    }
    MemoryConstants.TotalPhysical = local_e8.ullTotalPhys;
    cVar6 = (char)lVar1;
    if (uVar5 == 0) {
      cVar6 = -1;
    }
    MemoryConstants.AddressLimit = 1L << (0x40U - ('?' - cVar6) & 0x3f);
    MemoryConstants.TotalPhysicalGB = (uint)(local_e8.ullTotalPhys + 0x3fffffff >> 0x1e);
    MemoryConstants.BinnedPageSize = MemoryConstants.OsAllocationGranularity;
    MemoryConstants.BinnedAllocationGranularity = MemoryConstants.PageSize;
    bVar2 = IsRunningAsJob();
    uVar4 = MemoryConstants.TotalVirtual;
    if (bVar2) {
      local_128[0] = 0;
      local_a8 = 0;
      uStack_a0 = 0;
      local_98 = 0;
      uStack_90 = 0;
      local_88 = 0;
      uStack_80 = 0;
      local_78 = 0;
      uStack_70 = 0;
      local_68 = 0;
      uStack_60 = 0;
      local_58 = 0;
      uStack_50 = 0;
      local_48 = 0;
      uStack_40 = 0;
      local_38 = 0;
      uStack_30 = 0;
      local_28 = 0;
      uStack_20 = 0;
      BVar3 = QueryInformationJobObject
                        ((HANDLE)0x0,JobObjectExtendedLimitInformation,&local_a8,0x90,local_128);
      if (BVar3 == 0) {
        GetLastError();
        uVar4 = MemoryConstants.TotalVirtual;
        if (1 < (byte)LogMemory._0_1_) {
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMemory);
          uVar4 = MemoryConstants.TotalVirtual;
        }
      }
      else {
        uVar4 = MemoryConstants.TotalVirtual;
        if ((local_98 & 0x300) == 0) {
          if (3 < (byte)LogMemory._0_1_) {
            UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogMemory);
            uVar4 = MemoryConstants.TotalVirtual;
          }
        }
        else {
          if ((((uint)local_98 >> 9 & 1) != 0) && (uVar4 = uStack_30, 3 < (byte)LogMemory._0_1_)) {
            UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogMemory);
          }
          if ((((uint)local_98 >> 8 & 1) != 0) && (uVar4 = local_38, 3 < (byte)LogMemory._0_1_)) {
            UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogMemory);
          }
        }
      }
    }
  }
  MemoryConstants.TotalVirtual = uVar4;
  return &MemoryConstants;
}

// GetLLMAllocFunctions @ 141aaaf40

bool __cdecl
FWindowsPlatformMemory::GetLLMAllocFunctions
          (_func___cdecl_void_ptr_ulong64 **param_1,_func___cdecl_void_void_ptr_ulong64 **param_2,
          int *param_3)

{
  *param_1 = LLMAlloc;
  *param_2 = LLMFree;
  *param_3 = 0x1000;
  return true;
}

// GetStats @ 141aade20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

FPlatformMemoryStats * __cdecl
FWindowsPlatformMemory::GetStats(FPlatformMemoryStats *__return_storage_ptr__)

{
  void *pvVar1;
  EMemoryPressureStatus EVar2;
  bool bVar3;
  BOOL BVar4;
  HANDLE pvVar5;
  FGenericPlatformMemoryConstants *pFVar6;
  ulonglong uVar7;
  DWORDLONG DVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined1 auStackY_138 [32];
  undefined1 local_108 [4];
  int local_104;
  DWORD local_100 [2];
  _MEMORYSTATUSEX local_f8;
  undefined8 local_b8;
  longlong lStack_b0;
  longlong local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  longlong lStack_80;
  longlong local_78;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  longlong lStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_138;
  FGenericPlatformMemoryStats::FGenericPlatformMemoryStats
            ((FGenericPlatformMemoryStats *)__return_storage_ptr__);
  pvVar1 = ThreadLocalStoragePointer;
  uVar7 = (ulonglong)_tls_index;
  __return_storage_ptr__->WindowsSpecificMemoryStat = 0;
  __return_storage_ptr__->MemoryPressureStatus = Unknown;
  if ((*(int *)(*(longlong *)((longlong)pvVar1 + uVar7 * 8) + 0x9d4c) < ::_TSS0) &&
     (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    MemoryResourceNotificationHandle =
         CreateMemoryResourceNotification(LowMemoryResourceNotification);
    _Init_thread_footer(&::_TSS0);
  }
  local_f8.ullTotalPhys = 0;
  local_f8.dwLength = 0x40;
  local_f8.dwMemoryLoad = 0;
  local_f8.ullAvailPhys = 0;
  local_f8.ullTotalPageFile = 0;
  local_f8.ullAvailPageFile = 0;
  local_f8.ullTotalVirtual = 0;
  local_f8.ullAvailVirtual = 0;
  local_f8.ullAvailExtendedVirtual = 0;
  GlobalMemoryStatusEx(&local_f8);
  local_b8 = 0;
  lStack_b0 = 0;
  local_78 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  lStack_80 = 0;
  pvVar5 = GetCurrentProcess();
  K32GetProcessMemoryInfo(pvVar5,&local_b8,0x48);
  __return_storage_ptr__->_padding_ = local_f8.ullTotalPhys;
  DVar8 = local_f8.ullAvailPageFile;
  if (local_f8.ullAvailVirtual < local_f8.ullAvailPageFile) {
    DVar8 = local_f8.ullAvailVirtual;
  }
  __return_storage_ptr__->_padding_ = local_f8.ullAvailPhys;
  __return_storage_ptr__->_padding_ = local_f8.ullTotalPageFile;
  __return_storage_ptr__->_padding_ = local_a8;
  __return_storage_ptr__->_padding_ = lStack_b0;
  __return_storage_ptr__->_padding_ = DVar8;
  pvVar1 = MemoryResourceNotificationHandle;
  __return_storage_ptr__->_padding_ = lStack_80;
  __return_storage_ptr__->_padding_ = local_78;
  if ((pvVar1 == (void *)0x0) ||
     (BVar4 = QueryMemoryResourceNotification(pvVar1,&local_104), BVar4 == 0)) {
    EVar2 = FGenericPlatformMemoryStats::GetMemoryPressureStatus
                      ((FGenericPlatformMemoryStats *)__return_storage_ptr__);
  }
  else {
    EVar2 = Nominal;
    if (local_104 != 0) {
      EVar2 = Critical;
    }
  }
  __return_storage_ptr__->MemoryPressureStatus = EVar2;
  if ((GWindowsUseContainerMemory != false) && (bVar3 = IsRunningAsJob(), bVar3)) {
    local_68 = 0;
    uStack_60 = 0;
    local_58 = 0;
    uStack_50 = 0;
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
    lStack_30 = 0;
    local_28 = 0;
    uStack_20 = 0;
    BVar4 = QueryInformationJobObject
                      ((HANDLE)0x0,MaxJobObjectInfoClass|JobObjectBasicAccountingInformation,
                       &local_68,0x50,local_100);
    if (BVar4 == 0) {
      GetLastError();
      if (1 < (byte)LogMemory._0_1_) {
        UE::Logging::Private::BasicLog<2>
                  ((FStaticBasicLogRecord *)&PTR_u_QueryInformatio_1506ef6c0,
                   (FLogCategoryBase *)&LogMemory);
        `FWindowsPlatformMemory::GetStats'::__l10::<lambda_1>::operator()(local_108);
        goto LAB_141aae00f;
      }
    }
    else if (lStack_30 != 0) {
      pFVar6 = GetConstants();
      __return_storage_ptr__->_padding_ = pFVar6->TotalVirtual - lStack_30;
      goto LAB_141aae00f;
    }
    `FWindowsPlatformMemory::GetStats'::__l10::<lambda_1>::operator()(local_108);
  }
LAB_141aae00f:
  if (0 < GWindowsPlatformMemoryGetStatsLimitTotalGB) {
    uVar7 = __return_storage_ptr__->_padding_;
    uVar10 = (longlong)GWindowsPlatformMemoryGetStatsLimitTotalGB * 0x40000000;
    if (uVar10 < uVar7) {
      __return_storage_ptr__->_padding_ = 0;
    }
    else {
      uVar9 = uVar10 - uVar7;
      if ((ulonglong)__return_storage_ptr__->_padding_ < uVar10 - uVar7) {
        uVar9 = __return_storage_ptr__->_padding_;
      }
      __return_storage_ptr__->_padding_ = uVar9;
      uVar7 = uVar10;
    }
    __return_storage_ptr__->_padding_ = uVar7;
    uVar7 = __return_storage_ptr__->_padding_;
    if (uVar10 < uVar7) {
      __return_storage_ptr__->_padding_ = uVar7;
      __return_storage_ptr__->_padding_ = 0;
    }
    else {
      __return_storage_ptr__->_padding_ = uVar10;
      uVar9 = uVar10 - uVar7;
      if ((ulonglong)__return_storage_ptr__->_padding_ < uVar10 - uVar7) {
        uVar9 = __return_storage_ptr__->_padding_;
      }
      __return_storage_ptr__->_padding_ = uVar9;
    }
  }
  return __return_storage_ptr__;
}

// GetStatsForMallocProfiler @ 141aae0e0

void __cdecl FWindowsPlatformMemory::GetStatsForMallocProfiler(FGenericMemoryStats *param_1)

{
  int *piVar1;
  ForElementType<TStringBuilderWithBuffer<wchar_t,64>_> FVar2;
  int iVar3;
  TStringBuilderBase<wchar_t> *this;
  ForElementType<TStringBuilderWithBuffer<wchar_t,64>_> FVar4;
  TPairInitializer<TStringView<wchar_t>_const_&,unsigned___int64_const_&> local_res8;
  wchar_t *local_b8;
  undefined4 local_b0;
  wchar_t **local_a8;
  ulong64 **local_a0;
  FPlatformMemoryStats local_98;
  
  FGenericPlatformMemory::GetStatsForMallocProfiler(param_1);
  GetStats(&local_98);
  piVar1 = &(param_1->Descriptions).ArrayMax;
  local_res8.Value = (ulong64 *)local_98.WindowsSpecificMemoryStat;
  iVar3 = (param_1->Descriptions).ArrayNum;
  if (iVar3 == *piVar1) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<TStringBuilderWithBuffer<wchar_t,64>_>_>
                      (0x8a0,(ForElementType<TStringBuilderWithBuffer<wchar_t,64>_> *)param_1,piVar1
                      );
  }
  (param_1->Descriptions).ArrayNum = iVar3 + 1;
  FVar2 = (param_1->Descriptions).AllocatorInstance.SecondaryData;
  FVar4 = (ForElementType<TStringBuilderWithBuffer<wchar_t,64>_>)param_1;
  if (FVar2 != (ForElementType<TStringBuilderWithBuffer<wchar_t,64>_>)0x0) {
    FVar4 = FVar2;
  }
  this = (TStringBuilderBase<wchar_t> *)((longlong)iVar3 * 0xa0 + (longlong)FVar4);
  this->bIsDynamic = false;
  this->bIsExternal = false;
  this->Base = (wchar_t *)(this + 1);
  this->CurPos = (wchar_t *)(this + 1);
  this->End = (wchar_t *)(this + 5);
  TStringBuilderBase<wchar_t>::Append<wchar_t,0>(this,L"Windows Specific Memory Stat",0x1c);
  local_b8 = this->Base;
  local_a8 = &local_b8;
  local_b0 = (undefined4)((longlong)this->CurPos - (longlong)local_b8 >> 1);
  local_a0 = &local_res8.Value;
  TSet<TTuple<TStringView<wchar_t>,unsigned___int64>,TDefaultMapHashableKeyFuncs<TStringView<wchar_t>,unsigned___int64,0>,TInlineSetAllocator<32,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
  ::Emplace<TPairInitializer<TStringView<wchar_t>_const_&,unsigned___int64_const_&>_>
            ((TSet<TTuple<TStringView<wchar_t>,unsigned___int64>,TDefaultMapHashableKeyFuncs<TStringView<wchar_t>,unsigned___int64,0>,TInlineSetAllocator<32,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
              *)&param_1->Data,&local_res8,(bool *)&local_a8);
  return;
}

// Init @ 141ab1ff0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FWindowsPlatformMemory::Init(void)

{
  bool bVar1;
  FLowLevelMemTracker *this;
  FOutputDeviceRedirector *pFVar2;
  
  if (!bInitDone) {
    bInitDone = true;
    FGenericPlatformMemory::Init();
    bVar1 = IsRunningAsJob();
    if ((bVar1) && (4 < (byte)LogMemory._0_1_)) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogMemory);
    }
    GetConstants();
    if (4 < (byte)LogMemory._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogMemory);
    }
    this = FLowLevelMemTracker::TrackerInstance;
    if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
      this = FLowLevelMemTracker::Construct();
    }
    FLowLevelMemTracker::SetProgramSize(this,0);
    pFVar2 = GetGlobalLogSingleton();
    FGenericPlatformMemory::DumpStats((FOutputDevice *)pFVar2);
    return;
  }
  return;
}

// InternalUpdateStats @ 141ab2750

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FWindowsPlatformMemory::InternalUpdateStats(FPlatformMemoryStats *param_1)

{
  FName FVar1;
  uchar auVar2 [8];
  FName *pFVar3;
  FThreadSafeStaticStat<FStat_STAT_WindowsSpecificMemoryStat> FVar4;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  FName local_res10;
  FStatMessage local_18;
  
  FVar4 = StatPtr_STAT_WindowsSpecificMemoryStat;
  if (StatPtr_STAT_WindowsSpecificMemoryStat ==
      (FThreadSafeStaticStat<FStat_STAT_WindowsSpecificMemoryStat>)0x0) {
    pFVar3 = ::FName::FName(&local_res10,"STAT_WindowsSpecificMemoryStat");
    FVar4 = (FThreadSafeStaticStat<FStat_STAT_WindowsSpecificMemoryStat>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_WindowsSpecificMemoryStat,*pFVar3,
                       L"Windows Specific Memory Stat","STATGROUP_MemoryPlatform","STATCAT_Advanced"
                       ,L"Memory Platform",true,false,ST_int64,false,false,MCR_Physical);
  }
  FVar1 = *(FName *)FVar4;
  auVar2 = (uchar  [8])param_1->WindowsSpecificMemoryStat;
  if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    local_res10 = FVar1;
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    local_18.NameAndInfo.Number = FVar1.Number & 0xffff8fff | 0x8000;
    local_res10 = FVar1;
    local_18.StatData.Pad = auVar2;
    local_18.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(this,&local_18);
    FStatsTrace::Set(&local_res10,(long64)auVar2);
    if (this->ScopeCount == 0) {
      FThreadStats::Flush(this,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(this,false,false);
    }
  }
  return;
}

// MapNamedSharedMemoryRegion @ 141ab5ae0

/* WARNING: Enum "Type": Some values do not have unique names */

FSharedMemoryRegion * __cdecl
FWindowsPlatformMemory::MapNamedSharedMemoryRegion
          (FString *param_1,bool param_2,uint param_3,ulong64 param_4,void *param_5)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  ForAnyElementType FVar4;
  HANDLE hFileMappingObject;
  LPVOID pvVar5;
  FSharedMemoryRegion *pFVar6;
  FSharedMemoryRegion *pFVar7;
  DWORD dwDesiredAccess;
  DWORD flProtect;
  int iVar8;
  FString local_58;
  FString local_48;
  FGuid local_38;
  
  pFVar6 = (FSharedMemoryRegion *)0x0;
  pFVar7 = (FSharedMemoryRegion *)0x0;
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  dwDesiredAccess = 4;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  local_38.A = 0;
  local_38.B = 0;
  local_38.C = 0;
  local_38.D = 0;
  bVar3 = FGuid::ParseExact(param_1,DigitsWithHyphensInBraces,&local_38);
  if (bVar3) {
    local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_58.Data.ArrayNum = 0;
    local_58.Data.ArrayMax = 0;
    FGuid::AppendString(&local_38,&local_58,DigitsWithHyphensInBraces);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    local_48.Data.AllocatorInstance.Data = local_58.Data.AllocatorInstance.Data;
    local_48.Data.ArrayNum = local_58.Data.ArrayNum;
    local_48.Data.ArrayMax = local_58.Data.ArrayMax;
    local_58.Data.ArrayNum = 0;
    local_58.Data.ArrayMax = 0;
    local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  else {
    ::FString::operator=(&local_48,L"Global\\");
    iVar1 = (param_1->Data).ArrayNum;
    iVar8 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar8 = 0;
    }
    ::FString::AppendChars(&local_48,(wchar_t *)(param_1->Data).AllocatorInstance.Data,iVar8);
  }
  if (param_3 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("AccessMode != 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Windows\\WindowsPlatformMemory.cpp"
                       ,0x287,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar7 = (FSharedMemoryRegion *)(*pcVar2)();
      return pFVar7;
    }
  }
  else if (param_3 == 4) {
    dwDesiredAccess = 2;
  }
  else {
    dwDesiredAccess = 4;
    if (param_3 == 6) {
      dwDesiredAccess = 0xf001f;
    }
  }
  if (param_2) {
    if (param_3 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("AccessMode != 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Windows\\WindowsPlatformMemory.cpp"
                         ,0x295,L"");
      flProtect = 2;
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar7 = (FSharedMemoryRegion *)(*pcVar2)();
        return pFVar7;
      }
    }
    else if (param_3 == 4) {
      flProtect = 8;
    }
    else {
      flProtect = 2;
      if (param_3 == 6) {
        flProtect = 4;
      }
    }
    local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)(param_4 >> 0x20);
    FVar4.Data = (FScriptContainerElement *)L"";
    if (local_48.Data.ArrayNum != 0) {
      FVar4.Data = local_48.Data.AllocatorInstance.Data;
    }
    hFileMappingObject =
         CreateFileMappingW((HANDLE)0xffffffffffffffff,param_5,flProtect,(DWORD)(param_4 >> 0x20),
                            (DWORD)param_4,(LPCWSTR)FVar4.Data);
    if (hFileMappingObject == (HANDLE)0x0) {
      GetLastError();
      pFVar7 = pFVar6;
      if (2 < (byte)LogHAL._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogHAL);
      }
      goto LAB_141ab5da6;
    }
  }
  else {
    FVar4.Data = (FScriptContainerElement *)L"";
    if (local_48.Data.ArrayNum != 0) {
      FVar4.Data = local_48.Data.AllocatorInstance.Data;
    }
    hFileMappingObject = OpenFileMappingW(dwDesiredAccess,0,(LPCWSTR)FVar4.Data);
    if (hFileMappingObject == (HANDLE)0x0) {
      GetLastError();
      if (2 < (byte)LogHAL._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogHAL);
      }
      goto LAB_141ab5da6;
    }
  }
  pvVar5 = MapViewOfFile(hFileMappingObject,dwDesiredAccess,0,0,param_4);
  if (pvVar5 == (LPVOID)0x0) {
    GetLastError();
    if (2 < (byte)LogHAL._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogHAL);
    }
    CloseHandle(hFileMappingObject);
    pFVar7 = pFVar6;
  }
  else {
    pFVar6 = ::operator_new(0x120);
    if (pFVar6 != (FSharedMemoryRegion *)0x0) {
      FGenericPlatformMemory::FSharedMemoryRegion::FSharedMemoryRegion
                (pFVar6,&local_48,param_3,pvVar5,param_4);
      *(HANDLE *)pFVar6[1].Name = hFileMappingObject;
      pFVar7 = pFVar6;
    }
  }
LAB_141ab5da6:
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return pFVar7;
}

// MiMallocInit @ 141ab6770

void __cdecl FWindowsPlatformMemory::MiMallocInit(void)

{
  HMODULE pHVar1;
  code *pcVar2;
  mi_ext_win32_allocators_s local_28;
  
  pcVar2 = (code *)0x0;
  local_28.VirtualAlloc = MiMallocVirtualAlloc;
  GOSVirtualAlloc2 =
       (_func___cdecl_void_ptr_void_ptr_void_ptr_ulong64_ulong_ulong_void_ptr_ulong *)0x0;
  local_28.VirtualFree = MiMallocVirtualFree;
  pHVar1 = LoadLibraryW(L"kernelbase.dll");
  if (pHVar1 != (HMODULE)0x0) {
    GOSVirtualAlloc2 =
         (_func___cdecl_void_ptr_void_ptr_void_ptr_ulong64_ulong_ulong_void_ptr_ulong *)
         GetProcAddress(pHVar1,"VirtualAlloc2FromApp");
    if (GOSVirtualAlloc2 ==
        (_func___cdecl_void_ptr_void_ptr_void_ptr_ulong64_ulong_ulong_void_ptr_ulong *)0x0) {
      GOSVirtualAlloc2 =
           (_func___cdecl_void_ptr_void_ptr_void_ptr_ulong64_ulong_ulong_void_ptr_ulong *)
           GetProcAddress(pHVar1,"VirtualAlloc2");
    }
    FreeLibrary(pHVar1);
  }
  GOSNtAllocateVirtualMemoryEx =
       (_func___cdecl_long_void_ptr_void_ptr_ptr_ulong64_ptr_ulong_ulong_void_ptr_ulong *)0x0;
  local_28.VirtualAlloc2 = pcVar2;
  if (GOSVirtualAlloc2 !=
      (_func___cdecl_void_ptr_void_ptr_void_ptr_ulong64_ulong_ulong_void_ptr_ulong *)0x0) {
    local_28.VirtualAlloc2 = MiMallocVirtualAlloc2;
  }
  pHVar1 = LoadLibraryW(L"ntdll.dll");
  if (pHVar1 != (HMODULE)0x0) {
    GOSNtAllocateVirtualMemoryEx =
         (_func___cdecl_long_void_ptr_void_ptr_ptr_ulong64_ptr_ulong_ulong_void_ptr_ulong *)
         GetProcAddress(pHVar1,"NtAllocateVirtualMemoryEx");
    FreeLibrary(pHVar1);
  }
  if (GOSNtAllocateVirtualMemoryEx !=
      (_func___cdecl_long_void_ptr_void_ptr_ptr_ulong64_ptr_ulong_ulong_void_ptr_ulong *)0x0) {
    pcVar2 = MiMallocNtAllocateVirtualMemoryEx;
  }
  local_28.NtAllocateVirtualMemoryEx = pcVar2;
  mi_ext_set_win32_allocators(&local_28);
  return;
}

// PageProtect @ 141ab91b0

bool __cdecl
FWindowsPlatformMemory::PageProtect(void *param_1,ulong64 param_2,bool param_3,bool param_4)

{
  BOOL BVar1;
  DWORD flNewProtect;
  DWORD local_res18 [4];
  
  if (!param_3) {
    flNewProtect = 1;
    if (param_4) {
      flNewProtect = 4;
    }
    BVar1 = VirtualProtect(param_1,param_2,flNewProtect,local_res18);
    return BVar1 != 0;
  }
  if (param_4) {
    BVar1 = VirtualProtect(param_1,param_2,4,local_res18);
    return BVar1 != 0;
  }
  BVar1 = VirtualProtect(param_1,param_2,2,local_res18);
  return BVar1 != 0;
}

// UnmapNamedSharedMemoryRegion @ 141ac3950

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl FWindowsPlatformMemory::UnmapNamedSharedMemoryRegion(FSharedMemoryRegion *param_1)

{
  BOOL BVar1;
  bool bVar2;
  
  bVar2 = true;
  if (param_1 != (FSharedMemoryRegion *)0x0) {
    BVar1 = UnmapViewOfFile(param_1->Address);
    bVar2 = true;
    if (BVar1 == 0) {
      bVar2 = false;
      GetLastError();
      if (2 < (byte)LogHAL._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogHAL);
      }
    }
    BVar1 = CloseHandle(*(HANDLE *)param_1[1].Name);
    if (BVar1 == 0) {
      bVar2 = false;
      GetLastError();
      if (2 < (byte)LogHAL._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogHAL);
      }
    }
    ::operator_delete(param_1,0x120);
  }
  return bVar2;
}

// operator() @ 150480220

bool __thiscall `FWindowsPlatformMemory::GetStats'::__l10::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_252576658626707080>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_252576658626707080>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

