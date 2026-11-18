// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 38

// StaticClass @ 147b9e3b0

UClass * __cdecl UInputDeviceSubsystem::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInputDeviceSubsystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"InputDeviceSubsystem",
               &Z_Registration_Info_UClass_UInputDeviceSubsystem.InnerSingleton,
               StaticRegisterNativesUInputDeviceSubsystem,0x1a0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UInputDeviceSubsystem>,
               InternalVTableHelperCtorCaller<UInputDeviceSubsystem>,local_res8,
               UEngineSubsystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInputDeviceSubsystem.InnerSingleton;
}

// UInputDeviceSubsystem @ 147bbcf70

UInputDeviceSubsystem * __thiscall
UInputDeviceSubsystem::UInputDeviceSubsystem(UInputDeviceSubsystem *this,FVTableHelper *param_1)

{
  UEngineSubsystem::UEngineSubsystem((UEngineSubsystem *)this,param_1);
  FTickableGameObject::FTickableGameObject((FTickableGameObject *)&this->_padding_,NewObject);
  this->_padding_ = (longlong)&_vftable__for__UEngineSubsystem__;
  this->_padding_ = (longlong)&_vftable__for__FTickableGameObject__;
  *(undefined8 *)&this->OnInputHardwareDeviceChanged = 0;
  *(undefined8 *)&(this->OnInputHardwareDeviceChanged).field_0x8 = 0;
  *(undefined8 *)&(this->OnInputHardwareDeviceChanged).field_0x10 = 0;
  *(undefined8 *)&(this->ActiveProperties).Elements = 0;
  *(undefined8 *)&(this->ActiveProperties).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->ActiveProperties).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->ActiveProperties).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->ActiveProperties).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->ActiveProperties).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->ActiveProperties).Elements.field_0x30 = 0xffffffff;
  (this->ActiveProperties).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->ActiveProperties).HashSize = 0;
  *(undefined8 *)&(this->PropertiesPendingRemoval).Elements = 0;
  *(undefined8 *)&(this->PropertiesPendingRemoval).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->PropertiesPendingRemoval).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->PropertiesPendingRemoval).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->PropertiesPendingRemoval).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->PropertiesPendingRemoval).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->PropertiesPendingRemoval).Elements.field_0x30 = 0xffffffff;
  (this->PropertiesPendingRemoval).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->PropertiesPendingRemoval).HashSize = 0;
  *(undefined8 *)&this->LatestInputDeviceIdentifiers = 0;
  *(undefined8 *)&(this->LatestInputDeviceIdentifiers).field_0x8 = 0;
  *(undefined8 *)&(this->LatestInputDeviceIdentifiers).field_0x20 = 0;
  *(undefined4 *)&(this->LatestInputDeviceIdentifiers).field_0x28 = 0;
  *(undefined4 *)&(this->LatestInputDeviceIdentifiers).field_0x2c = 0x80;
  *(undefined4 *)&(this->LatestInputDeviceIdentifiers).field_0x34 = 0;
  *(undefined4 *)&(this->LatestInputDeviceIdentifiers).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->LatestInputDeviceIdentifiers).field_0x40 = 0;
  *(undefined4 *)&(this->LatestInputDeviceIdentifiers).field_0x48 = 0;
  *(undefined8 *)&this->LatestUserDeviceIdentifiers = 0;
  *(undefined8 *)&(this->LatestUserDeviceIdentifiers).field_0x8 = 0;
  *(undefined8 *)&(this->LatestUserDeviceIdentifiers).field_0x20 = 0;
  *(undefined4 *)&(this->LatestUserDeviceIdentifiers).field_0x28 = 0;
  *(undefined4 *)&(this->LatestUserDeviceIdentifiers).field_0x2c = 0x80;
  *(undefined4 *)&(this->LatestUserDeviceIdentifiers).field_0x34 = 0;
  *(undefined4 *)&(this->LatestUserDeviceIdentifiers).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->LatestUserDeviceIdentifiers).field_0x40 = 0;
  *(undefined4 *)&(this->LatestUserDeviceIdentifiers).field_0x48 = 0;
  (this->InputPreprocessor).Object = (FInputDeviceSubsystemProcessor *)0x0;
  (this->InputPreprocessor).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return this;
}

// UInputDeviceSubsystem @ 147bbd0d0

UInputDeviceSubsystem * __thiscall
UInputDeviceSubsystem::UInputDeviceSubsystem(UInputDeviceSubsystem *this)

{
  UEngineSubsystem::UEngineSubsystem((UEngineSubsystem *)this);
  FTickableGameObject::FTickableGameObject((FTickableGameObject *)&this->_padding_,NewObject);
  this->_padding_ = (longlong)&_vftable__for__UEngineSubsystem__;
  this->_padding_ = (longlong)&_vftable__for__FTickableGameObject__;
  *(undefined8 *)&this->OnInputHardwareDeviceChanged = 0;
  *(undefined8 *)&(this->OnInputHardwareDeviceChanged).field_0x8 = 0;
  *(undefined8 *)&(this->OnInputHardwareDeviceChanged).field_0x10 = 0;
  *(undefined8 *)&(this->ActiveProperties).Elements = 0;
  *(undefined8 *)&(this->ActiveProperties).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->ActiveProperties).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->ActiveProperties).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->ActiveProperties).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->ActiveProperties).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->ActiveProperties).Elements.field_0x30 = 0xffffffff;
  (this->ActiveProperties).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->ActiveProperties).HashSize = 0;
  *(undefined8 *)&(this->PropertiesPendingRemoval).Elements = 0;
  *(undefined8 *)&(this->PropertiesPendingRemoval).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->PropertiesPendingRemoval).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->PropertiesPendingRemoval).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->PropertiesPendingRemoval).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->PropertiesPendingRemoval).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->PropertiesPendingRemoval).Elements.field_0x30 = 0xffffffff;
  (this->PropertiesPendingRemoval).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->PropertiesPendingRemoval).HashSize = 0;
  *(undefined8 *)&this->LatestInputDeviceIdentifiers = 0;
  *(undefined8 *)&(this->LatestInputDeviceIdentifiers).field_0x8 = 0;
  *(undefined8 *)&(this->LatestInputDeviceIdentifiers).field_0x20 = 0;
  *(undefined4 *)&(this->LatestInputDeviceIdentifiers).field_0x28 = 0;
  *(undefined4 *)&(this->LatestInputDeviceIdentifiers).field_0x2c = 0x80;
  *(undefined4 *)&(this->LatestInputDeviceIdentifiers).field_0x34 = 0;
  *(undefined4 *)&(this->LatestInputDeviceIdentifiers).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->LatestInputDeviceIdentifiers).field_0x40 = 0;
  *(undefined4 *)&(this->LatestInputDeviceIdentifiers).field_0x48 = 0;
  *(undefined8 *)&this->LatestUserDeviceIdentifiers = 0;
  *(undefined8 *)&(this->LatestUserDeviceIdentifiers).field_0x8 = 0;
  *(undefined8 *)&(this->LatestUserDeviceIdentifiers).field_0x20 = 0;
  *(undefined4 *)&(this->LatestUserDeviceIdentifiers).field_0x28 = 0;
  *(undefined4 *)&(this->LatestUserDeviceIdentifiers).field_0x2c = 0x80;
  *(undefined4 *)&(this->LatestUserDeviceIdentifiers).field_0x34 = 0;
  *(undefined4 *)&(this->LatestUserDeviceIdentifiers).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->LatestUserDeviceIdentifiers).field_0x40 = 0;
  *(undefined4 *)&(this->LatestUserDeviceIdentifiers).field_0x48 = 0;
  (this->InputPreprocessor).Object = (FInputDeviceSubsystemProcessor *)0x0;
  (this->InputPreprocessor).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return this;
}

// ~UInputDeviceSubsystem @ 147bbf790

void __thiscall UInputDeviceSubsystem::~UInputDeviceSubsystem(UInputDeviceSubsystem *this)

{
  void *pvVar1;
  ForElementType<FSetElementId> FVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UEngineSubsystem__;
  this->_padding_ = (longlong)&_vftable__for__FTickableGameObject__;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->InputPreprocessor).SharedReferenceCount.ReferenceController);
  *(undefined4 *)&(this->LatestUserDeviceIdentifiers).field_0x48 = 0;
  pvVar1 = *(void **)&(this->LatestUserDeviceIdentifiers).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FPlatformUserId,UInputDeviceSubsystem::FLatestInputDeviceData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FPlatformUserId,UInputDeviceSubsystem::FLatestInputDeviceData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FPlatformUserId,UInputDeviceSubsystem::FLatestInputDeviceData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->LatestUserDeviceIdentifiers);
  *(undefined4 *)&(this->LatestInputDeviceIdentifiers).field_0x48 = 0;
  pvVar1 = *(void **)&(this->LatestInputDeviceIdentifiers).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FInputDeviceId,FHardwareDeviceIdentifier>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FInputDeviceId,FHardwareDeviceIdentifier>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FInputDeviceId,FHardwareDeviceIdentifier>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->LatestInputDeviceIdentifiers);
  (this->PropertiesPendingRemoval).HashSize = 0;
  FVar2 = (this->PropertiesPendingRemoval).Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TSparseArray<TSparseSetElement<FInputDevicePropertyHandle>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FInputDevicePropertyHandle>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->PropertiesPendingRemoval).Elements);
  (this->ActiveProperties).HashSize = 0;
  FVar2 = (this->ActiveProperties).Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TSparseArray<TSparseSetElement<FActiveDeviceProperty>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FActiveDeviceProperty>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->ActiveProperties).Elements);
  pvVar1 = *(void **)&(this->OnInputHardwareDeviceChanged).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnInputHardwareDeviceChanged);
  FTickableGameObject::~FTickableGameObject((FTickableGameObject *)&this->_padding_);
  UEngineSubsystem::~UEngineSubsystem((UEngineSubsystem *)this);
  return;
}

// ActivateDeviceProperty @ 147bc7e60

/* WARNING: Enum "Type": Some values do not have unique names */

FInputDevicePropertyHandle __thiscall
UInputDeviceSubsystem::ActivateDeviceProperty
          (UInputDeviceSubsystem *this,UInputDeviceProperty *param_1,
          FActivateDevicePropertyParams *param_2)

{
  bool bVar1;
  FInputDevicePropertyHandle FVar2;
  IPlatformInputDeviceMapper *pIVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  int *in_R9;
  FWeakObjectPtr local_res18 [2];
  FWeakObjectPtr local_38;
  undefined8 local_30;
  undefined8 local_28;
  uint local_20;
  byte local_1c;
  
  FVar2.InternalId = (uint)param_1;
  if (param_2 == (FActivateDevicePropertyParams *)0x0) {
    if (1 < (byte)LogInputDeviceProperties._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogInputDeviceProperties)
      ;
      *(uint *)&param_1->_padding_ = FInputDevicePropertyHandle::InvalidHandle.InternalId;
      return (FInputDevicePropertyHandle)FVar2.InternalId;
    }
LAB_147bc7edb:
    *(uint *)&param_1->_padding_ = FInputDevicePropertyHandle::InvalidHandle.InternalId;
    return (FInputDevicePropertyHandle)FVar2.InternalId;
  }
  if (*in_R9 == -1) {
    if (1 < (byte)LogInputDeviceProperties._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogInputDeviceProperties)
      ;
    }
    goto LAB_147bc7edb;
  }
  uVar6 = GHandleIndex + 1;
  GHandleIndex = uVar6;
  if (uVar6 == FInputDevicePropertyHandle::InvalidHandle.InternalId) {
    bVar1 = `UInputDeviceSubsystem::ActivateDeviceProperty'::__l45::<lambda_1>::operator()
                      (local_res18);
    if (!bVar1) goto LAB_147bc7fe2;
  }
  local_38.ObjectIndex = 0;
  local_38.ObjectSerialNumber = 0;
  local_res18[0].ObjectIndex = 0;
  local_res18[0].ObjectSerialNumber = 0;
  FWeakObjectPtr::operator=(&local_38,(FObjectPtr)local_res18);
  local_1c = local_1c & 0xf0;
  local_30 = 0;
  local_28 = 0xffffffffffffffff;
  local_20 = FInputDevicePropertyHandle::InvalidHandle.InternalId;
  local_res18[0] = (FWeakObjectPtr)param_2;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)param_2);
  }
  FWeakObjectPtr::operator=(&local_38,(FObjectPtr)local_res18);
  iVar5 = in_R9[1];
  local_28 = CONCAT44(local_28._4_4_,*in_R9);
  if (iVar5 < 0) {
    pIVar3 = IPlatformInputDeviceMapper::Get();
    piVar4 = (int *)(**(code **)(pIVar3->_padding_ + 0x70))(pIVar3,local_res18,*in_R9);
    iVar5 = *piVar4;
  }
  local_28 = CONCAT44(iVar5,(undefined4)local_28);
  local_1c = *(byte *)(in_R9 + 2) & 7 | local_1c & 0xf8;
  local_20 = uVar6;
  TSet<FActiveDeviceProperty,DefaultKeyFuncs<FActiveDeviceProperty,0>,FDefaultSetAllocator>::
  Emplace<FActiveDeviceProperty_const_&>
            (&this->ActiveProperties,(FActiveDeviceProperty *)local_res18,(bool *)&local_38);
LAB_147bc7fe2:
  *(uint *)&param_1->_padding_ = uVar6;
  return (FInputDevicePropertyHandle)FVar2.InternalId;
}

// ActivateDevicePropertyOfClass @ 147bc8000

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FInputDevicePropertyHandle __thiscall
UInputDeviceSubsystem::ActivateDevicePropertyOfClass
          (UInputDeviceSubsystem *this,TSubclassOf<UInputDeviceProperty> param_1,
          FActivateDevicePropertyParams *param_2)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  FName FVar4;
  FName FVar5;
  UClass *pUVar6;
  UClass *pUVar7;
  UObject *pUVar8;
  longlong *plVar9;
  undefined1 auStack_f8 [32];
  FName local_d8;
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_f8;
  lVar2 = *(longlong *)param_2;
  if ((lVar2 != 0) && (pUVar6 = UInputDeviceProperty::StaticClass(), pUVar6 != (UClass *)0x0)) {
    iVar1 = (int)pUVar6->_padding_;
    if ((*(int *)(lVar2 + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar6->_padding_)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if ((bVar3) && (lVar2 = *(longlong *)param_2, lVar2 != 0)) {
      pUVar6 = (UClass *)0x0;
      local_d8.ComparisonIndex.Value = 0;
      local_d8.Number = 0;
      pUVar7 = UInputDeviceProperty::StaticClass();
      FVar4 = local_d8;
      if (pUVar7 != (UClass *)0x0) {
        iVar1 = (int)pUVar7->_padding_;
        if ((*(int *)(lVar2 + 0x38) < iVar1) ||
           ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
            &pUVar7->_padding_)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) {
          pUVar6 = *(UClass **)param_2;
        }
      }
      if (local_d8 == (FName)0x0) {
        FObjectInitializer::AssertIfInConstructor
                  ((UObject *)this,
                   L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                  );
      }
      pUVar7 = UInputDeviceProperty::StaticClass();
      CheckIsClassChildOf_Internal(pUVar7,pUVar6);
      FStaticConstructObjectParameters::FStaticConstructObjectParameters
                ((FStaticConstructObjectParameters *)local_c8,pUVar6);
      FVar5 = local_d8;
      local_c8._48_8_ = (FObjectInstancingGraph *)0x0;
      local_c8._56_8_ = (UPackage *)0x0;
      local_d8.ComparisonIndex = FVar4.ComparisonIndex.Value;
      local_d8.Number = FVar4.Number;
      local_c8._16_4_ = local_d8.ComparisonIndex.Value;
      local_c8._20_4_ = local_d8.Number;
      local_c8._24_4_ = RF_NoFlags;
      local_c8._40_8_ = (UObject *)0x0;
      local_c8[0x20] = false;
      local_d8 = FVar5;
      local_c8._8_8_ = this;
      pUVar8 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
      if (local_c8._64_8_ != 0) {
        plVar9 = (longlong *)(local_c8 + 0x50);
        if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
          plVar9 = (longlong *)local_c8._104_8_;
        }
        (**(code **)(*plVar9 + 0x10))();
      }
      ActivateDeviceProperty
                (this,(UInputDeviceProperty *)param_1.Class.field0_0x0,
                 (FActivateDevicePropertyParams *)pUVar8);
      goto LAB_147bc8189;
    }
  }
  if (1 < (byte)LogInputDeviceProperties._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogInputDeviceProperties);
  }
  *(uint *)param_1.Class.field0_0x0 = FInputDevicePropertyHandle::InvalidHandle.InternalId;
LAB_147bc8189:
  return (FInputDevicePropertyHandle)param_1.Class.field0_0x0._0_4_;
}

// Deinitialize @ 147bd4bb0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UInputDeviceSubsystem::Deinitialize(UInputDeviceSubsystem *this)

{
  TSharedPtr<FInputDeviceSubsystemProcessor,1> *pTVar1;
  FSlateApplication *this_00;
  undefined8 local_28;
  FSharedReferencer<1> FStack_20;
  TSharedPtr<IInputProcessor,1> local_18;
  
  pTVar1 = &this->InputPreprocessor;
  if (FSlateApplication::CurrentApplication.Object != (FSlateApplication *)0x0) {
    this_00 = FSlateApplication::Get();
    local_18.Object = (IInputProcessor *)pTVar1->Object;
    local_18.SharedReferenceCount.ReferenceController =
         (this->InputPreprocessor).SharedReferenceCount.ReferenceController;
    if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    FSlateApplication::UnregisterInputPreProcessor(this_00,&local_18);
  }
  local_28 = 0;
  FStack_20.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (pTVar1 != (TSharedPtr<FInputDeviceSubsystemProcessor,1> *)&local_28) {
    pTVar1->Object = (FInputDeviceSubsystemProcessor *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->InputPreprocessor).SharedReferenceCount,&FStack_20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_20.ReferenceController);
  return;
}

// Get @ 147bde870

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UInputDeviceSubsystem * __cdecl UInputDeviceSubsystem::Get(void)

{
  FObjectSubsystemCollection<UEngineSubsystem> *this;
  int iVar1;
  bool bVar2;
  UClass *pUVar3;
  UClass *pUVar4;
  UInputDeviceSubsystem *pUVar5;
  
  if (GEngine == (UEngine *)0x0) {
    return (UInputDeviceSubsystem *)0x0;
  }
  this = &GEngine->EngineSubsystemCollection;
  pUVar3 = StaticClass();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pUVar3 != (UClass *)0x0) goto LAB_147bde8b3;
  }
  else if (pUVar3 != (UClass *)0x0) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
LAB_147bde8b3:
    pUVar4 = StaticClass();
    if (pUVar4 != (UClass *)0x0) {
      iVar1 = (int)pUVar4->_padding_;
      if (((int)pUVar3->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(pUVar3->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar4->_padding_)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) goto LAB_147bde8e3;
    }
  }
  pUVar3 = (UClass *)0x0;
LAB_147bde8e3:
  pUVar5 = (UInputDeviceSubsystem *)
           FSubsystemCollectionBase::GetSubsystemInternal((FSubsystemCollectionBase *)this,pUVar3);
  return pUVar5;
}

// GetActiveDeviceProperty @ 147bde910

UInputDeviceProperty * __thiscall
UInputDeviceSubsystem::GetActiveDeviceProperty
          (UInputDeviceSubsystem *this,FInputDevicePropertyHandle param_1)

{
  FWeakObjectPtr *this_00;
  longlong lVar1;
  UInputDeviceProperty *pUVar2;
  ForElementType<FSetElementId> FVar3;
  int iVar4;
  
  if (*(int *)&(this->PropertiesPendingRemoval).Elements.field_0x8 !=
      *(int *)&(this->PropertiesPendingRemoval).Elements.field_0x34) {
    FVar3 = (this->PropertiesPendingRemoval).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->PropertiesPendingRemoval).Hash;
    }
    iVar4 = *(int *)((longlong)FVar3 +
                    (ulonglong)((this->PropertiesPendingRemoval).HashSize - 1U & param_1.InternalId)
                    * 4);
    if (iVar4 != -1) {
      lVar1 = *(longlong *)&(this->PropertiesPendingRemoval).Elements;
      do {
        if (*(uint *)(lVar1 + (longlong)iVar4 * 0xc) == param_1.InternalId) {
          if (iVar4 != -1) {
            return (UInputDeviceProperty *)0x0;
          }
          break;
        }
        iVar4 = *(int *)(lVar1 + 4 + (longlong)iVar4 * 0xc);
      } while (iVar4 != -1);
    }
  }
  if (*(int *)&(this->ActiveProperties).Elements.field_0x8 !=
      *(int *)&(this->ActiveProperties).Elements.field_0x34) {
    FVar3 = (this->ActiveProperties).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->ActiveProperties).Hash;
    }
    iVar4 = *(int *)((longlong)FVar3 +
                    (ulonglong)((this->ActiveProperties).HashSize - 1U & param_1.InternalId) * 4);
    if (iVar4 != -1) {
      lVar1 = *(longlong *)&(this->ActiveProperties).Elements;
      do {
        this_00 = (FWeakObjectPtr *)(lVar1 + (longlong)iVar4 * 0x28);
        if (*(uint *)(lVar1 + 0x18 + (longlong)iVar4 * 0x28) == param_1.InternalId) {
          if (this_00 == (FWeakObjectPtr *)0x0) {
            return (UInputDeviceProperty *)0x0;
          }
          pUVar2 = (UInputDeviceProperty *)FWeakObjectPtr::Get(this_00);
          return pUVar2;
        }
        iVar4 = this_00[4].ObjectIndex;
      } while (iVar4 != -1);
    }
  }
  return (UInputDeviceProperty *)0x0;
}

// GetInputDeviceHardwareIdentifier @ 147be09c0

FHardwareDeviceIdentifier * __thiscall
UInputDeviceSubsystem::GetInputDeviceHardwareIdentifier
          (UInputDeviceSubsystem *this,FHardwareDeviceIdentifier *__return_storage_ptr__,
          FInputDeviceId param_1)

{
  longlong lVar1;
  FName FVar2;
  FName FVar3;
  undefined8 uVar4;
  undefined3 uVar5;
  undefined8 uVar6;
  int iVar7;
  FName *pFVar8;
  undefined1 *puVar9;
  
  uVar4 = FHardwareDeviceIdentifier::Invalid._16_8_;
  FVar2 = FHardwareDeviceIdentifier::Invalid.HardwareDeviceIdentifier;
  if (*(int *)&(this->LatestInputDeviceIdentifiers).field_0x8 !=
      *(int *)&(this->LatestInputDeviceIdentifiers).field_0x34) {
    puVar9 = *(undefined1 **)&(this->LatestInputDeviceIdentifiers).field_0x40;
    if (puVar9 == (undefined1 *)0x0) {
      puVar9 = &(this->LatestInputDeviceIdentifiers).field_0x38;
    }
    iVar7 = *(int *)(puVar9 + (ulonglong)
                              (*(int *)&(this->LatestInputDeviceIdentifiers).field_0x48 - 1U &
                              param_1.InternalId) * 4);
    if (iVar7 != -1) {
      do {
        lVar1 = *(longlong *)&this->LatestInputDeviceIdentifiers + (longlong)iVar7 * 0x24;
        if (*(int *)(*(longlong *)&this->LatestInputDeviceIdentifiers + (longlong)iVar7 * 0x24) ==
            param_1.InternalId) {
          pFVar8 = (FName *)(lVar1 + 4);
          if (lVar1 == 0) {
            pFVar8 = (FName *)0x0;
          }
          if (pFVar8 != (FName *)0x0) {
            FVar3 = pFVar8[1];
            FVar2 = pFVar8[2];
            __return_storage_ptr__->InputClassName = *pFVar8;
            __return_storage_ptr__->HardwareDeviceIdentifier = FVar3;
            *(FName *)&__return_storage_ptr__->PrimaryDeviceType = FVar2;
            return __return_storage_ptr__;
          }
          break;
        }
        iVar7 = *(int *)(lVar1 + 0x1c);
      } while (iVar7 != -1);
    }
  }
  __return_storage_ptr__->InputClassName = FHardwareDeviceIdentifier::Invalid.InputClassName;
  __return_storage_ptr__->HardwareDeviceIdentifier = FVar2;
  uVar6 = FHardwareDeviceIdentifier::Invalid._16_8_;
  FHardwareDeviceIdentifier::Invalid.PrimaryDeviceType = (EHardwareDevicePrimaryType)uVar4;
  FHardwareDeviceIdentifier::Invalid._17_3_ = SUB83(uVar4,1);
  uVar5 = FHardwareDeviceIdentifier::Invalid._17_3_;
  FHardwareDeviceIdentifier::Invalid.SupportedFeaturesMask = SUB84(uVar4,4);
  iVar7 = FHardwareDeviceIdentifier::Invalid.SupportedFeaturesMask;
  __return_storage_ptr__->PrimaryDeviceType = FHardwareDeviceIdentifier::Invalid.PrimaryDeviceType;
  FHardwareDeviceIdentifier::Invalid._16_8_ = uVar6;
  *(undefined3 *)&__return_storage_ptr__->field_0x11 = uVar5;
  __return_storage_ptr__->SupportedFeaturesMask = iVar7;
  return __return_storage_ptr__;
}

// GetLatestDeviceOfType @ 147be0b80

FInputDeviceId __thiscall
UInputDeviceSubsystem::GetLatestDeviceOfType
          (UInputDeviceSubsystem *this,FPlatformUserId param_1,EHardwareDevicePrimaryType param_2)

{
  int iVar1;
  int *piVar2;
  byte *pbVar3;
  byte *pbVar4;
  undefined4 in_register_00000014;
  int *piVar5;
  undefined7 in_register_00000081;
  byte in_R9B;
  undefined1 *puVar6;
  
  piVar5 = (int *)CONCAT44(in_register_00000014,param_1.InternalId);
  if (*(int *)&(this->LatestUserDeviceIdentifiers).field_0x8 !=
      *(int *)&(this->LatestUserDeviceIdentifiers).field_0x34) {
    puVar6 = *(undefined1 **)&(this->LatestUserDeviceIdentifiers).field_0x40;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &(this->LatestUserDeviceIdentifiers).field_0x38;
    }
    iVar1 = *(int *)(puVar6 + ((ulonglong)
                               (*(int *)&(this->LatestUserDeviceIdentifiers).field_0x48 - 1) &
                              CONCAT71(in_register_00000081,param_2) & 0xffffffff) * 4);
    if (iVar1 != -1) {
      do {
        piVar2 = (int *)((longlong)iVar1 * 0x68 + *(longlong *)&this->LatestUserDeviceIdentifiers);
        if (*piVar2 == (int)CONCAT71(in_register_00000081,param_2)) {
          pbVar3 = (byte *)(piVar2 + 2);
          if (piVar2 == (int *)0x0) {
            pbVar3 = (byte *)0x0;
          }
          if ((pbVar3 != (byte *)0x0) && (*(int *)(pbVar3 + 0x10) != *(int *)(pbVar3 + 0x3c))) {
            pbVar4 = *(byte **)(pbVar3 + 0x48);
            if (*(byte **)(pbVar3 + 0x48) == (byte *)0x0) {
              pbVar4 = pbVar3 + 0x40;
            }
            iVar1 = *(int *)(pbVar4 + ((ulonglong)(*(int *)(pbVar3 + 0x50) - 1) & (ulonglong)in_R9B)
                                      * 4);
            if (iVar1 != -1) {
              while (pbVar4 = (byte *)((longlong)iVar1 * 0x10 + *(longlong *)(pbVar3 + 8)),
                    *pbVar4 != in_R9B) {
                iVar1 = *(int *)(pbVar4 + 8);
                if (iVar1 == -1) {
                  *piVar5 = -1;
                  return (FInputDeviceId)param_1.InternalId;
                }
              }
              pbVar3 = pbVar4 + 4;
              if (pbVar4 == (byte *)0x0) {
                pbVar3 = (byte *)0x0;
              }
              if (pbVar3 != (byte *)0x0) {
                *piVar5 = *(int *)pbVar3;
                return (FInputDeviceId)param_1.InternalId;
              }
            }
          }
          break;
        }
        iVar1 = piVar2[0x18];
      } while (iVar1 != -1);
    }
  }
  *piVar5 = -1;
  return (FInputDeviceId)param_1.InternalId;
}

// GetMostRecentlyUsedHardwareDevice @ 147be3380

FHardwareDeviceIdentifier * __thiscall
UInputDeviceSubsystem::GetMostRecentlyUsedHardwareDevice
          (UInputDeviceSubsystem *this,FHardwareDeviceIdentifier *__return_storage_ptr__,
          FPlatformUserId param_1)

{
  longlong lVar1;
  FName FVar2;
  uint uVar3;
  FName FVar4;
  undefined8 uVar5;
  undefined3 uVar6;
  undefined8 uVar7;
  int iVar8;
  int *piVar9;
  FName *pFVar10;
  undefined1 *puVar11;
  
  uVar5 = FHardwareDeviceIdentifier::Invalid._16_8_;
  FVar2 = FHardwareDeviceIdentifier::Invalid.HardwareDeviceIdentifier;
  if (*(int *)&(this->LatestUserDeviceIdentifiers).field_0x8 !=
      *(int *)&(this->LatestUserDeviceIdentifiers).field_0x34) {
    puVar11 = *(undefined1 **)&(this->LatestUserDeviceIdentifiers).field_0x40;
    if (puVar11 == (undefined1 *)0x0) {
      puVar11 = &(this->LatestUserDeviceIdentifiers).field_0x38;
    }
    iVar8 = *(int *)(puVar11 +
                    (ulonglong)
                    (*(int *)&(this->LatestUserDeviceIdentifiers).field_0x48 - 1U &
                    param_1.InternalId) * 4);
    if (iVar8 != -1) {
      do {
        piVar9 = (int *)((longlong)iVar8 * 0x68 + *(longlong *)&this->LatestUserDeviceIdentifiers);
        if (*piVar9 == param_1.InternalId) {
          pFVar10 = (FName *)(piVar9 + 2);
          if (piVar9 == (int *)0x0) {
            pFVar10 = (FName *)0x0;
          }
          if ((pFVar10 != (FName *)0x0) &&
             (uVar3 = (pFVar10->ComparisonIndex).Value,
             *(int *)&(this->LatestInputDeviceIdentifiers).field_0x8 !=
             *(int *)&(this->LatestInputDeviceIdentifiers).field_0x34)) {
            puVar11 = *(undefined1 **)&(this->LatestInputDeviceIdentifiers).field_0x40;
            if (puVar11 == (undefined1 *)0x0) {
              puVar11 = &(this->LatestInputDeviceIdentifiers).field_0x38;
            }
            iVar8 = *(int *)(puVar11 +
                            (ulonglong)
                            (*(int *)&(this->LatestInputDeviceIdentifiers).field_0x48 - 1U & uVar3)
                            * 4);
            if (iVar8 != -1) {
              goto LAB_147be3460;
            }
          }
          break;
        }
        iVar8 = piVar9[0x18];
      } while (iVar8 != -1);
    }
  }
  goto LAB_147be33e6;
  while (iVar8 = *(int *)(lVar1 + 0x1c), iVar8 != -1) {
LAB_147be3460:
    lVar1 = *(longlong *)&this->LatestInputDeviceIdentifiers + (longlong)iVar8 * 0x24;
    if (*(uint *)(*(longlong *)&this->LatestInputDeviceIdentifiers + (longlong)iVar8 * 0x24) ==
        uVar3) {
      pFVar10 = (FName *)(lVar1 + 4);
      if (lVar1 == 0) {
        pFVar10 = (FName *)0x0;
      }
      if (pFVar10 != (FName *)0x0) {
        FVar4 = pFVar10[1];
        FVar2 = pFVar10[2];
        __return_storage_ptr__->InputClassName = *pFVar10;
        __return_storage_ptr__->HardwareDeviceIdentifier = FVar4;
        *(FName *)&__return_storage_ptr__->PrimaryDeviceType = FVar2;
        return __return_storage_ptr__;
      }
      break;
    }
  }
LAB_147be33e6:
  __return_storage_ptr__->InputClassName = FHardwareDeviceIdentifier::Invalid.InputClassName;
  __return_storage_ptr__->HardwareDeviceIdentifier = FVar2;
  uVar7 = FHardwareDeviceIdentifier::Invalid._16_8_;
  FHardwareDeviceIdentifier::Invalid.PrimaryDeviceType = (EHardwareDevicePrimaryType)uVar5;
  FHardwareDeviceIdentifier::Invalid._17_3_ = SUB83(uVar5,1);
  uVar6 = FHardwareDeviceIdentifier::Invalid._17_3_;
  FHardwareDeviceIdentifier::Invalid.SupportedFeaturesMask = SUB84(uVar5,4);
  iVar8 = FHardwareDeviceIdentifier::Invalid.SupportedFeaturesMask;
  __return_storage_ptr__->PrimaryDeviceType = FHardwareDeviceIdentifier::Invalid.PrimaryDeviceType;
  FHardwareDeviceIdentifier::Invalid._16_8_ = uVar7;
  *(undefined3 *)&__return_storage_ptr__->field_0x11 = uVar6;
  __return_storage_ptr__->SupportedFeaturesMask = iVar8;
  return __return_storage_ptr__;
}

// GetMostRecentlyUsedInputDeviceId @ 147be34b0

FInputDeviceId __thiscall
UInputDeviceSubsystem::GetMostRecentlyUsedInputDeviceId
          (UInputDeviceSubsystem *this,FPlatformUserId param_1,EHardwareDevicePrimaryType param_2)

{
  int iVar1;
  int *piVar2;
  byte *pbVar3;
  byte *pbVar4;
  undefined4 in_register_00000014;
  int *piVar5;
  undefined7 in_register_00000081;
  byte in_R9B;
  undefined1 *puVar6;
  
  piVar5 = (int *)CONCAT44(in_register_00000014,param_1.InternalId);
  if (*(int *)&(this->LatestUserDeviceIdentifiers).field_0x8 !=
      *(int *)&(this->LatestUserDeviceIdentifiers).field_0x34) {
    puVar6 = *(undefined1 **)&(this->LatestUserDeviceIdentifiers).field_0x40;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &(this->LatestUserDeviceIdentifiers).field_0x38;
    }
    iVar1 = *(int *)(puVar6 + ((ulonglong)
                               (*(int *)&(this->LatestUserDeviceIdentifiers).field_0x48 - 1) &
                              CONCAT71(in_register_00000081,param_2) & 0xffffffff) * 4);
    if (iVar1 != -1) {
      do {
        piVar2 = (int *)((longlong)iVar1 * 0x68 + *(longlong *)&this->LatestUserDeviceIdentifiers);
        if (*piVar2 == (int)CONCAT71(in_register_00000081,param_2)) {
          pbVar3 = (byte *)(piVar2 + 2);
          if (piVar2 == (int *)0x0) {
            pbVar3 = (byte *)0x0;
          }
          if (pbVar3 != (byte *)0x0) {
            if (in_R9B == 0) {
              *piVar5 = *(int *)pbVar3;
              return (FInputDeviceId)param_1.InternalId;
            }
            if (*(int *)(pbVar3 + 0x10) != *(int *)(pbVar3 + 0x3c)) {
              pbVar4 = *(byte **)(pbVar3 + 0x48);
              if (*(byte **)(pbVar3 + 0x48) == (byte *)0x0) {
                pbVar4 = pbVar3 + 0x40;
              }
              iVar1 = *(int *)(pbVar4 + ((ulonglong)(*(int *)(pbVar3 + 0x50) - 1) &
                                        (ulonglong)in_R9B) * 4);
              if (iVar1 != -1) {
                while (pbVar4 = (byte *)((longlong)iVar1 * 0x10 + *(longlong *)(pbVar3 + 8)),
                      *pbVar4 != in_R9B) {
                  iVar1 = *(int *)(pbVar4 + 8);
                  if (iVar1 == -1) {
                    *piVar5 = -1;
                    return (FInputDeviceId)param_1.InternalId;
                  }
                }
                pbVar3 = pbVar4 + 4;
                if (pbVar4 == (byte *)0x0) {
                  pbVar3 = (byte *)0x0;
                }
                if (pbVar3 != (byte *)0x0) {
                  *piVar5 = *(int *)pbVar3;
                  return (FInputDeviceId)param_1.InternalId;
                }
              }
            }
          }
          break;
        }
        iVar1 = piVar2[0x18];
      } while (iVar1 != -1);
    }
  }
  *piVar5 = -1;
  return (FInputDeviceId)param_1.InternalId;
}

// GetPrivateStaticClass @ 147be54f0

UClass * __cdecl UInputDeviceSubsystem::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInputDeviceSubsystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"InputDeviceSubsystem",
               &Z_Registration_Info_UClass_UInputDeviceSubsystem.InnerSingleton,
               StaticRegisterNativesUInputDeviceSubsystem,0x1a0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UInputDeviceSubsystem>,
               InternalVTableHelperCtorCaller<UInputDeviceSubsystem>,local_res8,
               UEngineSubsystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInputDeviceSubsystem.InnerSingleton;
}

// GetStatId @ 147be8710

/* WARNING: Enum "Type": Some values do not have unique names */

TStatId __thiscall UInputDeviceSubsystem::GetStatId(UInputDeviceSubsystem *this)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_virtual_struct_TStatId___cdecl_UInputDeviceSubsystem::GetStatId(void)const_::_2_::FStat_UInputDeviceSubsystem>
  FVar2;
  TStatIdData *in_RDX;
  FName local_res10;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (StatPtr_UInputDeviceSubsystem ==
          (FThreadSafeStaticStat<_public:_virtual_struct_TStatId___cdecl_UInputDeviceSubsystem::GetStatId(void)const_::_2_::FStat_UInputDeviceSubsystem>
           )0x0) {
        pFVar1 = ::FName::FName(&local_res10,"UInputDeviceSubsystem");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_UInputDeviceSubsystem,*pFVar1,
                   L"UInputDeviceSubsystem","STATGROUP_Tickables","STATCAT_Advanced",L"Tickables",
                   true,true,ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar2 = StatPtr_UInputDeviceSubsystem;
  if (StatPtr_UInputDeviceSubsystem ==
      (FThreadSafeStaticStat<_public:_virtual_struct_TStatId___cdecl_UInputDeviceSubsystem::GetStatId(void)const_::_2_::FStat_UInputDeviceSubsystem>
       )0x0) {
    pFVar1 = ::FName::FName(&local_res10,"UInputDeviceSubsystem");
    FVar2 = (FThreadSafeStaticStat<_public:_virtual_struct_TStatId___cdecl_UInputDeviceSubsystem::GetStatId(void)const_::_2_::FStat_UInputDeviceSubsystem>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_UInputDeviceSubsystem,*pFVar1,
                         L"UInputDeviceSubsystem","STATGROUP_Tickables","STATCAT_Advanced",
                         L"Tickables",true,true,ST_int64,true,false,MCR_Invalid);
  }
  in_RDX->Name = (TAtomic<FMinimalName>)FVar2;
  return (TStatId)in_RDX;
}

// GetTickableGameObjectWorld @ 147bebd20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UWorld * __thiscall UInputDeviceSubsystem::GetTickableGameObjectWorld(UInputDeviceSubsystem *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  char cVar3;
  int iVar4;
  UWorld *pUVar5;
  UWorld *pUVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res8 [8];
  
  pUVar6 = (UWorld *)
           (**(code **)(*(longlong *)&this[-1].LatestUserDeviceIdentifiers.field_0x30 + 0x180))
                     (&this[-1].LatestUserDeviceIdentifiers.field_0x30);
  if ((pUVar6 != (UWorld *)0x0) || (GEngine == (UEngine *)0x0)) {
    return pUVar6;
  }
  piVar1 = &(GEngine->WorldList).Array.ArrayNum;
  pFVar7 = (GEngine->WorldList).Array.AllocatorInstance.Data;
  iVar4 = *piVar1;
  pFVar2 = pFVar7 + (longlong)iVar4 * 8;
  pUVar6 = (UWorld *)0x0;
  do {
    if (*piVar1 != iVar4) {
      `TCheckedPointerIterator<void_*_const,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar7 == pFVar2) {
      return pUVar6;
    }
    pUVar5 = *(UWorld **)(*(char **)pFVar7 + 0x2c0);
    if (pUVar5 != (UWorld *)0x0) {
      cVar3 = **(char **)pFVar7;
      if (cVar3 == '\x03') {
        return pUVar5;
      }
      if (cVar3 == '\x01') {
        return pUVar5;
      }
      if (cVar3 == '\x02') {
        pUVar6 = pUVar5;
      }
    }
    pFVar7 = pFVar7 + 8;
  } while( true );
}

// GetTickableTickType @ 147bebe50

ETickableTickType __thiscall UInputDeviceSubsystem::GetTickableTickType(UInputDeviceSubsystem *this)

{
  bool bVar1;
  
  bVar1 = UObjectBaseUtility::IsTemplate
                    ((UObjectBaseUtility *)&this[-1].LatestUserDeviceIdentifiers.field_0x30,
                     RF_ArchetypeObject|RF_ClassDefaultObject);
  return bVar1 * '\x02';
}

// Initialize @ 147befe50

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UInputDeviceSubsystem::Initialize(UInputDeviceSubsystem *this,FSubsystemCollectionBase *param_1)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  FSlateApplication *this_00;
  TReferenceControllerBase<1> *pTVar4;
  TSharedPtr<FInputDeviceSubsystemProcessor,1> *pTVar5;
  TReferenceControllerBase<1> *local_28;
  FSharedReferencer<1> FStack_20;
  TSharedPtr<IInputProcessor,1> local_18;
  
  if (FSlateApplication::CurrentApplication.Object == (FSlateApplication *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("FSlateApplication::IsInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GameFramework\\InputDeviceSubsystem.cpp"
                       ,0xbe,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pTVar3 = ::operator_new(0x18);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    pTVar3 = (TReferenceControllerBase<1> *)0x0;
    local_28 = ___xmm_00000000000000000000000000000010;
    pTVar4 = (TReferenceControllerBase<1> *)&DAT_00000010;
    FStack_20.ReferenceController = _UNK_150651568;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar4 = pTVar3 + 1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFInputDeviceSubsystemProcessor___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = (longlong)&___7FInputDeviceSubsystemProcessor__6B_;
    if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    FStack_20.ReferenceController = pTVar3;
    local_28 = pTVar4;
  }
  pTVar5 = &this->InputPreprocessor;
  if (pTVar5 != (TSharedPtr<FInputDeviceSubsystemProcessor,1> *)&local_28) {
    pTVar5->Object = (FInputDeviceSubsystemProcessor *)pTVar4;
    local_28 = (TReferenceControllerBase<1> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->InputPreprocessor).SharedReferenceCount,&FStack_20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_20.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  this_00 = FSlateApplication::Get();
  local_18.Object = (IInputProcessor *)pTVar5->Object;
  local_18.SharedReferenceCount.ReferenceController =
       (this->InputPreprocessor).SharedReferenceCount.ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  FSlateApplication::RegisterInputPreProcessor(this_00,&local_18,Engine);
  return;
}

// IsPropertyActive @ 147bf1080

bool __thiscall
UInputDeviceSubsystem::IsPropertyActive
          (UInputDeviceSubsystem *this,FInputDevicePropertyHandle param_1)

{
  longlong lVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  
  if (*(int *)&(this->ActiveProperties).Elements.field_0x8 !=
      *(int *)&(this->ActiveProperties).Elements.field_0x34) {
    FVar3 = (this->ActiveProperties).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->ActiveProperties).Hash;
    }
    iVar2 = *(int *)((longlong)FVar3 +
                    (ulonglong)((this->ActiveProperties).HashSize - 1U & param_1.InternalId) * 4);
    if (iVar2 != -1) {
      lVar1 = *(longlong *)&(this->ActiveProperties).Elements;
      while (*(uint *)(lVar1 + 0x18 + (longlong)iVar2 * 0x28) != param_1.InternalId) {
        iVar2 = *(int *)(lVar1 + 0x20 + (longlong)iVar2 * 0x28);
        if (iVar2 == -1) {
          return false;
        }
      }
      if (*(int *)&(this->PropertiesPendingRemoval).Elements.field_0x8 ==
          *(int *)&(this->PropertiesPendingRemoval).Elements.field_0x34) {
        return true;
      }
      FVar3 = (this->PropertiesPendingRemoval).Hash.SecondaryData;
      if (FVar3 == (ForElementType<FSetElementId>)0x0) {
        FVar3 = (ForElementType<FSetElementId>)&(this->PropertiesPendingRemoval).Hash;
      }
      iVar2 = *(int *)((longlong)FVar3 +
                      (ulonglong)
                      ((this->PropertiesPendingRemoval).HashSize - 1U & param_1.InternalId) * 4);
      if (iVar2 == -1) {
        return true;
      }
      lVar1 = *(longlong *)&(this->PropertiesPendingRemoval).Elements;
      while (*(uint *)(lVar1 + (longlong)iVar2 * 0xc) != param_1.InternalId) {
        iVar2 = *(int *)(lVar1 + 4 + (longlong)iVar2 * 0xc);
        if (iVar2 == -1) {
          return true;
        }
      }
    }
  }
  return false;
}

// IsTickable @ 147bf1460

bool __thiscall UInputDeviceSubsystem::IsTickable(UInputDeviceSubsystem *this)

{
  if (((int)this->_padding_ == *(int *)&(this->ActiveProperties).Elements.field_0x4) &&
     (*(int *)&(this->ActiveProperties).Elements.field_0x28 ==
      *(int *)&(this->PropertiesPendingRemoval).Elements.field_0x4)) {
    return false;
  }
  return true;
}

// IsTickableInEditor @ 147bf1480

bool __thiscall UInputDeviceSubsystem::IsTickableInEditor(UInputDeviceSubsystem *this)

{
  return true;
}

// RemoveAllDeviceProperties @ 147bfca40

void __thiscall UInputDeviceSubsystem::RemoveAllDeviceProperties(UInputDeviceSubsystem *this)

{
  undefined1 *puVar1;
  TSet<FActiveDeviceProperty,DefaultKeyFuncs<FActiveDeviceProperty,0>,FDefaultSetAllocator> *this_00
  ;
  FWeakObjectPtr *this_01;
  ulonglong uVar2;
  TSet<FInputDevicePropertyHandle,DefaultKeyFuncs<FInputDevicePropertyHandle,0>,FDefaultSetAllocator>
  *this_02;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  UInputDeviceProperty *this_03;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  undefined1 *puVar11;
  int iVar12;
  uint *puVar13;
  uint uVar14;
  undefined1 local_res8 [8];
  int local_res10;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar3 = *(int *)&(this->ActiveProperties).Elements.field_0x28;
  puVar1 = &(this->ActiveProperties).Elements.field_0x10;
  iVar10 = 0;
  this_00 = &this->ActiveProperties;
  iVar12 = 0;
  uVar6 = 1;
  iVar7 = 0;
  if (iVar3 != 0) {
    puVar13 = *(uint **)&(this->ActiveProperties).Elements.field_0x20;
    if (puVar13 == (uint *)0x0) {
      puVar13 = (uint *)puVar1;
    }
    uVar9 = *puVar13;
    while (uVar9 == 0) {
      lVar8 = (longlong)iVar10;
      iVar12 = iVar12 + 0x20;
      iVar10 = iVar10 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_147bfcadd;
      uVar9 = puVar13[lVar8 + 1];
    }
    uVar6 = -uVar9 & uVar9;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res10 = (int)lVar8;
    iVar7 = local_res10 + -1 + iVar12;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_147bfcadd:
  uVar9 = *(uint *)&(this->ActiveProperties).Elements.field_0x28;
  uVar14 = uVar9 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar6,iVar10);
  TStack_60.CurrentBitIndex = iVar7;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar10 = (int)uVar9 >> 5;
  TStack_60._28_4_ = iVar7;
  TStack_60.BaseBitIndex = iVar12;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->ActiveProperties).Elements.field_0x8 -
                       *(int *)&(this->ActiveProperties).Elements.field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar9 < 0) || (iVar3 < (int)uVar9)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = *(uint *)&(this->ActiveProperties).Elements.field_0x28;
  if (uVar9 != uVar6) {
    puVar11 = *(undefined1 **)&(this->ActiveProperties).Elements.field_0x20;
    if (puVar11 == (undefined1 *)0x0) {
      puVar11 = puVar1;
    }
    uVar9 = -1 << ((byte)uVar9 & 0x1f) & *(uint *)(puVar11 + (longlong)iVar10 * 4);
    while (uVar9 == 0) {
      lVar8 = (longlong)iVar10;
      uVar14 = uVar14 + 0x20;
      iVar10 = iVar10 + 1;
      uVar9 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_147bfcbe0;
      uVar9 = *(uint *)(puVar11 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar9 & uVar9) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar9 = (int)lVar8 + -1 + uVar14;
    if ((int)uVar6 < (int)uVar9) {
      uVar9 = uVar6;
    }
  }
LAB_147bfcbe0:
  while( true ) {
    if (*(int *)&(this->ActiveProperties).Elements.field_0x8 -
        *(int *)&(this->ActiveProperties).Elements.field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<FActiveDeviceProperty>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar9) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    this_01 = (FWeakObjectPtr *)
              (*(longlong *)&this_00->Elements + (longlong)TStack_60.CurrentBitIndex * 0x28);
    bVar5 = FWeakObjectPtr::IsValid(this_01);
    if (bVar5) {
      this_03 = (UInputDeviceProperty *)FWeakObjectPtr::Get(this_01);
      UInputDeviceProperty::ResetDeviceProperty
                (this_03,(FPlatformUserId)this_01[2].ObjectIndex,
                 (FInputDeviceId)this_01[2].ObjectSerialNumber,false);
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  bVar5 = 1 < (this->ActiveProperties).HashSize;
  if (!bVar5) {
    TSet<FActiveDeviceProperty,DefaultKeyFuncs<FActiveDeviceProperty,0>,FDefaultSetAllocator>::
    UnhashElements(this_00);
  }
  puVar1 = &(this->ActiveProperties).Elements.field_0xc;
  *(undefined4 *)&(this->ActiveProperties).Elements.field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->ActiveProperties).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ActiveProperties).Elements.field_0x34 = 0;
  iVar3 = *(int *)&(this->ActiveProperties).Elements.field_0x2c;
  *(undefined4 *)&(this->ActiveProperties).Elements.field_0x28 = 0;
  if ((iVar3 < 0) || (0x80 < iVar3)) {
    *(undefined4 *)&(this->ActiveProperties).Elements.field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->ActiveProperties).Elements.field_0x10
               ,0);
  }
  if (bVar5) {
    (this->ActiveProperties).HashSize = 1;
    TSet<FActiveDeviceProperty,DefaultKeyFuncs<FActiveDeviceProperty,0>,FDefaultSetAllocator>::
    Rehash(this_00);
  }
  this_02 = &this->PropertiesPendingRemoval;
  bVar5 = 1 < (this->PropertiesPendingRemoval).HashSize;
  if (!bVar5) {
    TSet<FInputDevicePropertyHandle,DefaultKeyFuncs<FInputDevicePropertyHandle,0>,FDefaultSetAllocator>
    ::UnhashElements(this_02);
  }
  puVar1 = &(this->PropertiesPendingRemoval).Elements.field_0xc;
  *(undefined4 *)&(this->PropertiesPendingRemoval).Elements.field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,(ForAnyElementType *)this_02,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->PropertiesPendingRemoval).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PropertiesPendingRemoval).Elements.field_0x34 = 0;
  iVar3 = *(int *)&(this->PropertiesPendingRemoval).Elements.field_0x2c;
  *(undefined4 *)&(this->PropertiesPendingRemoval).Elements.field_0x28 = 0;
  if ((iVar3 < 0) || (0x80 < iVar3)) {
    *(undefined4 *)&(this->PropertiesPendingRemoval).Elements.field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)
               &(this->PropertiesPendingRemoval).Elements.field_0x10,0);
  }
  if (bVar5) {
    (this->PropertiesPendingRemoval).HashSize = 1;
    TSet<FInputDevicePropertyHandle,DefaultKeyFuncs<FInputDevicePropertyHandle,0>,FDefaultSetAllocator>
    ::Rehash(this_02);
  }
  return;
}

// RemoveDevicePropertyByHandle @ 147bfcfc0

void __thiscall
UInputDeviceSubsystem::RemoveDevicePropertyByHandle
          (UInputDeviceSubsystem *this,FInputDevicePropertyHandle param_1)

{
  FInputDevicePropertyHandle local_res8 [2];
  uint local_res10 [6];
  
  local_res10[0] = param_1.InternalId;
  TSet<FInputDevicePropertyHandle,DefaultKeyFuncs<FInputDevicePropertyHandle,0>,FDefaultSetAllocator>
  ::Emplace<FInputDevicePropertyHandle_const_&>
            (&this->PropertiesPendingRemoval,local_res8,(bool *)local_res10);
  return;
}

// RemoveDevicePropertyHandles @ 147bfcff0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UInputDeviceSubsystem::RemoveDevicePropertyHandles
          (UInputDeviceSubsystem *this,
          TSet<FInputDevicePropertyHandle,DefaultKeyFuncs<FInputDevicePropertyHandle,0>,FDefaultSetAllocator>
          *param_1)

{
  if (*(int *)&(param_1->Elements).field_0x8 != *(int *)&(param_1->Elements).field_0x34) {
    TSet<FInputDevicePropertyHandle,DefaultKeyFuncs<FInputDevicePropertyHandle,0>,FDefaultSetAllocator>
    ::Append<FDefaultSetAllocator>(&this->PropertiesPendingRemoval,param_1);
    return;
  }
  if (2 < (byte)LogInputDeviceProperties._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogInputDeviceProperties);
    return;
  }
  return;
}

// SetMostRecentlyUsedHardwareDevice @ 147c012f0

void __thiscall
UInputDeviceSubsystem::SetMostRecentlyUsedHardwareDevice
          (UInputDeviceSubsystem *this,FInputDeviceId param_1,FHardwareDeviceIdentifier *param_2)

{
  TMap<FPlatformUserId,UInputDeviceSubsystem::FLatestInputDeviceData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPlatformUserId,UInputDeviceSubsystem::FLatestInputDeviceData,0>_>
  *this_00;
  int iVar1;
  uint uVar2;
  IPlatformInputDeviceMapper *pIVar3;
  undefined1 *puVar4;
  uint *puVar5;
  bool bVar6;
  undefined1 local_res8 [20];
  uint local_res1c;
  FHardwareDeviceIdentifier *local_res20;
  FReadAccessScope local_58;
  
  local_58.DestructionSentinel._0_8_ = local_res8 + 8;
  local_res8._8_4_ = param_1.InternalId;
  local_58.DestructionSentinel.Accessor = (FMRSWRecursiveAccessDetector *)param_2;
  TSet<TTuple<FInputDeviceId,FHardwareDeviceIdentifier>,TDefaultMapHashableKeyFuncs<FInputDeviceId,FHardwareDeviceIdentifier,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FInputDeviceId_const_&,FHardwareDeviceIdentifier_const_&>_>
            ((TSet<TTuple<FInputDeviceId,FHardwareDeviceIdentifier>,TDefaultMapHashableKeyFuncs<FInputDeviceId,FHardwareDeviceIdentifier,0>,FDefaultSetAllocator>
              *)&this->LatestInputDeviceIdentifiers,
             (TPairInitializer<FInputDeviceId_const_&,FHardwareDeviceIdentifier_const_&> *)
             (local_res8 + 0x10),(bool *)&local_58);
  pIVar3 = IPlatformInputDeviceMapper::Get();
  (**(code **)(pIVar3->_padding_ + 0x68))(pIVar3,local_res8,local_res8._8_4_);
  this_00 = &this->LatestUserDeviceIdentifiers;
  if (*(int *)&(this->LatestUserDeviceIdentifiers).field_0x8 !=
      *(int *)&(this->LatestUserDeviceIdentifiers).field_0x34) {
    puVar4 = *(undefined1 **)&(this->LatestUserDeviceIdentifiers).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->LatestUserDeviceIdentifiers).field_0x38;
    }
    uVar2 = *(uint *)(puVar4 + (ulonglong)
                               (*(int *)&(this->LatestUserDeviceIdentifiers).field_0x48 - 1U &
                               local_res8._0_4_) * 4);
    if (uVar2 != 0xffffffff) {
      do {
        puVar5 = (uint *)((longlong)(int)uVar2 * 0x68 + *(longlong *)&this_00->field_0x0);
        if (*puVar5 == local_res8._0_4_) {
          if (puVar5 != (uint *)0x0) goto LAB_147c013c5;
          break;
        }
        uVar2 = puVar5[0x18];
      } while (uVar2 != 0xffffffff);
    }
  }
  local_res20 = (FHardwareDeviceIdentifier *)local_res8;
  TSet<TTuple<FPlatformUserId,UInputDeviceSubsystem::FLatestInputDeviceData>,TDefaultMapHashableKeyFuncs<FPlatformUserId,UInputDeviceSubsystem::FLatestInputDeviceData,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FPlatformUserId_const_&>_>
            ((TSet<TTuple<FPlatformUserId,UInputDeviceSubsystem::FLatestInputDeviceData>,TDefaultMapHashableKeyFuncs<FPlatformUserId,UInputDeviceSubsystem::FLatestInputDeviceData,0>,FDefaultSetAllocator>
              *)this_00,(int)local_res8 + 0x10,
             (TKeyInitializer<FPlatformUserId_const_&> *)(ulonglong)(uint)local_res8._0_4_,
             (bool *)&local_res20);
  puVar5 = (uint *)((longlong)(int)local_res8._16_4_ * 0x68 + *(longlong *)&this_00->field_0x0);
LAB_147c013c5:
  bVar6 = puVar5[2] != local_res8._8_4_;
  TMapBase<enum_EHardwareDevicePrimaryType,FInputDeviceId,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EHardwareDevicePrimaryType,FInputDeviceId,0>_>
  ::FindOrAddImpl<enum_EHardwareDevicePrimaryType_const_&,FInputDeviceId_const_&>
            (puVar5 + 4,(uint)param_2->PrimaryDeviceType,&param_2->PrimaryDeviceType,
             (FInputDeviceId *)(local_res8 + 8));
  puVar5[2] = local_res8._8_4_;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->OnInputHardwareDeviceChanged,&local_58);
  iVar1 = *(int *)&(this->OnInputHardwareDeviceChanged).field_0x10;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_58);
  if ((0 < iVar1) && (bVar6)) {
    local_res8._16_4_ = local_res8._0_4_;
    local_res1c = local_res8._8_4_;
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
               &this->OnInputHardwareDeviceChanged,local_res8 + 0x10);
  }
  return;
}

// ShouldCreateSubsystem @ 147c01f20

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UInputDeviceSubsystem::ShouldCreateSubsystem(UInputDeviceSubsystem *this,UObject *param_1)

{
  if (FSlateApplication::CurrentApplication.Object != (FSlateApplication *)0x0) {
    return !PRIVATE_GIsRunningCommandlet;
  }
  return false;
}

// StaticRegisterNativesUInputDeviceSubsystem @ 147c03690

void __cdecl UInputDeviceSubsystem::StaticRegisterNativesUInputDeviceSubsystem(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 9;
  local_18.DataPtr = Z_Construct_UClass_UInputDeviceSubsystem_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// Tick @ 147c07590

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UInputDeviceSubsystem::Tick(UInputDeviceSubsystem *this,float param_1)

{
  FWeakObjectPtr *this_00;
  FWeakObjectPtr FVar1;
  int iVar2;
  undefined1 *puVar3;
  longlong lVar4;
  atomic<double> aVar5;
  atomic<double> aVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  UWorld *this_01;
  UObject *pUVar10;
  UInputDeviceProperty *pUVar11;
  UFunction *this_02;
  UClass *pUVar12;
  undefined1 *puVar13;
  int local_a8;
  int local_a4;
  float local_a0;
  float local_9c;
  undefined1 local_98 [12];
  uint local_8c;
  longlong local_88;
  uint local_80;
  int local_7c;
  TSet<FActiveDeviceProperty,DefaultKeyFuncs<FActiveDeviceProperty,0>,FDefaultSetAllocator>
  *local_70;
  
  aVar6 = FApp::DeltaTime;
  this_01 = (UWorld *)(**(code **)(this->_padding_ + 0x40))();
  if (this_01 == (UWorld *)0x0) {
    bVar7 = false;
  }
  else {
    bVar7 = UWorld::IsPaused(this_01);
  }
  TSet<FActiveDeviceProperty,DefaultKeyFuncs<FActiveDeviceProperty,0>,FDefaultSetAllocator>::
  TIterator::TIterator
            ((TIterator *)local_98,
             (TSet<FActiveDeviceProperty,DefaultKeyFuncs<FActiveDeviceProperty,0>,FDefaultSetAllocator>
              *)&this->_padding_);
  if (local_7c < *(int *)(local_88 + 0x18)) {
    do {
      iVar2 = local_7c;
      this_00 = (FWeakObjectPtr *)(*(longlong *)local_98._0_8_ + (longlong)local_7c * 0x28);
      bVar8 = FWeakObjectPtr::IsValid(this_00);
      if (bVar8) {
        if (*(int *)&(this->ActiveProperties).Elements.field_0x28 !=
            *(int *)&(this->PropertiesPendingRemoval).Elements.field_0x4) {
          puVar3 = *(undefined1 **)&(this->PropertiesPendingRemoval).Elements.field_0x10;
          puVar13 = &(this->PropertiesPendingRemoval).Elements.field_0x8;
          if (puVar3 != (undefined1 *)0x0) {
            puVar13 = puVar3;
          }
          iVar9 = *(int *)(puVar13 +
                          (ulonglong)
                          (*(int *)&(this->PropertiesPendingRemoval).Elements.field_0x18 - 1U &
                          this_00[3].ObjectIndex) * 4);
          if (iVar9 != -1) {
            lVar4 = *(longlong *)&(this->ActiveProperties).Elements.field_0x20;
            do {
              if (*(uint *)(lVar4 + (longlong)iVar9 * 0xc) == this_00[3].ObjectIndex) {
                pUVar11 = (UInputDeviceProperty *)FWeakObjectPtr::Get(this_00);
                UInputDeviceProperty::ResetDeviceProperty
                          (pUVar11,(FPlatformUserId)this_00[2].ObjectIndex,
                           (FInputDeviceId)this_00[2].ObjectSerialNumber,false);
                goto LAB_147c0765f;
              }
              iVar9 = *(int *)(lVar4 + 4 + (longlong)iVar9 * 0xc);
            } while (iVar9 != -1);
          }
        }
        if ((bVar7 == false) || ((this_00[3].ObjectSerialNumber & 4) != 0)) {
          iVar9 = this_00[3].ObjectSerialNumber;
          aVar5 = aVar6;
          if ((iVar9 & 2) == 0) {
            aVar5 = (atomic<double>)(double)param_1;
          }
          this_00[1] = (FWeakObjectPtr)((double)aVar5 + (double)this_00[1]);
          if ((((iVar9 & 1) != 0) ||
              (pUVar10 = FWeakObjectPtr::Get(this_00),
              (double)this_00[1] <= (double)*(float *)(pUVar10 + 1))) ||
             ((this_00[3].ObjectSerialNumber & 8) == 0)) {
            pUVar10 = FWeakObjectPtr::Get(this_00);
            FVar1 = this_00[1];
            iVar2 = this_00[2].ObjectSerialNumber;
            iVar9 = this_00[2].ObjectIndex;
            this_02 = UObject::FindFunctionChecked
                                (pUVar10,NAME_UInputDeviceProperty_EvaluateDeviceProperty);
            pUVar12 = UField::GetOwnerClass((UField *)this_02);
            lVar4 = *(longlong *)pUVar10;
            if ((pUVar12->ClassFlags & CLASS_Native) == CLASS_None) {
              local_a8 = iVar9;
              local_a4 = iVar2;
              local_a0 = (float)(double)aVar5;
              local_9c = (float)(double)FVar1;
              (**(code **)(lVar4 + 0x260))(pUVar10,this_02,&local_a8);
            }
            else {
              (**(code **)(lVar4 + 0x2b0))(pUVar10,iVar9,iVar2,lVar4,(float)(double)FVar1);
            }
            pUVar10 = FWeakObjectPtr::Get(this_00);
            (**(code **)(*(longlong *)pUVar10 + 0x2c0))(pUVar10);
            *(byte *)&this_00[3].ObjectSerialNumber = (byte)this_00[3].ObjectSerialNumber | 8;
          }
          else {
            pUVar11 = (UInputDeviceProperty *)FWeakObjectPtr::Get(this_00);
            UInputDeviceProperty::ResetDeviceProperty
                      (pUVar11,(FPlatformUserId)this_00[2].ObjectIndex,
                       (FInputDeviceId)this_00[2].ObjectSerialNumber,false);
            if (*(int *)&(this->ActiveProperties).Elements.field_0x28 !=
                *(int *)&(this->PropertiesPendingRemoval).Elements.field_0x4) {
              TSet<FInputDevicePropertyHandle,DefaultKeyFuncs<FInputDevicePropertyHandle,0>,FDefaultSetAllocator>
              ::RemoveImpl<FInputDevicePropertyHandle>
                        ((TSet<FInputDevicePropertyHandle,DefaultKeyFuncs<FInputDevicePropertyHandle,0>,FDefaultSetAllocator>
                          *)&(this->ActiveProperties).Elements.field_0x20,this_00[3].ObjectIndex,
                         (FInputDevicePropertyHandle *)(this_00 + 3));
            }
            TSet<FActiveDeviceProperty,DefaultKeyFuncs<FActiveDeviceProperty,0>,FDefaultSetAllocator>
            ::RemoveByIndex(local_70,iVar2);
          }
        }
      }
      else {
LAB_147c0765f:
        TSet<FActiveDeviceProperty,DefaultKeyFuncs<FActiveDeviceProperty,0>,FDefaultSetAllocator>::
        RemoveByIndex(local_70,iVar2);
        if (*(int *)&(this->ActiveProperties).Elements.field_0x28 !=
            *(int *)&(this->PropertiesPendingRemoval).Elements.field_0x4) {
          TSet<FInputDevicePropertyHandle,DefaultKeyFuncs<FInputDevicePropertyHandle,0>,FDefaultSetAllocator>
          ::RemoveImpl<FInputDevicePropertyHandle>
                    ((TSet<FInputDevicePropertyHandle,DefaultKeyFuncs<FInputDevicePropertyHandle,0>,FDefaultSetAllocator>
                      *)&(this->ActiveProperties).Elements.field_0x20,this_00[3].ObjectIndex,
                     (FInputDevicePropertyHandle *)(this_00 + 3));
        }
      }
      local_80 = local_80 & ~local_8c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_98 + 8));
    } while (local_7c < *(int *)(local_88 + 0x18));
  }
  puVar3 = &(this->ActiveProperties).Elements.field_0x20;
  bVar7 = 1 < *(int *)&(this->PropertiesPendingRemoval).Elements.field_0x18;
  if (!bVar7) {
    TSet<FInputDevicePropertyHandle,DefaultKeyFuncs<FInputDevicePropertyHandle,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<FInputDevicePropertyHandle,DefaultKeyFuncs<FInputDevicePropertyHandle,0>,FDefaultSetAllocator>
                      *)puVar3);
  }
  puVar13 = &(this->ActiveProperties).Elements.field_0x2c;
  *(undefined4 *)&(this->ActiveProperties).Elements.field_0x28 = 0;
  if (*(int *)puVar13 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,(ForAnyElementType *)puVar3,0,(int *)puVar13);
  }
  *(undefined4 *)&(this->PropertiesPendingRemoval).Elements.field_0x4 = 0;
  *(undefined4 *)&(this->PropertiesPendingRemoval).Elements = 0xffffffff;
  iVar2 = *(int *)&(this->ActiveProperties).field_0x4c;
  (this->ActiveProperties).HashSize = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(this->ActiveProperties).field_0x4c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->ActiveProperties).Elements.field_0x30
               ,0);
  }
  if (bVar7) {
    *(undefined4 *)&(this->PropertiesPendingRemoval).Elements.field_0x18 = 1;
    TSet<FInputDevicePropertyHandle,DefaultKeyFuncs<FInputDevicePropertyHandle,0>,FDefaultSetAllocator>
    ::Rehash((TSet<FInputDevicePropertyHandle,DefaultKeyFuncs<FInputDevicePropertyHandle,0>,FDefaultSetAllocator>
              *)puVar3);
  }
  return;
}

// execActivateDevicePropertyOfClass @ 147c122b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UInputDeviceSubsystem::execActivateDevicePropertyOfClass
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  bool bVar3;
  undefined8 uVar4;
  UClass *pUVar5;
  UObject *pUVar6;
  longlong *plVar7;
  UClass *pUVar8;
  undefined1 auStack_108 [32];
  undefined1 local_e8 [40];
  UObject *local_c0;
  longlong local_b8;
  undefined4 local_b0;
  undefined1 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  longlong local_88;
  longlong local_78 [3];
  longlong *local_60;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_108;
  local_e8._24_8_ = (UClass *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_e8 + 0x18,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_e8 + 0x18);
  }
  local_e8[0x10] = local_e8[0x10] & 0xf8;
  local_e8._8_4_ = FSlateApplicationBase::SlateAppPrimaryPlatformUser.InternalId;
  local_e8._12_4_ = 0xffffffff;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_e8 + 8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_e8 + 8);
  }
  pUVar8 = (UClass *)local_e8._24_8_;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if ((UClass *)local_e8._24_8_ != (UClass *)0x0) goto LAB_147c123bc;
  }
  else if ((UClass *)local_e8._24_8_ != (UClass *)0x0) {
    UE::GC::MarkAsReachable((UObject *)local_e8._24_8_);
LAB_147c123bc:
    pUVar5 = UInputDeviceProperty::StaticClass();
    if (pUVar5 != (UClass *)0x0) {
      iVar1 = (int)pUVar5->_padding_;
      if (((int)*(longlong *)((longlong)pUVar8 + 0x38) < iVar1) ||
         ((longlong *)*(undefined1 **)(*(longlong *)((longlong)pUVar8 + 0x30) + (longlong)iVar1 * 8)
          != &pUVar5->_padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        local_e8._0_8_ = 0;
        pUVar5 = UInputDeviceProperty::StaticClass();
        uVar4 = local_e8._0_8_;
        if (pUVar5 == (UClass *)0x0) {
LAB_147c12425:
          pUVar8 = (UClass *)0x0;
        }
        else {
          iVar1 = (int)pUVar5->_padding_;
          if (((int)*(longlong *)((longlong)pUVar8 + 0x38) < iVar1) ||
             ((longlong *)
              *(undefined1 **)(*(longlong *)((longlong)pUVar8 + 0x30) + (longlong)iVar1 * 8) !=
              &pUVar5->_padding_)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if (!bVar3) goto LAB_147c12425;
        }
        if (local_e8._0_8_ == 0) {
          FObjectInitializer::AssertIfInConstructor
                    (param_1,
                     L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                    );
        }
        pUVar5 = UInputDeviceProperty::StaticClass();
        CheckIsClassChildOf_Internal(pUVar5,pUVar8);
        FStaticConstructObjectParameters::FStaticConstructObjectParameters
                  ((FStaticConstructObjectParameters *)(local_e8 + 0x20),pUVar8);
        local_98 = 0;
        uStack_90 = 0;
        local_b8 = uVar4;
        local_b0 = 0;
        local_a0 = 0;
        local_a8 = 0;
        local_c0 = param_1;
        pUVar6 = StaticConstructObject_Internal
                           ((FStaticConstructObjectParameters *)(local_e8 + 0x20));
        if (local_88 != 0) {
          plVar7 = local_78;
          if (local_60 != (longlong *)0x0) {
            plVar7 = local_60;
          }
          (**(code **)(*plVar7 + 0x10))();
        }
        ActivateDeviceProperty
                  ((UInputDeviceSubsystem *)param_1,(UInputDeviceProperty *)local_e8,
                   (FActivateDevicePropertyParams *)pUVar6);
        goto LAB_147c124db;
      }
    }
  }
  local_e8._0_4_ = FInputDevicePropertyHandle::InvalidHandle.InternalId;
  if (1 < (byte)LogInputDeviceProperties._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogInputDeviceProperties);
    local_e8._0_4_ = FInputDevicePropertyHandle::InvalidHandle;
  }
LAB_147c124db:
  *(undefined4 *)param_3 = local_e8._0_4_;
  return;
}

// execGetActiveDeviceProperty @ 147c13d20

void __cdecl
UInputDeviceSubsystem::execGetActiveDeviceProperty(UObject *param_1,FFrame *param_2,void *param_3)

{
  FWeakObjectPtr *this;
  FProperty *pFVar1;
  UObject *pUVar2;
  int iVar3;
  undefined1 *puVar4;
  uint local_res8 [2];
  
  local_res8[0] = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(int *)&param_1[4].field_0x8 != *(int *)&param_1[5].field_0xc) {
    puVar4 = *(undefined1 **)&param_1[5].field_0x18;
    if (*(undefined1 **)&param_1[5].field_0x18 == (undefined1 *)0x0) {
      puVar4 = &param_1[5].field_0x10;
    }
    iVar3 = *(int *)(puVar4 + (ulonglong)(*(int *)&param_1[5].field_0x20 - 1U & local_res8[0]) * 4);
    if (iVar3 != -1) {
      do {
        if (*(uint *)(*(longlong *)(param_1 + 4) + (longlong)iVar3 * 0xc) == local_res8[0])
        goto LAB_147c13e3a;
        iVar3 = *(int *)(*(longlong *)(param_1 + 4) + 4 + (longlong)iVar3 * 0xc);
      } while (iVar3 != -1);
    }
  }
  if (*(int *)&param_1[2].field_0x8 != *(int *)&param_1[3].field_0xc) {
    puVar4 = *(undefined1 **)&param_1[3].field_0x18;
    if (*(undefined1 **)&param_1[3].field_0x18 == (undefined1 *)0x0) {
      puVar4 = &param_1[3].field_0x10;
    }
    iVar3 = *(int *)(puVar4 + (ulonglong)(*(int *)&param_1[3].field_0x20 - 1U & local_res8[0]) * 4);
    if (iVar3 != -1) {
      do {
        this = (FWeakObjectPtr *)(*(longlong *)(param_1 + 2) + (longlong)iVar3 * 0x28);
        if (*(uint *)(*(longlong *)(param_1 + 2) + 0x18 + (longlong)iVar3 * 0x28) == local_res8[0])
        {
          if (this != (FWeakObjectPtr *)0x0) {
            pUVar2 = FWeakObjectPtr::Get(this);
            *(UObject **)param_3 = pUVar2;
            return;
          }
          break;
        }
        iVar3 = this[4].ObjectIndex;
      } while (iVar3 != -1);
    }
  }
LAB_147c13e3a:
  *(undefined8 *)param_3 = 0;
  return;
}

// execGetInputDeviceHardwareIdentifier @ 147c14090

void __cdecl
UInputDeviceSubsystem::execGetInputDeviceHardwareIdentifier
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FName FVar2;
  FHardwareDeviceIdentifier *pFVar3;
  FInputDeviceId local_res10 [2];
  FHardwareDeviceIdentifier local_28;
  
  local_res10[0].InternalId = -1;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar3 = GetInputDeviceHardwareIdentifier
                     ((UInputDeviceSubsystem *)param_1,&local_28,local_res10[0]);
  FVar2 = pFVar3->HardwareDeviceIdentifier;
  *(FName *)param_3 = pFVar3->InputClassName;
  *(FName *)((longlong)param_3 + 8) = FVar2;
  *(undefined8 *)((longlong)param_3 + 0x10) = *(undefined8 *)&pFVar3->PrimaryDeviceType;
  return;
}

// execGetMostRecentlyUsedHardwareDevice @ 147c14230

void __cdecl
UInputDeviceSubsystem::execGetMostRecentlyUsedHardwareDevice
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FName FVar2;
  FHardwareDeviceIdentifier *pFVar3;
  FPlatformUserId local_res10 [2];
  FHardwareDeviceIdentifier local_28;
  
  local_res10[0].InternalId = -1;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar3 = GetMostRecentlyUsedHardwareDevice
                     ((UInputDeviceSubsystem *)param_1,&local_28,local_res10[0]);
  FVar2 = pFVar3->HardwareDeviceIdentifier;
  *(FName *)param_3 = pFVar3->InputClassName;
  *(FName *)((longlong)param_3 + 8) = FVar2;
  *(undefined8 *)((longlong)param_3 + 0x10) = *(undefined8 *)&pFVar3->PrimaryDeviceType;
  return;
}

// execGetMostRecentlyUsedInputDeviceId @ 147c142e0

void __cdecl
UInputDeviceSubsystem::execGetMostRecentlyUsedInputDeviceId
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  uint uVar2;
  uint *puVar3;
  byte *pbVar4;
  undefined1 *puVar5;
  uint *puVar6;
  byte local_res8 [8];
  uint local_res10 [2];
  
  local_res10[0] = 0xffffffff;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res8[0] = 0;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(int *)&param_1[8].field_0x8 != *(int *)&param_1[9].field_0xc) {
    puVar5 = *(undefined1 **)&param_1[9].field_0x18;
    if (*(undefined1 **)&param_1[9].field_0x18 == (undefined1 *)0x0) {
      puVar5 = &param_1[9].field_0x10;
    }
    uVar2 = *(uint *)(puVar5 + (ulonglong)(*(int *)&param_1[9].field_0x20 - 1U & local_res10[0]) * 4
                     );
    if (uVar2 != 0xffffffff) {
      do {
        puVar3 = (uint *)((longlong)(int)uVar2 * 0x68 + *(longlong *)(param_1 + 8));
        if (*puVar3 == local_res10[0]) {
          puVar6 = puVar3 + 2;
          if (puVar3 == (uint *)0x0) {
            puVar6 = (uint *)0x0;
          }
          if (puVar6 != (uint *)0x0) {
            if (local_res8[0] == 0) {
              *(uint *)param_3 = *puVar6;
              return;
            }
            if (puVar6[4] != puVar6[0xf]) {
              puVar3 = *(uint **)(puVar6 + 0x12);
              if (*(uint **)(puVar6 + 0x12) == (uint *)0x0) {
                puVar3 = puVar6 + 0x10;
              }
              uVar2 = puVar3[(ulonglong)(puVar6[0x14] - 1) & (ulonglong)local_res8[0]];
              if (uVar2 != 0xffffffff) {
                goto LAB_147c14470;
              }
            }
          }
          break;
        }
        uVar2 = puVar3[0x18];
      } while (uVar2 != 0xffffffff);
    }
  }
  goto LAB_147c143f6;
  while (uVar2 = *(uint *)(pbVar4 + 8), uVar2 != 0xffffffff) {
LAB_147c14470:
    pbVar4 = (byte *)((longlong)(int)uVar2 * 0x10 + *(longlong *)(puVar6 + 2));
    if (*pbVar4 == local_res8[0]) {
      puVar3 = (uint *)(pbVar4 + 4);
      if (pbVar4 == (byte *)0x0) {
        puVar3 = (uint *)0x0;
      }
      if (puVar3 != (uint *)0x0) {
        *(uint *)param_3 = *puVar3;
        return;
      }
      break;
    }
  }
LAB_147c143f6:
  *(undefined4 *)param_3 = 0xffffffff;
  return;
}

// execIsPropertyActive @ 147c14850

void __cdecl
UInputDeviceSubsystem::execIsPropertyActive(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  undefined1 *puVar3;
  uint local_res8 [2];
  
  local_res8[0] = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(int *)&param_1[2].field_0x8 != *(int *)&param_1[3].field_0xc) {
    puVar3 = *(undefined1 **)&param_1[3].field_0x18;
    if (*(undefined1 **)&param_1[3].field_0x18 == (undefined1 *)0x0) {
      puVar3 = &param_1[3].field_0x10;
    }
    iVar2 = *(int *)(puVar3 + (ulonglong)(*(int *)&param_1[3].field_0x20 - 1U & local_res8[0]) * 4);
    if (iVar2 != -1) {
      while (*(uint *)(*(longlong *)(param_1 + 2) + 0x18 + (longlong)iVar2 * 0x28) != local_res8[0])
      {
        iVar2 = *(int *)(*(longlong *)(param_1 + 2) + 0x20 + (longlong)iVar2 * 0x28);
        if (iVar2 == -1) goto LAB_147c14918;
      }
      if (*(int *)&param_1[4].field_0x8 == *(int *)&param_1[5].field_0xc) goto LAB_147c14987;
      puVar3 = *(undefined1 **)&param_1[5].field_0x18;
      if (*(undefined1 **)&param_1[5].field_0x18 == (undefined1 *)0x0) {
        puVar3 = &param_1[5].field_0x10;
      }
      iVar2 = *(int *)(puVar3 + (ulonglong)(*(int *)&param_1[5].field_0x20 - 1U & local_res8[0]) * 4
                      );
      if (iVar2 == -1) goto LAB_147c14987;
      while (*(uint *)(*(longlong *)(param_1 + 4) + (longlong)iVar2 * 0xc) != local_res8[0]) {
        iVar2 = *(int *)(*(longlong *)(param_1 + 4) + 4 + (longlong)iVar2 * 0xc);
        if (iVar2 == -1) {
LAB_147c14987:
          *(undefined1 *)param_3 = 1;
          return;
        }
      }
    }
  }
LAB_147c14918:
  *(undefined1 *)param_3 = 0;
  return;
}

// execRemoveAllDeviceProperties @ 147c14fe0

void __cdecl
UInputDeviceSubsystem::execRemoveAllDeviceProperties(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  RemoveAllDeviceProperties((UInputDeviceSubsystem *)param_1);
  return;
}

// execRemoveDevicePropertyByHandle @ 147c15000

void __cdecl
UInputDeviceSubsystem::execRemoveDevicePropertyByHandle
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res8 [2];
  undefined4 local_res10 [4];
  FInputDevicePropertyHandle local_res20 [2];
  
  local_res8[0] = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_res10[0] = local_res8[0];
  TSet<FInputDevicePropertyHandle,DefaultKeyFuncs<FInputDevicePropertyHandle,0>,FDefaultSetAllocator>
  ::Emplace<FInputDevicePropertyHandle_const_&>
            ((TSet<FInputDevicePropertyHandle,DefaultKeyFuncs<FInputDevicePropertyHandle,0>,FDefaultSetAllocator>
              *)(param_1 + 4),local_res20,(bool *)local_res10);
  return;
}

// execRemoveDevicePropertyHandles @ 147c15090

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UInputDeviceSubsystem::execRemoveDevicePropertyHandles
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  TSet<FInputDevicePropertyHandle,DefaultKeyFuncs<FInputDevicePropertyHandle,0>,FDefaultSetAllocator>
  *pTVar3;
  undefined1 auStackY_a8 [32];
  undefined1 local_78 [32];
  void *local_58;
  undefined4 local_50;
  uint local_4c;
  undefined4 local_48;
  undefined4 local_44;
  ForElementType<FSetElementId> local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  local_4c = 0x80;
  local_78._0_8_ = (FScriptContainerElement *)0x0;
  local_78._8_8_ = 0;
  local_58 = (void *)0x0;
  local_50 = 0;
  local_48 = 0xffffffff;
  local_44 = 0;
  local_38 = (ForElementType<FSetElementId>)0x0;
  local_30 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_78);
  }
  pTVar3 = (TSet<FInputDevicePropertyHandle,DefaultKeyFuncs<FInputDevicePropertyHandle,0>,FDefaultSetAllocator>
            *)local_78;
  if ((TSet<FInputDevicePropertyHandle,DefaultKeyFuncs<FInputDevicePropertyHandle,0>,FDefaultSetAllocator>
       *)param_2->MostRecentPropertyAddress !=
      (TSet<FInputDevicePropertyHandle,DefaultKeyFuncs<FInputDevicePropertyHandle,0>,FDefaultSetAllocator>
       *)0x0) {
    pTVar3 = (TSet<FInputDevicePropertyHandle,DefaultKeyFuncs<FInputDevicePropertyHandle,0>,FDefaultSetAllocator>
              *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(int *)&(pTVar3->Elements).field_0x8 == *(int *)&(pTVar3->Elements).field_0x34) {
    if (2 < (byte)LogInputDeviceProperties._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogInputDeviceProperties)
      ;
    }
  }
  else {
    TSet<FInputDevicePropertyHandle,DefaultKeyFuncs<FInputDevicePropertyHandle,0>,FDefaultSetAllocator>
    ::Append<FDefaultSetAllocator>
              ((TSet<FInputDevicePropertyHandle,DefaultKeyFuncs<FInputDevicePropertyHandle,0>,FDefaultSetAllocator>
                *)(param_1 + 4),pTVar3);
  }
  local_30 = 0;
  if (local_38 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_38);
  }
  iVar2 = SUB84(local_78._8_8_,4);
  local_78._8_8_ = local_78._8_8_ & 0xffffffff00000000;
  if (iVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,(ForAnyElementType *)local_78,0,(int *)(local_78 + 0xc));
  }
  local_48 = 0xffffffff;
  local_44 = 0;
  local_50 = 0;
  if (0x80 < local_4c) {
    local_4c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_78 + 0x10),0);
  }
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  if ((FScriptContainerElement *)local_78._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_78._0_8_);
  }
  return;
}

// operator() @ 15051a280

bool __thiscall
`UInputDeviceSubsystem::ActivateDeviceProperty'::__l45::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_2636499218344181386>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_2636499218344181386>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

