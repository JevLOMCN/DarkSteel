// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 10

// GetTestFlags @ 141ad9a80

EAutomationTestFlags __thiscall
Deque::FDequeMoveWithInlineAllocator::GetTestFlags(FDequeMoveWithInlineAllocator *this)

{
  return this->TestFlags;
}

// IsStressTest @ 141ad9a90

bool __thiscall
Deque::FDequeMoveWithInlineAllocator::IsStressTest(FDequeMoveWithInlineAllocator *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141ad9aa0

uint __thiscall
Deque::FDequeMoveWithInlineAllocator::GetRequiredDeviceNum(FDequeMoveWithInlineAllocator *this)

{
  return 1;
}

// GetTestSourceFileName @ 141ad9b00

FString * __thiscall
Deque::FDequeMoveWithInlineAllocator::GetTestSourceFileName
          (FDequeMoveWithInlineAllocator *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Containers\\DequeTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141ad9b60

int __thiscall
Deque::FDequeMoveWithInlineAllocator::GetTestSourceFileLine(FDequeMoveWithInlineAllocator *this)

{
  return 0x3aa;
}

// GetTests @ 141ad9bf0

/* WARNING: Removing unreachable block (ram,0x000141ad9d6e) */

void __thiscall
Deque::FDequeMoveWithInlineAllocator::GetTests
          (FDequeMoveWithInlineAllocator *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
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

// RunTest @ 141ad9d90

bool __thiscall
Deque::FDequeMoveWithInlineAllocator::RunTest(FDequeMoveWithInlineAllocator *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 141ad9dc0

FString * __thiscall
Deque::FDequeMoveWithInlineAllocator::GetBeautifiedTestName
          (FDequeMoveWithInlineAllocator *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FDequeMoveWithInlineAllocator @ 141b1fa30

FDequeMoveWithInlineAllocator * __thiscall
Deque::FDequeMoveWithInlineAllocator::FDequeMoveWithInlineAllocator
          (FDequeMoveWithInlineAllocator *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7FDequeMoveWithInlineAllocator_Deque__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[SmokeFilter][Core][Containers][Deque]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,
                              "System::Core::Containers::TDeque Move with inline allocator");
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
  ::FString::FString(&local_18,"[SmokeFilter][Core][Containers][Deque]");
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

// TestBody @ 141b78100

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
Deque::FDequeMoveWithInlineAllocator::TestBody(FDequeMoveWithInlineAllocator *this,FString *param_1)

{
  FAutomationTestBase *pFVar1;
  code *pcVar2;
  bool bVar3;
  FAutomationTestFramework *pFVar4;
  ulong64 uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ForElementType<TTestToken<int>_> FVar8;
  ForAnyElementType FVar9;
  ForElementType<TTestToken<int>_> FVar10;
  int iVar11;
  ulonglong uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  ForAnyElementType FVar16;
  uint uVar17;
  undefined1 auStackY_168 [32];
  TTestToken<int> local_138 [2];
  FString local_130;
  FString local_120;
  FString local_110;
  FString local_100;
  FString local_f0;
  FString local_e0;
  FString local_d0;
  TDeque<TTestToken<int>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> local_c0;
  uchar local_98 [8];
  uchar auStack_90 [8];
  ForAnyElementType local_88;
  uint local_80;
  undefined8 local_7c;
  int local_74;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_54;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined8 uStack_40;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_168;
  pFVar4 = FAutomationTestFramework::Get();
  pFVar1 = pFVar4->CurrentTest;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
  ::FString::FString(&local_130,L"Move empty TDeque");
  (*pcVar2)(pFVar1,&local_130,0,0);
  if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_130.Data.AllocatorInstance.Data);
  }
  uVar15 = 0;
  TTestToken<int>::ConstructorCalls = 0;
  TTestToken<int>::DestructorCalls = 0;
  TTestToken<int>::CopyConstructorCalls = 0;
  TTestToken<int>::MoveConstructorCalls = 0;
  TTestToken<int>::CopyAssignmentCalls = 0;
  TTestToken<int>::MoveAssignmentCalls = 0;
  pFVar4 = FAutomationTestFramework::Get();
  pFVar1 = pFVar4->CurrentTest;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
  ::FString::FString(&local_120,L"Move TDeque with 1 element");
  (*pcVar2)(pFVar1,&local_120,0,0);
  if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_120.Data.AllocatorInstance.Data);
  }
  local_48 = 1;
  local_70 = CONCAT44(uStack_44,1);
  TTestToken<int>::CopyConstructorCalls = 0;
  TTestToken<int>::CopyAssignmentCalls = 0;
  uStack_68 = uStack_40;
  TTestToken<int>::MoveAssignmentCalls = 0;
  TTestToken<int>::ConstructorCalls = 1;
  TTestToken<int>::MoveConstructorCalls = 1;
  TTestToken<int>::DestructorCalls = 1;
  local_60 = 0;
  DestructItems<TTestToken<int>,int>((TTestToken<int> *)&local_70,1);
  local_54 = 0;
  local_4c = 0;
  local_58 = 4;
  pFVar4 = FAutomationTestFramework::Get();
  pFVar1 = pFVar4->CurrentTest;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
  ::FString::FString(&local_110,L"Move TDeque that exceeds inline allocation");
  (*pcVar2)(pFVar1,&local_110,0,0);
  if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_110.Data.AllocatorInstance.Data);
  }
  TTestToken<int>::DestructorCalls = 0;
  local_c0.Storage.SecondaryData = (ForElementType<TTestToken<int>_>)0x0;
  local_c0.Capacity = (int)___xmm_00000000000000000000000000000004;
  local_c0.Count = (int)((ulonglong)___xmm_00000000000000000000000000000004 >> 0x20);
  local_c0.Head = (int)_UNK_15071d208;
  local_c0.Tail = (int)((ulonglong)_UNK_15071d208 >> 0x20);
  TTestToken<int>::CopyConstructorCalls = 0;
  TTestToken<int>::MoveConstructorCalls = 0;
  TTestToken<int>::CopyAssignmentCalls = 0;
  TTestToken<int>::MoveAssignmentCalls = 0;
  uVar17 = 4;
  TTestToken<int>::ConstructorCalls = uVar15;
  uVar13 = uVar15;
  do {
    TTestToken<int>::ConstructorCalls = TTestToken<int>::ConstructorCalls + 1;
    if (uVar13 == uVar17) {
      uVar13 = uVar13 + 1;
      if (uVar13 < 5) {
        iVar11 = 4;
      }
      else {
        uVar7 = (ulonglong)(int)uVar13;
        if (uVar17 < 5) {
          uVar17 = 0;
        }
        if (uVar17 == 0) {
          uVar12 = 4;
          if (4 < uVar7) {
            uVar12 = uVar7;
          }
        }
        else {
          uVar12 = (uVar7 * 3 >> 3) + 0x10 + uVar7;
        }
        uVar5 = FMemory::QuantizeSize(uVar12 * 4,0);
        iVar11 = (int)(uVar5 >> 2);
        if (iVar11 < (int)uVar13) {
          iVar11 = 0x7fffffff;
        }
      }
      TDeque<TTestToken<int>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>::Grow
                (&local_c0,iVar11);
    }
    FVar8 = (ForElementType<TTestToken<int>_>)&local_c0;
    if (local_c0.Storage.SecondaryData != (ForElementType<TTestToken<int>_>)0x0) {
      FVar8 = local_c0.Storage.SecondaryData;
    }
    lVar6 = (longlong)local_c0.Tail;
    ((TTestToken<int> *)((longlong)FVar8 + lVar6 * 4))->Value = uVar15;
    if ((local_138 == (TTestToken<int> *)((longlong)FVar8 + lVar6 * 4)) &&
       (bVar3 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_3577702131160842208>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Containers\\TokenTest.h"
                           ,0x20,"&Other != this"), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    TTestToken<int>::MoveConstructorCalls = TTestToken<int>::MoveConstructorCalls + 1;
    local_c0.Tail = local_c0.Tail + 1;
    if (local_c0.Capacity <= local_c0.Tail) {
      local_c0.Tail = local_c0.Tail - local_c0.Capacity;
    }
    TTestToken<int>::DestructorCalls = TTestToken<int>::DestructorCalls + 1;
    local_c0.Count = local_c0.Count + 1;
    uVar15 = uVar15 + 1;
    uVar17 = local_c0.Capacity;
    uVar13 = local_c0.Count;
  } while ((int)uVar15 < 6);
  if (local_c0.Count != 6) {
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_100,L"Condition failed");
    (*pcVar2)(pFVar1,&local_100);
    if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_100.Data.AllocatorInstance.Data);
    }
  }
  if (local_c0.Capacity < 6) {
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_f0,L"Condition failed");
    (*pcVar2)(pFVar1,&local_f0);
    if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f0.Data.AllocatorInstance.Data);
    }
  }
  iVar14 = local_c0.Head;
  iVar11 = local_c0.Count;
  local_80 = local_c0.Capacity;
  FVar8 = local_c0.Storage.SecondaryData;
  local_88.Data = (FScriptContainerElement *)0x0;
  local_7c = 0;
  local_74 = 0;
  if (local_c0.Count == 0) {
    local_80 = 4;
  }
  else {
    if (local_c0.Storage.SecondaryData == (ForElementType<TTestToken<int>_>)0x0) {
      local_98[0] = local_c0.Storage.InlineData[0];
      local_98[1] = local_c0.Storage.InlineData[1];
      local_98[2] = local_c0.Storage.InlineData[2];
      local_98[3] = local_c0.Storage.InlineData[3];
      local_98[4] = local_c0.Storage.InlineData[4];
      local_98[5] = local_c0.Storage.InlineData[5];
      local_98[6] = local_c0.Storage.InlineData[6];
      local_98[7] = local_c0.Storage.InlineData[7];
      auStack_90[0] = local_c0.Storage.InlineData[8];
      auStack_90[1] = local_c0.Storage.InlineData[9];
      auStack_90[2] = local_c0.Storage.InlineData[10];
      auStack_90[3] = local_c0.Storage.InlineData[0xb];
      auStack_90[4] = local_c0.Storage.InlineData[0xc];
      auStack_90[5] = local_c0.Storage.InlineData[0xd];
      auStack_90[6] = local_c0.Storage.InlineData[0xe];
      auStack_90[7] = local_c0.Storage.InlineData[0xf];
    }
    local_c0.Storage.SecondaryData = (ForElementType<TTestToken<int>_>)0x0;
    local_88.Data = (FScriptContainerElement *)FVar8;
    local_7c = CONCAT44(local_c0.Head,local_c0.Count);
    local_74 = local_c0.Tail;
    local_c0.Capacity = 4;
    local_c0.Count = 0;
    local_c0.Head = 0;
    local_c0.Tail = 0;
    if (iVar11 == 6) goto LAB_141b78513;
  }
  pFVar4 = FAutomationTestFramework::Get();
  pFVar1 = pFVar4->CurrentTest;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
  ::FString::FString(&local_e0,L"Condition failed");
  (*pcVar2)(pFVar1,&local_e0);
  if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e0.Data.AllocatorInstance.Data);
  }
  iVar14 = local_7c._4_4_;
LAB_141b78513:
  if ((int)local_80 < 6) {
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_d0,L"Condition failed");
    (*pcVar2)(pFVar1,&local_d0);
    if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d0.Data.AllocatorInstance.Data);
    }
    iVar14 = local_7c._4_4_;
  }
  FVar16.Data = local_88.Data;
  FVar8 = local_c0.Storage.SecondaryData;
  if ((int)local_7c != 0) {
    iVar11 = (int)local_7c;
    if (local_74 <= iVar14) {
      FVar9.Data = (FScriptContainerElement *)local_98;
      if ((ForElementType<TTestToken<int>_>)local_88.Data != (ForElementType<TTestToken<int>_>)0x0)
      {
        FVar9.Data = local_88.Data;
      }
      DestructItems<TTestToken<int>,int>((TTestToken<int> *)FVar9.Data,local_74);
      iVar11 = local_80 - iVar14;
    }
    FVar9.Data = (FScriptContainerElement *)local_98;
    if ((ForElementType<TTestToken<int>_>)FVar16.Data != (ForElementType<TTestToken<int>_>)0x0) {
      FVar9.Data = FVar16.Data;
    }
    DestructItems<TTestToken<int>,int>
              ((TTestToken<int> *)((longlong)FVar9.Data + (longlong)iVar14 * 4),iVar11);
  }
  local_7c = 0;
  local_74 = 0;
  if (local_80 != 0) {
    if ((ForElementType<TTestToken<int>_>)FVar16.Data != (ForElementType<TTestToken<int>_>)0x0) {
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_88,0,0,4);
      FVar8 = local_c0.Storage.SecondaryData;
      FVar16.Data = local_88.Data;
    }
    local_80 = 4;
  }
  if ((ForElementType<TTestToken<int>_>)FVar16.Data != (ForElementType<TTestToken<int>_>)0x0) {
    FMemory::Free(FVar16.Data);
    FVar8 = local_c0.Storage.SecondaryData;
  }
  if (local_c0.Count != 0) {
    uVar15 = local_c0.Count;
    if (local_c0.Tail <= local_c0.Head) {
      FVar10 = (ForElementType<TTestToken<int>_>)&local_c0;
      if (FVar8 != (ForElementType<TTestToken<int>_>)0x0) {
        FVar10 = FVar8;
      }
      DestructItems<TTestToken<int>,int>((TTestToken<int> *)FVar10,local_c0.Tail);
      uVar15 = local_c0.Capacity - local_c0.Head;
    }
    FVar10 = (ForElementType<TTestToken<int>_>)&local_c0;
    if (FVar8 != (ForElementType<TTestToken<int>_>)0x0) {
      FVar10 = FVar8;
    }
    DestructItems<TTestToken<int>,int>
              ((TTestToken<int> *)((longlong)FVar10 + (longlong)local_c0.Head * 4),uVar15);
  }
  local_c0.Count = 0;
  local_c0.Head = 0;
  local_c0.Tail = 0;
  if (local_c0.Capacity != 0) {
    if (FVar8 != (ForElementType<TTestToken<int>_>)0x0) {
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_c0.Storage.SecondaryData,0,0,4);
      FVar8 = local_c0.Storage.SecondaryData;
    }
    local_c0.Capacity = 4;
  }
  if (FVar8 != (ForElementType<TTestToken<int>_>)0x0) {
    FMemory::Free((void *)FVar8);
  }
  return;
}

