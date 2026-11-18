// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 17

// StaticClass @ 14b5c2780

UClass * __cdecl UDS_TriggerComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_TriggerComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_TriggerComponent",
               &Z_Registration_Info_UClass_UDS_TriggerComponent.InnerSingleton,
               StaticRegisterNativesUDS_TriggerComponent,0x48,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_TriggerComponent>,
               InternalVTableHelperCtorCaller<UDS_TriggerComponent>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_TriggerComponent.InnerSingleton;
}

// UDS_TriggerComponent @ 14b5c77d0

UDS_TriggerComponent * __thiscall
UDS_TriggerComponent::UDS_TriggerComponent(UDS_TriggerComponent *this,FVTableHelper *param_1)

{
  undefined8 local_res8;
  
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_TriggerComponent__6B_;
  (this->SphereComponent).field0_0x0.DebugPtr = (USphereComponent *)0x0;
  (this->OwnerActor).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = 0;
  FWeakObjectPtr::operator=(&(this->OwnerActor).WeakPtr,(FObjectPtr)&local_res8);
  this->TriggerType = None;
  (this->TriggerSphereColor).field0_0x0._s_0 = (FColor_u_0_s_0)FColor::Green.field0_0x0;
  this->bSkipBeginOverlapWhenNotSweep = false;
  this->MainCharacterCount = 0;
  return this;
}

// ~UDS_TriggerComponent @ 14b5c8e00

void __thiscall UDS_TriggerComponent::~UDS_TriggerComponent(UDS_TriggerComponent *this)

{
  this->_padding_ = (longlong)&___7UDS_TriggerComponent__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14b5cc860

UClass * __cdecl UDS_TriggerComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_TriggerComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_TriggerComponent",
               &Z_Registration_Info_UClass_UDS_TriggerComponent.InnerSingleton,
               StaticRegisterNativesUDS_TriggerComponent,0x48,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_TriggerComponent>,
               InternalVTableHelperCtorCaller<UDS_TriggerComponent>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_TriggerComponent.InnerSingleton;
}

// StaticRegisterNativesUDS_TriggerComponent @ 14b5ce0e0

void __cdecl UDS_TriggerComponent::StaticRegisterNativesUDS_TriggerComponent(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_UDS_TriggerComponent_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execOnTriggerBeginOverlap @ 14b5d0bc0

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
UDS_TriggerComponent::execOnTriggerBeginOverlap(UObject *param_1,FFrame *param_2,void *param_3)

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
            ((UDS_TriggerComponent *)param_1,local_148[0],local_150,local_158,local_res20[0],bVar3,
             pFVar2);
  return;
}

// execOnTriggerEndOverlap @ 14b5d0e30

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
UDS_TriggerComponent::execOnTriggerEndOverlap(UObject *param_1,FFrame *param_2,void *param_3)

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
  OnTriggerEndOverlap((UDS_TriggerComponent *)param_1,local_10,local_18,local_res20,local_res10[0]);
  return;
}

// UDS_TriggerComponent @ 14bc2b640

UDS_TriggerComponent * __thiscall
UDS_TriggerComponent::UDS_TriggerComponent(UDS_TriggerComponent *this,FObjectInitializer *param_1)

{
  undefined8 local_res8;
  
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_TriggerComponent__6B_;
  (this->SphereComponent).field0_0x0.DebugPtr = (USphereComponent *)0x0;
  (this->OwnerActor).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = 0;
  FWeakObjectPtr::operator=(&(this->OwnerActor).WeakPtr,(FObjectPtr)&local_res8);
  this->TriggerType = None;
  (this->TriggerSphereColor).field0_0x0._s_0 = (FColor_u_0_s_0)FColor::Green.field0_0x0;
  this->bSkipBeginOverlapWhenNotSweep = false;
  this->MainCharacterCount = 0;
  return this;
}

// CheckOverlap @ 14bc32050

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

bool __thiscall
UDS_TriggerComponent::CheckOverlap
          (UDS_TriggerComponent *this,AActor *param_1,UPrimitiveComponent *param_2)

{
  bool bVar1;
  FDS_EntityBase *pFVar2;
  FWeakObjectPtr local_res10 [2];
  AActor *local_res20;
  FWeakObjectPtr local_18 [2];
  
  if (param_1 != (AActor *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_res10[0].ObjectIndex = 0;
    local_res10[0].ObjectSerialNumber = 0;
    local_res20 = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(local_res10,(FObjectPtr)&local_res20);
    pFVar2 = FDS_EntityBase::GetEntityBaseFromActor
                       ((TWeakObjectPtr<AActor,FWeakObjectPtr>)local_res10[0]);
    if ((pFVar2 != (FDS_EntityBase *)0x0) && (pFVar2->EntityType == MainCharacter)) {
      (**(code **)(pFVar2->_padding_ + 0x160))(pFVar2,local_18);
      bVar1 = FWeakObjectPtr::IsValid(local_18);
      if (bVar1) {
        UPrimitiveComponent::GetCollisionProfileName(param_2);
        return true;
      }
    }
  }
  return false;
}

// Deinitialize @ 14bc388d0

void __thiscall UDS_TriggerComponent::Deinitialize(UDS_TriggerComponent *this)

{
  USphereComponent *pUVar1;
  code *pcVar2;
  FName FVar3;
  bool bVar4;
  
  pUVar1 = (this->SphereComponent).field0_0x0.DebugPtr;
  if (pUVar1 != (USphereComponent *)0x0) {
    TSparseDynamicDelegate<FComponentBeginOverlapSignature_MCSignature,UPrimitiveComponent,FComponentBeginOverlapSignatureInfoGetter>
    ::RemoveAll((TSparseDynamicDelegate<FComponentBeginOverlapSignature_MCSignature,UPrimitiveComponent,FComponentBeginOverlapSignatureInfoGetter>
                 *)((longlong)&pUVar1->_padding_ + 1),(UObject *)this);
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
    (this->SphereComponent).field0_0x0.DebugPtr = (USphereComponent *)0x0;
  }
  (this->OwnerActor).WeakPtr = (FWeakObjectPtr)0x0;
  return;
}

// DrawDebug @ 14bc38ff0

void __thiscall UDS_TriggerComponent::DrawDebug(UDS_TriggerComponent *this)

{
  return;
}

// InitTrigger @ 14bc48180

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UDS_TriggerComponent::InitTrigger
          (UDS_TriggerComponent *this,TWeakObjectPtr<AActor,FWeakObjectPtr> param_1,
          EDS_TriggerType param_2,float param_3,bool param_4)

{
  TWeakObjectPtr<AActor,FWeakObjectPtr> *this_00;
  TObjectPtr<USphereComponent> *pTVar1;
  code *pcVar2;
  bool bVar3;
  FDS_EntityBase *pFVar4;
  UObject *pUVar5;
  UClass *pUVar6;
  USphereComponent *pUVar7;
  FName *pFVar8;
  char *pcVar9;
  UFunction *pUVar10;
  longlong *plVar11;
  char *pcVar12;
  char *pcVar13;
  FWeakObjectPtr local_res10;
  undefined1 auStack_268 [32];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_238;
  FWeakObjectPtr local_230;
  FName local_228;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_220;
  FWeakObjectPtr local_218;
  FName local_210;
  FName local_208;
  FName local_200;
  undefined8 local_1f8;
  FName local_1f0;
  UDS_TriggerComponent *local_1e8;
  FName *local_1e0;
  FName local_1d8;
  UDS_TriggerComponent *local_1d0;
  FName *local_1c8;
  TScriptDelegate<FNotThreadSafeDelegateMode> local_1c0;
  TScriptDelegate<FNotThreadSafeDelegateMode> local_1a8;
  FName local_190;
  FReadAccessScope local_188;
  FReadAccessScope local_170;
  TVector<double>_u_0 local_158;
  FReadAccessScope local_138;
  FReadAccessScope local_120;
  double local_f8;
  undefined1 local_e8 [128];
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStack_268;
  local_res10 = param_1.WeakPtr;
  bVar3 = FWeakObjectPtr::IsValid(&local_res10);
  if (!bVar3) {
    return;
  }
  this_00 = &this->OwnerActor;
  this_00->WeakPtr = local_res10;
  this->bSkipBeginOverlapWhenNotSweep = param_4;
  pFVar4 = FDS_EntityBase::GetEntityBaseFromActor
                     ((TWeakObjectPtr<AActor,FWeakObjectPtr>)local_res10);
  if (pFVar4 == (FDS_EntityBase *)0x0) {
    return;
  }
  pTVar1 = &this->SphereComponent;
  if ((this->SphereComponent).field0_0x0.DebugPtr != (USphereComponent *)0x0) {
    return;
  }
  this->TriggerType = param_2;
  local_f8 = (double)(float)((uint)pFVar4->ScaledCapsuleHalfHeight ^
                            __xmm_80000000800000008000000080000000);
  pUVar5 = FWeakObjectPtr::Get(&this_00->WeakPtr);
  FObjectInitializer::AssertIfInConstructor
            (pUVar5,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar6 = Z_Construct_UClass_USphereComponent_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_e8,pUVar6);
  local_e8._8_8_ = pUVar5;
  pUVar7 = (USphereComponent *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_e8);
  if (local_e8._64_8_ != 0) {
    plVar11 = (longlong *)(local_e8 + 0x50);
    if ((longlong *)local_e8._104_8_ != (longlong *)0x0) {
      plVar11 = (longlong *)local_e8._104_8_;
    }
    (**(code **)(*plVar11 + 0x10))();
  }
  if ((UE::GC::GIsIncrementalReachabilityPending == false) || (pUVar7 == (USphereComponent *)0x0)) {
    (pTVar1->field0_0x0).DebugPtr = pUVar7;
    if (pUVar7 == (USphereComponent *)0x0) {
      return;
    }
  }
  else {
    UE::GC::MarkAsReachable((UObject *)pUVar7);
    (pTVar1->field0_0x0).DebugPtr = pUVar7;
  }
  pcVar2 = *(code **)(pUVar7->_padding_ + 0x788);
  pFVar8 = ::FName::FName(&local_190,"LevelTrigger");
  (*pcVar2)(pUVar7,*pFVar8,1);
  pUVar7 = (pTVar1->field0_0x0).DebugPtr;
  pcVar9 = strstr("&UDS_TriggerComponent::OnTriggerBeginOverlap","::");
  pcVar13 = &DAT_00000002;
  if (pcVar9 == (char *)0x0) {
LAB_14bc4835a:
    pcVar12 = &DAT_00000002;
LAB_14bc4835d:
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
      pcVar12 = pcVar9;
      pcVar9 = strstr(pcVar12 + 1,"::");
    } while (pcVar9 != (char *)0x0);
    if (pcVar12 == (char *)0x0) goto LAB_14bc4835a;
    pcVar12 = pcVar12 + 2;
    if (*pcVar12 == '0') goto LAB_14bc4835d;
  }
  ::FName::FName(&local_1f0,pcVar12);
  local_238.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_230.ObjectIndex = 0;
  local_230.ObjectSerialNumber = 0;
  if (this == (UDS_TriggerComponent *)0x0) {
    this = (UDS_TriggerComponent *)0x0;
  }
  local_228.ComparisonIndex.Value = 0;
  local_228.Number = 0;
  local_208 = local_1f0;
  local_1e8 = this;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_TriggerComponent *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  FWeakObjectPtr::operator=(&local_230,(FObjectPtr)&local_1e8);
  local_228 = local_208;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_238,&local_188);
  if ((local_228 == (FName)0x0) ||
     (pUVar5 = FWeakObjectPtr::Get(&local_230), pUVar5 == (UObject *)0x0)) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_188);
LAB_14bc48441:
    local_1e0 = &local_208;
    `TBaseDynamicDelegate<FNotThreadSafeDelegateMode,void,UPrimitiveComponent_*,AActor_*,UPrimitiveComponent_*,int,bool,FHitResult_const_&>
    ::__Internal_BindDynamic<UDS_TriggerComponent>'::__l2::<lambda_1>::operator()(&local_1e0);
  }
  else {
    pUVar10 = UObject::FindFunction(pUVar5,local_228);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_188);
    if (pUVar10 == (UFunction *)0x0) goto LAB_14bc48441;
  }
  local_1c0._padding_ = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_238,&local_138);
  local_1c0.Object = local_230;
  local_1c0.FunctionName = local_228;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_138);
  TSparseDynamicDelegate<FComponentBeginOverlapSignature_MCSignature,UPrimitiveComponent,FComponentBeginOverlapSignatureInfoGetter>
  ::Add((TSparseDynamicDelegate<FComponentBeginOverlapSignature_MCSignature,UPrimitiveComponent,FComponentBeginOverlapSignatureInfoGetter>
         *)((longlong)&pUVar7->_padding_ + 1),&local_1c0);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_238.AccessDetector);
  pUVar7 = (pTVar1->field0_0x0).DebugPtr;
  pcVar9 = strstr("&UDS_TriggerComponent::OnTriggerEndOverlap","::");
  if (pcVar9 == (char *)0x0) {
LAB_14bc484ea:
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
      pcVar12 = pcVar9;
      pcVar9 = strstr(pcVar12 + 1,"::");
    } while (pcVar9 != (char *)0x0);
    if ((pcVar12 == (char *)0x0) || (pcVar13 = pcVar12 + 2, pcVar12[2] == '0')) goto LAB_14bc484ea;
  }
  ::FName::FName(&local_1d8,pcVar13);
  local_200 = local_1d8;
  local_220.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_218.ObjectIndex = 0;
  local_218.ObjectSerialNumber = 0;
  local_210.ComparisonIndex.Value = 0;
  local_210.Number = 0;
  local_1d0 = this;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_TriggerComponent *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  FWeakObjectPtr::operator=(&local_218,(FObjectPtr)&local_1d0);
  local_210 = local_200;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_220,&local_170);
  if ((local_210 == (FName)0x0) ||
     (pUVar5 = FWeakObjectPtr::Get(&local_218), pUVar5 == (UObject *)0x0)) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_170);
  }
  else {
    pUVar10 = UObject::FindFunction(pUVar5,local_210);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_170);
    if (pUVar10 != (UFunction *)0x0) goto LAB_14bc485d7;
  }
  local_1c8 = &local_200;
  `TBaseDynamicDelegate<FNotThreadSafeDelegateMode,void,UPrimitiveComponent_*,AActor_*,UPrimitiveComponent_*,int>
  ::__Internal_BindDynamic<UDS_TriggerComponent>'::__l2::<lambda_1>::operator()(&local_1c8);
LAB_14bc485d7:
  local_1a8._padding_ = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_220,&local_120);
  local_1a8.Object = local_218;
  local_1a8.FunctionName = local_210;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_120);
  TSparseDynamicDelegate<FComponentEndOverlapSignature_MCSignature,UPrimitiveComponent,FComponentEndOverlapSignatureInfoGetter>
  ::Add((TSparseDynamicDelegate<FComponentEndOverlapSignature_MCSignature,UPrimitiveComponent,FComponentEndOverlapSignatureInfoGetter>
         *)((longlong)&pUVar7->_padding_ + 2),&local_1a8);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_220.AccessDetector);
  USphereComponent::SetSphereRadius((pTVar1->field0_0x0).DebugPtr,param_3,true);
  pUVar7 = (pTVar1->field0_0x0).DebugPtr;
  local_1f8 = 0;
  pUVar5 = FWeakObjectPtr::Get(&this_00->WeakPtr);
  USceneComponent::SetupAttachment
            ((USceneComponent *)pUVar7,*(USceneComponent **)(pUVar5 + 0xb),(FName)0x0);
  UActorComponent::RegisterComponent((UActorComponent *)(pTVar1->field0_0x0).DebugPtr);
  local_158._s_0.Z = local_f8;
  local_158._s_0.X = 0.0;
  local_158._s_0.Y = 0.0;
  USceneComponent::SetRelativeLocation
            ((USceneComponent *)(pTVar1->field0_0x0).DebugPtr,(TVector<double> *)&local_158._s_0,
             false,(FHitResult *)0x0,None);
  UPrimitiveComponent::SetGenerateOverlapEvents
            ((UPrimitiveComponent *)(pTVar1->field0_0x0).DebugPtr,true);
  return;
}

// OnTriggerBeginOverlap @ 14bc533b0

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
UDS_TriggerComponent::OnTriggerBeginOverlap
          (UDS_TriggerComponent *this,UPrimitiveComponent *param_1,AActor *param_2,
          UPrimitiveComponent *param_3,int param_4,bool param_5,FHitResult *param_6)

{
  bool bVar1;
  FDS_EntityBase *pFVar2;
  FWeakObjectPtr local_res18;
  AActor *local_28;
  FWeakObjectPtr local_20 [3];
  
  if (param_2 != (AActor *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending) {
      UE::GC::MarkAsReachable((UObject *)param_2);
    }
    local_res18.ObjectIndex = 0;
    local_res18.ObjectSerialNumber = 0;
    local_28 = param_2;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_2);
    }
    FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)&local_28);
    pFVar2 = FDS_EntityBase::GetEntityBaseFromActor
                       ((TWeakObjectPtr<AActor,FWeakObjectPtr>)local_res18);
    if ((pFVar2 != (FDS_EntityBase *)0x0) && (pFVar2->EntityType == MainCharacter)) {
      (**(code **)(pFVar2->_padding_ + 0x160))(pFVar2,local_20);
      bVar1 = FWeakObjectPtr::IsValid(local_20);
      if (bVar1) {
        UPrimitiveComponent::GetCollisionProfileName(param_3);
        if ((this->MainCharacterCount == 0) &&
           (((param_5 || (this->bSkipBeginOverlapWhenNotSweep != true)) &&
            (pFVar2 = FDS_EntityBase::GetEntityBaseFromActor
                                ((TWeakObjectPtr<AActor,FWeakObjectPtr>)(this->OwnerActor).WeakPtr),
            pFVar2 != (FDS_EntityBase *)0x0)))) {
          (**(code **)(pFVar2->_padding_ + 0x10))(pFVar2,this,param_1,param_2,param_3);
        }
        this->MainCharacterCount = this->MainCharacterCount + 1;
      }
    }
  }
  return;
}

// OnTriggerEndOverlap @ 14bc537c0

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
UDS_TriggerComponent::OnTriggerEndOverlap
          (UDS_TriggerComponent *this,UPrimitiveComponent *param_1,AActor *param_2,
          UPrimitiveComponent *param_3,int param_4)

{
  bool bVar1;
  int iVar2;
  FDS_EntityBase *pFVar3;
  FWeakObjectPtr local_res18;
  AActor *local_28;
  FWeakObjectPtr local_20 [3];
  
  if (param_2 != (AActor *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending) {
      UE::GC::MarkAsReachable((UObject *)param_2);
    }
    local_res18.ObjectIndex = 0;
    local_res18.ObjectSerialNumber = 0;
    local_28 = param_2;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_2);
    }
    FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)&local_28);
    pFVar3 = FDS_EntityBase::GetEntityBaseFromActor
                       ((TWeakObjectPtr<AActor,FWeakObjectPtr>)local_res18);
    if ((pFVar3 != (FDS_EntityBase *)0x0) && (pFVar3->EntityType == MainCharacter)) {
      (**(code **)(pFVar3->_padding_ + 0x160))(pFVar3,local_20);
      bVar1 = FWeakObjectPtr::IsValid(local_20);
      if (bVar1) {
        UPrimitiveComponent::GetCollisionProfileName(param_3);
        iVar2 = this->MainCharacterCount + -1;
        this->MainCharacterCount = iVar2;
        if (iVar2 < 0) {
          this->MainCharacterCount = 0;
        }
        else if (iVar2 != 0) {
          return;
        }
        pFVar3 = FDS_EntityBase::GetEntityBaseFromActor
                           ((TWeakObjectPtr<AActor,FWeakObjectPtr>)(this->OwnerActor).WeakPtr);
        if (pFVar3 != (FDS_EntityBase *)0x0) {
          (**(code **)(pFVar3->_padding_ + 0x18))(pFVar3,this,param_1,param_2,param_3);
        }
      }
    }
  }
  return;
}

// SetGenerateOverlapEvents @ 14bc5ead0

void __thiscall
UDS_TriggerComponent::SetGenerateOverlapEvents(UDS_TriggerComponent *this,bool param_1)

{
  byte bVar1;
  longlong lVar2;
  USphereComponent *pUVar3;
  
  pUVar3 = (this->SphereComponent).field0_0x0.DebugPtr;
  if (pUVar3 == (USphereComponent *)0x0) {
    return;
  }
  bVar1 = *(byte *)((longlong)&pUVar3->_padding_ + 3);
  if ((bool)(bVar1 >> 3 & 1) != param_1) {
    lVar2 = pUVar3->_padding_;
    *(byte *)((longlong)&pUVar3->_padding_ + 3) = bVar1 & 0xf7 | param_1 << 3;
                    /* WARNING: Could not recover jumptable at 0x0001478f2ad9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar2 + 0xa10))();
    return;
  }
  return;
}

// SetRelativeLocation @ 14bc64200

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UDS_TriggerComponent::SetRelativeLocation(UDS_TriggerComponent *this,TVector<double> *param_1)

{
  USphereComponent *this_00;
  TVector<double>_u_0 local_28;
  
  this_00 = (this->SphereComponent).field0_0x0.DebugPtr;
  if (this_00 != (USphereComponent *)0x0) {
    local_28._s_0.X = (param_1->field0_0x0)._s_0.X;
    local_28._s_0.Y = (param_1->field0_0x0)._s_0.Y;
    local_28._s_0.Z = (param_1->field0_0x0)._s_0.Z;
    USceneComponent::SetRelativeLocation
              ((USceneComponent *)this_00,(TVector<double> *)&local_28._s_0,false,(FHitResult *)0x0,
               None);
  }
  return;
}

// SetSphereRadius @ 14bc649d0

void __thiscall UDS_TriggerComponent::SetSphereRadius(UDS_TriggerComponent *this,float param_1)

{
  USphereComponent *this_00;
  
  this_00 = (this->SphereComponent).field0_0x0.DebugPtr;
  if (this_00 != (USphereComponent *)0x0) {
    USphereComponent::SetSphereRadius(this_00,param_1,true);
    return;
  }
  return;
}

