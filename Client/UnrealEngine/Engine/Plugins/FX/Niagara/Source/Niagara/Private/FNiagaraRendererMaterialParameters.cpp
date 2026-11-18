// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 2

// StaticStruct @ 149314680

UScriptStruct * __cdecl FNiagaraRendererMaterialParameters::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraRendererMaterialParameters.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UScriptStruct_FNiagaraRendererMaterialParameters.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraRendererMaterialParameters,
                         (UObject *)pUVar1,L"NiagaraRendererMaterialParameters");
  }
  return Z_Registration_Info_UScriptStruct_FNiagaraRendererMaterialParameters.OuterSingleton;
}

// ConditionalPostLoad @ 149340770

void __thiscall
FNiagaraRendererMaterialParameters::ConditionalPostLoad(FNiagaraRendererMaterialParameters *this)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = (this->TextureParameters).ArrayNum;
  pFVar2 = (this->TextureParameters).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->TextureParameters).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FNiagaraRendererMaterialTextureParameter,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    if (*(UObject **)(pFVar2 + 8) != (UObject *)0x0) {
      UObject::ConditionalPostLoad(*(UObject **)(pFVar2 + 8));
    }
    pFVar2 = pFVar2 + 0x10;
  }
  return;
}

