// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 8

// StaticClass @ 149c91e30

UClass * __cdecl UPCGBaseSubgraphNode::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UPCGBaseSubgraphNode.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGBaseSubgraphNode",
               &Z_Registration_Info_UClass_UPCGBaseSubgraphNode.InnerSingleton,
               StaticRegisterNativesUPCGBaseSubgraphNode,0x88,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGBaseSubgraphNode>,
               InternalVTableHelperCtorCaller<UPCGBaseSubgraphNode>,aFStackX_8,UPCGNode::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGBaseSubgraphNode.InnerSingleton;
}

// UPCGBaseSubgraphNode @ 149f32030

UPCGBaseSubgraphNode * __thiscall
UPCGBaseSubgraphNode::UPCGBaseSubgraphNode(UPCGBaseSubgraphNode *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined8 *)&this->field_0x28 = 0;
  *(undefined8 *)&this->field_0x30 = 0;
  *(undefined8 *)&this->field_0x38 = 0;
  *(undefined8 *)&this->field_0x40 = 0;
  *(undefined8 *)&this->field_0x48 = 0;
  *(undefined8 *)&this->field_0x50 = 0;
  *(undefined8 *)&this->field_0x58 = 0;
  *(undefined8 *)&this->field_0x60 = 0;
  *(undefined8 *)&this->field_0x68 = 0;
  *(undefined8 *)&this->field_0x70 = 0;
  *(undefined8 *)&this->field_0x78 = 0;
  *(undefined8 *)&this->field_0x80 = 0;
  *(undefined ***)this = &___7UPCGBaseSubgraphNode__6B_;
  return this;
}

// UPCGBaseSubgraphNode @ 149f32090

UPCGBaseSubgraphNode * __thiscall
UPCGBaseSubgraphNode::UPCGBaseSubgraphNode(UPCGBaseSubgraphNode *this,FObjectInitializer *param_1)

{
  UPCGNode::UPCGNode((UPCGNode *)this,param_1);
  *(undefined ***)this = &___7UPCGBaseSubgraphNode__6B_;
  return this;
}

// ~UPCGBaseSubgraphNode @ 149f34620

void __thiscall UPCGBaseSubgraphNode::~UPCGBaseSubgraphNode(UPCGBaseSubgraphNode *this)

{
  *(undefined ***)this = &___7UPCGBaseSubgraphNode__6B_;
  UPCGNode::~UPCGNode((UPCGNode *)this);
  return;
}

// GetPrivateStaticClass @ 149f4ccf0

UClass * __cdecl UPCGBaseSubgraphNode::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGBaseSubgraphNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGBaseSubgraphNode",
               &Z_Registration_Info_UClass_UPCGBaseSubgraphNode.InnerSingleton,
               StaticRegisterNativesUPCGBaseSubgraphNode,0x88,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGBaseSubgraphNode>,
               InternalVTableHelperCtorCaller<UPCGBaseSubgraphNode>,local_res8,UPCGNode::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGBaseSubgraphNode.InnerSingleton;
}

// GetSubgraph @ 149f4f260

/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */

TObjectPtr<UPCGGraph> __thiscall UPCGBaseSubgraphNode::GetSubgraph(UPCGBaseSubgraphNode *this)

{
  longlong *plVar1;
  UObject *pUVar2;
  TObjectPtr<UPCGGraph>_u_0 in_RDX;
  undefined1 local_res8 [32];
  
  plVar1 = (longlong *)(**(code **)(*(longlong *)this + 0x2d8))(this,local_res8);
  if ((longlong *)*plVar1 == (longlong *)0x0) {
    pUVar2 = (UObject *)0x0;
  }
  else {
    pUVar2 = (UObject *)(**(code **)(*(longlong *)*plVar1 + 0x2b8))();
  }
  (in_RDX.DebugPtr)->_padding_ = (longlong)pUVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar2);
  }
  return (TObjectPtr<UPCGGraph>)in_RDX;
}

// GetSubgraphInterface @ 149f4f300

TObjectPtr<UPCGGraphInterface> __thiscall
UPCGBaseSubgraphNode::GetSubgraphInterface(UPCGBaseSubgraphNode *this)

{
  TObjectPtr<UPCGGraphInterface>_u_0 in_RDX;
  
  *(undefined8 *)in_RDX.DebugPtr = 0;
  return (TObjectPtr<UPCGGraphInterface>)in_RDX;
}

// StaticRegisterNativesUPCGBaseSubgraphNode @ 149f638c0

void __cdecl UPCGBaseSubgraphNode::StaticRegisterNativesUPCGBaseSubgraphNode(void)

{
  return;
}

