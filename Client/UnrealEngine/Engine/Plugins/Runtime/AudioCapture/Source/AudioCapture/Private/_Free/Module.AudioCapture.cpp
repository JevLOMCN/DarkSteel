// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioCapture
// Functions: 58

// `dynamic_initializer_for_'LogAudioCapture'' @ 1413c7280

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogAudioCapture__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogAudioCapture,L"LogAudioCapture",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogAudioCapture__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantAudioCapture'' @ 1413c72c0

void __cdecl _dynamic_initializer_for__ModuleRegistrantAudioCapture__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "AudioCapture";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"AudioCapture",0xc);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FAudioCaptureModule>::InitializeModule);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioCapture_Source_AudioCapture_Public_AudioCaptureBlueprintLibrary_h__Script_AudioCapture_668738136'' @ 1413c7310

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioCapture_Source_AudioCapture_Public_AudioCaptureBlueprintLibrary_h__Script_AudioCapture_668738136__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AudioCapture",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioCapture_Source_AudioCapture_Public_AudioCaptureBlueprintLibrary_h__Script_AudioCapture_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioCapture_Source_AudioCapture_Public_AudioCaptureBlueprintLibrary_h__Script_AudioCapture_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioCapture_Source_AudioCapture_Public_AudioCaptureComponent_h__Script_AudioCapture_987916544'' @ 1413c7360

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioCapture_Source_AudioCapture_Public_AudioCaptureComponent_h__Script_AudioCapture_987916544__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AudioCapture",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioCapture_Source_AudioCapture_Public_AudioCaptureComponent_h__Script_AudioCapture_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioCapture_Source_AudioCapture_Public_AudioCapture_h__Script_AudioCapture_3189496806'' @ 1413c73a0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioCapture_Source_AudioCapture_Public_AudioCapture_h__Script_AudioCapture_3189496806__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AudioCapture",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioCapture_Source_AudioCapture_Public_AudioCapture_h__Script_AudioCapture_Statics
             ::ClassInfo,2,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioCapture_Source_AudioCapture_Public_AudioCapture_h__Script_AudioCapture_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferPackage_UPackage__Script_AudioCapture'' @ 1413c73f0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferPackage_UPackage__Script_AudioCapture__(void)

{
  FPackageReloadVersionInfo local_res8 [4];
  
  local_res8[0].BodyHash = 0xa7b7bfc8;
  local_res8[0].DeclarationsHash = 0xbe9b9cb8;
  RegisterCompiledInInfo
            (Z_Construct_UPackage__Script_AudioCapture,L"/Script/AudioCapture",
             &Z_Registration_Info_UPackage__Script_AudioCapture,local_res8);
  return;
}

// Z_Construct_UDelegateFunction_AudioCapture_OnAudioInputDevicesObtained__DelegateSignature @ 14d0cd420

UFunction * __cdecl
Z_Construct_UDelegateFunction_AudioCapture_OnAudioInputDevicesObtained__DelegateSignature(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUDelegateFunction
              (&ReturnFunction,
               &Z_Construct_UDelegateFunction_AudioCapture_OnAudioInputDevicesObtained__DelegateSignature_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UPackage__Script_AudioCapture @ 14d0cd460

UPackage * __cdecl Z_Construct_UPackage__Script_AudioCapture(void)

{
  if (Z_Registration_Info_UPackage__Script_AudioCapture.OuterSingleton == (UPackage *)0x0) {
    UECodeGen_Private::ConstructUPackage
              (&Z_Registration_Info_UPackage__Script_AudioCapture.OuterSingleton,&PackageParams);
  }
  return Z_Registration_Info_UPackage__Script_AudioCapture.OuterSingleton;
}

// Z_Construct_UClass_UAudioCaptureComponent @ 14d0cd560

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAudioCaptureComponent(void)

{
  if (Z_Registration_Info_UClass_UAudioCaptureComponent.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAudioCaptureComponent.OuterSingleton,
               &Z_Construct_UClass_UAudioCaptureComponent_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAudioCaptureComponent.OuterSingleton;
}

// Z_Construct_UClass_UAudioCaptureBlueprintLibrary @ 14d0cd800

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAudioCaptureBlueprintLibrary(void)

{
  if (Z_Registration_Info_UClass_UAudioCaptureBlueprintLibrary.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAudioCaptureBlueprintLibrary.OuterSingleton,
               &Z_Construct_UClass_UAudioCaptureBlueprintLibrary_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAudioCaptureBlueprintLibrary.OuterSingleton;
}

// Z_Construct_UScriptStruct_FAudioInputDeviceInfo @ 14d0cd840

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FAudioInputDeviceInfo(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAudioInputDeviceInfo.InnerSingleton == (UScriptStruct *)0x0
     ) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FAudioInputDeviceInfo.InnerSingleton,
               &Z_Construct_UScriptStruct_FAudioInputDeviceInfo_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FAudioInputDeviceInfo.InnerSingleton != (UScriptStruct *)0x0
     ) {
    return Z_Registration_Info_UScriptStruct_FAudioInputDeviceInfo.InnerSingleton;
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

// NewProp_bSupportsHardwareAEC_SetBit @ 14d0cd8c0

void __cdecl
Z_Construct_UScriptStruct_FAudioInputDeviceInfo_Statics::NewProp_bSupportsHardwareAEC_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0x28) = *(byte *)((longlong)param_1 + 0x28) | 1;
  return;
}

// NewStructOps @ 14d0cd8d0

void * __cdecl Z_Construct_UScriptStruct_FAudioInputDeviceInfo_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FAudioInputDeviceInfo,&UE::CoreUObject::Private::Construct<FAudioInputDeviceInfo>,&UE::CoreUObject::Private::ConstructForTests<FAudioInputDeviceInfo>,&UE::CoreUObject::Private::Destruct<FAudioInputDeviceInfo>,&UE::CoreUObject::Private::Copy<FAudioInputDeviceInfo>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UAudioCapture_NoRegister @ 14d0cd910

UClass * __cdecl Z_Construct_UClass_UAudioCapture_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAudioCapture.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioCapture",L"AudioCapture",
               &Z_Registration_Info_UClass_UAudioCapture.InnerSingleton,
               UAudioCapture::StaticRegisterNativesUAudioCapture,0xb0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAudioCapture>,
               InternalVTableHelperCtorCaller<UAudioCapture>,local_res8,UAudioGenerator::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAudioCapture.InnerSingleton;
}

// `scalar_deleting_destructor' @ 14d0cdac0

void * __thiscall
FAudioCaptureModule::_scalar_deleting_destructor_(FAudioCaptureModule *this,uint param_1)

{
  *this = (FAudioCaptureModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// Z_Construct_UFunction_UAudioCaptureBlueprintLibrary_Conv_AudioInputDeviceInfoToString @ 14d0cdc00

UFunction * __cdecl
Z_Construct_UFunction_UAudioCaptureBlueprintLibrary_Conv_AudioInputDeviceInfoToString(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAudioCaptureBlueprintLibrary_Conv_AudioInputDeviceInfoToString_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAudioCaptureBlueprintLibrary_GetAvailableAudioInputDevices @ 14d0cdc40

UFunction * __cdecl
Z_Construct_UFunction_UAudioCaptureBlueprintLibrary_GetAvailableAudioInputDevices(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAudioCaptureBlueprintLibrary_GetAvailableAudioInputDevices_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UAudioCapture @ 14d0cdd40

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAudioCapture(void)

{
  if (Z_Registration_Info_UClass_UAudioCapture.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAudioCapture.OuterSingleton,
               &Z_Construct_UClass_UAudioCapture_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAudioCapture.OuterSingleton;
}

// Z_Construct_UClass_UAudioCaptureFunctionLibrary @ 14d0cdd80

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAudioCaptureFunctionLibrary(void)

{
  if (Z_Registration_Info_UClass_UAudioCaptureFunctionLibrary.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAudioCaptureFunctionLibrary.OuterSingleton,
               &Z_Construct_UClass_UAudioCaptureFunctionLibrary_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAudioCaptureFunctionLibrary.OuterSingleton;
}

// Z_Construct_UScriptStruct_FAudioCaptureDeviceInfo @ 14d0cddc0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FAudioCaptureDeviceInfo(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAudioCaptureDeviceInfo.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FAudioCaptureDeviceInfo.InnerSingleton,
               &Z_Construct_UScriptStruct_FAudioCaptureDeviceInfo_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FAudioCaptureDeviceInfo.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FAudioCaptureDeviceInfo.InnerSingleton;
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

// NewStructOps @ 14d0cde40

void * __cdecl Z_Construct_UScriptStruct_FAudioCaptureDeviceInfo_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FAudioCaptureDeviceInfo,&UE::CoreUObject::Private::Construct<FAudioCaptureDeviceInfo>,&UE::CoreUObject::Private::ConstructForTests<FAudioCaptureDeviceInfo>,&UE::CoreUObject::Private::Destruct<FAudioCaptureDeviceInfo>,&UE::CoreUObject::Private::Copy<FAudioCaptureDeviceInfo>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_ReturnValue_SetBit @ 14d0cde80

void __cdecl
Z_Construct_UFunction_UAudioCapture_GetAudioCaptureDeviceInfo_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// Z_Construct_UFunction_UAudioCapture_GetAudioCaptureDeviceInfo @ 14d0cde90

UFunction * __cdecl Z_Construct_UFunction_UAudioCapture_GetAudioCaptureDeviceInfo(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAudioCapture_GetAudioCaptureDeviceInfo_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14d0cded0

void __cdecl
Z_Construct_UFunction_UAudioCapture_IsCapturingAudio_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UAudioCapture_IsCapturingAudio @ 14d0cdee0

UFunction * __cdecl Z_Construct_UFunction_UAudioCapture_IsCapturingAudio(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAudioCapture_IsCapturingAudio_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAudioCapture_StartCapturingAudio @ 14d0cdf20

UFunction * __cdecl Z_Construct_UFunction_UAudioCapture_StartCapturingAudio(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAudioCapture_StartCapturingAudio_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAudioCapture_StopCapturingAudio @ 14d0cdf60

UFunction * __cdecl Z_Construct_UFunction_UAudioCapture_StopCapturingAudio(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAudioCapture_StopCapturingAudio_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAudioCaptureFunctionLibrary_CreateAudioCapture @ 14d0ce000

UFunction * __cdecl Z_Construct_UFunction_UAudioCaptureFunctionLibrary_CreateAudioCapture(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAudioCaptureFunctionLibrary_CreateAudioCapture_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// ConstructItems<FAudioInputDeviceInfo,FAudioInputDeviceInfo,int> @ 14d0ce040

void __cdecl
ConstructItems<FAudioInputDeviceInfo,FAudioInputDeviceInfo,int>
          (void *param_1,FAudioInputDeviceInfo *param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  
  if (param_3 != 0) {
    piVar1 = &param_2->InputChannels;
    piVar2 = (int *)((longlong)param_1 + 0x20);
    do {
      FString::FString((FString *)
                       ((longlong)param_1 + (-0x20 - (longlong)param_2) + (longlong)piVar1),
                       (FString *)(piVar1 + -8));
      FString::FString((FString *)(piVar2 + -4),(FString *)(piVar1 + -4));
      *piVar2 = *piVar1;
      piVar2[1] = piVar1[1];
      *(byte *)(piVar2 + 2) =
           *(byte *)(piVar2 + 2) ^ (*(byte *)(piVar2 + 2) ^ *(byte *)(piVar1 + 2)) & 1;
      param_3 = param_3 + -1;
      piVar1 = piVar1 + 0xc;
      piVar2 = piVar2 + 0xc;
    } while (param_3 != 0);
  }
  return;
}

// DestructItems<FAudioInputDeviceInfo,int> @ 14d0ce0d0

void __cdecl DestructItems<FAudioInputDeviceInfo,int>(FAudioInputDeviceInfo *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->DeviceId).Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    pFVar1 = (param_1->DeviceName).Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// InternalConstructor<UAudioCapture> @ 14d0ce120

void __cdecl InternalConstructor<UAudioCapture>(FObjectInitializer *param_1)

{
  UAudioGenerator *this;
  
  this = (UAudioGenerator *)param_1->Obj;
  if (this != (UAudioGenerator *)0x0) {
    UAudioGenerator::UAudioGenerator(this);
    this->_padding_ = (longlong)&___7UAudioCapture__6B_;
    Audio::FAudioCapture::FAudioCapture((FAudioCapture *)(this + 1));
    return;
  }
  return;
}

// InternalConstructor<UAudioCaptureBlueprintLibrary> @ 14d0ce160

void __cdecl InternalConstructor<UAudioCaptureBlueprintLibrary>(FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary *this;
  
  this = (UBlueprintFunctionLibrary *)param_1->Obj;
  if (this != (UBlueprintFunctionLibrary *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary(this,param_1);
    *(undefined ***)this = &___7UAudioCaptureBlueprintLibrary__6B_;
  }
  return;
}

// InternalConstructor<UAudioCaptureComponent> @ 14d0ce190

void __cdecl InternalConstructor<UAudioCaptureComponent>(FObjectInitializer *param_1)

{
  int *piVar1;
  USynthComponent *this;
  
  this = (USynthComponent *)param_1->Obj;
  if (this != (USynthComponent *)0x0) {
    USynthComponent::USynthComponent(this,param_1);
    this->_padding_ = (longlong)&UAudioCaptureComponent::_vftable__for__UObject__;
    this->_padding_ = (longlong)&UAudioCaptureComponent::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ =
         (longlong)&UAudioCaptureComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
    Audio::FAudioCaptureSynth::FAudioCaptureSynth((FAudioCaptureSynth *)&this[1]._padding_);
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0;
    piVar1 = (int *)((longlong)&this[1]._padding_ + 4);
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    *(undefined2 *)((longlong)&this[1]._padding_ + 4) = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    LOCK();
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0;
    UNLOCK();
    LOCK();
    *(undefined4 *)&this[1]._padding_ = 0;
    UNLOCK();
    *(undefined1 *)((longlong)&this[1]._padding_ + 6) = 0;
    if (((this->_padding_ & 0x10) == 0) && (*piVar1 < 480000)) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,480000,(ForAnyElementType *)&this[1]._padding_,(int)this[1]._padding_,piVar1);
    }
  }
  return;
}

// InternalConstructor<UAudioCaptureFunctionLibrary> @ 14d0ce260

void __cdecl InternalConstructor<UAudioCaptureFunctionLibrary>(FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary *this;
  
  this = (UBlueprintFunctionLibrary *)param_1->Obj;
  if (this != (UBlueprintFunctionLibrary *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary(this,param_1);
    *(undefined ***)this = &___7UAudioCaptureFunctionLibrary__6B_;
  }
  return;
}

// InternalVTableHelperCtorCaller<UAudioCapture> @ 14d0ce290

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UAudioCapture>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UAudioGenerator *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAudioCapture::GetPrivateStaticClass();
  this = (UAudioGenerator *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UAudioGenerator *)0x0) {
    UAudioGenerator::UAudioGenerator(this,param_1);
    this->_padding_ = (longlong)&___7UAudioCapture__6B_;
    Audio::FAudioCapture::FAudioCapture((FAudioCapture *)(this + 1));
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UAudioCaptureBlueprintLibrary> @ 14d0ce350

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UAudioCaptureBlueprintLibrary>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAudioCaptureBlueprintLibrary::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary
              ((UBlueprintFunctionLibrary *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UAudioCaptureBlueprintLibrary__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UAudioCaptureComponent> @ 14d0ce400

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UAudioCaptureComponent>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  USynthComponent *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAudioCaptureComponent::GetPrivateStaticClass();
  this = (USynthComponent *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (USynthComponent *)0x0) {
    USynthComponent::USynthComponent(this,param_1);
    this->_padding_ = (longlong)&UAudioCaptureComponent::_vftable__for__UObject__;
    this->_padding_ = (longlong)&UAudioCaptureComponent::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ =
         (longlong)&UAudioCaptureComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
    Audio::FAudioCaptureSynth::FAudioCaptureSynth((FAudioCaptureSynth *)&this[1]._padding_);
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UAudioCaptureFunctionLibrary> @ 14d0ce4f0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UAudioCaptureFunctionLibrary>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAudioCaptureFunctionLibrary::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary
              ((UBlueprintFunctionLibrary *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UAudioCaptureFunctionLibrary__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// NewObject<UAudioCapture> @ 14d0ce5a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UAudioCapture * __cdecl NewObject<UAudioCapture>(UObject *param_1)

{
  UClass *pUVar1;
  UAudioCapture *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UAudioCapture::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UAudioCapture *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// ~TFunction_OwnedObject<`UAudioCaptureBlueprintLibrary::GetAvailableAudioInputDevices'::__l5::<lambda_1>,1,1> @ 14d0ce910

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UAudioCaptureBlueprintLibrary::GetAvailableAudioInputDevices'::__l5::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_UAudioCaptureBlueprintLibrary::GetAvailableAudioInputDevices_::__l5::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UAudioCaptureBlueprintLibrary::GetAvailableAudioInputDevices'::`5'::<lambda_1>,1,1>
        ::_vftable_;
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((longlong)this + 0x10));
  return;
}

// ~TFunction_OwnedObject<`UAudioCapture::OpenDefaultAudioStream'::__l5::<lambda_1>,0,0> @ 14d0ce930

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UAudioCapture::OpenDefaultAudioStream'::__l5::<lambda_1>,0,0>::
~TFunction_OwnedObject<_UAudioCapture::OpenDefaultAudioStream_::__l5::<lambda_1>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UAudioCapture::OpenDefaultAudioStream'::`5'::<lambda_1>,0,0>::
        _vftable_;
  return;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14d0cea28

/* [thunk]:public: virtual void * __ptr64 __cdecl UAudioCaptureComponent::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UAudioCaptureComponent::_vector_deleting_destructor__adjustor_40__
          (UAudioCaptureComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UAudioCaptureComponent *)&this[-1].CaptureAudioData.ArrayNum,param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 14d0cea40

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UAudioCaptureBlueprintLibrary::GetAvailableAudioInputDevices'::__l5::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UAudioCaptureBlueprintLibrary::GetAvailableAudioInputDevices'::`5'::<lambda_1>,1,1>
        ::_vftable_;
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((longlong)this + 0x10));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d0cea90

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UAudioCapture::OpenDefaultAudioStream'::__l5::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UAudioCapture::OpenDefaultAudioStream'::`5'::<lambda_1>,0,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d0cead0

void * __thiscall UAudioCapture::_scalar_deleting_destructor_(UAudioCapture *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UAudioCapture__6B_;
  Audio::FAudioCapture::~FAudioCapture(&this->AudioCapture);
  UAudioGenerator::~UAudioGenerator((UAudioGenerator *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xb0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d0ceb40

void * __thiscall
UAudioCaptureBlueprintLibrary::_scalar_deleting_destructor_
          (UAudioCaptureBlueprintLibrary *this,uint param_1)

{
  *(undefined ***)this = &___7UAudioCaptureBlueprintLibrary__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d0ceba0

void * __thiscall
UAudioCaptureComponent::_scalar_deleting_destructor_(UAudioCaptureComponent *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  pFVar1 = (this->CaptureAudioData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  Audio::FAudioCaptureSynth::~FAudioCaptureSynth(&this->CaptureSynth);
  USynthComponent::~USynthComponent((USynthComponent *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x980);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d0cec40

void * __thiscall
UAudioCaptureFunctionLibrary::_scalar_deleting_destructor_
          (UAudioCaptureFunctionLibrary *this,uint param_1)

{
  *(undefined ***)this = &___7UAudioCaptureFunctionLibrary__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x28);
  }
  return this;
}

// EmptyLinkFunctionForGeneratedCodeAudioCapture @ 14d0cf070

void __cdecl EmptyLinkFunctionForGeneratedCodeAudioCapture(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAudioCaptureBlueprintLibrary @ 14d0cf080

void __cdecl EmptyLinkFunctionForGeneratedCodeAudioCaptureBlueprintLibrary(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAudioCaptureComponent @ 14d0cf090

void __cdecl EmptyLinkFunctionForGeneratedCodeAudioCaptureComponent(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAudioCapture_init @ 14d0cf0a0

void __cdecl EmptyLinkFunctionForGeneratedCodeAudioCapture_init(void)

{
  return;
}

// FOnAudioInputDevicesObtained_DelegateWrapper @ 14d0cf0b0

void __cdecl
FOnAudioInputDevicesObtained_DelegateWrapper
          (TScriptDelegate<FNotThreadSafeDelegateMode> *param_1,
          TArray<FAudioInputDeviceInfo,TSizedDefaultAllocator<32>_> *param_2)

{
  int iVar1;
  FAudioInputDeviceInfo *pFVar2;
  TArray<FAudioInputDeviceInfo,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  if (&local_18 != param_2) {
    DestructItems<FAudioInputDeviceInfo,int>((FAudioInputDeviceInfo *)0x0,0);
    iVar1 = param_2->ArrayNum;
    pFVar2 = (FAudioInputDeviceInfo *)(param_2->AllocatorInstance).Data;
    local_18.ArrayNum = iVar1;
    if ((iVar1 == 0) && (local_18.ArrayMax == 0)) {
      local_18.ArrayNum = 0;
      local_18.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,8,iVar1,local_18.ArrayMax,&local_18.AllocatorInstance,iVar1,&local_18.ArrayMax
                );
      ConstructItems<FAudioInputDeviceInfo,FAudioInputDeviceInfo,int>
                (local_18.AllocatorInstance.Data,pFVar2,iVar1);
    }
  }
  TScriptDelegate<FNotThreadSafeDelegateMode>::ProcessDelegate<UObject>(param_1,&local_18);
  DestructItems<FAudioInputDeviceInfo,int>
            ((FAudioInputDeviceInfo *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
  if ((FAudioInputDeviceInfo *)local_18.AllocatorInstance.Data != (FAudioInputDeviceInfo *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// Z_Construct_UClass_UAudioCaptureBlueprintLibrary_NoRegister @ 14d0d02b0

UClass * __cdecl Z_Construct_UClass_UAudioCaptureBlueprintLibrary_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAudioCaptureBlueprintLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioCapture",L"AudioCaptureBlueprintLibrary",
               &Z_Registration_Info_UClass_UAudioCaptureBlueprintLibrary.InnerSingleton,
               UAudioCaptureBlueprintLibrary::StaticRegisterNativesUAudioCaptureBlueprintLibrary,
               0x28,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UAudioCaptureBlueprintLibrary>,
               InternalVTableHelperCtorCaller<UAudioCaptureBlueprintLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAudioCaptureBlueprintLibrary.InnerSingleton;
}

// Z_Construct_UClass_UAudioCaptureComponent_NoRegister @ 14d0d0370

UClass * __cdecl Z_Construct_UClass_UAudioCaptureComponent_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAudioCaptureComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioCapture",L"AudioCaptureComponent",
               &Z_Registration_Info_UClass_UAudioCaptureComponent.InnerSingleton,
               UAudioCaptureComponent::StaticRegisterNativesUAudioCaptureComponent,0x980,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UAudioCaptureComponent>,
               InternalVTableHelperCtorCaller<UAudioCaptureComponent>,local_res8,
               USynthComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAudioCaptureComponent.InnerSingleton;
}

// Z_Construct_UClass_UAudioCaptureFunctionLibrary_NoRegister @ 14d0d0430

UClass * __cdecl Z_Construct_UClass_UAudioCaptureFunctionLibrary_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAudioCaptureFunctionLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioCapture",L"AudioCaptureFunctionLibrary",
               &Z_Registration_Info_UClass_UAudioCaptureFunctionLibrary.InnerSingleton,
               UAudioCaptureFunctionLibrary::StaticRegisterNativesUAudioCaptureFunctionLibrary,0x28,
               8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UAudioCaptureFunctionLibrary>,
               InternalVTableHelperCtorCaller<UAudioCaptureFunctionLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAudioCaptureFunctionLibrary.InnerSingleton;
}

// IMPLEMENT_MODULE_AudioCapture @ 14d0d0a10

void __cdecl IMPLEMENT_MODULE_AudioCapture(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'LogAudioCapture'' @ 150455980

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogAudioCapture__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogAudioCapture);
  return;
}

