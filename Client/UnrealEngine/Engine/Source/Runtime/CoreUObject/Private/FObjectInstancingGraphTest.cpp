// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 10

// GetTestFlags @ 1422c6f50

EAutomationTestFlags __thiscall
UE::FObjectInstancingGraphTest::GetTestFlags(FObjectInstancingGraphTest *this)

{
  return this->TestFlags;
}

// IsStressTest @ 1422c6f60

bool __thiscall UE::FObjectInstancingGraphTest::IsStressTest(FObjectInstancingGraphTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 1422c6f70

uint __thiscall
UE::FObjectInstancingGraphTest::GetRequiredDeviceNum(FObjectInstancingGraphTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 1422c6f80

FString * __thiscall
UE::FObjectInstancingGraphTest::GetTestSourceFileName
          (FObjectInstancingGraphTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Tests\\UObject\\ObjectInstancingGraphTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 1422c6fb0

int __thiscall
UE::FObjectInstancingGraphTest::GetTestSourceFileLine(FObjectInstancingGraphTest *this)

{
  return 0xd;
}

// GetTests @ 1422c6fc0

/* WARNING: Removing unreachable block (ram,0x0001422c713e) */

void __thiscall
UE::FObjectInstancingGraphTest::GetTests
          (FObjectInstancingGraphTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
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

// RunTest @ 1422c7160

bool __thiscall
UE::FObjectInstancingGraphTest::RunTest(FObjectInstancingGraphTest *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 1422c7190

FString * __thiscall
UE::FObjectInstancingGraphTest::GetBeautifiedTestName
          (FObjectInstancingGraphTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FObjectInstancingGraphTest @ 1422cd430

FObjectInstancingGraphTest * __thiscall
UE::FObjectInstancingGraphTest::FObjectInstancingGraphTest
          (FObjectInstancingGraphTest *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7FObjectInstancingGraphTest_UE__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[CoreUObject][EngineFilter]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"CoreUObject::FObjectInstancingGraph");
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
  ::FString::FString(&local_18,"[CoreUObject][EngineFilter]");
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

// TestBody @ 1422e9100

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UE::FObjectInstancingGraphTest::TestBody(FObjectInstancingGraphTest *this,FString *param_1)

{
  FAutomationTestBase *pFVar1;
  code *pcVar2;
  bool bVar3;
  FAutomationTestFramework *pFVar4;
  UObject *pUVar5;
  USubobjectInstancingTestObject *pUVar6;
  USubobjectInstancingTestObject *pUVar7;
  UClass *pUVar8;
  FName *pFVar9;
  FName FVar10;
  USubobjectInstancingTestOuterObject *pUVar11;
  UPackage *pUVar12;
  UObjectBaseUtility *pUVar13;
  longlong *plVar14;
  wchar_t *pwVar15;
  undefined1 auStackY_218 [32];
  FString local_1d8;
  FProperty *local_1c8 [2];
  undefined1 local_1b8 [128];
  undefined1 local_138 [88];
  void *local_e0;
  undefined4 local_d8;
  TSparseArray<TSparseSetElement<TTuple<UObject_*,UObject_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_d0;
  void *local_90;
  undefined4 local_88;
  TSet<FProperty_const_*,DefaultKeyFuncs<FProperty_const_*,0>,FDefaultSetAllocator> local_80;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_218;
  pFVar4 = FAutomationTestFramework::Get();
  pFVar1 = pFVar4->CurrentTest;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
  ::FString::FString(&local_1d8,L"Default construction");
  (*pcVar2)(pFVar1,&local_1d8,0,0);
  if ((FName)local_1d8.Data.AllocatorInstance.Data != (FName)0x0) {
    FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
  }
  FObjectInstancingGraph::FObjectInstancingGraph((FObjectInstancingGraph *)local_138,false);
  if ((USubobjectInstancingTestObject *)local_138._8_8_ != (USubobjectInstancingTestObject *)0x0) {
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_1d8,L"Condition expected to return false but returned true");
    (*pcVar2)(pFVar1,&local_1d8);
    if ((FName)local_1d8.Data.AllocatorInstance.Data != (FName)0x0) {
      FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
    }
  }
  if ((local_138[0x10] & DisableInstancing) != None) {
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_1d8,L"Condition failed");
    (*pcVar2)(pFVar1,&local_1d8);
    if ((FName)local_1d8.Data.AllocatorInstance.Data != (FName)0x0) {
      FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
    }
  }
  local_80.HashSize = 0;
  if (local_80.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_80.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<FProperty_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FProperty_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_80.Elements);
  local_88 = 0;
  if (local_90 != (void *)0x0) {
    FMemory::Free(local_90);
  }
  TSparseArray<TSparseSetElement<TTuple<UObject_*,UObject_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UObject_*,UObject_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_d0);
  local_d8 = 0;
  if (local_e0 != (void *)0x0) {
    FMemory::Free(local_e0);
  }
  TSparseArray<TSparseSetElement<TTuple<UObject_*,UObject_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UObject_*,UObject_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UObject_*,UObject_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)(local_138 + 0x18));
  pFVar4 = FAutomationTestFramework::Get();
  pFVar1 = pFVar4->CurrentTest;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
  ::FString::FString(&local_1d8,L"Construct with options");
  (*pcVar2)(pFVar1,&local_1d8,0,0);
  if ((FName)local_1d8.Data.AllocatorInstance.Data != (FName)0x0) {
    FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
  }
  FObjectInstancingGraph::FObjectInstancingGraph
            ((FObjectInstancingGraph *)local_138,DisableInstancing);
  if ((USubobjectInstancingTestObject *)local_138._8_8_ != (USubobjectInstancingTestObject *)0x0) {
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_1d8,L"Condition expected to return false but returned true");
    (*pcVar2)(pFVar1,&local_1d8);
    if ((FName)local_1d8.Data.AllocatorInstance.Data != (FName)0x0) {
      FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
    }
  }
  if ((local_138[0x10] & DisableInstancing) == None) {
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_1d8,L"Condition expected to return false but returned true");
    (*pcVar2)(pFVar1,&local_1d8);
    if ((FName)local_1d8.Data.AllocatorInstance.Data != (FName)0x0) {
      FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
    }
  }
  local_80.HashSize = 0;
  if (local_80.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_80.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<FProperty_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FProperty_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_80.Elements);
  local_88 = 0;
  if (local_90 != (void *)0x0) {
    FMemory::Free(local_90);
  }
  TSparseArray<TSparseSetElement<TTuple<UObject_*,UObject_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UObject_*,UObject_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_d0);
  local_d8 = 0;
  if (local_e0 != (void *)0x0) {
    FMemory::Free(local_e0);
  }
  TSparseArray<TSparseSetElement<TTuple<UObject_*,UObject_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UObject_*,UObject_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UObject_*,UObject_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)(local_138 + 0x18));
  pFVar4 = FAutomationTestFramework::Get();
  pFVar1 = pFVar4->CurrentTest;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
  ::FString::FString(&local_1d8,L"Construct with root object");
  (*pcVar2)(pFVar1,&local_1d8,0,0);
  if ((FName)local_1d8.Data.AllocatorInstance.Data != (FName)0x0) {
    FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
  }
  pUVar5 = GetTransientPackageAsObject();
  pUVar6 = NewObject<USubobjectInstancingTestObject>(pUVar5);
  FObjectInstancingGraph::FObjectInstancingGraph
            ((FObjectInstancingGraph *)local_138,(UObject *)pUVar6,None);
  if ((USubobjectInstancingTestObject *)local_138._8_8_ == (USubobjectInstancingTestObject *)0x0) {
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_1d8,L"Condition failed");
    (*pcVar2)(pFVar1,&local_1d8);
    if ((FName)local_1d8.Data.AllocatorInstance.Data != (FName)0x0) {
      FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
    }
  }
  if ((USubobjectInstancingTestObject *)local_138._8_8_ != pUVar6) {
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_1d8,L"Condition failed");
    (*pcVar2)(pFVar1,&local_1d8);
    if ((FName)local_1d8.Data.AllocatorInstance.Data != (FName)0x0) {
      FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
    }
  }
  pUVar5 = UObject::GetArchetype((UObject *)pUVar6);
  pUVar7 = (USubobjectInstancingTestObject *)
           FObjectInstancingGraph::GetDestinationObject((FObjectInstancingGraph *)local_138,pUVar5);
  if (pUVar7 != pUVar6) {
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_1d8,L"Condition failed");
    (*pcVar2)(pFVar1,&local_1d8);
    if ((FName)local_1d8.Data.AllocatorInstance.Data != (FName)0x0) {
      FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
    }
  }
  local_80.HashSize = 0;
  if (local_80.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_80.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<FProperty_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FProperty_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_80.Elements);
  local_88 = 0;
  if (local_90 != (void *)0x0) {
    FMemory::Free(local_90);
  }
  TSparseArray<TSparseSetElement<TTuple<UObject_*,UObject_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UObject_*,UObject_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_d0);
  local_d8 = 0;
  if (local_e0 != (void *)0x0) {
    FMemory::Free(local_e0);
  }
  TSparseArray<TSparseSetElement<TTuple<UObject_*,UObject_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UObject_*,UObject_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UObject_*,UObject_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)(local_138 + 0x18));
  pFVar4 = FAutomationTestFramework::Get();
  pFVar1 = pFVar4->CurrentTest;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
  ::FString::FString(&local_1d8,L"Set destination root on first add");
  (*pcVar2)(pFVar1,&local_1d8,0,0);
  if ((FName)local_1d8.Data.AllocatorInstance.Data != (FName)0x0) {
    FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
  }
  pUVar5 = GetTransientPackageAsObject();
  pUVar6 = NewObject<USubobjectInstancingTestObject>(pUVar5);
  FObjectInstancingGraph::FObjectInstancingGraph((FObjectInstancingGraph *)local_138,false);
  FObjectInstancingGraph::AddNewObject
            ((FObjectInstancingGraph *)local_138,(UObject *)pUVar6,(UObject *)0x0);
  if ((USubobjectInstancingTestObject *)local_138._8_8_ == (USubobjectInstancingTestObject *)0x0) {
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_1d8,L"Condition failed");
    (*pcVar2)(pFVar1,&local_1d8,0);
    if ((FName)local_1d8.Data.AllocatorInstance.Data != (FName)0x0) {
      FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
    }
  }
  if ((USubobjectInstancingTestObject *)local_138._8_8_ != pUVar6) {
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_1d8,L"Condition failed");
    (*pcVar2)(pFVar1,&local_1d8,0);
    if ((FName)local_1d8.Data.AllocatorInstance.Data != (FName)0x0) {
      FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
    }
  }
  pUVar5 = UObject::GetArchetype((UObject *)pUVar6);
  pUVar7 = (USubobjectInstancingTestObject *)
           FObjectInstancingGraph::GetDestinationObject((FObjectInstancingGraph *)local_138,pUVar5);
  if (pUVar7 != pUVar6) {
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_1d8,L"Condition failed");
    (*pcVar2)(pFVar1,&local_1d8,0);
    if ((FName)local_1d8.Data.AllocatorInstance.Data != (FName)0x0) {
      FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
    }
  }
  local_80.HashSize = 0;
  if (local_80.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_80.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<FProperty_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FProperty_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_80.Elements);
  local_88 = 0;
  if (local_90 != (void *)0x0) {
    FMemory::Free(local_90);
  }
  TSparseArray<TSparseSetElement<TTuple<UObject_*,UObject_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UObject_*,UObject_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_d0);
  local_d8 = 0;
  if (local_e0 != (void *)0x0) {
    FMemory::Free(local_e0);
  }
  TSparseArray<TSparseSetElement<TTuple<UObject_*,UObject_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UObject_*,UObject_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UObject_*,UObject_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)(local_138 + 0x18));
  pFVar4 = FAutomationTestFramework::Get();
  pFVar1 = pFVar4->CurrentTest;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
  ::FString::FString(&local_1d8,
                     L"Exclude native class property from instancing when initialized from CDO");
  (*pcVar2)(pFVar1,&local_1d8,0,0);
  if ((FName)local_1d8.Data.AllocatorInstance.Data != (FName)0x0) {
    FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
  }
  FObjectInstancingGraph::FObjectInstancingGraph((FObjectInstancingGraph *)local_138,false);
  pUVar8 = USubobjectInstancingTestOuterObject::StaticClass();
  pFVar9 = ::FName::FName((FName *)&local_1d8,0xb,L"InnerObject",FNAME_Add);
  FVar10 = (FName)UStruct::FindPropertyByName((UStruct *)pUVar8,*pFVar9);
  if ((FVar10 == (FName)0x0) ||
     ((*(uint *)(*(longlong *)((longlong)FVar10 + 8) + 0x18) >> 0x10 & 1) == 0)) {
LAB_1422ea38d:
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_1d8,L"Required condition failed, interrupting test");
    (*pcVar2)(pFVar1,&local_1d8,0);
    if ((FName)local_1d8.Data.AllocatorInstance.Data != (FName)0x0) {
      FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
    }
LAB_1422ea3cd:
    local_80.HashSize = 0;
    if (local_80.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_80.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<FProperty_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<FProperty_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_80.Elements);
    local_88 = 0;
    if (local_90 != (void *)0x0) {
      FMemory::Free(local_90);
    }
    TSparseArray<TSparseSetElement<TTuple<UObject_*,UObject_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<UObject_*,UObject_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_d0);
    local_d8 = 0;
    if (local_e0 != (void *)0x0) {
      FMemory::Free(local_e0);
    }
    TSparseArray<TSparseSetElement<TTuple<UObject_*,UObject_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<UObject_*,UObject_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<UObject_*,UObject_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)(local_138 + 0x18));
    return;
  }
  local_1d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)FVar10;
  TSet<FProperty_const_*,DefaultKeyFuncs<FProperty_const_*,0>,FDefaultSetAllocator>::
  Emplace<FProperty_const_*_const_&>(&local_80,local_1c8,(bool *)&local_1d8);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_1b8,pUVar8);
  local_1b8._8_8_ = GetTransientPackage();
  local_1b8._48_8_ = local_138;
  pUVar5 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_1b8);
  pUVar11 = CastChecked<USubobjectInstancingTestOuterObject,UObject>(pUVar5);
  pUVar6 = (USubobjectInstancingTestObject *)
           (**(code **)(*(longlong *)FVar10 + 0x208))(FVar10,pUVar11,0);
  if (pUVar6 == (USubobjectInstancingTestObject *)0x0) {
LAB_1422e9815:
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_1d8,L"Required condition failed, interrupting test");
    (*pcVar2)(pFVar1,&local_1d8,0);
    if ((FName)local_1d8.Data.AllocatorInstance.Data != (FName)0x0) {
      FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
    }
    if (local_1b8._64_8_ != 0) {
      plVar14 = (longlong *)(local_1b8 + 0x50);
      if ((longlong *)local_1b8._104_8_ != (longlong *)0x0) {
        plVar14 = (longlong *)local_1b8._104_8_;
      }
      (**(code **)(*plVar14 + 0x10))();
    }
    goto LAB_1422ea3cd;
  }
  pUVar7 = (pUVar11->InnerObject).field0_0x0.DebugPtr;
  if ((pUVar7 == (USubobjectInstancingTestObject *)0x0) || (pUVar7 != pUVar6)) {
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_1d8,L"Condition failed");
    (*pcVar2)(pFVar1,&local_1d8,0);
    if ((FName)local_1d8.Data.AllocatorInstance.Data != (FName)0x0) {
      FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
    }
  }
  bVar3 = UObjectBaseUtility::IsInOuter((UObjectBaseUtility *)pUVar6,(UObject *)pUVar11);
  if (!bVar3) {
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_1d8,L"Condition failed");
    (*pcVar2)(pFVar1,&local_1d8,0);
    if ((FName)local_1d8.Data.AllocatorInstance.Data != (FName)0x0) {
      FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
    }
  }
  bVar3 = UObjectBaseUtility::IsTemplate
                    ((UObjectBaseUtility *)pUVar6,RF_ArchetypeObject|RF_ClassDefaultObject);
  if (bVar3) {
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_1d8,L"Condition expected to return false but returned true");
    (*pcVar2)(pFVar1,&local_1d8,0);
    if ((FName)local_1d8.Data.AllocatorInstance.Data != (FName)0x0) {
      FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
    }
  }
  bVar3 = UObjectBaseUtility::IsDefaultSubobject((UObjectBaseUtility *)pUVar6);
  if (!bVar3) {
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_1d8,L"Condition failed");
    (*pcVar2)(pFVar1,&local_1d8,0);
    if ((FName)local_1d8.Data.AllocatorInstance.Data != (FName)0x0) {
      FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
    }
  }
  bVar3 = UObjectBaseUtility::IsTemplateForSubobjects
                    ((UObjectBaseUtility *)pUVar6,
                     RF_InheritableComponentTemplate|RF_DefaultSubObject|RF_ClassDefaultObject);
  if (bVar3) {
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_1d8,L"Condition expected to return false but returned true");
    (*pcVar2)(pFVar1,&local_1d8,0);
    if ((FName)local_1d8.Data.AllocatorInstance.Data != (FName)0x0) {
      FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
    }
  }
  if (local_1b8._64_8_ != 0) {
    plVar14 = (longlong *)(local_1b8 + 0x50);
    if ((longlong *)local_1b8._104_8_ != (longlong *)0x0) {
      plVar14 = (longlong *)local_1b8._104_8_;
    }
    (**(code **)(*plVar14 + 0x10))();
  }
  local_80.HashSize = 0;
  if (local_80.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_80.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<FProperty_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FProperty_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_80.Elements);
  local_88 = 0;
  if (local_90 != (void *)0x0) {
    FMemory::Free(local_90);
  }
  TSparseArray<TSparseSetElement<TTuple<UObject_*,UObject_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UObject_*,UObject_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_d0);
  local_d8 = 0;
  if (local_e0 != (void *)0x0) {
    FMemory::Free(local_e0);
  }
  TSparseArray<TSparseSetElement<TTuple<UObject_*,UObject_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UObject_*,UObject_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UObject_*,UObject_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)(local_138 + 0x18));
  pFVar4 = FAutomationTestFramework::Get();
  pFVar1 = pFVar4->CurrentTest;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
  ::FString::FString(&local_1d8,
                     L"Exclude native class property from instancing when initialized from template"
                    );
  (*pcVar2)(pFVar1,&local_1d8,0,0);
  if ((FName)local_1d8.Data.AllocatorInstance.Data != (FName)0x0) {
    FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
  }
  FObjectInstancingGraph::FObjectInstancingGraph((FObjectInstancingGraph *)local_138,false);
  pUVar8 = USubobjectInstancingTestOuterObject::StaticClass();
  pFVar9 = ::FName::FName((FName *)&local_1d8,0xb,L"InnerObject",FNAME_Add);
  FVar10 = (FName)UStruct::FindPropertyByName((UStruct *)pUVar8,*pFVar9);
  if ((FVar10 == (FName)0x0) ||
     ((*(uint *)(*(longlong *)((longlong)FVar10 + 8) + 0x18) >> 0x10 & 1) == 0)) goto LAB_1422ea38d;
  local_1d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)FVar10;
  TSet<FProperty_const_*,DefaultKeyFuncs<FProperty_const_*,0>,FDefaultSetAllocator>::
  Emplace<FProperty_const_*_const_&>(&local_80,local_1c8,(bool *)&local_1d8);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_1b8,pUVar8);
  local_1b8._8_8_ = GetTransientPackage();
  local_1c8[0] = (FProperty *)0x0;
  pUVar12 = GetTransientPackage();
  local_1b8._40_8_ =
       NewObject<USubobjectInstancingTestOuterObject>
                 ((UObject *)pUVar12,(FName)0x0,RF_ArchetypeObject,(UObject *)0x0,false,
                  (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
  local_1b8._48_8_ = local_138;
  pUVar5 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_1b8);
  pUVar11 = CastChecked<USubobjectInstancingTestOuterObject,UObject>(pUVar5);
  pUVar6 = (USubobjectInstancingTestObject *)
           (**(code **)(*(longlong *)FVar10 + 0x208))(FVar10,pUVar11,0);
  if (pUVar6 == (USubobjectInstancingTestObject *)0x0) goto LAB_1422e9815;
  pUVar7 = (pUVar11->InnerObject).field0_0x0.DebugPtr;
  if ((pUVar7 == (USubobjectInstancingTestObject *)0x0) || (pUVar7 != pUVar6)) {
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_1d8,L"Condition failed");
    (*pcVar2)(pFVar1,&local_1d8,0);
    if ((FName)local_1d8.Data.AllocatorInstance.Data != (FName)0x0) {
      FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
    }
  }
  bVar3 = UObjectBaseUtility::IsInOuter((UObjectBaseUtility *)pUVar6,(UObject *)pUVar11);
  if (bVar3) {
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_1d8,L"Condition expected to return false but returned true");
    (*pcVar2)(pFVar1,&local_1d8,0);
    if ((FName)local_1d8.Data.AllocatorInstance.Data != (FName)0x0) {
      FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
    }
  }
  bVar3 = UObjectBaseUtility::IsTemplate
                    ((UObjectBaseUtility *)pUVar6,RF_ArchetypeObject|RF_ClassDefaultObject);
  if (!bVar3) {
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_1d8,L"Condition failed");
    (*pcVar2)(pFVar1,&local_1d8,0);
    if ((FName)local_1d8.Data.AllocatorInstance.Data != (FName)0x0) {
      FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
    }
  }
  bVar3 = UObjectBaseUtility::IsDefaultSubobject((UObjectBaseUtility *)pUVar6);
  if (!bVar3) {
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_1d8,L"Condition failed");
    (*pcVar2)(pFVar1,&local_1d8,0);
    if ((FName)local_1d8.Data.AllocatorInstance.Data != (FName)0x0) {
      FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
    }
  }
  bVar3 = UObjectBaseUtility::IsTemplateForSubobjects
                    ((UObjectBaseUtility *)pUVar6,
                     RF_InheritableComponentTemplate|RF_DefaultSubObject|RF_ClassDefaultObject);
  if (!bVar3) {
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_1d8,L"Condition failed");
    (*pcVar2)(pFVar1,&local_1d8,0);
    if ((FName)local_1d8.Data.AllocatorInstance.Data != (FName)0x0) {
      FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
    }
  }
  if (local_1b8._64_8_ != 0) {
    plVar14 = (longlong *)(local_1b8 + 0x50);
    if ((longlong *)local_1b8._104_8_ != (longlong *)0x0) {
      plVar14 = (longlong *)local_1b8._104_8_;
    }
    (**(code **)(*plVar14 + 0x10))();
  }
  FObjectInstancingGraph::~FObjectInstancingGraph((FObjectInstancingGraph *)local_138);
  pFVar4 = FAutomationTestFramework::Get();
  pFVar1 = pFVar4->CurrentTest;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
  ::FString::FString(&local_1d8,
                     L"Exclude non-native class property from instancing when initialized from CDO")
  ;
  (*pcVar2)(pFVar1,&local_1d8,0,0);
  if ((FName)local_1d8.Data.AllocatorInstance.Data != (FName)0x0) {
    FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
  }
  FObjectInstancingGraph::FObjectInstancingGraph((FObjectInstancingGraph *)local_138,false);
  pUVar8 = USubobjectInstancingTestOuterObject::StaticClass();
  pUVar8 = SubobjectInstancingTest::Private::NewTestClass<UClass>(pUVar8);
  FVar10 = (FName)UStruct::FindPropertyByName
                            ((UStruct *)pUVar8,
                             SubobjectInstancingTest::Private::NonNativeInnerObjectPropertyName);
  if ((FVar10 == (FName)0x0) ||
     ((*(uint *)(*(longlong *)((longlong)FVar10 + 8) + 0x18) >> 0x10 & 1) == 0)) {
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_1d8,L"Required condition failed, interrupting test");
    (*pcVar2)(pFVar1,&local_1d8,0);
    if ((FName)local_1d8.Data.AllocatorInstance.Data != (FName)0x0) {
      FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
    }
LAB_1422ea37f:
    FObjectInstancingGraph::~FObjectInstancingGraph((FObjectInstancingGraph *)local_138);
    return;
  }
  local_1d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)FVar10;
  TSet<FProperty_const_*,DefaultKeyFuncs<FProperty_const_*,0>,FDefaultSetAllocator>::
  Emplace<FProperty_const_*_const_&>(&local_80,local_1c8,(bool *)&local_1d8);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_1b8,pUVar8);
  local_1b8._8_8_ = GetTransientPackage();
  local_1b8._48_8_ = local_138;
  pUVar5 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_1b8);
  pUVar11 = CastChecked<USubobjectInstancingTestOuterObject,UObject>(pUVar5);
  pUVar13 = (UObjectBaseUtility *)(**(code **)(*(longlong *)FVar10 + 0x208))(FVar10,pUVar11,0);
  if (pUVar13 == (UObjectBaseUtility *)0x0) {
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_1d8,L"Required condition failed, interrupting test");
    (*pcVar2)(pFVar1,&local_1d8,0);
    if ((FName)local_1d8.Data.AllocatorInstance.Data != (FName)0x0) {
      FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
    }
    if (local_1b8._64_8_ != 0) {
      plVar14 = (longlong *)(local_1b8 + 0x50);
      if ((longlong *)local_1b8._104_8_ != (longlong *)0x0) {
        plVar14 = (longlong *)local_1b8._104_8_;
      }
      (**(code **)(*plVar14 + 0x10))();
      FObjectInstancingGraph::~FObjectInstancingGraph((FObjectInstancingGraph *)local_138);
      return;
    }
    goto LAB_1422ea37f;
  }
  bVar3 = UObjectBaseUtility::IsInOuter(pUVar13,(UObject *)pUVar11);
  if (bVar3) {
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_1d8,L"Condition expected to return false but returned true");
    (*pcVar2)(pFVar1,&local_1d8,0);
    if ((FName)local_1d8.Data.AllocatorInstance.Data != (FName)0x0) {
      FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
    }
  }
  bVar3 = UObjectBaseUtility::IsTemplate(pUVar13,RF_ArchetypeObject|RF_ClassDefaultObject);
  if (!bVar3) {
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_1d8,L"Condition failed");
    (*pcVar2)(pFVar1,&local_1d8,0);
    if ((FName)local_1d8.Data.AllocatorInstance.Data != (FName)0x0) {
      FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
    }
  }
  bVar3 = UObjectBaseUtility::IsDefaultSubobject(pUVar13);
  if (!bVar3) {
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_1d8,L"Condition failed");
    (*pcVar2)(pFVar1,&local_1d8,0);
    if ((FName)local_1d8.Data.AllocatorInstance.Data != (FName)0x0) {
      FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
    }
  }
  bVar3 = UObjectBaseUtility::IsTemplateForSubobjects
                    (pUVar13,RF_InheritableComponentTemplate|RF_DefaultSubObject|
                             RF_ClassDefaultObject);
  if (!bVar3) {
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_1d8,L"Condition failed");
    (*pcVar2)(pFVar1,&local_1d8,0);
    if ((FName)local_1d8.Data.AllocatorInstance.Data != (FName)0x0) {
      FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
    }
  }
  if (local_1b8._64_8_ != 0) {
    plVar14 = (longlong *)(local_1b8 + 0x50);
    if ((longlong *)local_1b8._104_8_ != (longlong *)0x0) {
      plVar14 = (longlong *)local_1b8._104_8_;
    }
    (**(code **)(*plVar14 + 0x10))();
  }
  FObjectInstancingGraph::~FObjectInstancingGraph((FObjectInstancingGraph *)local_138);
  pFVar4 = FAutomationTestFramework::Get();
  pFVar1 = pFVar4->CurrentTest;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
  ::FString::FString(&local_1d8,
                     L"Exclude non-native class property from instancing when initialized from template"
                    );
  (*pcVar2)(pFVar1,&local_1d8,0,0);
  if ((FName)local_1d8.Data.AllocatorInstance.Data != (FName)0x0) {
    FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
  }
  FObjectInstancingGraph::FObjectInstancingGraph((FObjectInstancingGraph *)local_138,false);
  pUVar8 = USubobjectInstancingTestOuterObject::StaticClass();
  pUVar8 = SubobjectInstancingTest::Private::NewTestClass<UClass>(pUVar8);
  FVar10 = (FName)UStruct::FindPropertyByName
                            ((UStruct *)pUVar8,
                             SubobjectInstancingTest::Private::NonNativeInnerObjectPropertyName);
  if ((FVar10 == (FName)0x0) ||
     ((*(uint *)(*(longlong *)((longlong)FVar10 + 8) + 0x18) >> 0x10 & 1) == 0)) {
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_1d8,L"Required condition failed, interrupting test");
    (*pcVar2)(pFVar1,&local_1d8,0);
    if ((FName)local_1d8.Data.AllocatorInstance.Data != (FName)0x0) {
      FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
    }
    goto LAB_1422ea331;
  }
  local_1d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)FVar10;
  TSet<FProperty_const_*,DefaultKeyFuncs<FProperty_const_*,0>,FDefaultSetAllocator>::
  Emplace<FProperty_const_*_const_&>(&local_80,local_1c8,(bool *)&local_1d8);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_1b8,pUVar8);
  local_1b8._8_8_ = GetTransientPackage();
  local_1c8[0] = (FProperty *)0x0;
  pUVar12 = GetTransientPackage();
  local_1b8._40_8_ =
       NewObject<USubobjectInstancingTestOuterObject>
                 ((UObject *)pUVar12,pUVar8,(FName)0x0,RF_ArchetypeObject,(UObject *)0x0,false,
                  (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
  local_1b8._48_8_ = local_138;
  pUVar5 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_1b8);
  pUVar11 = CastChecked<USubobjectInstancingTestOuterObject,UObject>(pUVar5);
  pUVar13 = (UObjectBaseUtility *)(**(code **)(*(longlong *)FVar10 + 0x208))(FVar10,pUVar11,0);
  if (pUVar13 == (UObjectBaseUtility *)0x0) {
    pFVar4 = FAutomationTestFramework::Get();
    pwVar15 = L"Required condition failed, interrupting test";
LAB_1422ea17e:
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_1d8,pwVar15);
    (*pcVar2)(pFVar1,&local_1d8,0);
    if ((FName)local_1d8.Data.AllocatorInstance.Data != (FName)0x0) {
      FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
    }
  }
  else {
    bVar3 = UObjectBaseUtility::IsInOuter(pUVar13,(UObject *)pUVar11);
    if (bVar3) {
      pFVar4 = FAutomationTestFramework::Get();
      pFVar1 = pFVar4->CurrentTest;
      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
      ::FString::FString(&local_1d8,L"Condition expected to return false but returned true");
      (*pcVar2)(pFVar1,&local_1d8,0);
      if ((FName)local_1d8.Data.AllocatorInstance.Data != (FName)0x0) {
        FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
      }
    }
    bVar3 = UObjectBaseUtility::IsTemplate(pUVar13,RF_ArchetypeObject|RF_ClassDefaultObject);
    if (!bVar3) {
      pFVar4 = FAutomationTestFramework::Get();
      pFVar1 = pFVar4->CurrentTest;
      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
      ::FString::FString(&local_1d8,L"Condition failed");
      (*pcVar2)(pFVar1,&local_1d8,0);
      if ((FName)local_1d8.Data.AllocatorInstance.Data != (FName)0x0) {
        FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
      }
    }
    bVar3 = UObjectBaseUtility::IsDefaultSubobject(pUVar13);
    if (!bVar3) {
      pFVar4 = FAutomationTestFramework::Get();
      pFVar1 = pFVar4->CurrentTest;
      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
      ::FString::FString(&local_1d8,L"Condition failed");
      (*pcVar2)(pFVar1,&local_1d8,0);
      if ((FName)local_1d8.Data.AllocatorInstance.Data != (FName)0x0) {
        FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
      }
    }
    bVar3 = UObjectBaseUtility::IsTemplateForSubobjects(pUVar13,RF_ArchetypeObject);
    if (!bVar3) {
      pFVar4 = FAutomationTestFramework::Get();
      pwVar15 = L"Condition failed";
      goto LAB_1422ea17e;
    }
  }
  if (local_1b8._64_8_ != 0) {
    plVar14 = (longlong *)(local_1b8 + 0x50);
    if ((longlong *)local_1b8._104_8_ != (longlong *)0x0) {
      plVar14 = (longlong *)local_1b8._104_8_;
    }
    (**(code **)(*plVar14 + 0x10))();
    FObjectInstancingGraph::~FObjectInstancingGraph((FObjectInstancingGraph *)local_138);
    return;
  }
LAB_1422ea331:
  FObjectInstancingGraph::~FObjectInstancingGraph((FObjectInstancingGraph *)local_138);
  return;
}

