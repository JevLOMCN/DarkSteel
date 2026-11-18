// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 10

// GetTestFlags @ 141cbcdb0

EAutomationTestFlags __thiscall
FStringFormattingTestOrderedAllTypes::GetTestFlags(FStringFormattingTestOrderedAllTypes *this)

{
  return this->TestFlags;
}

// IsStressTest @ 141cbcdc0

bool __thiscall
FStringFormattingTestOrderedAllTypes::IsStressTest(FStringFormattingTestOrderedAllTypes *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141cbcdd0

uint __thiscall
FStringFormattingTestOrderedAllTypes::GetRequiredDeviceNum
          (FStringFormattingTestOrderedAllTypes *this)

{
  return 1;
}

// GetTestSourceFileName @ 141cbcde0

FString * __thiscall
FStringFormattingTestOrderedAllTypes::GetTestSourceFileName
          (FStringFormattingTestOrderedAllTypes *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\String\\FormatTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141cbce10

int __thiscall
FStringFormattingTestOrderedAllTypes::GetTestSourceFileLine
          (FStringFormattingTestOrderedAllTypes *this)

{
  return 0xb1;
}

// GetTests @ 141cbce20

/* WARNING: Removing unreachable block (ram,0x000141cbcf9e) */

void __thiscall
FStringFormattingTestOrderedAllTypes::GetTests
          (FStringFormattingTestOrderedAllTypes *this,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
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

// RunTest @ 141cbcfc0

bool __thiscall
FStringFormattingTestOrderedAllTypes::RunTest
          (FStringFormattingTestOrderedAllTypes *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 141cbcff0

FString * __thiscall
FStringFormattingTestOrderedAllTypes::GetBeautifiedTestName
          (FStringFormattingTestOrderedAllTypes *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FStringFormattingTestOrderedAllTypes @ 141cec4f0

FStringFormattingTestOrderedAllTypes * __thiscall
FStringFormattingTestOrderedAllTypes::FStringFormattingTestOrderedAllTypes
          (FStringFormattingTestOrderedAllTypes *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7FStringFormattingTestOrderedAllTypes__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[Core][String][EditorContext][SmokeFilter]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"System::Core::String Formatting::All Types (Ordered)");
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
  ::FString::FString(&local_18,"[Core][String][EditorContext][SmokeFilter]");
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

// TestBody @ 141d44250

void __thiscall
FStringFormattingTestOrderedAllTypes::TestBody
          (FStringFormattingTestOrderedAllTypes *this,FString *param_1)

{
  FAutomationTestBase *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FAutomationTestFramework *pFVar5;
  FStringFormatArg *pFVar6;
  ForAnyElementType _Str2;
  ForAnyElementType FVar7;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_168;
  FString local_158;
  FString local_148;
  FString local_138;
  FString local_128;
  FString local_118;
  FStringFormatArg local_108;
  FStringFormatArg local_e8;
  FStringFormatArg local_c8;
  FStringFormatArg local_a8;
  FStringFormatArg local_88;
  FStringFormatArg local_68;
  FStringFormatArg local_48;
  FStringFormatArg local_28;
  
  ::FString::FString(&local_128,L"Text");
  local_168.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_168.ArrayNum = 0;
  local_168.ArrayMax = 0;
  FStringFormatArg::FStringFormatArg(&local_108,100);
  if (((local_168.AllocatorInstance.Data <= &local_108) &&
      (&local_108 <
       (FStringFormatArg *)(local_168.AllocatorInstance.Data + (longlong)local_168.ArrayMax * 0x20))
      ) && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar4 = local_168.ArrayNum;
  if (local_168.ArrayNum == local_168.ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,&local_168.AllocatorInstance,&local_168.ArrayMax);
  }
  local_168.ArrayNum = iVar4 + 1;
  pFVar6 = (FStringFormatArg *)(local_168.AllocatorInstance.Data + (longlong)iVar4 * 0x20);
  (pFVar6->StringValue).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pFVar6->StringValue).Data.ArrayNum = 0;
  (pFVar6->StringValue).Data.ArrayMax = 0;
  FStringFormatArg::operator=(pFVar6,&local_108);
  if (local_108.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.StringValue.Data.AllocatorInstance.Data);
  }
  FStringFormatArg::FStringFormatArg(&local_e8,200);
  if (((local_168.AllocatorInstance.Data <= &local_e8) &&
      (&local_e8 <
       (FStringFormatArg *)(local_168.AllocatorInstance.Data + (longlong)local_168.ArrayMax * 0x20))
      ) && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar4 = local_168.ArrayNum;
  if (local_168.ArrayNum == local_168.ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,&local_168.AllocatorInstance,&local_168.ArrayMax);
  }
  local_168.ArrayNum = iVar4 + 1;
  pFVar6 = (FStringFormatArg *)(local_168.AllocatorInstance.Data + (longlong)iVar4 * 0x20);
  (pFVar6->StringValue).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pFVar6->StringValue).Data.ArrayNum = 0;
  (pFVar6->StringValue).Data.ArrayMax = 0;
  FStringFormatArg::operator=(pFVar6,&local_e8);
  if (local_e8.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.StringValue.Data.AllocatorInstance.Data);
  }
  FStringFormatArg::FStringFormatArg(&local_c8,300);
  if (((local_168.AllocatorInstance.Data <= &local_c8) &&
      (&local_c8 <
       (FStringFormatArg *)(local_168.AllocatorInstance.Data + (longlong)local_168.ArrayMax * 0x20))
      ) && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar4 = local_168.ArrayNum;
  if (local_168.ArrayNum == local_168.ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,&local_168.AllocatorInstance,&local_168.ArrayMax);
  }
  local_168.ArrayNum = iVar4 + 1;
  pFVar6 = (FStringFormatArg *)(local_168.AllocatorInstance.Data + (longlong)iVar4 * 0x20);
  (pFVar6->StringValue).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pFVar6->StringValue).Data.ArrayNum = 0;
  (pFVar6->StringValue).Data.ArrayMax = 0;
  FStringFormatArg::operator=(pFVar6,&local_c8);
  if (local_c8.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.StringValue.Data.AllocatorInstance.Data);
  }
  FStringFormatArg::FStringFormatArg(&local_a8,400);
  if (((local_168.AllocatorInstance.Data <= &local_a8) &&
      (&local_a8 <
       (FStringFormatArg *)(local_168.AllocatorInstance.Data + (longlong)local_168.ArrayMax * 0x20))
      ) && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar4 = local_168.ArrayNum;
  if (local_168.ArrayNum == local_168.ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,&local_168.AllocatorInstance,&local_168.ArrayMax);
  }
  local_168.ArrayNum = iVar4 + 1;
  pFVar6 = (FStringFormatArg *)(local_168.AllocatorInstance.Data + (longlong)iVar4 * 0x20);
  (pFVar6->StringValue).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pFVar6->StringValue).Data.ArrayNum = 0;
  (pFVar6->StringValue).Data.ArrayMax = 0;
  FStringFormatArg::operator=(pFVar6,&local_a8);
  if (local_a8.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.StringValue.Data.AllocatorInstance.Data);
  }
  FStringFormatArg::FStringFormatArg(&local_88,__real_43fa0000);
  if (((local_168.AllocatorInstance.Data <= &local_88) &&
      (&local_88 <
       (FStringFormatArg *)(local_168.AllocatorInstance.Data + (longlong)local_168.ArrayMax * 0x20))
      ) && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar4 = local_168.ArrayNum;
  if (local_168.ArrayNum == local_168.ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,&local_168.AllocatorInstance,&local_168.ArrayMax);
  }
  local_168.ArrayNum = iVar4 + 1;
  pFVar6 = (FStringFormatArg *)(local_168.AllocatorInstance.Data + (longlong)iVar4 * 0x20);
  (pFVar6->StringValue).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pFVar6->StringValue).Data.ArrayNum = 0;
  (pFVar6->StringValue).Data.ArrayMax = 0;
  FStringFormatArg::operator=(pFVar6,&local_88);
  if (local_88.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.StringValue.Data.AllocatorInstance.Data);
  }
  FStringFormatArg::FStringFormatArg(&local_68,__real_4082c00000000000);
  if (((local_168.AllocatorInstance.Data <= &local_68) &&
      (&local_68 <
       (FStringFormatArg *)(local_168.AllocatorInstance.Data + (longlong)local_168.ArrayMax * 0x20))
      ) && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar4 = local_168.ArrayNum;
  if (local_168.ArrayNum == local_168.ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,&local_168.AllocatorInstance,&local_168.ArrayMax);
  }
  local_168.ArrayNum = iVar4 + 1;
  pFVar6 = (FStringFormatArg *)(local_168.AllocatorInstance.Data + (longlong)iVar4 * 0x20);
  (pFVar6->StringValue).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pFVar6->StringValue).Data.ArrayNum = 0;
  (pFVar6->StringValue).Data.ArrayMax = 0;
  FStringFormatArg::operator=(pFVar6,&local_68);
  if (local_68.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.StringValue.Data.AllocatorInstance.Data);
  }
  FVar7.Data = local_128.Data.AllocatorInstance.Data;
  local_158.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_128.Data.ArrayNum == 0) {
    local_158.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_128.Data.ArrayNum,0,(ForAnyElementType *)&local_158,local_128.Data.ArrayNum
               ,&local_158.Data.ArrayMax);
    memcpy(local_158.Data.AllocatorInstance.Data,FVar7.Data,(longlong)local_128.Data.ArrayNum * 2);
  }
  FStringFormatArg::FStringFormatArg(&local_48,&local_158);
  if (((local_168.AllocatorInstance.Data <= &local_48) &&
      (&local_48 <
       (FStringFormatArg *)(local_168.AllocatorInstance.Data + (longlong)local_168.ArrayMax * 0x20))
      ) && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar4 = local_168.ArrayNum;
  if (local_168.ArrayNum == local_168.ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,&local_168.AllocatorInstance,&local_168.ArrayMax);
  }
  local_168.ArrayNum = iVar4 + 1;
  pFVar6 = (FStringFormatArg *)(local_168.AllocatorInstance.Data + (longlong)iVar4 * 0x20);
  (pFVar6->StringValue).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pFVar6->StringValue).Data.ArrayNum = 0;
  (pFVar6->StringValue).Data.ArrayMax = 0;
  FStringFormatArg::operator=(pFVar6,&local_48);
  if (local_48.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.StringValue.Data.AllocatorInstance.Data);
  }
  FStringFormatArg::FStringFormatArg(&local_28,L"Text");
  if (((local_168.AllocatorInstance.Data <= &local_28) &&
      (&local_28 <
       (FStringFormatArg *)(local_168.AllocatorInstance.Data + (longlong)local_168.ArrayMax * 0x20))
      ) && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar4 = local_168.ArrayNum;
  if (local_168.ArrayNum == local_168.ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,&local_168.AllocatorInstance,&local_168.ArrayMax);
  }
  local_168.ArrayNum = iVar4 + 1;
  pFVar6 = (FStringFormatArg *)(local_168.AllocatorInstance.Data + (longlong)iVar4 * 0x20);
  (pFVar6->StringValue).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pFVar6->StringValue).Data.ArrayNum = 0;
  (pFVar6->StringValue).Data.ArrayMax = 0;
  FStringFormatArg::operator=(pFVar6,&local_28);
  if (local_28.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.StringValue.Data.AllocatorInstance.Data);
  }
  ::FString::FormatImpl(&local_148,L"{0}, {1}, {2}, {3}, {4}, {5}, {6}, {7}",&local_168);
  FVar7.Data = local_148.Data.AllocatorInstance.Data;
  _Str2.Data = (FScriptContainerElement *)L"";
  if (local_148.Data.ArrayNum != 0) {
    _Str2.Data = local_148.Data.AllocatorInstance.Data;
  }
  iVar4 = wcscmp(L"100, 200, 300, 400, 500.000000, 600.000000, Text, Text",(wchar_t *)_Str2.Data);
  if (iVar4 != 0) {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar1 = pFVar5->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_138,L"FString::Format failed. Expected: \"%s\", Actual: \"%s\"");
    FVar7.Data = (FScriptContainerElement *)L"";
    if (local_138.Data.ArrayNum != 0) {
      FVar7.Data = local_138.Data.AllocatorInstance.Data;
    }
    ::FString::FString(&local_118,(wchar_t *)FVar7.Data);
    (*pcVar2)(pFVar1,&local_118,0);
    if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_118.Data.AllocatorInstance.Data);
    }
    FVar7.Data = local_148.Data.AllocatorInstance.Data;
    if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_138.Data.AllocatorInstance.Data);
      FVar7.Data = local_148.Data.AllocatorInstance.Data;
    }
  }
  if (FVar7.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar7.Data);
  }
  DestructItems<FStringFormatArg,int>
            ((FStringFormatArg *)local_168.AllocatorInstance.Data,local_168.ArrayNum);
  if ((FStringFormatArg *)local_168.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
    FMemory::Free(local_168.AllocatorInstance.Data);
  }
  if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_128.Data.AllocatorInstance.Data);
  }
  return;
}

