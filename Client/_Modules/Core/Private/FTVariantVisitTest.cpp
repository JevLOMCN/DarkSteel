// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 10

// GetTestFlags @ 141cbb060

EAutomationTestFlags __thiscall FTVariantVisitTest::GetTestFlags(FTVariantVisitTest *this)

{
  return this->TestFlags;
}

// IsStressTest @ 141cbb070

bool __thiscall FTVariantVisitTest::IsStressTest(FTVariantVisitTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141cbb080

uint __thiscall FTVariantVisitTest::GetRequiredDeviceNum(FTVariantVisitTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 141cbb090

FString * __thiscall
FTVariantVisitTest::GetTestSourceFileName(FTVariantVisitTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Misc\\TVariantTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141cbb0c0

int __thiscall FTVariantVisitTest::GetTestSourceFileLine(FTVariantVisitTest *this)

{
  return 0x1b5;
}

// GetTests @ 141cbb0d0

/* WARNING: Removing unreachable block (ram,0x000141cbb24e) */

void __thiscall
FTVariantVisitTest::GetTests
          (FTVariantVisitTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
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

// RunTest @ 141cbb280

bool __thiscall FTVariantVisitTest::RunTest(FTVariantVisitTest *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 141cbb2c0

FString * __thiscall
FTVariantVisitTest::GetBeautifiedTestName(FTVariantVisitTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FTVariantVisitTest @ 141cefb50

FTVariantVisitTest * __thiscall
FTVariantVisitTest::FTVariantVisitTest(FTVariantVisitTest *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7FTVariantVisitTest__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[ApplicationContextMask][EngineFilter]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"System::Core::Misc::TVariant::Visit");
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

// TestBody @ 141d4dd40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FTVariantVisitTest::TestBody(FTVariantVisitTest *this,FString *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  ulonglong uVar4;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  undefined1 local_57;
  undefined1 local_56;
  undefined1 local_55;
  undefined1 local_54;
  undefined1 local_53;
  undefined1 local_52;
  undefined1 local_51;
  undefined1 local_50 [4];
  undefined4 local_4c;
  byte local_48;
  FString local_40;
  byte local_30;
  undefined4 local_28 [4];
  byte local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_78;
  local_4c = 0;
  local_48 = 0;
  local_28[0] = 0;
  local_18 = 1;
  ::FString::FString(&local_40,L"");
  local_30 = 0;
  local_58 = 0;
  if ((code *)(&
              PTR_VisitApplyEncoded<0,0,1,_FTVariantVisitTest::TestBody_::__l2::FCallable,TVariant<int,float>_&,TVariant<int,float>_&>_150782fa0
              )[(ulonglong)local_48 * 3] !=
      UE::Core::Private::
      VisitApplyEncoded<0,0,1,_FTVariantVisitTest::TestBody_::__l2::FCallable,TVariant<int,float>_&,TVariant<int,float>_&>
     ) {
    iVar3 = (*(code *)(&
                      PTR_VisitApplyEncoded<0,0,1,_FTVariantVisitTest::TestBody_::__l2::FCallable,TVariant<int,float>_&,TVariant<int,float>_&>_150782fa0
                      )[(ulonglong)local_48 * 3])(&local_58,&local_4c,&local_4c);
    if (iVar3 != 1) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Visit(FCallable{}, IntV, IntV) == EVisitType::IntInt",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Misc\\TVariantTest.cpp"
                         ,0x1d6,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  local_57 = 0;
  if ((code *)(&
              PTR_VisitApplyEncoded<0,0,1,_FTVariantVisitTest::TestBody_::__l2::FCallable,TVariant<int,float>_&,TVariant<int,float,FString>_const_&>_150782fc0
              )[(ulonglong)local_48 + (ulonglong)local_18 * 2] !=
      UE::Core::Private::
      VisitApplyEncoded<2,0,1,_FTVariantVisitTest::TestBody_::__l2::FCallable,TVariant<int,float>_&,TVariant<int,float,FString>_const_&>
     ) {
    iVar3 = (*(code *)(&
                      PTR_VisitApplyEncoded<0,0,1,_FTVariantVisitTest::TestBody_::__l2::FCallable,TVariant<int,float>_&,TVariant<int,float,FString>_const_&>_150782fc0
                      )[(ulonglong)local_48 + (ulonglong)local_18 * 2])
                      (&local_57,&local_4c,local_28);
    if (iVar3 != 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Visit(FCallable{}, IntV, FloatV) == EVisitType::IntFloat",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Misc\\TVariantTest.cpp"
                         ,0x1d7,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  local_56 = 0;
  if ((code *)(&
              PTR_VisitApplyEncoded<0,0,1,_FTVariantVisitTest::TestBody_::__l2::FCallable,TVariant<int,float>_&,TVariant<FString>_const_&>_150782ff0
              )[(ulonglong)local_48 + (ulonglong)local_30 * 2] !=
      UE::Core::Private::
      VisitApplyEncoded<0,0,1,_FTVariantVisitTest::TestBody_::__l2::FCallable,TVariant<int,float>_&,TVariant<FString>_const_&>
     ) {
    iVar3 = (*(code *)(&
                      PTR_VisitApplyEncoded<0,0,1,_FTVariantVisitTest::TestBody_::__l2::FCallable,TVariant<int,float>_&,TVariant<FString>_const_&>_150782ff0
                      )[(ulonglong)local_48 + (ulonglong)local_30 * 2])
                      (&local_56,&local_4c,&local_40);
    if (iVar3 != 2) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Visit(FCallable{}, IntV, StrV) == EVisitType::IntStr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Misc\\TVariantTest.cpp"
                         ,0x1d8,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  local_55 = 0;
  if ((code *)(&
              PTR_VisitApplyEncoded<0,0,1,_FTVariantVisitTest::TestBody_::__l2::FCallable,TVariant<int,float,FString>_const_&,TVariant<int,float>_&>_150783000
              )[(ulonglong)local_48 * 3 + (ulonglong)local_18] !=
      UE::Core::Private::
      VisitApplyEncoded<1,0,1,_FTVariantVisitTest::TestBody_::__l2::FCallable,TVariant<int,float,FString>_const_&,TVariant<int,float>_&>
     ) {
    iVar3 = (*(code *)(&
                      PTR_VisitApplyEncoded<0,0,1,_FTVariantVisitTest::TestBody_::__l2::FCallable,TVariant<int,float,FString>_const_&,TVariant<int,float>_&>_150783000
                      )[(ulonglong)local_48 * 3 + (ulonglong)local_18])
                      (&local_55,local_28,&local_4c);
    if (iVar3 != 3) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Visit(FCallable{}, FloatV, IntV) == EVisitType::FloatInt",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Misc\\TVariantTest.cpp"
                         ,0x1d9,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  local_54 = 0;
  if ((code *)(&
              PTR_VisitApplyEncoded<0,0,1,_FTVariantVisitTest::TestBody_::__l2::FCallable,TVariant<int,float,FString>_const_&,TVariant<int,float,FString>_const_&>_150783030
              )[(ulonglong)local_18 * 4] !=
      UE::Core::Private::
      VisitApplyEncoded<4,0,1,_FTVariantVisitTest::TestBody_::__l2::FCallable,TVariant<int,float,FString>_const_&,TVariant<int,float,FString>_const_&>
     ) {
    iVar3 = (*(code *)(&
                      PTR_VisitApplyEncoded<0,0,1,_FTVariantVisitTest::TestBody_::__l2::FCallable,TVariant<int,float,FString>_const_&,TVariant<int,float,FString>_const_&>_150783030
                      )[(ulonglong)local_18 * 4])(&local_54,local_28,local_28);
    if (iVar3 != 4) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Visit(FCallable{}, FloatV, FloatV) == EVisitType::FloatFloat",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Misc\\TVariantTest.cpp"
                         ,0x1da,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  local_53 = 0;
  if ((code *)(&
              PTR_VisitApplyEncoded<0,0,1,_FTVariantVisitTest::TestBody_::__l2::FCallable,TVariant<int,float,FString>_const_&,TVariant<FString>_const_&>_150783078
              )[(ulonglong)local_30 * 3 + (ulonglong)local_18] !=
      UE::Core::Private::
      VisitApplyEncoded<1,0,1,_FTVariantVisitTest::TestBody_::__l2::FCallable,TVariant<int,float,FString>_const_&,TVariant<FString>_const_&>
     ) {
    iVar3 = (*(code *)(&
                      PTR_VisitApplyEncoded<0,0,1,_FTVariantVisitTest::TestBody_::__l2::FCallable,TVariant<int,float,FString>_const_&,TVariant<FString>_const_&>_150783078
                      )[(ulonglong)local_30 * 3 + (ulonglong)local_18])
                      (&local_53,local_28,&local_40);
    if (iVar3 != 5) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Visit(FCallable{}, FloatV, StrV) == EVisitType::FloatStr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Misc\\TVariantTest.cpp"
                         ,0x1db,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  local_52 = 0;
  if ((code *)(&
              PTR_VisitApplyEncoded<0,0,1,_FTVariantVisitTest::TestBody_::__l2::FCallable,TVariant<FString>_const_&,TVariant<int,float>_&>_150783090
              )[(ulonglong)local_30 + (ulonglong)local_48] !=
      UE::Core::Private::
      VisitApplyEncoded<0,0,1,_FTVariantVisitTest::TestBody_::__l2::FCallable,TVariant<FString>_const_&,TVariant<int,float>_&>
     ) {
    iVar3 = (*(code *)(&
                      PTR_VisitApplyEncoded<0,0,1,_FTVariantVisitTest::TestBody_::__l2::FCallable,TVariant<FString>_const_&,TVariant<int,float>_&>_150783090
                      )[(ulonglong)local_30 + (ulonglong)local_48])(&local_52,&local_40,&local_4c);
    if (iVar3 != 6) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Visit(FCallable{}, StrV, IntV) == EVisitType::StrInt",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Misc\\TVariantTest.cpp"
                         ,0x1dc,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  local_51 = 0;
  if ((code *)(&
              PTR_VisitApplyEncoded<0,0,1,_FTVariantVisitTest::TestBody_::__l2::FCallable,TVariant<FString>_const_&,TVariant<int,float,FString>_const_&>_1507830a0
              )[(ulonglong)local_30 + (ulonglong)local_18] !=
      UE::Core::Private::
      VisitApplyEncoded<1,0,1,_FTVariantVisitTest::TestBody_::__l2::FCallable,TVariant<FString>_const_&,TVariant<int,float,FString>_const_&>
     ) {
    iVar3 = (*(code *)(&
                      PTR_VisitApplyEncoded<0,0,1,_FTVariantVisitTest::TestBody_::__l2::FCallable,TVariant<FString>_const_&,TVariant<int,float,FString>_const_&>_1507830a0
                      )[(ulonglong)local_30 + (ulonglong)local_18])(&local_51,&local_40,local_28);
    if (iVar3 != 7) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Visit(FCallable{}, StrV, FloatV) == EVisitType::StrFloat",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Misc\\TVariantTest.cpp"
                         ,0x1dd,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  local_50[0] = 0;
  if ((code *)(&
              PTR_VisitApplyEncoded<0,0,1,_FTVariantVisitTest::TestBody_::__l2::FCallable,TVariant<FString>_const_&,TVariant<FString>_const_&>_1507830b8
              )[(ulonglong)local_30 * 2] !=
      UE::Core::Private::
      VisitApplyEncoded<0,0,1,_FTVariantVisitTest::TestBody_::__l2::FCallable,TVariant<FString>_const_&,TVariant<FString>_const_&>
     ) {
    iVar3 = (*(code *)(&
                      PTR_VisitApplyEncoded<0,0,1,_FTVariantVisitTest::TestBody_::__l2::FCallable,TVariant<FString>_const_&,TVariant<FString>_const_&>_1507830b8
                      )[(ulonglong)local_30 * 2])(local_50,&local_40,&local_40);
    if (iVar3 != 8) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Visit(FCallable{}, StrV, StrV) == EVisitType::StrStr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Misc\\TVariantTest.cpp"
                         ,0x1de,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  uVar4 = (ulonglong)local_30;
  if (uVar4 != 0) {
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
  if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FString>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar4] ==
      UE::Core::Private::TDestructorCaller<FString>::Destruct) {
    if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.Data.AllocatorInstance.Data);
    }
  }
  else {
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FString>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar4])(&local_40);
  }
  uVar4 = (ulonglong)local_18;
  if (2 < uVar4) {
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
  if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<int,float,FString>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar4] != UE::Core::Private::TDestructorCaller<float>::Destruct
     ) {
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<int,float,FString>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar4])(local_28);
  }
  return;
}

