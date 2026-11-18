// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosCaching
// Functions: 19

// StaticClass @ 14dadd380

UClass * __cdecl UMovieSceneChaosCacheTrack::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneChaosCacheTrack.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ChaosCaching",L"MovieSceneChaosCacheTrack",
               &Z_Registration_Info_UClass_UMovieSceneChaosCacheTrack.InnerSingleton,
               StaticRegisterNativesUMovieSceneChaosCacheTrack,0x130,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneChaosCacheTrack>,
               InternalVTableHelperCtorCaller<UMovieSceneChaosCacheTrack>,local_res8,
               UMovieSceneNameableTrack::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneChaosCacheTrack.InnerSingleton;
}

// UMovieSceneChaosCacheTrack @ 14dae7e90

UMovieSceneChaosCacheTrack * __thiscall
UMovieSceneChaosCacheTrack::UMovieSceneChaosCacheTrack
          (UMovieSceneChaosCacheTrack *this,FVTableHelper *param_1)

{
  UMovieSceneNameableTrack::UMovieSceneNameableTrack((UMovieSceneNameableTrack *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneDecorationContainerObject__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneTrackVirtualAPI__;
  this->_padding_ = (longlong)&___7UMovieSceneChaosCacheTrack__6B_;
  (this->AnimationSections).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AnimationSections).ArrayNum = 0;
  (this->AnimationSections).ArrayMax = 0;
  return this;
}

// UMovieSceneChaosCacheTrack @ 14dae7ee0

UMovieSceneChaosCacheTrack * __thiscall
UMovieSceneChaosCacheTrack::UMovieSceneChaosCacheTrack
          (UMovieSceneChaosCacheTrack *this,FObjectInitializer *param_1)

{
  UMovieSceneNameableTrack::UMovieSceneNameableTrack((UMovieSceneNameableTrack *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneDecorationContainerObject__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneTrackVirtualAPI__;
  this->_padding_ = (longlong)&___7UMovieSceneChaosCacheTrack__6B_;
  (this->AnimationSections).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AnimationSections).ArrayNum = 0;
  (this->AnimationSections).ArrayMax = 0;
  FMovieSceneBlendTypeField::Add((FMovieSceneBlendTypeField *)&this->_padding_,Absolute);
  *(uint *)&this->_padding_ = (uint)this->_padding_ | 5;
  return this;
}

// ~UMovieSceneChaosCacheTrack @ 14dae8e80

void __thiscall
UMovieSceneChaosCacheTrack::~UMovieSceneChaosCacheTrack(UMovieSceneChaosCacheTrack *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneDecorationContainerObject__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneTrackVirtualAPI__;
  this->_padding_ = (longlong)&___7UMovieSceneChaosCacheTrack__6B_;
  pFVar1 = (this->AnimationSections).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7IMovieSceneTrackTemplateProducer__6B_;
  UMovieSceneNameableTrack::~UMovieSceneNameableTrack((UMovieSceneNameableTrack *)this);
  return;
}

// AddNewAnimation @ 14daeb070

UMovieSceneSection * __thiscall
UMovieSceneChaosCacheTrack::AddNewAnimation
          (UMovieSceneChaosCacheTrack *this,FFrameNumber param_1,AChaosCacheManager *param_2)

{
  undefined8 uVar1;
  UChaosCacheCollection *pUVar2;
  UMovieSceneSection *pUVar3;
  UClass *pUVar4;
  UObject *pUVar5;
  int iVar6;
  float fVar7;
  double dVar8;
  double dVar9;
  undefined1 in_XMM3 [16];
  undefined1 auVar10 [16];
  
  pUVar3 = (UMovieSceneSection *)(**(code **)(this->_padding_ + 0x358))();
  if (pUVar3 != (UMovieSceneSection *)0x0) {
    pUVar4 = UMovieSceneChaosCacheSection::StaticClass();
    iVar6 = (int)pUVar4->_padding_;
    if ((iVar6 <= *(int *)(pUVar3->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar6 * 8)
        == &pUVar4->_padding_)) goto LAB_14daeb0c3;
  }
  pUVar3 = (UMovieSceneSection *)0x0;
LAB_14daeb0c3:
  if ((param_2 != (AChaosCacheManager *)0x0) &&
     ((param_2->CacheCollection).field0_0x0.DebugPtr != (UChaosCacheCollection *)0x0)) {
    pUVar4 = Z_Construct_UClass_UMovieScene_NoRegister();
    pUVar5 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar4);
    uVar1 = *(undefined8 *)&pUVar5[7].field_0x20;
    fVar7 = UChaosCacheCollection::GetMaxDuration((param_2->CacheCollection).field0_0x0.DebugPtr);
    dVar8 = ((double)fVar7 * (double)(int)uVar1) / (double)(int)((ulonglong)uVar1 >> 0x20);
    auVar10._8_8_ = 0;
    auVar10._0_8_ = dVar8;
    auVar10 = roundpd(in_XMM3,auVar10,1);
    dVar9 = auVar10._0_8_;
    dVar8 = dVar8 - dVar9;
    if (__real_41dfffffffc00000 <= dVar9) {
      dVar9 = __real_41dfffffffc00000;
    }
    if (dVar9 <= __real_c1e0000000000000) {
      dVar9 = __real_c1e0000000000000;
    }
    iVar6 = (int)dVar8;
    fVar7 = (float)dVar8 - (float)iVar6;
    if ((0.0 < fVar7) && (::FFrameTime::MaxSubframe <= fVar7)) {
      fVar7 = ::FFrameTime::MaxSubframe;
    }
    if (::FFrameTime::MaxSubframe <= fVar7) {
      fVar7 = ::FFrameTime::MaxSubframe;
    }
    if (fVar7 <= 0.0) {
      fVar7 = 0.0;
    }
    (**(code **)(pUVar3->_padding_ + 0x330))
              (pUVar3,&this->AnimationSections,param_1.Value,
               (int)(fVar7 + __real_3f000000) + (int)dVar9 + 1 + iVar6,0xffffffff);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar2 = (param_2->CacheCollection).field0_0x0.DebugPtr,
       pUVar2 != (UChaosCacheCollection *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar2);
    }
    pUVar3[1]._padding_ = (longlong)(param_2->CacheCollection).field0_0x0;
  }
  (**(code **)this->_padding_)(&this->_padding_,pUVar3);
  return pUVar3;
}

// AddSection @ 14daeb410

void __thiscall
UMovieSceneChaosCacheTrack::AddSection(UMovieSceneChaosCacheTrack *this,UMovieSceneSection *param_1)

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

// CreateNewSection @ 14daee620

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMovieSceneSection * __thiscall
UMovieSceneChaosCacheTrack::CreateNewSection(UMovieSceneChaosCacheTrack *this)

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
  pUVar1 = UMovieSceneChaosCacheSection::StaticClass();
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

// CreateTemplateForSection @ 14daee750

FMovieSceneEvalTemplatePtr * __thiscall
UMovieSceneChaosCacheTrack::CreateTemplateForSection
          (UMovieSceneChaosCacheTrack *this,FMovieSceneEvalTemplatePtr *__return_storage_ptr__,
          UMovieSceneSection *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  TRangeBound<FFrameNumber> TVar3;
  code *pcVar4;
  TEnumAsByte<ERangeBoundTypes::Type> TVar5;
  bool bVar6;
  UClass *pUVar7;
  FMovieSceneEvalTemplatePtr *pFVar8;
  FMovieSceneEvalTemplatePtr *pFVar9;
  FString *pFVar10;
  wchar_t *pwVar11;
  FFrameNumber FVar12;
  wchar_t *pwVar13;
  FFrameNumber FVar14;
  FString local_98;
  FString local_88;
  FString local_78;
  undefined **local_68;
  undefined1 local_60;
  undefined1 local_58;
  undefined8 local_54;
  int local_48;
  int iStack_44;
  FMovieSceneChaosCacheParams local_40;
  
  if (param_1 == (UMovieSceneSection *)0x0) {
    pFVar10 = GetTypeName<UMovieSceneChaosCacheSection>(&local_98);
    if ((pFVar10->Data).ArrayNum == 0) {
      pwVar11 = L"";
    }
    else {
      pwVar11 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar11);
  }
  pUVar7 = UMovieSceneChaosCacheSection::StaticClass();
  iVar2 = (int)pUVar7->_padding_;
  if ((iVar2 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar2 * 8)
      == &pUVar7->_padding_)) {
    local_54 = 0;
    local_58 = 0;
    TVar3 = (param_1->SectionRange).Value.UpperBound;
    local_60 = 0;
    local_68 = &___7FMovieSceneChaosCacheSectionTemplate__6B_;
    TVar5 = TVar3.Type.Value;
    FVar14 = TVar3.Value.Value;
    if (TVar5.Value == '\x01') {
      FVar14.Value = FVar14.Value + 1;
    }
    else if (TVar5.Value == '\x02') {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Type != ERangeBoundTypes::Open",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                         ,99,L"");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        pFVar8 = (FMovieSceneEvalTemplatePtr *)(*pcVar4)();
        return pFVar8;
      }
    }
    TVar3 = (param_1->SectionRange).Value.LowerBound;
    FVar12 = TVar3.Value.Value;
    TVar5 = TVar3.Type.Value;
    if (TVar5.Value != '\x01') {
      if (TVar5.Value == '\x02') {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Type != ERangeBoundTypes::Open",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                           ,99,L"");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          pFVar8 = (FMovieSceneEvalTemplatePtr *)(*pcVar4)();
          return pFVar8;
        }
      }
      FVar12.Value = FVar12.Value + 1;
    }
    local_48 = FVar12.Value;
    iStack_44 = FVar14.Value;
    FMovieSceneChaosCacheParams::FMovieSceneChaosCacheParams
              (&local_40,(FMovieSceneChaosCacheParams *)&param_1[1]._padding_);
    puVar1 = &__return_storage_ptr__->field_0x80;
    *puVar1 = *puVar1 & 0xfe;
    *puVar1 = *puVar1 | 3;
    pFVar8 = __return_storage_ptr__;
    if ((*puVar1 & 2) == 0) {
      pFVar8 = *(FMovieSceneEvalTemplatePtr **)__return_storage_ptr__;
    }
    pFVar8->field_0x8 = local_60;
    pFVar8->field_0x10 = local_58;
    *(undefined8 *)&pFVar8->field_0x14 = local_54;
    *(undefined ***)pFVar8 = &___7FMovieSceneChaosCacheSectionTemplate__6B_;
    *(ulonglong *)&pFVar8->field_0x20 = CONCAT44(iStack_44,local_48);
    FMovieSceneChaosCacheParams::FMovieSceneChaosCacheParams
              ((FMovieSceneChaosCacheParams *)&pFVar8->field_0x28,&local_40);
    if ((*puVar1 & 1) == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("bIsValid",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                         ,0x97,
                         L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                        );
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        pFVar8 = (FMovieSceneEvalTemplatePtr *)(*pcVar4)();
        return pFVar8;
      }
    }
    pFVar8 = __return_storage_ptr__;
    if ((*puVar1 & 2) == 0) {
      pFVar8 = *(FMovieSceneEvalTemplatePtr **)__return_storage_ptr__;
    }
    if ((*puVar1 & 1) == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("bIsValid",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                         ,0x97,
                         L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                        );
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        pFVar8 = (FMovieSceneEvalTemplatePtr *)(*pcVar4)();
        return pFVar8;
      }
    }
    pFVar9 = __return_storage_ptr__;
    if ((*puVar1 & 2) == 0) {
      pFVar9 = *(FMovieSceneEvalTemplatePtr **)__return_storage_ptr__;
    }
    if (pFVar8 != pFVar9) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(void*)&GetValue() == (BaseType*)((T*)&GetValue())",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                         ,0xce,L"TInlineValue cannot operate with multiple inheritance objects.");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        pFVar8 = (FMovieSceneEvalTemplatePtr *)(*pcVar4)();
        return pFVar8;
      }
    }
    return __return_storage_ptr__;
  }
  pFVar10 = GetTypeName<UMovieSceneChaosCacheSection>(&local_88);
  pwVar11 = L"";
  if ((pFVar10->Data).ArrayNum == 0) {
    pwVar13 = L"";
  }
  else {
    pwVar13 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
  }
  pFVar10 = GetFullNameForCastLogError<UMovieSceneSection_const_>(&local_78,param_1);
  if ((pFVar10->Data).ArrayNum != 0) {
    pwVar11 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar11,pwVar13);
}

// GetAllSections @ 14daf75d0

TArray<UMovieSceneSection_*,TSizedDefaultAllocator<32>_> * __thiscall
UMovieSceneChaosCacheTrack::GetAllSections(UMovieSceneChaosCacheTrack *this)

{
  return (TArray<UMovieSceneSection_*,TSizedDefaultAllocator<32>_> *)&this->AnimationSections;
}

// GetAnimSectionsAtTime @ 14daf75e0

TArray<UMovieSceneSection_*,TSizedDefaultAllocator<32>_> * __thiscall
UMovieSceneChaosCacheTrack::GetAnimSectionsAtTime
          (UMovieSceneChaosCacheTrack *this,
          TArray<UMovieSceneSection_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FFrameNumber param_1)

{
  FScriptContainerElement *pFVar1;
  char cVar2;
  int iVar3;
  UObject *pUVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  TArray<UMovieSceneSection_*,TSizedDefaultAllocator<32>_> *pTVar9;
  char *pcVar10;
  undefined1 *puVar11;
  FScriptContainerElement *pFVar12;
  undefined1 local_res8 [8];
  UObject *local_48;
  char local_40 [4];
  int local_3c;
  undefined1 local_38 [4];
  int local_34;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pFVar12 = (this->AnimationSections).AllocatorInstance.Data;
  iVar3 = (this->AnimationSections).ArrayNum;
  pFVar1 = pFVar12 + (longlong)iVar3 * 8;
  do {
    if ((this->AnimationSections).ArrayNum != iVar3) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TObjectPtr<UMovieSceneSection>,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (pFVar12 == pFVar1) {
      return __return_storage_ptr__;
    }
    pUVar4 = *(UObject **)pFVar12;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar4);
    }
    pcVar10 = &pUVar4[4].field_0x10;
    local_40[0] = '\x01';
    cVar2 = *pcVar10;
    local_3c = param_1.Value;
    if (cVar2 == '\x02') {
LAB_14daf76ae:
      puVar11 = &pUVar4[4].field_0x18;
      local_38[0] = 1;
      local_34 = param_1.Value;
      if (pUVar4[4].field_0x18 != '\x02') {
        if (*(int *)&pUVar4[4].field_0x1c <= param_1.Value) {
          if (*(int *)&pUVar4[4].field_0x1c < param_1.Value) {
            puVar11 = local_38;
          }
          if (pUVar4[4].field_0x18 != '\x01') goto LAB_14daf7781;
        }
        if (*(int *)(puVar11 + 4) != *(int *)&pUVar4[4].field_0x1c) goto LAB_14daf7781;
      }
      pFVar5 = (__return_storage_ptr__->AllocatorInstance).Data;
      local_48 = pUVar4;
      if (((pFVar5 <= (FScriptContainerElement *)&local_48) &&
          ((FScriptContainerElement *)&local_48 <
           pFVar5 + (longlong)__return_storage_ptr__->ArrayMax * 8)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar6 = (code *)swi(3);
        pTVar9 = (TArray<UMovieSceneSection_*,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
        return pTVar9;
      }
      iVar8 = __return_storage_ptr__->ArrayNum;
      if (iVar8 == __return_storage_ptr__->ArrayMax) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&__return_storage_ptr__->AllocatorInstance,
                           &__return_storage_ptr__->ArrayMax);
      }
      __return_storage_ptr__->ArrayNum = iVar8 + 1;
      *(UObject **)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar8 * 8) =
           local_48;
    }
    else if (*(int *)&pUVar4[4].field_0x14 < param_1.Value) {
LAB_14daf76a2:
      if (*(int *)(pcVar10 + 4) == *(int *)&pUVar4[4].field_0x14) goto LAB_14daf76ae;
    }
    else {
      if (param_1.Value < *(int *)&pUVar4[4].field_0x14) {
        pcVar10 = local_40;
      }
      if (cVar2 == '\x01') goto LAB_14daf76a2;
    }
LAB_14daf7781:
    pFVar12 = pFVar12 + 8;
  } while( true );
}

// GetPrivateStaticClass @ 14daf8760

UClass * __cdecl UMovieSceneChaosCacheTrack::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneChaosCacheTrack.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ChaosCaching",L"MovieSceneChaosCacheTrack",
               &Z_Registration_Info_UClass_UMovieSceneChaosCacheTrack.InnerSingleton,
               StaticRegisterNativesUMovieSceneChaosCacheTrack,0x130,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneChaosCacheTrack>,
               InternalVTableHelperCtorCaller<UMovieSceneChaosCacheTrack>,local_res8,
               UMovieSceneNameableTrack::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneChaosCacheTrack.InnerSingleton;
}

// HasSection @ 14daf9930

bool __thiscall
UMovieSceneChaosCacheTrack::HasSection(UMovieSceneChaosCacheTrack *this,UMovieSceneSection *param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  bool bVar3;
  
  pFVar2 = (this->AnimationSections).AllocatorInstance.Data;
  pFVar1 = pFVar2 + (longlong)(this->AnimationSections).ArrayNum * 8;
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

// IsEmpty @ 14dafa750

bool __thiscall UMovieSceneChaosCacheTrack::IsEmpty(UMovieSceneChaosCacheTrack *this)

{
  return (this->AnimationSections).ArrayNum == 0;
}

// RemoveAllAnimationData @ 14db030c0

void __thiscall UMovieSceneChaosCacheTrack::RemoveAllAnimationData(UMovieSceneChaosCacheTrack *this)

{
  int *piVar1;
  
  piVar1 = &(this->AnimationSections).ArrayMax;
  (this->AnimationSections).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->AnimationSections).AllocatorInstance,0,piVar1);
  }
  return;
}

// RemoveSection @ 14db031d0

void __thiscall
UMovieSceneChaosCacheTrack::RemoveSection
          (UMovieSceneChaosCacheTrack *this,UMovieSceneSection *param_1)

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

// RemoveSectionAt @ 14db03380

void __thiscall
UMovieSceneChaosCacheTrack::RemoveSectionAt(UMovieSceneChaosCacheTrack *this,int param_1)

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

// StaticRegisterNativesUMovieSceneChaosCacheTrack @ 14db053c0

void __cdecl UMovieSceneChaosCacheTrack::StaticRegisterNativesUMovieSceneChaosCacheTrack(void)

{
  return;
}

// SupportsType @ 14db05560

bool __thiscall
UMovieSceneChaosCacheTrack::SupportsType
          (UMovieSceneChaosCacheTrack *this,TSubclassOf<UMovieSceneSection> param_1)

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
        goto LAB_14db055aa;
      }
    }
  }
  pUVar4 = (UClass *)0x0;
LAB_14db055aa:
  pUVar5 = UMovieSceneChaosCacheSection::StaticClass();
  return pUVar4 == pUVar5;
}

// _getUObject @ 14db085a0

UObject * __thiscall UMovieSceneChaosCacheTrack::_getUObject(UMovieSceneChaosCacheTrack *this)

{
  return (UObject *)&this[-1]._padding_;
}

