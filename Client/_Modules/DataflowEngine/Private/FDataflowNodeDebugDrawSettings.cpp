// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowEngine
// Functions: 2

// StaticStruct @ 1462c0ac0

UScriptStruct * __cdecl FDataflowNodeDebugDrawSettings::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDataflowNodeDebugDrawSettings.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowEngine();
    Z_Registration_Info_UScriptStruct_FDataflowNodeDebugDrawSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowNodeDebugDrawSettings,(UObject *)pUVar1,
                         L"DataflowNodeDebugDrawSettings");
  }
  return Z_Registration_Info_UScriptStruct_FDataflowNodeDebugDrawSettings.OuterSingleton;
}

// SetDebugDrawSettings @ 1462e52a0

void __thiscall
FDataflowNodeDebugDrawSettings::SetDebugDrawSettings
          (FDataflowNodeDebugDrawSettings *this,IDataflowDebugDrawInterface *param_1)

{
  (**(code **)((longlong)*param_1 + 0x20))(param_1,1);
  (**(code **)((longlong)*param_1 + 0x40))(param_1);
  (**(code **)((longlong)*param_1 + 0x18))(param_1,(double)this->LineWidthMultiplier);
  if (this->RenderType == Shaded) {
    (**(code **)((longlong)*param_1 + 0x28))(param_1,1);
    (**(code **)((longlong)*param_1 + 0x30))(param_1,this->bTranslucent);
  }
  else {
    (**(code **)((longlong)*param_1 + 0x28))(param_1,0);
  }
  (**(code **)((longlong)*param_1 + 0x20))(param_1,1);
  (**(code **)((longlong)*param_1 + 0x40))(param_1);
                    /* WARNING: Could not recover jumptable at 0x0001462e5325. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*param_1 + 8))(param_1,&this->Color);
  return;
}

