// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 23

// RegisterDependencies @ 141e5f1e0

void __thiscall UObjectBase::RegisterDependencies(UObjectBase *this)

{
  return;
}

// AtomicallyClearFlags @ 141e918c0

void __thiscall UObjectBase::AtomicallyClearFlags(UObjectBase *this,EObjectFlags param_1)

{
  if ((~param_1 & this->ObjectFlags) != this->ObjectFlags) {
    LOCK();
    this->ObjectFlags = this->ObjectFlags & ~param_1;
    UNLOCK();
  }
  return;
}

// AtomicallySetFlags @ 141e918e0

void __thiscall UObjectBase::AtomicallySetFlags(UObjectBase *this,EObjectFlags param_1)

{
  if ((this->ObjectFlags | param_1) != this->ObjectFlags) {
    LOCK();
    this->ObjectFlags = this->ObjectFlags | param_1;
    UNLOCK();
  }
  return;
}

// GetFName @ 141f81bb0

FName __thiscall UObjectBase::GetFName(UObjectBase *this)

{
  FName in_RDX;
  
  *(FName *)in_RDX = (this->NamePrivate).Name;
  return in_RDX;
}

// AddRef @ 142018040

void __thiscall UObjectBase::AddRef(UObjectBase *this)

{
  FUObjectItem *this_00;
  
  this_00 = FUObjectArray::IndexToObject(&GUObjectArray,this->InternalIndex);
  FUObjectItem::AddRef(this_00);
  return;
}

// MarkAsReachable @ 142063c10

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall UObjectBase::MarkAsReachable(UObjectBase *this)

{
  code *pcVar1;
  bool bVar2;
  FUObjectItem *pFVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  EInternalObjectFlags EVar6;
  longlong lVar7;
  FString local_28;
  FString local_18;
  
  pFVar3 = FUObjectArray::IndexToObject(&GUObjectArray,this->InternalIndex);
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
                ((UObjectBaseUtility *)(pFVar3->field1_0x8).Object,&local_18,(UObject *)0x0,None);
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("GIsIncrementalReachabilityPending",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                         ,0x1924,
                         L"%s is marked as MaybeUnreachable but Incremental Reachability Analysis is not in progress"
                        );
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
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
                ((UObjectBaseUtility *)(pFVar3->field1_0x8).Object,&local_28,(UObject *)0x0,None);
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("GIsIncrementalReachabilityPending",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                         ,0x1924,
                         L"%s is marked as MaybeUnreachable but Incremental Reachability Analysis is not in progress"
                        );
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
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

// ReleaseRef @ 14208dee0

void __thiscall UObjectBase::ReleaseRef(UObjectBase *this)

{
  FUObjectItem *this_00;
  longlong lVar1;
  
  this_00 = FUObjectArray::IndexToObject(&GUObjectArray,this->InternalIndex);
  LOCK();
  lVar1 = (this_00->field0_0x0).FlagsAndRefCount;
  (this_00->field0_0x0).FlagsAndRefCount = (this_00->field0_0x0).FlagsAndRefCount + -1;
  UNLOCK();
  lVar1 = lVar1 + -1;
  if (((int)lVar1 == 0) && ((lVar1 >> 0x20 & 0x4e500000U) == 0)) {
    FUObjectItem::MarkRootAsDirty(this_00);
    return;
  }
  return;
}

// UObjectBase @ 142258c70

UObjectBase * __thiscall UObjectBase::UObjectBase(UObjectBase *this,EObjectFlags param_1)

{
  this->ObjectFlags = param_1;
  this->_padding_ = (longlong)&___7UObjectBase__6B_;
  (this->ClassPrivate).ObjectPtr.field0_0x0.DebugPtr = (UClass *)0x0;
  this->InternalIndex = -1;
  (this->NamePrivate).Name = (FName)0x0;
  (this->OuterPrivate).ObjectPtr.field0_0x0.DebugPtr = (UObject *)0x0;
  return this;
}

// UObjectBase @ 142258ca0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObjectBase * __thiscall
UObjectBase::UObjectBase
          (UObjectBase *this,UClass *param_1,EObjectFlags param_2,EInternalObjectFlags param_3,
          UObject *param_4,FName param_5,int param_6,int param_7,FRemoteObjectId param_8)

{
  code *pcVar1;
  bool bVar2;
  UObjectBase *pUVar3;
  
  this->ObjectFlags = param_2;
  this->_padding_ = (longlong)&___7UObjectBase__6B_;
  this->InternalIndex = -1;
  (this->ClassPrivate).ObjectPtr.field0_0x0.DebugPtr = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  (this->NamePrivate).Name = (FName)0x0;
  (this->OuterPrivate).ObjectPtr.field0_0x0.DebugPtr = param_4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_4);
  }
  if ((this->ClassPrivate).ObjectPtr.field0_0x0.DebugPtr == (UClass *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ClassPrivate",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\UObjectBase.cpp"
                       ,0xa1,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pUVar3 = (UObjectBase *)(*pcVar1)();
      return pUVar3;
    }
  }
  AddObject(this,param_5,param_3,param_6,param_7,param_8);
  return this;
}

// ~UObjectBase @ 142259950

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UObjectBase::~UObjectBase(UObjectBase *this)

{
  code *pcVar1;
  bool bVar2;
  FStaticBasicLogRecord *pFVar3;
  
  this->_padding_ = (longlong)&___7UObjectBase__6B_;
  if (DAT_1550202f4 == '\0') {
    return;
  }
  if ((this->ClassPrivate).ObjectPtr.field0_0x0.DebugPtr == (UClass *)0x0) {
    return;
  }
  if (GIsCriticalError != false) {
    return;
  }
  bVar2 = IsThisNotNull(this,"UObjectBase::IsValidLowLevelForDestruction");
  if (bVar2) {
    if ((this->ClassPrivate).ObjectPtr.field0_0x0.DebugPtr != (UClass *)0x0) goto LAB_1422599f3;
    if (2 < (byte)LogUObjectBase._0_1_) {
      pFVar3 = &::LOG_Static;
      goto LAB_1422599c1;
    }
  }
  else if (2 < (byte)LogUObjectBase._0_1_) {
    pFVar3 = &::LOG_Static;
LAB_1422599c1:
    UE::Logging::Private::BasicLog<3>(pFVar3,(FLogCategoryBase *)&LogUObjectBase);
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValidLowLevelForDestruction()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\UObjectBase.cpp"
                     ,0xb4,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
LAB_1422599f3:
  if (((this->NamePrivate).Name != (FName)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("GetFName() == NAME_None",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\UObjectBase.cpp"
                         ,0xb5,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if ((this->InternalIndex != -1) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InternalIndex == INDEX_NONE",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\UObjectBase.cpp"
                         ,0xb6,L"Object destroyed outside of GC (InternalIndex=%d, expected %d)"),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// AddObject @ 14225de60

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UObjectBase::AddObject
          (UObjectBase *this,FName param_1,EInternalObjectFlags param_2,int param_3,int param_4,
          FRemoteObjectId param_5)

{
  code *pcVar1;
  bool bVar2;
  EObjectFlags EVar3;
  EInternalObjectFlags EVar4;
  
  (this->NamePrivate).Name = param_1;
  bVar2 = IsInGameThread();
  EVar3 = this->ObjectFlags;
  EVar4 = param_2 | Async;
  if (bVar2) {
    EVar4 = param_2;
  }
  if ((char)EVar3 < '\0') {
    EVar4 = EVar4 | RootSet;
    EVar3 = EVar3 & (RF_AllocatedInSharedPage|RF_MirroredGarbage|RF_MigratingAsset|
                     RF_HasExternalPackage|RF_WillBeLoaded|RF_ImmutableDefaultObject|
                     RF_NonPIEDuplicateTransient|RF_StrongRefOnFrame|RF_DuplicateTransient|
                     RF_InheritableComponentTemplate|RF_LoadCompleted|RF_TextExportTransient|
                     RF_WasLoaded|RF_DefaultSubObject|RF_BeingRegenerated|RF_FinishDestroyed|
                     RF_BeginDestroyed|RF_NewerVersionExists|RF_NeedPostLoadSubobjects|
                     RF_NeedPostLoad|RF_KeepForCooker|RF_NeedLoad|RF_NeedInitialization|
                     RF_TagGarbageTemp|RF_Transient|RF_ArchetypeObject|RF_ClassDefaultObject|
                     RF_Transactional|RF_MarkAsNative|RF_Standalone|RF_Public);
    this->ObjectFlags = EVar3;
  }
  if ((EVar3 & RF_MarkAsNative) != RF_NoFlags) {
    EVar4 = EVar4 | Native;
    this->ObjectFlags =
         EVar3 & (RF_AllocatedInSharedPage|RF_MirroredGarbage|RF_MigratingAsset|
                  RF_HasExternalPackage|RF_WillBeLoaded|RF_ImmutableDefaultObject|
                  RF_NonPIEDuplicateTransient|RF_StrongRefOnFrame|RF_DuplicateTransient|
                  RF_InheritableComponentTemplate|RF_LoadCompleted|RF_TextExportTransient|
                  RF_WasLoaded|RF_DefaultSubObject|RF_BeingRegenerated|RF_FinishDestroyed|
                  RF_BeginDestroyed|RF_NewerVersionExists|RF_NeedPostLoadSubobjects|RF_NeedPostLoad|
                  RF_KeepForCooker|RF_NeedLoad|RF_NeedInitialization|RF_TagGarbageTemp|
                  RF_MarkAsRootSet|RF_Transient|RF_ArchetypeObject|RF_ClassDefaultObject|
                  RF_Transactional|RF_Standalone|RF_Public);
  }
  FUObjectArray::AllocateUObjectIndex(&GUObjectArray,this,EVar4,param_3,param_4,param_5);
  if ((param_1 == (FName)0x0) || (this->InternalIndex < 0)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InName != NAME_None && InternalIndex >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\UObjectBase.cpp"
                       ,0x107,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  HashObject(this);
  bVar2 = IsValidLowLevel(this);
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidLowLevel()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\UObjectBase.cpp"
                       ,0x109,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// DeferredRegister @ 1422691b0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UObjectBase::DeferredRegister(UObjectBase *this,UClass *param_1,wchar_t *param_2,wchar_t *param_3)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  UPackage *pUVar5;
  FName *pFVar6;
  FUObjectItem *pFVar7;
  FUObjectItem *pFVar8;
  FName local_res8 [2];
  
  if ((DAT_1550202f4 == '\0') &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("UObjectInitialized()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\UObjectBase.cpp"
                         ,0xcc,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pUVar5 = CreatePackage(param_2);
  if ((pUVar5 == (UPackage *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Package",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\UObjectBase.cpp"
                         ,0xcf,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((atomic<unsigned_int>)((uint)pUVar5->PackageFlagsPrivate | 0x10) !=
      pUVar5->PackageFlagsPrivate) {
    LOCK();
    pUVar5->PackageFlagsPrivate = (atomic<unsigned_int>)((uint)pUVar5->PackageFlagsPrivate | 0x10);
    UNLOCK();
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UPackage *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  (this->OuterPrivate).ObjectPtr.field0_0x0.DebugPtr = (UObject *)pUVar5;
  if ((param_1 == (UClass *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("UClassStaticClass",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\UObjectBase.cpp"
                         ,0xd3,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (((this->ClassPrivate).ObjectPtr.field0_0x0.DebugPtr != (UClass *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!ClassPrivate",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\UObjectBase.cpp"
                         ,0xd4,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  (this->ClassPrivate).ObjectPtr.field0_0x0.DebugPtr = param_1;
  pFVar6 = ::FName::FName(local_res8,param_3);
  pFVar8 = (FUObjectItem *)0x0;
  AddObject(this,*pFVar6,Borrowed,-1,0,(FRemoteObjectId)0x0);
  iVar1 = this->InternalIndex;
  if ((iVar1 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                         ,0x443,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar7 = pFVar8;
  if (iVar1 < GUObjectArray.ObjObjects.NumElements) {
    pFVar7 = FChunkedFixedUObjectArray::operator[](&GUObjectArray.ObjObjects,iVar1);
  }
  do {
    lVar2 = (pFVar7->field0_0x0).FlagsAndRefCount;
    if (-1 < lVar2) break;
    if (((ulonglong)pFVar7 & 7) != 0) {
      FWindowsPlatformAtomics::HandleAtomicsFailure
                (L"InterlockedCompareExchange int64 requires Dest pointer to be aligned to %d bytes"
                );
    }
    LOCK();
    bVar4 = lVar2 == (pFVar7->field0_0x0).FlagsAndRefCount;
    if (bVar4) {
      (pFVar7->field0_0x0).FlagsAndRefCount =
           (ulonglong)((uint)((ulonglong)lVar2 >> 0x20) & 0x7fffffff) << 0x20 | (longlong)(int)lVar2
      ;
    }
    UNLOCK();
  } while (!bVar4);
  iVar1 = this->InternalIndex;
  if (iVar1 <= GUObjectArray.ObjLastNonGCIndex) {
    if ((iVar1 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                           ,0x443,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (iVar1 < GUObjectArray.ObjObjects.NumElements) {
      pFVar8 = FChunkedFixedUObjectArray::operator[](&GUObjectArray.ObjObjects,iVar1);
    }
    if ((((uint)((ulonglong)(pFVar8->field0_0x0).FlagsAndRefCount >> 0x3e) & 1) == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("!GUObjectArray.IsDisregardForGC(this) || GUObjectArray.IndexToObject(InternalIndex)->IsRootSet()"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\UObjectBase.cpp"
                           ,0xe9,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  return;
}

// GetExternalPackage @ 14226f1c0

UPackage * __thiscall UObjectBase::GetExternalPackage(UObjectBase *this)

{
  UPackage *pUVar1;
  
  if ((this->OuterPrivate).ObjectPtr.field0_0x0.DebugPtr == (UObject *)0x0) {
    pUVar1 = CastChecked<UPackage,UObject>((UObject *)this);
    return pUVar1;
  }
  pUVar1 = (UPackage *)0x0;
  if ((this->ObjectFlags >> 0x1c & 1) != 0) {
    pUVar1 = GetObjectExternalPackageThreadSafe(this);
  }
  return pUVar1;
}

// GetExternalPackageInternal @ 14226f200

UPackage * __thiscall UObjectBase::GetExternalPackageInternal(UObjectBase *this)

{
  int iVar1;
  UClass *pUVar2;
  UClass *pUVar3;
  FString *pFVar4;
  FUObjectHashTables *pFVar5;
  TTuple<UObjectBase_*,UPackage_*> *pTVar6;
  wchar_t *pwVar7;
  wchar_t *pwVar8;
  FString FStack_28;
  FString FStack_18;
  
  if ((this->OuterPrivate).ObjectPtr.field0_0x0.DebugPtr == (UObject *)0x0) {
    if (this == (UObjectBase *)0x0) {
      pFVar4 = GetTypeName<UPackage>(&FStack_28);
      if ((pFVar4->Data).ArrayNum == 0) {
        pwVar7 = L"";
      }
      else {
        pwVar7 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(L"nullptr",pwVar7);
    }
    pUVar3 = Z_Construct_UClass_UPackage_NoRegister();
    pUVar2 = (this->ClassPrivate).ObjectPtr.field0_0x0.DebugPtr;
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= (int)pUVar2->_padding_) &&
       ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar1 * 8) == &pUVar3->_padding_)
       ) {
      return (UPackage *)this;
    }
    pFVar4 = GetTypeName<UPackage>(&FStack_28);
    pwVar7 = L"";
    if ((pFVar4->Data).ArrayNum == 0) {
      pwVar8 = L"";
    }
    else {
      pwVar8 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
    }
    pFVar4 = GetFullNameForCastLogError<UObject>(&FStack_18,(UObject *)this);
    if ((pFVar4->Data).ArrayNum != 0) {
      pwVar7 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(pwVar7,pwVar8);
  }
  if ((this->ObjectFlags >> 0x1c & 1) == 0) {
    return (UPackage *)0x0;
  }
  pFVar5 = FUObjectHashTables::Get();
  pTVar6 = TSet<TTuple<UObjectBase_*,UPackage_*>,TDefaultMapHashableKeyFuncs<UObjectBase_*,UPackage_*,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<UObjectBase_*,UPackage_*>,TDefaultMapHashableKeyFuncs<UObjectBase_*,UPackage_*,0>,FDefaultSetAllocator>
                   *)&pFVar5->ObjectToPackageMap,this);
  if (pTVar6 != (TTuple<UObjectBase_*,UPackage_*> *)0x0) {
    return *(UPackage **)&pTVar6->field_0x8;
  }
  return (UPackage *)0x0;
}

// GetFNameForStatID @ 14226f230

FName __thiscall UObjectBase::GetFNameForStatID(UObjectBase *this)

{
  FName in_RDX;
  
  *(FName *)in_RDX = (this->NamePrivate).Name;
  return in_RDX;
}

// IsValidLowLevel @ 142275520

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UObjectBase::IsValidLowLevel(UObjectBase *this)

{
  int iVar1;
  bool bVar2;
  FUObjectItem *pFVar3;
  
  bVar2 = IsValidLowLevelForDestruction(this);
  if (bVar2) {
    iVar1 = this->InternalIndex;
    if (iVar1 == -1) {
      if (2 < (byte)LogUObjectArray._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogUObjectArray);
        return false;
      }
    }
    else if ((iVar1 < GUObjectArray.ObjObjects.NumElements) && (-1 < iVar1)) {
      pFVar3 = FChunkedFixedUObjectArray::operator[](&GUObjectArray.ObjObjects,iVar1);
      if ((pFVar3->field1_0x8).Object == (UObjectBase *)0x0) {
        if (2 < (byte)LogUObjectArray._0_1_) {
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogUObjectArray);
          return false;
        }
      }
      else {
        if ((pFVar3->field1_0x8).Object == this) {
          return true;
        }
        if (2 < (byte)LogUObjectArray._0_1_) {
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogUObjectArray);
          return false;
        }
      }
    }
    else if (2 < (byte)LogUObjectArray._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogUObjectArray);
    }
  }
  return false;
}

// IsValidLowLevelFast @ 142275610

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UObjectBase::IsValidLowLevelFast(UObjectBase *this,bool param_1)

{
  UClass *this_00;
  UObject *pUVar1;
  bool bVar2;
  FStaticBasicLogRecord *pFVar3;
  
  bVar2 = IsThisNotNull(this,"UObjectBase::IsValidLowLevelFast");
  if ((bVar2) && ((UObjectBase *)&DAT_00000100 <= this)) {
    if (((ulonglong)this & 7) == 0) {
      if (this->_padding_ == 0) {
        if ((byte)LogUObjectBase._0_1_ < 2) {
          return false;
        }
        pFVar3 = &::LOG_Static;
      }
      else {
        this_00 = (this->ClassPrivate).ObjectPtr.field0_0x0.DebugPtr;
        if ((((byte)this_00 | SUB81((this->OuterPrivate).ObjectPtr.field0_0x0,0)) & 7) == 0) {
          if ((this_00 == (UClass *)0x0) ||
             (((pUVar1 = (this_00->ClassDefaultObject).field0_0x0.DebugPtr, pUVar1 == (UObject *)0x0
               || (((ulonglong)pUVar1 & 7) != 0)) && (-1 < (int)this_00->ClassFlags)))) {
            if ((byte)LogUObjectBase._0_1_ < 2) {
              return false;
            }
            pFVar3 = &::LOG_Static;
          }
          else if ((!param_1) || (bVar2 = IsValidLowLevelFast((UObjectBase *)this_00,false), bVar2))
          {
            if (((this->InternalIndex < GUObjectArray.ObjObjects.NumElements) &&
                (-1 < this->InternalIndex)) &&
               (bVar2 = ::FName::IsWithinBounds
                                  ((FNameEntryId)(this->NamePrivate).Name.ComparisonIndex.Value),
               bVar2)) {
              return true;
            }
            if ((byte)LogUObjectBase._0_1_ < 2) {
              return false;
            }
            pFVar3 = (FStaticBasicLogRecord *)&PTR_u_Object_array_in_150888260;
          }
          else {
            if ((byte)LogUObjectBase._0_1_ < 2) {
              return false;
            }
            pFVar3 = &::LOG_Static;
          }
        }
        else {
          if ((byte)LogUObjectBase._0_1_ < 2) {
            return false;
          }
          pFVar3 = &::LOG_Static;
        }
      }
    }
    else {
      if ((byte)LogUObjectBase._0_1_ < 2) {
        return false;
      }
      pFVar3 = &::LOG_Static;
    }
  }
  else {
    if ((byte)LogUObjectBase._0_1_ < 2) {
      return false;
    }
    pFVar3 = &::LOG_Static;
  }
  UE::Logging::Private::BasicLog<2>(pFVar3,(FLogCategoryBase *)&LogUObjectBase);
  return false;
}

// IsValidLowLevelForDestruction @ 142275770

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UObjectBase::IsValidLowLevelForDestruction(UObjectBase *this)

{
  bool bVar1;
  
  bVar1 = IsThisNotNull(this,"UObjectBase::IsValidLowLevelForDestruction");
  if (bVar1) {
    if ((this->ClassPrivate).ObjectPtr.field0_0x0.DebugPtr != (UClass *)0x0) {
      return true;
    }
    if (2 < (byte)LogUObjectBase._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogUObjectBase);
    }
  }
  else if (2 < (byte)LogUObjectBase._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogUObjectBase);
    return false;
  }
  return false;
}

// LowLevelRename @ 142278c70

void __thiscall UObjectBase::LowLevelRename(UObjectBase *this,FName param_1,UObject *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FUObjectItem *pFVar4;
  
  iVar1 = this->InternalIndex;
  if (iVar1 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                       ,0x443,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (iVar1 < GUObjectArray.ObjObjects.NumElements) {
    pFVar4 = FChunkedFixedUObjectArray::operator[](&GUObjectArray.ObjObjects,iVar1);
  }
  else {
    pFVar4 = (FUObjectItem *)0x0;
  }
  (pFVar4->StatID).StatIdPtr = &TStatId::TStatId_NAME_None;
  UnhashObject(this);
  if (this->InternalIndex < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InternalIndex >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\UObjectBase.cpp"
                       ,0x12f,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  (this->NamePrivate).Name = param_1;
  if (param_2 != (UObject *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(param_2);
    }
    (this->OuterPrivate).ObjectPtr.field0_0x0.DebugPtr = param_2;
  }
  HashObject(this);
  return;
}

// Register @ 14227f110

void __thiscall
UObjectBase::Register
          (UObjectBase *this,_func___cdecl_UClass_ptr *param_1,wchar_t *param_2,wchar_t *param_3)

{
  code *pcVar1;
  FPendingRegistrant *pFVar2;
  bool bVar3;
  TSet<TTuple<UObjectBase_*,FPendingRegistrantInfo>,TDefaultMapHashableKeyFuncs<UObjectBase_*,FPendingRegistrantInfo,0>,FDefaultSetAllocator>
  *this_00;
  FPendingRegistrant *pFVar4;
  FLLMScope local_res8 [2];
  FLLMScope local_res10 [2];
  TPairInitializer<UObjectBase_*_&&,FPendingRegistrantInfo_&&> local_res18;
  UObjectBase *local_78;
  FMemScope local_70;
  FMemScope local_68;
  UObjectBase **local_60;
  wchar_t **local_58;
  wchar_t *local_50;
  wchar_t *local_48;
  _func___cdecl_UClass_ptr *local_40;
  
  FLLMScope::FLLMScope(local_res10,UObject,false,None,Default,true);
  FMemScope::FMemScope(&local_68,UObject,true);
  FLLMScope::FLLMScope
            (local_res8,LLMTagDeclaration_UObject_UObjectBase.UniqueName,false,None,Default,true);
  local_res18.Value = (FPendingRegistrantInfo *)LLMTagDeclaration_UObject_UObjectBase.UniqueName;
  FMemScope::FMemScope(&local_70,(FName *)&local_res18.Value,true);
  this_00 = (TSet<TTuple<UObjectBase_*,FPendingRegistrantInfo>,TDefaultMapHashableKeyFuncs<UObjectBase_*,FPendingRegistrantInfo,0>,FDefaultSetAllocator>
             *)FPendingRegistrantInfo::GetMap();
  pFVar4 = ::operator_new(0x10);
  if (pFVar4 == (FPendingRegistrant *)0x0) {
    pFVar4 = (FPendingRegistrant *)0x0;
  }
  else {
    pFVar4->Object = this;
    pFVar4->NextAutoRegister = (FPendingRegistrant *)0x0;
  }
  local_60 = &local_78;
  local_58 = &local_50;
  local_78 = this;
  local_50 = param_3;
  local_48 = param_2;
  local_40 = param_1;
  TSet<TTuple<UObjectBase_*,FPendingRegistrantInfo>,TDefaultMapHashableKeyFuncs<UObjectBase_*,FPendingRegistrantInfo,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<UObjectBase_*_&&,FPendingRegistrantInfo_&&>_>
            (this_00,&local_res18,(bool *)&local_60);
  if (GLastPendingRegistrant == (FPendingRegistrant *)0x0) {
    pFVar2 = pFVar4;
    if ((GFirstPendingRegistrant != (FPendingRegistrant *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("!GFirstPendingRegistrant",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\UObjectBase.cpp"
                           ,0x23d,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    GLastPendingRegistrant->NextAutoRegister = pFVar4;
    pFVar2 = GFirstPendingRegistrant;
  }
  GFirstPendingRegistrant = pFVar2;
  GLastPendingRegistrant = pFVar4;
  FMemScope::~FMemScope(&local_70);
  FLLMScope::~FLLMScope(local_res8);
  FMemScope::~FMemScope(&local_68);
  FLLMScope::~FLLMScope(local_res10);
  return;
}

// Register @ 14227f2a0

void __thiscall UObjectBase::Register(UObjectBase *this,wchar_t *param_1,wchar_t *param_2)

{
  code *pcVar1;
  FPendingRegistrant *pFVar2;
  bool bVar3;
  TSet<TTuple<UObjectBase_*,FPendingRegistrantInfo>,TDefaultMapHashableKeyFuncs<UObjectBase_*,FPendingRegistrantInfo,0>,FDefaultSetAllocator>
  *this_00;
  FPendingRegistrant *pFVar4;
  FLLMScope local_res8 [2];
  FLLMScope local_res10 [2];
  TPairInitializer<UObjectBase_*_&&,FPendingRegistrantInfo_&&> local_res18;
  UObjectBase *local_68;
  FMemScope local_60;
  FMemScope local_58;
  UObjectBase **local_50;
  wchar_t **local_48;
  wchar_t *local_40;
  wchar_t *local_38;
  code *local_30;
  
  FLLMScope::FLLMScope(local_res10,UObject,false,None,Default,true);
  FMemScope::FMemScope(&local_58,UObject,true);
  FLLMScope::FLLMScope
            (local_res8,LLMTagDeclaration_UObject_UObjectBase.UniqueName,false,None,Default,true);
  local_res18.Value = (FPendingRegistrantInfo *)LLMTagDeclaration_UObject_UObjectBase.UniqueName;
  FMemScope::FMemScope(&local_60,(FName *)&local_res18.Value,true);
  this_00 = (TSet<TTuple<UObjectBase_*,FPendingRegistrantInfo>,TDefaultMapHashableKeyFuncs<UObjectBase_*,FPendingRegistrantInfo,0>,FDefaultSetAllocator>
             *)FPendingRegistrantInfo::GetMap();
  pFVar4 = ::operator_new(0x10);
  if (pFVar4 == (FPendingRegistrant *)0x0) {
    pFVar4 = (FPendingRegistrant *)0x0;
  }
  else {
    pFVar4->Object = this;
    pFVar4->NextAutoRegister = (FPendingRegistrant *)0x0;
  }
  local_30 = UClass::StaticClass;
  local_50 = &local_68;
  local_48 = &local_40;
  local_68 = this;
  local_40 = param_2;
  local_38 = param_1;
  TSet<TTuple<UObjectBase_*,FPendingRegistrantInfo>,TDefaultMapHashableKeyFuncs<UObjectBase_*,FPendingRegistrantInfo,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<UObjectBase_*_&&,FPendingRegistrantInfo_&&>_>
            (this_00,&local_res18,(bool *)&local_50);
  if (GLastPendingRegistrant == (FPendingRegistrant *)0x0) {
    pFVar2 = pFVar4;
    if ((GFirstPendingRegistrant != (FPendingRegistrant *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("!GFirstPendingRegistrant",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\UObjectBase.cpp"
                           ,0x23d,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    GLastPendingRegistrant->NextAutoRegister = pFVar4;
    pFVar2 = GFirstPendingRegistrant;
  }
  GFirstPendingRegistrant = pFVar2;
  GLastPendingRegistrant = pFVar4;
  FMemScope::~FMemScope(&local_60);
  FLLMScope::~FLLMScope(local_res8);
  FMemScope::~FMemScope(&local_58);
  FLLMScope::~FLLMScope(local_res10);
  return;
}

// RemoveClassPrefix @ 1422825b0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FString * __cdecl UObjectBase::RemoveClassPrefix(FString *__return_storage_ptr__,wchar_t *param_1)

{
  bool bVar1;
  int iVar2;
  size_t sVar3;
  
  ::FString::FString(__return_storage_ptr__,param_1);
  ::FString::RemoveAt(__return_storage_ptr__,0,1,No);
  if (DeprecatedPrefix == (wchar_t *)0x0) {
    iVar2 = 0;
  }
  else {
    sVar3 = wcslen(DeprecatedPrefix);
    iVar2 = (int)sVar3;
  }
  bVar1 = ::FString::StartsWith(__return_storage_ptr__,DeprecatedPrefix,iVar2,IgnoreCase);
  if (bVar1) {
    sVar3 = wcslen(DeprecatedPrefix);
    ::FString::RemoveAt(__return_storage_ptr__,0,(int)sVar3,No);
  }
  return __return_storage_ptr__;
}

// SetExternalPackage @ 1422854a0

void __thiscall UObjectBase::SetExternalPackage(UObjectBase *this,UPackage *param_1)

{
  int iVar1;
  UClass *pUVar2;
  code *pcVar3;
  bool bVar4;
  UClass *pUVar5;
  
  if ((this->OuterPrivate).ObjectPtr.field0_0x0.DebugPtr != (UObject *)0x0) {
    if (param_1 == (UPackage *)0x0) {
      UnhashObjectExternalPackage(this);
      return;
    }
    HashObjectExternalPackage(this,param_1);
    return;
  }
  pUVar2 = (this->ClassPrivate).ObjectPtr.field0_0x0.DebugPtr;
  pUVar5 = Z_Construct_UClass_UPackage_NoRegister();
  if (pUVar5 != (UClass *)0x0) {
    iVar1 = (int)pUVar5->_padding_;
    if (((int)pUVar2->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar1 * 8) != &pUVar5->_padding_)
       ) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      if (param_1 == (UPackage *)this) {
        return;
      }
      if (param_1 == (UPackage *)0x0) {
        return;
      }
    }
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("GetClass()->IsChildOf(UPackage::StaticClass()) && (InPackage == this || InPackage == nullptr)"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\UObjectBase.cpp"
                     ,0x157,L"");
  if (!bVar4) {
    return;
  }
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

