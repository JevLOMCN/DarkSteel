// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 8

// CreateNode @ 14ad720f0

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::INodeClassRegistryEntry::CreateNode
          (INodeClassRegistryEntry *this,FDefaultNamedVertexNodeConstructorParams *param_1)

{
  (param_1->NodeName).ComparisonIndex = 0;
  (param_1->NodeName).Number = 0;
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14ad72110

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::INodeClassRegistryEntry::CreateNode
          (INodeClassRegistryEntry *this,
          FDefaultNamedVertexWithLiteralNodeConstructorParams *param_1)

{
  (param_1->NodeName).ComparisonIndex = 0;
  (param_1->NodeName).Number = 0;
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14ad721d0

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::INodeClassRegistryEntry::CreateNode
          (INodeClassRegistryEntry *this,FDefaultLiteralNodeConstructorParams *param_1)

{
  (param_1->NodeName).ComparisonIndex = 0;
  (param_1->NodeName).Number = 0;
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// Clone @ 14ad72220

TUniquePtr<Metasound::Frontend::INodeClassRegistryEntry,TDefaultDelete<Metasound::Frontend::INodeClassRegistryEntry>_>
 __thiscall Metasound::Frontend::INodeClassRegistryEntry::Clone(INodeClassRegistryEntry *this)

{
  INodeClassRegistryEntry *in_RDX;
  
  *in_RDX = (INodeClassRegistryEntry)0x0;
  return (TUniquePtr<Metasound::Frontend::INodeClassRegistryEntry,TDefaultDelete<Metasound::Frontend::INodeClassRegistryEntry>_>
          )in_RDX;
}

// IsNative @ 14ad722a0

bool __thiscall
Metasound::Frontend::INodeClassRegistryEntry::IsNative(INodeClassRegistryEntry *this)

{
  return false;
}

// ~INodeClassRegistryEntry @ 14ad9ecc0

void __thiscall
Metasound::Frontend::INodeClassRegistryEntry::~INodeClassRegistryEntry
          (INodeClassRegistryEntry *this)

{
  return;
}

// CreateFrontendNodeConfiguration @ 14ae67c80

/* WARNING: Enum "Type": Some values do not have unique names */

TInstancedStruct<FMetaSoundFrontendNodeConfiguration> * __thiscall
Metasound::Frontend::INodeClassRegistryEntry::CreateFrontendNodeConfiguration
          (INodeClassRegistryEntry *this,
          TInstancedStruct<FMetaSoundFrontendNodeConfiguration> *__return_storage_ptr__)

{
  FMetasoundFrontendClassName *this_00;
  FString local_18;
  
  if ((!bDidWarn) && (2 < (byte)LogMetaSound._0_1_)) {
    this_00 = (FMetasoundFrontendClassName *)(**(code **)((longlong)*this + 8))();
    FMetasoundFrontendClassName::ToString(this_00,&local_18);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  (__return_storage_ptr__->InstancedStruct).ScriptStruct.field0_0x0.DebugPtr = (UScriptStruct *)0x0;
  (__return_storage_ptr__->InstancedStruct).StructMemory = (uchar *)0x0;
  FInstancedStruct::FInstancedStruct(&__return_storage_ptr__->InstancedStruct);
  return __return_storage_ptr__;
}

// CreateNode @ 14ae69990

/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::INodeClassRegistryEntry::CreateNode
          (INodeClassRegistryEntry *this,FNodeData *param_1)

{
  FName *pFVar1;
  FNodeData *in_R8;
  FString local_78;
  uint uStack_68;
  uint uStack_64;
  FMetasoundFrontendClassName local_58;
  undefined1 local_40;
  undefined8 local_3c;
  undefined8 uStack_34;
  undefined8 local_2c;
  undefined8 uStack_24;
  undefined8 local_1c;
  
  if (!bDidLogError) {
    bDidLogError = true;
    pFVar1 = (FName *)(**(code **)((longlong)*this + 8))();
    local_58.Namespace = *pFVar1;
    local_58.Name = pFVar1[1];
    local_58.Variant = pFVar1[2];
    local_40 = (undefined1)pFVar1[3].ComparisonIndex.Value;
    local_3c = *(undefined8 *)&pFVar1[3].Number;
    uStack_34 = *(undefined8 *)&pFVar1[4].Number;
    local_2c = *(undefined8 *)&pFVar1[5].Number;
    uStack_24 = *(undefined8 *)&pFVar1[6].Number;
    local_1c = *(undefined8 *)&pFVar1[7].Number;
    if (2 < (byte)LogMetaSound._0_1_) {
      FMetasoundFrontendClassName::ToString(&local_58,&local_78);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
    }
  }
  local_78.Data.AllocatorInstance.Data = *(FScriptContainerElement **)&in_R8->Name;
  local_78.Data.ArrayNum = (in_R8->ID).A;
  local_78.Data.ArrayMax = (in_R8->ID).B;
  uStack_68 = (in_R8->ID).C;
  uStack_64 = (in_R8->ID).D;
  (**(code **)((longlong)*this + 0x18))(this,param_1,&local_78);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

