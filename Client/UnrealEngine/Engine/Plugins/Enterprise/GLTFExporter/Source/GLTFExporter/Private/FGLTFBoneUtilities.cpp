// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GLTFExporter
// Functions: 4

// GetBindTransform @ 14e5f4fa0

TTransform<double> * __cdecl
FGLTFBoneUtilities::GetBindTransform
          (TTransform<double> *__return_storage_ptr__,FReferenceSkeleton *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  double dVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  TTransform<double> *pTVar7;
  longlong lVar8;
  
  uVar5 = 0;
  if (param_2 < (param_1->FinalRefBonePose).ArrayNum) {
    uVar5 = (uint)~param_2 >> 0x1f;
  }
  if ((uVar5 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar2 = (code *)swi(3);
    pTVar7 = (TTransform<double> *)(*pcVar2)();
    return pTVar7;
  }
  pFVar1 = (param_1->FinalRefBonePose).AllocatorInstance.Data;
  lVar8 = (longlong)param_2 * 0x60;
  dVar3 = *(double *)(pFVar1 + lVar8 + 8);
  (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = *(double *)(pFVar1 + lVar8);
  (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = dVar3;
  dVar3 = *(double *)(pFVar1 + lVar8 + 0x10 + 8);
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = *(double *)(pFVar1 + lVar8 + 0x10);
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = dVar3;
  dVar3 = *(double *)(pFVar1 + lVar8 + 0x20 + 8);
  (__return_storage_ptr__->Translation).XY.m128d_f64[0] = *(double *)(pFVar1 + lVar8 + 0x20);
  (__return_storage_ptr__->Translation).XY.m128d_f64[1] = dVar3;
  dVar3 = *(double *)(pFVar1 + lVar8 + 0x30 + 8);
  (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = *(double *)(pFVar1 + lVar8 + 0x30);
  (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = dVar3;
  dVar3 = *(double *)(pFVar1 + lVar8 + 0x40 + 8);
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] = *(double *)(pFVar1 + lVar8 + 0x40);
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = dVar3;
  dVar3 = *(double *)(pFVar1 + lVar8 + 0x50 + 8);
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = *(double *)(pFVar1 + lVar8 + 0x50);
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = dVar3;
  uVar5 = 0;
  if (param_2 < (param_1->FinalRefBoneInfo).ArrayNum) {
    uVar5 = (uint)~param_2 >> 0x1f;
  }
  if ((uVar5 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar2 = (code *)swi(3);
    pTVar7 = (TTransform<double> *)(*pcVar2)();
    return pTVar7;
  }
  uVar5 = *(uint *)((param_1->FinalRefBoneInfo).AllocatorInstance.Data + (longlong)param_2 * 0xc + 8
                   );
  while( true ) {
    if (uVar5 == 0xffffffff) {
      return __return_storage_ptr__;
    }
    uVar6 = 0;
    if ((int)uVar5 < (param_1->FinalRefBonePose).ArrayNum) {
      uVar6 = ~uVar5 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) break;
    UE::Math::TTransform<double>::Multiply
              (__return_storage_ptr__,__return_storage_ptr__,
               (TTransform<double> *)
               ((param_1->FinalRefBonePose).AllocatorInstance.Data + (longlong)(int)uVar5 * 0x60));
    uVar6 = 0;
    if ((int)uVar5 < (param_1->FinalRefBoneInfo).ArrayNum) {
      uVar6 = ~uVar5 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar2 = (code *)swi(3);
      pTVar7 = (TTransform<double> *)(*pcVar2)();
      return pTVar7;
    }
    uVar5 = *(uint *)((param_1->FinalRefBoneInfo).AllocatorInstance.Data +
                     (longlong)(int)uVar5 * 0xc + 8);
  }
  pcVar2 = (code *)swi(3);
  pTVar7 = (TTransform<double> *)(*pcVar2)();
  return pTVar7;
}

// GetBoneIndices @ 14e5f5200

void __cdecl
FGLTFBoneUtilities::GetBoneIndices
          (FReferenceSkeleton *param_1,TArray<unsigned_short,TSizedDefaultAllocator<32>_> *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  
  iVar1 = (param_1->FinalRefBoneInfo).ArrayNum;
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,iVar1,&param_2->AllocatorInstance,&param_2->ArrayNum,&param_2->ArrayMax);
  uVar5 = 0;
  if (0 < iVar1) {
    lVar6 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar5 < param_2->ArrayNum) {
        uVar4 = ~uVar5 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      *(short *)((param_2->AllocatorInstance).Data + lVar6 * 2) = (short)uVar5;
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 1;
    } while ((int)uVar5 < iVar1);
  }
  return;
}

// GetBoneTransformsByFrame @ 14e5f5350

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
FGLTFBoneUtilities::GetBoneTransformsByFrame
          (UObject *param_1,UAnimSequence *param_2,
          TArray<unsigned_short,TSizedDefaultAllocator<32>_> *param_3,
          TArray<float,TSizedDefaultAllocator<32>_> *param_4,
          TArray<TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
          *param_5)

{
  code *pcVar1;
  undefined8 _Src;
  undefined4 uVar2;
  bool bVar3;
  int iVar4;
  uint *puVar5;
  FTlsAutoCleanup *pFVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  ulonglong uVar11;
  FScriptContainerElement *pFVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  undefined1 auStackY_388 [32];
  undefined1 local_348 [8];
  undefined1 local_340 [16];
  undefined8 local_330;
  undefined1 local_328 [16];
  ForAnyElementType local_318;
  undefined8 local_310;
  ForAnyElementType local_308;
  undefined8 local_300;
  ForAnyElementType local_2f8;
  undefined8 local_2f0;
  undefined8 local_2e8;
  undefined4 local_2e0;
  FMemMark local_2d8;
  undefined8 local_2b0;
  undefined4 local_2a8;
  FBlendedCurve local_2a0;
  UAnimSequence *local_280;
  int *local_278;
  TArray<TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
  *local_270;
  TArray<float,TSizedDefaultAllocator<32>_> *local_268;
  FCurveFilterSettings local_260;
  FAnimExtractContext local_248;
  code *local_1f8;
  undefined1 *local_1f0;
  TArrayView<unsigned_short_const_,int> local_1e8;
  FAnimationPoseData local_1d8;
  undefined1 local_1b8 [240];
  FSharedReferencer<1> local_c8;
  TSparseArray<TSparseSetElement<TTuple<FRetargetSourceCachedDataKey,FRetargetSourceCachedData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_b0;
  void *local_70;
  undefined4 local_68;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_388;
  local_270 = param_5;
  local_280 = param_2;
  local_268 = param_4;
  puVar5 = TThreadSingleton<FMemStack>::GetTlsSlot();
  local_1f0 = local_348;
  local_1f8 = UE::Core::Private::Function::
              TFunctionRefCaller<`TThreadSingleton<FMemStack>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
              ::Call;
  pFVar6 = FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_1f8,puVar5);
  local_2d8.Mem = (FMemStackBase *)(pFVar6 + 2);
  local_2d8.Top = (local_2d8.Mem)->Top;
  local_2d8.SavedChunk = *(FTaggedMemory **)(pFVar6 + 4);
  local_2d8.bPopped = false;
  local_2d8.NextTopmostMark = *(FMemMark **)(pFVar6 + 5);
  pFVar6[5] = (FTlsAutoCleanup)&local_2d8;
  *(int *)(pFVar6 + 6) = *(int *)(pFVar6 + 6) + 1;
  FBoneContainer::FBoneContainer((FBoneContainer *)local_1b8);
  local_1e8.DataPtr = (ushort *)(param_3->AllocatorInstance).Data;
  uVar11 = 0;
  local_1e8.ArrayNum = param_3->ArrayNum;
  local_260.FilterCurves = (TArray<FName,TSizedDefaultAllocator<32>_> *)0x0;
  local_260.FilterMode = DisallowAll;
  local_260.LODIndex = 0;
  if ((local_1e8.ArrayNum < 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FBoneContainer::InitializeTo((FBoneContainer *)local_1b8,&local_1e8,&local_260,param_1);
  lVar8 = (longlong)param_4->ArrayNum;
  local_278 = &param_5->ArrayNum;
  iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,param_4->ArrayNum,&param_5->AllocatorInstance,local_278,
                     &param_5->ArrayMax);
  memset((param_5->AllocatorInstance).Data + (longlong)iVar4 * 0x10,0,lVar8 << 4);
  local_340._0_8_ = (TTransform<double> *)0x0;
  local_340._12_4_ = 0;
  bVar3 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)(local_1b8 + 0x30));
  if ((((!bVar3) || ((FReferenceSkeleton *)local_1b8._72_8_ == (FReferenceSkeleton *)0x0)) ||
      (uVar7 = local_1b8._8_4_, (int)local_1b8._8_4_ < 1)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InBoneContainer && InBoneContainer->IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\BonePose.h"
                         ,0x97,L""), uVar7 = local_1b8._8_4_, bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_330 = local_1b8;
  if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar7);
  }
  local_340._8_4_ = 0;
  if ((int)local_340._12_4_ < (int)uVar7) {
    UE::Core::Private::
    ReallocTo<0,TMemStackAllocator<0>::ForElementType<UE::Math::TTransform<double>_>_>
              (0x60,0x10,uVar7,(ForElementType<UE::Math::TTransform<double>_> *)local_340,0,
               (int *)(local_340 + 0xc));
  }
  UE::Core::Private::
  ReallocGrow<0,TMemStackAllocator<0>::ForElementType<UE::Math::TTransform<double>_>_>
            (0x60,0x10,uVar7,(ForElementType<UE::Math::TTransform<double>_> *)local_340,
             (int *)(local_340 + 8),(int *)(local_340 + 0xc));
  local_2a0._0_8_ = 0;
  local_2a0._8_8_ = 0;
  local_2a0._16_1_ = 0;
  local_2a0._24_8_ = 0;
  FBlendedCurve::InitFrom(&local_2a0,(FBoneContainer *)local_1b8);
  local_328._0_8_ = (TArray<int,TSizedDefaultAllocator<32>_> *)0x0;
  local_328._8_8_ = 0;
  local_318.Data = (FScriptContainerElement *)0x0;
  local_310 = 0;
  local_308.Data = (FScriptContainerElement *)0x0;
  local_300 = 0;
  local_2f8.Data = (FScriptContainerElement *)0x0;
  local_2f0 = 0;
  FAnimationPoseData::FAnimationPoseData
            (&local_1d8,(FCompactPose *)local_340,&local_2a0,(FStackAttributeContainer *)local_328);
  uVar13 = uVar11;
  uVar14 = uVar11;
  if (0 < lVar8) {
    do {
      uVar10 = (uint)uVar11;
      local_2a8 = 0;
      local_2b0 = 0;
      uVar7 = 0;
      if ((int)uVar10 < param_4->ArrayNum) {
        uVar7 = ~uVar10 >> 0x1f;
      }
      local_2e8 = 0;
      local_2e0 = 0;
      if ((uVar7 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      local_248.CurrentTime = (double)*(float *)((param_4->AllocatorInstance).Data + uVar14 * 4);
      local_248.DeltaTimeRecord.bPreviousIsValid = false;
      local_248.DeltaTimeRecord._9_2_ = local_2e0._1_2_;
      local_248.bExtractRootMotion = false;
      local_248.DeltaTimeRecord._11_1_ = local_2e0._3_1_;
      local_248.DeltaTimeRecord.Delta = (float)local_2e8;
      local_248.DeltaTimeRecord.Previous = local_2e8._4_4_;
      local_248.bLooping = false;
      local_248.PoseCurves.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_248.PoseCurves.ArrayNum = 0;
      local_248.PoseCurves.ArrayMax = 0;
      local_248.BonesRequired.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_248.BonesRequired.ArrayNum = 0;
      local_248.BonesRequired.ArrayMax = 0;
      local_248.InterpolationOverride.bIsSet = false;
      UAnimSequence::GetBonePose(local_280,&local_1d8,&local_248,false);
      uVar7 = 0;
      if ((int)uVar10 < *local_278) {
        uVar7 = ~uVar10 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      uVar2 = local_340._8_4_;
      _Src = local_340._0_8_;
      lVar9 = (longlong)(int)local_340._8_4_;
      pFVar12 = (local_270->AllocatorInstance).Data + uVar13;
      iVar4 = *(int *)(pFVar12 + 0xc);
      *(undefined4 *)&pFVar12[8].field_0x0 = local_340._8_4_;
      if ((local_340._8_4_ == 0) && (iVar4 == 0)) {
        *(int *)(pFVar12 + 0xc) = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x60,0x10,local_340._8_4_,iVar4,(ForAnyElementType *)pFVar12,local_340._8_4_,
                   (int *)(pFVar12 + 0xc));
        if (uVar2 != 0) {
          memcpy(*(FScriptContainerElement **)&pFVar12->field_0x0,(void *)_Src,lVar9 * 0x60);
        }
      }
      if (local_248.BonesRequired.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_248.BonesRequired.AllocatorInstance.Data);
      }
      if (local_248.PoseCurves.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_248.PoseCurves.AllocatorInstance.Data);
      }
      uVar11 = (ulonglong)(uVar10 + 1);
      uVar14 = uVar14 + 1;
      uVar13 = uVar13 + 0x10;
      param_4 = local_268;
    } while ((longlong)uVar14 < lVar8);
  }
  local_330 = (undefined1 *)0x0;
  local_340._8_4_ = 0;
  if (local_340._12_4_ != 0) {
    UE::Core::Private::
    ReallocTo<0,TMemStackAllocator<0>::ForElementType<UE::Math::TTransform<double>_>_>
              (0x60,0x10,0,(ForElementType<UE::Math::TTransform<double>_> *)local_340,0,
               (int *)(local_340 + 0xc));
  }
  bVar3 = (longlong)local_2a0._8_8_ < 0;
  local_2a0._8_8_ = local_2a0._8_8_ & 0xffffffff00000000;
  if (bVar3) {
    UE::Core::Private::ReallocTo<0,TMemStackAllocator<0>::ForElementType<UE::Anim::FCurveElement>_>
              (0x10,4,0,(ForElementType<UE::Anim::FCurveElement> *)&local_2a0,0,
               (int *)&local_2a0.field_0xc);
  }
  local_2a0._16_1_ = 0;
  DestructItems<TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_>,int>
            ((TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *)local_318.Data,
             (int)local_310);
  bVar3 = local_310._4_4_ != 0;
  local_310 = (ulonglong)local_310._4_4_ << 0x20;
  if (bVar3) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&local_318,0,(int *)((longlong)&local_310 + 4));
  }
  DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
            ((TArray<int,TSizedDefaultAllocator<32>_> *)local_328._0_8_,local_328._8_4_);
  bVar3 = local_328._12_4_ != 0;
  local_328._8_8_ = (ulonglong)(uint)local_328._12_4_ << 0x20;
  if (bVar3) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,(ForAnyElementType *)local_328,0,(int *)(local_328 + 0xc));
  }
  DestructItems<TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_>,int>
            ((TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_>
              *)local_308.Data,(int)local_300);
  bVar3 = local_300._4_4_ != 0;
  local_300 = (ulonglong)local_300._4_4_ << 0x20;
  if (bVar3) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&local_308,0,(int *)((longlong)&local_300 + 4));
  }
  bVar3 = local_2f0._4_4_ != 0;
  local_2f0 = (ulonglong)local_2f0._4_4_ << 0x20;
  if (bVar3) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,&local_2f8,0,(int *)((longlong)&local_2f0 + 4));
  }
  if (local_2f8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2f8.Data);
  }
  DestructItems<TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_>,int>
            ((TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_>
              *)local_308.Data,(int)local_300);
  if ((TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_> *)
      local_308.Data !=
      (TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_> *)0x0
     ) {
    FMemory::Free(local_308.Data);
  }
  DestructItems<TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_>,int>
            ((TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *)local_318.Data,
             (int)local_310);
  if ((TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *)local_318.Data !=
      (TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *)0x0) {
    FMemory::Free(local_318.Data);
  }
  DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
            ((TArray<int,TSizedDefaultAllocator<32>_> *)local_328._0_8_,local_328._8_4_);
  if ((TArray<int,TSizedDefaultAllocator<32>_> *)local_328._0_8_ !=
      (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
    FMemory::Free((void *)local_328._0_8_);
  }
  local_68 = 0;
  if (local_70 != (void *)0x0) {
    FMemory::Free(local_70);
  }
  TSparseArray<TSparseSetElement<TTuple<FRetargetSourceCachedDataKey,FRetargetSourceCachedData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FRetargetSourceCachedDataKey,FRetargetSourceCachedData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_b0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_c8.ReferenceController);
  if ((void *)local_1b8._208_8_ != (void *)0x0) {
    FMemory::Free((void *)local_1b8._208_8_);
  }
  if ((void *)local_1b8._176_8_ != (void *)0x0) {
    FMemory::Free((void *)local_1b8._176_8_);
  }
  if ((FScriptContainerElement *)local_1b8._160_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_1b8._160_8_);
  }
  if ((FScriptContainerElement *)local_1b8._144_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_1b8._144_8_);
  }
  if ((FScriptContainerElement *)local_1b8._128_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_1b8._128_8_);
  }
  if ((FScriptContainerElement *)local_1b8._112_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_1b8._112_8_);
  }
  if ((FScriptContainerElement *)local_1b8._96_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_1b8._96_8_);
  }
  if ((FScriptContainerElement *)local_1b8._80_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_1b8._80_8_);
  }
  if ((ForElementType<unsigned_int>)local_1b8._32_8_ != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_1b8._32_8_);
  }
  if ((FScriptContainerElement *)local_1b8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_1b8._0_8_);
  }
  if (local_2d8.bPopped == false) {
    if (((local_2d8.Mem)->TopMark != &local_2d8) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Mem.TopMark == this",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MemStack.h"
                           ,0x215,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    local_2d8.bPopped = true;
    (local_2d8.Mem)->NumMarks = (local_2d8.Mem)->NumMarks + -1;
    if (local_2d8.SavedChunk != (local_2d8.Mem)->TopChunk) {
      FMemStackBase::FreeChunks(local_2d8.Mem,local_2d8.SavedChunk);
    }
    (local_2d8.Mem)->Top = local_2d8.Top;
    (local_2d8.Mem)->TopMark = local_2d8.NextTopmostMark;
  }
  return;
}

// GetFrameTimestamps @ 14e5f62d0

void __cdecl
FGLTFBoneUtilities::GetFrameTimestamps
          (UAnimSequence *param_1,TArray<float,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  iVar3 = (**(code **)(param_1->_padding_ + 0x310))();
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,iVar3,&param_2->AllocatorInstance,&param_2->ArrayNum,&param_2->ArrayMax);
  fVar7 = (float)(**(code **)(param_1->_padding_ + 0x2c0))(param_1);
  if (iVar3 < 2) {
    fVar9 = 0.0;
  }
  else {
    fVar9 = fVar7 / (float)(iVar3 + -1);
  }
  uVar6 = 0;
  if (0 < (longlong)iVar3) {
    lVar5 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar6 < param_2->ArrayNum) {
        uVar4 = ~uVar6 >> 0x1f;
      }
      fVar8 = (float)(int)uVar6 * fVar9;
      if (fVar7 <= (float)(int)uVar6 * fVar9) {
        fVar8 = fVar7;
      }
      if (fVar8 <= 0.0) {
        fVar8 = 0.0;
      }
      if ((uVar4 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      uVar6 = uVar6 + 1;
      *(float *)((param_2->AllocatorInstance).Data + lVar5 * 4) = fVar8;
      lVar5 = lVar5 + 1;
    } while (lVar5 < iVar3);
  }
  return;
}

