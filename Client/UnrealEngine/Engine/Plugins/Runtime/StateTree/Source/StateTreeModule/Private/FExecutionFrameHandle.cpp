// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StateTreeModule
// Functions: 3

// StaticStruct @ 14d4dab90

UScriptStruct * __cdecl UE::StateTree::FExecutionFrameHandle::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FExecutionFrameHandle.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar1 = Z_Construct_UPackage__Script_StateTreeModule();
    Z_Registration_Info_UScriptStruct_FExecutionFrameHandle.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FExecutionFrameHandle,(UObject *)pUVar1,
                         L"ExecutionFrameHandle");
  }
  return Z_Registration_Info_UScriptStruct_FExecutionFrameHandle.OuterSingleton;
}

// FExecutionFrameHandle @ 14d4e9cf0

FExecutionFrameHandle * __thiscall
UE::StateTree::FExecutionFrameHandle::FExecutionFrameHandle
          (FExecutionFrameHandle *this,FExecutionFrameHandle *param_1)

{
  UStateTree *pUVar1;
  
  pUVar1 = (param_1->StateTree).field0_0x0.DebugPtr;
  (this->StateTree).field0_0x0.DebugPtr = pUVar1;
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UStateTree *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar1);
  }
  (this->RootState).Index = (param_1->RootState).Index;
  return this;
}

// FExecutionFrameHandle @ 14d4e9d40

FExecutionFrameHandle * __thiscall
UE::StateTree::FExecutionFrameHandle::FExecutionFrameHandle
          (FExecutionFrameHandle *this,TNotNull<UStateTree_const_*> param_1,
          FStateTreeStateHandle param_2)

{
  (this->StateTree).field0_0x0.ObjectPtr.field0_0x0 = (FObjectPtr_u_0)param_1.Val;
  if ((GC::GIsIncrementalReachabilityPending != false) && (param_1.Val != (UStateTree *)0x0)) {
    GC::MarkAsReachable((UObject *)param_1.Val);
    (this->RootState).Index = param_2.Index;
    return this;
  }
  (this->RootState).Index = param_2.Index;
  return this;
}

