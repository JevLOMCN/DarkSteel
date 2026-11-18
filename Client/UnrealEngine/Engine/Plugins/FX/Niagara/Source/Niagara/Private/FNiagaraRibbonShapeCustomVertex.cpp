// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 2

// StaticStruct @ 1493795b0

UScriptStruct * __cdecl FNiagaraRibbonShapeCustomVertex::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraRibbonShapeCustomVertex.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UScriptStruct_FNiagaraRibbonShapeCustomVertex.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraRibbonShapeCustomVertex,(UObject *)pUVar1
                         ,L"NiagaraRibbonShapeCustomVertex");
  }
  return Z_Registration_Info_UScriptStruct_FNiagaraRibbonShapeCustomVertex.OuterSingleton;
}

// FNiagaraRibbonShapeCustomVertex @ 149386b70

FNiagaraRibbonShapeCustomVertex * __thiscall
FNiagaraRibbonShapeCustomVertex::FNiagaraRibbonShapeCustomVertex
          (FNiagaraRibbonShapeCustomVertex *this)

{
  (this->Position).field0_0x0 = (TVector2<float>_u_0)0x0;
  (this->Normal).field0_0x0 = (TVector2<float>_u_0)0x0;
  this->TextureV = 0.0;
  return this;
}

