// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 10

// GetTestFlags @ 141cbfb20

EAutomationTestFlags __thiscall
FTVariantSerializationTest::GetTestFlags(FTVariantSerializationTest *this)

{
  return this->TestFlags;
}

// IsStressTest @ 141cbfb30

bool __thiscall FTVariantSerializationTest::IsStressTest(FTVariantSerializationTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141cbfb40

uint __thiscall FTVariantSerializationTest::GetRequiredDeviceNum(FTVariantSerializationTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 141cbfb50

FString * __thiscall
FTVariantSerializationTest::GetTestSourceFileName
          (FTVariantSerializationTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Misc\\TVariantTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141cbfb80

int __thiscall FTVariantSerializationTest::GetTestSourceFileLine(FTVariantSerializationTest *this)

{
  return 0x1fc;
}

// GetTests @ 141cbfb90

/* WARNING: Removing unreachable block (ram,0x000141cbfd0e) */

void __thiscall
FTVariantSerializationTest::GetTests
          (FTVariantSerializationTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
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

// RunTest @ 141cbfd30

bool __thiscall
FTVariantSerializationTest::RunTest(FTVariantSerializationTest *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 141cbfd60

FString * __thiscall
FTVariantSerializationTest::GetBeautifiedTestName
          (FTVariantSerializationTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FTVariantSerializationTest @ 141cef240

FTVariantSerializationTest * __thiscall
FTVariantSerializationTest::FTVariantSerializationTest
          (FTVariantSerializationTest *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7FTVariantSerializationTest__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[ApplicationContextMask][EngineFilter]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"System::Core::Misc::TVariant::Serialization");
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

// TestBody @ 141d4ced0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FTVariantSerializationTest::TestBody(FTVariantSerializationTest *this,FString *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FString *pFVar4;
  ulonglong uVar5;
  bool bVar6;
  undefined1 auStack_1d8 [32];
  undefined8 local_1b8;
  void *local_1b0;
  undefined8 local_1a8;
  FString local_1a0;
  FArchiveState local_188;
  undefined8 local_f8;
  void **local_f0;
  undefined8 local_e8;
  FArchiveState local_d8;
  undefined8 local_48;
  void **local_40;
  undefined8 local_38;
  TVariant<int,FString> local_28;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_1d8;
  bVar6 = false;
  local_1b0 = (void *)0x0;
  local_1a8 = 0;
  local_1b8 = 0;
  local_188._padding_ = 0;
  local_188.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
  local_188.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
  local_188.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
  local_188.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
  local_188._40_8_ = 0;
  local_188.ArSerializingDefaults = 0;
  local_188.ArPortFlags = 0;
  local_188.ArMaxSerializeSize = 0;
  local_188.ArUEVer.FileVersionUE4 = 0;
  local_188.ArUEVer.FileVersionUE5 = 0;
  local_188.ArLicenseeUEVer = 0;
  local_188.ArEngineVer.Major = 0;
  local_188.ArEngineVer.Minor = 0;
  local_188.ArEngineVer.Patch = 0;
  local_188.ArEngineVer._6_2_ = 0;
  local_188.ArEngineVer.Changelist = 0;
  local_188.CustomVersionContainer = (FCustomVersionContainer *)0x0;
  local_188.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
  local_188.SavePackageData = (FArchiveSavePackageData *)0x0;
  local_188.SerializedProperty = (FProperty *)0x0;
  local_188.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
  local_188.bCustomVersionsAreReset = false;
  local_188._129_7_ = 0;
  local_188.NextProxy = (FArchiveState *)0x0;
  FArchiveState::FArchiveState(&local_188);
  local_f8 = 0;
  local_e8 = 0;
  local_188._padding_ = (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
  local_f0 = &local_1b0;
  FArchiveState::SetIsSaving(&local_188,true);
  (**(code **)(local_188._padding_ + 0x108))(&local_188,0);
  local_28._padding_._0_4_ = 0x19;
  local_188._padding_ = (longlong)&___7FMemoryWriter__6B_;
  local_28.TypeIndex = 0;
  operator<<<int,FString>((FArchive *)&local_188,&local_28);
  uVar5 = (ulonglong)local_28.TypeIndex;
  if (1 < uVar5) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<int,FString>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar5] != UE::Core::Private::TDestructorCaller<int>::Destruct)
  {
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<int,FString>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar5])(&local_28);
  }
  ::FString::FString((FString *)&local_28,L"Foo");
  local_28.TypeIndex = 1;
  operator<<<int,FString>((FArchive *)&local_188,&local_28);
  local_d8._padding_ = 0;
  local_d8.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
  local_d8.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
  local_d8.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
  local_d8.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
  local_d8._40_8_ = 0;
  local_d8.ArSerializingDefaults = 0;
  local_d8.ArPortFlags = 0;
  local_d8.ArMaxSerializeSize = 0;
  local_d8.ArUEVer.FileVersionUE4 = 0;
  local_d8.ArUEVer.FileVersionUE5 = 0;
  local_d8.ArLicenseeUEVer = 0;
  local_d8.ArEngineVer.Major = 0;
  local_d8.ArEngineVer.Minor = 0;
  local_d8.ArEngineVer.Patch = 0;
  local_d8.ArEngineVer._6_2_ = 0;
  local_d8.ArEngineVer.Changelist = 0;
  local_d8.CustomVersionContainer = (FCustomVersionContainer *)0x0;
  local_d8.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
  local_d8.SavePackageData = (FArchiveSavePackageData *)0x0;
  local_d8.SerializedProperty = (FProperty *)0x0;
  local_d8.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
  local_d8.bCustomVersionsAreReset = false;
  local_d8._129_7_ = 0;
  local_d8.NextProxy = (FArchiveState *)0x0;
  FArchiveState::FArchiveState(&local_d8);
  local_48 = 0;
  local_d8._padding_ = (longlong)&___7FMemoryReader__6B_;
  local_40 = &local_1b0;
  local_38 = 0x7fffffffffffffff;
  FArchiveState::SetIsLoading(&local_d8,true);
  (**(code **)(local_d8._padding_ + 0x108))(&local_d8,0);
  operator<<<int,FString>((FArchive *)&local_d8,&local_28);
  uVar5 = (ulonglong)local_28.TypeIndex;
  if (1 < uVar5) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x12f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<FString,int,FString>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar5 + 4) == '\0') {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("VarData.IsType<int>()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Misc\\TVariantTest.cpp"
                       ,0x20d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (local_28.TypeIndex != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index == TypeIndex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                       ,0x97,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((int)local_28._padding_ != 0x19) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("VarData.Get<int>() == 25",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Misc\\TVariantTest.cpp"
                       ,0x20e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  operator<<<int,FString>((FArchive *)&local_d8,&local_28);
  uVar5 = (ulonglong)local_28.TypeIndex;
  if (1 < uVar5) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x12f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<FString,int,FString>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar5) == '\0') {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("VarData.IsType<FString>()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Misc\\TVariantTest.cpp"
                       ,0x211,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pFVar4 = ::FString::FString(&local_1a0,L"Foo");
  if (local_28.TypeIndex != 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index == TypeIndex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                       ,0x97,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar3 = (pFVar4->Data).ArrayNum;
  if ((int)local_28._padding_ == iVar3) {
    if ((int)local_28._padding_ < 2) goto LAB_141d4d25f;
    iVar3 = FGenericPlatformStricmp::Stricmp
                      ((wchar_t *)CONCAT44(local_28._padding_._4_4_,(int)local_28._padding_),
                       (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
    bVar6 = iVar3 == 0;
  }
  else {
    bVar6 = (int)local_28._padding_ + iVar3 == 1;
  }
  bVar6 = !bVar6;
LAB_141d4d25f:
  if (local_1a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1a0.Data.AllocatorInstance.Data);
  }
  if (bVar6) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("VarData.Get<FString>() == FString(L\"Foo\")",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Misc\\TVariantTest.cpp"
                       ,0x212,L"");
    if (bVar6) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FArchive::~FArchive((FArchive *)&local_d8);
  uVar5 = (ulonglong)local_28.TypeIndex;
  if (1 < uVar5) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar6) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<int,FString>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar5] ==
      UE::Core::Private::TDestructorCaller<FString>::Destruct) {
    if ((void *)CONCAT44(local_28._padding_._4_4_,(int)local_28._padding_) != (void *)0x0) {
      FMemory::Free((void *)CONCAT44(local_28._padding_._4_4_,(int)local_28._padding_));
    }
  }
  else {
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<int,FString>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar5])(&local_28);
  }
  FArchive::~FArchive((FArchive *)&local_188);
  if (local_1b0 != (void *)0x0) {
    FMemory::Free(local_1b0);
  }
  return;
}

