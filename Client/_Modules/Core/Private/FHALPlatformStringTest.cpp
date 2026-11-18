// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 10

// GetTestFlags @ 141bcce90

EAutomationTestFlags __thiscall FHALPlatformStringTest::GetTestFlags(FHALPlatformStringTest *this)

{
  return this->TestFlags;
}

// IsStressTest @ 141bccea0

bool __thiscall FHALPlatformStringTest::IsStressTest(FHALPlatformStringTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141bcceb0

uint __thiscall FHALPlatformStringTest::GetRequiredDeviceNum(FHALPlatformStringTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 141bccec0

FString * __thiscall
FHALPlatformStringTest::GetTestSourceFileName
          (FHALPlatformStringTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\HAL\\PlatformStringTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141bccef0

int __thiscall FHALPlatformStringTest::GetTestSourceFileLine(FHALPlatformStringTest *this)

{
  return 0xb;
}

// GetTests @ 141bccf00

/* WARNING: Removing unreachable block (ram,0x000141bcd07e) */

void __thiscall
FHALPlatformStringTest::GetTests
          (FHALPlatformStringTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
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

// RunTest @ 141bcd0a0

bool __thiscall FHALPlatformStringTest::RunTest(FHALPlatformStringTest *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 141bcd0d0

FString * __thiscall
FHALPlatformStringTest::GetBeautifiedTestName
          (FHALPlatformStringTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FHALPlatformStringTest @ 141be2f30

FHALPlatformStringTest * __thiscall
FHALPlatformStringTest::FHALPlatformStringTest(FHALPlatformStringTest *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7FHALPlatformStringTest__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[Core]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"System::Core::HAL::PlatformString");
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
  ::FString::FString(&local_18,"[Core]");
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

// TestBody @ 141c14470

void __thiscall FHALPlatformStringTest::TestBody(FHALPlatformStringTest *this,FString *param_1)

{
  FScriptContainerElement FVar1;
  wchar_t wVar2;
  FAutomationTestBase *pFVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  FAutomationTestFramework *pFVar10;
  longlong lVar11;
  longlong lVar12;
  ForAnyElementType FVar13;
  ForAnyElementType local_88;
  int local_80;
  int local_7c;
  FString local_78;
  FString local_68;
  wchar_t local_58 [4];
  wchar_t awStack_50 [4];
  wchar_t local_48 [4];
  wchar_t awStack_40 [4];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  FString local_28;
  
  pFVar10 = FAutomationTestFramework::Get();
  pFVar3 = pFVar10->CurrentTest;
  pcVar4 = *(code **)(pFVar3->_padding_ + 0x50);
  ::FString::FString(&local_78,L"Strupr TCHAR null-termination");
  (*pcVar4)(pFVar3,&local_78,0);
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  uVar5 = u_the_quick_brown._80_8_;
  local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)u_the_quick_brown._0_8_;
  local_68.Data._8_8_ = u_the_quick_brown._8_8_;
  local_58[0] = u_the_quick_brown[8];
  local_58[1] = u_the_quick_brown[9];
  local_58[2] = u_the_quick_brown[10];
  local_58[3] = u_the_quick_brown[0xb];
  awStack_50[0] = u_the_quick_brown[0xc];
  awStack_50[1] = u_the_quick_brown[0xd];
  awStack_50[2] = u_the_quick_brown[0xe];
  awStack_50[3] = u_the_quick_brown[0xf];
  local_48[0] = u_the_quick_brown[0x10];
  local_48[1] = u_the_quick_brown[0x11];
  local_48[2] = u_the_quick_brown[0x12];
  local_48[3] = u_the_quick_brown[0x13];
  awStack_40[0] = u_the_quick_brown[0x14];
  awStack_40[1] = u_the_quick_brown[0x15];
  awStack_40[2] = u_the_quick_brown[0x16];
  awStack_40[3] = u_the_quick_brown[0x17];
  local_38._0_2_ = u_the_quick_brown[0x18];
  local_38._2_2_ = u_the_quick_brown[0x19];
  uStack_34._0_2_ = u_the_quick_brown[0x1a];
  uStack_34._2_2_ = u_the_quick_brown[0x1b];
  uStack_30._0_2_ = u_the_quick_brown[0x1c];
  uStack_30._2_2_ = u_the_quick_brown[0x1d];
  uStack_2c._0_2_ = u_the_quick_brown[0x1e];
  uStack_2c._2_2_ = u_the_quick_brown[0x1f];
  local_88.Data = (FScriptContainerElement *)0x0;
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)u_the_quick_brown._64_8_;
  local_28.Data._8_8_ = u_the_quick_brown._72_8_;
  local_80 = 0x2c;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,0x2c,0,&local_88,0x2c,&local_7c);
  *(FScriptContainerElement **)local_88.Data = local_68.Data.AllocatorInstance.Data;
  *(undefined8 *)(local_88.Data + 8) = local_68.Data._8_8_;
  *(wchar_t (*) [4])(local_88.Data + 0x10) = local_58;
  *(wchar_t (*) [4])(local_88.Data + 0x18) = awStack_50;
  *(wchar_t (*) [4])(local_88.Data + 0x20) = local_48;
  *(wchar_t (*) [4])(local_88.Data + 0x28) = awStack_40;
  *(undefined4 *)(local_88.Data + 0x30) = local_38;
  *(undefined4 *)(local_88.Data + 0x34) = uStack_34;
  *(undefined4 *)(local_88.Data + 0x38) = uStack_30;
  *(undefined4 *)(local_88.Data + 0x3c) = uStack_2c;
  *(FScriptContainerElement **)(local_88.Data + 0x40) = local_28.Data.AllocatorInstance.Data;
  *(undefined8 *)(local_88.Data + 0x48) = local_28.Data._8_8_;
  *(undefined8 *)(local_88.Data + 0x50) = uVar5;
  wVar2 = *(wchar_t *)local_88.Data;
  FVar13.Data = local_88.Data;
  for (lVar11 = (longlong)local_80; (wVar2 != L'\0' && (lVar11 != 0)); lVar11 = lVar11 + -1) {
    *(wchar_t *)FVar13.Data =
         *(wchar_t *)FVar13.Data - (-(ushort)((ushort)*(wchar_t *)FVar13.Data - 0x61 < 0x1a) & 0x20)
    ;
    FVar13.Data = FVar13.Data + 2;
    wVar2 = *(wchar_t *)FVar13.Data;
  }
  iVar9 = wcsncmp((wchar_t *)local_88.Data,L"THE QUICK BROWN FOX JUMPS OVER THE LAZY DOG",
                  (longlong)local_80);
  if (iVar9 != 0) {
    pFVar10 = FAutomationTestFramework::Get();
    pFVar3 = pFVar10->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_68,L"Required condition failed, interrupting test");
    (*pcVar4)(pFVar3,&local_68,0);
    FVar13.Data = local_68.Data.AllocatorInstance.Data;
    goto LAB_141c14cd3;
  }
  local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.Data.ArrayNum = 0x2c;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,0x2c,0,(ForAnyElementType *)&local_78,0x2c,&local_78.Data.ArrayMax);
  lVar12 = 0x13;
  *(FScriptContainerElement **)local_78.Data.AllocatorInstance.Data =
       local_68.Data.AllocatorInstance.Data;
  *(undefined8 *)(local_78.Data.AllocatorInstance.Data + 8) = local_68.Data._8_8_;
  *(wchar_t (*) [4])(local_78.Data.AllocatorInstance.Data + 0x10) = local_58;
  *(wchar_t (*) [4])(local_78.Data.AllocatorInstance.Data + 0x18) = awStack_50;
  *(wchar_t (*) [4])(local_78.Data.AllocatorInstance.Data + 0x20) = local_48;
  *(wchar_t (*) [4])(local_78.Data.AllocatorInstance.Data + 0x28) = awStack_40;
  *(undefined8 *)(local_78.Data.AllocatorInstance.Data + 0x30) = _local_38;
  *(undefined8 *)(local_78.Data.AllocatorInstance.Data + 0x38) = _uStack_30;
  *(FScriptContainerElement **)(local_78.Data.AllocatorInstance.Data + 0x40) =
       local_28.Data.AllocatorInstance.Data;
  *(undefined8 *)(local_78.Data.AllocatorInstance.Data + 0x48) = local_28.Data._8_8_;
  *(undefined8 *)(local_78.Data.AllocatorInstance.Data + 0x50) = uVar5;
  wVar2 = *(wchar_t *)local_78.Data.AllocatorInstance.Data;
  FVar13.Data = local_78.Data.AllocatorInstance.Data;
  for (lVar11 = 0x13; (wVar2 != L'\0' && (lVar11 != 0)); lVar11 = lVar11 + -1) {
    *(wchar_t *)FVar13.Data =
         *(wchar_t *)FVar13.Data - (-(ushort)((ushort)*(wchar_t *)FVar13.Data - 0x61 < 0x1a) & 0x20)
    ;
    FVar13.Data = FVar13.Data + 2;
    wVar2 = *(wchar_t *)FVar13.Data;
  }
  iVar9 = wcsncmp((wchar_t *)local_78.Data.AllocatorInstance.Data,
                  L"THE QUICK BROWN FOX jumps over the lazy dog",(longlong)local_78.Data.ArrayNum);
  if (iVar9 == 0) {
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    if (local_88.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data);
    }
    pFVar10 = FAutomationTestFramework::Get();
    pFVar3 = pFVar10->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x50);
    ::FString::FString(&local_28,L"Strupr ANSICHAR null-termination");
    (*pcVar4)(pFVar3,&local_28,0);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    uVar6 = s_the_quick_brown_fox_jumps_over_._40_4_;
    uVar5 = s_the_quick_brown_fox_jumps_over_._32_8_;
    local_28.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)s_the_quick_brown_fox_jumps_over_._0_8_;
    local_28.Data._8_8_ = s_the_quick_brown_fox_jumps_over_._8_8_;
    uStack_34 = s_the_quick_brown_fox_jumps_over_._20_4_;
    local_38 = s_the_quick_brown_fox_jumps_over_._16_4_;
    uStack_2c = s_the_quick_brown_fox_jumps_over_._28_4_;
    uStack_30 = s_the_quick_brown_fox_jumps_over_._24_4_;
    local_88.Data = (FScriptContainerElement *)0x0;
    local_80 = 0x2c;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,0x2c,0,&local_88,0x2c,&local_7c);
    *(FScriptContainerElement **)local_88.Data = local_28.Data.AllocatorInstance.Data;
    *(undefined8 *)(local_88.Data + 8) = local_28.Data._8_8_;
    *(undefined4 *)(local_88.Data + 0x10) = local_38;
    *(undefined4 *)(local_88.Data + 0x14) = uStack_34;
    *(undefined4 *)(local_88.Data + 0x18) = uStack_30;
    *(undefined4 *)(local_88.Data + 0x1c) = uStack_2c;
    *(undefined8 *)(local_88.Data + 0x20) = uVar5;
    *(undefined4 *)(local_88.Data + 0x28) = uVar6;
    FVar1 = *local_88.Data;
    FVar13.Data = local_88.Data;
    for (lVar11 = (longlong)local_80; (FVar1 != (FScriptContainerElement)0x0 && (lVar11 != 0));
        lVar11 = lVar11 + -1) {
      *FVar13.Data = (FScriptContainerElement)
                     ((char)*FVar13.Data - (-((int)(char)*FVar13.Data - 0x61U < 0x1a) & 0x20U));
      FVar13.Data = FVar13.Data + 1;
      FVar1 = *FVar13.Data;
    }
    iVar9 = strncmp((char *)local_88.Data,"THE QUICK BROWN FOX JUMPS OVER THE LAZY DOG",
                    (longlong)local_80);
    if (iVar9 != 0) {
LAB_141c14812:
      pFVar10 = FAutomationTestFramework::Get();
      pFVar3 = pFVar10->CurrentTest;
      pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
      ::FString::FString(&local_28,L"Required condition failed, interrupting test");
      (*pcVar4)(pFVar3,&local_28,0);
      FVar13.Data = local_28.Data.AllocatorInstance.Data;
      goto LAB_141c14cd3;
    }
    local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.Data.ArrayNum = 0x2c;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,0x2c,0,(ForAnyElementType *)&local_78,0x2c,&local_78.Data.ArrayMax);
    *(FScriptContainerElement **)local_78.Data.AllocatorInstance.Data =
         local_28.Data.AllocatorInstance.Data;
    *(undefined8 *)(local_78.Data.AllocatorInstance.Data + 8) = local_28.Data._8_8_;
    *(undefined8 *)(local_78.Data.AllocatorInstance.Data + 0x10) = _local_38;
    *(undefined8 *)(local_78.Data.AllocatorInstance.Data + 0x18) = _uStack_30;
    *(undefined8 *)(local_78.Data.AllocatorInstance.Data + 0x20) = uVar5;
    *(undefined4 *)(local_78.Data.AllocatorInstance.Data + 0x28) = uVar6;
    FVar1 = *local_78.Data.AllocatorInstance.Data;
    FVar13.Data = local_78.Data.AllocatorInstance.Data;
    for (lVar11 = 0x13; (FVar1 != (FScriptContainerElement)0x0 && (lVar11 != 0));
        lVar11 = lVar11 + -1) {
      *FVar13.Data = (FScriptContainerElement)
                     ((char)*FVar13.Data - (-((int)(char)*FVar13.Data - 0x61U < 0x1a) & 0x20U));
      FVar13.Data = FVar13.Data + 1;
      FVar1 = *FVar13.Data;
    }
    iVar9 = strncmp((char *)local_78.Data.AllocatorInstance.Data,
                    "THE QUICK BROWN FOX jumps over the lazy dog",(longlong)local_78.Data.ArrayNum);
    if (iVar9 == 0) {
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
      if (local_88.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data);
      }
      pFVar10 = FAutomationTestFramework::Get();
      pFVar3 = pFVar10->CurrentTest;
      pcVar4 = *(code **)(pFVar3->_padding_ + 0x50);
      ::FString::FString(&local_28,L"Strupr WIDECHAR null-termination");
      (*pcVar4)(pFVar3,&local_28,0);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      uVar5 = u_the_quick_brown._80_8_;
      local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)u_the_quick_brown._0_8_;
      local_28.Data._8_8_ = u_the_quick_brown._8_8_;
      local_38._0_2_ = u_the_quick_brown[8];
      local_38._2_2_ = u_the_quick_brown[9];
      uStack_34._0_2_ = u_the_quick_brown[10];
      uStack_34._2_2_ = u_the_quick_brown[0xb];
      uStack_30._0_2_ = u_the_quick_brown[0xc];
      uStack_30._2_2_ = u_the_quick_brown[0xd];
      uStack_2c._0_2_ = u_the_quick_brown[0xe];
      uStack_2c._2_2_ = u_the_quick_brown[0xf];
      local_48[0] = u_the_quick_brown[0x10];
      local_48[1] = u_the_quick_brown[0x11];
      local_48[2] = u_the_quick_brown[0x12];
      local_48[3] = u_the_quick_brown[0x13];
      awStack_40[0] = u_the_quick_brown[0x14];
      awStack_40[1] = u_the_quick_brown[0x15];
      awStack_40[2] = u_the_quick_brown[0x16];
      awStack_40[3] = u_the_quick_brown[0x17];
      local_88.Data = (FScriptContainerElement *)0x0;
      local_58[0] = u_the_quick_brown[0x18];
      local_58[1] = u_the_quick_brown[0x19];
      local_58[2] = u_the_quick_brown[0x1a];
      local_58[3] = u_the_quick_brown[0x1b];
      awStack_50[0] = u_the_quick_brown[0x1c];
      awStack_50[1] = u_the_quick_brown[0x1d];
      awStack_50[2] = u_the_quick_brown[0x1e];
      awStack_50[3] = u_the_quick_brown[0x1f];
      local_80 = 0x2c;
      local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)u_the_quick_brown._64_8_;
      local_68.Data._8_8_ = u_the_quick_brown._72_8_;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,0x2c,0,&local_88,0x2c,&local_7c);
      *(FScriptContainerElement **)local_88.Data = local_28.Data.AllocatorInstance.Data;
      *(undefined8 *)(local_88.Data + 8) = local_28.Data._8_8_;
      *(undefined8 *)(local_88.Data + 0x10) = _local_38;
      *(undefined8 *)(local_88.Data + 0x18) = _uStack_30;
      *(wchar_t (*) [4])(local_88.Data + 0x20) = local_48;
      *(wchar_t (*) [4])(local_88.Data + 0x28) = awStack_40;
      *(wchar_t (*) [4])(local_88.Data + 0x30) = local_58;
      *(wchar_t (*) [4])(local_88.Data + 0x38) = awStack_50;
      *(FScriptContainerElement **)(local_88.Data + 0x40) = local_68.Data.AllocatorInstance.Data;
      *(undefined8 *)(local_88.Data + 0x48) = local_68.Data._8_8_;
      *(undefined8 *)(local_88.Data + 0x50) = uVar5;
      FMicrosoftPlatformString::Strupr<wchar_t>((wchar_t *)local_88.Data,(longlong)local_80);
      iVar9 = wcsncmp((wchar_t *)local_88.Data,L"THE QUICK BROWN FOX JUMPS OVER THE LAZY DOG",
                      (longlong)local_80);
      if (iVar9 != 0) goto LAB_141c14812;
      local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_78.Data.ArrayNum = 0x2c;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,0x2c,0,(ForAnyElementType *)&local_78,0x2c,&local_78.Data.ArrayMax);
      *(FScriptContainerElement **)local_78.Data.AllocatorInstance.Data =
           local_28.Data.AllocatorInstance.Data;
      *(undefined8 *)(local_78.Data.AllocatorInstance.Data + 8) = local_28.Data._8_8_;
      *(undefined8 *)(local_78.Data.AllocatorInstance.Data + 0x10) = _local_38;
      *(undefined8 *)(local_78.Data.AllocatorInstance.Data + 0x18) = _uStack_30;
      *(wchar_t (*) [4])(local_78.Data.AllocatorInstance.Data + 0x20) = local_48;
      *(wchar_t (*) [4])(local_78.Data.AllocatorInstance.Data + 0x28) = awStack_40;
      *(wchar_t (*) [4])(local_78.Data.AllocatorInstance.Data + 0x30) = local_58;
      *(wchar_t (*) [4])(local_78.Data.AllocatorInstance.Data + 0x38) = awStack_50;
      *(FScriptContainerElement **)(local_78.Data.AllocatorInstance.Data + 0x40) =
           local_68.Data.AllocatorInstance.Data;
      *(undefined8 *)(local_78.Data.AllocatorInstance.Data + 0x48) = local_68.Data._8_8_;
      *(undefined8 *)(local_78.Data.AllocatorInstance.Data + 0x50) = uVar5;
      wVar2 = *(wchar_t *)local_78.Data.AllocatorInstance.Data;
      FVar13.Data = local_78.Data.AllocatorInstance.Data;
      for (lVar11 = 0x13; (wVar2 != L'\0' && (lVar11 != 0)); lVar11 = lVar11 + -1) {
        *(wchar_t *)FVar13.Data =
             *(wchar_t *)FVar13.Data -
             (-(ushort)((ushort)*(wchar_t *)FVar13.Data - 0x61 < 0x1a) & 0x20);
        FVar13.Data = FVar13.Data + 2;
        wVar2 = *(wchar_t *)FVar13.Data;
      }
      iVar9 = wcsncmp((wchar_t *)local_78.Data.AllocatorInstance.Data,
                      L"THE QUICK BROWN FOX jumps over the lazy dog",
                      (longlong)local_78.Data.ArrayNum);
      if (iVar9 == 0) {
        if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78.Data.AllocatorInstance.Data);
        }
        if (local_88.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_88.Data);
        }
        pFVar10 = FAutomationTestFramework::Get();
        pFVar3 = pFVar10->CurrentTest;
        pcVar4 = *(code **)(pFVar3->_padding_ + 0x50);
        ::FString::FString(&local_28,L"Strupr UTF8CHAR null-termination");
        (*pcVar4)(pFVar3,&local_28,0);
        if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Data.AllocatorInstance.Data);
        }
        local_88.Data = (FScriptContainerElement *)0x0;
        local_80 = 0x2c;
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,0x2c,0,&local_88,0x2c,&local_7c);
        uVar5 = s_the_quick_brown_fox_jumps_over_._8_8_;
        *(undefined8 *)local_88.Data = s_the_quick_brown_fox_jumps_over_._0_8_;
        *(undefined8 *)(local_88.Data + 8) = uVar5;
        uVar5 = CONCAT44(s_the_quick_brown_fox_jumps_over_._28_4_,
                         s_the_quick_brown_fox_jumps_over_._24_4_);
        *(ulonglong *)(local_88.Data + 0x10) =
             CONCAT44(s_the_quick_brown_fox_jumps_over_._20_4_,
                      s_the_quick_brown_fox_jumps_over_._16_4_);
        *(undefined8 *)(local_88.Data + 0x18) = uVar5;
        *(undefined8 *)(local_88.Data + 0x20) = s_the_quick_brown_fox_jumps_over_._32_8_;
        *(undefined4 *)(local_88.Data + 0x28) = s_the_quick_brown_fox_jumps_over_._40_4_;
        FMicrosoftPlatformString::Strupr<char8_t>((uchar *)local_88.Data,(longlong)local_80);
        iVar9 = strncmp((char *)local_88.Data,"THE QUICK BROWN FOX JUMPS OVER THE LAZY DOG",
                        (longlong)local_80);
        if (iVar9 != 0) goto LAB_141c14812;
        local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_78.Data.ArrayNum = 0x2c;
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,0x2c,0,(ForAnyElementType *)&local_78,0x2c,&local_78.Data.ArrayMax);
        uVar5 = s_the_quick_brown_fox_jumps_over_._8_8_;
        *(undefined8 *)local_78.Data.AllocatorInstance.Data =
             s_the_quick_brown_fox_jumps_over_._0_8_;
        *(undefined8 *)(local_78.Data.AllocatorInstance.Data + 8) = uVar5;
        uVar8 = s_the_quick_brown_fox_jumps_over_._28_4_;
        uVar7 = s_the_quick_brown_fox_jumps_over_._24_4_;
        uVar6 = s_the_quick_brown_fox_jumps_over_._20_4_;
        *(undefined4 *)(local_78.Data.AllocatorInstance.Data + 0x10) =
             s_the_quick_brown_fox_jumps_over_._16_4_;
        *(undefined4 *)(local_78.Data.AllocatorInstance.Data + 0x14) = uVar6;
        *(undefined4 *)(local_78.Data.AllocatorInstance.Data + 0x18) = uVar7;
        *(undefined4 *)(local_78.Data.AllocatorInstance.Data + 0x1c) = uVar8;
        *(undefined8 *)(local_78.Data.AllocatorInstance.Data + 0x20) =
             s_the_quick_brown_fox_jumps_over_._32_8_;
        *(undefined4 *)(local_78.Data.AllocatorInstance.Data + 0x28) =
             s_the_quick_brown_fox_jumps_over_._40_4_;
        FVar1 = *local_78.Data.AllocatorInstance.Data;
        FVar13.Data = local_78.Data.AllocatorInstance.Data;
        for (; (FVar1 != (FScriptContainerElement)0x0 && (lVar12 != 0)); lVar12 = lVar12 + -1) {
          *FVar13.Data = (FScriptContainerElement)
                         ((char)*FVar13.Data - (-((byte)*FVar13.Data - 0x61 < 0x1a) & 0x20U));
          FVar13.Data = FVar13.Data + 1;
          FVar1 = *FVar13.Data;
        }
        iVar9 = strncmp((char *)local_78.Data.AllocatorInstance.Data,
                        "THE QUICK BROWN FOX jumps over the lazy dog",
                        (longlong)local_78.Data.ArrayNum);
        FVar13.Data = local_78.Data.AllocatorInstance.Data;
        if (iVar9 == 0) goto LAB_141c14cd3;
      }
    }
  }
  pFVar10 = FAutomationTestFramework::Get();
  pFVar3 = pFVar10->CurrentTest;
  pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
  ::FString::FString(&local_28,L"Required condition failed, interrupting test");
  (*pcVar4)(pFVar3,&local_28,0);
  FVar13.Data = local_78.Data.AllocatorInstance.Data;
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
    FVar13.Data = local_78.Data.AllocatorInstance.Data;
  }
LAB_141c14cd3:
  if (FVar13.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar13.Data);
  }
  if (local_88.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data);
  }
  return;
}

