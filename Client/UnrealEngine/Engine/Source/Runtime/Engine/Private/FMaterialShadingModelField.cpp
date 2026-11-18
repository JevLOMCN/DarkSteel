// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// StaticStruct @ 147ba23a0

UScriptStruct * __cdecl FMaterialShadingModelField::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMaterialShadingModelField.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FMaterialShadingModelField.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMaterialShadingModelField,(UObject *)pUVar1,
                         L"MaterialShadingModelField");
  }
  return Z_Registration_Info_UScriptStruct_FMaterialShadingModelField.OuterSingleton;
}

// GetFirstShadingModel @ 147efb0a0

EMaterialShadingModel __thiscall
FMaterialShadingModelField::GetFirstShadingModel(FMaterialShadingModelField *this)

{
  ushort uVar1;
  code *pcVar2;
  bool bVar3;
  EMaterialShadingModel EVar4;
  EMaterialShadingModel EVar5;
  
  if (0x1ffe < (ushort)(this->ShadingModelField - 1)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Engine\\EngineTypes.h"
                       ,0x2fc,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      EVar4 = (*pcVar2)();
      return EVar4;
    }
  }
  uVar1 = this->ShadingModelField;
  EVar4 = MSM_Unlit;
  if (uVar1 != 0) {
    for (; (uVar1 >> EVar4 & 1) == 0; EVar4 = EVar4 + MSM_DefaultLit) {
    }
  }
  EVar5 = 0x20;
  if (uVar1 != 0) {
    EVar5 = EVar4;
  }
  return EVar5;
}

