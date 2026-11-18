// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// StaticStruct @ 1473062d0

UScriptStruct * __cdecl FEmitterDynamicParameter::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FEmitterDynamicParameter.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FEmitterDynamicParameter.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FEmitterDynamicParameter,(UObject *)pUVar1,
                         L"EmitterDynamicParameter");
  }
  return Z_Registration_Info_UScriptStruct_FEmitterDynamicParameter.OuterSingleton;
}

// FEmitterDynamicParameter @ 14815a610

FEmitterDynamicParameter * __thiscall
FEmitterDynamicParameter::FEmitterDynamicParameter
          (FEmitterDynamicParameter *this,FEmitterDynamicParameter *param_1)

{
  undefined4 uVar1;
  UDistributionFloat *pUVar2;
  uint uVar3;
  
  this->ParamName = param_1->ParamName;
  uVar3 = (this->bUseEmitterTime ^ param_1->bUseEmitterTime) & 1 ^ *(uint *)&this->field_0x8;
  *(uint *)&this->field_0x8 = uVar3;
  *(uint *)&this->field_0x8 = (uVar3 ^ *(uint *)&param_1->field_0x8) & 2 ^ uVar3;
  (this->ValueMethod).Value = (param_1->ValueMethod).Value;
  *(uint *)&this->field_0x10 =
       *(uint *)&this->field_0x10 ^
       (this->bScaleVelocityByParamValue ^ param_1->bScaleVelocityByParamValue) & 1;
  *(int *)&(this->ParamValue)._padding_ = (int)(param_1->ParamValue)._padding_;
  uVar1 = *(undefined4 *)((longlong)&(param_1->ParamValue)._padding_ + 4);
  (this->ParamValue)._padding_ = 0;
  *(undefined4 *)((longlong)&(this->ParamValue)._padding_ + 4) = uVar1;
  (this->ParamValue)._padding_ = (param_1->ParamValue)._padding_;
  (param_1->ParamValue)._padding_ = 0;
  *(int *)&(this->ParamValue)._padding_ = (int)(param_1->ParamValue)._padding_;
  *(undefined4 *)((longlong)&(this->ParamValue)._padding_ + 4) =
       *(undefined4 *)((longlong)&(param_1->ParamValue)._padding_ + 4);
  (param_1->ParamValue)._padding_ = 0;
  *(char *)&(this->ParamValue)._padding_ = (char)(param_1->ParamValue)._padding_;
  *(undefined1 *)((longlong)&(this->ParamValue)._padding_ + 1) =
       *(undefined1 *)((longlong)&(param_1->ParamValue)._padding_ + 1);
  *(undefined1 *)((longlong)&(this->ParamValue)._padding_ + 2) =
       *(undefined1 *)((longlong)&(param_1->ParamValue)._padding_ + 2);
  *(undefined1 *)((longlong)&(this->ParamValue)._padding_ + 3) =
       *(undefined1 *)((longlong)&(param_1->ParamValue)._padding_ + 3);
  *(undefined1 *)((longlong)&(this->ParamValue)._padding_ + 4) =
       *(undefined1 *)((longlong)&(param_1->ParamValue)._padding_ + 4);
  (this->ParamValue).MinValue = (param_1->ParamValue).MinValue;
  (this->ParamValue).MaxValue = (param_1->ParamValue).MaxValue;
  pUVar2 = (param_1->ParamValue).Distribution.field0_0x0.DebugPtr;
  (this->ParamValue).Distribution.field0_0x0.DebugPtr = pUVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UDistributionFloat *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  return this;
}

