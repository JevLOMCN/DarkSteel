// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 10

// GetTestFlags @ 141c5c640

EAutomationTestFlags __thiscall FFileShrinkBuffersTest::GetTestFlags(FFileShrinkBuffersTest *this)

{
  return this->TestFlags;
}

// IsStressTest @ 141c5c650

bool __thiscall FFileShrinkBuffersTest::IsStressTest(FFileShrinkBuffersTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141c5c660

uint __thiscall FFileShrinkBuffersTest::GetRequiredDeviceNum(FFileShrinkBuffersTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 141c5c670

FString * __thiscall
FFileShrinkBuffersTest::GetTestSourceFileName
          (FFileShrinkBuffersTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Misc\\FileTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141c5c6a0

int __thiscall FFileShrinkBuffersTest::GetTestSourceFileLine(FFileShrinkBuffersTest *this)

{
  return 0xa8;
}

// GetTests @ 141c5c6b0

/* WARNING: Removing unreachable block (ram,0x000141c5c82e) */

void __thiscall
FFileShrinkBuffersTest::GetTests
          (FFileShrinkBuffersTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
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

// RunTest @ 141c5c850

bool __thiscall FFileShrinkBuffersTest::RunTest(FFileShrinkBuffersTest *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 141c5c880

FString * __thiscall
FFileShrinkBuffersTest::GetBeautifiedTestName
          (FFileShrinkBuffersTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FFileShrinkBuffersTest @ 141c8b600

FFileShrinkBuffersTest * __thiscall
FFileShrinkBuffersTest::FFileShrinkBuffersTest(FFileShrinkBuffersTest *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7FFileShrinkBuffersTest__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[.][EditorContext][CriticalPriority][EngineFilter]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"System::Core::Misc::FileShrinkBuffers");
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
  ::FString::FString(&local_18,"[.][EditorContext][CriticalPriority][EngineFilter]");
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

// TestBody @ 141c9e9f0

void __thiscall FFileShrinkBuffersTest::TestBody(FFileShrinkBuffersTest *this,FString *param_1)

{
  FAutomationTestBase *pFVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  FString *pFVar7;
  FPlatformFileManager *this_00;
  IPlatformFile *pIVar8;
  longlong *plVar9;
  FAutomationTestFramework *pFVar10;
  long64 lVar11;
  uint uVar12;
  wchar_t *pwVar13;
  ForAnyElementType FVar14;
  longlong lVar15;
  longlong lVar16;
  FScriptContainerElement *pFVar17;
  uint uVar18;
  int iVar19;
  FScriptContainerElement local_138 [8];
  ForAnyElementType local_130;
  int local_128;
  int iStack_124;
  FString local_120;
  ForAnyElementType local_110;
  int local_108 [2];
  ForAnyElementType local_100;
  int local_f8 [2];
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_f0;
  longlong local_e0;
  longlong *local_d8;
  IPlatformFile *local_d0;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  
  pFVar7 = FPaths::ProjectIntermediateDir(&local_48);
  if ((pFVar7->Data).ArrayNum == 0) {
    pwVar13 = L"";
  }
  else {
    pwVar13 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
  }
  FPaths::CreateTempFilename(&local_120,pwVar13,L"",L".tmp");
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  this_00 = FPlatformFileManager::Get();
  pIVar8 = FPlatformFileManager::GetPlatformFile(this_00);
  uVar18 = 0;
  local_130.Data = (FScriptContainerElement *)0x0;
  FVar14.Data = (FScriptContainerElement *)L"";
  if (local_120.Data.ArrayNum != 0) {
    FVar14.Data = local_120.Data.AllocatorInstance.Data;
  }
  local_128 = 0;
  iStack_124 = 0;
  local_d0 = pIVar8;
  plVar9 = (longlong *)(**(code **)((longlong)*pIVar8 + 0x110))(pIVar8,FVar14.Data,0,1);
  if (plVar9 == (longlong *)0x0) {
    pFVar10 = FAutomationTestFramework::Get();
    pFVar1 = pFVar10->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_58,L"File failed to open when new: %s");
    (*pcVar2)(pFVar1,&local_58,0);
    local_78.Data.AllocatorInstance.Data = local_58.Data.AllocatorInstance.Data;
  }
  else {
    local_138[0] = (FScriptContainerElement)0x0;
    do {
      if (((local_130.Data <= local_138) && (local_138 < local_130.Data + iStack_124)) &&
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
      if (local_128 == iStack_124) {
        local_128 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x101,&local_130,&iStack_124);
      }
      iVar5 = local_128 + 1;
      local_130.Data[local_128] = local_138[0];
      local_138[0] = (FScriptContainerElement)((char)local_138[0] + 1);
      local_128 = iVar5;
    } while ((byte)local_138[0] < 0x40);
    (**(code **)(*plVar9 + 0x30))(plVar9,local_130.Data);
    (**(code **)*plVar9)(plVar9,1);
    local_f0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    FVar14.Data = (FScriptContainerElement *)L"";
    if (local_120.Data.ArrayNum != 0) {
      FVar14.Data = local_120.Data.AllocatorInstance.Data;
    }
    local_f0.ArrayNum = 0;
    local_f0.ArrayMax = 0;
    bVar3 = FFileHelper::LoadFileToArray(&local_f0,(wchar_t *)FVar14.Data,0);
    FVar14.Data = local_f0.AllocatorInstance.Data;
    if (bVar3) {
      if ((local_f0.ArrayNum == local_128) &&
         ((local_f0.ArrayNum == 0 ||
          (iVar5 = memcmp(local_f0.AllocatorInstance.Data,local_130.Data,(longlong)local_f0.ArrayNum
                         ), iVar5 == 0)))) {
        if (FVar14.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FVar14.Data);
        }
        FVar14.Data = (FScriptContainerElement *)L"";
        if (local_120.Data.ArrayNum != 0) {
          FVar14.Data = local_120.Data.AllocatorInstance.Data;
        }
        plVar9 = (longlong *)(**(code **)((longlong)*pIVar8 + 0xe8))(pIVar8,FVar14.Data,0);
        local_d8 = plVar9;
        if (plVar9 != (longlong *)0x0) {
          pFVar10 = FAutomationTestFramework::Get();
          lVar16 = (longlong)local_128;
          pFVar1 = pFVar10->CurrentTest;
          lVar11 = (**(code **)(*plVar9 + 0x50))(plVar9);
          FAutomationTestBase::TestEqual
                    (pFVar1,L"File not of expected size at time of ShrinkBuffers read test",lVar11,
                     lVar16);
          local_100.Data = (FScriptContainerElement *)0x0;
          local_f8[0] = 0;
          local_f8[1] = 0;
          iVar5 = local_128 / 2;
          lVar16 = (longlong)iVar5;
          iVar19 = local_128 - iVar5;
          UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,iVar5,&local_100,local_f8,local_f8 + 1);
          cVar4 = (**(code **)(*plVar9 + 0x20))(plVar9,local_100.Data,(longlong)local_f8[0]);
          if (cVar4 == '\0') {
            pFVar10 = FAutomationTestFramework::Get();
            pFVar1 = pFVar10->CurrentTest;
            pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
            ::FString::FString(&local_b8,L"Failed to read first half of test file");
            (*pcVar2)(pFVar1,&local_b8,0);
            if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_b8.Data.AllocatorInstance.Data);
            }
          }
          local_e0 = lVar16;
          if (0 < iVar5) {
            lVar15 = 0;
            do {
              pFVar10 = FAutomationTestFramework::Get();
              pFVar1 = pFVar10->CurrentTest;
              uVar6 = 0;
              if ((int)uVar18 < local_128) {
                uVar6 = ~uVar18 >> 0x1f;
              }
              if ((uVar6 == 0) &&
                 (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar3)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              FVar14.Data = local_130.Data;
              uVar6 = 0;
              if ((int)uVar18 < local_f8[0]) {
                uVar6 = ~uVar18 >> 0x1f;
              }
              if ((uVar6 == 0) &&
                 (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar3)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              if (local_100.Data[lVar15] != FVar14.Data[lVar15]) {
                pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                ::FString::PrintfImpl(&local_a8,L"%s: The two values are not equal.");
                (*pcVar2)(pFVar1,&local_a8,0);
                if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_a8.Data.AllocatorInstance.Data);
                }
              }
              uVar18 = uVar18 + 1;
              lVar15 = lVar15 + 1;
            } while (lVar15 < lVar16);
          }
          (**(code **)(*plVar9 + 0x48))(plVar9);
          local_110.Data = (FScriptContainerElement *)0x0;
          local_108[0] = 0;
          local_108[1] = 0;
          UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,iVar19,&local_110,local_108,local_108 + 1);
          cVar4 = (**(code **)(*plVar9 + 0x20))(plVar9,local_110.Data,(longlong)local_108[0]);
          if (cVar4 == '\0') {
            pFVar10 = FAutomationTestFramework::Get();
            pFVar1 = pFVar10->CurrentTest;
            pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
            ::FString::FString(&local_98,L"Failed to read second half of test file");
            (*pcVar2)(pFVar1,&local_98,0);
            if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_98.Data.AllocatorInstance.Data);
            }
          }
          lVar16 = local_e0;
          uVar18 = 0;
          if (0 < iVar19) {
            lVar15 = 0;
            do {
              pFVar10 = FAutomationTestFramework::Get();
              uVar12 = uVar18 + (int)lVar16;
              pFVar1 = pFVar10->CurrentTest;
              uVar6 = 0;
              if ((int)uVar12 < local_128) {
                uVar6 = ~uVar12 >> 0x1f;
              }
              if ((uVar6 == 0) &&
                 (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar3)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              pFVar17 = local_130.Data + lVar15 + lVar16;
              uVar6 = 0;
              if ((int)uVar18 < local_108[0]) {
                uVar6 = ~uVar18 >> 0x1f;
              }
              if ((uVar6 == 0) &&
                 (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar3)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              if (local_110.Data[lVar15] != *pFVar17) {
                pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                ::FString::PrintfImpl(&local_88,L"%s: The two values are not equal.");
                (*pcVar2)(pFVar1,&local_88,0);
                if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_88.Data.AllocatorInstance.Data);
                }
              }
              uVar18 = uVar18 + 1;
              lVar15 = lVar15 + 1;
              plVar9 = local_d8;
            } while (lVar15 < iVar19);
          }
          if (local_110.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_110.Data);
          }
          if (local_100.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_100.Data);
          }
          (**(code **)*plVar9)(plVar9,1);
          pIVar8 = local_d0;
          goto LAB_141c9f134;
        }
        pFVar10 = FAutomationTestFramework::Get();
        pFVar1 = pFVar10->CurrentTest;
        pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
        ::FString::PrintfImpl(&local_78,L"File failed to open file for reading: %s");
        (*pcVar2)(pFVar1,&local_78,0);
        goto LAB_141c9f12a;
      }
      pFVar10 = FAutomationTestFramework::Get();
      pFVar1 = pFVar10->CurrentTest;
      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
      ::FString::PrintfImpl(&local_68,L"File data was incorrect after writing: %s");
      (*pcVar2)(pFVar1,&local_68,0);
      local_c8.Data.AllocatorInstance.Data = local_68.Data.AllocatorInstance.Data;
    }
    else {
      pFVar10 = FAutomationTestFramework::Get();
      pFVar1 = pFVar10->CurrentTest;
      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
      ::FString::PrintfImpl(&local_c8,L"File failed to load after writing: %s");
      (*pcVar2)(pFVar1,&local_c8,0);
    }
    local_78.Data.AllocatorInstance.Data = local_f0.AllocatorInstance.Data;
    if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Data.AllocatorInstance.Data);
      local_78.Data.AllocatorInstance.Data = local_f0.AllocatorInstance.Data;
    }
  }
LAB_141c9f12a:
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
LAB_141c9f134:
  if (local_130.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_130.Data);
  }
  FVar14.Data = (FScriptContainerElement *)L"";
  if (local_120.Data.ArrayNum != 0) {
    FVar14.Data = local_120.Data.AllocatorInstance.Data;
  }
  (**(code **)((longlong)*pIVar8 + 0x88))(pIVar8,FVar14.Data);
  if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_120.Data.AllocatorInstance.Data);
  }
  return;
}

