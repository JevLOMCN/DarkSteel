// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 12

// ~INodeClassRegistry @ 14ae5c820

void __thiscall
Metasound::Frontend::INodeClassRegistry::~INodeClassRegistry(INodeClassRegistry *this)

{
  return;
}

// CreateNode @ 14ae69930

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::INodeClassRegistry::CreateNode
          (INodeClassRegistry *this,FNodeClassRegistryKey *param_1,
          FDefaultLiteralNodeConstructorParams *param_2)

{
  param_1->Type = External;
  *(undefined3 *)&param_1->field_0x1 = 0;
  (param_1->ClassName).Namespace.ComparisonIndex = 0;
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14ae69950

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::INodeClassRegistry::CreateNode
          (INodeClassRegistry *this,FNodeClassRegistryKey *param_1,
          FDefaultNamedVertexNodeConstructorParams *param_2)

{
  param_1->Type = External;
  *(undefined3 *)&param_1->field_0x1 = 0;
  (param_1->ClassName).Namespace.ComparisonIndex = 0;
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14ae69970

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::INodeClassRegistry::CreateNode
          (INodeClassRegistry *this,FNodeClassRegistryKey *param_1,
          FDefaultNamedVertexWithLiteralNodeConstructorParams *param_2)

{
  param_1->Type = External;
  *(undefined3 *)&param_1->field_0x1 = 0;
  (param_1->ClassName).Namespace.ComparisonIndex = 0;
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// Get @ 14ae74500

INodeClassRegistry * __cdecl Metasound::Frontend::INodeClassRegistry::Get(void)

{
  FNodeClassRegistry *this;
  
  if (FNodeClassRegistry::LazySingleton == (FNodeClassRegistry *)0x0) {
    this = ::operator_new(0x182b0);
    if (this != (FNodeClassRegistry *)0x0) {
      FNodeClassRegistry::LazySingleton = FNodeClassRegistry::FNodeClassRegistry(this);
      return (INodeClassRegistry *)FNodeClassRegistry::LazySingleton;
    }
    FNodeClassRegistry::LazySingleton = (FNodeClassRegistry *)0x0;
  }
  return (INodeClassRegistry *)FNodeClassRegistry::LazySingleton;
}

// GetChecked @ 14ae74760

INodeClassRegistry * __cdecl Metasound::Frontend::INodeClassRegistry::GetChecked(void)

{
  FNodeClassRegistry *this;
  
  if (FNodeClassRegistry::LazySingleton == (FNodeClassRegistry *)0x0) {
    this = ::operator_new(0x182b0);
    if (this != (FNodeClassRegistry *)0x0) {
      FNodeClassRegistry::LazySingleton = FNodeClassRegistry::FNodeClassRegistry(this);
      return (INodeClassRegistry *)FNodeClassRegistry::LazySingleton;
    }
    FNodeClassRegistry::LazySingleton = (FNodeClassRegistry *)0x0;
  }
  return (INodeClassRegistry *)FNodeClassRegistry::LazySingleton;
}

// GetFrontendClassFromRegistered @ 14ae75970

bool __cdecl
Metasound::Frontend::INodeClassRegistry::GetFrontendClassFromRegistered
          (FNodeClassRegistryKey *param_1,FMetasoundFrontendClass *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FNodeClassRegistry *this;
  
  if (FNodeClassRegistry::LazySingleton == (FNodeClassRegistry *)0x0) {
    this = ::operator_new(0x182b0);
    if (this == (FNodeClassRegistry *)0x0) {
      FNodeClassRegistry::LazySingleton = (FNodeClassRegistry *)0x0;
    }
    else {
      FNodeClassRegistry::LazySingleton = FNodeClassRegistry::FNodeClassRegistry(this);
    }
    if (FNodeClassRegistry::LazySingleton == (FNodeClassRegistry *)0x0) {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<773741605369677295>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendNodeClassRegistry.cpp"
                         ,0x5ef,"nullptr != Registry");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      return false;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014ae75a03. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (**(code **)(*(longlong *)FNodeClassRegistry::LazySingleton + 0x68))
                    (FNodeClassRegistry::LazySingleton,param_1,param_2);
  return (bool)uVar3;
}

// GetInputNodeRegistryKeyForDataType @ 14ae76050

bool __cdecl
Metasound::Frontend::INodeClassRegistry::GetInputNodeRegistryKeyForDataType
          (FName *param_1,EMetasoundFrontendVertexAccessType param_2,FNodeClassRegistryKey *param_3)

{
  undefined1 uVar1;
  FNodeClassRegistry *this;
  
  if (FNodeClassRegistry::LazySingleton == (FNodeClassRegistry *)0x0) {
    this = ::operator_new(0x182b0);
    if (this == (FNodeClassRegistry *)0x0) {
      FNodeClassRegistry::LazySingleton = (FNodeClassRegistry *)0x0;
    }
    else {
      FNodeClassRegistry::LazySingleton = FNodeClassRegistry::FNodeClassRegistry(this);
    }
    if (FNodeClassRegistry::LazySingleton == (FNodeClassRegistry *)0x0) {
      return false;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014ae760b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*(longlong *)FNodeClassRegistry::LazySingleton + 0x88))
                    (FNodeClassRegistry::LazySingleton,param_1,param_2,param_3);
  return (bool)uVar1;
}

// GetOutputNodeRegistryKeyForDataType @ 14ae77b60

bool __cdecl
Metasound::Frontend::INodeClassRegistry::GetOutputNodeRegistryKeyForDataType
          (FName *param_1,EMetasoundFrontendVertexAccessType param_2,FNodeClassRegistryKey *param_3)

{
  undefined1 uVar1;
  FNodeClassRegistry *this;
  
  if (FNodeClassRegistry::LazySingleton == (FNodeClassRegistry *)0x0) {
    this = ::operator_new(0x182b0);
    if (this == (FNodeClassRegistry *)0x0) {
      FNodeClassRegistry::LazySingleton = (FNodeClassRegistry *)0x0;
    }
    else {
      FNodeClassRegistry::LazySingleton = FNodeClassRegistry::FNodeClassRegistry(this);
    }
    if (FNodeClassRegistry::LazySingleton == (FNodeClassRegistry *)0x0) {
      return false;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014ae77bc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*(longlong *)FNodeClassRegistry::LazySingleton + 0x98))
                    (FNodeClassRegistry::LazySingleton,param_1,param_2,param_3);
  return (bool)uVar1;
}

// GetVariableNodeRegistryKeyForDataType @ 14ae78bf0

bool __cdecl
Metasound::Frontend::INodeClassRegistry::GetVariableNodeRegistryKeyForDataType
          (FName *param_1,FNodeClassRegistryKey *param_2)

{
  undefined1 uVar1;
  FNodeClassRegistry *this;
  
  if (FNodeClassRegistry::LazySingleton == (FNodeClassRegistry *)0x0) {
    this = ::operator_new(0x182b0);
    if (this == (FNodeClassRegistry *)0x0) {
      FNodeClassRegistry::LazySingleton = (FNodeClassRegistry *)0x0;
    }
    else {
      FNodeClassRegistry::LazySingleton = FNodeClassRegistry::FNodeClassRegistry(this);
    }
    if (FNodeClassRegistry::LazySingleton == (FNodeClassRegistry *)0x0) {
      return false;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014ae78c49. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*(longlong *)FNodeClassRegistry::LazySingleton + 0x90))
                    (FNodeClassRegistry::LazySingleton,param_1,param_2);
  return (bool)uVar1;
}

// IsNodeNative @ 14ae7a720

bool __thiscall
Metasound::Frontend::INodeClassRegistry::IsNodeNative
          (INodeClassRegistry *this,FNodeClassRegistryKey *param_1)

{
  return false;
}

// ShutdownMetasoundFrontend @ 14ae8a950

void __cdecl Metasound::Frontend::INodeClassRegistry::ShutdownMetasoundFrontend(void)

{
  if (FNodeClassRegistry::LazySingleton != (FNodeClassRegistry *)0x0) {
    (*(code *)**(undefined8 **)FNodeClassRegistry::LazySingleton)
              (FNodeClassRegistry::LazySingleton,1);
    FNodeClassRegistry::LazySingleton = (FNodeClassRegistry *)0x0;
  }
  return;
}

