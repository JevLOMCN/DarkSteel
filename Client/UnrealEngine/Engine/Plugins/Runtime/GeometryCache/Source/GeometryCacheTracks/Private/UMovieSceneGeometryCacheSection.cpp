// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCacheTracks
// Functions: 17

// StaticClass @ 14cd86b40

UClass * __cdecl UMovieSceneGeometryCacheSection::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneGeometryCacheSection.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GeometryCacheTracks",L"MovieSceneGeometryCacheSection",
               &Z_Registration_Info_UClass_UMovieSceneGeometryCacheSection.InnerSingleton,
               StaticRegisterNativesUMovieSceneGeometryCacheSection,0x158,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneGeometryCacheSection>,
               InternalVTableHelperCtorCaller<UMovieSceneGeometryCacheSection>,local_res8,
               UMovieSceneSection::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneGeometryCacheSection.InnerSingleton;
}

// UMovieSceneGeometryCacheSection @ 14cd88390

UMovieSceneGeometryCacheSection * __thiscall
UMovieSceneGeometryCacheSection::UMovieSceneGeometryCacheSection
          (UMovieSceneGeometryCacheSection *this,FVTableHelper *param_1)

{
  FUtf8String *this_00;
  undefined1 *puVar1;
  float fVar2;
  
  UMovieSceneSection::UMovieSceneSection((UMovieSceneSection *)this,param_1);
  this_00 = &(this->Params).GeometryCache_DEPRECATED.SubPathString;
  this->_padding_ = (longlong)&___7UMovieSceneGeometryCacheSection__6B_;
  (this->Params).FirstLoopStartFrameOffset = 0;
  (this->Params).StartFrameOffset = 0;
  (this->Params).EndFrameOffset.Value = 0;
  (this_00->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Params).GeometryCache_DEPRECATED.SubPathString.Data.ArrayNum = 0;
  (this->Params).GeometryCache_DEPRECATED.SubPathString.Data.ArrayMax = 0;
  (this->Params).GeometryCacheAsset.field0_0x0.DebugPtr = (UGeometryCache *)0x0;
  (this->Params).GeometryCache_DEPRECATED.AssetPath.AssetName.ComparisonIndex = 0;
  (this->Params).GeometryCache_DEPRECATED.AssetPath.AssetName.Number = 0;
  (this->Params).GeometryCache_DEPRECATED.AssetPath.PackageName.ComparisonIndex = 0;
  (this->Params).GeometryCache_DEPRECATED.AssetPath.PackageName.Number = 0;
  FUtf8String::Reset(this_00,0);
  fVar2 = GeometryCacheDeprecatedMagicNumber;
  (this->Params).bReverse = 0;
  (this->Params).StartOffset_DEPRECATED = fVar2;
  (this->Params).EndOffset_DEPRECATED = fVar2;
  (this->Params).PlayRate = 1.0;
  return this;
}

// UMovieSceneGeometryCacheSection @ 14cd88420

UMovieSceneGeometryCacheSection * __thiscall
UMovieSceneGeometryCacheSection::UMovieSceneGeometryCacheSection
          (UMovieSceneGeometryCacheSection *this,FObjectInitializer *param_1)

{
  FUtf8String *this_00;
  undefined1 *puVar1;
  float fVar2;
  
  UMovieSceneSection::UMovieSceneSection((UMovieSceneSection *)this,param_1);
  this_00 = &(this->Params).GeometryCache_DEPRECATED.SubPathString;
  this->_padding_ = (longlong)&___7UMovieSceneGeometryCacheSection__6B_;
  (this->Params).FirstLoopStartFrameOffset = 0;
  (this->Params).StartFrameOffset = 0;
  (this->Params).EndFrameOffset.Value = 0;
  (this_00->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Params).GeometryCache_DEPRECATED.SubPathString.Data.ArrayNum = 0;
  (this->Params).GeometryCache_DEPRECATED.SubPathString.Data.ArrayMax = 0;
  (this->Params).GeometryCacheAsset.field0_0x0.DebugPtr = (UGeometryCache *)0x0;
  (this->Params).GeometryCache_DEPRECATED.AssetPath.AssetName.ComparisonIndex = 0;
  (this->Params).GeometryCache_DEPRECATED.AssetPath.AssetName.Number = 0;
  (this->Params).GeometryCache_DEPRECATED.AssetPath.PackageName.ComparisonIndex = 0;
  (this->Params).GeometryCache_DEPRECATED.AssetPath.PackageName.Number = 0;
  FUtf8String::Reset(this_00,0);
  fVar2 = GeometryCacheDeprecatedMagicNumber;
  (this->Params).bReverse = 0;
  (this->Params).StartOffset_DEPRECATED = fVar2;
  (this->Params).EndOffset_DEPRECATED = fVar2;
  (this->Params).PlayRate = 1.0;
  *(undefined2 *)((longlong)&this->_padding_ + 1) = 0x101;
  *(undefined2 *)&this->_padding_ = 0x201;
  return this;
}

// ~UMovieSceneGeometryCacheSection @ 14cd88580

void __thiscall
UMovieSceneGeometryCacheSection::~UMovieSceneGeometryCacheSection
          (UMovieSceneGeometryCacheSection *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UMovieSceneGeometryCacheSection__6B_;
  pFVar1 = (this->Params).GeometryCache_DEPRECATED.SubPathString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UMovieSceneSection::~UMovieSceneSection((UMovieSceneSection *)this);
  return;
}

// GetAutoSizeRange @ 14cd897d0

TOptional<TRange<FFrameNumber>_> * __thiscall
UMovieSceneGeometryCacheSection::GetAutoSizeRange
          (UMovieSceneGeometryCacheSection *this,
          TOptional<TRange<FFrameNumber>_> *__return_storage_ptr__)

{
  UGeometryCache *this_00;
  undefined8 uVar1;
  code *pcVar2;
  TRangeBound<FFrameNumber> TVar3;
  char cVar4;
  bool bVar5;
  UClass *pUVar6;
  UObject *pUVar7;
  TOptional<TRange<FFrameNumber>_> *pTVar8;
  int iVar9;
  int iVar10;
  FFrameNumber FVar11;
  float fVar12;
  double dVar13;
  double dVar14;
  undefined1 in_XMM3 [16];
  undefined1 auVar15 [16];
  undefined4 local_28;
  undefined4 uStack_20;
  
  pUVar6 = Z_Construct_UClass_UMovieScene_NoRegister();
  pUVar7 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar6);
  this_00 = (this->Params).GeometryCacheAsset.field0_0x0.DebugPtr;
  uVar1 = *(undefined8 *)&pUVar7[7].field_0x20;
  if (this_00 == (UGeometryCache *)0x0) {
    fVar12 = 0.0;
  }
  else {
    fVar12 = UGeometryCache::CalculateDuration(this_00);
  }
  dVar13 = ((double)(int)uVar1 * (double)fVar12) / (double)(int)((ulonglong)uVar1 >> 0x20);
  auVar15._8_8_ = 0;
  auVar15._0_8_ = dVar13;
  auVar15 = roundpd(in_XMM3,auVar15,1);
  dVar14 = auVar15._0_8_;
  dVar13 = dVar13 - dVar14;
  if (__real_41dfffffffc00000 <= dVar14) {
    dVar14 = __real_41dfffffffc00000;
  }
  if (dVar14 <= __real_c1e0000000000000) {
    dVar14 = __real_c1e0000000000000;
  }
  iVar9 = (int)dVar13;
  fVar12 = (float)dVar13 - (float)iVar9;
  if ((0.0 < fVar12) && (::FFrameTime::MaxSubframe <= fVar12)) {
    fVar12 = ::FFrameTime::MaxSubframe;
  }
  if (::FFrameTime::MaxSubframe <= fVar12) {
    fVar12 = ::FFrameTime::MaxSubframe;
  }
  if (fVar12 <= 0.0) {
    fVar12 = 0.0;
  }
  fVar12 = fVar12 + __real_3f000000;
  iVar10 = (int)((ulonglong)this->_padding_ >> 0x20);
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
    iVar10 = iVar10 + 1;
  }
  FVar11.Value = (int)((ulonglong)this->_padding_ >> 0x20);
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
    FVar11.Value = FVar11.Value + 1;
  }
  local_28 = CONCAT31(local_28._1_3_,1);
  TVar3.Value.Value = FVar11.Value;
  TVar3._0_4_ = local_28;
  __return_storage_ptr__->bIsSet = true;
  (__return_storage_ptr__->TypedValue).LowerBound = TVar3;
  (__return_storage_ptr__->TypedValue).UpperBound =
       (TRangeBound<FFrameNumber>)
       (CONCAT44((int)fVar12 + (int)dVar14 + iVar9 + iVar10 + 1,uStack_20) & 0xffffffffffffff00);
  return __return_storage_ptr__;
}

// GetOffsetTime @ 14cd89970

TOptional<FFrameTime> * __thiscall
UMovieSceneGeometryCacheSection::GetOffsetTime
          (UMovieSceneGeometryCacheSection *this,TOptional<FFrameTime> *__return_storage_ptr__)

{
  FFrameTime FVar1;
  
  FVar1.SubFrame = 0.0;
  FVar1.FrameNumber.Value = (this->Params).FirstLoopStartFrameOffset.Value;
  __return_storage_ptr__->TypedValue = FVar1;
  __return_storage_ptr__->bIsSet = true;
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14cd899a0

UClass * __cdecl UMovieSceneGeometryCacheSection::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneGeometryCacheSection.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GeometryCacheTracks",L"MovieSceneGeometryCacheSection",
               &Z_Registration_Info_UClass_UMovieSceneGeometryCacheSection.InnerSingleton,
               StaticRegisterNativesUMovieSceneGeometryCacheSection,0x158,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneGeometryCacheSection>,
               InternalVTableHelperCtorCaller<UMovieSceneGeometryCacheSection>,local_res8,
               UMovieSceneSection::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneGeometryCacheSection.InnerSingleton;
}

// GetSnapTimes @ 14cd89b40

void __thiscall
UMovieSceneGeometryCacheSection::GetSnapTimes
          (UMovieSceneGeometryCacheSection *this,
          TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *param_1,bool param_2)

{
  uint uVar1;
  undefined8 uVar2;
  UGeometryCache *this_00;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  float fVar5;
  char cVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  UClass *pUVar10;
  UObject *pUVar11;
  longlong lVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  float fVar18;
  undefined1 extraout_var [12];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  float fVar21;
  double dVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  double dVar25;
  undefined1 auVar26 [16];
  double dVar27;
  double dVar28;
  double dVar29;
  float fVar30;
  float fVar31;
  double dVar32;
  double dVar33;
  int local_b8;
  float fStack_b4;
  int local_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  ulonglong local_a0;
  ulonglong local_98;
  
  UMovieSceneSection::GetSnapTimes((UMovieSceneSection *)this,param_1,param_2);
  pUVar10 = Z_Construct_UClass_UMovieScene_NoRegister();
  pUVar11 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar10);
  uVar2 = *(undefined8 *)&pUVar11[7].field_0x20;
  iVar17 = (int)((ulonglong)this->_padding_ >> 0x20);
  cVar6 = (char)this->_padding_;
  local_a8 = uVar2;
  if (cVar6 != '\x01') {
    if (cVar6 == '\x02') {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Type != ERangeBoundTypes::Open",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                         ,99,L"");
      if (bVar7) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    iVar17 = iVar17 + 1;
  }
  iVar16 = (int)((ulonglong)this->_padding_ >> 0x20);
  cVar6 = (char)this->_padding_;
  if (cVar6 == '\x01') {
    iVar16 = iVar16 + 1;
  }
  else if (cVar6 == '\x02') {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Type != ERangeBoundTypes::Open",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                       ,99,L"");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  fVar31 = (this->Params).PlayRate;
  iVar16 = iVar16 + -1;
  if ((float)((uint)fVar31 & __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_322bcc77) {
    fVar31 = __real_3f800000;
  }
  uVar13 = (this->Params).EndFrameOffset.Value + (this->Params).StartFrameOffset.Value;
  local_a0 = (ulonglong)uVar13;
  lVar12 = (longlong)local_a8._4_4_;
  this_00 = (this->Params).GeometryCacheAsset.field0_0x0.DebugPtr;
  dVar32 = (double)local_a8._4_4_;
  dVar33 = (double)(int)uVar2;
  if (this_00 == (UGeometryCache *)0x0) {
    auVar26 = ZEXT816(0);
  }
  else {
    fVar18 = UGeometryCache::CalculateDuration(this_00);
    auVar26._4_4_ = extraout_var._0_4_;
    auVar26._0_4_ = fVar18;
    auVar26._8_4_ = extraout_var._4_4_;
    auVar26._12_4_ = extraout_var._8_4_;
  }
  fVar5 = __real_40000000;
  fVar18 = __real_3f000000;
  uVar1 = (this->Params).FirstLoopStartFrameOffset.Value;
  local_98 = (ulonglong)uVar1;
  dVar22 = __real_3ff0000000000000 / ((double)fVar31 * dVar33);
  dVar29 = (double)(float)((double)auVar26._0_4_ -
                          ((double)((int)uVar13 * lVar12) + dVar32 * 0.0) * dVar22);
  dVar28 = __real_3ff0000000000000 / (double)(int)((ulonglong)uVar2 >> 0x20);
  dVar27 = dVar29 * dVar33 * dVar28;
  auVar19._8_8_ = 0;
  auVar19._0_8_ = dVar27;
  auVar26 = roundpd(auVar26,auVar19,1);
  dVar25 = auVar26._0_8_;
  dVar27 = dVar27 - dVar25;
  if (__real_41dfffffffc00000 <= dVar25) {
    dVar25 = __real_41dfffffffc00000;
  }
  if (dVar25 <= __real_c1e0000000000000) {
    dVar25 = __real_c1e0000000000000;
  }
  iVar14 = (int)dVar27;
  fVar31 = (float)dVar27 - (float)iVar14;
  if ((0.0 < fVar31) && (::FFrameTime::MaxSubframe <= fVar31)) {
    fVar31 = ::FFrameTime::MaxSubframe;
  }
  iVar14 = (int)dVar25 + iVar14;
  if (::FFrameTime::MaxSubframe <= fVar31) {
    fVar31 = ::FFrameTime::MaxSubframe;
  }
  if (fVar31 <= 0.0) {
    fVar31 = 0.0;
  }
  dVar28 = (double)(float)(dVar29 - ((double)((int)uVar1 * lVar12) + dVar32 * 0.0) * dVar22) *
           dVar33 * dVar28;
  auVar20._8_8_ = 0;
  auVar20._0_8_ = dVar28;
  auVar26 = roundpd(auVar26,auVar20,1);
  dVar32 = auVar26._0_8_;
  dVar28 = dVar28 - dVar32;
  if (__real_41dfffffffc00000 <= dVar32) {
    dVar32 = __real_41dfffffffc00000;
  }
  if (dVar32 <= __real_c1e0000000000000) {
    dVar32 = __real_c1e0000000000000;
  }
  iVar9 = (int)dVar28;
  fVar30 = (float)dVar28 - (float)iVar9;
  if ((0.0 < fVar30) && (::FFrameTime::MaxSubframe <= fVar30)) {
    fVar30 = ::FFrameTime::MaxSubframe;
  }
  if (::FFrameTime::MaxSubframe <= fVar30) {
    fVar30 = ::FFrameTime::MaxSubframe;
  }
  if (fVar30 <= 0.0) {
    fVar30 = 0.0;
  }
  if (1 < iVar14) {
    bVar7 = true;
    uStack_ac = 0;
    fStack_b4 = 0.0;
    local_b8 = iVar17;
    local_b0 = iVar16;
    while( true ) {
      local_a8 = CONCAT44(fStack_b4,local_b8);
      if ((iVar16 <= local_b8) && ((local_b8 != iVar16 || (0.0 <= fStack_b4)))) break;
      pFVar3 = (param_1->AllocatorInstance).Data;
      if ((pFVar3 <= (FScriptContainerElement *)&local_b8) &&
         ((FScriptContainerElement *)&local_b8 < pFVar3 + (longlong)param_1->ArrayMax * 4)) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      iVar17 = param_1->ArrayNum;
      if (iVar17 == param_1->ArrayMax) {
        iVar17 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&param_1->AllocatorInstance,&param_1->ArrayMax);
        param_1->ArrayNum = iVar17;
      }
      param_1->ArrayNum = iVar17 + 1;
      *(int *)((param_1->AllocatorInstance).Data + (longlong)iVar17 * 4) = local_b8;
      if (bVar7) {
        fStack_b4 = fVar30 + fStack_b4;
        iVar17 = ((int)ROUND(fStack_b4 * fVar5 - fVar18) >> 1) + (int)dVar32 + iVar9;
        local_b8 = local_b8 + iVar17;
        iVar15 = (int)fStack_b4;
        fVar21 = fStack_b4;
        if ((iVar15 != -0x80000000) && ((float)iVar15 != fStack_b4)) {
          auVar23._4_4_ = fStack_b4;
          auVar23._0_4_ = fStack_b4;
          auVar23._8_8_ = 0;
          uVar13 = movmskps(iVar17,auVar23);
          fVar21 = (float)(int)(iVar15 - (uVar13 & 1));
        }
        fStack_b4 = fStack_b4 - fVar21;
        bVar7 = false;
      }
      else {
        fStack_b4 = fVar31 + fStack_b4;
        iVar17 = ((int)ROUND(fStack_b4 * fVar5 - fVar18) >> 1) + iVar14;
        local_b8 = local_b8 + iVar17;
        iVar15 = (int)fStack_b4;
        fVar21 = fStack_b4;
        if ((iVar15 != -0x80000000) && ((float)iVar15 != fStack_b4)) {
          auVar24._4_4_ = fStack_b4;
          auVar24._0_4_ = fStack_b4;
          auVar24._8_8_ = 0;
          uVar13 = movmskps(iVar17,auVar24);
          fVar21 = (float)(int)(iVar15 - (uVar13 & 1));
        }
        fStack_b4 = fStack_b4 - fVar21;
      }
    }
  }
  return;
}

// GetSourceObject @ 14cd8a030

UObject * __thiscall
UMovieSceneGeometryCacheSection::GetSourceObject(UMovieSceneGeometryCacheSection *this)

{
  return (UObject *)(this->Params).GeometryCacheAsset.field0_0x0.DebugPtr;
}

// MapTimeToAnimation @ 14cd8a550

float __thiscall
UMovieSceneGeometryCacheSection::MapTimeToAnimation
          (UMovieSceneGeometryCacheSection *this,float param_1,FFrameTime param_2,FFrameRate param_3
          )

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  FMovieSceneGeometryCacheSectionTemplateParameters local_68;
  
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
  FMovieSceneGeometryCacheParams::FMovieSceneGeometryCacheParams
            ((FMovieSceneGeometryCacheParams *)&local_68,&this->Params);
  local_68.SectionStartTime.Value = iVar5;
  local_68.SectionEndTime.Value = iVar4;
  fVar6 = FMovieSceneGeometryCacheSectionTemplateParameters::MapTimeToAnimation
                    (&local_68,param_1,param_2,param_3);
  if ((void *)local_68._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_68._padding_);
  }
  return fVar6;
}

// MigrateFrameTimes @ 14cd8a670

void __thiscall
UMovieSceneGeometryCacheSection::MigrateFrameTimes
          (UMovieSceneGeometryCacheSection *this,FFrameRate param_1,FFrameRate param_2)

{
  FFrameRate FVar1;
  FFrameRate FVar2;
  FFrameRate FVar3;
  FFrameTime FVar4;
  uint local_res8 [2];
  
  local_res8[0] = (this->Params).StartFrameOffset.Value;
  if (0 < (int)local_res8[0]) {
    local_res8[1] = 0;
    FVar1.Denominator = 0;
    FVar1.Numerator = local_res8[0];
    FVar4 = ConvertFrameTime((FFrameTime)local_res8,FVar1,param_1);
    (this->Params).StartFrameOffset.Value = *(int *)FVar4;
  }
  local_res8[0] = (this->Params).EndFrameOffset.Value;
  if (0 < (int)local_res8[0]) {
    local_res8[1] = 0;
    FVar2.Denominator = 0;
    FVar2.Numerator = local_res8[0];
    FVar4 = ConvertFrameTime((FFrameTime)local_res8,FVar2,param_1);
    (this->Params).EndFrameOffset.Value = *(int *)FVar4;
  }
  local_res8[0] = (this->Params).FirstLoopStartFrameOffset.Value;
  if (0 < (int)local_res8[0]) {
    local_res8[1] = 0;
    FVar3.Denominator = 0;
    FVar3.Numerator = local_res8[0];
    FVar4 = ConvertFrameTime((FFrameTime)local_res8,FVar3,param_1);
    (this->Params).FirstLoopStartFrameOffset.Value = *(int *)FVar4;
  }
  return;
}

// PostLoad @ 14cd8a740

void __thiscall UMovieSceneGeometryCacheSection::PostLoad(UMovieSceneGeometryCacheSection *this)

{
  float fVar1;
  int iVar2;
  FFrameRate FVar3;
  FFrameRate FVar4;
  FFrameRate FVar5;
  UClass *pUVar6;
  UObject *pUVar7;
  FFrameTime FVar8;
  UGeometryCacheComponent *this_00;
  UGeometryCache *pUVar9;
  float fVar10;
  double dVar11;
  undefined1 auVar12 [16];
  double dVar13;
  undefined1 in_XMM2 [16];
  undefined1 auVar14 [16];
  double dVar15;
  int local_res10;
  float fStackX_14;
  
  UMovieSceneSignedObject::PostLoad((UMovieSceneSignedObject *)this);
  pUVar6 = Z_Construct_UClass_UMovieScene_NoRegister();
  pUVar7 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar6);
  if (pUVar7 != (UObject *)0x0) {
    fVar1 = (this->Params).StartOffset_DEPRECATED;
    FVar3.Numerator = *(int *)&pUVar7[8].field_0x0;
    FVar3.Denominator = *(int *)&pUVar7[8].field_0x4;
    fVar10 = GeometryCacheDeprecatedMagicNumber;
    if (fVar1 != GeometryCacheDeprecatedMagicNumber) {
      dVar15 = ((double)FVar3.Numerator / (double)FVar3.Denominator) * (double)fVar1;
      auVar14._8_8_ = 0;
      auVar14._0_8_ = dVar15;
      in_XMM2 = roundpd(in_XMM2,auVar14,1);
      dVar13 = in_XMM2._0_8_;
      dVar11 = dVar13;
      if (__real_41dfffffffc00000 <= dVar13) {
        dVar11 = __real_41dfffffffc00000;
      }
      fStackX_14 = (float)(dVar15 - dVar13);
      if (dVar11 <= __real_c1e0000000000000) {
        dVar11 = __real_c1e0000000000000;
      }
      if (::FFrameTime::MaxSubframe <= fStackX_14) {
        fStackX_14 = ::FFrameTime::MaxSubframe;
      }
      local_res10 = (int)dVar11;
      if (fStackX_14 <= 0.0) {
        fStackX_14 = 0.0;
      }
      if (::FFrameTime::MaxSubframe <= fStackX_14) {
        fStackX_14 = ::FFrameTime::MaxSubframe;
      }
      if (fStackX_14 <= 0.0) {
        fStackX_14 = 0.0;
      }
      FVar4.Denominator = (int)fStackX_14;
      FVar4.Numerator = local_res10;
      FVar8 = ConvertFrameTime((FFrameTime)&local_res10,FVar4,FVar3);
      fVar10 = GeometryCacheDeprecatedMagicNumber;
      iVar2 = *(int *)FVar8;
      (this->Params).StartOffset_DEPRECATED = GeometryCacheDeprecatedMagicNumber;
      (this->Params).StartFrameOffset.Value = iVar2;
    }
    fVar1 = (this->Params).EndOffset_DEPRECATED;
    if (fVar1 != fVar10) {
      dVar15 = ((double)FVar3.Numerator / (double)FVar3.Denominator) * (double)fVar1;
      auVar12._8_8_ = 0;
      auVar12._0_8_ = dVar15;
      auVar14 = roundpd(in_XMM2,auVar12,1);
      dVar13 = auVar14._0_8_;
      dVar11 = dVar13;
      if (__real_41dfffffffc00000 <= dVar13) {
        dVar11 = __real_41dfffffffc00000;
      }
      fStackX_14 = (float)(dVar15 - dVar13);
      if (dVar11 <= __real_c1e0000000000000) {
        dVar11 = __real_c1e0000000000000;
      }
      if (::FFrameTime::MaxSubframe <= fStackX_14) {
        fStackX_14 = ::FFrameTime::MaxSubframe;
      }
      local_res10 = (int)dVar11;
      if (fStackX_14 <= 0.0) {
        fStackX_14 = 0.0;
      }
      if (::FFrameTime::MaxSubframe <= fStackX_14) {
        fStackX_14 = ::FFrameTime::MaxSubframe;
      }
      if (fStackX_14 <= 0.0) {
        fStackX_14 = 0.0;
      }
      FVar5.Denominator = (int)fStackX_14;
      FVar5.Numerator = local_res10;
      FVar8 = ConvertFrameTime((FFrameTime)&local_res10,FVar5,FVar3);
      iVar2 = *(int *)FVar8;
      (this->Params).EndOffset_DEPRECATED = GeometryCacheDeprecatedMagicNumber;
      (this->Params).EndFrameOffset.Value = iVar2;
    }
    pUVar7 = FSoftObjectPath::ResolveObject(&(this->Params).GeometryCache_DEPRECATED);
    if (((pUVar7 != (UObject *)0x0) &&
        ((this->Params).GeometryCacheAsset.field0_0x0.DebugPtr == (UGeometryCache *)0x0)) &&
       (this_00 = (UGeometryCacheComponent *)
                  FSoftObjectPath::ResolveObject(&(this->Params).GeometryCache_DEPRECATED),
       this_00 != (UGeometryCacheComponent *)0x0)) {
      pUVar6 = Z_Construct_UClass_UGeometryCacheComponent_NoRegister();
      iVar2 = (int)pUVar6->_padding_;
      if ((iVar2 <= *(int *)(*(longlong *)&this_00->field_0x10 + 0x38)) &&
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&this_00->field_0x10 + 0x30) + (longlong)iVar2 * 8) ==
          &pUVar6->_padding_)) {
        pUVar9 = UGeometryCacheComponent::GetGeometryCache(this_00);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (pUVar9 != (UGeometryCache *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar9);
        }
        (this->Params).GeometryCacheAsset.field0_0x0.DebugPtr = pUVar9;
      }
    }
  }
  return;
}

// Serialize @ 14cd8ac80

void __thiscall
UMovieSceneGeometryCacheSection::Serialize(UMovieSceneGeometryCacheSection *this,FArchive *param_1)

{
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FSequencerObjectVersion::GUID);
  UMovieSceneSection::Serialize((UMovieSceneSection *)this,param_1);
  return;
}

// Serialize @ 14cd8acc0

void __thiscall
UMovieSceneGeometryCacheSection::Serialize
          (UMovieSceneGeometryCacheSection *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  (**(code **)(*(longlong *)pFVar1 + 0x230))(pFVar1,&FSequencerObjectVersion::GUID);
  UMovieSceneSection::Serialize((UMovieSceneSection *)this,pFVar1);
  return;
}

// SplitSection @ 14cd8ad20

UMovieSceneSection * __thiscall
UMovieSceneGeometryCacheSection::SplitSection
          (UMovieSceneGeometryCacheSection *this,FQualifiedFrameTime *param_1,bool param_2)

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
  TObjectPtr<UGeometryCache>_u_0 local_28;
  FFrameRate FStack_20;
  
  iVar1 = (this->Params).FirstLoopStartFrameOffset.Value;
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
    local_28.ObjectPtr.field0_0x0 = *(FObjectPtr *)&param_1->Time;
    FStack_20 = param_1->Rate;
    FVar4 = GetFirstLoopStartOffsetAtTrimTime<FMovieSceneGeometryCacheParams>
                      ((FQualifiedFrameTime *)&stack0x00000008,
                       (FMovieSceneGeometryCacheParams *)&local_28.ObjectPtr,(int)this + 0x110,FVar7
                      );
    uVar8 = *(undefined4 *)CONCAT44(extraout_var,FVar4.Value);
  }
  local_28.ObjectPtr.field0_0x0 = *(FObjectPtr *)&param_1->Time;
  FStack_20 = param_1->Rate;
  pUVar6 = UMovieSceneSection::SplitSection
                     ((UMovieSceneSection *)this,(FQualifiedFrameTime *)&local_28.ObjectPtr,param_2)
  ;
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
  (this->Params).FirstLoopStartFrameOffset.Value = iVar1;
  return pUVar6;
}

// StaticRegisterNativesUMovieSceneGeometryCacheSection @ 14cd8ae20

void __cdecl
UMovieSceneGeometryCacheSection::StaticRegisterNativesUMovieSceneGeometryCacheSection(void)

{
  return;
}

// TrimSection @ 14cd8aeb0

void __thiscall
UMovieSceneGeometryCacheSection::TrimSection
          (UMovieSceneGeometryCacheSection *this,FQualifiedFrameTime *param_1,bool param_2,
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
  TObjectPtr<UGeometryCache>_u_0 local_28;
  FFrameRate FStack_20;
  FQualifiedFrameTime local_18;
  
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
        local_28.ObjectPtr.field0_0x0 = *(FObjectPtr *)&param_1->Time;
        FStack_20 = param_1->Rate;
        FVar3 = GetFirstLoopStartOffsetAtTrimTime<FMovieSceneGeometryCacheParams>
                          (&local_38,(FMovieSceneGeometryCacheParams *)&local_28.ObjectPtr,
                           (int)this + 0x110,FVar7);
        iVar5 = *(int *)CONCAT44(extraout_var,FVar3.Value);
      }
      (this->Params).FirstLoopStartFrameOffset.Value = iVar5;
    }
    local_18.Time = param_1->Time;
    local_18.Rate = param_1->Rate;
    UMovieSceneSection::TrimSection((UMovieSceneSection *)this,&local_18,param_2,param_3);
  }
  return;
}

