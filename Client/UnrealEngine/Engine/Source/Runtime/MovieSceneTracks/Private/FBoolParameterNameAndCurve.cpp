// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 2

// StaticStruct @ 1467249a0

UScriptStruct * __cdecl FBoolParameterNameAndCurve::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FBoolParameterNameAndCurve.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieSceneTracks();
    Z_Registration_Info_UScriptStruct_FBoolParameterNameAndCurve.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FBoolParameterNameAndCurve,(UObject *)pUVar1,
                         L"BoolParameterNameAndCurve");
  }
  return Z_Registration_Info_UScriptStruct_FBoolParameterNameAndCurve.OuterSingleton;
}

// FBoolParameterNameAndCurve @ 14675f960

FBoolParameterNameAndCurve * __thiscall
FBoolParameterNameAndCurve::FBoolParameterNameAndCurve
          (FBoolParameterNameAndCurve *this,FBoolParameterNameAndCurve *param_1)

{
  this->_padding_ = param_1->_padding_;
  FMovieSceneChannel::FMovieSceneChannel
            ((FMovieSceneChannel *)&this->ParameterCurve,
             (FMovieSceneChannel *)&param_1->ParameterCurve);
  (this->ParameterCurve)._padding_ = (longlong)&___7FMovieSceneBoolChannel__6B_;
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
  (this->ParameterCurve).bHasDefaultValue = (param_1->ParameterCurve).bHasDefaultValue;
  (this->ParameterCurve).Values.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ParameterCurve).Values.AllocatorInstance.Data =
       (param_1->ParameterCurve).Values.AllocatorInstance.Data;
  (param_1->ParameterCurve).Values.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ParameterCurve).Values.ArrayNum = (param_1->ParameterCurve).Values.ArrayNum;
  (this->ParameterCurve).Values.ArrayMax = (param_1->ParameterCurve).Values.ArrayMax;
  (param_1->ParameterCurve).Values.ArrayNum = 0;
  (param_1->ParameterCurve).Values.ArrayMax = 0;
  *(undefined8 *)&(this->ParameterCurve).KeyHandles = 0;
  *(undefined8 *)&(this->ParameterCurve).KeyHandles.field_0x8 = 0;
  *(undefined8 *)&(this->ParameterCurve).KeyHandles.field_0x20 = 0;
  *(undefined4 *)&(this->ParameterCurve).KeyHandles.field_0x28 = 0;
  *(undefined4 *)&(this->ParameterCurve).KeyHandles.field_0x2c = 0x80;
  *(undefined4 *)&(this->ParameterCurve).KeyHandles.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ParameterCurve).KeyHandles.field_0x34 = 0;
  *(undefined8 *)&(this->ParameterCurve).KeyHandles.field_0x38 = 0;
  *(undefined8 *)&(this->ParameterCurve).KeyHandles.field_0x40 = 0;
  *(undefined8 *)&(this->ParameterCurve).KeyHandles.field_0x58 = 0;
  *(undefined4 *)&(this->ParameterCurve).KeyHandles.field_0x60 = 0;
  *(undefined4 *)&(this->ParameterCurve).KeyHandles.field_0x64 = 0x80;
  *(undefined4 *)&(this->ParameterCurve).KeyHandles.field_0x68 = 0xffffffff;
  *(undefined4 *)&(this->ParameterCurve).KeyHandles.field_0x6c = 0;
  *(undefined8 *)&(this->ParameterCurve).KeyHandles.field_0x78 = 0;
  *(undefined4 *)&(this->ParameterCurve).KeyHandles.field_0x80 = 0;
  return this;
}

