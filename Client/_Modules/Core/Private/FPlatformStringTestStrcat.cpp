// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 11

// GetTestFlags @ 141bccb20

EAutomationTestFlags __thiscall
FPlatformStringTestStrcat::GetTestFlags(FPlatformStringTestStrcat *this)

{
  return this->TestFlags;
}

// IsStressTest @ 141bccb30

bool __thiscall FPlatformStringTestStrcat::IsStressTest(FPlatformStringTestStrcat *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141bccb40

uint __thiscall FPlatformStringTestStrcat::GetRequiredDeviceNum(FPlatformStringTestStrcat *this)

{
  return 1;
}

// GetTestSourceFileName @ 141bccb80

FString * __thiscall
FPlatformStringTestStrcat::GetTestSourceFileName
          (FPlatformStringTestStrcat *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\HAL\\PlatformStringTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141bccbe0

int __thiscall FPlatformStringTestStrcat::GetTestSourceFileLine(FPlatformStringTestStrcat *this)

{
  return 0x9a;
}

// GetTests @ 141bccbf0

/* WARNING: Removing unreachable block (ram,0x000141bccd6e) */

void __thiscall
FPlatformStringTestStrcat::GetTests
          (FPlatformStringTestStrcat *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
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

// RunTest @ 141bccd90

bool __thiscall FPlatformStringTestStrcat::RunTest(FPlatformStringTestStrcat *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 141bccdc0

FString * __thiscall
FPlatformStringTestStrcat::GetBeautifiedTestName
          (FPlatformStringTestStrcat *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FPlatformStringTestStrcat @ 141be5c80

FPlatformStringTestStrcat * __thiscall
FPlatformStringTestStrcat::FPlatformStringTestStrcat
          (FPlatformStringTestStrcat *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7FPlatformStringTestStrcat__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[ApplicationContextMask][EngineFilter]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"System::Core::HAL::PlatformString::Strcat");
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

// operator() @ 141bee020

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall `FPlatformStringTestStrcat::TestBody'::__l2::<lambda_1>::operator()(void *this)

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
  longlong lVar11;
  longlong lVar12;
  undefined8 uVar13;
  longlong lVar14;
  
  plVar1 = (longlong *)((longlong)this + 8);
  **(undefined2 **)this = **(undefined2 **)((longlong)this + 0x18);
  *(undefined1 *)*plVar1 = **(undefined1 **)((longlong)this + 0x20);
  plVar2 = (longlong *)((longlong)this + 0x10);
  *(undefined1 *)*plVar2 = **(undefined1 **)((longlong)this + 0x28);
  *(undefined2 *)(*(longlong *)this + 2) = *(undefined2 *)(*(longlong *)((longlong)this + 0x18) + 2)
  ;
  *(undefined1 *)(*plVar1 + 1) = *(undefined1 *)(*(longlong *)((longlong)this + 0x20) + 1);
  *(undefined1 *)(*plVar2 + 1) = *(undefined1 *)(*(longlong *)((longlong)this + 0x28) + 1);
  *(undefined2 *)(*(longlong *)this + 4) = *(undefined2 *)(*(longlong *)((longlong)this + 0x18) + 4)
  ;
  *(undefined1 *)(*plVar1 + 2) = *(undefined1 *)(*(longlong *)((longlong)this + 0x20) + 2);
  *(undefined1 *)(*plVar2 + 2) = *(undefined1 *)(*(longlong *)((longlong)this + 0x28) + 2);
  *(undefined2 *)(*(longlong *)this + 6) = *(undefined2 *)(*(longlong *)((longlong)this + 0x18) + 6)
  ;
  *(undefined1 *)(*plVar1 + 3) = *(undefined1 *)(*(longlong *)((longlong)this + 0x20) + 3);
  *(undefined1 *)(*plVar2 + 3) = *(undefined1 *)(*(longlong *)((longlong)this + 0x28) + 3);
  *(undefined2 *)(*(longlong *)this + 8) = *(undefined2 *)(*(longlong *)((longlong)this + 0x18) + 8)
  ;
  *(undefined1 *)(*plVar1 + 4) = *(undefined1 *)(*(longlong *)((longlong)this + 0x20) + 4);
  *(undefined1 *)(*plVar2 + 4) = *(undefined1 *)(*(longlong *)((longlong)this + 0x28) + 4);
  uVar13 = _UNK_1506afe48;
  lVar12 = ___xmm_25252525252525252525252525252525;
  lVar9 = *plVar1;
  lVar10 = *plVar2;
  plVar3 = (longlong *)(lVar9 + 0x1f);
  plVar4 = (longlong *)(lVar10 + 5);
  plVar5 = (longlong *)(lVar10 + 0x1f);
  plVar6 = (longlong *)(lVar9 + 5);
  if ((plVar3 < plVar4) || (lVar14 = 5, plVar5 < plVar6)) {
    lVar11 = *(longlong *)this;
    plVar7 = (longlong *)(lVar11 + 0x3e);
    plVar8 = (longlong *)(lVar11 + 10);
    if (((((plVar7 < plVar4) || (lVar14 = 5, plVar5 < plVar8)) &&
         ((this < plVar4 || (lVar14 = 5, plVar5 < this)))) &&
        ((((plVar1 < plVar4 || (lVar14 = 5, plVar5 < plVar1)) &&
          (((plVar2 < plVar4 || (lVar14 = 5, plVar5 < plVar2)) &&
           ((plVar7 < plVar6 || (lVar14 = 5, plVar3 < plVar8)))))) &&
         (((this < plVar6 || (lVar14 = 5, plVar3 < this)) &&
          ((plVar1 < plVar6 || (lVar14 = 5, plVar3 < plVar1)))))))) &&
       ((((plVar2 < plVar6 || (lVar14 = 5, plVar3 < plVar2)) &&
         ((this < plVar8 || (lVar14 = 5, plVar7 < this)))) &&
        (((plVar1 < plVar8 || (lVar14 = 5, plVar7 < plVar1)) &&
         ((plVar2 < plVar8 || (lVar14 = 5, plVar7 < plVar2)))))))) {
      *plVar6 = ___xmm_25252525252525252525252525252525;
      *(undefined8 *)(lVar9 + 0xd) = uVar13;
      *plVar4 = lVar12;
      *(undefined8 *)(lVar10 + 0xd) = uVar13;
      *(undefined4 *)plVar8 = 0x250025;
      *(undefined4 *)(lVar11 + 0xe) = 0x250025;
      *(undefined4 *)(lVar11 + 0x12) = 0x250025;
      *(undefined4 *)(lVar11 + 0x16) = 0x250025;
      *(undefined4 *)(lVar11 + 0x1a) = 0x250025;
      *(undefined4 *)(lVar11 + 0x1e) = 0x250025;
      *(undefined4 *)(lVar11 + 0x22) = 0x250025;
      *(undefined4 *)(lVar11 + 0x26) = 0x250025;
      *(undefined4 *)(lVar11 + 0x2a) = 0x250025;
      *(undefined4 *)(lVar11 + 0x2e) = 0x250025;
      *(undefined4 *)(lVar11 + 0x32) = 0x250025;
      *(undefined4 *)(lVar11 + 0x36) = 0x250025;
      *(longlong *)(lVar9 + 0x15) = lVar12;
      *(longlong *)(lVar10 + 0x15) = lVar12;
      lVar14 = 0x1d;
    }
  }
  do {
    *(undefined2 *)(*(longlong *)this + lVar14 * 2) = 0x25;
    *(undefined1 *)(lVar14 + *plVar1) = 0x25;
    *(undefined1 *)(lVar14 + *plVar2) = 0x25;
    lVar14 = lVar14 + 1;
  } while (lVar14 < 0x20);
  return;
}

// TestBody @ 141c2a4e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000141c2ae20) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FPlatformStringTestStrcat::TestBody(FPlatformStringTestStrcat *this,FString *param_1)

{
  FAutomationTestBase *pFVar1;
  code *pcVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  FAutomationTestFramework *pFVar7;
  size_t sVar8;
  short *psVar9;
  short sVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  short sVar14;
  longlong lVar15;
  bool bVar16;
  undefined1 auStack_118 [32];
  FString local_f8;
  undefined2 *local_e8;
  longlong local_e0;
  longlong local_d8;
  wchar_t *local_d0;
  char *local_c8;
  char *local_c0;
  undefined4 local_b8;
  undefined4 uStack_b1;
  char local_ac;
  char cStack_ab;
  char local_aa;
  char local_a9;
  char local_a8;
  char local_a7;
  char local_a6;
  undefined4 uStack_91;
  char local_8c;
  char cStack_8b;
  char local_8a;
  char local_89;
  char local_88;
  char local_87;
  char local_86;
  undefined8 uStack_6a;
  short local_60;
  short sStack_5e;
  short local_5c;
  short local_5a;
  short local_58;
  short local_56;
  short local_54;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_118;
  local_e8 = (undefined2 *)((longlong)&uStack_6a + 2);
  local_e0 = (longlong)&uStack_b1 + 1;
  local_d8 = (longlong)&uStack_91 + 1;
  local_d0 = L"ABCD";
  local_c8 = "ABCD";
  local_c0 = "ABCD";
  local_b8 = 0x20;
  `FPlatformStringTestStrcat::TestBody'::__l2::<lambda_1>::operator()(&local_e8);
  puVar4 = &uStack_6a;
  do {
    puVar11 = puVar4;
    puVar4 = (undefined8 *)((longlong)puVar11 + 2);
  } while (*(short *)((longlong)puVar11 + 2) != 0);
  *(undefined8 *)((longlong)puVar11 + 2) = _u_12345;
  *(undefined4 *)((longlong)puVar11 + 10) = DAT_1506a6c48;
  puVar3 = &uStack_b1;
  do {
    puVar6 = puVar3;
    puVar3 = (undefined4 *)((longlong)puVar6 + 1);
  } while (*(char *)((longlong)puVar6 + 1) != '\0');
  *(undefined4 *)((longlong)puVar6 + 1) = _s_12345;
  *(undefined2 *)((longlong)puVar6 + 5) = DAT_1506a6c50;
  puVar3 = &uStack_91;
  do {
    puVar6 = puVar3;
    puVar3 = (undefined4 *)((longlong)puVar6 + 1);
  } while (*(char *)((longlong)puVar6 + 1) != '\0');
  bVar16 = local_56 != 0;
  *(undefined4 *)((longlong)puVar6 + 1) = _s_12345;
  *(undefined2 *)((longlong)puVar6 + 5) = DAT_1506a6c50;
  if (((bVar16) || (iVar5 = wcscmp(L"ABCD12345",(wchar_t *)((longlong)&uStack_6a + 2)), iVar5 != 0))
     || (local_54 != 0x25)) {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar1 = pFVar7->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_f8,L"WideStrcat");
    (*pcVar2)(pFVar1,&local_f8,0);
    if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.Data.AllocatorInstance.Data);
    }
  }
  if (((local_a7 != '\0') ||
      (iVar5 = strcmp("ABCD12345",(char *)((longlong)&uStack_b1 + 1)), iVar5 != 0)) ||
     (local_a6 != '%')) {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar1 = pFVar7->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_f8,L"Utf8Strcat");
    (*pcVar2)(pFVar1,&local_f8,0);
    if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.Data.AllocatorInstance.Data);
    }
  }
  if (((local_87 != '\0') ||
      (iVar5 = strcmp("ABCD12345",(char *)((longlong)&uStack_91 + 1)), iVar5 != 0)) ||
     (local_86 != '%')) {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar1 = pFVar7->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_f8,L"AnsiStrcat");
    (*pcVar2)(pFVar1,&local_f8,0);
    if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.Data.AllocatorInstance.Data);
    }
  }
  `FPlatformStringTestStrcat::TestBody'::__l2::<lambda_1>::operator()(&local_e8);
  sVar8 = wcslen((wchar_t *)((longlong)&uStack_6a + 2));
  uVar13 = 0;
  psVar9 = (short *)((longlong)&uStack_6a + (longlong)(int)sVar8 * 2 + 2);
  sVar14 = 0x31;
  lVar15 = (longlong)&u_12345 - (longlong)psVar9;
  uVar12 = uVar13;
  sVar10 = sVar14;
  do {
    uVar12 = uVar12 + 1;
    *psVar9 = sVar10;
    psVar9 = psVar9 + 1;
    if (0xe < uVar12) break;
    sVar10 = *(short *)(lVar15 + (longlong)psVar9);
  } while (sVar10 != 0);
  *psVar9 = 0;
  strncat((char *)((longlong)&uStack_b1 + 1),"12345",0xf);
  strncat((char *)((longlong)&uStack_91 + 1),"12345",0xf);
  if (((local_56 != 0) ||
      (iVar5 = wcscmp(L"ABCD12345",(wchar_t *)((longlong)&uStack_6a + 2)), iVar5 != 0)) ||
     (local_54 != 0x25)) {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar1 = pFVar7->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_f8,L"WideStrncatTestLenPlus10");
    (*pcVar2)(pFVar1,&local_f8,0);
    if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.Data.AllocatorInstance.Data);
    }
  }
  if (((local_a7 != '\0') ||
      (iVar5 = strcmp("ABCD12345",(char *)((longlong)&uStack_b1 + 1)), iVar5 != 0)) ||
     (local_a6 != '%')) {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar1 = pFVar7->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_f8,L"Utf8StrncatTestLenPlus10");
    (*pcVar2)(pFVar1,&local_f8,0);
    if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.Data.AllocatorInstance.Data);
    }
  }
  if (((local_87 != '\0') ||
      (iVar5 = strcmp("ABCD12345",(char *)((longlong)&uStack_91 + 1)), iVar5 != 0)) ||
     (local_86 != '%')) {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar1 = pFVar7->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_f8,L"AnsiStrncatTestLenPlus10");
    (*pcVar2)(pFVar1,&local_f8,0);
    if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.Data.AllocatorInstance.Data);
    }
  }
  `FPlatformStringTestStrcat::TestBody'::__l2::<lambda_1>::operator()(&local_e8);
  sVar8 = wcslen((wchar_t *)((longlong)&uStack_6a + 2));
  psVar9 = (short *)((longlong)&uStack_6a + (longlong)(int)sVar8 * 2 + 2);
  lVar15 = (longlong)&u_12345 - (longlong)psVar9;
  uVar12 = uVar13;
  do {
    uVar12 = uVar12 + 1;
    *psVar9 = sVar14;
    psVar9 = psVar9 + 1;
    if (4 < uVar12) break;
    sVar14 = *(short *)(lVar15 + (longlong)psVar9);
  } while (sVar14 != 0);
  *psVar9 = 0;
  strncat((char *)((longlong)&uStack_b1 + 1),"12345",5);
  strncat((char *)((longlong)&uStack_91 + 1),"12345",5);
  if (((local_56 != 0) ||
      (iVar5 = wcscmp(L"ABCD12345",(wchar_t *)((longlong)&uStack_6a + 2)), iVar5 != 0)) ||
     (local_54 != 0x25)) {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar1 = pFVar7->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_f8,L"WideStrncatTestLenPlus1");
    (*pcVar2)(pFVar1,&local_f8,0);
    if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.Data.AllocatorInstance.Data);
    }
  }
  if (((local_a7 != '\0') ||
      (iVar5 = strcmp("ABCD12345",(char *)((longlong)&uStack_b1 + 1)), iVar5 != 0)) ||
     (local_a6 != '%')) {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar1 = pFVar7->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_f8,L"Utf8StrncatTestLenPlus1");
    (*pcVar2)(pFVar1,&local_f8,0);
    if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.Data.AllocatorInstance.Data);
    }
  }
  if (((local_87 != '\0') ||
      (iVar5 = strcmp("ABCD12345",(char *)((longlong)&uStack_91 + 1)), iVar5 != 0)) ||
     (local_86 != '%')) {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar1 = pFVar7->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_f8,L"AnsiStrncatTestLenPlus1");
    (*pcVar2)(pFVar1,&local_f8,0);
    if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.Data.AllocatorInstance.Data);
    }
  }
  `FPlatformStringTestStrcat::TestBody'::__l2::<lambda_1>::operator()(&local_e8);
  sVar8 = wcslen((wchar_t *)((longlong)&uStack_6a + 2));
  psVar9 = (short *)((longlong)&uStack_6a + (longlong)(int)sVar8 * 2 + 2);
  sVar14 = 0x31;
  lVar15 = (longlong)&u_12345 - (longlong)psVar9;
  uVar12 = uVar13;
  sVar10 = sVar14;
  do {
    uVar12 = uVar12 + 1;
    *psVar9 = sVar10;
    psVar9 = psVar9 + 1;
    if (3 < uVar12) break;
    sVar10 = *(short *)(lVar15 + (longlong)psVar9);
  } while (sVar10 != 0);
  *psVar9 = 0;
  strncat((char *)((longlong)&uStack_b1 + 1),"12345",4);
  strncat((char *)((longlong)&uStack_91 + 1),"12345",4);
  if ((((local_58 != 0) || (local_56 != 0x25)) ||
      (iVar5 = wcsncmp(L"ABCD12345",(wchar_t *)((longlong)&uStack_6a + 2),8), iVar5 != 0)) ||
     (local_54 != 0x25)) {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar1 = pFVar7->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_f8,L"WideStrncatTestLenMinus1");
    (*pcVar2)(pFVar1,&local_f8,0);
    if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.Data.AllocatorInstance.Data);
    }
  }
  if (((local_a8 != '\0') || (local_a7 != '%')) ||
     ((iVar5 = strncmp("ABCD12345",(char *)((longlong)&uStack_b1 + 1),8), iVar5 != 0 ||
      (local_a6 != '%')))) {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar1 = pFVar7->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_f8,L"Utf8StrncatTestLenMinus1");
    (*pcVar2)(pFVar1,&local_f8,0);
    if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.Data.AllocatorInstance.Data);
    }
  }
  if (((local_88 != '\0') || (local_87 != '%')) ||
     ((iVar5 = strncmp("ABCD12345",(char *)((longlong)&uStack_91 + 1),8), iVar5 != 0 ||
      (local_86 != '%')))) {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar1 = pFVar7->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_f8,L"AnsiStrncatTestLenMinus1");
    (*pcVar2)(pFVar1,&local_f8,0);
    if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.Data.AllocatorInstance.Data);
    }
  }
  `FPlatformStringTestStrcat::TestBody'::__l2::<lambda_1>::operator()(&local_e8);
  sVar8 = wcslen((wchar_t *)((longlong)&uStack_6a + 2));
  psVar9 = (short *)((longlong)&uStack_6a + (longlong)(int)sVar8 * 2 + 2);
  lVar15 = (longlong)&u_12345 - (longlong)psVar9;
  do {
    uVar13 = uVar13 + 1;
    *psVar9 = sVar14;
    psVar9 = psVar9 + 1;
    if (2 < uVar13) break;
    sVar14 = *(short *)(lVar15 + (longlong)psVar9);
  } while (sVar14 != 0);
  *psVar9 = 0;
  strncat((char *)((longlong)&uStack_b1 + 1),"12345",3);
  strncat((char *)((longlong)&uStack_91 + 1),"12345",3);
  if ((((local_5a != 0) || (local_58 != 0x25)) ||
      (iVar5 = wcsncmp(L"ABCD12345",(wchar_t *)((longlong)&uStack_6a + 2),7), iVar5 != 0)) ||
     (local_54 != 0x25)) {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar1 = pFVar7->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_f8,L"WideStrncatTestLenMinus2");
    (*pcVar2)(pFVar1,&local_f8,0);
    if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.Data.AllocatorInstance.Data);
    }
  }
  if (((local_a9 != '\0') || (local_a8 != '%')) ||
     ((iVar5 = strncmp("ABCD12345",(char *)((longlong)&uStack_b1 + 1),7), iVar5 != 0 ||
      (local_a6 != '%')))) {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar1 = pFVar7->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_f8,L"Utf8StrncatTestLenMinus2");
    (*pcVar2)(pFVar1,&local_f8,0);
    if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.Data.AllocatorInstance.Data);
    }
  }
  if (((local_89 != '\0') || (local_88 != '%')) ||
     ((iVar5 = strncmp("ABCD12345",(char *)((longlong)&uStack_91 + 1),7), iVar5 != 0 ||
      (local_86 != '%')))) {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar1 = pFVar7->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_f8,L"AnsiStrncatTestLenMinus2");
    (*pcVar2)(pFVar1,&local_f8,0);
    if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.Data.AllocatorInstance.Data);
    }
  }
  `FPlatformStringTestStrcat::TestBody'::__l2::<lambda_1>::operator()(&local_e8);
  sVar8 = wcslen((wchar_t *)((longlong)&uStack_6a + 2));
  lVar15 = (longlong)(int)sVar8 * 2;
  *(undefined2 *)((longlong)&uStack_6a + lVar15 + 2) = 0x31;
  *(undefined2 *)((longlong)&uStack_6a + lVar15 + 4) = 0;
  strncat((char *)((longlong)&uStack_b1 + 1),"12345",1);
  strncat((char *)((longlong)&uStack_91 + 1),"12345",1);
  if ((((sStack_5e != 0) || (local_5c != 0x25)) ||
      (iVar5 = wcsncmp(L"ABCD12345",(wchar_t *)((longlong)&uStack_6a + 2),5), iVar5 != 0)) ||
     (local_54 != 0x25)) {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar1 = pFVar7->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_f8,L"WideStrncatOneLen");
    (*pcVar2)(pFVar1,&local_f8,0);
    if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.Data.AllocatorInstance.Data);
    }
  }
  if (((cStack_ab != '\0') || (local_aa != '%')) ||
     ((iVar5 = strncmp("ABCD12345",(char *)((longlong)&uStack_b1 + 1),5), iVar5 != 0 ||
      (local_a6 != '%')))) {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar1 = pFVar7->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_f8,L"Utf8StrncatOneLen");
    (*pcVar2)(pFVar1,&local_f8,0);
    if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.Data.AllocatorInstance.Data);
    }
  }
  if (((cStack_8b != '\0') || (local_8a != '%')) ||
     ((iVar5 = strncmp("ABCD12345",(char *)((longlong)&uStack_91 + 1),5), iVar5 != 0 ||
      (local_86 != '%')))) {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar1 = pFVar7->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_f8,L"AnsiStrncatOneLen");
    (*pcVar2)(pFVar1,&local_f8,0);
    if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.Data.AllocatorInstance.Data);
    }
  }
  `FPlatformStringTestStrcat::TestBody'::__l2::<lambda_1>::operator()(&local_e8);
  strncat((char *)((longlong)&uStack_b1 + 1),"12345",0);
  strncat((char *)((longlong)&uStack_91 + 1),"12345",0);
  if ((((local_60 != 0) || (sStack_5e != 0x25)) ||
      (iVar5 = wcsncmp(L"ABCD12345",(wchar_t *)((longlong)&uStack_6a + 2),4), iVar5 != 0)) ||
     (local_54 != 0x25)) {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar1 = pFVar7->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_f8,L"WideStrncatZeroLen");
    (*pcVar2)(pFVar1,&local_f8,0);
    if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.Data.AllocatorInstance.Data);
    }
  }
  if (((local_ac != '\0') || (cStack_ab != '%')) ||
     ((iVar5 = strncmp("ABCD12345",(char *)((longlong)&uStack_b1 + 1),4), iVar5 != 0 ||
      (local_a6 != '%')))) {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar1 = pFVar7->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_f8,L"Utf8StrncatZeroLen");
    (*pcVar2)(pFVar1,&local_f8,0);
    if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.Data.AllocatorInstance.Data);
    }
  }
  if (((local_8c != '\0') || (cStack_8b != '%')) ||
     ((iVar5 = strncmp("ABCD12345",(char *)((longlong)&uStack_91 + 1),4), iVar5 != 0 ||
      (local_86 != '%')))) {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar1 = pFVar7->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_f8,L"AnsiStrncatZeroLen");
    (*pcVar2)(pFVar1,&local_f8,0);
    if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.Data.AllocatorInstance.Data);
    }
  }
  return;
}

