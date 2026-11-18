// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 10

// GetTestFlags @ 141c60dd0

EAutomationTestFlags __thiscall FCircularBufferTest::GetTestFlags(FCircularBufferTest *this)

{
  return this->TestFlags;
}

// IsStressTest @ 141c60de0

bool __thiscall FCircularBufferTest::IsStressTest(FCircularBufferTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141c60df0

uint __thiscall FCircularBufferTest::GetRequiredDeviceNum(FCircularBufferTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 141c60e00

FString * __thiscall
FCircularBufferTest::GetTestSourceFileName
          (FCircularBufferTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Misc\\CircularBufferTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141c60e30

int __thiscall FCircularBufferTest::GetTestSourceFileLine(FCircularBufferTest *this)

{
  return 0xd;
}

// GetTests @ 141c60e40

/* WARNING: Removing unreachable block (ram,0x000141c60fbe) */

void __thiscall
FCircularBufferTest::GetTests
          (FCircularBufferTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
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

// RunTest @ 141c60fe0

bool __thiscall FCircularBufferTest::RunTest(FCircularBufferTest *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 141c61010

FString * __thiscall
FCircularBufferTest::GetBeautifiedTestName
          (FCircularBufferTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FCircularBufferTest @ 141c8ab20

FCircularBufferTest * __thiscall
FCircularBufferTest::FCircularBufferTest(FCircularBufferTest *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7FCircularBufferTest__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[ApplicationContextMask][SmokeFilter]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"System::Core::Misc::CircularBuffer");
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
  ::FString::FString(&local_18,"[ApplicationContextMask][SmokeFilter]");
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

// TestBody @ 141c9a4a0

void __thiscall FCircularBufferTest::TestBody(FCircularBufferTest *this,FString *param_1)

{
  FAutomationTestBase *pFVar1;
  code *pcVar2;
  longlong lVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FAutomationTestFramework *pFVar7;
  ForAnyElementType FVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int local_res18 [2];
  int local_res20 [2];
  TCircularBuffer<int> local_118;
  int local_100;
  ForAnyElementType local_f8;
  int local_f0 [4];
  ForAnyElementType local_e0;
  int local_d8 [4];
  ForAnyElementType local_c8;
  int local_c0 [2];
  TCircularBuffer<int> local_b8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  FString local_90;
  FString local_80;
  FString local_70;
  FString local_60;
  FString local_50;
  FString local_40;
  FString local_30;
  
  uVar11 = 0;
  for (lVar3 = 0x3f; 0xfdUL >> lVar3 == 0; lVar3 = lVar3 + -1) {
  }
  local_c8.Data = (FScriptContainerElement *)0x0;
  iVar9 = 1 << ((byte)lVar3 & 0x1f);
  local_a0 = (undefined4)lVar3;
  local_c0[0] = 0;
  local_c0[1] = 0;
  iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,iVar9,&local_c8,local_c0,local_c0 + 1);
  memset(local_c8.Data + (longlong)iVar5 * 4,0,(longlong)iVar9 << 2);
  local_d8[2] = local_c0[0] + -1;
  local_e0.Data = (FScriptContainerElement *)0x0;
  local_d8[0] = 0;
  local_d8[1] = 0;
  for (lVar3 = 0x3f; 0xffUL >> lVar3 == 0; lVar3 = lVar3 + -1) {
  }
  iVar9 = 1 << ((byte)lVar3 & 0x1f);
  local_9c = (undefined4)lVar3;
  iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,iVar9,&local_e0,local_d8,local_d8 + 1);
  memset(local_e0.Data + (longlong)iVar5 * 4,0,(longlong)iVar9 << 2);
  local_f0[2] = local_d8[0] + -1;
  local_f8.Data = (FScriptContainerElement *)0x0;
  local_f0[0] = 0;
  local_f0[1] = 0;
  for (lVar3 = 0x3f; 0x101UL >> lVar3 == 0; lVar3 = lVar3 + -1) {
  }
  iVar9 = 1 << ((byte)lVar3 & 0x1f);
  local_98 = (undefined4)lVar3;
  iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,iVar9,&local_f8,local_f0,local_f0 + 1);
  memset(local_f8.Data + (longlong)iVar5 * 4,0,(longlong)iVar9 << 2);
  local_100 = local_f0[0] + -1;
  pFVar7 = FAutomationTestFramework::Get();
  if (local_c0[0] != 0x80) {
    pFVar1 = pFVar7->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_80,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_80,0);
    if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_80.Data.AllocatorInstance.Data);
    }
  }
  pFVar7 = FAutomationTestFramework::Get();
  if (local_d8[0] != 0x80) {
    pFVar1 = pFVar7->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_70,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_70,0);
    if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_70.Data.AllocatorInstance.Data);
    }
  }
  pFVar7 = FAutomationTestFramework::Get();
  if (local_f0[0] != 0x100) {
    pFVar1 = pFVar7->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_60,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_60,0);
    if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_60.Data.AllocatorInstance.Data);
    }
  }
  local_res18[0] = 0x29a;
  TCircularBuffer<int>::TCircularBuffer<int>(&local_b8,0x40,local_res18);
  if (local_b8.Elements.ArrayNum != 0) {
    do {
      pFVar7 = FAutomationTestFramework::Get();
      uVar10 = local_b8.IndexMask & uVar11;
      pFVar1 = pFVar7->CurrentTest;
      uVar6 = 0;
      if ((int)uVar10 < local_b8.Elements.ArrayNum) {
        uVar6 = ~uVar10 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar5 = *(int *)(local_b8.Elements.AllocatorInstance.Data + (longlong)(int)uVar10 * 4);
      ::FString::PrintfImpl(&local_90,L"Initial value must be correct (%i)");
      FVar8.Data = (FScriptContainerElement *)L"";
      if (local_90.Data.ArrayNum != 0) {
        FVar8.Data = local_90.Data.AllocatorInstance.Data;
      }
      FAutomationTestBase::TestEqual(pFVar1,(wchar_t *)FVar8.Data,iVar5,0x29a);
      if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_90.Data.AllocatorInstance.Data);
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 < (uint)local_b8.Elements.ArrayNum);
  }
  local_res20[0] = 0;
  TCircularBuffer<int>::TCircularBuffer<int>(&local_118,0x40,local_res20);
  pFVar7 = FAutomationTestFramework::Get();
  if ((local_118.IndexMask & 1) == 0) {
    pFVar1 = pFVar7->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_50,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_50,0);
    if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_50.Data.AllocatorInstance.Data);
    }
  }
  pFVar7 = FAutomationTestFramework::Get();
  if ((local_118.IndexMask & 0x40) != 0) {
    pFVar1 = pFVar7->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_40,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_40,0);
    if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.Data.AllocatorInstance.Data);
    }
  }
  pFVar7 = FAutomationTestFramework::Get();
  if (((byte)local_118.IndexMask & 0x41) != 1) {
    pFVar1 = pFVar7->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_30,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_30,0);
    if (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.Data.AllocatorInstance.Data);
    }
  }
  if ((local_118.Elements.ArrayNum < 1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  *(int *)local_118.Elements.AllocatorInstance.Data = 0x2a;
  uVar11 = local_118.IndexMask & 0x41;
  if ((local_118.Elements.ArrayNum <= (int)uVar11) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  *(undefined4 *)(local_118.Elements.AllocatorInstance.Data + (ulonglong)uVar11 * 4) = 0x2a;
  pFVar7 = FAutomationTestFramework::Get();
  pFVar1 = pFVar7->CurrentTest;
  if ((local_118.Elements.ArrayNum < 1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  FAutomationTestBase::TestEqual
            (pFVar1,L"Index 0 must be written and read correctly",
             *(int *)local_118.Elements.AllocatorInstance.Data,0x2a);
  pFVar7 = FAutomationTestFramework::Get();
  uVar11 = local_118.IndexMask & 1;
  pFVar1 = pFVar7->CurrentTest;
  if ((local_118.Elements.ArrayNum <= (int)uVar11) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  FAutomationTestBase::TestEqual
            (pFVar1,L"Index 1 must be written and read correctly",
             *(int *)(local_118.Elements.AllocatorInstance.Data + (ulonglong)uVar11 * 4),0x2a);
  pFVar7 = FAutomationTestFramework::Get();
  pFVar1 = pFVar7->CurrentTest;
  if ((local_118.Elements.ArrayNum <= (int)(local_118.IndexMask & 0x41)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  FAutomationTestBase::TestEqual
            (pFVar1,L"Index 65 must be written and read correctly",
             *(int *)(local_118.Elements.AllocatorInstance.Data +
                     (ulonglong)(local_118.IndexMask & 0x41) * 4),0x2a);
  if (local_118.Elements.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.Elements.AllocatorInstance.Data);
  }
  if (local_b8.Elements.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Elements.AllocatorInstance.Data);
  }
  if (local_f8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.Data);
  }
  if (local_e0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e0.Data);
  }
  if (local_c8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data);
  }
  return;
}

