// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 10

// GetTestFlags @ 141acf350

EAutomationTestFlags __thiscall
UE::Private::TChunkedArrayTIteratorTest::GetTestFlags(TChunkedArrayTIteratorTest *this)

{
  return this->TestFlags;
}

// IsStressTest @ 141acf360

bool __thiscall
UE::Private::TChunkedArrayTIteratorTest::IsStressTest(TChunkedArrayTIteratorTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141acf370

uint __thiscall
UE::Private::TChunkedArrayTIteratorTest::GetRequiredDeviceNum(TChunkedArrayTIteratorTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 141acf380

FString * __thiscall
UE::Private::TChunkedArrayTIteratorTest::GetTestSourceFileName
          (TChunkedArrayTIteratorTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Containers\\ChunkedArrayTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141acf3b0

int __thiscall
UE::Private::TChunkedArrayTIteratorTest::GetTestSourceFileLine(TChunkedArrayTIteratorTest *this)

{
  return 0x4b;
}

// GetTests @ 141acf3c0

/* WARNING: Removing unreachable block (ram,0x000141acf53e) */

void __thiscall
UE::Private::TChunkedArrayTIteratorTest::GetTests
          (TChunkedArrayTIteratorTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
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
    iVar4 = Core::Private::
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
    iVar4 = Core::Private::
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

// RunTest @ 141acf560

bool __thiscall
UE::Private::TChunkedArrayTIteratorTest::RunTest(TChunkedArrayTIteratorTest *this,FString *param_1)

{
  FAutomationTestBase *pFVar1;
  code *pcVar2;
  FScriptContainerElement *pFVar3;
  bool bVar4;
  undefined8 *puVar5;
  FAutomationTestFramework *pFVar6;
  uint uVar7;
  ForAnyElementType FVar8;
  int iVar9;
  ulonglong uVar10;
  int iVar11;
  uint uVar12;
  ulonglong uVar13;
  uint uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  FString local_48;
  FString local_38;
  TChunkedArray<_protected:_void___cdecl_UE::Private::TChunkedArrayTIteratorTest::TestBody(FString_const_&)_::_2_::FDataTest,16384,TSizedDefaultAllocator<32>_>
  local_28;
  
  iVar11 = 0x800;
  uVar16 = 0;
  do {
    local_28.Chunks.Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.Chunks.Array.ArrayMax = 0;
    local_28.NumElements = 0;
    local_28.Chunks.Array.ArrayNum = 0;
    uVar10 = uVar16;
    do {
      iVar9 = (int)uVar10;
      puVar5 = operator_new<_UE::Private::TChunkedArrayTIteratorTest::TestBody_::__l2::FDataTest,16384,TSizedDefaultAllocator<32>_>
                         (0x10,&local_28);
      if (puVar5 != (undefined8 *)0x0) {
        *puVar5 = CONCAT44(iVar9,iVar9);
        puVar5[1] = CONCAT44(iVar9,iVar9);
      }
      uVar10 = (ulonglong)(iVar9 + 1U);
    } while ((int)(iVar9 + 1U) < iVar11);
    uVar10 = uVar16;
    uVar13 = uVar16;
    FVar8.Data = local_28.Chunks.Array.AllocatorInstance.Data;
    uVar15 = uVar16;
    uVar12 = 0;
    if (local_28.NumElements != 0) {
      do {
        uVar12 = (int)uVar10 + 1;
        if ((int)uVar10 != *(int *)(*(longlong *)FVar8.Data + uVar13 * 0x10)) {
          pFVar6 = FAutomationTestFramework::Get();
          pFVar1 = pFVar6->CurrentTest;
          pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
          ::FString::FString(&local_48,L"Required condition failed, interrupting test");
          (*pcVar2)(pFVar1,&local_48,0);
          FVar8.Data = local_48.Data.AllocatorInstance.Data;
          goto LAB_141acf667;
        }
        uVar7 = (int)uVar13 + 1;
        uVar14 = (int)uVar15 + 1;
        uVar13 = uVar16;
        pFVar3 = FVar8.Data + 8;
        if (uVar7 < 0x400) {
          uVar13 = (ulonglong)uVar7;
          pFVar3 = FVar8.Data;
        }
        uVar10 = (ulonglong)uVar12;
        FVar8.Data = pFVar3;
        uVar15 = (ulonglong)uVar14;
      } while (uVar14 < (uint)local_28.NumElements);
    }
    if (uVar12 != local_28.NumElements) {
      pFVar6 = FAutomationTestFramework::Get();
      pFVar1 = pFVar6->CurrentTest;
      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
      ::FString::FString(&local_38,L"Required condition failed, interrupting test");
      (*pcVar2)(pFVar1,&local_38,0);
      FVar8.Data = local_38.Data.AllocatorInstance.Data;
LAB_141acf667:
      if (FVar8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FVar8.Data);
      }
    }
    TIndirectArray<TChunkedArray<`UE::Private::TChunkedArrayTIteratorTest::TestBody'::__l2::FDataTest,16384,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
    ::
    ~TIndirectArray<TChunkedArray<_UE::Private::TChunkedArrayTIteratorTest::TestBody_::__l2::FDataTest,16384,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
              (&local_28);
    iVar11 = iVar11 + 1;
    if (0xfff < iVar11) {
      bVar4 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
      return !bVar4;
    }
  } while( true );
}

// GetBeautifiedTestName @ 141acf700

FString * __thiscall
UE::Private::TChunkedArrayTIteratorTest::GetBeautifiedTestName
          (TChunkedArrayTIteratorTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// TChunkedArrayTIteratorTest @ 141b28b50

TChunkedArrayTIteratorTest * __thiscall
UE::Private::TChunkedArrayTIteratorTest::TChunkedArrayTIteratorTest
          (TChunkedArrayTIteratorTest *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7TChunkedArrayTIteratorTest_Private_UE__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[Core][Containers][ChunkedArray]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"System::Core::Containers::ChunkedArray::TIterator");
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
  ::FString::FString(&local_18,"[Core][Containers][ChunkedArray]");
  local_28.Data.ArrayNum = (this->PrettyNameDotNotation).Data.ArrayNum;
  lVar5 = (longlong)local_28.Data.ArrayNum;
  pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_28.Data.ArrayNum == 0) {
    local_28.Data.ArrayMax = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
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

// TestBody @ 141ba54a0

void __thiscall
UE::Private::TChunkedArrayTIteratorTest::TestBody(TChunkedArrayTIteratorTest *this,FString *param_1)

{
  FAutomationTestBase *pFVar1;
  code *pcVar2;
  FScriptContainerElement *pFVar3;
  undefined8 *puVar4;
  FAutomationTestFramework *pFVar5;
  uint uVar6;
  ForAnyElementType FVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  int iVar11;
  uint uVar12;
  ulonglong uVar13;
  uint uVar14;
  ulonglong uVar15;
  FString local_48;
  FString local_38;
  TChunkedArray<_protected:_void___cdecl_UE::Private::TChunkedArrayTIteratorTest::TestBody(FString_const_&)_::_2_::FDataTest,16384,TSizedDefaultAllocator<32>_>
  local_28;
  
  iVar11 = 0x800;
  uVar10 = 0;
  do {
    local_28.Chunks.Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.Chunks.Array.ArrayMax = 0;
    local_28.NumElements = 0;
    local_28.Chunks.Array.ArrayNum = 0;
    uVar9 = uVar10;
    do {
      iVar8 = (int)uVar9;
      puVar4 = operator_new<_UE::Private::TChunkedArrayTIteratorTest::TestBody_::__l2::FDataTest,16384,TSizedDefaultAllocator<32>_>
                         (0x10,&local_28);
      if (puVar4 != (undefined8 *)0x0) {
        *puVar4 = CONCAT44(iVar8,iVar8);
        puVar4[1] = CONCAT44(iVar8,iVar8);
      }
      uVar9 = (ulonglong)(iVar8 + 1U);
    } while ((int)(iVar8 + 1U) < iVar11);
    uVar9 = uVar10;
    uVar13 = uVar10;
    FVar7.Data = local_28.Chunks.Array.AllocatorInstance.Data;
    uVar15 = uVar10;
    uVar12 = 0;
    if (local_28.NumElements != 0) {
      do {
        uVar12 = (int)uVar9 + 1;
        if ((int)uVar9 != *(int *)(*(longlong *)FVar7.Data + uVar13 * 0x10)) {
          pFVar5 = FAutomationTestFramework::Get();
          pFVar1 = pFVar5->CurrentTest;
          pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
          ::FString::FString(&local_48,L"Required condition failed, interrupting test");
          (*pcVar2)(pFVar1,&local_48,0);
          FVar7.Data = local_48.Data.AllocatorInstance.Data;
          goto LAB_141ba5597;
        }
        uVar6 = (int)uVar13 + 1;
        uVar14 = (int)uVar15 + 1;
        uVar13 = uVar10;
        pFVar3 = FVar7.Data + 8;
        if (uVar6 < 0x400) {
          uVar13 = (ulonglong)uVar6;
          pFVar3 = FVar7.Data;
        }
        uVar9 = (ulonglong)uVar12;
        FVar7.Data = pFVar3;
        uVar15 = (ulonglong)uVar14;
      } while (uVar14 < (uint)local_28.NumElements);
    }
    if (uVar12 != local_28.NumElements) {
      pFVar5 = FAutomationTestFramework::Get();
      pFVar1 = pFVar5->CurrentTest;
      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
      ::FString::FString(&local_38,L"Required condition failed, interrupting test");
      (*pcVar2)(pFVar1,&local_38,0);
      FVar7.Data = local_38.Data.AllocatorInstance.Data;
LAB_141ba5597:
      if (FVar7.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FVar7.Data);
      }
    }
    TIndirectArray<TChunkedArray<`UE::Private::TChunkedArrayTIteratorTest::TestBody'::__l2::FDataTest,16384,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
    ::
    ~TIndirectArray<TChunkedArray<_UE::Private::TChunkedArrayTIteratorTest::TestBody_::__l2::FDataTest,16384,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
              (&local_28);
    iVar11 = iVar11 + 1;
    if (0xfff < iVar11) {
      return;
    }
  } while( true );
}

