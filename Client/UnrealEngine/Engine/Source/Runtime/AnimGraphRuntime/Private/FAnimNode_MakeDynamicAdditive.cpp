// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimGraphRuntime
// Functions: 7

// StaticStruct @ 1463ef900

UScriptStruct * __cdecl FAnimNode_MakeDynamicAdditive::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAnimNode_MakeDynamicAdditive.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    Z_Registration_Info_UScriptStruct_FAnimNode_MakeDynamicAdditive.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_MakeDynamicAdditive,(UObject *)pUVar1,
                         L"AnimNode_MakeDynamicAdditive");
  }
  return Z_Registration_Info_UScriptStruct_FAnimNode_MakeDynamicAdditive.OuterSingleton;
}

// FAnimNode_MakeDynamicAdditive @ 146404350

FAnimNode_MakeDynamicAdditive * __thiscall
FAnimNode_MakeDynamicAdditive::FAnimNode_MakeDynamicAdditive(FAnimNode_MakeDynamicAdditive *this)

{
  *(undefined4 *)&(this->Base).field_0x8 = 0xffffffff;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FAnimNode_MakeDynamicAdditive__6B_;
  *(undefined8 *)&this->Base = 0;
  (this->Base).field_0xc = 0;
  *(undefined8 *)&this->Additive = 0;
  *(undefined4 *)&(this->Additive).field_0x8 = 0xffffffff;
  (this->Additive).field_0xc = 0;
  this->bMeshSpaceAdditive = false;
  return this;
}

// CacheBones_AnyThread @ 146419860

void __thiscall
FAnimNode_MakeDynamicAdditive::CacheBones_AnyThread
          (FAnimNode_MakeDynamicAdditive *this,FAnimationCacheBonesContext *param_1)

{
  FStatsHierarchical::BeginMeasurement("FAnimNode_MakeDynamicAdditive::CacheBones_AnyThread");
  FPoseLinkBase::CacheBones((FPoseLinkBase *)&this->Base,param_1);
  FPoseLinkBase::CacheBones((FPoseLinkBase *)&this->Additive,param_1);
  FStatsHierarchical::EndMeasurement();
  return;
}

// Evaluate_AnyThread @ 146439c90

void __thiscall
FAnimNode_MakeDynamicAdditive::Evaluate_AnyThread
          (FAnimNode_MakeDynamicAdditive *this,FPoseContext *param_1)

{
  FBlendedCurve *pFVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  bool bVar5;
  FName FVar6;
  FName FVar7;
  longlong lVar8;
  code *pcVar9;
  bool bVar10;
  int iVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  longlong lVar14;
  void *_Src;
  FName *pFVar15;
  ECurveElementFlags *pEVar16;
  longlong lVar17;
  ForElementType<UE::Anim::FCurveElement> FVar18;
  int iVar19;
  FName *pFVar20;
  uint uVar21;
  uint uVar22;
  FCurveElement *pFVar23;
  FIdentityFunctor local_res10;
  undefined1 local_e8 [56];
  ForElementType<UE::Anim::FCurveElement> FStack_b0;
  undefined8 local_a8;
  char local_a0;
  undefined8 local_98;
  TArray<int,TSizedDefaultAllocator<32>_> *pTStack_90;
  undefined8 local_88;
  TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *local_80;
  undefined8 local_78;
  TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_> *local_70;
  undefined8 local_68;
  void *local_60;
  undefined8 local_58;
  bool local_50;
  
  FStatsHierarchical::BeginMeasurement("FAnimNode_MakeDynamicAdditive::Evaluate_AnyThread");
  bVar5 = param_1->bExpectsAdditivePose;
  param_1->bExpectsAdditivePose = false;
  FAnimationBaseContext::FAnimationBaseContext
            ((FAnimationBaseContext *)local_e8,(FAnimInstanceProxy *)param_1->_padding_,
             (FAnimationUpdateSharedContext *)0x0);
  local_50 = param_1->bExpectsAdditivePose != false;
  local_e8._32_8_ = 0;
  local_e8._40_8_ = 0;
  local_e8._48_8_ = 0;
  FStack_b0.Data = (FCurveElement *)0x0;
  local_a8 = 0;
  local_a0 = '\0';
  local_98 = 0;
  pTStack_90 = (TArray<int,TSizedDefaultAllocator<32>_> *)0x0;
  local_88 = 0;
  local_80 = (TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *)0x0;
  local_78 = 0;
  local_70 = (TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_>
              *)0x0;
  local_68 = 0;
  local_60 = (void *)0x0;
  local_58 = 0;
  FPoseContext::InitializeImpl((FPoseContext *)local_e8,(FAnimInstanceProxy *)param_1->_padding_);
  local_e8._20_4_ = *(int *)((longlong)&param_1->_padding_ + 4);
  local_e8._24_4_ = (undefined4)param_1->_padding_;
  FPoseLink::Evaluate(&this->Base,(FPoseContext *)local_e8);
  FPoseLink::Evaluate(&this->Additive,param_1);
  if (this->bMeshSpaceAdditive != false) {
    FAnimationRuntime::ConvertPoseToMeshRotation(&param_1->Pose);
    FAnimationRuntime::ConvertPoseToMeshRotation((FCompactPose *)(local_e8 + 0x20));
  }
  FAnimationRuntime::ConvertPoseToAdditive(&param_1->Pose,(FCompactPose *)(local_e8 + 0x20));
  pFVar1 = &param_1->Curve;
  if ((pFVar1 == (FBlendedCurve *)&FStack_b0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(void*)&InOutValueArray0 != (void*)&InValueArray1",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Animation\\NamedValueArray.h"
                          ,0x10a,L""), bVar10)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  iVar19 = (int)local_a8;
  lVar14 = (longlong)(int)local_a8;
  puVar2 = &(param_1->Curve).field_0x8;
  iVar11 = *(int *)puVar2;
  if ((int)local_a8 != 0) {
    local_res10 = SUB81(param_1,0);
    if ((param_1->Curve).field_0x10 == '\0') {
      AlgoImpl::
      IntroSortInternal<UE::Anim::FCurveElement,int,FIdentityFunctor,UE::Anim::TNamedValueArray<TMemStackAllocator<0>,UE::Anim::FCurveElement>::FElementSortPredicate>
                (*(FCurveElement **)pFVar1,iVar11,local_res10,(FElementSortPredicate)local_res10);
      (param_1->Curve).field_0x10 = 1;
    }
    if (local_a0 == '\0') {
      AlgoImpl::
      IntroSortInternal<UE::Anim::FCurveElement,int,FIdentityFunctor,UE::Anim::TNamedValueArray<TMemStackAllocator<0>,UE::Anim::FCurveElement>::FElementSortPredicate>
                (FStack_b0.Data,(int)local_a8,local_res10,(FElementSortPredicate)local_res10);
      local_a0 = '\x01';
    }
    if (iVar19 < iVar11) {
      iVar19 = iVar11;
    }
    uVar21 = iVar19 / 2 + iVar19;
    if ((int)uVar21 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar21);
    }
    puVar3 = &(param_1->Curve).field_0xc;
    if (*(int *)&(param_1->Curve).field_0xc < (int)uVar21) {
      UE::Core::Private::
      ReallocTo<0,TMemStackAllocator<0>::ForElementType<UE::Anim::FCurveElement>_>
                (0x10,4,uVar21,(ForElementType<UE::Anim::FCurveElement> *)pFVar1,*(int *)puVar2,
                 (int *)puVar3);
    }
    uVar21 = __xmm_80000000800000008000000080000000;
    pFVar20 = *(FName **)pFVar1;
    pFVar15 = pFVar20 + (longlong)iVar11 * 2;
    pFVar23 = FStack_b0.Data + lVar14;
    FVar18.Data = FStack_b0.Data;
    if (pFVar20 != pFVar15) {
      if (FStack_b0.Data == pFVar23) goto LAB_14643a05d;
      do {
        while( true ) {
          FVar6 = (FVar18.Data)->Name;
          FVar7 = *pFVar20;
          if (FVar7 != FVar6) break;
          pFVar20[1].ComparisonIndex.Value =
               (uint)((float)pFVar20[1].ComparisonIndex.Value - (FVar18.Data)->Value);
          pEVar16 = &(FVar18.Data)->Flags;
          FVar18.Data = FVar18.Data + 1;
          *(ECurveElementFlags *)&pFVar20[1].Number =
               (ECurveElementFlags)pFVar20[1].Number | *pEVar16;
          pFVar20 = pFVar20 + 2;
          if ((pFVar20 == pFVar15) || (FVar18.Data == pFVar23)) goto LAB_146439fa8;
        }
        iVar11 = FVar7.ComparisonIndex.Value.Value - FVar6.ComparisonIndex.Value;
        if (iVar11 == 0) {
          iVar11 = FVar7.Number - FVar6.Number;
        }
        if (iVar11 < 0) {
          pFVar20 = pFVar20 + 2;
          bVar10 = pFVar20 == pFVar15;
        }
        else {
          lVar14 = *(longlong *)pFVar1;
          iVar11 = *(int *)&(param_1->Curve).field_0x8;
          if (iVar11 == *(int *)puVar3) {
            iVar11 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<0,TMemStackAllocator<0>::ForElementType<UE::Anim::FCurveElement>_>
                               (0x410,(ForElementType<UE::Anim::FCurveElement> *)pFVar1,
                                (int *)puVar3);
          }
          lVar8 = *(longlong *)pFVar1;
          iVar19 = (int)((longlong)pFVar20 - lVar14 >> 4);
          *(int *)&(param_1->Curve).field_0x8 = iVar11 + 1;
          lVar17 = (longlong)iVar19;
          _Src = (void *)(lVar8 + lVar17 * 0x10);
          memmove((void *)((longlong)_Src + 0x10),_Src,(longlong)(iVar11 - iVar19) << 4);
          lVar14 = *(longlong *)pFVar1;
          pFVar15 = (FName *)(lVar14 + (longlong)*(int *)&(param_1->Curve).field_0x8 * 0x10);
          puVar13 = (undefined8 *)(lVar14 + lVar17 * 0x10);
          *puVar13 = 0;
          puVar13[1] = 0;
          *(undefined4 *)(lVar14 + lVar17 * 0x10 + 8) = 0;
          pFVar20 = (FName *)(lVar14 + (lVar17 + 1) * 0x10);
          *(FName *)(lVar14 + lVar17 * 0x10) = (FVar18.Data)->Name;
          *(uint *)(lVar14 + lVar17 * 0x10 + 8) = (uint)(FVar18.Data)->Value ^ uVar21;
          pEVar16 = &(FVar18.Data)->Flags;
          FVar18.Data = FVar18.Data + 1;
          bVar10 = FVar18.Data == pFVar23;
          *(ECurveElementFlags *)(lVar14 + lVar17 * 0x10 + 0xc) = *pEVar16;
        }
      } while (!bVar10);
    }
LAB_146439fa8:
    if (FVar18.Data < pFVar23) {
      iVar11 = *(int *)&(param_1->Curve).field_0x8;
      iVar19 = (int)((longlong)pFVar23 - (longlong)FVar18.Data >> 4);
      uVar22 = iVar11 + iVar19;
      if ((int)uVar22 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar22);
      }
      if (*(int *)puVar3 < (int)uVar22) {
        UE::Core::Private::
        ReallocTo<0,TMemStackAllocator<0>::ForElementType<UE::Anim::FCurveElement>_>
                  (0x10,4,uVar22,(ForElementType<UE::Anim::FCurveElement> *)pFVar1,iVar11,
                   (int *)puVar3);
      }
      UE::Core::Private::
      ReallocGrow<0,TMemStackAllocator<0>::ForElementType<UE::Anim::FCurveElement>_>
                (0x10,4,iVar19,(ForElementType<UE::Anim::FCurveElement> *)pFVar1,
                 (int *)&(param_1->Curve).field_0x8,(int *)puVar3);
      puVar12 = (undefined8 *)(*(longlong *)pFVar1 + (longlong)iVar11 * 0x10);
      puVar13 = puVar12;
      pEVar16 = &(FVar18.Data)->Flags;
      do {
        *puVar13 = 0;
        puVar13[1] = 0;
        *(undefined4 *)(puVar13 + 1) = 0;
        *puVar13 = *(undefined8 *)((longlong)FVar18.Data + ((longlong)puVar13 - (longlong)puVar12));
        puVar4 = puVar13 + 2;
        *(uint *)(puVar13 + 1) = (uint)*(float *)(pEVar16 + -4) ^ uVar21;
        *(ECurveElementFlags *)((longlong)puVar13 + 0xc) = *pEVar16;
        puVar13 = puVar4;
        pEVar16 = pEVar16 + 0x10;
      } while (FVar18.Data + ((longlong)puVar4 - (longlong)puVar12) < pFVar23);
    }
  }
LAB_14643a05d:
  UE::Anim::Attributes::ConvertToAdditive
            ((FStackAttributeContainer *)&pTStack_90,&param_1->CustomAttributes);
  if (local_60 != (void *)0x0) {
    FMemory::Free(local_60);
  }
  DestructItems<TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_>,int>
            (local_70,(int)local_68);
  if (local_70 !=
      (TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_> *)0x0
     ) {
    FMemory::Free(local_70);
  }
  DestructItems<TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_>,int>
            (local_80,(int)local_78);
  if (local_80 != (TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *)0x0) {
    FMemory::Free(local_80);
  }
  DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>(pTStack_90,(int)local_88);
  if (pTStack_90 != (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
    FMemory::Free(pTStack_90);
  }
  param_1->bExpectsAdditivePose = bVar5;
  FStatsHierarchical::EndMeasurement();
  return;
}

// GatherDebugData @ 146444370

void __thiscall
FAnimNode_MakeDynamicAdditive::GatherDebugData
          (FAnimNode_MakeDynamicAdditive *this,FNodeDebugData *param_1)

{
  float fVar1;
  ForAnyElementType _Src;
  UPackage *pUVar2;
  FNodeDebugData *pFVar3;
  int iVar4;
  FName local_res8;
  FString local_48;
  FString local_38 [2];
  
  FStatsHierarchical::BeginMeasurement("FAnimNode_MakeDynamicAdditive::GatherDebugData");
  if (Z_Registration_Info_UScriptStruct_FAnimNode_MakeDynamicAdditive.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    Z_Registration_Info_UScriptStruct_FAnimNode_MakeDynamicAdditive.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_MakeDynamicAdditive,(UObject *)pUVar2,
                         L"AnimNode_MakeDynamicAdditive");
  }
  local_res8 = (FName)(Z_Registration_Info_UScriptStruct_FAnimNode_MakeDynamicAdditive.
                      OuterSingleton)->_padding_;
  ::FName::ToString(&local_res8,&local_48);
  ::FString::PrintfImpl(local_38,L"%s<W:%.1f%%> %s");
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  ::FString::Empty(&param_1->NodeDescription);
  ::FString::PrintfImpl(&local_48,L"(Mesh Space Additive: %s)");
  iVar4 = local_48.Data.ArrayNum + -1;
  if (local_48.Data.ArrayNum == 0) {
    iVar4 = 0;
  }
  ::FString::AppendChars(local_38,(wchar_t *)local_48.Data.AllocatorInstance.Data,iVar4);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  _Src.Data = local_38[0].Data.AllocatorInstance.Data;
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar4 = (int)local_38[0].Data._8_8_;
  local_48.Data.ArrayNum = iVar4;
  if (iVar4 == 0) {
    local_48.Data._8_8_ = local_38[0].Data._8_8_ & 0xffffffff;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar4,0,(ForAnyElementType *)&local_48,iVar4,&local_48.Data.ArrayMax);
    memcpy(local_48.Data.AllocatorInstance.Data,_Src.Data,(longlong)iVar4 * 2);
  }
  FNodeDebugData::AddDebugItem(param_1,&local_48,false);
  fVar1 = __real_3f800000;
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  pFVar3 = FNodeDebugData::BranchFlow(param_1,__real_3f800000,&local_48);
  FPoseLinkBase::GatherDebugData((FPoseLinkBase *)&this->Base,pFVar3);
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  pFVar3 = FNodeDebugData::BranchFlow(param_1,fVar1,&local_48);
  FPoseLinkBase::GatherDebugData((FPoseLinkBase *)&this->Additive,pFVar3);
  if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
  }
  FStatsHierarchical::EndMeasurement();
  return;
}

// Initialize_AnyThread @ 146459b10

void __thiscall
FAnimNode_MakeDynamicAdditive::Initialize_AnyThread
          (FAnimNode_MakeDynamicAdditive *this,FAnimationInitializeContext *param_1)

{
  FStatsHierarchical::BeginMeasurement("FAnimNode_MakeDynamicAdditive::Initialize_AnyThread");
  FAnimNode_Base::Initialize_AnyThread((FAnimNode_Base *)this,param_1);
  FPoseLinkBase::Initialize((FPoseLinkBase *)&this->Base,param_1);
  FPoseLinkBase::Initialize((FPoseLinkBase *)&this->Additive,param_1);
  FStatsHierarchical::EndMeasurement();
  return;
}

// Update_AnyThread @ 146477ef0

void __thiscall
FAnimNode_MakeDynamicAdditive::Update_AnyThread
          (FAnimNode_MakeDynamicAdditive *this,FAnimationUpdateContext *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  FAnimationUpdateContext local_38;
  
  FStatsHierarchical::BeginMeasurement("FAnimNode_MakeDynamicAdditive::Update_AnyThread");
  local_38._padding_ = param_1->_padding_;
  local_38._padding_ = param_1->_padding_;
  local_38._padding_ = param_1->_padding_;
  local_38._padding_ = param_1->_padding_;
  uVar1 = param_1->RootMotionWeightModifier;
  local_38.DeltaTime = param_1->DeltaTime;
  local_38._44_4_ = *(undefined4 *)&param_1->field_0x2c;
  local_38.RootMotionWeightModifier = (float)uVar1;
  local_38.CurrentWeight = param_1->CurrentWeight;
  FPoseLinkBase::Update((FPoseLinkBase *)&this->Base,&local_38);
  local_38._padding_ = param_1->_padding_;
  local_38._padding_ = param_1->_padding_;
  local_38._padding_ = param_1->_padding_;
  local_38._padding_ = param_1->_padding_;
  uVar2 = param_1->RootMotionWeightModifier;
  local_38.DeltaTime = param_1->DeltaTime;
  local_38._44_4_ = *(undefined4 *)&param_1->field_0x2c;
  local_38.RootMotionWeightModifier = (float)uVar2;
  local_38.CurrentWeight = param_1->CurrentWeight;
  FPoseLinkBase::Update((FPoseLinkBase *)&this->Additive,&local_38);
  FAnimTrace::OutputAnimNodeValue
            ((FAnimationBaseContext *)param_1,*(uint *)((longlong)&param_1->_padding_ + 4),
             L"Mesh Space Additive",this->bMeshSpaceAdditive);
  FStatsHierarchical::EndMeasurement();
  return;
}

