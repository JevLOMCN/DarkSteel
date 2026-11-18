// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StateTreeModule
// Functions: 21

// StaticClass @ 14d49fa70

UClass * __cdecl UStateTreeNodeBlueprintBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UStateTreeNodeBlueprintBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/StateTreeModule",L"StateTreeNodeBlueprintBase",
               &Z_Registration_Info_UClass_UStateTreeNodeBlueprintBase.InnerSingleton,
               StaticRegisterNativesUStateTreeNodeBlueprintBase,0x68,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UStateTreeNodeBlueprintBase>,
               InternalVTableHelperCtorCaller<UStateTreeNodeBlueprintBase>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UStateTreeNodeBlueprintBase.InnerSingleton;
}

// UStateTreeNodeBlueprintBase @ 14d4b2940

UStateTreeNodeBlueprintBase * __thiscall
UStateTreeNodeBlueprintBase::UStateTreeNodeBlueprintBase
          (UStateTreeNodeBlueprintBase *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UStateTreeNodeBlueprintBase__6B_;
  (this->WeakExecutionContext).Owner.WeakPtr = (FWeakObjectPtr)0x0;
  (this->WeakExecutionContext).StateTree.WeakPtr = (FWeakObjectPtr)0x0;
  (this->WeakExecutionContext).Storage.Object = (FStateTreeInstanceStorage *)0x0;
  (this->WeakExecutionContext).Storage.WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->WeakExecutionContext).TemporaryStorage.Object = (ITemporaryStorage *)0x0;
  (this->WeakExecutionContext).TemporaryStorage.WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->WeakExecutionContext).FrameID = 0;
  (this->WeakExecutionContext).StateID = 0;
  (this->WeakExecutionContext).NodeIndex.Value = 0xffff;
  return this;
}

// UStateTreeNodeBlueprintBase @ 14d4b2990

UStateTreeNodeBlueprintBase * __thiscall
UStateTreeNodeBlueprintBase::UStateTreeNodeBlueprintBase
          (UStateTreeNodeBlueprintBase *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UStateTreeNodeBlueprintBase__6B_;
  (this->WeakExecutionContext).Owner.WeakPtr = (FWeakObjectPtr)0x0;
  (this->WeakExecutionContext).StateTree.WeakPtr = (FWeakObjectPtr)0x0;
  (this->WeakExecutionContext).Storage.Object = (FStateTreeInstanceStorage *)0x0;
  (this->WeakExecutionContext).Storage.WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->WeakExecutionContext).TemporaryStorage.Object = (ITemporaryStorage *)0x0;
  (this->WeakExecutionContext).TemporaryStorage.WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->WeakExecutionContext).FrameID = 0;
  (this->WeakExecutionContext).StateID = 0;
  (this->WeakExecutionContext).NodeIndex.Value = 0xffff;
  return this;
}

// ~UStateTreeNodeBlueprintBase @ 14d4b3e70

void __thiscall
UStateTreeNodeBlueprintBase::~UStateTreeNodeBlueprintBase(UStateTreeNodeBlueprintBase *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  this->_padding_ = (longlong)&___7UStateTreeNodeBlueprintBase__6B_;
  pTVar3 = (this->WeakExecutionContext).TemporaryStorage.WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  pTVar3 = (this->WeakExecutionContext).Storage.WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  UObject::~UObject((UObject *)this);
  return;
}

// ClearCachedInstanceData @ 14d4b7c50

void __thiscall
UStateTreeNodeBlueprintBase::ClearCachedInstanceData(UStateTreeNodeBlueprintBase *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FStateTreeWeakExecutionContext local_48;
  
  local_48._58_4_ = 0;
  local_48._62_2_ = 0;
  local_48.FrameID.Value = 0;
  local_48.StateID.Value = 0;
  local_48.NodeIndex.Value = 0xffff;
  local_48.Owner.WeakPtr.ObjectIndex = 0;
  local_48.Owner.WeakPtr.ObjectSerialNumber = 0;
  local_48.StateTree.WeakPtr.ObjectIndex = 0;
  local_48.StateTree.WeakPtr.ObjectSerialNumber = 0;
  local_48.Storage.Object = (FStateTreeInstanceStorage *)0x0;
  local_48.Storage.WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_48.TemporaryStorage.Object = (ITemporaryStorage *)0x0;
  local_48.TemporaryStorage.WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  FStateTreeWeakExecutionContext::operator=(&this->WeakExecutionContext,&local_48);
  if (local_48.TemporaryStorage.WeakReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(local_48.TemporaryStorage.WeakReferenceCount.ReferenceController)->WeakReferenceCount
    ;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)((local_48.TemporaryStorage.WeakReferenceCount.ReferenceController)->_padding_ + 8
                  ))(local_48.TemporaryStorage.WeakReferenceCount.ReferenceController,1);
    }
  }
  if (local_48.Storage.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
  {
    LOCK();
    paVar1 = &(local_48.Storage.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
                    /* WARNING: Could not recover jumptable at 0x00014d4b7cda. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)((local_48.Storage.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                (local_48.Storage.WeakReferenceCount.ReferenceController,1);
      return;
    }
  }
  return;
}

// GetMutablePtrToProperty @ 14d4be610

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
UStateTreeNodeBlueprintBase::GetMutablePtrToProperty
          (UStateTreeNodeBlueprintBase *this,FStateTreeBlueprintPropertyRef *param_1,
          FProperty **param_2)

{
  code *pcVar1;
  bool bVar2;
  FActivePathInfo *pFVar3;
  void *pvVar4;
  void *pvVar5;
  FProperty *local_res8;
  FActivePathInfo local_88;
  FActivePathInfo local_70;
  TStateTreeStrongExecutionContext<1> local_58;
  
  TStateTreeStrongExecutionContext<1>::TStateTreeStrongExecutionContext<1>
            (&local_58,&this->WeakExecutionContext);
  TStateTreeStrongExecutionContext<1>::GetActivePathInfo(&local_58,&local_88);
  if (local_88.Frame == (FStateTreeExecutionFrame *)0x0) {
    if (FVisualLogger::bIsRecording != 0) {
      FVisualLogger::CategorizedLogfImpl
                ((UObject *)this,(FName *)&LogStateTree.field_0x4,Error,
                 L"Trying to GetMutablePtrToProperty while node is not active.");
    }
    if (1 < (byte)LogStateTree._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogStateTree);
    }
    pvVar4 = (void *)0x0;
    goto LAB_14d4be77a;
  }
  if (((local_58.Owner.Object == (UObject *)0x0) || (local_58.StateTree.Object == (UObject *)0x0))
     || (local_58.Storage.Object == (FStateTreeInstanceStorage *)0x0)) {
LAB_14d4be6d6:
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("StrongContext.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\StateTree\\Source\\StateTreeModule\\Private\\Blueprint\\StateTreeNodeBlueprintBase.cpp"
                       ,0x47,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pvVar4 = (void *)(*pcVar1)();
      return pvVar4;
    }
  }
  else if (local_58.FrameID.Value != 0) {
    pFVar3 = TStateTreeStrongExecutionContext<1>::GetActivePathInfo(&local_58,&local_70);
    if (pFVar3->Frame == (FStateTreeExecutionFrame *)0x0) goto LAB_14d4be6d6;
  }
  pvVar4 = (void *)0x0;
  local_res8 = (FProperty *)0x0;
  if (local_58.Storage.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_58.Storage.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_58.Storage.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1
         );
    UNLOCK();
  }
  pvVar5 = UE::StateTree::PropertyRefHelpers::GetMutablePtrToProperty<void>
                     ((FStateTreePropertyRef *)param_1,local_58.Storage.Object,local_88.Frame,
                      local_88.ParentFrame,&local_res8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_58.Storage.SharedReferenceCount.ReferenceController);
  if (pvVar5 != (void *)0x0) {
    bVar2 = UE::StateTree::PropertyRefHelpers::IsBlueprintPropertyRefCompatibleWithProperty
                      (local_res8,param_1);
    if (bVar2) {
      *param_2 = local_res8;
      pvVar4 = pvVar5;
      goto LAB_14d4be77a;
    }
  }
  *param_2 = (FProperty *)0x0;
LAB_14d4be77a:
  TStateTreeStrongExecutionContext<1>::~TStateTreeStrongExecutionContext<1>(&local_58);
  return pvVar4;
}

// GetOwnerActor @ 14d4bee00

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AActor * __thiscall
UStateTreeNodeBlueprintBase::GetOwnerActor
          (UStateTreeNodeBlueprintBase *this,FStateTreeExecutionContext *param_1)

{
  int iVar1;
  longlong lVar2;
  UClass *pUVar3;
  AActor *pAVar4;
  
  lVar2 = param_1->_padding_;
  if (lVar2 != 0) {
    pUVar3 = Z_Construct_UClass_AAIController_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar3->_padding_)) {
      pAVar4 = (AActor *)param_1->_padding_;
      if (pAVar4 == (AActor *)0x0) goto LAB_14d4beea3;
      pUVar3 = Z_Construct_UClass_AActor_NoRegister();
      iVar1 = (int)pUVar3->_padding_;
      if ((*(int *)(pAVar4->_padding_ + 0x38) < iVar1) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pAVar4->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar3->_padding_)) {
        return (AActor *)0x0;
      }
    }
    else {
      pAVar4 = *(AActor **)(lVar2 + 0x310);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pAVar4 != (AActor *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pAVar4);
      }
    }
    return pAVar4;
  }
LAB_14d4beea3:
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// GetPrivateStaticClass @ 14d4bf1b0

UClass * __cdecl UStateTreeNodeBlueprintBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UStateTreeNodeBlueprintBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/StateTreeModule",L"StateTreeNodeBlueprintBase",
               &Z_Registration_Info_UClass_UStateTreeNodeBlueprintBase.InnerSingleton,
               StaticRegisterNativesUStateTreeNodeBlueprintBase,0x68,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UStateTreeNodeBlueprintBase>,
               InternalVTableHelperCtorCaller<UStateTreeNodeBlueprintBase>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UStateTreeNodeBlueprintBase.InnerSingleton;
}

// GetPropertyDescriptionByPropertyName @ 14d4bf4a0

FText * __thiscall
UStateTreeNodeBlueprintBase::GetPropertyDescriptionByPropertyName
          (UStateTreeNodeBlueprintBase *this,FText *__return_storage_ptr__,FName param_1)

{
  FText::FText(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetWorld @ 14d4c1ba0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UWorld * __thiscall UStateTreeNodeBlueprintBase::GetWorld(UStateTreeNodeBlueprintBase *this)

{
  UObject *pUVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UWorld *pUVar3;
  UObject *local_res8;
  
  if ((this->_padding_ & 0x10) == 0) {
    TVar2 = FWeakObjectPtr::Pin((FWeakObjectPtr *)&this->WeakExecutionContext);
                    /* WARNING: Load size is inaccurate */
    pUVar1 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UObject *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject(local_res8);
    }
    if (pUVar1 != (UObject *)0x0) {
      pUVar3 = (UWorld *)(**(code **)(*(longlong *)pUVar1 + 0x180))(pUVar1);
      UEStrongObjectPtr_Private::ReleaseUObject(pUVar1);
      return pUVar3;
    }
    if ((longlong *)this->_padding_ != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014d4c1c1b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pUVar3 = (UWorld *)(**(code **)(*(longlong *)this->_padding_ + 0x180))();
      return pUVar3;
    }
  }
  return (UWorld *)0x0;
}

// IsPropertyRefValid @ 14d4c3fd0

bool __thiscall
UStateTreeNodeBlueprintBase::IsPropertyRefValid
          (UStateTreeNodeBlueprintBase *this,FStateTreeBlueprintPropertyRef *param_1)

{
  void *pvVar1;
  FProperty *local_res18 [2];
  
  pvVar1 = GetMutablePtrToProperty(this,param_1,local_res18);
  return pvVar1 != (void *)0x0;
}

// ReceiveGetDescription @ 14d4ccec0

FText * __thiscall
UStateTreeNodeBlueprintBase::ReceiveGetDescription
          (UStateTreeNodeBlueprintBase *this,FText *__return_storage_ptr__,
          EStateTreeNodeFormatting param_1)

{
  UFunction *pUVar1;
  undefined1 local_res18 [16];
  EStateTreeNodeFormatting local_28 [8];
  FText local_20;
  
  FText::FText(&local_20);
  local_28[0] = param_1;
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_UStateTreeNodeBlueprintBase_ReceiveGetDescription);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,local_28);
  (__return_storage_ptr__->TextData).Reference = local_20.TextData.Reference;
  if (local_20.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_20.TextData.Reference + 8))
              (local_20.TextData.Reference,local_res18);
  }
  __return_storage_ptr__->Flags = local_20.Flags;
  if (local_20.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_20.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

// RequestTransition @ 14d4ce930

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UStateTreeNodeBlueprintBase::RequestTransition
          (UStateTreeNodeBlueprintBase *this,FStateTreeStateLink *param_1,
          EStateTreeTransitionPriority param_2)

{
  EStateTreeSelectionFallback EVar1;
  ushort uVar2;
  code *pcVar3;
  bool bVar4;
  FStateTreeTransitionRequest local_78;
  FActivePathInfo local_68;
  TStateTreeStrongExecutionContext<1> local_50;
  
  EVar1 = param_1->Fallback;
  uVar2 = (param_1->StateHandle).Index;
  TStateTreeStrongExecutionContext<1>::TStateTreeStrongExecutionContext<1>
            (&local_50,&this->WeakExecutionContext);
  TStateTreeStrongExecutionContext<1>::GetActivePathInfo(&local_50,&local_68);
  if (local_68.Frame == (FStateTreeExecutionFrame *)0x0) {
    TStateTreeStrongExecutionContext<1>::~TStateTreeStrongExecutionContext<1>(&local_50);
    if (FVisualLogger::bIsRecording != 0) {
      FVisualLogger::CategorizedLogfImpl
                ((UObject *)this,(FName *)&LogStateTree.field_0x4,Error,
                 L"Failed to request a transition. The instance probably stopped.");
    }
    if (1 < (byte)LogStateTree._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogStateTree);
    }
  }
  else {
    local_78.SourceFrameID.Value = local_50.FrameID.Value;
    local_78.SourceStateID.Value = local_50.StateID.Value;
    local_78.TargetState.Index = uVar2;
    local_78.Priority = param_2;
    local_78.Fallback = EVar1;
    if (local_50.Storage.Object == (FStateTreeInstanceStorage *)0x0) {
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
    FStateTreeInstanceStorage::AddTransitionRequest
              (local_50.Storage.Object,local_50.Owner.Object,&local_78);
    if (local_50.Storage.Object == (FStateTreeInstanceStorage *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if (((UStateTree *)local_50.StateTree.Object == (UStateTree *)0x0) ||
       (local_50.Owner.Object == (UObject *)0x0)) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    TStateTreeStrongExecutionContext<1>::ScheduleNextTick<1>
              ((TNotNull<UObject_*>)local_50.Owner.Object,
               (TNotNull<UStateTree_const_*>)local_50.StateTree.Object,local_50.Storage.Object,
               TransitionRequest);
    TStateTreeStrongExecutionContext<1>::~TStateTreeStrongExecutionContext<1>(&local_50);
  }
  return;
}

// SendEvent @ 14d4cefd0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UStateTreeNodeBlueprintBase::SendEvent(UStateTreeNodeBlueprintBase *this,FStateTreeEvent *param_1)

{
  FName FVar1;
  TObjectPtr<UScriptStruct_const_>_u_0 TVar2;
  uchar *puVar3;
  FName FVar4;
  FActivePathInfo *pFVar5;
  TStateTreeStrongExecutionContext<1> local_b8;
  TObjectPtr<UScriptStruct_const_>_u_0 local_78;
  uchar *local_70;
  FStateTreeMinimalExecutionContext local_58;
  
  FVar1 = param_1->Origin;
  TVar2 = (param_1->Payload).ScriptStruct.field0_0x0;
  puVar3 = (param_1->Payload).StructMemory;
  FVar4 = (param_1->Tag).TagName;
  TStateTreeStrongExecutionContext<1>::TStateTreeStrongExecutionContext<1>
            (&local_b8,&this->WeakExecutionContext);
  if ((((local_b8.Owner.Object == (UObject *)0x0) ||
       ((UStateTree *)local_b8.StateTree.Object == (UStateTree *)0x0)) ||
      (local_b8.Storage.Object == (FStateTreeInstanceStorage *)0x0)) ||
     ((local_b8.FrameID.Value != 0 &&
      (pFVar5 = TStateTreeStrongExecutionContext<1>::GetActivePathInfo
                          (&local_b8,(FActivePathInfo *)&local_78.ObjectPtr),
      pFVar5->Frame == (FStateTreeExecutionFrame *)0x0)))) {
    TStateTreeStrongExecutionContext<1>::~TStateTreeStrongExecutionContext<1>(&local_b8);
    if (FVisualLogger::bIsRecording != 0) {
      FVisualLogger::CategorizedLogfImpl
                ((UObject *)this,(FName *)&LogStateTree.field_0x4,Error,
                 L"Failed to send the event. The instance probably stopped.");
    }
    if (1 < (byte)LogStateTree._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogStateTree);
    }
  }
  else {
    if (((UStateTree *)local_b8.StateTree.Object == (UStateTree *)0x0) ||
       (local_b8.Owner.Object == (UObject *)0x0)) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    FStateTreeMinimalExecutionContext::FStateTreeMinimalExecutionContext
              (&local_58,(TNotNull<UObject_*>)local_b8.Owner.Object,
               (TNotNull<UStateTree_const_*>)local_b8.StateTree.Object,local_b8.Storage.Object);
    local_78 = TVar2;
    local_70 = puVar3;
    FStateTreeMinimalExecutionContext::SendEvent
              (&local_58,(FGameplayTag)FVar4,(FConstStructView *)&local_78.ObjectPtr,FVar1);
    FStateTreeMinimalExecutionContext::~FStateTreeMinimalExecutionContext(&local_58);
    TStateTreeStrongExecutionContext<1>::~TStateTreeStrongExecutionContext<1>(&local_b8);
  }
  return;
}

// SetCachedInstanceDataFromContext @ 14d4cfd20

void __thiscall
UStateTreeNodeBlueprintBase::SetCachedInstanceDataFromContext
          (UStateTreeNodeBlueprintBase *this,FStateTreeExecutionContext *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FStateTreeWeakExecutionContext *pFVar3;
  FStateTreeWeakExecutionContext local_48;
  
  pFVar3 = FStateTreeExecutionContext::MakeWeakExecutionContext(param_1,&local_48);
  FStateTreeWeakExecutionContext::operator=(&this->WeakExecutionContext,pFVar3);
  if (local_48.TemporaryStorage.WeakReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(local_48.TemporaryStorage.WeakReferenceCount.ReferenceController)->WeakReferenceCount
    ;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)((local_48.TemporaryStorage.WeakReferenceCount.ReferenceController)->_padding_ + 8
                  ))(local_48.TemporaryStorage.WeakReferenceCount.ReferenceController,1);
    }
  }
  if (local_48.Storage.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
  {
    LOCK();
    paVar1 = &(local_48.Storage.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)((local_48.Storage.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                (local_48.Storage.WeakReferenceCount.ReferenceController,1);
    }
  }
  return;
}

// StaticRegisterNativesUStateTreeNodeBlueprintBase @ 14d4d1040

void __cdecl UStateTreeNodeBlueprintBase::StaticRegisterNativesUStateTreeNodeBlueprintBase(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 5;
  local_18.DataPtr = Z_Construct_UClass_UStateTreeNodeBlueprintBase_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetPropertyDescriptionByPropertyName @ 14d4d7e70

void __cdecl
UStateTreeNodeBlueprintBase::execGetPropertyDescriptionByPropertyName
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 local_res10;
  FText local_18;
  
  local_res10 = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FText::FText(&local_18);
  FText::operator=(param_3,&local_18);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return;
}

// execGetPropertyReference @ 14d4d7f20

void __cdecl
UStateTreeNodeBlueprintBase::execGetPropertyReference
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  uchar *puVar2;
  FStateTreeBlueprintPropertyRef *pFVar3;
  FProperty *local_res10;
  FStateTreeBlueprintPropertyRef local_38;
  
  local_38.bIsOptional = '\0';
  local_38.bIsRefToArray = '\0';
  local_38._padding_ = -1;
  local_38.RefType = None;
  local_38.TypeObject.field0_0x0.DebugPtr = (TObjectPtr<UObject>_u_0)0x0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  pFVar3 = &local_38;
  if ((FStateTreeBlueprintPropertyRef *)param_2->MostRecentPropertyAddress !=
      (FStateTreeBlueprintPropertyRef *)0x0) {
    pFVar3 = (FStateTreeBlueprintPropertyRef *)param_2->MostRecentPropertyAddress;
  }
  FProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,(void *)0x0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,(void *)0x0);
  }
  local_res10 = (FProperty *)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  puVar2 = GetMutablePtrToProperty((UStateTreeNodeBlueprintBase *)param_1,pFVar3,&local_res10);
  if (puVar2 == (uchar *)0x0) {
    param_2->MostRecentPropertyAddress = (uchar *)0x0;
    param_2->MostRecentProperty = (FProperty *)0x0;
  }
  else {
    param_2->MostRecentProperty = local_res10;
    param_2->MostRecentPropertyAddress = puVar2;
    if (param_3 != (void *)0x0) {
      (**(code **)(local_res10->_padding_ + 0x108))(local_res10,param_3,puVar2);
    }
  }
  return;
}

// execIsPropertyRefValid @ 14d4d8060

void __cdecl
UStateTreeNodeBlueprintBase::execIsPropertyRefValid(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  void *pvVar2;
  FStateTreeBlueprintPropertyRef *pFVar3;
  FProperty *local_res10;
  FStateTreeBlueprintPropertyRef local_18;
  
  local_18.bIsOptional = '\0';
  local_18.bIsRefToArray = '\0';
  local_18._padding_ = -1;
  local_18.RefType = None;
  local_18.TypeObject.field0_0x0.DebugPtr = (TObjectPtr<UObject>_u_0)0x0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  pFVar3 = &local_18;
  if ((FStateTreeBlueprintPropertyRef *)param_2->MostRecentPropertyAddress !=
      (FStateTreeBlueprintPropertyRef *)0x0) {
    pFVar3 = (FStateTreeBlueprintPropertyRef *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pvVar2 = GetMutablePtrToProperty((UStateTreeNodeBlueprintBase *)param_1,pFVar3,&local_res10);
  *(bool *)param_3 = pvVar2 != (void *)0x0;
  return;
}

// execRequestTransition @ 14d4d82b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UStateTreeNodeBlueprintBase::execRequestTransition(UObject *param_1,FFrame *param_2,void *param_3)

{
  EStateTreeSelectionFallback EVar1;
  ushort uVar2;
  FProperty *pFVar3;
  code *pcVar4;
  EStateTreeTransitionPriority EVar5;
  bool bVar6;
  ushort *puVar7;
  EStateTreeTransitionPriority local_res8 [8];
  ushort local_res10;
  undefined1 local_res12;
  FStateTreeTransitionRequest local_98;
  FActivePathInfo local_88;
  TStateTreeStrongExecutionContext<1> local_70;
  
  local_res12 = 0;
  local_res10 = 0xffff;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_res8[0] = None;
  puVar7 = &local_res10;
  if ((ushort *)param_2->MostRecentPropertyAddress != (ushort *)0x0) {
    puVar7 = (ushort *)param_2->MostRecentPropertyAddress;
  }
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  EVar5 = local_res8[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  EVar1 = *(EStateTreeSelectionFallback *)(puVar7 + 1);
  uVar2 = *puVar7;
  TStateTreeStrongExecutionContext<1>::TStateTreeStrongExecutionContext<1>
            (&local_70,(FStateTreeWeakExecutionContext *)(param_1 + 1));
  TStateTreeStrongExecutionContext<1>::GetActivePathInfo(&local_70,&local_88);
  if (local_88.Frame == (FStateTreeExecutionFrame *)0x0) {
    TStateTreeStrongExecutionContext<1>::~TStateTreeStrongExecutionContext<1>(&local_70);
    if (FVisualLogger::bIsRecording != 0) {
      FVisualLogger::CategorizedLogfImpl
                (param_1,(FName *)&LogStateTree.field_0x4,Error,
                 L"Failed to request a transition. The instance probably stopped.");
    }
    if (1 < (byte)LogStateTree._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogStateTree);
    }
  }
  else {
    local_98.SourceFrameID.Value = local_70.FrameID.Value;
    local_98.SourceStateID.Value = local_70.StateID.Value;
    local_98.Priority = EVar5;
    local_98.TargetState.Index = uVar2;
    local_98.Fallback = EVar1;
    if (local_70.Storage.Object == (FStateTreeInstanceStorage *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    FStateTreeInstanceStorage::AddTransitionRequest
              (local_70.Storage.Object,local_70.Owner.Object,&local_98);
    if (local_70.Storage.Object == (FStateTreeInstanceStorage *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L"");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    if (((UStateTree *)local_70.StateTree.Object == (UStateTree *)0x0) ||
       (local_70.Owner.Object == (UObject *)0x0)) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    TStateTreeStrongExecutionContext<1>::ScheduleNextTick<1>
              ((TNotNull<UObject_*>)local_70.Owner.Object,
               (TNotNull<UStateTree_const_*>)local_70.StateTree.Object,local_70.Storage.Object,
               TransitionRequest);
    TStateTreeStrongExecutionContext<1>::~TStateTreeStrongExecutionContext<1>(&local_70);
  }
  return;
}

// execSendEvent @ 14d4d84e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UStateTreeNodeBlueprintBase::execSendEvent(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FName FVar2;
  FName FVar3;
  FName FVar4;
  FName FVar5;
  FActivePathInfo *pFVar6;
  FName *pFVar7;
  FName local_e8;
  FInstancedStruct local_e0;
  undefined8 local_d0;
  TStateTreeStrongExecutionContext<1> local_c8;
  FActivePathInfo local_88;
  FStateTreeMinimalExecutionContext local_68;
  
  local_e8.ComparisonIndex.Value = 0;
  local_e8.Number = 0;
  FInstancedStruct::FInstancedStruct(&local_e0);
  local_d0 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_e8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_e8);
  }
  pFVar7 = &local_e8;
  if ((FName *)param_2->MostRecentPropertyAddress != (FName *)0x0) {
    pFVar7 = (FName *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FVar2 = pFVar7[3];
  FVar3 = pFVar7[1];
  FVar4 = pFVar7[2];
  FVar5 = *pFVar7;
  TStateTreeStrongExecutionContext<1>::TStateTreeStrongExecutionContext<1>
            (&local_c8,(FStateTreeWeakExecutionContext *)(param_1 + 1));
  if ((((local_c8.Owner.Object == (UObject *)0x0) ||
       ((UStateTree *)local_c8.StateTree.Object == (UStateTree *)0x0)) ||
      (local_c8.Storage.Object == (FStateTreeInstanceStorage *)0x0)) ||
     ((local_c8.FrameID.Value != 0 &&
      (pFVar6 = TStateTreeStrongExecutionContext<1>::GetActivePathInfo(&local_c8,&local_88),
      pFVar6->Frame == (FStateTreeExecutionFrame *)0x0)))) {
    TStateTreeStrongExecutionContext<1>::~TStateTreeStrongExecutionContext<1>(&local_c8);
    if (FVisualLogger::bIsRecording != 0) {
      FVisualLogger::CategorizedLogfImpl
                (param_1,(FName *)&LogStateTree.field_0x4,Error,
                 L"Failed to send the event. The instance probably stopped.");
    }
    if (1 < (byte)LogStateTree._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogStateTree);
    }
  }
  else {
    if (((UStateTree *)local_c8.StateTree.Object == (UStateTree *)0x0) ||
       (local_c8.Owner.Object == (UObject *)0x0)) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    FStateTreeMinimalExecutionContext::FStateTreeMinimalExecutionContext
              (&local_68,(TNotNull<UObject_*>)local_c8.Owner.Object,
               (TNotNull<UStateTree_const_*>)local_c8.StateTree.Object,local_c8.Storage.Object);
    local_88.Frame = (FStateTreeExecutionFrame *)FVar3;
    local_88.ParentFrame = (FStateTreeExecutionFrame *)FVar4;
    FStateTreeMinimalExecutionContext::SendEvent
              (&local_68,(FGameplayTag)FVar5,(FConstStructView *)&local_88,FVar2);
    FStateTreeMinimalExecutionContext::~FStateTreeMinimalExecutionContext(&local_68);
    TStateTreeStrongExecutionContext<1>::~TStateTreeStrongExecutionContext<1>(&local_c8);
  }
  FInstancedStruct::Reset(&local_e0);
  return;
}

