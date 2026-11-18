// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaCompositing
// Functions: 24

// StaticClass @ 14ea61ec0

UClass * __cdecl UMovieSceneMediaTrack::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneMediaTrack.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MediaCompositing",L"MovieSceneMediaTrack",
               &Z_Registration_Info_UClass_UMovieSceneMediaTrack.InnerSingleton,
               StaticRegisterNativesUMovieSceneMediaTrack,0x138,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMovieSceneMediaTrack>,
               InternalVTableHelperCtorCaller<UMovieSceneMediaTrack>,local_res8,
               UMovieSceneNameableTrack::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneMediaTrack.InnerSingleton;
}

// UMovieSceneMediaTrack @ 14ea67c90

UMovieSceneMediaTrack * __thiscall
UMovieSceneMediaTrack::UMovieSceneMediaTrack(UMovieSceneMediaTrack *this,FVTableHelper *param_1)

{
  UMovieSceneNameableTrack::UMovieSceneNameableTrack((UMovieSceneNameableTrack *)this,param_1);
  this->bSynchronousScrubbing = false;
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneDecorationContainerObject__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneTrackVirtualAPI__;
  this->_padding_ = (longlong)&___7UMovieSceneMediaTrack__6B_;
  (this->MediaSections).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MediaSections).ArrayNum = 0;
  (this->MediaSections).ArrayMax = 0;
  return this;
}

// UMovieSceneMediaTrack @ 14ea67cf0

UMovieSceneMediaTrack * __thiscall
UMovieSceneMediaTrack::UMovieSceneMediaTrack
          (UMovieSceneMediaTrack *this,FObjectInitializer *param_1)

{
  UMovieSceneNameableTrack::UMovieSceneNameableTrack((UMovieSceneNameableTrack *)this,param_1);
  *(uint *)&this->_padding_ = (uint)this->_padding_ & 0xfffffffc;
  *(uint *)&this->_padding_ = (uint)this->_padding_ | 0xc;
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneDecorationContainerObject__;
  this->bSynchronousScrubbing = false;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneTrackVirtualAPI__;
  this->_padding_ = (longlong)&___7UMovieSceneMediaTrack__6B_;
  (this->MediaSections).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MediaSections).ArrayNum = 0;
  (this->MediaSections).ArrayMax = 0;
  FMovieSceneBlendTypeField::Add((FMovieSceneBlendTypeField *)&this->_padding_,Absolute);
  return this;
}

// ~UMovieSceneMediaTrack @ 14ea681d0

void __thiscall UMovieSceneMediaTrack::~UMovieSceneMediaTrack(UMovieSceneMediaTrack *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneDecorationContainerObject__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneTrackVirtualAPI__;
  this->_padding_ = (longlong)&___7UMovieSceneMediaTrack__6B_;
  pFVar1 = (this->MediaSections).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7IMovieSceneTrackTemplateProducer__6B_;
  UMovieSceneNameableTrack::~UMovieSceneNameableTrack((UMovieSceneNameableTrack *)this);
  return;
}

// AddNewMediaSource @ 14ea68900

UMovieSceneSection * __thiscall
UMovieSceneMediaTrack::AddNewMediaSource
          (UMovieSceneMediaTrack *this,UMediaSource *param_1,FFrameNumber param_2)

{
  UMovieSceneSection *pUVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014ea68909. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pUVar1 = (UMovieSceneSection *)(**(code **)(this->_padding_ + 0x380))();
  return pUVar1;
}

// AddNewMediaSourceOnRow @ 14ea68920

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

UMovieSceneSection * __thiscall
UMovieSceneMediaTrack::AddNewMediaSourceOnRow
          (UMovieSceneMediaTrack *this,UMediaSource *param_1,FFrameNumber param_2,int param_3)

{
  UMovieSceneMediaSection *pUVar1;
  
  pUVar1 = AddNewSectionOnRow(this,param_2,param_3);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UMediaSource *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
    (pUVar1->MediaSource).field0_0x0.DebugPtr = param_1;
    return (UMovieSceneSection *)pUVar1;
  }
  (pUVar1->MediaSource).field0_0x0.DebugPtr = param_1;
  return (UMovieSceneSection *)pUVar1;
}

// AddNewMediaSourceProxy @ 14ea68980

UMovieSceneSection * __thiscall
UMovieSceneMediaTrack::AddNewMediaSourceProxy
          (UMovieSceneMediaTrack *this,UMediaSource *param_1,FMovieSceneObjectBindingID *param_2,
          int param_3,FFrameNumber param_4)

{
  UMovieSceneSection *pUVar1;
  
  pUVar1 = (UMovieSceneSection *)(**(code **)(this->_padding_ + 0x388))();
  return pUVar1;
}

// AddNewMediaSourceProxyOnRow @ 14ea689b0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

UMovieSceneSection * __thiscall
UMovieSceneMediaTrack::AddNewMediaSourceProxyOnRow
          (UMovieSceneMediaTrack *this,UMediaSource *param_1,FMovieSceneObjectBindingID *param_2,
          int param_3,FFrameNumber param_4,int param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  UMovieSceneMediaSection *pUVar5;
  
  pUVar5 = AddNewSectionOnRow(this,param_4,param_5);
  uVar1 = (param_2->Guid).B;
  uVar2 = (param_2->Guid).C;
  uVar3 = (param_2->Guid).D;
  (pUVar5->MediaSourceProxyBindingID).Guid.A = (param_2->Guid).A;
  (pUVar5->MediaSourceProxyBindingID).Guid.B = uVar1;
  (pUVar5->MediaSourceProxyBindingID).Guid.C = uVar2;
  (pUVar5->MediaSourceProxyBindingID).Guid.D = uVar3;
  iVar4 = param_2->ResolveParentIndex;
  (pUVar5->MediaSourceProxyBindingID).SequenceID = param_2->SequenceID;
  (pUVar5->MediaSourceProxyBindingID).ResolveParentIndex = iVar4;
  pUVar5->MediaSourceProxyIndex = param_3;
  return (UMovieSceneSection *)pUVar5;
}

// AddNewSectionOnRow @ 14ea68a00

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

UMovieSceneMediaSection * __thiscall
UMovieSceneMediaTrack::AddNewSectionOnRow
          (UMovieSceneMediaTrack *this,FFrameNumber param_1,int param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UClass *pUVar6;
  UObject *pUVar7;
  UMovieSceneMediaSection *pUVar8;
  TArray<TObjectPtr<UMovieSceneSection>,TSizedDefaultAllocator<32>_> *pTVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined1 unaff_XMM7 [16];
  undefined1 auVar13 [16];
  UMovieSceneMediaSection *local_38 [2];
  
  pUVar6 = Z_Construct_UClass_UMovieScene_NoRegister();
  pUVar7 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar6);
  dVar10 = (double)(int)*(undefined8 *)&pUVar7[7].field_0x20 /
           (double)(int)((ulonglong)*(undefined8 *)&pUVar7[7].field_0x20 >> 0x20);
  auVar13._8_8_ = 0;
  auVar13._0_8_ = dVar10;
  auVar13 = roundpd(unaff_XMM7,auVar13,1);
  pUVar8 = NewObject<UMovieSceneMediaSection>
                     ((UObject *)this,(FName)0x0,RF_Transactional,(UObject *)0x0,false,
                      (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
  dVar11 = auVar13._0_8_;
  dVar12 = dVar11;
  if (__real_41dfffffffc00000 <= dVar11) {
    dVar12 = __real_41dfffffffc00000;
  }
  pTVar9 = &this->MediaSections;
  if (dVar12 <= __real_c1e0000000000000) {
    dVar12 = __real_c1e0000000000000;
  }
  (**(code **)(pUVar8->_padding_ + 0x330))
            (pUVar8,pTVar9,param_1.Value,(int)(dVar10 - dVar11) + (int)dVar12,param_2);
  local_38[0] = pUVar8;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)pUVar8);
  }
  pFVar2 = (pTVar9->AllocatorInstance).Data;
  if ((pFVar2 <= (FScriptContainerElement *)local_38) &&
     ((FScriptContainerElement *)local_38 < pFVar2 + (longlong)(this->MediaSections).ArrayMax * 8))
  {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pUVar8 = (UMovieSceneMediaSection *)(*pcVar3)();
      return pUVar8;
    }
  }
  iVar5 = (this->MediaSections).ArrayNum;
  piVar1 = &(this->MediaSections).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar9->AllocatorInstance,piVar1);
  }
  (this->MediaSections).ArrayNum = iVar5 + 1;
  *(UMovieSceneMediaSection **)((pTVar9->AllocatorInstance).Data + (longlong)iVar5 * 8) =
       local_38[0];
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_38[0] != (UMovieSceneMediaSection *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_38[0]);
  }
  return pUVar8;
}

// AddSection @ 14ea68bd0

void __thiscall
UMovieSceneMediaTrack::AddSection(UMovieSceneMediaTrack *this,UMovieSceneSection *param_1)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UMovieSceneSection *local_18 [2];
  
  plVar2 = &this->_padding_;
  local_18[0] = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UMovieSceneSection *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  if (((UMovieSceneSection **)*plVar2 <= local_18) &&
     (local_18 < (UMovieSceneSection **)*plVar2 + *(int *)((longlong)&this->_padding_ + 4))) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = (int)this->_padding_;
  piVar1 = (int *)((longlong)&this->_padding_ + 4);
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)plVar2,piVar1);
  }
  *(int *)&this->_padding_ = iVar5 + 1;
  *(UMovieSceneSection **)(*plVar2 + (longlong)iVar5 * 8) = local_18[0];
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_18[0] != (UMovieSceneSection *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_18[0]);
  }
  return;
}

// CreateNewSection @ 14ea69e90

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

UMovieSceneSection * __thiscall UMovieSceneMediaTrack::CreateNewSection(UMovieSceneMediaTrack *this)

{
  UMovieSceneMediaSection *pUVar1;
  
  pUVar1 = NewObject<UMovieSceneMediaSection>
                     ((UObject *)this,(FName)0x0,RF_Transactional,(UObject *)0x0,false,
                      (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
  return (UMovieSceneSection *)pUVar1;
}

// CreateTemplateForSection @ 14ea6a1a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

FMovieSceneEvalTemplatePtr * __thiscall
UMovieSceneMediaTrack::CreateTemplateForSection
          (UMovieSceneMediaTrack *this,FMovieSceneEvalTemplatePtr *__return_storage_ptr__,
          UMovieSceneSection *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FMovieSceneMediaSectionTemplate *pFVar3;
  FString *pFVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  undefined1 auStack_208 [32];
  FString local_1e8;
  FString local_1d8;
  FMovieSceneMediaSectionTemplate local_1c8;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_208;
  if (param_1 == (UMovieSceneSection *)0x0) {
    pFVar4 = GetTypeName<UMovieSceneMediaSection_const_>(&local_1e8);
    if ((pFVar4->Data).ArrayNum == 0) {
      pwVar5 = L"";
    }
    else {
      pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar5);
  }
  pUVar2 = UMovieSceneMediaSection::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    pFVar3 = FMovieSceneMediaSectionTemplate::FMovieSceneMediaSectionTemplate
                       (&local_1c8,(UMovieSceneMediaSection *)param_1,
                        (UMovieSceneMediaTrack *)&this[-1]._padding_);
    __return_storage_ptr__->field_0x80 = __return_storage_ptr__->field_0x80 & 0xfe;
    TInlineValue<FMovieSceneEvalTemplate,128,8>::
    InitializeFrom<FMovieSceneMediaSectionTemplate,FMovieSceneMediaSectionTemplate>
              ((TInlineValue<FMovieSceneEvalTemplate,128,8> *)__return_storage_ptr__,pFVar3);
    FMovieSceneFloatChannel::~FMovieSceneFloatChannel(&local_1c8.Params.ProxyTextureBlend);
    return __return_storage_ptr__;
  }
  pFVar4 = GetTypeName<UMovieSceneMediaSection_const_>(&local_1e8);
  pwVar5 = L"";
  if ((pFVar4->Data).ArrayNum == 0) {
    pwVar6 = L"";
  }
  else {
    pwVar6 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
  pFVar4 = GetFullNameForCastLogError<UMovieSceneSection_const_>(&local_1d8,param_1);
  if ((pFVar4->Data).ArrayNum != 0) {
    pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar5,pwVar6);
}

// GetAllSections @ 14ea6ba40

TArray<UMovieSceneSection_*,TSizedDefaultAllocator<32>_> * __thiscall
UMovieSceneMediaTrack::GetAllSections(UMovieSceneMediaTrack *this)

{
  return (TArray<UMovieSceneSection_*,TSizedDefaultAllocator<32>_> *)&this->MediaSections;
}

// GetPrivateStaticClass @ 14ea6ca60

UClass * __cdecl UMovieSceneMediaTrack::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneMediaTrack.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MediaCompositing",L"MovieSceneMediaTrack",
               &Z_Registration_Info_UClass_UMovieSceneMediaTrack.InnerSingleton,
               StaticRegisterNativesUMovieSceneMediaTrack,0x138,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMovieSceneMediaTrack>,
               InternalVTableHelperCtorCaller<UMovieSceneMediaTrack>,local_res8,
               UMovieSceneNameableTrack::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneMediaTrack.InnerSingleton;
}

// HasSection @ 14ea6d0f0

bool __thiscall
UMovieSceneMediaTrack::HasSection(UMovieSceneMediaTrack *this,UMovieSceneSection *param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  bool bVar3;
  
  pFVar2 = (this->MediaSections).AllocatorInstance.Data;
  pFVar1 = pFVar2 + (longlong)(this->MediaSections).ArrayNum * 8;
  while( true ) {
    if (pFVar2 == pFVar1) {
      return false;
    }
    if (*(UMovieSceneSection **)pFVar2 == (UMovieSceneSection *)0x0) {
      bVar3 = param_1 == (UMovieSceneSection *)0x0;
    }
    else {
      bVar3 = *(UMovieSceneSection **)pFVar2 == param_1;
    }
    if (bVar3) break;
    pFVar2 = pFVar2 + 8;
  }
  return true;
}

// IsEmpty @ 14ea6d2a0

bool __thiscall UMovieSceneMediaTrack::IsEmpty(UMovieSceneMediaTrack *this)

{
  return (this->MediaSections).ArrayNum == 0;
}

// RemoveSection @ 14ea6eae0

void __thiscall
UMovieSceneMediaTrack::RemoveSection(UMovieSceneMediaTrack *this,UMovieSceneSection *param_1)

{
  int iVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  UMovieSceneSection *pUVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  UMovieSceneSection *local_38 [2];
  
  local_38[0] = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UMovieSceneSection *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  if ((((UMovieSceneSection **)this->_padding_ <= local_38) &&
      (local_38 < (UMovieSceneSection **)this->_padding_ + *(int *)((longlong)&this->_padding_ + 4))
      ) && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar1 = (int)this->_padding_;
  if (iVar1 != 0) {
    iVar9 = 0;
    plVar2 = (longlong *)this->_padding_;
    bVar4 = (UMovieSceneSection *)*plVar2 != local_38[0];
    lVar6 = 0;
    pUVar5 = local_38[0];
    iVar7 = 0;
    do {
      iVar8 = iVar7;
      do {
        lVar6 = lVar6 + 1;
        iVar8 = iVar8 + 1;
        if (iVar1 <= lVar6) break;
      } while (bVar4 == ((UMovieSceneSection *)plVar2[lVar6] != pUVar5));
      if (bVar4 != false) {
        if (iVar9 != iVar7) {
          memmove(plVar2 + iVar9,plVar2 + iVar7,(longlong)(iVar8 - iVar7) << 3);
          pUVar5 = local_38[0];
        }
        iVar9 = iVar9 + (iVar8 - iVar7);
      }
      bVar4 = (bool)(bVar4 ^ 1);
      iVar7 = iVar8;
    } while (lVar6 < iVar1);
    *(int *)&this->_padding_ = iVar9;
  }
  return;
}

// RemoveSectionAt @ 14ea6ec90

void __thiscall UMovieSceneMediaTrack::RemoveSectionAt(UMovieSceneMediaTrack *this,int param_1)

{
  void *_Dst;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = 0;
  if (param_1 < (int)this->_padding_) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  _Dst = (void *)(this->_padding_ + (longlong)param_1 * 8);
  iVar4 = (int)this->_padding_ + ~param_1;
  if (iVar4 != 0) {
    memmove(_Dst,(void *)((longlong)_Dst + 8),(longlong)iVar4 << 3);
  }
  *(int *)&this->_padding_ = (int)this->_padding_ + -1;
  UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,(ForAnyElementType *)&this->_padding_,(int)this->_padding_,
             (int *)((longlong)&this->_padding_ + 4));
  return;
}

// StaticRegisterNativesUMovieSceneMediaTrack @ 14ea70380

void __cdecl UMovieSceneMediaTrack::StaticRegisterNativesUMovieSceneMediaTrack(void)

{
  return;
}

// SupportsMultipleRows @ 14ea70470

bool __thiscall UMovieSceneMediaTrack::SupportsMultipleRows(UMovieSceneMediaTrack *this)

{
  return true;
}

// SupportsType @ 14ea704f0

bool __thiscall
UMovieSceneMediaTrack::SupportsType
          (UMovieSceneMediaTrack *this,TSubclassOf<UMovieSceneSection> param_1)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  UClass *pUVar4;
  UClass *pUVar5;
  
  lVar2 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar2 != 0) {
    pUVar4 = Z_Construct_UClass_UMovieSceneSection_NoRegister();
    if (pUVar4 != (UClass *)0x0) {
      iVar1 = (int)pUVar4->_padding_;
      if ((*(int *)(lVar2 + 0x38) < iVar1) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar4->_padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        pUVar4 = *(UClass **)param_1.Class.field0_0x0;
        goto LAB_14ea7053a;
      }
    }
  }
  pUVar4 = (UClass *)0x0;
LAB_14ea7053a:
  pUVar5 = UMovieSceneMediaSection::StaticClass();
  return pUVar4 == pUVar5;
}

// TickOutput @ 14ea70570

void __thiscall UMovieSceneMediaTrack::TickOutput(UMovieSceneMediaTrack *this)

{
  return;
}

// UpdateSectionTextureIndices @ 14ea70cf0

void __thiscall UMovieSceneMediaTrack::UpdateSectionTextureIndices(UMovieSceneMediaTrack *this)

{
  return;
}

// _getUObject @ 14ea71050

UObject * __thiscall UMovieSceneMediaTrack::_getUObject(UMovieSceneMediaTrack *this)

{
  return (UObject *)&this[-1]._padding_;
}

