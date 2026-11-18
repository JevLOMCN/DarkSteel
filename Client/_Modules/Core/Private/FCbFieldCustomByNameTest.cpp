// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 8

// GetTestFlags @ 141a40330

EAutomationTestFlags __thiscall
FCbFieldCustomByNameTest::GetTestFlags(FCbFieldCustomByNameTest *this)

{
  return SmokeFilter|ProgramContext|CommandletContext|ServerContext|ClientContext|EditorContext;
}

// IsStressTest @ 141a40340

bool __thiscall FCbFieldCustomByNameTest::IsStressTest(FCbFieldCustomByNameTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141a40350

uint __thiscall FCbFieldCustomByNameTest::GetRequiredDeviceNum(FCbFieldCustomByNameTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 141a40360

FString * __thiscall
FCbFieldCustomByNameTest::GetTestSourceFileName
          (FCbFieldCustomByNameTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Tests\\Serialization\\CompactBinaryTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141a40390

int __thiscall FCbFieldCustomByNameTest::GetTestSourceFileLine(FCbFieldCustomByNameTest *this)

{
  return 0x503;
}

// GetTests @ 141a403a0

/* WARNING: Removing unreachable block (ram,0x000141a4048d) */
/* WARNING: Removing unreachable block (ram,0x000141a40558) */

void __thiscall
FCbFieldCustomByNameTest::GetTests
          (FCbFieldCustomByNameTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"System.Core.Serialization.CbField.CustomByName");
  pFVar4 = (param_1->AllocatorInstance).Data;
  if (((pFVar4 <= (FScriptContainerElement *)&local_18) &&
      ((FScriptContainerElement *)&local_18 < pFVar4 + (longlong)param_1->ArrayMax * 0x10)) &&
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
  *(FScriptContainerElement **)pFVar4 = local_18.Data.AllocatorInstance.Data;
  *(int *)(pFVar4 + 8) = local_18.Data.ArrayNum;
  *(int *)(pFVar4 + 0xc) = local_18.Data.ArrayMax;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar4 = (param_2->AllocatorInstance).Data;
  local_28 = 0;
  local_20 = 0;
  if (((pFVar4 <= (FScriptContainerElement *)&local_28) &&
      ((FScriptContainerElement *)&local_28 < pFVar4 + (longlong)param_2->ArrayMax * 0x10)) &&
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
  *(undefined8 *)pFVar4 = local_28;
  *(undefined4 *)(pFVar4 + 8) = (undefined4)local_20;
  *(undefined4 *)(pFVar4 + 0xc) = local_20._4_4_;
  return;
}

// RunTest @ 141a40580

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall FCbFieldCustomByNameTest::RunTest(FCbFieldCustomByNameTest *this,FString *param_1)

{
  code *pcVar1;
  ECbFieldError EVar2;
  undefined8 uVar3;
  FString *pFVar4;
  FCbCustomByName *pFVar5;
  void *this_00;
  TMemoryView<void_const_> *pTVar6;
  undefined ***pppuVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  bool bVar13;
  char cVar14;
  undefined1 auStackY_1e8 [32];
  undefined2 local_1a8;
  undefined1 local_1a6;
  TMemoryView<void_const_> local_198;
  TCbFieldTypeAccessors<31> local_188 [16];
  undefined1 local_178 [32];
  undefined8 local_158;
  undefined1 *puStack_150;
  undefined1 local_148 [12];
  undefined4 uStack_13c;
  undefined4 *local_138;
  ulong64 uStack_130;
  undefined1 local_128 [8];
  ulong64 uStack_120;
  undefined4 *local_118;
  ulong64 uStack_110;
  undefined1 local_108 [16];
  undefined4 *local_f8;
  ulong64 uStack_f0;
  FString local_e8;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  undefined1 local_98 [32];
  undefined **local_78;
  FScriptContainerElement *local_70;
  int local_68;
  int local_64;
  undefined ***local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined1 local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  pFVar8 = (FScriptContainerElement *)0x0;
  local_198.Data = &local_58;
  local_148._0_8_ = "ABC";
  local_128 = (undefined1  [8])0x0;
  uStack_120 = 0;
  local_118 = (void *)0x0;
  uStack_110 = 0;
  stack0xfffffffffffffec0 = (void *)CONCAT44((int)((ulonglong)stack0xfffffffffffffec0 >> 0x20),3);
  local_138 = (void *)0x0;
  uStack_130 = 0;
  local_198.Size = CONCAT44(local_198.Size._4_4_,5);
  local_108._0_8_ = "ABC";
  local_108._8_8_ = stack0xfffffffffffffec0;
  local_178._8_8_ = local_198.Size;
  local_58 = 0x42410304;
  local_54 = CONCAT31(local_54._1_3_,0x43);
  local_f8 = (void *)0x0;
  uStack_f0 = 0;
  local_178._0_8_ = local_198.Data;
  FCbFieldTestBase::TestFieldBytes<31,FCbCustomByName,TCbFieldTypeAccessors<31>_>
            ((FCbFieldTestBase *)this,L"CustomByName, MinId, Empty",
             (TArrayView<unsigned_char_const_,int> *)local_178,(FCbCustomByName *)local_108,
             (FCbCustomByName *)local_128,None,local_188);
  local_98._0_8_ = FCbFieldView::IsCustomByName;
  pFVar4 = ::FString::ConstructFromPtrSize((FString *)local_178,(uchar *)"ABC",3);
  iVar11 = 0;
  local_70 = pFVar8;
  local_68 = iVar11;
  local_64 = iVar11;
  if (&local_e8 != pFVar4) {
    local_70 = (pFVar4->Data).AllocatorInstance.Data;
    (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_68 = (pFVar4->Data).ArrayNum;
    local_64 = (pFVar4->Data).ArrayMax;
    (pFVar4->Data).ArrayNum = 0;
    (pFVar4->Data).ArrayMax = 0;
  }
  if ((FScriptContainerElement *)local_178._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_178._0_8_);
  }
  local_178._0_8_ = &local_1a8;
  local_158 = (uchar *)&local_58;
  puStack_150 = (undefined1 *)CONCAT44(puStack_150._4_4_,5);
  local_178._8_8_ = &DAT_00000003;
  local_60 = (undefined ***)0x0;
  local_78 = &UE::Core::Private::Function::
              TFunction_OwnedObject<``FCbFieldCustomByNameTest::RunTest'::`2'::FCustomByNameAccessor::FCustomByNameAccessor'::`1'::<lambda_8_>,1,0>
              ::_vftable_;
  local_98._16_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<``FCbFieldCustomByNameTest::RunTest'::__l2::FCustomByNameAccessor::FCustomByNameAccessor'::__l1::<lambda_8_>,TMemoryView<void_const_>,FCbFieldView_&,TMemoryView<void_const_>_>
       ::Call;
  local_1a8 = 0x201;
  local_1a6 = 3;
  local_198.Data = (void *)0x0;
  local_198.Size = 0;
  uStack_120 = (ulong64)puStack_150;
  local_128 = (undefined1  [8])local_158;
  FCbFieldTestBase::
  TestFieldBytes<31,TMemoryView<void_const_>,_FCbFieldCustomByNameTest::RunTest_::__l2::FCustomByNameAccessor>
            ((FCbFieldTestBase *)this,L"CustomByName, MinId, Empty, View",
             (TArrayView<unsigned_char_const_,int> *)local_128,&local_198,
             (TMemoryView<void_const_> *)local_178,None,(FCustomByNameAccessor *)local_98);
  if ((code *)local_98._16_8_ != (code *)0x0) {
    pppuVar7 = &local_78;
    if (local_60 != (undefined ***)0x0) {
      pppuVar7 = local_60;
    }
    (*(code *)(*pppuVar7)[2])();
  }
  local_98._0_8_ = FCbFieldView::IsCustomByName;
  pFVar4 = ::FString::ConstructFromPtrSize((FString *)local_178,(uchar *)"abc",3);
  pFVar9 = pFVar8;
  iVar10 = iVar11;
  iVar12 = iVar11;
  if (&local_d8 != pFVar4) {
    pFVar9 = (pFVar4->Data).AllocatorInstance.Data;
    (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar10 = (pFVar4->Data).ArrayNum;
    iVar12 = (pFVar4->Data).ArrayMax;
    (pFVar4->Data).ArrayNum = 0;
    (pFVar4->Data).ArrayMax = 0;
  }
  if ((FScriptContainerElement *)local_178._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_178._0_8_);
  }
  local_60 = (undefined ***)0x0;
  local_78 = &UE::Core::Private::Function::
              TFunction_OwnedObject<``FCbFieldCustomByNameTest::RunTest'::`2'::FCustomByNameAccessor::FCustomByNameAccessor'::`1'::<lambda_8_>,1,0>
              ::_vftable_;
  local_98._16_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<``FCbFieldCustomByNameTest::RunTest'::__l2::FCustomByNameAccessor::FCustomByNameAccessor'::__l1::<lambda_8_>,TMemoryView<void_const_>,FCbFieldView_&,TMemoryView<void_const_>_>
       ::Call;
  local_1a8 = 0x201;
  local_1a6 = 3;
  local_70 = pFVar9;
  local_68 = iVar10;
  local_64 = iVar12;
  FCbFieldView::FCbFieldView((FCbFieldView *)local_108,&local_58,CustomByName);
  local_198.Data = &local_1a8;
  local_198.Size = 3;
  local_178._8_8_ = &DAT_00000003;
  uStack_120 = 3;
  local_178._0_8_ = local_198.Data;
  local_128 = (undefined1  [8])local_198.Data;
  FCbFieldTestBase::
  TestFieldNoClone<31,TMemoryView<void_const_>,_FCbFieldCustomByNameTest::RunTest_::__l2::FCustomByNameAccessor,FCbFieldView>
            ((FCbFieldTestBase *)this,L"CustomByName, MinId, Empty, InvalidCase",
             (FCbFieldView *)local_108,(TMemoryView<void_const_> *)local_128,
             (TMemoryView<void_const_> *)local_178,RangeError,(FCustomByNameAccessor *)local_98);
  if ((code *)local_98._16_8_ != (code *)0x0) {
    pppuVar7 = &local_78;
    if (local_60 != (undefined ***)0x0) {
      pppuVar7 = local_60;
    }
    (*(code *)(*pppuVar7)[2])();
  }
  local_138 = (undefined4 *)((longlong)&local_54 + 1);
  local_58 = 0x42410308;
  local_54 = 0x3020143;
  local_50 = 4;
  uStack_120 = 0;
  local_128 = (undefined1  [8])0x0;
  local_148._0_8_ = "ABC";
  stack0xfffffffffffffec0 = (void *)CONCAT44(uStack_13c,3);
  uStack_130 = 4;
  FCbFieldView::FCbFieldView((FCbFieldView *)local_178,&local_58,CustomByName);
  local_108._0_8_ = local_148._0_8_;
  local_108._8_8_ = stack0xfffffffffffffec0;
  local_118 = (void *)0x0;
  uStack_110 = 0;
  local_f8 = local_138;
  uStack_f0 = uStack_130;
  FCbFieldTestBase::TestFieldNoClone<31,FCbCustomByName,TCbFieldTypeAccessors<31>,FCbFieldView>
            ((FCbFieldTestBase *)this,L"CustomByName, MinId, Value",(FCbFieldView *)local_178,
             (FCbCustomByName *)local_108,(FCbCustomByName *)local_128,None,local_188);
  local_98._0_8_ = FCbFieldView::IsCustomByName;
  pFVar4 = ::FString::ConstructFromPtrSize((FString *)local_178,(uchar *)"ABC",3);
  pFVar9 = pFVar8;
  iVar10 = iVar11;
  iVar12 = iVar11;
  if (&local_c8 != pFVar4) {
    pFVar9 = (pFVar4->Data).AllocatorInstance.Data;
    (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar10 = (pFVar4->Data).ArrayNum;
    iVar12 = (pFVar4->Data).ArrayMax;
    (pFVar4->Data).ArrayNum = 0;
    (pFVar4->Data).ArrayMax = 0;
  }
  if ((FScriptContainerElement *)local_178._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_178._0_8_);
  }
  local_60 = (undefined ***)0x0;
  local_78 = &UE::Core::Private::Function::
              TFunction_OwnedObject<``FCbFieldCustomByNameTest::RunTest'::`2'::FCustomByNameAccessor::FCustomByNameAccessor'::`1'::<lambda_8_>,1,0>
              ::_vftable_;
  local_98._16_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<``FCbFieldCustomByNameTest::RunTest'::__l2::FCustomByNameAccessor::FCustomByNameAccessor'::__l1::<lambda_8_>,TMemoryView<void_const_>,FCbFieldView_&,TMemoryView<void_const_>_>
       ::Call;
  local_70 = pFVar9;
  local_68 = iVar10;
  local_64 = iVar12;
  FCbFieldView::FCbFieldView((FCbFieldView *)local_178,&local_58,CustomByName);
  local_158 = (uchar *)((longlong)&local_54 + 1);
  local_198.Data = (void *)0x0;
  local_198.Size = 0;
  puStack_150 = &DAT_00000004;
  FCbFieldTestBase::
  TestFieldNoClone<31,TMemoryView<void_const_>,_FCbFieldCustomByNameTest::RunTest_::__l2::FCustomByNameAccessor,FCbFieldView>
            ((FCbFieldTestBase *)this,L"CustomByName, MinId, Value, View",(FCbFieldView *)local_178,
             (TMemoryView<void_const_> *)&local_158,&local_198,None,
             (FCustomByNameAccessor *)local_98);
  if ((code *)local_98._16_8_ != (code *)0x0) {
    pppuVar7 = &local_78;
    if (local_60 != (undefined ***)0x0) {
      pppuVar7 = local_60;
    }
    (*(code *)(*pppuVar7)[2])();
  }
  local_98._0_8_ = FCbFieldView::IsCustomByName;
  pFVar4 = ::FString::ConstructFromPtrSize((FString *)local_178,(uchar *)"abc",3);
  iVar12 = 0;
  pFVar9 = pFVar8;
  iVar10 = iVar12;
  if (&local_b8 != pFVar4) {
    pFVar9 = (pFVar4->Data).AllocatorInstance.Data;
    (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar11 = (pFVar4->Data).ArrayNum;
    iVar10 = (pFVar4->Data).ArrayMax;
    (pFVar4->Data).ArrayNum = 0;
    (pFVar4->Data).ArrayMax = 0;
  }
  if ((FScriptContainerElement *)local_178._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_178._0_8_);
  }
  local_60 = (undefined ***)0x0;
  local_78 = &UE::Core::Private::Function::
              TFunction_OwnedObject<``FCbFieldCustomByNameTest::RunTest'::`2'::FCustomByNameAccessor::FCustomByNameAccessor'::`1'::<lambda_8_>,1,0>
              ::_vftable_;
  local_98._16_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<``FCbFieldCustomByNameTest::RunTest'::__l2::FCustomByNameAccessor::FCustomByNameAccessor'::__l1::<lambda_8_>,TMemoryView<void_const_>,FCbFieldView_&,TMemoryView<void_const_>_>
       ::Call;
  local_1a8 = 0x201;
  local_1a6 = 3;
  local_70 = pFVar9;
  local_68 = iVar11;
  local_64 = iVar10;
  FCbFieldView::FCbFieldView((FCbFieldView *)local_108,&local_58,CustomByName);
  local_198.Data = &local_1a8;
  local_198.Size = 3;
  local_178._8_8_ = &DAT_00000003;
  uStack_120 = 3;
  local_178._0_8_ = local_198.Data;
  local_128 = (undefined1  [8])local_198.Data;
  FCbFieldTestBase::
  TestFieldNoClone<31,TMemoryView<void_const_>,_FCbFieldCustomByNameTest::RunTest_::__l2::FCustomByNameAccessor,FCbFieldView>
            ((FCbFieldTestBase *)this,L"CustomByName, MinId, Value, InvalidCase",
             (FCbFieldView *)local_108,(TMemoryView<void_const_> *)local_128,
             (TMemoryView<void_const_> *)local_178,RangeError,(FCustomByNameAccessor *)local_98);
  if ((code *)local_98._16_8_ != (code *)0x0) {
    pppuVar7 = &local_78;
    if (local_60 != (undefined ***)0x0) {
      pppuVar7 = local_60;
    }
    (*(code *)(*pppuVar7)[2])();
  }
  local_138 = &local_58;
  local_118 = &local_58;
  local_148._0_8_ = "ABC";
  stack0xfffffffffffffec0 = (void *)CONCAT44(uStack_13c,3);
  uStack_130 = 3;
  local_108._0_8_ = "ABC";
  local_108._8_8_ = stack0xfffffffffffffec0;
  uStack_f0 = 3;
  local_158 = (uchar *)(((ulonglong)local_158 >> 0x10 & 0xffff) << 0x10);
  puStack_150 = (void *)0x0;
  local_58 = CONCAT13(local_58._3_1_,0x30201);
  local_128 = (undefined1  [8])0x1506de2ec;
  uStack_120 = CONCAT44(uStack_13c,3);
  uStack_110 = 3;
  local_f8 = local_138;
  ::FString::PrintfImpl((FString *)local_178,L"FCbFieldView::Is[Type](%s)");
  if ((FScriptContainerElement *)local_178._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_178._0_8_);
  }
  local_148._0_8_ = local_128;
  stack0xfffffffffffffec0 = (void *)uStack_120;
  local_138 = local_118;
  uStack_130 = uStack_110;
  pFVar5 = FCbFieldView::AsCustomByName
                     ((FCbFieldView *)&local_158,(FCbCustomByName *)local_178,
                      (FCbCustomByName *)local_148);
  local_148._0_8_ = (pFVar5->Name).DataPtr;
  unique0x10000be1 = *(void **)&(pFVar5->Name).Size;
  local_138 = (pFVar5->Data).Data;
  uStack_130 = (pFVar5->Data).Size;
  ::FString::PrintfImpl((FString *)&local_198,L"FCbFieldView::As[Type](%s) -> Equal");
  FCbFieldTestBase::TestEqual
            ((FCbFieldTestBase *)this,(FString *)&local_198,(FCbCustomByName *)local_148,
             (FCbCustomByName *)local_108);
  if (local_198.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_198.Data);
  }
  bVar13 = local_158._1_1_ == None;
  ::FString::PrintfImpl((FString *)&local_198,L"FCbFieldView::As[Type](%s) -> HasError()");
  if (bVar13) {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl((FString *)local_108,L"%s: The two values are not equal.");
    (*pcVar1)(this,local_108,0);
    if ((FScriptContainerElement *)local_108._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_108._0_8_);
    }
  }
  if (local_198.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_198.Data);
  }
  EVar2 = local_158._1_1_;
  ::FString::PrintfImpl((FString *)&local_198,L"FCbFieldView::As[Type](%s) -> GetError()");
  if (EVar2 != TypeError) {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl((FString *)local_108,L"%s: The two values are not equal.");
    (*pcVar1)(this,local_108,0);
    if ((FScriptContainerElement *)local_108._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_108._0_8_);
    }
  }
  if (local_198.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_198.Data);
  }
  local_98._0_8_ = FCbFieldView::IsCustomByName;
  pFVar4 = ::FString::ConstructFromPtrSize((FString *)local_178,(uchar *)"ABC",3);
  iVar11 = iVar12;
  if (&local_a8 != pFVar4) {
    pFVar8 = (pFVar4->Data).AllocatorInstance.Data;
    (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar12 = (pFVar4->Data).ArrayNum;
    iVar11 = (pFVar4->Data).ArrayMax;
    (pFVar4->Data).ArrayNum = 0;
    (pFVar4->Data).ArrayMax = 0;
  }
  if ((FScriptContainerElement *)local_178._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_178._0_8_);
  }
  local_60 = (undefined ***)0x0;
  local_78 = &UE::Core::Private::Function::
              TFunction_OwnedObject<``FCbFieldCustomByNameTest::RunTest'::`2'::FCustomByNameAccessor::FCustomByNameAccessor'::`1'::<lambda_8_>,1,0>
              ::_vftable_;
  local_128 = (undefined1  [8])&local_58;
  local_178._0_8_ = &local_58;
  local_98._16_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<``FCbFieldCustomByNameTest::RunTest'::__l2::FCustomByNameAccessor::FCustomByNameAccessor'::__l1::<lambda_8_>,TMemoryView<void_const_>,FCbFieldView_&,TMemoryView<void_const_>_>
       ::Call;
  local_58 = CONCAT13(local_58._3_1_,0x30201);
  uStack_120 = 3;
  local_178._8_8_ = &DAT_00000003;
  local_70 = pFVar8;
  local_68 = iVar12;
  local_64 = iVar11;
  if ((code *)local_98._0_8_ == FCbFieldView::IsCustomByName) {
    cVar14 = ((ECbFieldType)local_158 & CustomByName) == CustomByName;
  }
  else {
    cVar14 = (*(code *)local_98._0_8_)(&local_158);
  }
  ::FString::PrintfImpl((FString *)&local_198,L"FCbFieldView::Is[Type](%s)");
  if (cVar14 != '\0') {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl((FString *)local_108,L"%s: The two values are not equal.");
    (*pcVar1)(this,local_108,0);
    if ((FScriptContainerElement *)local_108._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_108._0_8_);
    }
  }
  if (local_198.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_198.Data);
  }
  UE::Core::Private::Function::CheckCallable((void *)local_98._16_8_);
  uVar3 = local_98._16_8_;
  pppuVar7 = &local_78;
  if (local_60 != (undefined ***)0x0) {
    pppuVar7 = local_60;
  }
  this_00 = (void *)(*(code *)(*pppuVar7)[1])();
  if ((code *)uVar3 ==
      UE::Core::Private::Function::
      TFunctionRefCaller<``FCbFieldCustomByNameTest::RunTest'::__l2::FCustomByNameAccessor::FCustomByNameAccessor'::__l1::<lambda_8_>,TMemoryView<void_const_>,FCbFieldView_&,TMemoryView<void_const_>_>
      ::Call) {
    local_148._0_8_ = local_128;
    stack0xfffffffffffffec0 = (void *)uStack_120;
    ``FCbFieldCustomByNameTest::RunTest'::__l2::FCustomByNameAccessor::FCustomByNameAccessor'::__l1
    ::<lambda_8_>::operator()
              (this_00,(TMemoryView<void_const_> *)local_108,(FCbFieldView *)&local_158,
               (TMemoryView<void_const_> *)local_148);
  }
  else {
    (*(code *)uVar3)(local_108,this_00,(FCbFieldView *)&local_158,local_128);
  }
  ::FString::PrintfImpl((FString *)&local_198,L"FCbFieldView::As[Type](%s) -> Equal");
  pFVar8 = (FScriptContainerElement *)L"";
  if ((int)local_198.Size != 0) {
    pFVar8 = local_198.Data;
  }
  FAutomationTestBase::TestEqual<TMemoryView<void_const_>_>
            ((FAutomationTestBase *)this,(wchar_t *)pFVar8,(TMemoryView<void_const_> *)local_108,
             (TMemoryView<void_const_> *)local_178);
  if (local_198.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_198.Data);
  }
  bVar13 = local_158._1_1_ == None;
  ::FString::PrintfImpl((FString *)&local_198,L"FCbFieldView::As[Type](%s) -> HasError()");
  if (bVar13) {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl((FString *)local_178,L"%s: The two values are not equal.");
    (*pcVar1)(this,local_178,0);
    if ((FScriptContainerElement *)local_178._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_178._0_8_);
    }
  }
  if (local_198.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_198.Data);
  }
  EVar2 = local_158._1_1_;
  ::FString::PrintfImpl((FString *)&local_198,L"FCbFieldView::As[Type](%s) -> GetError()");
  if (EVar2 != TypeError) {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl((FString *)local_178,L"%s: The two values are not equal.");
    (*pcVar1)(this,local_178,0);
    if ((FScriptContainerElement *)local_178._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_178._0_8_);
    }
  }
  if (local_198.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_198.Data);
  }
  if ((code *)local_98._16_8_ != (code *)0x0) {
    pppuVar7 = &local_78;
    if (local_60 != (undefined ***)0x0) {
      pppuVar7 = local_60;
    }
    (*(code *)(*pppuVar7)[2])();
  }
  local_108._0_8_ = &local_1a8;
  local_178._8_4_ = 3;
  local_178._0_8_ = "ABC";
  local_128 = (undefined1  [8])&local_1a8;
  local_148._0_8_ = "ABC";
  stack0xfffffffffffffec0 = (void *)local_178._8_8_;
  local_1a8 = 0x201;
  local_1a6 = 3;
  local_108._8_8_ = &DAT_00000003;
  uStack_120 = 3;
  pTVar6 = FCbFieldView::AsCustom
                     ((FCbFieldView *)&local_158,(TMemoryView<void_const_> *)local_178,
                      (TStringView<char8_t> *)local_148,(TMemoryView<void_const_> *)local_128);
  FAutomationTestBase::TestEqual<TMemoryView<void_const_>_>
            ((FAutomationTestBase *)this,L"FCbFieldView()::AsCustom(Name)",pTVar6,
             (TMemoryView<void_const_> *)local_108);
  return true;
}

// GetBeautifiedTestName @ 141a410d0

FString * __thiscall
FCbFieldCustomByNameTest::GetBeautifiedTestName
          (FCbFieldCustomByNameTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"System.Core.Serialization.CbField.CustomByName");
  return __return_storage_ptr__;
}

