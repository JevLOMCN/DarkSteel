// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 3

// HandleObjectReference @ 1422721e0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
`UE::FDynamicallyTypedValue::MarkTypeReachableIfIncrementalReachabilityPending'::__l2::
FTypeReferenceCollector::HandleObjectReference
          (void *this,UObject **param_1,UObject *param_2,FProperty *param_3)

{
  code *pcVar1;
  bool bVar2;
  FUObjectItem *pFVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  EInternalObjectFlags EVar6;
  longlong lVar7;
  FString FStack_28;
  FString FStack_18;
  
  if (*param_1 == (UObject *)0x0) {
    return;
  }
  pFVar3 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&(*param_1)->field_0xc);
  if ((UE::GC::Private::FGCFlags::MaybeUnreachableObjectFlag &
      (EInternalObjectFlags)((ulonglong)(pFVar3->field0_0x0).FlagsAndRefCount >> 0x20)) == Borrowed)
  {
    if (pFVar3->ClusterRootIndex < 1) {
      return;
    }
    pFVar3 = FUObjectArray::IndexToObject(&GUObjectArray,pFVar3->ClusterRootIndex);
    if ((UE::GC::Private::FGCFlags::MaybeUnreachableObjectFlag &
        (EInternalObjectFlags)((ulonglong)(pFVar3->field0_0x0).FlagsAndRefCount >> 0x20)) ==
        Borrowed) {
      return;
    }
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
      UObjectBaseUtility::GetFullName
                ((UObjectBaseUtility *)(pFVar3->field1_0x8).Object,&FStack_18,(UObject *)0x0,None);
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("GIsIncrementalReachabilityPending",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                         ,0x1924,
                         L"%s is marked as MaybeUnreachable but Incremental Reachability Analysis is not in progress"
                        );
      if (FStack_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_18.Data.AllocatorInstance.Data);
      }
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    EVar6 = UE::GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
    lVar7 = (longlong)(int)UE::GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
    if ((UE::GC::Private::FGCFlags::MaybeUnreachableObjectFlag &
        (EInternalObjectFlags)((ulonglong)(pFVar3->field0_0x0).FlagsAndRefCount >> 0x20)) ==
        Borrowed) {
      return;
    }
    uVar4 = (pFVar3->field0_0x0).FlagsAndRefCount;
    do {
      LOCK();
      uVar5 = (pFVar3->field0_0x0).FlagsAndRefCount;
      bVar2 = uVar4 == uVar5;
      if (bVar2) {
        (pFVar3->field0_0x0).FlagsAndRefCount = uVar4 & ~(lVar7 << 0x20);
        uVar5 = uVar4;
      }
      UNLOCK();
      uVar4 = uVar5;
    } while (!bVar2);
  }
  else {
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
      UObjectBaseUtility::GetFullName
                ((UObjectBaseUtility *)(pFVar3->field1_0x8).Object,&FStack_28,(UObject *)0x0,None);
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("GIsIncrementalReachabilityPending",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                         ,0x1924,
                         L"%s is marked as MaybeUnreachable but Incremental Reachability Analysis is not in progress"
                        );
      if (FStack_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_28.Data.AllocatorInstance.Data);
      }
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    EVar6 = UE::GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
    lVar7 = (longlong)(int)UE::GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
    if ((UE::GC::Private::FGCFlags::MaybeUnreachableObjectFlag &
        (EInternalObjectFlags)((ulonglong)(pFVar3->field0_0x0).FlagsAndRefCount >> 0x20)) ==
        Borrowed) {
      return;
    }
    uVar4 = (pFVar3->field0_0x0).FlagsAndRefCount;
    do {
      LOCK();
      uVar5 = (pFVar3->field0_0x0).FlagsAndRefCount;
      bVar2 = uVar4 == uVar5;
      if (bVar2) {
        (pFVar3->field0_0x0).FlagsAndRefCount = uVar4 & ~(lVar7 << 0x20);
        uVar5 = uVar4;
      }
      UNLOCK();
      uVar4 = uVar5;
    } while (!bVar2);
  }
  LOCK();
  (pFVar3->field0_0x0).FlagsAndRefCount =
       (pFVar3->field0_0x0).FlagsAndRefCount |
       (longlong)(int)UE::GC::Private::FGCFlags::ReachableObjectFlag << 0x20;
  UNLOCK();
  if ((EVar6 & (EInternalObjectFlags)(uVar5 >> 0x20)) != Borrowed) {
    if (-1 < pFVar3->ClusterRootIndex) {
      TExpandingChunkedList<UObject_*,64>::Push
                (&UE::GC::Private::GReachableObjects,(UObject *)(pFVar3->field1_0x8).Object);
      return;
    }
    TExpandingChunkedList<FUObjectItem_*,64>::Push(&UE::GC::Private::GReachableClusters,pFVar3);
  }
  return;
}

// IsIgnoringArchetypeRef @ 1422749b0

bool __thiscall
`UE::FDynamicallyTypedValue::MarkTypeReachableIfIncrementalReachabilityPending'::__l2::
FTypeReferenceCollector::IsIgnoringArchetypeRef(void *this)

{
  return false;
}

// IsIgnoringTransient @ 1422749e0

bool __thiscall
`UE::FDynamicallyTypedValue::MarkTypeReachableIfIncrementalReachabilityPending'::__l2::
FTypeReferenceCollector::IsIgnoringTransient(void *this)

{
  return false;
}

