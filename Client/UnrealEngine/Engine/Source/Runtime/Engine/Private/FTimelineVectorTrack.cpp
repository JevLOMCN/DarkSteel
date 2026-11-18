// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// StaticStruct @ 1473397d0

UScriptStruct * __cdecl FTimelineVectorTrack::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FTimelineVectorTrack.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FTimelineVectorTrack.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTimelineVectorTrack,(UObject *)pUVar1,
                         L"TimelineVectorTrack");
  }
  return Z_Registration_Info_UScriptStruct_FTimelineVectorTrack.OuterSingleton;
}

// FTimelineVectorTrack @ 1488af610

FTimelineVectorTrack * __thiscall
FTimelineVectorTrack::FTimelineVectorTrack(FTimelineVectorTrack *this,FTimelineVectorTrack *param_1)

{
  UCurveVector *pUVar1;
  FReadAccessScope local_28;
  
  pUVar1 = (param_1->VectorCurve).field0_0x0.DebugPtr;
  (this->VectorCurve).field0_0x0.DebugPtr = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UCurveVector *)0x0)) {
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
  this->VectorPropertyName = param_1->VectorPropertyName;
  this->VectorProperty = param_1->VectorProperty;
  *(undefined8 *)&this->InterpFuncStatic = 0;
  *(undefined8 *)&(this->InterpFuncStatic).field_0x8 = 0;
  *(undefined4 *)&(this->InterpFuncStatic).field_0x10 = 0;
  TDelegate<void___cdecl(UE::Math::TVector<double>),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>(&this->InterpFuncStatic,&param_1->InterpFuncStatic);
  return this;
}

