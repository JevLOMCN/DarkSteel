// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 12

// StaticClass @ 14dd5b020

UClass * __cdecl UMoviePipelineOutputSetting::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMoviePipelineOutputSetting.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MoviePipelineOutputSetting",
               &Z_Registration_Info_UClass_UMoviePipelineOutputSetting.InnerSingleton,
               StaticRegisterNativesUMoviePipelineOutputSetting,0xb0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMoviePipelineOutputSetting>,
               InternalVTableHelperCtorCaller<UMoviePipelineOutputSetting>,local_res8,
               UMoviePipelineSetting::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMoviePipelineOutputSetting.InnerSingleton;
}

// UMoviePipelineOutputSetting @ 14dd6b330

UMoviePipelineOutputSetting * __thiscall
UMoviePipelineOutputSetting::UMoviePipelineOutputSetting
          (UMoviePipelineOutputSetting *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  (this->OutputFrameRate).Numerator = 60000;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UMoviePipelineOutputSetting__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->OutputDirectory).Path.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OutputDirectory).Path.Data.ArrayNum = 0;
  (this->OutputDirectory).Path.Data.ArrayMax = 0;
  (this->FileNameFormat).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FileNameFormat).Data.ArrayNum = 0;
  (this->FileNameFormat).Data.ArrayMax = 0;
  (this->OutputFrameRate).Denominator = 1;
  return this;
}

// UMoviePipelineOutputSetting @ 14dd6b390

UMoviePipelineOutputSetting * __thiscall
UMoviePipelineOutputSetting::UMoviePipelineOutputSetting(UMoviePipelineOutputSetting *this)

{
  UObject::UObject((UObject *)this);
  *(undefined1 *)&this->_padding_ = 1;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->OutputDirectory).Path.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OutputDirectory).Path.Data.ArrayNum = 0;
  (this->OutputDirectory).Path.Data.ArrayMax = 0;
  (this->FileNameFormat).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FileNameFormat).Data.ArrayNum = 0;
  (this->FileNameFormat).Data.ArrayMax = 0;
  this->bUseCustomFrameRate = false;
  this->HandleFrameCount = 0;
  this->bUseCustomPlaybackRange = false;
  this->CustomStartFrame = 0;
  this->CustomEndFrame = 0;
  this->bFlushDiskWritesPerShot = false;
  this->_padding_ = (longlong)&___7UMoviePipelineOutputSetting__6B_;
  (this->OutputResolution).field0_0x0._s_0.X = 0x780;
  (this->OutputResolution).field0_0x0._s_0.Y = 0x438;
  (this->OutputFrameRate).Numerator = 0x18;
  *(undefined8 *)&(this->OutputFrameRate).Denominator = 1;
  this->bOverrideExistingOutput = true;
  this->OutputFrameStep = 1;
  this->VersionNumber = 1;
  this->bAutoVersion = true;
  this->ZeroPadFrameNumbers = 4;
  this->FrameNumberOffset = 0;
  ::FString::operator=(&this->FileNameFormat,L"{sequence_name}.{frame_number}");
  ::FString::operator=(&(this->OutputDirectory).Path,L"{project_dir}/Saved/MovieRenders/");
  return this;
}

// ~UMoviePipelineOutputSetting @ 14dd6c2a0

void __thiscall
UMoviePipelineOutputSetting::~UMoviePipelineOutputSetting(UMoviePipelineOutputSetting *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UMoviePipelineOutputSetting__6B_;
  pFVar1 = (this->FileNameFormat).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->OutputDirectory).Path.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7UMoviePipelineSetting__6B_;
  DestructItems<FText,int>((FText *)this->_padding_,(int)this->_padding_);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// GetFormatArguments @ 14dd87b90

void __thiscall
UMoviePipelineOutputSetting::GetFormatArguments
          (UMoviePipelineOutputSetting *this,FMoviePipelineFormatArgs *param_1)

{
  FString *pFVar1;
  FScriptContainerElement *pFVar2;
  FString local_58;
  FString local_48;
  undefined1 local_38 [16];
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  
  pFVar1 = FPaths::ProjectDir((FString *)local_18);
  FPaths::ConvertRelativePathToFull(&local_48,pFVar1);
  if ((FScriptContainerElement *)local_18._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_18._0_8_);
  }
  ::FString::FString(&local_58,L"project_dir");
  TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>::
  Emplace<FString,FString_const_&>
            ((TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
              *)param_1,&local_58,&local_48);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_58,L"unreal/project_dir");
  TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>::
  Emplace<FString,FString_const_&>
            ((TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
              *)&param_1->FileMetadata,&local_58,&local_48);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  ::FString::PrintfImpl((FString *)local_18,L"%d_%d");
  ::FString::FString(&local_58,L"output_resolution");
  TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>::
  Emplace<FString,FString_const_&>
            ((TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
              *)param_1,&local_58,(FString *)local_18);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.Data.ArrayNum = 0;
  local_58.Data.ArrayMax = 0;
  ::FString::AppendInt(&local_58,(this->OutputResolution).field0_0x0._s_0.X);
  ::FString::FString((FString *)local_28,L"output_width");
  local_38._0_8_ = local_28;
  local_38._8_8_ = &local_58;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
            ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              *)param_1,(TPairInitializer<FString_&&,FString_&&> *)&stack0x00000008,(bool *)local_38
            );
  if ((FScriptContainerElement *)local_28._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_28._0_8_);
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.Data.ArrayNum = 0;
  local_58.Data.ArrayMax = 0;
  ::FString::AppendInt(&local_58,(this->OutputResolution).field0_0x0._s_0.Y);
  ::FString::FString((FString *)local_38,L"output_height");
  local_28._0_8_ = local_38;
  local_28._8_8_ = &local_58;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
            ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              *)param_1,(TPairInitializer<FString_&&,FString_&&> *)&stack0x00000008,(bool *)local_28
            );
  if ((FScriptContainerElement *)local_38._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_38._0_8_);
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if ((FScriptContainerElement *)local_18._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_18._0_8_);
  }
  if (this->bAutoVersion == false) {
    ::FString::PrintfImpl((FString *)local_28,L"v%0*d");
    ::FString::FString((FString *)local_18,L"version");
    TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>::
    Emplace<FString,FString_const_&>
              ((TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                *)param_1,(FString *)local_18,(FString *)local_28);
    pFVar2 = (FScriptContainerElement *)local_28._0_8_;
    if ((FScriptContainerElement *)local_18._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_18._0_8_);
      pFVar2 = (FScriptContainerElement *)local_28._0_8_;
    }
  }
  else {
    ::FString::FString((FString *)local_38,L"v00x");
    ::FString::FString((FString *)local_28,L"version");
    local_18._0_8_ = local_28;
    local_18._8_8_ = local_38;
    TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
              ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                *)param_1,(TPairInitializer<FString_&&,FString_&&> *)&stack0x00000008,
               (bool *)local_18);
    pFVar2 = (FScriptContainerElement *)local_38._0_8_;
    if ((FScriptContainerElement *)local_28._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_28._0_8_);
      pFVar2 = (FScriptContainerElement *)local_38._0_8_;
    }
  }
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return;
}

// GetPrivateStaticClass @ 14dd8bf50

UClass * __cdecl UMoviePipelineOutputSetting::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMoviePipelineOutputSetting.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MoviePipelineOutputSetting",
               &Z_Registration_Info_UClass_UMoviePipelineOutputSetting.InnerSingleton,
               StaticRegisterNativesUMoviePipelineOutputSetting,0xb0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMoviePipelineOutputSetting>,
               InternalVTableHelperCtorCaller<UMoviePipelineOutputSetting>,local_res8,
               UMoviePipelineSetting::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMoviePipelineOutputSetting.InnerSingleton;
}

// IsValidOnPrimary @ 14dd90360

bool __thiscall UMoviePipelineOutputSetting::IsValidOnPrimary(UMoviePipelineOutputSetting *this)

{
  return true;
}

// IsValidOnShots @ 14dd903c0

bool __thiscall UMoviePipelineOutputSetting::IsValidOnShots(UMoviePipelineOutputSetting *this)

{
  return false;
}

// PostLoad @ 14dd95c20

void __thiscall UMoviePipelineOutputSetting::PostLoad(UMoviePipelineOutputSetting *this)

{
  int iVar1;
  int iVar2;
  
  UObject::PostLoad((UObject *)this);
  iVar1 = (this->OutputDirectory).Path.Data.ArrayNum;
  iVar2 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar2 = 0;
  }
  if (iVar2 == 0) {
    ::FString::operator=(&(this->OutputDirectory).Path,L"{project_dir}/Saved/MovieRenders/");
    return;
  }
  return;
}

// SetupForPipelineImpl @ 14dda54c0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
UMoviePipelineOutputSetting::SetupForPipelineImpl
          (UMoviePipelineOutputSetting *this,UMoviePipeline *param_1)

{
  if (param_1 != (UMoviePipeline *)0x0) {
    if ((param_1->bFlushDiskWritesPerShot == false) && (this->bFlushDiskWritesPerShot == false)) {
      param_1->bFlushDiskWritesPerShot = false;
      return;
    }
    param_1->bFlushDiskWritesPerShot = true;
  }
  return;
}

// StaticRegisterNativesUMoviePipelineOutputSetting @ 14dda6700

void __cdecl UMoviePipelineOutputSetting::StaticRegisterNativesUMoviePipelineOutputSetting(void)

{
  return;
}

// UpdateTelemetry @ 14dda9060

void __thiscall
UMoviePipelineOutputSetting::UpdateTelemetry
          (UMoviePipelineOutputSetting *this,FMoviePipelineShotRenderTelemetry *param_1)

{
  int iVar1;
  
  iVar1 = this->HandleFrameCount;
  if (this->HandleFrameCount < param_1->HandleFrameCount) {
    iVar1 = param_1->HandleFrameCount;
  }
  param_1->HandleFrameCount = iVar1;
  return;
}

