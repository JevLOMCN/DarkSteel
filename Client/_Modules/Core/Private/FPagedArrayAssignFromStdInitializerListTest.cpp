// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 10

// GetTestFlags @ 141adc010

EAutomationTestFlags __thiscall
PagedArray::FPagedArrayAssignFromStdInitializerListTest::GetTestFlags
          (FPagedArrayAssignFromStdInitializerListTest *this)

{
  return this->TestFlags;
}

// IsStressTest @ 141adc020

bool __thiscall
PagedArray::FPagedArrayAssignFromStdInitializerListTest::IsStressTest
          (FPagedArrayAssignFromStdInitializerListTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141adc030

uint __thiscall
PagedArray::FPagedArrayAssignFromStdInitializerListTest::GetRequiredDeviceNum
          (FPagedArrayAssignFromStdInitializerListTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 141adc040

FString * __thiscall
PagedArray::FPagedArrayAssignFromStdInitializerListTest::GetTestSourceFileName
          (FPagedArrayAssignFromStdInitializerListTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Containers\\PagedArrayTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141adc070

int __thiscall
PagedArray::FPagedArrayAssignFromStdInitializerListTest::GetTestSourceFileLine
          (FPagedArrayAssignFromStdInitializerListTest *this)

{
  return 0x3d1;
}

// GetTests @ 141adc080

/* WARNING: Removing unreachable block (ram,0x000141adc1fe) */

void __thiscall
PagedArray::FPagedArrayAssignFromStdInitializerListTest::GetTests
          (FPagedArrayAssignFromStdInitializerListTest *this,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
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

// RunTest @ 141adc220

bool __thiscall
PagedArray::FPagedArrayAssignFromStdInitializerListTest::RunTest
          (FPagedArrayAssignFromStdInitializerListTest *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 141adc250

FString * __thiscall
PagedArray::FPagedArrayAssignFromStdInitializerListTest::GetBeautifiedTestName
          (FPagedArrayAssignFromStdInitializerListTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FPagedArrayAssignFromStdInitializerListTest @ 141b22900

FPagedArrayAssignFromStdInitializerListTest * __thiscall
PagedArray::FPagedArrayAssignFromStdInitializerListTest::FPagedArrayAssignFromStdInitializerListTest
          (FPagedArrayAssignFromStdInitializerListTest *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7FPagedArrayAssignFromStdInitializerListTest_PagedArray__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[SmokeFilter][Core][Containers][PagedArray]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,
                              "System::Core::Containers::TPagedArray::Assign from std initializer_list"
                             );
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
  ::FString::FString(&local_18,"[SmokeFilter][Core][Containers][PagedArray]");
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

// TestBody @ 141b8bff0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
PagedArray::FPagedArrayAssignFromStdInitializerListTest::TestBody
          (FPagedArrayAssignFromStdInitializerListTest *this,FString *param_1)

{
  int iVar1;
  FAutomationTestBase *pFVar2;
  code *pcVar3;
  bool bVar4;
  FAutomationTestFramework *pFVar5;
  uint uVar6;
  TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *pTVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined1 auStack_168 [32];
  longlong local_148;
  longlong local_140;
  int local_138;
  TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *local_130;
  TPagedArray<TTestToken<int>,16,TSizedDefaultAllocator<32>_> local_128;
  TPagedArray<TTestToken<int>,16,TSizedDefaultAllocator<32>_> local_110;
  FString local_f8;
  FString local_e8;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  TTestToken<int> local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_168;
  TTestToken<int>::DestructorCalls = 0;
  TTestToken<int>::CopyConstructorCalls = 0;
  TTestToken<int>::MoveConstructorCalls = 0;
  TTestToken<int>::CopyAssignmentCalls = 0;
  TTestToken<int>::MoveAssignmentCalls = 0;
  local_128.Pages.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_128.Pages.ArrayNum = 0;
  local_128.Pages.ArrayMax = 0;
  local_128.Count = 0;
  local_68.Value = 0;
  local_64 = 1;
  local_60 = 2;
  TTestToken<int>::ConstructorCalls = 4;
  local_5c = 3;
  TPagedArray<TTestToken<int>,16,TSizedDefaultAllocator<32>_>::Reset(&local_128);
  if (local_128.Pages.ArrayNum * 4 < (int)(local_128.Count + 4U)) {
    TPagedArray<TTestToken<int>,16,TSizedDefaultAllocator<32>_>::Grow
              (&local_128,local_128.Count + 4U);
  }
  TPagedArray<TTestToken<int>,16,TSizedDefaultAllocator<32>_>::CopyUnchecked(&local_128,&local_68,4)
  ;
  TTestToken<int>::DestructorCalls = TTestToken<int>::DestructorCalls + 4;
  if (local_128.Count != 4) {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar2 = pFVar5->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_f8,L"Condition failed");
    (*pcVar3)(pFVar2,&local_f8,0);
    if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.Data.AllocatorInstance.Data);
    }
  }
  if ((local_128.Pages.ArrayNum & 0x3fffffffU) != 1) {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar2 = pFVar5->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_e8,L"Condition failed");
    (*pcVar3)(pFVar2,&local_e8,0);
    if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e8.Data.AllocatorInstance.Data);
    }
  }
  local_130 = (TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)
              local_128.Pages.AllocatorInstance.Data;
  local_138 = (int)(local_128.Count + (local_128.Count >> 0x1f & 3U)) >> 2;
  uVar10 = local_128.Count & 0x80000003;
  uVar9 = 0;
  iVar11 = 0;
  if ((int)uVar10 < 0) {
    uVar10 = (uVar10 - 1 | 0xfffffffc) + 1;
    uVar9 = 0;
    iVar11 = 0;
  }
  do {
    uVar6 = 0;
    uVar8 = uVar9;
    do {
      if ((iVar11 == local_138) && (uVar6 == uVar10)) {
        if (local_128.Count != uVar8) {
          pFVar5 = FAutomationTestFramework::Get();
          pFVar2 = pFVar5->CurrentTest;
          pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
          ::FString::FString(&local_c8,L"Condition failed");
          (*pcVar3)(pFVar2,&local_c8,0);
          if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_c8.Data.AllocatorInstance.Data);
          }
        }
        DestructItems<TArray<TTestToken<int>,TSizedDefaultAllocator<32>_>,int>
                  ((TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)
                   local_128.Pages.AllocatorInstance.Data,local_128.Pages.ArrayNum);
        if ((TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)
            local_128.Pages.AllocatorInstance.Data !=
            (TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)0x0) {
          FMemory::Free(local_128.Pages.AllocatorInstance.Data);
        }
        TTestToken<int>::ConstructorCalls = TTestToken<int>::ConstructorCalls + 10;
        local_110.Pages.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_110.Pages.ArrayNum = 0;
        local_110.Pages.ArrayMax = 0;
        local_110.Count = 0;
        local_58 = __xmm_00000003000000020000000100000000;
        uStack_50 = _UNK_150631e08;
        local_38 = 8;
        local_48 = ___xmm_00000007000000060000000500000004;
        uStack_40 = _UNK_150631eb8;
        local_34 = 9;
        TPagedArray<TTestToken<int>,16,TSizedDefaultAllocator<32>_>::Reset(&local_110);
        if (local_110.Pages.ArrayNum * 4 < (int)(local_110.Count + 10U)) {
          TPagedArray<TTestToken<int>,16,TSizedDefaultAllocator<32>_>::Grow
                    (&local_110,local_110.Count + 10U);
        }
        TPagedArray<TTestToken<int>,16,TSizedDefaultAllocator<32>_>::CopyUnchecked
                  (&local_110,(TTestToken<int> *)&local_58,10);
        TTestToken<int>::DestructorCalls = TTestToken<int>::DestructorCalls + 10;
        if (local_110.Count != 10) {
          pFVar5 = FAutomationTestFramework::Get();
          pFVar2 = pFVar5->CurrentTest;
          pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
          ::FString::FString(&local_b8,L"Condition failed");
          (*pcVar3)(pFVar2,&local_b8,0);
          if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_b8.Data.AllocatorInstance.Data);
          }
        }
        if ((local_110.Pages.ArrayNum & 0x3fffffffU) != 3) {
          pFVar5 = FAutomationTestFramework::Get();
          pFVar2 = pFVar5->CurrentTest;
          pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
          ::FString::FString(&local_a8,L"Condition failed");
          (*pcVar3)(pFVar2,&local_a8,0);
          if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_a8.Data.AllocatorInstance.Data);
          }
        }
        local_130 = (TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)
                    local_110.Pages.AllocatorInstance.Data;
        iVar11 = 0;
        local_138 = (int)(local_110.Count + (local_110.Count >> 0x1f & 3U)) >> 2;
        uVar10 = local_110.Count & 0x80000003;
        uVar9 = 0;
        if ((int)uVar10 < 0) {
          uVar10 = (uVar10 - 1 | 0xfffffffc) + 1;
          uVar9 = 0;
        }
        do {
          uVar6 = 0;
          uVar8 = uVar9;
          do {
            if ((iVar11 == local_138) && (uVar6 == uVar10)) {
              if (local_110.Count != uVar8) {
                pFVar5 = FAutomationTestFramework::Get();
                pFVar2 = pFVar5->CurrentTest;
                pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
                ::FString::FString(&local_88,L"Condition failed");
                (*pcVar3)(pFVar2,&local_88,0);
                if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_88.Data.AllocatorInstance.Data);
                }
              }
              DestructItems<TArray<TTestToken<int>,TSizedDefaultAllocator<32>_>,int>
                        ((TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)
                         local_110.Pages.AllocatorInstance.Data,local_110.Pages.ArrayNum);
              if ((TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)
                  local_110.Pages.AllocatorInstance.Data !=
                  (TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)0x0) {
                FMemory::Free(local_110.Pages.AllocatorInstance.Data);
              }
              if (((TTestToken<int>::MoveConstructorCalls - TTestToken<int>::DestructorCalls) +
                   TTestToken<int>::CopyConstructorCalls + TTestToken<int>::ConstructorCalls != 0)
                 || (TTestToken<int>::DestructorCalls != 0x1c)) {
                pFVar5 = FAutomationTestFramework::Get();
                pFVar2 = pFVar5->CurrentTest;
                pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
                ::FString::FString(&local_78,L"Condition failed");
                (*pcVar3)(pFVar2,&local_78,0);
                if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_78.Data.AllocatorInstance.Data);
                }
              }
              return;
            }
            pTVar7 = local_130 + iVar11;
            iVar1 = pTVar7->ArrayNum;
            uVar9 = 0;
            if ((int)uVar6 < iVar1) {
              uVar9 = ~uVar6 >> 0x1f;
            }
            if (uVar9 == 0) {
              local_148 = (longlong)(int)uVar6;
              local_140 = (longlong)iVar1;
              bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar4) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
            }
            uVar9 = uVar8 + 1;
            if (*(uint *)((pTVar7->AllocatorInstance).Data + (longlong)(int)uVar6 * 4) != uVar8) {
              pFVar5 = FAutomationTestFramework::Get();
              pFVar2 = pFVar5->CurrentTest;
              pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
              ::FString::FString(&local_98,L"Condition failed");
              (*pcVar3)(pFVar2,&local_98,0);
              if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_98.Data.AllocatorInstance.Data);
              }
            }
            uVar6 = uVar6 + 1;
            uVar8 = uVar9;
          } while (uVar6 != 4);
          iVar11 = iVar11 + 1;
        } while( true );
      }
      pTVar7 = local_130 + iVar11;
      iVar1 = pTVar7->ArrayNum;
      uVar9 = 0;
      if ((int)uVar6 < iVar1) {
        uVar9 = ~uVar6 >> 0x1f;
      }
      if (uVar9 == 0) {
        local_148 = (longlong)(int)uVar6;
        local_140 = (longlong)iVar1;
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      uVar9 = uVar8 + 1;
      if (*(uint *)((pTVar7->AllocatorInstance).Data + (longlong)(int)uVar6 * 4) != uVar8) {
        pFVar5 = FAutomationTestFramework::Get();
        pFVar2 = pFVar5->CurrentTest;
        pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
        ::FString::FString(&local_d8,L"Condition failed");
        (*pcVar3)(pFVar2,&local_d8,0);
        if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_d8.Data.AllocatorInstance.Data);
        }
      }
      uVar6 = uVar6 + 1;
      uVar8 = uVar9;
    } while (uVar6 != 4);
    iVar11 = iVar11 + 1;
  } while( true );
}

