// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NiagaraAnimNotifies
// Functions: 40

// `dynamic_initializer_for_'ModuleRegistrantNiagaraAnimNotifies'' @ 1411b76d0

void __cdecl _dynamic_initializer_for__ModuleRegistrantNiagaraAnimNotifies__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "NiagaraAnimNotifies";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"NiagaraAnimNotifies",0x13);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,
             FStaticallyLinkedModuleRegistrant<INiagaraAnimNotifiesModule>::InitializeModule);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraAnimNotifies_Public_AnimNotifyState_TimedNiagaraEffect_h__Script_NiagaraAnimNotifies_3652949396'' @ 1411b7720

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraAnimNotifies_Public_AnimNotifyState_TimedNiagaraEffect_h__Script_NiagaraAnimNotifies_3652949396__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/NiagaraAnimNotifies",
             Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraAnimNotifies_Public_AnimNotifyState_TimedNiagaraEffect_h__Script_NiagaraAnimNotifies_Statics
             ::ClassInfo,2,
             Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraAnimNotifies_Public_AnimNotifyState_TimedNiagaraEffect_h__Script_NiagaraAnimNotifies_Statics
             ::ScriptStructInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraAnimNotifies_Public_AnimNotifyState_TimedNiagaraEffect_h__Script_NiagaraAnimNotifies_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraAnimNotifies_Public_AnimNotify_PlayNiagaraEffect_h__Script_NiagaraAnimNotifies_1854364221'' @ 1411b7770

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraAnimNotifies_Public_AnimNotify_PlayNiagaraEffect_h__Script_NiagaraAnimNotifies_1854364221__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/NiagaraAnimNotifies",
             Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraAnimNotifies_Public_AnimNotify_PlayNiagaraEffect_h__Script_NiagaraAnimNotifies_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferPackage_UPackage__Script_NiagaraAnimNotifies'' @ 1411b77b0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferPackage_UPackage__Script_NiagaraAnimNotifies__(void)

{
  FPackageReloadVersionInfo local_res8 [4];
  
  local_res8[0].BodyHash = 0xee3da298;
  local_res8[0].DeclarationsHash = 0xfd44ff30;
  RegisterCompiledInInfo
            (Z_Construct_UPackage__Script_NiagaraAnimNotifies,L"/Script/NiagaraAnimNotifies",
             &Z_Registration_Info_UPackage__Script_NiagaraAnimNotifies,local_res8);
  return;
}

// NewProp_bAbsoluteScale_SetBit @ 14a067c90

void __cdecl
Z_Construct_UClass_UAnimNotify_PlayNiagaraEffect_Statics::NewProp_bAbsoluteScale_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x88) = 1;
  return;
}

// NewProp_Attached_SetBit @ 14a067ca0

void __cdecl
Z_Construct_UClass_UAnimNotify_PlayNiagaraEffect_Statics::NewProp_Attached_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0xc0) = *(uint *)((longlong)param_1 + 0xc0) | 1;
  return;
}

// `scalar_deleting_destructor' @ 14a067cb0

void * __thiscall
INiagaraAnimNotifiesModule::_scalar_deleting_destructor_
          (INiagaraAnimNotifiesModule *this,uint param_1)

{
  *this = (INiagaraAnimNotifiesModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// Z_Construct_UPackage__Script_NiagaraAnimNotifies @ 14a067cf0

UPackage * __cdecl Z_Construct_UPackage__Script_NiagaraAnimNotifies(void)

{
  if (Z_Registration_Info_UPackage__Script_NiagaraAnimNotifies.OuterSingleton == (UPackage *)0x0) {
    UECodeGen_Private::ConstructUPackage
              (&Z_Registration_Info_UPackage__Script_NiagaraAnimNotifies.OuterSingleton,
               &PackageParams);
  }
  return Z_Registration_Info_UPackage__Script_NiagaraAnimNotifies.OuterSingleton;
}

// Z_Construct_UClass_UAnimNotifyState_TimedNiagaraEffect @ 14a067f50

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAnimNotifyState_TimedNiagaraEffect(void)

{
  if (Z_Registration_Info_UClass_UAnimNotifyState_TimedNiagaraEffect.OuterSingleton == (UClass *)0x0
     ) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAnimNotifyState_TimedNiagaraEffect.OuterSingleton,
               &Z_Construct_UClass_UAnimNotifyState_TimedNiagaraEffect_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAnimNotifyState_TimedNiagaraEffect.OuterSingleton;
}

// Z_Construct_UClass_UAnimNotifyState_TimedNiagaraEffectAdvanced @ 14a067f90

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAnimNotifyState_TimedNiagaraEffectAdvanced(void)

{
  if (Z_Registration_Info_UClass_UAnimNotifyState_TimedNiagaraEffectAdvanced.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAnimNotifyState_TimedNiagaraEffectAdvanced.
                OuterSingleton,
               &Z_Construct_UClass_UAnimNotifyState_TimedNiagaraEffectAdvanced_Statics::ClassParams)
    ;
  }
  return Z_Registration_Info_UClass_UAnimNotifyState_TimedNiagaraEffectAdvanced.OuterSingleton;
}

// Z_Construct_UEnum_NiagaraAnimNotifies_ENiagaraAnimNotifyProgressType @ 14a067fd0

UEnum * __cdecl Z_Construct_UEnum_NiagaraAnimNotifies_ENiagaraAnimNotifyProgressType(void)

{
  if (Z_Registration_Info_UEnum_ENiagaraAnimNotifyProgressType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ENiagaraAnimNotifyProgressType.InnerSingleton,
               &Z_Construct_UEnum_NiagaraAnimNotifies_ENiagaraAnimNotifyProgressType_Statics::
                EnumParams);
  }
  return Z_Registration_Info_UEnum_ENiagaraAnimNotifyProgressType.InnerSingleton;
}

// Z_Construct_UScriptStruct_FCurveParameterPair @ 14a068010

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FCurveParameterPair(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FCurveParameterPair.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FCurveParameterPair.InnerSingleton,
               &Z_Construct_UScriptStruct_FCurveParameterPair_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FCurveParameterPair.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FCurveParameterPair.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// ENiagaraAnimNotifyProgressType_StaticEnum @ 14a068090

UEnum * __cdecl ENiagaraAnimNotifyProgressType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENiagaraAnimNotifyProgressType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_NiagaraAnimNotifies();
    Z_Registration_Info_UEnum_ENiagaraAnimNotifyProgressType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_NiagaraAnimNotifies_ENiagaraAnimNotifyProgressType,
                       (UObject *)pUVar1,L"ENiagaraAnimNotifyProgressType");
  }
  return Z_Registration_Info_UEnum_ENiagaraAnimNotifyProgressType.OuterSingleton;
}

// Z_Construct_UFunction_UAnimNotifyState_TimedNiagaraEffect_GetSpawnedEffect @ 14a0680d0

UFunction * __cdecl Z_Construct_UFunction_UAnimNotifyState_TimedNiagaraEffect_GetSpawnedEffect(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimNotifyState_TimedNiagaraEffect_GetSpawnedEffect_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bApplyRateScaleAsTimeDilation_SetBit @ 14a068110

void __cdecl
Z_Construct_UClass_UAnimNotifyState_TimedNiagaraEffect_Statics::
NewProp_bApplyRateScaleAsTimeDilation_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x88) = 1;
  return;
}

// NewProp_bDestroyAtEnd_SetBit @ 14a068120

void __cdecl
Z_Construct_UClass_UAnimNotifyState_TimedNiagaraEffect_Statics::NewProp_bDestroyAtEnd_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x89) = 1;
  return;
}

// NewStructOps @ 14a068130

void * __cdecl Z_Construct_UScriptStruct_FCurveParameterPair_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FCurveParameterPair,&UE::CoreUObject::Private::Construct<FCurveParameterPair>,&UE::CoreUObject::Private::ConstructForTests<FCurveParameterPair>,&UE::CoreUObject::Private::Destruct<FCurveParameterPair>,&UE::CoreUObject::Private::Copy<FCurveParameterPair>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UAnimNotifyState_TimedNiagaraEffectAdvanced_GetNotifyProgress @ 14a068170

UFunction * __cdecl
Z_Construct_UFunction_UAnimNotifyState_TimedNiagaraEffectAdvanced_GetNotifyProgress(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimNotifyState_TimedNiagaraEffectAdvanced_GetNotifyProgress_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bApplyRateScaleToProgress_SetBit @ 14a0681b0

void __cdecl
Z_Construct_UClass_UAnimNotifyState_TimedNiagaraEffectAdvanced_Statics::
NewProp_bApplyRateScaleToProgress_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x91) = 1;
  return;
}

// Z_Construct_UClass_UAnimNotify_PlayNiagaraEffect @ 14a068280

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAnimNotify_PlayNiagaraEffect(void)

{
  if (Z_Registration_Info_UClass_UAnimNotify_PlayNiagaraEffect.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAnimNotify_PlayNiagaraEffect.OuterSingleton,
               &Z_Construct_UClass_UAnimNotify_PlayNiagaraEffect_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAnimNotify_PlayNiagaraEffect.OuterSingleton;
}

// Z_Construct_UFunction_UAnimNotify_PlayNiagaraEffect_GetSpawnedEffect @ 14a0682c0

UFunction * __cdecl Z_Construct_UFunction_UAnimNotify_PlayNiagaraEffect_GetSpawnedEffect(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimNotify_PlayNiagaraEffect_GetSpawnedEffect_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// CastChecked<UFXSystemComponent,USceneComponent> @ 14a068300

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UFXSystemComponent * __cdecl
CastChecked<UFXSystemComponent,USceneComponent>(USceneComponent *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (USceneComponent *)0x0) {
    pFVar3 = GetTypeName<UFXSystemComponent>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = Z_Construct_UClass_UFXSystemComponent_NoRegister();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (UFXSystemComponent *)param_1;
  }
  pFVar3 = GetTypeName<UFXSystemComponent>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<USceneComponent>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// GetTypeName<UFXSystemComponent> @ 14a068620

FString * __cdecl GetTypeName<UFXSystemComponent>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = Z_Construct_UClass_UFXSystemComponent_NoRegister();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// InternalConstructor<UAnimNotifyState_TimedNiagaraEffect> @ 14a068660

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl InternalConstructor<UAnimNotifyState_TimedNiagaraEffect>(FObjectInitializer *param_1)

{
  if ((UAnimNotifyState_TimedNiagaraEffect *)param_1->Obj !=
      (UAnimNotifyState_TimedNiagaraEffect *)0x0) {
    UAnimNotifyState_TimedNiagaraEffect::UAnimNotifyState_TimedNiagaraEffect
              ((UAnimNotifyState_TimedNiagaraEffect *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<UAnimNotifyState_TimedNiagaraEffectAdvanced> @ 14a068680

void __cdecl
InternalConstructor<UAnimNotifyState_TimedNiagaraEffectAdvanced>(FObjectInitializer *param_1)

{
  UAnimNotifyState *this;
  FName *pFVar1;
  FName local_res8 [4];
  
  this = (UAnimNotifyState *)param_1->Obj;
  if (this != (UAnimNotifyState *)0x0) {
    UAnimNotifyState::UAnimNotifyState(this,param_1);
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[2].bIsNativeBranchingPoint = false;
    this[2]._padding_ = 0x3ff0000000000000;
    this[2]._padding_ = 0x3ff0000000000000;
    this[2]._padding_ = 0x3ff0000000000000;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined8 *)&this[1].bIsNativeBranchingPoint = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this->_padding_ = (longlong)&___7UAnimNotifyState_TimedNiagaraEffectAdvanced__6B_;
    *(undefined8 *)((longlong)&this[3]._padding_ + 4) = 0;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    *(undefined8 *)&this[3].bIsNativeBranchingPoint = 0;
    this[4]._padding_ = 0;
    *(undefined2 *)&this[3]._padding_ = 0x101;
    *(undefined4 *)&this[4]._padding_ = 0;
    *(undefined4 *)((longlong)&this[4]._padding_ + 4) = 0x80;
    *(undefined4 *)((longlong)&this[4]._padding_ + 4) = 0;
    *(undefined4 *)&this[4]._padding_ = 0xffffffff;
    this[5]._padding_ = 0;
    *(undefined4 *)&this[5]._padding_ = 0;
    pFVar1 = FName::FName(local_res8,"NormalizedNotifyProgress");
    *(FName *)((longlong)&this[3]._padding_ + 4) = *pFVar1;
  }
  return;
}

// InternalConstructor<UAnimNotify_PlayNiagaraEffect> @ 14a068770

void __cdecl InternalConstructor<UAnimNotify_PlayNiagaraEffect>(FObjectInitializer *param_1)

{
  UAnimNotify *this;
  FObjectInitializer *pFVar1;
  
  this = (UAnimNotify *)param_1->Obj;
  if (this != (UAnimNotify *)0x0) {
    pFVar1 = FObjectInitializer::Get();
    UAnimNotify::UAnimNotify(this,pFVar1);
    this->_padding_ = (longlong)&___7UAnimNotify_PlayNiagaraEffect__6B_;
    *(uint *)&this[3]._padding_ = (uint)this[3]._padding_ | 1;
    this[1]._padding_ = 0;
    *(undefined8 *)((longlong)&this[3]._padding_ + 4) = 0;
    this[2]._padding_ = 0x3ff0000000000000;
    this[2]._padding_ = 0x3ff0000000000000;
    this[2]._padding_ = 0x3ff0000000000000;
    *(undefined1 *)&this[2]._padding_ = 0;
  }
  return;
}

// InternalVTableHelperCtorCaller<UAnimNotifyState_TimedNiagaraEffect> @ 14a0687e0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UAnimNotifyState_TimedNiagaraEffect>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UAnimNotifyState *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAnimNotifyState_TimedNiagaraEffect::GetPrivateStaticClass();
  this = (UAnimNotifyState *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UAnimNotifyState *)0x0) {
    UAnimNotifyState::UAnimNotifyState(this,param_1);
    this[2].bIsNativeBranchingPoint = false;
    this->_padding_ = (longlong)&___7UAnimNotifyState_TimedNiagaraEffect__6B_;
    this[2]._padding_ = 0x3ff0000000000000;
    this[2]._padding_ = 0x3ff0000000000000;
    this[2]._padding_ = 0x3ff0000000000000;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UAnimNotifyState_TimedNiagaraEffectAdvanced> @ 14a0688c0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UAnimNotifyState_TimedNiagaraEffectAdvanced>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UAnimNotifyState *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAnimNotifyState_TimedNiagaraEffectAdvanced::GetPrivateStaticClass();
  this = (UAnimNotifyState *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UAnimNotifyState *)0x0) {
    UAnimNotifyState::UAnimNotifyState(this,param_1);
    this[1]._padding_ = 0;
    this[2]._padding_ = 0x3ff0000000000000;
    this[2]._padding_ = 0x3ff0000000000000;
    this[2]._padding_ = 0x3ff0000000000000;
    this->_padding_ = (longlong)&___7UAnimNotifyState_TimedNiagaraEffectAdvanced__6B_;
    this[1]._padding_ = 0;
    this[2].bIsNativeBranchingPoint = false;
    *(undefined2 *)&this[3]._padding_ = 0x101;
    *(undefined8 *)((longlong)&this[3]._padding_ + 4) = 0;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    *(undefined8 *)&this[3].bIsNativeBranchingPoint = 0;
    this[4]._padding_ = 0;
    *(undefined4 *)&this[4]._padding_ = 0;
    *(undefined4 *)((longlong)&this[4]._padding_ + 4) = 0x80;
    *(undefined4 *)&this[4]._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&this[4]._padding_ + 4) = 0;
    this[5]._padding_ = 0;
    *(undefined4 *)&this[5]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UAnimNotify_PlayNiagaraEffect> @ 14a068a00

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UAnimNotify_PlayNiagaraEffect>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UAnimNotify *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAnimNotify_PlayNiagaraEffect::GetPrivateStaticClass();
  this = (UAnimNotify *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UAnimNotify *)0x0) {
    UAnimNotify::UAnimNotify(this,param_1);
    this->_padding_ = (longlong)&___7UAnimNotify_PlayNiagaraEffect__6B_;
    this[1]._padding_ = 0;
    *(undefined8 *)((longlong)&this[3]._padding_ + 4) = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// StaticEnum<enum_ENiagaraAnimNotifyProgressType> @ 14a068c40

UEnum * __cdecl StaticEnum<enum_ENiagaraAnimNotifyProgressType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENiagaraAnimNotifyProgressType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_NiagaraAnimNotifies();
    Z_Registration_Info_UEnum_ENiagaraAnimNotifyProgressType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_NiagaraAnimNotifies_ENiagaraAnimNotifyProgressType,
                       (UObject *)pUVar1,L"ENiagaraAnimNotifyProgressType");
  }
  return Z_Registration_Info_UEnum_ENiagaraAnimNotifyProgressType.OuterSingleton;
}

// `scalar_deleting_destructor' @ 14a069100

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void * __thiscall
UAnimNotifyState_TimedNiagaraEffect::_scalar_deleting_destructor_
          (UAnimNotifyState_TimedNiagaraEffect *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UAnimNotifyState_TimedNiagaraEffect__6B_;
  UAnimNotifyState::~UAnimNotifyState((UAnimNotifyState *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x90);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a069160

void * __thiscall
UAnimNotifyState_TimedNiagaraEffectAdvanced::_scalar_deleting_destructor_
          (UAnimNotifyState_TimedNiagaraEffectAdvanced *this,uint param_1)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7UAnimNotifyState_TimedNiagaraEffectAdvanced__6B_;
  *(undefined4 *)&(this->ProgressInfoMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ProgressInfoMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<UMeshComponent_*,UAnimNotifyState_TimedNiagaraEffectAdvanced::FInstanceProgressInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UMeshComponent_*,UAnimNotifyState_TimedNiagaraEffectAdvanced::FInstanceProgressInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UMeshComponent_*,UAnimNotifyState_TimedNiagaraEffectAdvanced::FInstanceProgressInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ProgressInfoMap);
  pFVar2 = (this->AnimCurves).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  this->_padding_ = (longlong)&___7UAnimNotifyState_TimedNiagaraEffect__6B_;
  UAnimNotifyState::~UAnimNotifyState((UAnimNotifyState *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x100);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a069220

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void * __thiscall
UAnimNotify_PlayNiagaraEffect::_scalar_deleting_destructor_
          (UAnimNotify_PlayNiagaraEffect *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UAnimNotify_PlayNiagaraEffect__6B_;
  UAnimNotify::~UAnimNotify((UAnimNotify *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xd0);
  }
  return this;
}

// EmptyLinkFunctionForGeneratedCodeAnimNotifyState_TimedNiagaraEffect @ 14a069280

void __cdecl EmptyLinkFunctionForGeneratedCodeAnimNotifyState_TimedNiagaraEffect(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAnimNotify_PlayNiagaraEffect @ 14a069290

void __cdecl EmptyLinkFunctionForGeneratedCodeAnimNotify_PlayNiagaraEffect(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNiagaraAnimNotifies_init @ 14a0692a0

void __cdecl EmptyLinkFunctionForGeneratedCodeNiagaraAnimNotifies_init(void)

{
  return;
}

// Z_Construct_UClass_UAnimNotifyState_TimedNiagaraEffectAdvanced_NoRegister @ 14a06aa60

UClass * __cdecl Z_Construct_UClass_UAnimNotifyState_TimedNiagaraEffectAdvanced_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimNotifyState_TimedNiagaraEffectAdvanced.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/NiagaraAnimNotifies",L"AnimNotifyState_TimedNiagaraEffectAdvanced",
               &Z_Registration_Info_UClass_UAnimNotifyState_TimedNiagaraEffectAdvanced.
                InnerSingleton,
               UAnimNotifyState_TimedNiagaraEffectAdvanced::
               StaticRegisterNativesUAnimNotifyState_TimedNiagaraEffectAdvanced,0x100,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UAnimNotifyState_TimedNiagaraEffectAdvanced>,
               InternalVTableHelperCtorCaller<UAnimNotifyState_TimedNiagaraEffectAdvanced>,
               local_res8,UAnimNotifyState_TimedNiagaraEffect::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimNotifyState_TimedNiagaraEffectAdvanced.InnerSingleton;
}

// Z_Construct_UClass_UAnimNotifyState_TimedNiagaraEffect_NoRegister @ 14a06ab20

UClass * __cdecl Z_Construct_UClass_UAnimNotifyState_TimedNiagaraEffect_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimNotifyState_TimedNiagaraEffect.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/NiagaraAnimNotifies",L"AnimNotifyState_TimedNiagaraEffect",
               &Z_Registration_Info_UClass_UAnimNotifyState_TimedNiagaraEffect.InnerSingleton,
               UAnimNotifyState_TimedNiagaraEffect::
               StaticRegisterNativesUAnimNotifyState_TimedNiagaraEffect,0x90,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAnimNotifyState_TimedNiagaraEffect>,
               InternalVTableHelperCtorCaller<UAnimNotifyState_TimedNiagaraEffect>,local_res8,
               UAnimNotifyState::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimNotifyState_TimedNiagaraEffect.InnerSingleton;
}

// Z_Construct_UClass_UAnimNotify_PlayNiagaraEffect_NoRegister @ 14a06abe0

UClass * __cdecl Z_Construct_UClass_UAnimNotify_PlayNiagaraEffect_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimNotify_PlayNiagaraEffect.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/NiagaraAnimNotifies",L"AnimNotify_PlayNiagaraEffect",
               &Z_Registration_Info_UClass_UAnimNotify_PlayNiagaraEffect.InnerSingleton,
               UAnimNotify_PlayNiagaraEffect::StaticRegisterNativesUAnimNotify_PlayNiagaraEffect,
               0xd0,0x10,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UAnimNotify_PlayNiagaraEffect>,
               InternalVTableHelperCtorCaller<UAnimNotify_PlayNiagaraEffect>,local_res8,
               UAnimNotify::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimNotify_PlayNiagaraEffect.InnerSingleton;
}

// IMPLEMENT_MODULE_NiagaraAnimNotifies @ 14a06af80

void __cdecl IMPLEMENT_MODULE_NiagaraAnimNotifies(void)

{
  return;
}

