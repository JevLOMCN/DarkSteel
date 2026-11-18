// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 10

// GetTestFlags @ 141bc63d0

EAutomationTestFlags __thiscall FUint32Vector3Test::GetTestFlags(FUint32Vector3Test *this)

{
  return this->TestFlags;
}

// IsStressTest @ 141bc6430

bool __thiscall FUint32Vector3Test::IsStressTest(FUint32Vector3Test *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141bc6440

uint __thiscall FUint32Vector3Test::GetRequiredDeviceNum(FUint32Vector3Test *this)

{
  return 1;
}

// GetTestSourceFileName @ 141bc6450

FString * __thiscall
FUint32Vector3Test::GetTestSourceFileName(FUint32Vector3Test *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Math\\IntVectorTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141bc6480

int __thiscall FUint32Vector3Test::GetTestSourceFileLine(FUint32Vector3Test *this)

{
  return 0xfb;
}

// GetTests @ 141bc64f0

/* WARNING: Removing unreachable block (ram,0x000141bc666e) */

void __thiscall
FUint32Vector3Test::GetTests
          (FUint32Vector3Test *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
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

// RunTest @ 141bc66a0

bool __thiscall FUint32Vector3Test::RunTest(FUint32Vector3Test *this,FString *param_1)

{
  bool bVar1;
  
  TestIntVector3<unsigned_int>();
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 141bc66d0

FString * __thiscall
FUint32Vector3Test::GetBeautifiedTestName(FUint32Vector3Test *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FUint32Vector3Test @ 141beb2c0

FUint32Vector3Test * __thiscall
FUint32Vector3Test::FUint32Vector3Test(FUint32Vector3Test *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7FUint32Vector3Test__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[ApplicationContextMask][SmokeFilter]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"System::Core::Math::FUint32Vector3");
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

// TestBody @ 141c43470

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FUint32Vector3Test::TestBody(FUint32Vector3Test *this,FString *param_1)

{
  FAutomationTestBase *pFVar1;
  code *pcVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  TStringBuilderBase<wchar_t> *pTVar6;
  FAutomationTestFramework *pFVar7;
  FString *pFVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  int iVar11;
  FScriptContainerElement *pFVar12;
  int iVar13;
  undefined1 auStack_2e8 [32];
  FString FStack_2c8;
  TIntVector3<unsigned_int>_u_0 TStack_2b8;
  TIntVector3<unsigned_int>_u_0 TStack_2a8;
  FString FStack_298;
  FString FStack_280;
  TStringBuilderBase<wchar_t> TStack_268;
  wchar_t awStack_248 [128];
  TStringBuilderBase<wchar_t> TStack_148;
  wchar_t awStack_128 [128];
  ulonglong auStack_28 [2];
  
  auStack_28[0] = __security_cookie.value ^ (ulonglong)auStack_2e8;
  pFVar10 = (FScriptContainerElement *)0x0;
  TStack_148.Base = awStack_128;
  TStack_148.CurPos = awStack_128;
  TStack_148.bIsDynamic = false;
  TStack_148.bIsExternal = false;
  TStack_148.End = (wchar_t *)auStack_28;
  TStack_2b8._0_8_ = 0;
  iVar13 = 0;
  TStack_2b8._s_0.Z = 0;
  pTVar6 = UE::Math::operator<<<wchar_t>(&TStack_148,(TIntVector3<unsigned_int> *)&TStack_2b8._s_0);
  iVar3 = TIntVector3TestData<unsigned_int>::ZeroString.Size;
  iVar11 = (int)((longlong)pTVar6->CurPos - (longlong)pTVar6->Base >> 1);
  if (TIntVector3TestData<unsigned_int>::ZeroString.Size == iVar11) {
    if ((TIntVector3TestData<unsigned_int>::ZeroString.Size != 0) && (iVar11 != 0)) {
      iVar5 = FGenericPlatformStricmp::Strnicmp
                        (TIntVector3TestData<unsigned_int>::ZeroString.DataPtr,pTVar6->Base,
                         (longlong)iVar11);
      if (iVar5 != 0) goto LAB_141bde058;
    }
    if (iVar3 != iVar11) goto LAB_141bde058;
  }
  else {
LAB_141bde058:
    pFVar7 = FAutomationTestFramework::Get();
    pFVar1 = pFVar7->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&FStack_2c8,L"Condition failed");
    (*pcVar2)(pFVar1,&FStack_2c8,0);
    if (FStack_2c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_2c8.Data.AllocatorInstance.Data);
    }
  }
  TStack_148.CurPos = TStack_148.Base;
  TStack_2b8._0_8_ = 0;
  TStack_2b8._s_0.Z = 0xffffffff;
  pTVar6 = UE::Math::operator<<<wchar_t>(&TStack_148,(TIntVector3<unsigned_int> *)&TStack_2b8._s_0);
  iVar3 = TIntVector3TestData<unsigned_int>::MinZeroMaxString.Size;
  iVar11 = (int)((longlong)pTVar6->CurPos - (longlong)pTVar6->Base >> 1);
  if (TIntVector3TestData<unsigned_int>::MinZeroMaxString.Size == iVar11) {
    if ((TIntVector3TestData<unsigned_int>::MinZeroMaxString.Size != 0) && (iVar11 != 0)) {
      iVar5 = FGenericPlatformStricmp::Strnicmp
                        (TIntVector3TestData<unsigned_int>::MinZeroMaxString.DataPtr,pTVar6->Base,
                         (longlong)iVar11);
      if (iVar5 != 0) goto LAB_141bde108;
    }
    if (iVar3 != iVar11) goto LAB_141bde108;
  }
  else {
LAB_141bde108:
    pFVar7 = FAutomationTestFramework::Get();
    pFVar1 = pFVar7->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&FStack_2c8,L"Condition failed");
    (*pcVar2)(pFVar1,&FStack_2c8,0);
    if (FStack_2c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_2c8.Data.AllocatorInstance.Data);
    }
  }
  TStack_268.Base = awStack_248;
  TStack_2b8._0_8_ = 0;
  TStack_268.CurPos = awStack_248;
  TStack_2b8._s_0.Z = 0;
  TStack_268.End = (wchar_t *)&TStack_148;
  FStack_2c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FStack_2c8.Data.ArrayNum = 0;
  FStack_2c8.Data.ArrayMax = 0;
  TStack_268.bIsDynamic = false;
  TStack_268.bIsExternal = false;
  UE::Math::operator<<<wchar_t>(&TStack_268,(TIntVector3<unsigned_int> *)&TStack_2b8._s_0);
  ::FString::AppendChars
            (&FStack_2c8,TStack_268.Base,
             (int)((longlong)TStack_268.CurPos - (longlong)TStack_268.Base >> 1));
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&TStack_268);
  iVar3 = TIntVector3TestData<unsigned_int>::ZeroString.Size;
  iVar11 = FStack_2c8.Data.ArrayNum + -1;
  if (FStack_2c8.Data.ArrayNum == 0) {
    iVar11 = iVar13;
  }
  if (TIntVector3TestData<unsigned_int>::ZeroString.Size == iVar11) {
    if ((TIntVector3TestData<unsigned_int>::ZeroString.Size != 0) && (iVar11 != 0)) {
      iVar5 = FGenericPlatformStricmp::Strnicmp
                        (TIntVector3TestData<unsigned_int>::ZeroString.DataPtr,
                         (wchar_t *)FStack_2c8.Data.AllocatorInstance.Data,(longlong)iVar11);
      if (iVar5 != 0) goto LAB_141bde1fc;
    }
    bVar4 = false;
    if (iVar3 != iVar11) goto LAB_141bde1fc;
  }
  else {
LAB_141bde1fc:
    bVar4 = true;
  }
  if (FStack_2c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_2c8.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar1 = pFVar7->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&FStack_2c8,L"Condition failed");
    (*pcVar2)(pFVar1,&FStack_2c8,0);
    if (FStack_2c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_2c8.Data.AllocatorInstance.Data);
    }
  }
  TStack_268.Base = awStack_248;
  TStack_2b8._0_8_ = 0;
  TStack_268.CurPos = awStack_248;
  TStack_2b8._s_0.Z = 0xffffffff;
  TStack_268.End = (wchar_t *)&TStack_148;
  FStack_2c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FStack_2c8.Data.ArrayNum = 0;
  FStack_2c8.Data.ArrayMax = 0;
  TStack_268.bIsDynamic = false;
  TStack_268.bIsExternal = false;
  UE::Math::operator<<<wchar_t>(&TStack_268,(TIntVector3<unsigned_int> *)&TStack_2b8._s_0);
  ::FString::AppendChars
            (&FStack_2c8,TStack_268.Base,
             (int)((longlong)TStack_268.CurPos - (longlong)TStack_268.Base >> 1));
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&TStack_268);
  iVar3 = TIntVector3TestData<unsigned_int>::MinZeroMaxString.Size;
  iVar11 = FStack_2c8.Data.ArrayNum + -1;
  if (FStack_2c8.Data.ArrayNum == 0) {
    iVar11 = iVar13;
  }
  if (TIntVector3TestData<unsigned_int>::MinZeroMaxString.Size == iVar11) {
    if ((TIntVector3TestData<unsigned_int>::MinZeroMaxString.Size != 0) && (iVar11 != 0)) {
      iVar5 = FGenericPlatformStricmp::Strnicmp
                        (TIntVector3TestData<unsigned_int>::MinZeroMaxString.DataPtr,
                         (wchar_t *)FStack_2c8.Data.AllocatorInstance.Data,(longlong)iVar11);
      if (iVar5 != 0) goto LAB_141bde303;
    }
    bVar4 = false;
    if (iVar3 != iVar11) goto LAB_141bde303;
  }
  else {
LAB_141bde303:
    bVar4 = true;
  }
  if (FStack_2c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_2c8.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar1 = pFVar7->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&FStack_2c8,L"Condition failed");
    (*pcVar2)(pFVar1,&FStack_2c8,0);
    if (FStack_2c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_2c8.Data.AllocatorInstance.Data);
    }
  }
  pFVar8 = ::FString::ConstructFromPtrSize
                     (&FStack_2c8,TIntVector3TestData<unsigned_int>::ZeroString.DataPtr,
                      TIntVector3TestData<unsigned_int>::ZeroString.Size);
  pFVar12 = pFVar10;
  if (&FStack_280 != pFVar8) {
    pFVar12 = (pFVar8->Data).AllocatorInstance.Data;
    (pFVar8->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar13 = (pFVar8->Data).ArrayNum;
    (pFVar8->Data).ArrayNum = 0;
    (pFVar8->Data).ArrayMax = 0;
  }
  if (FStack_2c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_2c8.Data.AllocatorInstance.Data);
  }
  TStack_2a8._4_8_ = 0;
  TStack_2a8._s_0.X = 0;
  pFVar9 = (FScriptContainerElement *)L"";
  if (iVar13 != 0) {
    pFVar9 = pFVar12;
  }
  bVar4 = FParse::Value((wchar_t *)pFVar9,L"X=",TStack_2a8.XYZ);
  if (bVar4) {
    pFVar9 = (FScriptContainerElement *)L"";
    if (iVar13 != 0) {
      pFVar9 = pFVar12;
    }
    bVar4 = FParse::Value((wchar_t *)pFVar9,L"Y=",&TStack_2a8._s_0.Y);
    if (bVar4) {
      pFVar9 = (FScriptContainerElement *)L"";
      if (iVar13 != 0) {
        pFVar9 = pFVar12;
      }
      bVar4 = FParse::Value((wchar_t *)pFVar9,L"Z=",&TStack_2a8._s_0.Z);
      if ((((bVar4) && (TStack_2a8._s_0.X == 0)) && (TStack_2a8._s_0.Y == 0)) &&
         (TStack_2a8._s_0.Z == 0)) {
        bVar4 = false;
        goto LAB_141bde425;
      }
    }
  }
  bVar4 = true;
LAB_141bde425:
  if (pFVar12 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar12);
  }
  if (bVar4) {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar1 = pFVar7->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&FStack_2c8,L"Condition failed");
    (*pcVar2)(pFVar1,&FStack_2c8,0);
    if (FStack_2c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_2c8.Data.AllocatorInstance.Data);
    }
  }
  FStack_298.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FStack_298.Data.ArrayNum = 0;
  FStack_298.Data.ArrayMax = 0;
  pFVar8 = ::FString::ConstructFromPtrSize
                     (&FStack_2c8,TIntVector3TestData<unsigned_int>::MinZeroMaxString.DataPtr,
                      TIntVector3TestData<unsigned_int>::MinZeroMaxString.Size);
  if (&FStack_298 != pFVar8) {
    pFVar10 = (pFVar8->Data).AllocatorInstance.Data;
    (pFVar8->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    FStack_298.Data.ArrayNum = (pFVar8->Data).ArrayNum;
    FStack_298.Data.ArrayMax = (pFVar8->Data).ArrayMax;
    (pFVar8->Data).ArrayNum = 0;
    (pFVar8->Data).ArrayMax = 0;
    FStack_298.Data.AllocatorInstance.Data = pFVar10;
  }
  if (FStack_2c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_2c8.Data.AllocatorInstance.Data);
  }
  bVar4 = UE::Math::TIntVector3<unsigned_int>::InitFromString
                    ((TIntVector3<unsigned_int> *)&TStack_2a8._s_0,&FStack_298);
  if (((bVar4) && (TStack_2a8._s_0.X == 0)) &&
     ((TStack_2a8._s_0.Y == 0 && (TStack_2a8._s_0.Z == 0xffffffff)))) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if (pFVar10 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar10);
  }
  if (bVar4) {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar1 = pFVar7->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&FStack_2c8,L"Condition failed");
    (*pcVar2)(pFVar1,&FStack_2c8,0);
    if (FStack_2c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_2c8.Data.AllocatorInstance.Data);
    }
  }
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&TStack_148);
  return;
}

