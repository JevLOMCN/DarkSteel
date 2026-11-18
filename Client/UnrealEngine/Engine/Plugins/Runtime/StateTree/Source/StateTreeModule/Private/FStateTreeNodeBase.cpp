// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StateTreeModule
// Functions: 6

// StaticStruct @ 14d4a5890

UScriptStruct * __cdecl FStateTreeNodeBase::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FStateTreeNodeBase.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_StateTreeModule();
    Z_Registration_Info_UScriptStruct_FStateTreeNodeBase.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeNodeBase,(UObject *)pUVar1,
                         L"StateTreeNodeBase");
  }
  return Z_Registration_Info_UScriptStruct_FStateTreeNodeBase.OuterSingleton;
}

// GetInstanceDataType @ 14d4a5cf0

UStruct * __thiscall FStateTreeNodeBase::GetInstanceDataType(FStateTreeNodeBase *this)

{
  return (UStruct *)0x0;
}

// GetExecutionRuntimeDataType @ 14d4a5d00

UStruct * __thiscall FStateTreeNodeBase::GetExecutionRuntimeDataType(FStateTreeNodeBase *this)

{
  return (UStruct *)0x0;
}

// Link @ 14d4a5d10

bool __thiscall FStateTreeNodeBase::Link(FStateTreeNodeBase *this,FStateTreeLinker *param_1)

{
  return true;
}

// PostLoad @ 14d4a5d20

void __thiscall FStateTreeNodeBase::PostLoad(FStateTreeNodeBase *this,FStateTreeDataView *param_1)

{
  return;
}

// ~FStateTreeNodeBase @ 14d4b3a90

void __thiscall FStateTreeNodeBase::~FStateTreeNodeBase(FStateTreeNodeBase *this)

{
  this->_padding_ = (longlong)&___7FStateTreeNodeBase__6B_;
  return;
}

