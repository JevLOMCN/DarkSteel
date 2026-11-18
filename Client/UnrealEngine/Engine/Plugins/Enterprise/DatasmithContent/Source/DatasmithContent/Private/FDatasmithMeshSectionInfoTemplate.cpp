// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DatasmithContent
// Functions: 5

// StaticStruct @ 14e2ebdd0

UScriptStruct * __cdecl FDatasmithMeshSectionInfoTemplate::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDatasmithMeshSectionInfoTemplate.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DatasmithContent();
    Z_Registration_Info_UScriptStruct_FDatasmithMeshSectionInfoTemplate.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDatasmithMeshSectionInfoTemplate,
                         (UObject *)pUVar1,L"DatasmithMeshSectionInfoTemplate");
  }
  return Z_Registration_Info_UScriptStruct_FDatasmithMeshSectionInfoTemplate.OuterSingleton;
}

// FDatasmithMeshSectionInfoTemplate @ 14e2f40d0

FDatasmithMeshSectionInfoTemplate * __thiscall
FDatasmithMeshSectionInfoTemplate::FDatasmithMeshSectionInfoTemplate
          (FDatasmithMeshSectionInfoTemplate *this)

{
  this->MaterialIndex = 0;
  return this;
}

// Apply @ 14e2f8220

void __thiscall
FDatasmithMeshSectionInfoTemplate::Apply
          (FDatasmithMeshSectionInfoTemplate *this,FMeshSectionInfo *param_1,
          FDatasmithMeshSectionInfoTemplate *param_2)

{
  if ((param_2 == (FDatasmithMeshSectionInfoTemplate *)0x0) ||
     (param_1->MaterialIndex == param_2->MaterialIndex)) {
    param_1->MaterialIndex = this->MaterialIndex;
  }
  return;
}

// Equals @ 14e2f9120

bool __thiscall
FDatasmithMeshSectionInfoTemplate::Equals
          (FDatasmithMeshSectionInfoTemplate *this,FDatasmithMeshSectionInfoTemplate *param_1)

{
  return this->MaterialIndex == param_1->MaterialIndex;
}

// Load @ 14e2fdf60

void __thiscall
FDatasmithMeshSectionInfoTemplate::Load
          (FDatasmithMeshSectionInfoTemplate *this,FMeshSectionInfo *param_1)

{
  this->MaterialIndex = param_1->MaterialIndex;
  return;
}

