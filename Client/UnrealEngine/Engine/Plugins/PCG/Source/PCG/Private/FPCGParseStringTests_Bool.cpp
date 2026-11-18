// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 8

// GetTestFlags @ 149fd24a0

EAutomationTestFlags __thiscall
FPCGParseStringTests_Bool::GetTestFlags(FPCGParseStringTests_Bool *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 149fd24b0

bool __thiscall FPCGParseStringTests_Bool::IsStressTest(FPCGParseStringTests_Bool *this)

{
  return false;
}

// GetRequiredDeviceNum @ 149fd24c0

uint __thiscall FPCGParseStringTests_Bool::GetRequiredDeviceNum(FPCGParseStringTests_Bool *this)

{
  return 1;
}

// GetTestSourceFileName @ 149fd24d0

FString * __thiscall
FPCGParseStringTests_Bool::GetTestSourceFileName
          (FPCGParseStringTests_Bool *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Elements\\PCGParseStringTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 149fd2500

int __thiscall FPCGParseStringTests_Bool::GetTestSourceFileLine(FPCGParseStringTests_Bool *this)

{
  return 0x43;
}

// GetTests @ 149fd2510

/* WARNING: Removing unreachable block (ram,0x000149fd25fd) */
/* WARNING: Removing unreachable block (ram,0x000149fd26c8) */

void __thiscall
FPCGParseStringTests_Bool::GetTests
          (FPCGParseStringTests_Bool *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"Plugins.PCG.ParseString.Bool");
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

// RunTest @ 149fd26f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall FPCGParseStringTests_Bool::RunTest(FPCGParseStringTests_Bool *this,FString *param_1)

{
  ulonglong *puVar1;
  bool bVar2;
  longlong lVar3;
  ulonglong *puVar4;
  undefined1 auStack_108 [32];
  TArrayView<bool_const_,int> local_e8;
  TArrayView<FString_const_,int> local_d8;
  bool local_c8 [16];
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  ulonglong local_18 [2];
  
  local_18[0] = __security_cookie.value ^ (ulonglong)auStack_108;
  local_c8[0] = true;
  local_c8[1] = false;
  local_c8[2] = true;
  local_c8[3] = false;
  local_e8.DataPtr = local_c8;
  local_c8[4] = true;
  local_c8[5] = false;
  local_c8[6] = false;
  local_c8[7] = true;
  lVar3 = 10;
  local_e8.ArrayNum = 10;
  local_c8[8] = true;
  local_c8[9] = false;
  ::FString::FString(&local_b8,"On");
  ::FString::FString(&local_a8,"Off");
  ::FString::FString(&local_98,"True");
  ::FString::FString(&local_88,"False");
  ::FString::FString(&local_78,"Yes");
  ::FString::FString(&local_68,"No");
  ::FString::FString(&local_58,"0");
  ::FString::FString(&local_48,"1");
  ::FString::FString(&local_38,"54");
  ::FString::FString(&local_28,"Blabla");
  local_d8.DataPtr = &local_b8;
  local_d8.ArrayNum = 10;
  bVar2 = FPCGParseStringTestsBase::RunTestInternal<bool>
                    ((FPCGParseStringTestsBase *)this,&local_d8,&local_e8);
  puVar4 = local_18;
  do {
    puVar1 = puVar4 + -2;
    puVar4 = puVar4 + -2;
    lVar3 = lVar3 + -1;
    if ((void *)*puVar1 != (void *)0x0) {
      FMemory::Free((void *)*puVar1);
    }
  } while (lVar3 != 0);
  return bVar2;
}

// GetBeautifiedTestName @ 149fd2870

FString * __thiscall
FPCGParseStringTests_Bool::GetBeautifiedTestName
          (FPCGParseStringTests_Bool *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"Plugins.PCG.ParseString.Bool");
  return __return_storage_ptr__;
}

