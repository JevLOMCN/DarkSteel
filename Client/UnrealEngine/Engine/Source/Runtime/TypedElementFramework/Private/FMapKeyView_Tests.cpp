// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TypedElementFramework
// Functions: 10

// GetTestFlags @ 142c84900

EAutomationTestFlags __thiscall
UE::Editor::DataStorage::Tests::Private::FMapKeyView_Tests::GetTestFlags(FMapKeyView_Tests *this)

{
  return this->TestFlags;
}

// IsStressTest @ 142c84910

bool __thiscall
UE::Editor::DataStorage::Tests::Private::FMapKeyView_Tests::IsStressTest(FMapKeyView_Tests *this)

{
  return false;
}

// GetRequiredDeviceNum @ 142c84920

uint __thiscall
UE::Editor::DataStorage::Tests::Private::FMapKeyView_Tests::GetRequiredDeviceNum
          (FMapKeyView_Tests *this)

{
  return 1;
}

// GetTestSourceFileName @ 142c84930

FString * __thiscall
UE::Editor::DataStorage::Tests::Private::FMapKeyView_Tests::GetTestSourceFileName
          (FMapKeyView_Tests *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Tests\\Elements\\Common\\TypedElementMapKeyTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 142c84970

int __thiscall
UE::Editor::DataStorage::Tests::Private::FMapKeyView_Tests::GetTestSourceFileLine
          (FMapKeyView_Tests *this)

{
  return 0x128;
}

// GetTests @ 142c84980

/* WARNING: Removing unreachable block (ram,0x000142c84afe) */

void __thiscall
UE::Editor::DataStorage::Tests::Private::FMapKeyView_Tests::GetTests
          (FMapKeyView_Tests *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
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

// RunTest @ 142c84b20

bool __thiscall
UE::Editor::DataStorage::Tests::Private::FMapKeyView_Tests::RunTest
          (FMapKeyView_Tests *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 142c84b50

FString * __thiscall
UE::Editor::DataStorage::Tests::Private::FMapKeyView_Tests::GetBeautifiedTestName
          (FMapKeyView_Tests *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FMapKeyView_Tests @ 142c96f60

FMapKeyView_Tests * __thiscall
UE::Editor::DataStorage::Tests::Private::FMapKeyView_Tests::FMapKeyView_Tests
          (FMapKeyView_Tests *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7FMapKeyView_Tests_Private_Tests_DataStorage_Editor_UE__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[ApplicationContextMask][EngineFilter]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"Editor::DataStorage::Map Key View (FMapKeyView)");
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
  ::FString::FString(&local_18,"[ApplicationContextMask][EngineFilter]");
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

// TestBody @ 142cbc680

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Editor::DataStorage::Tests::Private::FMapKeyView_Tests::TestBody
          (FMapKeyView_Tests *this,FString *param_1)

{
  FAutomationTestBase *pFVar1;
  code *pcVar2;
  double dVar3;
  longlong lVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  FAutomationTestFramework *pFVar8;
  ulong64 uVar9;
  FString *pFVar10;
  FName *pFVar11;
  FName *pFVar12;
  ForAnyElementType FVar13;
  ulonglong uVar14;
  size_t _Size;
  undefined1 auStackY_728 [32];
  FToString local_6e8;
  FToString local_6e7;
  FToString local_6e6;
  FHasher local_6e5;
  FToString local_6e4 [4];
  FString local_6e0;
  FString local_6d0;
  ForAnyElementType local_6c0;
  undefined8 local_6b8;
  FTopLevelAssetPath local_6b0;
  FName local_6a0;
  undefined8 local_698;
  FString local_690;
  FString local_680;
  FKeyViewComparer local_670;
  FKeyViewComparer local_668;
  FKeyViewComparer local_660;
  FKeyViewComparer local_658;
  FKeyViewComparer local_650;
  FKeyViewComparer local_648;
  FKeyViewComparer local_640;
  FKeyViewComparer local_638;
  FKeyViewComparer local_630;
  FKeyViewComparer local_628;
  FKeyViewComparer local_620;
  FString local_618;
  FString local_608;
  FString local_5f8;
  FString local_5e8;
  FString local_5d8;
  FString local_5c8;
  FString local_5b8;
  FString local_5a8;
  FString local_598;
  FString local_588;
  FString local_578;
  FString local_568;
  FString local_558;
  FString local_548;
  FString local_538;
  FString local_528;
  FString local_518;
  FString local_508;
  FString local_4f8;
  FString local_4e8;
  FString local_4d8;
  FString local_4c8;
  FString local_4b8;
  FString local_4a8;
  FString local_498;
  FString local_488;
  FString local_478;
  FString local_468;
  FString local_458;
  FString local_448;
  FString local_438;
  FString local_428;
  FString local_418;
  FString local_408;
  FString local_3f8;
  FScriptContainerElement *local_3e8;
  int iStack_3e0;
  undefined4 uStack_3dc;
  FString local_3d8;
  FString local_3c8;
  FString local_3b8;
  FString local_3a8;
  FString local_398;
  FString local_388;
  FString local_378;
  FString local_368;
  FString local_358;
  FString local_348;
  FString local_338;
  FString local_328;
  FString local_318;
  FString local_308;
  FString local_2f8;
  FString local_2e8;
  FString local_2d8;
  FString local_2c8;
  FString local_2b8;
  FString local_2a8;
  FString local_298;
  FString local_288;
  FString local_278;
  FString local_268;
  FString local_258;
  FScriptContainerElement *local_248;
  undefined8 uStack_240;
  FScriptContainerElement *local_238;
  longlong lStack_230;
  TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
  local_228;
  TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
  local_210;
  TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
  local_1f8;
  TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
  local_1e0;
  FMapKey local_1c8;
  FMapKey local_1b0;
  TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
  local_198;
  TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
  local_180;
  TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
  local_168;
  TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
  local_150;
  TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
  local_138;
  FMapKey local_120;
  FMapKey local_108;
  FMapKey local_f0;
  FMapKey local_d8;
  FMapKey local_c0;
  FMapKey local_a8;
  FMapKey local_90;
  TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
  local_78;
  TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
  local_60;
  FMapKey local_48;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_728;
  pFVar8 = FAutomationTestFramework::Get();
  pFVar1 = pFVar8->CurrentTest;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
  ::FString::FString(&local_288,L"Empty key");
  (*pcVar2)(pFVar1,&local_288,0,0);
  if (local_288.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_288.Data.AllocatorInstance.Data);
  }
  local_60.TypeIndex = 0;
  ::FString::FString(&local_618,L"Empty");
  FVar13.Data = (FScriptContainerElement *)L"";
  if (local_618.Data.ArrayNum != 0) {
    FVar13.Data = local_618.Data.AllocatorInstance.Data;
  }
  iVar7 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar13.Data,L"Empty");
  if (local_618.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_618.Data.AllocatorInstance.Data);
  }
  if (iVar7 != 0) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_578,L"Expected string wasn\'t returned");
    (*pcVar2)(pFVar1,&local_578,0);
    if (local_578.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_578.Data.AllocatorInstance.Data);
    }
  }
  uVar14 = (ulonglong)local_60.TypeIndex;
  local_670.Key = &local_60;
  if (`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<UE::Editor::DataStorage::FKeyViewComparer,0,1,2,3,4,5,6,7,8,9,0,TVariant<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const*___ptr64,FSoftObjectPath_const*___ptr64>_const&___ptr64>(unsigned___int64,UE::Editor::DataStorage::FKeyViewComparer&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2,3,4,5,6,7,8,9>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const*___ptr64,FSoftObjectPath_const*___ptr64>_const&___ptr64)'
      ::__l2::Invokers[uVar14] ==
      Core::Private::
      VisitApplyEncoded<0,0,UE::Editor::DataStorage::FKeyViewComparer,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>_const_&>
     ) {
    if ((9 < local_60.TypeIndex) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0x12f,L""), bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    cVar6 = *(char *)((longlong)
                      &`public:_static_bool___cdecl_UE::Core::Private::TIsType<FEmptyVariantState,FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const*___ptr64,FSoftObjectPath_const*___ptr64>::IsSame(unsigned___int64)'
                       ::__l2::bIsSameType + uVar14);
  }
  else {
    cVar6 = (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<UE::Editor::DataStorage::FKeyViewComparer,0,1,2,3,4,5,6,7,8,9,0,TVariant<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const*___ptr64,FSoftObjectPath_const*___ptr64>_const&___ptr64>(unsigned___int64,UE::Editor::DataStorage::FKeyViewComparer&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2,3,4,5,6,7,8,9>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const*___ptr64,FSoftObjectPath_const*___ptr64>_const&___ptr64)'
              ::__l2::Invokers[uVar14])(&local_670,&local_60);
  }
  if (cVar6 == '\0') {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_568,L"Self comparison failed");
    (*pcVar2)(pFVar1,&local_568,0);
    if (local_568.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_568.Data.AllocatorInstance.Data);
    }
  }
  pFVar8 = FAutomationTestFramework::Get();
  pFVar1 = pFVar8->CurrentTest;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
  ::FString::FString(&local_558,L"Construct key (void*)");
  (*pcVar2)(pFVar1,&local_558,0,0);
  if (local_558.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_558.Data.AllocatorInstance.Data);
  }
  local_198._padding_ = 0x1234;
  local_198.TypeIndex = 1;
  ::FString::PrintfImpl(&local_608,L"Pointer(0x%p)");
  bVar5 = ::FString::StartsWith(&local_608,L"Pointer(0x",10,IgnoreCase);
  if ((!bVar5) || (bVar5 = ::FString::EndsWith(&local_608,L"1234)",5,IgnoreCase), !bVar5)) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_548,L"Expected string wasn\'t returned");
    (*pcVar2)(pFVar1,&local_548,0);
    if (local_548.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_548.Data.AllocatorInstance.Data);
    }
  }
  local_668.Key = &local_198;
  if (`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<UE::Editor::DataStorage::FKeyViewComparer,0,1,2,3,4,5,6,7,8,9,0,TVariant<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const*___ptr64,FSoftObjectPath_const*___ptr64>_const&___ptr64>(unsigned___int64,UE::Editor::DataStorage::FKeyViewComparer&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2,3,4,5,6,7,8,9>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const*___ptr64,FSoftObjectPath_const*___ptr64>_const&___ptr64)'
      ::__l2::Invokers[local_198.TypeIndex] ==
      Core::Private::
      VisitApplyEncoded<1,0,UE::Editor::DataStorage::FKeyViewComparer,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>_const_&>
     ) {
    bVar5 = local_198.TypeIndex == 1;
  }
  else {
    bVar5 = (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<UE::Editor::DataStorage::FKeyViewComparer,0,1,2,3,4,5,6,7,8,9,0,TVariant<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const*___ptr64,FSoftObjectPath_const*___ptr64>_const&___ptr64>(unsigned___int64,UE::Editor::DataStorage::FKeyViewComparer&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2,3,4,5,6,7,8,9>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const*___ptr64,FSoftObjectPath_const*___ptr64>_const&___ptr64)'
              ::__l2::Invokers[local_198.TypeIndex])(&local_668,&local_198);
  }
  if (bVar5 == false) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_538,L"Self comparison failed");
    (*pcVar2)(pFVar1,&local_538,0);
    if (local_538.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_538.Data.AllocatorInstance.Data);
    }
  }
  if (local_608.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_608.Data.AllocatorInstance.Data);
  }
  pFVar8 = FAutomationTestFramework::Get();
  pFVar1 = pFVar8->CurrentTest;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
  ::FString::FString(&local_528,L"Construct key (UObject*)");
  (*pcVar2)(pFVar1,&local_528,0,0);
  if (local_528.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_528.Data.AllocatorInstance.Data);
  }
  local_180._padding_ = 0x1234;
  local_180.TypeIndex = 2;
  ::FString::PrintfImpl(&local_5f8,L"UObject(0x%p)");
  bVar5 = ::FString::StartsWith(&local_5f8,L"UObject(0x",10,IgnoreCase);
  if ((!bVar5) || (bVar5 = ::FString::EndsWith(&local_5f8,L"1234)",5,IgnoreCase), !bVar5)) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_518,L"Expected string wasn\'t returned");
    (*pcVar2)(pFVar1,&local_518,0);
    if (local_518.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_518.Data.AllocatorInstance.Data);
    }
  }
  local_660.Key = &local_180;
  if (`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<UE::Editor::DataStorage::FKeyViewComparer,0,1,2,3,4,5,6,7,8,9,0,TVariant<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const*___ptr64,FSoftObjectPath_const*___ptr64>_const&___ptr64>(unsigned___int64,UE::Editor::DataStorage::FKeyViewComparer&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2,3,4,5,6,7,8,9>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const*___ptr64,FSoftObjectPath_const*___ptr64>_const&___ptr64)'
      ::__l2::Invokers[local_180.TypeIndex] ==
      Core::Private::
      VisitApplyEncoded<2,0,UE::Editor::DataStorage::FKeyViewComparer,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>_const_&>
     ) {
    bVar5 = local_180.TypeIndex == 2;
  }
  else {
    bVar5 = (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<UE::Editor::DataStorage::FKeyViewComparer,0,1,2,3,4,5,6,7,8,9,0,TVariant<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const*___ptr64,FSoftObjectPath_const*___ptr64>_const&___ptr64>(unsigned___int64,UE::Editor::DataStorage::FKeyViewComparer&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2,3,4,5,6,7,8,9>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const*___ptr64,FSoftObjectPath_const*___ptr64>_const&___ptr64)'
              ::__l2::Invokers[local_180.TypeIndex])(&local_660,&local_180);
  }
  if (bVar5 == false) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_508,L"Self comparison failed");
    (*pcVar2)(pFVar1,&local_508,0);
    if (local_508.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_508.Data.AllocatorInstance.Data);
    }
  }
  if (local_5f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_5f8.Data.AllocatorInstance.Data);
  }
  pFVar8 = FAutomationTestFramework::Get();
  pFVar1 = pFVar8->CurrentTest;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
  ::FString::FString(&local_4f8,L"Construct key (int64)");
  (*pcVar2)(pFVar1,&local_4f8,0,0);
  if (local_4f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4f8.Data.AllocatorInstance.Data);
  }
  local_78._padding_ = 0x2a;
  local_78.TypeIndex = 3;
  ::FString::PrintfImpl(&local_5e8,L"%lld");
  FVar13.Data = (FScriptContainerElement *)L"";
  if (local_5e8.Data.ArrayNum != 0) {
    FVar13.Data = local_5e8.Data.AllocatorInstance.Data;
  }
  iVar7 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar13.Data,L"42");
  if (local_5e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_5e8.Data.AllocatorInstance.Data);
  }
  if (iVar7 != 0) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_4e8,L"Expected string wasn\'t returned");
    (*pcVar2)(pFVar1,&local_4e8,0);
    if (local_4e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_4e8.Data.AllocatorInstance.Data);
    }
  }
  local_658.Key = &local_78;
  if (`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<UE::Editor::DataStorage::FKeyViewComparer,0,1,2,3,4,5,6,7,8,9,0,TVariant<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const*___ptr64,FSoftObjectPath_const*___ptr64>_const&___ptr64>(unsigned___int64,UE::Editor::DataStorage::FKeyViewComparer&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2,3,4,5,6,7,8,9>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const*___ptr64,FSoftObjectPath_const*___ptr64>_const&___ptr64)'
      ::__l2::Invokers[local_78.TypeIndex] ==
      Core::Private::
      VisitApplyEncoded<3,0,UE::Editor::DataStorage::FKeyViewComparer,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>_const_&>
     ) {
    bVar5 = local_78.TypeIndex == 3;
  }
  else {
    bVar5 = (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<UE::Editor::DataStorage::FKeyViewComparer,0,1,2,3,4,5,6,7,8,9,0,TVariant<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const*___ptr64,FSoftObjectPath_const*___ptr64>_const&___ptr64>(unsigned___int64,UE::Editor::DataStorage::FKeyViewComparer&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2,3,4,5,6,7,8,9>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const*___ptr64,FSoftObjectPath_const*___ptr64>_const&___ptr64)'
              ::__l2::Invokers[local_78.TypeIndex])(&local_658,&local_78);
  }
  if (bVar5 == false) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_4d8,L"Self comparison failed");
    (*pcVar2)(pFVar1,&local_4d8,0);
    if (local_4d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_4d8.Data.AllocatorInstance.Data);
    }
  }
  pFVar8 = FAutomationTestFramework::Get();
  pFVar1 = pFVar8->CurrentTest;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
  ::FString::FString(&local_4c8,L"Construct key (uint64)");
  (*pcVar2)(pFVar1,&local_4c8,0,0);
  if (local_4c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4c8.Data.AllocatorInstance.Data);
  }
  local_168._padding_ = 0x2a;
  local_168.TypeIndex = 4;
  ::FString::PrintfImpl(&local_5d8,L"%llu");
  FVar13.Data = (FScriptContainerElement *)L"";
  if (local_5d8.Data.ArrayNum != 0) {
    FVar13.Data = local_5d8.Data.AllocatorInstance.Data;
  }
  iVar7 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar13.Data,L"42");
  if (local_5d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_5d8.Data.AllocatorInstance.Data);
  }
  if (iVar7 != 0) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_4b8,L"Expected string wasn\'t returned");
    (*pcVar2)(pFVar1,&local_4b8,0);
    if (local_4b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_4b8.Data.AllocatorInstance.Data);
    }
  }
  local_650.Key = &local_168;
  if (`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<UE::Editor::DataStorage::FKeyViewComparer,0,1,2,3,4,5,6,7,8,9,0,TVariant<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const*___ptr64,FSoftObjectPath_const*___ptr64>_const&___ptr64>(unsigned___int64,UE::Editor::DataStorage::FKeyViewComparer&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2,3,4,5,6,7,8,9>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const*___ptr64,FSoftObjectPath_const*___ptr64>_const&___ptr64)'
      ::__l2::Invokers[local_168.TypeIndex] ==
      Core::Private::
      VisitApplyEncoded<4,0,UE::Editor::DataStorage::FKeyViewComparer,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>_const_&>
     ) {
    bVar5 = local_168.TypeIndex == 4;
  }
  else {
    bVar5 = (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<UE::Editor::DataStorage::FKeyViewComparer,0,1,2,3,4,5,6,7,8,9,0,TVariant<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const*___ptr64,FSoftObjectPath_const*___ptr64>_const&___ptr64>(unsigned___int64,UE::Editor::DataStorage::FKeyViewComparer&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2,3,4,5,6,7,8,9>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const*___ptr64,FSoftObjectPath_const*___ptr64>_const&___ptr64)'
              ::__l2::Invokers[local_168.TypeIndex])(&local_650,&local_168);
  }
  if (bVar5 == false) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_4a8,L"Self comparison failed");
    (*pcVar2)(pFVar1,&local_4a8,0);
    if (local_4a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_4a8.Data.AllocatorInstance.Data);
    }
  }
  pFVar8 = FAutomationTestFramework::Get();
  pFVar1 = pFVar8->CurrentTest;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
  ::FString::FString(&local_498,L"Construct key (float)");
  (*pcVar2)(pFVar1,&local_498,0,0);
  if (local_498.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_498.Data.AllocatorInstance.Data);
  }
  dVar3 = __real_4045000000000000;
  local_150._padding_._0_4_ = 0x42280000;
  local_150.TypeIndex = 5;
  ::FString::SanitizeFloat(&local_5c8,__real_4045000000000000,1);
  FVar13.Data = (FScriptContainerElement *)L"";
  if (local_5c8.Data.ArrayNum != 0) {
    FVar13.Data = local_5c8.Data.AllocatorInstance.Data;
  }
  iVar7 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar13.Data,L"42.0");
  if (local_5c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_5c8.Data.AllocatorInstance.Data);
  }
  if (iVar7 != 0) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_488,L"Expected string wasn\'t returned");
    (*pcVar2)(pFVar1,&local_488,0);
    if (local_488.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_488.Data.AllocatorInstance.Data);
    }
  }
  local_648.Key = &local_150;
  if (`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<UE::Editor::DataStorage::FKeyViewComparer,0,1,2,3,4,5,6,7,8,9,0,TVariant<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const*___ptr64,FSoftObjectPath_const*___ptr64>_const&___ptr64>(unsigned___int64,UE::Editor::DataStorage::FKeyViewComparer&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2,3,4,5,6,7,8,9>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const*___ptr64,FSoftObjectPath_const*___ptr64>_const&___ptr64)'
      ::__l2::Invokers[local_150.TypeIndex] ==
      Core::Private::
      VisitApplyEncoded<5,0,UE::Editor::DataStorage::FKeyViewComparer,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>_const_&>
     ) {
    bVar5 = local_150.TypeIndex == 5;
  }
  else {
    bVar5 = (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<UE::Editor::DataStorage::FKeyViewComparer,0,1,2,3,4,5,6,7,8,9,0,TVariant<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const*___ptr64,FSoftObjectPath_const*___ptr64>_const&___ptr64>(unsigned___int64,UE::Editor::DataStorage::FKeyViewComparer&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2,3,4,5,6,7,8,9>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const*___ptr64,FSoftObjectPath_const*___ptr64>_const&___ptr64)'
              ::__l2::Invokers[local_150.TypeIndex])(&local_648,&local_150);
  }
  if (bVar5 == false) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_478,L"Self comparison failed");
    (*pcVar2)(pFVar1,&local_478,0);
    if (local_478.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_478.Data.AllocatorInstance.Data);
    }
  }
  pFVar8 = FAutomationTestFramework::Get();
  pFVar1 = pFVar8->CurrentTest;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
  ::FString::FString(&local_468,L"Construct key (double)");
  (*pcVar2)(pFVar1,&local_468,0,0);
  if (local_468.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_468.Data.AllocatorInstance.Data);
  }
  local_138._padding_ = (longlong)dVar3;
  local_138.TypeIndex = 6;
  ::FString::SanitizeFloat(&local_5b8,dVar3,1);
  FVar13.Data = (FScriptContainerElement *)L"";
  if (local_5b8.Data.ArrayNum != 0) {
    FVar13.Data = local_5b8.Data.AllocatorInstance.Data;
  }
  iVar7 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar13.Data,L"42.0");
  if (local_5b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_5b8.Data.AllocatorInstance.Data);
  }
  if (iVar7 != 0) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_458,L"Expected string wasn\'t returned");
    (*pcVar2)(pFVar1,&local_458,0);
    if (local_458.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_458.Data.AllocatorInstance.Data);
    }
  }
  local_640.Key = &local_138;
  if (`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<UE::Editor::DataStorage::FKeyViewComparer,0,1,2,3,4,5,6,7,8,9,0,TVariant<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const*___ptr64,FSoftObjectPath_const*___ptr64>_const&___ptr64>(unsigned___int64,UE::Editor::DataStorage::FKeyViewComparer&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2,3,4,5,6,7,8,9>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const*___ptr64,FSoftObjectPath_const*___ptr64>_const&___ptr64)'
      ::__l2::Invokers[local_138.TypeIndex] ==
      Core::Private::
      VisitApplyEncoded<6,0,UE::Editor::DataStorage::FKeyViewComparer,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>_const_&>
     ) {
    bVar5 = local_138.TypeIndex == 6;
  }
  else {
    bVar5 = (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<UE::Editor::DataStorage::FKeyViewComparer,0,1,2,3,4,5,6,7,8,9,0,TVariant<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const*___ptr64,FSoftObjectPath_const*___ptr64>_const&___ptr64>(unsigned___int64,UE::Editor::DataStorage::FKeyViewComparer&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2,3,4,5,6,7,8,9>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const*___ptr64,FSoftObjectPath_const*___ptr64>_const&___ptr64)'
              ::__l2::Invokers[local_138.TypeIndex])(&local_640,&local_138);
  }
  if (bVar5 == false) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_448,L"Self comparison failed");
    (*pcVar2)(pFVar1,&local_448,0);
    if (local_448.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_448.Data.AllocatorInstance.Data);
    }
  }
  pFVar8 = FAutomationTestFramework::Get();
  pFVar1 = pFVar8->CurrentTest;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
  ::FString::FString(&local_438,L"Construct key (FString)");
  (*pcVar2)(pFVar1,&local_438,0,0);
  if (local_438.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_438.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_5a8,L"TestString");
  pFVar12 = (FName *)0x0;
  local_228._padding_ = (longlong)local_5a8.Data.AllocatorInstance.Data;
  local_228.TypeIndex = 7;
  local_228._padding_._0_4_ = local_5a8.Data.ArrayNum + -1;
  if (local_5a8.Data.ArrayNum == 0) {
    local_228._padding_._0_4_ = 0;
  }
  uVar9 = CityHash64((char *)local_5a8.Data.AllocatorInstance.Data,(int)local_228._padding_ * 2);
  if (uVar9 == 0) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_428,L"Hash is was zero");
    (*pcVar2)(pFVar1,&local_428,0);
    if (local_428.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_428.Data.AllocatorInstance.Data);
    }
  }
  if (`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<UE::Editor::DataStorage::FToString,0,1,2,3,4,5,6,7,8,9,0,TVariant<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const*___ptr64,FSoftObjectPath_const*___ptr64>_const&___ptr64>(unsigned___int64,UE::Editor::DataStorage::FToString&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2,3,4,5,6,7,8,9>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const*___ptr64,FSoftObjectPath_const*___ptr64>_const&___ptr64)'
      ::__l2::Invokers[local_228.TypeIndex] ==
      Core::Private::
      VisitApplyEncoded<7,0,UE::Editor::DataStorage::FToString,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>_const_&>
     ) {
    local_6e0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_6e0.Data.ArrayNum = 0;
    local_6e0.Data.ArrayMax = 0;
    pFVar10 = ::FString::ConstructFromPtrSize
                        (&local_258,(wchar_t *)local_228._padding_,(int)local_228._padding_);
    if (&local_6e0 != pFVar10) {
      if (local_6e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_6e0.Data.AllocatorInstance.Data);
      }
      local_6e0.Data.AllocatorInstance.Data = (pFVar10->Data).AllocatorInstance.Data;
      (pFVar10->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_6e0.Data.ArrayNum = (pFVar10->Data).ArrayNum;
      local_6e0.Data.ArrayMax = (pFVar10->Data).ArrayMax;
      (pFVar10->Data).ArrayNum = 0;
      (pFVar10->Data).ArrayMax = 0;
    }
    if (local_258.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_258.Data.AllocatorInstance.Data);
    }
  }
  else {
    (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<UE::Editor::DataStorage::FToString,0,1,2,3,4,5,6,7,8,9,0,TVariant<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const*___ptr64,FSoftObjectPath_const*___ptr64>_const&___ptr64>(unsigned___int64,UE::Editor::DataStorage::FToString&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2,3,4,5,6,7,8,9>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const*___ptr64,FSoftObjectPath_const*___ptr64>_const&___ptr64)'
      ::__l2::Invokers[local_228.TypeIndex])(&local_6e0,&local_6e8,&local_228);
  }
  FVar13.Data = (FScriptContainerElement *)L"";
  if (local_6e0.Data.ArrayNum != 0) {
    FVar13.Data = local_6e0.Data.AllocatorInstance.Data;
  }
  iVar7 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar13.Data,L"TestString");
  if (local_6e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_6e0.Data.AllocatorInstance.Data);
  }
  if (iVar7 != 0) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_418,L"Expected string wasn\'t returned");
    (*pcVar2)(pFVar1,&local_418,0);
    if (local_418.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_418.Data.AllocatorInstance.Data);
    }
  }
  local_638.Key = &local_228;
  if (`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<UE::Editor::DataStorage::FKeyViewComparer,0,1,2,3,4,5,6,7,8,9,0,TVariant<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const*___ptr64,FSoftObjectPath_const*___ptr64>_const&___ptr64>(unsigned___int64,UE::Editor::DataStorage::FKeyViewComparer&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2,3,4,5,6,7,8,9>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const*___ptr64,FSoftObjectPath_const*___ptr64>_const&___ptr64)'
      ::__l2::Invokers[local_228.TypeIndex] ==
      Core::Private::
      VisitApplyEncoded<7,0,UE::Editor::DataStorage::FKeyViewComparer,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>_const_&>
     ) {
    if (local_228.TypeIndex == 7) {
      uStack_240 = CONCAT44(local_228._padding_._4_4_,(int)local_228._padding_);
      local_248 = (FScriptContainerElement *)local_228._padding_;
      if (((int)local_228._padding_ == 0) ||
         (iVar7 = FGenericPlatformStricmp::Strnicmp
                            ((wchar_t *)local_228._padding_,(wchar_t *)local_228._padding_,
                             (longlong)(int)local_228._padding_), iVar7 == 0)) {
        bVar5 = true;
        goto LAB_142cbd375;
      }
    }
    bVar5 = false;
  }
  else {
    bVar5 = (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<UE::Editor::DataStorage::FKeyViewComparer,0,1,2,3,4,5,6,7,8,9,0,TVariant<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const*___ptr64,FSoftObjectPath_const*___ptr64>_const&___ptr64>(unsigned___int64,UE::Editor::DataStorage::FKeyViewComparer&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2,3,4,5,6,7,8,9>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const*___ptr64,FSoftObjectPath_const*___ptr64>_const&___ptr64)'
              ::__l2::Invokers[local_228.TypeIndex])(&local_638,&local_228);
  }
LAB_142cbd375:
  if (bVar5 == false) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_408,L"Self comparison failed");
    (*pcVar2)(pFVar1,&local_408,0);
    if (local_408.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_408.Data.AllocatorInstance.Data);
    }
  }
  if (local_5a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_5a8.Data.AllocatorInstance.Data);
  }
  pFVar8 = FAutomationTestFramework::Get();
  pFVar1 = pFVar8->CurrentTest;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
  ::FString::FString(&local_3f8,L"Construct key (FStringView)");
  (*pcVar2)(pFVar1,&local_3f8,0,0);
  if (local_3f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3f8.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_598,L"TestString");
  local_3e8 = local_598.Data.AllocatorInstance.Data;
  local_210.TypeIndex = 7;
  iStack_3e0 = local_598.Data.ArrayNum + -1;
  if (local_598.Data.ArrayNum == 0) {
    iStack_3e0 = 0;
  }
  local_210._padding_ = CONCAT44(uStack_3dc,iStack_3e0);
  local_210._padding_ = (longlong)local_598.Data.AllocatorInstance.Data;
  uVar9 = CityHash64((char *)local_598.Data.AllocatorInstance.Data,iStack_3e0 * 2);
  if (uVar9 == 0) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_3d8,L"Hash is was zero");
    (*pcVar2)(pFVar1,&local_3d8,0);
    if (local_3d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3d8.Data.AllocatorInstance.Data);
    }
  }
  if (`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<UE::Editor::DataStorage::FToString,0,1,2,3,4,5,6,7,8,9,0,TVariant<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const*___ptr64,FSoftObjectPath_const*___ptr64>_const&___ptr64>(unsigned___int64,UE::Editor::DataStorage::FToString&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2,3,4,5,6,7,8,9>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const*___ptr64,FSoftObjectPath_const*___ptr64>_const&___ptr64)'
      ::__l2::Invokers[local_210.TypeIndex] ==
      Core::Private::
      VisitApplyEncoded<7,0,UE::Editor::DataStorage::FToString,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>_const_&>
     ) {
    local_6d0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_6d0.Data.ArrayNum = 0;
    local_6d0.Data.ArrayMax = 0;
    pFVar10 = ::FString::ConstructFromPtrSize
                        (&local_278,(wchar_t *)local_210._padding_,(int)local_210._padding_);
    if (&local_6d0 != pFVar10) {
      if (local_6d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_6d0.Data.AllocatorInstance.Data);
      }
      local_6d0.Data.AllocatorInstance.Data = (pFVar10->Data).AllocatorInstance.Data;
      (pFVar10->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_6d0.Data.ArrayNum = (pFVar10->Data).ArrayNum;
      local_6d0.Data.ArrayMax = (pFVar10->Data).ArrayMax;
      (pFVar10->Data).ArrayNum = 0;
      (pFVar10->Data).ArrayMax = 0;
    }
    if (local_278.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_278.Data.AllocatorInstance.Data);
    }
  }
  else {
    (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<UE::Editor::DataStorage::FToString,0,1,2,3,4,5,6,7,8,9,0,TVariant<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const*___ptr64,FSoftObjectPath_const*___ptr64>_const&___ptr64>(unsigned___int64,UE::Editor::DataStorage::FToString&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2,3,4,5,6,7,8,9>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const*___ptr64,FSoftObjectPath_const*___ptr64>_const&___ptr64)'
      ::__l2::Invokers[local_210.TypeIndex])(&local_6d0,&local_6e7,&local_210);
  }
  FVar13.Data = (FScriptContainerElement *)L"";
  if (local_6d0.Data.ArrayNum != 0) {
    FVar13.Data = local_6d0.Data.AllocatorInstance.Data;
  }
  iVar7 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar13.Data,L"TestString");
  if (local_6d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_6d0.Data.AllocatorInstance.Data);
  }
  if (iVar7 != 0) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_3c8,L"Expected string wasn\'t returned");
    (*pcVar2)(pFVar1,&local_3c8,0);
    if (local_3c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3c8.Data.AllocatorInstance.Data);
    }
  }
  local_630.Key = &local_210;
  if (`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<UE::Editor::DataStorage::FKeyViewComparer,0,1,2,3,4,5,6,7,8,9,0,TVariant<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const*___ptr64,FSoftObjectPath_const*___ptr64>_const&___ptr64>(unsigned___int64,UE::Editor::DataStorage::FKeyViewComparer&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2,3,4,5,6,7,8,9>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const*___ptr64,FSoftObjectPath_const*___ptr64>_const&___ptr64)'
      ::__l2::Invokers[local_210.TypeIndex] ==
      Core::Private::
      VisitApplyEncoded<7,0,UE::Editor::DataStorage::FKeyViewComparer,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>_const_&>
     ) {
    if (local_210.TypeIndex == 7) {
      local_238 = (FScriptContainerElement *)local_210._padding_;
      lStack_230 = local_210._padding_;
      if (((int)local_210._padding_ == 0) ||
         (iVar7 = FGenericPlatformStricmp::Strnicmp
                            ((wchar_t *)local_210._padding_,(wchar_t *)local_210._padding_,
                             (longlong)(int)local_210._padding_), iVar7 == 0)) {
        bVar5 = true;
        goto LAB_142cbd631;
      }
    }
    bVar5 = false;
  }
  else {
    bVar5 = (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<UE::Editor::DataStorage::FKeyViewComparer,0,1,2,3,4,5,6,7,8,9,0,TVariant<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const*___ptr64,FSoftObjectPath_const*___ptr64>_const&___ptr64>(unsigned___int64,UE::Editor::DataStorage::FKeyViewComparer&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2,3,4,5,6,7,8,9>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const*___ptr64,FSoftObjectPath_const*___ptr64>_const&___ptr64)'
              ::__l2::Invokers[local_210.TypeIndex])(&local_630,&local_210);
  }
LAB_142cbd631:
  if (bVar5 == false) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_3b8,L"Self comparison failed");
    (*pcVar2)(pFVar1,&local_3b8,0);
    if (local_3b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3b8.Data.AllocatorInstance.Data);
    }
  }
  if (local_598.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_598.Data.AllocatorInstance.Data);
  }
  pFVar8 = FAutomationTestFramework::Get();
  pFVar1 = pFVar8->CurrentTest;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
  ::FString::FString(&local_3a8,L"Construct key (FName)");
  (*pcVar2)(pFVar1,&local_3a8,0,0);
  if (local_3a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3a8.Data.AllocatorInstance.Data);
  }
  local_1f8._padding_ = (longlong)&TestFName;
  local_1f8.TypeIndex = 8;
  if (TestFName == (FName)0x0) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_398,L"Hash is was zero");
    (*pcVar2)(pFVar1,&local_398,0);
    if (local_398.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_398.Data.AllocatorInstance.Data);
    }
  }
  if (`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<UE::Editor::DataStorage::FToString,0,1,2,3,4,5,6,7,8,9,0,TVariant<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const*___ptr64,FSoftObjectPath_const*___ptr64>_const&___ptr64>(unsigned___int64,UE::Editor::DataStorage::FToString&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2,3,4,5,6,7,8,9>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const*___ptr64,FSoftObjectPath_const*___ptr64>_const&___ptr64)'
      ::__l2::Invokers[local_1f8.TypeIndex] ==
      Core::Private::
      VisitApplyEncoded<8,0,UE::Editor::DataStorage::FToString,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>_const_&>
     ) {
    ::FName::ToString((FName *)local_1f8._padding_,&local_690);
  }
  else {
    (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<UE::Editor::DataStorage::FToString,0,1,2,3,4,5,6,7,8,9,0,TVariant<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const*___ptr64,FSoftObjectPath_const*___ptr64>_const&___ptr64>(unsigned___int64,UE::Editor::DataStorage::FToString&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2,3,4,5,6,7,8,9>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const*___ptr64,FSoftObjectPath_const*___ptr64>_const&___ptr64)'
      ::__l2::Invokers[local_1f8.TypeIndex])(&local_690,&local_6e6,&local_1f8);
  }
  FVar13.Data = (FScriptContainerElement *)L"";
  if (local_690.Data.ArrayNum != 0) {
    FVar13.Data = local_690.Data.AllocatorInstance.Data;
  }
  iVar7 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar13.Data,L"FMapKey_TestName");
  if (local_690.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_690.Data.AllocatorInstance.Data);
  }
  if (iVar7 != 0) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_388,L"Expected string wasn\'t returned");
    (*pcVar2)(pFVar1,&local_388,0);
    if (local_388.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_388.Data.AllocatorInstance.Data);
    }
  }
  local_628.Key = &local_1f8;
  if (`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<UE::Editor::DataStorage::FKeyViewComparer,0,1,2,3,4,5,6,7,8,9,0,TVariant<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const*___ptr64,FSoftObjectPath_const*___ptr64>_const&___ptr64>(unsigned___int64,UE::Editor::DataStorage::FKeyViewComparer&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2,3,4,5,6,7,8,9>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const*___ptr64,FSoftObjectPath_const*___ptr64>_const&___ptr64)'
      ::__l2::Invokers[local_1f8.TypeIndex] ==
      Core::Private::
      VisitApplyEncoded<8,0,UE::Editor::DataStorage::FKeyViewComparer,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>_const_&>
     ) {
    bVar5 = local_1f8.TypeIndex == 8;
  }
  else {
    bVar5 = (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<UE::Editor::DataStorage::FKeyViewComparer,0,1,2,3,4,5,6,7,8,9,0,TVariant<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const*___ptr64,FSoftObjectPath_const*___ptr64>_const&___ptr64>(unsigned___int64,UE::Editor::DataStorage::FKeyViewComparer&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2,3,4,5,6,7,8,9>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const*___ptr64,FSoftObjectPath_const*___ptr64>_const&___ptr64)'
              ::__l2::Invokers[local_1f8.TypeIndex])(&local_628,&local_1f8);
  }
  if (bVar5 == false) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_378,L"Self comparison failed");
    (*pcVar2)(pFVar1,&local_378,0);
    if (local_378.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_378.Data.AllocatorInstance.Data);
    }
  }
  pFVar8 = FAutomationTestFramework::Get();
  pFVar1 = pFVar8->CurrentTest;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
  ::FString::FString(&local_368,L"Construct key (FSoftObjectPath)");
  (*pcVar2)(pFVar1,&local_368,0,0);
  if (local_368.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_368.Data.AllocatorInstance.Data);
  }
  local_1e0.TypeIndex = 9;
  local_1e0._padding_ = (longlong)&TestPath;
  uVar9 = FHasher::operator()(&local_6e5,&TestPath);
  if (uVar9 == 0) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_358,L"Hash is was zero");
    (*pcVar2)(pFVar1,&local_358,0);
    if (local_358.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_358.Data.AllocatorInstance.Data);
    }
  }
  pFVar10 = FSoftObjectPath::ToString(&TestPath,&local_268);
  if (`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<UE::Editor::DataStorage::FToString,0,1,2,3,4,5,6,7,8,9,0,TVariant<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const*___ptr64,FSoftObjectPath_const*___ptr64>_const&___ptr64>(unsigned___int64,UE::Editor::DataStorage::FToString&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2,3,4,5,6,7,8,9>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const*___ptr64,FSoftObjectPath_const*___ptr64>_const&___ptr64)'
      ::__l2::Invokers[local_1e0.TypeIndex] ==
      Core::Private::
      VisitApplyEncoded<9,0,UE::Editor::DataStorage::FToString,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>_const_&>
     ) {
    FSoftObjectPath::ToString((FSoftObjectPath *)local_1e0._padding_,&local_680);
  }
  else {
    (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<UE::Editor::DataStorage::FToString,0,1,2,3,4,5,6,7,8,9,0,TVariant<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const*___ptr64,FSoftObjectPath_const*___ptr64>_const&___ptr64>(unsigned___int64,UE::Editor::DataStorage::FToString&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2,3,4,5,6,7,8,9>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const*___ptr64,FSoftObjectPath_const*___ptr64>_const&___ptr64)'
      ::__l2::Invokers[local_1e0.TypeIndex])(&local_680,local_6e4,&local_1e0);
  }
  iVar7 = (pFVar10->Data).ArrayNum;
  bVar5 = false;
  if (local_680.Data.ArrayNum == iVar7) {
    if (1 < local_680.Data.ArrayNum) {
      iVar7 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)local_680.Data.AllocatorInstance.Data,
                         (wchar_t *)(pFVar10->Data).AllocatorInstance.Data);
      bVar5 = iVar7 != 0;
    }
  }
  else {
    bVar5 = local_680.Data.ArrayNum + iVar7 != 1;
  }
  if (local_680.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_680.Data.AllocatorInstance.Data);
  }
  if (local_268.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_268.Data.AllocatorInstance.Data);
  }
  if (bVar5) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_348,L"Expected string wasn\'t returned");
    (*pcVar2)(pFVar1,&local_348,0);
    if (local_348.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_348.Data.AllocatorInstance.Data);
    }
  }
  local_620.Key = &local_1e0;
  bVar5 = (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<UE::Editor::DataStorage::FKeyViewComparer,0,1,2,3,4,5,6,7,8,9,0,TVariant<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const*___ptr64,FSoftObjectPath_const*___ptr64>_const&___ptr64>(unsigned___int64,UE::Editor::DataStorage::FKeyViewComparer&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2,3,4,5,6,7,8,9>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const*___ptr64,FSoftObjectPath_const*___ptr64>_const&___ptr64)'
            ::__l2::Invokers[local_1e0.TypeIndex])(&local_620,&local_1e0);
  if (!bVar5) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_338,L"Self comparison failed");
    (*pcVar2)(pFVar1,&local_338,0);
    if (local_338.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_338.Data.AllocatorInstance.Data);
    }
  }
  pFVar8 = FAutomationTestFramework::Get();
  pFVar1 = pFVar8->CurrentTest;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
  ::FString::FString(&local_328,L"Convert key (Empty)");
  (*pcVar2)(pFVar1,&local_328,0);
  if (local_328.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_328.Data.AllocatorInstance.Data);
  }
  local_48.Key.TypeIndex = 0;
  ConvertKeyToKeyViewTest(&local_48);
  uVar14 = (ulonglong)local_48.Key.TypeIndex;
  if ((9 < local_48.Key.TypeIndex) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar14] !=
      Core::Private::TDestructorCaller<FEmptyVariantState>::Destruct) {
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar14])(&local_48);
  }
  pFVar8 = FAutomationTestFramework::Get();
  pFVar1 = pFVar8->CurrentTest;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
  ::FString::FString(&local_318,L"Convert key (void*)");
  (*pcVar2)(pFVar1,&local_318,0);
  if (local_318.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_318.Data.AllocatorInstance.Data);
  }
  local_120.Key._padding_ = 0x1234;
  local_120.Key.TypeIndex = 1;
  ConvertKeyToKeyViewTest(&local_120);
  uVar14 = (ulonglong)local_120.Key.TypeIndex;
  if ((9 < local_120.Key.TypeIndex) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar14] !=
      Core::Private::TDestructorCaller<void_const_*>::Destruct) {
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar14])(&local_120);
  }
  pFVar8 = FAutomationTestFramework::Get();
  pFVar1 = pFVar8->CurrentTest;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
  ::FString::FString(&local_308,L"Convert key (UObject*)");
  (*pcVar2)(pFVar1,&local_308,0);
  if (local_308.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_308.Data.AllocatorInstance.Data);
  }
  local_108.Key._padding_ = 0x1234;
  local_108.Key.TypeIndex = 2;
  ConvertKeyToKeyViewTest(&local_108);
  uVar14 = (ulonglong)local_108.Key.TypeIndex;
  if ((9 < local_108.Key.TypeIndex) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar14] !=
      Core::Private::TDestructorCaller<UObject_const_*>::Destruct) {
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar14])(&local_108);
  }
  pFVar8 = FAutomationTestFramework::Get();
  pFVar1 = pFVar8->CurrentTest;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
  ::FString::FString(&local_2f8,L"Convert key (int64)");
  (*pcVar2)(pFVar1,&local_2f8,0);
  if (local_2f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2f8.Data.AllocatorInstance.Data);
  }
  local_f0.Key._padding_ = 0x2a;
  local_f0.Key.TypeIndex = 3;
  ConvertKeyToKeyViewTest(&local_f0);
  uVar14 = (ulonglong)local_f0.Key.TypeIndex;
  if ((9 < local_f0.Key.TypeIndex) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar14] != Core::Private::TDestructorCaller<__int64>::Destruct)
  {
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar14])(&local_f0);
  }
  pFVar8 = FAutomationTestFramework::Get();
  pFVar1 = pFVar8->CurrentTest;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
  ::FString::FString(&local_2e8,L"Convert key (uint64)");
  (*pcVar2)(pFVar1,&local_2e8,0);
  if (local_2e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2e8.Data.AllocatorInstance.Data);
  }
  local_d8.Key._padding_ = 0x2a;
  local_d8.Key.TypeIndex = 4;
  ConvertKeyToKeyViewTest(&local_d8);
  uVar14 = (ulonglong)local_d8.Key.TypeIndex;
  if ((9 < local_d8.Key.TypeIndex) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar14] !=
      Core::Private::TDestructorCaller<unsigned___int64>::Destruct) {
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar14])(&local_d8);
  }
  pFVar8 = FAutomationTestFramework::Get();
  pFVar1 = pFVar8->CurrentTest;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
  ::FString::FString(&local_2d8,L"Convert key (float)");
  (*pcVar2)(pFVar1,&local_2d8,0);
  if (local_2d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2d8.Data.AllocatorInstance.Data);
  }
  local_c0.Key._padding_._0_4_ = 0x42280000;
  local_c0.Key.TypeIndex = 5;
  ConvertKeyToKeyViewTest(&local_c0);
  uVar14 = (ulonglong)local_c0.Key.TypeIndex;
  if ((9 < local_c0.Key.TypeIndex) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar14] != Core::Private::TDestructorCaller<float>::Destruct) {
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar14])(&local_c0);
  }
  pFVar8 = FAutomationTestFramework::Get();
  pFVar1 = pFVar8->CurrentTest;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
  ::FString::FString(&local_2c8,L"Convert key (double)");
  (*pcVar2)(pFVar1,&local_2c8,0);
  if (local_2c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2c8.Data.AllocatorInstance.Data);
  }
  local_a8.Key._padding_ = (longlong)dVar3;
  local_a8.Key.TypeIndex = 6;
  ConvertKeyToKeyViewTest(&local_a8);
  uVar14 = (ulonglong)local_a8.Key.TypeIndex;
  if ((9 < local_a8.Key.TypeIndex) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar14] != Core::Private::TDestructorCaller<double>::Destruct)
  {
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar14])(&local_a8);
  }
  pFVar8 = FAutomationTestFramework::Get();
  pFVar1 = pFVar8->CurrentTest;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
  ::FString::FString(&local_2b8,L"Convert key (FString)");
  (*pcVar2)(pFVar1,&local_2b8,0);
  if (local_2b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2b8.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_588,L"TestString");
  FVar13.Data = local_588.Data.AllocatorInstance.Data;
  local_6c0.Data = (FScriptContainerElement *)0x0;
  if (local_588.Data.ArrayNum == 0) {
    local_1c8.Key._padding_ = (longlong)pFVar12;
    local_1c8.Key._padding_._4_4_ = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_588.Data.ArrayNum,0,&local_6c0,local_588.Data.ArrayNum,
               (int *)((longlong)&local_6b8 + 4));
    memcpy(local_6c0.Data,FVar13.Data,(longlong)local_588.Data.ArrayNum * 2);
    local_1c8.Key._padding_ = (longlong)local_6c0.Data;
    local_1c8.Key._padding_._4_4_ = local_6b8._4_4_;
  }
  local_6c0.Data = (FScriptContainerElement *)0x0;
  local_6b8 = 0;
  local_1c8.Key.TypeIndex = 7;
  ConvertKeyToKeyViewTest(&local_1c8);
  uVar14 = (ulonglong)local_1c8.Key.TypeIndex;
  if ((9 < local_1c8.Key.TypeIndex) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar14] == Core::Private::TDestructorCaller<FString>::Destruct)
  {
    if ((FName *)local_1c8.Key._padding_ != (FName *)0x0) {
      FMemory::Free((void *)local_1c8.Key._padding_);
    }
  }
  else {
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar14])(&local_1c8);
  }
  if (local_588.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_588.Data.AllocatorInstance.Data);
  }
  pFVar8 = FAutomationTestFramework::Get();
  pFVar1 = pFVar8->CurrentTest;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
  ::FString::FString(&local_2a8,L"Convert key (FName)");
  (*pcVar2)(pFVar1,&local_2a8,0);
  if (local_2a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2a8.Data.AllocatorInstance.Data);
  }
  local_90.Key._padding_._0_4_ = TestFName.ComparisonIndex.Value;
  local_90.Key._padding_._4_4_ = TestFName.Number;
  local_90.Key.TypeIndex = 8;
  ConvertKeyToKeyViewTest(&local_90);
  uVar14 = (ulonglong)local_90.Key.TypeIndex;
  if ((9 < local_90.Key.TypeIndex) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar14] != Core::Private::TDestructorCaller<FName>::Destruct) {
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar14])(&local_90);
  }
  pFVar8 = FAutomationTestFramework::Get();
  pFVar1 = pFVar8->CurrentTest;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
  ::FString::FString(&local_298,L"Convert key (FSoftObjectPath)");
  (*pcVar2)(pFVar1,&local_298,0);
  if (local_298.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_298.Data.AllocatorInstance.Data);
  }
  FVar13.Data = TestPath.SubPathString.Data.AllocatorInstance.Data;
  _Size = (size_t)TestPath.SubPathString.Data.ArrayNum;
  local_6a0.ComparisonIndex.Value = 0;
  local_6a0.Number = 0;
  local_698 = CONCAT44(local_698._4_4_,TestPath.SubPathString.Data.ArrayNum);
  local_6b0 = TestPath.AssetPath;
  if (TestPath.SubPathString.Data.ArrayNum == 0) {
    local_698 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,TestPath.SubPathString.Data.ArrayNum,0,(ForAnyElementType *)&local_6a0,
               TestPath.SubPathString.Data.ArrayNum,(int *)((longlong)&local_698 + 4));
    memcpy((void *)local_6a0,FVar13.Data,_Size);
  }
  pFVar11 = ::operator_new(0x20);
  if (pFVar11 != (FName *)0x0) {
    *pFVar11 = local_6b0.PackageName;
    pFVar11[1] = local_6b0.AssetName;
    pFVar11[2] = local_6a0;
    local_6a0.ComparisonIndex.Value = 0;
    local_6a0.Number = 0;
    pFVar11[3].ComparisonIndex.Value = (uint)local_698;
    pFVar11[3].Number = local_698._4_4_;
    local_698 = 0;
    pFVar12 = pFVar11;
  }
  local_1b0.Key.TypeIndex = 9;
  local_1b0.Key._padding_ = (longlong)pFVar12;
  if (local_6a0 != (FName)0x0) {
    FMemory::Free((void *)local_6a0);
  }
  ConvertKeyToKeyViewTest(&local_1b0);
  uVar14 = (ulonglong)local_1b0.Key.TypeIndex;
  if ((9 < local_1b0.Key.TypeIndex) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  lVar4 = local_1b0.Key._padding_;
  if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar14] ==
      Core::Private::
      TDestructorCaller<TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>::Destruct) {
    if ((FName *)local_1b0.Key._padding_ != (FName *)0x0) {
      if (*(FName *)(local_1b0.Key._padding_ + 0x10) != (FName)0x0) {
        FMemory::Free((void *)*(FName *)(local_1b0.Key._padding_ + 0x10));
      }
      ::operator_delete((void *)lVar4,0x20);
    }
  }
  else {
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar14])(&local_1b0);
  }
  return;
}

