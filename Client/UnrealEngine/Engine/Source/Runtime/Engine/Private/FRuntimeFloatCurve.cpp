// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 5

// FRuntimeFloatCurve @ 1477edfa0

FRuntimeFloatCurve * __thiscall
FRuntimeFloatCurve::FRuntimeFloatCurve(FRuntimeFloatCurve *this,FRuntimeFloatCurve *param_1)

{
  UCurveFloat *pUVar1;
  
  (this->EditorCurveData)._padding_ = 0;
  (this->EditorCurveData)._padding_ = 0;
  (this->EditorCurveData)._padding_ = 0;
  *(undefined4 *)&(this->EditorCurveData)._padding_ = 0;
  *(undefined4 *)((longlong)&(this->EditorCurveData)._padding_ + 4) = 0x80;
  *(undefined4 *)&(this->EditorCurveData)._padding_ = 0xffffffff;
  *(undefined4 *)((longlong)&(this->EditorCurveData)._padding_ + 4) = 0;
  (this->EditorCurveData)._padding_ = 0;
  *(undefined4 *)&(this->EditorCurveData)._padding_ = 0;
  (this->EditorCurveData)._padding_ = 0;
  (this->EditorCurveData)._padding_ = 0;
  (this->EditorCurveData)._padding_ = (longlong)&___7FRealCurve__6B_;
  *(int *)&(this->EditorCurveData)._padding_ = (int)(param_1->EditorCurveData)._padding_;
  *(undefined1 *)((longlong)&(this->EditorCurveData)._padding_ + 4) =
       *(undefined1 *)((longlong)&(param_1->EditorCurveData)._padding_ + 4);
  *(undefined1 *)((longlong)&(this->EditorCurveData)._padding_ + 5) =
       *(undefined1 *)((longlong)&(param_1->EditorCurveData)._padding_ + 5);
  (this->EditorCurveData)._padding_ = (longlong)&___7FRichCurve__6B_;
  (this->EditorCurveData).Keys.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EditorCurveData).Keys.AllocatorInstance.Data =
       (param_1->EditorCurveData).Keys.AllocatorInstance.Data;
  (param_1->EditorCurveData).Keys.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EditorCurveData).Keys.ArrayNum = (param_1->EditorCurveData).Keys.ArrayNum;
  (this->EditorCurveData).Keys.ArrayMax = (param_1->EditorCurveData).Keys.ArrayMax;
  (param_1->EditorCurveData).Keys.ArrayNum = 0;
  (param_1->EditorCurveData).Keys.ArrayMax = 0;
  pUVar1 = (param_1->ExternalCurve).field0_0x0.DebugPtr;
  (this->ExternalCurve).field0_0x0.DebugPtr = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UCurveFloat *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  return this;
}

// StaticStruct @ 147a0c7a0

UScriptStruct * __cdecl FRuntimeFloatCurve::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRuntimeFloatCurve.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FRuntimeFloatCurve.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRuntimeFloatCurve,(UObject *)pUVar1,
                         L"RuntimeFloatCurve");
  }
  return Z_Registration_Info_UScriptStruct_FRuntimeFloatCurve.OuterSingleton;
}

// FRuntimeFloatCurve @ 147a26a10

FRuntimeFloatCurve * __thiscall FRuntimeFloatCurve::FRuntimeFloatCurve(FRuntimeFloatCurve *this)

{
  (this->EditorCurveData)._padding_ = 0;
  (this->EditorCurveData)._padding_ = 0;
  (this->EditorCurveData)._padding_ = 0;
  *(undefined4 *)&(this->EditorCurveData)._padding_ = 0;
  *(undefined4 *)((longlong)&(this->EditorCurveData)._padding_ + 4) = 0x80;
  *(undefined4 *)&(this->EditorCurveData)._padding_ = 0xffffffff;
  *(undefined4 *)((longlong)&(this->EditorCurveData)._padding_ + 4) = 0;
  (this->EditorCurveData)._padding_ = 0;
  *(undefined4 *)&(this->EditorCurveData)._padding_ = 0;
  (this->EditorCurveData)._padding_ = 0;
  (this->EditorCurveData)._padding_ = 0;
  (this->EditorCurveData)._padding_ = (longlong)&___7FRichCurve__6B_;
  *(undefined4 *)&(this->EditorCurveData)._padding_ = 0x7f7fffff;
  *(undefined2 *)((longlong)&(this->EditorCurveData)._padding_ + 4) = 0x404;
  (this->EditorCurveData).Keys.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EditorCurveData).Keys.ArrayNum = 0;
  (this->EditorCurveData).Keys.ArrayMax = 0;
  (this->ExternalCurve).field0_0x0.DebugPtr = (UCurveFloat *)0x0;
  return this;
}

// GetRichCurve @ 147a57af0

FRichCurve * __thiscall FRuntimeFloatCurve::GetRichCurve(FRuntimeFloatCurve *this)

{
  UCurveFloat *pUVar1;
  
  pUVar1 = (this->ExternalCurve).field0_0x0.DebugPtr;
  if (pUVar1 != (UCurveFloat *)0x0) {
    this = (FRuntimeFloatCurve *)&pUVar1->FloatCurve;
  }
  return &this->EditorCurveData;
}

// GetRichCurveConst @ 147a57b40

FRichCurve * __thiscall FRuntimeFloatCurve::GetRichCurveConst(FRuntimeFloatCurve *this)

{
  UCurveFloat *pUVar1;
  
  pUVar1 = (this->ExternalCurve).field0_0x0.DebugPtr;
  if (pUVar1 != (UCurveFloat *)0x0) {
    this = (FRuntimeFloatCurve *)&pUVar1->FloatCurve;
  }
  return &this->EditorCurveData;
}

