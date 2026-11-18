// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// FMaterialAttributeDefintion @ 147eefb70

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

FMaterialAttributeDefintion * __thiscall
FMaterialAttributeDefintion::FMaterialAttributeDefintion
          (FMaterialAttributeDefintion *this,FGuid *param_1,FString *param_2,
          EMaterialProperty param_3,EMaterialValueType param_4,TVector4<double> *param_5,
          EShaderFrequency param_6,int param_7,bool param_8,
          _func___cdecl_int_FMaterialCompiler_ptr_int_int_int *param_9)

{
  code *pcVar1;
  double dVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  FMaterialAttributeDefintion *pFVar7;
  
  uVar3 = param_1->B;
  uVar4 = param_1->C;
  uVar5 = param_1->D;
  (this->AttributeID).A = param_1->A;
  (this->AttributeID).B = uVar3;
  (this->AttributeID).C = uVar4;
  (this->AttributeID).D = uVar5;
  dVar2 = (param_5->field0_0x0)._s_0.Y;
  (this->DefaultValue).field0_0x0._s_0.X = (param_5->field0_0x0)._s_0.X;
  (this->DefaultValue).field0_0x0._s_0.Y = dVar2;
  dVar2 = (param_5->field0_0x0)._s_0.W;
  (this->DefaultValue).field0_0x0._s_0.Z = (param_5->field0_0x0)._s_0.Z;
  (this->DefaultValue).field0_0x0._s_0.W = dVar2;
  ::FString::FString(&this->AttributeName,param_2);
  this->ShaderFrequency = param_6;
  this->TexCoordIndex = param_7;
  this->BlendFunction = param_9;
  this->bIsHidden = param_8;
  this->Property = param_3;
  this->ValueType = param_4;
  if (((((param_4 & MCT_Float) == 0) && (param_4 != MCT_ShadingModel)) && (param_4 != MCT_Substrate)
      ) && (param_4 != MCT_MaterialAttributes)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("ValueType & MCT_Float || ValueType == MCT_ShadingModel || ValueType == MCT_Substrate || ValueType == MCT_MaterialAttributes"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialAttributeDefinitionMap.cpp"
                       ,0x29,L"Unsupported material attribute type %llu");
    if (bVar6) {
      pcVar1 = (code *)swi(3);
      pFVar7 = (FMaterialAttributeDefintion *)(*pcVar1)();
      return pFVar7;
    }
  }
  return this;
}

// CompileDefaultValue @ 147ef6890

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

int __thiscall
FMaterialAttributeDefintion::CompileDefaultValue
          (FMaterialAttributeDefintion *this,FMaterialCompiler *param_1)

{
  EMaterialProperty EVar1;
  longlong lVar2;
  EMaterialValueType EVar3;
  code *pcVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  EMaterialShadingModel EVar8;
  byte *pbVar9;
  FMaterialShadingModelField *this_00;
  undefined1 local_res8 [8];
  undefined1 local_res18 [16];
  
  if (this->Property == MP_SubsurfaceColor) {
    pbVar9 = (byte *)(**(code **)(param_1->_padding_ + 0xb8))(param_1,local_res8);
    if ((*pbVar9 & 0x40) != 0) {
      if (this->ValueType != MCT_Float3) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("ValueType == MCT_Float3",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialAttributeDefinitionMap.cpp"
                           ,0x33,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          iVar7 = (*pcVar4)();
          return iVar7;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x000147ef6902. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar7 = (**(code **)(param_1->_padding_ + 0x148))(param_1,0,0,0);
      return iVar7;
    }
  }
  EVar1 = this->Property;
  if (EVar1 == MP_ShadingModel) {
    if (this->ValueType != MCT_ShadingModel) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("ValueType == MCT_ShadingModel",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialAttributeDefinitionMap.cpp"
                         ,0x39,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        iVar7 = (*pcVar4)();
        return iVar7;
      }
    }
    lVar2 = param_1->_padding_;
    this_00 = (FMaterialShadingModelField *)(**(code **)(lVar2 + 0xb0))(param_1,local_res18);
    EVar8 = FMaterialShadingModelField::GetFirstShadingModel(this_00);
    iVar7 = (**(code **)(lVar2 + 0x8d8))(param_1,EVar8);
    return iVar7;
  }
  if (EVar1 == MP_Normal) {
    cVar6 = (**(code **)(param_1->_padding_ + 0xa8))(param_1);
    if (cVar6 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x000147ef69a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar7 = (**(code **)(param_1->_padding_ + 0x148))(param_1,0,0,__real_3f800000);
      return iVar7;
    }
                    /* WARNING: Could not recover jumptable at 0x000147ef69b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar7 = (**(code **)(param_1->_padding_ + 0x6c8))(param_1);
    return iVar7;
  }
  if (EVar1 == MP_Tangent) {
    cVar6 = (**(code **)(param_1->_padding_ + 0xa8))(param_1);
    if (cVar6 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x000147ef69ee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar7 = (**(code **)(param_1->_padding_ + 0x148))(param_1,__real_3f800000,0,0);
      return iVar7;
    }
                    /* WARNING: Could not recover jumptable at 0x000147ef69ff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar7 = (**(code **)(param_1->_padding_ + 0x6d0))(param_1);
    return iVar7;
  }
  if (EVar1 == MP_FrontMaterial) {
    if (this->ValueType != MCT_Substrate) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("ValueType == MCT_Substrate",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialAttributeDefinitionMap.cpp"
                         ,0x52,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        iVar7 = (*pcVar4)();
        return iVar7;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x000147ef6a4b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar7 = (**(code **)(param_1->_padding_ + 0x940))(param_1);
    return iVar7;
  }
  if (EVar1 == MP_Displacement) {
                    /* WARNING: Could not recover jumptable at 0x000147ef6a6f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar7 = (**(code **)(param_1->_padding_ + 0x138))(param_1,__real_bf800000);
    return iVar7;
  }
  if (this->TexCoordIndex == -1) {
    EVar3 = this->ValueType;
    if (EVar3 != MCT_Float1) {
      if (EVar3 == MCT_Float2) {
                    /* WARNING: Could not recover jumptable at 0x000147ef6b3f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        iVar7 = (**(code **)(param_1->_padding_ + 0x140))
                          (param_1,(float)(this->DefaultValue).field0_0x0._s_0.X,
                           (float)(this->DefaultValue).field0_0x0._s_0.Y);
        return iVar7;
      }
      if (EVar3 == MCT_Float3) {
                    /* WARNING: Could not recover jumptable at 0x000147ef6b16. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        iVar7 = (**(code **)(param_1->_padding_ + 0x148))
                          (param_1,(float)(this->DefaultValue).field0_0x0._s_0.X,
                           (float)(this->DefaultValue).field0_0x0._s_0.Y,
                           (float)(this->DefaultValue).field0_0x0._s_0.Z);
        return iVar7;
      }
      if (EVar3 != MCT_Float) {
        iVar7 = (**(code **)(param_1->_padding_ + 0x150))
                          (param_1,(float)(this->DefaultValue).field0_0x0._s_0.X,
                           (float)(this->DefaultValue).field0_0x0._s_0.Y,
                           (float)(this->DefaultValue).field0_0x0._s_0.Z,
                           (float)(this->DefaultValue).field0_0x0._s_0.W);
        return iVar7;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x000147ef6b5f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar7 = (**(code **)(param_1->_padding_ + 0x138))
                      (param_1,(float)(this->DefaultValue).field0_0x0._s_0.X);
    return iVar7;
  }
                    /* WARNING: Could not recover jumptable at 0x000147ef6b7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar7 = (**(code **)(param_1->_padding_ + 0x338))(param_1,this->TexCoordIndex,0,0);
  return iVar7;
}

