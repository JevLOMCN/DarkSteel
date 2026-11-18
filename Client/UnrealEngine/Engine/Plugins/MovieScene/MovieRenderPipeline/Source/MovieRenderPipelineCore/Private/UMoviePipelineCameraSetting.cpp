// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 9

// StaticClass @ 14dcf8820

UClass * __cdecl UMoviePipelineCameraSetting::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMoviePipelineCameraSetting.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MoviePipelineCameraSetting",
               &Z_Registration_Info_UClass_UMoviePipelineCameraSetting.InnerSingleton,
               StaticRegisterNativesUMoviePipelineCameraSetting,0x58,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMoviePipelineCameraSetting>,
               InternalVTableHelperCtorCaller<UMoviePipelineCameraSetting>,local_res8,
               UMoviePipelineSetting::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMoviePipelineCameraSetting.InnerSingleton;
}

// UMoviePipelineCameraSetting @ 14dd0c780

UMoviePipelineCameraSetting * __thiscall
UMoviePipelineCameraSetting::UMoviePipelineCameraSetting
          (UMoviePipelineCameraSetting *this,FVTableHelper *param_1)

{
  UMoviePipelineSetting::UMoviePipelineSetting((UMoviePipelineSetting *)this,param_1);
  this->_padding_ = (longlong)&___7UMoviePipelineCameraSetting__6B_;
  return this;
}

// ~UMoviePipelineCameraSetting @ 14dd0e380

void __thiscall
UMoviePipelineCameraSetting::~UMoviePipelineCameraSetting(UMoviePipelineCameraSetting *this)

{
  this->_padding_ = (longlong)&___7UMoviePipelineCameraSetting__6B_;
  UMoviePipelineSetting::~UMoviePipelineSetting((UMoviePipelineSetting *)this);
  return;
}

// GetFormatArguments @ 14dd258b0

void __thiscall
UMoviePipelineCameraSetting::GetFormatArguments
          (UMoviePipelineCameraSetting *this,FMoviePipelineFormatArgs *param_1)

{
  UEnum *pUVar1;
  FString *pFVar2;
  undefined1 local_38 [16];
  undefined1 local_28 [16];
  FString local_18;
  
  pUVar1 = StaticEnum<enum_EMoviePipelineShutterTiming>();
  pFVar2 = UEnum::GetNameStringByValue(pUVar1,&local_18,(ulonglong)this->ShutterTiming);
  ::FString::FString((FString *)local_28,L"shutter_timing");
  local_38._0_8_ = local_28;
  local_38._8_8_ = pFVar2;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
            ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              *)param_1,(TPairInitializer<FString_&&,FString_&&> *)&stack0x00000008,(bool *)local_38
            );
  if ((FScriptContainerElement *)local_28._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_28._0_8_);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  pFVar2 = ::FString::SanitizeFloat(&local_18,(double)this->OverscanPercentage,1);
  ::FString::FString((FString *)local_38,L"overscan_percentage");
  local_28._0_8_ = local_38;
  local_28._8_8_ = pFVar2;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
            ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              *)param_1,(TPairInitializer<FString_&&,FString_&&> *)&stack0x00000008,(bool *)local_28
            );
  if ((FScriptContainerElement *)local_38._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_38._0_8_);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  pUVar1 = StaticEnum<enum_EMoviePipelineShutterTiming>();
  pFVar2 = UEnum::GetNameStringByValue(pUVar1,&local_18,(ulonglong)this->ShutterTiming);
  ::FString::FString((FString *)local_38,L"unreal/camera/shutterTiming");
  local_28._0_8_ = local_38;
  local_28._8_8_ = pFVar2;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
            ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              *)&param_1->FileMetadata,(TPairInitializer<FString_&&,FString_&&> *)&stack0x00000008,
             (bool *)local_28);
  if ((FScriptContainerElement *)local_38._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_38._0_8_);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  pFVar2 = ::FString::SanitizeFloat(&local_18,(double)this->OverscanPercentage,1);
  ::FString::FString((FString *)local_38,L"unreal/camera/overscanPercentage");
  local_28._0_8_ = local_38;
  local_28._8_8_ = pFVar2;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
            ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              *)&param_1->FileMetadata,(TPairInitializer<FString_&&,FString_&&> *)&stack0x00000008,
             (bool *)local_28);
  if ((FScriptContainerElement *)local_38._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_38._0_8_);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// GetPrivateStaticClass @ 14dd2dd70

UClass * __cdecl UMoviePipelineCameraSetting::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMoviePipelineCameraSetting.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MoviePipelineCameraSetting",
               &Z_Registration_Info_UClass_UMoviePipelineCameraSetting.InnerSingleton,
               StaticRegisterNativesUMoviePipelineCameraSetting,0x58,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMoviePipelineCameraSetting>,
               InternalVTableHelperCtorCaller<UMoviePipelineCameraSetting>,local_res8,
               UMoviePipelineSetting::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMoviePipelineCameraSetting.InnerSingleton;
}

// IsValidOnPrimary @ 14dd33dc0

bool __thiscall UMoviePipelineCameraSetting::IsValidOnPrimary(UMoviePipelineCameraSetting *this)

{
  return true;
}

// IsValidOnShots @ 14dd33e10

bool __thiscall UMoviePipelineCameraSetting::IsValidOnShots(UMoviePipelineCameraSetting *this)

{
  return true;
}

// StaticRegisterNativesUMoviePipelineCameraSetting @ 14dd455a0

void __cdecl UMoviePipelineCameraSetting::StaticRegisterNativesUMoviePipelineCameraSetting(void)

{
  return;
}

// UpdateTelemetry @ 14dd4b710

void __thiscall
UMoviePipelineCameraSetting::UpdateTelemetry
          (UMoviePipelineCameraSetting *this,FMoviePipelineShotRenderTelemetry *param_1)

{
  param_1->bUsesMultiCamera = (bool)(param_1->bUsesMultiCamera | this->bRenderAllCameras);
  return;
}

