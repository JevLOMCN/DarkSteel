// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowEngine
// Functions: 20

// StaticClass @ 1462c3660

UClass * __cdecl UDataflowBaseContent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDataflowBaseContent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/DataflowEngine",L"DataflowBaseContent",
               &Z_Registration_Info_UClass_UDataflowBaseContent.InnerSingleton,
               StaticRegisterNativesUDataflowBaseContent,200,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDataflowBaseContent>,
               InternalVTableHelperCtorCaller<UDataflowBaseContent>,local_res8,
               UDataflowContextObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDataflowBaseContent.InnerSingleton;
}

// UDataflowBaseContent @ 1462cef10

UDataflowBaseContent * __thiscall
UDataflowBaseContent::UDataflowBaseContent(UDataflowBaseContent *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined8 *)&(this->OnContentDataChanged).field_0x18 = 2;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UDataflowBaseContent__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined1 *)&this->_padding_ = 0;
  *(undefined8 *)&this->OnContentDataChanged = 0;
  *(undefined8 *)&(this->OnContentDataChanged).field_0x8 = 0;
  *(undefined8 *)&(this->OnContentDataChanged).field_0x10 = 0;
  ::FString::FString(&this->DataflowTerminal,"");
  (this->TerminalAsset).field0_0x0.DebugPtr = (UObject *)0x0;
  (this->LastModifiedTimestamp).Value = UE::Dataflow::FTimestamp::Invalid;
  this->bIsConstructionDirty = true;
  this->bIsSimulationDirty = true;
  this->bIsSaved = false;
  (this->PreviewClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  return this;
}

// UDataflowBaseContent @ 1462cefd0

UDataflowBaseContent * __thiscall
UDataflowBaseContent::UDataflowBaseContent(UDataflowBaseContent *this)

{
  FObjectInitializer *pFVar1;
  
  pFVar1 = FObjectInitializer::Get();
  UObject::UObject((UObject *)this,pFVar1);
  *(undefined8 *)&(this->OnContentDataChanged).field_0x18 = 2;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UDataflowBaseContent__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined1 *)&this->_padding_ = 0;
  *(undefined8 *)&this->OnContentDataChanged = 0;
  *(undefined8 *)&(this->OnContentDataChanged).field_0x8 = 0;
  *(undefined8 *)&(this->OnContentDataChanged).field_0x10 = 0;
  ::FString::FString(&this->DataflowTerminal,"");
  (this->TerminalAsset).field0_0x0.DebugPtr = (UObject *)0x0;
  (this->LastModifiedTimestamp).Value = UE::Dataflow::FTimestamp::Invalid;
  this->bIsConstructionDirty = true;
  this->bIsSimulationDirty = true;
  this->bIsSaved = false;
  (this->PreviewClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  return this;
}

// ~UDataflowBaseContent @ 1462d00f0

void __thiscall UDataflowBaseContent::~UDataflowBaseContent(UDataflowBaseContent *this)

{
  FScriptContainerElement *pFVar1;
  UClass *pUVar2;
  void *pvVar3;
  UObject *pUVar4;
  
  this->_padding_ = (longlong)&___7UDataflowBaseContent__6B_;
  if (this->_padding_ == 0) goto LAB_1462d01b7;
  pUVar4 = *(UObject **)(this->_padding_ + 0x360);
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if (pUVar4 == (UObject *)0x0) goto LAB_1462d01b7;
    UE::GC::MarkAsReachable(pUVar4);
  }
  if (pUVar4 == (UObject *)0x0) goto LAB_1462d01b7;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  pUVar4 = (UObject *)0x0;
  if (this->_padding_ == 0) {
LAB_1462d017e:
    if (UE::GC::GIsIncrementalReachabilityPending == false) goto LAB_1462d0191;
    if (pUVar4 == (UObject *)0x0) goto LAB_1462d01b7;
    UE::GC::MarkAsReachable(pUVar4);
  }
  else {
    pUVar4 = *(UObject **)(this->_padding_ + 0x360);
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if (pUVar4 != (UObject *)0x0) {
        UE::GC::MarkAsReachable(pUVar4);
      }
      goto LAB_1462d017e;
    }
LAB_1462d0191:
    if (pUVar4 == (UObject *)0x0) goto LAB_1462d01b7;
  }
  pUVar2 = UDataflowContentOwner::StaticClass();
  pvVar3 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)pUVar4,pUVar2);
  if (pvVar3 != (void *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)((longlong)pvVar3 + 8),this);
  }
LAB_1462d01b7:
  pFVar1 = (this->DataflowTerminal).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnContentDataChanged).field_0x8,
             *(int *)&(this->OnContentDataChanged).field_0x10);
  pvVar3 = *(void **)&(this->OnContentDataChanged).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnContentDataChanged);
  this->_padding_ = (longlong)&___7UDataflowContextObject__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)this->_padding_);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)this->_padding_);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)this->_padding_);
  UObject::~UObject((UObject *)this);
  return;
}

// AddContentObjects @ 1462d1dd0

void __thiscall
UDataflowBaseContent::AddContentObjects(UDataflowBaseContent *this,FReferenceCollector *param_1)

{
  return;
}

// AddReferencedObjects @ 1462d2470

void __cdecl
UDataflowBaseContent::AddReferencedObjects(UObject *param_1,FReferenceCollector *param_2)

{
  UDataflowBaseContent *pUVar1;
  FString *pFVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UObject *)0x0) {
    pFVar2 = GetTypeName<UDataflowBaseContent>(&local_28);
    if ((pFVar2->Data).ArrayNum == 0) {
      pwVar3 = L"";
    }
    else {
      pwVar3 = (wchar_t *)(pFVar2->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar3);
  }
  pUVar1 = Cast<UDataflowBaseContent,UObject>(param_1);
  if (pUVar1 != (UDataflowBaseContent *)0x0) {
    if (pUVar1->_padding_ != 0) {
      (**(code **)(param_2->_padding_ + 0x88))(param_2,pUVar1->_padding_ + 0x360,0,0);
      (**(code **)(param_2->_padding_ + 0x88))(param_2,&pUVar1->_padding_,0,0);
    }
    UDataflowContextObject::AddReferencedObjects(param_1,param_2);
    return;
  }
  pFVar2 = GetTypeName<UDataflowBaseContent>(&local_28);
  pwVar3 = L"";
  if ((pFVar2->Data).ArrayNum == 0) {
    pwVar4 = L"";
  }
  else {
    pwVar4 = (wchar_t *)(pFVar2->Data).AllocatorInstance.Data;
  }
  pFVar2 = GetFullNameForCastLogError<UObject>(&local_18,param_1);
  if ((pFVar2->Data).ArrayNum != 0) {
    pwVar3 = (wchar_t *)(pFVar2->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar3,pwVar4);
}

// GetDataflowOwner @ 1462dcae0

TObjectPtr<UObject> __thiscall UDataflowBaseContent::GetDataflowOwner(UDataflowBaseContent *this)

{
  TObjectPtr<UObject>_u_0 in_RDX;
  UObject *pUVar1;
  
  pUVar1 = (UObject *)0x0;
  if (((this->_padding_ != 0) &&
      (pUVar1 = *(UObject **)(this->_padding_ + 0x360), UE::GC::GIsIncrementalReachabilityPending))
     && (pUVar1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar1);
  }
  *(UObject **)in_RDX.DebugPtr = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar1);
  }
  return (TObjectPtr<UObject>)in_RDX;
}

// GetPrivateStaticClass @ 1462ddaf0

UClass * __cdecl UDataflowBaseContent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDataflowBaseContent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/DataflowEngine",L"DataflowBaseContent",
               &Z_Registration_Info_UClass_UDataflowBaseContent.InnerSingleton,
               StaticRegisterNativesUDataflowBaseContent,200,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDataflowBaseContent>,
               InternalVTableHelperCtorCaller<UDataflowBaseContent>,local_res8,
               UDataflowContextObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDataflowBaseContent.InnerSingleton;
}

// OverrideActorProperty @ 1462e06f0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
UDataflowBaseContent::OverrideActorProperty
          (TObjectPtr<AActor> *param_1,TObjectPtr<UObject> param_2,FName *param_3)

{
  FProperty *this;
  undefined8 *puVar1;
  bool bVar2;
  
  if (((param_1->field0_0x0).DebugPtr != (AActor *)0x0) && (*(longlong *)param_2.field0_0x0 != 0)) {
    this = UStruct::FindPropertyByName
                     ((UStruct *)((param_1->field0_0x0).DebugPtr)->_padding_,*param_3);
    if ((this != (FProperty *)0x0) && ((*(uint *)(this->_padding_ + 0x18) >> 0x10 & 1) != 0)) {
      if (this[1]._padding_ == 0) {
        bVar2 = *(longlong *)(*(longlong *)param_2.field0_0x0 + 0x10) == 0;
      }
      else {
        bVar2 = this[1]._padding_ == *(longlong *)(*(longlong *)param_2.field0_0x0 + 0x10);
      }
      if (bVar2) {
        puVar1 = FProperty::ContainerUObjectPtrToValuePtrInternal
                           (this,(UObject *)(param_1->field0_0x0).DebugPtr,0);
        if (puVar1 != (undefined8 *)0x0) {
          *puVar1 = *(undefined8 *)param_2.field0_0x0;
        }
      }
    }
  }
  return;
}

// Serialize @ 1462e43c0

void __thiscall UDataflowBaseContent::Serialize(UDataflowBaseContent *this,FArchive *param_1)

{
  code *pcVar1;
  bool bVar2;
  TSharedRef<UE::Dataflow::TEngineContext<UE::Dataflow::FContextSingle>,1> *pTVar3;
  longlong *plVar4;
  undefined8 local_res8;
  TEngineContext<UE::Dataflow::FContextSingle> *local_28;
  FSharedReferencer<1> local_20;
  TSharedRef<UE::Dataflow::TEngineContext<UE::Dataflow::FContextSingle>,1> local_18;
  
  UObject::Serialize((UObject *)this,param_1);
  ::operator<<(param_1,&this->LastModifiedTimestamp);
  plVar4 = &this->_padding_;
  if (*plVar4 == 0) {
    local_res8 = 0;
    pTVar3 = MakeShared<UE::Dataflow::TEngineContext<UE::Dataflow::FContextSingle>,1,std::nullptr_t>
                       (&local_18,(void **)&local_res8);
    local_20.ReferenceController = (pTVar3->SharedReferenceCount).ReferenceController;
    local_28 = pTVar3->Object;
    if (local_20.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_20.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_20.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((TEngineContext<UE::Dataflow::FContextSingle> **)plVar4 != &local_28) {
      *plVar4 = (longlong)local_28;
      local_28 = (TEngineContext<UE::Dataflow::FContextSingle> *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                ((FSharedReferencer<1> *)&this->_padding_,&local_20);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_20.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
    if (*plVar4 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001462e449b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)*plVar4 + 0x60))((longlong *)*plVar4,param_1);
  return;
}

// Serialize @ 1462e44b0

void __thiscall
UDataflowBaseContent::Serialize(UDataflowBaseContent *this,FStructuredArchiveRecord param_1)

{
  code *pcVar1;
  bool bVar2;
  FArchive *pFVar3;
  TSharedRef<UE::Dataflow::TEngineContext<UE::Dataflow::FContextSingle>,1> *pTVar4;
  longlong *plVar5;
  FSlotBase local_res8;
  undefined8 local_res10;
  TEngineContext<UE::Dataflow::FContextSingle> *local_28;
  FSharedReferencer<1> local_20;
  TSharedRef<UE::Dataflow::TEngineContext<UE::Dataflow::FContextSingle>,1> local_18;
  
  local_res8.StructuredArchive = (FStructuredArchive *)param_1;
  pFVar3 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(&local_res8);
  UObject::Serialize((UObject *)this,pFVar3);
  ::operator<<(pFVar3,&this->LastModifiedTimestamp);
  plVar5 = &this->_padding_;
  if (*plVar5 == 0) {
    local_res10 = 0;
    pTVar4 = MakeShared<UE::Dataflow::TEngineContext<UE::Dataflow::FContextSingle>,1,std::nullptr_t>
                       (&local_18,(void **)&local_res10);
    local_20.ReferenceController = (pTVar4->SharedReferenceCount).ReferenceController;
    local_28 = pTVar4->Object;
    if (local_20.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_20.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_20.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((TEngineContext<UE::Dataflow::FContextSingle> **)plVar5 != &local_28) {
      *plVar5 = (longlong)local_28;
      local_28 = (TEngineContext<UE::Dataflow::FContextSingle> *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                ((FSharedReferencer<1> *)&this->_padding_,&local_20);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_20.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
    if (*plVar5 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  (**(code **)(*(longlong *)*plVar5 + 0x60))((longlong *)*plVar5,pFVar3);
  return;
}

// SetActorProperties @ 1462e4820

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UDataflowBaseContent::SetActorProperties(UDataflowBaseContent *this,TObjectPtr<AActor> *param_1)

{
  FProperty *this_00;
  undefined8 *puVar1;
  UObject *pUVar2;
  bool bVar3;
  FName local_res8;
  
  ::FName::FName(&local_res8,L"DataflowAsset");
  pUVar2 = (UObject *)0x0;
  if (this->_padding_ != 0) {
    pUVar2 = *(UObject **)(this->_padding_ + 0x360);
    if (UE::GC::GIsIncrementalReachabilityPending == false) goto LAB_1462e487d;
    if (pUVar2 != (UObject *)0x0) {
      UE::GC::MarkAsReachable(pUVar2);
    }
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar2);
  }
LAB_1462e487d:
  if (((param_1->field0_0x0).DebugPtr != (AActor *)0x0) && (pUVar2 != (UObject *)0x0)) {
    this_00 = UStruct::FindPropertyByName
                        ((UStruct *)((param_1->field0_0x0).DebugPtr)->_padding_,local_res8);
    if ((this_00 != (FProperty *)0x0) && ((*(uint *)(this_00->_padding_ + 0x18) >> 0x10 & 1) != 0))
    {
      if (this_00[1]._padding_ == 0) {
        bVar3 = *(longlong *)&pUVar2->field_0x10 == 0;
      }
      else {
        bVar3 = this_00[1]._padding_ == *(longlong *)&pUVar2->field_0x10;
      }
      if (bVar3) {
        puVar1 = FProperty::ContainerUObjectPtrToValuePtrInternal
                           (this_00,(UObject *)(param_1->field0_0x0).DebugPtr,0);
        if (puVar1 != (undefined8 *)0x0) {
          *puVar1 = pUVar2;
        }
      }
    }
  }
  return;
}

// SetConstructionDirty @ 1462e4ef0

void __thiscall UDataflowBaseContent::SetConstructionDirty(UDataflowBaseContent *this,bool param_1)

{
  this->bIsConstructionDirty = param_1;
  return;
}

// SetDataflowAsset @ 1462e4fa0

void __thiscall
UDataflowBaseContent::SetDataflowAsset(UDataflowBaseContent *this,TObjectPtr<UDataflow> *param_1)

{
  TSharedRef<UE::Dataflow::TEngineContext<UE::Dataflow::FContextSingle>,1> *pTVar1;
  undefined8 local_res8;
  TEngineContext<UE::Dataflow::FContextSingle> *local_28;
  FSharedReferencer<1> local_20;
  TSharedRef<UE::Dataflow::TEngineContext<UE::Dataflow::FContextSingle>,1> local_18;
  
  if (this->_padding_ == 0) {
    local_res8 = 0;
    pTVar1 = MakeShared<UE::Dataflow::TEngineContext<UE::Dataflow::FContextSingle>,1,std::nullptr_t>
                       (&local_18,(void **)&local_res8);
    local_20.ReferenceController = (pTVar1->SharedReferenceCount).ReferenceController;
    local_28 = pTVar1->Object;
    if (local_20.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_20.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_20.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((TEngineContext<UE::Dataflow::FContextSingle> **)&this->_padding_ != &local_28) {
      this->_padding_ = (longlong)local_28;
      local_28 = (TEngineContext<UE::Dataflow::FContextSingle> *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                ((FSharedReferencer<1> *)&this->_padding_,&local_20);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_20.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     ((param_1->field0_0x0).DebugPtr != (UDataflow *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)(param_1->field0_0x0).DebugPtr);
  }
  this->_padding_ = (longlong)param_1->field0_0x0;
  this->bIsConstructionDirty = true;
  this->bIsSimulationDirty = true;
  return;
}

// SetDataflowContext @ 1462e50d0

void __thiscall
UDataflowBaseContent::SetDataflowContext
          (UDataflowBaseContent *this,
          TSharedPtr<UE::Dataflow::TEngineContext<UE::Dataflow::FContextSingle>,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  TEngineContext<UE::Dataflow::FContextSingle> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  pTVar2 = param_1->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = (TReferenceControllerBase<1> *)this->_padding_;
  this->_padding_ = (longlong)pTVar2;
  this->_padding_ = (longlong)pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  this->bIsConstructionDirty = true;
  this->bIsSimulationDirty = true;
  UObjectBaseUtility::MarkPackageDirty((UObjectBaseUtility *)this);
  return;
}

// SetDataflowOwner @ 1462e5190

/* WARNING: Type propagation algorithm not settling */

void __thiscall
UDataflowBaseContent::SetDataflowOwner(UDataflowBaseContent *this,TObjectPtr<UObject> *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  TSharedRef<UE::Dataflow::TEngineContext<UE::Dataflow::FContextSingle>,1> *pTVar5;
  undefined8 local_res8;
  TEngineContext<UE::Dataflow::FContextSingle> *local_28;
  FSharedReferencer<1> local_20;
  TSharedRef<UE::Dataflow::TEngineContext<UE::Dataflow::FContextSingle>,1> local_18;
  
  plVar1 = &this->_padding_;
  if (this->_padding_ == 0) {
    local_res8 = 0;
    pTVar5 = MakeShared<UE::Dataflow::TEngineContext<UE::Dataflow::FContextSingle>,1,std::nullptr_t>
                       (&local_18,(void **)&local_res8);
    local_20.ReferenceController = (pTVar5->SharedReferenceCount).ReferenceController;
    local_28 = pTVar5->Object;
    if (local_20.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_20.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_20.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((TEngineContext<UE::Dataflow::FContextSingle> **)plVar1 != &local_28) {
      *plVar1 = (longlong)local_28;
      local_28 = (TEngineContext<UE::Dataflow::FContextSingle> *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                ((FSharedReferencer<1> *)&this->_padding_,&local_20);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_20.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
    if (*plVar1 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
  }
  lVar2 = *plVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     ((param_1->field0_0x0).DebugPtr != (UObject *)0x0)) {
    UE::GC::MarkAsReachable((param_1->field0_0x0).DebugPtr);
  }
  (((TObjectPtr<UObject>_u_0 *)(lVar2 + 0x360))->ObjectPtr).field0_0x0 =
       (FObjectPtr_u_0)param_1->field0_0x0;
  this->bIsConstructionDirty = true;
  this->bIsSimulationDirty = true;
  return;
}

// SetLastModifiedTimestamp @ 1462e5500

void __thiscall
UDataflowBaseContent::SetLastModifiedTimestamp
          (UDataflowBaseContent *this,FTimestamp param_1,bool param_2)

{
  UObject *pUVar1;
  
  if (((param_1.Value == UE::Dataflow::FTimestamp::Invalid) ||
      ((this->LastModifiedTimestamp).Value < param_1.Value)) &&
     ((this->LastModifiedTimestamp).Value = param_1.Value, param_2)) {
    if ((UObject *)this->_padding_ != (UObject *)0x0) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this->_padding_);
      }
      pUVar1 = (UObject *)this->_padding_;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar1);
      }
      if (pUVar1[5].field_0x8 == '\0') {
        this->bIsConstructionDirty = true;
        this->bIsSimulationDirty = true;
      }
    }
    UObjectBaseUtility::MarkPackageDirty((UObjectBaseUtility *)this);
    return;
  }
  return;
}

// SetSimulationDirty @ 1462e59f0

void __thiscall UDataflowBaseContent::SetSimulationDirty(UDataflowBaseContent *this,bool param_1)

{
  this->bIsSimulationDirty = param_1;
  return;
}

// StaticRegisterNativesUDataflowBaseContent @ 1462e61f0

void __cdecl UDataflowBaseContent::StaticRegisterNativesUDataflowBaseContent(void)

{
  return;
}

// UpdateContentDatas @ 1462e72e0

void __thiscall UDataflowBaseContent::UpdateContentDatas(UDataflowBaseContent *this)

{
  code *pcVar1;
  UClass *pUVar2;
  longlong *plVar3;
  UObject *pUVar4;
  UDataflowBaseContent *local_res8;
  
  if (this->_padding_ == 0) {
    return;
  }
  pUVar4 = *(UObject **)(this->_padding_ + 0x360);
  if (UE::GC::GIsIncrementalReachabilityPending) {
    if (pUVar4 == (UObject *)0x0) {
      return;
    }
    UE::GC::MarkAsReachable(pUVar4);
  }
  if (pUVar4 == (UObject *)0x0) {
    return;
  }
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  pUVar4 = (UObject *)0x0;
  if (this->_padding_ == 0) {
LAB_1462e7368:
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if (pUVar4 == (UObject *)0x0) {
        return;
      }
      UE::GC::MarkAsReachable(pUVar4);
      goto LAB_1462e7380;
    }
  }
  else {
    pUVar4 = *(UObject **)(this->_padding_ + 0x360);
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if (pUVar4 != (UObject *)0x0) {
        UE::GC::MarkAsReachable(pUVar4);
      }
      goto LAB_1462e7368;
    }
  }
  if (pUVar4 == (UObject *)0x0) {
    return;
  }
LAB_1462e7380:
  pUVar2 = UDataflowContentOwner::StaticClass();
  plVar3 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)pUVar4,pUVar2);
  if (plVar3 != (longlong *)0x0) {
    pcVar1 = *(code **)(*plVar3 + 0x10);
    local_res8 = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    (*pcVar1)(plVar3,&local_res8);
  }
  return;
}

