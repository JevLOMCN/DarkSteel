// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProxyTable
// Functions: 4

// StaticStruct @ 14cf24f70

UScriptStruct * __cdecl FProxyTableContextProperty::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FProxyTableContextProperty.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ProxyTable();
    Z_Registration_Info_UScriptStruct_FProxyTableContextProperty.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FProxyTableContextProperty,(UObject *)pUVar1,
                         L"ProxyTableContextProperty");
  }
  return Z_Registration_Info_UScriptStruct_FProxyTableContextProperty.OuterSingleton;
}

// GetValue @ 14cf24ff0

bool __thiscall
FProxyTableContextProperty::GetValue
          (FProxyTableContextProperty *this,FChooserEvaluationContext *param_1,UProxyTable **param_2
          )

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
    *param_2 = *(UProxyTable **)(local_38.Container + local_38.PropertyOffset);
    return true;
  }
  return false;
}

// Compile @ 14cf250a0

void __thiscall
FProxyTableContextProperty::Compile
          (FProxyTableContextProperty *this,IHasContextClass *param_1,bool param_2)

{
  FChooserPropertyBinding::Compile(&this->Binding,param_1,param_2);
  return;
}

// HasCompileErrors @ 14cf250b0

bool __thiscall
FProxyTableContextProperty::HasCompileErrors(FProxyTableContextProperty *this,FText *param_1)

{
  return false;
}

