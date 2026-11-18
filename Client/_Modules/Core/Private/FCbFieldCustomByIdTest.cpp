// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 8

// GetTestFlags @ 141a3ee60

EAutomationTestFlags __thiscall FCbFieldCustomByIdTest::GetTestFlags(FCbFieldCustomByIdTest *this)

{
  return SmokeFilter|ProgramContext|CommandletContext|ServerContext|ClientContext|EditorContext;
}

// IsStressTest @ 141a3ee70

bool __thiscall FCbFieldCustomByIdTest::IsStressTest(FCbFieldCustomByIdTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141a3ee80

uint __thiscall FCbFieldCustomByIdTest::GetRequiredDeviceNum(FCbFieldCustomByIdTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 141a3ee90

FString * __thiscall
FCbFieldCustomByIdTest::GetTestSourceFileName
          (FCbFieldCustomByIdTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Tests\\Serialization\\CompactBinaryTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141a3eec0

int __thiscall FCbFieldCustomByIdTest::GetTestSourceFileLine(FCbFieldCustomByIdTest *this)

{
  return 0x4c9;
}

// GetTests @ 141a3eed0

/* WARNING: Removing unreachable block (ram,0x000141a3efbd) */
/* WARNING: Removing unreachable block (ram,0x000141a3f088) */

void __thiscall
FCbFieldCustomByIdTest::GetTests
          (FCbFieldCustomByIdTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"System.Core.Serialization.CbField.CustomById");
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

// RunTest @ 141a3f0b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall FCbFieldCustomByIdTest::RunTest(FCbFieldCustomByIdTest *this,FString *param_1)

{
  void *pvVar1;
  code *pcVar2;
  ulong64 uVar3;
  undefined2 *puVar4;
  ECbFieldError EVar5;
  undefined8 uVar6;
  FCbCustomById *pFVar7;
  ulong64 *puVar8;
  TMemoryView<void_const_> *pTVar9;
  undefined ***pppuVar10;
  wchar_t *pwVar11;
  ECbFieldType EVar12;
  bool bVar13;
  undefined1 auStackY_198 [32];
  wchar_t local_158;
  undefined1 local_156;
  TMemoryView<void_const_> local_148;
  TCbFieldTypeAccessors<30> local_138 [16];
  FCbCustomById local_128;
  undefined2 local_108;
  undefined1 local_106;
  undefined2 local_104;
  undefined1 local_102;
  FCbFieldView local_f8;
  FCbCustomById local_e8;
  FCbCustomById local_c8;
  FCbFieldView local_a8;
  undefined1 local_98 [32];
  undefined **local_78;
  undefined8 local_70;
  undefined ***local_60;
  FString local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_198;
  local_148.Size = CONCAT44(local_148.Size._4_4_,2);
  local_148.Data = &local_58;
  local_58.Data.AllocatorInstance.Data._0_2_ = 1;
  local_c8.Id = 0;
  local_c8.Data.Data = (void *)0x0;
  local_c8.Data.Size = 0;
  local_e8.Id = 0;
  local_e8.Data.Data = (void *)0x0;
  local_e8.Data.Size = 0;
  local_128.Data.Data = (void *)local_148.Size;
  local_128.Id = (ulong64)local_148.Data;
  FCbFieldTestBase::TestFieldBytes<30,FCbCustomById,TCbFieldTypeAccessors<30>_>
            ((FCbFieldTestBase *)this,L"CustomById, MinId, Empty",
             (TArrayView<unsigned_char_const_,int> *)&local_128,&local_e8,&local_c8,None,local_138);
  local_128.Id = (ulong64)&local_158;
  local_f8._0_8_ = &local_58;
  local_f8.Value = (void *)CONCAT44(local_f8.Value._4_4_,2);
  local_128.Data.Data = &DAT_00000003;
  local_98._0_8_ = FCbFieldView::IsCustomById;
  local_60 = (undefined ***)0x0;
  local_78 = &UE::Core::Private::Function::
              TFunction_OwnedObject<``FCbFieldCustomByIdTest::RunTest'::`2'::FCustomByIdAccessor::FCustomByIdAccessor'::`1'::<lambda_7_>,1,0>
              ::_vftable_;
  local_70 = 0;
  local_98._16_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<``FCbFieldCustomByIdTest::RunTest'::__l2::FCustomByIdAccessor::FCustomByIdAccessor'::__l1::<lambda_7_>,TMemoryView<void_const_>,FCbFieldView_&,TMemoryView<void_const_>_>
       ::Call;
  local_158 = L'ȁ';
  local_156 = 3;
  local_148.Data = (void *)0x0;
  local_148.Size = 0;
  local_e8.Data.Data = local_f8.Value;
  local_e8.Id = local_f8._0_8_;
  FCbFieldTestBase::
  TestFieldBytes<30,TMemoryView<void_const_>,_FCbFieldCustomByIdTest::RunTest_::__l2::FCustomByIdAccessor>
            ((FCbFieldTestBase *)this,L"CustomById, MinId, Empty, View",
             (TArrayView<unsigned_char_const_,int> *)&local_e8,&local_148,
             (TMemoryView<void_const_> *)&local_128,None,(FCustomByIdAccessor *)local_98);
  if ((code *)local_98._16_8_ != (code *)0x0) {
    pppuVar10 = &local_78;
    if (local_60 != (undefined ***)0x0) {
      pppuVar10 = local_60;
    }
    (*(code *)(*pppuVar10)[2])();
  }
  local_98._0_8_ = FCbFieldView::IsCustomById;
  local_60 = (undefined ***)0x0;
  local_78 = &UE::Core::Private::Function::
              TFunction_OwnedObject<``FCbFieldCustomByIdTest::RunTest'::`2'::FCustomByIdAccessor::FCustomByIdAccessor'::`1'::<lambda_7_>,1,0>
              ::_vftable_;
  local_70 = 0xffffffffffffffff;
  local_98._16_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<``FCbFieldCustomByIdTest::RunTest'::__l2::FCustomByIdAccessor::FCustomByIdAccessor'::__l1::<lambda_7_>,TMemoryView<void_const_>,FCbFieldView_&,TMemoryView<void_const_>_>
       ::Call;
  local_158 = L'ȁ';
  local_156 = 3;
  FCbFieldView::FCbFieldView(&local_a8,&local_58,CustomById);
  local_148.Data = &local_158;
  local_148.Size = 3;
  local_128.Data.Data = &DAT_00000003;
  local_e8.Data.Data = &DAT_00000003;
  local_128.Id = (ulong64)local_148.Data;
  local_e8.Id = (ulong64)local_148.Data;
  FCbFieldTestBase::
  TestFieldNoClone<30,TMemoryView<void_const_>,_FCbFieldCustomByIdTest::RunTest_::__l2::FCustomByIdAccessor,FCbFieldView>
            ((FCbFieldTestBase *)this,L"CustomById, MinId, Empty, InvalidId",&local_a8,
             (TMemoryView<void_const_> *)&local_e8,(TMemoryView<void_const_> *)&local_128,RangeError
             ,(FCustomByIdAccessor *)local_98);
  if ((code *)local_98._16_8_ != (code *)0x0) {
    pppuVar10 = &local_78;
    if (local_60 != (undefined ***)0x0) {
      pppuVar10 = local_60;
    }
    (*(code *)(*pppuVar10)[2])();
  }
  local_58.Data.AllocatorInstance.Data._0_6_ = 0x40302010005;
  pvVar1 = (void *)((longlong)&local_58.Data.AllocatorInstance.Data + 2);
  FCbFieldView::FCbFieldView((FCbFieldView *)&local_128,&local_58,CustomById);
  local_c8.Id = 0;
  local_c8.Data.Data = (void *)0x0;
  local_c8.Data.Size = 0;
  local_e8.Id = 0;
  local_e8.Data.Size = 4;
  local_e8.Data.Data = pvVar1;
  FCbFieldTestBase::TestFieldNoClone<30,FCbCustomById,TCbFieldTypeAccessors<30>,FCbFieldView>
            ((FCbFieldTestBase *)this,L"CustomById, MinId, Value",(FCbFieldView *)&local_128,
             &local_e8,&local_c8,None,local_138);
  local_98._0_8_ = FCbFieldView::IsCustomById;
  local_60 = (undefined ***)0x0;
  local_78 = &UE::Core::Private::Function::
              TFunction_OwnedObject<``FCbFieldCustomByIdTest::RunTest'::`2'::FCustomByIdAccessor::FCustomByIdAccessor'::`1'::<lambda_7_>,1,0>
              ::_vftable_;
  local_70 = 0;
  local_98._16_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<``FCbFieldCustomByIdTest::RunTest'::__l2::FCustomByIdAccessor::FCustomByIdAccessor'::__l1::<lambda_7_>,TMemoryView<void_const_>,FCbFieldView_&,TMemoryView<void_const_>_>
       ::Call;
  FCbFieldView::FCbFieldView((FCbFieldView *)&local_128,&local_58,CustomById);
  local_148.Data = (void *)0x0;
  local_148.Size = 0;
  local_f8.Value = &DAT_00000004;
  local_f8._0_8_ = pvVar1;
  FCbFieldTestBase::
  TestFieldNoClone<30,TMemoryView<void_const_>,_FCbFieldCustomByIdTest::RunTest_::__l2::FCustomByIdAccessor,FCbFieldView>
            ((FCbFieldTestBase *)this,L"CustomById, MinId, Value, View",(FCbFieldView *)&local_128,
             (TMemoryView<void_const_> *)&local_f8,&local_148,None,(FCustomByIdAccessor *)local_98);
  if ((code *)local_98._16_8_ != (code *)0x0) {
    pppuVar10 = &local_78;
    if (local_60 != (undefined ***)0x0) {
      pppuVar10 = local_60;
    }
    (*(code *)(*pppuVar10)[2])();
  }
  local_98._0_8_ = FCbFieldView::IsCustomById;
  local_60 = (undefined ***)0x0;
  local_78 = &UE::Core::Private::Function::
              TFunction_OwnedObject<``FCbFieldCustomByIdTest::RunTest'::`2'::FCustomByIdAccessor::FCustomByIdAccessor'::`1'::<lambda_7_>,1,0>
              ::_vftable_;
  local_70 = 0xffffffffffffffff;
  local_98._16_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<``FCbFieldCustomByIdTest::RunTest'::__l2::FCustomByIdAccessor::FCustomByIdAccessor'::__l1::<lambda_7_>,TMemoryView<void_const_>,FCbFieldView_&,TMemoryView<void_const_>_>
       ::Call;
  local_158 = L'ȁ';
  local_156 = 3;
  FCbFieldView::FCbFieldView(&local_a8,&local_58,CustomById);
  local_148.Data = &local_158;
  local_148.Size = 3;
  local_128.Data.Data = &DAT_00000003;
  local_e8.Data.Data = &DAT_00000003;
  local_128.Id = (ulong64)local_148.Data;
  local_e8.Id = (ulong64)local_148.Data;
  FCbFieldTestBase::
  TestFieldNoClone<30,TMemoryView<void_const_>,_FCbFieldCustomByIdTest::RunTest_::__l2::FCustomByIdAccessor,FCbFieldView>
            ((FCbFieldTestBase *)this,L"CustomById, MinId, Value, InvalidId",&local_a8,
             (TMemoryView<void_const_> *)&local_e8,(TMemoryView<void_const_> *)&local_128,RangeError
             ,(FCustomByIdAccessor *)local_98);
  if ((code *)local_98._16_8_ != (code *)0x0) {
    pppuVar10 = &local_78;
    if (local_60 != (undefined ***)0x0) {
      pppuVar10 = local_60;
    }
    (*(code *)(*pppuVar10)[2])();
  }
  local_148.Data = &local_58;
  local_148.Size = CONCAT44(local_148.Size._4_4_,10);
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0xffffffffffffff09;
  local_58.Data.ArrayNum = CONCAT22(local_58.Data.ArrayNum._2_2_,0xffff);
  local_c8.Id = 0;
  local_c8.Data.Data = (void *)0x0;
  local_c8.Data.Size = 0;
  local_e8.Id = 0xffffffffffffffff;
  local_e8.Data.Data = (void *)0x0;
  local_e8.Data.Size = 0;
  local_128.Data.Data = (void *)local_148.Size;
  local_128.Id = (ulong64)local_148.Data;
  FCbFieldTestBase::TestFieldBytes<30,FCbCustomById,TCbFieldTypeAccessors<30>_>
            ((FCbFieldTestBase *)this,L"CustomById, MaxId, Empty",
             (TArrayView<unsigned_char_const_,int> *)&local_128,&local_e8,&local_c8,None,local_138);
  local_128.Id = (ulong64)&local_158;
  local_f8._0_8_ = &local_58;
  local_f8.Value = (void *)CONCAT44(local_f8.Value._4_4_,10);
  local_128.Data.Data = &DAT_00000003;
  local_98._0_8_ = FCbFieldView::IsCustomById;
  local_60 = (undefined ***)0x0;
  local_78 = &UE::Core::Private::Function::
              TFunction_OwnedObject<``FCbFieldCustomByIdTest::RunTest'::`2'::FCustomByIdAccessor::FCustomByIdAccessor'::`1'::<lambda_7_>,1,0>
              ::_vftable_;
  local_70 = 0xffffffffffffffff;
  local_98._16_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<``FCbFieldCustomByIdTest::RunTest'::__l2::FCustomByIdAccessor::FCustomByIdAccessor'::__l1::<lambda_7_>,TMemoryView<void_const_>,FCbFieldView_&,TMemoryView<void_const_>_>
       ::Call;
  local_158 = L'ȁ';
  local_156 = 3;
  local_148.Data = (void *)0x0;
  local_148.Size = 0;
  local_e8.Data.Data = local_f8.Value;
  local_e8.Id = local_f8._0_8_;
  FCbFieldTestBase::
  TestFieldBytes<30,TMemoryView<void_const_>,_FCbFieldCustomByIdTest::RunTest_::__l2::FCustomByIdAccessor>
            ((FCbFieldTestBase *)this,L"CustomById, MaxId, Empty, View",
             (TArrayView<unsigned_char_const_,int> *)&local_e8,&local_148,
             (TMemoryView<void_const_> *)&local_128,None,(FCustomByIdAccessor *)local_98);
  if ((code *)local_98._16_8_ != (code *)0x0) {
    pppuVar10 = &local_78;
    if (local_60 != (undefined ***)0x0) {
      pppuVar10 = local_60;
    }
    (*(code *)(*pppuVar10)[2])();
  }
  local_98._0_8_ = FCbFieldView::IsCustomById;
  local_60 = (undefined ***)0x0;
  local_78 = &UE::Core::Private::Function::
              TFunction_OwnedObject<``FCbFieldCustomByIdTest::RunTest'::`2'::FCustomByIdAccessor::FCustomByIdAccessor'::`1'::<lambda_7_>,1,0>
              ::_vftable_;
  local_70 = 0;
  local_98._16_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<``FCbFieldCustomByIdTest::RunTest'::__l2::FCustomByIdAccessor::FCustomByIdAccessor'::__l1::<lambda_7_>,TMemoryView<void_const_>,FCbFieldView_&,TMemoryView<void_const_>_>
       ::Call;
  local_158 = L'ȁ';
  local_156 = 3;
  FCbFieldView::FCbFieldView(&local_a8,&local_58,CustomById);
  local_148.Data = &local_158;
  local_148.Size = 3;
  local_128.Data.Data = &DAT_00000003;
  local_e8.Data.Data = &DAT_00000003;
  local_128.Id = (ulong64)local_148.Data;
  local_e8.Id = (ulong64)local_148.Data;
  FCbFieldTestBase::
  TestFieldNoClone<30,TMemoryView<void_const_>,_FCbFieldCustomByIdTest::RunTest_::__l2::FCustomByIdAccessor,FCbFieldView>
            ((FCbFieldTestBase *)this,L"CustomById, MaxId, Empty, InvalidId",&local_a8,
             (TMemoryView<void_const_> *)&local_e8,(TMemoryView<void_const_> *)&local_128,RangeError
             ,(FCustomByIdAccessor *)local_98);
  if ((code *)local_98._16_8_ != (code *)0x0) {
    pppuVar10 = &local_78;
    if (local_60 != (undefined ***)0x0) {
      pppuVar10 = local_60;
    }
    (*(code *)(*pppuVar10)[2])();
  }
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0xffffffffffffff0d;
  local_58.Data.ArrayNum = 0x201ffff;
  local_58.Data.ArrayMax._0_2_ = 0x403;
  FCbFieldView::FCbFieldView((FCbFieldView *)&local_128,&local_58,CustomById);
  local_e8.Data.Data = (void *)((longlong)&local_58.Data.ArrayNum + 2);
  local_c8.Id = 0;
  local_c8.Data.Data = (void *)0x0;
  local_c8.Data.Size = 0;
  local_e8.Id = 0xffffffffffffffff;
  local_e8.Data.Size = 4;
  FCbFieldTestBase::TestFieldNoClone<30,FCbCustomById,TCbFieldTypeAccessors<30>,FCbFieldView>
            ((FCbFieldTestBase *)this,L"CustomById, MaxId, Value",(FCbFieldView *)&local_128,
             &local_e8,&local_c8,None,local_138);
  local_98._0_8_ = FCbFieldView::IsCustomById;
  local_60 = (undefined ***)0x0;
  local_78 = &UE::Core::Private::Function::
              TFunction_OwnedObject<``FCbFieldCustomByIdTest::RunTest'::`2'::FCustomByIdAccessor::FCustomByIdAccessor'::`1'::<lambda_7_>,1,0>
              ::_vftable_;
  local_70 = 0xffffffffffffffff;
  local_98._16_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<``FCbFieldCustomByIdTest::RunTest'::__l2::FCustomByIdAccessor::FCustomByIdAccessor'::__l1::<lambda_7_>,TMemoryView<void_const_>,FCbFieldView_&,TMemoryView<void_const_>_>
       ::Call;
  FCbFieldView::FCbFieldView((FCbFieldView *)&local_128,&local_58,CustomById);
  local_f8._0_8_ = (longlong)&local_58.Data.ArrayNum + 2;
  local_148.Data = (void *)0x0;
  local_148.Size = 0;
  local_f8.Value = &DAT_00000004;
  FCbFieldTestBase::
  TestFieldNoClone<30,TMemoryView<void_const_>,_FCbFieldCustomByIdTest::RunTest_::__l2::FCustomByIdAccessor,FCbFieldView>
            ((FCbFieldTestBase *)this,L"CustomById, MaxId, Value, View",(FCbFieldView *)&local_128,
             (TMemoryView<void_const_> *)&local_f8,&local_148,None,(FCustomByIdAccessor *)local_98);
  if ((code *)local_98._16_8_ != (code *)0x0) {
    pppuVar10 = &local_78;
    if (local_60 != (undefined ***)0x0) {
      pppuVar10 = local_60;
    }
    (*(code *)(*pppuVar10)[2])();
  }
  local_98._0_8_ = FCbFieldView::IsCustomById;
  local_60 = (undefined ***)0x0;
  local_78 = &UE::Core::Private::Function::
              TFunction_OwnedObject<``FCbFieldCustomByIdTest::RunTest'::`2'::FCustomByIdAccessor::FCustomByIdAccessor'::`1'::<lambda_7_>,1,0>
              ::_vftable_;
  local_70 = 0;
  local_98._16_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<``FCbFieldCustomByIdTest::RunTest'::__l2::FCustomByIdAccessor::FCustomByIdAccessor'::__l1::<lambda_7_>,TMemoryView<void_const_>,FCbFieldView_&,TMemoryView<void_const_>_>
       ::Call;
  local_158 = L'ȁ';
  local_156 = 3;
  FCbFieldView::FCbFieldView(&local_a8,&local_58,CustomById);
  local_148.Data = &local_158;
  local_148.Size = 3;
  local_128.Data.Data = &DAT_00000003;
  local_e8.Data.Data = &DAT_00000003;
  local_128.Id = (ulong64)local_148.Data;
  local_e8.Id = (ulong64)local_148.Data;
  FCbFieldTestBase::
  TestFieldNoClone<30,TMemoryView<void_const_>,_FCbFieldCustomByIdTest::RunTest_::__l2::FCustomByIdAccessor,FCbFieldView>
            ((FCbFieldTestBase *)this,L"CustomById, MaxId, Value, InvalidId",&local_a8,
             (TMemoryView<void_const_> *)&local_e8,(TMemoryView<void_const_> *)&local_128,RangeError
             ,(FCustomByIdAccessor *)local_98);
  if ((code *)local_98._16_8_ != (code *)0x0) {
    pppuVar10 = &local_78;
    if (local_60 != (undefined ***)0x0) {
      pppuVar10 = local_60;
    }
    (*(code *)(*pppuVar10)[2])();
  }
  local_c8.Data.Data = &local_108;
  local_f8._0_8_ = ((ulonglong)local_f8._0_8_ >> 0x10 & 0xffff) << 0x10;
  local_f8.Value = (void *)0x0;
  local_108 = 0x201;
  local_106 = 3;
  local_c8.Id = (ulong64)&DAT_00000004;
  local_c8.Data.Size = 3;
  ::FString::PrintfImpl((FString *)&local_128,L"FCbFieldView::Is[Type](%s)");
  if ((wchar_t *)local_128.Id != (wchar_t *)0x0) {
    FMemory::Free((void *)local_128.Id);
  }
  local_128.Id = local_c8.Id;
  local_128.Data.Data = local_c8.Data.Data;
  local_128.Data.Size = local_c8.Data.Size;
  pFVar7 = FCbFieldView::AsCustomById(&local_f8,&local_c8,&local_128);
  local_c8.Data.Size = (pFVar7->Data).Size;
  uVar3 = pFVar7->Id;
  puVar4 = (pFVar7->Data).Data;
  ::FString::PrintfImpl((FString *)&local_148,L"FCbFieldView::As[Type](%s) -> Equal");
  if (((uVar3 == 4) && (local_c8.Data.Size == 3)) && (puVar4 == &local_108)) {
    bVar13 = true;
  }
  else {
    bVar13 = false;
  }
  pwVar11 = L"";
  if ((int)local_148.Size != 0) {
    pwVar11 = local_148.Data;
  }
  FAutomationTestBase::TestTrue((FAutomationTestBase *)this,pwVar11,bVar13);
  if (local_148.Data != (wchar_t *)0x0) {
    FMemory::Free(local_148.Data);
  }
  bVar13 = local_f8.Error == None;
  ::FString::PrintfImpl(&local_58,L"FCbFieldView::As[Type](%s) -> HasError()");
  if (bVar13) {
    pcVar2 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl((FString *)&local_148,L"%s: The two values are not equal.");
    (*pcVar2)(this,&local_148,0);
    if (local_148.Data != (wchar_t *)0x0) {
      FMemory::Free(local_148.Data);
    }
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  EVar5 = local_f8.Error;
  ::FString::PrintfImpl(&local_58,L"FCbFieldView::As[Type](%s) -> GetError()");
  if (EVar5 != TypeError) {
    pcVar2 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl((FString *)&local_148,L"%s: The two values are not equal.");
    (*pcVar2)(this,&local_148,0);
    if (local_148.Data != (wchar_t *)0x0) {
      FMemory::Free(local_148.Data);
    }
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  local_e8.Id = (ulong64)&local_58;
  local_128.Id = (ulong64)&local_58;
  local_98._0_8_ = FCbFieldView::IsCustomById;
  local_60 = (undefined ***)0x0;
  local_78 = &UE::Core::Private::Function::
              TFunction_OwnedObject<``FCbFieldCustomByIdTest::RunTest'::`2'::FCustomByIdAccessor::FCustomByIdAccessor'::`1'::<lambda_7_>,1,0>
              ::_vftable_;
  EVar12 = local_f8.TypeWithFlags & CustomByName;
  local_70 = 0;
  local_98._16_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<``FCbFieldCustomByIdTest::RunTest'::__l2::FCustomByIdAccessor::FCustomByIdAccessor'::__l1::<lambda_7_>,TMemoryView<void_const_>,FCbFieldView_&,TMemoryView<void_const_>_>
       ::Call;
  local_58.Data.AllocatorInstance.Data._0_3_ = 0x30201;
  local_e8.Data.Data = &DAT_00000003;
  local_128.Data.Data = &DAT_00000003;
  ::FString::PrintfImpl((FString *)&local_148,L"FCbFieldView::Is[Type](%s)");
  if (EVar12 == CustomById) {
    pcVar2 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl((FString *)&local_a8,L"%s: The two values are not equal.");
    (*pcVar2)(this,&local_a8,0);
    if ((void *)local_a8._0_8_ != (void *)0x0) {
      FMemory::Free((void *)local_a8._0_8_);
    }
  }
  if (local_148.Data != (wchar_t *)0x0) {
    FMemory::Free(local_148.Data);
  }
  UE::Core::Private::Function::CheckCallable((void *)local_98._16_8_);
  uVar6 = local_98._16_8_;
  pppuVar10 = &local_78;
  if (local_60 != (undefined ***)0x0) {
    pppuVar10 = local_60;
  }
  puVar8 = (ulong64 *)(*(code *)(*pppuVar10)[1])();
  if ((code *)uVar6 ==
      UE::Core::Private::Function::
      TFunctionRefCaller<``FCbFieldCustomByIdTest::RunTest'::__l2::FCustomByIdAccessor::FCustomByIdAccessor'::__l1::<lambda_7_>,TMemoryView<void_const_>,FCbFieldView_&,TMemoryView<void_const_>_>
      ::Call) {
    local_c8.Id = local_e8.Id;
    local_c8.Data.Data = local_e8.Data.Data;
    FCbFieldView::AsCustom
              (&local_f8,(TMemoryView<void_const_> *)&local_a8,*puVar8,
               (TMemoryView<void_const_> *)&local_c8);
  }
  else {
    (*(code *)uVar6)(&local_a8,puVar8,&local_f8,&local_e8);
  }
  ::FString::PrintfImpl((FString *)&local_148,L"FCbFieldView::As[Type](%s) -> Equal");
  pwVar11 = L"";
  if ((int)local_148.Size != 0) {
    pwVar11 = local_148.Data;
  }
  FAutomationTestBase::TestEqual<TMemoryView<void_const_>_>
            ((FAutomationTestBase *)this,pwVar11,(TMemoryView<void_const_> *)&local_a8,
             (TMemoryView<void_const_> *)&local_128);
  if (local_148.Data != (wchar_t *)0x0) {
    FMemory::Free(local_148.Data);
  }
  bVar13 = local_f8.Error == None;
  ::FString::PrintfImpl((FString *)&local_148,L"FCbFieldView::As[Type](%s) -> HasError()");
  if (bVar13) {
    pcVar2 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl((FString *)&local_128,L"%s: The two values are not equal.");
    (*pcVar2)(this,&local_128,0);
    if ((FString *)local_128.Id != (FString *)0x0) {
      FMemory::Free((void *)local_128.Id);
    }
  }
  if (local_148.Data != (wchar_t *)0x0) {
    FMemory::Free(local_148.Data);
  }
  EVar5 = local_f8.Error;
  ::FString::PrintfImpl((FString *)&local_148,L"FCbFieldView::As[Type](%s) -> GetError()");
  if (EVar5 != TypeError) {
    pcVar2 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl((FString *)&local_128,L"%s: The two values are not equal.");
    (*pcVar2)(this,&local_128);
    if ((FString *)local_128.Id != (FString *)0x0) {
      FMemory::Free((void *)local_128.Id);
    }
  }
  if (local_148.Data != (wchar_t *)0x0) {
    FMemory::Free(local_148.Data);
  }
  if ((code *)local_98._16_8_ != (code *)0x0) {
    pppuVar10 = &local_78;
    if (local_60 != (undefined ***)0x0) {
      pppuVar10 = local_60;
    }
    (*(code *)(*pppuVar10)[2])();
  }
  local_128.Id = (ulong64)&local_104;
  local_104 = 0x201;
  local_102 = 3;
  local_128.Data.Data = &DAT_00000003;
  pTVar9 = FCbFieldView::AsCustom
                     (&local_f8,(TMemoryView<void_const_> *)&local_c8,0,
                      (TMemoryView<void_const_> *)&local_128);
  if ((pTVar9->Size != 3) || (pTVar9->Data != &local_104)) {
    pcVar2 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl((FString *)&local_128,L"%s: The two values are not equal.");
    (*pcVar2)(this,&local_128,0);
    if ((undefined2 *)local_128.Id != (undefined2 *)0x0) {
      FMemory::Free((void *)local_128.Id);
    }
  }
  return true;
}

// GetBeautifiedTestName @ 141a3fcb0

FString * __thiscall
FCbFieldCustomByIdTest::GetBeautifiedTestName
          (FCbFieldCustomByIdTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"System.Core.Serialization.CbField.CustomById");
  return __return_storage_ptr__;
}

