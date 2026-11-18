// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 9

// GetTestFlags @ 14189e5c0

EAutomationTestFlags __thiscall FCStringStrcatTest::GetTestFlags(FCStringStrcatTest *this)

{
  return EngineFilter|ProgramContext|CommandletContext|ServerContext|ClientContext|EditorContext;
}

// IsStressTest @ 14189e5d0

bool __thiscall FCStringStrcatTest::IsStressTest(FCStringStrcatTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 14189e5e0

uint __thiscall FCStringStrcatTest::GetRequiredDeviceNum(FCStringStrcatTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 14189e5f0

FString * __thiscall
FCStringStrcatTest::GetTestSourceFileName(FCStringStrcatTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\CStringTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 14189e620

int __thiscall FCStringStrcatTest::GetTestSourceFileLine(FCStringStrcatTest *this)

{
  return 0x14c;
}

// GetTests @ 14189e630

/* WARNING: Removing unreachable block (ram,0x00014189e71d) */
/* WARNING: Removing unreachable block (ram,0x00014189e7e8) */

void __thiscall
FCStringStrcatTest::GetTests
          (FCStringStrcatTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"System.Core.Misc.CString.Strcat");
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

// RunTest @ 14189e810

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall FCStringStrcatTest::RunTest(FCStringStrcatTest *this,FString *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  short sVar3;
  int iVar4;
  undefined4 *puVar5;
  size_t sVar6;
  char cVar7;
  undefined8 *puVar8;
  short *psVar9;
  char *pcVar10;
  short *psVar11;
  char *pcVar12;
  int iVar13;
  longlong lVar14;
  short sVar15;
  bool bVar16;
  undefined1 auStack_118 [32];
  undefined2 *local_f8;
  longlong local_f0;
  longlong local_e8;
  wchar_t *local_e0;
  char *local_d8;
  char *local_d0;
  undefined4 local_c8;
  undefined4 uStack_c1;
  char local_bc;
  char cStack_bb;
  char local_ba;
  char local_b9;
  char local_b8;
  char local_b7;
  char local_b6;
  undefined4 uStack_a1;
  char local_9c;
  char cStack_9b;
  char local_9a;
  char local_99;
  char local_98;
  char local_97;
  char local_96;
  undefined8 uStack_7a;
  short local_70;
  short sStack_6e;
  short local_6c;
  short local_6a;
  short local_68;
  short local_66;
  short local_64;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_118;
  local_f8 = (undefined2 *)((longlong)&uStack_7a + 2);
  local_c8 = 0x20;
  local_f0 = (longlong)&uStack_c1 + 1;
  local_e8 = (longlong)&uStack_a1 + 1;
  local_e0 = L"ABCD";
  local_d8 = "ABCD";
  local_d0 = "ABCD";
  `FCStringStrcatTest::RunTest'::__l2::<lambda_1>::operator()(&local_f8);
  puVar2 = &uStack_7a;
  do {
    puVar8 = puVar2;
    puVar2 = (undefined8 *)((longlong)puVar8 + 2);
  } while (*(short *)((longlong)puVar8 + 2) != 0);
  *(undefined8 *)((longlong)puVar8 + 2) = _u_12345;
  *(undefined4 *)((longlong)puVar8 + 10) = DAT_1506a6c48;
  puVar1 = &uStack_c1;
  do {
    puVar5 = puVar1;
    puVar1 = (undefined4 *)((longlong)puVar5 + 1);
  } while (*(char *)((longlong)puVar5 + 1) != '\0');
  *(undefined4 *)((longlong)puVar5 + 1) = _s_12345;
  *(undefined2 *)((longlong)puVar5 + 5) = DAT_1506a6c50;
  puVar1 = &uStack_a1;
  do {
    puVar5 = puVar1;
    puVar1 = (undefined4 *)((longlong)puVar5 + 1);
  } while (*(char *)((longlong)puVar5 + 1) != '\0');
  bVar16 = local_66 == 0;
  *(undefined4 *)((longlong)puVar5 + 1) = _s_12345;
  *(undefined2 *)((longlong)puVar5 + 5) = DAT_1506a6c50;
  if (bVar16) {
    iVar4 = wcscmp(L"ABCD12345",(wchar_t *)((longlong)&uStack_7a + 2));
    if ((iVar4 != 0) || (local_64 != 0x25)) goto LAB_14189e91b;
    bVar16 = true;
  }
  else {
LAB_14189e91b:
    bVar16 = false;
  }
  FAutomationTestBase::TestTrue((FAutomationTestBase *)this,L"WideStrcat",bVar16);
  if (local_b7 == '\0') {
    iVar4 = strcmp("ABCD12345",(char *)((longlong)&uStack_c1 + 1));
    if ((iVar4 != 0) || (local_b6 != '%')) goto LAB_14189e952;
    bVar16 = true;
  }
  else {
LAB_14189e952:
    bVar16 = false;
  }
  FAutomationTestBase::TestTrue((FAutomationTestBase *)this,L"Utf8Strcat",bVar16);
  if (local_97 == '\0') {
    iVar4 = strcmp("ABCD12345",(char *)((longlong)&uStack_a1 + 1));
    if ((iVar4 != 0) || (local_96 != '%')) goto LAB_14189e989;
    bVar16 = true;
  }
  else {
LAB_14189e989:
    bVar16 = false;
  }
  FAutomationTestBase::TestTrue((FAutomationTestBase *)this,L"AnsiStrcat",bVar16);
  `FCStringStrcatTest::RunTest'::__l2::<lambda_1>::operator()(&local_f8);
  psVar11 = (short *)&u_12345;
  sVar6 = wcslen((wchar_t *)((longlong)&uStack_7a + 2));
  iVar13 = 0;
  sVar15 = 0x31;
  iVar4 = (int)sVar6 + 1;
  sVar3 = 0x31;
  if (iVar4 < 0x13) {
    psVar9 = (short *)((longlong)&uStack_7a + (longlong)(int)sVar6 * 2 + 2);
    do {
      *psVar9 = sVar3;
      psVar11 = psVar11 + 1;
      sVar3 = *psVar11;
      psVar9 = psVar9 + 1;
      iVar4 = iVar4 + 1;
      if (sVar3 == 0) break;
    } while (iVar4 < 0x13);
    *psVar9 = 0;
  }
  pcVar12 = "12345";
  sVar6 = strlen((char *)((longlong)&uStack_c1 + 1));
  iVar4 = (int)sVar6 + 1;
  if (iVar4 < 0x13) {
    pcVar10 = (char *)((longlong)&uStack_c1 + (longlong)(int)sVar6 + 1);
    cVar7 = '1';
    do {
      *pcVar10 = cVar7;
      pcVar12 = pcVar12 + 1;
      cVar7 = *pcVar12;
      pcVar10 = pcVar10 + 1;
      iVar4 = iVar4 + 1;
      if (cVar7 == '\0') break;
    } while (iVar4 < 0x13);
    *pcVar10 = '\0';
  }
  pcVar12 = "12345";
  sVar6 = strlen((char *)((longlong)&uStack_a1 + 1));
  iVar4 = (int)sVar6 + 1;
  if (iVar4 < 0x13) {
    pcVar10 = (char *)((longlong)&uStack_a1 + (longlong)(int)sVar6 + 1);
    cVar7 = '1';
    do {
      *pcVar10 = cVar7;
      pcVar12 = pcVar12 + 1;
      cVar7 = *pcVar12;
      pcVar10 = pcVar10 + 1;
      iVar4 = iVar4 + 1;
      if (cVar7 == '\0') break;
    } while (iVar4 < 0x13);
    *pcVar10 = '\0';
  }
  if (local_66 == 0) {
    iVar4 = wcscmp(L"ABCD12345",(wchar_t *)((longlong)&uStack_7a + 2));
    if ((iVar4 != 0) || (local_64 != 0x25)) goto LAB_14189eab1;
    bVar16 = true;
  }
  else {
LAB_14189eab1:
    bVar16 = false;
  }
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"WideStrncatTruncateDestTestLenPlus10",bVar16);
  if (local_b7 == '\0') {
    iVar4 = strcmp("ABCD12345",(char *)((longlong)&uStack_c1 + 1));
    if ((iVar4 != 0) || (local_b6 != '%')) goto LAB_14189eae8;
    bVar16 = true;
  }
  else {
LAB_14189eae8:
    bVar16 = false;
  }
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"Utf8StrncatTruncateDestTestLenPlus10",bVar16);
  if (local_97 == '\0') {
    iVar4 = strcmp("ABCD12345",(char *)((longlong)&uStack_a1 + 1));
    if ((iVar4 != 0) || (local_96 != '%')) goto LAB_14189eb1f;
    bVar16 = true;
  }
  else {
LAB_14189eb1f:
    bVar16 = false;
  }
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"AnsiStrncatTruncateDestTestLenPlus10",bVar16);
  `FCStringStrcatTest::RunTest'::__l2::<lambda_1>::operator()(&local_f8);
  psVar11 = (short *)&u_12345;
  sVar6 = wcslen((wchar_t *)((longlong)&uStack_7a + 2));
  iVar4 = (int)sVar6 + 1;
  if (iVar4 < 10) {
    psVar9 = (short *)((longlong)&uStack_7a + (longlong)(int)sVar6 * 2 + 2);
    sVar3 = 0x31;
    do {
      *psVar9 = sVar3;
      psVar11 = psVar11 + 1;
      sVar3 = *psVar11;
      psVar9 = psVar9 + 1;
      iVar4 = iVar4 + 1;
      if (sVar3 == 0) break;
    } while (iVar4 < 10);
    *psVar9 = 0;
  }
  pcVar12 = "12345";
  sVar6 = strlen((char *)((longlong)&uStack_c1 + 1));
  iVar4 = (int)sVar6 + 1;
  if (iVar4 < 10) {
    pcVar10 = (char *)((longlong)&uStack_c1 + (longlong)(int)sVar6 + 1);
    cVar7 = '1';
    do {
      *pcVar10 = cVar7;
      pcVar12 = pcVar12 + 1;
      cVar7 = *pcVar12;
      pcVar10 = pcVar10 + 1;
      iVar4 = iVar4 + 1;
      if (cVar7 == '\0') break;
    } while (iVar4 < 10);
    *pcVar10 = '\0';
  }
  pcVar12 = "12345";
  sVar6 = strlen((char *)((longlong)&uStack_a1 + 1));
  iVar4 = (int)sVar6 + 1;
  if (iVar4 < 10) {
    pcVar10 = (char *)((longlong)&uStack_a1 + (longlong)(int)sVar6 + 1);
    cVar7 = '1';
    do {
      *pcVar10 = cVar7;
      pcVar12 = pcVar12 + 1;
      cVar7 = *pcVar12;
      pcVar10 = pcVar10 + 1;
      iVar4 = iVar4 + 1;
      if (cVar7 == '\0') break;
    } while (iVar4 < 10);
    *pcVar10 = '\0';
  }
  if (local_66 == 0) {
    iVar4 = wcscmp(L"ABCD12345",(wchar_t *)((longlong)&uStack_7a + 2));
    if ((iVar4 != 0) || (local_64 != 0x25)) goto LAB_14189ec21;
    bVar16 = true;
  }
  else {
LAB_14189ec21:
    bVar16 = false;
  }
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"WideStrncatTruncateDestTestLenPlus1",bVar16);
  if (local_b7 == '\0') {
    iVar4 = strcmp("ABCD12345",(char *)((longlong)&uStack_c1 + 1));
    if ((iVar4 != 0) || (local_b6 != '%')) goto LAB_14189ec58;
    bVar16 = true;
  }
  else {
LAB_14189ec58:
    bVar16 = false;
  }
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"Utf8StrncatTruncateDestTestLenPlus1",bVar16);
  if (local_97 == '\0') {
    iVar4 = strcmp("ABCD12345",(char *)((longlong)&uStack_a1 + 1));
    if ((iVar4 != 0) || (local_96 != '%')) goto LAB_14189ec8f;
    bVar16 = true;
  }
  else {
LAB_14189ec8f:
    bVar16 = false;
  }
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"AnsiStrncatTruncateDestTestLenPlus1",bVar16);
  `FCStringStrcatTest::RunTest'::__l2::<lambda_1>::operator()(&local_f8);
  psVar11 = (short *)&u_12345;
  sVar6 = wcslen((wchar_t *)((longlong)&uStack_7a + 2));
  iVar4 = (int)sVar6 + 1;
  if (iVar4 < 9) {
    psVar9 = (short *)((longlong)&uStack_7a + (longlong)(int)sVar6 * 2 + 2);
    sVar3 = 0x31;
    do {
      *psVar9 = sVar3;
      psVar11 = psVar11 + 1;
      sVar3 = *psVar11;
      psVar9 = psVar9 + 1;
      iVar4 = iVar4 + 1;
      if (sVar3 == 0) break;
    } while (iVar4 < 9);
    *psVar9 = 0;
  }
  pcVar12 = "12345";
  sVar6 = strlen((char *)((longlong)&uStack_c1 + 1));
  iVar4 = (int)sVar6 + 1;
  if (iVar4 < 9) {
    pcVar10 = (char *)((longlong)&uStack_c1 + (longlong)(int)sVar6 + 1);
    cVar7 = '1';
    do {
      *pcVar10 = cVar7;
      pcVar12 = pcVar12 + 1;
      cVar7 = *pcVar12;
      pcVar10 = pcVar10 + 1;
      iVar4 = iVar4 + 1;
      if (cVar7 == '\0') break;
    } while (iVar4 < 9);
    *pcVar10 = '\0';
  }
  pcVar12 = "12345";
  sVar6 = strlen((char *)((longlong)&uStack_a1 + 1));
  iVar4 = (int)sVar6 + 1;
  if (iVar4 < 9) {
    pcVar10 = (char *)((longlong)&uStack_a1 + (longlong)(int)sVar6 + 1);
    cVar7 = '1';
    do {
      *pcVar10 = cVar7;
      pcVar12 = pcVar12 + 1;
      cVar7 = *pcVar12;
      pcVar10 = pcVar10 + 1;
      iVar4 = iVar4 + 1;
      if (cVar7 == '\0') break;
    } while (iVar4 < 9);
    *pcVar10 = '\0';
  }
  if ((local_68 == 0) && (local_66 == 0x25)) {
    iVar4 = wcsncmp(L"ABCD12345",(wchar_t *)((longlong)&uStack_7a + 2),8);
    if ((iVar4 != 0) || (local_64 != 0x25)) goto LAB_14189ed9f;
    bVar16 = true;
  }
  else {
LAB_14189ed9f:
    bVar16 = false;
  }
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"WideStrncatTruncateDestTestLen",bVar16);
  if ((local_b8 == '\0') && (local_b7 == '%')) {
    iVar4 = strncmp("ABCD12345",(char *)((longlong)&uStack_c1 + 1),8);
    if ((iVar4 != 0) || (local_b6 != '%')) goto LAB_14189ede3;
    bVar16 = true;
  }
  else {
LAB_14189ede3:
    bVar16 = false;
  }
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"Utf8StrncatTruncateDestTestLen",bVar16);
  if ((local_98 == '\0') && (local_97 == '%')) {
    iVar4 = strncmp("ABCD12345",(char *)((longlong)&uStack_a1 + 1),8);
    if ((iVar4 != 0) || (local_96 != '%')) goto LAB_14189ee27;
    bVar16 = true;
  }
  else {
LAB_14189ee27:
    bVar16 = false;
  }
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"AnsiStrncatTruncateDestTestLen",bVar16);
  `FCStringStrcatTest::RunTest'::__l2::<lambda_1>::operator()(&local_f8);
  psVar11 = (short *)&u_12345;
  sVar6 = wcslen((wchar_t *)((longlong)&uStack_7a + 2));
  iVar4 = (int)sVar6 + 1;
  if (iVar4 < 8) {
    psVar9 = (short *)((longlong)&uStack_7a + (longlong)(int)sVar6 * 2 + 2);
    sVar3 = 0x31;
    do {
      *psVar9 = sVar3;
      psVar11 = psVar11 + 1;
      sVar3 = *psVar11;
      psVar9 = psVar9 + 1;
      iVar4 = iVar4 + 1;
      if (sVar3 == 0) break;
    } while (iVar4 < 8);
    *psVar9 = 0;
  }
  pcVar12 = "12345";
  sVar6 = strlen((char *)((longlong)&uStack_c1 + 1));
  iVar4 = (int)sVar6 + 1;
  if (iVar4 < 8) {
    pcVar10 = (char *)((longlong)&uStack_c1 + (longlong)(int)sVar6 + 1);
    cVar7 = '1';
    do {
      *pcVar10 = cVar7;
      pcVar12 = pcVar12 + 1;
      cVar7 = *pcVar12;
      pcVar10 = pcVar10 + 1;
      iVar4 = iVar4 + 1;
      if (cVar7 == '\0') break;
    } while (iVar4 < 8);
    *pcVar10 = '\0';
  }
  pcVar12 = "12345";
  sVar6 = strlen((char *)((longlong)&uStack_a1 + 1));
  iVar4 = (int)sVar6 + 1;
  if (iVar4 < 8) {
    pcVar10 = (char *)((longlong)&uStack_a1 + (longlong)(int)sVar6 + 1);
    cVar7 = '1';
    do {
      *pcVar10 = cVar7;
      pcVar12 = pcVar12 + 1;
      cVar7 = *pcVar12;
      pcVar10 = pcVar10 + 1;
      iVar4 = iVar4 + 1;
      if (cVar7 == '\0') break;
    } while (iVar4 < 8);
    *pcVar10 = '\0';
  }
  if ((local_6a == 0) && (local_68 == 0x25)) {
    iVar4 = wcsncmp(L"ABCD12345",(wchar_t *)((longlong)&uStack_7a + 2),7);
    if ((iVar4 != 0) || (local_64 != 0x25)) goto LAB_14189ef3f;
    bVar16 = true;
  }
  else {
LAB_14189ef3f:
    bVar16 = false;
  }
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"WideStrncatTruncateDestTestLenMinus1",bVar16);
  if ((local_b9 == '\0') && (local_b8 == '%')) {
    iVar4 = strncmp("ABCD12345",(char *)((longlong)&uStack_c1 + 1),7);
    if ((iVar4 != 0) || (local_b6 != '%')) goto LAB_14189ef83;
    bVar16 = true;
  }
  else {
LAB_14189ef83:
    bVar16 = false;
  }
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"Utf8StrncatTruncateDestTestLenMinus1",bVar16);
  if ((local_99 == '\0') && (local_98 == '%')) {
    iVar4 = strncmp("ABCD12345",(char *)((longlong)&uStack_a1 + 1),7);
    if ((iVar4 != 0) || (local_96 != '%')) goto LAB_14189efc7;
    bVar16 = true;
  }
  else {
LAB_14189efc7:
    bVar16 = false;
  }
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"AnsiStrncatTruncateDestTestLenMinus1",bVar16);
  `FCStringStrcatTest::RunTest'::__l2::<lambda_1>::operator()(&local_f8);
  psVar11 = (short *)&u_12345;
  sVar6 = wcslen((wchar_t *)((longlong)&uStack_7a + 2));
  iVar4 = (int)sVar6 + 1;
  if (iVar4 < 6) {
    psVar9 = (short *)((longlong)&uStack_7a + (longlong)(int)sVar6 * 2 + 2);
    sVar3 = 0x31;
    do {
      *psVar9 = sVar3;
      psVar11 = psVar11 + 1;
      sVar3 = *psVar11;
      psVar9 = psVar9 + 1;
      iVar4 = iVar4 + 1;
      if (sVar3 == 0) break;
    } while (iVar4 < 6);
    *psVar9 = 0;
  }
  pcVar12 = "12345";
  sVar6 = strlen((char *)((longlong)&uStack_c1 + 1));
  iVar4 = (int)sVar6 + 1;
  if (iVar4 < 6) {
    pcVar10 = (char *)((longlong)&uStack_c1 + (longlong)(int)sVar6 + 1);
    cVar7 = '1';
    do {
      *pcVar10 = cVar7;
      pcVar12 = pcVar12 + 1;
      cVar7 = *pcVar12;
      pcVar10 = pcVar10 + 1;
      iVar4 = iVar4 + 1;
      if (cVar7 == '\0') break;
    } while (iVar4 < 6);
    *pcVar10 = '\0';
  }
  pcVar12 = "12345";
  sVar6 = strlen((char *)((longlong)&uStack_a1 + 1));
  iVar4 = (int)sVar6 + 1;
  if (iVar4 < 6) {
    pcVar10 = (char *)((longlong)&uStack_a1 + (longlong)(int)sVar6 + 1);
    cVar7 = '1';
    do {
      *pcVar10 = cVar7;
      pcVar12 = pcVar12 + 1;
      cVar7 = *pcVar12;
      pcVar10 = pcVar10 + 1;
      iVar4 = iVar4 + 1;
      if (cVar7 == '\0') break;
    } while (iVar4 < 6);
    *pcVar10 = '\0';
  }
  if ((sStack_6e == 0) && (local_6c == 0x25)) {
    iVar4 = wcsncmp(L"ABCD12345",(wchar_t *)((longlong)&uStack_7a + 2),5);
    if ((iVar4 != 0) || (local_64 != 0x25)) goto LAB_14189f0df;
    bVar16 = true;
  }
  else {
LAB_14189f0df:
    bVar16 = false;
  }
  FAutomationTestBase::TestTrue((FAutomationTestBase *)this,L"WideStrncatTruncateDestTwoLen",bVar16)
  ;
  if ((cStack_bb == '\0') && (local_ba == '%')) {
    iVar4 = strncmp("ABCD12345",(char *)((longlong)&uStack_c1 + 1),5);
    if ((iVar4 != 0) || (local_b6 != '%')) goto LAB_14189f123;
    bVar16 = true;
  }
  else {
LAB_14189f123:
    bVar16 = false;
  }
  FAutomationTestBase::TestTrue((FAutomationTestBase *)this,L"Utf8StrncatTruncateDestTwoLen",bVar16)
  ;
  if ((cStack_9b == '\0') && (local_9a == '%')) {
    iVar4 = strncmp("ABCD12345",(char *)((longlong)&uStack_a1 + 1),5);
    if ((iVar4 != 0) || (local_96 != '%')) goto LAB_14189f167;
    bVar16 = true;
  }
  else {
LAB_14189f167:
    bVar16 = false;
  }
  FAutomationTestBase::TestTrue((FAutomationTestBase *)this,L"AnsiStrncatTruncateDestTwoLen",bVar16)
  ;
  `FCStringStrcatTest::RunTest'::__l2::<lambda_1>::operator()(&local_f8);
  psVar11 = (short *)&u_12345;
  sVar6 = wcslen((wchar_t *)((longlong)&uStack_7a + 2));
  iVar4 = (int)sVar6 + 1;
  if (iVar4 < 5) {
    psVar9 = (short *)((longlong)&uStack_7a + (longlong)(int)sVar6 * 2 + 2);
    sVar3 = 0x31;
    do {
      *psVar9 = sVar3;
      psVar11 = psVar11 + 1;
      sVar3 = *psVar11;
      psVar9 = psVar9 + 1;
      iVar4 = iVar4 + 1;
      if (sVar3 == 0) break;
    } while (iVar4 < 5);
    *psVar9 = 0;
  }
  pcVar12 = "12345";
  sVar6 = strlen((char *)((longlong)&uStack_c1 + 1));
  iVar4 = (int)sVar6 + 1;
  if (iVar4 < 5) {
    pcVar10 = (char *)((longlong)&uStack_c1 + (longlong)(int)sVar6 + 1);
    cVar7 = '1';
    do {
      *pcVar10 = cVar7;
      pcVar12 = pcVar12 + 1;
      cVar7 = *pcVar12;
      pcVar10 = pcVar10 + 1;
      iVar4 = iVar4 + 1;
      if (cVar7 == '\0') break;
    } while (iVar4 < 5);
    *pcVar10 = '\0';
  }
  pcVar12 = "12345";
  sVar6 = strlen((char *)((longlong)&uStack_a1 + 1));
  iVar4 = (int)sVar6 + 1;
  if (iVar4 < 5) {
    pcVar10 = (char *)((longlong)&uStack_a1 + (longlong)(int)sVar6 + 1);
    cVar7 = '1';
    do {
      *pcVar10 = cVar7;
      pcVar12 = pcVar12 + 1;
      cVar7 = *pcVar12;
      pcVar10 = pcVar10 + 1;
      iVar4 = iVar4 + 1;
      if (cVar7 == '\0') break;
    } while (iVar4 < 5);
    *pcVar10 = '\0';
  }
  if ((local_70 == 0) && (sStack_6e == 0x25)) {
    iVar4 = wcsncmp(L"ABCD12345",(wchar_t *)((longlong)&uStack_7a + 2),4);
    if ((iVar4 != 0) || (local_64 != 0x25)) goto LAB_14189f27f;
    bVar16 = true;
  }
  else {
LAB_14189f27f:
    bVar16 = false;
  }
  FAutomationTestBase::TestTrue((FAutomationTestBase *)this,L"WideStrncatTruncateDestOneLen",bVar16)
  ;
  if ((local_bc == '\0') && (cStack_bb == '%')) {
    iVar4 = strncmp("ABCD12345",(char *)((longlong)&uStack_c1 + 1),4);
    if ((iVar4 != 0) || (local_b6 != '%')) goto LAB_14189f2c3;
    bVar16 = true;
  }
  else {
LAB_14189f2c3:
    bVar16 = false;
  }
  FAutomationTestBase::TestTrue((FAutomationTestBase *)this,L"Utf8StrncatTruncateDestOneLen",bVar16)
  ;
  if ((local_9c == '\0') && (cStack_9b == '%')) {
    iVar4 = strncmp("ABCD12345",(char *)((longlong)&uStack_a1 + 1),4);
    if ((iVar4 != 0) || (local_96 != '%')) goto LAB_14189f307;
    bVar16 = true;
  }
  else {
LAB_14189f307:
    bVar16 = false;
  }
  FAutomationTestBase::TestTrue((FAutomationTestBase *)this,L"AnsiStrncatTruncateDestOneLen",bVar16)
  ;
  `FCStringStrcatTest::RunTest'::__l2::<lambda_1>::operator()(&local_f8);
  psVar11 = (short *)&u_12345;
  sVar6 = wcslen((wchar_t *)((longlong)&uStack_7a + 2));
  iVar4 = (int)sVar6 + 1;
  if (iVar4 < 4) {
    psVar9 = (short *)((longlong)&uStack_7a + (longlong)(int)sVar6 * 2 + 2);
    sVar3 = 0x31;
    do {
      *psVar9 = sVar3;
      psVar11 = psVar11 + 1;
      sVar3 = *psVar11;
      psVar9 = psVar9 + 1;
      iVar4 = iVar4 + 1;
      if (sVar3 == 0) break;
    } while (iVar4 < 4);
    *psVar9 = 0;
  }
  pcVar12 = "12345";
  sVar6 = strlen((char *)((longlong)&uStack_c1 + 1));
  iVar4 = (int)sVar6 + 1;
  if (iVar4 < 4) {
    pcVar10 = (char *)((longlong)&uStack_c1 + (longlong)(int)sVar6 + 1);
    cVar7 = '1';
    do {
      *pcVar10 = cVar7;
      pcVar12 = pcVar12 + 1;
      cVar7 = *pcVar12;
      pcVar10 = pcVar10 + 1;
      iVar4 = iVar4 + 1;
      if (cVar7 == '\0') break;
    } while (iVar4 < 4);
    *pcVar10 = '\0';
  }
  pcVar12 = "12345";
  sVar6 = strlen((char *)((longlong)&uStack_a1 + 1));
  iVar4 = (int)sVar6 + 1;
  if (iVar4 < 4) {
    pcVar10 = (char *)((longlong)&uStack_a1 + (longlong)(int)sVar6 + 1);
    cVar7 = '1';
    do {
      *pcVar10 = cVar7;
      pcVar12 = pcVar12 + 1;
      cVar7 = *pcVar12;
      pcVar10 = pcVar10 + 1;
      iVar4 = iVar4 + 1;
      if (cVar7 == '\0') break;
    } while (iVar4 < 4);
    *pcVar10 = '\0';
  }
  if ((local_70 == 0) && (sStack_6e == 0x25)) {
    iVar4 = wcsncmp(L"ABCD12345",(wchar_t *)((longlong)&uStack_7a + 2),4);
    if ((iVar4 != 0) || (local_64 != 0x25)) goto LAB_14189f41f;
    bVar16 = true;
  }
  else {
LAB_14189f41f:
    bVar16 = false;
  }
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"WideStrncatTruncateDestZeroLen",bVar16);
  if ((local_bc == '\0') && (cStack_bb == '%')) {
    iVar4 = strncmp("ABCD12345",(char *)((longlong)&uStack_c1 + 1),4);
    if ((iVar4 != 0) || (local_b6 != '%')) goto LAB_14189f463;
    bVar16 = true;
  }
  else {
LAB_14189f463:
    bVar16 = false;
  }
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"Utf8StrncatTruncateDestZeroLen",bVar16);
  if ((local_9c == '\0') && (cStack_9b == '%')) {
    iVar4 = strncmp("ABCD12345",(char *)((longlong)&uStack_a1 + 1),4);
    if ((iVar4 != 0) || (local_96 != '%')) goto LAB_14189f4a7;
    bVar16 = true;
  }
  else {
LAB_14189f4a7:
    bVar16 = false;
  }
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"AnsiStrncatTruncateDestZeroLen",bVar16);
  `FCStringStrcatTest::RunTest'::__l2::<lambda_1>::operator()(&local_f8);
  sVar6 = wcslen((wchar_t *)((longlong)&uStack_7a + 2));
  iVar4 = 0;
  psVar11 = (short *)((longlong)&uStack_7a + (longlong)(int)sVar6 * 2 + 2);
  sVar3 = 0x31;
  lVar14 = (longlong)&u_12345 - (longlong)psVar11;
  do {
    iVar4 = iVar4 + 1;
    *psVar11 = sVar3;
    psVar11 = psVar11 + 1;
    if (0xe < iVar4) break;
    sVar3 = *(short *)(lVar14 + (longlong)psVar11);
  } while (sVar3 != 0);
  *psVar11 = 0;
  sVar6 = strlen((char *)((longlong)&uStack_c1 + 1));
  iVar4 = 0;
  pcVar12 = (char *)((longlong)&uStack_c1 + (longlong)(int)sVar6 + 1);
  cVar7 = '1';
  lVar14 = (longlong)&s_12345 - (longlong)pcVar12;
  do {
    iVar4 = iVar4 + 1;
    *pcVar12 = cVar7;
    pcVar12 = pcVar12 + 1;
    if (0xe < iVar4) break;
    cVar7 = pcVar12[lVar14];
  } while (cVar7 != '\0');
  *pcVar12 = '\0';
  sVar6 = strlen((char *)((longlong)&uStack_a1 + 1));
  iVar4 = 0;
  pcVar12 = (char *)((longlong)&uStack_a1 + (longlong)(int)sVar6 + 1);
  cVar7 = '1';
  lVar14 = (longlong)&s_12345 - (longlong)pcVar12;
  do {
    iVar4 = iVar4 + 1;
    *pcVar12 = cVar7;
    pcVar12 = pcVar12 + 1;
    if (0xe < iVar4) break;
    cVar7 = pcVar12[lVar14];
  } while (cVar7 != '\0');
  *pcVar12 = '\0';
  if (local_66 == 0) {
    iVar4 = wcscmp(L"ABCD12345",(wchar_t *)((longlong)&uStack_7a + 2));
    if ((iVar4 != 0) || (local_64 != 0x25)) goto LAB_14189f5af;
    bVar16 = true;
  }
  else {
LAB_14189f5af:
    bVar16 = false;
  }
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"WideStrncatTruncateSrcTestLenPlus10",bVar16);
  if (local_b7 == '\0') {
    iVar4 = strcmp("ABCD12345",(char *)((longlong)&uStack_c1 + 1));
    if ((iVar4 != 0) || (local_b6 != '%')) goto LAB_14189f5e6;
    bVar16 = true;
  }
  else {
LAB_14189f5e6:
    bVar16 = false;
  }
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"Utf8StrncatTruncateSrcTestLenPlus10",bVar16);
  if (local_97 == '\0') {
    iVar4 = strcmp("ABCD12345",(char *)((longlong)&uStack_a1 + 1));
    if ((iVar4 != 0) || (local_96 != '%')) goto LAB_14189f61d;
    bVar16 = true;
  }
  else {
LAB_14189f61d:
    bVar16 = false;
  }
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"AnsiStrncatTruncateSrcTestLenPlus10",bVar16);
  `FCStringStrcatTest::RunTest'::__l2::<lambda_1>::operator()(&local_f8);
  sVar6 = wcslen((wchar_t *)((longlong)&uStack_7a + 2));
  iVar4 = 0;
  psVar11 = (short *)((longlong)&uStack_7a + (longlong)(int)sVar6 * 2 + 2);
  sVar3 = 0x31;
  lVar14 = (longlong)&u_12345 - (longlong)psVar11;
  do {
    iVar4 = iVar4 + 1;
    *psVar11 = sVar3;
    psVar11 = psVar11 + 1;
    if (4 < iVar4) break;
    sVar3 = *(short *)(lVar14 + (longlong)psVar11);
  } while (sVar3 != 0);
  *psVar11 = 0;
  sVar6 = strlen((char *)((longlong)&uStack_c1 + 1));
  iVar4 = 0;
  pcVar12 = (char *)((longlong)&uStack_c1 + (longlong)(int)sVar6 + 1);
  cVar7 = '1';
  lVar14 = (longlong)&s_12345 - (longlong)pcVar12;
  do {
    iVar4 = iVar4 + 1;
    *pcVar12 = cVar7;
    pcVar12 = pcVar12 + 1;
    if (4 < iVar4) break;
    cVar7 = pcVar12[lVar14];
  } while (cVar7 != '\0');
  *pcVar12 = '\0';
  sVar6 = strlen((char *)((longlong)&uStack_a1 + 1));
  iVar4 = 0;
  pcVar12 = (char *)((longlong)&uStack_a1 + (longlong)(int)sVar6 + 1);
  cVar7 = '1';
  lVar14 = (longlong)&s_12345 - (longlong)pcVar12;
  do {
    iVar4 = iVar4 + 1;
    *pcVar12 = cVar7;
    pcVar12 = pcVar12 + 1;
    if (4 < iVar4) break;
    cVar7 = pcVar12[lVar14];
  } while (cVar7 != '\0');
  *pcVar12 = '\0';
  if (local_66 == 0) {
    iVar4 = wcscmp(L"ABCD12345",(wchar_t *)((longlong)&uStack_7a + 2));
    if ((iVar4 != 0) || (local_64 != 0x25)) goto LAB_14189f71f;
    bVar16 = true;
  }
  else {
LAB_14189f71f:
    bVar16 = false;
  }
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"WideStrncatTruncateSrcTestLenPlus1",bVar16);
  if (local_b7 == '\0') {
    iVar4 = strcmp("ABCD12345",(char *)((longlong)&uStack_c1 + 1));
    if ((iVar4 != 0) || (local_b6 != '%')) goto LAB_14189f756;
    bVar16 = true;
  }
  else {
LAB_14189f756:
    bVar16 = false;
  }
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"Utf8StrncatTruncateSrcTestLenPlus1",bVar16);
  if (local_97 == '\0') {
    iVar4 = strcmp("ABCD12345",(char *)((longlong)&uStack_a1 + 1));
    if ((iVar4 != 0) || (local_96 != '%')) goto LAB_14189f78d;
    bVar16 = true;
  }
  else {
LAB_14189f78d:
    bVar16 = false;
  }
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"AnsiStrncatTruncateSrcTestLenPlus1",bVar16);
  `FCStringStrcatTest::RunTest'::__l2::<lambda_1>::operator()(&local_f8);
  sVar6 = wcslen((wchar_t *)((longlong)&uStack_7a + 2));
  iVar4 = 0;
  psVar11 = (short *)((longlong)&uStack_7a + (longlong)(int)sVar6 * 2 + 2);
  sVar3 = 0x31;
  lVar14 = (longlong)&u_12345 - (longlong)psVar11;
  do {
    iVar4 = iVar4 + 1;
    *psVar11 = sVar3;
    psVar11 = psVar11 + 1;
    if (3 < iVar4) break;
    sVar3 = *(short *)(lVar14 + (longlong)psVar11);
  } while (sVar3 != 0);
  *psVar11 = 0;
  sVar6 = strlen((char *)((longlong)&uStack_c1 + 1));
  iVar4 = 0;
  pcVar12 = (char *)((longlong)&uStack_c1 + (longlong)(int)sVar6 + 1);
  cVar7 = '1';
  lVar14 = (longlong)&s_12345 - (longlong)pcVar12;
  do {
    iVar4 = iVar4 + 1;
    *pcVar12 = cVar7;
    pcVar12 = pcVar12 + 1;
    if (3 < iVar4) break;
    cVar7 = pcVar12[lVar14];
  } while (cVar7 != '\0');
  *pcVar12 = '\0';
  sVar6 = strlen((char *)((longlong)&uStack_a1 + 1));
  iVar4 = 0;
  pcVar12 = (char *)((longlong)&uStack_a1 + (longlong)(int)sVar6 + 1);
  cVar7 = '1';
  lVar14 = (longlong)&s_12345 - (longlong)pcVar12;
  do {
    iVar4 = iVar4 + 1;
    *pcVar12 = cVar7;
    pcVar12 = pcVar12 + 1;
    if (3 < iVar4) break;
    cVar7 = pcVar12[lVar14];
  } while (cVar7 != '\0');
  *pcVar12 = '\0';
  if ((local_68 == 0) && (local_66 == 0x25)) {
    iVar4 = wcsncmp(L"ABCD12345",(wchar_t *)((longlong)&uStack_7a + 2),8);
    if ((iVar4 != 0) || (local_64 != 0x25)) goto LAB_14189f89d;
    bVar16 = true;
  }
  else {
LAB_14189f89d:
    bVar16 = false;
  }
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"WideStrncatTruncateSrcTestLenMinus1",bVar16);
  if ((local_b8 == '\0') && (local_b7 == '%')) {
    iVar4 = strncmp("ABCD12345",(char *)((longlong)&uStack_c1 + 1),8);
    if ((iVar4 != 0) || (local_b6 != '%')) goto LAB_14189f8e1;
    bVar16 = true;
  }
  else {
LAB_14189f8e1:
    bVar16 = false;
  }
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"Utf8StrncatTruncateSrcTestLenMinus1",bVar16);
  if ((local_98 == '\0') && (local_97 == '%')) {
    iVar4 = strncmp("ABCD12345",(char *)((longlong)&uStack_a1 + 1),8);
    if ((iVar4 != 0) || (local_96 != '%')) goto LAB_14189f925;
    bVar16 = true;
  }
  else {
LAB_14189f925:
    bVar16 = false;
  }
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"AnsiStrncatTruncateSrcTestLenMinus1",bVar16);
  `FCStringStrcatTest::RunTest'::__l2::<lambda_1>::operator()(&local_f8);
  sVar6 = wcslen((wchar_t *)((longlong)&uStack_7a + 2));
  iVar4 = 0;
  psVar11 = (short *)((longlong)&uStack_7a + (longlong)(int)sVar6 * 2 + 2);
  sVar3 = 0x31;
  lVar14 = (longlong)&u_12345 - (longlong)psVar11;
  do {
    iVar4 = iVar4 + 1;
    *psVar11 = sVar3;
    psVar11 = psVar11 + 1;
    if (2 < iVar4) break;
    sVar3 = *(short *)(lVar14 + (longlong)psVar11);
  } while (sVar3 != 0);
  *psVar11 = 0;
  sVar6 = strlen((char *)((longlong)&uStack_c1 + 1));
  iVar4 = 0;
  pcVar12 = (char *)((longlong)&uStack_c1 + (longlong)(int)sVar6 + 1);
  cVar7 = '1';
  lVar14 = (longlong)&s_12345 - (longlong)pcVar12;
  do {
    iVar4 = iVar4 + 1;
    *pcVar12 = cVar7;
    pcVar12 = pcVar12 + 1;
    if (2 < iVar4) break;
    cVar7 = pcVar12[lVar14];
  } while (cVar7 != '\0');
  *pcVar12 = '\0';
  sVar6 = strlen((char *)((longlong)&uStack_a1 + 1));
  iVar4 = 0;
  pcVar12 = (char *)((longlong)&uStack_a1 + (longlong)(int)sVar6 + 1);
  cVar7 = '1';
  lVar14 = (longlong)&s_12345 - (longlong)pcVar12;
  do {
    iVar4 = iVar4 + 1;
    *pcVar12 = cVar7;
    pcVar12 = pcVar12 + 1;
    if (2 < iVar4) break;
    cVar7 = pcVar12[lVar14];
  } while (cVar7 != '\0');
  *pcVar12 = '\0';
  if ((local_6a == 0) && (local_68 == 0x25)) {
    iVar4 = wcsncmp(L"ABCD12345",(wchar_t *)((longlong)&uStack_7a + 2),7);
    if ((iVar4 != 0) || (local_64 != 0x25)) goto LAB_14189fa2d;
    bVar16 = true;
  }
  else {
LAB_14189fa2d:
    bVar16 = false;
  }
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"WideStrncatTruncateSrcTestLenMinus2",bVar16);
  if ((local_b9 == '\0') && (local_b8 == '%')) {
    iVar4 = strncmp("ABCD12345",(char *)((longlong)&uStack_c1 + 1),7);
    if ((iVar4 != 0) || (local_b6 != '%')) goto LAB_14189fa71;
    bVar16 = true;
  }
  else {
LAB_14189fa71:
    bVar16 = false;
  }
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"Utf8StrncatTruncateSrcTestLenMinus2",bVar16);
  if ((local_99 == '\0') && (local_98 == '%')) {
    iVar4 = strncmp("ABCD12345",(char *)((longlong)&uStack_a1 + 1),7);
    if ((iVar4 != 0) || (local_96 != '%')) goto LAB_14189fab5;
    bVar16 = true;
  }
  else {
LAB_14189fab5:
    bVar16 = false;
  }
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"AnsiStrncatTruncateSrcTestLenMinus2",bVar16);
  `FCStringStrcatTest::RunTest'::__l2::<lambda_1>::operator()(&local_f8);
  sVar6 = wcslen((wchar_t *)((longlong)&uStack_7a + 2));
  psVar11 = (short *)((longlong)&uStack_7a + (longlong)(int)sVar6 * 2 + 2);
  iVar4 = 0;
  lVar14 = (longlong)&u_12345 - (longlong)psVar11;
  do {
    iVar4 = iVar4 + 1;
    *psVar11 = sVar15;
    psVar11 = psVar11 + 1;
    if (0 < iVar4) break;
    sVar15 = *(short *)(lVar14 + (longlong)psVar11);
  } while (sVar15 != 0);
  *psVar11 = 0;
  sVar6 = strlen((char *)((longlong)&uStack_c1 + 1));
  iVar4 = 0;
  pcVar12 = (char *)((longlong)&uStack_c1 + (longlong)(int)sVar6 + 1);
  cVar7 = '1';
  lVar14 = (longlong)&s_12345 - (longlong)pcVar12;
  do {
    iVar4 = iVar4 + 1;
    *pcVar12 = cVar7;
    pcVar12 = pcVar12 + 1;
    if (0 < iVar4) break;
    cVar7 = pcVar12[lVar14];
  } while (cVar7 != '\0');
  *pcVar12 = '\0';
  sVar6 = strlen((char *)((longlong)&uStack_a1 + 1));
  pcVar12 = (char *)((longlong)&uStack_a1 + (longlong)(int)sVar6 + 1);
  cVar7 = '1';
  lVar14 = (longlong)&s_12345 - (longlong)pcVar12;
  do {
    iVar13 = iVar13 + 1;
    *pcVar12 = cVar7;
    pcVar12 = pcVar12 + 1;
    if (0 < iVar13) break;
    cVar7 = pcVar12[lVar14];
  } while (cVar7 != '\0');
  bVar16 = sStack_6e == 0;
  *pcVar12 = '\0';
  if ((bVar16) && (local_6c == 0x25)) {
    iVar4 = wcsncmp(L"ABCD12345",(wchar_t *)((longlong)&uStack_7a + 2),5);
    if ((iVar4 != 0) || (local_64 != 0x25)) goto LAB_14189fbaf;
    bVar16 = true;
  }
  else {
LAB_14189fbaf:
    bVar16 = false;
  }
  FAutomationTestBase::TestTrue((FAutomationTestBase *)this,L"WideStrncatTruncateSrcOneLen",bVar16);
  if ((cStack_bb == '\0') && (local_ba == '%')) {
    iVar4 = strncmp("ABCD12345",(char *)((longlong)&uStack_c1 + 1),5);
    if ((iVar4 != 0) || (local_b6 != '%')) goto LAB_14189fbf3;
    bVar16 = true;
  }
  else {
LAB_14189fbf3:
    bVar16 = false;
  }
  FAutomationTestBase::TestTrue((FAutomationTestBase *)this,L"Utf8StrncatTruncateSrcOneLen",bVar16);
  if ((cStack_9b == '\0') && (local_9a == '%')) {
    iVar4 = strncmp("ABCD12345",(char *)((longlong)&uStack_a1 + 1),5);
    if ((iVar4 != 0) || (local_96 != '%')) goto LAB_14189fc37;
    bVar16 = true;
  }
  else {
LAB_14189fc37:
    bVar16 = false;
  }
  FAutomationTestBase::TestTrue((FAutomationTestBase *)this,L"AnsiStrncatTruncateSrcOneLen",bVar16);
  `FCStringStrcatTest::RunTest'::__l2::<lambda_1>::operator()(&local_f8);
  if ((local_70 == 0) && (sStack_6e == 0x25)) {
    iVar4 = wcsncmp(L"ABCD12345",(wchar_t *)((longlong)&uStack_7a + 2),4);
    if ((iVar4 != 0) || (local_64 != 0x25)) goto LAB_14189fc88;
    bVar16 = true;
  }
  else {
LAB_14189fc88:
    bVar16 = false;
  }
  FAutomationTestBase::TestTrue((FAutomationTestBase *)this,L"WideStrncatTruncateSrcZeroLen",bVar16)
  ;
  if ((local_bc == '\0') && (cStack_bb == '%')) {
    iVar4 = strncmp("ABCD12345",(char *)((longlong)&uStack_c1 + 1),4);
    if ((iVar4 != 0) || (local_b6 != '%')) goto LAB_14189fccc;
    bVar16 = true;
  }
  else {
LAB_14189fccc:
    bVar16 = false;
  }
  FAutomationTestBase::TestTrue((FAutomationTestBase *)this,L"Utf8StrncatTruncateSrcZeroLen",bVar16)
  ;
  if ((local_9c == '\0') && (cStack_9b == '%')) {
    iVar4 = strncmp("ABCD12345",(char *)((longlong)&uStack_a1 + 1),4);
    if ((iVar4 == 0) && (local_96 == '%')) {
      bVar16 = true;
      goto LAB_14189fd13;
    }
  }
  bVar16 = false;
LAB_14189fd13:
  FAutomationTestBase::TestTrue((FAutomationTestBase *)this,L"AnsiStrncatTruncateSrcZeroLen",bVar16)
  ;
  return true;
}

// GetBeautifiedTestName @ 14189fd60

FString * __thiscall
FCStringStrcatTest::GetBeautifiedTestName(FCStringStrcatTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"System.Core.Misc.CString.Strcat");
  return __return_storage_ptr__;
}

// operator() @ 1418c1200

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall `FCStringStrcatTest::RunTest'::__l2::<lambda_1>::operator()(void *this)

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

