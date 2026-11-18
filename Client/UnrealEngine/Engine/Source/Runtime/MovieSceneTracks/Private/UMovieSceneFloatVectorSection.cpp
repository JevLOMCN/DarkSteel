// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 14

// StaticClass @ 146721f80

UClass * __cdecl UMovieSceneFloatVectorSection::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneFloatVectorSection.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneFloatVectorSection",
               &Z_Registration_Info_UClass_UMovieSceneFloatVectorSection.InnerSingleton,
               StaticRegisterNativesUMovieSceneFloatVectorSection,0x5c0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneFloatVectorSection>,
               InternalVTableHelperCtorCaller<UMovieSceneFloatVectorSection>,local_res8,
               UMovieSceneSection::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneFloatVectorSection.InnerSingleton;
}

// UMovieSceneFloatVectorSection @ 146765540

UMovieSceneFloatVectorSection * __thiscall
UMovieSceneFloatVectorSection::UMovieSceneFloatVectorSection
          (UMovieSceneFloatVectorSection *this,FVTableHelper *param_1)

{
  UMovieSceneSection::UMovieSceneSection((UMovieSceneSection *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneSection__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneEntityProvider__;
  FMovieSceneFloatChannel::FMovieSceneFloatChannel(this->Curves);
  FMovieSceneFloatChannel::FMovieSceneFloatChannel(this->Curves + 1);
  FMovieSceneFloatChannel::FMovieSceneFloatChannel(this->Curves + 2);
  FMovieSceneFloatChannel::FMovieSceneFloatChannel(this->Curves + 3);
  return this;
}

// UMovieSceneFloatVectorSection @ 1467655b0

UMovieSceneFloatVectorSection * __thiscall
UMovieSceneFloatVectorSection::UMovieSceneFloatVectorSection
          (UMovieSceneFloatVectorSection *this,FObjectInitializer *param_1)

{
  char cVar1;
  int iVar2;
  FGuid local_18;
  
  UMovieSceneSection::UMovieSceneSection((UMovieSceneSection *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneSection__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneEntityProvider__;
  FMovieSceneFloatChannel::FMovieSceneFloatChannel(this->Curves);
  FMovieSceneFloatChannel::FMovieSceneFloatChannel(this->Curves + 1);
  FMovieSceneFloatChannel::FMovieSceneFloatChannel(this->Curves + 2);
  FMovieSceneFloatChannel::FMovieSceneFloatChannel(this->Curves + 3);
  this->ChannelsUsed = 0;
  *(undefined1 *)&this->_padding_ = 1;
  local_18 = FSequencerObjectVersion::GUID;
  iVar2 = UObjectBaseUtility::GetLinkerCustomVersion((UObjectBaseUtility *)this,&local_18);
  if (iVar2 < 4) {
    cVar1 = '\0';
  }
  else {
    local_18 = FSequencerObjectVersion::GUID;
    iVar2 = UObjectBaseUtility::GetLinkerCustomVersion((UObjectBaseUtility *)this,&local_18);
    cVar1 = (5 < iVar2) + '\x01';
  }
  *(char *)((longlong)&this->_padding_ + 1) = cVar1;
  *(undefined1 *)&this->_padding_ = 1;
  *(undefined2 *)((longlong)&this->_padding_ + 1) = 0x101;
  return this;
}

// ~UMovieSceneFloatVectorSection @ 14676a8c0

void __thiscall
UMovieSceneFloatVectorSection::~UMovieSceneFloatVectorSection(UMovieSceneFloatVectorSection *this)

{
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneSection__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneEntityProvider__;
  FMovieSceneFloatChannel::~FMovieSceneFloatChannel(this->Curves + 3);
  FMovieSceneFloatChannel::~FMovieSceneFloatChannel(this->Curves + 2);
  FMovieSceneFloatChannel::~FMovieSceneFloatChannel(this->Curves + 1);
  FMovieSceneFloatChannel::~FMovieSceneFloatChannel(this->Curves);
  this->_padding_ = (longlong)&___7IMovieSceneEntityProvider__6B_;
  UMovieSceneSection::~UMovieSceneSection((UMovieSceneSection *)this);
  return;
}

// GetKeyStruct @ 146795b40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TSharedPtr<FStructOnScope,1> * __thiscall
UMovieSceneFloatVectorSection::GetKeyStruct
          (UMovieSceneFloatVectorSection *this,TSharedPtr<FStructOnScope,1> *__return_storage_ptr__,
          TArrayView<FKeyHandle_const_,int> *param_1)

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
      if (Z_Registration_Info_UScriptStruct_FMovieSceneVector2fKeyStruct.OuterSingleton ==
          (UScriptStruct *)0x0) {
        pUVar9 = Z_Construct_UPackage__Script_MovieSceneTracks();
        Z_Registration_Info_UScriptStruct_FMovieSceneVector2fKeyStruct.OuterSingleton =
             GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneVector2fKeyStruct,
                             (UObject *)pUVar9,L"MovieSceneVector2fKeyStruct");
      }
      local_118.Object =
           FStructOnScope::FStructOnScope
                     (pFVar8,(UStruct *)
                             Z_Registration_Info_UScriptStruct_FMovieSceneVector2fKeyStruct.
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
      if (Z_Registration_Info_UScriptStruct_FMovieSceneVector3fKeyStruct.OuterSingleton ==
          (UScriptStruct *)0x0) {
        pUVar9 = Z_Construct_UPackage__Script_MovieSceneTracks();
        Z_Registration_Info_UScriptStruct_FMovieSceneVector3fKeyStruct.OuterSingleton =
             GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneVector3fKeyStruct,
                             (UObject *)pUVar9,L"MovieSceneVector3fKeyStruct");
      }
      local_110.Object =
           FStructOnScope::FStructOnScope
                     (pFVar8,(UStruct *)
                             Z_Registration_Info_UScriptStruct_FMovieSceneVector3fKeyStruct.
                             OuterSingleton);
      pTVar15 = &local_110;
    }
  }
  else {
    if (iVar2 != 4) goto LAB_146795cdf;
    pFVar8 = ::operator_new(0x28);
    local_108.Object = pFVar17;
    if (pFVar8 != (FStructOnScope *)0x0) {
      if (Z_Registration_Info_UScriptStruct_FMovieSceneVector4fKeyStruct.OuterSingleton ==
          (UScriptStruct *)0x0) {
        pUVar9 = Z_Construct_UPackage__Script_MovieSceneTracks();
        Z_Registration_Info_UScriptStruct_FMovieSceneVector4fKeyStruct.OuterSingleton =
             GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneVector4fKeyStruct,
                             (UObject *)pUVar9,L"MovieSceneVector4fKeyStruct");
      }
      local_108.Object =
           FStructOnScope::FStructOnScope
                     (pFVar8,(UStruct *)
                             Z_Registration_Info_UScriptStruct_FMovieSceneVector4fKeyStruct.
                             OuterSingleton);
    }
    pTVar15 = &local_108;
  }
  TSharedPtr<FStructOnScope,1>::operator=<FStructOnScope>(__return_storage_ptr__,pTVar15);
LAB_146795cdf:
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
        pUVar12 = FMovieSceneFloatChannel::StaticStruct();
        this_02 = FMovieSceneChannelProxy::MakeHandle
                            (this_01,&local_a8,(FName)pUVar12->_padding_,(int)pFVar17);
        pUVar12 = FMovieSceneFloatChannel::StaticStruct();
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
                  FMovieSceneChannelValueHelper<FMovieSceneFloatChannel,float>
                            ((FMovieSceneChannelValueHelper *)local_88,
                             (TMovieSceneChannelHandle<FMovieSceneFloatChannel> *)&local_c8,
                             (float *)local_138,&local_d8);
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

// GetPrivateStaticClass @ 146798f20

UClass * __cdecl UMovieSceneFloatVectorSection::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneFloatVectorSection.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneFloatVectorSection",
               &Z_Registration_Info_UClass_UMovieSceneFloatVectorSection.InnerSingleton,
               StaticRegisterNativesUMovieSceneFloatVectorSection,0x5c0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneFloatVectorSection>,
               InternalVTableHelperCtorCaller<UMovieSceneFloatVectorSection>,local_res8,
               UMovieSceneSection::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneFloatVectorSection.InnerSingleton;
}

// ImportEntityImpl @ 14679fb10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
UMovieSceneFloatVectorSection::ImportEntityImpl
          (UMovieSceneFloatVectorSection *this,UMovieSceneEntitySystemLinker *param_1,
          FEntityImportParams *param_2,FImportedEntity *param_3)

{
  int iVar1;
  FBuiltInComponentTypes *pFVar2;
  FMovieSceneTracksComponentTypes *pFVar3;
  TPropertyTrackEntityImportHelperImpl<UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
  *this_00;
  bool bVar4;
  FMovieSceneFloatChannel *local_res8;
  undefined **local_148;
  ushort local_140;
  undefined4 local_138;
  longlong *local_130;
  undefined1 local_128;
  undefined4 local_120;
  longlong *local_118;
  undefined1 local_110;
  undefined4 local_108;
  longlong *local_100;
  undefined1 local_f8;
  undefined1 local_f0;
  FComponentTypeID local_e8;
  TComponentTypeID<UE::MovieScene::FSourceFloatChannel> local_e0;
  undefined1 uStack_de;
  undefined1 uStack_dd;
  TComponentTypeID<UE::MovieScene::FSourceFloatChannel> local_c8;
  undefined1 uStack_c6;
  undefined1 uStack_c5;
  TComponentTypeID<UE::MovieScene::FSourceFloatChannel> local_b0;
  undefined1 uStack_ae;
  undefined1 uStack_ad;
  TPropertyTrackEntityImportHelperImpl<UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
  local_98;
  
  if ((0 < (int)this->Curves[3]._padding_) &&
     ((((((int)this->_padding_ != 0 || (*(char *)((longlong)&this->_padding_ + 4) == '\x01')) ||
        (this->Curves[0].DefaultValue != 0.0)) ||
       ((this->Curves[0].KeyHandles.field_0x14 == '\x01' || (this->Curves[1].DefaultValue != 0.0))))
      || ((this->Curves[1].KeyHandles.field_0x14 == '\x01' ||
          ((this->Curves[2].DefaultValue != 0.0 || (this->Curves[2].KeyHandles.field_0x14 == '\x01')
           ))))))) {
    pFVar2 = UE::MovieScene::FBuiltInComponentTypes::Get();
    pFVar3 = UE::MovieScene::FMovieSceneTracksComponentTypes::Get();
    iVar1 = (int)this->Curves[3]._padding_;
    local_140 = (pFVar3->FloatVector).PropertyTag.Value;
    if ((iVar1 < 1) ||
       (((int)this->_padding_ == 0 && (*(char *)((longlong)&this->_padding_ + 4) != '\x01')))) {
      uStack_de = 0;
    }
    else {
      uStack_de = 1;
    }
    local_130 = &this->_padding_;
    local_e0 = pFVar2->FloatChannel[0];
    if ((iVar1 < 2) ||
       ((this->Curves[0].DefaultValue == 0.0 && (this->Curves[0].KeyHandles.field_0x14 != '\x01'))))
    {
      uStack_c6 = 0;
    }
    else {
      uStack_c6 = 1;
    }
    local_118 = &this->Curves[0]._padding_;
    local_c8 = pFVar2->FloatChannel[1];
    if ((iVar1 < 3) ||
       ((this->Curves[1].DefaultValue == 0.0 && (this->Curves[1].KeyHandles.field_0x14 != '\x01'))))
    {
      uStack_ae = 0;
    }
    else {
      uStack_ae = 1;
    }
    local_138 = _local_e0;
    local_120 = _local_c8;
    local_b0 = pFVar2->FloatChannel[2];
    local_108 = _local_b0;
    local_100 = &this->Curves[1]._padding_;
    local_148 = &
                ___7__TEntityBuilder_UFAdd_MovieScene_UE__U__TAddConditional_UFSourceFloatChannel_MovieScene_UE___23_U423_U423__MovieScene_UE__6B_
    ;
    local_128 = 1;
    local_110 = 1;
    local_f8 = 1;
    local_f0 = 0;
    if ((iVar1 < 4) ||
       ((this->Curves[2].DefaultValue == 0.0 && (this->Curves[2].KeyHandles.field_0x14 != '\x01'))))
    {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    local_res8 = (FMovieSceneFloatChannel *)&this->Curves[2]._padding_;
    local_e8.Value = local_140;
    this_00 = UE::MovieScene::
              TPropertyTrackEntityImportHelperImpl<UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
              ::AddConditional<UE::MovieScene::FSourceFloatChannel,FMovieSceneFloatChannel_*>
                        ((TPropertyTrackEntityImportHelperImpl<UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
                          *)&local_148,&local_98,pFVar2->FloatChannel[3],&local_res8,bVar4);
    UE::MovieScene::
    TPropertyTrackEntityImportHelperImpl<UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
    ::Commit(this_00,(UMovieSceneSection *)&this[-1].Curves[3]._padding_,param_2,param_3);
  }
  return;
}

// PopulateEvaluationFieldImpl @ 1467b1620

bool __thiscall
UMovieSceneFloatVectorSection::PopulateEvaluationFieldImpl
          (UMovieSceneFloatVectorSection *this,TRange<FFrameNumber> *param_1,
          FMovieSceneEvaluationFieldEntityMetaData *param_2,
          FMovieSceneEntityComponentFieldBuilder *param_3)

{
  FMovieScenePropertyTrackEntityImportHelper::PopulateEvaluationField
            ((UMovieSceneSection *)&this[-1].Curves[3]._padding_,param_1,param_2,param_3);
  return true;
}

// PostEditImport @ 1467b1f30

void __thiscall UMovieSceneFloatVectorSection::PostEditImport(UMovieSceneFloatVectorSection *this)

{
  UMovieSceneSection::PostEditImport((UMovieSceneSection *)this);
  RecreateChannelProxy(this);
  return;
}

// RecreateChannelProxy @ 1467b52e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UMovieSceneFloatVectorSection::RecreateChannelProxy(UMovieSceneFloatVectorSection *this)

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
                       ,0xbc,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pTVar6 = pTVar9;
  if (0 < this->ChannelsUsed) {
    do {
      FMovieSceneChannelProxyData::AddInternal<FMovieSceneFloatChannel>
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
      goto LAB_1467b54d6;
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
LAB_1467b54d6:
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

// Serialize @ 1467c1430

void __thiscall
UMovieSceneFloatVectorSection::Serialize(UMovieSceneFloatVectorSection *this,FArchive *param_1)

{
  UMovieSceneSection::Serialize((UMovieSceneSection *)this,param_1);
  if ((param_1->field_0x28 & 1) != 0) {
    RecreateChannelProxy(this);
  }
  return;
}

// Serialize @ 1467c1470

void __thiscall
UMovieSceneFloatVectorSection::Serialize
          (UMovieSceneFloatVectorSection *this,FStructuredArchiveRecord param_1)

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

// StaticRegisterNativesUMovieSceneFloatVectorSection @ 1467c2960

void __cdecl UMovieSceneFloatVectorSection::StaticRegisterNativesUMovieSceneFloatVectorSection(void)

{
  return;
}

// _getUObject @ 1467ca7f0

UObject * __thiscall UMovieSceneFloatVectorSection::_getUObject(UMovieSceneFloatVectorSection *this)

{
  return (UObject *)&this[-1].Curves[3]._padding_;
}

