// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 2

// StaticStruct @ 14a383440

UScriptStruct * __cdecl FEnumParameterNameAndCurve::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FEnumParameterNameAndCurve.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FEnumParameterNameAndCurve.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FEnumParameterNameAndCurve,(UObject *)pUVar1,
                         L"EnumParameterNameAndCurve");
  }
  return Z_Registration_Info_UScriptStruct_FEnumParameterNameAndCurve.OuterSingleton;
}

// FEnumParameterNameAndCurve @ 14a3b6b70

FEnumParameterNameAndCurve * __thiscall
FEnumParameterNameAndCurve::FEnumParameterNameAndCurve
          (FEnumParameterNameAndCurve *this,FEnumParameterNameAndCurve *param_1)

{
  bool bVar1;
  UEnum *pUVar2;
  
  this->_padding_ = param_1->_padding_;
  FMovieSceneChannel::FMovieSceneChannel
            ((FMovieSceneChannel *)&this->ParameterCurve,
             (FMovieSceneChannel *)&param_1->ParameterCurve);
  (this->ParameterCurve)._padding_ = (longlong)&___7FMovieSceneByteChannel__6B_;
  (this->ParameterCurve).PreInfinityExtrap.Value = (param_1->ParameterCurve).PreInfinityExtrap.Value
  ;
  (this->ParameterCurve).PostInfinityExtrap.Value =
       (param_1->ParameterCurve).PostInfinityExtrap.Value;
  (this->ParameterCurve).Times.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ParameterCurve).Times.AllocatorInstance.Data =
       (param_1->ParameterCurve).Times.AllocatorInstance.Data;
  (param_1->ParameterCurve).Times.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ParameterCurve).Times.ArrayNum = (param_1->ParameterCurve).Times.ArrayNum;
  (this->ParameterCurve).Times.ArrayMax = (param_1->ParameterCurve).Times.ArrayMax;
  (param_1->ParameterCurve).Times.ArrayNum = 0;
  (param_1->ParameterCurve).Times.ArrayMax = 0;
  (this->ParameterCurve).DefaultValue = (param_1->ParameterCurve).DefaultValue;
  bVar1 = (param_1->ParameterCurve).bHasDefaultValue;
  (this->ParameterCurve).Values.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ParameterCurve).bHasDefaultValue = bVar1;
  (this->ParameterCurve).Values.AllocatorInstance.Data =
       (param_1->ParameterCurve).Values.AllocatorInstance.Data;
  (param_1->ParameterCurve).Values.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ParameterCurve).Values.ArrayNum = (param_1->ParameterCurve).Values.ArrayNum;
  (this->ParameterCurve).Values.ArrayMax = (param_1->ParameterCurve).Values.ArrayMax;
  (param_1->ParameterCurve).Values.ArrayNum = 0;
  (param_1->ParameterCurve).Values.ArrayMax = 0;
  pUVar2 = (param_1->ParameterCurve).Enum.field0_0x0.DebugPtr;
  (this->ParameterCurve).Enum.field0_0x0.DebugPtr = pUVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UEnum *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  *(undefined8 *)&(this->ParameterCurve).KeyHandles = 0;
  *(undefined8 *)&(this->ParameterCurve).KeyHandles.field_0x8 = 0;
  *(undefined8 *)&(this->ParameterCurve).KeyHandles.field_0x20 = 0;
  *(undefined4 *)&(this->ParameterCurve).KeyHandles.field_0x28 = 0;
  *(undefined4 *)&(this->ParameterCurve).KeyHandles.field_0x2c = 0x80;
  *(undefined4 *)&(this->ParameterCurve).KeyHandles.field_0x34 = 0;
  *(undefined4 *)&(this->ParameterCurve).KeyHandles.field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ParameterCurve).KeyHandles.field_0x38 = 0;
  *(undefined8 *)&(this->ParameterCurve).KeyHandles.field_0x40 = 0;
  *(undefined8 *)&(this->ParameterCurve).KeyHandles.field_0x58 = 0;
  *(undefined4 *)&(this->ParameterCurve).KeyHandles.field_0x60 = 0;
  *(undefined4 *)&(this->ParameterCurve).KeyHandles.field_0x64 = 0x80;
  *(undefined4 *)&(this->ParameterCurve).KeyHandles.field_0x6c = 0;
  *(undefined4 *)&(this->ParameterCurve).KeyHandles.field_0x68 = 0xffffffff;
  *(undefined8 *)&(this->ParameterCurve).KeyHandles.field_0x78 = 0;
  *(undefined4 *)&(this->ParameterCurve).KeyHandles.field_0x80 = 0;
  return this;
}

