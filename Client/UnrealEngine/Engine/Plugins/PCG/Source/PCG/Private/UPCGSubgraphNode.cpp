// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 7

// StaticClass @ 149f1b4f0

UClass * __cdecl UPCGSubgraphNode::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGSubgraphNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGSubgraphNode",
               &Z_Registration_Info_UClass_UPCGSubgraphNode.InnerSingleton,
               StaticRegisterNativesUPCGSubgraphNode,0x88,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine"
               ,InternalConstructor<UPCGSubgraphNode>,
               InternalVTableHelperCtorCaller<UPCGSubgraphNode>,local_res8,
               UPCGBaseSubgraphNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGSubgraphNode.InnerSingleton;
}

// UPCGSubgraphNode @ 149f33490

UPCGSubgraphNode * __thiscall
UPCGSubgraphNode::UPCGSubgraphNode(UPCGSubgraphNode *this,FVTableHelper *param_1)

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
  *(undefined ***)this = &___7UPCGSubgraphNode__6B_;
  return this;
}

// UPCGSubgraphNode @ 149f334f0

UPCGSubgraphNode * __thiscall
UPCGSubgraphNode::UPCGSubgraphNode(UPCGSubgraphNode *this,FObjectInitializer *param_1)

{
  UPCGNode::UPCGNode((UPCGNode *)this,param_1);
  *(undefined ***)this = &___7UPCGSubgraphNode__6B_;
  return this;
}

// ~UPCGSubgraphNode @ 149f34d40

void __thiscall UPCGSubgraphNode::~UPCGSubgraphNode(UPCGSubgraphNode *this)

{
  *(undefined ***)this = &___7UPCGBaseSubgraphNode__6B_;
  UPCGNode::~UPCGNode((UPCGNode *)this);
  return;
}

// GetPrivateStaticClass @ 149f4e190

UClass * __cdecl UPCGSubgraphNode::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGSubgraphNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGSubgraphNode",
               &Z_Registration_Info_UClass_UPCGSubgraphNode.InnerSingleton,
               StaticRegisterNativesUPCGSubgraphNode,0x88,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine"
               ,InternalConstructor<UPCGSubgraphNode>,
               InternalVTableHelperCtorCaller<UPCGSubgraphNode>,local_res8,
               UPCGBaseSubgraphNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGSubgraphNode.InnerSingleton;
}

// GetSubgraphInterface @ 149f4f330

TObjectPtr<UPCGGraphInterface> __thiscall
UPCGSubgraphNode::GetSubgraphInterface(UPCGSubgraphNode *this)

{
  int iVar1;
  UObject *pUVar2;
  UClass *pUVar3;
  UObject *pUVar4;
  TObjectPtr<UPCGGraphInterface>_u_0 in_RDX;
  
  pUVar4 = (UObject *)0x0;
  if (*(longlong **)&this->field_0x30 == (longlong *)0x0) {
LAB_149f4f381:
    pUVar2 = pUVar4;
  }
  else {
    pUVar2 = (UObject *)(**(code **)(**(longlong **)&this->field_0x30 + 0x388))();
    if (pUVar2 == (UObject *)0x0) goto LAB_149f4f381;
    pUVar3 = UPCGSubgraphSettings::StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((*(int *)(*(longlong *)&pUVar2->field_0x10 + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar2->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar3->_padding_)) goto LAB_149f4f381;
  }
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pUVar2 == (UObject *)0x0) goto LAB_149f4f3b0;
  }
  else {
    if (pUVar2 == (UObject *)0x0) goto LAB_149f4f3b0;
    UE::GC::MarkAsReachable(pUVar2);
  }
  pUVar4 = (UObject *)(**(code **)(*(longlong *)pUVar2 + 0x4f0))(pUVar2);
LAB_149f4f3b0:
  *(UObject **)in_RDX.DebugPtr = pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  return (TObjectPtr<UPCGGraphInterface>)in_RDX;
}

// StaticRegisterNativesUPCGSubgraphNode @ 149f63c60

void __cdecl UPCGSubgraphNode::StaticRegisterNativesUPCGSubgraphNode(void)

{
  return;
}

