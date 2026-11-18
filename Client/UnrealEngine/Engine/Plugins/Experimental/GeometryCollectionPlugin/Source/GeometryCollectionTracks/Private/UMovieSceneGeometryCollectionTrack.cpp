// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionTracks
// Functions: 19

// StaticClass @ 14e7fb630

UClass * __cdecl UMovieSceneGeometryCollectionTrack::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneGeometryCollectionTrack.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GeometryCollectionTracks",L"MovieSceneGeometryCollectionTrack",
               &Z_Registration_Info_UClass_UMovieSceneGeometryCollectionTrack.InnerSingleton,
               StaticRegisterNativesUMovieSceneGeometryCollectionTrack,0x130,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneGeometryCollectionTrack>,
               InternalVTableHelperCtorCaller<UMovieSceneGeometryCollectionTrack>,local_res8,
               UMovieSceneNameableTrack::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneGeometryCollectionTrack.InnerSingleton;
}

// UMovieSceneGeometryCollectionTrack @ 14e7fc720

UMovieSceneGeometryCollectionTrack * __thiscall
UMovieSceneGeometryCollectionTrack::UMovieSceneGeometryCollectionTrack
          (UMovieSceneGeometryCollectionTrack *this,FVTableHelper *param_1)

{
  UMovieSceneNameableTrack::UMovieSceneNameableTrack((UMovieSceneNameableTrack *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneDecorationContainerObject__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneTrackVirtualAPI__;
  this->_padding_ = (longlong)&___7UMovieSceneGeometryCollectionTrack__6B_;
  (this->AnimationSections).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AnimationSections).ArrayNum = 0;
  (this->AnimationSections).ArrayMax = 0;
  return this;
}

// UMovieSceneGeometryCollectionTrack @ 14e7fc770

UMovieSceneGeometryCollectionTrack * __thiscall
UMovieSceneGeometryCollectionTrack::UMovieSceneGeometryCollectionTrack
          (UMovieSceneGeometryCollectionTrack *this,FObjectInitializer *param_1)

{
  UMovieSceneNameableTrack::UMovieSceneNameableTrack((UMovieSceneNameableTrack *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneDecorationContainerObject__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneTrackVirtualAPI__;
  this->_padding_ = (longlong)&___7UMovieSceneGeometryCollectionTrack__6B_;
  (this->AnimationSections).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AnimationSections).ArrayNum = 0;
  (this->AnimationSections).ArrayMax = 0;
  FMovieSceneBlendTypeField::Add((FMovieSceneBlendTypeField *)&this->_padding_,Absolute);
  *(uint *)&this->_padding_ = (uint)this->_padding_ | 5;
  return this;
}

// ~UMovieSceneGeometryCollectionTrack @ 14e7fc850

void __thiscall
UMovieSceneGeometryCollectionTrack::~UMovieSceneGeometryCollectionTrack
          (UMovieSceneGeometryCollectionTrack *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneDecorationContainerObject__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneTrackVirtualAPI__;
  this->_padding_ = (longlong)&___7UMovieSceneGeometryCollectionTrack__6B_;
  pFVar1 = (this->AnimationSections).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7IMovieSceneTrackTemplateProducer__6B_;
  UMovieSceneNameableTrack::~UMovieSceneNameableTrack((UMovieSceneNameableTrack *)this);
  return;
}

// AddNewAnimation @ 14e7fcb20

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

UMovieSceneSection * __thiscall
UMovieSceneGeometryCollectionTrack::AddNewAnimation
          (UMovieSceneGeometryCollectionTrack *this,FFrameNumber param_1,
          UGeometryCollectionComponent *param_2)

{
  longlong *plVar1;
  UGeometryCollectionCache *pUVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  bool bVar8;
  uint uVar9;
  UMovieSceneSection *pUVar10;
  UClass *pUVar11;
  UObject *pUVar12;
  uint uVar13;
  int iVar14;
  double dVar15;
  undefined1 in_XMM2 [16];
  double dVar16;
  double dVar17;
  undefined1 in_XMM3 [16];
  undefined1 auVar18 [16];
  float fVar19;
  FSoftObjectPath local_68 [2];
  
  pUVar10 = (UMovieSceneSection *)(**(code **)(this->_padding_ + 0x358))();
  if (pUVar10 == (UMovieSceneSection *)0x0) {
LAB_14e7fcb80:
    pUVar10 = (UMovieSceneSection *)0x0;
  }
  else {
    pUVar11 = UMovieSceneGeometryCollectionSection::StaticClass();
    iVar14 = (int)pUVar11->_padding_;
    if ((*(int *)(pUVar10->_padding_ + 0x38) < iVar14) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(pUVar10->_padding_ + 0x30) + (longlong)iVar14 * 8) !=
        &pUVar11->_padding_)) goto LAB_14e7fcb80;
  }
  dVar7 = __real_c1e0000000000000;
  dVar6 = __real_41dfffffffc00000;
  pUVar2 = (param_2->CacheParameters).TargetCache.field0_0x0.DebugPtr;
  if ((pUVar2 != (UGeometryCollectionCache *)0x0) && (0 < (pUVar2->RecordedData).Records.ArrayNum))
  {
    pUVar11 = Z_Construct_UClass_UMovieScene_NoRegister();
    pUVar12 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar11);
    iVar14 = (pUVar2->RecordedData).Records.ArrayNum;
    uVar3 = *(undefined8 *)&pUVar12[7].field_0x20;
    uVar13 = iVar14 - 1;
    uVar9 = 0;
    if ((int)uVar13 < iVar14) {
      uVar9 = ~uVar13 >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar4 = (code *)swi(3);
      pUVar10 = (UMovieSceneSection *)(*pcVar4)();
      return pUVar10;
    }
    dVar15 = ((double)*(float *)((pUVar2->RecordedData).Records.AllocatorInstance.Data +
                                (longlong)(pUVar2->RecordedData).Records.ArrayNum * 0xb8 + -8) *
             (double)(int)uVar3) / (double)(int)((ulonglong)uVar3 >> 0x20);
    auVar18._8_8_ = 0;
    auVar18._0_8_ = dVar15;
    auVar18 = roundpd(in_XMM3,auVar18,1);
    dVar16 = auVar18._0_8_;
    in_XMM2._0_8_ = dVar15 - dVar16;
    in_XMM2._8_8_ = 0;
    if (dVar6 <= dVar16) {
      dVar16 = dVar6;
    }
    if (dVar16 <= dVar7) {
      dVar16 = dVar7;
    }
    iVar14 = (int)dVar16 + (int)in_XMM2._0_8_;
    fVar19 = (float)in_XMM2._0_8_ - (float)(int)in_XMM2._0_8_;
    if ((0.0 < fVar19) && (::FFrameTime::MaxSubframe <= fVar19)) {
      fVar19 = ::FFrameTime::MaxSubframe;
    }
    if (::FFrameTime::MaxSubframe <= fVar19) {
      fVar19 = ::FFrameTime::MaxSubframe;
    }
    if (fVar19 <= 0.0) {
      fVar19 = 0.0;
    }
    if ((iVar14 != 0) || (fVar19 != 0.0)) goto LAB_14e7fcd18;
  }
  pUVar11 = Z_Construct_UClass_UMovieScene_NoRegister();
  pUVar12 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar11);
  dVar17 = ((double)(int)*(undefined8 *)&pUVar12[7].field_0x20 * __real_4014000000000000) /
           (double)(int)((ulonglong)*(undefined8 *)&pUVar12[7].field_0x20 >> 0x20);
  auVar5._8_8_ = 0;
  auVar5._0_8_ = dVar17;
  auVar18 = roundpd(in_XMM2,auVar5,1);
  dVar15 = auVar18._0_8_;
  dVar16 = dVar15;
  if (dVar6 <= dVar15) {
    dVar16 = dVar6;
  }
  if (dVar16 <= dVar7) {
    dVar16 = dVar7;
  }
  iVar14 = (int)(dVar17 - dVar15) + (int)dVar16;
LAB_14e7fcd18:
  (**(code **)(pUVar10->_padding_ + 0x330))
            (pUVar10,&this->AnimationSections,param_1.Value,iVar14,0xffffffff);
  local_68[0].AssetPath.PackageName.ComparisonIndex.Value = 0;
  local_68[0].AssetPath.PackageName.Number = 0;
  local_68[0].AssetPath.AssetName.ComparisonIndex.Value = 0;
  local_68[0].AssetPath.AssetName.Number = 0;
  local_68[0].SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68[0].SubPathString.Data.ArrayNum = 0;
  local_68[0].SubPathString.Data.ArrayMax = 0;
  FSoftObjectPath::SetPath
            (local_68,(UObject *)(param_2->CacheParameters).TargetCache.field0_0x0.DebugPtr);
  plVar1 = &pUVar10[1]._padding_;
  pUVar10[1]._padding_ = (longlong)local_68[0].AssetPath.PackageName;
  pUVar10[1]._padding_ = (longlong)local_68[0].AssetPath.AssetName;
  if ((FUtf8String *)plVar1 != &local_68[0].SubPathString) {
    if ((void *)*plVar1 != (void *)0x0) {
      FMemory::Free((void *)*plVar1);
    }
    *plVar1 = (longlong)local_68[0].SubPathString.Data.AllocatorInstance.Data;
    *(int *)&pUVar10[1]._padding_ = local_68[0].SubPathString.Data.ArrayNum;
    *(int *)((longlong)&pUVar10[1]._padding_ + 4) = local_68[0].SubPathString.Data.ArrayMax;
    local_68[0].SubPathString.Data.ArrayNum = 0;
    local_68[0].SubPathString.Data.ArrayMax = 0;
    local_68[0].SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_68[0].SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68[0].SubPathString.Data.AllocatorInstance.Data);
  }
  (**(code **)this->_padding_)(&this->_padding_,pUVar10);
  return pUVar10;
}

// AddSection @ 14e7fce00

void __thiscall
UMovieSceneGeometryCollectionTrack::AddSection
          (UMovieSceneGeometryCollectionTrack *this,UMovieSceneSection *param_1)

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

// CreateNewSection @ 14e7fcff0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMovieSceneSection * __thiscall
UMovieSceneGeometryCollectionTrack::CreateNewSection(UMovieSceneGeometryCollectionTrack *this)

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
  pUVar1 = UMovieSceneGeometryCollectionSection::StaticClass();
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

// CreateTemplateForSection @ 14e7fd0d0

FMovieSceneEvalTemplatePtr * __thiscall
UMovieSceneGeometryCollectionTrack::CreateTemplateForSection
          (UMovieSceneGeometryCollectionTrack *this,
          FMovieSceneEvalTemplatePtr *__return_storage_ptr__,UMovieSceneSection *param_1)

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
  FFrameNumber FVar11;
  wchar_t *pwVar12;
  wchar_t *pwVar13;
  FFrameNumber FVar14;
  FMovieSceneGeometryCollectionParams local_a0;
  int local_68;
  int local_64;
  FString local_60;
  FString local_50;
  FString local_40;
  
  if (param_1 == (UMovieSceneSection *)0x0) {
    pFVar10 = GetTypeName<UMovieSceneGeometryCollectionSection_const_>(&local_60);
    if ((pFVar10->Data).ArrayNum == 0) {
      pwVar12 = L"";
    }
    else {
      pwVar12 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar12);
  }
  pUVar7 = UMovieSceneGeometryCollectionSection::StaticClass();
  iVar2 = (int)pUVar7->_padding_;
  if ((*(int *)(param_1->_padding_ + 0x38) < iVar2) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar2 * 8)
      != &pUVar7->_padding_)) {
    pFVar10 = GetTypeName<UMovieSceneGeometryCollectionSection_const_>(&local_50);
    pwVar12 = L"";
    if ((pFVar10->Data).ArrayNum == 0) {
      pwVar13 = L"";
    }
    else {
      pwVar13 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
    }
    pFVar10 = GetFullNameForCastLogError<UMovieSceneSection_const_>(&local_40,param_1);
    if ((pFVar10->Data).ArrayNum != 0) {
      pwVar12 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(pwVar12,pwVar13);
  }
  TVar3 = (param_1->SectionRange).Value.UpperBound;
  TVar5 = TVar3.Type.Value;
  FVar14 = TVar3.Value.Value;
  if (TVar5.Value == '\x01') {
    FVar14.Value = FVar14.Value + 1;
  }
  else if ((TVar5.Value == '\x02') &&
          (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                             ("Type != ERangeBoundTypes::Open",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                              ,99,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    pFVar8 = (FMovieSceneEvalTemplatePtr *)(*pcVar4)();
    return pFVar8;
  }
  TVar3 = (param_1->SectionRange).Value.LowerBound;
  TVar5 = TVar3.Type.Value;
  FVar11 = TVar3.Value.Value;
  if (TVar5.Value != '\x01') {
    if ((TVar5.Value == '\x02') &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Type != ERangeBoundTypes::Open",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                           ,99,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      pFVar8 = (FMovieSceneEvalTemplatePtr *)(*pcVar4)();
      return pFVar8;
    }
    FVar11.Value = FVar11.Value + 1;
  }
  FMovieSceneGeometryCollectionParams::FMovieSceneGeometryCollectionParams
            (&local_a0,(FMovieSceneGeometryCollectionParams *)(param_1 + 1));
  puVar1 = &__return_storage_ptr__->field_0x80;
  *puVar1 = *puVar1 & 0xfe;
  *puVar1 = *puVar1 | 3;
  local_a0._padding_ = (longlong)&___7FMovieSceneGeometryCollectionSectionTemplateParameters__6B_;
  pFVar8 = __return_storage_ptr__;
  if ((*puVar1 & 2) == 0) {
    pFVar8 = *(FMovieSceneEvalTemplatePtr **)__return_storage_ptr__;
  }
  *(undefined ***)pFVar8 = &___7FMovieSceneEvalTemplateBase__6B_;
  pFVar8->field_0x8 = 0;
  *(undefined ***)pFVar8 = &___7FMovieSceneEvalTemplate__6B_;
  pFVar8->field_0x10 = 0;
  *(undefined8 *)&pFVar8->field_0x14 = 0;
  *(undefined ***)pFVar8 = &___7FMovieSceneGeometryCollectionSectionTemplate__6B_;
  local_68 = FVar11.Value;
  local_64 = FVar14.Value;
  FMovieSceneGeometryCollectionParams::FMovieSceneGeometryCollectionParams
            ((FMovieSceneGeometryCollectionParams *)&pFVar8->field_0x20,&local_a0);
  *(undefined ***)&pFVar8->field_0x20 =
       &___7FMovieSceneGeometryCollectionSectionTemplateParameters__6B_;
  *(int *)&pFVar8->field_0x58 = local_68;
  *(int *)&pFVar8->field_0x5c = local_64;
  if (((*puVar1 & 1) == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("bIsValid",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                         ,0x97,
                         L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                        ), bVar6)) {
    pcVar4 = (code *)swi(3);
    pFVar8 = (FMovieSceneEvalTemplatePtr *)(*pcVar4)();
    return pFVar8;
  }
  pFVar8 = __return_storage_ptr__;
  if ((*puVar1 & 2) == 0) {
    pFVar8 = *(FMovieSceneEvalTemplatePtr **)__return_storage_ptr__;
  }
  if (((*puVar1 & 1) == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("bIsValid",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                         ,0x97,
                         L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                        ), bVar6)) {
    pcVar4 = (code *)swi(3);
    pFVar8 = (FMovieSceneEvalTemplatePtr *)(*pcVar4)();
    return pFVar8;
  }
  pFVar9 = __return_storage_ptr__;
  if ((*puVar1 & 2) == 0) {
    pFVar9 = *(FMovieSceneEvalTemplatePtr **)__return_storage_ptr__;
  }
  if ((pFVar8 != pFVar9) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(void*)&GetValue() == (BaseType*)((T*)&GetValue())",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                         ,0xce,L"TInlineValue cannot operate with multiple inheritance objects."),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    pFVar8 = (FMovieSceneEvalTemplatePtr *)(*pcVar4)();
    return pFVar8;
  }
  local_a0._padding_ = (longlong)&___7FMovieSceneGeometryCollectionParams__6B_;
  if (local_a0.GeometryCollectionCache.SubPathString.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a0.GeometryCollectionCache.SubPathString.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetAllSections @ 14e7fd750

TArray<UMovieSceneSection_*,TSizedDefaultAllocator<32>_> * __thiscall
UMovieSceneGeometryCollectionTrack::GetAllSections(UMovieSceneGeometryCollectionTrack *this)

{
  return (TArray<UMovieSceneSection_*,TSizedDefaultAllocator<32>_> *)&this->AnimationSections;
}

// GetAnimSectionsAtTime @ 14e7fd760

TArray<UMovieSceneSection_*,TSizedDefaultAllocator<32>_> * __thiscall
UMovieSceneGeometryCollectionTrack::GetAnimSectionsAtTime
          (UMovieSceneGeometryCollectionTrack *this,
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
LAB_14e7fd82e:
      puVar11 = &pUVar4[4].field_0x18;
      local_38[0] = 1;
      local_34 = param_1.Value;
      if (pUVar4[4].field_0x18 != '\x02') {
        if (*(int *)&pUVar4[4].field_0x1c <= param_1.Value) {
          if (*(int *)&pUVar4[4].field_0x1c < param_1.Value) {
            puVar11 = local_38;
          }
          if (pUVar4[4].field_0x18 != '\x01') goto LAB_14e7fd901;
        }
        if (*(int *)(puVar11 + 4) != *(int *)&pUVar4[4].field_0x1c) goto LAB_14e7fd901;
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
LAB_14e7fd822:
      if (*(int *)(pcVar10 + 4) == *(int *)&pUVar4[4].field_0x14) goto LAB_14e7fd82e;
    }
    else {
      if (param_1.Value < *(int *)&pUVar4[4].field_0x14) {
        pcVar10 = local_40;
      }
      if (cVar2 == '\x01') goto LAB_14e7fd822;
    }
LAB_14e7fd901:
    pFVar12 = pFVar12 + 8;
  } while( true );
}

// GetPrivateStaticClass @ 14e7fdb80

UClass * __cdecl UMovieSceneGeometryCollectionTrack::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneGeometryCollectionTrack.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GeometryCollectionTracks",L"MovieSceneGeometryCollectionTrack",
               &Z_Registration_Info_UClass_UMovieSceneGeometryCollectionTrack.InnerSingleton,
               StaticRegisterNativesUMovieSceneGeometryCollectionTrack,0x130,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneGeometryCollectionTrack>,
               InternalVTableHelperCtorCaller<UMovieSceneGeometryCollectionTrack>,local_res8,
               UMovieSceneNameableTrack::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneGeometryCollectionTrack.InnerSingleton;
}

// HasSection @ 14e7fe330

bool __thiscall
UMovieSceneGeometryCollectionTrack::HasSection
          (UMovieSceneGeometryCollectionTrack *this,UMovieSceneSection *param_1)

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

// IsEmpty @ 14e7fe3b0

bool __thiscall
UMovieSceneGeometryCollectionTrack::IsEmpty(UMovieSceneGeometryCollectionTrack *this)

{
  return (this->AnimationSections).ArrayNum == 0;
}

// RemoveAllAnimationData @ 14e7fe8f0

void __thiscall
UMovieSceneGeometryCollectionTrack::RemoveAllAnimationData(UMovieSceneGeometryCollectionTrack *this)

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

// RemoveSection @ 14e7fe930

void __thiscall
UMovieSceneGeometryCollectionTrack::RemoveSection
          (UMovieSceneGeometryCollectionTrack *this,UMovieSceneSection *param_1)

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

// RemoveSectionAt @ 14e7feae0

void __thiscall
UMovieSceneGeometryCollectionTrack::RemoveSectionAt
          (UMovieSceneGeometryCollectionTrack *this,int param_1)

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

// StaticRegisterNativesUMovieSceneGeometryCollectionTrack @ 14e7fed30

void __cdecl
UMovieSceneGeometryCollectionTrack::StaticRegisterNativesUMovieSceneGeometryCollectionTrack(void)

{
  return;
}

// SupportsType @ 14e7fed40

bool __thiscall
UMovieSceneGeometryCollectionTrack::SupportsType
          (UMovieSceneGeometryCollectionTrack *this,TSubclassOf<UMovieSceneSection> param_1)

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
        goto LAB_14e7fed8a;
      }
    }
  }
  pUVar4 = (UClass *)0x0;
LAB_14e7fed8a:
  pUVar5 = UMovieSceneGeometryCollectionSection::StaticClass();
  return pUVar4 == pUVar5;
}

// _getUObject @ 14e7ff110

UObject * __thiscall
UMovieSceneGeometryCollectionTrack::_getUObject(UMovieSceneGeometryCollectionTrack *this)

{
  return (UObject *)&this[-1]._padding_;
}

