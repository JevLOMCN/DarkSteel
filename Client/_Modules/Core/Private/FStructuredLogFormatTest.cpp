// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 13

// GetTestFlags @ 141bc9950

EAutomationTestFlags __thiscall
UE::FStructuredLogFormatTest::GetTestFlags(FStructuredLogFormatTest *this)

{
  return this->TestFlags;
}

// IsStressTest @ 141bc9960

bool __thiscall UE::FStructuredLogFormatTest::IsStressTest(FStructuredLogFormatTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141bc9970

uint __thiscall UE::FStructuredLogFormatTest::GetRequiredDeviceNum(FStructuredLogFormatTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 141bc9980

FString * __thiscall
UE::FStructuredLogFormatTest::GetTestSourceFileName
          (FStructuredLogFormatTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Logging\\StructuredLogFormatTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141bc99b0

int __thiscall UE::FStructuredLogFormatTest::GetTestSourceFileLine(FStructuredLogFormatTest *this)

{
  return 0x15;
}

// GetTests @ 141bc99c0

/* WARNING: Removing unreachable block (ram,0x000141bc9b3e) */

void __thiscall
UE::FStructuredLogFormatTest::GetTests
          (FStructuredLogFormatTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
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

// RunTest @ 141bc9b60

bool __thiscall
UE::FStructuredLogFormatTest::RunTest(FStructuredLogFormatTest *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 141bc9b90

FString * __thiscall
UE::FStructuredLogFormatTest::GetBeautifiedTestName
          (FStructuredLogFormatTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FStructuredLogFormatTest @ 141be92e0

FStructuredLogFormatTest * __thiscall
UE::FStructuredLogFormatTest::FStructuredLogFormatTest
          (FStructuredLogFormatTest *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7FStructuredLogFormatTest_UE__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[Core][SmokeFilter]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"Core::Logging::StructuredLogFormat");
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
  ::FString::FString(&local_18,"[Core][SmokeFilter]");
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

// operator() @ 141bee3f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FCbFieldIterator * __thiscall
`UE::FStructuredLogFormatTest::TestBody'::__l2::<lambda_1>::operator()
          (void *this,FCbFieldIterator *__return_storage_ptr__)

{
  void *pvVar1;
  FIoHash *pFVar2;
  FGuid *pFVar3;
  FCbObjectId *pFVar4;
  FText *pFVar5;
  undefined1 auStack_4b8 [32];
  TMemoryView<void_const_> local_498;
  TStringView<char8_t> local_488;
  FCbWriter local_478 [26];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_4b8;
  FCbWriter::FCbWriter(local_478,0x400);
  local_488.Size = 6;
  local_488.DataPtr = "Object";
  local_498.Data = "Object";
  local_498.Size._0_4_ = 6;
  local_498.Size._4_4_ = local_488._12_4_;
  FCbWriter::SetName(local_478,(TStringView<char8_t> *)&local_498);
  FCbWriter::BeginObject(local_478);
  local_488.Size = 1;
  local_488.DataPtr = "X";
  local_498.Data = &s_X;
  local_498.Size._0_4_ = 1;
  local_498.Size._4_4_ = local_488._12_4_;
  FCbWriter::SetName(local_478,(TStringView<char8_t> *)&local_498);
  FCbWriter::AddInteger(local_478,1);
  local_488.Size = 1;
  local_488.DataPtr = "Y";
  local_498.Data = "Y";
  local_498.Size._0_4_ = 1;
  local_498.Size._4_4_ = local_488._12_4_;
  FCbWriter::SetName(local_478,(TStringView<char8_t> *)&local_498);
  FCbWriter::AddInteger(local_478,2);
  local_488.Size = 1;
  local_488.DataPtr = "Z";
  local_498.Data = "Z";
  local_498.Size._0_4_ = 1;
  local_498.Size._4_4_ = local_488._12_4_;
  FCbWriter::SetName(local_478,(TStringView<char8_t> *)&local_498);
  FCbWriter::AddInteger(local_478,3);
  FCbWriter::EndObject(local_478);
  local_488.Size = 5;
  local_488.DataPtr = "Array";
  local_498.Data = "Array";
  local_498.Size._0_4_ = 5;
  local_498.Size._4_4_ = local_488._12_4_;
  FCbWriter::SetName(local_478,(TStringView<char8_t> *)&local_498);
  FCbWriter::BeginArray(local_478);
  FCbWriter::AddInteger(local_478,1);
  FCbWriter::AddInteger(local_478,2);
  FCbWriter::AddInteger(local_478,3);
  FCbWriter::EndArray(local_478);
  local_488.Size = 4;
  local_488.DataPtr = "Null";
  local_498.Data = "Null";
  local_498.Size._0_4_ = 4;
  local_498.Size._4_4_ = local_488._12_4_;
  FCbWriter::SetName(local_478,(TStringView<char8_t> *)&local_498);
  FCbWriter::AddNull(local_478);
  pvVar1 = *(void **)this;
  local_488.DataPtr = "Binary";
  local_488.Size = 6;
  local_498.Data = "Binary";
  local_498.Size._0_4_ = 6;
  local_498.Size._4_4_ = local_488._12_4_;
  FCbWriter::SetName(local_478,(TStringView<char8_t> *)&local_498);
  FCbWriter::AddBinary(local_478,pvVar1,0x10);
  local_488.Size = 6;
  local_498.Data = "\"Quote\" with 4 words.";
  local_498.Size._0_4_ = 0x15;
  local_488.DataPtr = "String";
  FCbWriter::SetName(local_478,&local_488);
  FCbWriter::AddString(local_478,(TStringView<char8_t> *)&local_498);
  local_498.Size._0_4_ = 0xf;
  local_498.Data = "IntegerNegative";
  FCbWriter::SetName(local_478,(TStringView<char8_t> *)&local_498);
  FCbWriter::AddInteger(local_478,-0x40);
  local_498.Size._0_4_ = 0xf;
  local_498.Data = "IntegerPositive";
  FCbWriter::SetName(local_478,(TStringView<char8_t> *)&local_498);
  FCbWriter::AddInteger(local_478,0x3f);
  local_498.Size._0_4_ = 5;
  local_498.Data = "Float";
  FCbWriter::SetName(local_478,(TStringView<char8_t> *)&local_498);
  FCbWriter::AddFloat(local_478,__real_43004000);
  local_498.Size._0_4_ = 6;
  local_498.Data = "Double";
  FCbWriter::SetName(local_478,(TStringView<char8_t> *)&local_498);
  FCbWriter::AddFloat(local_478,__real_405edd2f1a9fbe77);
  local_498.Size._0_4_ = 5;
  local_498.Data = "False";
  FCbWriter::SetName(local_478,(TStringView<char8_t> *)&local_498);
  FCbWriter::AddBool(local_478,false);
  local_498.Size._0_4_ = 4;
  local_498.Data = "True";
  FCbWriter::SetName(local_478,(TStringView<char8_t> *)&local_498);
  FCbWriter::AddBool(local_478,true);
  pFVar2 = *(FIoHash **)((longlong)this + 8);
  local_498.Size._0_4_ = 0x10;
  local_498.Data = "ObjectAttachment";
  FCbWriter::SetName(local_478,(TStringView<char8_t> *)&local_498);
  FCbWriter::AddObjectAttachment(local_478,pFVar2);
  pFVar2 = *(FIoHash **)((longlong)this + 0x10);
  local_498.Size._0_4_ = 0x10;
  local_498.Data = "BinaryAttachment";
  FCbWriter::SetName(local_478,(TStringView<char8_t> *)&local_498);
  FCbWriter::AddBinaryAttachment(local_478,pFVar2);
  pFVar2 = *(FIoHash **)((longlong)this + 0x18);
  local_498.Size._0_4_ = 4;
  local_498.Data = "Hash";
  FCbWriter::SetName(local_478,(TStringView<char8_t> *)&local_498);
  FCbWriter::AddHash(local_478,pFVar2);
  pFVar3 = *(FGuid **)((longlong)this + 0x20);
  local_498.Size._0_4_ = 4;
  local_498.Data = "Uuid";
  FCbWriter::SetName(local_478,(TStringView<char8_t> *)&local_498);
  FCbWriter::AddUuid(local_478,pFVar3);
  local_498.Size._0_4_ = 8;
  local_498.Data = "DateTime";
  FCbWriter::AddDateTime
            (local_478,(TStringView<char8_t> *)&local_498,
             (FDateTime)**(long64 **)((longlong)this + 0x28));
  local_498.Size._0_4_ = 8;
  local_498.Data = "TimeSpan";
  FCbWriter::AddTimeSpan
            (local_478,(TStringView<char8_t> *)&local_498,
             (FTimespan)**(long64 **)((longlong)this + 0x30));
  pFVar4 = *(FCbObjectId **)((longlong)this + 0x38);
  local_498.Size._0_4_ = 8;
  local_498.Data = "ObjectId";
  FCbWriter::SetName(local_478,(TStringView<char8_t> *)&local_498);
  FCbWriter::AddObjectId(local_478,pFVar4);
  pvVar1 = *(void **)((longlong)this + 0x40);
  local_498.Size = CONCAT44(local_498.Size._4_4_,10);
  local_498.Data = "CustomById";
  FCbWriter::SetName(local_478,(TStringView<char8_t> *)&local_498);
  local_498.Size = 8;
  local_498.Data = pvVar1;
  FCbWriter::AddCustom(local_478,0x80,&local_498);
  pvVar1 = *(void **)((longlong)this + 0x48);
  local_498.Size = CONCAT44(local_498.Size._4_4_,0xc);
  local_488.DataPtr = "Custom";
  local_488.Size = 6;
  local_498.Data = "CustomByName";
  FCbWriter::SetName(local_478,(TStringView<char8_t> *)&local_498);
  local_498.Size = 4;
  local_498.Data = pvVar1;
  FCbWriter::AddCustom(local_478,&local_488,&local_498);
  local_498.Size._0_4_ = 10;
  local_498.Data = "ObjectText";
  FCbWriter::SetName(local_478,(TStringView<char8_t> *)&local_498);
  FCbWriter::BeginObject(local_478);
  local_498.Size._0_4_ = 1;
  local_498.Data = &s_X;
  FCbWriter::SetName(local_478,(TStringView<char8_t> *)&local_498);
  FCbWriter::AddInteger(local_478,1);
  local_498.Size._0_4_ = 1;
  local_498.Data = "Y";
  FCbWriter::SetName(local_478,(TStringView<char8_t> *)&local_498);
  FCbWriter::AddInteger(local_478,2);
  local_498.Size._0_4_ = 1;
  local_498.Data = "Z";
  FCbWriter::SetName(local_478,(TStringView<char8_t> *)&local_498);
  FCbWriter::AddInteger(local_478,3);
  local_498.Size = CONCAT44(local_498.Size._4_4_,5);
  local_488.DataPtr = "X=1;Y=2;Z=3";
  local_498.Data = "$text";
  local_488.Size = 0xb;
  FCbWriter::SetName(local_478,(TStringView<char8_t> *)&local_498);
  local_498.Data = local_488.DataPtr;
  local_498.Size._0_4_ = local_488.Size;
  local_498.Size._4_4_ = local_488._12_4_;
  FCbWriter::AddString(local_478,(TStringView<char8_t> *)&local_498);
  FCbWriter::EndObject(local_478);
  local_498.Size._0_4_ = 0x14;
  local_498.Data = "ObjectWithNestedText";
  FCbWriter::SetName(local_478,(TStringView<char8_t> *)&local_498);
  FCbWriter::BeginObject(local_478);
  local_498.Size._0_4_ = 1;
  local_498.Data = &s_X;
  FCbWriter::SetName(local_478,(TStringView<char8_t> *)&local_498);
  FCbWriter::BeginObject(local_478);
  local_498.Size._0_4_ = 6;
  local_498.Data = "$value";
  FCbWriter::SetName(local_478,(TStringView<char8_t> *)&local_498);
  FCbWriter::AddInteger(local_478,1);
  local_498.Size = CONCAT44(local_498.Size._4_4_,5);
  local_498.Data = "$text";
  local_488.DataPtr = "0001";
  local_488.Size = 4;
  FCbWriter::SetName(local_478,(TStringView<char8_t> *)&local_498);
  local_498.Data = local_488.DataPtr;
  local_498.Size._0_4_ = local_488.Size;
  local_498.Size._4_4_ = local_488._12_4_;
  FCbWriter::AddString(local_478,(TStringView<char8_t> *)&local_498);
  FCbWriter::EndObject(local_478);
  local_498.Size._0_4_ = 1;
  local_498.Data = "Y";
  FCbWriter::SetName(local_478,(TStringView<char8_t> *)&local_498);
  FCbWriter::BeginObject(local_478);
  local_498.Size._0_4_ = 6;
  local_498.Data = "$value";
  FCbWriter::SetName(local_478,(TStringView<char8_t> *)&local_498);
  FCbWriter::AddInteger(local_478,2);
  local_498.Size = CONCAT44(local_498.Size._4_4_,5);
  local_498.Data = "$text";
  local_488.DataPtr = "0002";
  local_488.Size = 4;
  FCbWriter::SetName(local_478,(TStringView<char8_t> *)&local_498);
  local_498.Data = local_488.DataPtr;
  local_498.Size._0_4_ = local_488.Size;
  local_498.Size._4_4_ = local_488._12_4_;
  FCbWriter::AddString(local_478,(TStringView<char8_t> *)&local_498);
  FCbWriter::EndObject(local_478);
  local_498.Size._0_4_ = 1;
  local_498.Data = "Z";
  FCbWriter::SetName(local_478,(TStringView<char8_t> *)&local_498);
  FCbWriter::BeginObject(local_478);
  local_498.Size._0_4_ = 6;
  local_498.Data = "$value";
  FCbWriter::SetName(local_478,(TStringView<char8_t> *)&local_498);
  FCbWriter::AddInteger(local_478,3);
  local_498.Size = CONCAT44(local_498.Size._4_4_,5);
  local_498.Data = "$text";
  local_488.DataPtr = "0003";
  local_488.Size = 4;
  FCbWriter::SetName(local_478,(TStringView<char8_t> *)&local_498);
  local_498.Data = local_488.DataPtr;
  local_498.Size._0_4_ = local_488.Size;
  local_498.Size._4_4_ = local_488._12_4_;
  FCbWriter::AddString(local_478,(TStringView<char8_t> *)&local_498);
  FCbWriter::EndObject(local_478);
  FCbWriter::EndObject(local_478);
  local_498.Size._0_4_ = 0x13;
  local_498.Data = "ArrayWithNestedText";
  FCbWriter::SetName(local_478,(TStringView<char8_t> *)&local_498);
  FCbWriter::BeginArray(local_478);
  FCbWriter::BeginObject(local_478);
  local_498.Size._0_4_ = 6;
  local_498.Data = "$value";
  FCbWriter::SetName(local_478,(TStringView<char8_t> *)&local_498);
  FCbWriter::AddInteger(local_478,1);
  local_498.Size = CONCAT44(local_498.Size._4_4_,5);
  local_498.Data = "$text";
  local_488.DataPtr = "0001";
  local_488.Size = 4;
  FCbWriter::SetName(local_478,(TStringView<char8_t> *)&local_498);
  local_498.Data = local_488.DataPtr;
  local_498.Size._0_4_ = local_488.Size;
  local_498.Size._4_4_ = local_488._12_4_;
  FCbWriter::AddString(local_478,(TStringView<char8_t> *)&local_498);
  FCbWriter::EndObject(local_478);
  FCbWriter::BeginObject(local_478);
  local_498.Size._0_4_ = 6;
  local_498.Data = "$value";
  FCbWriter::SetName(local_478,(TStringView<char8_t> *)&local_498);
  FCbWriter::AddInteger(local_478,2);
  local_498.Size = CONCAT44(local_498.Size._4_4_,5);
  local_498.Data = "$text";
  local_488.DataPtr = "0002";
  local_488.Size = 4;
  FCbWriter::SetName(local_478,(TStringView<char8_t> *)&local_498);
  local_498.Data = local_488.DataPtr;
  local_498.Size._0_4_ = local_488.Size;
  local_498.Size._4_4_ = local_488._12_4_;
  FCbWriter::AddString(local_478,(TStringView<char8_t> *)&local_498);
  FCbWriter::EndObject(local_478);
  FCbWriter::BeginObject(local_478);
  local_498.Size._0_4_ = 6;
  local_498.Data = "$value";
  FCbWriter::SetName(local_478,(TStringView<char8_t> *)&local_498);
  FCbWriter::AddInteger(local_478,3);
  local_498.Size = CONCAT44(local_498.Size._4_4_,5);
  local_498.Data = "$text";
  local_488.DataPtr = "0003";
  local_488.Size = 4;
  FCbWriter::SetName(local_478,(TStringView<char8_t> *)&local_498);
  local_498.Data = local_488.DataPtr;
  local_498.Size._0_4_ = local_488.Size;
  local_498.Size._4_4_ = local_488._12_4_;
  FCbWriter::AddString(local_478,(TStringView<char8_t> *)&local_498);
  FCbWriter::EndObject(local_478);
  FCbWriter::EndArray(local_478);
  local_498.Size._0_4_ = 0xc;
  local_498.Data = "ObjectFormat";
  FCbWriter::SetName(local_478,(TStringView<char8_t> *)&local_498);
  FCbWriter::BeginObject(local_478);
  local_498.Size._0_4_ = 1;
  local_498.Data = &s_X;
  FCbWriter::SetName(local_478,(TStringView<char8_t> *)&local_498);
  FCbWriter::AddInteger(local_478,1);
  local_498.Size._0_4_ = 1;
  local_498.Data = "Y";
  FCbWriter::SetName(local_478,(TStringView<char8_t> *)&local_498);
  FCbWriter::AddInteger(local_478,2);
  local_498.Size._0_4_ = 1;
  local_498.Data = "Z";
  FCbWriter::SetName(local_478,(TStringView<char8_t> *)&local_498);
  FCbWriter::AddInteger(local_478,3);
  local_498.Size = CONCAT44(local_498.Size._4_4_,7);
  local_498.Data = "$format";
  local_488.DataPtr = "X={X};Y={Y};Z={Z}";
  local_488.Size = 0x11;
  FCbWriter::SetName(local_478,(TStringView<char8_t> *)&local_498);
  local_498.Data = local_488.DataPtr;
  local_498.Size._0_4_ = local_488.Size;
  local_498.Size._4_4_ = local_488._12_4_;
  FCbWriter::AddString(local_478,(TStringView<char8_t> *)&local_498);
  FCbWriter::EndObject(local_478);
  local_498.Size._0_4_ = 0x16;
  local_498.Data = "ObjectWithNestedFormat";
  FCbWriter::SetName(local_478,(TStringView<char8_t> *)&local_498);
  FCbWriter::BeginObject(local_478);
  local_498.Size._0_4_ = 5;
  local_498.Data = "Point";
  FCbWriter::SetName(local_478,(TStringView<char8_t> *)&local_498);
  FCbWriter::BeginObject(local_478);
  local_498.Size._0_4_ = 1;
  local_498.Data = &s_X;
  FCbWriter::SetName(local_478,(TStringView<char8_t> *)&local_498);
  FCbWriter::AddInteger(local_478,1);
  local_498.Size._0_4_ = 1;
  local_498.Data = "Y";
  FCbWriter::SetName(local_478,(TStringView<char8_t> *)&local_498);
  FCbWriter::AddInteger(local_478,2);
  local_498.Size._0_4_ = 1;
  local_498.Data = "Z";
  FCbWriter::SetName(local_478,(TStringView<char8_t> *)&local_498);
  FCbWriter::AddInteger(local_478,3);
  local_498.Size = CONCAT44(local_498.Size._4_4_,7);
  local_498.Data = "$format";
  local_488.DataPtr = "X={X};Y={Y};Z={Z}";
  local_488.Size = 0x11;
  FCbWriter::SetName(local_478,(TStringView<char8_t> *)&local_498);
  local_498.Data = local_488.DataPtr;
  local_498.Size._0_4_ = local_488.Size;
  local_498.Size._4_4_ = local_488._12_4_;
  FCbWriter::AddString(local_478,(TStringView<char8_t> *)&local_498);
  FCbWriter::EndObject(local_478);
  local_498.Size = CONCAT44(local_498.Size._4_4_,7);
  local_488.DataPtr = "Target=({Point}); X={Point/X}";
  local_498.Data = "$format";
  local_488.Size = 0x1d;
  FCbWriter::SetName(local_478,(TStringView<char8_t> *)&local_498);
  local_498.Data = local_488.DataPtr;
  local_498.Size._0_4_ = local_488.Size;
  local_498.Size._4_4_ = local_488._12_4_;
  FCbWriter::AddString(local_478,(TStringView<char8_t> *)&local_498);
  FCbWriter::EndObject(local_478);
  local_498.Size._0_4_ = 0x15;
  local_498.Data = "ArrayWithNestedFormat";
  FCbWriter::SetName(local_478,(TStringView<char8_t> *)&local_498);
  FCbWriter::BeginArray(local_478);
  FCbWriter::BeginObject(local_478);
  local_498.Size._0_4_ = 1;
  local_498.Data = &s_X;
  FCbWriter::SetName(local_478,(TStringView<char8_t> *)&local_498);
  FCbWriter::AddInteger(local_478,1);
  local_498.Size = CONCAT44(local_498.Size._4_4_,7);
  local_498.Data = "$format";
  local_488.DataPtr = "X={X}";
  local_488.Size = 5;
  FCbWriter::SetName(local_478,(TStringView<char8_t> *)&local_498);
  local_498.Data = local_488.DataPtr;
  local_498.Size._0_4_ = local_488.Size;
  local_498.Size._4_4_ = local_488._12_4_;
  FCbWriter::AddString(local_478,(TStringView<char8_t> *)&local_498);
  FCbWriter::EndObject(local_478);
  FCbWriter::BeginObject(local_478);
  local_498.Size._0_4_ = 1;
  local_498.Data = "Y";
  FCbWriter::SetName(local_478,(TStringView<char8_t> *)&local_498);
  FCbWriter::AddInteger(local_478,2);
  local_498.Size = CONCAT44(local_498.Size._4_4_,7);
  local_488.DataPtr = "Y={Y}";
  local_498.Data = "$format";
  local_488.Size = 5;
  FCbWriter::SetName(local_478,(TStringView<char8_t> *)&local_498);
  local_498.Data = local_488.DataPtr;
  local_498.Size._0_4_ = local_488.Size;
  local_498.Size._4_4_ = local_488._12_4_;
  FCbWriter::AddString(local_478,(TStringView<char8_t> *)&local_498);
  FCbWriter::EndObject(local_478);
  FCbWriter::BeginObject(local_478);
  local_498.Size._0_4_ = 1;
  local_498.Data = "Z";
  FCbWriter::SetName(local_478,(TStringView<char8_t> *)&local_498);
  FCbWriter::AddInteger(local_478,3);
  local_498.Size = CONCAT44(local_498.Size._4_4_,7);
  local_488.DataPtr = "Z={Z}";
  local_498.Data = "$format";
  local_488.Size = 5;
  FCbWriter::SetName(local_478,(TStringView<char8_t> *)&local_498);
  local_498.Data = local_488.DataPtr;
  local_498.Size = local_488._8_8_;
  FCbWriter::AddString(local_478,(TStringView<char8_t> *)&local_498);
  FCbWriter::EndObject(local_478);
  FCbWriter::EndArray(local_478);
  local_498.Size._0_4_ = 0xf;
  local_498.Data = "ObjectLocFormat";
  FCbWriter::SetName(local_478,(TStringView<char8_t> *)&local_498);
  FCbWriter::BeginObject(local_478);
  local_498.Size._0_4_ = 1;
  local_498.Data = &s_X;
  FCbWriter::SetName(local_478,(TStringView<char8_t> *)&local_498);
  FCbWriter::AddInteger(local_478,1);
  local_498.Size._0_4_ = 1;
  local_498.Data = "Y";
  FCbWriter::SetName(local_478,(TStringView<char8_t> *)&local_498);
  FCbWriter::AddInteger(local_478,2);
  local_498.Size = CONCAT44(local_498.Size._4_4_,1);
  local_498.Data = "Z";
  FCbWriter::SetName(local_478,(TStringView<char8_t> *)&local_498);
  FCbWriter::AddInteger(local_478,3);
  pFVar5 = FText::AsLocalizable_Advanced_LocText
                     ((FText *)&local_498,L"StructuredLogFormatTest",L"ObjectLocFormat",
                      L"X={X};Y={Y};Z={Z}");
  UE::SerializeLogFormat(local_478,pFVar5);
  if (local_498.Data != (longlong *)0x0) {
    (**(code **)(*(longlong *)local_498.Data + 0x10))();
  }
  FCbWriter::EndObject(local_478);
  local_498.Size._0_4_ = 0x19;
  local_498.Data = "ObjectWithNestedLocFormat";
  FCbWriter::SetName(local_478,(TStringView<char8_t> *)&local_498);
  FCbWriter::BeginObject(local_478);
  local_498.Size._0_4_ = 5;
  local_498.Data = "Point";
  FCbWriter::SetName(local_478,(TStringView<char8_t> *)&local_498);
  FCbWriter::BeginObject(local_478);
  local_498.Size._0_4_ = 1;
  local_498.Data = &s_X;
  FCbWriter::SetName(local_478,(TStringView<char8_t> *)&local_498);
  FCbWriter::AddInteger(local_478,1);
  local_498.Size._0_4_ = 1;
  local_498.Data = "Y";
  FCbWriter::SetName(local_478,(TStringView<char8_t> *)&local_498);
  FCbWriter::AddInteger(local_478,2);
  local_498.Size = CONCAT44(local_498.Size._4_4_,1);
  local_498.Data = "Z";
  FCbWriter::SetName(local_478,(TStringView<char8_t> *)&local_498);
  FCbWriter::AddInteger(local_478,3);
  pFVar5 = FText::AsLocalizable_Advanced_LocText
                     ((FText *)&local_498,L"StructuredLogFormatTest",
                      L"ObjectWithNestedLocFormatPoint",L"X={X};Y={Y};Z={Z}");
  UE::SerializeLogFormat(local_478,pFVar5);
  if (local_498.Data != (longlong *)0x0) {
    (**(code **)(*(longlong *)local_498.Data + 0x10))();
  }
  FCbWriter::EndObject(local_478);
  pFVar5 = FText::AsLocalizable_Advanced_LocText
                     ((FText *)&local_498,L"StructuredLogFormatTest",L"ObjectWithNestedLocFormat",
                      L"Target=({Point}); X={Point/X}");
  UE::SerializeLogFormat(local_478,pFVar5);
  if (local_498.Data != (longlong *)0x0) {
    (**(code **)(*(longlong *)local_498.Data + 0x10))();
  }
  FCbWriter::EndObject(local_478);
  local_498.Size._0_4_ = 0x18;
  local_498.Data = "ArrayWithNestedLocFormat";
  FCbWriter::SetName(local_478,(TStringView<char8_t> *)&local_498);
  FCbWriter::BeginArray(local_478);
  FCbWriter::BeginObject(local_478);
  local_498.Size._0_4_ = 1;
  local_498.Data = &s_X;
  FCbWriter::SetName(local_478,(TStringView<char8_t> *)&local_498);
  FCbWriter::AddInteger(local_478,1);
  local_498.Size = CONCAT44(local_498.Size._4_4_,7);
  local_498.Data = "$format";
  local_488.DataPtr = "X={X}";
  local_488.Size = 5;
  FCbWriter::SetName(local_478,(TStringView<char8_t> *)&local_498);
  local_498.Data = local_488.DataPtr;
  local_498.Size._0_4_ = local_488.Size;
  local_498.Size._4_4_ = local_488._12_4_;
  FCbWriter::AddString(local_478,(TStringView<char8_t> *)&local_498);
  FCbWriter::EndObject(local_478);
  FCbWriter::BeginObject(local_478);
  local_498.Size._0_4_ = 1;
  local_498.Data = "Y";
  FCbWriter::SetName(local_478,(TStringView<char8_t> *)&local_498);
  FCbWriter::AddInteger(local_478,2);
  local_498.Size = CONCAT44(local_498.Size._4_4_,7);
  local_488.DataPtr = "Y={Y}";
  local_498.Data = "$format";
  local_488.Size = 5;
  FCbWriter::SetName(local_478,(TStringView<char8_t> *)&local_498);
  local_498.Data = local_488.DataPtr;
  local_498.Size._0_4_ = local_488.Size;
  local_498.Size._4_4_ = local_488._12_4_;
  FCbWriter::AddString(local_478,(TStringView<char8_t> *)&local_498);
  FCbWriter::EndObject(local_478);
  FCbWriter::BeginObject(local_478);
  local_498.Size._0_4_ = 1;
  local_498.Data = "Z";
  FCbWriter::SetName(local_478,(TStringView<char8_t> *)&local_498);
  FCbWriter::AddInteger(local_478,3);
  local_498.Size = CONCAT44(local_498.Size._4_4_,7);
  local_498.Data = "$format";
  local_488.DataPtr = "Z={Z}";
  local_488.Size = 5;
  FCbWriter::SetName(local_478,(TStringView<char8_t> *)&local_498);
  local_498.Data = local_488.DataPtr;
  local_498.Size = local_488._8_8_;
  FCbWriter::AddString(local_478,(TStringView<char8_t> *)&local_498);
  FCbWriter::EndObject(local_478);
  FCbWriter::EndArray(local_478);
  FCbWriter::Save(local_478,__return_storage_ptr__);
  FCbWriter::~FCbWriter(local_478);
  return __return_storage_ptr__;
}

// operator() @ 141bf2aa0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`UE::FStructuredLogFormatTest::TestBody'::__l2::<lambda_2>::operator()
          (void *this,wchar_t *param_1,TStringView<char8_t> *param_2,FLogTemplateOptions *param_3)

{
  undefined8 *puVar1;
  FAutomationTestBase *pFVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  FAutomationTestFramework *pFVar6;
  size_t sVar7;
  FLogTemplate *pFVar8;
  int iVar9;
  int iVar10;
  undefined1 auStackY_568 [32];
  undefined1 local_538 [32];
  FLogTemplate *local_518 [2];
  FLogTemplate local_508 [3];
  FLogTemplate *local_4d8;
  undefined4 local_4d0;
  undefined4 local_4cc;
  TStringBuilderBase<char8_t> local_4c8;
  uchar local_4a8 [64];
  TStringBuilderBase<char8_t> local_468;
  uchar local_448 [1024];
  ulonglong local_48 [2];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStackY_568;
  local_4cc = 0x30;
  local_518[0] = local_508;
  local_538._0_8_ =
       UE::TFunctionWithContext<void_*___cdecl(int)>::
       Call<_UE::TLogTemplate<UE::Logging::Private::FInlineLogTemplateStorage>::TLogTemplate<UE::Logging::Private::FInlineLogTemplateStorage>_::__l2::<lambda_1>_>
  ;
  local_538._8_8_ = local_518;
  local_4d8 = (FLogTemplate *)0x0;
  iVar10 = 0;
  local_4d0 = 0;
  UE::Logging::Private::CreateLogTemplate
            (param_1,param_3,(FLogField *)0x0,0,
             (TFunctionWithContext<void_*___cdecl(int)> *)local_538);
  local_468.bIsDynamic = false;
  local_468.bIsExternal = false;
  local_468.Base = local_448;
  local_468.CurPos = local_448;
  local_468.End = (uchar *)local_48;
  puVar1 = *(undefined8 **)this;
  local_538._16_8_ = puVar1[3];
  local_538._0_8_ = *puVar1;
  local_538._8_8_ = puVar1[1];
  pFVar8 = local_508;
  if (local_4d8 != (FLogTemplate *)0x0) {
    pFVar8 = local_4d8;
  }
  UE::FormatLogTo(&local_468,pFVar8,(FCbFieldViewIterator *)local_538);
  iVar9 = (int)local_468.CurPos - (int)local_468.Base;
  iVar5 = (int)*(undefined8 *)&param_2->Size;
  if (iVar9 == iVar5) {
    if ((iVar9 != 0) && (iVar5 != 0)) {
      iVar4 = iVar5;
      if (iVar9 < iVar5) {
        iVar4 = iVar9;
      }
      iVar4 = strncmp((char *)local_468.Base,(char *)param_2->DataPtr,(longlong)iVar4);
      if (iVar4 != 0) goto LAB_141bf2bb7;
    }
    if (iVar9 != iVar5) goto LAB_141bf2bb7;
  }
  else {
LAB_141bf2bb7:
    pFVar6 = FAutomationTestFramework::Get();
    pFVar2 = pFVar6->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString((FString *)local_538,L"Condition failed");
    (*pcVar3)(pFVar2,local_538,0);
    if ((FScriptContainerElement *)local_538._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_538._0_8_);
    }
  }
  TStringBuilderBase<char8_t>::~TStringBuilderBase<char8_t>(&local_468);
  pFVar8 = local_508;
  if (local_4d8 != (FLogTemplate *)0x0) {
    pFVar8 = local_4d8;
  }
  UE::Logging::Private::DestroyLogTemplate(pFVar8);
  if (local_4d8 != (FLogTemplate *)0x0) {
    FMemory::Free(local_4d8);
  }
  local_4c8.bIsDynamic = false;
  local_4c8.bIsExternal = false;
  local_4c8.Base = local_4a8;
  local_4c8.CurPos = local_4a8;
  local_4c8.End = (uchar *)&local_468;
  if (param_1 != (wchar_t *)0x0) {
    sVar7 = wcslen(param_1);
    iVar10 = (int)sVar7;
  }
  iVar9 = UE::Core::Private::GetConvertedLength((uchar *)0x0,param_1,iVar10);
  if (local_4c8.End < (TStringBuilderBase<char8_t> *)(local_4c8.CurPos + iVar9)) {
    TStringBuilderBase<char8_t>::Extend(&local_4c8,(longlong)iVar9);
  }
  if (iVar10 != 0) {
    local_4c8.CurPos = UE::Core::Private::Convert(local_4c8.CurPos,iVar9,param_1,iVar10);
  }
  if (local_4c8.End < (TStringBuilderBase<char8_t> *)(local_4c8.CurPos + 1)) {
    TStringBuilderBase<char8_t>::Extend(&local_4c8,1);
  }
  *local_4c8.CurPos = '\0';
  local_518[0] = local_508;
  local_4d8 = (FLogTemplate *)0x0;
  local_538._0_8_ =
       UE::TFunctionWithContext<void_*___cdecl(int)>::
       Call<_UE::TLogTemplate<UE::Logging::Private::FInlineLogTemplateStorage>::TLogTemplate<UE::Logging::Private::FInlineLogTemplateStorage>_::__l2::<lambda_1>_>
  ;
  local_538._8_8_ = local_518;
  local_4d0 = 0;
  local_4cc = 0x30;
  UE::Logging::Private::CreateLogTemplate
            (local_4c8.Base,param_3,(FLogField *)0x0,0,
             (TFunctionWithContext<void_*___cdecl(int)> *)local_538);
  local_468.bIsDynamic = false;
  local_468.bIsExternal = false;
  local_468.Base = local_448;
  local_468.CurPos = local_448;
  local_468.End = (uchar *)local_48;
  puVar1 = *(undefined8 **)this;
  local_538._16_8_ = puVar1[3];
  local_538._0_8_ = *puVar1;
  local_538._8_8_ = puVar1[1];
  pFVar8 = local_508;
  if (local_4d8 != (FLogTemplate *)0x0) {
    pFVar8 = local_4d8;
  }
  UE::FormatLogTo(&local_468,pFVar8,(FCbFieldViewIterator *)local_538);
  iVar10 = (int)local_468.CurPos - (int)local_468.Base;
  iVar9 = (int)*(undefined8 *)&param_2->Size;
  if (iVar10 == iVar9) {
    if ((iVar10 != 0) && (iVar9 != 0)) {
      iVar5 = iVar9;
      if (iVar10 < iVar9) {
        iVar5 = iVar10;
      }
      iVar5 = strncmp((char *)local_468.Base,(char *)param_2->DataPtr,(longlong)iVar5);
      if (iVar5 != 0) goto LAB_141bf2d94;
    }
    if (iVar10 == iVar9) goto LAB_141bf2dd4;
  }
LAB_141bf2d94:
  pFVar6 = FAutomationTestFramework::Get();
  pFVar2 = pFVar6->CurrentTest;
  pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
  ::FString::FString((FString *)local_538,L"Condition failed");
  (*pcVar3)(pFVar2,local_538,0);
  if ((FScriptContainerElement *)local_538._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_538._0_8_);
  }
LAB_141bf2dd4:
  TStringBuilderBase<char8_t>::~TStringBuilderBase<char8_t>(&local_468);
  pFVar8 = local_508;
  if (local_4d8 != (FLogTemplate *)0x0) {
    pFVar8 = local_4d8;
  }
  UE::Logging::Private::DestroyLogTemplate(pFVar8);
  if (local_4d8 != (FLogTemplate *)0x0) {
    FMemory::Free(local_4d8);
  }
  TStringBuilderBase<char8_t>::~TStringBuilderBase<char8_t>(&local_4c8);
  return;
}

// operator() @ 141bf3550

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`UE::FStructuredLogFormatTest::TestBody'::__l2::<lambda_3>::operator()
          (void *this,FText *param_1,TStringView<char8_t> *param_2,FLogTemplateOptions *param_3)

{
  undefined8 *puVar1;
  FAutomationTestBase *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FString *pFVar6;
  FAutomationTestFramework *pFVar7;
  FLogTemplate *pFVar8;
  int iVar9;
  undefined8 uVar10;
  wchar_t *pwVar11;
  int iVar12;
  undefined8 uVar13;
  undefined1 auStackY_558 [32];
  TOptional<FString>_u_0 local_518;
  TOptional<FString>_u_0 local_508;
  FLogTemplate *local_4f8 [2];
  TFunctionWithContext<void_*___cdecl(int)> local_4e8;
  FString local_4d8;
  FCbFieldViewIterator local_4c8;
  FLogTemplate local_4a8 [3];
  FLogTemplate *local_478;
  undefined4 local_470;
  undefined4 local_46c;
  TStringBuilderBase<char8_t> local_468;
  uchar local_448 [1024];
  ulonglong local_48 [2];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStackY_558;
  FTextInspector::GetNamespace((TOptional<FString> *)&local_508.TypedValue,param_1);
  FTextInspector::GetKey((TOptional<FString> *)&local_518.TypedValue,param_1);
  pFVar6 = FTextInspector::GetSourceString(param_1);
  if ((pFVar6->Data).ArrayNum == 0) {
    pwVar11 = L"";
  }
  else {
    pwVar11 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
  }
  if (local_518.TypedValue.Data.ArrayMax == -1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  uVar13 = L"";
  if (local_518.TypedValue.Data.ArrayNum != 0) {
    uVar13 = local_518.TypedValue.Data.AllocatorInstance.Data;
  }
  if (local_508.TypedValue.Data.ArrayMax == -1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_4f8[0] = local_4a8;
  uVar10 = L"";
  if (local_508.TypedValue.Data.ArrayNum != 0) {
    uVar10 = local_508.TypedValue.Data.AllocatorInstance.Data;
  }
  local_4e8.Function =
       UE::TFunctionWithContext<void_*___cdecl(int)>::
       Call<_UE::TLogTemplate<UE::Logging::Private::FInlineLogTemplateStorage>::TLogTemplate<UE::Logging::Private::FInlineLogTemplateStorage>_::__l2::<lambda_1>_>
  ;
  local_4e8.Context = local_4f8;
  local_478 = (FLogTemplate *)0x0;
  local_470 = 0;
  local_46c = 0x30;
  UE::Logging::Private::CreateLocalizedLogTemplate
            ((wchar_t *)uVar10,(wchar_t *)uVar13,pwVar11,param_3,(FLogField *)0x0,0,&local_4e8);
  local_468.bIsDynamic = false;
  local_468.bIsExternal = false;
  local_468.Base = local_448;
  local_468.CurPos = local_448;
  local_468.End = (uchar *)local_48;
  puVar1 = *(undefined8 **)this;
  local_4c8._16_8_ = puVar1[3];
  local_4c8._0_8_ = *puVar1;
  local_4c8._8_8_ = puVar1[1];
  pFVar8 = local_4a8;
  if (local_478 != (FLogTemplate *)0x0) {
    pFVar8 = local_478;
  }
  UE::FormatLogTo(&local_468,pFVar8,&local_4c8);
  iVar9 = (int)local_468.CurPos - (int)local_468.Base;
  iVar12 = (int)*(undefined8 *)&param_2->Size;
  if (iVar9 == iVar12) {
    if ((iVar9 != 0) && (iVar12 != 0)) {
      iVar5 = iVar12;
      if (iVar9 < iVar12) {
        iVar5 = iVar9;
      }
      iVar5 = strncmp((char *)local_468.Base,(char *)param_2->DataPtr,(longlong)iVar5);
      if (iVar5 != 0) goto LAB_141bf370c;
    }
    if (iVar9 == iVar12) goto LAB_141bf3749;
  }
LAB_141bf370c:
  pFVar7 = FAutomationTestFramework::Get();
  pFVar2 = pFVar7->CurrentTest;
  pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
  ::FString::FString(&local_4d8,L"Condition failed");
  (*pcVar3)(pFVar2,&local_4d8,0);
  if (local_4d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4d8.Data.AllocatorInstance.Data);
  }
LAB_141bf3749:
  TStringBuilderBase<char8_t>::~TStringBuilderBase<char8_t>(&local_468);
  pFVar8 = local_4a8;
  if (local_478 != (FLogTemplate *)0x0) {
    pFVar8 = local_478;
  }
  UE::Logging::Private::DestroyLogTemplate(pFVar8);
  if (local_478 != (FLogTemplate *)0x0) {
    FMemory::Free(local_478);
  }
  if ((local_518.TypedValue.Data.ArrayMax != -1) &&
     (local_518.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free((void *)local_518.TypedValue.Data.AllocatorInstance.Data);
  }
  if ((local_508.TypedValue.Data.ArrayMax != -1) &&
     (local_508.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free((void *)local_508.TypedValue.Data.AllocatorInstance.Data);
  }
  return;
}

// TestBody @ 141c3a5c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::FStructuredLogFormatTest::TestBody(FStructuredLogFormatTest *this,FString *param_1)

{
  longlong *plVar1;
  ulonglong *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  FAutomationTestBase *pFVar5;
  code *pcVar6;
  int iVar7;
  FBlake3Hash *pFVar8;
  FGuid *pFVar9;
  FText *pFVar10;
  FAutomationTestFramework *pFVar11;
  undefined1 auStackY_1c8 [32];
  FLogTemplateOptions local_188 [16];
  ITextData *local_178;
  undefined8 uStack_170;
  TMemoryView<void_const_> local_168;
  ITextData local_158;
  undefined4 local_150 [2];
  FDateTime local_148;
  FTimespan local_140;
  undefined1 local_138 [32];
  FGuid local_118;
  TRefCountPtr<ITextData> local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined1 local_e8 [16];
  undefined1 local_d8 [32];
  FGuid *local_b8;
  FDateTime *local_b0;
  FTimespan *local_a8;
  undefined8 *local_a0;
  undefined4 *local_98;
  undefined4 *local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined8 local_74;
  undefined8 uStack_6c;
  undefined4 local_64;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  undefined4 local_48;
  undefined4 local_44;
  uchar local_40 [16];
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  local_e8._8_8_ = 0x10;
  local_e8._0_8_ = "ObjectAttachment";
  local_168.Data = "ObjectAttachment";
  local_168.Size = (ulong64)&DAT_00000010;
  builtin_memcpy(local_40,"\x01\x02\x03\x04\x05\x06\a\b\t\n\v\f\r\x0e\x0f\x10",0x10);
  pFVar8 = FBlake3::HashBuffer((FBlake3Hash *)&local_108,&local_168);
  uStack_170 = 0x10;
  local_88 = *(undefined8 *)pFVar8->Hash;
  uStack_80 = *(undefined8 *)(pFVar8->Hash + 8);
  local_78 = *(undefined4 *)(pFVar8->Hash + 0x10);
  local_178 = (ITextData *)0x15073d4b8;
  local_168.Data = "BinaryAttachment";
  local_168.Size = (ulong64)&DAT_00000010;
  pFVar8 = FBlake3::HashBuffer((FBlake3Hash *)&local_108,&local_168);
  uStack_170 = 4;
  local_74 = *(undefined8 *)pFVar8->Hash;
  uStack_6c = *(undefined8 *)(pFVar8->Hash + 8);
  local_64 = *(undefined4 *)(pFVar8->Hash + 0x10);
  local_178 = (ITextData *)0x15073d4cc;
  local_168.Data = "Hash";
  local_168.Size = (ulong64)&DAT_00000004;
  pFVar8 = FBlake3::HashBuffer((FBlake3Hash *)&local_108,&local_168);
  uStack_170 = 4;
  local_60 = *(undefined8 *)pFVar8->Hash;
  uStack_58 = *(undefined8 *)(pFVar8->Hash + 8);
  local_50 = *(undefined4 *)(pFVar8->Hash + 0x10);
  local_178 = (ITextData *)0x15073d794;
  local_168.Data = "Guid";
  local_168.Size = (ulong64)&DAT_00000004;
  pFVar8 = FBlake3::HashBuffer((FBlake3Hash *)&local_108,&local_168);
  FGuid::NewGuidFromHash(&local_118,pFVar8);
  FDateTime::FDateTime(&local_148,0x7e9,4,10,0xb,0xf,0x1e,0x7b);
  FTimespan::Assign(&local_140,10,0xb,0xf,0x1e,0x75bcd15);
  local_178 = (ITextData *)0x15073d4f0;
  uStack_170 = 8;
  local_168.Data = "ObjectId";
  local_168.Size = (ulong64)&DAT_00000008;
  pFVar8 = FBlake3::HashBuffer((FBlake3Hash *)local_d8,&local_168);
  pFVar9 = FGuid::NewGuidFromHash((FGuid *)&local_108,pFVar8);
  FromGuid((FCbObjectId *)local_e8,pFVar9);
  local_d8._0_8_ = local_40;
  local_48 = 0x14131211;
  local_d8._8_8_ = &local_88;
  local_44 = 0x18171615;
  local_d8._16_8_ = &local_74;
  local_150[0] = 0x1c1b1a19;
  local_d8._24_8_ = &local_60;
  local_b8 = &local_118;
  local_b0 = &local_148;
  local_a8 = &local_140;
  local_a0 = (undefined8 *)local_e8;
  local_98 = &local_48;
  local_90 = local_150;
  `UE::FStructuredLogFormatTest::TestBody'::__l2::<lambda_1>::operator()
            (local_d8,(FCbFieldIterator *)local_138);
  local_158 = (ITextData)local_138;
  uStack_170._0_4_ = 0x18;
  local_178 = (ITextData *)0x15073d7a0;
  local_168.Data = "{\"X\": 1, \"Y\": 2, \"Z\": 3}";
  local_168.Size._0_4_ = 0x18;
  local_168.Size._4_4_ = uStack_170._4_4_;
  local_188[0].bAllowSubObjectReferences = false;
  `UE::FStructuredLogFormatTest::TestBody'::__l2::<lambda_2>::operator()
            (&local_158,L"{Object}",(TStringView<char8_t> *)&local_168,local_188);
  uStack_170._0_4_ = 9;
  local_178 = (ITextData *)&s__1__2__3_;
  local_168.Data = &s__1__2__3_;
  local_168.Size._0_4_ = 9;
  local_168.Size._4_4_ = uStack_170._4_4_;
  local_188[0].bAllowSubObjectReferences = false;
  `UE::FStructuredLogFormatTest::TestBody'::__l2::<lambda_2>::operator()
            (&local_158,L"{Array}",(TStringView<char8_t> *)&local_168,local_188);
  uStack_170._0_4_ = 4;
  local_178 = (ITextData *)&s_null;
  local_168.Data = &s_null;
  local_168.Size._0_4_ = 4;
  local_168.Size._4_4_ = uStack_170._4_4_;
  local_188[0].bAllowSubObjectReferences = false;
  `UE::FStructuredLogFormatTest::TestBody'::__l2::<lambda_2>::operator()
            (&local_158,L"{Null}",(TStringView<char8_t> *)&local_168,local_188);
  uStack_170._0_4_ = 0x1a;
  local_178 = (ITextData *)&s__AQIDBAUGBwgJCgsMDQ4PEA___;
  local_168.Data = &s__AQIDBAUGBwgJCgsMDQ4PEA___;
  local_168.Size._0_4_ = 0x1a;
  local_168.Size._4_4_ = uStack_170._4_4_;
  local_188[0].bAllowSubObjectReferences = false;
  `UE::FStructuredLogFormatTest::TestBody'::__l2::<lambda_2>::operator()
            (&local_158,L"{Binary}",(TStringView<char8_t> *)&local_168,local_188);
  uStack_170._0_4_ = 0x15;
  local_178 = (ITextData *)0x15073d448;
  local_168.Data = "\"Quote\" with 4 words.";
  local_168.Size._0_4_ = 0x15;
  local_168.Size._4_4_ = uStack_170._4_4_;
  local_188[0].bAllowSubObjectReferences = false;
  `UE::FStructuredLogFormatTest::TestBody'::__l2::<lambda_2>::operator()
            (&local_158,L"{String}",(TStringView<char8_t> *)&local_168,local_188);
  uStack_170._0_4_ = 3;
  local_178 = (ITextData *)0x15073d854;
  local_168.Data = "-64";
  local_168.Size._0_4_ = 3;
  local_168.Size._4_4_ = uStack_170._4_4_;
  local_188[0].bAllowSubObjectReferences = false;
  `UE::FStructuredLogFormatTest::TestBody'::__l2::<lambda_2>::operator()
            (&local_158,L"{IntegerNegative}",(TStringView<char8_t> *)&local_168,local_188);
  uStack_170._0_4_ = 2;
  local_178 = (ITextData *)0x15073d87c;
  local_168.Data = "63";
  local_168.Size._0_4_ = 2;
  local_168.Size._4_4_ = uStack_170._4_4_;
  local_188[0].bAllowSubObjectReferences = false;
  `UE::FStructuredLogFormatTest::TestBody'::__l2::<lambda_2>::operator()
            (&local_158,L"{IntegerPositive}",(TStringView<char8_t> *)&local_168,local_188);
  uStack_170._0_4_ = 6;
  local_178 = (ITextData *)0x15073d8a4;
  local_168.Data = "128.25";
  local_168.Size._0_4_ = 6;
  local_168.Size._4_4_ = uStack_170._4_4_;
  local_188[0].bAllowSubObjectReferences = false;
  `UE::FStructuredLogFormatTest::TestBody'::__l2::<lambda_2>::operator()
            (&local_158,L"{Float}",(TStringView<char8_t> *)&local_168,local_188);
  uStack_170._0_4_ = 7;
  local_178 = (ITextData *)0x15073d8c0;
  local_168.Data = "123.456";
  local_168.Size._0_4_ = 7;
  local_168.Size._4_4_ = uStack_170._4_4_;
  local_188[0].bAllowSubObjectReferences = false;
  `UE::FStructuredLogFormatTest::TestBody'::__l2::<lambda_2>::operator()
            (&local_158,L"{Double}",(TStringView<char8_t> *)&local_168,local_188);
  uStack_170._0_4_ = 5;
  local_178 = (ITextData *)0x150611ad4;
  local_168.Data = "false";
  local_168.Size._0_4_ = 5;
  local_168.Size._4_4_ = uStack_170._4_4_;
  local_188[0].bAllowSubObjectReferences = false;
  `UE::FStructuredLogFormatTest::TestBody'::__l2::<lambda_2>::operator()
            (&local_158,L"{False}",(TStringView<char8_t> *)&local_168,local_188);
  uStack_170._0_4_ = 4;
  local_178 = (ITextData *)&s_true;
  local_168.Data = &s_true;
  local_168.Size._0_4_ = 4;
  local_168.Size._4_4_ = uStack_170._4_4_;
  local_188[0].bAllowSubObjectReferences = false;
  `UE::FStructuredLogFormatTest::TestBody'::__l2::<lambda_2>::operator()
            (&local_158,L"{True}",(TStringView<char8_t> *)&local_168,local_188);
  local_188[0].bAllowSubObjectReferences = false;
  uStack_170._0_4_ = 0x28;
  local_178 = (ITextData *)0x15073d900;
  local_168.Data = "cb42395cfe025324d80c31c88746d3392f330e58";
  local_168.Size._0_4_ = 0x28;
  local_168.Size._4_4_ = uStack_170._4_4_;
  `UE::FStructuredLogFormatTest::TestBody'::__l2::<lambda_2>::operator()
            (&local_158,L"{ObjectAttachment}",(TStringView<char8_t> *)&local_168,local_188);
  uStack_170._0_4_ = 0x28;
  local_178 = (ITextData *)&s_0ba7b01905a760046bacb86f092f291;
  local_168.Data = &s_0ba7b01905a760046bacb86f092f291;
  local_168.Size._0_4_ = 0x28;
  local_168.Size._4_4_ = uStack_170._4_4_;
  local_188[0].bAllowSubObjectReferences = false;
  `UE::FStructuredLogFormatTest::TestBody'::__l2::<lambda_2>::operator()
            (&local_158,L"{BinaryAttachment}",(TStringView<char8_t> *)&local_168,local_188);
  uStack_170._0_4_ = 0x28;
  local_178 = (ITextData *)&s_700b0783bebf169c6d473141e82dd88;
  local_168.Data = &s_700b0783bebf169c6d473141e82dd88;
  local_168.Size._0_4_ = 0x28;
  local_168.Size._4_4_ = uStack_170._4_4_;
  local_188[0].bAllowSubObjectReferences = false;
  `UE::FStructuredLogFormatTest::TestBody'::__l2::<lambda_2>::operator()
            (&local_158,L"{Hash}",(TStringView<char8_t> *)&local_168,local_188);
  uStack_170._0_4_ = 0x24;
  local_178 = (ITextData *)&s_b1718295_2b3d_3379_9948_ef46ee9;
  local_168.Data = &s_b1718295_2b3d_3379_9948_ef46ee9;
  local_168.Size._0_4_ = 0x24;
  local_168.Size._4_4_ = uStack_170._4_4_;
  local_188[0].bAllowSubObjectReferences = false;
  `UE::FStructuredLogFormatTest::TestBody'::__l2::<lambda_2>::operator()
            (&local_158,L"{Uuid}",(TStringView<char8_t> *)&local_168,local_188);
  uStack_170._0_4_ = 0x18;
  local_178 = (ITextData *)&s_2025_04_10T11_15_30_123Z;
  local_168.Data = &s_2025_04_10T11_15_30_123Z;
  local_168.Size._0_4_ = 0x18;
  local_168.Size._4_4_ = uStack_170._4_4_;
  local_188[0].bAllowSubObjectReferences = false;
  `UE::FStructuredLogFormatTest::TestBody'::__l2::<lambda_2>::operator()
            (&local_158,L"{DateTime}",(TStringView<char8_t> *)&local_168,local_188);
  uStack_170._0_4_ = 0x16;
  local_178 = (ITextData *)0x15073da60;
  local_168.Data = "+10.11:15:30.123456700";
  local_168.Size._0_4_ = 0x16;
  local_168.Size._4_4_ = uStack_170._4_4_;
  local_188[0].bAllowSubObjectReferences = false;
  `UE::FStructuredLogFormatTest::TestBody'::__l2::<lambda_2>::operator()
            (&local_158,L"{TimeSpan}",(TStringView<char8_t> *)&local_168,local_188);
  uStack_170._0_4_ = 0x18;
  local_178 = (ITextData *)&s_354fa969c46eb24d1ea03026;
  local_168.Data = &s_354fa969c46eb24d1ea03026;
  local_168.Size._0_4_ = 0x18;
  local_168.Size._4_4_ = uStack_170._4_4_;
  local_188[0].bAllowSubObjectReferences = false;
  `UE::FStructuredLogFormatTest::TestBody'::__l2::<lambda_2>::operator()
            (&local_158,L"{ObjectId}",(TStringView<char8_t> *)&local_168,local_188);
  uStack_170._0_4_ = 0x20;
  local_178 = (ITextData *)0x15073dac8;
  local_188[0].bAllowSubObjectReferences = false;
  local_168.Data = "{\"Id\":128,\"Data\":\"ERITFBUWFxg=\"}";
  local_168.Size._0_4_ = 0x20;
  local_168.Size._4_4_ = uStack_170._4_4_;
  `UE::FStructuredLogFormatTest::TestBody'::__l2::<lambda_2>::operator()
            (&local_158,L"{CustomById}",(TStringView<char8_t> *)&local_168,local_188);
  uStack_170._0_4_ = 0x23;
  local_178 = (ITextData *)0x15073db10;
  local_168.Data = "{\"Name\":\"Custom\",\"Data\":\"GRobHA==\"}";
  local_168.Size._0_4_ = 0x23;
  local_168.Size._4_4_ = uStack_170._4_4_;
  local_188[0].bAllowSubObjectReferences = false;
  `UE::FStructuredLogFormatTest::TestBody'::__l2::<lambda_2>::operator()
            (&local_158,L"{CustomByName}",(TStringView<char8_t> *)&local_168,local_188);
  uStack_170._0_4_ = 0xb;
  local_178 = (ITextData *)&s_X_1_Y_2_Z_3;
  local_168.Data = &s_X_1_Y_2_Z_3;
  local_168.Size._0_4_ = 0xb;
  local_168.Size._4_4_ = uStack_170._4_4_;
  local_188[0].bAllowSubObjectReferences = false;
  `UE::FStructuredLogFormatTest::TestBody'::__l2::<lambda_2>::operator()
            (&local_158,L"{ObjectText}",(TStringView<char8_t> *)&local_168,local_188);
  uStack_170._0_4_ = 0x21;
  local_178 = (ITextData *)0x15073db78;
  local_168.Data = "{\"X\": 0001, \"Y\": 0002, \"Z\": 0003}";
  local_168.Size._0_4_ = 0x21;
  local_168.Size._4_4_ = uStack_170._4_4_;
  local_188[0].bAllowSubObjectReferences = false;
  `UE::FStructuredLogFormatTest::TestBody'::__l2::<lambda_2>::operator()
            (&local_158,L"{ObjectWithNestedText}",(TStringView<char8_t> *)&local_168,local_188);
  uStack_170._0_4_ = 0x12;
  local_178 = (ITextData *)0x15073dbd0;
  local_168.Data = "[0001, 0002, 0003]";
  local_168.Size._0_4_ = 0x12;
  local_168.Size._4_4_ = uStack_170._4_4_;
  local_188[0].bAllowSubObjectReferences = false;
  `UE::FStructuredLogFormatTest::TestBody'::__l2::<lambda_2>::operator()
            (&local_158,L"{ArrayWithNestedText}",(TStringView<char8_t> *)&local_168,local_188);
  local_178 = (ITextData *)&s_X_1_Y_2_Z_3;
  uStack_170._0_4_ = 0xb;
  local_168.Data = &s_X_1_Y_2_Z_3;
  local_168.Size._0_4_ = 0xb;
  local_168.Size._4_4_ = uStack_170._4_4_;
  local_188[0].bAllowSubObjectReferences = false;
  `UE::FStructuredLogFormatTest::TestBody'::__l2::<lambda_2>::operator()
            (&local_158,L"{ObjectFormat}",(TStringView<char8_t> *)&local_168,local_188);
  uStack_170._0_4_ = 0x19;
  local_178 = (ITextData *)&s_Target__X_1_Y_2_Z_3___X_1;
  local_168.Data = &s_Target__X_1_Y_2_Z_3___X_1;
  local_168.Size._0_4_ = 0x19;
  local_168.Size._4_4_ = uStack_170._4_4_;
  local_188[0].bAllowSubObjectReferences = false;
  `UE::FStructuredLogFormatTest::TestBody'::__l2::<lambda_2>::operator()
            (&local_158,L"{ObjectWithNestedFormat}",(TStringView<char8_t> *)&local_168,local_188);
  uStack_170._0_4_ = 0xf;
  local_178 = (ITextData *)0x15073dc90;
  local_168.Data = "[X=1, Y=2, Z=3]";
  local_168.Size._0_4_ = 0xf;
  local_168.Size._4_4_ = uStack_170._4_4_;
  local_188[0].bAllowSubObjectReferences = false;
  `UE::FStructuredLogFormatTest::TestBody'::__l2::<lambda_2>::operator()
            (&local_158,L"{ArrayWithNestedFormat}",(TStringView<char8_t> *)&local_168,local_188);
  local_178 = (ITextData *)&s_X_1_Y_2_Z_3;
  uStack_170._0_4_ = 0xb;
  local_168.Data = &s_X_1_Y_2_Z_3;
  local_168.Size._0_4_ = 0xb;
  local_168.Size._4_4_ = uStack_170._4_4_;
  local_188[0].bAllowSubObjectReferences = false;
  `UE::FStructuredLogFormatTest::TestBody'::__l2::<lambda_2>::operator()
            (&local_158,L"{ObjectLocFormat}",(TStringView<char8_t> *)&local_168,local_188);
  local_178 = (ITextData *)&s_Target__X_1_Y_2_Z_3___X_1;
  uStack_170._0_4_ = 0x19;
  local_168.Data = &s_Target__X_1_Y_2_Z_3___X_1;
  local_168.Size._0_4_ = 0x19;
  local_168.Size._4_4_ = uStack_170._4_4_;
  local_188[0].bAllowSubObjectReferences = false;
  `UE::FStructuredLogFormatTest::TestBody'::__l2::<lambda_2>::operator()
            (&local_158,L"{ObjectWithNestedLocFormat}",(TStringView<char8_t> *)&local_168,local_188)
  ;
  local_178 = (ITextData *)0x15073dc90;
  uStack_170._0_4_ = 0xf;
  local_168.Data = "[X=1, Y=2, Z=3]";
  local_168.Size._0_4_ = 0xf;
  local_168.Size._4_4_ = uStack_170._4_4_;
  local_188[0].bAllowSubObjectReferences = false;
  `UE::FStructuredLogFormatTest::TestBody'::__l2::<lambda_2>::operator()
            (&local_158,L"{ArrayWithNestedLocFormat}",(TStringView<char8_t> *)&local_168,local_188);
  uStack_170._0_4_ = 9;
  local_178 = (ITextData *)&s__1__2__3_;
  local_168.Data = &s__1__2__3_;
  local_168.Size._0_4_ = 9;
  local_168.Size._4_4_ = uStack_170._4_4_;
  local_188[0].bAllowSubObjectReferences = true;
  `UE::FStructuredLogFormatTest::TestBody'::__l2::<lambda_2>::operator()
            (&local_158,L"{{{Object/X}, {Object/Y}, {Object/Z}}}",(TStringView<char8_t> *)&local_168
             ,local_188);
  uStack_170._0_4_ = 1;
  local_178 = (ITextData *)&s_1;
  local_168.Data = &s_1;
  local_168.Size._0_4_ = 1;
  local_168.Size._4_4_ = uStack_170._4_4_;
  local_188[0].bAllowSubObjectReferences = true;
  `UE::FStructuredLogFormatTest::TestBody'::__l2::<lambda_2>::operator()
            (&local_158,L"{ObjectText/X}",(TStringView<char8_t> *)&local_168,local_188);
  uStack_170._0_4_ = 4;
  local_178 = (ITextData *)0x15070c9fc;
  local_168.Data = "0001";
  local_168.Size._0_4_ = 4;
  local_168.Size._4_4_ = uStack_170._4_4_;
  local_188[0].bAllowSubObjectReferences = true;
  `UE::FStructuredLogFormatTest::TestBody'::__l2::<lambda_2>::operator()
            (&local_158,L"{ObjectWithNestedText/X}",(TStringView<char8_t> *)&local_168,local_188);
  local_158 = (ITextData)local_138;
  local_188[0].bAllowSubObjectReferences = false;
  uStack_170 = CONCAT44(uStack_170._4_4_,0x10);
  local_178 = (ITextData *)0x15073de28;
  pFVar10 = FText::AsLocalizable_Advanced_LocText
                      ((FText *)&local_108,L"StructuredLogFormatTest",L"EmitterSubheaderText",
                       L"Found {IntegerPositive} {IntegerPositive}|plural(one=error,other=errors)!")
  ;
  local_168.Data = local_178;
  local_168.Size = uStack_170;
  `UE::FStructuredLogFormatTest::TestBody'::__l2::<lambda_3>::operator()
            (&local_158,pFVar10,(TStringView<char8_t> *)&local_168,local_188);
  if (local_108.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_108.Reference + 0x10))();
  }
  local_188[0].bAllowSubObjectReferences = false;
  local_178 = (ITextData *)0x15073d7a0;
  uStack_170._0_4_ = 0x18;
  pFVar10 = FText::AsLocalizable_Advanced_LocText
                      ((FText *)&local_168,L"StructuredLogFormatTest",L"Object",L"{Object}");
  local_108.Reference = local_178;
  uStack_100 = uStack_170;
  `UE::FStructuredLogFormatTest::TestBody'::__l2::<lambda_3>::operator()
            (&local_158,pFVar10,(TStringView<char8_t> *)&local_108,local_188);
  if (local_168.Data != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_168.Data + 0x10))();
  }
  local_188[0].bAllowSubObjectReferences = false;
  local_178 = (ITextData *)&s__1__2__3_;
  uStack_170._0_4_ = 9;
  pFVar10 = FText::AsLocalizable_Advanced_LocText
                      ((FText *)&local_168,L"StructuredLogFormatTest",L"Array",L"{Array}");
  local_108.Reference = local_178;
  uStack_100 = uStack_170;
  `UE::FStructuredLogFormatTest::TestBody'::__l2::<lambda_3>::operator()
            (&local_158,pFVar10,(TStringView<char8_t> *)&local_108,local_188);
  if (local_168.Data != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_168.Data + 0x10))();
  }
  local_188[0].bAllowSubObjectReferences = false;
  local_178 = (ITextData *)&s_null;
  uStack_170._0_4_ = 4;
  pFVar10 = FText::AsLocalizable_Advanced_LocText
                      ((FText *)&local_168,L"StructuredLogFormatTest",L"Null",L"{Null}");
  local_108.Reference = local_178;
  uStack_100 = uStack_170;
  `UE::FStructuredLogFormatTest::TestBody'::__l2::<lambda_3>::operator()
            (&local_158,pFVar10,(TStringView<char8_t> *)&local_108,local_188);
  if (local_168.Data != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_168.Data + 0x10))();
  }
  local_188[0].bAllowSubObjectReferences = false;
  local_178 = (ITextData *)&s__AQIDBAUGBwgJCgsMDQ4PEA___;
  uStack_170._0_4_ = 0x1a;
  pFVar10 = FText::AsLocalizable_Advanced_LocText
                      ((FText *)&local_168,L"StructuredLogFormatTest",L"Binary",L"{Binary}");
  local_108.Reference = local_178;
  uStack_100 = uStack_170;
  `UE::FStructuredLogFormatTest::TestBody'::__l2::<lambda_3>::operator()
            (&local_158,pFVar10,(TStringView<char8_t> *)&local_108,local_188);
  if (local_168.Data != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_168.Data + 0x10))();
  }
  local_188[0].bAllowSubObjectReferences = false;
  local_178 = (ITextData *)0x15073d448;
  uStack_170._0_4_ = 0x15;
  pFVar10 = FText::AsLocalizable_Advanced_LocText
                      ((FText *)&local_168,L"StructuredLogFormatTest",L"String",L"{String}");
  local_108.Reference = local_178;
  uStack_100 = uStack_170;
  `UE::FStructuredLogFormatTest::TestBody'::__l2::<lambda_3>::operator()
            (&local_158,pFVar10,(TStringView<char8_t> *)&local_108,local_188);
  if (local_168.Data != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_168.Data + 0x10))();
  }
  local_188[0].bAllowSubObjectReferences = false;
  local_178 = (ITextData *)0x15073d854;
  uStack_170._0_4_ = 3;
  pFVar10 = FText::AsLocalizable_Advanced_LocText
                      ((FText *)&local_168,L"StructuredLogFormatTest",L"IntegerNegative",
                       L"{IntegerNegative}");
  local_108.Reference = local_178;
  uStack_100 = uStack_170;
  `UE::FStructuredLogFormatTest::TestBody'::__l2::<lambda_3>::operator()
            (&local_158,pFVar10,(TStringView<char8_t> *)&local_108,local_188);
  if (local_168.Data != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_168.Data + 0x10))();
  }
  local_188[0].bAllowSubObjectReferences = false;
  local_178 = (ITextData *)0x15073d87c;
  uStack_170._0_4_ = 2;
  pFVar10 = FText::AsLocalizable_Advanced_LocText
                      ((FText *)&local_168,L"StructuredLogFormatTest",L"IntegerPositive",
                       L"{IntegerPositive}");
  local_108.Reference = local_178;
  uStack_100 = uStack_170;
  `UE::FStructuredLogFormatTest::TestBody'::__l2::<lambda_3>::operator()
            (&local_158,pFVar10,(TStringView<char8_t> *)&local_108,local_188);
  if (local_168.Data != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_168.Data + 0x10))();
  }
  local_188[0].bAllowSubObjectReferences = false;
  local_178 = (ITextData *)0x15073d8a4;
  uStack_170._0_4_ = 6;
  pFVar10 = FText::AsLocalizable_Advanced_LocText
                      ((FText *)&local_168,L"StructuredLogFormatTest",L"Float",L"{Float}");
  local_108.Reference = local_178;
  uStack_100 = uStack_170;
  `UE::FStructuredLogFormatTest::TestBody'::__l2::<lambda_3>::operator()
            (&local_158,pFVar10,(TStringView<char8_t> *)&local_108,local_188);
  if (local_168.Data != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_168.Data + 0x10))();
  }
  local_188[0].bAllowSubObjectReferences = false;
  local_178 = (ITextData *)0x15073d8c0;
  uStack_170._0_4_ = 7;
  pFVar10 = FText::AsLocalizable_Advanced_LocText
                      ((FText *)&local_168,L"StructuredLogFormatTest",L"Double",L"{Double}");
  local_108.Reference = local_178;
  uStack_100 = uStack_170;
  `UE::FStructuredLogFormatTest::TestBody'::__l2::<lambda_3>::operator()
            (&local_158,pFVar10,(TStringView<char8_t> *)&local_108,local_188);
  if (local_168.Data != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_168.Data + 0x10))();
  }
  local_188[0].bAllowSubObjectReferences = false;
  local_178 = (ITextData *)0x150611ad4;
  uStack_170._0_4_ = 5;
  pFVar10 = FText::AsLocalizable_Advanced_LocText
                      ((FText *)&local_168,L"StructuredLogFormatTest",L"False",L"{False}");
  local_108.Reference = local_178;
  uStack_100 = uStack_170;
  `UE::FStructuredLogFormatTest::TestBody'::__l2::<lambda_3>::operator()
            (&local_158,pFVar10,(TStringView<char8_t> *)&local_108,local_188);
  if (local_168.Data != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_168.Data + 0x10))();
  }
  local_188[0].bAllowSubObjectReferences = false;
  local_178 = (ITextData *)&s_true;
  uStack_170._0_4_ = 4;
  pFVar10 = FText::AsLocalizable_Advanced_LocText
                      ((FText *)&local_168,L"StructuredLogFormatTest",L"True",L"{True}");
  local_108.Reference = local_178;
  uStack_100 = uStack_170;
  `UE::FStructuredLogFormatTest::TestBody'::__l2::<lambda_3>::operator()
            (&local_158,pFVar10,(TStringView<char8_t> *)&local_108,local_188);
  if (local_168.Data != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_168.Data + 0x10))();
  }
  local_188[0].bAllowSubObjectReferences = false;
  local_178 = (ITextData *)0x15073d900;
  uStack_170._0_4_ = 0x28;
  pFVar10 = FText::AsLocalizable_Advanced_LocText
                      ((FText *)&local_168,L"StructuredLogFormatTest",L"ObjectAttachment",
                       L"{ObjectAttachment}");
  local_108.Reference = local_178;
  uStack_100 = uStack_170;
  `UE::FStructuredLogFormatTest::TestBody'::__l2::<lambda_3>::operator()
            (&local_158,pFVar10,(TStringView<char8_t> *)&local_108,local_188);
  if (local_168.Data != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_168.Data + 0x10))();
  }
  local_188[0].bAllowSubObjectReferences = false;
  local_178 = (ITextData *)&s_0ba7b01905a760046bacb86f092f291;
  uStack_170._0_4_ = 0x28;
  pFVar10 = FText::AsLocalizable_Advanced_LocText
                      ((FText *)&local_168,L"StructuredLogFormatTest",L"BinaryAttachment",
                       L"{BinaryAttachment}");
  local_108.Reference = local_178;
  uStack_100 = uStack_170;
  `UE::FStructuredLogFormatTest::TestBody'::__l2::<lambda_3>::operator()
            (&local_158,pFVar10,(TStringView<char8_t> *)&local_108,local_188);
  if (local_168.Data != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_168.Data + 0x10))();
  }
  local_188[0].bAllowSubObjectReferences = false;
  local_178 = (ITextData *)&s_700b0783bebf169c6d473141e82dd88;
  uStack_170._0_4_ = 0x28;
  pFVar10 = FText::AsLocalizable_Advanced_LocText
                      ((FText *)&local_168,L"StructuredLogFormatTest",L"Hash",L"{Hash}");
  local_108.Reference = local_178;
  uStack_100 = uStack_170;
  `UE::FStructuredLogFormatTest::TestBody'::__l2::<lambda_3>::operator()
            (&local_158,pFVar10,(TStringView<char8_t> *)&local_108,local_188);
  if (local_168.Data != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_168.Data + 0x10))();
  }
  local_188[0].bAllowSubObjectReferences = false;
  local_178 = (ITextData *)&s_b1718295_2b3d_3379_9948_ef46ee9;
  uStack_170._0_4_ = 0x24;
  pFVar10 = FText::AsLocalizable_Advanced_LocText
                      ((FText *)&local_168,L"StructuredLogFormatTest",L"Uuid",L"{Uuid}");
  local_108.Reference = local_178;
  uStack_100 = uStack_170;
  `UE::FStructuredLogFormatTest::TestBody'::__l2::<lambda_3>::operator()
            (&local_158,pFVar10,(TStringView<char8_t> *)&local_108,local_188);
  if (local_168.Data != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_168.Data + 0x10))();
  }
  local_188[0].bAllowSubObjectReferences = false;
  local_178 = (ITextData *)&s_2025_04_10T11_15_30_123Z;
  uStack_170._0_4_ = 0x18;
  pFVar10 = FText::AsLocalizable_Advanced_LocText
                      ((FText *)&local_168,L"StructuredLogFormatTest",L"DateTime",L"{DateTime}");
  local_108.Reference = local_178;
  uStack_100 = uStack_170;
  `UE::FStructuredLogFormatTest::TestBody'::__l2::<lambda_3>::operator()
            (&local_158,pFVar10,(TStringView<char8_t> *)&local_108,local_188);
  if (local_168.Data != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_168.Data + 0x10))();
  }
  local_188[0].bAllowSubObjectReferences = false;
  local_178 = (ITextData *)0x15073da60;
  uStack_170._0_4_ = 0x16;
  pFVar10 = FText::AsLocalizable_Advanced_LocText
                      ((FText *)&local_168,L"StructuredLogFormatTest",L"TimeSpan",L"{TimeSpan}");
  local_108.Reference = local_178;
  uStack_100 = uStack_170;
  `UE::FStructuredLogFormatTest::TestBody'::__l2::<lambda_3>::operator()
            (&local_158,pFVar10,(TStringView<char8_t> *)&local_108,local_188);
  if (local_168.Data != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_168.Data + 0x10))();
  }
  local_188[0].bAllowSubObjectReferences = false;
  local_178 = (ITextData *)&s_354fa969c46eb24d1ea03026;
  uStack_170._0_4_ = 0x18;
  pFVar10 = FText::AsLocalizable_Advanced_LocText
                      ((FText *)&local_168,L"StructuredLogFormatTest",L"ObjectId",L"{ObjectId}");
  local_108.Reference = local_178;
  uStack_100 = uStack_170;
  `UE::FStructuredLogFormatTest::TestBody'::__l2::<lambda_3>::operator()
            (&local_158,pFVar10,(TStringView<char8_t> *)&local_108,local_188);
  if (local_168.Data != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_168.Data + 0x10))();
  }
  local_188[0].bAllowSubObjectReferences = false;
  local_178 = (ITextData *)0x15073dac8;
  uStack_170._0_4_ = 0x20;
  pFVar10 = FText::AsLocalizable_Advanced_LocText
                      ((FText *)&local_168,L"StructuredLogFormatTest",L"CustomById",L"{CustomById}")
  ;
  local_108.Reference = local_178;
  uStack_100 = uStack_170;
  `UE::FStructuredLogFormatTest::TestBody'::__l2::<lambda_3>::operator()
            (&local_158,pFVar10,(TStringView<char8_t> *)&local_108,local_188);
  if (local_168.Data != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_168.Data + 0x10))();
  }
  local_188[0].bAllowSubObjectReferences = false;
  local_178 = (ITextData *)0x15073db10;
  uStack_170._0_4_ = 0x23;
  pFVar10 = FText::AsLocalizable_Advanced_LocText
                      ((FText *)&local_168,L"StructuredLogFormatTest",L"CustomByName",
                       L"{CustomByName}");
  local_108.Reference = local_178;
  uStack_100 = uStack_170;
  `UE::FStructuredLogFormatTest::TestBody'::__l2::<lambda_3>::operator()
            (&local_158,pFVar10,(TStringView<char8_t> *)&local_108,local_188);
  if (local_168.Data != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_168.Data + 0x10))();
  }
  local_188[0].bAllowSubObjectReferences = false;
  local_178 = (ITextData *)&s_X_1_Y_2_Z_3;
  uStack_170._0_4_ = 0xb;
  pFVar10 = FText::AsLocalizable_Advanced_LocText
                      ((FText *)&local_168,L"StructuredLogFormatTest",L"ObjectText",L"{ObjectText}")
  ;
  local_108.Reference = local_178;
  uStack_100 = uStack_170;
  `UE::FStructuredLogFormatTest::TestBody'::__l2::<lambda_3>::operator()
            (&local_158,pFVar10,(TStringView<char8_t> *)&local_108,local_188);
  if (local_168.Data != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_168.Data + 0x10))();
  }
  local_188[0].bAllowSubObjectReferences = false;
  local_178 = (ITextData *)0x15073db78;
  uStack_170._0_4_ = 0x21;
  pFVar10 = FText::AsLocalizable_Advanced_LocText
                      ((FText *)&local_168,L"StructuredLogFormatTest",L"ObjectWithNestedText",
                       L"{ObjectWithNestedText}");
  local_108.Reference = local_178;
  uStack_100 = uStack_170;
  `UE::FStructuredLogFormatTest::TestBody'::__l2::<lambda_3>::operator()
            (&local_158,pFVar10,(TStringView<char8_t> *)&local_108,local_188);
  if (local_168.Data != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_168.Data + 0x10))();
  }
  local_188[0].bAllowSubObjectReferences = false;
  local_178 = (ITextData *)0x15073dbd0;
  uStack_170._0_4_ = 0x12;
  pFVar10 = FText::AsLocalizable_Advanced_LocText
                      ((FText *)&local_168,L"StructuredLogFormatTest",L"ArrayWithNestedText",
                       L"{ArrayWithNestedText}");
  local_108.Reference = local_178;
  uStack_100 = uStack_170;
  `UE::FStructuredLogFormatTest::TestBody'::__l2::<lambda_3>::operator()
            (&local_158,pFVar10,(TStringView<char8_t> *)&local_108,local_188);
  if (local_168.Data != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_168.Data + 0x10))();
  }
  local_188[0].bAllowSubObjectReferences = false;
  local_178 = (ITextData *)&s_X_1_Y_2_Z_3;
  uStack_170._0_4_ = 0xb;
  pFVar10 = FText::AsLocalizable_Advanced_LocText
                      ((FText *)&local_168,L"StructuredLogFormatTest",L"ObjectWithFormat",
                       L"{ObjectFormat}");
  local_108.Reference = local_178;
  uStack_100 = uStack_170;
  `UE::FStructuredLogFormatTest::TestBody'::__l2::<lambda_3>::operator()
            (&local_158,pFVar10,(TStringView<char8_t> *)&local_108,local_188);
  if (local_168.Data != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_168.Data + 0x10))();
  }
  local_188[0].bAllowSubObjectReferences = false;
  local_178 = (ITextData *)&s_Target__X_1_Y_2_Z_3___X_1;
  uStack_170._0_4_ = 0x19;
  pFVar10 = FText::AsLocalizable_Advanced_LocText
                      ((FText *)&local_168,L"StructuredLogFormatTest",L"ObjectWithNestedFormat",
                       L"{ObjectWithNestedFormat}");
  local_108.Reference = local_178;
  uStack_100 = uStack_170;
  `UE::FStructuredLogFormatTest::TestBody'::__l2::<lambda_3>::operator()
            (&local_158,pFVar10,(TStringView<char8_t> *)&local_108,local_188);
  if (local_168.Data != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_168.Data + 0x10))();
  }
  local_188[0].bAllowSubObjectReferences = false;
  local_178 = (ITextData *)0x15073dc90;
  uStack_170._0_4_ = 0xf;
  pFVar10 = FText::AsLocalizable_Advanced_LocText
                      ((FText *)&local_168,L"StructuredLogFormatTest",L"ArrayWithNestedFormat",
                       L"{ArrayWithNestedFormat}");
  local_108.Reference = local_178;
  uStack_100 = uStack_170;
  `UE::FStructuredLogFormatTest::TestBody'::__l2::<lambda_3>::operator()
            (&local_158,pFVar10,(TStringView<char8_t> *)&local_108,local_188);
  if (local_168.Data != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_168.Data + 0x10))();
  }
  local_188[0].bAllowSubObjectReferences = false;
  local_178 = (ITextData *)&s_X_1_Y_2_Z_3;
  uStack_170._0_4_ = 0xb;
  pFVar10 = FText::AsLocalizable_Advanced_LocText
                      ((FText *)&local_168,L"StructuredLogFormatTest",L"ObjectWithLocFormatFmt",
                       L"{ObjectLocFormat}");
  local_108.Reference = local_178;
  uStack_100 = uStack_170;
  `UE::FStructuredLogFormatTest::TestBody'::__l2::<lambda_3>::operator()
            (&local_158,pFVar10,(TStringView<char8_t> *)&local_108,local_188);
  if (local_168.Data != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_168.Data + 0x10))();
  }
  local_188[0].bAllowSubObjectReferences = false;
  local_178 = (ITextData *)&s_Target__X_1_Y_2_Z_3___X_1;
  uStack_170._0_4_ = 0x19;
  pFVar10 = FText::AsLocalizable_Advanced_LocText
                      ((FText *)&local_168,L"StructuredLogFormatTest",
                       L"ObjectWithNestedLocFormatFmt",L"{ObjectWithNestedLocFormat}");
  local_108.Reference = local_178;
  uStack_100 = uStack_170;
  `UE::FStructuredLogFormatTest::TestBody'::__l2::<lambda_3>::operator()
            (&local_158,pFVar10,(TStringView<char8_t> *)&local_108,local_188);
  if (local_168.Data != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_168.Data + 0x10))();
  }
  local_188[0].bAllowSubObjectReferences = false;
  local_178 = (ITextData *)0x15073dc90;
  uStack_170._0_4_ = 0xf;
  pFVar10 = FText::AsLocalizable_Advanced_LocText
                      ((FText *)&local_168,L"StructuredLogFormatTest",L"ArrayWithNestedLocFormatFmt"
                       ,L"{ArrayWithNestedLocFormat}");
  local_108.Reference = local_178;
  uStack_100 = uStack_170;
  `UE::FStructuredLogFormatTest::TestBody'::__l2::<lambda_3>::operator()
            (&local_158,pFVar10,(TStringView<char8_t> *)&local_108,local_188);
  if (local_168.Data != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_168.Data + 0x10))();
  }
  local_188[0].bAllowSubObjectReferences = true;
  local_178 = (ITextData *)&s__1__2__3_;
  uStack_170._0_4_ = 9;
  pFVar10 = FText::AsLocalizable_Advanced_LocText
                      ((FText *)&local_168,L"StructuredLogFormatTest",L"ObjectX",
                       L"`{{Object/X}, {Object/Y}, {Object/Z}`}");
  local_108.Reference = local_178;
  uStack_100 = uStack_170;
  `UE::FStructuredLogFormatTest::TestBody'::__l2::<lambda_3>::operator()
            (&local_158,pFVar10,(TStringView<char8_t> *)&local_108,local_188);
  if (local_168.Data != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_168.Data + 0x10))();
  }
  local_188[0].bAllowSubObjectReferences = true;
  local_178 = (ITextData *)&s_1;
  uStack_170._0_4_ = 1;
  pFVar10 = FText::AsLocalizable_Advanced_LocText
                      ((FText *)&local_168,L"StructuredLogFormatTest",L"ObjectTextX",
                       L"{ObjectText/X}");
  local_108.Reference = local_178;
  uStack_100 = uStack_170;
  `UE::FStructuredLogFormatTest::TestBody'::__l2::<lambda_3>::operator()
            (&local_158,pFVar10,(TStringView<char8_t> *)&local_108,local_188);
  if (local_168.Data != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_168.Data + 0x10))();
  }
  local_188[0].bAllowSubObjectReferences = true;
  local_178 = (ITextData *)0x15070c9fc;
  uStack_170._0_4_ = 4;
  pFVar10 = FText::AsLocalizable_Advanced_LocText
                      ((FText *)&local_168,L"StructuredLogFormatTest",L"ObjectWithNestedTextX",
                       L"{ObjectWithNestedText/X}");
  local_108.Reference = local_178;
  uStack_100 = uStack_170;
  `UE::FStructuredLogFormatTest::TestBody'::__l2::<lambda_3>::operator()
            (&local_158,pFVar10,(TStringView<char8_t> *)&local_108,local_188);
  if (local_168.Data != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_168.Data + 0x10))();
  }
  local_188[0].bAllowSubObjectReferences = false;
  pFVar10 = FText::AsLocalizable_Advanced_LocText
                      ((FText *)&local_108,L"StructuredLogFormatTest",L"TextFormat",
                       L"FText bWorks={True}");
  local_178 = &local_158;
  local_158 = (ITextData)0x0;
  local_168.Data =
       TFunctionWithContext<void_*___cdecl(int)>::
       Call<_UE::TLogTemplate<UE::Logging::Private::FUniqueLogTemplateStorage>::TLogTemplate<UE::Logging::Private::FUniqueLogTemplateStorage>_::__l2::<lambda_1>_>
  ;
  local_168.Size = (ulong64)&local_178;
  Logging::Private::CreateLocalizedLogTemplate
            (pFVar10,local_188,(FLogField *)0x0,0,
             (TFunctionWithContext<void_*___cdecl(int)> *)&local_168);
  if (local_108.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_108.Reference + 0x10))();
  }
  local_d8._0_8_ = &local_b8;
  local_d8._8_8_ = &local_b8;
  local_d8._24_8_ = local_d8._24_8_ & 0xffffffffffff0000;
  local_d8._16_8_ = &local_a0;
  local_f8 = local_138._24_8_;
  local_108.Reference = (ITextData *)local_138._0_8_;
  uStack_100 = local_138._8_8_;
  FormatLogTo((TStringBuilderBase<char8_t> *)local_d8,(FLogTemplate *)local_158,
              (FCbFieldViewIterator *)&local_108);
  if (local_d8._8_4_ - (int)local_d8._0_8_ == 0x11) {
    iVar7 = FGenericPlatformString::Strncmp((uchar *)local_d8._0_8_,"FText bWorks=true",0x11);
    if (iVar7 == 0) goto LAB_141c3be5f;
  }
  pFVar11 = FAutomationTestFramework::Get();
  pFVar5 = pFVar11->CurrentTest;
  pcVar6 = *(code **)(pFVar5->_padding_ + 0x28);
  ::FString::FString((FString *)&local_168,L"Condition failed");
  (*pcVar6)(pFVar5,&local_168,0);
  if (local_168.Data != (code *)0x0) {
    FMemory::Free(local_168.Data);
  }
LAB_141c3be5f:
  TStringBuilderBase<char8_t>::~TStringBuilderBase<char8_t>((TStringBuilderBase<char8_t> *)local_d8)
  ;
  Logging::Private::DestroyLogTemplate((FLogTemplate *)local_158);
  operator_delete__((void *)local_158);
  if ((longlong *)local_138._16_8_ != (longlong *)0x0) {
    LOCK();
    plVar1 = (longlong *)(local_138._16_8_ + 0x18);
    lVar3 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (((uint)lVar3 & 0x3fffffff) == 1) {
      (**(code **)(*(longlong *)local_138._16_8_ + 0x10))(local_138._16_8_);
      *(longlong *)(local_138._16_8_ + 8) = 0;
      *(longlong *)(local_138._16_8_ + 0x10) = 0;
      LOCK();
      puVar2 = (ulonglong *)(local_138._16_8_ + 0x18);
      uVar4 = *puVar2;
      *puVar2 = *puVar2 - 0x40000000;
      UNLOCK();
      if (((uint)(uVar4 >> 0x1e) & 0x3fffffff) == 1) {
        (*(code *)**(undefined8 **)local_138._16_8_)(local_138._16_8_,1);
      }
    }
  }
  return;
}

