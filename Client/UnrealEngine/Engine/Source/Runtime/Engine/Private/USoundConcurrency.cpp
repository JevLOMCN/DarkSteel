// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// StaticClass @ 148676fa0

UClass * __cdecl USoundConcurrency::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_USoundConcurrency.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SoundConcurrency",
               &Z_Registration_Info_UClass_USoundConcurrency.InnerSingleton,
               StaticRegisterNativesUSoundConcurrency,0x50,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<USoundConcurrency>,
               InternalVTableHelperCtorCaller<USoundConcurrency>,aFStackX_8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USoundConcurrency.InnerSingleton;
}

// USoundConcurrency @ 148696be0

USoundConcurrency * __thiscall
USoundConcurrency::USoundConcurrency(USoundConcurrency *this,FVTableHelper *param_1)

{
  undefined1 *puVar1;
  
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7USoundConcurrency__6B_;
  (this->Concurrency).bLimitToOwner = '\0';
  (this->Concurrency).bEnableMaxCountPlatformScaling = '\0';
  (this->Concurrency).bVolumeScaleCanRelease = '\0';
  (this->Concurrency).MaxCount = 0x10;
  (this->Concurrency).RetriggerTime = 0.0;
  (this->Concurrency).ResolutionRule.Value = '\x03';
  (this->Concurrency).PlatformMaxCount.Default = 0x10;
  (this->Concurrency).VolumeScale = 1.0;
  (this->Concurrency).VolumeScaleMode = Default;
  (this->Concurrency).VolumeScaleAttackTime = 0.01;
  (this->Concurrency).VolumeScaleReleaseTime = 0.5;
  (this->Concurrency).VoiceStealReleaseTime = 0.0;
  return this;
}

// USoundConcurrency @ 148696c40

USoundConcurrency * __thiscall
USoundConcurrency::USoundConcurrency(USoundConcurrency *this,FObjectInitializer *param_1)

{
  undefined1 *puVar1;
  
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7USoundConcurrency__6B_;
  (this->Concurrency).bLimitToOwner = '\0';
  (this->Concurrency).bEnableMaxCountPlatformScaling = '\0';
  (this->Concurrency).bVolumeScaleCanRelease = '\0';
  (this->Concurrency).MaxCount = 0x10;
  (this->Concurrency).RetriggerTime = 0.0;
  (this->Concurrency).ResolutionRule.Value = '\x03';
  (this->Concurrency).PlatformMaxCount.Default = 0x10;
  (this->Concurrency).VolumeScale = 1.0;
  (this->Concurrency).VolumeScaleMode = Default;
  (this->Concurrency).VolumeScaleAttackTime = 0.01;
  (this->Concurrency).VolumeScaleReleaseTime = 0.5;
  (this->Concurrency).VoiceStealReleaseTime = 0.0;
  return this;
}

// ~USoundConcurrency @ 14869b5c0

void __thiscall USoundConcurrency::~USoundConcurrency(USoundConcurrency *this)

{
  this->_padding_ = (longlong)&___7USoundConcurrency__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 1486c4200

UClass * __cdecl USoundConcurrency::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USoundConcurrency.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SoundConcurrency",
               &Z_Registration_Info_UClass_USoundConcurrency.InnerSingleton,
               StaticRegisterNativesUSoundConcurrency,0x50,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<USoundConcurrency>,
               InternalVTableHelperCtorCaller<USoundConcurrency>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USoundConcurrency.InnerSingleton;
}

// SetMaxCount @ 1486ee940

bool __thiscall USoundConcurrency::SetMaxCount(USoundConcurrency *this,int param_1)

{
  if ((0 < param_1) && ((this->Concurrency).bEnableMaxCountPlatformScaling == '\0')) {
    (this->Concurrency).MaxCount = param_1;
    return true;
  }
  return false;
}

// StaticRegisterNativesUSoundConcurrency @ 1486f1820

void __cdecl USoundConcurrency::StaticRegisterNativesUSoundConcurrency(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_USoundConcurrency_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execSetMaxCount @ 1486fb3f0

void __cdecl USoundConcurrency::execSetMaxCount(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res8 [2];
  
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((local_res8[0] < 1) || ((param_1[1].field_0x4 & 4) != 0)) {
    *(undefined1 *)param_3 = 0;
  }
  else {
    *(int *)(param_1 + 1) = local_res8[0];
    *(undefined1 *)param_3 = 1;
  }
  return;
}

