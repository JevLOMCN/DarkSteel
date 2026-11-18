// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 9

// GetTestFlags @ 14189dba0

EAutomationTestFlags __thiscall FCStringStrcpyTest::GetTestFlags(FCStringStrcpyTest *this)

{
  return EngineFilter|ProgramContext|CommandletContext|ServerContext|ClientContext|EditorContext;
}

// IsStressTest @ 14189dbb0

bool __thiscall FCStringStrcpyTest::IsStressTest(FCStringStrcpyTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 14189dbc0

uint __thiscall FCStringStrcpyTest::GetRequiredDeviceNum(FCStringStrcpyTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 14189dbd0

FString * __thiscall
FCStringStrcpyTest::GetTestSourceFileName(FCStringStrcpyTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\CStringTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 14189dc00

int __thiscall FCStringStrcpyTest::GetTestSourceFileLine(FCStringStrcpyTest *this)

{
  return 0xe4;
}

// GetTests @ 14189dc10

/* WARNING: Removing unreachable block (ram,0x00014189dcfd) */
/* WARNING: Removing unreachable block (ram,0x00014189ddc8) */

void __thiscall
FCStringStrcpyTest::GetTests
          (FCStringStrcpyTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"System.Core.Misc.CString.Strcpy");
  pFVar4 = (param_1->AllocatorInstance).Data;
  if (((pFVar4 <= (FScriptContainerElement *)&local_18) &&
      ((FScriptContainerElement *)&local_18 < pFVar4 + (longlong)param_1->ArrayMax * 0x10)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar3 = param_1->ArrayNum;
  if (iVar3 == param_1->ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar3 + 1;
  pFVar4 = (param_1->AllocatorInstance).Data + (longlong)iVar3 * 0x10;
  *(undefined8 *)pFVar4 = 0;
  *(FScriptContainerElement **)pFVar4 = local_18.Data.AllocatorInstance.Data;
  *(int *)(pFVar4 + 8) = local_18.Data.ArrayNum;
  *(int *)(pFVar4 + 0xc) = local_18.Data.ArrayMax;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar4 = (param_2->AllocatorInstance).Data;
  local_28 = 0;
  local_20 = 0;
  if (((pFVar4 <= (FScriptContainerElement *)&local_28) &&
      ((FScriptContainerElement *)&local_28 < pFVar4 + (longlong)param_2->ArrayMax * 0x10)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar3 = param_2->ArrayNum;
  if (iVar3 == param_2->ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  param_2->ArrayNum = iVar3 + 1;
  pFVar4 = (param_2->AllocatorInstance).Data + (longlong)iVar3 * 0x10;
  *(undefined8 *)pFVar4 = 0;
  *(undefined8 *)pFVar4 = local_28;
  *(undefined4 *)(pFVar4 + 8) = (undefined4)local_20;
  *(undefined4 *)(pFVar4 + 0xc) = local_20._4_4_;
  return;
}

// RunTest @ 14189ddf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall FCStringStrcpyTest::RunTest(FCStringStrcpyTest *this,FString *param_1)

{
  int iVar1;
  bool bVar2;
  undefined1 auStack_d8 [32];
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
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_d8;
  local_b8 = &local_58;
  local_a0 = 0x20;
  local_b0 = &local_98;
  local_a8 = &local_78;
  `FCStringStrcpyTest::RunTest'::__l2::<lambda_1>::operator()(&local_b8);
  wcscpy(&local_58,L"12345");
  strcpy(&local_98,"12345");
  strcpy(&local_78,"12345");
  if (local_4e == 0) {
    iVar1 = wcscmp(L"12345",&local_58);
    if ((iVar1 != 0) || (local_4c != 0x25)) goto LAB_14189de97;
    bVar2 = true;
  }
  else {
LAB_14189de97:
    bVar2 = false;
  }
  FAutomationTestBase::TestTrue((FAutomationTestBase *)this,L"WideStrcpy",bVar2);
  if (local_93 == '\0') {
    iVar1 = strcmp("12345",&local_98);
    if ((iVar1 != 0) || (local_92 != '%')) goto LAB_14189dece;
    bVar2 = true;
  }
  else {
LAB_14189dece:
    bVar2 = false;
  }
  FAutomationTestBase::TestTrue((FAutomationTestBase *)this,L"Utf8Strcpy",bVar2);
  if (local_73 == '\0') {
    iVar1 = strcmp("12345",&local_78);
    if ((iVar1 != 0) || (local_72 != '%')) goto LAB_14189df05;
    bVar2 = true;
  }
  else {
LAB_14189df05:
    bVar2 = false;
  }
  FAutomationTestBase::TestTrue((FAutomationTestBase *)this,L"AnsiStrcpy",bVar2);
  `FCStringStrcpyTest::RunTest'::__l2::<lambda_1>::operator()(&local_b8);
  wcsncpy(&local_58,L"12345",0xe);
  local_3c = 0;
  strncpy(&local_98,"12345",0xf);
  local_8a = 0;
  strncpy(&local_78,"12345",0xf);
  local_6a = 0;
  if (local_4e == 0) {
    iVar1 = wcscmp(L"12345",&local_58);
    if ((iVar1 != 0) || (local_3a != 0x25)) goto LAB_14189df99;
    bVar2 = true;
  }
  else {
LAB_14189df99:
    bVar2 = false;
  }
  FAutomationTestBase::TestTrue((FAutomationTestBase *)this,L"WideStrncpyTestLenPlus10",bVar2);
  if (local_93 == '\0') {
    iVar1 = strcmp("12345",&local_98);
    if ((iVar1 != 0) || (local_89 != '%')) goto LAB_14189dfd0;
    bVar2 = true;
  }
  else {
LAB_14189dfd0:
    bVar2 = false;
  }
  FAutomationTestBase::TestTrue((FAutomationTestBase *)this,L"Utf8StrncpyTestLenPlus10",bVar2);
  if (local_73 == '\0') {
    iVar1 = strcmp("12345",&local_78);
    if ((iVar1 != 0) || (local_69 != '%')) goto LAB_14189e007;
    bVar2 = true;
  }
  else {
LAB_14189e007:
    bVar2 = false;
  }
  FAutomationTestBase::TestTrue((FAutomationTestBase *)this,L"AnsiStrncpyTestLenPlus10",bVar2);
  `FCStringStrcpyTest::RunTest'::__l2::<lambda_1>::operator()(&local_b8);
  wcsncpy(&local_58,L"12345",5);
  local_4e = 0;
  strncpy(&local_98,"12345",6);
  local_93 = '\0';
  strncpy(&local_78,"12345",6);
  local_73 = '\0';
  if (local_4e == 0) {
    iVar1 = wcscmp(L"12345",&local_58);
    if ((iVar1 != 0) || (local_4c != 0x25)) goto LAB_14189e099;
    bVar2 = true;
  }
  else {
LAB_14189e099:
    bVar2 = false;
  }
  FAutomationTestBase::TestTrue((FAutomationTestBase *)this,L"WideStrncpyTestLenPlus1",bVar2);
  if (local_93 == '\0') {
    iVar1 = strcmp("12345",&local_98);
    if ((iVar1 != 0) || (local_92 != '%')) goto LAB_14189e0d0;
    bVar2 = true;
  }
  else {
LAB_14189e0d0:
    bVar2 = false;
  }
  FAutomationTestBase::TestTrue((FAutomationTestBase *)this,L"Utf8StrncpyTestLenPlus1",bVar2);
  if (local_73 == '\0') {
    iVar1 = strcmp("12345",&local_78);
    if ((iVar1 != 0) || (local_72 != '%')) goto LAB_14189e107;
    bVar2 = true;
  }
  else {
LAB_14189e107:
    bVar2 = false;
  }
  FAutomationTestBase::TestTrue((FAutomationTestBase *)this,L"AnsiStrncpyTestLenPlus1",bVar2);
  `FCStringStrcpyTest::RunTest'::__l2::<lambda_1>::operator()(&local_b8);
  wcsncpy(&local_58,L"12345",4);
  local_50 = 0;
  strncpy(&local_98,"12345",5);
  local_94 = '\0';
  strncpy(&local_78,"12345",5);
  local_74 = '\0';
  if ((local_50 == 0) && (local_4e == 0x25)) {
    iVar1 = wcsncmp(L"12345",&local_58,4);
    if ((iVar1 != 0) || (local_4c != 0x25)) goto LAB_14189e1a7;
    bVar2 = true;
  }
  else {
LAB_14189e1a7:
    bVar2 = false;
  }
  FAutomationTestBase::TestTrue((FAutomationTestBase *)this,L"WideStrncpyTestLen",bVar2);
  if ((local_94 == '\0') && (local_93 == '%')) {
    iVar1 = strncmp("12345",&local_98,4);
    if ((iVar1 != 0) || (local_92 != '%')) goto LAB_14189e1eb;
    bVar2 = true;
  }
  else {
LAB_14189e1eb:
    bVar2 = false;
  }
  FAutomationTestBase::TestTrue((FAutomationTestBase *)this,L"Utf8StrncpyTestLen",bVar2);
  if ((local_74 == '\0') && (local_73 == '%')) {
    iVar1 = strncmp("12345",&local_78,4);
    if ((iVar1 != 0) || (local_72 != '%')) goto LAB_14189e22f;
    bVar2 = true;
  }
  else {
LAB_14189e22f:
    bVar2 = false;
  }
  FAutomationTestBase::TestTrue((FAutomationTestBase *)this,L"AnsiStrncpyTestLen",bVar2);
  `FCStringStrcpyTest::RunTest'::__l2::<lambda_1>::operator()(&local_b8);
  wcsncpy(&local_58,L"12345",3);
  local_52 = 0;
  strncpy(&local_98,"12345",4);
  local_95 = '\0';
  strncpy(&local_78,"12345",4);
  local_75 = '\0';
  if ((local_52 == 0) && (local_50 == 0x25)) {
    iVar1 = wcsncmp(L"12345",&local_58,3);
    if ((iVar1 != 0) || (local_4c != 0x25)) goto LAB_14189e2cf;
    bVar2 = true;
  }
  else {
LAB_14189e2cf:
    bVar2 = false;
  }
  FAutomationTestBase::TestTrue((FAutomationTestBase *)this,L"WideStrncpyTestLenMinus1",bVar2);
  if ((local_95 == '\0') && (local_94 == '%')) {
    iVar1 = strncmp("12345",&local_98,3);
    if ((iVar1 != 0) || (local_92 != '%')) goto LAB_14189e313;
    bVar2 = true;
  }
  else {
LAB_14189e313:
    bVar2 = false;
  }
  FAutomationTestBase::TestTrue((FAutomationTestBase *)this,L"Utf8StrncpyTestLenMinus1",bVar2);
  if ((local_75 == '\0') && (local_74 == '%')) {
    iVar1 = strncmp("12345",&local_78,3);
    if ((iVar1 == 0) && (local_72 == '%')) {
      bVar2 = true;
      goto LAB_14189e35a;
    }
  }
  bVar2 = false;
LAB_14189e35a:
  FAutomationTestBase::TestTrue((FAutomationTestBase *)this,L"AnsiStrncpyTestLenMinus1",bVar2);
  `FCStringStrcpyTest::RunTest'::__l2::<lambda_1>::operator()(&local_b8);
  wcsncpy(&local_58,L"12345",1);
  local_56 = 0;
  strncpy(&local_98,"12345",2);
  local_97 = '\0';
  strncpy(&local_78,"12345",2);
  local_77 = '\0';
  if ((((local_58 == L'1') && (local_56 == 0)) && (local_54 == 0x25)) && (local_4e == 0x25)) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  FAutomationTestBase::TestTrue((FAutomationTestBase *)this,L"WideStrncpyTwoLen",bVar2);
  if (((local_98 == '1') && (local_97 == '\0')) && ((local_96 == '%' && (local_93 == '%')))) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  FAutomationTestBase::TestTrue((FAutomationTestBase *)this,L"Utf8StrncpyTwoLen",bVar2);
  if (((local_78 == '1') && (local_77 == '\0')) && ((local_76 == '%' && (local_73 == '%')))) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  FAutomationTestBase::TestTrue((FAutomationTestBase *)this,L"AnsiStrncpyTwoLen",bVar2);
  `FCStringStrcpyTest::RunTest'::__l2::<lambda_1>::operator()(&local_b8);
  wcsncpy(&local_58,L"12345",0);
  local_58 = L'\0';
  strncpy(&local_98,"12345",1);
  local_98 = '\0';
  strncpy(&local_78,"12345",1);
  local_78 = '\0';
  if (((local_58 == L'\0') && (local_56 == 0x25)) && (local_4e == 0x25)) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  FAutomationTestBase::TestTrue((FAutomationTestBase *)this,L"WideStrncpyOneLen",bVar2);
  if (((local_98 == '\0') && (local_97 == '%')) && (local_93 == '%')) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  FAutomationTestBase::TestTrue((FAutomationTestBase *)this,L"Utf8StrncpyOneLen",bVar2);
  if (((local_78 == '\0') && (local_77 == '%')) && (local_73 == '%')) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  FAutomationTestBase::TestTrue((FAutomationTestBase *)this,L"AnsiStrncpyOneLen",bVar2);
  return true;
}

// GetBeautifiedTestName @ 14189e550

FString * __thiscall
FCStringStrcpyTest::GetBeautifiedTestName(FCStringStrcpyTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"System.Core.Misc.CString.Strcpy");
  return __return_storage_ptr__;
}

// operator() @ 1418c1470

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall `FCStringStrcpyTest::RunTest'::__l2::<lambda_1>::operator()(void *this)

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

