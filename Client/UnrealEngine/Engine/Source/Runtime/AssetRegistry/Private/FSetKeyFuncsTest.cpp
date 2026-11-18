// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AssetRegistry
// Functions: 11

// GetTestFlags @ 142b31130

EAutomationTestFlags __thiscall FSetKeyFuncsTest::GetTestFlags(FSetKeyFuncsTest *this)

{
  return this->TestFlags;
}

// IsStressTest @ 142b31140

bool __thiscall FSetKeyFuncsTest::IsStressTest(FSetKeyFuncsTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 142b31150

uint __thiscall FSetKeyFuncsTest::GetRequiredDeviceNum(FSetKeyFuncsTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 142b31160

FString * __thiscall
FSetKeyFuncsTest::GetTestSourceFileName(FSetKeyFuncsTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\SetKeyFuncsTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 142b31190

int __thiscall FSetKeyFuncsTest::GetTestSourceFileLine(FSetKeyFuncsTest *this)

{
  return 10;
}

// GetTests @ 142b311a0

/* WARNING: Removing unreachable block (ram,0x000142b3131e) */

void __thiscall
FSetKeyFuncsTest::GetTests
          (FSetKeyFuncsTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
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

// RunTest @ 142b31340

bool __thiscall FSetKeyFuncsTest::RunTest(FSetKeyFuncsTest *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 142b31370

FString * __thiscall
FSetKeyFuncsTest::GetBeautifiedTestName(FSetKeyFuncsTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FSetKeyFuncsTest @ 142b4eae0

FSetKeyFuncsTest * __thiscall
FSetKeyFuncsTest::FSetKeyFuncsTest(FSetKeyFuncsTest *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7FSetKeyFuncsTest__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[ApplicationContextMask][EngingeFilter]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"System::AssetRegistry::SetKeyFuncs");
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
  ::FString::FString(&local_18,"[ApplicationContextMask][EngingeFilter]");
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

// operator() @ 142b51fc0

void __thiscall `FSetKeyFuncsTest::TestBody'::__l2::<lambda_1>::operator()(void *this)

{
  uint uVar1;
  int iVar2;
  void *this_00;
  longlong lVar3;
  FAutomationTestBase *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  FAutomationTestFramework *pFVar8;
  ForAnyElementType FVar9;
  longlong *plVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint *puVar17;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  
  plVar10 = *(longlong **)this;
  uVar14 = 0;
  if (*(int *)((longlong)plVar10 + 100) != 0) {
    do {
      uVar15 = ~uVar14 >> 0x1f;
      uVar7 = 0;
      if ((int)uVar14 < (int)plVar10[1]) {
        uVar7 = uVar15;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      lVar12 = (longlong)(int)uVar14;
      if (*(int *)(*plVar10 + lVar12 * 4) != -1) {
        this_00 = *(void **)((longlong)this + 8);
        uVar7 = FKeyFuncs1::GetTypeHash(this_00,uVar14);
        lVar3 = *(longlong *)((longlong)this_00 + 8);
        if (lVar3 != 0) {
          uVar1 = *(uint *)((longlong)this_00 + 0x10);
          if (uVar1 != 0) {
            uVar16 = 0;
            uVar11 = (ulonglong)uVar7 % (ulonglong)uVar1;
            if (uVar1 != 0) {
              do {
                uVar7 = *(uint *)(lVar3 + uVar11 * 4);
                puVar17 = (uint *)(lVar3 + uVar11 * 4);
                if (uVar7 == 0xffffffff) goto LAB_142b520c6;
                if (uVar7 == uVar14) goto LAB_142b520c9;
                uVar16 = uVar16 + 1;
                uVar11 = (ulonglong)((int)uVar11 + 1) % (ulonglong)uVar1;
              } while (uVar16 < uVar1);
            }
          }
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("CollisionCount < HashSize",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\SetKeyFuncs.h"
                             ,0x1a0,L"");
          if (bVar6) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
LAB_142b520c6:
        puVar17 = (uint *)0x0;
LAB_142b520c9:
        lVar3 = *(longlong *)this;
        uVar7 = 0;
        if ((int)uVar14 < *(int *)(lVar3 + 0x38)) {
          uVar7 = uVar15;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if ((puVar17 != (uint *)0x0) == (bool)*(char *)(*(longlong *)(lVar3 + 0x30) + lVar12)) {
          if ((puVar17 == (uint *)0x0) || (*puVar17 == uVar14)) goto LAB_142b5223a;
          pFVar8 = FAutomationTestFramework::Get();
          pFVar4 = pFVar8->CurrentTest;
          pcVar5 = *(code **)(pFVar4->_padding_ + 0x28);
          ::FString::PrintfImpl(&local_78,L"Expected value %u returned invalid result %u.");
          (*pcVar5)(pFVar4,&local_78);
          FVar9.Data = local_78.Data.AllocatorInstance.Data;
        }
        else {
          lVar3 = *(longlong *)this;
          uVar7 = 0;
          if ((int)uVar14 < *(int *)(lVar3 + 0x38)) {
            uVar7 = uVar15;
          }
          if ((uVar7 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          if (*(char *)(*(longlong *)(lVar3 + 0x30) + lVar12) == '\0') {
            pFVar8 = FAutomationTestFramework::Get();
            pFVar4 = pFVar8->CurrentTest;
            pcVar5 = *(code **)(pFVar4->_padding_ + 0x28);
            ::FString::PrintfImpl(&local_88,L"Expected not-in-set value %u was unexpectedly found.")
            ;
            (*pcVar5)(pFVar4,&local_88);
            FVar9.Data = local_88.Data.AllocatorInstance.Data;
          }
          else {
            pFVar8 = FAutomationTestFramework::Get();
            pFVar4 = pFVar8->CurrentTest;
            pcVar5 = *(code **)(pFVar4->_padding_ + 0x28);
            ::FString::PrintfImpl(&local_98,L"Expected in-set value %u was unexpectedly not found.")
            ;
            (*pcVar5)(pFVar4,&local_98);
            FVar9.Data = local_98.Data.AllocatorInstance.Data;
          }
        }
        if (FVar9.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FVar9.Data);
        }
      }
LAB_142b5223a:
      plVar10 = *(longlong **)this;
      uVar14 = uVar14 + 1;
    } while (uVar14 < *(uint *)((longlong)plVar10 + 100));
  }
  uVar14 = 0;
  if (*(int *)((longlong)plVar10 + 100) != 0) {
    do {
      uVar7 = 0;
      if ((int)uVar14 < (int)plVar10[9]) {
        uVar7 = ~uVar14 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      lVar12 = (longlong)(int)uVar14;
      uVar14 = uVar14 + 1;
      *(undefined1 *)(lVar12 + plVar10[8]) = 0;
      plVar10 = *(longlong **)this;
    } while (uVar14 < *(uint *)((longlong)plVar10 + 100));
  }
  lVar12 = *(longlong *)((longlong)this + 8);
  uVar11 = 0;
  uVar14 = *(uint *)(lVar12 + 0x10);
  if (uVar14 != 0) {
    if (**(int **)(lVar12 + 8) == -1) {
      uVar11 = 1;
      if (1 < uVar14) {
        do {
          if ((*(int **)(lVar12 + 8))[uVar11] != -1) goto LAB_142b52300;
          uVar7 = (int)uVar11 + 1;
          uVar11 = (ulonglong)uVar7;
        } while (uVar7 < uVar14);
      }
    }
    else {
LAB_142b52300:
      while( true ) {
        lVar3 = *(longlong *)this;
        uVar14 = *(uint *)(*(longlong *)(lVar12 + 8) + uVar11 * 4);
        uVar7 = 0;
        if ((int)uVar14 < *(int *)(lVar3 + 0x48)) {
          uVar7 = ~uVar14 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if (*(char *)((longlong)(int)uVar14 + *(longlong *)(lVar3 + 0x40)) != '\0') {
          pFVar8 = FAutomationTestFramework::Get();
          pFVar4 = pFVar8->CurrentTest;
          pcVar5 = *(code **)(pFVar4->_padding_ + 0x28);
          ::FString::PrintfImpl
                    (&local_68,L"Value %u unexpectedly encountered twice in Set iterator.");
          (*pcVar5)(pFVar4,&local_68,0);
          if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_68.Data.AllocatorInstance.Data);
          }
        }
        lVar3 = *(longlong *)this;
        uVar7 = 0;
        if ((int)uVar14 < *(int *)(lVar3 + 0x48)) {
          uVar7 = ~uVar14 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar7 = (int)uVar11 + 1;
        *(undefined1 *)((longlong)(int)uVar14 + *(longlong *)(lVar3 + 0x40)) = 1;
        if (*(uint *)(lVar12 + 0x10) <= uVar7) break;
        while (uVar11 = (ulonglong)uVar7, *(int *)(*(longlong *)(lVar12 + 8) + uVar11 * 4) == -1) {
          uVar7 = uVar7 + 1;
          if (*(uint *)(lVar12 + 0x10) <= uVar7) goto LAB_142b52419;
        }
      }
    }
  }
LAB_142b52419:
  lVar12 = *(longlong *)this;
  uVar14 = 0;
  if (*(int *)(lVar12 + 100) != 0) {
    do {
      uVar15 = ~uVar14 >> 0x1f;
      uVar7 = 0;
      if ((int)uVar14 < *(int *)(lVar12 + 0x48)) {
        uVar7 = uVar15;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      lVar3 = *(longlong *)(lVar12 + 0x40);
      lVar13 = (longlong)(int)uVar14;
      uVar7 = 0;
      if ((int)uVar14 < *(int *)(lVar12 + 0x38)) {
        uVar7 = uVar15;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (*(char *)(*(longlong *)(lVar12 + 0x30) + lVar13) != *(char *)(lVar3 + lVar13)) {
        lVar12 = *(longlong *)this;
        uVar7 = 0;
        if ((int)uVar14 < *(int *)(lVar12 + 0x38)) {
          uVar7 = uVar15;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if (*(char *)(*(longlong *)(lVar12 + 0x30) + lVar13) == '\0') {
          pFVar8 = FAutomationTestFramework::Get();
          pFVar4 = pFVar8->CurrentTest;
          pcVar5 = *(code **)(pFVar4->_padding_ + 0x28);
          ::FString::PrintfImpl
                    (&local_48,
                     L"Expected not-in-set value %u was unexpectedly found in the Set iterator.");
          (*pcVar5)(pFVar4,&local_48,0);
          FVar9.Data = local_48.Data.AllocatorInstance.Data;
        }
        else {
          pFVar8 = FAutomationTestFramework::Get();
          pFVar4 = pFVar8->CurrentTest;
          pcVar5 = *(code **)(pFVar4->_padding_ + 0x28);
          ::FString::PrintfImpl
                    (&local_58,
                     L"Expected in-set value %u was unexpectedly not found in the Set iterator.");
          (*pcVar5)(pFVar4,&local_58,0);
          FVar9.Data = local_58.Data.AllocatorInstance.Data;
        }
        if (FVar9.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FVar9.Data);
        }
      }
      lVar12 = *(longlong *)this;
      uVar14 = uVar14 + 1;
    } while (uVar14 < *(uint *)(lVar12 + 100));
  }
  iVar2 = *(int *)(*(longlong *)((longlong)this + 8) + 0x14);
  if ((iVar2 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IntFitsIn<OutType>(In)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                         ,0xae,L"Loss of data caused by narrowing conversion, In = %llu"), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (iVar2 != *(int *)(*(longlong *)this + 0x60)) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar4 = pFVar8->CurrentTest;
    pcVar5 = *(code **)(pFVar4->_padding_ + 0x28);
    if ((*(int *)(*(longlong *)((longlong)this + 8) + 0x14) < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IntFitsIn<OutType>(In)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                           ,0xae,L"Loss of data caused by narrowing conversion, In = %llu"), bVar6))
    {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    ::FString::PrintfImpl(&local_38,L"Set Num(%d) != expected num(%d).");
    (*pcVar5)(pFVar4,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// TestBody @ 142b6bbf0

void __thiscall FSetKeyFuncsTest::TestBody(FSetKeyFuncsTest *this,FString *param_1)

{
  FScriptContainerElement *pFVar1;
  uint uVar2;
  FAutomationTestBase *pFVar3;
  code *pcVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  bool bVar10;
  int iVar11;
  void *pvVar12;
  FAutomationTestFramework *pFVar13;
  uint uVar14;
  ulong64 uVar15;
  ulonglong uVar16;
  uint uVar17;
  void *pvVar18;
  uint uVar19;
  int iVar20;
  longlong lVar21;
  ForAnyElementType FVar22;
  uint uVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  void *pvVar26;
  float fVar27;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  FScriptContainerElement local_178 [8];
  ForAnyElementType *local_170;
  void *local_168;
  undefined8 local_160;
  undefined1 local_158 [4];
  uint local_154;
  uint local_150 [2];
  ForAnyElementType local_148;
  undefined8 local_140;
  ForAnyElementType local_138;
  undefined8 local_130;
  ForAnyElementType local_128;
  undefined8 local_120;
  ForAnyElementType local_118;
  undefined8 local_110;
  ForAnyElementType local_108;
  undefined8 local_100;
  ForAnyElementType local_f8;
  undefined8 local_f0;
  int local_e8;
  uint local_e4;
  undefined4 local_d8;
  uint local_d4;
  float local_d0;
  int local_cc;
  ForAnyElementType *local_c8;
  ForAnyElementType **local_c0;
  FString local_b8;
  FString local_a8;
  FString local_98 [6];
  
  pvVar26 = (void *)0x0;
  local_e4 = 500;
  local_170 = &local_148;
  local_148.Data = (FScriptContainerElement *)0x0;
  local_c8 = &local_148;
  local_140 = 0;
  local_c0 = &local_170;
  local_138.Data = (FScriptContainerElement *)0x0;
  local_130 = 0;
  local_128.Data = (FScriptContainerElement *)0x0;
  local_120 = 0;
  local_118.Data = (FScriptContainerElement *)0x0;
  local_110 = 0;
  local_108.Data = (FScriptContainerElement *)0x0;
  local_100 = 0;
  local_f8.Data = (FScriptContainerElement *)0x0;
  local_f0 = 0;
  local_e8 = 0;
  local_168 = (void *)0x0;
  local_160 = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (1,1,500,&local_118,0,(int *)((longlong)&local_110 + 4));
  uVar15 = (ulong64)local_e4;
  if ((int)local_e4 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum(uVar15);
  }
  if (local_140._4_4_ < (int)local_e4) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,local_e4,&local_148,(int)local_140,(int *)((longlong)&local_140 + 4));
    uVar15 = (ulong64)local_e4;
  }
  pvVar12 = pvVar26;
  if ((int)uVar15 != 0) {
    do {
      local_d8 = 0xffffffff;
      if (((local_148.Data <= (FScriptContainerElement *)&local_d8) &&
          ((FScriptContainerElement *)&local_d8 < local_148.Data + (longlong)local_140._4_4_ * 4))
         && (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar10)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar11 = (int)local_140;
      if ((int)local_140 == local_140._4_4_) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&local_148,(int *)((longlong)&local_140 + 4));
      }
      local_178[0] = (FScriptContainerElement)0x0;
      local_140 = CONCAT44(local_140._4_4_,iVar11 + 1);
      *(undefined4 *)(local_148.Data + (longlong)iVar11 * 4) = local_d8;
      if (((local_118.Data <= local_178) && (local_178 < local_118.Data + local_110._4_4_)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar10)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar11 = (int)local_110;
      if ((int)local_110 == local_110._4_4_) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x101,&local_118,(int *)((longlong)&local_110 + 4));
      }
      uVar19 = (int)pvVar12 + 1;
      pvVar12 = (void *)(ulonglong)uVar19;
      local_110 = CONCAT44(local_110._4_4_,iVar11 + 1);
      local_118.Data[iVar11] = local_178[0];
      uVar15 = (ulong64)local_e4;
    } while (uVar19 < local_e4);
  }
  uVar19 = (uint)uVar15;
  if ((int)local_100 < (int)uVar19) {
    iVar20 = uVar19 - (int)local_100;
    iVar11 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (1,1,iVar20,&local_108,(int *)&local_100,(int *)((longlong)&local_100 + 4));
    memset(local_108.Data + iVar11,0,(longlong)iVar20);
  }
  else {
    if ((int)uVar19 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(uVar15);
    }
    if ((int)local_100 <= (int)uVar19) goto LAB_142b6bf26;
    uVar23 = (int)local_100 - uVar19;
    if ((int)(uVar19 | uVar23) < 0) {
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x458,
                          L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                         );
      if (bVar10) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar15 = (ulong64)local_e4;
    }
    if (uVar23 == 0) goto LAB_142b6bf26;
    iVar20 = ((int)local_100 - uVar23) - uVar19;
    iVar11 = (int)local_100;
    if (iVar20 != 0) {
      memmove(local_108.Data + (int)uVar19,local_108.Data + (int)uVar19 + (int)uVar23,
              (longlong)iVar20);
      iVar11 = (int)local_100;
    }
    local_100 = CONCAT44(local_100._4_4_,iVar11 - uVar23);
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,&local_108,iVar11 - uVar23,(int *)((longlong)&local_100 + 4));
  }
  uVar15 = (ulong64)local_e4;
LAB_142b6bf26:
  local_154 = 0x32;
  while( true ) {
    if ((((uint)uVar15 <= local_154) || ((uint)uVar15 <= local_154 + 200)) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("V < Data.EndValue && V + 200 < Data.EndValue",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\SetKeyFuncsTest.cpp"
                            ,0x7d,L""), bVar10)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (((local_138.Data <= (FScriptContainerElement *)&local_154) &&
        ((FScriptContainerElement *)&local_154 < local_138.Data + (longlong)local_130._4_4_ * 4)) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar10)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar11 = (int)local_130;
    if ((int)local_130 == local_130._4_4_) {
      iVar11 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x404,&local_138,(int *)((longlong)&local_130 + 4));
    }
    local_130 = CONCAT44(local_130._4_4_,iVar11 + 1);
    *(uint *)(local_138.Data + (longlong)iVar11 * 4) = local_154;
    lVar21 = (longlong)(int)local_154;
    iVar11 = local_154 + 1000;
    uVar19 = 0;
    if ((int)local_154 < (int)local_140) {
      uVar19 = ~local_154 >> 0x1f;
    }
    if ((uVar19 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) break;
    *(int *)(local_148.Data + lVar21 * 4) = iVar11;
    local_154 = local_154 + 1;
    if (0x95 < local_154) {
      local_150[0] = 0xfa;
      do {
        if ((local_e4 <= local_150[0]) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("V < Data.EndValue",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\SetKeyFuncsTest.cpp"
                                ,0x83,L""), bVar10)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if (((local_128.Data <= (FScriptContainerElement *)local_150) &&
            ((FScriptContainerElement *)local_150 < local_128.Data + (longlong)local_120._4_4_ * 4))
           && (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar10)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar11 = (int)local_120;
        if ((int)local_120 == local_120._4_4_) {
          iVar11 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&local_128,(int *)((longlong)&local_120 + 4));
        }
        local_120 = CONCAT44(local_120._4_4_,iVar11 + 1);
        *(uint *)(local_128.Data + (longlong)iVar11 * 4) = local_150[0];
        lVar21 = (longlong)(int)local_150[0];
        iVar11 = local_150[0] + 800;
        uVar23 = 0;
        uVar19 = uVar23;
        if ((int)local_150[0] < (int)local_140) {
          uVar19 = ~local_150[0] >> 0x1f;
        }
        if ((uVar19 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        *(int *)(local_148.Data + lVar21 * 4) = iVar11;
        local_150[0] = local_150[0] + 1;
      } while (local_150[0] < 0x15e);
      uVar19 = 0x1c2;
      while( true ) {
        if ((local_e4 <= uVar19) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("V< Data.EndValue",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\SetKeyFuncsTest.cpp"
                                ,0x89,L""), bVar10)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if (((int)local_140 <= (int)uVar19) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) break;
        iVar11 = uVar19 + 2000;
        lVar21 = (longlong)(int)uVar19;
        uVar19 = uVar19 + 1;
        *(int *)(local_148.Data + lVar21 * 4) = iVar11;
        fVar9 = __real_c57a0800;
        fVar8 = __real_c3488000;
        fVar7 = __real_c2220000;
        fVar6 = __real_bf000000;
        fVar5 = __real_3f800000;
        pvVar12 = pvVar26;
        if (499 < uVar19) {
          while( true ) {
            lVar21 = local_f0;
            uVar19 = local_f0._4_4_;
            local_f0 = (ulonglong)local_f0._4_4_ << 0x20;
            if ((lVar21 < 0) && (uVar19 != 0)) {
              UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (4,4,0,&local_f8,0,(int *)((longlong)&local_f0 + 4));
            }
            pvVar18 = pvVar26;
            if (local_e4 != 0) {
              do {
                uVar17 = (uint)pvVar18;
                uVar19 = uVar23;
                if ((int)uVar17 < (int)local_110) {
                  uVar19 = ~uVar17 >> 0x1f;
                }
                if ((uVar19 == 0) &&
                   (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar10)) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                local_118.Data[(int)uVar17] = (FScriptContainerElement)0x0;
                pvVar18 = (void *)(ulonglong)(uVar17 + 1);
              } while (uVar17 + 1 < local_e4);
            }
            iVar11 = (int)pvVar12;
            local_e8 = 0;
            if (iVar11 == 2) {
              if (local_168 != (void *)0x0) {
                FMemory::Free(local_168);
                local_168 = (void *)0x0;
              }
              uVar19 = 8;
              if (8 < (uint)-((int)ROUND(fVar9) >> 1)) {
                uVar19 = -((int)ROUND(fVar9) >> 1);
              }
              local_160 = (ulonglong)uVar19;
              if (uVar19 != 0) {
                local_168 = FMemory::Malloc((ulonglong)uVar19 << 2,4);
                pvVar12 = pvVar26;
                if ((uint)local_160 != 0) {
                  do {
                    uVar19 = (int)pvVar12 + 1;
                    *(undefined4 *)((longlong)local_168 + (longlong)pvVar12 * 4) = 0xffffffff;
                    pvVar12 = (void *)(ulonglong)uVar19;
                  } while (uVar19 < (uint)local_160);
                }
              }
            }
            else if (iVar11 == 3) {
              if (local_168 != (void *)0x0) {
                FMemory::Free(local_168);
                local_168 = (void *)0x0;
              }
              uVar19 = 8;
              if (8 < (uint)-((int)ROUND(fVar7) >> 1)) {
                uVar19 = -((int)ROUND(fVar7) >> 1);
              }
              local_160 = (ulonglong)uVar19;
              if (uVar19 != 0) {
                local_168 = FMemory::Malloc((ulonglong)uVar19 << 2,4);
                pvVar12 = pvVar26;
                if ((uint)local_160 != 0) {
                  do {
                    uVar19 = (int)pvVar12 + 1;
                    *(undefined4 *)((longlong)local_168 + (longlong)pvVar12 * 4) = 0xffffffff;
                    pvVar12 = (void *)(ulonglong)uVar19;
                  } while (uVar19 < (uint)local_160);
                }
              }
            }
            else if (iVar11 == 4) {
              if (local_168 != (void *)0x0) {
                FMemory::Free(local_168);
                local_168 = (void *)0x0;
              }
              local_160 = 0;
              uVar19 = 8;
              if (8 < (uint)-((int)ROUND(fVar8) >> 1)) {
                uVar19 = -((int)ROUND(fVar8) >> 1);
              }
              if (uVar19 != 0) {
                TSetKeyFuncs<unsigned_int,`FSetKeyFuncsTest::TestBody'::__l2::FKeyFuncs1>::
                Reallocate(&local_170,uVar19);
              }
            }
            else {
              uVar19 = (uint)local_160;
              local_160 = local_160 & 0xffffffff;
              pvVar12 = pvVar26;
              if (uVar19 != 0) {
                do {
                  uVar17 = (int)pvVar12 + 1;
                  *(undefined4 *)((longlong)local_168 + (longlong)pvVar12 * 4) = 0xffffffff;
                  pvVar12 = (void *)(ulonglong)uVar17;
                } while (uVar17 < uVar19);
              }
            }
            iVar20 = (int)local_130;
            uVar16 = (ulonglong)(int)local_130;
            pFVar1 = local_138.Data + uVar16 * 4;
            FVar22.Data = local_138.Data;
            while( true ) {
              if ((int)uVar16 != iVar20) {
                local_res18[0] = 0;
                `TCheckedPointerIterator<unsigned_int,int,0>::operator!='::__l2::<lambda_1>::
                operator()(local_res18);
              }
              uVar16 = local_160;
              if (FVar22.Data == pFVar1) break;
              uVar19 = *(uint *)FVar22.Data;
              uVar17 = `FSetKeyFuncsTest::TestBody'::__l2::FKeyFuncs1::GetTypeHash
                                 (&local_170,uVar19);
              TSetKeyFuncs<unsigned_int,`FSetKeyFuncsTest::TestBody'::__l2::FKeyFuncs1>::AddByHash
                        (&local_170,uVar17,uVar19,(bool *)0x0);
              uVar17 = uVar23;
              if ((int)uVar19 < (int)local_110) {
                uVar17 = ~uVar19 >> 0x1f;
              }
              if ((uVar17 == 0) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar10)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              local_118.Data[(int)uVar19] = (FScriptContainerElement)0x1;
              local_e8 = local_e8 + 1;
              `FSetKeyFuncsTest::TestBody'::__l2::<lambda_1>::operator()(&local_c8);
              uVar16 = local_130 & 0xffffffff;
              FVar22.Data = FVar22.Data + 4;
            }
            uVar19 = (uint)local_160;
            if (iVar11 == 3) {
              uVar19 = 0;
              if (local_160._4_4_ != 0) {
                fVar27 = (float)local_160._4_4_ + (float)local_160._4_4_;
                uVar17 = -((int)ROUND(fVar6 - (fVar27 + fVar27)) >> 1);
                uVar19 = 8;
                if (8 < uVar17) {
                  uVar19 = uVar17;
                }
              }
              if (uVar19 != (uint)local_160) {
                TSetKeyFuncs<unsigned_int,`FSetKeyFuncsTest::TestBody'::__l2::FKeyFuncs1>::
                Reallocate(&local_170,uVar19);
              }
            }
            else if ((iVar11 != 4) && (iVar11 == 5)) {
              uVar24 = local_160 & 0xffffffff;
              pvVar12 = pvVar26;
              if ((uint)local_160 != 0) {
                pvVar12 = FMemory::Malloc(uVar24 << 2,4);
                pvVar18 = pvVar26;
                uVar25 = uVar24;
                do {
                  *(undefined4 *)((longlong)pvVar12 + -4 + (longlong)((longlong)pvVar18 + 4U)) =
                       *(undefined4 *)((longlong)pvVar18 + (longlong)local_168);
                  uVar25 = uVar25 - 1;
                  pvVar18 = (void *)((longlong)pvVar18 + 4U);
                } while (uVar25 != 0);
              }
              if (local_168 != (void *)0x0) {
                FMemory::Free(local_168);
                local_168 = (void *)0x0;
              }
              local_160 = 0;
              if (local_168 != (void *)0x0) {
                FMemory::Free(local_168);
                local_168 = (void *)0x0;
              }
              local_170 = &local_148;
              local_160 = uVar16;
              if (uVar19 != 0) {
                local_168 = FMemory::Malloc(uVar24 << 2,4);
                pvVar18 = pvVar26;
                if ((uint)local_160 != 0) {
                  do {
                    uVar19 = (int)pvVar18 + 1;
                    *(undefined4 *)((longlong)local_168 + (longlong)pvVar18 * 4) =
                         *(undefined4 *)((longlong)pvVar12 + (longlong)pvVar18 * 4);
                    pvVar18 = (void *)(ulonglong)uVar19;
                  } while (uVar19 < (uint)local_160);
                }
              }
              if (pvVar12 != (void *)0x0) {
                FMemory::Free(pvVar12);
              }
            }
            iVar20 = (int)local_120;
            uVar16 = (ulonglong)(int)local_120;
            pFVar1 = local_128.Data + uVar16 * 4;
            FVar22.Data = local_128.Data;
            while( true ) {
              if ((int)uVar16 != iVar20) {
                local_res20[0] = 0;
                `TCheckedPointerIterator<unsigned_int,int,0>::operator!='::__l2::<lambda_1>::
                operator()(local_res20);
              }
              if (FVar22.Data == pFVar1) break;
              uVar19 = *(uint *)FVar22.Data;
              uVar17 = `FSetKeyFuncsTest::TestBody'::__l2::FKeyFuncs1::GetTypeHash
                                 (&local_170,uVar19);
              TSetKeyFuncs<unsigned_int,`FSetKeyFuncsTest::TestBody'::__l2::FKeyFuncs1>::AddByHash
                        (&local_170,uVar17,uVar19,(bool *)0x0);
              uVar17 = uVar23;
              if ((int)uVar19 < (int)local_110) {
                uVar17 = ~uVar19 >> 0x1f;
              }
              if ((uVar17 == 0) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar10)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              local_118.Data[(int)uVar19] = (FScriptContainerElement)0x1;
              local_e8 = local_e8 + 1;
              `FSetKeyFuncsTest::TestBody'::__l2::<lambda_1>::operator()(&local_c8);
              uVar16 = local_120 & 0xffffffff;
              FVar22.Data = FVar22.Data + 4;
            }
            lVar21 = (longlong)(int)local_130;
            if ((int)local_130 != 0) {
              iVar20 = UE::Core::Private::
                       ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (4,4,(int)local_130,&local_f8,(int *)&local_f0,
                                  (int *)((longlong)&local_f0 + 4));
              memcpy(local_f8.Data + (longlong)iVar20 * 4,local_138.Data,lVar21 << 2);
            }
            lVar21 = 7;
            FVar22.Data = local_138.Data;
            while (local_138.Data = FVar22.Data, (uint)local_f0 != 0) {
              uVar17 = ((int)lVar21 + 0xdU) % (uint)local_f0;
              lVar21 = (longlong)(int)uVar17;
              uVar19 = uVar23;
              if ((int)uVar17 < (int)(uint)local_f0) {
                uVar19 = ~uVar17 >> 0x1f;
              }
              uVar14 = (uint)local_f0;
              if (uVar19 == 0) {
                bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar10) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                uVar14 = (uint)local_f0;
              }
              uVar19 = uVar23;
              if ((int)uVar17 < (int)uVar14) {
                uVar19 = ~uVar17 >> 0x1f;
              }
              uVar2 = *(uint *)(local_f8.Data + lVar21 * 4);
              local_d4 = uVar2;
              if (uVar19 == 0) {
                bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar10) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                uVar14 = (uint)local_f0;
              }
              iVar20 = (uVar14 - uVar17) + -1;
              if (1 < iVar20) {
                iVar20 = 1;
              }
              if (iVar20 != 0) {
                memmove(local_f8.Data + lVar21 * 4,
                        local_f8.Data + (longlong)(int)(uVar14 - iVar20) * 4,(longlong)iVar20 << 2);
                uVar14 = (uint)local_f0;
              }
              local_f0 = CONCAT44(local_f0._4_4_,uVar14 - 1);
              UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (4,4,&local_f8,uVar14 - 1,(int *)((longlong)&local_f0 + 4));
              uVar19 = uVar23;
              if ((int)uVar2 < (int)local_110) {
                uVar19 = ~uVar2 >> 0x1f;
              }
              if ((uVar19 == 0) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar10)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              local_118.Data[(int)uVar2] = (FScriptContainerElement)0x0;
              local_e8 = local_e8 + -1;
              uVar19 = `FSetKeyFuncsTest::TestBody'::__l2::FKeyFuncs1::GetTypeHash(&local_170,uVar2)
              ;
              TSetKeyFuncs<unsigned_int,`FSetKeyFuncsTest::TestBody'::__l2::FKeyFuncs1>::
              RemoveByHash(&local_170,uVar19,&local_d4);
              `FSetKeyFuncsTest::TestBody'::__l2::<lambda_1>::operator()(&local_c8);
              FVar22.Data = local_138.Data;
            }
            iVar20 = (int)local_130;
            pFVar1 = FVar22.Data + (longlong)(int)local_130 * 4;
            while( true ) {
              if ((int)local_130 != iVar20) {
                local_158[0] = 0;
                `TCheckedPointerIterator<unsigned_int,int,0>::operator!='::__l2::<lambda_1>::
                operator()(local_158);
              }
              if (FVar22.Data == pFVar1) break;
              uVar19 = *(uint *)FVar22.Data;
              uVar17 = `FSetKeyFuncsTest::TestBody'::__l2::FKeyFuncs1::GetTypeHash
                                 (&local_170,uVar19);
              TSetKeyFuncs<unsigned_int,`FSetKeyFuncsTest::TestBody'::__l2::FKeyFuncs1>::AddByHash
                        (&local_170,uVar17,uVar19,(bool *)0x0);
              uVar17 = uVar23;
              if ((int)uVar19 < (int)local_110) {
                uVar17 = ~uVar19 >> 0x1f;
              }
              if ((uVar17 == 0) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar10)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              local_118.Data[(int)uVar19] = (FScriptContainerElement)0x1;
              local_e8 = local_e8 + 1;
              `FSetKeyFuncsTest::TestBody'::__l2::<lambda_1>::operator()(&local_c8);
              FVar22.Data = FVar22.Data + 4;
            }
            TSetKeyFuncs<unsigned_int,`FSetKeyFuncsTest::TestBody'::__l2::FKeyFuncs1>::GetStats
                      (&local_170);
            if (local_d0 < fVar5) {
              pFVar13 = FAutomationTestFramework::Get();
              pFVar3 = pFVar13->CurrentTest;
              pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
              ::FString::FString(&local_b8,L"AverageSearch >= 1");
              (*pcVar4)(pFVar3);
              if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_b8.Data.AllocatorInstance.Data);
              }
            }
            if (local_cc < 1) {
              pFVar13 = FAutomationTestFramework::Get();
              pFVar3 = pFVar13->CurrentTest;
              pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
              ::FString::FString(&local_a8,L"LongestSearch >= 1");
              (*pcVar4)(pFVar3);
              if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_a8.Data.AllocatorInstance.Data);
              }
            }
            uVar16 = local_160 & 0xffffffff;
            uVar24 = (ulonglong)(int)local_160._4_4_;
            if (((longlong)local_160 < 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IntFitsIn<OutType>(In)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                                    ,0xae,L"Loss of data caused by narrowing conversion, In = %llu")
               , bVar10)) break;
            if (uVar16 << 2 < uVar24) {
              pFVar13 = FAutomationTestFramework::Get();
              pFVar3 = pFVar13->CurrentTest;
              pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
              ::FString::FString(local_98,L"LongestSearch >= 1");
              (*pcVar4)(pFVar3);
              if (local_98[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_98[0].Data.AllocatorInstance.Data);
              }
            }
            pvVar12 = (void *)(ulonglong)(iVar11 + 1U);
            if (5 < (int)(iVar11 + 1U)) {
              if (local_168 != (void *)0x0) {
                FMemory::Free(local_168);
                local_168 = (void *)0x0;
              }
              if (local_f8.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_f8.Data);
              }
              if (local_108.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_108.Data);
              }
              if (local_118.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_118.Data);
              }
              if (local_128.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_128.Data);
              }
              if (local_138.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_138.Data);
              }
              if (local_148.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_148.Data);
              }
              return;
            }
          }
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uVar15 = (ulong64)local_e4;
  }
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

