// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 9

// StaticClass @ 1461e7fe0

UClass * __cdecl UMovieSceneBoolSection::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneBoolSection.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneBoolSection",
               &Z_Registration_Info_UClass_UMovieSceneBoolSection.InnerSingleton,
               StaticRegisterNativesUMovieSceneBoolSection,0x238,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMovieSceneBoolSection>,
               InternalVTableHelperCtorCaller<UMovieSceneBoolSection>,local_res8,
               UMovieSceneSection::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneBoolSection.InnerSingleton;
}

// UMovieSceneBoolSection @ 1461fd860

UMovieSceneBoolSection * __thiscall
UMovieSceneBoolSection::UMovieSceneBoolSection(UMovieSceneBoolSection *this,FVTableHelper *param_1)

{
  UMovieSceneSection::UMovieSceneSection((UMovieSceneSection *)this,param_1);
  this->_padding_ = (longlong)&___7UMovieSceneBoolSection__6B_;
  FMovieSceneBoolChannel::FMovieSceneBoolChannel(&this->BoolCurve);
  return this;
}

// UMovieSceneBoolSection @ 1461fd8a0

UMovieSceneBoolSection * __thiscall
UMovieSceneBoolSection::UMovieSceneBoolSection
          (UMovieSceneBoolSection *this,FObjectInitializer *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  byte bVar4;
  uint local_res8;
  uint local_res18;
  FGuid local_18;
  
  UMovieSceneSection::UMovieSceneSection((UMovieSceneSection *)this,param_1);
  this->DefaultValue_DEPRECATED = false;
  this->_padding_ = (longlong)&___7UMovieSceneBoolSection__6B_;
  FMovieSceneBoolChannel::FMovieSceneBoolChannel(&this->BoolCurve);
  local_res8 = CONCAT31(local_res8._1_3_,2);
  local_res18 = CONCAT31(local_res18._1_3_,2);
  *(undefined1 *)&this->_padding_ = 1;
  if (((char)this->_padding_ == '\x02') && ((char)this->_padding_ == '\x02')) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if ((((uint)this->_padding_ >> 1 & 1) == 0) && (bVar1)) {
    bVar4 = 1;
    if (((uint)this->_padding_ >> 9 & 1) == 0) {
      bVar4 = ~(byte)((uint)this->_padding_ >> 1) & 1;
    }
    if (bVar4 != 0) {
      local_18.D = 0;
      local_18.C = local_res18;
      this->_padding_ = (ulonglong)local_res8;
      this->_padding_ = local_18._8_8_;
    }
  }
  local_18 = FSequencerObjectVersion::GUID;
  iVar3 = UObjectBaseUtility::GetLinkerCustomVersion((UObjectBaseUtility *)this,&local_18);
  if (iVar3 < 4) {
    cVar2 = '\0';
  }
  else {
    local_18 = FSequencerObjectVersion::GUID;
    iVar3 = UObjectBaseUtility::GetLinkerCustomVersion((UObjectBaseUtility *)this,&local_18);
    cVar2 = (5 < iVar3) + '\x01';
  }
  *(undefined1 *)&this->_padding_ = 1;
  *(char *)((longlong)&this->_padding_ + 1) = cVar2;
  ReconstructChannelProxy(this);
  return this;
}

// ~UMovieSceneBoolSection @ 1461ffa80

void __thiscall UMovieSceneBoolSection::~UMovieSceneBoolSection(UMovieSceneBoolSection *this)

{
  this->_padding_ = (longlong)&___7UMovieSceneBoolSection__6B_;
  FMovieSceneBoolChannel::~FMovieSceneBoolChannel(&this->BoolCurve);
  this->_padding_ = (longlong)&___7UMovieSceneSection__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)this->_padding_);
  UMovieSceneDecorationContainerObject::~UMovieSceneDecorationContainerObject
            ((UMovieSceneDecorationContainerObject *)this);
  return;
}

// GetPrivateStaticClass @ 14621b7b0

UClass * __cdecl UMovieSceneBoolSection::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneBoolSection.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneBoolSection",
               &Z_Registration_Info_UClass_UMovieSceneBoolSection.InnerSingleton,
               StaticRegisterNativesUMovieSceneBoolSection,0x238,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMovieSceneBoolSection>,
               InternalVTableHelperCtorCaller<UMovieSceneBoolSection>,local_res8,
               UMovieSceneSection::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneBoolSection.InnerSingleton;
}

// PostEditImport @ 1462282d0

void __thiscall UMovieSceneBoolSection::PostEditImport(UMovieSceneBoolSection *this)

{
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  if ((char)this->_padding_ == '\x01') {
    local_18 = 0;
    FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (&this->_padding_ != &local_18) {
      this->_padding_ = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                ((FSharedReferencer<1> *)&this->_padding_,&FStack_10);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_10.ReferenceController);
  }
  ReconstructChannelProxy(this);
  return;
}

// PostLoad @ 1462287d0

void __thiscall UMovieSceneBoolSection::PostLoad(UMovieSceneBoolSection *this)

{
  bool bVar1;
  
  if (((this->BoolCurve).bHasDefaultValue == false) &&
     (bVar1 = this->DefaultValue_DEPRECATED, bVar1 != false)) {
    (this->BoolCurve).bHasDefaultValue = true;
    (this->BoolCurve).DefaultValue = bVar1;
  }
  UObject::PostLoad((UObject *)this);
  return;
}

// ReconstructChannelProxy @ 14622a9f0

void __thiscall UMovieSceneBoolSection::ReconstructChannelProxy(UMovieSceneBoolSection *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  TReferenceControllerBase<1> *local_18;
  FSharedReferencer<1> local_10;
  
  pTVar6 = ::operator_new(0x68);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar7 = (TReferenceControllerBase<1> *)&DAT_00000010;
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFMovieSceneChannelProxy___00_SharedPointerInternals__6B_
    ;
    FMovieSceneChannelProxy::FMovieSceneChannelProxy<FMovieSceneBoolChannel>
              ((FMovieSceneChannelProxy *)(pTVar6 + 1),&this->BoolCurve);
    pTVar7 = pTVar6 + 1;
    if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      goto LAB_14622aaf0;
    }
  }
  if (((pTVar7->_padding_ == 0) || (*(longlong *)&pTVar7->SharedReferenceCount == 0)) ||
     (*(int *)(*(longlong *)&pTVar7->SharedReferenceCount + 8) < 1)) {
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar7->_padding_ = (longlong)pTVar7;
    if (pTVar6 != *(TReferenceControllerBase<1> **)&pTVar7->SharedReferenceCount) {
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = *(longlong **)&pTVar7->SharedReferenceCount;
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
      *(TReferenceControllerBase<1> **)&pTVar7->SharedReferenceCount = pTVar6;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
LAB_14622aaf0:
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_18 = pTVar7;
  local_10.ReferenceController = pTVar6;
  if ((TReferenceControllerBase<1> **)&this->_padding_ != &local_18) {
    this->_padding_ = (longlong)pTVar7;
    local_18 = (TReferenceControllerBase<1> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&this->_padding_,&local_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_10.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  return;
}

// StaticRegisterNativesUMovieSceneBoolSection @ 146237bb0

void __cdecl UMovieSceneBoolSection::StaticRegisterNativesUMovieSceneBoolSection(void)

{
  return;
}

