// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 8

// GetTestFlags @ 1414d2f80

EAutomationTestFlags __thiscall FLexTryParseStringTest::GetTestFlags(FLexTryParseStringTest *this)

{
  return SmokeFilter|ProgramContext|CommandletContext|ServerContext|ClientContext|EditorContext;
}

// IsStressTest @ 1414d2f90

bool __thiscall FLexTryParseStringTest::IsStressTest(FLexTryParseStringTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 1414d2fa0

uint __thiscall FLexTryParseStringTest::GetRequiredDeviceNum(FLexTryParseStringTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 1414d2fb0

FString * __thiscall
FLexTryParseStringTest::GetTestSourceFileName
          (FLexTryParseStringTest *this,FString *__return_storage_ptr__)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = &(__return_storage_ptr__->Data).ArrayMax;
  piVar2 = &(__return_storage_ptr__->Data).ArrayNum;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *piVar2 = 0;
  *piVar1 = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,0x57,(ForAnyElementType *)__return_storage_ptr__,0,piVar1);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,0x57,(ForAnyElementType *)__return_storage_ptr__,piVar2,piVar1);
  FGenericPlatformString::Convert<char,wchar_t>
            ((wchar_t *)(__return_storage_ptr__->Data).AllocatorInstance.Data,0x57,
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\StringTest.cpp"
             ,0x57);
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 1414d3050

int __thiscall FLexTryParseStringTest::GetTestSourceFileLine(FLexTryParseStringTest *this)

{
  return 0x8c;
}

// GetTests @ 1414d3060

/* WARNING: Removing unreachable block (ram,0x0001414d31a9) */
/* WARNING: Removing unreachable block (ram,0x0001414d3274) */

void __thiscall
FLexTryParseStringTest::GetTests
          (FLexTryParseStringTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  ForAnyElementType local_28;
  int local_20 [2];
  undefined8 local_18;
  undefined8 local_10;
  
  local_28.Data = (FScriptContainerElement *)0x0;
  local_20[0] = 0;
  local_20[1] = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,0x23,&local_28,0,local_20 + 1);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,0x23,&local_28,local_20,local_20 + 1);
  FGenericPlatformString::Convert<char,wchar_t>
            ((wchar_t *)local_28.Data,0x23,"System.Core.Misc.LexTryParseString",0x23);
  pFVar4 = (param_1->AllocatorInstance).Data;
  if (((pFVar4 <= (FScriptContainerElement *)&local_28) &&
      ((FScriptContainerElement *)&local_28 < pFVar4 + (longlong)param_1->ArrayMax * 0x10)) &&
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
  *(FScriptContainerElement **)pFVar4 = local_28.Data;
  *(int *)(pFVar4 + 8) = local_20[0];
  *(int *)(pFVar4 + 0xc) = local_20[1];
  local_20[0] = 0;
  local_20[1] = 0;
  local_28.Data = (FScriptContainerElement *)0x0;
  pFVar4 = (param_2->AllocatorInstance).Data;
  local_18 = 0;
  local_10 = 0;
  if (((pFVar4 <= (FScriptContainerElement *)&local_18) &&
      ((FScriptContainerElement *)&local_18 < pFVar4 + (longlong)param_2->ArrayMax * 0x10)) &&
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
  *(undefined8 *)pFVar4 = local_18;
  *(undefined4 *)(pFVar4 + 8) = (undefined4)local_10;
  *(undefined4 *)(pFVar4 + 0xc) = local_10._4_4_;
  return;
}

// RunTest @ 1414d32a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall FLexTryParseStringTest::RunTest(FLexTryParseStringTest *this,FString *param_1)

{
  bool bVar1;
  int iVar2;
  wchar_t wVar3;
  wchar_t wVar4;
  wint_t wVar5;
  wint_t wVar6;
  undefined *puVar7;
  bool bVar8;
  undefined *puVar9;
  wchar_t *pwVar10;
  wint_t wVar11;
  undefined *puVar12;
  wchar_t *pwVar13;
  undefined *puVar14;
  double dVar15;
  float fVar16;
  float fVar17;
  
  puVar7 = &u_1;
  puVar9 = &u_1;
  dVar15 = _wtof(L"1");
  fVar17 = __real_3f800000;
  fVar16 = (float)dVar15;
  wVar11 = 0x31;
  if (fVar16 != 0.0) goto LAB_1414d3407;
  iVar2 = _finite((double)fVar16);
  if (iVar2 != 0) {
    bVar8 = false;
    do {
      if (((wVar11 - 0x2b & 0xfffd) != 0) && (iVar2 = iswspace(wVar11), iVar2 == 0)) {
        if (wVar11 != 0) goto LAB_1414d3351;
        break;
      }
      wVar11 = *(wint_t *)(puVar9 + 2);
      puVar9 = puVar9 + 2;
    } while (wVar11 != 0);
    goto LAB_1414d33fe;
  }
LAB_1414d3377:
  bVar8 = false;
  goto LAB_1414d337a;
  while( true ) {
    if ((bVar8) || (wVar11 == 0x30)) {
      bVar8 = true;
    }
    else if (wVar11 != 0x2e) goto LAB_1414d344f;
    wVar11 = *(wint_t *)(puVar9 + 2);
    puVar9 = puVar9 + 2;
    if (wVar11 == 0) break;
LAB_1414d3421:
    iVar2 = iswspace(wVar11);
    if (iVar2 != 0) break;
  }
  goto LAB_1414d34dc;
  while( true ) {
    if ((bVar8) || (wVar11 == 0x30)) {
      bVar8 = true;
    }
    else if (wVar11 != 0x2e) goto LAB_1414d3526;
    wVar11 = *(wint_t *)(puVar9 + 2);
    puVar9 = puVar9 + 2;
    if (wVar11 == 0) break;
LAB_1414d3500:
    iVar2 = iswspace(wVar11);
    if (iVar2 != 0) break;
  }
  goto LAB_1414d35ad;
  while( true ) {
    if ((bVar8) || (wVar11 == 0x30)) {
      bVar8 = true;
    }
    else if (wVar11 != 0x2e) goto LAB_1414d3602;
    wVar11 = *(wint_t *)(puVar9 + 2);
    puVar9 = puVar9 + 2;
    if (wVar11 == 0) break;
LAB_1414d35d4:
    iVar2 = iswspace(wVar11);
    if (iVar2 != 0) break;
  }
  goto LAB_1414d3698;
  while( true ) {
    if ((bVar8) || (wVar11 == 0x30)) {
      bVar8 = true;
    }
    else if (wVar11 != 0x2e) goto LAB_1414d36ee;
    wVar11 = *(wint_t *)(puVar9 + 2);
    puVar9 = puVar9 + 2;
    bVar1 = bVar8;
    if (wVar11 == 0) break;
LAB_1414d36c0:
    iVar2 = iswspace(wVar11);
    bVar1 = bVar8;
    if (iVar2 != 0) break;
  }
  goto LAB_1414d3780;
  while( true ) {
    if ((bVar8) || (wVar11 == 0x30)) {
      bVar8 = true;
    }
    else if (wVar11 != 0x2e) goto LAB_1414d37d2;
    wVar11 = *(wint_t *)(puVar9 + 2);
    puVar9 = puVar9 + 2;
    bVar1 = bVar8;
    if (wVar11 == 0) break;
LAB_1414d37a4:
    iVar2 = iswspace(wVar11);
    bVar1 = bVar8;
    if (iVar2 != 0) break;
  }
  goto LAB_1414d3862;
  while( true ) {
    if ((bVar8) || (wVar11 == 0x30)) {
      bVar8 = true;
    }
    else if (wVar11 != 0x2e) goto LAB_1414d38b4;
    wVar11 = *(wint_t *)(puVar9 + 2);
    puVar9 = puVar9 + 2;
    bVar1 = bVar8;
    if (wVar11 == 0) break;
LAB_1414d3886:
    iVar2 = iswspace(wVar11);
    bVar1 = bVar8;
    if (iVar2 != 0) break;
  }
  goto LAB_1414d3944;
  while( true ) {
    if ((bVar8) || (wVar11 == 0x30)) {
      bVar8 = true;
    }
    else if (wVar11 != 0x2e) goto LAB_1414d399e;
    wVar11 = *(wint_t *)(puVar9 + 2);
    puVar9 = puVar9 + 2;
    bVar1 = bVar8;
    if (wVar11 == 0) break;
LAB_1414d3970:
    iVar2 = iswspace(wVar11);
    bVar1 = bVar8;
    if (iVar2 != 0) break;
  }
  goto LAB_1414d3a30;
  while( true ) {
    if ((bVar8) || (wVar11 == 0x30)) {
      bVar8 = true;
    }
    else if (wVar11 != 0x2e) goto LAB_1414d3a82;
    wVar11 = *(wint_t *)(puVar9 + 2);
    puVar9 = puVar9 + 2;
    bVar1 = bVar8;
    if (wVar11 == 0) break;
LAB_1414d3a54:
    iVar2 = iswspace(wVar11);
    bVar1 = bVar8;
    if (iVar2 != 0) break;
  }
  goto LAB_1414d3b12;
  while( true ) {
    if ((bVar8) || (wVar11 == 0x30)) {
      bVar8 = true;
    }
    else if (wVar11 != 0x2e) goto LAB_1414d3b64;
    wVar11 = *(wint_t *)(puVar9 + 2);
    puVar9 = puVar9 + 2;
    bVar1 = bVar8;
    if (wVar11 == 0) break;
LAB_1414d3b36:
    iVar2 = iswspace(wVar11);
    bVar1 = bVar8;
    if (iVar2 != 0) break;
  }
  goto LAB_1414d3c00;
  while( true ) {
    if ((bVar8) || (wVar11 == 0x30)) {
      bVar8 = true;
    }
    else if (wVar11 != 0x2e) goto LAB_1414d3c52;
    wVar11 = *(wint_t *)(puVar9 + 2);
    puVar9 = puVar9 + 2;
    if (wVar11 == 0) break;
LAB_1414d3c24:
    iVar2 = iswspace(wVar11);
    if (iVar2 != 0) break;
  }
  goto LAB_1414d3ce2;
  while( true ) {
    if ((bVar8) || (wVar11 == 0x30)) {
      bVar8 = true;
    }
    else if (wVar11 != 0x2e) goto LAB_1414d3d33;
    wVar11 = *(wint_t *)(puVar9 + 2);
    puVar9 = puVar9 + 2;
    if (wVar11 == 0) break;
LAB_1414d3d05:
    iVar2 = iswspace(wVar11);
    if (iVar2 != 0) break;
  }
  goto LAB_1414d3dc3;
  while( true ) {
    if ((bVar8) || (wVar11 == 0x30)) {
      bVar8 = true;
    }
    else if (wVar11 != 0x2e) goto LAB_1414d3e1e;
    wVar11 = *(wint_t *)(puVar9 + 2);
    puVar9 = puVar9 + 2;
    if (wVar11 == 0) break;
LAB_1414d3df0:
    iVar2 = iswspace(wVar11);
    if (iVar2 != 0) break;
  }
  goto LAB_1414d3eae;
  while( true ) {
    if ((bVar8 == false) && (wVar11 != 0x30)) {
      if (wVar11 != 0x2e) break;
    }
    else {
      bVar8 = true;
    }
    wVar11 = *(wint_t *)(puVar9 + 2);
    puVar9 = puVar9 + 2;
    if (wVar11 == 0) break;
LAB_1414d3ed0:
    iVar2 = iswspace(wVar11);
    if (iVar2 != 0) break;
  }
  goto LAB_1414d3f0b;
  while( true ) {
    if ((bVar8 == false) && (wVar11 != 0x30)) {
      if (wVar11 != 0x2e) break;
    }
    else {
      bVar8 = true;
    }
    wVar11 = *(wint_t *)(puVar9 + 2);
    puVar9 = puVar9 + 2;
    if (wVar11 == 0) break;
LAB_1414d3f80:
    iVar2 = iswspace(wVar11);
    if (iVar2 != 0) break;
  }
  goto LAB_1414d3fb5;
  while( true ) {
    if ((bVar8 == false) && (wVar3 != L'0')) {
      if (wVar3 != L'.') break;
    }
    else {
      bVar8 = true;
    }
    wVar3 = pwVar10[1];
    pwVar10 = pwVar10 + 1;
    if (wVar3 == L'\0') break;
LAB_1414d4030:
    iVar2 = iswspace(wVar3);
    if (iVar2 != 0) break;
  }
  goto LAB_1414d4065;
  while( true ) {
    if ((bVar8 == false) && (wVar3 != L'0')) {
      if (wVar3 != L'.') break;
    }
    else {
      bVar8 = true;
    }
    wVar3 = pwVar10[1];
    pwVar10 = pwVar10 + 1;
    if (wVar3 == L'\0') break;
LAB_1414d40e0:
    iVar2 = iswspace(wVar3);
    if (iVar2 != 0) break;
  }
  goto LAB_1414d4115;
  while( true ) {
    if ((bVar8 == false) && (wVar11 != 0x30)) {
      if (wVar11 != 0x2e) break;
    }
    else {
      bVar8 = true;
    }
    wVar11 = *(wint_t *)(puVar9 + 2);
    puVar9 = puVar9 + 2;
    if (wVar11 == 0) break;
LAB_1414d4190:
    iVar2 = iswspace(wVar11);
    if (iVar2 != 0) break;
  }
  goto LAB_1414d41c5;
  while( true ) {
    if ((bVar8 == false) && (wVar3 != L'0')) {
      if (wVar3 != L'.') break;
    }
    else {
      bVar8 = true;
    }
    wVar3 = pwVar10[1];
    pwVar10 = pwVar10 + 1;
    if (wVar3 == L'\0') break;
LAB_1414d4240:
    iVar2 = iswspace(wVar3);
    if (iVar2 != 0) break;
  }
  goto LAB_1414d4275;
  while( true ) {
    if ((bVar8) || (wVar11 == 0x30)) {
      bVar8 = true;
    }
    else if (wVar11 != 0x2e) goto LAB_1414d431a;
    wVar11 = *(wint_t *)(puVar9 + 2);
    puVar9 = puVar9 + 2;
    if (wVar11 == 0) break;
LAB_1414d42f4:
    iVar2 = iswspace(wVar11);
    if (iVar2 != 0) break;
  }
  goto LAB_1414d43a2;
  while( true ) {
    if ((bVar8) || (wVar11 == 0x30)) {
      bVar8 = true;
    }
    else if (wVar11 != 0x2e) goto LAB_1414d43f6;
    wVar11 = *(wint_t *)(puVar9 + 2);
    puVar9 = puVar9 + 2;
    if (wVar11 == 0) break;
LAB_1414d43d0:
    iVar2 = iswspace(wVar11);
    if (iVar2 != 0) break;
  }
  goto LAB_1414d447e;
  while( true ) {
    if ((bVar8) || (wVar11 == 0x30)) {
      bVar8 = true;
    }
    else if (wVar11 != 0x2e) goto LAB_1414d44d3;
    wVar11 = *(wint_t *)(puVar9 + 2);
    puVar9 = puVar9 + 2;
    if (wVar11 == 0) break;
LAB_1414d44a5:
    iVar2 = iswspace(wVar11);
    if (iVar2 != 0) break;
  }
  goto LAB_1414d4570;
  while( true ) {
    if ((bVar8) || (wVar6 == 0x30)) {
      bVar8 = true;
    }
    else if (wVar6 != 0x2e) goto LAB_1414d45c5;
    wVar6 = *(wint_t *)(puVar9 + 2);
    puVar9 = puVar9 + 2;
    if (wVar6 == 0) break;
LAB_1414d4597:
    iVar2 = iswspace(wVar6);
    if (iVar2 != 0) break;
  }
  goto LAB_1414d4655;
  while( true ) {
    if ((bVar8) || (wVar6 == 0x30)) {
      bVar8 = true;
    }
    else if (wVar6 != 0x2e) goto LAB_1414d46ae;
    wVar6 = *(wint_t *)(puVar9 + 2);
    puVar9 = puVar9 + 2;
    if (wVar6 == 0) break;
LAB_1414d4680:
    iVar2 = iswspace(wVar6);
    if (iVar2 != 0) break;
  }
  goto LAB_1414d4741;
  while( true ) {
    if ((bVar8) || (wVar6 == 0x30)) {
      bVar8 = true;
    }
    else if (wVar6 != 0x2e) goto LAB_1414d479e;
    wVar6 = *(wint_t *)(puVar9 + 2);
    puVar9 = puVar9 + 2;
    if (wVar6 == 0) break;
LAB_1414d4770:
    iVar2 = iswspace(wVar6);
    if (iVar2 != 0) break;
  }
  goto LAB_1414d4836;
  while( true ) {
    if ((bVar8) || (wVar6 == 0x30)) {
      bVar8 = true;
    }
    else if (wVar6 != 0x2e) goto LAB_1414d488e;
    wVar6 = *(wint_t *)(puVar9 + 2);
    puVar9 = puVar9 + 2;
    if (wVar6 == 0) break;
LAB_1414d4860:
    iVar2 = iswspace(wVar6);
    if (iVar2 != 0) break;
  }
  goto LAB_1414d492c;
  while( true ) {
    if ((bVar8 == false) && (wVar3 != L'0')) {
      if (wVar3 != L'.') break;
    }
    else {
      bVar8 = true;
    }
    wVar3 = pwVar10[1];
    pwVar10 = pwVar10 + 1;
    if (wVar3 == L'\0') break;
LAB_1414d4950:
    iVar2 = iswspace(wVar3);
    if (iVar2 != 0) break;
  }
  goto LAB_1414d498d;
  while( true ) {
    if ((bVar8 == false) && (wVar3 != L'0')) {
      if (wVar3 != L'.') break;
    }
    else {
      bVar8 = true;
    }
    wVar3 = pwVar10[1];
    pwVar10 = pwVar10 + 1;
    if (wVar3 == L'\0') break;
LAB_1414d4a26:
    iVar2 = iswspace(wVar3);
    if (iVar2 != 0) break;
  }
  goto LAB_1414d4a63;
  while( true ) {
    wVar6 = *(wint_t *)(puVar7 + 2);
    puVar7 = puVar7 + 2;
    bVar8 = true;
    if (wVar6 == 0) break;
LAB_1414d4c50:
    iVar2 = iswspace(wVar6);
    if (((iVar2 != 0) || (wVar6 == 0x2e)) || ((!bVar8 && (wVar6 != 0x30)))) break;
  }
  goto LAB_1414d4ad4;
  while( true ) {
    wVar6 = *(wint_t *)(puVar7 + 2);
    puVar7 = puVar7 + 2;
    bVar8 = true;
    if (wVar6 == 0) break;
LAB_1414d4cb0:
    iVar2 = iswspace(wVar6);
    if (((iVar2 != 0) || (wVar6 == 0x2e)) || ((!bVar8 && (wVar6 != 0x30)))) break;
  }
  goto LAB_1414d4b4b;
  while( true ) {
    wVar5 = *(wint_t *)(puVar7 + 2);
    puVar7 = puVar7 + 2;
    bVar8 = true;
    if (wVar5 == 0) break;
LAB_1414d4d10:
    iVar2 = iswspace(wVar5);
    if (((iVar2 != 0) || (wVar5 == 0x2e)) || ((!bVar8 && (wVar5 != 0x30)))) break;
  }
  goto LAB_1414d4bc5;
  while( true ) {
    if ((!bVar8) && (wVar5 != 0x30)) goto LAB_1414d4dad;
    wVar5 = *(wint_t *)(puVar7 + 2);
    puVar7 = puVar7 + 2;
    bVar8 = true;
    if (wVar5 == 0) break;
LAB_1414d4d65:
    iVar2 = iswspace(wVar5);
    if ((iVar2 != 0) || (wVar5 == 0x2e)) break;
  }
  goto LAB_1414d4d93;
  while( true ) {
    wVar5 = *(wint_t *)(puVar7 + 2);
    puVar7 = puVar7 + 2;
    bVar8 = true;
    if (wVar5 == 0) break;
LAB_1414d4ea5:
    iVar2 = iswspace(wVar5);
    if (((iVar2 != 0) || (wVar5 == 0x2e)) || ((!bVar8 && (wVar5 != 0x30)))) break;
  }
  goto LAB_1414d4e24;
  while( true ) {
    if ((!bVar8) && (wVar5 != 0x30)) goto LAB_1414d4f48;
    wVar5 = *(wint_t *)(puVar7 + 2);
    puVar7 = puVar7 + 2;
    bVar8 = true;
    if (wVar5 == 0) break;
LAB_1414d4f00:
    iVar2 = iswspace(wVar5);
    if ((iVar2 != 0) || (wVar5 == 0x2e)) break;
  }
  goto LAB_1414d4f2e;
  while( true ) {
    if ((!bVar8) && (wVar5 != 0x30)) goto LAB_1414d5008;
    wVar5 = *(wint_t *)(puVar7 + 2);
    puVar7 = puVar7 + 2;
    bVar8 = true;
    if (wVar5 == 0) break;
LAB_1414d4fc0:
    iVar2 = iswspace(wVar5);
    if ((iVar2 != 0) || (wVar5 == 0x2e)) break;
  }
  goto LAB_1414d4fee;
  while( true ) {
    if ((!bVar8) && (wVar5 != 0x30)) goto LAB_1414d50c8;
    wVar5 = *(wint_t *)(puVar7 + 2);
    puVar7 = puVar7 + 2;
    bVar8 = true;
    if (wVar5 == 0) break;
LAB_1414d5080:
    iVar2 = iswspace(wVar5);
    if ((iVar2 != 0) || (wVar5 == 0x2e)) break;
  }
  goto LAB_1414d50ae;
  while( true ) {
    if ((!bVar8) && (wVar5 != 0x30)) goto LAB_1414d5188;
    wVar5 = *(wint_t *)(puVar7 + 2);
    puVar7 = puVar7 + 2;
    bVar8 = true;
    if (wVar5 == 0) break;
LAB_1414d5140:
    iVar2 = iswspace(wVar5);
    if ((iVar2 != 0) || (wVar5 == 0x2e)) break;
  }
  goto LAB_1414d516e;
  while( true ) {
    wVar5 = *(wint_t *)(puVar7 + 2);
    puVar7 = puVar7 + 2;
    bVar8 = true;
    if (wVar5 == 0) break;
LAB_1414d5300:
    iVar2 = iswspace(wVar5);
    if (((iVar2 != 0) || (wVar5 == 0x2e)) || ((!bVar8 && (wVar5 != 0x30)))) break;
  }
  goto LAB_1414d5203;
  while( true ) {
    wVar5 = *(wint_t *)(puVar7 + 2);
    puVar7 = puVar7 + 2;
    bVar8 = true;
    if (wVar5 == 0) break;
LAB_1414d5360:
    iVar2 = iswspace(wVar5);
    if (((iVar2 != 0) || (wVar5 == 0x2e)) || ((!bVar8 && (wVar5 != 0x30)))) break;
  }
  goto LAB_1414d527a;
  while( true ) {
    if ((!bVar8) && (wVar5 != 0x30)) goto LAB_1414d53fd;
    wVar5 = *(wint_t *)(puVar7 + 2);
    puVar7 = puVar7 + 2;
    bVar8 = true;
    if (wVar5 == 0) break;
LAB_1414d53b5:
    iVar2 = iswspace(wVar5);
    if ((iVar2 != 0) || (wVar5 == 0x2e)) break;
  }
  goto LAB_1414d53e3;
  while( true ) {
    if ((!bVar8) && (wVar5 != 0x30)) goto LAB_1414d54a8;
    wVar5 = *(wint_t *)(puVar7 + 2);
    puVar7 = puVar7 + 2;
    bVar8 = true;
    if (wVar5 == 0) break;
LAB_1414d5470:
    iVar2 = iswspace(wVar5);
    if ((iVar2 != 0) || (wVar5 == 0x2e)) break;
  }
  goto LAB_1414d549e;
  while( true ) {
    wVar6 = *(wint_t *)(puVar7 + 2);
    puVar7 = puVar7 + 2;
    bVar8 = true;
    if (wVar6 == 0) break;
LAB_1414d5945:
    iVar2 = iswspace(wVar6);
    if (((iVar2 != 0) || (wVar6 == 0x2e)) || ((!bVar8 && (wVar6 != 0x30)))) break;
  }
  goto LAB_1414d551b;
  while( true ) {
    wVar6 = *(wint_t *)(puVar7 + 2);
    puVar7 = puVar7 + 2;
    bVar8 = true;
    if (wVar6 == 0) break;
LAB_1414d59a0:
    iVar2 = iswspace(wVar6);
    if (((iVar2 != 0) || (wVar6 == 0x2e)) || ((!bVar8 && (wVar6 != 0x30)))) break;
  }
  goto LAB_1414d559a;
  while( true ) {
    wVar6 = *(wint_t *)(puVar7 + 2);
    puVar7 = puVar7 + 2;
    bVar8 = true;
    if (wVar6 == 0) break;
LAB_1414d5a00:
    iVar2 = iswspace(wVar6);
    if (((iVar2 != 0) || (wVar6 == 0x2e)) || ((!bVar8 && (wVar6 != 0x30)))) break;
  }
  goto LAB_1414d5614;
  while( true ) {
    wVar6 = *(wint_t *)(puVar7 + 2);
    puVar7 = puVar7 + 2;
    bVar8 = true;
    if (wVar6 == 0) break;
LAB_1414d5a60:
    iVar2 = iswspace(wVar6);
    if (((iVar2 != 0) || (wVar6 == 0x2e)) || ((!bVar8 && (wVar6 != 0x30)))) break;
  }
  goto LAB_1414d568a;
  while( true ) {
    wVar6 = *(wint_t *)(puVar7 + 2);
    puVar7 = puVar7 + 2;
    bVar8 = true;
    if (wVar6 == 0) break;
LAB_1414d5ab7:
    iVar2 = iswspace(wVar6);
    if (((iVar2 != 0) || (wVar6 == 0x2e)) || ((!bVar8 && (wVar6 != 0x30)))) break;
  }
  goto LAB_1414d5703;
  while( true ) {
    wVar11 = *(wint_t *)(puVar7 + 2);
    puVar7 = puVar7 + 2;
    bVar8 = true;
    if (wVar11 == 0) break;
LAB_1414d5b10:
    iVar2 = iswspace(wVar11);
    if (((iVar2 != 0) || (wVar11 == 0x2e)) || ((!bVar8 && (wVar11 != 0x30)))) break;
  }
  goto LAB_1414d5771;
  while( true ) {
    wVar11 = *(wint_t *)(puVar7 + 2);
    puVar7 = puVar7 + 2;
    bVar8 = true;
    if (wVar11 == 0) break;
LAB_1414d5b70:
    iVar2 = iswspace(wVar11);
    if (((iVar2 != 0) || (wVar11 == 0x2e)) || ((!bVar8 && (wVar11 != 0x30)))) break;
  }
  goto LAB_1414d57eb;
  while( true ) {
    wVar11 = *(wint_t *)(puVar12 + 2);
    puVar12 = puVar12 + 2;
    bVar8 = true;
    if (wVar11 == 0) break;
LAB_1414d5bd0:
    iVar2 = iswspace(wVar11);
    if (((iVar2 != 0) || (wVar11 == 0x2e)) || ((!bVar8 && (wVar11 != 0x30)))) break;
  }
  goto LAB_1414d5852;
  while( true ) {
    wVar11 = *(wint_t *)(puVar14 + 2);
    puVar14 = puVar14 + 2;
    bVar8 = true;
    if (wVar11 == 0) break;
LAB_1414d5c30:
    iVar2 = iswspace(wVar11);
    if (((iVar2 != 0) || (wVar11 == 0x2e)) || ((!bVar8 && (wVar11 != 0x30)))) break;
  }
  goto LAB_1414d58bc;
  while( true ) {
    wVar11 = *(wint_t *)(puVar7 + 2);
    puVar7 = puVar7 + 2;
    bVar8 = true;
    if (wVar11 == 0) break;
LAB_1414d5c84:
    iVar2 = iswspace(wVar11);
    if ((iVar2 != 0) || (wVar11 == 0x2e)) break;
    if ((bVar8 == false) && (wVar11 != 0x30)) {
      bVar8 = false;
      break;
    }
  }
  goto LAB_1414d5cc7;
  while( true ) {
    wVar11 = *(wint_t *)(puVar7 + 2);
    puVar7 = puVar7 + 2;
    bVar8 = true;
    if (wVar11 == 0) break;
LAB_1414d5d31:
    iVar2 = iswspace(wVar11);
    if ((iVar2 != 0) || (wVar11 == 0x2e)) break;
    if ((bVar8 == false) && (wVar11 != 0x30)) {
      bVar8 = false;
      break;
    }
  }
  goto LAB_1414d5d6f;
  while( true ) {
    wVar4 = pwVar10[1];
    pwVar10 = pwVar10 + 1;
    bVar8 = true;
    if (wVar4 == L'\0') break;
LAB_1414d5de0:
    iVar2 = iswspace(wVar4);
    if ((iVar2 != 0) || (wVar4 == L'.')) break;
    if ((bVar8 == false) && (wVar4 != L'0')) {
      bVar8 = false;
      break;
    }
  }
  goto LAB_1414d5e19;
  while( true ) {
    wVar4 = pwVar10[1];
    pwVar10 = pwVar10 + 1;
    bVar8 = true;
    if (wVar4 == L'\0') break;
LAB_1414d5e80:
    iVar2 = iswspace(wVar4);
    if ((iVar2 != 0) || (wVar4 == L'.')) break;
    if ((bVar8 == false) && (wVar4 != L'0')) {
      bVar8 = false;
      break;
    }
  }
  goto LAB_1414d5eb9;
  while( true ) {
    wVar11 = *(wint_t *)(puVar7 + 2);
    puVar7 = puVar7 + 2;
    bVar8 = true;
    if (wVar11 == 0) break;
LAB_1414d5f20:
    iVar2 = iswspace(wVar11);
    if ((iVar2 != 0) || (wVar11 == 0x2e)) break;
    if ((bVar8 == false) && (wVar11 != 0x30)) {
      bVar8 = false;
      break;
    }
  }
  goto LAB_1414d5f54;
  while( true ) {
    wVar3 = pwVar10[1];
    pwVar10 = pwVar10 + 1;
    bVar8 = true;
    if (wVar3 == L'\0') break;
LAB_1414d5fc0:
    iVar2 = iswspace(wVar3);
    if ((iVar2 != 0) || (wVar3 == L'.')) break;
    if ((bVar8 == false) && (wVar3 != L'0')) {
      bVar8 = false;
      break;
    }
  }
  goto LAB_1414d5ff4;
  while( true ) {
    wVar3 = pwVar13[1];
    pwVar13 = pwVar13 + 1;
    bVar8 = true;
    if (wVar3 == L'\0') break;
LAB_1414d6060:
    iVar2 = iswspace(wVar3);
    if ((iVar2 != 0) || (wVar3 == L'.')) break;
    if ((bVar8 == false) && (wVar3 != L'0')) {
      bVar8 = false;
      break;
    }
  }
  goto LAB_1414d6095;
  while( true ) {
    if ((bVar8) || (wVar11 == 0x30)) {
      bVar8 = true;
    }
    else if (wVar11 != 0x2e) goto LAB_1414d3377;
    wVar11 = *(wint_t *)(puVar9 + 2);
    puVar9 = puVar9 + 2;
    if (wVar11 == 0) break;
LAB_1414d3351:
    iVar2 = iswspace(wVar11);
    if (iVar2 != 0) break;
  }
LAB_1414d33fe:
  if (!bVar8) goto LAB_1414d3377;
LAB_1414d3407:
  if (fVar16 != fVar17) goto LAB_1414d3377;
  bVar8 = true;
LAB_1414d337a:
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"(float conversion from string) basic numbers",bVar8);
  puVar9 = &u_1_0;
  dVar15 = _wtof(L"1.0");
  fVar16 = (float)dVar15;
  if (fVar16 == 0.0) {
    iVar2 = _finite((double)fVar16);
    if (iVar2 != 0) {
      bVar8 = false;
      wVar11 = 0x31;
      do {
        if (((wVar11 - 0x2b & 0xfffd) != 0) && (iVar2 = iswspace(wVar11), iVar2 == 0)) {
          if (wVar11 != 0) goto LAB_1414d3421;
          break;
        }
        wVar11 = *(wint_t *)(puVar9 + 2);
        puVar9 = puVar9 + 2;
      } while (wVar11 != 0);
LAB_1414d34dc:
      if (bVar8) goto LAB_1414d34e5;
    }
LAB_1414d344f:
    bVar8 = false;
  }
  else {
LAB_1414d34e5:
    if (fVar16 != fVar17) goto LAB_1414d344f;
    bVar8 = true;
  }
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"(float conversion from string) basic numbers",bVar8);
  puVar9 = &u__5;
  dVar15 = _wtof(L".5");
  fVar16 = (float)dVar15;
  if (fVar16 == 0.0) {
    iVar2 = _finite((double)fVar16);
    if (iVar2 != 0) {
      bVar8 = false;
      wVar11 = 0x2e;
      do {
        if (((wVar11 - 0x2b & 0xfffd) != 0) && (iVar2 = iswspace(wVar11), iVar2 == 0)) {
          if (wVar11 != 0) goto LAB_1414d3500;
          break;
        }
        wVar11 = *(wint_t *)(puVar9 + 2);
        puVar9 = puVar9 + 2;
      } while (wVar11 != 0);
LAB_1414d35ad:
      if (bVar8) goto LAB_1414d35b6;
    }
LAB_1414d3526:
    bVar8 = false;
  }
  else {
LAB_1414d35b6:
    if (fVar16 != __real_3f000000) goto LAB_1414d3526;
    bVar8 = true;
  }
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"(float conversion from string) basic numbers",bVar8);
  puVar9 = &u_1_;
  dVar15 = _wtof(L"1.");
  fVar16 = (float)dVar15;
  if (fVar16 == 0.0) {
    iVar2 = _finite((double)fVar16);
    if (iVar2 != 0) {
      bVar8 = false;
      wVar11 = 0x31;
      do {
        if (((wVar11 - 0x2b & 0xfffd) != 0) && (iVar2 = iswspace(wVar11), iVar2 == 0)) {
          if (wVar11 != 0) goto LAB_1414d35d4;
          break;
        }
        wVar11 = *(wint_t *)(puVar9 + 2);
        puVar9 = puVar9 + 2;
      } while (wVar11 != 0);
LAB_1414d3698:
      if (bVar8) goto LAB_1414d36a1;
    }
LAB_1414d3602:
    bVar8 = false;
  }
  else {
LAB_1414d36a1:
    if (fVar16 != fVar17) goto LAB_1414d3602;
    bVar8 = true;
  }
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"(float conversion from string) basic numbers",bVar8);
  puVar9 = &u_0;
  dVar15 = _wtof(L"0");
  fVar17 = (float)dVar15;
  if (fVar17 == 0.0) {
    iVar2 = _finite((double)fVar17);
    if (iVar2 != 0) {
      bVar8 = false;
      bVar1 = false;
      wVar11 = 0x30;
      do {
        if (((wVar11 - 0x2b & 0xfffd) != 0) && (iVar2 = iswspace(wVar11), iVar2 == 0)) {
          if (wVar11 != 0) goto LAB_1414d36c0;
          break;
        }
        wVar11 = *(wint_t *)(puVar9 + 2);
        puVar9 = puVar9 + 2;
      } while (wVar11 != 0);
LAB_1414d3780:
      if ((!bVar1) || (fVar17 != 0.0)) goto LAB_1414d36ee;
    }
    bVar8 = true;
  }
  else {
LAB_1414d36ee:
    bVar8 = false;
  }
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"(float conversion from string) variations of 0",bVar8);
  puVar9 = &u__0;
  dVar15 = _wtof(L"-0");
  fVar17 = (float)dVar15;
  if (fVar17 == 0.0) {
    iVar2 = _finite((double)fVar17);
    if (iVar2 != 0) {
      bVar8 = false;
      bVar1 = false;
      wVar11 = 0x2d;
      do {
        if (((wVar11 - 0x2b & 0xfffd) != 0) && (iVar2 = iswspace(wVar11), iVar2 == 0)) {
          if (wVar11 != 0) goto LAB_1414d37a4;
          break;
        }
        wVar11 = *(wint_t *)(puVar9 + 2);
        puVar9 = puVar9 + 2;
      } while (wVar11 != 0);
LAB_1414d3862:
      if ((!bVar1) || (fVar17 != 0.0)) goto LAB_1414d37d2;
    }
    bVar8 = true;
  }
  else {
LAB_1414d37d2:
    bVar8 = false;
  }
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"(float conversion from string) variations of 0",bVar8);
  puVar9 = &u_0_0;
  dVar15 = _wtof(L"0.0");
  fVar17 = (float)dVar15;
  if (fVar17 == 0.0) {
    iVar2 = _finite((double)fVar17);
    if (iVar2 != 0) {
      bVar8 = false;
      bVar1 = false;
      wVar11 = 0x30;
      do {
        if (((wVar11 - 0x2b & 0xfffd) != 0) && (iVar2 = iswspace(wVar11), iVar2 == 0)) {
          if (wVar11 != 0) goto LAB_1414d3886;
          break;
        }
        wVar11 = *(wint_t *)(puVar9 + 2);
        puVar9 = puVar9 + 2;
      } while (wVar11 != 0);
LAB_1414d3944:
      if ((!bVar1) || (fVar17 != 0.0)) goto LAB_1414d38b4;
    }
    bVar8 = true;
  }
  else {
LAB_1414d38b4:
    bVar8 = false;
  }
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"(float conversion from string) variations of 0",bVar8);
  puVar9 = &u__0;
  dVar15 = _wtof(L".0");
  fVar17 = (float)dVar15;
  if (fVar17 == 0.0) {
    iVar2 = _finite((double)fVar17);
    if (iVar2 != 0) {
      bVar8 = false;
      bVar1 = false;
      wVar11 = 0x2e;
      do {
        if (((wVar11 - 0x2b & 0xfffd) != 0) && (iVar2 = iswspace(wVar11), iVar2 == 0)) {
          if (wVar11 != 0) goto LAB_1414d3970;
          break;
        }
        wVar11 = *(wint_t *)(puVar9 + 2);
        puVar9 = puVar9 + 2;
      } while (wVar11 != 0);
LAB_1414d3a30:
      if ((!bVar1) || (fVar17 != 0.0)) goto LAB_1414d399e;
    }
    bVar8 = true;
  }
  else {
LAB_1414d399e:
    bVar8 = false;
  }
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"(float conversion from string) variations of 0",bVar8);
  puVar9 = &u_0_;
  dVar15 = _wtof(L"0.");
  fVar17 = (float)dVar15;
  if (fVar17 == 0.0) {
    iVar2 = _finite((double)fVar17);
    if (iVar2 != 0) {
      bVar8 = false;
      bVar1 = false;
      wVar11 = 0x30;
      do {
        if (((wVar11 - 0x2b & 0xfffd) != 0) && (iVar2 = iswspace(wVar11), iVar2 == 0)) {
          if (wVar11 != 0) goto LAB_1414d3a54;
          break;
        }
        wVar11 = *(wint_t *)(puVar9 + 2);
        puVar9 = puVar9 + 2;
      } while (wVar11 != 0);
LAB_1414d3b12:
      if ((!bVar1) || (fVar17 != 0.0)) goto LAB_1414d3a82;
    }
    bVar8 = true;
  }
  else {
LAB_1414d3a82:
    bVar8 = false;
  }
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"(float conversion from string) variations of 0",bVar8);
  puVar9 = &u_0__111;
  dVar15 = _wtof(L"0. 111");
  fVar17 = (float)dVar15;
  if (fVar17 == 0.0) {
    iVar2 = _finite((double)fVar17);
    if (iVar2 != 0) {
      bVar8 = false;
      bVar1 = false;
      wVar11 = 0x30;
      do {
        if (((wVar11 - 0x2b & 0xfffd) != 0) && (iVar2 = iswspace(wVar11), iVar2 == 0)) {
          if (wVar11 != 0) goto LAB_1414d3b36;
          break;
        }
        wVar11 = *(wint_t *)(puVar9 + 2);
        puVar9 = puVar9 + 2;
      } while (wVar11 != 0);
LAB_1414d3c00:
      if ((!bVar1) || (fVar17 != 0.0)) goto LAB_1414d3b64;
    }
    bVar8 = true;
  }
  else {
LAB_1414d3b64:
    bVar8 = false;
  }
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"(float conversion from string) variations of 0",bVar8);
  puVar9 = &u_1_0e_10;
  dVar15 = _wtof(L"1.0e+10");
  fVar17 = __real_501502f9;
  fVar16 = (float)dVar15;
  if (fVar16 == 0.0) {
    iVar2 = _finite((double)fVar16);
    if (iVar2 != 0) {
      bVar8 = false;
      wVar11 = 0x31;
      do {
        if (((wVar11 - 0x2b & 0xfffd) != 0) && (iVar2 = iswspace(wVar11), iVar2 == 0)) {
          if (wVar11 != 0) goto LAB_1414d3c24;
          break;
        }
        wVar11 = *(wint_t *)(puVar9 + 2);
        puVar9 = puVar9 + 2;
      } while (wVar11 != 0);
LAB_1414d3ce2:
      if (bVar8) goto LAB_1414d3ceb;
    }
LAB_1414d3c52:
    bVar8 = false;
  }
  else {
LAB_1414d3ceb:
    if (fVar16 != fVar17) goto LAB_1414d3c52;
    bVar8 = true;
  }
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"(float conversion from string) scientific notation",bVar8
            );
  puVar9 = &u_1_99999999e_11;
  dVar15 = _wtof(L"1.99999999e-11");
  fVar16 = (float)dVar15;
  if (fVar16 == 0.0) {
    iVar2 = _finite((double)fVar16);
    if (iVar2 != 0) {
      bVar8 = false;
      wVar11 = 0x31;
      do {
        if (((wVar11 - 0x2b & 0xfffd) != 0) && (iVar2 = iswspace(wVar11), iVar2 == 0)) {
          if (wVar11 != 0) goto LAB_1414d3d05;
          break;
        }
        wVar11 = *(wint_t *)(puVar9 + 2);
        puVar9 = puVar9 + 2;
      } while (wVar11 != 0);
LAB_1414d3dc3:
      if (bVar8) goto LAB_1414d3dcc;
    }
LAB_1414d3d33:
    bVar8 = false;
  }
  else {
LAB_1414d3dcc:
    if (fVar16 != ___real_2dafebff) goto LAB_1414d3d33;
    bVar8 = true;
  }
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"(float conversion from string) scientific notation",bVar8
            );
  puVar9 = &u_1e_10;
  dVar15 = _wtof(L"1e+10");
  fVar16 = (float)dVar15;
  if (fVar16 == 0.0) {
    iVar2 = _finite((double)fVar16);
    if (iVar2 != 0) {
      bVar8 = false;
      wVar11 = 0x31;
      do {
        if (((wVar11 - 0x2b & 0xfffd) != 0) && (iVar2 = iswspace(wVar11), iVar2 == 0)) {
          if (wVar11 != 0) goto LAB_1414d3df0;
          break;
        }
        wVar11 = *(wint_t *)(puVar9 + 2);
        puVar9 = puVar9 + 2;
      } while (wVar11 != 0);
LAB_1414d3eae:
      if (bVar8) goto LAB_1414d3eb7;
    }
LAB_1414d3e1e:
    bVar8 = false;
  }
  else {
LAB_1414d3eb7:
    if (fVar16 != fVar17) goto LAB_1414d3e1e;
    bVar8 = true;
  }
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"(float conversion from string) scientific notation",bVar8
            );
  puVar9 = &u_inf;
  dVar15 = _wtof(L"inf");
  wVar11 = 0x69;
  if (((float)dVar15 == 0.0) && (iVar2 = _finite((double)(float)dVar15), iVar2 != 0)) {
    bVar8 = false;
    do {
      if (((wVar11 - 0x2b & 0xfffd) != 0) && (iVar2 = iswspace(wVar11), iVar2 == 0)) {
        if (wVar11 != 0) goto LAB_1414d3ed0;
        break;
      }
      wVar11 = *(wint_t *)(puVar9 + 2);
      puVar9 = puVar9 + 2;
    } while (wVar11 != 0);
  }
  else {
    bVar8 = true;
  }
LAB_1414d3f0b:
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"(float conversion from string) inf",bVar8);
  puVar9 = &u_nan;
  dVar15 = _wtof(L"nan");
  wVar11 = 0x6e;
  if (((float)dVar15 == 0.0) && (iVar2 = _finite((double)(float)dVar15), iVar2 != 0)) {
    bVar8 = false;
    do {
      if (((wVar11 - 0x2b & 0xfffd) != 0) && (iVar2 = iswspace(wVar11), iVar2 == 0)) {
        if (wVar11 != 0) goto LAB_1414d3f80;
        break;
      }
      wVar11 = *(wint_t *)(puVar9 + 2);
      puVar9 = puVar9 + 2;
    } while (wVar11 != 0);
  }
  else {
    bVar8 = true;
  }
LAB_1414d3fb5:
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"(float conversion from string) nan",bVar8);
  pwVar10 = L"nan(ind)";
  dVar15 = _wtof(L"nan(ind)");
  if (((float)dVar15 == 0.0) && (iVar2 = _finite((double)(float)dVar15), iVar2 != 0)) {
    bVar8 = false;
    wVar3 = L'n';
    do {
      if (((wVar3 + L'ￕ' & 0xfffdU) != 0) && (iVar2 = iswspace(wVar3), iVar2 == 0)) {
        if (wVar3 != L'\0') goto LAB_1414d4030;
        break;
      }
      wVar3 = pwVar10[1];
      pwVar10 = pwVar10 + 1;
    } while (wVar3 != L'\0');
  }
  else {
    bVar8 = true;
  }
LAB_1414d4065:
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"(float conversion from string) nan(ind)",bVar8);
  pwVar10 = L"nananananananana";
  dVar15 = _wtof(L"nananananananana");
  if (((float)dVar15 == 0.0) && (iVar2 = _finite((double)(float)dVar15), iVar2 != 0)) {
    bVar8 = false;
    wVar3 = L'n';
    do {
      if (((wVar3 + L'ￕ' & 0xfffdU) != 0) && (iVar2 = iswspace(wVar3), iVar2 == 0)) {
        if (wVar3 != L'\0') goto LAB_1414d40e0;
        break;
      }
      wVar3 = pwVar10[1];
      pwVar10 = pwVar10 + 1;
    } while (wVar3 != L'\0');
  }
  else {
    bVar8 = true;
  }
LAB_1414d4115:
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"(float conversion from string) nananananananana",bVar8);
  puVar9 = &u_nan_ind__;
  dVar15 = _wtof(L"nan(ind)!");
  if (((float)dVar15 == 0.0) && (iVar2 = _finite((double)(float)dVar15), iVar2 != 0)) {
    bVar8 = false;
    wVar11 = 0x6e;
    do {
      if (((wVar11 - 0x2b & 0xfffd) != 0) && (iVar2 = iswspace(wVar11), iVar2 == 0)) {
        if (wVar11 != 0) goto LAB_1414d4190;
        break;
      }
      wVar11 = *(wint_t *)(puVar9 + 2);
      puVar9 = puVar9 + 2;
    } while (wVar11 != 0);
  }
  else {
    bVar8 = true;
  }
LAB_1414d41c5:
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"(float conversion from string) nan(ind)!",bVar8);
  pwVar10 = L"infinity";
  dVar15 = _wtof(L"infinity");
  if (((float)dVar15 == 0.0) && (iVar2 = _finite((double)(float)dVar15), iVar2 != 0)) {
    bVar8 = false;
    wVar3 = L'i';
    do {
      if (((wVar3 + L'ￕ' & 0xfffdU) != 0) && (iVar2 = iswspace(wVar3), iVar2 == 0)) {
        if (wVar3 != L'\0') goto LAB_1414d4240;
        break;
      }
      wVar3 = pwVar10[1];
      pwVar10 = pwVar10 + 1;
    } while (wVar3 != L'\0');
  }
  else {
    bVar8 = true;
  }
LAB_1414d4275:
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"(float conversion from string) infinity",bVar8);
  puVar9 = &u____2_5___;
  dVar15 = _wtof(L"   2.5   ");
  fVar17 = (float)dVar15;
  wVar11 = 0x20;
  if (fVar17 == 0.0) {
    iVar2 = _finite((double)fVar17);
    if (iVar2 != 0) {
      bVar8 = false;
      do {
        if (((wVar11 - 0x2b & 0xfffd) != 0) && (iVar2 = iswspace(wVar11), iVar2 == 0)) {
          if (wVar11 != 0) goto LAB_1414d42f4;
          break;
        }
        wVar11 = *(wint_t *)(puVar9 + 2);
        puVar9 = puVar9 + 2;
      } while (wVar11 != 0);
LAB_1414d43a2:
      if (bVar8) goto LAB_1414d43ab;
    }
LAB_1414d431a:
    bVar8 = false;
  }
  else {
LAB_1414d43ab:
    if (fVar17 != __real_40200000) goto LAB_1414d431a;
    bVar8 = true;
  }
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"(float conversion from string) whitespace",bVar8);
  puVar9 = &u__3_0_;
  dVar15 = _wtof(L"\t3.0\t");
  wVar11 = 9;
  fVar17 = (float)dVar15;
  if (fVar17 == 0.0) {
    iVar2 = _finite((double)fVar17);
    if (iVar2 != 0) {
      bVar8 = false;
      do {
        if (((wVar11 - 0x2b & 0xfffd) != 0) && (iVar2 = iswspace(wVar11), iVar2 == 0)) {
          if (wVar11 != 0) goto LAB_1414d43d0;
          break;
        }
        wVar11 = *(wint_t *)(puVar9 + 2);
        puVar9 = puVar9 + 2;
      } while (wVar11 != 0);
LAB_1414d447e:
      if (bVar8) goto LAB_1414d4487;
    }
LAB_1414d43f6:
    bVar8 = false;
  }
  else {
LAB_1414d4487:
    if (fVar17 != __real_40400000) goto LAB_1414d43f6;
    bVar8 = true;
  }
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"(float conversion from string) whitespace",bVar8);
  puVar9 = &u_4_0____;
  dVar15 = _wtof(L"4.0   \t");
  wVar11 = 0x34;
  fVar17 = (float)dVar15;
  if (fVar17 == 0.0) {
    iVar2 = _finite((double)fVar17);
    if (iVar2 != 0) {
      bVar8 = false;
      do {
        if (((wVar11 - 0x2b & 0xfffd) != 0) && (iVar2 = iswspace(wVar11), iVar2 == 0)) {
          if (wVar11 != 0) goto LAB_1414d44a5;
          break;
        }
        wVar11 = *(wint_t *)(puVar9 + 2);
        puVar9 = puVar9 + 2;
      } while (wVar11 != 0);
LAB_1414d4570:
      if (bVar8) goto LAB_1414d4579;
    }
LAB_1414d44d3:
    bVar8 = false;
  }
  else {
LAB_1414d4579:
    if (fVar17 != __real_40800000) goto LAB_1414d44d3;
    bVar8 = true;
  }
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"(float conversion from string) whitespace",bVar8);
  puVar9 = &u___5_25;
  dVar15 = _wtof(L"\r\n5.25");
  wVar11 = 0xd;
  fVar17 = (float)dVar15;
  if (fVar17 == 0.0) {
    iVar2 = _finite((double)fVar17);
    if (iVar2 != 0) {
      bVar8 = false;
      wVar6 = 0xd;
      do {
        if (((wVar6 - 0x2b & 0xfffd) != 0) && (iVar2 = iswspace(wVar6), iVar2 == 0)) {
          if (wVar6 != 0) goto LAB_1414d4597;
          break;
        }
        wVar6 = *(wint_t *)(puVar9 + 2);
        puVar9 = puVar9 + 2;
      } while (wVar6 != 0);
LAB_1414d4655:
      if (bVar8) goto LAB_1414d465e;
    }
LAB_1414d45c5:
    bVar8 = false;
  }
  else {
LAB_1414d465e:
    if (fVar17 != ___real_40a80000) goto LAB_1414d45c5;
    bVar8 = true;
  }
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"(float conversion from string) whitespace",bVar8);
  puVar9 = &u__6___2_;
  dVar15 = _wtof(L" 6 . 2 ");
  fVar17 = (float)dVar15;
  if (fVar17 == 0.0) {
    iVar2 = _finite((double)fVar17);
    if (iVar2 != 0) {
      bVar8 = false;
      wVar6 = 0x20;
      do {
        if (((wVar6 - 0x2b & 0xfffd) != 0) && (iVar2 = iswspace(wVar6), iVar2 == 0)) {
          if (wVar6 != 0) goto LAB_1414d4680;
          break;
        }
        wVar6 = *(wint_t *)(puVar9 + 2);
        puVar9 = puVar9 + 2;
      } while (wVar6 != 0);
LAB_1414d4741:
      if (bVar8) goto LAB_1414d474a;
    }
LAB_1414d46ae:
    bVar8 = false;
  }
  else {
LAB_1414d474a:
    if (fVar17 != __real_40c00000) goto LAB_1414d46ae;
    bVar8 = true;
  }
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"(float conversion from string) whitespace",bVar8);
  puVar12 = &u__56___2_;
  puVar9 = &u__56___2_;
  dVar15 = _wtof(L" 56 . 2 ");
  fVar17 = (float)dVar15;
  if (fVar17 == 0.0) {
    iVar2 = _finite((double)fVar17);
    if (iVar2 != 0) {
      bVar8 = false;
      wVar6 = 0x20;
      do {
        if (((wVar6 - 0x2b & 0xfffd) != 0) && (iVar2 = iswspace(wVar6), iVar2 == 0)) {
          if (wVar6 != 0) goto LAB_1414d4770;
          break;
        }
        wVar6 = *(wint_t *)(puVar9 + 2);
        puVar9 = puVar9 + 2;
      } while (wVar6 != 0);
LAB_1414d4836:
      if (bVar8) goto LAB_1414d483f;
    }
LAB_1414d479e:
    bVar8 = false;
  }
  else {
LAB_1414d483f:
    if (fVar17 != __real_42600000) goto LAB_1414d479e;
    bVar8 = true;
  }
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"(float conversion from string) whitespace",bVar8);
  puVar14 = &u__5_6___2_;
  puVar9 = &u__5_6___2_;
  dVar15 = _wtof(L" 5 6 . 2 ");
  fVar17 = (float)dVar15;
  if (fVar17 == 0.0) {
    iVar2 = _finite((double)fVar17);
    if (iVar2 != 0) {
      bVar8 = false;
      wVar6 = 0x20;
      do {
        if (((wVar6 - 0x2b & 0xfffd) != 0) && (iVar2 = iswspace(wVar6), iVar2 == 0)) {
          if (wVar6 != 0) goto LAB_1414d4860;
          break;
        }
        wVar6 = *(wint_t *)(puVar9 + 2);
        puVar9 = puVar9 + 2;
      } while (wVar6 != 0);
LAB_1414d492c:
      if (bVar8) goto LAB_1414d4935;
    }
LAB_1414d488e:
    bVar8 = false;
  }
  else {
LAB_1414d4935:
    if (fVar17 != __real_40a00000) goto LAB_1414d488e;
    bVar8 = true;
  }
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"(float conversion from string) whitespace",bVar8);
  pwVar10 = L"not a number";
  dVar15 = _wtof(L"not a number");
  if (((float)dVar15 == 0.0) && (iVar2 = _finite((double)(float)dVar15), iVar2 != 0)) {
    bVar8 = false;
    wVar3 = L'n';
    do {
      if (((wVar3 + L'ￕ' & 0xfffdU) != 0) && (iVar2 = iswspace(wVar3), iVar2 == 0)) {
        if (wVar3 != L'\0') goto LAB_1414d4950;
        break;
      }
      wVar3 = pwVar10[1];
      pwVar10 = pwVar10 + 1;
    } while (wVar3 != L'\0');
  }
  else {
    bVar8 = true;
  }
LAB_1414d498d:
  FAutomationTestBase::TestFalse
            ((FAutomationTestBase *)this,L"(float no conversion from string) not a number",bVar8);
  FAutomationTestBase::TestFalse
            ((FAutomationTestBase *)this,L"(float no conversion from string) <empty string>",false);
  pwVar13 = L".";
  pwVar10 = L".";
  dVar15 = _wtof(L".");
  if (((float)dVar15 == 0.0) && (iVar2 = _finite((double)(float)dVar15), iVar2 != 0)) {
    bVar8 = false;
    wVar3 = L'.';
    do {
      if (((wVar3 + L'ￕ' & 0xfffdU) != 0) && (iVar2 = iswspace(wVar3), iVar2 == 0)) {
        if (wVar3 != L'\0') goto LAB_1414d4a26;
        break;
      }
      wVar3 = pwVar10[1];
      pwVar10 = pwVar10 + 1;
    } while (wVar3 != L'\0');
  }
  else {
    bVar8 = true;
  }
LAB_1414d4a63:
  FAutomationTestBase::TestFalse
            ((FAutomationTestBase *)this,L"(float conversion from string) .",bVar8);
  iVar2 = _wtoi(L"1");
  if (iVar2 == 0) {
    iVar2 = _finite(0.0);
    if (iVar2 != 0) {
      bVar8 = false;
      wVar6 = 0x31;
      do {
        if (((wVar6 - 0x2b & 0xfffd) != 0) && (iVar2 = iswspace(wVar6), iVar2 == 0)) {
          if (wVar6 != 0) goto LAB_1414d4c50;
          break;
        }
        wVar6 = *(wint_t *)(puVar7 + 2);
        puVar7 = puVar7 + 2;
      } while (wVar6 != 0);
    }
LAB_1414d4ad4:
    bVar8 = false;
  }
  else {
    if (iVar2 != 1) goto LAB_1414d4ad4;
    bVar8 = true;
  }
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"(int32 conversion from string) basic numbers",bVar8);
  puVar7 = &u_1_0;
  iVar2 = _wtoi(L"1.0");
  if (iVar2 == 0) {
    iVar2 = _finite(0.0);
    if (iVar2 != 0) {
      bVar8 = false;
      wVar6 = 0x31;
      do {
        if (((wVar6 - 0x2b & 0xfffd) != 0) && (iVar2 = iswspace(wVar6), iVar2 == 0)) {
          if (wVar6 != 0) goto LAB_1414d4cb0;
          break;
        }
        wVar6 = *(wint_t *)(puVar7 + 2);
        puVar7 = puVar7 + 2;
      } while (wVar6 != 0);
    }
LAB_1414d4b4b:
    bVar8 = false;
  }
  else {
    if (iVar2 != 1) goto LAB_1414d4b4b;
    bVar8 = true;
  }
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"(int32 conversion from string) basic numbers",bVar8);
  puVar7 = &u_3_1;
  iVar2 = _wtoi(L"3.1");
  wVar6 = 0x33;
  if (iVar2 == 0) {
    iVar2 = _finite(0.0);
    if (iVar2 != 0) {
      bVar8 = false;
      wVar5 = 0x33;
      do {
        if (((wVar5 - 0x2b & 0xfffd) != 0) && (iVar2 = iswspace(wVar5), iVar2 == 0)) {
          if (wVar5 != 0) goto LAB_1414d4d10;
          break;
        }
        wVar5 = *(wint_t *)(puVar7 + 2);
        puVar7 = puVar7 + 2;
      } while (wVar5 != 0);
    }
LAB_1414d4bc5:
    bVar8 = false;
  }
  else {
    if (iVar2 != 3) goto LAB_1414d4bc5;
    bVar8 = true;
  }
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"(int32 conversion from string) basic numbers",bVar8);
  puVar7 = &u_0_5;
  iVar2 = _wtoi(L"0.5");
  if (iVar2 == 0) {
    iVar2 = _finite(0.0);
    if (iVar2 != 0) {
      bVar8 = false;
      wVar5 = 0x30;
      do {
        if (((wVar5 - 0x2b & 0xfffd) != 0) && (iVar2 = iswspace(wVar5), iVar2 == 0)) {
          if (wVar5 != 0) goto LAB_1414d4d65;
          break;
        }
        wVar5 = *(wint_t *)(puVar7 + 2);
        puVar7 = puVar7 + 2;
      } while (wVar5 != 0);
LAB_1414d4d93:
      if (!bVar8) goto LAB_1414d4dad;
    }
    bVar8 = true;
  }
  else {
LAB_1414d4dad:
    bVar8 = false;
  }
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"(int32 conversion from string) basic numbers",bVar8);
  puVar7 = &u_1_;
  iVar2 = _wtoi(L"1.");
  if (iVar2 == 0) {
    iVar2 = _finite(0.0);
    if (iVar2 != 0) {
      bVar8 = false;
      wVar5 = 0x31;
      do {
        if (((wVar5 - 0x2b & 0xfffd) != 0) && (iVar2 = iswspace(wVar5), iVar2 == 0)) {
          if (wVar5 != 0) goto LAB_1414d4ea5;
          break;
        }
        wVar5 = *(wint_t *)(puVar7 + 2);
        puVar7 = puVar7 + 2;
      } while (wVar5 != 0);
    }
LAB_1414d4e24:
    bVar8 = false;
  }
  else {
    if (iVar2 != 1) goto LAB_1414d4e24;
    bVar8 = true;
  }
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"(int32 conversion from string) basic numbers",bVar8);
  puVar7 = &u_0;
  iVar2 = _wtoi(L"0");
  if (iVar2 == 0) {
    iVar2 = _finite(0.0);
    if (iVar2 != 0) {
      bVar8 = false;
      wVar5 = 0x30;
      do {
        if (((wVar5 - 0x2b & 0xfffd) != 0) && (iVar2 = iswspace(wVar5), iVar2 == 0)) {
          if (wVar5 != 0) goto LAB_1414d4f00;
          break;
        }
        wVar5 = *(wint_t *)(puVar7 + 2);
        puVar7 = puVar7 + 2;
      } while (wVar5 != 0);
LAB_1414d4f2e:
      if (!bVar8) goto LAB_1414d4f48;
    }
    bVar8 = true;
  }
  else {
LAB_1414d4f48:
    bVar8 = false;
  }
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"(int32 conversion from string) variations of 0",bVar8);
  puVar7 = &u_0_0;
  iVar2 = _wtoi(L"0.0");
  if (iVar2 == 0) {
    iVar2 = _finite(0.0);
    if (iVar2 != 0) {
      bVar8 = false;
      wVar5 = 0x30;
      do {
        if (((wVar5 - 0x2b & 0xfffd) != 0) && (iVar2 = iswspace(wVar5), iVar2 == 0)) {
          if (wVar5 != 0) goto LAB_1414d4fc0;
          break;
        }
        wVar5 = *(wint_t *)(puVar7 + 2);
        puVar7 = puVar7 + 2;
      } while (wVar5 != 0);
LAB_1414d4fee:
      if (!bVar8) goto LAB_1414d5008;
    }
    bVar8 = true;
  }
  else {
LAB_1414d5008:
    bVar8 = false;
  }
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"(int32 conversion from string) variations of 0",bVar8);
  puVar7 = &u__0;
  iVar2 = _wtoi(L".0");
  if (iVar2 == 0) {
    iVar2 = _finite(0.0);
    if (iVar2 != 0) {
      bVar8 = false;
      wVar5 = 0x2e;
      do {
        if (((wVar5 - 0x2b & 0xfffd) != 0) && (iVar2 = iswspace(wVar5), iVar2 == 0)) {
          if (wVar5 != 0) goto LAB_1414d5080;
          break;
        }
        wVar5 = *(wint_t *)(puVar7 + 2);
        puVar7 = puVar7 + 2;
      } while (wVar5 != 0);
LAB_1414d50ae:
      if (!bVar8) goto LAB_1414d50c8;
    }
    bVar8 = true;
  }
  else {
LAB_1414d50c8:
    bVar8 = false;
  }
  FAutomationTestBase::TestFalse
            ((FAutomationTestBase *)this,L"(int32 conversion from string) variations of 0",bVar8);
  puVar7 = &u_0_;
  iVar2 = _wtoi(L"0.");
  if (iVar2 == 0) {
    iVar2 = _finite(0.0);
    if (iVar2 != 0) {
      bVar8 = false;
      wVar5 = 0x30;
      do {
        if (((wVar5 - 0x2b & 0xfffd) != 0) && (iVar2 = iswspace(wVar5), iVar2 == 0)) {
          if (wVar5 != 0) goto LAB_1414d5140;
          break;
        }
        wVar5 = *(wint_t *)(puVar7 + 2);
        puVar7 = puVar7 + 2;
      } while (wVar5 != 0);
LAB_1414d516e:
      if (!bVar8) goto LAB_1414d5188;
    }
    bVar8 = true;
  }
  else {
LAB_1414d5188:
    bVar8 = false;
  }
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"(int32 conversion from string) variations of 0",bVar8);
  puVar7 = &u_1_0e_10;
  iVar2 = _wtoi(L"1.0e+10");
  if (iVar2 == 0) {
    iVar2 = _finite(0.0);
    if (iVar2 != 0) {
      bVar8 = false;
      wVar5 = 0x31;
      do {
        if (((wVar5 - 0x2b & 0xfffd) != 0) && (iVar2 = iswspace(wVar5), iVar2 == 0)) {
          if (wVar5 != 0) goto LAB_1414d5300;
          break;
        }
        wVar5 = *(wint_t *)(puVar7 + 2);
        puVar7 = puVar7 + 2;
      } while (wVar5 != 0);
    }
LAB_1414d5203:
    bVar8 = false;
  }
  else {
    if (iVar2 != 1) goto LAB_1414d5203;
    bVar8 = true;
  }
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"(int32 conversion from string) scientific notation",bVar8
            );
  puVar7 = &u_6_0e_10;
  iVar2 = _wtoi(L"6.0e-10");
  if (iVar2 == 0) {
    iVar2 = _finite(0.0);
    if (iVar2 != 0) {
      bVar8 = false;
      wVar5 = 0x36;
      do {
        if (((wVar5 - 0x2b & 0xfffd) != 0) && (iVar2 = iswspace(wVar5), iVar2 == 0)) {
          if (wVar5 != 0) goto LAB_1414d5360;
          break;
        }
        wVar5 = *(wint_t *)(puVar7 + 2);
        puVar7 = puVar7 + 2;
      } while (wVar5 != 0);
    }
LAB_1414d527a:
    bVar8 = false;
  }
  else {
    if (iVar2 != 6) goto LAB_1414d527a;
    bVar8 = true;
  }
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"(int32 conversion from string) scientific notation",bVar8
            );
  puVar7 = &u_0_0e_10;
  iVar2 = _wtoi(L"0.0e+10");
  if (iVar2 == 0) {
    iVar2 = _finite(0.0);
    if (iVar2 != 0) {
      bVar8 = false;
      wVar5 = 0x30;
      do {
        if (((wVar5 - 0x2b & 0xfffd) != 0) && (iVar2 = iswspace(wVar5), iVar2 == 0)) {
          if (wVar5 != 0) goto LAB_1414d53b5;
          break;
        }
        wVar5 = *(wint_t *)(puVar7 + 2);
        puVar7 = puVar7 + 2;
      } while (wVar5 != 0);
LAB_1414d53e3:
      if (!bVar8) goto LAB_1414d53fd;
    }
    bVar8 = true;
  }
  else {
LAB_1414d53fd:
    bVar8 = false;
  }
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"(int32 conversion from string) scientific notation",bVar8
            );
  puVar7 = &u_0_0e_10;
  iVar2 = _wtoi(L"0.0e-10");
  if (iVar2 == 0) {
    iVar2 = _finite(0.0);
    if (iVar2 != 0) {
      bVar8 = false;
      wVar5 = 0x30;
      do {
        if (((wVar5 - 0x2b & 0xfffd) != 0) && (iVar2 = iswspace(wVar5), iVar2 == 0)) {
          if (wVar5 != 0) goto LAB_1414d5470;
          break;
        }
        wVar5 = *(wint_t *)(puVar7 + 2);
        puVar7 = puVar7 + 2;
      } while (wVar5 != 0);
LAB_1414d549e:
      if (!bVar8) goto LAB_1414d54a8;
    }
    bVar8 = true;
  }
  else {
LAB_1414d54a8:
    bVar8 = false;
  }
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"(int32 conversion from string) scientific notation",bVar8
            );
  puVar7 = &u_3e_10;
  iVar2 = _wtoi(L"3e+10");
  if (iVar2 == 0) {
    iVar2 = _finite(0.0);
    if (iVar2 != 0) {
      bVar8 = false;
      do {
        if (((wVar6 - 0x2b & 0xfffd) != 0) && (iVar2 = iswspace(wVar6), iVar2 == 0)) {
          if (wVar6 != 0) goto LAB_1414d5945;
          break;
        }
        wVar6 = *(wint_t *)(puVar7 + 2);
        puVar7 = puVar7 + 2;
      } while (wVar6 != 0);
    }
LAB_1414d551b:
    bVar8 = false;
  }
  else {
    if (iVar2 != 3) goto LAB_1414d551b;
    bVar8 = true;
  }
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"(int32 conversion from string) scientific notation",bVar8
            );
  puVar7 = &u_4e_10;
  iVar2 = _wtoi(L"4e-10");
  if (iVar2 == 0) {
    iVar2 = _finite(0.0);
    if (iVar2 != 0) {
      bVar8 = false;
      wVar6 = 0x34;
      do {
        if (((wVar6 - 0x2b & 0xfffd) != 0) && (iVar2 = iswspace(wVar6), iVar2 == 0)) {
          if (wVar6 != 0) goto LAB_1414d59a0;
          break;
        }
        wVar6 = *(wint_t *)(puVar7 + 2);
        puVar7 = puVar7 + 2;
      } while (wVar6 != 0);
    }
LAB_1414d559a:
    bVar8 = false;
  }
  else {
    if (iVar2 != 4) goto LAB_1414d559a;
    bVar8 = true;
  }
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"(int32 conversion from string) scientific notation",bVar8
            );
  puVar7 = &u____2_5___;
  iVar2 = _wtoi(L"   2.5   ");
  if (iVar2 == 0) {
    iVar2 = _finite(0.0);
    if (iVar2 != 0) {
      bVar8 = false;
      wVar6 = 0x20;
      do {
        if (((wVar6 - 0x2b & 0xfffd) != 0) && (iVar2 = iswspace(wVar6), iVar2 == 0)) {
          if (wVar6 != 0) goto LAB_1414d5a00;
          break;
        }
        wVar6 = *(wint_t *)(puVar7 + 2);
        puVar7 = puVar7 + 2;
      } while (wVar6 != 0);
    }
LAB_1414d5614:
    bVar8 = false;
  }
  else {
    if (iVar2 != 2) goto LAB_1414d5614;
    bVar8 = true;
  }
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"(int32 conversion from string) whitespace",bVar8);
  puVar7 = &u__3_0_;
  iVar2 = _wtoi(L"\t3.0\t");
  if (iVar2 == 0) {
    iVar2 = _finite(0.0);
    if (iVar2 != 0) {
      bVar8 = false;
      wVar6 = 9;
      do {
        if (((wVar6 - 0x2b & 0xfffd) != 0) && (iVar2 = iswspace(wVar6), iVar2 == 0)) {
          if (wVar6 != 0) goto LAB_1414d5a60;
          break;
        }
        wVar6 = *(wint_t *)(puVar7 + 2);
        puVar7 = puVar7 + 2;
      } while (wVar6 != 0);
    }
LAB_1414d568a:
    bVar8 = false;
  }
  else {
    if (iVar2 != 3) goto LAB_1414d568a;
    bVar8 = true;
  }
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"(int32 conversion from string) whitespace",bVar8);
  puVar7 = &u_4_0____;
  iVar2 = _wtoi(L"4.0   \t");
  if (iVar2 == 0) {
    iVar2 = _finite(0.0);
    if (iVar2 != 0) {
      bVar8 = false;
      wVar6 = 0x34;
      do {
        if (((wVar6 - 0x2b & 0xfffd) != 0) && (iVar2 = iswspace(wVar6), iVar2 == 0)) {
          if (wVar6 != 0) goto LAB_1414d5ab7;
          break;
        }
        wVar6 = *(wint_t *)(puVar7 + 2);
        puVar7 = puVar7 + 2;
      } while (wVar6 != 0);
    }
LAB_1414d5703:
    bVar8 = false;
  }
  else {
    if (iVar2 != 4) goto LAB_1414d5703;
    bVar8 = true;
  }
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"(int32 conversion from string) whitespace",bVar8);
  puVar7 = &u___5_25;
  iVar2 = _wtoi(L"\r\n5.25");
  if (iVar2 == 0) {
    iVar2 = _finite(0.0);
    if (iVar2 != 0) {
      bVar8 = false;
      do {
        if (((wVar11 - 0x2b & 0xfffd) != 0) && (iVar2 = iswspace(wVar11), iVar2 == 0)) {
          if (wVar11 != 0) goto LAB_1414d5b10;
          break;
        }
        wVar11 = *(wint_t *)(puVar7 + 2);
        puVar7 = puVar7 + 2;
      } while (wVar11 != 0);
    }
LAB_1414d5771:
    bVar8 = false;
  }
  else {
    if (iVar2 != 5) goto LAB_1414d5771;
    bVar8 = true;
  }
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"(int32 conversion from string) whitespace",bVar8);
  puVar7 = &u__6___2_;
  iVar2 = _wtoi(L" 6 . 2 ");
  if (iVar2 == 0) {
    iVar2 = _finite(0.0);
    if (iVar2 != 0) {
      bVar8 = false;
      wVar11 = 0x20;
      do {
        if (((wVar11 - 0x2b & 0xfffd) != 0) && (iVar2 = iswspace(wVar11), iVar2 == 0)) {
          if (wVar11 != 0) goto LAB_1414d5b70;
          break;
        }
        wVar11 = *(wint_t *)(puVar7 + 2);
        puVar7 = puVar7 + 2;
      } while (wVar11 != 0);
    }
LAB_1414d57eb:
    bVar8 = false;
  }
  else {
    if (iVar2 != 6) goto LAB_1414d57eb;
    bVar8 = true;
  }
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"(int32 conversion from string) whitespace",bVar8);
  iVar2 = _wtoi(L" 56 . 2 ");
  if (iVar2 == 0) {
    iVar2 = _finite(0.0);
    if (iVar2 != 0) {
      bVar8 = false;
      wVar11 = 0x20;
      do {
        if (((wVar11 - 0x2b & 0xfffd) != 0) && (iVar2 = iswspace(wVar11), iVar2 == 0)) {
          if (wVar11 != 0) goto LAB_1414d5bd0;
          break;
        }
        wVar11 = *(wint_t *)(puVar12 + 2);
        puVar12 = puVar12 + 2;
      } while (wVar11 != 0);
    }
LAB_1414d5852:
    bVar8 = false;
  }
  else {
    if (iVar2 != 0x38) goto LAB_1414d5852;
    bVar8 = true;
  }
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"(int32 conversion from string) whitespace",bVar8);
  iVar2 = _wtoi(L" 5 6 . 2 ");
  if (iVar2 == 0) {
    iVar2 = _finite(0.0);
    if (iVar2 != 0) {
      bVar8 = false;
      wVar11 = 0x20;
      do {
        if (((wVar11 - 0x2b & 0xfffd) != 0) && (iVar2 = iswspace(wVar11), iVar2 == 0)) {
          if (wVar11 != 0) goto LAB_1414d5c30;
          break;
        }
        wVar11 = *(wint_t *)(puVar14 + 2);
        puVar14 = puVar14 + 2;
      } while (wVar11 != 0);
    }
LAB_1414d58bc:
    bVar8 = false;
  }
  else {
    if (iVar2 != 5) goto LAB_1414d58bc;
    bVar8 = true;
  }
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"(int32 conversion from string) whitespace",bVar8);
  puVar7 = &u_inf;
  iVar2 = _wtoi(L"inf");
  if ((iVar2 == 0) && (iVar2 = _finite(0.0), iVar2 != 0)) {
    bVar8 = false;
    wVar11 = 0x69;
    do {
      if (((wVar11 - 0x2b & 0xfffd) != 0) && (iVar2 = iswspace(wVar11), iVar2 == 0)) {
        if (wVar11 != 0) goto LAB_1414d5c84;
        break;
      }
      wVar11 = *(wint_t *)(puVar7 + 2);
      puVar7 = puVar7 + 2;
    } while (wVar11 != 0);
  }
  else {
    bVar8 = true;
  }
LAB_1414d5cc7:
  wVar3 = L'i';
  FAutomationTestBase::TestFalse
            ((FAutomationTestBase *)this,L"(int32 no conversion from string) inf",bVar8);
  puVar7 = &u_nan;
  iVar2 = _wtoi(L"nan");
  if ((iVar2 == 0) && (iVar2 = _finite(0.0), iVar2 != 0)) {
    bVar8 = false;
    wVar11 = 0x6e;
    do {
      if (((wVar11 - 0x2b & 0xfffd) != 0) && (iVar2 = iswspace(wVar11), iVar2 == 0)) {
        if (wVar11 != 0) goto LAB_1414d5d31;
        break;
      }
      wVar11 = *(wint_t *)(puVar7 + 2);
      puVar7 = puVar7 + 2;
    } while (wVar11 != 0);
  }
  else {
    bVar8 = true;
  }
LAB_1414d5d6f:
  wVar11 = 0x6e;
  FAutomationTestBase::TestFalse
            ((FAutomationTestBase *)this,L"(int32 no conversion from string) nan",bVar8);
  pwVar10 = L"nan(ind)";
  iVar2 = _wtoi(L"nan(ind)");
  if ((iVar2 == 0) && (iVar2 = _finite(0.0), iVar2 != 0)) {
    bVar8 = false;
    wVar4 = L'n';
    do {
      if (((wVar4 + L'ￕ' & 0xfffdU) != 0) && (iVar2 = iswspace(wVar4), iVar2 == 0)) {
        if (wVar4 != L'\0') goto LAB_1414d5de0;
        break;
      }
      wVar4 = pwVar10[1];
      pwVar10 = pwVar10 + 1;
    } while (wVar4 != L'\0');
  }
  else {
    bVar8 = true;
  }
LAB_1414d5e19:
  FAutomationTestBase::TestFalse
            ((FAutomationTestBase *)this,L"(int32 no conversion from string) nan(ind)",bVar8);
  pwVar10 = L"nananananananana";
  iVar2 = _wtoi(L"nananananananana");
  if ((iVar2 == 0) && (iVar2 = _finite(0.0), iVar2 != 0)) {
    bVar8 = false;
    wVar4 = L'n';
    do {
      if (((wVar4 + L'ￕ' & 0xfffdU) != 0) && (iVar2 = iswspace(wVar4), iVar2 == 0)) {
        if (wVar4 != L'\0') goto LAB_1414d5e80;
        break;
      }
      wVar4 = pwVar10[1];
      pwVar10 = pwVar10 + 1;
    } while (wVar4 != L'\0');
  }
  else {
    bVar8 = true;
  }
LAB_1414d5eb9:
  FAutomationTestBase::TestFalse
            ((FAutomationTestBase *)this,L"(int32 no conversion from string) nananananananana",bVar8
            );
  puVar7 = &u_nan_ind__;
  iVar2 = _wtoi(L"nan(ind)!");
  if ((iVar2 == 0) && (iVar2 = _finite(0.0), iVar2 != 0)) {
    bVar8 = false;
    do {
      if (((wVar11 - 0x2b & 0xfffd) != 0) && (iVar2 = iswspace(wVar11), iVar2 == 0)) {
        if (wVar11 != 0) goto LAB_1414d5f20;
        break;
      }
      wVar11 = *(wint_t *)(puVar7 + 2);
      puVar7 = puVar7 + 2;
    } while (wVar11 != 0);
  }
  else {
    bVar8 = true;
  }
LAB_1414d5f54:
  FAutomationTestBase::TestFalse
            ((FAutomationTestBase *)this,L"(int32 no conversion from string) nan(ind)!",bVar8);
  pwVar10 = L"infinity";
  iVar2 = _wtoi(L"infinity");
  if ((iVar2 == 0) && (iVar2 = _finite(0.0), iVar2 != 0)) {
    bVar8 = false;
    do {
      if (((wVar3 + L'ￕ' & 0xfffdU) != 0) && (iVar2 = iswspace(wVar3), iVar2 == 0)) {
        if (wVar3 != L'\0') goto LAB_1414d5fc0;
        break;
      }
      wVar3 = pwVar10[1];
      pwVar10 = pwVar10 + 1;
    } while (wVar3 != L'\0');
  }
  else {
    bVar8 = true;
  }
LAB_1414d5ff4:
  FAutomationTestBase::TestFalse
            ((FAutomationTestBase *)this,L"(int32 no conversion from string) infinity",bVar8);
  iVar2 = _wtoi(L".");
  if ((iVar2 == 0) && (iVar2 = _finite(0.0), iVar2 != 0)) {
    bVar8 = false;
    wVar3 = L'.';
    do {
      if (((wVar3 + L'ￕ' & 0xfffdU) != 0) && (iVar2 = iswspace(wVar3), iVar2 == 0)) {
        if (wVar3 != L'\0') goto LAB_1414d6060;
        break;
      }
      wVar3 = pwVar13[1];
      pwVar13 = pwVar13 + 1;
    } while (wVar3 != L'\0');
  }
  else {
    bVar8 = true;
  }
LAB_1414d6095:
  FAutomationTestBase::TestFalse
            ((FAutomationTestBase *)this,L"(float no conversion from string) .",bVar8);
  FAutomationTestBase::TestFalse
            ((FAutomationTestBase *)this,L"(float no conversion from string) <empyty string>",false)
  ;
  return true;
}

// GetBeautifiedTestName @ 1414d60f0

FString * __thiscall
FLexTryParseStringTest::GetBeautifiedTestName
          (FLexTryParseStringTest *this,FString *__return_storage_ptr__)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = &(__return_storage_ptr__->Data).ArrayMax;
  piVar2 = &(__return_storage_ptr__->Data).ArrayNum;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *piVar2 = 0;
  *piVar1 = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,0x23,(ForAnyElementType *)__return_storage_ptr__,0,piVar1);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,0x23,(ForAnyElementType *)__return_storage_ptr__,piVar2,piVar1);
  FGenericPlatformString::Convert<char,wchar_t>
            ((wchar_t *)(__return_storage_ptr__->Data).AllocatorInstance.Data,0x23,
             "System.Core.Misc.LexTryParseString",0x23);
  return __return_storage_ptr__;
}

