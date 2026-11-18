// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 14

// GetTestFlags @ 141cc43f0

EAutomationTestFlags __thiscall FCbWriterIntegerTest::GetTestFlags(FCbWriterIntegerTest *this)

{
  return this->TestFlags;
}

// IsStressTest @ 141cc4400

bool __thiscall FCbWriterIntegerTest::IsStressTest(FCbWriterIntegerTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141cc4410

uint __thiscall FCbWriterIntegerTest::GetRequiredDeviceNum(FCbWriterIntegerTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 141cc4420

FString * __thiscall
FCbWriterIntegerTest::GetTestSourceFileName
          (FCbWriterIntegerTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Serialization\\CompactBinaryWriterTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141cc4450

int __thiscall FCbWriterIntegerTest::GetTestSourceFileLine(FCbWriterIntegerTest *this)

{
  return 0x165;
}

// GetTests @ 141cc4460

/* WARNING: Removing unreachable block (ram,0x000141cc45de) */

void __thiscall
FCbWriterIntegerTest::GetTests
          (FCbWriterIntegerTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
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

// RunTest @ 141cc4600

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall FCbWriterIntegerTest::RunTest(FCbWriterIntegerTest *this,FString *param_1)

{
  bool bVar1;
  undefined1 auStack_188 [32];
  FCbWriterIntegerTest *local_168;
  FCbWriterIntegerTest *local_160;
  FCbWriterIntegerTest *local_158;
  FCbWriterIntegerTest *local_150;
  FCbWriter local_148 [7];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_188;
  FCbWriter::FCbWriter(local_148,0x100);
  local_168 = this;
  local_160 = this;
  local_158 = this;
  local_150 = this;
  `FCbWriterIntegerTest::TestBody'::__l2::<lambda_2>::operator()(&local_168,0);
  `FCbWriterIntegerTest::TestBody'::__l2::<lambda_2>::operator()(&local_168,0x7f);
  `FCbWriterIntegerTest::TestBody'::__l2::<lambda_2>::operator()(&local_168,0x80);
  `FCbWriterIntegerTest::TestBody'::__l2::<lambda_2>::operator()(&local_168,0xff);
  `FCbWriterIntegerTest::TestBody'::__l2::<lambda_2>::operator()(&local_168,0x100);
  `FCbWriterIntegerTest::TestBody'::__l2::<lambda_2>::operator()(&local_168,0x7fff);
  `FCbWriterIntegerTest::TestBody'::__l2::<lambda_2>::operator()(&local_168,0x8000);
  `FCbWriterIntegerTest::TestBody'::__l2::<lambda_2>::operator()(&local_168,0xffff);
  `FCbWriterIntegerTest::TestBody'::__l2::<lambda_2>::operator()(&local_168,0x10000);
  `FCbWriterIntegerTest::TestBody'::__l2::<lambda_2>::operator()(&local_168,0x7fffffff);
  `FCbWriterIntegerTest::TestBody'::__l2::<lambda_2>::operator()(&local_168,0x80000000);
  `FCbWriterIntegerTest::TestBody'::__l2::<lambda_2>::operator()(&local_168,0xffffffff);
  `FCbWriterIntegerTest::TestBody'::__l2::<lambda_4>::operator()(&local_150,0x100000000);
  `FCbWriterIntegerTest::TestBody'::__l2::<lambda_4>::operator()(&local_150,0x7fffffffffffffff);
  `FCbWriterIntegerTest::TestBody'::__l2::<lambda_4>::operator()(&local_150,0x8000000000000000);
  `FCbWriterIntegerTest::TestBody'::__l2::<lambda_4>::operator()(&local_150,0xffffffffffffffff);
  `FCbWriterIntegerTest::TestBody'::__l2::<lambda_1>::operator()(&local_160,1);
  `FCbWriterIntegerTest::TestBody'::__l2::<lambda_1>::operator()(&local_160,0x80);
  `FCbWriterIntegerTest::TestBody'::__l2::<lambda_1>::operator()(&local_160,0x81);
  `FCbWriterIntegerTest::TestBody'::__l2::<lambda_1>::operator()(&local_160,0x8000);
  `FCbWriterIntegerTest::TestBody'::__l2::<lambda_1>::operator()(&local_160,0x8001);
  `FCbWriterIntegerTest::TestBody'::__l2::<lambda_1>::operator()(&local_160,0x7fffffff);
  `FCbWriterIntegerTest::TestBody'::__l2::<lambda_1>::operator()(&local_160,-0x80000000);
  `FCbWriterIntegerTest::TestBody'::__l2::<lambda_1>::operator()(&local_160,-0x7fffffff);
  `FCbWriterIntegerTest::TestBody'::__l2::<lambda_3>::operator()(&local_158,0x100000000);
  `FCbWriterIntegerTest::TestBody'::__l2::<lambda_3>::operator()(&local_158,-0x8000000000000000);
  `FCbWriterIntegerTest::TestBody'::__l2::<lambda_3>::operator()(&local_158,0x7fffffffffffffff);
  `FCbWriterIntegerTest::TestBody'::__l2::<lambda_3>::operator()(&local_158,-0x7fffffffffffffff);
  `FCbWriterIntegerTest::TestBody'::__l2::<lambda_3>::operator()(&local_158,-1);
  FCbWriter::~FCbWriter(local_148);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 141cc4860

FString * __thiscall
FCbWriterIntegerTest::GetBeautifiedTestName
          (FCbWriterIntegerTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FCbWriterIntegerTest @ 141ce57f0

FCbWriterIntegerTest * __thiscall
FCbWriterIntegerTest::FCbWriterIntegerTest(FCbWriterIntegerTest *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7FCbWriterIntegerTest__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[ApplicationContextMask][SmokeFilter]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"System::Core::Serialization::CbWriter::Integer");
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

// operator() @ 141cf2c90

void __thiscall
`FCbWriterIntegerTest::TestBody'::__l2::<lambda_1>::operator()(void *this,int param_1)

{
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> TVar1;
  ECbValidateError EVar2;
  FCbFieldIterator *pFVar3;
  FAutomationTestFramework *pFVar4;
  ulong64 uVar5;
  FAutomationTestBase *pFVar6;
  code *pcVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_68 [16];
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> local_58 [2];
  FCbFieldView local_48;
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> local_38;
  FCbWriter local_30;
  
  FCbWriter::FCbWriter(&local_30);
  FCbWriter::Reset(&local_30);
  FCbWriter::AddInteger(&local_30,param_1);
  pFVar3 = FCbWriter::Save(&local_30,(FCbFieldIterator *)local_68);
  pFVar9 = (FScriptContainerElement *)0x0;
  local_48.TypeWithFlags = pFVar3->field_0x0;
  local_48.Error = pFVar3->field_0x1;
  local_48._2_2_ = *(undefined2 *)&pFVar3->field_0x2;
  local_48.NameLen = *(uint *)&pFVar3->field_0x4;
  local_48.Value = *(void **)&pFVar3->field_0x8;
  local_38.Owner = *(FBufferOwner **)&pFVar3->field_0x10;
  *(undefined8 *)&pFVar3->field_0x10 = 0;
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(local_58);
  TVar1.Owner = local_38.Owner;
  pFVar6 = *(FAutomationTestBase **)this;
  pFVar8 = pFVar9;
  if (local_38.Owner != (FBufferOwner *)0x0) {
    if (((ulonglong)(local_38.Owner)->ReferenceCountsAndFlags >> 0x3c & 4) == 0) {
      (**(code **)((local_38.Owner)->_padding_ + 8))(local_38.Owner);
    }
    pFVar8 = (FScriptContainerElement *)(TVar1.Owner)->Size;
  }
  TVar1.Owner = local_38.Owner;
  if (local_38.Owner != (FBufferOwner *)0x0) {
    if (((ulonglong)(local_38.Owner)->ReferenceCountsAndFlags >> 0x3c & 4) == 0) {
      (**(code **)((local_38.Owner)->_padding_ + 8))(local_38.Owner);
    }
    pFVar9 = (TVar1.Owner)->Data;
  }
  local_68._0_8_ = pFVar9;
  local_68._8_8_ = pFVar8;
  EVar2 = ValidateCompactBinary((TMemoryView<void_const_> *)local_68,All,HasFieldType);
  if (EVar2 == None) {
    pFVar4 = FAutomationTestFramework::Get();
    pFVar6 = pFVar4->CurrentTest;
    uVar5 = FCbFieldView::AsInteger(&local_48,0,(FIntegerParams)0x3f);
    FAutomationTestBase::TestEqual(pFVar6,L"FCbWriter(Integer, Int32) Value",(int)uVar5,param_1);
    if (local_48.Error == None) goto LAB_141cf2e10;
    pFVar4 = FAutomationTestFramework::Get();
    pFVar6 = pFVar4->CurrentTest;
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::FString((FString *)local_68,L"FCbWriter(Integer, Int32) Error");
  }
  else {
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::PrintfImpl((FString *)local_68,L"%s: The two values are not equal.");
  }
  (*pcVar7)(pFVar6,local_68,0);
  if ((FScriptContainerElement *)local_68._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_68._0_8_);
  }
LAB_141cf2e10:
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_38);
  FCbWriter::~FCbWriter(&local_30);
  return;
}

// operator() @ 141cf6100

void __thiscall
`FCbWriterIntegerTest::TestBody'::__l2::<lambda_2>::operator()(void *this,uint param_1)

{
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> TVar1;
  ECbValidateError EVar2;
  FCbFieldIterator *pFVar3;
  FAutomationTestFramework *pFVar4;
  ulong64 uVar5;
  FAutomationTestBase *pFVar6;
  code *pcVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_78 [16];
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> local_68 [2];
  FCbFieldView local_58;
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> local_48;
  FCbWriter local_40;
  
  FCbWriter::FCbWriter(&local_40);
  FCbWriter::Reset(&local_40);
  FCbWriter::AddInteger(&local_40,param_1);
  pFVar3 = FCbWriter::Save(&local_40,(FCbFieldIterator *)local_78);
  pFVar9 = (FScriptContainerElement *)0x0;
  local_58.TypeWithFlags = pFVar3->field_0x0;
  local_58.Error = pFVar3->field_0x1;
  local_58._2_2_ = *(undefined2 *)&pFVar3->field_0x2;
  local_58.NameLen = *(uint *)&pFVar3->field_0x4;
  local_58.Value = *(void **)&pFVar3->field_0x8;
  local_48.Owner = *(FBufferOwner **)&pFVar3->field_0x10;
  *(undefined8 *)&pFVar3->field_0x10 = 0;
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(local_68);
  TVar1.Owner = local_48.Owner;
  pFVar6 = *(FAutomationTestBase **)this;
  pFVar8 = pFVar9;
  if (local_48.Owner != (FBufferOwner *)0x0) {
    if (((ulonglong)(local_48.Owner)->ReferenceCountsAndFlags >> 0x3c & 4) == 0) {
      (**(code **)((local_48.Owner)->_padding_ + 8))(local_48.Owner);
    }
    pFVar8 = (FScriptContainerElement *)(TVar1.Owner)->Size;
  }
  TVar1.Owner = local_48.Owner;
  if (local_48.Owner != (FBufferOwner *)0x0) {
    if (((ulonglong)(local_48.Owner)->ReferenceCountsAndFlags >> 0x3c & 4) == 0) {
      (**(code **)((local_48.Owner)->_padding_ + 8))(local_48.Owner);
    }
    pFVar9 = (TVar1.Owner)->Data;
  }
  local_78._0_8_ = pFVar9;
  local_78._8_8_ = pFVar8;
  EVar2 = ValidateCompactBinary((TMemoryView<void_const_> *)local_78,All,HasFieldType);
  if (EVar2 == None) {
    pFVar4 = FAutomationTestFramework::Get();
    pFVar6 = pFVar4->CurrentTest;
    uVar5 = FCbFieldView::AsInteger(&local_58,0,(FIntegerParams)0x40);
    if ((uint)uVar5 != param_1) {
      pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
      ::FString::PrintfImpl((FString *)local_78,L"%s: The two values are not equal.");
      (*pcVar7)(pFVar6,local_78,0);
      if ((FScriptContainerElement *)local_78._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_78._0_8_);
      }
    }
    if (local_58.Error == None) goto LAB_141cf629b;
    pFVar4 = FAutomationTestFramework::Get();
    pFVar6 = pFVar4->CurrentTest;
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::FString((FString *)local_78,L"FCbWriter(Integer, UInt32) Error");
  }
  else {
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::PrintfImpl((FString *)local_78,L"%s: The two values are not equal.");
  }
  (*pcVar7)(pFVar6,local_78,0);
  if ((FScriptContainerElement *)local_78._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_78._0_8_);
  }
LAB_141cf629b:
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_48);
  FCbWriter::~FCbWriter(&local_40);
  return;
}

// operator() @ 141cf6960

void __thiscall
`FCbWriterIntegerTest::TestBody'::__l2::<lambda_3>::operator()(void *this,long64 param_1)

{
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> TVar1;
  ECbValidateError EVar2;
  FCbFieldIterator *pFVar3;
  FAutomationTestFramework *pFVar4;
  ulong64 uVar5;
  FAutomationTestBase *pFVar6;
  code *pcVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_68 [16];
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> local_58 [2];
  FCbFieldView local_48;
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> local_38;
  FCbWriter local_30;
  
  FCbWriter::FCbWriter(&local_30);
  FCbWriter::Reset(&local_30);
  FCbWriter::AddInteger(&local_30,param_1);
  pFVar3 = FCbWriter::Save(&local_30,(FCbFieldIterator *)local_68);
  pFVar9 = (FScriptContainerElement *)0x0;
  local_48.TypeWithFlags = pFVar3->field_0x0;
  local_48.Error = pFVar3->field_0x1;
  local_48._2_2_ = *(undefined2 *)&pFVar3->field_0x2;
  local_48.NameLen = *(uint *)&pFVar3->field_0x4;
  local_48.Value = *(void **)&pFVar3->field_0x8;
  local_38.Owner = *(FBufferOwner **)&pFVar3->field_0x10;
  *(undefined8 *)&pFVar3->field_0x10 = 0;
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(local_58);
  TVar1.Owner = local_38.Owner;
  pFVar6 = *(FAutomationTestBase **)this;
  pFVar8 = pFVar9;
  if (local_38.Owner != (FBufferOwner *)0x0) {
    if (((ulonglong)(local_38.Owner)->ReferenceCountsAndFlags >> 0x3c & 4) == 0) {
      (**(code **)((local_38.Owner)->_padding_ + 8))(local_38.Owner);
    }
    pFVar8 = (FScriptContainerElement *)(TVar1.Owner)->Size;
  }
  TVar1.Owner = local_38.Owner;
  if (local_38.Owner != (FBufferOwner *)0x0) {
    if (((ulonglong)(local_38.Owner)->ReferenceCountsAndFlags >> 0x3c & 4) == 0) {
      (**(code **)((local_38.Owner)->_padding_ + 8))(local_38.Owner);
    }
    pFVar9 = (TVar1.Owner)->Data;
  }
  local_68._0_8_ = pFVar9;
  local_68._8_8_ = pFVar8;
  EVar2 = ValidateCompactBinary((TMemoryView<void_const_> *)local_68,All,HasFieldType);
  if (EVar2 == None) {
    pFVar4 = FAutomationTestFramework::Get();
    pFVar6 = pFVar4->CurrentTest;
    uVar5 = FCbFieldView::AsInteger(&local_48,0,(FIntegerParams)0x7f);
    FAutomationTestBase::TestEqual(pFVar6,L"FCbWriter(Integer, Int64) Value",uVar5,param_1);
    if (local_48.Error == None) goto LAB_141cf6ae2;
    pFVar4 = FAutomationTestFramework::Get();
    pFVar6 = pFVar4->CurrentTest;
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::FString((FString *)local_68,L"FCbWriter(Integer, Int64) Error");
  }
  else {
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::PrintfImpl((FString *)local_68,L"%s: The two values are not equal.");
  }
  (*pcVar7)(pFVar6,local_68,0);
  if ((FScriptContainerElement *)local_68._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_68._0_8_);
  }
LAB_141cf6ae2:
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_38);
  FCbWriter::~FCbWriter(&local_30);
  return;
}

// operator() @ 141cf6c60

void __thiscall
`FCbWriterIntegerTest::TestBody'::__l2::<lambda_4>::operator()(void *this,ulong64 param_1)

{
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> TVar1;
  ECbValidateError EVar2;
  FCbFieldIterator *pFVar3;
  FAutomationTestFramework *pFVar4;
  ulong64 uVar5;
  FAutomationTestBase *pFVar6;
  code *pcVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_68 [16];
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> local_58 [2];
  FCbFieldView local_48;
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> local_38;
  FCbWriter local_30;
  
  FCbWriter::FCbWriter(&local_30);
  FCbWriter::Reset(&local_30);
  FCbWriter::AddInteger(&local_30,param_1);
  pFVar3 = FCbWriter::Save(&local_30,(FCbFieldIterator *)local_68);
  pFVar9 = (FScriptContainerElement *)0x0;
  local_48.TypeWithFlags = pFVar3->field_0x0;
  local_48.Error = pFVar3->field_0x1;
  local_48._2_2_ = *(undefined2 *)&pFVar3->field_0x2;
  local_48.NameLen = *(uint *)&pFVar3->field_0x4;
  local_48.Value = *(void **)&pFVar3->field_0x8;
  local_38.Owner = *(FBufferOwner **)&pFVar3->field_0x10;
  *(undefined8 *)&pFVar3->field_0x10 = 0;
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(local_58);
  TVar1.Owner = local_38.Owner;
  pFVar6 = *(FAutomationTestBase **)this;
  pFVar8 = pFVar9;
  if (local_38.Owner != (FBufferOwner *)0x0) {
    if (((ulonglong)(local_38.Owner)->ReferenceCountsAndFlags >> 0x3c & 4) == 0) {
      (**(code **)((local_38.Owner)->_padding_ + 8))(local_38.Owner);
    }
    pFVar8 = (FScriptContainerElement *)(TVar1.Owner)->Size;
  }
  TVar1.Owner = local_38.Owner;
  if (local_38.Owner != (FBufferOwner *)0x0) {
    if (((ulonglong)(local_38.Owner)->ReferenceCountsAndFlags >> 0x3c & 4) == 0) {
      (**(code **)((local_38.Owner)->_padding_ + 8))(local_38.Owner);
    }
    pFVar9 = (TVar1.Owner)->Data;
  }
  local_68._0_8_ = pFVar9;
  local_68._8_8_ = pFVar8;
  EVar2 = ValidateCompactBinary((TMemoryView<void_const_> *)local_68,All,HasFieldType);
  if (EVar2 == None) {
    pFVar4 = FAutomationTestFramework::Get();
    pFVar6 = pFVar4->CurrentTest;
    uVar5 = FCbFieldView::AsInteger(&local_48,0,(FIntegerParams)0x80);
    FAutomationTestBase::TestEqual(pFVar6,L"FCbWriter(Integer, UInt64) Value",uVar5,param_1);
    if (local_48.Error == None) goto LAB_141cf6de2;
    pFVar4 = FAutomationTestFramework::Get();
    pFVar6 = pFVar4->CurrentTest;
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::FString((FString *)local_68,L"FCbWriter(Integer, UInt64) Error");
  }
  else {
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::PrintfImpl((FString *)local_68,L"%s: The two values are not equal.");
  }
  (*pcVar7)(pFVar6,local_68,0);
  if ((FScriptContainerElement *)local_68._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_68._0_8_);
  }
LAB_141cf6de2:
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_38);
  FCbWriter::~FCbWriter(&local_30);
  return;
}

// TestBody @ 141d14c00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FCbWriterIntegerTest::TestBody(FCbWriterIntegerTest *this,FString *param_1)

{
  undefined1 auStack_188 [32];
  FCbWriterIntegerTest *local_168;
  FCbWriterIntegerTest *local_160;
  FCbWriterIntegerTest *local_158;
  FCbWriterIntegerTest *local_150;
  FCbWriter local_148 [7];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_188;
  FCbWriter::FCbWriter(local_148,0x100);
  local_168 = this;
  local_160 = this;
  local_158 = this;
  local_150 = this;
  `FCbWriterIntegerTest::TestBody'::__l2::<lambda_2>::operator()(&local_168,0);
  `FCbWriterIntegerTest::TestBody'::__l2::<lambda_2>::operator()(&local_168,0x7f);
  `FCbWriterIntegerTest::TestBody'::__l2::<lambda_2>::operator()(&local_168,0x80);
  `FCbWriterIntegerTest::TestBody'::__l2::<lambda_2>::operator()(&local_168,0xff);
  `FCbWriterIntegerTest::TestBody'::__l2::<lambda_2>::operator()(&local_168,0x100);
  `FCbWriterIntegerTest::TestBody'::__l2::<lambda_2>::operator()(&local_168,0x7fff);
  `FCbWriterIntegerTest::TestBody'::__l2::<lambda_2>::operator()(&local_168,0x8000);
  `FCbWriterIntegerTest::TestBody'::__l2::<lambda_2>::operator()(&local_168,0xffff);
  `FCbWriterIntegerTest::TestBody'::__l2::<lambda_2>::operator()(&local_168,0x10000);
  `FCbWriterIntegerTest::TestBody'::__l2::<lambda_2>::operator()(&local_168,0x7fffffff);
  `FCbWriterIntegerTest::TestBody'::__l2::<lambda_2>::operator()(&local_168,0x80000000);
  `FCbWriterIntegerTest::TestBody'::__l2::<lambda_2>::operator()(&local_168,0xffffffff);
  `FCbWriterIntegerTest::TestBody'::__l2::<lambda_4>::operator()(&local_150,0x100000000);
  `FCbWriterIntegerTest::TestBody'::__l2::<lambda_4>::operator()(&local_150,0x7fffffffffffffff);
  `FCbWriterIntegerTest::TestBody'::__l2::<lambda_4>::operator()(&local_150,0x8000000000000000);
  `FCbWriterIntegerTest::TestBody'::__l2::<lambda_4>::operator()(&local_150,0xffffffffffffffff);
  `FCbWriterIntegerTest::TestBody'::__l2::<lambda_1>::operator()(&local_160,1);
  `FCbWriterIntegerTest::TestBody'::__l2::<lambda_1>::operator()(&local_160,0x80);
  `FCbWriterIntegerTest::TestBody'::__l2::<lambda_1>::operator()(&local_160,0x81);
  `FCbWriterIntegerTest::TestBody'::__l2::<lambda_1>::operator()(&local_160,0x8000);
  `FCbWriterIntegerTest::TestBody'::__l2::<lambda_1>::operator()(&local_160,0x8001);
  `FCbWriterIntegerTest::TestBody'::__l2::<lambda_1>::operator()(&local_160,0x7fffffff);
  `FCbWriterIntegerTest::TestBody'::__l2::<lambda_1>::operator()(&local_160,-0x80000000);
  `FCbWriterIntegerTest::TestBody'::__l2::<lambda_1>::operator()(&local_160,-0x7fffffff);
  `FCbWriterIntegerTest::TestBody'::__l2::<lambda_3>::operator()(&local_158,0x100000000);
  `FCbWriterIntegerTest::TestBody'::__l2::<lambda_3>::operator()(&local_158,-0x8000000000000000);
  `FCbWriterIntegerTest::TestBody'::__l2::<lambda_3>::operator()(&local_158,0x7fffffffffffffff);
  `FCbWriterIntegerTest::TestBody'::__l2::<lambda_3>::operator()(&local_158,-0x7fffffffffffffff);
  `FCbWriterIntegerTest::TestBody'::__l2::<lambda_3>::operator()(&local_158,-1);
  FCbWriter::~FCbWriter(local_148);
  return;
}

