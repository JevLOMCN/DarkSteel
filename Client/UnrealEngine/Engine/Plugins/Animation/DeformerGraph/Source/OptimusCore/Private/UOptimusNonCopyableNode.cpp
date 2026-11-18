// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 6

// StaticClass @ 14e11d6b0

UClass * __cdecl UOptimusNonCopyableNode::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusNonCopyableNode.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OptimusCore",L"OptimusNonCopyableNode",
               &Z_Registration_Info_UClass_UOptimusNonCopyableNode.InnerSingleton,
               StaticRegisterNativesUOptimusNonCopyableNode,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UOptimusNonCopyableNode>,
               InternalVTableHelperCtorCaller<UOptimusNonCopyableNode>,aFStackX_8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusNonCopyableNode.InnerSingleton;
}

// UOptimusNonCopyableNode @ 14e15c310

UOptimusNonCopyableNode * __thiscall
UOptimusNonCopyableNode::UOptimusNonCopyableNode
          (UOptimusNonCopyableNode *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UOptimusNonCopyableNode__6B_;
  return this;
}

// UOptimusNonCopyableNode @ 14e15c340

UOptimusNonCopyableNode * __thiscall
UOptimusNonCopyableNode::UOptimusNonCopyableNode
          (UOptimusNonCopyableNode *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UOptimusNonCopyableNode__6B_;
  return this;
}

// ~UOptimusNonCopyableNode @ 14e163bc0

void __thiscall UOptimusNonCopyableNode::~UOptimusNonCopyableNode(UOptimusNonCopyableNode *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 14e1d8120

UClass * __cdecl UOptimusNonCopyableNode::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusNonCopyableNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OptimusCore",L"OptimusNonCopyableNode",
               &Z_Registration_Info_UClass_UOptimusNonCopyableNode.InnerSingleton,
               StaticRegisterNativesUOptimusNonCopyableNode,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UOptimusNonCopyableNode>,
               InternalVTableHelperCtorCaller<UOptimusNonCopyableNode>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusNonCopyableNode.InnerSingleton;
}

// StaticRegisterNativesUOptimusNonCopyableNode @ 14e225d60

void __cdecl UOptimusNonCopyableNode::StaticRegisterNativesUOptimusNonCopyableNode(void)

{
  return;
}

