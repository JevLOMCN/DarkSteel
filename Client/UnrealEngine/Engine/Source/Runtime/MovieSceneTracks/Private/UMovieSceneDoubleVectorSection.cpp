// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 14

// StaticClass @ 146722080

UClass * __cdecl UMovieSceneDoubleVectorSection::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneDoubleVectorSection.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneDoubleVectorSection",
               &Z_Registration_Info_UClass_UMovieSceneDoubleVectorSection.InnerSingleton,
               StaticRegisterNativesUMovieSceneDoubleVectorSection,0x5e0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneDoubleVectorSection>,
               InternalVTableHelperCtorCaller<UMovieSceneDoubleVectorSection>,local_res8,
               UMovieSceneSection::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneDoubleVectorSection.InnerSingleton;
}

// UMovieSceneDoubleVectorSection @ 146764090

UMovieSceneDoubleVectorSection * __thiscall
UMovieSceneDoubleVectorSection::UMovieSceneDoubleVectorSection
          (UMovieSceneDoubleVectorSection *this,FVTableHelper *param_1)

{
  UMovieSceneSection::UMovieSceneSection((UMovieSceneSection *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneSection__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneEntityProvider__;
  this->Curves[0]._padding_ = (longlong)&___7FMovieSceneDoubleChannel__6B_;
  this->Curves[0]._padding_ = 0;
  this->Curves[0]._padding_ = 0;
  this->Curves[0]._padding_ = 0;
  this->Curves[0]._padding_ = 2;
  this->Curves[0]._padding_ = 0;
  this->Curves[0]._padding_ = 0;
  this->Curves[0]._padding_ = 0;
  this->Curves[0]._padding_ = 2;
  this->Curves[0]._padding_ = 0;
  this->Curves[0]._padding_ = 0;
  this->Curves[0]._padding_ = 0;
  this->Curves[0]._padding_ = 2;
  this->Curves[0].PreInfinityExtrap = '\x04';
  this->Curves[0].PostInfinityExtrap = '\x04';
  this->Curves[0].Times.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Curves[0].Times.ArrayNum = 0;
  this->Curves[0].Times.ArrayMax = 0;
  this->Curves[0].Values.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Curves[0].Values.ArrayNum = 0;
  this->Curves[0].Values.ArrayMax = 0;
  this->Curves[0].DefaultValue = 0.0;
  this->Curves[0].bHasDefaultValue = false;
  *(undefined8 *)&this->Curves[0].KeyHandles = 0;
  *(undefined8 *)&this->Curves[0].KeyHandles.field_0x8 = 0;
  *(undefined8 *)&this->Curves[0].KeyHandles.field_0x20 = 0;
  *(undefined4 *)&this->Curves[0].KeyHandles.field_0x28 = 0;
  *(undefined4 *)&this->Curves[0].KeyHandles.field_0x2c = 0x80;
  *(undefined4 *)&this->Curves[0].KeyHandles.field_0x30 = 0xffffffff;
  *(undefined4 *)&this->Curves[0].KeyHandles.field_0x34 = 0;
  *(undefined8 *)&this->Curves[0].KeyHandles.field_0x38 = 0;
  *(undefined8 *)&this->Curves[0].KeyHandles.field_0x40 = 0;
  *(undefined8 *)&this->Curves[0].KeyHandles.field_0x58 = 0;
  *(undefined4 *)&this->Curves[0].KeyHandles.field_0x60 = 0;
  *(undefined4 *)&this->Curves[0].KeyHandles.field_0x64 = 0x80;
  *(undefined4 *)&this->Curves[0].KeyHandles.field_0x68 = 0xffffffff;
  *(undefined4 *)&this->Curves[0].KeyHandles.field_0x6c = 0;
  *(undefined8 *)&this->Curves[0].KeyHandles.field_0x78 = 0;
  *(undefined4 *)&this->Curves[0].KeyHandles.field_0x80 = 0;
  this->Curves[0].TickResolution.Numerator = 60000;
  this->Curves[0].TickResolution.Denominator = 1;
  this->Curves[1]._padding_ = 0;
  this->Curves[1]._padding_ = 0;
  this->Curves[1]._padding_ = 0;
  this->Curves[1]._padding_ = 2;
  this->Curves[1]._padding_ = 0;
  this->Curves[1]._padding_ = 0;
  this->Curves[1]._padding_ = 0;
  this->Curves[1]._padding_ = 2;
  this->Curves[1]._padding_ = 0;
  this->Curves[1]._padding_ = 0;
  this->Curves[1]._padding_ = 0;
  this->Curves[1]._padding_ = 2;
  this->Curves[1]._padding_ = (longlong)&___7FMovieSceneDoubleChannel__6B_;
  this->Curves[1].PreInfinityExtrap = '\x04';
  this->Curves[1].PostInfinityExtrap = '\x04';
  this->Curves[1].Times.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Curves[1].Times.ArrayNum = 0;
  this->Curves[1].Times.ArrayMax = 0;
  this->Curves[1].Values.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Curves[1].Values.ArrayNum = 0;
  this->Curves[1].Values.ArrayMax = 0;
  this->Curves[1].DefaultValue = 0.0;
  this->Curves[1].bHasDefaultValue = false;
  *(undefined8 *)&this->Curves[1].KeyHandles = 0;
  *(undefined8 *)&this->Curves[1].KeyHandles.field_0x8 = 0;
  *(undefined8 *)&this->Curves[1].KeyHandles.field_0x20 = 0;
  *(undefined4 *)&this->Curves[1].KeyHandles.field_0x28 = 0;
  *(undefined4 *)&this->Curves[1].KeyHandles.field_0x2c = 0x80;
  *(undefined4 *)&this->Curves[1].KeyHandles.field_0x30 = 0xffffffff;
  *(undefined4 *)&this->Curves[1].KeyHandles.field_0x34 = 0;
  *(undefined8 *)&this->Curves[1].KeyHandles.field_0x38 = 0;
  *(undefined8 *)&this->Curves[1].KeyHandles.field_0x40 = 0;
  *(undefined8 *)&this->Curves[1].KeyHandles.field_0x58 = 0;
  *(undefined4 *)&this->Curves[1].KeyHandles.field_0x60 = 0;
  *(undefined4 *)&this->Curves[1].KeyHandles.field_0x64 = 0x80;
  *(undefined4 *)&this->Curves[1].KeyHandles.field_0x68 = 0xffffffff;
  *(undefined4 *)&this->Curves[1].KeyHandles.field_0x6c = 0;
  *(undefined8 *)&this->Curves[1].KeyHandles.field_0x78 = 0;
  *(undefined4 *)&this->Curves[1].KeyHandles.field_0x80 = 0;
  this->Curves[1].TickResolution.Numerator = 60000;
  this->Curves[1].TickResolution.Denominator = 1;
  this->Curves[2]._padding_ = 0;
  this->Curves[2]._padding_ = 0;
  this->Curves[2]._padding_ = 0;
  this->Curves[2]._padding_ = 2;
  this->Curves[2]._padding_ = 0;
  this->Curves[2]._padding_ = 0;
  this->Curves[2]._padding_ = 0;
  this->Curves[2]._padding_ = 2;
  this->Curves[2]._padding_ = 0;
  this->Curves[2]._padding_ = 0;
  this->Curves[2]._padding_ = 0;
  this->Curves[2]._padding_ = 2;
  this->Curves[2]._padding_ = (longlong)&___7FMovieSceneDoubleChannel__6B_;
  this->Curves[2].PreInfinityExtrap = '\x04';
  this->Curves[2].PostInfinityExtrap = '\x04';
  this->Curves[2].Times.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Curves[2].Times.ArrayNum = 0;
  this->Curves[2].Times.ArrayMax = 0;
  this->Curves[2].Values.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Curves[2].Values.ArrayNum = 0;
  this->Curves[2].Values.ArrayMax = 0;
  this->Curves[2].DefaultValue = 0.0;
  this->Curves[2].bHasDefaultValue = false;
  *(undefined8 *)&this->Curves[2].KeyHandles = 0;
  *(undefined8 *)&this->Curves[2].KeyHandles.field_0x8 = 0;
  *(undefined8 *)&this->Curves[2].KeyHandles.field_0x20 = 0;
  *(undefined4 *)&this->Curves[2].KeyHandles.field_0x28 = 0;
  *(undefined4 *)&this->Curves[2].KeyHandles.field_0x2c = 0x80;
  *(undefined4 *)&this->Curves[2].KeyHandles.field_0x30 = 0xffffffff;
  *(undefined4 *)&this->Curves[2].KeyHandles.field_0x34 = 0;
  *(undefined8 *)&this->Curves[2].KeyHandles.field_0x38 = 0;
  *(undefined8 *)&this->Curves[2].KeyHandles.field_0x40 = 0;
  *(undefined8 *)&this->Curves[2].KeyHandles.field_0x58 = 0;
  *(undefined4 *)&this->Curves[2].KeyHandles.field_0x60 = 0;
  *(undefined4 *)&this->Curves[2].KeyHandles.field_0x64 = 0x80;
  *(undefined4 *)&this->Curves[2].KeyHandles.field_0x68 = 0xffffffff;
  *(undefined4 *)&this->Curves[2].KeyHandles.field_0x6c = 0;
  *(undefined8 *)&this->Curves[2].KeyHandles.field_0x78 = 0;
  *(undefined4 *)&this->Curves[2].KeyHandles.field_0x80 = 0;
  this->Curves[2].TickResolution.Numerator = 60000;
  this->Curves[2].TickResolution.Denominator = 1;
  this->Curves[3]._padding_ = 0;
  this->Curves[3]._padding_ = 0;
  this->Curves[3]._padding_ = 0;
  this->Curves[3]._padding_ = 2;
  this->Curves[3]._padding_ = 0;
  this->Curves[3]._padding_ = 0;
  this->Curves[3]._padding_ = 0;
  this->Curves[3]._padding_ = 2;
  this->Curves[3]._padding_ = 0;
  this->Curves[3]._padding_ = 0;
  this->Curves[3]._padding_ = 0;
  this->Curves[3]._padding_ = 2;
  this->Curves[3]._padding_ = (longlong)&___7FMovieSceneDoubleChannel__6B_;
  this->Curves[3].PreInfinityExtrap = '\x04';
  this->Curves[3].PostInfinityExtrap = '\x04';
  this->Curves[3].Times.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Curves[3].Times.ArrayNum = 0;
  this->Curves[3].Times.ArrayMax = 0;
  this->Curves[3].Values.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Curves[3].Values.ArrayNum = 0;
  this->Curves[3].Values.ArrayMax = 0;
  this->Curves[3].DefaultValue = 0.0;
  this->Curves[3].bHasDefaultValue = false;
  *(undefined8 *)&this->Curves[3].KeyHandles = 0;
  *(undefined8 *)&this->Curves[3].KeyHandles.field_0x8 = 0;
  *(undefined8 *)&this->Curves[3].KeyHandles.field_0x20 = 0;
  *(undefined4 *)&this->Curves[3].KeyHandles.field_0x28 = 0;
  *(undefined4 *)&this->Curves[3].KeyHandles.field_0x2c = 0x80;
  *(undefined4 *)&this->Curves[3].KeyHandles.field_0x30 = 0xffffffff;
  *(undefined4 *)&this->Curves[3].KeyHandles.field_0x34 = 0;
  *(undefined8 *)&this->Curves[3].KeyHandles.field_0x38 = 0;
  *(undefined8 *)&this->Curves[3].KeyHandles.field_0x40 = 0;
  *(undefined8 *)&this->Curves[3].KeyHandles.field_0x58 = 0;
  *(undefined4 *)&this->Curves[3].KeyHandles.field_0x60 = 0;
  *(undefined4 *)&this->Curves[3].KeyHandles.field_0x64 = 0x80;
  *(undefined4 *)&this->Curves[3].KeyHandles.field_0x68 = 0xffffffff;
  *(undefined4 *)&this->Curves[3].KeyHandles.field_0x6c = 0;
  *(undefined8 *)&this->Curves[3].KeyHandles.field_0x78 = 0;
  *(undefined4 *)&this->Curves[3].KeyHandles.field_0x80 = 0;
  this->Curves[3].TickResolution.Numerator = 60000;
  this->Curves[3].TickResolution.Denominator = 1;
  return this;
}

// UMovieSceneDoubleVectorSection @ 146764560

UMovieSceneDoubleVectorSection * __thiscall
UMovieSceneDoubleVectorSection::UMovieSceneDoubleVectorSection
          (UMovieSceneDoubleVectorSection *this,FObjectInitializer *param_1)

{
  UMovieSceneSection::UMovieSceneSection((UMovieSceneSection *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneSection__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneEntityProvider__;
  this->Curves[0]._padding_ = (longlong)&___7FMovieSceneDoubleChannel__6B_;
  this->Curves[0]._padding_ = 0;
  this->Curves[0]._padding_ = 0;
  this->Curves[0]._padding_ = 0;
  this->Curves[0]._padding_ = 2;
  this->Curves[0]._padding_ = 0;
  this->Curves[0]._padding_ = 0;
  this->Curves[0]._padding_ = 0;
  this->Curves[0]._padding_ = 2;
  this->Curves[0]._padding_ = 0;
  this->Curves[0]._padding_ = 0;
  this->Curves[0]._padding_ = 0;
  this->Curves[0]._padding_ = 2;
  this->Curves[0].PreInfinityExtrap = '\x04';
  this->Curves[0].PostInfinityExtrap = '\x04';
  this->Curves[0].Times.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Curves[0].Times.ArrayNum = 0;
  this->Curves[0].Times.ArrayMax = 0;
  this->Curves[0].Values.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Curves[0].Values.ArrayNum = 0;
  this->Curves[0].Values.ArrayMax = 0;
  this->Curves[0].DefaultValue = 0.0;
  this->Curves[0].bHasDefaultValue = false;
  *(undefined8 *)&this->Curves[0].KeyHandles = 0;
  *(undefined8 *)&this->Curves[0].KeyHandles.field_0x8 = 0;
  *(undefined8 *)&this->Curves[0].KeyHandles.field_0x20 = 0;
  *(undefined4 *)&this->Curves[0].KeyHandles.field_0x28 = 0;
  *(undefined4 *)&this->Curves[0].KeyHandles.field_0x2c = 0x80;
  *(undefined4 *)&this->Curves[0].KeyHandles.field_0x30 = 0xffffffff;
  *(undefined4 *)&this->Curves[0].KeyHandles.field_0x34 = 0;
  *(undefined8 *)&this->Curves[0].KeyHandles.field_0x38 = 0;
  *(undefined8 *)&this->Curves[0].KeyHandles.field_0x40 = 0;
  *(undefined8 *)&this->Curves[0].KeyHandles.field_0x58 = 0;
  *(undefined4 *)&this->Curves[0].KeyHandles.field_0x60 = 0;
  *(undefined4 *)&this->Curves[0].KeyHandles.field_0x64 = 0x80;
  *(undefined4 *)&this->Curves[0].KeyHandles.field_0x68 = 0xffffffff;
  *(undefined4 *)&this->Curves[0].KeyHandles.field_0x6c = 0;
  *(undefined8 *)&this->Curves[0].KeyHandles.field_0x78 = 0;
  *(undefined4 *)&this->Curves[0].KeyHandles.field_0x80 = 0;
  this->Curves[0].TickResolution.Numerator = 60000;
  this->Curves[0].TickResolution.Denominator = 1;
  this->Curves[1]._padding_ = 0;
  this->Curves[1]._padding_ = 0;
  this->Curves[1]._padding_ = 0;
  this->Curves[1]._padding_ = 2;
  this->Curves[1]._padding_ = 0;
  this->Curves[1]._padding_ = 0;
  this->Curves[1]._padding_ = 0;
  this->Curves[1]._padding_ = 2;
  this->Curves[1]._padding_ = 0;
  this->Curves[1]._padding_ = 0;
  this->Curves[1]._padding_ = 0;
  this->Curves[1]._padding_ = 2;
  this->Curves[1]._padding_ = (longlong)&___7FMovieSceneDoubleChannel__6B_;
  this->Curves[1].PreInfinityExtrap = '\x04';
  this->Curves[1].PostInfinityExtrap = '\x04';
  this->Curves[1].Times.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Curves[1].Times.ArrayNum = 0;
  this->Curves[1].Times.ArrayMax = 0;
  this->Curves[1].Values.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Curves[1].Values.ArrayNum = 0;
  this->Curves[1].Values.ArrayMax = 0;
  this->Curves[1].DefaultValue = 0.0;
  this->Curves[1].bHasDefaultValue = false;
  *(undefined8 *)&this->Curves[1].KeyHandles = 0;
  *(undefined8 *)&this->Curves[1].KeyHandles.field_0x8 = 0;
  *(undefined8 *)&this->Curves[1].KeyHandles.field_0x20 = 0;
  *(undefined4 *)&this->Curves[1].KeyHandles.field_0x28 = 0;
  *(undefined4 *)&this->Curves[1].KeyHandles.field_0x2c = 0x80;
  *(undefined4 *)&this->Curves[1].KeyHandles.field_0x30 = 0xffffffff;
  *(undefined4 *)&this->Curves[1].KeyHandles.field_0x34 = 0;
  *(undefined8 *)&this->Curves[1].KeyHandles.field_0x38 = 0;
  *(undefined8 *)&this->Curves[1].KeyHandles.field_0x40 = 0;
  *(undefined8 *)&this->Curves[1].KeyHandles.field_0x58 = 0;
  *(undefined4 *)&this->Curves[1].KeyHandles.field_0x60 = 0;
  *(undefined4 *)&this->Curves[1].KeyHandles.field_0x64 = 0x80;
  *(undefined4 *)&this->Curves[1].KeyHandles.field_0x68 = 0xffffffff;
  *(undefined4 *)&this->Curves[1].KeyHandles.field_0x6c = 0;
  *(undefined8 *)&this->Curves[1].KeyHandles.field_0x78 = 0;
  *(undefined4 *)&this->Curves[1].KeyHandles.field_0x80 = 0;
  this->Curves[1].TickResolution.Numerator = 60000;
  this->Curves[1].TickResolution.Denominator = 1;
  this->Curves[2]._padding_ = 0;
  this->Curves[2]._padding_ = 0;
  this->Curves[2]._padding_ = 0;
  this->Curves[2]._padding_ = 2;
  this->Curves[2]._padding_ = 0;
  this->Curves[2]._padding_ = 0;
  this->Curves[2]._padding_ = 0;
  this->Curves[2]._padding_ = 2;
  this->Curves[2]._padding_ = 0;
  this->Curves[2]._padding_ = 0;
  this->Curves[2]._padding_ = 0;
  this->Curves[2]._padding_ = 2;
  this->Curves[2]._padding_ = (longlong)&___7FMovieSceneDoubleChannel__6B_;
  this->Curves[2].PreInfinityExtrap = '\x04';
  this->Curves[2].PostInfinityExtrap = '\x04';
  this->Curves[2].Times.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Curves[2].Times.ArrayNum = 0;
  this->Curves[2].Times.ArrayMax = 0;
  this->Curves[2].Values.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Curves[2].Values.ArrayNum = 0;
  this->Curves[2].Values.ArrayMax = 0;
  this->Curves[2].DefaultValue = 0.0;
  this->Curves[2].bHasDefaultValue = false;
  *(undefined8 *)&this->Curves[2].KeyHandles = 0;
  *(undefined8 *)&this->Curves[2].KeyHandles.field_0x8 = 0;
  *(undefined8 *)&this->Curves[2].KeyHandles.field_0x20 = 0;
  *(undefined4 *)&this->Curves[2].KeyHandles.field_0x28 = 0;
  *(undefined4 *)&this->Curves[2].KeyHandles.field_0x2c = 0x80;
  *(undefined4 *)&this->Curves[2].KeyHandles.field_0x30 = 0xffffffff;
  *(undefined4 *)&this->Curves[2].KeyHandles.field_0x34 = 0;
  *(undefined8 *)&this->Curves[2].KeyHandles.field_0x38 = 0;
  *(undefined8 *)&this->Curves[2].KeyHandles.field_0x40 = 0;
  *(undefined8 *)&this->Curves[2].KeyHandles.field_0x58 = 0;
  *(undefined4 *)&this->Curves[2].KeyHandles.field_0x60 = 0;
  *(undefined4 *)&this->Curves[2].KeyHandles.field_0x64 = 0x80;
  *(undefined4 *)&this->Curves[2].KeyHandles.field_0x68 = 0xffffffff;
  *(undefined4 *)&this->Curves[2].KeyHandles.field_0x6c = 0;
  *(undefined8 *)&this->Curves[2].KeyHandles.field_0x78 = 0;
  *(undefined4 *)&this->Curves[2].KeyHandles.field_0x80 = 0;
  this->Curves[2].TickResolution.Numerator = 60000;
  this->Curves[2].TickResolution.Denominator = 1;
  this->Curves[3]._padding_ = 0;
  this->Curves[3]._padding_ = 0;
  this->Curves[3]._padding_ = 0;
  this->Curves[3]._padding_ = 2;
  this->Curves[3]._padding_ = 0;
  this->Curves[3]._padding_ = 0;
  this->Curves[3]._padding_ = 0;
  this->Curves[3]._padding_ = 2;
  this->Curves[3]._padding_ = 0;
  this->Curves[3]._padding_ = 0;
  this->Curves[3]._padding_ = 0;
  this->Curves[3]._padding_ = 2;
  this->Curves[3]._padding_ = (longlong)&___7FMovieSceneDoubleChannel__6B_;
  this->Curves[3].PreInfinityExtrap = '\x04';
  this->Curves[3].PostInfinityExtrap = '\x04';
  this->Curves[3].Times.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Curves[3].Times.ArrayNum = 0;
  this->Curves[3].Times.ArrayMax = 0;
  this->Curves[3].Values.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Curves[3].Values.ArrayNum = 0;
  this->Curves[3].Values.ArrayMax = 0;
  this->Curves[3].DefaultValue = 0.0;
  this->Curves[3].bHasDefaultValue = false;
  *(undefined8 *)&this->Curves[3].KeyHandles = 0;
  *(undefined8 *)&this->Curves[3].KeyHandles.field_0x8 = 0;
  *(undefined8 *)&this->Curves[3].KeyHandles.field_0x20 = 0;
  *(undefined4 *)&this->Curves[3].KeyHandles.field_0x28 = 0;
  *(undefined4 *)&this->Curves[3].KeyHandles.field_0x2c = 0x80;
  *(undefined4 *)&this->Curves[3].KeyHandles.field_0x30 = 0xffffffff;
  *(undefined4 *)&this->Curves[3].KeyHandles.field_0x34 = 0;
  *(undefined8 *)&this->Curves[3].KeyHandles.field_0x38 = 0;
  *(undefined8 *)&this->Curves[3].KeyHandles.field_0x40 = 0;
  *(undefined8 *)&this->Curves[3].KeyHandles.field_0x58 = 0;
  *(undefined4 *)&this->Curves[3].KeyHandles.field_0x60 = 0;
  *(undefined4 *)&this->Curves[3].KeyHandles.field_0x64 = 0x80;
  *(undefined4 *)&this->Curves[3].KeyHandles.field_0x68 = 0xffffffff;
  *(undefined4 *)&this->Curves[3].KeyHandles.field_0x6c = 0;
  *(undefined8 *)&this->Curves[3].KeyHandles.field_0x78 = 0;
  *(undefined4 *)&this->Curves[3].KeyHandles.field_0x80 = 0;
  this->Curves[3].TickResolution.Numerator = 60000;
  *(undefined8 *)&this->Curves[3].TickResolution.Denominator = 1;
  *(undefined2 *)&this->_padding_ = 0x101;
  *(undefined2 *)&this->_padding_ = 0x201;
  *(undefined1 *)((longlong)&this->_padding_ + 2) = 1;
  return this;
}

// ~UMovieSceneDoubleVectorSection @ 14676a450

void __thiscall
UMovieSceneDoubleVectorSection::~UMovieSceneDoubleVectorSection
          (UMovieSceneDoubleVectorSection *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneSection__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneEntityProvider__;
  *(undefined4 *)&this->Curves[3].KeyHandles.field_0x80 = 0;
  pvVar1 = *(void **)&this->Curves[3].KeyHandles.field_0x78;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->Curves[3].KeyHandles.field_0x38);
  TSparseArray<FKeyHandle,FDefaultSparseArrayAllocator>::
  ~TSparseArray<FKeyHandle,FDefaultSparseArrayAllocator>
            ((TSparseArray<FKeyHandle,FDefaultSparseArrayAllocator> *)&this->Curves[3].KeyHandles);
  pFVar2 = this->Curves[3].Values.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = this->Curves[3].Times.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  FMovieSceneChannel::~FMovieSceneChannel((FMovieSceneChannel *)(this->Curves + 3));
  *(undefined4 *)&this->Curves[2].KeyHandles.field_0x80 = 0;
  pvVar1 = *(void **)&this->Curves[2].KeyHandles.field_0x78;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->Curves[2].KeyHandles.field_0x38);
  TSparseArray<FKeyHandle,FDefaultSparseArrayAllocator>::
  ~TSparseArray<FKeyHandle,FDefaultSparseArrayAllocator>
            ((TSparseArray<FKeyHandle,FDefaultSparseArrayAllocator> *)&this->Curves[2].KeyHandles);
  pFVar2 = this->Curves[2].Values.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = this->Curves[2].Times.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  FMovieSceneChannel::~FMovieSceneChannel((FMovieSceneChannel *)(this->Curves + 2));
  *(undefined4 *)&this->Curves[1].KeyHandles.field_0x80 = 0;
  pvVar1 = *(void **)&this->Curves[1].KeyHandles.field_0x78;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->Curves[1].KeyHandles.field_0x38);
  TSparseArray<FKeyHandle,FDefaultSparseArrayAllocator>::
  ~TSparseArray<FKeyHandle,FDefaultSparseArrayAllocator>
            ((TSparseArray<FKeyHandle,FDefaultSparseArrayAllocator> *)&this->Curves[1].KeyHandles);
  pFVar2 = this->Curves[1].Values.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = this->Curves[1].Times.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  FMovieSceneChannel::~FMovieSceneChannel((FMovieSceneChannel *)(this->Curves + 1));
  *(undefined4 *)&this->Curves[0].KeyHandles.field_0x80 = 0;
  pvVar1 = *(void **)&this->Curves[0].KeyHandles.field_0x78;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->Curves[0].KeyHandles.field_0x38);
  TSparseArray<FKeyHandle,FDefaultSparseArrayAllocator>::
  ~TSparseArray<FKeyHandle,FDefaultSparseArrayAllocator>
            ((TSparseArray<FKeyHandle,FDefaultSparseArrayAllocator> *)&this->Curves[0].KeyHandles);
  pFVar2 = this->Curves[0].Values.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = this->Curves[0].Times.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  FMovieSceneChannel::~FMovieSceneChannel((FMovieSceneChannel *)this->Curves);
  this->_padding_ = (longlong)&___7IMovieSceneEntityProvider__6B_;
  UMovieSceneSection::~UMovieSceneSection((UMovieSceneSection *)this);
  return;
}

// GetKeyStruct @ 146795700

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TSharedPtr<FStructOnScope,1> * __thiscall
UMovieSceneDoubleVectorSection::GetKeyStruct
          (UMovieSceneDoubleVectorSection *this,TSharedPtr<FStructOnScope,1> *__return_storage_ptr__
          ,TArrayView<FKeyHandle_const_,int> *param_1)

{
  FMovieSceneKeyStructHelper *this_00;
  atomic<int> aVar1;
  int iVar2;
  FMovieSceneChannelProxy *this_01;
  FName FVar3;
  TReferenceControllerBase<1> *pTVar4;
  code *pcVar5;
  TArrayView<FKeyHandle_const_,int> *pTVar6;
  bool bVar7;
  FStructOnScope *pFVar8;
  UPackage *pUVar9;
  longlong *plVar10;
  TSharedPtr<FStructOnScope,1> *pTVar11;
  UScriptStruct *pUVar12;
  FMovieSceneChannelHandle *this_02;
  FMovieSceneChannelValueHelper *pFVar13;
  TOptional<FFrameNumber> TVar14;
  TRawPtrProxy<FStructOnScope> *pTVar15;
  uint uVar16;
  atomic<int> *paVar18;
  undefined4 uVar19;
  undefined1 auStack_158 [32];
  TArrayView<FKeyHandle_const_,int> *local_138;
  longlong *local_130;
  TWeakPtr<FMovieSceneChannelProxy,1> local_128;
  TRawPtrProxy<FStructOnScope> local_118;
  TRawPtrProxy<FStructOnScope> local_110;
  TRawPtrProxy<FStructOnScope> local_108;
  TSharedPtr<FStructOnScope,1> *local_100;
  undefined4 local_f0;
  undefined4 uStack_ec;
  int iStack_e8;
  undefined4 uStack_e4;
  TArrayView<FKeyHandle_const_,int> local_d8;
  FMovieSceneChannelHandle local_c8;
  FMovieSceneChannelHandle local_a8;
  FMovieSceneChannelValueHelper *local_88 [8];
  byte local_48;
  ulonglong local_40;
  FStructOnScope *pFVar17;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_158;
  local_138 = param_1;
  local_100 = __return_storage_ptr__;
  if (this->_padding_ == 0) {
    UMovieSceneSection::GetChannelProxy((UMovieSceneSection *)this);
  }
  pFVar17 = (FStructOnScope *)0x0;
  __return_storage_ptr__->Object = (FStructOnScope *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  iVar2 = this->ChannelsUsed;
  if (iVar2 == 2) {
    pFVar8 = ::operator_new(0x28);
    if (pFVar8 == (FStructOnScope *)0x0) {
      pTVar15 = &local_118;
      local_118.Object = (FStructOnScope *)0x0;
    }
    else {
      if (Z_Registration_Info_UScriptStruct_FMovieSceneVector2DKeyStruct.OuterSingleton ==
          (UScriptStruct *)0x0) {
        pUVar9 = Z_Construct_UPackage__Script_MovieSceneTracks();
        Z_Registration_Info_UScriptStruct_FMovieSceneVector2DKeyStruct.OuterSingleton =
             GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneVector2DKeyStruct,
                             (UObject *)pUVar9,L"MovieSceneVector2DKeyStruct");
      }
      local_118.Object =
           FStructOnScope::FStructOnScope
                     (pFVar8,(UStruct *)
                             Z_Registration_Info_UScriptStruct_FMovieSceneVector2DKeyStruct.
                             OuterSingleton);
      pTVar15 = &local_118;
    }
  }
  else if (iVar2 == 3) {
    pFVar8 = ::operator_new(0x28);
    if (pFVar8 == (FStructOnScope *)0x0) {
      pTVar15 = &local_110;
      local_110.Object = (FStructOnScope *)0x0;
    }
    else {
      if (Z_Registration_Info_UScriptStruct_FMovieSceneVector3dKeyStruct.OuterSingleton ==
          (UScriptStruct *)0x0) {
        pUVar9 = Z_Construct_UPackage__Script_MovieSceneTracks();
        Z_Registration_Info_UScriptStruct_FMovieSceneVector3dKeyStruct.OuterSingleton =
             GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneVector3dKeyStruct,
                             (UObject *)pUVar9,L"MovieSceneVector3dKeyStruct");
      }
      local_110.Object =
           FStructOnScope::FStructOnScope
                     (pFVar8,(UStruct *)
                             Z_Registration_Info_UScriptStruct_FMovieSceneVector3dKeyStruct.
                             OuterSingleton);
      pTVar15 = &local_110;
    }
  }
  else {
    if (iVar2 != 4) goto LAB_14679589f;
    pFVar8 = ::operator_new(0x28);
    local_108.Object = pFVar17;
    if (pFVar8 != (FStructOnScope *)0x0) {
      if (Z_Registration_Info_UScriptStruct_FMovieSceneVector4dKeyStruct.OuterSingleton ==
          (UScriptStruct *)0x0) {
        pUVar9 = Z_Construct_UPackage__Script_MovieSceneTracks();
        Z_Registration_Info_UScriptStruct_FMovieSceneVector4dKeyStruct.OuterSingleton =
             GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneVector4dKeyStruct,
                             (UObject *)pUVar9,L"MovieSceneVector4dKeyStruct");
      }
      local_108.Object =
           FStructOnScope::FStructOnScope
                     (pFVar8,(UStruct *)
                             Z_Registration_Info_UScriptStruct_FMovieSceneVector4dKeyStruct.
                             OuterSingleton);
    }
    pTVar15 = &local_108;
  }
  TSharedPtr<FStructOnScope,1>::operator=<FStructOnScope>(__return_storage_ptr__,pTVar15);
LAB_14679589f:
  if (__return_storage_ptr__->Object != (FStructOnScope *)0x0) {
    plVar10 = (longlong *)(**(code **)(__return_storage_ptr__->Object->_padding_ + 0x18))();
    pTVar6 = local_138;
    this_00 = (FMovieSceneKeyStructHelper *)(plVar10 + 2);
    local_130 = plVar10;
    if (0 < this->ChannelsUsed) {
      do {
        local_f0 = *(undefined4 *)&pTVar6->DataPtr;
        uStack_ec = *(undefined4 *)((longlong)&pTVar6->DataPtr + 4);
        iStack_e8 = pTVar6->ArrayNum;
        uStack_e4 = *(undefined4 *)&pTVar6->field_0xc;
        local_138 = (TArrayView<FKeyHandle_const_,int> *)
                    (**(code **)(*plVar10 + 0x10))(plVar10,pFVar17);
        if ((this->_padding_ == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar7)) {
          pcVar5 = (code *)swi(3);
          pTVar11 = (TSharedPtr<FStructOnScope,1> *)(*pcVar5)();
          return pTVar11;
        }
        this_01 = (FMovieSceneChannelProxy *)this->_padding_;
        pUVar12 = FMovieSceneDoubleChannel::StaticStruct();
        this_02 = FMovieSceneChannelProxy::MakeHandle
                            (this_01,&local_a8,(FName)pUVar12->_padding_,(int)pFVar17);
        pUVar12 = FMovieSceneDoubleChannel::StaticStruct();
        bVar7 = FMovieSceneChannelHandle::IsCastValidInternal(this_02,(UStruct *)pUVar12);
        if ((!bVar7) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsCastValid<OtherChannelType>()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelHandle.h"
                               ,0xd8,L"Invalid cast between unrelated channel types"), bVar7)) {
          pcVar5 = (code *)swi(3);
          pTVar11 = (TSharedPtr<FStructOnScope,1> *)(*pcVar5)();
          return pTVar11;
        }
        iVar2 = this_02->ChannelIndex;
        FVar3 = this_02->ChannelTypeName;
        local_128.Object = (this_02->WeakChannelProxy).Object;
        pTVar4 = (this_02->WeakChannelProxy).WeakReferenceCount.ReferenceController;
        if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
          paVar18 = (atomic<int> *)&DAT_0000000c;
        }
        else {
          paVar18 = &pTVar4->WeakReferenceCount;
          LOCK();
          *paVar18 = (atomic<int>)((int)*paVar18 + 1);
          UNLOCK();
          LOCK();
          *paVar18 = (atomic<int>)((int)*paVar18 + 1);
          UNLOCK();
          LOCK();
          *paVar18 = (atomic<int>)((int)*paVar18 + 1);
          UNLOCK();
        }
        local_128.WeakReferenceCount.ReferenceController = pTVar4;
        FMovieSceneChannelHandle::FMovieSceneChannelHandle(&local_c8,&local_128,FVar3,iVar2);
        if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          aVar1 = *paVar18;
          *paVar18 = (atomic<int>)((int)*paVar18 + -1);
          UNLOCK();
          if (aVar1 == (atomic<int>)0x1) {
            (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
          }
          LOCK();
          paVar18 = &pTVar4->WeakReferenceCount;
          aVar1 = *paVar18;
          *paVar18 = (atomic<int>)((int)*paVar18 + -1);
          UNLOCK();
          if (aVar1 == (atomic<int>)0x1) {
            (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
          }
        }
        if (local_a8.WeakChannelProxy.WeakReferenceCount.ReferenceController !=
            (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          paVar18 = &(local_a8.WeakChannelProxy.WeakReferenceCount.ReferenceController)->
                     WeakReferenceCount;
          aVar1 = *paVar18;
          *paVar18 = (atomic<int>)((int)*paVar18 + -1);
          UNLOCK();
          if (aVar1 == (atomic<int>)0x1) {
            (**(code **)((local_a8.WeakChannelProxy.WeakReferenceCount.ReferenceController)->
                         _padding_ + 8))
                      (local_a8.WeakChannelProxy.WeakReferenceCount.ReferenceController,1);
          }
        }
        local_d8.DataPtr = (FKeyHandle *)CONCAT44(uStack_ec,local_f0);
        local_d8._12_4_ = uStack_e4;
        local_d8.ArrayNum = iStack_e8;
        pFVar13 = FMovieSceneChannelValueHelper::
                  FMovieSceneChannelValueHelper<FMovieSceneDoubleChannel,double>
                            ((FMovieSceneChannelValueHelper *)local_88,
                             (TMovieSceneChannelHandle<FMovieSceneDoubleChannel> *)&local_c8,
                             (double *)local_138,&local_d8);
        FMovieSceneKeyStructHelper::Add(this_00,pFVar13);
        if ((local_48 & 1) != 0) {
          pFVar13 = (FMovieSceneChannelValueHelper *)local_88;
          if ((local_48 & 2) == 0) {
            pFVar13 = local_88[0];
          }
          local_48 = local_48 & 0xfe;
          (**(code **)((*(FMovieSceneChannelValueHelper **)(pFVar13->Impl).Data.Pad)->Impl).Data.Pad
          )(pFVar13,0);
          if ((local_48 & 2) == 0) {
            FMemory::Free(local_88[0]);
          }
        }
        if (local_c8.WeakChannelProxy.WeakReferenceCount.ReferenceController !=
            (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          paVar18 = &(local_c8.WeakChannelProxy.WeakReferenceCount.ReferenceController)->
                     WeakReferenceCount;
          aVar1 = *paVar18;
          *paVar18 = (atomic<int>)((int)*paVar18 + -1);
          UNLOCK();
          if (aVar1 == (atomic<int>)0x1) {
            (**(code **)((local_c8.WeakChannelProxy.WeakReferenceCount.ReferenceController)->
                         _padding_ + 8))
                      (local_c8.WeakChannelProxy.WeakReferenceCount.ReferenceController,1);
          }
        }
        uVar16 = (int)pFVar17 + 1;
        pFVar17 = (FStructOnScope *)(ulonglong)uVar16;
        __return_storage_ptr__ = local_100;
      } while ((int)uVar16 < this->ChannelsUsed);
    }
    plVar10 = local_130;
    uVar19 = 0;
    FMovieSceneKeyStructHelper::SetStartingValues(this_00);
    TVar14 = FMovieSceneKeyStructHelper::GetUnifiedKeyTime(this_00);
    if (*(char *)((longlong)TVar14 + 4) != '\0') {
      uVar19 = *(undefined4 *)TVar14;
    }
    *(undefined4 *)(plVar10 + 1) = uVar19;
  }
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 146798920

UClass * __cdecl UMovieSceneDoubleVectorSection::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneDoubleVectorSection.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneDoubleVectorSection",
               &Z_Registration_Info_UClass_UMovieSceneDoubleVectorSection.InnerSingleton,
               StaticRegisterNativesUMovieSceneDoubleVectorSection,0x5e0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneDoubleVectorSection>,
               InternalVTableHelperCtorCaller<UMovieSceneDoubleVectorSection>,local_res8,
               UMovieSceneSection::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneDoubleVectorSection.InnerSingleton;
}

// ImportEntityImpl @ 14679eba0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
UMovieSceneDoubleVectorSection::ImportEntityImpl
          (UMovieSceneDoubleVectorSection *this,UMovieSceneEntitySystemLinker *param_1,
          FEntityImportParams *param_2,FImportedEntity *param_3)

{
  int iVar1;
  FBuiltInComponentTypes *pFVar2;
  FMovieSceneTracksComponentTypes *pFVar3;
  undefined **local_e8;
  ushort local_e0;
  undefined4 local_d8;
  longlong *local_d0;
  undefined1 local_c8;
  undefined4 local_c0;
  longlong *local_b8;
  undefined1 local_b0;
  undefined4 local_a8;
  longlong *local_a0;
  undefined1 local_98;
  undefined4 local_90;
  longlong *local_88;
  undefined1 local_80;
  undefined1 local_78;
  FComponentTypeID local_70;
  TComponentTypeID<UE::MovieScene::FSourceDoubleChannel> local_68;
  undefined1 uStack_66;
  undefined1 uStack_65;
  TComponentTypeID<UE::MovieScene::FSourceDoubleChannel> local_50;
  undefined1 uStack_4e;
  undefined1 uStack_4d;
  TComponentTypeID<UE::MovieScene::FSourceDoubleChannel> local_38;
  undefined1 uStack_36;
  undefined1 uStack_35;
  TComponentTypeID<UE::MovieScene::FSourceDoubleChannel> local_20;
  undefined1 uStack_1e;
  undefined1 uStack_1d;
  
  if ((0 < (int)this->Curves[3]._padding_) &&
     ((((((int)this->_padding_ != 0 || ((char)this->_padding_ == '\x01')) ||
        (*(int *)&this->Curves[0].bHasDefaultValue != 0)) ||
       ((this->Curves[0].KeyHandles.field_0x18 == '\x01' ||
        (*(int *)&this->Curves[1].bHasDefaultValue != 0)))) ||
      ((this->Curves[1].KeyHandles.field_0x18 == '\x01' ||
       ((*(int *)&this->Curves[2].bHasDefaultValue != 0 ||
        (this->Curves[2].KeyHandles.field_0x18 == '\x01')))))))) {
    pFVar2 = UE::MovieScene::FBuiltInComponentTypes::Get();
    pFVar3 = UE::MovieScene::FMovieSceneTracksComponentTypes::Get();
    iVar1 = (int)this->Curves[3]._padding_;
    local_e0 = (pFVar3->DoubleVector).PropertyTag.Value;
    if ((iVar1 < 1) || (((int)this->_padding_ == 0 && ((char)this->_padding_ != '\x01')))) {
      uStack_66 = 0;
    }
    else {
      uStack_66 = 1;
    }
    local_d0 = &this->_padding_;
    local_68 = pFVar2->DoubleChannel[0];
    if ((iVar1 < 2) ||
       ((*(int *)&this->Curves[0].bHasDefaultValue == 0 &&
        (this->Curves[0].KeyHandles.field_0x18 != '\x01')))) {
      uStack_4e = 0;
    }
    else {
      uStack_4e = 1;
    }
    local_b8 = &this->Curves[0]._padding_;
    local_50 = pFVar2->DoubleChannel[1];
    if ((iVar1 < 3) ||
       ((*(int *)&this->Curves[1].bHasDefaultValue == 0 &&
        (this->Curves[1].KeyHandles.field_0x18 != '\x01')))) {
      uStack_36 = 0;
    }
    else {
      uStack_36 = 1;
    }
    local_a0 = &this->Curves[1]._padding_;
    local_38 = pFVar2->DoubleChannel[2];
    if (((int)this->Curves[3]._padding_ < 4) ||
       ((*(int *)&this->Curves[2].bHasDefaultValue == 0 &&
        (this->Curves[2].KeyHandles.field_0x18 != '\x01')))) {
      uStack_1e = 0;
    }
    else {
      uStack_1e = 1;
    }
    local_d8 = _local_68;
    local_c0 = _local_50;
    local_a8 = _local_38;
    local_20 = pFVar2->DoubleChannel[3];
    local_90 = _local_20;
    local_88 = &this->Curves[2]._padding_;
    local_e8 = &
               ___7__TEntityBuilder_UFAdd_MovieScene_UE__U__TAddConditional_UFSourceDoubleChannel_MovieScene_UE___23_U423_U423_U423__MovieScene_UE__6B_
    ;
    local_c8 = 1;
    local_b0 = 1;
    local_98 = 1;
    local_80 = 1;
    local_78 = 0;
    local_70.Value = local_e0;
    UE::MovieScene::
    TPropertyTrackEntityImportHelperImpl<UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>_>
    ::Commit((TPropertyTrackEntityImportHelperImpl<UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>_>
              *)&local_e8,(UMovieSceneSection *)&this[-1].Curves[3]._padding_,param_2,param_3);
  }
  return;
}

// PopulateEvaluationFieldImpl @ 1467b1310

bool __thiscall
UMovieSceneDoubleVectorSection::PopulateEvaluationFieldImpl
          (UMovieSceneDoubleVectorSection *this,TRange<FFrameNumber> *param_1,
          FMovieSceneEvaluationFieldEntityMetaData *param_2,
          FMovieSceneEntityComponentFieldBuilder *param_3)

{
  FMovieScenePropertyTrackEntityImportHelper::PopulateEvaluationField
            ((UMovieSceneSection *)&this[-1].Curves[3]._padding_,param_1,param_2,param_3);
  return true;
}

// PostEditImport @ 1467b1f00

void __thiscall UMovieSceneDoubleVectorSection::PostEditImport(UMovieSceneDoubleVectorSection *this)

{
  UMovieSceneSection::PostEditImport((UMovieSceneSection *)this);
  RecreateChannelProxy(this);
  return;
}

// RecreateChannelProxy @ 1467b5030

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UMovieSceneDoubleVectorSection::RecreateChannelProxy(UMovieSceneDoubleVectorSection *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  ForElementType<FMovieSceneChannelEntry> FVar7;
  uint uVar8;
  TReferenceControllerBase<1> *pTVar9;
  TReferenceControllerBase<1> *pTVar10;
  undefined1 auStack_88 [32];
  TReferenceControllerBase<1> *local_68;
  FSharedReferencer<1> local_60;
  FMovieSceneChannelProxyData local_58;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_88;
  pTVar9 = (TReferenceControllerBase<1> *)0x0;
  local_58.Entries.AllocatorInstance.SecondaryData = (ForElementType<FMovieSceneChannelEntry>)0x0;
  local_58.Entries.ArrayNum = 0;
  local_58.Entries.ArrayMax = 1;
  if (4 < (uint)this->ChannelsUsed) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("ChannelsUsed <= (sizeof(UEArrayCountHelper(Curves)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneTracks\\Private\\Sections\\MovieSceneVectorSection.cpp"
                       ,0x136,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pTVar6 = pTVar9;
  if (0 < this->ChannelsUsed) {
    do {
      FMovieSceneChannelProxyData::AddInternal<FMovieSceneDoubleChannel>
                (&local_58,this->Curves + (int)pTVar6);
      uVar8 = (int)pTVar6 + 1;
      pTVar6 = (TReferenceControllerBase<1> *)(ulonglong)uVar8;
    } while ((int)uVar8 < this->ChannelsUsed);
  }
  pTVar6 = ::operator_new(0x68);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar10 = (TReferenceControllerBase<1> *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFMovieSceneChannelProxy___00_SharedPointerInternals__6B_
    ;
    pTVar6[1]._padding_ = 0;
    pTVar6[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[2]._padding_ = 0;
    pTVar6[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[3]._padding_ = 0;
    pTVar6[3].SharedReferenceCount = (atomic<int>)0x2;
    pTVar6[3].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[5].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[5].WeakReferenceCount = (atomic<int>)0x0;
    if (local_58.Entries.AllocatorInstance.SecondaryData ==
        (ForElementType<FMovieSceneChannelEntry>)0x0) {
      memmove(pTVar6 + 4,&local_58,0x18);
    }
    if (*(void **)&pTVar6[5].SharedReferenceCount != (void *)0x0) {
      FMemory::Free(*(void **)&pTVar6[5].SharedReferenceCount);
    }
    pTVar10 = pTVar6 + 1;
    *(ForElementType<FMovieSceneChannelEntry> *)&pTVar6[5].SharedReferenceCount =
         local_58.Entries.AllocatorInstance.SecondaryData;
    local_58.Entries.AllocatorInstance.SecondaryData = (ForElementType<FMovieSceneChannelEntry>)0x0;
    *(int *)&pTVar6[6]._padding_ = local_58.Entries.ArrayNum;
    *(int *)((longlong)&pTVar6[6]._padding_ + 4) = local_58.Entries.ArrayMax;
    local_58.Entries.ArrayNum = 0;
    local_58.Entries.ArrayMax = 1;
    pTVar9 = pTVar6;
    if (pTVar10 == (TReferenceControllerBase<1> *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      goto LAB_1467b5226;
    }
  }
  if (((pTVar10->_padding_ == 0) || (*(longlong *)&pTVar10->SharedReferenceCount == 0)) ||
     (*(int *)(*(longlong *)&pTVar10->SharedReferenceCount + 8) < 1)) {
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar10->_padding_ = (longlong)pTVar10;
    if (pTVar9 != *(TReferenceControllerBase<1> **)&pTVar10->SharedReferenceCount) {
      if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar9->WeakReferenceCount = (atomic<int>)((int)pTVar9->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = *(longlong **)&pTVar10->SharedReferenceCount;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar3 + 8))(plVar3,1);
        }
      }
      *(TReferenceControllerBase<1> **)&pTVar10->SharedReferenceCount = pTVar9;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  }
LAB_1467b5226:
  if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_68 = pTVar10;
  local_60.ReferenceController = pTVar9;
  if ((TReferenceControllerBase<1> **)&this->_padding_ != &local_68) {
    this->_padding_ = (longlong)pTVar10;
    local_68 = (TReferenceControllerBase<1> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&this->_padding_,&local_60);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_60.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  FVar7 = (ForElementType<FMovieSceneChannelEntry>)&local_58;
  if (local_58.Entries.AllocatorInstance.SecondaryData !=
      (ForElementType<FMovieSceneChannelEntry>)0x0) {
    FVar7 = local_58.Entries.AllocatorInstance.SecondaryData;
  }
  DestructItems<FMovieSceneChannelEntry,int>
            ((FMovieSceneChannelEntry *)FVar7,local_58.Entries.ArrayNum);
  if (local_58.Entries.AllocatorInstance.SecondaryData !=
      (ForElementType<FMovieSceneChannelEntry>)0x0) {
    FMemory::Free((void *)local_58.Entries.AllocatorInstance.SecondaryData);
  }
  return;
}

// Serialize @ 1467c12d0

void __thiscall
UMovieSceneDoubleVectorSection::Serialize(UMovieSceneDoubleVectorSection *this,FArchive *param_1)

{
  UMovieSceneSection::Serialize((UMovieSceneSection *)this,param_1);
  if ((param_1->field_0x28 & 1) != 0) {
    RecreateChannelProxy(this);
  }
  return;
}

// Serialize @ 1467c1310

void __thiscall
UMovieSceneDoubleVectorSection::Serialize
          (UMovieSceneDoubleVectorSection *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  UMovieSceneSection::Serialize((UMovieSceneSection *)this,pFVar1);
  if ((pFVar1->field_0x28 & 1) != 0) {
    RecreateChannelProxy(this);
  }
  return;
}

// StaticRegisterNativesUMovieSceneDoubleVectorSection @ 1467c28e0

void __cdecl
UMovieSceneDoubleVectorSection::StaticRegisterNativesUMovieSceneDoubleVectorSection(void)

{
  return;
}

// _getUObject @ 1467ca780

UObject * __thiscall
UMovieSceneDoubleVectorSection::_getUObject(UMovieSceneDoubleVectorSection *this)

{
  return (UObject *)&this[-1].Curves[3]._padding_;
}

