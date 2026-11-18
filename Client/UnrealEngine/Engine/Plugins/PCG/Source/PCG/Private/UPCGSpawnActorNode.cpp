// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 7

// StaticClass @ 149c39130

UClass * __cdecl UPCGSpawnActorNode::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGSpawnActorNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGSpawnActorNode",
               &Z_Registration_Info_UClass_UPCGSpawnActorNode.InnerSingleton,
               StaticRegisterNativesUPCGSpawnActorNode,0x88,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPCGSpawnActorNode>,
               InternalVTableHelperCtorCaller<UPCGSpawnActorNode>,local_res8,
               UPCGBaseSubgraphNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGSpawnActorNode.InnerSingleton;
}

// UPCGSpawnActorNode @ 149c4b620

UPCGSpawnActorNode * __thiscall
UPCGSpawnActorNode::UPCGSpawnActorNode(UPCGSpawnActorNode *this,FVTableHelper *param_1)

{
  UPCGBaseSubgraphNode::UPCGBaseSubgraphNode((UPCGBaseSubgraphNode *)this,param_1);
  *(undefined ***)this = &___7UPCGSpawnActorNode__6B_;
  return this;
}

// UPCGSpawnActorNode @ 149c4b650

UPCGSpawnActorNode * __thiscall
UPCGSpawnActorNode::UPCGSpawnActorNode(UPCGSpawnActorNode *this,FObjectInitializer *param_1)

{
  UPCGBaseSubgraphNode::UPCGBaseSubgraphNode((UPCGBaseSubgraphNode *)this,param_1);
  *(undefined ***)this = &___7UPCGSpawnActorNode__6B_;
  return this;
}

// ~UPCGSpawnActorNode @ 149c4da00

void __thiscall UPCGSpawnActorNode::~UPCGSpawnActorNode(UPCGSpawnActorNode *this)

{
  *(undefined ***)this = &___7UPCGSpawnActorNode__6B_;
  UPCGBaseSubgraphNode::~UPCGBaseSubgraphNode((UPCGBaseSubgraphNode *)this);
  return;
}

// GetPrivateStaticClass @ 149c783f0

UClass * __cdecl UPCGSpawnActorNode::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGSpawnActorNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGSpawnActorNode",
               &Z_Registration_Info_UClass_UPCGSpawnActorNode.InnerSingleton,
               StaticRegisterNativesUPCGSpawnActorNode,0x88,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPCGSpawnActorNode>,
               InternalVTableHelperCtorCaller<UPCGSpawnActorNode>,local_res8,
               UPCGBaseSubgraphNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGSpawnActorNode.InnerSingleton;
}

// GetSubgraphInterface @ 149c79320

TObjectPtr<UPCGGraphInterface> __thiscall
UPCGSpawnActorNode::GetSubgraphInterface(UPCGSpawnActorNode *this)

{
  int iVar1;
  UPCGSettings *pUVar2;
  UClass *pUVar3;
  TObjectPtr<UPCGGraphInterface>_u_0 in_RDX;
  UPCGSettings *pUVar4;
  UPCGSettings *pUVar5;
  
  pUVar2 = UPCGNode::GetSettings((UPCGNode *)this);
  pUVar5 = (UPCGSettings *)0x0;
  pUVar4 = (UPCGSettings *)0x0;
  if (pUVar2 == (UPCGSettings *)0x0) {
LAB_149c79364:
    pUVar2 = pUVar5;
  }
  else {
    pUVar3 = UPCGSpawnActorSettings::StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((*(int *)(pUVar2->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar3->_padding_)) goto LAB_149c79364;
  }
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pUVar2 == (UPCGSettings *)0x0) goto LAB_149c7939c;
  }
  else {
    pUVar4 = pUVar5;
    if (pUVar2 == (UPCGSettings *)0x0) goto LAB_149c7939c;
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  pUVar4 = pUVar5;
  if ((char)pUVar2[1]._padding_ != '\x02') {
    pUVar4 = (UPCGSettings *)(**(code **)(pUVar2->_padding_ + 0x4f0))(pUVar2);
  }
LAB_149c7939c:
  *(UPCGSettings **)in_RDX.DebugPtr = pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UPCGSettings *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  return (TObjectPtr<UPCGGraphInterface>)in_RDX;
}

// StaticRegisterNativesUPCGSpawnActorNode @ 149c91f90

void __cdecl UPCGSpawnActorNode::StaticRegisterNativesUPCGSpawnActorNode(void)

{
  return;
}

