// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: EnhancedInput
// Functions: 24

// StaticClass @ 14a6b54d0

UClass * __cdecl UEnhancedInputWorldSubsystem::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEnhancedInputWorldSubsystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EnhancedInput",L"EnhancedInputWorldSubsystem",
               &Z_Registration_Info_UClass_UEnhancedInputWorldSubsystem.InnerSingleton,
               StaticRegisterNativesUEnhancedInputWorldSubsystem,0x200,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UEnhancedInputWorldSubsystem>,
               InternalVTableHelperCtorCaller<UEnhancedInputWorldSubsystem>,local_res8,
               UWorldSubsystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEnhancedInputWorldSubsystem.InnerSingleton;
}

// UEnhancedInputWorldSubsystem @ 14a6cbdb0

UEnhancedInputWorldSubsystem * __thiscall
UEnhancedInputWorldSubsystem::UEnhancedInputWorldSubsystem
          (UEnhancedInputWorldSubsystem *this,FVTableHelper *param_1)

{
  UWorldSubsystem::UWorldSubsystem((UWorldSubsystem *)this,param_1);
  IEnhancedInputSubsystemInterface::IEnhancedInputSubsystemInterface
            ((IEnhancedInputSubsystemInterface *)&this->_padding_);
  this->_padding_ = (longlong)&_vftable__for__UWorldSubsystem__;
  this->_padding_ = (longlong)&_vftable__for__IEnhancedInputSubsystemInterface__;
  (this->PlayerInput).field0_0x0.DebugPtr = (UEnhancedPlayerInput *)0x0;
  (this->InputPreprocessor).Object = (FEnhancedInputWorldProcessor *)0x0;
  (this->InputPreprocessor).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->CurrentInputStack).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CurrentInputStack).ArrayNum = 0;
  (this->CurrentInputStack).ArrayMax = 0;
  *(undefined8 *)&this->ContinuouslyInjectedInputs = 0;
  *(undefined8 *)&(this->ContinuouslyInjectedInputs).field_0x8 = 0;
  *(undefined8 *)&(this->ContinuouslyInjectedInputs).field_0x20 = 0;
  *(undefined4 *)&(this->ContinuouslyInjectedInputs).field_0x28 = 0;
  *(undefined4 *)&(this->ContinuouslyInjectedInputs).field_0x2c = 0x80;
  *(undefined4 *)&(this->ContinuouslyInjectedInputs).field_0x34 = 0;
  *(undefined4 *)&(this->ContinuouslyInjectedInputs).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ContinuouslyInjectedInputs).field_0x40 = 0;
  *(undefined4 *)&(this->ContinuouslyInjectedInputs).field_0x48 = 0;
  return this;
}

// UEnhancedInputWorldSubsystem @ 14a6cbe60

UEnhancedInputWorldSubsystem * __thiscall
UEnhancedInputWorldSubsystem::UEnhancedInputWorldSubsystem(UEnhancedInputWorldSubsystem *this)

{
  UWorldSubsystem::UWorldSubsystem((UWorldSubsystem *)this);
  IEnhancedInputSubsystemInterface::IEnhancedInputSubsystemInterface
            ((IEnhancedInputSubsystemInterface *)&this->_padding_);
  this->_padding_ = (longlong)&_vftable__for__UWorldSubsystem__;
  this->_padding_ = (longlong)&_vftable__for__IEnhancedInputSubsystemInterface__;
  (this->PlayerInput).field0_0x0.DebugPtr = (UEnhancedPlayerInput *)0x0;
  (this->InputPreprocessor).Object = (FEnhancedInputWorldProcessor *)0x0;
  (this->InputPreprocessor).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->CurrentInputStack).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CurrentInputStack).ArrayNum = 0;
  (this->CurrentInputStack).ArrayMax = 0;
  *(undefined8 *)&this->ContinuouslyInjectedInputs = 0;
  *(undefined8 *)&(this->ContinuouslyInjectedInputs).field_0x8 = 0;
  *(undefined8 *)&(this->ContinuouslyInjectedInputs).field_0x20 = 0;
  *(undefined4 *)&(this->ContinuouslyInjectedInputs).field_0x28 = 0;
  *(undefined4 *)&(this->ContinuouslyInjectedInputs).field_0x2c = 0x80;
  *(undefined4 *)&(this->ContinuouslyInjectedInputs).field_0x34 = 0;
  *(undefined4 *)&(this->ContinuouslyInjectedInputs).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ContinuouslyInjectedInputs).field_0x40 = 0;
  *(undefined4 *)&(this->ContinuouslyInjectedInputs).field_0x48 = 0;
  return this;
}

// ~UEnhancedInputWorldSubsystem @ 14a6cf3f0

void __thiscall
UEnhancedInputWorldSubsystem::~UEnhancedInputWorldSubsystem(UEnhancedInputWorldSubsystem *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UWorldSubsystem__;
  this->_padding_ = (longlong)&_vftable__for__IEnhancedInputSubsystemInterface__;
  *(undefined4 *)&(this->ContinuouslyInjectedInputs).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ContinuouslyInjectedInputs).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UInputAction_const_>,FInjectedInput>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UInputAction_const_>,FInjectedInput>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UInputAction_const_>,FInjectedInput>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ContinuouslyInjectedInputs);
  pFVar2 = (this->CurrentInputStack).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->InputPreprocessor).SharedReferenceCount.ReferenceController);
  IEnhancedInputSubsystemInterface::~IEnhancedInputSubsystemInterface
            ((IEnhancedInputSubsystemInterface *)&this->_padding_);
  UWorldSubsystem::~UWorldSubsystem((UWorldSubsystem *)this);
  return;
}

// AddActorInputComponent @ 14a6d3d70

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UEnhancedInputWorldSubsystem::AddActorInputComponent
          (UEnhancedInputWorldSubsystem *this,AActor *param_1)

{
  TArray<TWeakObjectPtr<UInputComponent,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *this_00;
  UInputComponent *pUVar1;
  code *pcVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  uint uVar6;
  UObject *pUVar7;
  byte local_res10 [8];
  FWeakObjectPtr local_res18;
  FWeakObjectPtr local_res20;
  FWeakObjectPtr local_48;
  UInputComponent *local_40;
  UInputComponent *local_38;
  UInputComponent *local_30;
  
  if (param_1 != (AActor *)0x0) {
    pUVar1 = (param_1->InputComponent).field0_0x0.DebugPtr;
    if (pUVar1 == (UInputComponent *)0x0) {
      if (1 < (byte)LogWorldSubsystemInput._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWorldSubsystemInput)
        ;
        return;
      }
    }
    else {
      if (UE::GC::GIsIncrementalReachabilityPending) {
        UE::GC::MarkAsReachable((UObject *)pUVar1);
      }
      this_00 = &this->CurrentInputStack;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (UE::GC::MarkAsReachable((UObject *)pUVar1),
         UE::GC::GIsIncrementalReachabilityPending != false)) {
        UE::GC::MarkAsReachable((UObject *)pUVar1);
      }
      local_res18.ObjectIndex = 0;
      local_res18.ObjectSerialNumber = 0;
      local_40 = pUVar1;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)pUVar1);
      }
      FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)&local_40);
      TArray<TWeakObjectPtr<UInputComponent,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>::
      RemoveSingle(this_00,(TWeakObjectPtr<UInputComponent,FWeakObjectPtr> *)&local_res18);
      uVar3 = (this->CurrentInputStack).ArrayNum;
      do {
        while( true ) {
          uVar4 = uVar3;
          uVar3 = uVar4 - 1;
          if ((int)uVar3 < 0) {
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (UE::GC::MarkAsReachable((UObject *)pUVar1),
               UE::GC::GIsIncrementalReachabilityPending != false)) {
              UE::GC::MarkAsReachable((UObject *)pUVar1);
            }
            local_48.ObjectIndex = 0;
            local_48.ObjectSerialNumber = 0;
            local_30 = pUVar1;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable((UObject *)pUVar1);
            }
            FWeakObjectPtr::operator=(&local_48,(FObjectPtr)&local_30);
            TArray<TWeakObjectPtr<UInputComponent,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>::
            Insert(this_00,(TWeakObjectPtr<UInputComponent,FWeakObjectPtr> *)&local_48,0);
            local_res10[0] = local_res10[0] & 0xf9 | 1;
            (**(code **)(this->_padding_ + 0xd8))(&this->_padding_,local_res10,1);
            return;
          }
          uVar6 = 0;
          if ((int)uVar3 < (this->CurrentInputStack).ArrayNum) {
            uVar6 = ~uVar3 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pUVar7 = FWeakObjectPtr::Get((FWeakObjectPtr *)
                                       ((this_00->AllocatorInstance).Data + (ulonglong)uVar3 * 8));
          if (pUVar7 != (UObject *)0x0) break;
          TArray<TWeakObjectPtr<UInputComponent,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>::
          RemoveAt(this_00,uVar3,Default);
        }
      } while (pUVar1->Priority < *(int *)(pUVar7 + 8));
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (UE::GC::MarkAsReachable((UObject *)pUVar1),
         UE::GC::GIsIncrementalReachabilityPending != false)) {
        UE::GC::MarkAsReachable((UObject *)pUVar1);
      }
      local_res20.ObjectIndex = 0;
      local_res20.ObjectSerialNumber = 0;
      local_38 = pUVar1;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)pUVar1);
      }
      FWeakObjectPtr::operator=(&local_res20,(FObjectPtr)&local_38);
      TArray<TWeakObjectPtr<UInputComponent,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>::Insert
                (this_00,(TWeakObjectPtr<UInputComponent,FWeakObjectPtr> *)&local_res20,uVar4);
    }
  }
  return;
}

// AddDefaultMappingContexts @ 14a6d4010

void __thiscall
UEnhancedInputWorldSubsystem::AddDefaultMappingContexts(UEnhancedInputWorldSubsystem *this)

{
  int *this_00;
  int iVar1;
  int iVar2;
  UObject *pUVar3;
  longlong lVar4;
  char cVar5;
  UClass *pUVar6;
  UObject *pUVar7;
  longlong *plVar8;
  FSoftObjectPath *this_01;
  byte local_res10 [8];
  undefined1 local_res18 [8];
  
  pUVar6 = UEnhancedInputDeveloperSettings::StaticClass();
  if ((pUVar6->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(pUVar6);
  }
  if ((*(byte *)((pUVar6->ClassDefaultObject).field0_0x0.DebugPtr + 6) & 4) != 0) {
    pUVar6 = UEnhancedInputDeveloperSettings::StaticClass();
    if ((pUVar6->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(pUVar6);
    }
    pUVar3 = (pUVar6->ClassDefaultObject).field0_0x0.DebugPtr;
    lVar4 = *(longlong *)&pUVar3[1].field_0x20;
    iVar1 = *(int *)(pUVar3 + 2);
    this_01 = (FSoftObjectPath *)(lVar4 + 8);
    while( true ) {
      if (*(int *)(pUVar3 + 2) != iVar1) {
        `TCheckedPointerIterator<FDefaultContextSetting_const_,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(local_res18);
      }
      this_00 = &this_01[-1].SubPathString.Data.ArrayNum;
      if (this_00 == (int *)((longlong)iVar1 * 0x30 + lVar4)) break;
      pUVar7 = TPersistentObjectPtr<FSoftObjectPath>::Get
                         ((TPersistentObjectPtr<FSoftObjectPath> *)this_00);
      if (pUVar7 == (UObject *)0x0) {
        if ((this_01->AssetPath).PackageName != (FName)0x0) {
          FSoftObjectPath::TryLoad(this_01,(FUObjectSerializeContext *)0x0);
          pUVar7 = TPersistentObjectPtr<FSoftObjectPath>::Get
                             ((TPersistentObjectPtr<FSoftObjectPath> *)this_00);
          goto LAB_14a6d40eb;
        }
LAB_14a6d41a0:
        this_01 = (FSoftObjectPath *)&this_01[1].SubPathString;
      }
      else {
LAB_14a6d40eb:
        if (pUVar7 == (UObject *)0x0) goto LAB_14a6d41a0;
        pUVar6 = UInputMappingContext::StaticClass();
        iVar2 = (int)pUVar6->_padding_;
        if ((*(int *)(*(longlong *)&pUVar7->field_0x10 + 0x38) < iVar2) ||
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)&pUVar7->field_0x10 + 0x30) + (longlong)iVar2 * 8) !=
            &pUVar6->_padding_)) goto LAB_14a6d41a0;
        if ((char)this_01[1].AssetPath.PackageName.Number == '\0') {
          if ((*(char *)((longlong)&this_01[1].AssetPath.PackageName.Number + 1) != '\0') &&
             (plVar8 = (longlong *)(**(code **)(this->_padding_ + 0x18))(&this->_padding_),
             plVar8 != (longlong *)0x0)) {
            (**(code **)(*plVar8 + 0x368))(plVar8);
          }
          goto LAB_14a6d41a0;
        }
        cVar5 = (**(code **)(this->_padding_ + 0xf8))(&this->_padding_);
        if (cVar5 != '\0') goto LAB_14a6d41a0;
        local_res10[0] =
             (*(byte *)((longlong)&this_01[1].AssetPath.PackageName.Number + 1) & 1) << 2 |
             local_res10[0] & 0xf9 | 1;
        (**(code **)(this->_padding_ + 0x98))
                  (&this->_padding_,pUVar7,this_01[1].AssetPath.PackageName.ComparisonIndex.Value,
                   local_res10);
        this_01 = (FSoftObjectPath *)&this_01[1].SubPathString;
      }
    }
  }
  return;
}

// Deinitialize @ 14a6d7ae0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UEnhancedInputWorldSubsystem::Deinitialize(UEnhancedInputWorldSubsystem *this)

{
  int *piVar1;
  TSharedPtr<FEnhancedInputWorldProcessor,1> *pTVar2;
  int iVar3;
  int iVar4;
  UObject *pUVar5;
  FSlateApplication *this_00;
  UClass *pUVar6;
  UObject *pUVar7;
  TPersistentObjectPtr<FSoftObjectPath> *this_01;
  TPersistentObjectPtr<FSoftObjectPath> *pTVar8;
  byte local_res8 [8];
  undefined1 local_res10 [8];
  undefined8 local_48;
  FSharedReferencer<1> FStack_40;
  TSharedPtr<IInputProcessor,1> local_38;
  
  pTVar2 = &this->InputPreprocessor;
  if (FSlateApplication::CurrentApplication.Object != (FSlateApplication *)0x0) {
    this_00 = FSlateApplication::Get();
    local_38.SharedReferenceCount.ReferenceController =
         (this->InputPreprocessor).SharedReferenceCount.ReferenceController;
    local_38.Object = (IInputProcessor *)pTVar2->Object;
    if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    FSlateApplication::UnregisterInputPreProcessor(this_00,&local_38);
  }
  IEnhancedInputSubsystemInterface::ValidateTrackedMappingContextsAreUnregistered
            ((IEnhancedInputSubsystemInterface *)&this->_padding_);
  local_48 = 0;
  FStack_40.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (pTVar2 != (TSharedPtr<FEnhancedInputWorldProcessor,1> *)&local_48) {
    pTVar2->Object = (FEnhancedInputWorldProcessor *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->InputPreprocessor).SharedReferenceCount,&FStack_40);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_40.ReferenceController);
  piVar1 = &(this->CurrentInputStack).ArrayMax;
  (this->CurrentInputStack).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,&(this->CurrentInputStack).AllocatorInstance,0,piVar1);
  }
  (this->PlayerInput).field0_0x0.DebugPtr = (UEnhancedPlayerInput *)0x0;
  pUVar6 = UEnhancedInputDeveloperSettings::StaticClass();
  if ((pUVar6->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(pUVar6);
  }
  if ((*(byte *)((pUVar6->ClassDefaultObject).field0_0x0.DebugPtr + 6) & 4) != 0) {
    pUVar6 = UEnhancedInputDeveloperSettings::StaticClass();
    if ((pUVar6->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(pUVar6);
    }
    pUVar5 = (pUVar6->ClassDefaultObject).field0_0x0.DebugPtr;
    iVar3 = *(int *)(pUVar5 + 2);
    this_01 = *(TPersistentObjectPtr<FSoftObjectPath> **)&pUVar5[1].field_0x20;
    pTVar8 = (TPersistentObjectPtr<FSoftObjectPath> *)((longlong)iVar3 * 0x30 + (longlong)this_01);
    while( true ) {
      if (*(int *)(pUVar5 + 2) != iVar3) {
        `TCheckedPointerIterator<FDefaultContextSetting_const_,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(local_res10);
      }
      if (this_01 == pTVar8) break;
      pUVar7 = TPersistentObjectPtr<FSoftObjectPath>::Get(this_01);
      if (pUVar7 == (UObject *)0x0) {
        if ((this_01->ObjectID).AssetPath.PackageName != (FName)0x0) {
          FSoftObjectPath::TryLoad(&this_01->ObjectID,(FUObjectSerializeContext *)0x0);
          pUVar7 = TPersistentObjectPtr<FSoftObjectPath>::Get(this_01);
          goto LAB_14a6d7c58;
        }
      }
      else {
LAB_14a6d7c58:
        if (pUVar7 != (UObject *)0x0) {
          pUVar6 = UInputMappingContext::StaticClass();
          iVar4 = (int)pUVar6->_padding_;
          if ((iVar4 <= *(int *)(*(longlong *)&pUVar7->field_0x10 + 0x38)) &&
             ((longlong *)
              *(undefined1 **)
               (*(longlong *)(*(longlong *)&pUVar7->field_0x10 + 0x30) + (longlong)iVar4 * 8) ==
              &pUVar6->_padding_)) {
            local_res8[0] =
                 (*(byte *)((longlong)&this_01[1].WeakPtr.ObjectSerialNumber + 1) & 1) << 2 |
                 local_res8[0] & 0xf9 | 1;
            (**(code **)(this->_padding_ + 0xa0))(&this->_padding_,pUVar7,local_res8);
          }
        }
      }
      this_01 = (TPersistentObjectPtr<FSoftObjectPath> *)&this_01[1].ObjectID;
    }
  }
  return;
}

// DoesSupportWorldType @ 14a6d9100

bool __thiscall
UEnhancedInputWorldSubsystem::DoesSupportWorldType(UEnhancedInputWorldSubsystem *this,Type param_1)

{
  return (param_1 - Game & 0xfffffffd) == 0;
}

// GetContinuouslyInjectedInputs @ 14a6dec30

TMap<TObjectPtr<UInputAction_const_>,FInjectedInput,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UInputAction_const_>,FInjectedInput,0>_>
* __thiscall
UEnhancedInputWorldSubsystem::GetContinuouslyInjectedInputs(UEnhancedInputWorldSubsystem *this)

{
  return (TMap<TObjectPtr<UInputAction_const_>,FInjectedInput,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UInputAction_const_>,FInjectedInput,0>_>
          *)&this->_padding_;
}

// GetPlayerInput @ 14a6e0370

UEnhancedPlayerInput * __thiscall
UEnhancedInputWorldSubsystem::GetPlayerInput(UEnhancedInputWorldSubsystem *this)

{
  return (UEnhancedPlayerInput *)this->_padding_;
}

// GetPrivateStaticClass @ 14a6e0d20

UClass * __cdecl UEnhancedInputWorldSubsystem::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEnhancedInputWorldSubsystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EnhancedInput",L"EnhancedInputWorldSubsystem",
               &Z_Registration_Info_UClass_UEnhancedInputWorldSubsystem.InnerSingleton,
               StaticRegisterNativesUEnhancedInputWorldSubsystem,0x200,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UEnhancedInputWorldSubsystem>,
               InternalVTableHelperCtorCaller<UEnhancedInputWorldSubsystem>,local_res8,
               UWorldSubsystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEnhancedInputWorldSubsystem.InnerSingleton;
}

// Initialize @ 14a6e4520

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UEnhancedInputWorldSubsystem::Initialize
          (UEnhancedInputWorldSubsystem *this,FSubsystemCollectionBase *param_1)

{
  TSharedPtr<FEnhancedInputWorldProcessor,1> *pTVar1;
  int iVar2;
  FName FVar3;
  code *pcVar4;
  bool bVar5;
  UClass *pUVar6;
  UObject *pUVar7;
  UClass *pUVar8;
  UClass *pUVar9;
  FName *pFVar10;
  UEnhancedPlayerInput *pUVar11;
  FSlateApplication *this_00;
  longlong *plVar12;
  FEnhancedInputWorldProcessor *pFVar13;
  undefined1 auStackY_148 [32];
  byte local_118 [8];
  longlong *local_110;
  FSharedReferencer<1> FStack_108;
  undefined8 local_100;
  TSharedPtr<IInputProcessor,1> local_f8;
  FName local_e8;
  TPersistentObjectPtr<FSoftObjectPath> local_e0;
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_148;
  UWorldSubsystem::Initialize((UWorldSubsystem *)this,param_1);
  pUVar6 = UEnhancedInputDeveloperSettings::StaticClass();
  if ((pUVar6->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(pUVar6);
  }
  pUVar7 = (pUVar6->ClassDefaultObject).field0_0x0.DebugPtr;
  local_e0.WeakPtr.ObjectIndex = *(int *)&pUVar7[5].field_0x0;
  local_e0.WeakPtr.ObjectSerialNumber = *(int *)&pUVar7[5].field_0x4;
  FSoftObjectPath::FSoftObjectPath(&local_e0.ObjectID,(FSoftObjectPath *)&pUVar7[5].field_0x8);
  pUVar7 = TPersistentObjectPtr<FSoftObjectPath>::Get(&local_e0);
  pUVar6 = (UClass *)0x0;
  if (pUVar7 != (UObject *)0x0) {
    pUVar8 = Z_Construct_UClass_UClass_NoRegister();
    iVar2 = (int)pUVar8->_padding_;
    if ((iVar2 <= *(int *)(*(longlong *)&pUVar7->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar7->field_0x10 + 0x30) + (longlong)iVar2 * 8) ==
        &pUVar8->_padding_)) {
      pUVar8 = UEnhancedPlayerInput::StaticClass();
      if (pUVar8 != (UClass *)0x0) {
        iVar2 = (int)pUVar8->_padding_;
        if ((*(int *)&pUVar7[1].field_0x10 < iVar2) ||
           ((longlong *)*(undefined1 **)(*(longlong *)&pUVar7[1].field_0x8 + (longlong)iVar2 * 8) !=
            &pUVar8->_padding_)) {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
        if (bVar5) {
          pUVar8 = (UClass *)TPersistentObjectPtr<FSoftObjectPath>::Get(&local_e0);
          if (pUVar8 != (UClass *)0x0) {
            pUVar9 = Z_Construct_UClass_UClass_NoRegister();
            iVar2 = (int)pUVar9->_padding_;
            if ((iVar2 <= *(int *)(pUVar8->_padding_ + 0x38)) &&
               ((longlong *)
                *(undefined1 **)(*(longlong *)(pUVar8->_padding_ + 0x30) + (longlong)iVar2 * 8) ==
                &pUVar9->_padding_)) {
              pUVar9 = UEnhancedPlayerInput::StaticClass();
              if (pUVar9 != (UClass *)0x0) {
                iVar2 = (int)pUVar9->_padding_;
                if (((int)pUVar8->_padding_ < iVar2) ||
                   ((longlong *)*(undefined1 **)(pUVar8->_padding_ + (longlong)iVar2 * 8) !=
                    &pUVar9->_padding_)) {
                  bVar5 = false;
                }
                else {
                  bVar5 = true;
                }
                if (bVar5) goto LAB_14a6e466d;
              }
            }
          }
          pUVar8 = pUVar6;
          goto LAB_14a6e466d;
        }
      }
    }
  }
  pUVar8 = UEnhancedPlayerInput::StaticClass();
LAB_14a6e466d:
  if (local_e0.ObjectID.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
  {
    FMemory::Free(local_e0.ObjectID.SubPathString.Data.AllocatorInstance.Data);
  }
  pFVar10 = ::FName::FName(&local_e8,L"EIWorldSubsystem_PlayerInput0");
  local_100 = 0;
  FVar3 = *pFVar10;
  if (FVar3 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar9 = UEnhancedPlayerInput::StaticClass();
  CheckIsClassChildOf_Internal(pUVar9,pUVar8);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar8);
  local_b8._48_8_ = (FObjectInstancingGraph *)0x0;
  local_b8._56_8_ = (UPackage *)0x0;
  local_b8._24_4_ = RF_NoFlags;
  local_b8._40_8_ = (UObject *)0x0;
  local_b8[0x20] = false;
  local_b8._8_8_ = this;
  local_b8._16_8_ = FVar3;
  pUVar11 = (UEnhancedPlayerInput *)
            StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
  if (local_b8._64_8_ != 0) {
    plVar12 = (longlong *)(local_b8 + 0x50);
    if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
      plVar12 = (longlong *)local_b8._104_8_;
    }
    (**(code **)(*plVar12 + 0x10))();
  }
  if ((UE::GC::GIsIncrementalReachabilityPending == false) ||
     (pUVar11 == (UEnhancedPlayerInput *)0x0)) {
    (this->PlayerInput).field0_0x0.DebugPtr = pUVar11;
    if (pUVar11 == (UEnhancedPlayerInput *)0x0) {
      local_118[1] = 0;
      `UEnhancedInputWorldSubsystem::Initialize'::__l2::<lambda_1>::operator()(local_118 + 1);
    }
  }
  else {
    UE::GC::MarkAsReachable((UObject *)pUVar11);
    (this->PlayerInput).field0_0x0.DebugPtr = pUVar11;
  }
  if (FSlateApplication::CurrentApplication.Object == (FSlateApplication *)0x0) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_2059040637763714878>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\EnhancedInput\\Source\\EnhancedInput\\Private\\EnhancedInputSubsystems.cpp"
                       ,0xc2,"FSlateApplication::IsInitialized()");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else {
    FStack_108.ReferenceController = ::operator_new(0x30);
    if ((UClass *)FStack_108.ReferenceController == (UClass *)0x0) {
      local_110 = ___xmm_00000000000000000000000000000010;
      pFVar13 = (FEnhancedInputWorldProcessor *)&DAT_00000010;
      FStack_108.ReferenceController = (TReferenceControllerBase<1> *)_UNK_150651568;
    }
    else {
      *(undefined4 *)&((UClass *)FStack_108.ReferenceController)->_padding_ = 1;
      pFVar13 = (FEnhancedInputWorldProcessor *)
                &((UClass *)FStack_108.ReferenceController)->_padding_;
      *(undefined4 *)((longlong)&((UClass *)FStack_108.ReferenceController)->_padding_ + 4) = 1;
      ((UClass *)FStack_108.ReferenceController)->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_VFEnhancedInputWorldProcessor___00_SharedPointerInternals__6B_
      ;
      ((UClass *)FStack_108.ReferenceController)->_padding_ =
           (longlong)&___7FEnhancedInputWorldProcessor__6B_;
      ((UClass *)FStack_108.ReferenceController)->_padding_ =
           (longlong)UE::Math::TIntPoint<int>::ZeroValue.field0_0x0;
      *(TVector2<double>_u_0 *)&((UClass *)FStack_108.ReferenceController)->_padding_ =
           (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
      if (pFVar13 == (FEnhancedInputWorldProcessor *)0x0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      LOCK();
      *(int *)&((UClass *)FStack_108.ReferenceController)->_padding_ =
           (int)((UClass *)FStack_108.ReferenceController)->_padding_ + 1;
      UNLOCK();
      pUVar6 = (UClass *)FStack_108.ReferenceController;
      local_110 = (longlong *)pFVar13;
    }
    pTVar1 = &this->InputPreprocessor;
    if (pTVar1 != (TSharedPtr<FEnhancedInputWorldProcessor,1> *)&local_110) {
      pTVar1->Object = pFVar13;
      local_110 = (longlong *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->InputPreprocessor).SharedReferenceCount,&FStack_108);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_108.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pUVar6);
    this_00 = FSlateApplication::Get();
    local_f8.Object = (IInputProcessor *)pTVar1->Object;
    local_f8.SharedReferenceCount.ReferenceController =
         (this->InputPreprocessor).SharedReferenceCount.ReferenceController;
    if (local_f8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_f8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_f8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    FSlateApplication::RegisterInputPreProcessor(this_00,&local_f8);
  }
  AddDefaultMappingContexts(this);
  local_118[0] = local_118[0] & 0xf9 | 1;
  (**(code **)(this->_padding_ + 0xd8))(&this->_padding_,local_118,1);
  return;
}

// InputKey @ 14a6e5470

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UEnhancedInputWorldSubsystem::InputKey
          (UEnhancedInputWorldSubsystem *this,FInputKeyEventArgs *param_1)

{
  UEnhancedPlayerInput *pUVar1;
  undefined1 uVar2;
  UWorld *pUVar3;
  undefined1 local_res8 [8];
  FString local_18;
  
  if ((this->PlayerInput).field0_0x0.DebugPtr != (UEnhancedPlayerInput *)0x0) {
    if (6 < (byte)LogWorldSubsystemInput._0_1_) {
      FKey::ToString(&param_1->Key,&local_18);
      pUVar3 = UWorldSubsystem::GetWorld((UWorldSubsystem *)this);
      ::LexToString((uint)(pUVar3->WorldType).Value);
      UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogWorldSubsystemInput);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
    pUVar1 = (this->PlayerInput).field0_0x0.DebugPtr;
                    /* WARNING: Could not recover jumptable at 0x00014a6e5514. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(pUVar1->_padding_ + 0x2b8))(pUVar1,param_1);
    return (bool)uVar2;
  }
  `UEnhancedInputWorldSubsystem::InputKey'::__l2::<lambda_1>::operator()(local_res8);
  return false;
}

// RemoveActorInputComponent @ 14a6f2570

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
UEnhancedInputWorldSubsystem::RemoveActorInputComponent
          (UEnhancedInputWorldSubsystem *this,AActor *param_1)

{
  UInputComponent *this_00;
  int iVar1;
  FWeakObjectPtr local_res10;
  UInputComponent *local_res18 [2];
  
  if ((param_1 != (AActor *)0x0) &&
     (this_00 = (param_1->InputComponent).field0_0x0.DebugPtr, this_00 != (UInputComponent *)0x0)) {
    if (UE::GC::GIsIncrementalReachabilityPending) {
      UE::GC::MarkAsReachable((UObject *)this_00);
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this_00);
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this_00);
        }
      }
    }
    local_res10.ObjectIndex = 0;
    local_res10.ObjectSerialNumber = 0;
    local_res18[0] = this_00;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this_00);
    }
    FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)local_res18);
    iVar1 = TArray<TWeakObjectPtr<UInputComponent,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>::
            RemoveSingle(&this->CurrentInputStack,
                         (TWeakObjectPtr<UInputComponent,FWeakObjectPtr> *)&local_res10);
    if (0 < iVar1) {
      UInputComponent::ClearBindingValues(this_00);
      local_res10 = (FWeakObjectPtr)((ulonglong)local_res10 & 0xfffffffffffffff9 | 1);
      (**(code **)(this->_padding_ + 0xd8))(&this->_padding_,&local_res10,1);
      return true;
    }
  }
  return false;
}

// RemoveDefaultMappingContexts @ 14a6f2d20

void __thiscall
UEnhancedInputWorldSubsystem::RemoveDefaultMappingContexts(UEnhancedInputWorldSubsystem *this)

{
  int iVar1;
  int iVar2;
  UObject *pUVar3;
  UClass *pUVar4;
  UObject *pUVar5;
  TPersistentObjectPtr<FSoftObjectPath> *this_00;
  TPersistentObjectPtr<FSoftObjectPath> *pTVar6;
  byte local_res10 [8];
  undefined1 local_res18 [16];
  
  pUVar4 = UEnhancedInputDeveloperSettings::StaticClass();
  if ((pUVar4->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(pUVar4);
  }
  if ((*(byte *)((pUVar4->ClassDefaultObject).field0_0x0.DebugPtr + 6) & 4) != 0) {
    pUVar4 = UEnhancedInputDeveloperSettings::StaticClass();
    if ((pUVar4->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(pUVar4);
    }
    pUVar3 = (pUVar4->ClassDefaultObject).field0_0x0.DebugPtr;
    iVar1 = *(int *)(pUVar3 + 2);
    this_00 = *(TPersistentObjectPtr<FSoftObjectPath> **)&pUVar3[1].field_0x20;
    pTVar6 = (TPersistentObjectPtr<FSoftObjectPath> *)((longlong)iVar1 * 0x30 + (longlong)this_00);
    while( true ) {
      if (*(int *)(pUVar3 + 2) != iVar1) {
        `TCheckedPointerIterator<FDefaultContextSetting_const_,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(local_res18);
      }
      if (this_00 == pTVar6) break;
      pUVar5 = TPersistentObjectPtr<FSoftObjectPath>::Get(this_00);
      if (pUVar5 == (UObject *)0x0) {
        if ((this_00->ObjectID).AssetPath.PackageName != (FName)0x0) {
          FSoftObjectPath::TryLoad(&this_00->ObjectID,(FUObjectSerializeContext *)0x0);
          pUVar5 = TPersistentObjectPtr<FSoftObjectPath>::Get(this_00);
          goto LAB_14a6f2de6;
        }
      }
      else {
LAB_14a6f2de6:
        if (pUVar5 != (UObject *)0x0) {
          pUVar4 = UInputMappingContext::StaticClass();
          iVar2 = (int)pUVar4->_padding_;
          if ((iVar2 <= *(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38)) &&
             ((longlong *)
              *(undefined1 **)
               (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) + (longlong)iVar2 * 8) ==
              &pUVar4->_padding_)) {
            local_res10[0] =
                 (*(byte *)((longlong)&this_00[1].WeakPtr.ObjectSerialNumber + 1) & 1) << 2 |
                 local_res10[0] & 0xf9 | 1;
            (**(code **)(this->_padding_ + 0xa0))(&this->_padding_,pUVar5,local_res10);
          }
        }
      }
      this_00 = (TPersistentObjectPtr<FSoftObjectPath> *)&this_00[1].ObjectID;
    }
  }
  return;
}

// ShouldCreateSubsystem @ 14a6f6690

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UEnhancedInputWorldSubsystem::ShouldCreateSubsystem
          (UEnhancedInputWorldSubsystem *this,UObject *param_1)

{
  bool bVar1;
  UClass *this_00;
  
  bVar1 = UWorldSubsystem::ShouldCreateSubsystem((UWorldSubsystem *)this,param_1);
  if ((bVar1) && (FSlateApplication::CurrentApplication.Object != (FSlateApplication *)0x0)) {
    this_00 = UEnhancedInputDeveloperSettings::StaticClass();
    if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(this_00);
    }
    bVar1 = (bool)(*(byte *)((this_00->ClassDefaultObject).field0_0x0.DebugPtr + 6) >> 5 & 1);
    if ((bVar1 == false) && (5 < (byte)LogWorldSubsystemInput._0_1_)) {
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogWorldSubsystemInput);
    }
    return bVar1;
  }
  return false;
}

// ShowDebugInfo @ 14a6f7c10

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
UEnhancedInputWorldSubsystem::ShowDebugInfo(UEnhancedInputWorldSubsystem *this,UCanvas *param_1)

{
  float fVar1;
  uint uVar2;
  UEnhancedPlayerInput *pUVar3;
  UWorld *pUVar4;
  float fVar5;
  float fVar6;
  float local_res10 [2];
  FString local_18;
  
  if (param_1 != (UCanvas *)0x0) {
    pUVar3 = (UEnhancedPlayerInput *)(**(code **)(this->_padding_ + 0x10))();
    fVar1 = __real_3b808081;
    if (pUVar3 == (UEnhancedPlayerInput *)0x0) {
      uVar2 = (uint)FColor::Orange.field0_0x0._s_0.A;
      fVar6 = (float)FColor::Orange.field0_0x0._1_1_ * __real_3b808081;
      fVar5 = (float)FColor::Orange.field0_0x0._0_1_ * __real_3b808081;
      *(float *)&(param_1->DisplayDebugManager).DebugTextItem._padding_ =
           (float)FColor::Orange.field0_0x0._2_1_ * __real_3b808081;
      *(float *)((longlong)&(param_1->DisplayDebugManager).DebugTextItem._padding_ + 4) = fVar6;
      *(float *)&(param_1->DisplayDebugManager).DebugTextItem._padding_ = fVar5;
      *(float *)((longlong)&(param_1->DisplayDebugManager).DebugTextItem._padding_ + 4) =
           (float)uVar2 * fVar1;
      local_res10[0] = 0.0;
      ::FString::FString(&local_18,L"This player does not support Enhanced Input.");
      FDisplayDebugManager::DrawString(&param_1->DisplayDebugManager,&local_18,local_res10);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
    else {
      uVar2 = (uint)FColor::White.field0_0x0._s_0.A;
      fVar6 = (float)FColor::White.field0_0x0._1_1_ * __real_3b808081;
      fVar5 = (float)FColor::White.field0_0x0._0_1_ * __real_3b808081;
      *(float *)&(param_1->DisplayDebugManager).DebugTextItem._padding_ =
           (float)FColor::White.field0_0x0._2_1_ * __real_3b808081;
      *(float *)((longlong)&(param_1->DisplayDebugManager).DebugTextItem._padding_ + 4) = fVar6;
      *(float *)&(param_1->DisplayDebugManager).DebugTextItem._padding_ = fVar5;
      *(float *)((longlong)&(param_1->DisplayDebugManager).DebugTextItem._padding_ + 4) =
           (float)uVar2 * fVar1;
      local_res10[0] = 0.0;
      pUVar4 = UWorldSubsystem::GetWorld
                         ((UWorldSubsystem *)&this[-1].ContinuouslyInjectedInputs.field_0x18);
      ::LexToString((uint)(pUVar4->WorldType).Value);
      ::FString::PrintfImpl(&local_18,L"World Subsystem from %s");
      FDisplayDebugManager::DrawString(&param_1->DisplayDebugManager,&local_18,local_res10);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      IEnhancedInputSubsystemInterface::ShowMappingContextDebugInfo
                ((IEnhancedInputSubsystemInterface *)this,param_1,pUVar3);
    }
  }
  return;
}

// StaticRegisterNativesUEnhancedInputWorldSubsystem @ 14a6fb500

void __cdecl UEnhancedInputWorldSubsystem::StaticRegisterNativesUEnhancedInputWorldSubsystem(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_UEnhancedInputWorldSubsystem_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// TickPlayerInput @ 14a6fc390

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UEnhancedInputWorldSubsystem::TickPlayerInput(UEnhancedInputWorldSubsystem *this,float param_1)

{
  int *piVar1;
  TArray<TWeakObjectPtr<UInputComponent,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *_Dst;
  UEnhancedPlayerInput *pUVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  UWorld *this_00;
  longlong lVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  bool bVar12;
  bool bVar13;
  UObject *local_48 [4];
  
  bVar12 = -1 < CpuChannel->Enabled;
  if (bVar12) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId231,"UEnhancedInputWorldSubsystem::TickPlayerInput",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\EnhancedInput\\Source\\EnhancedInput\\Private\\EnhancedInputSubsystems.cpp"
               ,0xe7);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId231);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    atexit(`UEnhancedInputWorldSubsystem::TickPlayerInput'::__l2::
           _dynamic_atexit_destructor_for__InputStack__);
    _Init_thread_footer(&::_TSS0);
  }
  InputStack.ArrayNum = 0;
  if ((InputStack.ArrayMax < 0) && (InputStack.ArrayMax != 0)) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&InputStack.AllocatorInstance,0,&InputStack.ArrayMax);
  }
  bVar13 = -1 < CpuChannel->Enabled;
  if (bVar13) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId238,
               "UEnhancedInputWorldSubsystem::TickPlayerInput::BuildInputStack",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\EnhancedInput\\Source\\EnhancedInput\\Private\\EnhancedInputSubsystems.cpp"
               ,0xee);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId238);
  }
  uVar11 = 0;
  if (0 < (this->CurrentInputStack).ArrayNum) {
    pTVar2 = &this->CurrentInputStack;
    do {
      uVar9 = ~uVar11 >> 0x1f;
      uVar10 = 0;
      if ((int)uVar11 < (this->CurrentInputStack).ArrayNum) {
        uVar10 = uVar9;
      }
      if ((uVar10 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      local_48[0] = FWeakObjectPtr::Get((FWeakObjectPtr *)
                                        ((pTVar2->AllocatorInstance).Data +
                                        (longlong)(int)uVar11 * 8));
      if (local_48[0] == (UObject *)0x0) {
        uVar10 = uVar11 - 1;
        uVar6 = 0;
        if ((int)uVar11 < (this->CurrentInputStack).ArrayNum) {
          uVar6 = uVar9;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        _Dst = (pTVar2->AllocatorInstance).Data + (longlong)(int)uVar11 * 8;
        iVar8 = (this->CurrentInputStack).ArrayNum + ~uVar11;
        if (iVar8 != 0) {
          memmove(_Dst,_Dst + 8,(longlong)iVar8 << 3);
        }
        piVar1 = &(this->CurrentInputStack).ArrayNum;
        *piVar1 = *piVar1 + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,4,&pTVar2->AllocatorInstance,(this->CurrentInputStack).ArrayNum,
                   &(this->CurrentInputStack).ArrayMax);
      }
      else {
        if (((InputStack.AllocatorInstance.Data <= (FScriptContainerElement *)local_48) &&
            ((FScriptContainerElement *)local_48 <
             InputStack.AllocatorInstance.Data + (longlong)InputStack.ArrayMax * 8)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if (InputStack.ArrayNum == InputStack.ArrayMax) {
          InputStack.ArrayNum =
               UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,&InputStack.AllocatorInstance,&InputStack.ArrayMax);
        }
        lVar7 = (longlong)InputStack.ArrayNum;
        InputStack.ArrayNum = InputStack.ArrayNum + 1;
        *(UObject **)(InputStack.AllocatorInstance.Data + lVar7 * 8) = local_48[0];
        uVar10 = uVar11;
      }
      uVar11 = uVar10 + 1;
    } while ((int)uVar11 < (this->CurrentInputStack).ArrayNum);
  }
  if (bVar13) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  UPlayerInput::Tick((UPlayerInput *)(this->PlayerInput).field0_0x0.DebugPtr,param_1);
  pUVar3 = (this->PlayerInput).field0_0x0.DebugPtr;
  pcVar4 = *(code **)(pUVar3->_padding_ + 0x2c8);
  this_00 = UWorldSubsystem::GetWorld((UWorldSubsystem *)this);
  bVar13 = UWorld::IsPaused(this_00);
  (*pcVar4)(pUVar3,&InputStack,param_1,bVar13);
  if (bVar12) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// _getUObject @ 14a703010

UObject * __thiscall UEnhancedInputWorldSubsystem::_getUObject(UEnhancedInputWorldSubsystem *this)

{
  return (UObject *)&this[-1].ContinuouslyInjectedInputs.field_0x18;
}

// execAddActorInputComponent @ 14a703020

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UEnhancedInputWorldSubsystem::execAddActorInputComponent
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 *this;
  FProperty *pFVar1;
  UObject *pUVar2;
  code *pcVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  uint uVar7;
  UObject *pUVar8;
  byte local_res10 [16];
  longlong local_res20;
  FWeakObjectPtr local_58;
  FWeakObjectPtr local_50;
  FWeakObjectPtr local_48;
  UObject *local_40;
  UObject *local_38;
  UObject *local_30;
  
  local_res20 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res20 != 0) {
    pUVar2 = *(UObject **)(local_res20 + 0x178);
    if (pUVar2 == (UObject *)0x0) {
      if (1 < (byte)LogWorldSubsystemInput._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWorldSubsystemInput)
        ;
        return;
      }
    }
    else {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(pUVar2);
      }
      this = &param_1[10].field_0x10;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (UE::GC::MarkAsReachable(pUVar2), UE::GC::GIsIncrementalReachabilityPending != false)) {
        UE::GC::MarkAsReachable(pUVar2);
      }
      local_58.ObjectIndex = 0;
      local_58.ObjectSerialNumber = 0;
      local_40 = pUVar2;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(pUVar2);
      }
      FWeakObjectPtr::operator=(&local_58,(FObjectPtr)&local_40);
      TArray<TWeakObjectPtr<UInputComponent,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>::
      RemoveSingle((TArray<TWeakObjectPtr<UInputComponent,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
                    *)this,(TWeakObjectPtr<UInputComponent,FWeakObjectPtr> *)&local_58);
      uVar4 = *(uint *)&param_1[10].field_0x18;
      do {
        while( true ) {
          uVar5 = uVar4;
          uVar4 = uVar5 - 1;
          if ((int)uVar4 < 0) {
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (UE::GC::MarkAsReachable(pUVar2), UE::GC::GIsIncrementalReachabilityPending != false)
               ) {
              UE::GC::MarkAsReachable(pUVar2);
            }
            local_48.ObjectIndex = 0;
            local_48.ObjectSerialNumber = 0;
            local_30 = pUVar2;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable(pUVar2);
            }
            FWeakObjectPtr::operator=(&local_48,(FObjectPtr)&local_30);
            TArray<TWeakObjectPtr<UInputComponent,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>::
            Insert((TArray<TWeakObjectPtr<UInputComponent,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
                    *)this,(TWeakObjectPtr<UInputComponent,FWeakObjectPtr> *)&local_48,0);
            local_res10[0] = local_res10[0] & 0xf9 | 1;
            (**(code **)(*(longlong *)&param_1[1].field_0x10 + 0xd8))
                      (&param_1[1].field_0x10,local_res10,1);
            return;
          }
          uVar7 = 0;
          if ((int)uVar4 < *(int *)&param_1[10].field_0x18) {
            uVar7 = ~uVar4 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pUVar8 = FWeakObjectPtr::Get((FWeakObjectPtr *)(*(longlong *)this + (ulonglong)uVar4 * 8))
          ;
          if (pUVar8 != (UObject *)0x0) break;
          TArray<TWeakObjectPtr<UInputComponent,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>::
          RemoveAt((TArray<TWeakObjectPtr<UInputComponent,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
                    *)this,uVar4,Default);
        }
      } while (*(int *)(pUVar2 + 8) < *(int *)(pUVar8 + 8));
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (UE::GC::MarkAsReachable(pUVar2), UE::GC::GIsIncrementalReachabilityPending != false)) {
        UE::GC::MarkAsReachable(pUVar2);
      }
      local_50.ObjectIndex = 0;
      local_50.ObjectSerialNumber = 0;
      local_38 = pUVar2;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(pUVar2);
      }
      FWeakObjectPtr::operator=(&local_50,(FObjectPtr)&local_38);
      TArray<TWeakObjectPtr<UInputComponent,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>::Insert
                ((TArray<TWeakObjectPtr<UInputComponent,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
                  *)this,(TWeakObjectPtr<UInputComponent,FWeakObjectPtr> *)&local_50,uVar5);
    }
  }
  return;
}

// execRemoveActorInputComponent @ 14a7074d0

void __cdecl
UEnhancedInputWorldSubsystem::execRemoveActorInputComponent
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UInputComponent *this;
  int iVar2;
  FWeakObjectPtr local_res10;
  longlong local_res18;
  UInputComponent *local_res20;
  
  local_res18 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((local_res18 != 0) &&
     (this = *(UInputComponent **)(local_res18 + 0x178), this != (UInputComponent *)0x0)) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
      }
    }
    local_res10.ObjectIndex = 0;
    local_res10.ObjectSerialNumber = 0;
    local_res20 = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)&local_res20);
    iVar2 = TArray<TWeakObjectPtr<UInputComponent,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>::
            RemoveSingle((TArray<TWeakObjectPtr<UInputComponent,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
                          *)&param_1[10].field_0x10,
                         (TWeakObjectPtr<UInputComponent,FWeakObjectPtr> *)&local_res10);
    if (0 < iVar2) {
      UInputComponent::ClearBindingValues(this);
      local_res10 = (FWeakObjectPtr)((ulonglong)local_res10 & 0xfffffffffffffff9 | 1);
      (**(code **)(*(longlong *)&param_1[1].field_0x10 + 0xd8))
                (&param_1[1].field_0x10,&local_res10,1);
      *(undefined1 *)param_3 = 1;
      return;
    }
  }
  *(undefined1 *)param_3 = 0;
  return;
}

// operator() @ 150552870

bool __thiscall `UEnhancedInputWorldSubsystem::Initialize'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_2059040637763714880>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_2059040637763714880>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1505528b0

bool __thiscall `UEnhancedInputWorldSubsystem::InputKey'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_2059040637763714755>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_2059040637763714755>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

