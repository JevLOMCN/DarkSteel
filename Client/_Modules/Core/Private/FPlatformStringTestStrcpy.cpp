// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 11

// GetTestFlags @ 141bcc650

EAutomationTestFlags __thiscall
FPlatformStringTestStrcpy::GetTestFlags(FPlatformStringTestStrcpy *this)

{
  return this->TestFlags;
}

// IsStressTest @ 141bcc660

bool __thiscall FPlatformStringTestStrcpy::IsStressTest(FPlatformStringTestStrcpy *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141bcc670

uint __thiscall FPlatformStringTestStrcpy::GetRequiredDeviceNum(FPlatformStringTestStrcpy *this)

{
  return 1;
}

// GetTestSourceFileName @ 141bcc680

FString * __thiscall
FPlatformStringTestStrcpy::GetTestSourceFileName
          (FPlatformStringTestStrcpy *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\HAL\\PlatformStringTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141bcc6b0

int __thiscall FPlatformStringTestStrcpy::GetTestSourceFileLine(FPlatformStringTestStrcpy *this)

{
  return 0x34;
}

// GetTests @ 141bcc6c0

/* WARNING: Removing unreachable block (ram,0x000141bcc83e) */

void __thiscall
FPlatformStringTestStrcpy::GetTests
          (FPlatformStringTestStrcpy *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
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

// RunTest @ 141bcc860

bool __thiscall FPlatformStringTestStrcpy::RunTest(FPlatformStringTestStrcpy *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 141bcc890

FString * __thiscall
FPlatformStringTestStrcpy::GetBeautifiedTestName
          (FPlatformStringTestStrcpy *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FPlatformStringTestStrcpy @ 141be5e50

FPlatformStringTestStrcpy * __thiscall
FPlatformStringTestStrcpy::FPlatformStringTestStrcpy
          (FPlatformStringTestStrcpy *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7FPlatformStringTestStrcpy__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[ApplicationContextMask][EngineFilter]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"System::Core::HAL::PlatformString::Strcpy");
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
  ::FString::FString(&local_18,"[ApplicationContextMask][EngineFilter]");
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

// operator() @ 141bee290

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall `FPlatformStringTestStrcpy::TestBody'::__l2::<lambda_1>::operator()(void *this)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  
  lVar9 = _UNK_1506afe48;
  lVar10 = ___xmm_25252525252525252525252525252525;
  plVar6 = *(longlong **)((longlong)this + 0x10);
  plVar1 = (longlong *)((longlong)this + 8);
  plVar7 = (longlong *)*plVar1;
  plVar2 = (longlong *)((longlong)this + 0x10);
  plVar8 = *(longlong **)this;
  plVar3 = (longlong *)((longlong)plVar6 + 0x1f);
  plVar4 = (longlong *)((longlong)plVar7 + 0x1f);
  if ((((((plVar4 < plVar6) || (plVar3 < plVar7)) &&
        ((plVar5 = (longlong *)((longlong)plVar8 + 0x3e), plVar5 < plVar6 || (plVar3 < plVar8)))) &&
       ((this < plVar6 || (plVar3 < this)))) &&
      ((((plVar1 < plVar6 || (plVar3 < plVar1)) &&
        (((plVar2 < plVar6 || (plVar3 < plVar2)) && ((plVar5 < plVar7 || (plVar4 < plVar8)))))) &&
       (((this < plVar7 || (plVar4 < this)) && ((plVar1 < plVar7 || (plVar4 < plVar1)))))))) &&
     ((((plVar2 < plVar7 || (plVar4 < plVar2)) && ((this < plVar8 || (plVar5 < this)))) &&
      (((plVar1 < plVar8 || (plVar5 < plVar1)) && ((plVar2 < plVar8 || (plVar5 < plVar2)))))))) {
    *plVar7 = ___xmm_25252525252525252525252525252525;
    plVar7[1] = lVar9;
    *plVar6 = lVar10;
    plVar6[1] = lVar9;
    *(undefined4 *)plVar8 = 0x250025;
    *(undefined4 *)((longlong)plVar8 + 4) = 0x250025;
    *(undefined4 *)(plVar8 + 1) = 0x250025;
    *(undefined4 *)((longlong)plVar8 + 0xc) = 0x250025;
    *(undefined4 *)(plVar8 + 2) = 0x250025;
    *(undefined4 *)((longlong)plVar8 + 0x14) = 0x250025;
    *(undefined4 *)(plVar8 + 3) = 0x250025;
    *(undefined4 *)((longlong)plVar8 + 0x1c) = 0x250025;
    *(undefined4 *)(plVar8 + 4) = 0x250025;
    *(undefined4 *)((longlong)plVar8 + 0x24) = 0x250025;
    *(undefined4 *)(plVar8 + 5) = 0x250025;
    *(undefined4 *)((longlong)plVar8 + 0x2c) = 0x250025;
    *(undefined4 *)(plVar8 + 6) = 0x250025;
    *(undefined4 *)((longlong)plVar8 + 0x34) = 0x250025;
    *(undefined4 *)(plVar8 + 7) = 0x250025;
    *(undefined4 *)((longlong)plVar8 + 0x3c) = 0x250025;
    plVar7[2] = lVar10;
    plVar7[3] = lVar9;
    plVar6[2] = lVar10;
    plVar6[3] = lVar9;
    return;
  }
  lVar10 = 0;
  do {
    *(undefined2 *)(*(longlong *)this + lVar10 * 2) = 0x25;
    *(undefined1 *)(lVar10 + *plVar1) = 0x25;
    *(undefined1 *)(lVar10 + *plVar2) = 0x25;
    lVar10 = lVar10 + 1;
  } while (lVar10 < 0x20);
  return;
}

// TestBody @ 141c2b170

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FPlatformStringTestStrcpy::TestBody(FPlatformStringTestStrcpy *this,FString *param_1)

{
  FAutomationTestBase *pFVar1;
  code *pcVar2;
  int iVar3;
  FAutomationTestFramework *pFVar4;
  undefined1 auStack_e8 [32];
  FString local_c8;
  wchar_t *local_b8;
  char *local_b0;
  char *local_a8;
  undefined4 local_a0;
  char local_98;
  char local_97;
  char local_96;
  char local_95;
  char local_94;
  char local_93;
  char local_92;
  undefined1 local_8a;
  char local_89;
  char local_78;
  char local_77;
  char local_76;
  char local_75;
  char local_74;
  char local_73;
  char local_72;
  undefined1 local_6a;
  char local_69;
  wchar_t local_58;
  short local_56;
  short local_54;
  short local_52;
  short local_50;
  short local_4e;
  short local_4c;
  undefined2 local_3c;
  short local_3a;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_e8;
  local_b8 = &local_58;
  local_b0 = &local_98;
  local_a0 = 0x20;
  local_a8 = &local_78;
  `FPlatformStringTestStrcpy::TestBody'::__l2::<lambda_1>::operator()(&local_b8);
  wcscpy(&local_58,L"12345");
  strcpy(&local_98,"12345");
  strcpy(&local_78,"12345");
  if (local_4e == 0) {
    iVar3 = wcscmp(L"12345",&local_58);
    if ((iVar3 != 0) || (local_4c != 0x25)) goto LAB_141c2b213;
  }
  else {
LAB_141c2b213:
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_c8,L"WideStrcpy");
    (*pcVar2)(pFVar1,&local_c8,0);
    if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Data.AllocatorInstance.Data);
    }
  }
  if (local_93 == '\0') {
    iVar3 = strcmp("12345",&local_98);
    if ((iVar3 != 0) || (local_92 != '%')) goto LAB_141c2b270;
  }
  else {
LAB_141c2b270:
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_c8,L"Utf8Strcpy");
    (*pcVar2)(pFVar1,&local_c8,0);
    if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Data.AllocatorInstance.Data);
    }
  }
  if (local_73 == '\0') {
    iVar3 = strcmp("12345",&local_78);
    if ((iVar3 != 0) || (local_72 != '%')) goto LAB_141c2b2cd;
  }
  else {
LAB_141c2b2cd:
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_c8,L"AnsiStrcpy");
    (*pcVar2)(pFVar1,&local_c8,0);
    if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Data.AllocatorInstance.Data);
    }
  }
  `FPlatformStringTestStrcpy::TestBody'::__l2::<lambda_1>::operator()(&local_b8);
  wcsncpy(&local_58,L"12345",0xe);
  local_3c = 0;
  strncpy(&local_98,"12345",0xf);
  local_8a = 0;
  strncpy(&local_78,"12345",0xf);
  local_6a = 0;
  if (local_4e == 0) {
    iVar3 = wcscmp(L"12345",&local_58);
    if ((iVar3 != 0) || (local_3a != 0x25)) goto LAB_141c2b387;
  }
  else {
LAB_141c2b387:
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_c8,L"WideStrncpyTestLenPlus10");
    (*pcVar2)(pFVar1,&local_c8,0);
    if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Data.AllocatorInstance.Data);
    }
  }
  if (local_93 == '\0') {
    iVar3 = strcmp("12345",&local_98);
    if ((iVar3 != 0) || (local_89 != '%')) goto LAB_141c2b3e4;
  }
  else {
LAB_141c2b3e4:
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_c8,L"Utf8StrncpyTestLenPlus10");
    (*pcVar2)(pFVar1,&local_c8,0);
    if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Data.AllocatorInstance.Data);
    }
  }
  if (local_73 == '\0') {
    iVar3 = strcmp("12345",&local_78);
    if ((iVar3 != 0) || (local_69 != '%')) goto LAB_141c2b441;
  }
  else {
LAB_141c2b441:
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_c8,L"AnsiStrncpyTestLenPlus10");
    (*pcVar2)(pFVar1,&local_c8,0);
    if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Data.AllocatorInstance.Data);
    }
  }
  `FPlatformStringTestStrcpy::TestBody'::__l2::<lambda_1>::operator()(&local_b8);
  wcsncpy(&local_58,L"12345",5);
  local_4e = 0;
  strncpy(&local_98,"12345",6);
  local_93 = '\0';
  strncpy(&local_78,"12345",6);
  local_73 = '\0';
  if (local_4e == 0) {
    iVar3 = wcscmp(L"12345",&local_58);
    if ((iVar3 != 0) || (local_4c != 0x25)) goto LAB_141c2b4f9;
  }
  else {
LAB_141c2b4f9:
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_c8,L"WideStrncpyTestLenPlus1");
    (*pcVar2)(pFVar1,&local_c8,0);
    if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Data.AllocatorInstance.Data);
    }
  }
  if (local_93 == '\0') {
    iVar3 = strcmp("12345",&local_98);
    if ((iVar3 != 0) || (local_92 != '%')) goto LAB_141c2b556;
  }
  else {
LAB_141c2b556:
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_c8,L"Utf8StrncpyTestLenPlus1");
    (*pcVar2)(pFVar1,&local_c8,0);
    if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Data.AllocatorInstance.Data);
    }
  }
  if (local_73 == '\0') {
    iVar3 = strcmp("12345",&local_78);
    if ((iVar3 != 0) || (local_72 != '%')) goto LAB_141c2b5b3;
  }
  else {
LAB_141c2b5b3:
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_c8,L"AnsiStrncpyTestLenPlus1");
    (*pcVar2)(pFVar1,&local_c8,0);
    if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Data.AllocatorInstance.Data);
    }
  }
  `FPlatformStringTestStrcpy::TestBody'::__l2::<lambda_1>::operator()(&local_b8);
  wcsncpy(&local_58,L"12345",4);
  local_50 = 0;
  strncpy(&local_98,"12345",5);
  local_94 = '\0';
  strncpy(&local_78,"12345",5);
  local_74 = '\0';
  if ((local_50 == 0) && (local_4e == 0x25)) {
    iVar3 = wcsncmp(L"12345",&local_58,4);
    if ((iVar3 != 0) || (local_4c != 0x25)) goto LAB_141c2b679;
  }
  else {
LAB_141c2b679:
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_c8,L"WideStrncpyTestLen");
    (*pcVar2)(pFVar1,&local_c8,0);
    if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Data.AllocatorInstance.Data);
    }
  }
  if ((local_94 == '\0') && (local_93 == '%')) {
    iVar3 = strncmp("12345",&local_98,4);
    if ((iVar3 != 0) || (local_92 != '%')) goto LAB_141c2b6e3;
  }
  else {
LAB_141c2b6e3:
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_c8,L"Utf8StrncpyTestLen");
    (*pcVar2)(pFVar1,&local_c8,0);
    if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Data.AllocatorInstance.Data);
    }
  }
  if ((local_74 == '\0') && (local_73 == '%')) {
    iVar3 = strncmp("12345",&local_78,4);
    if ((iVar3 != 0) || (local_72 != '%')) goto LAB_141c2b74d;
  }
  else {
LAB_141c2b74d:
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_c8,L"AnsiStrncpyTestLen");
    (*pcVar2)(pFVar1,&local_c8,0);
    if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Data.AllocatorInstance.Data);
    }
  }
  `FPlatformStringTestStrcpy::TestBody'::__l2::<lambda_1>::operator()(&local_b8);
  wcsncpy(&local_58,L"12345",3);
  local_52 = 0;
  strncpy(&local_98,"12345",4);
  local_95 = '\0';
  strncpy(&local_78,"12345",4);
  local_75 = '\0';
  if ((local_52 == 0) && (local_50 == 0x25)) {
    iVar3 = wcsncmp(L"12345",&local_58,3);
    if ((iVar3 != 0) || (local_4c != 0x25)) goto LAB_141c2b813;
  }
  else {
LAB_141c2b813:
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_c8,L"WideStrncpyTestLenMinus1");
    (*pcVar2)(pFVar1,&local_c8,0);
    if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Data.AllocatorInstance.Data);
    }
  }
  if ((local_95 == '\0') && (local_94 == '%')) {
    iVar3 = strncmp("12345",&local_98,3);
    if ((iVar3 != 0) || (local_92 != '%')) goto LAB_141c2b87d;
  }
  else {
LAB_141c2b87d:
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_c8,L"Utf8StrncpyTestLenMinus1");
    (*pcVar2)(pFVar1,&local_c8,0);
    if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Data.AllocatorInstance.Data);
    }
  }
  if ((local_75 == '\0') && (local_74 == '%')) {
    iVar3 = strncmp("12345",&local_78,3);
    if ((iVar3 == 0) && (local_72 == '%')) goto LAB_141c2b924;
  }
  pFVar4 = FAutomationTestFramework::Get();
  pFVar1 = pFVar4->CurrentTest;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
  ::FString::FString(&local_c8,L"AnsiStrncpyTestLenMinus1");
  (*pcVar2)(pFVar1,&local_c8,0);
  if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
LAB_141c2b924:
  `FPlatformStringTestStrcpy::TestBody'::__l2::<lambda_1>::operator()(&local_b8);
  wcsncpy(&local_58,L"12345",1);
  local_56 = 0;
  strncpy(&local_98,"12345",2);
  local_97 = '\0';
  strncpy(&local_78,"12345",2);
  local_77 = '\0';
  if ((((local_58 != L'1') || (local_56 != 0)) || (local_54 != 0x25)) || (local_4e != 0x25)) {
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_c8,L"WideStrncpyTwoLen");
    (*pcVar2)(pFVar1,&local_c8,0);
    if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Data.AllocatorInstance.Data);
    }
  }
  if (((local_98 != '1') || (local_97 != '\0')) || ((local_96 != '%' || (local_93 != '%')))) {
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_c8,L"Utf8StrncpyTwoLen");
    (*pcVar2)(pFVar1,&local_c8,0);
    if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Data.AllocatorInstance.Data);
    }
  }
  if (((local_78 != '1') || (local_77 != '\0')) || ((local_76 != '%' || (local_73 != '%')))) {
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_c8,L"AnsiStrncpyTwoLen");
    (*pcVar2)(pFVar1,&local_c8,0);
    if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Data.AllocatorInstance.Data);
    }
  }
  `FPlatformStringTestStrcpy::TestBody'::__l2::<lambda_1>::operator()(&local_b8);
  wcsncpy(&local_58,L"12345",0);
  local_58 = L'\0';
  strncpy(&local_98,"12345",1);
  local_98 = '\0';
  strncpy(&local_78,"12345",1);
  local_78 = '\0';
  if (((local_58 != L'\0') || (local_56 != 0x25)) || (local_4e != 0x25)) {
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_c8,L"WideStrncpyOneLen");
    (*pcVar2)(pFVar1,&local_c8,0);
    if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Data.AllocatorInstance.Data);
    }
  }
  if (((local_98 != '\0') || (local_97 != '%')) || (local_93 != '%')) {
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_c8,L"Utf8StrncpyOneLen");
    (*pcVar2)(pFVar1,&local_c8,0);
    if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Data.AllocatorInstance.Data);
    }
  }
  if (((local_78 != '\0') || (local_77 != '%')) || (local_73 != '%')) {
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_c8,L"AnsiStrncpyOneLen");
    (*pcVar2)(pFVar1,&local_c8,0);
    if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Data.AllocatorInstance.Data);
    }
  }
  return;
}

