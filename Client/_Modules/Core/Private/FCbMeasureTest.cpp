// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 11

// GetTestFlags @ 141ccc460

EAutomationTestFlags __thiscall FCbMeasureTest::GetTestFlags(FCbMeasureTest *this)

{
  return this->TestFlags;
}

// IsStressTest @ 141ccc4c0

bool __thiscall FCbMeasureTest::IsStressTest(FCbMeasureTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141ccc4d0

uint __thiscall FCbMeasureTest::GetRequiredDeviceNum(FCbMeasureTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 141ccc4e0

FString * __thiscall
FCbMeasureTest::GetTestSourceFileName(FCbMeasureTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Serialization\\CompactBinarySerializationTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141ccc510

int __thiscall FCbMeasureTest::GetTestSourceFileLine(FCbMeasureTest *this)

{
  return 0xd;
}

// GetTests @ 141ccc520

/* WARNING: Removing unreachable block (ram,0x000141ccc69e) */

void __thiscall
FCbMeasureTest::GetTests
          (FCbMeasureTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
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

// RunTest @ 141ccc6c0

bool __thiscall FCbMeasureTest::RunTest(FCbMeasureTest *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 141ccc6f0

FString * __thiscall
FCbMeasureTest::GetBeautifiedTestName(FCbMeasureTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FCbMeasureTest @ 141ce3920

FCbMeasureTest * __thiscall FCbMeasureTest::FCbMeasureTest(FCbMeasureTest *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7FCbMeasureTest__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[ApplicationContextMask][SmokeFilter]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"System::Core::Serialization::MeasureCompactBinary");
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

// operator() @ 141cf2a20

void __thiscall
`FCbMeasureTest::TestBody'::__l2::<lambda_1>::operator()
          (void *this,wchar_t *param_1,initializer_list<unsigned_char> *param_2,bool param_3,
          ulong64 param_4,ECbFieldType param_5,ECbFieldType param_6)

{
  FAutomationTestBase *pFVar1;
  code *pcVar2;
  bool bVar3;
  FAutomationTestFramework *pFVar4;
  ulong64 uVar5;
  wchar_t *pwVar6;
  ulong64 uVar7;
  ulong64 local_res18;
  ECbFieldType local_res20 [8];
  TMemoryView<void_const_> local_58;
  TMemoryView<void_const_> local_48;
  
  local_58.Data = param_2->_First;
  local_58.Size = (ulong64)((int)param_2->_Last - (int)local_58.Data);
  local_res20[0] = HasFieldName|HasFieldType|Reserved|CustomByName;
  local_res18 = 0xffffffffffffffff;
  bVar3 = TryMeasureCompactBinary(&local_58,local_res20,&local_res18,param_6);
  pFVar4 = FAutomationTestFramework::Get();
  pFVar1 = pFVar4->CurrentTest;
  ::FString::PrintfImpl((FString *)&local_58,L"TryMeasureCompactBinary(%s)");
  if (bVar3 != param_3) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl((FString *)&local_48,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_48,0);
    if (local_48.Data != (void *)0x0) {
      FMemory::Free(local_48.Data);
    }
  }
  if (local_58.Data != (wchar_t *)0x0) {
    FMemory::Free(local_58.Data);
  }
  pFVar4 = FAutomationTestFramework::Get();
  pFVar1 = pFVar4->CurrentTest;
  ::FString::PrintfImpl((FString *)&local_58,L"TryMeasureCompactBinary(%s)->Type");
  if (local_res20[0] != param_5) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl((FString *)&local_48,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_48,0);
    if (local_48.Data != (void *)0x0) {
      FMemory::Free(local_48.Data);
    }
  }
  if (local_58.Data != (wchar_t *)0x0) {
    FMemory::Free(local_58.Data);
  }
  pFVar4 = FAutomationTestFramework::Get();
  pFVar1 = pFVar4->CurrentTest;
  ::FString::PrintfImpl((FString *)&local_58,L"TryMeasureCompactBinary(%s)->Size");
  pwVar6 = L"";
  if ((int)local_58.Size != 0) {
    pwVar6 = local_58.Data;
  }
  FAutomationTestBase::TestEqual(pFVar1,pwVar6,local_res18,param_4);
  if (local_58.Data != (wchar_t *)0x0) {
    FMemory::Free(local_58.Data);
  }
  if (local_res18 == param_4) {
    local_48.Data = param_2->_First;
    local_48.Size = (ulong64)((int)param_2->_Last - (int)local_48.Data);
    uVar5 = MeasureCompactBinary(&local_48,param_6);
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    ::FString::PrintfImpl((FString *)&local_58,L"MeasureCompactBinary(%s)");
    uVar7 = 0;
    if (param_3) {
      uVar7 = param_4;
    }
    pwVar6 = L"";
    if ((int)local_58.Size != 0) {
      pwVar6 = local_58.Data;
    }
    FAutomationTestBase::TestEqual(pFVar1,pwVar6,uVar5,uVar7);
    if (local_58.Data != (wchar_t *)0x0) {
      FMemory::Free(local_58.Data);
    }
  }
  return;
}

// TestBody @ 141d04210

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FCbMeasureTest::TestBody(FCbMeasureTest *this,FString *param_1)

{
  undefined1 auStackY_78 [32];
  undefined1 local_38 [16];
  initializer_list<unsigned_char> local_28;
  undefined4 local_18;
  uchar local_14;
  uchar local_13 [3];
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_78;
  local_28._First = (uchar *)0x0;
  local_28._Last = (uchar *)0x0;
  `FCbMeasureTest::TestBody'::__l2::<lambda_1>::operator()
            (local_38,L"Empty",&local_28,false,1,None,HasFieldType);
  local_28._First = (uchar *)&local_18;
  local_28._Last = (uchar *)((longlong)&local_18 + 1);
  local_18 = local_18 & 0xffffff00;
  `FCbMeasureTest::TestBody'::__l2::<lambda_1>::operator()
            (local_38,L"None",&local_28,false,0,None,HasFieldType);
  local_28._First = (uchar *)0x0;
  local_28._Last = (uchar *)0x0;
  `FCbMeasureTest::TestBody'::__l2::<lambda_1>::operator()
            (local_38,L"None, NoType",&local_28,false,0,None,None);
  local_28._First = (uchar *)0x0;
  local_28._Last = (uchar *)0x0;
  `FCbMeasureTest::TestBody'::__l2::<lambda_1>::operator()
            (local_38,L"None, NoType, Name",&local_28,false,0,None,HasFieldName);
  local_28._First = (uchar *)&local_18;
  local_28._Last = (uchar *)((longlong)&local_18 + 1);
  local_18 = CONCAT31(local_18._1_3_,1);
  `FCbMeasureTest::TestBody'::__l2::<lambda_1>::operator()
            (local_38,L"Null",&local_28,true,1,Null,HasFieldType);
  local_28._First = (uchar *)&local_18;
  local_28._Last = (uchar *)((longlong)&local_18 + 2);
  local_18._0_2_ = 0x1e81;
  `FCbMeasureTest::TestBody'::__l2::<lambda_1>::operator()
            (local_38,L"Null, NameSize1B",&local_28,true,0x20,HasFieldName|Null,HasFieldType);
  local_28._First = (uchar *)&local_18;
  local_28._Last = (uchar *)((longlong)&local_18 + 3);
  local_18 = CONCAT13(local_18._3_1_,0x808081);
  `FCbMeasureTest::TestBody'::__l2::<lambda_1>::operator()
            (local_38,L"Null, NameSize2B",&local_28,true,0x83,HasFieldName|Null,HasFieldType);
  local_28._First = (uchar *)&local_18;
  local_28._Last = (uchar *)((longlong)&local_18 + 2);
  local_18._0_2_ = 0x8081;
  `FCbMeasureTest::TestBody'::__l2::<lambda_1>::operator()
            (local_38,L"Null, NameSize2BShort",&local_28,false,3,HasFieldName|Null,HasFieldType);
  local_28._First = (uchar *)&local_18;
  local_28._Last = (uchar *)((longlong)&local_18 + 2);
  local_18 = CONCAT22(local_18._2_2_,0xc081);
  `FCbMeasureTest::TestBody'::__l2::<lambda_1>::operator()
            (local_38,L"Null, NameSize3BShort",&local_28,false,4,HasFieldName|Null,HasFieldType);
  local_28._First = (uchar *)&local_18;
  local_28._Last = (uchar *)((longlong)&local_18 + 1);
  local_18._0_1_ = 0x81;
  `FCbMeasureTest::TestBody'::__l2::<lambda_1>::operator()
            (local_38,L"Null, MissingName",&local_28,false,2,HasFieldName|Null,HasFieldType);
  local_28._First = (uchar *)0x0;
  local_28._Last = (uchar *)0x0;
  `FCbMeasureTest::TestBody'::__l2::<lambda_1>::operator()
            (local_38,L"Null, NoType",&local_28,true,0,Null,Null);
  local_28._First = (uchar *)&local_18;
  local_28._Last = (uchar *)((longlong)&local_18 + 1);
  local_18 = CONCAT31(local_18._1_3_,0x1e);
  `FCbMeasureTest::TestBody'::__l2::<lambda_1>::operator()
            (local_38,L"Null, NoType, NameSize1B",&local_28,true,0x1f,HasFieldName|Null,
             HasFieldName|Null);
  local_28._First = (uchar *)&local_18;
  local_28._Last = (uchar *)((longlong)&local_18 + 2);
  local_18 = CONCAT22(local_18._2_2_,0x8080);
  `FCbMeasureTest::TestBody'::__l2::<lambda_1>::operator()
            (local_38,L"Null, NoType, NameSize2B",&local_28,true,0x82,HasFieldName|Null,
             HasFieldName|Null);
  local_28._First = (uchar *)&local_18;
  local_18._0_1_ = 0x80;
  local_28._Last = (uchar *)((longlong)&local_18 + 1);
  `FCbMeasureTest::TestBody'::__l2::<lambda_1>::operator()
            (local_38,L"Null, NoType, NameSize2BShort",&local_28,false,2,HasFieldName|Null,
             HasFieldName|Null);
  local_28._First = (uchar *)&local_18;
  local_28._Last = (uchar *)((longlong)&local_18 + 1);
  local_18._0_1_ = 0xc0;
  `FCbMeasureTest::TestBody'::__l2::<lambda_1>::operator()
            (local_38,L"Null, NoType, NameSize3BShort",&local_28,false,3,HasFieldName|Null,
             HasFieldName|Null);
  local_28._First = (uchar *)0x0;
  local_28._Last = (uchar *)0x0;
  `FCbMeasureTest::TestBody'::__l2::<lambda_1>::operator()
            (local_38,L"Null, NoType, MissingName",&local_28,false,1,HasFieldName|Null,
             HasFieldName|Null);
  local_28._First = (uchar *)&local_18;
  local_28._Last = (uchar *)((longlong)&local_18 + 1);
  local_18 = CONCAT31(local_18._1_3_,2);
  `FCbMeasureTest::TestBody'::__l2::<lambda_1>::operator()
            (local_38,L"Object, NoSize",&local_28,false,2,Object,HasFieldType);
  local_28._First = (uchar *)&local_18;
  local_28._Last = (uchar *)((longlong)&local_18 + 2);
  local_18 = CONCAT22(local_18._2_2_,0x1e02);
  `FCbMeasureTest::TestBody'::__l2::<lambda_1>::operator()
            (local_38,L"Object, Size1B",&local_28,true,0x20,Object,HasFieldType);
  local_28._First = (uchar *)&local_18;
  local_28._Last = (uchar *)((longlong)&local_18 + 1);
  local_18 = CONCAT31(local_18._1_3_,3);
  `FCbMeasureTest::TestBody'::__l2::<lambda_1>::operator()
            (local_38,L"UniformObject, NoSize",&local_28,false,2,UniformObject,HasFieldType);
  local_28._First = (uchar *)&local_18;
  local_28._Last = (uchar *)((longlong)&local_18 + 2);
  local_18 = CONCAT22(local_18._2_2_,0x1e03);
  `FCbMeasureTest::TestBody'::__l2::<lambda_1>::operator()
            (local_38,L"UniformObject, Size1B",&local_28,true,0x20,UniformObject,HasFieldType);
  local_28._First = (uchar *)&local_18;
  local_28._Last = (uchar *)((longlong)&local_18 + 1);
  local_18 = CONCAT31(local_18._1_3_,4);
  `FCbMeasureTest::TestBody'::__l2::<lambda_1>::operator()
            (local_38,L"Array, NoSize",&local_28,false,2,Array,HasFieldType);
  local_28._First = (uchar *)&local_18;
  local_28._Last = (uchar *)((longlong)&local_18 + 2);
  local_18 = CONCAT22(local_18._2_2_,0x1e04);
  `FCbMeasureTest::TestBody'::__l2::<lambda_1>::operator()
            (local_38,L"Array, Size1B",&local_28,true,0x20,Array,HasFieldType);
  local_28._First = (uchar *)&local_18;
  local_28._Last = (uchar *)((longlong)&local_18 + 1);
  local_18 = CONCAT31(local_18._1_3_,5);
  `FCbMeasureTest::TestBody'::__l2::<lambda_1>::operator()
            (local_38,L"UniformArray, NoSize",&local_28,false,2,UniformArray,HasFieldType);
  local_28._First = (uchar *)&local_18;
  local_28._Last = (uchar *)((longlong)&local_18 + 2);
  local_18 = CONCAT22(local_18._2_2_,0x1e05);
  `FCbMeasureTest::TestBody'::__l2::<lambda_1>::operator()
            (local_38,L"UniformArray, Size1B",&local_28,true,0x20,UniformArray,HasFieldType);
  local_28._First = (uchar *)&local_18;
  local_28._Last = (uchar *)((longlong)&local_18 + 1);
  local_18 = CONCAT31(local_18._1_3_,6);
  `FCbMeasureTest::TestBody'::__l2::<lambda_1>::operator()
            (local_38,L"Binary, NoSize",&local_28,false,2,Binary,HasFieldType);
  local_28._First = (uchar *)&local_18;
  local_28._Last = (uchar *)((longlong)&local_18 + 2);
  local_18 = CONCAT22(local_18._2_2_,0x1e06);
  `FCbMeasureTest::TestBody'::__l2::<lambda_1>::operator()
            (local_38,L"Binary, Size1B",&local_28,true,0x20,Binary,HasFieldType);
  local_28._First = (uchar *)&local_18;
  local_28._Last = (uchar *)((longlong)&local_18 + 1);
  local_18 = CONCAT31(local_18._1_3_,7);
  `FCbMeasureTest::TestBody'::__l2::<lambda_1>::operator()
            (local_38,L"String, NoSize",&local_28,false,2,String,HasFieldType);
  local_28._First = (uchar *)&local_18;
  local_28._Last = (uchar *)((longlong)&local_18 + 2);
  local_18._0_2_ = 0x1e07;
  `FCbMeasureTest::TestBody'::__l2::<lambda_1>::operator()
            (local_38,L"String, Size1B",&local_28,true,0x20,String,HasFieldType);
  local_28._First = (uchar *)&local_18;
  local_28._Last = (uchar *)((longlong)&local_18 + 3);
  local_18 = CONCAT13(local_18._3_1_,0x808007);
  `FCbMeasureTest::TestBody'::__l2::<lambda_1>::operator()
            (local_38,L"String, Size2B",&local_28,true,0x83,String,HasFieldType);
  local_28._First = (uchar *)&local_18;
  local_28._Last = (uchar *)((longlong)&local_18 + 2);
  local_18._0_2_ = 0x8007;
  `FCbMeasureTest::TestBody'::__l2::<lambda_1>::operator()
            (local_38,L"String, Size2BShort",&local_28,false,3,String,HasFieldType);
  local_28._First = (uchar *)&local_18;
  local_28._Last = (uchar *)((longlong)&local_18 + 2);
  local_18 = CONCAT22(local_18._2_2_,0xc007);
  `FCbMeasureTest::TestBody'::__l2::<lambda_1>::operator()
            (local_38,L"String, Size3BShort",&local_28,false,4,String,HasFieldType);
  local_28._First = (uchar *)&local_18;
  local_28._Last = (uchar *)((longlong)&local_18 + 1);
  local_18 = CONCAT31(local_18._1_3_,0x87);
  `FCbMeasureTest::TestBody'::__l2::<lambda_1>::operator()
            (local_38,L"String, NameNoSize",&local_28,false,2,HasFieldName|String,HasFieldType);
  local_18._0_2_ = 0x187;
  local_28._First = (uchar *)&local_18;
  local_28._Last = (uchar *)((longlong)&local_18 + 2);
  `FCbMeasureTest::TestBody'::__l2::<lambda_1>::operator()
            (local_38,L"String, NameSize1BMissingText",&local_28,false,3,HasFieldName|String,
             HasFieldType);
  local_28._First = (uchar *)&local_18;
  local_28._Last = (uchar *)((longlong)&local_18 + 3);
  local_18 = CONCAT13(local_18._3_1_,0x410187);
  `FCbMeasureTest::TestBody'::__l2::<lambda_1>::operator()
            (local_38,L"String, NameSize1B, NoSize",&local_28,false,4,HasFieldName|String,
             HasFieldType);
  local_28._First = (uchar *)&local_18;
  local_28._Last = &local_14;
  local_18 = 0x1e410187;
  `FCbMeasureTest::TestBody'::__l2::<lambda_1>::operator()
            (local_38,L"String, NameSize1B, Size1B",&local_28,true,0x22,HasFieldName|String,
             HasFieldType);
  local_28._First = (uchar *)&local_18;
  local_28._Last = local_13;
  local_18 = 0x80410187;
  local_14 = 0x80;
  `FCbMeasureTest::TestBody'::__l2::<lambda_1>::operator()
            (local_38,L"String, NameSize1B, Size2B",&local_28,true,0x85,HasFieldName|String,
             HasFieldType);
  local_28._First = (uchar *)&local_18;
  local_28._Last = &local_14;
  local_18 = 0x80410187;
  `FCbMeasureTest::TestBody'::__l2::<lambda_1>::operator()
            (local_38,L"String, NameSize1B, Size2BShort",&local_28,false,5,HasFieldName|String,
             HasFieldType);
  local_28._First = (uchar *)&local_18;
  local_28._Last = &local_14;
  local_18 = 0xc0410187;
  `FCbMeasureTest::TestBody'::__l2::<lambda_1>::operator()
            (local_38,L"String, NameSize1B, Size3BShort",&local_28,false,6,HasFieldName|String,
             HasFieldType);
  local_28._First = (uchar *)&local_18;
  local_18._0_2_ = 0x8087;
  local_28._Last = (uchar *)((longlong)&local_18 + 2);
  `FCbMeasureTest::TestBody'::__l2::<lambda_1>::operator()
            (local_38,L"String, NameSize2BShort",&local_28,false,3,HasFieldName|String,HasFieldType)
  ;
  local_28._First = (uchar *)&local_18;
  local_28._Last = (uchar *)((longlong)&local_18 + 2);
  local_18 = CONCAT22(local_18._2_2_,0xc087);
  `FCbMeasureTest::TestBody'::__l2::<lambda_1>::operator()
            (local_38,L"String, NameSize3BShort",&local_28,false,4,HasFieldName|String,HasFieldType)
  ;
  local_28._First = (uchar *)&local_18;
  local_28._Last = (uchar *)((longlong)&local_18 + 1);
  local_18 = CONCAT31(local_18._1_3_,8);
  `FCbMeasureTest::TestBody'::__l2::<lambda_1>::operator()
            (local_38,L"IntegerPositive, NoValue",&local_28,false,2,IntegerPositive,HasFieldType);
  local_28._First = (uchar *)&local_18;
  local_28._Last = (uchar *)((longlong)&local_18 + 2);
  local_18._0_2_ = 0x7f08;
  `FCbMeasureTest::TestBody'::__l2::<lambda_1>::operator()
            (local_38,L"IntegerPositive, Value1B",&local_28,true,2,IntegerPositive,HasFieldType);
  local_28._First = (uchar *)&local_18;
  local_28._Last = (uchar *)((longlong)&local_18 + 2);
  local_18 = CONCAT22(local_18._2_2_,0x8008);
  `FCbMeasureTest::TestBody'::__l2::<lambda_1>::operator()
            (local_38,L"IntegerPositive, Value2B",&local_28,true,3,IntegerPositive,HasFieldType);
  local_28._First = (uchar *)&local_18;
  local_28._Last = (uchar *)((longlong)&local_18 + 1);
  local_18 = CONCAT31(local_18._1_3_,9);
  `FCbMeasureTest::TestBody'::__l2::<lambda_1>::operator()
            (local_38,L"IntegerNegative, NoValue",&local_28,false,2,IntegerNegative,HasFieldType);
  local_28._First = (uchar *)&local_18;
  local_18._0_2_ = 0x7f09;
  local_28._Last = (uchar *)((longlong)&local_18 + 2);
  `FCbMeasureTest::TestBody'::__l2::<lambda_1>::operator()
            (local_38,L"IntegerNegative, Value1B",&local_28,true,2,IntegerNegative,HasFieldType);
  local_28._First = (uchar *)&local_18;
  local_28._Last = (uchar *)((longlong)&local_18 + 2);
  local_18 = CONCAT22(local_18._2_2_,0x8009);
  `FCbMeasureTest::TestBody'::__l2::<lambda_1>::operator()
            (local_38,L"IntegerNegative, Value2B",&local_28,true,3,IntegerNegative,HasFieldType);
  local_28._First = (uchar *)&local_18;
  local_28._Last = (uchar *)((longlong)&local_18 + 1);
  local_18 = CONCAT31(local_18._1_3_,10);
  `FCbMeasureTest::TestBody'::__l2::<lambda_1>::operator()
            (local_38,L"Float32",&local_28,true,5,Float32,HasFieldType);
  local_28._First = (uchar *)&local_18;
  local_28._Last = (uchar *)((longlong)&local_18 + 2);
  local_18._0_2_ = 0x1e8a;
  `FCbMeasureTest::TestBody'::__l2::<lambda_1>::operator()
            (local_38,L"Float32, NameSize1B",&local_28,true,0x24,HasFieldName|Float32,HasFieldType);
  local_28._First = (uchar *)&local_18;
  local_28._Last = (uchar *)((longlong)&local_18 + 3);
  local_18 = CONCAT13(local_18._3_1_,0x80808a);
  `FCbMeasureTest::TestBody'::__l2::<lambda_1>::operator()
            (local_38,L"Float32, NameSize2B",&local_28,true,0x87,HasFieldName|Float32,HasFieldType);
  local_28._First = (uchar *)&local_18;
  local_28._Last = (uchar *)((longlong)&local_18 + 2);
  local_18 = CONCAT22(local_18._2_2_,0x808a);
  `FCbMeasureTest::TestBody'::__l2::<lambda_1>::operator()
            (local_38,L"Float32, NameSize2BShort",&local_28,false,3,HasFieldName|Float32,
             HasFieldType);
  local_28._First = (uchar *)&local_18;
  local_28._Last = (uchar *)((longlong)&local_18 + 1);
  local_18._0_1_ = 0x8a;
  `FCbMeasureTest::TestBody'::__l2::<lambda_1>::operator()
            (local_38,L"Float32, MissingName",&local_28,false,2,HasFieldName|Float32,HasFieldType);
  local_28._First = (uchar *)0x0;
  local_28._Last = (uchar *)0x0;
  `FCbMeasureTest::TestBody'::__l2::<lambda_1>::operator()
            (local_38,L"Float32, NoType",&local_28,true,4,Float32,Float32);
  local_28._First = (uchar *)&local_18;
  local_28._Last = (uchar *)((longlong)&local_18 + 1);
  local_18 = CONCAT31(local_18._1_3_,0x1e);
  `FCbMeasureTest::TestBody'::__l2::<lambda_1>::operator()
            (local_38,L"Float32, NoType, NameSize1B",&local_28,true,0x23,HasFieldName|Float32,
             HasFieldName|Float32);
  local_28._First = (uchar *)&local_18;
  local_28._Last = (uchar *)((longlong)&local_18 + 2);
  local_18 = CONCAT22(local_18._2_2_,0x8080);
  `FCbMeasureTest::TestBody'::__l2::<lambda_1>::operator()
            (local_38,L"Float32, NoType, NameSize2B",&local_28,true,0x86,HasFieldName|Float32,
             HasFieldName|Float32);
  local_28._First = (uchar *)&local_18;
  local_28._Last = (uchar *)((longlong)&local_18 + 1);
  local_18._0_1_ = 0x80;
  `FCbMeasureTest::TestBody'::__l2::<lambda_1>::operator()
            (local_38,L"Float32, NoType, NameSize2BShort",&local_28,false,2,HasFieldName|Float32,
             HasFieldName|Float32);
  local_28._First = (uchar *)0x0;
  local_28._Last = (uchar *)0x0;
  `FCbMeasureTest::TestBody'::__l2::<lambda_1>::operator()
            (local_38,L"Float32, NoType, MissingName",&local_28,false,1,HasFieldName|Float32,
             HasFieldName|Float32);
  local_28._First = (uchar *)&local_18;
  local_28._Last = (uchar *)((longlong)&local_18 + 1);
  local_18._0_1_ = '\v';
  `FCbMeasureTest::TestBody'::__l2::<lambda_1>::operator()
            (local_38,L"Float64",&local_28,true,9,Float64,HasFieldType);
  local_28._First = (uchar *)&local_18;
  local_18._0_1_ = '\f';
  local_28._Last = (uchar *)((longlong)&local_18 + 1);
  `FCbMeasureTest::TestBody'::__l2::<lambda_1>::operator()
            (local_38,L"BoolFalse",&local_28,true,1,BoolFalse,HasFieldType);
  local_28._First = (uchar *)&local_18;
  local_28._Last = (uchar *)((longlong)&local_18 + 1);
  local_18._0_1_ = '\r';
  `FCbMeasureTest::TestBody'::__l2::<lambda_1>::operator()
            (local_38,L"BoolTrue",&local_28,true,1,BoolTrue,HasFieldType);
  local_28._First = (uchar *)&local_18;
  local_28._Last = (uchar *)((longlong)&local_18 + 1);
  local_18._0_1_ = '\x0e';
  `FCbMeasureTest::TestBody'::__l2::<lambda_1>::operator()
            (local_38,L"ObjectAttachment",&local_28,true,0x15,ObjectAttachment,HasFieldType);
  local_28._First = (uchar *)&local_18;
  local_28._Last = (uchar *)((longlong)&local_18 + 1);
  local_18._0_1_ = '\x0f';
  `FCbMeasureTest::TestBody'::__l2::<lambda_1>::operator()
            (local_38,L"BinaryAttachment",&local_28,true,0x15,BinaryAttachment,HasFieldType);
  local_28._First = (uchar *)&local_18;
  local_28._Last = (uchar *)((longlong)&local_18 + 1);
  local_18._0_1_ = '\x10';
  `FCbMeasureTest::TestBody'::__l2::<lambda_1>::operator()
            (local_38,L"Hash",&local_28,true,0x15,Hash,HasFieldType);
  local_28._First = (uchar *)&local_18;
  local_28._Last = (uchar *)((longlong)&local_18 + 1);
  local_18._0_1_ = '\x11';
  `FCbMeasureTest::TestBody'::__l2::<lambda_1>::operator()
            (local_38,L"Uuid",&local_28,true,0x11,Uuid,HasFieldType);
  local_28._First = (uchar *)&local_18;
  local_18._0_1_ = '\x12';
  local_28._Last = (uchar *)((longlong)&local_18 + 1);
  `FCbMeasureTest::TestBody'::__l2::<lambda_1>::operator()
            (local_38,L"DateTime",&local_28,true,9,DateTime,HasFieldType);
  local_28._First = (uchar *)&local_18;
  local_28._Last = (uchar *)((longlong)&local_18 + 1);
  local_18._0_1_ = '\x13';
  `FCbMeasureTest::TestBody'::__l2::<lambda_1>::operator()
            (local_38,L"TimeSpan",&local_28,true,9,TimeSpan,HasFieldType);
  local_28._First = (uchar *)&local_18;
  local_28._Last = (uchar *)((longlong)&local_18 + 1);
  local_18 = CONCAT31(local_18._1_3_,0x14);
  `FCbMeasureTest::TestBody'::__l2::<lambda_1>::operator()
            (local_38,L"ObjectId",&local_28,true,0xd,ObjectId,HasFieldType);
  local_28._First = (uchar *)&local_18;
  local_28._Last = (uchar *)((longlong)&local_18 + 2);
  local_18._0_2_ = 0x7f1e;
  `FCbMeasureTest::TestBody'::__l2::<lambda_1>::operator()
            (local_38,L"CustomById, Size1B",&local_28,true,0x81,CustomById,HasFieldType);
  local_28._First = (uchar *)&local_18;
  local_28._Last = (uchar *)((longlong)&local_18 + 3);
  local_18 = CONCAT13(local_18._3_1_,0x80801e);
  `FCbMeasureTest::TestBody'::__l2::<lambda_1>::operator()
            (local_38,L"CustomById, Size2B",&local_28,true,0x83,CustomById,HasFieldType);
  local_28._First = (uchar *)&local_18;
  local_28._Last = (uchar *)((longlong)&local_18 + 1);
  local_18 = CONCAT31(local_18._1_3_,0x1e);
  `FCbMeasureTest::TestBody'::__l2::<lambda_1>::operator()
            (local_38,L"CustomById, Size1BShort",&local_28,false,2,CustomById,HasFieldType);
  local_28._First = (uchar *)&local_18;
  local_28._Last = (uchar *)((longlong)&local_18 + 2);
  local_18._0_2_ = 0x801e;
  `FCbMeasureTest::TestBody'::__l2::<lambda_1>::operator()
            (local_38,L"CustomById, Size2BShort",&local_28,false,3,CustomById,HasFieldType);
  local_28._First = (uchar *)&local_18;
  local_28._Last = (uchar *)((longlong)&local_18 + 2);
  local_18._0_2_ = 0xff1e;
  `FCbMeasureTest::TestBody'::__l2::<lambda_1>::operator()
            (local_38,L"CustomById, Size9BShort",&local_28,false,10,CustomById,HasFieldType);
  local_28._First = (uchar *)&local_18;
  local_28._Last = (uchar *)((longlong)&local_18 + 2);
  local_18._0_2_ = 0x7f1f;
  `FCbMeasureTest::TestBody'::__l2::<lambda_1>::operator()
            (local_38,L"CustomByName, Size1B",&local_28,true,0x81,CustomByName,HasFieldType);
  local_28._First = (uchar *)&local_18;
  local_28._Last = (uchar *)((longlong)&local_18 + 3);
  local_18 = CONCAT13(local_18._3_1_,0x80801f);
  `FCbMeasureTest::TestBody'::__l2::<lambda_1>::operator()
            (local_38,L"CustomByName, Size2B",&local_28,true,0x83,CustomByName,HasFieldType);
  local_28._First = (uchar *)&local_18;
  local_28._Last = (uchar *)((longlong)&local_18 + 1);
  local_18 = CONCAT31(local_18._1_3_,0x1f);
  `FCbMeasureTest::TestBody'::__l2::<lambda_1>::operator()
            (local_38,L"CustomByName, Size1BShort",&local_28,false,2,CustomByName,HasFieldType);
  local_28._First = (uchar *)&local_18;
  local_28._Last = (uchar *)((longlong)&local_18 + 2);
  local_18._0_2_ = 0x801f;
  `FCbMeasureTest::TestBody'::__l2::<lambda_1>::operator()
            (local_38,L"CustomByName, Size2BShort",&local_28,false,3,CustomByName,HasFieldType);
  local_28._First = (uchar *)&local_18;
  local_28._Last = (uchar *)((longlong)&local_18 + 2);
  local_18 = CONCAT22(local_18._2_2_,0xff1f);
  `FCbMeasureTest::TestBody'::__l2::<lambda_1>::operator()
            (local_38,L"CustomByName, Size9BShort",&local_28,false,10,CustomByName,HasFieldType);
  return;
}

