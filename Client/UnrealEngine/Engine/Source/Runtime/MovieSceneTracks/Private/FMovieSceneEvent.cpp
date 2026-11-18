// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 3

// StaticStruct @ 14658b9a0

UScriptStruct * __cdecl FMovieSceneEvent::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneEvent.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieSceneTracks();
    Z_Registration_Info_UScriptStruct_FMovieSceneEvent.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneEvent,(UObject *)pUVar1,
                         L"MovieSceneEvent");
  }
  return Z_Registration_Info_UScriptStruct_FMovieSceneEvent.OuterSingleton;
}

// FMovieSceneEvent @ 146610490

FMovieSceneEvent * __thiscall
FMovieSceneEvent::FMovieSceneEvent(FMovieSceneEvent *this,FMovieSceneEvent *param_1)

{
  UFunction *pUVar1;
  FFieldClass *pFVar2;
  
  pUVar1 = (param_1->Ptrs).Function.field0_0x0.DebugPtr;
  (this->Ptrs).Function.field0_0x0.DebugPtr = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UFunction *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  *(undefined8 *)&(this->Ptrs).BoundObjectProperty = 0;
  *(undefined8 *)&(this->Ptrs).BoundObjectProperty.field_0x8 = 0;
  *(undefined8 *)&(this->Ptrs).BoundObjectProperty.field_0x10 = 0;
  *(undefined8 *)&(this->Ptrs).BoundObjectProperty.field_0x18 = 0;
  pFVar2 = FProperty::StaticClass();
  FFieldPath::GetTyped((FFieldPath *)&(param_1->Ptrs).BoundObjectProperty,pFVar2,(UStruct *)0x0);
  FFieldPath::operator=
            ((FFieldPath *)&(this->Ptrs).BoundObjectProperty,
             (FFieldPath *)&(param_1->Ptrs).BoundObjectProperty);
  return this;
}

// GetBoundObjectPropertyClass @ 146689450

UClass * __thiscall FMovieSceneEvent::GetBoundObjectPropertyClass(FMovieSceneEvent *this)

{
  TFieldPath<FProperty> *this_00;
  FFieldClass *pFVar1;
  FField *pFVar2;
  
  this_00 = &(this->Ptrs).BoundObjectProperty;
  pFVar1 = FProperty::StaticClass();
  pFVar2 = FFieldPath::GetTyped((FFieldPath *)this_00,pFVar1,(UStruct *)0x0);
  if ((pFVar2 == (FField *)0x0) || (((uint)(int)pFVar2->ClassPrivate->CastFlags >> 0x10 & 1) == 0))
  {
    pFVar1 = FProperty::StaticClass();
    pFVar2 = FFieldPath::GetTyped((FFieldPath *)this_00,pFVar1,(UStruct *)0x0);
    if ((pFVar2 == (FField *)0x0) || (((uint)(int)pFVar2->ClassPrivate->CastFlags >> 0xc & 1) == 0))
    {
      return (UClass *)0x0;
    }
  }
  return (UClass *)pFVar2[2].Owner.Container.Field;
}

