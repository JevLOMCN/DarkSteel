// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioCapture
// Functions: 15

// StaticClass @ 14d0cdb40

UClass * __cdecl UAudioCapture::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAudioCapture.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioCapture",L"AudioCapture",
               &Z_Registration_Info_UClass_UAudioCapture.InnerSingleton,
               StaticRegisterNativesUAudioCapture,0xb0,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UAudioCapture>,InternalVTableHelperCtorCaller<UAudioCapture>,
               local_res8,UAudioGenerator::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAudioCapture.InnerSingleton;
}

// UAudioCapture @ 14d0ce690

UAudioCapture * __thiscall UAudioCapture::UAudioCapture(UAudioCapture *this,FVTableHelper *param_1)

{
  UAudioGenerator::UAudioGenerator((UAudioGenerator *)this,param_1);
  this->_padding_ = (longlong)&___7UAudioCapture__6B_;
  Audio::FAudioCapture::FAudioCapture(&this->AudioCapture);
  return this;
}

// UAudioCapture @ 14d0ce6d0

UAudioCapture * __thiscall UAudioCapture::UAudioCapture(UAudioCapture *this)

{
  UAudioGenerator::UAudioGenerator((UAudioGenerator *)this);
  this->_padding_ = (longlong)&___7UAudioCapture__6B_;
  Audio::FAudioCapture::FAudioCapture(&this->AudioCapture);
  return this;
}

// ~UAudioCapture @ 14d0ce950

void __thiscall UAudioCapture::~UAudioCapture(UAudioCapture *this)

{
  this->_padding_ = (longlong)&___7UAudioCapture__6B_;
  Audio::FAudioCapture::~FAudioCapture(&this->AudioCapture);
  UAudioGenerator::~UAudioGenerator((UAudioGenerator *)this);
  return;
}

// GetAudioCaptureDeviceInfo @ 14d0cf240

bool __thiscall
UAudioCapture::GetAudioCaptureDeviceInfo(UAudioCapture *this,FAudioCaptureDeviceInfo *param_1)

{
  FName FVar1;
  bool bVar2;
  FName *pFVar3;
  ForAnyElementType FVar4;
  FName local_res8 [4];
  FCaptureDeviceInfo local_38;
  
  local_38.DeviceName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.DeviceName.Data.ArrayNum = 0;
  local_38.DeviceName.Data.ArrayMax = 0;
  local_38.DeviceId.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.DeviceId.Data.ArrayNum = 0;
  local_38.DeviceId.Data.ArrayMax = 0;
  bVar2 = Audio::FAudioCapture::GetCaptureDeviceInfo(&this->AudioCapture,&local_38,-1);
  if (bVar2) {
    FVar4.Data = (FScriptContainerElement *)L"";
    if (local_38.DeviceName.Data.ArrayNum != 0) {
      FVar4.Data = local_38.DeviceName.Data.AllocatorInstance.Data;
    }
    pFVar3 = ::FName::FName(local_res8,(wchar_t *)FVar4.Data);
    FVar1 = *pFVar3;
    param_1->NumInputChannels = local_38.InputChannels;
    param_1->SampleRate = local_38.PreferredSampleRate;
    param_1->DeviceName = FVar1;
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  if (local_38.DeviceId.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.DeviceId.Data.AllocatorInstance.Data);
  }
  if (local_38.DeviceName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.DeviceName.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// GetPrivateStaticClass @ 14d0cf6c0

UClass * __cdecl UAudioCapture::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAudioCapture.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioCapture",L"AudioCapture",
               &Z_Registration_Info_UClass_UAudioCapture.InnerSingleton,
               StaticRegisterNativesUAudioCapture,0xb0,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UAudioCapture>,InternalVTableHelperCtorCaller<UAudioCapture>,
               local_res8,UAudioGenerator::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAudioCapture.InnerSingleton;
}

// IsCapturingAudio @ 14d0cfbb0

bool __thiscall UAudioCapture::IsCapturingAudio(UAudioCapture *this)

{
  bool bVar1;
  
  bVar1 = Audio::FAudioCapture::IsCapturing(&this->AudioCapture);
  return bVar1;
}

// OpenDefaultAudioStream @ 14d0cffd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall UAudioCapture::OpenDefaultAudioStream(UAudioCapture *this)

{
  bool bVar1;
  undefined ***pppuVar2;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [24];
  UAudioCapture *pUStack_80;
  int local_78;
  int iStack_74;
  undefined8 local_70;
  FAudioCaptureDeviceParams local_68;
  longlong local_48;
  undefined **local_38;
  UAudioCapture *pUStack_30;
  int local_28;
  int iStack_24;
  undefined ***local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  bVar1 = Audio::FAudioCapture::IsStreamOpen(&this->AudioCapture);
  if (!bVar1) {
    local_38 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`UAudioCapture::OpenDefaultAudioStream'::`5'::<lambda_1>,0,0>
                ::_vftable_;
    local_98._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`UAudioCapture::OpenDefaultAudioStream'::__l5::<lambda_1>,void,void_const_*,int,int,int,double,bool>
         ::Call;
    local_98._16_8_ =
         &UE::Core::Private::Function::
          TFunction_OwnedObject<`UAudioCapture::OpenDefaultAudioStream'::`5'::<lambda_1>,0,0>::
          _vftable_;
    local_68.bUseHardwareAEC = false;
    local_68.DeviceIndex = -1;
    local_68.NumInputChannels = -1;
    local_68.SampleRate = -1;
    local_68.PCMAudioEncoding = FLOATING_POINT_32;
    local_70._0_1_ = false;
    local_70._1_7_ = 0;
    local_20 = (undefined ***)0x0;
    local_78 = local_28;
    iStack_74 = iStack_24;
    local_48 = 0;
    pUStack_80 = this;
    pUStack_30 = this;
    bVar1 = Audio::FAudioCapture::OpenAudioCaptureStream
                      (&this->AudioCapture,&local_68,
                       (TFunction<void___cdecl(void_const_*,int,int,int,double,bool)> *)local_98,
                       0x400);
    if (bVar1) {
      local_98._0_8_ = (FScriptContainerElement *)0x0;
      local_98._8_8_ = 0;
      local_98._16_8_ = (FScriptContainerElement *)0x0;
      pUStack_80 = (UAudioCapture *)0x0;
      bVar1 = Audio::FAudioCapture::GetCaptureDeviceInfo
                        (&this->AudioCapture,(FCaptureDeviceInfo *)local_98,-1);
      if (bVar1) {
        UAudioGenerator::Init((UAudioGenerator *)this,iStack_74,local_78);
        if ((FScriptContainerElement *)local_98._16_8_ != (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)local_98._16_8_);
        }
        if ((FScriptContainerElement *)local_98._0_8_ != (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)local_98._0_8_);
        }
        if (local_48 != 0) {
          pppuVar2 = &local_38;
          if (local_20 != (undefined ***)0x0) {
            pppuVar2 = local_20;
          }
          (*(code *)(*pppuVar2)[2])();
        }
        return true;
      }
      if ((FScriptContainerElement *)local_98._16_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_98._16_8_);
      }
      if ((FScriptContainerElement *)local_98._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_98._0_8_);
      }
    }
    if (local_48 != 0) {
      pppuVar2 = &local_38;
      if (local_20 != (undefined ***)0x0) {
        pppuVar2 = local_20;
      }
      (*(code *)(*pppuVar2)[2])();
    }
  }
  return false;
}

// StartCapturingAudio @ 14d0d0160

void __thiscall UAudioCapture::StartCapturingAudio(UAudioCapture *this)

{
  bool bVar1;
  
  bVar1 = Audio::FAudioCapture::IsStreamOpen(&this->AudioCapture);
  if (bVar1) {
    Audio::FAudioCapture::StartStream(&this->AudioCapture);
    return;
  }
  return;
}

// StaticRegisterNativesUAudioCapture @ 14d0d01a0

void __cdecl UAudioCapture::StaticRegisterNativesUAudioCapture(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 4;
  local_18.DataPtr = Z_Construct_UClass_UAudioCapture_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// StopCapturingAudio @ 14d0d0270

void __thiscall UAudioCapture::StopCapturingAudio(UAudioCapture *this)

{
  bool bVar1;
  
  bVar1 = Audio::FAudioCapture::IsStreamOpen(&this->AudioCapture);
  if (bVar1) {
    Audio::FAudioCapture::StopStream(&this->AudioCapture);
    return;
  }
  return;
}

// execGetAudioCaptureDeviceInfo @ 14d0d06a0

void __cdecl
UAudioCapture::execGetAudioCaptureDeviceInfo(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  FName *pFVar3;
  ForAnyElementType FVar4;
  FName *pFVar5;
  FName local_res8;
  FName local_58;
  undefined8 local_50;
  FCaptureDeviceInfo local_48;
  
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  local_50 = 0;
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
  local_48.DeviceName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.DeviceName.Data.ArrayNum = 0;
  local_48.DeviceName.Data.ArrayMax = 0;
  pFVar5 = &local_58;
  if ((FName *)param_2->MostRecentPropertyAddress != (FName *)0x0) {
    pFVar5 = (FName *)param_2->MostRecentPropertyAddress;
  }
  local_48.DeviceId.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.DeviceId.Data.ArrayNum = 0;
  local_48.DeviceId.Data.ArrayMax = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = Audio::FAudioCapture::GetCaptureDeviceInfo
                    ((FAudioCapture *)&param_1[4].field_0x8,&local_48,-1);
  if (bVar2) {
    FVar4.Data = (FScriptContainerElement *)L"";
    if (local_48.DeviceName.Data.ArrayNum != 0) {
      FVar4.Data = local_48.DeviceName.Data.AllocatorInstance.Data;
    }
    pFVar3 = ::FName::FName(&local_res8,(wchar_t *)FVar4.Data);
    *pFVar5 = *pFVar3;
    FVar4.Data = local_48.DeviceId.Data.AllocatorInstance.Data;
    pFVar5[1].ComparisonIndex.Value = local_48.InputChannels;
    pFVar5[1].Number = local_48.PreferredSampleRate;
    if (FVar4.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar4.Data);
    }
    if (local_48.DeviceName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.DeviceName.Data.AllocatorInstance.Data);
    }
    *(undefined1 *)param_3 = 1;
  }
  else {
    if (local_48.DeviceId.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.DeviceId.Data.AllocatorInstance.Data);
    }
    if (local_48.DeviceName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.DeviceName.Data.AllocatorInstance.Data);
    }
    *(undefined1 *)param_3 = 0;
  }
  return;
}

// execIsCapturingAudio @ 14d0d0930

void __cdecl UAudioCapture::execIsCapturingAudio(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = Audio::FAudioCapture::IsCapturing((FAudioCapture *)&param_1[4].field_0x8);
  *(bool *)param_3 = bVar1;
  return;
}

// execStartCapturingAudio @ 14d0d0970

void __cdecl UAudioCapture::execStartCapturingAudio(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = Audio::FAudioCapture::IsStreamOpen((FAudioCapture *)&param_1[4].field_0x8);
  if (bVar1) {
    Audio::FAudioCapture::StartStream((FAudioCapture *)&param_1[4].field_0x8);
    return;
  }
  return;
}

// execStopCapturingAudio @ 14d0d09c0

void __cdecl UAudioCapture::execStopCapturingAudio(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = Audio::FAudioCapture::IsStreamOpen((FAudioCapture *)&param_1[4].field_0x8);
  if (bVar1) {
    Audio::FAudioCapture::StopStream((FAudioCapture *)&param_1[4].field_0x8);
    return;
  }
  return;
}

