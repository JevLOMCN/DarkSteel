// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsCore
// Functions: 19

// StaticClass @ 14e0cab30

UClass * __cdecl UMovieSceneGroomCacheTrack::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneGroomCacheTrack.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/HairStrandsCore",L"MovieSceneGroomCacheTrack",
               &Z_Registration_Info_UClass_UMovieSceneGroomCacheTrack.InnerSingleton,
               StaticRegisterNativesUMovieSceneGroomCacheTrack,0x130,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneGroomCacheTrack>,
               InternalVTableHelperCtorCaller<UMovieSceneGroomCacheTrack>,local_res8,
               UMovieSceneNameableTrack::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneGroomCacheTrack.InnerSingleton;
}

// UMovieSceneGroomCacheTrack @ 14e0d1010

UMovieSceneGroomCacheTrack * __thiscall
UMovieSceneGroomCacheTrack::UMovieSceneGroomCacheTrack
          (UMovieSceneGroomCacheTrack *this,FVTableHelper *param_1)

{
  UMovieSceneNameableTrack::UMovieSceneNameableTrack((UMovieSceneNameableTrack *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneDecorationContainerObject__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneTrackVirtualAPI__;
  this->_padding_ = (longlong)&___7UMovieSceneGroomCacheTrack__6B_;
  (this->AnimationSections).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AnimationSections).ArrayNum = 0;
  (this->AnimationSections).ArrayMax = 0;
  return this;
}

// UMovieSceneGroomCacheTrack @ 14e0d1060

UMovieSceneGroomCacheTrack * __thiscall
UMovieSceneGroomCacheTrack::UMovieSceneGroomCacheTrack
          (UMovieSceneGroomCacheTrack *this,FObjectInitializer *param_1)

{
  UMovieSceneNameableTrack::UMovieSceneNameableTrack((UMovieSceneNameableTrack *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneDecorationContainerObject__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneTrackVirtualAPI__;
  this->_padding_ = (longlong)&___7UMovieSceneGroomCacheTrack__6B_;
  (this->AnimationSections).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AnimationSections).ArrayNum = 0;
  (this->AnimationSections).ArrayMax = 0;
  FMovieSceneBlendTypeField::Add((FMovieSceneBlendTypeField *)&this->_padding_,Absolute);
  *(uint *)&this->_padding_ = (uint)this->_padding_ | 5;
  return this;
}

// ~UMovieSceneGroomCacheTrack @ 14e0d15f0

void __thiscall
UMovieSceneGroomCacheTrack::~UMovieSceneGroomCacheTrack(UMovieSceneGroomCacheTrack *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneDecorationContainerObject__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneTrackVirtualAPI__;
  this->_padding_ = (longlong)&___7UMovieSceneGroomCacheTrack__6B_;
  pFVar1 = (this->AnimationSections).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7IMovieSceneTrackTemplateProducer__6B_;
  UMovieSceneNameableTrack::~UMovieSceneNameableTrack((UMovieSceneNameableTrack *)this);
  return;
}

// AddNewAnimation @ 14e0d4c60

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

UMovieSceneSection * __thiscall
UMovieSceneGroomCacheTrack::AddNewAnimation
          (UMovieSceneGroomCacheTrack *this,FFrameNumber param_1,UGroomComponent *param_2)

{
  undefined8 uVar1;
  UGroomCache *pUVar2;
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
    pUVar4 = UMovieSceneGroomCacheSection::StaticClass();
    iVar6 = (int)pUVar4->_padding_;
    if ((iVar6 <= *(int *)(pUVar3->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar6 * 8)
        == &pUVar4->_padding_)) goto LAB_14e0d4cb8;
  }
  pUVar3 = (UMovieSceneSection *)0x0;
LAB_14e0d4cb8:
  pUVar4 = Z_Construct_UClass_UMovieScene_NoRegister();
  pUVar5 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar4);
  uVar1 = *(undefined8 *)&pUVar5[7].field_0x20;
  fVar7 = UGroomComponent::GetGroomCacheDuration(param_2);
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
  pUVar2 = (param_2->GroomCache).field0_0x0.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UGroomCache *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  pUVar3[1]._padding_ = (longlong)pUVar2;
  (**(code **)this->_padding_)(&this->_padding_,pUVar3);
  return pUVar3;
}

// AddSection @ 14e0d4de0

void __thiscall
UMovieSceneGroomCacheTrack::AddSection(UMovieSceneGroomCacheTrack *this,UMovieSceneSection *param_1)

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

// CreateNewSection @ 14e0e4700

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMovieSceneSection * __thiscall
UMovieSceneGroomCacheTrack::CreateNewSection(UMovieSceneGroomCacheTrack *this)

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
  pUVar1 = UMovieSceneGroomCacheSection::StaticClass();
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

// CreateTemplateForSection @ 14e0e47e0

FMovieSceneEvalTemplatePtr * __thiscall
UMovieSceneGroomCacheTrack::CreateTemplateForSection
          (UMovieSceneGroomCacheTrack *this,FMovieSceneEvalTemplatePtr *__return_storage_ptr__,
          UMovieSceneSection *param_1)

{
  int iVar1;
  TRangeBound<FFrameNumber> TVar2;
  code *pcVar3;
  TEnumAsByte<ERangeBoundTypes::Type> TVar4;
  bool bVar5;
  UClass *pUVar6;
  FMovieSceneEvalTemplatePtr *pFVar7;
  FMovieSceneEvalTemplatePtr *pFVar8;
  FString *pFVar9;
  wchar_t *pwVar10;
  FFrameNumber FVar11;
  wchar_t *pwVar12;
  FFrameNumber FVar13;
  FString local_98;
  FString local_88;
  FString local_78;
  undefined **local_68;
  undefined1 local_60;
  undefined1 local_58;
  undefined8 local_54;
  FMovieSceneGroomCacheSectionTemplateParameters local_48;
  
  if (param_1 == (UMovieSceneSection *)0x0) {
    pFVar9 = GetTypeName<UMovieSceneGroomCacheSection>(&local_98);
    if ((pFVar9->Data).ArrayNum == 0) {
      pwVar12 = L"";
    }
    else {
      pwVar12 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar12);
  }
  pUVar6 = UMovieSceneGroomCacheSection::StaticClass();
  iVar1 = (int)pUVar6->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar6->_padding_)) {
    local_54 = 0;
    local_58 = 0;
    TVar2 = (param_1->SectionRange).Value.UpperBound;
    local_60 = 0;
    local_68 = &___7FMovieSceneGroomCacheSectionTemplate__6B_;
    TVar4 = TVar2.Type.Value;
    FVar13 = TVar2.Value.Value;
    if (TVar4.Value == '\x01') {
      FVar13.Value = FVar13.Value + 1;
    }
    else if (TVar4.Value == '\x02') {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Type != ERangeBoundTypes::Open",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                         ,99,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        pFVar7 = (FMovieSceneEvalTemplatePtr *)(*pcVar3)();
        return pFVar7;
      }
    }
    TVar2 = (param_1->SectionRange).Value.LowerBound;
    FVar11 = TVar2.Value.Value;
    TVar4 = TVar2.Type.Value;
    if (TVar4.Value != '\x01') {
      if (TVar4.Value == '\x02') {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Type != ERangeBoundTypes::Open",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                           ,99,L"");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          pFVar7 = (FMovieSceneEvalTemplatePtr *)(*pcVar3)();
          return pFVar7;
        }
      }
      FVar11.Value = FVar11.Value + 1;
    }
    FMovieSceneGroomCacheSectionTemplateParameters::FMovieSceneGroomCacheSectionTemplateParameters
              (&local_48,(FMovieSceneGroomCacheParams *)(param_1 + 1),FVar11,FVar13);
    __return_storage_ptr__->field_0x80 = __return_storage_ptr__->field_0x80 & 0xfe;
    __return_storage_ptr__->field_0x80 = __return_storage_ptr__->field_0x80 | 3;
    pFVar7 = __return_storage_ptr__;
    if ((__return_storage_ptr__->field_0x80 & 2) == 0) {
      pFVar7 = *(FMovieSceneEvalTemplatePtr **)__return_storage_ptr__;
    }
    pFVar7->field_0x8 = local_60;
    pFVar7->field_0x10 = local_58;
    *(undefined ***)pFVar7 = &___7FMovieSceneGroomCacheSectionTemplate__6B_;
    *(undefined8 *)&pFVar7->field_0x14 = local_54;
    *(longlong *)&pFVar7->field_0x20 = local_48._padding_;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       ((UObject *)local_48._padding_ != (UObject *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_48._padding_);
    }
    *(uint *)&pFVar7->field_0x38 = *(uint *)&pFVar7->field_0x38 & 0xfffffffe;
    *(undefined4 *)&pFVar7->field_0x28 = (undefined4)local_48._padding_;
    *(undefined4 *)&pFVar7->field_0x2c = local_48._padding_._4_4_;
    *(undefined4 *)&pFVar7->field_0x30 = (undefined4)local_48._padding_;
    *(undefined4 *)&pFVar7->field_0x34 = local_48._padding_._4_4_;
    *(uint *)&pFVar7->field_0x38 = *(uint *)&pFVar7->field_0x38 | (uint)local_48._padding_ & 1;
    *(int *)&pFVar7->field_0x40 = local_48.SectionStartTime.Value;
    *(int *)&pFVar7->field_0x44 = local_48.SectionEndTime.Value;
    if ((__return_storage_ptr__->field_0x80 & 1) == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("bIsValid",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                         ,0x97,
                         L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                        );
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        pFVar7 = (FMovieSceneEvalTemplatePtr *)(*pcVar3)();
        return pFVar7;
      }
    }
    pFVar7 = __return_storage_ptr__;
    if ((__return_storage_ptr__->field_0x80 & 2) == 0) {
      pFVar7 = *(FMovieSceneEvalTemplatePtr **)__return_storage_ptr__;
    }
    if ((__return_storage_ptr__->field_0x80 & 1) == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("bIsValid",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                         ,0x97,
                         L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                        );
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        pFVar7 = (FMovieSceneEvalTemplatePtr *)(*pcVar3)();
        return pFVar7;
      }
    }
    pFVar8 = __return_storage_ptr__;
    if ((__return_storage_ptr__->field_0x80 & 2) == 0) {
      pFVar8 = *(FMovieSceneEvalTemplatePtr **)__return_storage_ptr__;
    }
    if (pFVar7 != pFVar8) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(void*)&GetValue() == (BaseType*)((T*)&GetValue())",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                         ,0xce,L"TInlineValue cannot operate with multiple inheritance objects.");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        pFVar7 = (FMovieSceneEvalTemplatePtr *)(*pcVar3)();
        return pFVar7;
      }
    }
    return __return_storage_ptr__;
  }
  pFVar9 = GetTypeName<UMovieSceneGroomCacheSection>(&local_88);
  pwVar12 = L"";
  if ((pFVar9->Data).ArrayNum == 0) {
    pwVar10 = L"";
  }
  else {
    pwVar10 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
  }
  pFVar9 = GetFullNameForCastLogError<UMovieSceneSection_const_>(&local_78,param_1);
  if ((pFVar9->Data).ArrayNum != 0) {
    pwVar12 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar12,pwVar10);
}

// GetAllSections @ 14e0e8cc0

TArray<UMovieSceneSection_*,TSizedDefaultAllocator<32>_> * __thiscall
UMovieSceneGroomCacheTrack::GetAllSections(UMovieSceneGroomCacheTrack *this)

{
  return (TArray<UMovieSceneSection_*,TSizedDefaultAllocator<32>_> *)&this->AnimationSections;
}

// GetAnimSectionsAtTime @ 14e0e8cd0

TArray<UMovieSceneSection_*,TSizedDefaultAllocator<32>_> * __thiscall
UMovieSceneGroomCacheTrack::GetAnimSectionsAtTime
          (UMovieSceneGroomCacheTrack *this,
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
LAB_14e0e8d9e:
      puVar11 = &pUVar4[4].field_0x18;
      local_38[0] = 1;
      local_34 = param_1.Value;
      if (pUVar4[4].field_0x18 != '\x02') {
        if (*(int *)&pUVar4[4].field_0x1c <= param_1.Value) {
          if (*(int *)&pUVar4[4].field_0x1c < param_1.Value) {
            puVar11 = local_38;
          }
          if (pUVar4[4].field_0x18 != '\x01') goto LAB_14e0e8e71;
        }
        if (*(int *)(puVar11 + 4) != *(int *)&pUVar4[4].field_0x1c) goto LAB_14e0e8e71;
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
LAB_14e0e8d92:
      if (*(int *)(pcVar10 + 4) == *(int *)&pUVar4[4].field_0x14) goto LAB_14e0e8d9e;
    }
    else {
      if (param_1.Value < *(int *)&pUVar4[4].field_0x14) {
        pcVar10 = local_40;
      }
      if (cVar2 == '\x01') goto LAB_14e0e8d92;
    }
LAB_14e0e8e71:
    pFVar12 = pFVar12 + 8;
  } while( true );
}

// GetPrivateStaticClass @ 14e0ea7f0

UClass * __cdecl UMovieSceneGroomCacheTrack::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneGroomCacheTrack.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/HairStrandsCore",L"MovieSceneGroomCacheTrack",
               &Z_Registration_Info_UClass_UMovieSceneGroomCacheTrack.InnerSingleton,
               StaticRegisterNativesUMovieSceneGroomCacheTrack,0x130,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneGroomCacheTrack>,
               InternalVTableHelperCtorCaller<UMovieSceneGroomCacheTrack>,local_res8,
               UMovieSceneNameableTrack::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneGroomCacheTrack.InnerSingleton;
}

// HasSection @ 14e0f1d20

bool __thiscall
UMovieSceneGroomCacheTrack::HasSection(UMovieSceneGroomCacheTrack *this,UMovieSceneSection *param_1)

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

// IsEmpty @ 14e0f3370

bool __thiscall UMovieSceneGroomCacheTrack::IsEmpty(UMovieSceneGroomCacheTrack *this)

{
  return (this->AnimationSections).ArrayNum == 0;
}

// RemoveAllAnimationData @ 14e0f5820

void __thiscall UMovieSceneGroomCacheTrack::RemoveAllAnimationData(UMovieSceneGroomCacheTrack *this)

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

// RemoveSection @ 14e0f5860

void __thiscall
UMovieSceneGroomCacheTrack::RemoveSection
          (UMovieSceneGroomCacheTrack *this,UMovieSceneSection *param_1)

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

// RemoveSectionAt @ 14e0f5a10

void __thiscall
UMovieSceneGroomCacheTrack::RemoveSectionAt(UMovieSceneGroomCacheTrack *this,int param_1)

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

// StaticRegisterNativesUMovieSceneGroomCacheTrack @ 14e0f8460

void __cdecl UMovieSceneGroomCacheTrack::StaticRegisterNativesUMovieSceneGroomCacheTrack(void)

{
  return;
}

// SupportsType @ 14e0f84a0

bool __thiscall
UMovieSceneGroomCacheTrack::SupportsType
          (UMovieSceneGroomCacheTrack *this,TSubclassOf<UMovieSceneSection> param_1)

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
        goto LAB_14e0f84ea;
      }
    }
  }
  pUVar4 = (UClass *)0x0;
LAB_14e0f84ea:
  pUVar5 = UMovieSceneGroomCacheSection::StaticClass();
  return pUVar4 == pUVar5;
}

// _getUObject @ 14e0faea0

UObject * __thiscall UMovieSceneGroomCacheTrack::_getUObject(UMovieSceneGroomCacheTrack *this)

{
  return (UObject *)&this[-1]._padding_;
}

