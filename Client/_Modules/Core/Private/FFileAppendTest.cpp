// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 10

// GetTestFlags @ 141c5c0c0

EAutomationTestFlags __thiscall FFileAppendTest::GetTestFlags(FFileAppendTest *this)

{
  return this->TestFlags;
}

// IsStressTest @ 141c5c0d0

bool __thiscall FFileAppendTest::IsStressTest(FFileAppendTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141c5c0e0

uint __thiscall FFileAppendTest::GetRequiredDeviceNum(FFileAppendTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 141c5c0f0

FString * __thiscall
FFileAppendTest::GetTestSourceFileName(FFileAppendTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Misc\\FileTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141c5c120

int __thiscall FFileAppendTest::GetTestSourceFileLine(FFileAppendTest *this)

{
  return 0x54;
}

// GetTests @ 141c5c130

/* WARNING: Removing unreachable block (ram,0x000141c5c2ae) */

void __thiscall
FFileAppendTest::GetTests
          (FFileAppendTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
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

// RunTest @ 141c5c2d0

bool __thiscall FFileAppendTest::RunTest(FFileAppendTest *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 141c5c300

FString * __thiscall
FFileAppendTest::GetBeautifiedTestName(FFileAppendTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FFileAppendTest @ 141c8b430

FFileAppendTest * __thiscall
FFileAppendTest::FFileAppendTest(FFileAppendTest *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7FFileAppendTest__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[.][EditorContext][CriticalPriority][EngineFilter]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"System::Core::Misc::FileAppend");
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

// TestBody @ 141c9e170

void __thiscall FFileAppendTest::TestBody(FFileAppendTest *this,FString *param_1)

{
  FAutomationTestBase *pFVar1;
  code *pcVar2;
  FScriptContainerElement FVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FString *pFVar7;
  FPlatformFileManager *this_00;
  IPlatformFile *pIVar8;
  longlong *plVar9;
  FAutomationTestFramework *pFVar10;
  longlong lVar11;
  longlong lVar12;
  uint uVar13;
  FScriptContainerElement *pFVar14;
  wchar_t *pwVar15;
  ForAnyElementType FVar16;
  FScriptContainerElement local_138 [8];
  ForAnyElementType local_130;
  undefined8 local_128;
  FString local_120;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_110;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_100;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_f0;
  FString local_e0;
  FString local_d0;
  FString local_c0;
  FString local_b0;
  FString local_a0;
  FString local_90;
  FString local_80;
  FString local_70;
  FString local_60;
  FString local_50;
  FString local_40;
  
  pFVar7 = FPaths::ProjectIntermediateDir(&local_40);
  if ((pFVar7->Data).ArrayNum == 0) {
    pwVar15 = L"";
  }
  else {
    pwVar15 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
  }
  FPaths::CreateTempFilename(&local_120,pwVar15,L"",L".tmp");
  if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_40.Data.AllocatorInstance.Data);
  }
  this_00 = FPlatformFileManager::Get();
  pIVar8 = FPlatformFileManager::GetPlatformFile(this_00);
  local_138[0] = (FScriptContainerElement)0x1;
  local_130.Data = (FScriptContainerElement *)0x0;
  FVar16.Data = (FScriptContainerElement *)L"";
  if (local_120.Data.ArrayNum != 0) {
    FVar16.Data = local_120.Data.AllocatorInstance.Data;
  }
  local_128 = 0;
  plVar9 = (longlong *)(**(code **)((longlong)*pIVar8 + 0x110))(pIVar8,FVar16.Data,0,1);
  if (plVar9 == (longlong *)0x0) {
    pFVar10 = FAutomationTestFramework::Get();
    pFVar1 = pFVar10->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_50,L"File failed to open when new: %s");
    (*pcVar2)(pFVar1,&local_50,0);
    FVar16.Data = local_50.Data.AllocatorInstance.Data;
    goto joined_r0x000141c9e968;
  }
  iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,0x40,&local_130,(int *)&local_128,(int *)((longlong)&local_128 + 4));
  pFVar14 = local_130.Data + iVar5;
  *(undefined8 *)pFVar14 = 0;
  *(undefined8 *)(pFVar14 + 8) = 0;
  *(undefined8 *)(pFVar14 + 0x10) = 0;
  *(undefined8 *)(pFVar14 + 0x18) = 0;
  *(undefined8 *)(pFVar14 + 0x20) = 0;
  *(undefined8 *)(pFVar14 + 0x28) = 0;
  *(undefined8 *)(pFVar14 + 0x30) = 0;
  *(undefined8 *)(pFVar14 + 0x38) = 0;
  (**(code **)(*plVar9 + 0x30))(plVar9,local_130.Data);
  (**(code **)*plVar9)(plVar9,1);
  local_f0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FVar16.Data = (FScriptContainerElement *)L"";
  if (local_120.Data.ArrayNum != 0) {
    FVar16.Data = local_120.Data.AllocatorInstance.Data;
  }
  local_f0.ArrayNum = 0;
  local_f0.ArrayMax = 0;
  bVar4 = FFileHelper::LoadFileToArray(&local_f0,(wchar_t *)FVar16.Data,0);
  FVar16.Data = local_f0.AllocatorInstance.Data;
  if (bVar4) {
    if ((local_f0.ArrayNum != (uint)local_128) ||
       ((local_f0.ArrayNum != 0 &&
        (iVar5 = memcmp(local_f0.AllocatorInstance.Data,local_130.Data,(longlong)local_f0.ArrayNum),
        iVar5 != 0)))) {
      pFVar10 = FAutomationTestFramework::Get();
      pFVar1 = pFVar10->CurrentTest;
      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
      ::FString::PrintfImpl(&local_60,L"File data was incorrect after writing: %s");
      (*pcVar2)(pFVar1,&local_60,0);
      local_e0.Data.AllocatorInstance.Data = local_60.Data.AllocatorInstance.Data;
      goto LAB_141c9e915;
    }
    if (FVar16.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar16.Data);
    }
    FVar16.Data = (FScriptContainerElement *)L"";
    if (local_120.Data.ArrayNum != 0) {
      FVar16.Data = local_120.Data.AllocatorInstance.Data;
    }
    plVar9 = (longlong *)(**(code **)((longlong)*pIVar8 + 0x110))(pIVar8,FVar16.Data,1);
    if (plVar9 == (longlong *)0x0) {
      pFVar10 = FAutomationTestFramework::Get();
      pFVar1 = pFVar10->CurrentTest;
      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
      ::FString::PrintfImpl(&local_70,L"File failed to open when appending: %s");
      (*pcVar2)(pFVar1,&local_70,0);
      FVar16.Data = local_70.Data.AllocatorInstance.Data;
      goto joined_r0x000141c9e968;
    }
    lVar11 = (**(code **)(*plVar9 + 8))(plVar9);
    lVar12 = (**(code **)(*plVar9 + 0x50))(plVar9);
    if (lVar11 != lVar12) {
      pFVar10 = FAutomationTestFramework::Get();
      pFVar1 = pFVar10->CurrentTest;
      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
      ::FString::PrintfImpl
                (&local_d0,
                 L"File did not seek to the end when opening (got %lld, expected %lld): %s");
      (*pcVar2)(pFVar1,&local_d0,0);
      if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d0.Data.AllocatorInstance.Data);
      }
      (**(code **)*plVar9)(plVar9,1);
      goto LAB_141c9e96f;
    }
    if (((local_130.Data <= local_138) && (local_138 < local_130.Data + (int)local_128._4_4_)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar5 = (uint)local_128;
    if ((uint)local_128 == local_128._4_4_) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x101,&local_130,(int *)((longlong)&local_128 + 4));
    }
    FVar3 = local_138[0];
    local_128 = CONCAT44(local_128._4_4_,iVar5 + 1);
    local_130.Data[iVar5] = local_138[0];
    if ((iVar5 + 1 < 0xb) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    local_130.Data[10] = FVar3;
    (**(code **)(*plVar9 + 0x30))(plVar9,local_138,1);
    (**(code **)(*plVar9 + 0x10))(plVar9,10);
    (**(code **)(*plVar9 + 0x30))(plVar9,local_138);
    (**(code **)*plVar9)(plVar9,1);
    local_100.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    FVar16.Data = (FScriptContainerElement *)L"";
    if (local_120.Data.ArrayNum != 0) {
      FVar16.Data = local_120.Data.AllocatorInstance.Data;
    }
    local_100.ArrayNum = 0;
    local_100.ArrayMax = 0;
    bVar4 = FFileHelper::LoadFileToArray(&local_100,(wchar_t *)FVar16.Data,0);
    FVar16.Data = local_100.AllocatorInstance.Data;
    if (bVar4) {
      if ((local_100.ArrayNum != (uint)local_128) ||
         ((local_100.ArrayNum != 0 &&
          (iVar5 = memcmp(local_100.AllocatorInstance.Data,local_130.Data,
                          (longlong)local_100.ArrayNum), iVar5 != 0)))) {
        pFVar10 = FAutomationTestFramework::Get();
        pFVar1 = pFVar10->CurrentTest;
        pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
        ::FString::PrintfImpl(&local_80,L"File data was incorrect after appending: %s");
        (*pcVar2)(pFVar1,&local_80,0);
        local_c0.Data.AllocatorInstance.Data = local_80.Data.AllocatorInstance.Data;
        goto LAB_141c9e87d;
      }
      if (FVar16.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FVar16.Data);
      }
      FVar16.Data = (FScriptContainerElement *)L"";
      if (local_120.Data.ArrayNum != 0) {
        FVar16.Data = local_120.Data.AllocatorInstance.Data;
      }
      plVar9 = (longlong *)(**(code **)((longlong)*pIVar8 + 0x110))(pIVar8,FVar16.Data,0,1);
      lVar11 = local_128;
      if (plVar9 == (longlong *)0x0) {
        pFVar10 = FAutomationTestFramework::Get();
        pFVar1 = pFVar10->CurrentTest;
        pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
        ::FString::PrintfImpl(&local_90,L"File failed to open when clobbering: %s");
        (*pcVar2)(pFVar1,&local_90,0);
        FVar16.Data = local_90.Data.AllocatorInstance.Data;
      }
      else {
        uVar13 = local_128._4_4_;
        local_128 = (ulonglong)local_128._4_4_ << 0x20;
        uVar6 = 0;
        if ((lVar11 < 0) && (uVar6 = 0, uVar13 != 0)) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,0,&local_130,0,(int *)((longlong)&local_128 + 4));
          uVar13 = local_128._4_4_;
          uVar6 = (uint)local_128;
        }
        if ((local_130.Data <= local_138) && (local_138 < local_130.Data + (int)uVar13)) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar4) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          uVar13 = local_128._4_4_;
          uVar6 = (uint)local_128;
        }
        if (uVar6 == uVar13) {
          uVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x101,&local_130,(int *)((longlong)&local_128 + 4));
        }
        local_128 = CONCAT44(local_128._4_4_,uVar6 + 1);
        local_130.Data[(int)uVar6] = local_138[0];
        (**(code **)(*plVar9 + 0x30))(plVar9,local_138);
        (**(code **)*plVar9)(plVar9,1);
        local_110.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        FVar16.Data = (FScriptContainerElement *)L"";
        if (local_120.Data.ArrayNum != 0) {
          FVar16.Data = local_120.Data.AllocatorInstance.Data;
        }
        local_110.ArrayNum = 0;
        local_110.ArrayMax = 0;
        bVar4 = FFileHelper::LoadFileToArray(&local_110,(wchar_t *)FVar16.Data,0);
        FVar16.Data = local_110.AllocatorInstance.Data;
        if (bVar4) {
          if ((local_110.ArrayNum == (uint)local_128) &&
             ((local_110.ArrayNum == 0 ||
              (iVar5 = memcmp(local_110.AllocatorInstance.Data,local_130.Data,
                              (longlong)local_110.ArrayNum), iVar5 == 0))))
          goto joined_r0x000141c9e968;
          pFVar10 = FAutomationTestFramework::Get();
          pFVar1 = pFVar10->CurrentTest;
          pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
          ::FString::PrintfImpl(&local_a0,L"File data was incorrect after clobbering: %s");
          (*pcVar2)(pFVar1,&local_a0,0);
          local_b0.Data.AllocatorInstance.Data = local_a0.Data.AllocatorInstance.Data;
        }
        else {
          pFVar10 = FAutomationTestFramework::Get();
          pFVar1 = pFVar10->CurrentTest;
          pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
          ::FString::PrintfImpl(&local_b0,L"File failed to load after clobbering: %s");
          (*pcVar2)(pFVar1,&local_b0,0);
        }
        FVar16.Data = local_110.AllocatorInstance.Data;
        if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b0.Data.AllocatorInstance.Data);
          FVar16.Data = local_110.AllocatorInstance.Data;
        }
      }
    }
    else {
      pFVar10 = FAutomationTestFramework::Get();
      pFVar1 = pFVar10->CurrentTest;
      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
      ::FString::PrintfImpl(&local_c0,L"File failed to load after appending: %s");
      (*pcVar2)(pFVar1,&local_c0,0);
LAB_141c9e87d:
      FVar16.Data = local_100.AllocatorInstance.Data;
      if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c0.Data.AllocatorInstance.Data);
        FVar16.Data = local_100.AllocatorInstance.Data;
      }
    }
  }
  else {
    pFVar10 = FAutomationTestFramework::Get();
    pFVar1 = pFVar10->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_e0,L"File failed to load after writing: %s");
    (*pcVar2)(pFVar1,&local_e0,0);
LAB_141c9e915:
    FVar16.Data = local_f0.AllocatorInstance.Data;
    if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e0.Data.AllocatorInstance.Data);
      FVar16.Data = local_f0.AllocatorInstance.Data;
    }
  }
joined_r0x000141c9e968:
  if (FVar16.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar16.Data);
  }
LAB_141c9e96f:
  if (local_130.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_130.Data);
  }
  FVar16.Data = (FScriptContainerElement *)L"";
  if (local_120.Data.ArrayNum != 0) {
    FVar16.Data = local_120.Data.AllocatorInstance.Data;
  }
  (**(code **)((longlong)*pIVar8 + 0x88))(pIVar8,FVar16.Data);
  if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_120.Data.AllocatorInstance.Data);
  }
  return;
}

