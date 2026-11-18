// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 2

// StaticStruct @ 14e1021b0

UScriptStruct * __cdecl FRigVMTrait_SetDeformerNameVariable::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigVMTrait_SetDeformerNameVariable.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_OptimusCore();
    Z_Registration_Info_UScriptStruct_FRigVMTrait_SetDeformerNameVariable.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMTrait_SetDeformerNameVariable,
                         (UObject *)pUVar1,L"RigVMTrait_SetDeformerNameVariable");
  }
  return Z_Registration_Info_UScriptStruct_FRigVMTrait_SetDeformerNameVariable.OuterSingleton;
}

// SetValue @ 14e102200

void __thiscall
FRigVMTrait_SetDeformerNameVariable::SetValue
          (FRigVMTrait_SetDeformerNameVariable *this,UOptimusDeformerInstance *param_1)

{
  void *_Src;
  FName FVar1;
  FName *pFVar2;
  FFieldClass *pFVar3;
  ForAnyElementType FVar4;
  longlong lVar5;
  FName local_res8;
  FOptimusValueIdentifier local_28;
  ForAnyElementType local_18;
  int local_10;
  int local_c;
  
  local_10 = (int)this->_padding_;
  lVar5 = (longlong)local_10;
  _Src = (void *)this->_padding_;
  local_18.Data = (FScriptContainerElement *)0x0;
  if (local_10 == 0) {
    local_c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_10,0,&local_18,local_10,&local_c);
    memcpy(local_18.Data,_Src,lVar5 * 2);
  }
  FVar4.Data = (FScriptContainerElement *)L"";
  if (local_10 != 0) {
    FVar4.Data = local_18.Data;
  }
  pFVar2 = ::FName::FName(&local_res8,(wchar_t *)FVar4.Data);
  FVar1 = *pFVar2;
  pFVar3 = FNameProperty::StaticClass();
  local_28.Type = Variable;
  local_28.Name = FVar1;
  ::`anonymous_namespace'::SetValue<FName>(&param_1->ValueMap,&local_28,pFVar3->Name,&this->Value);
  if (local_18.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data);
  }
  return;
}

