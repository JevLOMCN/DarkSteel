// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 27

// StaticClass @ 14b4c8270

UClass * __cdecl UDS_InteractionComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_InteractionComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_InteractionComponent",
               &Z_Registration_Info_UClass_UDS_InteractionComponent.InnerSingleton,
               StaticRegisterNativesUDS_InteractionComponent,800,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_InteractionComponent>,
               InternalVTableHelperCtorCaller<UDS_InteractionComponent>,local_res8,
               USceneComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_InteractionComponent.InnerSingleton;
}

// UDS_InteractionComponent @ 14b4cb5c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UDS_InteractionComponent * __thiscall
UDS_InteractionComponent::UDS_InteractionComponent
          (UDS_InteractionComponent *this,FVTableHelper *param_1)

{
  undefined8 local_res8;
  
  USceneComponent::USceneComponent((USceneComponent *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  *(undefined8 *)&this->InteractionBeginDelegate = 0;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  *(undefined8 *)&(this->InteractionBeginDelegate).field_0x8 = 0;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined8 *)&(this->InteractionBeginDelegate).field_0x10 = 0;
  *(undefined8 *)&(this->InteractionBeginDelegate).field_0x18 = 2;
  *(undefined8 *)&this->InteractionEndDelegate = 0;
  *(undefined8 *)&(this->InteractionEndDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->InteractionEndDelegate).field_0x10 = 0;
  *(undefined8 *)&(this->InteractionEndDelegate).field_0x18 = 2;
  (this->PrepareSphereComponent).field0_0x0.DebugPtr = (USphereComponent *)0x0;
  (this->IconSphereComponent).field0_0x0.DebugPtr = (USphereComponent *)0x0;
  *(undefined8 *)&this->IconInteractedEntityMap = 0;
  *(undefined8 *)&(this->IconInteractedEntityMap).field_0x8 = 0;
  *(undefined8 *)&(this->IconInteractedEntityMap).field_0x20 = 0;
  *(undefined4 *)&(this->IconInteractedEntityMap).field_0x28 = 0;
  *(undefined4 *)&(this->IconInteractedEntityMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->IconInteractedEntityMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->IconInteractedEntityMap).field_0x34 = 0;
  *(undefined8 *)&(this->IconInteractedEntityMap).field_0x40 = 0;
  *(undefined4 *)&(this->IconInteractedEntityMap).field_0x48 = 0;
  (this->MainCharacter).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = 0;
  FWeakObjectPtr::operator=(&(this->MainCharacter).WeakPtr,(FObjectPtr)&local_res8);
  this->IconInteractedEntityID = 0xffffffffffffffff;
  (this->MouseOveredActor).WeakPtr = (FWeakObjectPtr)0x0;
  (this->CrossHairOveredActor).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = 0;
  FWeakObjectPtr::operator=(&(this->CrossHairOveredActor).WeakPtr,(FObjectPtr)&local_res8);
  this->NowInteractionViewType = 0;
  this->LastInteractionViewType = 0;
  return this;
}

// ~UDS_InteractionComponent @ 14b4cbf30

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UDS_InteractionComponent::~UDS_InteractionComponent(UDS_InteractionComponent *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined4 *)&(this->IconInteractedEntityMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->IconInteractedEntityMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TWeakObjectPtr<ADS_EntityActorBase,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TWeakObjectPtr<ADS_EntityActorBase,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TWeakObjectPtr<ADS_EntityActorBase,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->IconInteractedEntityMap);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->InteractionEndDelegate).field_0x8,
             *(int *)&(this->InteractionEndDelegate).field_0x10);
  pvVar1 = *(void **)&(this->InteractionEndDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->InteractionEndDelegate);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->InteractionBeginDelegate).field_0x8,
             *(int *)&(this->InteractionBeginDelegate).field_0x10);
  pvVar1 = *(void **)&(this->InteractionBeginDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->InteractionBeginDelegate);
  USceneComponent::~USceneComponent((USceneComponent *)this);
  return;
}

// GetPrivateStaticClass @ 14b4ccf60

UClass * __cdecl UDS_InteractionComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_InteractionComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_InteractionComponent",
               &Z_Registration_Info_UClass_UDS_InteractionComponent.InnerSingleton,
               StaticRegisterNativesUDS_InteractionComponent,800,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_InteractionComponent>,
               InternalVTableHelperCtorCaller<UDS_InteractionComponent>,local_res8,
               USceneComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_InteractionComponent.InnerSingleton;
}

// StaticRegisterNativesUDS_InteractionComponent @ 14b4cdbc0

void __cdecl UDS_InteractionComponent::StaticRegisterNativesUDS_InteractionComponent(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 5;
  local_18.DataPtr = Z_Construct_UClass_UDS_InteractionComponent_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execOnActorDestroyed @ 14b4cee00

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
UDS_InteractionComponent::execOnActorDestroyed(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  AActor *local_res10;
  
  local_res10 = (AActor *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  OnActorDestroyed((UDS_InteractionComponent *)param_1,local_res10);
  return;
}

// execOnIconBeginOverlap @ 14b4cee90

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
UDS_InteractionComponent::execOnIconBeginOverlap(UObject *param_1,FFrame *param_2,void *param_3)

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
  OnIconBeginOverlap((UDS_InteractionComponent *)param_1,local_148[0],local_150,local_158,
                     local_res20[0],bVar3,pFVar2);
  return;
}

// execOnIconEndOverlap @ 14b4cf100

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
UDS_InteractionComponent::execOnIconEndOverlap(UObject *param_1,FFrame *param_2,void *param_3)

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
  OnIconEndOverlap((UDS_InteractionComponent *)param_1,local_10,local_18,local_res20,local_res10[0])
  ;
  return;
}

// execOnPrepareBeginOverlap @ 14b4cf260

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
UDS_InteractionComponent::execOnPrepareBeginOverlap(UObject *param_1,FFrame *param_2,void *param_3)

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
  OnPrepareBeginOverlap
            ((UDS_InteractionComponent *)param_1,local_148[0],local_150,local_158,local_res20[0],
             bVar3,pFVar2);
  return;
}

// execOnPrepareEndOverlap @ 14b4cf4d0

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
UDS_InteractionComponent::execOnPrepareEndOverlap(UObject *param_1,FFrame *param_2,void *param_3)

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
  OnPrepareEndOverlap((UDS_InteractionComponent *)param_1,local_10,local_18,local_res20,
                      local_res10[0]);
  return;
}

// UDS_InteractionComponent @ 14bc2abb0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UDS_InteractionComponent * __thiscall
UDS_InteractionComponent::UDS_InteractionComponent(UDS_InteractionComponent *this)

{
  byte *pbVar1;
  FName FVar2;
  FObjectInitializer *pFVar3;
  FName *pFVar4;
  UClass *pUVar5;
  USphereComponent *pUVar6;
  FName local_res8;
  
  pFVar3 = FObjectInitializer::Get();
  USceneComponent::USceneComponent((USceneComponent *)this,pFVar3);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  *(undefined8 *)&this->InteractionBeginDelegate = 0;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  *(undefined8 *)&(this->InteractionBeginDelegate).field_0x8 = 0;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined8 *)&(this->InteractionBeginDelegate).field_0x10 = 0;
  *(undefined8 *)&(this->InteractionBeginDelegate).field_0x18 = 2;
  *(undefined8 *)&this->InteractionEndDelegate = 0;
  *(undefined8 *)&(this->InteractionEndDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->InteractionEndDelegate).field_0x10 = 0;
  *(undefined8 *)&(this->InteractionEndDelegate).field_0x18 = 2;
  (this->PrepareSphereComponent).field0_0x0.DebugPtr = (USphereComponent *)0x0;
  (this->IconSphereComponent).field0_0x0.DebugPtr = (USphereComponent *)0x0;
  *(undefined8 *)&this->IconInteractedEntityMap = 0;
  *(undefined8 *)&(this->IconInteractedEntityMap).field_0x8 = 0;
  *(undefined8 *)&(this->IconInteractedEntityMap).field_0x20 = 0;
  *(undefined4 *)&(this->IconInteractedEntityMap).field_0x28 = 0;
  *(undefined4 *)&(this->IconInteractedEntityMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->IconInteractedEntityMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->IconInteractedEntityMap).field_0x34 = 0;
  *(undefined8 *)&(this->IconInteractedEntityMap).field_0x40 = 0;
  *(undefined4 *)&(this->IconInteractedEntityMap).field_0x48 = 0;
  (this->MainCharacter).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  FWeakObjectPtr::operator=(&(this->MainCharacter).WeakPtr,(FObjectPtr)&local_res8);
  this->IconInteractedEntityID = 0xffffffffffffffff;
  (this->MouseOveredActor).WeakPtr = (FWeakObjectPtr)0x0;
  (this->CrossHairOveredActor).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  FWeakObjectPtr::operator=(&(this->CrossHairOveredActor).WeakPtr,(FObjectPtr)&local_res8);
  pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
  *pbVar1 = *pbVar1 | 2;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 3);
  *pbVar1 = *pbVar1 | 1;
  this->NowInteractionViewType = 0;
  this->LastInteractionViewType = 0;
  pFVar4 = ::FName::FName(&local_res8,"Prepare");
  FVar2 = *pFVar4;
  pUVar5 = Z_Construct_UClass_USphereComponent_NoRegister();
  pUVar6 = (USphereComponent *)
           UObject::CreateDefaultSubobject((UObject *)this,FVar2,pUVar5,pUVar5,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (USphereComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar6);
  }
  (this->PrepareSphereComponent).field0_0x0.DebugPtr = pUVar6;
  pFVar4 = ::FName::FName(&local_res8,"Icon");
  FVar2 = *pFVar4;
  pUVar5 = Z_Construct_UClass_USphereComponent_NoRegister();
  pUVar6 = (USphereComponent *)
           UObject::CreateDefaultSubobject((UObject *)this,FVar2,pUVar5,pUVar5,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (USphereComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar6);
  }
  (this->IconSphereComponent).field0_0x0.DebugPtr = pUVar6;
  return this;
}

// CrosshairOverTick @ 14bc37ae0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UDS_InteractionComponent::CrosshairOverTick(UDS_InteractionComponent *this,float param_1)

{
  double dVar1;
  double dVar2;
  char cVar3;
  code *pcVar4;
  longlong lVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  bool bVar12;
  int iVar13;
  int iVar14;
  UObject *pUVar15;
  USceneComponent *this_00;
  TVector<double> *pTVar16;
  UWorld *pUVar17;
  AActor *pAVar18;
  UClass *pUVar19;
  ADS_EntityActorBase *pAVar20;
  TWeakObjectPtr<ADS_EntityActorBase,FWeakObjectPtr> *pTVar21;
  FWeakObjectPtr local_res8 [2];
  FWeakObjectPtr local_res18;
  FWeakObjectPtr local_res20;
  FScriptContainerElement local_2b8 [8];
  TArray<TEnumAsByte<EObjectTypeQuery>,TSizedDefaultAllocator<32>_> local_2b0;
  TArray<AActor_*,TSizedDefaultAllocator<32>_> local_2a0;
  FWeakObjectPtr local_290;
  undefined8 local_288;
  UClass *local_280;
  undefined8 local_278;
  undefined8 local_270;
  ADS_EntityActorBase *local_268;
  double local_260;
  double dStack_258;
  double local_250;
  undefined8 local_238;
  undefined4 uStack_230;
  undefined1 uStack_22c;
  undefined2 uStack_22b;
  undefined1 uStack_229;
  FLinearColor_u_0 local_228;
  FLinearColor_u_0 local_218;
  TVector<double>_u_0 local_208;
  TVector<double>_u_0 local_1e8;
  TVector<double> local_1c8;
  FHitResult local_1a8;
  
  bVar12 = FWeakObjectPtr::IsValid(&(this->MouseOveredActor).WeakPtr);
  if (bVar12) {
    pUVar15 = FWeakObjectPtr::Get(&(this->MouseOveredActor).WeakPtr);
    (**(code **)(*(longlong *)&pUVar15[0x11].field_0x18 + 0xd0))();
    local_res8[0].ObjectIndex = 0;
    local_res8[0].ObjectSerialNumber = 0;
    local_288 = 0;
    FWeakObjectPtr::operator=(local_res8,(FObjectPtr)&local_288);
    (this->MouseOveredActor).WeakPtr = local_res8[0];
  }
  pUVar15 = FWeakObjectPtr::Get(&(this->MainCharacter).WeakPtr);
  pcVar4 = *(code **)(*(longlong *)pUVar15 + 0x738);
  local_280 = Z_Construct_UClass_UDS_MainCameraComponent_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_280 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_280);
  }
  this_00 = (USceneComponent *)(*pcVar4)(pUVar15,&local_280);
  if (this_00 == (USceneComponent *)0x0) {
    bVar12 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<9118651366854623438>,true,
                        "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\SpawnActor\\Components\\Interaction\\DS_InteractionComponent.cpp"
                        ,0xce,"mainCamComp");
    if (!bVar12) {
      return;
    }
code_r0x00014bc37c9a:
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((char)this_00[5].AttachChildren.ArrayMax == '\v') {
    bVar12 = FWeakObjectPtr::IsValid(&(this->CrossHairOveredActor).WeakPtr);
    if (!bVar12) {
      return;
    }
    pUVar15 = FWeakObjectPtr::Get(&(this->CrossHairOveredActor).WeakPtr);
    (**(code **)(*(longlong *)&pUVar15[0x11].field_0x18 + 0xc0))();
    local_res18.ObjectIndex = 0;
    local_res18.ObjectSerialNumber = 0;
    local_278 = 0;
    FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)&local_278);
    (this->CrossHairOveredActor).WeakPtr = local_res18;
    return;
  }
  UDS_CheatData::GetInst();
  bVar12 = FWeakObjectPtr::IsValid(&local_290);
  if (!bVar12) {
    bVar12 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<9118651366854623455>,true,
                        "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\SpawnActor\\Components\\Interaction\\DS_InteractionComponent.cpp"
                        ,0xdf,"cheatData.IsValid()");
    if (!bVar12) {
      return;
    }
    goto code_r0x00014bc37c9a;
  }
  dVar6 = DS_CommonDataHelper::CrosshairApplyRange();
  dVar7 = DS_CommonDataHelper::MouseCrosshairEnableRange();
  dVar10 = (this_00->ComponentToWorld).Translation.XY.m128d_f64[0];
  dVar11 = (this_00->ComponentToWorld).Translation.XY.m128d_f64[1];
  dVar1 = (this_00->ComponentToWorld).Translation.ZW.m128d_f64[0];
  local_260 = dVar10;
  dStack_258 = dVar11;
  pTVar16 = USceneComponent::GetForwardVector(this_00,&local_1c8);
  dVar2 = (pTVar16->field0_0x0)._s_0.X;
  local_2b0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  dVar9 = dVar7 * (pTVar16->field0_0x0)._s_0.Z + dVar1;
  dVar8 = dVar7 * (pTVar16->field0_0x0)._s_0.Y + dVar11;
  local_2b0.ArrayNum = 0;
  local_2b0.ArrayMax = 0;
  local_250 = dVar1;
  iVar13 = UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x101,&local_2b0.AllocatorInstance,&local_2b0.ArrayMax);
  local_2b8[0] = (FScriptContainerElement)0x7;
  iVar14 = iVar13 + 1;
  local_2b0.AllocatorInstance.Data[iVar13] = (FScriptContainerElement)0x9;
  local_2b0.ArrayNum = iVar14;
  if (((local_2b0.AllocatorInstance.Data <= local_2b8) &&
      (local_2b8 < local_2b0.AllocatorInstance.Data + local_2b0.ArrayMax)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar12)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar14 = local_2b0.ArrayNum;
  if (local_2b0.ArrayNum == local_2b0.ArrayMax) {
    iVar14 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x101,&local_2b0.AllocatorInstance,&local_2b0.ArrayMax);
  }
  local_2b0.ArrayNum = iVar14 + 1;
  local_2b0.AllocatorInstance.Data[iVar14] = local_2b8[0];
  lVar5 = this->_padding_;
  local_2a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2a0.ArrayNum = 0;
  local_2a0.ArrayMax = 0;
  iVar14 = UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x808,&local_2a0.AllocatorInstance,&local_2a0.ArrayMax);
  local_2a0.ArrayNum = iVar14 + 1;
  *(longlong *)(local_2a0.AllocatorInstance.Data + (longlong)iVar14 * 8) = lVar5;
  pUVar15 = FWeakObjectPtr::Get(&local_290);
  cVar3 = pUVar15[7].field_0x8;
  memset(&local_1a8,0,0x100);
  local_228 = FLinearColor::Green.field0_0x0;
  local_218 = FLinearColor::Red.field0_0x0;
  pUVar17 = (UWorld *)this->_padding_;
  uStack_22b = 0;
  uStack_229 = 0;
  local_238 = 0;
  uStack_230 = 0xffffffff;
  uStack_22c = 0;
  local_1a8.Time = 1.0;
  local_1a8.MyItem = -1;
  local_1a8.HitObjectHandle.ReferenceObject.WeakPtr.ObjectIndex = 0;
  local_1a8.HitObjectHandle.ReferenceObject.WeakPtr.ObjectSerialNumber = 0;
  local_1a8.HitObjectHandle.ManagerInterface.ObjectInstance.WeakPtr.ObjectIndex = 0;
  local_1a8.HitObjectHandle.ManagerInterface.ObjectInstance.WeakPtr.ObjectSerialNumber = 0;
  local_1a8.HitObjectHandle.InstanceIndex = -1;
  local_1a8.HitObjectHandle.ResolutionStatus = Invalid;
  local_1a8.HitObjectHandle._29_3_ = 0;
  local_1a8.HitObjectHandle.ManagerInterface.InterfaceInstance =
       (IActorInstanceManagerInterface *)0x0;
  local_250 = dVar9;
  if (pUVar17 == (UWorld *)0x0) {
    pUVar17 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
  }
  local_208._s_0.Z = local_250;
  local_208._8_4_ = SUB84(dVar8,0);
  local_208._0_8_ = dVar7 * dVar2 + dVar10;
  local_208._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
  local_1e8._s_0.X = dVar10;
  local_1e8._s_0.Y = dVar11;
  local_1e8._s_0.Z = dVar1;
  bVar12 = UKismetSystemLibrary::SphereTraceSingleForObjects
                     ((UObject *)pUVar17,(TVector<double> *)&local_1e8._s_0,
                      (TVector<double> *)&local_208._s_0,(float)dVar6,&local_2b0,false,&local_2a0,
                      (uint)(cVar3 != '\0'),&local_1a8,true,(FLinearColor *)&local_218._s_0,
                      (FLinearColor *)&local_228._s_0,__real_40a00000);
  if (bVar12) {
    pAVar18 = FActorInstanceHandle::FetchActor(&local_1a8.HitObjectHandle);
    if (pAVar18 != (AActor *)0x0) {
      pUVar19 = Z_Construct_UClass_ADS_EntityActorBase_NoRegister();
      iVar14 = (int)pUVar19->_padding_;
      if ((iVar14 <= *(int *)(pAVar18->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pAVar18->_padding_ + 0x30) + (longlong)iVar14 * 8) ==
          &pUVar19->_padding_)) {
        bVar12 = IsInteractionAvailable(this,(FDS_EntityBase *)(pAVar18 + 1));
        goto LAB_14bc38015;
      }
    }
  }
  else {
LAB_14bc38015:
    if (bVar12 != false) {
      pAVar20 = (ADS_EntityActorBase *)FActorInstanceHandle::FetchActor(&local_1a8.HitObjectHandle);
      if (pAVar20 == (ADS_EntityActorBase *)0x0) {
LAB_14bc380bf:
        pAVar20 = (ADS_EntityActorBase *)0x0;
      }
      else {
        pUVar19 = Z_Construct_UClass_ADS_EntityActorBase_NoRegister();
        iVar14 = (int)pUVar19->_padding_;
        if ((*(int *)(pAVar20->_padding_ + 0x38) < iVar14) ||
           ((longlong *)
            *(undefined1 **)(*(longlong *)(pAVar20->_padding_ + 0x30) + (longlong)iVar14 * 8) !=
            &pUVar19->_padding_)) goto LAB_14bc380bf;
      }
      pTVar21 = &this->CrossHairOveredActor;
      bVar12 = TWeakObjectPtr<ADS_EntityActorBase,FWeakObjectPtr>::
               UEOpEquals<ADS_EntityActorBase,bool>(pTVar21,pAVar20);
      if (!bVar12) {
        bVar12 = FWeakObjectPtr::IsValid(&pTVar21->WeakPtr);
        if (bVar12) {
          pUVar15 = FWeakObjectPtr::Get(&pTVar21->WeakPtr);
          (**(code **)(*(longlong *)&pUVar15[0x11].field_0x18 + 0xc0))();
          pUVar15 = FWeakObjectPtr::Get(&pTVar21->WeakPtr);
          FDS_EntityBase::SetIsUserFocused((FDS_EntityBase *)&pUVar15[0x11].field_0x18,false);
        }
        local_268 = pAVar20;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (pAVar20 != (ADS_EntityActorBase *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pAVar20);
        }
        FWeakObjectPtr::operator=(&pTVar21->WeakPtr,(FObjectPtr)&local_268);
        pUVar15 = FWeakObjectPtr::Get(&pTVar21->WeakPtr);
        (**(code **)(*(longlong *)&pUVar15[0x11].field_0x18 + 0xb8))();
        pUVar15 = FWeakObjectPtr::Get(&pTVar21->WeakPtr);
        FDS_EntityBase::SetIsUserFocused((FDS_EntityBase *)&pUVar15[0x11].field_0x18,true);
      }
      goto LAB_14bc3816a;
    }
  }
  pTVar21 = &this->CrossHairOveredActor;
  bVar12 = FWeakObjectPtr::IsValid(&pTVar21->WeakPtr);
  if (bVar12) {
    pUVar15 = FWeakObjectPtr::Get(&pTVar21->WeakPtr);
    (**(code **)(*(longlong *)&pUVar15[0x11].field_0x18 + 0xc0))();
    pUVar15 = FWeakObjectPtr::Get(&pTVar21->WeakPtr);
    FDS_EntityBase::SetIsUserFocused((FDS_EntityBase *)&pUVar15[0x11].field_0x18,false);
    local_res20.ObjectIndex = 0;
    local_res20.ObjectSerialNumber = 0;
    local_270 = 0;
    FWeakObjectPtr::operator=(&local_res20,(FObjectPtr)&local_270);
    pTVar21->WeakPtr = local_res20;
  }
LAB_14bc3816a:
  if (local_2a0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2a0.AllocatorInstance.Data);
  }
  if (local_2b0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2b0.AllocatorInstance.Data);
  }
  return;
}

// FindIconInteractedEntity @ 14bc3de60

TWeakObjectPtr<ADS_EntityActorBase,FWeakObjectPtr> __thiscall
UDS_InteractionComponent::FindIconInteractedEntity(UDS_InteractionComponent *this,ulong64 param_1)

{
  longlong lVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  int in_R8D;
  int in_register_00000084;
  undefined8 local_res8 [4];
  
  if (*(int *)&(this->IconInteractedEntityMap).field_0x8 !=
      *(int *)&(this->IconInteractedEntityMap).field_0x34) {
    puVar4 = *(undefined1 **)&(this->IconInteractedEntityMap).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->IconInteractedEntityMap).field_0x38;
    }
    iVar2 = *(int *)(puVar4 + (ulonglong)
                              (*(int *)&(this->IconInteractedEntityMap).field_0x48 - 1U &
                              in_register_00000084 * 0x17 + in_R8D) * 4);
    if (iVar2 != -1) {
      do {
        lVar1 = *(longlong *)&this->IconInteractedEntityMap + (longlong)iVar2 * 0x18;
        if (*(longlong *)(*(longlong *)&this->IconInteractedEntityMap + (longlong)iVar2 * 0x18) ==
            CONCAT44(in_register_00000084,in_R8D)) {
          puVar3 = (undefined8 *)(lVar1 + 8);
          if (lVar1 == 0) {
            puVar3 = (undefined8 *)0x0;
          }
          if (puVar3 != (undefined8 *)0x0) {
            *(undefined8 *)param_1 = *puVar3;
            return (TWeakObjectPtr<ADS_EntityActorBase,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
          }
          break;
        }
        iVar2 = *(int *)(lVar1 + 0x10);
      } while (iVar2 != -1);
    }
  }
  *(undefined8 *)param_1 = 0;
  local_res8[0] = 0;
  FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)local_res8);
  return (TWeakObjectPtr<ADS_EntityActorBase,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
}

// GetIconInteractedEntity @ 14bc41680

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

FDS_EntityBase * __thiscall
UDS_InteractionComponent::GetIconInteractedEntity(UDS_InteractionComponent *this)

{
  UDS_EntityManager *this_00;
  FDS_EntityBase *pFVar1;
  
  this_00 = UDS_EntityManager::GetInst();
  if (this_00 == (UDS_EntityManager *)0x0) {
    return (FDS_EntityBase *)0x0;
  }
  pFVar1 = UDS_EntityManager::FindEntityBase(this_00,this->IconInteractedEntityID);
  return pFVar1;
}

// GetNearestEntity @ 14bc42430

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

FDS_EntityBase * __thiscall
UDS_InteractionComponent::GetNearestEntity
          (UDS_InteractionComponent *this,
          TMap<unsigned___int64,TWeakObjectPtr<ADS_EntityActorBase,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TWeakObjectPtr<ADS_EntityActorBase,FWeakObjectPtr>,0>_>
          *param_1)

{
  FWeakObjectPtr *this_00;
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  ulong64 uVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  TMap<unsigned___int64,TWeakObjectPtr<ADS_EntityActorBase,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TWeakObjectPtr<ADS_EntityActorBase,FWeakObjectPtr>,0>_>
  *pTVar10;
  bool bVar11;
  char cVar12;
  longlong lVar13;
  FDS_EntityBase *pFVar14;
  UObject *pUVar15;
  UDS_NPCDataSet *pUVar16;
  UDS_CharStateData *pUVar17;
  UDS_EntityManager *this_01;
  FDS_EntityBase *pFVar18;
  FWeakObjectPtr *pFVar19;
  UDS_MovementCore *this_02;
  undefined1 *puVar20;
  int iVar21;
  uint uVar22;
  uint uVar23;
  undefined8 uVar24;
  uint *puVar25;
  TBitArray<FDefaultBitArrayAllocator> *pTVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar32;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 local_res8 [8];
  TMap<unsigned___int64,TWeakObjectPtr<ADS_EntityActorBase,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TWeakObjectPtr<ADS_EntityActorBase,FWeakObjectPtr>,0>_>
  *local_res10;
  EDS_CharDetailState local_res18 [2];
  EDS_CharDetailState local_res20 [2];
  FWeakObjectPtr local_188;
  EDS_CharDetailState local_180 [3];
  FWeakObjectPtr local_174;
  FWeakObjectPtr local_168;
  FWeakObjectPtr local_160;
  FWeakObjectPtr local_158;
  double local_150;
  double dStack_148;
  double local_140;
  TMap<unsigned___int64,TWeakObjectPtr<ADS_EntityActorBase,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TWeakObjectPtr<ADS_EntityActorBase,FWeakObjectPtr>,0>_>
  *local_138;
  int iStack_130;
  uint uStack_12c;
  undefined1 *local_128;
  undefined4 uStack_120;
  int iStack_11c;
  int local_118;
  int iStack_114;
  int iStack_110;
  undefined4 uStack_10c;
  int local_108;
  undefined8 local_100;
  TBitArray<FDefaultBitArrayAllocator> *local_f8;
  TMap<unsigned___int64,TWeakObjectPtr<ADS_EntityActorBase,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TWeakObjectPtr<ADS_EntityActorBase,FWeakObjectPtr>,0>_>
  *local_f0;
  undefined1 auStack_e8 [16];
  uint uStack_d8;
  uint uStack_d4;
  undefined8 local_d0;
  undefined8 uStack_c8;
  TVector<double>_u_0 local_c0;
  double local_a0;
  double dStack_98;
  undefined8 local_90;
  
  lVar13 = *(longlong *)(this->_padding_ + 0x1b8);
  if (lVar13 == 0) {
    local_150 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    dStack_148 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    uVar27 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
    uVar28 = (undefined4)
             ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
  }
  else {
    local_150 = *(double *)(lVar13 + 0x210);
    dStack_148 = *(double *)(lVar13 + 0x218);
    local_90 = *(undefined8 *)(lVar13 + 0x220);
    uVar27 = (undefined4)local_90;
    uVar28 = (undefined4)((ulonglong)local_90 >> 0x20);
    local_a0 = local_150;
    dStack_98 = dStack_148;
  }
  iVar2 = *(int *)&param_1->field_0x28;
  pTVar26 = (TBitArray<FDefaultBitArrayAllocator> *)&param_1->field_0x10;
  uVar29 = (undefined4)__real_416312d000000000;
  uVar32 = (undefined4)((ulonglong)__real_416312d000000000 >> 0x20);
  local_140 = (double)CONCAT44(uVar28,uVar27);
  pFVar14 = (FDS_EntityBase *)0x0;
  iStack_130 = 0;
  uStack_12c = 1;
  local_118 = 0;
  iStack_11c = 0;
  if (iVar2 != 0) {
    puVar25 = *(uint **)&param_1->field_0x20;
    if (*(uint **)&param_1->field_0x20 == (uint *)0x0) {
      puVar25 = (uint *)pTVar26;
    }
    uVar23 = *puVar25;
    while (uVar23 == 0) {
      lVar13 = (longlong)iStack_130;
      local_118 = local_118 + 0x20;
      iStack_130 = iStack_130 + 1;
      iStack_11c = iVar2;
      if ((int)((iVar2 + -1 >> 0x1f & 0x1fU) + iVar2 + -1) >> 5 < iStack_130) goto LAB_14bc4254d;
      uVar23 = puVar25[lVar13 + 1];
    }
    uStack_12c = -uVar23 & uVar23;
    uVar1 = (ulonglong)uStack_12c * 2 + 1;
    lVar13 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_108 = (int)lVar13;
    iStack_11c = local_118 + -1 + local_108;
    if (iVar2 < iStack_11c) {
      iStack_11c = iVar2;
    }
  }
LAB_14bc4254d:
  uVar23 = *(uint *)&param_1->field_0x28;
  iStack_110 = *(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34;
  uVar22 = uVar23 & 0xffffffe0;
  auStack_e8._0_8_ = CONCAT44(uStack_12c,iStack_130);
  uStack_120 = 0xffffffff;
  uStack_d8 = 0xffffffff;
  auStack_e8._8_8_ = pTVar26;
  uStack_d4 = iStack_11c;
  iVar21 = (int)uVar23 >> 5;
  local_d0._4_4_ = iStack_11c;
  local_d0._0_4_ = local_118;
  uStack_c8 = CONCAT44(uStack_10c,iStack_110);
  local_res10 = param_1;
  local_138 = param_1;
  local_128 = (undefined1 *)pTVar26;
  iStack_114 = iStack_11c;
  local_f8 = pTVar26;
  local_f0 = param_1;
  if ((((int)uVar23 < 0) || (iVar2 < (int)uVar23)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar11)) {
    pcVar6 = (code *)swi(3);
    pFVar14 = (FDS_EntityBase *)(*pcVar6)();
    return pFVar14;
  }
  dVar9 = local_140;
  dVar8 = dStack_148;
  dVar7 = local_150;
  uVar3 = *(uint *)&param_1->field_0x28;
  if (uVar23 != uVar3) {
    puVar20 = *(undefined1 **)&param_1->field_0x20;
    if (*(undefined1 **)&param_1->field_0x20 == (undefined1 *)0x0) {
      puVar20 = (undefined1 *)pTVar26;
    }
    uVar23 = -1 << ((byte)uVar23 & 0x1f) & *(uint *)(puVar20 + (longlong)iVar21 * 4);
    while (uVar23 == 0) {
      lVar13 = (longlong)iVar21;
      uVar22 = uVar22 + 0x20;
      iVar21 = iVar21 + 1;
      uVar23 = uVar3;
      if ((int)(((int)(uVar3 - 1) >> 0x1f & 0x1fU) + (uVar3 - 1)) >> 5 < iVar21) goto LAB_14bc42660;
      uVar23 = *(uint *)(puVar20 + lVar13 * 4 + 4);
    }
    uVar1 = (ulonglong)(-uVar23 & uVar23) * 2 + 1;
    lVar13 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    uVar23 = (int)lVar13 + -1 + uVar22;
    if ((int)uVar3 < (int)uVar23) {
      uVar23 = uVar3;
    }
  }
LAB_14bc42660:
  do {
    pTVar10 = local_f0;
    if (*(int *)&local_f0->field_0x8 - *(int *)&local_f0->field_0x34 != (int)uStack_c8) {
      `TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TWeakObjectPtr<ADS_EntityActorBase,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    lVar13 = (longlong)(int)uStack_d4;
    if (((uStack_d4 == uVar23) &&
        ((TBitArray<FDefaultBitArrayAllocator> *)auStack_e8._8_8_ == pTVar26)) &&
       (pTVar10 == local_res10)) {
      return pFVar14;
    }
    lVar4 = *(longlong *)pTVar10;
    this_00 = (FWeakObjectPtr *)(lVar4 + 8 + lVar13 * 0x18);
    bVar11 = FWeakObjectPtr::IsValid(this_00);
    if (bVar11) {
      uVar24 = 0;
      pUVar15 = FWeakObjectPtr::Get(this_00);
      if (*(char *)(pUVar15 + 0x12) == '\x05') {
        TDS_DataSetGetter<UDS_NPCDataSet>::Get((ulong64)&local_168);
        bVar11 = TWeakObjectPtr<UDS_NPCDataSet,FWeakObjectPtr>::UEOpEquals
                           ((TWeakObjectPtr<UDS_NPCDataSet,FWeakObjectPtr> *)&local_168,(void *)0x0)
        ;
        if (!bVar11) {
          pUVar16 = (UDS_NPCDataSet *)FWeakObjectPtr::Get(&local_168);
          bVar11 = UDS_NPCDataSet::IsCamp(pUVar16);
          if (bVar11) {
            pUVar15 = FWeakObjectPtr::Get(&(this->MainCharacter).WeakPtr);
            uVar24 = *(undefined8 *)&pUVar15[0x29].field_0x18;
          }
        }
      }
      pUVar15 = FWeakObjectPtr::Get(this_00);
      if (*(char *)(pUVar15 + 0x12) == '\x05') {
        TDS_DataSetGetter<UDS_NPCDataSet>::Get((ulong64)&local_160);
        bVar11 = TWeakObjectPtr<UDS_NPCDataSet,FWeakObjectPtr>::UEOpEquals
                           ((TWeakObjectPtr<UDS_NPCDataSet,FWeakObjectPtr> *)&local_160,(void *)0x0)
        ;
        if (!bVar11) {
          pUVar16 = (UDS_NPCDataSet *)FWeakObjectPtr::Get(&local_160);
          bVar11 = UDS_NPCDataSet::IsMount(pUVar16);
          if (bVar11) {
            pUVar15 = FWeakObjectPtr::Get(&(this->MainCharacter).WeakPtr);
            uVar24 = *(undefined8 *)&pUVar15[0x29].field_0x18;
          }
        }
      }
      pUVar15 = FWeakObjectPtr::Get(this_00);
      puVar20 = &pUVar15[0x11].field_0x18;
      if (pUVar15 == (UObject *)0x0) {
        puVar20 = (undefined1 *)0x0;
      }
      if (puVar20 == (undefined1 *)0x0) {
LAB_14bc42871:
        pUVar15 = FWeakObjectPtr::Get(this_00);
        cVar12 = (**(code **)(*(longlong *)&pUVar15[0x11].field_0x18 + 0xa8))
                           (&pUVar15[0x11].field_0x18,uVar24);
        if (cVar12 == '\0') goto LAB_14bc42964;
      }
      else {
        UDS_CharStateData::GetData((ulong64)&local_188);
        bVar11 = FWeakObjectPtr::IsValid(&local_188);
        if (!bVar11) goto LAB_14bc42871;
        pUVar17 = (UDS_CharStateData *)FWeakObjectPtr::Get(&local_188);
        local_res18[0] = Taming_Eat;
        bVar11 = UDS_CharStateData::HasCharDetailState(pUVar17,local_res18);
        if (!bVar11) {
          pUVar17 = (UDS_CharStateData *)FWeakObjectPtr::Get(&local_188);
          local_res20[0] = Taming_Mounting;
          bVar11 = UDS_CharStateData::HasCharDetailState(pUVar17,local_res20);
          if (!bVar11) {
            pUVar17 = (UDS_CharStateData *)FWeakObjectPtr::Get(&local_188);
            local_180[0] = Taming_MiniGame;
            bVar11 = UDS_CharStateData::HasCharDetailState(pUVar17,local_180);
            if (!bVar11) {
              pUVar17 = (UDS_CharStateData *)FWeakObjectPtr::Get(&local_188);
              local_180[1] = 0x8a;
              bVar11 = UDS_CharStateData::HasCharDetailState(pUVar17,local_180 + 1);
              if (!bVar11) {
                pUVar17 = (UDS_CharStateData *)FWeakObjectPtr::Get(&local_188);
                local_180[2] = 0x8b;
                bVar11 = UDS_CharStateData::HasCharDetailState(pUVar17,local_180 + 2);
                if (!bVar11) goto LAB_14bc42871;
              }
            }
          }
        }
      }
      uVar5 = *(ulong64 *)(lVar4 + lVar13 * 0x18);
      this_01 = UDS_EntityManager::GetInst();
      if ((this_01 == (UDS_EntityManager *)0x0) ||
         (pFVar18 = UDS_EntityManager::FindEntityBase(this_01,uVar5),
         pFVar18 == (FDS_EntityBase *)0x0)) {
        local_174.ObjectIndex = 0;
        local_174.ObjectSerialNumber = 0;
        local_100 = 0;
        FWeakObjectPtr::operator=(&local_174,(FObjectPtr)&local_100);
        pFVar19 = &local_174;
      }
      else {
        pFVar19 = (FWeakObjectPtr *)(**(code **)(pFVar18->_padding_ + 0x78))(pFVar18);
      }
      local_158 = *pFVar19;
      bVar11 = TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr>::UEOpEquals
                         ((TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr> *)&local_158,(void *)0x0)
      ;
      if (!bVar11) {
        this_02 = (UDS_MovementCore *)FWeakObjectPtr::Get(&local_158);
        UDS_MovementCore::GetActorFootLocation(this_02,(TVector<double> *)&local_c0._s_0);
        auVar30._0_8_ = (local_c0._s_0.X - dVar7) * (local_c0._s_0.X - dVar7);
        auVar30._8_8_ = 0;
        auVar31._8_8_ = 0;
        auVar31._0_8_ =
             (local_c0._s_0.Y - dVar8) * (local_c0._s_0.Y - dVar8) + auVar30._0_8_ +
             (local_c0._s_0.Z - dVar9) * (local_c0._s_0.Z - dVar9);
        auVar31 = sqrtpd(auVar30,auVar31);
        if (auVar31._0_8_ < (double)CONCAT44(uVar32,uVar29)) {
          uVar29 = auVar31._0_4_;
          uVar32 = auVar31._4_4_;
          pUVar15 = FWeakObjectPtr::Get(this_00);
          pFVar14 = (FDS_EntityBase *)&pUVar15[0x11].field_0x18;
          if (pUVar15 == (UObject *)0x0) {
            pFVar14 = (FDS_EntityBase *)0x0;
          }
        }
      }
    }
LAB_14bc42964:
    uStack_d8 = uStack_d8 & ~auStack_e8._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
              ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_e8);
    pTVar26 = local_f8;
  } while( true );
}

// InitializeComponent @ 14bc498d0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UDS_InteractionComponent::InitializeComponent(UDS_InteractionComponent *this)

{
  int iVar1;
  USphereComponent *pUVar2;
  code *pcVar3;
  double dVar4;
  UObject *pUVar5;
  bool bVar6;
  UClass *pUVar7;
  FName *pFVar8;
  UObject *pUVar9;
  UObject *pUVar10;
  UObject *pUVar11;
  UObject *local_res18;
  FName local_res20;
  uint uStack_ac;
  FName local_a8;
  FName local_a0;
  FName local_98;
  FName local_90;
  FName local_88 [2];
  code *local_78;
  longlong lStack_70;
  code *local_68;
  longlong lStack_60;
  code *local_58;
  longlong lStack_50;
  code *local_48;
  longlong lStack_40;
  
  UActorComponent::InitializeComponent((UActorComponent *)this);
  local_res18 = (UObject *)this->_padding_;
  pUVar11 = (UObject *)0x0;
  if (local_res18 != (UObject *)0x0) {
    pUVar7 = Z_Construct_UClass_ADS_MainCharacter_NoRegister();
    iVar1 = (int)pUVar7->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&local_res18->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&local_res18->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar7->_padding_)) goto LAB_14bc4991a;
  }
  local_res18 = pUVar11;
LAB_14bc4991a:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res18 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res18);
  }
  FWeakObjectPtr::operator=(&(this->MainCharacter).WeakPtr,(FObjectPtr)&local_res18);
  bVar6 = FWeakObjectPtr::IsValid(&(this->MainCharacter).WeakPtr);
  if (bVar6) {
    pUVar2 = (this->PrepareSphereComponent).field0_0x0.DebugPtr;
    pcVar3 = *(code **)(pUVar2->_padding_ + 0x788);
    pFVar8 = ::FName::FName(&local_90,"PlayerInteraction");
    (*pcVar3)(pUVar2,*pFVar8,1);
    pUVar2 = (this->PrepareSphereComponent).field0_0x0.DebugPtr;
    (**(code **)(pUVar2->_padding_ + 0x9f8))(pUVar2,0);
    pUVar2 = (this->PrepareSphereComponent).field0_0x0.DebugPtr;
    (**(code **)(pUVar2->_padding_ + 0x9f0))(pUVar2,0x12,1);
    pUVar2 = (this->PrepareSphereComponent).field0_0x0.DebugPtr;
    (**(code **)(pUVar2->_padding_ + 0x9f0))(pUVar2,0xf,1);
    pUVar2 = (this->PrepareSphereComponent).field0_0x0.DebugPtr;
    pUVar9 = (UObject *)strstr("&UDS_InteractionComponent::OnPrepareBeginOverlap","::");
    pUVar10 = pUVar11;
    while (pUVar5 = pUVar9, pUVar5 != (UObject *)0x0) {
      pUVar9 = (UObject *)strstr(&pUVar5->field_0x1,"::");
      pUVar10 = pUVar5;
    }
    if (((pUVar10 == (UObject *)0x0) || (pUVar10->field_0x2 == '0')) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Result && Result[2] != \'0\'",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                           ,0x1da,L"\'%hs\' does not look like a member function"), bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    ::FName::FName(&local_res20,&pUVar10->field_0x2);
    lStack_70 = (ulonglong)uStack_ac << 0x20;
    local_78 = OnPrepareBeginOverlap;
    TSparseDynamicDelegate<FComponentBeginOverlapSignature_MCSignature,UPrimitiveComponent,FComponentBeginOverlapSignatureInfoGetter>
    ::__Internal_AddDynamic<UDS_InteractionComponent>
              ((TSparseDynamicDelegate<FComponentBeginOverlapSignature_MCSignature,UPrimitiveComponent,FComponentBeginOverlapSignatureInfoGetter>
                *)((longlong)&pUVar2->_padding_ + 1),this,(pmf_9aaf74ea *)&local_78,local_res20);
    pUVar2 = (this->PrepareSphereComponent).field0_0x0.DebugPtr;
    pUVar9 = (UObject *)strstr("&UDS_InteractionComponent::OnPrepareEndOverlap","::");
    pUVar10 = pUVar11;
    while (pUVar5 = pUVar9, pUVar5 != (UObject *)0x0) {
      pUVar9 = (UObject *)strstr(&pUVar5->field_0x1,"::");
      pUVar10 = pUVar5;
    }
    if (((pUVar10 == (UObject *)0x0) || (pUVar10->field_0x2 == '0')) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Result && Result[2] != \'0\'",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                           ,0x1da,L"\'%hs\' does not look like a member function"), bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    ::FName::FName(&local_a8,&pUVar10->field_0x2);
    lStack_60 = (ulonglong)uStack_ac << 0x20;
    local_68 = OnPrepareEndOverlap;
    TSparseDynamicDelegate<FComponentEndOverlapSignature_MCSignature,UPrimitiveComponent,FComponentEndOverlapSignatureInfoGetter>
    ::__Internal_AddDynamic<UDS_InteractionComponent>
              ((TSparseDynamicDelegate<FComponentEndOverlapSignature_MCSignature,UPrimitiveComponent,FComponentEndOverlapSignatureInfoGetter>
                *)((longlong)&pUVar2->_padding_ + 2),this,(pmf_6ddb3cc6 *)&local_68,local_a8);
    pUVar2 = (this->PrepareSphereComponent).field0_0x0.DebugPtr;
    dVar4 = DS_CommonDataHelper::InteractionPrepareRange();
    USphereComponent::SetSphereRadius(pUVar2,(float)dVar4,true);
    UPrimitiveComponent::SetGenerateOverlapEvents
              ((UPrimitiveComponent *)(this->PrepareSphereComponent).field0_0x0.DebugPtr,true);
    pUVar2 = (this->PrepareSphereComponent).field0_0x0.DebugPtr;
    (**(code **)(pUVar2->_padding_ + 0x508))
              (pUVar2,this,&FAttachmentTransformRules::KeepRelativeTransform,0);
    pUVar2 = (this->IconSphereComponent).field0_0x0.DebugPtr;
    pcVar3 = *(code **)(pUVar2->_padding_ + 0x788);
    pFVar8 = ::FName::FName(local_88,"PlayerInteraction");
    (*pcVar3)(pUVar2,*pFVar8,1);
    pUVar2 = (this->IconSphereComponent).field0_0x0.DebugPtr;
    (**(code **)(pUVar2->_padding_ + 0x9f8))(pUVar2,0);
    pUVar2 = (this->IconSphereComponent).field0_0x0.DebugPtr;
    (**(code **)(pUVar2->_padding_ + 0x9f0))(pUVar2,0x12,1);
    pUVar2 = (this->IconSphereComponent).field0_0x0.DebugPtr;
    (**(code **)(pUVar2->_padding_ + 0x9f0))(pUVar2,0xf,1);
    pUVar2 = (this->IconSphereComponent).field0_0x0.DebugPtr;
    pUVar9 = (UObject *)strstr("&UDS_InteractionComponent::OnIconBeginOverlap","::");
    pUVar10 = pUVar11;
    while (pUVar5 = pUVar9, pUVar5 != (UObject *)0x0) {
      pUVar9 = (UObject *)strstr(&pUVar5->field_0x1,"::");
      pUVar10 = pUVar5;
    }
    if (((pUVar10 == (UObject *)0x0) || (pUVar10->field_0x2 == '0')) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Result && Result[2] != \'0\'",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                           ,0x1da,L"\'%hs\' does not look like a member function"), bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    ::FName::FName(&local_a0,&pUVar10->field_0x2);
    lStack_50 = (ulonglong)uStack_ac << 0x20;
    local_58 = OnIconBeginOverlap;
    TSparseDynamicDelegate<FComponentBeginOverlapSignature_MCSignature,UPrimitiveComponent,FComponentBeginOverlapSignatureInfoGetter>
    ::__Internal_AddDynamic<UDS_InteractionComponent>
              ((TSparseDynamicDelegate<FComponentBeginOverlapSignature_MCSignature,UPrimitiveComponent,FComponentBeginOverlapSignatureInfoGetter>
                *)((longlong)&pUVar2->_padding_ + 1),this,(pmf_9aaf74ea *)&local_58,local_a0);
    pUVar2 = (this->IconSphereComponent).field0_0x0.DebugPtr;
    pUVar10 = (UObject *)strstr("&UDS_InteractionComponent::OnIconEndOverlap","::");
    while (pUVar9 = pUVar10, pUVar9 != (UObject *)0x0) {
      pUVar10 = (UObject *)strstr(&pUVar9->field_0x1,"::");
      pUVar11 = pUVar9;
    }
    if (((pUVar11 == (UObject *)0x0) || (pUVar11->field_0x2 == '0')) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Result && Result[2] != \'0\'",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                           ,0x1da,L"\'%hs\' does not look like a member function"), bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    ::FName::FName(&local_98,&pUVar11->field_0x2);
    lStack_40 = (ulonglong)uStack_ac << 0x20;
    local_48 = OnIconEndOverlap;
    TSparseDynamicDelegate<FComponentEndOverlapSignature_MCSignature,UPrimitiveComponent,FComponentEndOverlapSignatureInfoGetter>
    ::__Internal_AddDynamic<UDS_InteractionComponent>
              ((TSparseDynamicDelegate<FComponentEndOverlapSignature_MCSignature,UPrimitiveComponent,FComponentEndOverlapSignatureInfoGetter>
                *)((longlong)&pUVar2->_padding_ + 2),this,(pmf_6ddb3cc6 *)&local_48,local_98);
    pUVar2 = (this->IconSphereComponent).field0_0x0.DebugPtr;
    dVar4 = DS_CommonDataHelper::InteractionPromptRange();
    USphereComponent::SetSphereRadius(pUVar2,(float)dVar4,true);
    UPrimitiveComponent::SetGenerateOverlapEvents
              ((UPrimitiveComponent *)(this->IconSphereComponent).field0_0x0.DebugPtr,true);
    pUVar2 = (this->IconSphereComponent).field0_0x0.DebugPtr;
    (**(code **)(pUVar2->_padding_ + 0x508))
              (pUVar2,this,&FAttachmentTransformRules::KeepRelativeTransform,0);
  }
  else {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<9118651366854623279>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\SpawnActor\\Components\\Interaction\\DS_InteractionComponent.cpp"
                       ,0x2f,"MainCharacter.IsValid()");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  return;
}

// IsFakeInteractionAvailable @ 14bc4a820

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

bool __thiscall
UDS_InteractionComponent::IsFakeInteractionAvailable
          (UDS_InteractionComponent *this,FDS_EntityBase *param_1)

{
  bool bVar1;
  UDS_CharStateData *pUVar2;
  EDS_CharDetailState local_res10 [2];
  FWeakObjectPtr local_res18 [2];
  
  if (param_1 != (FDS_EntityBase *)0x0) {
    UDS_CharStateData::GetData((ulong64)local_res18);
    bVar1 = FWeakObjectPtr::IsValid(local_res18);
    if (bVar1) {
      pUVar2 = (UDS_CharStateData *)FWeakObjectPtr::Get(local_res18);
      local_res10[0] = Taming_Eat;
      bVar1 = UDS_CharStateData::HasCharDetailState(pUVar2,local_res10);
      if (!bVar1) {
        pUVar2 = (UDS_CharStateData *)FWeakObjectPtr::Get(local_res18);
        local_res10[0] = Taming_Mounting;
        bVar1 = UDS_CharStateData::HasCharDetailState(pUVar2,local_res10);
        if (!bVar1) {
          pUVar2 = (UDS_CharStateData *)FWeakObjectPtr::Get(local_res18);
          local_res10[0] = Taming_MiniGame;
          bVar1 = UDS_CharStateData::HasCharDetailState(pUVar2,local_res10);
          if (!bVar1) {
            pUVar2 = (UDS_CharStateData *)FWeakObjectPtr::Get(local_res18);
            local_res10[0] = Taming_FailDismounting;
            bVar1 = UDS_CharStateData::HasCharDetailState(pUVar2,local_res10);
            if (!bVar1) {
              pUVar2 = (UDS_CharStateData *)FWeakObjectPtr::Get(local_res18);
              local_res10[0] = Taming_SuccessDismounting;
              bVar1 = UDS_CharStateData::HasCharDetailState(pUVar2,local_res10);
              return bVar1;
            }
          }
        }
      }
      return true;
    }
  }
  return false;
}

// IsInteractionAvailable @ 14bc4adc0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

bool __thiscall
UDS_InteractionComponent::IsInteractionAvailable
          (UDS_InteractionComponent *this,FDS_EntityBase *param_1)

{
  EDS_StuffLocationType EVar1;
  undefined8 uVar2;
  bool bVar3;
  char cVar4;
  UObject *pUVar5;
  UDS_CharStateData *pUVar6;
  FDS_StuffGatherTableRow *pFVar7;
  undefined8 uVar8;
  EDS_CharState local_res10;
  FWeakObjectPtr local_res18;
  FWeakObjectPtr local_res20;
  
  if (param_1 == (FDS_EntityBase *)0x0) {
    return false;
  }
  pUVar5 = FWeakObjectPtr::Get(&(this->MainCharacter).WeakPtr);
  uVar2 = *(undefined8 *)&pUVar5[0x29].field_0x18;
  UDS_CharStateData::GetData((ulong64)&local_res18);
  bVar3 = TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> *)&local_res18,(void *)0x0);
  if (bVar3) {
    return false;
  }
  pUVar6 = (UDS_CharStateData *)FWeakObjectPtr::Get(&local_res18);
  local_res10._0_4_ = AniCut|AutoMove|Shield;
  bVar3 = UDS_CharStateData::HasCharDetailState(pUVar6,(EDS_CharDetailState *)&local_res10);
  if (bVar3) {
    return false;
  }
  pUVar6 = (UDS_CharStateData *)FWeakObjectPtr::Get(&local_res18);
  local_res10._0_4_ = AniCut|AutoMove|Shield|Swim;
  bVar3 = UDS_CharStateData::HasCharDetailState(pUVar6,(EDS_CharDetailState *)&local_res10);
  if (bVar3) {
    return false;
  }
  cVar4 = (**(code **)(param_1->_padding_ + 0xb0))(param_1);
  if (cVar4 == '\x01') {
    return false;
  }
  UDS_CharStateData::GetData((ulong64)&local_res20);
  bVar3 = FWeakObjectPtr::IsValid(&local_res20);
  if (bVar3) {
    pUVar6 = (UDS_CharStateData *)FWeakObjectPtr::Get(&local_res20);
    local_res10._0_4_ = Groggy|AutoMove|Shield|Swim;
    bVar3 = UDS_CharStateData::HasCharDetailState(pUVar6,(EDS_CharDetailState *)&local_res10);
    if (bVar3) goto LAB_14bc4af6f;
    pUVar6 = (UDS_CharStateData *)FWeakObjectPtr::Get(&local_res20);
    local_res10._0_4_ = Groggy|Avoid;
    bVar3 = UDS_CharStateData::HasCharDetailState(pUVar6,(EDS_CharDetailState *)&local_res10);
    if (bVar3) goto LAB_14bc4af6f;
    pUVar6 = (UDS_CharStateData *)FWeakObjectPtr::Get(&local_res20);
    local_res10._0_4_ = Groggy|Avoid|Swim;
    bVar3 = UDS_CharStateData::HasCharDetailState(pUVar6,(EDS_CharDetailState *)&local_res10);
    if (bVar3) goto LAB_14bc4af6f;
    pUVar6 = (UDS_CharStateData *)FWeakObjectPtr::Get(&local_res20);
    local_res10._0_4_ = Groggy|Avoid|Shield;
    bVar3 = UDS_CharStateData::HasCharDetailState(pUVar6,(EDS_CharDetailState *)&local_res10);
    if (bVar3) goto LAB_14bc4af6f;
    pUVar6 = (UDS_CharStateData *)FWeakObjectPtr::Get(&local_res20);
    local_res10._0_4_ = Groggy|Avoid|Shield|Swim;
    bVar3 = UDS_CharStateData::HasCharDetailState(pUVar6,(EDS_CharDetailState *)&local_res10);
    if (bVar3) goto LAB_14bc4af6f;
  }
  bVar3 = FDS_EntityBase::IsCamp(param_1);
  uVar8 = uVar2;
  if ((!bVar3) && (bVar3 = FDS_EntityBase::IsMountNPC(param_1), uVar8 = 0, bVar3)) {
    uVar8 = uVar2;
  }
  cVar4 = (**(code **)(param_1->_padding_ + 0xa8))(param_1,uVar8);
  if (cVar4 == '\0') {
    return false;
  }
LAB_14bc4af6f:
  if (param_1->EntityType != StuffGather) {
    return true;
  }
  local_res10._0_4_ = (undefined4)param_1->TableID;
  pFVar7 = FDS_StuffGatherTableRow::GetByEntityTableID((int *)&local_res10);
  if (pFVar7 != (FDS_StuffGatherTableRow *)0x0) {
    EVar1 = pFVar7->StuffLocationType;
    if (EVar1 == Water) {
      pUVar6 = (UDS_CharStateData *)FWeakObjectPtr::Get(&local_res18);
      local_res10 = CONCAT44(local_res10._4_4_,6);
    }
    else if (EVar1 == Air) {
      pUVar6 = (UDS_CharStateData *)FWeakObjectPtr::Get(&local_res18);
      local_res10 = CONCAT44(local_res10._4_4_,0x1e);
    }
    else {
      if (EVar1 != Land) {
        return true;
      }
      pUVar6 = (UDS_CharStateData *)FWeakObjectPtr::Get(&local_res18);
      local_res10 = CONCAT44(local_res10._4_4_,6);
      bVar3 = UDS_CharStateData::HasCharDetailState(pUVar6,(EDS_CharDetailState *)&local_res10);
      if (bVar3) {
        return false;
      }
      pUVar6 = (UDS_CharStateData *)FWeakObjectPtr::Get(&local_res18);
      local_res10 = AirWalk;
      bVar3 = UDS_CharStateData::HasCharState(pUVar6,&local_res10);
      if (!bVar3) {
        return true;
      }
      pUVar6 = (UDS_CharStateData *)FWeakObjectPtr::Get(&local_res18);
      local_res10 = CONCAT44(local_res10._4_4_,0x1c);
    }
    bVar3 = UDS_CharStateData::HasCharDetailState(pUVar6,(EDS_CharDetailState *)&local_res10);
    if (bVar3) {
      return true;
    }
  }
  return false;
}

// OnActorDestroyed @ 14bc4c250

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UDS_InteractionComponent::OnActorDestroyed(UDS_InteractionComponent *this,AActor *param_1)

{
  code *pcVar1;
  bool bVar2;
  FDS_EntityBase *pFVar3;
  FWeakObjectPtr local_res10;
  AActor *local_res18;
  ulong64 local_res20;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (AActor *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  local_res10.ObjectIndex = 0;
  local_res10.ObjectSerialNumber = 0;
  local_res18 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (AActor *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)&local_res18);
  pFVar3 = FDS_EntityBase::GetEntityBaseFromActor
                     ((TWeakObjectPtr<AActor,FWeakObjectPtr>)local_res10);
  if (pFVar3 == (FDS_EntityBase *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<9118651366854623683>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\SpawnActor\\Components\\Interaction\\DS_InteractionComponent.cpp"
                       ,0x1c3,"entityBase");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    TSparseDynamicDelegate<FActorDestroyedSignature_MCSignature,AActor,FActorDestroyedSignatureInfoGetter>
    ::RemoveAll((TSparseDynamicDelegate<FActorDestroyedSignature_MCSignature,AActor,FActorDestroyedSignatureInfoGetter>
                 *)&param_1->OnDestroyed,(UObject *)this);
    local_res20 = pFVar3->EntityID;
    if (*(int *)&(this->IconInteractedEntityMap).field_0x8 !=
        *(int *)&(this->IconInteractedEntityMap).field_0x34) {
      TSet<TTuple<unsigned___int64,TWeakObjectPtr<ADS_EntityActorBase,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TWeakObjectPtr<ADS_EntityActorBase,FWeakObjectPtr>,0>,FDefaultSetAllocator>
      ::RemoveImpl<unsigned___int64>
                ((TSet<TTuple<unsigned___int64,TWeakObjectPtr<ADS_EntityActorBase,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TWeakObjectPtr<ADS_EntityActorBase,FWeakObjectPtr>,0>,FDefaultSetAllocator>
                  *)&this->IconInteractedEntityMap,
                 (int)(local_res20 >> 0x20) * 0x17 + (int)local_res20,&local_res20);
    }
    if (this->IconInteractedEntityID == pFVar3->EntityID) {
      this->IconInteractedEntityID = 0xffffffffffffffff;
    }
  }
  return;
}

// OnIconBeginOverlap @ 14bc4f3f0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UDS_InteractionComponent::OnIconBeginOverlap
          (UDS_InteractionComponent *this,UPrimitiveComponent *param_1,AActor *param_2,
          UPrimitiveComponent *param_3,int param_4,bool param_5,FHitResult *param_6)

{
  int iVar1;
  code *pcVar2;
  char *pcVar3;
  char *pcVar4;
  bool bVar5;
  FDS_EntityBase *pFVar6;
  char *pcVar7;
  FWeakObjectPtr *this_00;
  UClass *pUVar8;
  FWeakObjectPtr local_78 [2];
  AActor *local_68;
  undefined4 uStack_60;
  uint uStack_5c;
  FName local_58;
  UObject *local_50;
  undefined1 local_48 [8];
  ulong64 *local_40;
  UObject **local_38;
  code *local_28;
  longlong lStack_20;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_2 != (AActor *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_2);
  }
  local_78[0].ObjectIndex = 0;
  local_78[0].ObjectSerialNumber = 0;
  local_68 = param_2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (AActor *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_2);
  }
  FWeakObjectPtr::operator=(local_78,(FObjectPtr)&local_68);
  pFVar6 = FDS_EntityBase::GetEntityBaseFromActor
                     ((TWeakObjectPtr<AActor,FWeakObjectPtr>)local_78[0]);
  if (pFVar6 == (FDS_EntityBase *)0x0) {
    return;
  }
  pcVar7 = strstr("&UDS_InteractionComponent::OnActorDestroyed","::");
  pcVar4 = (char *)0x0;
  while (pcVar3 = pcVar7, pcVar3 != (char *)0x0) {
    pcVar7 = strstr(pcVar3 + 1,"::");
    pcVar4 = pcVar3;
  }
  if (((pcVar4 == (char *)0x0) || (pcVar4[2] == '0')) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Result && Result[2] != \'0\'",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                         ,0x1da,L"\'%hs\' does not look like a member function"), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  ::FName::FName(&local_58,pcVar4 + 2);
  local_68 = (AActor *)OnActorDestroyed;
  uStack_60 = 0;
  lStack_20 = (ulonglong)uStack_5c << 0x20;
  local_28 = OnActorDestroyed;
  TSparseDynamicDelegate<FActorDestroyedSignature_MCSignature,AActor,FActorDestroyedSignatureInfoGetter>
  ::__Internal_AddUniqueDynamic<UDS_InteractionComponent>
            ((TSparseDynamicDelegate<FActorDestroyedSignature_MCSignature,AActor,FActorDestroyedSignatureInfoGetter>
              *)&param_2->OnDestroyed,this,(pmf_6c477500 *)&local_28,local_58);
  this_00 = (FWeakObjectPtr *)(**(code **)(pFVar6->_padding_ + 0x150))(pFVar6,local_48);
  local_50 = FWeakObjectPtr::Get(this_00);
  if (local_50 != (UObject *)0x0) {
    pUVar8 = Z_Construct_UClass_ADS_EntityActorBase_NoRegister();
    iVar1 = (int)pUVar8->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&local_50->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&local_50->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar8->_padding_)) goto LAB_14bc4f58e;
  }
  local_50 = (UObject *)0x0;
LAB_14bc4f58e:
  local_40 = &pFVar6->EntityID;
  local_38 = &local_50;
  TSet<TTuple<unsigned___int64,TWeakObjectPtr<ADS_EntityActorBase,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TWeakObjectPtr<ADS_EntityActorBase,FWeakObjectPtr>,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<unsigned___int64_const_&,ADS_EntityActorBase_*_&&>_>
            ((TSet<TTuple<unsigned___int64,TWeakObjectPtr<ADS_EntityActorBase,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TWeakObjectPtr<ADS_EntityActorBase,FWeakObjectPtr>,0>,FDefaultSetAllocator>
              *)&this->IconInteractedEntityMap,
             (TPairInitializer<unsigned___int64_const_&,ADS_EntityActorBase_*_&&> *)&stack0x00000018
             ,(bool *)&local_40);
  return;
}

// OnIconEndOverlap @ 14bc4f5e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UDS_InteractionComponent::OnIconEndOverlap
          (UDS_InteractionComponent *this,UPrimitiveComponent *param_1,AActor *param_2,
          UPrimitiveComponent *param_3,int param_4)

{
  FDS_EntityBase *pFVar1;
  FWeakObjectPtr local_res18 [2];
  AActor *local_18 [2];
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_2 != (AActor *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_2);
  }
  local_res18[0].ObjectIndex = 0;
  local_res18[0].ObjectSerialNumber = 0;
  local_18[0] = param_2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (AActor *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_2);
  }
  FWeakObjectPtr::operator=(local_res18,(FObjectPtr)local_18);
  pFVar1 = FDS_EntityBase::GetEntityBaseFromActor
                     ((TWeakObjectPtr<AActor,FWeakObjectPtr>)local_res18[0]);
  if (pFVar1 != (FDS_EntityBase *)0x0) {
    TSparseDynamicDelegate<FActorDestroyedSignature_MCSignature,AActor,FActorDestroyedSignatureInfoGetter>
    ::RemoveAll((TSparseDynamicDelegate<FActorDestroyedSignature_MCSignature,AActor,FActorDestroyedSignatureInfoGetter>
                 *)&param_2->OnDestroyed,(UObject *)this);
    local_res18[0] = (FWeakObjectPtr)pFVar1->EntityID;
    if (*(int *)&(this->IconInteractedEntityMap).field_0x8 !=
        *(int *)&(this->IconInteractedEntityMap).field_0x34) {
      TSet<TTuple<unsigned___int64,TWeakObjectPtr<ADS_EntityActorBase,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TWeakObjectPtr<ADS_EntityActorBase,FWeakObjectPtr>,0>,FDefaultSetAllocator>
      ::RemoveImpl<unsigned___int64>
                ((TSet<TTuple<unsigned___int64,TWeakObjectPtr<ADS_EntityActorBase,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TWeakObjectPtr<ADS_EntityActorBase,FWeakObjectPtr>,0>,FDefaultSetAllocator>
                  *)&this->IconInteractedEntityMap,
                 local_res18[0].ObjectSerialNumber * 0x17 + local_res18[0].ObjectIndex,
                 (ulong64 *)local_res18);
    }
  }
  return;
}

// OnPrepareBeginOverlap @ 14bc51a70

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UDS_InteractionComponent::OnPrepareBeginOverlap
          (UDS_InteractionComponent *this,UPrimitiveComponent *param_1,AActor *param_2,
          UPrimitiveComponent *param_3,int param_4,bool param_5,FHitResult *param_6)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  FDS_EntityBase *pFVar4;
  UDS_NPCDataSet *pUVar5;
  UObject *pUVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  FWeakObjectPtr local_res18;
  FWeakObjectPtr local_28;
  UDS_InteractionComponent *local_20;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_2 != (AActor *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_2);
  }
  puVar8 = (undefined1 *)0x0;
  local_res18.ObjectIndex = 0;
  local_res18.ObjectSerialNumber = 0;
  local_28 = (FWeakObjectPtr)param_2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (AActor *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_2);
  }
  FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)&local_28);
  pFVar4 = FDS_EntityBase::GetEntityBaseFromActor
                     ((TWeakObjectPtr<AActor,FWeakObjectPtr>)local_res18);
  if (pFVar4 != (FDS_EntityBase *)0x0) {
    puVar7 = puVar8;
    if (pFVar4->EntityType == NPC) {
      TDS_DataSetGetter<UDS_NPCDataSet>::Get((ulong64)&local_28);
      bVar2 = TWeakObjectPtr<UDS_NPCDataSet,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_NPCDataSet,FWeakObjectPtr> *)&local_28,(void *)0x0);
      if (!bVar2) {
        pUVar5 = (UDS_NPCDataSet *)FWeakObjectPtr::Get(&local_28);
        bVar2 = UDS_NPCDataSet::IsCamp(pUVar5);
        puVar7 = (undefined1 *)0x0;
        if (bVar2) {
          pUVar6 = FWeakObjectPtr::Get(&(this->MainCharacter).WeakPtr);
          puVar7 = *(undefined1 **)&pUVar6[0x29].field_0x18;
        }
      }
    }
    if (pFVar4->EntityType == NPC) {
      TDS_DataSetGetter<UDS_NPCDataSet>::Get((ulong64)&local_28);
      bVar2 = TWeakObjectPtr<UDS_NPCDataSet,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_NPCDataSet,FWeakObjectPtr> *)&local_28,(void *)0x0);
      if (!bVar2) {
        pUVar5 = (UDS_NPCDataSet *)FWeakObjectPtr::Get(&local_28);
        bVar2 = UDS_NPCDataSet::IsMount(pUVar5);
        if (bVar2) {
          pUVar6 = FWeakObjectPtr::Get(&(this->MainCharacter).WeakPtr);
          puVar7 = *(undefined1 **)&pUVar6[0x29].field_0x18;
        }
      }
    }
    cVar3 = (**(code **)(pFVar4->_padding_ + 0xa8))(pFVar4,puVar7);
    if (cVar3 != '\0') {
      pcVar1 = *(code **)(pFVar4->_padding_ + 0xe0);
      pUVar6 = FWeakObjectPtr::Get(&(this->MainCharacter).WeakPtr);
      puVar7 = &pUVar6[0x29].field_0x10;
      if (pUVar6 == (UObject *)0x0) {
        puVar7 = puVar8;
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UDS_InteractionComponent *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      local_28.ObjectIndex = 0;
      local_28.ObjectSerialNumber = 0;
      local_20 = this;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UDS_InteractionComponent *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=(&local_28,(FObjectPtr)&local_20);
      (*pcVar1)(pFVar4,local_28,puVar7,0,0);
    }
  }
  return;
}

// OnPrepareEndOverlap @ 14bc51c50

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UDS_InteractionComponent::OnPrepareEndOverlap
          (UDS_InteractionComponent *this,UPrimitiveComponent *param_1,AActor *param_2,
          UPrimitiveComponent *param_3,int param_4)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  FDS_EntityBase *pFVar4;
  UDS_NPCDataSet *this_00;
  UObject *pUVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  FWeakObjectPtr local_res18;
  FWeakObjectPtr local_28;
  UDS_InteractionComponent *local_20;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_2 != (AActor *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_2);
  }
  puVar7 = (undefined1 *)0x0;
  local_res18.ObjectIndex = 0;
  local_res18.ObjectSerialNumber = 0;
  local_28 = (FWeakObjectPtr)param_2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (AActor *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_2);
  }
  FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)&local_28);
  pFVar4 = FDS_EntityBase::GetEntityBaseFromActor
                     ((TWeakObjectPtr<AActor,FWeakObjectPtr>)local_res18);
  if (pFVar4 != (FDS_EntityBase *)0x0) {
    puVar6 = puVar7;
    if (pFVar4->EntityType == NPC) {
      TDS_DataSetGetter<UDS_NPCDataSet>::Get((ulong64)&local_28);
      bVar2 = TWeakObjectPtr<UDS_NPCDataSet,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_NPCDataSet,FWeakObjectPtr> *)&local_28,(void *)0x0);
      if (!bVar2) {
        this_00 = (UDS_NPCDataSet *)FWeakObjectPtr::Get(&local_28);
        bVar2 = UDS_NPCDataSet::IsCamp(this_00);
        puVar6 = (undefined1 *)0x0;
        if (bVar2) {
          pUVar5 = FWeakObjectPtr::Get(&(this->MainCharacter).WeakPtr);
          puVar6 = *(undefined1 **)&pUVar5[0x29].field_0x18;
        }
      }
    }
    cVar3 = (**(code **)(pFVar4->_padding_ + 0xa8))(pFVar4,puVar6);
    if (cVar3 != '\0') {
      pcVar1 = *(code **)(pFVar4->_padding_ + 0xe8);
      pUVar5 = FWeakObjectPtr::Get(&(this->MainCharacter).WeakPtr);
      puVar6 = &pUVar5[0x29].field_0x10;
      if (pUVar5 == (UObject *)0x0) {
        puVar6 = puVar7;
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UDS_InteractionComponent *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      local_28.ObjectIndex = 0;
      local_28.ObjectSerialNumber = 0;
      local_20 = this;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UDS_InteractionComponent *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=(&local_28,(FObjectPtr)&local_20);
      (*pcVar1)(pFVar4,local_28,puVar6,0,0);
    }
  }
  return;
}

// PickingMouseOveredTick @ 14bc54e90

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UDS_InteractionComponent::PickingMouseOveredTick(UDS_InteractionComponent *this,float param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  UObject *pUVar4;
  TWeakObjectPtr<ADS_PlayerController,FWeakObjectPtr> this_00;
  APlayerController *this_01;
  AActor *pAVar5;
  UClass *pUVar6;
  FWeakObjectPtr FVar7;
  FWeakObjectPtr FVar8;
  TWeakObjectPtr<ADS_EntityActorBase,FWeakObjectPtr> *pTVar9;
  FWeakObjectPtr local_res8;
  undefined8 local_res18 [2];
  TArray<TEnumAsByte<EObjectTypeQuery>,TSizedDefaultAllocator<32>_> local_148 [2];
  undefined8 local_128;
  undefined4 uStack_120;
  undefined1 uStack_11c;
  undefined2 uStack_11b;
  undefined1 uStack_119;
  FHitResult local_118;
  
  bVar1 = FWeakObjectPtr::IsValid(&(this->CrossHairOveredActor).WeakPtr);
  FVar8.ObjectIndex = 0;
  FVar8.ObjectSerialNumber = 0;
  if (bVar1) {
    pUVar4 = FWeakObjectPtr::Get(&(this->CrossHairOveredActor).WeakPtr);
    (**(code **)(*(longlong *)&pUVar4[0x11].field_0x18 + 0xc0))();
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    local_res18[0] = 0;
    FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)local_res18);
    (this->CrossHairOveredActor).WeakPtr = local_res8;
  }
  memset(&local_118,0,0x100);
  uStack_11b = 0;
  local_118.HitObjectHandle.ReferenceObject.WeakPtr.ObjectIndex = 0;
  local_118.HitObjectHandle.ReferenceObject.WeakPtr.ObjectSerialNumber = 0;
  local_118.HitObjectHandle.ManagerInterface.ObjectInstance.WeakPtr.ObjectIndex = 0;
  local_118.HitObjectHandle.ManagerInterface.ObjectInstance.WeakPtr.ObjectSerialNumber = 0;
  uStack_119 = 0;
  local_128 = 0;
  uStack_120 = 0xffffffff;
  uStack_11c = 0;
  local_118.HitObjectHandle.InstanceIndex = -1;
  local_118.HitObjectHandle.ResolutionStatus = Invalid;
  local_118.HitObjectHandle._29_3_ = 0;
  local_118.Time = 1.0;
  local_118.MyItem = -1;
  local_118.HitObjectHandle.ManagerInterface.InterfaceInstance =
       (IActorInstanceManagerInterface *)0x0;
  local_148[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_148[0].ArrayNum = 0;
  local_148[0].ArrayMax = 0;
  iVar2 = UE::Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x101,&local_148[0].AllocatorInstance,&local_148[0].ArrayMax);
  iVar3 = iVar2 + 1;
  local_148[0].AllocatorInstance.Data[iVar2] = (FScriptContainerElement)0x7;
  if (iVar3 == local_148[0].ArrayMax) {
    local_148[0].ArrayNum = iVar3;
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x101,&local_148[0].AllocatorInstance,&local_148[0].ArrayMax);
  }
  local_148[0].ArrayNum = iVar3 + 1;
  local_148[0].AllocatorInstance.Data[iVar3] = (FScriptContainerElement)0x9;
  this_00 = ADS_PlayerController::GetPlayerController();
  this_01 = (APlayerController *)FWeakObjectPtr::Get((FWeakObjectPtr *)this_00.WeakPtr);
  bVar1 = APlayerController::GetHitResultUnderCursorForObjects(this_01,local_148,true,&local_118);
  if (bVar1) {
    pAVar5 = FActorInstanceHandle::FetchActor(&local_118.HitObjectHandle);
    if (pAVar5 != (AActor *)0x0) {
      pUVar6 = Z_Construct_UClass_ADS_EntityActorBase_NoRegister();
      iVar3 = (int)pUVar6->_padding_;
      if ((iVar3 <= *(int *)(pAVar5->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pAVar5->_padding_ + 0x30) + (longlong)iVar3 * 8) ==
          &pUVar6->_padding_)) {
        bVar1 = IsInteractionAvailable(this,(FDS_EntityBase *)(pAVar5 + 1));
        goto LAB_14bc55017;
      }
    }
  }
  else {
LAB_14bc55017:
    if (bVar1 != false) {
      FVar7 = (FWeakObjectPtr)FActorInstanceHandle::FetchActor(&local_118.HitObjectHandle);
      if (FVar7 == (FWeakObjectPtr)0x0) {
LAB_14bc550bb:
        FVar7 = FVar8;
      }
      else {
        pUVar6 = Z_Construct_UClass_ADS_EntityActorBase_NoRegister();
        iVar3 = (int)pUVar6->_padding_;
        if ((*(int *)(*(longlong *)((longlong)FVar7 + 0x10) + 0x38) < iVar3) ||
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)((longlong)FVar7 + 0x10) + 0x30) + (longlong)iVar3 * 8) !=
            &pUVar6->_padding_)) goto LAB_14bc550bb;
      }
      pTVar9 = &this->MouseOveredActor;
      bVar1 = TWeakObjectPtr<ADS_EntityActorBase,FWeakObjectPtr>::
              UEOpEquals<ADS_EntityActorBase,bool>(pTVar9,(ADS_EntityActorBase *)FVar7);
      if (!bVar1) {
        bVar1 = FWeakObjectPtr::IsValid(&pTVar9->WeakPtr);
        if (bVar1) {
          pUVar4 = FWeakObjectPtr::Get(&pTVar9->WeakPtr);
          (**(code **)(*(longlong *)&pUVar4[0x11].field_0x18 + 0xd0))();
          pUVar4 = FWeakObjectPtr::Get(&pTVar9->WeakPtr);
          FDS_EntityBase::SetIsUserFocused((FDS_EntityBase *)&pUVar4[0x11].field_0x18,false);
        }
        local_res8 = FVar7;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar7 != (FWeakObjectPtr)0x0))
        {
          UE::GC::MarkAsReachable((UObject *)FVar7);
        }
        FWeakObjectPtr::operator=(&pTVar9->WeakPtr,(FObjectPtr)&local_res8);
        pUVar4 = FWeakObjectPtr::Get(&pTVar9->WeakPtr);
        (**(code **)(*(longlong *)&pUVar4[0x11].field_0x18 + 200))();
        pUVar4 = FWeakObjectPtr::Get(&pTVar9->WeakPtr);
        FDS_EntityBase::SetIsUserFocused((FDS_EntityBase *)&pUVar4[0x11].field_0x18,true);
      }
      goto LAB_14bc55166;
    }
  }
  pTVar9 = &this->MouseOveredActor;
  bVar1 = FWeakObjectPtr::IsValid(&pTVar9->WeakPtr);
  if (bVar1) {
    pUVar4 = FWeakObjectPtr::Get(&pTVar9->WeakPtr);
    (**(code **)(*(longlong *)&pUVar4[0x11].field_0x18 + 0xd0))();
    pUVar4 = FWeakObjectPtr::Get(&pTVar9->WeakPtr);
    FDS_EntityBase::SetIsUserFocused((FDS_EntityBase *)&pUVar4[0x11].field_0x18,false);
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    local_res18[0] = 0;
    FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)local_res18);
    pTVar9->WeakPtr = local_res8;
  }
LAB_14bc55166:
  if (local_148[0].AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_148[0].AllocatorInstance.Data);
  }
  return;
}

// SetComponentTickEnabled @ 14bc5d9d0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UDS_InteractionComponent::SetComponentTickEnabled(UDS_InteractionComponent *this,bool param_1)

{
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  UDS_EntityManager *this_00;
  FDS_EntityBase *pFVar4;
  undefined1 *puVar5;
  FWeakObjectPtr local_res8;
  UDS_InteractionComponent *local_res18;
  
  UActorComponent::SetComponentTickEnabled((UActorComponent *)this,param_1);
  bVar2 = FWeakObjectPtr::IsValid(&(this->CrossHairOveredActor).WeakPtr);
  if (bVar2) {
    pUVar3 = FWeakObjectPtr::Get(&(this->CrossHairOveredActor).WeakPtr);
    (**(code **)(*(longlong *)&pUVar3[0x11].field_0x18 + 0xc0))();
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    local_res18 = (UDS_InteractionComponent *)0x0;
    FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res18);
    (this->CrossHairOveredActor).WeakPtr = local_res8;
  }
  bVar2 = FWeakObjectPtr::IsValid(&(this->MouseOveredActor).WeakPtr);
  if (bVar2) {
    pUVar3 = FWeakObjectPtr::Get(&(this->MouseOveredActor).WeakPtr);
    (**(code **)(*(longlong *)&pUVar3[0x11].field_0x18 + 0xd0))();
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    local_res18 = (UDS_InteractionComponent *)0x0;
    FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res18);
    (this->MouseOveredActor).WeakPtr = local_res8;
  }
  if (this->IconInteractedEntityID != 0) {
    this_00 = UDS_EntityManager::GetInst();
    if (this_00 != (UDS_EntityManager *)0x0) {
      pFVar4 = UDS_EntityManager::FindEntityBase(this_00,this->IconInteractedEntityID);
      if (pFVar4 != (FDS_EntityBase *)0x0) {
        pcVar1 = *(code **)(pFVar4->_padding_ + 0xe8);
        pUVar3 = FWeakObjectPtr::Get(&(this->MainCharacter).WeakPtr);
        puVar5 = &pUVar3[0x29].field_0x10;
        if (pUVar3 == (UObject *)0x0) {
          puVar5 = (undefined1 *)0x0;
        }
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        local_res8.ObjectIndex = 0;
        local_res8.ObjectSerialNumber = 0;
        local_res18 = this;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res18);
        (*pcVar1)(pFVar4,local_res8,puVar5,1,0);
      }
    }
    this->IconInteractedEntityID = 0;
  }
  return;
}

// TickComponent @ 14bc67830

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
UDS_InteractionComponent::TickComponent
          (UDS_InteractionComponent *this,float param_1,ELevelTick param_2,
          FActorComponentTickFunction *param_3)

{
  bool bVar1;
  UObject *pUVar2;
  FWeakObjectPtr local_28 [4];
  
  UActorComponent::TickComponent((UActorComponent *)this,param_1,param_2,param_3);
  bVar1 = UDS_GameInstance::GetIsAIGymMode();
  if (!bVar1) {
    ADS_PlayerController::GetPlayerController();
    bVar1 = TWeakObjectPtr<ADS_PlayerController,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<ADS_PlayerController,FWeakObjectPtr> *)local_28,(void *)0x0);
    if (!bVar1) {
      pUVar2 = FWeakObjectPtr::Get(local_28);
      if (pUVar2[0x3d].field_0x21 == '\x01') {
        PickingMouseOveredTick(this,param_1);
      }
      else {
        CrosshairOverTick(this,param_1);
      }
      TickIconInteraction(this,param_1);
    }
  }
  return;
}

// TickIconInteraction @ 14bc67e50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UDS_InteractionComponent::TickIconInteraction(UDS_InteractionComponent *this,float param_1)

{
  ulong64 uVar1;
  code *pcVar2;
  bool bVar3;
  FDS_EntityBase *pFVar4;
  UObject *pUVar5;
  UDS_EntityManager *this_00;
  FDS_EntityBase *pFVar6;
  FDS_EntityBase *pFVar7;
  FDS_EntityBase *pFVar8;
  FWeakObjectPtr local_res8;
  UDS_InteractionComponent *local_res18 [2];
  
  pFVar7 = (FDS_EntityBase *)0x0;
  this->LastInteractionViewType = this->NowInteractionViewType;
  this->NowInteractionViewType = 0;
  pFVar4 = GetNearestEntity(this,&this->IconInteractedEntityMap);
  bVar3 = FWeakObjectPtr::IsValid(&(this->MouseOveredActor).WeakPtr);
  if (bVar3) {
    pUVar5 = FWeakObjectPtr::Get(&(this->MouseOveredActor).WeakPtr);
    this->NowInteractionViewType = this->NowInteractionViewType | 2;
    pFVar6 = (FDS_EntityBase *)&pUVar5[0x11].field_0x18;
    if (pUVar5 == (UObject *)0x0) {
      pFVar6 = pFVar7;
    }
  }
  else {
    bVar3 = FWeakObjectPtr::IsValid(&(this->CrossHairOveredActor).WeakPtr);
    pFVar6 = pFVar4;
    if (bVar3) {
      pUVar5 = FWeakObjectPtr::Get(&(this->CrossHairOveredActor).WeakPtr);
      this->NowInteractionViewType = this->NowInteractionViewType | 4;
      pFVar6 = (FDS_EntityBase *)&pUVar5[0x11].field_0x18;
      if (pUVar5 == (UObject *)0x0) {
        pFVar6 = pFVar7;
      }
    }
  }
  if (pFVar4 != (FDS_EntityBase *)0x0) {
    this->NowInteractionViewType = this->NowInteractionViewType | 8;
  }
  if ((pFVar6 != (FDS_EntityBase *)0x0) && (bVar3 = IsInteractionAvailable(this,pFVar6), !bVar3)) {
    pFVar6 = pFVar7;
  }
  this_00 = UDS_EntityManager::GetInst();
  pFVar4 = pFVar7;
  if (this_00 != (UDS_EntityManager *)0x0) {
    pFVar4 = UDS_EntityManager::FindEntityBase(this_00,this->IconInteractedEntityID);
  }
  if ((pFVar4 != pFVar6) || (this->LastInteractionViewType != this->NowInteractionViewType)) {
    if (pFVar4 != (FDS_EntityBase *)0x0) {
      uVar1 = this->NowInteractionViewType;
      pcVar2 = *(code **)(pFVar4->_padding_ + 0xe8);
      pUVar5 = FWeakObjectPtr::Get(&(this->MainCharacter).WeakPtr);
      pFVar8 = (FDS_EntityBase *)&pUVar5[0x29].field_0x10;
      if (pUVar5 == (UObject *)0x0) {
        pFVar8 = pFVar7;
      }
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      local_res8.ObjectIndex = 0;
      local_res8.ObjectSerialNumber = 0;
      local_res18[0] = this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)local_res18);
      (*pcVar2)(pFVar4,local_res8,pFVar8,1,uVar1);
    }
    if (pFVar6 == (FDS_EntityBase *)0x0) {
      this->IconInteractedEntityID = 0;
    }
    else {
      uVar1 = this->NowInteractionViewType;
      pcVar2 = *(code **)(pFVar6->_padding_ + 0xe0);
      pUVar5 = FWeakObjectPtr::Get(&(this->MainCharacter).WeakPtr);
      pFVar4 = (FDS_EntityBase *)&pUVar5[0x29].field_0x10;
      if (pUVar5 == (UObject *)0x0) {
        pFVar4 = pFVar7;
      }
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      local_res8.ObjectIndex = 0;
      local_res8.ObjectSerialNumber = 0;
      local_res18[0] = this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)local_res18);
      (*pcVar2)(pFVar6,local_res8,pFVar4,1,uVar1);
      this->IconInteractedEntityID = pFVar6->EntityID;
    }
  }
  return;
}

