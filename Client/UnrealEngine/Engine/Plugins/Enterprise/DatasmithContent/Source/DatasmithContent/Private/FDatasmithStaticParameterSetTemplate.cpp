// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DatasmithContent
// Functions: 5

// StaticStruct @ 14e2ecbc0

UScriptStruct * __cdecl FDatasmithStaticParameterSetTemplate::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDatasmithStaticParameterSetTemplate.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DatasmithContent();
    Z_Registration_Info_UScriptStruct_FDatasmithStaticParameterSetTemplate.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDatasmithStaticParameterSetTemplate,
                         (UObject *)pUVar1,L"DatasmithStaticParameterSetTemplate");
  }
  return Z_Registration_Info_UScriptStruct_FDatasmithStaticParameterSetTemplate.OuterSingleton;
}

// Apply @ 14e2f84e0

void __thiscall
FDatasmithStaticParameterSetTemplate::Apply
          (FDatasmithStaticParameterSetTemplate *this,UMaterialInstanceConstant *param_1,
          FDatasmithStaticParameterSetTemplate *param_2)

{
  return;
}

// Equals @ 14e2f92a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
FDatasmithStaticParameterSetTemplate::Equals
          (FDatasmithStaticParameterSetTemplate *this,FDatasmithStaticParameterSetTemplate *param_1)

{
  bool bVar1;
  TSet<TTuple<FName,bool>,TDefaultMapHashableKeyFuncs<FName,bool,0>,FDefaultSetAllocator> local_a8;
  TSet<TTuple<FName,bool>,TDefaultMapHashableKeyFuncs<FName,bool,0>,FDefaultSetAllocator> local_58;
  
  local_a8.Elements._0_8_ = 0;
  local_a8.Elements._8_8_ = 0;
  local_a8.Elements._32_8_ = 0;
  local_a8.Elements._40_8_ = ___xmm_00000000ffffffff0000008000000000;
  local_a8.Elements._48_8_ = _UNK_150631d98;
  local_a8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_a8.HashSize = 0;
  TSet<TTuple<FName,bool>,TDefaultMapHashableKeyFuncs<FName,bool,0>,FDefaultSetAllocator>::operator=
            (&local_a8,
             (TSet<TTuple<FName,bool>,TDefaultMapHashableKeyFuncs<FName,bool,0>,FDefaultSetAllocator>
              *)param_1);
  local_58.Elements._0_8_ = 0;
  local_58.Elements._40_8_ = ___xmm_00000000ffffffff0000008000000000;
  local_58.Elements._48_8_ = _UNK_150631d98;
  local_58.Elements._8_8_ = 0;
  local_58.Elements._32_8_ = 0;
  local_58.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_58.HashSize = 0;
  TSet<TTuple<FName,bool>,TDefaultMapHashableKeyFuncs<FName,bool,0>,FDefaultSetAllocator>::operator=
            (&local_58,
             (TSet<TTuple<FName,bool>,TDefaultMapHashableKeyFuncs<FName,bool,0>,FDefaultSetAllocator>
              *)this);
  bVar1 = DatasmithMaterialInstanceTemplateImpl::
          MapEquals<TMap<FName,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,bool,0>_>_>
                    ((TMap<FName,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,bool,0>_>
                      *)&local_58,
                     (TMap<FName,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,bool,0>_>
                      *)&local_a8);
  return bVar1;
}

// Load @ 14e2fe0c0

void __thiscall
FDatasmithStaticParameterSetTemplate::Load
          (FDatasmithStaticParameterSetTemplate *this,UMaterialInstanceConstant *param_1,
          bool param_2)

{
  return;
}

// LoadRebase @ 14e2fe1e0

void __thiscall
FDatasmithStaticParameterSetTemplate::LoadRebase
          (FDatasmithStaticParameterSetTemplate *this,UMaterialInstanceConstant *param_1,
          FDatasmithStaticParameterSetTemplate *param_2,
          FDatasmithStaticParameterSetTemplate *param_3)

{
  return;
}

