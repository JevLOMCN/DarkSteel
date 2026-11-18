// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 38

// StaticClass @ 146270850

UClass * __cdecl UMovieSceneSubSection::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneSubSection.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneSubSection",
               &Z_Registration_Info_UClass_UMovieSceneSubSection.InnerSingleton,
               StaticRegisterNativesUMovieSceneSubSection,0x890,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"EditorPerProjectUserSettings",
               InternalConstructor<UMovieSceneSubSection>,
               InternalVTableHelperCtorCaller<UMovieSceneSubSection>,local_res8,
               UMovieSceneSection::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneSubSection.InnerSingleton;
}

// UMovieSceneSubSection @ 146299dd0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

UMovieSceneSubSection * __thiscall
UMovieSceneSubSection::UMovieSceneSubSection(UMovieSceneSubSection *this,FVTableHelper *param_1)

{
  double dVar1;
  
  UMovieSceneSection::UMovieSceneSection((UMovieSceneSection *)this,param_1);
  dVar1 = __real_3ff0000000000000;
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneSection__;
  (this->Parameters).StartFrameOffset.Value = 0;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneEntityProvider__;
  (this->Parameters).bCanLoop = false;
  (this->Parameters).EndFrameOffset = 0;
  (this->Parameters).FirstLoopStartFrameOffset = 0;
  FMovieSceneTimeWarpVariant::FMovieSceneTimeWarpVariant(&(this->Parameters).TimeScale,dVar1);
  (this->Parameters).HierarchicalBias = 100;
  (this->Parameters).Flags = None;
  (this->Parameters).StartOffset_DEPRECATED = 0.0;
  (this->Parameters).PrerollTime_DEPRECATED = 0.0;
  (this->Parameters).PostrollTime_DEPRECATED = 0.0;
  (this->OriginOverrideMask).Mask = 0;
  this->Translation[0]._padding_ = (longlong)&___7FMovieSceneDoubleChannel__6B_;
  this->Translation[0]._padding_ = 0;
  this->Translation[0]._padding_ = 0;
  this->Translation[0]._padding_ = 0;
  this->Translation[0]._padding_ = 2;
  this->Translation[0]._padding_ = 0;
  this->Translation[0]._padding_ = 0;
  this->Translation[0]._padding_ = 0;
  this->Translation[0]._padding_ = 2;
  this->Translation[0]._padding_ = 0;
  this->Translation[0]._padding_ = 0;
  this->Translation[0]._padding_ = 0;
  this->Translation[0]._padding_ = 2;
  this->Translation[0].PreInfinityExtrap = '\x04';
  this->Translation[0].PostInfinityExtrap = '\x04';
  this->Translation[0].Times.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Translation[0].Times.ArrayNum = 0;
  this->Translation[0].Times.ArrayMax = 0;
  this->Translation[0].Values.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Translation[0].Values.ArrayNum = 0;
  this->Translation[0].Values.ArrayMax = 0;
  this->Translation[0].DefaultValue = 0.0;
  this->Translation[0].bHasDefaultValue = false;
  *(undefined8 *)&this->Translation[0].KeyHandles = 0;
  *(undefined8 *)&this->Translation[0].KeyHandles.field_0x8 = 0;
  *(undefined8 *)&this->Translation[0].KeyHandles.field_0x20 = 0;
  *(undefined4 *)&this->Translation[0].KeyHandles.field_0x28 = 0;
  *(undefined4 *)&this->Translation[0].KeyHandles.field_0x2c = 0x80;
  *(undefined4 *)&this->Translation[0].KeyHandles.field_0x30 = 0xffffffff;
  *(undefined4 *)&this->Translation[0].KeyHandles.field_0x34 = 0;
  *(undefined8 *)&this->Translation[0].KeyHandles.field_0x38 = 0;
  *(undefined8 *)&this->Translation[0].KeyHandles.field_0x40 = 0;
  *(undefined8 *)&this->Translation[0].KeyHandles.field_0x58 = 0;
  *(undefined4 *)&this->Translation[0].KeyHandles.field_0x60 = 0;
  *(undefined4 *)&this->Translation[0].KeyHandles.field_0x64 = 0x80;
  *(undefined4 *)&this->Translation[0].KeyHandles.field_0x68 = 0xffffffff;
  *(undefined4 *)&this->Translation[0].KeyHandles.field_0x6c = 0;
  *(undefined8 *)&this->Translation[0].KeyHandles.field_0x78 = 0;
  *(undefined4 *)&this->Translation[0].KeyHandles.field_0x80 = 0;
  this->Translation[0].TickResolution.Numerator = 60000;
  this->Translation[0].TickResolution.Denominator = 1;
  this->Translation[1]._padding_ = 0;
  this->Translation[1]._padding_ = 0;
  this->Translation[1]._padding_ = 0;
  this->Translation[1]._padding_ = 2;
  this->Translation[1]._padding_ = 0;
  this->Translation[1]._padding_ = 0;
  this->Translation[1]._padding_ = 0;
  this->Translation[1]._padding_ = 2;
  this->Translation[1]._padding_ = 0;
  this->Translation[1]._padding_ = 0;
  this->Translation[1]._padding_ = 0;
  this->Translation[1]._padding_ = 2;
  this->Translation[1]._padding_ = (longlong)&___7FMovieSceneDoubleChannel__6B_;
  this->Translation[1].PreInfinityExtrap = '\x04';
  this->Translation[1].PostInfinityExtrap = '\x04';
  this->Translation[1].Times.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Translation[1].Times.ArrayNum = 0;
  this->Translation[1].Times.ArrayMax = 0;
  this->Translation[1].Values.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Translation[1].Values.ArrayNum = 0;
  this->Translation[1].Values.ArrayMax = 0;
  this->Translation[1].DefaultValue = 0.0;
  this->Translation[1].bHasDefaultValue = false;
  *(undefined8 *)&this->Translation[1].KeyHandles = 0;
  *(undefined8 *)&this->Translation[1].KeyHandles.field_0x8 = 0;
  *(undefined8 *)&this->Translation[1].KeyHandles.field_0x20 = 0;
  *(undefined4 *)&this->Translation[1].KeyHandles.field_0x28 = 0;
  *(undefined4 *)&this->Translation[1].KeyHandles.field_0x2c = 0x80;
  *(undefined4 *)&this->Translation[1].KeyHandles.field_0x30 = 0xffffffff;
  *(undefined4 *)&this->Translation[1].KeyHandles.field_0x34 = 0;
  *(undefined8 *)&this->Translation[1].KeyHandles.field_0x38 = 0;
  *(undefined8 *)&this->Translation[1].KeyHandles.field_0x40 = 0;
  *(undefined8 *)&this->Translation[1].KeyHandles.field_0x58 = 0;
  *(undefined4 *)&this->Translation[1].KeyHandles.field_0x60 = 0;
  *(undefined4 *)&this->Translation[1].KeyHandles.field_0x64 = 0x80;
  *(undefined4 *)&this->Translation[1].KeyHandles.field_0x68 = 0xffffffff;
  *(undefined4 *)&this->Translation[1].KeyHandles.field_0x6c = 0;
  *(undefined8 *)&this->Translation[1].KeyHandles.field_0x78 = 0;
  *(undefined4 *)&this->Translation[1].KeyHandles.field_0x80 = 0;
  this->Translation[1].TickResolution.Numerator = 60000;
  this->Translation[1].TickResolution.Denominator = 1;
  this->Translation[2]._padding_ = 0;
  this->Translation[2]._padding_ = 0;
  this->Translation[2]._padding_ = 0;
  this->Translation[2]._padding_ = 2;
  this->Translation[2]._padding_ = 0;
  this->Translation[2]._padding_ = 0;
  this->Translation[2]._padding_ = 0;
  this->Translation[2]._padding_ = 2;
  this->Translation[2]._padding_ = 0;
  this->Translation[2]._padding_ = 0;
  this->Translation[2]._padding_ = 0;
  this->Translation[2]._padding_ = 2;
  this->Translation[2]._padding_ = (longlong)&___7FMovieSceneDoubleChannel__6B_;
  this->Translation[2].PreInfinityExtrap = '\x04';
  this->Translation[2].PostInfinityExtrap = '\x04';
  this->Translation[2].Times.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Translation[2].Times.ArrayNum = 0;
  this->Translation[2].Times.ArrayMax = 0;
  this->Translation[2].Values.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Translation[2].Values.ArrayNum = 0;
  this->Translation[2].Values.ArrayMax = 0;
  this->Translation[2].DefaultValue = 0.0;
  this->Translation[2].bHasDefaultValue = false;
  *(undefined8 *)&this->Translation[2].KeyHandles = 0;
  *(undefined8 *)&this->Translation[2].KeyHandles.field_0x8 = 0;
  *(undefined8 *)&this->Translation[2].KeyHandles.field_0x20 = 0;
  *(undefined4 *)&this->Translation[2].KeyHandles.field_0x28 = 0;
  *(undefined4 *)&this->Translation[2].KeyHandles.field_0x2c = 0x80;
  *(undefined4 *)&this->Translation[2].KeyHandles.field_0x30 = 0xffffffff;
  *(undefined4 *)&this->Translation[2].KeyHandles.field_0x34 = 0;
  *(undefined8 *)&this->Translation[2].KeyHandles.field_0x38 = 0;
  *(undefined8 *)&this->Translation[2].KeyHandles.field_0x40 = 0;
  *(undefined8 *)&this->Translation[2].KeyHandles.field_0x58 = 0;
  *(undefined4 *)&this->Translation[2].KeyHandles.field_0x60 = 0;
  *(undefined4 *)&this->Translation[2].KeyHandles.field_0x64 = 0x80;
  *(undefined4 *)&this->Translation[2].KeyHandles.field_0x68 = 0xffffffff;
  *(undefined4 *)&this->Translation[2].KeyHandles.field_0x6c = 0;
  *(undefined8 *)&this->Translation[2].KeyHandles.field_0x78 = 0;
  *(undefined4 *)&this->Translation[2].KeyHandles.field_0x80 = 0;
  this->Translation[2].TickResolution.Numerator = 60000;
  this->Translation[2].TickResolution.Denominator = 1;
  this->Rotation[0]._padding_ = 0;
  this->Rotation[0]._padding_ = 0;
  this->Rotation[0]._padding_ = 0;
  this->Rotation[0]._padding_ = 2;
  this->Rotation[0]._padding_ = 0;
  this->Rotation[0]._padding_ = 0;
  this->Rotation[0]._padding_ = 0;
  this->Rotation[0]._padding_ = 2;
  this->Rotation[0]._padding_ = 0;
  this->Rotation[0]._padding_ = 0;
  this->Rotation[0]._padding_ = 0;
  this->Rotation[0]._padding_ = 2;
  this->Rotation[0]._padding_ = (longlong)&___7FMovieSceneDoubleChannel__6B_;
  this->Rotation[0].PreInfinityExtrap = '\x04';
  this->Rotation[0].PostInfinityExtrap = '\x04';
  this->Rotation[0].Times.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Rotation[0].Times.ArrayNum = 0;
  this->Rotation[0].Times.ArrayMax = 0;
  this->Rotation[0].Values.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Rotation[0].Values.ArrayNum = 0;
  this->Rotation[0].Values.ArrayMax = 0;
  this->Rotation[0].DefaultValue = 0.0;
  this->Rotation[0].bHasDefaultValue = false;
  *(undefined8 *)&this->Rotation[0].KeyHandles = 0;
  *(undefined8 *)&this->Rotation[0].KeyHandles.field_0x8 = 0;
  *(undefined8 *)&this->Rotation[0].KeyHandles.field_0x20 = 0;
  *(undefined4 *)&this->Rotation[0].KeyHandles.field_0x28 = 0;
  *(undefined4 *)&this->Rotation[0].KeyHandles.field_0x2c = 0x80;
  *(undefined4 *)&this->Rotation[0].KeyHandles.field_0x30 = 0xffffffff;
  *(undefined4 *)&this->Rotation[0].KeyHandles.field_0x34 = 0;
  *(undefined8 *)&this->Rotation[0].KeyHandles.field_0x38 = 0;
  *(undefined8 *)&this->Rotation[0].KeyHandles.field_0x40 = 0;
  *(undefined8 *)&this->Rotation[0].KeyHandles.field_0x58 = 0;
  *(undefined4 *)&this->Rotation[0].KeyHandles.field_0x60 = 0;
  *(undefined4 *)&this->Rotation[0].KeyHandles.field_0x64 = 0x80;
  *(undefined4 *)&this->Rotation[0].KeyHandles.field_0x68 = 0xffffffff;
  *(undefined4 *)&this->Rotation[0].KeyHandles.field_0x6c = 0;
  *(undefined8 *)&this->Rotation[0].KeyHandles.field_0x78 = 0;
  *(undefined4 *)&this->Rotation[0].KeyHandles.field_0x80 = 0;
  this->Rotation[0].TickResolution.Numerator = 60000;
  this->Rotation[0].TickResolution.Denominator = 1;
  this->Rotation[1]._padding_ = 0;
  this->Rotation[1]._padding_ = 0;
  this->Rotation[1]._padding_ = 0;
  this->Rotation[1]._padding_ = 2;
  this->Rotation[1]._padding_ = 0;
  this->Rotation[1]._padding_ = 0;
  this->Rotation[1]._padding_ = 0;
  this->Rotation[1]._padding_ = 2;
  this->Rotation[1]._padding_ = 0;
  this->Rotation[1]._padding_ = 0;
  this->Rotation[1]._padding_ = 0;
  this->Rotation[1]._padding_ = 2;
  this->Rotation[1]._padding_ = (longlong)&___7FMovieSceneDoubleChannel__6B_;
  this->Rotation[1].PreInfinityExtrap = '\x04';
  this->Rotation[1].PostInfinityExtrap = '\x04';
  this->Rotation[1].Times.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Rotation[1].Times.ArrayNum = 0;
  this->Rotation[1].Times.ArrayMax = 0;
  this->Rotation[1].Values.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Rotation[1].Values.ArrayNum = 0;
  this->Rotation[1].Values.ArrayMax = 0;
  this->Rotation[1].DefaultValue = 0.0;
  this->Rotation[1].bHasDefaultValue = false;
  *(undefined8 *)&this->Rotation[1].KeyHandles = 0;
  *(undefined8 *)&this->Rotation[1].KeyHandles.field_0x8 = 0;
  *(undefined8 *)&this->Rotation[1].KeyHandles.field_0x20 = 0;
  *(undefined4 *)&this->Rotation[1].KeyHandles.field_0x28 = 0;
  *(undefined4 *)&this->Rotation[1].KeyHandles.field_0x2c = 0x80;
  *(undefined4 *)&this->Rotation[1].KeyHandles.field_0x30 = 0xffffffff;
  *(undefined4 *)&this->Rotation[1].KeyHandles.field_0x34 = 0;
  *(undefined8 *)&this->Rotation[1].KeyHandles.field_0x38 = 0;
  *(undefined8 *)&this->Rotation[1].KeyHandles.field_0x40 = 0;
  *(undefined8 *)&this->Rotation[1].KeyHandles.field_0x58 = 0;
  *(undefined4 *)&this->Rotation[1].KeyHandles.field_0x60 = 0;
  *(undefined4 *)&this->Rotation[1].KeyHandles.field_0x64 = 0x80;
  *(undefined4 *)&this->Rotation[1].KeyHandles.field_0x68 = 0xffffffff;
  *(undefined4 *)&this->Rotation[1].KeyHandles.field_0x6c = 0;
  *(undefined8 *)&this->Rotation[1].KeyHandles.field_0x78 = 0;
  *(undefined4 *)&this->Rotation[1].KeyHandles.field_0x80 = 0;
  this->Rotation[1].TickResolution.Numerator = 60000;
  this->Rotation[1].TickResolution.Denominator = 1;
  this->Rotation[2]._padding_ = 0;
  this->Rotation[2]._padding_ = 0;
  this->Rotation[2]._padding_ = 0;
  this->Rotation[2]._padding_ = 2;
  this->Rotation[2]._padding_ = 0;
  this->Rotation[2]._padding_ = 0;
  this->Rotation[2]._padding_ = 0;
  this->Rotation[2]._padding_ = 2;
  this->Rotation[2]._padding_ = 0;
  this->Rotation[2]._padding_ = 0;
  this->Rotation[2]._padding_ = 0;
  this->Rotation[2]._padding_ = 2;
  this->Rotation[2]._padding_ = (longlong)&___7FMovieSceneDoubleChannel__6B_;
  this->Rotation[2].PreInfinityExtrap = '\x04';
  this->Rotation[2].PostInfinityExtrap = '\x04';
  this->Rotation[2].Times.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Rotation[2].Times.ArrayNum = 0;
  this->Rotation[2].Times.ArrayMax = 0;
  this->Rotation[2].Values.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Rotation[2].Values.ArrayNum = 0;
  this->Rotation[2].Values.ArrayMax = 0;
  this->Rotation[2].DefaultValue = 0.0;
  this->Rotation[2].bHasDefaultValue = false;
  *(undefined8 *)&this->Rotation[2].KeyHandles = 0;
  *(undefined8 *)&this->Rotation[2].KeyHandles.field_0x8 = 0;
  *(undefined8 *)&this->Rotation[2].KeyHandles.field_0x20 = 0;
  *(undefined4 *)&this->Rotation[2].KeyHandles.field_0x28 = 0;
  *(undefined4 *)&this->Rotation[2].KeyHandles.field_0x2c = 0x80;
  *(undefined4 *)&this->Rotation[2].KeyHandles.field_0x30 = 0xffffffff;
  *(undefined4 *)&this->Rotation[2].KeyHandles.field_0x34 = 0;
  *(undefined8 *)&this->Rotation[2].KeyHandles.field_0x38 = 0;
  *(undefined8 *)&this->Rotation[2].KeyHandles.field_0x40 = 0;
  *(undefined8 *)&this->Rotation[2].KeyHandles.field_0x58 = 0;
  *(undefined4 *)&this->Rotation[2].KeyHandles.field_0x60 = 0;
  *(undefined4 *)&this->Rotation[2].KeyHandles.field_0x64 = 0x80;
  *(undefined4 *)&this->Rotation[2].KeyHandles.field_0x68 = 0xffffffff;
  *(undefined4 *)&this->Rotation[2].KeyHandles.field_0x6c = 0;
  *(undefined8 *)&this->Rotation[2].KeyHandles.field_0x78 = 0;
  *(undefined4 *)&this->Rotation[2].KeyHandles.field_0x80 = 0;
  this->Rotation[2].TickResolution.Numerator = 60000;
  this->Rotation[2].TickResolution.Denominator = 1;
  (this->SubSequence).field0_0x0.DebugPtr = (UMovieSceneSequence *)0x0;
  return this;
}

// UMovieSceneSubSection @ 14629a550

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

UMovieSceneSubSection * __thiscall
UMovieSceneSubSection::UMovieSceneSubSection
          (UMovieSceneSubSection *this,FObjectInitializer *param_1)

{
  double dVar1;
  FMovieSceneBlendTypeField FVar2;
  bool bVar3;
  undefined7 extraout_var;
  
  UMovieSceneSection::UMovieSceneSection((UMovieSceneSection *)this,param_1);
  dVar1 = __real_3ff0000000000000;
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneSection__;
  (this->Parameters).StartFrameOffset.Value = 0;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneEntityProvider__;
  (this->Parameters).bCanLoop = false;
  (this->Parameters).EndFrameOffset = 0;
  (this->Parameters).FirstLoopStartFrameOffset = 0;
  FMovieSceneTimeWarpVariant::FMovieSceneTimeWarpVariant(&(this->Parameters).TimeScale,dVar1);
  (this->Parameters).HierarchicalBias = 100;
  (this->Parameters).Flags = None;
  (this->Parameters).StartOffset_DEPRECATED = 0.0;
  (this->Parameters).PrerollTime_DEPRECATED = 0.0;
  (this->Parameters).PostrollTime_DEPRECATED = 0.0;
  this->StartOffset_DEPRECATED = DeprecatedMagicNumber;
  this->TimeScale_DEPRECATED = DeprecatedMagicNumber;
  this->PrerollTime_DEPRECATED = DeprecatedMagicNumber;
  (this->OriginOverrideMask).Mask = 0;
  this->Translation[0]._padding_ = 0;
  this->Translation[0]._padding_ = 0;
  this->Translation[0]._padding_ = 0;
  this->Translation[0]._padding_ = 2;
  this->Translation[0]._padding_ = 0;
  this->Translation[0]._padding_ = 0;
  this->Translation[0]._padding_ = 0;
  this->Translation[0]._padding_ = 2;
  this->Translation[0]._padding_ = 0;
  this->Translation[0]._padding_ = 0;
  this->Translation[0]._padding_ = 0;
  this->Translation[0]._padding_ = 2;
  this->Translation[0]._padding_ = (longlong)&___7FMovieSceneDoubleChannel__6B_;
  this->Translation[0].PreInfinityExtrap = '\x04';
  this->Translation[0].PostInfinityExtrap = '\x04';
  this->Translation[0].Times.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Translation[0].Times.ArrayNum = 0;
  this->Translation[0].Times.ArrayMax = 0;
  this->Translation[0].Values.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Translation[0].Values.ArrayNum = 0;
  this->Translation[0].Values.ArrayMax = 0;
  this->Translation[0].DefaultValue = 0.0;
  this->Translation[0].bHasDefaultValue = false;
  *(undefined8 *)&this->Translation[0].KeyHandles = 0;
  *(undefined8 *)&this->Translation[0].KeyHandles.field_0x8 = 0;
  *(undefined8 *)&this->Translation[0].KeyHandles.field_0x20 = 0;
  *(undefined4 *)&this->Translation[0].KeyHandles.field_0x28 = 0;
  *(undefined4 *)&this->Translation[0].KeyHandles.field_0x2c = 0x80;
  *(undefined4 *)&this->Translation[0].KeyHandles.field_0x30 = 0xffffffff;
  *(undefined4 *)&this->Translation[0].KeyHandles.field_0x34 = 0;
  *(undefined8 *)&this->Translation[0].KeyHandles.field_0x38 = 0;
  *(undefined8 *)&this->Translation[0].KeyHandles.field_0x40 = 0;
  *(undefined8 *)&this->Translation[0].KeyHandles.field_0x58 = 0;
  *(undefined4 *)&this->Translation[0].KeyHandles.field_0x60 = 0;
  *(undefined4 *)&this->Translation[0].KeyHandles.field_0x64 = 0x80;
  *(undefined4 *)&this->Translation[0].KeyHandles.field_0x68 = 0xffffffff;
  *(undefined4 *)&this->Translation[0].KeyHandles.field_0x6c = 0;
  *(undefined8 *)&this->Translation[0].KeyHandles.field_0x78 = 0;
  *(undefined4 *)&this->Translation[0].KeyHandles.field_0x80 = 0;
  this->Translation[0].TickResolution.Numerator = 60000;
  this->Translation[0].TickResolution.Denominator = 1;
  this->Translation[1]._padding_ = 0;
  this->Translation[1]._padding_ = 0;
  this->Translation[1]._padding_ = 0;
  this->Translation[1]._padding_ = 2;
  this->Translation[1]._padding_ = 0;
  this->Translation[1]._padding_ = 0;
  this->Translation[1]._padding_ = 0;
  this->Translation[1]._padding_ = 2;
  this->Translation[1]._padding_ = 0;
  this->Translation[1]._padding_ = 0;
  this->Translation[1]._padding_ = 0;
  this->Translation[1]._padding_ = 2;
  this->Translation[1]._padding_ = (longlong)&___7FMovieSceneDoubleChannel__6B_;
  this->Translation[1].PreInfinityExtrap = '\x04';
  this->Translation[1].PostInfinityExtrap = '\x04';
  this->Translation[1].Times.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Translation[1].Times.ArrayNum = 0;
  this->Translation[1].Times.ArrayMax = 0;
  this->Translation[1].Values.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Translation[1].Values.ArrayNum = 0;
  this->Translation[1].Values.ArrayMax = 0;
  this->Translation[1].DefaultValue = 0.0;
  this->Translation[1].bHasDefaultValue = false;
  *(undefined8 *)&this->Translation[1].KeyHandles = 0;
  *(undefined8 *)&this->Translation[1].KeyHandles.field_0x8 = 0;
  *(undefined8 *)&this->Translation[1].KeyHandles.field_0x20 = 0;
  *(undefined4 *)&this->Translation[1].KeyHandles.field_0x28 = 0;
  *(undefined4 *)&this->Translation[1].KeyHandles.field_0x2c = 0x80;
  *(undefined4 *)&this->Translation[1].KeyHandles.field_0x30 = 0xffffffff;
  *(undefined4 *)&this->Translation[1].KeyHandles.field_0x34 = 0;
  *(undefined8 *)&this->Translation[1].KeyHandles.field_0x38 = 0;
  *(undefined8 *)&this->Translation[1].KeyHandles.field_0x40 = 0;
  *(undefined8 *)&this->Translation[1].KeyHandles.field_0x58 = 0;
  *(undefined4 *)&this->Translation[1].KeyHandles.field_0x60 = 0;
  *(undefined4 *)&this->Translation[1].KeyHandles.field_0x64 = 0x80;
  *(undefined4 *)&this->Translation[1].KeyHandles.field_0x68 = 0xffffffff;
  *(undefined4 *)&this->Translation[1].KeyHandles.field_0x6c = 0;
  *(undefined8 *)&this->Translation[1].KeyHandles.field_0x78 = 0;
  *(undefined4 *)&this->Translation[1].KeyHandles.field_0x80 = 0;
  this->Translation[1].TickResolution.Numerator = 60000;
  this->Translation[1].TickResolution.Denominator = 1;
  this->Translation[2]._padding_ = 0;
  this->Translation[2]._padding_ = 0;
  this->Translation[2]._padding_ = 0;
  this->Translation[2]._padding_ = 2;
  this->Translation[2]._padding_ = 0;
  this->Translation[2]._padding_ = 0;
  this->Translation[2]._padding_ = 0;
  this->Translation[2]._padding_ = 2;
  this->Translation[2]._padding_ = 0;
  this->Translation[2]._padding_ = 0;
  this->Translation[2]._padding_ = 0;
  this->Translation[2]._padding_ = 2;
  this->Translation[2]._padding_ = (longlong)&___7FMovieSceneDoubleChannel__6B_;
  this->Translation[2].PreInfinityExtrap = '\x04';
  this->Translation[2].PostInfinityExtrap = '\x04';
  this->Translation[2].Times.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Translation[2].Times.ArrayNum = 0;
  this->Translation[2].Times.ArrayMax = 0;
  this->Translation[2].Values.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Translation[2].Values.ArrayNum = 0;
  this->Translation[2].Values.ArrayMax = 0;
  this->Translation[2].DefaultValue = 0.0;
  this->Translation[2].bHasDefaultValue = false;
  *(undefined8 *)&this->Translation[2].KeyHandles = 0;
  *(undefined8 *)&this->Translation[2].KeyHandles.field_0x8 = 0;
  *(undefined8 *)&this->Translation[2].KeyHandles.field_0x20 = 0;
  *(undefined4 *)&this->Translation[2].KeyHandles.field_0x28 = 0;
  *(undefined4 *)&this->Translation[2].KeyHandles.field_0x2c = 0x80;
  *(undefined4 *)&this->Translation[2].KeyHandles.field_0x30 = 0xffffffff;
  *(undefined4 *)&this->Translation[2].KeyHandles.field_0x34 = 0;
  *(undefined8 *)&this->Translation[2].KeyHandles.field_0x38 = 0;
  *(undefined8 *)&this->Translation[2].KeyHandles.field_0x40 = 0;
  *(undefined8 *)&this->Translation[2].KeyHandles.field_0x58 = 0;
  *(undefined4 *)&this->Translation[2].KeyHandles.field_0x60 = 0;
  *(undefined4 *)&this->Translation[2].KeyHandles.field_0x64 = 0x80;
  *(undefined4 *)&this->Translation[2].KeyHandles.field_0x68 = 0xffffffff;
  *(undefined4 *)&this->Translation[2].KeyHandles.field_0x6c = 0;
  *(undefined8 *)&this->Translation[2].KeyHandles.field_0x78 = 0;
  *(undefined4 *)&this->Translation[2].KeyHandles.field_0x80 = 0;
  this->Translation[2].TickResolution.Numerator = 60000;
  this->Translation[2].TickResolution.Denominator = 1;
  this->Rotation[0]._padding_ = 0;
  this->Rotation[0]._padding_ = 0;
  this->Rotation[0]._padding_ = 0;
  this->Rotation[0]._padding_ = 2;
  this->Rotation[0]._padding_ = 0;
  this->Rotation[0]._padding_ = 0;
  this->Rotation[0]._padding_ = 0;
  this->Rotation[0]._padding_ = 2;
  this->Rotation[0]._padding_ = 0;
  this->Rotation[0]._padding_ = 0;
  this->Rotation[0]._padding_ = 0;
  this->Rotation[0]._padding_ = 2;
  this->Rotation[0]._padding_ = (longlong)&___7FMovieSceneDoubleChannel__6B_;
  this->Rotation[0].PreInfinityExtrap = '\x04';
  this->Rotation[0].PostInfinityExtrap = '\x04';
  this->Rotation[0].Times.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Rotation[0].Times.ArrayNum = 0;
  this->Rotation[0].Times.ArrayMax = 0;
  this->Rotation[0].Values.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Rotation[0].Values.ArrayNum = 0;
  this->Rotation[0].Values.ArrayMax = 0;
  this->Rotation[0].DefaultValue = 0.0;
  this->Rotation[0].bHasDefaultValue = false;
  *(undefined8 *)&this->Rotation[0].KeyHandles = 0;
  *(undefined8 *)&this->Rotation[0].KeyHandles.field_0x8 = 0;
  *(undefined8 *)&this->Rotation[0].KeyHandles.field_0x20 = 0;
  *(undefined4 *)&this->Rotation[0].KeyHandles.field_0x28 = 0;
  *(undefined4 *)&this->Rotation[0].KeyHandles.field_0x2c = 0x80;
  *(undefined4 *)&this->Rotation[0].KeyHandles.field_0x30 = 0xffffffff;
  *(undefined4 *)&this->Rotation[0].KeyHandles.field_0x34 = 0;
  *(undefined8 *)&this->Rotation[0].KeyHandles.field_0x38 = 0;
  *(undefined8 *)&this->Rotation[0].KeyHandles.field_0x40 = 0;
  *(undefined8 *)&this->Rotation[0].KeyHandles.field_0x58 = 0;
  *(undefined4 *)&this->Rotation[0].KeyHandles.field_0x60 = 0;
  *(undefined4 *)&this->Rotation[0].KeyHandles.field_0x64 = 0x80;
  *(undefined4 *)&this->Rotation[0].KeyHandles.field_0x68 = 0xffffffff;
  *(undefined4 *)&this->Rotation[0].KeyHandles.field_0x6c = 0;
  *(undefined8 *)&this->Rotation[0].KeyHandles.field_0x78 = 0;
  *(undefined4 *)&this->Rotation[0].KeyHandles.field_0x80 = 0;
  this->Rotation[0].TickResolution.Numerator = 60000;
  this->Rotation[0].TickResolution.Denominator = 1;
  this->Rotation[1]._padding_ = 0;
  this->Rotation[1]._padding_ = 0;
  this->Rotation[1]._padding_ = 0;
  this->Rotation[1]._padding_ = 2;
  this->Rotation[1]._padding_ = 0;
  this->Rotation[1]._padding_ = 0;
  this->Rotation[1]._padding_ = 0;
  this->Rotation[1]._padding_ = 2;
  this->Rotation[1]._padding_ = 0;
  this->Rotation[1]._padding_ = 0;
  this->Rotation[1]._padding_ = 0;
  this->Rotation[1]._padding_ = 2;
  this->Rotation[1]._padding_ = (longlong)&___7FMovieSceneDoubleChannel__6B_;
  this->Rotation[1].PreInfinityExtrap = '\x04';
  this->Rotation[1].PostInfinityExtrap = '\x04';
  this->Rotation[1].Times.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Rotation[1].Times.ArrayNum = 0;
  this->Rotation[1].Times.ArrayMax = 0;
  this->Rotation[1].Values.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Rotation[1].Values.ArrayNum = 0;
  this->Rotation[1].Values.ArrayMax = 0;
  this->Rotation[1].DefaultValue = 0.0;
  this->Rotation[1].bHasDefaultValue = false;
  *(undefined8 *)&this->Rotation[1].KeyHandles = 0;
  *(undefined8 *)&this->Rotation[1].KeyHandles.field_0x8 = 0;
  *(undefined8 *)&this->Rotation[1].KeyHandles.field_0x20 = 0;
  *(undefined4 *)&this->Rotation[1].KeyHandles.field_0x28 = 0;
  *(undefined4 *)&this->Rotation[1].KeyHandles.field_0x2c = 0x80;
  *(undefined4 *)&this->Rotation[1].KeyHandles.field_0x30 = 0xffffffff;
  *(undefined4 *)&this->Rotation[1].KeyHandles.field_0x34 = 0;
  *(undefined8 *)&this->Rotation[1].KeyHandles.field_0x38 = 0;
  *(undefined8 *)&this->Rotation[1].KeyHandles.field_0x40 = 0;
  *(undefined8 *)&this->Rotation[1].KeyHandles.field_0x58 = 0;
  *(undefined4 *)&this->Rotation[1].KeyHandles.field_0x60 = 0;
  *(undefined4 *)&this->Rotation[1].KeyHandles.field_0x64 = 0x80;
  *(undefined4 *)&this->Rotation[1].KeyHandles.field_0x68 = 0xffffffff;
  *(undefined4 *)&this->Rotation[1].KeyHandles.field_0x6c = 0;
  *(undefined8 *)&this->Rotation[1].KeyHandles.field_0x78 = 0;
  *(undefined4 *)&this->Rotation[1].KeyHandles.field_0x80 = 0;
  this->Rotation[1].TickResolution.Numerator = 60000;
  this->Rotation[1].TickResolution.Denominator = 1;
  this->Rotation[2]._padding_ = 0;
  this->Rotation[2]._padding_ = 0;
  this->Rotation[2]._padding_ = 0;
  this->Rotation[2]._padding_ = 2;
  this->Rotation[2]._padding_ = 0;
  this->Rotation[2]._padding_ = 0;
  this->Rotation[2]._padding_ = 0;
  this->Rotation[2]._padding_ = 2;
  this->Rotation[2]._padding_ = 0;
  this->Rotation[2]._padding_ = 0;
  this->Rotation[2]._padding_ = 0;
  this->Rotation[2]._padding_ = 2;
  this->Rotation[2]._padding_ = (longlong)&___7FMovieSceneDoubleChannel__6B_;
  this->Rotation[2].PreInfinityExtrap = '\x04';
  this->Rotation[2].PostInfinityExtrap = '\x04';
  this->Rotation[2].Times.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Rotation[2].Times.ArrayNum = 0;
  this->Rotation[2].Times.ArrayMax = 0;
  this->Rotation[2].Values.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Rotation[2].Values.ArrayNum = 0;
  this->Rotation[2].Values.ArrayMax = 0;
  this->Rotation[2].DefaultValue = 0.0;
  this->Rotation[2].bHasDefaultValue = false;
  *(undefined8 *)&this->Rotation[2].KeyHandles = 0;
  *(undefined8 *)&this->Rotation[2].KeyHandles.field_0x8 = 0;
  *(undefined8 *)&this->Rotation[2].KeyHandles.field_0x20 = 0;
  *(undefined4 *)&this->Rotation[2].KeyHandles.field_0x28 = 0;
  *(undefined4 *)&this->Rotation[2].KeyHandles.field_0x2c = 0x80;
  *(undefined4 *)&this->Rotation[2].KeyHandles.field_0x30 = 0xffffffff;
  *(undefined4 *)&this->Rotation[2].KeyHandles.field_0x34 = 0;
  *(undefined8 *)&this->Rotation[2].KeyHandles.field_0x38 = 0;
  *(undefined8 *)&this->Rotation[2].KeyHandles.field_0x40 = 0;
  *(undefined8 *)&this->Rotation[2].KeyHandles.field_0x58 = 0;
  *(undefined4 *)&this->Rotation[2].KeyHandles.field_0x60 = 0;
  *(undefined4 *)&this->Rotation[2].KeyHandles.field_0x64 = 0x80;
  *(undefined4 *)&this->Rotation[2].KeyHandles.field_0x68 = 0xffffffff;
  *(undefined4 *)&this->Rotation[2].KeyHandles.field_0x6c = 0;
  *(undefined8 *)&this->Rotation[2].KeyHandles.field_0x78 = 0;
  *(undefined4 *)&this->Rotation[2].KeyHandles.field_0x80 = 0;
  this->Rotation[2].TickResolution.Numerator = 60000;
  this->Rotation[2].TickResolution.Denominator = 1;
  (this->SubSequence).field0_0x0.DebugPtr = (UMovieSceneSequence *)0x0;
  this->NetworkMask = '\x03';
  FVar2 = UMovieSceneSection::GetSupportedBlendTypes((UMovieSceneSection *)this);
  bVar3 = FMovieSceneBlendTypeField::Contains
                    ((FMovieSceneBlendTypeField *)CONCAT71(extraout_var,FVar2.BlendTypeField),
                     Absolute);
  if (bVar3) {
    *(undefined2 *)((longlong)&this->_padding_ + 1) = 0x101;
  }
  (this->OriginOverrideMask).Mask = 0;
  return this;
}

// ~UMovieSceneSubSection @ 14629bbf0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall UMovieSceneSubSection::~UMovieSceneSubSection(UMovieSceneSubSection *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneSection__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneEntityProvider__;
  *(undefined4 *)&this->Rotation[2].KeyHandles.field_0x80 = 0;
  pvVar1 = *(void **)&this->Rotation[2].KeyHandles.field_0x78;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->Rotation[2].KeyHandles.field_0x38);
  TSparseArray<FKeyHandle,FDefaultSparseArrayAllocator>::
  ~TSparseArray<FKeyHandle,FDefaultSparseArrayAllocator>
            ((TSparseArray<FKeyHandle,FDefaultSparseArrayAllocator> *)&this->Rotation[2].KeyHandles)
  ;
  pFVar2 = this->Rotation[2].Values.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = this->Rotation[2].Times.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  FMovieSceneChannel::~FMovieSceneChannel((FMovieSceneChannel *)(this->Rotation + 2));
  *(undefined4 *)&this->Rotation[1].KeyHandles.field_0x80 = 0;
  pvVar1 = *(void **)&this->Rotation[1].KeyHandles.field_0x78;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->Rotation[1].KeyHandles.field_0x38);
  TSparseArray<FKeyHandle,FDefaultSparseArrayAllocator>::
  ~TSparseArray<FKeyHandle,FDefaultSparseArrayAllocator>
            ((TSparseArray<FKeyHandle,FDefaultSparseArrayAllocator> *)&this->Rotation[1].KeyHandles)
  ;
  pFVar2 = this->Rotation[1].Values.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = this->Rotation[1].Times.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  FMovieSceneChannel::~FMovieSceneChannel((FMovieSceneChannel *)(this->Rotation + 1));
  *(undefined4 *)&this->Rotation[0].KeyHandles.field_0x80 = 0;
  pvVar1 = *(void **)&this->Rotation[0].KeyHandles.field_0x78;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->Rotation[0].KeyHandles.field_0x38);
  TSparseArray<FKeyHandle,FDefaultSparseArrayAllocator>::
  ~TSparseArray<FKeyHandle,FDefaultSparseArrayAllocator>
            ((TSparseArray<FKeyHandle,FDefaultSparseArrayAllocator> *)&this->Rotation[0].KeyHandles)
  ;
  pFVar2 = this->Rotation[0].Values.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = this->Rotation[0].Times.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  FMovieSceneChannel::~FMovieSceneChannel((FMovieSceneChannel *)this->Rotation);
  *(undefined4 *)&this->Translation[2].KeyHandles.field_0x80 = 0;
  pvVar1 = *(void **)&this->Translation[2].KeyHandles.field_0x78;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->Translation[2].KeyHandles.field_0x38);
  TSparseArray<FKeyHandle,FDefaultSparseArrayAllocator>::
  ~TSparseArray<FKeyHandle,FDefaultSparseArrayAllocator>
            ((TSparseArray<FKeyHandle,FDefaultSparseArrayAllocator> *)
             &this->Translation[2].KeyHandles);
  pFVar2 = this->Translation[2].Values.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = this->Translation[2].Times.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  FMovieSceneChannel::~FMovieSceneChannel((FMovieSceneChannel *)(this->Translation + 2));
  *(undefined4 *)&this->Translation[1].KeyHandles.field_0x80 = 0;
  pvVar1 = *(void **)&this->Translation[1].KeyHandles.field_0x78;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->Translation[1].KeyHandles.field_0x38);
  TSparseArray<FKeyHandle,FDefaultSparseArrayAllocator>::
  ~TSparseArray<FKeyHandle,FDefaultSparseArrayAllocator>
            ((TSparseArray<FKeyHandle,FDefaultSparseArrayAllocator> *)
             &this->Translation[1].KeyHandles);
  pFVar2 = this->Translation[1].Values.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = this->Translation[1].Times.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  FMovieSceneChannel::~FMovieSceneChannel((FMovieSceneChannel *)(this->Translation + 1));
  *(undefined4 *)&this->Translation[0].KeyHandles.field_0x80 = 0;
  pvVar1 = *(void **)&this->Translation[0].KeyHandles.field_0x78;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->Translation[0].KeyHandles.field_0x38);
  TSparseArray<FKeyHandle,FDefaultSparseArrayAllocator>::
  ~TSparseArray<FKeyHandle,FDefaultSparseArrayAllocator>
            ((TSparseArray<FKeyHandle,FDefaultSparseArrayAllocator> *)
             &this->Translation[0].KeyHandles);
  pFVar2 = this->Translation[0].Values.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = this->Translation[0].Times.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  FMovieSceneChannel::~FMovieSceneChannel((FMovieSceneChannel *)this->Translation);
  this->_padding_ = (longlong)&___7IMovieSceneEntityProvider__6B_;
  UMovieSceneSection::~UMovieSceneSection((UMovieSceneSection *)this);
  return;
}

// operator() @ 14629e1a0

bool __thiscall
`UMovieSceneSubSection::GetSnapTimes'::__l2::<lambda_1>::operator()(void *this,FFrameTime param_1)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  float fStackX_14;
  int local_18 [4];
  
  fStackX_14 = param_1.SubFrame;
  pFVar2 = *(ForAnyElementType **)this;
  if (__real_3f000000 <= fStackX_14) {
    param_1.FrameNumber.Value = param_1.FrameNumber.Value.Value + 1;
    param_1.SubFrame = 0.0;
  }
  local_18[0] = (int)param_1.FrameNumber.Value;
  if ((pFVar2->Data <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 <
      pFVar2->Data + (longlong)*(int *)((longlong)&pFVar2[1].Data + 4) * 4)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  iVar6 = *(int *)&pFVar2[1].Data;
  piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,pFVar2,piVar1);
  }
  *(int *)&pFVar2[1].Data = iVar6 + 1;
  *(int *)(pFVar2->Data + (longlong)iVar6 * 4) = local_18[0];
  return true;
}

// AppendInnerTimeWarpTransform @ 1462a33c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
UMovieSceneSubSection::AppendInnerTimeWarpTransform
          (UMovieSceneSubSection *this,FMovieSceneSequenceTransform *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  int iVar3;
  UMovieSceneSequence *pUVar4;
  UMovieSceneTrack *this_00;
  FMovieSceneNestedSequenceTransform *pFVar5;
  code *pcVar6;
  ForAnyElementType FVar7;
  bool bVar8;
  int iVar9;
  longlong lVar10;
  UClass *pUVar11;
  FMovieSceneTimeTransform *pFVar12;
  undefined8 *puVar13;
  undefined1 auStack_108 [32];
  FMovieSceneNestedSequenceTransform *local_e8;
  FMovieSceneNestedSequenceTransform *local_e0;
  longlong local_d8;
  longlong local_d0;
  undefined8 local_c8;
  undefined1 local_b8 [8];
  FFrameTime local_b0;
  float local_a8;
  FMovieSceneTimeTransform local_a0;
  undefined8 local_90;
  FMovieSceneSequenceTransform local_88;
  FMovieSceneTimeTransform local_68;
  FMovieSceneNestedSequenceTransform local_58;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_108;
  pUVar4 = (this->SubSequence).field0_0x0.DebugPtr;
  if ((pUVar4 == (UMovieSceneSequence *)0x0) ||
     (lVar10 = (**(code **)(pUVar4->_padding_ + 0x2f8))(), lVar10 == 0)) {
    return;
  }
  puVar13 = *(undefined8 **)(lVar10 + 0xf8);
  iVar9 = *(int *)(lVar10 + 0x100);
  puVar2 = puVar13 + iVar9;
  do {
    if (*(int *)(lVar10 + 0x100) != iVar9) {
      local_b8[0] = 0;
      `TCheckedPointerIterator<UMovieSceneTrack_*_const,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_b8);
    }
    if (puVar13 == puVar2) {
      return;
    }
    this_00 = (UMovieSceneTrack *)*puVar13;
    if (this_00 != (UMovieSceneTrack *)0x0) {
      pUVar11 = UMovieSceneTimeWarpTrack::StaticClass();
      iVar3 = (int)pUVar11->_padding_;
      if (((iVar3 <= *(int *)(this_00->_padding_ + 0x38)) &&
          ((longlong *)
           *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar3 * 8) ==
           &pUVar11->_padding_)) && (bVar8 = UMovieSceneTrack::IsEvalDisabled(this_00,true), !bVar8)
         ) {
        (**(code **)(this_00->_padding_ + 0x380))(this_00,&local_58);
        local_90 = 0;
        local_a0.TimeScale = 0.0;
        local_a0.Offset.FrameNumber.Value = 0;
        local_b0 = local_58.Offset;
        if (((local_58.Offset.FrameNumber.Value.Value != 0) ||
            (local_b0.SubFrame = local_58.Offset.SubFrame, local_b0.SubFrame != 0.0)) ||
           ((((ulonglong)local_58.TimeScale.Variant.Data & 0xfff8000000000000) == 0xfff8000000000000
            || ((double)local_58.TimeScale.Variant.Data != __real_3ff0000000000000)))) {
          if ((((ulonglong)local_58.TimeScale.Variant.Data & 0xfff8000000000000) ==
               0xfff8000000000000) || ((param_1->NestedTransforms).ArrayNum != 0)) {
            pFVar5 = (FMovieSceneNestedSequenceTransform *)
                     (param_1->NestedTransforms).AllocatorInstance.Data;
            if ((pFVar5 <= &local_58) &&
               (lVar10 = (longlong)(param_1->NestedTransforms).ArrayMax, &local_58 < pFVar5 + lVar10
               )) {
              local_d0 = (longlong)(param_1->NestedTransforms).ArrayNum;
              local_c8 = 0x20;
              local_e8 = &local_58;
              local_e0 = pFVar5;
              local_d8 = lVar10;
              bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                );
              if (bVar8) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
            }
            iVar9 = (param_1->NestedTransforms).ArrayNum;
            piVar1 = &(param_1->NestedTransforms).ArrayMax;
            if (iVar9 == *piVar1) {
              iVar9 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x820,&(param_1->NestedTransforms).AllocatorInstance,piVar1);
            }
            (param_1->NestedTransforms).ArrayNum = iVar9 + 1;
            FMovieSceneNestedSequenceTransform::FMovieSceneNestedSequenceTransform
                      ((FMovieSceneNestedSequenceTransform *)
                       ((param_1->NestedTransforms).AllocatorInstance.Data + (longlong)iVar9 * 0x20)
                       ,&local_58);
          }
          else {
            if ((((ulonglong)local_58.TimeScale.Variant.Data & 0xfff8000000000000) ==
                 0xfff8000000000000) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Variant.IsLiteral()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Variants\\MovieSceneTimeWarpVariant.cpp"
                                   ,0x40,L""), bVar8)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            if ((double)__real_47efffffe0000000 <= (double)local_58.TimeScale.Variant.Data) {
              local_58.TimeScale.Variant.Data = __real_47efffffe0000000;
            }
            local_a0.Offset.FrameNumber = local_58.Offset.FrameNumber.Value;
            local_a0.Offset.SubFrame = local_58.Offset.SubFrame;
            if ((double)local_58.TimeScale.Variant.Data <= (double)__real_c7efffffe0000000) {
              local_58.TimeScale.Variant.Data = __real_c7efffffe0000000;
            }
            local_a0.TimeScale = (float)(double)local_58.TimeScale.Variant.Data;
            if (((float)((uint)local_a0.TimeScale & __xmm_7fffffff7fffffff7fffffff7fffffff) <=
                 __real_322bcc77) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("!FMath::IsNearlyZero(TimeScale)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\MovieSceneTimeTransform.h"
                                   ,0x2c,
                                   L"It is invalid to create a linear transformation with a zero timescale. This case should be handled externally by FMovieSceneTimeWarpVariant and FLAG_Zero."
                                  ), bVar8)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            local_b0.FrameNumber.Value = (int)(param_1->LinearTransform).TimeScale;
            local_b0.SubFrame = *(float *)&(param_1->LinearTransform).Offset.FrameNumber;
            local_a8 = (param_1->LinearTransform).Offset.SubFrame;
            pFVar12 = ::operator*(&local_68,(FMovieSceneTimeTransform *)&local_b0,&local_a0);
            local_88.NestedTransforms.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_88.NestedTransforms.ArrayNum = 0;
            local_88.NestedTransforms.ArrayMax = 0;
            local_88.LinearTransform.TimeScale = pFVar12->TimeScale;
            local_88.LinearTransform.Offset.FrameNumber.Value = (pFVar12->Offset).FrameNumber.Value;
            local_88.LinearTransform.Offset.SubFrame = (pFVar12->Offset).SubFrame;
            FMovieSceneSequenceTransform::operator=(param_1,&local_88);
            FVar7.Data = local_88.NestedTransforms.AllocatorInstance.Data;
            DestructItems<FMovieSceneNestedSequenceTransform,int>
                      ((FMovieSceneNestedSequenceTransform *)
                       local_88.NestedTransforms.AllocatorInstance.Data,
                       local_88.NestedTransforms.ArrayNum);
            if ((FMovieSceneNestedSequenceTransform *)FVar7.Data !=
                (FMovieSceneNestedSequenceTransform *)0x0) {
              FMemory::Free(FVar7.Data);
            }
          }
        }
        FMovieSceneNestedSequenceTransform::~FMovieSceneNestedSequenceTransform(&local_58);
        return;
      }
    }
    puVar13 = puVar13 + 1;
  } while( true );
}

// BuildDefaultSubSectionComponents @ 1462a49a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieSceneSubSection::BuildDefaultSubSectionComponents
          (UMovieSceneSubSection *this,UMovieSceneEntitySystemLinker *param_1,
          FEntityImportParams *param_2,FImportedEntity *param_3)

{
  undefined1 uVar1;
  FInstanceHandle FVar2;
  uint uVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  FMovieSceneSequenceID FVar7;
  FBuiltInComponentTypes *pFVar8;
  longlong lVar9;
  FMovieSceneSequenceHierarchy *pFVar10;
  undefined4 extraout_var;
  FInstanceRegistry *pFVar11;
  undefined4 extraout_var_00;
  TEntityBuilder<UE::MovieScene::TAdd<FMovieSceneSequenceID>,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<FMovieSceneSequenceID>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>_>
  *pTVar12;
  int iVar13;
  undefined1 uVar14;
  undefined4 uVar15;
  undefined1 *puVar16;
  undefined1 auStackY_418 [32];
  undefined1 local_3b8;
  uint local_3a8;
  ushort uStack_3a2;
  undefined1 local_39c [8];
  undefined1 local_394 [4];
  FEntityImportParams *local_390;
  FMovieSceneDoubleChannel *local_388;
  FImportedEntity *local_380;
  TComponentTypeID<FMovieSceneSequenceID> local_378;
  undefined1 uStack_376;
  undefined1 uStack_375;
  TComponentTypeID<UE::MovieScene::FSourceDoubleChannel> local_368;
  undefined1 local_366;
  FSourceDoubleChannel local_360;
  bool local_358;
  undefined1 local_350 [16];
  undefined1 local_340;
  ushort local_33c;
  undefined4 local_338;
  undefined4 local_334;
  undefined1 local_330;
  undefined4 local_328;
  FMovieSceneDoubleChannel *local_320;
  undefined1 local_318;
  undefined4 local_310;
  FMovieSceneDoubleChannel *local_308;
  undefined1 local_300;
  undefined4 local_2f8;
  FMovieSceneDoubleChannel *local_2f0;
  undefined1 local_2e8;
  undefined4 local_2e0;
  FMovieSceneDoubleChannel *local_2d8;
  undefined1 local_2d0;
  bool local_2c8;
  TComponentTypeID<UE::MovieScene::FSourceDoubleChannel> local_2c0;
  undefined1 uStack_2be;
  undefined1 uStack_2bd;
  TComponentTypeID<UE::MovieScene::FSourceDoubleChannel> local_2a8;
  undefined1 uStack_2a6;
  undefined1 uStack_2a5;
  TComponentTypeID<UE::MovieScene::FSourceDoubleChannel> local_290;
  undefined1 uStack_28e;
  undefined1 uStack_28d;
  TComponentTypeID<UE::MovieScene::FSourceDoubleChannel> local_278;
  undefined1 uStack_276;
  undefined1 uStack_275;
  undefined **local_260;
  TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8>,UE::MovieScene::TAdd<FMovieSceneSequenceID>,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<FMovieSceneSequenceID>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>_>
  local_258;
  undefined1 local_1a8;
  TEntityBuilder<UE::MovieScene::TAdd<FMovieSceneSequenceID>,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<FMovieSceneSequenceID>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>_>
  local_1a0;
  FSubSequencePath local_f8;
  FSubSequencePath local_a8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_418;
  local_390 = param_2;
  local_380 = param_3;
  pFVar8 = UE::MovieScene::FBuiltInComponentTypes::Get();
  if ((char)this->_padding_ == '\0') {
    iVar13 = (int)this->_padding_;
  }
  else {
    iVar13 = *(int *)((longlong)&this->_padding_ + 4);
  }
  if (iVar13 < 1) {
    local_3b8 = 0;
    lVar9 = 0xac;
    if ((char)this->_padding_ == '\0') {
      lVar9 = 0x7c;
    }
    if (0 < *(int *)((longlong)&this->_padding_ + lVar9)) goto LAB_1462a4a22;
  }
  else {
LAB_1462a4a22:
    local_3b8 = 1;
  }
  uVar15 = 0xffffffff;
  UE::MovieScene::IInterrogationExtension::GetExtensionID();
  if ((-1 < (int)local_3a8) && ((int)local_3a8 < *(int *)&(param_1->ExtensionsByID).field_0x28)) {
    if ((*(int *)&(param_1->ExtensionsByID).field_0x28 <= (int)local_3a8) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5c6,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    puVar16 = *(undefined1 **)&(param_1->ExtensionsByID).field_0x20;
    if (puVar16 == (undefined1 *)0x0) {
      puVar16 = &(param_1->ExtensionsByID).field_0x10;
    }
    if (((*(uint *)(puVar16 +
                   (longlong)((int)(local_3a8 + ((int)local_3a8 >> 0x1f & 0x1fU)) >> 5) * 4) >>
          (local_3a8 & 0x1f) & 1) != 0) &&
       (plVar4 = *(longlong **)
                  (*(longlong *)&param_1->ExtensionsByID + (longlong)(int)local_3a8 * 8),
       plVar4 != (longlong *)0x0)) {
      pFVar10 = (FMovieSceneSequenceHierarchy *)(**(code **)(*plVar4 + 8))();
      UE::MovieScene::FSubSequencePath::FSubSequencePath
                (&local_f8,(FMovieSceneSequenceID)(param_2->Sequence).SequenceID.Value,pFVar10);
      GetSequenceID(this);
      FVar7 = UE::MovieScene::FSubSequencePath::ResolveChildSequenceID(&local_f8,(uint)local_39c);
      uVar15 = *(undefined4 *)CONCAT44(extraout_var,FVar7.Value);
      if (local_f8.PathToRoot.AllocatorInstance.SecondaryData !=
          (ForElementType<UE::MovieScene::FSubSequencePath::FSequenceIDPair>)0x0) {
        FMemory::Free((void *)local_f8.PathToRoot.AllocatorInstance.SecondaryData);
      }
      goto LAB_1462a4c2f;
    }
  }
  if (((param_1->InstanceRegistry).Ptr == (FInstanceRegistry *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InstanceRegistry.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemLinker.h"
                         ,0x96,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  FVar2 = (param_2->Sequence).InstanceHandle;
  pFVar11 = (param_1->InstanceRegistry).Ptr;
  if ((int)((uint)FVar2 & 0xffff) < *(int *)&(pFVar11->Instances).field_0x28) {
    if ((*(int *)&(pFVar11->Instances).field_0x28 <= (int)((uint)FVar2 & 0xffff)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5c6,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    puVar16 = *(undefined1 **)&(pFVar11->Instances).field_0x20;
    if (puVar16 == (undefined1 *)0x0) {
      puVar16 = &(pFVar11->Instances).field_0x10;
    }
    if (((*(uint *)(puVar16 + (ulonglong)(ushort)(FVar2.InstanceID >> 5) * 4) >>
          ((uint)FVar2 & 0x1f) & 1) != 0) &&
       (uStack_3a2 = FVar2.InstanceSerial,
       *(ushort *)
        ((ulonglong)((uint)FVar2 & 0xffff) * 0x140 + 0x134 + *(longlong *)&pFVar11->Instances) ==
       uStack_3a2)) {
      pFVar11 = UMovieSceneEntitySystemLinker::GetInstanceRegistry(param_1);
      UE::MovieScene::FSequenceInstance::GetSubSequencePath
                ((FSequenceInstance *)
                 ((ulonglong)(local_390->Sequence).InstanceHandle.InstanceID * 0x140 +
                 *(longlong *)&pFVar11->Instances),&local_a8);
      GetSequenceID(this);
      FVar7 = UE::MovieScene::FSubSequencePath::ResolveChildSequenceID(&local_a8,(uint)local_394);
      uVar15 = *(undefined4 *)CONCAT44(extraout_var_00,FVar7.Value);
      if (local_a8.PathToRoot.AllocatorInstance.SecondaryData !=
          (ForElementType<UE::MovieScene::FSubSequencePath::FSequenceIDPair>)0x0) {
        FMemory::Free((void *)local_a8.PathToRoot.AllocatorInstance.SecondaryData);
      }
    }
  }
LAB_1462a4c2f:
  uVar3 = (this->OriginOverrideMask).Mask;
  if (((uVar3 & 1) == 0) ||
     ((this->Translation[0].Times.ArrayNum == 0 && (this->Translation[0].bHasDefaultValue != true)))
     ) {
    uStack_2be = 0;
  }
  else {
    uStack_2be = 1;
  }
  if (((uVar3 & 2) == 0) ||
     ((this->Translation[1].Times.ArrayNum == 0 && (this->Translation[1].bHasDefaultValue != true)))
     ) {
    uStack_2a6 = 0;
  }
  else {
    uStack_2a6 = 1;
  }
  if (((uVar3 & 4) == 0) ||
     ((this->Translation[2].Times.ArrayNum == 0 && (this->Translation[2].bHasDefaultValue != true)))
     ) {
    uStack_28e = 0;
  }
  else {
    uStack_28e = 1;
  }
  if (((uVar3 & 8) == 0) ||
     ((this->Rotation[0].Times.ArrayNum == 0 && (this->Rotation[0].bHasDefaultValue != true)))) {
    uStack_276 = 0;
  }
  else {
    uStack_276 = 1;
  }
  if (((uVar3 & 0x10) == 0) ||
     ((this->Rotation[1].Times.ArrayNum == 0 && (this->Rotation[1].bHasDefaultValue != true)))) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
  }
  if (((uVar3 & 0x20) == 0) ||
     ((this->Rotation[2].Times.ArrayNum == 0 && (this->Rotation[2].bHasDefaultValue != true)))) {
    uVar14 = 0;
  }
  else {
    uVar14 = 1;
  }
  local_350._8_2_ = pFVar8->SequenceID;
  local_33c = (pFVar8->Tags).SubInstance.Value;
  uStack_376 = local_3b8;
  local_378 = pFVar8->HierarchicalEasingProvider;
  local_338 = _local_378;
  local_2c0 = pFVar8->DoubleChannel[0];
  local_320 = this->Translation;
  local_328 = _local_2c0;
  local_2a8 = pFVar8->DoubleChannel[1];
  local_308 = this->Translation + 1;
  local_310 = _local_2a8;
  local_290 = pFVar8->DoubleChannel[2];
  local_2f0 = this->Translation + 2;
  local_2f8 = _local_290;
  local_278 = pFVar8->DoubleChannel[3];
  local_2e0 = _local_278;
  local_2d8 = this->Rotation;
  local_350._0_8_ =
       &
       ___7__TEntityBuilder_U__TAdd_UFMovieSceneSequenceID___MovieScene_UE__UFAdd_23_U__TAddConditional_UFMovieSceneSequenceID___23_U__TAddConditional_UFSourceDoubleChannel_MovieScene_UE___23_U623_U623_U623__MovieScene_UE__6B_
  ;
  local_388 = this->Rotation + 1;
  local_340 = 1;
  local_330 = 1;
  local_318 = 1;
  local_300 = 1;
  local_2e8 = 1;
  local_2d0 = 1;
  local_2c8 = false;
  local_350._12_4_ = uVar15;
  local_334 = uVar15;
  pTVar12 = UE::MovieScene::
            TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6>,UE::MovieScene::TAdd<FMovieSceneSequenceID>,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<FMovieSceneSequenceID>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>_>
            ::AddConditional<UE::MovieScene::FSourceDoubleChannel,FMovieSceneDoubleChannel_const_*>
                      ((TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6>,UE::MovieScene::TAdd<FMovieSceneSequenceID>,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<FMovieSceneSequenceID>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>_>
                        *)local_350,&local_1a0,pFVar8->DoubleChannel[4],&local_388,bVar6);
  local_368 = pFVar8->DoubleChannel[5];
  local_360.Source = this->Rotation + 2;
  uVar1 = pTVar12->field_0xa0;
  local_260 = &
              ___7__TEntityBuilderImpl_U__TIntegerSequence_H_0A__00_01_02_03_04_05_06_07__U__TAdd_UFMovieSceneSequenceID___MovieScene_UE__UFAdd_34_U__TAddConditional_UFMovieSceneSequenceID___34_U__TAddConditional_UFSourceDoubleChannel_MovieScene_UE___34_U734_U734_U734_U734_U734__MovieScene_UE__6B_
  ;
  local_358 = true;
  local_366 = uVar14;
  UE::Core::Private::Tuple::
  TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8>,UE::MovieScene::TAdd<FMovieSceneSequenceID>,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<FMovieSceneSequenceID>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>_>
  ::
  TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8>,UE::MovieScene::TAdd<FMovieSceneSequenceID>,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<FMovieSceneSequenceID>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>_><UE::MovieScene::TAdd<FMovieSceneSequenceID>,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<FMovieSceneSequenceID>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>_>
            (&local_258,ForwardingConstructor,(TAdd<FMovieSceneSequenceID> *)&pTVar12->field_0x8,
             (FAdd *)&pTVar12->field_0x14,
             (TAddConditional<FMovieSceneSequenceID> *)&pTVar12->field_0x18,
             (TAddConditional<UE::MovieScene::FSourceDoubleChannel> *)&pTVar12->field_0x28,
             (TAddConditional<UE::MovieScene::FSourceDoubleChannel> *)&pTVar12->field_0x40,
             (TAddConditional<UE::MovieScene::FSourceDoubleChannel> *)&pTVar12->field_0x58,
             (TAddConditional<UE::MovieScene::FSourceDoubleChannel> *)&pTVar12->field_0x70,
             (TAddConditional<UE::MovieScene::FSourceDoubleChannel> *)&pTVar12->field_0x88,
             (TAddConditional<UE::MovieScene::FSourceDoubleChannel> *)&local_368);
  local_260 = &
              ___7__TEntityBuilder_U__TAdd_UFMovieSceneSequenceID___MovieScene_UE__UFAdd_23_U__TAddConditional_UFMovieSceneSequenceID___23_U__TAddConditional_UFSourceDoubleChannel_MovieScene_UE___23_U623_U623_U623_U623_U623__MovieScene_UE__6B_
  ;
  local_1a8 = uVar1;
  UE::MovieScene::FImportedEntity::
  AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAdd<FMovieSceneSequenceID>,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<FMovieSceneSequenceID>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>_>_>
            (local_380,
             (TEntityBuilder<UE::MovieScene::TAdd<FMovieSceneSequenceID>,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<FMovieSceneSequenceID>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>_>
              *)&local_260);
  return;
}

// CacheChannelProxy @ 1462a5e20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

EMovieSceneChannelProxyType __thiscall
UMovieSceneSubSection::CacheChannelProxy(UMovieSceneSubSection *this)

{
  int *piVar1;
  int iVar2;
  ulonglong uVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  EMovieSceneChannelProxyType EVar7;
  UMovieSceneTimeWarpGetter *pUVar8;
  TReferenceControllerBase<1> *pTVar9;
  FMovieSceneTimeWarpVariant *this_00;
  ForElementType<FMovieSceneChannelEntry> FVar10;
  TReferenceControllerBase<1> *pTVar11;
  TReferenceControllerBase<1> *pTVar12;
  undefined1 auStack_88 [32];
  TReferenceControllerBase<1> *local_68;
  FSharedReferencer<1> local_60;
  FMovieSceneChannelProxyData local_58;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_88;
  pTVar11 = (TReferenceControllerBase<1> *)0x0;
  this_00 = &(this->Parameters).TimeScale;
  local_58.Entries.AllocatorInstance.SecondaryData = (ForElementType<FMovieSceneChannelEntry>)0x0;
  local_58.Entries.ArrayNum = 0;
  local_58.Entries.ArrayMax = 1;
  uVar3 = *(ulonglong *)(this_00->Variant).Data;
  if (((uVar3 & 0xfff8000000000000) == 0xfff8000000000000) && ((uVar3 >> 0x30 & 7) == 0)) {
    pUVar8 = FMovieSceneTimeWarpVariant::AsCustom(this_00);
    if (pUVar8 != (UMovieSceneTimeWarpGetter *)0x0) {
      (**(code **)(pUVar8->_padding_ + 0x2f0))(pUVar8,&local_58,1);
    }
  }
  FMovieSceneChannelProxyData::AddInternal<FMovieSceneDoubleChannel>(&local_58,this->Translation);
  FMovieSceneChannelProxyData::AddInternal<FMovieSceneDoubleChannel>
            (&local_58,this->Translation + 1);
  FMovieSceneChannelProxyData::AddInternal<FMovieSceneDoubleChannel>
            (&local_58,this->Translation + 2);
  FMovieSceneChannelProxyData::AddInternal<FMovieSceneDoubleChannel>(&local_58,this->Rotation);
  FMovieSceneChannelProxyData::AddInternal<FMovieSceneDoubleChannel>(&local_58,this->Rotation + 1);
  FMovieSceneChannelProxyData::AddInternal<FMovieSceneDoubleChannel>(&local_58,this->Rotation + 2);
  pTVar9 = ::operator_new(0x68);
  if (pTVar9 == (TReferenceControllerBase<1> *)0x0) {
    pTVar12 = (TReferenceControllerBase<1> *)&DAT_00000010;
  }
  else {
    pTVar9->SharedReferenceCount = (atomic<int>)0x1;
    pTVar9->WeakReferenceCount = (atomic<int>)0x1;
    pTVar9->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFMovieSceneChannelProxy___00_SharedPointerInternals__6B_
    ;
    pTVar9[1]._padding_ = 0;
    pTVar9[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar9[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar9[2]._padding_ = 0;
    pTVar9[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar9[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar9[3]._padding_ = 0;
    pTVar9[3].SharedReferenceCount = (atomic<int>)0x2;
    pTVar9[3].WeakReferenceCount = (atomic<int>)0x0;
    pTVar9[5].SharedReferenceCount = (atomic<int>)0x0;
    pTVar9[5].WeakReferenceCount = (atomic<int>)0x0;
    if (local_58.Entries.AllocatorInstance.SecondaryData ==
        (ForElementType<FMovieSceneChannelEntry>)0x0) {
      memmove(pTVar9 + 4,&local_58,0x18);
    }
    if (*(void **)&pTVar9[5].SharedReferenceCount != (void *)0x0) {
      FMemory::Free(*(void **)&pTVar9[5].SharedReferenceCount);
    }
    pTVar12 = pTVar9 + 1;
    *(ForElementType<FMovieSceneChannelEntry> *)&pTVar9[5].SharedReferenceCount =
         local_58.Entries.AllocatorInstance.SecondaryData;
    local_58.Entries.AllocatorInstance.SecondaryData = (ForElementType<FMovieSceneChannelEntry>)0x0;
    *(int *)&pTVar9[6]._padding_ = local_58.Entries.ArrayNum;
    *(int *)((longlong)&pTVar9[6]._padding_ + 4) = local_58.Entries.ArrayMax;
    local_58.Entries.ArrayNum = 0;
    local_58.Entries.ArrayMax = 1;
    pTVar11 = pTVar9;
    if (pTVar12 == (TReferenceControllerBase<1> *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        EVar7 = (*pcVar5)();
        return EVar7;
      }
      goto LAB_1462a605b;
    }
  }
  if (((pTVar12->_padding_ == 0) || (*(longlong *)&pTVar12->SharedReferenceCount == 0)) ||
     (*(int *)(*(longlong *)&pTVar12->SharedReferenceCount + 8) < 1)) {
    if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar12->_padding_ = (longlong)pTVar12;
    if (pTVar11 != *(TReferenceControllerBase<1> **)&pTVar12->SharedReferenceCount) {
      if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar11->WeakReferenceCount = (atomic<int>)((int)pTVar11->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar4 = *(longlong **)&pTVar12->SharedReferenceCount;
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4,1);
        }
      }
      *(TReferenceControllerBase<1> **)&pTVar12->SharedReferenceCount = pTVar11;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  }
LAB_1462a605b:
  if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_68 = pTVar12;
  local_60.ReferenceController = pTVar11;
  if ((TReferenceControllerBase<1> **)&this->_padding_ != &local_68) {
    this->_padding_ = (longlong)pTVar12;
    local_68 = (TReferenceControllerBase<1> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&this->_padding_,&local_60);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_60.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  FVar10 = (ForElementType<FMovieSceneChannelEntry>)&local_58;
  if (local_58.Entries.AllocatorInstance.SecondaryData !=
      (ForElementType<FMovieSceneChannelEntry>)0x0) {
    FVar10 = local_58.Entries.AllocatorInstance.SecondaryData;
  }
  DestructItems<FMovieSceneChannelEntry,int>
            ((FMovieSceneChannelEntry *)FVar10,local_58.Entries.ArrayNum);
  if (local_58.Entries.AllocatorInstance.SecondaryData !=
      (ForElementType<FMovieSceneChannelEntry>)0x0) {
    FMemory::Free((void *)local_58.Entries.AllocatorInstance.SecondaryData);
  }
  return Dynamic;
}

// DeleteChannels @ 1462aba70

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
UMovieSceneSubSection::DeleteChannels
          (UMovieSceneSubSection *this,TArrayView<FName_const_,int> *param_1)

{
  FName *pFVar1;
  ulonglong uVar2;
  bool bVar3;
  byte bVar4;
  UMovieSceneTimeWarpGetter *pUVar5;
  FName *pFVar6;
  byte bVar7;
  undefined8 local_28;
  FSharedReferencer<1> FStack_20;
  
  uVar2 = *(ulonglong *)(this->Parameters).TimeScale.Variant.Data;
  bVar7 = 0;
  if (((((uVar2 & 0xfff8000000000000) == 0xfff8000000000000) && ((uVar2 >> 0x30 & 7) == 0)) &&
      (bVar3 = UMovieSceneSection::TryModify((UMovieSceneSection *)this,true), bVar3)) &&
     (pUVar5 = FMovieSceneTimeWarpVariant::AsCustom(&(this->Parameters).TimeScale),
     pUVar5 != (UMovieSceneTimeWarpGetter *)0x0)) {
    pFVar6 = param_1->DataPtr;
    pFVar1 = pFVar6 + param_1->ArrayNum;
    if (pFVar6 != pFVar1) {
      do {
        bVar4 = (**(code **)(pUVar5->_padding_ + 0x2f8))
                          (pUVar5,&(this->Parameters).TimeScale,*pFVar6);
        bVar7 = bVar7 | bVar4;
        pFVar6 = pFVar6 + 1;
      } while (pFVar6 != pFVar1);
      if (bVar7 != 0) {
        local_28 = 0;
        FStack_20.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        if (&this->_padding_ != &local_28) {
          this->_padding_ = 0;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    ((FSharedReferencer<1> *)&this->_padding_,&FStack_20);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FStack_20.ReferenceController);
      }
    }
  }
  return;
}

// GenerateSubSequenceData @ 1462adae0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

FMovieSceneSubSequenceData * __thiscall
UMovieSceneSubSection::GenerateSubSequenceData
          (UMovieSceneSubSection *this,FMovieSceneSubSequenceData *__return_storage_ptr__,
          FSubSequenceInstanceDataParams *param_1)

{
  FMovieSceneSubSequenceData::FMovieSceneSubSequenceData(__return_storage_ptr__,this);
  return __return_storage_ptr__;
}

// GetAutoSizeRange @ 1462ae920

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

TOptional<TRange<FFrameNumber>_> * __thiscall
UMovieSceneSubSection::GetAutoSizeRange
          (UMovieSceneSubSection *this,TOptional<TRange<FFrameNumber>_> *__return_storage_ptr__)

{
  UMovieSceneSequence *pUVar1;
  code *pcVar2;
  FFrameTime FVar3;
  FFrameTime FVar4;
  TRangeBound<FFrameNumber> TVar5;
  uint uVar6;
  bool bVar7;
  char cVar8;
  UMovieScene *pUVar9;
  TOptional<TRange<FFrameNumber>_> *pTVar10;
  TOptional<FFrameTime> *pTVar11;
  TOptional<FFrameTime> *pTVar12;
  FFrameNumber FVar13;
  FFrameTime FVar14;
  FFrameTime FVar15;
  int iVar16;
  longlong lVar17;
  longlong lVar18;
  TOptional<FFrameTime> local_res18;
  undefined4 uStackX_24;
  TRange<FFrameNumber> local_d8;
  TOptional<FFrameTime> local_c8;
  int iStack_bc;
  uint uStack_b8;
  int iStack_b4;
  int iStack_ac;
  int iStack_a4;
  FFrameTime local_a0;
  FFrameTime local_98;
  FMovieSceneSequenceTransform local_90;
  FMovieSceneInverseSequenceTransform local_70;
  TOptional<FFrameTime> local_50;
  TOptional<FFrameTime> local_44;
  
  pUVar1 = (this->SubSequence).field0_0x0.DebugPtr;
  if ((pUVar1 == (UMovieSceneSequence *)0x0) ||
     (pUVar9 = (UMovieScene *)(**(code **)(pUVar1->_padding_ + 0x2f8))(),
     pUVar9 == (UMovieScene *)0x0)) {
    UMovieSceneSection::GetAutoSizeRange((UMovieSceneSection *)this,__return_storage_ptr__);
    return __return_storage_ptr__;
  }
  OuterToInnerTransform_NoInnerTimeWarp(this,&local_90);
  AppendInnerTimeWarpTransform(this,&local_90);
  FMovieSceneSequenceTransform::Inverse(&local_90,&local_70);
  DestructItems<FMovieSceneNestedSequenceTransform,int>
            ((FMovieSceneNestedSequenceTransform *)local_90.NestedTransforms.AllocatorInstance.Data,
             local_90.NestedTransforms.ArrayNum);
  if ((FMovieSceneNestedSequenceTransform *)local_90.NestedTransforms.AllocatorInstance.Data !=
      (FMovieSceneNestedSequenceTransform *)0x0) {
    FMemory::Free(local_90.NestedTransforms.AllocatorInstance.Data);
  }
  GetValidatedInnerPlaybackRange(&local_d8,&this->Parameters,pUVar9);
  iStack_ac = local_d8.LowerBound.Value.Value;
  if ((local_d8.LowerBound.Type.Value == '\x02') &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("!InLowerBound.IsOpen()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\MovieSceneTimeHelpers.h"
                         ,0x2c,L""), bVar7)) {
    pcVar2 = (code *)swi(3);
    pTVar10 = (TOptional<TRange<FFrameNumber>_> *)(*pcVar2)();
    return pTVar10;
  }
  lVar18 = 0;
  lVar17 = lVar18;
  if (local_d8.LowerBound.Type.Value == '\0') {
    lVar17 = 4;
  }
  iVar16 = *(int *)((longlong)
                    &`struct_FFrameNumber___cdecl_UE::MovieScene::DiscreteInclusiveLower(TRangeBound<FFrameNumber>_const&___ptr64)'
                     ::__l2::Offsets + lVar17);
  if ((local_d8.LowerBound.Type.Value == '\x02') &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Type != ERangeBoundTypes::Open",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                         ,99,L""), bVar7)) {
    pcVar2 = (code *)swi(3);
    pTVar10 = (TOptional<TRange<FFrameNumber>_> *)(*pcVar2)();
    return pTVar10;
  }
  FVar3.SubFrame = 0.0;
  FVar3.FrameNumber.Value = iStack_ac + iVar16;
  pTVar11 = FMovieSceneInverseSequenceTransform::TryTransformTime(&local_70,&local_50,FVar3);
  if ((local_d8.LowerBound.Type.Value == '\x02') &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Type != ERangeBoundTypes::Open",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                         ,99,L""), bVar7)) {
    pcVar2 = (code *)swi(3);
    pTVar10 = (TOptional<TRange<FFrameNumber>_> *)(*pcVar2)();
    return pTVar10;
  }
  iStack_a4 = local_d8.UpperBound.Value.Value;
  pTVar12 = &local_res18;
  if (pTVar11->bIsSet != false) {
    pTVar12 = pTVar11;
  }
  local_res18.TypedValue.FrameNumber.Value = local_d8.LowerBound.Value.Value;
  local_res18.TypedValue.SubFrame = 0.0;
  FVar15 = pTVar12->TypedValue;
  local_a0 = FVar15;
  if ((local_d8.UpperBound.Type.Value == '\x02') &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("!InUpperBound.IsOpen()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\MovieSceneTimeHelpers.h"
                         ,0x44,L""), bVar7)) {
    pcVar2 = (code *)swi(3);
    pTVar10 = (TOptional<TRange<FFrameNumber>_> *)(*pcVar2)();
    return pTVar10;
  }
  if (local_d8.UpperBound.Type.Value == '\x01') {
    lVar18 = 4;
  }
  iVar16 = *(int *)((longlong)
                    &`struct_FFrameNumber___cdecl_UE::MovieScene::DiscreteExclusiveUpper(TRangeBound<FFrameNumber>_const&___ptr64)'
                     ::__l2::Offsets + lVar18);
  if ((local_d8.UpperBound.Type.Value == '\x02') &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Type != ERangeBoundTypes::Open",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                         ,99,L""), bVar7)) {
    pcVar2 = (code *)swi(3);
    pTVar10 = (TOptional<TRange<FFrameNumber>_> *)(*pcVar2)();
    return pTVar10;
  }
  local_res18._8_4_ = iStack_a4 + iVar16;
  uStackX_24 = 0;
  FVar4.SubFrame = 0.0;
  FVar4.FrameNumber.Value = local_res18._8_4_;
  pTVar11 = FMovieSceneInverseSequenceTransform::TryTransformTime(&local_70,&local_44,FVar4);
  if ((local_d8.UpperBound.Type.Value == '\x02') &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Type != ERangeBoundTypes::Open",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                         ,99,L""), bVar7)) {
    pcVar2 = (code *)swi(3);
    pTVar10 = (TOptional<TRange<FFrameNumber>_> *)(*pcVar2)();
    return pTVar10;
  }
  local_c8.TypedValue.FrameNumber.Value = local_d8.UpperBound.Value.Value;
  pTVar12 = &local_c8;
  if (pTVar11->bIsSet != false) {
    pTVar12 = pTVar11;
  }
  local_c8.TypedValue.SubFrame = 0.0;
  local_98 = pTVar12->TypedValue;
  if (__real_3f000000 <= local_a0.SubFrame) {
    FVar15.FrameNumber.Value = FVar15.FrameNumber.Value.Value + 1;
    FVar15.SubFrame = 0.0;
  }
  FVar14 = local_98;
  if (__real_3f000000 <= local_98.SubFrame) {
    FVar14.FrameNumber.Value = local_98.FrameNumber.Value.Value + 1;
    FVar14.SubFrame = 0.0;
  }
  iVar16 = (int)((ulonglong)this->_padding_ >> 0x20);
  cVar8 = (char)this->_padding_;
  if (cVar8 != '\x01') {
    if ((cVar8 == '\x02') &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Type != ERangeBoundTypes::Open",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                           ,99,L""), bVar7)) {
      pcVar2 = (code *)swi(3);
      pTVar10 = (TOptional<TRange<FFrameNumber>_> *)(*pcVar2)();
      return pTVar10;
    }
    iVar16 = iVar16 + 1;
  }
  iVar16 = iVar16 + (FVar14.FrameNumber.Value.Value - FVar15.FrameNumber.Value);
  FVar13.Value = (int)((ulonglong)this->_padding_ >> 0x20);
  cVar8 = (char)this->_padding_;
  if (cVar8 != '\x01') {
    if ((cVar8 == '\x02') &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Type != ERangeBoundTypes::Open",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                           ,99,L""), bVar7)) {
      pcVar2 = (code *)swi(3);
      pTVar10 = (TOptional<TRange<FFrameNumber>_> *)(*pcVar2)();
      return pTVar10;
    }
    FVar13.Value = FVar13.Value + 1;
  }
  uVar6 = uStack_b8;
  local_c8.bIsSet = true;
  uStack_b8 = uStack_b8 & 0xffffff00;
  __return_storage_ptr__->bIsSet = true;
  TVar5.Value.Value = FVar13.Value;
  TVar5.Type.Value = true;
  TVar5._1_3_ = local_c8._9_3_;
  (__return_storage_ptr__->TypedValue).LowerBound = TVar5;
  (__return_storage_ptr__->TypedValue).UpperBound =
       (TRangeBound<FFrameNumber>)(CONCAT44(iVar16,uVar6) & 0xffffffffffffff00);
  if (local_70.NestedTransforms.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return __return_storage_ptr__;
  }
  iStack_bc = FVar13.Value;
  iStack_b4 = iVar16;
  FMemory::Free(local_70.NestedTransforms.AllocatorInstance.Data);
  return __return_storage_ptr__;
}

// GetMask @ 1462af2b0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

FMovieSceneSubSectionOriginOverrideMask __thiscall
UMovieSceneSubSection::GetMask(UMovieSceneSubSection *this)

{
  uint *in_RDX;
  
  *in_RDX = (this->OriginOverrideMask).Mask;
  return (FMovieSceneSubSectionOriginOverrideMask)(uint)in_RDX;
}

// GetOffsetTime @ 1462af2f0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

TOptional<FFrameTime> * __thiscall
UMovieSceneSubSection::GetOffsetTime
          (UMovieSceneSubSection *this,TOptional<FFrameTime> *__return_storage_ptr__)

{
  FFrameTime FVar1;
  
  FVar1.SubFrame = 0.0;
  FVar1.FrameNumber.Value = (this->Parameters).StartFrameOffset.Value;
  __return_storage_ptr__->TypedValue = FVar1;
  __return_storage_ptr__->bIsSet = true;
  return __return_storage_ptr__;
}

// GetPathNameInMovieScene @ 1462af330

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

FString * __thiscall
UMovieSceneSubSection::GetPathNameInMovieScene
          (UMovieSceneSubSection *this,FString *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  UClass *pUVar3;
  UObject *pUVar4;
  FString *pFVar5;
  
  pUVar3 = Z_Construct_UClass_UMovieScene_NoRegister();
  pUVar4 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar3);
  if (pUVar4 == (UObject *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("OuterMovieScene",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Sections\\MovieSceneSubSection.cpp"
                       ,0x1aa,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FString *)(*pcVar1)();
      return pFVar5;
    }
  }
  UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,__return_storage_ptr__,pUVar4);
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 1462af9a0

UClass * __cdecl UMovieSceneSubSection::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneSubSection.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneSubSection",
               &Z_Registration_Info_UClass_UMovieSceneSubSection.InnerSingleton,
               StaticRegisterNativesUMovieSceneSubSection,0x890,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"EditorPerProjectUserSettings",
               InternalConstructor<UMovieSceneSubSection>,
               InternalVTableHelperCtorCaller<UMovieSceneSubSection>,local_res8,
               UMovieSceneSection::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneSubSection.InnerSingleton;
}

// GetSequence @ 1462b04b0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

UMovieSceneSequence * __thiscall UMovieSceneSubSection::GetSequence(UMovieSceneSubSection *this)

{
  return (this->SubSequence).field0_0x0.DebugPtr;
}

// GetSequenceID @ 1462b04c0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

FMovieSceneSequenceID __thiscall UMovieSceneSubSection::GetSequenceID(UMovieSceneSubSection *this)

{
  wchar_t wVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  UClass *pUVar6;
  UObject *pUVar7;
  FString *pFVar8;
  ushort uVar9;
  uint *in_RDX;
  ForAnyElementType FVar10;
  uint uVar11;
  FString local_28;
  FString local_18;
  
  pUVar6 = Z_Construct_UClass_UMovieScene_NoRegister();
  pUVar7 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar6);
  if ((pUVar7 == (UObject *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("OuterMovieScene",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Sections\\MovieSceneSubSection.cpp"
                         ,0x1aa,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (FMovieSceneSequenceID)uVar5;
  }
  UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_28,pUVar7);
  uVar5 = 0;
  if ((this->SubSequence).field0_0x0.DebugPtr != (UMovieSceneSequence *)0x0) {
    ::FString::AppendChars(&local_28,L" / ",3);
    pFVar8 = UObjectBaseUtility::GetPathName
                       ((UObjectBaseUtility *)(this->SubSequence).field0_0x0.DebugPtr,&local_18,
                        (UObject *)0x0);
    iVar2 = (pFVar8->Data).ArrayNum;
    uVar11 = iVar2 - 1;
    if (iVar2 == 0) {
      uVar11 = uVar5;
    }
    ::FString::AppendChars(&local_28,(wchar_t *)(pFVar8->Data).AllocatorInstance.Data,uVar11);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  FVar10.Data = (FScriptContainerElement *)L"";
  if (local_28.Data.ArrayNum != 0) {
    FVar10.Data = local_28.Data.AllocatorInstance.Data;
  }
  if ((FCrc::CRCTable_DEPRECATED[1] == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("CRCTable_DEPRECATED[1] != 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Crc.h"
                         ,0xb4,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (FMovieSceneSequenceID)uVar5;
  }
  wVar1 = *(wchar_t *)FVar10.Data;
  while (wVar1 != L'\0') {
    FVar10.Data = FVar10.Data + 2;
    uVar9 = wVar1 - (-(ushort)((ushort)wVar1 - 0x61 < 0x1a) & 0x20);
    uVar5 = uVar5 >> 8 ^ FCrc::CRCTable_DEPRECATED[(byte)((byte)uVar5 ^ (byte)uVar9)];
    uVar5 = uVar5 >> 8 ^ FCrc::CRCTable_DEPRECATED[(uVar9 >> 8 ^ uVar5) & 0xff];
    wVar1 = *(wchar_t *)FVar10.Data;
  }
  *in_RDX = uVar5;
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return (FMovieSceneSequenceID)(uint)in_RDX;
}

// GetSnapTimes @ 1462b0650

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
UMovieSceneSubSection::GetSnapTimes
          (UMovieSceneSubSection *this,TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *param_1,
          bool param_2)

{
  UMovieSceneSequence *pUVar1;
  code *pcVar2;
  FFrameTime FVar3;
  FFrameTime FVar4;
  FFrameTime FVar5;
  char cVar6;
  bool bVar7;
  longlong lVar8;
  FFrameNumber FVar9;
  uint uVar10;
  TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *local_res8;
  FFrameTime local_res20;
  TOptional<FFrameTime> local_b0;
  TOptional<FFrameTime> local_a0;
  char local_90;
  undefined1 uStack_8f;
  undefined1 uStack_8e;
  undefined1 uStack_8d;
  uint uStack_8c;
  char cStack_88;
  undefined1 uStack_87;
  undefined1 uStack_86;
  undefined1 uStack_85;
  uint uStack_84;
  FMovieSceneSequenceTransform local_80;
  code *local_60;
  TArray<FFrameNumber,TSizedDefaultAllocator<32>_> **local_58;
  FMovieSceneInverseSequenceTransform local_50;
  
  UMovieSceneSection::GetSnapTimes((UMovieSceneSection *)this,param_1,param_2);
  uVar10 = (uint)((ulonglong)this->_padding_ >> 0x20);
  cVar6 = (char)this->_padding_;
  if (cVar6 != '\x01') {
    if ((cVar6 == '\x02') &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Type != ERangeBoundTypes::Open",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                           ,99,L""), bVar7)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    uVar10 = uVar10 + 1;
  }
  local_res20.FrameNumber.Value = (int)((ulonglong)this->_padding_ >> 0x20);
  cVar6 = (char)this->_padding_;
  if (cVar6 == '\x01') {
    local_res20.FrameNumber.Value = local_res20.FrameNumber.Value + 1;
  }
  else if ((cVar6 == '\x02') &&
          (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                             ("Type != ERangeBoundTypes::Open",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                              ,99,L""), bVar7)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pUVar1 = (this->SubSequence).field0_0x0.DebugPtr;
  if ((pUVar1 != (UMovieSceneSequence *)0x0) &&
     (lVar8 = (**(code **)(pUVar1->_padding_ + 0x2f8))(), lVar8 != 0)) {
    local_res8 = param_1;
    OuterToInnerTransform_NoInnerTimeWarp(this,&local_80);
    AppendInnerTimeWarpTransform(this,&local_80);
    local_58 = &local_res8;
    local_res20.SubFrame = 0.0;
    FVar3.SubFrame = 0.0;
    FVar3.FrameNumber.Value = uVar10;
    local_60 = UE::Core::Private::Function::
               TFunctionRefCaller<`UMovieSceneSubSection::GetSnapTimes'::__l2::<lambda_1>,bool,FFrameTime>
               ::Call;
    bVar7 = FMovieSceneSequenceTransform::ExtractBoundariesWithinRange
                      (&local_80,FVar3,local_res20,
                       (TFunctionRef<bool___cdecl(FFrameTime)> *)&local_60);
    if (!bVar7) {
      FMovieSceneSequenceTransform::Inverse(&local_80,&local_50);
      local_90 = *(char *)(lVar8 + 0x128);
      uStack_8f = *(undefined1 *)(lVar8 + 0x129);
      uStack_8e = *(undefined1 *)(lVar8 + 0x12a);
      uStack_8d = *(undefined1 *)(lVar8 + 299);
      uStack_8c = *(uint *)(lVar8 + 300);
      cStack_88 = *(char *)(lVar8 + 0x130);
      uStack_87 = *(undefined1 *)(lVar8 + 0x131);
      uStack_86 = *(undefined1 *)(lVar8 + 0x132);
      uStack_85 = *(undefined1 *)(lVar8 + 0x133);
      uStack_84 = *(uint *)(lVar8 + 0x134);
      if ((local_90 == '\x02') &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Type != ERangeBoundTypes::Open",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                             ,99,L""), bVar7)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      FVar4.SubFrame = 0.0;
      FVar4.FrameNumber.Value = uStack_8c;
      FMovieSceneInverseSequenceTransform::TryTransformTime(&local_50,&local_b0,FVar4);
      if ((cStack_88 == '\x02') &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Type != ERangeBoundTypes::Open",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                             ,99,L""), bVar7)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      FVar5.SubFrame = 0.0;
      FVar5.FrameNumber.Value = uStack_84;
      FMovieSceneInverseSequenceTransform::TryTransformTime(&local_50,&local_a0,FVar5);
      if (local_b0.bIsSet != false) {
        FVar9 = local_b0.TypedValue.FrameNumber.Value;
        local_res20.SubFrame = local_b0.TypedValue.SubFrame;
        if ((((int)uVar10 < FVar9.Value) ||
            ((FVar9.Value == uVar10 && (0.0 <= local_res20.SubFrame)))) &&
           ((FVar9.Value < local_res20.FrameNumber.Value ||
            ((FVar9.Value == local_res20.FrameNumber.Value && (local_res20.SubFrame < 0.0)))))) {
          `UMovieSceneSubSection::GetSnapTimes'::__l2::<lambda_1>::operator()
                    (&local_res8,local_b0.TypedValue);
        }
      }
      if (local_a0.bIsSet != false) {
        FVar9 = local_a0.TypedValue.FrameNumber.Value;
        local_res20.SubFrame = local_a0.TypedValue.SubFrame;
        if ((((int)uVar10 < FVar9.Value) ||
            ((FVar9.Value == uVar10 && (0.0 <= local_res20.SubFrame)))) &&
           ((FVar9.Value < local_res20.FrameNumber.Value ||
            ((FVar9.Value == local_res20.FrameNumber.Value && (local_res20.SubFrame < 0.0)))))) {
          `UMovieSceneSubSection::GetSnapTimes'::__l2::<lambda_1>::operator()
                    (&local_res8,local_a0.TypedValue);
        }
      }
      if (local_50.NestedTransforms.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_50.NestedTransforms.AllocatorInstance.Data);
      }
    }
    DestructItems<FMovieSceneNestedSequenceTransform,int>
              ((FMovieSceneNestedSequenceTransform *)
               local_80.NestedTransforms.AllocatorInstance.Data,local_80.NestedTransforms.ArrayNum);
    if ((FMovieSceneNestedSequenceTransform *)local_80.NestedTransforms.AllocatorInstance.Data !=
        (FMovieSceneNestedSequenceTransform *)0x0) {
      FMemory::Free(local_80.NestedTransforms.AllocatorInstance.Data);
    }
  }
  return;
}

// GetSourceObject @ 1462b0950

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

UObject * __thiscall UMovieSceneSubSection::GetSourceObject(UMovieSceneSubSection *this)

{
  return (UObject *)(this->SubSequence).field0_0x0.DebugPtr;
}

// GetTimeWarp @ 1462b0ab0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

FMovieSceneTimeWarpVariant * __thiscall
UMovieSceneSubSection::GetTimeWarp(UMovieSceneSubSection *this)

{
  return &(this->Parameters).TimeScale;
}

// GetValidatedInnerPlaybackRange @ 1462b1160

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

bool __thiscall
UMovieSceneSubSection::GetValidatedInnerPlaybackRange
          (UMovieSceneSubSection *this,TRange<FFrameNumber> *param_1)

{
  UMovieSceneSequence *pUVar1;
  TRangeBound<FFrameNumber> TVar2;
  UMovieScene *pUVar3;
  TRange<FFrameNumber> *pTVar4;
  TRange<FFrameNumber> local_18;
  
  pUVar1 = (this->SubSequence).field0_0x0.DebugPtr;
  if (pUVar1 != (UMovieSceneSequence *)0x0) {
    pUVar3 = (UMovieScene *)(**(code **)(pUVar1->_padding_ + 0x2f8))();
    if (pUVar3 != (UMovieScene *)0x0) {
      pTVar4 = GetValidatedInnerPlaybackRange(&local_18,&this->Parameters,pUVar3);
      TVar2 = pTVar4->UpperBound;
      param_1->LowerBound = pTVar4->LowerBound;
      param_1->UpperBound = TVar2;
      return true;
    }
  }
  return false;
}

// GetValidatedInnerPlaybackRange @ 1462b11d0

TRange<FFrameNumber> * __cdecl
UMovieSceneSubSection::GetValidatedInnerPlaybackRange
          (TRange<FFrameNumber> *__return_storage_ptr__,FMovieSceneSectionParameters *param_1,
          UMovieScene *param_2)

{
  code *pcVar1;
  TRangeBound<FFrameNumber> TVar2;
  TRangeBound<FFrameNumber> TVar3;
  bool bVar4;
  int iVar5;
  TRange<FFrameNumber> *pTVar6;
  uint uVar7;
  TRangeBound<FFrameNumber> local_res20;
  TRangeBound<FFrameNumber> local_48;
  int local_40 [2];
  TRangeBound<FFrameNumber> local_38;
  TRangeBound<FFrameNumber> TStack_30;
  
  TVar2 = (param_2->PlaybackRange).Value.LowerBound;
  TVar3 = (param_2->PlaybackRange).Value.UpperBound;
  if ((TVar2.Type.Value.Value != '\x02') && (TVar3.Type.Value.Value != '\x02')) {
    local_38 = TVar2;
    TStack_30 = TVar3;
    ConvertFrameTime((FFrameTime)local_40,(FFrameRate)0x1,param_2->DisplayRate);
    local_res20.Value.Value = TVar2.Value.Value.Value + (param_1->StartFrameOffset).Value;
    local_res20._0_4_ = TVar2._0_4_;
    if (TVar2.Type.Value.Value == '\x02') {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Type != ERangeBoundTypes::Open",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                         ,99,L"");
      if (bVar4) {
        pcVar1 = (code *)swi(3);
        pTVar6 = (TRange<FFrameNumber> *)(*pcVar1)();
        return pTVar6;
      }
    }
    iVar5 = (param_1->EndFrameOffset).Value;
    local_48.Value.Value = local_res20.Value.Value + local_40[0];
    uVar7 = TVar3._0_4_ & 0xff;
    if (uVar7 == 2) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Type != ERangeBoundTypes::Open",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                         ,99,L"");
      if (bVar4) {
        pcVar1 = (code *)swi(3);
        pTVar6 = (TRange<FFrameNumber> *)(*pcVar1)();
        return pTVar6;
      }
    }
    iVar5 = TStack_30.Value.Value - iVar5;
    if (local_48.Value.Value < iVar5) {
      local_48.Value.Value = iVar5;
    }
    if (uVar7 == 2) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Type != ERangeBoundTypes::Open",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                         ,0x73,L"");
      if (bVar4) {
        pcVar1 = (code *)swi(3);
        pTVar6 = (TRange<FFrameNumber> *)(*pcVar1)();
        return pTVar6;
      }
    }
    local_48._0_4_ = TVar3._0_4_;
    __return_storage_ptr__->LowerBound = local_res20;
    __return_storage_ptr__->UpperBound = local_48;
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->LowerBound = TVar2;
  __return_storage_ptr__->UpperBound = TVar3;
  return __return_storage_ptr__;
}

// HasAnyChannelData @ 1462b13c0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

bool __thiscall UMovieSceneSubSection::HasAnyChannelData(UMovieSceneSubSection *this)

{
  byte bVar1;
  bool bVar2;
  byte bVar3;
  
  if ((this->Translation[0].Times.ArrayNum == 0) && (this->Translation[0].bHasDefaultValue != true))
  {
    bVar3 = 0;
  }
  else {
    bVar3 = 1;
  }
  if ((this->Translation[1].Times.ArrayNum == 0) && (this->Translation[1].bHasDefaultValue != true))
  {
    bVar1 = 0;
  }
  else {
    bVar1 = 1;
  }
  bVar1 = bVar1 | bVar3;
  if ((this->Translation[2].Times.ArrayNum != 0) || (this->Translation[2].bHasDefaultValue == true))
  {
    bVar1 = 1;
  }
  if ((this->Rotation[0].Times.ArrayNum == 0) && (this->Rotation[0].bHasDefaultValue != true)) {
    bVar3 = 0;
  }
  else {
    bVar3 = 1;
  }
  bVar2 = (bool)(bVar1 | bVar3);
  if ((this->Rotation[1].Times.ArrayNum != 0) || (this->Rotation[1].bHasDefaultValue == true)) {
    bVar2 = true;
  }
  if ((this->Rotation[2].Times.ArrayNum == 0) && (this->Rotation[2].bHasDefaultValue != true)) {
    return bVar2;
  }
  return true;
}

// ImportEntityImpl @ 1462b18c0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieSceneSubSection::ImportEntityImpl
          (UMovieSceneSubSection *this,UMovieSceneEntitySystemLinker *param_1,
          FEntityImportParams *param_2,FImportedEntity *param_3)

{
  FBuiltInComponentTypes *pFVar1;
  undefined **local_18;
  ushort local_10;
  undefined1 local_e;
  
  pFVar1 = UE::MovieScene::FBuiltInComponentTypes::Get();
  local_e = 0;
  local_10 = (pFVar1->Tags).Root.Value;
  local_18 = &___7__TEntityBuilder_UFAdd_MovieScene_UE___MovieScene_UE__6B_;
  UE::MovieScene::FImportedEntity::AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd>_>
            (param_3,(TEntityBuilder<UE::MovieScene::FAdd> *)&local_18);
  BuildDefaultSubSectionComponents
            ((UMovieSceneSubSection *)&this[-1].Rotation[2]._padding_,param_1,param_2,param_3);
  return;
}

// MapTimeToSectionFrame @ 1462b5bb0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

FFrameNumber __thiscall
UMovieSceneSubSection::MapTimeToSectionFrame(UMovieSceneSubSection *this,FFrameTime param_1)

{
  FFrameTime FVar1;
  undefined8 in_R8;
  undefined1 in_XMM2 [16];
  undefined1 auVar2 [16];
  float fVar3;
  undefined8 local_res8;
  undefined1 local_res18 [16];
  FMovieSceneSequenceTransform local_38;
  
  OuterToInnerTransform_NoInnerTimeWarp(this,&local_38);
  AppendInnerTimeWarpTransform(this,&local_38);
  local_res8._4_4_ = (float)((ulonglong)in_R8 >> 0x20);
  auVar2 = roundps(in_XMM2,ZEXT416((uint)(local_res8._4_4_ - 0.0)),1);
  fVar3 = (local_res8._4_4_ - 0.0) - auVar2._0_4_;
  if (::FFrameTime::MaxSubframe <= fVar3) {
    fVar3 = ::FFrameTime::MaxSubframe;
  }
  if (fVar3 <= 0.0) {
    fVar3 = 0.0;
  }
  local_res8 = (FMovieSceneSequenceTransform *)
               CONCAT44(fVar3,(int)auVar2._0_4_ +
                              ((int)in_R8 - (this->Parameters).StartFrameOffset.Value));
  FVar1 = ::operator*((FFrameTime)local_res18,local_res8);
  *(undefined4 *)param_1 = *(undefined4 *)FVar1;
  DestructItems<FMovieSceneNestedSequenceTransform,int>
            ((FMovieSceneNestedSequenceTransform *)local_38.NestedTransforms.AllocatorInstance.Data,
             local_38.NestedTransforms.ArrayNum);
  if ((FMovieSceneNestedSequenceTransform *)local_38.NestedTransforms.AllocatorInstance.Data !=
      (FMovieSceneNestedSequenceTransform *)0x0) {
    FMemory::Free(local_38.NestedTransforms.AllocatorInstance.Data);
  }
  return (FFrameNumber)param_1.FrameNumber.Value.Value;
}

// MigrateFrameTimes @ 1462b5c80

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
UMovieSceneSubSection::MigrateFrameTimes(UMovieSceneSubSection *this,IRetimingInterface *param_1)

{
  FFrameNumber FVar1;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  undefined1 local_res8 [8];
  
  if (0 < (this->Parameters).StartFrameOffset.Value) {
    FVar1 = UE::MovieScene::IRetimingInterface::RemapTime(param_1,(int)local_res8);
    (this->Parameters).StartFrameOffset.Value = *(int *)CONCAT44(extraout_var,FVar1.Value);
  }
  if (0 < (this->Parameters).EndFrameOffset.Value) {
    FVar1 = UE::MovieScene::IRetimingInterface::RemapTime(param_1,(int)local_res8);
    (this->Parameters).EndFrameOffset.Value = *(int *)CONCAT44(extraout_var_00,FVar1.Value);
  }
  if (0 < (this->Parameters).FirstLoopStartFrameOffset.Value) {
    FVar1 = UE::MovieScene::IRetimingInterface::RemapTime(param_1,(int)local_res8);
    (this->Parameters).FirstLoopStartFrameOffset.Value =
         *(int *)CONCAT44(extraout_var_01,FVar1.Value);
  }
  return;
}

// MigrateFrameTimes @ 1462b5d20

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
UMovieSceneSubSection::MigrateFrameTimes
          (UMovieSceneSubSection *this,FFrameRate param_1,FFrameRate param_2)

{
  code *pcVar1;
  FFrameRateRetiming *pFVar2;
  FFrameRateRetiming local_28;
  
  pcVar1 = *(code **)(this->_padding_ + 0x340);
  pFVar2 = UE::MovieScene::FFrameRateRetiming::FFrameRateRetiming(&local_28,param_1,param_2);
  (*pcVar1)(this,pFVar2);
  return;
}

// OuterToInnerTransform @ 1462b6050

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

FMovieSceneSequenceTransform * __thiscall
UMovieSceneSubSection::OuterToInnerTransform
          (UMovieSceneSubSection *this,FMovieSceneSequenceTransform *__return_storage_ptr__)

{
  OuterToInnerTransform_NoInnerTimeWarp(this,__return_storage_ptr__);
  AppendInnerTimeWarpTransform(this,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// OuterToInnerTransform_NoInnerTimeWarp @ 1462b6090

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

FMovieSceneSequenceTransform * __thiscall
UMovieSceneSubSection::OuterToInnerTransform_NoInnerTimeWarp
          (UMovieSceneSubSection *this,FMovieSceneSequenceTransform *__return_storage_ptr__)

{
  UMovieSceneSequence *pUVar1;
  char cVar2;
  UMovieScene *this_00;
  UClass *pUVar3;
  UObject *pUVar4;
  UMovieSceneClock *pUVar5;
  undefined1 auStackY_c8 [32];
  undefined8 local_98;
  float local_90;
  FMovieSceneNestedSequenceTransform *local_88;
  undefined8 local_80;
  TRange<FFrameNumber> local_78;
  FFrameRate local_68;
  FFrameRate local_60;
  TRange<FFrameNumber> local_58;
  FMovieSceneSectionTimingParametersFrames local_48;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  pUVar1 = (this->SubSequence).field0_0x0.DebugPtr;
  if (pUVar1 == (UMovieSceneSequence *)0x0) {
    (__return_storage_ptr__->LinearTransform).TimeScale = 1.0;
    (__return_storage_ptr__->LinearTransform).Offset.FrameNumber = 0;
    (__return_storage_ptr__->LinearTransform).Offset.SubFrame = 0.0;
    (__return_storage_ptr__->NestedTransforms).AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->NestedTransforms).ArrayNum = 0;
    (__return_storage_ptr__->NestedTransforms).ArrayMax = 0;
    return __return_storage_ptr__;
  }
  this_00 = (UMovieScene *)(**(code **)(pUVar1->_padding_ + 0x2f8))();
  local_58.LowerBound = (TRangeBound<FFrameNumber>)this->_padding_;
  local_58.UpperBound = (TRangeBound<FFrameNumber>)this->_padding_;
  if ((this_00 == (UMovieScene *)0x0) || (local_58.LowerBound.Type.Value == '\x02')) {
    (__return_storage_ptr__->LinearTransform).TimeScale = 1.0;
    (__return_storage_ptr__->LinearTransform).Offset.FrameNumber = 0;
    (__return_storage_ptr__->LinearTransform).Offset.SubFrame = 0.0;
    (__return_storage_ptr__->NestedTransforms).AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->NestedTransforms).ArrayNum = 0;
    (__return_storage_ptr__->NestedTransforms).ArrayMax = 0;
    return __return_storage_ptr__;
  }
  local_68 = this_00->TickResolution;
  pUVar3 = Z_Construct_UClass_UMovieScene_NoRegister();
  pUVar4 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar3);
  local_60.Numerator = *(int *)&pUVar4[7].field_0x20;
  local_60.Denominator = *(int *)&pUVar4[7].field_0x24;
  GetValidatedInnerPlaybackRange(&local_78,&this->Parameters,this_00);
  local_78.LowerBound = *(TRangeBound<FFrameNumber> *)(this->Parameters).TimeScale.Variant.Data;
  local_78.UpperBound =
       *(TRangeBound<FFrameNumber> *)&(this->Parameters).TimeScale.Variant.WeakCustomGetter.WeakPtr;
  local_48.InnerStartOffset.Value = (this->Parameters).StartFrameOffset.Value;
  local_48.InnerEndOffset.Value = (this->Parameters).EndFrameOffset.Value;
  local_48.FirstLoopStartOffset.Value = (this->Parameters).FirstLoopStartFrameOffset.Value;
  local_48._28_1_ = (this->Parameters).bCanLoop & 1;
  local_98 = 0x3f800000;
  local_90 = 0.0;
  local_88 = (FMovieSceneNestedSequenceTransform *)0x0;
  local_80 = 0;
  local_48.PlayRate.Variant.Data = (uchar  [8])local_78.LowerBound;
  local_48.PlayRate.Variant.WeakCustomGetter.WeakPtr = (FWeakObjectPtr)local_78.UpperBound;
  pUVar5 = UMovieScene::GetCustomClock(this_00);
  if (pUVar5 != (UMovieSceneClock *)0x0) {
    pUVar5 = UMovieScene::GetCustomClock(this_00);
    cVar2 = (**(code **)(*(longlong *)pUVar5 + 0x2b8))(pUVar5,&local_48,this,&local_98);
    if (cVar2 != '\0') {
      (__return_storage_ptr__->LinearTransform).TimeScale = (float)(undefined4)local_98;
      (__return_storage_ptr__->LinearTransform).Offset.FrameNumber = (FFrameNumber)local_98._4_4_;
      (__return_storage_ptr__->LinearTransform).Offset.SubFrame = local_90;
      (__return_storage_ptr__->NestedTransforms).AllocatorInstance.Data =
           (FScriptContainerElement *)local_88;
      (__return_storage_ptr__->NestedTransforms).ArrayNum = (int)local_80;
      (__return_storage_ptr__->NestedTransforms).ArrayMax = local_80._4_4_;
      local_80 = 0;
      local_88 = (FMovieSceneNestedSequenceTransform *)0x0;
      local_80._0_4_ = 0;
      goto LAB_1462b6205;
    }
  }
  local_78.LowerBound = (this_00->PlaybackRange).Value.LowerBound;
  local_78.UpperBound = (this_00->PlaybackRange).Value.UpperBound;
  FMovieSceneSectionTimingParametersFrames::MakeTransform
            (&local_48,__return_storage_ptr__,&local_60,&local_58,&local_68,&local_78);
LAB_1462b6205:
  DestructItems<FMovieSceneNestedSequenceTransform,int>(local_88,(int)local_80);
  if (local_88 != (FMovieSceneNestedSequenceTransform *)0x0) {
    FMemory::Free(local_88);
  }
  return __return_storage_ptr__;
}

// PopulateEvaluationFieldImpl @ 1462b6e20

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

bool __thiscall
UMovieSceneSubSection::PopulateEvaluationFieldImpl
          (UMovieSceneSubSection *this,TRange<FFrameNumber> *param_1,
          FMovieSceneEvaluationFieldEntityMetaData *param_2,
          FMovieSceneEntityComponentFieldBuilder *param_3)

{
  int iVar1;
  int iVar2;
  
  if (this->Rotation[2]._padding_ != 0) {
    iVar1 = FMovieSceneEntityComponentFieldBuilder::FindOrAddEntity
                      (param_3,(UObject *)&this[-1].Rotation[2]._padding_,0);
    iVar2 = FMovieSceneEntityComponentFieldBuilder::AddMetaData(param_3,param_2);
    FMovieSceneEntityComponentFieldBuilder::AddPersistentEntity(param_3,param_1,iVar1,iVar2);
  }
  return true;
}

// PostLoad @ 1462b7c70

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall UMovieSceneSubSection::PostLoad(UMovieSceneSubSection *this)

{
  float *pfVar1;
  FMovieSceneSectionParameters *pFVar2;
  uint uVar3;
  uint uVar4;
  double in_XMM2_Qa;
  FWeakObjectPtr local_res8 [2];
  undefined8 local_res18 [2];
  
  GetLegacyConversionFrameRate();
  if (this->StartOffset_DEPRECATED == DeprecatedMagicNumber) {
    if ((this->Parameters).StartOffset_DEPRECATED == 0.0) goto LAB_1462b7cde;
  }
  else {
    this->StartOffset_DEPRECATED = DeprecatedMagicNumber;
  }
  UpgradeLegacyMovieSceneTime((UObject *)local_res8,(FFrameRate)this,in_XMM2_Qa);
  (this->Parameters).StartFrameOffset.Value = local_res8[0].ObjectIndex;
LAB_1462b7cde:
  if (this->TimeScale_DEPRECATED != DeprecatedMagicNumber) {
    in_XMM2_Qa = (double)this->TimeScale_DEPRECATED;
    local_res8[0].ObjectIndex = 0;
    local_res8[0].ObjectSerialNumber = 0;
    local_res18[0] = 0;
    uVar3 = SUB84(in_XMM2_Qa,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    uVar4 = (uint)((ulonglong)in_XMM2_Qa >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    if (__real_3e45798ee2308c3a <= (double)CONCAT44(uVar4,uVar3) &&
        (double)CONCAT44(uVar4,uVar3) != __real_3e45798ee2308c3a) {
      *(double *)(this->Parameters).TimeScale.Variant.Data = in_XMM2_Qa;
    }
    else {
      pFVar2 = &this->Parameters;
      (pFVar2->TimeScale).Variant.Data[0] = '\0';
      (pFVar2->TimeScale).Variant.Data[1] = '\0';
      (pFVar2->TimeScale).Variant.Data[2] = '\0';
      (pFVar2->TimeScale).Variant.Data[3] = '\0';
      (pFVar2->TimeScale).Variant.Data[4] = '\0';
      (pFVar2->TimeScale).Variant.Data[5] = '\0';
      (pFVar2->TimeScale).Variant.Data[6] = 0xf9;
      (pFVar2->TimeScale).Variant.Data[7] = 0xff;
    }
    FWeakObjectPtr::operator=(local_res8,(FObjectPtr)local_res18);
    (this->Parameters).TimeScale.Variant.WeakCustomGetter.WeakPtr = local_res8[0];
    this->TimeScale_DEPRECATED = DeprecatedMagicNumber;
  }
  pfVar1 = &(this->Parameters).PrerollTime_DEPRECATED;
  if (this->PrerollTime_DEPRECATED != DeprecatedMagicNumber) {
    *pfVar1 = this->PrerollTime_DEPRECATED;
    this->PrerollTime_DEPRECATED = DeprecatedMagicNumber;
  }
  if (0.0 < *pfVar1) {
    UpgradeLegacyMovieSceneTime((UObject *)local_res8,(FFrameRate)this,in_XMM2_Qa);
    *(int *)&this->_padding_ = local_res8[0].ObjectIndex;
  }
  if (0.0 < (this->Parameters).PostrollTime_DEPRECATED) {
    UpgradeLegacyMovieSceneTime((UObject *)local_res8,(FFrameRate)this,in_XMM2_Qa);
    *(int *)&this->_padding_ = local_res8[0].ObjectIndex;
  }
  UMovieSceneSignedObject::PostLoad((UMovieSceneSignedObject *)this);
  return;
}

// SetMask @ 1462bd1e0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
UMovieSceneSubSection::SetMask(UMovieSceneSubSection *this,EMovieSceneTransformChannel param_1)

{
  undefined8 local_18;
  FSharedReferencer<1> aFStack_10 [2];
  
  (this->OriginOverrideMask).Mask = param_1;
  local_18 = 0;
  aFStack_10[0].ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->_padding_ != &local_18) {
    this->_padding_ = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&this->_padding_,aFStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (aFStack_10[0].ReferenceController);
  return;
}

// SetSequence @ 1462bd250

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
UMovieSceneSubSection::SetSequence(UMovieSceneSubSection *this,UMovieSceneSequence *param_1)

{
  bool bVar1;
  UClass *pUVar2;
  UMovieSceneSequence *this_00;
  
  if (param_1 != (UMovieSceneSequence *)0x0) {
    pUVar2 = Z_Construct_UClass_UMovieSceneSequence_NoRegister();
    this_00 = (UMovieSceneSequence *)
              UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar2);
    if ((this_00 != (UMovieSceneSequence *)0x0) &&
       (bVar1 = UMovieSceneSequence::IsSubSequenceCompatible(this_00,param_1), !bVar1)) {
      return;
    }
  }
  bVar1 = UMovieSceneSection::TryModify((UMovieSceneSection *)this,true);
  if (bVar1) {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_1 != (UMovieSceneSequence *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    (this->SubSequence).field0_0x0.DebugPtr = param_1;
  }
  return;
}

// StaticRegisterNativesUMovieSceneSubSection @ 1462bde10

void __cdecl UMovieSceneSubSection::StaticRegisterNativesUMovieSceneSubSection(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_UMovieSceneSubSection_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// TrimSection @ 1462be4e0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
UMovieSceneSubSection::TrimSection
          (UMovieSceneSubSection *this,FQualifiedFrameTime *param_1,bool param_2,bool param_3)

{
  UMovieSceneSequence *pUVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  int *piVar6;
  char cVar7;
  bool bVar8;
  undefined1 local_res8 [8];
  int local_res10 [2];
  int local_84;
  undefined1 local_80;
  int local_7c;
  undefined4 local_78;
  int iStack_74;
  undefined4 uStack_70;
  int iStack_6c;
  char local_68;
  undefined1 uStack_67;
  undefined1 uStack_66;
  undefined1 uStack_65;
  int iStack_64;
  undefined1 uStack_60;
  undefined1 uStack_5f;
  undefined1 uStack_5e;
  undefined1 uStack_5d;
  undefined1 uStack_5c;
  undefined1 uStack_5b;
  undefined1 uStack_5a;
  undefined1 uStack_59;
  FQualifiedFrameTime local_58;
  FMovieSceneSequenceTransform local_48;
  
  local_78 = (undefined4)this->_padding_;
  iStack_74 = *(int *)((longlong)&this->_padding_ + 4);
  uStack_70 = (undefined4)this->_padding_;
  iStack_6c = *(int *)((longlong)&this->_padding_ + 4);
  local_84 = (param_1->Time).FrameNumber.Value;
  cVar7 = (char)local_78;
  cVar5 = cVar7;
  if (cVar7 == '\x02') {
    piVar6 = &iStack_74;
LAB_1462be554:
    if (cVar5 != cVar7) {
      return;
    }
  }
  else {
    if (local_84 <= iStack_74) {
      if ((local_84 < iStack_74) || (cVar7 != '\x01')) {
        piVar6 = &local_84;
        cVar5 = '\x01';
      }
      else {
        piVar6 = &iStack_74;
      }
      goto LAB_1462be554;
    }
    piVar6 = &iStack_74;
  }
  if ((cVar5 != '\x02') && (*piVar6 != iStack_74)) {
    return;
  }
  local_80 = 1;
  local_7c = local_84;
  cVar5 = (char)uStack_70;
  cVar2 = cVar5;
  if (cVar5 == '\x02') {
    piVar6 = &iStack_6c;
  }
  else {
    if (local_84 < iStack_6c) {
      piVar6 = &iStack_6c;
      goto LAB_1462be5c1;
    }
    if ((iStack_6c < local_84) || (cVar5 != '\x01')) {
      piVar6 = &local_7c;
      cVar2 = '\x01';
    }
    else {
      piVar6 = &iStack_6c;
    }
  }
  bVar8 = cVar2 != cVar5;
  cVar5 = cVar2;
  if (bVar8) {
    return;
  }
LAB_1462be5c1:
  if ((cVar5 == '\x02') || (*piVar6 == iStack_6c)) {
    UObjectBase::AtomicallySetFlags((UObjectBase *)this,RF_Transactional);
    bVar8 = UMovieSceneSection::TryModify((UMovieSceneSection *)this,true);
    if (bVar8) {
      if (((param_2) && (cVar7 != '\x02')) &&
         (pUVar1 = (this->SubSequence).field0_0x0.DebugPtr, pUVar1 != (UMovieSceneSequence *)0x0)) {
        lVar4 = (**(code **)(pUVar1->_padding_ + 0x2f8))();
        ConvertFrameTime((FFrameTime)local_res8,(FFrameRate)param_1->Time,param_1->Rate);
        OuterToInnerTransform_NoInnerTimeWarp(this,&local_48);
        AppendInnerTimeWarpTransform(this,&local_48);
        FMovieSceneSequenceTransform::TransformTime(&local_48,(FFrameTime)local_res10);
        local_68 = *(char *)(lVar4 + 0x128);
        uStack_67 = *(undefined1 *)(lVar4 + 0x129);
        uStack_66 = *(undefined1 *)(lVar4 + 0x12a);
        uStack_65 = *(undefined1 *)(lVar4 + 299);
        iStack_64 = *(int *)(lVar4 + 300);
        uStack_60 = *(undefined1 *)(lVar4 + 0x130);
        uStack_5f = *(undefined1 *)(lVar4 + 0x131);
        uStack_5e = *(undefined1 *)(lVar4 + 0x132);
        uStack_5d = *(undefined1 *)(lVar4 + 0x133);
        uStack_5c = *(undefined1 *)(lVar4 + 0x134);
        uStack_5b = *(undefined1 *)(lVar4 + 0x135);
        uStack_5a = *(undefined1 *)(lVar4 + 0x136);
        uStack_59 = *(undefined1 *)(lVar4 + 0x137);
        iVar3 = iStack_64;
        if (local_68 == '\x02') {
          iVar3 = 0;
        }
        local_res10[0] = local_res10[0] - iVar3;
        if (local_res10[0] < 0) {
          local_res10[0] = 0;
        }
        if ((this->Parameters).bCanLoop == false) {
          (this->Parameters).StartFrameOffset.Value = local_res10[0];
        }
        else {
          (this->Parameters).FirstLoopStartFrameOffset.Value = local_res10[0];
        }
        DestructItems<FMovieSceneNestedSequenceTransform,int>
                  ((FMovieSceneNestedSequenceTransform *)
                   local_48.NestedTransforms.AllocatorInstance.Data,
                   local_48.NestedTransforms.ArrayNum);
        if ((FMovieSceneNestedSequenceTransform *)local_48.NestedTransforms.AllocatorInstance.Data
            != (FMovieSceneNestedSequenceTransform *)0x0) {
          FMemory::Free(local_48.NestedTransforms.AllocatorInstance.Data);
        }
      }
      local_58.Time = param_1->Time;
      local_58.Rate = param_1->Rate;
      UMovieSceneSection::TrimSection((UMovieSceneSection *)this,&local_58,param_2,param_3);
    }
  }
  return;
}

// _getUObject @ 1462bfcb0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

UObject * __thiscall UMovieSceneSubSection::_getUObject(UMovieSceneSubSection *this)

{
  return (UObject *)&this[-1].Rotation[2]._padding_;
}

// execGetSequence @ 1462bfcf0

void __cdecl UMovieSceneSubSection::execGetSequence(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined8 *)param_3 = *(undefined8 *)&param_1[0x36].field_0x18;
  return;
}

// execSetSequence @ 1462bfd20

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __cdecl UMovieSceneSubSection::execSetSequence(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UMovieSceneSequence *pUVar2;
  bool bVar3;
  UClass *pUVar4;
  UMovieSceneSequence *this;
  UMovieSceneSequence *local_res10;
  
  local_res10 = (UMovieSceneSequence *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  pUVar2 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10 != (UMovieSceneSequence *)0x0) {
    pUVar4 = Z_Construct_UClass_UMovieSceneSequence_NoRegister();
    this = (UMovieSceneSequence *)
           UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)param_1,pUVar4);
    if ((this != (UMovieSceneSequence *)0x0) &&
       (bVar3 = UMovieSceneSequence::IsSubSequenceCompatible(this,pUVar2), !bVar3)) {
      return;
    }
  }
  bVar3 = UMovieSceneSection::TryModify((UMovieSceneSection *)param_1,true);
  if (bVar3) {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar2 != (UMovieSceneSequence *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar2);
    }
    *(UMovieSceneSequence **)&param_1[0x36].field_0x18 = pUVar2;
  }
  return;
}

