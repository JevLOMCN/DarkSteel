// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 2

// StaticStruct @ 14e116920

UScriptStruct * __cdecl FRigVMTrait_SetDeformerIntVariable::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigVMTrait_SetDeformerIntVariable.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_OptimusCore();
    Z_Registration_Info_UScriptStruct_FRigVMTrait_SetDeformerIntVariable.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMTrait_SetDeformerIntVariable,
                         (UObject *)pUVar1,L"RigVMTrait_SetDeformerIntVariable");
  }
  return Z_Registration_Info_UScriptStruct_FRigVMTrait_SetDeformerIntVariable.OuterSingleton;
}

// SetValue @ 14e1169a0

void __thiscall
FRigVMTrait_SetDeformerIntVariable::SetValue
          (FRigVMTrait_SetDeformerIntVariable *this,UOptimusDeformerInstance *param_1)

{
  int iVar1;
  void *_Src;
  FName FVar2;
  FName *pFVar3;
  FFieldClass *pFVar4;
  ForAnyElementType FVar5;
  longlong lVar6;
  int local_res8 [2];
  FName local_res10;
  FOptimusValueIdentifier local_38;
  ForAnyElementType local_28;
  int local_20;
  int local_1c;
  
  local_20 = (int)this->_padding_;
  lVar6 = (longlong)local_20;
  iVar1 = this->Value;
  _Src = (void *)this->_padding_;
  local_28.Data = (FScriptContainerElement *)0x0;
  if (local_20 == 0) {
    local_1c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_20,0,&local_28,local_20,&local_1c);
    memcpy(local_28.Data,_Src,lVar6 * 2);
  }
  FVar5.Data = (FScriptContainerElement *)L"";
  if (local_20 != 0) {
    FVar5.Data = local_28.Data;
  }
  pFVar3 = ::FName::FName(&local_res10,(wchar_t *)FVar5.Data);
  FVar2 = *pFVar3;
  local_res8[0] = iVar1;
  pFVar4 = FIntProperty::StaticClass();
  local_38.Type = Variable;
  local_38.Name = FVar2;
  ::`anonymous_namespace'::SetValue<int>(&param_1->ValueMap,&local_38,pFVar4->Name,local_res8);
  if (local_28.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data);
  }
  return;
}

