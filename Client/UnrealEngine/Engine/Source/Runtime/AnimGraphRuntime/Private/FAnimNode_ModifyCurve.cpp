// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimGraphRuntime
// Functions: 10

// StaticStruct @ 1463df360

UScriptStruct * __cdecl FAnimNode_ModifyCurve::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAnimNode_ModifyCurve.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar1 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    Z_Registration_Info_UScriptStruct_FAnimNode_ModifyCurve.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_ModifyCurve,(UObject *)pUVar1,
                         L"AnimNode_ModifyCurve");
  }
  return Z_Registration_Info_UScriptStruct_FAnimNode_ModifyCurve.OuterSingleton;
}

// FAnimNode_ModifyCurve @ 1464047b0

FAnimNode_ModifyCurve * __thiscall
FAnimNode_ModifyCurve::FAnimNode_ModifyCurve(FAnimNode_ModifyCurve *this)

{
  *(undefined4 *)&(this->SourcePose).field_0x8 = 0xffffffff;
  *(undefined8 *)&this->SourcePose = 0;
  (this->SourcePose).field_0xc = 0;
  *(undefined8 *)&this->CurveMap = 0;
  *(undefined8 *)&(this->CurveMap).field_0x8 = 0;
  *(undefined8 *)&(this->CurveMap).field_0x20 = 0;
  this->_padding_ = (longlong)&___7FAnimNode_ModifyCurve__6B_;
  this->_padding_ = 0;
  *(undefined4 *)&(this->CurveMap).field_0x28 = 0;
  *(undefined4 *)&(this->CurveMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->CurveMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CurveMap).field_0x34 = 0;
  *(undefined8 *)&(this->CurveMap).field_0x40 = 0;
  *(undefined4 *)&(this->CurveMap).field_0x48 = 0;
  (this->CurveValues).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CurveValues).ArrayNum = 0;
  (this->CurveValues).ArrayMax = 0;
  (this->CurveNames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CurveNames).ArrayNum = 0;
  (this->CurveNames).ArrayMax = 0;
  (this->LastCurveValues).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LastCurveValues).ArrayNum = 0;
  (this->LastCurveValues).ArrayMax = 0;
  *(undefined8 *)&this->LastCurveMapValues = 0;
  *(undefined8 *)&(this->LastCurveMapValues).field_0x8 = 0;
  *(undefined8 *)&(this->LastCurveMapValues).field_0x20 = 0;
  *(undefined4 *)&(this->LastCurveMapValues).field_0x28 = 0;
  *(undefined4 *)&(this->LastCurveMapValues).field_0x2c = 0x80;
  *(undefined4 *)&(this->LastCurveMapValues).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->LastCurveMapValues).field_0x34 = 0;
  *(undefined8 *)&(this->LastCurveMapValues).field_0x40 = 0;
  *(undefined4 *)&(this->LastCurveMapValues).field_0x48 = 0;
  *(undefined8 *)&this->LastCurve = 0;
  *(undefined8 *)&(this->LastCurve).field_0x8 = 0;
  (this->LastCurve).field_0x10 = 0;
  *(undefined8 *)&(this->LastCurve).field_0x18 = 0;
  this->ApplyMode = Blend;
  this->Alpha = 1.0;
  return this;
}

// ~FAnimNode_ModifyCurve @ 146408ba0

void __thiscall FAnimNode_ModifyCurve::~FAnimNode_ModifyCurve(FAnimNode_ModifyCurve *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  if (*(void **)&this->LastCurve != (void *)0x0) {
    FMemory::Free(*(void **)&this->LastCurve);
  }
  *(undefined4 *)&(this->LastCurveMapValues).field_0x48 = 0;
  pvVar1 = *(void **)&(this->LastCurveMapValues).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->LastCurveMapValues);
  pFVar2 = (this->LastCurveValues).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->CurveNames).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->CurveValues).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  *(undefined4 *)&(this->CurveMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->CurveMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CurveMap);
  this->_padding_ = (longlong)&___7FAnimNode_Base__6B_;
  return;
}

// CacheBones_AnyThread @ 146419940

void __thiscall
FAnimNode_ModifyCurve::CacheBones_AnyThread
          (FAnimNode_ModifyCurve *this,FAnimationCacheBonesContext *param_1)

{
  FStatsHierarchical::BeginMeasurement("FAnimNode_ModifyCurve::CacheBones_AnyThread");
  FAnimNode_Base::CacheBones_AnyThread((FAnimNode_Base *)this,param_1);
  FPoseLinkBase::CacheBones((FPoseLinkBase *)&this->SourcePose,param_1);
  FStatsHierarchical::EndMeasurement();
  return;
}

// Evaluate_AnyThread @ 14643a410

void __thiscall
FAnimNode_ModifyCurve::Evaluate_AnyThread(FAnimNode_ModifyCurve *this,FPoseContext *param_1)

{
  FCompactPose *pFVar1;
  undefined1 *puVar2;
  TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_> *pTVar3;
  float fVar4;
  undefined8 uVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  FName FVar8;
  longlong lVar9;
  code *pcVar10;
  TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_> *pTVar11;
  ForElementType<UE::Math::TTransform<double>_> _Src;
  bool bVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  ulonglong uVar16;
  uint uVar17;
  uint uVar18;
  ulonglong uVar20;
  undefined1 *puVar21;
  uint *puVar22;
  uint uVar23;
  longlong lVar24;
  <lambda_1> local_res8 [8];
  undefined1 local_res10 [8];
  int local_res18;
  int local_res20;
  undefined1 local_248 [24];
  ECurveFilterMode local_230;
  TNamedValueArray<TSizedDefaultAllocator<32>,UE::Anim::FCurveFilterElement> local_228;
  undefined1 local_210;
  TNamedValueArray<TMemStackAllocator<0>,UE::Anim::FCurveElement> local_208;
  undefined8 local_1f0;
  TNamedValueArray<TMemStackAllocator<0>,UE::Anim::FCurveElement> local_1e8;
  undefined8 local_1d0;
  TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_> *local_1c8;
  uint uStack_1c0;
  uint uStack_1bc;
  undefined1 *local_1b8;
  undefined4 uStack_1b0;
  uint uStack_1ac;
  uint local_1a8;
  undefined4 uStack_1a4;
  int iStack_1a0;
  undefined4 uStack_19c;
  TBaseBlendedCurve<TMemStackAllocator<0>,UE::Anim::FCurveElement> *local_198;
  TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_> *local_190;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_188;
  undefined8 uStack_168;
  TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_> *local_160;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_158;
  undefined8 uStack_138;
  undefined1 local_128 [32];
  ForElementType<UE::Math::TTransform<double>_> local_108;
  undefined8 local_100;
  undefined8 local_f8;
  FBlendedCurve FStack_f0;
  TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> TStack_d0;
  bool local_90;
  undefined4 local_6c;
  undefined4 local_4c;
  ulonglong uVar19;
  
  FStatsHierarchical::BeginMeasurement("FAnimNode_ModifyCurve::Evaluate_AnyThread");
  FAnimationBaseContext::FAnimationBaseContext
            ((FAnimationBaseContext *)local_128,(FAnimInstanceProxy *)param_1->_padding_,
             (FAnimationUpdateSharedContext *)0x0);
  uVar16 = 0;
  uVar14 = 0;
  uVar15 = 0;
  local_90 = param_1->bExpectsAdditivePose != false;
  local_108.Data = (TTransform<double> *)0x0;
  local_100 = 0;
  local_f8 = 0;
  FStack_f0._0_8_ = 0;
  FStack_f0._8_8_ = 0;
  FStack_f0._16_1_ = 0;
  FStack_f0._24_8_ = 0;
  TStack_d0.UniqueTypedBoneIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  TStack_d0.UniqueTypedBoneIndices.ArrayNum = 0;
  TStack_d0.UniqueTypedBoneIndices.ArrayMax = 0;
  TStack_d0.AttributeIdentifiers.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  TStack_d0.AttributeIdentifiers.ArrayNum = 0;
  TStack_d0.AttributeIdentifiers.ArrayMax = 0;
  TStack_d0.Values.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  TStack_d0.Values.ArrayNum = 0;
  TStack_d0.Values.ArrayMax = 0;
  TStack_d0.UniqueTypes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  TStack_d0.UniqueTypes.ArrayNum = 0;
  TStack_d0.UniqueTypes.ArrayMax = 0;
  FPoseContext::InitializeImpl((FPoseContext *)local_128,(FAnimInstanceProxy *)param_1->_padding_);
  local_128._20_4_ = *(int *)((longlong)&param_1->_padding_ + 4);
  local_128._24_4_ = (undefined4)param_1->_padding_;
  FPoseLink::Evaluate(&this->SourcePose,(FPoseContext *)local_128);
  if ((FAnimInstanceProxy *)param_1->_padding_ != (FAnimInstanceProxy *)local_128._0_8_) {
    FPoseContext::InitializeImpl(param_1,(FAnimInstanceProxy *)param_1->_padding_);
  }
  _Src.Data = local_108.Data;
  pFVar1 = &param_1->Pose;
  if (pFVar1 != (FCompactPose *)&local_108) {
    iVar13 = (int)local_100;
    lVar24 = (longlong)(int)local_100;
    puVar2 = &(param_1->Pose).field_0xc;
    *(int *)&(param_1->Pose).field_0x8 = (int)local_100;
    if (((int)local_100 == 0) && (*(int *)puVar2 == 0)) {
      *(undefined4 *)puVar2 = 0;
    }
    else {
      UE::Core::Private::
      ReallocForCopy<0,TMemStackAllocator<0>::ForElementType<UE::Math::TTransform<double>_>_>
                (0x60,0x10,(int)local_100,*(int *)puVar2,
                 (ForElementType<UE::Math::TTransform<double>_> *)pFVar1,(int)local_100,
                 (int *)puVar2);
      if (iVar13 != 0) {
        memcpy(*(void **)pFVar1,_Src.Data,lVar24 * 0x60);
      }
    }
  }
  *(undefined8 *)&(param_1->Pose).field_0x10 = local_f8;
  local_198 = (TBaseBlendedCurve<TMemStackAllocator<0>,UE::Anim::FCurveElement> *)&param_1->Curve;
  FBlendedCurve::operator=((FBlendedCurve *)local_198,&FStack_f0);
  UE::Anim::FStackAttributeContainer::operator=
            (&param_1->CustomAttributes,(FStackAttributeContainer *)&TStack_d0);
  param_1->bExpectsAdditivePose = local_90;
  uVar17 = (this->CurveNames).ArrayNum;
  uVar18 = 0;
  if (this->ApplyMode == WeightedMovingAverage) {
    local_248._0_8_ = (FScriptContainerElement *)0x0;
    local_248._8_8_ = 0;
    local_248[0x10] = false;
    local_230 = AllowOnlyFiltered;
    if ((int)uVar17 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar17);
    }
    if (0 < (int)uVar17) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,uVar17,(ForAnyElementType *)local_248,0,(int *)(local_248 + 0xc));
    }
    uVar17 = (this->CurveNames).ArrayNum;
    uVar19 = uVar16;
    uVar20 = uVar16;
    if (0 < (int)uVar17) {
      do {
        uVar23 = (uint)uVar19;
        uVar17 = uVar15;
        if ((int)uVar23 < (this->CurveNames).ArrayNum) {
          uVar17 = ~uVar23 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        uVar5 = *(undefined8 *)((this->CurveNames).AllocatorInstance.Data + uVar20);
        if (local_248._8_4_ == local_248._12_4_) {
          iVar13 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x40c,(ForAnyElementType *)local_248,(int *)(local_248 + 0xc));
          local_248._8_4_ = iVar13;
        }
        lVar24 = (longlong)(int)local_248._8_4_;
        local_248._8_4_ = local_248._8_4_ + 1;
        *(undefined8 *)(local_248._0_8_ + lVar24 * 0xc) = uVar5;
        *(FScriptContainerElement *)(local_248._0_8_ + lVar24 * 0xc + 8) =
             (FScriptContainerElement)0x2;
        uVar17 = (this->CurveNames).ArrayNum;
        local_248[0x10] = false;
        uVar19 = (ulonglong)(uVar23 + 1);
        uVar20 = uVar20 + 8;
      } while ((int)(uVar23 + 1) < (int)uVar17);
    }
    if (0 < *(int *)&(this->CurveMap).field_0x8 - *(int *)&(this->CurveMap).field_0x34) {
      local_228.Elements.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_228.Elements.ArrayNum = 0;
      local_228.Elements.ArrayMax = 0;
      local_228.bSorted = false;
      local_210 = 0;
      if ((int)uVar17 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar17);
      }
      if (0 < (int)uVar17) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc,4,uVar17,(ForAnyElementType *)&local_228,0,&local_228.Elements.ArrayMax);
      }
      uVar17 = *(uint *)&(this->CurveMap).field_0x28;
      puVar2 = &(this->CurveMap).field_0x10;
      pTVar3 = &this->CurveMap;
      uStack_1bc = 1;
      uStack_1ac = uVar18;
      if (uVar17 != 0) {
        puVar22 = *(uint **)&(this->CurveMap).field_0x20;
        if (puVar22 == (uint *)0x0) {
          puVar22 = (uint *)puVar2;
        }
        uVar23 = *puVar22;
        uVar19 = uVar16;
        uVar18 = uVar14;
        uVar15 = uVar14;
        while (uVar23 == 0) {
          iVar13 = (int)uVar16;
          uVar18 = (int)uVar19 + 0x20;
          uVar19 = (ulonglong)uVar18;
          uVar15 = iVar13 + 1;
          uVar16 = (ulonglong)uVar15;
          uStack_1ac = uVar17;
          if ((int)((uVar17 - 1) + ((int)(uVar17 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar15)
          goto LAB_14643a7a2;
          uVar23 = puVar22[(longlong)iVar13 + 1];
        }
        uStack_1bc = -uVar23 & uVar23;
        uVar16 = (ulonglong)uStack_1bc * 2 + 1;
        lVar24 = 0x3f;
        if (uVar16 != 0) {
          for (; uVar16 >> lVar24 == 0; lVar24 = lVar24 + -1) {
          }
        }
        local_res18 = (int)lVar24;
        uStack_1ac = (uVar18 - 1) + local_res18;
        if ((int)uVar17 < (int)uStack_1ac) {
          uStack_1ac = uVar17;
        }
      }
LAB_14643a7a2:
      uVar14 = *(uint *)&(this->CurveMap).field_0x28;
      uStack_1a4 = local_6c;
      uVar23 = uVar14 & 0xffffffe0;
      iStack_1a0 = *(int *)&(this->CurveMap).field_0x8 - *(int *)&(this->CurveMap).field_0x34;
      uStack_1b0 = 0xffffffff;
      TStack_188._padding_ = CONCAT44(uStack_1bc,uVar15);
      TStack_188.CurrentBitIndex = uStack_1ac;
      TStack_188.UnvisitedBitMask = 0xffffffff;
      iVar13 = (int)uVar14 >> 5;
      TStack_188._28_4_ = local_6c;
      TStack_188.BaseBitIndex = uVar18;
      uStack_168 = CONCAT44(uStack_19c,iStack_1a0);
      local_1c8 = pTVar3;
      uStack_1c0 = uVar15;
      local_1b8 = puVar2;
      local_1a8 = uVar18;
      local_190 = pTVar3;
      TStack_188.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
      if ((((int)uVar14 < 0) || ((int)uVar17 < (int)uVar14)) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("StartIndex >= 0 && StartIndex <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x7af,L""), bVar12)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      uVar15 = *(uint *)&(this->CurveMap).field_0x28;
      if (uVar14 != uVar15) {
        puVar21 = *(undefined1 **)&(this->CurveMap).field_0x20;
        if (puVar21 == (undefined1 *)0x0) {
          puVar21 = puVar2;
        }
        uVar14 = -1 << ((byte)uVar14 & 0x1f) & *(uint *)(puVar21 + (longlong)iVar13 * 4);
        while (uVar14 == 0) {
          lVar24 = (longlong)iVar13;
          uVar23 = uVar23 + 0x20;
          iVar13 = iVar13 + 1;
          uVar14 = uVar15;
          if ((int)((uVar15 - 1) + ((int)(uVar15 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13)
          goto LAB_14643a8a0;
          uVar14 = *(uint *)(puVar21 + lVar24 * 4 + 4);
        }
        uVar16 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
        lVar24 = 0x3f;
        if (uVar16 != 0) {
          for (; uVar16 >> lVar24 == 0; lVar24 = lVar24 + -1) {
          }
        }
        uVar14 = (uVar23 - 1) + (int)lVar24;
        if ((int)uVar15 < (int)uVar14) {
          uVar14 = uVar15;
        }
      }
LAB_14643a8a0:
      while( true ) {
        pTVar11 = local_190;
        if (*(int *)&local_190->field_0x8 - *(int *)&local_190->field_0x34 != (int)uStack_168) {
          `TSparseArray<TSparseSetElement<TTuple<FName,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
        }
        if (((TStack_188.CurrentBitIndex == uVar14) &&
            (TStack_188.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) &&
           (pTVar11 == pTVar3)) break;
        uVar5 = *(undefined8 *)(*(longlong *)pTVar11 + (longlong)TStack_188.CurrentBitIndex * 0x14);
        if (local_228.Elements.ArrayNum == local_228.Elements.ArrayMax) {
          iVar13 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x40c,(ForAnyElementType *)&local_228,&local_228.Elements.ArrayMax);
          local_228.Elements.ArrayNum = iVar13;
        }
        lVar24 = (longlong)local_228.Elements.ArrayNum;
        local_228.Elements.ArrayNum = local_228.Elements.ArrayNum + 1;
        *(undefined8 *)(local_228.Elements.AllocatorInstance.Data + lVar24 * 0xc) = uVar5;
        local_228.Elements.AllocatorInstance.Data[lVar24 * 0xc + 8] = (FScriptContainerElement)0x2;
        local_228.bSorted = false;
        TStack_188.UnvisitedBitMask = TStack_188.UnvisitedBitMask & ~TStack_188._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_188);
      }
      UE::Anim::FNamedValueArrayUtils::
      Union<_FAnimNode_ModifyCurve::Evaluate_AnyThread_::__l10::<lambda_1>,TSizedDefaultAllocator<32>,UE::Anim::FCurveFilterElement,TSizedDefaultAllocator<32>,UE::Anim::FCurveFilterElement>
                ((TNamedValueArray<TSizedDefaultAllocator<32>,UE::Anim::FCurveFilterElement> *)
                 local_248,&local_228,local_res8[0]);
      if (local_228.Elements.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_228.Elements.AllocatorInstance.Data);
      }
    }
    UE::Anim::FCurveUtils::Filter<TSizedDefaultAllocator<32>,UE::Anim::FCurveElement>
              ((TBaseBlendedCurve<TSizedDefaultAllocator<32>,UE::Anim::FCurveElement> *)
               &this->LastCurve,(FCurveFilter *)local_248);
    UE::Anim::FNamedValueArrayUtils::
    Union<_FAnimNode_ModifyCurve::Evaluate_AnyThread_::__l5::<lambda_2>,TMemStackAllocator<0>,UE::Anim::FCurveElement,TSizedDefaultAllocator<32>,UE::Anim::FCurveElement>
              ((TNamedValueArray<TMemStackAllocator<0>,UE::Anim::FCurveElement> *)local_198,
               (TNamedValueArray<TSizedDefaultAllocator<32>,UE::Anim::FCurveElement> *)
               &this->LastCurve,(<lambda_2>)this);
    TBaseBlendedCurve<TSizedDefaultAllocator<32>,UE::Anim::FCurveElement>::
    CopyFrom<TMemStackAllocator<0>,UE::Anim::FCurveElement>
              ((TBaseBlendedCurve<TSizedDefaultAllocator<32>,UE::Anim::FCurveElement> *)
               &this->LastCurve,local_198);
    if ((FScriptContainerElement *)local_248._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_248._0_8_);
    }
  }
  else {
    local_1e8.Elements.AllocatorInstance.Data = (FCurveElement *)0x0;
    local_1e8.Elements.ArrayNum = 0;
    local_1e8.Elements.ArrayMax = 0;
    local_1e8.bSorted = false;
    local_1d0 = 0;
    if ((int)uVar17 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar17);
    }
    if (0 < (int)uVar17) {
      UE::Core::Private::
      ReallocTo<0,TMemStackAllocator<0>::ForElementType<UE::Anim::FCurveElement>_>
                (0x10,4,uVar17,(ForElementType<UE::Anim::FCurveElement> *)&local_1e8,0,
                 &local_1e8.Elements.ArrayMax);
    }
    uVar17 = (this->CurveNames).ArrayNum;
    uVar19 = uVar16;
    uVar20 = uVar16;
    if (0 < (int)uVar17) {
      do {
        uVar23 = (uint)uVar19;
        uVar17 = uVar18;
        if ((int)uVar23 < (this->CurveValues).ArrayNum) {
          uVar17 = ~uVar23 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        pFVar6 = (this->CurveValues).AllocatorInstance.Data;
        uVar17 = uVar18;
        if ((int)uVar23 < (this->CurveNames).ArrayNum) {
          uVar17 = ~uVar23 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        pFVar7 = (this->CurveNames).AllocatorInstance.Data;
        iVar13 = local_1e8.Elements.ArrayNum;
        if (local_1e8.Elements.ArrayNum == local_1e8.Elements.ArrayMax) {
          iVar13 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<0,TMemStackAllocator<0>::ForElementType<UE::Anim::FCurveElement>_>
                             (0x410,(ForElementType<UE::Anim::FCurveElement> *)&local_1e8,
                              &local_1e8.Elements.ArrayMax);
        }
        FVar8 = *(FName *)(pFVar7 + uVar20 * 8);
        local_1e8.Elements.ArrayNum = iVar13 + 1;
        local_1e8.bSorted = false;
        local_1e8.Elements.AllocatorInstance.Data[iVar13].Value = *(float *)(pFVar6 + uVar20 * 4);
        local_1e8.Elements.AllocatorInstance.Data[iVar13].Name = FVar8;
        local_1e8.Elements.AllocatorInstance.Data[iVar13].Flags = None;
        uVar17 = (this->CurveNames).ArrayNum;
        uVar19 = (ulonglong)(uVar23 + 1);
        uVar20 = uVar20 + 1;
      } while ((int)(uVar23 + 1) < (int)uVar17);
    }
    if (0 < *(int *)&(this->CurveMap).field_0x8 - *(int *)&(this->CurveMap).field_0x34) {
      local_208.Elements.AllocatorInstance.Data = (FCurveElement *)0x0;
      local_208.Elements.ArrayNum = 0;
      local_208.Elements.ArrayMax = 0;
      local_208.bSorted = false;
      local_1f0 = 0;
      if ((int)uVar17 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar17);
      }
      uVar19 = uVar16;
      if (0 < (int)uVar17) {
        UE::Core::Private::
        ReallocTo<0,TMemStackAllocator<0>::ForElementType<UE::Anim::FCurveElement>_>
                  (0x10,4,uVar17,(ForElementType<UE::Anim::FCurveElement> *)&local_208,0,
                   &local_208.Elements.ArrayMax);
        uVar19 = local_208.Elements._8_8_ & 0xffffffff;
      }
      uVar17 = *(uint *)&(this->CurveMap).field_0x28;
      puVar2 = &(this->CurveMap).field_0x10;
      local_1c8 = &this->CurveMap;
      uStack_1bc = 1;
      uStack_1ac = uVar18;
      if (uVar17 != 0) {
        puVar22 = *(uint **)&(this->CurveMap).field_0x20;
        if (puVar22 == (uint *)0x0) {
          puVar22 = (uint *)puVar2;
        }
        uVar23 = *puVar22;
        uVar20 = uVar16;
        uVar18 = uVar14;
        uVar15 = uVar14;
        while (uVar23 == 0) {
          iVar13 = (int)uVar16;
          uVar18 = (int)uVar20 + 0x20;
          uVar20 = (ulonglong)uVar18;
          uVar15 = iVar13 + 1;
          uVar16 = (ulonglong)uVar15;
          uStack_1ac = uVar17;
          if ((int)((uVar17 - 1) + ((int)(uVar17 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar15)
          goto LAB_14643abd0;
          uVar23 = puVar22[(longlong)iVar13 + 1];
        }
        uStack_1bc = -uVar23 & uVar23;
        uVar16 = (ulonglong)uStack_1bc * 2 + 1;
        lVar24 = 0x3f;
        if (uVar16 != 0) {
          for (; uVar16 >> lVar24 == 0; lVar24 = lVar24 + -1) {
          }
        }
        local_res20 = (int)lVar24;
        uStack_1ac = (uVar18 - 1) + local_res20;
        if ((int)uVar17 < (int)uStack_1ac) {
          uStack_1ac = uVar17;
        }
      }
LAB_14643abd0:
      uVar14 = *(uint *)&(this->CurveMap).field_0x28;
      uStack_1a4 = local_4c;
      iStack_1a0 = *(int *)&(this->CurveMap).field_0x8 - *(int *)&(this->CurveMap).field_0x34;
      uStack_1b0 = 0xffffffff;
      uVar23 = uVar14 & 0xffffffe0;
      TStack_158._padding_ = CONCAT44(uStack_1bc,uVar15);
      TStack_158.CurrentBitIndex = uStack_1ac;
      TStack_158.UnvisitedBitMask = 0xffffffff;
      iVar13 = (int)uVar14 >> 5;
      TStack_158._28_4_ = local_4c;
      TStack_158.BaseBitIndex = uVar18;
      uStack_138 = CONCAT44(uStack_19c,iStack_1a0);
      uStack_1c0 = uVar15;
      local_1b8 = puVar2;
      local_1a8 = uVar18;
      local_160 = local_1c8;
      TStack_158.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
      if ((((int)uVar14 < 0) || ((int)uVar17 < (int)uVar14)) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("StartIndex >= 0 && StartIndex <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x7af,L""), bVar12)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      uVar15 = *(uint *)&(this->CurveMap).field_0x28;
      if (uVar14 != uVar15) {
        puVar21 = *(undefined1 **)&(this->CurveMap).field_0x20;
        if (puVar21 == (undefined1 *)0x0) {
          puVar21 = puVar2;
        }
        uVar14 = -1 << ((byte)uVar14 & 0x1f) & *(uint *)(puVar21 + (longlong)iVar13 * 4);
        while (uVar14 == 0) {
          lVar24 = (longlong)iVar13;
          uVar23 = uVar23 + 0x20;
          iVar13 = iVar13 + 1;
          uVar14 = uVar15;
          if ((int)((uVar15 - 1) + ((int)(uVar15 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13)
          goto LAB_14643accc;
          uVar14 = *(uint *)(puVar21 + lVar24 * 4 + 4);
        }
        uVar16 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
        lVar24 = 0x3f;
        if (uVar16 != 0) {
          for (; uVar16 >> lVar24 == 0; lVar24 = lVar24 + -1) {
          }
        }
        uVar14 = (uVar23 - 1) + (int)lVar24;
        if ((int)uVar15 < (int)uVar14) {
          uVar14 = uVar15;
        }
      }
LAB_14643accc:
      while( true ) {
        pTVar3 = local_160;
        if (*(int *)&local_160->field_0x8 - *(int *)&local_160->field_0x34 != (int)uStack_138) {
          `TSparseArray<TSparseSetElement<TTuple<FName,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
        }
        lVar24 = (longlong)TStack_158.CurrentBitIndex;
        if (((TStack_158.CurrentBitIndex == uVar14) &&
            (TStack_158.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) &&
           (pTVar3 == &this->CurveMap)) break;
        lVar9 = *(longlong *)pTVar3;
        iVar13 = (int)uVar19;
        if (iVar13 == local_208.Elements.ArrayMax) {
          iVar13 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<0,TMemStackAllocator<0>::ForElementType<UE::Anim::FCurveElement>_>
                             (0x410,(ForElementType<UE::Anim::FCurveElement> *)&local_208,
                              &local_208.Elements.ArrayMax);
        }
        uVar19 = (ulonglong)(iVar13 + 1U);
        fVar4 = *(float *)(lVar9 + 8 + lVar24 * 0x14);
        local_208.Elements.ArrayNum = iVar13 + 1U;
        local_208.bSorted = false;
        local_208.Elements.AllocatorInstance.Data[iVar13].Name = *(FName *)(lVar9 + lVar24 * 0x14);
        local_208.Elements.AllocatorInstance.Data[iVar13].Value = fVar4;
        TStack_158.UnvisitedBitMask = TStack_158.UnvisitedBitMask & ~TStack_158._padding_._4_4_;
        local_208.Elements.AllocatorInstance.Data[iVar13].Flags = None;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_158);
      }
      UE::Anim::FNamedValueArrayUtils::
      Union<_TBaseBlendedCurve<TMemStackAllocator<0>,UE::Anim::FCurveElement>::Combine<TMemStackAllocator<0>,UE::Anim::FCurveElement>_::__l2::<lambda_1>,TMemStackAllocator<0>,UE::Anim::FCurveElement,TMemStackAllocator<0>,UE::Anim::FCurveElement>
                (&local_1e8,&local_208,(<lambda_1>)local_res8[0]);
    }
    UE::Anim::FNamedValueArrayUtils::
    Union<_FAnimNode_ModifyCurve::Evaluate_AnyThread_::__l16::<lambda_3>,TMemStackAllocator<0>,UE::Anim::FCurveElement,TMemStackAllocator<0>,UE::Anim::FCurveElement>
              ((TNamedValueArray<TMemStackAllocator<0>,UE::Anim::FCurveElement> *)local_198,
               &local_1e8,(<lambda_3>)this);
  }
  UE::Anim::TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_>::
  ~TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_>(&TStack_d0);
  FStatsHierarchical::EndMeasurement();
  return;
}

// GatherDebugData @ 1464449b0

void __thiscall
FAnimNode_ModifyCurve::GatherDebugData(FAnimNode_ModifyCurve *this,FNodeDebugData *param_1)

{
  ForAnyElementType _Src;
  UPackage *pUVar1;
  int iVar2;
  FName local_res8;
  FString local_48;
  FString local_38 [2];
  
  FStatsHierarchical::BeginMeasurement("FAnimNode_ModifyCurve::GatherDebugData");
  if (Z_Registration_Info_UScriptStruct_FAnimNode_ModifyCurve.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar1 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    Z_Registration_Info_UScriptStruct_FAnimNode_ModifyCurve.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_ModifyCurve,(UObject *)pUVar1,
                         L"AnimNode_ModifyCurve");
  }
  local_res8 = (FName)(Z_Registration_Info_UScriptStruct_FAnimNode_ModifyCurve.OuterSingleton)->
                      _padding_;
  ::FName::ToString(&local_res8,&local_48);
  ::FString::PrintfImpl(local_38,L"%s<W:%.1f%%> %s");
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  ::FString::Empty(&param_1->NodeDescription);
  ::FString::PrintfImpl(&local_48,L"(Alpha: %.2f)");
  iVar2 = local_48.Data.ArrayNum + -1;
  if (local_48.Data.ArrayNum == 0) {
    iVar2 = 0;
  }
  ::FString::AppendChars(local_38,(wchar_t *)local_48.Data.AllocatorInstance.Data,iVar2);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  _Src.Data = local_38[0].Data.AllocatorInstance.Data;
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_38[0].Data.ArrayNum == 0) {
    local_48.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_38[0].Data.ArrayNum,0,(ForAnyElementType *)&local_48,
               local_38[0].Data.ArrayNum,&local_48.Data.ArrayMax);
    memcpy(local_48.Data.AllocatorInstance.Data,_Src.Data,(longlong)local_38[0].Data.ArrayNum * 2);
  }
  FNodeDebugData::AddDebugItem(param_1,&local_48,false);
  FPoseLinkBase::GatherDebugData((FPoseLinkBase *)&this->SourcePose,param_1);
  if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
  }
  FStatsHierarchical::EndMeasurement();
  return;
}

// Initialize_AnyThread @ 146459bb0

void __thiscall
FAnimNode_ModifyCurve::Initialize_AnyThread
          (FAnimNode_ModifyCurve *this,FAnimationInitializeContext *param_1)

{
  undefined1 *puVar1;
  
  FStatsHierarchical::BeginMeasurement("FAnimNode_ModifyCurve::Initialize_AnyThread");
  FAnimNode_Base::Initialize_AnyThread((FAnimNode_Base *)this,param_1);
  FPoseLinkBase::Initialize((FPoseLinkBase *)&this->SourcePose,param_1);
  if (this->ApplyMode == WeightedMovingAverage) {
    puVar1 = &(this->LastCurve).field_0xc;
    *(undefined4 *)&(this->LastCurve).field_0x8 = 0;
    if (*(int *)puVar1 < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,0,(ForAnyElementType *)&this->LastCurve,0,(int *)puVar1);
    }
    (this->LastCurve).field_0x10 = 0;
  }
  FStatsHierarchical::EndMeasurement();
  return;
}

// ProcessCurveOperation @ 146461eb0

float __thiscall
FAnimNode_ModifyCurve::ProcessCurveOperation
          (FAnimNode_ModifyCurve *this,float param_1,float param_2)

{
  EModifyCurveApplyMode EVar1;
  float fVar2;
  float fVar3;
  
  EVar1 = this->ApplyMode;
  if (EVar1 == Add) {
    fVar3 = param_1 + param_2;
  }
  else if (EVar1 == Scale) {
    fVar3 = param_1 * param_2;
  }
  else if (EVar1 == RemapCurve) {
    fVar3 = param_1 - param_2;
    if (fVar3 <= 0.0) {
      fVar3 = 0.0;
    }
    fVar2 = __real_3f800000 - param_2;
    if (__real_3f800000 - param_2 <= __real_3c23d70a) {
      fVar2 = __real_3c23d70a;
    }
    fVar3 = fVar3 / fVar2;
    if (__real_3f800000 <= fVar3) {
      fVar3 = __real_3f800000;
    }
  }
  else {
    fVar3 = param_1;
    if (EVar1 == Blend) {
      fVar3 = param_2;
    }
  }
  fVar2 = this->Alpha;
  if (__real_3f800000 <= this->Alpha) {
    fVar2 = __real_3f800000;
  }
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  return fVar2 * (fVar3 - param_1) + param_1;
}

// ProcessCurveWMAOperation @ 146461f30

float __thiscall
FAnimNode_ModifyCurve::ProcessCurveWMAOperation
          (FAnimNode_ModifyCurve *this,float param_1,float param_2)

{
  float fVar1;
  
  fVar1 = this->Alpha;
  if (__real_3f800000 <= this->Alpha) {
    fVar1 = __real_3f800000;
  }
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  return (__real_3f800000 - fVar1) * param_2 + fVar1 * param_1;
}

// Update_AnyThread @ 1464782a0

void __thiscall
FAnimNode_ModifyCurve::Update_AnyThread
          (FAnimNode_ModifyCurve *this,FAnimationUpdateContext *param_1)

{
  FExposedValueHandler *this_00;
  
  FStatsHierarchical::BeginMeasurement("FAnimNode_ModifyCurve::Update_AnyThread");
  FPoseLinkBase::Update((FPoseLinkBase *)&this->SourcePose,param_1);
  this_00 = FAnimNode_Base::GetEvaluateGraphExposedInputs((FAnimNode_Base *)this);
  FExposedValueHandler::Execute(this_00,(FAnimationBaseContext *)param_1);
  FStatsHierarchical::EndMeasurement();
  return;
}

