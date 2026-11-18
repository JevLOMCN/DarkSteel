// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 8

// GetTestFlags @ 14189c350

EAutomationTestFlags __thiscall FCStringStrstrTest::GetTestFlags(FCStringStrstrTest *this)

{
  return EngineFilter|ProgramContext|CommandletContext|ServerContext|ClientContext|EditorContext;
}

// IsStressTest @ 14189c360

bool __thiscall FCStringStrstrTest::IsStressTest(FCStringStrstrTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 14189c370

uint __thiscall FCStringStrstrTest::GetRequiredDeviceNum(FCStringStrstrTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 14189c380

FString * __thiscall
FCStringStrstrTest::GetTestSourceFileName(FCStringStrstrTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\CStringTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 14189c3b0

int __thiscall FCStringStrstrTest::GetTestSourceFileLine(FCStringStrstrTest *this)

{
  return 100;
}

// GetTests @ 14189c3c0

/* WARNING: Removing unreachable block (ram,0x00014189c4ad) */
/* WARNING: Removing unreachable block (ram,0x00014189c578) */

void __thiscall
FCStringStrstrTest::GetTests
          (FCStringStrstrTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"System.Core.Misc.CString.Strstr");
  pFVar4 = (param_1->AllocatorInstance).Data;
  if (((pFVar4 <= (FScriptContainerElement *)&local_18) &&
      ((FScriptContainerElement *)&local_18 < pFVar4 + (longlong)param_1->ArrayMax * 0x10)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar3 = param_1->ArrayNum;
  if (iVar3 == param_1->ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar3 + 1;
  pFVar4 = (param_1->AllocatorInstance).Data + (longlong)iVar3 * 0x10;
  *(undefined8 *)pFVar4 = 0;
  *(FScriptContainerElement **)pFVar4 = local_18.Data.AllocatorInstance.Data;
  *(int *)(pFVar4 + 8) = local_18.Data.ArrayNum;
  *(int *)(pFVar4 + 0xc) = local_18.Data.ArrayMax;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar4 = (param_2->AllocatorInstance).Data;
  local_28 = 0;
  local_20 = 0;
  if (((pFVar4 <= (FScriptContainerElement *)&local_28) &&
      ((FScriptContainerElement *)&local_28 < pFVar4 + (longlong)param_2->ArrayMax * 0x10)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar3 = param_2->ArrayNum;
  if (iVar3 == param_2->ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  param_2->ArrayNum = iVar3 + 1;
  pFVar4 = (param_2->AllocatorInstance).Data + (longlong)iVar3 * 0x10;
  *(undefined8 *)pFVar4 = 0;
  *(undefined8 *)pFVar4 = local_28;
  *(undefined4 *)(pFVar4 + 8) = (undefined4)local_20;
  *(undefined4 *)(pFVar4 + 0xc) = local_20._4_4_;
  return;
}

// RunTest @ 14189c5a0

bool __thiscall FCStringStrstrTest::RunTest(FCStringStrstrTest *this,FString *param_1)

{
  code *pcVar1;
  int iVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  wchar_t wVar5;
  wchar_t wVar6;
  uint uVar7;
  FString local_38;
  
  pwVar3 = wcsstr(L"ABACADAB",L"A");
  if (pwVar3 != L"ABACADAB") {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_38,L"Strstr(\"%s\", \"%s\") did not equal index \"%d\".");
    (*pcVar1)(this,&local_38);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  uVar7 = 0x41;
  pwVar4 = L"BACADAB";
  wVar5 = L'A';
  pwVar3 = L"ABACADAB";
  do {
    pwVar3 = pwVar3 + 1;
    if (((wchar_t)(wVar5 - (-(ushort)((ushort)wVar5 - 0x61 < 0x1a) & 0x20)) == 0x41) &&
       (iVar2 = FGenericPlatformStricmp::Strnicmp(pwVar3,L"",0), iVar2 == 0)) {
      if (pwVar3 == L"BACADAB") goto LAB_14189c6c6;
      break;
    }
    wVar5 = *pwVar3;
  } while (wVar5 != L'\0');
  pcVar1 = *(code **)(*(longlong *)this + 0x28);
  ::FString::PrintfImpl(&local_38,L"Stristr(\"%s\", \"%s\") did not equal index \"%d\".");
  (*pcVar1)(this,&local_38);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
LAB_14189c6c6:
  pwVar3 = wcsstr(L"ABACADAB",L"a");
  if (pwVar3 != (wchar_t *)0x0) {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_38,L"Strstr(\"%s\", \"%s\") did not equal index \"%d\".");
    (*pcVar1)(this,&local_38);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  wVar6 = L'A';
  pwVar3 = L"ABACADAB";
  wVar5 = wVar6;
  do {
    pwVar3 = pwVar3 + 1;
    if (((wchar_t)(wVar5 - (-(ushort)((ushort)wVar5 - 0x61 < 0x1a) & 0x20)) == 0x41) &&
       (iVar2 = FGenericPlatformStricmp::Strnicmp(pwVar3,L"",0), iVar2 == 0)) {
      if (pwVar3 == L"BACADAB") goto LAB_14189c7b6;
      break;
    }
    wVar5 = *pwVar3;
  } while (wVar5 != L'\0');
  pcVar1 = *(code **)(*(longlong *)this + 0x28);
  ::FString::PrintfImpl(&local_38,L"Stristr(\"%s\", \"%s\") did not equal index \"%d\".");
  (*pcVar1)(this,&local_38,0);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
LAB_14189c7b6:
  pwVar3 = wcsstr(L"ABACADAB",L"BAC");
  if (pwVar3 != L"BACADAB") {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_38,L"Strstr(\"%s\", \"%s\") did not equal index \"%d\".");
    (*pcVar1)(this,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  pwVar3 = L"ABACADAB";
  wVar5 = wVar6;
  do {
    pwVar3 = pwVar3 + 1;
    if (((wchar_t)(wVar5 - (-(ushort)((ushort)wVar5 - 0x61 < 0x1a) & 0x20)) == 0x42) &&
       (iVar2 = FGenericPlatformStricmp::Strnicmp(pwVar3,L"AC",2), iVar2 == 0)) {
      if (pwVar3 == L"ACADAB") goto LAB_14189c8ac;
      break;
    }
    wVar5 = *pwVar3;
  } while (wVar5 != L'\0');
  pcVar1 = *(code **)(*(longlong *)this + 0x28);
  ::FString::PrintfImpl(&local_38,L"Stristr(\"%s\", \"%s\") did not equal index \"%d\".");
  (*pcVar1)(this,&local_38,0);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
LAB_14189c8ac:
  pwVar3 = wcsstr(L"ABACADAB",L"BaC");
  if (pwVar3 != (wchar_t *)0x0) {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_38,L"Strstr(\"%s\", \"%s\") did not equal index \"%d\".");
    (*pcVar1)(this,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  pwVar3 = L"ABACADAB";
  do {
    pwVar3 = pwVar3 + 1;
    if (((wchar_t)(wVar6 - (-(ushort)((ushort)wVar6 - 0x61 < 0x1a) & 0x20)) == 0x42) &&
       (iVar2 = FGenericPlatformStricmp::Strnicmp(pwVar3,L"aC",2), iVar2 == 0)) {
      if (pwVar3 == L"ACADAB") goto LAB_14189c99c;
      break;
    }
    wVar6 = *pwVar3;
  } while (wVar6 != L'\0');
  pcVar1 = *(code **)(*(longlong *)this + 0x28);
  ::FString::PrintfImpl(&local_38,L"Stristr(\"%s\", \"%s\") did not equal index \"%d\".");
  (*pcVar1)(this,&local_38,0);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
LAB_14189c99c:
  pwVar3 = wcsstr(L"ABACADAB",L"BAC");
  if (pwVar3 != L"BACADAB") {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_38,L"Strstr(\"%s\", \"%s\") did not equal index \"%d\".");
    (*pcVar1)(this,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  wVar6 = L'A';
  pwVar3 = L"ABACADAB";
  wVar5 = wVar6;
  do {
    pwVar3 = pwVar3 + 1;
    if (((wchar_t)(wVar5 - (-(ushort)((ushort)wVar5 - 0x61 < 0x1a) & 0x20)) == 0x42) &&
       (iVar2 = FGenericPlatformStricmp::Strnicmp(pwVar3,L"AC",2), iVar2 == 0)) {
      if (pwVar3 == L"ACADAB") goto LAB_14189ca8c;
      break;
    }
    wVar5 = *pwVar3;
  } while (wVar5 != L'\0');
  pcVar1 = *(code **)(*(longlong *)this + 0x28);
  ::FString::PrintfImpl(&local_38,L"Stristr(\"%s\", \"%s\") did not equal index \"%d\".");
  (*pcVar1)(this,&local_38,0);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
LAB_14189ca8c:
  pwVar3 = wcsstr(L"ABACADAB",L"BaC");
  if (pwVar3 != (wchar_t *)0x0) {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_38,L"Strstr(\"%s\", \"%s\") did not equal index \"%d\".");
    (*pcVar1)(this,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  pwVar3 = L"ABACADAB";
  wVar5 = wVar6;
  do {
    pwVar3 = pwVar3 + 1;
    if (((wchar_t)(wVar5 - (-(ushort)((ushort)wVar5 - 0x61 < 0x1a) & 0x20)) == 0x42) &&
       (iVar2 = FGenericPlatformStricmp::Strnicmp(pwVar3,L"aC",2), iVar2 == 0)) {
      if (pwVar3 == L"ACADAB") goto LAB_14189cb7c;
      break;
    }
    wVar5 = *pwVar3;
  } while (wVar5 != L'\0');
  pcVar1 = *(code **)(*(longlong *)this + 0x28);
  ::FString::PrintfImpl(&local_38,L"Stristr(\"%s\", \"%s\") did not equal index \"%d\".");
  (*pcVar1)(this,&local_38,0);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
LAB_14189cb7c:
  pwVar3 = wcsstr(L"ABACADAB",L"DAB");
  if (pwVar3 != L"DAB") {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_38,L"Strstr(\"%s\", \"%s\") did not equal index \"%d\".");
    (*pcVar1)(this,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  pwVar3 = L"ABACADAB";
  wVar5 = wVar6;
  do {
    pwVar3 = pwVar3 + 1;
    if (((wchar_t)(wVar5 - (-(ushort)((ushort)wVar5 - 0x61 < 0x1a) & 0x20)) == 0x44) &&
       (iVar2 = FGenericPlatformStricmp::Strnicmp(pwVar3,L"AB",2), iVar2 == 0)) {
      if (pwVar3 == L"AB") goto LAB_14189cc83;
      break;
    }
    wVar5 = *pwVar3;
  } while (wVar5 != L'\0');
  pcVar1 = *(code **)(*(longlong *)this + 0x28);
  ::FString::PrintfImpl(&local_38,L"Stristr(\"%s\", \"%s\") did not equal index \"%d\".");
  (*pcVar1)(this,&local_38,0);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
LAB_14189cc83:
  pwVar3 = wcsstr(L"ABACADAB",L"dab");
  if (pwVar3 != (wchar_t *)0x0) {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_38,L"Strstr(\"%s\", \"%s\") did not equal index \"%d\".");
    (*pcVar1)(this,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  pwVar3 = L"ABACADAB";
  wVar5 = wVar6;
  do {
    pwVar3 = pwVar3 + 1;
    if (((wchar_t)(wVar5 - (-(ushort)((ushort)wVar5 - 0x61 < 0x1a) & 0x20)) == 0x44) &&
       (iVar2 = FGenericPlatformStricmp::Strnicmp(pwVar3,L"ab",2), iVar2 == 0)) {
      if (pwVar3 == L"AB") goto LAB_14189cd7c;
      break;
    }
    wVar5 = *pwVar3;
  } while (wVar5 != L'\0');
  pcVar1 = *(code **)(*(longlong *)this + 0x28);
  ::FString::PrintfImpl(&local_38,L"Stristr(\"%s\", \"%s\") did not equal index \"%d\".");
  (*pcVar1)(this,&local_38,0);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
LAB_14189cd7c:
  pwVar3 = wcsstr(L"ABACADAB",L"ABACADAB");
  if (pwVar3 != L"ABACADAB") {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_38,L"Strstr(\"%s\", \"%s\") did not equal index \"%d\".");
    (*pcVar1)(this,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  pwVar3 = L"ABACADAB";
  wVar5 = wVar6;
  do {
    pwVar3 = pwVar3 + 1;
    if (((wchar_t)(wVar5 - (-(ushort)((ushort)wVar5 - 0x61 < 0x1a) & 0x20)) == 0x41) &&
       (iVar2 = FGenericPlatformStricmp::Strnicmp(pwVar3,L"BACADAB",7), iVar2 == 0)) {
      if (pwVar3 == L"BACADAB") goto LAB_14189ce51;
      break;
    }
    wVar5 = *pwVar3;
  } while (wVar5 != L'\0');
  pcVar1 = *(code **)(*(longlong *)this + 0x28);
  ::FString::PrintfImpl(&local_38,L"Stristr(\"%s\", \"%s\") did not equal index \"%d\".");
  (*pcVar1)(this,&local_38,0);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
LAB_14189ce51:
  pwVar3 = wcsstr(L"ABACADAB",L"abacadab");
  if (pwVar3 != (wchar_t *)0x0) {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_38,L"Strstr(\"%s\", \"%s\") did not equal index \"%d\".");
    (*pcVar1)(this,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  pwVar3 = L"ABACADAB";
  do {
    pwVar3 = pwVar3 + 1;
    if (((wchar_t)(wVar6 - (-(ushort)((ushort)wVar6 - 0x61 < 0x1a) & 0x20)) == 0x41) &&
       (iVar2 = FGenericPlatformStricmp::Strnicmp(pwVar3,L"bacadab",7), iVar2 == 0)) {
      if (pwVar3 == L"BACADAB") goto LAB_14189cf39;
      break;
    }
    wVar6 = *pwVar3;
  } while (wVar6 != L'\0');
  pcVar1 = *(code **)(*(longlong *)this + 0x28);
  ::FString::PrintfImpl(&local_38,L"Stristr(\"%s\", \"%s\") did not equal index \"%d\".");
  (*pcVar1)(this,&local_38);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
LAB_14189cf39:
  pwVar3 = wcsstr(L"ABACADAB",L"F");
  if (pwVar3 != (wchar_t *)0x0) {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_38,L"Strstr(\"%s\", \"%s\") did not equal index \"%d\".");
    (*pcVar1)(this,&local_38);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  wVar6 = L'A';
  pwVar3 = L"ABACADAB";
  wVar5 = wVar6;
  do {
    pwVar3 = pwVar3 + 1;
    if (((wchar_t)(wVar5 - (-(ushort)((ushort)wVar5 - 0x61 < 0x1a) & 0x20)) == 0x46) &&
       (iVar2 = FGenericPlatformStricmp::Strnicmp(pwVar3,L"",0), iVar2 == 0)) {
      if (pwVar3 != (wchar_t *)&DAT_00000002) {
        pcVar1 = *(code **)(*(longlong *)this + 0x28);
        ::FString::PrintfImpl(&local_38,L"Stristr(\"%s\", \"%s\") did not equal index \"%d\".");
        (*pcVar1)(this,&local_38,0);
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
      }
      break;
    }
    wVar5 = *pwVar3;
  } while (wVar5 != L'\0');
  pwVar3 = wcsstr(L"ABACADAB",L"DABZ");
  if (pwVar3 != (wchar_t *)0x0) {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_38,L"Strstr(\"%s\", \"%s\") did not equal index \"%d\".");
    (*pcVar1)(this,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  pwVar3 = L"ABACADAB";
  wVar5 = wVar6;
  do {
    pwVar3 = pwVar3 + 1;
    if (((wchar_t)(wVar5 - (-(ushort)((ushort)wVar5 - 0x61 < 0x1a) & 0x20)) == 0x44) &&
       (iVar2 = FGenericPlatformStricmp::Strnicmp(pwVar3,L"ABZ",3), iVar2 == 0)) {
      if (pwVar3 != (wchar_t *)&DAT_00000002) {
        pcVar1 = *(code **)(*(longlong *)this + 0x28);
        ::FString::PrintfImpl(&local_38,L"Stristr(\"%s\", \"%s\") did not equal index \"%d\".");
        (*pcVar1)(this,&local_38,0);
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
      }
      break;
    }
    wVar5 = *pwVar3;
  } while (wVar5 != L'\0');
  pwVar3 = wcsstr(L"ABACADAB",L"ABACADABA");
  if (pwVar3 != (wchar_t *)0x0) {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_38,L"Strstr(\"%s\", \"%s\") did not equal index \"%d\".");
    (*pcVar1)(this,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  pwVar3 = L"ABACADAB";
  do {
    pwVar3 = pwVar3 + 1;
    if (((wchar_t)(wVar6 - (-(ushort)((ushort)wVar6 - 0x61 < 0x1a) & 0x20)) == 0x41) &&
       (iVar2 = FGenericPlatformStricmp::Strnicmp(pwVar3,L"BACADABA",8), iVar2 == 0)) {
      if (pwVar3 != (wchar_t *)&DAT_00000002) {
        pcVar1 = *(code **)(*(longlong *)this + 0x28);
        ::FString::PrintfImpl(&local_38,L"Stristr(\"%s\", \"%s\") did not equal index \"%d\".");
        (*pcVar1)(this,&local_38,0);
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
      }
      break;
    }
    wVar6 = *pwVar3;
  } while (wVar6 != L'\0');
  pwVar3 = wcsstr(L"ABACADAB",L"NoMatchLongerString");
  if (pwVar3 != (wchar_t *)0x0) {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_38,L"Strstr(\"%s\", \"%s\") did not equal index \"%d\".");
    (*pcVar1)(this,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  while (((ushort)((short)uVar7 - (-(ushort)(uVar7 - 0x61 < 0x1a) & 0x20)) != 0x4e ||
         (iVar2 = FGenericPlatformStricmp::Strnicmp(pwVar4,L"oMatchLongerString",0x12), iVar2 != 0))
        ) {
    wVar5 = *pwVar4;
    uVar7 = (uint)(ushort)wVar5;
    pwVar4 = pwVar4 + 1;
    if (wVar5 == L'\0') {
LAB_14189d2f4:
      pwVar3 = wcsstr(L"",L"FindText");
      if (pwVar3 != (wchar_t *)0x0) {
        pcVar1 = *(code **)(*(longlong *)this + 0x28);
        ::FString::PrintfImpl(&local_38,L"Strstr(\"%s\", \"%s\") did not equal index \"%d\".");
        (*pcVar1)(this,&local_38,0);
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
      }
      pwVar3 = wcsstr(L"",L"");
      if (pwVar3 != L"") {
        pcVar1 = *(code **)(*(longlong *)this + 0x28);
        ::FString::PrintfImpl(&local_38,L"Strstr(\"%s\", \"%s\") did not equal index \"%d\".");
        (*pcVar1)(this,&local_38,0);
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
      }
      pwVar3 = wcsstr(L"ABACADAB",L"");
      if (pwVar3 != L"ABACADAB") {
        pcVar1 = *(code **)(*(longlong *)this + 0x28);
        ::FString::PrintfImpl(&local_38,L"Strstr(\"%s\", \"%s\") did not equal index \"%d\".");
        (*pcVar1)(this,&local_38,0);
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
      }
      return true;
    }
  }
  if (pwVar4 != (wchar_t *)&DAT_00000002) {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_38,L"Stristr(\"%s\", \"%s\") did not equal index \"%d\".");
    (*pcVar1)(this,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  goto LAB_14189d2f4;
}

// GetBeautifiedTestName @ 14189d420

FString * __thiscall
FCStringStrstrTest::GetBeautifiedTestName(FCStringStrstrTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"System.Core.Misc.CString.Strstr");
  return __return_storage_ptr__;
}

