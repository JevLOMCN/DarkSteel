// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: EnhancedInput
// Functions: 36

// StaticClass @ 14a6b36a0

UClass * __cdecl UEnhancedInputLibrary::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEnhancedInputLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EnhancedInput",L"EnhancedInputLibrary",
               &Z_Registration_Info_UClass_UEnhancedInputLibrary.InnerSingleton,
               StaticRegisterNativesUEnhancedInputLibrary,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UEnhancedInputLibrary>,
               InternalVTableHelperCtorCaller<UEnhancedInputLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEnhancedInputLibrary.InnerSingleton;
}

// UEnhancedInputLibrary @ 14a6cb750

UEnhancedInputLibrary * __thiscall
UEnhancedInputLibrary::UEnhancedInputLibrary(UEnhancedInputLibrary *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UEnhancedInputLibrary__6B_;
  return this;
}

// UEnhancedInputLibrary @ 14a6cb780

UEnhancedInputLibrary * __thiscall
UEnhancedInputLibrary::UEnhancedInputLibrary
          (UEnhancedInputLibrary *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UEnhancedInputLibrary__6B_;
  return this;
}

// ~UEnhancedInputLibrary @ 14a6cf110

void __thiscall UEnhancedInputLibrary::~UEnhancedInputLibrary(UEnhancedInputLibrary *this)

{
  *(undefined ***)this = &___7UEnhancedInputLibrary__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// BreakInputActionValue @ 14a6d60a0

void __cdecl
UEnhancedInputLibrary::BreakInputActionValue
          (FInputActionValue *param_1,double *param_2,double *param_3,double *param_4,
          EInputActionValueType *param_5)

{
  double dVar1;
  EInputActionValueType EVar2;
  double dVar3;
  
  dVar3 = (param_1->Value).field0_0x0._s_0.Y;
  dVar1 = (param_1->Value).field0_0x0._s_0.Z;
  EVar2 = param_1->ValueType;
  *param_2 = (param_1->Value).field0_0x0._s_0.X;
  *param_3 = dVar3;
  *param_4 = dVar1;
  *param_5 = EVar2;
  return;
}

// Conv_InputActionValueToAxis1D @ 14a6d6bd0

double __cdecl UEnhancedInputLibrary::Conv_InputActionValueToAxis1D(FInputActionValue *param_1)

{
  return (double)(float)(param_1->Value).field0_0x0._s_0.X;
}

// Conv_InputActionValueToAxis2D @ 14a6d6bf0

TVector2<double> * __cdecl
UEnhancedInputLibrary::Conv_InputActionValueToAxis2D
          (TVector2<double> *__return_storage_ptr__,FInputActionValue *param_1)

{
  (__return_storage_ptr__->field0_0x0)._s_0.X = (param_1->Value).field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (param_1->Value).field0_0x0._s_0.Y;
  return __return_storage_ptr__;
}

// Conv_InputActionValueToAxis3D @ 14a6d6c10

TVector<double> * __cdecl
UEnhancedInputLibrary::Conv_InputActionValueToAxis3D
          (TVector<double> *__return_storage_ptr__,FInputActionValue *param_1)

{
  double dVar1;
  double dVar2;
  
  dVar2 = (param_1->Value).field0_0x0._s_0.Y;
  dVar1 = (param_1->Value).field0_0x0._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (param_1->Value).field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
  return __return_storage_ptr__;
}

// Conv_InputActionValueToBool @ 14a6d6c30

bool __cdecl UEnhancedInputLibrary::Conv_InputActionValueToBool(FInputActionValue *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar1 = (param_1->Value).field0_0x0._s_0.X;
  dVar2 = (param_1->Value).field0_0x0._s_0.Y;
  dVar3 = (param_1->Value).field0_0x0._s_0.Z;
  return __real_3e45798ec0000000 <= dVar2 * dVar2 + dVar1 * dVar1 + dVar3 * dVar3;
}

// Conv_InputActionValueToString @ 14a6d6c70

FString * __cdecl
UEnhancedInputLibrary::Conv_InputActionValueToString
          (FString *__return_storage_ptr__,FInputActionValue *param_1)

{
  FInputActionValue::ToString(param_1,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// Conv_TriggerEventValueToString @ 14a6d6ca0

FString * __cdecl
UEnhancedInputLibrary::Conv_TriggerEventValueToString
          (FString *__return_storage_ptr__,ETriggerEvent param_1)

{
  UE::Input::LexToString(__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// FlushPlayerInput @ 14a6dd690

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl UEnhancedInputLibrary::FlushPlayerInput(APlayerController *param_1)

{
  if (param_1 != (APlayerController *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014a6dd698. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1->_padding_ + 0xdb0))();
    return;
  }
  return;
}

// ForEachSubsystem @ 14a6dde00

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __cdecl
UEnhancedInputLibrary::ForEachSubsystem
          (TFunctionRef<void___cdecl(IEnhancedInputSubsystemInterface_*)> *param_1)

{
  UObjectBaseUtility *pUVar1;
  code *pcVar2;
  bool bVar3;
  EInternalObjectFlags EVar4;
  uint uVar5;
  UClass *pUVar6;
  void *pvVar7;
  longlong lVar8;
  void *local_res10;
  void *local_res18 [2];
  TObjectIterator<UEnhancedInputWorldSubsystem> local_48;
  TObjectIterator<UEnhancedInputLocalPlayerSubsystem> local_30;
  
  pUVar6 = UEnhancedInputDeveloperSettings::StaticClass();
  if ((pUVar6->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(pUVar6);
  }
  if ((*(byte *)((pUVar6->ClassDefaultObject).field0_0x0.DebugPtr + 6) & 0x20) != 0) {
    local_48.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_48.ObjectArray.ArrayNum = 0;
    local_48.ObjectArray.ArrayMax = 0;
    local_48.Index = 0xffffffff;
    EVar4 = UE::GetAsyncLoadingInternalFlagsExclusion();
    pUVar6 = UEnhancedInputWorldSubsystem::StaticClass();
    GetObjectsOfClass(pUVar6,&local_48.ObjectArray,true,RF_ClassDefaultObject,
                      EVar4 | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted));
    while( true ) {
      TObjectIterator<UEnhancedInputWorldSubsystem>::Advance(&local_48);
      lVar8 = (longlong)local_48.Index;
      if ((local_48.Index < 0) || (local_48.ObjectArray.ArrayNum <= local_48.Index)) break;
      uVar5 = 0;
      if (local_48.Index < local_48.ObjectArray.ArrayNum) {
        uVar5 = (uint)~local_48.Index >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pUVar1 = *(UObjectBaseUtility **)(local_48.ObjectArray.AllocatorInstance.Data + lVar8 * 8);
      pvVar7 = (void *)0x0;
      if (pUVar1 != (UObjectBaseUtility *)0x0) {
        pUVar6 = Z_Construct_UClass_UEnhancedInputSubsystemInterface_NoRegister();
        pvVar7 = UObjectBaseUtility::GetInterfaceAddress(pUVar1,pUVar6);
      }
      local_res10 = pvVar7;
      (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,&local_res10);
    }
    if (local_48.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.ObjectArray.AllocatorInstance.Data);
    }
  }
  local_30.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_30.ObjectArray.ArrayNum = 0;
  local_30.ObjectArray.ArrayMax = 0;
  local_30.Index = 0xffffffff;
  EVar4 = UE::GetAsyncLoadingInternalFlagsExclusion();
  pUVar6 = UEnhancedInputLocalPlayerSubsystem::StaticClass();
  GetObjectsOfClass(pUVar6,&local_30.ObjectArray,true,RF_ClassDefaultObject,
                    EVar4 | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted));
  while( true ) {
    TObjectIterator<UEnhancedInputLocalPlayerSubsystem>::Advance(&local_30);
    lVar8 = (longlong)local_30.Index;
    if ((local_30.Index < 0) || (local_30.ObjectArray.ArrayNum <= local_30.Index)) {
      if (local_30.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_30.ObjectArray.AllocatorInstance.Data);
      }
      return;
    }
    uVar5 = 0;
    if (local_30.Index < local_30.ObjectArray.ArrayNum) {
      uVar5 = (uint)~local_30.Index >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) break;
    pUVar1 = *(UObjectBaseUtility **)(local_30.ObjectArray.AllocatorInstance.Data + lVar8 * 8);
    pvVar7 = (void *)0x0;
    if (pUVar1 != (UObjectBaseUtility *)0x0) {
      pUVar6 = Z_Construct_UClass_UEnhancedInputSubsystemInterface_NoRegister();
      pvVar7 = UObjectBaseUtility::GetInterfaceAddress(pUVar1,pUVar6);
    }
    local_res18[0] = pvVar7;
    (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,local_res18);
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

// GetBoundActionValue @ 14a6de9f0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FInputActionValue * __cdecl
UEnhancedInputLibrary::GetBoundActionValue
          (FInputActionValue *__return_storage_ptr__,AActor *param_1,UInputAction *param_2)

{
  TObjectPtr<UInputComponent> *this;
  double dVar1;
  double dVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  UClass *pUVar6;
  TVector<double>_u_0 *pTVar7;
  undefined1 local_res10 [8];
  TVector<double>_u_0 local_28;
  EInputActionValueType EStack_10;
  
  if (param_1 == (AActor *)0x0) {
    if (1 < (byte)LogEnhancedInput._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogEnhancedInput);
    }
    if (param_2 != (UInputAction *)0x0) goto LAB_14a6deaf3;
  }
  else if (param_2 != (UInputAction *)0x0) {
    this = &param_1->InputComponent;
    if ((this->field0_0x0).DebugPtr != (UInputComponent *)0x0) {
      pUVar6 = UEnhancedInputComponent::StaticClass();
      bVar5 = FObjectPtr::IsA((FObjectPtr *)this,pUVar6);
      if ((bVar5) &&
         ((UEnhancedInputComponent *)(this->field0_0x0).DebugPtr != (UEnhancedInputComponent *)0x0))
      {
        pTVar7 = (TVector<double>_u_0 *)
                 UEnhancedInputComponent::GetBoundActionValue
                           ((UEnhancedInputComponent *)(this->field0_0x0).DebugPtr,
                            (FInputActionValue *)&local_28._s_0,param_2);
        goto LAB_14a6dea95;
      }
    }
    EStack_10 = param_2->ValueType;
    local_28._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    local_28._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_28._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    if ((EStack_10 == Boolean) || (EStack_10 == Axis1D)) {
      local_28._s_0.Y = 0.0;
LAB_14a6dea8a:
      local_28._s_0.Z = 0.0;
    }
    else if (EStack_10 == Axis2D) goto LAB_14a6dea8a;
    pTVar7 = &local_28;
LAB_14a6dea95:
    dVar1 = (pTVar7->_s_0).Y;
    dVar2 = (pTVar7->_s_0).Z;
    uVar3 = pTVar7->XYZ[3];
    (__return_storage_ptr__->Value).field0_0x0._s_0.X =
         (((TVector<double> *)&(pTVar7->_s_0).X)->field0_0x0)._s_0.X;
    (__return_storage_ptr__->Value).field0_0x0._s_0.Y = dVar1;
    (__return_storage_ptr__->Value).field0_0x0._s_0.Z = dVar2;
    *(undefined8 *)&__return_storage_ptr__->ValueType = uVar3;
    return __return_storage_ptr__;
  }
  if (1 < (byte)LogEnhancedInput._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogEnhancedInput);
  }
LAB_14a6deaf3:
  `UEnhancedInputLibrary::GetBoundActionValue'::__l7::<lambda_1>::operator()(local_res10);
  *(undefined4 *)&__return_storage_ptr__->field_0x19 = 0;
  *(undefined2 *)&__return_storage_ptr__->field_0x1d = 0;
  __return_storage_ptr__->field_0x1f = 0;
  uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  __return_storage_ptr__->ValueType = Boolean;
  (__return_storage_ptr__->Value).field0_0x0._s_0.X = (double)uVar3;
  (__return_storage_ptr__->Value).field0_0x0._s_0.Y = (double)uVar4;
  (__return_storage_ptr__->Value).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  return __return_storage_ptr__;
}

// GetMappingName @ 14a6dfc70

FName __cdecl UEnhancedInputLibrary::GetMappingName(FEnhancedActionKeyMapping *param_1)

{
  UPlayerMappableKeySettings *pUVar1;
  FEnhancedActionKeyMapping *in_RDX;
  
  pUVar1 = FEnhancedActionKeyMapping::GetPlayerMappableKeySettings(in_RDX);
  if (pUVar1 != (UPlayerMappableKeySettings *)0x0) {
    pUVar1 = FEnhancedActionKeyMapping::GetPlayerMappableKeySettings(in_RDX);
    if (pUVar1 != (UPlayerMappableKeySettings *)0x0) {
      (**(code **)(pUVar1->_padding_ + 0x2b0))(pUVar1,param_1);
      return (FName)param_1;
    }
  }
  (param_1->Triggers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  return (FName)param_1;
}

// GetPlayerMappableKeySettings @ 14a6e03f0

UPlayerMappableKeySettings * __cdecl
UEnhancedInputLibrary::GetPlayerMappableKeySettings(FEnhancedActionKeyMapping *param_1)

{
  UInputAction *pUVar1;
  UPlayerMappableKeySettings *pUVar2;
  
  if (param_1->SettingBehavior != InheritSettingsFromAction) {
    if (param_1->SettingBehavior != OverrideSettings) {
      return (UPlayerMappableKeySettings *)0x0;
    }
    return (param_1->PlayerMappableKeySettings).field0_0x0.DebugPtr;
  }
  pUVar1 = (param_1->Action).field0_0x0.DebugPtr;
  pUVar2 = (UPlayerMappableKeySettings *)0x0;
  if (((pUVar1 != (UInputAction *)0x0) &&
      (pUVar2 = (pUVar1->PlayerMappableKeySettings).field0_0x0.DebugPtr,
      UE::GC::GIsIncrementalReachabilityPending)) && (pUVar2 != (UPlayerMappableKeySettings *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
    return pUVar2;
  }
  return pUVar2;
}

// GetPrivateStaticClass @ 14a6e08b0

UClass * __cdecl UEnhancedInputLibrary::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEnhancedInputLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EnhancedInput",L"EnhancedInputLibrary",
               &Z_Registration_Info_UClass_UEnhancedInputLibrary.InnerSingleton,
               StaticRegisterNativesUEnhancedInputLibrary,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UEnhancedInputLibrary>,
               InternalVTableHelperCtorCaller<UEnhancedInputLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEnhancedInputLibrary.InnerSingleton;
}

// IsActionKeyMappingPlayerMappable @ 14a6e57e0

bool __cdecl
UEnhancedInputLibrary::IsActionKeyMappingPlayerMappable(FEnhancedActionKeyMapping *param_1)

{
  UPlayerMappableKeySettings *pUVar1;
  
  pUVar1 = FEnhancedActionKeyMapping::GetPlayerMappableKeySettings(param_1);
  return pUVar1 != (UPlayerMappableKeySettings *)0x0;
}

// MakeInputActionValueOfType @ 14a6e6640

FInputActionValue * __cdecl
UEnhancedInputLibrary::MakeInputActionValueOfType
          (FInputActionValue *__return_storage_ptr__,double param_1,double param_2,double param_3,
          EInputActionValueType param_4)

{
  (__return_storage_ptr__->Value).field0_0x0._s_0.X = param_1;
  (__return_storage_ptr__->Value).field0_0x0._s_0.Y = param_2;
  (__return_storage_ptr__->Value).field0_0x0._s_0.Z = param_3;
  __return_storage_ptr__->ValueType = param_4;
  if ((param_4 == Boolean) || (param_4 == Axis1D)) {
    (__return_storage_ptr__->Value).field0_0x0._s_0.Y = 0.0;
  }
  else if (param_4 != Axis2D) {
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->Value).field0_0x0._s_0.Z = 0.0;
  return __return_storage_ptr__;
}

// RequestRebuildControlMappingsUsingContext @ 14a6f3a40

void __cdecl
UEnhancedInputLibrary::RequestRebuildControlMappingsUsingContext
          (UInputMappingContext *param_1,bool param_2)

{
  UInputMappingContext *local_28;
  undefined1 local_20;
  code *local_18;
  UInputMappingContext **local_10;
  
  local_10 = &local_28;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`UEnhancedInputLibrary::RequestRebuildControlMappingsUsingContext'::__l2::<lambda_1>,void,IEnhancedInputSubsystemInterface_*>
             ::Call;
  local_28 = param_1;
  local_20 = param_2;
  ForEachSubsystem((TFunctionRef<void___cdecl(IEnhancedInputSubsystemInterface_*)> *)&local_18);
  return;
}

// StaticRegisterNativesUEnhancedInputLibrary @ 14a6fb3e0

void __cdecl UEnhancedInputLibrary::StaticRegisterNativesUEnhancedInputLibrary(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0xe;
  local_18.DataPtr = Z_Construct_UClass_UEnhancedInputLibrary_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execBreakInputActionValue @ 14a7036a0

void __cdecl
UEnhancedInputLibrary::execBreakInputActionValue(UObject *param_1,FFrame *param_2,void *param_3)

{
  double *pdVar1;
  FProperty *pFVar2;
  uchar *puVar3;
  uchar *puVar4;
  double *pdVar5;
  double *pdVar6;
  uchar local_res10 [16];
  double local_res20;
  double local_88;
  uchar local_80 [40];
  double local_58;
  double dStack_50;
  undefined8 local_48;
  uchar uStack_40;
  
  uStack_40 = '\0';
  local_58 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  dStack_50 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_48 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  local_res20 = 0.0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  pdVar1 = (double *)param_2->MostRecentPropertyAddress;
  local_88 = 0.0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  pdVar6 = &local_res20;
  if (pdVar1 != (double *)0x0) {
    pdVar6 = pdVar1;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_88,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_88);
  }
  pdVar1 = (double *)param_2->MostRecentPropertyAddress;
  local_80[0] = '\0';
  local_80[1] = '\0';
  local_80[2] = '\0';
  local_80[3] = '\0';
  local_80[4] = '\0';
  local_80[5] = '\0';
  local_80[6] = '\0';
  local_80[7] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  pdVar5 = &local_88;
  if (pdVar1 != (double *)0x0) {
    pdVar5 = pdVar1;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_80,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_80);
  }
  puVar3 = param_2->MostRecentPropertyAddress;
  local_res10[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  puVar4 = local_80;
  if (puVar3 != (uchar *)0x0) {
    puVar4 = puVar3;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  puVar3 = local_res10;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar3 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *pdVar6 = local_58;
  *pdVar5 = dStack_50;
  *puVar4 = (uchar)local_48;
  puVar4[1] = local_48._1_1_;
  puVar4[2] = local_48._2_1_;
  puVar4[3] = local_48._3_1_;
  puVar4[4] = local_48._4_1_;
  puVar4[5] = local_48._5_1_;
  puVar4[6] = local_48._6_1_;
  puVar4[7] = local_48._7_1_;
  *puVar3 = uStack_40;
  return;
}

// execConv_InputActionValueToAxis1D @ 14a7038e0

void __cdecl
UEnhancedInputLibrary::execConv_InputActionValueToAxis1D
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  double local_28;
  double local_20;
  double dStack_18;
  undefined1 local_10;
  
  local_20 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  dStack_18 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_10 = 0;
  local_28 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(double *)param_3 = (double)(float)local_28;
  return;
}

// execConv_InputActionValueToAxis2D @ 14a703980

void __cdecl
UEnhancedInputLibrary::execConv_InputActionValueToAxis2D
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  double local_28;
  double dStack_20;
  double local_18;
  undefined1 local_10;
  
  local_18 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_28 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  dStack_20 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_10 = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(double *)param_3 = local_28;
  *(double *)((longlong)param_3 + 8) = dStack_20;
  return;
}

// execConv_InputActionValueToAxis3D @ 14a703a20

void __cdecl
UEnhancedInputLibrary::execConv_InputActionValueToAxis3D
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  double local_28;
  double dStack_20;
  double local_18;
  undefined1 local_10;
  
  local_10 = 0;
  local_28 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  dStack_20 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_18 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(double *)param_3 = local_28;
  *(double *)((longlong)param_3 + 8) = dStack_20;
  *(double *)((longlong)param_3 + 0x10) = local_18;
  return;
}

// execConv_InputActionValueToBool @ 14a703ad0

void __cdecl
UEnhancedInputLibrary::execConv_InputActionValueToBool
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  double local_28;
  double dStack_20;
  double local_18;
  undefined1 local_10;
  
  local_10 = 0;
  local_28 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  dStack_20 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_18 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(bool *)param_3 =
       __real_3e45798ec0000000 <= dStack_20 * dStack_20 + local_28 * local_28 + local_18 * local_18;
  return;
}

// execConv_InputActionValueToString @ 14a703ba0

void __cdecl
UEnhancedInputLibrary::execConv_InputActionValueToString
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FString local_58;
  double local_48;
  double dStack_40;
  double local_38;
  undefined1 uStack_30;
  undefined7 uStack_2f;
  TVector<double>_u_0 local_28;
  undefined8 uStack_10;
  
  uStack_30 = 0;
  local_48 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  dStack_40 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_38 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  uStack_10 = CONCAT71(uStack_2f,uStack_30);
  local_28._s_0.X = local_48;
  local_28._s_0.Y = dStack_40;
  local_28._s_0.Z = local_38;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FInputActionValue::ToString((FInputActionValue *)&local_28._s_0,&local_58);
  if (param_3 != &local_58) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_58.Data.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 8) = local_58.Data.ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = local_58.Data.ArrayMax;
    local_58.Data.ArrayNum = 0;
    local_58.Data.ArrayMax = 0;
    local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  return;
}

// execConv_TriggerEventValueToString @ 14a703cb0

void __cdecl
UEnhancedInputLibrary::execConv_TriggerEventValueToString
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  byte bVar2;
  FString *pFVar3;
  int iVar4;
  int iVar5;
  byte local_res10 [8];
  FString local_48;
  FString local_38;
  FString local_28;
  FString local_18;
  
  local_res10[0] = 0;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  bVar2 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10[0] == 0) {
    ::FString::FString(&local_48,L"None");
  }
  else {
    ::FString::FString(&local_38,L"");
    iVar4 = 0;
    if ((bVar2 & 1) != 0) {
      pFVar3 = ::FString::FString(&local_18,L"Triggered");
      ::FString::ConcatFC(&local_28,pFVar3,L"|");
      iVar5 = local_28.Data.ArrayNum + -1;
      if (local_28.Data.ArrayNum == 0) {
        iVar5 = iVar4;
      }
      ::FString::AppendChars(&local_38,(wchar_t *)local_28.Data.AllocatorInstance.Data,iVar5);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
    if ((bVar2 & 2) != 0) {
      pFVar3 = ::FString::FString(&local_18,L"Started");
      ::FString::ConcatFC(&local_28,pFVar3,L"|");
      iVar5 = local_28.Data.ArrayNum + -1;
      if (local_28.Data.ArrayNum == 0) {
        iVar5 = iVar4;
      }
      ::FString::AppendChars(&local_38,(wchar_t *)local_28.Data.AllocatorInstance.Data,iVar5);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
    if ((bVar2 & 4) != 0) {
      pFVar3 = ::FString::FString(&local_18,L"Ongoing");
      ::FString::ConcatFC(&local_28,pFVar3,L"|");
      iVar5 = local_28.Data.ArrayNum + -1;
      if (local_28.Data.ArrayNum == 0) {
        iVar5 = iVar4;
      }
      ::FString::AppendChars(&local_38,(wchar_t *)local_28.Data.AllocatorInstance.Data,iVar5);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
    if ((bVar2 & 8) != 0) {
      pFVar3 = ::FString::FString(&local_18,L"Canceled");
      ::FString::ConcatFC(&local_28,pFVar3,L"|");
      iVar5 = local_28.Data.ArrayNum + -1;
      if (local_28.Data.ArrayNum == 0) {
        iVar5 = iVar4;
      }
      ::FString::AppendChars(&local_38,(wchar_t *)local_28.Data.AllocatorInstance.Data,iVar5);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
    if ((bVar2 & 0x10) != 0) {
      pFVar3 = ::FString::FString(&local_18,L"Completed");
      ::FString::ConcatFC(&local_28,pFVar3,L"|");
      iVar5 = local_28.Data.ArrayNum + -1;
      if (local_28.Data.ArrayNum == 0) {
        iVar5 = iVar4;
      }
      ::FString::AppendChars(&local_38,(wchar_t *)local_28.Data.AllocatorInstance.Data,iVar5);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
    ::FString::RemoveFromEnd(&local_38,L"|",1,IgnoreCase);
    local_48.Data.ArrayMax = local_38.Data.ArrayMax;
    local_48.Data.ArrayNum = local_38.Data.ArrayNum;
    local_48.Data.AllocatorInstance.Data = local_38.Data.AllocatorInstance.Data;
  }
  if (param_3 != &local_48) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_48.Data.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 8) = local_48.Data.ArrayNum;
    local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)param_3 + 0xc) = local_48.Data.ArrayMax;
    local_48.Data.ArrayNum = 0;
    local_48.Data.ArrayMax = 0;
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return;
}

// execFlushPlayerInput @ 14a704340

void __cdecl
UEnhancedInputLibrary::execFlushPlayerInput(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong *local_res10 [3];
  
  local_res10[0] = (longlong *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10[0] != (longlong *)0x0) {
    (**(code **)(*local_res10[0] + 0xdb0))();
  }
  return;
}

// execGetBoundActionValue @ 14a704650

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UEnhancedInputLibrary::execGetBoundActionValue(UObject *param_1,FFrame *param_2,void *param_3)

{
  EInputActionValueType EVar1;
  FProperty *pFVar2;
  UEnhancedInputComponent *this;
  UInputAction *pUVar3;
  longlong lVar4;
  bool bVar5;
  UClass *pUVar6;
  FInputActionValue *pFVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined1 local_res10 [8];
  UInputAction *local_res18;
  longlong local_res20;
  FInputActionValue local_48;
  
  local_res20 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res18 = (UInputAction *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  lVar4 = local_res20;
  pUVar3 = local_res18;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res20 == 0) {
    if (1 < (byte)LogEnhancedInput._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogEnhancedInput);
    }
    if (pUVar3 == (UInputAction *)0x0) goto LAB_14a7047ef;
  }
  else {
    if (local_res18 != (UInputAction *)0x0) {
      if (*(longlong *)(local_res20 + 0x178) != 0) {
        pUVar6 = UEnhancedInputComponent::StaticClass();
        bVar5 = FObjectPtr::IsA((FObjectPtr *)(lVar4 + 0x178),pUVar6);
        if ((bVar5) &&
           (this = *(UEnhancedInputComponent **)(lVar4 + 0x178),
           this != (UEnhancedInputComponent *)0x0)) {
          pFVar7 = UEnhancedInputComponent::GetBoundActionValue(this,&local_48,pUVar3);
          local_48.Value.field0_0x0._16_4_ =
               *(undefined4 *)((longlong)&(pFVar7->Value).field0_0x0 + 0x10);
          local_48.Value.field0_0x0._20_4_ =
               *(undefined4 *)((longlong)&(pFVar7->Value).field0_0x0 + 0x14);
          local_48.ValueType = pFVar7->ValueType;
          local_48._25_3_ = *(undefined3 *)&pFVar7->field_0x19;
          uVar8 = *(undefined4 *)&pFVar7->field_0x1c;
          uVar9 = *(undefined4 *)&(pFVar7->Value).field0_0x0;
          uVar10 = *(undefined4 *)((longlong)&(pFVar7->Value).field0_0x0 + 4);
          uVar11 = *(undefined4 *)((longlong)&(pFVar7->Value).field0_0x0 + 8);
          uVar12 = *(undefined4 *)((longlong)&(pFVar7->Value).field0_0x0 + 0xc);
          goto LAB_14a704842;
        }
      }
      local_48.Value.field0_0x0._8_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
      local_48.Value.field0_0x0._12_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
      EVar1 = pUVar3->ValueType;
      local_48.ValueType = EVar1;
      uVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
      uVar10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
      if ((EVar1 == Boolean) || (EVar1 == Axis1D)) {
        local_48.Value.field0_0x0._8_4_ = 0;
        local_48.Value.field0_0x0._12_4_ = 0;
      }
      else if (EVar1 != Axis2D) {
        local_48.Value.field0_0x0._16_4_ =
             SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
        local_48.Value.field0_0x0._20_4_ =
             (undefined4)
             ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
        uVar8 = CONCAT13(local_48._31_1_,CONCAT21(local_48._29_2_,local_48._28_1_));
        uVar11 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
        uVar12 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
        goto LAB_14a704842;
      }
      local_48.Value.field0_0x0._16_4_ = 0;
      local_48.Value.field0_0x0._20_4_ = 0;
      uVar8 = CONCAT13(local_48._31_1_,CONCAT21(local_48._29_2_,local_48._28_1_));
      uVar11 = local_48.Value.field0_0x0._8_4_;
      uVar12 = local_48.Value.field0_0x0._12_4_;
      goto LAB_14a704842;
    }
LAB_14a7047ef:
    if (1 < (byte)LogEnhancedInput._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogEnhancedInput);
    }
  }
  `UEnhancedInputLibrary::GetBoundActionValue'::__l7::<lambda_1>::operator()(local_res10);
  local_48.ValueType = Boolean;
  local_48._25_3_ = 0;
  uVar8 = 0;
  local_48.Value.field0_0x0._16_4_ =
       SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
  local_48.Value.field0_0x0._20_4_ =
       (undefined4)((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
  uVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
  uVar10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
  uVar11 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
  uVar12 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
LAB_14a704842:
  *(undefined4 *)param_3 = uVar9;
  *(undefined4 *)((longlong)param_3 + 4) = uVar10;
  *(undefined4 *)((longlong)param_3 + 8) = uVar11;
  *(undefined4 *)((longlong)param_3 + 0xc) = uVar12;
  *(undefined4 *)((longlong)param_3 + 0x10) = local_48.Value.field0_0x0._16_4_;
  *(undefined4 *)((longlong)param_3 + 0x14) = local_48.Value.field0_0x0._20_4_;
  *(undefined4 *)((longlong)param_3 + 0x18) = local_48._24_4_;
  *(undefined4 *)((longlong)param_3 + 0x1c) = uVar8;
  return;
}

// execGetMappingName @ 14a704fc0

void __cdecl
UEnhancedInputLibrary::execGetMappingName(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  atomic<int> *paVar2;
  UPlayerMappableKeySettings *pUVar3;
  FEnhancedActionKeyMapping *this;
  undefined8 local_res10;
  FEnhancedActionKeyMapping local_68;
  
  local_68.Key.KeyDetails.SharedReferenceCount.ReferenceController =
       EKeys::Invalid.KeyDetails.SharedReferenceCount.ReferenceController;
  local_68.Key.KeyDetails.Object = EKeys::Invalid.KeyDetails.Object;
  local_68.Key.KeyName = EKeys::Invalid.KeyName;
  if (EKeys::Invalid.KeyDetails.SharedReferenceCount.ReferenceController ==
      (TReferenceControllerBase<1> *)0x0) {
    paVar2 = (atomic<int> *)&DAT_00000008;
  }
  else {
    paVar2 = &(EKeys::Invalid.KeyDetails.SharedReferenceCount.ReferenceController)->
              SharedReferenceCount;
    LOCK();
    *paVar2 = (atomic<int>)((int)*paVar2 + 1);
    UNLOCK();
  }
  local_68.Triggers.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.Triggers.ArrayNum = 0;
  local_68.Triggers.ArrayMax = 0;
  local_68.Modifiers.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.Modifiers.ArrayNum = 0;
  local_68.Modifiers.ArrayMax = 0;
  local_68.Action.field0_0x0.DebugPtr = (TObjectPtr<UInputAction_const_>_u_0)0x0;
  if (local_68.Key.KeyDetails.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    *paVar2 = (atomic<int>)((int)*paVar2 + 1);
    UNLOCK();
  }
  local_68.bHasAlwaysTickTrigger = '\0';
  local_68.bShouldBeIgnored = '\0';
  local_68.SettingBehavior = InheritSettingsFromAction;
  local_68.PlayerMappableKeySettings.field0_0x0.DebugPtr =
       (TObjectPtr<UPlayerMappableKeySettings>_u_0)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.Key.KeyDetails.SharedReferenceCount.ReferenceController);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  this = &local_68;
  if ((FEnhancedActionKeyMapping *)param_2->MostRecentPropertyAddress !=
      (FEnhancedActionKeyMapping *)0x0) {
    this = (FEnhancedActionKeyMapping *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar3 = FEnhancedActionKeyMapping::GetPlayerMappableKeySettings(this);
  if (pUVar3 != (UPlayerMappableKeySettings *)0x0) {
    pUVar3 = FEnhancedActionKeyMapping::GetPlayerMappableKeySettings(this);
    if (pUVar3 != (UPlayerMappableKeySettings *)0x0) {
      (**(code **)(pUVar3->_padding_ + 0x2b0))(pUVar3,&local_res10,this);
      goto LAB_14a7050d4;
    }
  }
  local_res10 = 0;
LAB_14a7050d4:
  *(undefined8 *)param_3 = local_res10;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.Key.KeyDetails.SharedReferenceCount.ReferenceController);
  if (local_68.Modifiers.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Modifiers.AllocatorInstance.Data);
  }
  if (local_68.Triggers.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Triggers.AllocatorInstance.Data);
  }
  return;
}

// execGetPlayerMappableKeySettings @ 14a705290

void __cdecl
UEnhancedInputLibrary::execGetPlayerMappableKeySettings
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  atomic<int> *paVar2;
  UPlayerMappableKeySettings *pUVar3;
  FEnhancedActionKeyMapping *this;
  FEnhancedActionKeyMapping local_58;
  
  local_58.Key.KeyDetails.SharedReferenceCount.ReferenceController =
       EKeys::Invalid.KeyDetails.SharedReferenceCount.ReferenceController;
  local_58.Key.KeyDetails.Object = EKeys::Invalid.KeyDetails.Object;
  local_58.Key.KeyName = EKeys::Invalid.KeyName;
  if (EKeys::Invalid.KeyDetails.SharedReferenceCount.ReferenceController ==
      (TReferenceControllerBase<1> *)0x0) {
    paVar2 = (atomic<int> *)&DAT_00000008;
  }
  else {
    paVar2 = &(EKeys::Invalid.KeyDetails.SharedReferenceCount.ReferenceController)->
              SharedReferenceCount;
    LOCK();
    *paVar2 = (atomic<int>)((int)*paVar2 + 1);
    UNLOCK();
  }
  local_58.Triggers.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.Triggers.ArrayNum = 0;
  local_58.Triggers.ArrayMax = 0;
  local_58.Modifiers.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.Modifiers.ArrayNum = 0;
  local_58.Modifiers.ArrayMax = 0;
  local_58.Action.field0_0x0.DebugPtr = (TObjectPtr<UInputAction_const_>_u_0)0x0;
  if (local_58.Key.KeyDetails.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    *paVar2 = (atomic<int>)((int)*paVar2 + 1);
    UNLOCK();
  }
  local_58.bHasAlwaysTickTrigger = '\0';
  local_58.bShouldBeIgnored = '\0';
  local_58.SettingBehavior = InheritSettingsFromAction;
  local_58.PlayerMappableKeySettings.field0_0x0.DebugPtr =
       (TObjectPtr<UPlayerMappableKeySettings>_u_0)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_58.Key.KeyDetails.SharedReferenceCount.ReferenceController);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  this = &local_58;
  if ((FEnhancedActionKeyMapping *)param_2->MostRecentPropertyAddress !=
      (FEnhancedActionKeyMapping *)0x0) {
    this = (FEnhancedActionKeyMapping *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar3 = FEnhancedActionKeyMapping::GetPlayerMappableKeySettings(this);
  *(UPlayerMappableKeySettings **)param_3 = pUVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_58.Key.KeyDetails.SharedReferenceCount.ReferenceController);
  if (local_58.Modifiers.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Modifiers.AllocatorInstance.Data);
  }
  if (local_58.Triggers.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Triggers.AllocatorInstance.Data);
  }
  return;
}

// execIsActionKeyMappingPlayerMappable @ 14a705fa0

void __cdecl
UEnhancedInputLibrary::execIsActionKeyMappingPlayerMappable
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  atomic<int> *paVar2;
  UPlayerMappableKeySettings *pUVar3;
  FEnhancedActionKeyMapping *this;
  FEnhancedActionKeyMapping local_58;
  
  local_58.Key.KeyDetails.SharedReferenceCount.ReferenceController =
       EKeys::Invalid.KeyDetails.SharedReferenceCount.ReferenceController;
  local_58.Key.KeyDetails.Object = EKeys::Invalid.KeyDetails.Object;
  local_58.Key.KeyName = EKeys::Invalid.KeyName;
  if (EKeys::Invalid.KeyDetails.SharedReferenceCount.ReferenceController ==
      (TReferenceControllerBase<1> *)0x0) {
    paVar2 = (atomic<int> *)&DAT_00000008;
  }
  else {
    paVar2 = &(EKeys::Invalid.KeyDetails.SharedReferenceCount.ReferenceController)->
              SharedReferenceCount;
    LOCK();
    *paVar2 = (atomic<int>)((int)*paVar2 + 1);
    UNLOCK();
  }
  local_58.Triggers.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.Triggers.ArrayNum = 0;
  local_58.Triggers.ArrayMax = 0;
  local_58.Modifiers.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.Modifiers.ArrayNum = 0;
  local_58.Modifiers.ArrayMax = 0;
  local_58.Action.field0_0x0.DebugPtr = (TObjectPtr<UInputAction_const_>_u_0)0x0;
  if (local_58.Key.KeyDetails.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    *paVar2 = (atomic<int>)((int)*paVar2 + 1);
    UNLOCK();
  }
  local_58.bHasAlwaysTickTrigger = '\0';
  local_58.bShouldBeIgnored = '\0';
  local_58.SettingBehavior = InheritSettingsFromAction;
  local_58.PlayerMappableKeySettings.field0_0x0.DebugPtr =
       (TObjectPtr<UPlayerMappableKeySettings>_u_0)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_58.Key.KeyDetails.SharedReferenceCount.ReferenceController);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  this = &local_58;
  if ((FEnhancedActionKeyMapping *)param_2->MostRecentPropertyAddress !=
      (FEnhancedActionKeyMapping *)0x0) {
    this = (FEnhancedActionKeyMapping *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar3 = FEnhancedActionKeyMapping::GetPlayerMappableKeySettings(this);
  *(bool *)param_3 = pUVar3 != (UPlayerMappableKeySettings *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_58.Key.KeyDetails.SharedReferenceCount.ReferenceController);
  if (local_58.Modifiers.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Modifiers.AllocatorInstance.Data);
  }
  if (local_58.Triggers.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Triggers.AllocatorInstance.Data);
  }
  return;
}

// execMakeInputActionValueOfType @ 14a7064b0

void __cdecl
UEnhancedInputLibrary::execMakeInputActionValueOfType
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  char local_res10 [8];
  undefined8 local_res18;
  undefined8 local_res20;
  undefined8 local_48;
  undefined8 local_30;
  undefined7 uStack_27;
  
  local_48 = 0;
  FDoubleProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  local_res18 = 0;
  FDoubleProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_res20 = 0;
  FDoubleProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10[0] = '\0';
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_30 = local_res20;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((local_res10[0] == '\0') || (local_res10[0] == '\x01')) {
    local_res18 = 0;
  }
  else if (local_res10[0] != '\x02') goto LAB_14a70662c;
  local_30 = 0;
LAB_14a70662c:
  *(undefined4 *)param_3 = (undefined4)local_48;
  *(undefined4 *)((longlong)param_3 + 4) = local_48._4_4_;
  *(int *)((longlong)param_3 + 8) = (int)local_res18;
  *(int *)((longlong)param_3 + 0xc) = (int)((ulonglong)local_res18 >> 0x20);
  *(undefined8 *)((longlong)param_3 + 0x10) = local_30;
  *(ulonglong *)((longlong)param_3 + 0x18) = CONCAT71(uStack_27,local_res10[0]);
  return;
}

// execRequestRebuildControlMappingsUsingContext @ 14a707a30

void __cdecl
UEnhancedInputLibrary::execRequestRebuildControlMappingsUsingContext
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res10 [4];
  undefined8 local_res20;
  undefined8 local_28;
  undefined1 local_20;
  code *local_18;
  undefined8 *local_10;
  
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
  local_20 = local_res10[0] != 0;
  local_28 = local_res20;
  local_10 = &local_28;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`UEnhancedInputLibrary::RequestRebuildControlMappingsUsingContext'::__l2::<lambda_1>,void,IEnhancedInputSubsystemInterface_*>
             ::Call;
  ForEachSubsystem((TFunctionRef<void___cdecl(IEnhancedInputSubsystemInterface_*)> *)&local_18);
  return;
}

// operator() @ 1505529f0

bool __thiscall
`UEnhancedInputLibrary::GetBoundActionValue'::__l7::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<5762998413536788549>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<5762998413536788549>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

