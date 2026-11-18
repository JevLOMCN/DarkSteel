// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionTracks
// Functions: 14

// StaticClass @ 14e7fb6f0

UClass * __cdecl UMovieSceneGeometryCollectionSection::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneGeometryCollectionSection.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GeometryCollectionTracks",L"MovieSceneGeometryCollectionSection",
               &Z_Registration_Info_UClass_UMovieSceneGeometryCollectionSection.InnerSingleton,
               StaticRegisterNativesUMovieSceneGeometryCollectionSection,0x148,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneGeometryCollectionSection>,
               InternalVTableHelperCtorCaller<UMovieSceneGeometryCollectionSection>,local_res8,
               UMovieSceneSection::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneGeometryCollectionSection.InnerSingleton;
}

// UMovieSceneGeometryCollectionSection @ 14e7fc630

UMovieSceneGeometryCollectionSection * __thiscall
UMovieSceneGeometryCollectionSection::UMovieSceneGeometryCollectionSection
          (UMovieSceneGeometryCollectionSection *this,FVTableHelper *param_1)

{
  UMovieSceneSection::UMovieSceneSection((UMovieSceneSection *)this,param_1);
  this->_padding_ = (longlong)&___7UMovieSceneGeometryCollectionSection__6B_;
  (this->Params)._padding_ = (longlong)&___7FMovieSceneGeometryCollectionParams__6B_;
  (this->Params).GeometryCollectionCache.AssetPath.PackageName.ComparisonIndex = 0;
  (this->Params).GeometryCollectionCache.AssetPath.PackageName.Number = 0;
  (this->Params).GeometryCollectionCache.AssetPath.AssetName.ComparisonIndex = 0;
  (this->Params).GeometryCollectionCache.AssetPath.AssetName.Number = 0;
  (this->Params).GeometryCollectionCache.SubPathString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Params).GeometryCollectionCache.SubPathString.Data.ArrayNum = 0;
  (this->Params).GeometryCollectionCache.SubPathString.Data.ArrayMax = 0;
  (this->Params).StartFrameOffset = 0;
  (this->Params).EndFrameOffset = 0;
  (this->Params).PlayRate = 1.0;
  return this;
}

// UMovieSceneGeometryCollectionSection @ 14e7fc6a0

UMovieSceneGeometryCollectionSection * __thiscall
UMovieSceneGeometryCollectionSection::UMovieSceneGeometryCollectionSection
          (UMovieSceneGeometryCollectionSection *this,FObjectInitializer *param_1)

{
  UMovieSceneSection::UMovieSceneSection((UMovieSceneSection *)this,param_1);
  this->_padding_ = (longlong)&___7UMovieSceneGeometryCollectionSection__6B_;
  (this->Params)._padding_ = (longlong)&___7FMovieSceneGeometryCollectionParams__6B_;
  (this->Params).GeometryCollectionCache.AssetPath.PackageName.ComparisonIndex = 0;
  (this->Params).GeometryCollectionCache.AssetPath.PackageName.Number = 0;
  (this->Params).GeometryCollectionCache.AssetPath.AssetName.ComparisonIndex = 0;
  (this->Params).GeometryCollectionCache.AssetPath.AssetName.Number = 0;
  (this->Params).GeometryCollectionCache.SubPathString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Params).GeometryCollectionCache.SubPathString.Data.ArrayNum = 0;
  (this->Params).GeometryCollectionCache.SubPathString.Data.ArrayMax = 0;
  (this->Params).StartFrameOffset = 0;
  (this->Params).EndFrameOffset = 0;
  (this->Params).PlayRate = 1.0;
  *(undefined2 *)((longlong)&this->_padding_ + 1) = 0x101;
  *(undefined2 *)&this->_padding_ = 0x101;
  return this;
}

// ~UMovieSceneGeometryCollectionSection @ 14e7fc800

void __thiscall
UMovieSceneGeometryCollectionSection::~UMovieSceneGeometryCollectionSection
          (UMovieSceneGeometryCollectionSection *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UMovieSceneGeometryCollectionSection__6B_;
  (this->Params)._padding_ = (longlong)&___7FMovieSceneGeometryCollectionParams__6B_;
  pFVar1 = (this->Params).GeometryCollectionCache.SubPathString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UMovieSceneSection::~UMovieSceneSection((UMovieSceneSection *)this);
  return;
}

// GetAutoSizeRange @ 14e7fd940

TOptional<TRange<FFrameNumber>_> * __thiscall
UMovieSceneGeometryCollectionSection::GetAutoSizeRange
          (UMovieSceneGeometryCollectionSection *this,
          TOptional<TRange<FFrameNumber>_> *__return_storage_ptr__)

{
  undefined8 uVar1;
  code *pcVar2;
  TRangeBound<FFrameNumber> TVar3;
  char cVar4;
  bool bVar5;
  UClass *pUVar6;
  UObject *pUVar7;
  TOptional<TRange<FFrameNumber>_> *pTVar8;
  int iVar9;
  FFrameNumber FVar10;
  float fVar11;
  double dVar12;
  double dVar13;
  undefined1 in_XMM2 [16];
  undefined1 auVar14 [16];
  double dVar15;
  undefined4 local_18;
  undefined4 uStack_10;
  
  pUVar6 = Z_Construct_UClass_UMovieScene_NoRegister();
  pUVar7 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar6);
  uVar1 = *(undefined8 *)&pUVar7[7].field_0x20;
  fVar11 = FMovieSceneGeometryCollectionParams::GetSequenceLength(&this->Params);
  dVar15 = ((double)fVar11 * (double)(int)uVar1) / (double)(int)((ulonglong)uVar1 >> 0x20);
  auVar14._8_8_ = 0;
  auVar14._0_8_ = dVar15;
  auVar14 = roundpd(in_XMM2,auVar14,1);
  dVar12 = auVar14._0_8_;
  dVar13 = dVar12;
  if (__real_41dfffffffc00000 <= dVar12) {
    dVar13 = __real_41dfffffffc00000;
  }
  if (dVar13 <= __real_c1e0000000000000) {
    dVar13 = __real_c1e0000000000000;
  }
  iVar9 = (int)((ulonglong)this->_padding_ >> 0x20);
  cVar4 = (char)this->_padding_;
  if (cVar4 != '\x01') {
    if (cVar4 == '\x02') {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Type != ERangeBoundTypes::Open",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                         ,99,L"");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        pTVar8 = (TOptional<TRange<FFrameNumber>_> *)(*pcVar2)();
        return pTVar8;
      }
    }
    iVar9 = iVar9 + 1;
  }
  FVar10.Value = (int)((ulonglong)this->_padding_ >> 0x20);
  cVar4 = (char)this->_padding_;
  if (cVar4 != '\x01') {
    if (cVar4 == '\x02') {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Type != ERangeBoundTypes::Open",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                         ,99,L"");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        pTVar8 = (TOptional<TRange<FFrameNumber>_> *)(*pcVar2)();
        return pTVar8;
      }
    }
    FVar10.Value = FVar10.Value + 1;
  }
  local_18 = CONCAT31(local_18._1_3_,1);
  TVar3.Value.Value = FVar10.Value;
  TVar3._0_4_ = local_18;
  __return_storage_ptr__->bIsSet = true;
  (__return_storage_ptr__->TypedValue).LowerBound = TVar3;
  (__return_storage_ptr__->TypedValue).UpperBound =
       (TRangeBound<FFrameNumber>)
       (CONCAT44((int)(dVar15 - dVar12) + (int)dVar13 + iVar9,uStack_10) & 0xffffffffffffff00);
  return __return_storage_ptr__;
}

// GetOffsetTime @ 14e7fda90

TOptional<FFrameTime> * __thiscall
UMovieSceneGeometryCollectionSection::GetOffsetTime
          (UMovieSceneGeometryCollectionSection *this,TOptional<FFrameTime> *__return_storage_ptr__)

{
  FFrameTime FVar1;
  
  FVar1.SubFrame = 0.0;
  FVar1.FrameNumber.Value = (this->Params).StartFrameOffset.Value;
  __return_storage_ptr__->TypedValue = FVar1;
  __return_storage_ptr__->bIsSet = true;
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14e7fdac0

UClass * __cdecl UMovieSceneGeometryCollectionSection::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneGeometryCollectionSection.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GeometryCollectionTracks",L"MovieSceneGeometryCollectionSection",
               &Z_Registration_Info_UClass_UMovieSceneGeometryCollectionSection.InnerSingleton,
               StaticRegisterNativesUMovieSceneGeometryCollectionSection,0x148,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneGeometryCollectionSection>,
               InternalVTableHelperCtorCaller<UMovieSceneGeometryCollectionSection>,local_res8,
               UMovieSceneSection::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneGeometryCollectionSection.InnerSingleton;
}

// GetSnapTimes @ 14e7fdd40

void __thiscall
UMovieSceneGeometryCollectionSection::GetSnapTimes
          (UMovieSceneGeometryCollectionSection *this,
          TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *param_1,bool param_2)

{
  undefined8 uVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  float fVar4;
  float fVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  UClass *pUVar9;
  UObject *pUVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  float fVar15;
  undefined1 auVar16 [16];
  double dVar17;
  double dVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  float fVar21;
  int local_88;
  float fStack_84;
  undefined8 local_80;
  undefined8 local_78;
  
  UMovieSceneSection::GetSnapTimes((UMovieSceneSection *)this,param_1,param_2);
  pUVar9 = Z_Construct_UClass_UMovieScene_NoRegister();
  pUVar10 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar9);
  uVar1 = *(undefined8 *)&pUVar10[7].field_0x20;
  iVar14 = (int)((ulonglong)this->_padding_ >> 0x20);
  cVar6 = (char)this->_padding_;
  local_80 = uVar1;
  if (cVar6 != '\x01') {
    if ((cVar6 == '\x02') &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Type != ERangeBoundTypes::Open",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                           ,99,L""), bVar7)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar14 = iVar14 + 1;
  }
  iVar11 = (int)((ulonglong)this->_padding_ >> 0x20);
  cVar6 = (char)this->_padding_;
  if (cVar6 == '\x01') {
    iVar11 = iVar11 + 1;
  }
  else if ((cVar6 == '\x02') &&
          (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                             ("Type != ERangeBoundTypes::Open",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                              ,99,L""), bVar7)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  fVar21 = (this->Params).PlayRate;
  if ((float)((uint)fVar21 & __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_322bcc77) {
    fVar21 = __real_3f800000;
  }
  uVar12 = (this->Params).EndFrameOffset.Value + (this->Params).StartFrameOffset.Value;
  local_78 = (ulonglong)uVar12;
  fVar15 = FMovieSceneGeometryCollectionParams::GetSequenceLength(&this->Params);
  fVar5 = __real_40000000;
  fVar4 = __real_3f000000;
  auVar19._0_8_ =
       ((double)((longlong)(int)uVar12 * (longlong)local_80._4_4_) +
       (double)local_78._4_4_ * (double)local_80._4_4_) / ((double)fVar21 * (double)(int)uVar1);
  auVar19._8_8_ = 0;
  dVar17 = ((double)(float)((double)fVar15 - auVar19._0_8_) * (double)(int)uVar1) /
           (double)(int)((ulonglong)uVar1 >> 0x20);
  auVar20._8_8_ = 0;
  auVar20._0_8_ = dVar17;
  auVar20 = roundpd(auVar19,auVar20,1);
  dVar18 = auVar20._0_8_;
  dVar17 = dVar17 - dVar18;
  if (__real_41dfffffffc00000 <= dVar18) {
    dVar18 = __real_41dfffffffc00000;
  }
  if (dVar18 <= __real_c1e0000000000000) {
    dVar18 = __real_c1e0000000000000;
  }
  iVar8 = (int)dVar17;
  iVar13 = (int)dVar18 + iVar8;
  fVar21 = (float)dVar17 - (float)iVar8;
  if ((0.0 < fVar21) && (::FFrameTime::MaxSubframe <= fVar21)) {
    fVar21 = ::FFrameTime::MaxSubframe;
  }
  if (::FFrameTime::MaxSubframe <= fVar21) {
    fVar21 = ::FFrameTime::MaxSubframe;
  }
  if (fVar21 <= 0.0) {
    fVar21 = 0.0;
  }
  if (1 < iVar13) {
    fStack_84 = 0.0;
    local_88 = iVar14;
    while( true ) {
      local_80 = CONCAT44(fStack_84,local_88);
      if ((iVar11 + -1 <= local_88) && ((local_88 != iVar11 + -1 || (0.0 <= fStack_84)))) break;
      pFVar2 = (param_1->AllocatorInstance).Data;
      if ((pFVar2 <= (FScriptContainerElement *)&local_88) &&
         (((FScriptContainerElement *)&local_88 < pFVar2 + (longlong)param_1->ArrayMax * 4 &&
          (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar7)))) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar14 = param_1->ArrayNum;
      if (iVar14 == param_1->ArrayMax) {
        iVar14 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&param_1->AllocatorInstance,&param_1->ArrayMax);
        param_1->ArrayNum = iVar14;
      }
      param_1->ArrayNum = iVar14 + 1;
      *(int *)((param_1->AllocatorInstance).Data + (longlong)iVar14 * 4) = local_88;
      fStack_84 = fVar21 + fStack_84;
      iVar14 = ((int)ROUND(fStack_84 * fVar5 - fVar4) >> 1) + iVar13;
      local_88 = local_88 + iVar14;
      iVar8 = (int)fStack_84;
      fVar15 = fStack_84;
      if ((iVar8 != -0x80000000) && ((float)iVar8 != fStack_84)) {
        auVar16._4_4_ = fStack_84;
        auVar16._0_4_ = fStack_84;
        auVar16._8_8_ = 0;
        uVar12 = movmskps(iVar14,auVar16);
        fVar15 = (float)(int)(iVar8 - (uVar12 & 1));
      }
      fStack_84 = fStack_84 - fVar15;
    }
  }
  return;
}

// GetSourceObject @ 14e7fe0d0

UObject * __thiscall
UMovieSceneGeometryCollectionSection::GetSourceObject(UMovieSceneGeometryCollectionSection *this)

{
  UObject *pUVar1;
  
  pUVar1 = FSoftObjectPath::ResolveObject(&(this->Params).GeometryCollectionCache);
  return pUVar1;
}

// MapTimeToAnimation @ 14e7fe720

float __thiscall
UMovieSceneGeometryCollectionSection::MapTimeToAnimation
          (UMovieSceneGeometryCollectionSection *this,FFrameTime param_1,FFrameRate param_2)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  FMovieSceneGeometryCollectionSectionTemplateParameters local_58;
  
  iVar4 = (int)((ulonglong)this->_padding_ >> 0x20);
  cVar2 = (char)this->_padding_;
  if (cVar2 == '\x01') {
    iVar4 = iVar4 + 1;
  }
  else if (cVar2 == '\x02') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Type != ERangeBoundTypes::Open",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                       ,99,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      fVar6 = (float)(*pcVar1)();
      return fVar6;
    }
  }
  iVar5 = (int)((ulonglong)this->_padding_ >> 0x20);
  cVar2 = (char)this->_padding_;
  if (cVar2 != '\x01') {
    if (cVar2 == '\x02') {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Type != ERangeBoundTypes::Open",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                         ,99,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        fVar6 = (float)(*pcVar1)();
        return fVar6;
      }
    }
    iVar5 = iVar5 + 1;
  }
  FMovieSceneGeometryCollectionParams::FMovieSceneGeometryCollectionParams
            ((FMovieSceneGeometryCollectionParams *)&local_58,&this->Params);
  local_58._padding_ = (longlong)&___7FMovieSceneGeometryCollectionSectionTemplateParameters__6B_;
  local_58.SectionStartTime.Value = iVar5;
  local_58.SectionEndTime.Value = iVar4;
  fVar6 = FMovieSceneGeometryCollectionSectionTemplateParameters::MapTimeToAnimation
                    (&local_58,param_1,param_2);
  local_58._padding_ = (longlong)&___7FMovieSceneGeometryCollectionParams__6B_;
  if ((void *)local_58._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_58._padding_);
  }
  return fVar6;
}

// MigrateFrameTimes @ 14e7fe850

void __thiscall
UMovieSceneGeometryCollectionSection::MigrateFrameTimes
          (UMovieSceneGeometryCollectionSection *this,FFrameRate param_1,FFrameRate param_2)

{
  FFrameRate FVar1;
  FFrameRate FVar2;
  FFrameTime FVar3;
  uint local_res8 [2];
  
  local_res8[0] = (this->Params).StartFrameOffset.Value;
  if (0 < (int)local_res8[0]) {
    local_res8[1] = 0;
    FVar1.Denominator = 0;
    FVar1.Numerator = local_res8[0];
    FVar3 = ConvertFrameTime((FFrameTime)local_res8,FVar1,param_1);
    (this->Params).StartFrameOffset.Value = *(int *)FVar3;
  }
  local_res8[0] = (this->Params).EndFrameOffset.Value;
  if (0 < (int)local_res8[0]) {
    local_res8[1] = 0;
    FVar2.Denominator = 0;
    FVar2.Numerator = local_res8[0];
    FVar3 = ConvertFrameTime((FFrameTime)local_res8,FVar2,param_1);
    (this->Params).EndFrameOffset.Value = *(int *)FVar3;
  }
  return;
}

// SplitSection @ 14e7fec20

UMovieSceneSection * __thiscall
UMovieSceneGeometryCollectionSection::SplitSection
          (UMovieSceneGeometryCollectionSection *this,FQualifiedFrameTime *param_1,bool param_2)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  FFrameNumber FVar4;
  UClass *pUVar5;
  undefined4 extraout_var;
  UMovieSceneSection *pUVar6;
  FFrameRate FVar7;
  undefined4 uVar8;
  UMovieSceneSection *pUVar9;
  FFrameTime local_28;
  FName FStack_20;
  
  iVar1 = (this->Params).StartFrameOffset.Value;
  pUVar5 = Z_Construct_UClass_UMovieScene_NoRegister();
  UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar5);
  uVar3 = this->_padding_;
  if ((char)uVar3 == '\x02') {
    uVar8 = 0;
  }
  else {
    FVar7 = (FFrameRate)(uVar3 >> 0x20);
    if ((char)uVar3 != '\x01') {
      FVar7.Numerator = (int)(uVar3 >> 0x20) + 1;
      FVar7.Denominator = 0;
    }
    local_28 = param_1->Time;
    FStack_20.ComparisonIndex.Value = (param_1->Rate).Numerator;
    FStack_20.Number = (param_1->Rate).Denominator;
    FVar4 = GetStartOffsetAtTrimTime
                      ((FQualifiedFrameTime *)&stack0x00000008,
                       (FMovieSceneGeometryCollectionParams *)&stack0xffffffffffffffd8,
                       (int)this + 0x110,FVar7);
    uVar8 = *(undefined4 *)CONCAT44(extraout_var,FVar4.Value);
  }
  local_28 = param_1->Time;
  FStack_20.ComparisonIndex.Value = (param_1->Rate).Numerator;
  FStack_20.Number = (param_1->Rate).Denominator;
  pUVar6 = UMovieSceneSection::SplitSection
                     ((UMovieSceneSection *)this,(FQualifiedFrameTime *)&stack0xffffffffffffffd8,
                      param_2);
  if (pUVar6 != (UMovieSceneSection *)0x0) {
    pUVar5 = StaticClass();
    iVar2 = (int)pUVar5->_padding_;
    pUVar9 = (UMovieSceneSection *)0x0;
    if ((iVar2 <= *(int *)(pUVar6->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar6->_padding_ + 0x30) + (longlong)iVar2 * 8)
        == &pUVar5->_padding_)) {
      pUVar9 = pUVar6;
    }
    *(undefined4 *)&pUVar9[1]._padding_ = uVar8;
  }
  (this->Params).StartFrameOffset.Value = iVar1;
  return pUVar6;
}

// StaticRegisterNativesUMovieSceneGeometryCollectionSection @ 14e7fed20

void __cdecl
UMovieSceneGeometryCollectionSection::StaticRegisterNativesUMovieSceneGeometryCollectionSection
          (void)

{
  return;
}

// TrimSection @ 14e7fedb0

void __thiscall
UMovieSceneGeometryCollectionSection::TrimSection
          (UMovieSceneGeometryCollectionSection *this,FQualifiedFrameTime *param_1,bool param_2,
          bool param_3)

{
  code *pcVar1;
  bool bVar2;
  FFrameNumber FVar3;
  UClass *pUVar4;
  undefined4 extraout_var;
  int iVar5;
  uint uVar6;
  FFrameRate FVar7;
  FQualifiedFrameTime local_38;
  FFrameTime local_28;
  FName FStack_20;
  FName local_18;
  FFrameRate FStack_10;
  
  UObjectBase::AtomicallySetFlags((UObjectBase *)this,RF_Transactional);
  bVar2 = UMovieSceneSection::TryModify((UMovieSceneSection *)this,true);
  if (bVar2) {
    if (param_2) {
      pUVar4 = Z_Construct_UClass_UMovieScene_NoRegister();
      UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar4);
      FVar7 = (FFrameRate)this->_padding_;
      if ((char)FVar7.Numerator == '\x02') {
        iVar5 = 0;
      }
      else {
        uVar6 = FVar7.Numerator & 0xff;
        local_38.Rate = FVar7;
        if ((char)FVar7.Numerator == '\x01') {
          if (uVar6 == 2) {
            bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("Type != ERangeBoundTypes::Open",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                               ,99,L"");
            if (bVar2) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
          }
          uVar6 = local_38.Rate.Denominator;
        }
        else {
          if (uVar6 == 2) {
            bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("Type != ERangeBoundTypes::Open",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                               ,99,L"");
            if (bVar2) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
          }
          uVar6 = local_38.Rate.Denominator + 1;
        }
        FVar7.Denominator = 0;
        FVar7.Numerator = uVar6;
        local_28 = param_1->Time;
        FStack_20.ComparisonIndex.Value = (param_1->Rate).Numerator;
        FStack_20.Number = (param_1->Rate).Denominator;
        FVar3 = GetStartOffsetAtTrimTime
                          (&local_38,(FMovieSceneGeometryCollectionParams *)&stack0xffffffffffffffd8
                           ,(int)this + 0x110,FVar7);
        iVar5 = *(int *)CONCAT44(extraout_var,FVar3.Value);
      }
      (this->Params).StartFrameOffset.Value = iVar5;
    }
    local_18.ComparisonIndex.Value = *(uint *)&(param_1->Time).FrameNumber;
    local_18.Number = (uint)(param_1->Time).SubFrame;
    FStack_10 = param_1->Rate;
    UMovieSceneSection::TrimSection
              ((UMovieSceneSection *)this,(FQualifiedFrameTime *)&local_18,param_2,param_3);
  }
  return;
}

