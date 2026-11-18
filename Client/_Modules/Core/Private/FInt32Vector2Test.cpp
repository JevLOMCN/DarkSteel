// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 10

// GetTestFlags @ 141bc4320

EAutomationTestFlags __thiscall FInt32Vector2Test::GetTestFlags(FInt32Vector2Test *this)

{
  return this->TestFlags;
}

// IsStressTest @ 141bc4330

bool __thiscall FInt32Vector2Test::IsStressTest(FInt32Vector2Test *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141bc4340

uint __thiscall FInt32Vector2Test::GetRequiredDeviceNum(FInt32Vector2Test *this)

{
  return 1;
}

// GetTestSourceFileName @ 141bc4350

FString * __thiscall
FInt32Vector2Test::GetTestSourceFileName(FInt32Vector2Test *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Math\\IntVectorTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141bc4380

int __thiscall FInt32Vector2Test::GetTestSourceFileLine(FInt32Vector2Test *this)

{
  return 0x73;
}

// GetTests @ 141bc43c0

/* WARNING: Removing unreachable block (ram,0x000141bc453e) */

void __thiscall
FInt32Vector2Test::GetTests
          (FInt32Vector2Test *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
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

// RunTest @ 141bc45a0

bool __thiscall FInt32Vector2Test::RunTest(FInt32Vector2Test *this,FString *param_1)

{
  bool bVar1;
  
  TestIntVector2<int>();
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 141bc45d0

FString * __thiscall
FInt32Vector2Test::GetBeautifiedTestName(FInt32Vector2Test *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FInt32Vector2Test @ 141be3840

FInt32Vector2Test * __thiscall
FInt32Vector2Test::FInt32Vector2Test(FInt32Vector2Test *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7FInt32Vector2Test__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[ApplicationContextMask][SmokeFilter]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"System::Core::Math::FInt32Vector2");
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
  ::FString::FString(&local_18,"[ApplicationContextMask][SmokeFilter]");
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

// TestBody @ 141c17640

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FInt32Vector2Test::TestBody(FInt32Vector2Test *this,FString *param_1)

{
  FAutomationTestBase *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  TStringBuilderBase<wchar_t> *pTVar7;
  FAutomationTestFramework *pFVar8;
  FString *pFVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  int iVar12;
  FScriptContainerElement *pFVar13;
  int iVar14;
  undefined1 auStack_2c8 [32];
  FString FStack_2a8;
  int aiStack_298 [2];
  TIntVector2<int>_u_0 TStack_290;
  FString FStack_288;
  FString FStack_278;
  TStringBuilderBase<wchar_t> TStack_268;
  wchar_t awStack_248 [128];
  TStringBuilderBase<wchar_t> TStack_148;
  wchar_t awStack_128 [128];
  ulonglong auStack_28 [2];
  
  auStack_28[0] = __security_cookie.value ^ (ulonglong)auStack_2c8;
  TStack_148.Base = awStack_128;
  pFVar13 = (FScriptContainerElement *)0x0;
  TStack_148.CurPos = awStack_128;
  TStack_148.bIsDynamic = false;
  TStack_148.bIsExternal = false;
  TStack_148.End = (wchar_t *)auStack_28;
  TStack_290 = (TIntVector2<int>_u_0)0x0;
  pTVar7 = UE::Math::operator<<<wchar_t>(&TStack_148,(TIntVector2<int> *)&TStack_290._s_0);
  iVar14 = TIntVector2TestData<int>::ZeroString.Size;
  iVar12 = (int)((longlong)pTVar7->CurPos - (longlong)pTVar7->Base >> 1);
  if (TIntVector2TestData<int>::ZeroString.Size == iVar12) {
    if ((TIntVector2TestData<int>::ZeroString.Size != 0) && (iVar12 != 0)) {
      iVar4 = FGenericPlatformStricmp::Strnicmp
                        (TIntVector2TestData<int>::ZeroString.DataPtr,pTVar7->Base,(longlong)iVar12)
      ;
      if (iVar4 != 0) goto LAB_141bdc223;
    }
    if (iVar14 != iVar12) goto LAB_141bdc223;
  }
  else {
LAB_141bdc223:
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&FStack_2a8,L"Condition failed");
    (*pcVar2)(pFVar1,&FStack_2a8,0);
    if (FStack_2a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_2a8.Data.AllocatorInstance.Data);
    }
  }
  TStack_148.CurPos = TStack_148.Base;
  TStack_290 = (TIntVector2<int>_u_0)0x7fffffff80000000;
  pTVar7 = UE::Math::operator<<<wchar_t>(&TStack_148,(TIntVector2<int> *)&TStack_290._s_0);
  iVar14 = TIntVector2TestData<int>::MinMaxString.Size;
  iVar12 = (int)((longlong)pTVar7->CurPos - (longlong)pTVar7->Base >> 1);
  if (TIntVector2TestData<int>::MinMaxString.Size == iVar12) {
    if ((TIntVector2TestData<int>::MinMaxString.Size != 0) && (iVar12 != 0)) {
      iVar4 = FGenericPlatformStricmp::Strnicmp
                        (TIntVector2TestData<int>::MinMaxString.DataPtr,pTVar7->Base,
                         (longlong)iVar12);
      if (iVar4 != 0) goto LAB_141bdc2d6;
    }
    if (iVar14 != iVar12) goto LAB_141bdc2d6;
  }
  else {
LAB_141bdc2d6:
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&FStack_2a8,L"Condition failed");
    (*pcVar2)(pFVar1,&FStack_2a8,0);
    if (FStack_2a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_2a8.Data.AllocatorInstance.Data);
    }
  }
  TStack_268.Base = awStack_248;
  TStack_290 = (TIntVector2<int>_u_0)0x0;
  TStack_268.CurPos = awStack_248;
  FStack_2a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  TStack_268.End = (wchar_t *)&TStack_148;
  FStack_2a8.Data.ArrayNum = 0;
  FStack_2a8.Data.ArrayMax = 0;
  TStack_268.bIsDynamic = false;
  TStack_268.bIsExternal = false;
  UE::Math::operator<<<wchar_t>(&TStack_268,(TIntVector2<int> *)&TStack_290._s_0);
  ::FString::AppendChars
            (&FStack_2a8,TStack_268.Base,
             (int)((longlong)TStack_268.CurPos - (longlong)TStack_268.Base >> 1));
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&TStack_268);
  iVar12 = TIntVector2TestData<int>::ZeroString.Size;
  iVar14 = 0;
  iVar4 = FStack_2a8.Data.ArrayNum + -1;
  if (FStack_2a8.Data.ArrayNum == 0) {
    iVar4 = iVar14;
  }
  if (TIntVector2TestData<int>::ZeroString.Size == iVar4) {
    if ((TIntVector2TestData<int>::ZeroString.Size != 0) && (iVar4 != 0)) {
      iVar5 = FGenericPlatformStricmp::Strnicmp
                        (TIntVector2TestData<int>::ZeroString.DataPtr,
                         (wchar_t *)FStack_2a8.Data.AllocatorInstance.Data,(longlong)iVar4);
      if (iVar5 != 0) goto LAB_141bdc3cd;
    }
    bVar3 = false;
    if (iVar12 != iVar4) goto LAB_141bdc3cd;
  }
  else {
LAB_141bdc3cd:
    bVar3 = true;
  }
  if (FStack_2a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_2a8.Data.AllocatorInstance.Data);
  }
  if (bVar3) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&FStack_2a8,L"Condition failed");
    (*pcVar2)(pFVar1,&FStack_2a8,0);
    if (FStack_2a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_2a8.Data.AllocatorInstance.Data);
    }
  }
  TStack_268.Base = awStack_248;
  TStack_268.CurPos = awStack_248;
  TStack_290 = (TIntVector2<int>_u_0)0x7fffffff80000000;
  TStack_268.End = (wchar_t *)&TStack_148;
  FStack_2a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FStack_2a8.Data.ArrayNum = 0;
  FStack_2a8.Data.ArrayMax = 0;
  TStack_268.bIsDynamic = false;
  TStack_268.bIsExternal = false;
  UE::Math::operator<<<wchar_t>(&TStack_268,(TIntVector2<int> *)&TStack_290._s_0);
  ::FString::AppendChars
            (&FStack_2a8,TStack_268.Base,
             (int)((longlong)TStack_268.CurPos - (longlong)TStack_268.Base >> 1));
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&TStack_268);
  iVar4 = TIntVector2TestData<int>::MinMaxString.Size;
  iVar12 = 0;
  iVar5 = FStack_2a8.Data.ArrayNum + -1;
  if (FStack_2a8.Data.ArrayNum == 0) {
    iVar5 = iVar12;
  }
  if (TIntVector2TestData<int>::MinMaxString.Size == iVar5) {
    if ((TIntVector2TestData<int>::MinMaxString.Size != 0) && (iVar5 != 0)) {
      iVar6 = FGenericPlatformStricmp::Strnicmp
                        (TIntVector2TestData<int>::MinMaxString.DataPtr,
                         (wchar_t *)FStack_2a8.Data.AllocatorInstance.Data,(longlong)iVar5);
      if (iVar6 != 0) goto LAB_141bdc4df;
    }
    bVar3 = false;
    if (iVar4 != iVar5) goto LAB_141bdc4df;
  }
  else {
LAB_141bdc4df:
    bVar3 = true;
  }
  if (FStack_2a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_2a8.Data.AllocatorInstance.Data);
  }
  if (bVar3) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&FStack_2a8,L"Condition failed");
    (*pcVar2)(pFVar1,&FStack_2a8,0);
    if (FStack_2a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_2a8.Data.AllocatorInstance.Data);
    }
  }
  pFVar9 = ::FString::ConstructFromPtrSize
                     (&FStack_2a8,TIntVector2TestData<int>::ZeroString.DataPtr,
                      TIntVector2TestData<int>::ZeroString.Size);
  pFVar11 = pFVar13;
  if (&FStack_288 != pFVar9) {
    pFVar11 = (pFVar9->Data).AllocatorInstance.Data;
    (pFVar9->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar12 = (pFVar9->Data).ArrayNum;
    (pFVar9->Data).ArrayNum = 0;
    (pFVar9->Data).ArrayMax = 0;
  }
  if (FStack_2a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_2a8.Data.AllocatorInstance.Data);
  }
  aiStack_298[0] = 0;
  aiStack_298[1] = 0;
  pFVar10 = (FScriptContainerElement *)L"";
  if (iVar12 != 0) {
    pFVar10 = pFVar11;
  }
  bVar3 = FParse::Value((wchar_t *)pFVar10,L"X=",aiStack_298);
  if (bVar3) {
    pFVar10 = (FScriptContainerElement *)L"";
    if (iVar12 != 0) {
      pFVar10 = pFVar11;
    }
    bVar3 = FParse::Value((wchar_t *)pFVar10,L"Y=",aiStack_298 + 1);
    if (((!bVar3) || (aiStack_298[0] != 0)) || (aiStack_298[1] != 0)) goto LAB_141bdc5d4;
    bVar3 = false;
  }
  else {
LAB_141bdc5d4:
    bVar3 = true;
  }
  if (pFVar11 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar11);
  }
  if (bVar3) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&FStack_2a8,L"Condition failed");
    (*pcVar2)(pFVar1,&FStack_2a8,0);
    if (FStack_2a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_2a8.Data.AllocatorInstance.Data);
    }
  }
  pFVar9 = ::FString::ConstructFromPtrSize
                     (&FStack_2a8,TIntVector2TestData<int>::MinMaxString.DataPtr,
                      TIntVector2TestData<int>::MinMaxString.Size);
  if (&FStack_278 != pFVar9) {
    pFVar13 = (pFVar9->Data).AllocatorInstance.Data;
    (pFVar9->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar14 = (pFVar9->Data).ArrayNum;
    (pFVar9->Data).ArrayNum = 0;
    (pFVar9->Data).ArrayMax = 0;
  }
  if (FStack_2a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_2a8.Data.AllocatorInstance.Data);
  }
  aiStack_298[0] = 0;
  aiStack_298[1] = 0;
  pFVar11 = (FScriptContainerElement *)L"";
  if (iVar14 != 0) {
    pFVar11 = pFVar13;
  }
  bVar3 = FParse::Value((wchar_t *)pFVar11,L"X=",aiStack_298);
  if (bVar3) {
    pFVar11 = (FScriptContainerElement *)L"";
    if (iVar14 != 0) {
      pFVar11 = pFVar13;
    }
    bVar3 = FParse::Value((wchar_t *)pFVar11,L"Y=",aiStack_298 + 1);
    if (((bVar3) && (aiStack_298[0] == -0x80000000)) && (aiStack_298[1] == 0x7fffffff)) {
      bVar3 = false;
      goto LAB_141bdc6d0;
    }
  }
  bVar3 = true;
LAB_141bdc6d0:
  if (pFVar13 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar13);
  }
  if (bVar3) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&FStack_2a8,L"Condition failed");
    (*pcVar2)(pFVar1,&FStack_2a8,0);
    if (FStack_2a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_2a8.Data.AllocatorInstance.Data);
    }
  }
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&TStack_148);
  return;
}

