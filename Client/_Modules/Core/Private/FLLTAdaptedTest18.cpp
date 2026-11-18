// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 10

// GetTestFlags @ 141cc4ba0

EAutomationTestFlags __thiscall
UE::SourceLocation::FLLTAdaptedTest18::GetTestFlags(FLLTAdaptedTest18 *this)

{
  return this->TestFlags;
}

// IsStressTest @ 141cc4bb0

bool __thiscall UE::SourceLocation::FLLTAdaptedTest18::IsStressTest(FLLTAdaptedTest18 *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141cc4bc0

uint __thiscall UE::SourceLocation::FLLTAdaptedTest18::GetRequiredDeviceNum(FLLTAdaptedTest18 *this)

{
  return 1;
}

// GetTestSourceFileName @ 141cc4bd0

FString * __thiscall
UE::SourceLocation::FLLTAdaptedTest18::GetTestSourceFileName
          (FLLTAdaptedTest18 *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Misc\\SourceLocationTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141cc4c00

int __thiscall UE::SourceLocation::FLLTAdaptedTest18::GetTestSourceFileLine(FLLTAdaptedTest18 *this)

{
  return 0xc0;
}

// GetTests @ 141cc4c30

/* WARNING: Removing unreachable block (ram,0x000141cc4dae) */

void __thiscall
UE::SourceLocation::FLLTAdaptedTest18::GetTests
          (FLLTAdaptedTest18 *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
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

// RunTest @ 141cc4e20

bool __thiscall
UE::SourceLocation::FLLTAdaptedTest18::RunTest(FLLTAdaptedTest18 *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 141cc4e50

FString * __thiscall
UE::SourceLocation::FLLTAdaptedTest18::GetBeautifiedTestName
          (FLLTAdaptedTest18 *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FLLTAdaptedTest18 @ 141ce76c0

FLLTAdaptedTest18 * __thiscall
UE::SourceLocation::FLLTAdaptedTest18::FLLTAdaptedTest18(FLLTAdaptedTest18 *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7FLLTAdaptedTest18_SourceLocation_UE__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,
                              "[Core][SourceLocation][ApplicationContextMask][SmokeFilter]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"System::Core::Misc::SourceLocation");
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
  ::FString::FString(&local_18,"[Core][SourceLocation][ApplicationContextMask][SmokeFilter]");
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

// TestBody @ 141d21070

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::SourceLocation::FLLTAdaptedTest18::TestBody(FLLTAdaptedTest18 *this,FString *param_1)

{
  atomic<unsigned___int64> *paVar1;
  atomic<unsigned___int64> aVar2;
  FAutomationTestBase *pFVar3;
  code *pcVar4;
  FBufferOwner *pFVar5;
  FScriptContainerElement *pFVar6;
  undefined8 uVar7;
  bool bVar8;
  FAutomationTestFramework *pFVar9;
  FCbFieldIterator *pFVar10;
  int iVar11;
  undefined1 auStack_318 [32];
  undefined1 local_2f8 [32];
  TStringView<wchar_t> local_2d8;
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> local_2c8 [2];
  FSourceLocation local_2b8;
  undefined1 local_298 [16];
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> local_288 [2];
  FCbWriter local_278;
  TStringBuilderBase<wchar_t> local_248;
  FScriptContainerElement local_228 [256];
  wchar_t local_128 [128];
  ulonglong local_28 [4];
  
  local_28[0] = __security_cookie.value ^ (ulonglong)auStack_318;
  local_2b8.Impl._Line = 0x11;
  local_2b8.Impl._File =
       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Misc\\SourceLocationTest.cpp"
  ;
  local_2b8.Impl._Function =
       "class UE::FSourceLocation __cdecl UE::SourceLocation::Private::GetTestSourceLocation(void)";
  local_2b8.Impl._Column = 0x1e;
  pFVar9 = FAutomationTestFramework::Get();
  pFVar3 = pFVar9->CurrentTest;
  pcVar4 = *(code **)(pFVar3->_padding_ + 0x50);
  ::FString::FString((FString *)local_2f8,L"UE::SourceLocation::Full (ToString)");
  (*pcVar4)(pFVar3,local_2f8,0,0);
  if ((FScriptContainerElement *)local_2f8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_2f8._0_8_);
  }
  local_2d8.DataPtr = (wchar_t *)&local_2b8;
  FFullAdapter::ToString((FFullAdapter *)&local_2d8,(FString *)local_2f8);
  local_298._4_4_ = local_2b8.Impl._Column;
  local_298._0_4_ = local_2b8.Impl._Line;
  local_298._8_8_ = local_2b8.Impl._File;
  local_288[0].Owner = (FBufferOwner *)local_2b8.Impl._Function;
  local_2d8.Size = (int)local_2f8._8_8_ + -1;
  if ((int)local_2f8._8_8_ == 0) {
    local_2d8.Size = 0;
  }
  local_2d8.DataPtr = (wchar_t *)local_2f8._0_8_;
  bVar8 = SourceLocation::Private::CheckFullFormatting<wchar_t>
                    (&local_2d8,(FSourceLocation *)local_298);
  if (!bVar8) {
    pFVar9 = FAutomationTestFramework::Get();
    pFVar3 = pFVar9->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString((FString *)&local_2d8,L"Condition failed");
    (*pcVar4)(pFVar3,&local_2d8,0);
    if ((FScriptContainerElement *)local_2d8.DataPtr != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2d8.DataPtr);
    }
  }
  if ((FScriptContainerElement *)local_2f8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_2f8._0_8_);
  }
  pFVar9 = FAutomationTestFramework::Get();
  pFVar3 = pFVar9->CurrentTest;
  pcVar4 = *(code **)(pFVar3->_padding_ + 0x50);
  ::FString::FString((FString *)local_2f8,L"UE::SourceLocation::Full (ToUtf8String)");
  (*pcVar4)(pFVar3,local_2f8,0,0);
  if ((FScriptContainerElement *)local_2f8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_2f8._0_8_);
  }
  local_2d8.DataPtr = (wchar_t *)&local_2b8;
  FFullAdapter::ToUtf8String((FFullAdapter *)&local_2d8,(FUtf8String *)local_2f8);
  local_298._4_4_ = local_2b8.Impl._Column;
  local_298._0_4_ = local_2b8.Impl._Line;
  local_298._8_8_ = local_2b8.Impl._File;
  local_288[0].Owner = (FBufferOwner *)local_2b8.Impl._Function;
  iVar11 = (int)local_2f8._8_8_ + -1;
  if ((int)local_2f8._8_8_ == 0) {
    iVar11 = 0;
  }
  local_2d8.Size = iVar11;
  local_2d8.DataPtr = (wchar_t *)local_2f8._0_8_;
  bVar8 = SourceLocation::Private::CheckFullFormatting<char8_t>
                    ((TStringView<char8_t> *)&local_2d8,(FSourceLocation *)local_298);
  if (!bVar8) {
    pFVar9 = FAutomationTestFramework::Get();
    pFVar3 = pFVar9->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString((FString *)&local_2d8,L"Condition failed");
    (*pcVar4)(pFVar3,&local_2d8,0);
    if ((FScriptContainerElement *)local_2d8.DataPtr != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2d8.DataPtr);
    }
  }
  if ((FScriptContainerElement *)local_2f8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_2f8._0_8_);
  }
  pFVar9 = FAutomationTestFramework::Get();
  pFVar3 = pFVar9->CurrentTest;
  pcVar4 = *(code **)(pFVar3->_padding_ + 0x50);
  ::FString::FString((FString *)local_2f8,L"UE::SourceLocation::Full (Wide String Builder)");
  (*pcVar4)(pFVar3,local_2f8,0,0);
  if ((FScriptContainerElement *)local_2f8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_2f8._0_8_);
  }
  local_248.Base = (wchar_t *)local_228;
  local_248.bIsDynamic = false;
  local_248.bIsExternal = false;
  local_248.CurPos = (wchar_t *)local_228;
  local_248.End = (wchar_t *)local_28;
  local_2d8.DataPtr = (wchar_t *)&local_2b8;
  FFullAdapter::AppendString((FFullAdapter *)&local_2d8,&local_248);
  local_298._4_4_ = local_2b8.Impl._Column;
  local_298._0_4_ = local_2b8.Impl._Line;
  local_2f8._8_4_ = (int)((longlong)local_248.CurPos - (longlong)local_248.Base >> 1);
  local_298._8_8_ = local_2b8.Impl._File;
  local_2f8._0_8_ = local_248.Base;
  local_288[0].Owner = (FBufferOwner *)local_2b8.Impl._Function;
  bVar8 = SourceLocation::Private::CheckFullFormatting<wchar_t>
                    ((TStringView<wchar_t> *)local_2f8,(FSourceLocation *)local_298);
  if (!bVar8) {
    pFVar9 = FAutomationTestFramework::Get();
    pFVar3 = pFVar9->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString((FString *)local_2f8,L"Condition failed");
    (*pcVar4)(pFVar3,local_2f8,0);
    if ((FScriptContainerElement *)local_2f8._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_2f8._0_8_);
    }
  }
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_248);
  pFVar9 = FAutomationTestFramework::Get();
  pFVar3 = pFVar9->CurrentTest;
  pcVar4 = *(code **)(pFVar3->_padding_ + 0x50);
  ::FString::FString((FString *)local_2f8,L"UE::SourceLocation::Full (Utf8 String Builder)");
  (*pcVar4)(pFVar3,local_2f8,0,0);
  if ((FScriptContainerElement *)local_2f8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_2f8._0_8_);
  }
  local_248.Base = (wchar_t *)local_228;
  local_248.bIsDynamic = false;
  local_248.bIsExternal = false;
  local_248.CurPos = (wchar_t *)local_228;
  local_248.End = local_128;
  local_2d8.DataPtr = (wchar_t *)&local_2b8;
  FFullAdapter::AppendString((FFullAdapter *)&local_2d8,(TStringBuilderBase<char8_t> *)&local_248);
  local_298._4_4_ = local_2b8.Impl._Column;
  local_298._0_4_ = local_2b8.Impl._Line;
  local_2f8._8_4_ = (int)local_248.CurPos - (int)local_248.Base;
  local_298._8_8_ = local_2b8.Impl._File;
  local_2f8._0_8_ = local_248.Base;
  local_288[0].Owner = (FBufferOwner *)local_2b8.Impl._Function;
  bVar8 = SourceLocation::Private::CheckFullFormatting<char8_t>
                    ((TStringView<char8_t> *)local_2f8,(FSourceLocation *)local_298);
  if (!bVar8) {
    pFVar9 = FAutomationTestFramework::Get();
    pFVar3 = pFVar9->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString((FString *)local_2f8,L"Condition failed");
    (*pcVar4)(pFVar3,local_2f8,0);
    if ((FScriptContainerElement *)local_2f8._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_2f8._0_8_);
    }
  }
  TStringBuilderBase<char8_t>::~TStringBuilderBase<char8_t>
            ((TStringBuilderBase<char8_t> *)&local_248);
  pFVar9 = FAutomationTestFramework::Get();
  pFVar3 = pFVar9->CurrentTest;
  pcVar4 = *(code **)(pFVar3->_padding_ + 0x50);
  ::FString::FString((FString *)local_2f8,L"UE::SourceLocation::Full (Compact Binary Writer)");
  (*pcVar4)(pFVar3,local_2f8,0,0);
  if ((FScriptContainerElement *)local_2f8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_2f8._0_8_);
  }
  FCbWriter::FCbWriter(&local_278);
  SourceLocation::Private::SerializeForLogFull(&local_278,&local_2b8);
  pFVar10 = FCbWriter::Save(&local_278,(FCbFieldIterator *)local_298);
  pFVar6 = *(FScriptContainerElement **)pFVar10;
  uVar7 = *(undefined8 *)&pFVar10->field_0x8;
  pFVar5 = *(FBufferOwner **)&pFVar10->field_0x10;
  *(undefined8 *)&pFVar10->field_0x10 = 0;
  local_2d8.DataPtr = (wchar_t *)pFVar6;
  local_2d8._8_8_ = uVar7;
  local_2c8[0].Owner = pFVar5;
  SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(local_288);
  local_298._4_4_ = local_2b8.Impl._Column;
  local_298._0_4_ = local_2b8.Impl._Line;
  if (pFVar5 != (FBufferOwner *)0x0) {
    LOCK();
    paVar1 = &pFVar5->ReferenceCountsAndFlags;
    aVar2 = *paVar1;
    *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + 1);
    UNLOCK();
    if (((ulonglong)aVar2 & 0x3fffffff) == 0) {
      LOCK();
      pFVar5->ReferenceCountsAndFlags =
           (atomic<unsigned___int64>)((longlong)pFVar5->ReferenceCountsAndFlags + 0x40000000);
      UNLOCK();
    }
  }
  local_298._8_8_ = local_2b8.Impl._File;
  local_288[0].Owner = (FBufferOwner *)local_2b8.Impl._Function;
  local_2f8._0_8_ = pFVar6;
  local_2f8._8_8_ = uVar7;
  local_2f8._16_8_ = pFVar5;
  bVar8 = SourceLocation::Private::ValidateBinaryForFull
                    ((FCbField *)local_2f8,(FSourceLocation *)local_298);
  if (!bVar8) {
    pFVar9 = FAutomationTestFramework::Get();
    pFVar3 = pFVar9->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString((FString *)local_2f8,L"Condition failed");
    (*pcVar4)(pFVar3,local_2f8,0);
    if ((FScriptContainerElement *)local_2f8._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_2f8._0_8_);
    }
  }
  SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(local_2c8);
  FCbWriter::~FCbWriter(&local_278);
  pFVar9 = FAutomationTestFramework::Get();
  pFVar3 = pFVar9->CurrentTest;
  pcVar4 = *(code **)(pFVar3->_padding_ + 0x50);
  ::FString::FString((FString *)local_2f8,L"UE::SourceLocation::FileAndLine (ToString)");
  (*pcVar4)(pFVar3,local_2f8,0,0);
  if ((FScriptContainerElement *)local_2f8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_2f8._0_8_);
  }
  local_2d8.DataPtr = (wchar_t *)&local_2b8;
  FFileAndLineAdapter::ToString((FFileAndLineAdapter *)&local_2d8,(FString *)local_2f8);
  local_298._4_4_ = local_2b8.Impl._Column;
  local_298._0_4_ = local_2b8.Impl._Line;
  local_298._8_8_ = local_2b8.Impl._File;
  local_288[0].Owner = (FBufferOwner *)local_2b8.Impl._Function;
  iVar11 = (int)local_2f8._8_8_ + -1;
  if ((int)local_2f8._8_8_ == 0) {
    iVar11 = 0;
  }
  local_2d8.Size = iVar11;
  local_2d8.DataPtr = (wchar_t *)local_2f8._0_8_;
  bVar8 = SourceLocation::Private::CheckFileAndLineFormatting<wchar_t>
                    (&local_2d8,(FSourceLocation *)local_298);
  if (!bVar8) {
    pFVar9 = FAutomationTestFramework::Get();
    pFVar3 = pFVar9->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString((FString *)&local_2d8,L"Condition failed");
    (*pcVar4)(pFVar3,&local_2d8,0);
    if ((FScriptContainerElement *)local_2d8.DataPtr != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2d8.DataPtr);
    }
  }
  if ((FScriptContainerElement *)local_2f8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_2f8._0_8_);
  }
  pFVar9 = FAutomationTestFramework::Get();
  pFVar3 = pFVar9->CurrentTest;
  pcVar4 = *(code **)(pFVar3->_padding_ + 0x50);
  ::FString::FString((FString *)local_2f8,L"UE::SourceLocation::FileAndLine (ToUtf8String)");
  (*pcVar4)(pFVar3,local_2f8,0,0);
  if ((FScriptContainerElement *)local_2f8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_2f8._0_8_);
  }
  local_2d8.DataPtr = (wchar_t *)&local_2b8;
  FFileAndLineAdapter::ToUtf8String((FFileAndLineAdapter *)&local_2d8,(FUtf8String *)local_2f8);
  local_298._4_4_ = local_2b8.Impl._Column;
  local_298._0_4_ = local_2b8.Impl._Line;
  local_298._8_8_ = local_2b8.Impl._File;
  local_288[0].Owner = (FBufferOwner *)local_2b8.Impl._Function;
  iVar11 = (int)local_2f8._8_8_ + -1;
  if ((int)local_2f8._8_8_ == 0) {
    iVar11 = 0;
  }
  local_2d8.Size = iVar11;
  local_2d8.DataPtr = (wchar_t *)local_2f8._0_8_;
  bVar8 = SourceLocation::Private::CheckFileAndLineFormatting<char8_t>
                    ((TStringView<char8_t> *)&local_2d8,(FSourceLocation *)local_298);
  if (!bVar8) {
    pFVar9 = FAutomationTestFramework::Get();
    pFVar3 = pFVar9->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString((FString *)&local_2d8,L"Condition failed");
    (*pcVar4)(pFVar3,&local_2d8,0);
    if ((FScriptContainerElement *)local_2d8.DataPtr != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2d8.DataPtr);
    }
  }
  if ((FScriptContainerElement *)local_2f8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_2f8._0_8_);
  }
  pFVar9 = FAutomationTestFramework::Get();
  pFVar3 = pFVar9->CurrentTest;
  pcVar4 = *(code **)(pFVar3->_padding_ + 0x50);
  ::FString::FString((FString *)local_2f8,L"UE::SourceLocation::FileAndLine (Wide String Builder)");
  (*pcVar4)(pFVar3,local_2f8,0,0);
  if ((FScriptContainerElement *)local_2f8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_2f8._0_8_);
  }
  local_248.Base = (wchar_t *)local_228;
  local_248.bIsDynamic = false;
  local_248.bIsExternal = false;
  local_248.CurPos = (wchar_t *)local_228;
  local_248.End = (wchar_t *)local_28;
  local_2d8.DataPtr = (wchar_t *)&local_2b8;
  FFileAndLineAdapter::AppendString((FFileAndLineAdapter *)&local_2d8,&local_248);
  local_298._4_4_ = local_2b8.Impl._Column;
  local_298._0_4_ = local_2b8.Impl._Line;
  local_2f8._8_4_ = (int)((longlong)local_248.CurPos - (longlong)local_248.Base >> 1);
  local_298._8_8_ = local_2b8.Impl._File;
  local_2f8._0_8_ = local_248.Base;
  local_288[0].Owner = (FBufferOwner *)local_2b8.Impl._Function;
  bVar8 = SourceLocation::Private::CheckFileAndLineFormatting<wchar_t>
                    ((TStringView<wchar_t> *)local_2f8,(FSourceLocation *)local_298);
  if (!bVar8) {
    pFVar9 = FAutomationTestFramework::Get();
    pFVar3 = pFVar9->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString((FString *)local_2f8,L"Condition failed");
    (*pcVar4)(pFVar3,local_2f8,0);
    if ((FScriptContainerElement *)local_2f8._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_2f8._0_8_);
    }
  }
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_248);
  pFVar9 = FAutomationTestFramework::Get();
  pFVar3 = pFVar9->CurrentTest;
  pcVar4 = *(code **)(pFVar3->_padding_ + 0x50);
  ::FString::FString((FString *)local_2f8,L"UE::SourceLocation::FileAndLine (Utf8 String Builder)");
  (*pcVar4)(pFVar3,local_2f8,0,0);
  if ((FScriptContainerElement *)local_2f8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_2f8._0_8_);
  }
  local_248.Base = (wchar_t *)local_228;
  local_248.bIsDynamic = false;
  local_248.bIsExternal = false;
  local_248.CurPos = (wchar_t *)local_228;
  local_248.End = local_128;
  local_2d8.DataPtr = (wchar_t *)&local_2b8;
  FFileAndLineAdapter::AppendString
            ((FFileAndLineAdapter *)&local_2d8,(TStringBuilderBase<char8_t> *)&local_248);
  local_298._4_4_ = local_2b8.Impl._Column;
  local_298._0_4_ = local_2b8.Impl._Line;
  local_2f8._8_4_ = (int)local_248.CurPos - (int)local_248.Base;
  local_298._8_8_ = local_2b8.Impl._File;
  local_2f8._0_8_ = local_248.Base;
  local_288[0].Owner = (FBufferOwner *)local_2b8.Impl._Function;
  bVar8 = SourceLocation::Private::CheckFileAndLineFormatting<char8_t>
                    ((TStringView<char8_t> *)local_2f8,(FSourceLocation *)local_298);
  if (!bVar8) {
    pFVar9 = FAutomationTestFramework::Get();
    pFVar3 = pFVar9->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString((FString *)local_2f8,L"Condition failed");
    (*pcVar4)(pFVar3,local_2f8,0);
    if ((FScriptContainerElement *)local_2f8._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_2f8._0_8_);
    }
  }
  TStringBuilderBase<char8_t>::~TStringBuilderBase<char8_t>
            ((TStringBuilderBase<char8_t> *)&local_248);
  pFVar9 = FAutomationTestFramework::Get();
  pFVar3 = pFVar9->CurrentTest;
  pcVar4 = *(code **)(pFVar3->_padding_ + 0x50);
  ::FString::FString((FString *)local_2f8,L"UE::SourceLocation::FileAndLine (Compact Binary Writer)"
                    );
  (*pcVar4)(pFVar3,local_2f8,0,0);
  if ((FScriptContainerElement *)local_2f8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_2f8._0_8_);
  }
  FCbWriter::FCbWriter(&local_278);
  SourceLocation::Private::SerializeForLogFileAndLine(&local_278,&local_2b8);
  pFVar10 = FCbWriter::Save(&local_278,(FCbFieldIterator *)local_298);
  pFVar6 = *(FScriptContainerElement **)pFVar10;
  uVar7 = *(undefined8 *)&pFVar10->field_0x8;
  pFVar5 = *(FBufferOwner **)&pFVar10->field_0x10;
  *(undefined8 *)&pFVar10->field_0x10 = 0;
  local_2d8.DataPtr = (wchar_t *)pFVar6;
  local_2d8._8_8_ = uVar7;
  local_2c8[0].Owner = pFVar5;
  SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(local_288);
  local_298._4_4_ = local_2b8.Impl._Column;
  local_298._0_4_ = local_2b8.Impl._Line;
  if (pFVar5 != (FBufferOwner *)0x0) {
    LOCK();
    paVar1 = &pFVar5->ReferenceCountsAndFlags;
    aVar2 = *paVar1;
    *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + 1);
    UNLOCK();
    if (((ulonglong)aVar2 & 0x3fffffff) == 0) {
      LOCK();
      pFVar5->ReferenceCountsAndFlags =
           (atomic<unsigned___int64>)((longlong)pFVar5->ReferenceCountsAndFlags + 0x40000000);
      UNLOCK();
    }
  }
  local_298._8_8_ = local_2b8.Impl._File;
  local_288[0].Owner = (FBufferOwner *)local_2b8.Impl._Function;
  local_2f8._0_8_ = pFVar6;
  local_2f8._8_8_ = uVar7;
  local_2f8._16_8_ = pFVar5;
  bVar8 = SourceLocation::Private::ValidateBinaryForFileAndLine
                    ((FCbField *)local_2f8,(FSourceLocation *)local_298);
  if (!bVar8) {
    pFVar9 = FAutomationTestFramework::Get();
    pFVar3 = pFVar9->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString((FString *)local_2f8,L"Condition failed");
    (*pcVar4)(pFVar3,local_2f8,0);
    if ((FScriptContainerElement *)local_2f8._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_2f8._0_8_);
    }
  }
  SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(local_2c8);
  FCbWriter::~FCbWriter(&local_278);
  return;
}

