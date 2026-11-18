// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 10

// GetTestFlags @ 141bc6c60

EAutomationTestFlags __thiscall FInt32Vector4Test::GetTestFlags(FInt32Vector4Test *this)

{
  return this->TestFlags;
}

// IsStressTest @ 141bc6c70

bool __thiscall FInt32Vector4Test::IsStressTest(FInt32Vector4Test *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141bc6c80

uint __thiscall FInt32Vector4Test::GetRequiredDeviceNum(FInt32Vector4Test *this)

{
  return 1;
}

// GetTestSourceFileName @ 141bc6c90

FString * __thiscall
FInt32Vector4Test::GetTestSourceFileName(FInt32Vector4Test *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Math\\IntVectorTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141bc6cc0

int __thiscall FInt32Vector4Test::GetTestSourceFileLine(FInt32Vector4Test *this)

{
  return 0x16f;
}

// GetTests @ 141bc6cd0

/* WARNING: Removing unreachable block (ram,0x000141bc6e4e) */

void __thiscall
FInt32Vector4Test::GetTests
          (FInt32Vector4Test *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
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

// RunTest @ 141bc6e70

bool __thiscall FInt32Vector4Test::RunTest(FInt32Vector4Test *this,FString *param_1)

{
  bool bVar1;
  
  TestIntVector4<int>();
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 141bc6ea0

FString * __thiscall
FInt32Vector4Test::GetBeautifiedTestName(FInt32Vector4Test *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FInt32Vector4Test @ 141be3be0

FInt32Vector4Test * __thiscall
FInt32Vector4Test::FInt32Vector4Test(FInt32Vector4Test *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7FInt32Vector4Test__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[ApplicationContextMask][SmokeFilter]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"System::Core::Math::FInt32Vector4");
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

// TestBody @ 141c17660

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FInt32Vector4Test::TestBody(FInt32Vector4Test *this,FString *param_1)

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
  undefined1 auStack_2d8 [32];
  TIntVector4<int>_u_0 TStack_2b8;
  TIntVector4<int>_u_0 TStack_2a8;
  FString FStack_298;
  FString FStack_288;
  TIntVector4<int>_u_0 aTStack_278 [2];
  TStringBuilderBase<wchar_t> TStack_258;
  wchar_t awStack_238 [128];
  TStringBuilderBase<wchar_t> TStack_138;
  wchar_t awStack_118 [128];
  ulonglong auStack_18 [2];
  
  auStack_18[0] = __security_cookie.value ^ (ulonglong)auStack_2d8;
  TStack_138.Base = awStack_118;
  TStack_138.CurPos = awStack_118;
  pFVar10 = (FScriptContainerElement *)0x0;
  TStack_138.End = (wchar_t *)auStack_18;
  TStack_138.bIsDynamic = false;
  TStack_138.bIsExternal = false;
  TStack_2b8._0_8_ = (void *)0x0;
  TStack_2b8._8_8_ = 0;
  pTVar6 = UE::Math::operator<<<wchar_t>(&TStack_138,(TIntVector4<int> *)&TStack_2b8._s_0);
  iVar3 = TIntVector4TestData<int>::ZeroString.Size;
  iVar11 = (int)((longlong)pTVar6->CurPos - (longlong)pTVar6->Base >> 1);
  if (TIntVector4TestData<int>::ZeroString.Size == iVar11) {
    if ((TIntVector4TestData<int>::ZeroString.Size != 0) && (iVar11 != 0)) {
      iVar5 = FGenericPlatformStricmp::Strnicmp
                        (TIntVector4TestData<int>::ZeroString.DataPtr,pTVar6->Base,(longlong)iVar11)
      ;
      if (iVar5 != 0) goto LAB_141bdf2c1;
    }
    if (iVar3 != iVar11) goto LAB_141bdf2c1;
  }
  else {
LAB_141bdf2c1:
    pFVar7 = FAutomationTestFramework::Get();
    pFVar1 = pFVar7->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString((FString *)&TStack_2b8._s_0,L"Condition failed");
    (*pcVar2)(pFVar1,&TStack_2b8,0);
    if ((void *)TStack_2b8._0_8_ != (void *)0x0) {
      FMemory::Free((void *)TStack_2b8._0_8_);
    }
  }
  TStack_138.CurPos = TStack_138.Base;
  TStack_2b8._0_8_ = ___xmm_000000017fffffff0000000080000000;
  TStack_2b8._8_8_ = _UNK_150744138;
  pTVar6 = UE::Math::operator<<<wchar_t>(&TStack_138,(TIntVector4<int> *)&TStack_2b8._s_0);
  iVar3 = TIntVector4TestData<int>::MinZeroMaxOneString.Size;
  iVar11 = (int)((longlong)pTVar6->CurPos - (longlong)pTVar6->Base >> 1);
  if (TIntVector4TestData<int>::MinZeroMaxOneString.Size == iVar11) {
    if ((TIntVector4TestData<int>::MinZeroMaxOneString.Size != 0) && (iVar11 != 0)) {
      iVar5 = FGenericPlatformStricmp::Strnicmp
                        (TIntVector4TestData<int>::MinZeroMaxOneString.DataPtr,pTVar6->Base,
                         (longlong)iVar11);
      if (iVar5 != 0) goto LAB_141bdf372;
    }
    if (iVar3 != iVar11) goto LAB_141bdf372;
  }
  else {
LAB_141bdf372:
    pFVar7 = FAutomationTestFramework::Get();
    pFVar1 = pFVar7->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString((FString *)&TStack_2b8._s_0,L"Condition failed");
    (*pcVar2)(pFVar1,&TStack_2b8,0);
    if ((void *)TStack_2b8._0_8_ != (void *)0x0) {
      FMemory::Free((void *)TStack_2b8._0_8_);
    }
  }
  TStack_258.Base = awStack_238;
  TStack_2b8._0_8_ = (wchar_t *)0x0;
  TStack_258.CurPos = awStack_238;
  TStack_2b8._8_8_ = 0;
  TStack_258.End = (wchar_t *)&TStack_138;
  TStack_258.bIsDynamic = false;
  TStack_258.bIsExternal = false;
  aTStack_278[0]._0_8_ = 0;
  aTStack_278[0]._8_8_ = 0;
  UE::Math::operator<<<wchar_t>(&TStack_258,(TIntVector4<int> *)&aTStack_278[0]._s_0);
  ::FString::AppendChars
            ((FString *)&TStack_2b8._s_0,TStack_258.Base,
             (int)((longlong)TStack_258.CurPos - (longlong)TStack_258.Base >> 1));
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&TStack_258);
  iVar3 = TIntVector4TestData<int>::ZeroString.Size;
  iVar11 = TStack_2b8._s_0.Z + -1;
  if (TStack_2b8._s_0.Z == 0) {
    iVar11 = 0;
  }
  if (TIntVector4TestData<int>::ZeroString.Size == iVar11) {
    if ((TIntVector4TestData<int>::ZeroString.Size != 0) && (iVar11 != 0)) {
      iVar5 = FGenericPlatformStricmp::Strnicmp
                        (TIntVector4TestData<int>::ZeroString.DataPtr,(wchar_t *)TStack_2b8._0_8_,
                         (longlong)iVar11);
      if (iVar5 != 0) goto LAB_141bdf463;
    }
    bVar4 = false;
    if (iVar3 != iVar11) goto LAB_141bdf463;
  }
  else {
LAB_141bdf463:
    bVar4 = true;
  }
  if ((wchar_t *)TStack_2b8._0_8_ != (wchar_t *)0x0) {
    FMemory::Free((void *)TStack_2b8._0_8_);
  }
  if (bVar4) {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar1 = pFVar7->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString((FString *)&TStack_2b8._s_0,L"Condition failed");
    (*pcVar2)(pFVar1,&TStack_2b8,0);
    if ((wchar_t *)TStack_2b8._0_8_ != (wchar_t *)0x0) {
      FMemory::Free((void *)TStack_2b8._0_8_);
    }
  }
  TStack_258.Base = awStack_238;
  TStack_258.CurPos = awStack_238;
  TStack_2b8._0_8_ = (wchar_t *)0x0;
  TStack_258.End = (wchar_t *)&TStack_138;
  TStack_2b8._8_8_ = 0;
  aTStack_278[0]._0_8_ = ___xmm_000000017fffffff0000000080000000;
  aTStack_278[0]._8_8_ = _UNK_150744138;
  TStack_258.bIsDynamic = false;
  TStack_258.bIsExternal = false;
  UE::Math::operator<<<wchar_t>(&TStack_258,(TIntVector4<int> *)&aTStack_278[0]._s_0);
  ::FString::AppendChars
            ((FString *)&TStack_2b8._s_0,TStack_258.Base,
             (int)((longlong)TStack_258.CurPos - (longlong)TStack_258.Base >> 1));
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&TStack_258);
  iVar3 = TIntVector4TestData<int>::MinZeroMaxOneString.Size;
  iVar11 = TStack_2b8._s_0.Z + -1;
  if (TStack_2b8._s_0.Z == 0) {
    iVar11 = 0;
  }
  if (TIntVector4TestData<int>::MinZeroMaxOneString.Size == iVar11) {
    if ((TIntVector4TestData<int>::MinZeroMaxOneString.Size != 0) && (iVar11 != 0)) {
      iVar5 = FGenericPlatformStricmp::Strnicmp
                        (TIntVector4TestData<int>::MinZeroMaxOneString.DataPtr,
                         (wchar_t *)TStack_2b8._0_8_,(longlong)iVar11);
      if (iVar5 != 0) goto LAB_141bdf569;
    }
    bVar4 = false;
    if (iVar3 == iVar11) goto LAB_141bdf56b;
  }
LAB_141bdf569:
  bVar4 = true;
LAB_141bdf56b:
  if ((wchar_t *)TStack_2b8._0_8_ != (wchar_t *)0x0) {
    FMemory::Free((void *)TStack_2b8._0_8_);
  }
  if (bVar4) {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar1 = pFVar7->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString((FString *)&TStack_2b8._s_0,L"Condition failed");
    (*pcVar2)(pFVar1,&TStack_2b8,0);
    if ((wchar_t *)TStack_2b8._0_8_ != (wchar_t *)0x0) {
      FMemory::Free((void *)TStack_2b8._0_8_);
    }
  }
  FStack_298.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FStack_298.Data.ArrayNum = 0;
  FStack_298.Data.ArrayMax = 0;
  pFVar8 = ::FString::ConstructFromPtrSize
                     ((FString *)&aTStack_278[0]._s_0,TIntVector4TestData<int>::ZeroString.DataPtr,
                      TIntVector4TestData<int>::ZeroString.Size);
  pFVar9 = pFVar10;
  if (&FStack_298 != pFVar8) {
    pFVar9 = (pFVar8->Data).AllocatorInstance.Data;
    (pFVar8->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    FStack_298.Data.ArrayNum = (pFVar8->Data).ArrayNum;
    FStack_298.Data.ArrayMax = (pFVar8->Data).ArrayMax;
    (pFVar8->Data).ArrayNum = 0;
    (pFVar8->Data).ArrayMax = 0;
    FStack_298.Data.AllocatorInstance.Data = pFVar9;
  }
  if ((void *)aTStack_278[0]._0_8_ != (void *)0x0) {
    FMemory::Free((void *)aTStack_278[0]._0_8_);
  }
  bVar4 = UE::Math::TIntVector4<int>::InitFromString
                    ((TIntVector4<int> *)&TStack_2a8._s_0,&FStack_298);
  if ((((bVar4) && (TStack_2a8._s_0.X == 0)) && (TStack_2a8._s_0.Y == 0)) &&
     ((TStack_2a8._s_0.Z == 0 && (TStack_2a8._s_0.W == 0)))) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if (pFVar9 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar9);
  }
  if (bVar4) {
    pFVar7 = FAutomationTestFramework::Get();
    pFVar1 = pFVar7->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString((FString *)&TStack_2b8._s_0,L"Condition failed");
    (*pcVar2)(pFVar1,&TStack_2b8,0);
    if ((wchar_t *)TStack_2b8._0_8_ != (wchar_t *)0x0) {
      FMemory::Free((void *)TStack_2b8._0_8_);
    }
  }
  FStack_288.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FStack_288.Data.ArrayNum = 0;
  FStack_288.Data.ArrayMax = 0;
  pFVar8 = ::FString::ConstructFromPtrSize
                     ((FString *)&aTStack_278[0]._s_0,
                      TIntVector4TestData<int>::MinZeroMaxOneString.DataPtr,
                      TIntVector4TestData<int>::MinZeroMaxOneString.Size);
  if (&FStack_288 != pFVar8) {
    pFVar10 = (pFVar8->Data).AllocatorInstance.Data;
    (pFVar8->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    FStack_288.Data.ArrayNum = (pFVar8->Data).ArrayNum;
    FStack_288.Data.ArrayMax = (pFVar8->Data).ArrayMax;
    (pFVar8->Data).ArrayNum = 0;
    (pFVar8->Data).ArrayMax = 0;
    FStack_288.Data.AllocatorInstance.Data = pFVar10;
  }
  if ((void *)aTStack_278[0]._0_8_ != (void *)0x0) {
    FMemory::Free((void *)aTStack_278[0]._0_8_);
  }
  bVar4 = UE::Math::TIntVector4<int>::InitFromString
                    ((TIntVector4<int> *)&TStack_2a8._s_0,&FStack_288);
  if (((bVar4) && (TStack_2a8._s_0.X == -0x80000000)) &&
     ((TStack_2a8._s_0.Y == 0 && ((TStack_2a8._s_0.Z == 0x7fffffff && (TStack_2a8._s_0.W == 1))))))
  {
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
    ::FString::FString((FString *)&TStack_2b8._s_0,L"Condition failed");
    (*pcVar2)(pFVar1,&TStack_2b8,0);
    if ((wchar_t *)TStack_2b8._0_8_ != (wchar_t *)0x0) {
      FMemory::Free((void *)TStack_2b8._0_8_);
    }
  }
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&TStack_138);
  return;
}

