// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 6

// StaticClass @ 14dc97d50

UClass * __cdecl UMovieGraphPostRenderNode::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphPostRenderNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphPostRenderNode",
               &Z_Registration_Info_UClass_UMovieGraphPostRenderNode.InnerSingleton,
               StaticRegisterNativesUMovieGraphPostRenderNode,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieGraphPostRenderNode>,
               InternalVTableHelperCtorCaller<UMovieGraphPostRenderNode>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphPostRenderNode.InnerSingleton;
}

// UMovieGraphPostRenderNode @ 14dcb0940

UMovieGraphPostRenderNode * __thiscall
UMovieGraphPostRenderNode::UMovieGraphPostRenderNode
          (UMovieGraphPostRenderNode *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UMovieGraphPostRenderNode__6B_;
  return this;
}

// UMovieGraphPostRenderNode @ 14dcb0970

UMovieGraphPostRenderNode * __thiscall
UMovieGraphPostRenderNode::UMovieGraphPostRenderNode
          (UMovieGraphPostRenderNode *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UMovieGraphPostRenderNode__6B_;
  return this;
}

// ~UMovieGraphPostRenderNode @ 14dcb3190

void __thiscall
UMovieGraphPostRenderNode::~UMovieGraphPostRenderNode(UMovieGraphPostRenderNode *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 14dcd2d30

UClass * __cdecl UMovieGraphPostRenderNode::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphPostRenderNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphPostRenderNode",
               &Z_Registration_Info_UClass_UMovieGraphPostRenderNode.InnerSingleton,
               StaticRegisterNativesUMovieGraphPostRenderNode,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieGraphPostRenderNode>,
               InternalVTableHelperCtorCaller<UMovieGraphPostRenderNode>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphPostRenderNode.InnerSingleton;
}

// StaticRegisterNativesUMovieGraphPostRenderNode @ 14dce66d0

void __cdecl UMovieGraphPostRenderNode::StaticRegisterNativesUMovieGraphPostRenderNode(void)

{
  return;
}

