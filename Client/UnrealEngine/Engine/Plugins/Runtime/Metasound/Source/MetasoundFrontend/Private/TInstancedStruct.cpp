// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 1

// GetPtr<FMetasoundFrontendClassInterface,void> @ 14ad895f0

FMetasoundFrontendClassInterface * __thiscall
TInstancedStruct<FMetasoundFrontendClassInterface>::GetPtr<FMetasoundFrontendClassInterface,void>
          (TInstancedStruct<FMetasoundFrontendClassInterface> *this)

{
  int iVar1;
  FMetasoundFrontendClassInterface *pFVar2;
  bool bVar3;
  UPackage *pUVar4;
  TObjectPtr<UScriptStruct_const_>_u_0 local_res8;
  TObjectPtr<UScriptStruct_const_>_u_0 *local_res10 [3];
  
  pFVar2 = (FMetasoundFrontendClassInterface *)(this->InstancedStruct).StructMemory;
  local_res8 = (TObjectPtr<UScriptStruct_const_>_u_0)
               (this->InstancedStruct).ScriptStruct.field0_0x0.DebugPtr;
  if (pFVar2 == (FMetasoundFrontendClassInterface *)0x0) {
    return (FMetasoundFrontendClassInterface *)0x0;
  }
  if (local_res8.DebugPtr == (UScriptStruct *)0x0) {
    return (FMetasoundFrontendClassInterface *)0x0;
  }
  if (Z_Registration_Info_UScriptStruct_FMetasoundFrontendClassInterface.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar4 = Z_Construct_UPackage__Script_MetasoundFrontend();
    Z_Registration_Info_UScriptStruct_FMetasoundFrontendClassInterface.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMetasoundFrontendClassInterface,
                         (UObject *)pUVar4,L"MetasoundFrontendClassInterface");
  }
  if (local_res8.DebugPtr ==
      Z_Registration_Info_UScriptStruct_FMetasoundFrontendClassInterface.OuterSingleton) {
    return pFVar2;
  }
  if (Z_Registration_Info_UScriptStruct_FMetasoundFrontendClassInterface.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar4 = Z_Construct_UPackage__Script_MetasoundFrontend();
    Z_Registration_Info_UScriptStruct_FMetasoundFrontendClassInterface.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMetasoundFrontendClassInterface,
                         (UObject *)pUVar4,L"MetasoundFrontendClassInterface");
    if (Z_Registration_Info_UScriptStruct_FMetasoundFrontendClassInterface.OuterSingleton ==
        (UScriptStruct *)0x0) goto LAB_14ad896a1;
  }
  iVar1 = (int)(Z_Registration_Info_UScriptStruct_FMetasoundFrontendClassInterface.OuterSingleton)->
               _padding_;
  if (((int)(local_res8.DebugPtr)->_padding_ < iVar1) ||
     ((longlong *)*(undefined1 **)((local_res8.DebugPtr)->_padding_ + (longlong)iVar1 * 8) !=
      &(Z_Registration_Info_UScriptStruct_FMetasoundFrontendClassInterface.OuterSingleton)->
       _padding_)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (bVar3) {
    return pFVar2;
  }
LAB_14ad896a1:
  local_res10[0] = &local_res8;
  bVar3 = `UE::StructUtils::
          GetStructPtr<FMetasoundFrontendClassInterface,FMetasoundFrontendClassInterface>'::__l7::
          <lambda_1>::operator()(local_res10);
  if (bVar3) {
    return pFVar2;
  }
  return (FMetasoundFrontendClassInterface *)0x0;
}

