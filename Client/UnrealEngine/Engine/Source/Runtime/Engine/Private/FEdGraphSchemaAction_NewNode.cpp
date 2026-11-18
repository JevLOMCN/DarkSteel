// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticStruct @ 147b2b9c0

UScriptStruct * __cdecl FEdGraphSchemaAction_NewNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FEdGraphSchemaAction_NewNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FEdGraphSchemaAction_NewNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FEdGraphSchemaAction_NewNode,(UObject *)pUVar1,
                         L"EdGraphSchemaAction_NewNode");
  }
  return Z_Registration_Info_UScriptStruct_FEdGraphSchemaAction_NewNode.OuterSingleton;
}

// GetTypeId @ 147b2ba00

FName __thiscall FEdGraphSchemaAction_NewNode::GetTypeId(FEdGraphSchemaAction_NewNode *this)

{
  FName in_RDX;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName___cdecl_FEdGraphSchemaAction_NewNode::StaticGetTypeId(void)'::__l2
      ::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName___cdecl_FEdGraphSchemaAction_NewNode::StaticGetTypeId(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName___cdecl_FEdGraphSchemaAction_NewNode::StaticGetTypeId(void)'::
        __l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_static_class_FName___cdecl_FEdGraphSchemaAction_NewNode::StaticGetTypeId(void)'
                      ::__l2::Type,"FEdGraphSchemaAction_NewNode");
      _Init_thread_footer(&`public:_static_class_FName___cdecl_FEdGraphSchemaAction_NewNode::StaticGetTypeId(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  *(FName *)in_RDX =
       `public:_static_class_FName___cdecl_FEdGraphSchemaAction_NewNode::StaticGetTypeId(void)'::
       __l2::Type;
  return in_RDX;
}

// PerformAction @ 147b2bb80

UEdGraphNode * __thiscall
FEdGraphSchemaAction_NewNode::PerformAction
          (FEdGraphSchemaAction_NewNode *this,UEdGraph *param_1,UEdGraphPin *param_2,
          TVector2<float> *param_3,bool param_4)

{
  return (UEdGraphNode *)0x0;
}

// PerformAction @ 147b2bcd0

UEdGraphNode * __thiscall
FEdGraphSchemaAction_NewNode::PerformAction
          (FEdGraphSchemaAction_NewNode *this,UEdGraph *param_1,
          TArray<UEdGraphPin_*,TSizedDefaultAllocator<32>_> *param_2,TVector2<float> *param_3,
          bool param_4)

{
  return (UEdGraphNode *)0x0;
}

// AddReferencedObjects @ 147b2bce0

void __thiscall
FEdGraphSchemaAction_NewNode::AddReferencedObjects
          (FEdGraphSchemaAction_NewNode *this,FReferenceCollector *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000147b2bcf6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1->_padding_ + 0x88))(param_1,&this->NodeTemplate,0,0);
  return;
}

// CreateNode @ 147b4e800

UEdGraphNode * __cdecl
FEdGraphSchemaAction_NewNode::CreateNode
          (UEdGraph *param_1,UEdGraphPin *param_2,FDeprecateVector2DParameter *param_3,
          UEdGraphNode *param_4)

{
  return (UEdGraphNode *)0x0;
}

