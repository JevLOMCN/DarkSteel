// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 2

// StaticStruct @ 14e1026e0

UScriptStruct * __cdecl FRigVMTrait_SetDeformerBoolVariable::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigVMTrait_SetDeformerBoolVariable.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_OptimusCore();
    Z_Registration_Info_UScriptStruct_FRigVMTrait_SetDeformerBoolVariable.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMTrait_SetDeformerBoolVariable,
                         (UObject *)pUVar1,L"RigVMTrait_SetDeformerBoolVariable");
  }
  return Z_Registration_Info_UScriptStruct_FRigVMTrait_SetDeformerBoolVariable.OuterSingleton;
}

// SetValue @ 14e102720

void __thiscall
FRigVMTrait_SetDeformerBoolVariable::SetValue
          (FRigVMTrait_SetDeformerBoolVariable *this,UOptimusDeformerInstance *param_1)

{
  bool bVar1;
  void *_Src;
  FName FVar2;
  FName *pFVar3;
  FFieldClass *pFVar4;
  ForAnyElementType FVar5;
  longlong lVar6;
  bool local_res8 [8];
  FName local_res10;
  FOptimusValueIdentifier local_38;
  ForAnyElementType local_28;
  int local_20;
  int local_1c;
  
  local_20 = (int)this->_padding_;
  lVar6 = (longlong)local_20;
  bVar1 = this->Value;
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
  local_res8[0] = bVar1;
  pFVar4 = FBoolProperty::StaticClass();
  local_38.Type = Variable;
  local_38.Name = FVar2;
  ::`anonymous_namespace'::SetValue<bool>(&param_1->ValueMap,&local_38,pFVar4->Name,local_res8);
  if (local_28.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data);
  }
  return;
}

