// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chooser
// Functions: 4

// StaticStruct @ 14a86f600

UScriptStruct * __cdecl FGameplayTagQueryContextProperty::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FGameplayTagQueryContextProperty.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Chooser();
    Z_Registration_Info_UScriptStruct_FGameplayTagQueryContextProperty.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGameplayTagQueryContextProperty,
                         (UObject *)pUVar1,L"GameplayTagQueryContextProperty");
  }
  return Z_Registration_Info_UScriptStruct_FGameplayTagQueryContextProperty.OuterSingleton;
}

// SetValue @ 14a86f640

bool __thiscall
FGameplayTagQueryContextProperty::SetValue
          (FGameplayTagQueryContextProperty *this,FChooserEvaluationContext *param_1,
          FGameplayTagQuery *param_2)

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
    FGameplayTagQuery::operator=
              ((FGameplayTagQuery *)(local_38.Container + local_38.PropertyOffset),param_2);
    return true;
  }
  return false;
}

// Compile @ 14a86f6b0

void __thiscall
FGameplayTagQueryContextProperty::Compile
          (FGameplayTagQueryContextProperty *this,IHasContextClass *param_1,bool param_2)

{
  FChooserPropertyBinding::Compile(&this->Binding,param_1,param_2);
  return;
}

// HasCompileErrors @ 14a86f6c0

bool __thiscall
FGameplayTagQueryContextProperty::HasCompileErrors
          (FGameplayTagQueryContextProperty *this,FText *param_1)

{
  return false;
}

