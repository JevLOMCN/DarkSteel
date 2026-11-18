// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 10

// GetTestFlags @ 141ad5a90

EAutomationTestFlags __thiscall FScriptCompactSetTest::GetTestFlags(FScriptCompactSetTest *this)

{
  return this->TestFlags;
}

// IsStressTest @ 141ad5aa0

bool __thiscall FScriptCompactSetTest::IsStressTest(FScriptCompactSetTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141ad5ab0

uint __thiscall FScriptCompactSetTest::GetRequiredDeviceNum(FScriptCompactSetTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 141ad5ac0

FString * __thiscall
FScriptCompactSetTest::GetTestSourceFileName
          (FScriptCompactSetTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Containers\\SetTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141ad5af0

int __thiscall FScriptCompactSetTest::GetTestSourceFileLine(FScriptCompactSetTest *this)

{
  return 0x20e;
}

// GetTests @ 141ad5b00

/* WARNING: Removing unreachable block (ram,0x000141ad5c7e) */

void __thiscall
FScriptCompactSetTest::GetTests
          (FScriptCompactSetTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
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

// RunTest @ 141ad5ca0

bool __thiscall FScriptCompactSetTest::RunTest(FScriptCompactSetTest *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 141ad5cd0

FString * __thiscall
FScriptCompactSetTest::GetBeautifiedTestName
          (FScriptCompactSetTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FScriptCompactSetTest @ 141b266a0

FScriptCompactSetTest * __thiscall
FScriptCompactSetTest::FScriptCompactSetTest(FScriptCompactSetTest *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7FScriptCompactSetTest__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[Core][Containers][CompactSet]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"System::Core::Containers::ScriptCompactSet");
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
  ::FString::FString(&local_18,"[Core][Containers][CompactSet]");
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

// TestBody @ 141b9a640

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FScriptCompactSetTest::TestBody(FScriptCompactSetTest *this,FString *param_1)

{
  ulonglong *puVar1;
  FAutomationTestBase *pFVar2;
  code *pcVar3;
  void *pvVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  FAutomationTestFramework *pFVar9;
  FCompactSetLayout FVar10;
  longlong lVar11;
  ulonglong *puVar12;
  uint uVar13;
  FCompactSetLayout FVar14;
  uint uVar15;
  uint *puVar16;
  undefined8 *puVar17;
  undefined4 *puVar18;
  bool bVar19;
  undefined1 auStackY_588 [32];
  undefined1 local_558;
  undefined1 local_557 [7];
  TCompactSetBase<TSizedDefaultAllocator<32>_> local_550;
  FCompactSetLayout local_540;
  undefined1 local_538 [16];
  undefined1 local_528 [8];
  FString local_520;
  FConstCompactHashTableView local_510;
  FString local_4f8;
  undefined1 local_4e8 [20];
  undefined4 uStack_4d4;
  TCompactSetBase<TSizedDefaultAllocator<32>_> *local_4d0;
  undefined1 local_4c8 [8];
  undefined1 *local_4c0;
  undefined1 local_4b8 [16];
  FCompactSetLayout local_4a8;
  FString *local_4a0;
  code **local_498;
  TCompactSetBase<TSizedDefaultAllocator<32>_> *local_490;
  code *local_488;
  undefined1 *local_480;
  FString local_478;
  FString local_468;
  FString local_458;
  FString local_448;
  ulonglong local_438 [128];
  ulonglong local_38 [2];
  
  local_38[0] = __security_cookie.value ^ (ulonglong)auStackY_588;
  pFVar9 = FAutomationTestFramework::Get();
  pFVar2 = pFVar9->CurrentTest;
  pcVar3 = *(code **)(pFVar2->_padding_ + 0x50);
  ::FString::FString((FString *)local_4c8,L"Basic Tests");
  (*pcVar3)(pFVar2,local_4c8,0,0);
  if (local_4c8 != (undefined1  [8])0x0) {
    FMemory::Free((void *)local_4c8);
  }
  uVar13 = 0;
  local_520.Data.AllocatorInstance.Data._0_4_ = 0x10;
  local_550.Elements = (ForElementType<unsigned_char>)0x0;
  local_550.NumElements = 0;
  local_550.MaxElements = 0;
  local_520.Data.AllocatorInstance.Data._4_4_ = 8;
  ::FString::FString(&local_478,L"Zero");
  ::FString::FString(&local_468,L"One");
  ::FString::FString(&local_458,L"Two");
  ::FString::FString(&local_448,L"Three");
  FVar14 = (FCompactSetLayout)&local_478;
  do {
    local_540 = FVar14;
    local_4f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)FVar14;
    uVar6 = UE::Core::Private::Function::
            TFunctionRefCaller<`FScriptCompactSetTest::TestBody'::__l3::<lambda_1>,unsigned_int,void_const_*>
            ::Call(&local_558,(void **)&local_540);
    uVar7 = 0;
    if (local_550.NumElements == 0) {
LAB_141b9a82f:
      if (uVar7 == local_550.MaxElements) {
        iVar8 = TCompactSetBase<TSizedDefaultAllocator<32>_>::AllocatorCalculateSlackGrow
                          (&local_550,uVar7 + 1,(FCompactSetLayout *)&local_520);
        bVar19 = TCompactSetBase<TSizedDefaultAllocator<32>_>::ResizeAllocationPreserveData
                           (&local_550,iVar8,(FCompactSetLayout *)&local_520,true);
        if (bVar19) {
          local_538._8_8_ = &local_558;
          local_538._0_8_ =
               UE::Core::Private::Function::
               TFunctionRefCaller<`FScriptCompactSetTest::TestBody'::__l3::<lambda_1>,unsigned_int,void_const_*>
               ::Call;
          TScriptCompactSet<FDefaultCompactSetAllocator>::Rehash
                    ((TScriptCompactSet<FDefaultCompactSetAllocator> *)&local_550,
                     (FCompactSetLayout *)&local_520,
                     (TFunctionRef<unsigned_int___cdecl(void_const_*)> *)local_538);
        }
        uVar7 = local_550.NumElements;
      }
      puVar16 = (uint *)(((ulonglong)
                          (local_550.MaxElements * (int)local_520.Data.AllocatorInstance.Data + 3) &
                         0xfffffffc) + (longlong)local_550.Elements);
      local_510.NextIndexData = (uchar *)(puVar16 + 1);
      local_510.HashData =
           (uchar *)((longlong)local_510.NextIndexData +
                    ((ulonglong)(uint)local_550.MaxElements <<
                    (0xffU < (uint)local_550.MaxElements) + (0xffffU < (uint)local_550.MaxElements))
                    );
      local_510.HashCount = *puVar16;
      local_510.NextIndexCount = local_550.MaxElements;
      FCompactHashTableView::Add((FCompactHashTableView *)&local_510,uVar7,uVar6);
      local_540 = (FCompactSetLayout)
                  ((longlong)(local_550.NumElements * (int)local_520.Data.AllocatorInstance.Data) +
                  (longlong)local_550.Elements);
      UE::Core::Private::Function::
      TFunctionRefCaller<`FScriptCompactSetTest::TestBody'::__l7::<lambda_4>,void,void_*>::Call
                (&local_4f8,(void **)&local_540);
      local_550.NumElements = local_550.NumElements + 1;
    }
    else {
      local_4b8._8_8_ = local_557;
      local_4b8._0_8_ =
           UE::Core::Private::Function::
           TFunctionRefCaller<`FScriptCompactSetTest::TestBody'::__l3::<lambda_2>,bool,void_const_*,void_const_*>
           ::Call;
      local_510.NextIndexCount = local_550.MaxElements;
      puVar16 = (uint *)(((ulonglong)
                          (local_550.MaxElements * (int)local_520.Data.AllocatorInstance.Data + 3) &
                         0xfffffffc) + (longlong)local_550.Elements);
      local_510.NextIndexData = (uchar *)(puVar16 + 1);
      local_510.HashData =
           (uchar *)((longlong)local_510.NextIndexData +
                    ((ulonglong)(uint)local_550.MaxElements <<
                    (0xffU < (uint)local_550.MaxElements) + (0xffffU < (uint)local_550.MaxElements))
                    );
      local_510.HashCount = *puVar16;
      local_4e8._8_8_ = &local_520;
      unique0x00008e00 = local_4b8;
      local_4d0 = &local_550;
      local_4e8._0_8_ = FVar14;
      uVar7 = FConstCompactHashTableView::
              Find<_TScriptCompactSet<FDefaultCompactSetAllocator>::FindIndexImpl_::__l2::<lambda_1>_>
                        (&local_510,uVar6,local_550.NumElements,(<lambda_1> *)local_4e8);
      if (uVar7 == 0xffffffff) {
        uVar7 = local_550.NumElements;
        goto LAB_141b9a82f;
      }
      FVar10 = (FCompactSetLayout)
               ((longlong)(int)(uVar7 * (int)local_520.Data.AllocatorInstance.Data) +
               (longlong)local_550.Elements);
      local_540 = FVar10;
      UE::Core::Private::Function::
      TFunctionRefCaller<`FScriptCompactSetTest::TestBody'::__l3::<lambda_3>,void,void_*>::Call
                (local_528,(void **)&local_540);
      local_540 = FVar10;
      UE::Core::Private::Function::
      TFunctionRefCaller<`FScriptCompactSetTest::TestBody'::__l7::<lambda_4>,void,void_*>::Call
                (&local_4f8,(void **)&local_540);
    }
    FVar14 = (FCompactSetLayout)((longlong)FVar14 + 0x10);
  } while (FVar14 != (FCompactSetLayout)local_438);
  if (local_550.NumElements != 4) {
    pFVar9 = FAutomationTestFramework::Get();
    pFVar2 = pFVar9->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString((FString *)local_538,L"Condition failed");
    (*pcVar3)(pFVar2,local_538,0);
    if ((FScriptContainerElement *)local_538._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_538._0_8_);
    }
  }
  FVar14 = (FCompactSetLayout)&local_478;
  uVar7 = uVar13;
  do {
    puVar17 = (undefined8 *)
              ((longlong)(int)(uVar7 * (int)local_520.Data.AllocatorInstance.Data) +
              (longlong)local_550.Elements);
    iVar8 = *(int *)(puVar17 + 1);
    if (iVar8 == *(int *)((longlong)FVar14 + 8)) {
      if (1 < iVar8) {
        iVar8 = FGenericPlatformStricmp::Stricmp((wchar_t *)*puVar17,*(wchar_t **)FVar14);
        bVar19 = iVar8 == 0;
        goto LAB_141b9a9b4;
      }
    }
    else {
      bVar19 = iVar8 + *(int *)((longlong)FVar14 + 8) == 1;
LAB_141b9a9b4:
      if (!bVar19) {
        pFVar9 = FAutomationTestFramework::Get();
        pFVar2 = pFVar9->CurrentTest;
        pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
        ::FString::FString((FString *)local_538,L"Condition failed");
        (*pcVar3)(pFVar2,local_538,0);
        if ((FScriptContainerElement *)local_538._0_8_ != (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)local_538._0_8_);
        }
      }
    }
    if (local_550.NumElements == 0) {
      uVar6 = 0xffffffff;
    }
    else {
      local_4b8._8_8_ = local_557;
      local_4b8._0_8_ =
           UE::Core::Private::Function::
           TFunctionRefCaller<`FScriptCompactSetTest::TestBody'::__l3::<lambda_2>,bool,void_const_*,void_const_*>
           ::Call;
      local_540 = FVar14;
      uVar6 = UE::Core::Private::Function::
              TFunctionRefCaller<`FScriptCompactSetTest::TestBody'::__l3::<lambda_1>,unsigned_int,void_const_*>
              ::Call(&local_558,(void **)&local_540);
      local_510.NextIndexCount = local_550.MaxElements;
      puVar16 = (uint *)(((ulonglong)
                          (local_550.MaxElements * (int)local_520.Data.AllocatorInstance.Data + 3) &
                         0xfffffffc) + (longlong)local_550.Elements);
      local_510.NextIndexData = (uchar *)(puVar16 + 1);
      local_510.HashData =
           (uchar *)((longlong)local_510.NextIndexData +
                    ((ulonglong)(uint)local_550.MaxElements <<
                    (0xffU < (uint)local_550.MaxElements) + (0xffffU < (uint)local_550.MaxElements))
                    );
      local_510.HashCount = *puVar16;
      local_4e8._8_8_ = &local_520;
      unique0x00008e00 = local_4b8;
      local_4d0 = &local_550;
      local_4e8._0_8_ = FVar14;
      uVar6 = FConstCompactHashTableView::
              Find<_TScriptCompactSet<FDefaultCompactSetAllocator>::FindIndexImpl_::__l2::<lambda_1>_>
                        (&local_510,uVar6,local_550.NumElements,(<lambda_1> *)local_4e8);
    }
    if (uVar6 != uVar7) {
      pFVar9 = FAutomationTestFramework::Get();
      pFVar2 = pFVar9->CurrentTest;
      pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
      ::FString::FString(&local_4f8,L"Condition failed");
      (*pcVar3)(pFVar2,&local_4f8,0);
      if ((FCompactSetLayout)local_4f8.Data.AllocatorInstance.Data != (FCompactSetLayout)0x0) {
        FMemory::Free(local_4f8.Data.AllocatorInstance.Data);
      }
    }
    uVar7 = uVar7 + 1;
    FVar14 = (FCompactSetLayout)((longlong)FVar14 + 0x10);
  } while (uVar7 < 4);
  local_4c8 = (undefined1  [8])0x0;
  local_4c0 = (undefined1 *)0x0;
  if (local_550.NumElements != 0) {
    local_538._8_8_ = local_557;
    local_538._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`FScriptCompactSetTest::TestBody'::__l3::<lambda_2>,bool,void_const_*,void_const_*>
         ::Call;
    local_540 = (FCompactSetLayout)local_4c8;
    uVar7 = UE::Core::Private::Function::
            TFunctionRefCaller<`FScriptCompactSetTest::TestBody'::__l3::<lambda_1>,unsigned_int,void_const_*>
            ::Call(&local_558,(void **)&local_540);
    local_510.NextIndexCount = local_550.MaxElements;
    puVar16 = (uint *)(((ulonglong)
                        (local_550.MaxElements * (int)local_520.Data.AllocatorInstance.Data + 3) &
                       0xfffffffc) + (longlong)local_550.Elements);
    local_510.NextIndexData = (uchar *)(puVar16 + 1);
    local_510.HashData =
         (uchar *)((longlong)local_510.NextIndexData +
                  ((ulonglong)(uint)local_550.MaxElements <<
                  (0xffU < (uint)local_550.MaxElements) + (0xffffU < (uint)local_550.MaxElements)));
    local_510.HashCount = *puVar16;
    local_4e8._0_8_ = local_4c8;
    local_4e8._8_8_ = &local_520;
    unique0x00009c00 = local_538;
    local_4d0 = &local_550;
    uVar7 = FConstCompactHashTableView::
            Find<_TScriptCompactSet<FDefaultCompactSetAllocator>::FindIndexImpl_::__l2::<lambda_1>_>
                      (&local_510,uVar7,local_550.NumElements,(<lambda_1> *)local_4e8);
    if (uVar7 != 0xffffffff) {
      pFVar9 = FAutomationTestFramework::Get();
      pFVar2 = pFVar9->CurrentTest;
      pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
      ::FString::FString((FString *)local_538,L"Condition failed");
      (*pcVar3)(pFVar2,local_538,0);
      if ((FScriptContainerElement *)local_538._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_538._0_8_);
      }
    }
  }
  ::FString::operator=((FString *)local_4c8,L"Invalid");
  uVar7 = uVar13;
  if (local_550.NumElements != 0) {
    local_538._8_8_ = local_557;
    local_538._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`FScriptCompactSetTest::TestBody'::__l3::<lambda_2>,bool,void_const_*,void_const_*>
         ::Call;
    local_540 = (FCompactSetLayout)local_4c8;
    uVar6 = UE::Core::Private::Function::
            TFunctionRefCaller<`FScriptCompactSetTest::TestBody'::__l3::<lambda_1>,unsigned_int,void_const_*>
            ::Call(&local_558,(void **)&local_540);
    local_510.NextIndexCount = local_550.MaxElements;
    puVar16 = (uint *)(((ulonglong)
                        (local_550.MaxElements * (int)local_520.Data.AllocatorInstance.Data + 3) &
                       0xfffffffc) + (longlong)local_550.Elements);
    local_510.NextIndexData = (uchar *)(puVar16 + 1);
    local_510.HashData =
         (uchar *)((longlong)local_510.NextIndexData +
                  ((ulonglong)(uint)local_550.MaxElements <<
                  (0xffU < (uint)local_550.MaxElements) + (0xffffU < (uint)local_550.MaxElements)));
    local_510.HashCount = *puVar16;
    local_4e8._0_8_ = local_4c8;
    local_4e8._8_8_ = &local_520;
    unique0x00009c00 = local_538;
    local_4d0 = &local_550;
    uVar6 = FConstCompactHashTableView::
            Find<_TScriptCompactSet<FDefaultCompactSetAllocator>::FindIndexImpl_::__l2::<lambda_1>_>
                      (&local_510,uVar6,local_550.NumElements,(<lambda_1> *)local_4e8);
    if (uVar6 != 0xffffffff) {
      pFVar9 = FAutomationTestFramework::Get();
      pFVar2 = pFVar9->CurrentTest;
      pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
      ::FString::FString((FString *)local_538,L"Condition failed");
      (*pcVar3)(pFVar2,local_538,0);
      if ((FScriptContainerElement *)local_538._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_538._0_8_);
      }
    }
  }
  do {
    pvVar4 = *(void **)((longlong)(int)(uVar7 * (int)local_520.Data.AllocatorInstance.Data) +
                       (longlong)local_550.Elements);
    if (pvVar4 != (void *)0x0) {
      FMemory::Free(pvVar4);
    }
    uVar7 = uVar7 + 1;
  } while (uVar7 < 4);
  if (local_4c8 != (undefined1  [8])0x0) {
    FMemory::Free((void *)local_4c8);
  }
  puVar12 = local_438;
  lVar11 = 4;
  do {
    puVar1 = puVar12 + -2;
    puVar12 = puVar12 + -2;
    lVar11 = lVar11 + -1;
    if ((void *)*puVar1 != (void *)0x0) {
      FMemory::Free((void *)*puVar1);
    }
  } while (lVar11 != 0);
  if (local_550.Elements != (ForElementType<unsigned_char>)0x0) {
    FMemory::Free((void *)local_550.Elements);
  }
  pFVar9 = FAutomationTestFramework::Get();
  pFVar2 = pFVar9->CurrentTest;
  pcVar3 = *(code **)(pFVar2->_padding_ + 0x50);
  ::FString::FString((FString *)local_538,L"Advanced Tests");
  (*pcVar3)(pFVar2,local_538,0,0);
  if ((FScriptContainerElement *)local_538._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_538._0_8_);
  }
  puVar12 = local_438;
  iVar8 = 1;
  do {
    uVar15 = 0x9e3779b9U - iVar8 ^ iVar8 << 8;
    uVar7 = -(uVar15 + iVar8) ^ uVar15 >> 0xd;
    uVar6 = (iVar8 - uVar7) - uVar15 ^ uVar7 >> 0xc;
    uVar15 = (uVar15 - uVar6) - uVar7 ^ uVar6 << 0x10;
    uVar7 = (uVar7 - uVar15) - uVar6 ^ uVar15 >> 5;
    uVar6 = (uVar6 - uVar7) - uVar15 ^ uVar7 >> 3;
    uVar15 = (uVar15 - uVar6) - uVar7 ^ uVar6 << 10;
    *(uint *)puVar12 = (uVar7 - uVar15) - uVar6 ^ uVar15 >> 0xf;
    puVar12 = (ulonglong *)((longlong)puVar12 + 4);
    iVar8 = iVar8 + 1;
  } while (puVar12 != local_38);
  local_550.Elements = (ForElementType<unsigned_char>)0x0;
  local_550.NumElements = 0;
  local_550.MaxElements = 0;
  puVar12 = local_438;
  local_4f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x400000004;
  uVar7 = uVar13;
  uVar6 = uVar13;
  do {
    uVar5 = *puVar12;
    uVar15 = uVar7;
    if (uVar7 == uVar6) {
      iVar8 = TCompactSetBase<TSizedDefaultAllocator<32>_>::AllocatorCalculateSlackGrow
                        (&local_550,uVar7 + 1,(FCompactSetLayout *)&local_4f8);
      TCompactSetBase<TSizedDefaultAllocator<32>_>::ResizeAllocationPreserveData
                (&local_550,iVar8,(FCompactSetLayout *)&local_4f8,false);
      uVar15 = local_550.NumElements;
    }
    uVar7 = uVar15 + 1;
    puVar12 = (ulonglong *)((longlong)puVar12 + 4);
    local_550.NumElements = uVar7;
    *(int *)((longlong)(int)(uVar15 * (int)local_4f8.Data.AllocatorInstance.Data) +
            (longlong)local_550.Elements) = (int)uVar5;
    uVar6 = local_550.MaxElements;
  } while (puVar12 != local_38);
  local_538._8_8_ = &local_558;
  local_538._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`FScriptCompactSetTest::TestBody'::__l27::<lambda_5>,unsigned_int,void_const_*>
       ::Call;
  TScriptCompactSet<FDefaultCompactSetAllocator>::Rehash
            ((TScriptCompactSet<FDefaultCompactSetAllocator> *)&local_550,
             (FCompactSetLayout *)&local_4f8,
             (TFunctionRef<unsigned_int___cdecl(void_const_*)> *)local_538);
  puVar12 = local_438;
  do {
    local_520.Data.AllocatorInstance.Data._0_4_ = (int)*puVar12;
    if (local_550.NumElements == 0) {
LAB_141b9b012:
      pFVar9 = FAutomationTestFramework::Get();
      pFVar2 = pFVar9->CurrentTest;
      pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
      ::FString::FString((FString *)local_4b8,L"Condition failed");
      (*pcVar3)(pFVar2,local_4b8,0);
      if ((FScriptContainerElement *)local_4b8._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_4b8._0_8_);
      }
    }
    else {
      local_538._8_8_ = local_557;
      local_538._0_8_ =
           UE::Core::Private::Function::
           TFunctionRefCaller<`FScriptCompactSetTest::TestBody'::__l27::<lambda_6>,bool,void_const_*,void_const_*>
           ::Call;
      local_540 = (FCompactSetLayout)&local_520;
      uVar7 = UE::Core::Private::Function::
              TFunctionRefCaller<`FScriptCompactSetTest::TestBody'::__l27::<lambda_5>,unsigned_int,void_const_*>
              ::Call(&local_558,(void **)&local_540);
      local_510.NextIndexCount = local_550.MaxElements;
      puVar16 = (uint *)(((ulonglong)
                          (local_550.MaxElements * (int)local_4f8.Data.AllocatorInstance.Data + 3) &
                         0xfffffffc) + (longlong)local_550.Elements);
      local_510.NextIndexData = (uchar *)(puVar16 + 1);
      local_510.HashData =
           (uchar *)((longlong)local_510.NextIndexData +
                    ((ulonglong)(uint)local_550.MaxElements <<
                    (0xffU < (uint)local_550.MaxElements) + (0xffffU < (uint)local_550.MaxElements))
                    );
      local_510.HashCount = *puVar16;
      local_4e8._0_8_ = &local_520;
      local_4e8._8_8_ = &local_4f8;
      unique0x00009c00 = local_538;
      local_4d0 = &local_550;
      uVar7 = FConstCompactHashTableView::
              Find<_TScriptCompactSet<FDefaultCompactSetAllocator>::FindIndexImpl_::__l2::<lambda_1>_>
                        (&local_510,uVar7,local_550.NumElements,(<lambda_1> *)local_4e8);
      if (uVar7 == 0xffffffff) goto LAB_141b9b012;
    }
    puVar12 = (ulonglong *)((longlong)puVar12 + 4);
  } while (puVar12 != local_38);
  if (0 < local_550.NumElements) {
    do {
      if ((uVar13 & 1) == 0) {
        FVar14 = (FCompactSetLayout)((longlong)local_438 + (longlong)(int)uVar13 * 4);
        if (local_550.NumElements != 0) {
          local_480 = local_557;
          local_488 = UE::Core::Private::Function::
                      TFunctionRefCaller<`FScriptCompactSetTest::TestBody'::__l27::<lambda_6>,bool,void_const_*,void_const_*>
                      ::Call;
          local_540 = FVar14;
          uVar7 = UE::Core::Private::Function::
                  TFunctionRefCaller<`FScriptCompactSetTest::TestBody'::__l27::<lambda_5>,unsigned_int,void_const_*>
                  ::Call(&local_558,(void **)&local_540);
          puVar18 = (undefined4 *)
                    (((ulonglong)
                      (local_550.MaxElements * (int)local_4f8.Data.AllocatorInstance.Data + 3) &
                     0xfffffffc) + (longlong)local_550.Elements);
          local_4e8._0_8_ = puVar18 + 1;
          local_4e8._8_8_ =
               ((ulonglong)(uint)local_550.MaxElements <<
               (0xffU < (uint)local_550.MaxElements) + (0xffffU < (uint)local_550.MaxElements)) +
               local_4e8._0_8_;
          stack0xfffffffffffffb28 = (undefined1 *)CONCAT44(*puVar18,local_550.MaxElements);
          local_4a0 = &local_4f8;
          local_490 = &local_550;
          local_4a8 = FVar14;
          local_498 = &local_488;
          uVar7 = FConstCompactHashTableView::
                  Find<_TScriptCompactSet<FDefaultCompactSetAllocator>::FindIndexImpl_::__l2::<lambda_1>_>
                            ((FConstCompactHashTableView *)local_4e8,uVar7,local_550.NumElements,
                             (<lambda_1> *)&local_4a8);
          if (uVar7 != 0xffffffff) goto LAB_141b9b2f6;
        }
        pFVar9 = FAutomationTestFramework::Get();
        pFVar2 = pFVar9->CurrentTest;
        pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
        ::FString::FString((FString *)&local_510,L"Condition failed");
        (*pcVar3)(pFVar2,&local_510,0);
        puVar16 = (uint *)local_510.NextIndexData;
LAB_141b9b2ec:
        if (puVar16 != (uint *)0x0) {
          FMemory::Free(puVar16);
        }
      }
      else {
        local_538._8_8_ = local_528;
        local_538._0_8_ =
             UE::Core::Private::Function::
             TFunctionRefCaller<`FScriptCompactSetTest::TestBody'::__l27::<lambda_7>,void,void_*>::
             Call;
        local_4b8._8_8_ = &local_558;
        local_4b8._0_8_ =
             UE::Core::Private::Function::
             TFunctionRefCaller<`FScriptCompactSetTest::TestBody'::__l27::<lambda_5>,unsigned_int,void_const_*>
             ::Call;
        TScriptCompactSet<FDefaultCompactSetAllocator>::RemoveAt
                  ((TScriptCompactSet<FDefaultCompactSetAllocator> *)&local_550,uVar13,
                   (FCompactSetLayout *)&local_4f8,
                   (TFunctionRef<unsigned_int___cdecl(void_const_*)> *)local_4b8,
                   (TFunctionRef<void___cdecl(void_*)> *)local_538);
        *(undefined4 *)
         ((longlong)(int)(uVar13 * (int)local_4f8.Data.AllocatorInstance.Data) +
         (longlong)local_550.Elements) =
             *(undefined4 *)
              ((longlong)((local_550.NumElements + -1) * (int)local_4f8.Data.AllocatorInstance.Data)
              + (longlong)local_550.Elements);
        FVar14 = (FCompactSetLayout)((longlong)local_438 + (longlong)(int)uVar13 * 4);
        if (local_550.NumElements != 0) {
          local_4c0 = local_557;
          local_4c8 = (undefined1  [8])
                      UE::Core::Private::Function::
                      TFunctionRefCaller<`FScriptCompactSetTest::TestBody'::__l27::<lambda_6>,bool,void_const_*,void_const_*>
                      ::Call;
          local_540 = FVar14;
          uVar7 = UE::Core::Private::Function::
                  TFunctionRefCaller<`FScriptCompactSetTest::TestBody'::__l27::<lambda_5>,unsigned_int,void_const_*>
                  ::Call(&local_558,(void **)&local_540);
          puVar18 = (undefined4 *)
                    (((ulonglong)
                      (local_550.MaxElements * (int)local_4f8.Data.AllocatorInstance.Data + 3) &
                     0xfffffffc) + (longlong)local_550.Elements);
          local_4e8._0_8_ = puVar18 + 1;
          local_4e8._8_8_ =
               ((ulonglong)(uint)local_550.MaxElements <<
               (0xffU < (uint)local_550.MaxElements) + (0xffffU < (uint)local_550.MaxElements)) +
               local_4e8._0_8_;
          stack0xfffffffffffffb28 = (undefined1 *)CONCAT44(*puVar18,local_550.MaxElements);
          local_4a0 = &local_4f8;
          local_498 = (code **)local_4c8;
          local_490 = &local_550;
          local_4a8 = FVar14;
          uVar7 = FConstCompactHashTableView::
                  Find<_TScriptCompactSet<FDefaultCompactSetAllocator>::FindIndexImpl_::__l2::<lambda_1>_>
                            ((FConstCompactHashTableView *)local_4e8,uVar7,local_550.NumElements,
                             (<lambda_1> *)&local_4a8);
          if (uVar7 != 0xffffffff) {
            pFVar9 = FAutomationTestFramework::Get();
            pFVar2 = pFVar9->CurrentTest;
            pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
            ::FString::FString(&local_520,L"Condition failed");
            (*pcVar3)(pFVar2,&local_520);
            puVar16 = (uint *)CONCAT44(local_520.Data.AllocatorInstance.Data._4_4_,
                                       (int)local_520.Data.AllocatorInstance.Data);
            goto LAB_141b9b2ec;
          }
        }
      }
LAB_141b9b2f6:
      uVar13 = uVar13 + 1;
    } while ((int)uVar13 < local_550.NumElements);
  }
  if (local_550.Elements != (ForElementType<unsigned_char>)0x0) {
    FMemory::Free((void *)local_550.Elements);
  }
  return;
}

