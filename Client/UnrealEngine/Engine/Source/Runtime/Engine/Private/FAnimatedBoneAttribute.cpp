// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// StaticStruct @ 1474245f0

UScriptStruct * __cdecl FAnimatedBoneAttribute::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAnimatedBoneAttribute.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FAnimatedBoneAttribute.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimatedBoneAttribute,(UObject *)pUVar1,
                         L"AnimatedBoneAttribute");
  }
  return Z_Registration_Info_UScriptStruct_FAnimatedBoneAttribute.OuterSingleton;
}

// FAnimatedBoneAttribute @ 147433850

FAnimatedBoneAttribute * __thiscall
FAnimatedBoneAttribute::FAnimatedBoneAttribute(FAnimatedBoneAttribute *this)

{
  (this->Identifier).Name.ComparisonIndex = 0;
  (this->Identifier).Name.Number = 0;
  (this->Identifier).BoneName.ComparisonIndex = 0;
  (this->Identifier).BoneName.Number = 0;
  (this->Identifier).BoneIndex = -1;
  (this->Identifier).ScriptStruct.field0_0x0.DebugPtr = (UScriptStruct *)0x0;
  (this->Identifier).ScriptStructPath.AssetPath.PackageName.ComparisonIndex = 0;
  (this->Identifier).ScriptStructPath.AssetPath.PackageName.Number = 0;
  (this->Identifier).ScriptStructPath.AssetPath.AssetName.ComparisonIndex = 0;
  (this->Identifier).ScriptStructPath.AssetPath.AssetName.Number = 0;
  (this->Identifier).ScriptStructPath.SubPathString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Identifier).ScriptStructPath.SubPathString.Data.ArrayNum = 0;
  (this->Identifier).ScriptStructPath.SubPathString.Data.ArrayMax = 0;
  (this->Curve)._padding_ = 0;
  (this->Curve)._padding_ = 0;
  (this->Curve)._padding_ = 0;
  *(undefined4 *)&(this->Curve)._padding_ = 0;
  *(undefined4 *)((longlong)&(this->Curve)._padding_ + 4) = 0x80;
  *(undefined4 *)&(this->Curve)._padding_ = 0xffffffff;
  *(undefined4 *)((longlong)&(this->Curve)._padding_ + 4) = 0;
  (this->Curve)._padding_ = 0;
  *(undefined4 *)&(this->Curve)._padding_ = 0;
  (this->Curve)._padding_ = 0;
  (this->Curve)._padding_ = 0;
  (this->Curve)._padding_ = (longlong)&___7FAttributeCurve__6B_;
  (this->Curve).Keys.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Curve).Keys.ArrayNum = 0;
  (this->Curve).Keys.ArrayMax = 0;
  (this->Curve).ScriptStructPath.AssetPath.PackageName.ComparisonIndex = 0;
  (this->Curve).ScriptStructPath.AssetPath.PackageName.Number = 0;
  (this->Curve).ScriptStructPath.AssetPath.AssetName.ComparisonIndex = 0;
  (this->Curve).ScriptStructPath.AssetPath.AssetName.Number = 0;
  (this->Curve).ScriptStructPath.SubPathString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Curve).ScriptStructPath.SubPathString.Data.ArrayNum = 0;
  (this->Curve).ScriptStructPath.SubPathString.Data.ArrayMax = 0;
  (this->Curve).ScriptStruct.field0_0x0.DebugPtr = (UScriptStruct *)0x0;
  (this->Curve).bShouldInterpolate = false;
  (this->Curve).Operator = (IAttributeBlendOperator *)0x0;
  return this;
}

