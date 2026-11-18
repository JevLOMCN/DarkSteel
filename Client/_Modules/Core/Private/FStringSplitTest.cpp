// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 23

// GetTestFlags @ 141d597f0

EAutomationTestFlags __thiscall UE::String::FStringSplitTest::GetTestFlags(FStringSplitTest *this)

{
  return this->TestFlags;
}

// IsStressTest @ 141d59800

bool __thiscall UE::String::FStringSplitTest::IsStressTest(FStringSplitTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141d59810

uint __thiscall UE::String::FStringSplitTest::GetRequiredDeviceNum(FStringSplitTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 141d59820

FString * __thiscall
UE::String::FStringSplitTest::GetTestSourceFileName
          (FStringSplitTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\String\\SplitTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141d59850

int __thiscall UE::String::FStringSplitTest::GetTestSourceFileLine(FStringSplitTest *this)

{
  return 0xd;
}

// GetTests @ 141d59860

/* WARNING: Removing unreachable block (ram,0x000141d599de) */

void __thiscall
UE::String::FStringSplitTest::GetTests
          (FStringSplitTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
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
    iVar4 = Core::Private::
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
    iVar4 = Core::Private::
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

// RunTest @ 141d59a00

bool __thiscall UE::String::FStringSplitTest::RunTest(FStringSplitTest *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 141d59a30

FString * __thiscall
UE::String::FStringSplitTest::GetBeautifiedTestName
          (FStringSplitTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// operator()<char> @ 141d5cfe0

void __thiscall
`UE::String::FStringSplitTest::TestBody'::__l53::<lambda_3>::operator()<char>
          (void *this,char *param_1,TArrayView<TStringView<char>_const_,int> *param_2,char *param_3,
          char *param_4,Type param_5)

{
  char cVar1;
  FAutomationTestBase *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  size_t sVar6;
  FAutomationTestFramework *pFVar7;
  TStringView<char> local_48;
  TStringView<char> local_38;
  TStringView<char> local_28;
  TArrayView<TStringView<char>_const_,int> local_18;
  
  local_48.DataPtr = (char *)0x0;
  local_28.Size = 0;
  local_48.Size = 0;
  local_38.DataPtr = (char *)0x0;
  local_38.Size = 0;
  local_28.DataPtr = param_1;
  if (param_1 != (char *)0x0) {
    sVar6 = strlen(param_1);
    local_28.Size = (int)sVar6;
  }
  local_18.DataPtr = param_2->DataPtr;
  local_18.ArrayNum = param_2->ArrayNum;
  local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
  bVar4 = UE::String::SplitFirstOfAny(&local_28,&local_18,&local_48,&local_38,param_5,(int *)0x0);
  if (!bVar4) {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar2 = pFVar7->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString((FString *)&local_28,L"Condition failed");
    (*pcVar3)(pFVar2,&local_28,0);
    if (local_28.DataPtr != (char *)0x0) {
      FMemory::Free(local_28.DataPtr);
    }
  }
  if (local_48.Size == 0) {
    cVar1 = *param_3;
LAB_141d5d0bd:
    if (cVar1 != '\0') goto LAB_141d5d0bf;
  }
  else {
    iVar5 = strncmp(local_48.DataPtr,param_3,(longlong)local_48.Size);
    if (iVar5 == 0) {
      cVar1 = param_3[local_48.Size];
      goto LAB_141d5d0bd;
    }
LAB_141d5d0bf:
    pFVar7 = FAutomationTestFramework::Get();
    pFVar2 = pFVar7->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString((FString *)&local_28,L"Condition failed");
    (*pcVar3)(pFVar2,&local_28,0);
    if (local_28.DataPtr != (char *)0x0) {
      FMemory::Free(local_28.DataPtr);
    }
  }
  if (local_38.Size == 0) {
    cVar1 = *param_4;
  }
  else {
    iVar5 = strncmp(local_38.DataPtr,param_4,(longlong)local_38.Size);
    if (iVar5 != 0) goto LAB_141d5d12f;
    cVar1 = param_4[local_38.Size];
  }
  if (cVar1 == '\0') {
    return;
  }
LAB_141d5d12f:
  pFVar7 = FAutomationTestFramework::Get();
  pFVar2 = pFVar7->CurrentTest;
  pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
  ::FString::FString((FString *)&local_28,L"Condition failed");
  (*pcVar3)(pFVar2,&local_28,0);
  if (local_28.DataPtr != (char *)0x0) {
    FMemory::Free(local_28.DataPtr);
  }
  return;
}

// operator()<char> @ 141d5d190

void __thiscall
`UE::String::FStringSplitTest::TestBody'::__l78::<lambda_4>::operator()<char>
          (void *this,char *param_1,TArrayView<TStringView<char>_const_,int> *param_2,char *param_3,
          char *param_4,Type param_5)

{
  char cVar1;
  FAutomationTestBase *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  size_t sVar6;
  FAutomationTestFramework *pFVar7;
  TStringView<char> local_48;
  TStringView<char> local_38;
  TStringView<char> local_28;
  TArrayView<TStringView<char>_const_,int> local_18;
  
  local_48.DataPtr = (char *)0x0;
  local_28.Size = 0;
  local_48.Size = 0;
  local_38.DataPtr = (char *)0x0;
  local_38.Size = 0;
  local_28.DataPtr = param_1;
  if (param_1 != (char *)0x0) {
    sVar6 = strlen(param_1);
    local_28.Size = (int)sVar6;
  }
  local_18.DataPtr = param_2->DataPtr;
  local_18.ArrayNum = param_2->ArrayNum;
  local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
  bVar4 = UE::String::SplitLastOfAny(&local_28,&local_18,&local_48,&local_38,param_5,(int *)0x0);
  if (!bVar4) {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar2 = pFVar7->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString((FString *)&local_28,L"Condition failed");
    (*pcVar3)(pFVar2,&local_28,0);
    if (local_28.DataPtr != (char *)0x0) {
      FMemory::Free(local_28.DataPtr);
    }
  }
  if (local_48.Size == 0) {
    cVar1 = *param_3;
LAB_141d5d26d:
    if (cVar1 != '\0') goto LAB_141d5d26f;
  }
  else {
    iVar5 = strncmp(local_48.DataPtr,param_3,(longlong)local_48.Size);
    if (iVar5 == 0) {
      cVar1 = param_3[local_48.Size];
      goto LAB_141d5d26d;
    }
LAB_141d5d26f:
    pFVar7 = FAutomationTestFramework::Get();
    pFVar2 = pFVar7->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString((FString *)&local_28,L"Condition failed");
    (*pcVar3)(pFVar2,&local_28,0);
    if (local_28.DataPtr != (char *)0x0) {
      FMemory::Free(local_28.DataPtr);
    }
  }
  if (local_38.Size == 0) {
    cVar1 = *param_4;
  }
  else {
    iVar5 = strncmp(local_38.DataPtr,param_4,(longlong)local_38.Size);
    if (iVar5 != 0) goto LAB_141d5d2df;
    cVar1 = param_4[local_38.Size];
  }
  if (cVar1 == '\0') {
    return;
  }
LAB_141d5d2df:
  pFVar7 = FAutomationTestFramework::Get();
  pFVar2 = pFVar7->CurrentTest;
  pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
  ::FString::FString((FString *)&local_28,L"Condition failed");
  (*pcVar3)(pFVar2,&local_28,0);
  if (local_28.DataPtr != (char *)0x0) {
    FMemory::Free(local_28.DataPtr);
  }
  return;
}

// operator()<char> @ 141d5d340

void __thiscall
`UE::String::FStringSplitTest::TestBody'::__l103::<lambda_5>::operator()<char>
          (void *this,char *param_1,char param_2,char *param_3,char *param_4,Type param_5)

{
  char cVar1;
  FAutomationTestBase *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  size_t sVar6;
  FAutomationTestFramework *pFVar7;
  TStringView<char> local_38;
  TStringView<char> local_28;
  TStringView<char> local_18;
  
  local_38.DataPtr = (char *)0x0;
  local_18.Size = 0;
  local_38.Size = 0;
  local_28.DataPtr = (char *)0x0;
  local_28.Size = 0;
  local_18.DataPtr = param_1;
  if (param_1 != (char *)0x0) {
    sVar6 = strlen(param_1);
    local_18.Size = (int)sVar6;
  }
  bVar4 = UE::String::SplitFirstChar(&local_18,param_2,&local_38,&local_28,param_5);
  if (!bVar4) {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar2 = pFVar7->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString((FString *)&local_18,L"Condition failed");
    (*pcVar3)(pFVar2,&local_18,0);
    if (local_18.DataPtr != (char *)0x0) {
      FMemory::Free(local_18.DataPtr);
    }
  }
  if (local_38.Size == 0) {
    cVar1 = *param_3;
LAB_141d5d40f:
    if (cVar1 != '\0') goto LAB_141d5d411;
  }
  else {
    iVar5 = strncmp(local_38.DataPtr,param_3,(longlong)local_38.Size);
    if (iVar5 == 0) {
      cVar1 = param_3[local_38.Size];
      goto LAB_141d5d40f;
    }
LAB_141d5d411:
    pFVar7 = FAutomationTestFramework::Get();
    pFVar2 = pFVar7->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString((FString *)&local_18,L"Condition failed");
    (*pcVar3)(pFVar2,&local_18,0);
    if (local_18.DataPtr != (char *)0x0) {
      FMemory::Free(local_18.DataPtr);
    }
  }
  if (local_28.Size == 0) {
    cVar1 = *param_4;
  }
  else {
    iVar5 = strncmp(local_28.DataPtr,param_4,(longlong)local_28.Size);
    if (iVar5 != 0) goto LAB_141d5d486;
    cVar1 = param_4[local_28.Size];
  }
  if (cVar1 == '\0') {
    return;
  }
LAB_141d5d486:
  pFVar7 = FAutomationTestFramework::Get();
  pFVar2 = pFVar7->CurrentTest;
  pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
  ::FString::FString((FString *)&local_18,L"Condition failed");
  (*pcVar3)(pFVar2,&local_18,0);
  if (local_18.DataPtr != (char *)0x0) {
    FMemory::Free(local_18.DataPtr);
  }
  return;
}

// operator()<char> @ 141d5d4e0

void __thiscall
`UE::String::FStringSplitTest::TestBody'::__l119::<lambda_6>::operator()<char>
          (void *this,char *param_1,char param_2,char *param_3,char *param_4,Type param_5)

{
  char cVar1;
  FAutomationTestBase *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  size_t sVar6;
  FAutomationTestFramework *pFVar7;
  TStringView<char> local_38;
  TStringView<char> local_28;
  TStringView<char> local_18;
  
  local_38.DataPtr = (char *)0x0;
  local_18.Size = 0;
  local_38.Size = 0;
  local_28.DataPtr = (char *)0x0;
  local_28.Size = 0;
  local_18.DataPtr = param_1;
  if (param_1 != (char *)0x0) {
    sVar6 = strlen(param_1);
    local_18.Size = (int)sVar6;
  }
  bVar4 = UE::String::SplitLastChar(&local_18,param_2,&local_38,&local_28,param_5);
  if (!bVar4) {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar2 = pFVar7->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString((FString *)&local_18,L"Condition failed");
    (*pcVar3)(pFVar2,&local_18,0);
    if (local_18.DataPtr != (char *)0x0) {
      FMemory::Free(local_18.DataPtr);
    }
  }
  if (local_38.Size == 0) {
    cVar1 = *param_3;
LAB_141d5d5af:
    if (cVar1 != '\0') goto LAB_141d5d5b1;
  }
  else {
    iVar5 = strncmp(local_38.DataPtr,param_3,(longlong)local_38.Size);
    if (iVar5 == 0) {
      cVar1 = param_3[local_38.Size];
      goto LAB_141d5d5af;
    }
LAB_141d5d5b1:
    pFVar7 = FAutomationTestFramework::Get();
    pFVar2 = pFVar7->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString((FString *)&local_18,L"Condition failed");
    (*pcVar3)(pFVar2,&local_18,0);
    if (local_18.DataPtr != (char *)0x0) {
      FMemory::Free(local_18.DataPtr);
    }
  }
  if (local_28.Size == 0) {
    cVar1 = *param_4;
  }
  else {
    iVar5 = strncmp(local_28.DataPtr,param_4,(longlong)local_28.Size);
    if (iVar5 != 0) goto LAB_141d5d626;
    cVar1 = param_4[local_28.Size];
  }
  if (cVar1 == '\0') {
    return;
  }
LAB_141d5d626:
  pFVar7 = FAutomationTestFramework::Get();
  pFVar2 = pFVar7->CurrentTest;
  pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
  ::FString::FString((FString *)&local_18,L"Condition failed");
  (*pcVar3)(pFVar2,&local_18,0);
  if (local_18.DataPtr != (char *)0x0) {
    FMemory::Free(local_18.DataPtr);
  }
  return;
}

// operator()<char> @ 141d5d680

void __thiscall
`UE::String::FStringSplitTest::TestBody'::__l151::<lambda_8>::operator()<char>
          (void *this,char *param_1,TArrayView<char_const_,int> *param_2,char *param_3,char *param_4
          ,Type param_5)

{
  char cVar1;
  FAutomationTestBase *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  size_t sVar6;
  FAutomationTestFramework *pFVar7;
  TStringView<char> local_48;
  TStringView<char> local_38;
  TStringView<char> local_28;
  TArrayView<char_const_,int> local_18;
  
  local_48.DataPtr = (char *)0x0;
  local_28.Size = 0;
  local_48.Size = 0;
  local_38.DataPtr = (char *)0x0;
  local_38.Size = 0;
  local_28.DataPtr = param_1;
  if (param_1 != (char *)0x0) {
    sVar6 = strlen(param_1);
    local_28.Size = (int)sVar6;
  }
  local_18.DataPtr = param_2->DataPtr;
  local_18.ArrayNum = param_2->ArrayNum;
  local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
  bVar4 = UE::String::SplitLastOfAnyChar(&local_28,&local_18,&local_48,&local_38,param_5,(int *)0x0)
  ;
  if (!bVar4) {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar2 = pFVar7->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString((FString *)&local_28,L"Condition failed");
    (*pcVar3)(pFVar2,&local_28,0);
    if (local_28.DataPtr != (char *)0x0) {
      FMemory::Free(local_28.DataPtr);
    }
  }
  if (local_48.Size == 0) {
    cVar1 = *param_3;
LAB_141d5d75d:
    if (cVar1 != '\0') goto LAB_141d5d75f;
  }
  else {
    iVar5 = strncmp(local_48.DataPtr,param_3,(longlong)local_48.Size);
    if (iVar5 == 0) {
      cVar1 = param_3[local_48.Size];
      goto LAB_141d5d75d;
    }
LAB_141d5d75f:
    pFVar7 = FAutomationTestFramework::Get();
    pFVar2 = pFVar7->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString((FString *)&local_28,L"Condition failed");
    (*pcVar3)(pFVar2,&local_28,0);
    if (local_28.DataPtr != (char *)0x0) {
      FMemory::Free(local_28.DataPtr);
    }
  }
  if (local_38.Size == 0) {
    cVar1 = *param_4;
  }
  else {
    iVar5 = strncmp(local_38.DataPtr,param_4,(longlong)local_38.Size);
    if (iVar5 != 0) goto LAB_141d5d7cf;
    cVar1 = param_4[local_38.Size];
  }
  if (cVar1 == '\0') {
    return;
  }
LAB_141d5d7cf:
  pFVar7 = FAutomationTestFramework::Get();
  pFVar2 = pFVar7->CurrentTest;
  pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
  ::FString::FString((FString *)&local_28,L"Condition failed");
  (*pcVar3)(pFVar2,&local_28,0);
  if (local_28.DataPtr != (char *)0x0) {
    FMemory::Free(local_28.DataPtr);
  }
  return;
}

// operator()<wchar_t> @ 141d5d9c0

void __thiscall
`UE::String::FStringSplitTest::TestBody'::__l3::<lambda_1>::operator()<wchar_t>
          (void *this,wchar_t *param_1,wchar_t *param_2,wchar_t *param_3,wchar_t *param_4,
          Type param_5)

{
  wchar_t wVar1;
  FAutomationTestBase *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  size_t sVar6;
  FAutomationTestFramework *pFVar7;
  TStringView<wchar_t> local_48;
  TStringView<wchar_t> local_38;
  TStringView<wchar_t> local_28;
  TStringView<wchar_t> local_18;
  
  local_48.DataPtr = (wchar_t *)0x0;
  iVar5 = 0;
  local_48.Size = 0;
  local_38.DataPtr = (wchar_t *)0x0;
  local_38.Size = 0;
  local_28.Size = iVar5;
  local_28.DataPtr = param_2;
  if (param_2 != (wchar_t *)0x0) {
    sVar6 = wcslen(param_2);
    local_28.Size = (int)sVar6;
  }
  local_18.DataPtr = param_1;
  if (param_1 != (wchar_t *)0x0) {
    sVar6 = wcslen(param_1);
    iVar5 = (int)sVar6;
  }
  local_18.Size = iVar5;
  bVar4 = UE::String::SplitFirst(&local_18,&local_28,&local_48,&local_38,param_5);
  if (!bVar4) {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar2 = pFVar7->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString((FString *)&local_18,L"Condition failed");
    (*pcVar3)(pFVar2,&local_18,0);
    if (local_18.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_18.DataPtr);
    }
  }
  if (local_48.Size == 0) {
    wVar1 = *param_3;
LAB_141d5dab2:
    if (wVar1 != L'\0') goto LAB_141d5dab4;
  }
  else {
    iVar5 = wcsncmp(local_48.DataPtr,param_3,(longlong)local_48.Size);
    if (iVar5 == 0) {
      wVar1 = param_3[local_48.Size];
      goto LAB_141d5dab2;
    }
LAB_141d5dab4:
    pFVar7 = FAutomationTestFramework::Get();
    pFVar2 = pFVar7->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString((FString *)&local_18,L"Condition failed");
    (*pcVar3)(pFVar2,&local_18,0);
    if (local_18.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_18.DataPtr);
    }
  }
  if (local_38.Size == 0) {
    wVar1 = *param_4;
  }
  else {
    iVar5 = wcsncmp(local_38.DataPtr,param_4,(longlong)local_38.Size);
    if (iVar5 != 0) goto LAB_141d5db26;
    wVar1 = param_4[local_38.Size];
  }
  if (wVar1 == L'\0') {
    return;
  }
LAB_141d5db26:
  pFVar7 = FAutomationTestFramework::Get();
  pFVar2 = pFVar7->CurrentTest;
  pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
  ::FString::FString((FString *)&local_18,L"Condition failed");
  (*pcVar3)(pFVar2,&local_18,0);
  if (local_18.DataPtr != (wchar_t *)0x0) {
    FMemory::Free(local_18.DataPtr);
  }
  return;
}

// operator()<wchar_t> @ 141d5db80

void __thiscall
`UE::String::FStringSplitTest::TestBody'::__l28::<lambda_2>::operator()<wchar_t>
          (void *this,wchar_t *param_1,wchar_t *param_2,wchar_t *param_3,wchar_t *param_4,
          Type param_5)

{
  wchar_t wVar1;
  FAutomationTestBase *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  size_t sVar6;
  FAutomationTestFramework *pFVar7;
  TStringView<wchar_t> local_48;
  TStringView<wchar_t> local_38;
  TStringView<wchar_t> local_28;
  TStringView<wchar_t> local_18;
  
  local_48.DataPtr = (wchar_t *)0x0;
  iVar5 = 0;
  local_48.Size = 0;
  local_38.DataPtr = (wchar_t *)0x0;
  local_38.Size = 0;
  local_28.Size = iVar5;
  local_28.DataPtr = param_2;
  if (param_2 != (wchar_t *)0x0) {
    sVar6 = wcslen(param_2);
    local_28.Size = (int)sVar6;
  }
  local_18.DataPtr = param_1;
  if (param_1 != (wchar_t *)0x0) {
    sVar6 = wcslen(param_1);
    iVar5 = (int)sVar6;
  }
  local_18.Size = iVar5;
  bVar4 = UE::String::SplitLast(&local_18,&local_28,&local_48,&local_38,param_5);
  if (!bVar4) {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar2 = pFVar7->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString((FString *)&local_18,L"Condition failed");
    (*pcVar3)(pFVar2,&local_18,0);
    if (local_18.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_18.DataPtr);
    }
  }
  if (local_48.Size == 0) {
    wVar1 = *param_3;
LAB_141d5dc72:
    if (wVar1 != L'\0') goto LAB_141d5dc74;
  }
  else {
    iVar5 = wcsncmp(local_48.DataPtr,param_3,(longlong)local_48.Size);
    if (iVar5 == 0) {
      wVar1 = param_3[local_48.Size];
      goto LAB_141d5dc72;
    }
LAB_141d5dc74:
    pFVar7 = FAutomationTestFramework::Get();
    pFVar2 = pFVar7->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString((FString *)&local_18,L"Condition failed");
    (*pcVar3)(pFVar2,&local_18,0);
    if (local_18.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_18.DataPtr);
    }
  }
  if (local_38.Size == 0) {
    wVar1 = *param_4;
  }
  else {
    iVar5 = wcsncmp(local_38.DataPtr,param_4,(longlong)local_38.Size);
    if (iVar5 != 0) goto LAB_141d5dce6;
    wVar1 = param_4[local_38.Size];
  }
  if (wVar1 == L'\0') {
    return;
  }
LAB_141d5dce6:
  pFVar7 = FAutomationTestFramework::Get();
  pFVar2 = pFVar7->CurrentTest;
  pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
  ::FString::FString((FString *)&local_18,L"Condition failed");
  (*pcVar3)(pFVar2,&local_18,0);
  if (local_18.DataPtr != (wchar_t *)0x0) {
    FMemory::Free(local_18.DataPtr);
  }
  return;
}

// operator()<wchar_t> @ 141d5dd40

void __thiscall
`UE::String::FStringSplitTest::TestBody'::__l53::<lambda_3>::operator()<wchar_t>
          (void *this,wchar_t *param_1,TArrayView<TStringView<wchar_t>_const_,int> *param_2,
          wchar_t *param_3,wchar_t *param_4,Type param_5)

{
  wchar_t wVar1;
  FAutomationTestBase *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  size_t sVar6;
  FAutomationTestFramework *pFVar7;
  TStringView<wchar_t> local_48;
  TStringView<wchar_t> local_38;
  TStringView<wchar_t> local_28;
  TArrayView<TStringView<wchar_t>_const_,int> local_18;
  
  local_48.DataPtr = (wchar_t *)0x0;
  local_28.Size = 0;
  local_48.Size = 0;
  local_38.DataPtr = (wchar_t *)0x0;
  local_38.Size = 0;
  local_28.DataPtr = param_1;
  if (param_1 != (wchar_t *)0x0) {
    sVar6 = wcslen(param_1);
    local_28.Size = (int)sVar6;
  }
  local_18.DataPtr = param_2->DataPtr;
  local_18.ArrayNum = param_2->ArrayNum;
  local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
  bVar4 = UE::String::SplitFirstOfAny(&local_28,&local_18,&local_48,&local_38,param_5,(int *)0x0);
  if (!bVar4) {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar2 = pFVar7->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString((FString *)&local_28,L"Condition failed");
    (*pcVar3)(pFVar2,&local_28,0);
    if (local_28.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_28.DataPtr);
    }
  }
  if (local_48.Size == 0) {
    wVar1 = *param_3;
LAB_141d5de1f:
    if (wVar1 != L'\0') goto LAB_141d5de21;
  }
  else {
    iVar5 = wcsncmp(local_48.DataPtr,param_3,(longlong)local_48.Size);
    if (iVar5 == 0) {
      wVar1 = param_3[local_48.Size];
      goto LAB_141d5de1f;
    }
LAB_141d5de21:
    pFVar7 = FAutomationTestFramework::Get();
    pFVar2 = pFVar7->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString((FString *)&local_28,L"Condition failed");
    (*pcVar3)(pFVar2,&local_28,0);
    if (local_28.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_28.DataPtr);
    }
  }
  if (local_38.Size == 0) {
    wVar1 = *param_4;
  }
  else {
    iVar5 = wcsncmp(local_38.DataPtr,param_4,(longlong)local_38.Size);
    if (iVar5 != 0) goto LAB_141d5de93;
    wVar1 = param_4[local_38.Size];
  }
  if (wVar1 == L'\0') {
    return;
  }
LAB_141d5de93:
  pFVar7 = FAutomationTestFramework::Get();
  pFVar2 = pFVar7->CurrentTest;
  pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
  ::FString::FString((FString *)&local_28,L"Condition failed");
  (*pcVar3)(pFVar2,&local_28,0);
  if (local_28.DataPtr != (wchar_t *)0x0) {
    FMemory::Free(local_28.DataPtr);
  }
  return;
}

// operator()<wchar_t> @ 141d5def0

void __thiscall
`UE::String::FStringSplitTest::TestBody'::__l78::<lambda_4>::operator()<wchar_t>
          (void *this,wchar_t *param_1,TArrayView<TStringView<wchar_t>_const_,int> *param_2,
          wchar_t *param_3,wchar_t *param_4,Type param_5)

{
  wchar_t wVar1;
  FAutomationTestBase *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  size_t sVar6;
  FAutomationTestFramework *pFVar7;
  TStringView<wchar_t> local_48;
  TStringView<wchar_t> local_38;
  TStringView<wchar_t> local_28;
  TArrayView<TStringView<wchar_t>_const_,int> local_18;
  
  local_48.DataPtr = (wchar_t *)0x0;
  local_28.Size = 0;
  local_48.Size = 0;
  local_38.DataPtr = (wchar_t *)0x0;
  local_38.Size = 0;
  local_28.DataPtr = param_1;
  if (param_1 != (wchar_t *)0x0) {
    sVar6 = wcslen(param_1);
    local_28.Size = (int)sVar6;
  }
  local_18.DataPtr = param_2->DataPtr;
  local_18.ArrayNum = param_2->ArrayNum;
  local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
  bVar4 = UE::String::SplitLastOfAny(&local_28,&local_18,&local_48,&local_38,param_5,(int *)0x0);
  if (!bVar4) {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar2 = pFVar7->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString((FString *)&local_28,L"Condition failed");
    (*pcVar3)(pFVar2,&local_28,0);
    if (local_28.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_28.DataPtr);
    }
  }
  if (local_48.Size == 0) {
    wVar1 = *param_3;
LAB_141d5dfcf:
    if (wVar1 != L'\0') goto LAB_141d5dfd1;
  }
  else {
    iVar5 = wcsncmp(local_48.DataPtr,param_3,(longlong)local_48.Size);
    if (iVar5 == 0) {
      wVar1 = param_3[local_48.Size];
      goto LAB_141d5dfcf;
    }
LAB_141d5dfd1:
    pFVar7 = FAutomationTestFramework::Get();
    pFVar2 = pFVar7->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString((FString *)&local_28,L"Condition failed");
    (*pcVar3)(pFVar2,&local_28,0);
    if (local_28.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_28.DataPtr);
    }
  }
  if (local_38.Size == 0) {
    wVar1 = *param_4;
  }
  else {
    iVar5 = wcsncmp(local_38.DataPtr,param_4,(longlong)local_38.Size);
    if (iVar5 != 0) goto LAB_141d5e043;
    wVar1 = param_4[local_38.Size];
  }
  if (wVar1 == L'\0') {
    return;
  }
LAB_141d5e043:
  pFVar7 = FAutomationTestFramework::Get();
  pFVar2 = pFVar7->CurrentTest;
  pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
  ::FString::FString((FString *)&local_28,L"Condition failed");
  (*pcVar3)(pFVar2,&local_28,0);
  if (local_28.DataPtr != (wchar_t *)0x0) {
    FMemory::Free(local_28.DataPtr);
  }
  return;
}

// operator()<wchar_t> @ 141d5e0a0

void __thiscall
`UE::String::FStringSplitTest::TestBody'::__l103::<lambda_5>::operator()<wchar_t>
          (void *this,wchar_t *param_1,wchar_t param_2,wchar_t *param_3,wchar_t *param_4,
          Type param_5)

{
  wchar_t wVar1;
  FAutomationTestBase *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  size_t sVar6;
  FAutomationTestFramework *pFVar7;
  TStringView<wchar_t> local_38;
  TStringView<wchar_t> local_28;
  TStringView<wchar_t> local_18;
  
  local_38.DataPtr = (wchar_t *)0x0;
  local_18.Size = 0;
  local_38.Size = 0;
  local_28.DataPtr = (wchar_t *)0x0;
  local_28.Size = 0;
  local_18.DataPtr = param_1;
  if (param_1 != (wchar_t *)0x0) {
    sVar6 = wcslen(param_1);
    local_18.Size = (int)sVar6;
  }
  bVar4 = UE::String::SplitFirstChar(&local_18,param_2,&local_38,&local_28,param_5);
  if (!bVar4) {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar2 = pFVar7->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString((FString *)&local_18,L"Condition failed");
    (*pcVar3)(pFVar2,&local_18,0);
    if (local_18.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_18.DataPtr);
    }
  }
  if (local_38.Size == 0) {
    wVar1 = *param_3;
LAB_141d5e171:
    if (wVar1 != L'\0') goto LAB_141d5e173;
  }
  else {
    iVar5 = wcsncmp(local_38.DataPtr,param_3,(longlong)local_38.Size);
    if (iVar5 == 0) {
      wVar1 = param_3[local_38.Size];
      goto LAB_141d5e171;
    }
LAB_141d5e173:
    pFVar7 = FAutomationTestFramework::Get();
    pFVar2 = pFVar7->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString((FString *)&local_18,L"Condition failed");
    (*pcVar3)(pFVar2,&local_18,0);
    if (local_18.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_18.DataPtr);
    }
  }
  if (local_28.Size == 0) {
    wVar1 = *param_4;
  }
  else {
    iVar5 = wcsncmp(local_28.DataPtr,param_4,(longlong)local_28.Size);
    if (iVar5 != 0) goto LAB_141d5e1ea;
    wVar1 = param_4[local_28.Size];
  }
  if (wVar1 == L'\0') {
    return;
  }
LAB_141d5e1ea:
  pFVar7 = FAutomationTestFramework::Get();
  pFVar2 = pFVar7->CurrentTest;
  pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
  ::FString::FString((FString *)&local_18,L"Condition failed");
  (*pcVar3)(pFVar2,&local_18,0);
  if (local_18.DataPtr != (wchar_t *)0x0) {
    FMemory::Free(local_18.DataPtr);
  }
  return;
}

// operator()<wchar_t> @ 141d5e240

void __thiscall
`UE::String::FStringSplitTest::TestBody'::__l119::<lambda_6>::operator()<wchar_t>
          (void *this,wchar_t *param_1,wchar_t param_2,wchar_t *param_3,wchar_t *param_4,
          Type param_5)

{
  wchar_t wVar1;
  FAutomationTestBase *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  size_t sVar6;
  FAutomationTestFramework *pFVar7;
  TStringView<wchar_t> local_38;
  TStringView<wchar_t> local_28;
  TStringView<wchar_t> local_18;
  
  local_38.DataPtr = (wchar_t *)0x0;
  local_18.Size = 0;
  local_38.Size = 0;
  local_28.DataPtr = (wchar_t *)0x0;
  local_28.Size = 0;
  local_18.DataPtr = param_1;
  if (param_1 != (wchar_t *)0x0) {
    sVar6 = wcslen(param_1);
    local_18.Size = (int)sVar6;
  }
  bVar4 = UE::String::SplitLastChar(&local_18,param_2,&local_38,&local_28,param_5);
  if (!bVar4) {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar2 = pFVar7->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString((FString *)&local_18,L"Condition failed");
    (*pcVar3)(pFVar2,&local_18,0);
    if (local_18.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_18.DataPtr);
    }
  }
  if (local_38.Size == 0) {
    wVar1 = *param_3;
LAB_141d5e311:
    if (wVar1 != L'\0') goto LAB_141d5e313;
  }
  else {
    iVar5 = wcsncmp(local_38.DataPtr,param_3,(longlong)local_38.Size);
    if (iVar5 == 0) {
      wVar1 = param_3[local_38.Size];
      goto LAB_141d5e311;
    }
LAB_141d5e313:
    pFVar7 = FAutomationTestFramework::Get();
    pFVar2 = pFVar7->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString((FString *)&local_18,L"Condition failed");
    (*pcVar3)(pFVar2,&local_18,0);
    if (local_18.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_18.DataPtr);
    }
  }
  if (local_28.Size == 0) {
    wVar1 = *param_4;
  }
  else {
    iVar5 = wcsncmp(local_28.DataPtr,param_4,(longlong)local_28.Size);
    if (iVar5 != 0) goto LAB_141d5e38a;
    wVar1 = param_4[local_28.Size];
  }
  if (wVar1 == L'\0') {
    return;
  }
LAB_141d5e38a:
  pFVar7 = FAutomationTestFramework::Get();
  pFVar2 = pFVar7->CurrentTest;
  pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
  ::FString::FString((FString *)&local_18,L"Condition failed");
  (*pcVar3)(pFVar2,&local_18,0);
  if (local_18.DataPtr != (wchar_t *)0x0) {
    FMemory::Free(local_18.DataPtr);
  }
  return;
}

// operator()<wchar_t> @ 141d5e3e0

void __thiscall
`UE::String::FStringSplitTest::TestBody'[::H]::<lambda_7>::operator()<wchar_t>
          (void *this,wchar_t *param_1,TArrayView<wchar_t_const_,int> *param_2,wchar_t *param_3,
          wchar_t *param_4,Type param_5)

{
  wchar_t wVar1;
  FAutomationTestBase *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  size_t sVar6;
  FAutomationTestFramework *pFVar7;
  TStringView<wchar_t> local_48;
  TStringView<wchar_t> local_38;
  TStringView<wchar_t> local_28;
  TArrayView<wchar_t_const_,int> local_18;
  
  local_48.DataPtr = (wchar_t *)0x0;
  local_28.Size = 0;
  local_48.Size = 0;
  local_38.DataPtr = (wchar_t *)0x0;
  local_38.Size = 0;
  local_28.DataPtr = param_1;
  if (param_1 != (wchar_t *)0x0) {
    sVar6 = wcslen(param_1);
    local_28.Size = (int)sVar6;
  }
  local_18.DataPtr = param_2->DataPtr;
  local_18.ArrayNum = param_2->ArrayNum;
  local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
  bVar4 = UE::String::SplitFirstOfAnyChar
                    (&local_28,&local_18,&local_48,&local_38,param_5,(int *)0x0);
  if (!bVar4) {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar2 = pFVar7->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString((FString *)&local_28,L"Condition failed");
    (*pcVar3)(pFVar2,&local_28,0);
    if (local_28.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_28.DataPtr);
    }
  }
  if (local_48.Size == 0) {
    wVar1 = *param_3;
LAB_141d5e4bf:
    if (wVar1 != L'\0') goto LAB_141d5e4c1;
  }
  else {
    iVar5 = wcsncmp(local_48.DataPtr,param_3,(longlong)local_48.Size);
    if (iVar5 == 0) {
      wVar1 = param_3[local_48.Size];
      goto LAB_141d5e4bf;
    }
LAB_141d5e4c1:
    pFVar7 = FAutomationTestFramework::Get();
    pFVar2 = pFVar7->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString((FString *)&local_28,L"Condition failed");
    (*pcVar3)(pFVar2,&local_28,0);
    if (local_28.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_28.DataPtr);
    }
  }
  if (local_38.Size == 0) {
    wVar1 = *param_4;
  }
  else {
    iVar5 = wcsncmp(local_38.DataPtr,param_4,(longlong)local_38.Size);
    if (iVar5 != 0) goto LAB_141d5e533;
    wVar1 = param_4[local_38.Size];
  }
  if (wVar1 == L'\0') {
    return;
  }
LAB_141d5e533:
  pFVar7 = FAutomationTestFramework::Get();
  pFVar2 = pFVar7->CurrentTest;
  pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
  ::FString::FString((FString *)&local_28,L"Condition failed");
  (*pcVar3)(pFVar2,&local_28,0);
  if (local_28.DataPtr != (wchar_t *)0x0) {
    FMemory::Free(local_28.DataPtr);
  }
  return;
}

// operator()<wchar_t> @ 141d5e590

void __thiscall
`UE::String::FStringSplitTest::TestBody'::__l151::<lambda_8>::operator()<wchar_t>
          (void *this,wchar_t *param_1,TArrayView<wchar_t_const_,int> *param_2,wchar_t *param_3,
          wchar_t *param_4,Type param_5)

{
  wchar_t wVar1;
  FAutomationTestBase *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  size_t sVar6;
  FAutomationTestFramework *pFVar7;
  TStringView<wchar_t> local_48;
  TStringView<wchar_t> local_38;
  TStringView<wchar_t> local_28;
  TArrayView<wchar_t_const_,int> local_18;
  
  local_48.DataPtr = (wchar_t *)0x0;
  local_28.Size = 0;
  local_48.Size = 0;
  local_38.DataPtr = (wchar_t *)0x0;
  local_38.Size = 0;
  local_28.DataPtr = param_1;
  if (param_1 != (wchar_t *)0x0) {
    sVar6 = wcslen(param_1);
    local_28.Size = (int)sVar6;
  }
  local_18.DataPtr = param_2->DataPtr;
  local_18.ArrayNum = param_2->ArrayNum;
  local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
  bVar4 = UE::String::SplitLastOfAnyChar(&local_28,&local_18,&local_48,&local_38,param_5,(int *)0x0)
  ;
  if (!bVar4) {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar2 = pFVar7->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString((FString *)&local_28,L"Condition failed");
    (*pcVar3)(pFVar2,&local_28,0);
    if (local_28.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_28.DataPtr);
    }
  }
  if (local_48.Size == 0) {
    wVar1 = *param_3;
LAB_141d5e66f:
    if (wVar1 != L'\0') goto LAB_141d5e671;
  }
  else {
    iVar5 = wcsncmp(local_48.DataPtr,param_3,(longlong)local_48.Size);
    if (iVar5 == 0) {
      wVar1 = param_3[local_48.Size];
      goto LAB_141d5e66f;
    }
LAB_141d5e671:
    pFVar7 = FAutomationTestFramework::Get();
    pFVar2 = pFVar7->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString((FString *)&local_28,L"Condition failed");
    (*pcVar3)(pFVar2,&local_28,0);
    if (local_28.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_28.DataPtr);
    }
  }
  if (local_38.Size == 0) {
    wVar1 = *param_4;
  }
  else {
    iVar5 = wcsncmp(local_38.DataPtr,param_4,(longlong)local_38.Size);
    if (iVar5 != 0) goto LAB_141d5e6e3;
    wVar1 = param_4[local_38.Size];
  }
  if (wVar1 == L'\0') {
    return;
  }
LAB_141d5e6e3:
  pFVar7 = FAutomationTestFramework::Get();
  pFVar2 = pFVar7->CurrentTest;
  pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
  ::FString::FString((FString *)&local_28,L"Condition failed");
  (*pcVar3)(pFVar2,&local_28,0);
  if (local_28.DataPtr != (wchar_t *)0x0) {
    FMemory::Free(local_28.DataPtr);
  }
  return;
}

// FStringSplitTest @ 141d69d50

FStringSplitTest * __thiscall
UE::String::FStringSplitTest::FStringSplitTest(FStringSplitTest *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7FStringSplitTest_String_UE__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[Core][String][SmokeFilter]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"System::Core::String::Split");
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
  ::FString::FString(&local_18,"[Core][String][SmokeFilter]");
  local_28.Data.ArrayNum = (this->PrettyNameDotNotation).Data.ArrayNum;
  lVar5 = (longlong)local_28.Data.ArrayNum;
  pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_28.Data.ArrayNum == 0) {
    local_28.Data.ArrayMax = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
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

// TestBody @ 141d7c9a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __thiscall UE::String::FStringSplitTest::TestBody(FStringSplitTest *this,FString *param_1)

{
  FAutomationTestBase *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FAutomationTestFramework *pFVar5;
  undefined1 local_res18 [8];
  undefined2 local_res20;
  TArrayView<TStringView<wchar_t>_const_,int> local_14e8;
  TStringView<wchar_t> local_14d8;
  TStringView<wchar_t> local_14c8;
  TStringView<wchar_t> local_14b8;
  undefined1 local_14a8 [8];
  undefined1 local_14a0 [8];
  undefined1 local_1498 [8];
  undefined1 local_1490 [8];
  undefined1 local_1488 [8];
  undefined1 local_1480 [8];
  undefined1 local_1478 [8];
  undefined1 local_1470 [8];
  undefined1 local_1468 [8];
  undefined1 local_1460 [8];
  undefined1 local_1458 [8];
  undefined1 local_1450 [8];
  undefined1 local_1448 [8];
  TStringView<char> local_1440;
  TStringView<char> local_1430;
  TStringView<char> local_1420;
  TStringView<char> local_1410;
  TStringView<char> local_1400;
  TStringView<char> local_13f0;
  undefined8 local_13d8;
  undefined8 uStack_13d0;
  undefined8 local_13c8;
  undefined8 uStack_13c0;
  undefined8 local_13b8;
  undefined8 uStack_13b0;
  undefined8 local_13a8;
  undefined8 uStack_13a0;
  undefined8 local_1398;
  undefined8 uStack_1390;
  undefined8 local_1388;
  undefined8 uStack_1380;
  undefined8 local_1378;
  undefined8 uStack_1370;
  undefined8 local_1368;
  undefined8 uStack_1360;
  wchar_t *local_1358;
  undefined4 uStack_1350;
  undefined4 uStack_134c;
  FString local_1348;
  wchar_t *local_1338;
  undefined4 uStack_1330;
  undefined4 uStack_132c;
  wchar_t *local_1328;
  undefined4 uStack_1320;
  undefined4 uStack_131c;
  FString local_1318;
  wchar_t *local_1308;
  undefined4 uStack_1300;
  undefined4 uStack_12fc;
  wchar_t *local_12f8;
  undefined4 uStack_12f0;
  undefined4 uStack_12ec;
  FString local_12e8;
  wchar_t *local_12d8;
  undefined4 uStack_12d0;
  undefined4 uStack_12cc;
  wchar_t *local_12c8;
  undefined4 uStack_12c0;
  undefined4 uStack_12bc;
  FString local_12b8;
  wchar_t *local_12a8;
  undefined4 uStack_12a0;
  undefined4 uStack_129c;
  wchar_t *local_1298;
  undefined4 uStack_1290;
  uint uStack_128c;
  FString local_1288;
  wchar_t *local_1278;
  undefined4 uStack_1270;
  undefined4 uStack_126c;
  wchar_t *local_1268;
  undefined4 uStack_1260;
  undefined4 uStack_125c;
  FString local_1258;
  char *local_1248;
  undefined4 uStack_1240;
  undefined4 uStack_123c;
  char *local_1238;
  undefined4 uStack_1230;
  undefined4 uStack_122c;
  FString local_1228;
  FString local_1218;
  FString local_1208;
  wchar_t *local_11f8;
  undefined4 uStack_11f0;
  undefined4 uStack_11ec;
  undefined8 local_11e8;
  undefined4 uStack_11e0;
  uint uStack_11dc;
  FString local_11d8;
  wchar_t *local_11c8;
  undefined4 uStack_11c0;
  undefined4 uStack_11bc;
  FString local_11b8;
  FString local_11a8;
  wchar_t *local_1198;
  undefined4 uStack_1190;
  undefined4 uStack_118c;
  wchar_t *local_1188;
  undefined4 uStack_1180;
  undefined4 uStack_117c;
  FString local_1178;
  wchar_t *local_1168;
  undefined4 uStack_1160;
  undefined4 uStack_115c;
  wchar_t *local_1158;
  undefined4 uStack_1150;
  undefined4 uStack_114c;
  FString local_1148;
  wchar_t *local_1138;
  undefined4 uStack_1130;
  undefined4 uStack_112c;
  wchar_t *local_1128;
  undefined4 uStack_1120;
  undefined4 uStack_111c;
  FString local_1118;
  wchar_t *local_1108;
  undefined4 uStack_1100;
  undefined4 uStack_10fc;
  wchar_t *local_10f8;
  undefined4 uStack_10f0;
  undefined4 uStack_10ec;
  FString local_10e8;
  wchar_t *local_10d8;
  undefined4 uStack_10d0;
  undefined4 uStack_10cc;
  wchar_t *local_10c8;
  undefined4 uStack_10c0;
  uint uStack_10bc;
  FString local_10b8;
  wchar_t *local_10a8;
  undefined4 uStack_10a0;
  undefined4 uStack_109c;
  wchar_t *local_1098;
  undefined4 uStack_1090;
  undefined4 uStack_108c;
  FString local_1088;
  char *local_1078;
  undefined4 uStack_1070;
  undefined4 uStack_106c;
  char *local_1068;
  undefined4 uStack_1060;
  undefined4 uStack_105c;
  FString local_1058;
  FString local_1048;
  FString local_1038;
  wchar_t *local_1028;
  undefined4 uStack_1020;
  undefined4 uStack_101c;
  undefined8 local_1018;
  undefined4 uStack_1010;
  uint uStack_100c;
  FString local_1008;
  wchar_t *local_ff8;
  undefined4 uStack_ff0;
  undefined4 uStack_fec;
  FString local_fe8;
  FString local_fd8;
  TStringView<wchar_t> *local_fc8;
  undefined4 uStack_fc0;
  undefined4 uStack_fbc;
  TStringView<wchar_t> *local_fb8;
  undefined4 uStack_fb0;
  undefined4 uStack_fac;
  TStringView<wchar_t> local_fa8;
  TStringView<wchar_t> *local_f98;
  undefined4 uStack_f90;
  undefined4 uStack_f8c;
  TStringView<wchar_t> *local_f88;
  undefined4 uStack_f80;
  undefined4 uStack_f7c;
  TStringView<wchar_t> *local_f78;
  undefined4 uStack_f70;
  undefined4 uStack_f6c;
  TStringView<wchar_t> *local_f68;
  undefined4 uStack_f60;
  undefined4 uStack_f5c;
  TStringView<wchar_t> *local_f58;
  undefined4 uStack_f50;
  undefined4 uStack_f4c;
  TStringView<wchar_t> *local_f48;
  undefined4 uStack_f40;
  undefined4 uStack_f3c;
  wchar_t *local_f38;
  undefined4 uStack_f30;
  undefined4 uStack_f2c;
  FString local_f28;
  TStringView<wchar_t> *local_f18;
  undefined4 uStack_f10;
  undefined4 uStack_f0c;
  wchar_t *local_f08;
  undefined4 uStack_f00;
  undefined4 uStack_efc;
  FString local_ef8;
  TStringView<wchar_t> local_ee8;
  TStringView<wchar_t> *local_ed8;
  undefined4 uStack_ed0;
  undefined4 uStack_ecc;
  TStringView<wchar_t> *local_ec8;
  undefined4 uStack_ec0;
  undefined4 uStack_ebc;
  TStringView<wchar_t> *local_eb8;
  undefined4 uStack_eb0;
  undefined4 uStack_eac;
  TStringView<wchar_t> *local_ea8;
  undefined4 uStack_ea0;
  undefined4 uStack_e9c;
  TStringView<wchar_t> *local_e98;
  undefined4 uStack_e90;
  undefined4 uStack_e8c;
  TStringView<wchar_t> *local_e88;
  undefined4 uStack_e80;
  undefined4 uStack_e7c;
  wchar_t *local_e78;
  undefined4 uStack_e70;
  undefined4 uStack_e6c;
  FString local_e68;
  TStringView<wchar_t> *local_e58;
  undefined4 uStack_e50;
  undefined4 uStack_e4c;
  wchar_t *local_e48;
  undefined4 uStack_e40;
  undefined4 uStack_e3c;
  FString local_e38;
  TStringView<wchar_t> *local_e28;
  undefined4 uStack_e20;
  undefined4 uStack_e1c;
  TStringView<wchar_t> *local_e18;
  undefined4 uStack_e10;
  undefined4 uStack_e0c;
  TStringView<wchar_t> *local_e08;
  undefined4 uStack_e00;
  undefined4 uStack_dfc;
  TStringView<wchar_t> *local_df8;
  undefined4 uStack_df0;
  undefined4 uStack_dec;
  TStringView<wchar_t> *local_de8;
  undefined4 uStack_de0;
  undefined4 uStack_ddc;
  wchar_t *local_dd8;
  undefined4 uStack_dd0;
  uint uStack_dcc;
  FString local_dc8;
  TStringView<wchar_t> *local_db8;
  undefined4 uStack_db0;
  undefined4 uStack_dac;
  wchar_t *local_da8;
  undefined4 uStack_da0;
  undefined4 uStack_d9c;
  FString local_d98;
  TStringView<wchar_t> *local_d88;
  undefined4 uStack_d80;
  undefined4 uStack_d7c;
  TStringView<wchar_t> *local_d78;
  undefined4 uStack_d70;
  undefined4 uStack_d6c;
  undefined8 local_d68;
  undefined4 uStack_d60;
  uint uStack_d5c;
  FString local_d58;
  TStringView<wchar_t> *local_d48;
  undefined4 uStack_d40;
  undefined4 uStack_d3c;
  FString local_d38;
  FString local_d28;
  TStringView<wchar_t> *local_d18;
  undefined4 uStack_d10;
  undefined4 uStack_d0c;
  TStringView<wchar_t> *local_d08;
  undefined4 uStack_d00;
  undefined4 uStack_cfc;
  TStringView<wchar_t> local_cf8;
  TStringView<wchar_t> *local_ce8;
  undefined4 uStack_ce0;
  undefined4 uStack_cdc;
  TStringView<wchar_t> *local_cd8;
  undefined4 uStack_cd0;
  undefined4 uStack_ccc;
  TStringView<wchar_t> *local_cc8;
  undefined4 uStack_cc0;
  undefined4 uStack_cbc;
  TStringView<wchar_t> *local_cb8;
  undefined4 uStack_cb0;
  undefined4 uStack_cac;
  TStringView<wchar_t> *local_ca8;
  undefined4 uStack_ca0;
  undefined4 uStack_c9c;
  TStringView<wchar_t> *local_c98;
  undefined4 uStack_c90;
  undefined4 uStack_c8c;
  wchar_t *local_c88;
  undefined4 uStack_c80;
  undefined4 uStack_c7c;
  FString local_c78;
  TStringView<wchar_t> *local_c68;
  undefined4 uStack_c60;
  undefined4 uStack_c5c;
  wchar_t *local_c58;
  undefined4 uStack_c50;
  undefined4 uStack_c4c;
  FString local_c48;
  TStringView<wchar_t> local_c38;
  TStringView<wchar_t> *local_c28;
  undefined4 uStack_c20;
  undefined4 uStack_c1c;
  TStringView<wchar_t> *local_c18;
  undefined4 uStack_c10;
  undefined4 uStack_c0c;
  TStringView<wchar_t> *local_c08;
  undefined4 uStack_c00;
  undefined4 uStack_bfc;
  TStringView<wchar_t> *local_bf8;
  undefined4 uStack_bf0;
  undefined4 uStack_bec;
  TStringView<wchar_t> *local_be8;
  undefined4 uStack_be0;
  undefined4 uStack_bdc;
  TStringView<wchar_t> *local_bd8;
  undefined4 uStack_bd0;
  undefined4 uStack_bcc;
  wchar_t *local_bc8;
  undefined4 uStack_bc0;
  undefined4 uStack_bbc;
  FString local_bb8;
  TStringView<wchar_t> *local_ba8;
  undefined4 uStack_ba0;
  undefined4 uStack_b9c;
  wchar_t *local_b98;
  undefined4 uStack_b90;
  undefined4 uStack_b8c;
  FString local_b88;
  TStringView<wchar_t> *local_b78;
  undefined4 uStack_b70;
  undefined4 uStack_b6c;
  TStringView<wchar_t> *local_b68;
  undefined4 uStack_b60;
  undefined4 uStack_b5c;
  TStringView<wchar_t> *local_b58;
  undefined4 uStack_b50;
  undefined4 uStack_b4c;
  TStringView<wchar_t> *local_b48;
  undefined4 uStack_b40;
  undefined4 uStack_b3c;
  TStringView<wchar_t> *local_b38;
  undefined4 uStack_b30;
  undefined4 uStack_b2c;
  wchar_t *local_b28;
  undefined4 uStack_b20;
  uint uStack_b1c;
  FString local_b18;
  TStringView<wchar_t> *local_b08;
  undefined4 uStack_b00;
  undefined4 uStack_afc;
  wchar_t *local_af8;
  undefined4 uStack_af0;
  undefined4 uStack_aec;
  FString local_ae8;
  TStringView<wchar_t> *local_ad8;
  undefined4 uStack_ad0;
  undefined4 uStack_acc;
  TStringView<wchar_t> *local_ac8;
  undefined4 uStack_ac0;
  undefined4 uStack_abc;
  undefined8 local_ab8;
  undefined4 uStack_ab0;
  uint uStack_aac;
  FString local_aa8;
  TStringView<wchar_t> *local_a98;
  undefined4 uStack_a90;
  undefined4 uStack_a8c;
  FString local_a88;
  FString local_a78;
  wchar_t *local_a68;
  undefined4 uStack_a60;
  undefined4 uStack_a5c;
  FString local_a58;
  wchar_t *local_a48;
  undefined4 uStack_a40;
  undefined4 uStack_a3c;
  FString local_a38;
  wchar_t *local_a28;
  undefined4 uStack_a20;
  uint uStack_a1c;
  FString local_a18;
  undefined8 local_a08;
  undefined4 uStack_a00;
  uint uStack_9fc;
  FString local_9f8;
  FString local_9e8;
  FString local_9d8;
  wchar_t *local_9c8;
  undefined4 uStack_9c0;
  undefined4 uStack_9bc;
  FString local_9b8;
  wchar_t *local_9a8;
  undefined4 uStack_9a0;
  undefined4 uStack_99c;
  FString local_998;
  wchar_t *local_988;
  undefined4 uStack_980;
  uint uStack_97c;
  FString local_978;
  undefined8 local_968;
  undefined4 uStack_960;
  uint uStack_95c;
  FString local_958;
  FString local_948;
  FString local_938;
  TStringView<wchar_t> *local_928;
  undefined4 uStack_920;
  undefined4 uStack_91c;
  TStringView<wchar_t> *local_918;
  undefined4 uStack_910;
  undefined4 uStack_90c;
  TStringView<wchar_t> *local_908;
  undefined4 uStack_900;
  undefined4 uStack_8fc;
  TStringView<wchar_t> *local_8f8;
  undefined4 uStack_8f0;
  undefined4 uStack_8ec;
  TStringView<wchar_t> *local_8e8;
  undefined4 uStack_8e0;
  undefined4 uStack_8dc;
  TStringView<wchar_t> *local_8d8;
  undefined4 uStack_8d0;
  undefined4 uStack_8cc;
  wchar_t *local_8c8;
  undefined4 uStack_8c0;
  undefined4 uStack_8bc;
  FString local_8b8;
  TStringView<wchar_t> *local_8a8;
  undefined4 uStack_8a0;
  undefined4 uStack_89c;
  wchar_t *local_898;
  undefined4 uStack_890;
  undefined4 uStack_88c;
  FString local_888;
  TStringView<wchar_t> *local_878;
  undefined4 uStack_870;
  undefined4 uStack_86c;
  TStringView<wchar_t> *local_868;
  undefined4 uStack_860;
  undefined4 uStack_85c;
  TStringView<wchar_t> *local_858;
  undefined4 uStack_850;
  undefined4 uStack_84c;
  wchar_t *local_848;
  undefined4 uStack_840;
  uint uStack_83c;
  FString local_838;
  TStringView<wchar_t> *local_828;
  undefined4 uStack_820;
  undefined4 uStack_81c;
  char *local_818;
  undefined4 uStack_810;
  undefined4 uStack_80c;
  FString local_808;
  FString local_7f8;
  FString local_7e8;
  TStringView<wchar_t> *local_7d8;
  undefined4 uStack_7d0;
  undefined4 uStack_7cc;
  undefined8 local_7c8;
  undefined4 uStack_7c0;
  uint uStack_7bc;
  FString local_7b8;
  TStringView<wchar_t> *local_7a8;
  undefined4 uStack_7a0;
  undefined4 uStack_79c;
  FString local_798;
  FString local_788;
  TStringView<wchar_t> *local_778;
  undefined4 uStack_770;
  undefined4 uStack_76c;
  TStringView<wchar_t> *local_768;
  undefined4 uStack_760;
  undefined4 uStack_75c;
  TStringView<wchar_t> *local_758;
  undefined4 uStack_750;
  undefined4 uStack_74c;
  TStringView<wchar_t> *local_748;
  undefined4 uStack_740;
  undefined4 uStack_73c;
  TStringView<wchar_t> *local_738;
  undefined4 uStack_730;
  undefined4 uStack_72c;
  TStringView<wchar_t> *local_728;
  undefined4 uStack_720;
  undefined4 uStack_71c;
  wchar_t *local_718;
  undefined4 uStack_710;
  undefined4 uStack_70c;
  FString local_708;
  TStringView<wchar_t> *local_6f8;
  undefined4 uStack_6f0;
  undefined4 uStack_6ec;
  wchar_t *local_6e8;
  undefined4 uStack_6e0;
  undefined4 uStack_6dc;
  FString local_6d8;
  TStringView<wchar_t> *local_6c8;
  undefined4 uStack_6c0;
  undefined4 uStack_6bc;
  TStringView<wchar_t> *local_6b8;
  undefined4 uStack_6b0;
  undefined4 uStack_6ac;
  TStringView<wchar_t> *local_6a8;
  undefined4 uStack_6a0;
  undefined4 uStack_69c;
  wchar_t *local_698;
  undefined4 uStack_690;
  uint uStack_68c;
  FString local_688;
  TStringView<wchar_t> *local_678;
  undefined4 uStack_670;
  undefined4 uStack_66c;
  TStringView<wchar_t> *local_668;
  undefined4 uStack_660;
  undefined4 uStack_65c;
  undefined8 local_658;
  undefined4 uStack_650;
  uint uStack_64c;
  FString local_648;
  TStringView<wchar_t> *local_638;
  undefined4 uStack_630;
  undefined4 uStack_62c;
  FString local_628;
  FString local_618;
  wchar_t *local_608;
  undefined4 uStack_600;
  undefined4 uStack_5fc;
  TStringView<wchar_t> local_5f8;
  wchar_t *local_5e8;
  undefined4 local_5e0;
  TStringView<wchar_t> local_5d8;
  wchar_t *local_5c8;
  undefined4 local_5c0;
  TStringView<wchar_t> local_5b8;
  wchar_t *local_5a8;
  undefined4 local_5a0;
  TStringView<wchar_t> local_598;
  wchar_t *local_588;
  undefined4 local_580;
  TStringView<wchar_t> local_578;
  wchar_t *local_568;
  undefined4 local_560;
  TStringView<wchar_t> local_558;
  wchar_t *local_548;
  undefined4 local_540;
  TStringView<wchar_t> local_538;
  wchar_t *local_528;
  undefined4 local_520;
  TStringView<wchar_t> local_518;
  wchar_t *local_508;
  undefined4 local_500;
  TStringView<wchar_t> local_4f8;
  wchar_t *local_4e8;
  undefined4 local_4e0;
  TStringView<wchar_t> local_4d8;
  wchar_t *local_4c8;
  undefined4 local_4c0;
  TStringView<wchar_t> local_4b8;
  wchar_t *local_4a8;
  undefined4 local_4a0;
  TStringView<wchar_t> local_498;
  wchar_t *local_488;
  undefined4 local_480;
  TStringView<wchar_t> local_478;
  wchar_t *local_468;
  undefined4 local_460;
  TStringView<wchar_t> local_458;
  wchar_t *local_448;
  undefined4 local_440;
  TStringView<wchar_t> local_438;
  wchar_t *local_428;
  undefined4 local_420;
  TStringView<wchar_t> local_418;
  wchar_t *local_408;
  undefined4 local_400;
  TStringView<wchar_t> local_3f8;
  wchar_t *local_3e8;
  undefined4 local_3e0;
  TStringView<wchar_t> local_3d8;
  wchar_t *local_3c8;
  undefined4 local_3c0;
  TStringView<wchar_t> local_3b8;
  wchar_t *local_3a8;
  undefined4 local_3a0;
  TStringView<wchar_t> local_398;
  wchar_t *local_388;
  undefined4 local_380;
  TStringView<wchar_t> local_378;
  char *local_368;
  undefined4 local_360;
  TStringView<wchar_t> local_358;
  wchar_t *local_348;
  undefined4 local_340;
  TStringView<wchar_t> local_338;
  wchar_t *local_328;
  undefined4 local_320;
  TStringView<wchar_t> local_318;
  wchar_t *local_308;
  undefined4 local_300;
  TStringView<wchar_t> local_2f8;
  wchar_t *local_2e8;
  undefined4 local_2e0;
  TStringView<wchar_t> local_2d8;
  wchar_t *local_2c8;
  undefined4 local_2c0;
  TStringView<wchar_t> local_2b8;
  wchar_t *local_2a8;
  undefined4 local_2a0;
  TStringView<wchar_t> local_298;
  wchar_t *local_288;
  undefined4 local_280;
  TStringView<wchar_t> local_278;
  wchar_t *local_268;
  undefined4 local_260;
  TStringView<wchar_t> local_258;
  wchar_t *local_248;
  undefined4 local_240;
  TStringView<wchar_t> local_238;
  wchar_t *local_228;
  undefined4 local_220;
  TStringView<wchar_t> local_218;
  wchar_t *local_208;
  undefined4 local_200;
  TStringView<wchar_t> local_1f8;
  wchar_t *local_1e8;
  undefined4 local_1e0;
  TStringView<wchar_t> local_1d8;
  wchar_t *local_1c8;
  undefined4 local_1c0;
  TStringView<wchar_t> local_1b8;
  wchar_t *local_1a8;
  undefined4 local_1a0;
  TStringView<wchar_t> local_198;
  wchar_t *local_188;
  undefined4 local_180;
  TStringView<wchar_t> local_178;
  wchar_t *local_168;
  undefined4 local_160;
  TStringView<wchar_t> local_158;
  wchar_t *local_148;
  undefined4 local_140;
  TStringView<wchar_t> local_138;
  wchar_t *local_128;
  undefined4 local_120;
  TStringView<wchar_t> local_118;
  wchar_t *local_108;
  undefined4 local_100;
  TStringView<wchar_t> local_f8;
  wchar_t *local_e8;
  undefined4 local_e0;
  TStringView<wchar_t> local_d8;
  wchar_t *local_c8;
  undefined4 local_c0;
  TStringView<wchar_t> local_b8;
  wchar_t *local_a8;
  undefined4 local_a0;
  TStringView<wchar_t> local_98;
  char *local_88;
  undefined4 local_80;
  TStringView<wchar_t> local_78;
  wchar_t *local_68;
  undefined4 local_60;
  TStringView<wchar_t> local_58;
  wchar_t *local_48;
  undefined8 local_40;
  
  local_40 = 0x141d7c9c2;
  local_14c8.DataPtr = (wchar_t *)0x0;
  local_14c8.Size = 0;
  local_14b8.DataPtr = (wchar_t *)0x0;
  local_14b8.Size = 0;
  pFVar5 = FAutomationTestFramework::Get();
  pFVar1 = pFVar5->CurrentTest;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
  ::FString::FString(&local_618,L"SplitFirst");
  (*pcVar2)(pFVar1,&local_618,0,0);
  if (local_618.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_618.Data.AllocatorInstance.Data);
  }
  `UE::String::FStringSplitTest::TestBody'::__l3::<lambda_1>::operator()<wchar_t>
            (local_res18,L"AbCABCAbCABC",L"A",L"",L"bCABCAbCABC",CaseSensitive);
  `UE::String::FStringSplitTest::TestBody'::__l3::<lambda_1>::operator()<wchar_t>
            (local_res18,L"AbCABCAbCABC",L"a",L"",L"bCABCAbCABC",IgnoreCase);
  `UE::String::FStringSplitTest::TestBody'::__l3::<lambda_1>::operator()<wchar_t>
            (local_res18,L"AbCABCAbCABC",L"b",L"A",L"CABCAbCABC",CaseSensitive);
  `UE::String::FStringSplitTest::TestBody'::__l3::<lambda_1>::operator()<wchar_t>
            (local_res18,L"AbCABCAbCABC",L"B",L"AbCA",L"CAbCABC",CaseSensitive);
  `UE::String::FStringSplitTest::TestBody'::__l3::<lambda_1>::operator()<wchar_t>
            (local_res18,L"AbCABCAbCABC",L"B",L"A",L"CABCAbCABC",IgnoreCase);
  `UE::String::FStringSplitTest::TestBody'::__l3::<lambda_1>::operator()<wchar_t>
            (local_res18,L"AbCABCAbCABD",L"D",L"AbCABCAbCAB",L"",CaseSensitive);
  `UE::String::FStringSplitTest::TestBody'::__l3::<lambda_1>::operator()<wchar_t>
            (local_res18,L"AbCABCAbCABD",L"d",L"AbCABCAbCAB",L"",IgnoreCase);
  local_608 = L"a";
  uStack_600 = 1;
  local_14d8._12_4_ = uStack_5fc;
  local_14d8.Size = 1;
  local_1358 = L"AbCABCAbCABC";
  uStack_1350 = 0xc;
  local_14e8._12_4_ = uStack_134c;
  local_14e8.ArrayNum = 0xc;
  local_14d8.DataPtr = L"a";
  local_14e8.DataPtr = (TStringView<wchar_t> *)0x1507931a0;
  bVar3 = SplitFirst((TStringView<wchar_t> *)&local_14e8,&local_14d8,&local_14c8,&local_14b8,
                     CaseSensitive);
  if (bVar3) {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar1 = pFVar5->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_1348,L"Condition expected to return false but returned true");
    (*pcVar2)(pFVar1,&local_1348,0);
    if (local_1348.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1348.Data.AllocatorInstance.Data);
    }
  }
  local_1338 = L"D";
  uStack_1330 = 1;
  local_14e8._12_4_ = uStack_132c;
  local_14e8.ArrayNum = 1;
  local_1328 = L"AbCABCAbCABC";
  uStack_1320 = 0xc;
  local_14d8._12_4_ = uStack_131c;
  local_14d8.Size = 0xc;
  local_14e8.DataPtr = (TStringView<wchar_t> *)0x15066bed4;
  local_14d8.DataPtr = L"AbCABCAbCABC";
  bVar3 = SplitFirst(&local_14d8,(TStringView<wchar_t> *)&local_14e8,&local_14c8,&local_14b8,
                     IgnoreCase);
  if (bVar3) {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar1 = pFVar5->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_1318,L"Condition expected to return false but returned true");
    (*pcVar2)(pFVar1,&local_1318,0);
    if (local_1318.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1318.Data.AllocatorInstance.Data);
    }
  }
  `UE::String::FStringSplitTest::TestBody'::__l3::<lambda_1>::operator()<wchar_t>
            (local_res18,L"AbCABCAbCABC",L"AbC",L"",L"ABCAbCABC",CaseSensitive);
  `UE::String::FStringSplitTest::TestBody'::__l3::<lambda_1>::operator()<wchar_t>
            (local_res18,L"AbCABCAbCABC",L"ABC",L"AbC",L"AbCABC",CaseSensitive);
  `UE::String::FStringSplitTest::TestBody'::__l3::<lambda_1>::operator()<wchar_t>
            (local_res18,L"AbCABCAbCABC",L"Bc",L"A",L"ABCAbCABC",IgnoreCase);
  `UE::String::FStringSplitTest::TestBody'::__l3::<lambda_1>::operator()<wchar_t>
            (local_res18,L"AbCABCAbCABD",L"BD",L"AbCABCAbCA",L"",CaseSensitive);
  `UE::String::FStringSplitTest::TestBody'::__l3::<lambda_1>::operator()<wchar_t>
            (local_res18,L"AbCABCAbCABD",L"Bd",L"AbCABCAbCA",L"",IgnoreCase);
  uStack_1300 = 2;
  local_1308 = L"ab";
  local_14e8._12_4_ = uStack_12fc;
  local_14e8.ArrayNum = 2;
  local_12f8 = L"AbCABCAbCABC";
  uStack_12f0 = 0xc;
  local_14d8._12_4_ = uStack_12ec;
  local_14d8.Size = 0xc;
  local_14e8.DataPtr = (TStringView<wchar_t> *)0x1506e6b30;
  local_14d8.DataPtr = L"AbCABCAbCABC";
  bVar3 = SplitFirst(&local_14d8,(TStringView<wchar_t> *)&local_14e8,&local_14c8,&local_14b8,
                     CaseSensitive);
  if (bVar3) {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar1 = pFVar5->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_12e8,L"Condition expected to return false but returned true");
    (*pcVar2)(pFVar1,&local_12e8,0);
    if (local_12e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_12e8.Data.AllocatorInstance.Data);
    }
  }
  uStack_12d0 = 2;
  local_12d8 = L"CD";
  local_14e8._12_4_ = uStack_12cc;
  local_14e8.ArrayNum = 2;
  local_12c8 = L"AbCABCAbCABC";
  uStack_12c0 = 0xc;
  local_14d8._12_4_ = uStack_12bc;
  local_14d8.Size = 0xc;
  local_14e8.DataPtr = (TStringView<wchar_t> *)0x1507931f0;
  local_14d8.DataPtr = L"AbCABCAbCABC";
  bVar3 = SplitFirst(&local_14d8,(TStringView<wchar_t> *)&local_14e8,&local_14c8,&local_14b8,
                     IgnoreCase);
  if (bVar3) {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar1 = pFVar5->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_12b8,L"Condition expected to return false but returned true");
    (*pcVar2)(pFVar1,&local_12b8,0);
    if (local_12b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_12b8.Data.AllocatorInstance.Data);
    }
  }
  `UE::String::FStringSplitTest::TestBody'::__l3::<lambda_1>::operator()<wchar_t>
            (local_res18,L"A",L"A",L"",L"",CaseSensitive);
  `UE::String::FStringSplitTest::TestBody'::__l3::<lambda_1>::operator()<wchar_t>
            (local_res18,L"A",L"a",L"",L"",IgnoreCase);
  `UE::String::FStringSplitTest::TestBody'::__l3::<lambda_1>::operator()<wchar_t>
            (local_res18,L"ABC",L"ABC",L"",L"",CaseSensitive);
  `UE::String::FStringSplitTest::TestBody'::__l3::<lambda_1>::operator()<wchar_t>
            (local_res18,L"ABC",L"abc",L"",L"",IgnoreCase);
  local_12a8 = L"A";
  uStack_12a0 = 1;
  local_14e8._12_4_ = uStack_129c;
  local_14e8.ArrayNum = 1;
  local_1298 = L"";
  uStack_1290 = 0;
  local_14d8._8_8_ = (ulonglong)uStack_128c << 0x20;
  local_14e8.DataPtr = (TStringView<wchar_t> *)0x150620298;
  local_14d8.DataPtr = L"";
  bVar3 = SplitFirst(&local_14d8,(TStringView<wchar_t> *)&local_14e8,&local_14c8,&local_14b8,
                     CaseSensitive);
  if (bVar3) {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar1 = pFVar5->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_1288,L"Condition expected to return false but returned true");
    (*pcVar2)(pFVar1,&local_1288,0);
    if (local_1288.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1288.Data.AllocatorInstance.Data);
    }
  }
  local_1278 = L"ABC";
  local_1268 = L"AB";
  uStack_1270 = 3;
  local_14e8._12_4_ = uStack_126c;
  local_14e8.ArrayNum = 3;
  uStack_1260 = 2;
  local_14d8._12_4_ = uStack_125c;
  local_14d8.Size = 2;
  local_14d8.DataPtr = L"AB";
  local_14e8.DataPtr = (TStringView<wchar_t> *)0x15071ae50;
  bVar3 = SplitFirst(&local_14d8,(TStringView<wchar_t> *)&local_14e8,&local_14c8,&local_14b8,
                     CaseSensitive);
  if (bVar3) {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar1 = pFVar5->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_1258,L"Condition expected to return false but returned true");
    (*pcVar2)(pFVar1,&local_1258,0);
    if (local_1258.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1258.Data.AllocatorInstance.Data);
    }
  }
  uStack_1240 = 3;
  local_1248 = "ABC";
  local_14e8._12_4_ = uStack_123c;
  local_14e8.ArrayNum = 3;
  local_1238 = "AbCABCAbCABC";
  uStack_1230 = 0xc;
  local_14d8._12_4_ = uStack_122c;
  local_14d8.Size = 0xc;
  local_14d8.DataPtr = L"AbCABCAbCABC";
  local_1410.DataPtr = (char *)0x0;
  local_1410.Size = 0;
  local_13f0.DataPtr = (char *)0x0;
  local_13f0.Size = 0;
  local_14e8.DataPtr = (TStringView<wchar_t> *)0x1506de2ec;
  bVar3 = SplitFirst((TStringView<char> *)&local_14d8,(TStringView<char> *)&local_14e8,&local_1410,
                     &local_13f0,CaseSensitive);
  if (!bVar3) {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar1 = pFVar5->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_1228,L"Condition failed");
    (*pcVar2)(pFVar1,&local_1228,0);
    if (local_1228.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1228.Data.AllocatorInstance.Data);
    }
  }
  if (((local_1410.Size == 0) ||
      (iVar4 = strncmp(local_1410.DataPtr,"AbC",(longlong)local_1410.Size), iVar4 != 0)) ||
     ("AbC"[local_1410.Size] != '\0')) {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar1 = pFVar5->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_1218,L"Condition failed");
    (*pcVar2)(pFVar1,&local_1218,0);
    if (local_1218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1218.Data.AllocatorInstance.Data);
    }
  }
  if (((local_13f0.Size == 0) ||
      (iVar4 = strncmp(local_13f0.DataPtr,"AbCABC",(longlong)local_13f0.Size), iVar4 != 0)) ||
     ("AbCABC"[local_13f0.Size] != '\0')) {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar1 = pFVar5->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_1208,L"Condition failed");
    (*pcVar2)(pFVar1,&local_1208,0);
    if (local_1208.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1208.Data.AllocatorInstance.Data);
    }
  }
  uStack_11f0 = 10;
  local_11f8 = L"SearchTerm";
  local_14e8._12_4_ = uStack_11ec;
  local_14e8.ArrayNum = 10;
  local_11e8 = 0;
  uStack_11e0 = 0;
  local_14d8._8_8_ = (ulonglong)uStack_11dc << 0x20;
  local_14e8.DataPtr = (TStringView<wchar_t> *)0x150793220;
  local_14d8.DataPtr = (wchar_t *)0x0;
  bVar3 = SplitFirst(&local_14d8,(TStringView<wchar_t> *)&local_14e8,&local_14c8,&local_14b8,
                     CaseSensitive);
  if (bVar3) {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar1 = pFVar5->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_11d8,L"Condition expected to return false but returned true");
    (*pcVar2)(pFVar1,&local_11d8,0);
    if (local_11d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_11d8.Data.AllocatorInstance.Data);
    }
  }
  uStack_13d0 = 0;
  local_11c8 = L"SearchTerm";
  local_13d8 = 0;
  uStack_11c0 = 10;
  local_14e8._12_4_ = uStack_11bc;
  local_14e8.ArrayNum = 10;
  local_14e8.DataPtr = (TStringView<wchar_t> *)0x150793220;
  local_14d8.DataPtr = (wchar_t *)0x0;
  local_14d8.Size = 0;
  local_14d8._12_4_ = 0;
  bVar3 = SplitFirst(&local_14d8,(TStringView<wchar_t> *)&local_14e8,&local_14c8,&local_14b8,
                     CaseSensitive);
  if (bVar3) {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar1 = pFVar5->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_11b8,L"Condition expected to return false but returned true");
    (*pcVar2)(pFVar1,&local_11b8,0);
    if (local_11b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_11b8.Data.AllocatorInstance.Data);
    }
  }
  pFVar5 = FAutomationTestFramework::Get();
  pFVar1 = pFVar5->CurrentTest;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
  ::FString::FString(&local_11a8,L"SplitLast");
  (*pcVar2)(pFVar1,&local_11a8,0,0);
  if (local_11a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_11a8.Data.AllocatorInstance.Data);
  }
  `UE::String::FStringSplitTest::TestBody'::__l28::<lambda_2>::operator()<wchar_t>
            (local_res18,L"AbCABCAbCABC",L"b",L"AbCABCA",L"CABC",CaseSensitive);
  `UE::String::FStringSplitTest::TestBody'::__l28::<lambda_2>::operator()<wchar_t>
            (local_res18,L"AbCABCAbCABC",L"B",L"AbCABCAbCA",L"C",CaseSensitive);
  `UE::String::FStringSplitTest::TestBody'::__l28::<lambda_2>::operator()<wchar_t>
            (local_res18,L"AbCABCAbCABC",L"b",L"AbCABCAbCA",L"C",IgnoreCase);
  `UE::String::FStringSplitTest::TestBody'::__l28::<lambda_2>::operator()<wchar_t>
            (local_res18,L"AbCABCAbCABD",L"D",L"AbCABCAbCAB",L"",CaseSensitive);
  `UE::String::FStringSplitTest::TestBody'::__l28::<lambda_2>::operator()<wchar_t>
            (local_res18,L"AbCABCAbCABD",L"d",L"AbCABCAbCAB",L"",IgnoreCase);
  uStack_1190 = 1;
  local_1198 = L"a";
  local_14e8._12_4_ = uStack_118c;
  local_14e8.ArrayNum = 1;
  local_1188 = L"AbCABCAbCABC";
  uStack_1180 = 0xc;
  local_14d8._12_4_ = uStack_117c;
  local_14d8.Size = 0xc;
  local_14e8.DataPtr = (TStringView<wchar_t> *)0x150623124;
  local_14d8.DataPtr = L"AbCABCAbCABC";
  bVar3 = SplitLast(&local_14d8,(TStringView<wchar_t> *)&local_14e8,&local_14c8,&local_14b8,
                    CaseSensitive);
  if (bVar3) {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar1 = pFVar5->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_1178,L"Condition expected to return false but returned true");
    (*pcVar2)(pFVar1,&local_1178,0);
    if (local_1178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1178.Data.AllocatorInstance.Data);
    }
  }
  uStack_1160 = 1;
  local_1168 = L"D";
  local_14e8._12_4_ = uStack_115c;
  local_14e8.ArrayNum = 1;
  local_1158 = L"AbCABCAbCABC";
  uStack_1150 = 0xc;
  local_14d8._12_4_ = uStack_114c;
  local_14d8.Size = 0xc;
  local_14e8.DataPtr = (TStringView<wchar_t> *)0x15066bed4;
  local_14d8.DataPtr = L"AbCABCAbCABC";
  bVar3 = SplitLast(&local_14d8,(TStringView<wchar_t> *)&local_14e8,&local_14c8,&local_14b8,
                    IgnoreCase);
  if (bVar3) {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar1 = pFVar5->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_1148,L"Condition expected to return false but returned true");
    (*pcVar2)(pFVar1,&local_1148,0);
    if (local_1148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1148.Data.AllocatorInstance.Data);
    }
  }
  `UE::String::FStringSplitTest::TestBody'::__l28::<lambda_2>::operator()<wchar_t>
            (local_res18,L"AbCABCAbCABC",L"AbC",L"AbCABC",L"ABC",CaseSensitive);
  `UE::String::FStringSplitTest::TestBody'::__l28::<lambda_2>::operator()<wchar_t>
            (local_res18,L"AbCABCAbCABC",L"ABC",L"AbCABCAbC",L"",CaseSensitive);
  `UE::String::FStringSplitTest::TestBody'::__l28::<lambda_2>::operator()<wchar_t>
            (local_res18,L"AbCABCAbCABC",L"BC",L"AbCABCAbCA",L"",CaseSensitive);
  `UE::String::FStringSplitTest::TestBody'::__l28::<lambda_2>::operator()<wchar_t>
            (local_res18,L"AbCABCAbCABC",L"Bc",L"AbCABCAbCA",L"",IgnoreCase);
  uStack_1130 = 2;
  local_1138 = L"ab";
  local_14e8._12_4_ = uStack_112c;
  local_14e8.ArrayNum = 2;
  local_1128 = L"AbCABCAbCABC";
  uStack_1120 = 0xc;
  local_14d8._12_4_ = uStack_111c;
  local_14d8.Size = 0xc;
  local_14e8.DataPtr = (TStringView<wchar_t> *)0x1506e6b30;
  local_14d8.DataPtr = L"AbCABCAbCABC";
  bVar3 = SplitLast(&local_14d8,(TStringView<wchar_t> *)&local_14e8,&local_14c8,&local_14b8,
                    CaseSensitive);
  if (bVar3) {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar1 = pFVar5->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_1118,L"Condition expected to return false but returned true");
    (*pcVar2)(pFVar1,&local_1118,0);
    if (local_1118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1118.Data.AllocatorInstance.Data);
    }
  }
  uStack_1100 = 2;
  local_1108 = L"CD";
  local_14e8._12_4_ = uStack_10fc;
  local_14e8.ArrayNum = 2;
  local_10f8 = L"AbCABCAbCABC";
  uStack_10f0 = 0xc;
  local_14d8._12_4_ = uStack_10ec;
  local_14d8.Size = 0xc;
  local_14e8.DataPtr = (TStringView<wchar_t> *)0x1507931f0;
  local_14d8.DataPtr = L"AbCABCAbCABC";
  bVar3 = SplitLast(&local_14d8,(TStringView<wchar_t> *)&local_14e8,&local_14c8,&local_14b8,
                    IgnoreCase);
  if (bVar3) {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar1 = pFVar5->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_10e8,L"Condition expected to return false but returned true");
    (*pcVar2)(pFVar1,&local_10e8,0);
    if (local_10e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_10e8.Data.AllocatorInstance.Data);
    }
  }
  `UE::String::FStringSplitTest::TestBody'::__l28::<lambda_2>::operator()<wchar_t>
            (local_res18,L"A",L"A",L"",L"",CaseSensitive);
  `UE::String::FStringSplitTest::TestBody'::__l28::<lambda_2>::operator()<wchar_t>
            (local_res18,L"A",L"A",L"",L"",IgnoreCase);
  `UE::String::FStringSplitTest::TestBody'::__l28::<lambda_2>::operator()<wchar_t>
            (local_res18,L"ABC",L"ABC",L"",L"",CaseSensitive);
  `UE::String::FStringSplitTest::TestBody'::__l28::<lambda_2>::operator()<wchar_t>
            (local_res18,L"ABC",L"abc",L"",L"",IgnoreCase);
  local_10d8 = L"A";
  uStack_10d0 = 1;
  local_14e8._12_4_ = uStack_10cc;
  local_14e8.ArrayNum = 1;
  local_10c8 = L"";
  uStack_10c0 = 0;
  local_14d8._8_8_ = (ulonglong)uStack_10bc << 0x20;
  local_14e8.DataPtr = (TStringView<wchar_t> *)0x150620298;
  local_14d8.DataPtr = L"";
  bVar3 = SplitLast(&local_14d8,(TStringView<wchar_t> *)&local_14e8,&local_14c8,&local_14b8,
                    CaseSensitive);
  if (bVar3) {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar1 = pFVar5->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_10b8,L"Condition expected to return false but returned true");
    (*pcVar2)(pFVar1,&local_10b8,0);
    if (local_10b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_10b8.Data.AllocatorInstance.Data);
    }
  }
  local_10a8 = L"ABC";
  local_1098 = L"AB";
  uStack_10a0 = 3;
  local_14e8._12_4_ = uStack_109c;
  local_14e8.ArrayNum = 3;
  uStack_1090 = 2;
  local_14d8._12_4_ = uStack_108c;
  local_14d8.Size = 2;
  local_14d8.DataPtr = L"AB";
  local_14e8.DataPtr = (TStringView<wchar_t> *)0x15071ae50;
  bVar3 = SplitLast(&local_14d8,(TStringView<wchar_t> *)&local_14e8,&local_14c8,&local_14b8,
                    CaseSensitive);
  if (bVar3) {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar1 = pFVar5->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_1088,L"Condition expected to return false but returned true");
    (*pcVar2)(pFVar1,&local_1088,0);
    if (local_1088.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1088.Data.AllocatorInstance.Data);
    }
  }
  uStack_1070 = 3;
  local_1078 = "ABC";
  local_14e8._12_4_ = uStack_106c;
  local_14e8.ArrayNum = 3;
  local_1068 = "AbCABCAbCABC";
  uStack_1060 = 0xc;
  local_14d8._12_4_ = uStack_105c;
  local_14d8.Size = 0xc;
  local_14d8.DataPtr = L"AbCABCAbCABC";
  local_1440.DataPtr = (char *)0x0;
  local_1440.Size = 0;
  local_1430.DataPtr = (char *)0x0;
  local_1430.Size = 0;
  local_14e8.DataPtr = (TStringView<wchar_t> *)0x1506de2ec;
  bVar3 = SplitLast((TStringView<char> *)&local_14d8,(TStringView<char> *)&local_14e8,&local_1440,
                    &local_1430,CaseSensitive);
  if (!bVar3) {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar1 = pFVar5->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_1058,L"Condition failed");
    (*pcVar2)(pFVar1,&local_1058,0);
    if (local_1058.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1058.Data.AllocatorInstance.Data);
    }
  }
  if (((local_1440.Size == 0) ||
      (iVar4 = strncmp(local_1440.DataPtr,"AbCABCAbC",(longlong)local_1440.Size), iVar4 != 0)) ||
     ("AbCABCAbC"[local_1440.Size] != '\0')) {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar1 = pFVar5->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_1048,L"Condition failed");
    (*pcVar2)(pFVar1,&local_1048,0);
    if (local_1048.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1048.Data.AllocatorInstance.Data);
    }
  }
  if ((local_1430.Size != 0) &&
     ((iVar4 = strncmp(local_1430.DataPtr,"",(longlong)local_1430.Size), iVar4 != 0 ||
      (""[local_1430.Size] != '\0')))) {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar1 = pFVar5->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_1038,L"Condition failed");
    (*pcVar2)(pFVar1,&local_1038,0);
    if (local_1038.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1038.Data.AllocatorInstance.Data);
    }
  }
  uStack_1020 = 10;
  local_1028 = L"SearchTerm";
  local_14e8._12_4_ = uStack_101c;
  local_14e8.ArrayNum = 10;
  local_1018 = 0;
  uStack_1010 = 0;
  local_14d8._8_8_ = (ulonglong)uStack_100c << 0x20;
  local_14e8.DataPtr = (TStringView<wchar_t> *)0x150793220;
  local_14d8.DataPtr = (wchar_t *)0x0;
  bVar3 = SplitLast(&local_14d8,(TStringView<wchar_t> *)&local_14e8,&local_14c8,&local_14b8,
                    CaseSensitive);
  if (bVar3) {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar1 = pFVar5->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_1008,L"Condition expected to return false but returned true");
    (*pcVar2)(pFVar1,&local_1008,0);
    if (local_1008.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1008.Data.AllocatorInstance.Data);
    }
  }
  uStack_13c0 = 0;
  local_ff8 = L"SearchTerm";
  local_13c8 = 0;
  uStack_ff0 = 10;
  local_14e8._12_4_ = uStack_fec;
  local_14e8.ArrayNum = 10;
  local_14e8.DataPtr = (TStringView<wchar_t> *)0x150793220;
  local_14d8.DataPtr = (wchar_t *)0x0;
  local_14d8.Size = 0;
  local_14d8._12_4_ = 0;
  bVar3 = SplitLast(&local_14d8,(TStringView<wchar_t> *)&local_14e8,&local_14c8,&local_14b8,
                    CaseSensitive);
  if (bVar3) {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar1 = pFVar5->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_fe8,L"Condition expected to return false but returned true");
    (*pcVar2)(pFVar1,&local_fe8,0);
    if (local_fe8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_fe8.Data.AllocatorInstance.Data);
    }
  }
  pFVar5 = FAutomationTestFramework::Get();
  pFVar1 = pFVar5->CurrentTest;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
  ::FString::FString(&local_fd8,L"SplitFirstOfAny");
  (*pcVar2)(pFVar1,&local_fd8,0,0);
  if (local_fd8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_fd8.Data.AllocatorInstance.Data);
  }
  uStack_fc0 = 2;
  local_5e8 = L"B";
  local_14e8.DataPtr = &local_5f8;
  local_14e8._12_4_ = uStack_fbc;
  local_14e8.ArrayNum = 2;
  local_5f8.DataPtr = L"A";
  local_5f8.Size = 1;
  local_5e0 = 1;
  local_fc8 = local_14e8.DataPtr;
  `UE::String::FStringSplitTest::TestBody'::__l53::<lambda_3>::operator()<wchar_t>
            (local_res18,L"AbCABCAbcABC",&local_14e8,L"",L"bCABCAbcABC",CaseSensitive);
  uStack_fb0 = 2;
  local_5d8.DataPtr = L"a";
  local_5c8 = L"B";
  local_14e8.DataPtr = &local_5d8;
  local_5d8.Size = 1;
  local_14e8._12_4_ = uStack_fac;
  local_14e8.ArrayNum = 2;
  local_5c0 = 1;
  local_fb8 = local_14e8.DataPtr;
  `UE::String::FStringSplitTest::TestBody'::__l53::<lambda_3>::operator()<wchar_t>
            (local_res18,L"AbCABCAbcABC",&local_14e8,L"",L"bCABCAbcABC",IgnoreCase);
  uStack_f90 = 1;
  local_fa8.DataPtr = L"b";
  local_14e8.DataPtr = &local_fa8;
  local_14e8._12_4_ = uStack_f8c;
  local_14e8.ArrayNum = 1;
  local_fa8.Size = 1;
  local_f98 = local_14e8.DataPtr;
  `UE::String::FStringSplitTest::TestBody'::__l53::<lambda_3>::operator()<wchar_t>
            (local_res18,L"AbCABCAbcABC",&local_14e8,L"A",L"CABCAbcABC",CaseSensitive);
  uStack_f80 = 2;
  local_5a8 = L"B";
  local_14e8.DataPtr = &local_5b8;
  local_14e8._12_4_ = uStack_f7c;
  local_14e8.ArrayNum = 2;
  local_5b8.DataPtr = L"c";
  local_5b8.Size = 1;
  local_5a0 = 1;
  local_f88 = local_14e8.DataPtr;
  `UE::String::FStringSplitTest::TestBody'::__l53::<lambda_3>::operator()<wchar_t>
            (local_res18,L"AbCABCAbcABC",&local_14e8,L"AbCA",L"CAbcABC",CaseSensitive);
  uStack_f70 = 2;
  local_588 = L"B";
  local_14e8.DataPtr = &local_598;
  local_14e8._12_4_ = uStack_f6c;
  local_14e8.ArrayNum = 2;
  local_598.DataPtr = L"c";
  local_598.Size = 1;
  local_580 = 1;
  local_f78 = local_14e8.DataPtr;
  `UE::String::FStringSplitTest::TestBody'::__l53::<lambda_3>::operator()<wchar_t>
            (local_res18,L"AbCABCAbcABC",&local_14e8,L"A",L"CABCAbcABC",IgnoreCase);
  uStack_f60 = 2;
  local_578.DataPtr = L"E";
  local_14e8.DataPtr = &local_578;
  local_14e8._12_4_ = uStack_f5c;
  local_14e8.ArrayNum = 2;
  local_578.Size = 1;
  local_568 = L"D";
  local_560 = 1;
  local_f68 = local_14e8.DataPtr;
  `UE::String::FStringSplitTest::TestBody'::__l53::<lambda_3>::operator()<wchar_t>
            (local_res18,L"AbCABCAbcABD",&local_14e8,L"AbCABCAbcAB",L"",CaseSensitive);
  uStack_f50 = 2;
  local_558.DataPtr = L"E";
  local_548 = L"d";
  local_14e8.DataPtr = &local_558;
  local_558.Size = 1;
  local_14e8._12_4_ = uStack_f4c;
  local_14e8.ArrayNum = 2;
  local_540 = 1;
  local_f58 = local_14e8.DataPtr;
  `UE::String::FStringSplitTest::TestBody'::__l53::<lambda_3>::operator()<wchar_t>
            (local_res18,L"AbCABCAbcABD",&local_14e8,L"AbCABCAbcAB",L"",IgnoreCase);
  uStack_f40 = 2;
  local_528 = L"a";
  local_14e8.DataPtr = &local_538;
  local_f38 = L"AbCABCAbcABC";
  local_14e8._12_4_ = uStack_f3c;
  local_14e8.ArrayNum = 2;
  uStack_f30 = 0xc;
  local_14d8._12_4_ = uStack_f2c;
  local_14d8.Size = 0xc;
  local_538.DataPtr = L"D";
  local_538.Size = 1;
  local_520 = 1;
  local_14d8.DataPtr = L"AbCABCAbcABC";
  local_f48 = local_14e8.DataPtr;
  bVar3 = SplitFirstOfAny(&local_14d8,&local_14e8,&local_14c8,&local_14b8,CaseSensitive,(int *)0x0);
  if (bVar3) {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar1 = pFVar5->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_f28,L"Condition expected to return false but returned true");
    (*pcVar2)(pFVar1,&local_f28,0);
    if (local_f28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f28.Data.AllocatorInstance.Data);
    }
  }
  uStack_f10 = 2;
  local_518.DataPtr = L"E";
  local_f08 = L"AbCABCAbcABC";
  local_508 = L"D";
  local_14e8.DataPtr = &local_518;
  uStack_f00 = 0xc;
  local_14d8._12_4_ = uStack_efc;
  local_14d8.Size = 0xc;
  local_14e8._12_4_ = uStack_f0c;
  local_14e8.ArrayNum = 2;
  local_518.Size = 1;
  local_500 = 1;
  local_14d8.DataPtr = L"AbCABCAbcABC";
  local_f18 = local_14e8.DataPtr;
  bVar3 = SplitFirstOfAny(&local_14d8,&local_14e8,&local_14c8,&local_14b8,IgnoreCase,(int *)0x0);
  if (bVar3) {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar1 = pFVar5->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_ef8,L"Condition expected to return false but returned true");
    (*pcVar2)(pFVar1,&local_ef8,0);
    if (local_ef8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_ef8.Data.AllocatorInstance.Data);
    }
  }
  local_14e8.DataPtr = &local_ee8;
  uStack_ed0 = 1;
  local_14e8._12_4_ = uStack_ecc;
  local_14e8.ArrayNum = 1;
  local_ee8.DataPtr = L"AbC";
  local_ee8.Size = 3;
  local_ed8 = local_14e8.DataPtr;
  `UE::String::FStringSplitTest::TestBody'::__l53::<lambda_3>::operator()<wchar_t>
            (local_res18,L"AbCABCAbCABC",&local_14e8,L"",L"ABCAbCABC",CaseSensitive);
  uStack_ec0 = 2;
  local_4f8.DataPtr = L"CABc";
  local_14e8.DataPtr = &local_4f8;
  local_14e8._12_4_ = uStack_ebc;
  local_14e8.ArrayNum = 2;
  local_4f8.Size = 4;
  local_4e8 = L"ABC";
  local_4e0 = 3;
  local_ec8 = local_14e8.DataPtr;
  `UE::String::FStringSplitTest::TestBody'::__l53::<lambda_3>::operator()<wchar_t>
            (local_res18,L"AbCABCAbCABC",&local_14e8,L"AbC",L"AbCABC",CaseSensitive);
  uStack_eb0 = 2;
  local_4d8.DataPtr = L"ABD";
  local_4c8 = L"Bc";
  local_14e8.DataPtr = &local_4d8;
  local_4d8.Size = 3;
  local_14e8._12_4_ = uStack_eac;
  local_14e8.ArrayNum = 2;
  local_4c0 = 2;
  local_eb8 = local_14e8.DataPtr;
  `UE::String::FStringSplitTest::TestBody'::__l53::<lambda_3>::operator()<wchar_t>
            (local_res18,L"AbCABCAbCABC",&local_14e8,L"A",L"ABCAbCABC",IgnoreCase);
  uStack_ea0 = 2;
  local_4b8.DataPtr = L"BD";
  local_14e8.DataPtr = &local_4b8;
  local_14e8._12_4_ = uStack_e9c;
  local_14e8.ArrayNum = 2;
  local_4b8.Size = 2;
  local_4a8 = L"CABB";
  local_4a0 = 4;
  local_ea8 = local_14e8.DataPtr;
  `UE::String::FStringSplitTest::TestBody'::__l53::<lambda_3>::operator()<wchar_t>
            (local_res18,L"AbCABCAbCABD",&local_14e8,L"AbCABCAbCA",L"",CaseSensitive);
  uStack_e90 = 2;
  local_498.DataPtr = L"Bd";
  local_14e8.DataPtr = &local_498;
  local_14e8._12_4_ = uStack_e8c;
  local_14e8.ArrayNum = 2;
  local_498.Size = 2;
  local_488 = L"CABB";
  local_480 = 4;
  local_e98 = local_14e8.DataPtr;
  `UE::String::FStringSplitTest::TestBody'::__l53::<lambda_3>::operator()<wchar_t>
            (local_res18,L"AbCABCAbCABD",&local_14e8,L"AbCABCAbCA",L"",IgnoreCase);
  uStack_e80 = 2;
  local_478.DataPtr = L"bc";
  local_e78 = L"AbCABCAbCABC";
  local_468 = L"ab";
  local_14e8.DataPtr = &local_478;
  uStack_e70 = 0xc;
  local_14d8._12_4_ = uStack_e6c;
  local_14d8.Size = 0xc;
  local_14e8._12_4_ = uStack_e7c;
  local_14e8.ArrayNum = 2;
  local_478.Size = 2;
  local_460 = 2;
  local_14d8.DataPtr = L"AbCABCAbCABC";
  local_e88 = local_14e8.DataPtr;
  bVar3 = SplitFirstOfAny(&local_14d8,&local_14e8,&local_14c8,&local_14b8,CaseSensitive,(int *)0x0);
  if (bVar3) {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar1 = pFVar5->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_e68,L"Condition expected to return false but returned true");
    (*pcVar2)(pFVar1,&local_e68,0);
    if (local_e68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e68.Data.AllocatorInstance.Data);
    }
  }
  uStack_e50 = 2;
  local_458.DataPtr = L"DA";
  local_e48 = L"AbCABCAbCABC";
  local_448 = L"CD";
  local_14e8.DataPtr = &local_458;
  uStack_e40 = 0xc;
  local_14d8._12_4_ = uStack_e3c;
  local_14d8.Size = 0xc;
  local_14e8._12_4_ = uStack_e4c;
  local_14e8.ArrayNum = 2;
  local_458.Size = 2;
  local_440 = 2;
  local_14d8.DataPtr = L"AbCABCAbCABC";
  local_e58 = local_14e8.DataPtr;
  bVar3 = SplitFirstOfAny(&local_14d8,&local_14e8,&local_14c8,&local_14b8,IgnoreCase,(int *)0x0);
  if (bVar3) {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar1 = pFVar5->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_e38,L"Condition expected to return false but returned true");
    (*pcVar2)(pFVar1,&local_e38,0);
    if (local_e38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e38.Data.AllocatorInstance.Data);
    }
  }
  local_14e8.DataPtr = &local_438;
  uStack_e20 = 2;
  local_14e8._12_4_ = uStack_e1c;
  local_14e8.ArrayNum = 2;
  local_438.DataPtr = L"A";
  local_438.Size = 1;
  local_428 = L"B";
  local_420 = 1;
  local_e28 = local_14e8.DataPtr;
  `UE::String::FStringSplitTest::TestBody'::__l53::<lambda_3>::operator()<wchar_t>
            (local_res18,L"A",&local_14e8,L"",L"",CaseSensitive);
  local_14e8.DataPtr = &local_418;
  uStack_e10 = 2;
  local_14e8._12_4_ = uStack_e0c;
  local_14e8.ArrayNum = 2;
  local_418.DataPtr = L"A";
  local_418.Size = 1;
  local_408 = L"B";
  local_400 = 1;
  local_e18 = local_14e8.DataPtr;
  `UE::String::FStringSplitTest::TestBody'::__l53::<lambda_3>::operator()<wchar_t>
            (local_res18,L"A",&local_14e8,L"",L"",IgnoreCase);
  uStack_e00 = 2;
  local_3e8 = L"BC";
  local_14e8.DataPtr = &local_3f8;
  local_14e8._12_4_ = uStack_dfc;
  local_14e8.ArrayNum = 2;
  local_3f8.DataPtr = L"ABC";
  local_3f8.Size = 3;
  local_3e0 = 2;
  local_e08 = local_14e8.DataPtr;
  `UE::String::FStringSplitTest::TestBody'::__l53::<lambda_3>::operator()<wchar_t>
            (local_res18,L"ABC",&local_14e8,L"",L"",CaseSensitive);
  uStack_df0 = 2;
  local_3d8.DataPtr = L"abc";
  local_3c8 = L"bc";
  local_14e8.DataPtr = &local_3d8;
  local_3d8.Size = 3;
  local_14e8._12_4_ = uStack_dec;
  local_14e8.ArrayNum = 2;
  local_3c0 = 2;
  local_df8 = local_14e8.DataPtr;
  `UE::String::FStringSplitTest::TestBody'::__l53::<lambda_3>::operator()<wchar_t>
            (local_res18,L"ABC",&local_14e8,L"",L"",IgnoreCase);
  local_14e8.DataPtr = &local_3b8;
  uStack_de0 = 2;
  local_14e8._12_4_ = uStack_ddc;
  local_14e8.ArrayNum = 2;
  local_dd8 = L"";
  uStack_dd0 = 0;
  local_14d8._8_8_ = (ulonglong)uStack_dcc << 0x20;
  local_3b8.DataPtr = L"A";
  local_3b8.Size = 1;
  local_3a8 = L"B";
  local_3a0 = 1;
  local_14d8.DataPtr = L"";
  local_de8 = local_14e8.DataPtr;
  bVar3 = SplitFirstOfAny(&local_14d8,&local_14e8,&local_14c8,&local_14b8,CaseSensitive,(int *)0x0);
  if (bVar3) {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar1 = pFVar5->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_dc8,L"Condition expected to return false but returned true");
    (*pcVar2)(pFVar1,&local_dc8,0);
    if (local_dc8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_dc8.Data.AllocatorInstance.Data);
    }
  }
  uStack_db0 = 2;
  local_388 = L"ABD";
  local_14e8.DataPtr = &local_398;
  uStack_da0 = 2;
  local_14e8._12_4_ = uStack_dac;
  local_14e8.ArrayNum = 2;
  local_da8 = L"AB";
  local_14d8._12_4_ = uStack_d9c;
  local_14d8.Size = 2;
  local_14d8.DataPtr = L"AB";
  local_398.DataPtr = L"ABC";
  local_398.Size = 3;
  local_380 = 3;
  local_db8 = local_14e8.DataPtr;
  bVar3 = SplitFirstOfAny(&local_14d8,&local_14e8,&local_14c8,&local_14b8,CaseSensitive,(int *)0x0);
  if (bVar3) {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar1 = pFVar5->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_d98,L"Condition expected to return false but returned true");
    (*pcVar2)(pFVar1,&local_d98,0);
    if (local_d98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d98.Data.AllocatorInstance.Data);
    }
  }
  uStack_d80 = 2;
  local_378.DataPtr = L"CABc";
  local_368 = "ABC";
  local_14e8.DataPtr = &local_378;
  local_378.Size = 4;
  local_14e8._12_4_ = uStack_d7c;
  local_14e8.ArrayNum = 2;
  local_360 = 3;
  local_d88 = local_14e8.DataPtr;
  `UE::String::FStringSplitTest::TestBody'::__l53::<lambda_3>::operator()<char>
            (local_res18,"AbCABCAbCABC",(TArrayView<TStringView<char>_const_,int> *)&local_14e8,
             "AbC","AbCABC",CaseSensitive);
  uStack_d70 = 2;
  local_348 = L"ABD";
  local_14e8.DataPtr = &local_358;
  local_d68 = 0;
  local_14e8._12_4_ = uStack_d6c;
  local_14e8.ArrayNum = 2;
  uStack_d60 = 0;
  local_14d8._8_8_ = (ulonglong)uStack_d5c << 0x20;
  local_358.DataPtr = L"ABC";
  local_358.Size = 3;
  local_340 = 3;
  local_14d8.DataPtr = (wchar_t *)0x0;
  local_d78 = local_14e8.DataPtr;
  bVar3 = SplitFirstOfAny(&local_14d8,&local_14e8,&local_14c8,&local_14b8,CaseSensitive,(int *)0x0);
  if (bVar3) {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar1 = pFVar5->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_d58,L"Condition expected to return false but returned true");
    (*pcVar2)(pFVar1,&local_d58,0);
    if (local_d58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d58.Data.AllocatorInstance.Data);
    }
  }
  uStack_13b0 = 0;
  local_328 = L"ABD";
  local_14e8.DataPtr = &local_338;
  local_13b8 = 0;
  uStack_d40 = 2;
  local_14e8._12_4_ = uStack_d3c;
  local_14e8.ArrayNum = 2;
  local_338.DataPtr = L"ABC";
  local_338.Size = 3;
  local_320 = 3;
  local_14d8.DataPtr = (wchar_t *)0x0;
  local_14d8.Size = 0;
  local_14d8._12_4_ = 0;
  local_d48 = local_14e8.DataPtr;
  bVar3 = SplitFirstOfAny(&local_14d8,&local_14e8,&local_14c8,&local_14b8,CaseSensitive,(int *)0x0);
  if (bVar3) {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar1 = pFVar5->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_d38,L"Condition expected to return false but returned true");
    (*pcVar2)(pFVar1,&local_d38,0);
    if (local_d38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d38.Data.AllocatorInstance.Data);
    }
  }
  pFVar5 = FAutomationTestFramework::Get();
  pFVar1 = pFVar5->CurrentTest;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
  ::FString::FString(&local_d28,L"SplitLastOfAny");
  (*pcVar2)(pFVar1,&local_d28,0,0);
  if (local_d28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d28.Data.AllocatorInstance.Data);
  }
  uStack_d10 = 2;
  local_308 = L"b";
  local_14e8.DataPtr = &local_318;
  local_14e8._12_4_ = uStack_d0c;
  local_14e8.ArrayNum = 2;
  local_318.DataPtr = L"a";
  local_318.Size = 1;
  local_300 = 1;
  local_d18 = local_14e8.DataPtr;
  `UE::String::FStringSplitTest::TestBody'::__l78::<lambda_4>::operator()<wchar_t>
            (local_res18,L"AbCABCAbcABC",&local_14e8,L"AbCABCA",L"cABC",CaseSensitive);
  local_14e8.DataPtr = &local_2f8;
  local_2f8.DataPtr = L"a";
  uStack_d00 = 2;
  local_14e8._12_4_ = uStack_cfc;
  local_14e8.ArrayNum = 2;
  local_2f8.Size = 1;
  local_2e8 = L"b";
  local_2e0 = 1;
  local_d08 = local_14e8.DataPtr;
  `UE::String::FStringSplitTest::TestBody'::__l78::<lambda_4>::operator()<wchar_t>
            (local_res18,L"AbCABCAbcABC",&local_14e8,L"AbCABCAbcA",L"C",IgnoreCase);
  local_14e8.DataPtr = &local_cf8;
  uStack_ce0 = 1;
  local_14e8._12_4_ = uStack_cdc;
  local_14e8.ArrayNum = 1;
  local_cf8.DataPtr = L"b";
  local_cf8.Size = 1;
  local_ce8 = local_14e8.DataPtr;
  `UE::String::FStringSplitTest::TestBody'::__l78::<lambda_4>::operator()<wchar_t>
            (local_res18,L"AbCABCAbcABC",&local_14e8,L"AbCABCA",L"cABC",CaseSensitive);
  uStack_cd0 = 2;
  local_2c8 = L"B";
  local_14e8.DataPtr = &local_2d8;
  local_14e8._12_4_ = uStack_ccc;
  local_14e8.ArrayNum = 2;
  local_2d8.DataPtr = L"c";
  local_2d8.Size = 1;
  local_2c0 = 1;
  local_cd8 = local_14e8.DataPtr;
  `UE::String::FStringSplitTest::TestBody'::__l78::<lambda_4>::operator()<wchar_t>
            (local_res18,L"AbCABCAbcABC",&local_14e8,L"AbCABCAbcA",L"C",CaseSensitive);
  uStack_cc0 = 2;
  local_2a8 = L"B";
  local_14e8.DataPtr = &local_2b8;
  local_14e8._12_4_ = uStack_cbc;
  local_14e8.ArrayNum = 2;
  local_2b8.DataPtr = L"c";
  local_2b8.Size = 1;
  local_2a0 = 1;
  local_cc8 = local_14e8.DataPtr;
  `UE::String::FStringSplitTest::TestBody'::__l78::<lambda_4>::operator()<wchar_t>
            (local_res18,L"AbCABCAbcABC",&local_14e8,L"AbCABCAbcAB",L"",IgnoreCase);
  uStack_cb0 = 2;
  local_288 = L"D";
  local_14e8.DataPtr = &local_298;
  local_14e8._12_4_ = uStack_cac;
  local_14e8.ArrayNum = 2;
  local_298.DataPtr = L"E";
  local_298.Size = 1;
  local_280 = 1;
  local_cb8 = local_14e8.DataPtr;
  `UE::String::FStringSplitTest::TestBody'::__l78::<lambda_4>::operator()<wchar_t>
            (local_res18,L"AbCABCAbcABD",&local_14e8,L"AbCABCAbcAB",L"",CaseSensitive);
  uStack_ca0 = 2;
  local_268 = L"d";
  local_14e8.DataPtr = &local_278;
  local_14e8._12_4_ = uStack_c9c;
  local_14e8.ArrayNum = 2;
  local_278.DataPtr = L"E";
  local_278.Size = 1;
  local_260 = 1;
  local_ca8 = local_14e8.DataPtr;
  `UE::String::FStringSplitTest::TestBody'::__l78::<lambda_4>::operator()<wchar_t>
            (local_res18,L"AbCABCAbcABD",&local_14e8,L"AbCABCAbcAB",L"",IgnoreCase);
  uStack_c90 = 2;
  local_258.DataPtr = L"D";
  local_c88 = L"AbCABCAbcABC";
  local_248 = L"a";
  local_14e8.DataPtr = &local_258;
  uStack_c80 = 0xc;
  local_14d8._12_4_ = uStack_c7c;
  local_14d8.Size = 0xc;
  local_14e8._12_4_ = uStack_c8c;
  local_14e8.ArrayNum = 2;
  local_258.Size = 1;
  local_240 = 1;
  local_14d8.DataPtr = L"AbCABCAbcABC";
  local_c98 = local_14e8.DataPtr;
  bVar3 = SplitLastOfAny(&local_14d8,&local_14e8,&local_14c8,&local_14b8,CaseSensitive,(int *)0x0);
  if (bVar3) {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar1 = pFVar5->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_c78,L"Condition expected to return false but returned true");
    (*pcVar2)(pFVar1,&local_c78,0);
    if (local_c78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c78.Data.AllocatorInstance.Data);
    }
  }
  uStack_c60 = 2;
  local_238.DataPtr = L"E";
  local_c58 = L"AbCABCAbcABC";
  local_228 = L"D";
  local_14e8.DataPtr = &local_238;
  uStack_c50 = 0xc;
  local_14d8._12_4_ = uStack_c4c;
  local_14d8.Size = 0xc;
  local_14e8._12_4_ = uStack_c5c;
  local_14e8.ArrayNum = 2;
  local_238.Size = 1;
  local_220 = 1;
  local_14d8.DataPtr = L"AbCABCAbcABC";
  local_c68 = local_14e8.DataPtr;
  bVar3 = SplitLastOfAny(&local_14d8,&local_14e8,&local_14c8,&local_14b8,IgnoreCase,(int *)0x0);
  if (bVar3) {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar1 = pFVar5->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_c48,L"Condition expected to return false but returned true");
    (*pcVar2)(pFVar1,&local_c48,0);
    if (local_c48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c48.Data.AllocatorInstance.Data);
    }
  }
  uStack_c20 = 1;
  local_c38.DataPtr = L"AbC";
  local_14e8.DataPtr = &local_c38;
  local_14e8._12_4_ = uStack_c1c;
  local_14e8.ArrayNum = 1;
  local_c38.Size = 3;
  local_c28 = local_14e8.DataPtr;
  `UE::String::FStringSplitTest::TestBody'::__l78::<lambda_4>::operator()<wchar_t>
            (local_res18,L"AbCABCAbCABC",&local_14e8,L"AbCABC",L"ABC",CaseSensitive);
  uStack_c10 = 2;
  local_218.DataPtr = L"CABc";
  local_14e8.DataPtr = &local_218;
  local_14e8._12_4_ = uStack_c0c;
  local_14e8.ArrayNum = 2;
  local_218.Size = 4;
  local_208 = L"ABC";
  local_200 = 3;
  local_c18 = local_14e8.DataPtr;
  `UE::String::FStringSplitTest::TestBody'::__l78::<lambda_4>::operator()<wchar_t>
            (local_res18,L"AbCABCAbCABC",&local_14e8,L"AbCABCAbC",L"",CaseSensitive);
  uStack_c00 = 2;
  local_1f8.DataPtr = L"ABD";
  local_1e8 = L"Bc";
  local_14e8.DataPtr = &local_1f8;
  local_1f8.Size = 3;
  local_14e8._12_4_ = uStack_bfc;
  local_14e8.ArrayNum = 2;
  local_1e0 = 2;
  local_c08 = local_14e8.DataPtr;
  `UE::String::FStringSplitTest::TestBody'::__l78::<lambda_4>::operator()<wchar_t>
            (local_res18,L"AbCABCAbCABC",&local_14e8,L"AbCABCAbCA",L"",IgnoreCase);
  uStack_bf0 = 2;
  local_1d8.DataPtr = L"BD";
  local_14e8.DataPtr = &local_1d8;
  local_14e8._12_4_ = uStack_bec;
  local_14e8.ArrayNum = 2;
  local_1d8.Size = 2;
  local_1c8 = L"CABB";
  local_1c0 = 4;
  local_bf8 = local_14e8.DataPtr;
  `UE::String::FStringSplitTest::TestBody'::__l78::<lambda_4>::operator()<wchar_t>
            (local_res18,L"AbCABCAbCABD",&local_14e8,L"AbCABCAbCA",L"",CaseSensitive);
  uStack_be0 = 2;
  local_1b8.DataPtr = L"Bd";
  local_14e8.DataPtr = &local_1b8;
  local_14e8._12_4_ = uStack_bdc;
  local_14e8.ArrayNum = 2;
  local_1b8.Size = 2;
  local_1a8 = L"CABB";
  local_1a0 = 4;
  local_be8 = local_14e8.DataPtr;
  `UE::String::FStringSplitTest::TestBody'::__l78::<lambda_4>::operator()<wchar_t>
            (local_res18,L"AbCABCAbCABD",&local_14e8,L"AbCABCAbCA",L"",IgnoreCase);
  uStack_bd0 = 2;
  local_198.DataPtr = L"bc";
  local_bc8 = L"AbCABCAbCABC";
  local_188 = L"ab";
  local_14e8.DataPtr = &local_198;
  uStack_bc0 = 0xc;
  local_14d8._12_4_ = uStack_bbc;
  local_14d8.Size = 0xc;
  local_14e8._12_4_ = uStack_bcc;
  local_14e8.ArrayNum = 2;
  local_198.Size = 2;
  local_180 = 2;
  local_14d8.DataPtr = L"AbCABCAbCABC";
  local_bd8 = local_14e8.DataPtr;
  bVar3 = SplitLastOfAny(&local_14d8,&local_14e8,&local_14c8,&local_14b8,CaseSensitive,(int *)0x0);
  if (bVar3) {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar1 = pFVar5->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_bb8,L"Condition expected to return false but returned true");
    (*pcVar2)(pFVar1,&local_bb8,0);
    if (local_bb8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_bb8.Data.AllocatorInstance.Data);
    }
  }
  uStack_ba0 = 2;
  local_178.DataPtr = L"DA";
  local_b98 = L"AbCABCAbCABC";
  local_168 = L"CD";
  local_14e8.DataPtr = &local_178;
  uStack_b90 = 0xc;
  local_14d8._12_4_ = uStack_b8c;
  local_14d8.Size = 0xc;
  local_14e8._12_4_ = uStack_b9c;
  local_14e8.ArrayNum = 2;
  local_178.Size = 2;
  local_160 = 2;
  local_14d8.DataPtr = L"AbCABCAbCABC";
  local_ba8 = local_14e8.DataPtr;
  bVar3 = SplitLastOfAny(&local_14d8,&local_14e8,&local_14c8,&local_14b8,IgnoreCase,(int *)0x0);
  if (bVar3) {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar1 = pFVar5->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_b88,L"Condition expected to return false but returned true");
    (*pcVar2)(pFVar1,&local_b88,0);
    if (local_b88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b88.Data.AllocatorInstance.Data);
    }
  }
  local_14e8.DataPtr = &local_158;
  uStack_b70 = 2;
  local_14e8._12_4_ = uStack_b6c;
  local_14e8.ArrayNum = 2;
  local_158.DataPtr = L"A";
  local_158.Size = 1;
  local_148 = L"B";
  local_140 = 1;
  local_b78 = local_14e8.DataPtr;
  `UE::String::FStringSplitTest::TestBody'::__l78::<lambda_4>::operator()<wchar_t>
            (local_res18,L"A",&local_14e8,L"",L"",CaseSensitive);
  local_14e8.DataPtr = &local_138;
  uStack_b60 = 2;
  local_14e8._12_4_ = uStack_b5c;
  local_14e8.ArrayNum = 2;
  local_138.DataPtr = L"A";
  local_138.Size = 1;
  local_128 = L"B";
  local_120 = 1;
  local_b68 = local_14e8.DataPtr;
  `UE::String::FStringSplitTest::TestBody'::__l78::<lambda_4>::operator()<wchar_t>
            (local_res18,L"A",&local_14e8,L"",L"",IgnoreCase);
  uStack_b50 = 2;
  local_108 = L"BC";
  local_14e8.DataPtr = &local_118;
  local_14e8._12_4_ = uStack_b4c;
  local_14e8.ArrayNum = 2;
  local_118.DataPtr = L"ABC";
  local_118.Size = 3;
  local_100 = 2;
  local_b58 = local_14e8.DataPtr;
  `UE::String::FStringSplitTest::TestBody'::__l78::<lambda_4>::operator()<wchar_t>
            (local_res18,L"ABC",&local_14e8,L"A",L"",CaseSensitive);
  uStack_b40 = 2;
  local_f8.DataPtr = L"abc";
  local_e8 = L"bc";
  local_14e8.DataPtr = &local_f8;
  local_f8.Size = 3;
  local_14e8._12_4_ = uStack_b3c;
  local_14e8.ArrayNum = 2;
  local_e0 = 2;
  local_b48 = local_14e8.DataPtr;
  `UE::String::FStringSplitTest::TestBody'::__l78::<lambda_4>::operator()<wchar_t>
            (local_res18,L"ABC",&local_14e8,L"A",L"",IgnoreCase);
  local_14e8.DataPtr = &local_d8;
  uStack_b30 = 2;
  local_14e8._12_4_ = uStack_b2c;
  local_14e8.ArrayNum = 2;
  local_b28 = L"";
  uStack_b20 = 0;
  local_14d8._8_8_ = (ulonglong)uStack_b1c << 0x20;
  local_d8.DataPtr = L"A";
  local_d8.Size = 1;
  local_c8 = L"B";
  local_c0 = 1;
  local_14d8.DataPtr = L"";
  local_b38 = local_14e8.DataPtr;
  bVar3 = SplitLastOfAny(&local_14d8,&local_14e8,&local_14c8,&local_14b8,CaseSensitive,(int *)0x0);
  if (bVar3) {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar1 = pFVar5->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_b18,L"Condition expected to return false but returned true");
    (*pcVar2)(pFVar1,&local_b18,0);
    if (local_b18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b18.Data.AllocatorInstance.Data);
    }
  }
  uStack_b00 = 2;
  local_a8 = L"ABD";
  local_14e8.DataPtr = &local_b8;
  uStack_af0 = 2;
  local_14e8._12_4_ = uStack_afc;
  local_14e8.ArrayNum = 2;
  local_af8 = L"AB";
  local_14d8._12_4_ = uStack_aec;
  local_14d8.Size = 2;
  local_14d8.DataPtr = L"AB";
  local_b8.DataPtr = L"ABC";
  local_b8.Size = 3;
  local_a0 = 3;
  local_b08 = local_14e8.DataPtr;
  bVar3 = SplitLastOfAny(&local_14d8,&local_14e8,&local_14c8,&local_14b8,CaseSensitive,(int *)0x0);
  if (bVar3) {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar1 = pFVar5->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_ae8,L"Condition expected to return false but returned true");
    (*pcVar2)(pFVar1,&local_ae8,0);
    if (local_ae8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_ae8.Data.AllocatorInstance.Data);
    }
  }
  uStack_ad0 = 2;
  local_98.DataPtr = L"CABc";
  local_88 = "ABC";
  local_14e8.DataPtr = &local_98;
  local_98.Size = 4;
  local_14e8._12_4_ = uStack_acc;
  local_14e8.ArrayNum = 2;
  local_80 = 3;
  local_ad8 = local_14e8.DataPtr;
  `UE::String::FStringSplitTest::TestBody'::__l78::<lambda_4>::operator()<char>
            (local_res18,"AbCABCAbCABC",(TArrayView<TStringView<char>_const_,int> *)&local_14e8,
             "AbCABCAbC","",CaseSensitive);
  uStack_ac0 = 2;
  local_68 = L"ABD";
  local_14e8.DataPtr = &local_78;
  local_ab8 = 0;
  local_14e8._12_4_ = uStack_abc;
  local_14e8.ArrayNum = 2;
  uStack_ab0 = 0;
  local_14d8._8_8_ = (ulonglong)uStack_aac << 0x20;
  local_78.DataPtr = L"ABC";
  local_78.Size = 3;
  local_60 = 3;
  local_14d8.DataPtr = (wchar_t *)0x0;
  local_ac8 = local_14e8.DataPtr;
  bVar3 = SplitLastOfAny(&local_14d8,&local_14e8,&local_14c8,&local_14b8,CaseSensitive,(int *)0x0);
  if (bVar3) {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar1 = pFVar5->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_aa8,L"Condition expected to return false but returned true");
    (*pcVar2)(pFVar1,&local_aa8,0);
    if (local_aa8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_aa8.Data.AllocatorInstance.Data);
    }
  }
  uStack_13a0 = 0;
  local_48 = L"ABD";
  local_14e8.DataPtr = &local_58;
  local_13a8 = 0;
  uStack_a90 = 2;
  local_14e8._12_4_ = uStack_a8c;
  local_14e8.ArrayNum = 2;
  local_58.DataPtr = L"ABC";
  local_58.Size = 3;
  local_40 = CONCAT44(local_40._4_4_,3);
  local_14d8.DataPtr = (wchar_t *)0x0;
  local_14d8.Size = 0;
  local_14d8._12_4_ = 0;
  local_a98 = local_14e8.DataPtr;
  bVar3 = SplitLastOfAny(&local_14d8,&local_14e8,&local_14c8,&local_14b8,CaseSensitive,(int *)0x0);
  if (bVar3) {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar1 = pFVar5->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_a88,L"Condition expected to return false but returned true");
    (*pcVar2)(pFVar1,&local_a88,0);
    if (local_a88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a88.Data.AllocatorInstance.Data);
    }
  }
  pFVar5 = FAutomationTestFramework::Get();
  pFVar1 = pFVar5->CurrentTest;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
  ::FString::FString(&local_a78,L"SplitFirstChar");
  (*pcVar2)(pFVar1,&local_a78,0,0);
  if (local_a78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a78.Data.AllocatorInstance.Data);
  }
  `UE::String::FStringSplitTest::TestBody'::__l103::<lambda_5>::operator()<wchar_t>
            (local_res18,L"AbCABCAbCABC",L'b',L"A",L"CABCAbCABC",CaseSensitive);
  `UE::String::FStringSplitTest::TestBody'::__l103::<lambda_5>::operator()<wchar_t>
            (local_res18,L"AbCABCAbCABC",L'B',L"AbCA",L"CAbCABC",CaseSensitive);
  `UE::String::FStringSplitTest::TestBody'::__l103::<lambda_5>::operator()<wchar_t>
            (local_res18,L"AbCABCAbCABC",L'B',L"A",L"CABCAbCABC",IgnoreCase);
  `UE::String::FStringSplitTest::TestBody'::__l103::<lambda_5>::operator()<wchar_t>
            (local_res18,L"AbCABCAbCABD",L'D',L"AbCABCAbCAB",L"",CaseSensitive);
  `UE::String::FStringSplitTest::TestBody'::__l103::<lambda_5>::operator()<wchar_t>
            (local_res18,L"AbCABCAbCABD",L'd',L"AbCABCAbCAB",L"",IgnoreCase);
  local_a68 = L"AbCABCAbCABC";
  uStack_a60 = 0xc;
  local_14e8._12_4_ = uStack_a5c;
  local_14e8.ArrayNum = 0xc;
  local_14e8.DataPtr = (TStringView<wchar_t> *)0x1507931a0;
  bVar3 = SplitFirstChar((TStringView<wchar_t> *)&local_14e8,L'a',&local_14c8,&local_14b8,
                         CaseSensitive);
  if (bVar3) {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar1 = pFVar5->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_a58,L"Condition expected to return false but returned true");
    (*pcVar2)(pFVar1,&local_a58,0);
    if (local_a58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a58.Data.AllocatorInstance.Data);
    }
  }
  local_a48 = L"AbCABCAbCABC";
  uStack_a40 = 0xc;
  local_14e8._12_4_ = uStack_a3c;
  local_14e8.ArrayNum = 0xc;
  local_14e8.DataPtr = (TStringView<wchar_t> *)0x1507931a0;
  bVar3 = SplitFirstChar((TStringView<wchar_t> *)&local_14e8,L'D',&local_14c8,&local_14b8,IgnoreCase
                        );
  if (bVar3) {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar1 = pFVar5->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_a38,L"Condition expected to return false but returned true");
    (*pcVar2)(pFVar1,&local_a38,0);
    if (local_a38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a38.Data.AllocatorInstance.Data);
    }
  }
  `UE::String::FStringSplitTest::TestBody'::__l103::<lambda_5>::operator()<wchar_t>
            (local_res18,L"A",L'A',L"",L"",CaseSensitive);
  `UE::String::FStringSplitTest::TestBody'::__l103::<lambda_5>::operator()<wchar_t>
            (local_res18,L"A",L'a',L"",L"",IgnoreCase);
  local_a28 = L"";
  uStack_a20 = 0;
  local_14e8._8_8_ = (ulonglong)uStack_a1c << 0x20;
  local_14e8.DataPtr = (TStringView<wchar_t> *)0x15060d16c;
  bVar3 = SplitFirstChar((TStringView<wchar_t> *)&local_14e8,L'A',&local_14c8,&local_14b8,
                         CaseSensitive);
  if (bVar3) {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar1 = pFVar5->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_a18,L"Condition expected to return false but returned true");
    (*pcVar2)(pFVar1,&local_a18,0);
    if (local_a18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a18.Data.AllocatorInstance.Data);
    }
  }
  `UE::String::FStringSplitTest::TestBody'::__l103::<lambda_5>::operator()<char>
            (local_res18,"AbCABCAbCABC",'B',"AbCA","CAbCABC",CaseSensitive);
  local_a08 = 0;
  uStack_a00 = 0;
  local_14e8._8_8_ = (ulonglong)uStack_9fc << 0x20;
  local_14e8.DataPtr = (TStringView<wchar_t> *)0x0;
  bVar3 = SplitFirstChar((TStringView<wchar_t> *)&local_14e8,L'A',&local_14c8,&local_14b8,
                         CaseSensitive);
  if (bVar3) {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar1 = pFVar5->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_9f8,L"Condition expected to return false but returned true");
    (*pcVar2)(pFVar1,&local_9f8,0);
    if (local_9f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_9f8.Data.AllocatorInstance.Data);
    }
  }
  uStack_1360 = 0;
  local_1368 = 0;
  local_14e8.DataPtr = (TStringView<wchar_t> *)0x0;
  local_14e8.ArrayNum = 0;
  local_14e8._12_4_ = 0;
  bVar3 = SplitFirstChar((TStringView<wchar_t> *)&local_14e8,L'A',&local_14c8,&local_14b8,
                         CaseSensitive);
  if (bVar3) {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar1 = pFVar5->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_9e8,L"Condition expected to return false but returned true");
    (*pcVar2)(pFVar1,&local_9e8,0);
    if (local_9e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_9e8.Data.AllocatorInstance.Data);
    }
  }
  pFVar5 = FAutomationTestFramework::Get();
  pFVar1 = pFVar5->CurrentTest;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
  ::FString::FString(&local_9d8,L"SplitLastChar");
  (*pcVar2)(pFVar1,&local_9d8,0,0);
  if (local_9d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_9d8.Data.AllocatorInstance.Data);
  }
  `UE::String::FStringSplitTest::TestBody'::__l119::<lambda_6>::operator()<wchar_t>
            (local_res18,L"AbCABCAbCABC",L'b',L"AbCABCA",L"CABC",CaseSensitive);
  `UE::String::FStringSplitTest::TestBody'::__l119::<lambda_6>::operator()<wchar_t>
            (local_res18,L"AbCABCAbCABC",L'B',L"AbCABCAbCA",L"C",CaseSensitive);
  `UE::String::FStringSplitTest::TestBody'::__l119::<lambda_6>::operator()<wchar_t>
            (local_res18,L"AbCABCAbCABC",L'b',L"AbCABCAbCA",L"C",IgnoreCase);
  `UE::String::FStringSplitTest::TestBody'::__l119::<lambda_6>::operator()<wchar_t>
            (local_res18,L"AbCABCAbCABD",L'D',L"AbCABCAbCAB",L"",CaseSensitive);
  `UE::String::FStringSplitTest::TestBody'::__l119::<lambda_6>::operator()<wchar_t>
            (local_res18,L"AbCABCAbCABD",L'd',L"AbCABCAbCAB",L"",IgnoreCase);
  local_9c8 = L"AbCABCAbCABC";
  uStack_9c0 = 0xc;
  local_14e8._12_4_ = uStack_9bc;
  local_14e8.ArrayNum = 0xc;
  local_14e8.DataPtr = (TStringView<wchar_t> *)0x1507931a0;
  bVar3 = SplitLastChar((TStringView<wchar_t> *)&local_14e8,L'a',&local_14c8,&local_14b8,
                        CaseSensitive);
  if (bVar3) {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar1 = pFVar5->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_9b8,L"Condition expected to return false but returned true");
    (*pcVar2)(pFVar1,&local_9b8,0);
    if (local_9b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_9b8.Data.AllocatorInstance.Data);
    }
  }
  local_9a8 = L"AbCABCAbCABC";
  uStack_9a0 = 0xc;
  local_14e8._12_4_ = uStack_99c;
  local_14e8.ArrayNum = 0xc;
  local_14e8.DataPtr = (TStringView<wchar_t> *)0x1507931a0;
  bVar3 = SplitLastChar((TStringView<wchar_t> *)&local_14e8,L'D',&local_14c8,&local_14b8,IgnoreCase)
  ;
  if (bVar3) {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar1 = pFVar5->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_998,L"Condition expected to return false but returned true");
    (*pcVar2)(pFVar1,&local_998,0);
    if (local_998.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_998.Data.AllocatorInstance.Data);
    }
  }
  `UE::String::FStringSplitTest::TestBody'::__l119::<lambda_6>::operator()<wchar_t>
            (local_res18,L"A",L'A',L"",L"",CaseSensitive);
  `UE::String::FStringSplitTest::TestBody'::__l119::<lambda_6>::operator()<wchar_t>
            (local_res18,L"A",L'a',L"",L"",IgnoreCase);
  local_988 = L"";
  uStack_980 = 0;
  local_14e8._8_8_ = (ulonglong)uStack_97c << 0x20;
  local_14e8.DataPtr = (TStringView<wchar_t> *)0x15060d16c;
  bVar3 = SplitLastChar((TStringView<wchar_t> *)&local_14e8,L'A',&local_14c8,&local_14b8,
                        CaseSensitive);
  if (bVar3) {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar1 = pFVar5->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_978,L"Condition expected to return false but returned true");
    (*pcVar2)(pFVar1,&local_978,0);
    if (local_978.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_978.Data.AllocatorInstance.Data);
    }
  }
  `UE::String::FStringSplitTest::TestBody'::__l119::<lambda_6>::operator()<char>
            (local_res18,"AbCABCAbCABC",'B',"AbCABCAbCA","C",CaseSensitive);
  local_968 = 0;
  uStack_960 = 0;
  local_14e8._8_8_ = (ulonglong)uStack_95c << 0x20;
  local_14e8.DataPtr = (TStringView<wchar_t> *)0x0;
  bVar3 = SplitLastChar((TStringView<wchar_t> *)&local_14e8,L'A',&local_14c8,&local_14b8,
                        CaseSensitive);
  if (bVar3) {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar1 = pFVar5->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_958,L"Condition expected to return false but returned true");
    (*pcVar2)(pFVar1,&local_958,0);
    if (local_958.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_958.Data.AllocatorInstance.Data);
    }
  }
  uStack_1390 = 0;
  local_1398 = 0;
  local_14e8.DataPtr = (TStringView<wchar_t> *)0x0;
  local_14e8.ArrayNum = 0;
  local_14e8._12_4_ = 0;
  bVar3 = SplitLastChar((TStringView<wchar_t> *)&local_14e8,L'A',&local_14c8,&local_14b8,
                        CaseSensitive);
  if (bVar3) {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar1 = pFVar5->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_948,L"Condition expected to return false but returned true");
    (*pcVar2)(pFVar1,&local_948,0);
    if (local_948.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_948.Data.AllocatorInstance.Data);
    }
  }
  pFVar5 = FAutomationTestFramework::Get();
  pFVar1 = pFVar5->CurrentTest;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
  ::FString::FString(&local_938,L"SplitFirstOfAnyChar");
  (*pcVar2)(pFVar1,&local_938,0,0);
  if (local_938.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_938.Data.AllocatorInstance.Data);
  }
  uStack_920 = 1;
  local_14a8._4_2_ = 0x62;
  local_14e8.DataPtr = (TStringView<wchar_t> *)(local_14a8 + 4);
  local_14e8._12_4_ = uStack_91c;
  local_14e8.ArrayNum = 1;
  local_928 = local_14e8.DataPtr;
  `UE::String::FStringSplitTest::TestBody'[::H]::<lambda_7>::operator()<wchar_t>
            (local_res18,L"AbCABCAbcABC",(TArrayView<wchar_t_const_,int> *)&local_14e8,L"A",
             L"CABCAbcABC",CaseSensitive);
  local_14e8.DataPtr = (TStringView<wchar_t> *)(local_1458 + 4);
  uStack_910 = 2;
  local_14e8._12_4_ = uStack_90c;
  local_14e8.ArrayNum = 2;
  local_1458._4_4_ = 0x420063;
  local_918 = local_14e8.DataPtr;
  `UE::String::FStringSplitTest::TestBody'[::H]::<lambda_7>::operator()<wchar_t>
            (local_res18,L"AbCABCAbcABC",(TArrayView<wchar_t_const_,int> *)&local_14e8,L"AbCA",
             L"CAbcABC",CaseSensitive);
  local_14e8.DataPtr = (TStringView<wchar_t> *)(local_1450 + 4);
  uStack_900 = 2;
  local_14e8._12_4_ = uStack_8fc;
  local_14e8.ArrayNum = 2;
  local_1450._4_4_ = 0x420063;
  local_908 = local_14e8.DataPtr;
  `UE::String::FStringSplitTest::TestBody'[::H]::<lambda_7>::operator()<wchar_t>
            (local_res18,L"AbCABCAbcABC",(TArrayView<wchar_t_const_,int> *)&local_14e8,L"A",
             L"CABCAbcABC",IgnoreCase);
  local_14e8.DataPtr = (TStringView<wchar_t> *)local_1448;
  uStack_8f0 = 2;
  local_14e8._12_4_ = uStack_8ec;
  local_14e8.ArrayNum = 2;
  local_1448._0_4_ = 0x440045;
  local_8f8 = local_14e8.DataPtr;
  `UE::String::FStringSplitTest::TestBody'[::H]::<lambda_7>::operator()<wchar_t>
            (local_res18,L"AbCABCAbcABD",(TArrayView<wchar_t_const_,int> *)&local_14e8,
             L"AbCABCAbcAB",L"",CaseSensitive);
  local_14e8.DataPtr = (TStringView<wchar_t> *)(local_14a0 + 4);
  uStack_8e0 = 2;
  local_14e8._12_4_ = uStack_8dc;
  local_14e8.ArrayNum = 2;
  local_14a0._4_4_ = 0x640045;
  local_8e8 = local_14e8.DataPtr;
  `UE::String::FStringSplitTest::TestBody'[::H]::<lambda_7>::operator()<wchar_t>
            (local_res18,L"AbCABCAbcABD",(TArrayView<wchar_t_const_,int> *)&local_14e8,
             L"AbCABCAbcAB",L"",IgnoreCase);
  local_14e8.DataPtr = (TStringView<wchar_t> *)local_1498;
  uStack_8d0 = 2;
  local_14e8._12_4_ = uStack_8cc;
  local_14e8.ArrayNum = 2;
  local_8c8 = L"AbCABCAbcABC";
  uStack_8c0 = 0xc;
  local_14d8._12_4_ = uStack_8bc;
  local_14d8.Size = 0xc;
  local_1498._0_4_ = 0x610044;
  local_14d8.DataPtr = L"AbCABCAbcABC";
  local_8d8 = local_14e8.DataPtr;
  bVar3 = SplitFirstOfAnyChar(&local_14d8,(TArrayView<wchar_t_const_,int> *)&local_14e8,&local_14c8,
                              &local_14b8,CaseSensitive,(int *)0x0);
  if (bVar3) {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar1 = pFVar5->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_8b8,L"Condition expected to return false but returned true");
    (*pcVar2)(pFVar1,&local_8b8,0);
    if (local_8b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_8b8.Data.AllocatorInstance.Data);
    }
  }
  local_14e8.DataPtr = (TStringView<wchar_t> *)(local_1498 + 4);
  uStack_8a0 = 2;
  local_14e8._12_4_ = uStack_89c;
  local_14e8.ArrayNum = 2;
  local_898 = L"AbCABCAbcABC";
  uStack_890 = 0xc;
  local_14d8._12_4_ = uStack_88c;
  local_14d8.Size = 0xc;
  local_1498._4_4_ = 0x440045;
  local_14d8.DataPtr = L"AbCABCAbcABC";
  local_8a8 = local_14e8.DataPtr;
  bVar3 = SplitFirstOfAnyChar(&local_14d8,(TArrayView<wchar_t_const_,int> *)&local_14e8,&local_14c8,
                              &local_14b8,IgnoreCase,(int *)0x0);
  if (bVar3) {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar1 = pFVar5->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_888,L"Condition expected to return false but returned true");
    (*pcVar2)(pFVar1,&local_888,0);
    if (local_888.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_888.Data.AllocatorInstance.Data);
    }
  }
  local_14e8.DataPtr = (TStringView<wchar_t> *)local_1490;
  uStack_870 = 2;
  local_14e8._12_4_ = uStack_86c;
  local_14e8.ArrayNum = 2;
  local_1490._0_4_ = 0x420041;
  local_878 = local_14e8.DataPtr;
  `UE::String::FStringSplitTest::TestBody'[::H]::<lambda_7>::operator()<wchar_t>
            (local_res18,L"A",(TArrayView<wchar_t_const_,int> *)&local_14e8,L"",L"",CaseSensitive);
  local_14e8.DataPtr = (TStringView<wchar_t> *)(local_1490 + 4);
  uStack_860 = 2;
  local_14e8._12_4_ = uStack_85c;
  local_14e8.ArrayNum = 2;
  local_1490._4_4_ = 0x420041;
  local_868 = local_14e8.DataPtr;
  `UE::String::FStringSplitTest::TestBody'[::H]::<lambda_7>::operator()<wchar_t>
            (local_res18,L"A",(TArrayView<wchar_t_const_,int> *)&local_14e8,L"",L"",IgnoreCase);
  local_14e8.DataPtr = (TStringView<wchar_t> *)local_1488;
  uStack_850 = 2;
  local_14e8._12_4_ = uStack_84c;
  local_14e8.ArrayNum = 2;
  local_848 = L"";
  uStack_840 = 0;
  local_14d8._8_8_ = (ulonglong)uStack_83c << 0x20;
  local_1488._0_4_ = 0x420041;
  local_14d8.DataPtr = L"";
  local_858 = local_14e8.DataPtr;
  bVar3 = SplitFirstOfAnyChar(&local_14d8,(TArrayView<wchar_t_const_,int> *)&local_14e8,&local_14c8,
                              &local_14b8,CaseSensitive,(int *)0x0);
  if (bVar3) {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar1 = pFVar5->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_838,L"Condition expected to return false but returned true");
    (*pcVar2)(pFVar1,&local_838,0);
    if (local_838.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_838.Data.AllocatorInstance.Data);
    }
  }
  local_14e8.DataPtr = (TStringView<wchar_t> *)&local_res20;
  uStack_820 = 2;
  local_14e8._12_4_ = uStack_81c;
  local_14e8.ArrayNum = 2;
  local_818 = "AbCABCAbcABC";
  uStack_810 = 0xc;
  local_14d8._12_4_ = uStack_80c;
  local_14d8.Size = 0xc;
  local_14d8.DataPtr = L"AbCABCAbcABC";
  local_res20 = 0x4263;
  local_1420.DataPtr = (char *)0x0;
  local_1420.Size = 0;
  local_1400.DataPtr = (char *)0x0;
  local_1400.Size = 0;
  local_828 = local_14e8.DataPtr;
  bVar3 = SplitFirstOfAnyChar((TStringView<char> *)&local_14d8,
                              (TArrayView<char_const_,int> *)&local_14e8,&local_1420,&local_1400,
                              CaseSensitive,(int *)0x0);
  if (!bVar3) {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar1 = pFVar5->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_808,L"Condition failed");
    (*pcVar2)(pFVar1,&local_808,0);
    if (local_808.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_808.Data.AllocatorInstance.Data);
    }
  }
  if (((local_1420.Size == 0) ||
      (iVar4 = strncmp(local_1420.DataPtr,"AbCA",(longlong)local_1420.Size), iVar4 != 0)) ||
     ("AbCA"[local_1420.Size] != '\0')) {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar1 = pFVar5->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_7f8,L"Condition failed");
    (*pcVar2)(pFVar1,&local_7f8,0);
    if (local_7f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_7f8.Data.AllocatorInstance.Data);
    }
  }
  if (((local_1400.Size == 0) ||
      (iVar4 = strncmp(local_1400.DataPtr,"CAbcABC",(longlong)local_1400.Size), iVar4 != 0)) ||
     ("CAbcABC"[local_1400.Size] != '\0')) {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar1 = pFVar5->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_7e8,L"Condition failed");
    (*pcVar2)(pFVar1,&local_7e8,0);
    if (local_7e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_7e8.Data.AllocatorInstance.Data);
    }
  }
  local_14e8.DataPtr = (TStringView<wchar_t> *)(local_1488 + 4);
  uStack_7d0 = 2;
  local_14e8._12_4_ = uStack_7cc;
  local_14e8.ArrayNum = 2;
  local_7c8 = 0;
  uStack_7c0 = 0;
  local_14d8._8_8_ = (ulonglong)uStack_7bc << 0x20;
  local_1488._4_4_ = 0x420041;
  local_14d8.DataPtr = (wchar_t *)0x0;
  local_7d8 = local_14e8.DataPtr;
  bVar3 = SplitFirstOfAnyChar(&local_14d8,(TArrayView<wchar_t_const_,int> *)&local_14e8,&local_14c8,
                              &local_14b8,CaseSensitive,(int *)0x0);
  if (bVar3) {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar1 = pFVar5->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_7b8,L"Condition expected to return false but returned true");
    (*pcVar2)(pFVar1,&local_7b8,0);
    if (local_7b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_7b8.Data.AllocatorInstance.Data);
    }
  }
  local_14e8.DataPtr = (TStringView<wchar_t> *)local_1480;
  uStack_1380 = 0;
  local_1388 = 0;
  uStack_7a0 = 2;
  local_14e8._12_4_ = uStack_79c;
  local_14e8.ArrayNum = 2;
  local_1480._0_4_ = 0x420041;
  local_14d8.DataPtr = (wchar_t *)0x0;
  local_14d8.Size = 0;
  local_14d8._12_4_ = 0;
  local_7a8 = local_14e8.DataPtr;
  bVar3 = SplitFirstOfAnyChar(&local_14d8,(TArrayView<wchar_t_const_,int> *)&local_14e8,&local_14c8,
                              &local_14b8,CaseSensitive,(int *)0x0);
  if (bVar3) {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar1 = pFVar5->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_798,L"Condition expected to return false but returned true");
    (*pcVar2)(pFVar1,&local_798,0);
    if (local_798.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_798.Data.AllocatorInstance.Data);
    }
  }
  pFVar5 = FAutomationTestFramework::Get();
  pFVar1 = pFVar5->CurrentTest;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
  ::FString::FString(&local_788,L"SplitLastOfAnyChar");
  (*pcVar2)(pFVar1,&local_788,0,0);
  if (local_788.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_788.Data.AllocatorInstance.Data);
  }
  uStack_770 = 1;
  local_14a0._0_2_ = 0x62;
  local_14e8.DataPtr = (TStringView<wchar_t> *)local_14a0;
  local_14e8._12_4_ = uStack_76c;
  local_14e8.ArrayNum = 1;
  local_778 = local_14e8.DataPtr;
  `UE::String::FStringSplitTest::TestBody'::__l151::<lambda_8>::operator()<wchar_t>
            (local_res18,L"AbCABCAbcABC",(TArrayView<wchar_t_const_,int> *)&local_14e8,L"AbCABCA",
             L"cABC",CaseSensitive);
  local_14e8.DataPtr = (TStringView<wchar_t> *)(local_1480 + 4);
  uStack_760 = 2;
  local_14e8._12_4_ = uStack_75c;
  local_14e8.ArrayNum = 2;
  local_1480._4_4_ = 0x420063;
  local_768 = local_14e8.DataPtr;
  `UE::String::FStringSplitTest::TestBody'::__l151::<lambda_8>::operator()<wchar_t>
            (local_res18,L"AbCABCAbcABC",(TArrayView<wchar_t_const_,int> *)&local_14e8,L"AbCABCAbcA"
             ,L"C",CaseSensitive);
  local_14e8.DataPtr = (TStringView<wchar_t> *)local_1478;
  uStack_750 = 2;
  local_14e8._12_4_ = uStack_74c;
  local_14e8.ArrayNum = 2;
  local_1478._0_4_ = 0x420063;
  local_758 = local_14e8.DataPtr;
  `UE::String::FStringSplitTest::TestBody'::__l151::<lambda_8>::operator()<wchar_t>
            (local_res18,L"AbCABCAbcABC",(TArrayView<wchar_t_const_,int> *)&local_14e8,
             L"AbCABCAbcAB",L"",IgnoreCase);
  local_14e8.DataPtr = (TStringView<wchar_t> *)(local_1468 + 4);
  uStack_740 = 2;
  local_14e8._12_4_ = uStack_73c;
  local_14e8.ArrayNum = 2;
  local_1468._4_4_ = 0x440045;
  local_748 = local_14e8.DataPtr;
  `UE::String::FStringSplitTest::TestBody'::__l151::<lambda_8>::operator()<wchar_t>
            (local_res18,L"AbCABCAbcABD",(TArrayView<wchar_t_const_,int> *)&local_14e8,
             L"AbCABCAbcAB",L"",CaseSensitive);
  local_14e8.DataPtr = (TStringView<wchar_t> *)(local_1478 + 4);
  uStack_730 = 2;
  local_14e8._12_4_ = uStack_72c;
  local_14e8.ArrayNum = 2;
  local_1478._4_4_ = 0x640045;
  local_738 = local_14e8.DataPtr;
  `UE::String::FStringSplitTest::TestBody'::__l151::<lambda_8>::operator()<wchar_t>
            (local_res18,L"AbCABCAbcABD",(TArrayView<wchar_t_const_,int> *)&local_14e8,
             L"AbCABCAbcAB",L"",IgnoreCase);
  local_14e8.DataPtr = (TStringView<wchar_t> *)local_1470;
  uStack_720 = 2;
  local_14e8._12_4_ = uStack_71c;
  local_14e8.ArrayNum = 2;
  local_718 = L"AbCABCAbcABC";
  uStack_710 = 0xc;
  local_14d8._12_4_ = uStack_70c;
  local_14d8.Size = 0xc;
  local_14d8.DataPtr = L"AbCABCAbcABC";
  local_1470._0_4_ = 0x610044;
  local_728 = local_14e8.DataPtr;
  bVar3 = SplitLastOfAnyChar(&local_14d8,(TArrayView<wchar_t_const_,int> *)&local_14e8,&local_14c8,
                             &local_14b8,CaseSensitive,(int *)0x0);
  if (bVar3) {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar1 = pFVar5->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_708,L"Condition expected to return false but returned true");
    (*pcVar2)(pFVar1,&local_708,0);
    if (local_708.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_708.Data.AllocatorInstance.Data);
    }
  }
  local_14e8.DataPtr = (TStringView<wchar_t> *)(local_1470 + 4);
  uStack_6f0 = 2;
  local_14e8._12_4_ = uStack_6ec;
  local_14e8.ArrayNum = 2;
  local_6e8 = L"AbCABCAbcABC";
  uStack_6e0 = 0xc;
  local_14d8._12_4_ = uStack_6dc;
  local_14d8.Size = 0xc;
  local_14d8.DataPtr = L"AbCABCAbcABC";
  local_1470._4_4_ = 0x440045;
  local_6f8 = local_14e8.DataPtr;
  bVar3 = SplitLastOfAnyChar(&local_14d8,(TArrayView<wchar_t_const_,int> *)&local_14e8,&local_14c8,
                             &local_14b8,IgnoreCase,(int *)0x0);
  if (bVar3) {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar1 = pFVar5->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_6d8,L"Condition expected to return false but returned true");
    (*pcVar2)(pFVar1,&local_6d8,0);
    if (local_6d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_6d8.Data.AllocatorInstance.Data);
    }
  }
  local_14e8.DataPtr = (TStringView<wchar_t> *)local_1468;
  uStack_6c0 = 2;
  local_14e8._12_4_ = uStack_6bc;
  local_14e8.ArrayNum = 2;
  local_1468._0_4_ = 0x420041;
  local_6c8 = local_14e8.DataPtr;
  `UE::String::FStringSplitTest::TestBody'::__l151::<lambda_8>::operator()<wchar_t>
            (local_res18,L"A",(TArrayView<wchar_t_const_,int> *)&local_14e8,L"",L"",CaseSensitive);
  local_14e8.DataPtr = (TStringView<wchar_t> *)local_1450;
  uStack_6b0 = 2;
  local_14e8._12_4_ = uStack_6ac;
  local_14e8.ArrayNum = 2;
  local_1450._0_4_ = 0x420041;
  local_6b8 = local_14e8.DataPtr;
  `UE::String::FStringSplitTest::TestBody'::__l151::<lambda_8>::operator()<wchar_t>
            (local_res18,L"A",(TArrayView<wchar_t_const_,int> *)&local_14e8,L"",L"",IgnoreCase);
  local_14e8.DataPtr = (TStringView<wchar_t> *)local_1460;
  uStack_6a0 = 2;
  local_14e8._12_4_ = uStack_69c;
  local_14e8.ArrayNum = 2;
  local_698 = L"";
  uStack_690 = 0;
  local_14d8._8_8_ = (ulonglong)uStack_68c << 0x20;
  local_1460._0_4_ = 0x420041;
  local_14d8.DataPtr = L"";
  local_6a8 = local_14e8.DataPtr;
  bVar3 = SplitLastOfAnyChar(&local_14d8,(TArrayView<wchar_t_const_,int> *)&local_14e8,&local_14c8,
                             &local_14b8,CaseSensitive,(int *)0x0);
  if (bVar3) {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar1 = pFVar5->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_688,L"Condition expected to return false but returned true");
    (*pcVar2)(pFVar1,&local_688,0);
    if (local_688.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_688.Data.AllocatorInstance.Data);
    }
  }
  local_14e8.DataPtr = (TStringView<wchar_t> *)local_14a8;
  uStack_670 = 2;
  local_14e8._12_4_ = uStack_66c;
  local_14e8.ArrayNum = 2;
  local_14a8._0_2_ = 0x4263;
  local_678 = local_14e8.DataPtr;
  `UE::String::FStringSplitTest::TestBody'::__l151::<lambda_8>::operator()<char>
            (local_res18,"AbCABCAbcABC",(TArrayView<char_const_,int> *)&local_14e8,"AbCABCAbcA","C",
             CaseSensitive);
  local_14e8.DataPtr = (TStringView<wchar_t> *)(local_1460 + 4);
  uStack_660 = 2;
  local_14e8._12_4_ = uStack_65c;
  local_14e8.ArrayNum = 2;
  local_658 = 0;
  uStack_650 = 0;
  local_14d8._8_8_ = (ulonglong)uStack_64c << 0x20;
  local_1460._4_4_ = 0x420041;
  local_14d8.DataPtr = (wchar_t *)0x0;
  local_668 = local_14e8.DataPtr;
  bVar3 = SplitLastOfAnyChar(&local_14d8,(TArrayView<wchar_t_const_,int> *)&local_14e8,&local_14c8,
                             &local_14b8,CaseSensitive,(int *)0x0);
  if (bVar3) {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar1 = pFVar5->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_648,L"Condition expected to return false but returned true");
    (*pcVar2)(pFVar1,&local_648,0);
    if (local_648.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_648.Data.AllocatorInstance.Data);
    }
  }
  local_14e8.DataPtr = (TStringView<wchar_t> *)local_1458;
  uStack_1370 = 0;
  local_1378 = 0;
  uStack_630 = 2;
  local_14e8._12_4_ = uStack_62c;
  local_14e8.ArrayNum = 2;
  local_1458._0_4_ = 0x420041;
  local_14d8.DataPtr = (wchar_t *)0x0;
  local_14d8.Size = 0;
  local_14d8._12_4_ = 0;
  local_638 = local_14e8.DataPtr;
  bVar3 = SplitLastOfAnyChar(&local_14d8,(TArrayView<wchar_t_const_,int> *)&local_14e8,&local_14c8,
                             &local_14b8,CaseSensitive,(int *)0x0);
  if (bVar3) {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar1 = pFVar5->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_628,L"Condition expected to return false but returned true");
    (*pcVar2)(pFVar1,&local_628,0);
    if (local_628.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_628.Data.AllocatorInstance.Data);
    }
  }
  return;
}

