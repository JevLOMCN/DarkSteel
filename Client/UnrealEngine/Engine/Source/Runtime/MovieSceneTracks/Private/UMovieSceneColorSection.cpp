// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 10

// StaticClass @ 146723070

UClass * __cdecl UMovieSceneColorSection::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneColorSection.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneColorSection",
               &Z_Registration_Info_UClass_UMovieSceneColorSection.InnerSingleton,
               StaticRegisterNativesUMovieSceneColorSection,0x5b8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMovieSceneColorSection>,
               InternalVTableHelperCtorCaller<UMovieSceneColorSection>,local_res8,
               UMovieSceneSection::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneColorSection.InnerSingleton;
}

// UMovieSceneColorSection @ 146762bf0

UMovieSceneColorSection * __thiscall
UMovieSceneColorSection::UMovieSceneColorSection
          (UMovieSceneColorSection *this,FVTableHelper *param_1)

{
  UMovieSceneSection::UMovieSceneSection((UMovieSceneSection *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneSection__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneEntityProvider__;
  FMovieSceneFloatChannel::FMovieSceneFloatChannel(&this->RedCurve);
  FMovieSceneFloatChannel::FMovieSceneFloatChannel(&this->GreenCurve);
  FMovieSceneFloatChannel::FMovieSceneFloatChannel(&this->BlueCurve);
  FMovieSceneFloatChannel::FMovieSceneFloatChannel(&this->AlphaCurve);
  return this;
}

// UMovieSceneColorSection @ 146762c60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

UMovieSceneColorSection * __thiscall
UMovieSceneColorSection::UMovieSceneColorSection
          (UMovieSceneColorSection *this,FObjectInitializer *param_1)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  TReferenceControllerBase<1> *pTVar7;
  UMovieSceneColorSection *pUVar8;
  ForElementType<FMovieSceneChannelEntry> FVar9;
  TReferenceControllerBase<1> *pTVar10;
  TReferenceControllerBase<1> *pTVar11;
  undefined1 auStack_a8 [32];
  TReferenceControllerBase<1> *local_88;
  FSharedReferencer<1> local_80;
  FGuid local_78;
  FGuid local_68;
  FMovieSceneChannelProxyData local_58;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_a8;
  UMovieSceneSection::UMovieSceneSection((UMovieSceneSection *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneSection__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneEntityProvider__;
  FMovieSceneFloatChannel::FMovieSceneFloatChannel(&this->RedCurve);
  FMovieSceneFloatChannel::FMovieSceneFloatChannel(&this->GreenCurve);
  FMovieSceneFloatChannel::FMovieSceneFloatChannel(&this->BlueCurve);
  FMovieSceneFloatChannel::FMovieSceneFloatChannel(&this->AlphaCurve);
  local_78 = FSequencerObjectVersion::GUID;
  iVar6 = UObjectBaseUtility::GetLinkerCustomVersion((UObjectBaseUtility *)this,&local_78);
  if (iVar6 < 4) {
    cVar4 = '\0';
  }
  else {
    local_68 = FSequencerObjectVersion::GUID;
    iVar6 = UObjectBaseUtility::GetLinkerCustomVersion((UObjectBaseUtility *)this,&local_68);
    cVar4 = (5 < iVar6) + '\x01';
  }
  *(undefined1 *)&this->_padding_ = 1;
  *(char *)((longlong)&this->_padding_ + 1) = cVar4;
  pTVar10 = (TReferenceControllerBase<1> *)0x0;
  *(undefined2 *)((longlong)&this->_padding_ + 1) = 0x101;
  local_58.Entries.AllocatorInstance.SecondaryData = (ForElementType<FMovieSceneChannelEntry>)0x0;
  local_58.Entries.ArrayNum = 0;
  *(undefined1 *)&this->_padding_ = 1;
  local_58.Entries.ArrayMax = 1;
  FMovieSceneChannelProxyData::AddInternal<FMovieSceneFloatChannel>(&local_58,&this->RedCurve);
  FMovieSceneChannelProxyData::AddInternal<FMovieSceneFloatChannel>(&local_58,&this->GreenCurve);
  FMovieSceneChannelProxyData::AddInternal<FMovieSceneFloatChannel>(&local_58,&this->BlueCurve);
  FMovieSceneChannelProxyData::AddInternal<FMovieSceneFloatChannel>(&local_58,&this->AlphaCurve);
  pTVar7 = ::operator_new(0x68);
  if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
    pTVar11 = (TReferenceControllerBase<1> *)&DAT_00000010;
  }
  else {
    pTVar7->SharedReferenceCount = (atomic<int>)0x1;
    pTVar7->WeakReferenceCount = (atomic<int>)0x1;
    pTVar7->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFMovieSceneChannelProxy___00_SharedPointerInternals__6B_
    ;
    pTVar7[1]._padding_ = 0;
    pTVar7[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[2]._padding_ = 0;
    pTVar7[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[3]._padding_ = 0;
    pTVar7[3].SharedReferenceCount = (atomic<int>)0x2;
    pTVar7[3].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[5].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[5].WeakReferenceCount = (atomic<int>)0x0;
    if (local_58.Entries.AllocatorInstance.SecondaryData ==
        (ForElementType<FMovieSceneChannelEntry>)0x0) {
      memmove(pTVar7 + 4,&local_58,0x18);
    }
    if (*(void **)&pTVar7[5].SharedReferenceCount != (void *)0x0) {
      FMemory::Free(*(void **)&pTVar7[5].SharedReferenceCount);
    }
    pTVar11 = pTVar7 + 1;
    *(ForElementType<FMovieSceneChannelEntry> *)&pTVar7[5].SharedReferenceCount =
         local_58.Entries.AllocatorInstance.SecondaryData;
    local_58.Entries.AllocatorInstance.SecondaryData = (ForElementType<FMovieSceneChannelEntry>)0x0;
    *(int *)&pTVar7[6]._padding_ = local_58.Entries.ArrayNum;
    *(int *)((longlong)&pTVar7[6]._padding_ + 4) = local_58.Entries.ArrayMax;
    local_58.Entries.ArrayNum = 0;
    local_58.Entries.ArrayMax = 1;
    pTVar10 = pTVar7;
    if (pTVar11 == (TReferenceControllerBase<1> *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        pUVar8 = (UMovieSceneColorSection *)(*pcVar3)();
        return pUVar8;
      }
      goto LAB_146762ec7;
    }
  }
  if (((pTVar11->_padding_ == 0) || (*(longlong *)&pTVar11->SharedReferenceCount == 0)) ||
     (*(int *)(*(longlong *)&pTVar11->SharedReferenceCount + 8) < 1)) {
    if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar11->_padding_ = (longlong)pTVar11;
    if (pTVar10 != *(TReferenceControllerBase<1> **)&pTVar11->SharedReferenceCount) {
      if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar10->WeakReferenceCount = (atomic<int>)((int)pTVar10->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar2 = *(longlong **)&pTVar11->SharedReferenceCount;
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
      *(TReferenceControllerBase<1> **)&pTVar11->SharedReferenceCount = pTVar10;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  }
LAB_146762ec7:
  if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_88 = pTVar11;
  local_80.ReferenceController = pTVar10;
  if ((TReferenceControllerBase<1> **)&this->_padding_ != &local_88) {
    this->_padding_ = (longlong)pTVar11;
    local_88 = (TReferenceControllerBase<1> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&this->_padding_,&local_80);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_80.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  FVar9 = (ForElementType<FMovieSceneChannelEntry>)&local_58;
  if (local_58.Entries.AllocatorInstance.SecondaryData !=
      (ForElementType<FMovieSceneChannelEntry>)0x0) {
    FVar9 = local_58.Entries.AllocatorInstance.SecondaryData;
  }
  DestructItems<FMovieSceneChannelEntry,int>
            ((FMovieSceneChannelEntry *)FVar9,local_58.Entries.ArrayNum);
  if (local_58.Entries.AllocatorInstance.SecondaryData !=
      (ForElementType<FMovieSceneChannelEntry>)0x0) {
    FMemory::Free((void *)local_58.Entries.AllocatorInstance.SecondaryData);
  }
  return this;
}

// ~UMovieSceneColorSection @ 14676a070

void __thiscall UMovieSceneColorSection::~UMovieSceneColorSection(UMovieSceneColorSection *this)

{
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneSection__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneEntityProvider__;
  FMovieSceneFloatChannel::~FMovieSceneFloatChannel(&this->AlphaCurve);
  FMovieSceneFloatChannel::~FMovieSceneFloatChannel(&this->BlueCurve);
  FMovieSceneFloatChannel::~FMovieSceneFloatChannel(&this->GreenCurve);
  FMovieSceneFloatChannel::~FMovieSceneFloatChannel(&this->RedCurve);
  this->_padding_ = (longlong)&___7IMovieSceneEntityProvider__6B_;
  UMovieSceneSection::~UMovieSceneSection((UMovieSceneSection *)this);
  return;
}

// GetKeyStruct @ 146795280

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TSharedPtr<FStructOnScope,1> * __thiscall
UMovieSceneColorSection::GetKeyStruct
          (UMovieSceneColorSection *this,TSharedPtr<FStructOnScope,1> *__return_storage_ptr__,
          TArrayView<FKeyHandle_const_,int> *param_1)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  FStructOnScope *this_00;
  UPackage *pUVar5;
  longlong lVar6;
  TSharedPtr<FStructOnScope,1> *pTVar7;
  TMovieSceneChannelHandle<FMovieSceneFloatChannel> *pTVar8;
  FMovieSceneChannelValueHelper *pFVar9;
  TOptional<FFrameNumber> TVar10;
  undefined4 uVar11;
  undefined1 auStack_278 [32];
  FKeyHandle *local_258;
  int iStack_250;
  undefined4 uStack_24c;
  TRawPtrProxy<FStructOnScope> local_248;
  TSharedRef<FStructOnScope,1> local_240;
  TArrayView<FKeyHandle_const_,int> local_228;
  TArrayView<FKeyHandle_const_,int> local_218;
  TArrayView<FKeyHandle_const_,int> local_208;
  TArrayView<FKeyHandle_const_,int> local_1f8;
  undefined1 local_1e8 [32];
  undefined1 local_1c8 [32];
  undefined1 local_1a8 [32];
  undefined1 local_188 [32];
  FMovieSceneChannelValueHelper *local_168 [8];
  byte local_128;
  FMovieSceneChannelValueHelper *local_120 [8];
  byte local_e0;
  FMovieSceneChannelValueHelper *local_d8 [8];
  byte local_98;
  FMovieSceneChannelValueHelper *local_90 [8];
  byte local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_278;
  if (this->_padding_ == 0) {
    UMovieSceneSection::GetChannelProxy((UMovieSceneSection *)this);
  }
  this_00 = ::operator_new(0x28);
  local_248.Object = (FStructOnScope *)0x0;
  uVar11 = 0;
  if (this_00 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FMovieSceneColorKeyStruct.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar5 = Z_Construct_UPackage__Script_MovieSceneTracks();
      Z_Registration_Info_UScriptStruct_FMovieSceneColorKeyStruct.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneColorKeyStruct,(UObject *)pUVar5,
                           L"MovieSceneColorKeyStruct");
    }
    local_248.Object =
         FStructOnScope::FStructOnScope
                   (this_00,(UStruct *)
                            Z_Registration_Info_UScriptStruct_FMovieSceneColorKeyStruct.
                            OuterSingleton);
  }
  TSharedRef<FStructOnScope,1>::TSharedRef<FStructOnScope,1><FStructOnScope>(&local_240,&local_248);
  lVar6 = (**(code **)((local_240.Object)->_padding_ + 0x18))();
  local_258 = param_1->DataPtr;
  iStack_250 = param_1->ArrayNum;
  uStack_24c = *(undefined4 *)&param_1->field_0xc;
  if ((this->_padding_ == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar7 = (TSharedPtr<FStructOnScope,1> *)(*pcVar3)();
    return pTVar7;
  }
  pTVar8 = FMovieSceneChannelProxy::MakeHandle<FMovieSceneFloatChannel>
                     ((FMovieSceneChannelProxy *)this->_padding_,
                      (TMovieSceneChannelHandle<FMovieSceneFloatChannel> *)local_1e8,0);
  local_228.DataPtr = local_258;
  local_228.ArrayNum = iStack_250;
  local_228._12_4_ = uStack_24c;
  pFVar9 = FMovieSceneChannelValueHelper::
           FMovieSceneChannelValueHelper<FMovieSceneFloatChannel,float>
                     ((FMovieSceneChannelValueHelper *)local_168,pTVar8,(float *)(lVar6 + 8),
                      &local_228);
  FMovieSceneKeyStructHelper::Add((FMovieSceneKeyStructHelper *)(lVar6 + 0x20),pFVar9);
  if ((local_128 & 1) != 0) {
    pFVar9 = (FMovieSceneChannelValueHelper *)local_168;
    if ((local_128 & 2) == 0) {
      pFVar9 = local_168[0];
    }
    local_128 = local_128 & 0xfe;
    (**(code **)((*(FMovieSceneChannelValueHelper **)(pFVar9->Impl).Data.Pad)->Impl).Data.Pad)
              (pFVar9,0);
    if ((local_128 & 2) == 0) {
      FMemory::Free(local_168[0]);
    }
  }
  if ((longlong *)local_1e8._8_8_ != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)(local_1e8._8_8_ + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*(longlong *)local_1e8._8_8_ + 8))(local_1e8._8_8_,1);
    }
  }
  local_258 = param_1->DataPtr;
  iStack_250 = param_1->ArrayNum;
  uStack_24c = *(undefined4 *)&param_1->field_0xc;
  if ((this->_padding_ == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar7 = (TSharedPtr<FStructOnScope,1> *)(*pcVar3)();
    return pTVar7;
  }
  pTVar8 = FMovieSceneChannelProxy::MakeHandle<FMovieSceneFloatChannel>
                     ((FMovieSceneChannelProxy *)this->_padding_,
                      (TMovieSceneChannelHandle<FMovieSceneFloatChannel> *)local_1c8,1);
  local_218.DataPtr = local_258;
  local_218.ArrayNum = iStack_250;
  local_218._12_4_ = uStack_24c;
  pFVar9 = FMovieSceneChannelValueHelper::
           FMovieSceneChannelValueHelper<FMovieSceneFloatChannel,float>
                     ((FMovieSceneChannelValueHelper *)local_120,pTVar8,(float *)(lVar6 + 0xc),
                      &local_218);
  FMovieSceneKeyStructHelper::Add((FMovieSceneKeyStructHelper *)(lVar6 + 0x20),pFVar9);
  if ((local_e0 & 1) != 0) {
    pFVar9 = (FMovieSceneChannelValueHelper *)local_120;
    if ((local_e0 & 2) == 0) {
      pFVar9 = local_120[0];
    }
    local_e0 = local_e0 & 0xfe;
    (**(code **)((*(FMovieSceneChannelValueHelper **)(pFVar9->Impl).Data.Pad)->Impl).Data.Pad)
              (pFVar9,0);
    if ((local_e0 & 2) == 0) {
      FMemory::Free(local_120[0]);
    }
  }
  if ((longlong *)local_1c8._8_8_ != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)(local_1c8._8_8_ + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*(longlong *)local_1c8._8_8_ + 8))(local_1c8._8_8_,1);
    }
  }
  local_258 = param_1->DataPtr;
  iStack_250 = param_1->ArrayNum;
  uStack_24c = *(undefined4 *)&param_1->field_0xc;
  if ((this->_padding_ == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar7 = (TSharedPtr<FStructOnScope,1> *)(*pcVar3)();
    return pTVar7;
  }
  pTVar8 = FMovieSceneChannelProxy::MakeHandle<FMovieSceneFloatChannel>
                     ((FMovieSceneChannelProxy *)this->_padding_,
                      (TMovieSceneChannelHandle<FMovieSceneFloatChannel> *)local_1a8,2);
  local_208.DataPtr = local_258;
  local_208.ArrayNum = iStack_250;
  local_208._12_4_ = uStack_24c;
  pFVar9 = FMovieSceneChannelValueHelper::
           FMovieSceneChannelValueHelper<FMovieSceneFloatChannel,float>
                     ((FMovieSceneChannelValueHelper *)local_d8,pTVar8,(float *)(lVar6 + 0x10),
                      &local_208);
  FMovieSceneKeyStructHelper::Add((FMovieSceneKeyStructHelper *)(lVar6 + 0x20),pFVar9);
  if ((local_98 & 1) != 0) {
    pFVar9 = (FMovieSceneChannelValueHelper *)local_d8;
    if ((local_98 & 2) == 0) {
      pFVar9 = local_d8[0];
    }
    local_98 = local_98 & 0xfe;
    (**(code **)((*(FMovieSceneChannelValueHelper **)(pFVar9->Impl).Data.Pad)->Impl).Data.Pad)
              (pFVar9,0);
    if ((local_98 & 2) == 0) {
      FMemory::Free(local_d8[0]);
    }
  }
  if ((longlong *)local_1a8._8_8_ != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)(local_1a8._8_8_ + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*(longlong *)local_1a8._8_8_ + 8))(local_1a8._8_8_,1);
    }
  }
  local_258 = param_1->DataPtr;
  iStack_250 = param_1->ArrayNum;
  uStack_24c = *(undefined4 *)&param_1->field_0xc;
  if ((this->_padding_ == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar7 = (TSharedPtr<FStructOnScope,1> *)(*pcVar3)();
    return pTVar7;
  }
  pTVar8 = FMovieSceneChannelProxy::MakeHandle<FMovieSceneFloatChannel>
                     ((FMovieSceneChannelProxy *)this->_padding_,
                      (TMovieSceneChannelHandle<FMovieSceneFloatChannel> *)local_188,3);
  local_1f8.DataPtr = local_258;
  local_1f8.ArrayNum = iStack_250;
  local_1f8._12_4_ = uStack_24c;
  pFVar9 = FMovieSceneChannelValueHelper::
           FMovieSceneChannelValueHelper<FMovieSceneFloatChannel,float>
                     ((FMovieSceneChannelValueHelper *)local_90,pTVar8,(float *)(lVar6 + 0x14),
                      &local_1f8);
  FMovieSceneKeyStructHelper::Add((FMovieSceneKeyStructHelper *)(lVar6 + 0x20),pFVar9);
  if ((local_50 & 1) != 0) {
    pFVar9 = (FMovieSceneChannelValueHelper *)local_90;
    if ((local_50 & 2) == 0) {
      pFVar9 = local_90[0];
    }
    local_50 = local_50 & 0xfe;
    (**(code **)((*(FMovieSceneChannelValueHelper **)(pFVar9->Impl).Data.Pad)->Impl).Data.Pad)
              (pFVar9,0);
    if ((local_50 & 2) == 0) {
      FMemory::Free(local_90[0]);
    }
  }
  if ((longlong *)local_188._8_8_ != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)(local_188._8_8_ + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*(longlong *)local_188._8_8_ + 8))(local_188._8_8_,1);
    }
  }
  FMovieSceneKeyStructHelper::SetStartingValues((FMovieSceneKeyStructHelper *)(lVar6 + 0x20));
  TVar10 = FMovieSceneKeyStructHelper::GetUnifiedKeyTime
                     ((FMovieSceneKeyStructHelper *)(lVar6 + 0x20));
  if (*(char *)((longlong)TVar10 + 4) != '\0') {
    uVar11 = *(undefined4 *)TVar10;
  }
  *(undefined4 *)(lVar6 + 0x18) = uVar11;
  __return_storage_ptr__->Object = local_240.Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       local_240.SharedReferenceCount.ReferenceController;
  if (local_240.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_240.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_240.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_240.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 146797f60

UClass * __cdecl UMovieSceneColorSection::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneColorSection.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneColorSection",
               &Z_Registration_Info_UClass_UMovieSceneColorSection.InnerSingleton,
               StaticRegisterNativesUMovieSceneColorSection,0x5b8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMovieSceneColorSection>,
               InternalVTableHelperCtorCaller<UMovieSceneColorSection>,local_res8,
               UMovieSceneSection::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneColorSection.InnerSingleton;
}

// ImportEntityImpl @ 14679d9f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
UMovieSceneColorSection::ImportEntityImpl
          (UMovieSceneColorSection *this,UMovieSceneEntitySystemLinker *param_1,
          FEntityImportParams *param_2,FImportedEntity *param_3)

{
  bool bVar1;
  FBuiltInComponentTypes *pFVar2;
  FMovieSceneTracksComponentTypes *pFVar3;
  TPropertyTrackEntityImportHelperImpl<UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
  *this_00;
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
  undefined2 uStack_c6;
  TComponentTypeID<UE::MovieScene::FSourceFloatChannel> local_b0;
  undefined1 uStack_ae;
  undefined1 uStack_ad;
  TPropertyTrackEntityImportHelperImpl<UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
  local_98;
  
  if ((((((int)this->_padding_ != 0) || (*(char *)((longlong)&this->_padding_ + 4) == '\x01')) ||
       ((this->RedCurve).DefaultValue != 0.0)) ||
      (((this->RedCurve).KeyHandles.field_0x14 == '\x01' || ((this->GreenCurve).DefaultValue != 0.0)
       ))) || (((this->GreenCurve).KeyHandles.field_0x14 == '\x01' ||
               (((this->BlueCurve).DefaultValue != 0.0 ||
                ((this->BlueCurve).KeyHandles.field_0x14 == '\x01')))))) {
    pFVar2 = UE::MovieScene::FBuiltInComponentTypes::Get();
    pFVar3 = UE::MovieScene::FMovieSceneTracksComponentTypes::Get();
    local_140 = (pFVar3->Color).PropertyTag.Value;
    if (((int)this->_padding_ == 0) && (*(char *)((longlong)&this->_padding_ + 4) != '\x01')) {
      uStack_de = 0;
    }
    else {
      uStack_de = 1;
    }
    local_118 = &(this->RedCurve)._padding_;
    local_130 = &this->_padding_;
    local_e0 = pFVar2->FloatChannel[0];
    if (((this->RedCurve).DefaultValue == 0.0) && ((this->RedCurve).KeyHandles.field_0x14 != '\x01')
       ) {
      uStack_c6._0_1_ = 0;
    }
    else {
      uStack_c6._0_1_ = 1;
    }
    local_100 = &(this->GreenCurve)._padding_;
    local_c8 = pFVar2->FloatChannel[1];
    if (((this->GreenCurve).DefaultValue == 0.0) &&
       ((this->GreenCurve).KeyHandles.field_0x14 != '\x01')) {
      uStack_ae = 0;
    }
    else {
      uStack_ae = 1;
    }
    local_138 = _local_e0;
    local_120 = _local_c8;
    local_b0 = pFVar2->FloatChannel[2];
    local_res8 = (FMovieSceneFloatChannel *)&(this->BlueCurve)._padding_;
    local_108 = _local_b0;
    local_148 = &
                ___7__TEntityBuilder_UFAdd_MovieScene_UE__U__TAddConditional_UFSourceFloatChannel_MovieScene_UE___23_U423_U423__MovieScene_UE__6B_
    ;
    local_128 = 1;
    local_110 = 1;
    local_f8 = 1;
    local_f0 = 0;
    if (((this->BlueCurve).DefaultValue == 0.0) &&
       ((this->BlueCurve).KeyHandles.field_0x14 != '\x01')) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    local_e8.Value = local_140;
    this_00 = UE::MovieScene::
              TPropertyTrackEntityImportHelperImpl<UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
              ::AddConditional<UE::MovieScene::FSourceFloatChannel,FMovieSceneFloatChannel_*>
                        ((TPropertyTrackEntityImportHelperImpl<UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
                          *)&local_148,&local_98,pFVar2->FloatChannel[3],&local_res8,bVar1);
    UE::MovieScene::
    TPropertyTrackEntityImportHelperImpl<UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
    ::Commit(this_00,(UMovieSceneSection *)&this[-1].AlphaCurve._padding_,param_2,param_3);
  }
  return;
}

// PopulateEvaluationFieldImpl @ 1467b12c0

bool __thiscall
UMovieSceneColorSection::PopulateEvaluationFieldImpl
          (UMovieSceneColorSection *this,TRange<FFrameNumber> *param_1,
          FMovieSceneEvaluationFieldEntityMetaData *param_2,
          FMovieSceneEntityComponentFieldBuilder *param_3)

{
  FMovieScenePropertyTrackEntityImportHelper::PopulateEvaluationField
            ((UMovieSceneSection *)&this[-1].AlphaCurve._padding_,param_1,param_2,param_3);
  return true;
}

// StaticRegisterNativesUMovieSceneColorSection @ 1467c27b0

void __cdecl UMovieSceneColorSection::StaticRegisterNativesUMovieSceneColorSection(void)

{
  return;
}

// _getUObject @ 1467ca710

UObject * __thiscall UMovieSceneColorSection::_getUObject(UMovieSceneColorSection *this)

{
  return (UObject *)&this[-1].AlphaCurve._padding_;
}

