// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 39

// StaticClass @ 1475878d0

UClass * __cdecl UPoseAsset::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPoseAsset.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"PoseAsset",&Z_Registration_Info_UClass_UPoseAsset.InnerSingleton,
               StaticRegisterNativesUPoseAsset,0x110,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UPoseAsset>,InternalVTableHelperCtorCaller<UPoseAsset>,local_res8
               ,UAnimationAsset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPoseAsset.InnerSingleton;
}

// UPoseAsset @ 1475a7c50

UPoseAsset * __thiscall UPoseAsset::UPoseAsset(UPoseAsset *this,FVTableHelper *param_1)

{
  UAnimationAsset::UAnimationAsset((UAnimationAsset *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_PreviewMeshProvider__;
  (this->PoseContainer).PoseFNames.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PoseContainer).PoseFNames.ArrayNum = 0;
  (this->PoseContainer).PoseFNames.ArrayMax = 0;
  (this->PoseContainer).SortedCurveIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PoseContainer).SortedCurveIndices.ArrayNum = 0;
  (this->PoseContainer).SortedCurveIndices.ArrayMax = 0;
  (this->PoseContainer).Tracks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PoseContainer).Tracks.ArrayNum = 0;
  (this->PoseContainer).Tracks.ArrayMax = 0;
  (this->PoseContainer).TrackBoneIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PoseContainer).TrackBoneIndices.ArrayNum = 0;
  (this->PoseContainer).TrackBoneIndices.ArrayMax = 0;
  (this->PoseContainer).TrackPoseInfluenceIndices.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->PoseContainer).TrackPoseInfluenceIndices.ArrayNum = 0;
  (this->PoseContainer).TrackPoseInfluenceIndices.ArrayMax = 0;
  (this->PoseContainer).Poses.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PoseContainer).Poses.ArrayNum = 0;
  (this->PoseContainer).Poses.ArrayMax = 0;
  (this->PoseContainer).Curves.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PoseContainer).Curves.ArrayNum = 0;
  (this->PoseContainer).Curves.ArrayMax = 0;
  (this->RetargetSource).ComparisonIndex = 0;
  (this->RetargetSource).Number = 0;
  (this->RetargetSourceAssetReferencePose).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RetargetSourceAssetReferencePose).ArrayNum = 0;
  (this->RetargetSourceAssetReferencePose).ArrayMax = 0;
  return this;
}

// UPoseAsset @ 1475a7d10

UPoseAsset * __thiscall UPoseAsset::UPoseAsset(UPoseAsset *this,FObjectInitializer *param_1)

{
  UAnimationAsset::UAnimationAsset((UAnimationAsset *)this,param_1);
  this->BasePoseIndex = -1;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_PreviewMeshProvider__;
  (this->PoseContainer).PoseFNames.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PoseContainer).PoseFNames.ArrayNum = 0;
  (this->PoseContainer).PoseFNames.ArrayMax = 0;
  (this->PoseContainer).SortedCurveIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PoseContainer).SortedCurveIndices.ArrayNum = 0;
  (this->PoseContainer).SortedCurveIndices.ArrayMax = 0;
  (this->PoseContainer).Tracks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PoseContainer).Tracks.ArrayNum = 0;
  (this->PoseContainer).Tracks.ArrayMax = 0;
  (this->PoseContainer).TrackBoneIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PoseContainer).TrackBoneIndices.ArrayNum = 0;
  (this->PoseContainer).TrackBoneIndices.ArrayMax = 0;
  (this->PoseContainer).TrackPoseInfluenceIndices.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->PoseContainer).TrackPoseInfluenceIndices.ArrayNum = 0;
  (this->PoseContainer).TrackPoseInfluenceIndices.ArrayMax = 0;
  (this->PoseContainer).Poses.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PoseContainer).Poses.ArrayNum = 0;
  (this->PoseContainer).Poses.ArrayMax = 0;
  (this->PoseContainer).Curves.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PoseContainer).Curves.ArrayNum = 0;
  (this->PoseContainer).Curves.ArrayMax = 0;
  this->bAdditivePose = false;
  (this->RetargetSource).ComparisonIndex = 0;
  (this->RetargetSource).Number = 0;
  (this->RetargetSourceAssetReferencePose).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RetargetSourceAssetReferencePose).ArrayNum = 0;
  (this->RetargetSourceAssetReferencePose).ArrayMax = 0;
  return this;
}

// ~UPoseAsset @ 1475aabe0

void __thiscall UPoseAsset::~UPoseAsset(UPoseAsset *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_PreviewMeshProvider__;
  pFVar1 = (this->RetargetSourceAssetReferencePose).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FPoseDataContainer::~FPoseDataContainer(&this->PoseContainer);
  UAnimationAsset::~UAnimationAsset((UAnimationAsset *)this);
  return;
}

// ContainsPose @ 1475bb420

bool __thiscall UPoseAsset::ContainsPose(UPoseAsset *this,FName *param_1)

{
  FName *pFVar1;
  int iVar2;
  FName *pFVar3;
  undefined1 local_res8 [8];
  
  pFVar3 = (FName *)(this->PoseContainer).PoseFNames.AllocatorInstance.Data;
  iVar2 = (this->PoseContainer).PoseFNames.ArrayNum;
  pFVar1 = pFVar3 + iVar2;
  while( true ) {
    if ((this->PoseContainer).PoseFNames.ArrayNum != iVar2) {
      `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar3 == pFVar1) break;
    if (*pFVar3 == *param_1) {
      return true;
    }
    pFVar3 = pFVar3 + 1;
  }
  return false;
}

// GetAnimationCurveOnly @ 1475ce4d0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UPoseAsset::GetAnimationCurveOnly
          (UPoseAsset *this,TArray<FName,TSizedDefaultAllocator<32>_> *param_1,
          TArray<float,TSizedDefaultAllocator<32>_> *param_2,
          TArray<FName,TSizedDefaultAllocator<32>_> *param_3,
          TArray<float,TSizedDefaultAllocator<32>_> *param_4)

{
  undefined1 *puVar1;
  float fVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  float fVar6;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar7;
  bool bVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  FTlsAutoCleanup *pFVar13;
  FScriptContainerElement *pFVar14;
  ForAnyElementType FVar15;
  longlong lVar16;
  uint uVar17;
  FTlsAutoCleanup *pFVar18;
  TArray<float,TSizedDefaultAllocator<32>_> *this_00;
  longlong lVar19;
  float fVar20;
  undefined1 local_c7;
  undefined1 local_c6 [2];
  uint local_c4;
  undefined1 local_c0 [8];
  TArray<float,TSizedDefaultAllocator<32>_> *local_b8;
  FTlsAutoCleanup *local_b0;
  undefined1 local_a8 [24];
  undefined8 local_90;
  code *local_88;
  undefined1 *local_80;
  <lambda_1> local_78 [4];
  
  if (param_1->ArrayNum == param_2->ArrayNum) {
    if (0 < param_1->ArrayNum) {
      if ((this->_padding_ == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("MySkeleton",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\PoseAsset.cpp"
                             ,0x20e,L""), bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      local_80 = local_c0;
      local_88 = UE::Core::Private::Function::
                 TFunctionRefCaller<`TThreadSingleton<FPoseAssetEvalData>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                 ::Call;
      pFVar13 = FThreadSingletonInitializer::Get
                          ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_88,
                           &`private:_static_unsigned_int&___ptr64___cdecl_TThreadSingleton<FPoseAssetEvalData>::GetTlsSlot(void)'
                            ::__l2::TlsSlot);
      iVar11 = (this->PoseContainer).Poses.ArrayNum;
      this_00 = (TArray<float,TSizedDefaultAllocator<32>_> *)(pFVar13 + 6);
      iVar3 = *(int *)&pFVar13[7].field_0x4;
      *(undefined4 *)(pFVar13 + 7) = 0;
      local_b8 = this_00;
      if (iVar3 < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,0,(ForAnyElementType *)this_00,0,(int *)&pFVar13[7].field_0x4);
      }
      TArray<float,TSizedDefaultAllocator<32>_>::SetNumZeroed(this_00,iVar11,No);
      pFVar18 = pFVar13 + 4;
      iVar11 = *(int *)&pFVar13[5].field_0x4;
      puVar1 = &pFVar13[5].field_0x4;
      *(undefined4 *)(pFVar13 + 5) = 0;
      local_b0 = pFVar18;
      if (iVar11 < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,0,(ForAnyElementType *)pFVar18,0,(int *)puVar1);
      }
      fVar6 = __real_3727c5ac;
      uVar17 = 0;
      bVar8 = this->bAdditivePose;
      fVar20 = 0.0;
      iVar11 = param_1->ArrayNum;
      if (0 < iVar11) {
        lVar19 = 0;
        do {
          uVar10 = 0;
          if ((int)uVar17 < iVar11) {
            uVar10 = ~uVar17 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pFVar4 = (this->PoseContainer).PoseFNames.AllocatorInstance.Data;
          if (pFVar4 != pFVar4 + (longlong)(this->PoseContainer).PoseFNames.ArrayNum * 8) {
            pFVar14 = pFVar4;
            do {
              if (*(longlong *)pFVar14 ==
                  *(longlong *)((param_1->AllocatorInstance).Data + lVar19 * 8)) {
                local_c4 = (uint)((longlong)pFVar14 - (longlong)pFVar4 >> 3);
                if (local_c4 == 0xffffffff) goto LAB_1475ce721;
                uVar10 = 0;
                if ((int)local_c4 < (this->PoseContainer).Poses.ArrayNum) {
                  uVar10 = ~local_c4 >> 0x1f;
                }
                if ((uVar10 == 0) &&
                   (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar9)) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                uVar10 = 0;
                if ((int)uVar17 < param_2->ArrayNum) {
                  uVar10 = ~uVar17 >> 0x1f;
                }
                if ((uVar10 == 0) &&
                   (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar9)) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                if (((this->bAdditivePose == false) || (local_c4 != this->BasePoseIndex)) &&
                   (fVar2 = *(float *)((param_2->AllocatorInstance).Data + lVar19 * 4),
                   fVar6 < fVar2)) {
                  lVar16 = (longlong)(int)local_c4;
                  fVar20 = fVar20 + fVar2;
                  uVar10 = 0;
                  if ((int)local_c4 < *(int *)(pFVar13 + 7)) {
                    uVar10 = ~local_c4 >> 0x1f;
                  }
                  if ((uVar10 == 0) &&
                     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar9)) {
                    pcVar5 = (code *)swi(3);
                    (*pcVar5)();
                    return;
                  }
                  *(float *)((this_00->AllocatorInstance).Data + lVar16 * 4) = fVar2;
                  if (((*(FScriptContainerElement **)pFVar18 <= (FScriptContainerElement *)&local_c4
                       ) && ((FScriptContainerElement *)&local_c4 <
                             *(FScriptContainerElement **)pFVar18 + (longlong)*(int *)puVar1 * 4))
                     && (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x7a5,
                                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                           ), bVar9)) {
                    pcVar5 = (code *)swi(3);
                    (*pcVar5)();
                    return;
                  }
                  iVar11 = *(int *)(pFVar13 + 5);
                  if (iVar11 == *(int *)puVar1) {
                    iVar11 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x404,(ForAnyElementType *)pFVar18,(int *)puVar1);
                  }
                  *(int *)(pFVar13 + 5) = iVar11 + 1;
                  *(uint *)(*(FScriptContainerElement **)pFVar18 + (longlong)iVar11 * 4) = local_c4;
                }
                goto LAB_1475ce747;
              }
              pFVar14 = pFVar14 + 8;
            } while (pFVar14 != pFVar4 + (longlong)(this->PoseContainer).PoseFNames.ArrayNum * 8);
          }
          local_c4 = 0xffffffff;
LAB_1475ce721:
          bVar9 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_6070742836158922209>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\PoseAsset.cpp"
                             ,0x21f,"PoseIndex != INDEX_NONE");
          if (bVar9) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
LAB_1475ce747:
          uVar17 = uVar17 + 1;
          lVar19 = lVar19 + 1;
          iVar11 = param_1->ArrayNum;
        } while ((int)uVar17 < iVar11);
      }
      pTVar7 = local_b8;
      iVar11 = *(int *)(pFVar13 + 5);
      if (0 < iVar11) {
        local_a8._0_8_ = (FCurveElement *)0x0;
        local_a8._8_8_ = 0;
        local_a8[0x10] = false;
        local_90 = 0;
        if ((bVar8 != false) || (fVar20 <= __real_3f800000)) {
          FVar15.Data = *(FScriptContainerElement **)pFVar18;
          pFVar4 = FVar15.Data + (longlong)iVar11 * 4;
          while( true ) {
            if (*(int *)(pFVar18 + 1) != iVar11) {
              local_c6[0] = 0;
              `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                        (local_c6);
            }
            if (FVar15.Data == pFVar4) break;
            uVar17 = *(uint *)FVar15.Data;
            uVar10 = 0;
            if ((int)uVar17 < (this->PoseContainer).Poses.ArrayNum) {
              uVar10 = ~uVar17 >> 0x1f;
            }
            if ((uVar10 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            uVar10 = *(uint *)FVar15.Data;
            pFVar14 = (this->PoseContainer).Poses.AllocatorInstance.Data;
            uVar12 = 0;
            if ((int)uVar10 < pTVar7->ArrayNum) {
              uVar12 = ~uVar10 >> 0x1f;
            }
            if ((uVar12 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            FPoseDataContainer::BlendPoseCurve
                      (&this->PoseContainer,(FPoseData *)(pFVar14 + (longlong)(int)uVar17 * 0x20),
                       (FBlendedCurve *)local_a8,
                       *(float *)((pTVar7->AllocatorInstance).Data + (longlong)(int)uVar10 * 4));
            FVar15.Data = FVar15.Data + 4;
            pFVar18 = local_b0;
          }
        }
        else {
          FVar15.Data = *(FScriptContainerElement **)pFVar18;
          pFVar4 = FVar15.Data + (longlong)iVar11 * 4;
          while( true ) {
            if (*(int *)(pFVar18 + 1) != iVar11) {
              local_c7 = 0;
              `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                        (&local_c7);
            }
            if (FVar15.Data == pFVar4) break;
            uVar17 = *(uint *)FVar15.Data;
            lVar19 = (longlong)(int)uVar17;
            uVar10 = 0;
            if ((int)uVar17 < this_00->ArrayNum) {
              uVar10 = ~uVar17 >> 0x1f;
            }
            if ((uVar10 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pFVar14 = (this_00->AllocatorInstance).Data;
            *(float *)(pFVar14 + lVar19 * 4) = *(float *)(pFVar14 + lVar19 * 4) / fVar20;
            uVar17 = *(uint *)FVar15.Data;
            uVar10 = 0;
            if ((int)uVar17 < (this->PoseContainer).Poses.ArrayNum) {
              uVar10 = ~uVar17 >> 0x1f;
            }
            if ((uVar10 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            FPoseDataContainer::BlendPoseCurve
                      (&this->PoseContainer,
                       (FPoseData *)
                       ((this->PoseContainer).Poses.AllocatorInstance.Data +
                       (longlong)(int)uVar17 * 0x20),(FBlendedCurve *)local_a8,
                       *(float *)(pFVar14 + lVar19 * 4));
            FVar15.Data = FVar15.Data + 4;
            pFVar18 = local_b0;
            this_00 = local_b8;
          }
        }
        param_3->ArrayNum = 0;
        if (param_3->ArrayMax < 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,4,0,&param_3->AllocatorInstance,0,&param_3->ArrayMax);
        }
        param_4->ArrayNum = 0;
        if (param_4->ArrayMax < 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,0,&param_4->AllocatorInstance,0,&param_4->ArrayMax);
        }
        local_78[0].OutCurveValues = param_4;
        local_78[0].OutCurveNames = param_3;
        UE::Anim::TNamedValueArray<TMemStackAllocator<0>,UE::Anim::FCurveElement>::
        ForEachElement<_UPoseAsset::GetAnimationCurveOnly_::__l23::<lambda_1>_>
                  ((TNamedValueArray<TMemStackAllocator<0>,UE::Anim::FCurveElement> *)local_a8,
                   local_78);
      }
    }
  }
  else {
    bVar8 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_6070742836158922229>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\PoseAsset.cpp"
                       ,0x20b,"InCurveNames.Num() == InCurveValues.Num()");
    if (bVar8) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  return;
}

// GetAnimationPose @ 1475cec50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
UPoseAsset::GetAnimationPose
          (UPoseAsset *this,FAnimationPoseData *param_1,FAnimExtractContext *param_2)

{
  FTlsAutoCleanup *pFVar1;
  undefined1 *puVar2;
  undefined4 *puVar3;
  double *pdVar4;
  double *pdVar5;
  double *pdVar6;
  undefined8 *puVar7;
  float fVar8;
  int iVar9;
  FBoneContainer *pFVar10;
  uint *puVar11;
  code *pcVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  double dVar18;
  undefined1 auVar19 [16];
  double dVar20;
  double dVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  FAnimExtractContext *pFVar31;
  TArray<FBoneIndices,TSizedDefaultAllocator<32>_> *pTVar32;
  bool bVar33;
  undefined1 uVar34;
  bool bVar35;
  uint uVar36;
  uint uVar38;
  int iVar39;
  uint uVar40;
  FName *pFVar41;
  TStatId TVar42;
  FBaseCompactPose<TMemStackAllocator<0>_> *pFVar43;
  FBlendedCurve *pFVar44;
  FSkeletonRemappingRegistry *this_00;
  USkeleton *pUVar45;
  FSkeletonRemapping *pFVar46;
  UPackage *pUVar47;
  FTlsAutoCleanup *pFVar48;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTVar49;
  FThreadSafeStaticStat<FStat_STAT_PoseAssetGetAnimationPose_WorkerThread> *this_01;
  longlong lVar50;
  FName FVar51;
  uint uVar52;
  uint uVar53;
  uint *puVar54;
  ForAnyElementType FVar55;
  uint uVar56;
  wchar_t *pwVar57;
  uint uVar58;
  uint uVar59;
  ulonglong uVar60;
  longlong lVar61;
  TTransform<double> *pTVar62;
  FScriptContainerElement *pFVar63;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar64;
  ulonglong uVar65;
  ulonglong uVar66;
  ulonglong uVar67;
  ulonglong uVar68;
  ulonglong uVar69;
  ulonglong uVar70;
  double dVar71;
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  float fVar101;
  double dVar102;
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  double dVar128;
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  double dVar103;
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  double dVar104;
  double dVar129;
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  undefined1 auVar120 [16];
  undefined1 auVar121 [16];
  undefined1 auVar122 [16];
  undefined1 auVar123 [16];
  undefined1 auVar124 [16];
  undefined1 auVar125 [16];
  undefined1 auVar126 [16];
  undefined1 auVar127 [16];
  undefined1 auVar130 [16];
  undefined1 auVar131 [16];
  undefined1 auVar132 [16];
  undefined1 auVar133 [16];
  undefined1 auVar134 [16];
  undefined1 auVar135 [16];
  undefined1 auVar136 [16];
  undefined1 auVar137 [16];
  uint uVar144;
  undefined1 auVar138 [16];
  undefined1 auVar139 [16];
  undefined1 auVar140 [16];
  uint uVar145;
  undefined1 auVar141 [16];
  undefined1 auVar142 [16];
  undefined1 auVar143 [16];
  float fVar146;
  float fVar147;
  undefined4 uVar148;
  undefined4 uVar149;
  undefined4 uVar150;
  undefined4 uVar151;
  undefined4 uVar152;
  undefined4 uVar153;
  undefined4 uVar154;
  undefined4 uVar155;
  undefined4 uVar156;
  undefined4 uVar157;
  undefined4 uVar158;
  undefined4 uVar159;
  undefined4 uVar160;
  undefined4 uVar161;
  undefined4 uVar162;
  undefined4 uVar163;
  uint uVar164;
  uint uVar165;
  uint uVar166;
  uint uVar167;
  undefined1 auStackY_588 [32];
  undefined1 local_527;
  undefined1 local_526 [2];
  uint local_524;
  float local_520;
  uint local_51c;
  FScriptContainerElement *local_518;
  FBlendedCurve *local_510;
  FBaseCompactPose<TMemStackAllocator<0>_> *local_508;
  FSkeletonRemapping *local_500;
  undefined1 local_4f8 [4];
  FSkeletonPoseBoneIndex local_4f4 [3];
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *local_4e8;
  double dStack_4e0;
  int local_4d8;
  FAnimExtractContext *local_4d0;
  FTlsAutoCleanup *local_4c8;
  TArray<FBoneIndices,TSizedDefaultAllocator<32>_> *local_4c0;
  longlong local_4b8;
  FScriptContainerElement *local_4b0;
  FBoneContainer *local_4a8;
  FScriptContainerElement *local_4a0;
  double dStack_498;
  TArray<float,TSizedDefaultAllocator<32>_> *local_490;
  FName local_488;
  byte local_480;
  USkeleton *local_478;
  FScriptContainerElement *local_470;
  double dStack_468;
  longlong local_460;
  FName local_458;
  FName local_450;
  double local_448;
  double dStack_440;
  double local_438;
  FSourceLocation local_428;
  code *local_408;
  undefined1 *local_400;
  FScriptContainerElement *local_3f8;
  double dStack_3f0;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *local_3e8;
  double local_3d8;
  double dStack_3d0;
  double local_3c8;
  TTransform<double> local_3b8;
  TTransform<double> local_358;
  FName local_2f8;
  FName local_2f0;
  double local_2e8;
  double dStack_2e0;
  double local_2d8;
  double local_2d0;
  double dStack_2c8;
  double local_2c0;
  double local_2b8;
  double dStack_2b0;
  double local_2a8;
  double local_2a0;
  double dStack_298;
  double local_290;
  double local_288;
  double dStack_280;
  double local_278;
  double local_270;
  double dStack_268;
  double local_260;
  double local_258;
  double dStack_250;
  double local_248;
  double local_240;
  double dStack_238;
  double local_230;
  FScriptContainerElement *local_228;
  double dStack_220;
  double local_218;
  TTransform<double> local_208;
  TTransform<double> local_1a8;
  TTransform<double> local_148;
  ulonglong local_e8;
  uint uVar37;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_588;
  local_4d0 = param_2;
  bVar33 = IsInGameThread();
  uVar60 = 0;
  uVar56 = 0;
  if (bVar33) {
    TVar42.StatIdPtr = (TStatIdData *)StatPtr_STAT_PoseAssetGetAnimationPose;
    if (StatPtr_STAT_PoseAssetGetAnimationPose ==
        (FThreadSafeStaticStat<FStat_STAT_PoseAssetGetAnimationPose>)0x0) {
      pFVar41 = ::FName::FName(&local_2f0,"STAT_PoseAssetGetAnimationPose");
      pwVar57 = L"PoseAssetGetAnimationPose";
      this_01 = (FThreadSafeStaticStat<FStat_STAT_PoseAssetGetAnimationPose_WorkerThread> *)
                &StatPtr_STAT_PoseAssetGetAnimationPose;
      goto LAB_1475ced6b;
    }
  }
  else {
    TVar42.StatIdPtr = (TStatIdData *)StatPtr_STAT_PoseAssetGetAnimationPose_WorkerThread;
    if (StatPtr_STAT_PoseAssetGetAnimationPose_WorkerThread ==
        (FThreadSafeStaticStat<FStat_STAT_PoseAssetGetAnimationPose_WorkerThread>)0x0) {
      pFVar41 = ::FName::FName(&local_2f8,"STAT_PoseAssetGetAnimationPose_WorkerThread");
      pwVar57 = L"PoseAssetGetAnimationPose_WorkerThread";
      this_01 = &StatPtr_STAT_PoseAssetGetAnimationPose_WorkerThread;
LAB_1475ced6b:
      TVar42.StatIdPtr =
           FThreadSafeStaticStatBase::DoSetup
                     ((FThreadSafeStaticStatBase *)this_01,*pFVar41,pwVar57,"STATGROUP_Anim",
                      "STATCAT_Advanced",L"Anim",true,true,ST_int64,true,false,MCR_Invalid);
    }
  }
  local_428.Impl._File =
       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\PoseAsset.cpp"
  ;
  local_428.Impl._Function =
       "bool __cdecl UPoseAsset::GetAnimationPose(struct FAnimationPoseData &,const struct FAnimExtractContext &) const"
  ;
  local_428.Impl._Line = 0x261;
  local_428.Impl._Column = 2;
  FScopeCycleCounter::FScopeCycleCounter
            ((FScopeCycleCounter *)&local_488,TVar42,None,false,&local_428);
  if (0 < (param_2->PoseCurves).ArrayNum) {
    pFVar43 = (FBaseCompactPose<TMemStackAllocator<0>_> *)FAnimationPoseData::GetPose(param_1);
    local_508 = pFVar43;
    pFVar44 = FAnimationPoseData::GetCurve(param_1);
    pFVar10 = pFVar43->BoneContainer;
    local_478 = (USkeleton *)this->_padding_;
    local_510 = pFVar44;
    local_4a8 = pFVar10;
    if ((((this->PoseContainer).PoseFNames.ArrayNum != (this->PoseContainer).Poses.ArrayNum) ||
        ((this->PoseContainer).Tracks.ArrayNum != (this->PoseContainer).TrackBoneIndices.ArrayNum))
       && (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                              ("PoseContainer.IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\PoseAsset.cpp"
                               ,0x26c,L""), bVar33)) {
      pcVar12 = (code *)swi(3);
      uVar34 = (*pcVar12)();
      return (bool)uVar34;
    }
    if (this->bAdditivePose == false) {
      FBaseCompactPose<TMemStackAllocator<0>_>::ResetToRefPose(pFVar43,pFVar43->BoneContainer);
    }
    else {
      FCompactPose::ResetToAdditiveIdentity((FCompactPose *)pFVar43);
    }
    iVar39 = (this->PoseContainer).Tracks.ArrayNum;
    lVar61 = (longlong)iVar39;
    this_00 = UE::Anim::FSkeletonRemappingRegistry::Get();
    pUVar45 = (USkeleton *)FWeakObjectPtr::Get(&(pFVar10->AssetSkeleton).WeakPtr);
    pFVar46 = UE::Anim::FSkeletonRemappingRegistry::GetRemapping
                        (this_00,(USkeleton *)this->_padding_,pUVar45);
    uVar36 = 0;
    uVar37 = 0;
    local_500 = pFVar46;
    local_4b8 = lVar61;
    if ((param_2->PoseCurves).ArrayNum == 1) {
      pFVar63 = (param_2->PoseCurves).AllocatorInstance.Data;
      uVar38 = *(uint *)(pFVar63 + 8);
      if (uVar38 == 0xffffffff) {
        bVar33 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<_6070742836158922113>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\PoseAsset.cpp"
                            ,0x27f,"PoseIndex != INDEX_NONE");
        if (bVar33) {
          pcVar12 = (code *)swi(3);
          uVar34 = (*pcVar12)();
          return (bool)uVar34;
        }
      }
      else {
        uVar58 = uVar56;
        if ((int)uVar38 < (this->PoseContainer).Poses.ArrayNum) {
          uVar58 = ~uVar38 >> 0x1f;
        }
        if ((uVar58 == 0) &&
           (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar33)) {
          pcVar12 = (code *)swi(3);
          uVar34 = (*pcVar12)();
          return (bool)uVar34;
        }
        fVar146 = __real_3f800000;
        fVar147 = *(float *)(pFVar63 + 0xc);
        if (this->bAdditivePose == false) {
          if (__real_3f800000 <= fVar147) {
            fVar147 = __real_3f800000;
          }
          if (fVar147 <= 0.0) {
            fVar147 = 0.0;
          }
        }
        if (__real_3727c5ac < fVar147) {
          FPoseDataContainer::BlendPoseCurve
                    (&this->PoseContainer,
                     (FPoseData *)
                     ((this->PoseContainer).Poses.AllocatorInstance.Data +
                     (longlong)(int)uVar38 * 0x20),pFVar44,fVar147);
          fVar8 = __real_3f7fff58;
          if (0 < lVar61) {
            local_510 = (FBlendedCurve *)0x0;
            uVar67 = uVar60;
            do {
              pFVar44 = local_510;
              bVar33 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)pFVar46);
              uVar58 = (uint)uVar67;
              if ((bVar33) &&
                 (bVar33 = FWeakObjectPtr::IsValid(&(pFVar46->TargetSkeleton).WeakPtr), bVar33)) {
                uVar52 = ~uVar58 >> 0x1f;
                uVar53 = uVar37;
                if ((int)uVar58 < (this->PoseContainer).TrackBoneIndices.ArrayNum) {
                  uVar53 = uVar52;
                }
                if ((uVar53 == 0) &&
                   (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar33)) {
                  pcVar12 = (code *)swi(3);
                  uVar34 = (*pcVar12)();
                  return (bool)uVar34;
                }
                local_4d8 = FSkeletonRemapping::GetTargetSkeletonBoneIndex
                                      (local_500,
                                       *(int *)((this->PoseContainer).TrackBoneIndices.
                                                AllocatorInstance.Data + (longlong)pFVar44 * 4));
              }
              else {
                uVar52 = ~uVar58 >> 0x1f;
                uVar53 = uVar37;
                if ((int)uVar58 < (this->PoseContainer).TrackBoneIndices.ArrayNum) {
                  uVar53 = uVar52;
                }
                if ((uVar53 == 0) &&
                   (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar33)) {
                  pcVar12 = (code *)swi(3);
                  uVar34 = (*pcVar12)();
                  return (bool)uVar34;
                }
                local_4d8 = *(int *)((this->PoseContainer).TrackBoneIndices.AllocatorInstance.Data +
                                    (longlong)pFVar44 * 4);
              }
              FBoneContainer::GetCompactPoseIndexFromSkeletonPoseIndex(local_4a8,local_4f4);
              if ((local_4f4[0] != (FSkeletonPoseBoneIndex)0xffffffff) &&
                 (bVar33 = FAnimExtractContext::IsBoneRequired(local_4d0,(int)local_4f4[0]), bVar33)
                 ) {
                uVar53 = uVar56;
                if ((int)uVar58 < (this->PoseContainer).TrackPoseInfluenceIndices.ArrayNum) {
                  uVar53 = uVar52;
                }
                if ((uVar53 == 0) &&
                   (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar33)) {
                  pcVar12 = (code *)swi(3);
                  uVar34 = (*pcVar12)();
                  return (bool)uVar34;
                }
                local_518 = (this->PoseContainer).TrackPoseInfluenceIndices.AllocatorInstance.Data;
                puVar11 = *(uint **)(local_518 + uVar60);
                for (puVar54 = puVar11;
                    puVar54 != puVar11 + (longlong)*(int *)(local_518 + uVar60 + 8) * 2;
                    puVar54 = puVar54 + 2) {
                  if (*puVar54 == uVar38) {
                    uVar53 = (uint)((longlong)puVar54 - (longlong)puVar11 >> 3);
                    if (uVar53 != 0xffffffff) {
                      lVar61 = (longlong)(int)local_4f4[0];
                      uVar52 = uVar56;
                      if ((int)local_4f4[0] < (int)local_508->_padding_) {
                        uVar52 = ~(uint)local_4f4[0] >> 0x1f;
                      }
                      if ((uVar52 == 0) &&
                         (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar33)) {
                        pcVar12 = (code *)swi(3);
                        uVar34 = (*pcVar12)();
                        return (bool)uVar34;
                      }
                      pTVar62 = (TTransform<double> *)(lVar61 * 0x60 + local_508->_padding_);
                      uVar52 = uVar37;
                      if ((int)uVar53 < *(int *)(local_518 + uVar60 + 8)) {
                        uVar52 = ~uVar53 >> 0x1f;
                      }
                      if ((uVar52 == 0) &&
                         (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar33)) {
                        pcVar12 = (code *)swi(3);
                        uVar34 = (*pcVar12)();
                        return (bool)uVar34;
                      }
                      local_4e8 = *(TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>
                                    **)(local_518 + uVar60);
                      uVar52 = uVar37;
                      if ((int)uVar38 < (this->PoseContainer).Poses.ArrayNum) {
                        uVar52 = ~uVar38 >> 0x1f;
                      }
                      if ((uVar52 == 0) &&
                         (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar33)) {
                        pcVar12 = (code *)swi(3);
                        uVar34 = (*pcVar12)();
                        return (bool)uVar34;
                      }
                      local_518 = (this->PoseContainer).Poses.AllocatorInstance.Data;
                      local_4a0 = (FScriptContainerElement *)((longlong)(int)uVar38 * 0x20);
                      uVar53 = *(uint *)((longlong)local_4e8 + 4 + (longlong)(int)uVar53 * 8);
                      uVar52 = uVar36;
                      if ((int)uVar53 < *(int *)(local_4a0 + (longlong)(local_518 + 8))) {
                        uVar52 = ~uVar53 >> 0x1f;
                      }
                      if ((uVar52 == 0) &&
                         (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar33)) {
                        pcVar12 = (code *)swi(3);
                        uVar34 = (*pcVar12)();
                        return (bool)uVar34;
                      }
                      lVar50 = (longlong)(int)uVar53 * 0x60;
                      lVar61 = *(longlong *)(local_4a0 + (longlong)local_518);
                      if (this->bAdditivePose == false) {
                        if (fVar147 < fVar8) {
                          fVar101 = fVar146 - fVar147;
                          dVar103 = (double)fVar101;
                          dVar71 = (double)fVar101;
                          uVar150 = (undefined4)((ulonglong)dVar71 >> 0x20);
                          dVar20 = (double)fVar101;
                          dVar21 = (double)fVar101;
                          uVar148 = (undefined4)((ulonglong)dVar21 >> 0x20);
                          auVar78._8_4_ = SUB84(dVar71,0);
                          auVar78._0_8_ = dVar103;
                          auVar78._12_4_ = uVar150;
                          dVar104 = (pTVar62->Rotation).XY.m128d_f64[1];
                          auVar108._8_4_ = SUB84(dVar21,0);
                          auVar108._0_8_ = dVar20;
                          auVar108._12_4_ = uVar148;
                          (pTVar62->Rotation).XY.m128d_f64[0] =
                               dVar103 * (pTVar62->Rotation).XY.m128d_f64[0];
                          (pTVar62->Rotation).XY.m128d_f64[1] = auVar78._8_8_ * dVar104;
                          auVar79._8_4_ = SUB84(dVar71,0);
                          auVar79._0_8_ = dVar103;
                          auVar79._12_4_ = uVar150;
                          dVar104 = (pTVar62->Rotation).ZW.m128d_f64[1];
                          (pTVar62->Rotation).ZW.m128d_f64[0] =
                               dVar20 * (pTVar62->Rotation).ZW.m128d_f64[0];
                          (pTVar62->Rotation).ZW.m128d_f64[1] = auVar108._8_8_ * dVar104;
                          auVar109._8_4_ = SUB84(dVar21,0);
                          auVar109._0_8_ = dVar20;
                          auVar109._12_4_ = uVar148;
                          dVar104 = (pTVar62->Translation).XY.m128d_f64[1];
                          (pTVar62->Translation).XY.m128d_f64[0] =
                               dVar103 * (pTVar62->Translation).XY.m128d_f64[0];
                          (pTVar62->Translation).XY.m128d_f64[1] = auVar79._8_8_ * dVar104;
                          dVar104 = (pTVar62->Translation).ZW.m128d_f64[1];
                          (pTVar62->Translation).ZW.m128d_f64[0] =
                               dVar20 * (pTVar62->Translation).ZW.m128d_f64[0];
                          (pTVar62->Translation).ZW.m128d_f64[1] = auVar109._8_8_ * dVar104;
                          dVar71 = dVar71 * (pTVar62->Scale3D).XY.m128d_f64[1];
                          auVar22._8_4_ = SUB84(dVar71,0);
                          auVar22._0_8_ = dVar103 * (pTVar62->Scale3D).XY.m128d_f64[0];
                          auVar22._12_4_ = (int)((ulonglong)dVar71 >> 0x20);
                          *(undefined1 (*) [16])(pTVar62->Scale3D).XY.m128d_f64 = auVar22;
                          dVar21 = dVar21 * (pTVar62->Scale3D).ZW.m128d_f64[1];
                          dVar104 = (double)fVar147;
                          dVar129 = (double)fVar147;
                          auVar19._8_4_ = SUB84(dVar21,0);
                          auVar19._0_8_ = dVar20 * (pTVar62->Scale3D).ZW.m128d_f64[0];
                          auVar19._12_4_ = (int)((ulonglong)dVar21 >> 0x20);
                          *(undefined1 (*) [16])(pTVar62->Scale3D).ZW.m128d_f64 = auVar19;
                          dVar20 = dVar104 * *(double *)(lVar50 + lVar61);
                          dVar21 = dVar129 * ((double *)(lVar50 + lVar61))[1];
                          dVar25 = (double)fVar147;
                          dVar18 = (double)fVar147;
                          auVar80._8_4_ = SUB84(dVar21,0);
                          auVar80._0_8_ = dVar20;
                          auVar80._12_4_ = (int)((ulonglong)dVar21 >> 0x20);
                          pdVar4 = (double *)(lVar50 + 0x10 + lVar61);
                          dVar103 = dVar25 * *pdVar4;
                          dVar71 = dVar18 * pdVar4[1];
                          auVar110._8_4_ = SUB84(dVar71,0);
                          auVar110._0_8_ = dVar103;
                          auVar110._12_4_ = (int)((ulonglong)dVar71 >> 0x20);
                          dVar102 = dVar103 * (pTVar62->Rotation).ZW.m128d_f64[0] +
                                    dVar20 * (pTVar62->Rotation).XY.m128d_f64[0];
                          dVar128 = auVar110._8_8_ * (pTVar62->Rotation).ZW.m128d_f64[1] +
                                    auVar80._8_8_ * (pTVar62->Rotation).XY.m128d_f64[1];
                          auVar81._8_4_ = SUB84(dVar128,0);
                          auVar81._0_8_ = dVar102;
                          auVar81._12_4_ = (int)((ulonglong)dVar128 >> 0x20);
                          uVar67 = -(ulonglong)(0.0 <= auVar81._8_8_ + dVar102);
                          uVar65 = -(ulonglong)(0.0 <= dVar102 + dVar128);
                          uVar52 = (uint)(uVar65 >> 0x20);
                          auVar132._0_4_ = ~(uint)uVar67 & SUB84(0.0 - dVar20,0);
                          uVar53 = (uint)(uVar67 >> 0x20);
                          auVar132._4_4_ = ~uVar53 & (uint)((ulonglong)(0.0 - dVar20) >> 0x20);
                          auVar132._8_4_ = ~(uint)uVar65 & SUB84(0.0 - dVar21,0);
                          auVar132._12_4_ = ~uVar52 & (uint)((ulonglong)(0.0 - dVar21) >> 0x20);
                          auVar111._0_8_ = (ulonglong)dVar20 & uVar67;
                          auVar111._8_4_ = (undefined4)((ulonglong)dVar21 & uVar65);
                          auVar111._12_4_ = (undefined4)(((ulonglong)dVar21 & uVar65) >> 0x20);
                          dVar20 = (pTVar62->Rotation).XY.m128d_f64[1];
                          auVar82._0_4_ = ~(uint)uVar67 & SUB84(0.0 - dVar103,0);
                          auVar82._4_4_ = ~uVar53 & (uint)((ulonglong)(0.0 - dVar103) >> 0x20);
                          auVar82._8_4_ = ~(uint)uVar65 & SUB84(0.0 - dVar71,0);
                          auVar82._12_4_ = ~uVar52 & (uint)((ulonglong)(0.0 - dVar71) >> 0x20);
                          auVar112._8_4_ = SUB84(dVar18,0);
                          auVar112._0_8_ = dVar25;
                          auVar112._12_4_ = (int)((ulonglong)dVar18 >> 0x20);
                          (pTVar62->Rotation).XY.m128d_f64[0] =
                               SUB168(auVar132 | auVar111,0) + (pTVar62->Rotation).XY.m128d_f64[0];
                          (pTVar62->Rotation).XY.m128d_f64[1] =
                               SUB168(auVar132 | auVar111,8) + dVar20;
                          auVar15._8_4_ = (int)((ulonglong)dVar71 & uVar65);
                          auVar15._0_8_ = (ulonglong)dVar103 & uVar67;
                          auVar15._12_4_ = (int)(((ulonglong)dVar71 & uVar65) >> 0x20);
                          dVar20 = (pTVar62->Rotation).ZW.m128d_f64[1];
                          (pTVar62->Rotation).ZW.m128d_f64[0] =
                               SUB168(auVar82 | auVar15,0) + (pTVar62->Rotation).ZW.m128d_f64[0];
                          (pTVar62->Rotation).ZW.m128d_f64[1] = SUB168(auVar82 | auVar15,8) + dVar20
                          ;
                          pdVar4 = (double *)(lVar50 + 0x30 + lVar61);
                          dVar21 = *pdVar4;
                          dVar103 = pdVar4[1];
                          auVar83._8_4_ = SUB84(dVar129,0);
                          auVar83._0_8_ = dVar104;
                          auVar83._12_4_ = (int)((ulonglong)dVar129 >> 0x20);
                          pdVar4 = (double *)(lVar50 + 0x20 + lVar61);
                          dVar71 = pdVar4[1];
                          dVar20 = (pTVar62->Translation).XY.m128d_f64[1];
                          (pTVar62->Translation).XY.m128d_f64[0] =
                               dVar104 * *pdVar4 + (pTVar62->Translation).XY.m128d_f64[0];
                          (pTVar62->Translation).XY.m128d_f64[1] = auVar83._8_8_ * dVar71 + dVar20;
                          dVar20 = (pTVar62->Translation).ZW.m128d_f64[1];
                          (pTVar62->Translation).ZW.m128d_f64[0] =
                               dVar25 * dVar21 + (pTVar62->Translation).ZW.m128d_f64[0];
                          (pTVar62->Translation).ZW.m128d_f64[1] = auVar112._8_8_ * dVar103 + dVar20
                          ;
                          pdVar4 = (double *)(lVar50 + 0x40 + lVar61);
                          pdVar5 = (double *)(lVar50 + 0x50 + lVar61);
                          dVar21 = *pdVar5;
                          dVar103 = pdVar5[1];
                          dVar20 = dVar129 * pdVar4[1] + (pTVar62->Scale3D).XY.m128d_f64[1];
                          auVar23._8_4_ = SUB84(dVar20,0);
                          auVar23._0_8_ = dVar104 * *pdVar4 + (pTVar62->Scale3D).XY.m128d_f64[0];
                          auVar23._12_4_ = (int)((ulonglong)dVar20 >> 0x20);
                          *(undefined1 (*) [16])(pTVar62->Scale3D).XY.m128d_f64 = auVar23;
                          dVar20 = dVar18 * dVar103 + (pTVar62->Scale3D).ZW.m128d_f64[1];
                          auVar24._8_4_ = SUB84(dVar20,0);
                          auVar24._0_8_ = dVar25 * dVar21 + (pTVar62->Scale3D).ZW.m128d_f64[0];
                          auVar24._12_4_ = (int)((ulonglong)dVar20 >> 0x20);
                          *(undefined1 (*) [16])(pTVar62->Scale3D).ZW.m128d_f64 = auVar24;
                        }
                        else {
                          dVar20 = ((double *)(lVar50 + lVar61))[1];
                          (pTVar62->Rotation).XY.m128d_f64[0] = *(double *)(lVar50 + lVar61);
                          (pTVar62->Rotation).XY.m128d_f64[1] = dVar20;
                          pdVar4 = (double *)(lVar50 + 0x10 + lVar61);
                          dVar20 = pdVar4[1];
                          (pTVar62->Rotation).ZW.m128d_f64[0] = *pdVar4;
                          (pTVar62->Rotation).ZW.m128d_f64[1] = dVar20;
                          pdVar4 = (double *)(lVar50 + 0x20 + lVar61);
                          dVar20 = pdVar4[1];
                          (pTVar62->Translation).XY.m128d_f64[0] = *pdVar4;
                          (pTVar62->Translation).XY.m128d_f64[1] = dVar20;
                          pdVar4 = (double *)(lVar50 + 0x30 + lVar61);
                          dVar20 = pdVar4[1];
                          (pTVar62->Translation).ZW.m128d_f64[0] = *pdVar4;
                          (pTVar62->Translation).ZW.m128d_f64[1] = dVar20;
                          pdVar4 = (double *)(lVar50 + 0x40 + lVar61);
                          dVar20 = pdVar4[1];
                          (pTVar62->Scale3D).XY.m128d_f64[0] = *pdVar4;
                          (pTVar62->Scale3D).XY.m128d_f64[1] = dVar20;
                          pdVar4 = (double *)(lVar50 + 0x50 + lVar61);
                          dVar20 = pdVar4[1];
                          (pTVar62->Scale3D).ZW.m128d_f64[0] = *pdVar4;
                          (pTVar62->Scale3D).ZW.m128d_f64[1] = dVar20;
                        }
                      }
                      else {
                        local_208.Rotation.XY.m128d_f64[0] =
                             (double)CONCAT44(UE::Math::TQuat<double>::Identity.X._4_4_,
                                              UE::Math::TQuat<double>::Identity.X._0_4_);
                        local_208.Rotation.XY.m128d_f64[1] =
                             (double)CONCAT44(UE::Math::TQuat<double>::Identity.Y._4_4_,
                                              UE::Math::TQuat<double>::Identity.Y._0_4_);
                        local_208.Rotation.ZW.m128d_f64[0] =
                             (double)CONCAT44(UE::Math::TQuat<double>::Identity.Z._4_4_,
                                              UE::Math::TQuat<double>::Identity.Z._0_4_);
                        local_208.Rotation.ZW.m128d_f64[1] =
                             (double)CONCAT44(UE::Math::TQuat<double>::Identity.W._4_4_,
                                              UE::Math::TQuat<double>::Identity.W._0_4_);
                        puVar3 = (undefined4 *)(lVar50 + lVar61);
                        local_3b8.Rotation.XY.m128d_f64[0]._0_4_ = *puVar3;
                        local_3b8.Rotation.XY.m128d_f64[0]._4_4_ = puVar3[1];
                        local_3b8.Rotation.XY.m128d_f64[1]._0_4_ = puVar3[2];
                        local_3b8.Rotation.XY.m128d_f64[1]._4_4_ = puVar3[3];
                        puVar3 = (undefined4 *)(lVar50 + 0x10 + lVar61);
                        local_3b8.Rotation.ZW.m128d_f64[0]._0_4_ = *puVar3;
                        local_3b8.Rotation.ZW.m128d_f64[0]._4_4_ = puVar3[1];
                        local_3b8.Rotation.ZW.m128d_f64[1]._0_4_ = puVar3[2];
                        local_3b8.Rotation.ZW.m128d_f64[1]._4_4_ = puVar3[3];
                        pdVar4 = (double *)(lVar50 + 0x20 + lVar61);
                        local_3b8.Translation.XY.m128d_f64[0] = *pdVar4;
                        local_3b8.Translation.XY.m128d_f64[1] = pdVar4[1];
                        local_208.Translation.ZW.m128d_f64[0] =
                             UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
                        local_208.Translation.ZW.m128d_f64[1] = 0.0;
                        local_208.Scale3D.ZW.m128d_f64[0] =
                             UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
                        local_208.Scale3D.ZW.m128d_f64[1] = 0.0;
                        pdVar4 = (double *)(lVar50 + 0x30 + lVar61);
                        local_3b8.Translation.ZW.m128d_f64[0] = *pdVar4;
                        local_3b8.Translation.ZW.m128d_f64[1] = pdVar4[1];
                        pdVar4 = (double *)(lVar50 + 0x50 + lVar61);
                        local_3b8.Scale3D.ZW.m128d_f64[0] = *pdVar4;
                        local_3b8.Scale3D.ZW.m128d_f64[1] = pdVar4[1];
                        pdVar4 = (double *)(lVar50 + 0x40 + lVar61);
                        local_3b8.Scale3D.XY.m128d_f64[0] = *pdVar4;
                        local_3b8.Scale3D.XY.m128d_f64[1] = pdVar4[1];
                        local_208.Translation.XY.m128d_f64[0] =
                             UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
                        local_208.Translation.XY.m128d_f64[1] =
                             UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
                        local_208.Scale3D.XY.m128d_f64[0] =
                             UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
                        local_208.Scale3D.XY.m128d_f64[1] =
                             UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
                        if (fVar147 < fVar8) {
                          UE::Math::TTransform<double>::Blend
                                    (&local_3b8,&local_208,&local_3b8,fVar147);
                        }
                        dVar27 = (pTVar62->Rotation).XY.m128d_f64[0];
                        dVar28 = (pTVar62->Rotation).XY.m128d_f64[1];
                        dVar29 = (pTVar62->Rotation).ZW.m128d_f64[0];
                        dVar30 = (pTVar62->Rotation).ZW.m128d_f64[1];
                        dVar25 = (double)CONCAT44(local_3b8.Rotation.XY.m128d_f64[0]._4_4_,
                                                  local_3b8.Rotation.XY.m128d_f64[0]._0_4_);
                        auVar130._8_4_ = local_3b8.Rotation.XY.m128d_f64[0]._0_4_;
                        auVar130._0_8_ = dVar25;
                        auVar130._12_4_ = local_3b8.Rotation.XY.m128d_f64[0]._4_4_;
                        dVar102 = (double)CONCAT44(local_3b8.Rotation.ZW.m128d_f64[1]._4_4_,
                                                   local_3b8.Rotation.ZW.m128d_f64[1]._0_4_);
                        dVar20 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0];
                        dVar71 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1];
                        auVar72._8_4_ = local_3b8.Rotation.ZW.m128d_f64[1]._0_4_;
                        auVar72._0_8_ = dVar102;
                        auVar72._12_4_ = local_3b8.Rotation.ZW.m128d_f64[1]._4_4_;
                        dVar128 = (double)CONCAT44(local_3b8.Rotation.XY.m128d_f64[1]._4_4_,
                                                   local_3b8.Rotation.XY.m128d_f64[1]._0_4_);
                        auVar105._8_4_ = local_3b8.Rotation.XY.m128d_f64[1]._0_4_;
                        auVar105._0_8_ = dVar128;
                        auVar105._12_4_ = local_3b8.Rotation.XY.m128d_f64[1]._4_4_;
                        dVar26 = (double)CONCAT44(local_3b8.Rotation.ZW.m128d_f64[0]._4_4_,
                                                  local_3b8.Rotation.ZW.m128d_f64[0]._0_4_);
                        auVar73._8_4_ = local_3b8.Rotation.ZW.m128d_f64[0]._0_4_;
                        auVar73._0_8_ = dVar26;
                        auVar73._12_4_ = local_3b8.Rotation.ZW.m128d_f64[0]._4_4_;
                        dVar21 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0];
                        dVar104 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1];
                        dVar103 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
                        dVar129 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
                        dVar18 = (double)CONCAT44(local_3b8.Rotation.XY.m128d_f64[0]._4_4_,
                                                  local_3b8.Rotation.XY.m128d_f64[0]._0_4_) * dVar29
                                 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
                                 (double)CONCAT44(local_3b8.Rotation.ZW.m128d_f64[1]._4_4_,
                                                  local_3b8.Rotation.ZW.m128d_f64[1]._0_4_) * dVar28
                                 + (double)CONCAT44(local_3b8.Rotation.XY.m128d_f64[1]._4_4_,
                                                    local_3b8.Rotation.XY.m128d_f64[1]._0_4_) *
                                   dVar30 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.
                                            m128d_f64[1] +
                                 (double)CONCAT44(local_3b8.Rotation.ZW.m128d_f64[0]._4_4_,
                                                  local_3b8.Rotation.ZW.m128d_f64[0]._0_4_) * dVar27
                                 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
                        auVar17._8_4_ = SUB84(dVar18,0);
                        auVar17._0_8_ =
                             dVar25 * dVar30 *
                             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
                             dVar102 * dVar27 +
                             dVar128 * dVar29 *
                             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
                             dVar26 * dVar28 *
                             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
                        auVar17._12_4_ = (int)((ulonglong)dVar18 >> 0x20);
                        *(undefined1 (*) [16])(pTVar62->Rotation).XY.m128d_f64 = auVar17;
                        (pTVar62->Rotation).ZW.m128d_f64[0] =
                             dVar25 * dVar28 * dVar20 + dVar102 * dVar29 + dVar128 * dVar27 * dVar21
                             + dVar26 * dVar30 * dVar103;
                        (pTVar62->Rotation).ZW.m128d_f64[1] =
                             auVar130._8_8_ * dVar27 * dVar71 + auVar72._8_8_ * dVar30 +
                             auVar105._8_8_ * dVar28 * dVar104 + auVar73._8_8_ * dVar29 * dVar129;
                        local_2e8 = (pTVar62->Translation).XY.m128d_f64[0];
                        dStack_2e0 = (pTVar62->Translation).XY.m128d_f64[1];
                        local_2d8 = (pTVar62->Translation).ZW.m128d_f64[0];
                        local_2b8 = local_2e8 + local_3b8.Translation.XY.m128d_f64[0];
                        local_2d0 = local_3b8.Translation.XY.m128d_f64[0];
                        dStack_2c8 = local_3b8.Translation.XY.m128d_f64[1];
                        local_2c0 = local_3b8.Translation.ZW.m128d_f64[0];
                        local_2a8 = local_2d8 + local_3b8.Translation.ZW.m128d_f64[0];
                        dStack_2b0 = dStack_2e0 + local_3b8.Translation.XY.m128d_f64[1];
                        (pTVar62->Translation).XY.m128d_f64[0] = local_2b8;
                        (pTVar62->Translation).XY.m128d_f64[1] = dStack_2b0;
                        (pTVar62->Translation).ZW.m128d_f64[0] = local_2a8;
                        (pTVar62->Translation).ZW.m128d_f64[1] = 0.0;
                        local_2a0 = (pTVar62->Scale3D).XY.m128d_f64[0];
                        dStack_298 = (pTVar62->Scale3D).XY.m128d_f64[1];
                        local_270 = local_2a0 + local_3b8.Scale3D.XY.m128d_f64[0];
                        local_290 = (pTVar62->Scale3D).ZW.m128d_f64[0];
                        local_288 = local_3b8.Scale3D.XY.m128d_f64[0];
                        dStack_280 = local_3b8.Scale3D.XY.m128d_f64[1];
                        local_278 = local_3b8.Scale3D.ZW.m128d_f64[0];
                        local_260 = local_290 + local_3b8.Scale3D.ZW.m128d_f64[0];
                        dStack_268 = dStack_298 + local_3b8.Scale3D.XY.m128d_f64[1];
                        (pTVar62->Scale3D).XY.m128d_f64[0] = local_270;
                        (pTVar62->Scale3D).XY.m128d_f64[1] = dStack_268;
                        (pTVar62->Scale3D).ZW.m128d_f64[0] = local_260;
                        (pTVar62->Scale3D).ZW.m128d_f64[1] = 0.0;
                        dVar20 = (pTVar62->Rotation).XY.m128d_f64[0];
                        dVar21 = (pTVar62->Rotation).XY.m128d_f64[1];
                        dVar103 = (pTVar62->Rotation).ZW.m128d_f64[0];
                        dVar71 = (pTVar62->Rotation).ZW.m128d_f64[1];
                        auVar106._0_8_ = dVar103 * dVar103 + dVar20 * dVar20;
                        auVar106._8_8_ = dVar71 * dVar71 + dVar21 * dVar21;
                        auVar74._8_4_ = SUB84(auVar106._8_8_,0);
                        auVar74._0_8_ = auVar106._0_8_;
                        auVar74._12_4_ = (int)((ulonglong)auVar106._8_8_ >> 0x20);
                        auVar75._0_8_ = auVar74._8_8_ + auVar106._0_8_;
                        auVar75._8_8_ = auVar106._0_8_ + auVar106._8_8_;
                        auVar107 = sqrtpd(auVar106,auVar75);
                        uVar65 = -(ulonglong)
                                  (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0]
                                  <= auVar75._0_8_);
                        uVar68 = -(ulonglong)
                                  (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[1]
                                  <= auVar75._8_8_);
                        uVar66 = -(ulonglong)
                                  (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[0]
                                  <= auVar75._0_8_);
                        uVar69 = -(ulonglong)
                                  (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[1]
                                  <= auVar75._8_8_);
                        auVar76 = divpd((undefined1  [16])
                                        GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar107);
                        auVar107 = divpd((undefined1  [16])
                                         GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar107);
                        auVar77._0_8_ = uVar66 & (ulonglong)(auVar76._0_8_ * dVar20);
                        uVar67 = uVar69 & (ulonglong)(auVar76._8_8_ * dVar21);
                        auVar77._8_4_ = (undefined4)uVar67;
                        auVar77._12_4_ = (undefined4)(uVar67 >> 0x20);
                        auVar138._0_8_ = uVar65 & (ulonglong)(auVar107._0_8_ * dVar103);
                        uVar67 = uVar68 & (ulonglong)(auVar107._8_8_ * dVar71);
                        auVar138._8_4_ = (undefined4)uVar67;
                        auVar138._12_4_ = (undefined4)(uVar67 >> 0x20);
                        auVar13._4_4_ =
                             ~(uint)(uVar66 >> 0x20) &
                             GlobalVectorConstants::Double0001.XY.m128d_f64[0]._4_4_;
                        auVar13._0_4_ =
                             ~(uint)uVar66 & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._0_4_
                        ;
                        auVar13._8_4_ =
                             ~(uint)uVar69 & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._0_4_
                        ;
                        auVar13._12_4_ =
                             ~(uint)(uVar69 >> 0x20) &
                             GlobalVectorConstants::Double0001.XY.m128d_f64[1]._4_4_;
                        auVar131._0_4_ =
                             ~(uint)uVar65 & GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._0_4_
                        ;
                        auVar131._4_4_ =
                             ~(uint)(uVar65 >> 0x20) &
                             GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._4_4_;
                        auVar131._8_4_ =
                             ~(uint)uVar68 & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._0_4_
                        ;
                        auVar131._12_4_ =
                             ~(uint)(uVar68 >> 0x20) &
                             GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._4_4_;
                        *(undefined1 (*) [16])(pTVar62->Rotation).XY.m128d_f64 = auVar77 | auVar13;
                        *(undefined1 (*) [16])(pTVar62->Rotation).ZW.m128d_f64 = auVar138 | auVar131
                        ;
                      }
                      bVar33 = this->bAdditivePose;
                      local_4e8 = GetRetargetTransforms(this);
                      FVar51 = this->RetargetSource;
                      if ((FVar51 == (FName)0x0) &&
                         (0 < (this->RetargetSourceAssetReferencePose).ArrayNum)) {
                        pUVar47 = UObjectBaseUtility::GetOutermost((UObjectBaseUtility *)this);
                        FVar51 = (FName)pUVar47->_padding_;
                      }
                      local_450 = FVar51;
                      FAnimationRuntime::RetargetBoneTransform
                                (local_478,&local_450,local_4e8,pTVar62,local_4d8,
                                 (FCompactPoseBoneIndex *)local_4f4,local_4a8,bVar33);
                      auVar76 = *(undefined1 (*) [16])(pTVar62->Rotation).ZW.m128d_f64;
                      dVar20 = (pTVar62->Rotation).XY.m128d_f64[0];
                      dVar21 = (pTVar62->Rotation).XY.m128d_f64[1];
                      dVar103 = auVar76._0_8_;
                      dVar71 = auVar76._8_8_;
                      auVar113._0_8_ = dVar103 * dVar103 + dVar20 * dVar20;
                      auVar113._8_8_ = dVar71 * dVar71 + dVar21 * dVar21;
                      auVar84._8_4_ = SUB84(auVar113._8_8_,0);
                      auVar84._0_8_ = auVar113._0_8_;
                      auVar84._12_4_ = (int)((ulonglong)auVar113._8_8_ >> 0x20);
                      auVar85._0_8_ = auVar84._8_8_ + auVar113._0_8_;
                      auVar85._8_8_ = auVar113._0_8_ + auVar113._8_8_;
                      auVar107 = sqrtpd(auVar113,auVar85);
                      uVar65 = -(ulonglong)
                                (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0]
                                <= auVar85._0_8_);
                      uVar68 = -(ulonglong)
                                (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[1]
                                <= auVar85._8_8_);
                      uVar66 = -(ulonglong)
                                (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[0]
                                <= auVar85._0_8_);
                      uVar69 = -(ulonglong)
                                (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[1]
                                <= auVar85._8_8_);
                      auVar76 = divpd((undefined1  [16])
                                      GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar107);
                      auVar107 = divpd((undefined1  [16])
                                       GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar107);
                      auVar86._0_8_ = uVar66 & (ulonglong)(auVar76._0_8_ * dVar20);
                      uVar67 = uVar69 & (ulonglong)(auVar76._8_8_ * dVar21);
                      auVar86._8_4_ = (undefined4)uVar67;
                      auVar86._12_4_ = (undefined4)(uVar67 >> 0x20);
                      auVar139._0_8_ = uVar65 & (ulonglong)(auVar107._0_8_ * dVar103);
                      uVar67 = uVar68 & (ulonglong)(auVar107._8_8_ * dVar71);
                      auVar139._8_4_ = (undefined4)uVar67;
                      auVar139._12_4_ = (undefined4)(uVar67 >> 0x20);
                      auVar14._4_4_ =
                           ~(uint)(uVar66 >> 0x20) &
                           GlobalVectorConstants::Double0001.XY.m128d_f64[0]._4_4_;
                      auVar14._0_4_ =
                           ~(uint)uVar66 & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._0_4_;
                      auVar14._8_4_ =
                           ~(uint)uVar69 & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._0_4_;
                      auVar14._12_4_ =
                           ~(uint)(uVar69 >> 0x20) &
                           GlobalVectorConstants::Double0001.XY.m128d_f64[1]._4_4_;
                      auVar133._0_4_ =
                           ~(uint)uVar65 & GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._0_4_;
                      auVar133._4_4_ =
                           ~(uint)(uVar65 >> 0x20) &
                           GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._4_4_;
                      auVar133._8_4_ =
                           ~(uint)uVar68 & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._0_4_;
                      auVar133._12_4_ =
                           ~(uint)(uVar68 >> 0x20) &
                           GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._4_4_;
                      *(undefined1 (*) [16])(pTVar62->Rotation).XY.m128d_f64 = auVar86 | auVar14;
                      *(undefined1 (*) [16])(pTVar62->Rotation).ZW.m128d_f64 = auVar139 | auVar133;
                      pFVar44 = local_510;
                    }
                    break;
                  }
                }
              }
              local_510 = (FBlendedCurve *)((longlong)pFVar44 + 1);
              uVar67 = (ulonglong)(uVar58 + 1);
              uVar60 = uVar60 + 0x10;
              pFVar46 = local_500;
            } while ((longlong)local_510 < local_4b8);
            bVar33 = true;
            goto LAB_1475cef3c;
          }
          goto LAB_1475d11b6;
        }
      }
    }
    else {
      local_400 = local_4f8;
      local_408 = UE::Core::Private::Function::
                  TFunctionRefCaller<`TThreadSingleton<FPoseAssetEvalData>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                  ::Call;
      pFVar48 = FThreadSingletonInitializer::Get
                          ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_408,
                           &`private:_static_unsigned_int&___ptr64___cdecl_TThreadSingleton<FPoseAssetEvalData>::GetTlsSlot(void)'
                            ::__l2::TlsSlot);
      local_4c0 = (TArray<FBoneIndices,TSizedDefaultAllocator<32>_> *)(pFVar48 + 2);
      local_4c8 = pFVar48;
      TArray<FBoneIndices,TSizedDefaultAllocator<32>_>::SetNumUninitialized(local_4c0,iVar39,No);
      uVar67 = uVar60;
      uVar65 = uVar60;
      if (0 < local_4b8) {
        do {
          bVar33 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)pFVar46);
          uVar56 = (uint)uVar65;
          if ((bVar33) &&
             (bVar33 = FWeakObjectPtr::IsValid(&(pFVar46->TargetSkeleton).WeakPtr), bVar33)) {
            uVar38 = uVar36;
            if ((int)uVar56 < (this->PoseContainer).TrackBoneIndices.ArrayNum) {
              uVar38 = ~uVar56 >> 0x1f;
            }
            if ((uVar38 == 0) &&
               (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar33)) {
              pcVar12 = (code *)swi(3);
              uVar34 = (*pcVar12)();
              return (bool)uVar34;
            }
            uVar38 = FSkeletonRemapping::GetTargetSkeletonBoneIndex
                               (pFVar46,*(int *)((this->PoseContainer).TrackBoneIndices.
                                                 AllocatorInstance.Data + uVar67 * 4));
          }
          else {
            uVar38 = uVar36;
            if ((int)uVar56 < (this->PoseContainer).TrackBoneIndices.ArrayNum) {
              uVar38 = ~uVar56 >> 0x1f;
            }
            if ((uVar38 == 0) &&
               (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar33)) {
              pcVar12 = (code *)swi(3);
              uVar34 = (*pcVar12)();
              return (bool)uVar34;
            }
            uVar38 = *(uint *)((this->PoseContainer).TrackBoneIndices.AllocatorInstance.Data +
                              uVar67 * 4);
          }
          pFVar10 = local_4a8;
          if (((int)uVar38 < 0) || ((local_4a8->SkeletonToCompactPose).ArrayNum <= (int)uVar38)) {
            uVar148 = 0xffffffff;
          }
          else {
            uVar58 = uVar36;
            if ((int)uVar38 < (local_4a8->SkeletonToCompactPose).ArrayNum) {
              uVar58 = ~uVar38 >> 0x1f;
            }
            if ((uVar58 == 0) &&
               (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar33)) {
              pcVar12 = (code *)swi(3);
              uVar34 = (*pcVar12)();
              return (bool)uVar34;
            }
            uVar148 = *(undefined4 *)
                       ((pFVar10->SkeletonToCompactPose).AllocatorInstance.Data +
                       (longlong)(int)uVar38 * 4);
          }
          uVar58 = uVar37;
          if ((int)uVar56 < local_4c0->ArrayNum) {
            uVar58 = ~uVar56 >> 0x1f;
          }
          if ((uVar58 == 0) &&
             (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar33)) {
            pcVar12 = (code *)swi(3);
            uVar34 = (*pcVar12)();
            return (bool)uVar34;
          }
          pTVar32 = local_4c0;
          *(uint *)((local_4c0->AllocatorInstance).Data + uVar67 * 8) = uVar38;
          uVar38 = uVar37;
          if ((int)uVar56 < local_4c0->ArrayNum) {
            uVar38 = ~uVar56 >> 0x1f;
          }
          if ((uVar38 == 0) &&
             (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar33)) {
            pcVar12 = (code *)swi(3);
            uVar34 = (*pcVar12)();
            return (bool)uVar34;
          }
          *(undefined4 *)((pTVar32->AllocatorInstance).Data + uVar67 * 8 + 4) = uVar148;
          uVar67 = uVar67 + 1;
          pFVar46 = local_500;
          pFVar48 = local_4c8;
          uVar65 = (ulonglong)(uVar56 + 1);
        } while ((longlong)uVar67 < local_4b8);
      }
      bVar33 = this->bAdditivePose;
      pTVar64 = (TArray<float,TSizedDefaultAllocator<32>_> *)(pFVar48 + 6);
      iVar39 = (this->PoseContainer).Poses.ArrayNum;
      iVar9 = *(int *)&pFVar48[7].field_0x4;
      *(undefined4 *)(pFVar48 + 7) = 0;
      local_490 = pTVar64;
      if (iVar9 < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,0,(ForAnyElementType *)pTVar64,0,(int *)&pFVar48[7].field_0x4);
      }
      TArray<float,TSizedDefaultAllocator<32>_>::SetNumZeroed(pTVar64,iVar39,No);
      pFVar1 = pFVar48 + 4;
      iVar9 = *(int *)&pFVar48[5].field_0x4;
      *(undefined4 *)(pFVar48 + 5) = 0;
      if (iVar9 < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,0,(ForAnyElementType *)pFVar1,0,(int *)&pFVar48[5].field_0x4);
      }
      iVar9 = *(int *)&pFVar48[9].field_0x4;
      *(undefined4 *)(pFVar48 + 9) = 0;
      if (iVar9 < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,0,(ForAnyElementType *)(pFVar48 + 8),0,(int *)&pFVar48[9].field_0x4);
      }
      TArray<bool,TSizedDefaultAllocator<32>_>::SetNumZeroed
                ((TArray<bool,TSizedDefaultAllocator<32>_> *)(pFVar48 + 8),iVar39,No);
      fVar147 = __real_3727c5ac;
      fVar146 = 0.0;
      local_518 = (FScriptContainerElement *)(longlong)(local_4d0->PoseCurves).ArrayNum;
      uVar56 = 0;
      uVar67 = uVar60;
      uVar65 = uVar60;
      if (0 < (longlong)local_518) {
        do {
          pFVar31 = local_4d0;
          uVar58 = (uint)uVar67;
          uVar38 = uVar56;
          if ((int)uVar58 < (local_4d0->PoseCurves).ArrayNum) {
            uVar38 = ~uVar58 >> 0x1f;
          }
          if ((uVar38 == 0) &&
             (bVar35 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar35)) {
            pcVar12 = (code *)swi(3);
            uVar34 = (*pcVar12)();
            return (bool)uVar34;
          }
          local_4e8 = (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)
                      (pFVar31->PoseCurves).AllocatorInstance.Data;
          local_524 = *(uint *)((longlong)&local_4e8->ArrayNum + uVar65);
          if (local_524 == 0xffffffff) {
            bVar35 = UE::Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<_6070742836158922006>,false,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\PoseAsset.cpp"
                                ,0x2ea,"PoseIndex != INDEX_NONE");
            if (bVar35) {
              pcVar12 = (code *)swi(3);
              uVar34 = (*pcVar12)();
              return (bool)uVar34;
            }
          }
          else {
            uVar38 = uVar56;
            if ((int)local_524 < (this->PoseContainer).Poses.ArrayNum) {
              uVar38 = ~local_524 >> 0x1f;
            }
            if ((uVar38 == 0) &&
               (bVar35 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar35)) {
              pcVar12 = (code *)swi(3);
              uVar34 = (*pcVar12)();
              return (bool)uVar34;
            }
            uVar38 = local_524;
            fVar8 = *(float *)((longlong)&local_4e8->ArrayMax + uVar65);
            if (((this->bAdditivePose == false) || (local_524 != this->BasePoseIndex)) &&
               (fVar147 < fVar8)) {
              fVar146 = fVar146 + fVar8;
              uVar53 = uVar56;
              if ((int)local_524 < *(int *)(pFVar48 + 7)) {
                uVar53 = ~local_524 >> 0x1f;
              }
              if ((uVar53 == 0) &&
                 (bVar35 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar35)) {
                pcVar12 = (code *)swi(3);
                uVar34 = (*pcVar12)();
                return (bool)uVar34;
              }
              puVar2 = &pFVar48[5].field_0x4;
              *(float *)((pTVar64->AllocatorInstance).Data + (longlong)(int)uVar38 * 4) = fVar8;
              if (((*(FScriptContainerElement **)pFVar1 <= (FScriptContainerElement *)&local_524) &&
                  ((FScriptContainerElement *)&local_524 <
                   *(FScriptContainerElement **)pFVar1 + (longlong)*(int *)puVar2 * 4)) &&
                 (bVar35 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar35)) {
                pcVar12 = (code *)swi(3);
                uVar34 = (*pcVar12)();
                return (bool)uVar34;
              }
              iVar39 = *(int *)(pFVar48 + 5);
              if (iVar39 == *(int *)puVar2) {
                iVar39 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x404,(ForAnyElementType *)pFVar1,(int *)puVar2);
              }
              *(int *)(pFVar48 + 5) = iVar39 + 1;
              *(uint *)(*(FScriptContainerElement **)pFVar1 + (longlong)iVar39 * 4) = local_524;
              lVar61 = (longlong)(int)local_524;
              uVar38 = uVar56;
              if ((int)local_524 < *(int *)(local_4c8 + 9)) {
                uVar38 = ~local_524 >> 0x1f;
              }
              if ((uVar38 == 0) &&
                 (bVar35 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar35)) {
                pcVar12 = (code *)swi(3);
                uVar34 = (*pcVar12)();
                return (bool)uVar34;
              }
              *(undefined1 *)(lVar61 + (longlong)local_4c8[8]) = 1;
            }
          }
          local_518 = local_518 + -1;
          uVar67 = (ulonglong)(uVar58 + 1);
          uVar65 = uVar65 + 0x10;
        } while (local_518 != (FScriptContainerElement *)0x0);
        local_518 = (FScriptContainerElement *)0x0;
      }
      local_520 = *(float *)(pFVar48 + 5);
      uVar67 = (ulonglong)(int)local_520;
      if (0 < (int)local_520) {
        if ((bVar33 != false) || (fVar146 <= __real_3f800000)) {
          FVar55.Data = *(FScriptContainerElement **)pFVar1;
          local_4e8 = (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)
                      (FVar55.Data + uVar67 * 4);
          while( true ) {
            pTVar49 = local_4e8;
            if (*(int *)(pFVar48 + 5) != (int)uVar67) {
              local_526[0] = 0;
              `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                        (local_526);
            }
            if ((TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)FVar55.Data ==
                pTVar49) break;
            uVar38 = *(uint *)&(((TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *
                                 )FVar55.Data)->AllocatorInstance).Data;
            uVar58 = uVar37;
            if ((int)uVar38 < (this->PoseContainer).Poses.ArrayNum) {
              uVar58 = ~uVar38 >> 0x1f;
            }
            if ((uVar58 == 0) &&
               (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar33)) {
              pcVar12 = (code *)swi(3);
              uVar34 = (*pcVar12)();
              return (bool)uVar34;
            }
            uVar58 = *(uint *)&(((TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *
                                 )FVar55.Data)->AllocatorInstance).Data;
            pFVar63 = (this->PoseContainer).Poses.AllocatorInstance.Data;
            uVar53 = uVar37;
            if ((int)uVar58 < *(int *)(pFVar48 + 7)) {
              uVar53 = ~uVar58 >> 0x1f;
            }
            if ((uVar53 == 0) &&
               (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar33)) {
              pcVar12 = (code *)swi(3);
              uVar34 = (*pcVar12)();
              return (bool)uVar34;
            }
            FPoseDataContainer::BlendPoseCurve
                      (&this->PoseContainer,(FPoseData *)(pFVar63 + (longlong)(int)uVar38 * 0x20),
                       local_510,
                       *(float *)((pTVar64->AllocatorInstance).Data + (longlong)(int)uVar58 * 4));
            uVar67 = (ulonglong)(uint)local_520;
            FVar55.Data = (FScriptContainerElement *)
                          ((longlong)
                           &(((TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)
                             FVar55.Data)->AllocatorInstance).Data + 4);
          }
        }
        else {
          FVar55.Data = *(FScriptContainerElement **)pFVar1;
          local_4a0 = FVar55.Data + uVar67 * 4;
          while( true ) {
            pFVar63 = local_4a0;
            if (*(int *)(pFVar48 + 5) != (int)uVar67) {
              local_527 = 0;
              `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                        (&local_527);
            }
            if (FVar55.Data == pFVar63) break;
            uVar38 = *(uint *)FVar55.Data;
            lVar61 = (longlong)(int)uVar38;
            uVar58 = uVar37;
            if ((int)uVar38 < *(int *)(pFVar48 + 7)) {
              uVar58 = ~uVar38 >> 0x1f;
            }
            if ((uVar58 == 0) &&
               (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar33)) {
              pcVar12 = (code *)swi(3);
              uVar34 = (*pcVar12)();
              return (bool)uVar34;
            }
            local_4e8 = (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)
                        (pTVar64->AllocatorInstance).Data;
            *(float *)((longlong)&(local_4e8->AllocatorInstance).Data + lVar61 * 4) =
                 *(float *)((longlong)&(local_4e8->AllocatorInstance).Data + lVar61 * 4) / fVar146;
            uVar38 = *(uint *)FVar55.Data;
            uVar58 = uVar37;
            if ((int)uVar38 < (this->PoseContainer).Poses.ArrayNum) {
              uVar58 = ~uVar38 >> 0x1f;
            }
            if ((uVar58 == 0) &&
               (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar33)) {
              pcVar12 = (code *)swi(3);
              uVar34 = (*pcVar12)();
              return (bool)uVar34;
            }
            FPoseDataContainer::BlendPoseCurve
                      (&this->PoseContainer,
                       (FPoseData *)
                       ((this->PoseContainer).Poses.AllocatorInstance.Data +
                       (longlong)(int)uVar38 * 0x20),local_510,
                       *(float *)((longlong)&(local_4e8->AllocatorInstance).Data + lVar61 * 4));
            uVar67 = (ulonglong)(uint)local_520;
            FVar55.Data = FVar55.Data + 4;
          }
        }
        local_51c = 0;
        local_148.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
        local_148.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
        local_148.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
        local_148.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
        local_148.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1]
        ;
        local_148.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0]
        ;
        local_148.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
        local_148.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
        local_148.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3]
        ;
        local_148.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2]
        ;
        local_148.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
        local_148.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
        if (0 < local_4b8) {
          local_510 = (FBlendedCurve *)0x0;
          local_518 = (FScriptContainerElement *)0x0;
          uVar67 = uVar60;
          fVar147 = __real_3f7fff58;
          do {
            pTVar32 = local_4c0;
            pFVar44 = local_510;
            pFVar63 = local_518;
            fVar146 = 0.0;
            uVar58 = (uint)uVar67;
            uVar38 = uVar56;
            if ((int)uVar58 < local_4c0->ArrayNum) {
              uVar38 = ~uVar58 >> 0x1f;
            }
            if ((uVar38 == 0) &&
               (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar33)) {
              pcVar12 = (code *)swi(3);
              uVar34 = (*pcVar12)();
              return (bool)uVar34;
            }
            pFVar46 = (FSkeletonRemapping *)
                      ((pTVar32->AllocatorInstance).Data + (longlong)pFVar44 * 8 + 4);
            iVar39 = (pFVar46->SourceSkeleton).WeakPtr.ObjectIndex;
            local_500 = pFVar46;
            if (iVar39 != -1) {
              if (iVar39 < (local_4d0->BonesRequired).ArrayNum) {
                if ((iVar39 < 0) &&
                   (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar33)) {
                  pcVar12 = (code *)swi(3);
                  uVar34 = (*pcVar12)();
                  return (bool)uVar34;
                }
                if ((local_4d0->BonesRequired).AllocatorInstance.Data[iVar39] ==
                    (FScriptContainerElement)0x0) goto LAB_1475d1182;
              }
              uVar38 = uVar56;
              if ((int)uVar58 < (this->PoseContainer).TrackPoseInfluenceIndices.ArrayNum) {
                uVar38 = ~uVar58 >> 0x1f;
              }
              if ((uVar38 == 0) &&
                 (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar33)) {
                pcVar12 = (code *)swi(3);
                uVar34 = (*pcVar12)();
                return (bool)uVar34;
              }
              pFVar43 = local_508;
              local_4b0 = (this->PoseContainer).TrackPoseInfluenceIndices.AllocatorInstance.Data;
              if ((this->bAdditivePose != false) ||
                 (*(int *)(pFVar63 + 8 + (longlong)local_4b0) == 0)) {
                uVar38 = (pFVar46->SourceSkeleton).WeakPtr.ObjectIndex;
                uVar53 = uVar36;
                if ((int)uVar38 < (int)local_508->_padding_) {
                  uVar53 = ~uVar38 >> 0x1f;
                }
                if ((uVar53 == 0) &&
                   (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar33)) {
                  pcVar12 = (code *)swi(3);
                  uVar34 = (*pcVar12)();
                  return (bool)uVar34;
                }
                lVar61 = pFVar43->_padding_;
                lVar50 = (longlong)(int)uVar38 * 0x60;
                local_148.Rotation.XY.m128d_f64 = *(double (*) [2])(lVar50 + lVar61);
                local_148.Rotation.ZW.m128d_f64 = *(double (*) [2])(lVar50 + 0x10 + lVar61);
                local_148.Translation.XY.m128d_f64 = *(double (*) [2])(lVar50 + 0x20 + lVar61);
                local_148.Translation.ZW.m128d_f64 = *(double (*) [2])(lVar50 + 0x30 + lVar61);
                local_148.Scale3D.XY.m128d_f64 = *(double (*) [2])(lVar50 + 0x40 + lVar61);
                local_148.Scale3D.ZW.m128d_f64 = *(double (*) [2])(lVar50 + 0x50 + lVar61);
              }
              lVar61 = (longlong)*(int *)(pFVar63 + 8 + (longlong)local_4b0);
              pFVar43 = local_508;
              if (*(int *)(pFVar63 + 8 + (longlong)local_4b0) != 0) {
                bVar33 = false;
                local_460 = lVar61;
                if (0 < lVar61) {
                  uVar38 = GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._0_4_;
                  uVar53 = GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._4_4_;
                  uVar164 = GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._0_4_;
                  uVar165 = GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._4_4_;
                  uVar58 = GlobalVectorConstants::Double0001.XY.m128d_f64[0]._0_4_;
                  uVar52 = GlobalVectorConstants::Double0001.XY.m128d_f64[0]._4_4_;
                  uVar166 = GlobalVectorConstants::Double0001.XY.m128d_f64[1]._0_4_;
                  uVar167 = GlobalVectorConstants::Double0001.XY.m128d_f64[1]._4_4_;
                  uVar152 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
                  uVar153 = (undefined4)
                            ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >>
                            0x20);
                  uVar154 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,0);
                  uVar155 = (undefined4)
                            ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._8_8_ >>
                            0x20);
                  uVar156 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,0);
                  uVar157 = (undefined4)
                            ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._0_8_ >>
                            0x20);
                  uVar67 = uVar60;
                  uVar65 = uVar60;
                  uVar148 = UE::Math::TQuat<double>::Identity.Z._0_4_;
                  uVar150 = UE::Math::TQuat<double>::Identity.Z._4_4_;
                  uVar158 = UE::Math::TQuat<double>::Identity.W._0_4_;
                  uVar159 = UE::Math::TQuat<double>::Identity.W._4_4_;
                  uVar160 = UE::Math::TQuat<double>::Identity.X._0_4_;
                  uVar161 = UE::Math::TQuat<double>::Identity.X._4_4_;
                  uVar162 = UE::Math::TQuat<double>::Identity.Y._0_4_;
                  uVar163 = UE::Math::TQuat<double>::Identity.Y._4_4_;
                  do {
                    uVar59 = (uint)uVar65;
                    uVar144 = uVar36;
                    if ((int)uVar59 < *(int *)(pFVar63 + 8 + (longlong)local_4b0)) {
                      uVar144 = ~uVar59 >> 0x1f;
                    }
                    if (uVar144 == 0) {
                      bVar35 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         );
                      if (bVar35) {
                        pcVar12 = (code *)swi(3);
                        uVar34 = (*pcVar12)();
                        return (bool)uVar34;
                      }
                      uVar156 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,0);
                      uVar157 = (undefined4)
                                ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._0_8_
                                >> 0x20);
                      uVar154 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,0);
                      uVar155 = (undefined4)
                                ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._8_8_
                                >> 0x20);
                      uVar152 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
                      uVar153 = (undefined4)
                                ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_
                                >> 0x20);
                      uVar58 = GlobalVectorConstants::Double0001.XY.m128d_f64[0]._0_4_;
                      uVar52 = GlobalVectorConstants::Double0001.XY.m128d_f64[0]._4_4_;
                      uVar166 = GlobalVectorConstants::Double0001.XY.m128d_f64[1]._0_4_;
                      uVar167 = GlobalVectorConstants::Double0001.XY.m128d_f64[1]._4_4_;
                      uVar38 = GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._0_4_;
                      uVar53 = GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._4_4_;
                      uVar164 = GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._0_4_;
                      uVar165 = GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._4_4_;
                      uVar148 = UE::Math::TQuat<double>::Identity.Z._0_4_;
                      uVar150 = UE::Math::TQuat<double>::Identity.Z._4_4_;
                      uVar158 = UE::Math::TQuat<double>::Identity.W._0_4_;
                      uVar159 = UE::Math::TQuat<double>::Identity.W._4_4_;
                      uVar160 = UE::Math::TQuat<double>::Identity.X._0_4_;
                      uVar161 = UE::Math::TQuat<double>::Identity.X._4_4_;
                      uVar162 = UE::Math::TQuat<double>::Identity.Y._0_4_;
                      uVar163 = UE::Math::TQuat<double>::Identity.Y._4_4_;
                    }
                    lVar61 = *(longlong *)(pFVar63 + (longlong)local_4b0);
                    uVar144 = *(uint *)(lVar61 + uVar67 * 8);
                    uVar145 = uVar56;
                    if ((int)uVar144 < *(int *)(local_4c8 + 9)) {
                      uVar145 = ~uVar144 >> 0x1f;
                    }
                    if (uVar145 == 0) {
                      bVar35 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         );
                      if (bVar35) {
                        pcVar12 = (code *)swi(3);
                        uVar34 = (*pcVar12)();
                        return (bool)uVar34;
                      }
                      uVar156 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,0);
                      uVar157 = (undefined4)
                                ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._0_8_
                                >> 0x20);
                      uVar154 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,0);
                      uVar155 = (undefined4)
                                ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._8_8_
                                >> 0x20);
                      uVar152 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
                      uVar153 = (undefined4)
                                ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_
                                >> 0x20);
                      uVar58 = GlobalVectorConstants::Double0001.XY.m128d_f64[0]._0_4_;
                      uVar52 = GlobalVectorConstants::Double0001.XY.m128d_f64[0]._4_4_;
                      uVar166 = GlobalVectorConstants::Double0001.XY.m128d_f64[1]._0_4_;
                      uVar167 = GlobalVectorConstants::Double0001.XY.m128d_f64[1]._4_4_;
                      uVar38 = GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._0_4_;
                      uVar53 = GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._4_4_;
                      uVar164 = GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._0_4_;
                      uVar165 = GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._4_4_;
                      uVar148 = UE::Math::TQuat<double>::Identity.Z._0_4_;
                      uVar150 = UE::Math::TQuat<double>::Identity.Z._4_4_;
                      uVar158 = UE::Math::TQuat<double>::Identity.W._0_4_;
                      uVar159 = UE::Math::TQuat<double>::Identity.W._4_4_;
                      uVar160 = UE::Math::TQuat<double>::Identity.X._0_4_;
                      uVar161 = UE::Math::TQuat<double>::Identity.X._4_4_;
                      uVar162 = UE::Math::TQuat<double>::Identity.Y._0_4_;
                      uVar163 = UE::Math::TQuat<double>::Identity.Y._4_4_;
                    }
                    if (*(char *)((longlong)(int)uVar144 + (longlong)local_4c8[8]) != '\0') {
                      uVar144 = *(uint *)(lVar61 + uVar67 * 8);
                      pFVar63 = (FScriptContainerElement *)(longlong)(int)uVar144;
                      uVar145 = uVar56;
                      if ((int)uVar144 < pTVar64->ArrayNum) {
                        uVar145 = ~uVar144 >> 0x1f;
                      }
                      if (uVar145 == 0) {
                        bVar35 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           );
                        if (bVar35) {
                          pcVar12 = (code *)swi(3);
                          uVar34 = (*pcVar12)();
                          return (bool)uVar34;
                        }
                        uVar156 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,0);
                        uVar157 = (undefined4)
                                  ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._0_8_
                                  >> 0x20);
                        uVar154 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,0);
                        uVar155 = (undefined4)
                                  ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._8_8_
                                  >> 0x20);
                        uVar152 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
                        uVar153 = (undefined4)
                                  ((ulonglong)
                                   UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
                        uVar58 = GlobalVectorConstants::Double0001.XY.m128d_f64[0]._0_4_;
                        uVar52 = GlobalVectorConstants::Double0001.XY.m128d_f64[0]._4_4_;
                        uVar166 = GlobalVectorConstants::Double0001.XY.m128d_f64[1]._0_4_;
                        uVar167 = GlobalVectorConstants::Double0001.XY.m128d_f64[1]._4_4_;
                        uVar38 = GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._0_4_;
                        uVar53 = GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._4_4_;
                        uVar164 = GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._0_4_;
                        uVar165 = GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._4_4_;
                        uVar148 = UE::Math::TQuat<double>::Identity.Z._0_4_;
                        uVar150 = UE::Math::TQuat<double>::Identity.Z._4_4_;
                        uVar158 = UE::Math::TQuat<double>::Identity.W._0_4_;
                        uVar159 = UE::Math::TQuat<double>::Identity.W._4_4_;
                        uVar160 = UE::Math::TQuat<double>::Identity.X._0_4_;
                        uVar161 = UE::Math::TQuat<double>::Identity.X._4_4_;
                        uVar162 = UE::Math::TQuat<double>::Identity.Y._0_4_;
                        uVar163 = UE::Math::TQuat<double>::Identity.Y._4_4_;
                      }
                      local_4e8 = (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>
                                   *)(pTVar64->AllocatorInstance).Data;
                      local_520 = fVar146 + *(float *)((longlong)
                                                       &(local_4e8->AllocatorInstance).Data +
                                                      (longlong)pFVar63 * 4);
                      uVar144 = *(uint *)(lVar61 + uVar67 * 8);
                      uVar145 = uVar37;
                      if ((int)uVar144 < (this->PoseContainer).Poses.ArrayNum) {
                        uVar145 = ~uVar144 >> 0x1f;
                      }
                      local_4a0 = pFVar63;
                      if (uVar145 == 0) {
                        bVar35 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           );
                        if (bVar35) {
                          pcVar12 = (code *)swi(3);
                          uVar34 = (*pcVar12)();
                          return (bool)uVar34;
                        }
                        uVar156 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,0);
                        uVar157 = (undefined4)
                                  ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._0_8_
                                  >> 0x20);
                        uVar154 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,0);
                        uVar155 = (undefined4)
                                  ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._8_8_
                                  >> 0x20);
                        uVar152 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
                        uVar153 = (undefined4)
                                  ((ulonglong)
                                   UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
                        uVar58 = GlobalVectorConstants::Double0001.XY.m128d_f64[0]._0_4_;
                        uVar52 = GlobalVectorConstants::Double0001.XY.m128d_f64[0]._4_4_;
                        uVar166 = GlobalVectorConstants::Double0001.XY.m128d_f64[1]._0_4_;
                        uVar167 = GlobalVectorConstants::Double0001.XY.m128d_f64[1]._4_4_;
                        uVar38 = GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._0_4_;
                        uVar53 = GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._4_4_;
                        uVar164 = GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._0_4_;
                        uVar165 = GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._4_4_;
                        uVar148 = UE::Math::TQuat<double>::Identity.Z._0_4_;
                        uVar150 = UE::Math::TQuat<double>::Identity.Z._4_4_;
                        uVar158 = UE::Math::TQuat<double>::Identity.W._0_4_;
                        uVar159 = UE::Math::TQuat<double>::Identity.W._4_4_;
                        uVar160 = UE::Math::TQuat<double>::Identity.X._0_4_;
                        uVar161 = UE::Math::TQuat<double>::Identity.X._4_4_;
                        uVar162 = UE::Math::TQuat<double>::Identity.Y._0_4_;
                        uVar163 = UE::Math::TQuat<double>::Identity.Y._4_4_;
                      }
                      local_470 = (this->PoseContainer).Poses.AllocatorInstance.Data;
                      uVar145 = *(uint *)(lVar61 + 4 + uVar67 * 8);
                      uVar40 = uVar37;
                      if ((int)uVar145 < *(int *)(local_470 + (longlong)(int)uVar144 * 0x20 + 8)) {
                        uVar40 = ~uVar145 >> 0x1f;
                      }
                      if (uVar40 == 0) {
                        bVar35 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           );
                        if (bVar35) {
                          pcVar12 = (code *)swi(3);
                          uVar34 = (*pcVar12)();
                          return (bool)uVar34;
                        }
                        uVar156 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,0);
                        uVar157 = (undefined4)
                                  ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._0_8_
                                  >> 0x20);
                        uVar154 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,0);
                        uVar155 = (undefined4)
                                  ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._8_8_
                                  >> 0x20);
                        uVar152 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
                        uVar153 = (undefined4)
                                  ((ulonglong)
                                   UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
                        uVar58 = GlobalVectorConstants::Double0001.XY.m128d_f64[0]._0_4_;
                        uVar52 = GlobalVectorConstants::Double0001.XY.m128d_f64[0]._4_4_;
                        uVar166 = GlobalVectorConstants::Double0001.XY.m128d_f64[1]._0_4_;
                        uVar167 = GlobalVectorConstants::Double0001.XY.m128d_f64[1]._4_4_;
                        uVar38 = GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._0_4_;
                        uVar53 = GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._4_4_;
                        uVar164 = GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._0_4_;
                        uVar165 = GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._4_4_;
                        uVar148 = UE::Math::TQuat<double>::Identity.Z._0_4_;
                        uVar150 = UE::Math::TQuat<double>::Identity.Z._4_4_;
                        uVar158 = UE::Math::TQuat<double>::Identity.W._0_4_;
                        uVar159 = UE::Math::TQuat<double>::Identity.W._4_4_;
                        uVar160 = UE::Math::TQuat<double>::Identity.X._0_4_;
                        uVar161 = UE::Math::TQuat<double>::Identity.X._4_4_;
                        uVar162 = UE::Math::TQuat<double>::Identity.Y._0_4_;
                        uVar163 = UE::Math::TQuat<double>::Identity.Y._4_4_;
                      }
                      lVar50 = (longlong)(int)uVar145 * 0x60;
                      lVar61 = *(longlong *)(local_470 + (longlong)(int)uVar144 * 0x20);
                      pTVar64 = local_490;
                      fVar146 = local_520;
                      if ((bVar33) || (this->bAdditivePose != false)) {
                        fVar8 = *(float *)((longlong)&(local_4e8->AllocatorInstance).Data +
                                          (longlong)local_4a0 * 4);
                        if (this->bAdditivePose == false) {
                          dVar104 = (double)fVar8;
                          dVar129 = (double)fVar8;
                          dVar25 = (double)fVar8;
                          dVar18 = (double)fVar8;
                          dVar20 = dVar104 * *(double *)(lVar50 + lVar61);
                          dVar21 = dVar129 * ((double *)(lVar50 + lVar61))[1];
                          pdVar4 = (double *)(lVar50 + 0x10 + lVar61);
                          dVar103 = dVar25 * *pdVar4;
                          dVar71 = dVar18 * pdVar4[1];
                          auVar76._8_4_ = SUB84(dVar21,0);
                          auVar76._0_8_ = dVar20;
                          auVar76._12_4_ = (int)((ulonglong)dVar21 >> 0x20);
                          auVar119._8_4_ = SUB84(dVar71,0);
                          auVar119._0_8_ = dVar103;
                          auVar119._12_4_ = (int)((ulonglong)dVar71 >> 0x20);
                          dVar102 = dVar103 * local_148.Rotation.ZW.m128d_f64[0] +
                                    dVar20 * local_148.Rotation.XY.m128d_f64[0];
                          dVar128 = auVar119._8_8_ * local_148.Rotation.ZW.m128d_f64[1] +
                                    auVar76._8_8_ * local_148.Rotation.XY.m128d_f64[1];
                          auVar107._8_4_ = SUB84(dVar128,0);
                          auVar107._0_8_ = dVar102;
                          auVar107._12_4_ = (int)((ulonglong)dVar128 >> 0x20);
                          uVar65 = -(ulonglong)(0.0 <= auVar107._8_8_ + dVar102);
                          uVar66 = -(ulonglong)(0.0 <= dVar102 + dVar128);
                          uVar144 = (uint)(uVar65 >> 0x20);
                          uVar145 = (uint)(uVar66 >> 0x20);
                          auVar135._0_4_ = ~(uint)uVar65 & SUB84(0.0 - dVar20,0);
                          auVar135._4_4_ = ~uVar144 & (uint)((ulonglong)(0.0 - dVar20) >> 0x20);
                          auVar135._8_4_ = ~(uint)uVar66 & SUB84(0.0 - dVar21,0);
                          auVar135._12_4_ = ~uVar145 & (uint)((ulonglong)(0.0 - dVar21) >> 0x20);
                          auVar120._0_8_ = uVar65 & (ulonglong)dVar20;
                          auVar120._8_4_ = (undefined4)((ulonglong)dVar21 & uVar66);
                          auVar120._12_4_ = (undefined4)(((ulonglong)dVar21 & uVar66) >> 0x20);
                          local_148.Rotation.XY.m128d_f64[1] =
                               local_148.Rotation.XY.m128d_f64[1] + SUB168(auVar135 | auVar120,8);
                          local_148.Rotation.XY.m128d_f64[0] =
                               local_148.Rotation.XY.m128d_f64[0] + SUB168(auVar135 | auVar120,0);
                          auVar94._0_4_ = ~(uint)uVar65 & SUB84(0.0 - dVar103,0);
                          auVar94._4_4_ = ~uVar144 & (uint)((ulonglong)(0.0 - dVar103) >> 0x20);
                          auVar94._8_4_ = ~(uint)uVar66 & SUB84(0.0 - dVar71,0);
                          auVar94._12_4_ = ~uVar145 & (uint)((ulonglong)(0.0 - dVar71) >> 0x20);
                          auVar141._0_8_ = uVar65 & (ulonglong)dVar103;
                          auVar141._8_4_ = (undefined4)(uVar66 & (ulonglong)dVar71);
                          auVar141._12_4_ = (undefined4)((uVar66 & (ulonglong)dVar71) >> 0x20);
                          local_148.Rotation.ZW.m128d_f64[1] =
                               local_148.Rotation.ZW.m128d_f64[1] + SUB168(auVar94 | auVar141,8);
                          local_148.Rotation.ZW.m128d_f64[0] =
                               local_148.Rotation.ZW.m128d_f64[0] + SUB168(auVar94 | auVar141,0);
                          auVar121._8_4_ = SUB84(dVar129,0);
                          auVar121._0_8_ = dVar104;
                          auVar121._12_4_ = (int)((ulonglong)dVar129 >> 0x20);
                          pdVar4 = (double *)(lVar50 + 0x20 + lVar61);
                          auVar76 = *(undefined1 (*) [16])(lVar50 + 0x30 + lVar61);
                          auVar122._8_4_ = SUB84(dVar18,0);
                          auVar122._0_8_ = dVar25;
                          auVar122._12_4_ = (int)((ulonglong)dVar18 >> 0x20);
                          local_148.Translation.XY.m128d_f64[1] =
                               local_148.Translation.XY.m128d_f64[1] + auVar121._8_8_ * pdVar4[1];
                          local_148.Translation.XY.m128d_f64[0] =
                               local_148.Translation.XY.m128d_f64[0] + dVar104 * *pdVar4;
                          local_148.Translation.ZW.m128d_f64[1] =
                               local_148.Translation.ZW.m128d_f64[1] +
                               auVar122._8_8_ * auVar76._8_8_;
                          local_148.Translation.ZW.m128d_f64[0] =
                               local_148.Translation.ZW.m128d_f64[0] + dVar25 * auVar76._0_8_;
                          pdVar4 = (double *)(lVar50 + 0x40 + lVar61);
                          auVar76 = *(undefined1 (*) [16])(lVar50 + 0x50 + lVar61);
                          local_148.Scale3D.XY.m128d_f64[1] =
                               local_148.Scale3D.XY.m128d_f64[1] + dVar129 * pdVar4[1];
                          local_148.Scale3D.XY.m128d_f64[0] =
                               local_148.Scale3D.XY.m128d_f64[0] + dVar104 * *pdVar4;
                          local_148.Scale3D.ZW.m128d_f64[0] =
                               local_148.Scale3D.ZW.m128d_f64[0] + dVar25 * auVar76._0_8_;
                          local_148.Scale3D.ZW.m128d_f64[1] =
                               local_148.Scale3D.ZW.m128d_f64[1] + dVar18 * auVar76._8_8_;
                          fVar147 = __real_3f7fff58;
                        }
                        else {
                          local_1a8.Translation.XY.m128d_f64[1] = (double)CONCAT44(uVar155,uVar154);
                          local_1a8.Translation.XY.m128d_f64[0] = (double)CONCAT44(uVar157,uVar156);
                          local_1a8.Translation.ZW.m128d_f64[0] = (double)CONCAT44(uVar153,uVar152);
                          puVar7 = (undefined8 *)(lVar50 + 0x20 + lVar61);
                          local_470 = (FScriptContainerElement *)*puVar7;
                          dStack_468 = (double)puVar7[1];
                          local_358.Rotation.ZW.m128d_f64 =
                               *(double (*) [2])(lVar50 + 0x10 + lVar61);
                          puVar7 = (undefined8 *)(lVar50 + 0x30 + lVar61);
                          local_4e8 = (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>
                                       *)*puVar7;
                          dStack_4e0 = (double)puVar7[1];
                          puVar7 = (undefined8 *)(lVar50 + 0x40 + lVar61);
                          local_4a0 = (FScriptContainerElement *)*puVar7;
                          dStack_498 = (double)puVar7[1];
                          pdVar4 = (double *)(lVar50 + 0x50 + lVar61);
                          local_448 = *pdVar4;
                          dStack_440 = pdVar4[1];
                          local_1a8.Translation.ZW.m128d_f64[1] = 0.0;
                          local_1a8.Scale3D.ZW.m128d_f64[1] = 0.0;
                          local_358.Rotation.XY.m128d_f64[0] = *(double *)(lVar50 + lVar61);
                          local_358.Rotation.XY.m128d_f64[1] = ((double *)(lVar50 + lVar61))[1];
                          local_358.Translation.XY.m128d_f64[0] = (double)local_470;
                          local_358.Translation.XY.m128d_f64[1] = dStack_468;
                          local_358.Translation.ZW.m128d_f64[0] = (double)local_4e8;
                          local_358.Translation.ZW.m128d_f64[1] = dStack_4e0;
                          local_358.Scale3D.XY.m128d_f64[0] = (double)local_4a0;
                          local_358.Scale3D.XY.m128d_f64[1] = dStack_498;
                          local_358.Scale3D.ZW.m128d_f64[0] = local_448;
                          local_358.Scale3D.ZW.m128d_f64[1] = dStack_440;
                          local_1a8.Rotation.XY.m128d_f64[0]._0_4_ = uVar160;
                          local_1a8.Rotation.XY.m128d_f64[0]._4_4_ = uVar161;
                          local_1a8.Rotation.XY.m128d_f64[1]._0_4_ = uVar162;
                          local_1a8.Rotation.XY.m128d_f64[1]._4_4_ = uVar163;
                          local_1a8.Rotation.ZW.m128d_f64[0]._0_4_ = uVar148;
                          local_1a8.Rotation.ZW.m128d_f64[0]._4_4_ = uVar150;
                          local_1a8.Rotation.ZW.m128d_f64[1]._0_4_ = uVar158;
                          local_1a8.Rotation.ZW.m128d_f64[1]._4_4_ = uVar159;
                          local_1a8.Scale3D.XY.m128d_f64[0] = local_1a8.Translation.XY.m128d_f64[0];
                          local_1a8.Scale3D.XY.m128d_f64[1] = local_1a8.Translation.XY.m128d_f64[1];
                          local_1a8.Scale3D.ZW.m128d_f64[0] = local_1a8.Translation.ZW.m128d_f64[0];
                          if (fVar8 < fVar147) {
                            UE::Math::TTransform<double>::Blend
                                      (&local_358,&local_1a8,&local_358,fVar8);
                          }
                          dVar71 = local_358.Rotation.ZW.m128d_f64[0];
                          dVar104 = local_358.Rotation.ZW.m128d_f64[1];
                          auVar89._8_4_ = local_358.Rotation.ZW.m128d_f64[1]._0_4_;
                          auVar89._0_8_ = dVar104;
                          auVar89._12_4_ = local_358.Rotation.ZW.m128d_f64[1]._4_4_;
                          dVar20 = local_358.Rotation.XY.m128d_f64[0] *
                                   local_148.Rotation.ZW.m128d_f64[1] *
                                   GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
                                   dVar104 * local_148.Rotation.XY.m128d_f64[0] +
                                   local_358.Rotation.XY.m128d_f64[1] *
                                   local_148.Rotation.ZW.m128d_f64[0] *
                                   GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
                                   dVar71 * local_148.Rotation.XY.m128d_f64[1] *
                                   GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
                          dVar21 = local_358.Rotation.XY.m128d_f64[0] *
                                   local_148.Rotation.ZW.m128d_f64[0] *
                                   GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
                                   auVar89._8_8_ * local_148.Rotation.XY.m128d_f64[1] +
                                   local_358.Rotation.XY.m128d_f64[1] *
                                   local_148.Rotation.ZW.m128d_f64[1] *
                                   GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
                                   dVar71 * local_148.Rotation.XY.m128d_f64[0] *
                                   GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
                          local_3f8 = (FScriptContainerElement *)
                                      local_358.Translation.XY.m128d_f64[0];
                          dStack_3f0 = local_358.Translation.XY.m128d_f64[1];
                          local_3c8 = local_148.Translation.ZW.m128d_f64[0];
                          dVar103 = local_358.Rotation.XY.m128d_f64[0] *
                                    local_148.Rotation.XY.m128d_f64[1] *
                                    GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0]
                                    + dVar104 * local_148.Rotation.ZW.m128d_f64[0] +
                                    local_358.Rotation.XY.m128d_f64[1] *
                                    local_148.Rotation.XY.m128d_f64[0] *
                                    GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0]
                                    + dVar71 * local_148.Rotation.ZW.m128d_f64[1] *
                                      GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64
                                      [0];
                          dVar71 = local_358.Rotation.XY.m128d_f64[0] *
                                   local_148.Rotation.XY.m128d_f64[0] *
                                   GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
                                   dVar104 * local_148.Rotation.ZW.m128d_f64[1] +
                                   local_358.Rotation.XY.m128d_f64[1] *
                                   local_148.Rotation.XY.m128d_f64[1] *
                                   GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
                                   dVar71 * local_148.Rotation.ZW.m128d_f64[0] *
                                   GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
                          local_258 = local_148.Translation.XY.m128d_f64[0] +
                                      local_358.Translation.XY.m128d_f64[0];
                          local_3d8 = local_148.Translation.XY.m128d_f64[0];
                          dStack_3d0 = local_148.Translation.XY.m128d_f64[1];
                          dStack_250 = local_148.Translation.XY.m128d_f64[1] +
                                       local_358.Translation.XY.m128d_f64[1];
                          local_248 = local_148.Translation.ZW.m128d_f64[0] +
                                      local_358.Translation.ZW.m128d_f64[0];
                          local_3e8 = (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>
                                       *)local_358.Translation.ZW.m128d_f64[0];
                          local_148.Translation.XY.m128d_f64[1] = dStack_250;
                          local_148.Translation.XY.m128d_f64[0] = local_258;
                          local_148.Translation.ZW.m128d_f64[1] = 0.0;
                          local_148.Translation.ZW.m128d_f64[0] = local_248;
                          local_448 = local_148.Scale3D.XY.m128d_f64[0] +
                                      local_358.Scale3D.XY.m128d_f64[0];
                          local_230 = local_148.Scale3D.ZW.m128d_f64[0];
                          local_240 = local_148.Scale3D.XY.m128d_f64[0];
                          dStack_238 = local_148.Scale3D.XY.m128d_f64[1];
                          local_228 = (FScriptContainerElement *)local_358.Scale3D.XY.m128d_f64[0];
                          dStack_220 = local_358.Scale3D.XY.m128d_f64[1];
                          dStack_440 = local_148.Scale3D.XY.m128d_f64[1] +
                                       local_358.Scale3D.XY.m128d_f64[1];
                          auVar134._0_8_ =
                               local_148.Scale3D.ZW.m128d_f64[0] + local_358.Scale3D.ZW.m128d_f64[0]
                          ;
                          auVar134._8_8_ = local_148.Scale3D.ZW.m128d_f64[1];
                          local_218 = local_358.Scale3D.ZW.m128d_f64[0];
                          local_148.Scale3D.XY.m128d_f64[1] = dStack_440;
                          local_148.Scale3D.XY.m128d_f64[0] = local_448;
                          local_148.Scale3D.ZW.m128d_f64[1] = 0.0;
                          local_148.Scale3D.ZW.m128d_f64[0] = auVar134._0_8_;
                          auVar116._8_4_ = SUB84(dVar71,0);
                          auVar116._0_8_ = dVar103;
                          auVar116._12_4_ = (int)((ulonglong)dVar71 >> 0x20);
                          auVar90._8_4_ = SUB84(dVar21,0);
                          auVar90._0_8_ = dVar20;
                          auVar90._12_4_ = (int)((ulonglong)dVar21 >> 0x20);
                          dVar104 = dVar103 * dVar103 + dVar20 * dVar20;
                          dVar129 = auVar116._8_8_ * dVar71 + auVar90._8_8_ * dVar21;
                          auVar91._8_4_ = SUB84(dVar129,0);
                          auVar91._0_8_ = dVar104;
                          auVar91._12_4_ = (int)((ulonglong)dVar129 >> 0x20);
                          auVar92._0_8_ = auVar91._8_8_ + dVar104;
                          auVar92._8_8_ = dVar104 + dVar129;
                          uVar66 = -(ulonglong)
                                    (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64
                                     [0] <= auVar92._0_8_);
                          uVar69 = -(ulonglong)
                                    (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64
                                     [1] <= auVar92._8_8_);
                          auVar107 = sqrtpd(auVar134,auVar92);
                          uVar68 = -(ulonglong)
                                    (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64
                                     [0] <= auVar92._0_8_);
                          uVar70 = -(ulonglong)
                                    (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64
                                     [1] <= auVar92._8_8_);
                          auVar76 = divpd((undefined1  [16])
                                          GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar107);
                          auVar93._0_8_ = (ulonglong)(auVar76._0_8_ * dVar20) & uVar66;
                          uVar65 = uVar69 & (ulonglong)(auVar76._8_8_ * dVar21);
                          auVar93._8_4_ = (undefined4)uVar65;
                          auVar93._12_4_ = (undefined4)(uVar65 >> 0x20);
                          auVar117._0_4_ = ~(uint)uVar66 & uVar58;
                          auVar117._4_4_ = ~(uint)(uVar66 >> 0x20) & uVar52;
                          auVar117._8_4_ = ~(uint)uVar69 & uVar166;
                          auVar117._12_4_ = ~(uint)(uVar69 >> 0x20) & uVar167;
                          local_148.Rotation.XY.m128d_f64 = (double  [2])(auVar93 | auVar117);
                          auVar76 = divpd((undefined1  [16])
                                          GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar107);
                          auVar118._0_8_ = (ulonglong)(auVar76._0_8_ * dVar103) & uVar68;
                          uVar65 = uVar70 & (ulonglong)(auVar76._8_8_ * dVar71);
                          auVar118._8_4_ = (undefined4)uVar65;
                          auVar118._12_4_ = (undefined4)(uVar65 >> 0x20);
                          auVar140._0_4_ = ~(uint)uVar68 & uVar38;
                          auVar140._4_4_ = ~(uint)(uVar68 >> 0x20) & uVar53;
                          auVar140._8_4_ = ~(uint)uVar70 & uVar164;
                          auVar140._12_4_ = ~(uint)(uVar70 >> 0x20) & uVar165;
                          local_148.Rotation.ZW.m128d_f64 = (double  [2])(auVar118 | auVar140);
                          pTVar64 = local_490;
                          fVar146 = local_520;
                          fVar147 = __real_3f7fff58;
                          local_4e8 = (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>
                                       *)local_358.Translation.ZW.m128d_f64[0];
                          dStack_4e0 = local_358.Translation.ZW.m128d_f64[1];
                          local_4a0 = (FScriptContainerElement *)local_358.Scale3D.XY.m128d_f64[0];
                          dStack_498 = local_358.Scale3D.XY.m128d_f64[1];
                          local_470 = (FScriptContainerElement *)
                                      local_358.Translation.XY.m128d_f64[0];
                          dStack_468 = local_358.Translation.XY.m128d_f64[1];
                          local_438 = auVar134._0_8_;
                        }
                      }
                      else {
                        auVar76 = *(undefined1 (*) [16])(lVar50 + 0x10 + lVar61);
                        pdVar4 = (double *)(lVar50 + 0x40 + lVar61);
                        pdVar5 = (double *)(lVar50 + 0x50 + lVar61);
                        auVar107 = *(undefined1 (*) [16])(lVar50 + 0x20 + lVar61);
                        pdVar6 = (double *)(lVar50 + 0x30 + lVar61);
                        bVar33 = true;
                        fVar147 = *(float *)((longlong)&(local_4e8->AllocatorInstance).Data +
                                            (longlong)local_4a0 * 4);
                        dVar103 = (double)fVar147;
                        dVar71 = (double)fVar147;
                        uVar151 = (undefined4)((ulonglong)dVar71 >> 0x20);
                        dVar20 = (double)fVar147;
                        dVar21 = (double)fVar147;
                        uVar149 = (undefined4)((ulonglong)dVar21 >> 0x20);
                        auVar87._8_4_ = SUB84(dVar71,0);
                        auVar87._0_8_ = dVar103;
                        auVar87._12_4_ = uVar151;
                        auVar114._8_4_ = SUB84(dVar21,0);
                        auVar114._0_8_ = dVar20;
                        auVar114._12_4_ = uVar149;
                        local_148.Rotation.XY.m128d_f64[1] =
                             auVar87._8_8_ * ((double *)(lVar50 + lVar61))[1];
                        local_148.Rotation.XY.m128d_f64[0] = dVar103 * *(double *)(lVar50 + lVar61);
                        auVar88._8_4_ = SUB84(dVar71,0);
                        auVar88._0_8_ = dVar103;
                        auVar88._12_4_ = uVar151;
                        local_148.Rotation.ZW.m128d_f64[1] = auVar114._8_8_ * auVar76._8_8_;
                        local_148.Rotation.ZW.m128d_f64[0] = dVar20 * auVar76._0_8_;
                        auVar115._8_4_ = SUB84(dVar21,0);
                        auVar115._0_8_ = dVar20;
                        auVar115._12_4_ = uVar149;
                        local_148.Translation.ZW.m128d_f64[0] = dVar20 * *pdVar6;
                        local_148.Translation.ZW.m128d_f64[1] = auVar115._8_8_ * pdVar6[1];
                        local_148.Translation.XY.m128d_f64[0] = dVar103 * auVar107._0_8_;
                        local_148.Translation.XY.m128d_f64[1] = auVar88._8_8_ * auVar107._8_8_;
                        dVar71 = dVar71 * pdVar4[1];
                        dVar21 = dVar21 * pdVar5[1];
                        local_148.Scale3D.XY.m128d_f64[1]._0_4_ = SUB84(dVar71,0);
                        local_148.Scale3D.XY.m128d_f64[0] = dVar103 * *pdVar4;
                        local_148.Scale3D.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar71 >> 0x20);
                        local_148.Scale3D.ZW.m128d_f64[1]._0_4_ = SUB84(dVar21,0);
                        local_148.Scale3D.ZW.m128d_f64[0] = dVar20 * *pdVar5;
                        local_148.Scale3D.ZW.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar21 >> 0x20);
                        fVar147 = __real_3f7fff58;
                      }
                    }
                    pFVar43 = local_508;
                    uVar65 = (ulonglong)(uVar59 + 1);
                    uVar67 = uVar67 + 1;
                    pFVar63 = local_518;
                  } while ((longlong)uVar67 < local_460);
                  uVar58 = local_51c;
                  if (__real_3727c5ac < fVar146) {
                    if ((fVar146 < fVar147) && (this->bAdditivePose == false)) {
                      fVar146 = __real_3f800000 - fVar146;
                      uVar38 = (local_500->SourceSkeleton).WeakPtr.ObjectIndex;
                      uVar58 = uVar36;
                      if ((int)uVar38 < (int)local_508->_padding_) {
                        uVar58 = ~uVar38 >> 0x1f;
                      }
                      if ((uVar58 == 0) &&
                         (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar33)) {
                        pcVar12 = (code *)swi(3);
                        uVar34 = (*pcVar12)();
                        return (bool)uVar34;
                      }
                      lVar61 = pFVar43->_padding_;
                      dVar104 = (double)fVar146;
                      dVar129 = (double)fVar146;
                      lVar50 = (longlong)(int)uVar38 * 0x60;
                      dVar25 = (double)fVar146;
                      dVar18 = (double)fVar146;
                      dVar20 = dVar104 * *(double *)(lVar50 + lVar61);
                      dVar21 = dVar129 * ((double *)(lVar50 + lVar61))[1];
                      pdVar4 = (double *)(lVar50 + 0x10 + lVar61);
                      dVar103 = dVar25 * *pdVar4;
                      dVar71 = dVar18 * pdVar4[1];
                      auVar95._8_4_ = SUB84(dVar21,0);
                      auVar95._0_8_ = dVar20;
                      auVar95._12_4_ = (int)((ulonglong)dVar21 >> 0x20);
                      auVar123._8_4_ = SUB84(dVar71,0);
                      auVar123._0_8_ = dVar103;
                      auVar123._12_4_ = (int)((ulonglong)dVar71 >> 0x20);
                      dVar102 = dVar103 * local_148.Rotation.ZW.m128d_f64[0] +
                                dVar20 * local_148.Rotation.XY.m128d_f64[0];
                      dVar128 = auVar123._8_8_ * local_148.Rotation.ZW.m128d_f64[1] +
                                auVar95._8_8_ * local_148.Rotation.XY.m128d_f64[1];
                      auVar96._8_4_ = SUB84(dVar128,0);
                      auVar96._0_8_ = dVar102;
                      auVar96._12_4_ = (int)((ulonglong)dVar128 >> 0x20);
                      uVar67 = -(ulonglong)(0.0 <= auVar96._8_8_ + dVar102);
                      uVar65 = -(ulonglong)(0.0 <= dVar102 + dVar128);
                      uVar38 = (uint)(uVar67 >> 0x20);
                      uVar58 = (uint)(uVar65 >> 0x20);
                      auVar136._0_4_ = ~(uint)uVar67 & SUB84(0.0 - dVar20,0);
                      auVar136._4_4_ = ~uVar38 & (uint)((ulonglong)(0.0 - dVar20) >> 0x20);
                      auVar136._8_4_ = ~(uint)uVar65 & SUB84(0.0 - dVar21,0);
                      auVar136._12_4_ = ~uVar58 & (uint)((ulonglong)(0.0 - dVar21) >> 0x20);
                      auVar124._0_8_ = uVar67 & (ulonglong)dVar20;
                      auVar124._8_4_ = (undefined4)((ulonglong)dVar21 & uVar65);
                      auVar124._12_4_ = (undefined4)(((ulonglong)dVar21 & uVar65) >> 0x20);
                      auVar97._0_4_ = ~(uint)uVar67 & SUB84(0.0 - dVar103,0);
                      auVar97._4_4_ = ~uVar38 & (uint)((ulonglong)(0.0 - dVar103) >> 0x20);
                      auVar97._8_4_ = ~(uint)uVar65 & SUB84(0.0 - dVar71,0);
                      auVar97._12_4_ = ~uVar58 & (uint)((ulonglong)(0.0 - dVar71) >> 0x20);
                      auVar125._8_4_ = SUB84(dVar129,0);
                      auVar125._0_8_ = dVar104;
                      auVar125._12_4_ = (int)((ulonglong)dVar129 >> 0x20);
                      dVar20 = local_148.Rotation.XY.m128d_f64[1] + SUB168(auVar136 | auVar124,8);
                      auVar142._0_8_ = uVar67 & (ulonglong)dVar103;
                      auVar142._8_4_ = (undefined4)(uVar65 & (ulonglong)dVar71);
                      auVar142._12_4_ = (undefined4)((uVar65 & (ulonglong)dVar71) >> 0x20);
                      local_148.Rotation.XY.m128d_f64[1]._0_4_ = SUB84(dVar20,0);
                      local_148.Rotation.XY.m128d_f64[0] =
                           local_148.Rotation.XY.m128d_f64[0] + SUB168(auVar136 | auVar124,0);
                      local_148.Rotation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar20 >> 0x20);
                      dVar20 = local_148.Rotation.ZW.m128d_f64[1] + SUB168(auVar97 | auVar142,8);
                      local_148.Rotation.ZW.m128d_f64[1]._0_4_ = SUB84(dVar20,0);
                      local_148.Rotation.ZW.m128d_f64[0] =
                           local_148.Rotation.ZW.m128d_f64[0] + SUB168(auVar97 | auVar142,0);
                      local_148.Rotation.ZW.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar20 >> 0x20);
                      pdVar4 = (double *)(lVar50 + 0x20 + lVar61);
                      pdVar5 = (double *)(lVar50 + 0x30 + lVar61);
                      auVar126._8_4_ = SUB84(dVar18,0);
                      auVar126._0_8_ = dVar25;
                      auVar126._12_4_ = (int)((ulonglong)dVar18 >> 0x20);
                      local_148.Translation.XY.m128d_f64[1] =
                           local_148.Translation.XY.m128d_f64[1] + auVar125._8_8_ * pdVar4[1];
                      local_148.Translation.XY.m128d_f64[0] =
                           local_148.Translation.XY.m128d_f64[0] + dVar104 * *pdVar4;
                      local_148.Translation.ZW.m128d_f64[1] =
                           local_148.Translation.ZW.m128d_f64[1] + auVar126._8_8_ * pdVar5[1];
                      local_148.Translation.ZW.m128d_f64[0] =
                           local_148.Translation.ZW.m128d_f64[0] + dVar25 * *pdVar5;
                      pdVar4 = (double *)(lVar50 + 0x40 + lVar61);
                      pdVar5 = (double *)(lVar50 + 0x50 + lVar61);
                      local_148.Scale3D.XY.m128d_f64[1] =
                           local_148.Scale3D.XY.m128d_f64[1] + dVar129 * pdVar4[1];
                      local_148.Scale3D.XY.m128d_f64[0] =
                           local_148.Scale3D.XY.m128d_f64[0] + dVar104 * *pdVar4;
                      local_148.Scale3D.ZW.m128d_f64[1] =
                           local_148.Scale3D.ZW.m128d_f64[1] + dVar18 * pdVar5[1];
                      local_148.Scale3D.ZW.m128d_f64[0] =
                           local_148.Scale3D.ZW.m128d_f64[0] + dVar25 * *pdVar5;
                      uVar58 = local_51c;
                    }
                    goto LAB_1475d0f26;
                  }
                }
                pFVar43 = local_508;
                uVar38 = (local_500->SourceSkeleton).WeakPtr.ObjectIndex;
                uVar53 = uVar36;
                if ((int)uVar38 < (int)local_508->_padding_) {
                  uVar53 = ~uVar38 >> 0x1f;
                }
                if ((uVar53 == 0) &&
                   (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar33)) {
                  pcVar12 = (code *)swi(3);
                  uVar34 = (*pcVar12)();
                  return (bool)uVar34;
                }
                lVar61 = pFVar43->_padding_;
                lVar50 = (longlong)(int)uVar38 * 0x60;
                local_148.Rotation.XY.m128d_f64 = *(double (*) [2])(lVar50 + lVar61);
                local_148.Rotation.ZW.m128d_f64 = *(double (*) [2])(lVar50 + 0x10 + lVar61);
                local_148.Translation.XY.m128d_f64 = *(double (*) [2])(lVar50 + 0x20 + lVar61);
                local_148.Translation.ZW.m128d_f64 = *(double (*) [2])(lVar50 + 0x30 + lVar61);
                local_148.Scale3D.XY.m128d_f64 = *(double (*) [2])(lVar50 + 0x40 + lVar61);
                local_148.Scale3D.ZW.m128d_f64 = *(double (*) [2])(lVar50 + 0x50 + lVar61);
              }
LAB_1475d0f26:
              pTVar32 = local_4c0;
              bVar33 = this->bAdditivePose;
              uVar38 = uVar37;
              if ((int)uVar58 < local_4c0->ArrayNum) {
                uVar38 = ~uVar58 >> 0x1f;
              }
              if ((uVar38 == 0) &&
                 (bVar35 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar35)) {
                pcVar12 = (code *)swi(3);
                uVar34 = (*pcVar12)();
                return (bool)uVar34;
              }
              iVar39 = *(int *)((pTVar32->AllocatorInstance).Data + (longlong)local_510 * 8);
              pTVar49 = GetRetargetTransforms(this);
              FVar51 = this->RetargetSource;
              if ((FVar51 == (FName)0x0) && (0 < (this->RetargetSourceAssetReferencePose).ArrayNum))
              {
                pUVar47 = UObjectBaseUtility::GetOutermost((UObjectBaseUtility *)this);
                FVar51 = (FName)pUVar47->_padding_;
              }
              local_458 = FVar51;
              FAnimationRuntime::RetargetBoneTransform
                        (local_478,&local_458,pTVar49,&local_148,iVar39,
                         (FCompactPoseBoneIndex *)local_500,local_4a8,bVar33);
              pFVar46 = local_500;
              dVar20 = local_148.Rotation.XY.m128d_f64[0];
              dVar21 = local_148.Rotation.XY.m128d_f64[1];
              dVar103 = local_148.Rotation.ZW.m128d_f64[0];
              dVar71 = local_148.Rotation.ZW.m128d_f64[1];
              uVar38 = (local_500->SourceSkeleton).WeakPtr.ObjectIndex;
              dVar104 = local_148.Translation.XY.m128d_f64[0];
              dVar129 = local_148.Translation.XY.m128d_f64[1];
              dVar25 = local_148.Translation.ZW.m128d_f64[0];
              dVar18 = local_148.Translation.ZW.m128d_f64[1];
              dVar102 = local_148.Scale3D.XY.m128d_f64[0];
              dVar128 = local_148.Scale3D.XY.m128d_f64[1];
              dVar26 = local_148.Scale3D.ZW.m128d_f64[0];
              dVar27 = local_148.Scale3D.ZW.m128d_f64[1];
              uVar53 = uVar37;
              if ((int)uVar38 < (int)pFVar43->_padding_) {
                uVar53 = ~uVar38 >> 0x1f;
              }
              if ((uVar53 == 0) &&
                 (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar33)) {
                pcVar12 = (code *)swi(3);
                uVar34 = (*pcVar12)();
                return (bool)uVar34;
              }
              lVar61 = pFVar43->_padding_;
              lVar50 = (longlong)(int)uVar38 * 0x60;
              *(double *)(lVar50 + lVar61) = dVar20;
              ((double *)(lVar50 + lVar61))[1] = dVar21;
              pdVar4 = (double *)(lVar50 + 0x10 + lVar61);
              *pdVar4 = dVar103;
              pdVar4[1] = dVar71;
              pdVar4 = (double *)(lVar50 + 0x20 + lVar61);
              *pdVar4 = dVar104;
              pdVar4[1] = dVar129;
              pdVar4 = (double *)(lVar50 + 0x30 + lVar61);
              *pdVar4 = dVar25;
              pdVar4[1] = dVar18;
              pdVar4 = (double *)(lVar50 + 0x40 + lVar61);
              *pdVar4 = dVar102;
              pdVar4[1] = dVar128;
              pdVar4 = (double *)(lVar50 + 0x50 + lVar61);
              *pdVar4 = dVar26;
              pdVar4[1] = dVar27;
              uVar38 = (pFVar46->SourceSkeleton).WeakPtr.ObjectIndex;
              uVar53 = uVar37;
              if ((int)uVar38 < (int)pFVar43->_padding_) {
                uVar53 = ~uVar38 >> 0x1f;
              }
              if ((uVar53 == 0) &&
                 (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar33)) {
                pcVar12 = (code *)swi(3);
                uVar34 = (*pcVar12)();
                return (bool)uVar34;
              }
              lVar61 = pFVar43->_padding_;
              lVar50 = (longlong)(int)uVar38 * 0x60;
              dVar20 = *(double *)(lVar50 + lVar61);
              dVar21 = ((double *)(lVar50 + lVar61))[1];
              pdVar4 = (double *)(lVar50 + 0x10 + lVar61);
              dVar103 = *pdVar4;
              dVar71 = pdVar4[1];
              auVar127._0_8_ = dVar103 * dVar103 + dVar20 * dVar20;
              auVar127._8_8_ = dVar71 * dVar71 + dVar21 * dVar21;
              auVar98._8_4_ = SUB84(auVar127._8_8_,0);
              auVar98._0_8_ = auVar127._0_8_;
              auVar98._12_4_ = (int)((ulonglong)auVar127._8_8_ >> 0x20);
              auVar99._0_8_ = auVar98._8_8_ + auVar127._0_8_;
              auVar99._8_8_ = auVar127._0_8_ + auVar127._8_8_;
              auVar107 = sqrtpd(auVar127,auVar99);
              uVar65 = -(ulonglong)
                        (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0] <=
                        auVar99._0_8_);
              uVar68 = -(ulonglong)
                        (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[1] <=
                        auVar99._8_8_);
              uVar66 = -(ulonglong)
                        (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[0] <=
                        auVar99._0_8_);
              uVar69 = -(ulonglong)
                        (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[1] <=
                        auVar99._8_8_);
              auVar76 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,
                              auVar107);
              auVar107 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,
                               auVar107);
              auVar100._0_8_ = uVar66 & (ulonglong)(auVar76._0_8_ * dVar20);
              uVar67 = uVar69 & (ulonglong)(auVar76._8_8_ * dVar21);
              auVar100._8_4_ = (undefined4)uVar67;
              auVar100._12_4_ = (undefined4)(uVar67 >> 0x20);
              auVar143._0_8_ = uVar65 & (ulonglong)(auVar107._0_8_ * dVar103);
              uVar67 = uVar68 & (ulonglong)(auVar107._8_8_ * dVar71);
              auVar143._8_4_ = (undefined4)uVar67;
              auVar143._12_4_ = (undefined4)(uVar67 >> 0x20);
              auVar16._4_4_ =
                   ~(uint)(uVar66 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._4_4_
              ;
              auVar16._0_4_ =
                   ~(uint)uVar66 & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._0_4_;
              auVar16._8_4_ =
                   ~(uint)uVar69 & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._0_4_;
              auVar16._12_4_ =
                   ~(uint)(uVar69 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._4_4_
              ;
              auVar137._0_4_ =
                   ~(uint)uVar65 & GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._0_4_;
              auVar137._4_4_ =
                   ~(uint)(uVar65 >> 0x20) & GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._4_4_
              ;
              auVar137._8_4_ =
                   ~(uint)uVar68 & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._0_4_;
              auVar137._12_4_ =
                   ~(uint)(uVar68 >> 0x20) & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._4_4_
              ;
              *(undefined1 (*) [16])(lVar50 + lVar61) = auVar100 | auVar16;
              *(undefined1 (*) [16])(lVar50 + 0x10 + lVar61) = auVar143 | auVar137;
              pFVar63 = local_518;
              fVar147 = __real_3f7fff58;
            }
LAB_1475d1182:
            local_51c = uVar58 + 1;
            uVar67 = (ulonglong)local_51c;
            local_510 = (FBlendedCurve *)((longlong)local_510 + 1);
            local_518 = pFVar63 + 0x10;
          } while ((longlong)local_510 < local_4b8);
        }
LAB_1475d11b6:
        bVar33 = true;
        goto LAB_1475cef3c;
      }
    }
  }
  bVar33 = false;
LAB_1475cef3c:
  if ((local_480 & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((local_480 & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((local_480 & 4) != 0) {
    FThreadStats::AddMessage(local_488,CycleScopeEnd);
  }
  return bVar33;
}

// GetAnimationPose @ 1475d11d0

bool __thiscall
UPoseAsset::GetAnimationPose
          (UPoseAsset *this,FCompactPose *param_1,FBlendedCurve *param_2,
          FAnimExtractContext *param_3)

{
  bool bVar1;
  FAnimationPoseData local_68;
  TArray<int,TSizedDefaultAllocator<32>_> *local_48;
  undefined8 local_40;
  TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *local_38;
  undefined8 local_30;
  TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_> *local_28;
  undefined8 local_20;
  void *local_18;
  undefined8 local_10;
  
  local_48 = (TArray<int,TSizedDefaultAllocator<32>_> *)0x0;
  local_40 = 0;
  local_38 = (TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *)0x0;
  local_30 = 0;
  local_28 = (TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_>
              *)0x0;
  local_20 = 0;
  local_18 = (void *)0x0;
  local_10 = 0;
  FAnimationPoseData::FAnimationPoseData
            (&local_68,param_1,param_2,(FStackAttributeContainer *)&local_48);
  bVar1 = GetAnimationPose(this,&local_68,param_3);
  if (local_18 != (void *)0x0) {
    FMemory::Free(local_18);
  }
  DestructItems<TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_>,int>
            (local_28,(int)local_20);
  if (local_28 !=
      (TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_> *)0x0
     ) {
    FMemory::Free(local_28);
  }
  DestructItems<TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_>,int>
            (local_38,(int)local_30);
  if (local_38 != (TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *)0x0) {
    FMemory::Free(local_38);
  }
  DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>(local_48,(int)local_40);
  if (local_48 != (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
    FMemory::Free(local_48);
  }
  return bVar1;
}

// GetAssetRegistryTags @ 1475d1ac0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UPoseAsset::GetAssetRegistryTags
          (UPoseAsset *this,TArray<UObject::FAssetRegistryTag,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  ForElementType<UObject_const_*> *pFVar3;
  longlong *plVar4;
  code *pcVar5;
  uchar *puVar6;
  bool bVar7;
  int iVar8;
  FAssetRegistryTagsContext *pFVar9;
  byte bVar10;
  ForElementType<UObject_const_*> *pFVar11;
  longlong lVar12;
  longlong lVar13;
  FScriptContainerElement *pFVar14;
  ulonglong uVar15;
  uint uVar16;
  uint *puVar17;
  uint uVar18;
  undefined1 auStackY_1d8 [32];
  undefined1 auStack_188 [8];
  UPoseAsset *pUStack_180;
  int iStack_178;
  int iStack_174;
  ForElementType<UObject_const_*> FStack_170;
  longlong *plStack_168;
  int iStack_160;
  uint uStack_15c;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_158;
  undefined4 uStack_150;
  uint uStack_14c;
  int iStack_148;
  undefined4 uStack_144;
  int iStack_140;
  undefined4 uStack_13c;
  longlong *plStack_138;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_130;
  undefined8 uStack_110;
  FAssetRegistryTagsContext FStack_108;
  FString aFStack_100 [2];
  undefined4 uStack_d4;
  undefined1 auStack_c8 [32];
  uint *puStack_a8;
  uint uStack_a0;
  int iStack_94;
  void *pvStack_88;
  undefined4 uStack_80;
  FAssetBundleData *pFStack_68;
  bool bStack_53;
  ulonglong uStack_48;
  
  uStack_48 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  lVar13 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  pFVar3 = (ForElementType<UObject_const_*> *)(lVar13 + 0xcb8);
  pFVar11 = *(ForElementType<UObject_const_*> **)(lVar13 + 0xcc8);
  if (*(ForElementType<UObject_const_*> **)(lVar13 + 0xcc8) ==
      (ForElementType<UObject_const_*> *)0x0) {
    pFVar11 = pFVar3;
  }
  puVar6 = pFVar11->InlineData;
  for (; pFVar11 !=
         (ForElementType<UObject_const_*> *)(puVar6 + (longlong)*(int *)(lVar13 + 0xcd0) * 8);
      pFVar11 = (ForElementType<UObject_const_*> *)(pFVar11->InlineData + 8)) {
    if (*(UPoseAsset **)pFVar11->InlineData == this) {
      return;
    }
  }
  FStack_170 = (ForElementType<UObject_const_*>)this;
  FAssetRegistryTagsContextData::FAssetRegistryTagsContextData
            ((FAssetRegistryTagsContextData *)auStack_c8,(UObject *)this,Uncategorized);
  bStack_53 = *(longlong *)(lVar13 + 0xcb0) != 0;
  pFVar11 = *(ForElementType<UObject_const_*> **)(lVar13 + 0xcc8);
  if (*(ForElementType<UObject_const_*> **)(lVar13 + 0xcc8) ==
      (ForElementType<UObject_const_*> *)0x0) {
    pFVar11 = pFVar3;
  }
  pUStack_180 = this;
  if (((pFVar11 <= (ForElementType<UObject_const_*> *)&pUStack_180) &&
      (&pUStack_180 < pFVar11->InlineData + (longlong)*(int *)(lVar13 + 0xcd4) * 8)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar8 = *(int *)(lVar13 + 0xcd0);
  if (iVar8 == *(int *)(lVar13 + 0xcd4)) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<UObject_const_*>_>
                      (0x808,pFVar3,(int *)(lVar13 + 0xcd4));
  }
  *(int *)(lVar13 + 0xcd0) = iVar8 + 1;
  pFVar11 = *(ForElementType<UObject_const_*> **)(lVar13 + 0xcc8);
  if (*(ForElementType<UObject_const_*> **)(lVar13 + 0xcc8) ==
      (ForElementType<UObject_const_*> *)0x0) {
    pFVar11 = pFVar3;
  }
  *(UPoseAsset **)(pFVar11->InlineData + (longlong)iVar8 * 8) = pUStack_180;
  pcVar5 = *(code **)(this->_padding_ + 0x1b8);
  pFVar9 = FAssetRegistryTagsContext::FAssetRegistryTagsContext
                     (&FStack_108,(FAssetRegistryTagsContextData *)auStack_c8);
  (*pcVar5)(this,pFVar9);
  lVar13 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar8 = *(int *)(lVar13 + 0xcd0);
  if (iVar8 != 0) {
    uVar16 = 0;
    if ((int)(iVar8 - 1U) < iVar8) {
      uVar16 = ~(iVar8 - 1U) >> 0x1f;
    }
    if ((uVar16 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    lVar12 = *(longlong *)(lVar13 + 0xcc8);
    if (*(longlong *)(lVar13 + 0xcc8) == 0) {
      lVar12 = lVar13 + 0xcb8;
    }
    if (*(UPoseAsset **)(lVar12 + -8 + (longlong)*(int *)(lVar13 + 0xcd0) * 8) == this)
    goto LAB_1420f919b;
  }
  bVar7 = ::FDebug::CheckVerifyFailedImpl2
                    ("!GAssetRegistryTagsObjectsBeingForwarded.IsEmpty() && GAssetRegistryTagsObjectsBeingForwarded.Last() == this"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Obj.cpp"
                     ,0x966,L"");
  if (bVar7) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
LAB_1420f919b:
  TArray<UObject_const_*,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>::Pop
            ((TArray<UObject_const_*,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_> *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xcb8
             ),No);
  uVar16 = (auStack_c8._8_4_ - iStack_94) + param_1->ArrayNum;
  if ((int)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar16);
  }
  piVar1 = &param_1->ArrayMax;
  if (*piVar1 < (int)uVar16) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,uVar16,&param_1->AllocatorInstance,param_1->ArrayNum,piVar1);
  }
  uVar16 = uStack_a0;
  iStack_160 = 0;
  iStack_148 = 0;
  uStack_15c = 1;
  uStack_14c = 0;
  if (uStack_a0 != 0) {
    puVar17 = (uint *)(auStack_c8 + 0x10);
    if (puStack_a8 != (uint *)0x0) {
      puVar17 = puStack_a8;
    }
    uVar18 = *puVar17;
    while (uVar18 == 0) {
      lVar13 = (longlong)iStack_160;
      iStack_148 = iStack_148 + 0x20;
      iStack_160 = iStack_160 + 1;
      uStack_14c = uStack_a0;
      if ((int)((uStack_a0 - 1) + ((int)(uStack_a0 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_160)
      goto LAB_1420f9291;
      uVar18 = puVar17[lVar13 + 1];
    }
    uStack_15c = -uVar18 & uVar18;
    uVar15 = (ulonglong)uStack_15c * 2 + 1;
    lVar13 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    iStack_178 = (int)lVar13;
    uStack_14c = iStack_178 + -1 + iStack_148;
    if ((int)uStack_a0 < (int)uStack_14c) {
      uStack_14c = uStack_a0;
    }
  }
LAB_1420f9291:
  iStack_140 = auStack_c8._8_4_ - iStack_94;
  plStack_168 = (longlong *)auStack_c8;
  pTStack_158 = (TBitArray<FDefaultBitArrayAllocator> *)(auStack_c8 + 0x10);
  uStack_150 = 0xffffffff;
  TStack_130.CurrentBitIndex = uStack_14c;
  TStack_130.UnvisitedBitMask = 0xffffffff;
  uVar18 = uStack_a0 & 0xffffffe0;
  TStack_130._padding_ = CONCAT44(uStack_15c,iStack_160);
  uStack_144 = uStack_d4;
  iVar8 = (int)uStack_a0 >> 5;
  TStack_130._28_4_ = uStack_d4;
  TStack_130.BaseBitIndex = iStack_148;
  uStack_110 = CONCAT44(uStack_13c,iStack_140);
  bVar10 = (byte)uStack_a0;
  plStack_138 = plStack_168;
  TStack_130.Array = pTStack_158;
  if (((int)uStack_a0 < 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (uVar16 != uStack_a0) {
    puVar17 = (uint *)(auStack_c8 + 0x10);
    if (puStack_a8 != (uint *)0x0) {
      puVar17 = puStack_a8;
    }
    uVar16 = -1 << (bVar10 & 0x1f) & puVar17[iVar8];
    while (uVar16 == 0) {
      lVar13 = (longlong)iVar8;
      uVar18 = uVar18 + 0x20;
      iVar8 = iVar8 + 1;
      uVar16 = uStack_a0;
      if ((int)((uStack_a0 - 1) + ((int)(uStack_a0 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar8)
      goto LAB_1420f9392;
      uVar16 = puVar17[lVar13 + 1];
    }
    uVar15 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
    lVar13 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    iStack_174 = (int)lVar13;
    uVar16 = iStack_174 + -1 + uVar18;
    if ((int)uStack_a0 < (int)uVar16) {
      uVar16 = uStack_a0;
    }
  }
LAB_1420f9392:
  while( true ) {
    plVar4 = plStack_138;
    if ((int)plStack_138[1] - *(int *)((longlong)plStack_138 + 0x34) != (int)uStack_110) {
      auStack_188[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FName,UObject::FAssetRegistryTag>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(auStack_188);
    }
    if (((TStack_130.CurrentBitIndex == uVar16) &&
        (TStack_130.Array == (TBitArray<FDefaultBitArrayAllocator> *)(auStack_c8 + 0x10))) &&
       (plVar4 == (longlong *)auStack_c8)) break;
    pFVar14 = (param_1->AllocatorInstance).Data;
    lVar13 = (longlong)TStack_130.CurrentBitIndex * 0x30 + *plVar4;
    pFVar2 = (FScriptContainerElement *)(lVar13 + 8);
    if (((pFVar14 <= pFVar2) && (pFVar2 < pFVar14 + (longlong)*piVar1 * 0x20)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar8 = param_1->ArrayNum;
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x820,&param_1->AllocatorInstance,piVar1);
    }
    param_1->ArrayNum = iVar8 + 1;
    pFVar14 = (param_1->AllocatorInstance).Data + (longlong)iVar8 * 0x20;
    *(undefined8 *)pFVar14 = *(undefined8 *)pFVar2;
    *(undefined8 *)(pFVar14 + 8) = 0;
    *(undefined8 *)(pFVar14 + 8) = *(undefined8 *)(lVar13 + 0x10);
    *(undefined8 *)(lVar13 + 0x10) = 0;
    *(undefined4 *)(pFVar14 + 0x10) = *(undefined4 *)(lVar13 + 0x18);
    *(undefined4 *)(pFVar14 + 0x14) = *(undefined4 *)(lVar13 + 0x1c);
    *(undefined8 *)(lVar13 + 0x18) = 0;
    *(undefined4 *)(pFVar14 + 0x18) = *(undefined4 *)(lVar13 + 0x20);
    *(undefined4 *)(pFVar14 + 0x1c) = *(undefined4 *)(lVar13 + 0x24);
    TStack_130.UnvisitedBitMask = TStack_130.UnvisitedBitMask & ~TStack_130._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_130);
  }
  uVar15 = (ulonglong)_tls_index;
  plVar4 = *(longlong **)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar15 * 8) + 0xcb0);
  if (plVar4 != (longlong *)0x0) {
    if (*plVar4 != 0) {
      UObjectBaseUtility::GetPathName((UObjectBaseUtility *)FStack_170,aFStack_100,(UObject *)0x0);
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("*TLegacyGetAssetRegistryTags_OutBundles == nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Obj.cpp"
                         ,0x970,L"Object %s has more than one FAssetBundleData!");
      if (aFStack_100[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(aFStack_100[0].Data.AllocatorInstance.Data);
      }
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    **(undefined8 **)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar15 * 8) + 0xcb0) =
         pFStack_68;
  }
  uStack_80 = 0;
  if (pvStack_88 != (void *)0x0) {
    FMemory::Free(pvStack_88);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,UObject::FAssetRegistryTag>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,UObject::FAssetRegistryTag>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,UObject::FAssetRegistryTag>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)auStack_c8);
  return;
}

// GetAssetRegistryTags @ 1475d1ad0

void __thiscall UPoseAsset::GetAssetRegistryTags(UPoseAsset *this,FAssetRegistryTagsContext param_1)

{
  FAssetRegistryTagsContext FVar1;
  FName *pFVar2;
  FName local_res8;
  FString local_38;
  FAssetRegistryTag local_28;
  
  FVar1.Data = (FAssetRegistryTagsContextData *)
               FAssetRegistryTagsContext::FAssetRegistryTagsContext
                         ((FAssetRegistryTagsContext *)&local_res8,param_1.Data);
  UObject::GetAssetRegistryTags((UObject *)this,FVar1);
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  ::FString::AppendInt(&local_38,(this->PoseContainer).Poses.ArrayNum);
  pFVar2 = ::FName::FName(&local_res8,"Poses");
  local_28.Name = *pFVar2;
  local_28.Value.Data.AllocatorInstance.Data = local_38.Data.AllocatorInstance.Data;
  local_28.Value.Data.ArrayNum = local_38.Data.ArrayNum;
  local_28.Value.Data.ArrayMax = local_38.Data.ArrayMax;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Type = TT_Numerical;
  local_28.DisplayFlags = 0;
  FAssetRegistryTagsContext::AddTag((FAssetRegistryTagsContext *)param_1.Data,&local_28);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return;
}

// GetBaseAnimationPose @ 1475d1f10

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall UPoseAsset::GetBaseAnimationPose(UPoseAsset *this,FAnimationPoseData *param_1)

{
  TArray<FBoneIndices,TSizedDefaultAllocator<32>_> *this_00;
  FPoseDataContainer *pFVar1;
  FScriptContainerElement *pFVar2;
  double *pdVar3;
  int iVar4;
  FBoneContainer *pFVar5;
  longlong lVar6;
  FCurveFilter *pFVar7;
  code *pcVar8;
  double dVar9;
  FSkeletonRemappingRegistry *this_01;
  bool bVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  FBaseCompactPose<TMemStackAllocator<0>_> *this_02;
  FTlsAutoCleanup *pFVar14;
  USkeleton *pUVar15;
  FSkeletonRemapping *this_03;
  FScriptContainerElement *pFVar16;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTVar17;
  UPackage *pUVar18;
  FName FVar19;
  undefined4 uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  uint uVar23;
  uint uVar24;
  longlong lVar25;
  TTransform<double> *pTVar26;
  ulonglong uVar27;
  undefined1 local_res8 [8];
  FName local_80;
  USkeleton *local_78;
  TBaseBlendedCurve<TMemStackAllocator<0>,UE::Anim::FCurveElement> *local_70;
  code *local_68;
  undefined1 *local_60;
  <lambda_2> local_58;
  <lambda_2> local_48;
  
  this_02 = (FBaseCompactPose<TMemStackAllocator<0>_> *)FAnimationPoseData::GetPose(param_1);
  if (((this->bAdditivePose == false) || (this->BasePoseIndex < 0)) ||
     ((this->PoseContainer).Poses.ArrayNum <= this->BasePoseIndex)) {
    FBaseCompactPose<TMemStackAllocator<0>_>::ResetToRefPose(this_02,this_02->BoneContainer);
  }
  else {
    local_70 = (TBaseBlendedCurve<TMemStackAllocator<0>,UE::Anim::FCurveElement> *)
               FAnimationPoseData::GetCurve(param_1);
    pFVar5 = this_02->BoneContainer;
    local_78 = (USkeleton *)this->_padding_;
    FBaseCompactPose<TMemStackAllocator<0>_>::ResetToRefPose(this_02,pFVar5);
    local_60 = local_res8;
    local_68 = UE::Core::Private::Function::
               TFunctionRefCaller<`TThreadSingleton<FPoseAssetEvalData>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
               ::Call;
    pFVar14 = FThreadSingletonInitializer::Get
                        ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_68,
                         &`private:_static_unsigned_int&___ptr64___cdecl_TThreadSingleton<FPoseAssetEvalData>::GetTlsSlot(void)'
                          ::__l2::TlsSlot);
    iVar4 = (this->PoseContainer).Tracks.ArrayNum;
    lVar25 = (longlong)iVar4;
    this_00 = (TArray<FBoneIndices,TSizedDefaultAllocator<32>_> *)(pFVar14 + 2);
    TArray<FBoneIndices,TSizedDefaultAllocator<32>_>::SetNumUninitialized(this_00,iVar4,No);
    if ((UE::Anim::GSkeletonRemappingRegistry == (FSkeletonRemappingRegistry *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("GSkeletonRemappingRegistry",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\SkeletonRemappingRegistry.cpp"
                            ,0x32,
                            L"Skeleton remapping registry is not instanced. It is only valid to access this while the engine module is loaded."
                           ), bVar10)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    this_01 = UE::Anim::GSkeletonRemappingRegistry;
    pUVar15 = (USkeleton *)FWeakObjectPtr::Get(&(pFVar5->AssetSkeleton).WeakPtr);
    this_03 = UE::Anim::FSkeletonRemappingRegistry::GetRemapping
                        (this_01,(USkeleton *)this->_padding_,pUVar15);
    uVar22 = 0;
    uVar13 = 0;
    uVar21 = uVar22;
    uVar27 = uVar22;
    if (0 < iVar4) {
      do {
        bVar10 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)this_03);
        uVar24 = (uint)uVar21;
        if ((bVar10) &&
           (bVar10 = FWeakObjectPtr::IsValid(&(this_03->TargetSkeleton).WeakPtr), bVar10)) {
          uVar23 = ~uVar24 >> 0x1f;
          uVar11 = uVar13;
          if ((int)uVar24 < (this->PoseContainer).TrackBoneIndices.ArrayNum) {
            uVar11 = uVar23;
          }
          if ((uVar11 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          uVar11 = FSkeletonRemapping::GetTargetSkeletonBoneIndex
                             (this_03,*(int *)((this->PoseContainer).TrackBoneIndices.
                                               AllocatorInstance.Data + uVar27 * 4));
        }
        else {
          uVar23 = ~uVar24 >> 0x1f;
          uVar11 = uVar13;
          if ((int)uVar24 < (this->PoseContainer).TrackBoneIndices.ArrayNum) {
            uVar11 = uVar23;
          }
          if ((uVar11 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          uVar11 = *(uint *)((this->PoseContainer).TrackBoneIndices.AllocatorInstance.Data +
                            uVar27 * 4);
        }
        if (((int)uVar11 < 0) || ((pFVar5->SkeletonToCompactPose).ArrayNum <= (int)uVar11)) {
          bVar10 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<8192494858347217512>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\BoneContainer.h"
                              ,0x268,"SkeletonToCompactPose.IsValidIndex(SkeletonIndex)");
          if (bVar10) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          uVar20 = 0xffffffff;
        }
        else {
          uVar12 = uVar13;
          if ((int)uVar11 < (pFVar5->SkeletonToCompactPose).ArrayNum) {
            uVar12 = ~uVar11 >> 0x1f;
          }
          if ((uVar12 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          uVar20 = *(undefined4 *)
                    ((pFVar5->SkeletonToCompactPose).AllocatorInstance.Data +
                    (longlong)(int)uVar11 * 4);
        }
        uVar12 = uVar13;
        if ((int)uVar24 < *(int *)(pFVar14 + 3)) {
          uVar12 = uVar23;
        }
        if ((uVar12 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        *(uint *)((this_00->AllocatorInstance).Data + uVar27 * 8) = uVar11;
        uVar11 = uVar13;
        if ((int)uVar24 < *(int *)(pFVar14 + 3)) {
          uVar11 = uVar23;
        }
        if ((uVar11 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        *(undefined4 *)((this_00->AllocatorInstance).Data + uVar27 * 8 + 4) = uVar20;
        uVar27 = uVar27 + 1;
        uVar21 = (ulonglong)(uVar24 + 1);
      } while ((longlong)uVar27 < lVar25);
    }
    uVar24 = this->BasePoseIndex;
    if ((int)uVar24 < (this->PoseContainer).Poses.ArrayNum) {
      uVar13 = ~uVar24 >> 0x1f;
    }
    if ((uVar13 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    pFVar16 = (this->PoseContainer).Poses.AllocatorInstance.Data + (longlong)(int)uVar24 * 0x20;
    uVar21 = uVar22;
    uVar27 = uVar22;
    if (0 < lVar25) {
      do {
        uVar24 = (uint)uVar21;
        uVar13 = 0;
        if ((int)uVar24 < *(int *)(pFVar14 + 3)) {
          uVar13 = ~uVar24 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pFVar2 = (this_00->AllocatorInstance).Data + uVar22 * 8;
        uVar13 = *(uint *)(pFVar2 + 4);
        if (uVar13 != 0xffffffff) {
          uVar11 = 0;
          if ((int)uVar13 < (int)this_02->_padding_) {
            uVar11 = ~uVar13 >> 0x1f;
          }
          if ((uVar11 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          pTVar26 = (TTransform<double> *)((longlong)(int)uVar13 * 0x60 + this_02->_padding_);
          uVar13 = 0;
          if ((int)uVar24 < *(int *)(pFVar16 + 8)) {
            uVar13 = ~uVar24 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          lVar6 = *(longlong *)pFVar16;
          dVar9 = ((double *)(lVar6 + uVar27))[1];
          (pTVar26->Rotation).XY.m128d_f64[0] = *(double *)(lVar6 + uVar27);
          (pTVar26->Rotation).XY.m128d_f64[1] = dVar9;
          pdVar3 = (double *)(lVar6 + 0x10 + uVar27);
          dVar9 = pdVar3[1];
          (pTVar26->Rotation).ZW.m128d_f64[0] = *pdVar3;
          (pTVar26->Rotation).ZW.m128d_f64[1] = dVar9;
          pdVar3 = (double *)(lVar6 + 0x20 + uVar27);
          dVar9 = pdVar3[1];
          (pTVar26->Translation).XY.m128d_f64[0] = *pdVar3;
          (pTVar26->Translation).XY.m128d_f64[1] = dVar9;
          pdVar3 = (double *)(lVar6 + 0x30 + uVar27);
          dVar9 = pdVar3[1];
          (pTVar26->Translation).ZW.m128d_f64[0] = *pdVar3;
          (pTVar26->Translation).ZW.m128d_f64[1] = dVar9;
          pdVar3 = (double *)(lVar6 + 0x40 + uVar27);
          dVar9 = pdVar3[1];
          (pTVar26->Scale3D).XY.m128d_f64[0] = *pdVar3;
          (pTVar26->Scale3D).XY.m128d_f64[1] = dVar9;
          pdVar3 = (double *)(lVar6 + 0x50 + uVar27);
          dVar9 = pdVar3[1];
          (pTVar26->Scale3D).ZW.m128d_f64[0] = *pdVar3;
          (pTVar26->Scale3D).ZW.m128d_f64[1] = dVar9;
          iVar4 = *(int *)pFVar2;
          pTVar17 = GetRetargetTransforms(this);
          FVar19 = this->RetargetSource;
          if ((FVar19 == (FName)0x0) && (0 < (this->RetargetSourceAssetReferencePose).ArrayNum)) {
            pUVar18 = UObjectBaseUtility::GetOutermost((UObjectBaseUtility *)this);
            FVar19 = (FName)pUVar18->_padding_;
          }
          local_80 = FVar19;
          FAnimationRuntime::RetargetBoneTransform
                    (local_78,&local_80,pTVar17,pTVar26,iVar4,(FCompactPoseBoneIndex *)(pFVar2 + 4),
                     pFVar5,false);
        }
        uVar22 = uVar22 + 1;
        uVar21 = (ulonglong)(uVar24 + 1);
        uVar27 = uVar27 + 0x60;
      } while ((longlong)uVar22 < lVar25);
    }
    uVar13 = this->BasePoseIndex;
    pFVar1 = &this->PoseContainer;
    uVar24 = 0;
    if ((int)uVar13 < (this->PoseContainer).Poses.ArrayNum) {
      uVar24 = ~uVar13 >> 0x1f;
    }
    if ((uVar24 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    pFVar16 = (this->PoseContainer).Poses.AllocatorInstance.Data + (longlong)(int)uVar13 * 0x20;
    if (pFVar16 != (FScriptContainerElement *)0x0) {
      local_58.CurveValues = (TArray<float,TSizedDefaultAllocator<32>_> *)(pFVar16 + 0x10);
      pFVar7 = local_70->Filter;
      iVar4 = *(int *)(pFVar16 + 0x18);
      *(undefined1 *)&local_70->_padding_ = 1;
      if (((pFVar7 != (FCurveFilter *)0x0) && (pFVar7->FilterMode != None)) &&
         ((pFVar7->FilterMode != DisallowFiltered || ((int)pFVar7->_padding_ != 0)))) {
        local_58.__this = pFVar1;
        UE::Anim::FCurveUtils::
        BuildSortedFiltered<_FPoseDataContainer::GetPoseCurve_::__l5::<lambda_1>,_FPoseDataContainer::GetPoseCurve_::__l5::<lambda_2>,TMemStackAllocator<0>,UE::Anim::FCurveElement>
                  (local_70,iVar4,(<lambda_1>)pFVar1,&local_58,pFVar7);
        return;
      }
      local_48.__this = pFVar1;
      local_48.CurveValues = local_58.CurveValues;
      UE::Anim::FCurveUtils::
      BuildLinearUnfiltered<_FPoseDataContainer::GetPoseCurve_::__l5::<lambda_1>,_FPoseDataContainer::GetPoseCurve_::__l5::<lambda_2>,TMemStackAllocator<0>,UE::Anim::FCurveElement>
                (local_70,iVar4,(<lambda_1>)pFVar1,&local_48);
      return;
    }
  }
  return;
}

// GetBaseAnimationPose @ 1475d2650

void __thiscall
UPoseAsset::GetBaseAnimationPose(UPoseAsset *this,FCompactPose *param_1,FBlendedCurve *param_2)

{
  FAnimationPoseData local_68;
  TArray<int,TSizedDefaultAllocator<32>_> *local_48;
  undefined8 local_40;
  TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *local_38;
  undefined8 local_30;
  TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_> *local_28;
  undefined8 local_20;
  void *local_18;
  undefined8 local_10;
  
  local_48 = (TArray<int,TSizedDefaultAllocator<32>_> *)0x0;
  local_40 = 0;
  local_38 = (TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *)0x0;
  local_30 = 0;
  local_28 = (TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_>
              *)0x0;
  local_20 = 0;
  local_18 = (void *)0x0;
  local_10 = 0;
  FAnimationPoseData::FAnimationPoseData
            (&local_68,param_1,param_2,(FStackAttributeContainer *)&local_48);
  GetBaseAnimationPose(this,&local_68);
  if (local_18 != (void *)0x0) {
    FMemory::Free(local_18);
  }
  DestructItems<TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_>,int>
            (local_28,(int)local_20);
  if (local_28 !=
      (TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_> *)0x0
     ) {
    FMemory::Free(local_28);
  }
  DestructItems<TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_>,int>
            (local_38,(int)local_30);
  if (local_38 != (TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *)0x0) {
    FMemory::Free(local_38);
  }
  DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>(local_48,(int)local_40);
  if (local_48 != (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
    FMemory::Free(local_48);
  }
  return;
}

// GetCurveData @ 1475d37e0

TArray<FAnimCurveBase,TSizedDefaultAllocator<32>_> * __thiscall
UPoseAsset::GetCurveData(UPoseAsset *this)

{
  return &(this->PoseContainer).Curves;
}

// GetCurveFNames @ 1475d37f0

TArray<FName,TSizedDefaultAllocator<32>_> * __thiscall
UPoseAsset::GetCurveFNames
          (UPoseAsset *this,TArray<FName,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar6;
  uint uVar7;
  longlong lVar8;
  undefined8 local_18 [2];
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  uVar7 = 0;
  iVar5 = (this->PoseContainer).Curves.ArrayNum;
  if (0 < iVar5) {
    lVar8 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar7 < iVar5) {
        uVar4 = ~uVar7 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        pTVar6 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
        return pTVar6;
      }
      local_18[0] = *(undefined8 *)((this->PoseContainer).Curves.AllocatorInstance.Data + lVar8);
      pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data;
      if (((pFVar1 <= (FScriptContainerElement *)local_18) &&
          ((FScriptContainerElement *)local_18 <
           pFVar1 + (longlong)__return_storage_ptr__->ArrayMax * 8)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        pTVar6 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
        return pTVar6;
      }
      iVar5 = __return_storage_ptr__->ArrayNum;
      if (iVar5 == __return_storage_ptr__->ArrayMax) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,&__return_storage_ptr__->AllocatorInstance,
                           &__return_storage_ptr__->ArrayMax);
      }
      uVar7 = uVar7 + 1;
      __return_storage_ptr__->ArrayNum = iVar5 + 1;
      lVar8 = lVar8 + 0xc;
      *(undefined8 *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 8) =
           local_18[0];
      iVar5 = (this->PoseContainer).Curves.ArrayNum;
    } while ((int)uVar7 < iVar5);
  }
  return __return_storage_ptr__;
}

// GetCurveIndexByName @ 1475d3960

int __thiscall UPoseAsset::GetCurveIndexByName(UPoseAsset *this,FName *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  
  iVar4 = (this->PoseContainer).Curves.ArrayNum;
  uVar5 = 0;
  if (0 < iVar4) {
    lVar6 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar5 < iVar4) {
        uVar3 = ~uVar5 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        iVar4 = (*pcVar1)();
        return iVar4;
      }
      if (*(FName *)((this->PoseContainer).Curves.AllocatorInstance.Data + lVar6) == *param_1) {
        return uVar5;
      }
      iVar4 = (this->PoseContainer).Curves.ArrayNum;
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 0xc;
    } while ((int)uVar5 < iVar4);
  }
  return -1;
}

// GetCurveNames @ 1475d3c90

TArray<FSmartName,TSizedDefaultAllocator<32>_> * __thiscall
UPoseAsset::GetCurveNames
          (UPoseAsset *this,TArray<FSmartName,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetCurveValue @ 1475d3cb0

bool __thiscall UPoseAsset::GetCurveValue(UPoseAsset *this,int param_1,int param_2,float *param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  
  if ((param_1 < 0) || ((this->PoseContainer).Poses.ArrayNum <= param_1)) {
    bVar3 = false;
  }
  else {
    uVar5 = 0;
    if (param_1 < (this->PoseContainer).Poses.ArrayNum) {
      uVar5 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    pFVar1 = (this->PoseContainer).Poses.AllocatorInstance.Data;
    if ((param_2 < 0) || (*(int *)(pFVar1 + (longlong)param_1 * 0x20 + 0x18) <= param_2)) {
      bVar3 = false;
    }
    else {
      uVar5 = 0;
      if (param_2 < *(int *)(pFVar1 + (longlong)param_1 * 0x20 + 0x18)) {
        uVar5 = (uint)~param_2 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      bVar3 = true;
      *param_3 = *(float *)(*(longlong *)(pFVar1 + (longlong)param_1 * 0x20 + 0x10) +
                           (longlong)param_2 * 4);
    }
  }
  return bVar3;
}

// GetCurveValues @ 1475d3dd0

TArray<float,TSizedDefaultAllocator<32>_> * __thiscall
UPoseAsset::GetCurveValues
          (UPoseAsset *this,TArray<float,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          int param_1)

{
  code *pcVar1;
  bool bVar2;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar3;
  uint uVar4;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  if ((-1 < param_1) && (param_1 < (this->PoseContainer).Poses.ArrayNum)) {
    uVar4 = 0;
    if (param_1 < (this->PoseContainer).Poses.ArrayNum) {
      uVar4 = (uint)~param_1 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TArray<float,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
        return pTVar3;
      }
    }
    TArray<float,TSizedDefaultAllocator<32>_>::operator=
              (__return_storage_ptr__,
               (TArray<float,TSizedDefaultAllocator<32>_> *)
               ((this->PoseContainer).Poses.AllocatorInstance.Data + (longlong)param_1 * 0x20 + 0x10
               ));
  }
  return __return_storage_ptr__;
}

// GetNumCurves @ 1475d6250

int __thiscall UPoseAsset::GetNumCurves(UPoseAsset *this)

{
  return (this->PoseContainer).Curves.ArrayNum;
}

// GetNumPoses @ 1475d6270

int __thiscall UPoseAsset::GetNumPoses(UPoseAsset *this)

{
  return (this->PoseContainer).Poses.ArrayNum;
}

// GetNumTracks @ 1475d6340

int __thiscall UPoseAsset::GetNumTracks(UPoseAsset *this)

{
  return (this->PoseContainer).Tracks.ArrayNum;
}

// GetPoseFNames @ 1475d7580

TArray<FName,TSizedDefaultAllocator<32>_> * __thiscall UPoseAsset::GetPoseFNames(UPoseAsset *this)

{
  return &(this->PoseContainer).PoseFNames;
}

// GetPoseIndexByName @ 1475d7590

int __thiscall UPoseAsset::GetPoseIndexByName(UPoseAsset *this,FName *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  
  uVar5 = 0;
  if (0 < (this->PoseContainer).PoseFNames.ArrayNum) {
    lVar6 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar5 < (this->PoseContainer).PoseFNames.ArrayNum) {
        uVar3 = ~uVar5 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        iVar4 = (*pcVar1)();
        return iVar4;
      }
      if (*(FName *)((this->PoseContainer).PoseFNames.AllocatorInstance.Data + lVar6) == *param_1) {
        return uVar5;
      }
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 8;
    } while ((int)uVar5 < (this->PoseContainer).PoseFNames.ArrayNum);
  }
  return -1;
}

// GetPoseNames @ 1475d7650

TArray<FSmartName,TSizedDefaultAllocator<32>_> * __thiscall
UPoseAsset::GetPoseNames
          (UPoseAsset *this,TArray<FSmartName,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 1475dbdd0

UClass * __cdecl UPoseAsset::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPoseAsset.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"PoseAsset",&Z_Registration_Info_UClass_UPoseAsset.InnerSingleton,
               StaticRegisterNativesUPoseAsset,0x110,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UPoseAsset>,InternalVTableHelperCtorCaller<UPoseAsset>,local_res8
               ,UAnimationAsset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPoseAsset.InnerSingleton;
}

// GetRetargetTransforms @ 1475dd610

TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> * __thiscall
UPoseAsset::GetRetargetTransforms(UPoseAsset *this)

{
  FName FVar1;
  longlong lVar2;
  FReferencePose *pFVar3;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTVar4;
  
  FVar1 = this->RetargetSource;
  if ((FVar1 != (FName)0x0) ||
     (pTVar4 = &this->RetargetSourceAssetReferencePose,
     (this->RetargetSourceAssetReferencePose).ArrayNum < 1)) {
    lVar2 = this->_padding_;
    if (lVar2 != 0) {
      if (FVar1 != (FName)0x0) {
        pFVar3 = TMapBase<FName,FReferencePose,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FReferencePose,0>_>
                 ::Find((TMapBase<FName,FReferencePose,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FReferencePose,0>_>
                         *)(lVar2 + 0x1b8),FVar1);
        if (pFVar3 != (FReferencePose *)0x0) {
          return &pFVar3->ReferencePose;
        }
      }
      return (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)(lVar2 + 0x78);
    }
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) < ::_TSS0) {
      _Init_thread_header(&::_TSS0);
      if (::_TSS0 == -1) {
        atexit(`UPoseAsset::GetRetargetTransforms'::__l12::
               _dynamic_atexit_destructor_for__EmptyTransformArray__);
        _Init_thread_footer(&::_TSS0);
      }
    }
    pTVar4 = &EmptyTransformArray;
  }
  return pTVar4;
}

// GetRetargetTransformsSourceName @ 1475dd6e0

FName __thiscall UPoseAsset::GetRetargetTransformsSourceName(UPoseAsset *this)

{
  UPackage *pUVar1;
  FName in_RDX;
  
  if ((this->RetargetSource == (FName)0x0) &&
     (0 < (this->RetargetSourceAssetReferencePose).ArrayNum)) {
    pUVar1 = UObjectBaseUtility::GetOutermost((UObjectBaseUtility *)this);
    *(longlong *)in_RDX = pUVar1->_padding_;
    return in_RDX;
  }
  *(FName *)in_RDX = this->RetargetSource;
  return in_RDX;
}

// GetTrackIndexByName @ 1475dec10

int __thiscall UPoseAsset::GetTrackIndexByName(UPoseAsset *this,FName *param_1)

{
  FName *pFVar1;
  FName *pFVar2;
  
  if (*param_1 != (FName)0x0) {
    pFVar1 = (FName *)(this->PoseContainer).Tracks.AllocatorInstance.Data;
    for (pFVar2 = pFVar1; pFVar2 != pFVar1 + (this->PoseContainer).Tracks.ArrayNum;
        pFVar2 = pFVar2 + 1) {
      if (*pFVar2 == *param_1) {
        return (int)((longlong)pFVar2 - (longlong)pFVar1 >> 3);
      }
    }
  }
  return -1;
}

// GetTrackNames @ 1475dec60

TArray<FName,TSizedDefaultAllocator<32>_> * __thiscall UPoseAsset::GetTrackNames(UPoseAsset *this)

{
  return &(this->PoseContainer).Tracks;
}

// HasRootMotion @ 1475e0000

bool __thiscall UPoseAsset::HasRootMotion(UPoseAsset *this)

{
  return false;
}

// IsPostLoadThreadSafe @ 1475e2a60

bool __thiscall UPoseAsset::IsPostLoadThreadSafe(UPoseAsset *this)

{
  return true;
}

// IsValidAdditive @ 1475e2ce0

bool __thiscall UPoseAsset::IsValidAdditive(UPoseAsset *this)

{
  return this->bAdditivePose;
}

// PostLoad @ 1475e9fc0

void __thiscall UPoseAsset::PostLoad(UPoseAsset *this)

{
  UAnimationAsset::PostLoad((UAnimationAsset *)this);
  UpdateTrackBoneIndices(this);
  return;
}

// PreSave @ 1475ea5f0

void __thiscall UPoseAsset::PreSave(UPoseAsset *this,FObjectPreSaveContext param_1)

{
  FScriptContainerElement *local_res10 [3];
  
  local_res10[0] = ((param_1.Data)->TargetFilename).Data.AllocatorInstance.Data;
  *(int *)(local_res10[0] + 0x9c) = *(int *)(local_res10[0] + 0x9c) + 1;
  UObject::PreSave((UObject *)this,(FObjectSaveContextData *)local_res10);
  return;
}

// RemoveInvalidTracks @ 1475f4080

bool __thiscall UPoseAsset::RemoveInvalidTracks(UPoseAsset *this)

{
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar1;
  longlong lVar2;
  FName FVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  TTuple<FName,int> *pTVar8;
  int *piVar9;
  int iVar10;
  uint uVar11;
  FScriptContainerElement *pFVar12;
  FScriptContainerElement *pFVar13;
  uint uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  undefined1 local_res8 [8];
  int local_res10;
  
  local_res10 = (this->PoseContainer).Tracks.ArrayNum;
  lVar2 = this->_padding_;
  iVar10 = local_res10;
  if ((lVar2 != 0) && (uVar15 = 0, 0 < local_res10)) {
    pTVar1 = &(this->PoseContainer).Tracks;
    uVar16 = uVar15;
    do {
      uVar14 = (uint)uVar15;
      uVar11 = ~uVar14 >> 0x1f;
      uVar7 = 0;
      if ((int)uVar14 < iVar10) {
        uVar7 = uVar11;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      FVar3 = *(FName *)((pTVar1->AllocatorInstance).Data + uVar16 * 8);
      if (FVar3 == (FName)0x0) {
LAB_1475f415d:
        uVar7 = 0;
        if ((int)uVar14 < (this->PoseContainer).Tracks.ArrayNum) {
          uVar7 = uVar11;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
        pFVar12 = (pTVar1->AllocatorInstance).Data + uVar16 * 8;
        iVar10 = (this->PoseContainer).Tracks.ArrayNum + ~uVar14;
        if (iVar10 != 0) {
          memmove(pFVar12,pFVar12 + 8,(longlong)iVar10 << 3);
        }
        piVar9 = &(this->PoseContainer).Tracks.ArrayNum;
        *piVar9 = *piVar9 + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,4,&pTVar1->AllocatorInstance,(this->PoseContainer).Tracks.ArrayNum,
                   &(this->PoseContainer).Tracks.ArrayMax);
        iVar10 = (this->PoseContainer).Poses.ArrayNum;
        pFVar12 = (this->PoseContainer).Poses.AllocatorInstance.Data;
        pFVar13 = pFVar12 + (longlong)iVar10 * 0x20;
        while( true ) {
          if ((this->PoseContainer).Poses.ArrayNum != iVar10) {
            local_res8[0] = 0;
            `TCheckedPointerIterator<FPoseData,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (local_res8);
          }
          if (pFVar12 == pFVar13) break;
          pFVar12 = pFVar12 + 0x20;
        }
        uVar14 = uVar14 - 1;
        uVar16 = uVar16 - 1;
      }
      else {
        pTVar8 = TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                 ::Find((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                         *)(lVar2 + 0xd8),FVar3);
        piVar9 = (int *)&pTVar8->field_0x8;
        if (pTVar8 == (TTuple<FName,int> *)0x0) {
          piVar9 = (int *)0x0;
        }
        if ((piVar9 == (int *)0x0) || (*piVar9 == -1)) goto LAB_1475f415d;
      }
      iVar10 = (this->PoseContainer).Tracks.ArrayNum;
      uVar15 = (ulonglong)(uVar14 + 1);
      uVar16 = uVar16 + 1;
    } while ((int)(uVar14 + 1) < iVar10);
  }
  return local_res10 != iVar10;
}

// Serialize @ 1475fa200

void __thiscall UPoseAsset::Serialize(UPoseAsset *this,FArchive *param_1)

{
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FFrameworkObjectVersion::GUID);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FAnimPhysObjectVersion::GUID);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FFortniteMainBranchObjectVersion::GUID);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FUE5ReleaseStreamObjectVersion::GUID);
  UAnimationAsset::Serialize((UAnimationAsset *)this,param_1);
  return;
}

// Serialize @ 1475fa280

void __thiscall UPoseAsset::Serialize(UPoseAsset *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  (**(code **)(*(longlong *)pFVar1 + 0x230))(pFVar1,&FFrameworkObjectVersion::GUID);
  (**(code **)(*(longlong *)pFVar1 + 0x230))(pFVar1,&FAnimPhysObjectVersion::GUID);
  (**(code **)(*(longlong *)pFVar1 + 0x230))(pFVar1,&FFortniteMainBranchObjectVersion::GUID);
  (**(code **)(*(longlong *)pFVar1 + 0x230))(pFVar1,&FUE5ReleaseStreamObjectVersion::GUID);
  UAnimationAsset::Serialize((UAnimationAsset *)this,pFVar1);
  return;
}

// StaticRegisterNativesUPoseAsset @ 1475fedd0

void __cdecl UPoseAsset::StaticRegisterNativesUPoseAsset(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18._8_8_ = (ulonglong)(uint)local_18._12_4_ << 0x20;
  local_18.DataPtr = (FClassNativeFunction *)0x0;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// UpdateTrackBoneIndices @ 147603560

void __thiscall UPoseAsset::UpdateTrackBoneIndices(UPoseAsset *this)

{
  int *piVar1;
  int *piVar2;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar3;
  FScriptContainerElement *_Dst;
  longlong lVar4;
  FName FVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  TTuple<FName,int> *pTVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  uint uVar14;
  undefined4 *puVar15;
  undefined4 uVar16;
  
  lVar4 = this->_padding_;
  pTVar3 = &(this->PoseContainer).TrackBoneIndices;
  iVar9 = (this->PoseContainer).TrackBoneIndices.ArrayMax;
  piVar1 = &(this->PoseContainer).TrackBoneIndices.ArrayMax;
  puVar15 = (undefined4 *)0x0;
  piVar2 = &(this->PoseContainer).TrackBoneIndices.ArrayNum;
  *piVar2 = 0;
  if (iVar9 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&pTVar3->AllocatorInstance,0,piVar1);
  }
  if (lVar4 != 0) {
    iVar9 = *piVar2;
    uVar10 = (this->PoseContainer).Tracks.ArrayNum;
    if (iVar9 < (int)uVar10) {
      iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (4,4,uVar10 - iVar9,&pTVar3->AllocatorInstance,piVar2,piVar1);
      memset((pTVar3->AllocatorInstance).Data + (longlong)iVar8 * 4,0,
             (longlong)(int)(uVar10 - iVar9) << 2);
    }
    else {
      if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar10);
      }
      if ((int)uVar10 < iVar9) {
        uVar14 = iVar9 - uVar10;
        if (((int)(uVar14 | uVar10) < 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x458,
                               L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                              ), bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if (uVar14 != 0) {
          _Dst = (pTVar3->AllocatorInstance).Data + (longlong)(int)uVar10 * 4;
          iVar9 = (*piVar2 - uVar10) - uVar14;
          if (iVar9 != 0) {
            memmove(_Dst,_Dst + (longlong)(int)uVar14 * 4,(longlong)iVar9 << 2);
          }
          *piVar2 = *piVar2 - uVar14;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,&pTVar3->AllocatorInstance,*piVar2,piVar1);
        }
      }
    }
    iVar9 = (this->PoseContainer).Tracks.ArrayNum;
    puVar12 = puVar15;
    puVar13 = puVar15;
    if (0 < iVar9) {
      do {
        uVar14 = (uint)puVar12;
        uVar10 = 0;
        if ((int)uVar14 < iVar9) {
          uVar10 = ~uVar14 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        uVar16 = 0xffffffff;
        FVar5 = *(FName *)((this->PoseContainer).Tracks.AllocatorInstance.Data +
                          (longlong)puVar13 * 8);
        if (FVar5 != (FName)0x0) {
          pTVar11 = TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                    ::Find((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                            *)(lVar4 + 0xd8),FVar5);
          puVar12 = (undefined4 *)&pTVar11->field_0x8;
          if (pTVar11 == (TTuple<FName,int> *)0x0) {
            puVar12 = puVar15;
          }
          if (puVar12 != (undefined4 *)0x0) {
            uVar16 = *puVar12;
          }
        }
        uVar10 = 0;
        if ((int)uVar14 < (this->PoseContainer).TrackBoneIndices.ArrayNum) {
          uVar10 = ~uVar14 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        *(undefined4 *)((pTVar3->AllocatorInstance).Data + (longlong)puVar13 * 4) = uVar16;
        iVar9 = (this->PoseContainer).Tracks.ArrayNum;
        puVar12 = (undefined4 *)(ulonglong)(uVar14 + 1);
        puVar13 = (undefined4 *)((longlong)puVar13 + 1);
      } while ((int)(uVar14 + 1) < iVar9);
    }
  }
  return;
}

