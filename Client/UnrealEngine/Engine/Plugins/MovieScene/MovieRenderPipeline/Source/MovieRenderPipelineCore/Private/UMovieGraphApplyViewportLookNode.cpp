// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 6

// StaticClass @ 14dc997f0

UClass * __cdecl UMovieGraphApplyViewportLookNode::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphApplyViewportLookNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphApplyViewportLookNode",
               &Z_Registration_Info_UClass_UMovieGraphApplyViewportLookNode.InnerSingleton,
               StaticRegisterNativesUMovieGraphApplyViewportLookNode,0xb8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieGraphApplyViewportLookNode>,
               InternalVTableHelperCtorCaller<UMovieGraphApplyViewportLookNode>,local_res8,
               UMovieGraphSettingNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphApplyViewportLookNode.InnerSingleton;
}

// UMovieGraphApplyViewportLookNode @ 14dcaed20

UMovieGraphApplyViewportLookNode * __thiscall
UMovieGraphApplyViewportLookNode::UMovieGraphApplyViewportLookNode
          (UMovieGraphApplyViewportLookNode *this,FVTableHelper *param_1)

{
  UMovieGraphNode::UMovieGraphNode((UMovieGraphNode *)this,param_1);
  this->_padding_ = (longlong)&___7UMovieGraphApplyViewportLookNode__6B_;
  return this;
}

// ~UMovieGraphApplyViewportLookNode @ 14dcb2610

void __thiscall
UMovieGraphApplyViewportLookNode::~UMovieGraphApplyViewportLookNode
          (UMovieGraphApplyViewportLookNode *this)

{
  this->_padding_ = (longlong)&___7UMovieGraphSettingNode__6B_;
  UMovieGraphNode::~UMovieGraphNode((UMovieGraphNode *)this);
  return;
}

// GetBranchRestriction @ 14dccab70

EMovieGraphBranchRestriction __thiscall
UMovieGraphApplyViewportLookNode::GetBranchRestriction(UMovieGraphApplyViewportLookNode *this)

{
  return Globals;
}

// GetPrivateStaticClass @ 14dcd1500

UClass * __cdecl UMovieGraphApplyViewportLookNode::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphApplyViewportLookNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphApplyViewportLookNode",
               &Z_Registration_Info_UClass_UMovieGraphApplyViewportLookNode.InnerSingleton,
               StaticRegisterNativesUMovieGraphApplyViewportLookNode,0xb8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieGraphApplyViewportLookNode>,
               InternalVTableHelperCtorCaller<UMovieGraphApplyViewportLookNode>,local_res8,
               UMovieGraphSettingNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphApplyViewportLookNode.InnerSingleton;
}

// StaticRegisterNativesUMovieGraphApplyViewportLookNode @ 14dce62e0

void __cdecl
UMovieGraphApplyViewportLookNode::StaticRegisterNativesUMovieGraphApplyViewportLookNode(void)

{
  return;
}

