// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 1

// FWindows11SupportCheck @ 141a9c2a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

FWindows11SupportCheck * __thiscall
`FWindowsPlatformMisc::SupportsWindows11'::__l2::FWindows11SupportCheck::FWindows11SupportCheck
          (void *this)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  HMODULE hLibModule;
  code *pcVar4;
  byte bVar5;
  undefined **ppuVar6;
  int *piVar7;
  byte bVar8;
  undefined1 auStack_48 [32];
  undefined2 local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_48;
  piVar7 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar7 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      local_20 = 0;
      uStack_18 = 0;
      iVar2 = Tbsi_GetDeviceInfo(0x10,&local_20);
      if (iVar2 == 0) {
        bSupportsTpm2 = local_20._4_4_ == 2;
      }
      else {
        bSupportsTpm2 = false;
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  bVar1 = bSupportsTpm2;
  *(bool *)this = bSupportsTpm2;
  if (::_TSS0 <= *piVar7) goto LAB_141a9c2fe;
  _Init_thread_header(&::_TSS0);
  if (::_TSS0 != -1) goto LAB_141a9c2fe;
  hLibModule = FWindowsPlatformProcess::GetDllHandle(L"ntdll.dll");
  if (hLibModule == (HMODULE)0x0) {
    if (2 < (byte)LogWindows._0_1_) {
      UE::Logging::Private::BasicLog<3>
                ((FStaticBasicLogRecord *)&PTR_u_Failed_to_load__1506f26d8,
                 (FLogCategoryBase *)&LogWindows);
    }
LAB_141a9c464:
    bHasSecureBootSupport = false;
  }
  else {
    pcVar4 = FWindowsPlatformProcess::GetDllExport(hLibModule,L"NtQuerySystemInformation");
    if (pcVar4 == (code *)0x0) {
      if (2 < (byte)LogWindows._0_1_) {
        ppuVar6 = &PTR_u_Failed_to_load__1506f2638;
LAB_141a9c431:
        UE::Logging::Private::BasicLog<3>
                  ((FStaticBasicLogRecord *)ppuVar6,(FLogCategoryBase *)&LogWindows);
      }
LAB_141a9c43d:
      FreeLibrary(hLibModule);
      goto LAB_141a9c464;
    }
    local_28 = 0;
    iVar2 = (*pcVar4)(SecureBootInformationClassId,&local_28,2,0);
    if (iVar2 != 0) {
      if (2 < (byte)LogWindows._0_1_) {
        ppuVar6 = &PTR_u_Failed_to_retri_1506f25c0;
        goto LAB_141a9c431;
      }
      goto LAB_141a9c43d;
    }
    FreeLibrary(hLibModule);
    bHasSecureBootSupport = (bool)local_28._1_1_;
  }
  _Init_thread_footer(&::_TSS0);
LAB_141a9c2fe:
  bVar8 = bVar1 & bHasSecureBootSupport;
  *(byte *)this = bVar8;
  iVar2 = FWindowsPlatformMisc::NumberOfCores();
  bVar8 = 1 < iVar2 & bVar8;
  *(byte *)this = bVar8;
  uVar3 = FGenericPlatformMemory::GetPhysicalGBRam();
  bVar5 = 0;
  if (3 < uVar3) {
    bVar5 = bVar8;
  }
  *(byte *)this = bVar5;
  return this;
}

