// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 9

// GetTestFlags @ 1425ac860

EAutomationTestFlags __thiscall
FSlateInvalidationWidgetReasonLexTest::GetTestFlags(FSlateInvalidationWidgetReasonLexTest *this)

{
  return EngineFilter|ProgramContext|CommandletContext|ServerContext|ClientContext|EditorContext;
}

// IsStressTest @ 1425ac870

bool __thiscall
FSlateInvalidationWidgetReasonLexTest::IsStressTest(FSlateInvalidationWidgetReasonLexTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 1425ac880

uint __thiscall
FSlateInvalidationWidgetReasonLexTest::GetRequiredDeviceNum
          (FSlateInvalidationWidgetReasonLexTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 1425ac890

FString * __thiscall
FSlateInvalidationWidgetReasonLexTest::GetTestSourceFileName
          (FSlateInvalidationWidgetReasonLexTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Test\\SlateInvalidationWidgetReasonText.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 1425ac8c0

int __thiscall
FSlateInvalidationWidgetReasonLexTest::GetTestSourceFileLine
          (FSlateInvalidationWidgetReasonLexTest *this)

{
  return 0xc;
}

// GetTests @ 1425ac8d0

/* WARNING: Removing unreachable block (ram,0x0001425ac9bd) */
/* WARNING: Removing unreachable block (ram,0x0001425aca88) */

void __thiscall
FSlateInvalidationWidgetReasonLexTest::GetTests
          (FSlateInvalidationWidgetReasonLexTest *this,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"Slate.ParsingInvalidationWidgetReason");
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

// RunTest @ 1425acab0

bool __thiscall
FSlateInvalidationWidgetReasonLexTest::RunTest
          (FSlateInvalidationWidgetReasonLexTest *this,FString *param_1)

{
  code *pcVar1;
  int iVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  size_t sVar5;
  wchar_t *pwVar6;
  char cVar7;
  FSlateInvalidationWidgetReasonLexTest *local_res8;
  FScriptContainerElement local_res18 [16];
  undefined1 local_58 [16];
  TStringView<wchar_t> local_48;
  FString local_38;
  
  pcVar1 = *(code **)(*(longlong *)this + 0x30);
  ::FString::FString((FString *)local_58,L"\'All\' was not converted properly.");
  pFVar3 = ::LexToString(&local_38,
                         Prepass|AttributeRegistration|Visibility|RenderTransform|ChildOrder|
                         PaintAndVolatility|Layout);
  pwVar6 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar4 = L"";
  }
  else {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  iVar2 = FGenericPlatformStricmp::Stricmp(pwVar4,L"All");
  (*pcVar1)(this,iVar2 == 0,local_58,0);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if ((FScriptContainerElement *)local_58._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_58._0_8_);
  }
  pcVar1 = *(code **)(*(longlong *)this + 0x30);
  ::FString::FString((FString *)local_58,L"\'None\' was not converted properly.");
  pFVar3 = ::LexToString(&local_38,None);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar6 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  iVar2 = FGenericPlatformStricmp::Stricmp(pwVar6,L"None");
  (*pcVar1)(this,iVar2 == 0,local_58,0);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if ((FScriptContainerElement *)local_58._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_58._0_8_);
  }
  local_res8 = this;
  `FSlateInvalidationWidgetReasonLexTest::RunTest'::__l2::<lambda_1>::operator()
            (&local_res8,None,L"None");
  `FSlateInvalidationWidgetReasonLexTest::RunTest'::__l2::<lambda_1>::operator()
            (&local_res8,Layout,L"Layout");
  `FSlateInvalidationWidgetReasonLexTest::RunTest'::__l2::<lambda_1>::operator()
            (&local_res8,Paint,L"Paint");
  `FSlateInvalidationWidgetReasonLexTest::RunTest'::__l2::<lambda_1>::operator()
            (&local_res8,Volatility,L"Volatility");
  `FSlateInvalidationWidgetReasonLexTest::RunTest'::__l2::<lambda_1>::operator()
            (&local_res8,ChildOrder,L"ChildOrder");
  `FSlateInvalidationWidgetReasonLexTest::RunTest'::__l2::<lambda_1>::operator()
            (&local_res8,RenderTransform,L"RenderTransform");
  `FSlateInvalidationWidgetReasonLexTest::RunTest'::__l2::<lambda_1>::operator()
            (&local_res8,Visibility,L"Visibility");
  `FSlateInvalidationWidgetReasonLexTest::RunTest'::__l2::<lambda_1>::operator()
            (&local_res8,AttributeRegistration,L"AttributeRegistration");
  `FSlateInvalidationWidgetReasonLexTest::RunTest'::__l2::<lambda_1>::operator()
            (&local_res8,Prepass,L"Prepass");
  `FSlateInvalidationWidgetReasonLexTest::RunTest'::__l2::<lambda_1>::operator()
            (&local_res8,LayoutAndVolatility,L"LayoutAndVolatility");
  `FSlateInvalidationWidgetReasonLexTest::RunTest'::__l2::<lambda_1>::operator()
            (&local_res8,PaintAndVolatility,L"PaintAndVolatility");
  `FSlateInvalidationWidgetReasonLexTest::RunTest'::__l2::<lambda_1>::operator()
            (&local_res8,Visibility|PaintAndVolatility,L"PaintAndVolatility With None");
  `FSlateInvalidationWidgetReasonLexTest::RunTest'::__l2::<lambda_1>::operator()
            (&local_res8,
             Prepass|AttributeRegistration|Visibility|RenderTransform|ChildOrder|PaintAndVolatility|
             Layout,L"PaintAndVolatility With All");
  pcVar1 = *(code **)(*(longlong *)this + 0x30);
  ::FString::FString(&local_38,L"\'Layout | Volatility\' With spaces");
  local_58._0_8_ = local_res18;
  local_res8 = (FSlateInvalidationWidgetReasonLexTest *)((ulonglong)local_res8 & 0xffffffffffffff00)
  ;
  pwVar6 = L" Layout | Volatility ";
  local_58._8_8_ = &local_res8;
  local_res18[0] = (FScriptContainerElement)0x1;
  pwVar4 = wcschr(L" Layout | Volatility ",L'|');
  if (pwVar4 != (wchar_t *)0x0) {
    do {
      local_48.Size = (int)((longlong)pwVar4 - (longlong)pwVar6 >> 1);
      local_48.DataPtr = pwVar6;
      `LexTryParseString'::__l2::<lambda_1>::operator()(local_58,&local_48);
      pwVar6 = pwVar4 + 1;
      pwVar4 = wcschr(pwVar6,L'|');
    } while (pwVar4 != (wchar_t *)0x0);
    if (*pwVar6 == L'\0') goto LAB_1425acd3e;
  }
  iVar2 = 0;
  local_48.DataPtr = pwVar6;
  if (pwVar6 != (wchar_t *)0x0) {
    sVar5 = wcslen(pwVar6);
    iVar2 = (int)sVar5;
  }
  local_48.Size = iVar2;
  `LexTryParseString'::__l2::<lambda_1>::operator()(local_58,&local_48);
LAB_1425acd3e:
  cVar7 = '\0';
  if (local_res18[0] != (FScriptContainerElement)0x0) {
    cVar7 = (char)local_res8;
  }
  (*pcVar1)(this,local_res18[0],&local_38,0);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  pcVar1 = *(code **)(*(longlong *)this + 0x30);
  ::FString::FString(&local_38,L"\'Layout | Volatility\' With spaces");
  (*pcVar1)(this,cVar7 == '\x05',&local_38,0);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return true;
}

// GetBeautifiedTestName @ 1425acdc0

FString * __thiscall
FSlateInvalidationWidgetReasonLexTest::GetBeautifiedTestName
          (FSlateInvalidationWidgetReasonLexTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"Slate.ParsingInvalidationWidgetReason");
  return __return_storage_ptr__;
}

// operator() @ 1425c3a80

void __thiscall
`FSlateInvalidationWidgetReasonLexTest::RunTest'::__l2::<lambda_1>::operator()
          (void *this,EInvalidateWidgetReason param_1,wchar_t *param_2)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  ForAnyElementType FVar4;
  EInvalidateWidgetReason local_res10 [8];
  FString local_38;
  FString local_28;
  
  local_res10[0] = None;
  ::LexToString(&local_38,param_1);
  plVar1 = *(longlong **)this;
  pcVar2 = *(code **)(*plVar1 + 0x30);
  ::FString::PrintfImpl(&local_28,L"Was not able to parse \'%s\'.");
  FVar4.Data = (FScriptContainerElement *)L"";
  if (local_38.Data.ArrayNum != 0) {
    FVar4.Data = local_38.Data.AllocatorInstance.Data;
  }
  bVar3 = LexTryParseString(local_res10,(wchar_t *)FVar4.Data);
  (*pcVar2)(plVar1,bVar3,&local_28,0);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  plVar1 = *(longlong **)this;
  pcVar2 = *(code **)(*plVar1 + 0x30);
  ::FString::PrintfImpl
            (&local_28,L"The parsed value and the converted value for \'%s\' do not match.");
  (*pcVar2)(plVar1,param_1 == local_res10[0],&local_28,0);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return;
}

