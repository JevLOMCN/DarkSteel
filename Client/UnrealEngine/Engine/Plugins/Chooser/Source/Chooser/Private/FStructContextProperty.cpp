// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chooser
// Functions: 4

// StaticStruct @ 14a871980

UScriptStruct * __cdecl FStructContextProperty::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FStructContextProperty.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Chooser();
    Z_Registration_Info_UScriptStruct_FStructContextProperty.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStructContextProperty,(UObject *)pUVar1,
                         L"StructContextProperty");
  }
  return Z_Registration_Info_UScriptStruct_FStructContextProperty.OuterSingleton;
}

// SetValue @ 14a8719c0

bool __thiscall
FStructContextProperty::SetValue
          (FStructContextProperty *this,FChooserEvaluationContext *param_1,FInstancedStruct *param_2
          )

{
  UScriptStruct *this_00;
  bool bVar1;
  FResolvedPropertyChainResult local_38;
  
  local_38.Container = (uchar *)0x0;
  local_38.PropertyOffset = 0;
  local_38.PropertyType = None;
  local_38.Mask = '\0';
  local_38.Function = (UFunction *)0x0;
  local_38.StructType = (UStruct *)0x0;
  bVar1 = UE::Chooser::ResolvePropertyChain
                    (param_1,(FChooserPropertyBinding *)&this->Binding,&local_38);
  if ((bVar1) && (local_38.Function == (UFunction *)0x0)) {
    this_00 = (param_2->ScriptStruct).field0_0x0.DebugPtr;
    if ((UScriptStruct *)local_38.StructType == this_00) {
      UScriptStruct::CopyScriptStruct
                (this_00,local_38.Container + local_38.PropertyOffset,param_2->StructMemory,1);
      return true;
    }
  }
  return false;
}

// Compile @ 14a871a40

void __thiscall
FStructContextProperty::Compile(FStructContextProperty *this,IHasContextClass *param_1,bool param_2)

{
  FChooserPropertyBinding::Compile((FChooserPropertyBinding *)&this->Binding,param_1,param_2);
  return;
}

// HasCompileErrors @ 14a871a50

bool __thiscall
FStructContextProperty::HasCompileErrors(FStructContextProperty *this,FText *param_1)

{
  return false;
}

