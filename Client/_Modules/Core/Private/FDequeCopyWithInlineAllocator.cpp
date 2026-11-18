// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 10

// GetTestFlags @ 141ad74c0

EAutomationTestFlags __thiscall
Deque::FDequeCopyWithInlineAllocator::GetTestFlags(FDequeCopyWithInlineAllocator *this)

{
  return this->TestFlags;
}

// IsStressTest @ 141ad74d0

bool __thiscall
Deque::FDequeCopyWithInlineAllocator::IsStressTest(FDequeCopyWithInlineAllocator *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141ad74e0

uint __thiscall
Deque::FDequeCopyWithInlineAllocator::GetRequiredDeviceNum(FDequeCopyWithInlineAllocator *this)

{
  return 1;
}

// GetTestSourceFileName @ 141ad74f0

FString * __thiscall
Deque::FDequeCopyWithInlineAllocator::GetTestSourceFileName
          (FDequeCopyWithInlineAllocator *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Containers\\DequeTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141ad7520

int __thiscall
Deque::FDequeCopyWithInlineAllocator::GetTestSourceFileLine(FDequeCopyWithInlineAllocator *this)

{
  return 0x321;
}

// GetTests @ 141ad7530

/* WARNING: Removing unreachable block (ram,0x000141ad76ae) */

void __thiscall
Deque::FDequeCopyWithInlineAllocator::GetTests
          (FDequeCopyWithInlineAllocator *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
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

// RunTest @ 141ad76d0

bool __thiscall
Deque::FDequeCopyWithInlineAllocator::RunTest(FDequeCopyWithInlineAllocator *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 141ad7750

FString * __thiscall
Deque::FDequeCopyWithInlineAllocator::GetBeautifiedTestName
          (FDequeCopyWithInlineAllocator *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FDequeCopyWithInlineAllocator @ 141b1d250

FDequeCopyWithInlineAllocator * __thiscall
Deque::FDequeCopyWithInlineAllocator::FDequeCopyWithInlineAllocator
          (FDequeCopyWithInlineAllocator *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7FDequeCopyWithInlineAllocator_Deque__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[SmokeFilter][Core][Containers][Deque]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,
                              "System::Core::Containers::TDeque Copy with inline allocator");
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

// TestBody @ 141b705a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
Deque::FDequeCopyWithInlineAllocator::TestBody(FDequeCopyWithInlineAllocator *this,FString *param_1)

{
  TTestToken<int> *pTVar1;
  FAutomationTestBase *pFVar2;
  code *pcVar3;
  bool bVar4;
  FAutomationTestFramework *pFVar5;
  ulong64 uVar6;
  ForAnyElementType FVar7;
  ForAnyElementType FVar8;
  ulonglong uVar9;
  ForElementType<TTestToken<int>_> FVar10;
  ForElementType<TTestToken<int>_> FVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  ulonglong uVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  longlong lVar19;
  undefined1 auStackY_238 [32];
  TTestToken<int> local_208 [2];
  FString local_200;
  FString local_1f0;
  FString local_1e0;
  FString local_1d0;
  FString local_1c0;
  FString local_1b0;
  FString local_1a0;
  FString local_190;
  FString local_180;
  FString local_170;
  FString local_160;
  FString local_150;
  FString local_140;
  FString local_130;
  TDeque<TTestToken<int>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> local_120;
  FScriptContainerElement local_f8 [16];
  ForAnyElementType local_e8;
  int local_e0;
  uint uStack_dc;
  int iStack_d8;
  uint uStack_d4;
  TDeque<TTestToken<int>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> local_d0;
  TDeque<TTestToken<int>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> local_a8;
  FScriptContainerElement local_80 [16];
  ForAnyElementType local_70;
  int local_68;
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  TTestToken<int> local_58 [4];
  ForAnyElementType local_48;
  int local_40;
  undefined8 local_3c;
  int local_34;
  TTestToken<int> local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_238;
  pFVar5 = FAutomationTestFramework::Get();
  pFVar2 = pFVar5->CurrentTest;
  pcVar3 = *(code **)(pFVar2->_padding_ + 0x50);
  ::FString::FString(&local_200,L"Copy empty TDeque");
  (*pcVar3)(pFVar2,&local_200,0,0);
  if (local_200.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_200.Data.AllocatorInstance.Data);
  }
  uVar18 = 0;
  TTestToken<int>::ConstructorCalls = 0;
  TTestToken<int>::DestructorCalls = 0;
  TTestToken<int>::CopyConstructorCalls = 0;
  TTestToken<int>::MoveConstructorCalls = 0;
  TTestToken<int>::CopyAssignmentCalls = 0;
  TTestToken<int>::MoveAssignmentCalls = 0;
  pFVar5 = FAutomationTestFramework::Get();
  pFVar2 = pFVar5->CurrentTest;
  pcVar3 = *(code **)(pFVar2->_padding_ + 0x50);
  ::FString::FString(&local_1f0,L"Copy TDeque with 1 element");
  (*pcVar3)(pFVar2,&local_1f0,0,0);
  if (local_1f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1f0.Data.AllocatorInstance.Data);
  }
  TTestToken<int>::CopyConstructorCalls = 0;
  TTestToken<int>::CopyAssignmentCalls = 0;
  local_68 = (int)___xmm_00000000000000000000000000000004;
  iStack_64 = (int)((ulonglong)___xmm_00000000000000000000000000000004 >> 0x20);
  iStack_60 = (int)_UNK_15071d208;
  iStack_5c = (int)((ulonglong)_UNK_15071d208 >> 0x20);
  TTestToken<int>::MoveAssignmentCalls = 0;
  local_48.Data = (FScriptContainerElement *)0x0;
  local_40 = 4;
  TTestToken<int>::ConstructorCalls = 1;
  local_58[0].Value = 1;
  TTestToken<int>::MoveConstructorCalls = 1;
  local_34 = 1;
  local_3c = 1;
  TTestToken<int>::DestructorCalls = 1;
  local_70.Data = (FScriptContainerElement *)0x0;
  ConstructItems<TTestToken<int>,TTestToken<int>,int>(local_80,local_58,1);
  iStack_64 = (int)local_3c;
  iStack_60 = 0;
  iStack_5c = (int)local_3c;
  if (local_68 <= (int)local_3c) {
    iStack_5c = (int)local_3c - local_68;
  }
  if (local_68 != 4) {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar2 = pFVar5->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_1e0,"Expected copy to retain inline capacity.");
    (*pcVar3)(pFVar2,&local_1e0);
    if (local_1e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1e0.Data.AllocatorInstance.Data);
    }
  }
  if (iStack_64 != 1) {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar2 = pFVar5->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_1d0,L"Condition failed");
    (*pcVar3)(pFVar2,&local_1d0);
    if (local_1d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1d0.Data.AllocatorInstance.Data);
    }
  }
  iVar13 = iStack_60;
  iVar17 = local_68;
  FVar7.Data = local_70.Data;
  if (iStack_64 != 0) {
    iVar12 = iStack_64;
    if (iStack_5c <= iStack_60) {
      FVar8.Data = local_80;
      if (local_70.Data != (FScriptContainerElement *)0x0) {
        FVar8.Data = local_70.Data;
      }
      DestructItems<TTestToken<int>,int>((TTestToken<int> *)FVar8.Data,iStack_5c);
      iVar12 = iVar17 - iVar13;
    }
    FVar8.Data = local_80;
    if (FVar7.Data != (FScriptContainerElement *)0x0) {
      FVar8.Data = FVar7.Data;
    }
    DestructItems<TTestToken<int>,int>
              ((TTestToken<int> *)(FVar8.Data + (longlong)iVar13 * 4),iVar12);
  }
  iStack_64 = 0;
  iStack_60 = 0;
  iStack_5c = 0;
  if (iVar17 != 0) {
    if (FVar7.Data != (FScriptContainerElement *)0x0) {
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_70,0,0,4);
      FVar7.Data = local_70.Data;
    }
    local_68 = 4;
  }
  if (FVar7.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar7.Data);
  }
  iVar17 = local_40;
  FVar7.Data = local_48.Data;
  if ((int)local_3c != 0) {
    iVar12 = local_3c._4_4_;
    lVar19 = (longlong)local_3c._4_4_;
    iVar13 = (int)local_3c;
    if (local_34 <= local_3c._4_4_) {
      FVar8.Data = (FScriptContainerElement *)local_58;
      if (local_48.Data != (FScriptContainerElement *)0x0) {
        FVar8.Data = local_48.Data;
      }
      DestructItems<TTestToken<int>,int>((TTestToken<int> *)FVar8.Data,local_34);
      iVar13 = iVar17 - iVar12;
    }
    FVar8.Data = (FScriptContainerElement *)local_58;
    if (FVar7.Data != (FScriptContainerElement *)0x0) {
      FVar8.Data = FVar7.Data;
    }
    DestructItems<TTestToken<int>,int>((TTestToken<int> *)(FVar8.Data + lVar19 * 4),iVar13);
  }
  local_3c = 0;
  local_34 = 0;
  if (iVar17 != 0) {
    if (FVar7.Data != (FScriptContainerElement *)0x0) {
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_48,0,0,4);
      FVar7.Data = local_48.Data;
    }
    local_40 = 4;
  }
  if (FVar7.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar7.Data);
  }
  pFVar5 = FAutomationTestFramework::Get();
  pFVar2 = pFVar5->CurrentTest;
  pcVar3 = *(code **)(pFVar2->_padding_ + 0x50);
  ::FString::FString(&local_1c0,L"Copy Full TDeque");
  (*pcVar3)(pFVar2,&local_1c0,0,0);
  if (local_1c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1c0.Data.AllocatorInstance.Data);
  }
  TTestToken<int>::DestructorCalls = 0;
  TTestToken<int>::CopyConstructorCalls = 0;
  local_e0 = (int)___xmm_00000000000000000000000000000004;
  uStack_dc = (uint)((ulonglong)___xmm_00000000000000000000000000000004 >> 0x20);
  iStack_d8 = (int)_UNK_15071d208;
  uStack_d4 = (uint)((ulonglong)_UNK_15071d208 >> 0x20);
  TTestToken<int>::MoveConstructorCalls = 0;
  TTestToken<int>::CopyAssignmentCalls = 0;
  TTestToken<int>::MoveAssignmentCalls = 0;
  local_30.Value = 0;
  local_2c = 1;
  local_28 = 2;
  TTestToken<int>::ConstructorCalls = 4;
  local_24 = 3;
  local_e8.Data = (FScriptContainerElement *)0x0;
  ConstructItems<TTestToken<int>,TTestToken<int>,int>(local_f8,&local_30,4);
  TTestToken<int>::DestructorCalls = TTestToken<int>::DestructorCalls + 4;
  uStack_dc = 4;
  uStack_d4 = 4;
  if (local_e0 != 4) {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar2 = pFVar5->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_1b0,L"Condition failed");
    (*pcVar3)(pFVar2,&local_1b0,0);
    if (local_1b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1b0.Data.AllocatorInstance.Data);
    }
    if (uStack_dc != 4) {
      pFVar5 = FAutomationTestFramework::Get();
      pFVar2 = pFVar5->CurrentTest;
      pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
      ::FString::FString(&local_1a0,L"Condition failed");
      (*pcVar3)(pFVar2,&local_1a0,0);
      if (local_1a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1a0.Data.AllocatorInstance.Data);
      }
    }
  }
  uVar14 = uStack_dc;
  local_d0.Storage.SecondaryData = (ForElementType<TTestToken<int>_>)0x0;
  local_d0.Capacity = (int)___xmm_00000000000000000000000000000004;
  local_d0.Count = (int)((ulonglong)___xmm_00000000000000000000000000000004 >> 0x20);
  local_d0.Head = (int)_UNK_15071d208;
  local_d0.Tail = (int)((ulonglong)_UNK_15071d208 >> 0x20);
  if (uStack_dc == 0) {
LAB_141b70be4:
    pFVar5 = FAutomationTestFramework::Get();
    pFVar2 = pFVar5->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_180,L"Condition failed");
    (*pcVar3)(pFVar2,&local_180);
    if (local_180.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_180.Data.AllocatorInstance.Data);
    }
  }
  else {
    if (4 < (int)uStack_dc) {
      if (uStack_dc < 5) {
        iVar17 = 4;
      }
      else {
        uVar6 = FMemory::QuantizeSize((longlong)(int)uStack_dc << 2,0);
        iVar17 = (int)(uVar6 >> 2);
        if (iVar17 < (int)uVar14) {
          iVar17 = 0x7fffffff;
        }
      }
      TDeque<TTestToken<int>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>::Grow
                (&local_d0,iVar17);
    }
    if (iStack_d8 < (int)uStack_d4) {
      FVar7.Data = local_f8;
      if (local_e8.Data != (FScriptContainerElement *)0x0) {
        FVar7.Data = local_e8.Data;
      }
      FVar7.Data = FVar7.Data + (longlong)iStack_d8 * 4;
      FVar10 = (ForElementType<TTestToken<int>_>)&local_d0;
      uVar14 = uStack_dc;
      if (local_d0.Storage.SecondaryData != (ForElementType<TTestToken<int>_>)0x0) {
        FVar10 = local_d0.Storage.SecondaryData;
      }
    }
    else {
      iVar17 = local_e0 - iStack_d8;
      FVar7.Data = local_f8;
      if (local_e8.Data != (FScriptContainerElement *)0x0) {
        FVar7.Data = local_e8.Data;
      }
      FVar10 = (ForElementType<TTestToken<int>_>)&local_d0;
      if (local_d0.Storage.SecondaryData != (ForElementType<TTestToken<int>_>)0x0) {
        FVar10 = local_d0.Storage.SecondaryData;
      }
      ConstructItems<TTestToken<int>,TTestToken<int>,int>
                ((void *)FVar10,(TTestToken<int> *)(FVar7.Data + (longlong)iStack_d8 * 4),iVar17);
      FVar7.Data = local_f8;
      if (local_e8.Data != (FScriptContainerElement *)0x0) {
        FVar7.Data = local_e8.Data;
      }
      FVar10 = (ForElementType<TTestToken<int>_>)&local_d0;
      if (local_d0.Storage.SecondaryData != (ForElementType<TTestToken<int>_>)0x0) {
        FVar10 = local_d0.Storage.SecondaryData;
      }
      FVar10 = (ForElementType<TTestToken<int>_>)((longlong)FVar10 + (longlong)iVar17 * 4);
      uVar14 = uStack_d4;
    }
    ConstructItems<TTestToken<int>,TTestToken<int>,int>
              ((void *)FVar10,(TTestToken<int> *)FVar7.Data,uVar14);
    local_d0.Count = uStack_dc;
    local_d0.Head = 0;
    local_d0.Tail = uStack_dc;
    if (local_d0.Capacity <= (int)uStack_dc) {
      local_d0.Tail = uStack_dc - local_d0.Capacity;
    }
    if (local_d0.Capacity != 4) {
      pFVar5 = FAutomationTestFramework::Get();
      pFVar2 = pFVar5->CurrentTest;
      pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
      ::FString::FString(&local_190,"Expected copy to retain inline capacity.");
      (*pcVar3)(pFVar2,&local_190);
      if (local_190.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_190.Data.AllocatorInstance.Data);
      }
    }
    if (local_d0.Count != 4) goto LAB_141b70be4;
  }
  iVar13 = local_d0.Head;
  iVar17 = local_d0.Capacity;
  FVar10 = local_d0.Storage.SecondaryData;
  if (local_d0.Count != 0) {
    uVar14 = local_d0.Count;
    if (local_d0.Tail <= local_d0.Head) {
      FVar11 = (ForElementType<TTestToken<int>_>)&local_d0;
      if (local_d0.Storage.SecondaryData != (ForElementType<TTestToken<int>_>)0x0) {
        FVar11 = local_d0.Storage.SecondaryData;
      }
      DestructItems<TTestToken<int>,int>((TTestToken<int> *)FVar11,local_d0.Tail);
      uVar14 = iVar17 - iVar13;
    }
    FVar11 = (ForElementType<TTestToken<int>_>)&local_d0;
    if (FVar10 != (ForElementType<TTestToken<int>_>)0x0) {
      FVar11 = FVar10;
    }
    DestructItems<TTestToken<int>,int>
              ((TTestToken<int> *)((longlong)FVar11 + (longlong)iVar13 * 4),uVar14);
  }
  local_d0.Count = 0;
  local_d0.Head = 0;
  local_d0.Tail = 0;
  if (iVar17 != 0) {
    if (FVar10 != (ForElementType<TTestToken<int>_>)0x0) {
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_d0.Storage.SecondaryData,0,0,4);
      FVar10 = local_d0.Storage.SecondaryData;
    }
    local_d0.Capacity = 4;
  }
  if (FVar10 != (ForElementType<TTestToken<int>_>)0x0) {
    FMemory::Free((void *)FVar10);
  }
  iVar13 = iStack_d8;
  iVar17 = local_e0;
  FVar7.Data = local_e8.Data;
  if (uStack_dc != 0) {
    lVar19 = (longlong)iStack_d8;
    uVar14 = uStack_dc;
    if ((int)uStack_d4 <= iStack_d8) {
      FVar8.Data = local_f8;
      if (local_e8.Data != (FScriptContainerElement *)0x0) {
        FVar8.Data = local_e8.Data;
      }
      DestructItems<TTestToken<int>,int>((TTestToken<int> *)FVar8.Data,uStack_d4);
      uVar14 = iVar17 - iVar13;
    }
    FVar8.Data = local_f8;
    if (FVar7.Data != (FScriptContainerElement *)0x0) {
      FVar8.Data = FVar7.Data;
    }
    DestructItems<TTestToken<int>,int>((TTestToken<int> *)(FVar8.Data + lVar19 * 4),uVar14);
  }
  uStack_dc = 0;
  iStack_d8 = 0;
  uStack_d4 = 0;
  if (iVar17 != 0) {
    if (FVar7.Data != (FScriptContainerElement *)0x0) {
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_e8,0,0,4);
      FVar7.Data = local_e8.Data;
    }
    local_e0 = 4;
  }
  if (FVar7.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar7.Data);
  }
  pFVar5 = FAutomationTestFramework::Get();
  pFVar2 = pFVar5->CurrentTest;
  pcVar3 = *(code **)(pFVar2->_padding_ + 0x50);
  ::FString::FString(&local_170,L"Copy TDeque that exceeds inline allocation");
  (*pcVar3)(pFVar2,&local_170,0,0);
  if (local_170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_170.Data.AllocatorInstance.Data);
  }
  TTestToken<int>::DestructorCalls = 0;
  local_120.Storage.SecondaryData = (ForElementType<TTestToken<int>_>)0x0;
  local_120.Capacity = (int)___xmm_00000000000000000000000000000004;
  local_120.Count = (int)((ulonglong)___xmm_00000000000000000000000000000004 >> 0x20);
  local_120.Head = (int)_UNK_15071d208;
  local_120.Tail = (int)((ulonglong)_UNK_15071d208 >> 0x20);
  TTestToken<int>::CopyConstructorCalls = 0;
  TTestToken<int>::MoveConstructorCalls = 0;
  TTestToken<int>::CopyAssignmentCalls = 0;
  TTestToken<int>::MoveAssignmentCalls = 0;
  uVar14 = 4;
  TTestToken<int>::ConstructorCalls = uVar18;
  uVar16 = uVar18;
  do {
    TTestToken<int>::ConstructorCalls = TTestToken<int>::ConstructorCalls + 1;
    if (uVar16 == uVar14) {
      uVar16 = uVar16 + 1;
      if (uVar16 < 5) {
        iVar17 = 4;
      }
      else {
        uVar9 = (ulonglong)(int)uVar16;
        if (uVar14 < 5) {
          uVar14 = 0;
        }
        if (uVar14 == 0) {
          uVar15 = 4;
          if (4 < uVar9) {
            uVar15 = uVar9;
          }
        }
        else {
          uVar15 = (uVar9 * 3 >> 3) + 0x10 + uVar9;
        }
        uVar6 = FMemory::QuantizeSize(uVar15 * 4,0);
        iVar17 = (int)(uVar6 >> 2);
        if (iVar17 < (int)uVar16) {
          iVar17 = 0x7fffffff;
        }
      }
      TDeque<TTestToken<int>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>::Grow
                (&local_120,iVar17);
    }
    FVar10 = (ForElementType<TTestToken<int>_>)&local_120;
    if (local_120.Storage.SecondaryData != (ForElementType<TTestToken<int>_>)0x0) {
      FVar10 = local_120.Storage.SecondaryData;
    }
    pTVar1 = (TTestToken<int> *)((longlong)FVar10 + (longlong)local_120.Tail * 4);
    pTVar1->Value = uVar18;
    if ((local_208 == pTVar1) &&
       (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_3577702131160842208>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Containers\\TokenTest.h"
                           ,0x20,"&Other != this"), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    TTestToken<int>::MoveConstructorCalls = TTestToken<int>::MoveConstructorCalls + 1;
    local_120.Tail = local_120.Tail + 1;
    if (local_120.Capacity <= local_120.Tail) {
      local_120.Tail = local_120.Tail - local_120.Capacity;
    }
    TTestToken<int>::DestructorCalls = TTestToken<int>::DestructorCalls + 1;
    local_120.Count = local_120.Count + 1;
    uVar18 = uVar18 + 1;
    uVar14 = local_120.Capacity;
    uVar16 = local_120.Count;
  } while ((int)uVar18 < 6);
  if (local_120.Count != 6) {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar2 = pFVar5->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_160,L"Condition failed");
    (*pcVar3)(pFVar2,&local_160,0);
    if (local_160.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_160.Data.AllocatorInstance.Data);
    }
  }
  if (local_120.Capacity < 6) {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar2 = pFVar5->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_150,L"Condition failed");
    (*pcVar3)(pFVar2,&local_150,0);
    if (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_150.Data.AllocatorInstance.Data);
    }
  }
  iVar17 = local_120.Count;
  local_a8.Storage.SecondaryData = (ForElementType<TTestToken<int>_>)0x0;
  local_a8.Capacity = (int)___xmm_00000000000000000000000000000004;
  local_a8.Count = (int)((ulonglong)___xmm_00000000000000000000000000000004 >> 0x20);
  local_a8.Head = (int)_UNK_15071d208;
  local_a8.Tail = (int)((ulonglong)_UNK_15071d208 >> 0x20);
  if (local_120.Count != 0) {
    if (4 < local_120.Count) {
      if ((uint)local_120.Count < 5) {
        iVar13 = 4;
      }
      else {
        uVar6 = FMemory::QuantizeSize((longlong)local_120.Count << 2,0);
        iVar13 = (int)(uVar6 >> 2);
        if (iVar13 < iVar17) {
          iVar13 = 0x7fffffff;
        }
      }
      TDeque<TTestToken<int>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>::Grow
                (&local_a8,iVar13);
    }
    if (local_120.Head < local_120.Tail) {
      FVar10 = (ForElementType<TTestToken<int>_>)&local_120;
      if (local_120.Storage.SecondaryData != (ForElementType<TTestToken<int>_>)0x0) {
        FVar10 = local_120.Storage.SecondaryData;
      }
      FVar10 = (ForElementType<TTestToken<int>_>)((longlong)FVar10 + (longlong)local_120.Head * 4);
      FVar11 = (ForElementType<TTestToken<int>_>)&local_a8;
      uVar18 = local_120.Count;
      if (local_a8.Storage.SecondaryData != (ForElementType<TTestToken<int>_>)0x0) {
        FVar11 = local_a8.Storage.SecondaryData;
      }
    }
    else {
      iVar17 = local_120.Capacity - local_120.Head;
      FVar10 = (ForElementType<TTestToken<int>_>)&local_120;
      if (local_120.Storage.SecondaryData != (ForElementType<TTestToken<int>_>)0x0) {
        FVar10 = local_120.Storage.SecondaryData;
      }
      FVar11 = (ForElementType<TTestToken<int>_>)&local_a8;
      if (local_a8.Storage.SecondaryData != (ForElementType<TTestToken<int>_>)0x0) {
        FVar11 = local_a8.Storage.SecondaryData;
      }
      ConstructItems<TTestToken<int>,TTestToken<int>,int>
                ((void *)FVar11,(TTestToken<int> *)((longlong)FVar10 + (longlong)local_120.Head * 4)
                 ,iVar17);
      FVar10 = (ForElementType<TTestToken<int>_>)&local_120;
      if (local_120.Storage.SecondaryData != (ForElementType<TTestToken<int>_>)0x0) {
        FVar10 = local_120.Storage.SecondaryData;
      }
      FVar11 = (ForElementType<TTestToken<int>_>)&local_a8;
      if (local_a8.Storage.SecondaryData != (ForElementType<TTestToken<int>_>)0x0) {
        FVar11 = local_a8.Storage.SecondaryData;
      }
      FVar11 = (ForElementType<TTestToken<int>_>)((longlong)FVar11 + (longlong)iVar17 * 4);
      uVar18 = local_120.Tail;
    }
    ConstructItems<TTestToken<int>,TTestToken<int>,int>
              ((void *)FVar11,(TTestToken<int> *)FVar10,uVar18);
    local_a8.Count = local_120.Count;
    local_a8.Head = 0;
    local_a8.Tail = local_120.Count;
    if (local_a8.Capacity <= local_120.Count) {
      local_a8.Tail = local_120.Count - local_a8.Capacity;
    }
    if (local_120.Count == 6) goto LAB_141b710bd;
  }
  pFVar5 = FAutomationTestFramework::Get();
  pFVar2 = pFVar5->CurrentTest;
  pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
  ::FString::FString(&local_140,L"Condition failed");
  (*pcVar3)(pFVar2,&local_140);
  if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_140.Data.AllocatorInstance.Data);
  }
LAB_141b710bd:
  if (local_a8.Capacity < 6) {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar2 = pFVar5->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_130,L"Condition failed");
    (*pcVar3)(pFVar2,&local_130);
    if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_130.Data.AllocatorInstance.Data);
    }
  }
  iVar13 = local_a8.Head;
  iVar17 = local_a8.Capacity;
  FVar10 = local_a8.Storage.SecondaryData;
  uVar18 = local_120.Count;
  if (local_a8.Count != 0) {
    uVar14 = local_a8.Count;
    if (local_a8.Tail <= local_a8.Head) {
      FVar11 = (ForElementType<TTestToken<int>_>)&local_a8;
      if (local_a8.Storage.SecondaryData != (ForElementType<TTestToken<int>_>)0x0) {
        FVar11 = local_a8.Storage.SecondaryData;
      }
      DestructItems<TTestToken<int>,int>((TTestToken<int> *)FVar11,local_a8.Tail);
      uVar14 = iVar17 - iVar13;
    }
    FVar11 = (ForElementType<TTestToken<int>_>)&local_a8;
    if (FVar10 != (ForElementType<TTestToken<int>_>)0x0) {
      FVar11 = FVar10;
    }
    DestructItems<TTestToken<int>,int>
              ((TTestToken<int> *)((longlong)FVar11 + (longlong)iVar13 * 4),uVar14);
  }
  local_a8.Count = 0;
  local_a8.Head = 0;
  local_a8.Tail = 0;
  if (iVar17 != 0) {
    if (FVar10 != (ForElementType<TTestToken<int>_>)0x0) {
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_a8.Storage.SecondaryData,0,0,4);
      FVar10 = local_a8.Storage.SecondaryData;
      uVar18 = local_120.Count;
    }
    local_a8.Capacity = 4;
  }
  if (FVar10 != (ForElementType<TTestToken<int>_>)0x0) {
    FMemory::Free((void *)FVar10);
    uVar18 = local_120.Count;
  }
  iVar13 = local_120.Head;
  iVar17 = local_120.Capacity;
  FVar10 = local_120.Storage.SecondaryData;
  if (uVar18 != 0) {
    lVar19 = (longlong)local_120.Head;
    if (local_120.Tail <= local_120.Head) {
      FVar11 = (ForElementType<TTestToken<int>_>)&local_120;
      if (local_120.Storage.SecondaryData != (ForElementType<TTestToken<int>_>)0x0) {
        FVar11 = local_120.Storage.SecondaryData;
      }
      DestructItems<TTestToken<int>,int>((TTestToken<int> *)FVar11,local_120.Tail);
      uVar18 = iVar17 - iVar13;
    }
    FVar11 = (ForElementType<TTestToken<int>_>)&local_120;
    if (FVar10 != (ForElementType<TTestToken<int>_>)0x0) {
      FVar11 = FVar10;
    }
    DestructItems<TTestToken<int>,int>((TTestToken<int> *)((longlong)FVar11 + lVar19 * 4),uVar18);
  }
  local_120.Count = 0;
  local_120.Head = 0;
  local_120.Tail = 0;
  if (iVar17 != 0) {
    if (FVar10 != (ForElementType<TTestToken<int>_>)0x0) {
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_120.Storage.SecondaryData,0,0,4);
      FVar10 = local_120.Storage.SecondaryData;
    }
    local_120.Capacity = 4;
  }
  if (FVar10 != (ForElementType<TTestToken<int>_>)0x0) {
    FMemory::Free((void *)FVar10);
  }
  return;
}

