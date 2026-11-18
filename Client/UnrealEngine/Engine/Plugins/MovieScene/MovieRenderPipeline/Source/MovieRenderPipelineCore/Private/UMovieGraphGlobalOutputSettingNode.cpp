// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 11

// StaticClass @ 14dcf89f0

UClass * __cdecl UMovieGraphGlobalOutputSettingNode::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphGlobalOutputSettingNode.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphGlobalOutputSettingNode",
               &Z_Registration_Info_UClass_UMovieGraphGlobalOutputSettingNode.InnerSingleton,
               StaticRegisterNativesUMovieGraphGlobalOutputSettingNode,0x148,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieGraphGlobalOutputSettingNode>,
               InternalVTableHelperCtorCaller<UMovieGraphGlobalOutputSettingNode>,local_res8,
               UMovieGraphSettingNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphGlobalOutputSettingNode.InnerSingleton;
}

// UMovieGraphGlobalOutputSettingNode @ 14dd0a4e0

UMovieGraphGlobalOutputSettingNode * __thiscall
UMovieGraphGlobalOutputSettingNode::UMovieGraphGlobalOutputSettingNode
          (UMovieGraphGlobalOutputSettingNode *this,FVTableHelper *param_1)

{
  UMovieGraphSettingNode::UMovieGraphSettingNode((UMovieGraphSettingNode *)this,param_1);
  this->_padding_ = (longlong)&___7UMovieGraphGlobalOutputSettingNode__6B_;
  (this->OutputDirectory).Path.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OutputDirectory).Path.Data.ArrayNum = 0;
  (this->OutputDirectory).Path.Data.ArrayMax = 0;
  (this->OutputResolution).ProfileName = FMovieGraphNamedResolution::DefaultResolutionName;
  (this->OutputResolution).Resolution.field0_0x0._s_0 =
       (TIntPoint<int>_u_0_s_0)FMovieGraphNamedResolution::DefaultResolution.field0_0x0;
  (this->OutputResolution).Description.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OutputResolution).Description.Data.ArrayNum = 0;
  (this->OutputResolution).Description.Data.ArrayMax = 0;
  (this->OutputFrameRate).Numerator = 60000;
  (this->OutputFrameRate).Denominator = 1;
  (this->CustomPlaybackRangeStart).Type = Custom;
  (this->CustomPlaybackRangeStart).Value = 0;
  (this->CustomPlaybackRangeEnd).Type = Custom;
  *(undefined8 *)&(this->CustomPlaybackRangeEnd).Value = 0;
  (this->CustomTimecodeStart).Minutes = 0;
  (this->CustomTimecodeStart).Seconds = 0;
  (this->CustomTimecodeStart).Frames = 0;
  (this->CustomTimecodeStart).Subframe = 0.0;
  (this->CustomTimecodeStart).bDropFrameFormat = false;
  (this->VersioningSettings).bAutoVersioning = true;
  (this->VersioningSettings).VersionNumber = 1;
  return this;
}

// UMovieGraphGlobalOutputSettingNode @ 14dd0a5a0

UMovieGraphGlobalOutputSettingNode * __thiscall
UMovieGraphGlobalOutputSettingNode::UMovieGraphGlobalOutputSettingNode
          (UMovieGraphGlobalOutputSettingNode *this)

{
  UMovieGraphSettingNode::UMovieGraphSettingNode((UMovieGraphSettingNode *)this);
  this->_padding_ = (longlong)&___7UMovieGraphGlobalOutputSettingNode__6B_;
  (this->OutputDirectory).Path.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OutputDirectory).Path.Data.ArrayNum = 0;
  (this->OutputDirectory).Path.Data.ArrayMax = 0;
  (this->OutputResolution).ProfileName = FMovieGraphNamedResolution::DefaultResolutionName;
  (this->OutputResolution).Resolution.field0_0x0._s_0 =
       (TIntPoint<int>_u_0_s_0)FMovieGraphNamedResolution::DefaultResolution.field0_0x0;
  (this->OutputResolution).Description.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OutputResolution).Description.Data.ArrayNum = 0;
  (this->OutputResolution).Description.Data.ArrayMax = 0;
  this->HandleFrameCount = 0;
  (this->CustomPlaybackRangeStart).Value = 0;
  *(undefined8 *)&(this->CustomPlaybackRangeEnd).Value = 0;
  (this->CustomTimecodeStart).Minutes = 0;
  (this->CustomTimecodeStart).Seconds = 0;
  (this->CustomTimecodeStart).Frames = 0;
  (this->CustomTimecodeStart).Subframe = 0.0;
  (this->CustomTimecodeStart).bDropFrameFormat = false;
  this->bFlushDiskWritesPerShot = false;
  this->CustomPlaybackRangeStartFrame = 0;
  this->CustomPlaybackRangeEndFrame = 0;
  (this->OutputFrameRate).Numerator = 0x18;
  (this->OutputFrameRate).Denominator = 1;
  this->bOverwriteExistingOutput = true;
  this->ZeroPadFrameNumbers = 4;
  this->FrameNumberOffset = 0;
  (this->CustomPlaybackRangeStart).Type = Custom;
  (this->CustomPlaybackRangeEnd).Type = Custom;
  this->bDropFrameTimecode = true;
  (this->VersioningSettings).bAutoVersioning = true;
  (this->VersioningSettings).VersionNumber = 1;
  ::FString::operator=(&(this->OutputDirectory).Path,L"{project_dir}/Saved/MovieRenders/");
  return this;
}

// ~UMovieGraphGlobalOutputSettingNode @ 14dd0d9c0

void __thiscall
UMovieGraphGlobalOutputSettingNode::~UMovieGraphGlobalOutputSettingNode
          (UMovieGraphGlobalOutputSettingNode *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UMovieGraphGlobalOutputSettingNode__6B_;
  pFVar1 = (this->OutputResolution).Description.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->OutputDirectory).Path.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UMovieGraphSettingNode::~UMovieGraphSettingNode((UMovieGraphSettingNode *)this);
  return;
}

// ApplyPostLoadPropertyConversions @ 14dd13750

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieGraphGlobalOutputSettingNode::ApplyPostLoadPropertyConversions
          (UMovieGraphGlobalOutputSettingNode *this,bool param_1)

{
  undefined1 uVar1;
  int iVar2;
  
  uVar1 = this->field_0xb1;
  if (this->bOverride_CustomPlaybackRangeStartFrame != 0) {
    iVar2 = this->CustomPlaybackRangeStartFrame;
    (this->CustomPlaybackRangeStart).Type = Custom;
    (this->CustomPlaybackRangeStart).Value = iVar2;
    this->field_0xb1 = uVar1 & 0xfe | 4;
    this->CustomPlaybackRangeStartFrame = 0;
    if ((param_1) && (2 < (byte)LogMovieRenderPipeline._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline);
    }
  }
  uVar1 = this->field_0xb1;
  if (this->bOverride_CustomPlaybackRangeEndFrame != '\0') {
    iVar2 = this->CustomPlaybackRangeEndFrame;
    (this->CustomPlaybackRangeEnd).Type = Custom;
    (this->CustomPlaybackRangeEnd).Value = iVar2;
    this->field_0xb1 = uVar1 & 0xfd | 8;
    this->CustomPlaybackRangeEndFrame = 0;
    if ((param_1) && (2 < (byte)LogMovieRenderPipeline._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline);
    }
  }
  return;
}

// GetFormatResolveArgs @ 14dd25c60

void __thiscall
UMovieGraphGlobalOutputSettingNode::GetFormatResolveArgs
          (UMovieGraphGlobalOutputSettingNode *this,FMovieGraphResolveArgs *param_1,
          FMovieGraphRenderDataIdentifier *param_2)

{
  bool bVar1;
  FString *pFVar2;
  FMovieGraphNamedResolution *pFVar3;
  FString local_88;
  FString local_78;
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  FMovieGraphNamedResolution local_48;
  FName local_28;
  TIntPoint<int>_u_0 local_20;
  FString local_18;
  
  pFVar2 = FPaths::ProjectDir((FString *)&local_48);
  FPaths::ConvertRelativePathToFull(&local_78,pFVar2);
  if (local_48.ProfileName != (FName)0x0) {
    FMemory::Free((void *)local_48.ProfileName);
  }
  ::FString::FString(&local_88,L"project_dir");
  TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>::
  Emplace<FString,FString_const_&>
            ((TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
              *)param_1,&local_88,&local_78);
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_88,L"unreal/project_dir");
  TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>::
  Emplace<FString,FString_const_&>
            ((TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
              *)&param_1->FileMetadata,&local_88,&local_78);
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  bVar1 = UMovieGraphBlueprintLibrary::IsNamedResolutionValid(&(this->OutputResolution).ProfileName)
  ;
  if (bVar1) {
    pFVar3 = UMovieGraphBlueprintLibrary::NamedResolutionFromProfile
                       (&local_48,&(this->OutputResolution).ProfileName);
    local_28 = pFVar3->ProfileName;
    pFVar2 = &pFVar3->Description;
    local_20 = (pFVar3->Resolution).field0_0x0;
    if (&local_18 != pFVar2) {
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      local_18.Data.AllocatorInstance.Data = (pFVar2->Data).AllocatorInstance.Data;
      (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_18.Data.ArrayNum = (pFVar3->Description).Data.ArrayNum;
      local_18.Data.ArrayMax = (pFVar3->Description).Data.ArrayMax;
      (pFVar3->Description).Data.ArrayNum = 0;
      (pFVar3->Description).Data.ArrayMax = 0;
    }
    if (local_48.Description.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Description.Data.AllocatorInstance.Data);
    }
  }
  else {
    local_28 = (this->OutputResolution).ProfileName;
    local_20 = (this->OutputResolution).Resolution.field0_0x0;
    ::FString::operator=(&local_18,&(this->OutputResolution).Description);
  }
  ::FString::PrintfImpl((FString *)&local_48,L"%d_%d");
  ::FString::FString(&local_88,L"output_resolution");
  TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>::
  Emplace<FString,FString_const_&>
            ((TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
              *)param_1,&local_88,(FString *)&local_48);
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.Data.ArrayNum = 0;
  local_88.Data.ArrayMax = 0;
  ::FString::AppendInt(&local_88,local_20._0_4_);
  ::FString::FString((FString *)local_58,L"output_width");
  local_68._0_8_ = local_58;
  local_68._8_8_ = &local_88;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
            ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              *)param_1,(TPairInitializer<FString_&&,FString_&&> *)&stack0x00000008,(bool *)local_68
            );
  if ((FScriptContainerElement *)local_58._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_58._0_8_);
  }
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.Data.ArrayNum = 0;
  local_88.Data.ArrayMax = 0;
  ::FString::AppendInt(&local_88,local_20._4_4_);
  ::FString::FString((FString *)local_68,L"output_height");
  local_58._0_8_ = local_68;
  local_58._8_8_ = &local_88;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
            ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              *)param_1,(TPairInitializer<FString_&&,FString_&&> *)&stack0x00000008,(bool *)local_58
            );
  if ((FScriptContainerElement *)local_68._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_68._0_8_);
  }
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  if (local_48.ProfileName != (FName)0x0) {
    FMemory::Free((void *)local_48.ProfileName);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  return;
}

// GetPrivateStaticClass @ 14dd2c750

UClass * __cdecl UMovieGraphGlobalOutputSettingNode::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphGlobalOutputSettingNode.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphGlobalOutputSettingNode",
               &Z_Registration_Info_UClass_UMovieGraphGlobalOutputSettingNode.InnerSingleton,
               StaticRegisterNativesUMovieGraphGlobalOutputSettingNode,0x148,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieGraphGlobalOutputSettingNode>,
               InternalVTableHelperCtorCaller<UMovieGraphGlobalOutputSettingNode>,local_res8,
               UMovieGraphSettingNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphGlobalOutputSettingNode.InnerSingleton;
}

// PostFlatten @ 14dd3a460

void __thiscall
UMovieGraphGlobalOutputSettingNode::PostFlatten(UMovieGraphGlobalOutputSettingNode *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014dd3a465. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x380))(this,1);
  return;
}

// PostLoad @ 14dd3a540

void __thiscall
UMovieGraphGlobalOutputSettingNode::PostLoad(UMovieGraphGlobalOutputSettingNode *this)

{
  UMovieGraphNode::PostLoad((UMovieGraphNode *)this);
                    /* WARNING: Could not recover jumptable at 0x00014dd3a55b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x380))(this,0);
  return;
}

// StaticRegisterNativesUMovieGraphGlobalOutputSettingNode @ 14dd451e0

void __cdecl
UMovieGraphGlobalOutputSettingNode::StaticRegisterNativesUMovieGraphGlobalOutputSettingNode(void)

{
  return;
}

// UpdateTelemetry @ 14dd4b6b0

void __thiscall
UMovieGraphGlobalOutputSettingNode::UpdateTelemetry
          (UMovieGraphGlobalOutputSettingNode *this,FMoviePipelineShotRenderTelemetry *param_1)

{
  param_1->HandleFrameCount = this->HandleFrameCount;
  return;
}

