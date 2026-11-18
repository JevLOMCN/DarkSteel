// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsCore
// Functions: 12

// StaticClass @ 14e0cafe0

UClass * __cdecl UMovieSceneGroomCacheSection::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneGroomCacheSection.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/HairStrandsCore",L"MovieSceneGroomCacheSection",
               &Z_Registration_Info_UClass_UMovieSceneGroomCacheSection.InnerSingleton,
               StaticRegisterNativesUMovieSceneGroomCacheSection,0x130,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneGroomCacheSection>,
               InternalVTableHelperCtorCaller<UMovieSceneGroomCacheSection>,local_res8,
               UMovieSceneSection::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneGroomCacheSection.InnerSingleton;
}

// UMovieSceneGroomCacheSection @ 14e0d0f60

UMovieSceneGroomCacheSection * __thiscall
UMovieSceneGroomCacheSection::UMovieSceneGroomCacheSection
          (UMovieSceneGroomCacheSection *this,FVTableHelper *param_1)

{
  undefined1 *puVar1;
  
  UMovieSceneSection::UMovieSceneSection((UMovieSceneSection *)this,param_1);
  this->_padding_ = (longlong)&___7UMovieSceneGroomCacheSection__6B_;
  (this->Params).bReverse = 0;
  (this->Params).FirstLoopStartFrameOffset = 0;
  (this->Params).StartFrameOffset = 0;
  (this->Params).EndFrameOffset.Value = 0;
  (this->Params).GroomCache.field0_0x0.DebugPtr = (UGroomCache *)0x0;
  (this->Params).PlayRate = 1.0;
  return this;
}

// UMovieSceneGroomCacheSection @ 14e0d0fb0

UMovieSceneGroomCacheSection * __thiscall
UMovieSceneGroomCacheSection::UMovieSceneGroomCacheSection
          (UMovieSceneGroomCacheSection *this,FObjectInitializer *param_1)

{
  undefined1 *puVar1;
  
  UMovieSceneSection::UMovieSceneSection((UMovieSceneSection *)this,param_1);
  this->_padding_ = (longlong)&___7UMovieSceneGroomCacheSection__6B_;
  (this->Params).bReverse = 0;
  (this->Params).FirstLoopStartFrameOffset = 0;
  (this->Params).StartFrameOffset = 0;
  (this->Params).EndFrameOffset.Value = 0;
  (this->Params).GroomCache.field0_0x0.DebugPtr = (UGroomCache *)0x0;
  (this->Params).PlayRate = 1.0;
  *(undefined2 *)((longlong)&this->_padding_ + 1) = 0x101;
  *(undefined2 *)&this->_padding_ = 0x201;
  return this;
}

// ~UMovieSceneGroomCacheSection @ 14e0d15d0

void __thiscall
UMovieSceneGroomCacheSection::~UMovieSceneGroomCacheSection(UMovieSceneGroomCacheSection *this)

{
  this->_padding_ = (longlong)&___7UMovieSceneGroomCacheSection__6B_;
  UMovieSceneSection::~UMovieSceneSection((UMovieSceneSection *)this);
  return;
}

// GetAutoSizeRange @ 14e0e8eb0

TOptional<TRange<FFrameNumber>_> * __thiscall
UMovieSceneGroomCacheSection::GetAutoSizeRange
          (UMovieSceneGroomCacheSection *this,
          TOptional<TRange<FFrameNumber>_> *__return_storage_ptr__)

{
  UGroomCache *pUVar1;
  undefined8 uVar2;
  code *pcVar3;
  TRangeBound<FFrameNumber> TVar4;
  char cVar5;
  bool bVar6;
  UClass *pUVar7;
  UObject *pUVar8;
  TOptional<TRange<FFrameNumber>_> *pTVar9;
  int iVar10;
  int iVar11;
  FFrameNumber FVar12;
  float fVar13;
  double dVar14;
  double dVar15;
  undefined1 in_XMM3 [16];
  undefined1 auVar16 [16];
  undefined4 local_28;
  undefined4 uStack_20;
  
  pUVar7 = Z_Construct_UClass_UMovieScene_NoRegister();
  pUVar8 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar7);
  pUVar1 = (this->Params).GroomCache.field0_0x0.DebugPtr;
  uVar2 = *(undefined8 *)&pUVar8[7].field_0x20;
  if (pUVar1 == (UGroomCache *)0x0) {
    fVar13 = 0.0;
  }
  else {
    fVar13 = (float)(**(code **)(pUVar1->_padding_ + 0x10))(&pUVar1->_padding_);
  }
  dVar14 = ((double)(int)uVar2 * (double)fVar13) / (double)(int)((ulonglong)uVar2 >> 0x20);
  auVar16._8_8_ = 0;
  auVar16._0_8_ = dVar14;
  auVar16 = roundpd(in_XMM3,auVar16,1);
  dVar15 = auVar16._0_8_;
  dVar14 = dVar14 - dVar15;
  if (__real_41dfffffffc00000 <= dVar15) {
    dVar15 = __real_41dfffffffc00000;
  }
  if (dVar15 <= __real_c1e0000000000000) {
    dVar15 = __real_c1e0000000000000;
  }
  iVar10 = (int)dVar14;
  fVar13 = (float)dVar14 - (float)iVar10;
  if ((0.0 < fVar13) && (::FFrameTime::MaxSubframe <= fVar13)) {
    fVar13 = ::FFrameTime::MaxSubframe;
  }
  if (::FFrameTime::MaxSubframe <= fVar13) {
    fVar13 = ::FFrameTime::MaxSubframe;
  }
  if (fVar13 <= 0.0) {
    fVar13 = 0.0;
  }
  fVar13 = fVar13 + __real_3f000000;
  iVar11 = (int)((ulonglong)this->_padding_ >> 0x20);
  cVar5 = (char)this->_padding_;
  if (cVar5 != '\x01') {
    if (cVar5 == '\x02') {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Type != ERangeBoundTypes::Open",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                         ,99,L"");
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        pTVar9 = (TOptional<TRange<FFrameNumber>_> *)(*pcVar3)();
        return pTVar9;
      }
    }
    iVar11 = iVar11 + 1;
  }
  FVar12.Value = (int)((ulonglong)this->_padding_ >> 0x20);
  cVar5 = (char)this->_padding_;
  if (cVar5 != '\x01') {
    if (cVar5 == '\x02') {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Type != ERangeBoundTypes::Open",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                         ,99,L"");
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        pTVar9 = (TOptional<TRange<FFrameNumber>_> *)(*pcVar3)();
        return pTVar9;
      }
    }
    FVar12.Value = FVar12.Value + 1;
  }
  local_28 = CONCAT31(local_28._1_3_,1);
  TVar4.Value.Value = FVar12.Value;
  TVar4._0_4_ = local_28;
  __return_storage_ptr__->bIsSet = true;
  (__return_storage_ptr__->TypedValue).LowerBound = TVar4;
  (__return_storage_ptr__->TypedValue).UpperBound =
       (TRangeBound<FFrameNumber>)
       (CONCAT44((int)fVar13 + (int)dVar15 + iVar10 + iVar11 + 1,uStack_20) & 0xffffffffffffff00);
  return __return_storage_ptr__;
}

// GetOffsetTime @ 14e0ea6f0

TOptional<FFrameTime> * __thiscall
UMovieSceneGroomCacheSection::GetOffsetTime
          (UMovieSceneGroomCacheSection *this,TOptional<FFrameTime> *__return_storage_ptr__)

{
  FFrameTime FVar1;
  
  FVar1.SubFrame = 0.0;
  FVar1.FrameNumber.Value = (this->Params).FirstLoopStartFrameOffset.Value;
  __return_storage_ptr__->TypedValue = FVar1;
  __return_storage_ptr__->bIsSet = true;
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14e0ea730

UClass * __cdecl UMovieSceneGroomCacheSection::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneGroomCacheSection.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/HairStrandsCore",L"MovieSceneGroomCacheSection",
               &Z_Registration_Info_UClass_UMovieSceneGroomCacheSection.InnerSingleton,
               StaticRegisterNativesUMovieSceneGroomCacheSection,0x130,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneGroomCacheSection>,
               InternalVTableHelperCtorCaller<UMovieSceneGroomCacheSection>,local_res8,
               UMovieSceneSection::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneGroomCacheSection.InnerSingleton;
}

// GetSnapTimes @ 14e0eaf20

void __thiscall
UMovieSceneGroomCacheSection::GetSnapTimes
          (UMovieSceneGroomCacheSection *this,
          TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *param_1,bool param_2)

{
  uint uVar1;
  undefined8 uVar2;
  UGroomCache *pUVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  float fVar6;
  float fVar7;
  char cVar8;
  bool bVar9;
  bool bVar10;
  int iVar11;
  UClass *pUVar12;
  UObject *pUVar13;
  longlong lVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  undefined8 uVar20;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  float fVar23;
  double dVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  double dVar27;
  undefined1 auVar28 [16];
  double dVar29;
  double dVar30;
  double dVar31;
  float fVar32;
  float fVar33;
  double dVar34;
  double dVar35;
  int local_b8;
  float fStack_b4;
  int local_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  ulonglong local_a0;
  ulonglong local_98;
  
  UMovieSceneSection::GetSnapTimes((UMovieSceneSection *)this,param_1,param_2);
  pUVar12 = Z_Construct_UClass_UMovieScene_NoRegister();
  pUVar13 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar12);
  uVar2 = *(undefined8 *)&pUVar13[7].field_0x20;
  iVar19 = (int)((ulonglong)this->_padding_ >> 0x20);
  cVar8 = (char)this->_padding_;
  local_a8 = uVar2;
  if (cVar8 != '\x01') {
    if (cVar8 == '\x02') {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Type != ERangeBoundTypes::Open",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                         ,99,L"");
      if (bVar9) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    iVar19 = iVar19 + 1;
  }
  iVar18 = (int)((ulonglong)this->_padding_ >> 0x20);
  cVar8 = (char)this->_padding_;
  if (cVar8 == '\x01') {
    iVar18 = iVar18 + 1;
  }
  else if (cVar8 == '\x02') {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Type != ERangeBoundTypes::Open",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                       ,99,L"");
    if (bVar9) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  fVar33 = (this->Params).PlayRate;
  iVar18 = iVar18 + -1;
  if ((float)((uint)fVar33 & __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_322bcc77) {
    fVar33 = __real_3f800000;
  }
  uVar15 = (this->Params).EndFrameOffset.Value + (this->Params).StartFrameOffset.Value;
  local_a0 = (ulonglong)uVar15;
  lVar14 = (longlong)local_a8._4_4_;
  pUVar3 = (this->Params).GroomCache.field0_0x0.DebugPtr;
  dVar34 = (double)local_a8._4_4_;
  dVar35 = (double)(int)uVar2;
  if (pUVar3 == (UGroomCache *)0x0) {
    auVar28 = ZEXT816(0);
  }
  else {
    uVar20 = (**(code **)(pUVar3->_padding_ + 0x10))(&pUVar3->_padding_);
    auVar28._8_4_ = (int)extraout_XMM0_Qb;
    auVar28._0_8_ = uVar20;
    auVar28._12_4_ = (int)((ulonglong)extraout_XMM0_Qb >> 0x20);
  }
  fVar7 = __real_40000000;
  fVar6 = __real_3f000000;
  uVar1 = (this->Params).FirstLoopStartFrameOffset.Value;
  local_98 = (ulonglong)uVar1;
  dVar24 = __real_3ff0000000000000 / ((double)fVar33 * dVar35);
  dVar31 = (double)(float)((double)auVar28._0_4_ -
                          ((double)((int)uVar15 * lVar14) + dVar34 * 0.0) * dVar24);
  dVar30 = __real_3ff0000000000000 / (double)(int)((ulonglong)uVar2 >> 0x20);
  dVar29 = dVar31 * dVar35 * dVar30;
  auVar21._8_8_ = 0;
  auVar21._0_8_ = dVar29;
  auVar28 = roundpd(auVar28,auVar21,1);
  dVar27 = auVar28._0_8_;
  dVar29 = dVar29 - dVar27;
  if (__real_41dfffffffc00000 <= dVar27) {
    dVar27 = __real_41dfffffffc00000;
  }
  if (dVar27 <= __real_c1e0000000000000) {
    dVar27 = __real_c1e0000000000000;
  }
  iVar16 = (int)dVar29;
  fVar33 = (float)dVar29 - (float)iVar16;
  if ((0.0 < fVar33) && (::FFrameTime::MaxSubframe <= fVar33)) {
    fVar33 = ::FFrameTime::MaxSubframe;
  }
  iVar16 = (int)dVar27 + iVar16;
  if (::FFrameTime::MaxSubframe <= fVar33) {
    fVar33 = ::FFrameTime::MaxSubframe;
  }
  if (fVar33 <= 0.0) {
    fVar33 = 0.0;
  }
  dVar30 = (double)(float)(dVar31 - ((double)((int)uVar1 * lVar14) + dVar34 * 0.0) * dVar24) *
           dVar35 * dVar30;
  auVar22._8_8_ = 0;
  auVar22._0_8_ = dVar30;
  auVar28 = roundpd(auVar28,auVar22,1);
  dVar34 = auVar28._0_8_;
  dVar30 = dVar30 - dVar34;
  if (__real_41dfffffffc00000 <= dVar34) {
    dVar34 = __real_41dfffffffc00000;
  }
  if (dVar34 <= __real_c1e0000000000000) {
    dVar34 = __real_c1e0000000000000;
  }
  iVar11 = (int)dVar30;
  fVar32 = (float)dVar30 - (float)iVar11;
  if ((0.0 < fVar32) && (::FFrameTime::MaxSubframe <= fVar32)) {
    fVar32 = ::FFrameTime::MaxSubframe;
  }
  if (::FFrameTime::MaxSubframe <= fVar32) {
    fVar32 = ::FFrameTime::MaxSubframe;
  }
  if (fVar32 <= 0.0) {
    fVar32 = 0.0;
  }
  if (1 < iVar16) {
    bVar9 = true;
    uStack_ac = 0;
    fStack_b4 = 0.0;
    local_b8 = iVar19;
    local_b0 = iVar18;
    while( true ) {
      local_a8 = CONCAT44(fStack_b4,local_b8);
      if ((iVar18 <= local_b8) && ((local_b8 != iVar18 || (0.0 <= fStack_b4)))) break;
      pFVar4 = (param_1->AllocatorInstance).Data;
      if ((pFVar4 <= (FScriptContainerElement *)&local_b8) &&
         ((FScriptContainerElement *)&local_b8 < pFVar4 + (longlong)param_1->ArrayMax * 4)) {
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           );
        if (bVar10) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      iVar19 = param_1->ArrayNum;
      if (iVar19 == param_1->ArrayMax) {
        iVar19 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&param_1->AllocatorInstance,&param_1->ArrayMax);
        param_1->ArrayNum = iVar19;
      }
      param_1->ArrayNum = iVar19 + 1;
      *(int *)((param_1->AllocatorInstance).Data + (longlong)iVar19 * 4) = local_b8;
      if (bVar9) {
        fStack_b4 = fVar32 + fStack_b4;
        iVar19 = ((int)ROUND(fStack_b4 * fVar7 - fVar6) >> 1) + (int)dVar34 + iVar11;
        local_b8 = local_b8 + iVar19;
        iVar17 = (int)fStack_b4;
        fVar23 = fStack_b4;
        if ((iVar17 != -0x80000000) && ((float)iVar17 != fStack_b4)) {
          auVar25._4_4_ = fStack_b4;
          auVar25._0_4_ = fStack_b4;
          auVar25._8_8_ = 0;
          uVar15 = movmskps(iVar19,auVar25);
          fVar23 = (float)(int)(iVar17 - (uVar15 & 1));
        }
        fStack_b4 = fStack_b4 - fVar23;
        bVar9 = false;
      }
      else {
        fStack_b4 = fVar33 + fStack_b4;
        iVar19 = ((int)ROUND(fStack_b4 * fVar7 - fVar6) >> 1) + iVar16;
        local_b8 = local_b8 + iVar19;
        iVar17 = (int)fStack_b4;
        fVar23 = fStack_b4;
        if ((iVar17 != -0x80000000) && ((float)iVar17 != fStack_b4)) {
          auVar26._4_4_ = fStack_b4;
          auVar26._0_4_ = fStack_b4;
          auVar26._8_8_ = 0;
          uVar15 = movmskps(iVar19,auVar26);
          fVar23 = (float)(int)(iVar17 - (uVar15 & 1));
        }
        fStack_b4 = fStack_b4 - fVar23;
      }
    }
  }
  return;
}

// MapTimeToAnimation @ 14e0f3df0

float __thiscall
UMovieSceneGroomCacheSection::MapTimeToAnimation
          (UMovieSceneGroomCacheSection *this,float param_1,FFrameTime param_2,FFrameRate param_3)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  TObjectPtr<UGroomCache>_u_0 local_48;
  int local_40;
  int local_3c;
  int local_38;
  float local_34;
  uint local_30;
  int local_28;
  int local_24;
  
  iVar5 = (int)((ulonglong)this->_padding_ >> 0x20);
  cVar2 = (char)this->_padding_;
  if (cVar2 == '\x01') {
    iVar5 = iVar5 + 1;
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
  iVar4 = (int)((ulonglong)this->_padding_ >> 0x20);
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
    iVar4 = iVar4 + 1;
  }
  local_48 = (TObjectPtr<UGroomCache>_u_0)(this->Params).GroomCache.field0_0x0.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_48.DebugPtr != (UGroomCache *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_48.DebugPtr);
  }
  local_40 = (this->Params).FirstLoopStartFrameOffset.Value;
  local_34 = (this->Params).PlayRate;
  local_3c = (this->Params).StartFrameOffset.Value;
  local_38 = (this->Params).EndFrameOffset.Value;
  local_30 = (this->Params).bReverse | local_30 & 0xfffffffe;
  local_28 = iVar4;
  local_24 = iVar5;
  fVar6 = FMovieSceneGroomCacheSectionTemplateParameters::MapTimeToAnimation
                    ((FMovieSceneGroomCacheSectionTemplateParameters *)&local_48.ObjectPtr,param_1,
                     param_2,param_3);
  return fVar6;
}

// SplitSection @ 14e0f7e10

UMovieSceneSection * __thiscall
UMovieSceneGroomCacheSection::SplitSection
          (UMovieSceneGroomCacheSection *this,FQualifiedFrameTime *param_1,bool param_2)

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
  TObjectPtr<UGroomCache>_u_0 local_28;
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
    FVar4 = GetFirstLoopStartOffsetAtTrimTime<FMovieSceneGroomCacheParams>
                      ((FQualifiedFrameTime *)&stack0x00000008,
                       (FMovieSceneGroomCacheParams *)&local_28.ObjectPtr,(int)this + 0x110,FVar7);
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

// StaticRegisterNativesUMovieSceneGroomCacheSection @ 14e0f8450

void __cdecl UMovieSceneGroomCacheSection::StaticRegisterNativesUMovieSceneGroomCacheSection(void)

{
  return;
}

// TrimSection @ 14e0f85d0

void __thiscall
UMovieSceneGroomCacheSection::TrimSection
          (UMovieSceneGroomCacheSection *this,FQualifiedFrameTime *param_1,bool param_2,bool param_3
          )

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
  TObjectPtr<UGroomCache>_u_0 local_28;
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
        FVar3 = GetFirstLoopStartOffsetAtTrimTime<FMovieSceneGroomCacheParams>
                          (&local_38,(FMovieSceneGroomCacheParams *)&local_28.ObjectPtr,
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

