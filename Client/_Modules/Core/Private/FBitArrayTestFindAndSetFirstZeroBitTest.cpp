// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 10

// GetTestFlags @ 141ac7a40

EAutomationTestFlags __thiscall
FBitArrayTestFindAndSetFirstZeroBitTest::GetTestFlags(FBitArrayTestFindAndSetFirstZeroBitTest *this)

{
  return this->TestFlags;
}

// IsStressTest @ 141ac7a50

bool __thiscall
FBitArrayTestFindAndSetFirstZeroBitTest::IsStressTest(FBitArrayTestFindAndSetFirstZeroBitTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141ac7a60

uint __thiscall
FBitArrayTestFindAndSetFirstZeroBitTest::GetRequiredDeviceNum
          (FBitArrayTestFindAndSetFirstZeroBitTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 141ac7a70

FString * __thiscall
FBitArrayTestFindAndSetFirstZeroBitTest::GetTestSourceFileName
          (FBitArrayTestFindAndSetFirstZeroBitTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Containers\\BitArrayTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141ac7aa0

int __thiscall
FBitArrayTestFindAndSetFirstZeroBitTest::GetTestSourceFileLine
          (FBitArrayTestFindAndSetFirstZeroBitTest *this)

{
  return 0x8e9;
}

// GetTests @ 141ac7ab0

/* WARNING: Removing unreachable block (ram,0x000141ac7c2e) */

void __thiscall
FBitArrayTestFindAndSetFirstZeroBitTest::GetTests
          (FBitArrayTestFindAndSetFirstZeroBitTest *this,
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

// RunTest @ 141ac7c50

bool __thiscall
FBitArrayTestFindAndSetFirstZeroBitTest::RunTest
          (FBitArrayTestFindAndSetFirstZeroBitTest *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 141ac7c80

FString * __thiscall
FBitArrayTestFindAndSetFirstZeroBitTest::GetBeautifiedTestName
          (FBitArrayTestFindAndSetFirstZeroBitTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FBitArrayTestFindAndSetFirstZeroBitTest @ 141b1ac40

FBitArrayTestFindAndSetFirstZeroBitTest * __thiscall
FBitArrayTestFindAndSetFirstZeroBitTest::FBitArrayTestFindAndSetFirstZeroBitTest
          (FBitArrayTestFindAndSetFirstZeroBitTest *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7FBitArrayTestFindAndSetFirstZeroBitTest__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[ApplicationContextMask][SmokeFilter]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"System::Core::Containers::BitArray::FindAndSetFirstZeroBit"
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

// TestBody @ 141b63b30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FBitArrayTestFindAndSetFirstZeroBitTest::TestBody
          (FBitArrayTestFindAndSetFirstZeroBitTest *this,FString *param_1)

{
  uint *puVar1;
  FAutomationTestBase *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FAutomationTestFramework *pFVar6;
  TBitArray<FDefaultBitArrayAllocator> *pTVar7;
  uint uVar8;
  ForElementType<unsigned_int> FVar10;
  ulonglong uVar11;
  undefined1 auStack_108 [32];
  uint local_e8;
  int local_e0;
  int local_d8;
  int local_d4;
  FString local_d0;
  FString local_c0;
  FString local_b0;
  FString local_a0;
  FString local_90;
  TBitArray<FDefaultBitArrayAllocator> local_80;
  TBitArray<FDefaultBitArrayAllocator> local_60;
  TBitArray<FDefaultBitArrayAllocator> local_40;
  ulonglong local_20;
  ulonglong uVar9;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_108;
  uVar11 = 0;
  local_40.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_40.NumBits = 0;
  local_40.MaxBits = 0x80;
  iVar5 = TBitArray<FDefaultBitArrayAllocator>::CountSetBits(&local_40,0,-1);
  if (iVar5 != 0) {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar2 = pFVar6->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_d0,L"Array should remain empty and have no set bits");
    (*pcVar3)(pFVar2,&local_d0,0);
    if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d0.Data.AllocatorInstance.Data);
    }
    if (local_40.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_40.AllocatorInstance.SecondaryData);
    }
  }
  local_80.MaxBits = 0x80;
  local_80.NumBits = 0x20;
  local_80.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_80.AllocatorInstance.InlineData[0] = 0xff;
  local_80.AllocatorInstance.InlineData[1] = 0xff;
  local_80.AllocatorInstance.InlineData[2] = 0xff;
  local_80.AllocatorInstance.InlineData[3] = 0xff;
  pTVar7 = &local_80;
  uVar9 = uVar11;
  while (*(int *)(pTVar7->AllocatorInstance).InlineData == -1) {
    uVar8 = (int)uVar9 + 1;
    uVar9 = (ulonglong)uVar8;
    pTVar7 = (TBitArray<FDefaultBitArrayAllocator> *)((pTVar7->AllocatorInstance).InlineData + 4);
    if (0 < (int)uVar8) goto LAB_141b63dcc;
  }
  uVar8 = ~*(uint *)(local_80.AllocatorInstance.InlineData + uVar9 * 4);
  local_d8 = 0;
  if (uVar8 != 0) {
    for (; (uVar8 >> local_d8 & 1) == 0; local_d8 = local_d8 + 1) {
    }
  }
  iVar5 = 0x20;
  if (uVar8 != 0) {
    iVar5 = local_d8;
  }
  iVar5 = iVar5 + (int)uVar9 * 0x20;
  if ((iVar5 < 0x20) && (iVar5 != -1)) {
    if (((iVar5 < 0) || (0x1f < iVar5)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    FVar10 = (ForElementType<unsigned_int>)&local_80;
    if (local_80.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar10 = local_80.AllocatorInstance.SecondaryData;
    }
    puVar1 = (uint *)((longlong)FVar10 + (longlong)((int)(iVar5 + (iVar5 >> 0x1f & 0x1fU)) >> 5) * 4
                     );
    *puVar1 = *puVar1 | 1 << ((byte)iVar5 & 0x1f);
    if (local_80.MaxBits < local_80.NumBits) {
      local_e0 = local_80.MaxBits;
      local_e8 = local_80.NumBits;
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumBits <= MaxBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x238,L"TBitArray::NumBits (%d) should never be greater than MaxBits (%d)"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if ((local_80.NumBits < 0) || (local_80.MaxBits < 0)) {
      local_e0 = local_80.MaxBits;
      local_e8 = local_80.NumBits;
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumBits >= 0 && MaxBits >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x239,L"NumBits (%d) and MaxBits (%d) should always be >= 0");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    uVar8 = local_80.NumBits & 0x8000001f;
    if ((int)uVar8 < 0) {
      uVar8 = (uVar8 - 1 | 0xffffffe0) + 1;
    }
    if (uVar8 != 0) {
      FVar10 = (ForElementType<unsigned_int>)&local_80;
      if (local_80.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FVar10 = local_80.AllocatorInstance.SecondaryData;
      }
      if (((*(uint *)((longlong)FVar10 +
                     (longlong)((int)(local_80.NumBits + (local_80.NumBits >> 0x1f & 0x1fU)) >> 5) *
                     4) & -1 << ((byte)uVar8 & 0x1f)) != 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(LastWord & SlackMask) == 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x243,
                             L"TBitArray slack bits are non-zero, this will result in undefined behavior."
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pFVar6 = FAutomationTestFramework::Get();
    pFVar2 = pFVar6->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_c0,L"Find and set first zero bit in an array containing 32 true");
    (*pcVar3)(pFVar2,&local_c0,0);
    if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c0.Data.AllocatorInstance.Data);
    }
  }
LAB_141b63dcc:
  FVar10 = local_80.AllocatorInstance.SecondaryData;
  iVar5 = TBitArray<FDefaultBitArrayAllocator>::CountSetBits(&local_80,0,-1);
  if (iVar5 != 0x20) {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar2 = pFVar6->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_b0,L"Array should still contain 32 true bits");
    (*pcVar3)(pFVar2,&local_b0,0);
    FVar10 = local_80.AllocatorInstance.SecondaryData;
    if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b0.Data.AllocatorInstance.Data);
      FVar10 = local_80.AllocatorInstance.SecondaryData;
    }
  }
  if (FVar10 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)FVar10);
  }
  local_60.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_60.MaxBits = 0x80;
  local_60.NumBits = 0x20;
  local_60.AllocatorInstance.InlineData[0] = '\0';
  local_60.AllocatorInstance.InlineData[1] = '\0';
  local_60.AllocatorInstance.InlineData[2] = '\0';
  local_60.AllocatorInstance.InlineData[3] = '\0';
  pTVar7 = &local_60;
  while (*(int *)(pTVar7->AllocatorInstance).InlineData == -1) {
    uVar8 = (int)uVar11 + 1;
    uVar11 = (ulonglong)uVar8;
    pTVar7 = (TBitArray<FDefaultBitArrayAllocator> *)((pTVar7->AllocatorInstance).InlineData + 4);
    if (0 < (int)uVar8) goto LAB_141b63fce;
  }
  uVar8 = ~*(uint *)(local_60.AllocatorInstance.InlineData + uVar11 * 4);
  local_d4 = 0;
  if (uVar8 != 0) {
    for (; (uVar8 >> local_d4 & 1) == 0; local_d4 = local_d4 + 1) {
    }
  }
  iVar5 = 0x20;
  if (uVar8 != 0) {
    iVar5 = local_d4;
  }
  iVar5 = iVar5 + (int)uVar11 * 0x20;
  if ((iVar5 < 0x20) && (iVar5 != -1)) {
    if (((iVar5 < 0) || (0x1f < iVar5)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    FVar10 = (ForElementType<unsigned_int>)&local_60;
    if (local_60.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar10 = local_60.AllocatorInstance.SecondaryData;
    }
    puVar1 = (uint *)((longlong)FVar10 + (longlong)((int)(iVar5 + (iVar5 >> 0x1f & 0x1fU)) >> 5) * 4
                     );
    *puVar1 = *puVar1 | 1 << ((byte)iVar5 & 0x1f);
    if (local_60.MaxBits < local_60.NumBits) {
      local_e0 = local_60.MaxBits;
      local_e8 = local_60.NumBits;
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumBits <= MaxBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x238,L"TBitArray::NumBits (%d) should never be greater than MaxBits (%d)"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if ((local_60.NumBits < 0) || (local_60.MaxBits < 0)) {
      local_e0 = local_60.MaxBits;
      local_e8 = local_60.NumBits;
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumBits >= 0 && MaxBits >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x239,L"NumBits (%d) and MaxBits (%d) should always be >= 0");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    uVar8 = local_60.NumBits & 0x8000001f;
    if ((int)uVar8 < 0) {
      uVar8 = (uVar8 - 1 | 0xffffffe0) + 1;
    }
    if (uVar8 != 0) {
      FVar10 = (ForElementType<unsigned_int>)&local_60;
      if (local_60.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FVar10 = local_60.AllocatorInstance.SecondaryData;
      }
      if (((*(uint *)((longlong)FVar10 +
                     (longlong)((int)(local_60.NumBits + (local_60.NumBits >> 0x1f & 0x1fU)) >> 5) *
                     4) & -1 << ((byte)uVar8 & 0x1f)) != 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(LastWord & SlackMask) == 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x243,
                             L"TBitArray slack bits are non-zero, this will result in undefined behavior."
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if (iVar5 == 0) goto LAB_141b6400b;
  }
LAB_141b63fce:
  pFVar6 = FAutomationTestFramework::Get();
  pFVar2 = pFVar6->CurrentTest;
  pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
  ::FString::FString(&local_a0,L"Find and set first zero bit in an array containing 32 false");
  (*pcVar3)(pFVar2,&local_a0,0);
  if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a0.Data.AllocatorInstance.Data);
  }
LAB_141b6400b:
  iVar5 = TBitArray<FDefaultBitArrayAllocator>::CountSetBits(&local_60,0,-1);
  if (iVar5 != 1) {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar2 = pFVar6->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_90,L"Array should contain 1 true bit");
    (*pcVar3)(pFVar2,&local_90,0);
    if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_90.Data.AllocatorInstance.Data);
    }
  }
  if (local_60.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_60.AllocatorInstance.SecondaryData);
  }
  return;
}

