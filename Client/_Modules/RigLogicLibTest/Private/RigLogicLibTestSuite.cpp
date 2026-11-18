// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigLogicLibTest
// Functions: 37

// `dynamic_initializer_for_'FRigLogicLibTestSuiteAutomationTestInstance'' @ 14129e0d0

void __cdecl
`anonymous_namespace'::_dynamic_initializer_for__FRigLogicLibTestSuiteAutomationTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FRigLogicLibTestSuite");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)&FRigLogicLibTestSuiteAutomationTestInstance,&local_18,true);
  FRigLogicLibTestSuiteAutomationTestInstance._0_8_ = &___7FRigLogicLibTestSuite__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FRigLogicLibTestSuiteAutomationTestInstance__);
  return;
}

// GetTestFlags @ 14c27d5f0

EAutomationTestFlags __thiscall FRigLogicLibTestSuite::GetTestFlags(FRigLogicLibTestSuite *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 14c27d600

bool __thiscall FRigLogicLibTestSuite::IsStressTest(FRigLogicLibTestSuite *this)

{
  return true;
}

// GetRequiredDeviceNum @ 14c27d610

uint __thiscall FRigLogicLibTestSuite::GetRequiredDeviceNum(FRigLogicLibTestSuite *this)

{
  return 1;
}

// GetTestSourceFileName @ 14c27d620

FString * __thiscall
FRigLogicLibTestSuite::GetTestSourceFileName
          (FRigLogicLibTestSuite *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\RigLogicLibTestSuite.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 14c27d650

int __thiscall FRigLogicLibTestSuite::GetTestSourceFileLine(FRigLogicLibTestSuite *this)

{
  return 0x23;
}

// GetTests @ 14c27d660

void __thiscall
FRigLogicLibTestSuite::GetTests
          (FRigLogicLibTestSuite *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  code *pcVar2;
  ForAnyElementType _Src;
  bool bVar3;
  int iVar4;
  UnitTest *this_00;
  TestSuite *pTVar5;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar6;
  FScriptContainerElement *pFVar7;
  int iVar8;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_68;
  FString local_58;
  FStringFormatArg local_48;
  
  testing::InitGoogleTest();
  this_00 = testing::UnitTest::GetInstance();
  iVar8 = 0;
  iVar4 = testing::UnitTest::total_test_suite_count(this_00);
  if (0 < iVar4) {
    do {
      pTVar5 = testing::UnitTest::GetTestSuite(this_00,iVar8);
      pbVar6 = &pTVar5->name_;
      if (0xf < (pTVar5->name_)._Mypair._Myval2._Myres) {
        pbVar6 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 (pbVar6->_Mypair)._Myval2._Bx._Ptr;
      }
      FStringFormatArg::FStringFormatArg(&local_48,(char *)pbVar6);
      local_68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_68.ArrayNum = 1;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,1,0,&local_68.AllocatorInstance,1,&local_68.ArrayMax);
      ConstructItems<FStringFormatArg,FStringFormatArg,int>
                (local_68.AllocatorInstance.Data,&local_48,1);
      ::FString::FormatImpl(&local_58,L"{0}",&local_68);
      DestructItems<FStringFormatArg,int>
                ((FStringFormatArg *)local_68.AllocatorInstance.Data,local_68.ArrayNum);
      if ((FStringFormatArg *)local_68.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
        FMemory::Free(local_68.AllocatorInstance.Data);
      }
      if (local_48.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.StringValue.Data.AllocatorInstance.Data);
      }
      pFVar7 = (param_1->AllocatorInstance).Data;
      if (((pFVar7 <= (FScriptContainerElement *)&local_58) &&
          ((FScriptContainerElement *)&local_58 < pFVar7 + (longlong)param_1->ArrayMax * 0x10)) &&
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
      _Src.Data = local_58.Data.AllocatorInstance.Data;
      pFVar7 = (param_1->AllocatorInstance).Data + (longlong)iVar4 * 0x10;
      param_1->ArrayNum = iVar4 + 1;
      *(undefined8 *)&pFVar7->field_0x0 = 0;
      iVar4 = local_58.Data.ArrayNum;
      *(int *)&pFVar7[8].field_0x0 = iVar4;
      if (iVar4 == 0) {
        *(int *)(pFVar7 + 0xc) = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,iVar4,0,(ForAnyElementType *)pFVar7,iVar4,(int *)(pFVar7 + 0xc));
        memcpy(*(void **)&pFVar7->field_0x0,_Src.Data,(longlong)iVar4 * 2);
      }
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      iVar8 = iVar8 + 1;
      iVar4 = testing::UnitTest::total_test_suite_count(this_00);
    } while (iVar8 < iVar4);
  }
  if (param_2 != param_1) {
    DestructItems<FString,int>((FString *)(param_2->AllocatorInstance).Data,param_2->ArrayNum);
    iVar4 = param_1->ArrayNum;
    piVar1 = &param_2->ArrayMax;
    pFVar7 = (param_1->AllocatorInstance).Data;
    param_2->ArrayNum = iVar4;
    if ((iVar4 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar4,*piVar1,&param_2->AllocatorInstance,iVar4,piVar1);
      ConstructItems<FString,FString,int>((param_2->AllocatorInstance).Data,(FString *)pFVar7,iVar4)
      ;
    }
  }
  return;
}

// RunTest @ 14c27d920

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall FRigLogicLibTestSuite::RunTest(FRigLogicLibTestSuite *this,FString *param_1)

{
  ushort uVar1;
  code *pcVar2;
  FScriptContainerElement *_Src;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  UnitTest *pUVar6;
  TestEventListeners *this_00;
  FString *pFVar7;
  longlong lVar8;
  size_t sVar9;
  longlong lVar10;
  ForAnyElementType FVar11;
  wchar_t *_Str;
  uint uVar12;
  longlong lVar13;
  undefined1 auStackY_1a8 [32];
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_168;
  ForAnyElementType local_158;
  uint local_150;
  int local_14c;
  TestEventListener local_148;
  FString local_140;
  FString local_130;
  FStringFormatArg local_120;
  FString local_100;
  FScriptContainerElement local_e8 [128];
  ForAnyElementType local_68;
  FScriptContainerElement *local_60;
  int local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  pUVar6 = testing::UnitTest::GetInstance();
  this_00 = testing::UnitTest::listeners(pUVar6);
  local_148 = (TestEventListener)&___7FRigLogicLibTestPrinter__6B_;
  testing::TestEventListeners::Append(this_00,&local_148);
  pFVar7 = ::FString::FString(&local_100,param_1);
  FStringFormatArg::FStringFormatArg(&local_120,pFVar7);
  lVar8 = 0;
  local_168.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_168.ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x20,8,1,0,&local_168.AllocatorInstance,1,&local_168.ArrayMax);
  ConstructItems<FStringFormatArg,FStringFormatArg,int>
            (local_168.AllocatorInstance.Data,&local_120,1);
  ::FString::FormatImpl(&local_140,L"{0}*",&local_168);
  DestructItems<FStringFormatArg,int>
            ((FStringFormatArg *)local_168.AllocatorInstance.Data,local_168.ArrayNum);
  if ((FStringFormatArg *)local_168.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
    FMemory::Free(local_168.AllocatorInstance.Data);
  }
  if (local_120.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_120.StringValue.Data.AllocatorInstance.Data);
  }
  local_68.Data = (FScriptContainerElement *)0x0;
  if (local_140.Data.ArrayNum == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)local_140.Data.AllocatorInstance.Data;
    if (local_140.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
      local_60 = (FScriptContainerElement *)0x0;
      local_58 = 0;
      goto LAB_14c27daff;
    }
  }
  sVar9 = wcslen(_Str);
  local_58 = (int)sVar9;
  uVar12 = local_58 + 1;
  if (0x80 < uVar12) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_68,0,uVar12,1);
  }
  lVar13 = (longlong)(int)uVar12;
  FVar11.Data = local_e8;
  if (local_68.Data != (FScriptContainerElement *)0x0) {
    FVar11.Data = local_68.Data;
  }
  bVar3 = false;
  lVar10 = lVar8;
  local_60 = FVar11.Data;
  if (0 < (int)uVar12) {
    do {
      uVar1 = *(ushort *)((longlong)_Str + lVar10 * 2);
      FVar11.Data[lVar10] = SUB21(uVar1,0);
      lVar10 = lVar10 + 1;
      bVar3 = (bool)(bVar3 | 0x7f < uVar1);
    } while (lVar10 < lVar13);
    if (bVar3) {
      do {
        if (0x7f < *(ushort *)((longlong)_Str + lVar8 * 2)) {
          FVar11.Data[lVar8] = (FScriptContainerElement)0x3f;
        }
        lVar8 = lVar8 + 1;
      } while (lVar8 < lVar13);
    }
  }
  if ((FVar11.Data + lVar13 == (FScriptContainerElement *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Result",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringConv.h"
                         ,0x25,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
LAB_14c27daff:
  _Src = local_60;
  local_158.Data = (FScriptContainerElement *)0x0;
  uVar12 = local_140.Data.ArrayNum;
  if (local_140.Data.ArrayNum == 0) {
    uVar12 = 1;
  }
  if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar12);
  }
  if (((local_60 == (FScriptContainerElement *)0x0) && (uVar12 != 0)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Ptr != nullptr || Count == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x2d3,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  local_150 = uVar12;
  if (uVar12 == 0) {
    local_14c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,uVar12,0,&local_158,uVar12,&local_14c);
    memcpy(local_158.Data,_Src,(longlong)(int)uVar12);
  }
  if (local_68.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data);
  }
  sVar9 = strlen((char *)local_158.Data);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (&testing::FLAGS_gtest_filter,(char *)local_158.Data,sVar9);
  pUVar6 = testing::UnitTest::GetInstance();
  iVar5 = testing::UnitTest::Run(pUVar6);
  ::FString::FString(&local_130,"RigLogicLib Tests");
  FVar11.Data = (FScriptContainerElement *)L"";
  if (local_130.Data.ArrayNum != 0) {
    FVar11.Data = local_130.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestTrue((FAutomationTestBase *)this,(wchar_t *)FVar11.Data,iVar5 == 0);
  if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_130.Data.AllocatorInstance.Data);
  }
  testing::TestEventListeners::Release(this_00,&local_148);
  if (local_158.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_158.Data);
  }
  if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_140.Data.AllocatorInstance.Data);
  }
  return true;
}

// GetBeautifiedTestName @ 14c27dc80

FString * __thiscall
FRigLogicLibTestSuite::GetBeautifiedTestName
          (FRigLogicLibTestSuite *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"RigLogicLib");
  return __return_storage_ptr__;
}

// `scalar_deleting_destructor' @ 14c27dcb0

void * __thiscall
FRigLogicLibTestSuite::_scalar_deleting_destructor_(FRigLogicLibTestSuite *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// ~TestEventListener @ 14c27dcf0

void __thiscall testing::TestEventListener::~TestEventListener(TestEventListener *this)

{
  *this = (TestEventListener)vftable;
  return;
}

// `scalar_deleting_destructor' @ 14c27dd10

void * __thiscall
testing::EmptyTestEventListener::_scalar_deleting_destructor_
          (EmptyTestEventListener *this,uint param_1)

{
  *this = (EmptyTestEventListener)TestEventListener::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14c27dd50

void * __thiscall
FRigLogicLibTestPrinter::_scalar_deleting_destructor_(FRigLogicLibTestPrinter *this,uint param_1)

{
  *this = (FRigLogicLibTestPrinter)testing::TestEventListener::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14c27dd90

void * __thiscall
testing::TestEventListener::_scalar_deleting_destructor_(TestEventListener *this,uint param_1)

{
  *this = (TestEventListener)vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// OnEnvironmentsSetUpEnd @ 14c27ddd0

void __thiscall
testing::EmptyTestEventListener::OnEnvironmentsSetUpEnd
          (EmptyTestEventListener *this,UnitTest *param_1)

{
  return;
}

// OnEnvironmentsSetUpStart @ 14c27dde0

void __thiscall
testing::EmptyTestEventListener::OnEnvironmentsSetUpStart
          (EmptyTestEventListener *this,UnitTest *param_1)

{
  return;
}

// OnEnvironmentsTearDownEnd @ 14c27ddf0

void __thiscall
testing::EmptyTestEventListener::OnEnvironmentsTearDownEnd
          (EmptyTestEventListener *this,UnitTest *param_1)

{
  return;
}

// OnEnvironmentsTearDownStart @ 14c27de00

void __thiscall
testing::EmptyTestEventListener::OnEnvironmentsTearDownStart
          (EmptyTestEventListener *this,UnitTest *param_1)

{
  return;
}

// OnTestCaseEnd @ 14c27de10

void __thiscall
testing::EmptyTestEventListener::OnTestCaseEnd(EmptyTestEventListener *this,TestSuite *param_1)

{
  return;
}

// OnTestCaseEnd @ 14c27de20

void __thiscall
testing::TestEventListener::OnTestCaseEnd(TestEventListener *this,TestSuite *param_1)

{
  return;
}

// OnTestCaseStart @ 14c27de30

void __thiscall
testing::EmptyTestEventListener::OnTestCaseStart(EmptyTestEventListener *this,TestSuite *param_1)

{
  return;
}

// OnTestCaseStart @ 14c27de40

void __thiscall
testing::TestEventListener::OnTestCaseStart(TestEventListener *this,TestSuite *param_1)

{
  return;
}

// OnTestEnd @ 14c27de50

void __thiscall
testing::EmptyTestEventListener::OnTestEnd(EmptyTestEventListener *this,TestInfo *param_1)

{
  return;
}

// OnTestEnd @ 14c27de60

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FRigLogicLibTestPrinter::OnTestEnd(FRigLogicLibTestPrinter *this,TestInfo *param_1)

{
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar1;
  FString local_28;
  FString local_18;
  
  if (5 < (byte)LogRigLogicLibTest._0_1_) {
    pbVar1 = &param_1->name_;
    if (0xf < (param_1->name_)._Mypair._Myval2._Myres) {
      pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               (pbVar1->_Mypair)._Myval2._Bx._Ptr;
    }
    ::FString::FString(&local_18,(char *)pbVar1);
    if (0xf < (param_1->test_suite_name_)._Mypair._Myval2._Myres) {
      param_1 = (TestInfo *)(param_1->test_suite_name_)._Mypair._Myval2._Bx._Ptr;
    }
    ::FString::FString(&local_28,(char *)param_1);
    UE::Logging::Private::BasicLog<6>
              (&`private:_virtual_void___cdecl_FRigLogicLibTestPrinter::OnTestEnd(testing::TestInfo_const&___ptr64)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogRigLogicLibTest);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// OnTestIterationEnd @ 14c27df20

void __thiscall
testing::EmptyTestEventListener::OnTestIterationEnd
          (EmptyTestEventListener *this,UnitTest *param_1,int param_2)

{
  return;
}

// OnTestIterationStart @ 14c27df30

void __thiscall
testing::EmptyTestEventListener::OnTestIterationStart
          (EmptyTestEventListener *this,UnitTest *param_1,int param_2)

{
  return;
}

// OnTestPartResult @ 14c27df40

void __thiscall
testing::EmptyTestEventListener::OnTestPartResult
          (EmptyTestEventListener *this,TestPartResult *param_1)

{
  return;
}

// OnTestPartResult @ 14c27df50

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FRigLogicLibTestPrinter::OnTestPartResult(FRigLogicLibTestPrinter *this,TestPartResult *param_1)

{
  ForAnyElementType FVar1;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar2;
  FString local_28;
  FString local_18;
  
  if ((param_1->type_ == kFatalFailure) || (param_1->type_ == kNonFatalFailure)) {
    if ((byte)LogRigLogicLibTest._0_1_ < 2) {
      return;
    }
    pbVar2 = &param_1->summary_;
    if (0xf < (param_1->summary_)._Mypair._Myval2._Myres) {
      pbVar2 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               (pbVar2->_Mypair)._Myval2._Bx._Ptr;
    }
    ::FString::FString(&local_28,(char *)pbVar2);
    if ((param_1->file_name_)._Mypair._Myval2._Mysize == 0) {
      pbVar2 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
    }
    else {
      pbVar2 = &param_1->file_name_;
      if (0xf < (param_1->file_name_)._Mypair._Myval2._Myres) {
        pbVar2 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 (pbVar2->_Mypair)._Myval2._Bx._Ptr;
      }
    }
    ::FString::FString(&local_18,(char *)pbVar2);
    UE::Logging::Private::BasicLog<2>
              (&`private:_virtual_void___cdecl_FRigLogicLibTestPrinter::OnTestPartResult(testing::TestPartResult_const&___ptr64)___ptr64'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogRigLogicLibTest);
    FVar1.Data = local_28.Data.AllocatorInstance.Data;
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
      FVar1.Data = local_28.Data.AllocatorInstance.Data;
    }
  }
  else {
    if ((byte)LogRigLogicLibTest._0_1_ < 6) {
      return;
    }
    pbVar2 = &param_1->summary_;
    if (0xf < (param_1->summary_)._Mypair._Myval2._Myres) {
      pbVar2 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               (pbVar2->_Mypair)._Myval2._Bx._Ptr;
    }
    ::FString::FString(&local_18,(char *)pbVar2);
    if ((param_1->file_name_)._Mypair._Myval2._Mysize == 0) {
      pbVar2 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
    }
    else {
      pbVar2 = &param_1->file_name_;
      if (0xf < (param_1->file_name_)._Mypair._Myval2._Myres) {
        pbVar2 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 (pbVar2->_Mypair)._Myval2._Bx._Ptr;
      }
    }
    ::FString::FString(&local_28,(char *)pbVar2);
    UE::Logging::Private::BasicLog<6>
              (&`private:_virtual_void___cdecl_FRigLogicLibTestPrinter::OnTestPartResult(testing::TestPartResult_const&___ptr64)___ptr64'
                ::__l26::LOG_Static,(FLogCategoryBase *)&LogRigLogicLibTest);
    FVar1.Data = local_18.Data.AllocatorInstance.Data;
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
      FVar1.Data = local_18.Data.AllocatorInstance.Data;
    }
  }
  if (FVar1.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar1.Data);
  }
  return;
}

// OnTestProgramEnd @ 14c27e0e0

void __thiscall
testing::EmptyTestEventListener::OnTestProgramEnd(EmptyTestEventListener *this,UnitTest *param_1)

{
  return;
}

// OnTestProgramStart @ 14c27e0f0

void __thiscall
testing::EmptyTestEventListener::OnTestProgramStart(EmptyTestEventListener *this,UnitTest *param_1)

{
  return;
}

// OnTestStart @ 14c27e100

void __thiscall
testing::EmptyTestEventListener::OnTestStart(EmptyTestEventListener *this,TestInfo *param_1)

{
  return;
}

// OnTestStart @ 14c27e110

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FRigLogicLibTestPrinter::OnTestStart(FRigLogicLibTestPrinter *this,TestInfo *param_1)

{
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar1;
  FString local_28;
  FString local_18;
  
  if (5 < (byte)LogRigLogicLibTest._0_1_) {
    pbVar1 = &param_1->name_;
    if (0xf < (param_1->name_)._Mypair._Myval2._Myres) {
      pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               (pbVar1->_Mypair)._Myval2._Bx._Ptr;
    }
    ::FString::FString(&local_18,(char *)pbVar1);
    if (0xf < (param_1->test_suite_name_)._Mypair._Myval2._Myres) {
      param_1 = (TestInfo *)(param_1->test_suite_name_)._Mypair._Myval2._Bx._Ptr;
    }
    ::FString::FString(&local_28,(char *)param_1);
    UE::Logging::Private::BasicLog<6>
              (&`private:_virtual_void___cdecl_FRigLogicLibTestPrinter::OnTestStart(testing::TestInfo_const&___ptr64)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogRigLogicLibTest);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// OnTestSuiteEnd @ 14c27e1d0

void __thiscall
testing::EmptyTestEventListener::OnTestSuiteEnd(EmptyTestEventListener *this,TestSuite *param_1)

{
  return;
}

// OnTestSuiteEnd @ 14c27e1e0

void __thiscall
testing::TestEventListener::OnTestSuiteEnd(TestEventListener *this,TestSuite *param_1)

{
  return;
}

// OnTestSuiteStart @ 14c27e1f0

void __thiscall
testing::EmptyTestEventListener::OnTestSuiteStart(EmptyTestEventListener *this,TestSuite *param_1)

{
  return;
}

// OnTestSuiteStart @ 14c27e200

void __thiscall
testing::TestEventListener::OnTestSuiteStart(TestEventListener *this,TestSuite *param_1)

{
  return;
}

// `dynamic_atexit_destructor_for_'FRigLogicLibTestSuiteAutomationTestInstance'' @ 150444930

void __cdecl
`anonymous_namespace'::_dynamic_atexit_destructor_for__FRigLogicLibTestSuiteAutomationTestInstance__
          (void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FRigLogicLibTestSuiteAutomationTestInstance);
  return;
}

