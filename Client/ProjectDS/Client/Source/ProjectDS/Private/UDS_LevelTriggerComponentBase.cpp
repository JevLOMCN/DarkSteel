// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 18

// StaticClass @ 14b4dd760

UClass * __cdecl UDS_LevelTriggerComponentBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_LevelTriggerComponentBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_LevelTriggerComponentBase",
               &Z_Registration_Info_UClass_UDS_LevelTriggerComponentBase.InnerSingleton,
               StaticRegisterNativesUDS_LevelTriggerComponentBase,0x38,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_LevelTriggerComponentBase>,
               InternalVTableHelperCtorCaller<UDS_LevelTriggerComponentBase>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_LevelTriggerComponentBase.InnerSingleton;
}

// UDS_LevelTriggerComponentBase @ 14b4dfbd0

UDS_LevelTriggerComponentBase * __thiscall
UDS_LevelTriggerComponentBase::UDS_LevelTriggerComponentBase
          (UDS_LevelTriggerComponentBase *this,FVTableHelper *param_1)

{
  undefined8 local_res8 [4];
  
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_LevelTriggerComponentBase__6B_;
  (this->CollisionComponent).field0_0x0.DebugPtr = (UShapeComponent *)0x0;
  (this->OwnerActor).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8[0] = 0;
  FWeakObjectPtr::operator=(&(this->OwnerActor).WeakPtr,(FObjectPtr)local_res8);
  return this;
}

// UDS_LevelTriggerComponentBase @ 14b4dfc20

UDS_LevelTriggerComponentBase * __thiscall
UDS_LevelTriggerComponentBase::UDS_LevelTriggerComponentBase
          (UDS_LevelTriggerComponentBase *this,FObjectInitializer *param_1)

{
  undefined8 local_res8 [4];
  
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_LevelTriggerComponentBase__6B_;
  (this->CollisionComponent).field0_0x0.DebugPtr = (UShapeComponent *)0x0;
  (this->OwnerActor).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8[0] = 0;
  FWeakObjectPtr::operator=(&(this->OwnerActor).WeakPtr,(FObjectPtr)local_res8);
  return this;
}

// ~UDS_LevelTriggerComponentBase @ 14b4e0370

void __thiscall
UDS_LevelTriggerComponentBase::~UDS_LevelTriggerComponentBase(UDS_LevelTriggerComponentBase *this)

{
  this->_padding_ = (longlong)&___7UDS_LevelTriggerComponentBase__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14b4e1fd0

UClass * __cdecl UDS_LevelTriggerComponentBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_LevelTriggerComponentBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_LevelTriggerComponentBase",
               &Z_Registration_Info_UClass_UDS_LevelTriggerComponentBase.InnerSingleton,
               StaticRegisterNativesUDS_LevelTriggerComponentBase,0x38,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_LevelTriggerComponentBase>,
               InternalVTableHelperCtorCaller<UDS_LevelTriggerComponentBase>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_LevelTriggerComponentBase.InnerSingleton;
}

// StaticRegisterNativesUDS_LevelTriggerComponentBase @ 14b4e2850

void __cdecl UDS_LevelTriggerComponentBase::StaticRegisterNativesUDS_LevelTriggerComponentBase(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_UDS_LevelTriggerComponentBase_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execOnTriggerBeginOverlap @ 14b4e3c40

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
UDS_LevelTriggerComponentBase::execOnTriggerBeginOverlap
          (UObject *param_1,FFrame *param_2,void *param_3)

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
            ((UDS_LevelTriggerComponentBase *)param_1,local_148[0],local_150,local_158,
             local_res20[0],bVar3,pFVar2);
  return;
}

// execOnTriggerEndOverlap @ 14b4e3eb0

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
UDS_LevelTriggerComponentBase::execOnTriggerEndOverlap
          (UObject *param_1,FFrame *param_2,void *param_3)

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
  OnTriggerEndOverlap((UDS_LevelTriggerComponentBase *)param_1,local_10,local_18,local_res20,
                      local_res10[0]);
  return;
}

// ChangeCollisionComponent @ 14bc307b0

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
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UDS_LevelTriggerComponentBase::ChangeCollisionComponent(UDS_LevelTriggerComponentBase *this)

{
  TWeakObjectPtr<ADS_LevelTriggerActorBase,FWeakObjectPtr> *this_00;
  TObjectPtr<UShapeComponent> *pTVar1;
  UShapeComponent *pUVar2;
  code *pcVar3;
  bool bVar4;
  longlong lVar5;
  UObject *pUVar6;
  UClass *pUVar7;
  UClass *pUVar8;
  UBoxComponent *this_01;
  undefined8 *puVar9;
  char *pcVar10;
  UFunction *pUVar11;
  char *pcVar12;
  char *pcVar13;
  longlong *plVar14;
  undefined1 auStack_338 [32];
  char *local_318;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_308;
  FWeakObjectPtr local_300;
  FName local_2f8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_2f0;
  FWeakObjectPtr local_2e8;
  FName local_2e0;
  undefined8 local_2d8;
  undefined8 local_2d0;
  undefined8 local_2c8;
  FName local_2c0;
  FName local_2b8;
  undefined8 local_2b0;
  FName local_2a8;
  UDS_LevelTriggerComponentBase *local_2a0;
  FName *local_298;
  TSparseDynamicDelegate<FComponentBeginOverlapSignature_MCSignature,UPrimitiveComponent,FComponentBeginOverlapSignatureInfoGetter>
  *local_290;
  FName local_288;
  UDS_LevelTriggerComponentBase *local_280;
  FName *local_278;
  TScriptDelegate<FNotThreadSafeDelegateMode> local_270;
  TScriptDelegate<FNotThreadSafeDelegateMode> local_258;
  undefined1 local_240 [8];
  TVector<double>_u_0 local_238;
  FReadAccessScope local_218;
  FReadAccessScope local_200;
  FReadAccessScope local_1e8;
  FReadAccessScope local_1d0;
  undefined1 local_1b8 [128];
  undefined1 local_138 [128];
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_338;
  lVar5 = (**(code **)(this->_padding_ + 0x180))();
  if (lVar5 == 0) {
    return;
  }
  this_00 = &this->OwnerActor;
  pUVar6 = FWeakObjectPtr::Get(&this_00->WeakPtr);
  pUVar2 = (this->CollisionComponent).field0_0x0.DebugPtr;
  pTVar1 = &this->CollisionComponent;
  if (pUVar6[0x11].field_0x20 == '\0') {
    if (pUVar2 == (UShapeComponent *)0x0) {
      return;
    }
    TSparseDynamicDelegate<FComponentBeginOverlapSignature_MCSignature,UPrimitiveComponent,FComponentBeginOverlapSignatureInfoGetter>
    ::RemoveAll((TSparseDynamicDelegate<FComponentBeginOverlapSignature_MCSignature,UPrimitiveComponent,FComponentBeginOverlapSignatureInfoGetter>
                 *)&pUVar2->field_0x521,(UObject *)this);
    UPrimitiveComponent::SetGenerateOverlapEvents
              ((UPrimitiveComponent *)(pTVar1->field0_0x0).DebugPtr,false);
    (**(code **)(*(longlong *)(pTVar1->field0_0x0).DebugPtr + 0x4a0))
              ((pTVar1->field0_0x0).DebugPtr,0);
    (pTVar1->field0_0x0).DebugPtr = (UShapeComponent *)0x0;
    return;
  }
  if (pUVar2 != (UShapeComponent *)0x0) {
    TSparseDynamicDelegate<FComponentBeginOverlapSignature_MCSignature,UPrimitiveComponent,FComponentBeginOverlapSignatureInfoGetter>
    ::RemoveAll((TSparseDynamicDelegate<FComponentBeginOverlapSignature_MCSignature,UPrimitiveComponent,FComponentBeginOverlapSignatureInfoGetter>
                 *)&pUVar2->field_0x521,(UObject *)this);
    UPrimitiveComponent::SetGenerateOverlapEvents
              ((UPrimitiveComponent *)(pTVar1->field0_0x0).DebugPtr,false);
    (**(code **)(*(longlong *)(pTVar1->field0_0x0).DebugPtr + 0x4a0))
              ((pTVar1->field0_0x0).DebugPtr,0);
    (pTVar1->field0_0x0).DebugPtr = (UShapeComponent *)0x0;
  }
  pUVar6 = FWeakObjectPtr::Get(&this_00->WeakPtr);
  if (pUVar6[0x11].field_0x20 == '\x01') {
    local_2d8 = 0;
    pUVar7 = Z_Construct_UClass_UBoxComponent_NoRegister();
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar8 = Z_Construct_UClass_UBoxComponent_NoRegister();
    CheckIsClassChildOf_Internal(pUVar8,pUVar7);
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_1b8,pUVar7);
    local_1b8._48_8_ = (FObjectInstancingGraph *)0x0;
    local_1b8._56_8_ = (UPackage *)0x0;
    local_1b8._16_4_ = 0;
    local_1b8._20_4_ = 0;
    local_1b8._24_4_ = RF_NoFlags;
    local_1b8._40_8_ = (UObject *)0x0;
    local_1b8[0x20] = false;
    local_1b8._8_8_ = this;
    this_01 = (UBoxComponent *)
              StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_1b8);
    if (local_1b8._64_8_ != 0) {
      plVar14 = (longlong *)(local_1b8 + 0x50);
      if ((longlong *)local_1b8._104_8_ != (longlong *)0x0) {
        plVar14 = (longlong *)local_1b8._104_8_;
      }
      (**(code **)(*plVar14 + 0x10))(plVar14);
    }
    if (this_01 != (UBoxComponent *)0x0) {
      pUVar6 = FWeakObjectPtr::Get(&this_00->WeakPtr);
      local_238._s_0.X = (double)*(undefined8 *)&pUVar6[0x14].field_0x18;
      local_238._s_0.Y = (double)*(undefined8 *)&pUVar6[0x14].field_0x20;
      local_238._s_0.Z = (double)*(undefined8 *)(pUVar6 + 0x15);
      UBoxComponent::SetBoxExtent(this_01,(TVector<double> *)&local_238._s_0,true);
LAB_14bc30b8c:
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this_01);
      }
      (pTVar1->field0_0x0).DebugPtr = (UShapeComponent *)this_01;
    }
  }
  else {
    pUVar6 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    if (pUVar6[0x11].field_0x20 == '\x03') {
      local_2d0 = 0;
      pUVar7 = Z_Construct_UClass_USphereComponent_NoRegister();
      FObjectInitializer::AssertIfInConstructor
                ((UObject *)this,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
      pUVar8 = Z_Construct_UClass_USphereComponent_NoRegister();
      CheckIsClassChildOf_Internal(pUVar8,pUVar7);
      FStaticConstructObjectParameters::FStaticConstructObjectParameters
                ((FStaticConstructObjectParameters *)local_138,pUVar7);
      local_138._48_8_ = (FObjectInstancingGraph *)0x0;
      local_138._56_8_ = (UPackage *)0x0;
      local_138._16_4_ = 0;
      local_138._20_4_ = 0;
      local_138._24_4_ = RF_NoFlags;
      local_138._40_8_ = (UObject *)0x0;
      local_138[0x20] = false;
      local_138._8_8_ = this;
      this_01 = (UBoxComponent *)
                StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_138);
      if (local_138._64_8_ != 0) {
        plVar14 = (longlong *)(local_138 + 0x50);
        if ((longlong *)local_138._104_8_ != (longlong *)0x0) {
          plVar14 = (longlong *)local_138._104_8_;
        }
        (**(code **)(*plVar14 + 0x10))(plVar14);
      }
      if (this_01 != (UBoxComponent *)0x0) {
        pUVar6 = FWeakObjectPtr::Get(&this_00->WeakPtr);
        USphereComponent::SetSphereRadius
                  ((USphereComponent *)this_01,*(float *)&pUVar6[0x15].field_0x8,true);
        goto LAB_14bc30b8c;
      }
    }
    else {
      pUVar6 = FWeakObjectPtr::Get(&this_00->WeakPtr);
      if (pUVar6[0x11].field_0x20 == '\x02') {
        local_2c8 = 0;
        pUVar7 = Z_Construct_UClass_UCapsuleComponent_NoRegister();
        FObjectInitializer::AssertIfInConstructor
                  ((UObject *)this,
                   L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                  );
        pUVar8 = Z_Construct_UClass_UCapsuleComponent_NoRegister();
        CheckIsClassChildOf_Internal(pUVar8,pUVar7);
        FStaticConstructObjectParameters::FStaticConstructObjectParameters
                  ((FStaticConstructObjectParameters *)local_b8,pUVar7);
        local_b8._48_8_ = (FObjectInstancingGraph *)0x0;
        local_b8._56_8_ = (UPackage *)0x0;
        local_b8._16_4_ = 0;
        local_b8._20_4_ = 0;
        local_b8._24_4_ = RF_NoFlags;
        local_b8._40_8_ = (UObject *)0x0;
        local_b8[0x20] = false;
        local_b8._8_8_ = this;
        this_01 = (UBoxComponent *)
                  StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
        if (local_b8._64_8_ != 0) {
          plVar14 = (longlong *)(local_b8 + 0x50);
          if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
            plVar14 = (longlong *)local_b8._104_8_;
          }
          (**(code **)(*plVar14 + 0x10))(plVar14);
        }
        if (this_01 != (UBoxComponent *)0x0) {
          pUVar6 = FWeakObjectPtr::Get(&this_00->WeakPtr);
          UCapsuleComponent::SetCapsuleSize
                    ((UCapsuleComponent *)this_01,*(float *)&pUVar6[0x14].field_0xc,
                     *(float *)&(this_01->BoxExtent).field0_0x0,true);
          pUVar6 = FWeakObjectPtr::Get(&this_00->WeakPtr);
          UCapsuleComponent::SetCapsuleSize
                    ((UCapsuleComponent *)this_01,
                     *(float *)((longlong)&(this_01->BoxExtent).field0_0x0 + 4),
                     *(float *)&pUVar6[0x14].field_0x10,true);
          goto LAB_14bc30b8c;
        }
      }
    }
  }
  pUVar6 = FWeakObjectPtr::Get(&this_00->WeakPtr);
  (((pTVar1->field0_0x0).DebugPtr)->ShapeColor).field0_0x0 = *(FColor_u_0 *)(pUVar6 + 0x14);
  pUVar2 = (pTVar1->field0_0x0).DebugPtr;
  pcVar3 = *(code **)(*(longlong *)pUVar2 + 0x788);
  pUVar6 = FWeakObjectPtr::Get(&this_00->WeakPtr);
  puVar9 = (undefined8 *)(**(code **)(*(longlong *)pUVar6 + 0x780))(pUVar6,local_240);
  (*pcVar3)(pUVar2,*puVar9,1);
  local_290 = (TSparseDynamicDelegate<FComponentBeginOverlapSignature_MCSignature,UPrimitiveComponent,FComponentBeginOverlapSignatureInfoGetter>
               *)&((pTVar1->field0_0x0).DebugPtr)->field_0x521;
  pcVar10 = strstr("&UDS_LevelTriggerComponentBase::OnTriggerBeginOverlap","::");
  pcVar13 = &DAT_00000002;
  if (pcVar10 == (char *)0x0) {
LAB_14bc30c4a:
    pcVar12 = &DAT_00000002;
LAB_14bc30c4d:
    local_318 = "&UDS_LevelTriggerComponentBase::OnTriggerBeginOverlap";
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Result && Result[2] != \'0\'",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                       ,0x1da,L"\'%hs\' does not look like a member function");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    do {
      pcVar12 = pcVar10;
      pcVar10 = strstr(pcVar12 + 1,"::");
    } while (pcVar10 != (char *)0x0);
    if (pcVar12 == (char *)0x0) goto LAB_14bc30c4a;
    pcVar12 = pcVar12 + 2;
    if (*pcVar12 == '0') goto LAB_14bc30c4d;
  }
  ::FName::FName(&local_2a8,pcVar12);
  local_308.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  if (this == (UDS_LevelTriggerComponentBase *)0x0) {
    this = (UDS_LevelTriggerComponentBase *)0x0;
  }
  local_300.ObjectIndex = 0;
  local_300.ObjectSerialNumber = 0;
  local_2f8.ComparisonIndex.Value = 0;
  local_2f8.Number = 0;
  local_2c0 = local_2a8;
  local_2a0 = this;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (this != (UDS_LevelTriggerComponentBase *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  FWeakObjectPtr::operator=(&local_300,(FObjectPtr)&local_2a0);
  local_2f8 = local_2c0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_308,&local_218);
  if ((local_2f8 == (FName)0x0) ||
     (pUVar6 = FWeakObjectPtr::Get(&local_300), pUVar6 == (UObject *)0x0)) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_218);
LAB_14bc30d2c:
    local_298 = &local_2c0;
    `TBaseDynamicDelegate<FNotThreadSafeDelegateMode,void,UPrimitiveComponent_*,AActor_*,UPrimitiveComponent_*,int,bool,FHitResult_const_&>
    ::__Internal_BindDynamic<UDS_LevelTriggerComponentBase>'::__l2::<lambda_1>::operator()
              (&local_298);
  }
  else {
    pUVar11 = UObject::FindFunction(pUVar6,local_2f8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_218);
    if (pUVar11 == (UFunction *)0x0) goto LAB_14bc30d2c;
  }
  local_270._padding_ = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_308,&local_1e8);
  local_270.Object = local_300;
  local_270.FunctionName = local_2f8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_1e8);
  TSparseDynamicDelegate<FComponentBeginOverlapSignature_MCSignature,UPrimitiveComponent,FComponentBeginOverlapSignatureInfoGetter>
  ::Add(local_290,&local_270);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_308.AccessDetector);
  pUVar2 = (pTVar1->field0_0x0).DebugPtr;
  pcVar10 = strstr("&UDS_LevelTriggerComponentBase::OnTriggerEndOverlap","::");
  if (pcVar10 == (char *)0x0) {
LAB_14bc30dca:
    local_318 = "&UDS_LevelTriggerComponentBase::OnTriggerEndOverlap";
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Result && Result[2] != \'0\'",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                       ,0x1da,L"\'%hs\' does not look like a member function");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    do {
      pcVar12 = pcVar10;
      pcVar10 = strstr(pcVar12 + 1,"::");
    } while (pcVar10 != (char *)0x0);
    if ((pcVar12 == (char *)0x0) || (pcVar13 = pcVar12 + 2, pcVar12[2] == '0')) goto LAB_14bc30dca;
  }
  ::FName::FName(&local_288,pcVar13);
  local_2b8 = local_288;
  local_2f0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_2e8.ObjectIndex = 0;
  local_2e8.ObjectSerialNumber = 0;
  local_2e0.ComparisonIndex.Value = 0;
  local_2e0.Number = 0;
  local_280 = this;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (this != (UDS_LevelTriggerComponentBase *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  FWeakObjectPtr::operator=(&local_2e8,(FObjectPtr)&local_280);
  local_2e0 = local_2b8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_2f0,&local_200);
  if ((local_2e0 == (FName)0x0) ||
     (pUVar6 = FWeakObjectPtr::Get(&local_2e8), pUVar6 == (UObject *)0x0)) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_200);
  }
  else {
    pUVar11 = UObject::FindFunction(pUVar6,local_2e0);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_200);
    if (pUVar11 != (UFunction *)0x0) goto LAB_14bc30eb1;
  }
  local_278 = &local_2b8;
  `TBaseDynamicDelegate<FNotThreadSafeDelegateMode,void,UPrimitiveComponent_*,AActor_*,UPrimitiveComponent_*,int>
  ::__Internal_BindDynamic<UDS_LevelTriggerComponentBase>'::__l2::<lambda_1>::operator()(&local_278)
  ;
LAB_14bc30eb1:
  local_258._padding_ = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_2f0,&local_1d0);
  local_258.Object = local_2e8;
  local_258.FunctionName = local_2e0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_1d0);
  TSparseDynamicDelegate<FComponentEndOverlapSignature_MCSignature,UPrimitiveComponent,FComponentEndOverlapSignatureInfoGetter>
  ::Add((TSparseDynamicDelegate<FComponentEndOverlapSignature_MCSignature,UPrimitiveComponent,FComponentEndOverlapSignatureInfoGetter>
         *)&pUVar2->field_0x522,&local_258);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_2f0.AccessDetector);
  UPrimitiveComponent::SetGenerateOverlapEvents
            ((UPrimitiveComponent *)(pTVar1->field0_0x0).DebugPtr,true);
  pUVar2 = (pTVar1->field0_0x0).DebugPtr;
  local_2b0 = 0;
  pcVar3 = *(code **)(*(longlong *)pUVar2 + 0x508);
  pUVar6 = FWeakObjectPtr::Get(&this_00->WeakPtr);
  (*pcVar3)(pUVar2,*(undefined8 *)(pUVar6 + 0xb),&FAttachmentTransformRules::KeepRelativeTransform,0
           );
  UActorComponent::RegisterComponent((UActorComponent *)(pTVar1->field0_0x0).DebugPtr);
  return;
}

// CheckCondition @ 14bc31990

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UDS_LevelTriggerComponentBase::CheckCondition(UDS_LevelTriggerComponentBase *this)

{
  bool bVar1;
  undefined1 uVar2;
  UDS_LogManager *pUVar3;
  UObject *pUVar4;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  bVar1 = FWeakObjectPtr::IsValid(&(this->OwnerActor).WeakPtr);
  if (bVar1) {
    pUVar4 = FWeakObjectPtr::Get(&(this->OwnerActor).WeakPtr);
    uVar2 = (**(code **)(*(longlong *)pUVar4 + 0x770))(pUVar4);
  }
  else {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_LevelTriggerComponentBase::CheckCondition",0x2d,Yes);
      UDS_LogManager::PrintLog(pUVar3,1,Warning,local_138.Ptr,0x6d,L"OwnerActor is nullptr");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
    uVar2 = 0;
  }
  return (bool)uVar2;
}

// CheckOverlap @ 14bc31f50

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

bool __thiscall
UDS_LevelTriggerComponentBase::CheckOverlap
          (UDS_LevelTriggerComponentBase *this,AActor *param_1,UPrimitiveComponent *param_2)

{
  bool bVar1;
  undefined1 uVar2;
  UDS_LogManager *pUVar3;
  UObject *pUVar4;
  undefined1 auStackY_178 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_178;
  bVar1 = FWeakObjectPtr::IsValid(&(this->OwnerActor).WeakPtr);
  if (bVar1) {
    pUVar4 = FWeakObjectPtr::Get(&(this->OwnerActor).WeakPtr);
    uVar2 = (**(code **)(*(longlong *)pUVar4 + 0x778))(pUVar4,param_1,param_2);
  }
  else {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_LevelTriggerComponentBase::CheckOverlap",0x2b,Yes);
      UDS_LogManager::PrintLog(pUVar3,1,Warning,local_148.Ptr,0x77,L"OwnerActor is nullptr");
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
    uVar2 = 0;
  }
  return (bool)uVar2;
}

// Destroy @ 14bc38dd0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UDS_LevelTriggerComponentBase::Destroy(UDS_LevelTriggerComponentBase *this)

{
  UShapeComponent *pUVar1;
  
  pUVar1 = (this->CollisionComponent).field0_0x0.DebugPtr;
  if (pUVar1 != (UShapeComponent *)0x0) {
    TSparseDynamicDelegate<FComponentBeginOverlapSignature_MCSignature,UPrimitiveComponent,FComponentBeginOverlapSignatureInfoGetter>
    ::RemoveAll((TSparseDynamicDelegate<FComponentBeginOverlapSignature_MCSignature,UPrimitiveComponent,FComponentBeginOverlapSignatureInfoGetter>
                 *)&pUVar1->field_0x521,(UObject *)this);
    UPrimitiveComponent::SetGenerateOverlapEvents
              ((UPrimitiveComponent *)(this->CollisionComponent).field0_0x0.DebugPtr,false);
    pUVar1 = (this->CollisionComponent).field0_0x0.DebugPtr;
    (**(code **)(*(longlong *)pUVar1 + 0x4a0))(pUVar1,0);
    (this->CollisionComponent).field0_0x0.DebugPtr = (UShapeComponent *)0x0;
  }
  return;
}

// DestroyTriggerComponent @ 14bc38e40

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
UDS_LevelTriggerComponentBase::DestroyTriggerComponent(UDS_LevelTriggerComponentBase *this)

{
  UShapeComponent *pUVar1;
  
  pUVar1 = (this->CollisionComponent).field0_0x0.DebugPtr;
  if (pUVar1 != (UShapeComponent *)0x0) {
    TSparseDynamicDelegate<FComponentBeginOverlapSignature_MCSignature,UPrimitiveComponent,FComponentBeginOverlapSignatureInfoGetter>
    ::RemoveAll((TSparseDynamicDelegate<FComponentBeginOverlapSignature_MCSignature,UPrimitiveComponent,FComponentBeginOverlapSignatureInfoGetter>
                 *)&pUVar1->field_0x521,(UObject *)this);
    UPrimitiveComponent::SetGenerateOverlapEvents
              ((UPrimitiveComponent *)(this->CollisionComponent).field0_0x0.DebugPtr,false);
    pUVar1 = (this->CollisionComponent).field0_0x0.DebugPtr;
    (**(code **)(*(longlong *)pUVar1 + 0x4a0))(pUVar1,0);
    (this->CollisionComponent).field0_0x0.DebugPtr = (UShapeComponent *)0x0;
  }
  return;
}

// ExecuteTriggerBegineEvent @ 14bc3d800

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_LevelTriggerComponentBase::ExecuteTriggerBegineEvent(UDS_LevelTriggerComponentBase *this)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  UObject *pUVar3;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  bVar1 = FWeakObjectPtr::IsValid(&(this->OwnerActor).WeakPtr);
  if (bVar1) {
    pUVar3 = FWeakObjectPtr::Get(&(this->OwnerActor).WeakPtr);
    (**(code **)(*(longlong *)pUVar3 + 0x760))(pUVar3);
  }
  else {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_LevelTriggerComponentBase::ExecuteTriggerBegineEvent",0x38,Yes);
      UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,0x57,L"OwnerActor is nullptr");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  return;
}

// ExecuteTriggerEndEvent @ 14bc3d910

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_LevelTriggerComponentBase::ExecuteTriggerEndEvent(UDS_LevelTriggerComponentBase *this)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  UObject *pUVar3;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  bVar1 = FWeakObjectPtr::IsValid(&(this->OwnerActor).WeakPtr);
  if (bVar1) {
    pUVar3 = FWeakObjectPtr::Get(&(this->OwnerActor).WeakPtr);
    (**(code **)(*(longlong *)pUVar3 + 0x768))(pUVar3);
  }
  else {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_LevelTriggerComponentBase::ExecuteTriggerEndEvent",0x35,Yes);
      UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,0x62,L"OwnerActor is nullptr");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  return;
}

// InitTriggerComponent @ 14bc486e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_LevelTriggerComponentBase::InitTriggerComponent
          (UDS_LevelTriggerComponentBase *this,
          TWeakObjectPtr<ADS_LevelTriggerActorBase,FWeakObjectPtr> param_1)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  FWeakObjectPtr local_res10 [3];
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  local_res10[0] = param_1.WeakPtr;
  bVar1 = TWeakObjectPtr<ADS_LevelTriggerActorBase,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<ADS_LevelTriggerActorBase,FWeakObjectPtr> *)local_res10,
                     (void *)0x0);
  if (bVar1) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_LevelTriggerComponentBase::InitTriggerComponent",0x33,Yes);
      UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,0x11,L"OwnerActor is nullptr.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    (this->OwnerActor).WeakPtr = local_res10[0];
    ChangeCollisionComponent(this);
  }
  return;
}

// OnTriggerBeginOverlap @ 14bc53290

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
UDS_LevelTriggerComponentBase::OnTriggerBeginOverlap
          (UDS_LevelTriggerComponentBase *this,UPrimitiveComponent *param_1,AActor *param_2,
          UPrimitiveComponent *param_3,int param_4,bool param_5,FHitResult *param_6)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  UObject *pUVar3;
  undefined1 auStackY_178 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_178;
  bVar1 = CheckCondition(this);
  if (bVar1) {
    bVar1 = CheckOverlap(this,param_2,param_1);
    if (bVar1) {
      bVar1 = FWeakObjectPtr::IsValid(&(this->OwnerActor).WeakPtr);
      if (bVar1) {
        pUVar3 = FWeakObjectPtr::Get(&(this->OwnerActor).WeakPtr);
        (**(code **)(*(longlong *)pUVar3 + 0x760))(pUVar3);
      }
      else {
        pUVar2 = UDS_LogManager::GetInst();
        if (pUVar2 != (UDS_LogManager *)0x0) {
          pUVar2 = UDS_LogManager::GetInst();
          local_148._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_148,"UDS_LevelTriggerComponentBase::ExecuteTriggerBegineEvent",0x38,Yes)
          ;
          UDS_LogManager::PrintLog(pUVar2,1,Warning,local_148.Ptr,0x57,L"OwnerActor is nullptr");
          if ((void *)local_148._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_148._padding_);
          }
        }
      }
    }
  }
  return;
}

// OnTriggerEndOverlap @ 14bc536a0

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
UDS_LevelTriggerComponentBase::OnTriggerEndOverlap
          (UDS_LevelTriggerComponentBase *this,UPrimitiveComponent *param_1,AActor *param_2,
          UPrimitiveComponent *param_3,int param_4)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  UObject *pUVar3;
  undefined1 auStackY_178 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_178;
  bVar1 = CheckCondition(this);
  if (bVar1) {
    bVar1 = CheckOverlap(this,param_2,param_1);
    if (bVar1) {
      bVar1 = FWeakObjectPtr::IsValid(&(this->OwnerActor).WeakPtr);
      if (bVar1) {
        pUVar3 = FWeakObjectPtr::Get(&(this->OwnerActor).WeakPtr);
        (**(code **)(*(longlong *)pUVar3 + 0x768))(pUVar3);
      }
      else {
        pUVar2 = UDS_LogManager::GetInst();
        if (pUVar2 != (UDS_LogManager *)0x0) {
          pUVar2 = UDS_LogManager::GetInst();
          local_148._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_148,"UDS_LevelTriggerComponentBase::ExecuteTriggerEndEvent",0x35,Yes);
          UDS_LogManager::PrintLog(pUVar2,1,Warning,local_148.Ptr,0x62,L"OwnerActor is nullptr");
          if ((void *)local_148._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_148._padding_);
          }
        }
      }
    }
  }
  return;
}

