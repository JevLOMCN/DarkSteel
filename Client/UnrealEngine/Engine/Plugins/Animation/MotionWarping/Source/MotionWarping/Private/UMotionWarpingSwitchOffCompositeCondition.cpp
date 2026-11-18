// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MotionWarping
// Functions: 19

// StaticClass @ 14cefee40

UClass * __cdecl UMotionWarpingSwitchOffCompositeCondition::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMotionWarpingSwitchOffCompositeCondition.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MotionWarping",L"MotionWarpingSwitchOffCompositeCondition",
               &Z_Registration_Info_UClass_UMotionWarpingSwitchOffCompositeCondition.InnerSingleton,
               StaticRegisterNativesUMotionWarpingSwitchOffCompositeCondition,0x60,8,CLASS_Intrinsic
               ,CASTCLASS_None,L"Engine",
               InternalConstructor<UMotionWarpingSwitchOffCompositeCondition>,
               InternalVTableHelperCtorCaller<UMotionWarpingSwitchOffCompositeCondition>,local_res8,
               UMotionWarpingSwitchOffCondition::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMotionWarpingSwitchOffCompositeCondition.InnerSingleton;
}

// UMotionWarpingSwitchOffCompositeCondition @ 14cf045b0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UMotionWarpingSwitchOffCompositeCondition * __thiscall
UMotionWarpingSwitchOffCompositeCondition::UMotionWarpingSwitchOffCompositeCondition
          (UMotionWarpingSwitchOffCompositeCondition *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined2 *)&this->_padding_ = 0x101;
  *(undefined1 *)((longlong)&this->_padding_ + 2) = 0;
  this->_padding_ = (longlong)&___7UMotionWarpingSwitchOffCompositeCondition__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->SwitchOffConditionA).field0_0x0.DebugPtr = (UMotionWarpingSwitchOffCondition *)0x0;
  (this->SwitchOffConditionB).field0_0x0.DebugPtr = (UMotionWarpingSwitchOffCondition *)0x0;
  return this;
}

// UMotionWarpingSwitchOffCompositeCondition @ 14cf04600

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UMotionWarpingSwitchOffCompositeCondition * __thiscall
UMotionWarpingSwitchOffCompositeCondition::UMotionWarpingSwitchOffCompositeCondition
          (UMotionWarpingSwitchOffCompositeCondition *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined2 *)&this->_padding_ = 0x101;
  *(undefined1 *)((longlong)&this->_padding_ + 2) = 0;
  this->_padding_ = (longlong)&___7UMotionWarpingSwitchOffCompositeCondition__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->SwitchOffConditionA).field0_0x0.DebugPtr = (UMotionWarpingSwitchOffCondition *)0x0;
  (this->SwitchOffConditionB).field0_0x0.DebugPtr = (UMotionWarpingSwitchOffCondition *)0x0;
  return this;
}

// ~UMotionWarpingSwitchOffCompositeCondition @ 14cf05930

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
UMotionWarpingSwitchOffCompositeCondition::~UMotionWarpingSwitchOffCompositeCondition
          (UMotionWarpingSwitchOffCompositeCondition *this)

{
  this->_padding_ = (longlong)&___7UMotionWarpingSwitchOffCondition__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// CreateSwitchOffCompositeCondition @ 14cf0aed0

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
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMotionWarpingSwitchOffCompositeCondition * __cdecl
UMotionWarpingSwitchOffCompositeCondition::CreateSwitchOffCompositeCondition
          (AActor *param_1,ESwitchOffConditionEffect param_2,
          UMotionWarpingSwitchOffCondition *param_3,ESwitchOffConditionCompositeOp param_4,
          UMotionWarpingSwitchOffCondition *param_5,bool param_6,AActor *param_7)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UMotionWarpingSwitchOffCompositeCondition *pUVar3;
  longlong *plVar4;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_d8;
  pUVar1 = GetTransientPackageAsObject();
  FObjectInitializer::AssertIfInConstructor
            (pUVar1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar2 = StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar2);
  local_b8._8_8_ = pUVar1;
  pUVar3 = (UMotionWarpingSwitchOffCompositeCondition *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
  if (local_b8._64_8_ != 0) {
    plVar4 = (longlong *)(local_b8 + 0x50);
    if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
      plVar4 = (longlong *)local_b8._104_8_;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (AActor *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  pUVar3->_padding_ = (longlong)param_1;
  *(ESwitchOffConditionEffect *)((longlong)&pUVar3->_padding_ + 1) = param_2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (param_3 != (UMotionWarpingSwitchOffCondition *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_3);
  }
  (pUVar3->SwitchOffConditionA).field0_0x0.DebugPtr = param_3;
  pUVar3->LogicOperator = param_4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (param_5 != (UMotionWarpingSwitchOffCondition *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_5);
  }
  (pUVar3->SwitchOffConditionB).field0_0x0.DebugPtr = param_5;
  *(bool *)&pUVar3->_padding_ = param_6;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_7 != (AActor *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_7);
  }
  pUVar3->_padding_ = (longlong)param_7;
  return pUVar3;
}

// ExtraDebugInfo @ 14cf0c920

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FString * __thiscall
UMotionWarpingSwitchOffCompositeCondition::ExtraDebugInfo
          (UMotionWarpingSwitchOffCompositeCondition *this,FString *__return_storage_ptr__)

{
  ESwitchOffConditionCompositeOp EVar1;
  UMotionWarpingSwitchOffCondition *pUVar2;
  FString *this_00;
  char *pcVar3;
  void *local_58 [2];
  FString local_48;
  FString local_38;
  void *local_28 [2];
  
  pUVar2 = (this->SwitchOffConditionB).field0_0x0.DebugPtr;
  (**(code **)(pUVar2->_padding_ + 0x2c0))(pUVar2,local_28);
  EVar1 = this->LogicOperator;
  this_00 = &local_38;
  pcVar3 = "OR";
  if (EVar1 != Or) {
    pcVar3 = "AND";
    this_00 = &local_48;
  }
  ::FString::FString(this_00,pcVar3);
  pUVar2 = (this->SwitchOffConditionA).field0_0x0.DebugPtr;
  (**(code **)(pUVar2->_padding_ + 0x2c0))(pUVar2,local_58);
  ::FString::PrintfImpl(__return_storage_ptr__,L"%s %s %s");
  if (local_58[0] != (void *)0x0) {
    FMemory::Free(local_58[0]);
  }
  if ((((EVar1 != Or) + 1U & 2) != 0) &&
     (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if ((EVar1 == Or) && (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28[0] != (void *)0x0) {
    FMemory::Free(local_28[0]);
  }
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14cf10760

UClass * __cdecl UMotionWarpingSwitchOffCompositeCondition::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMotionWarpingSwitchOffCompositeCondition.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MotionWarping",L"MotionWarpingSwitchOffCompositeCondition",
               &Z_Registration_Info_UClass_UMotionWarpingSwitchOffCompositeCondition.InnerSingleton,
               StaticRegisterNativesUMotionWarpingSwitchOffCompositeCondition,0x60,8,CLASS_Intrinsic
               ,CASTCLASS_None,L"Engine",
               InternalConstructor<UMotionWarpingSwitchOffCompositeCondition>,
               InternalVTableHelperCtorCaller<UMotionWarpingSwitchOffCompositeCondition>,local_res8,
               UMotionWarpingSwitchOffCondition::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMotionWarpingSwitchOffCompositeCondition.InnerSingleton;
}

// IsConditionValid @ 14cf12380

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
UMotionWarpingSwitchOffCompositeCondition::IsConditionValid
          (UMotionWarpingSwitchOffCompositeCondition *this)

{
  UMotionWarpingSwitchOffCondition *pUVar1;
  char cVar2;
  
  pUVar1 = (this->SwitchOffConditionA).field0_0x0.DebugPtr;
  if ((((pUVar1 != (UMotionWarpingSwitchOffCondition *)0x0) &&
       (((uint)pUVar1->_padding_ >> 0x1e & 1) == 0)) &&
      (pUVar1 = (this->SwitchOffConditionB).field0_0x0.DebugPtr,
      pUVar1 != (UMotionWarpingSwitchOffCondition *)0x0)) &&
     (((uint)pUVar1->_padding_ >> 0x1e & 1) == 0)) {
    cVar2 = (**(code **)(((this->SwitchOffConditionA).field0_0x0.DebugPtr)->_padding_ + 0x2c8))();
    if (cVar2 != '\0') {
      cVar2 = (**(code **)(((this->SwitchOffConditionB).field0_0x0.DebugPtr)->_padding_ + 0x2c8))();
      if (cVar2 != '\0') {
        return true;
      }
    }
  }
  return false;
}

// OnCheck @ 14cf12cd0

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
UMotionWarpingSwitchOffCompositeCondition::OnCheck(UMotionWarpingSwitchOffCompositeCondition *this)

{
  UMotionWarpingSwitchOffCondition *pUVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  UMotionWarpingSwitchOffCompositeCondition *local_res8 [4];
  
  pUVar1 = (this->SwitchOffConditionA).field0_0x0.DebugPtr;
  if (((pUVar1 == (UMotionWarpingSwitchOffCondition *)0x0) ||
      (((uint)pUVar1->_padding_ >> 0x1e & 1) != 0)) &&
     (local_res8[0] = this,
     bVar3 = `UMotionWarpingSwitchOffCompositeCondition::OnCheck'::__l3::<lambda_1>::operator()
                       (local_res8), !bVar3)) {
    return false;
  }
  pUVar1 = (this->SwitchOffConditionB).field0_0x0.DebugPtr;
  if (((pUVar1 == (UMotionWarpingSwitchOffCondition *)0x0) ||
      (((uint)pUVar1->_padding_ >> 0x1e & 1) != 0)) &&
     (local_res8[0] = this,
     bVar3 = `UMotionWarpingSwitchOffCompositeCondition::OnCheck'::__l3::<lambda_2>::operator()
                       (local_res8), !bVar3)) {
    return false;
  }
  pcVar2 = *(code **)(((this->SwitchOffConditionA).field0_0x0.DebugPtr)->_padding_ + 0x2b8);
  if (this->LogicOperator == Or) {
    cVar4 = (*pcVar2)();
    if ((cVar4 == '\0') &&
       (cVar4 = (**(code **)(((this->SwitchOffConditionB).field0_0x0.DebugPtr)->_padding_ + 0x2b8))
                          (), cVar4 == '\0')) {
      return false;
    }
    return true;
  }
  cVar4 = (*pcVar2)();
  if ((cVar4 != '\0') &&
     (cVar4 = (**(code **)(((this->SwitchOffConditionB).field0_0x0.DebugPtr)->_padding_ + 0x2b8))(),
     cVar4 != '\0')) {
    return true;
  }
  return false;
}

// SetMotionWarpingTarget @ 14cf1ba60

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
UMotionWarpingSwitchOffCompositeCondition::SetMotionWarpingTarget
          (UMotionWarpingSwitchOffCompositeCondition *this,FMotionWarpingTarget *param_1)

{
  UMotionWarpingSwitchOffCondition *pUVar1;
  
  this->_padding_ = (longlong)param_1;
  (**(code **)(((this->SwitchOffConditionA).field0_0x0.DebugPtr)->_padding_ + 0x2e0))();
  pUVar1 = (this->SwitchOffConditionB).field0_0x0.DebugPtr;
                    /* WARNING: Could not recover jumptable at 0x00014cf1ba95. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(pUVar1->_padding_ + 0x2e0))(pUVar1,param_1);
  return;
}

// SetOwnerActor @ 14cf1bac0

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
UMotionWarpingSwitchOffCompositeCondition::SetOwnerActor
          (UMotionWarpingSwitchOffCompositeCondition *this,AActor *param_1)

{
  UMotionWarpingSwitchOffCondition *pUVar1;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (AActor *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  this->_padding_ = (longlong)param_1;
  pUVar1 = (this->SwitchOffConditionA).field0_0x0.DebugPtr;
  (**(code **)(pUVar1->_padding_ + 0x2d0))(pUVar1,param_1);
  pUVar1 = (this->SwitchOffConditionB).field0_0x0.DebugPtr;
                    /* WARNING: Could not recover jumptable at 0x00014cf1bb0e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(pUVar1->_padding_ + 0x2d0))(pUVar1,param_1);
  return;
}

// SetTargetActor @ 14cf1bba0

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
UMotionWarpingSwitchOffCompositeCondition::SetTargetActor
          (UMotionWarpingSwitchOffCompositeCondition *this,AActor *param_1)

{
  UMotionWarpingSwitchOffCondition *pUVar1;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (AActor *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  this->_padding_ = (longlong)param_1;
  pUVar1 = (this->SwitchOffConditionA).field0_0x0.DebugPtr;
  (**(code **)(pUVar1->_padding_ + 0x2d8))(pUVar1,param_1);
  pUVar1 = (this->SwitchOffConditionB).field0_0x0.DebugPtr;
                    /* WARNING: Could not recover jumptable at 0x00014cf1bbee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(pUVar1->_padding_ + 0x2d8))(pUVar1,param_1);
  return;
}

// SetWarpTargetForDestination @ 14cf1bc50

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
UMotionWarpingSwitchOffCompositeCondition::SetWarpTargetForDestination
          (UMotionWarpingSwitchOffCompositeCondition *this,FMotionWarpingTarget *param_1)

{
  UMotionWarpingSwitchOffCondition *pUVar1;
  bool bVar2;
  UMotionWarpingSwitchOffCompositeCondition *local_res8;
  
  pUVar1 = (this->SwitchOffConditionA).field0_0x0.DebugPtr;
  this->_padding_ = (longlong)param_1;
  if (((pUVar1 == (UMotionWarpingSwitchOffCondition *)0x0) ||
      (((uint)pUVar1->_padding_ >> 0x1e & 1) != 0)) &&
     (local_res8 = this,
     bVar2 = `UMotionWarpingSwitchOffCompositeCondition::SetWarpTargetForDestination'::__l3::
             <lambda_1>::operator()(&local_res8), !bVar2)) {
    return;
  }
  pUVar1 = (this->SwitchOffConditionB).field0_0x0.DebugPtr;
  if (((pUVar1 == (UMotionWarpingSwitchOffCondition *)0x0) ||
      (((uint)pUVar1->_padding_ >> 0x1e & 1) != 0)) &&
     (local_res8 = this,
     bVar2 = `UMotionWarpingSwitchOffCompositeCondition::SetWarpTargetForDestination'::__l3::
             <lambda_2>::operator()(&local_res8), !bVar2)) {
    return;
  }
  pUVar1 = (this->SwitchOffConditionA).field0_0x0.DebugPtr;
  (**(code **)(pUVar1->_padding_ + 0x2b0))(pUVar1,param_1);
  pUVar1 = (this->SwitchOffConditionB).field0_0x0.DebugPtr;
  (**(code **)(pUVar1->_padding_ + 0x2b0))(pUVar1,param_1);
  return;
}

// StaticRegisterNativesUMotionWarpingSwitchOffCompositeCondition @ 14cf1be70

void __cdecl
UMotionWarpingSwitchOffCompositeCondition::
StaticRegisterNativesUMotionWarpingSwitchOffCompositeCondition(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UMotionWarpingSwitchOffCompositeCondition_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execCreateSwitchOffCompositeCondition @ 14cf221b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __cdecl
UMotionWarpingSwitchOffCompositeCondition::execCreateSwitchOffCompositeCondition
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UObject *pUVar2;
  UObject *pUVar3;
  UObject *pUVar4;
  UObject *pUVar5;
  UObject *pUVar6;
  UClass *pUVar7;
  longlong *plVar8;
  uchar *puVar9;
  uchar *puVar10;
  uchar *puVar11;
  bool bVar12;
  undefined1 auStack_118 [32];
  undefined1 local_f8;
  undefined1 local_f7;
  undefined1 local_f6;
  undefined1 local_f5;
  int local_f4;
  uchar local_f0 [8];
  undefined8 local_e8;
  uchar local_e0 [8];
  UObject *local_d8 [2];
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_118;
  local_f0[0] = '\0';
  local_f0[1] = '\0';
  local_f0[2] = '\0';
  local_f0[3] = '\0';
  local_f0[4] = '\0';
  local_f0[5] = '\0';
  local_f0[6] = '\0';
  local_f0[7] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_f0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_f0);
  }
  local_f7 = 0;
  puVar11 = local_f0;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar11 = param_2->MostRecentPropertyAddress;
  }
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_f7,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_f7);
  }
  local_e8 = 0;
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
  local_f8 = 0;
  puVar10 = (uchar *)&local_e8;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar10 = param_2->MostRecentPropertyAddress;
  }
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_f8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_f8);
  }
  local_e0[0] = '\0';
  local_e0[1] = '\0';
  local_e0[2] = '\0';
  local_e0[3] = '\0';
  local_e0[4] = '\0';
  local_e0[5] = '\0';
  local_e0[6] = '\0';
  local_e0[7] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_e0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_e0);
  }
  local_f4 = 0;
  puVar9 = local_e0;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar9 = param_2->MostRecentPropertyAddress;
  }
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_f4,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_f4);
  }
  bVar12 = local_f4 != 0;
  local_d8[0] = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_d8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_d8);
  }
  pUVar5 = local_d8[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar2 = *(UObject **)puVar9;
  pUVar3 = *(UObject **)puVar10;
  pUVar4 = *(UObject **)puVar11;
  local_f5 = local_f8;
  local_f6 = local_f7;
  pUVar6 = GetTransientPackageAsObject();
  FObjectInitializer::AssertIfInConstructor
            (pUVar6,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar7 = StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_c8,pUVar7);
  local_c8._8_8_ = pUVar6;
  pUVar6 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
  if (local_c8._64_8_ != 0) {
    plVar8 = (longlong *)(local_c8 + 0x50);
    if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
      plVar8 = (longlong *)local_c8._104_8_;
    }
    (**(code **)(*plVar8 + 0x10))();
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  *(UObject **)&pUVar6[1].field_0x8 = pUVar4;
  pUVar6[1].field_0x1 = local_f6;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  *(UObject **)&pUVar6[1].field_0x20 = pUVar3;
  *(undefined1 *)(pUVar6 + 2) = local_f5;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar2);
  }
  *(UObject **)&pUVar6[2].field_0x8 = pUVar2;
  *(bool *)(pUVar6 + 1) = bVar12;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar5);
  }
  *(UObject **)&pUVar6[1].field_0x10 = pUVar5;
  *(UObject **)param_3 = pUVar6;
  return;
}

// operator() @ 1505781a0

bool __thiscall
`UMotionWarpingSwitchOffCompositeCondition::OnCheck'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FName local_res10 [3];
  FString local_18;
  
  bVar4 = false;
  local_res10[0] = (FName)((ulonglong)local_res10[0] & 0xffffffff00000000);
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<168854994269765887>);
  if (bVar2) {
    local_res10[0] = *(FName *)(*(longlong *)(*(longlong *)this + 0x30) + 0x18);
    ::FName::ToString(local_res10,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<168854994269765887>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_150578219;
    }
  }
  bVar2 = false;
LAB_150578219:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 150578290

bool __thiscall
`UMotionWarpingSwitchOffCompositeCondition::SetWarpTargetForDestination'::__l3::<lambda_1>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FName local_res10 [3];
  FString local_18;
  
  bVar4 = false;
  local_res10[0] = (FName)((ulonglong)local_res10[0] & 0xffffffff00000000);
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<168854994269765877>);
  if (bVar2) {
    local_res10[0] = *(FName *)(*(longlong *)(*(longlong *)this + 0x30) + 0x18);
    ::FName::ToString(local_res10,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<168854994269765877>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_150578309;
    }
  }
  bVar2 = false;
LAB_150578309:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 150578340

bool __thiscall
`UMotionWarpingSwitchOffCompositeCondition::OnCheck'::__l3::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FName local_res10 [3];
  FString local_18;
  
  bVar4 = false;
  local_res10[0] = (FName)((ulonglong)local_res10[0] & 0xffffffff00000000);
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<168854994269765888>);
  if (bVar2) {
    local_res10[0] = *(FName *)(*(longlong *)(*(longlong *)this + 0x30) + 0x18);
    ::FName::ToString(local_res10,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<168854994269765888>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_1505783b9;
    }
  }
  bVar2 = false;
LAB_1505783b9:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 1505783f0

bool __thiscall
`UMotionWarpingSwitchOffCompositeCondition::SetWarpTargetForDestination'::__l3::<lambda_2>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FName local_res10 [3];
  FString local_18;
  
  bVar4 = false;
  local_res10[0] = (FName)((ulonglong)local_res10[0] & 0xffffffff00000000);
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<168854994269765878>);
  if (bVar2) {
    local_res10[0] = *(FName *)(*(longlong *)(*(longlong *)this + 0x30) + 0x18);
    ::FName::ToString(local_res10,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<168854994269765878>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_150578469;
    }
  }
  bVar2 = false;
LAB_150578469:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

