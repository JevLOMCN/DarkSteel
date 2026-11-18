// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chooser
// Functions: 5

// StaticStruct @ 14a872ae0

UScriptStruct * __cdecl FRandomizeContextProperty::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRandomizeContextProperty.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Chooser();
    Z_Registration_Info_UScriptStruct_FRandomizeContextProperty.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRandomizeContextProperty,(UObject *)pUVar1,
                         L"RandomizeContextProperty");
  }
  return Z_Registration_Info_UScriptStruct_FRandomizeContextProperty.OuterSingleton;
}

// GetValue @ 14a872b20

bool __thiscall
FRandomizeContextProperty::GetValue
          (FRandomizeContextProperty *this,FChooserEvaluationContext *param_1,
          FChooserRandomizationContext **param_2)

{
  bool bVar1;
  FResolvedPropertyChainResult local_38;
  
  local_38.Container = (uchar *)0x0;
  local_38.PropertyOffset = 0;
  local_38.PropertyType = None;
  local_38.Mask = '\0';
  local_38.Function = (UFunction *)0x0;
  local_38.StructType = (UStruct *)0x0;
  bVar1 = UE::Chooser::ResolvePropertyChain(param_1,&this->Binding,&local_38);
  if ((bVar1) && (local_38.Function == (UFunction *)0x0)) {
    *param_2 = (FChooserRandomizationContext *)(local_38.Container + local_38.PropertyOffset);
    return true;
  }
  return false;
}

// IsBound @ 14a872b90

bool __thiscall FRandomizeContextProperty::IsBound(FRandomizeContextProperty *this)

{
  if (((this->Binding).IsBoundToRoot == false) &&
     ((this->Binding).PropertyBindingChain.ArrayNum == 0)) {
    return false;
  }
  return true;
}

// Compile @ 14a872bb0

void __thiscall
FRandomizeContextProperty::Compile
          (FRandomizeContextProperty *this,IHasContextClass *param_1,bool param_2)

{
  FChooserPropertyBinding::Compile(&this->Binding,param_1,param_2);
  return;
}

// HasCompileErrors @ 14a872bc0

bool __thiscall
FRandomizeContextProperty::HasCompileErrors(FRandomizeContextProperty *this,FText *param_1)

{
  return false;
}

