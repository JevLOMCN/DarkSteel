// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// FColoredTexturedMaterialRenderProxy @ 147f646f0

FColoredTexturedMaterialRenderProxy * __thiscall
FColoredTexturedMaterialRenderProxy::FColoredTexturedMaterialRenderProxy
          (FColoredTexturedMaterialRenderProxy *this,FMaterialRenderProxy *param_1,
          FLinearColor *param_2,FName param_3,UTexture *param_4,FName param_5)

{
  FColoredMaterialRenderProxy::FColoredMaterialRenderProxy
            ((FColoredMaterialRenderProxy *)this,param_1,param_2,param_3);
  this->UVChannel = 0.0;
  this->_padding_ = (longlong)&___7FColoredTexturedMaterialRenderProxy__6B_;
  this->Texture = param_4;
  this->TextureParamName = param_5;
  ::FName::FName(&this->UVChannelParamName,"None");
  return this;
}

// GetParameterValue @ 147f7ac50

/* WARNING: Enum "EMaterialParameterType": Some values do not have unique names */

bool __thiscall
FColoredTexturedMaterialRenderProxy::GetParameterValue
          (FColoredTexturedMaterialRenderProxy *this,EMaterialParameterType param_1,
          FMemoryImageMaterialParameterInfo *param_2,FMaterialParameterValue *param_3,
          FMaterialRenderContext *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  bool bVar3;
  uint local_48;
  undefined8 local_38;
  uint uStack_34;
  int iStack_30;
  float fStack_2c;
  double local_28;
  double dStack_20;
  uint7 uStack_17;
  
  if (param_1 == Texture) {
    uVar1 = (param_2->Name).ComparisonIndex;
    if (((this->TextureParamName).ComparisonIndex.Value == uVar1) &&
       ((this->TextureParamName).Number == (param_2->Name).Number)) {
      (param_3->field0_0x0).Double[0] = (double)this->Texture;
      (param_3->field0_0x0).Double[1] = (double)CONCAT44(fStack_2c,iStack_30);
      (param_3->field0_0x0).Double[2] = local_28;
      (param_3->field0_0x0).Double[3] = dStack_20;
      *(ulonglong *)&param_3->Type = CONCAT71(uStack_17,3);
      return true;
    }
  }
  else if (param_1 == Scalar) {
    uVar2 = (param_2->Name).ComparisonIndex;
    if (((this->UVChannelParamName).ComparisonIndex.Value == uVar2) &&
       ((this->UVChannelParamName).Number == (param_2->Name).Number)) {
      (param_3->field0_0x0).Float[0] = this->UVChannel;
      (param_3->field0_0x0).EnumEntry.Number = uStack_34;
      (param_3->field0_0x0).Font.Page = iStack_30;
      (param_3->field0_0x0).Float[3] = fStack_2c;
      (param_3->field0_0x0).Double[2] = local_28;
      (param_3->field0_0x0).Double[3] = dStack_20;
      *(ulonglong *)&param_3->Type = (ulonglong)uStack_17 << 8;
      return true;
    }
  }
  bVar3 = FColoredMaterialRenderProxy::GetParameterValue
                    ((FColoredMaterialRenderProxy *)this,param_1,param_2,param_3,param_4);
  return bVar3;
}

