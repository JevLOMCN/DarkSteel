// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 2

// StaticStruct @ 14e11c3a0

UScriptStruct * __cdecl FRigVMTrait_SetDeformerFloatVariable::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigVMTrait_SetDeformerFloatVariable.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_OptimusCore();
    Z_Registration_Info_UScriptStruct_FRigVMTrait_SetDeformerFloatVariable.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMTrait_SetDeformerFloatVariable,
                         (UObject *)pUVar1,L"RigVMTrait_SetDeformerFloatVariable");
  }
  return Z_Registration_Info_UScriptStruct_FRigVMTrait_SetDeformerFloatVariable.OuterSingleton;
}

// SetValue @ 14e11c420

void __thiscall
FRigVMTrait_SetDeformerFloatVariable::SetValue
          (FRigVMTrait_SetDeformerFloatVariable *this,UOptimusDeformerInstance *param_1)

{
  double dVar1;
  void *_Src;
  FName *pFVar2;
  ForAnyElementType FVar3;
  longlong lVar4;
  FName local_res8;
  ForAnyElementType local_28;
  int local_20;
  int local_1c [5];
  
  local_20 = (int)this->_padding_;
  lVar4 = (longlong)local_20;
  _Src = (void *)this->_padding_;
  dVar1 = this->Value;
  local_28.Data = (FScriptContainerElement *)0x0;
  if (local_20 == 0) {
    local_1c[0] = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_20,0,&local_28,local_20,local_1c);
    memcpy(local_28.Data,_Src,lVar4 * 2);
  }
  FVar3.Data = (FScriptContainerElement *)L"";
  if (local_20 != 0) {
    FVar3.Data = local_28.Data;
  }
  pFVar2 = ::FName::FName(&local_res8,(wchar_t *)FVar3.Data);
  UOptimusDeformerInstance::SetFloatVariable(param_1,*pFVar2,dVar1);
  if (local_28.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data);
  }
  return;
}

