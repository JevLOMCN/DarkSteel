// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PoseSearch
// Functions: 7

// StaticStruct @ 14a89de30

UScriptStruct * __cdecl FAnimNode_MotionMatchingInteraction::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAnimNode_MotionMatchingInteraction.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PoseSearch();
    Z_Registration_Info_UScriptStruct_FAnimNode_MotionMatchingInteraction.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_MotionMatchingInteraction,
                         (UObject *)pUVar1,L"AnimNode_MotionMatchingInteraction");
  }
  return Z_Registration_Info_UScriptStruct_FAnimNode_MotionMatchingInteraction.OuterSingleton;
}

// Evaluate_AnyThread @ 14a89de70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FAnimNode_MotionMatchingInteraction::Evaluate_AnyThread
          (FAnimNode_MotionMatchingInteraction *this,FPoseContext *param_1)

{
  FName *this_00;
  float fVar1;
  float fVar2;
  UObject *pUVar3;
  UMultiAnimAsset *pUVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  IAnimRootMotionProvider *pIVar14;
  bool bVar15;
  int iVar16;
  uint uVar17;
  UClass *pUVar18;
  longlong lVar19;
  uint uVar20;
  FStaticBasicLogRecord *pFVar21;
  ForElementType<UE::Math::TTransform<double>_> FVar22;
  undefined1 auStackY_778 [32];
  longlong local_738;
  FName local_728;
  IAnimRootMotionProvider *local_720;
  FName local_718;
  FName local_710;
  FName local_708;
  FName local_700;
  FName local_6f8;
  FString local_6f0;
  ForElementType<UE::Math::TTransform<double>_> local_6d8;
  int iStack_6d0;
  undefined4 uStack_6cc;
  TVector<double>_u_0 local_6c8;
  TVector<double>_u_0 local_6b0;
  TVector<double>_u_0 local_698;
  TVector<double>_u_0 local_680;
  TVector<double>_u_0 local_668;
  TVector<double>_u_0 local_650;
  TVector<double>_u_0 local_638;
  TVector<double>_u_0 local_620;
  FString local_608;
  TArrayView<UE::Math::TTransform<double>,int> local_5f8;
  FInteractionValidator local_5e8;
  TVector<double>_u_0 local_5d8;
  TVector<double>_u_0 local_5c0;
  TVector<double>_u_0 local_5a8;
  TVector<double>_u_0 local_588;
  TVector<double>_u_0 local_568;
  TVector<double>_u_0 local_548;
  TVector<double>_u_0 local_528;
  TVector<double>_u_0 local_508;
  TVector<double>_u_0 local_4e8;
  TVector<double>_u_0 local_4c8;
  TQuat<double> local_4a8;
  TQuat<double> local_488;
  TQuat<double> local_468;
  TQuat<double> local_448;
  double local_428;
  double dStack_420;
  undefined8 local_418;
  double local_410;
  double dStack_408;
  double local_400;
  double local_3f8;
  double dStack_3f0;
  undefined8 local_3e8;
  double local_3e0;
  double dStack_3d8;
  double local_3d0;
  TTransform<double> local_368;
  TTransform<double> local_308;
  TArray<UE::Math::TTransform<double>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
  local_2a8;
  TTransform<double> local_108;
  ulonglong local_a8;
  
  local_a8 = __security_cookie.value ^ (ulonglong)auStackY_778;
  if ((param_1->_padding_ == 0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("Output.AnimInstanceProxy",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\AnimNode_MotionMatchingInteraction.cpp"
                          ,0x75,L""), bVar15)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  UE::PoseSearch::FInteractionValidator::FInteractionValidator
            (&local_5e8,*(UObject **)(param_1->_padding_ + 0x140));
  FAnimNode_BlendStack_Standalone::Evaluate_AnyThread
            ((FAnimNode_BlendStack_Standalone *)this,param_1);
  pUVar3 = *(UObject **)(param_1->_padding_ + 0x140);
  if (pUVar3 == (UObject *)0x0) {
LAB_14a89e91e:
    if ((byte)LogPoseSearch._0_1_ < 2) goto LAB_14a89e93a;
    pFVar21 = &::LOG_Static;
  }
  else {
    pUVar18 = Z_Construct_UClass_UAnimInstance_NoRegister();
    iVar16 = (int)pUVar18->_padding_;
    if ((*(int *)(*(longlong *)&pUVar3->field_0x10 + 0x38) < iVar16) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar3->field_0x10 + 0x30) + (longlong)iVar16 * 8) !=
        &pUVar18->_padding_)) goto LAB_14a89e91e;
    local_720 = UE::Anim::IAnimRootMotionProvider::Get();
    if (local_720 != (IAnimRootMotionProvider *)0x0) {
      if ((this->CurrentResult).SelectedAnim.field0_0x0.DebugPtr != (UObject *)0x0) {
        pUVar18 = UMultiAnimAsset::StaticClass();
        bVar15 = FObjectPtr::IsA((FObjectPtr *)&this->CurrentResult,pUVar18);
        if (((bVar15) &&
            (pUVar4 = (UMultiAnimAsset *)(this->CurrentResult).SelectedAnim.field0_0x0.DebugPtr,
            pUVar4 != (UMultiAnimAsset *)0x0)) &&
           (iVar16 = (**(code **)(*(longlong *)pUVar4 + 0x2c8))(pUVar4),
           (this->CurrentResult).ActorRootTransforms.ArrayNum == iVar16)) {
          this_00 = &(this->CurrentResult).Role;
          uVar17 = UE::PoseSearch::GetRoleIndex(pUVar4,this_00);
          if (uVar17 != 0xffffffff) {
            lVar19 = (**(code **)(*(longlong *)pUVar4 + 0x2d8))(pUVar4,&(this->CurrentResult).Role);
            if (lVar19 == 0) {
              if (1 < (byte)LogPoseSearch._0_1_) {
                ::FName::ToString(this_00,&local_608);
                local_728.ComparisonIndex.Value = *(uint *)&pUVar4->field_0x18;
                local_728.Number = *(uint *)&pUVar4->field_0x1c;
                ::FName::ToString(&local_728,&local_6f0);
                UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPoseSearch);
                if (local_6f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_6f0.Data.AllocatorInstance.Data);
                }
                if (local_608.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_608.Data.AllocatorInstance.Data);
                }
              }
            }
            else {
              local_2a8.AllocatorInstance.SecondaryData =
                   (ForElementType<UE::Math::TTransform<double>_>)0x0;
              local_2a8.ArrayNum = 0;
              local_2a8.ArrayMax = 4;
              TArray<UE::Math::TTransform<double>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
              ::SetNum(&local_2a8,iVar16,Default);
              iStack_6d0 = local_2a8.ArrayNum;
              local_6d8 = (ForElementType<UE::Math::TTransform<double>_>)&local_2a8;
              if (local_2a8.AllocatorInstance.SecondaryData !=
                  (ForElementType<UE::Math::TTransform<double>_>)0x0) {
                local_6d8 = local_2a8.AllocatorInstance.SecondaryData;
              }
              if ((local_2a8.ArrayNum < 0) &&
                 (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                     ("InCount >= 0",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                      ,0xeb,L""), bVar15)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              local_5f8._12_4_ = uStack_6cc;
              local_5f8.ArrayNum = iStack_6d0;
              local_5f8.DataPtr = (TTransform<double> *)local_6d8;
              UE::PoseSearch::CalculateFullAlignedTransforms
                        (&this->CurrentResult,this->bWarpUsingRootBone,&local_5f8);
              fVar1 = this->WarpingTranslationRatio;
              fVar2 = this->WarpingRotationRatio;
              uVar20 = 0;
              if ((int)uVar17 < local_2a8.ArrayNum) {
                uVar20 = ~uVar17 >> 0x1f;
              }
              if ((uVar20 == 0) &&
                 (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar15)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              FVar22 = (ForElementType<UE::Math::TTransform<double>_>)&local_2a8;
              if (local_2a8.AllocatorInstance.SecondaryData !=
                  (ForElementType<UE::Math::TTransform<double>_>)0x0) {
                FVar22 = local_2a8.AllocatorInstance.SecondaryData;
              }
              UE::PoseSearch::CalculateDeltaAlignment
                        (&local_108,&this->MeshWithoutOffset,&this->MeshWithOffset,
                         (TTransform<double> *)((longlong)(int)uVar17 * 0x60 + (longlong)FVar22),
                         fVar2,fVar1);
              pIVar14 = local_720;
              local_368.Rotation.XY.m128d_f64[1]._0_4_ =
                   SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
              local_368.Rotation.XY.m128d_f64[0] =
                   (double)GlobalVectorConstants::Float0001.m128_f32[0];
              local_368.Rotation.XY.m128d_f64[1]._4_4_ =
                   (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
              local_368.Rotation.ZW.m128d_f64[1]._0_4_ =
                   SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
              local_368.Rotation.ZW.m128d_f64[0] =
                   (double)GlobalVectorConstants::Float0001.m128_f32[2];
              local_368.Rotation.ZW.m128d_f64[1]._4_4_ =
                   (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
              local_368.Translation.XY.m128d_f64[1]._0_4_ =
                   SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
              local_368.Translation.XY.m128d_f64[0] =
                   (double)GlobalVectorConstants::FloatZero.m128_f32[0];
              local_368.Translation.XY.m128d_f64[1]._4_4_ =
                   (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
              local_368.Translation.ZW.m128d_f64[1]._0_4_ =
                   SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
              local_368.Translation.ZW.m128d_f64[0] =
                   (double)GlobalVectorConstants::FloatZero.m128_f32[2];
              local_368.Translation.ZW.m128d_f64[1]._4_4_ =
                   (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
              local_368.Scale3D.XY.m128d_f64[1]._0_4_ =
                   SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
              local_368.Scale3D.XY.m128d_f64[0] =
                   (double)GlobalVectorConstants::Float1110.m128_f32[0];
              local_368.Scale3D.XY.m128d_f64[1]._4_4_ =
                   (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
              local_368.Scale3D.ZW.m128d_f64[1]._0_4_ =
                   SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
              local_368.Scale3D.ZW.m128d_f64[0] =
                   (double)GlobalVectorConstants::Float1110.m128_f32[2];
              local_368.Scale3D.ZW.m128d_f64[1]._4_4_ =
                   (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
              (**(code **)((longlong)*local_720 + 0x20))
                        (local_720,&param_1->CustomAttributes,&local_368);
              local_308.Rotation.XY.m128d_f64[1]._0_4_ =
                   SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
              local_308.Rotation.XY.m128d_f64[0] =
                   (double)GlobalVectorConstants::Float0001.m128_f32[0];
              local_308.Rotation.XY.m128d_f64[1]._4_4_ =
                   (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
              local_308.Rotation.ZW.m128d_f64[1]._0_4_ =
                   SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
              local_308.Rotation.ZW.m128d_f64[0] =
                   (double)GlobalVectorConstants::Float0001.m128_f32[2];
              local_308.Rotation.ZW.m128d_f64[1]._4_4_ =
                   (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
              local_308.Translation.XY.m128d_f64[1]._0_4_ =
                   SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
              local_308.Translation.XY.m128d_f64[0] =
                   (double)GlobalVectorConstants::FloatZero.m128_f32[0];
              local_308.Translation.XY.m128d_f64[1]._4_4_ =
                   (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
              local_308.Translation.ZW.m128d_f64[1]._0_4_ =
                   SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
              local_308.Translation.ZW.m128d_f64[0] =
                   (double)GlobalVectorConstants::FloatZero.m128_f32[2];
              local_308.Translation.ZW.m128d_f64[1]._4_4_ =
                   (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
              local_308.Scale3D.XY.m128d_f64[1]._0_4_ =
                   SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
              local_308.Scale3D.XY.m128d_f64[0] =
                   (double)GlobalVectorConstants::Float1110.m128_f32[0];
              local_308.Scale3D.XY.m128d_f64[1]._4_4_ =
                   (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
              local_308.Scale3D.ZW.m128d_f64[1]._0_4_ =
                   SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
              local_308.Scale3D.ZW.m128d_f64[0] =
                   (double)GlobalVectorConstants::Float1110.m128_f32[2];
              local_308.Scale3D.ZW.m128d_f64[1]._4_4_ =
                   (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
              UE::Math::TTransform<double>::Multiply(&local_308,&local_108,&local_368);
              (**(code **)((longlong)*pIVar14 + 0x18))
                        (pIVar14,&local_308,&param_1->CustomAttributes);
              dVar11 = __real_4041800000000000;
              dVar10 = __real_403e000000000000;
              dVar13 = _UNK_150689518;
              dVar12 = ___xmm_00000000000000003ff0000000000000;
              if (FVisualLogger::bIsRecording != 0) {
                local_738 = (longlong)iVar16;
                uVar17 = 0;
                if (0 < local_738) {
                  lVar19 = 0;
                  do {
                    uVar20 = 0;
                    if ((int)uVar17 < (this->CurrentResult).ActorRootTransforms.ArrayNum) {
                      uVar20 = ~uVar17 >> 0x1f;
                    }
                    if ((uVar20 == 0) &&
                       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar15)) {
                      pcVar6 = (code *)swi(3);
                      (*pcVar6)();
                      return;
                    }
                    pFVar5 = (this->CurrentResult).ActorRootTransforms.AllocatorInstance.Data;
                    uVar20 = 0;
                    if ((int)uVar17 < local_2a8.ArrayNum) {
                      uVar20 = ~uVar17 >> 0x1f;
                    }
                    if ((uVar20 == 0) &&
                       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar15)) {
                      pcVar6 = (code *)swi(3);
                      (*pcVar6)();
                      return;
                    }
                    FVar22 = (ForElementType<UE::Math::TTransform<double>_>)&local_2a8;
                    if (local_2a8.AllocatorInstance.SecondaryData !=
                        (ForElementType<UE::Math::TTransform<double>_>)0x0) {
                      FVar22 = local_2a8.AllocatorInstance.SecondaryData;
                    }
                    if (FVisualLogger::bIsRecording != 0) {
                      local_5d8._s_0.X = (double)*(undefined8 *)(pFVar5 + lVar19 + 0x20);
                      local_5d8._s_0.Y = (double)*(undefined8 *)(pFVar5 + lVar19 + 0x20 + 8);
                      local_5d8._s_0.Z = (double)*(undefined8 *)(pFVar5 + lVar19 + 0x30);
                      local_5c0._s_0.X =
                           (double)*(undefined8 *)((uchar *)((longlong)FVar22 + 0x20) + lVar19);
                      local_5c0._s_0.Y =
                           (double)*(undefined8 *)((uchar *)((longlong)FVar22 + 0x20) + lVar19 + 8);
                      local_5c0._s_0.Z =
                           (double)*(undefined8 *)((uchar *)((longlong)FVar22 + 0x30) + lVar19);
                      ::FName::FName(&local_718,LogName);
                      FVisualLogger::SegmentLogfImpl
                                (pUVar3,&local_718,Display,(TVector<double> *)&local_5c0._s_0,
                                 (TVector<double> *)&local_5d8._s_0,&FColorList::Orange,1,L"");
                      if (FVisualLogger::bIsRecording != 0) {
                        local_488.X = *(double *)(pFVar5 + lVar19);
                        local_488.Y = *(double *)(pFVar5 + lVar19 + 8);
                        local_488.Z = *(double *)(pFVar5 + lVar19 + 0x10);
                        local_488.W = *(double *)(pFVar5 + lVar19 + 0x10 + 8);
                        dVar7 = *(double *)(pFVar5 + lVar19 + 0x20);
                        dVar8 = *(double *)(pFVar5 + lVar19 + 0x20 + 8);
                        dVar9 = *(double *)(pFVar5 + lVar19 + 0x30);
                        local_418 = 0;
                        local_428 = dVar12;
                        dStack_420 = dVar13;
                        local_5a8._s_0.X = dVar12;
                        local_5a8._s_0.Y = dVar13;
                        local_5a8._s_0.Z = 0.0;
                        local_410 = dVar7;
                        dStack_408 = dVar8;
                        UE::Math::TQuat<double>::RotateVector
                                  (&local_488,(TVector<double> *)&local_680._s_0,
                                   (TVector<double> *)&local_5a8._s_0);
                        local_668._s_0.X = local_680._s_0.X * dVar11 + dVar7;
                        local_668._s_0.Y = local_680._s_0.Y * dVar11 + dVar8;
                        local_668._s_0.Z = local_680._s_0.Z * dVar11 + dVar9;
                        local_588._s_0.X = (double)*(undefined8 *)(pFVar5 + lVar19 + 0x20);
                        local_588._s_0.Y = (double)*(undefined8 *)(pFVar5 + lVar19 + 0x20 + 8);
                        local_588._s_0.Z = dVar9;
                        local_400 = dVar9;
                        ::FName::FName(&local_710,LogName);
                        FVisualLogger::SegmentLogfImpl
                                  (pUVar3,&local_710,Display,(TVector<double> *)&local_588._s_0,
                                   (TVector<double> *)&local_668._s_0,&FColorList::LightGrey,3,L"");
                        if (FVisualLogger::bIsRecording != 0) {
                          local_4a8.X = *(double *)((longlong)FVar22 + lVar19);
                          local_4a8.Y = ((double *)((longlong)FVar22 + lVar19))[1];
                          local_4a8.Z = *(double *)((uchar *)((longlong)FVar22 + 0x10) + lVar19);
                          local_4a8.W = *(double *)((uchar *)((longlong)FVar22 + 0x10) + lVar19 + 8)
                          ;
                          dVar7 = *(double *)((uchar *)((longlong)FVar22 + 0x20) + lVar19);
                          dVar8 = *(double *)((uchar *)((longlong)FVar22 + 0x20) + lVar19 + 8);
                          dVar9 = *(double *)((uchar *)((longlong)FVar22 + 0x30) + lVar19);
                          local_3e8 = 0;
                          local_3f8 = dVar12;
                          dStack_3f0 = dVar13;
                          local_568._s_0.X = dVar12;
                          local_568._s_0.Y = dVar13;
                          local_568._s_0.Z = 0.0;
                          local_3e0 = dVar7;
                          dStack_3d8 = dVar8;
                          UE::Math::TQuat<double>::RotateVector
                                    (&local_4a8,(TVector<double> *)&local_650._s_0,
                                     (TVector<double> *)&local_568._s_0);
                          local_638._s_0.X = local_650._s_0.X * dVar10 + dVar7;
                          local_638._s_0.Y = local_650._s_0.Y * dVar10 + dVar8;
                          local_638._s_0.Z = local_650._s_0.Z * dVar10 + dVar9;
                          local_548._s_0.X =
                               (double)*(undefined8 *)((uchar *)((longlong)FVar22 + 0x20) + lVar19);
                          local_548._s_0.Y =
                               (double)*(undefined8 *)
                                        ((uchar *)((longlong)FVar22 + 0x20) + lVar19 + 8);
                          local_548._s_0.Z = dVar9;
                          local_3d0 = dVar9;
                          ::FName::FName(&local_708,LogName);
                          FVisualLogger::SegmentLogfImpl
                                    (pUVar3,&local_708,Display,(TVector<double> *)&local_548._s_0,
                                     (TVector<double> *)&local_638._s_0,&FColorList::Orange,2,L"");
                        }
                      }
                    }
                    uVar17 = uVar17 + 1;
                    lVar19 = lVar19 + 0x60;
                    local_738 = local_738 + -1;
                  } while (local_738 != 0);
                }
                if (FVisualLogger::bIsRecording != 0) {
                  local_468.X = (this->MeshWithOffset).Rotation.XY.m128d_f64[0];
                  local_468.Y = (this->MeshWithOffset).Rotation.XY.m128d_f64[1];
                  local_468.Z = (this->MeshWithOffset).Rotation.ZW.m128d_f64[0];
                  local_468.W = (this->MeshWithOffset).Rotation.ZW.m128d_f64[1];
                  dVar10 = (this->MeshWithOffset).Translation.XY.m128d_f64[0];
                  dVar7 = (this->MeshWithOffset).Translation.XY.m128d_f64[1];
                  dVar8 = (this->MeshWithOffset).Translation.ZW.m128d_f64[0];
                  local_528._s_0.X = dVar12;
                  local_528._s_0.Y = dVar13;
                  local_528._s_0.Z = 0.0;
                  UE::Math::TQuat<double>::RotateVector
                            (&local_468,(TVector<double> *)&local_620._s_0,
                             (TVector<double> *)&local_528._s_0);
                  local_6c8._s_0.X = local_620._s_0.X * dVar11 + dVar10;
                  local_6c8._s_0.Y = local_620._s_0.Y * dVar11 + dVar7;
                  local_6c8._s_0.Z = local_620._s_0.Z * dVar11 + dVar8;
                  local_508._s_0.X = (this->MeshWithOffset).Translation.XY.m128d_f64[0];
                  local_508._s_0.Y = (this->MeshWithOffset).Translation.XY.m128d_f64[1];
                  local_508._s_0.Z = dVar8;
                  ::FName::FName(&local_700,LogName);
                  FVisualLogger::SegmentLogfImpl
                            (pUVar3,&local_700,Display,(TVector<double> *)&local_508._s_0,
                             (TVector<double> *)&local_6c8._s_0,&FColorList::Blue,3,L"");
                  if (FVisualLogger::bIsRecording != 0) {
                    local_448.X = (this->MeshWithoutOffset).Rotation.XY.m128d_f64[0];
                    local_448.Y = (this->MeshWithoutOffset).Rotation.XY.m128d_f64[1];
                    local_448.Z = (this->MeshWithoutOffset).Rotation.ZW.m128d_f64[0];
                    local_448.W = (this->MeshWithoutOffset).Rotation.ZW.m128d_f64[1];
                    dVar10 = (this->MeshWithoutOffset).Translation.XY.m128d_f64[0];
                    dVar11 = (this->MeshWithoutOffset).Translation.XY.m128d_f64[1];
                    dVar7 = (this->MeshWithoutOffset).Translation.ZW.m128d_f64[0];
                    local_4e8._s_0.X = dVar12;
                    local_4e8._s_0.Y = dVar13;
                    local_4e8._s_0.Z = 0.0;
                    UE::Math::TQuat<double>::RotateVector
                              (&local_448,(TVector<double> *)&local_6b0._s_0,
                               (TVector<double> *)&local_4e8._s_0);
                    local_698._s_0.X = local_6b0._s_0.X * __real_4044000000000000 + dVar10;
                    local_698._s_0.Y = local_6b0._s_0.Y * __real_4044000000000000 + dVar11;
                    local_698._s_0.Z = local_6b0._s_0.Z * __real_4044000000000000 + dVar7;
                    local_4c8._s_0.X = (this->MeshWithoutOffset).Translation.XY.m128d_f64[0];
                    local_4c8._s_0.Y = (this->MeshWithoutOffset).Translation.XY.m128d_f64[1];
                    local_4c8._s_0.Z = dVar7;
                    ::FName::FName(&local_6f8,LogName);
                    FVisualLogger::SegmentLogfImpl
                              (pUVar3,&local_6f8,Display,(TVector<double> *)&local_4c8._s_0,
                               (TVector<double> *)&local_698._s_0,&FColorList::Cyan,4,L"");
                  }
                }
              }
              if (local_2a8.AllocatorInstance.SecondaryData !=
                  (ForElementType<UE::Math::TTransform<double>_>)0x0) {
                FMemory::Free((void *)local_2a8.AllocatorInstance.SecondaryData);
              }
            }
          }
        }
      }
      goto LAB_14a89e93a;
    }
    if ((byte)LogPoseSearch._0_1_ < 2) goto LAB_14a89e93a;
    pFVar21 = &::LOG_Static;
  }
  UE::Logging::Private::BasicLog<2>(pFVar21,(FLogCategoryBase *)&LogPoseSearch);
LAB_14a89e93a:
  UE::PoseSearch::FInteractionValidator::~FInteractionValidator(&local_5e8);
  return;
}

// UpdateAssetPlayer @ 14a89e990

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAnimNode_MotionMatchingInteraction::UpdateAssetPlayer
          (FAnimNode_MotionMatchingInteraction *this,FAnimationUpdateContext *param_1)

{
  float fVar1;
  longlong lVar2;
  UObject *pUVar3;
  code *pcVar4;
  undefined2 uVar5;
  double dVar6;
  bool bVar7;
  FRootOffsetProvider *pFVar8;
  TTransform<double> *pTVar9;
  FExposedValueHandler *this_00;
  FPoseHistoryProvider *this_01;
  IPoseHistory *pIVar10;
  TArrayView<FPoseSearchInteractionAvailability_const_,int> *pTVar11;
  UClass *pUVar12;
  UAnimationAsset *pUVar13;
  FPoseSearchRoledSkeleton *pFVar14;
  FString *pFVar15;
  short sVar16;
  wchar_t *pwVar17;
  wchar_t *pwVar18;
  TArrayView<FPoseSearchInteractionAvailability_const_,int> local_b8;
  FString local_a8;
  FString local_98;
  FInteractionValidator local_88;
  TArrayView<FPoseSearchInteractionAvailability_const_,int> local_78;
  TOptionalScopedGraphMessage<UE::Anim::FAnimInertializationSyncScope> local_68 [2];
  
  pwVar17 = L"";
  if (param_1->_padding_ == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Context.AnimInstanceProxy",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\AnimNode_MotionMatchingInteraction.cpp"
                       ,0x2f,L"");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  UE::PoseSearch::FInteractionValidator::FInteractionValidator
            (&local_88,*(UObject **)(param_1->_padding_ + 0x140));
  if ((((this->bResetOnBecomingRelevant != false) &&
       (sVar16 = (this->UpdateCounter).Counter, sVar16 != -1)) &&
      ((this->UpdateCounter).LastSyncronizedFrame != 0xffffffffffffffff)) &&
     (sVar16 != *(short *)(param_1->_padding_ + 0x5b0))) {
    uVar5 = (this->UpdateCounter).Counter;
    sVar16 = 0;
    if ((short)(uVar5 + 1) != -1) {
      sVar16 = uVar5 + 1;
    }
    if (((sVar16 == -1) || (GFrameCounter == 0xffffffffffffffff)) ||
       (sVar16 != *(short *)(param_1->_padding_ + 0x5b0))) {
      (**(code **)(*(longlong *)this + 0x148))(this);
    }
  }
  pFVar8 = FAnimationBaseContext::GetMessage<UE::AnimationWarping::FRootOffsetProvider>
                     ((FAnimationBaseContext *)param_1);
  lVar2 = param_1->_padding_;
  dVar6 = *(double *)(lVar2 + 0x28);
  pTVar9 = &pFVar8->RootTransform;
  if (pFVar8 == (FRootOffsetProvider *)0x0) {
    pTVar9 = &this->MeshWithoutOffset;
  }
  (this->MeshWithoutOffset).Rotation.XY.m128d_f64[0] = *(double *)(lVar2 + 0x20);
  (this->MeshWithoutOffset).Rotation.XY.m128d_f64[1] = dVar6;
  dVar6 = *(double *)(lVar2 + 0x38);
  (this->MeshWithoutOffset).Rotation.ZW.m128d_f64[0] = *(double *)(lVar2 + 0x30);
  (this->MeshWithoutOffset).Rotation.ZW.m128d_f64[1] = dVar6;
  dVar6 = *(double *)(lVar2 + 0x48);
  (this->MeshWithoutOffset).Translation.XY.m128d_f64[0] = *(double *)(lVar2 + 0x40);
  (this->MeshWithoutOffset).Translation.XY.m128d_f64[1] = dVar6;
  dVar6 = *(double *)(lVar2 + 0x58);
  (this->MeshWithoutOffset).Translation.ZW.m128d_f64[0] = *(double *)(lVar2 + 0x50);
  (this->MeshWithoutOffset).Translation.ZW.m128d_f64[1] = dVar6;
  dVar6 = *(double *)(lVar2 + 0x68);
  (this->MeshWithoutOffset).Scale3D.XY.m128d_f64[0] = *(double *)(lVar2 + 0x60);
  (this->MeshWithoutOffset).Scale3D.XY.m128d_f64[1] = dVar6;
  dVar6 = *(double *)(lVar2 + 0x78);
  (this->MeshWithoutOffset).Scale3D.ZW.m128d_f64[0] = *(double *)(lVar2 + 0x70);
  (this->MeshWithoutOffset).Scale3D.ZW.m128d_f64[1] = dVar6;
  dVar6 = (pTVar9->Rotation).XY.m128d_f64[1];
  (this->MeshWithOffset).Rotation.XY.m128d_f64[0] = (pTVar9->Rotation).XY.m128d_f64[0];
  (this->MeshWithOffset).Rotation.XY.m128d_f64[1] = dVar6;
  dVar6 = (pTVar9->Rotation).ZW.m128d_f64[1];
  (this->MeshWithOffset).Rotation.ZW.m128d_f64[0] = (pTVar9->Rotation).ZW.m128d_f64[0];
  (this->MeshWithOffset).Rotation.ZW.m128d_f64[1] = dVar6;
  dVar6 = (pTVar9->Translation).XY.m128d_f64[1];
  (this->MeshWithOffset).Translation.XY.m128d_f64[0] = (pTVar9->Translation).XY.m128d_f64[0];
  (this->MeshWithOffset).Translation.XY.m128d_f64[1] = dVar6;
  dVar6 = (pTVar9->Translation).ZW.m128d_f64[1];
  (this->MeshWithOffset).Translation.ZW.m128d_f64[0] = (pTVar9->Translation).ZW.m128d_f64[0];
  (this->MeshWithOffset).Translation.ZW.m128d_f64[1] = dVar6;
  dVar6 = (pTVar9->Scale3D).XY.m128d_f64[1];
  (this->MeshWithOffset).Scale3D.XY.m128d_f64[0] = (pTVar9->Scale3D).XY.m128d_f64[0];
  (this->MeshWithOffset).Scale3D.XY.m128d_f64[1] = dVar6;
  dVar6 = (pTVar9->Scale3D).ZW.m128d_f64[1];
  (this->MeshWithOffset).Scale3D.ZW.m128d_f64[0] = (pTVar9->Scale3D).ZW.m128d_f64[0];
  (this->MeshWithOffset).Scale3D.ZW.m128d_f64[1] = dVar6;
  lVar2 = param_1->_padding_;
  (this->UpdateCounter).Counter = *(short *)(lVar2 + 0x5b0);
  (this->UpdateCounter).LastSyncronizedFrame = *(ulong64 *)(lVar2 + 0x5a8);
  (this->UpdateCounter).SkipFrames = *(short *)(lVar2 + 0x5b2);
  this->CachedDeltaTime = param_1->DeltaTime;
  this_00 = FAnimNode_Base::GetEvaluateGraphExposedInputs((FAnimNode_Base *)this);
  FExposedValueHandler::Execute(this_00,(FAnimationBaseContext *)param_1);
  this_01 = FAnimationBaseContext::GetMessage<UE::PoseSearch::FPoseHistoryProvider>
                      ((FAnimationBaseContext *)param_1);
  if (this_01 == (FPoseHistoryProvider *)0x0) {
    if (1 < (byte)LogPoseSearch._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPoseSearch);
    }
  }
  else {
    bVar7 = this->bValidateResultAgainstAvailabilities;
    pIVar10 = UE::PoseSearch::FPoseHistoryProvider::GetPoseHistory(this_01);
    pUVar3 = *(UObject **)(param_1->_padding_ + 0x140);
    pTVar11 = TArrayView<FPoseSearchInteractionAvailability_const_,int>::
              TArrayView<FPoseSearchInteractionAvailability_const_,int><TArray<FPoseSearchInteractionAvailability,TSizedDefaultAllocator<32>_>_&,TArray<FPoseSearchInteractionAvailability,TSizedDefaultAllocator<32>_>_>
                        (&local_78,&this->Availabilities);
    local_b8.DataPtr = pTVar11->DataPtr;
    local_b8.ArrayNum = pTVar11->ArrayNum;
    local_b8._12_4_ = *(undefined4 *)&pTVar11->field_0xc;
    UPoseSearchInteractionLibrary::MotionMatchInteraction
              (&this->CurrentResult,&local_b8,pUVar3,(FName)0x0,pIVar10,bVar7);
    if ((this->CurrentResult).ActorRootTransforms.ArrayNum !=
        (this->CurrentResult).ActorRootBoneTransforms.ArrayNum) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("CurrentResult.ActorRootTransforms.Num() == CurrentResult.ActorRootBoneTransforms.Num()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\AnimNode_MotionMatchingInteraction.cpp"
                         ,0x45,L"");
      if (bVar7) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    if ((this->CurrentResult).SelectedAnim.field0_0x0.DebugPtr != (UObject *)0x0) {
      pUVar12 = UMultiAnimAsset::StaticClass();
      bVar7 = FObjectPtr::IsA((FObjectPtr *)&this->CurrentResult,pUVar12);
      if ((bVar7) &&
         (pUVar3 = (this->CurrentResult).SelectedAnim.field0_0x0.DebugPtr, pUVar3 != (UObject *)0x0)
         ) {
        pUVar13 = (UAnimationAsset *)(**(code **)(*(longlong *)pUVar3 + 0x2d8))();
        if ((pUVar13 != (UAnimationAsset *)0x0) &&
           ((*(int *)&this->field_0x68 == 0 ||
            ((this->CurrentResult).bIsContinuingPoseSearch == false)))) {
          pFVar14 = UPoseSearchSchema::GetRoledSkeleton
                              ((((this->CurrentResult).SelectedDatabase.field0_0x0.DebugPtr)->Schema
                               ).field0_0x0.DebugPtr,&(this->CurrentResult).Role);
          if (pFVar14 == (FPoseSearchRoledSkeleton *)0x0) {
            bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("RoledSkeleton",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\AnimNode_MotionMatchingInteraction.cpp"
                               ,0x4e,L"");
            if (bVar7) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
          }
          FAnimNode_BlendStack_Standalone::BlendTo
                    ((FAnimNode_BlendStack_Standalone *)this,param_1,pUVar13,
                     (this->CurrentResult).SelectedTime,(this->CurrentResult).bLoop,
                     (this->CurrentResult).bIsMirrored,
                     (pFVar14->MirrorDataTable).field0_0x0.DebugPtr,this->BlendTime,
                     (this->BlendProfile).field0_0x0.DebugPtr,this->BlendOption,
                     this->bUseInertialBlend,(FName)0x0,&(this->CurrentResult).BlendParameters,
                     (this->CurrentResult).WantedPlayRate,0.0,(FName)0x0,CanBeLeader,DoNotSync,false
                    );
          if (this->bUseInertialBlend != false) {
            bVar7 = true;
            goto LAB_14a89edb3;
          }
        }
      }
    }
  }
  bVar7 = false;
LAB_14a89edb3:
  UE::Anim::TOptionalScopedGraphMessage<UE::Anim::FAnimInertializationSyncScope>::
  TOptionalScopedGraphMessage<UE::Anim::FAnimInertializationSyncScope><>
            (local_68,bVar7,(FAnimationBaseContext *)param_1);
  if ((this->CurrentResult).SelectedAnim.field0_0x0.DebugPtr != (UObject *)0x0) {
    FAnimNode_BlendStack_Standalone::UpdatePlayRate
              ((FAnimNode_BlendStack_Standalone *)this,(this->CurrentResult).WantedPlayRate);
    FAnimNode_BlendStack_Standalone::UpdateBlendspaceParameters
              ((FAnimNode_BlendStack_Standalone *)this,this->BlendspaceUpdateMode,
               &(this->CurrentResult).BlendParameters);
  }
  if (-1 < AnimationChannel->Enabled) {
    fVar1 = this->WarpingRotationRatio;
    pFVar15 = ::FString::FString(&local_a8,"WarpingRotationRatio");
    if ((pFVar15->Data).ArrayNum == 0) {
      pwVar18 = L"";
    }
    else {
      pwVar18 = (wchar_t *)(pFVar15->Data).AllocatorInstance.Data;
    }
    FAnimTrace::OutputAnimNodeValue
              ((FAnimationBaseContext *)param_1,*(uint *)((longlong)&param_1->_padding_ + 4),pwVar18
               ,fVar1);
    if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
    }
    fVar1 = this->WarpingTranslationRatio;
    pFVar15 = ::FString::FString(&local_98,"WarpingTranslationRatio");
    if ((pFVar15->Data).ArrayNum != 0) {
      pwVar17 = (wchar_t *)(pFVar15->Data).AllocatorInstance.Data;
    }
    FAnimTrace::OutputAnimNodeValue
              ((FAnimationBaseContext *)param_1,*(uint *)((longlong)&param_1->_padding_ + 4),pwVar17
               ,fVar1);
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
  }
  FAnimNode_BlendStack_Standalone::UpdateAssetPlayer
            ((FAnimNode_BlendStack_Standalone *)this,param_1);
  if (local_68[0].bCondition != false) {
    UE::Anim::FScopedGraphMessage::PopMessage((FScopedGraphMessage *)local_68);
  }
  UE::PoseSearch::FInteractionValidator::~FInteractionValidator(&local_88);
  return;
}

// Reset @ 14a89ef30

void __thiscall
FAnimNode_MotionMatchingInteraction::Reset(FAnimNode_MotionMatchingInteraction *this)

{
  __m128d _Var1;
  TObjectPtr<UObject>_u_0 local_88;
  undefined4 local_80;
  undefined1 local_7c;
  undefined2 local_7b;
  undefined1 local_79;
  undefined8 local_78;
  double local_70;
  double dStack_68;
  double local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined1 local_4c;
  undefined2 local_4b;
  undefined1 local_49;
  FName local_48;
  void *local_40;
  undefined8 local_38;
  void *local_30;
  undefined8 local_28;
  void *local_20;
  undefined8 local_18;
  
  FAnimNode_BlendStack_Standalone::Reset((FAnimNode_BlendStack_Standalone *)this);
  local_78 = 0x3f800000;
  local_7b = 0;
  local_70 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  dStack_68 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_79 = 0;
  local_4b = 0;
  local_49 = 0;
  local_80 = 0;
  local_7c = 0;
  local_4c = 0;
  local_60 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_88.DebugPtr = (UObject *)0x0;
  local_58 = 0;
  local_50 = 0x7f7fffff;
  local_48 = UE::PoseSearch::DefaultRole;
  local_40 = (void *)0x0;
  local_38 = 0;
  local_30 = (void *)0x0;
  local_28 = 0;
  local_20 = (void *)0x0;
  local_18 = 0;
  FPoseSearchBlueprintResult::operator=
            (&this->CurrentResult,(FPoseSearchBlueprintResult *)&local_88.ObjectPtr);
  if (local_20 != (void *)0x0) {
    FMemory::Free(local_20);
  }
  if (local_30 != (void *)0x0) {
    FMemory::Free(local_30);
  }
  if (local_40 != (void *)0x0) {
    FMemory::Free(local_40);
  }
  *&(this->MeshWithOffset).Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->MeshWithOffset).Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->MeshWithOffset).Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->MeshWithOffset).Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->MeshWithOffset).Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(this->MeshWithOffset).Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  *&(this->MeshWithoutOffset).Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->MeshWithoutOffset).Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->MeshWithoutOffset).Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->MeshWithoutOffset).Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->MeshWithoutOffset).Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  _Var1 = UE::Math::TTransform<double>::Identity.Scale3D.ZW;
  this->CachedDeltaTime = 0.0;
  *&(this->MeshWithoutOffset).Scale3D.ZW.m128d_f64 = _Var1.m128d_f64;
  return;
}

// FAnimNode_MotionMatchingInteraction @ 14a8aa660

FAnimNode_MotionMatchingInteraction * __thiscall
FAnimNode_MotionMatchingInteraction::FAnimNode_MotionMatchingInteraction
          (FAnimNode_MotionMatchingInteraction *this)

{
  FName FVar1;
  undefined8 uVar2;
  
  FAnimNode_BlendStack_Standalone::FAnimNode_BlendStack_Standalone
            ((FAnimNode_BlendStack_Standalone *)this);
  this->bValidateResultAgainstAvailabilities = true;
  *(undefined ***)this = &___7FAnimNode_MotionMatchingInteraction__6B_;
  (this->Availabilities).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Availabilities).ArrayNum = 0;
  (this->Availabilities).ArrayMax = 0;
  (this->BlendProfile).field0_0x0.DebugPtr = (UBlendProfile *)0x0;
  (this->CurrentResult).SelectedAnim.field0_0x0.DebugPtr = (UObject *)0x0;
  (this->CurrentResult).SelectedTime = 0.0;
  (this->CurrentResult).bIsContinuingPoseSearch = false;
  (this->CurrentResult).WantedPlayRate = 1.0;
  (this->CurrentResult).bLoop = false;
  FVar1 = UE::PoseSearch::DefaultRole;
  (this->CurrentResult).bIsMirrored = false;
  this->WarpingTranslationRatio = 1.0;
  this->WarpingRotationRatio = 1.0;
  this->bWarpUsingRootBone = true;
  this->bResetOnBecomingRelevant = true;
  this->BlendTime = 0.2;
  this->BlendOption = HermiteCubic;
  this->BlendspaceUpdateMode = InitialOnly;
  this->bUseInertialBlend = false;
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->CurrentResult).BlendParameters.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->CurrentResult).BlendParameters.field0_0x0._s_0.Y = (double)uVar2;
  (this->CurrentResult).BlendParameters.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->CurrentResult).SelectedDatabase.field0_0x0.DebugPtr = (UPoseSearchDatabase *)0x0;
  (this->CurrentResult).Role = FVar1;
  (this->CurrentResult).SearchCost = 3.4028235e+38;
  (this->CurrentResult).bIsInteraction = false;
  (this->CurrentResult).ActorRootTransforms.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CurrentResult).ActorRootTransforms.ArrayNum = 0;
  (this->CurrentResult).ActorRootTransforms.ArrayMax = 0;
  (this->CurrentResult).ActorRootBoneTransforms.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->CurrentResult).ActorRootBoneTransforms.ArrayNum = 0;
  (this->CurrentResult).ActorRootBoneTransforms.ArrayMax = 0;
  (this->CurrentResult).AnimContexts.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CurrentResult).AnimContexts.ArrayNum = 0;
  (this->CurrentResult).AnimContexts.ArrayMax = 0;
  *&(this->MeshWithOffset).Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->MeshWithOffset).Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->MeshWithOffset).Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->MeshWithOffset).Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->MeshWithOffset).Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(this->MeshWithOffset).Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  *&(this->MeshWithoutOffset).Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->MeshWithoutOffset).Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->MeshWithoutOffset).Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->MeshWithoutOffset).Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->MeshWithoutOffset).Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(this->MeshWithoutOffset).Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  (this->UpdateCounter).LastSyncronizedFrame = 0xffffffffffffffff;
  (this->UpdateCounter).Counter = -1;
  (this->UpdateCounter).SkipFrames = 0;
  this->CachedDeltaTime = 0.0;
  return this;
}

// ~FAnimNode_MotionMatchingInteraction @ 14a8ad810

void __thiscall
FAnimNode_MotionMatchingInteraction::~FAnimNode_MotionMatchingInteraction
          (FAnimNode_MotionMatchingInteraction *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->CurrentResult).AnimContexts.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CurrentResult).ActorRootBoneTransforms.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CurrentResult).ActorRootTransforms.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FPoseSearchInteractionAvailability,int>
            ((FPoseSearchInteractionAvailability *)(this->Availabilities).AllocatorInstance.Data,
             (this->Availabilities).ArrayNum);
  pFVar1 = (this->Availabilities).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FAnimNode_BlendStack_Standalone::~FAnimNode_BlendStack_Standalone
            ((FAnimNode_BlendStack_Standalone *)this);
  return;
}

// NeedsReset @ 14a8c1bf0

bool __thiscall
FAnimNode_MotionMatchingInteraction::NeedsReset
          (FAnimNode_MotionMatchingInteraction *this,FAnimationUpdateContext *param_1)

{
  short sVar1;
  short sVar2;
  
  if ((((this->bResetOnBecomingRelevant != false) &&
       (sVar2 = (this->UpdateCounter).Counter, sVar2 != -1)) &&
      ((this->UpdateCounter).LastSyncronizedFrame != 0xffffffffffffffff)) &&
     (sVar2 != *(short *)(param_1->_padding_ + 0x5b0))) {
    sVar1 = (this->UpdateCounter).Counter + 1;
    sVar2 = 0;
    if (sVar1 != -1) {
      sVar2 = sVar1;
    }
    if (((sVar2 == -1) || (GFrameCounter == 0xffffffffffffffff)) ||
       (sVar2 != *(short *)(param_1->_padding_ + 0x5b0))) {
      return true;
    }
  }
  return false;
}

