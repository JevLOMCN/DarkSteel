// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TypedElementFramework
// Functions: 10

// GetTestFlags @ 142c843f0

EAutomationTestFlags __thiscall
UE::Editor::DataStorage::Tests::Private::FMapKey_Tests::GetTestFlags(FMapKey_Tests *this)

{
  return this->TestFlags;
}

// IsStressTest @ 142c84410

bool __thiscall
UE::Editor::DataStorage::Tests::Private::FMapKey_Tests::IsStressTest(FMapKey_Tests *this)

{
  return false;
}

// GetRequiredDeviceNum @ 142c84420

uint __thiscall
UE::Editor::DataStorage::Tests::Private::FMapKey_Tests::GetRequiredDeviceNum(FMapKey_Tests *this)

{
  return 1;
}

// GetTestSourceFileName @ 142c84430

FString * __thiscall
UE::Editor::DataStorage::Tests::Private::FMapKey_Tests::GetTestSourceFileName
          (FMapKey_Tests *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Tests\\Elements\\Common\\TypedElementMapKeyTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 142c84460

int __thiscall
UE::Editor::DataStorage::Tests::Private::FMapKey_Tests::GetTestSourceFileLine(FMapKey_Tests *this)

{
  return 0x23;
}

// GetTests @ 142c844c0

/* WARNING: Removing unreachable block (ram,0x000142c8463e) */

void __thiscall
UE::Editor::DataStorage::Tests::Private::FMapKey_Tests::GetTests
          (FMapKey_Tests *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
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

// RunTest @ 142c84660

bool __thiscall
UE::Editor::DataStorage::Tests::Private::FMapKey_Tests::RunTest
          (FMapKey_Tests *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 142c84690

FString * __thiscall
UE::Editor::DataStorage::Tests::Private::FMapKey_Tests::GetBeautifiedTestName
          (FMapKey_Tests *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FMapKey_Tests @ 142c97130

FMapKey_Tests * __thiscall
UE::Editor::DataStorage::Tests::Private::FMapKey_Tests::FMapKey_Tests
          (FMapKey_Tests *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7FMapKey_Tests_Private_Tests_DataStorage_Editor_UE__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[ApplicationContextMask][EngineFilter]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"Editor::DataStorage::Map Key (FMapKey)");
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

// TestBody @ 142cbe360

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Editor::DataStorage::Tests::Private::FMapKey_Tests::TestBody
          (FMapKey_Tests *this,FString *param_1)

{
  FAutomationTestBase *pFVar1;
  code *pcVar2;
  FScriptContainerElement *pFVar3;
  double dVar4;
  double dVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  FAutomationTestFramework *pFVar9;
  ulong64 uVar10;
  FString *pFVar11;
  FName FVar12;
  FSoftObjectPath *pFVar13;
  longlong lVar14;
  ForAnyElementType FVar15;
  ulonglong uVar16;
  size_t _Size;
  float fVar17;
  undefined1 auStackY_968 [32];
  FHasher local_928;
  FToString local_927;
  FHasher local_926;
  FToString local_925;
  FHasher local_924;
  FToString local_923;
  FHasher local_922;
  FToString local_921;
  FHasher local_920;
  FToString local_91f [7];
  ForAnyElementType local_918;
  undefined8 local_910;
  FTopLevelAssetPath local_908;
  FName local_8f8;
  undefined8 local_8f0;
  FString local_8e8;
  FString local_8d8;
  FString local_8c8;
  FString local_8b8;
  FKeyComparer local_8a8;
  FKeyComparer local_8a0;
  FKeyComparer local_898;
  FKeyComparer local_890;
  FKeyComparer local_888;
  FKeyComparer local_880;
  FKeyComparer local_878;
  FKeyComparer local_870;
  FKeyComparer local_868;
  FKeyComparer local_860;
  FKeyComparer local_858;
  FString local_850;
  FString local_840;
  FString local_830;
  FString local_820;
  FString local_810;
  FString local_800;
  FString local_7f0;
  FKeyComparer local_7e0;
  FString local_7d8;
  FString local_7c8;
  FString local_7b8;
  FString local_7a8;
  FString local_798;
  FString local_788;
  FString local_778;
  FString local_768;
  FString local_758;
  FString local_748;
  FString local_738;
  FString local_728;
  FString local_718;
  FString local_708;
  FString local_6f8;
  FString local_6e8;
  FString local_6d8;
  FString local_6c8;
  FString local_6b8;
  FString local_6a8;
  FString local_698;
  FString local_688;
  FString local_678;
  FString local_668;
  FString local_658;
  FString local_648;
  FString local_638;
  FString local_628;
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
  FString local_3e8;
  FString local_3d8;
  FString local_3c8;
  FString local_3b8;
  FString local_3a8;
  FString local_398;
  FSoftObjectPath local_388;
  FSoftObjectPath local_368;
  TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
  local_348;
  float local_330 [4];
  byte local_320;
  TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
  local_318;
  TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
  local_300;
  TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
  local_2e8;
  FMapKey local_2d0;
  TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
  local_2b8;
  TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
  local_2a0;
  TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
  local_288;
  TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
  local_270;
  TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
  local_258;
  TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
  local_240;
  FMapKey local_228;
  TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
  local_210;
  FMapKey local_1f8;
  FMapKey local_1e0;
  FMapKey local_1c8;
  FMapKey local_1b0;
  FMapKey local_198;
  TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
  local_180;
  TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
  local_168;
  TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
  local_150;
  TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
  local_138;
  TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
  local_120;
  TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
  local_108;
  TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
  local_f0;
  TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
  local_d8;
  TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
  local_c0;
  TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
  local_a8;
  TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
  local_90;
  TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
  local_78;
  TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
  local_60;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_968;
  pFVar9 = FAutomationTestFramework::Get();
  pFVar1 = pFVar9->CurrentTest;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
  ::FString::FString(&local_3c8,L"Empty key");
  (*pcVar2)(pFVar1,&local_3c8,0,0);
  if (local_3c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3c8.Data.AllocatorInstance.Data);
  }
  local_270.TypeIndex = 0;
  ::FString::FString(&local_850,L"Empty");
  FVar15.Data = (FScriptContainerElement *)L"";
  if (local_850.Data.ArrayNum != 0) {
    FVar15.Data = local_850.Data.AllocatorInstance.Data;
  }
  iVar8 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar15.Data,L"Empty");
  if (local_850.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_850.Data.AllocatorInstance.Data);
  }
  if (iVar8 != 0) {
    pFVar9 = FAutomationTestFramework::Get();
    pFVar1 = pFVar9->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_7d8,L"Expected string wasn\'t returned");
    (*pcVar2)(pFVar1,&local_7d8,0);
    if (local_7d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_7d8.Data.AllocatorInstance.Data);
    }
  }
  uVar16 = (ulonglong)local_270.TypeIndex;
  local_8a8.Key = &local_270;
  if (`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<UE::Editor::DataStorage::FKeyComparer,0,1,2,3,4,5,6,7,8,9,0,TVariant<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const&___ptr64>(unsigned___int64,UE::Editor::DataStorage::FKeyComparer&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2,3,4,5,6,7,8,9>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const&___ptr64)'
      ::__l2::Invokers[uVar16] ==
      Core::Private::
      VisitApplyEncoded<0,0,UE::Editor::DataStorage::FKeyComparer,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const_&>
     ) {
    if ((9 < local_270.TypeIndex) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0x12f,L""), bVar6)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    cVar7 = *(char *)((longlong)
                      &`public:_static_bool___cdecl_UE::Core::Private::TIsType<FEmptyVariantState,FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>::IsSame(unsigned___int64)'
                       ::__l2::bIsSameType + uVar16);
  }
  else {
    cVar7 = (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<UE::Editor::DataStorage::FKeyComparer,0,1,2,3,4,5,6,7,8,9,0,TVariant<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const&___ptr64>(unsigned___int64,UE::Editor::DataStorage::FKeyComparer&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2,3,4,5,6,7,8,9>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const&___ptr64)'
              ::__l2::Invokers[uVar16])(&local_8a8,&local_270);
  }
  if (cVar7 == '\0') {
    pFVar9 = FAutomationTestFramework::Get();
    pFVar1 = pFVar9->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_7c8,L"Self comparison failed");
    (*pcVar2)(pFVar1,&local_7c8,0);
    if (local_7c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_7c8.Data.AllocatorInstance.Data);
    }
  }
  uVar16 = (ulonglong)local_270.TypeIndex;
  if ((9 < local_270.TypeIndex) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L""), bVar6)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar16] !=
      Core::Private::TDestructorCaller<FEmptyVariantState>::Destruct) {
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar16])(&local_270);
  }
  pFVar9 = FAutomationTestFramework::Get();
  pFVar1 = pFVar9->CurrentTest;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
  ::FString::FString(&local_7b8,L"Construct key (void*)");
  (*pcVar2)(pFVar1,&local_7b8,0,0);
  if (local_7b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_7b8.Data.AllocatorInstance.Data);
  }
  local_2b8._padding_ = 0x1234;
  local_2b8.TypeIndex = 1;
  ::FString::PrintfImpl(&local_840,L"Pointer(0x%p)");
  bVar6 = ::FString::StartsWith(&local_840,L"Pointer(0x",10,IgnoreCase);
  if ((!bVar6) || (bVar6 = ::FString::EndsWith(&local_840,L"1234)",5,IgnoreCase), !bVar6)) {
    pFVar9 = FAutomationTestFramework::Get();
    pFVar1 = pFVar9->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_7a8,L"Expected string wasn\'t returned");
    (*pcVar2)(pFVar1,&local_7a8,0);
    if (local_7a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_7a8.Data.AllocatorInstance.Data);
    }
  }
  local_8a0.Key = &local_2b8;
  if (`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<UE::Editor::DataStorage::FKeyComparer,0,1,2,3,4,5,6,7,8,9,0,TVariant<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const&___ptr64>(unsigned___int64,UE::Editor::DataStorage::FKeyComparer&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2,3,4,5,6,7,8,9>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const&___ptr64)'
      ::__l2::Invokers[local_2b8.TypeIndex] ==
      Core::Private::
      VisitApplyEncoded<1,0,UE::Editor::DataStorage::FKeyComparer,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const_&>
     ) {
    bVar6 = local_2b8.TypeIndex == 1;
  }
  else {
    bVar6 = (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<UE::Editor::DataStorage::FKeyComparer,0,1,2,3,4,5,6,7,8,9,0,TVariant<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const&___ptr64>(unsigned___int64,UE::Editor::DataStorage::FKeyComparer&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2,3,4,5,6,7,8,9>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const&___ptr64)'
              ::__l2::Invokers[local_2b8.TypeIndex])(&local_8a0,&local_2b8);
  }
  if (bVar6 == false) {
    pFVar9 = FAutomationTestFramework::Get();
    pFVar1 = pFVar9->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_798,L"Self comparison failed");
    (*pcVar2)(pFVar1,&local_798,0);
    if (local_798.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_798.Data.AllocatorInstance.Data);
    }
  }
  if (local_840.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_840.Data.AllocatorInstance.Data);
  }
  uVar16 = (ulonglong)local_2b8.TypeIndex;
  if ((9 < local_2b8.TypeIndex) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L""), bVar6)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar16] !=
      Core::Private::TDestructorCaller<void_const_*>::Destruct) {
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar16])(&local_2b8);
  }
  pFVar9 = FAutomationTestFramework::Get();
  pFVar1 = pFVar9->CurrentTest;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
  ::FString::FString(&local_788,L"Construct key (UObject*)");
  (*pcVar2)(pFVar1,&local_788,0,0);
  if (local_788.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_788.Data.AllocatorInstance.Data);
  }
  local_2a0._padding_ = 0x1234;
  local_2a0.TypeIndex = 2;
  ::FString::PrintfImpl(&local_830,L"UObject(0x%p)");
  bVar6 = ::FString::StartsWith(&local_830,L"UObject(0x",10,IgnoreCase);
  if ((!bVar6) || (bVar6 = ::FString::EndsWith(&local_830,L"1234)",5,IgnoreCase), !bVar6)) {
    pFVar9 = FAutomationTestFramework::Get();
    pFVar1 = pFVar9->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_778,L"Expected string wasn\'t returned");
    (*pcVar2)(pFVar1,&local_778,0);
    if (local_778.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_778.Data.AllocatorInstance.Data);
    }
  }
  local_898.Key = &local_2a0;
  if (`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<UE::Editor::DataStorage::FKeyComparer,0,1,2,3,4,5,6,7,8,9,0,TVariant<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const&___ptr64>(unsigned___int64,UE::Editor::DataStorage::FKeyComparer&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2,3,4,5,6,7,8,9>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const&___ptr64)'
      ::__l2::Invokers[local_2a0.TypeIndex] ==
      Core::Private::
      VisitApplyEncoded<2,0,UE::Editor::DataStorage::FKeyComparer,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const_&>
     ) {
    bVar6 = local_2a0.TypeIndex == 2;
  }
  else {
    bVar6 = (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<UE::Editor::DataStorage::FKeyComparer,0,1,2,3,4,5,6,7,8,9,0,TVariant<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const&___ptr64>(unsigned___int64,UE::Editor::DataStorage::FKeyComparer&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2,3,4,5,6,7,8,9>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const&___ptr64)'
              ::__l2::Invokers[local_2a0.TypeIndex])(&local_898,&local_2a0);
  }
  if (bVar6 == false) {
    pFVar9 = FAutomationTestFramework::Get();
    pFVar1 = pFVar9->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_768,L"Self comparison failed");
    (*pcVar2)(pFVar1,&local_768,0);
    if (local_768.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_768.Data.AllocatorInstance.Data);
    }
  }
  if (local_830.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_830.Data.AllocatorInstance.Data);
  }
  uVar16 = (ulonglong)local_2a0.TypeIndex;
  if ((9 < local_2a0.TypeIndex) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L""), bVar6)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar16] !=
      Core::Private::TDestructorCaller<UObject_const_*>::Destruct) {
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar16])(&local_2a0);
  }
  pFVar9 = FAutomationTestFramework::Get();
  pFVar1 = pFVar9->CurrentTest;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
  ::FString::FString(&local_758,L"Construct key (int64)");
  (*pcVar2)(pFVar1,&local_758,0,0);
  if (local_758.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_758.Data.AllocatorInstance.Data);
  }
  local_288._padding_ = 0x2a;
  local_288.TypeIndex = 3;
  ::FString::PrintfImpl(&local_820,L"%lld");
  FVar15.Data = (FScriptContainerElement *)L"";
  if (local_820.Data.ArrayNum != 0) {
    FVar15.Data = local_820.Data.AllocatorInstance.Data;
  }
  iVar8 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar15.Data,L"42");
  if (local_820.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_820.Data.AllocatorInstance.Data);
  }
  if (iVar8 != 0) {
    pFVar9 = FAutomationTestFramework::Get();
    pFVar1 = pFVar9->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_748,L"Expected string wasn\'t returned");
    (*pcVar2)(pFVar1,&local_748,0);
    if (local_748.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_748.Data.AllocatorInstance.Data);
    }
  }
  local_890.Key = &local_288;
  if (`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<UE::Editor::DataStorage::FKeyComparer,0,1,2,3,4,5,6,7,8,9,0,TVariant<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const&___ptr64>(unsigned___int64,UE::Editor::DataStorage::FKeyComparer&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2,3,4,5,6,7,8,9>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const&___ptr64)'
      ::__l2::Invokers[local_288.TypeIndex] ==
      Core::Private::
      VisitApplyEncoded<3,0,UE::Editor::DataStorage::FKeyComparer,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const_&>
     ) {
    bVar6 = local_288.TypeIndex == 3;
  }
  else {
    bVar6 = (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<UE::Editor::DataStorage::FKeyComparer,0,1,2,3,4,5,6,7,8,9,0,TVariant<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const&___ptr64>(unsigned___int64,UE::Editor::DataStorage::FKeyComparer&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2,3,4,5,6,7,8,9>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const&___ptr64)'
              ::__l2::Invokers[local_288.TypeIndex])(&local_890,&local_288);
  }
  if (bVar6 == false) {
    pFVar9 = FAutomationTestFramework::Get();
    pFVar1 = pFVar9->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_738,L"Self comparison failed");
    (*pcVar2)(pFVar1,&local_738,0);
    if (local_738.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_738.Data.AllocatorInstance.Data);
    }
  }
  uVar16 = (ulonglong)local_288.TypeIndex;
  if ((9 < local_288.TypeIndex) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L""), bVar6)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar16] != Core::Private::TDestructorCaller<__int64>::Destruct)
  {
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar16])(&local_288);
  }
  pFVar9 = FAutomationTestFramework::Get();
  pFVar1 = pFVar9->CurrentTest;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
  ::FString::FString(&local_728,L"Construct key (uint64)");
  (*pcVar2)(pFVar1,&local_728,0,0);
  if (local_728.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_728.Data.AllocatorInstance.Data);
  }
  local_258._padding_ = 0x2a;
  local_258.TypeIndex = 4;
  ::FString::PrintfImpl(&local_810,L"%llu");
  FVar15.Data = (FScriptContainerElement *)L"";
  if (local_810.Data.ArrayNum != 0) {
    FVar15.Data = local_810.Data.AllocatorInstance.Data;
  }
  iVar8 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar15.Data,L"42");
  if (local_810.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_810.Data.AllocatorInstance.Data);
  }
  if (iVar8 != 0) {
    pFVar9 = FAutomationTestFramework::Get();
    pFVar1 = pFVar9->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_718,L"Expected string wasn\'t returned");
    (*pcVar2)(pFVar1,&local_718,0);
    if (local_718.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_718.Data.AllocatorInstance.Data);
    }
  }
  local_888.Key = &local_258;
  if (`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<UE::Editor::DataStorage::FKeyComparer,0,1,2,3,4,5,6,7,8,9,0,TVariant<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const&___ptr64>(unsigned___int64,UE::Editor::DataStorage::FKeyComparer&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2,3,4,5,6,7,8,9>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const&___ptr64)'
      ::__l2::Invokers[local_258.TypeIndex] ==
      Core::Private::
      VisitApplyEncoded<4,0,UE::Editor::DataStorage::FKeyComparer,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const_&>
     ) {
    bVar6 = local_258.TypeIndex == 4;
  }
  else {
    bVar6 = (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<UE::Editor::DataStorage::FKeyComparer,0,1,2,3,4,5,6,7,8,9,0,TVariant<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const&___ptr64>(unsigned___int64,UE::Editor::DataStorage::FKeyComparer&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2,3,4,5,6,7,8,9>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const&___ptr64)'
              ::__l2::Invokers[local_258.TypeIndex])(&local_888,&local_258);
  }
  if (bVar6 == false) {
    pFVar9 = FAutomationTestFramework::Get();
    pFVar1 = pFVar9->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_708,L"Self comparison failed");
    (*pcVar2)(pFVar1,&local_708,0);
    if (local_708.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_708.Data.AllocatorInstance.Data);
    }
  }
  TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
  ::
  ~TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
            (&local_258);
  pFVar9 = FAutomationTestFramework::Get();
  pFVar1 = pFVar9->CurrentTest;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
  ::FString::FString(&local_6f8,L"Construct key (float)");
  (*pcVar2)(pFVar1,&local_6f8,0,0);
  if (local_6f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_6f8.Data.AllocatorInstance.Data);
  }
  local_330[0] = 42.0;
  local_320 = 5;
  bVar6 = TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
          ::IsType<FEmptyVariantState>
                    ((TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
                      *)local_330);
  if (bVar6) {
    pFVar9 = FAutomationTestFramework::Get();
    pFVar1 = pFVar9->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_6e8,L"Key was not set.");
    (*pcVar2)(pFVar1,&local_6e8,0);
    if (local_6e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_6e8.Data.AllocatorInstance.Data);
    }
  }
  if (`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<UE::Editor::DataStorage::FHasher,0,1,2,3,4,5,6,7,8,9,0,TVariant<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const&___ptr64>(unsigned___int64,UE::Editor::DataStorage::FHasher&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2,3,4,5,6,7,8,9>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const&___ptr64)'
      ::__l2::Invokers[local_320] ==
      Core::Private::
      VisitApplyEncoded<5,0,UE::Editor::DataStorage::FHasher,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const_&>
     ) {
    lVar14 = 0;
    fVar17 = local_330[0];
    if ((__real_5f000000 <= local_330[0]) &&
       (fVar17 = local_330[0] - __real_5f000000, fVar17 < __real_5f000000)) {
      lVar14 = -0x8000000000000000;
    }
    uVar10 = (longlong)fVar17 + lVar14;
  }
  else {
    uVar10 = (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<UE::Editor::DataStorage::FHasher,0,1,2,3,4,5,6,7,8,9,0,TVariant<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const&___ptr64>(unsigned___int64,UE::Editor::DataStorage::FHasher&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2,3,4,5,6,7,8,9>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const&___ptr64)'
               ::__l2::Invokers[local_320])
                       (&local_928,
                        (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
                         *)local_330);
  }
  if (uVar10 == 0) {
    pFVar9 = FAutomationTestFramework::Get();
    pFVar1 = pFVar9->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_6d8,L"Hash is was zero");
    (*pcVar2)(pFVar1,&local_6d8,0);
    if (local_6d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_6d8.Data.AllocatorInstance.Data);
    }
  }
  if (`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<UE::Editor::DataStorage::FToString,0,1,2,3,4,5,6,7,8,9,0,TVariant<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const&___ptr64>(unsigned___int64,UE::Editor::DataStorage::FToString&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2,3,4,5,6,7,8,9>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const&___ptr64)'
      ::__l2::Invokers[local_320] ==
      Core::Private::
      VisitApplyEncoded<5,0,UE::Editor::DataStorage::FToString,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const_&>
     ) {
    ::FString::SanitizeFloat(&local_8e8,(double)local_330[0],1);
  }
  else {
    (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<UE::Editor::DataStorage::FToString,0,1,2,3,4,5,6,7,8,9,0,TVariant<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const&___ptr64>(unsigned___int64,UE::Editor::DataStorage::FToString&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2,3,4,5,6,7,8,9>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const&___ptr64)'
      ::__l2::Invokers[local_320])
              (&local_8e8,&local_927,
               (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
                *)local_330);
  }
  FVar15.Data = (FScriptContainerElement *)L"";
  if (local_8e8.Data.ArrayNum != 0) {
    FVar15.Data = local_8e8.Data.AllocatorInstance.Data;
  }
  iVar8 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar15.Data,L"42.0");
  if (local_8e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_8e8.Data.AllocatorInstance.Data);
  }
  if (iVar8 != 0) {
    pFVar9 = FAutomationTestFramework::Get();
    pFVar1 = pFVar9->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_6c8,L"Expected string wasn\'t returned");
    (*pcVar2)(pFVar1,&local_6c8,0);
    if (local_6c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_6c8.Data.AllocatorInstance.Data);
    }
  }
  local_880.Key =
       (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
        *)local_330;
  if (`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<UE::Editor::DataStorage::FKeyComparer,0,1,2,3,4,5,6,7,8,9,0,TVariant<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const&___ptr64>(unsigned___int64,UE::Editor::DataStorage::FKeyComparer&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2,3,4,5,6,7,8,9>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const&___ptr64)'
      ::__l2::Invokers[local_320] ==
      Core::Private::
      VisitApplyEncoded<5,0,UE::Editor::DataStorage::FKeyComparer,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const_&>
     ) {
    bVar6 = local_320 == 5;
  }
  else {
    bVar6 = (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<UE::Editor::DataStorage::FKeyComparer,0,1,2,3,4,5,6,7,8,9,0,TVariant<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const&___ptr64>(unsigned___int64,UE::Editor::DataStorage::FKeyComparer&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2,3,4,5,6,7,8,9>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const&___ptr64)'
              ::__l2::Invokers[local_320])
                      (&local_880,
                       (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
                        *)local_330);
  }
  if (bVar6 == false) {
    pFVar9 = FAutomationTestFramework::Get();
    pFVar1 = pFVar9->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_6b8,L"Self comparison failed");
    (*pcVar2)(pFVar1,&local_6b8,0);
    if (local_6b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_6b8.Data.AllocatorInstance.Data);
    }
  }
  TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
  ::
  ~TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
            ((TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
              *)local_330);
  pFVar9 = FAutomationTestFramework::Get();
  pFVar1 = pFVar9->CurrentTest;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
  ::FString::FString(&local_6a8,L"Construct key (double)");
  (*pcVar2)(pFVar1,&local_6a8,0,0);
  if (local_6a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_6a8.Data.AllocatorInstance.Data);
  }
  dVar5 = __real_4045000000000000;
  local_318._padding_ = (longlong)__real_4045000000000000;
  local_318.TypeIndex = 6;
  bVar6 = TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
          ::IsType<FEmptyVariantState>(&local_318);
  if (bVar6) {
    pFVar9 = FAutomationTestFramework::Get();
    pFVar1 = pFVar9->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_698,L"Key was not set.");
    (*pcVar2)(pFVar1,&local_698,0);
    if (local_698.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_698.Data.AllocatorInstance.Data);
    }
  }
  if (`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<UE::Editor::DataStorage::FHasher,0,1,2,3,4,5,6,7,8,9,0,TVariant<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const&___ptr64>(unsigned___int64,UE::Editor::DataStorage::FHasher&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2,3,4,5,6,7,8,9>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const&___ptr64)'
      ::__l2::Invokers[local_318.TypeIndex] ==
      Core::Private::
      VisitApplyEncoded<6,0,UE::Editor::DataStorage::FHasher,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const_&>
     ) {
    lVar14 = 0;
    dVar4 = (double)local_318._padding_;
    if ((__real_43e0000000000000 <= (double)local_318._padding_) &&
       (dVar4 = (double)local_318._padding_ - __real_43e0000000000000,
       dVar4 < __real_43e0000000000000)) {
      lVar14 = -0x8000000000000000;
    }
    uVar10 = (longlong)dVar4 + lVar14;
  }
  else {
    uVar10 = (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<UE::Editor::DataStorage::FHasher,0,1,2,3,4,5,6,7,8,9,0,TVariant<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const&___ptr64>(unsigned___int64,UE::Editor::DataStorage::FHasher&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2,3,4,5,6,7,8,9>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const&___ptr64)'
               ::__l2::Invokers[local_318.TypeIndex])(&local_926,&local_318);
  }
  if (uVar10 == 0) {
    pFVar9 = FAutomationTestFramework::Get();
    pFVar1 = pFVar9->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_688,L"Hash is was zero");
    (*pcVar2)(pFVar1,&local_688,0);
    if (local_688.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_688.Data.AllocatorInstance.Data);
    }
  }
  if (`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<UE::Editor::DataStorage::FToString,0,1,2,3,4,5,6,7,8,9,0,TVariant<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const&___ptr64>(unsigned___int64,UE::Editor::DataStorage::FToString&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2,3,4,5,6,7,8,9>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const&___ptr64)'
      ::__l2::Invokers[local_318.TypeIndex] ==
      Core::Private::
      VisitApplyEncoded<6,0,UE::Editor::DataStorage::FToString,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const_&>
     ) {
    ::FString::SanitizeFloat(&local_8d8,(double)local_318._padding_,1);
  }
  else {
    (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<UE::Editor::DataStorage::FToString,0,1,2,3,4,5,6,7,8,9,0,TVariant<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const&___ptr64>(unsigned___int64,UE::Editor::DataStorage::FToString&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2,3,4,5,6,7,8,9>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const&___ptr64)'
      ::__l2::Invokers[local_318.TypeIndex])(&local_8d8,&local_925,&local_318);
  }
  FVar15.Data = (FScriptContainerElement *)L"";
  if (local_8d8.Data.ArrayNum != 0) {
    FVar15.Data = local_8d8.Data.AllocatorInstance.Data;
  }
  iVar8 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar15.Data,L"42.0");
  if (local_8d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_8d8.Data.AllocatorInstance.Data);
  }
  if (iVar8 != 0) {
    pFVar9 = FAutomationTestFramework::Get();
    pFVar1 = pFVar9->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_678,L"Expected string wasn\'t returned");
    (*pcVar2)(pFVar1,&local_678,0);
    if (local_678.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_678.Data.AllocatorInstance.Data);
    }
  }
  local_858.Key = &local_318;
  if (`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<UE::Editor::DataStorage::FKeyComparer,0,1,2,3,4,5,6,7,8,9,0,TVariant<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const&___ptr64>(unsigned___int64,UE::Editor::DataStorage::FKeyComparer&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2,3,4,5,6,7,8,9>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const&___ptr64)'
      ::__l2::Invokers[local_318.TypeIndex] ==
      Core::Private::
      VisitApplyEncoded<6,0,UE::Editor::DataStorage::FKeyComparer,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const_&>
     ) {
    bVar6 = local_318.TypeIndex == 6;
  }
  else {
    bVar6 = (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<UE::Editor::DataStorage::FKeyComparer,0,1,2,3,4,5,6,7,8,9,0,TVariant<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const&___ptr64>(unsigned___int64,UE::Editor::DataStorage::FKeyComparer&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2,3,4,5,6,7,8,9>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const&___ptr64)'
              ::__l2::Invokers[local_318.TypeIndex])(&local_858,&local_318);
  }
  if (bVar6 == false) {
    pFVar9 = FAutomationTestFramework::Get();
    pFVar1 = pFVar9->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_668,L"Self comparison failed");
    (*pcVar2)(pFVar1,&local_668,0);
    if (local_668.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_668.Data.AllocatorInstance.Data);
    }
  }
  TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
  ::
  ~TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
            (&local_318);
  pFVar9 = FAutomationTestFramework::Get();
  pFVar1 = pFVar9->CurrentTest;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
  ::FString::FString(&local_658,L"Construct key (FString)");
  (*pcVar2)(pFVar1,&local_658,0,0);
  if (local_658.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_658.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_608,L"TestString");
  pFVar11 = ::FString::FString(&local_3a8,&local_608);
  local_348._padding_ = (longlong)(pFVar11->Data).AllocatorInstance.Data;
  (pFVar11->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_348._padding_._0_4_ = (pFVar11->Data).ArrayNum;
  local_348._padding_._4_4_ = (pFVar11->Data).ArrayMax;
  (pFVar11->Data).ArrayNum = 0;
  (pFVar11->Data).ArrayMax = 0;
  local_348.TypeIndex = 7;
  pFVar3 = (pFVar11->Data).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  bVar6 = TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
          ::IsType<FEmptyVariantState>(&local_348);
  if (bVar6) {
    pFVar9 = FAutomationTestFramework::Get();
    pFVar1 = pFVar9->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_648,L"Key was not set.");
    (*pcVar2)(pFVar1,&local_648,0);
    if (local_648.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_648.Data.AllocatorInstance.Data);
    }
  }
  if (`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<UE::Editor::DataStorage::FHasher,0,1,2,3,4,5,6,7,8,9,0,TVariant<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const&___ptr64>(unsigned___int64,UE::Editor::DataStorage::FHasher&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2,3,4,5,6,7,8,9>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const&___ptr64)'
      ::__l2::Invokers[local_348.TypeIndex] ==
      Core::Private::
      VisitApplyEncoded<7,0,UE::Editor::DataStorage::FHasher,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const_&>
     ) {
    iVar8 = (int)local_348._padding_ + -1;
    pFVar3 = (FScriptContainerElement *)local_348._padding_;
    if ((int)local_348._padding_ == 0) {
      iVar8 = 0;
      pFVar3 = (FScriptContainerElement *)L"";
    }
    uVar10 = CityHash64((char *)pFVar3,iVar8 * 2);
  }
  else {
    uVar10 = (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<UE::Editor::DataStorage::FHasher,0,1,2,3,4,5,6,7,8,9,0,TVariant<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const&___ptr64>(unsigned___int64,UE::Editor::DataStorage::FHasher&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2,3,4,5,6,7,8,9>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const&___ptr64)'
               ::__l2::Invokers[local_348.TypeIndex])(&local_924,&local_348);
  }
  if (uVar10 == 0) {
    pFVar9 = FAutomationTestFramework::Get();
    pFVar1 = pFVar9->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_638,L"Hash is was zero");
    (*pcVar2)(pFVar1,&local_638,0);
    if (local_638.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_638.Data.AllocatorInstance.Data);
    }
  }
  if (`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<UE::Editor::DataStorage::FToString,0,1,2,3,4,5,6,7,8,9,0,TVariant<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const&___ptr64>(unsigned___int64,UE::Editor::DataStorage::FToString&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2,3,4,5,6,7,8,9>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const&___ptr64)'
      ::__l2::Invokers[local_348.TypeIndex] ==
      Core::Private::
      VisitApplyEncoded<7,0,UE::Editor::DataStorage::FToString,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const_&>
     ) {
    ::FString::FString(&local_8c8,(FString *)&local_348);
  }
  else {
    (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<UE::Editor::DataStorage::FToString,0,1,2,3,4,5,6,7,8,9,0,TVariant<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const&___ptr64>(unsigned___int64,UE::Editor::DataStorage::FToString&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2,3,4,5,6,7,8,9>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const&___ptr64)'
      ::__l2::Invokers[local_348.TypeIndex])(&local_8c8,&local_923,&local_348);
  }
  FVar15.Data = (FScriptContainerElement *)L"";
  if (local_8c8.Data.ArrayNum != 0) {
    FVar15.Data = local_8c8.Data.AllocatorInstance.Data;
  }
  iVar8 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar15.Data,L"TestString");
  if (local_8c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_8c8.Data.AllocatorInstance.Data);
  }
  if (iVar8 != 0) {
    pFVar9 = FAutomationTestFramework::Get();
    pFVar1 = pFVar9->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_628,L"Expected string wasn\'t returned");
    (*pcVar2)(pFVar1,&local_628,0);
    if (local_628.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_628.Data.AllocatorInstance.Data);
    }
  }
  local_7e0.Key = &local_348;
  if (`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<UE::Editor::DataStorage::FKeyComparer,0,1,2,3,4,5,6,7,8,9,0,TVariant<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const&___ptr64>(unsigned___int64,UE::Editor::DataStorage::FKeyComparer&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2,3,4,5,6,7,8,9>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const&___ptr64)'
      ::__l2::Invokers[local_348.TypeIndex] ==
      Core::Private::
      VisitApplyEncoded<7,0,UE::Editor::DataStorage::FKeyComparer,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const_&>
     ) {
    if (local_348.TypeIndex == 7) {
      if ((int)local_348._padding_ < 2) {
        bVar6 = true;
      }
      else {
        iVar8 = FGenericPlatformStricmp::Stricmp
                          ((wchar_t *)local_348._padding_,(wchar_t *)local_348._padding_);
        bVar6 = iVar8 == 0;
      }
    }
    else {
      bVar6 = false;
    }
  }
  else {
    bVar6 = (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<UE::Editor::DataStorage::FKeyComparer,0,1,2,3,4,5,6,7,8,9,0,TVariant<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const&___ptr64>(unsigned___int64,UE::Editor::DataStorage::FKeyComparer&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2,3,4,5,6,7,8,9>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const&___ptr64)'
              ::__l2::Invokers[local_348.TypeIndex])(&local_7e0,&local_348);
  }
  if (bVar6 == false) {
    pFVar9 = FAutomationTestFramework::Get();
    pFVar1 = pFVar9->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_618,L"Self comparison failed");
    (*pcVar2)(pFVar1,&local_618,0);
    if (local_618.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_618.Data.AllocatorInstance.Data);
    }
  }
  TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
  ::
  ~TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
            (&local_348);
  if (local_608.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_608.Data.AllocatorInstance.Data);
  }
  pFVar9 = FAutomationTestFramework::Get();
  pFVar1 = pFVar9->CurrentTest;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
  ::FString::FString(&local_5f8,L"Construct key (FName)");
  (*pcVar2)(pFVar1,&local_5f8,0,0);
  if (local_5f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_5f8.Data.AllocatorInstance.Data);
  }
  local_300._padding_._0_4_ = TestFName.ComparisonIndex.Value;
  local_300._padding_._4_4_ = TestFName.Number;
  local_300.TypeIndex = 8;
  bVar6 = TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
          ::IsType<FEmptyVariantState>(&local_300);
  if (bVar6) {
    pFVar9 = FAutomationTestFramework::Get();
    pFVar1 = pFVar9->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_5e8,L"Key was not set.");
    (*pcVar2)(pFVar1,&local_5e8,0);
    if (local_5e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_5e8.Data.AllocatorInstance.Data);
    }
  }
  FVar12 = (FName)local_300._padding_;
  if (`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<UE::Editor::DataStorage::FHasher,0,1,2,3,4,5,6,7,8,9,0,TVariant<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const&___ptr64>(unsigned___int64,UE::Editor::DataStorage::FHasher&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2,3,4,5,6,7,8,9>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const&___ptr64)'
      ::__l2::Invokers[local_300.TypeIndex] !=
      Core::Private::
      VisitApplyEncoded<8,0,UE::Editor::DataStorage::FHasher,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const_&>
     ) {
    FVar12 = (FName)(*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<UE::Editor::DataStorage::FHasher,0,1,2,3,4,5,6,7,8,9,0,TVariant<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const&___ptr64>(unsigned___int64,UE::Editor::DataStorage::FHasher&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2,3,4,5,6,7,8,9>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const&___ptr64)'
                      ::__l2::Invokers[local_300.TypeIndex])(&local_922,&local_300);
  }
  if (FVar12 == (FName)0x0) {
    pFVar9 = FAutomationTestFramework::Get();
    pFVar1 = pFVar9->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_5d8,L"Hash is was zero");
    (*pcVar2)(pFVar1,&local_5d8,0);
    if (local_5d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_5d8.Data.AllocatorInstance.Data);
    }
  }
  if (`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<UE::Editor::DataStorage::FToString,0,1,2,3,4,5,6,7,8,9,0,TVariant<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const&___ptr64>(unsigned___int64,UE::Editor::DataStorage::FToString&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2,3,4,5,6,7,8,9>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const&___ptr64)'
      ::__l2::Invokers[local_300.TypeIndex] ==
      Core::Private::
      VisitApplyEncoded<8,0,UE::Editor::DataStorage::FToString,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const_&>
     ) {
    ::FName::ToString((FName *)&local_300,&local_8b8);
  }
  else {
    (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<UE::Editor::DataStorage::FToString,0,1,2,3,4,5,6,7,8,9,0,TVariant<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const&___ptr64>(unsigned___int64,UE::Editor::DataStorage::FToString&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2,3,4,5,6,7,8,9>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const&___ptr64)'
      ::__l2::Invokers[local_300.TypeIndex])(&local_8b8,&local_921,&local_300);
  }
  FVar15.Data = (FScriptContainerElement *)L"";
  if (local_8b8.Data.ArrayNum != 0) {
    FVar15.Data = local_8b8.Data.AllocatorInstance.Data;
  }
  iVar8 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar15.Data,L"FMapKey_TestName");
  if (local_8b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_8b8.Data.AllocatorInstance.Data);
  }
  if (iVar8 != 0) {
    pFVar9 = FAutomationTestFramework::Get();
    pFVar1 = pFVar9->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_5c8,L"Expected string wasn\'t returned");
    (*pcVar2)(pFVar1,&local_5c8,0);
    if (local_5c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_5c8.Data.AllocatorInstance.Data);
    }
  }
  local_878.Key = &local_300;
  if (`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<UE::Editor::DataStorage::FKeyComparer,0,1,2,3,4,5,6,7,8,9,0,TVariant<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const&___ptr64>(unsigned___int64,UE::Editor::DataStorage::FKeyComparer&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2,3,4,5,6,7,8,9>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const&___ptr64)'
      ::__l2::Invokers[local_300.TypeIndex] ==
      Core::Private::
      VisitApplyEncoded<8,0,UE::Editor::DataStorage::FKeyComparer,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const_&>
     ) {
    bVar6 = local_300.TypeIndex == 8;
  }
  else {
    bVar6 = (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<UE::Editor::DataStorage::FKeyComparer,0,1,2,3,4,5,6,7,8,9,0,TVariant<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const&___ptr64>(unsigned___int64,UE::Editor::DataStorage::FKeyComparer&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2,3,4,5,6,7,8,9>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const&___ptr64)'
              ::__l2::Invokers[local_300.TypeIndex])(&local_878,&local_300);
  }
  if (bVar6 == false) {
    pFVar9 = FAutomationTestFramework::Get();
    pFVar1 = pFVar9->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_5b8,L"Self comparison failed");
    (*pcVar2)(pFVar1,&local_5b8,0);
    if (local_5b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_5b8.Data.AllocatorInstance.Data);
    }
  }
  TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
  ::
  ~TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
            (&local_300);
  pFVar9 = FAutomationTestFramework::Get();
  pFVar1 = pFVar9->CurrentTest;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
  ::FString::FString(&local_5a8,L"Construct key (FSoftObjectPath)");
  (*pcVar2)(pFVar1,&local_5a8,0,0);
  if (local_5a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_5a8.Data.AllocatorInstance.Data);
  }
  pFVar13 = FSoftObjectPath::FSoftObjectPath(&local_368,&TestPath);
  FMapKey::FMapKey((FMapKey *)&local_2e8,pFVar13);
  bVar6 = TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
          ::IsType<FEmptyVariantState>(&local_2e8);
  if (bVar6) {
    pFVar9 = FAutomationTestFramework::Get();
    pFVar1 = pFVar9->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_598,L"Key was not set.");
    (*pcVar2)(pFVar1,&local_598,0);
    if (local_598.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_598.Data.AllocatorInstance.Data);
    }
  }
  uVar10 = (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<UE::Editor::DataStorage::FHasher,0,1,2,3,4,5,6,7,8,9,0,TVariant<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const&___ptr64>(unsigned___int64,UE::Editor::DataStorage::FHasher&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2,3,4,5,6,7,8,9>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const&___ptr64)'
             ::__l2::Invokers[local_2e8.TypeIndex])(&local_920,&local_2e8);
  if (uVar10 == 0) {
    pFVar9 = FAutomationTestFramework::Get();
    pFVar1 = pFVar9->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_588,L"Hash is was zero");
    (*pcVar2)(pFVar1,&local_588,0);
    if (local_588.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_588.Data.AllocatorInstance.Data);
    }
  }
  pFVar11 = FSoftObjectPath::ToString(&TestPath,&local_3b8);
  (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<UE::Editor::DataStorage::FToString,0,1,2,3,4,5,6,7,8,9,0,TVariant<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const&___ptr64>(unsigned___int64,UE::Editor::DataStorage::FToString&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2,3,4,5,6,7,8,9>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const&___ptr64)'
    ::__l2::Invokers[local_2e8.TypeIndex])(&local_800,local_91f,&local_2e8);
  iVar8 = (pFVar11->Data).ArrayNum;
  if (local_800.Data.ArrayNum == iVar8) {
    if (local_800.Data.ArrayNum < 2) {
      bVar6 = false;
    }
    else {
      iVar8 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)local_800.Data.AllocatorInstance.Data,
                         (wchar_t *)(pFVar11->Data).AllocatorInstance.Data);
      bVar6 = iVar8 != 0;
    }
  }
  else {
    bVar6 = iVar8 + local_800.Data.ArrayNum != 1;
  }
  if (local_800.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_800.Data.AllocatorInstance.Data);
  }
  if (local_3b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3b8.Data.AllocatorInstance.Data);
  }
  if (bVar6) {
    pFVar9 = FAutomationTestFramework::Get();
    pFVar1 = pFVar9->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_578,L"Expected string wasn\'t returned");
    (*pcVar2)(pFVar1,&local_578,0);
    if (local_578.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_578.Data.AllocatorInstance.Data);
    }
  }
  local_870.Key = &local_2e8;
  bVar6 = (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<UE::Editor::DataStorage::FKeyComparer,0,1,2,3,4,5,6,7,8,9,0,TVariant<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const&___ptr64>(unsigned___int64,UE::Editor::DataStorage::FKeyComparer&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2,3,4,5,6,7,8,9>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const&___ptr64)'
            ::__l2::Invokers[local_2e8.TypeIndex])(&local_870,&local_2e8);
  if (!bVar6) {
    pFVar9 = FAutomationTestFramework::Get();
    pFVar1 = pFVar9->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_568,L"Self comparison failed");
    (*pcVar2)(pFVar1,&local_568,0);
    if (local_568.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_568.Data.AllocatorInstance.Data);
    }
  }
  TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
  ::
  ~TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
            (&local_2e8);
  pFVar9 = FAutomationTestFramework::Get();
  pFVar1 = pFVar9->CurrentTest;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
  ::FString::FString(&local_558,L"Copy empty key");
  (*pcVar2)(pFVar1,&local_558,0);
  if (local_558.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_558.Data.AllocatorInstance.Data);
  }
  local_78.TypeIndex = '\0';
  local_240.TypeIndex = 0;
  bVar6 = TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
          ::IsType<FEmptyVariantState>(&local_240);
  if (!bVar6) {
    pFVar9 = FAutomationTestFramework::Get();
    pFVar1 = pFVar9->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_548,L"Original key was not empty as expected.");
    (*pcVar2)(pFVar1,&local_548,0);
    if (local_548.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_548.Data.AllocatorInstance.Data);
    }
  }
  bVar6 = TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
          ::IsType<FEmptyVariantState>(&local_240);
  if (!bVar6) {
    pFVar9 = FAutomationTestFramework::Get();
    pFVar1 = pFVar9->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_538,L"Copied key was not empty as expected.");
    (*pcVar2)(pFVar1,&local_538,0);
    if (local_538.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_538.Data.AllocatorInstance.Data);
    }
  }
  local_868.Key = &local_78;
  bVar6 = (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<UE::Editor::DataStorage::FKeyComparer,0,1,2,3,4,5,6,7,8,9,0,TVariant<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const&___ptr64>(unsigned___int64,UE::Editor::DataStorage::FKeyComparer&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2,3,4,5,6,7,8,9>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const&___ptr64)'
            ::__l2::Invokers[local_240.TypeIndex])(&local_868,&local_240);
  if (!bVar6) {
    pFVar9 = FAutomationTestFramework::Get();
    pFVar1 = pFVar9->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_528,L"Original and copied key don\'t have the same value.");
    (*pcVar2)(pFVar1,&local_528,0);
    if (local_528.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_528.Data.AllocatorInstance.Data);
    }
  }
  TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
  ::
  ~TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
            (&local_240);
  TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
  ::
  ~TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
            (&local_78);
  pFVar9 = FAutomationTestFramework::Get();
  pFVar1 = pFVar9->CurrentTest;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
  ::FString::FString(&local_518,L"Copy key (void*)");
  (*pcVar2)(pFVar1,&local_518,0);
  if (local_518.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_518.Data.AllocatorInstance.Data);
  }
  local_c0._padding_ = 0;
  local_c0.TypeIndex = '\x01';
  CopyKeyTest((FMapKey *)&local_c0);
  TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
  ::
  ~TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
            (&local_c0);
  pFVar9 = FAutomationTestFramework::Get();
  pFVar1 = pFVar9->CurrentTest;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
  ::FString::FString(&local_508,L"Copy key (UObject*)");
  (*pcVar2)(pFVar1,&local_508,0);
  if (local_508.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_508.Data.AllocatorInstance.Data);
  }
  local_a8._padding_ = 0;
  local_a8.TypeIndex = '\x02';
  CopyKeyTest((FMapKey *)&local_a8);
  TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
  ::
  ~TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
            (&local_a8);
  pFVar9 = FAutomationTestFramework::Get();
  pFVar1 = pFVar9->CurrentTest;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
  ::FString::FString(&local_4f8,L"Copy key (int64)");
  (*pcVar2)(pFVar1,&local_4f8,0);
  if (local_4f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4f8.Data.AllocatorInstance.Data);
  }
  local_90._padding_ = 0x2a;
  local_90.TypeIndex = '\x03';
  CopyKeyTest((FMapKey *)&local_90);
  TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
  ::
  ~TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
            (&local_90);
  pFVar9 = FAutomationTestFramework::Get();
  pFVar1 = pFVar9->CurrentTest;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
  ::FString::FString(&local_4e8,L"Copy key (uint64)");
  (*pcVar2)(pFVar1,&local_4e8,0);
  if (local_4e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4e8.Data.AllocatorInstance.Data);
  }
  local_180._padding_ = 0x2a;
  local_180.TypeIndex = '\x04';
  CopyKeyTest((FMapKey *)&local_180);
  TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
  ::
  ~TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
            (&local_180);
  pFVar9 = FAutomationTestFramework::Get();
  pFVar1 = pFVar9->CurrentTest;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
  ::FString::FString(&local_4d8,L"Copy key (float)");
  (*pcVar2)(pFVar1,&local_4d8,0);
  if (local_4d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4d8.Data.AllocatorInstance.Data);
  }
  local_1f8.Key._padding_._0_4_ = 0x42280000;
  local_1f8.Key.TypeIndex = 5;
  CopyKeyTest(&local_1f8);
  uVar16 = (ulonglong)local_1f8.Key.TypeIndex;
  if ((9 < local_1f8.Key.TypeIndex) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L""), bVar6)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar16] != Core::Private::TDestructorCaller<float>::Destruct) {
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar16])(&local_1f8);
  }
  pFVar9 = FAutomationTestFramework::Get();
  pFVar1 = pFVar9->CurrentTest;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
  ::FString::FString(&local_4c8,L"Copy key (double)");
  (*pcVar2)(pFVar1,&local_4c8,0);
  if (local_4c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4c8.Data.AllocatorInstance.Data);
  }
  local_1c8.Key._padding_ = (longlong)dVar5;
  local_1c8.Key.TypeIndex = 6;
  CopyKeyTest(&local_1c8);
  uVar16 = (ulonglong)local_1c8.Key.TypeIndex;
  if ((9 < local_1c8.Key.TypeIndex) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L""), bVar6)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar16] != Core::Private::TDestructorCaller<double>::Destruct)
  {
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar16])(&local_1c8);
  }
  pFVar9 = FAutomationTestFramework::Get();
  pFVar1 = pFVar9->CurrentTest;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
  ::FString::FString(&local_4b8,L"Copy key (FString)");
  (*pcVar2)(pFVar1,&local_4b8,0);
  if (local_4b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4b8.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_7f0,L"TestString");
  FVar15.Data = local_7f0.Data.AllocatorInstance.Data;
  local_918.Data = (FScriptContainerElement *)0x0;
  if (local_7f0.Data.ArrayNum == 0) {
    local_2d0.Key._padding_ = (longlong)(FScriptContainerElement *)0x0;
    local_2d0.Key._padding_._4_4_ = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_7f0.Data.ArrayNum,0,&local_918,local_7f0.Data.ArrayNum,
               (int *)((longlong)&local_910 + 4));
    memcpy(local_918.Data,FVar15.Data,(longlong)local_7f0.Data.ArrayNum * 2);
    local_2d0.Key._padding_ = (longlong)local_918.Data;
    local_2d0.Key._padding_._4_4_ = local_910._4_4_;
  }
  local_918.Data = (FScriptContainerElement *)0x0;
  local_910 = 0;
  local_2d0.Key.TypeIndex = 7;
  CopyKeyTest(&local_2d0);
  uVar16 = (ulonglong)local_2d0.Key.TypeIndex;
  if ((9 < local_2d0.Key.TypeIndex) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L""), bVar6)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar16] == Core::Private::TDestructorCaller<FString>::Destruct)
  {
    if ((FScriptContainerElement *)local_2d0.Key._padding_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_2d0.Key._padding_);
    }
  }
  else {
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar16])(&local_2d0);
  }
  if (local_7f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_7f0.Data.AllocatorInstance.Data);
  }
  pFVar9 = FAutomationTestFramework::Get();
  pFVar1 = pFVar9->CurrentTest;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
  ::FString::FString(&local_4a8,L"Copy key (FName)");
  (*pcVar2)(pFVar1,&local_4a8,0);
  if (local_4a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4a8.Data.AllocatorInstance.Data);
  }
  local_1b0.Key._padding_._0_4_ = TestFName.ComparisonIndex.Value;
  local_1b0.Key._padding_._4_4_ = TestFName.Number;
  local_1b0.Key.TypeIndex = 8;
  CopyKeyTest(&local_1b0);
  uVar16 = (ulonglong)local_1b0.Key.TypeIndex;
  if ((9 < local_1b0.Key.TypeIndex) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L""), bVar6)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar16] != Core::Private::TDestructorCaller<FName>::Destruct) {
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar16])(&local_1b0);
  }
  pFVar9 = FAutomationTestFramework::Get();
  pFVar1 = pFVar9->CurrentTest;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
  ::FString::FString(&local_498,L"Copy key (FSoftObjectPath)");
  (*pcVar2)(pFVar1,&local_498,0);
  if (local_498.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_498.Data.AllocatorInstance.Data);
  }
  FVar15.Data = TestPath.SubPathString.Data.AllocatorInstance.Data;
  _Size = (size_t)TestPath.SubPathString.Data.ArrayNum;
  local_8f8.ComparisonIndex.Value = 0;
  local_8f8.Number = 0;
  local_8f0 = CONCAT44(local_8f0._4_4_,TestPath.SubPathString.Data.ArrayNum);
  local_908 = TestPath.AssetPath;
  if (TestPath.SubPathString.Data.ArrayNum == 0) {
    local_8f0 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,TestPath.SubPathString.Data.ArrayNum,0,(ForAnyElementType *)&local_8f8,
               TestPath.SubPathString.Data.ArrayNum,(int *)((longlong)&local_8f0 + 4));
    memcpy((void *)local_8f8,FVar15.Data,_Size);
  }
  local_228.Key._padding_ = (longlong)::operator_new(0x20);
  if ((FName *)local_228.Key._padding_ == (FName *)0x0) {
    local_228.Key._padding_ = 0;
  }
  else {
    *(FName *)local_228.Key._padding_ = local_908.PackageName;
    *(FName *)(local_228.Key._padding_ + 8) = local_908.AssetName;
    *(FName *)(local_228.Key._padding_ + 0x10) = local_8f8;
    local_8f8.ComparisonIndex.Value = 0;
    local_8f8.Number = 0;
    (((FName *)(local_228.Key._padding_ + 0x18))->ComparisonIndex).Value = (uint)local_8f0;
    ((FName *)(local_228.Key._padding_ + 0x18))->Number = local_8f0._4_4_;
    local_8f0 = 0;
  }
  local_228.Key.TypeIndex = 9;
  if (local_8f8 != (FName)0x0) {
    FMemory::Free((void *)local_8f8);
  }
  CopyKeyTest(&local_228);
  uVar16 = (ulonglong)local_228.Key.TypeIndex;
  if ((9 < local_228.Key.TypeIndex) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L""), bVar6)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  lVar14 = local_228.Key._padding_;
  if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar16] ==
      Core::Private::
      TDestructorCaller<TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>::Destruct) {
    if ((FName *)local_228.Key._padding_ != (FName *)0x0) {
      if (*(FName *)(local_228.Key._padding_ + 0x10) != (FName)0x0) {
        FMemory::Free((void *)*(FName *)(local_228.Key._padding_ + 0x10));
      }
      ::operator_delete((void *)lVar14,0x20);
    }
  }
  else {
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar16])(&local_228);
  }
  pFVar9 = FAutomationTestFramework::Get();
  pFVar1 = pFVar9->CurrentTest;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
  ::FString::FString(&local_488,L"Move empty key");
  (*pcVar2)(pFVar1,&local_488,0,0);
  if (local_488.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_488.Data.AllocatorInstance.Data);
  }
  local_860.Key = &local_150;
  local_168.TypeIndex = 0;
  local_150.TypeIndex = 0;
  bVar6 = Core::Private::
          VisitApplyEncoded<0,0,UE::Editor::DataStorage::FKeyComparer,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const_&>
                    (&local_860,&local_168);
  if (!bVar6) {
    pFVar9 = FAutomationTestFramework::Get();
    pFVar1 = pFVar9->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_478,L"Original and copied key don\'t have the same value.");
    (*pcVar2)(pFVar1,&local_478,0);
    if (local_478.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_478.Data.AllocatorInstance.Data);
    }
  }
  uVar16 = (ulonglong)local_168.TypeIndex;
  if ((9 < local_168.TypeIndex) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L""), bVar6)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[uVar16])(&local_168);
  uVar16 = (ulonglong)local_150.TypeIndex;
  if ((9 < local_150.TypeIndex) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L""), bVar6)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar16] !=
      Core::Private::TDestructorCaller<FEmptyVariantState>::Destruct) {
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar16])(&local_150);
  }
  pFVar9 = FAutomationTestFramework::Get();
  pFVar1 = pFVar9->CurrentTest;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
  ::FString::FString(&local_468,L"Move key (void*)");
  (*pcVar2)(pFVar1,&local_468,0,0);
  if (local_468.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_468.Data.AllocatorInstance.Data);
  }
  local_198.Key._padding_ = 0;
  local_198.Key.TypeIndex = 1;
  MoveKeyTest(&local_198);
  uVar16 = (ulonglong)local_198.Key.TypeIndex;
  if ((9 < local_198.Key.TypeIndex) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L""), bVar6)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar16] !=
      Core::Private::TDestructorCaller<void_const_*>::Destruct) {
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar16])(&local_198);
  }
  pFVar9 = FAutomationTestFramework::Get();
  pFVar1 = pFVar9->CurrentTest;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
  ::FString::FString(&local_458,L"Move key (UObject*)");
  (*pcVar2)(pFVar1,&local_458,0,0);
  if (local_458.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_458.Data.AllocatorInstance.Data);
  }
  local_1e0.Key._padding_ = 0;
  local_1e0.Key.TypeIndex = 2;
  MoveKeyTest(&local_1e0);
  uVar16 = (ulonglong)local_1e0.Key.TypeIndex;
  if ((9 < local_1e0.Key.TypeIndex) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L""), bVar6)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar16] !=
      Core::Private::TDestructorCaller<UObject_const_*>::Destruct) {
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar16])(&local_1e0);
  }
  pFVar9 = FAutomationTestFramework::Get();
  pFVar1 = pFVar9->CurrentTest;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
  ::FString::FString(&local_448,L"Move key (int64)");
  (*pcVar2)(pFVar1,&local_448,0,0);
  if (local_448.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_448.Data.AllocatorInstance.Data);
  }
  local_138._padding_ = 0x2a;
  local_138.TypeIndex = '\x03';
  MoveKeyTest((FMapKey *)&local_138);
  TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
  ::
  ~TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
            (&local_138);
  pFVar9 = FAutomationTestFramework::Get();
  pFVar1 = pFVar9->CurrentTest;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
  ::FString::FString(&local_438,L"Move key (uint64)");
  (*pcVar2)(pFVar1,&local_438,0,0);
  if (local_438.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_438.Data.AllocatorInstance.Data);
  }
  local_120._padding_ = 0x2a;
  local_120.TypeIndex = '\x04';
  MoveKeyTest((FMapKey *)&local_120);
  TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
  ::
  ~TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
            (&local_120);
  pFVar9 = FAutomationTestFramework::Get();
  pFVar1 = pFVar9->CurrentTest;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
  ::FString::FString(&local_428,L"Move key (float)");
  (*pcVar2)(pFVar1,&local_428,0,0);
  if (local_428.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_428.Data.AllocatorInstance.Data);
  }
  local_108._padding_._0_4_ = 0x42280000;
  local_108.TypeIndex = '\x05';
  MoveKeyTest((FMapKey *)&local_108);
  TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
  ::
  ~TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
            (&local_108);
  pFVar9 = FAutomationTestFramework::Get();
  pFVar1 = pFVar9->CurrentTest;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
  ::FString::FString(&local_418,L"Move key (double)");
  (*pcVar2)(pFVar1,&local_418,0,0);
  if (local_418.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_418.Data.AllocatorInstance.Data);
  }
  local_f0._padding_ = (longlong)dVar5;
  local_f0.TypeIndex = '\x06';
  MoveKeyTest((FMapKey *)&local_f0);
  TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
  ::
  ~TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
            (&local_f0);
  pFVar9 = FAutomationTestFramework::Get();
  pFVar1 = pFVar9->CurrentTest;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
  ::FString::FString(&local_408,L"Move key (FString)");
  (*pcVar2)(pFVar1,&local_408,0,0);
  if (local_408.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_408.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_3f8,L"TestString");
  pFVar11 = ::FString::FString(&local_398,&local_3f8);
  local_210._padding_ = (longlong)(pFVar11->Data).AllocatorInstance.Data;
  (pFVar11->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_210._padding_._0_4_ = (pFVar11->Data).ArrayNum;
  local_210._padding_._4_4_ = (pFVar11->Data).ArrayMax;
  (pFVar11->Data).ArrayNum = 0;
  (pFVar11->Data).ArrayMax = 0;
  local_210.TypeIndex = '\a';
  pFVar3 = (pFVar11->Data).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  MoveKeyTest((FMapKey *)&local_210);
  TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
  ::
  ~TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
            (&local_210);
  if (local_3f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3f8.Data.AllocatorInstance.Data);
  }
  pFVar9 = FAutomationTestFramework::Get();
  pFVar1 = pFVar9->CurrentTest;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
  ::FString::FString(&local_3e8,L"Move key (FName)");
  (*pcVar2)(pFVar1,&local_3e8,0,0);
  if (local_3e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3e8.Data.AllocatorInstance.Data);
  }
  local_d8._padding_._0_4_ = TestFName.ComparisonIndex.Value;
  local_d8._padding_._4_4_ = TestFName.Number;
  local_d8.TypeIndex = '\b';
  MoveKeyTest((FMapKey *)&local_d8);
  TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
  ::
  ~TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
            (&local_d8);
  pFVar9 = FAutomationTestFramework::Get();
  pFVar1 = pFVar9->CurrentTest;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
  ::FString::FString(&local_3d8,L"Move key (FSoftObjectPath)");
  (*pcVar2)(pFVar1,&local_3d8,0,0);
  if (local_3d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3d8.Data.AllocatorInstance.Data);
  }
  pFVar13 = FSoftObjectPath::FSoftObjectPath(&local_388,&TestPath);
  FMapKey::FMapKey((FMapKey *)&local_60,pFVar13);
  MoveKeyTest((FMapKey *)&local_60);
  TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
  ::
  ~TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
            (&local_60);
  return;
}

