// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 6

// StaticClass @ 146726a80

UClass * __cdecl UMovieSceneParticleSection::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneParticleSection.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneParticleSection",
               &Z_Registration_Info_UClass_UMovieSceneParticleSection.InnerSingleton,
               StaticRegisterNativesUMovieSceneParticleSection,0x238,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneParticleSection>,
               InternalVTableHelperCtorCaller<UMovieSceneParticleSection>,local_res8,
               UMovieSceneSection::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneParticleSection.InnerSingleton;
}

// UMovieSceneParticleSection @ 146765da0

UMovieSceneParticleSection * __thiscall
UMovieSceneParticleSection::UMovieSceneParticleSection
          (UMovieSceneParticleSection *this,FVTableHelper *param_1)

{
  UMovieSceneSection::UMovieSceneSection((UMovieSceneSection *)this,param_1);
  this->_padding_ = (longlong)&___7UMovieSceneParticleSection__6B_;
  FMovieSceneParticleChannel::FMovieSceneParticleChannel(&this->ParticleKeys);
  return this;
}

// UMovieSceneParticleSection @ 146765de0

UMovieSceneParticleSection * __thiscall
UMovieSceneParticleSection::UMovieSceneParticleSection
          (UMovieSceneParticleSection *this,FObjectInitializer *param_1)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  TReferenceControllerBase<1> *pTVar7;
  UMovieSceneParticleSection *pUVar8;
  TReferenceControllerBase<1> *pTVar9;
  uint local_res8;
  uint local_res18;
  TReferenceControllerBase<1> *local_58;
  FSharedReferencer<1> local_50;
  TRange<FFrameNumber> local_48;
  FGuid local_38;
  FGuid local_28;
  
  UMovieSceneSection::UMovieSceneSection((UMovieSceneSection *)this,param_1);
  this->_padding_ = (longlong)&___7UMovieSceneParticleSection__6B_;
  FMovieSceneParticleChannel::FMovieSceneParticleChannel(&this->ParticleKeys);
  local_res8 = CONCAT31(local_res8._1_3_,2);
  local_48.LowerBound.Value.Value = 0;
  local_48.LowerBound._0_4_ = local_res8;
  local_res18 = CONCAT31(local_res18._1_3_,2);
  local_48.UpperBound.Value.Value = 0;
  local_48.UpperBound._0_4_ = local_res18;
  UMovieSceneSection::SetRange((UMovieSceneSection *)this,&local_48);
  local_38 = FSequencerObjectVersion::GUID;
  iVar6 = UObjectBaseUtility::GetLinkerCustomVersion((UObjectBaseUtility *)this,&local_38);
  if (iVar6 < 4) {
    cVar4 = '\0';
  }
  else {
    local_28 = FSequencerObjectVersion::GUID;
    iVar6 = UObjectBaseUtility::GetLinkerCustomVersion((UObjectBaseUtility *)this,&local_28);
    cVar4 = (5 < iVar6) + '\x01';
  }
  *(undefined1 *)&this->_padding_ = 1;
  *(char *)((longlong)&this->_padding_ + 1) = cVar4;
  pTVar7 = ::operator_new(0x68);
  if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
    pTVar9 = (TReferenceControllerBase<1> *)&DAT_00000010;
    pTVar7 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar7->SharedReferenceCount = (atomic<int>)0x1;
    pTVar7->WeakReferenceCount = (atomic<int>)0x1;
    pTVar7->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFMovieSceneChannelProxy___00_SharedPointerInternals__6B_
    ;
    FMovieSceneChannelProxy::FMovieSceneChannelProxy<FMovieSceneParticleChannel>
              ((FMovieSceneChannelProxy *)(pTVar7 + 1),&this->ParticleKeys);
    pTVar9 = pTVar7 + 1;
    if (pTVar9 == (TReferenceControllerBase<1> *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        pUVar8 = (UMovieSceneParticleSection *)(*pcVar3)();
        return pUVar8;
      }
      goto LAB_146765f94;
    }
  }
  if (((pTVar9->_padding_ == 0) || (*(longlong *)&pTVar9->SharedReferenceCount == 0)) ||
     (*(int *)(*(longlong *)&pTVar9->SharedReferenceCount + 8) < 1)) {
    if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar9->_padding_ = (longlong)pTVar9;
    if (pTVar7 != *(TReferenceControllerBase<1> **)&pTVar9->SharedReferenceCount) {
      if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar7->WeakReferenceCount = (atomic<int>)((int)pTVar7->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar2 = *(longlong **)&pTVar9->SharedReferenceCount;
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        iVar6 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*plVar2 + 8))(plVar2,1);
        }
      }
      *(TReferenceControllerBase<1> **)&pTVar9->SharedReferenceCount = pTVar7;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  }
LAB_146765f94:
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_58 = pTVar9;
  local_50.ReferenceController = pTVar7;
  if ((TReferenceControllerBase<1> **)&this->_padding_ != &local_58) {
    this->_padding_ = (longlong)pTVar9;
    local_58 = (TReferenceControllerBase<1> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&this->_padding_,&local_50);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_50.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  return this;
}

// ~UMovieSceneParticleSection @ 14676ab70

void __thiscall
UMovieSceneParticleSection::~UMovieSceneParticleSection(UMovieSceneParticleSection *this)

{
  this->_padding_ = (longlong)&___7UMovieSceneParticleSection__6B_;
  FMovieSceneByteChannel::~FMovieSceneByteChannel((FMovieSceneByteChannel *)&this->ParticleKeys);
  UMovieSceneSection::~UMovieSceneSection((UMovieSceneSection *)this);
  return;
}

// GetPrivateStaticClass @ 1467993a0

UClass * __cdecl UMovieSceneParticleSection::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneParticleSection.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneParticleSection",
               &Z_Registration_Info_UClass_UMovieSceneParticleSection.InnerSingleton,
               StaticRegisterNativesUMovieSceneParticleSection,0x238,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneParticleSection>,
               InternalVTableHelperCtorCaller<UMovieSceneParticleSection>,local_res8,
               UMovieSceneSection::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneParticleSection.InnerSingleton;
}

// StaticRegisterNativesUMovieSceneParticleSection @ 1467c2a20

void __cdecl UMovieSceneParticleSection::StaticRegisterNativesUMovieSceneParticleSection(void)

{
  return;
}

