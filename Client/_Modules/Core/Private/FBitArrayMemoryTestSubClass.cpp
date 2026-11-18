// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 10

// GetTestFlags @ 141acc890

EAutomationTestFlags __thiscall
FBitArrayMemoryTestSubClass::GetTestFlags(FBitArrayMemoryTestSubClass *this)

{
  return this->TestFlags;
}

// IsStressTest @ 141acc8a0

bool __thiscall FBitArrayMemoryTestSubClass::IsStressTest(FBitArrayMemoryTestSubClass *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141acc8b0

uint __thiscall FBitArrayMemoryTestSubClass::GetRequiredDeviceNum(FBitArrayMemoryTestSubClass *this)

{
  return 1;
}

// GetTestSourceFileName @ 141acc8c0

FString * __thiscall
FBitArrayMemoryTestSubClass::GetTestSourceFileName
          (FBitArrayMemoryTestSubClass *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Containers\\BitArrayTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141acc8f0

int __thiscall FBitArrayMemoryTestSubClass::GetTestSourceFileLine(FBitArrayMemoryTestSubClass *this)

{
  return 0xa1e;
}

// GetTests @ 141acc900

/* WARNING: Removing unreachable block (ram,0x000141acca7e) */

void __thiscall
FBitArrayMemoryTestSubClass::GetTests
          (FBitArrayMemoryTestSubClass *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  FString *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  undefined8 local_18;
  undefined8 local_10;
  
  pFVar1 = &this->PrettyNameDotNotation;
  pFVar5 = (param_1->AllocatorInstance).Data;
  if (((pFVar5 <= pFVar1) && (pFVar1 < pFVar5 + (longlong)param_1->ArrayMax * 0x10)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar4 = param_1->ArrayNum;
  if (iVar4 == param_1->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar4 + 1;
  ::FString::FString((FString *)((param_1->AllocatorInstance).Data + (longlong)iVar4 * 0x10),pFVar1)
  ;
  pFVar5 = (param_2->AllocatorInstance).Data;
  local_18 = 0;
  local_10 = 0;
  if (((pFVar5 <= (FScriptContainerElement *)&local_18) &&
      ((FScriptContainerElement *)&local_18 < pFVar5 + (longlong)param_2->ArrayMax * 0x10)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar4 = param_2->ArrayNum;
  if (iVar4 == param_2->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  param_2->ArrayNum = iVar4 + 1;
  pFVar5 = (param_2->AllocatorInstance).Data + (longlong)iVar4 * 0x10;
  *(undefined8 *)pFVar5 = 0;
  *(undefined8 *)pFVar5 = local_18;
  *(undefined4 *)(pFVar5 + 8) = (undefined4)local_10;
  *(undefined4 *)(pFVar5 + 0xc) = local_10._4_4_;
  return;
}

// RunTest @ 141accaa0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
FBitArrayMemoryTestSubClass::RunTest(FBitArrayMemoryTestSubClass *this,FString *param_1)

{
  int iVar1;
  int iVar2;
  FAutomationTestBase *pFVar3;
  code *pcVar4;
  bool bVar5;
  FAutomationTestFramework *pFVar6;
  FBitArrayMemoryTestSubClass **ppFVar7;
  int *piVar8;
  undefined1 auStack_118 [32];
  undefined4 local_f8;
  int local_f0;
  undefined4 local_e8;
  int local_e0;
  FBitArrayMemoryTest local_d8 [4];
  int local_d4;
  uint *local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  FBitArrayMemoryTestSubClass *local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  int local_a4;
  FString local_a0 [4];
  uint local_60 [10];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_118;
  local_c0 = this;
  FBitArrayMemoryTest::TestMemmoveBitsWordOrder(local_d8);
  piVar8 = (int *)&local_b8;
  local_b8 = ___xmm_0000000100000000fffffffffffffffb;
  uStack_b0 = _UNK_15071d268;
  local_a8 = 5;
  local_c8 = 0;
  local_c4 = 5;
  do {
    iVar1 = *piVar8;
    ppFVar7 = (FBitArrayMemoryTestSubClass **)&local_c8;
    do {
      iVar2 = *(int *)ppFVar7;
      local_d0 = local_60;
      local_d4 = iVar1 * 0x20 + iVar2;
      FBitArrayMemory::ModularizeWordOffset(&local_d0,&local_d4);
      if ((local_d0 != local_60 + iVar1) || (local_d4 != iVar2)) {
        pFVar6 = FAutomationTestFramework::Get();
        pFVar3 = pFVar6->CurrentTest;
        pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
        local_e0 = local_d4;
        local_e8 = (undefined4)((longlong)local_d0 - (longlong)local_60 >> 2);
        local_f8 = (undefined4)((longlong)iVar1 * 4 >> 2);
        local_f0 = iVar2;
        ::FString::PrintfImpl
                  (local_a0,
                   L"ModularizeWordOffset WordLength=%d, BitLength=%d\nExpected: Data=%d, Offset=%d\nActual:  Data=%d, Offset=%d"
                  );
        (*pcVar4)(pFVar3,local_a0,0);
        if (local_a0[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a0[0].Data.AllocatorInstance.Data);
        }
      }
      ppFVar7 = (FBitArrayMemoryTestSubClass **)((longlong)ppFVar7 + 4);
    } while (ppFVar7 != &local_c0);
    piVar8 = piVar8 + 1;
  } while (piVar8 != &local_a4);
  bVar5 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)local_c0);
  return !bVar5;
}

// GetBeautifiedTestName @ 141accc50

FString * __thiscall
FBitArrayMemoryTestSubClass::GetBeautifiedTestName
          (FBitArrayMemoryTestSubClass *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FBitArrayMemoryTestSubClass @ 141b1a810

FBitArrayMemoryTestSubClass * __thiscall
FBitArrayMemoryTestSubClass::FBitArrayMemoryTestSubClass
          (FBitArrayMemoryTestSubClass *this,FString *param_1)

{
  FString *pFVar1;
  FScriptContainerElement *pFVar2;
  EAutomationTestFlags EVar3;
  FString *pFVar4;
  FAutomationTestFramework *this_00;
  longlong lVar5;
  FString local_28;
  FString local_18;
  
  FAutomationTestBase::FAutomationTestBase((FAutomationTestBase *)this,param_1,false);
  this->_padding_ = (longlong)&___7FBitArrayMemoryTestSubClass__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[ApplicationContextMask][EngineFilter]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"System::Core::Misc::MemmoveBitsWordOrder");
  pFVar4 = ::FString::Replace(pFVar4,&local_18,L"::",L".",IgnoreCase);
  if (pFVar1 != pFVar4) {
    pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar1->Data).AllocatorInstance.Data = (pFVar4->Data).AllocatorInstance.Data;
    (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->PrettyNameDotNotation).Data.ArrayNum = (pFVar4->Data).ArrayNum;
    (this->PrettyNameDotNotation).Data.ArrayMax = (pFVar4->Data).ArrayMax;
    (pFVar4->Data).ArrayNum = 0;
    (pFVar4->Data).ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  EVar3 = this->TestFlags;
  if ((EVar3 & (ProgramContext|CommandletContext|ServerContext|ClientContext|EditorContext)) == None
     ) {
    EVar3 = EVar3 | (ProgramContext|CommandletContext|ServerContext|ClientContext|EditorContext);
    this->TestFlags = EVar3;
  }
  if ((EVar3 & (NegativeFilter|StressFilter|PerfFilter|ProductFilter|EngineFilter|SmokeFilter)) ==
      None) {
    this->TestFlags = EVar3 | EngineFilter;
  }
  this_00 = FAutomationTestFramework::Get();
  ::FString::FString(&local_18,"[ApplicationContextMask][EngineFilter]");
  local_28.Data.ArrayNum = (this->PrettyNameDotNotation).Data.ArrayNum;
  lVar5 = (longlong)local_28.Data.ArrayNum;
  pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_28.Data.ArrayNum == 0) {
    local_28.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_28.Data.ArrayNum,0,(ForAnyElementType *)&local_28,local_28.Data.ArrayNum,
               &local_28.Data.ArrayMax);
    memcpy(local_28.Data.AllocatorInstance.Data,pFVar2,lVar5 * 2);
  }
  FAutomationTestFramework::RegisterAutomationTestTags(this_00,&local_28,&local_18,true);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return this;
}

// TestBody @ 141b63980

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FBitArrayMemoryTestSubClass::TestBody(FBitArrayMemoryTestSubClass *this,FString *param_1)

{
  int iVar1;
  int iVar2;
  FAutomationTestBase *pFVar3;
  code *pcVar4;
  FAutomationTestFramework *pFVar5;
  int *piVar6;
  int *piVar7;
  undefined1 auStack_108 [32];
  undefined4 local_e8;
  int local_e0;
  undefined4 local_d8;
  int local_d0;
  FBitArrayMemoryTest local_c8 [4];
  int local_c4;
  uint *local_c0;
  int local_b8 [2];
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined4 local_a0;
  int local_9c;
  FString local_98 [3];
  uint local_60 [10];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_108;
  FBitArrayMemoryTest::TestMemmoveBitsWordOrder(local_c8);
  piVar7 = (int *)&local_b0;
  local_b0 = ___xmm_0000000100000000fffffffffffffffb;
  uStack_a8 = _UNK_15071d268;
  local_a0 = 5;
  local_b8[0] = 0;
  local_b8[1] = 5;
  do {
    iVar1 = *piVar7;
    piVar6 = local_b8;
    do {
      iVar2 = *piVar6;
      local_c0 = local_60;
      local_c4 = iVar1 * 0x20 + iVar2;
      FBitArrayMemory::ModularizeWordOffset(&local_c0,&local_c4);
      if ((local_c0 != local_60 + iVar1) || (local_c4 != iVar2)) {
        pFVar5 = FAutomationTestFramework::Get();
        pFVar3 = pFVar5->CurrentTest;
        pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
        local_d0 = local_c4;
        local_d8 = (undefined4)((longlong)local_c0 - (longlong)local_60 >> 2);
        local_e8 = (undefined4)((longlong)iVar1 * 4 >> 2);
        local_e0 = iVar2;
        ::FString::PrintfImpl
                  (local_98,
                   L"ModularizeWordOffset WordLength=%d, BitLength=%d\nExpected: Data=%d, Offset=%d\nActual:  Data=%d, Offset=%d"
                  );
        (*pcVar4)(pFVar3,local_98,0);
        if (local_98[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_98[0].Data.AllocatorInstance.Data);
        }
      }
      piVar6 = piVar6 + 1;
    } while (piVar6 != (int *)&local_b0);
    piVar7 = piVar7 + 1;
  } while (piVar7 != &local_9c);
  return;
}

