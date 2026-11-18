// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NavigationSystem
// Functions: 2

// StaticStruct @ 146d63140

UScriptStruct * __cdecl FNavGraphNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FNavGraphNode.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_NavigationSystem();
    Z_Registration_Info_UScriptStruct_FNavGraphNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNavGraphNode,(UObject *)pUVar1,L"NavGraphNode");
  }
  return Z_Registration_Info_UScriptStruct_FNavGraphNode.OuterSingleton;
}

// FNavGraphNode @ 146d73ac0

FNavGraphNode * __thiscall FNavGraphNode::FNavGraphNode(FNavGraphNode *this)

{
  int *piVar1;
  
  piVar1 = &(this->Edges).ArrayMax;
  (this->Edges).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Owner).field0_0x0.DebugPtr = (UObject *)0x0;
  (this->Edges).ArrayNum = 0;
  *piVar1 = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x18,8,4,&(this->Edges).AllocatorInstance,0,piVar1);
  return this;
}

