// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 2

// StaticStruct @ 1467ce830

UScriptStruct * __cdecl FMovieSceneEventTriggerData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneEventTriggerData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieSceneTracks();
    Z_Registration_Info_UScriptStruct_FMovieSceneEventTriggerData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneEventTriggerData,(UObject *)pUVar1,
                         L"MovieSceneEventTriggerData");
  }
  return Z_Registration_Info_UScriptStruct_FMovieSceneEventTriggerData.OuterSingleton;
}

// FMovieSceneEventTriggerData @ 146808060

FMovieSceneEventTriggerData * __thiscall
FMovieSceneEventTriggerData::FMovieSceneEventTriggerData
          (FMovieSceneEventTriggerData *this,FMovieSceneEventTriggerData *param_1)

{
  UFunction *pUVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  FFieldClass *pFVar5;
  
  pUVar1 = (param_1->Ptrs).Function.field0_0x0.DebugPtr;
  (this->Ptrs).Function.field0_0x0.DebugPtr = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UFunction *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  *(undefined8 *)&(this->Ptrs).BoundObjectProperty = 0;
  *(undefined8 *)&(this->Ptrs).BoundObjectProperty.field_0x8 = 0;
  *(undefined8 *)&(this->Ptrs).BoundObjectProperty.field_0x10 = 0;
  *(undefined8 *)&(this->Ptrs).BoundObjectProperty.field_0x18 = 0;
  pFVar5 = FProperty::StaticClass();
  FFieldPath::GetTyped((FFieldPath *)&(param_1->Ptrs).BoundObjectProperty,pFVar5,(UStruct *)0x0);
  FFieldPath::operator=
            ((FFieldPath *)&(this->Ptrs).BoundObjectProperty,
             (FFieldPath *)&(param_1->Ptrs).BoundObjectProperty);
  uVar2 = (param_1->ObjectBindingID).B;
  uVar3 = (param_1->ObjectBindingID).C;
  uVar4 = (param_1->ObjectBindingID).D;
  (this->ObjectBindingID).A = (param_1->ObjectBindingID).A;
  (this->ObjectBindingID).B = uVar2;
  (this->ObjectBindingID).C = uVar3;
  (this->ObjectBindingID).D = uVar4;
  (this->SequenceID).Value = (param_1->SequenceID).Value;
  this->RootTime = param_1->RootTime;
  return this;
}

