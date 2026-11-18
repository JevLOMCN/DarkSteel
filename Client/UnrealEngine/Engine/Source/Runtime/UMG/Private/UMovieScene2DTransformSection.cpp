// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 13

// StaticClass @ 1468db800

UClass * __cdecl UMovieScene2DTransformSection::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieScene2DTransformSection.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"MovieScene2DTransformSection",
               &Z_Registration_Info_UClass_UMovieScene2DTransformSection.InnerSingleton,
               StaticRegisterNativesUMovieScene2DTransformSection,0x938,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieScene2DTransformSection>,
               InternalVTableHelperCtorCaller<UMovieScene2DTransformSection>,local_res8,
               UMovieSceneSection::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieScene2DTransformSection.InnerSingleton;
}

// UMovieScene2DTransformSection @ 146901620

UMovieScene2DTransformSection * __thiscall
UMovieScene2DTransformSection::UMovieScene2DTransformSection
          (UMovieScene2DTransformSection *this,FVTableHelper *param_1)

{
  UMovieSceneSection::UMovieSceneSection((UMovieSceneSection *)this,param_1);
  (this->TransformMask).Mask = 0;
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneSection__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneEntityProvider__;
  FMovieSceneFloatChannel::FMovieSceneFloatChannel(this->Translation);
  FMovieSceneFloatChannel::FMovieSceneFloatChannel(this->Translation + 1);
  FMovieSceneFloatChannel::FMovieSceneFloatChannel(&this->Rotation);
  FMovieSceneFloatChannel::FMovieSceneFloatChannel(this->Scale);
  FMovieSceneFloatChannel::FMovieSceneFloatChannel(this->Scale + 1);
  FMovieSceneFloatChannel::FMovieSceneFloatChannel(this->Shear);
  FMovieSceneFloatChannel::FMovieSceneFloatChannel(this->Shear + 1);
  return this;
}

// UMovieScene2DTransformSection @ 1469016c0

UMovieScene2DTransformSection * __thiscall
UMovieScene2DTransformSection::UMovieScene2DTransformSection
          (UMovieScene2DTransformSection *this,FObjectInitializer *param_1)

{
  char cVar1;
  int iVar2;
  FGuid local_18;
  
  UMovieSceneSection::UMovieSceneSection((UMovieSceneSection *)this,param_1);
  (this->TransformMask).Mask = 0;
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneSection__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneEntityProvider__;
  FMovieSceneFloatChannel::FMovieSceneFloatChannel(this->Translation);
  FMovieSceneFloatChannel::FMovieSceneFloatChannel(this->Translation + 1);
  FMovieSceneFloatChannel::FMovieSceneFloatChannel(&this->Rotation);
  FMovieSceneFloatChannel::FMovieSceneFloatChannel(this->Scale);
  FMovieSceneFloatChannel::FMovieSceneFloatChannel(this->Scale + 1);
  FMovieSceneFloatChannel::FMovieSceneFloatChannel(this->Shear);
  FMovieSceneFloatChannel::FMovieSceneFloatChannel(this->Shear + 1);
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
  (this->TransformMask).Mask = 0x7f;
  *(undefined2 *)((longlong)&this->_padding_ + 1) = 0x101;
  *(undefined1 *)&this->_padding_ = 1;
  return this;
}

// ~UMovieScene2DTransformSection @ 146904a30

void __thiscall
UMovieScene2DTransformSection::~UMovieScene2DTransformSection(UMovieScene2DTransformSection *this)

{
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneSection__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneEntityProvider__;
  FMovieSceneFloatChannel::~FMovieSceneFloatChannel(this->Shear + 1);
  FMovieSceneFloatChannel::~FMovieSceneFloatChannel(this->Shear);
  FMovieSceneFloatChannel::~FMovieSceneFloatChannel(this->Scale + 1);
  FMovieSceneFloatChannel::~FMovieSceneFloatChannel(this->Scale);
  FMovieSceneFloatChannel::~FMovieSceneFloatChannel(&this->Rotation);
  FMovieSceneFloatChannel::~FMovieSceneFloatChannel(this->Translation + 1);
  FMovieSceneFloatChannel::~FMovieSceneFloatChannel(this->Translation);
  this->_padding_ = (longlong)&___7IMovieSceneEntityProvider__6B_;
  UMovieSceneSection::~UMovieSceneSection((UMovieSceneSection *)this);
  return;
}

// CacheChannelProxy @ 14690e360

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

EMovieSceneChannelProxyType __thiscall
UMovieScene2DTransformSection::CacheChannelProxy(UMovieScene2DTransformSection *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  EMovieSceneChannelProxyType EVar6;
  TReferenceControllerBase<1> *pTVar7;
  ForElementType<FMovieSceneChannelEntry> FVar8;
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
  FMovieSceneChannelProxyData::AddInternal<FMovieSceneFloatChannel>(&local_58,this->Translation);
  FMovieSceneChannelProxyData::AddInternal<FMovieSceneFloatChannel>(&local_58,this->Translation + 1)
  ;
  FMovieSceneChannelProxyData::AddInternal<FMovieSceneFloatChannel>(&local_58,&this->Rotation);
  FMovieSceneChannelProxyData::AddInternal<FMovieSceneFloatChannel>(&local_58,this->Scale);
  FMovieSceneChannelProxyData::AddInternal<FMovieSceneFloatChannel>(&local_58,this->Scale + 1);
  FMovieSceneChannelProxyData::AddInternal<FMovieSceneFloatChannel>(&local_58,this->Shear);
  FMovieSceneChannelProxyData::AddInternal<FMovieSceneFloatChannel>(&local_58,this->Shear + 1);
  pTVar7 = ::operator_new(0x68);
  if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
    pTVar10 = (TReferenceControllerBase<1> *)&DAT_00000010;
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
    pTVar10 = pTVar7 + 1;
    *(ForElementType<FMovieSceneChannelEntry> *)&pTVar7[5].SharedReferenceCount =
         local_58.Entries.AllocatorInstance.SecondaryData;
    local_58.Entries.AllocatorInstance.SecondaryData = (ForElementType<FMovieSceneChannelEntry>)0x0;
    *(int *)&pTVar7[6]._padding_ = local_58.Entries.ArrayNum;
    *(int *)((longlong)&pTVar7[6]._padding_ + 4) = local_58.Entries.ArrayMax;
    local_58.Entries.ArrayNum = 0;
    local_58.Entries.ArrayMax = 1;
    pTVar9 = pTVar7;
    if (pTVar10 == (TReferenceControllerBase<1> *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        EVar6 = (*pcVar4)();
        return EVar6;
      }
      goto LAB_14690e55a;
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
LAB_14690e55a:
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
  FVar8 = (ForElementType<FMovieSceneChannelEntry>)&local_58;
  if (local_58.Entries.AllocatorInstance.SecondaryData !=
      (ForElementType<FMovieSceneChannelEntry>)0x0) {
    FVar8 = local_58.Entries.AllocatorInstance.SecondaryData;
  }
  DestructItems<FMovieSceneChannelEntry,int>
            ((FMovieSceneChannelEntry *)FVar8,local_58.Entries.ArrayNum);
  if (local_58.Entries.AllocatorInstance.SecondaryData !=
      (ForElementType<FMovieSceneChannelEntry>)0x0) {
    FMemory::Free((void *)local_58.Entries.AllocatorInstance.SecondaryData);
  }
  return Dynamic;
}

// GetCurrentValue @ 14691df70

FWidgetTransform * __thiscall
UMovieScene2DTransformSection::GetCurrentValue
          (UMovieScene2DTransformSection *this,FWidgetTransform *__return_storage_ptr__,
          UObject *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  UClass *pUVar6;
  UMovieScenePropertyTrack *this_00;
  TVector2<double>_u_0 *pTVar7;
  TVector2<double>_u_0 *pTVar8;
  TVector2<double>_u_0 local_88;
  TVector2<double>_u_0 local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  TOptional<FWidgetTransform> local_50;
  
  pUVar6 = UMovieScene2DTransformTrack::StaticClass();
  this_00 = (UMovieScenePropertyTrack *)
            UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar6);
  pTVar7 = (TVector2<double>_u_0 *)
           UMovieScenePropertyTrack::GetCurrentValue<FWidgetTransform>(this_00,&local_50,param_1);
  local_88._0_4_ = UE::Math::TVector2<double>::ZeroVector.field0_0x0._0_4_;
  pTVar8 = &local_88;
  if (*(bool *)(pTVar7->XY + 7) != false) {
    pTVar8 = pTVar7;
  }
  local_88._4_4_ = UE::Math::TVector2<double>::ZeroVector.field0_0x0._4_4_;
  local_88._8_4_ = UE::Math::TVector2<double>::ZeroVector.field0_0x0._8_4_;
  local_88._12_4_ = UE::Math::TVector2<double>::ZeroVector.field0_0x0._12_4_;
  local_68 = UE::Math::TVector2<double>::ZeroVector.field0_0x0._0_4_;
  uStack_64 = UE::Math::TVector2<double>::ZeroVector.field0_0x0._4_4_;
  uStack_60 = UE::Math::TVector2<double>::ZeroVector.field0_0x0._8_4_;
  uStack_5c = UE::Math::TVector2<double>::ZeroVector.field0_0x0._12_4_;
  local_78 = UE::Math::TVector2<double>::UnitVector.field0_0x0;
  local_58 = 0;
  dVar1 = (pTVar8->_s_0).Y;
  dVar2 = (((TVector2<double>_u_0 *)&(&pTVar8->_s_0)[1].X)->_s_0).X;
  dVar3 = (&pTVar8->_s_0)[1].Y;
  (__return_storage_ptr__->Translation).field0_0x0._s_0.X =
       (((FWidgetTransform *)&(pTVar8->_s_0).X)->Translation).field0_0x0._s_0.X;
  (__return_storage_ptr__->Translation).field0_0x0._s_0.Y = dVar1;
  dVar4 = (((TVector2<double>_u_0 *)&(&pTVar8->_s_0)[2].X)->_s_0).X;
  dVar5 = (&pTVar8->_s_0)[2].Y;
  (__return_storage_ptr__->Scale).field0_0x0._s_0.X = dVar2;
  (__return_storage_ptr__->Scale).field0_0x0._s_0.Y = dVar3;
  dVar1 = (&pTVar8->_s_0)[3].X;
  (__return_storage_ptr__->Shear).field0_0x0._s_0.X = dVar4;
  (__return_storage_ptr__->Shear).field0_0x0._s_0.Y = dVar5;
  *(double *)&__return_storage_ptr__->Angle = dVar1;
  return __return_storage_ptr__;
}

// GetMask @ 14691f230

FMovieScene2DTransformMask __thiscall
UMovieScene2DTransformSection::GetMask(UMovieScene2DTransformSection *this)

{
  uint *in_RDX;
  
  *in_RDX = (this->TransformMask).Mask;
  return (FMovieScene2DTransformMask)(uint)in_RDX;
}

// GetMaskByName @ 14691f250

FMovieScene2DTransformMask __thiscall
UMovieScene2DTransformSection::GetMaskByName(UMovieScene2DTransformSection *this,FName *param_1)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  FText *pFVar5;
  FString *pFVar6;
  FString *pFVar7;
  FName *in_R8;
  bool bVar8;
  bool bVar9;
  FText local_48;
  FText local_38;
  FText local_28;
  FText local_18;
  
  pFVar5 = FText::AsLocalizable_Advanced_LocText
                     (&local_38,L"MovieScene2DTransformSection",L"Translation",L"Translation");
  pFVar6 = FText::ToString(pFVar5);
  pFVar7 = ::FName::ToString(in_R8,(FString *)&local_48);
  iVar4 = (pFVar6->Data).ArrayNum;
  iVar1 = (pFVar7->Data).ArrayNum;
  if (iVar1 == iVar4) {
    if (iVar1 < 2) {
      bVar8 = true;
    }
    else {
      iVar4 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(pFVar7->Data).AllocatorInstance.Data,
                         (wchar_t *)(pFVar6->Data).AllocatorInstance.Data);
      bVar8 = iVar4 == 0;
    }
  }
  else {
    bVar8 = iVar4 + iVar1 == 1;
  }
  if (local_48.TextData.Reference != (ITextData *)0x0) {
    FMemory::Free(local_48.TextData.Reference);
  }
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  if (bVar8) {
    (param_1->ComparisonIndex).Value = 3;
    goto LAB_14691f633;
  }
  bVar8 = ::FName::Equals(*in_R8,L"Translation.X");
  if (bVar8) {
    (param_1->ComparisonIndex).Value = 1;
    goto LAB_14691f633;
  }
  bVar8 = ::FName::Equals(*in_R8,L"Translation.Y");
  if (bVar8) {
    (param_1->ComparisonIndex).Value = 2;
    goto LAB_14691f633;
  }
  pFVar5 = FText::AsLocalizable_Advanced_LocText
                     (&local_18,L"MovieScene2DTransformSection",L"Angle",L"Angle");
  pFVar6 = FText::ToString(pFVar5);
  pFVar7 = ::FName::ToString(in_R8,(FString *)&local_28);
  iVar4 = (pFVar6->Data).ArrayNum;
  iVar1 = (pFVar7->Data).ArrayNum;
  if (iVar1 == iVar4) {
    if (1 < iVar1) {
      iVar4 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(pFVar7->Data).AllocatorInstance.Data,
                         (wchar_t *)(pFVar6->Data).AllocatorInstance.Data);
      bVar9 = iVar4 == 0;
      goto LAB_14691f3a7;
    }
    bVar2 = false;
    bVar8 = false;
LAB_14691f42b:
    bVar9 = true;
    bVar3 = true;
    if (bVar8) goto LAB_14691f434;
  }
  else {
    bVar9 = iVar4 + iVar1 == 1;
LAB_14691f3a7:
    bVar2 = false;
    bVar8 = false;
    if (bVar9) goto LAB_14691f42b;
    pFVar5 = FText::AsLocalizable_Advanced_LocText
                       (&local_48,L"MovieScene2DTransformSection",L"Rotation",L"Rotation");
    pFVar6 = FText::ToString(pFVar5);
    pFVar7 = ::FName::ToString(in_R8,(FString *)&local_38);
    iVar4 = (pFVar6->Data).ArrayNum;
    iVar1 = (pFVar7->Data).ArrayNum;
    if (iVar1 == iVar4) {
      if (iVar1 < 2) {
        bVar2 = true;
        bVar8 = true;
        goto LAB_14691f42b;
      }
      iVar4 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(pFVar7->Data).AllocatorInstance.Data,
                         (wchar_t *)(pFVar6->Data).AllocatorInstance.Data);
      bVar9 = iVar4 == 0;
    }
    else {
      bVar9 = iVar4 + iVar1 == 1;
    }
    bVar2 = true;
    bVar8 = true;
    if (bVar9) goto LAB_14691f42b;
    bVar2 = true;
    bVar3 = false;
LAB_14691f434:
    bVar9 = bVar3;
    if (local_38.TextData.Reference != (ITextData *)0x0) {
      FMemory::Free(local_38.TextData.Reference);
    }
  }
  if ((bVar2) && (local_48.TextData.Reference != (ITextData *)0x0)) {
    (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
  }
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    FMemory::Free(local_28.TextData.Reference);
  }
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  if (bVar9) {
    (param_1->ComparisonIndex).Value = 4;
  }
  else {
    pFVar5 = FText::AsLocalizable_Advanced_LocText
                       (&local_28,L"MovieScene2DTransformSection",L"Scale",L"Scale");
    pFVar6 = FText::ToString(pFVar5);
    pFVar7 = ::FName::ToString(in_R8,(FString *)&local_18);
    iVar4 = (pFVar6->Data).ArrayNum;
    iVar1 = (pFVar7->Data).ArrayNum;
    if (iVar1 == iVar4) {
      if (iVar1 < 2) {
        bVar8 = true;
      }
      else {
        iVar4 = FGenericPlatformStricmp::Stricmp
                          ((wchar_t *)(pFVar7->Data).AllocatorInstance.Data,
                           (wchar_t *)(pFVar6->Data).AllocatorInstance.Data);
        bVar8 = iVar4 == 0;
      }
    }
    else {
      bVar8 = iVar4 + iVar1 == 1;
    }
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      FMemory::Free(local_18.TextData.Reference);
    }
    if (local_28.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
    }
    if (bVar8) {
      (param_1->ComparisonIndex).Value = 0x18;
    }
    else {
      bVar8 = ::FName::Equals(*in_R8,L"Scale.X");
      if (bVar8) {
        (param_1->ComparisonIndex).Value = 8;
      }
      else {
        bVar8 = ::FName::Equals(*in_R8,L"Scale.Y");
        if (bVar8) {
          (param_1->ComparisonIndex).Value = 0x10;
        }
        else {
          pFVar5 = FText::AsLocalizable_Advanced_LocText
                             (&local_28,L"MovieScene2DTransformSection",L"Shear",L"Shear");
          pFVar6 = FText::ToString(pFVar5);
          pFVar7 = ::FName::ToString(in_R8,(FString *)&local_18);
          iVar4 = (pFVar6->Data).ArrayNum;
          iVar1 = (pFVar7->Data).ArrayNum;
          if (iVar1 == iVar4) {
            if (iVar1 < 2) {
              bVar8 = true;
            }
            else {
              iVar4 = FGenericPlatformStricmp::Stricmp
                                ((wchar_t *)(pFVar7->Data).AllocatorInstance.Data,
                                 (wchar_t *)(pFVar6->Data).AllocatorInstance.Data);
              bVar8 = iVar4 == 0;
            }
          }
          else {
            bVar8 = iVar4 + iVar1 == 1;
          }
          if (local_18.TextData.Reference != (ITextData *)0x0) {
            FMemory::Free(local_18.TextData.Reference);
          }
          if (local_28.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
          }
          if (bVar8) {
            (param_1->ComparisonIndex).Value = 0x60;
          }
          else {
            bVar8 = ::FName::Equals(*in_R8,L"Shear.X");
            if (bVar8) {
              (param_1->ComparisonIndex).Value = 0x20;
            }
            else {
              bVar8 = ::FName::Equals(*in_R8,L"Shear.Y");
              if (bVar8) {
                (param_1->ComparisonIndex).Value = 0x40;
              }
              else {
                (param_1->ComparisonIndex).Value = 0x7f;
              }
            }
          }
        }
      }
    }
  }
LAB_14691f633:
  return (FMovieScene2DTransformMask)(uint)param_1;
}

// GetPrivateStaticClass @ 146922470

UClass * __cdecl UMovieScene2DTransformSection::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieScene2DTransformSection.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"MovieScene2DTransformSection",
               &Z_Registration_Info_UClass_UMovieScene2DTransformSection.InnerSingleton,
               StaticRegisterNativesUMovieScene2DTransformSection,0x938,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieScene2DTransformSection>,
               InternalVTableHelperCtorCaller<UMovieScene2DTransformSection>,local_res8,
               UMovieSceneSection::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieScene2DTransformSection.InnerSingleton;
}

// ImportEntityImpl @ 1469293e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
UMovieScene2DTransformSection::ImportEntityImpl
          (UMovieScene2DTransformSection *this,UMovieSceneEntitySystemLinker *param_1,
          FEntityImportParams *param_2,FImportedEntity *param_3)

{
  longlong lVar1;
  FBuiltInComponentTypes *pFVar2;
  UClass *pUVar3;
  char *pcVar4;
  TEntityBuilder<UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
  *pTVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  bool bVar10;
  undefined1 auStackY_408 [32];
  FAdd local_3a8 [4];
  TComponentTypeID<FGuid> local_3a0;
  undefined2 uStack_39e;
  FSourceFloatChannel local_398;
  bool local_390;
  FMovieSceneFloatChannel *local_388;
  FBuiltInComponentTypes *local_380;
  FGuid local_378;
  FEntityImportParams *local_368;
  FMovieSceneUMGComponentTypes *local_360;
  FImportedEntity *local_358;
  undefined1 local_350 [8];
  undefined1 local_348 [12];
  FName FStack_33c;
  undefined4 local_334;
  bool local_330;
  TAddConditional<FGuid> local_32c;
  TAddConditional<UE::MovieScene::FSourceFloatChannel> local_310;
  TAddConditional<UE::MovieScene::FSourceFloatChannel> local_2f8;
  TAddConditional<UE::MovieScene::FSourceFloatChannel> local_2e0;
  TAddConditional<UE::MovieScene::FSourceFloatChannel> local_2c8;
  bool local_2b0 [24];
  TAddConditional<UE::MovieScene::FSourceFloatChannel> local_298 [2];
  undefined1 local_260;
  TComponentTypeID<UE::MovieScene::FSourceFloatChannel> local_258;
  char cStack_256;
  undefined1 uStack_255;
  TComponentTypeID<UE::MovieScene::FSourceFloatChannel> local_240;
  undefined1 uStack_23e;
  undefined1 uStack_23d;
  TComponentTypeID<UE::MovieScene::FSourceFloatChannel> local_228;
  undefined2 uStack_226;
  TComponentTypeID<UE::MovieScene::FSourceFloatChannel> local_210;
  undefined2 uStack_20e;
  undefined **local_1f8;
  undefined1 local_1f0 [56];
  TAddConditional<UE::MovieScene::FSourceFloatChannel> local_1b8;
  TAddConditional<UE::MovieScene::FSourceFloatChannel> local_1a0;
  TAddConditional<UE::MovieScene::FSourceFloatChannel> local_188;
  TAddConditional<UE::MovieScene::FSourceFloatChannel> local_170;
  TAddConditional<UE::MovieScene::FSourceFloatChannel> local_158;
  TAddConditional<UE::MovieScene::FSourceFloatChannel> local_140;
  TAddConditional<UE::MovieScene::FSourceFloatChannel> local_128;
  undefined1 local_110;
  TEntityBuilder<UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
  local_108;
  char local_48 [4];
  bool local_44;
  undefined1 local_43;
  undefined1 local_42;
  char local_41;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_408;
  lVar1 = this->_padding_;
  local_368 = param_2;
  local_358 = param_3;
  local_380 = UE::MovieScene::FBuiltInComponentTypes::Get();
  local_360 = UE::MovieScene::FMovieSceneUMGComponentTypes::Get();
  pUVar3 = UMovieScene2DTransformTrack::StaticClass();
  local_388 = (FMovieSceneFloatChannel *)
              UObjectBaseUtility::GetTypedOuter
                        ((UObjectBaseUtility *)&this[-1].Shear[1]._padding_,pUVar3);
  if (((lVar1 & 1) == 0) ||
     (((int)this->_padding_ == 0 && (*(char *)((longlong)&this->_padding_ + 4) != '\x01')))) {
    local_48[0] = '\0';
  }
  else {
    local_48[0] = '\x01';
  }
  if (((lVar1 & 2) == 0) ||
     ((this->Translation[0].DefaultValue == 0.0 &&
      (this->Translation[0].KeyHandles.field_0x14 != '\x01')))) {
    local_48[1] = 0;
  }
  else {
    local_48[1] = 1;
  }
  if (((lVar1 & 4) == 0) ||
     ((this->Translation[1].DefaultValue == 0.0 &&
      (this->Translation[1].KeyHandles.field_0x14 != '\x01')))) {
    uVar8 = 0;
  }
  else {
    uVar8 = 1;
  }
  local_48[2] = uVar8;
  if (((lVar1 & 8) == 0) ||
     (((this->Rotation).DefaultValue == 0.0 && ((this->Rotation).KeyHandles.field_0x14 != '\x01'))))
  {
    uVar7 = 0;
  }
  else {
    uVar7 = 1;
  }
  local_48[3] = uVar7;
  if (((lVar1 & 0x10) == 0) ||
     ((this->Scale[0].DefaultValue == 0.0 && (this->Scale[0].KeyHandles.field_0x14 != '\x01')))) {
    bVar10 = false;
  }
  else {
    bVar10 = true;
  }
  local_44 = bVar10;
  if (((lVar1 & 0x20) == 0) ||
     ((this->Scale[1].DefaultValue == 0.0 && (this->Scale[1].KeyHandles.field_0x14 != '\x01')))) {
    uVar9 = 0;
  }
  else {
    uVar9 = 1;
  }
  local_43 = uVar9;
  if (((lVar1 & 0x40) == 0) ||
     ((this->Shear[0].DefaultValue == 0.0 && (this->Shear[0].KeyHandles.field_0x14 != '\x01')))) {
    uVar6 = 0;
  }
  else {
    uVar6 = 1;
  }
  local_42 = uVar6;
  pcVar4 = local_48;
  do {
    if (*pcVar4 != '\0') {
      UE::MovieScene::FEntityImportParams::GetObjectBindingID(local_368,&local_378);
      pFVar2 = local_380;
      uStack_226._0_1_ = uVar8;
      uStack_20e._0_1_ = uVar7;
      local_330 = true;
      local_348._0_2_ = local_380->PropertyBinding;
      uStack_39e._0_1_ =
           ((local_378.C != 0 || local_378.B != 0) || local_378.A != 0) || local_378.D != 0;
      local_3a0 = local_380->GenericObjectBinding;
      cStack_256 = local_48[0];
      local_258 = local_380->FloatChannel[0];
      uStack_23e = local_48[1];
      local_240 = local_380->FloatChannel[1];
      local_228 = local_380->FloatChannel[2];
      local_210 = local_380->FloatChannel[3];
      local_32c.Payload.bIsSet = true;
      local_310.Payload.bIsSet = true;
      local_348._4_4_ = (local_388->TickResolution).Numerator;
      local_348._8_4_ = (local_388->TickResolution).Denominator;
      FStack_33c = (FName)local_388[1]._padding_;
      local_334 = *(undefined4 *)&local_388[1]._padding_;
      local_32c._padding_._0_3_ = _local_3a0;
      local_32c._padding_._3_1_ = uStack_39e._1_1_;
      local_310._padding_._0_4_ = _local_258;
      local_310.Payload.TypedValue.Source = (FMovieSceneFloatChannel *)&this->_padding_;
      local_2f8._padding_._0_4_ = _local_240;
      local_2f8.Payload.TypedValue.Source =
           (FMovieSceneFloatChannel *)&this->Translation[0]._padding_;
      local_2e0._padding_._0_4_ = _local_228;
      local_2e0.Payload.TypedValue.Source =
           (FMovieSceneFloatChannel *)&this->Translation[1]._padding_;
      local_2c8._padding_._0_4_ = _local_210;
      local_2c8.Payload.TypedValue.Source = (FMovieSceneFloatChannel *)&(this->Rotation)._padding_;
      local_350 = (undefined1  [8])
                  &
                  ___7__TEntityBuilder_U__TAdd_UFMovieScenePropertyBinding___MovieScene_UE__U__TAddConditional_UFGuid___23_U__TAddConditional_UFSourceFloatChannel_MovieScene_UE___23_U523_U523_U523__MovieScene_UE__6B_
      ;
      local_388 = (FMovieSceneFloatChannel *)&this->Scale[0]._padding_;
      local_2f8.Payload.bIsSet = true;
      local_2e0.Payload.bIsSet = true;
      local_2c8.Payload.bIsSet = true;
      local_2b0[0] = false;
      pTVar5 = UE::MovieScene::
               TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
               ::AddConditional<UE::MovieScene::FSourceFloatChannel,FMovieSceneFloatChannel_*>
                         ((TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
                           *)local_350,&local_108,local_380->FloatChannel[4],&local_388,bVar10);
      local_398.Source = (FMovieSceneFloatChannel *)&this->Scale[1]._padding_;
      uVar8 = pTVar5->field_0xb8;
      local_350 = (undefined1  [8])
                  &
                  ___7__TEntityBuilderImpl_U__TIntegerSequence_H_0A__00_01_02_03_04_05_06__U__TAdd_UFMovieScenePropertyBinding___MovieScene_UE__U__TAddConditional_UFGuid___34_U__TAddConditional_UFSourceFloatChannel_MovieScene_UE___34_U634_U634_U634_U634_U634__MovieScene_UE__6B_
      ;
      _local_3a0 = CONCAT12(uVar9,pFVar2->FloatChannel[5]);
      local_390 = true;
      UE::Core::Private::Tuple::
      TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
      ::
      TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_><UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
                ((TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
                  *)local_348,ForwardingConstructor,
                 (TAdd<FMovieScenePropertyBinding> *)&pTVar5->field_0x8,
                 (TAddConditional<FGuid> *)&pTVar5->field_0x24,
                 (TAddConditional<UE::MovieScene::FSourceFloatChannel> *)&pTVar5->field_0x40,
                 (TAddConditional<UE::MovieScene::FSourceFloatChannel> *)&pTVar5->field_0x58,
                 (TAddConditional<UE::MovieScene::FSourceFloatChannel> *)&pTVar5->field_0x70,
                 (TAddConditional<UE::MovieScene::FSourceFloatChannel> *)&pTVar5->field_0x88,
                 (TAddConditional<UE::MovieScene::FSourceFloatChannel> *)&pTVar5->field_0xa0,
                 (TAddConditional<UE::MovieScene::FSourceFloatChannel> *)&local_3a0);
      local_350 = (undefined1  [8])
                  &
                  ___7__TEntityBuilder_U__TAdd_UFMovieScenePropertyBinding___MovieScene_UE__U__TAddConditional_UFGuid___23_U__TAddConditional_UFSourceFloatChannel_MovieScene_UE___23_U523_U523_U523_U523_U523__MovieScene_UE__6B_
      ;
      local_398.Source = (FMovieSceneFloatChannel *)&this->Shear[0]._padding_;
      local_390 = true;
      _local_3a0 = CONCAT22(CONCAT11(uStack_39e._1_1_,uVar6),local_380->FloatChannel[6]);
      local_1f8 = &
                  ___7__TEntityBuilderImpl_U__TIntegerSequence_H_0A__00_01_02_03_04_05_06_07__U__TAdd_UFMovieScenePropertyBinding___MovieScene_UE__U__TAddConditional_UFGuid___34_U__TAddConditional_UFSourceFloatChannel_MovieScene_UE___34_U634_U634_U634_U634_U634_U634__MovieScene_UE__6B_
      ;
      local_298[1]._padding_._0_1_ = uVar8;
      UE::Core::Private::Tuple::
      TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
      ::
      TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_><UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
                ((TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
                  *)local_1f0,ForwardingConstructor,(TAdd<FMovieScenePropertyBinding> *)local_348,
                 &local_32c,&local_310,&local_2f8,&local_2e0,&local_2c8,
                 (TAddConditional<UE::MovieScene::FSourceFloatChannel> *)local_2b0,local_298,
                 (TAddConditional<UE::MovieScene::FSourceFloatChannel> *)&local_3a0);
      local_1f8 = &
                  ___7__TEntityBuilder_U__TAdd_UFMovieScenePropertyBinding___MovieScene_UE__U__TAddConditional_UFGuid___23_U__TAddConditional_UFSourceFloatChannel_MovieScene_UE___23_U523_U523_U523_U523_U523_U523__MovieScene_UE__6B_
      ;
      local_3a8[0].ComponentTypeID.Value =
           (FComponentTypeID)(local_360->WidgetTransform).PropertyTag.Value;
      local_350 = (undefined1  [8])
                  &
                  ___7__TEntityBuilderImpl_U__TIntegerSequence_H_0A__00_01_02_03_04_05_06_07_08__U__TAdd_UFMovieScenePropertyBinding___MovieScene_UE__U__TAddConditional_UFGuid___34_U__TAddConditional_UFSourceFloatChannel_MovieScene_UE___34_U634_U634_U634_U634_U634_U634_UFAdd_34__MovieScene_UE__6B_
      ;
      local_110 = uVar8;
      UE::Core::Private::Tuple::
      TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAdd>
      ::
      TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAdd><UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAdd>
                ((TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAdd>
                  *)local_348,ForwardingConstructor,(TAdd<FMovieScenePropertyBinding> *)local_1f0,
                 (TAddConditional<FGuid> *)(local_1f0 + 0x1c),&local_1b8,&local_1a0,&local_188,
                 &local_170,&local_158,&local_140,&local_128,local_3a8);
      local_350 = (undefined1  [8])
                  &
                  ___7__TEntityBuilder_U__TAdd_UFMovieScenePropertyBinding___MovieScene_UE__U__TAddConditional_UFGuid___23_U__TAddConditional_UFSourceFloatChannel_MovieScene_UE___23_U523_U523_U523_U523_U523_U523_UFAdd_23__MovieScene_UE__6B_
      ;
      local_260 = uVar8;
      UE::MovieScene::FImportedEntity::
      AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAdd>_>
                (local_358,
                 (TEntityBuilder<UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAdd>
                  *)local_350);
      return;
    }
    pcVar4 = pcVar4 + 1;
  } while (pcVar4 != &local_41);
  return;
}

// SetMask @ 1469432c0

void __thiscall
UMovieScene2DTransformSection::SetMask
          (UMovieScene2DTransformSection *this,FMovieScene2DTransformMask param_1)

{
  undefined8 local_18;
  FSharedReferencer<1> aFStack_10 [2];
  
  (this->TransformMask).Mask = param_1.Mask;
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

// StaticRegisterNativesUMovieScene2DTransformSection @ 146945990

void __cdecl UMovieScene2DTransformSection::StaticRegisterNativesUMovieScene2DTransformSection(void)

{
  return;
}

// _getUObject @ 146950640

UObject * __thiscall UMovieScene2DTransformSection::_getUObject(UMovieScene2DTransformSection *this)

{
  return (UObject *)&this[-1].Shear[1]._padding_;
}

