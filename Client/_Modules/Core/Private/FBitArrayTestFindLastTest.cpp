// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 10

// GetTestFlags @ 141ac6be0

EAutomationTestFlags __thiscall
FBitArrayTestFindLastTest::GetTestFlags(FBitArrayTestFindLastTest *this)

{
  return this->TestFlags;
}

// IsStressTest @ 141ac6bf0

bool __thiscall FBitArrayTestFindLastTest::IsStressTest(FBitArrayTestFindLastTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141ac6c00

uint __thiscall FBitArrayTestFindLastTest::GetRequiredDeviceNum(FBitArrayTestFindLastTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 141ac6c10

FString * __thiscall
FBitArrayTestFindLastTest::GetTestSourceFileName
          (FBitArrayTestFindLastTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Containers\\BitArrayTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141ac6c40

int __thiscall FBitArrayTestFindLastTest::GetTestSourceFileLine(FBitArrayTestFindLastTest *this)

{
  return 0x86a;
}

// GetTests @ 141ac6c50

/* WARNING: Removing unreachable block (ram,0x000141ac6dce) */

void __thiscall
FBitArrayTestFindLastTest::GetTests
          (FBitArrayTestFindLastTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
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

// RunTest @ 141ac6df0

bool __thiscall FBitArrayTestFindLastTest::RunTest(FBitArrayTestFindLastTest *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 141ac6e20

FString * __thiscall
FBitArrayTestFindLastTest::GetBeautifiedTestName
          (FBitArrayTestFindLastTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FBitArrayTestFindLastTest @ 141b1afe0

FBitArrayTestFindLastTest * __thiscall
FBitArrayTestFindLastTest::FBitArrayTestFindLastTest
          (FBitArrayTestFindLastTest *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7FBitArrayTestFindLastTest__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[ApplicationContextMask][SmokeFilter]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"System::Core::Containers::BitArray::FindLast");
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

// TestBody @ 141b64630

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000141b6497b) */
/* WARNING: Removing unreachable block (ram,0x000141b64b98) */
/* WARNING: Removing unreachable block (ram,0x000141b649d1) */
/* WARNING: Removing unreachable block (ram,0x000141b64beb) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffff54 : 0x000141b649ed */
/* WARNING: Removing unreachable block (ram,0x000141b64a1b) */
/* WARNING: Removing unreachable block (ram,0x000141b64c2a) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void __thiscall
FBitArrayTestFindLastTest::TestBody(FBitArrayTestFindLastTest *this,FString *param_1)

{
  FAutomationTestBase *pFVar1;
  code *pcVar2;
  longlong lVar3;
  FAutomationTestFramework *pFVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined1 auStack_e8 [32];
  FString local_c8;
  uint local_b0 [4];
  uint *local_a0;
  int local_98;
  undefined4 local_94;
  uint local_90 [4];
  uint *local_80;
  int local_78;
  undefined4 local_74;
  uint local_70 [4];
  uint *local_60;
  int local_58;
  undefined4 local_54;
  uint local_50 [4];
  uint *local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_e8;
  local_60 = (uint *)0x0;
  local_58 = 0x20;
  uVar8 = 1;
  local_54 = 0x80;
  local_70[0] = 0xffffffff;
  while( true ) {
    uVar6 = (int)uVar8 - 1;
    uVar8 = (ulonglong)uVar6;
    if (local_70[uVar8] != 0) break;
    if (uVar6 == 0) goto LAB_141b646dc;
  }
  uVar8 = (ulonglong)local_70[uVar8] * 2 + 1;
  lVar3 = 0x3f;
  if (uVar8 != 0) {
    for (; uVar8 >> lVar3 == 0; lVar3 = lVar3 + -1) {
    }
  }
  if ((int)lVar3 + -1 + uVar6 * 0x20 != 0x1f) {
LAB_141b646dc:
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_c8,L"Find last true in an array containing 32 true");
    (*pcVar2)(pFVar1,&local_c8,0);
    if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Data.AllocatorInstance.Data);
    }
  }
  if (local_58 != 0) {
    uVar8 = (ulonglong)(0xffffffff >> (-(char)local_58 & 0x1fU));
    puVar5 = local_70;
    if (local_60 != (uint *)0x0) {
      puVar5 = local_60;
    }
    uVar6 = local_58 + 0x1fU >> 5;
    uVar9 = (ulonglong)uVar6;
    if (uVar6 != 0) {
LAB_141b64752:
      uVar6 = (int)uVar9 - 1;
      uVar9 = (ulonglong)uVar6;
      if (((uint)uVar8 & puVar5[uVar9]) == (uint)uVar8) goto code_r0x000141b64762;
      uVar8 = (~puVar5[uVar9] & uVar8) * 2 + 1;
      lVar3 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      if ((int)lVar3 + -1 + uVar6 * 0x20 != -1) {
        pFVar4 = FAutomationTestFramework::Get();
        pFVar1 = pFVar4->CurrentTest;
        pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
        ::FString::FString(&local_c8,L"Find last false in an array containing 32 true");
        (*pcVar2)(pFVar1,&local_c8,0);
        if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_c8.Data.AllocatorInstance.Data);
        }
      }
    }
  }
LAB_141b647ce:
  if (local_60 != (uint *)0x0) {
    FMemory::Free(local_60);
  }
  local_40 = (uint *)0x0;
  local_34 = 0x80;
  local_38 = 0x20;
  uVar8 = 1;
  local_50[0] = 0;
LAB_141b64810:
  uVar6 = (int)uVar8 - 1;
  uVar8 = (ulonglong)uVar6;
  if (local_50[uVar8] == 0xffffffff) goto code_r0x000141b64820;
  uVar8 = (ulonglong)~local_50[uVar8] * 2 + 1;
  lVar3 = 0x3f;
  if (uVar8 != 0) {
    for (; uVar8 >> lVar3 == 0; lVar3 = lVar3 + -1) {
    }
  }
  if ((int)lVar3 + -1 + uVar6 * 0x20 != 0x1f) goto LAB_141b6484c;
  goto LAB_141b64891;
code_r0x000141b64762:
  uVar8 = 0xffffffff;
  if (uVar6 == 0) goto LAB_141b647ce;
  goto LAB_141b64752;
code_r0x000141b64820:
  if (uVar6 == 0) goto LAB_141b6484c;
  goto LAB_141b64810;
LAB_141b6484c:
  pFVar4 = FAutomationTestFramework::Get();
  pFVar1 = pFVar4->CurrentTest;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
  ::FString::FString(&local_c8,L"Find last false in an array containing 32 false");
  (*pcVar2)(pFVar1,&local_c8,0);
  if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
LAB_141b64891:
  if (local_38 != 0) {
    uVar6 = 0xffffffff >> (-(char)local_38 & 0x1fU);
    puVar5 = local_50;
    if (local_40 != (uint *)0x0) {
      puVar5 = local_40;
    }
    uVar7 = local_38 + 0x1fU >> 5;
    uVar8 = (ulonglong)uVar7;
    if (uVar7 != 0) {
LAB_141b648c0:
      uVar7 = (int)uVar8 - 1;
      uVar8 = (ulonglong)uVar7;
      if ((uVar6 & puVar5[uVar8]) == 0) goto code_r0x000141b648c8;
      uVar8 = (ulonglong)(uVar6 & puVar5[uVar8]) * 2 + 1;
      lVar3 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      if ((int)lVar3 + -1 + uVar7 * 0x20 != -1) {
        pFVar4 = FAutomationTestFramework::Get();
        pFVar1 = pFVar4->CurrentTest;
        pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
        ::FString::FString(&local_c8,L"Find last true in an array containing 32 false");
        (*pcVar2)(pFVar1,&local_c8,0);
        if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_c8.Data.AllocatorInstance.Data);
        }
      }
    }
  }
LAB_141b6492c:
  if (local_40 != (uint *)0x0) {
    FMemory::Free(local_40);
  }
  local_a0 = (uint *)0x0;
  local_94 = 0x80;
  local_b0[0] = 0;
  local_98 = 0x21;
  local_b0[1] = local_b0[1] & 1;
  local_b0[1] = 1;
  uVar6 = 1;
  uVar8 = 2;
LAB_141b64a26:
  uVar7 = (int)uVar8 - 1;
  uVar8 = (ulonglong)uVar7;
  if ((uVar6 & local_b0[uVar8]) == 0) goto code_r0x000141b64a2e;
  uVar8 = (ulonglong)(uVar6 & local_b0[uVar8]) * 2 + 1;
  lVar3 = 0x3f;
  if (uVar8 != 0) {
    for (; uVar8 >> lVar3 == 0; lVar3 = lVar3 + -1) {
    }
  }
  if ((int)lVar3 + -1 + uVar7 * 0x20 != 0x20) goto LAB_141b64a52;
  goto LAB_141b64a97;
code_r0x000141b648c8:
  uVar6 = 0xffffffff;
  if (uVar7 == 0) goto LAB_141b6492c;
  goto LAB_141b648c0;
code_r0x000141b64a2e:
  uVar6 = 0xffffffff;
  if (uVar7 == 0) goto LAB_141b64a52;
  goto LAB_141b64a26;
LAB_141b64a52:
  pFVar4 = FAutomationTestFramework::Get();
  pFVar1 = pFVar4->CurrentTest;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
  ::FString::FString(&local_c8,
                     L"Find last true in an array containing multiple false and then a single true")
  ;
  (*pcVar2)(pFVar1,&local_c8,0);
  if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
LAB_141b64a97:
  if (local_98 == 0) {
LAB_141b64afc:
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_c8,
                       L"Find last false in an array containing multiple false and then a single true"
                      );
    (*pcVar2)(pFVar1,&local_c8,0);
    if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Data.AllocatorInstance.Data);
    }
  }
  else {
    uVar8 = (ulonglong)(0xffffffff >> (-(char)local_98 & 0x1fU));
    puVar5 = local_b0;
    if (local_a0 != (uint *)0x0) {
      puVar5 = local_a0;
    }
    uVar6 = local_98 + 0x1fU >> 5;
    uVar9 = (ulonglong)uVar6;
    while( true ) {
      if (uVar6 == 0) goto LAB_141b64afc;
      uVar6 = (int)uVar9 - 1;
      uVar9 = (ulonglong)uVar6;
      if (((uint)uVar8 & puVar5[uVar9]) != (uint)uVar8) break;
      uVar8 = 0xffffffff;
    }
    uVar8 = (~puVar5[uVar9] & uVar8) * 2 + 1;
    lVar3 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    if ((int)lVar3 + -1 + uVar6 * 0x20 != 0x1f) goto LAB_141b64afc;
  }
  if (local_a0 != (uint *)0x0) {
    FMemory::Free(local_a0);
  }
  local_74 = 0x80;
  local_80 = (uint *)0x0;
  local_90[0] = 0xffffffff;
  local_78 = 0x21;
  local_90[1] = local_90[1] & 1;
  local_90[1] = 0;
  uVar9 = 1;
  uVar8 = 2;
LAB_141b64c40:
  uVar6 = (int)uVar8 - 1;
  uVar8 = (ulonglong)uVar6;
  if (((uint)uVar9 & local_90[uVar8]) == (uint)uVar9) goto code_r0x000141b64c50;
  uVar8 = (~local_90[uVar8] & uVar9) * 2 + 1;
  lVar3 = 0x3f;
  if (uVar8 != 0) {
    for (; uVar8 >> lVar3 == 0; lVar3 = lVar3 + -1) {
    }
  }
  if ((int)lVar3 + -1 + uVar6 * 0x20 != 0x20) goto LAB_141b64c7b;
  goto LAB_141b64cc0;
code_r0x000141b64c50:
  uVar9 = 0xffffffff;
  if (uVar6 == 0) goto LAB_141b64c7b;
  goto LAB_141b64c40;
LAB_141b64c7b:
  pFVar4 = FAutomationTestFramework::Get();
  pFVar1 = pFVar4->CurrentTest;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
  ::FString::FString(&local_c8,
                     L"Find last false in an array containing multiple true and then a single false"
                    );
  (*pcVar2)(pFVar1,&local_c8,0);
  if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
LAB_141b64cc0:
  if (local_78 != 0) {
    uVar6 = 0xffffffff >> (-(char)local_78 & 0x1fU);
    puVar5 = local_90;
    if (local_80 != (uint *)0x0) {
      puVar5 = local_80;
    }
    uVar7 = local_78 + 0x1fU >> 5;
    uVar8 = (ulonglong)uVar7;
    while (uVar7 != 0) {
      uVar7 = (int)uVar8 - 1;
      uVar8 = (ulonglong)uVar7;
      if ((uVar6 & puVar5[uVar8]) != 0) {
        uVar8 = (ulonglong)(uVar6 & puVar5[uVar8]) * 2 + 1;
        lVar3 = 0x3f;
        if (uVar8 != 0) {
          for (; uVar8 >> lVar3 == 0; lVar3 = lVar3 + -1) {
          }
        }
        if (uVar7 * 0x20 + (int)lVar3 == 0x20) goto LAB_141b64d5b;
        break;
      }
      uVar6 = 0xffffffff;
    }
  }
  pFVar4 = FAutomationTestFramework::Get();
  pFVar1 = pFVar4->CurrentTest;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
  ::FString::FString(&local_c8,
                     L"Find last true in an array containing multiple true and then a single false")
  ;
  (*pcVar2)(pFVar1,&local_c8,0);
  if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
LAB_141b64d5b:
  if (local_80 != (uint *)0x0) {
    FMemory::Free(local_80);
  }
  return;
}

