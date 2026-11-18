// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 6

// StaticClass @ 14e11b9d0

UClass * __cdecl UOptimusNonCollapsibleNode::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusNonCollapsibleNode.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OptimusCore",L"OptimusNonCollapsibleNode",
               &Z_Registration_Info_UClass_UOptimusNonCollapsibleNode.InnerSingleton,
               StaticRegisterNativesUOptimusNonCollapsibleNode,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UOptimusNonCollapsibleNode>,
               InternalVTableHelperCtorCaller<UOptimusNonCollapsibleNode>,aFStackX_8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusNonCollapsibleNode.InnerSingleton;
}

// UOptimusNonCollapsibleNode @ 14e15c2b0

UOptimusNonCollapsibleNode * __thiscall
UOptimusNonCollapsibleNode::UOptimusNonCollapsibleNode
          (UOptimusNonCollapsibleNode *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UOptimusNonCollapsibleNode__6B_;
  return this;
}

// UOptimusNonCollapsibleNode @ 14e15c2e0

UOptimusNonCollapsibleNode * __thiscall
UOptimusNonCollapsibleNode::UOptimusNonCollapsibleNode
          (UOptimusNonCollapsibleNode *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UOptimusNonCollapsibleNode__6B_;
  return this;
}

// ~UOptimusNonCollapsibleNode @ 14e163bb0

void __thiscall
UOptimusNonCollapsibleNode::~UOptimusNonCollapsibleNode(UOptimusNonCollapsibleNode *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 14e1d8060

UClass * __cdecl UOptimusNonCollapsibleNode::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusNonCollapsibleNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OptimusCore",L"OptimusNonCollapsibleNode",
               &Z_Registration_Info_UClass_UOptimusNonCollapsibleNode.InnerSingleton,
               StaticRegisterNativesUOptimusNonCollapsibleNode,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UOptimusNonCollapsibleNode>,
               InternalVTableHelperCtorCaller<UOptimusNonCollapsibleNode>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusNonCollapsibleNode.InnerSingleton;
}

// StaticRegisterNativesUOptimusNonCollapsibleNode @ 14e225d50

void __cdecl UOptimusNonCollapsibleNode::StaticRegisterNativesUOptimusNonCollapsibleNode(void)

{
  return;
}

