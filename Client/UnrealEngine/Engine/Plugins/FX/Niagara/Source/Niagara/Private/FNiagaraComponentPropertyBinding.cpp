// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 2

// StaticStruct @ 148fe6330

UScriptStruct * __cdecl FNiagaraComponentPropertyBinding::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraComponentPropertyBinding.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UScriptStruct_FNiagaraComponentPropertyBinding.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraComponentPropertyBinding,
                         (UObject *)pUVar1,L"NiagaraComponentPropertyBinding");
  }
  return Z_Registration_Info_UScriptStruct_FNiagaraComponentPropertyBinding.OuterSingleton;
}

// FNiagaraComponentPropertyBinding @ 149022390

FNiagaraComponentPropertyBinding * __thiscall
FNiagaraComponentPropertyBinding::FNiagaraComponentPropertyBinding
          (FNiagaraComponentPropertyBinding *this)

{
  undefined1 *puVar1;
  int iVar2;
  
  (this->AttributeBinding).RootName.ComparisonIndex = 0;
  (this->AttributeBinding).RootName.Number = 0;
  (this->AttributeBinding).ParamMapVariable.Name.ComparisonIndex = 0;
  (this->AttributeBinding).ParamMapVariable.Name.Number = 0;
  iVar2 = FNiagaraTypeDefinitionHandle::Register
                    (&(this->AttributeBinding).ParamMapVariable.TypeDefHandle,
                     &FNiagaraTypeDefinition::Vec4Def);
  (this->AttributeBinding).ParamMapVariable.TypeDefHandle.RegisteredTypeIndex = iVar2;
  (this->AttributeBinding).bBindingExistsOnSource = '\0';
  (this->AttributeBinding).bIsCachedParticleValue = '\x01';
  (this->AttributeBinding).DataSetName.ComparisonIndex = 0;
  (this->AttributeBinding).DataSetName.Number = 0;
  (this->AttributeBinding).BindingSourceMode.Value = '\0';
  (this->PropertyName).ComparisonIndex = 0;
  (this->PropertyName).Number = 0;
  (this->PropertyType).ClassStructOrEnum.field0_0x0.DebugPtr = (UObject *)0x0;
  (this->PropertyType).UnderlyingType = 0;
  (this->PropertyType).Flags = '\0';
  (this->MetadataSetterName).ComparisonIndex = 0;
  (this->MetadataSetterName).Number = 0;
  *(undefined8 *)&this->PropertySetterParameterDefaults = 0;
  *(undefined8 *)&(this->PropertySetterParameterDefaults).field_0x8 = 0;
  *(undefined8 *)&(this->PropertySetterParameterDefaults).field_0x20 = 0;
  (this->PropertyType).Size = -1;
  (this->PropertyType).Alignment = -1;
  (this->PropertyType).RegisteredTypeDefIndex = -1;
  (this->PropertyType).UnderlyingTypePathNameHash = 0xffffffff;
  *(undefined4 *)&(this->PropertySetterParameterDefaults).field_0x28 = 0;
  *(undefined4 *)&(this->PropertySetterParameterDefaults).field_0x2c = 0x80;
  *(undefined4 *)&(this->PropertySetterParameterDefaults).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PropertySetterParameterDefaults).field_0x34 = 0;
  *(undefined8 *)&(this->PropertySetterParameterDefaults).field_0x40 = 0;
  *(undefined4 *)&(this->PropertySetterParameterDefaults).field_0x48 = 0;
  return this;
}

