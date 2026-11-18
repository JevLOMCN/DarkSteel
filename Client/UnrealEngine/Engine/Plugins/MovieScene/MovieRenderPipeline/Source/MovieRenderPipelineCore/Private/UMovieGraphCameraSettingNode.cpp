// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 7

// StaticClass @ 14dcf4f40

UClass * __cdecl UMovieGraphCameraSettingNode::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphCameraSettingNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphCameraSettingNode",
               &Z_Registration_Info_UClass_UMovieGraphCameraSettingNode.InnerSingleton,
               StaticRegisterNativesUMovieGraphCameraSettingNode,0xc0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieGraphCameraSettingNode>,
               InternalVTableHelperCtorCaller<UMovieGraphCameraSettingNode>,local_res8,
               UMovieGraphSettingNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphCameraSettingNode.InnerSingleton;
}

// UMovieGraphCameraSettingNode @ 14dd09f10

UMovieGraphCameraSettingNode * __thiscall
UMovieGraphCameraSettingNode::UMovieGraphCameraSettingNode
          (UMovieGraphCameraSettingNode *this,FVTableHelper *param_1)

{
  UMovieGraphSettingNode::UMovieGraphSettingNode((UMovieGraphSettingNode *)this,param_1);
  this->_padding_ = (longlong)&___7UMovieGraphCameraSettingNode__6B_;
  return this;
}

// ~UMovieGraphCameraSettingNode @ 14dd0d790

void __thiscall
UMovieGraphCameraSettingNode::~UMovieGraphCameraSettingNode(UMovieGraphCameraSettingNode *this)

{
  this->_padding_ = (longlong)&___7UMovieGraphCameraSettingNode__6B_;
  UMovieGraphSettingNode::~UMovieGraphSettingNode((UMovieGraphSettingNode *)this);
  return;
}

// GetBranchRestriction @ 14dd23e60

EMovieGraphBranchRestriction __thiscall
UMovieGraphCameraSettingNode::GetBranchRestriction(UMovieGraphCameraSettingNode *this)

{
  return Globals;
}

// GetFormatResolveArgs @ 14dd25a80

void __thiscall
UMovieGraphCameraSettingNode::GetFormatResolveArgs
          (UMovieGraphCameraSettingNode *this,FMovieGraphResolveArgs *param_1,
          FMovieGraphRenderDataIdentifier *param_2)

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

// GetPrivateStaticClass @ 14dd2c210

UClass * __cdecl UMovieGraphCameraSettingNode::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphCameraSettingNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphCameraSettingNode",
               &Z_Registration_Info_UClass_UMovieGraphCameraSettingNode.InnerSingleton,
               StaticRegisterNativesUMovieGraphCameraSettingNode,0xc0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieGraphCameraSettingNode>,
               InternalVTableHelperCtorCaller<UMovieGraphCameraSettingNode>,local_res8,
               UMovieGraphSettingNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphCameraSettingNode.InnerSingleton;
}

// StaticRegisterNativesUMovieGraphCameraSettingNode @ 14dd45170

void __cdecl UMovieGraphCameraSettingNode::StaticRegisterNativesUMovieGraphCameraSettingNode(void)

{
  return;
}

