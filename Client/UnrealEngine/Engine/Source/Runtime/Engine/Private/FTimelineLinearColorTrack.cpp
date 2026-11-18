// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// StaticStruct @ 147335350

UScriptStruct * __cdecl FTimelineLinearColorTrack::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FTimelineLinearColorTrack.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FTimelineLinearColorTrack.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTimelineLinearColorTrack,(UObject *)pUVar1,
                         L"TimelineLinearColorTrack");
  }
  return Z_Registration_Info_UScriptStruct_FTimelineLinearColorTrack.OuterSingleton;
}

// FTimelineLinearColorTrack @ 1488af550

FTimelineLinearColorTrack * __thiscall
FTimelineLinearColorTrack::FTimelineLinearColorTrack
          (FTimelineLinearColorTrack *this,FTimelineLinearColorTrack *param_1)

{
  UCurveLinearColor *pUVar1;
  FReadAccessScope local_28;
  
  pUVar1 = (param_1->LinearColorCurve).field0_0x0.DebugPtr;
  (this->LinearColorCurve).field0_0x0.DebugPtr = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UCurveLinearColor *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  *(undefined8 *)&this->InterpFunc = 0;
  *(undefined8 *)&(this->InterpFunc).field_0x8 = 0;
  *(undefined8 *)&(this->InterpFunc).field_0x10 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_1->InterpFunc,
             &local_28);
  *(undefined8 *)&(this->InterpFunc).field_0x8 = *(undefined8 *)&(param_1->InterpFunc).field_0x8;
  *(undefined8 *)&(this->InterpFunc).field_0x10 = *(undefined8 *)&(param_1->InterpFunc).field_0x10;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  this->TrackName = param_1->TrackName;
  this->LinearColorPropertyName = param_1->LinearColorPropertyName;
  this->LinearColorProperty = param_1->LinearColorProperty;
  *(undefined8 *)&this->InterpFuncStatic = 0;
  *(undefined8 *)&(this->InterpFuncStatic).field_0x8 = 0;
  *(undefined4 *)&(this->InterpFuncStatic).field_0x10 = 0;
  TDelegate<void___cdecl(FLinearColor),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>(&this->InterpFuncStatic,&param_1->InterpFuncStatic);
  return this;
}

