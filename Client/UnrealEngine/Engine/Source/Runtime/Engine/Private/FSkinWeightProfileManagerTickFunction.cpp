// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// StaticStruct @ 14758b6c0

UScriptStruct * __cdecl FSkinWeightProfileManagerTickFunction::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FSkinWeightProfileManagerTickFunction.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FSkinWeightProfileManagerTickFunction.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSkinWeightProfileManagerTickFunction,
                         (UObject *)pUVar1,L"SkinWeightProfileManagerTickFunction");
  }
  return Z_Registration_Info_UScriptStruct_FSkinWeightProfileManagerTickFunction.OuterSingleton;
}

// DiagnosticContext @ 1475c0150

FName __thiscall
FSkinWeightProfileManagerTickFunction::DiagnosticContext
          (FSkinWeightProfileManagerTickFunction *this,bool param_1)

{
  undefined7 in_register_00000011;
  FName this_00;
  
  this_00._1_7_ = in_register_00000011;
  this_00.ComparisonIndex.Value._0_1_ = param_1;
  ::FName::FName((FName *)this_00,"FSkinWeightProfileManager");
  return this_00;
}

// DiagnosticMessage @ 1475c0180

FString * __thiscall
FSkinWeightProfileManagerTickFunction::DiagnosticMessage
          (FSkinWeightProfileManagerTickFunction *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"FSkinWeightProfileManagerTickFunction::Tick");
  return __return_storage_ptr__;
}

// ExecuteTick @ 1475c6360

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FSkinWeightProfileManagerTickFunction::ExecuteTick
          (FSkinWeightProfileManagerTickFunction *this,float param_1,ELevelTick param_2,Type param_3
          ,TRefCountPtr<FBaseGraphTask> *param_4)

{
  FSkinWeightProfileManager::DoTick(this->Owner,param_1,param_3,param_4);
  return;
}

