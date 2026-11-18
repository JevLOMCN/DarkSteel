// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 2

// StaticStruct @ 14e11cd90

UScriptStruct * __cdecl FRigVMTrait_SetDeformerVector2ArrayVariable::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigVMTrait_SetDeformerVector2ArrayVariable.OuterSingleton
      == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_OptimusCore();
    Z_Registration_Info_UScriptStruct_FRigVMTrait_SetDeformerVector2ArrayVariable.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMTrait_SetDeformerVector2ArrayVariable,
                         (UObject *)pUVar1,L"RigVMTrait_SetDeformerVector2ArrayVariable");
  }
  return Z_Registration_Info_UScriptStruct_FRigVMTrait_SetDeformerVector2ArrayVariable.
         OuterSingleton;
}

// SetValue @ 14e11cdd0

void __thiscall
FRigVMTrait_SetDeformerVector2ArrayVariable::SetValue
          (FRigVMTrait_SetDeformerVector2ArrayVariable *this,UOptimusDeformerInstance *param_1)

{
  void *_Src;
  FName *pFVar1;
  ForAnyElementType FVar2;
  longlong lVar3;
  FName local_res8;
  ForAnyElementType local_18;
  int local_10;
  int local_c;
  
  local_10 = (int)this->_padding_;
  lVar3 = (longlong)local_10;
  _Src = (void *)this->_padding_;
  local_18.Data = (FScriptContainerElement *)0x0;
  if (local_10 == 0) {
    local_c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_10,0,&local_18,local_10,&local_c);
    memcpy(local_18.Data,_Src,lVar3 * 2);
  }
  FVar2.Data = (FScriptContainerElement *)L"";
  if (local_10 != 0) {
    FVar2.Data = local_18.Data;
  }
  pFVar1 = ::FName::FName(&local_res8,(wchar_t *)FVar2.Data);
  UOptimusDeformerInstance::SetVector2ArrayVariable(param_1,*pFVar1,&this->Value);
  if (local_18.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data);
  }
  return;
}

