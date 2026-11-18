// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 20

// StaticClass @ 146271e90

UClass * __cdecl UMovieSceneSubTrack::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneSubTrack.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneSubTrack",
               &Z_Registration_Info_UClass_UMovieSceneSubTrack.InnerSingleton,
               StaticRegisterNativesUMovieSceneSubTrack,0x128,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMovieSceneSubTrack>,
               InternalVTableHelperCtorCaller<UMovieSceneSubTrack>,local_res8,
               UMovieSceneNameableTrack::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneSubTrack.InnerSingleton;
}

// UMovieSceneSubTrack @ 14629ad30

UMovieSceneSubTrack * __thiscall
UMovieSceneSubTrack::UMovieSceneSubTrack(UMovieSceneSubTrack *this,FVTableHelper *param_1)

{
  UMovieSceneNameableTrack::UMovieSceneNameableTrack((UMovieSceneNameableTrack *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneDecorationContainerObject__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneTrackVirtualAPI__;
  (this->Sections).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Sections).ArrayNum = 0;
  (this->Sections).ArrayMax = 0;
  return this;
}

// UMovieSceneSubTrack @ 14629ad80

UMovieSceneSubTrack * __thiscall
UMovieSceneSubTrack::UMovieSceneSubTrack(UMovieSceneSubTrack *this,FObjectInitializer *param_1)

{
  UMovieSceneNameableTrack::UMovieSceneNameableTrack((UMovieSceneNameableTrack *)this,param_1);
  *(undefined1 *)&this->_padding_ = 1;
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneDecorationContainerObject__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneTrackVirtualAPI__;
  (this->Sections).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Sections).ArrayNum = 0;
  (this->Sections).ArrayMax = 0;
  FMovieSceneBlendTypeField::Add((FMovieSceneBlendTypeField *)&this->_padding_,Absolute);
  return this;
}

// ~UMovieSceneSubTrack @ 14629be80

void __thiscall UMovieSceneSubTrack::~UMovieSceneSubTrack(UMovieSceneSubTrack *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneDecorationContainerObject__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneTrackVirtualAPI__;
  pFVar1 = (this->Sections).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UMovieSceneNameableTrack::~UMovieSceneNameableTrack((UMovieSceneNameableTrack *)this);
  return;
}

// AddSection @ 1462a2ae0

void __thiscall
UMovieSceneSubTrack::AddSection(UMovieSceneSubTrack *this,UMovieSceneSection *param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  UClass *pUVar5;
  longlong *plVar6;
  UMovieSceneSection *local_18 [2];
  
  pUVar5 = UMovieSceneSubSection::StaticClass();
  iVar4 = (int)pUVar5->_padding_;
  if ((iVar4 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar4 * 8)
      == &pUVar5->_padding_)) {
    plVar6 = &this->_padding_;
    local_18[0] = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    if (((UMovieSceneSection **)*plVar6 <= local_18) &&
       (local_18 < (UMovieSceneSection **)*plVar6 + *(int *)((longlong)&this->_padding_ + 4))) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    iVar4 = (int)this->_padding_;
    piVar1 = (int *)((longlong)&this->_padding_ + 4);
    if (iVar4 == *piVar1) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,(ForAnyElementType *)plVar6,piVar1);
    }
    *(int *)&this->_padding_ = iVar4 + 1;
    *(UMovieSceneSection **)(*plVar6 + (longlong)iVar4 * 8) = local_18[0];
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_18[0] != (UMovieSceneSection *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_18[0]);
    }
  }
  return;
}

// AddSequence @ 1462a2eb0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

UMovieSceneSubSection * __thiscall
UMovieSceneSubTrack::AddSequence
          (UMovieSceneSubTrack *this,UMovieSceneSequence *param_1,FFrameNumber param_2,int param_3)

{
  UMovieSceneSubSection *pUVar1;
  
  pUVar1 = (UMovieSceneSubSection *)(**(code **)(this->_padding_ + 0x388))();
  return pUVar1;
}

// AddSequenceOnRow @ 1462a2ed0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

UMovieSceneSubSection * __thiscall
UMovieSceneSubTrack::AddSequenceOnRow
          (UMovieSceneSubTrack *this,UMovieSceneSequence *param_1,FFrameNumber param_2,int param_3,
          int param_4)

{
  int *piVar1;
  int iVar2;
  UMovieSceneSubSection *this_00;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  UMovieSceneSubSection *pUVar7;
  UClass *pUVar8;
  UMovieSceneSequence *this_01;
  longlong lVar9;
  FString *pFVar10;
  FScriptContainerElement *pFVar11;
  wchar_t *pwVar12;
  wchar_t *pwVar13;
  TArray<TObjectPtr<UMovieSceneSection>,TSizedDefaultAllocator<32>_> *pTVar14;
  undefined1 local_res8 [8];
  UMovieSceneSubSection *local_78;
  undefined1 local_70;
  int local_6c;
  undefined1 local_68;
  int local_64;
  FString local_60;
  FString local_50;
  FString local_40;
  
  pUVar7 = (UMovieSceneSubSection *)(**(code **)(this->_padding_ + 0x358))();
  if (pUVar7 == (UMovieSceneSubSection *)0x0) {
    pFVar10 = GetTypeName<UMovieSceneSubSection>(&local_60);
    if ((pFVar10->Data).ArrayNum == 0) {
      pwVar12 = L"";
    }
    else {
      pwVar12 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar12);
  }
  pUVar8 = UMovieSceneSubSection::StaticClass();
  iVar6 = (int)pUVar8->_padding_;
  if ((*(int *)(pUVar7->_padding_ + 0x38) < iVar6) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(pUVar7->_padding_ + 0x30) + (longlong)iVar6 * 8) !=
      &pUVar8->_padding_)) {
    pFVar10 = GetTypeName<UMovieSceneSubSection>(&local_50);
    pwVar12 = L"";
    if ((pFVar10->Data).ArrayNum == 0) {
      pwVar13 = L"";
    }
    else {
      pwVar13 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
    }
    pFVar10 = GetFullNameForCastLogError<UMovieSceneSection>(&local_40,(UMovieSceneSection *)pUVar7)
    ;
    if ((pFVar10->Data).ArrayNum != 0) {
      pwVar12 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(pwVar12,pwVar13);
  }
  if (param_1 != (UMovieSceneSequence *)0x0) {
    pUVar8 = Z_Construct_UClass_UMovieSceneSequence_NoRegister();
    this_01 = (UMovieSceneSequence *)
              UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)pUVar7,pUVar8);
    if ((this_01 != (UMovieSceneSequence *)0x0) &&
       (bVar5 = UMovieSceneSequence::IsSubSequenceCompatible(this_01,param_1), !bVar5))
    goto LAB_1462a2f7e;
  }
  bVar5 = UMovieSceneSection::TryModify((UMovieSceneSection *)pUVar7,true);
  if (bVar5) {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_1 != (UMovieSceneSequence *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    (pUVar7->SubSequence).field0_0x0.DebugPtr = param_1;
  }
LAB_1462a2f7e:
  local_64 = param_2.Value + param_3;
  local_70 = 1;
  local_68 = 0;
  local_6c = param_2.Value;
  (**(code **)(pUVar7->_padding_ + 0x2c8))(pUVar7);
  if (param_4 == -1) {
    param_4 = 0;
    UMovieSceneSection::SetRowIndex((UMovieSceneSection *)pUVar7,0);
    lVar9 = (**(code **)(pUVar7->_padding_ + 800))(pUVar7,&this->Sections,0,0);
    while (lVar9 != 0) {
      param_4 = param_4 + 1;
      UMovieSceneSection::SetRowIndex((UMovieSceneSection *)pUVar7,param_4);
      lVar9 = (**(code **)(pUVar7->_padding_ + 800))(pUVar7,&this->Sections,0,0);
    }
  }
  UMovieSceneSection::SetRowIndex((UMovieSceneSection *)pUVar7,param_4);
  pTVar14 = &this->Sections;
  lVar9 = (**(code **)(pUVar7->_padding_ + 800))(pUVar7,pTVar14,0,0);
  if (lVar9 != 0) {
    pFVar11 = (pTVar14->AllocatorInstance).Data;
    iVar6 = (this->Sections).ArrayNum;
    pFVar3 = pFVar11 + (longlong)iVar6 * 8;
    while( true ) {
      if ((this->Sections).ArrayNum != iVar6) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<TObjectPtr<UMovieSceneSection>,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (pFVar11 == pFVar3) break;
      this_00 = *(UMovieSceneSubSection **)pFVar11;
      if ((this_00 != pUVar7) && (iVar2 = (int)this_00->_padding_, param_4 <= iVar2)) {
        UMovieSceneSection::SetRowIndex((UMovieSceneSection *)this_00,iVar2 + 1);
      }
      pFVar11 = pFVar11 + 8;
    }
  }
  local_78 = pUVar7;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)pUVar7);
  }
  pFVar3 = (pTVar14->AllocatorInstance).Data;
  if (((pFVar3 <= (FScriptContainerElement *)&local_78) &&
      ((FScriptContainerElement *)&local_78 < pFVar3 + (longlong)(this->Sections).ArrayMax * 8)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar4 = (code *)swi(3);
    pUVar7 = (UMovieSceneSubSection *)(*pcVar4)();
    return pUVar7;
  }
  iVar6 = (this->Sections).ArrayNum;
  piVar1 = &(this->Sections).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar14->AllocatorInstance,piVar1);
  }
  pFVar3 = (pTVar14->AllocatorInstance).Data;
  (this->Sections).ArrayNum = iVar6 + 1;
  *(UMovieSceneSubSection **)(pFVar3 + (longlong)iVar6 * 8) = local_78;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_78 != (UMovieSceneSubSection *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_78);
  }
  return pUVar7;
}

// ContainsSequence @ 1462a89f0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

bool __thiscall
UMovieSceneSubTrack::ContainsSequence
          (UMovieSceneSubTrack *this,UMovieSceneSequence *param_1,bool param_2,
          UMovieSceneSection *param_3)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  UMovieSceneSection *pUVar4;
  bool bVar5;
  UClass *pUVar6;
  UMovieSceneSequence *pUVar7;
  UMovieScene *this_00;
  UMovieSceneSubTrack *this_01;
  FString *pFVar8;
  FScriptContainerElement *this_02;
  wchar_t *pwVar9;
  wchar_t *pwVar10;
  undefined1 local_res10 [8];
  FString local_48;
  FString local_38;
  
  pUVar6 = Z_Construct_UClass_UMovieSceneSequence_NoRegister();
  pUVar7 = (UMovieSceneSequence *)
           UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar6);
  if (pUVar7 == param_1) {
    return true;
  }
  this_02 = (this->Sections).AllocatorInstance.Data;
  iVar2 = (this->Sections).ArrayNum;
  pFVar1 = this_02 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->Sections).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UMovieSceneSection>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res10);
    }
    if (this_02 == pFVar1) {
      return false;
    }
    if (*(longlong *)this_02 == 0) {
      pFVar8 = GetTypeName<UMovieSceneSubSection>(&local_38);
      if ((pFVar8->Data).ArrayNum == 0) {
        pwVar10 = L"";
      }
      else {
        pwVar10 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(L"nullptr",pwVar10);
    }
    pUVar6 = UMovieSceneSubSection::StaticClass();
    bVar5 = FObjectPtr::IsA((FObjectPtr *)this_02,pUVar6);
    if ((!bVar5) || (pUVar4 = *(UMovieSceneSection **)this_02, pUVar4 == (UMovieSceneSection *)0x0))
    break;
    if ((pUVar4 != param_3) &&
       (pUVar7 = (UMovieSceneSequence *)pUVar4[8]._padding_, pUVar7 != (UMovieSceneSequence *)0x0))
    {
      if (pUVar7 == param_1) {
        return true;
      }
      if ((param_2) &&
         (this_00 = (UMovieScene *)(**(code **)(pUVar7->_padding_ + 0x2f8))(),
         this_00 != (UMovieScene *)0x0)) {
        local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)StaticClass();
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           ((UClass *)local_48.Data.AllocatorInstance.Data != (UClass *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_48.Data.AllocatorInstance.Data);
        }
        this_01 = (UMovieSceneSubTrack *)
                  UMovieScene::FindTrack(this_00,(TSubclassOf<UMovieSceneTrack>)&local_48);
        if (this_01 != (UMovieSceneSubTrack *)0x0) {
          pUVar6 = StaticClass();
          iVar3 = (int)pUVar6->_padding_;
          if (((iVar3 <= *(int *)(this_01->_padding_ + 0x38)) &&
              ((longlong *)
               *(undefined1 **)(*(longlong *)(this_01->_padding_ + 0x30) + (longlong)iVar3 * 8) ==
               &pUVar6->_padding_)) &&
             (bVar5 = ContainsSequence(this_01,param_1,false,(UMovieSceneSection *)0x0), bVar5)) {
            return true;
          }
        }
      }
    }
    this_02 = this_02 + 8;
  }
  pFVar8 = GetTypeName<UMovieSceneSubSection>(&local_48);
  pwVar10 = L"";
  if ((pFVar8->Data).ArrayNum == 0) {
    pwVar9 = L"";
  }
  else {
    pwVar9 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
  }
  pFVar8 = GetFullNameForCastLogError<UMovieSceneSection>(&local_38,*(UMovieSceneSection **)this_02)
  ;
  if ((pFVar8->Data).ArrayNum != 0) {
    pwVar10 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar10,pwVar9);
}

// CreateNewSection @ 1462ab360

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMovieSceneSection * __thiscall UMovieSceneSubTrack::CreateNewSection(UMovieSceneSubTrack *this)

{
  UClass *pUVar1;
  UMovieSceneSection *pUVar2;
  longlong *plVar3;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  local_a8 = 0;
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)this,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UMovieSceneSubSection::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._48_8_ = (FObjectInstancingGraph *)0x0;
  local_98._56_8_ = (UPackage *)0x0;
  local_98._16_4_ = 0;
  local_98._20_4_ = 0;
  local_98._24_4_ = RF_Transactional;
  local_98._40_8_ = (UObject *)0x0;
  local_98[0x20] = false;
  local_98._8_8_ = this;
  pUVar2 = (UMovieSceneSection *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// FindAllSections @ 1462acd60

TArray<UMovieSceneSection_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> * __thiscall
UMovieSceneSubTrack::FindAllSections
          (UMovieSceneSubTrack *this,
          TArray<UMovieSceneSection_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
          *__return_storage_ptr__,FFrameNumber param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  ForElementType<UMovieSceneSection_*> FVar3;
  code *pcVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  ForElementType<UMovieSceneSection_*> FVar8;
  TArray<UMovieSceneSection_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *pTVar9;
  char cVar10;
  int *piVar11;
  FScriptContainerElement *pFVar12;
  FIdentityFunctor local_res8 [8];
  UMovieSceneSection *local_58;
  undefined1 local_50;
  int local_4c;
  undefined1 local_48;
  int local_44;
  undefined4 local_40;
  int iStack_3c;
  undefined4 uStack_38;
  int aiStack_34 [3];
  
  (__return_storage_ptr__->AllocatorInstance).SecondaryData =
       (ForElementType<UMovieSceneSection_*>)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 4;
  pFVar12 = (this->Sections).AllocatorInstance.Data;
  iVar2 = (this->Sections).ArrayNum;
  pFVar1 = pFVar12 + (longlong)iVar2 * 8;
  do {
    if ((this->Sections).ArrayNum != iVar2) {
      local_res8[0] = (FIdentityFunctor)0x0;
      `TCheckedPointerIterator<TObjectPtr<UMovieSceneSection>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar12 == pFVar1) {
      FVar3 = (__return_storage_ptr__->AllocatorInstance).SecondaryData;
      FVar8 = (ForElementType<UMovieSceneSection_*>)__return_storage_ptr__;
      if (FVar3 != (ForElementType<UMovieSceneSection_*>)0x0) {
        FVar8 = FVar3;
      }
      AlgoImpl::
      IntroSortInternal<UMovieSceneSection_*,int,FIdentityFunctor,bool_(__cdecl*)(UMovieSceneSection_const_*,UMovieSceneSection_const_*)>
                ((UMovieSceneSection **)FVar8,__return_storage_ptr__->ArrayNum,local_res8[0],
                 MovieSceneHelpers::SortOverlappingSections);
      return __return_storage_ptr__;
    }
    local_58 = *(UMovieSceneSection **)pFVar12;
    bVar5 = MovieSceneHelpers::IsSectionKeyable(local_58);
    if (bVar5) {
      local_50 = 1;
      local_4c = param_1.Value;
      local_40 = *(undefined4 *)&(local_58->SectionRange).Value.LowerBound;
      iStack_3c = (local_58->SectionRange).Value.LowerBound.Value.Value;
      uStack_38 = *(undefined4 *)&(local_58->SectionRange).Value.UpperBound;
      aiStack_34[0] = (local_58->SectionRange).Value.UpperBound.Value.Value;
      cVar6 = (char)local_40;
      if (cVar6 == '\x02') {
        piVar11 = &iStack_3c;
        cVar10 = cVar6;
LAB_1462ace34:
        bVar5 = cVar10 != cVar6;
        cVar6 = cVar10;
        if (bVar5) goto LAB_1462acf71;
      }
      else {
        if (param_1.Value <= iStack_3c) {
          if ((param_1.Value < iStack_3c) || (piVar11 = &iStack_3c, cVar6 != '\x01')) {
            piVar11 = &local_4c;
          }
          cVar10 = '\x01';
          goto LAB_1462ace34;
        }
        piVar11 = &iStack_3c;
      }
      if ((cVar6 == '\x02') || (*piVar11 == iStack_3c)) {
        local_48 = 1;
        local_44 = param_1.Value;
        cVar6 = (char)uStack_38;
        if (cVar6 == '\x02') {
          piVar11 = aiStack_34;
          cVar10 = cVar6;
LAB_1462ace95:
          bVar5 = cVar10 != cVar6;
          cVar6 = cVar10;
          if (bVar5) goto LAB_1462acf71;
        }
        else {
          if (aiStack_34[0] <= param_1.Value) {
            if ((aiStack_34[0] < param_1.Value) || (piVar11 = aiStack_34, cVar6 != '\x01')) {
              piVar11 = &local_44;
            }
            cVar10 = '\x01';
            goto LAB_1462ace95;
          }
          piVar11 = aiStack_34;
        }
        if ((cVar6 == '\x02') || (*piVar11 == aiStack_34[0])) {
          FVar3 = (__return_storage_ptr__->AllocatorInstance).SecondaryData;
          FVar8 = (ForElementType<UMovieSceneSection_*>)__return_storage_ptr__;
          if (FVar3 != (ForElementType<UMovieSceneSection_*>)0x0) {
            FVar8 = FVar3;
          }
          if ((ulonglong)FVar8 <= &local_58) {
            FVar8 = (ForElementType<UMovieSceneSection_*>)__return_storage_ptr__;
            if (FVar3 != (ForElementType<UMovieSceneSection_*>)0x0) {
              FVar8 = FVar3;
            }
            if ((&local_58 <
                 (UMovieSceneSection **)
                 ((longlong)FVar8 + (longlong)__return_storage_ptr__->ArrayMax * 8)) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar5)) {
              pcVar4 = (code *)swi(3);
              pTVar9 = (TArray<UMovieSceneSection_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                        *)(*pcVar4)();
              return pTVar9;
            }
          }
          iVar7 = __return_storage_ptr__->ArrayNum;
          if (iVar7 == __return_storage_ptr__->ArrayMax) {
            iVar7 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UMovieSceneSection_*>_>
                              (0x808,&__return_storage_ptr__->AllocatorInstance,
                               &__return_storage_ptr__->ArrayMax);
          }
          __return_storage_ptr__->ArrayNum = iVar7 + 1;
          FVar3 = (__return_storage_ptr__->AllocatorInstance).SecondaryData;
          FVar8 = (ForElementType<UMovieSceneSection_*>)__return_storage_ptr__;
          if (FVar3 != (ForElementType<UMovieSceneSection_*>)0x0) {
            FVar8 = FVar3;
          }
          *(UMovieSceneSection **)((longlong)FVar8 + (longlong)iVar7 * 8) = local_58;
        }
      }
    }
LAB_1462acf71:
    pFVar12 = pFVar12 + 8;
  } while( true );
}

// GetAllSections @ 1462ae8d0

TArray<UMovieSceneSection_*,TSizedDefaultAllocator<32>_> * __thiscall
UMovieSceneSubTrack::GetAllSections(UMovieSceneSubTrack *this)

{
  return (TArray<UMovieSceneSection_*,TSizedDefaultAllocator<32>_> *)&this->Sections;
}

// GetPrivateStaticClass @ 1462afa60

UClass * __cdecl UMovieSceneSubTrack::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneSubTrack.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneSubTrack",
               &Z_Registration_Info_UClass_UMovieSceneSubTrack.InnerSingleton,
               StaticRegisterNativesUMovieSceneSubTrack,0x128,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMovieSceneSubTrack>,
               InternalVTableHelperCtorCaller<UMovieSceneSubTrack>,local_res8,
               UMovieSceneNameableTrack::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneSubTrack.InnerSingleton;
}

// HasSection @ 1462b1580

bool __thiscall
UMovieSceneSubTrack::HasSection(UMovieSceneSubTrack *this,UMovieSceneSection *param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  bool bVar3;
  
  pFVar2 = (this->Sections).AllocatorInstance.Data;
  pFVar1 = pFVar2 + (longlong)(this->Sections).ArrayNum * 8;
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

// IsEmpty @ 1462b54a0

bool __thiscall UMovieSceneSubTrack::IsEmpty(UMovieSceneSubTrack *this)

{
  return (this->Sections).ArrayNum == 0;
}

// RemoveAllAnimationData @ 1462b8a50

void __thiscall UMovieSceneSubTrack::RemoveAllAnimationData(UMovieSceneSubTrack *this)

{
  int *piVar1;
  
  piVar1 = &(this->Sections).ArrayMax;
  (this->Sections).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->Sections).AllocatorInstance,0,piVar1);
  }
  return;
}

// RemoveSection @ 1462b8ee0

void __thiscall
UMovieSceneSubTrack::RemoveSection(UMovieSceneSubTrack *this,UMovieSceneSection *param_1)

{
  TObjectPtr<UMovieSceneSection>_u_0 local_res8 [4];
  
  local_res8[0].DebugPtr = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UMovieSceneSection *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  TArray<TObjectPtr<UMovieSceneSection>,TSizedDefaultAllocator<32>_>::Remove
            ((TArray<TObjectPtr<UMovieSceneSection>,TSizedDefaultAllocator<32>_> *)&this->_padding_,
             (TObjectPtr<UMovieSceneSection> *)&local_res8[0].ObjectPtr);
  return;
}

// RemoveSectionAt @ 1462b9060

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall UMovieSceneSubTrack::RemoveSectionAt(UMovieSceneSubTrack *this,int param_1)

{
  TArray<TObjectPtr<UMovieSceneSection>,TSizedDefaultAllocator<32>_>::RemoveAt
            ((TArray<TObjectPtr<UMovieSceneSection>,TSizedDefaultAllocator<32>_> *)&this->_padding_,
             param_1,Default);
  return;
}

// StaticRegisterNativesUMovieSceneSubTrack @ 1462bde50

void __cdecl UMovieSceneSubTrack::StaticRegisterNativesUMovieSceneSubTrack(void)

{
  return;
}

// SupportsMultipleRows @ 1462be020

bool __thiscall UMovieSceneSubTrack::SupportsMultipleRows(UMovieSceneSubTrack *this)

{
  return true;
}

// SupportsType @ 1462be110

bool __thiscall
UMovieSceneSubTrack::SupportsType(UMovieSceneSubTrack *this,TSubclassOf<UMovieSceneSection> param_1)

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
        goto LAB_1462be15a;
      }
    }
  }
  pUVar4 = (UClass *)0x0;
LAB_1462be15a:
  pUVar5 = UMovieSceneSubSection::StaticClass();
  return pUVar4 == pUVar5;
}

