// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioCapture
// Functions: 8

// StaticClass @ 14d0cdc80

UClass * __cdecl UAudioCaptureFunctionLibrary::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAudioCaptureFunctionLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioCapture",L"AudioCaptureFunctionLibrary",
               &Z_Registration_Info_UClass_UAudioCaptureFunctionLibrary.InnerSingleton,
               StaticRegisterNativesUAudioCaptureFunctionLibrary,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAudioCaptureFunctionLibrary>,
               InternalVTableHelperCtorCaller<UAudioCaptureFunctionLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAudioCaptureFunctionLibrary.InnerSingleton;
}

// UAudioCaptureFunctionLibrary @ 14d0ce8b0

UAudioCaptureFunctionLibrary * __thiscall
UAudioCaptureFunctionLibrary::UAudioCaptureFunctionLibrary
          (UAudioCaptureFunctionLibrary *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UAudioCaptureFunctionLibrary__6B_;
  return this;
}

// UAudioCaptureFunctionLibrary @ 14d0ce8e0

UAudioCaptureFunctionLibrary * __thiscall
UAudioCaptureFunctionLibrary::UAudioCaptureFunctionLibrary
          (UAudioCaptureFunctionLibrary *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UAudioCaptureFunctionLibrary__6B_;
  return this;
}

// ~UAudioCaptureFunctionLibrary @ 14d0cea10

void __thiscall
UAudioCaptureFunctionLibrary::~UAudioCaptureFunctionLibrary(UAudioCaptureFunctionLibrary *this)

{
  *(undefined ***)this = &___7UAudioCaptureFunctionLibrary__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// CreateAudioCapture @ 14d0cede0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UAudioCapture * __cdecl UAudioCaptureFunctionLibrary::CreateAudioCapture(void)

{
  bool bVar1;
  UObject *pUVar2;
  UClass *pUVar3;
  UAudioCapture *this;
  longlong *plVar4;
  undefined ***pppuVar5;
  undefined1 auStackY_158 [32];
  FLLMScope local_128 [5];
  undefined1 local_118 [24];
  UAudioCapture *pUStack_100;
  int local_f8;
  int iStack_f4;
  undefined8 local_f0;
  FAudioCaptureDeviceParams local_e8;
  FMemScope local_d0;
  undefined1 local_c8 [128];
  longlong local_48;
  undefined **local_38;
  UAudioCapture *pUStack_30;
  int local_28;
  int iStack_24;
  undefined ***local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_158;
  FLLMScope::FLLMScope(local_128,Audio,false,None,Default,true);
  FMemScope::FMemScope(&local_d0,Audio,true);
  pUVar2 = GetTransientPackageAsObject();
  FObjectInitializer::AssertIfInConstructor
            (pUVar2,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar3 = UAudioCapture::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_c8,pUVar3);
  local_c8._8_8_ = pUVar2;
  this = (UAudioCapture *)
         StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
  if (local_c8._64_8_ != 0) {
    plVar4 = (longlong *)(local_c8 + 0x50);
    if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
      plVar4 = (longlong *)local_c8._104_8_;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  bVar1 = Audio::FAudioCapture::IsStreamOpen(&this->AudioCapture);
  if (!bVar1) {
    local_38 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`UAudioCapture::OpenDefaultAudioStream'::`5'::<lambda_1>,0,0>
                ::_vftable_;
    local_118._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`UAudioCapture::OpenDefaultAudioStream'::__l5::<lambda_1>,void,void_const_*,int,int,int,double,bool>
         ::Call;
    local_118._16_8_ =
         &UE::Core::Private::Function::
          TFunction_OwnedObject<`UAudioCapture::OpenDefaultAudioStream'::`5'::<lambda_1>,0,0>::
          _vftable_;
    local_e8.bUseHardwareAEC = false;
    local_e8.DeviceIndex = -1;
    local_e8.NumInputChannels = -1;
    local_e8.SampleRate = -1;
    local_e8.PCMAudioEncoding = FLOATING_POINT_32;
    local_f0._0_1_ = false;
    local_f0._1_7_ = 0;
    local_20 = (undefined ***)0x0;
    local_f8 = local_28;
    iStack_f4 = iStack_24;
    local_48 = 0;
    pUStack_100 = this;
    pUStack_30 = this;
    bVar1 = Audio::FAudioCapture::OpenAudioCaptureStream
                      (&this->AudioCapture,&local_e8,
                       (TFunction<void___cdecl(void_const_*,int,int,int,double,bool)> *)local_118,
                       0x400);
    if (bVar1) {
      local_118._0_8_ = (FScriptContainerElement *)0x0;
      local_118._8_8_ = 0;
      local_118._16_8_ = (FScriptContainerElement *)0x0;
      pUStack_100 = (UAudioCapture *)0x0;
      bVar1 = Audio::FAudioCapture::GetCaptureDeviceInfo
                        (&this->AudioCapture,(FCaptureDeviceInfo *)local_118,-1);
      if (bVar1) {
        UAudioGenerator::Init((UAudioGenerator *)this,iStack_f4,local_f8);
        if ((FScriptContainerElement *)local_118._16_8_ != (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)local_118._16_8_);
        }
        if ((FScriptContainerElement *)local_118._0_8_ != (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)local_118._0_8_);
        }
        if (local_48 != 0) {
          pppuVar5 = &local_38;
          if (local_20 != (undefined ***)0x0) {
            pppuVar5 = local_20;
          }
          (*(code *)(*pppuVar5)[2])();
        }
        goto LAB_14d0cefeb;
      }
      if ((FScriptContainerElement *)local_118._16_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_118._16_8_);
      }
      if ((FScriptContainerElement *)local_118._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_118._0_8_);
      }
    }
    if (local_48 != 0) {
      pppuVar5 = &local_38;
      if (local_20 != (undefined ***)0x0) {
        pppuVar5 = local_20;
      }
      (*(code *)(*pppuVar5)[2])();
    }
  }
  if (1 < (byte)LogAudioCapture._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudioCapture);
  }
  this = (UAudioCapture *)0x0;
LAB_14d0cefeb:
  FMemScope::~FMemScope(&local_d0);
  FLLMScope::~FLLMScope(local_128);
  return this;
}

// GetPrivateStaticClass @ 14d0cf900

UClass * __cdecl UAudioCaptureFunctionLibrary::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAudioCaptureFunctionLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioCapture",L"AudioCaptureFunctionLibrary",
               &Z_Registration_Info_UClass_UAudioCaptureFunctionLibrary.InnerSingleton,
               StaticRegisterNativesUAudioCaptureFunctionLibrary,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAudioCaptureFunctionLibrary>,
               InternalVTableHelperCtorCaller<UAudioCaptureFunctionLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAudioCaptureFunctionLibrary.InnerSingleton;
}

// StaticRegisterNativesUAudioCaptureFunctionLibrary @ 14d0d0230

void __cdecl UAudioCaptureFunctionLibrary::StaticRegisterNativesUAudioCaptureFunctionLibrary(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UAudioCaptureFunctionLibrary_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execCreateAudioCapture @ 14d0d0670

void __cdecl
UAudioCaptureFunctionLibrary::execCreateAudioCapture(UObject *param_1,FFrame *param_2,void *param_3)

{
  UAudioCapture *pUVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar1 = CreateAudioCapture();
  *(UAudioCapture **)param_3 = pUVar1;
  return;
}

