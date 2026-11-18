// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimationWarpingRuntime
// Functions: 13

// StaticStruct @ 14a715470

UScriptStruct * __cdecl FAnimNode_OrientationWarping::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAnimNode_OrientationWarping.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AnimationWarpingRuntime();
    Z_Registration_Info_UScriptStruct_FAnimNode_OrientationWarping.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_OrientationWarping,(UObject *)pUVar1,
                         L"AnimNode_OrientationWarping");
  }
  return Z_Registration_Info_UScriptStruct_FAnimNode_OrientationWarping.OuterSingleton;
}

// GatherDebugData @ 14a7154b0

void __thiscall
FAnimNode_OrientationWarping::GatherDebugData
          (FAnimNode_OrientationWarping *this,FNodeDebugData *param_1)

{
  ForAnyElementType _Src;
  UPackage *pUVar1;
  UClass *pUVar2;
  UEnum *this_00;
  int iVar3;
  FName local_res8;
  FString local_58;
  TStringView<wchar_t> local_48;
  FString local_38 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAnimNode_OrientationWarping.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AnimationWarpingRuntime();
    Z_Registration_Info_UScriptStruct_FAnimNode_OrientationWarping.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_OrientationWarping,(UObject *)pUVar1,
                         L"AnimNode_OrientationWarping");
  }
  local_res8 = (FName)(Z_Registration_Info_UScriptStruct_FAnimNode_OrientationWarping.OuterSingleton
                      )->_padding_;
  ::FName::ToString(&local_res8,(FString *)&local_48);
  ::FString::PrintfImpl(&local_58,L"%s<W:%.1f%%> %s");
  if (local_48.DataPtr != (wchar_t *)0x0) {
    FMemory::Free(local_48.DataPtr);
  }
  ::FString::Empty(&param_1->NodeDescription);
  if (AnimNodeOrientationWarpingVerbose == 1) {
    if (this->Mode == Manual) {
      ::FString::AppendChars(&local_58,L"\n - Evaluation Mode: (Manual)",0x1d);
      ::FString::PrintfImpl((FString *)&local_48,L"\n - Orientation Angle: (%.3fd)");
    }
    else {
      ::FString::AppendChars(&local_58,L"\n - Evaluation Mode: (Graph)",0x1c);
      ::FString::PrintfImpl((FString *)&local_48,L"\n - Orientation Angle: (%.3fd)");
      iVar3 = local_48.Size + -1;
      if (local_48.Size == 0) {
        iVar3 = 0;
      }
      ::FString::AppendChars(&local_58,local_48.DataPtr,iVar3);
      if (local_48.DataPtr != (wchar_t *)0x0) {
        FMemory::Free(local_48.DataPtr);
      }
      ::FString::PrintfImpl((FString *)&local_48,L"\n - Locomotion Angle: (%.3fd)");
      iVar3 = local_48.Size + -1;
      if (local_48.Size == 0) {
        iVar3 = 0;
      }
      ::FString::AppendChars(&local_58,local_48.DataPtr,iVar3);
      if (local_48.DataPtr != (wchar_t *)0x0) {
        FMemory::Free(local_48.DataPtr);
      }
      ::FString::PrintfImpl((FString *)&local_48,L"\n - Locomotion Delta Angle Threshold: (%.3fd)");
    }
    iVar3 = local_48.Size + -1;
    if (local_48.Size == 0) {
      iVar3 = 0;
    }
    ::FString::AppendChars(&local_58,local_48.DataPtr,iVar3);
    if (local_48.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_48.DataPtr);
    }
    local_48.Size = 0x19;
    local_48.DataPtr = L"/Script/CoreUObject.EAxis";
    pUVar2 = Z_Construct_UClass_UEnum_NoRegister();
    this_00 = (UEnum *)StaticFindObject(pUVar2,(UObject *)0x0,&local_48,None);
    if (this_00 != (UEnum *)0x0) {
      UEnum::GetNameStringByIndex(this_00,local_38,(uint)(this->RotationAxis).Value);
      ::FString::PrintfImpl((FString *)&local_48,L"\n - Rotation Axis: (%s)");
      iVar3 = local_48.Size + -1;
      if (local_48.Size == 0) {
        iVar3 = 0;
      }
      ::FString::AppendChars(&local_58,local_48.DataPtr,iVar3);
      if (local_48.DataPtr != (wchar_t *)0x0) {
        FMemory::Free(local_48.DataPtr);
      }
      if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
      }
    }
    ::FString::PrintfImpl((FString *)&local_48,L"\n - Rotation Interpolation Speed: (%.3fd)");
  }
  else {
    ::FString::PrintfImpl((FString *)&local_48,L"(Orientation Angle: %.3fd)");
  }
  iVar3 = local_48.Size + -1;
  if (local_48.Size == 0) {
    iVar3 = 0;
  }
  ::FString::AppendChars(&local_58,local_48.DataPtr,iVar3);
  if (local_48.DataPtr != (wchar_t *)0x0) {
    FMemory::Free(local_48.DataPtr);
  }
  _Src.Data = local_58.Data.AllocatorInstance.Data;
  local_48.DataPtr = (wchar_t *)0x0;
  iVar3 = local_58.Data.ArrayNum;
  local_48.Size = iVar3;
  if (iVar3 == 0) {
    local_48._8_8_ = local_58.Data._8_8_ & 0xffffffff;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar3,0,(ForAnyElementType *)&local_48,iVar3,(int *)&local_48.field_0xc);
    memcpy(local_48.DataPtr,_Src.Data,(longlong)iVar3 * 2);
  }
  FNodeDebugData::AddDebugItem(param_1,(FString *)&local_48,false);
  FPoseLinkBase::GatherDebugData((FPoseLinkBase *)&this->field_0x10,param_1);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  return;
}

// UpdateInternal @ 14a715890

void __thiscall
FAnimNode_OrientationWarping::UpdateInternal
          (FAnimNode_OrientationWarping *this,FAnimationUpdateContext *param_1)

{
  longlong lVar1;
  code *pcVar2;
  double dVar3;
  undefined8 uVar4;
  bool bVar5;
  short sVar6;
  FRootOffsetProvider *pFVar7;
  short sVar8;
  longlong local_res8;
  longlong *local_res10;
  code **local_res18;
  code *local_28;
  longlong **local_20;
  code *local_18;
  code ***local_10;
  
  FAnimNode_SkeletalControlBase::UpdateInternal((FAnimNode_SkeletalControlBase *)this,param_1);
  if ((((this->bIsFirstUpdate == false) && (sVar8 = (this->UpdateCounter).Counter, sVar8 != -1)) &&
      ((this->UpdateCounter).LastSyncronizedFrame != 0xffffffffffffffff)) &&
     (sVar8 != *(short *)(param_1->_padding_ + 0x5b0))) {
    sVar6 = (this->UpdateCounter).Counter + 1;
    sVar8 = 0;
    if (sVar6 != -1) {
      sVar8 = sVar6;
    }
    if (((sVar8 == -1) || (GFrameCounter == 0xffffffffffffffff)) ||
       (sVar8 != *(short *)(param_1->_padding_ + 0x5b0))) {
      this->bIsFirstUpdate = true;
      uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      (this->RootMotionDeltaDirection).field0_0x0._s_0.X =
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      (this->RootMotionDeltaDirection).field0_0x0._s_0.Y = (double)uVar4;
      (this->RootMotionDeltaDirection).field0_0x0._s_0.Z =
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      (this->ManualRootMotionVelocity).field0_0x0._s_0.X =
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      (this->ManualRootMotionVelocity).field0_0x0._s_0.Y = (double)uVar4;
      (this->ManualRootMotionVelocity).field0_0x0._s_0.Z =
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      this->ActualOrientationAngleRad = 0.0;
    }
  }
  lVar1 = param_1->_padding_;
  (this->UpdateCounter).Counter = *(short *)(lVar1 + 0x5b0);
  (this->UpdateCounter).LastSyncronizedFrame = *(ulong64 *)(lVar1 + 0x5a8);
  (this->UpdateCounter).SkipFrames = *(short *)(lVar1 + 0x5b2);
  this->BlendWeight = param_1->CurrentWeight;
  if (param_1->_padding_ == 0) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1442789968400351459>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimNodeBase.h"
                       ,0xe3,"SharedContext != nullptr");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    local_res10 = &local_res8;
    local_20 = &local_res10;
    local_res8 = 0;
    local_28 = UE::Core::Private::Function::
               TFunctionRefCaller<`FAnimationBaseContext::GetMessage<UE::Anim::FAnimBlendDebugScope>'::__l5::<lambda_1>,void,UE::Anim::FAnimBlendDebugScope_&>
               ::Call;
    local_res18 = &local_28;
    local_10 = &local_res18;
    local_18 = UE::Core::Private::Function::
               TFunctionRefCaller<`UE::Anim::FMessageStack::TopMessage<UE::Anim::FAnimBlendDebugScope>'::__l2::<lambda_1>,void,UE::Anim::IGraphMessage_&>
               ::Call;
    UE::Anim::FMessageStack::TopMessage
              ((FMessageStack *)(param_1->_padding_ + 0x148),
               UE::Anim::FAnimBlendDebugScope::TypeName,
               (TFunctionRef<void___cdecl(UE::Anim::IGraphMessage_&)> *)&local_18);
    if (local_res8 != 0) {
      (this->DebugColor).field0_0x0 = *(FColor_u_0 *)(local_res8 + 0x10);
    }
  }
  if (this->WarpingSpace == RootBoneTransform) {
    pFVar7 = FAnimationBaseContext::GetMessage<UE::AnimationWarping::FRootOffsetProvider>
                       ((FAnimationBaseContext *)param_1);
    if (pFVar7 != (FRootOffsetProvider *)0x0) {
      dVar3 = (pFVar7->RootTransform).Rotation.XY.m128d_f64[1];
      (this->WarpingSpaceTransform).Rotation.XY.m128d_f64[0] =
           (pFVar7->RootTransform).Rotation.XY.m128d_f64[0];
      (this->WarpingSpaceTransform).Rotation.XY.m128d_f64[1] = dVar3;
      dVar3 = (pFVar7->RootTransform).Rotation.ZW.m128d_f64[1];
      (this->WarpingSpaceTransform).Rotation.ZW.m128d_f64[0] =
           (pFVar7->RootTransform).Rotation.ZW.m128d_f64[0];
      (this->WarpingSpaceTransform).Rotation.ZW.m128d_f64[1] = dVar3;
      dVar3 = (pFVar7->RootTransform).Translation.XY.m128d_f64[1];
      (this->WarpingSpaceTransform).Translation.XY.m128d_f64[0] =
           (pFVar7->RootTransform).Translation.XY.m128d_f64[0];
      (this->WarpingSpaceTransform).Translation.XY.m128d_f64[1] = dVar3;
      dVar3 = (pFVar7->RootTransform).Translation.ZW.m128d_f64[1];
      (this->WarpingSpaceTransform).Translation.ZW.m128d_f64[0] =
           (pFVar7->RootTransform).Translation.ZW.m128d_f64[0];
      (this->WarpingSpaceTransform).Translation.ZW.m128d_f64[1] = dVar3;
      dVar3 = (pFVar7->RootTransform).Scale3D.XY.m128d_f64[1];
      (this->WarpingSpaceTransform).Scale3D.XY.m128d_f64[0] =
           (pFVar7->RootTransform).Scale3D.XY.m128d_f64[0];
      (this->WarpingSpaceTransform).Scale3D.XY.m128d_f64[1] = dVar3;
      dVar3 = (pFVar7->RootTransform).Scale3D.ZW.m128d_f64[1];
      (this->WarpingSpaceTransform).Scale3D.ZW.m128d_f64[0] =
           (pFVar7->RootTransform).Scale3D.ZW.m128d_f64[0];
      (this->WarpingSpaceTransform).Scale3D.ZW.m128d_f64[1] = dVar3;
      return;
    }
    lVar1 = param_1->_padding_;
    dVar3 = *(double *)(lVar1 + 0x28);
    (this->WarpingSpaceTransform).Rotation.XY.m128d_f64[0] = *(double *)(lVar1 + 0x20);
    (this->WarpingSpaceTransform).Rotation.XY.m128d_f64[1] = dVar3;
    dVar3 = *(double *)(lVar1 + 0x38);
    (this->WarpingSpaceTransform).Rotation.ZW.m128d_f64[0] = *(double *)(lVar1 + 0x30);
    (this->WarpingSpaceTransform).Rotation.ZW.m128d_f64[1] = dVar3;
    dVar3 = *(double *)(lVar1 + 0x48);
    (this->WarpingSpaceTransform).Translation.XY.m128d_f64[0] = *(double *)(lVar1 + 0x40);
    (this->WarpingSpaceTransform).Translation.XY.m128d_f64[1] = dVar3;
    dVar3 = *(double *)(lVar1 + 0x58);
    (this->WarpingSpaceTransform).Translation.ZW.m128d_f64[0] = *(double *)(lVar1 + 0x50);
    (this->WarpingSpaceTransform).Translation.ZW.m128d_f64[1] = dVar3;
    dVar3 = *(double *)(lVar1 + 0x68);
    (this->WarpingSpaceTransform).Scale3D.XY.m128d_f64[0] = *(double *)(lVar1 + 0x60);
    (this->WarpingSpaceTransform).Scale3D.XY.m128d_f64[1] = dVar3;
    dVar3 = *(double *)(lVar1 + 0x78);
    (this->WarpingSpaceTransform).Scale3D.ZW.m128d_f64[0] = *(double *)(lVar1 + 0x70);
    (this->WarpingSpaceTransform).Scale3D.ZW.m128d_f64[1] = dVar3;
  }
  return;
}

// Initialize_AnyThread @ 14a715b00

void __thiscall
FAnimNode_OrientationWarping::Initialize_AnyThread
          (FAnimNode_OrientationWarping *this,FAnimationInitializeContext *param_1)

{
  undefined8 uVar1;
  
  FAnimNode_SkeletalControlBase::Initialize_AnyThread((FAnimNode_SkeletalControlBase *)this,param_1)
  ;
  this->bIsFirstUpdate = true;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->RootMotionDeltaDirection).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->RootMotionDeltaDirection).field0_0x0._s_0.Y = (double)uVar1;
  (this->RootMotionDeltaDirection).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->ManualRootMotionVelocity).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->ManualRootMotionVelocity).field0_0x0._s_0.Y = (double)uVar1;
  (this->ManualRootMotionVelocity).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  this->ActualOrientationAngleRad = 0.0;
  return;
}

// EvaluateSkeletalControl_AnyThread @ 14a715b70

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAnimNode_OrientationWarping::EvaluateSkeletalControl_AnyThread
          (FAnimNode_OrientationWarping *this,FComponentSpacePoseContext *param_1,
          TArray<FBoneTransform,TSizedDefaultAllocator<32>_> *param_2)

{
  __m128d *p_Var1;
  FCSPose<FCompactPose> *pFVar2;
  float fVar3;
  FAnimInstanceProxy *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined8 uVar15;
  undefined8 uVar16;
  undefined1 auVar17 [12];
  undefined1 auVar18 [12];
  undefined1 auVar19 [12];
  undefined1 auVar20 [12];
  undefined1 auVar21 [12];
  ulonglong uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  bool bVar26;
  char cVar27;
  char cVar28;
  TStatId TVar29;
  IAnimRootMotionProvider *pIVar30;
  TVector<double> *pTVar31;
  UAnimSequenceBase *pUVar32;
  TVector<double> *pTVar33;
  TVector<double>_u_0 *pTVar34;
  TTransform<double> *pTVar35;
  wchar_t *pwVar36;
  int iVar37;
  int iVar38;
  uint uVar39;
  uchar uVar40;
  longlong lVar41;
  ulonglong uVar42;
  ulonglong uVar43;
  ulonglong uVar44;
  ulonglong uVar45;
  float fVar46;
  float fVar47;
  double extraout_XMM0_Qa;
  double dVar48;
  double extraout_XMM0_Qa_00;
  double extraout_XMM0_Qa_01;
  double extraout_XMM0_Qa_02;
  double extraout_XMM0_Qa_03;
  double extraout_XMM0_Qb;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  double extraout_XMM0_Qb_00;
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 extraout_XMM0 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  double extraout_XMM0_Qb_01;
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  uint uVar70;
  float fVar71;
  double dVar72;
  uint uVar91;
  uint uVar92;
  uint uVar93;
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  double dVar73;
  undefined1 auVar80 [16];
  double dVar74;
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
  float fVar94;
  undefined1 in_XMM2 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  float fVar103;
  undefined4 uVar104;
  undefined4 uVar105;
  undefined4 uVar106;
  double dVar107;
  float fVar108;
  double dVar109;
  double dVar110;
  undefined1 auVar111 [16];
  float fVar112;
  undefined8 uVar113;
  double dVar114;
  double dVar115;
  double dVar116;
  double dVar117;
  uint uVar118;
  float fVar119;
  undefined4 uVar120;
  undefined4 uVar121;
  undefined4 uVar122;
  undefined4 uVar123;
  undefined4 uVar124;
  undefined1 auStackY_1908 [32];
  double local_18b0;
  undefined1 local_18a0;
  undefined1 local_189f;
  FIdentityFunctor local_189e [2];
  float local_189c;
  double local_1898;
  TVector<double>_u_0 local_1890;
  FColor_u_0 local_1878;
  FColor_u_0 local_1874;
  FColor_u_0 local_1870;
  FColor_u_0 local_186c;
  FColor_u_0 local_1868;
  FColor_u_0 local_1864;
  FColor_u_0 local_1860;
  FColor_u_0 local_185c;
  FColor_u_0 local_1858;
  FColor_u_0 local_1854;
  FColor_u_0 local_1850;
  FColor_u_0 local_184c;
  FColor_u_0 local_1848;
  FColor_u_0 local_1844;
  FColor_u_0 local_1840 [2];
  double local_1838;
  double dStack_1830;
  float local_1828;
  float local_1824;
  double local_1818;
  double dStack_1810;
  TVector<double>_u_0 local_1808;
  TVector<double>_u_0 local_17f0;
  undefined8 local_17d8;
  undefined8 uStack_17d0;
  double local_17c8;
  double dStack_17c0;
  undefined8 local_17b8;
  FName local_17b0;
  byte local_17a8;
  double local_1798 [2];
  undefined1 local_1778 [16];
  FName local_1768;
  FName local_1760;
  FName local_1758;
  FName local_1750;
  FName local_1748;
  FComponentSpacePoseContext *local_1740;
  TArray<FBoneTransform,TSizedDefaultAllocator<32>_> *local_1738;
  FString local_1730;
  FName local_1720;
  FName local_1718;
  FName local_1710;
  TVector<double>_u_0 local_1708;
  TVector<double>_u_0 local_16f0;
  double local_16d8;
  undefined1 local_16d0;
  float local_16cc;
  undefined4 local_16c8;
  undefined1 local_16c4;
  undefined2 local_16c3;
  undefined1 local_16c1;
  undefined1 local_16c0;
  void *local_16b8;
  undefined8 local_16b0;
  void *local_16a8;
  undefined8 local_16a0;
  undefined1 local_1697;
  TVector<double>_u_0 local_1688;
  FSourceLocation local_1668;
  TVector<double>_u_0 local_1648;
  FString local_1630;
  double local_1618;
  double dStack_1610;
  double local_1608;
  double dStack_1600;
  TVector<double>_u_0 local_15f8;
  TVector<double>_u_0 local_15e0;
  TVector<double>_u_0 local_15c8;
  TVector<double>_u_0 local_15b0;
  TVector<double>_u_0 local_1598;
  TVector<double>_u_0 local_1580;
  TVector<double>_u_0 local_1568;
  TVector<double>_u_0 local_1550;
  TVector<double>_u_0 local_1538;
  TVector<double>_u_0 local_1520;
  TVector<double>_u_0 local_1508;
  TVector<double>_u_0 local_14f0;
  TVector<double>_u_0 local_14d8;
  TVector<double>_u_0 local_14c0;
  TVector<double>_u_0 local_14a8;
  TVector<double>_u_0 local_1490;
  TVector<double>_u_0 local_1478;
  TVector<double>_u_0 local_1460;
  TVector<double>_u_0 local_1448;
  TVector<double>_u_0 local_1430;
  TVector<double>_u_0 local_1418;
  TVector<double>_u_0 local_1400;
  TVector<double>_u_0 local_13e8;
  TVector<double>_u_0 local_13d0;
  TVector<double>_u_0 local_13b8;
  TVector<double>_u_0 local_13a0;
  TVector<double>_u_0 local_1388;
  undefined1 local_1370 [16];
  double local_1360;
  TVector<double>_u_0 local_1358;
  undefined2 local_1337;
  undefined1 local_1335;
  TQuat<double> local_1328;
  TQuat<double> local_1308;
  TTransform<double> local_12e8;
  TVector<double>_u_0 local_1288;
  TVector<double>_u_0 local_1268;
  TVector<double>_u_0 local_1248;
  TVector<double>_u_0 local_1228;
  TVector<double>_u_0 local_1208;
  TVector<double>_u_0 local_11e8;
  TVector<double>_u_0 local_11c8;
  TVector<double>_u_0 local_11b0;
  TVector<double>_u_0 local_1198;
  TVector<double>_u_0 local_1178;
  TVector<double>_u_0 local_1158;
  TVector<double>_u_0 local_1138;
  TVector<double>_u_0 local_1118 [2];
  TVector<double>_u_0 local_10e8;
  undefined1 local_10c8 [16];
  double local_10b8;
  TVector<double>_u_0 local_10b0;
  TVector<double>_u_0 local_1098;
  TVector<double>_u_0 local_1078;
  TVector<double>_u_0 local_1058;
  TQuat<double> local_1038;
  TQuat<double> local_1018;
  TQuat<double> local_ff8;
  TQuat<double> local_fd8;
  TQuat<double> local_fb8;
  TQuat<double> local_f98;
  TQuat<double> local_f78;
  TQuat<double> local_f58;
  TQuat<double> local_f38;
  TQuat<double> local_f18;
  undefined1 local_ef8 [16];
  double local_ee8;
  undefined1 local_ee0 [16];
  double local_ed0;
  undefined1 local_ec8 [16];
  double local_eb8;
  undefined1 local_eb0 [16];
  double local_ea0;
  double local_e98;
  double dStack_e90;
  double local_e88;
  double local_e80;
  double dStack_e78;
  double local_e70;
  double local_e68 [2];
  double local_e58;
  undefined1 local_e50 [16];
  double local_e40;
  undefined1 local_e38 [16];
  double local_e28;
  undefined1 local_e20 [16];
  double local_e10;
  undefined1 local_e08 [16];
  double local_df8;
  undefined1 local_df0 [16];
  double local_de0;
  undefined1 local_dd8 [16];
  double local_dc8;
  undefined1 local_dc0 [16];
  double local_db0;
  undefined1 local_da8 [16];
  double local_d98;
  double local_d90;
  double dStack_d88;
  double local_d80;
  undefined1 local_d78 [16];
  double local_d68;
  undefined1 local_d60 [16];
  double local_d50;
  undefined1 local_d48 [16];
  double local_d38;
  undefined1 local_d30 [16];
  double local_d20;
  undefined1 local_d18 [16];
  double local_d08;
  undefined1 local_d00 [16];
  double local_cf0;
  undefined1 local_ce8 [16];
  double local_cd8;
  undefined1 local_cd0 [16];
  double local_cc0;
  undefined1 local_cb8 [16];
  double local_ca8;
  undefined1 local_ca0 [16];
  double local_c90;
  undefined1 local_c88 [16];
  double local_c78;
  TTransform<double> local_c68;
  TTransform<double> local_c08;
  TTransform<double> local_ba8;
  TVector<double> local_b48;
  TVector<double> local_b30;
  TVector<double> local_b18;
  TVector<double> local_b00;
  TVector<double> local_ae8;
  TVector<double> local_ad0;
  TVector<double> local_ab8;
  TVector<double> local_aa0;
  TVector<double> local_a88;
  TVector<double> local_a70;
  TVector<double> local_a58;
  TVector<double> local_a40;
  TVector<double> local_a28;
  TVector<double> local_a10;
  TVector<double> local_9f8;
  TVector<double> local_9e0;
  double local_9c8 [2];
  double local_9b8 [2];
  double local_9a8 [2];
  double local_998 [2];
  double local_988 [2];
  double local_978 [2];
  undefined1 local_968 [32];
  double local_948;
  double dStack_940;
  undefined1 local_938 [16];
  TStringBuilderBase<wchar_t> local_908;
  wchar_t local_8e8 [1024];
  ulonglong local_e8 [22];
  
  local_e8[0] = __security_cookie.value ^ (ulonglong)auStackY_1908;
  local_1740 = param_1;
  local_1738 = param_2;
  TVar29 = FThreadSafeStaticStatInner<FStat_STAT_OrientationWarping_Eval,1>::GetStatId
                     ((FThreadSafeStaticStatInner<FStat_STAT_OrientationWarping_Eval,1> *)
                      &StatPtr_STAT_OrientationWarping_Eval);
  local_1668.Impl._Line = 0x92;
  local_1668.Impl._Function =
       "void __cdecl FAnimNode_OrientationWarping::EvaluateSkeletalControl_AnyThread(struct FComponentSpacePoseContext &,class TArray<struct FBoneTransform,class TSizedDefaultAllocator<32> > &)"
  ;
  local_1668.Impl._Column = 2;
  local_1668.Impl._File =
       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\AnimationWarping\\Source\\Runtime\\Private\\BoneControllers\\AnimNode_OrientationWarping.cpp"
  ;
  FScopeCycleCounter::FScopeCycleCounter
            ((FScopeCycleCounter *)&local_17b0,*(TStatIdData **)&(TVar29.StatIdPtr)->Name,
             CycleStat|ClearEveryFrame,false,&local_1668);
  if ((param_2->ArrayNum != 0) &&
     (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                         ("OutBoneTransforms.Num() == 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\AnimationWarping\\Source\\Runtime\\Private\\BoneControllers\\AnimNode_OrientationWarping.cpp"
                          ,0x93,L""), bVar26)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  fVar119 = __real_3c8efa35;
  uVar40 = (this->RotationAxis).Value;
  fVar47 = *(float *)(param_1->_padding_ + 0x168);
  fVar108 = this->MaxCorrectionDegrees * __real_3c8efa35;
  if (uVar40 == '\x01') {
    local_1890._s_0.X = UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.X;
    local_1890._s_0.Y = UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Y;
    local_1890._s_0.Z = UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Z;
  }
  else if (uVar40 == '\x02') {
    local_1890._s_0.X = UE::Math::TVector<double>::RightVector.field0_0x0._s_0.X;
    local_1890._s_0.Y = UE::Math::TVector<double>::RightVector.field0_0x0._s_0.Y;
    local_1890._s_0.Z = UE::Math::TVector<double>::RightVector.field0_0x0._s_0.Z;
  }
  else {
    local_1890._s_0.X = UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X;
    local_1890._s_0.Y = UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y;
    local_1890._s_0.Z = UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z;
  }
  bVar26 = false;
  local_17d8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  uStack_17d0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_1808._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_1808._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_18b0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_1808._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_189c = fVar108;
  pIVar30 = UE::Anim::IAnimRootMotionProvider::Get();
  if ((this->Mode == Graph) &&
     (bVar26 = pIVar30 != (IAnimRootMotionProvider *)0x0, pIVar30 == (IAnimRootMotionProvider *)0x0)
     ) {
    local_18a0 = 0;
    `FAnimNode_OrientationWarping::EvaluateSkeletalControl_AnyThread'::__l12::<lambda_1>::operator()
              (&local_18a0);
  }
  local_9c8[0] = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0];
  local_9c8[1] = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1];
  local_9a8[0] = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0];
  local_9a8[1] = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1];
  local_9b8[0] = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0];
  local_9b8[1] = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1];
  local_988[0] = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0];
  local_988[1] = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1];
  local_1824 = this->ActualOrientationAngleRad;
  local_998[0] = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0];
  local_998[1] = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1];
  local_1828 = 0.0;
  local_978[0] = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0];
  local_978[1] = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1];
  if (0.0 < fVar47) {
    this->bUsedFutureRootMotion = false;
  }
  if (this->WarpingSpace == ComponentTransform) {
    lVar41 = param_1->_padding_;
    dVar110 = *(double *)(lVar41 + 0x28);
    (this->WarpingSpaceTransform).Rotation.XY.m128d_f64[0] = *(double *)(lVar41 + 0x20);
    (this->WarpingSpaceTransform).Rotation.XY.m128d_f64[1] = dVar110;
    dVar110 = *(double *)(lVar41 + 0x38);
    (this->WarpingSpaceTransform).Rotation.ZW.m128d_f64[0] = *(double *)(lVar41 + 0x30);
    (this->WarpingSpaceTransform).Rotation.ZW.m128d_f64[1] = dVar110;
    dVar110 = *(double *)(lVar41 + 0x48);
    (this->WarpingSpaceTransform).Translation.XY.m128d_f64[0] = *(double *)(lVar41 + 0x40);
    (this->WarpingSpaceTransform).Translation.XY.m128d_f64[1] = dVar110;
    dVar110 = *(double *)(lVar41 + 0x58);
    (this->WarpingSpaceTransform).Translation.ZW.m128d_f64[0] = *(double *)(lVar41 + 0x50);
    (this->WarpingSpaceTransform).Translation.ZW.m128d_f64[1] = dVar110;
    dVar110 = *(double *)(lVar41 + 0x68);
    (this->WarpingSpaceTransform).Scale3D.XY.m128d_f64[0] = *(double *)(lVar41 + 0x60);
    (this->WarpingSpaceTransform).Scale3D.XY.m128d_f64[1] = dVar110;
    dVar110 = *(double *)(lVar41 + 0x78);
    (this->WarpingSpaceTransform).Scale3D.ZW.m128d_f64[0] = *(double *)(lVar41 + 0x70);
    (this->WarpingSpaceTransform).Scale3D.ZW.m128d_f64[1] = dVar110;
  }
  fVar112 = __real_42652ee0;
  fVar46 = __real_3f800000;
  fVar94 = __real_322bcc77;
  uVar39 = 0;
  if (bVar26) {
    cVar27 = (**(code **)((longlong)*pIVar30 + 0x20))(pIVar30,&param_1->CustomAttributes,local_9c8);
    uVar25 = local_1890._16_8_;
    uVar24 = local_1890._8_8_;
    uVar23 = local_1890._0_8_;
    dVar110 = __real_3e45798ee0000000;
    if (cVar27 == '\0') goto LAB_14a718dc9;
    dVar107 = (this->LocomotionDirection).field0_0x0._s_0.X;
    dVar74 = (this->LocomotionDirection).field0_0x0._s_0.Y;
    dVar48 = (this->LocomotionDirection).field0_0x0._s_0.Z;
    if (dVar74 * dVar74 + dVar107 * dVar107 + dVar48 * dVar48 <= __real_3e45798ee0000000) {
      dVar107 = UE::Math::TRotator<double>::NormalizeAxis((double)this->LocomotionAngle);
      this->LocomotionAngle = (float)dVar107;
      __libm_sse2_sincos_();
      lVar41 = param_1->_padding_;
      local_10e8._s_0.Z = 0.0;
      local_1308.X = extraout_XMM0_Qa * (double)uVar23;
      local_1308.Y = extraout_XMM0_Qa * (double)uVar24;
      local_1038.X = *(double *)(lVar41 + 0x80);
      local_1038.Y = *(double *)(lVar41 + 0x88);
      local_1308.Z = extraout_XMM0_Qa * (double)uVar25;
      local_12e8.Translation.XY.m128d_f64[0] = *(double *)(lVar41 + 0xa0);
      local_12e8.Translation.XY.m128d_f64[1] = *(double *)(lVar41 + 0xa8);
      local_12e8.Scale3D.XY.m128d_f64[0] = *(double *)(lVar41 + 0xc0);
      local_12e8.Scale3D.XY.m128d_f64[1] = *(double *)(lVar41 + 200);
      local_12e8.Translation.ZW.m128d_f64[0] = *(double *)(lVar41 + 0xb0);
      local_12e8.Translation.ZW.m128d_f64[1] = *(double *)(lVar41 + 0xb8);
      local_12e8.Scale3D.ZW.m128d_f64[0] = *(double *)(lVar41 + 0xd0);
      local_12e8.Scale3D.ZW.m128d_f64[1] = *(double *)(lVar41 + 0xd8);
      local_1038.Z = *(double *)(lVar41 + 0x90);
      local_1038.W = *(double *)(lVar41 + 0x98);
      local_10e8._s_0.X = ___xmm_00000000000000003ff0000000000000;
      local_10e8._s_0.Y = _UNK_150689518;
      UE::Math::TQuat<double>::RotateVector
                (&local_1308,(TVector<double> *)&local_10b0._s_0,(TVector<double> *)&local_10e8._s_0
                );
      local_1098._s_0.X = local_10b0._s_0.X;
      local_1098._s_0.Y = local_10b0._s_0.Y;
      local_1098._s_0.Z = local_10b0._s_0.Z;
      pTVar31 = UE::Math::TQuat<double>::UnrotateVector
                          (&local_1038,&local_a70,(TVector<double> *)&local_1098._s_0);
      pTVar31 = UE::Math::TVector<double>::GetSafeNormal
                          (pTVar31,&local_a88,dVar110,&UE::Math::TVector<double>::ZeroVector);
      local_1808._s_0.X = (pTVar31->field0_0x0)._s_0.X;
      local_1808._s_0.Y = (pTVar31->field0_0x0)._s_0.Y;
      local_1808._s_0.Z = (pTVar31->field0_0x0)._s_0.Z;
    }
    else {
      pTVar31 = UE::Math::TTransform<double>::InverseTransformVector
                          (&this->WarpingSpaceTransform,&local_a58,&this->LocomotionDirection);
      local_1808._s_0.Z = (pTVar31->field0_0x0)._s_0.Z;
      local_1808._s_0.X = (pTVar31->field0_0x0)._s_0.X;
      local_1808._s_0.Y = (pTVar31->field0_0x0)._s_0.Y;
      UE::Math::TVector<double>::Normalize((TVector<double> *)&local_1808._s_0,dVar110);
    }
    dVar107 = local_1808._s_0.Y * (double)uVar24 + local_1808._s_0.X * (double)uVar23 +
              local_1808._s_0.Z * (double)uVar25;
    local_1358._s_0.X = local_1808._s_0.X - (double)uVar23 * dVar107;
    local_1358._s_0.Y = local_1808._s_0.Y - (double)uVar24 * dVar107;
    local_1358._s_0.Z = local_1808._s_0.Z - (double)uVar25 * dVar107;
    pTVar31 = UE::Math::TVector<double>::GetSafeNormal
                        ((TVector<double> *)&local_1358._s_0,&local_aa0,dVar110,
                         &UE::Math::TVector<double>::ZeroVector);
    uVar25 = local_1890._s_0.Z;
    uVar24 = local_1890._s_0.Y;
    uVar23 = local_1890._s_0.X;
    local_1808._s_0.X = (pTVar31->field0_0x0)._s_0.X;
    local_1808._s_0.Y = (pTVar31->field0_0x0)._s_0.Y;
    local_1808._s_0.Z = (pTVar31->field0_0x0)._s_0.Z;
    if (this->bUseManualRootMotionVelocity == false) {
      dVar107 = local_9a8[0];
      dVar48 = local_9a8[1];
      dVar74 = local_998[0];
    }
    else {
      dVar107 = (double)fVar47;
      local_ea0 = dVar107 * (this->ManualRootMotionVelocity).field0_0x0._s_0.Z;
      dVar48 = dVar107 * (this->ManualRootMotionVelocity).field0_0x0._s_0.Y;
      dVar107 = dVar107 * (this->ManualRootMotionVelocity).field0_0x0._s_0.X;
      local_998[1] = 0.0;
      local_998[0] = local_ea0;
      uVar106 = (undefined4)((ulonglong)dVar48 >> 0x20);
      local_eb0._8_4_ = SUB84(dVar48,0);
      local_eb0._0_8_ = dVar107;
      local_eb0._12_4_ = uVar106;
      local_9a8[1]._0_4_ = SUB84(dVar48,0);
      local_9a8[0] = dVar107;
      local_9a8[1]._4_4_ = uVar106;
      dVar74 = local_ea0;
    }
    local_f78.Z = (this->RootMotionDeltaRotation).Z;
    local_f78.W = (this->RootMotionDeltaRotation).W;
    dVar117 = local_9c8[0];
    dVar109 = local_9c8[1];
    local_f78.X = (this->RootMotionDeltaRotation).X;
    local_f78.Y = (this->RootMotionDeltaRotation).Y;
    auVar95._8_4_ = SUB84(dVar48,0);
    auVar95._0_8_ = dVar107;
    auVar95._12_4_ = (int)((ulonglong)dVar48 >> 0x20);
    local_1798[0] = local_9c8[0];
    local_1798[1] = local_9c8[1];
    (this->RootMotionDeltaRotation).X = dVar117;
    (this->RootMotionDeltaRotation).Y = dVar109;
    (this->RootMotionDeltaRotation).Z = local_9b8[0];
    (this->RootMotionDeltaRotation).W = local_9b8[1];
    dStack_17c0 = auVar95._8_8_;
    uVar106 = SUB84(local_1890._s_0.Y,0);
    uVar120 = (undefined4)((ulonglong)local_1890._8_8_ >> 0x20);
    uVar121 = SUB84(local_1890._s_0.X,0);
    uVar122 = (undefined4)((ulonglong)local_1890._0_8_ >> 0x20);
    uVar123 = SUB84(local_1890._s_0.Z,0);
    uVar124 = (undefined4)((ulonglong)local_1890._16_8_ >> 0x20);
    auVar99._0_8_ =
         dStack_17c0 * local_1890._s_0.Y + dVar107 * local_1890._s_0.X + dVar74 * local_1890._s_0.Z;
    auVar99._8_8_ = 0;
    dVar107 = dVar107 - local_1890._s_0.X * auVar99._0_8_;
    dVar48 = dStack_17c0 - local_1890._s_0.Y * auVar99._0_8_;
    dStack_17c0 = dVar48;
    local_17c8 = dVar107;
    dVar74 = dVar74 - local_1890._s_0.Z * auVar99._0_8_;
    uVar15 = dVar48;
    uVar16 = dVar74;
    uVar113 = dVar107;
    local_17f0._s_0.X = dVar107;
    local_17f0._s_0.Y = dVar48;
    local_17f0._s_0.Z = dVar74;
    local_17b8 = dVar74;
    if (((0.0 < this->TargetTime) &&
        ((this->CurrentAnimAsset).field0_0x0.DebugPtr != (UAnimationAsset *)0x0)) &&
       (pUVar32 = Cast<UAnimSequenceBase,UAnimationAsset>(&this->CurrentAnimAsset),
       pUVar32 != (UAnimSequenceBase *)0x0)) {
      local_16cc = this->TargetTime;
      local_16d8 = (double)this->CurrentAnimAssetTime;
      local_16c1 = local_1335;
      local_16c3 = local_1337;
      local_16d0 = 1;
      local_16c8 = 0;
      local_16c4 = 0;
      local_16c0 = 0;
      local_16b8 = (void *)0x0;
      local_16b0 = 0;
      local_16a8 = (void *)0x0;
      local_16a0 = 0;
      local_1697 = 0;
      (**(code **)(pUVar32->_padding_ + 0x348))(pUVar32,local_968,&local_16d8);
      local_d80 = local_938._0_8_;
      local_d90 = local_948;
      dStack_d88 = dStack_940;
      dVar117 = (double)uVar24 * dStack_940 + (double)uVar23 * local_948 +
                (double)uVar25 * local_d80;
      uVar113 = local_948 - (double)uVar23 * dVar117;
      uVar15 = dStack_940 - (double)uVar24 * dVar117;
      uVar16 = local_d80 - (double)uVar25 * dVar117;
      auVar99 = local_938;
      local_17f0._s_0.X = (double)uVar113;
      local_17f0._s_0.Y = (double)uVar15;
      local_17f0._s_0.Z = (double)uVar16;
      if (local_16a8 != (void *)0x0) {
        FMemory::Free(local_16a8);
        auVar99 = local_938;
      }
      if (local_16b8 != (void *)0x0) {
        FMemory::Free(local_16b8);
      }
    }
    auVar111._0_8_ = dVar107 * dVar107 + dVar48 * dVar48 + dVar74 * dVar74;
    auVar111._8_8_ = 0;
    auVar95 = sqrtpd(auVar99,auVar111);
    in_XMM2._8_8_ = auVar95._8_8_;
    in_XMM2._0_8_ = auVar95._0_8_ * (__real_3ff0000000000000 / (double)fVar47);
    if (this->MinRootMotionSpeedThreshold <= (float)in_XMM2._0_8_) {
      pTVar31 = &this->RootMotionDeltaDirection;
      local_17d8 = *(double *)&pTVar31->field0_0x0;
      uStack_17d0 = (this->RootMotionDeltaDirection).field0_0x0._s_0.Y;
      local_18b0 = (this->RootMotionDeltaDirection).field0_0x0._s_0.Z;
      local_1708._0_8_ = local_17d8;
      local_1708._s_0.Y = uStack_17d0;
      local_1708._s_0.Z = local_18b0;
      pTVar33 = UE::Math::TVector<double>::GetSafeNormal
                          ((TVector<double> *)&local_17c8,&local_ab8,dVar110,
                           (TVector<double> *)&local_1708._s_0);
      dVar107 = (pTVar33->field0_0x0)._s_0.Y;
      (pTVar31->field0_0x0)._s_0.X = (pTVar33->field0_0x0)._s_0.X;
      (this->RootMotionDeltaDirection).field0_0x0._s_0.Y = dVar107;
      (this->RootMotionDeltaDirection).field0_0x0._s_0.Z = (pTVar33->field0_0x0)._s_0.Z;
      fVar119 = UE::Anim::SignedAngleRadBetweenNormals
                          (pTVar31,(TVector<double> *)&local_1808._s_0,
                           (TVector<double> *)&local_1890._s_0);
      if ((0.0 < this->LocomotionAngleDeltaThreshold) &&
         (this->LocomotionAngleDeltaThreshold <
          (float)((uint)(fVar119 * __real_42652ee0) & __xmm_7fffffff7fffffff7fffffff7fffffff))) {
        fVar119 = FMath::UnwindRadians<float>(fVar119 + __real_40490fdb);
        uVar70 = *(uint *)((longlong)&(this->RootMotionDeltaDirection).field0_0x0 + 8) ^
                 (uint)__xmm_80000000000000008000000000000000;
        uVar91 = *(uint *)((longlong)&(this->RootMotionDeltaDirection).field0_0x0 + 0xc) ^
                 __xmm_80000000000000008000000000000000._4_4_;
        uVar92 = *(uint *)((longlong)&(this->RootMotionDeltaDirection).field0_0x0 + 0x10) ^
                 _UNK_15066df78;
        uVar93 = *(uint *)((longlong)&(this->RootMotionDeltaDirection).field0_0x0 + 0x14) ^
                 _UNK_15066df7c;
        (pTVar31->field0_0x0)._s_0.X =
             (double)CONCAT44((uint)((ulonglong)*(undefined8 *)&pTVar31->field0_0x0 >> 0x20) ^
                              __xmm_80000000000000008000000000000000._4_4_,
                              (uint)*(undefined8 *)&pTVar31->field0_0x0 ^
                              (uint)__xmm_80000000000000008000000000000000);
        *(uint *)((longlong)&(this->RootMotionDeltaDirection).field0_0x0 + 8) = uVar70;
        *(uint *)((longlong)&(this->RootMotionDeltaDirection).field0_0x0 + 0xc) = uVar91;
        *(uint *)((longlong)&(this->RootMotionDeltaDirection).field0_0x0 + 0x10) = uVar92;
        *(uint *)((longlong)&(this->RootMotionDeltaDirection).field0_0x0 + 0x14) = uVar93;
        uVar123 = SUB84(local_1890._s_0.Z,0);
        uVar124 = (undefined4)((ulonglong)local_1890._16_8_ >> 0x20);
        uVar106 = SUB84(local_1890._s_0.Y,0);
        uVar120 = (undefined4)((ulonglong)local_1890._8_8_ >> 0x20);
        uVar121 = SUB84(local_1890._s_0.X,0);
        uVar122 = (undefined4)((ulonglong)local_1890._0_8_ >> 0x20);
        local_18b0 = local_1708._s_0.Z;
        local_17d8 = (double)local_1708._0_8_;
        uStack_17d0 = (double)local_1708._8_8_;
        uVar15 = local_17f0._s_0.Y;
        uVar16 = local_17f0._s_0.Z;
        uVar113 = local_17f0._s_0.X;
      }
      uVar92 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
      uVar91 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
      uVar70 = __xmm_7fffffff7fffffff7fffffff7fffffff;
      if (((0.0 < this->TargetTime) &&
          ((this->CurrentAnimAsset).field0_0x0.DebugPtr != (UAnimationAsset *)0x0)) &&
         ((dVar110 < (double)CONCAT44((uint)((ulonglong)uVar113 >> 0x20) &
                                      __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                      (uint)uVar113 & (uint)__xmm_7fffffffffffffff7fffffffffffffff)
          || ((uVar93 = (uint)uVar15 & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
              uVar118 = (uint)((ulonglong)uVar15 >> 0x20) &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
              dVar110 <= (double)CONCAT44(uVar118,uVar93) &&
              (double)CONCAT44(uVar118,uVar93) != dVar110 ||
              (uVar93 = (uint)uVar16 & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
              uVar118 = (uint)((ulonglong)uVar16 >> 0x20) &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
              dVar110 <= (double)CONCAT44(uVar118,uVar93) &&
              (double)CONCAT44(uVar118,uVar93) != dVar110)))))) {
        UE::Math::TVector<double>::Normalize((TVector<double> *)&local_17f0._s_0,dVar110);
        fVar108 = UE::Anim::SignedAngleRadBetweenNormals
                            ((TVector<double> *)&local_17f0._s_0,(TVector<double> *)&local_1808._s_0
                             ,(TVector<double> *)&local_1890._s_0);
        uVar70 = __xmm_7fffffff7fffffff7fffffff7fffffff;
        if ((float)((uint)fVar108 & __xmm_7fffffff7fffffff7fffffff7fffffff) + __real_38d1b717 <
            (float)((uint)fVar119 & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
          (this->FutureRootMotionDeltaDirection).field0_0x0._s_0.X = local_17f0._s_0.X;
          (this->FutureRootMotionDeltaDirection).field0_0x0._s_0.Y = local_17f0._s_0.Y;
          (this->FutureRootMotionDeltaDirection).field0_0x0._s_0.Z = local_17f0._s_0.Z;
          this->bUsedFutureRootMotion = true;
          fVar119 = fVar108;
        }
      }
      if (this->bCounterCompenstateInterpolationByRootMotion != false) {
        if (((dVar110 < (double)CONCAT44(local_17d8._4_4_ & uVar92,(uint)local_17d8 & uVar91)) ||
            (dVar110 < (double)CONCAT44(uStack_17d0._4_4_ & uVar92,(uint)uStack_17d0 & uVar91))) ||
           (dVar110 < (double)CONCAT44((uint)((ulonglong)local_1708._16_8_ >> 0x20) & uVar92,
                                       SUB84(local_1708._s_0.Z,0) & uVar91))) {
          local_1078._s_0.Z = local_18b0;
          local_1078._0_4_ = (uint)local_17d8;
          local_1078._4_4_ = local_17d8._4_4_;
          local_1078._8_4_ = (uint)uStack_17d0;
          local_1078._12_4_ = uStack_17d0._4_4_;
          pTVar31 = UE::Math::TQuat<double>::UnrotateVector
                              (&local_f78,&local_ad0,(TVector<double> *)&local_1078._s_0);
          local_1828 = UE::Anim::SignedAngleRadBetweenNormals
                                 (&this->RootMotionDeltaDirection,pTVar31,
                                  (TVector<double> *)&local_1890._s_0);
          if ((float)((uint)local_1828 & uVar70) <
              this->MaxRootMotionDeltaToCompensateDegrees * __real_3c8efa35) {
            fVar94 = local_1828 + this->CounterCompensateTargetAngleRad;
            fVar108 = fVar94;
            if ((0.0 < this->CounterCompensateInterpSpeed) && (__real_322bcc77 <= fVar94 * fVar94))
            {
              fVar108 = this->CounterCompensateInterpSpeed * fVar47;
              if (__real_3f800000 <= fVar108) {
                fVar108 = __real_3f800000;
              }
              if (fVar108 <= 0.0) {
                fVar108 = 0.0;
              }
              fVar108 = fVar108 * fVar94;
            }
            fVar46 = FMath::UnwindRadians<float>(fVar108 + this->ActualOrientationAngleRad);
            this->ActualOrientationAngleRad = fVar46;
            this->CounterCompensateTargetAngleRad = fVar94 - fVar108;
          }
        }
      }
      __libm_sse2_sincos_();
      local_1328.X = (double)CONCAT44(uVar122,uVar121) * extraout_XMM0_Qa_00;
      in_XMM2._0_8_ = (double)CONCAT44(uVar120,uVar106) * extraout_XMM0_Qa_00;
      in_XMM2._8_8_ = 0;
      local_1328.Z = (double)CONCAT44(uVar124,uVar123) * extraout_XMM0_Qa_00;
      local_1058._s_0.Z = (double)local_17b8;
      local_1058._s_0.X = local_17c8;
      local_1058._s_0.Y = dStack_17c0;
      local_1328.Y = in_XMM2._0_8_;
      UE::Math::TQuat<double>::RotateVector
                (&local_1328,(TVector<double> *)&local_1288._s_0,(TVector<double> *)&local_1058._s_0
                );
      local_9a8[1] = local_1288._s_0.Y;
      local_9a8[0] = local_1288._s_0.X;
      local_998[1] = 0.0;
      local_998[0] = local_1288._s_0.Z;
    }
    else {
      fVar119 = 0.0;
    }
    cVar28 = (**(code **)((longlong)*pIVar30 + 0x18))(pIVar30,local_9c8,&param_1->CustomAttributes);
    if (cVar28 == '\0') {
      local_189f = 0;
      `FAnimNode_OrientationWarping::EvaluateSkeletalControl_AnyThread'::__l24::<lambda_2>::
      operator()(&local_189f);
      in_XMM2._8_8_ = 0;
      in_XMM2._0_8_ = local_1808._s_0.Z;
    }
    local_17d8 = local_1808._s_0.X;
    uStack_17d0 = local_1808._s_0.Y;
    fVar112 = __real_42652ee0;
    fVar94 = __real_322bcc77;
    fVar46 = __real_3f800000;
    fVar108 = local_189c;
    local_18b0 = local_1808._s_0.Z;
  }
  else {
    dVar110 = UE::Math::TRotator<double>::NormalizeAxis((double)this->OrientationAngle);
    uVar123 = SUB84(local_1890._s_0.Z,0);
    uVar124 = (undefined4)((ulonglong)local_1890._16_8_ >> 0x20);
    uVar121 = SUB84(local_1890._s_0.X,0);
    uVar122 = (undefined4)((ulonglong)local_1890._0_8_ >> 0x20);
    fVar119 = (float)dVar110 * fVar119;
    uVar106 = SUB84(local_1890._s_0.Y,0);
    uVar120 = (undefined4)((ulonglong)local_1890._8_8_ >> 0x20);
    cVar27 = '\0';
  }
  fVar103 = fVar119;
  if ((0.0 < this->RotationInterpSpeed) && (this->bIsFirstUpdate == false)) {
    fVar3 = this->ActualOrientationAngleRad;
    fVar103 = fVar119 - fVar3;
    fVar71 = fVar119;
    if (fVar94 <= fVar103 * fVar103) {
      fVar94 = this->RotationInterpSpeed * fVar47;
      if (fVar46 <= fVar94) {
        fVar94 = fVar46;
      }
      if (fVar94 <= 0.0) {
        fVar94 = 0.0;
      }
      fVar71 = fVar94 * fVar103 + fVar3;
    }
    fVar94 = fVar3 - fVar108;
    in_XMM2 = ZEXT416((uint)fVar94);
    fVar103 = fVar3 + fVar108;
    if (fVar71 <= fVar3 + fVar108) {
      fVar103 = fVar71;
    }
    if (fVar103 <= fVar94) {
      fVar103 = fVar94;
    }
  }
  if (fVar108 <= fVar103) {
    fVar103 = fVar108;
  }
  if (fVar103 <= (float)((uint)fVar108 ^ __xmm_80000000800000008000000080000000)) {
    fVar103 = (float)((uint)fVar108 ^ __xmm_80000000800000008000000080000000);
  }
  fVar103 = fVar103 * *(float *)&this->field_0x24;
  this->ActualOrientationAngleRad = fVar103;
  if (this->bScaleByGlobalBlendWeight != false) {
    this->ActualOrientationAngleRad = fVar103 * this->BlendWeight;
  }
  dVar110 = __real_4059000000000000;
  if (0 < AnimNodeOrientationWarpingDebug) {
    pFVar4 = (FAnimInstanceProxy *)param_1->_padding_;
    local_1818 = (pFVar4->ComponentTransform).Translation.ZW.m128d_f64[0];
    dStack_1810 = (pFVar4->ComponentTransform).Translation.ZW.m128d_f64[1];
    local_12e8.Scale3D.ZW.m128d_f64[0] = (pFVar4->ComponentTransform).Scale3D.ZW.m128d_f64[0];
    local_12e8.Scale3D.ZW.m128d_f64[1] = (pFVar4->ComponentTransform).Scale3D.ZW.m128d_f64[1];
    dVar107 = (pFVar4->ComponentTransform).Rotation.XY.m128d_f64[0];
    dVar74 = (pFVar4->ComponentTransform).Rotation.XY.m128d_f64[1];
    local_1778 = *(undefined1 (*) [16])(pFVar4->ComponentTransform).Rotation.XY.m128d_f64;
    p_Var1 = &(pFVar4->ComponentTransform).Rotation.ZW;
    dVar48 = p_Var1->m128d_f64[0];
    dVar117 = (pFVar4->ComponentTransform).Rotation.ZW.m128d_f64[1];
    local_1798 = *&p_Var1->m128d_f64;
    auVar95 = *(undefined1 (*) [16])(pFVar4->ComponentTransform).Translation.XY.m128d_f64;
    uVar7 = auVar95._8_4_;
    uVar8 = auVar95._12_4_;
    local_12e8.Scale3D.XY.m128d_f64[0] = (pFVar4->ComponentTransform).Scale3D.XY.m128d_f64[0];
    local_12e8.Scale3D.XY.m128d_f64[1] = (pFVar4->ComponentTransform).Scale3D.XY.m128d_f64[1];
    local_f98.Z = (pFVar4->ActorTransform).Rotation.ZW.m128d_f64[0];
    local_f98.W = (pFVar4->ActorTransform).Rotation.ZW.m128d_f64[1];
    local_f98.X = (pFVar4->ActorTransform).Rotation.XY.m128d_f64[0];
    local_f98.Y = (pFVar4->ActorTransform).Rotation.XY.m128d_f64[1];
    local_1268._s_0.X = ___xmm_00000000000000003ff0000000000000;
    local_1268._s_0.Y = _UNK_150689518;
    local_1268._s_0.Z = 0.0;
    UE::Math::TQuat<double>::RotateVector
              (&local_f98,(TVector<double> *)&local_1648._s_0,(TVector<double> *)&local_1268._s_0);
    uVar23 = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Z;
    local_1838 = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.X;
    local_1898 = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Y;
    fVar108 = __real_437f0000;
    if (AnimNodeOrientationWarpingDebugTransparency != 0) {
      fVar108 = this->BlendWeight * __real_437f0000;
    }
    local_189c = fVar108;
    if (cVar27 == '\0') {
      pTVar34 = &local_1228;
      local_1228._s_0.X = local_1648._s_0.X;
      local_1228._s_0.Y = local_1648._s_0.Y;
      local_1228._s_0.Z = local_1648._s_0.Z;
    }
    else {
      local_1248._s_0.X = local_17d8;
      local_1248._s_0.Y = uStack_17d0;
      local_1248._s_0.Z = local_18b0;
      local_fb8.X = dVar107;
      local_fb8.Y = dVar74;
      local_fb8.Z = dVar48;
      local_fb8.W = dVar117;
      pTVar34 = &UE::Math::TQuat<double>::RotateVector
                           (&local_fb8,&local_ae8,(TVector<double> *)&local_1248._s_0)->field0_0x0;
    }
    local_1360 = (pTVar34->_s_0).Z;
    local_1850._s_0.B = (this->DebugColor).field0_0x0._s_0.B;
    dVar74 = auVar95._0_8_;
    local_1850._s_0.G = (this->DebugColor).field0_0x0._s_0.G;
    local_1850._s_0.R = (this->DebugColor).field0_0x0._s_0.R;
    dVar109 = (((TVector<double>_u_0 *)&(pTVar34->_s_0).X)->_s_0).X * dVar110;
    uVar40 = (uchar)(int)fVar108;
    dVar107 = (pTVar34->_s_0).Y * dVar110;
    local_15f8._s_0.X = local_1838 + dVar74 + dVar109;
    dVar114 = local_1360 * dVar110;
    dVar117 = auVar95._8_8_;
    local_15f8._s_0.Y = local_1898 + dVar117 + dVar107;
    local_d68 = local_1818;
    local_15f8._s_0.Z = (double)uVar23 + local_1818 + dVar114;
    local_1850._s_0.A = uVar40;
    local_d78 = auVar95;
    FAnimInstanceProxy::AnimDrawDebugCircle
              (pFVar4,(TVector<double> *)&local_15f8._s_0,__real_40800000,8,
               (FColor *)&local_1850._s_0,&UE::Math::TVector<double>::UpVector,false,0.0,SDPG_World,
               __real_3f800000);
    dVar48 = local_1898;
    local_cf0 = local_1818;
    local_15e0._s_0.X = local_1838 + dVar74 + dVar109;
    local_cd8 = local_1818;
    local_15e0._s_0.Y = local_1898 + dVar117 + dVar107;
    local_15e0._s_0.Z = (double)uVar23 + local_1818 + dVar114;
    local_15c8._s_0.X = local_1838 + dVar74;
    local_15c8._s_0.Y = local_1898 + dVar117;
    local_15c8._s_0.Z = (double)uVar23 + local_1818;
    local_d00 = auVar95;
    local_ce8 = auVar95;
    FAnimInstanceProxy::AnimDrawDebugDirectionalArrow
              ((FAnimInstanceProxy *)param_1->_padding_,(TVector<double> *)&local_15c8._s_0,
               (TVector<double> *)&local_15e0._s_0,__real_42200000,&FColor::Red,false,0.0,
               __real_40000000,SDPG_World);
    if (cVar27 == '\0') {
      pTVar31 = UE::Math::TVector<double>::RotateAngleAxis
                          ((TVector<double> *)&local_1648._s_0,&local_b30,
                           (double)this->OrientationAngle,(TVector<double> *)&local_1890._s_0);
    }
    else {
      local_fd8.X = (double)local_1778._0_8_;
      local_fd8.Y = (double)local_1778._8_8_;
      local_1208._s_0.X = (this->RootMotionDeltaDirection).field0_0x0._s_0.X;
      local_1208._s_0.Y = (this->RootMotionDeltaDirection).field0_0x0._s_0.Y;
      local_fd8.Z = local_1798[0];
      local_fd8.W = local_1798[1];
      local_1208._s_0.Z = (this->RootMotionDeltaDirection).field0_0x0._s_0.Z;
      pTVar31 = UE::Math::TQuat<double>::RotateVector
                          (&local_fd8,&local_9f8,(TVector<double> *)&local_1208._s_0);
    }
    local_11c8._s_0.X = (pTVar31->field0_0x0)._s_0.X;
    local_11c8._s_0.Y = (pTVar31->field0_0x0)._s_0.Y;
    local_11c8._s_0.Z = (pTVar31->field0_0x0)._s_0.Z;
    local_1838 = local_1838 + UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.X;
    local_1898 = dVar48 + UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Y;
    dVar109 = (double)uVar23 + UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Z;
    local_184c._s_0.B = (this->DebugColor).field0_0x0._s_0.B;
    local_184c._s_0.G = (this->DebugColor).field0_0x0._s_0.G;
    local_184c._s_0.R = (this->DebugColor).field0_0x0._s_0.R;
    dVar107 = local_11c8._s_0.Y * dVar110;
    dVar114 = local_11c8._s_0.X * dVar110;
    local_15b0._s_0.Y = dVar117 + local_1898 + dVar107;
    dVar115 = local_11c8._s_0.Z * dVar110;
    local_15b0._s_0.X = dVar74 + local_1838 + dVar114;
    local_d20 = local_1818;
    local_15b0._s_0.Z = local_1818 + dVar109 + dVar115;
    dVar48 = dStack_1810;
    local_184c._s_0.A = uVar40;
    local_d30 = auVar95;
    FAnimInstanceProxy::AnimDrawDebugCircle
              ((FAnimInstanceProxy *)param_1->_padding_,(TVector<double> *)&local_15b0._s_0,
               __real_40800000,8,(FColor *)&local_184c._s_0,&UE::Math::TVector<double>::UpVector,
               false,0.0,SDPG_World,__real_3f800000);
    local_1848._s_0.B = FColor::Blue.field0_0x0._0_1_;
    auVar17._4_8_ = dVar48;
    auVar17._0_4_ = auVar95._4_4_;
    auVar75._0_8_ = auVar17._0_8_ << 0x20;
    auVar75._8_4_ = uVar7;
    auVar75._12_4_ = uVar8;
    local_1848._s_0.G = FColor::Blue.field0_0x0._1_1_;
    local_1598._s_0.X = dVar74 + local_1838 + dVar114;
    local_1848._s_0.R = FColor::Blue.field0_0x0._2_1_;
    local_1598._s_0.Y = auVar75._8_8_ + local_1898 + dVar107;
    local_c78 = local_1818;
    local_1598._s_0.Z = local_1818 + dVar109 + dVar115;
    local_1580._s_0.X = dVar74 + local_1838;
    local_cc0 = local_1818;
    local_1580._s_0.Z = local_1818 + dVar109;
    auVar76._0_8_ = auVar95._4_8_ << 0x20;
    auVar76._8_4_ = uVar7;
    auVar76._12_4_ = uVar8;
    local_1580._s_0.Y = auVar76._8_8_ + local_1898;
    local_1848._s_0.A = uVar40;
    local_cd0 = auVar95;
    local_c88 = auVar95;
    FAnimInstanceProxy::AnimDrawDebugDirectionalArrow
              ((FAnimInstanceProxy *)param_1->_padding_,(TVector<double> *)&local_1580._s_0,
               (TVector<double> *)&local_1598._s_0,__real_42200000,(FColor *)&local_1848._s_0,false,
               0.0,__real_40000000,SDPG_World);
    dVar107 = local_1898;
    if ((this->bUsedFutureRootMotion != false) && (cVar27 != '\0')) {
      local_11e8._s_0.Z = (this->FutureRootMotionDeltaDirection).field0_0x0._s_0.Z;
      local_ff8.X = (double)local_1778._0_8_;
      local_ff8.Y = (double)local_1778._8_8_;
      local_ff8.Z = local_1798[0];
      local_ff8.W = local_1798[1];
      local_11e8._s_0.X = (this->FutureRootMotionDeltaDirection).field0_0x0._s_0.X;
      local_11e8._s_0.Y = (this->FutureRootMotionDeltaDirection).field0_0x0._s_0.Y;
      UE::Math::TQuat<double>::RotateVector
                (&local_ff8,(TVector<double> *)&local_1568._s_0,(TVector<double> *)&local_11e8._s_0)
      ;
      local_1844._s_0.B = (this->DebugColor).field0_0x0._s_0.B;
      local_1844._s_0.G = (this->DebugColor).field0_0x0._s_0.G;
      local_1844._s_0.R = (this->DebugColor).field0_0x0._s_0.R;
      local_1550._s_0.X = local_1838 + dVar74 + local_1568._s_0.X * dVar110;
      local_1550._s_0.Y = local_1898 + dVar117 + local_1568._s_0.Y * dVar110;
      local_ca8 = local_1818;
      local_1550._s_0.Z = dVar109 + local_1818 + local_1568._s_0.Z * dVar110;
      local_1844._s_0.A = uVar40;
      local_cb8 = auVar95;
      FAnimInstanceProxy::AnimDrawDebugCircle
                ((FAnimInstanceProxy *)param_1->_padding_,(TVector<double> *)&local_1550._s_0,
                 __real_40800000,8,(FColor *)&local_1844._s_0,&UE::Math::TVector<double>::UpVector,
                 false,0.0,SDPG_World,__real_3f800000);
      dVar107 = local_1898;
      local_1840[0]._0_1_ = FColor::Yellow.field0_0x0._0_1_;
      local_1840[0]._1_1_ = FColor::Yellow.field0_0x0._1_1_;
      local_1840[0]._2_1_ = FColor::Yellow.field0_0x0._2_1_;
      local_1538._s_0.X = local_1838 + dVar74 + local_1568._s_0.X * dVar110;
      local_c90 = local_1818;
      local_1538._s_0.Y = local_1898 + dVar117 + local_1568._s_0.Y * dVar110;
      local_1538._s_0.Z = dVar109 + local_1818 + local_1568._s_0.Z * dVar110;
      local_1520._s_0.X = local_1838 + dVar74;
      local_ee8 = local_1818;
      local_1520._s_0.Y = local_1898 + dVar117;
      local_1520._s_0.Z = dVar109 + local_1818;
      local_1840[0]._3_1_ = uVar40;
      local_ef8 = auVar95;
      local_ca0 = auVar95;
      FAnimInstanceProxy::AnimDrawDebugDirectionalArrow
                ((FAnimInstanceProxy *)param_1->_padding_,(TVector<double> *)&local_1520._s_0,
                 (TVector<double> *)&local_1538._s_0,__real_42200000,(FColor *)&local_1840[0]._s_0,
                 false,0.0,__real_40000000,SDPG_World);
    }
    if (cVar27 == '\0') {
      pTVar31 = &local_b00;
      pTVar34 = &local_1648;
    }
    else {
      pTVar31 = &local_b18;
      pTVar34 = &local_11c8;
    }
    pTVar31 = UE::Math::TVector<double>::RotateAngleAxis
                        ((TVector<double> *)&pTVar34->_s_0,pTVar31,
                         (double)(this->ActualOrientationAngleRad * __real_42652ee0),
                         (TVector<double> *)&local_1890._s_0);
    local_1838 = local_1838 + UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.X;
    local_1898 = dVar107 + UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Y;
    local_1360 = (pTVar31->field0_0x0)._s_0.Z;
    local_1878._s_0.B = (this->DebugColor).field0_0x0._s_0.B;
    dVar109 = dVar109 + UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Z;
    local_1878._s_0.G = (this->DebugColor).field0_0x0._s_0.G;
    local_1878._s_0.R = (this->DebugColor).field0_0x0._s_0.R;
    dVar107 = (pTVar31->field0_0x0)._s_0.Y * dVar110;
    local_1878._s_0.A = (uchar)(int)local_189c;
    dVar114 = (pTVar31->field0_0x0)._s_0.X * dVar110;
    local_1508._s_0.Y = dVar117 + local_1898 + dVar107;
    dVar115 = local_1360 * dVar110;
    local_1508._s_0.X = dVar74 + local_1838 + dVar114;
    local_ed0 = local_1818;
    local_1508._s_0.Z = local_1818 + dVar109 + dVar115;
    dVar48 = dStack_1810;
    local_ee0 = auVar95;
    FAnimInstanceProxy::AnimDrawDebugCircle
              ((FAnimInstanceProxy *)param_1->_padding_,(TVector<double> *)&local_1508._s_0,
               __real_40800000,8,(FColor *)&local_1878._s_0,&UE::Math::TVector<double>::UpVector,
               false,0.0,SDPG_World,__real_3f800000);
    local_1874._s_0.B = FColor::Green.field0_0x0._0_1_;
    auVar18._4_8_ = dVar48;
    auVar18._0_4_ = auVar95._4_4_;
    auVar77._0_8_ = auVar18._0_8_ << 0x20;
    auVar77._8_4_ = uVar7;
    auVar77._12_4_ = uVar8;
    local_1874._s_0.G = FColor::Green.field0_0x0._1_1_;
    local_14f0._s_0.X = dVar74 + local_1838 + dVar114;
    local_1874._s_0.R = FColor::Green.field0_0x0._2_1_;
    local_14f0._s_0.Y = auVar77._8_8_ + local_1898 + dVar107;
    local_1874._s_0.A = (uchar)(int)local_189c;
    local_eb8 = local_1818;
    local_14f0._s_0.Z = local_1818 + dVar109 + dVar115;
    local_14d8._s_0.X = dVar74 + local_1838;
    local_14d8._s_0.Y = dVar117 + local_1898;
    local_1360 = local_1818;
    local_14d8._s_0.Z = local_1818 + dVar109;
    local_1370 = auVar95;
    local_ec8 = auVar95;
    FAnimInstanceProxy::AnimDrawDebugDirectionalArrow
              ((FAnimInstanceProxy *)param_1->_padding_,(TVector<double> *)&local_14d8._s_0,
               (TVector<double> *)&local_14f0._s_0,__real_42200000,(FColor *)&local_1874._s_0,false,
               0.0,__real_40000000,SDPG_World);
    fVar112 = __real_42652ee0;
    local_908.Base = local_8e8;
    local_908.CurPos = local_8e8;
    local_908.End = (wchar_t *)local_e8;
    local_908.bIsDynamic = false;
    local_908.bIsExternal = false;
    if (this->Mode == Manual) {
      TStringBuilderBase<wchar_t>::AppendfImpl
                (&local_908,L"\n - Previous Orientation Angle: (%.3fd)");
      TStringBuilderBase<wchar_t>::AppendfImpl(&local_908,L"\n - Orientation Angle: (%.3fd)");
      pwVar36 = L"\n - Target Orientation Angle: (%.3fd)";
    }
    else {
      if (0.0 < this->RotationInterpSpeed) {
        TStringBuilderBase<wchar_t>::AppendfImpl
                  (&local_908,L"\n - Previous Orientation Angle: (%.3fd)");
        TStringBuilderBase<wchar_t>::AppendfImpl
                  (&local_908,L"\n - Root Motion Frame Delta Angle: (%.3fd)");
      }
      TStringBuilderBase<wchar_t>::AppendfImpl(&local_908,L"\n - Actual Orientation Angle: (%.3fd)")
      ;
      TStringBuilderBase<wchar_t>::AppendfImpl(&local_908,L"\n - Target Orientation Angle: (%.3fd)")
      ;
      TStringBuilderBase<wchar_t>::AppendfImpl(&local_908,L"\n - Locomotion Angle: (%.3fd)");
      local_e88 = local_998[0];
      local_e98 = local_9a8[0];
      dStack_e90 = local_9a8[1];
      ::FString::PrintfImpl(&local_1730,L"X=%3.3f Y=%3.3f Z=%3.3f");
      TStringBuilderBase<wchar_t>::AppendfImpl(&local_908,L"\n - Root Motion Delta: %s)");
      if (local_1730.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1730.Data.AllocatorInstance.Data);
      }
      pwVar36 = L"\n - Root Motion Speed: %.3fd)";
      local_e80 = local_9a8[0];
      dStack_e78 = local_9a8[1];
      local_e70 = local_998[0];
    }
    TStringBuilderBase<wchar_t>::AppendfImpl(&local_908,pwVar36);
    pFVar4 = (FAnimInstanceProxy *)param_1->_padding_;
    local_14c0._s_0.X =
         UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X *
         (double)__xmm_40490000000000004049000000000000;
    local_14c0._s_0.Y =
         UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y *
         __xmm_40490000000000004049000000000000._8_8_;
    local_14c0._s_0.Z =
         UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z *
         (double)__xmm_40490000000000004049000000000000;
    in_XMM2 = ___xmm_40490000000000004049000000000000;
    if (local_908.End < local_908.CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(&local_908,1);
    }
    *local_908.CurPos = L'\0';
    ::FString::FString(&local_1630,local_908.Base);
    FAnimInstanceProxy::AnimDrawDebugInWorldMessage
              (pFVar4,&local_1630,(TVector<double> *)&local_14c0._s_0,&FColor::Yellow,
               __real_3f800000);
    if (local_1630.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1630.Data.AllocatorInstance.Data);
    }
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_908);
  }
  fVar108 = this->ActualOrientationAngleRad;
  FAnimTrace::OutputAnimNodeValue
            ((FAnimationBaseContext *)param_1,*(uint *)((longlong)&param_1->_padding_ + 4),
             L"Previous OrientationAngle Degrees",local_1824 * fVar112);
  FAnimTrace::OutputAnimNodeValue
            ((FAnimationBaseContext *)param_1,*(uint *)((longlong)&param_1->_padding_ + 4),
             L"Actual Orientation Angle Degrees",fVar108 * fVar112);
  FAnimTrace::OutputAnimNodeValue
            ((FAnimationBaseContext *)param_1,*(uint *)((longlong)&param_1->_padding_ + 4),
             L"Target Orientation Angle Degrees",fVar119 * fVar112);
  if (this->Mode == Graph) {
    FAnimTrace::OutputAnimNodeValue
              ((FAnimationBaseContext *)param_1,*(uint *)((longlong)&param_1->_padding_ + 4),
               L"Root Motion Delta Angle Degrees",local_1828 * fVar112);
    FAnimTrace::OutputAnimNodeValue
              ((FAnimationBaseContext *)param_1,*(uint *)((longlong)&param_1->_padding_ + 4),
               L"Locomotion Angle",this->LocomotionAngle);
    local_11b0._s_0.X = local_9a8[0];
    local_11b0._s_0.Y = local_9a8[1];
    local_11b0._s_0.Z = local_998[0];
    FAnimTrace::OutputAnimNodeValue
              ((FAnimationBaseContext *)param_1,*(uint *)((longlong)&param_1->_padding_ + 4),
               L"Root Motion Translation Delta",(TVector<double> *)&local_11b0._s_0);
    auVar19._4_8_ = in_XMM2._8_8_;
    auVar19._0_4_ = local_9a8[0]._4_4_;
    auVar96._0_8_ = auVar19._0_8_ << 0x20;
    auVar96._8_4_ = local_9a8[1]._0_4_;
    auVar96._12_4_ = local_9a8[1]._4_4_;
    local_e58 = local_998[0];
    local_e68[0] = local_9a8[0];
    local_e68[1] = local_9a8[1];
    FAnimTrace::OutputAnimNodeValue
              ((FAnimationBaseContext *)param_1,*(uint *)((longlong)&param_1->_padding_ + 4),
               L"Root Motion Speed",
               (float)(SQRT(auVar96._8_8_ * auVar96._8_8_ + local_9a8[0] * local_9a8[0] +
                            local_998[0] * local_998[0]) *
                      (__real_3ff0000000000000 / (double)fVar47)));
  }
  iVar37 = FVisualLogger::bIsRecording;
  bVar26 = FVisualLogger::bIsRecording != 0;
  if (FVisualLogger::bIsRecording != 0) {
    lVar41 = param_1->_padding_;
    local_1818 = *(double *)(lVar41 + 0x20);
    dStack_1810 = *(double *)(lVar41 + 0x28);
    local_12e8.Scale3D.ZW.m128d_f64[0] = *(double *)(lVar41 + 0x70);
    local_12e8.Scale3D.ZW.m128d_f64[1] = *(double *)(lVar41 + 0x78);
    auVar95 = *(undefined1 (*) [16])(lVar41 + 0x40);
    dVar74 = auVar95._0_8_;
    uVar7 = auVar95._8_4_;
    uVar8 = auVar95._12_4_;
    dVar107 = *(double *)(lVar41 + 0x50);
    local_1838 = *(double *)(lVar41 + 0x30);
    dStack_1830 = *(double *)(lVar41 + 0x38);
    local_12e8.Scale3D.XY.m128d_f64[0] = *(double *)(lVar41 + 0x60);
    local_12e8.Scale3D.XY.m128d_f64[1] = *(double *)(lVar41 + 0x68);
    local_1018.Z = *(double *)(lVar41 + 0xf0);
    local_1018.W = *(double *)(lVar41 + 0xf8);
    local_1198._s_0.X = ___xmm_00000000000000003ff0000000000000;
    local_1198._s_0.Y = _UNK_150689518;
    local_1018.X = *(double *)(lVar41 + 0xe0);
    local_1018.Y = *(double *)(lVar41 + 0xe8);
    local_1198._s_0.Z = 0.0;
    UE::Math::TQuat<double>::RotateVector
              (&local_1018,(TVector<double> *)&local_1688._s_0,(TVector<double> *)&local_1198._s_0);
    uVar25 = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Z;
    uVar24 = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Y;
    uVar23 = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.X;
    fVar47 = __real_437f0000;
    if (AnimNodeOrientationWarpingDebugTransparency != 0) {
      fVar47 = this->BlendWeight * __real_437f0000;
    }
    if (cVar27 == '\0') {
      pTVar34 = &local_1158;
      dVar48 = 0.0;
      local_1158._s_0.X = local_1688._s_0.X;
      local_1158._s_0.Y = local_1688._s_0.Y;
      local_1158._s_0.Z = local_1688._s_0.Z;
    }
    else {
      local_f58.X = local_1818;
      local_f58.Y = dStack_1810;
      local_f58.Z = local_1838;
      local_f58.W = dStack_1830;
      local_1178._s_0.X = local_17d8;
      local_1178._s_0.Y = uStack_17d0;
      local_1178._s_0.Z = local_18b0;
      dVar48 = dStack_1830;
      pTVar34 = &UE::Math::TQuat<double>::RotateVector
                           (&local_f58,&local_a40,(TVector<double> *)&local_1178._s_0)->field0_0x0;
    }
    dVar117 = (pTVar34->_s_0).Z;
    local_10b8 = dVar117;
    local_1798 = *(double (*) [2])&(pTVar34->_s_0).X;
    uVar104 = local_1798[1]._0_4_;
    uVar105 = local_1798[1]._4_4_;
    dVar109 = local_1798[1];
    local_1778._8_4_ = uVar104;
    local_1778._0_8_ = dVar109;
    local_1778._12_4_ = uVar105;
    dVar114 = auVar95._8_8_;
    if (bVar26) {
      local_1870._s_0.B = (this->DebugColor).field0_0x0._s_0.B;
      local_1870._s_0.G = (this->DebugColor).field0_0x0._s_0.G;
      local_1870._s_0.R = (this->DebugColor).field0_0x0._s_0.R;
      auVar20._4_8_ = dVar109;
      auVar20._0_4_ = auVar95._4_4_;
      auVar97._0_8_ = auVar20._0_8_ << 0x20;
      auVar97._8_4_ = uVar7;
      auVar97._12_4_ = uVar8;
      local_14a8._s_0.X = (double)uVar23 + dVar74 + local_1798[0] * dVar110;
      local_1870._s_0.A = (uchar)(int)fVar47;
      local_14a8._s_0.Y = auVar97._8_8_ + (double)uVar24 + dVar109 * dVar110;
      local_14a8._s_0.Z = (double)uVar25 + dVar107 + dVar117 * dVar110;
      dVar48 = 0.0;
      local_e50 = auVar95;
      local_e40 = dVar107;
      ::FName::FName(&local_1718,"OrientationWarping");
      FVisualLogger::DiscLogfImpl
                (*(UObject **)(param_1->_padding_ + 0x140),&local_1718,Display,
                 (TVector<double> *)&local_14a8._s_0,&UE::Math::TVector<double>::UpVector,
                 __real_40800000,(FColor *)&local_1870._s_0,1,false,L"");
      uVar104 = local_1778._0_4_;
      uVar105 = local_1778._4_4_;
      iVar37 = FVisualLogger::bIsRecording;
    }
    iVar38 = 0;
    if (iVar37 != 0) {
      local_186c._s_0.B = FColor::Red.field0_0x0._0_1_;
      local_186c._s_0.G = FColor::Red.field0_0x0._1_1_;
      local_186c._s_0.R = FColor::Red.field0_0x0._2_1_;
      auVar21._4_8_ = dVar48;
      auVar21._0_4_ = auVar95._4_4_;
      auVar78._0_8_ = auVar21._0_8_ << 0x20;
      auVar78._8_4_ = uVar7;
      auVar78._12_4_ = uVar8;
      local_1490._s_0.X = (double)uVar23 + dVar74 + local_1798[0] * dVar110;
      local_186c._s_0.A = (uchar)(int)fVar47;
      local_1490._s_0.Y =
           auVar78._8_8_ + (double)uVar24 + (double)CONCAT44(uVar105,uVar104) * dVar110;
      local_1490._s_0.Z = (double)uVar25 + dVar107 + dVar117 * dVar110;
      auVar79._0_8_ = auVar95._4_8_ << 0x20;
      auVar79._8_4_ = uVar7;
      auVar79._12_4_ = uVar8;
      local_1478._s_0.Y = auVar79._8_8_ + (double)uVar24;
      local_1478._s_0.X = (double)uVar23 + dVar74;
      local_1478._s_0.Z = (double)uVar25 + dVar107;
      local_e38 = auVar95;
      local_e28 = dVar107;
      local_e20 = auVar95;
      local_e10 = dVar107;
      ::FName::FName(&local_1710,"OrientationWarping");
      FVisualLogger::ArrowLineLogfImpl
                (*(UObject **)(param_1->_padding_ + 0x140),&local_1710,Display,
                 (TVector<double> *)&local_1478._s_0,(TVector<double> *)&local_1490._s_0,
                 (FColor *)&local_186c._s_0,0,L"");
      iVar38 = FVisualLogger::bIsRecording;
    }
    if (cVar27 == '\0') {
      pTVar31 = UE::Math::TVector<double>::RotateAngleAxis
                          ((TVector<double> *)&local_1688._s_0,&local_a10,
                           (double)this->OrientationAngle,(TVector<double> *)&local_1890._s_0);
    }
    else {
      local_1138._s_0.Z = (this->RootMotionDeltaDirection).field0_0x0._s_0.Z;
      local_f38.X = local_1818;
      local_f38.Y = dStack_1810;
      local_f38.Z = local_1838;
      local_f38.W = dStack_1830;
      local_1138._s_0.X = (this->RootMotionDeltaDirection).field0_0x0._s_0.X;
      local_1138._s_0.Y = (this->RootMotionDeltaDirection).field0_0x0._s_0.Y;
      pTVar31 = UE::Math::TQuat<double>::RotateVector
                          (&local_f38,&local_a28,(TVector<double> *)&local_1138._s_0);
    }
    local_13b8._s_0.Z = (pTVar31->field0_0x0)._s_0.Z;
    local_13b8._s_0.X = (pTVar31->field0_0x0)._s_0.X;
    local_13b8._s_0.Y = (pTVar31->field0_0x0)._s_0.Y;
    dVar109 = (double)uVar23 + UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.X;
    dVar48 = (double)uVar24 + UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Y;
    dVar117 = (double)uVar25 + UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Z;
    iVar37 = 0;
    if (iVar38 != 0) {
      local_1868._s_0.B = (this->DebugColor).field0_0x0._s_0.B;
      local_1868._s_0.G = (this->DebugColor).field0_0x0._s_0.G;
      local_1868._s_0.R = (this->DebugColor).field0_0x0._s_0.R;
      dVar115 = local_13b8._s_0.Z * dVar110;
      dVar72 = local_13b8._s_0.X * dVar110;
      local_1460._s_0.X = dVar109 + dVar74 + dVar72;
      local_1798[1] = local_13b8._s_0.Y;
      local_1798[0] = local_13b8._s_0.Y * dVar110;
      local_1460._s_0.Y = dVar48 + dVar114 + local_13b8._s_0.Y * dVar110;
      local_1460._s_0.Z = dVar117 + dVar107 + dVar115;
      local_1868._s_0.A = (uchar)(int)fVar47;
      local_e08 = auVar95;
      local_df8 = dVar107;
      ::FName::FName(&local_1768,"OrientationWarping");
      FVisualLogger::DiscLogfImpl
                (*(UObject **)(param_1->_padding_ + 0x140),&local_1768,Display,
                 (TVector<double> *)&local_1460._s_0,&UE::Math::TVector<double>::UpVector,
                 __real_40800000,(FColor *)&local_1868._s_0,1,false,L"");
      iVar37 = FVisualLogger::bIsRecording;
      if (FVisualLogger::bIsRecording != 0) {
        local_1864._s_0.B = FColor::Blue.field0_0x0._0_1_;
        local_1864._s_0.G = FColor::Blue.field0_0x0._1_1_;
        local_1864._s_0.R = FColor::Blue.field0_0x0._2_1_;
        local_1448._s_0.X = dVar109 + dVar74 + dVar72;
        local_1448._s_0.Y = dVar48 + dVar114 + local_1798[0];
        local_1448._s_0.Z = dVar117 + dVar107 + dVar115;
        local_1430._s_0.X = dVar109 + dVar74;
        local_1430._s_0.Y = dVar48 + dVar114;
        local_1430._s_0.Z = dVar117 + dVar107;
        local_1864._s_0.A = (uchar)(int)fVar47;
        local_df0 = auVar95;
        local_de0 = dVar107;
        local_dd8 = auVar95;
        local_dc8 = dVar107;
        ::FName::FName(&local_1760,"OrientationWarping");
        FVisualLogger::ArrowLineLogfImpl
                  (*(UObject **)(param_1->_padding_ + 0x140),&local_1760,Display,
                   (TVector<double> *)&local_1430._s_0,(TVector<double> *)&local_1448._s_0,
                   (FColor *)&local_1864._s_0,0,L"");
        iVar37 = FVisualLogger::bIsRecording;
      }
    }
    if ((this->bUsedFutureRootMotion != false) && (cVar27 != '\0')) {
      local_1118[0]._16_8_ = (this->FutureRootMotionDeltaDirection).field0_0x0._s_0.Z;
      local_f18.X = local_1818;
      local_f18.Y = dStack_1810;
      local_f18.Z = local_1838;
      local_f18.W = dStack_1830;
      local_1118[0]._0_8_ = (this->FutureRootMotionDeltaDirection).field0_0x0._s_0.X;
      local_1118[0]._8_8_ = (this->FutureRootMotionDeltaDirection).field0_0x0._s_0.Y;
      UE::Math::TQuat<double>::RotateVector
                (&local_f18,(TVector<double> *)&local_1418._s_0,
                 (TVector<double> *)&local_1118[0]._s_0);
      if (iVar37 != 0) {
        local_1860._s_0.B = (this->DebugColor).field0_0x0._s_0.B;
        local_1860._s_0.G = (this->DebugColor).field0_0x0._s_0.G;
        local_1860._s_0.R = (this->DebugColor).field0_0x0._s_0.R;
        local_1838 = local_1418._s_0.Z * dVar110;
        local_1400._s_0.X = dVar109 + dVar74 + local_1418._s_0.X * dVar110;
        local_1400._s_0.Y = dVar48 + dVar114 + local_1418._s_0.Y * dVar110;
        local_1400._s_0.Z = dVar117 + dVar107 + local_1838;
        local_1860._s_0.A = (uchar)(int)fVar47;
        local_dc0 = auVar95;
        local_db0 = dVar107;
        ::FName::FName(&local_1758,"OrientationWarping");
        FVisualLogger::DiscLogfImpl
                  (*(UObject **)(param_1->_padding_ + 0x140),&local_1758,Display,
                   (TVector<double> *)&local_1400._s_0,&UE::Math::TVector<double>::UpVector,
                   __real_40800000,(FColor *)&local_1860._s_0,1,false,L"");
        iVar37 = FVisualLogger::bIsRecording;
        if (FVisualLogger::bIsRecording != 0) {
          local_185c._s_0.B = FColor::Yellow.field0_0x0._0_1_;
          local_185c._s_0.G = FColor::Yellow.field0_0x0._1_1_;
          local_185c._s_0.R = FColor::Yellow.field0_0x0._2_1_;
          local_13e8._s_0.X = dVar109 + dVar74 + local_1418._s_0.X * dVar110;
          local_13e8._s_0.Y = dVar48 + dVar114 + local_1418._s_0.Y * dVar110;
          local_13e8._s_0.Z = dVar117 + dVar107 + local_1838;
          local_13d0._s_0.X = dVar109 + dVar74;
          local_13d0._s_0.Y = dVar48 + dVar114;
          local_13d0._s_0.Z = dVar117 + dVar107;
          local_185c._s_0.A = (uchar)(int)fVar47;
          local_da8 = auVar95;
          local_d98 = dVar107;
          local_d18 = auVar95;
          local_d08 = dVar107;
          ::FName::FName(&local_1750,"OrientationWarping");
          FVisualLogger::ArrowLineLogfImpl
                    (*(UObject **)(param_1->_padding_ + 0x140),&local_1750,Display,
                     (TVector<double> *)&local_13d0._s_0,(TVector<double> *)&local_13e8._s_0,
                     (FColor *)&local_185c._s_0,0,L"");
          iVar37 = FVisualLogger::bIsRecording;
        }
      }
    }
    if (cVar27 == '\0') {
      pTVar31 = &local_b48;
      pTVar34 = &local_1688;
    }
    else {
      pTVar31 = &local_9e0;
      pTVar34 = &local_13b8;
    }
    pTVar31 = UE::Math::TVector<double>::RotateAngleAxis
                        ((TVector<double> *)&pTVar34->_s_0,pTVar31,
                         (double)(this->ActualOrientationAngleRad * __real_42652ee0),
                         (TVector<double> *)&local_1890._s_0);
    dVar109 = dVar109 + UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.X;
    dVar48 = dVar48 + UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Y;
    dVar117 = dVar117 + UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Z;
    local_16f0._s_0.Z = (pTVar31->field0_0x0)._s_0.Z;
    dVar115 = (pTVar31->field0_0x0)._s_0.Y;
    if (iVar37 != 0) {
      local_1858._s_0.B = (this->DebugColor).field0_0x0._s_0.B;
      local_1858._s_0.G = (this->DebugColor).field0_0x0._s_0.G;
      local_1858._s_0.R = (this->DebugColor).field0_0x0._s_0.R;
      dVar72 = local_16f0._s_0.Z * dVar110;
      dVar73 = (pTVar31->field0_0x0)._s_0.X * dVar110;
      local_1798[0] = dVar115 * dVar110;
      local_16f0._s_0.X = dVar109 + dVar74 + dVar73;
      local_1798[1] = dVar115;
      local_16f0._s_0.Y = dVar48 + dVar114 + local_1798[0];
      local_16f0._s_0.Z = dVar117 + dVar107 + dVar72;
      local_1858._s_0.A = (uchar)(int)fVar47;
      local_10c8 = auVar95;
      local_10b8 = dVar107;
      ::FName::FName(&local_1748,"OrientationWarping");
      FVisualLogger::DiscLogfImpl
                (*(UObject **)(param_1->_padding_ + 0x140),&local_1748,Display,
                 (TVector<double> *)&local_16f0._s_0,&UE::Math::TVector<double>::UpVector,
                 __real_40800000,(FColor *)&local_1858._s_0,1,false,L"");
      if (FVisualLogger::bIsRecording != 0) {
        local_1854._s_0.B = FColor::Green.field0_0x0._0_1_;
        local_1854._s_0.G = FColor::Green.field0_0x0._1_1_;
        local_1854._s_0.R = FColor::Green.field0_0x0._2_1_;
        local_13a0._s_0.X = dVar109 + dVar74;
        local_1388._s_0.X = dVar109 + dVar74 + dVar73;
        local_13a0._s_0.Y = dVar48 + dVar114;
        local_13a0._s_0.Z = dVar117 + dVar107;
        local_1388._s_0.Y = dVar48 + dVar114 + local_1798[0];
        local_1388._s_0.Z = dVar117 + dVar107 + dVar72;
        local_1854._s_0.A = (uchar)(int)fVar47;
        local_d60 = auVar95;
        local_d50 = dVar107;
        local_d48 = auVar95;
        local_d38 = dVar107;
        ::FName::FName(&local_1720,"OrientationWarping");
        FVisualLogger::ArrowLineLogfImpl
                  (*(UObject **)(param_1->_padding_ + 0x140),&local_1720,Display,
                   (TVector<double> *)&local_13a0._s_0,(TVector<double> *)&local_1388._s_0,
                   (FColor *)&local_1854._s_0,0,L"");
      }
    }
  }
  fVar47 = FMath::UnwindRadians<float>
                     (this->ActualOrientationAngleRad * this->DistributedBoneOrientationAlpha);
  if (__real_38d1b717 < (float)((uint)fVar47 & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    __libm_sse2_sincos_();
    dVar74 = (double)CONCAT44(uVar122,uVar121) * extraout_XMM0_Qa_01;
    dVar72 = (double)CONCAT44(uVar120,uVar106) * extraout_XMM0_Qa_01;
    dVar115 = (double)CONCAT44(uVar124,uVar123) * extraout_XMM0_Qa_01;
    pTVar35 = FCSPose<FCompactPose>::GetComponentSpaceTransform
                        (&param_1->Pose,(FCompactPoseBoneIndex)0x0);
    dVar48 = (pTVar35->Rotation).ZW.m128d_f64[0];
    dVar117 = (pTVar35->Rotation).ZW.m128d_f64[1];
    dVar109 = (pTVar35->Rotation).XY.m128d_f64[0];
    dVar114 = (pTVar35->Rotation).XY.m128d_f64[1];
    local_12e8.Translation.XY.m128d_f64[0] = (pTVar35->Translation).XY.m128d_f64[0];
    local_12e8.Translation.XY.m128d_f64[1] = (pTVar35->Translation).XY.m128d_f64[1];
    local_12e8.Translation.ZW.m128d_f64[0] = (pTVar35->Translation).ZW.m128d_f64[0];
    local_12e8.Translation.ZW.m128d_f64[1] = (pTVar35->Translation).ZW.m128d_f64[1];
    local_12e8.Scale3D.XY.m128d_f64[0] = (pTVar35->Scale3D).XY.m128d_f64[0];
    local_12e8.Scale3D.XY.m128d_f64[1] = (pTVar35->Scale3D).XY.m128d_f64[1];
    local_12e8.Scale3D.ZW.m128d_f64[0] = (pTVar35->Scale3D).ZW.m128d_f64[0];
    local_12e8.Scale3D.ZW.m128d_f64[1] = (pTVar35->Scale3D).ZW.m128d_f64[1];
    auVar98._8_8_ = dVar109;
    auVar98._0_8_ = dVar114;
    auVar49._8_4_ = SUB84(dVar115,0);
    auVar49._0_8_ = dVar115;
    auVar49._12_4_ = (int)((ulonglong)dVar115 >> 0x20);
    dVar110 = dVar117 * dVar74 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
              dVar109 * extraout_XMM0_Qb +
              dVar48 * dVar72 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
              dVar115 * dVar114 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
    dVar107 = dVar48 * dVar74 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
              dVar114 * extraout_XMM0_Qb +
              dVar117 * dVar72 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
              auVar49._8_8_ * dVar109 *
              GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
    auVar50._8_4_ = SUB84(dVar107,0);
    auVar50._0_8_ = dVar110;
    auVar50._12_4_ = (int)((ulonglong)dVar107 >> 0x20);
    dVar73 = dVar74 * dVar114 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
             dVar48 * extraout_XMM0_Qb +
             dVar109 * dVar72 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
             dVar115 * dVar117 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
    dVar117 = dVar74 * dVar109 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
              dVar117 * extraout_XMM0_Qb +
              dVar114 * dVar72 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
              dVar115 * dVar48 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
    auVar80._8_4_ = SUB84(dVar117,0);
    auVar80._0_8_ = dVar73;
    auVar80._12_4_ = (int)((ulonglong)dVar117 >> 0x20);
    dVar74 = dVar73 * dVar73 + dVar110 * dVar110;
    dVar48 = auVar80._8_8_ * dVar117 + auVar50._8_8_ * dVar107;
    auVar51._8_4_ = SUB84(dVar48,0);
    auVar51._0_8_ = dVar74;
    auVar51._12_4_ = (int)((ulonglong)dVar48 >> 0x20);
    auVar52._0_8_ = auVar51._8_8_ + dVar74;
    auVar52._8_8_ = dVar74 + dVar48;
    auVar99 = sqrtpd(auVar98,auVar52);
    uVar42 = -(ulonglong)
              (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[0] <= auVar52._0_8_);
    uVar44 = -(ulonglong)
              (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[1] <= auVar52._8_8_);
    auVar95 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar99);
    uVar43 = -(ulonglong)
              (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0] <= auVar52._0_8_);
    uVar45 = -(ulonglong)
              (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[1] <= auVar52._8_8_);
    auVar81._0_8_ = uVar42 & (ulonglong)(auVar95._0_8_ * dVar110);
    uVar22 = uVar44 & (ulonglong)(auVar95._8_8_ * dVar107);
    auVar81._8_4_ = (undefined4)uVar22;
    auVar81._12_4_ = (undefined4)(uVar22 >> 0x20);
    auVar95 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar99);
    auVar9._4_4_ = ~(uint)(uVar42 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._4_4_
    ;
    auVar9._0_4_ = ~(uint)uVar42 & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._0_4_;
    auVar9._8_4_ = ~(uint)uVar44 & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._0_4_;
    auVar9._12_4_ =
         ~(uint)(uVar44 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._4_4_;
    local_12e8.Rotation.XY.m128d_f64 = (double  [2])(auVar81 | auVar9);
    auVar53._0_8_ = uVar43 & (ulonglong)(auVar95._0_8_ * dVar73);
    uVar22 = uVar45 & (ulonglong)(auVar95._8_8_ * dVar117);
    auVar53._8_4_ = (undefined4)uVar22;
    auVar53._12_4_ = (undefined4)(uVar22 >> 0x20);
    auVar13._4_4_ =
         ~(uint)(uVar43 >> 0x20) & GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._4_4_;
    auVar13._0_4_ = ~(uint)uVar43 & GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._0_4_;
    auVar13._8_4_ = ~(uint)uVar45 & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._0_4_;
    auVar13._12_4_ =
         ~(uint)(uVar45 >> 0x20) & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._4_4_;
    local_12e8.Rotation.ZW.m128d_f64 = (double  [2])(auVar53 | auVar13);
    FCSPose<FCompactPose>::SetComponentSpaceTransform
              (&param_1->Pose,(FCompactPoseBoneIndex)0x0,&local_12e8);
  }
  iVar37 = (this->SpineBoneDataArray).ArrayNum;
  if (((0 < iVar37) &&
      (__real_38d1b717 <
       (float)((uint)this->DistributedBoneOrientationAlpha & __xmm_7fffffff7fffffff7fffffff7fffffff)
      )) && (0 < iVar37)) {
    pFVar2 = &param_1->Pose;
    lVar41 = 0;
    do {
      uVar70 = 0;
      if ((int)uVar39 < (this->SpineBoneDataArray).ArrayNum) {
        uVar70 = ~uVar39 >> 0x1f;
      }
      if ((uVar70 == 0) &&
         (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar26)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar5 = (this->SpineBoneDataArray).AllocatorInstance.Data;
      fVar47 = *(float *)(pFVar5 + lVar41 * 8 + 4);
      __libm_sse2_sincos_();
      local_1618 = (double)CONCAT44(uVar122,uVar121) * extraout_XMM0_Qa_02;
      dStack_1610 = (double)CONCAT44(uVar120,uVar106) * extraout_XMM0_Qa_02;
      local_1608 = (double)CONCAT44(uVar124,uVar123) * extraout_XMM0_Qa_02;
      dStack_1600 = extraout_XMM0_Qb_00;
      if ((fVar47 <= 0.0) &&
         (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                             ("BoneData.Weight > 0.f",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\AnimationWarping\\Source\\Runtime\\Private\\BoneControllers\\AnimNode_OrientationWarping.cpp"
                              ,0x261,L""), bVar26)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pTVar35 = FCSPose<FCompactPose>::GetComponentSpaceTransform
                          (pFVar2,*(FCompactPoseBoneIndex *)(pFVar5 + lVar41 * 8));
      dVar107 = (pTVar35->Rotation).ZW.m128d_f64[0];
      dVar74 = (pTVar35->Rotation).ZW.m128d_f64[1];
      dVar48 = (pTVar35->Rotation).XY.m128d_f64[0];
      dVar117 = (pTVar35->Rotation).XY.m128d_f64[1];
      local_c68.Translation.XY.m128d_f64[0] = (pTVar35->Translation).XY.m128d_f64[0];
      local_c68.Translation.XY.m128d_f64[1] = (pTVar35->Translation).XY.m128d_f64[1];
      local_c68.Translation.ZW.m128d_f64[0] = (pTVar35->Translation).ZW.m128d_f64[0];
      local_c68.Translation.ZW.m128d_f64[1] = (pTVar35->Translation).ZW.m128d_f64[1];
      local_c68.Scale3D.XY.m128d_f64[0] = (pTVar35->Scale3D).XY.m128d_f64[0];
      local_c68.Scale3D.XY.m128d_f64[1] = (pTVar35->Scale3D).XY.m128d_f64[1];
      local_c68.Scale3D.ZW.m128d_f64[0] = (pTVar35->Scale3D).ZW.m128d_f64[0];
      local_c68.Scale3D.ZW.m128d_f64[1] = (pTVar35->Scale3D).ZW.m128d_f64[1];
      auVar100._8_8_ = dVar107;
      auVar100._0_8_ = dVar74;
      auVar54._8_4_ = SUB84(local_1608,0);
      auVar54._0_8_ = local_1608;
      auVar54._12_4_ = (int)((ulonglong)local_1608 >> 0x20);
      dVar109 = dVar74 * local_1618 *
                GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
                dVar48 * dStack_1600 +
                dVar107 * dStack_1610 *
                GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
                local_1608 * dVar117 *
                GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
      dVar114 = dVar107 * local_1618 *
                GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
                dVar117 * dStack_1600 +
                dVar74 * dStack_1610 *
                GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
                auVar54._8_8_ * dVar48 *
                GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
      auVar55._8_4_ = SUB84(dVar114,0);
      auVar55._0_8_ = dVar109;
      auVar55._12_4_ = (int)((ulonglong)dVar114 >> 0x20);
      dVar110 = local_1618 * dVar117 *
                GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
                dVar107 * dStack_1600 +
                dVar48 * dStack_1610 *
                GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
                local_1608 * dVar74 *
                GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
      dVar107 = local_1618 * dVar48 *
                GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
                dVar74 * dStack_1600 +
                dVar117 * dStack_1610 *
                GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
                local_1608 * dVar107 *
                GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
      auVar82._8_4_ = SUB84(dVar107,0);
      auVar82._0_8_ = dVar110;
      auVar82._12_4_ = (int)((ulonglong)dVar107 >> 0x20);
      dVar74 = dVar110 * dVar110 + dVar109 * dVar109;
      dVar48 = auVar82._8_8_ * dVar107 + auVar55._8_8_ * dVar114;
      auVar56._8_4_ = SUB84(dVar48,0);
      auVar56._0_8_ = dVar74;
      auVar56._12_4_ = (int)((ulonglong)dVar48 >> 0x20);
      auVar57._0_8_ = auVar56._8_8_ + dVar74;
      auVar57._8_8_ = dVar74 + dVar48;
      uVar42 = -(ulonglong)
                (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[0] <= auVar57._0_8_)
      ;
      uVar44 = -(ulonglong)
                (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[1] <= auVar57._8_8_)
      ;
      auVar99 = sqrtpd(auVar100,auVar57);
      uVar43 = -(ulonglong)
                (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0] <= auVar57._0_8_)
      ;
      uVar45 = -(ulonglong)
                (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[1] <= auVar57._8_8_)
      ;
      auVar95 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar99);
      auVar58._0_8_ = (ulonglong)(auVar95._0_8_ * dVar109) & uVar42;
      uVar22 = uVar44 & (ulonglong)(auVar95._8_8_ * dVar114);
      auVar58._8_4_ = (undefined4)uVar22;
      auVar58._12_4_ = (undefined4)(uVar22 >> 0x20);
      auVar83._0_4_ = ~(uint)uVar42 & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._0_4_;
      auVar83._4_4_ =
           ~(uint)(uVar42 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._4_4_;
      auVar83._8_4_ = ~(uint)uVar44 & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._0_4_;
      auVar83._12_4_ =
           ~(uint)(uVar44 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._4_4_;
      local_c68.Rotation.XY.m128d_f64 = (double  [2])(auVar58 | auVar83);
      auVar95 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar99);
      auVar84._0_8_ = uVar43 & (ulonglong)(auVar95._0_8_ * dVar110);
      uVar22 = uVar45 & (ulonglong)(auVar95._8_8_ * dVar107);
      auVar84._8_4_ = (undefined4)uVar22;
      auVar84._12_4_ = (undefined4)(uVar22 >> 0x20);
      auVar10._4_4_ =
           ~(uint)(uVar43 >> 0x20) & GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._4_4_;
      auVar10._0_4_ = ~(uint)uVar43 & GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._0_4_;
      auVar10._8_4_ = ~(uint)uVar45 & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._0_4_;
      auVar10._12_4_ =
           ~(uint)(uVar45 >> 0x20) & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._4_4_;
      local_c68.Rotation.ZW.m128d_f64 = (double  [2])(auVar84 | auVar10);
      FCSPose<FCompactPose>::SetComponentSpaceTransform
                (pFVar2,*(FCompactPoseBoneIndex *)(pFVar5 + lVar41 * 8),&local_c68);
      uVar39 = uVar39 + 1;
      lVar41 = lVar41 + 1;
      param_1 = local_1740;
      param_2 = local_1738;
    } while (lVar41 < iVar37);
  }
  if (((this->IKFootData).IKFootRootBoneIndex != (FCompactPoseBoneIndex)0xffffffff) &&
     (__real_38d1b717 <
      (float)((uint)(__real_3f800000 - this->DistributedBoneOrientationAlpha) &
             __xmm_7fffffff7fffffff7fffffff7fffffff))) {
    __libm_sse2_sincos_();
    pFVar2 = &param_1->Pose;
    dVar110 = extraout_XMM0._0_8_;
    dVar117 = (double)CONCAT44(uVar122,uVar121) * dVar110;
    dVar73 = (double)CONCAT44(uVar120,uVar106) * dVar110;
    dVar110 = (double)CONCAT44(uVar124,uVar123) * dVar110;
    dVar107 = extraout_XMM0._8_8_;
    pTVar35 = FCSPose<FCompactPose>::GetComponentSpaceTransform
                        (pFVar2,(this->IKFootData).IKFootRootBoneIndex);
    dVar109 = (pTVar35->Rotation).ZW.m128d_f64[0];
    dVar114 = (pTVar35->Rotation).ZW.m128d_f64[1];
    dVar115 = (pTVar35->Rotation).XY.m128d_f64[0];
    dVar72 = (pTVar35->Rotation).XY.m128d_f64[1];
    local_c08.Translation.XY.m128d_f64[0] = (pTVar35->Translation).XY.m128d_f64[0];
    local_c08.Translation.XY.m128d_f64[1] = (pTVar35->Translation).XY.m128d_f64[1];
    local_c08.Translation.ZW.m128d_f64[0] = (pTVar35->Translation).ZW.m128d_f64[0];
    local_c08.Translation.ZW.m128d_f64[1] = (pTVar35->Translation).ZW.m128d_f64[1];
    local_c08.Scale3D.XY.m128d_f64[0] = (pTVar35->Scale3D).XY.m128d_f64[0];
    local_c08.Scale3D.XY.m128d_f64[1] = (pTVar35->Scale3D).XY.m128d_f64[1];
    local_c08.Scale3D.ZW.m128d_f64[0] = (pTVar35->Scale3D).ZW.m128d_f64[0];
    local_c08.Scale3D.ZW.m128d_f64[1] = (pTVar35->Scale3D).ZW.m128d_f64[1];
    auVar59._8_4_ = extraout_XMM0._8_4_;
    auVar59._0_8_ = dVar107;
    auVar59._12_4_ = extraout_XMM0._12_4_;
    auVar85._8_4_ = SUB84(dVar73,0);
    auVar85._0_8_ = dVar73;
    auVar85._12_4_ = (int)((ulonglong)dVar73 >> 0x20);
    auVar101._8_8_ = dVar115;
    auVar101._0_8_ = dVar72;
    auVar60._8_4_ = SUB84(dVar110,0);
    auVar60._0_8_ = dVar110;
    auVar60._12_4_ = (int)((ulonglong)dVar110 >> 0x20);
    dVar74 = dVar117 * dVar114 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
             dVar107 * dVar115 +
             dVar73 * dVar109 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
             dVar110 * dVar72 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
    dVar48 = dVar117 * dVar109 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
             auVar59._8_8_ * dVar72 +
             auVar85._8_8_ * dVar114 *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
             auVar60._8_8_ * dVar115 *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
    auVar61._8_4_ = SUB84(dVar48,0);
    auVar61._0_8_ = dVar74;
    auVar61._12_4_ = (int)((ulonglong)dVar48 >> 0x20);
    dVar116 = dVar117 * dVar72 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
              dVar107 * dVar109 +
              dVar73 * dVar115 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
              dVar110 * dVar114 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
    dVar117 = dVar117 * dVar115 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
              dVar107 * dVar114 +
              dVar73 * dVar72 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
              dVar110 * dVar109 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
    auVar86._8_4_ = SUB84(dVar117,0);
    auVar86._0_8_ = dVar116;
    auVar86._12_4_ = (int)((ulonglong)dVar117 >> 0x20);
    dVar110 = dVar116 * dVar116 + dVar74 * dVar74;
    dVar107 = auVar86._8_8_ * dVar117 + auVar61._8_8_ * dVar48;
    auVar62._8_4_ = SUB84(dVar107,0);
    auVar62._0_8_ = dVar110;
    auVar62._12_4_ = (int)((ulonglong)dVar107 >> 0x20);
    auVar63._0_8_ = auVar62._8_8_ + dVar110;
    auVar63._8_8_ = dVar110 + dVar107;
    auVar99 = sqrtpd(auVar101,auVar63);
    uVar42 = -(ulonglong)
              (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[0] <= auVar63._0_8_);
    uVar44 = -(ulonglong)
              (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[1] <= auVar63._8_8_);
    auVar95 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar99);
    uVar43 = -(ulonglong)
              (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0] <= auVar63._0_8_);
    uVar45 = -(ulonglong)
              (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[1] <= auVar63._8_8_);
    auVar87._0_8_ = uVar42 & (ulonglong)(auVar95._0_8_ * dVar74);
    uVar22 = uVar44 & (ulonglong)(auVar95._8_8_ * dVar48);
    auVar87._8_4_ = (undefined4)uVar22;
    auVar87._12_4_ = (undefined4)(uVar22 >> 0x20);
    auVar11._4_4_ =
         ~(uint)(uVar42 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._4_4_;
    auVar11._0_4_ = ~(uint)uVar42 & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._0_4_;
    auVar11._8_4_ = ~(uint)uVar44 & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._0_4_;
    auVar11._12_4_ =
         ~(uint)(uVar44 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._4_4_;
    local_c08.Rotation.XY.m128d_f64 = (double  [2])(auVar87 | auVar11);
    auVar95 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar99);
    auVar64._0_8_ = uVar43 & (ulonglong)(auVar95._0_8_ * dVar116);
    uVar22 = uVar45 & (ulonglong)(auVar95._8_8_ * dVar117);
    auVar64._8_4_ = (undefined4)uVar22;
    auVar64._12_4_ = (undefined4)(uVar22 >> 0x20);
    auVar14._4_4_ =
         ~(uint)(uVar43 >> 0x20) & GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._4_4_;
    auVar14._0_4_ = ~(uint)uVar43 & GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._0_4_;
    auVar14._8_4_ = ~(uint)uVar45 & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._0_4_;
    auVar14._12_4_ =
         ~(uint)(uVar45 >> 0x20) & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._4_4_;
    local_c08.Rotation.ZW.m128d_f64 = (double  [2])(auVar64 | auVar14);
    FCSPose<FCompactPose>::SetComponentSpaceTransform
              (pFVar2,(this->IKFootData).IKFootRootBoneIndex,&local_c08);
    iVar37 = (this->IKFootData).IKFootBoneIndexArray.ArrayNum;
    if (0 < iVar37) {
      __libm_sse2_sincos_();
      dVar110 = extraout_XMM0_Qa_03 * (double)CONCAT44(uVar122,uVar121);
      uVar39 = 0;
      dVar74 = extraout_XMM0_Qa_03 * (double)CONCAT44(uVar124,uVar123);
      lVar41 = 0;
      dVar107 = extraout_XMM0_Qa_03 * (double)CONCAT44(uVar120,uVar106);
      do {
        uVar70 = 0;
        if ((int)uVar39 < (this->IKFootData).IKFootBoneIndexArray.ArrayNum) {
          uVar70 = ~uVar39 >> 0x1f;
        }
        if ((uVar70 == 0) &&
           (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar26)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar5 = (this->IKFootData).IKFootBoneIndexArray.AllocatorInstance.Data;
        pTVar35 = FCSPose<FCompactPose>::GetComponentSpaceTransform
                            (pFVar2,*(FCompactPoseBoneIndex *)(pFVar5 + lVar41 * 4));
        dVar109 = (pTVar35->Rotation).ZW.m128d_f64[0];
        dVar114 = (pTVar35->Rotation).ZW.m128d_f64[1];
        auVar95 = *(undefined1 (*) [16])(pTVar35->Rotation).XY.m128d_f64;
        dVar115 = auVar95._0_8_;
        dVar72 = auVar95._8_8_;
        local_ba8.Translation.XY.m128d_f64[0] = (pTVar35->Translation).XY.m128d_f64[0];
        local_ba8.Translation.XY.m128d_f64[1] = (pTVar35->Translation).XY.m128d_f64[1];
        local_ba8.Translation.ZW.m128d_f64[0] = (pTVar35->Translation).ZW.m128d_f64[0];
        local_ba8.Translation.ZW.m128d_f64[1] = (pTVar35->Translation).ZW.m128d_f64[1];
        local_ba8.Scale3D.XY.m128d_f64[0] = (pTVar35->Scale3D).XY.m128d_f64[0];
        local_ba8.Scale3D.XY.m128d_f64[1] = (pTVar35->Scale3D).XY.m128d_f64[1];
        local_ba8.Scale3D.ZW.m128d_f64[0] = (pTVar35->Scale3D).ZW.m128d_f64[0];
        local_ba8.Scale3D.ZW.m128d_f64[1] = (pTVar35->Scale3D).ZW.m128d_f64[1];
        auVar102._0_8_ =
             dVar114 * dVar74 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
        auVar102._8_8_ =
             dVar109 * dVar74 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
        auVar65._8_4_ = auVar95._0_4_;
        auVar65._0_8_ = dVar72;
        auVar65._12_4_ = auVar95._4_4_;
        dVar48 = dVar114 * dVar110 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0]
                 + dVar115 * extraout_XMM0_Qb_01 +
                 dVar109 * dVar107 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0]
                 + dVar72 * dVar74 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0]
        ;
        dVar117 = dVar109 * dVar110 *
                  GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
                  dVar72 * extraout_XMM0_Qb_01 +
                  dVar114 * dVar107 *
                  GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
                  auVar65._8_8_ * dVar74 *
                  GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
        auVar66._8_4_ = SUB84(dVar117,0);
        auVar66._0_8_ = dVar48;
        auVar66._12_4_ = (int)((ulonglong)dVar117 >> 0x20);
        dVar73 = dVar72 * dVar110 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0]
                 + dVar109 * extraout_XMM0_Qb_01 +
                 dVar115 * dVar107 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0]
                 + auVar102._0_8_;
        dVar115 = dVar115 * dVar110 *
                  GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
                  dVar114 * extraout_XMM0_Qb_01 +
                  dVar72 * dVar107 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1]
                  + auVar102._8_8_;
        auVar88._8_4_ = SUB84(dVar115,0);
        auVar88._0_8_ = dVar73;
        auVar88._12_4_ = (int)((ulonglong)dVar115 >> 0x20);
        dVar109 = dVar73 * dVar73 + dVar48 * dVar48;
        dVar114 = auVar88._8_8_ * dVar115 + auVar66._8_8_ * dVar117;
        auVar67._8_4_ = SUB84(dVar114,0);
        auVar67._0_8_ = dVar109;
        auVar67._12_4_ = (int)((ulonglong)dVar114 >> 0x20);
        auVar68._0_8_ = auVar67._8_8_ + dVar109;
        auVar68._8_8_ = dVar109 + dVar114;
        uVar42 = -(ulonglong)
                  (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[0] <=
                  auVar68._0_8_);
        uVar44 = -(ulonglong)
                  (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[1] <=
                  auVar68._8_8_);
        auVar99 = sqrtpd(auVar102,auVar68);
        uVar43 = -(ulonglong)
                  (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0] <=
                  auVar68._0_8_);
        uVar45 = -(ulonglong)
                  (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[1] <=
                  auVar68._8_8_);
        auVar95 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar99);
        auVar69._0_8_ = (ulonglong)(auVar95._0_8_ * dVar48) & uVar42;
        uVar22 = uVar44 & (ulonglong)(auVar95._8_8_ * dVar117);
        auVar69._8_4_ = (undefined4)uVar22;
        auVar69._12_4_ = (undefined4)(uVar22 >> 0x20);
        auVar89._0_4_ = ~(uint)uVar42 & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._0_4_;
        auVar89._4_4_ =
             ~(uint)(uVar42 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._4_4_;
        auVar89._8_4_ = ~(uint)uVar44 & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._0_4_;
        auVar89._12_4_ =
             ~(uint)(uVar44 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._4_4_;
        local_ba8.Rotation.XY.m128d_f64 = (double  [2])(auVar69 | auVar89);
        auVar95 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar99);
        auVar90._0_8_ = uVar43 & (ulonglong)(auVar95._0_8_ * dVar73);
        uVar22 = uVar45 & (ulonglong)(auVar95._8_8_ * dVar115);
        auVar90._8_4_ = (undefined4)uVar22;
        auVar90._12_4_ = (undefined4)(uVar22 >> 0x20);
        auVar12._4_4_ =
             ~(uint)(uVar43 >> 0x20) & GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._4_4_;
        auVar12._0_4_ = ~(uint)uVar43 & GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._0_4_;
        auVar12._8_4_ = ~(uint)uVar45 & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._0_4_;
        auVar12._12_4_ =
             ~(uint)(uVar45 >> 0x20) & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._4_4_;
        local_ba8.Rotation.ZW.m128d_f64 = (double  [2])(auVar90 | auVar12);
        FCSPose<FCompactPose>::SetComponentSpaceTransform
                  (pFVar2,*(FCompactPoseBoneIndex *)(pFVar5 + lVar41 * 4),&local_ba8);
        uVar39 = uVar39 + 1;
        lVar41 = lVar41 + 1;
      } while ((int)uVar39 < iVar37);
    }
  }
  AlgoImpl::
  IntroSortInternal<FBoneTransform,int,FIdentityFunctor,TDereferenceWrapper<FBoneTransform,FCompareBoneTransformIndex>_>
            ((FBoneTransform *)(param_2->AllocatorInstance).Data,param_2->ArrayNum,local_189e[0],
             (FCompareBoneTransformIndex *)local_189e);
  this->bIsFirstUpdate = false;
LAB_14a718dc9:
  if ((local_17a8 & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((local_17a8 & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((local_17a8 & 4) != 0) {
    FThreadStats::AddMessage(local_17b0,CycleScopeEnd);
  }
  return;
}

// IsValidToEvaluate @ 14a718eb0

bool __thiscall
FAnimNode_OrientationWarping::IsValidToEvaluate
          (FAnimNode_OrientationWarping *this,USkeleton *param_1,FBoneContainer *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  double dVar4;
  undefined1 local_res20 [8];
  
  if ((AnimNodeOrientationWarpingEnable != 0) && ((this->RotationAxis).Value != '\0')) {
    if (this->Mode == Manual) {
      dVar4 = FGenericPlatformMath::Fmod((double)this->OrientationAngle,__real_4076800000000000);
      if (dVar4 < 0.0) {
        dVar4 = dVar4 + __real_4076800000000000;
      }
      if (__real_4066800000000000 < dVar4) {
        dVar4 = dVar4 - __real_4076800000000000;
      }
      if ((float)((uint)(float)dVar4 & __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_38d1b717) {
        return false;
      }
      if ((float)((uint)((float)((uint)(float)dVar4 & __xmm_7fffffff7fffffff7fffffff7fffffff) -
                        __real_43340000) & __xmm_7fffffff7fffffff7fffffff7fffffff) <=
          __real_38d1b717) {
        return false;
      }
    }
    iVar2 = (this->SpineBoneDataArray).ArrayNum;
    if (iVar2 != 0) {
      pFVar3 = (this->SpineBoneDataArray).AllocatorInstance.Data;
      pFVar1 = pFVar3 + (longlong)iVar2 * 8;
      while( true ) {
        if ((this->SpineBoneDataArray).ArrayNum != iVar2) {
          `TCheckedPointerIterator<FAnimNode_OrientationWarping::FOrientationWarpingSpineBoneData,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(local_res20);
        }
        if (pFVar3 == pFVar1) break;
        if (*(int *)pFVar3 == -1) {
          return false;
        }
        pFVar3 = pFVar3 + 8;
      }
      if ((this->IKFootData).IKFootRootBoneIndex != (FCompactPoseBoneIndex)0xffffffff) {
        iVar2 = (this->IKFootData).IKFootBoneIndexArray.ArrayNum;
        if (iVar2 != 0) {
          pFVar3 = (this->IKFootData).IKFootBoneIndexArray.AllocatorInstance.Data;
          pFVar1 = pFVar3 + (longlong)iVar2 * 4;
          while( true ) {
            if ((this->IKFootData).IKFootBoneIndexArray.ArrayNum != iVar2) {
              `TCheckedPointerIterator<FCompactPoseBoneIndex,int,0>::operator!='::__l2::<lambda_1>::
              operator()(local_res20);
            }
            if (pFVar3 == pFVar1) {
              return true;
            }
            if (*(int *)pFVar3 == -1) break;
            pFVar3 = pFVar3 + 4;
          }
        }
      }
    }
  }
  return false;
}

// InitializeBoneReferences @ 14a719000

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FAnimNode_OrientationWarping::InitializeBoneReferences
          (FAnimNode_OrientationWarping *this,FBoneContainer *param_1)

{
  int *piVar1;
  FOrientationWarpingFootData *pFVar2;
  TArray<FAnimNode_OrientationWarping::FOrientationWarpingSpineBoneData,TSizedDefaultAllocator<32>_>
  *pTVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  float fVar6;
  bool bVar7;
  FCompactPoseBoneIndex FVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  undefined4 extraout_var;
  FScriptContainerElement *pFVar13;
  undefined4 extraout_var_01;
  uint *puVar14;
  uint *puVar15;
  FAnimNode_OrientationWarping *pFVar16;
  FAnimNode_OrientationWarping *pFVar17;
  uint uVar18;
  FBoneReference *pFVar19;
  ulonglong uVar20;
  longlong lVar21;
  uint uVar22;
  FBoneReference *pFVar23;
  float fVar24;
  float fVar25;
  undefined1 auStackY_168 [32];
  uint local_118;
  uint local_114;
  undefined1 local_110;
  undefined1 local_10f;
  FIdentityFunctor local_10e [6];
  FAnimNode_OrientationWarping *local_108;
  undefined4 local_100;
  undefined4 uStack_fc;
  FCompactPoseBoneIndex local_f8;
  undefined1 local_f4 [8];
  undefined1 local_ec [84];
  uint *local_98;
  int local_90;
  int local_8c;
  ulonglong local_88;
  undefined4 extraout_var_00;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_168;
  local_108 = this;
  FBoneReference::Initialize(&this->IKFootRootBone,param_1);
  FVar8 = FBoneReference::GetCompactPoseIndex(&this->IKFootRootBone,(FBoneContainer *)local_f4);
  (this->IKFootData).IKFootRootBoneIndex = *(FCompactPoseBoneIndex *)CONCAT44(extraout_var,FVar8);
  pFVar2 = &this->IKFootData;
  iVar10 = (this->IKFootData).IKFootBoneIndexArray.ArrayMax;
  piVar1 = &(this->IKFootData).IKFootBoneIndexArray.ArrayMax;
  (this->IKFootData).IKFootBoneIndexArray.ArrayNum = 0;
  if (iVar10 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,(ForAnyElementType *)pFVar2,0,piVar1);
  }
  iVar10 = (this->IKFootBones).ArrayNum;
  pFVar19 = (FBoneReference *)(this->IKFootBones).AllocatorInstance.Data;
  pFVar23 = pFVar19 + iVar10;
  pFVar16 = this;
  while( true ) {
    if ((pFVar16->IKFootBones).ArrayNum != iVar10) {
      local_110 = 0;
      `TCheckedPointerIterator<FBoneReference,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_110);
      pFVar16 = local_108;
    }
    if (pFVar19 == pFVar23) break;
    FBoneReference::Initialize(pFVar19,param_1);
    FVar8 = FBoneReference::GetCompactPoseIndex(pFVar19,(FBoneContainer *)(local_f4 + 4));
    pFVar13 = (FScriptContainerElement *)CONCAT44(extraout_var_00,FVar8);
    pFVar4 = (pFVar2->IKFootBoneIndexArray).AllocatorInstance.Data;
    if (((pFVar4 <= pFVar13) && (pFVar13 < pFVar4 + (longlong)*piVar1 * 4)) &&
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
    iVar9 = (this->IKFootData).IKFootBoneIndexArray.ArrayNum;
    if (iVar9 == *piVar1) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,(ForAnyElementType *)pFVar2,piVar1);
    }
    (this->IKFootData).IKFootBoneIndexArray.ArrayNum = iVar9 + 1;
    pFVar19 = pFVar19 + 1;
    *(undefined4 *)((pFVar2->IKFootBoneIndexArray).AllocatorInstance.Data + (longlong)iVar9 * 4) =
         *(undefined4 *)pFVar13;
    pFVar16 = local_108;
  }
  pTVar3 = &pFVar16->SpineBoneDataArray;
  uVar22 = 0;
  piVar1 = &(pFVar16->SpineBoneDataArray).ArrayMax;
  (pFVar16->SpineBoneDataArray).ArrayNum = 0;
  pFVar17 = pFVar16;
  if ((pFVar16->SpineBoneDataArray).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,&pTVar3->AllocatorInstance,0,piVar1);
    pFVar17 = local_108;
  }
  iVar10 = (pFVar17->SpineBones).ArrayNum;
  pFVar19 = (FBoneReference *)(pFVar17->SpineBones).AllocatorInstance.Data;
  pFVar23 = pFVar19 + iVar10;
  while( true ) {
    if ((pFVar17->SpineBones).ArrayNum != iVar10) {
      local_10f = 0;
      `TCheckedPointerIterator<FBoneReference,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_10f);
    }
    if (pFVar19 == pFVar23) break;
    FBoneReference::Initialize(pFVar19,param_1);
    FVar8 = FBoneReference::GetCompactPoseIndex(pFVar19,(FBoneContainer *)local_ec);
    local_100 = *(undefined4 *)CONCAT44(extraout_var_01,FVar8);
    pFVar4 = (pTVar3->AllocatorInstance).Data;
    uStack_fc = 0;
    if (((pFVar4 <= (FScriptContainerElement *)&local_100) &&
        ((FScriptContainerElement *)&local_100 < pFVar4 + (longlong)*piVar1 * 8)) &&
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
    iVar9 = (pFVar16->SpineBoneDataArray).ArrayNum;
    if (iVar9 == *piVar1) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x408,&pTVar3->AllocatorInstance,piVar1);
    }
    pFVar19 = pFVar19 + 1;
    (pFVar16->SpineBoneDataArray).ArrayNum = iVar9 + 1;
    *(ulonglong *)((pTVar3->AllocatorInstance).Data + (longlong)iVar9 * 8) =
         CONCAT44(uStack_fc,local_100);
    pFVar17 = local_108;
  }
  iVar10 = (pFVar16->SpineBoneDataArray).ArrayNum;
  if (0 < iVar10) {
    AlgoImpl::
    IntroSortInternal<FAnimNode_OrientationWarping::FOrientationWarpingSpineBoneData,int,FIdentityFunctor,TDereferenceWrapper<FAnimNode_OrientationWarping::FOrientationWarpingSpineBoneData,FAnimNode_OrientationWarping::FOrientationWarpingSpineBoneData::FCompareBoneIndex>_>
              ((FOrientationWarpingSpineBoneData *)(pTVar3->AllocatorInstance).Data,iVar10,
               local_10e[0],(FCompareBoneIndex *)local_10e);
    pFVar17 = local_108;
    fVar6 = __real_3f800000;
    local_98 = (uint *)0x0;
    local_90 = 0;
    local_8c = 0x14;
    local_114 = (local_108->SpineBoneDataArray).ArrayNum;
    puVar15 = (uint *)0x0;
    while (local_114 = local_114 - 1, -1 < (int)local_114) {
      uVar20 = (ulonglong)local_114;
      uVar18 = uVar22;
      if ((int)local_114 < (pFVar16->SpineBoneDataArray).ArrayNum) {
        uVar18 = ~local_114 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         puVar15 = local_98, bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (*(float *)((pTVar3->AllocatorInstance).Data + uVar20 * 8 + 4) == 0.0) {
        uVar18 = (pFVar17->SpineBoneDataArray).ArrayNum;
        if ((int)uVar18 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar18);
        }
        local_90 = 0;
        if (local_8c < (int)uVar18) {
          UE::Core::Private::
          ReallocTo<2,TSizedInlineAllocator<20,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                    (4,4,uVar18,(ForElementType<int> *)(local_ec + 4),0,&local_8c);
          puVar15 = local_98;
        }
        fVar25 = 0.0;
        puVar14 = (uint *)(local_ec + 4);
        if (puVar15 != (uint *)0x0) {
          puVar14 = puVar15;
        }
        if (puVar14 <= &local_114) {
          puVar14 = (uint *)(local_ec + 4);
          if (puVar15 != (uint *)0x0) {
            puVar14 = puVar15;
          }
          if ((&local_114 < puVar14 + local_8c) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), puVar15 = local_98, bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        iVar10 = local_90;
        if (local_90 == local_8c) {
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<20,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                             (0x404,(ForElementType<int> *)(local_ec + 4),&local_8c);
          puVar15 = local_98;
        }
        local_90 = iVar10 + 1;
        puVar14 = (uint *)(local_ec + 4);
        if (puVar15 != (uint *)0x0) {
          puVar14 = puVar15;
        }
        puVar14[iVar10] = local_114;
        lVar21 = (longlong)(int)local_114;
        uVar18 = uVar22;
        if ((int)local_114 < (pFVar16->SpineBoneDataArray).ArrayNum) {
          uVar18 = ~local_114 >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        local_f8 = *(FCompactPoseBoneIndex *)((pTVar3->AllocatorInstance).Data + lVar21 * 8);
        local_118 = local_114;
        while (uVar18 = local_118 - 1, local_118 = uVar18, -1 < (int)uVar18) {
          uVar11 = uVar22;
          if ((int)uVar18 < (pFVar16->SpineBoneDataArray).ArrayNum) {
            uVar11 = ~uVar18 >> 0x1f;
          }
          if ((uVar11 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          bVar7 = FBoneContainer::BoneIsChildOf
                            (param_1,&local_f8,
                             (FCompactPoseBoneIndex *)
                             ((pTVar3->AllocatorInstance).Data + (longlong)(int)uVar18 * 8));
          if (bVar7) {
            lVar21 = (longlong)(int)local_118;
            uVar18 = uVar22;
            if ((int)local_118 < (pFVar16->SpineBoneDataArray).ArrayNum) {
              uVar18 = ~local_118 >> 0x1f;
            }
            if ((uVar18 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            if (*(float *)((pTVar3->AllocatorInstance).Data + lVar21 * 8 + 4) <= 0.0) {
              puVar15 = (uint *)(local_ec + 4);
              if (local_98 != (uint *)0x0) {
                puVar15 = local_98;
              }
              if (puVar15 <= &local_118) {
                puVar15 = (uint *)(local_ec + 4);
                if (local_98 != (uint *)0x0) {
                  puVar15 = local_98;
                }
                if ((&local_118 < puVar15 + local_8c) &&
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
              }
              iVar10 = local_90;
              if (local_90 == local_8c) {
                iVar10 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<20,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                                   (0x404,(ForElementType<int> *)(local_ec + 4),&local_8c);
              }
              local_90 = iVar10 + 1;
              puVar15 = (uint *)(local_ec + 4);
              if (local_98 != (uint *)0x0) {
                puVar15 = local_98;
              }
              puVar15[iVar10] = local_118;
            }
            else {
              lVar21 = (longlong)(int)local_118;
              uVar18 = uVar22;
              if ((int)local_118 < (pFVar16->SpineBoneDataArray).ArrayNum) {
                uVar18 = ~local_118 >> 0x1f;
              }
              if ((uVar18 == 0) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar7)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              fVar25 = fVar25 + *(float *)((pTVar3->AllocatorInstance).Data + lVar21 * 8 + 4);
            }
          }
        }
        if ((local_90 < 1) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("IndicesToUpdate.Num() > 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\AnimationWarping\\Source\\Runtime\\Private\\BoneControllers\\AnimNode_OrientationWarping.cpp"
                               ,0x2fe,L""), bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        fVar24 = (float)local_90;
        puVar14 = (uint *)0x0;
        uVar18 = uVar22;
        puVar15 = local_98;
        if (0 < local_90) {
          do {
            uVar11 = uVar22;
            if ((int)uVar18 < local_90) {
              uVar11 = ~uVar18 >> 0x1f;
            }
            if ((uVar11 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            puVar15 = (uint *)(local_ec + 4);
            if (local_98 != (uint *)0x0) {
              puVar15 = local_98;
            }
            uVar11 = *(uint *)((longlong)puVar15 + (longlong)puVar14);
            uVar12 = uVar22;
            if ((int)uVar11 < (pFVar16->SpineBoneDataArray).ArrayNum) {
              uVar12 = ~uVar11 >> 0x1f;
            }
            if ((uVar12 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            uVar18 = uVar18 + 1;
            *(float *)((pTVar3->AllocatorInstance).Data + (longlong)(int)uVar11 * 8 + 4) =
                 (fVar6 - fVar25) / fVar24;
            puVar14 = puVar14 + 1;
            puVar15 = local_98;
          } while ((int)uVar18 < local_90);
        }
      }
    }
    if (puVar15 != (uint *)0x0) {
      FMemory::Free(puVar15);
    }
  }
  return;
}

// FAnimNode_OrientationWarping @ 14a71b290

FAnimNode_OrientationWarping * __thiscall
FAnimNode_OrientationWarping::FAnimNode_OrientationWarping(FAnimNode_OrientationWarping *this)

{
  undefined1 *puVar1;
  float fVar2;
  float fVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined8 uVar10;
  double dVar11;
  
  FAnimNode_SkeletalControlBase::FAnimNode_SkeletalControlBase
            ((FAnimNode_SkeletalControlBase *)this);
  this->Mode = Manual;
  *(undefined ***)this = &___7FAnimNode_OrientationWarping__6B_;
  (this->SpineBones).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SpineBones).ArrayNum = 0;
  (this->SpineBones).ArrayMax = 0;
  (this->LocomotionDirection).field0_0x0._s_0.X = 0.0;
  (this->LocomotionDirection).field0_0x0._s_0.Y = 0.0;
  (this->LocomotionDirection).field0_0x0._s_0.Z = 0.0;
  this->TargetTime = 0.8;
  this->OrientationAngle = 0.0;
  this->LocomotionAngle = 0.0;
  this->MinRootMotionSpeedThreshold = 10.0;
  this->LocomotionAngleDeltaThreshold = 90.0;
  (this->IKFootRootBone).BoneName.ComparisonIndex = 0;
  (this->IKFootRootBone).BoneName.Number = 0;
  puVar1 = &(this->IKFootRootBone).field_0x8;
  (this->IKFootRootBone).BoneIndex = -1;
  (this->IKFootRootBone).bUseSkeletonIndex = 0;
  (this->IKFootRootBone).CachedCompactPoseIndex = (FCompactPoseBoneIndex)0xffffffff;
  (this->IKFootBones).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->IKFootBones).ArrayNum = 0;
  (this->IKFootBones).ArrayMax = 0;
  (this->CurrentAnimAsset).field0_0x0.DebugPtr = (UAnimationAsset *)0x0;
  (this->RotationAxis).Value = '\x03';
  this->CurrentAnimAssetTime = 0.0;
  this->DistributedBoneOrientationAlpha = 0.5;
  this->RotationInterpSpeed = 10.0;
  this->CounterCompensateInterpSpeed = 45.0;
  this->MaxCorrectionDegrees = 180.0;
  this->MaxRootMotionDeltaToCompensateDegrees = 45.0;
  this->bCounterCompenstateInterpolationByRootMotion = true;
  this->bScaleByGlobalBlendWeight = false;
  this->bUseManualRootMotionVelocity = false;
  uVar10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->ManualRootMotionVelocity).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->ManualRootMotionVelocity).field0_0x0._s_0.Y = (double)uVar10;
  (this->ManualRootMotionVelocity).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  this->WarpingSpace = ComponentTransform;
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar4._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar4._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar4._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->WarpingSpaceTransform).Rotation.XY.m128d_f64 = auVar4;
  auVar5._8_4_ = SUB84((double)fVar3,0);
  auVar5._0_8_ = (double)fVar2;
  auVar5._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  *(undefined1 (*) [16])(this->WarpingSpaceTransform).Rotation.ZW.m128d_f64 = auVar5;
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar6._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar6._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar6._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->WarpingSpaceTransform).Translation.XY.m128d_f64 = auVar6;
  auVar7._8_4_ = SUB84((double)fVar3,0);
  auVar7._0_8_ = (double)fVar2;
  auVar7._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  *(undefined1 (*) [16])(this->WarpingSpaceTransform).Translation.ZW.m128d_f64 = auVar7;
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar8._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar8._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->WarpingSpaceTransform).Scale3D.XY.m128d_f64 = auVar8;
  auVar9._8_4_ = SUB84((double)fVar3,0);
  auVar9._0_8_ = (double)fVar2;
  auVar9._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  *(undefined1 (*) [16])(this->WarpingSpaceTransform).Scale3D.ZW.m128d_f64 = auVar9;
  (this->SpineBoneDataArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SpineBoneDataArray).ArrayNum = 0;
  (this->SpineBoneDataArray).ArrayMax = 0;
  (this->IKFootData).IKFootBoneIndexArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->IKFootData).IKFootBoneIndexArray.ArrayNum = 0;
  (this->IKFootData).IKFootBoneIndexArray.ArrayMax = 0;
  (this->IKFootData).IKFootRootBoneIndex = (FCompactPoseBoneIndex)0xffffffff;
  uVar10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->RootMotionDeltaDirection).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->RootMotionDeltaDirection).field0_0x0._s_0.Y = (double)uVar10;
  (this->RootMotionDeltaDirection).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  dVar11 = UE::Math::TQuat<double>::Identity.Y;
  (this->RootMotionDeltaRotation).X = UE::Math::TQuat<double>::Identity.X;
  (this->RootMotionDeltaRotation).Y = dVar11;
  dVar11 = UE::Math::TQuat<double>::Identity.W;
  (this->RootMotionDeltaRotation).Z = UE::Math::TQuat<double>::Identity.Z;
  (this->RootMotionDeltaRotation).W = dVar11;
  this->CounterCompensateTargetAngleRad = 0.0;
  uVar10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->FutureRootMotionDeltaDirection).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->FutureRootMotionDeltaDirection).field0_0x0._s_0.Y = (double)uVar10;
  (this->FutureRootMotionDeltaDirection).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  this->bUsedFutureRootMotion = false;
  (this->DebugColor).field0_0x0._s_0 = (FColor_u_0_s_0)FColor::Black.field0_0x0;
  (this->UpdateCounter).LastSyncronizedFrame = 0xffffffffffffffff;
  (this->UpdateCounter).Counter = -1;
  (this->UpdateCounter).SkipFrames = 0;
  this->ActualOrientationAngleRad = 0.0;
  this->BlendWeight = 0.0;
  this->bIsFirstUpdate = false;
  return this;
}

// ~FAnimNode_OrientationWarping @ 14a71c180

void __thiscall
FAnimNode_OrientationWarping::~FAnimNode_OrientationWarping(FAnimNode_OrientationWarping *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->IKFootData).IKFootBoneIndexArray.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SpineBoneDataArray).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->IKFootBones).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SpineBones).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined ***)this = &___7FAnimNode_SkeletalControlBase__6B_;
  if (*(void **)&this->field_0xb8 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0xb8);
  }
  *(undefined ***)this = &___7FAnimNode_Base__6B_;
  return;
}

// operator= @ 14a71c750

FAnimNode_OrientationWarping * __thiscall
FAnimNode_OrientationWarping::operator=
          (FAnimNode_OrientationWarping *this,FAnimNode_OrientationWarping *param_1)

{
  int *piVar1;
  TArray<FAnimNode_OrientationWarping::FOrientationWarpingSpineBoneData,TSizedDefaultAllocator<32>_>
  *pTVar2;
  FOrientationWarpingFootData *pFVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  UAnimationAsset *pUVar8;
  FScriptContainerElement *pFVar9;
  double dVar10;
  short sVar11;
  short sVar12;
  
  FAnimNode_SkeletalControlBase::operator=
            ((FAnimNode_SkeletalControlBase *)this,(FAnimNode_SkeletalControlBase *)param_1);
  this->Mode = param_1->Mode;
  this->TargetTime = param_1->TargetTime;
  this->OrientationAngle = param_1->OrientationAngle;
  this->LocomotionAngle = param_1->LocomotionAngle;
  dVar10 = (param_1->LocomotionDirection).field0_0x0._s_0.Y;
  (this->LocomotionDirection).field0_0x0._s_0.X = (param_1->LocomotionDirection).field0_0x0._s_0.X;
  (this->LocomotionDirection).field0_0x0._s_0.Y = dVar10;
  (this->LocomotionDirection).field0_0x0._s_0.Z = (param_1->LocomotionDirection).field0_0x0._s_0.Z;
  this->MinRootMotionSpeedThreshold = param_1->MinRootMotionSpeedThreshold;
  this->LocomotionAngleDeltaThreshold = param_1->LocomotionAngleDeltaThreshold;
  TArray<FBoneReference,TSizedDefaultAllocator<32>_>::operator=
            (&this->SpineBones,&param_1->SpineBones);
  (this->IKFootRootBone).BoneName = (param_1->IKFootRootBone).BoneName;
  uVar4 = *(undefined4 *)&(param_1->IKFootRootBone).field_0x8;
  *(uint *)&(this->IKFootRootBone).field_0x8 =
       (uVar4 ^ *(uint *)&(this->IKFootRootBone).field_0x8) & 0x80000000 ^ uVar4;
  uVar5 = *(undefined4 *)&(param_1->IKFootRootBone).field_0x8;
  *(uint *)&(this->IKFootRootBone).field_0x8 =
       (SPULL(uVar5,0,0x1f) ^ SPULL(uVar4,0,0x1f)) & 0x7fffffffU ^ uVar5;
  (this->IKFootRootBone).CachedCompactPoseIndex = (param_1->IKFootRootBone).CachedCompactPoseIndex;
  TArray<FBoneReference,TSizedDefaultAllocator<32>_>::operator=
            (&this->IKFootBones,&param_1->IKFootBones);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar8 = (param_1->CurrentAnimAsset).field0_0x0.DebugPtr, pUVar8 != (UAnimationAsset *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar8);
  }
  (this->CurrentAnimAsset).field0_0x0 = (param_1->CurrentAnimAsset).field0_0x0;
  pTVar2 = &this->SpineBoneDataArray;
  this->CurrentAnimAssetTime = param_1->CurrentAnimAssetTime;
  (this->RotationAxis).Value = (param_1->RotationAxis).Value;
  this->DistributedBoneOrientationAlpha = param_1->DistributedBoneOrientationAlpha;
  this->RotationInterpSpeed = param_1->RotationInterpSpeed;
  this->CounterCompensateInterpSpeed = param_1->CounterCompensateInterpSpeed;
  this->MaxCorrectionDegrees = param_1->MaxCorrectionDegrees;
  this->MaxRootMotionDeltaToCompensateDegrees = param_1->MaxRootMotionDeltaToCompensateDegrees;
  this->bCounterCompenstateInterpolationByRootMotion =
       param_1->bCounterCompenstateInterpolationByRootMotion;
  this->bScaleByGlobalBlendWeight = param_1->bScaleByGlobalBlendWeight;
  this->bUseManualRootMotionVelocity = param_1->bUseManualRootMotionVelocity;
  dVar10 = (param_1->ManualRootMotionVelocity).field0_0x0._s_0.Y;
  (this->ManualRootMotionVelocity).field0_0x0._s_0.X =
       (param_1->ManualRootMotionVelocity).field0_0x0._s_0.X;
  (this->ManualRootMotionVelocity).field0_0x0._s_0.Y = dVar10;
  (this->ManualRootMotionVelocity).field0_0x0._s_0.Z =
       (param_1->ManualRootMotionVelocity).field0_0x0._s_0.Z;
  this->WarpingSpace = param_1->WarpingSpace;
  dVar10 = (param_1->WarpingSpaceTransform).Rotation.XY.m128d_f64[1];
  (this->WarpingSpaceTransform).Rotation.XY.m128d_f64[0] =
       (param_1->WarpingSpaceTransform).Rotation.XY.m128d_f64[0];
  (this->WarpingSpaceTransform).Rotation.XY.m128d_f64[1] = dVar10;
  dVar10 = (param_1->WarpingSpaceTransform).Rotation.ZW.m128d_f64[1];
  (this->WarpingSpaceTransform).Rotation.ZW.m128d_f64[0] =
       (param_1->WarpingSpaceTransform).Rotation.ZW.m128d_f64[0];
  (this->WarpingSpaceTransform).Rotation.ZW.m128d_f64[1] = dVar10;
  dVar10 = (param_1->WarpingSpaceTransform).Translation.XY.m128d_f64[1];
  (this->WarpingSpaceTransform).Translation.XY.m128d_f64[0] =
       (param_1->WarpingSpaceTransform).Translation.XY.m128d_f64[0];
  (this->WarpingSpaceTransform).Translation.XY.m128d_f64[1] = dVar10;
  dVar10 = (param_1->WarpingSpaceTransform).Translation.ZW.m128d_f64[1];
  (this->WarpingSpaceTransform).Translation.ZW.m128d_f64[0] =
       (param_1->WarpingSpaceTransform).Translation.ZW.m128d_f64[0];
  (this->WarpingSpaceTransform).Translation.ZW.m128d_f64[1] = dVar10;
  dVar10 = (param_1->WarpingSpaceTransform).Scale3D.XY.m128d_f64[1];
  (this->WarpingSpaceTransform).Scale3D.XY.m128d_f64[0] =
       (param_1->WarpingSpaceTransform).Scale3D.XY.m128d_f64[0];
  (this->WarpingSpaceTransform).Scale3D.XY.m128d_f64[1] = dVar10;
  dVar10 = (param_1->WarpingSpaceTransform).Scale3D.ZW.m128d_f64[1];
  (this->WarpingSpaceTransform).Scale3D.ZW.m128d_f64[0] =
       (param_1->WarpingSpaceTransform).Scale3D.ZW.m128d_f64[0];
  (this->WarpingSpaceTransform).Scale3D.ZW.m128d_f64[1] = dVar10;
  if (pTVar2 != &param_1->SpineBoneDataArray) {
    iVar6 = (param_1->SpineBoneDataArray).ArrayNum;
    piVar1 = &(this->SpineBoneDataArray).ArrayMax;
    pFVar9 = (param_1->SpineBoneDataArray).AllocatorInstance.Data;
    (this->SpineBoneDataArray).ArrayNum = iVar6;
    if ((iVar6 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,iVar6,*piVar1,&pTVar2->AllocatorInstance,iVar6,piVar1);
      if (iVar6 != 0) {
        memcpy((pTVar2->AllocatorInstance).Data,pFVar9,(longlong)iVar6 << 3);
      }
    }
  }
  pFVar3 = &this->IKFootData;
  if (pFVar3 != &param_1->IKFootData) {
    iVar6 = (param_1->IKFootData).IKFootBoneIndexArray.ArrayNum;
    piVar1 = &(this->IKFootData).IKFootBoneIndexArray.ArrayMax;
    pFVar9 = (param_1->IKFootData).IKFootBoneIndexArray.AllocatorInstance.Data;
    iVar7 = *piVar1;
    (this->IKFootData).IKFootBoneIndexArray.ArrayNum = iVar6;
    if ((iVar6 == 0) && (iVar7 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,iVar6,iVar7,(ForAnyElementType *)pFVar3,iVar6,piVar1);
      if (iVar6 != 0) {
        memcpy((pFVar3->IKFootBoneIndexArray).AllocatorInstance.Data,pFVar9,(longlong)iVar6 << 2);
      }
    }
  }
  (this->IKFootData).IKFootRootBoneIndex = (param_1->IKFootData).IKFootRootBoneIndex;
  dVar10 = (param_1->RootMotionDeltaDirection).field0_0x0._s_0.Y;
  (this->RootMotionDeltaDirection).field0_0x0._s_0.X =
       (param_1->RootMotionDeltaDirection).field0_0x0._s_0.X;
  (this->RootMotionDeltaDirection).field0_0x0._s_0.Y = dVar10;
  (this->RootMotionDeltaDirection).field0_0x0._s_0.Z =
       (param_1->RootMotionDeltaDirection).field0_0x0._s_0.Z;
  dVar10 = (param_1->RootMotionDeltaRotation).Y;
  (this->RootMotionDeltaRotation).X = (param_1->RootMotionDeltaRotation).X;
  (this->RootMotionDeltaRotation).Y = dVar10;
  dVar10 = (param_1->RootMotionDeltaRotation).W;
  (this->RootMotionDeltaRotation).Z = (param_1->RootMotionDeltaRotation).Z;
  (this->RootMotionDeltaRotation).W = dVar10;
  this->CounterCompensateTargetAngleRad = param_1->CounterCompensateTargetAngleRad;
  dVar10 = (param_1->FutureRootMotionDeltaDirection).field0_0x0._s_0.Y;
  (this->FutureRootMotionDeltaDirection).field0_0x0._s_0.X =
       (param_1->FutureRootMotionDeltaDirection).field0_0x0._s_0.X;
  (this->FutureRootMotionDeltaDirection).field0_0x0._s_0.Y = dVar10;
  (this->FutureRootMotionDeltaDirection).field0_0x0._s_0.Z =
       (param_1->FutureRootMotionDeltaDirection).field0_0x0._s_0.Z;
  this->bUsedFutureRootMotion = param_1->bUsedFutureRootMotion;
  (this->DebugColor).field0_0x0 = (param_1->DebugColor).field0_0x0;
  this->ActualOrientationAngleRad = param_1->ActualOrientationAngleRad;
  this->BlendWeight = param_1->BlendWeight;
  sVar11 = (param_1->UpdateCounter).Counter;
  sVar12 = (param_1->UpdateCounter).SkipFrames;
  uVar4 = *(undefined4 *)&(param_1->UpdateCounter).field_0xc;
  (this->UpdateCounter).LastSyncronizedFrame = (param_1->UpdateCounter).LastSyncronizedFrame;
  (this->UpdateCounter).Counter = sVar11;
  (this->UpdateCounter).SkipFrames = sVar12;
  *(undefined4 *)&(this->UpdateCounter).field_0xc = uVar4;
  this->bIsFirstUpdate = param_1->bIsFirstUpdate;
  return this;
}

// Reset @ 14a72f6a0

void __thiscall
FAnimNode_OrientationWarping::Reset
          (FAnimNode_OrientationWarping *this,FAnimationBaseContext *param_1)

{
  undefined8 uVar1;
  
  this->bIsFirstUpdate = true;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->RootMotionDeltaDirection).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->RootMotionDeltaDirection).field0_0x0._s_0.Y = (double)uVar1;
  (this->RootMotionDeltaDirection).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->ManualRootMotionVelocity).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->ManualRootMotionVelocity).field0_0x0._s_0.Y = (double)uVar1;
  (this->ManualRootMotionVelocity).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  this->ActualOrientationAngleRad = 0.0;
  return;
}

// operator() @ 1505530b0

bool __thiscall
`FAnimNode_OrientationWarping::EvaluateSkeletalControl_AnyThread'::__l12::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<2621739004885729442>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<2621739004885729442>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150553130

bool __thiscall
`FAnimNode_OrientationWarping::EvaluateSkeletalControl_AnyThread'::__l24::<lambda_2>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<2621739004885729629>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<2621739004885729629>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

