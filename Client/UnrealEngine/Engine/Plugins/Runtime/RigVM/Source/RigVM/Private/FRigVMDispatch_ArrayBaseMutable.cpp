// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 2

// StaticStruct @ 14a11fe50

UScriptStruct * __cdecl FRigVMDispatch_ArrayBaseMutable::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigVMDispatch_ArrayBaseMutable.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMDispatch_ArrayBaseMutable.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMDispatch_ArrayBaseMutable,(UObject *)pUVar1
                         ,L"RigVMDispatch_ArrayBaseMutable");
  }
  return Z_Registration_Info_UScriptStruct_FRigVMDispatch_ArrayBaseMutable.OuterSingleton;
}

// GetExecuteArguments_Impl @ 14a120000

TArray<FRigVMExecuteArgument,TSizedDefaultAllocator<32>_> * __thiscall
FRigVMDispatch_ArrayBaseMutable::GetExecuteArguments_Impl
          (FRigVMDispatch_ArrayBaseMutable *this,FRigVMDispatchContext *param_1)

{
  ForAnyElementType FVar1;
  undefined8 local_res18;
  uint uStack_20;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FLazyName::Resolve(&FRigVMStruct::ExecuteContextName);
      uStack_20 = CONCAT31(uStack_20._1_3_,2);
      Arguments.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      Arguments.ArrayNum = 1;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,4,1,0,&Arguments.AllocatorInstance,1,&Arguments.ArrayMax);
      FVar1 = Arguments.AllocatorInstance;
      *(undefined8 *)Arguments.AllocatorInstance.Data = local_res18;
      *(ulonglong *)(FVar1.Data + 8) = (ulonglong)uStack_20;
      *(undefined8 *)(FVar1.Data + 0x10) = 0xffffffff00000000;
      atexit(`FRigVMDispatch_ArrayBaseMutable::GetExecuteArguments_Impl'::__l2::
             _dynamic_atexit_destructor_for__Arguments__);
      _Init_thread_footer(&::_TSS0);
      return &Arguments;
    }
  }
  return &Arguments;
}

