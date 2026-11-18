// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Networking
// Functions: 8

// GetTestFlags @ 1431190b0

EAutomationTestFlags __thiscall FIPv4AddressTest::GetTestFlags(FIPv4AddressTest *this)

{
  return SmokeFilter|ProgramContext|CommandletContext|ServerContext|ClientContext|EditorContext;
}

// IsStressTest @ 1431190c0

bool __thiscall FIPv4AddressTest::IsStressTest(FIPv4AddressTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 1431190d0

uint __thiscall FIPv4AddressTest::GetRequiredDeviceNum(FIPv4AddressTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 1431190e0

FString * __thiscall
FIPv4AddressTest::GetTestSourceFileName(FIPv4AddressTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Networking\\Private\\Tests\\IPv4AddressTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 143119110

int __thiscall FIPv4AddressTest::GetTestSourceFileLine(FIPv4AddressTest *this)

{
  return 9;
}

// GetTests @ 143119120

/* WARNING: Removing unreachable block (ram,0x00014311920d) */
/* WARNING: Removing unreachable block (ram,0x0001431192d8) */

void __thiscall
FIPv4AddressTest::GetTests
          (FIPv4AddressTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"System.Engine.Networking.IPv4.IPv4Address");
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

// RunTest @ 143119300

bool __thiscall FIPv4AddressTest::RunTest(FIPv4AddressTest *this,FString *param_1)

{
  code *pcVar1;
  int iVar2;
  bool bVar3;
  FIPv4Address_u_0 local_res18 [4];
  FString local_38;
  FString local_28;
  FString local_18;
  
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"169.254.0.1 must be a link local address",true);
  FAutomationTestBase::TestFalse
            ((FAutomationTestBase *)this,L"168.254.0.1 must not be a link local address",false);
  FAutomationTestBase::TestFalse
            ((FAutomationTestBase *)this,L"169.253.0.1 must not be a link local address",false);
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"127.0.0.1 must be a loopback address",true);
  FAutomationTestBase::TestFalse
            ((FAutomationTestBase *)this,L"128.0.0.1 must not be a loopback address",false);
  FAutomationTestBase::TestFalse
            ((FAutomationTestBase *)this,L"223.255.255.255 must not be a multicast address",false);
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"224.0.0.0 must be a multicast address",true);
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"239.255.255.255 must be a multicast address",true);
  FAutomationTestBase::TestFalse
            ((FAutomationTestBase *)this,L"240.0.0.0 must not be a multicast address",false);
  ::FString::FString(&local_28,L"1.2.3.4");
  ::FString::PrintfImpl(&local_38,L"%i.%i.%i.%i");
  if (local_38.Data.ArrayNum == local_28.Data.ArrayNum) {
    if (local_38.Data.ArrayNum < 2) goto LAB_143119456;
    iVar2 = FGenericPlatformStricmp::Stricmp
                      ((wchar_t *)local_38.Data.AllocatorInstance.Data,
                       (wchar_t *)local_28.Data.AllocatorInstance.Data);
    bVar3 = iVar2 == 0;
  }
  else {
    bVar3 = local_38.Data.ArrayNum + local_28.Data.ArrayNum == 1;
  }
  if (!bVar3) {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_18,L"%s: The two values are not equal.");
    (*pcVar1)(this,&local_18,0);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
LAB_143119456:
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_18,L"1.2.3.4");
  bVar3 = FIPv4Address::Parse(&local_18,(FIPv4Address *)&local_res18[0]._s_0);
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"Parsing valid strings must succeed (1.2.3.4)",bVar3);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (local_res18[0].Value != 0x1020304) {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_18,L"%s: The two values are not equal.");
    (*pcVar1)(this,&local_18,0);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  ::FString::FString(&local_18,L"");
  bVar3 = FIPv4Address::Parse(&local_18,(FIPv4Address *)&local_res18[0]._s_0);
  FAutomationTestBase::TestFalse
            ((FAutomationTestBase *)this,L"Parsing invalid strings must fail (empty)",bVar3);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_18,L"1.2.3");
  bVar3 = FIPv4Address::Parse(&local_18,(FIPv4Address *)&local_res18[0]._s_0);
  FAutomationTestBase::TestFalse
            ((FAutomationTestBase *)this,L"Parsing invalid strings must fail (1.2.3)",bVar3);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_18,L"1.2.3.4.");
  bVar3 = FIPv4Address::Parse(&local_18,(FIPv4Address *)&local_res18[0]._s_0);
  FAutomationTestBase::TestFalse
            ((FAutomationTestBase *)this,L"Parsing invalid strings must fail (1.2.3.4.)",bVar3);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_18,L".1.2.3.4");
  bVar3 = FIPv4Address::Parse(&local_18,(FIPv4Address *)&local_res18[0]._s_0);
  FAutomationTestBase::TestFalse
            ((FAutomationTestBase *)this,L"Parsing invalid strings must fail (.1.2.3.4)",bVar3);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"10.0.0.1 must be a site local address",true);
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"172.16.0.1 must be a site local address",true);
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"172.31.0.1 must be a site local address",true);
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"192.168.0.1 must be a site local address",true);
  FAutomationTestBase::TestFalse
            ((FAutomationTestBase *)this,L"11.0.0.1 must not be a site local address",false);
  FAutomationTestBase::TestFalse
            ((FAutomationTestBase *)this,L"173.16.0.1 must not be a site local address",false);
  FAutomationTestBase::TestFalse
            ((FAutomationTestBase *)this,L"172.32.0.1 must not be a site local address",false);
  FAutomationTestBase::TestFalse
            ((FAutomationTestBase *)this,L"193.168.0.1 must not be a site local address",false);
  FAutomationTestBase::TestFalse
            ((FAutomationTestBase *)this,L"192.169.0.1 must not be a site local address",false);
  return true;
}

// GetBeautifiedTestName @ 1431196b0

FString * __thiscall
FIPv4AddressTest::GetBeautifiedTestName(FIPv4AddressTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"System.Engine.Networking.IPv4.IPv4Address");
  return __return_storage_ptr__;
}

