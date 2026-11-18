// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioMixer
// Functions: 18

// StaticClass @ 146535080

UClass * __cdecl UScrubbedSound::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UScrubbedSound.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioMixer",L"ScrubbedSound",
               &Z_Registration_Info_UClass_UScrubbedSound.InnerSingleton,
               StaticRegisterNativesUScrubbedSound,0x440,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UScrubbedSound>,
               InternalVTableHelperCtorCaller<UScrubbedSound>,local_res8,USoundWave::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UScrubbedSound.InnerSingleton;
}

// UScrubbedSound @ 14653e960

UScrubbedSound * __thiscall
UScrubbedSound::UScrubbedSound(UScrubbedSound *this,FVTableHelper *param_1)

{
  USoundWave::USoundWave((USoundWave *)this,param_1);
  this->bIsScrubbing = false;
  this->bScrubWhileStationary = true;
  this->PlayheadTimeSeconds = 0.0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IAudioPropertiesSheetAssetUserInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAudioProxyDataFactory__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  (this->GrainDurationRange).field0_0x0._s_0.X = 0.4000000059604645;
  (this->GrainDurationRange).field0_0x0._s_0.Y = 0.05000000074505806;
  this->StationaryTimeSeconds = 0.1;
  (this->SoundWaveScrubber).Object = (ISoundGenerator *)0x0;
  (this->SoundWaveScrubber).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->SoundWaveToScrub).field0_0x0.DebugPtr = (USoundWave *)0x0;
  return this;
}

// UScrubbedSound @ 14653ea10

UScrubbedSound * __thiscall
UScrubbedSound::UScrubbedSound(UScrubbedSound *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  
  USoundWave::USoundWave((USoundWave *)this,param_1);
  this->bIsScrubbing = false;
  this->bScrubWhileStationary = true;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 4);
  *pbVar1 = *pbVar1 | 1;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IAudioPropertiesSheetAssetUserInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAudioProxyDataFactory__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  (this->GrainDurationRange).field0_0x0._s_0.X = 0.4000000059604645;
  (this->GrainDurationRange).field0_0x0._s_0.Y = 0.05000000074505806;
  this->PlayheadTimeSeconds = 0.0;
  this->StationaryTimeSeconds = 0.1;
  (this->SoundWaveScrubber).Object = (ISoundGenerator *)0x0;
  (this->SoundWaveScrubber).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->SoundWaveToScrub).field0_0x0.DebugPtr = (USoundWave *)0x0;
  return this;
}

// ~UScrubbedSound @ 146541460

void __thiscall UScrubbedSound::~UScrubbedSound(UScrubbedSound *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IAudioPropertiesSheetAssetUserInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAudioProxyDataFactory__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SoundWaveScrubber).SharedReferenceCount.ReferenceController);
  USoundWave::~USoundWave((USoundWave *)this);
  return;
}

// CreateSoundGenerator @ 146550a90

TSharedPtr<ISoundGenerator,1> * __thiscall
UScrubbedSound::CreateSoundGenerator
          (UScrubbedSound *this,TSharedPtr<ISoundGenerator,1> *__return_storage_ptr__,
          FSoundGeneratorInitParams *param_1)

{
  TSharedPtr<ISoundGenerator,1> *pTVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  USoundWave *this_00;
  FSoundWaveScrubberGenerator *this_01;
  FSharedReferencer<1> FVar5;
  ISoundGenerator *this_02;
  TReferenceControllerBase<1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  ISoundGenerator *local_48;
  FSharedReferencer<1> local_40;
  TSharedPtr<FSoundWaveProxy,1> local_38;
  TSharedPtr<FSoundWaveProxy,1> local_28;
  
  this_00 = (this->SoundWaveToScrub).field0_0x0.DebugPtr;
  if (this_00 == (USoundWave *)0x0) {
    __return_storage_ptr__->Object = (ISoundGenerator *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    USoundWave::CreateSoundWaveProxy(this_00,&local_28);
    this_02 = ::operator_new(0x118);
    if (this_02 == (ISoundGenerator *)0x0) {
      this_02 = (ISoundGenerator *)0x0;
    }
    else {
      memset(this_02,0,0x118);
      ISoundGenerator::ISoundGenerator(this_02);
      this_02->_padding_ = (longlong)&___7FSoundWaveScrubberGenerator_Audio__6B_;
      *(undefined4 *)&this_02[1]._padding_ = 0;
      Audio::FSoundWaveScrubber::FSoundWaveScrubber((FSoundWaveScrubber *)&this_02[1].CommandQueue);
    }
    pTVar7 = (TReferenceControllerBase<1> *)0x0;
    local_48 = this_02;
    pTVar6 = ::operator_new(0x18);
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      pTVar6->SharedReferenceCount = (atomic<int>)0x1;
      pTVar6->_padding_ =
           (longlong)
           &
           ___7__TReferenceControllerWithDeleter_VFSoundWaveScrubberGenerator_Audio__U__DefaultDeleter_VFSoundWaveScrubberGenerator_Audio___SharedPointerInternals___00_SharedPointerInternals__6B_
      ;
      pTVar6->WeakReferenceCount = (atomic<int>)0x1;
      pTVar6[1]._padding_ = (longlong)this_02;
      pTVar7 = pTVar6;
    }
    pTVar1 = &this->SoundWaveScrubber;
    local_40.ReferenceController = pTVar7;
    if (pTVar1 != (TSharedPtr<ISoundGenerator,1> *)&local_48) {
      pTVar1->Object = this_02;
      local_48 = (ISoundGenerator *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->SoundWaveScrubber).SharedReferenceCount,&local_40);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_40.ReferenceController);
    FVar5.ReferenceController = local_28.SharedReferenceCount.ReferenceController;
    this_01 = (FSoundWaveScrubberGenerator *)pTVar1->Object;
    fVar2 = this->PlayheadTimeSeconds;
    iVar4 = *(int *)((longlong)&this->_padding_ + 4);
    fVar3 = param_1->SampleRate;
    local_38.Object = local_28.Object;
    local_38.SharedReferenceCount.ReferenceController =
         local_28.SharedReferenceCount.ReferenceController;
    if (local_28.SharedReferenceCount.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
      this_01->NumChannels = iVar4;
    }
    else {
      LOCK();
      (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
      this_01->NumChannels = iVar4;
      LOCK();
      (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    Audio::FSoundWaveScrubber::Init(&this_01->SoundWaveScrubber,&local_38,fVar3,iVar4,fVar2);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar5.ReferenceController);
    (this_01->SoundWaveScrubber).bIsScrubbing = this->bIsScrubbing;
    (this_01->SoundWaveScrubber).bIsScrubbingWhileStationary = this->bScrubWhileStationary;
    Audio::FSoundWaveScrubberGenerator::SetGrainDurationRange(this_01,&this->GrainDurationRange);
    __return_storage_ptr__->Object = pTVar1->Object;
    pTVar7 = (this->SoundWaveScrubber).SharedReferenceCount.ReferenceController;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar7;
    if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
  }
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14655a220

UClass * __cdecl UScrubbedSound::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UScrubbedSound.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioMixer",L"ScrubbedSound",
               &Z_Registration_Info_UClass_UScrubbedSound.InnerSingleton,
               StaticRegisterNativesUScrubbedSound,0x440,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UScrubbedSound>,
               InternalVTableHelperCtorCaller<UScrubbedSound>,local_res8,USoundWave::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UScrubbedSound.InnerSingleton;
}

// SetGrainDurationRange @ 146572f10

void __thiscall
UScrubbedSound::SetGrainDurationRange(UScrubbedSound *this,TVector2<double> *param_1)

{
  FSoundWaveScrubberGenerator *this_00;
  double dVar1;
  
  dVar1 = (param_1->field0_0x0)._s_0.Y;
  this_00 = (FSoundWaveScrubberGenerator *)(this->SoundWaveScrubber).Object;
  (this->GrainDurationRange).field0_0x0._s_0.X = (param_1->field0_0x0)._s_0.X;
  (this->GrainDurationRange).field0_0x0._s_0.Y = dVar1;
  if (this_00 != (FSoundWaveScrubberGenerator *)0x0) {
    Audio::FSoundWaveScrubberGenerator::SetGrainDurationRange(this_00,&this->GrainDurationRange);
    return;
  }
  return;
}

// SetIsScrubbing @ 146572fd0

void __thiscall UScrubbedSound::SetIsScrubbing(UScrubbedSound *this,bool param_1)

{
  ISoundGenerator *pIVar1;
  
  pIVar1 = (this->SoundWaveScrubber).Object;
  this->bIsScrubbing = param_1;
  if (pIVar1 != (ISoundGenerator *)0x0) {
    *(bool *)&pIVar1[0xb].CommandQueue.Head = param_1;
  }
  return;
}

// SetIsScrubbingWhileStationary @ 146573010

void __thiscall UScrubbedSound::SetIsScrubbingWhileStationary(UScrubbedSound *this,bool param_1)

{
  ISoundGenerator *pIVar1;
  
  pIVar1 = (this->SoundWaveScrubber).Object;
  this->bScrubWhileStationary = param_1;
  if (pIVar1 != (ISoundGenerator *)0x0) {
    pIVar1[0xb].CommandQueue.Head.field_0x2 = param_1;
  }
  return;
}

// SetPlayheadTime @ 146574220

void __thiscall UScrubbedSound::SetPlayheadTime(UScrubbedSound *this,float param_1)

{
  FNode **lpCriticalSection;
  ISoundGenerator *pIVar1;
  float fVar2;
  
  pIVar1 = (this->SoundWaveScrubber).Object;
  this->PlayheadTimeSeconds = param_1;
  if (pIVar1 != (ISoundGenerator *)0x0) {
    lpCriticalSection = &pIVar1[9].CommandQueue.Tail;
    if (lpCriticalSection == (FNode **)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if (param_1 <= 0.0) {
      param_1 = 0.0;
    }
    fVar2 = FGenericPlatformMath::Fmod(param_1,*(float *)&pIVar1[1].CommandQueue.Tail);
    *(float *)&pIVar1[2]._padding_ = fVar2;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return;
}

// SetSoundWave @ 146574740

void __thiscall UScrubbedSound::SetSoundWave(UScrubbedSound *this,USoundWave *param_1)

{
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (USoundWave *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  (this->SoundWaveToScrub).field0_0x0.DebugPtr = param_1;
  *(int *)((longlong)&this->_padding_ + 4) = param_1->NumChannels;
  return;
}

// StaticRegisterNativesUScrubbedSound @ 146577940

void __cdecl UScrubbedSound::StaticRegisterNativesUScrubbedSound(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 6;
  local_18.DataPtr = Z_Construct_UClass_UScrubbedSound_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetPlayheadTime @ 14657fea0

void __cdecl UScrubbedSound::execGetPlayheadTime(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)param_3 = *(undefined4 *)&param_1[0x19].field_0x20;
  return;
}

// execSetGrainDurationRange @ 146581a50

void __cdecl
UScrubbedSound::execSetGrainDurationRange(UObject *param_1,FFrame *param_2,void *param_3)

{
  UObject *pUVar1;
  FProperty *pFVar2;
  uchar uVar3;
  uchar uVar4;
  uchar uVar5;
  uchar uVar6;
  uchar uVar7;
  uchar uVar8;
  uchar uVar9;
  uchar uVar10;
  uchar uVar11;
  uchar uVar12;
  uchar uVar13;
  uchar uVar14;
  uchar uVar15;
  uchar uVar16;
  uchar uVar17;
  uchar *puVar18;
  uchar local_18 [16];
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_18,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_18);
  }
  pUVar1 = param_1 + 0x1a;
  puVar18 = local_18;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar18 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar3 = puVar18[1];
  uVar4 = puVar18[2];
  uVar5 = puVar18[3];
  uVar6 = puVar18[4];
  uVar7 = puVar18[5];
  uVar8 = puVar18[6];
  uVar9 = puVar18[7];
  uVar10 = puVar18[8];
  uVar11 = puVar18[9];
  uVar12 = puVar18[10];
  uVar13 = puVar18[0xb];
  uVar14 = puVar18[0xc];
  uVar15 = puVar18[0xd];
  uVar16 = puVar18[0xe];
  uVar17 = puVar18[0xf];
  pUVar1->field_0x0 = puVar18[0];
  pUVar1->field_0x1 = uVar3;
  pUVar1->field_0x2 = uVar4;
  pUVar1->field_0x3 = uVar5;
  pUVar1->field_0x4 = uVar6;
  pUVar1->field_0x5 = uVar7;
  pUVar1->field_0x6 = uVar8;
  pUVar1->field_0x7 = uVar9;
  param_1[0x1a].field_0x8 = uVar10;
  param_1[0x1a].field_0x9 = uVar11;
  param_1[0x1a].field_0xa = uVar12;
  param_1[0x1a].field_0xb = uVar13;
  param_1[0x1a].field_0xc = uVar14;
  param_1[0x1a].field_0xd = uVar15;
  param_1[0x1a].field_0xe = uVar16;
  param_1[0x1a].field_0xf = uVar17;
  if (*(FSoundWaveScrubberGenerator **)&param_1[0x1a].field_0x18 !=
      (FSoundWaveScrubberGenerator *)0x0) {
    Audio::FSoundWaveScrubberGenerator::SetGrainDurationRange
              (*(FSoundWaveScrubberGenerator **)&param_1[0x1a].field_0x18,(TVector2<double> *)pUVar1
              );
  }
  return;
}

// execSetIsScrubbing @ 146581b00

void __cdecl UScrubbedSound::execSetIsScrubbing(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res8 [2];
  
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  param_1[0x1a].field_0x10 = local_res8[0] != 0;
  if (*(longlong *)&param_1[0x1a].field_0x18 != 0) {
    *(bool *)(*(longlong *)&param_1[0x1a].field_0x18 + 0x110) = local_res8[0] != 0;
  }
  return;
}

// execSetIsScrubbingWhileStationary @ 146581ba0

void __cdecl
UScrubbedSound::execSetIsScrubbingWhileStationary(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res8 [2];
  
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  param_1[0x1a].field_0x11 = local_res8[0] != 0;
  if (*(longlong *)&param_1[0x1a].field_0x18 != 0) {
    *(bool *)(*(longlong *)&param_1[0x1a].field_0x18 + 0x112) = local_res8[0] != 0;
  }
  return;
}

// execSetPlayheadTime @ 146582320

void __cdecl UScrubbedSound::execSetPlayheadTime(UObject *param_1,FFrame *param_2,void *param_3)

{
  LPCRITICAL_SECTION lpCriticalSection;
  FProperty *pFVar1;
  longlong lVar2;
  float fVar3;
  float local_res8 [2];
  
  local_res8[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  fVar3 = local_res8[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar2 = *(longlong *)&param_1[0x1a].field_0x18;
  *(float *)&param_1[0x19].field_0x20 = local_res8[0];
  if (lVar2 != 0) {
    lpCriticalSection = (LPCRITICAL_SECTION)(lVar2 + 0xe8);
    if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection(lpCriticalSection);
    if (fVar3 <= 0.0) {
      fVar3 = 0.0;
    }
    fVar3 = FGenericPlatformMath::Fmod(fVar3,*(float *)(lVar2 + 0x28));
    *(float *)(lVar2 + 0x30) = fVar3;
    LeaveCriticalSection(lpCriticalSection);
  }
  return;
}

// execSetSoundWave @ 146582d00

void __cdecl UScrubbedSound::execSetSoundWave(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UObject *pUVar2;
  UObject *local_res8;
  
  local_res8 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  pUVar2 = local_res8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res8);
  }
  *(UObject **)(param_1 + 0x1b) = pUVar2;
  *(undefined4 *)&param_1[0x16].field_0x14 = *(undefined4 *)&pUVar2[0x16].field_0x14;
  return;
}

