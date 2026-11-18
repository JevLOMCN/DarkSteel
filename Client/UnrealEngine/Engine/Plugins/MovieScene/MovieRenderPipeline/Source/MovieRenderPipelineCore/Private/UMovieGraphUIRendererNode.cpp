// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 7

// StaticClass @ 14dcf4370

UClass * __cdecl UMovieGraphUIRendererNode::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphUIRendererNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphUIRendererNode",
               &Z_Registration_Info_UClass_UMovieGraphUIRendererNode.InnerSingleton,
               StaticRegisterNativesUMovieGraphUIRendererNode,0x150,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UMovieGraphUIRendererNode>,
               InternalVTableHelperCtorCaller<UMovieGraphUIRendererNode>,local_res8,
               UMovieGraphWidgetRendererBaseNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphUIRendererNode.InnerSingleton;
}

// UMovieGraphUIRendererNode @ 14dd0ba60

UMovieGraphUIRendererNode * __thiscall
UMovieGraphUIRendererNode::UMovieGraphUIRendererNode
          (UMovieGraphUIRendererNode *this,FVTableHelper *param_1)

{
  UMovieGraphWidgetRendererBaseNode::UMovieGraphWidgetRendererBaseNode
            ((UMovieGraphWidgetRendererBaseNode *)this,param_1);
  *(undefined ***)this = &___7UMovieGraphUIRendererNode__6B_;
  return this;
}

// UMovieGraphUIRendererNode @ 14dd0ba90

UMovieGraphUIRendererNode * __thiscall
UMovieGraphUIRendererNode::UMovieGraphUIRendererNode(UMovieGraphUIRendererNode *this)

{
  UMovieGraphWidgetRendererBaseNode::UMovieGraphWidgetRendererBaseNode
            ((UMovieGraphWidgetRendererBaseNode *)this);
  *(undefined ***)this = &___7UMovieGraphUIRendererNode__6B_;
  ::FString::operator=((FString *)&this->field_0xb8,&RendererName);
  ::FString::operator=((FString *)&this->field_0xc8,L"ui");
  return this;
}

// ~UMovieGraphUIRendererNode @ 14dd0e000

void __thiscall
UMovieGraphUIRendererNode::~UMovieGraphUIRendererNode(UMovieGraphUIRendererNode *this)

{
  *(undefined ***)this = &___7UMovieGraphUIRendererNode__6B_;
  UMovieGraphWidgetRendererBaseNode::~UMovieGraphWidgetRendererBaseNode
            ((UMovieGraphWidgetRendererBaseNode *)this);
  return;
}

// GeneratePass @ 14dd205f0

TUniquePtr<UMovieGraphWidgetRendererBaseNode::FMovieGraphWidgetPass,TDefaultDelete<UMovieGraphWidgetRendererBaseNode::FMovieGraphWidgetPass>_>
 __thiscall UMovieGraphUIRendererNode::GeneratePass(UMovieGraphUIRendererNode *this)

{
  undefined8 *puVar1;
  FMovieGraphWidgetPass *in_RDX;
  
  puVar1 = ::operator_new(0x98);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[4] = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    *(undefined4 *)(puVar1 + 7) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x44) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x4c) = 0;
    puVar1[10] = 0;
    puVar1[0xb] = 0;
    puVar1[0xc] = 0;
    puVar1[0xd] = 0;
    puVar1[0xe] = 0;
    puVar1[0xf] = 0;
    puVar1[0x10] = 0;
    puVar1[0x11] = 0;
    puVar1[0x12] = 0;
    *puVar1 = &___7FMovieGraphUIPass_UMovieGraphUIRendererNode__6B_;
    *(undefined8 *)((longlong)puVar1 + 0x3c) = 1;
    in_RDX->_padding_ = (longlong)puVar1;
    return (TUniquePtr<UMovieGraphWidgetRendererBaseNode::FMovieGraphWidgetPass,TDefaultDelete<UMovieGraphWidgetRendererBaseNode::FMovieGraphWidgetPass>_>
            )in_RDX;
  }
  in_RDX->_padding_ = 0;
  return (TUniquePtr<UMovieGraphWidgetRendererBaseNode::FMovieGraphWidgetPass,TDefaultDelete<UMovieGraphWidgetRendererBaseNode::FMovieGraphWidgetPass>_>
          )in_RDX;
}

// GetPrivateStaticClass @ 14dd2d6c0

UClass * __cdecl UMovieGraphUIRendererNode::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphUIRendererNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphUIRendererNode",
               &Z_Registration_Info_UClass_UMovieGraphUIRendererNode.InnerSingleton,
               StaticRegisterNativesUMovieGraphUIRendererNode,0x150,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UMovieGraphUIRendererNode>,
               InternalVTableHelperCtorCaller<UMovieGraphUIRendererNode>,local_res8,
               UMovieGraphWidgetRendererBaseNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphUIRendererNode.InnerSingleton;
}

// StaticRegisterNativesUMovieGraphUIRendererNode @ 14dd45450

void __cdecl UMovieGraphUIRendererNode::StaticRegisterNativesUMovieGraphUIRendererNode(void)

{
  return;
}

