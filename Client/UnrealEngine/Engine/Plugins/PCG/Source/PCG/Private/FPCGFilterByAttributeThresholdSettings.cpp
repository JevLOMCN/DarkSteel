// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 3

// StaticStruct @ 149b30e60

UScriptStruct * __cdecl FPCGFilterByAttributeThresholdSettings::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPCGFilterByAttributeThresholdSettings.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UScriptStruct_FPCGFilterByAttributeThresholdSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPCGFilterByAttributeThresholdSettings,
                         (UObject *)pUVar1,L"PCGFilterByAttributeThresholdSettings");
  }
  return Z_Registration_Info_UScriptStruct_FPCGFilterByAttributeThresholdSettings.OuterSingleton;
}

// ~FPCGFilterByAttributeThresholdSettings @ 149b58900

void __thiscall
FPCGFilterByAttributeThresholdSettings::~FPCGFilterByAttributeThresholdSettings
          (FPCGFilterByAttributeThresholdSettings *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  pFVar1 = (this->AttributeTypes).SoftObjectPathValue.SubPathString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pvVar2 = *(void **)&(this->AttributeTypes).SoftClassPathValue.field_0x10;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  pFVar1 = (this->AttributeTypes).StringValue.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FString,int>
            (*(FString **)&(this->ThresholdAttribute).field_0x28,
             *(int *)&(this->ThresholdAttribute).field_0x30);
  pvVar2 = *(void **)&(this->ThresholdAttribute).field_0x28;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
    return;
  }
  return;
}

// operator= @ 149b59560

/* WARNING: Type propagation algorithm not settling */

FPCGFilterByAttributeThresholdSettings * __thiscall
FPCGFilterByAttributeThresholdSettings::operator=
          (FPCGFilterByAttributeThresholdSettings *this,
          FPCGFilterByAttributeThresholdSettings *param_1)

{
  double dVar1;
  
  this->bUseConstantThreshold = param_1->bUseConstantThreshold;
  *(undefined4 *)&(this->ThresholdAttribute).field_0x8 =
       *(undefined4 *)&(param_1->ThresholdAttribute).field_0x8;
  *(undefined8 *)&(this->ThresholdAttribute).field_0xc =
       *(undefined8 *)&(param_1->ThresholdAttribute).field_0xc;
  *(undefined8 *)&(this->ThresholdAttribute).field_0x14 =
       *(undefined8 *)&(param_1->ThresholdAttribute).field_0x14;
  *(undefined8 *)&(this->ThresholdAttribute).field_0x1c =
       *(undefined8 *)&(param_1->ThresholdAttribute).field_0x1c;
  TArray<FString,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<FString,TSizedDefaultAllocator<32>_> *)&(this->ThresholdAttribute).field_0x28,
             (TArray<FString,TSizedDefaultAllocator<32>_> *)
             &(param_1->ThresholdAttribute).field_0x28);
  (this->ThresholdAttribute).field_0x38 = (param_1->ThresholdAttribute).field_0x38;
  (this->AttributeTypes).Type = (param_1->AttributeTypes).Type;
  (this->AttributeTypes).StringMode_DEPRECATED = (param_1->AttributeTypes).StringMode_DEPRECATED;
  (this->AttributeTypes).FloatValue = (param_1->AttributeTypes).FloatValue;
  (this->AttributeTypes).Int32Value = (param_1->AttributeTypes).Int32Value;
  (this->AttributeTypes).DoubleValue = (param_1->AttributeTypes).DoubleValue;
  (this->AttributeTypes).IntValue = (param_1->AttributeTypes).IntValue;
  dVar1 = (param_1->AttributeTypes).Vector2Value.field0_0x0._s_0.Y;
  (this->AttributeTypes).Vector2Value.field0_0x0._s_0.X =
       (param_1->AttributeTypes).Vector2Value.field0_0x0._s_0.X;
  (this->AttributeTypes).Vector2Value.field0_0x0._s_0.Y = dVar1;
  dVar1 = (param_1->AttributeTypes).VectorValue.field0_0x0._s_0.Y;
  (this->AttributeTypes).VectorValue.field0_0x0._s_0.X =
       (param_1->AttributeTypes).VectorValue.field0_0x0._s_0.X;
  (this->AttributeTypes).VectorValue.field0_0x0._s_0.Y = dVar1;
  (this->AttributeTypes).VectorValue.field0_0x0._s_0.Z =
       (param_1->AttributeTypes).VectorValue.field0_0x0._s_0.Z;
  dVar1 = (param_1->AttributeTypes).Vector4Value.field0_0x0._s_0.Y;
  (this->AttributeTypes).Vector4Value.field0_0x0._s_0.X =
       (param_1->AttributeTypes).Vector4Value.field0_0x0._s_0.X;
  (this->AttributeTypes).Vector4Value.field0_0x0._s_0.Y = dVar1;
  dVar1 = (param_1->AttributeTypes).Vector4Value.field0_0x0._s_0.W;
  (this->AttributeTypes).Vector4Value.field0_0x0._s_0.Z =
       (param_1->AttributeTypes).Vector4Value.field0_0x0._s_0.Z;
  (this->AttributeTypes).Vector4Value.field0_0x0._s_0.W = dVar1;
  dVar1 = (param_1->AttributeTypes).QuatValue.Y;
  (this->AttributeTypes).QuatValue.X = (param_1->AttributeTypes).QuatValue.X;
  (this->AttributeTypes).QuatValue.Y = dVar1;
  dVar1 = (param_1->AttributeTypes).QuatValue.W;
  (this->AttributeTypes).QuatValue.Z = (param_1->AttributeTypes).QuatValue.Z;
  (this->AttributeTypes).QuatValue.W = dVar1;
  dVar1 = (param_1->AttributeTypes).TransformValue.Rotation.XY.m128d_f64[1];
  (this->AttributeTypes).TransformValue.Rotation.XY.m128d_f64[0] =
       (param_1->AttributeTypes).TransformValue.Rotation.XY.m128d_f64[0];
  (this->AttributeTypes).TransformValue.Rotation.XY.m128d_f64[1] = dVar1;
  dVar1 = (param_1->AttributeTypes).TransformValue.Rotation.ZW.m128d_f64[1];
  (this->AttributeTypes).TransformValue.Rotation.ZW.m128d_f64[0] =
       (param_1->AttributeTypes).TransformValue.Rotation.ZW.m128d_f64[0];
  (this->AttributeTypes).TransformValue.Rotation.ZW.m128d_f64[1] = dVar1;
  dVar1 = (param_1->AttributeTypes).TransformValue.Translation.XY.m128d_f64[1];
  (this->AttributeTypes).TransformValue.Translation.XY.m128d_f64[0] =
       (param_1->AttributeTypes).TransformValue.Translation.XY.m128d_f64[0];
  (this->AttributeTypes).TransformValue.Translation.XY.m128d_f64[1] = dVar1;
  dVar1 = (param_1->AttributeTypes).TransformValue.Translation.ZW.m128d_f64[1];
  (this->AttributeTypes).TransformValue.Translation.ZW.m128d_f64[0] =
       (param_1->AttributeTypes).TransformValue.Translation.ZW.m128d_f64[0];
  (this->AttributeTypes).TransformValue.Translation.ZW.m128d_f64[1] = dVar1;
  dVar1 = (param_1->AttributeTypes).TransformValue.Scale3D.XY.m128d_f64[1];
  (this->AttributeTypes).TransformValue.Scale3D.XY.m128d_f64[0] =
       (param_1->AttributeTypes).TransformValue.Scale3D.XY.m128d_f64[0];
  (this->AttributeTypes).TransformValue.Scale3D.XY.m128d_f64[1] = dVar1;
  dVar1 = (param_1->AttributeTypes).TransformValue.Scale3D.ZW.m128d_f64[1];
  (this->AttributeTypes).TransformValue.Scale3D.ZW.m128d_f64[0] =
       (param_1->AttributeTypes).TransformValue.Scale3D.ZW.m128d_f64[0];
  (this->AttributeTypes).TransformValue.Scale3D.ZW.m128d_f64[1] = dVar1;
  ::FString::operator=(&(this->AttributeTypes).StringValue,&(param_1->AttributeTypes).StringValue);
  (this->AttributeTypes).BoolValue = (param_1->AttributeTypes).BoolValue;
  dVar1 = (param_1->AttributeTypes).RotatorValue.Yaw;
  (this->AttributeTypes).RotatorValue.Pitch = (param_1->AttributeTypes).RotatorValue.Pitch;
  (this->AttributeTypes).RotatorValue.Yaw = dVar1;
  (this->AttributeTypes).RotatorValue.Roll = (param_1->AttributeTypes).RotatorValue.Roll;
  (this->AttributeTypes).NameValue = (param_1->AttributeTypes).NameValue;
  FSoftObjectPath::operator=
            ((FSoftObjectPath *)&(this->AttributeTypes).SoftClassPathValue,
             (FSoftObjectPath *)&(param_1->AttributeTypes).SoftClassPathValue);
  FSoftObjectPath::operator=
            (&(this->AttributeTypes).SoftObjectPathValue,
             &(param_1->AttributeTypes).SoftObjectPathValue);
  (this->AttributeTypes).bAllowsTypeChange = (param_1->AttributeTypes).bAllowsTypeChange;
  return this;
}

