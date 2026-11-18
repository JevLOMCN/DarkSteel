// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 11

// GetTestFlags @ 141cccce0

EAutomationTestFlags __thiscall
FTVariantSwitchPatternMatchingTest::GetTestFlags(FTVariantSwitchPatternMatchingTest *this)

{
  return this->TestFlags;
}

// IsStressTest @ 141ccccf0

bool __thiscall
FTVariantSwitchPatternMatchingTest::IsStressTest(FTVariantSwitchPatternMatchingTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141cccd00

uint __thiscall
FTVariantSwitchPatternMatchingTest::GetRequiredDeviceNum(FTVariantSwitchPatternMatchingTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 141cccd10

FString * __thiscall
FTVariantSwitchPatternMatchingTest::GetTestSourceFileName
          (FTVariantSwitchPatternMatchingTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Misc\\TVariantTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141cccd40

int __thiscall
FTVariantSwitchPatternMatchingTest::GetTestSourceFileLine(FTVariantSwitchPatternMatchingTest *this)

{
  return 0x15f;
}

// GetTests @ 141cccd50

/* WARNING: Removing unreachable block (ram,0x000141cccece) */

void __thiscall
FTVariantSwitchPatternMatchingTest::GetTests
          (FTVariantSwitchPatternMatchingTest *this,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
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

// RunTest @ 141cccef0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FTVariantSwitchPatternMatchingTest::RunTest
          (FTVariantSwitchPatternMatchingTest *this,FString *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  ulonglong uVar4;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  TVariant<int,float,double> local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_58;
  local_38 = -1;
  local_30 = &local_38;
  local_28._padding_ = CONCAT44(local_28._padding_._4_4_,0x14);
  local_28.TypeIndex = 0;
  `FTVariantSwitchPatternMatchingTest::TestBody'::__l2::<lambda_1>::operator()(&local_30,&local_28);
  if (local_38 != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IndexTaken == FVariant::IndexOfType<int>()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Misc\\TVariantTest.cpp"
                       ,0x18b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  uVar4 = (ulonglong)local_28.TypeIndex;
  if (2 < uVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<int,float,double>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar4] != UE::Core::Private::TDestructorCaller<int>::Destruct)
  {
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<int,float,double>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar4])(&local_28);
  }
  local_28._padding_ = CONCAT44(local_28._padding_._4_4_,0x41f00000);
  local_28.TypeIndex = 1;
  `FTVariantSwitchPatternMatchingTest::TestBody'::__l2::<lambda_1>::operator()(&local_30,&local_28);
  if (local_38 != 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IndexTaken == FVariant::IndexOfType<float>()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Misc\\TVariantTest.cpp"
                       ,399,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  uVar4 = (ulonglong)local_28.TypeIndex;
  if (2 < uVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<int,float,double>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar4] != UE::Core::Private::TDestructorCaller<float>::Destruct
     ) {
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<int,float,double>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar4])(&local_28);
  }
  local_28._padding_ = __real_4024000000000000;
  local_28.TypeIndex = '\x02';
  `FTVariantSwitchPatternMatchingTest::TestBody'::__l2::<lambda_1>::operator()(&local_30,&local_28);
  if (local_38 != 2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IndexTaken == FVariant::IndexOfType<double>()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Misc\\TVariantTest.cpp"
                       ,0x193,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  bVar2 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar2;
}

// GetBeautifiedTestName @ 141ccd0d0

FString * __thiscall
FTVariantSwitchPatternMatchingTest::GetBeautifiedTestName
          (FTVariantSwitchPatternMatchingTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FTVariantSwitchPatternMatchingTest @ 141cef5e0

FTVariantSwitchPatternMatchingTest * __thiscall
FTVariantSwitchPatternMatchingTest::FTVariantSwitchPatternMatchingTest
          (FTVariantSwitchPatternMatchingTest *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7FTVariantSwitchPatternMatchingTest__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[ApplicationContextMask][EngineFilter]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"System::Core::Misc::TVariant::SwitchPatternMatching");
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

// operator() @ 141cf45e0

void __thiscall
`FTVariantSwitchPatternMatchingTest::TestBody'::__l2::<lambda_1>::operator()
          (void *this,TVariant<int,float,double> *param_1)

{
  code *pcVar1;
  bool bVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1->TypeIndex;
  **(ulonglong **)this = uVar3;
  if (uVar3 == 0) {
    if ((param_1->TypeIndex != '\0') &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (((int)param_1->_padding_ == 0x14) ||
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value == 20",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Misc\\TVariantTest.cpp"
                           ,0x16f,L""), !bVar2)) {
      return;
    }
  }
  else if (uVar3 == 1) {
    if ((param_1->TypeIndex != '\x01') &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (__real_41f00000 == *(float *)&param_1->_padding_) {
      return;
    }
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Value == 30.0f",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Misc\\TVariantTest.cpp"
                       ,0x176,L"");
    if (!bVar2) {
      return;
    }
  }
  else if (uVar3 == 2) {
    if ((param_1->TypeIndex != '\x02') &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (__real_4024000000000000 == (double)param_1->_padding_) {
      return;
    }
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Value == 10.0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Misc\\TVariantTest.cpp"
                       ,0x17d,L"");
    if (!bVar2) {
      return;
    }
  }
  else {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Should not get here\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Misc\\TVariantTest.cpp"
                       ,0x182,L"");
    if (!bVar2) {
      return;
    }
  }
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

// TestBody @ 141d4d820

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FTVariantSwitchPatternMatchingTest::TestBody
          (FTVariantSwitchPatternMatchingTest *this,FString *param_1)

{
  code *pcVar1;
  bool bVar2;
  ulonglong uVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  TVariant<int,float,double> local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_58;
  local_30 = &local_38;
  local_38 = -1;
  local_28._padding_ = CONCAT44(local_28._padding_._4_4_,0x14);
  local_28.TypeIndex = 0;
  `FTVariantSwitchPatternMatchingTest::TestBody'::__l2::<lambda_1>::operator()(&local_30,&local_28);
  if (local_38 != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IndexTaken == FVariant::IndexOfType<int>()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Misc\\TVariantTest.cpp"
                       ,0x18b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  uVar3 = (ulonglong)local_28.TypeIndex;
  if (2 < uVar3) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<int,float,double>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar3] != UE::Core::Private::TDestructorCaller<int>::Destruct)
  {
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<int,float,double>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar3])(&local_28);
  }
  local_28._padding_ = CONCAT44(local_28._padding_._4_4_,0x41f00000);
  local_28.TypeIndex = 1;
  `FTVariantSwitchPatternMatchingTest::TestBody'::__l2::<lambda_1>::operator()(&local_30,&local_28);
  if (local_38 != 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IndexTaken == FVariant::IndexOfType<float>()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Misc\\TVariantTest.cpp"
                       ,399,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  uVar3 = (ulonglong)local_28.TypeIndex;
  if (2 < uVar3) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<int,float,double>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar3] != UE::Core::Private::TDestructorCaller<float>::Destruct
     ) {
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<int,float,double>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar3])(&local_28);
  }
  local_28._padding_ = __real_4024000000000000;
  local_28.TypeIndex = '\x02';
  `FTVariantSwitchPatternMatchingTest::TestBody'::__l2::<lambda_1>::operator()(&local_30,&local_28);
  if (local_38 != 2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IndexTaken == FVariant::IndexOfType<double>()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Misc\\TVariantTest.cpp"
                       ,0x193,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

