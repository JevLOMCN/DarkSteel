// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioSynesthesia
// Functions: 7

// StaticClass @ 14d813890

UClass * __cdecl UOnsetNRTSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOnsetNRTSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioSynesthesia",L"OnsetNRTSettings",
               &Z_Registration_Info_UClass_UOnsetNRTSettings.InnerSingleton,
               StaticRegisterNativesUOnsetNRTSettings,0x40,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UOnsetNRTSettings>,
               InternalVTableHelperCtorCaller<UOnsetNRTSettings>,local_res8,
               UAudioSynesthesiaNRTSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOnsetNRTSettings.InnerSingleton;
}

// UOnsetNRTSettings @ 14d81bcd0

UOnsetNRTSettings * __thiscall
UOnsetNRTSettings::UOnsetNRTSettings(UOnsetNRTSettings *this,FVTableHelper *param_1)

{
  UAudioAnalyzerNRTSettings::UAudioAnalyzerNRTSettings((UAudioAnalyzerNRTSettings *)this,param_1);
  this->_padding_ = (longlong)&___7UOnsetNRTSettings__6B_;
  return this;
}

// UOnsetNRTSettings @ 14d81bd00

UOnsetNRTSettings * __thiscall UOnsetNRTSettings::UOnsetNRTSettings(UOnsetNRTSettings *this)

{
  FObjectInitializer *pFVar1;
  
  pFVar1 = FObjectInitializer::Get();
  UAudioAnalyzerNRTSettings::UAudioAnalyzerNRTSettings((UAudioAnalyzerNRTSettings *)this,pFVar1);
  this->bDownmixToMono = false;
  this->_padding_ = (longlong)&___7UOnsetNRTSettings__6B_;
  this->GranularityInSeconds = 0.01;
  this->Sensitivity = 0.5;
  this->MinimumFrequency = 20.0;
  this->MaximumFrequency = 16000.0;
  return this;
}

// ~UOnsetNRTSettings @ 14d81c7f0

void __thiscall UOnsetNRTSettings::~UOnsetNRTSettings(UOnsetNRTSettings *this)

{
  this->_padding_ = (longlong)&___7UAudioSynesthesiaNRTSettings__6B_;
  UAudioAnalyzerNRTSettings::~UAudioAnalyzerNRTSettings((UAudioAnalyzerNRTSettings *)this);
  return;
}

// GetPrivateStaticClass @ 14d8242a0

UClass * __cdecl UOnsetNRTSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOnsetNRTSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioSynesthesia",L"OnsetNRTSettings",
               &Z_Registration_Info_UClass_UOnsetNRTSettings.InnerSingleton,
               StaticRegisterNativesUOnsetNRTSettings,0x40,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UOnsetNRTSettings>,
               InternalVTableHelperCtorCaller<UOnsetNRTSettings>,local_res8,
               UAudioSynesthesiaNRTSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOnsetNRTSettings.InnerSingleton;
}

// GetSettings @ 14d825ab0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TUniquePtr<Audio::IAnalyzerNRTSettings,TDefaultDelete<Audio::IAnalyzerNRTSettings>_> __thiscall
UOnsetNRTSettings::GetSettings(UOnsetNRTSettings *this,float param_1,int param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float _X;
  code *pcVar6;
  int iVar7;
  int iVar8;
  IAnalyzerNRTSettings IVar9;
  float *pfVar10;
  int iVar11;
  undefined ***pppuVar12;
  IAnalyzerNRTSettings *in_RDX;
  float fVar13;
  float fVar14;
  float in_XMM2_Da;
  float fVar15;
  float _Y;
  undefined1 auStack_108 [32];
  float local_e8 [4];
  code *local_d8;
  undefined **local_c8;
  float local_c0;
  undefined ***local_b0;
  ulonglong local_a8;
  
  local_a8 = __security_cookie.value ^ (ulonglong)auStack_108;
  IVar9 = (IAnalyzerNRTSettings)::operator_new(0x50);
  if (IVar9 == (IAnalyzerNRTSettings)0x0) {
    IVar9 = (IAnalyzerNRTSettings)0x0;
  }
  else {
    *(undefined4 *)((longlong)IVar9 + 8) = 0x400;
    *(undefined ***)IVar9 = &___7FOnsetNRTSettings_Audio__6B_;
    *(undefined4 *)((longlong)IVar9 + 0xc) = 0x1000;
    *(undefined4 *)((longlong)IVar9 + 0x10) = 4;
    *(undefined4 *)((longlong)IVar9 + 0x14) = 0x1000;
    *(undefined1 *)((longlong)IVar9 + 0x18) = 3;
    *(undefined4 *)((longlong)IVar9 + 0x1c) = 0xc2700000;
    *(undefined4 *)((longlong)IVar9 + 0x20) = 0x1a;
    *(undefined4 *)((longlong)IVar9 + 0x24) = 0x42c80000;
    *(undefined4 *)((longlong)IVar9 + 0x28) = 0x461c4000;
    *(undefined1 *)((longlong)IVar9 + 0x2c) = 2;
    *(undefined4 *)((longlong)IVar9 + 0x30) = 0x3f800000;
    *(undefined4 *)((longlong)IVar9 + 0x34) = 0x5a0;
    *(undefined4 *)((longlong)IVar9 + 0x38) = 1;
    *(undefined4 *)((longlong)IVar9 + 0x3c) = 0x12c0;
    *(undefined4 *)((longlong)IVar9 + 0x40) = 0x12c1;
    *(undefined4 *)((longlong)IVar9 + 0x44) = 0x5a0;
    *(undefined4 *)((longlong)IVar9 + 0x48) = 0x3d8f5c29;
    *(undefined1 *)((longlong)IVar9 + 0x4c) = 0;
  }
  _X = __real_40000000;
  fVar5 = __real_3f000000;
  fVar4 = __real_3f800000;
  *(bool *)((longlong)IVar9 + 0x4c) = this->bDownmixToMono;
  iVar7 = (int)ROUND((in_XMM2_Da + in_XMM2_Da) * this->GranularityInSeconds + fVar5) >> 1;
  iVar8 = 1;
  if (1 < iVar7) {
    iVar8 = iVar7;
  }
  *(int *)((longlong)IVar9 + 8) = iVar8;
  iVar7 = iVar8 * 4;
  *(int *)((longlong)IVar9 + 0xc) = iVar7;
  *(undefined4 *)((longlong)IVar9 + 0x10) = 4;
  iVar11 = 1;
  if (iVar7 != 0) {
    iVar11 = iVar7;
  }
  uVar1 = (ulonglong)(iVar11 - 1) * 2 + 1;
  lVar2 = 0x3f;
  if (uVar1 != 0) {
    for (; uVar1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
    }
  }
  *(int *)((longlong)IVar9 + 0x14) = 1 << ((byte)lVar2 & 0x1f);
  *(undefined1 *)((longlong)IVar9 + 0x18) = 3;
  *(undefined4 *)((longlong)IVar9 + 0x1c) = 0xc2700000;
  *(undefined4 *)((longlong)IVar9 + 0x20) = 0x1a;
  fVar13 = this->MinimumFrequency * __real_3f8ccccd;
  if (fVar13 <= __real_41a00000) {
    fVar13 = __real_41a00000;
  }
  *(float *)((longlong)IVar9 + 0x24) = fVar13;
  fVar13 = this->MaximumFrequency * __real_3f666666;
  if (__real_469c4000 <= fVar13) {
    fVar13 = __real_469c4000;
  }
  local_c0 = in_XMM2_Da / (float)iVar8;
  *(float *)((longlong)IVar9 + 0x28) = fVar13;
  *(undefined1 *)((longlong)IVar9 + 0x2c) = 2;
  *(undefined4 *)((longlong)IVar9 + 0x30) = 0x3f800000;
  fVar13 = this->Sensitivity;
  local_b0 = (undefined ***)0x0;
  local_c8 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UOnsetNRTSettings::GetSettings'::`2'::<lambda_1>,0,0>::
              _vftable_;
  local_d8 = UE::Core::Private::Function::
             TFunctionRefCaller<`UOnsetNRTSettings::GetSettings'::__l2::<lambda_1>,int,float>::Call;
  _Y = fVar13 * __real_c1200000;
  fVar15 = 0.0;
  if (fVar13 == fVar4) {
    fVar14 = 0.0;
  }
  else {
    fVar14 = powf(_X,_Y);
  }
  fVar3 = __real_3c23d70a;
  local_e8[0] = fVar14 * ___real_3e947ae2 + __real_3c23d70a;
  UE::Core::Private::Function::CheckCallable
            (UE::Core::Private::Function::
             TFunctionRefCaller<`UOnsetNRTSettings::GetSettings'::__l2::<lambda_1>,int,float>::Call)
  ;
  pcVar6 = local_d8;
  pppuVar12 = &local_c8;
  if (local_b0 != (undefined ***)0x0) {
    pppuVar12 = local_b0;
  }
  pfVar10 = (float *)(*(code *)(*pppuVar12)[1])();
  if (pcVar6 == UE::Core::Private::Function::
                TFunctionRefCaller<`UOnsetNRTSettings::GetSettings'::__l2::<lambda_1>,int,float>::
                Call) {
    iVar8 = (int)ROUND(local_e8[0] * *pfVar10 + local_e8[0] * *pfVar10 + fVar5) >> 1;
    if (iVar8 < 1) {
      iVar8 = 1;
    }
  }
  else {
    iVar8 = (*pcVar6)(pfVar10,local_e8);
  }
  *(int *)((longlong)IVar9 + 0x34) = iVar8;
  if (fVar13 == fVar4) {
    fVar14 = 0.0;
  }
  else {
    fVar14 = powf(_X,_Y);
  }
  local_e8[0] = fVar14 * ___real_3db851ec + fVar3;
  UE::Core::Private::Function::CheckCallable(local_d8);
  pcVar6 = local_d8;
  pppuVar12 = &local_c8;
  if (local_b0 != (undefined ***)0x0) {
    pppuVar12 = local_b0;
  }
  pfVar10 = (float *)(*(code *)(*pppuVar12)[1])();
  if (pcVar6 == UE::Core::Private::Function::
                TFunctionRefCaller<`UOnsetNRTSettings::GetSettings'::__l2::<lambda_1>,int,float>::
                Call) {
    iVar8 = (int)ROUND(local_e8[0] * *pfVar10 + local_e8[0] * *pfVar10 + fVar5) >> 1;
    if (iVar8 < 1) {
      iVar8 = 1;
    }
  }
  else {
    iVar8 = (*pcVar6)(pfVar10,local_e8);
  }
  *(int *)((longlong)IVar9 + 0x38) = iVar8;
  if (fVar13 == fVar4) {
    fVar14 = 0.0;
  }
  else {
    fVar14 = powf(_X,_Y);
  }
  local_e8[0] = fVar14 * __real_3ee66666 + __real_3d4ccccd;
  UE::Core::Private::Function::CheckCallable(local_d8);
  pcVar6 = local_d8;
  pppuVar12 = &local_c8;
  if (local_b0 != (undefined ***)0x0) {
    pppuVar12 = local_b0;
  }
  pfVar10 = (float *)(*(code *)(*pppuVar12)[1])();
  if (pcVar6 == UE::Core::Private::Function::
                TFunctionRefCaller<`UOnsetNRTSettings::GetSettings'::__l2::<lambda_1>,int,float>::
                Call) {
    iVar8 = (int)ROUND(local_e8[0] * *pfVar10 + local_e8[0] * *pfVar10 + fVar5) >> 1;
    if (iVar8 < 1) {
      iVar8 = 1;
    }
  }
  else {
    iVar8 = (*pcVar6)(pfVar10,local_e8);
  }
  *(int *)((longlong)IVar9 + 0x3c) = iVar8;
  if (fVar13 == fVar4) {
    fVar14 = 0.0;
  }
  else {
    fVar14 = powf(_X,_Y);
  }
  local_e8[0] = fVar14 * __real_3ee66666 + __real_3d4ccccd;
  UE::Core::Private::Function::CheckCallable(local_d8);
  pcVar6 = local_d8;
  pppuVar12 = &local_c8;
  if (local_b0 != (undefined ***)0x0) {
    pppuVar12 = local_b0;
  }
  pfVar10 = (float *)(*(code *)(*pppuVar12)[1])();
  if (pcVar6 == UE::Core::Private::Function::
                TFunctionRefCaller<`UOnsetNRTSettings::GetSettings'::__l2::<lambda_1>,int,float>::
                Call) {
    iVar8 = (int)ROUND(local_e8[0] * *pfVar10 + local_e8[0] * *pfVar10 + fVar5) >> 1;
    if (iVar8 < 1) {
      iVar8 = 1;
    }
  }
  else {
    iVar8 = (*pcVar6)(pfVar10,local_e8);
  }
  *(int *)((longlong)IVar9 + 0x40) = iVar8;
  if (fVar13 == fVar4) {
    fVar14 = 0.0;
  }
  else {
    fVar14 = powf(_X,_Y);
  }
  local_e8[0] = fVar14 * __real_3e75c28f + fVar3;
  UE::Core::Private::Function::CheckCallable(local_d8);
  pcVar6 = local_d8;
  pppuVar12 = &local_c8;
  if (local_b0 != (undefined ***)0x0) {
    pppuVar12 = local_b0;
  }
  pfVar10 = (float *)(*(code *)(*pppuVar12)[1])();
  if (pcVar6 == UE::Core::Private::Function::
                TFunctionRefCaller<`UOnsetNRTSettings::GetSettings'::__l2::<lambda_1>,int,float>::
                Call) {
    iVar8 = (int)ROUND(local_e8[0] * *pfVar10 + local_e8[0] * *pfVar10 + fVar5) >> 1;
    if (iVar8 < 1) {
      iVar8 = 1;
    }
  }
  else {
    iVar8 = (*pcVar6)(pfVar10,local_e8);
  }
  *(int *)((longlong)IVar9 + 0x44) = iVar8;
  if (fVar13 != fVar4) {
    fVar15 = powf(_X,_Y);
  }
  *(float *)((longlong)IVar9 + 0x48) = fVar15 * ___real_3e428f5c + fVar3;
  *in_RDX = IVar9;
  if (local_d8 != (code *)0x0) {
    pppuVar12 = &local_c8;
    if (local_b0 != (undefined ***)0x0) {
      pppuVar12 = local_b0;
    }
    (*(code *)(*pppuVar12)[2])();
  }
  return (TUniquePtr<Audio::IAnalyzerNRTSettings,TDefaultDelete<Audio::IAnalyzerNRTSettings>_>)
         in_RDX;
}

// StaticRegisterNativesUOnsetNRTSettings @ 14d8273e0

void __cdecl UOnsetNRTSettings::StaticRegisterNativesUOnsetNRTSettings(void)

{
  return;
}

