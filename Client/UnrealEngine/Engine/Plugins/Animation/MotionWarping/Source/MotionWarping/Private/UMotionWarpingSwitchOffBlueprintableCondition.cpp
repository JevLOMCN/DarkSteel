// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MotionWarping
// Functions: 17

// StaticClass @ 14cefef80

UClass * __cdecl UMotionWarpingSwitchOffBlueprintableCondition::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMotionWarpingSwitchOffBlueprintableCondition.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MotionWarping",L"MotionWarpingSwitchOffBlueprintableCondition",
               &Z_Registration_Info_UClass_UMotionWarpingSwitchOffBlueprintableCondition.
                InnerSingleton,StaticRegisterNativesUMotionWarpingSwitchOffBlueprintableCondition,
               0x48,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMotionWarpingSwitchOffBlueprintableCondition>,
               InternalVTableHelperCtorCaller<UMotionWarpingSwitchOffBlueprintableCondition>,
               local_res8,UMotionWarpingSwitchOffCondition::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMotionWarpingSwitchOffBlueprintableCondition.InnerSingleton;
}

// UMotionWarpingSwitchOffBlueprintableCondition @ 14cf04530

UMotionWarpingSwitchOffBlueprintableCondition * __thiscall
UMotionWarpingSwitchOffBlueprintableCondition::UMotionWarpingSwitchOffBlueprintableCondition
          (UMotionWarpingSwitchOffBlueprintableCondition *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined2 *)&this->field_0x28 = 0x101;
  *(undefined8 *)&this->field_0x30 = 0;
  *(undefined8 *)&this->field_0x38 = 0;
  *(undefined8 *)&this->field_0x40 = 0;
  *(undefined ***)this = &___7UMotionWarpingSwitchOffBlueprintableCondition__6B_;
  this->field_0x2a = 0;
  return this;
}

// UMotionWarpingSwitchOffBlueprintableCondition @ 14cf04570

UMotionWarpingSwitchOffBlueprintableCondition * __thiscall
UMotionWarpingSwitchOffBlueprintableCondition::UMotionWarpingSwitchOffBlueprintableCondition
          (UMotionWarpingSwitchOffBlueprintableCondition *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined2 *)&this->field_0x28 = 0x101;
  *(undefined8 *)&this->field_0x30 = 0;
  *(undefined8 *)&this->field_0x38 = 0;
  *(undefined8 *)&this->field_0x40 = 0;
  *(undefined ***)this = &___7UMotionWarpingSwitchOffBlueprintableCondition__6B_;
  this->field_0x2a = 0;
  return this;
}

// ~UMotionWarpingSwitchOffBlueprintableCondition @ 14cf05910

void __thiscall
UMotionWarpingSwitchOffBlueprintableCondition::~UMotionWarpingSwitchOffBlueprintableCondition
          (UMotionWarpingSwitchOffBlueprintableCondition *this)

{
  *(undefined ***)this = &___7UMotionWarpingSwitchOffCondition__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// BP_Check @ 14cf09280

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
UMotionWarpingSwitchOffBlueprintableCondition::BP_Check
          (UMotionWarpingSwitchOffBlueprintableCondition *this,AActor *param_1,AActor *param_2,
          TVector<double> *param_3,bool param_4)

{
  double *pdVar1;
  UFunction *this_00;
  UClass *pUVar2;
  undefined1 uVar3;
  AActor *local_38;
  AActor *pAStack_30;
  double local_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  double local_18;
  bool local_10;
  char local_f;
  
  this_00 = UObject::FindFunctionChecked
                      ((UObject *)this,NAME_UMotionWarpingSwitchOffBlueprintableCondition_BP_Check);
  pUVar2 = UField::GetOwnerClass((UField *)this_00);
  local_38 = (AActor *)(param_3->field0_0x0)._s_0.X;
  pdVar1 = &(param_3->field0_0x0)._s_0.Y;
  uStack_20 = *(undefined4 *)pdVar1;
  uStack_1c = *(undefined4 *)((longlong)&param_3->field0_0x0 + 0xc);
  pAStack_30 = (AActor *)*pdVar1;
  local_28 = (param_3->field0_0x0)._s_0.Z;
  if ((pUVar2->ClassFlags & CLASS_Native) == CLASS_None) {
    local_f = '\0';
    local_10 = param_4;
    local_38 = param_1;
    pAStack_30 = param_2;
    local_18 = local_28;
    local_28 = (param_3->field0_0x0)._s_0.X;
    (**(code **)(*(longlong *)this + 0x260))(this,this_00,&local_38);
    uVar3 = local_f != '\0';
  }
  else {
    uVar3 = (**(code **)(*(longlong *)this + 0x2f0))(this,param_1,param_2,&local_38,param_4);
  }
  return (bool)uVar3;
}

// BP_Check_Implementation @ 14cf09360

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
UMotionWarpingSwitchOffBlueprintableCondition::BP_Check_Implementation
          (UMotionWarpingSwitchOffBlueprintableCondition *this,AActor *param_1,AActor *param_2,
          TVector<double> *param_3,bool param_4)

{
  return false;
}

// BP_ExtraDebugInfo @ 14cf09370

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
UMotionWarpingSwitchOffBlueprintableCondition::BP_ExtraDebugInfo
          (UMotionWarpingSwitchOffBlueprintableCondition *this,FString *__return_storage_ptr__,
          AActor *param_1,AActor *param_2,TVector<double> *param_3,bool param_4)

{
  int *piVar1;
  void *_Src;
  UFunction *this_00;
  UClass *pUVar2;
  longlong lVar3;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  double local_68;
  AActor *local_58;
  AActor *local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  double local_38;
  bool local_30;
  void *local_28;
  undefined8 local_20;
  
  this_00 = UObject::FindFunctionChecked
                      ((UObject *)this,
                       NAME_UMotionWarpingSwitchOffBlueprintableCondition_BP_ExtraDebugInfo);
  pUVar2 = UField::GetOwnerClass((UField *)this_00);
  local_78 = *(undefined4 *)&param_3->field0_0x0;
  uStack_74 = *(undefined4 *)((longlong)&param_3->field0_0x0 + 4);
  uStack_70 = *(undefined4 *)((longlong)&param_3->field0_0x0 + 8);
  uStack_6c = *(undefined4 *)((longlong)&param_3->field0_0x0 + 0xc);
  local_68 = (param_3->field0_0x0)._s_0.Z;
  if ((pUVar2->ClassFlags & CLASS_Native) == CLASS_None) {
    local_28 = (void *)0x0;
    local_20 = 0;
    local_30 = param_4;
    local_58 = param_1;
    local_50 = param_2;
    local_48 = local_78;
    uStack_44 = uStack_74;
    uStack_40 = uStack_70;
    uStack_3c = uStack_6c;
    local_38 = local_68;
    (**(code **)(*(longlong *)this + 0x260))(this,this_00,&local_58);
    _Src = local_28;
    lVar3 = (longlong)(int)local_20;
    piVar1 = &(__return_storage_ptr__->Data).ArrayMax;
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = (int)local_20;
    if ((int)local_20 == 0) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,(int)local_20,0,(ForAnyElementType *)__return_storage_ptr__,(int)local_20,
                 piVar1);
      memcpy((__return_storage_ptr__->Data).AllocatorInstance.Data,_Src,lVar3 * 2);
    }
    if (local_28 != (void *)0x0) {
      FMemory::Free(local_28);
    }
  }
  else {
    (**(code **)(*(longlong *)this + 0x2e8))
              (this,__return_storage_ptr__,param_1,param_2,&local_78,param_4);
  }
  return __return_storage_ptr__;
}

// BP_ExtraDebugInfo_Implementation @ 14cf094e0

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
UMotionWarpingSwitchOffBlueprintableCondition::BP_ExtraDebugInfo_Implementation
          (UMotionWarpingSwitchOffBlueprintableCondition *this,FString *__return_storage_ptr__,
          AActor *param_1,AActor *param_2,TVector<double> *param_3,bool param_4)

{
  ::FString::FString(__return_storage_ptr__,
                     "No extra debug info. Override BP_ExtraDebugInfo to add it.");
  return __return_storage_ptr__;
}

// CreateSwitchOffBlueprintableCondition @ 14cf0ad40

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

UMotionWarpingSwitchOffBlueprintableCondition * __cdecl
UMotionWarpingSwitchOffBlueprintableCondition::CreateSwitchOffBlueprintableCondition
          (AActor *param_1,ESwitchOffConditionEffect param_2,
          TSubclassOf<UMotionWarpingSwitchOffBlueprintableCondition> param_3,bool param_4,
          AActor *param_5)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  FName FVar4;
  FName FVar5;
  UClass *pUVar6;
  UPackage *pUVar7;
  UMotionWarpingSwitchOffBlueprintableCondition *pUVar8;
  longlong *plVar9;
  UClass *pUVar10;
  undefined1 auStack_f8 [32];
  FName local_d8;
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_f8;
  lVar2 = *(longlong *)param_3.Class.field0_0x0;
  pUVar10 = (UClass *)0x0;
  local_d8.ComparisonIndex.Value = 0;
  local_d8.Number = 0;
  if ((lVar2 != 0) && (pUVar6 = StaticClass(), pUVar6 != (UClass *)0x0)) {
    iVar1 = (int)pUVar6->_padding_;
    if ((*(int *)(lVar2 + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar6->_padding_)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      pUVar10 = *(UClass **)param_3.Class.field0_0x0;
    }
  }
  pUVar7 = GetTransientPackage();
  FVar4 = local_d8;
  if (local_d8 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)pUVar7,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar6 = StaticClass();
  CheckIsClassChildOf_Internal(pUVar6,pUVar10);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_c8,pUVar10);
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
  local_c8._8_8_ = pUVar7;
  pUVar8 = (UMotionWarpingSwitchOffBlueprintableCondition *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
  if (local_c8._64_8_ != 0) {
    plVar9 = (longlong *)(local_c8 + 0x50);
    if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
      plVar9 = (longlong *)local_c8._104_8_;
    }
    (**(code **)(*plVar9 + 0x10))();
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (AActor *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  *(AActor **)&pUVar8->field_0x30 = param_1;
  pUVar8->field_0x29 = param_2;
  pUVar8->field_0x28 = param_4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_5 != (AActor *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_5);
  }
  *(AActor **)&pUVar8->field_0x38 = param_5;
  return pUVar8;
}

// ExtraDebugInfo @ 14cf0c780

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
UMotionWarpingSwitchOffBlueprintableCondition::ExtraDebugInfo
          (UMotionWarpingSwitchOffBlueprintableCondition *this,FString *__return_storage_ptr__)

{
  int *piVar1;
  double dVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  void *_Src;
  TVector<double> *pTVar6;
  UFunction *this_00;
  UClass *pUVar7;
  longlong lVar8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  double local_98;
  TVector<double> local_88;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  double local_48;
  undefined1 local_40;
  void *local_38;
  undefined8 local_30;
  
  cVar3 = this->field_0x28;
  pTVar6 = UMotionWarpingSwitchOffCondition::GetTargetLocation
                     ((UMotionWarpingSwitchOffCondition *)this,&local_88);
  uVar4 = *(undefined8 *)&this->field_0x38;
  uVar5 = *(undefined8 *)&this->field_0x30;
  local_a8 = *(undefined8 *)&pTVar6->field0_0x0;
  uStack_a0 = *(undefined8 *)((longlong)&pTVar6->field0_0x0 + 8);
  dVar2 = (pTVar6->field0_0x0)._s_0.Z;
  this_00 = UObject::FindFunctionChecked
                      ((UObject *)this,
                       NAME_UMotionWarpingSwitchOffBlueprintableCondition_BP_ExtraDebugInfo);
  pUVar7 = UField::GetOwnerClass((UField *)this_00);
  if ((pUVar7->ClassFlags & CLASS_Native) == CLASS_None) {
    local_40 = cVar3 != '\0';
    local_38 = (void *)0x0;
    local_30 = 0;
    local_58 = (undefined4)local_a8;
    uStack_54 = local_a8._4_4_;
    uStack_50 = (undefined4)uStack_a0;
    uStack_4c = uStack_a0._4_4_;
    local_68 = uVar5;
    local_60 = uVar4;
    local_48 = dVar2;
    (**(code **)(*(longlong *)this + 0x260))(this,this_00,&local_68);
    _Src = local_38;
    lVar8 = (longlong)(int)local_30;
    piVar1 = &(__return_storage_ptr__->Data).ArrayMax;
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = (int)local_30;
    if ((int)local_30 == 0) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,(int)local_30,0,(ForAnyElementType *)__return_storage_ptr__,(int)local_30,
                 piVar1);
      memcpy((__return_storage_ptr__->Data).AllocatorInstance.Data,_Src,lVar8 * 2);
    }
    if (local_38 != (void *)0x0) {
      FMemory::Free(local_38);
    }
  }
  else {
    local_98 = dVar2;
    (**(code **)(*(longlong *)this + 0x2e8))
              (this,__return_storage_ptr__,uVar5,uVar4,&local_a8,cVar3);
  }
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14cf106a0

UClass * __cdecl UMotionWarpingSwitchOffBlueprintableCondition::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMotionWarpingSwitchOffBlueprintableCondition.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MotionWarping",L"MotionWarpingSwitchOffBlueprintableCondition",
               &Z_Registration_Info_UClass_UMotionWarpingSwitchOffBlueprintableCondition.
                InnerSingleton,StaticRegisterNativesUMotionWarpingSwitchOffBlueprintableCondition,
               0x48,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMotionWarpingSwitchOffBlueprintableCondition>,
               InternalVTableHelperCtorCaller<UMotionWarpingSwitchOffBlueprintableCondition>,
               local_res8,UMotionWarpingSwitchOffCondition::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMotionWarpingSwitchOffBlueprintableCondition.InnerSingleton;
}

// GetWorld @ 14cf11f50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UWorld * __thiscall
UMotionWarpingSwitchOffBlueprintableCondition::GetWorld
          (UMotionWarpingSwitchOffBlueprintableCondition *this)

{
  UWorld *pUVar1;
  
  if ((*(longlong *)&this->field_0x30 != 0) &&
     ((*(uint *)(*(longlong *)&this->field_0x30 + 8) >> 0x1e & 1) == 0)) {
    pUVar1 = AActor::GetWorld(*(AActor **)&this->field_0x30);
    return pUVar1;
  }
  return (UWorld *)0x0;
}

// OnCheck @ 14cf12bc0

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
UMotionWarpingSwitchOffBlueprintableCondition::OnCheck
          (UMotionWarpingSwitchOffBlueprintableCondition *this)

{
  double dVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  TVector<double> *pTVar5;
  UFunction *this_00;
  UClass *pUVar6;
  undefined1 uVar7;
  undefined8 local_88;
  undefined8 uStack_80;
  double local_78;
  TVector<double> local_68;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  double local_30;
  undefined1 local_28;
  char local_27;
  
  cVar2 = this->field_0x28;
  pTVar5 = UMotionWarpingSwitchOffCondition::GetTargetLocation
                     ((UMotionWarpingSwitchOffCondition *)this,&local_68);
  uVar3 = *(undefined8 *)&this->field_0x38;
  uVar4 = *(undefined8 *)&this->field_0x30;
  local_88 = *(undefined8 *)&pTVar5->field0_0x0;
  uStack_80 = *(undefined8 *)((longlong)&pTVar5->field0_0x0 + 8);
  dVar1 = (pTVar5->field0_0x0)._s_0.Z;
  this_00 = UObject::FindFunctionChecked
                      ((UObject *)this,NAME_UMotionWarpingSwitchOffBlueprintableCondition_BP_Check);
  pUVar6 = UField::GetOwnerClass((UField *)this_00);
  if ((pUVar6->ClassFlags & CLASS_Native) == CLASS_None) {
    local_28 = cVar2 != '\0';
    local_27 = '\0';
    local_40 = (undefined4)local_88;
    uStack_3c = local_88._4_4_;
    uStack_38 = (undefined4)uStack_80;
    uStack_34 = uStack_80._4_4_;
    local_50 = uVar4;
    local_48 = uVar3;
    local_30 = dVar1;
    (**(code **)(*(longlong *)this + 0x260))(this,this_00,&local_50);
    uVar7 = local_27 != '\0';
  }
  else {
    local_78 = dVar1;
    uVar7 = (**(code **)(*(longlong *)this + 0x2f0))(this,uVar4,uVar3,&local_88,cVar2);
  }
  return (bool)uVar7;
}

// StaticRegisterNativesUMotionWarpingSwitchOffBlueprintableCondition @ 14cf1be30

void __cdecl
UMotionWarpingSwitchOffBlueprintableCondition::
StaticRegisterNativesUMotionWarpingSwitchOffBlueprintableCondition(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 3;
  local_18.DataPtr = Z_Construct_UClass_UMotionWarpingSwitchOffBlueprintableCondition_Statics::Funcs
  ;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execBP_Check @ 14cf21830

void __cdecl
UMotionWarpingSwitchOffBlueprintableCondition::execBP_Check
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 uVar2;
  int local_res8 [2];
  undefined8 local_res10;
  undefined8 local_res18;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  
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
  local_res10 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_38 = local_58;
  uStack_34 = uStack_54;
  uStack_30 = uStack_50;
  uStack_2c = uStack_4c;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_28 = local_48;
  uVar2 = (**(code **)(*(longlong *)param_1 + 0x2f0))
                    (param_1,local_res18,local_res10,&local_38,local_res8[0] != 0);
  *(undefined1 *)param_3 = uVar2;
  return;
}

// execBP_ExtraDebugInfo @ 14cf219d0

void __cdecl
UMotionWarpingSwitchOffBlueprintableCondition::execBP_ExtraDebugInfo
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 *puVar2;
  int local_res8 [2];
  undefined8 local_res10;
  undefined8 local_res18;
  void *local_68 [2];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  
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
  local_res10 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_38 = local_58;
  uStack_34 = uStack_54;
  uStack_30 = uStack_50;
  uStack_2c = uStack_4c;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_28 = local_48;
  puVar2 = (undefined8 *)
           (**(code **)(*(longlong *)param_1 + 0x2e8))
                     (param_1,local_68,local_res18,local_res10,&local_38,local_res8[0] != 0);
  if (param_3 != puVar2) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(undefined8 *)param_3 = *puVar2;
    *puVar2 = 0;
    *(undefined4 *)((longlong)param_3 + 8) = *(undefined4 *)(puVar2 + 1);
    *(undefined4 *)((longlong)param_3 + 0xc) = *(undefined4 *)((longlong)puVar2 + 0xc);
    puVar2[1] = 0;
  }
  if (local_68[0] != (void *)0x0) {
    FMemory::Free(local_68[0]);
  }
  return;
}

// execCreateSwitchOffBlueprintableCondition @ 14cf21ed0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __cdecl
UMotionWarpingSwitchOffBlueprintableCondition::execCreateSwitchOffBlueprintableCondition
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  int iVar2;
  FProperty *pFVar3;
  bool bVar4;
  FName FVar5;
  FName FVar6;
  UObject *pUVar7;
  UClass *pUVar8;
  UPackage *pUVar9;
  UObject *pUVar10;
  longlong *plVar11;
  UClass *pUVar12;
  undefined1 uVar13;
  uchar *puVar14;
  UObject *pUVar15;
  undefined1 auStack_118 [32];
  undefined1 local_f8;
  undefined1 local_f7;
  int local_f4;
  FName local_f0;
  uchar local_e8 [8];
  UObject *local_e0;
  UClass *local_d8 [2];
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_118;
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  local_e8[0] = '\0';
  local_e8[1] = '\0';
  local_e8[2] = '\0';
  local_e8[3] = '\0';
  local_e8[4] = '\0';
  local_e8[5] = '\0';
  local_e8[6] = '\0';
  local_e8[7] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_e8,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_e8);
  }
  local_f8 = 0;
  puVar14 = local_e8;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar14 = param_2->MostRecentPropertyAddress;
  }
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_f8,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_f8);
  }
  local_d8[0] = (UClass *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_d8,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_d8);
  }
  local_f4 = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_f4,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_f4);
  }
  local_f7 = local_f4 != 0;
  local_e0 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_e0,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_e0);
  }
  pUVar12 = local_d8[0];
  pUVar7 = local_e0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((UE::GC::GIsIncrementalReachabilityPending == false) || (local_d8[0] == (UClass *)0x0)) {
    pUVar15 = *(UObject **)puVar14;
    local_f0.ComparisonIndex.Value = 0;
    local_f0.Number = 0;
    uVar13 = local_f8;
    if (local_d8[0] != (UClass *)0x0) goto LAB_14cf2208d;
  }
  else {
    UE::GC::MarkAsReachable((UObject *)local_d8[0]);
    pUVar15 = *(UObject **)puVar14;
LAB_14cf2208d:
    uVar13 = local_f8;
    local_f0.ComparisonIndex.Value = 0;
    local_f0.Number = 0;
    pUVar8 = StaticClass();
    if (pUVar8 != (UClass *)0x0) {
      iVar2 = (int)pUVar8->_padding_;
      if (((int)pUVar12->_padding_ < iVar2) ||
         ((longlong *)*(undefined1 **)(pUVar12->_padding_ + (longlong)iVar2 * 8) !=
          &pUVar8->_padding_)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) goto LAB_14cf220be;
    }
  }
  pUVar12 = (UClass *)0x0;
LAB_14cf220be:
  pUVar9 = GetTransientPackage();
  FVar5 = local_f0;
  if (local_f0 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)pUVar9,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar8 = StaticClass();
  CheckIsClassChildOf_Internal(pUVar8,pUVar12);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_c8,pUVar12);
  FVar6 = local_f0;
  local_c8._24_4_ = RF_NoFlags;
  local_c8._40_8_ = (UObject *)0x0;
  local_c8[0x20] = false;
  local_c8._48_8_ = (FObjectInstancingGraph *)0x0;
  local_c8._56_8_ = (UPackage *)0x0;
  local_f0.ComparisonIndex = FVar5.ComparisonIndex.Value;
  local_f0.Number = FVar5.Number;
  local_c8._16_4_ = local_f0.ComparisonIndex.Value;
  local_c8._20_4_ = local_f0.Number;
  local_f0 = FVar6;
  local_c8._8_8_ = pUVar9;
  pUVar10 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
  if (local_c8._64_8_ != 0) {
    plVar11 = (longlong *)(local_c8 + 0x50);
    if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
      plVar11 = (longlong *)local_c8._104_8_;
    }
    (**(code **)(*plVar11 + 0x10))();
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar15 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar15);
  }
  *(UObject **)&pUVar10[1].field_0x8 = pUVar15;
  *(undefined1 *)(pUVar10 + 1) = local_f7;
  pUVar10[1].field_0x1 = uVar13;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar7);
  }
  *(UObject **)&pUVar10[1].field_0x10 = pUVar7;
  *(UObject **)param_3 = pUVar10;
  return;
}

