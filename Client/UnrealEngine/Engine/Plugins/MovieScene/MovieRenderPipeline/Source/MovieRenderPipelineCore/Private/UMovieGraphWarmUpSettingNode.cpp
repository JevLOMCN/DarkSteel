// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 7

// StaticClass @ 14dcf7030

UClass * __cdecl UMovieGraphWarmUpSettingNode::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphWarmUpSettingNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphWarmUpSettingNode",
               &Z_Registration_Info_UClass_UMovieGraphWarmUpSettingNode.InnerSingleton,
               StaticRegisterNativesUMovieGraphWarmUpSettingNode,0xc0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieGraphWarmUpSettingNode>,
               InternalVTableHelperCtorCaller<UMovieGraphWarmUpSettingNode>,local_res8,
               UMovieGraphSettingNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphWarmUpSettingNode.InnerSingleton;
}

// UMovieGraphWarmUpSettingNode @ 14dd0bbf0

UMovieGraphWarmUpSettingNode * __thiscall
UMovieGraphWarmUpSettingNode::UMovieGraphWarmUpSettingNode
          (UMovieGraphWarmUpSettingNode *this,FVTableHelper *param_1)

{
  UMovieGraphSettingNode::UMovieGraphSettingNode((UMovieGraphSettingNode *)this,param_1);
  this->_padding_ = (longlong)&___7UMovieGraphWarmUpSettingNode__6B_;
  return this;
}

// UMovieGraphWarmUpSettingNode @ 14dd0bc20

UMovieGraphWarmUpSettingNode * __thiscall
UMovieGraphWarmUpSettingNode::UMovieGraphWarmUpSettingNode(UMovieGraphWarmUpSettingNode *this)

{
  UMovieGraphSettingNode::UMovieGraphSettingNode((UMovieGraphSettingNode *)this);
  this->NumWarmUpFrames = 0;
  this->_padding_ = (longlong)&___7UMovieGraphWarmUpSettingNode__6B_;
  this->bEmulateMotionBlur = false;
  return this;
}

// ~UMovieGraphWarmUpSettingNode @ 14dd0e080

void __thiscall
UMovieGraphWarmUpSettingNode::~UMovieGraphWarmUpSettingNode(UMovieGraphWarmUpSettingNode *this)

{
  this->_padding_ = (longlong)&___7UMovieGraphWarmUpSettingNode__6B_;
  UMovieGraphSettingNode::~UMovieGraphSettingNode((UMovieGraphSettingNode *)this);
  return;
}

// GetBranchRestriction @ 14dd23ee0

EMovieGraphBranchRestriction __thiscall
UMovieGraphWarmUpSettingNode::GetBranchRestriction(UMovieGraphWarmUpSettingNode *this)

{
  return Globals;
}

// GetPrivateStaticClass @ 14dd2d900

UClass * __cdecl UMovieGraphWarmUpSettingNode::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphWarmUpSettingNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphWarmUpSettingNode",
               &Z_Registration_Info_UClass_UMovieGraphWarmUpSettingNode.InnerSingleton,
               StaticRegisterNativesUMovieGraphWarmUpSettingNode,0xc0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieGraphWarmUpSettingNode>,
               InternalVTableHelperCtorCaller<UMovieGraphWarmUpSettingNode>,local_res8,
               UMovieGraphSettingNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphWarmUpSettingNode.InnerSingleton;
}

// StaticRegisterNativesUMovieGraphWarmUpSettingNode @ 14dd454b0

void __cdecl UMovieGraphWarmUpSettingNode::StaticRegisterNativesUMovieGraphWarmUpSettingNode(void)

{
  return;
}

