// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 1

// Deserialize<FMetasoundFrontendDocument> @ 14ad83360

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
FStructDeserializer::Deserialize<FMetasoundFrontendDocument>
          (FMetasoundFrontendDocument *param_1,IStructDeserializerBackend *param_2)

{
  bool bVar1;
  UPackage *pUVar2;
  longlong *plVar3;
  undefined1 auStack_78 [32];
  undefined1 local_58 [56];
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  if (Z_Registration_Info_UScriptStruct_FMetasoundFrontendDocument.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_MetasoundFrontend();
    Z_Registration_Info_UScriptStruct_FMetasoundFrontendDocument.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMetasoundFrontendDocument,(UObject *)pUVar2,
                         L"MetasoundFrontendDocument");
  }
  local_58._0_4_ = Ignore;
  local_58._4_4_ = KeyValuePair;
  local_58._16_8_ = 0;
  local_20 = (longlong *)0x0;
  bVar1 = Deserialize(param_1,(UStruct *)
                              Z_Registration_Info_UScriptStruct_FMetasoundFrontendDocument.
                              OuterSingleton,param_2,(FStructDeserializerPolicies *)local_58);
  if (local_58._16_8_ != 0) {
    plVar3 = (longlong *)(local_58 + 0x20);
    if (local_20 != (longlong *)0x0) {
      plVar3 = local_20;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return bVar1;
}

