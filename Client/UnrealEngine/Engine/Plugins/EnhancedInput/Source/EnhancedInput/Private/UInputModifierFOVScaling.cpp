// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: EnhancedInput
// Functions: 7

// StaticClass @ 14a6b69c0

UClass * __cdecl UInputModifierFOVScaling::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInputModifierFOVScaling.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EnhancedInput",L"InputModifierFOVScaling",
               &Z_Registration_Info_UClass_UInputModifierFOVScaling.InnerSingleton,
               StaticRegisterNativesUInputModifierFOVScaling,0x30,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Input",
               InternalConstructor<UInputModifierFOVScaling>,
               InternalVTableHelperCtorCaller<UInputModifierFOVScaling>,local_res8,
               UInputModifier::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInputModifierFOVScaling.InnerSingleton;
}

// UInputModifierFOVScaling @ 14a6ccbf0

UInputModifierFOVScaling * __thiscall
UInputModifierFOVScaling::UInputModifierFOVScaling
          (UInputModifierFOVScaling *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->FOVScale = 1.0;
  this->_padding_ = (longlong)&___7UInputModifierFOVScaling__6B_;
  this->FOVScalingType = Standard;
  return this;
}

// UInputModifierFOVScaling @ 14a6ccc30

UInputModifierFOVScaling * __thiscall
UInputModifierFOVScaling::UInputModifierFOVScaling
          (UInputModifierFOVScaling *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->FOVScale = 1.0;
  this->_padding_ = (longlong)&___7UInputModifierFOVScaling__6B_;
  this->FOVScalingType = Standard;
  return this;
}

// ~UInputModifierFOVScaling @ 14a6cf920

void __thiscall UInputModifierFOVScaling::~UInputModifierFOVScaling(UInputModifierFOVScaling *this)

{
  this->_padding_ = (longlong)&___7UInputModifier__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14a6e1300

UClass * __cdecl UInputModifierFOVScaling::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInputModifierFOVScaling.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EnhancedInput",L"InputModifierFOVScaling",
               &Z_Registration_Info_UClass_UInputModifierFOVScaling.InnerSingleton,
               StaticRegisterNativesUInputModifierFOVScaling,0x30,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Input",
               InternalConstructor<UInputModifierFOVScaling>,
               InternalVTableHelperCtorCaller<UInputModifierFOVScaling>,local_res8,
               UInputModifier::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInputModifierFOVScaling.InnerSingleton;
}

// ModifyRaw_Implementation @ 14a6e7710

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FInputActionValue * __thiscall
UInputModifierFOVScaling::ModifyRaw_Implementation
          (UInputModifierFOVScaling *this,FInputActionValue *__return_storage_ptr__,
          UEnhancedPlayerInput *param_1,FInputActionValue *param_2,float param_3)

{
  double dVar1;
  EFOVScalingType EVar2;
  APlayerCameraManager *pAVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  double dVar6;
  EInputActionValueType EVar7;
  undefined7 uVar8;
  bool bVar9;
  APlayerController *pAVar10;
  UClass *pUVar11;
  UEnum *this_00;
  FInputActionValue *pFVar12;
  float fVar13;
  double dVar14;
  float fVar15;
  FString local_48;
  wchar_t *local_38;
  int iStack_30;
  undefined4 uStack_2c;
  TStringView<wchar_t> local_28 [2];
  
  pAVar10 = UPlayerInput::GetOuterAPlayerController((UPlayerInput *)param_1);
  if (pAVar10 == (APlayerController *)0x0) {
    dVar1 = (param_2->Value).field0_0x0._s_0.Y;
    dVar6 = (param_2->Value).field0_0x0._s_0.Z;
    EVar7 = param_2->ValueType;
    uVar8 = *(undefined7 *)&param_2->field_0x19;
    (__return_storage_ptr__->Value).field0_0x0._s_0.X = (param_2->Value).field0_0x0._s_0.X;
    (__return_storage_ptr__->Value).field0_0x0._s_0.Y = dVar1;
    (__return_storage_ptr__->Value).field0_0x0._s_0.Z = dVar6;
    __return_storage_ptr__->ValueType = EVar7;
    *(undefined7 *)&__return_storage_ptr__->field_0x19 = uVar8;
    return __return_storage_ptr__;
  }
  pAVar3 = (pAVar10->PlayerCameraManager).field0_0x0.DebugPtr;
  fVar13 = __real_3f800000;
  if (pAVar3 != (APlayerCameraManager *)0x0) {
    fVar13 = (float)(**(code **)(pAVar3->_padding_ + 0x800))();
  }
  fVar15 = this->FOVScale;
  EVar2 = this->FOVScalingType;
  if (EVar2 == Standard) {
    if ((pAVar10->PlayerCameraManager).field0_0x0.DebugPtr == (APlayerCameraManager *)0x0)
    goto LAB_14a6e7877;
    fVar13 = tanf(fVar13 * __real_3c0efa35);
    fVar13 = fVar13 * ___real_3f988b62;
  }
  else if (EVar2 != UE4_BackCompat) {
    local_38 = L"EnhancedInput.EFovScalingType";
    iStack_30 = 0x1d;
    pUVar11 = Z_Construct_UClass_UEnum_NoRegister();
    local_28[0]._12_4_ = uStack_2c;
    local_28[0].Size = iStack_30;
    local_28[0].DataPtr = local_38;
    this_00 = (UEnum *)StaticFindObject(pUVar11,(UObject *)0x0,local_28,None);
    if (this_00 == (UEnum *)0x0) {
      UE::Logging::Private::BasicFatalLog
                ((FStaticBasicLogRecord *)
                 &`private:_static_class_FString___cdecl_UEnum::GetValueAsString_Internal(wchar_t_const*___ptr64,__int64)'
                  ::__l3::LOG_Static,(FLogCategoryBase *)&LogClass);
    }
    UEnum::GetNameStringByValue(this_00,&local_48,(ulonglong)EVar2);
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\EnhancedInput\\Source\\EnhancedInput\\Private\\InputModifiers.cpp"
                       ,0x188,L"Unsupported FOV scaling type \'%s\'");
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (bVar9) {
      pcVar4 = (code *)swi(3);
      pFVar12 = (FInputActionValue *)(*pcVar4)();
      return pFVar12;
    }
    goto LAB_14a6e7877;
  }
  fVar15 = fVar15 * fVar13;
LAB_14a6e7877:
  dVar1 = (param_2->Value).field0_0x0._s_0.Y;
  dVar6 = (param_2->Value).field0_0x0._s_0.Z;
  EVar7 = param_2->ValueType;
  uVar8 = *(undefined7 *)&param_2->field_0x19;
  (__return_storage_ptr__->Value).field0_0x0._s_0.X = (param_2->Value).field0_0x0._s_0.X;
  (__return_storage_ptr__->Value).field0_0x0._s_0.Y = dVar1;
  (__return_storage_ptr__->Value).field0_0x0._s_0.Z = dVar6;
  __return_storage_ptr__->ValueType = EVar7;
  *(undefined7 *)&__return_storage_ptr__->field_0x19 = uVar8;
  dVar14 = (double)fVar15;
  dVar6 = (__return_storage_ptr__->Value).field0_0x0._s_0.Y * dVar14;
  dVar1 = (__return_storage_ptr__->Value).field0_0x0._s_0.Z;
  auVar5._8_4_ = SUB84(dVar6,0);
  auVar5._0_8_ = (__return_storage_ptr__->Value).field0_0x0._s_0.X * dVar14;
  auVar5._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
  *(undefined1 (*) [16])&(__return_storage_ptr__->Value).field0_0x0 = auVar5;
  (__return_storage_ptr__->Value).field0_0x0._s_0.Z = dVar14 * dVar1;
  return __return_storage_ptr__;
}

// StaticRegisterNativesUInputModifierFOVScaling @ 14a6fb640

void __cdecl UInputModifierFOVScaling::StaticRegisterNativesUInputModifierFOVScaling(void)

{
  return;
}

