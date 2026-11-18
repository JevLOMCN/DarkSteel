// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 12

// StaticClass @ 14658de80

UClass * __cdecl UMovieSceneBaseCacheSection::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneBaseCacheSection.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneBaseCacheSection",
               &Z_Registration_Info_UClass_UMovieSceneBaseCacheSection.InnerSingleton,
               StaticRegisterNativesUMovieSceneBaseCacheSection,0x118,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneBaseCacheSection>,
               InternalVTableHelperCtorCaller<UMovieSceneBaseCacheSection>,local_res8,
               UMovieSceneSection::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneBaseCacheSection.InnerSingleton;
}

// UMovieSceneBaseCacheSection @ 14661af50

UMovieSceneBaseCacheSection * __thiscall
UMovieSceneBaseCacheSection::UMovieSceneBaseCacheSection
          (UMovieSceneBaseCacheSection *this,FVTableHelper *param_1)

{
  UMovieSceneSection::UMovieSceneSection((UMovieSceneSection *)this,param_1);
  this->ParamsPtr = (FMovieSceneBaseCacheParams *)0x0;
  this->_padding_ = (longlong)&___7UMovieSceneBaseCacheSection__6B_;
  return this;
}

// UMovieSceneBaseCacheSection @ 14661af90

UMovieSceneBaseCacheSection * __thiscall
UMovieSceneBaseCacheSection::UMovieSceneBaseCacheSection
          (UMovieSceneBaseCacheSection *this,FObjectInitializer *param_1)

{
  UMovieSceneSection::UMovieSceneSection((UMovieSceneSection *)this,param_1);
  this->ParamsPtr = (FMovieSceneBaseCacheParams *)0x0;
  this->_padding_ = (longlong)&___7UMovieSceneBaseCacheSection__6B_;
  *(undefined2 *)((longlong)&this->_padding_ + 1) = 0x101;
  *(undefined2 *)&this->_padding_ = 0x201;
  return this;
}

// ~UMovieSceneBaseCacheSection @ 146621bc0

void __thiscall
UMovieSceneBaseCacheSection::~UMovieSceneBaseCacheSection(UMovieSceneBaseCacheSection *this)

{
  this->_padding_ = (longlong)&___7UMovieSceneBaseCacheSection__6B_;
  UMovieSceneSection::~UMovieSceneSection((UMovieSceneSection *)this);
  return;
}

// GetAutoSizeRange @ 146689200

TOptional<TRange<FFrameNumber>_> * __thiscall
UMovieSceneBaseCacheSection::GetAutoSizeRange
          (UMovieSceneBaseCacheSection *this,
          TOptional<TRange<FFrameNumber>_> *__return_storage_ptr__)

{
  undefined8 uVar1;
  code *pcVar2;
  TRangeBound<FFrameNumber> TVar3;
  TRangeBound<FFrameNumber> TVar4;
  TRangeBound<FFrameNumber> TVar5;
  char cVar6;
  bool bVar7;
  UClass *pUVar8;
  UObject *pUVar9;
  TOptional<TRange<FFrameNumber>_> *pTVar10;
  int iVar11;
  int iVar12;
  FFrameNumber FVar13;
  float fVar14;
  double dVar15;
  double dVar16;
  undefined1 in_XMM3 [16];
  undefined1 auVar17 [16];
  undefined4 local_28;
  undefined4 uStack_20;
  uint local_18;
  uint uStack_10;
  
  if (this->ParamsPtr == (FMovieSceneBaseCacheParams *)0x0) {
    local_18 = CONCAT31(local_18._1_3_,1);
    uStack_10 = uStack_10 & 0xffffff00;
    TVar4.Value.Value = 0;
    TVar4._0_4_ = local_18;
    TVar5.Value.Value = 1;
    TVar5._0_4_ = uStack_10;
    __return_storage_ptr__->bIsSet = true;
    (__return_storage_ptr__->TypedValue).LowerBound = TVar4;
    (__return_storage_ptr__->TypedValue).UpperBound = TVar5;
    return __return_storage_ptr__;
  }
  pUVar8 = Z_Construct_UClass_UMovieScene_NoRegister();
  pUVar9 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar8);
  uVar1 = *(undefined8 *)&pUVar9[7].field_0x20;
  fVar14 = (float)(**(code **)(this->ParamsPtr->_padding_ + 8))();
  dVar15 = ((double)fVar14 * (double)(int)uVar1) / (double)(int)((ulonglong)uVar1 >> 0x20);
  auVar17._8_8_ = 0;
  auVar17._0_8_ = dVar15;
  auVar17 = roundpd(in_XMM3,auVar17,1);
  dVar16 = auVar17._0_8_;
  dVar15 = dVar15 - dVar16;
  if (__real_41dfffffffc00000 <= dVar16) {
    dVar16 = __real_41dfffffffc00000;
  }
  if (dVar16 <= __real_c1e0000000000000) {
    dVar16 = __real_c1e0000000000000;
  }
  iVar11 = (int)dVar15;
  fVar14 = (float)dVar15 - (float)iVar11;
  if ((0.0 < fVar14) && (::FFrameTime::MaxSubframe <= fVar14)) {
    fVar14 = ::FFrameTime::MaxSubframe;
  }
  if (::FFrameTime::MaxSubframe <= fVar14) {
    fVar14 = ::FFrameTime::MaxSubframe;
  }
  if (fVar14 <= 0.0) {
    fVar14 = 0.0;
  }
  fVar14 = fVar14 + __real_3f000000;
  iVar12 = (int)((ulonglong)this->_padding_ >> 0x20);
  cVar6 = (char)this->_padding_;
  if (cVar6 != '\x01') {
    if (cVar6 == '\x02') {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Type != ERangeBoundTypes::Open",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                         ,99,L"");
      if (bVar7) {
        pcVar2 = (code *)swi(3);
        pTVar10 = (TOptional<TRange<FFrameNumber>_> *)(*pcVar2)();
        return pTVar10;
      }
    }
    iVar12 = iVar12 + 1;
  }
  FVar13.Value = (int)((ulonglong)this->_padding_ >> 0x20);
  cVar6 = (char)this->_padding_;
  if (cVar6 != '\x01') {
    if (cVar6 == '\x02') {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Type != ERangeBoundTypes::Open",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                         ,99,L"");
      if (bVar7) {
        pcVar2 = (code *)swi(3);
        pTVar10 = (TOptional<TRange<FFrameNumber>_> *)(*pcVar2)();
        return pTVar10;
      }
    }
    FVar13.Value = FVar13.Value + 1;
  }
  local_28 = CONCAT31(local_28._1_3_,1);
  TVar3.Value.Value = FVar13.Value;
  TVar3._0_4_ = local_28;
  __return_storage_ptr__->bIsSet = true;
  (__return_storage_ptr__->TypedValue).LowerBound = TVar3;
  (__return_storage_ptr__->TypedValue).UpperBound =
       (TRangeBound<FFrameNumber>)
       (CONCAT44((int)fVar14 + (int)dVar16 + iVar11 + iVar12 + 1,uStack_20) & 0xffffffffffffff00);
  return __return_storage_ptr__;
}

// GetOffsetTime @ 14668e570

TOptional<FFrameTime> * __thiscall
UMovieSceneBaseCacheSection::GetOffsetTime
          (UMovieSceneBaseCacheSection *this,TOptional<FFrameTime> *__return_storage_ptr__)

{
  FFrameTime local_res8;
  
  if (this->ParamsPtr != (FMovieSceneBaseCacheParams *)0x0) {
    local_res8.SubFrame = 0.0;
    local_res8.FrameNumber.Value = (this->ParamsPtr->FirstLoopStartFrameOffset).Value;
    __return_storage_ptr__->TypedValue = local_res8;
    __return_storage_ptr__->bIsSet = true;
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->TypedValue).FrameNumber = 0;
  (__return_storage_ptr__->TypedValue).SubFrame = 0.0;
  __return_storage_ptr__->bIsSet = true;
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 1466963f0

UClass * __cdecl UMovieSceneBaseCacheSection::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneBaseCacheSection.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneBaseCacheSection",
               &Z_Registration_Info_UClass_UMovieSceneBaseCacheSection.InnerSingleton,
               StaticRegisterNativesUMovieSceneBaseCacheSection,0x118,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneBaseCacheSection>,
               InternalVTableHelperCtorCaller<UMovieSceneBaseCacheSection>,local_res8,
               UMovieSceneSection::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneBaseCacheSection.InnerSingleton;
}

// GetSnapTimes @ 146697840

void __thiscall
UMovieSceneBaseCacheSection::GetSnapTimes
          (UMovieSceneBaseCacheSection *this,
          TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *param_1,bool param_2)

{
  undefined8 uVar1;
  FMovieSceneBaseCacheParams *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  float fVar7;
  float fVar8;
  char cVar9;
  bool bVar10;
  bool bVar11;
  int iVar12;
  uint uVar13;
  UClass *pUVar14;
  UObject *pUVar15;
  longlong lVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  uint uVar20;
  int iVar21;
  float fVar22;
  undefined1 auVar23 [16];
  float fVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined4 uVar27;
  undefined4 uVar31;
  double dVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  double dVar32;
  double dVar33;
  float fVar34;
  int local_b8;
  float fStack_b4;
  int local_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined8 local_a0;
  ulonglong local_98;
  
  UMovieSceneSection::GetSnapTimes((UMovieSceneSection *)this,param_1,param_2);
  if (this->ParamsPtr != (FMovieSceneBaseCacheParams *)0x0) {
    pUVar14 = Z_Construct_UClass_UMovieScene_NoRegister();
    pUVar15 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar14);
    uVar1 = *(undefined8 *)&pUVar15[7].field_0x20;
    iVar21 = (int)((ulonglong)this->_padding_ >> 0x20);
    cVar9 = (char)this->_padding_;
    local_a8 = uVar1;
    if (cVar9 != '\x01') {
      if ((cVar9 == '\x02') &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Type != ERangeBoundTypes::Open",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                              ,99,L""), bVar10)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar21 = iVar21 + 1;
    }
    iVar19 = (int)((ulonglong)this->_padding_ >> 0x20);
    cVar9 = (char)this->_padding_;
    if (cVar9 == '\x01') {
      iVar19 = iVar19 + 1;
    }
    else if ((cVar9 == '\x02') &&
            (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                ("Type != ERangeBoundTypes::Open",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                 ,99,L""), bVar10)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    dVar33 = __real_3ff0000000000000;
    pFVar2 = this->ParamsPtr;
    iVar19 = iVar19 + -1;
    fVar7 = pFVar2->PlayRate;
    if ((float)((uint)pFVar2->PlayRate & __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_322bcc77)
    {
      fVar7 = __real_3f800000;
    }
    uVar20 = (pFVar2->EndFrameOffset).Value + (pFVar2->StartFrameOffset).Value;
    dVar6 = (double)(int)uVar1;
    local_a0 = (ulonglong)uVar20;
    lVar16 = (longlong)local_a8._4_4_;
    dVar5 = (double)local_a8._4_4_;
    dVar28 = __real_3ff0000000000000 / ((double)fVar7 * dVar6);
    fVar22 = (float)(**(code **)(pFVar2->_padding_ + 8))();
    fVar8 = __real_40000000;
    fVar7 = __real_3f000000;
    uVar13 = (this->ParamsPtr->FirstLoopStartFrameOffset).Value;
    local_98 = (ulonglong)uVar13;
    auVar29._0_8_ =
         (double)fVar22 - ((double)((int)uVar20 * lVar16) + (double)local_a0._4_4_ * dVar5) * dVar28
    ;
    auVar29._8_8_ = 0;
    dVar33 = dVar33 / (double)(int)((ulonglong)uVar1 >> 0x20);
    dVar32 = (double)(float)auVar29._0_8_ * dVar6 * dVar33;
    auVar30._8_8_ = 0;
    auVar30._0_8_ = dVar32;
    auVar30 = roundpd(auVar29,auVar30,1);
    dVar32 = dVar32 - auVar30._0_8_;
    uVar27 = auVar30._0_4_;
    uVar31 = auVar30._4_4_;
    if (__real_41dfffffffc00000 <= auVar30._0_8_) {
      uVar27 = SUB84(__real_41dfffffffc00000,0);
      uVar31 = (undefined4)((ulonglong)__real_41dfffffffc00000 >> 0x20);
    }
    if ((double)CONCAT44(uVar31,uVar27) <= __real_c1e0000000000000) {
      uVar27 = SUB84(__real_c1e0000000000000,0);
      uVar31 = (undefined4)((ulonglong)__real_c1e0000000000000 >> 0x20);
    }
    iVar17 = (int)dVar32;
    fVar22 = (float)dVar32 - (float)iVar17;
    if ((0.0 < fVar22) && (::FFrameTime::MaxSubframe <= fVar22)) {
      fVar22 = ::FFrameTime::MaxSubframe;
    }
    iVar17 = (int)(double)CONCAT44(uVar31,uVar27) + iVar17;
    if (::FFrameTime::MaxSubframe <= fVar22) {
      fVar22 = ::FFrameTime::MaxSubframe;
    }
    if (fVar22 <= 0.0) {
      fVar22 = 0.0;
    }
    dVar33 = (double)(float)((double)(float)auVar29._0_8_ -
                            ((double)((int)uVar13 * lVar16) + dVar5 * 0.0) * dVar28) * dVar6 *
             dVar33;
    auVar23._8_8_ = 0;
    auVar23._0_8_ = dVar33;
    auVar30 = roundpd(auVar30,auVar23,1);
    dVar28 = auVar30._0_8_;
    dVar33 = dVar33 - dVar28;
    if (__real_41dfffffffc00000 <= dVar28) {
      dVar28 = __real_41dfffffffc00000;
    }
    if (dVar28 <= __real_c1e0000000000000) {
      dVar28 = __real_c1e0000000000000;
    }
    iVar12 = (int)dVar33;
    fVar34 = (float)dVar33 - (float)iVar12;
    if ((0.0 < fVar34) && (::FFrameTime::MaxSubframe <= fVar34)) {
      fVar34 = ::FFrameTime::MaxSubframe;
    }
    if (::FFrameTime::MaxSubframe <= fVar34) {
      fVar34 = ::FFrameTime::MaxSubframe;
    }
    if (fVar34 <= 0.0) {
      fVar34 = 0.0;
    }
    if (1 < iVar17) {
      bVar10 = true;
      uStack_ac = 0;
      fStack_b4 = 0.0;
      local_b8 = iVar21;
      local_b0 = iVar19;
      while( true ) {
        local_a8 = CONCAT44(fStack_b4,local_b8);
        if ((iVar19 <= local_b8) && ((local_b8 != iVar19 || (0.0 <= fStack_b4)))) break;
        pFVar3 = (param_1->AllocatorInstance).Data;
        if ((pFVar3 <= (FScriptContainerElement *)&local_b8) &&
           (((FScriptContainerElement *)&local_b8 < pFVar3 + (longlong)param_1->ArrayMax * 4 &&
            (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar11)))) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar21 = param_1->ArrayNum;
        if (iVar21 == param_1->ArrayMax) {
          iVar21 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&param_1->AllocatorInstance,&param_1->ArrayMax);
          param_1->ArrayNum = iVar21;
        }
        param_1->ArrayNum = iVar21 + 1;
        *(int *)((param_1->AllocatorInstance).Data + (longlong)iVar21 * 4) = local_b8;
        if (bVar10) {
          fStack_b4 = fVar34 + fStack_b4;
          iVar21 = ((int)ROUND(fStack_b4 * fVar8 - fVar7) >> 1) + (int)dVar28 + iVar12;
          local_b8 = local_b8 + iVar21;
          iVar18 = (int)fStack_b4;
          fVar24 = fStack_b4;
          if ((iVar18 != -0x80000000) && ((float)iVar18 != fStack_b4)) {
            auVar25._4_4_ = fStack_b4;
            auVar25._0_4_ = fStack_b4;
            auVar25._8_8_ = 0;
            uVar13 = movmskps(iVar21,auVar25);
            fVar24 = (float)(int)(iVar18 - (uVar13 & 1));
          }
          fStack_b4 = fStack_b4 - fVar24;
          bVar10 = false;
        }
        else {
          fStack_b4 = fVar22 + fStack_b4;
          iVar21 = ((int)ROUND(fStack_b4 * fVar8 - fVar7) >> 1) + iVar17;
          local_b8 = local_b8 + iVar21;
          iVar18 = (int)fStack_b4;
          fVar24 = fStack_b4;
          if ((iVar18 != -0x80000000) && ((float)iVar18 != fStack_b4)) {
            auVar26._4_4_ = fStack_b4;
            auVar26._0_4_ = fStack_b4;
            auVar26._8_8_ = 0;
            uVar13 = movmskps(iVar21,auVar26);
            fVar24 = (float)(int)(iVar18 - (uVar13 & 1));
          }
          fStack_b4 = fStack_b4 - fVar24;
        }
      }
    }
  }
  return;
}

// MapTimeToAnimation @ 1466a8690

float __thiscall
UMovieSceneBaseCacheSection::MapTimeToAnimation
          (UMovieSceneBaseCacheSection *this,float param_1,FFrameTime param_2,FFrameRate param_3)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  FMovieSceneBaseCacheSectionTemplateParameters local_res8;
  
  if (this->ParamsPtr == (FMovieSceneBaseCacheParams *)0x0) {
    return 0.0;
  }
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
  local_res8.SectionStartTime.Value = iVar5;
  local_res8.SectionEndTime.Value = iVar4;
  fVar6 = FMovieSceneBaseCacheSectionTemplateParameters::MapTimeToAnimation
                    (&local_res8,this->ParamsPtr,param_1,param_2,param_3);
  return fVar6;
}

// SplitSection @ 1466fe4a0

UMovieSceneSection * __thiscall
UMovieSceneBaseCacheSection::SplitSection
          (UMovieSceneBaseCacheSection *this,FQualifiedFrameTime *param_1,bool param_2)

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
  FQualifiedFrameTime local_28;
  
  if (this->ParamsPtr != (FMovieSceneBaseCacheParams *)0x0) {
    iVar1 = (this->ParamsPtr->FirstLoopStartFrameOffset).Value;
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
      local_28.Time = param_1->Time;
      local_28.Rate = param_1->Rate;
      FVar4 = GetFirstLoopStartOffsetAtTrimTime<FMovieSceneBaseCacheParams>
                        ((FQualifiedFrameTime *)&stack0x00000008,
                         (FMovieSceneBaseCacheParams *)&local_28,(int)this->ParamsPtr,FVar7);
      uVar8 = *(undefined4 *)CONCAT44(extraout_var,FVar4.Value);
    }
    local_28.Time = param_1->Time;
    local_28.Rate = param_1->Rate;
    pUVar6 = UMovieSceneSection::SplitSection((UMovieSceneSection *)this,&local_28,param_2);
    if (pUVar6 != (UMovieSceneSection *)0x0) {
      pUVar5 = StaticClass();
      iVar2 = (int)pUVar5->_padding_;
      pUVar9 = (UMovieSceneSection *)0x0;
      if ((iVar2 <= *(int *)(pUVar6->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar6->_padding_ + 0x30) + (longlong)iVar2 * 8) ==
          &pUVar5->_padding_)) {
        pUVar9 = pUVar6;
      }
      *(undefined4 *)(pUVar9[1]._padding_ + 8) = uVar8;
    }
    (this->ParamsPtr->FirstLoopStartFrameOffset).Value = iVar1;
    return pUVar6;
  }
  return (UMovieSceneSection *)0x0;
}

// StaticRegisterNativesUMovieSceneBaseCacheSection @ 1466fe790

void __cdecl UMovieSceneBaseCacheSection::StaticRegisterNativesUMovieSceneBaseCacheSection(void)

{
  return;
}

// TrimSection @ 1466ff670

void __thiscall
UMovieSceneBaseCacheSection::TrimSection
          (UMovieSceneBaseCacheSection *this,FQualifiedFrameTime *param_1,bool param_2,bool param_3)

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
  undefined1 local_28 [16];
  FQualifiedFrameTime local_18;
  
  UObjectBase::AtomicallySetFlags((UObjectBase *)this,RF_Transactional);
  bVar2 = UMovieSceneSection::TryModify((UMovieSceneSection *)this,true);
  if ((bVar2) && (this->ParamsPtr != (FMovieSceneBaseCacheParams *)0x0)) {
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
        local_28._0_8_ = param_1->Time;
        local_28._8_8_ = param_1->Rate;
        FVar3 = GetFirstLoopStartOffsetAtTrimTime<FMovieSceneBaseCacheParams>
                          (&local_38,(FMovieSceneBaseCacheParams *)local_28,(int)this->ParamsPtr,
                           FVar7);
        iVar5 = *(int *)CONCAT44(extraout_var,FVar3.Value);
      }
      (this->ParamsPtr->FirstLoopStartFrameOffset).Value = iVar5;
    }
    local_18.Time = param_1->Time;
    local_18.Rate = param_1->Rate;
    UMovieSceneSection::TrimSection((UMovieSceneSection *)this,&local_18,param_2,param_3);
  }
  return;
}

