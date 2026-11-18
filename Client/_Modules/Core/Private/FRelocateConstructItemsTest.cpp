// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 10

// GetTestFlags @ 141d59530

EAutomationTestFlags __thiscall
FRelocateConstructItemsTest::GetTestFlags(FRelocateConstructItemsTest *this)

{
  return this->TestFlags;
}

// IsStressTest @ 141d59540

bool __thiscall FRelocateConstructItemsTest::IsStressTest(FRelocateConstructItemsTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141d59550

uint __thiscall FRelocateConstructItemsTest::GetRequiredDeviceNum(FRelocateConstructItemsTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 141d59560

FString * __thiscall
FRelocateConstructItemsTest::GetTestSourceFileName
          (FRelocateConstructItemsTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Templates\\MemoryOpsTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141d59590

int __thiscall FRelocateConstructItemsTest::GetTestSourceFileLine(FRelocateConstructItemsTest *this)

{
  return 0x58;
}

// GetTests @ 141d595a0

/* WARNING: Removing unreachable block (ram,0x000141d5971e) */

void __thiscall
FRelocateConstructItemsTest::GetTests
          (FRelocateConstructItemsTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
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

// RunTest @ 141d59740

bool __thiscall
FRelocateConstructItemsTest::RunTest(FRelocateConstructItemsTest *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 141d59770

FString * __thiscall
FRelocateConstructItemsTest::GetBeautifiedTestName
          (FRelocateConstructItemsTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FRelocateConstructItemsTest @ 141d699b0

FRelocateConstructItemsTest * __thiscall
FRelocateConstructItemsTest::FRelocateConstructItemsTest
          (FRelocateConstructItemsTest *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7FRelocateConstructItemsTest__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[Core][Smoke]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"UE::Core::RelocateConstructItems");
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
  ::FString::FString(&local_18,"[Core][Smoke]");
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

// TestBody @ 141d7a9f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FRelocateConstructItemsTest::TestBody(FRelocateConstructItemsTest *this,FString *param_1)

{
  FAutomationTestBase *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FAutomationTestFramework *pFVar5;
  ForAnyElementType FVar6;
  wchar_t *pwVar7;
  FScriptContainerElement *pFVar8;
  FStringSource *pFVar9;
  undefined1 auStackY_f8 [32];
  initializer_list<_protected:_void___cdecl_FRelocateConstructItemsTest::TestBody(FString_const_&)_::_23_::FStringSource_const_*>
  local_c8;
  FStringSource *local_b8;
  FStringSource *local_b0;
  FStringSource **local_a8;
  FString *local_a0;
  undefined1 local_98 [24];
  undefined1 local_80 [8];
  FString local_78;
  FString local_68;
  FString local_58;
  undefined1 local_48 [16];
  FStringSource *local_38;
  int local_30;
  FStringSource *local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  pFVar5 = FAutomationTestFramework::Get();
  pFVar1 = pFVar5->CurrentTest;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
  ::FString::FString((FString *)&local_c8,L"Relocate overlapping memory earlier in memory");
  (*pcVar2)(pFVar1,&local_c8,0,0);
  if (local_c8._First != (FStringSource **)0x0) {
    FMemory::Free(local_c8._First);
  }
  ::FString::FString(&local_78,L"String A1");
  ::FString::FString(&local_68,L"String B1");
  ::FString::FString(&local_58,L"String C1");
  memmove(local_98,&local_78,0x30);
  pFVar8 = (FScriptContainerElement *)L"";
  if (local_98._8_4_ != 0) {
    pFVar8 = (FScriptContainerElement *)local_98._0_8_;
  }
  iVar4 = FGenericPlatformStricmp::Stricmp((wchar_t *)pFVar8,L"String A1");
  if (iVar4 != 0) {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar1 = pFVar5->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString((FString *)&local_c8,L"Condition failed");
    (*pcVar2)(pFVar1,&local_c8,0);
    if (local_c8._First != (FStringSource **)0x0) {
      FMemory::Free(local_c8._First);
    }
  }
  pwVar7 = L"";
  if (local_80._0_4_ != 0) {
    pwVar7 = (wchar_t *)CONCAT44(local_98._20_4_,local_98._16_4_);
  }
  iVar4 = FGenericPlatformStricmp::Stricmp(pwVar7,L"String B1");
  if (iVar4 != 0) {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar1 = pFVar5->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString((FString *)&local_c8,L"Condition failed");
    (*pcVar2)(pFVar1,&local_c8,0);
    if (local_c8._First != (FStringSource **)0x0) {
      FMemory::Free(local_c8._First);
    }
  }
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_78.Data.ArrayNum != 0) {
    FVar6.Data = local_78.Data.AllocatorInstance.Data;
  }
  iVar4 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar6.Data,L"String C1");
  if (iVar4 != 0) {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar1 = pFVar5->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString((FString *)&local_c8,L"Condition failed");
    (*pcVar2)(pFVar1,&local_c8,0);
    if (local_c8._First != (FStringSource **)0x0) {
      FMemory::Free(local_c8._First);
    }
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  if ((void *)CONCAT44(local_98._20_4_,local_98._16_4_) != (void *)0x0) {
    FMemory::Free((void *)CONCAT44(local_98._20_4_,local_98._16_4_));
  }
  if ((FScriptContainerElement *)local_98._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_98._0_8_);
  }
  pFVar5 = FAutomationTestFramework::Get();
  pFVar1 = pFVar5->CurrentTest;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
  ::FString::FString((FString *)&local_c8,L"Relocate overlapping memory later in memory");
  (*pcVar2)(pFVar1,&local_c8,0,0);
  if (local_c8._First != (FStringSource **)0x0) {
    FMemory::Free(local_c8._First);
  }
  ::FString::FString((FString *)local_98,L"String A2");
  ::FString::FString((FString *)(local_98 + 0x10),L"String B2");
  ::FString::FString(&local_78,L"String C2");
  memmove(&local_78,local_98,0x30);
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_78.Data.ArrayNum != 0) {
    FVar6.Data = local_78.Data.AllocatorInstance.Data;
  }
  iVar4 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar6.Data,L"String A2");
  if (iVar4 != 0) {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar1 = pFVar5->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString((FString *)&local_c8,L"Condition failed");
    (*pcVar2)(pFVar1,&local_c8);
    if (local_c8._First != (FStringSource **)0x0) {
      FMemory::Free(local_c8._First);
    }
  }
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_68.Data.ArrayNum != 0) {
    FVar6.Data = local_68.Data.AllocatorInstance.Data;
  }
  iVar4 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar6.Data,L"String B2");
  if (iVar4 != 0) {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar1 = pFVar5->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString((FString *)&local_c8,L"Condition failed");
    (*pcVar2)(pFVar1,&local_c8);
    if (local_c8._First != (FStringSource **)0x0) {
      FMemory::Free(local_c8._First);
    }
  }
  pwVar7 = L"";
  if (local_58.Data.ArrayNum != 0) {
    pwVar7 = (wchar_t *)
             CONCAT44(local_58.Data.AllocatorInstance.Data._4_4_,
                      local_58.Data.AllocatorInstance.Data._0_4_);
  }
  iVar4 = FGenericPlatformStricmp::Stricmp(pwVar7,L"String C2");
  if (iVar4 != 0) {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar1 = pFVar5->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString((FString *)&local_c8,L"Condition failed");
    (*pcVar2)(pFVar1,&local_c8);
    if (local_c8._First != (FStringSource **)0x0) {
      FMemory::Free(local_c8._First);
    }
  }
  if ((void *)CONCAT44(local_58.Data.AllocatorInstance.Data._4_4_,
                       local_58.Data.AllocatorInstance.Data._0_4_) != (void *)0x0) {
    FMemory::Free((void *)CONCAT44(local_58.Data.AllocatorInstance.Data._4_4_,
                                   local_58.Data.AllocatorInstance.Data._0_4_));
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  pFVar5 = FAutomationTestFramework::Get();
  pFVar1 = pFVar5->CurrentTest;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
  ::FString::FString((FString *)&local_c8,L"Relocate between different types (cannot overlap)");
  (*pcVar2)(pFVar1,&local_c8,0,0);
  if (local_c8._First != (FStringSource **)0x0) {
    FMemory::Free(local_c8._First);
  }
  if (TInstanceTracker<`FRelocateConstructItemsTest::TestBody'::`23'::FStringSource>::Constructed.
      Elements._8_4_ !=
      TInstanceTracker<`FRelocateConstructItemsTest::TestBody'::`23'::FStringSource>::Constructed.
      Elements._52_4_) {
    TSet<`FRelocateConstructItemsTest::TestBody'::__l23::FStringSource_*,DefaultKeyFuncs<`FRelocateConstructItemsTest::TestBody'::__l23::FStringSource_*,0>,FDefaultSetAllocator>
    ::UnhashElements(&TInstanceTracker<`FRelocateConstructItemsTest::TestBody'::`23'::FStringSource>
                      ::Constructed);
    TInstanceTracker<`FRelocateConstructItemsTest::TestBody'::`23'::FStringSource>::Constructed.
    Elements._8_4_ = 0;
    if ((int)TInstanceTracker<`FRelocateConstructItemsTest::TestBody'::`23'::FStringSource>::
             Constructed.Elements._12_4_ < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,(ForAnyElementType *)
                          &TInstanceTracker<`FRelocateConstructItemsTest::TestBody'::`23'::FStringSource>
                           ::Constructed,0,
                 (int *)&TInstanceTracker<`FRelocateConstructItemsTest::TestBody'::`23'::FStringSource>
                         ::Constructed.Elements.field_0xc);
    }
    TInstanceTracker<`FRelocateConstructItemsTest::TestBody'::`23'::FStringSource>::Constructed.
    Elements._48_4_ = 0xffffffff;
    TInstanceTracker<`FRelocateConstructItemsTest::TestBody'::`23'::FStringSource>::Constructed.
    Elements._52_4_ = 0;
    TInstanceTracker<`FRelocateConstructItemsTest::TestBody'::`23'::FStringSource>::Constructed.
    Elements._40_4_ = 0;
  }
  if (TInstanceTracker<`FRelocateConstructItemsTest::TestBody'::`23'::FStringSource>::Destructed.
      Elements._8_4_ !=
      TInstanceTracker<`FRelocateConstructItemsTest::TestBody'::`23'::FStringSource>::Destructed.
      Elements._52_4_) {
    TSet<`FRelocateConstructItemsTest::TestBody'::__l23::FStringSource_*,DefaultKeyFuncs<`FRelocateConstructItemsTest::TestBody'::__l23::FStringSource_*,0>,FDefaultSetAllocator>
    ::UnhashElements(&TInstanceTracker<`FRelocateConstructItemsTest::TestBody'::`23'::FStringSource>
                      ::Destructed);
    TInstanceTracker<`FRelocateConstructItemsTest::TestBody'::`23'::FStringSource>::Destructed.
    Elements._8_4_ = 0;
    if ((int)TInstanceTracker<`FRelocateConstructItemsTest::TestBody'::`23'::FStringSource>::
             Destructed.Elements._12_4_ < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,(ForAnyElementType *)
                          &TInstanceTracker<`FRelocateConstructItemsTest::TestBody'::`23'::FStringSource>
                           ::Destructed,0,
                 (int *)&TInstanceTracker<`FRelocateConstructItemsTest::TestBody'::`23'::FStringSource>
                         ::Destructed.Elements.field_0xc);
    }
    TInstanceTracker<`FRelocateConstructItemsTest::TestBody'::`23'::FStringSource>::Destructed.
    Elements._48_4_ = 0xffffffff;
    TInstanceTracker<`FRelocateConstructItemsTest::TestBody'::`23'::FStringSource>::Destructed.
    Elements._52_4_ = 0;
    TInstanceTracker<`FRelocateConstructItemsTest::TestBody'::`23'::FStringSource>::Destructed.
    Elements._40_4_ = 0;
  }
  if (TInstanceTracker<`FRelocateConstructItemsTest::TestBody'::`23'::FStringDest>::Constructed.
      Elements._8_4_ !=
      TInstanceTracker<`FRelocateConstructItemsTest::TestBody'::`23'::FStringDest>::Constructed.
      Elements._52_4_) {
    TSet<`FRelocateConstructItemsTest::TestBody'::__l23::FStringDest_*,DefaultKeyFuncs<`FRelocateConstructItemsTest::TestBody'::__l23::FStringDest_*,0>,FDefaultSetAllocator>
    ::UnhashElements(&TInstanceTracker<`FRelocateConstructItemsTest::TestBody'::`23'::FStringDest>::
                      Constructed);
    TInstanceTracker<`FRelocateConstructItemsTest::TestBody'::`23'::FStringDest>::Constructed.
    Elements._8_4_ = 0;
    if ((int)TInstanceTracker<`FRelocateConstructItemsTest::TestBody'::`23'::FStringDest>::
             Constructed.Elements._12_4_ < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,(ForAnyElementType *)
                          &TInstanceTracker<`FRelocateConstructItemsTest::TestBody'::`23'::FStringDest>
                           ::Constructed,0,
                 (int *)&TInstanceTracker<`FRelocateConstructItemsTest::TestBody'::`23'::FStringDest>
                         ::Constructed.Elements.field_0xc);
    }
    TInstanceTracker<`FRelocateConstructItemsTest::TestBody'::`23'::FStringDest>::Constructed.
    Elements._48_4_ = 0xffffffff;
    TInstanceTracker<`FRelocateConstructItemsTest::TestBody'::`23'::FStringDest>::Constructed.
    Elements._52_4_ = 0;
    TInstanceTracker<`FRelocateConstructItemsTest::TestBody'::`23'::FStringDest>::Constructed.
    Elements._40_4_ = 0;
  }
  if (TInstanceTracker<`FRelocateConstructItemsTest::TestBody'::`23'::FStringDest>::Destructed.
      Elements._8_4_ !=
      TInstanceTracker<`FRelocateConstructItemsTest::TestBody'::`23'::FStringDest>::Destructed.
      Elements._52_4_) {
    TSet<`FRelocateConstructItemsTest::TestBody'::__l23::FStringDest_*,DefaultKeyFuncs<`FRelocateConstructItemsTest::TestBody'::__l23::FStringDest_*,0>,FDefaultSetAllocator>
    ::UnhashElements(&TInstanceTracker<`FRelocateConstructItemsTest::TestBody'::`23'::FStringDest>::
                      Destructed);
    TInstanceTracker<`FRelocateConstructItemsTest::TestBody'::`23'::FStringDest>::Destructed.
    Elements._8_4_ = 0;
    if ((int)TInstanceTracker<`FRelocateConstructItemsTest::TestBody'::`23'::FStringDest>::
             Destructed.Elements._12_4_ < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,(ForAnyElementType *)
                          &TInstanceTracker<`FRelocateConstructItemsTest::TestBody'::`23'::FStringDest>
                           ::Destructed,0,
                 (int *)&TInstanceTracker<`FRelocateConstructItemsTest::TestBody'::`23'::FStringDest>
                         ::Destructed.Elements.field_0xc);
    }
    TInstanceTracker<`FRelocateConstructItemsTest::TestBody'::`23'::FStringDest>::Destructed.
    Elements._48_4_ = 0xffffffff;
    TInstanceTracker<`FRelocateConstructItemsTest::TestBody'::`23'::FStringDest>::Destructed.
    Elements._52_4_ = 0;
    TInstanceTracker<`FRelocateConstructItemsTest::TestBody'::`23'::FStringDest>::Destructed.
    Elements._40_4_ = 0;
  }
  local_c8._First = (FStringSource **)local_98;
  TSet<`FRelocateConstructItemsTest::TestBody'::__l23::FStringSource_*,DefaultKeyFuncs<`FRelocateConstructItemsTest::TestBody'::__l23::FStringSource_*,0>,FDefaultSetAllocator>
  ::Emplace<_FRelocateConstructItemsTest::TestBody_::__l23::FStringSource_*>
            (&TInstanceTracker<`FRelocateConstructItemsTest::TestBody'::`23'::FStringSource>::
              Constructed,&local_b8,(bool *)&local_c8);
  ::FString::FString((FString *)local_98,L"String A3");
  local_c8._First = (FStringSource **)local_80;
  local_98._16_4_ = 0;
  TSet<`FRelocateConstructItemsTest::TestBody'::__l23::FStringSource_*,DefaultKeyFuncs<`FRelocateConstructItemsTest::TestBody'::__l23::FStringSource_*,0>,FDefaultSetAllocator>
  ::Emplace<_FRelocateConstructItemsTest::TestBody_::__l23::FStringSource_*>
            (&TInstanceTracker<`FRelocateConstructItemsTest::TestBody'::`23'::FStringSource>::
              Constructed,&local_b8,(bool *)&local_c8);
  ::FString::FString((FString *)local_80,L"String B3");
  local_c8._First = (FStringSource **)&local_68;
  local_78.Data.ArrayNum = 0;
  TSet<`FRelocateConstructItemsTest::TestBody'::__l23::FStringSource_*,DefaultKeyFuncs<`FRelocateConstructItemsTest::TestBody'::__l23::FStringSource_*,0>,FDefaultSetAllocator>
  ::Emplace<_FRelocateConstructItemsTest::TestBody_::__l23::FStringSource_*>
            (&TInstanceTracker<`FRelocateConstructItemsTest::TestBody'::`23'::FStringSource>::
              Constructed,&local_b8,(bool *)&local_c8);
  ::FString::FString(&local_68,L"String C3");
  local_b0 = (FStringSource *)local_98;
  local_58.Data.AllocatorInstance.Data._0_4_ = 0;
  local_a8 = (FStringSource **)local_80;
  local_a0 = &local_68;
  local_c8._First = &local_b0;
  local_c8._Last = (FStringSource **)local_98;
  bVar3 = ::`anonymous_namespace'::
          TInstanceTracker<`FRelocateConstructItemsTest::TestBody'::__l23::FStringSource>::
          CheckCurrentlyInstantiated(&local_c8);
  if (!bVar3) {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar1 = pFVar5->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString((FString *)&local_c8,L"Condition failed");
    (*pcVar2)(pFVar1,&local_c8,0);
    if (local_c8._First != (FStringSource **)0x0) {
      FMemory::Free(local_c8._First);
    }
  }
  local_c8._First = (FStringSource **)0x0;
  local_c8._Last = (FStringSource **)0x0;
  bVar3 = ::`anonymous_namespace'::
          TInstanceTracker<`FRelocateConstructItemsTest::TestBody'::__l23::FStringDest>::
          CheckCurrentlyInstantiated
                    ((initializer_list<_protected:_void___cdecl_FRelocateConstructItemsTest::TestBody(FString_const_&)_::_23_::FStringDest_const_*>
                      *)&local_c8);
  if (!bVar3) {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar1 = pFVar5->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString((FString *)&local_c8,L"Condition failed");
    (*pcVar2)(pFVar1,&local_c8,0);
    if (local_c8._First != (FStringSource **)0x0) {
      FMemory::Free(local_c8._First);
    }
  }
  RelocateConstructItems<_FRelocateConstructItemsTest::TestBody_::__l23::FStringDest,_FRelocateConstructItemsTest::TestBody_::__l23::FStringSource,int>
            (local_48,(FStringSource *)local_98,3);
  local_c8._First = (FStringSource **)0x0;
  local_c8._Last = (FStringSource **)0x0;
  bVar3 = ::`anonymous_namespace'::
          TInstanceTracker<`FRelocateConstructItemsTest::TestBody'::__l23::FStringSource>::
          CheckCurrentlyInstantiated(&local_c8);
  if (!bVar3) {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar1 = pFVar5->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString((FString *)&local_c8,L"Condition failed");
    (*pcVar2)(pFVar1,&local_c8,0);
    if (local_c8._First != (FStringSource **)0x0) {
      FMemory::Free(local_c8._First);
    }
  }
  local_b0 = (FStringSource *)local_48;
  local_a8 = &local_38;
  local_a0 = (FString *)&local_28;
  local_c8._First = &local_b0;
  local_c8._Last = (FStringSource **)local_98;
  bVar3 = ::`anonymous_namespace'::
          TInstanceTracker<`FRelocateConstructItemsTest::TestBody'::__l23::FStringDest>::
          CheckCurrentlyInstantiated
                    ((initializer_list<_protected:_void___cdecl_FRelocateConstructItemsTest::TestBody(FString_const_&)_::_23_::FStringDest_const_*>
                      *)&local_c8);
  if (!bVar3) {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar1 = pFVar5->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString((FString *)&local_c8,L"Condition failed");
    (*pcVar2)(pFVar1,&local_c8,0);
    if (local_c8._First != (FStringSource **)0x0) {
      FMemory::Free(local_c8._First);
    }
  }
  pFVar8 = (FScriptContainerElement *)L"";
  if (local_48._8_4_ != 0) {
    pFVar8 = (FScriptContainerElement *)local_48._0_8_;
  }
  iVar4 = FGenericPlatformStricmp::Stricmp((wchar_t *)pFVar8,L"String A3");
  if (iVar4 != 0) {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar1 = pFVar5->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString((FString *)&local_c8,L"Condition failed");
    (*pcVar2)(pFVar1,&local_c8,0);
    if (local_c8._First != (FStringSource **)0x0) {
      FMemory::Free(local_c8._First);
    }
  }
  pFVar9 = (FStringSource *)L"";
  if (local_30 != 0) {
    pFVar9 = local_38;
  }
  iVar4 = FGenericPlatformStricmp::Stricmp((wchar_t *)pFVar9,L"String B3");
  if (iVar4 != 0) {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar1 = pFVar5->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString((FString *)&local_c8,L"Condition failed");
    (*pcVar2)(pFVar1,&local_c8,0);
    if (local_c8._First != (FStringSource **)0x0) {
      FMemory::Free(local_c8._First);
    }
  }
  pFVar9 = (FStringSource *)L"";
  if (local_20 != 0) {
    pFVar9 = local_28;
  }
  iVar4 = FGenericPlatformStricmp::Stricmp((wchar_t *)pFVar9,L"String C3");
  if (iVar4 != 0) {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar1 = pFVar5->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString((FString *)&local_c8,L"Condition failed");
    (*pcVar2)(pFVar1,&local_c8,0);
    if (local_c8._First != (FStringSource **)0x0) {
      FMemory::Free(local_c8._First);
    }
  }
  if (local_28 != (FStringSource *)0x0) {
    FMemory::Free(local_28);
  }
  local_c8._First = &local_28;
  TSet<`FRelocateConstructItemsTest::TestBody'::__l23::FStringDest_*,DefaultKeyFuncs<`FRelocateConstructItemsTest::TestBody'::__l23::FStringDest_*,0>,FDefaultSetAllocator>
  ::Emplace<_FRelocateConstructItemsTest::TestBody_::__l23::FStringDest_*>
            (&TInstanceTracker<`FRelocateConstructItemsTest::TestBody'::`23'::FStringDest>::
              Destructed,(FStringDest **)&local_b8,(bool *)&local_c8);
  if (local_38 != (FStringSource *)0x0) {
    FMemory::Free(local_38);
  }
  local_c8._First = &local_38;
  TSet<`FRelocateConstructItemsTest::TestBody'::__l23::FStringDest_*,DefaultKeyFuncs<`FRelocateConstructItemsTest::TestBody'::__l23::FStringDest_*,0>,FDefaultSetAllocator>
  ::Emplace<_FRelocateConstructItemsTest::TestBody_::__l23::FStringDest_*>
            (&TInstanceTracker<`FRelocateConstructItemsTest::TestBody'::`23'::FStringDest>::
              Destructed,(FStringDest **)&local_b8,(bool *)&local_c8);
  if ((FScriptContainerElement *)local_48._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_48._0_8_);
  }
  local_c8._First = (FStringSource **)local_48;
  TSet<`FRelocateConstructItemsTest::TestBody'::__l23::FStringDest_*,DefaultKeyFuncs<`FRelocateConstructItemsTest::TestBody'::__l23::FStringDest_*,0>,FDefaultSetAllocator>
  ::Emplace<_FRelocateConstructItemsTest::TestBody_::__l23::FStringDest_*>
            (&TInstanceTracker<`FRelocateConstructItemsTest::TestBody'::`23'::FStringDest>::
              Destructed,(FStringDest **)&local_b8,(bool *)&local_c8);
  local_c8._First = (FStringSource **)0x0;
  local_c8._Last = (FStringSource **)0x0;
  bVar3 = ::`anonymous_namespace'::
          TInstanceTracker<`FRelocateConstructItemsTest::TestBody'::__l23::FStringSource>::
          CheckCurrentlyInstantiated(&local_c8);
  if (!bVar3) {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar1 = pFVar5->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString((FString *)&local_c8,L"Condition failed");
    (*pcVar2)(pFVar1,&local_c8,0);
    if (local_c8._First != (FStringSource **)0x0) {
      FMemory::Free(local_c8._First);
    }
  }
  local_c8._First = (FStringSource **)0x0;
  local_c8._Last = (FStringSource **)0x0;
  bVar3 = ::`anonymous_namespace'::
          TInstanceTracker<`FRelocateConstructItemsTest::TestBody'::__l23::FStringDest>::
          CheckCurrentlyInstantiated
                    ((initializer_list<_protected:_void___cdecl_FRelocateConstructItemsTest::TestBody(FString_const_&)_::_23_::FStringDest_const_*>
                      *)&local_c8);
  if (!bVar3) {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar1 = pFVar5->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString((FString *)&local_c8,L"Condition failed");
    (*pcVar2)(pFVar1,&local_c8,0);
    if (local_c8._First != (FStringSource **)0x0) {
      FMemory::Free(local_c8._First);
    }
  }
  return;
}

