// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 6

// StaticClass @ 14dcf7880

UClass * __cdecl UMovieGraphDebugSettingNode::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphDebugSettingNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphDebugSettingNode",
               &Z_Registration_Info_UClass_UMovieGraphDebugSettingNode.InnerSingleton,
               StaticRegisterNativesUMovieGraphDebugSettingNode,0xd0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieGraphDebugSettingNode>,
               InternalVTableHelperCtorCaller<UMovieGraphDebugSettingNode>,local_res8,
               UMovieGraphSettingNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphDebugSettingNode.InnerSingleton;
}

// UMovieGraphDebugSettingNode @ 14dd0a270

UMovieGraphDebugSettingNode * __thiscall
UMovieGraphDebugSettingNode::UMovieGraphDebugSettingNode
          (UMovieGraphDebugSettingNode *this,FVTableHelper *param_1)

{
  UMovieGraphSettingNode::UMovieGraphSettingNode((UMovieGraphSettingNode *)this,param_1);
  this->_padding_ = (longlong)&___7UMovieGraphDebugSettingNode__6B_;
  ::FString::FString(&this->UnrealInsightsTraceFileNameFormat,L"{sequence_name}_UnrealInsights");
  return this;
}

// ~UMovieGraphDebugSettingNode @ 14dd0d8a0

void __thiscall
UMovieGraphDebugSettingNode::~UMovieGraphDebugSettingNode(UMovieGraphDebugSettingNode *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UMovieGraphDebugSettingNode__6B_;
  pFVar1 = (this->UnrealInsightsTraceFileNameFormat).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UMovieGraphSettingNode::~UMovieGraphSettingNode((UMovieGraphSettingNode *)this);
  return;
}

// GetBranchRestriction @ 14dd23e80

EMovieGraphBranchRestriction __thiscall
UMovieGraphDebugSettingNode::GetBranchRestriction(UMovieGraphDebugSettingNode *this)

{
  return Globals;
}

// GetPrivateStaticClass @ 14dd2c450

UClass * __cdecl UMovieGraphDebugSettingNode::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphDebugSettingNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphDebugSettingNode",
               &Z_Registration_Info_UClass_UMovieGraphDebugSettingNode.InnerSingleton,
               StaticRegisterNativesUMovieGraphDebugSettingNode,0xd0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieGraphDebugSettingNode>,
               InternalVTableHelperCtorCaller<UMovieGraphDebugSettingNode>,local_res8,
               UMovieGraphSettingNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphDebugSettingNode.InnerSingleton;
}

// StaticRegisterNativesUMovieGraphDebugSettingNode @ 14dd451a0

void __cdecl UMovieGraphDebugSettingNode::StaticRegisterNativesUMovieGraphDebugSettingNode(void)

{
  return;
}

