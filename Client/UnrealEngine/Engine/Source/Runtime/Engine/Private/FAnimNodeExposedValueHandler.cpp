// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// StaticStruct @ 147515c70

UScriptStruct * __cdecl FAnimNodeExposedValueHandler::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAnimNodeExposedValueHandler.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FAnimNodeExposedValueHandler.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimNodeExposedValueHandler,(UObject *)pUVar1,
                         L"AnimNodeExposedValueHandler");
  }
  return Z_Registration_Info_UScriptStruct_FAnimNodeExposedValueHandler.OuterSingleton;
}

// Initialize @ 147515d70

void __thiscall
FAnimNodeExposedValueHandler::Initialize(FAnimNodeExposedValueHandler *this,UClass *param_1)

{
  return;
}

// Execute @ 147515d80

void __thiscall
FAnimNodeExposedValueHandler::Execute
          (FAnimNodeExposedValueHandler *this,FAnimationBaseContext *param_1)

{
  return;
}

// ~FAnimNodeExposedValueHandler @ 1475330e0

void __thiscall
FAnimNodeExposedValueHandler::~FAnimNodeExposedValueHandler(FAnimNodeExposedValueHandler *this)

{
  *this = (FAnimNodeExposedValueHandler)&___7FAnimNodeExposedValueHandler__6B_;
  return;
}

