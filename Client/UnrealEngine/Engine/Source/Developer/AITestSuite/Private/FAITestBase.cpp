// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AITestSuite
// Functions: 10

// ~FAITestBase @ 14704b670

void __thiscall FAITestBase::~FAITestBase(FAITestBase *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  
  this->_padding_ = (longlong)&___7FAITestBase__6B_;
  if (this->bTearedDown == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bTearedDown && \"Super implementation of TearDown not called!\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\AITestSuite\\Private\\Tests\\AITestsCommon.cpp"
                       ,0x7c,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar1 = (this->SpawnedObjects).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// AddAutoDestroyObject @ 14704f460

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall FAITestBase::AddAutoDestroyObject(FAITestBase *this,UObject *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FUObjectItem *this_00;
  UObject *local_18 [2];
  
  this_00 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&param_1->field_0xc);
  FUObjectItem::SetRootFlags(this_00,RootSet);
  pFVar2 = (this->SpawnedObjects).AllocatorInstance.Data;
  local_18[0] = param_1;
  if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)(this->SpawnedObjects).ArrayMax * 8))
  {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = (this->SpawnedObjects).ArrayNum;
  piVar1 = &(this->SpawnedObjects).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->SpawnedObjects).AllocatorInstance,piVar1);
  }
  (this->SpawnedObjects).ArrayNum = iVar5 + 1;
  *(UObject **)((this->SpawnedObjects).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_18[0];
  return;
}

// GetTestRunner @ 147053510

FAutomationTestBase * __thiscall FAITestBase::GetTestRunner(FAITestBase *this)

{
  code *pcVar1;
  bool bVar2;
  FAutomationTestBase *pFVar3;
  
  if (this->TestRunner != (FAutomationTestBase *)0x0) {
    return this->TestRunner;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("TestRunner",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\AITestSuite\\Public\\AITestsCommon.h"
                     ,0x46,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FAutomationTestBase *)(*pcVar1)();
    return pFVar3;
  }
  return this->TestRunner;
}

// GetWorld @ 147053580

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UWorld * __thiscall FAITestBase::GetWorld(FAITestBase *this)

{
  code *pcVar1;
  bool bVar2;
  UWorld *pUVar3;
  
  pUVar3 = FAITestHelpers::GetWorld();
  if ((pUVar3 == (UWorld *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("World",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\AITestSuite\\Private\\Tests\\AITestsCommon.cpp"
                         ,0x88,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pUVar3 = (UWorld *)(*pcVar1)();
    return pUVar3;
  }
  return pUVar3;
}

// InstantTest @ 147053850

bool __thiscall FAITestBase::InstantTest(FAITestBase *this)

{
  return false;
}

// SetTestRunner @ 147058690

void __thiscall FAITestBase::SetTestRunner(FAITestBase *this,FAutomationTestBase *param_1)

{
  this->TestRunner = param_1;
  return;
}

// SetUp @ 1470586e0

bool __thiscall FAITestBase::SetUp(FAITestBase *this)

{
  return true;
}

// TearDown @ 147059a60

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall FAITestBase::TearDown(FAITestBase *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  UObjectBase *this_00;
  longlong lVar3;
  code *pcVar4;
  TArray<UObject_*,TSizedDefaultAllocator<32>_> *pTVar5;
  bool bVar6;
  FUObjectItem *pFVar7;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res8 [8];
  TArray<UObject_*,TSizedDefaultAllocator<32>_> *local_res10;
  
  this->bTearedDown = 1;
  local_res10 = &this->SpawnedObjects;
  iVar2 = (this->SpawnedObjects).ArrayNum;
  pFVar9 = (local_res10->AllocatorInstance).Data;
  pFVar1 = pFVar9 + (longlong)iVar2 * 8;
  do {
    pTVar5 = local_res10;
    if (local_res10->ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<UObject_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar9 == pFVar1) {
      pTVar5->ArrayNum = 0;
      if (pTVar5->ArrayMax < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,0,&pTVar5->AllocatorInstance,0,&pTVar5->ArrayMax);
      }
      return;
    }
    this_00 = *(UObjectBase **)pFVar9;
    pFVar7 = FUObjectArray::IndexToObject(&GUObjectArray,this_00->InternalIndex);
    FUObjectItem::ClearRootFlags(pFVar7,RootSet);
    pFVar7 = FUObjectArray::IndexToObject(&GUObjectArray,this_00->InternalIndex);
    if ((((uint)((ulonglong)(pFVar7->field0_0x0).FlagsAndRefCount >> 0x3e) & 1) != 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("!IsRooted()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectBaseUtility.h"
                           ,0xb8,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    UObjectBase::AtomicallySetFlags(this_00,RF_MirroredGarbage);
    pFVar7 = FUObjectArray::IndexToObject(&GUObjectArray,this_00->InternalIndex);
    do {
      lVar3 = (pFVar7->field0_0x0).FlagsAndRefCount;
      uVar8 = (uint)((ulonglong)lVar3 >> 0x20);
      if ((uVar8 >> 0x15 & 1) != 0) break;
      if (((ulonglong)pFVar7 & 7) != 0) {
        FWindowsPlatformAtomics::HandleAtomicsFailure
                  (
                  L"InterlockedCompareExchange int64 requires Dest pointer to be aligned to %d bytes"
                  );
      }
      LOCK();
      bVar6 = lVar3 == (pFVar7->field0_0x0).FlagsAndRefCount;
      if (bVar6) {
        (pFVar7->field0_0x0).FlagsAndRefCount =
             (longlong)(int)uVar8 << 0x20 | (longlong)(int)lVar3 | 0x20000000000000;
      }
      UNLOCK();
    } while (!bVar6);
    pFVar7 = FUObjectArray::IndexToObject(&GUObjectArray,this_00->InternalIndex);
    FUObjectItem::ClearRootFlags(pFVar7,Async);
    pFVar9 = pFVar9 + 8;
  } while( true );
}

// Update @ 14705a3c0

bool __thiscall FAITestBase::Update(FAITestBase *this)

{
  return false;
}

// VerifyLatentResults @ 14705a860

void __thiscall FAITestBase::VerifyLatentResults(FAITestBase *this)

{
  return;
}

