// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ActorSequence
// Functions: 17

// StaticClass @ 14eacff90

UClass * __cdecl UActorSequence::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UActorSequence.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ActorSequence",L"ActorSequence",
               &Z_Registration_Info_UClass_UActorSequence.InnerSingleton,
               StaticRegisterNativesUActorSequence,0x98,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UActorSequence>,
               InternalVTableHelperCtorCaller<UActorSequence>,local_res8,
               UMovieSceneSequence::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UActorSequence.InnerSingleton;
}

// UActorSequence @ 14ead0fa0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

UActorSequence * __thiscall
UActorSequence::UActorSequence(UActorSequence *this,FVTableHelper *param_1)

{
  UMovieSceneSequence::UMovieSceneSequence((UMovieSceneSequence *)this,param_1);
  this->_padding_ = (longlong)&___7UActorSequence__6B_;
  (this->MovieScene).field0_0x0.DebugPtr = (UMovieScene *)0x0;
  (this->ObjectReferences).BindingIds.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ObjectReferences).BindingIds.ArrayNum = 0;
  (this->ObjectReferences).BindingIds.ArrayMax = 0;
  (this->ObjectReferences).References.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ObjectReferences).References.ArrayNum = 0;
  (this->ObjectReferences).References.ArrayMax = 0;
  return this;
}

// UActorSequence @ 14ead0ff0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

UActorSequence * __thiscall
UActorSequence::UActorSequence(UActorSequence *this,FObjectInitializer *param_1)

{
  FName FVar1;
  FName *pFVar2;
  UClass *pUVar3;
  UMovieScene *this_00;
  FName local_res8;
  
  UMovieSceneSequence::UMovieSceneSequence((UMovieSceneSequence *)this,param_1);
  *(undefined1 *)((longlong)&this->_padding_ + 1) = 1;
  this->_padding_ = (longlong)&___7UActorSequence__6B_;
  (this->MovieScene).field0_0x0.DebugPtr = (UMovieScene *)0x0;
  (this->ObjectReferences).BindingIds.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ObjectReferences).BindingIds.ArrayNum = 0;
  (this->ObjectReferences).BindingIds.ArrayMax = 0;
  (this->ObjectReferences).References.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ObjectReferences).References.ArrayNum = 0;
  (this->ObjectReferences).References.ArrayMax = 0;
  pFVar2 = ::FName::FName(&local_res8,"MovieScene");
  FVar1 = *pFVar2;
  pUVar3 = Z_Construct_UClass_UMovieScene_NoRegister();
  this_00 = (UMovieScene *)
            FObjectInitializer::CreateDefaultSubobject
                      (param_1,(UObject *)this,FVar1,pUVar3,pUVar3,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this_00 != (UMovieScene *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this_00);
  }
  (this->MovieScene).field0_0x0.DebugPtr = this_00;
  UObjectBase::AtomicallySetFlags((UObjectBase *)this_00,RF_Transactional);
  return this;
}

// ~UActorSequence @ 14ead1310

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall UActorSequence::~UActorSequence(UActorSequence *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UActorSequence__6B_;
  DestructItems<FActorSequenceObjectReferences,int>
            ((FActorSequenceObjectReferences *)
             (this->ObjectReferences).References.AllocatorInstance.Data,
             (this->ObjectReferences).References.ArrayNum);
  pFVar1 = (this->ObjectReferences).References.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ObjectReferences).BindingIds.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UMovieSceneSequence::~UMovieSceneSequence((UMovieSceneSequence *)this);
  return;
}

// BindPossessableObject @ 14ead1740

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
UActorSequence::BindPossessableObject
          (UActorSequence *this,FGuid *param_1,UObject *param_2,UObject *param_3)

{
  int iVar1;
  UObject *pUVar2;
  code *pcVar3;
  bool bVar4;
  AActor *this_00;
  UClass *pUVar5;
  FString *pFVar6;
  ULevel *pUVar7;
  ULevel *pUVar8;
  AActor *this_01;
  ForAnyElementType FVar9;
  undefined1 local_res18 [16];
  FActorSequenceObjectReference local_a8;
  FActorSequenceObjectReference local_80;
  TPersistentObjectPtr<FUniqueObjectGuid> local_58;
  AActor *local_40;
  FString local_38;
  
  this_00 = CastChecked<AActor,UObject>(param_3);
  if (param_2 == (UObject *)0x0) {
LAB_14ead17a0:
    this_01 = (AActor *)0x0;
  }
  else {
    pUVar5 = Z_Construct_UClass_UActorComponent_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((*(int *)(*(longlong *)&param_2->field_0x10 + 0x38) < iVar1) ||
       (this_01 = (AActor *)param_2,
       (longlong *)
       *(undefined1 **)
        (*(longlong *)(*(longlong *)&param_2->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
       &pUVar5->_padding_)) goto LAB_14ead17a0;
  }
  if (this_01 != (AActor *)0x0) {
    pUVar2 = (UObject *)(this_01->AttachmentReplication).RotationOffset.Pitch;
    local_a8.ActorId.A = 0;
    local_a8.ActorId.B = 0;
    local_a8.ActorId.C = 0;
    local_a8.ActorId.D = 0;
    local_a8.PathToComponent.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_a8.PathToComponent.Data.ArrayNum = 0;
    local_a8.PathToComponent.Data.ArrayMax = 0;
    local_a8.Type = Component;
    if (pUVar2 == (UObject *)0x0) {
      `FActorSequenceObjectReference::CreateForComponent'::__l2::<lambda_1>::operator()(local_res18)
      ;
    }
    else {
      pFVar6 = UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this_01,&local_38,pUVar2);
      if (&local_a8.PathToComponent != pFVar6) {
        if (local_a8.PathToComponent.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
        {
          FMemory::Free(local_a8.PathToComponent.Data.AllocatorInstance.Data);
        }
        local_a8.PathToComponent.Data.AllocatorInstance.Data = (pFVar6->Data).AllocatorInstance.Data
        ;
        (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_a8.PathToComponent.Data.ArrayNum = (pFVar6->Data).ArrayNum;
        local_a8.PathToComponent.Data.ArrayMax = (pFVar6->Data).ArrayMax;
        (pFVar6->Data).ArrayNum = 0;
        (pFVar6->Data).ArrayMax = 0;
      }
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
    FActorSequenceObjectReferenceMap::CreateBinding(&this->ObjectReferences,param_1,&local_a8);
    FVar9.Data = local_a8.PathToComponent.Data.AllocatorInstance.Data;
    goto LAB_14ead1946;
  }
  if (param_2 == (UObject *)0x0) {
LAB_14ead1863:
    param_2 = (UObject *)(AActor *)0x0;
  }
  else {
    pUVar5 = Z_Construct_UClass_AActor_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((*(int *)(*(longlong *)&param_2->field_0x10 + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_2->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar5->_padding_)) goto LAB_14ead1863;
  }
  if ((AActor *)param_2 == (AActor *)0x0) {
    return;
  }
  if ((AActor *)param_2 == this_00) {
    local_80.ActorId.A = 0;
    local_80.ActorId.B = 0;
    local_80.ActorId.C = 0;
    local_80.ActorId.D = 0;
    local_80.Type = ContextActor;
  }
  else {
    if (this_00 == (AActor *)0x0) {
LAB_14ead18a2:
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InActor && ContextActor && InActor->GetLevel() == ContextActor->GetLevel()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\ActorSequence\\Source\\ActorSequence\\Private\\ActorSequenceObjectReference.cpp"
                         ,0x36,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    else {
      pUVar7 = AActor::GetLevel((AActor *)param_2);
      pUVar8 = AActor::GetLevel(this_00);
      if (pUVar7 != pUVar8) goto LAB_14ead18a2;
    }
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(param_2);
    }
    local_58.WeakPtr.ObjectIndex = 0;
    local_58.WeakPtr.ObjectSerialNumber = 0;
    local_58.ObjectID.Guid.C = 0;
    local_58.ObjectID.Guid.D = 0;
    local_58.ObjectID.Guid.A = 0;
    local_58.ObjectID.Guid.B = 0;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(param_2);
    }
    local_40 = (AActor *)param_2;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(param_2);
    }
    TPersistentObjectPtr<FUniqueObjectGuid>::operator=(&local_58,(FObjectPtr)&local_40);
    local_80.Type = ExternalActor;
    local_80.ActorId.A = local_58.ObjectID.Guid.A;
    local_80.ActorId.B = local_58.ObjectID.Guid.B;
    local_80.ActorId.C = local_58.ObjectID.Guid.C;
    local_80.ActorId.D = local_58.ObjectID.Guid.D;
  }
  local_80.PathToComponent.Data.ArrayNum = 0;
  local_80.PathToComponent.Data.ArrayMax = 0;
  local_80.PathToComponent.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FActorSequenceObjectReferenceMap::CreateBinding(&this->ObjectReferences,param_1,&local_80);
  FVar9.Data = local_80.PathToComponent.Data.AllocatorInstance.Data;
LAB_14ead1946:
  if (FVar9.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar9.Data);
  }
  return;
}

// CanPossessObject @ 14ead1980

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
UActorSequence::CanPossessObject(UActorSequence *this,UObject *param_1,UObject *param_2)

{
  int iVar1;
  AActor *this_00;
  UClass *pUVar2;
  ULevel *pUVar3;
  ULevel *pUVar4;
  
  if ((param_2 != (UObject *)0x0) &&
     (this_00 = CastChecked<AActor,UObject>(param_2), param_1 != (UObject *)0x0)) {
    pUVar2 = Z_Construct_UClass_AActor_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar2->_padding_)) {
      if (param_1 != param_2) {
        pUVar3 = AActor::GetLevel((AActor *)param_1);
        pUVar4 = AActor::GetLevel(this_00);
        if (pUVar3 != pUVar4) {
          return false;
        }
      }
      return true;
    }
    if (param_1 != (UObject *)0x0) {
      pUVar2 = Z_Construct_UClass_UActorComponent_NoRegister();
      iVar1 = (int)pUVar2->_padding_;
      if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar2->_padding_)) {
        if (*(AActor **)&param_1[4].field_0x8 == (AActor *)0x0) {
          return false;
        }
        pUVar3 = AActor::GetLevel(*(AActor **)&param_1[4].field_0x8);
        pUVar4 = AActor::GetLevel(this_00);
        return pUVar3 == pUVar4;
      }
    }
  }
  return false;
}

// CreateDirectorInstance @ 14ead1bf0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UObject * __thiscall
UActorSequence::CreateDirectorInstance
          (UActorSequence *this,TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> *param_1,
          FMovieSceneSequenceID param_2)

{
  int iVar1;
  UObject *pUVar2;
  AActor *this_00;
  UClass *pUVar3;
  UObject *pUVar4;
  ULevel *this_01;
  ALevelScriptActor *pAVar5;
  FString *pFVar6;
  wchar_t *pwVar7;
  wchar_t *pwVar8;
  FString local_28;
  FString local_18;
  
  this_00 = (AActor *)FWeakObjectPtr::Get(&(param_1->Object->WeakPlaybackContext).WeakPtr);
  if (this_00 == (AActor *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->SharedReferenceCount).ReferenceController);
    return (UObject *)0x0;
  }
  pUVar3 = Z_Construct_UClass_AActor_NoRegister();
  iVar1 = (int)pUVar3->_padding_;
  if ((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar3->_padding_)) {
    pUVar3 = Z_Construct_UClass_UBlueprintGeneratedClass_NoRegister();
    pUVar4 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar3);
    if (pUVar4 == (UObject *)0x0) {
      pUVar3 = UActorSequenceComponent::StaticClass();
      pUVar4 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar3);
      pUVar3 = UActorSequenceComponent::StaticClass();
      if ((pUVar3->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
        UClass::InternalCreateDefaultObjectWrapper(pUVar3);
      }
      pUVar2 = (pUVar3->ClassDefaultObject).field0_0x0.DebugPtr;
      pUVar4 = UObject::GetArchetype(pUVar4);
      if (pUVar4 == pUVar2) {
        this_01 = AActor::GetLevel(this_00);
        pAVar5 = ULevel::GetLevelScriptActor(this_01);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((param_1->SharedReferenceCount).ReferenceController);
        return (UObject *)pAVar5;
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->SharedReferenceCount).ReferenceController);
    return (UObject *)this_00;
  }
  pFVar6 = GetTypeName<AActor>(&local_28);
  pwVar7 = L"";
  if ((pFVar6->Data).ArrayNum == 0) {
    pwVar8 = L"";
  }
  else {
    pwVar8 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
  }
  pFVar6 = GetFullNameForCastLogError<UObject>(&local_18,(UObject *)this_00);
  if ((pFVar6->Data).ArrayNum != 0) {
    pwVar7 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar7,pwVar8);
}

// GetMovieScene @ 14ead21e0

UMovieScene * __thiscall UActorSequence::GetMovieScene(UActorSequence *this)

{
  return (this->MovieScene).field0_0x0.DebugPtr;
}

// GetParentObject @ 14ead21f0

UObject * __thiscall UActorSequence::GetParentObject(UActorSequence *this,UObject *param_1)

{
  int iVar1;
  UClass *pUVar2;
  
  if (param_1 != (UObject *)0x0) {
    pUVar2 = Z_Construct_UClass_UActorComponent_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar2->_padding_)) {
      return *(UObject **)&param_1[4].field_0x8;
    }
  }
  return (UObject *)0x0;
}

// GetPrivateStaticClass @ 14ead2310

UClass * __cdecl UActorSequence::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UActorSequence.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ActorSequence",L"ActorSequence",
               &Z_Registration_Info_UClass_UActorSequence.InnerSingleton,
               StaticRegisterNativesUActorSequence,0x98,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UActorSequence>,
               InternalVTableHelperCtorCaller<UActorSequence>,local_res8,
               UMovieSceneSequence::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UActorSequence.InnerSingleton;
}

// IsEditable @ 14ead25c0

bool __thiscall UActorSequence::IsEditable(UActorSequence *this)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = UObject::GetArchetype((UObject *)this);
  pUVar2 = StaticClass();
  if ((pUVar2->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(pUVar2);
  }
  if (pUVar1 == (pUVar2->ClassDefaultObject).field0_0x0.DebugPtr) {
    return false;
  }
  if (pUVar1 != (UObject *)0x0) {
    pUVar2 = UActorSequenceComponent::StaticClass();
    pUVar1 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)pUVar1,pUVar2);
    pUVar2 = UActorSequenceComponent::StaticClass();
    if ((pUVar2->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(pUVar2);
    }
    if (pUVar1 != (pUVar2->ClassDefaultObject).field0_0x0.DebugPtr) {
      return false;
    }
  }
  return true;
}

// LocateBoundObjects @ 14ead2650

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
UActorSequence::LocateBoundObjects
          (UActorSequence *this,FGuid *param_1,UObject *param_2,
          TArray<UObject_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *param_3)

{
  AActor *pAVar1;
  
  if (param_2 != (UObject *)0x0) {
    pAVar1 = CastChecked<AActor,UObject>(param_2);
    FActorSequenceObjectReferenceMap::ResolveBinding(&this->ObjectReferences,param_1,pAVar1,param_3)
    ;
  }
  return;
}

// PostInitProperties @ 14ead2700

void __thiscall UActorSequence::PostInitProperties(UActorSequence *this)

{
  UObject *pUVar1;
  undefined8 uVar2;
  UClass *this_00;
  FGuid *pFVar3;
  FGuid FStack_18;
  
  UObject::PostInitProperties((UObject *)this);
  if ((this->_padding_ & 0x200430) == 0) {
    this_00 = UMovieSceneSignedObject::StaticClass();
    if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(this_00);
    }
    pUVar1 = (this_00->ClassDefaultObject).field0_0x0.DebugPtr;
    if ((((int)this->_padding_ == *(int *)&pUVar1[1].field_0x10 &&
         *(int *)((longlong)&this->_padding_ + 4) == *(int *)&pUVar1[1].field_0xc) &&
        (int)this->_padding_ == *(int *)&pUVar1[1].field_0x8) &&
        *(int *)((longlong)&this->_padding_ + 4) == *(int *)&pUVar1[1].field_0x4) {
      pFVar3 = FGuid::NewGuid(&FStack_18);
      uVar2 = *(undefined8 *)&pFVar3->C;
      *(undefined8 *)((longlong)&this->_padding_ + 4) = *(undefined8 *)pFVar3;
      *(undefined8 *)((longlong)&this->_padding_ + 4) = uVar2;
    }
  }
  return;
}

// StaticRegisterNativesUActorSequence @ 14ead2ce0

void __cdecl UActorSequence::StaticRegisterNativesUActorSequence(void)

{
  return;
}

// UnbindInvalidObjects @ 14ead2d70

void __thiscall
UActorSequence::UnbindInvalidObjects(UActorSequence *this,FGuid *param_1,UObject *param_2)

{
  return;
}

// UnbindObjects @ 14ead2d80

void __thiscall
UActorSequence::UnbindObjects
          (UActorSequence *this,FGuid *param_1,
          TArray<UObject_*,TSizedDefaultAllocator<32>_> *param_2,UObject *param_3)

{
  return;
}

// UnbindPossessableObjects @ 14ead2d90

void __thiscall UActorSequence::UnbindPossessableObjects(UActorSequence *this,FGuid *param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  
  uVar6 = TArray<FGuid,TSizedDefaultAllocator<32>_>::IndexOfByKey<FGuid>
                    (&(this->ObjectReferences).BindingIds,param_1);
  if (uVar6 != 0xffffffff) {
    uVar9 = ~uVar6 >> 0x1f;
    uVar7 = 0;
    if ((int)uVar6 < (this->ObjectReferences).BindingIds.ArrayNum) {
      uVar7 = uVar9;
    }
    if (uVar7 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    iVar2 = (this->ObjectReferences).BindingIds.ArrayNum;
    pFVar3 = (this->ObjectReferences).BindingIds.AllocatorInstance.Data;
    iVar8 = iVar2 + ~uVar6;
    if (1 < iVar8) {
      iVar8 = 1;
    }
    if (iVar8 != 0) {
      memmove(pFVar3 + (longlong)(int)uVar6 * 0x10,pFVar3 + (longlong)(iVar2 - iVar8) * 0x10,
              (longlong)iVar8 << 4);
    }
    piVar1 = &(this->ObjectReferences).BindingIds.ArrayNum;
    *piVar1 = *piVar1 + -1;
    uVar7 = 0;
    if ((int)uVar6 < (this->ObjectReferences).References.ArrayNum) {
      uVar7 = uVar9;
    }
    if (uVar7 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    TArray<FActorSequenceObjectReferences,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
              (&(this->ObjectReferences).References,uVar6);
  }
  return;
}

