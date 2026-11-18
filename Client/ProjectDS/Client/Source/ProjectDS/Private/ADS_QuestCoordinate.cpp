// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 20

// StaticClass @ 14b56a8f0

UClass * __cdecl ADS_QuestCoordinate::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ADS_QuestCoordinate.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_QuestCoordinate",
               &Z_Registration_Info_UClass_ADS_QuestCoordinate.InnerSingleton,
               StaticRegisterNativesADS_QuestCoordinate,0x2d8,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<ADS_QuestCoordinate>,
               InternalVTableHelperCtorCaller<ADS_QuestCoordinate>,local_res8,AActor::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ADS_QuestCoordinate.InnerSingleton;
}

// ADS_QuestCoordinate @ 14b56d410

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ADS_QuestCoordinate * __thiscall
ADS_QuestCoordinate::ADS_QuestCoordinate(ADS_QuestCoordinate *this,FVTableHelper *param_1)

{
  AActor::AActor((AActor *)this,param_1);
  this->_padding_ = (longlong)&___7ADS_QuestCoordinate__6B_;
  (this->SphereComponent).field0_0x0.DebugPtr = (USphereComponent *)0x0;
  (this->EffectComponent).WeakPtr = (FWeakObjectPtr)0x0;
  this->QuestID = 0;
  this->QuestObjectiveID = 0;
  return this;
}

// ~ADS_QuestCoordinate @ 14b56e210

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ADS_QuestCoordinate::~ADS_QuestCoordinate(ADS_QuestCoordinate *this)

{
  this->_padding_ = (longlong)&___7ADS_QuestCoordinate__6B_;
  AActor::~AActor((AActor *)this);
  return;
}

// GetPrivateStaticClass @ 14b56f1c0

UClass * __cdecl ADS_QuestCoordinate::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ADS_QuestCoordinate.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_QuestCoordinate",
               &Z_Registration_Info_UClass_ADS_QuestCoordinate.InnerSingleton,
               StaticRegisterNativesADS_QuestCoordinate,0x2d8,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<ADS_QuestCoordinate>,
               InternalVTableHelperCtorCaller<ADS_QuestCoordinate>,local_res8,AActor::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ADS_QuestCoordinate.InnerSingleton;
}

// StaticRegisterNativesADS_QuestCoordinate @ 14b56fc70

void __cdecl ADS_QuestCoordinate::StaticRegisterNativesADS_QuestCoordinate(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_ADS_QuestCoordinate_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execOnTriggerBeginOverlap @ 14b571030

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
ADS_QuestCoordinate::execOnTriggerBeginOverlap(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FHitResult *pFVar2;
  bool bVar3;
  int local_res10 [2];
  int local_res20 [2];
  UPrimitiveComponent *local_158;
  AActor *local_150;
  UPrimitiveComponent *local_148 [3];
  undefined8 local_130;
  undefined4 uStack_128;
  undefined1 uStack_124;
  undefined2 uStack_123;
  undefined1 uStack_121;
  FHitResult local_118;
  
  local_148[0] = (UPrimitiveComponent *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_148,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_148);
  }
  local_150 = (AActor *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_150,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_150);
  }
  local_158 = (UPrimitiveComponent *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_158,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_158);
  }
  local_res20[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  bVar3 = local_res10[0] != 0;
  memset(&local_118,0,0x100);
  uStack_123 = 0;
  uStack_121 = 0;
  local_118.HitObjectHandle.ReferenceObject.WeakPtr.ObjectIndex = 0;
  local_118.HitObjectHandle.ReferenceObject.WeakPtr.ObjectSerialNumber = 0;
  local_118.HitObjectHandle.ManagerInterface.ObjectInstance.WeakPtr.ObjectIndex = 0;
  local_118.HitObjectHandle.ManagerInterface.ObjectInstance.WeakPtr.ObjectSerialNumber = 0;
  local_130 = 0;
  uStack_128 = 0xffffffff;
  uStack_124 = 0;
  local_118.HitObjectHandle.InstanceIndex = -1;
  local_118.HitObjectHandle.ResolutionStatus = Invalid;
  local_118.HitObjectHandle._29_3_ = 0;
  local_118.Time = 1.0;
  local_118.MyItem = -1;
  local_118.HitObjectHandle.ManagerInterface.InterfaceInstance =
       (IActorInstanceManagerInterface *)0x0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_118,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_118);
  }
  pFVar2 = &local_118;
  if ((FHitResult *)param_2->MostRecentPropertyAddress != (FHitResult *)0x0) {
    pFVar2 = (FHitResult *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  OnTriggerBeginOverlap
            ((ADS_QuestCoordinate *)param_1,local_148[0],local_150,local_158,local_res20[0],bVar3,
             pFVar2);
  return;
}

// execOnTriggerEndOverlap @ 14b5712a0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
ADS_QuestCoordinate::execOnTriggerEndOverlap(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res10 [2];
  UPrimitiveComponent *local_res20;
  AActor *local_18;
  UPrimitiveComponent *local_10;
  
  local_10 = (UPrimitiveComponent *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_10);
  }
  local_18 = (AActor *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  local_res20 = (UPrimitiveComponent *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  OnTriggerEndOverlap((ADS_QuestCoordinate *)param_1,local_10,local_18,local_res20,local_res10[0]);
  return;
}

// ADS_QuestCoordinate @ 14bc81fc0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ADS_QuestCoordinate * __thiscall
ADS_QuestCoordinate::ADS_QuestCoordinate(ADS_QuestCoordinate *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  FName FVar2;
  FName *pFVar3;
  UClass *pUVar4;
  UObject *pUVar5;
  USphereComponent *this_00;
  FName local_res8;
  
  AActor::AActor((AActor *)this,param_1);
  this->_padding_ = (longlong)&___7ADS_QuestCoordinate__6B_;
  (this->SphereComponent).field0_0x0.DebugPtr = (USphereComponent *)0x0;
  (this->EffectComponent).WeakPtr = (FWeakObjectPtr)0x0;
  this->QuestID = 0;
  this->QuestObjectiveID = 0;
  pFVar3 = ::FName::FName(&local_res8,"Root");
  FVar2 = *pFVar3;
  pUVar4 = Z_Construct_UClass_USceneComponent_NoRegister();
  pUVar5 = UObject::CreateDefaultSubobject((UObject *)this,FVar2,pUVar4,pUVar4,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar5);
  }
  this->_padding_ = (longlong)pUVar5;
  pFVar3 = ::FName::FName(&local_res8,"Sphere");
  FVar2 = *pFVar3;
  pUVar4 = Z_Construct_UClass_USphereComponent_NoRegister();
  this_00 = (USphereComponent *)
            UObject::CreateDefaultSubobject((UObject *)this,FVar2,pUVar4,pUVar4,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this_00 != (USphereComponent *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)this_00);
  }
  (this->SphereComponent).field0_0x0.DebugPtr = this_00;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  USceneComponent::SetupAttachment
            ((USceneComponent *)this_00,(USceneComponent *)this->_padding_,(FName)0x0);
  pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
  *pbVar1 = *pbVar1 | 6;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x3dcccccd;
  return this;
}

// BeginPlay @ 14bc890b0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ADS_QuestCoordinate::BeginPlay(ADS_QuestCoordinate *this)

{
  AActor::BeginPlay((AActor *)this);
  (**(code **)(this->_padding_ + 0x4a8))(this,0);
  InitTriggerCollision(this);
  InitEffect(this);
  return;
}

// Destroyed @ 14bc969a0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ADS_QuestCoordinate::Destroyed(ADS_QuestCoordinate *this)

{
  code *pcVar1;
  FName FVar2;
  bool bVar3;
  UFunction *pUVar4;
  TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1> *pTVar5;
  ADS_QuestCoordinate *pAStackX_8;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *pTStack_38;
  FSharedReferencer<1> FStack_30;
  undefined8 uStack_28;
  FSharedReferencer<1> FStack_20;
  TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1> TStack_18;
  
  AActor::RouteEndPlay((AActor *)this,Destroyed);
  pUVar4 = UObject::FindFunctionChecked((UObject *)this,NAME_AActor_ReceiveDestroyed);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar4,0);
  pTStack_38 = (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)0x0;
  FStack_30.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (*(char *)((longlong)&this->_padding_ + 6) != '\0') {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) <
        `protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorDestroyedSignature_MCSignature,AActor,FActorDestroyedSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
        ::__l2::_thread_safe_static_guard_0__) {
      _Init_thread_header(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorDestroyedSignature_MCSignature,AActor,FActorDestroyedSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
      if (`protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorDestroyedSignature_MCSignature,AActor,FActorDestroyedSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
          ::__l2::_thread_safe_static_guard_0__ == -1) {
        ::FName::FName(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorDestroyedSignature_MCSignature,AActor,FActorDestroyedSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
                        ::__l2::DelegateFName,"OnDestroyed");
        _Init_thread_footer(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorDestroyedSignature_MCSignature,AActor,FActorDestroyedSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
                             ::__l2::_thread_safe_static_guard_0__);
      }
    }
    FVar2 = `protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorDestroyedSignature_MCSignature,AActor,FActorDestroyedSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
            ::__l2::DelegateFName;
    bVar3 = UObjectBase::IsValidLowLevelFast((UObjectBase *)this,false);
    if (!bVar3) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("DelegateOwner->IsValidLowLevelFast(false)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\SparseDelegate.h"
                         ,0xd7,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    pTVar5 = FSparseDelegateStorage::GetSharedMulticastDelegate(&TStack_18,(UObject *)this,FVar2);
    FStack_20.ReferenceController = (pTVar5->SharedReferenceCount).ReferenceController;
    pTStack_38 = pTVar5->Object;
    if (FStack_20.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (FStack_20.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FStack_20.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    uStack_28 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_30,&FStack_20);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_20.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (TStack_18.SharedReferenceCount.ReferenceController);
  }
  if (pTStack_38 != (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)0x0) {
    if (pTStack_38 == (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    pAStackX_8 = this;
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
              (pTStack_38,&pAStackX_8);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_30.ReferenceController);
  return;
}

// EndPlay @ 14bc96d20

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall ADS_QuestCoordinate::EndPlay(ADS_QuestCoordinate *this,Type param_1)

{
  USphereComponent *pUVar1;
  code *pcVar2;
  FName FVar3;
  bool bVar4;
  UObject *pUVar5;
  
  bVar4 = FWeakObjectPtr::IsValid(&(this->EffectComponent).WeakPtr);
  if (bVar4) {
    pUVar5 = FWeakObjectPtr::Get(&(this->EffectComponent).WeakPtr);
    (**(code **)(*(longlong *)pUVar5 + 0x4a0))(pUVar5);
    (this->EffectComponent).WeakPtr = (FWeakObjectPtr)0x0;
  }
  pUVar1 = (this->SphereComponent).field0_0x0.DebugPtr;
  if (pUVar1 != (USphereComponent *)0x0) {
    if (*(char *)((longlong)&pUVar1->_padding_ + 1) != '\0') {
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c) <
          `protected:_class_FName___cdecl_TSparseDynamicDelegate<FComponentBeginOverlapSignature_MCSignature,UPrimitiveComponent,FComponentBeginOverlapSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
          ::__l2::_thread_safe_static_guard_0__) {
        _Init_thread_header(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<FComponentBeginOverlapSignature_MCSignature,UPrimitiveComponent,FComponentBeginOverlapSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
                             ::__l2::_thread_safe_static_guard_0__);
        if (`protected:_class_FName___cdecl_TSparseDynamicDelegate<FComponentBeginOverlapSignature_MCSignature,UPrimitiveComponent,FComponentBeginOverlapSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
            ::__l2::_thread_safe_static_guard_0__ == -1) {
          ::FName::FName(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<FComponentBeginOverlapSignature_MCSignature,UPrimitiveComponent,FComponentBeginOverlapSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
                          ::__l2::DelegateFName,"OnComponentBeginOverlap");
          _Init_thread_footer(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<FComponentBeginOverlapSignature_MCSignature,UPrimitiveComponent,FComponentBeginOverlapSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
                               ::__l2::_thread_safe_static_guard_0__);
        }
      }
      FVar3 = `protected:_class_FName___cdecl_TSparseDynamicDelegate<FComponentBeginOverlapSignature_MCSignature,UPrimitiveComponent,FComponentBeginOverlapSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
              ::__l2::DelegateFName;
      bVar4 = UObjectBase::IsValidLowLevelFast((UObjectBase *)pUVar1,false);
      if (!bVar4) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("DelegateOwner->IsValidLowLevelFast(false)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\SparseDelegate.h"
                           ,0xd7,L"");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      bVar4 = FSparseDelegateStorage::RemoveAll((UObject *)pUVar1,FVar3,(UObject *)this);
      *(bool *)((longlong)&pUVar1->_padding_ + 1) = bVar4;
    }
    pUVar1 = (this->SphereComponent).field0_0x0.DebugPtr;
    if (*(char *)((longlong)&pUVar1->_padding_ + 2) != '\0') {
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c) <
          `protected:_class_FName___cdecl_TSparseDynamicDelegate<FComponentEndOverlapSignature_MCSignature,UPrimitiveComponent,FComponentEndOverlapSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
          ::__l2::_thread_safe_static_guard_0__) {
        _Init_thread_header(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<FComponentEndOverlapSignature_MCSignature,UPrimitiveComponent,FComponentEndOverlapSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
                             ::__l2::_thread_safe_static_guard_0__);
        if (`protected:_class_FName___cdecl_TSparseDynamicDelegate<FComponentEndOverlapSignature_MCSignature,UPrimitiveComponent,FComponentEndOverlapSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
            ::__l2::_thread_safe_static_guard_0__ == -1) {
          ::FName::FName(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<FComponentEndOverlapSignature_MCSignature,UPrimitiveComponent,FComponentEndOverlapSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
                          ::__l2::DelegateFName,"OnComponentEndOverlap");
          _Init_thread_footer(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<FComponentEndOverlapSignature_MCSignature,UPrimitiveComponent,FComponentEndOverlapSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
                               ::__l2::_thread_safe_static_guard_0__);
        }
      }
      FVar3 = `protected:_class_FName___cdecl_TSparseDynamicDelegate<FComponentEndOverlapSignature_MCSignature,UPrimitiveComponent,FComponentEndOverlapSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
              ::__l2::DelegateFName;
      bVar4 = UObjectBase::IsValidLowLevelFast((UObjectBase *)pUVar1,false);
      if (!bVar4) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("DelegateOwner->IsValidLowLevelFast(false)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\SparseDelegate.h"
                           ,0xd7,L"");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      bVar4 = FSparseDelegateStorage::RemoveAll((UObject *)pUVar1,FVar3,(UObject *)this);
      *(bool *)((longlong)&pUVar1->_padding_ + 2) = bVar4;
    }
    UPrimitiveComponent::SetGenerateOverlapEvents
              ((UPrimitiveComponent *)(this->SphereComponent).field0_0x0.DebugPtr,false);
    pUVar1 = (this->SphereComponent).field0_0x0.DebugPtr;
    (**(code **)(pUVar1->_padding_ + 0x4a0))(pUVar1,0);
    (this->SphereComponent).field0_0x0.DebugPtr = (USphereComponent *)0x0;
  }
  AActor::EndPlay((AActor *)this,param_1);
  return;
}

// InitEffect @ 14bca4340

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall ADS_QuestCoordinate::InitEffect(ADS_QuestCoordinate *this)

{
  UObject *pUVar1;
  ForElementType<TAlignedBytes<16,16>_> FVar2;
  int iVar3;
  bool bVar4;
  FDS_QuestObjectiveTableRow *this_00;
  undefined8 *puVar5;
  ulong64 uVar6;
  FWeakObjectPtr local_res8;
  UObject *local_res10;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_128;
  FDelegateAllocation local_120;
  FDestructionSentinel local_110;
  FDelegateAllocation *local_f8;
  undefined1 local_f0 [200];
  ForAnyElementType local_28;
  int local_20;
  
  if (this->QuestObjectiveID < 1) {
    return;
  }
  this_00 = FDS_QuestObjectiveTableRow::GetRef((longlong)this->QuestObjectiveID,true);
  bVar4 = FDS_QuestObjectiveTableRow::IsValid(this_00);
  if (!bVar4) {
    return;
  }
  if (this_00->ID_ResourceEffect < 1) {
    return;
  }
  RemoveEffect(this);
  FDS_EffectSpawnInfo::FDS_EffectSpawnInfo((FDS_EffectSpawnInfo *)local_f0);
  local_res8 = (FWeakObjectPtr)this;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)(local_f0 + 0x28),(FObjectPtr)&local_res8);
  pUVar1 = (UObject *)this->_padding_;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if (pUVar1 != (UObject *)0x0) {
      UE::GC::MarkAsReachable(pUVar1);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar1);
    }
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10 = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar1);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
  local_f0._52_4_ = local_res8.ObjectIndex;
  local_f0._56_4_ = local_res8.ObjectSerialNumber;
  local_f0._0_4_ = this_00->ID_ResourceEffect;
  local_128.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_120.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_120.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_128,(FWriteAccessScope *)&local_110);
  local_f8 = &local_120;
  puVar5 = UE::Core::Private::DelegateAllocate(0x28,&local_120);
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = &
              ___7__TCommonDelegateInstanceState___A6AXUFDS_EffectSpawnCompleteInfo___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar6 = FDelegateHandle::GenerateNewID();
    puVar5[2] = uVar6;
    *puVar5 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VADS_QuestCoordinate____A6AXUFDS_EffectSpawnCompleteInfo___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar5[3] = 0;
    local_res8 = (FWeakObjectPtr)this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar5 + 3),(FObjectPtr)&local_res8);
    puVar5[4] = OnEffectSpawnComplete;
  }
  if (local_110.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_110.Accessor,&local_110);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_128,(FWriteAccessScope *)&local_110);
  iVar3 = local_120.DelegateSize;
  FVar2 = local_120.DelegateAllocator;
  local_120.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_120.DelegateSize = 0;
  if (local_110.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_110.Accessor,&local_110);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(local_f0 + 0xc0),
             (FWriteAccessScope *)&local_110);
  if (local_20 != 0) {
    if (local_28.Data == (FScriptContainerElement *)0x0) goto LAB_14bca4586;
    (*(code *)**(undefined8 **)local_28.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_28,0,0,0x10);
    local_20 = 0;
  }
  if (local_28.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data);
  }
LAB_14bca4586:
  local_28.Data = (FScriptContainerElement *)FVar2;
  local_20 = iVar3;
  if (local_110.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_110.Accessor,&local_110);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_128,(FWriteAccessScope *)&local_110);
  if ((local_120.DelegateSize != 0) &&
     (local_120.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_120.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_120,0,0,0x10);
    local_120.DelegateSize = 0;
  }
  if (local_110.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_110.Accessor,&local_110);
  }
  if (local_120.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_120.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_128.AccessDetector);
  UDS_EffectManager::PlayEffect((FDS_EffectSpawnInfo *)local_f0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(local_f0 + 0xc0),
             (FWriteAccessScope *)&local_110);
  if ((local_20 != 0) &&
     ((ForElementType<TAlignedBytes<16,16>_>)local_28.Data !=
      (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_28.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_28,0,0,0x10);
    local_20 = 0;
  }
  if (local_110.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_110.Accessor,&local_110);
  }
  if ((ForElementType<TAlignedBytes<16,16>_>)local_28.Data !=
      (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free(local_28.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)(local_f0 + 0xc0));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_f0._184_8_);
  if ((FScriptContainerElement *)local_f0._24_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_f0._24_8_);
  }
  return;
}

// InitTriggerCollision @ 14bca5120

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ADS_QuestCoordinate::InitTriggerCollision(ADS_QuestCoordinate *this)

{
  USphereComponent *pUVar1;
  code *pcVar2;
  bool bVar3;
  FDS_QuestObjectiveTableRow *this_00;
  FName *pFVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  FName local_res8;
  FName local_res10;
  FName local_res18 [2];
  
  if (this->QuestObjectiveID < 1) {
    return;
  }
  this_00 = FDS_QuestObjectiveTableRow::GetRef((longlong)this->QuestObjectiveID,true);
  bVar3 = FDS_QuestObjectiveTableRow::IsValid(this_00);
  if (!bVar3) {
    return;
  }
  if (this_00->QuestDefineType != MoveProgressCoordinate) {
    return;
  }
  pUVar1 = (this->SphereComponent).field0_0x0.DebugPtr;
  if (pUVar1 == (USphereComponent *)0x0) {
    return;
  }
  pcVar2 = *(code **)(pUVar1->_padding_ + 0x788);
  pFVar4 = ::FName::FName(local_res18,"LevelTrigger");
  (*pcVar2)(pUVar1,*pFVar4,1);
  *(FColor_u_0 *)&((this->SphereComponent).field0_0x0.DebugPtr)->_padding_ =
       (FColor_u_0_s_0)FColor::Green.field0_0x0;
  pUVar1 = (this->SphereComponent).field0_0x0.DebugPtr;
  pcVar5 = strstr("&ADS_QuestCoordinate::OnTriggerBeginOverlap","::");
  pcVar7 = &DAT_00000002;
  if (pcVar5 == (char *)0x0) {
LAB_14bca521b:
    pcVar6 = &DAT_00000002;
LAB_14bca521e:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Result && Result[2] != \'0\'",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                       ,0x1da,L"\'%hs\' does not look like a member function");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    do {
      pcVar6 = pcVar5;
      pcVar5 = strstr(pcVar6 + 1,"::");
    } while (pcVar5 != (char *)0x0);
    if (pcVar6 == (char *)0x0) goto LAB_14bca521b;
    pcVar6 = pcVar6 + 2;
    if (*pcVar6 == '0') goto LAB_14bca521e;
  }
  ::FName::FName(&local_res8,pcVar6);
  TSparseDynamicDelegate<FComponentBeginOverlapSignature_MCSignature,UPrimitiveComponent,FComponentBeginOverlapSignatureInfoGetter>
  ::__Internal_AddDynamic<ADS_QuestCoordinate>
            ((TSparseDynamicDelegate<FComponentBeginOverlapSignature_MCSignature,UPrimitiveComponent,FComponentBeginOverlapSignatureInfoGetter>
              *)((longlong)&pUVar1->_padding_ + 1),this,(pmf_9182b3a9)0x14bcbbbc0,local_res8);
  pUVar1 = (this->SphereComponent).field0_0x0.DebugPtr;
  pcVar5 = strstr("&ADS_QuestCoordinate::OnTriggerEndOverlap","::");
  if (pcVar5 != (char *)0x0) {
    do {
      pcVar6 = pcVar5;
      pcVar5 = strstr(pcVar6 + 1,"::");
    } while (pcVar5 != (char *)0x0);
    if ((pcVar6 != (char *)0x0) && (pcVar7 = pcVar6 + 2, pcVar6[2] != '0')) goto LAB_14bca52f8;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Result && Result[2] != \'0\'",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                     ,0x1da,L"\'%hs\' does not look like a member function");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_14bca52f8:
  ::FName::FName(&local_res10,pcVar7);
  TSparseDynamicDelegate<FComponentEndOverlapSignature_MCSignature,UPrimitiveComponent,FComponentEndOverlapSignatureInfoGetter>
  ::__Internal_AddDynamic<ADS_QuestCoordinate>
            ((TSparseDynamicDelegate<FComponentEndOverlapSignature_MCSignature,UPrimitiveComponent,FComponentEndOverlapSignatureInfoGetter>
              *)((longlong)&pUVar1->_padding_ + 2),this,(pmf_7e467395)0x14bcbc310,local_res10);
  USphereComponent::SetSphereRadius
            ((this->SphereComponent).field0_0x0.DebugPtr,(float)this_00->QuestDefineParameter,true);
  UActorComponent::RegisterComponent((UActorComponent *)(this->SphereComponent).field0_0x0.DebugPtr)
  ;
  UPrimitiveComponent::SetGenerateOverlapEvents
            ((UPrimitiveComponent *)(this->SphereComponent).field0_0x0.DebugPtr,true);
  return;
}

// OnEffectSpawnComplete @ 14bcb2e80

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall
ADS_QuestCoordinate::OnEffectSpawnComplete
          (ADS_QuestCoordinate *this,FDS_EffectSpawnCompleteInfo param_1)

{
  UNiagaraComponent *local_res8 [4];
  
  local_res8[0] = param_1.NiagaraComponent;
  if ((UE::GC::GIsIncrementalReachabilityPending) &&
     (param_1.NiagaraComponent != (UNiagaraComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1.NiagaraComponent);
  }
  FWeakObjectPtr::operator=(&(this->EffectComponent).WeakPtr,(FObjectPtr)local_res8);
                    /* WARNING: Could not recover jumptable at 0x00014bcb2ec2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x4a8))(this,1);
  return;
}

// OnTriggerBeginOverlap @ 14bcbbbc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
ADS_QuestCoordinate::OnTriggerBeginOverlap
          (ADS_QuestCoordinate *this,UPrimitiveComponent *param_1,AActor *param_2,
          UPrimitiveComponent *param_3,int param_4,bool param_5,FHitResult *param_6)

{
  UDS_LogManager *pUVar1;
  UDS_QuestManager *this_00;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  pUVar1 = UDS_LogManager::GetInst();
  if (pUVar1 != (UDS_LogManager *)0x0) {
    pUVar1 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"ADS_QuestCoordinate::OnTriggerBeginOverlap",0x2a,Yes);
    UDS_LogManager::PrintLog(pUVar1,1,Display,local_138.Ptr,0x7b,L"OnTriggerBeginOverlap");
    if ((void *)local_138._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_138._padding_);
    }
  }
  this_00 = UDS_QuestManager::GetInst();
  if (this_00 != (UDS_QuestManager *)0x0) {
    UDS_QuestManager::OnReqQuestMove(this_00);
  }
  return;
}

// OnTriggerEndOverlap @ 14bcbc310

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
ADS_QuestCoordinate::OnTriggerEndOverlap
          (ADS_QuestCoordinate *this,UPrimitiveComponent *param_1,AActor *param_2,
          UPrimitiveComponent *param_3,int param_4)

{
  UDS_LogManager *pUVar1;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  pUVar1 = UDS_LogManager::GetInst();
  if (pUVar1 != (UDS_LogManager *)0x0) {
    pUVar1 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"ADS_QuestCoordinate::OnTriggerEndOverlap",0x28,Yes);
    UDS_LogManager::PrintLog(pUVar1,1,Display,local_138.Ptr,0x85,L"OnTriggerEndOverlap");
    if ((void *)local_138._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_138._padding_);
    }
  }
  return;
}

// PostInitializeComponents @ 14bcbd640

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ADS_QuestCoordinate::PostInitializeComponents(ADS_QuestCoordinate *this)

{
  byte *pbVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  FName *pFVar8;
  FThreadSafeStaticStat<_public:_virtual_void___cdecl_AActor::PostInitializeComponents(void)_::_2_::FStat_STAT_Actor_PostInitComponents>
  FVar9;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar10;
  FNameEntryId FVar11;
  FName FVar12;
  FColor_u_0 aFStackX_8 [2];
  FName FStackX_10;
  LARGE_INTEGER LStackX_18;
  FName FStackX_20;
  FName FStack_58;
  FName FStack_50;
  FStatMessage FStack_40;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (StatPtr_STAT_Actor_PostInitComponents ==
          (FThreadSafeStaticStat<_public:_virtual_void___cdecl_AActor::PostInitializeComponents(void)_::_2_::FStat_STAT_Actor_PostInitComponents>
           )0x0) {
        pFVar8 = ::FName::FName(&FStackX_20,"STAT_Actor_PostInitComponents");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Actor_PostInitComponents,*pFVar8,
                   L"STAT_Actor_PostInitComponents","STATGROUP_Quick","STATCAT_Advanced",L"Quick",
                   true,true,ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar9 = StatPtr_STAT_Actor_PostInitComponents;
  if (StatPtr_STAT_Actor_PostInitComponents ==
      (FThreadSafeStaticStat<_public:_virtual_void___cdecl_AActor::PostInitializeComponents(void)_::_2_::FStat_STAT_Actor_PostInitComponents>
       )0x0) {
    pFVar8 = ::FName::FName(&FStack_58,"STAT_Actor_PostInitComponents");
    FVar9 = (FThreadSafeStaticStat<_public:_virtual_void___cdecl_AActor::PostInitializeComponents(void)_::_2_::FStat_STAT_Actor_PostInitComponents>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Actor_PostInitComponents,*pFVar8
                         ,L"STAT_Actor_PostInitComponents","STATGROUP_Quick","STATCAT_Advanced",
                         L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar12 = *(FName *)FVar9;
  bVar4 = false;
  bVar6 = false;
  FStack_50.ComparisonIndex.Value = 0;
  FStack_50.Number = 0;
  FVar11 = FVar12.ComparisonIndex.Value;
  uVar10 = FVar12.Number;
  if ((FVar11.Value != 0) || (uVar10 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      aFStackX_8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&aFStackX_8[0]._s_0,(char *)*(FName *)((longlong)FVar9 + 0x10));
      bVar4 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        FStackX_10.ComparisonIndex.Value = FVar11.Value;
        FStackX_10.Number = uVar10;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&FStackX_10,(wchar_t *)*(FName *)((longlong)FVar9 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Actor.cpp"
                   ,0x1992);
        bVar4 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      LStackX_18.s.LowPart = FVar11.Value;
      LStackX_18.s.HighPart = uVar10;
      FThreadStats::AddMessage(FVar12,CycleScopeStart);
      bVar5 = true;
      goto LAB_1473ac0a2;
    }
  }
  bVar5 = false;
  FVar12 = FStack_50;
LAB_1473ac0a2:
  if (this == (ADS_QuestCoordinate *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Test",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Object.h"
                       ,0x760,L"");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (((uint)this->_padding_ >> 0x1e & 1) == 0) {
    pbVar1 = (byte *)((longlong)&this->_padding_ + 4);
    *pbVar1 = *pbVar1 | 2;
    AActor::UpdateAllReplicatedComponents((AActor *)this);
  }
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar12 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      FStack_40.NameAndInfo.Index = FVar12.ComparisonIndex.Value;
      FStack_40.NameAndInfo.Number = FVar12.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&LStackX_18);
      FStack_40.StatData.Pad[4] = '\0';
      FStack_40.StatData.Pad[5] = '\0';
      FStack_40.StatData.Pad[6] = '\0';
      FStack_40.StatData.Pad[7] = '\0';
      FStack_40.StatData.Pad[0] = LStackX_18.s.LowPart._0_1_;
      FStack_40.StatData.Pad[1] = LStackX_18.s.LowPart._1_1_;
      FStack_40.StatData.Pad[2] = LStackX_18.s.LowPart._2_1_;
      FStack_40.StatData.Pad[3] = LStackX_18.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&FStack_40);
      piVar2 = &this_00->ScopeCount;
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
        FThreadStats::Flush(this_00,false,false);
        return;
      }
      if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

// RemoveEffect @ 14bcc3fe0

void __thiscall ADS_QuestCoordinate::RemoveEffect(ADS_QuestCoordinate *this)

{
  TWeakObjectPtr<UNiagaraComponent,FWeakObjectPtr> *this_00;
  bool bVar1;
  UObject *pUVar2;
  
  this_00 = &this->EffectComponent;
  bVar1 = FWeakObjectPtr::IsValid(&this_00->WeakPtr);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    (**(code **)(*(longlong *)pUVar2 + 0x4a0))(pUVar2,0);
    this_00->WeakPtr = (FWeakObjectPtr)0x0;
  }
  return;
}

// SetData @ 14bcc5c50

void __thiscall ADS_QuestCoordinate::SetData(ADS_QuestCoordinate *this,int param_1,int param_2)

{
  this->QuestID = param_1;
  this->QuestObjectiveID = param_2;
  return;
}

// Tick @ 14bcccb90

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ADS_QuestCoordinate::Tick(ADS_QuestCoordinate *this,float param_1)

{
  bool bVar1;
  UDS_MovementCore *this_00;
  FDS_QuestObjectiveTableRow *this_01;
  UDS_EffectManager *this_02;
  double dVar2;
  double dVar3;
  float local_res8 [4];
  FWeakObjectPtr local_res18;
  FWeakObjectPtr local_res20;
  ADS_QuestCoordinate *local_58;
  TVector<double> local_50 [2];
  
  AActor::Tick((AActor *)this,param_1);
  bVar1 = TWeakObjectPtr<UNiagaraComponent,FWeakObjectPtr>::UEOpEquals
                    (&this->EffectComponent,(void *)0x0);
  if (bVar1) {
    (**(code **)(this->_padding_ + 0x4a8))(this,0);
    return;
  }
  if ((this->_padding_ & 0x80) == 0) {
    FDS_EntityBase::GetMainPlayerEntityID(true);
    UDS_MovementCore::GetMovementCore((ulong64)&local_res20);
    bVar1 = TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr> *)&local_res20,(void *)0x0);
    if (!bVar1) {
      this_00 = (UDS_MovementCore *)FWeakObjectPtr::Get(&local_res20);
      UDS_MovementCore::GetActorFootLocation(this_00,local_50);
      dVar2 = DS_CommonDataHelper::QuestEffectViewRange();
      dVar3 = DS_CommonDataHelper::QuestEffectOutViewRange();
      this_01 = FDS_QuestObjectiveTableRow::GetRef((longlong)this->QuestObjectiveID,true);
      bVar1 = FDS_QuestObjectiveTableRow::IsValid(this_01);
      if (bVar1) {
        local_res8[0] = (float)dVar2;
        bVar1 = DS_Util::IsCloseDist2D(local_50,&this_01->ProgressCoordinate,local_res8);
        if (bVar1) {
          this_02 = UDS_EffectManager::GetInst();
          if (this_02 == (UDS_EffectManager *)0x0) {
            return;
          }
          local_res8[0] = (float)CONCAT31(local_res8[0]._1_3_,1);
        }
        else {
          local_res8[0] = (float)dVar3;
          bVar1 = DS_Util::IsCloseDist2D(local_50,&this_01->ProgressCoordinate,local_res8);
          if (bVar1) {
            return;
          }
          this_02 = UDS_EffectManager::GetInst();
          if (this_02 == (UDS_EffectManager *)0x0) {
            return;
          }
          local_res8[0] = (float)((uint)local_res8[0] & 0xffffff00);
        }
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        local_res18.ObjectIndex = 0;
        local_res18.ObjectSerialNumber = 0;
        local_58 = this;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)&local_58);
        UDS_EffectManager::OnChangedShowEntity
                  (this_02,(TWeakObjectPtr<AActor,FWeakObjectPtr>)local_res18,(bool *)local_res8);
      }
    }
  }
  return;
}

