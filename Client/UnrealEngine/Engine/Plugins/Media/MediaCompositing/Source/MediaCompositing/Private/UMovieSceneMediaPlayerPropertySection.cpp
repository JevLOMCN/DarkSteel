// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaCompositing
// Functions: 6

// StaticClass @ 14ea62a70

UClass * __cdecl UMovieSceneMediaPlayerPropertySection::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneMediaPlayerPropertySection.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MediaCompositing",L"MovieSceneMediaPlayerPropertySection",
               &Z_Registration_Info_UClass_UMovieSceneMediaPlayerPropertySection.InnerSingleton,
               StaticRegisterNativesUMovieSceneMediaPlayerPropertySection,0x120,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneMediaPlayerPropertySection>,
               InternalVTableHelperCtorCaller<UMovieSceneMediaPlayerPropertySection>,local_res8,
               UMovieSceneSection::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneMediaPlayerPropertySection.InnerSingleton;
}

// UMovieSceneMediaPlayerPropertySection @ 14ea677d0

UMovieSceneMediaPlayerPropertySection * __thiscall
UMovieSceneMediaPlayerPropertySection::UMovieSceneMediaPlayerPropertySection
          (UMovieSceneMediaPlayerPropertySection *this,FVTableHelper *param_1)

{
  UMovieSceneSection::UMovieSceneSection((UMovieSceneSection *)this,param_1);
  this->_padding_ = (longlong)&___7UMovieSceneMediaPlayerPropertySection__6B_;
  (this->MediaSource).field0_0x0.DebugPtr = (UMediaSource *)0x0;
  return this;
}

// UMovieSceneMediaPlayerPropertySection @ 14ea67810

UMovieSceneMediaPlayerPropertySection * __thiscall
UMovieSceneMediaPlayerPropertySection::UMovieSceneMediaPlayerPropertySection
          (UMovieSceneMediaPlayerPropertySection *this,FObjectInitializer *param_1)

{
  UClass *pUVar1;
  UObject *pUVar2;
  undefined8 uVar3;
  int iVar4;
  double dVar5;
  undefined1 in_XMM2 [16];
  undefined1 auVar6 [16];
  double dVar7;
  float fVar8;
  float fVar9;
  
  UMovieSceneSection::UMovieSceneSection((UMovieSceneSection *)this,param_1);
  *(undefined1 *)((longlong)&this->_padding_ + 1) = 1;
  this->_padding_ = (longlong)&___7UMovieSceneMediaPlayerPropertySection__6B_;
  (this->MediaSource).field0_0x0.DebugPtr = (UMediaSource *)0x0;
  this->bLoop = false;
  pUVar1 = Z_Construct_UClass_UMovieScene_NoRegister();
  pUVar2 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar1);
  if (pUVar2 == (UObject *)0x0) {
    uVar3 = 0x100000018;
  }
  else {
    uVar3 = *(undefined8 *)&pUVar2[7].field_0x20;
  }
  dVar7 = ((double)(int)uVar3 * __real_3fe0000000000000) / (double)(int)((ulonglong)uVar3 >> 0x20);
  auVar6._8_8_ = 0;
  auVar6._0_8_ = dVar7;
  auVar6 = roundpd(in_XMM2,auVar6,1);
  dVar5 = auVar6._0_8_;
  dVar7 = dVar7 - dVar5;
  if (__real_41dfffffffc00000 <= dVar5) {
    dVar5 = __real_41dfffffffc00000;
  }
  if (dVar5 <= __real_c1e0000000000000) {
    dVar5 = __real_c1e0000000000000;
  }
  iVar4 = (int)dVar7;
  fVar8 = (float)dVar7 - (float)iVar4;
  fVar9 = fVar8;
  if ((0.0 < fVar8) && (fVar9 = ::FFrameTime::MaxSubframe, fVar8 <= ::FFrameTime::MaxSubframe)) {
    fVar9 = fVar8;
  }
  fVar8 = ::FFrameTime::MaxSubframe;
  if (fVar9 <= ::FFrameTime::MaxSubframe) {
    fVar8 = fVar9;
  }
  if (fVar8 <= 0.0) {
    fVar8 = 0.0;
  }
  iVar4 = (int)dVar5 + iVar4;
  if (__real_3f000000 <= fVar8) {
    iVar4 = iVar4 + 1;
  }
  *(int *)&this->_padding_ = iVar4;
  return this;
}

// ~UMovieSceneMediaPlayerPropertySection @ 14ea68140

void __thiscall
UMovieSceneMediaPlayerPropertySection::~UMovieSceneMediaPlayerPropertySection
          (UMovieSceneMediaPlayerPropertySection *this)

{
  this->_padding_ = (longlong)&___7UMovieSceneMediaPlayerPropertySection__6B_;
  UMovieSceneSection::~UMovieSceneSection((UMovieSceneSection *)this);
  return;
}

// GetPrivateStaticClass @ 14ea6c820

UClass * __cdecl UMovieSceneMediaPlayerPropertySection::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneMediaPlayerPropertySection.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MediaCompositing",L"MovieSceneMediaPlayerPropertySection",
               &Z_Registration_Info_UClass_UMovieSceneMediaPlayerPropertySection.InnerSingleton,
               StaticRegisterNativesUMovieSceneMediaPlayerPropertySection,0x120,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneMediaPlayerPropertySection>,
               InternalVTableHelperCtorCaller<UMovieSceneMediaPlayerPropertySection>,local_res8,
               UMovieSceneSection::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneMediaPlayerPropertySection.InnerSingleton;
}

// StaticRegisterNativesUMovieSceneMediaPlayerPropertySection @ 14ea70350

void __cdecl
UMovieSceneMediaPlayerPropertySection::StaticRegisterNativesUMovieSceneMediaPlayerPropertySection
          (void)

{
  return;
}

