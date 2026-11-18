// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 7

// StaticClass @ 146269100

UClass * __cdecl UTestMovieSceneSubTrack::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTestMovieSceneSubTrack.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"TestMovieSceneSubTrack",
               &Z_Registration_Info_UClass_UTestMovieSceneSubTrack.InnerSingleton,
               StaticRegisterNativesUTestMovieSceneSubTrack,0x138,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UTestMovieSceneSubTrack>,
               InternalVTableHelperCtorCaller<UTestMovieSceneSubTrack>,local_res8,
               UMovieSceneSubTrack::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTestMovieSceneSubTrack.InnerSingleton;
}

// UTestMovieSceneSubTrack @ 14629b480

UTestMovieSceneSubTrack * __thiscall
UTestMovieSceneSubTrack::UTestMovieSceneSubTrack
          (UTestMovieSceneSubTrack *this,FVTableHelper *param_1)

{
  UMovieSceneNameableTrack::UMovieSceneNameableTrack((UMovieSceneNameableTrack *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneDecorationContainerObject__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneTrackVirtualAPI__;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->SectionArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SectionArray).ArrayNum = 0;
  (this->SectionArray).ArrayMax = 0;
  return this;
}

// UTestMovieSceneSubTrack @ 14629b4d0

UTestMovieSceneSubTrack * __thiscall
UTestMovieSceneSubTrack::UTestMovieSceneSubTrack
          (UTestMovieSceneSubTrack *this,FObjectInitializer *param_1)

{
  UMovieSceneNameableTrack::UMovieSceneNameableTrack((UMovieSceneNameableTrack *)this,param_1);
  *(undefined1 *)&this->_padding_ = 1;
  this->_padding_ =
       (longlong)&UMovieSceneSubTrack::_vftable__for__UMovieSceneDecorationContainerObject__;
  this->_padding_ = (longlong)&UMovieSceneSubTrack::_vftable__for__IMovieSceneTrackVirtualAPI__;
  this->_padding_ = 0;
  this->_padding_ = 0;
  FMovieSceneBlendTypeField::Add((FMovieSceneBlendTypeField *)&this->_padding_,Absolute);
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneDecorationContainerObject__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneTrackVirtualAPI__;
  (this->SectionArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SectionArray).ArrayNum = 0;
  (this->SectionArray).ArrayMax = 0;
  return this;
}

// ~UTestMovieSceneSubTrack @ 14629c100

void __thiscall UTestMovieSceneSubTrack::~UTestMovieSceneSubTrack(UTestMovieSceneSubTrack *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneDecorationContainerObject__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneTrackVirtualAPI__;
  pFVar1 = (this->SectionArray).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ =
       (longlong)&UMovieSceneSubTrack::_vftable__for__UMovieSceneDecorationContainerObject__;
  this->_padding_ = (longlong)&UMovieSceneSubTrack::_vftable__for__IMovieSceneTrackVirtualAPI__;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  UMovieSceneNameableTrack::~UMovieSceneNameableTrack((UMovieSceneNameableTrack *)this);
  return;
}

// GetAllSections @ 1462ae900

TArray<UMovieSceneSection_*,TSizedDefaultAllocator<32>_> * __thiscall
UTestMovieSceneSubTrack::GetAllSections(UTestMovieSceneSubTrack *this)

{
  return (TArray<UMovieSceneSection_*,TSizedDefaultAllocator<32>_> *)&this->SectionArray;
}

// GetPrivateStaticClass @ 1462b0290

UClass * __cdecl UTestMovieSceneSubTrack::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTestMovieSceneSubTrack.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"TestMovieSceneSubTrack",
               &Z_Registration_Info_UClass_UTestMovieSceneSubTrack.InnerSingleton,
               StaticRegisterNativesUTestMovieSceneSubTrack,0x138,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UTestMovieSceneSubTrack>,
               InternalVTableHelperCtorCaller<UTestMovieSceneSubTrack>,local_res8,
               UMovieSceneSubTrack::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTestMovieSceneSubTrack.InnerSingleton;
}

// StaticRegisterNativesUTestMovieSceneSubTrack @ 1462bdf00

void __cdecl UTestMovieSceneSubTrack::StaticRegisterNativesUTestMovieSceneSubTrack(void)

{
  return;
}

