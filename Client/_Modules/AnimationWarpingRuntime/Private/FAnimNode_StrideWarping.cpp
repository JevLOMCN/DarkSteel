// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimationWarpingRuntime
// Functions: 10

// StaticStruct @ 14a709a30

UScriptStruct * __cdecl FAnimNode_StrideWarping::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAnimNode_StrideWarping.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AnimationWarpingRuntime();
    Z_Registration_Info_UScriptStruct_FAnimNode_StrideWarping.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_StrideWarping,(UObject *)pUVar1,
                         L"AnimNode_StrideWarping");
  }
  return Z_Registration_Info_UScriptStruct_FAnimNode_StrideWarping.OuterSingleton;
}

// GatherDebugData @ 14a709f90

void __thiscall
FAnimNode_StrideWarping::GatherDebugData(FAnimNode_StrideWarping *this,FNodeDebugData *param_1)

{
  TConsoleVariableData<int> *pTVar1;
  ForAnyElementType _Src;
  bool bVar2;
  UPackage *pUVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  FName local_res8;
  FString local_58;
  FString local_48;
  FString local_38 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAnimNode_StrideWarping.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar3 = Z_Construct_UPackage__Script_AnimationWarpingRuntime();
    Z_Registration_Info_UScriptStruct_FAnimNode_StrideWarping.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_StrideWarping,(UObject *)pUVar3,
                         L"AnimNode_StrideWarping");
  }
  local_res8 = (FName)(Z_Registration_Info_UScriptStruct_FAnimNode_StrideWarping.OuterSingleton)->
                      _padding_;
  ::FName::ToString(&local_res8,&local_48);
  ::FString::PrintfImpl(&local_58,L"%s<W:%.1f%%> %s");
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  ::FString::Empty(&param_1->NodeDescription);
  pTVar1 = CVarAnimNodeStrideWarpingVerbose.Ref;
  bVar2 = IsInParallelGameThread();
  if (!bVar2) {
    bVar2 = IsInGameThread();
    lVar4 = 4;
    if (!bVar2) goto LAB_14a70a082;
  }
  lVar4 = 0;
LAB_14a70a082:
  if (*(int *)((longlong)pTVar1->ShadowedValue + lVar4) == 1) {
    ::FString::PrintfImpl(&local_48,L"\n - Evaluation Mode: (%s)");
    iVar5 = local_48.Data.ArrayNum + -1;
    if (local_48.Data.ArrayNum == 0) {
      iVar5 = 0;
    }
    ::FString::AppendChars(&local_58,(wchar_t *)local_48.Data.AllocatorInstance.Data,iVar5);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    ::FString::PrintfImpl(&local_48,L"\n - Stride Scale: (%.3fd)");
    iVar5 = local_48.Data.ArrayNum + -1;
    if (local_48.Data.ArrayNum == 0) {
      iVar5 = 0;
    }
    ::FString::AppendChars(&local_58,(wchar_t *)local_48.Data.AllocatorInstance.Data,iVar5);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    UE::Math::TVector<double>::ToCompactString(&this->ActualStrideDirection,local_38);
    ::FString::PrintfImpl(&local_48,L"\n - Stride Direction: (%s)");
    iVar6 = 0;
    iVar5 = local_48.Data.ArrayNum + -1;
    if (local_48.Data.ArrayNum == 0) {
      iVar5 = iVar6;
    }
    ::FString::AppendChars(&local_58,(wchar_t *)local_48.Data.AllocatorInstance.Data,iVar5);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
    }
    if (this->Mode == Graph) {
      ::FString::PrintfImpl(&local_48,L"\n - Locomotion Speed: (%.3fd)");
      iVar5 = local_48.Data.ArrayNum + -1;
      if (local_48.Data.ArrayNum == 0) {
        iVar5 = iVar6;
      }
      ::FString::AppendChars(&local_58,(wchar_t *)local_48.Data.AllocatorInstance.Data,iVar5);
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      ::FString::PrintfImpl(&local_48,L"\n - Min Root Motion Speed Threshold: (%.3fd)");
      iVar5 = local_48.Data.ArrayNum + -1;
      if (local_48.Data.ArrayNum == 0) {
        iVar5 = iVar6;
      }
      ::FString::AppendChars(&local_58,(wchar_t *)local_48.Data.AllocatorInstance.Data,iVar5);
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
    }
    UE::Math::TVector<double>::ToCompactString(&(this->FloorNormalDirection).Value,local_38);
    ::FString::PrintfImpl(&local_48,L"\n - Floor Normal: (%s)");
    iVar5 = local_48.Data.ArrayNum + -1;
    if (local_48.Data.ArrayNum == 0) {
      iVar5 = iVar6;
    }
    ::FString::AppendChars(&local_58,(wchar_t *)local_48.Data.AllocatorInstance.Data,iVar5);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
    }
    UE::Math::TVector<double>::ToCompactString(&(this->GravityDirection).Value,local_38);
    ::FString::PrintfImpl(&local_48,L"\n - Gravity Direction: (%s)");
  }
  else {
    UE::Math::TVector<double>::ToCompactString(&this->ActualStrideDirection,local_38);
    ::FString::PrintfImpl(&local_48,L"(Stride Scale: %.3fd, Direction: %s)");
  }
  iVar5 = local_48.Data.ArrayNum + -1;
  if (local_48.Data.ArrayNum == 0) {
    iVar5 = 0;
  }
  ::FString::AppendChars(&local_58,(wchar_t *)local_48.Data.AllocatorInstance.Data,iVar5);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
  }
  _Src.Data = local_58.Data.AllocatorInstance.Data;
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_58.Data.ArrayNum == 0) {
    local_48.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_58.Data.ArrayNum,0,(ForAnyElementType *)&local_48,local_58.Data.ArrayNum,
               &local_48.Data.ArrayMax);
    memcpy(local_48.Data.AllocatorInstance.Data,_Src.Data,(longlong)local_58.Data.ArrayNum * 2);
  }
  FNodeDebugData::AddDebugItem(param_1,&local_48,false);
  FPoseLinkBase::GatherDebugData((FPoseLinkBase *)&this->_padding_,param_1);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  return;
}

// UpdateInternal @ 14a70a3e0

void __thiscall
FAnimNode_StrideWarping::UpdateInternal
          (FAnimNode_StrideWarping *this,FAnimationUpdateContext *param_1)

{
  FAnimNode_SkeletalControlBase::UpdateInternal((FAnimNode_SkeletalControlBase *)this,param_1);
  this->CachedDeltaTime = param_1->DeltaTime;
  return;
}

// Initialize_AnyThread @ 14a70a410

void __thiscall
FAnimNode_StrideWarping::Initialize_AnyThread
          (FAnimNode_StrideWarping *this,FAnimationInitializeContext *param_1)

{
  undefined8 uVar1;
  
  FAnimNode_SkeletalControlBase::Initialize_AnyThread((FAnimNode_SkeletalControlBase *)this,param_1)
  ;
  this->AnimInstanceProxy = *(FAnimInstanceProxy **)param_1;
  (this->StrideScaleModifierState).bInitialized = false;
  uVar1 = UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Y;
  (this->ActualStrideDirection).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.X;
  (this->ActualStrideDirection).field0_0x0._s_0.Y = (double)uVar1;
  (this->ActualStrideDirection).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Z;
  this->ActualStrideScale = 1.0;
  return;
}

// EvaluateSkeletalControl_AnyThread @ 14a70a470

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAnimNode_StrideWarping::EvaluateSkeletalControl_AnyThread
          (FAnimNode_StrideWarping *this,FComponentSpacePoseContext *param_1,
          TArray<FBoneTransform,TSizedDefaultAllocator<32>_> *param_2)

{
  FCSPose<FCompactPose> *this_00;
  undefined8 *puVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  double dVar12;
  double dVar13;
  double dVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  double dVar22;
  double dVar23;
  undefined1 auVar24 [12];
  undefined1 auVar25 [12];
  undefined1 auVar26 [12];
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  double dVar31;
  double dVar32;
  undefined1 auVar33 [16];
  TArray<FBoneTransform,TSizedDefaultAllocator<32>_> *pTVar34;
  int iVar35;
  bool bVar36;
  char cVar37;
  bool bVar38;
  FCompactPoseBoneIndex FVar39;
  int iVar40;
  undefined4 extraout_EAX;
  TStatId TVar41;
  TVector<double> *pTVar42;
  undefined4 extraout_var_00;
  TTransform<double> *pTVar43;
  TVector<double>_u_0 *pTVar44;
  ForElementType<float> FVar45;
  longlong lVar46;
  ForElementType<UE::Math::TVector<double>_> FVar47;
  TVector<double> *pTVar48;
  TTransform<double> *extraout_RAX;
  TQuat<double> *pTVar49;
  TArray<FBoneTransform,TSizedDefaultAllocator<32>_> *pTVar50;
  undefined7 extraout_var;
  uint uVar51;
  uint uVar52;
  uint uVar53;
  ulonglong uVar54;
  FIKFootPelvisPullDownSolver *this_01;
  TStringBuilderBase<wchar_t> *this_02;
  TQuat<double> *__return_storage_ptr__;
  char *this_03;
  FAnimInstanceProxy *pFVar55;
  FCompactPoseBoneIndex *pFVar56;
  TArray<FBoneTransform,TSizedDefaultAllocator<32>_> *pTVar57;
  FScriptContainerElement *pFVar58;
  FCompactPoseBoneIndex *pFVar59;
  FScriptContainerElement *pFVar60;
  FCompactPoseBoneIndex *pFVar61;
  TArray<FBoneTransform,TSizedDefaultAllocator<32>_> *pTVar62;
  FScriptContainerElement *pFVar63;
  double dVar64;
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  double dVar111;
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined8 uVar112;
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
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  double dVar113;
  double dVar114;
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  float fVar121;
  undefined1 auVar122 [16];
  undefined1 auVar123 [16];
  undefined1 auVar124 [16];
  undefined1 auVar125 [16];
  undefined1 auVar126 [16];
  undefined1 auVar127 [16];
  undefined1 auVar128 [16];
  undefined1 auVar129 [16];
  undefined1 auVar130 [16];
  undefined1 auVar131 [16];
  undefined1 auVar132 [16];
  undefined1 auVar133 [16];
  undefined1 auVar134 [16];
  undefined1 auVar135 [16];
  undefined1 auVar136 [16];
  undefined1 auVar137 [16];
  undefined1 auVar138 [16];
  undefined1 auVar139 [16];
  undefined1 auVar140 [16];
  float fVar141;
  double dVar142;
  double dVar143;
  double dVar144;
  undefined1 auVar145 [16];
  undefined1 auVar146 [16];
  undefined1 auVar147 [16];
  undefined1 auVar148 [16];
  undefined1 auVar149 [16];
  undefined1 auVar150 [16];
  undefined1 auVar151 [16];
  undefined1 auVar152 [16];
  undefined1 auVar153 [16];
  undefined1 auVar154 [16];
  undefined1 auVar155 [16];
  undefined1 auVar156 [16];
  undefined1 auVar157 [16];
  undefined1 auVar158 [16];
  undefined1 auVar159 [16];
  undefined1 auVar160 [16];
  undefined1 auVar161 [16];
  undefined4 uVar162;
  double dVar163;
  undefined1 auVar164 [16];
  undefined1 auVar165 [16];
  undefined1 auVar166 [16];
  undefined1 auVar167 [16];
  undefined1 auVar168 [16];
  undefined1 auVar169 [16];
  undefined1 auVar170 [16];
  undefined1 auVar171 [16];
  undefined1 auVar172 [16];
  undefined1 auVar173 [16];
  undefined1 auVar174 [16];
  undefined1 auVar175 [16];
  undefined1 auVar176 [16];
  undefined1 auVar177 [16];
  undefined1 auVar178 [16];
  undefined1 auVar179 [16];
  undefined1 auVar180 [16];
  undefined1 auVar181 [16];
  undefined1 auVar182 [16];
  undefined1 auVar183 [16];
  undefined1 auVar184 [16];
  double dVar188;
  undefined1 auVar185 [16];
  undefined1 auVar186 [16];
  undefined1 auVar187 [16];
  uint uVar189;
  uint uVar190;
  uint uVar191;
  undefined4 uVar192;
  undefined4 uVar193;
  undefined4 uVar194;
  uint uVar195;
  uint uVar196;
  uint uVar197;
  uint uVar198;
  float fVar199;
  uint uVar200;
  uint uVar201;
  uint uVar202;
  uint uVar203;
  undefined1 auStackY_14b8 [32];
  bool local_1468;
  undefined1 local_1467;
  undefined1 local_1466;
  char local_1465 [5];
  FIdentityFunctor local_1460 [4];
  float local_145c;
  IAnimRootMotionProvider *local_1458;
  TArray<FBoneTransform,TSizedDefaultAllocator<32>_> *local_1450;
  FCompactPoseBoneIndex local_1448;
  TVector<double>_u_0 local_1440;
  TVector<double>_u_0 local_1428;
  TVector<double>_u_0 local_1410;
  FName local_13f8;
  byte local_13f0;
  ForAnyElementType local_13e8;
  undefined8 uStack_13e0;
  ForAnyElementType local_13d8;
  double dStack_13d0;
  TVector<double>_u_0 local_13c8;
  TVector<double>_u_0 local_13b0;
  TVector<double>_u_0 local_1398;
  undefined8 local_1380;
  undefined1 auStack_1378 [24];
  FSkelMeshRefPoseOverride *pFStack_1360;
  FSharedReferencer<1> local_1358;
  undefined1 local_1350 [16];
  double dStack_1340;
  double local_1338;
  double local_1328;
  FWeakObjectPtr FStack_1320;
  FWeakObjectPtr local_1318;
  FSourceLocation local_1308;
  ForElementType<UE::Math::TVector<double>_> local_12e8;
  int iStack_12e0;
  undefined4 uStack_12dc;
  ForElementType<float> local_12d8;
  int iStack_12d0;
  undefined4 uStack_12cc;
  FString local_12c8;
  double local_12b8;
  ForAnyElementType FStack_12b0;
  TVector<double>_u_0 local_12a8;
  TVector<double>_u_0 local_1290;
  TVector<double>_u_0 local_1278;
  TVector<double>_u_0 local_1260;
  TVector<double>_u_0 local_1248;
  TVector<double>_u_0 local_1230;
  double local_1218;
  double dStack_1210;
  double local_11f8;
  double local_11f0;
  TArrayView<UE::Math::TVector<double>_const_,int> local_11e8;
  TArrayView<float_const_,int> local_11d8;
  FString local_11c8;
  undefined4 local_11b8;
  undefined4 uStack_11b4;
  undefined4 uStack_11b0;
  undefined4 uStack_11ac;
  TVector<double>_u_0 local_11a8;
  TVector<double>_u_0 local_1190;
  TVector<double>_u_0 local_1178;
  TVector<double>_u_0 local_1160;
  TVector<double>_u_0 local_1148;
  TVector<double>_u_0 local_1130;
  TVector<double>_u_0 local_1118;
  TVector<double>_u_0 local_1100;
  TVector<double>_u_0 local_10e8;
  TVector<double>_u_0 local_10d0;
  TVector<double>_u_0 local_10b8;
  undefined1 local_10a0 [16];
  double local_1090;
  TVector<double>_u_0 local_1088;
  TQuat<double> local_1068;
  double local_1048;
  double dStack_1040;
  double local_1038;
  double local_1030;
  double dStack_1028;
  double local_1020;
  double local_1018;
  double dStack_1010;
  double local_1008;
  double local_1000;
  double dStack_ff8;
  double local_ff0;
  double local_fe8;
  double dStack_fe0;
  double local_fd8;
  double local_fd0;
  double dStack_fc8;
  double local_fc0;
  undefined1 local_fb8 [16];
  double local_fa8;
  undefined1 local_fa0 [16];
  double local_f90;
  undefined1 local_f88 [16];
  double local_f78;
  FScriptContainerElement *local_f70;
  double dStack_f68;
  FScriptContainerElement *local_f60;
  undefined1 local_f58 [16];
  double local_f48;
  undefined1 local_f40 [16];
  double local_f30;
  undefined1 local_f28 [16];
  double local_f18;
  FScriptContainerElement *local_f10;
  double dStack_f08;
  FScriptContainerElement *local_f00;
  undefined1 local_ef8 [16];
  double local_ee8;
  undefined1 local_ee0 [16];
  double local_ed0;
  undefined1 local_ec8 [16];
  double local_eb8;
  undefined1 local_eb0 [16];
  double local_ea0;
  FScriptContainerElement *local_e98;
  double dStack_e90;
  FScriptContainerElement *local_e88;
  double local_e80;
  double dStack_e78;
  double local_e70;
  FScriptContainerElement *local_e68;
  double dStack_e60;
  FScriptContainerElement *local_e58;
  double local_e50;
  double dStack_e48;
  double local_e40;
  TTransform<double> local_e38;
  double local_dd8;
  double dStack_dd0;
  double local_dc8;
  double dStack_dc0;
  undefined1 local_db8 [16];
  double local_da8;
  double dStack_da0;
  double local_d98;
  double dStack_d90;
  double local_d88;
  double dStack_d80;
  TVector<double> local_d78;
  TVector<double> local_d60;
  TVector<double> local_d48;
  TVector<double> local_d30;
  TVector<double> local_d18;
  TVector<double> local_d00;
  TVector<double> local_ce8;
  TVector<double> local_cd0;
  ForElementType<float> local_cb8;
  int local_c88;
  int local_c84 [3];
  FCompactPoseBoneIndex local_c78;
  undefined4 uStack_c74;
  undefined8 uStack_c70;
  uint local_c68;
  uint uStack_c64;
  uint uStack_c60;
  uint uStack_c5c;
  uint local_c58;
  uint uStack_c54;
  uint uStack_c50;
  uint uStack_c4c;
  undefined1 local_c48 [16];
  undefined1 local_c38 [16];
  undefined1 local_c28 [16];
  uint local_c18;
  uint uStack_c14;
  uint uStack_c10;
  uint uStack_c0c;
  int local_c08;
  undefined4 uStack_c04;
  undefined8 uStack_c00;
  undefined1 local_bf8 [16];
  undefined1 local_be8 [16];
  undefined1 local_bd8 [16];
  undefined1 local_bc8 [16];
  undefined1 local_bb8 [16];
  uint local_ba8;
  uint uStack_ba4;
  uint uStack_ba0;
  uint uStack_b9c;
  undefined4 local_b98;
  undefined4 uStack_b94;
  undefined8 uStack_b90;
  FScriptContainerElement *local_b88;
  double dStack_b80;
  FScriptContainerElement *local_b78;
  double dStack_b70;
  FScriptContainerElement *local_b68;
  double dStack_b60;
  FScriptContainerElement *local_b58;
  double dStack_b50;
  FScriptContainerElement *local_b48;
  double dStack_b40;
  FScriptContainerElement *local_b38;
  double dStack_b30;
  double local_b28 [2];
  double local_b18 [2];
  double local_b08 [2];
  double local_af8 [2];
  double local_ae8 [2];
  double local_ad8 [2];
  TTransform<double> local_ac8;
  ForElementType<UE::Math::TVector<double>_> local_a68;
  int local_970;
  int local_96c;
  TTransform<double> local_968;
  TStringBuilderBase<wchar_t> local_908;
  wchar_t local_8e8 [1024];
  ulonglong local_e8 [22];
  double dVar120;
  
  local_e8[0] = __security_cookie.value ^ (ulonglong)auStackY_14b8;
  local_1450 = param_2;
  local_13e8.Data = (FScriptContainerElement *)param_1;
  TVar41 = FThreadSafeStaticStatInner<FStat_STAT_StrideWarping_Eval,1>::GetStatId
                     ((FThreadSafeStaticStatInner<FStat_STAT_StrideWarping_Eval,1> *)
                      &StatPtr_STAT_StrideWarping_Eval);
  local_1308.Impl._Line = 0x48;
  local_1308.Impl._Function =
       "void __cdecl FAnimNode_StrideWarping::EvaluateSkeletalControl_AnyThread(struct FComponentSpacePoseContext &,class TArray<struct FBoneTransform,class TSizedDefaultAllocator<32> > &)"
  ;
  local_1308.Impl._Column = 2;
  local_1308.Impl._File =
       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\AnimationWarping\\Source\\Runtime\\Private\\BoneControllers\\AnimNode_StrideWarping.cpp"
  ;
  FScopeCycleCounter::FScopeCycleCounter
            ((FScopeCycleCounter *)&local_13f8,*(TStatIdData **)&(TVar41.StatIdPtr)->Name,
             CycleStat|ClearEveryFrame,false,&local_1308);
  if ((param_2->ArrayNum != 0) &&
     (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                         ("OutBoneTransforms.IsEmpty()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\AnimationWarping\\Source\\Runtime\\Private\\BoneControllers\\AnimNode_StrideWarping.cpp"
                          ,0x49,L""), bVar36)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pTVar48 = &this->ActualStrideDirection;
  local_11a8._s_0.X = (pTVar48->field0_0x0)._s_0.X;
  local_11a8._s_0.Y = (this->ActualStrideDirection).field0_0x0._s_0.Y;
  this->ActualStrideScale = this->StrideScale;
  local_11a8._s_0.Z = (this->ActualStrideDirection).field0_0x0._s_0.Z;
  local_1468 = false;
  dVar142 = (this->StrideDirection).field0_0x0._s_0.Y;
  dVar114 = (this->StrideDirection).field0_0x0._s_0.Z;
  (pTVar48->field0_0x0)._s_0.X = (this->StrideDirection).field0_0x0._s_0.X;
  (this->ActualStrideDirection).field0_0x0._s_0.Y = dVar142;
  (this->ActualStrideDirection).field0_0x0._s_0.Z = dVar114;
  local_1458 = UE::Anim::IAnimRootMotionProvider::Get();
  if ((this->Mode == Graph) &&
     (local_1468 = local_1458 != (IAnimRootMotionProvider *)0x0,
     local_1458 == (IAnimRootMotionProvider *)0x0)) {
    local_1467 = 0;
    `FAnimNode_StrideWarping::EvaluateSkeletalControl_AnyThread'::__l12::<lambda_1>::operator()
              (&local_1467);
  }
  dVar114 = __real_3e45798ee0000000;
  local_b28[0] = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0];
  local_b28[1] = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1];
  local_b08[0] = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0];
  local_b08[1] = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1];
  local_ae8[0] = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0];
  local_ae8[1] = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1];
  local_b18[0] = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0];
  local_b18[1] = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1];
  local_af8[0] = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0];
  local_af8[1] = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1];
  local_ad8[0] = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0];
  local_ad8[1] = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1];
  local_13b0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_13b0._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_13b0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  if (local_1468) {
    local_1468 = (bool)(**(code **)((longlong)*local_1458 + 0x20))
                                 (UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,
                                  &param_1->CustomAttributes,local_b28);
    if (local_1468 == false) {
      if (this->bDisableIfMissingRootMotion != false) goto LAB_14a70cbc7;
    }
    else {
      local_e40 = local_af8[0];
      local_13b0._s_0.Z = local_af8[0];
      local_e50 = local_b08[0];
      dStack_e48 = local_b08[1];
      local_13b0._s_0.X = local_b08[0];
      local_13b0._s_0.Y = local_b08[1];
      pTVar42 = UE::Math::TVector<double>::GetSafeNormal
                          ((TVector<double> *)&local_13b0._s_0,&local_d18,dVar114,
                           (TVector<double> *)&local_11a8._s_0);
      dVar114 = (pTVar42->field0_0x0)._s_0.Y;
      (pTVar48->field0_0x0)._s_0.X = (pTVar42->field0_0x0)._s_0.X;
      (this->ActualStrideDirection).field0_0x0._s_0.Y = dVar114;
      (this->ActualStrideDirection).field0_0x0._s_0.Z = (pTVar42->field0_0x0)._s_0.Z;
    }
  }
  local_13d8.Data = *(FScriptContainerElement **)&(param_1->Pose).Pose.field_0x10;
  FVar39 = FBoneReference::GetCompactPoseIndex(&this->IKFootRootBone,(FBoneContainer *)local_1350);
  this_00 = &param_1->Pose;
  pTVar43 = FCSPose<FCompactPose>::GetComponentSpaceTransform
                      (this_00,*(FCompactPoseBoneIndex *)CONCAT44(extraout_var_00,FVar39));
  local_ac8.Rotation.XY.m128d_f64[0] = (pTVar43->Rotation).XY.m128d_f64[0];
  local_ac8.Rotation.XY.m128d_f64[1] = (pTVar43->Rotation).XY.m128d_f64[1];
  local_ac8.Rotation.ZW.m128d_f64[0] = (pTVar43->Rotation).ZW.m128d_f64[0];
  local_ac8.Rotation.ZW.m128d_f64[1] = (pTVar43->Rotation).ZW.m128d_f64[1];
  local_ac8.Translation.XY.m128d_f64[0] = (pTVar43->Translation).XY.m128d_f64[0];
  local_ac8.Translation.XY.m128d_f64[1] = (pTVar43->Translation).XY.m128d_f64[1];
  local_ac8.Translation.ZW.m128d_f64[0] = (pTVar43->Translation).ZW.m128d_f64[0];
  local_ac8.Translation.ZW.m128d_f64[1] = (pTVar43->Translation).ZW.m128d_f64[1];
  local_ac8.Scale3D.XY.m128d_f64[0] = (pTVar43->Scale3D).XY.m128d_f64[0];
  local_ac8.Scale3D.XY.m128d_f64[1] = (pTVar43->Scale3D).XY.m128d_f64[1];
  local_ac8.Scale3D.ZW.m128d_f64[0] = (pTVar43->Scale3D).ZW.m128d_f64[0];
  local_ac8.Scale3D.ZW.m128d_f64[1] = (pTVar43->Scale3D).ZW.m128d_f64[1];
  FWarpingVectorValue::AsComponentSpaceDirection
            (&this->FloorNormalDirection,(TVector<double> *)&local_1410._s_0,this->AnimInstanceProxy
             ,&local_ac8);
  FWarpingVectorValue::AsComponentSpaceDirection
            (&this->GravityDirection,(TVector<double> *)&local_1248._s_0,this->AnimInstanceProxy,
             &local_ac8);
  if (this->bOrientStrideDirectionUsingFloorNormal != false) {
    dVar114 = (this->ActualStrideDirection).field0_0x0._s_0.Y;
    dVar142 = (this->ActualStrideDirection).field0_0x0._s_0.Z;
    dVar111 = dVar142 * local_1410._s_0.Y - dVar114 * local_1410._s_0.Z;
    dVar142 = local_1410._s_0.Z * (pTVar48->field0_0x0)._s_0.X - dVar142 * local_1410._s_0.X;
    dVar114 = dVar114 * local_1410._s_0.X - local_1410._s_0.Y * (pTVar48->field0_0x0)._s_0.X;
    (pTVar48->field0_0x0)._s_0.X = dVar142 * local_1410._s_0.Z - dVar114 * local_1410._s_0.Y;
    (this->ActualStrideDirection).field0_0x0._s_0.Y =
         dVar114 * local_1410._s_0.X - dVar111 * local_1410._s_0.Z;
    (this->ActualStrideDirection).field0_0x0._s_0.Z =
         dVar111 * local_1410._s_0.Y - dVar142 * local_1410._s_0.X;
  }
  iVar40 = TAutoConsoleVariable<int>::GetValueOnAnyThread(&CVarAnimNodeStrideWarpingDebug,false);
  fVar199 = __real_42200000;
  fVar141 = __real_40000000;
  bVar36 = iVar40 == 1;
  if (bVar36) {
    pFVar55 = this->AnimInstanceProxy;
    local_1048 = local_ac8.Translation.XY.m128d_f64[0];
    dStack_1040 = local_ac8.Translation.XY.m128d_f64[1];
    local_1230._s_0.X =
         local_1410._s_0.X * __real_4039000000000000 + local_ac8.Translation.XY.m128d_f64[0];
    local_1038 = local_ac8.Translation.ZW.m128d_f64[0];
    local_1230._s_0.Y =
         local_1410._s_0.Y * __real_4039000000000000 + local_ac8.Translation.XY.m128d_f64[1];
    local_1230._s_0.Z =
         local_1410._s_0.Z * __real_4039000000000000 + local_ac8.Translation.ZW.m128d_f64[0];
    pTVar48 = UE::Math::TTransform<double>::TransformPosition
                        (&pFVar55->ComponentTransform,&local_d00,(TVector<double> *)&local_1230._s_0
                        );
    local_1190._s_0.Z = local_ac8.Translation.ZW.m128d_f64[0];
    local_1190._s_0.X = local_ac8.Translation.XY.m128d_f64[0];
    local_1190._s_0.Y = local_ac8.Translation.XY.m128d_f64[1];
    pTVar42 = UE::Math::TTransform<double>::TransformPosition
                        (&this->AnimInstanceProxy->ComponentTransform,&local_ce8,
                         (TVector<double> *)&local_1190._s_0);
    FAnimInstanceProxy::AnimDrawDebugDirectionalArrow
              (pFVar55,pTVar42,pTVar48,fVar199,&FColor::Blue,false,0.0,fVar141,SDPG_World);
  }
  fVar199 = __real_bf800000;
  fVar141 = __real_41000000;
  pFVar59 = (FCompactPoseBoneIndex *)(this->FootData).AllocatorInstance.Data;
  iVar40 = (this->FootData).ArrayNum;
  pFVar56 = pFVar59 + 0xc;
  pFVar61 = pFVar59 + (longlong)iVar40 * 0x1c;
  while( true ) {
    if ((this->FootData).ArrayNum != iVar40) {
      local_1466 = 0;
      `TCheckedPointerIterator<FAnimNode_StrideWarping::FStrideWarpingFootData,int,0>::operator!='::
      __l2::<lambda_1>::operator()(&local_1466);
    }
    if (pFVar59 == pFVar61) break;
    pTVar43 = FCSPose<FCompactPose>::GetComponentSpaceTransform(this_00,*pFVar59);
    dVar114 = (pTVar43->Rotation).XY.m128d_f64[1];
    *(double *)(pFVar56 + -8) = (pTVar43->Rotation).XY.m128d_f64[0];
    *(double *)(pFVar56 + -6) = dVar114;
    dVar114 = (pTVar43->Rotation).ZW.m128d_f64[1];
    *(double *)(pFVar56 + -4) = (pTVar43->Rotation).ZW.m128d_f64[0];
    *(double *)(pFVar56 + -2) = dVar114;
    dVar114 = (pTVar43->Translation).XY.m128d_f64[1];
    *(double *)pFVar56 = (pTVar43->Translation).XY.m128d_f64[0];
    *(double *)(pFVar56 + 2) = dVar114;
    dVar114 = (pTVar43->Translation).ZW.m128d_f64[1];
    *(double *)(pFVar56 + 4) = (pTVar43->Translation).ZW.m128d_f64[0];
    *(double *)(pFVar56 + 6) = dVar114;
    dVar114 = (pTVar43->Scale3D).XY.m128d_f64[1];
    *(double *)(pFVar56 + 8) = (pTVar43->Scale3D).XY.m128d_f64[0];
    *(double *)(pFVar56 + 10) = dVar114;
    dVar114 = (pTVar43->Scale3D).ZW.m128d_f64[1];
    *(double *)(pFVar56 + 0xc) = (pTVar43->Scale3D).ZW.m128d_f64[0];
    *(double *)(pFVar56 + 0xe) = dVar114;
    if (bVar36) {
      pFVar55 = this->AnimInstanceProxy;
      local_1030 = *(double *)pFVar56;
      dStack_1028 = *(double *)(pFVar56 + 2);
      local_1020 = *(double *)(pFVar56 + 4);
      dVar143 = local_1020 * (pFVar55->ComponentTransform).Scale3D.ZW.m128d_f64[0];
      dVar142 = (pFVar55->ComponentTransform).Scale3D.ZW.m128d_f64[1] * 0.0;
      local_1350._8_8_ = (pFVar55->ComponentTransform).Rotation.XY.m128d_f64[0];
      dStack_1340 = (pFVar55->ComponentTransform).Rotation.XY.m128d_f64[1];
      auVar147 = *(undefined1 (*) [16])(pFVar55->ComponentTransform).Rotation.ZW.m128d_f64;
      auVar66 = *(undefined1 (*) [16])(pFVar55->ComponentTransform).Rotation.XY.m128d_f64;
      dVar22 = (pFVar55->ComponentTransform).Rotation.ZW.m128d_f64[1];
      dVar114 = auVar147._0_8_;
      dVar14 = (pFVar55->ComponentTransform).Scale3D.XY.m128d_f64[0] * local_1030;
      dVar64 = (pFVar55->ComponentTransform).Scale3D.XY.m128d_f64[1] * dStack_1028;
      uVar162 = (undefined4)((ulonglong)dVar64 >> 0x20);
      auVar164._8_4_ = SUB84(dVar64,0);
      auVar164._0_8_ = dVar14;
      auVar164._12_4_ = uVar162;
      auVar115 = blendpd(auVar66,auVar147,2);
      auVar165._0_8_ = auVar164._8_8_ * auVar66._0_8_ - auVar66._8_8_ * dVar14;
      auVar165._8_8_ = dVar143 * auVar66._8_8_ - dVar114 * dVar64;
      auVar65._8_4_ = SUB84(dVar64,0);
      auVar65._0_8_ = dVar14;
      auVar65._12_4_ = uVar162;
      auVar15._8_4_ = SUB84(dVar142,0);
      auVar15._0_8_ = dVar143;
      auVar15._12_4_ = (int)((ulonglong)dVar142 >> 0x20);
      auVar66 = blendpd(auVar65,auVar15,2);
      auVar67._0_8_ = auVar66._0_8_ * dVar114 - auVar115._0_8_ * dVar143;
      auVar67._8_8_ = auVar66._8_8_ * auVar147._8_8_ - auVar115._8_8_ * dVar142;
      auVar66 = *(undefined1 (*) [16])(pFVar55->ComponentTransform).Rotation.XY.m128d_f64;
      auVar115 = blendpd(auVar165,auVar67,2);
      dVar142 = auVar165._8_8_ + auVar165._8_8_;
      dVar111 = auVar67._0_8_ + auVar67._0_8_;
      uVar162 = (undefined4)((ulonglong)dVar111 >> 0x20);
      auVar166._0_8_ = auVar115._0_8_ + auVar115._0_8_;
      auVar166._8_8_ = auVar115._8_8_ + auVar115._8_8_;
      auVar145._8_4_ = SUB84(dVar111,0);
      auVar145._0_8_ = dVar142;
      auVar145._12_4_ = uVar162;
      auVar122._8_4_ = SUB84(dVar111,0);
      auVar122._0_8_ = dVar142;
      auVar122._12_4_ = uVar162;
      auVar123 = blendpd(auVar122,auVar166,2);
      auVar115 = blendpd(auVar66,auVar147,2);
      auVar146._0_8_ = auVar145._8_8_ * auVar66._0_8_ - auVar66._8_8_ * dVar142;
      auVar146._8_8_ = auVar166._0_8_ * auVar66._8_8_ - dVar114 * dVar111;
      auVar68._8_4_ = SUB84(auVar146._8_8_,0);
      auVar68._0_8_ = auVar146._0_8_;
      auVar68._12_4_ = (int)((ulonglong)auVar146._8_8_ >> 0x20);
      auVar124._0_8_ = auVar123._0_8_ * dVar114 - auVar115._0_8_ * auVar166._0_8_;
      auVar124._8_8_ = auVar123._8_8_ * auVar147._8_8_ - auVar115._8_8_ * auVar166._8_8_;
      auVar147 = blendpd(auVar146,auVar124,2);
      dVar114 = dVar111 * dVar22 + dVar64 + auVar124._0_8_ +
                (pFVar55->ComponentTransform).Translation.XY.m128d_f64[1];
      local_1178._s_0.Z =
           auVar166._0_8_ * dVar22 + dVar143 + auVar147._0_8_ +
           (pFVar55->ComponentTransform).Translation.ZW.m128d_f64[0];
      local_1178._8_4_ = SUB84(dVar114,0);
      local_1178._0_8_ =
           dVar142 * dVar22 + dVar14 + auVar68._8_8_ +
           (pFVar55->ComponentTransform).Translation.XY.m128d_f64[0];
      local_1178._12_4_ = (int)((ulonglong)dVar114 >> 0x20);
      FAnimInstanceProxy::AnimDrawDebugSphere
                (pFVar55,(TVector<double> *)&local_1178._s_0,fVar141,0x10,&FColor::Red,false,fVar199
                 ,0.0,SDPG_World);
    }
    pFVar59 = pFVar59 + 0x1c;
    pFVar56 = pFVar56 + 0x1c;
  }
  if (local_1468 != false) {
    auVar147._0_8_ =
         local_13b0._s_0.X * local_13b0._s_0.X + local_13b0._s_0.Y * local_13b0._s_0.Y +
         local_13b0._s_0.Z * local_13b0._s_0.Z;
    auVar147._8_8_ = 0;
    auVar147 = sqrtpd(auVar147,auVar147);
    fVar121 = (float)(auVar147._0_8_ * (__real_3ff0000000000000 / (double)this->CachedDeltaTime));
    if (this->MinRootMotionSpeedThreshold <= fVar121 && fVar121 != this->MinRootMotionSpeedThreshold
       ) {
      this->ActualStrideScale = this->LocomotionSpeed / fVar121;
    }
    else {
      this->ActualStrideScale = 1.0;
    }
  }
  fVar121 = FInputClampState::ApplyTo
                      (&this->StrideScaleModifierState,&this->StrideScaleModifier,
                       this->ActualStrideScale,this->CachedDeltaTime);
  this->ActualStrideScale = fVar121;
  if (local_1468 != false) {
    local_1018 = (double)fVar121;
    local_af8[0] = local_1018 * local_af8[0];
    local_af8[1] = local_af8[1] * 0.0;
    dVar114 = local_b08[1] * local_1018;
    local_b08[1]._0_4_ = SUB84(dVar114,0);
    local_b08[0] = local_b08[0] * local_1018;
    local_b08[1]._4_4_ = (int)((ulonglong)dVar114 >> 0x20);
    dStack_1010 = local_1018;
    local_1008 = local_1018;
    cVar37 = (**(code **)((longlong)*local_1458 + 0x18))
                       (local_1458,local_b28,local_13e8.Data + 0x88);
    if (cVar37 == '\0') {
      local_1465[0] = cVar37;
      `FAnimNode_StrideWarping::EvaluateSkeletalControl_AnyThread'::__l46::<lambda_2>::operator()
                (local_1465);
    }
  }
  dVar114 = __real_3ee4f8b580000000;
  uVar200 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar53 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  iVar40 = (this->FootData).ArrayNum;
  uVar54 = (ulonglong)iVar40;
  pFVar60 = (this->FootData).AllocatorInstance.Data;
  local_1458 = (IAnimRootMotionProvider *)CONCAT44(local_1458._4_4_,iVar40);
  pFVar58 = pFVar60 + 0x30;
  pFVar63 = pFVar60 + uVar54 * 0x70;
  while( true ) {
    if ((this->FootData).ArrayNum != (int)uVar54) {
      local_1465[1] = 0;
      `TCheckedPointerIterator<FAnimNode_StrideWarping::FStrideWarpingFootData,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_1465 + 1);
    }
    if (pFVar60 == pFVar63) break;
    local_1398._s_0.X = (double)*(undefined8 *)pFVar58;
    local_1398._s_0.Y = (double)*(undefined8 *)(pFVar58 + 8);
    local_1398._s_0.Z = (double)*(undefined8 *)(pFVar58 + 0x10);
    pTVar43 = FCSPose<FCompactPose>::GetComponentSpaceTransform
                        (this_00,*(FCompactPoseBoneIndex *)(pFVar58 + -0x28));
    local_1290._s_0.Z = (pTVar43->Translation).ZW.m128d_f64[0];
    local_1290._s_0.X = (pTVar43->Translation).XY.m128d_f64[0];
    local_1290._s_0.Y = (pTVar43->Translation).XY.m128d_f64[1];
    dVar142 = local_1248._s_0.X * local_1410._s_0.X + local_1248._s_0.Y * local_1410._s_0.Y +
              local_1248._s_0.Z * local_1410._s_0.Z;
    if ((double)CONCAT44((uint)((ulonglong)dVar142 >> 0x20) & uVar200,SUB84(dVar142,0) & uVar53) <=
        dVar114) {
      pTVar44 = &local_1160;
      local_1160._s_0.X = local_1398._s_0.X;
      local_1160._s_0.Y = local_1398._s_0.Y;
      local_1160._s_0.Z = local_1398._s_0.Z;
    }
    else {
      local_12a8._s_0.X = local_1290._s_0.X + local_1248._s_0.X;
      local_12a8._s_0.Y = local_1290._s_0.Y + local_1248._s_0.Y;
      local_12a8._s_0.Z = local_1290._s_0.Z + local_1248._s_0.Z;
      pTVar44 = &FMath::LinePlaneIntersection<double>
                           (&local_cd0,(TVector<double> *)&local_1290._s_0,
                            (TVector<double> *)&local_12a8._s_0,(TVector<double> *)&local_1398._s_0,
                            (TVector<double> *)&local_1410._s_0)->field0_0x0;
    }
    local_1338 = (pTVar44->_s_0).Z;
    dVar142 = (this->ActualStrideDirection).field0_0x0._s_0.X;
    dVar111 = (this->ActualStrideDirection).field0_0x0._s_0.Y;
    dVar14 = (this->ActualStrideDirection).field0_0x0._s_0.Z;
    dVar143 = (local_1398._s_0.Y - (pTVar44->_s_0).Y) * dVar111 +
              (local_1398._s_0.X - (((TVector<double>_u_0 *)&(pTVar44->_s_0).X)->_s_0).X) * dVar142
              + (local_1398._s_0.Z - local_1338) * dVar14;
    dVar64 = (double)this->ActualStrideScale;
    local_1328 = local_1398._s_0.X - dVar142 * dVar143;
    FStack_1320 = (FWeakObjectPtr)(local_1398._s_0.Y - dVar111 * dVar143);
    local_1318 = (FWeakObjectPtr)(local_1398._s_0.Z - dVar14 * dVar143);
    local_1000 = (local_1398._s_0.X - local_1328) * dVar64 + local_1328;
    dStack_ff8 = (local_1398._s_0.Y - (double)FStack_1320) * dVar64 + (double)FStack_1320;
    local_ff0 = (local_1398._s_0.Z - (double)local_1318) * dVar64 + (double)local_1318;
    *(double *)pFVar58 = local_1000;
    *(double *)(pFVar58 + 8) = dStack_ff8;
    *(double *)(pFVar58 + 0x10) = local_ff0;
    *(double *)(pFVar58 + 0x18) = 0.0;
    if (bVar36) {
      pFVar55 = this->AnimInstanceProxy;
      local_fe8 = *(double *)pFVar58;
      dStack_fe0 = *(double *)(pFVar58 + 8);
      dVar22 = local_ff0 * (pFVar55->ComponentTransform).Scale3D.ZW.m128d_f64[0];
      dVar111 = (pFVar55->ComponentTransform).Scale3D.ZW.m128d_f64[1] * 0.0;
      local_1350._8_8_ = (pFVar55->ComponentTransform).Rotation.XY.m128d_f64[0];
      dStack_1340 = (pFVar55->ComponentTransform).Rotation.XY.m128d_f64[1];
      auVar147 = *(undefined1 (*) [16])(pFVar55->ComponentTransform).Rotation.ZW.m128d_f64;
      auVar66 = *(undefined1 (*) [16])(pFVar55->ComponentTransform).Rotation.XY.m128d_f64;
      dVar23 = (pFVar55->ComponentTransform).Rotation.ZW.m128d_f64[1];
      dVar142 = auVar147._0_8_;
      dVar64 = (pFVar55->ComponentTransform).Scale3D.XY.m128d_f64[0] * local_fe8;
      dVar143 = (pFVar55->ComponentTransform).Scale3D.XY.m128d_f64[1] * dStack_fe0;
      uVar162 = (undefined4)((ulonglong)dVar143 >> 0x20);
      auVar167._8_4_ = SUB84(dVar143,0);
      auVar167._0_8_ = dVar64;
      auVar167._12_4_ = uVar162;
      auVar115 = blendpd(auVar66,auVar147,2);
      auVar168._0_8_ = auVar167._8_8_ * auVar66._0_8_ - auVar66._8_8_ * dVar64;
      auVar168._8_8_ = dVar22 * auVar66._8_8_ - dVar142 * dVar143;
      auVar69._8_4_ = SUB84(dVar143,0);
      auVar69._0_8_ = dVar64;
      auVar69._12_4_ = uVar162;
      auVar16._8_4_ = SUB84(dVar111,0);
      auVar16._0_8_ = dVar22;
      auVar16._12_4_ = (int)((ulonglong)dVar111 >> 0x20);
      auVar66 = blendpd(auVar69,auVar16,2);
      auVar70._0_8_ = auVar66._0_8_ * dVar142 - auVar115._0_8_ * dVar22;
      auVar70._8_8_ = auVar66._8_8_ * auVar147._8_8_ - auVar115._8_8_ * dVar111;
      auVar66 = *(undefined1 (*) [16])(pFVar55->ComponentTransform).Rotation.XY.m128d_f64;
      auVar115 = blendpd(auVar168,auVar70,2);
      dVar111 = auVar168._8_8_ + auVar168._8_8_;
      dVar14 = auVar70._0_8_ + auVar70._0_8_;
      uVar162 = (undefined4)((ulonglong)dVar14 >> 0x20);
      auVar169._0_8_ = auVar115._0_8_ + auVar115._0_8_;
      auVar169._8_8_ = auVar115._8_8_ + auVar115._8_8_;
      auVar148._8_4_ = SUB84(dVar14,0);
      auVar148._0_8_ = dVar111;
      auVar148._12_4_ = uVar162;
      auVar125._8_4_ = SUB84(dVar14,0);
      auVar125._0_8_ = dVar111;
      auVar125._12_4_ = uVar162;
      auVar123 = blendpd(auVar125,auVar169,2);
      auVar115 = blendpd(auVar66,auVar147,2);
      auVar149._0_8_ = auVar148._8_8_ * auVar66._0_8_ - auVar66._8_8_ * dVar111;
      auVar149._8_8_ = auVar169._0_8_ * auVar66._8_8_ - dVar142 * dVar14;
      auVar71._8_4_ = SUB84(auVar149._8_8_,0);
      auVar71._0_8_ = auVar149._0_8_;
      auVar71._12_4_ = (int)((ulonglong)auVar149._8_8_ >> 0x20);
      auVar126._0_8_ = auVar123._0_8_ * dVar142 - auVar115._0_8_ * auVar169._0_8_;
      auVar126._8_8_ = auVar123._8_8_ * auVar147._8_8_ - auVar115._8_8_ * auVar169._8_8_;
      auVar147 = blendpd(auVar149,auVar126,2);
      dVar142 = dVar14 * dVar23 + dVar143 + auVar126._0_8_ +
                (pFVar55->ComponentTransform).Translation.XY.m128d_f64[1];
      local_1148._s_0.Z =
           auVar169._0_8_ * dVar23 + dVar22 + auVar147._0_8_ +
           (pFVar55->ComponentTransform).Translation.ZW.m128d_f64[0];
      local_1148._8_4_ = SUB84(dVar142,0);
      local_1148._0_8_ =
           dVar111 * dVar23 + dVar64 + auVar71._8_8_ +
           (pFVar55->ComponentTransform).Translation.XY.m128d_f64[0];
      local_1148._12_4_ = (int)((ulonglong)dVar142 >> 0x20);
      local_fd8 = local_ff0;
      FAnimInstanceProxy::AnimDrawDebugSphere
                (pFVar55,(TVector<double> *)&local_1148._s_0,fVar141,0x10,&FColor::Green,false,
                 fVar199,0.0,SDPG_World);
      pFVar55 = this->AnimInstanceProxy;
      dVar22 = (double)local_1318 * (pFVar55->ComponentTransform).Scale3D.ZW.m128d_f64[0];
      dVar111 = (pFVar55->ComponentTransform).Scale3D.ZW.m128d_f64[1] * 0.0;
      dVar64 = (pFVar55->ComponentTransform).Scale3D.XY.m128d_f64[0] * local_1328;
      dVar143 = (pFVar55->ComponentTransform).Scale3D.XY.m128d_f64[1] * (double)FStack_1320;
      uVar162 = (undefined4)((ulonglong)dVar143 >> 0x20);
      local_1350._8_8_ = (pFVar55->ComponentTransform).Rotation.XY.m128d_f64[0];
      dStack_1340 = (pFVar55->ComponentTransform).Rotation.XY.m128d_f64[1];
      dVar23 = (pFVar55->ComponentTransform).Rotation.ZW.m128d_f64[1];
      auVar147 = *(undefined1 (*) [16])(pFVar55->ComponentTransform).Rotation.ZW.m128d_f64;
      auVar66 = *(undefined1 (*) [16])(pFVar55->ComponentTransform).Rotation.XY.m128d_f64;
      dVar142 = auVar147._0_8_;
      auVar170._8_4_ = SUB84(dVar143,0);
      auVar170._0_8_ = dVar64;
      auVar170._12_4_ = uVar162;
      auVar115 = blendpd(auVar66,auVar147,2);
      auVar171._0_8_ = auVar170._8_8_ * auVar66._0_8_ - auVar66._8_8_ * dVar64;
      auVar171._8_8_ = dVar22 * auVar66._8_8_ - dVar142 * dVar143;
      auVar72._8_4_ = SUB84(dVar143,0);
      auVar72._0_8_ = dVar64;
      auVar72._12_4_ = uVar162;
      auVar17._8_4_ = SUB84(dVar111,0);
      auVar17._0_8_ = dVar22;
      auVar17._12_4_ = (int)((ulonglong)dVar111 >> 0x20);
      auVar66 = blendpd(auVar72,auVar17,2);
      auVar73._0_8_ = auVar66._0_8_ * dVar142 - auVar115._0_8_ * dVar22;
      auVar73._8_8_ = auVar66._8_8_ * auVar147._8_8_ - auVar115._8_8_ * dVar111;
      auVar66 = *(undefined1 (*) [16])(pFVar55->ComponentTransform).Rotation.XY.m128d_f64;
      auVar115 = blendpd(auVar171,auVar73,2);
      dVar111 = auVar171._8_8_ + auVar171._8_8_;
      dVar14 = auVar73._0_8_ + auVar73._0_8_;
      uVar162 = (undefined4)((ulonglong)dVar14 >> 0x20);
      auVar172._0_8_ = auVar115._0_8_ + auVar115._0_8_;
      auVar172._8_8_ = auVar115._8_8_ + auVar115._8_8_;
      auVar150._8_4_ = SUB84(dVar14,0);
      auVar150._0_8_ = dVar111;
      auVar150._12_4_ = uVar162;
      auVar127._8_4_ = SUB84(dVar14,0);
      auVar127._0_8_ = dVar111;
      auVar127._12_4_ = uVar162;
      auVar123 = blendpd(auVar127,auVar172,2);
      auVar115 = blendpd(auVar66,auVar147,2);
      auVar151._0_8_ = auVar150._8_8_ * auVar66._0_8_ - auVar66._8_8_ * dVar111;
      auVar151._8_8_ = auVar172._0_8_ * auVar66._8_8_ - dVar142 * dVar14;
      auVar74._8_4_ = SUB84(auVar151._8_8_,0);
      auVar74._0_8_ = auVar151._0_8_;
      auVar74._12_4_ = (int)((ulonglong)auVar151._8_8_ >> 0x20);
      auVar128._0_8_ = auVar123._0_8_ * dVar142 - auVar115._0_8_ * auVar172._0_8_;
      auVar128._8_8_ = auVar123._8_8_ * auVar147._8_8_ - auVar115._8_8_ * auVar172._8_8_;
      auVar147 = blendpd(auVar151,auVar128,2);
      dVar142 = dVar14 * dVar23 + dVar143 + auVar128._0_8_ +
                (pFVar55->ComponentTransform).Translation.XY.m128d_f64[1];
      local_1130._s_0.Z =
           auVar172._0_8_ * dVar23 + dVar22 + auVar147._0_8_ +
           (pFVar55->ComponentTransform).Translation.ZW.m128d_f64[0];
      local_1130._8_4_ = SUB84(dVar142,0);
      local_1130._0_8_ =
           dVar111 * dVar23 + dVar64 + auVar74._8_8_ +
           (pFVar55->ComponentTransform).Translation.XY.m128d_f64[0];
      local_1130._12_4_ = (int)((ulonglong)dVar142 >> 0x20);
      FAnimInstanceProxy::AnimDrawDebugSphere
                (pFVar55,(TVector<double> *)&local_1130._s_0,fVar141,0x10,&FColor::Yellow,false,
                 fVar199,0.0,SDPG_World);
    }
    uVar54 = (ulonglong)local_1458 & 0xffffffff;
    pFVar60 = pFVar60 + 0x70;
    pFVar58 = pFVar58 + 0x70;
  }
  auStack_1378._16_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  pFStack_1360 = (FSkelMeshRefPoseOverride *)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y
  ;
  local_1358.ReferenceController =
       (TReferenceControllerBase<1> *)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  FBoneReference::GetCompactPoseIndex(&this->PelvisBone,(FBoneContainer *)&local_1448);
  pTVar43 = FCSPose<FCompactPose>::GetComponentSpaceTransform(this_00,local_1448);
  uVar53 = (this->FootData).ArrayNum;
  dVar111 = (pTVar43->Translation).XY.m128d_f64[0];
  dVar14 = (pTVar43->Translation).XY.m128d_f64[1];
  dVar114 = (pTVar43->Translation).ZW.m128d_f64[0];
  dVar142 = (pTVar43->Translation).ZW.m128d_f64[1];
  dVar64 = (pTVar43->Rotation).XY.m128d_f64[0];
  dVar143 = (pTVar43->Rotation).XY.m128d_f64[1];
  dVar22 = (pTVar43->Rotation).ZW.m128d_f64[0];
  dVar23 = (pTVar43->Rotation).ZW.m128d_f64[1];
  dVar31 = (pTVar43->Scale3D).XY.m128d_f64[0];
  dVar13 = (pTVar43->Scale3D).XY.m128d_f64[1];
  dVar113 = (pTVar43->Scale3D).ZW.m128d_f64[0];
  dVar144 = (pTVar43->Scale3D).ZW.m128d_f64[1];
  local_cb8.SecondaryData = (ForElementType<float>)0x0;
  local_c88 = 0;
  local_c84[0] = 10;
  local_1440._s_0.X = dVar111;
  local_1440._s_0.Y = dVar14;
  local_1440._s_0.Z = dVar114;
  if ((int)uVar53 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar53);
  }
  if (10 < (int)uVar53) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>::ForElementType<float>_>
              (4,4,uVar53,&local_cb8,0,local_c84);
  }
  uVar53 = (this->FootData).ArrayNum;
  local_a68.SecondaryData = (ForElementType<UE::Math::TVector<double>_>)0x0;
  local_970 = 0;
  local_96c = 10;
  if ((int)uVar53 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar53);
  }
  if (10 < (int)uVar53) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TVector<double>_>_>
              (0x18,8,uVar53,&local_a68,0,&local_96c);
  }
  pFVar60 = (this->FootData).AllocatorInstance.Data;
  iVar40 = (this->FootData).ArrayNum;
  pFVar58 = pFVar60 + 0x30;
  pFVar63 = pFVar60 + (longlong)iVar40 * 0x70;
  while( true ) {
    if ((this->FootData).ArrayNum != iVar40) {
      local_1465[2] = 0;
      `TCheckedPointerIterator<FAnimNode_StrideWarping::FStrideWarpingFootData,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_1465 + 2);
    }
    iVar35 = local_970;
    pTVar34 = local_1450;
    if (pFVar60 == pFVar63) break;
    pTVar43 = FCSPose<FCompactPose>::GetComponentSpaceTransform
                        (this_00,*(FCompactPoseBoneIndex *)(pFVar58 + -0x2c));
    local_fd0 = (pTVar43->Translation).XY.m128d_f64[0];
    dStack_fc8 = (pTVar43->Translation).XY.m128d_f64[1];
    local_fc0 = (pTVar43->Translation).ZW.m128d_f64[0];
    FVar45 = (ForElementType<float>)&local_cb8;
    if (local_cb8.SecondaryData != (ForElementType<float>)0x0) {
      FVar45 = local_cb8.SecondaryData;
    }
    auVar75._0_8_ = (local_1440._s_0.Z - local_fc0) * (local_1440._s_0.Z - local_fc0);
    auVar75._8_8_ = 0;
    auVar129._0_8_ =
         (local_1440._s_0.Y - dStack_fc8) * (local_1440._s_0.Y - dStack_fc8) +
         (local_1440._s_0.X - local_fd0) * (local_1440._s_0.X - local_fd0) + auVar75._0_8_;
    auVar129._8_8_ = 0;
    auVar147 = sqrtpd(auVar75,auVar129);
    local_145c = (float)auVar147._0_8_;
    if ((ulonglong)FVar45 <= &local_145c) {
      FVar45 = (ForElementType<float>)&local_cb8;
      if (local_cb8.SecondaryData != (ForElementType<float>)0x0) {
        FVar45 = local_cb8.SecondaryData;
      }
      if ((&local_145c < (float *)((longlong)FVar45 + (longlong)local_c84[0] * 4)) &&
         (bVar38 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar38)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if (local_c88 == local_c84[0]) {
      local_c88 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>::ForElementType<float>_>
                            (0x404,&local_cb8,local_c84);
    }
    lVar46 = (longlong)local_c88;
    FVar45 = (ForElementType<float>)&local_cb8;
    if (local_cb8.SecondaryData != (ForElementType<float>)0x0) {
      FVar45 = local_cb8.SecondaryData;
    }
    local_c88 = local_c88 + 1;
    *(float *)((longlong)FVar45 + lVar46 * 4) = local_145c;
    local_1380 = *(undefined8 *)pFVar58;
    auStack_1378._0_8_ = *(undefined8 *)(pFVar58 + 8);
    auStack_1378._8_8_ = *(undefined8 *)(pFVar58 + 0x10);
    FVar47 = (ForElementType<UE::Math::TVector<double>_>)&local_a68;
    if (local_a68.SecondaryData != (ForElementType<UE::Math::TVector<double>_>)0x0) {
      FVar47 = local_a68.SecondaryData;
    }
    if ((ulonglong)FVar47 <= &local_1380) {
      FVar47 = (ForElementType<UE::Math::TVector<double>_>)&local_a68;
      if (local_a68.SecondaryData != (ForElementType<UE::Math::TVector<double>_>)0x0) {
        FVar47 = local_a68.SecondaryData;
      }
      if ((&local_1380 < (undefined8 *)((longlong)FVar47 + (longlong)local_96c * 0x18)) &&
         (bVar38 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar38)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if (local_970 == local_96c) {
      local_970 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TVector<double>_>_>
                            (0x818,&local_a68,&local_96c);
    }
    FVar47 = (ForElementType<UE::Math::TVector<double>_>)&local_a68;
    if (local_a68.SecondaryData != (ForElementType<UE::Math::TVector<double>_>)0x0) {
      FVar47 = local_a68.SecondaryData;
    }
    lVar46 = (longlong)local_970;
    pFVar60 = pFVar60 + 0x70;
    pFVar58 = pFVar58 + 0x70;
    puVar1 = (undefined8 *)((longlong)FVar47 + lVar46 * 0x18);
    local_970 = local_970 + 1;
    *puVar1 = local_1380;
    puVar1[1] = auStack_1378._0_8_;
    *(undefined8 *)((uchar *)((longlong)FVar47 + 0x10) + lVar46 * 0x18) = auStack_1378._8_8_;
  }
  fVar121 = this->CachedDeltaTime;
  local_12e8 = (ForElementType<UE::Math::TVector<double>_>)&local_a68;
  if (local_a68.SecondaryData != (ForElementType<UE::Math::TVector<double>_>)0x0) {
    local_12e8 = local_a68.SecondaryData;
  }
  if ((local_970 < 0) &&
     (bVar38 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar38)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar40 = local_c88;
  iStack_12e0 = iVar35;
  local_12d8 = (ForElementType<float>)&local_cb8;
  if (local_cb8.SecondaryData != (ForElementType<float>)0x0) {
    local_12d8 = local_cb8.SecondaryData;
  }
  if ((local_c88 < 0) &&
     (bVar38 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar38)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_11e8._12_4_ = uStack_12dc;
  local_11e8.ArrayNum = iStack_12e0;
  iStack_12d0 = iVar40;
  local_11d8._12_4_ = uStack_12cc;
  local_11d8.ArrayNum = iVar40;
  this_01 = &this->PelvisIKFootSolver;
  local_11d8.DataPtr = (float *)local_12d8;
  local_11e8.DataPtr = (TVector<double> *)local_12e8;
  local_e38.Rotation.XY.m128d_f64[0] = dVar64;
  local_e38.Rotation.XY.m128d_f64[1] = dVar143;
  local_e38.Rotation.ZW.m128d_f64[0] = dVar22;
  local_e38.Rotation.ZW.m128d_f64[1] = dVar23;
  local_e38.Translation.XY.m128d_f64[0] = dVar111;
  local_e38.Translation.XY.m128d_f64[1] = dVar14;
  local_e38.Translation.ZW.m128d_f64[0] = dVar114;
  local_e38.Translation.ZW.m128d_f64[1] = dVar142;
  local_e38.Scale3D.XY.m128d_f64[0] = dVar31;
  local_e38.Scale3D.XY.m128d_f64[1] = dVar13;
  local_e38.Scale3D.ZW.m128d_f64[0] = dVar113;
  local_e38.Scale3D.ZW.m128d_f64[1] = dVar144;
  pTVar43 = FIKFootPelvisPullDownSolver::Solve
                      (this_01,&local_968,&local_e38,&local_11d8,&local_11e8,fVar121);
  uVar162 = SUB84(this_01,0);
  uVar53 = *(uint *)(pTVar43->Rotation).XY.m128d_f64;
  uVar200 = *(uint *)((longlong)(pTVar43->Rotation).XY.m128d_f64 + 4);
  uVar201 = *(uint *)((pTVar43->Rotation).XY.m128d_f64 + 1);
  uVar202 = *(uint *)((longlong)(pTVar43->Rotation).XY.m128d_f64 + 0xc);
  uVar203 = *(uint *)(pTVar43->Rotation).ZW.m128d_f64;
  uVar27 = *(uint *)((longlong)(pTVar43->Rotation).ZW.m128d_f64 + 4);
  uVar28 = *(uint *)((pTVar43->Rotation).ZW.m128d_f64 + 1);
  uVar29 = *(uint *)((longlong)(pTVar43->Rotation).ZW.m128d_f64 + 0xc);
  auVar147 = *(undefined1 (*) [16])(pTVar43->Translation).XY.m128d_f64;
  auVar66 = *(undefined1 (*) [16])(pTVar43->Translation).ZW.m128d_f64;
  auVar115 = *(undefined1 (*) [16])(pTVar43->Scale3D).XY.m128d_f64;
  uVar30 = *(uint *)(pTVar43->Scale3D).ZW.m128d_f64;
  uVar52 = *(uint *)((longlong)(pTVar43->Scale3D).ZW.m128d_f64 + 4);
  uVar189 = *(uint *)((pTVar43->Scale3D).ZW.m128d_f64 + 1);
  uVar190 = *(uint *)((longlong)(pTVar43->Scale3D).ZW.m128d_f64 + 0xc);
  dVar114 = auVar66._0_8_;
  if (bVar36) {
    pFVar55 = this->AnimInstanceProxy;
    pTVar48 = UE::Math::TTransform<double>::TransformPosition
                        (&pFVar55->ComponentTransform,&local_d78,(TVector<double> *)&local_1440._s_0
                        );
    FAnimInstanceProxy::AnimDrawDebugSphere
              (pFVar55,pTVar48,fVar141,0x10,&FColor::Red,false,fVar199,0.0,SDPG_World);
    pFVar55 = this->AnimInstanceProxy;
    local_1118._0_16_ = auVar147;
    local_1118._s_0.Z = dVar114;
    pTVar48 = UE::Math::TTransform<double>::TransformPosition
                        (&pFVar55->ComponentTransform,&local_d60,(TVector<double> *)&local_1118._s_0
                        );
    FAnimInstanceProxy::AnimDrawDebugSphere
              (pFVar55,pTVar48,fVar141,0x10,&FColor::Blue,false,fVar199,0.0,SDPG_World);
    pFVar55 = this->AnimInstanceProxy;
    dVar142 = (double)this->ActualStrideScale;
    local_1278._s_0.Z =
         dVar142 * (this->ActualStrideDirection).field0_0x0._s_0.Z * __real_4059000000000000 +
         local_1440._s_0.Z;
    local_1278._s_0.Y =
         dVar142 * (this->ActualStrideDirection).field0_0x0._s_0.Y * __real_4059000000000000 +
         local_1440._s_0.Y;
    local_1278._s_0.X =
         dVar142 * (this->ActualStrideDirection).field0_0x0._s_0.X * __real_4059000000000000 +
         local_1440._s_0.X;
    pTVar48 = UE::Math::TTransform<double>::TransformPosition
                        (&pFVar55->ComponentTransform,&local_d48,(TVector<double> *)&local_1278._s_0
                        );
    pTVar42 = UE::Math::TTransform<double>::TransformPosition
                        (&this->AnimInstanceProxy->ComponentTransform,&local_d30,
                         (TVector<double> *)&local_1440._s_0);
    FAnimInstanceProxy::AnimDrawDebugDirectionalArrow
              (pFVar55,pTVar42,pTVar48,__real_42200000,&FColor::Red,false,0.0,__real_40000000,
               SDPG_World);
    local_908.Base = local_8e8;
    local_908.CurPos = local_8e8;
    local_908.End = (wchar_t *)local_e8;
    local_908.bIsDynamic = false;
    local_908.bIsExternal = false;
    TStringBuilderBase<wchar_t>::AppendfImpl(&local_908,L"\n - Stride Scale: (%.3fd)");
    UE::Math::TVector<double>::ToCompactString(&this->ActualStrideDirection,&local_11c8);
    TStringBuilderBase<wchar_t>::AppendfImpl(&local_908,L"\n - Stride Direction: (%s)");
    if (local_11c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_11c8.Data.AllocatorInstance.Data);
    }
    if (this->Mode == Graph) {
      TStringBuilderBase<wchar_t>::AppendfImpl(&local_908,L"\n - Locomotion Speed: (%.3fd)");
      TStringBuilderBase<wchar_t>::AppendfImpl
                (&local_908,L"\n - Min Root Motion Speed Threshold: (%.3fd)");
    }
    pFVar55 = this->AnimInstanceProxy;
    local_1260._s_0.X =
         UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X *
         (double)__xmm_40490000000000004049000000000000;
    local_1260._s_0.Y =
         UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y *
         __xmm_40490000000000004049000000000000._8_8_;
    local_1260._s_0.Z =
         UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z *
         (double)__xmm_40490000000000004049000000000000;
    if (local_908.End < local_908.CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(&local_908,1);
    }
    *local_908.CurPos = L'\0';
    ::FString::FString(&local_12c8,local_908.Base);
    FAnimInstanceProxy::AnimDrawDebugInWorldMessage
              (pFVar55,&local_12c8,(TVector<double> *)&local_1260._s_0,&FColor::Yellow,
               __real_3f800000);
    if (local_12c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_12c8.Data.AllocatorInstance.Data);
    }
    this_02 = &local_908;
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(this_02);
    uVar162 = SUB84(this_02,0);
    pTVar43 = extraout_RAX;
  }
  uVar195 = (uint)__xmm_7ff00000000000007ff0000000000000;
  uVar196 = __xmm_7ff00000000000007ff0000000000000._4_4_;
  dVar142 = (double)__xmm_7ff00000000000007ff0000000000000;
  uVar197 = __xmm_7ff00000000000007ff0000000000000._8_4_;
  uVar198 = __xmm_7ff00000000000007ff0000000000000._12_4_;
  dVar111 = __xmm_7ff00000000000007ff0000000000000._8_8_;
  auVar116._0_8_ = (double)CONCAT44(uVar196 & uVar27,uVar195 & uVar203);
  auVar116._8_4_ = uVar197 & uVar28;
  auVar116._12_4_ = uVar198 & uVar29;
  auVar137._8_8_ = -(ulonglong)(auVar116._8_8_ == dVar111);
  auVar137._0_8_ = -(ulonglong)(auVar116._0_8_ == dVar142);
  uVar51 = movmskpd(uVar162,auVar137);
  lVar46 = -(ulonglong)((double)CONCAT44(uVar198 & uVar202,uVar197 & uVar201) == dVar111);
  auVar123._8_4_ = (int)lVar46;
  auVar123._0_8_ = -(ulonglong)((double)CONCAT44(uVar196 & uVar200,uVar195 & uVar53) == dVar142);
  auVar123._12_4_ = (int)((ulonglong)lVar46 >> 0x20);
  iVar40 = movmskpd((int)pTVar43,auVar123);
  if ((uVar51 & 0x3fffffff) == 0 && iVar40 == 0) {
    auVar76._0_8_ = (double)CONCAT44(uVar196 & auVar66._4_4_,uVar195 & auVar66._0_4_);
    auVar76._8_4_ = uVar197 & auVar66._8_4_;
    auVar76._12_4_ = uVar198 & auVar66._12_4_;
    auVar77._8_8_ = -(ulonglong)(auVar76._8_8_ == dVar111);
    auVar77._0_8_ = -(ulonglong)(auVar76._0_8_ == dVar142);
    uVar51 = movmskpd(0,auVar77);
    lVar46 = -(ulonglong)
              ((double)CONCAT44(uVar198 & auVar147._12_4_,uVar197 & auVar147._8_4_) == dVar111);
    auVar4._8_4_ = (int)lVar46;
    auVar4._0_8_ = -(ulonglong)
                    ((double)CONCAT44(uVar196 & auVar147._4_4_,uVar195 & auVar147._0_4_) == dVar142)
    ;
    auVar4._12_4_ = (int)((ulonglong)lVar46 >> 0x20);
    iVar40 = movmskpd(iVar40,auVar4);
    if ((uVar51 & 0x3fffffff) != 0 || iVar40 != 0) goto LAB_14a70baa4;
    auVar78._0_8_ = (double)CONCAT44(uVar196 & uVar52,uVar195 & uVar30);
    auVar78._8_4_ = uVar197 & uVar189;
    auVar78._12_4_ = uVar198 & uVar190;
    auVar79._8_8_ = -(ulonglong)(auVar78._8_8_ == dVar111);
    auVar79._0_8_ = -(ulonglong)(auVar78._0_8_ == dVar142);
    uVar51 = movmskpd(0,auVar79);
    lVar46 = -(ulonglong)
              ((double)CONCAT44(uVar198 & auVar115._12_4_,uVar197 & auVar115._8_4_) == dVar111);
    auVar5._8_4_ = (int)lVar46;
    auVar5._0_8_ = -(ulonglong)
                    ((double)CONCAT44(uVar196 & auVar115._4_4_,uVar195 & auVar115._0_4_) == dVar142)
    ;
    auVar5._12_4_ = (int)((ulonglong)lVar46 >> 0x20);
    iVar40 = movmskpd(iVar40,auVar5);
    if ((uVar51 & 0x3fffffff) != 0 || iVar40 != 0) goto LAB_14a70baa4;
  }
  else {
LAB_14a70baa4:
    bVar38 = ::FDebug::CheckVerifyFailedImpl2
                       ("!PelvisTransform.ContainsNaN()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\AnimationWarping\\Source\\Runtime\\Private\\BoneControllers\\AnimNode_StrideWarping.cpp"
                        ,0x12e,L"");
    if (bVar38) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar56 = (FCompactPoseBoneIndex *)(pTVar34->AllocatorInstance).Data;
  local_c78 = local_1448;
  local_c68 = uVar53;
  uStack_c64 = uVar200;
  uStack_c60 = uVar201;
  uStack_c5c = uVar202;
  local_c58 = uVar203;
  uStack_c54 = uVar27;
  uStack_c50 = uVar28;
  uStack_c4c = uVar29;
  local_c48 = auVar147;
  local_c38 = auVar66;
  local_c28 = auVar115;
  local_c18 = uVar30;
  uStack_c14 = uVar52;
  uStack_c10 = uVar189;
  uStack_c0c = uVar190;
  if (((pFVar56 <= &local_c78) && (&local_c78 < pFVar56 + (longlong)pTVar34->ArrayMax * 0x1c)) &&
     (bVar38 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar38)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar40 = pTVar34->ArrayNum;
  if (iVar40 == pTVar34->ArrayMax) {
    iVar40 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x1070,&pTVar34->AllocatorInstance,&pTVar34->ArrayMax);
  }
  auVar123 = local_c28;
  auVar115 = local_c38;
  auVar66 = local_c48;
  pTVar34->ArrayNum = iVar40 + 1;
  lVar46 = (longlong)iVar40;
  local_1358.ReferenceController = (TReferenceControllerBase<1> *)(dVar114 - local_1440._s_0.Z);
  pTVar50 = (TArray<FBoneTransform,TSizedDefaultAllocator<32>_> *)(pTVar34->AllocatorInstance).Data;
  pTVar57 = pTVar50 + lVar46 * 7;
  (pTVar57->AllocatorInstance).Data = (FScriptContainerElement *)CONCAT44(uStack_c74,local_c78);
  pTVar57->ArrayNum = (undefined4)uStack_c70;
  pTVar57->ArrayMax = uStack_c70._4_4_;
  pTVar57 = pTVar50 + lVar46 * 7 + 1;
  (pTVar57->AllocatorInstance).Data = (FScriptContainerElement *)CONCAT44(uStack_c64,local_c68);
  pTVar57->ArrayNum = uStack_c60;
  pTVar57->ArrayMax = uStack_c5c;
  pTVar57 = pTVar50 + lVar46 * 7 + 2;
  (pTVar57->AllocatorInstance).Data = (FScriptContainerElement *)CONCAT44(uStack_c54,local_c58);
  pTVar57->ArrayNum = uStack_c50;
  pTVar57->ArrayMax = uStack_c4c;
  pTVar57 = pTVar50 + lVar46 * 7 + 3;
  (pTVar57->AllocatorInstance).Data = (FScriptContainerElement *)local_c48._0_8_;
  pTVar57->ArrayNum = local_c48._8_4_;
  pTVar57->ArrayMax = local_c48._12_4_;
  pTVar57 = pTVar50 + lVar46 * 7 + 4;
  (pTVar57->AllocatorInstance).Data = (FScriptContainerElement *)local_c38._0_8_;
  pTVar57->ArrayNum = local_c38._8_4_;
  pTVar57->ArrayMax = local_c38._12_4_;
  pTVar57 = pTVar50 + lVar46 * 7 + 5;
  (pTVar57->AllocatorInstance).Data = (FScriptContainerElement *)local_c28._0_8_;
  pTVar57->ArrayNum = local_c28._8_4_;
  pTVar57->ArrayMax = local_c28._12_4_;
  pTVar57 = pTVar50 + lVar46 * 7 + 6;
  (pTVar57->AllocatorInstance).Data = (FScriptContainerElement *)CONCAT44(uStack_c14,local_c18);
  pTVar57->ArrayNum = uStack_c10;
  pTVar57->ArrayMax = uStack_c0c;
  auStack_1378._16_8_ = auVar147._0_8_ - local_1440._s_0.X;
  pFStack_1360 = (FSkelMeshRefPoseOverride *)(auVar147._8_8_ - local_1440._s_0.Y);
  local_fb8 = auVar147;
  local_fa8 = dVar114;
  local_c48 = auVar66;
  local_c38 = auVar115;
  local_c28 = auVar123;
  if (this->bCompensateIKUsingFKThighRotation != false) {
    iVar40 = (this->FootData).ArrayNum;
    uVar54 = (ulonglong)iVar40;
    pTVar62 = (TArray<FBoneTransform,TSizedDefaultAllocator<32>_> *)
              (this->FootData).AllocatorInstance.Data;
    local_1458 = (IAnimRootMotionProvider *)CONCAT44(local_1458._4_4_,iVar40);
    pTVar57 = pTVar62 + 3;
    local_1450 = pTVar62 + uVar54 * 7;
    while( true ) {
      if ((this->FootData).ArrayNum != (int)uVar54) {
        local_1465[3] = 0;
        `TCheckedPointerIterator<FAnimNode_StrideWarping::FStrideWarpingFootData,int,0>::operator!='
        ::__l2::<lambda_1>::operator()(local_1465 + 3);
      }
      pTVar50 = local_1450;
      fVar199 = __real_bf800000;
      fVar141 = __real_41000000;
      if (pTVar62 == local_1450) break;
      pTVar43 = FCSPose<FCompactPose>::GetComponentSpaceTransform
                          (this_00,(FCompactPoseBoneIndex)pTVar57[-3].ArrayNum);
      local_12b8 = (pTVar43->Rotation).ZW.m128d_f64[0];
      FStack_12b0.Data = (FScriptContainerElement *)(pTVar43->Rotation).ZW.m128d_f64[1];
      uVar162 = *(undefined4 *)(pTVar43->Rotation).XY.m128d_f64;
      uVar192 = *(undefined4 *)((longlong)(pTVar43->Rotation).XY.m128d_f64 + 4);
      uVar193 = *(undefined4 *)((pTVar43->Rotation).XY.m128d_f64 + 1);
      uVar194 = *(undefined4 *)((longlong)(pTVar43->Rotation).XY.m128d_f64 + 0xc);
      auVar147 = *(undefined1 (*) [16])(pTVar43->Translation).XY.m128d_f64;
      dVar31 = (pTVar43->Translation).ZW.m128d_f64[0];
      dVar13 = (pTVar43->Translation).ZW.m128d_f64[1];
      local_13d8.Data = (FScriptContainerElement *)(pTVar43->Scale3D).XY.m128d_f64[0];
      dStack_13d0 = (pTVar43->Scale3D).XY.m128d_f64[1];
      local_13e8.Data = (FScriptContainerElement *)(pTVar43->Scale3D).ZW.m128d_f64[0];
      uStack_13e0 = (pTVar43->Scale3D).ZW.m128d_f64[1];
      local_11b8 = uVar162;
      uStack_11b4 = uVar192;
      uStack_11b0 = uVar193;
      uStack_11ac = uVar194;
      pTVar43 = FCSPose<FCompactPose>::GetComponentSpaceTransform
                          (this_00,*(FCompactPoseBoneIndex *)
                                    ((longlong)&pTVar57[-3].AllocatorInstance.Data + 4));
      auVar66 = *(undefined1 (*) [16])(pTVar43->Translation).XY.m128d_f64;
      local_1350._8_8_ = (pTVar43->Translation).ZW.m128d_f64[0];
      dStack_1340 = (pTVar43->Translation).ZW.m128d_f64[1];
      local_dd8 = (pTVar43->Rotation).XY.m128d_f64[0];
      dStack_dd0 = (pTVar43->Rotation).XY.m128d_f64[1];
      dVar144 = auVar66._0_8_;
      dVar14 = auVar147._0_8_;
      local_13c8._s_0.X = dVar144 - dVar14;
      local_dc8 = (pTVar43->Rotation).ZW.m128d_f64[0];
      dStack_dc0 = (pTVar43->Rotation).ZW.m128d_f64[1];
      local_13c8._s_0.Z = (double)local_1350._8_8_ - dVar31;
      local_d98 = (pTVar43->Scale3D).XY.m128d_f64[0];
      dStack_d90 = (pTVar43->Scale3D).XY.m128d_f64[1];
      local_d88 = (pTVar43->Scale3D).ZW.m128d_f64[0];
      dStack_d80 = (pTVar43->Scale3D).ZW.m128d_f64[1];
      dVar143 = dVar14 + (double)auStack_1378._16_8_;
      uVar53 = (uint)((ulonglong)dVar143 >> 0x20);
      dVar64 = auVar147._8_8_;
      dVar22 = dVar64 + (double)pFStack_1360;
      uVar200 = SUB84(dVar22,0);
      uVar201 = (uint)((ulonglong)dVar22 >> 0x20);
      auVar24._4_8_ = pFStack_1360;
      auVar24._0_4_ = auVar147._4_4_;
      auVar115._0_8_ = auVar24._0_8_ << 0x20;
      auVar115._8_4_ = auVar147._8_4_;
      auVar115._12_4_ = auVar147._12_4_;
      dVar114 = auVar66._8_8_;
      local_13c8._s_0.Y = dVar114 - auVar115._8_8_;
      auVar80._8_4_ = auVar66._8_4_;
      auVar80._0_8_ = local_13c8._s_0.Y;
      auVar80._12_4_ = auVar66._12_4_;
      uVar112 = auVar80._8_8_;
      dVar23 = (double)local_1358.ReferenceController + dVar31;
      uVar202 = SUB84(dVar13 + 0.0,0);
      uVar203 = (uint)((ulonglong)(dVar13 + 0.0) >> 0x20);
      dVar113 = local_13c8._s_0.X * local_13c8._s_0.X + local_13c8._s_0.Y * local_13c8._s_0.Y +
                local_13c8._s_0.Z * local_13c8._s_0.Z;
      if (dVar113 != __real_3ff0000000000000) {
        if (__real_3e45798ee0000000 <= dVar113) {
          local_11f8 = __real_3ff0000000000000 / SQRT(dVar113);
          local_13c8._s_0.X = local_13c8._s_0.X * local_11f8;
          local_13c8._s_0.Y = local_11f8 * local_13c8._s_0.Y;
          uVar112 = 0.0;
          local_13c8._s_0.Z = local_11f8 * local_13c8._s_0.Z;
        }
        else {
          local_13c8._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
          local_13c8._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
          local_13c8._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
          uVar112 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        }
      }
      local_f70 = (pTVar57->AllocatorInstance).Data;
      dStack_f68 = *(double *)&pTVar57->ArrayNum;
      auVar25._4_8_ = uVar112;
      auVar25._0_4_ = uVar53;
      auVar81._0_8_ = auVar25._0_8_ << 0x20;
      auVar81._8_4_ = uVar200;
      auVar81._12_4_ = uVar201;
      local_f60 = pTVar57[1].AllocatorInstance.Data;
      local_1428._s_0.Y = dStack_f68 - auVar81._8_8_;
      local_1428._s_0.Z = (double)local_f60 - dVar23;
      local_1428._s_0.X = (double)local_f70 - dVar143;
      local_f58._8_4_ = uVar200;
      local_f58._0_8_ = dVar143;
      local_f58._12_4_ = uVar201;
      dVar113 = local_1428._s_0.X * local_1428._s_0.X + local_1428._s_0.Y * local_1428._s_0.Y +
                local_1428._s_0.Z * local_1428._s_0.Z;
      if (dVar113 != __real_3ff0000000000000) {
        if (__real_3e45798ee0000000 <= dVar113) {
          local_11f0 = __real_3ff0000000000000 / SQRT(dVar113);
          local_1428._s_0.X = local_1428._s_0.X * local_11f0;
          local_1428._s_0.Y = local_11f0 * local_1428._s_0.Y;
          local_1428._s_0.Z = local_11f0 * local_1428._s_0.Z;
        }
        else {
          local_1428._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
          local_1428._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
          local_1428._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        }
      }
      local_fa0 = auVar66;
      local_f90 = (double)local_1350._8_8_;
      local_f88 = auVar147;
      local_f78 = dVar31;
      local_f48 = dVar23;
      local_db8 = auVar147;
      local_da8 = dVar31;
      dStack_da0 = dVar13;
      if (bVar36) {
        pFVar55 = this->AnimInstanceProxy;
        dVar188 = (double)local_1350._8_8_ * (pFVar55->ComponentTransform).Scale3D.ZW.m128d_f64[0];
        dVar113 = (pFVar55->ComponentTransform).Scale3D.ZW.m128d_f64[1] * 0.0;
        auVar115 = *(undefined1 (*) [16])(pFVar55->ComponentTransform).Rotation.ZW.m128d_f64;
        auVar123 = *(undefined1 (*) [16])(pFVar55->ComponentTransform).Rotation.XY.m128d_f64;
        dVar32 = (pFVar55->ComponentTransform).Rotation.ZW.m128d_f64[1];
        dVar13 = auVar115._0_8_;
        dVar120 = (pFVar55->ComponentTransform).Scale3D.XY.m128d_f64[0] * dVar144;
        dVar163 = (pFVar55->ComponentTransform).Scale3D.XY.m128d_f64[1] * dVar114;
        uVar162 = (undefined4)((ulonglong)dVar163 >> 0x20);
        auVar173._8_4_ = SUB84(dVar163,0);
        auVar173._0_8_ = dVar120;
        auVar173._12_4_ = uVar162;
        auVar116 = blendpd(auVar123,auVar115,2);
        auVar174._0_8_ = auVar173._8_8_ * auVar123._0_8_ - auVar123._8_8_ * dVar120;
        auVar174._8_8_ = dVar188 * auVar123._8_8_ - dVar13 * dVar163;
        auVar82._8_4_ = SUB84(dVar163,0);
        auVar82._0_8_ = dVar120;
        auVar82._12_4_ = uVar162;
        auVar18._8_4_ = SUB84(dVar113,0);
        auVar18._0_8_ = dVar188;
        auVar18._12_4_ = (int)((ulonglong)dVar113 >> 0x20);
        auVar123 = blendpd(auVar82,auVar18,2);
        auVar83._0_8_ = auVar123._0_8_ * dVar13 - auVar116._0_8_ * dVar188;
        auVar83._8_8_ = auVar123._8_8_ * auVar115._8_8_ - auVar116._8_8_ * dVar113;
        auVar123 = *(undefined1 (*) [16])(pFVar55->ComponentTransform).Rotation.XY.m128d_f64;
        auVar116 = blendpd(auVar174,auVar83,2);
        auVar175._0_8_ = auVar116._0_8_ + auVar116._0_8_;
        auVar175._8_8_ = auVar116._8_8_ + auVar116._8_8_;
        dVar113 = auVar174._8_8_ + auVar174._8_8_;
        dVar12 = auVar83._0_8_ + auVar83._0_8_;
        uVar162 = (undefined4)((ulonglong)dVar12 >> 0x20);
        auVar152._8_4_ = SUB84(dVar12,0);
        auVar152._0_8_ = dVar113;
        auVar152._12_4_ = uVar162;
        auVar130._8_4_ = SUB84(dVar12,0);
        auVar130._0_8_ = dVar113;
        auVar130._12_4_ = uVar162;
        auVar116 = blendpd(auVar130,auVar175,2);
        auVar153._0_8_ = auVar152._8_8_ * auVar123._0_8_ - auVar123._8_8_ * dVar113;
        auVar153._8_8_ = auVar175._0_8_ * auVar123._8_8_ - dVar13 * dVar12;
        auVar123 = blendpd(auVar123,auVar115,2);
        auVar84._8_4_ = SUB84(auVar153._8_8_,0);
        auVar84._0_8_ = auVar153._0_8_;
        auVar84._12_4_ = (int)((ulonglong)auVar153._8_8_ >> 0x20);
        auVar131._0_8_ = auVar116._0_8_ * dVar13 - auVar123._0_8_ * auVar175._0_8_;
        auVar131._8_8_ = auVar116._8_8_ * auVar115._8_8_ - auVar123._8_8_ * auVar175._8_8_;
        dVar13 = dVar12 * dVar32 + dVar163 + auVar131._0_8_ +
                 (pFVar55->ComponentTransform).Translation.XY.m128d_f64[1];
        local_1100._8_4_ = SUB84(dVar13,0);
        local_1100._0_8_ =
             dVar113 * dVar32 + dVar120 + auVar84._8_8_ +
             (pFVar55->ComponentTransform).Translation.XY.m128d_f64[0];
        local_1100._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
        auVar115 = blendpd(auVar153,auVar131,2);
        local_1100._s_0.Z =
             auVar175._0_8_ * dVar32 + dVar188 + auVar115._0_8_ +
             (pFVar55->ComponentTransform).Translation.ZW.m128d_f64[0];
        dVar188 = dVar31 * (pFVar55->ComponentTransform).Scale3D.ZW.m128d_f64[0];
        dVar113 = (pFVar55->ComponentTransform).Scale3D.ZW.m128d_f64[1] * 0.0;
        local_1218 = (pFVar55->ComponentTransform).Rotation.XY.m128d_f64[0];
        dStack_1210 = (pFVar55->ComponentTransform).Rotation.XY.m128d_f64[1];
        auVar115 = *(undefined1 (*) [16])(pFVar55->ComponentTransform).Rotation.XY.m128d_f64;
        auVar123 = *(undefined1 (*) [16])(pFVar55->ComponentTransform).Rotation.ZW.m128d_f64;
        dVar32 = (pFVar55->ComponentTransform).Rotation.ZW.m128d_f64[1];
        dVar120 = (pFVar55->ComponentTransform).Scale3D.XY.m128d_f64[0] * dVar14;
        dVar163 = (pFVar55->ComponentTransform).Scale3D.XY.m128d_f64[1] * dVar64;
        uVar162 = (undefined4)((ulonglong)dVar163 >> 0x20);
        dVar13 = auVar123._0_8_;
        auVar176._8_4_ = SUB84(dVar163,0);
        auVar176._0_8_ = dVar120;
        auVar176._12_4_ = uVar162;
        auVar177._0_8_ = auVar176._8_8_ * auVar115._0_8_ - auVar115._8_8_ * dVar120;
        auVar177._8_8_ = dVar188 * auVar115._8_8_ - dVar13 * dVar163;
        auVar116 = blendpd(auVar115,auVar123,2);
        auVar85._8_4_ = SUB84(dVar163,0);
        auVar85._0_8_ = dVar120;
        auVar85._12_4_ = uVar162;
        auVar19._8_4_ = SUB84(dVar113,0);
        auVar19._0_8_ = dVar188;
        auVar19._12_4_ = (int)((ulonglong)dVar113 >> 0x20);
        auVar115 = blendpd(auVar85,auVar19,2);
        auVar86._0_8_ = auVar115._0_8_ * dVar13 - auVar116._0_8_ * dVar188;
        auVar86._8_8_ = auVar115._8_8_ * auVar123._8_8_ - auVar116._8_8_ * dVar113;
        auVar115 = *(undefined1 (*) [16])(pFVar55->ComponentTransform).Rotation.XY.m128d_f64;
        auVar116 = blendpd(auVar177,auVar86,2);
        dVar113 = auVar177._8_8_ + auVar177._8_8_;
        dVar12 = auVar86._0_8_ + auVar86._0_8_;
        uVar162 = (undefined4)((ulonglong)dVar12 >> 0x20);
        auVar178._0_8_ = auVar116._0_8_ + auVar116._0_8_;
        auVar178._8_8_ = auVar116._8_8_ + auVar116._8_8_;
        auVar154._8_4_ = SUB84(dVar12,0);
        auVar154._0_8_ = dVar113;
        auVar154._12_4_ = uVar162;
        auVar132._8_4_ = SUB84(dVar12,0);
        auVar132._0_8_ = dVar113;
        auVar132._12_4_ = uVar162;
        auVar116 = blendpd(auVar132,auVar178,2);
        auVar155._0_8_ = auVar154._8_8_ * auVar115._0_8_ - auVar115._8_8_ * dVar113;
        auVar155._8_8_ = auVar178._0_8_ * auVar115._8_8_ - dVar13 * dVar12;
        auVar115 = blendpd(auVar115,auVar123,2);
        auVar87._8_4_ = SUB84(auVar155._8_8_,0);
        auVar87._0_8_ = auVar155._0_8_;
        auVar87._12_4_ = (int)((ulonglong)auVar155._8_8_ >> 0x20);
        auVar133._0_8_ = auVar116._0_8_ * dVar13 - auVar115._0_8_ * auVar178._0_8_;
        auVar133._8_8_ = auVar116._8_8_ * auVar123._8_8_ - auVar115._8_8_ * auVar178._8_8_;
        dVar13 = dVar12 * dVar32 + dVar163 + auVar133._0_8_ +
                 (pFVar55->ComponentTransform).Translation.XY.m128d_f64[1];
        auVar115 = blendpd(auVar155,auVar133,2);
        local_10e8._s_0.Z =
             auVar178._0_8_ * dVar32 + dVar188 + auVar115._0_8_ +
             (pFVar55->ComponentTransform).Translation.ZW.m128d_f64[0];
        local_10e8._8_4_ = SUB84(dVar13,0);
        local_10e8._0_8_ =
             dVar113 * dVar32 + dVar120 + auVar87._8_8_ +
             (pFVar55->ComponentTransform).Translation.XY.m128d_f64[0];
        local_10e8._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
        local_f40 = auVar66;
        local_f30 = (double)local_1350._8_8_;
        local_f28 = auVar147;
        local_f18 = dVar31;
        FAnimInstanceProxy::AnimDrawDebugLine
                  (pFVar55,(TVector<double> *)&local_10e8._s_0,(TVector<double> *)&local_1100._s_0,
                   &FColor::Red,false,0.0,__real_40000000,SDPG_World);
        pFVar55 = this->AnimInstanceProxy;
        local_f00 = pTVar57[1].AllocatorInstance.Data;
        local_f10 = (pTVar57->AllocatorInstance).Data;
        dStack_f08 = *(double *)&pTVar57->ArrayNum;
        dVar188 = (double)local_f00 * (pFVar55->ComponentTransform).Scale3D.ZW.m128d_f64[0];
        dVar113 = (pFVar55->ComponentTransform).Scale3D.ZW.m128d_f64[1] * 0.0;
        auVar115 = *(undefined1 (*) [16])(pFVar55->ComponentTransform).Rotation.XY.m128d_f64;
        auVar123 = *(undefined1 (*) [16])(pFVar55->ComponentTransform).Rotation.ZW.m128d_f64;
        dVar32 = (pFVar55->ComponentTransform).Rotation.ZW.m128d_f64[1];
        dVar13 = auVar123._0_8_;
        dVar120 = (pFVar55->ComponentTransform).Scale3D.XY.m128d_f64[0] * (double)local_f10;
        dVar163 = (pFVar55->ComponentTransform).Scale3D.XY.m128d_f64[1] * dStack_f08;
        uVar162 = (undefined4)((ulonglong)dVar163 >> 0x20);
        auVar179._8_4_ = SUB84(dVar163,0);
        auVar179._0_8_ = dVar120;
        auVar179._12_4_ = uVar162;
        auVar116 = blendpd(auVar115,auVar123,2);
        auVar180._0_8_ = auVar179._8_8_ * auVar115._0_8_ - auVar115._8_8_ * dVar120;
        auVar180._8_8_ = dVar188 * auVar115._8_8_ - dVar13 * dVar163;
        auVar88._8_4_ = SUB84(dVar163,0);
        auVar88._0_8_ = dVar120;
        auVar88._12_4_ = uVar162;
        auVar20._8_4_ = SUB84(dVar113,0);
        auVar20._0_8_ = dVar188;
        auVar20._12_4_ = (int)((ulonglong)dVar113 >> 0x20);
        auVar115 = blendpd(auVar88,auVar20,2);
        auVar89._0_8_ = auVar115._0_8_ * dVar13 - auVar116._0_8_ * dVar188;
        auVar89._8_8_ = auVar115._8_8_ * auVar123._8_8_ - auVar116._8_8_ * dVar113;
        auVar115 = *(undefined1 (*) [16])(pFVar55->ComponentTransform).Rotation.XY.m128d_f64;
        auVar116 = blendpd(auVar180,auVar89,2);
        auVar181._0_8_ = auVar116._0_8_ + auVar116._0_8_;
        auVar181._8_8_ = auVar116._8_8_ + auVar116._8_8_;
        dVar113 = auVar180._8_8_ + auVar180._8_8_;
        dVar12 = auVar89._0_8_ + auVar89._0_8_;
        uVar162 = (undefined4)((ulonglong)dVar12 >> 0x20);
        auVar156._8_4_ = SUB84(dVar12,0);
        auVar156._0_8_ = dVar113;
        auVar156._12_4_ = uVar162;
        auVar134._8_4_ = SUB84(dVar12,0);
        auVar134._0_8_ = dVar113;
        auVar134._12_4_ = uVar162;
        auVar116 = blendpd(auVar134,auVar181,2);
        auVar157._0_8_ = auVar156._8_8_ * auVar115._0_8_ - auVar115._8_8_ * dVar113;
        auVar157._8_8_ = auVar181._0_8_ * auVar115._8_8_ - dVar13 * dVar12;
        auVar115 = blendpd(auVar115,auVar123,2);
        auVar90._8_4_ = SUB84(auVar157._8_8_,0);
        auVar90._0_8_ = auVar157._0_8_;
        auVar90._12_4_ = (int)((ulonglong)auVar157._8_8_ >> 0x20);
        auVar135._0_8_ = auVar116._0_8_ * dVar13 - auVar115._0_8_ * auVar181._0_8_;
        auVar135._8_8_ = auVar116._8_8_ * auVar123._8_8_ - auVar115._8_8_ * auVar181._8_8_;
        auVar115 = blendpd(auVar157,auVar135,2);
        dVar13 = dVar12 * dVar32 + dVar163 + auVar135._0_8_ +
                 (pFVar55->ComponentTransform).Translation.XY.m128d_f64[1];
        local_10d0._8_4_ = SUB84(dVar13,0);
        local_10d0._0_8_ =
             dVar113 * dVar32 + dVar120 + auVar90._8_8_ +
             (pFVar55->ComponentTransform).Translation.XY.m128d_f64[0];
        local_10d0._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
        local_10d0._s_0.Z =
             auVar181._0_8_ * dVar32 + dVar188 + auVar115._0_8_ +
             (pFVar55->ComponentTransform).Translation.ZW.m128d_f64[0];
        local_ef8._8_4_ = uVar200;
        local_ef8._0_8_ = dVar143;
        local_ef8._12_4_ = uVar201;
        dVar188 = dVar23 * (pFVar55->ComponentTransform).Scale3D.ZW.m128d_f64[0];
        dVar113 = (pFVar55->ComponentTransform).Scale3D.ZW.m128d_f64[1] * 0.0;
        local_1218 = (pFVar55->ComponentTransform).Rotation.XY.m128d_f64[0];
        dStack_1210 = (pFVar55->ComponentTransform).Rotation.XY.m128d_f64[1];
        auVar115 = *(undefined1 (*) [16])(pFVar55->ComponentTransform).Rotation.ZW.m128d_f64;
        auVar123 = *(undefined1 (*) [16])(pFVar55->ComponentTransform).Rotation.XY.m128d_f64;
        dVar32 = (pFVar55->ComponentTransform).Rotation.ZW.m128d_f64[1];
        dVar13 = auVar115._0_8_;
        dVar120 = (pFVar55->ComponentTransform).Scale3D.XY.m128d_f64[0] * dVar143;
        dVar163 = (pFVar55->ComponentTransform).Scale3D.XY.m128d_f64[1] * dVar22;
        uVar162 = (undefined4)((ulonglong)dVar163 >> 0x20);
        auVar182._8_4_ = SUB84(dVar163,0);
        auVar182._0_8_ = dVar120;
        auVar182._12_4_ = uVar162;
        auVar116 = blendpd(auVar123,auVar115,2);
        auVar183._0_8_ = auVar182._8_8_ * auVar123._0_8_ - auVar123._8_8_ * dVar120;
        auVar183._8_8_ = dVar188 * auVar123._8_8_ - dVar13 * dVar163;
        auVar91._8_4_ = SUB84(dVar163,0);
        auVar91._0_8_ = dVar120;
        auVar91._12_4_ = uVar162;
        auVar21._8_4_ = SUB84(dVar113,0);
        auVar21._0_8_ = dVar188;
        auVar21._12_4_ = (int)((ulonglong)dVar113 >> 0x20);
        auVar123 = blendpd(auVar91,auVar21,2);
        auVar92._0_8_ = auVar123._0_8_ * dVar13 - auVar116._0_8_ * dVar188;
        auVar92._8_8_ = auVar123._8_8_ * auVar115._8_8_ - auVar116._8_8_ * dVar113;
        auVar123 = *(undefined1 (*) [16])(pFVar55->ComponentTransform).Rotation.XY.m128d_f64;
        dVar113 = auVar183._8_8_ + auVar183._8_8_;
        dVar12 = auVar92._0_8_ + auVar92._0_8_;
        uVar162 = (undefined4)((ulonglong)dVar12 >> 0x20);
        auVar116 = blendpd(auVar183,auVar92,2);
        auVar158._8_4_ = SUB84(dVar12,0);
        auVar158._0_8_ = dVar113;
        auVar158._12_4_ = uVar162;
        auVar184._0_8_ = auVar116._0_8_ + auVar116._0_8_;
        auVar184._8_8_ = auVar116._8_8_ + auVar116._8_8_;
        auVar136._8_4_ = SUB84(dVar12,0);
        auVar136._0_8_ = dVar113;
        auVar136._12_4_ = uVar162;
        auVar137 = blendpd(auVar136,auVar184,2);
        auVar116 = blendpd(auVar123,auVar115,2);
        auVar159._0_8_ = auVar158._8_8_ * auVar123._0_8_ - auVar123._8_8_ * dVar113;
        auVar159._8_8_ = auVar184._0_8_ * auVar123._8_8_ - dVar13 * dVar12;
        auVar138._0_8_ = auVar137._0_8_ * dVar13 - auVar116._0_8_ * auVar184._0_8_;
        auVar138._8_8_ = auVar137._8_8_ * auVar115._8_8_ - auVar116._8_8_ * auVar184._8_8_;
        auVar93._8_4_ = SUB84(auVar159._8_8_,0);
        auVar93._0_8_ = auVar159._0_8_;
        auVar93._12_4_ = (int)((ulonglong)auVar159._8_8_ >> 0x20);
        dVar13 = dVar12 * dVar32 + dVar163 + auVar138._0_8_ +
                 (pFVar55->ComponentTransform).Translation.XY.m128d_f64[1];
        auVar115 = blendpd(auVar159,auVar138,2);
        local_10b8._s_0.Z =
             auVar184._0_8_ * dVar32 + dVar188 + auVar115._0_8_ +
             (pFVar55->ComponentTransform).Translation.ZW.m128d_f64[0];
        local_10b8._8_4_ = SUB84(dVar13,0);
        local_10b8._0_8_ =
             dVar113 * dVar32 + dVar120 + auVar93._8_8_ +
             (pFVar55->ComponentTransform).Translation.XY.m128d_f64[0];
        local_10b8._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
        local_ee8 = dVar23;
        FAnimInstanceProxy::AnimDrawDebugLine
                  (pFVar55,(TVector<double> *)&local_10b8._s_0,(TVector<double> *)&local_10d0._s_0,
                   &FColor::Green,false,0.0,__real_40000000,SDPG_World);
        uVar162 = local_11b8;
        uVar192 = uStack_11b4;
        uVar193 = uStack_11b0;
        uVar194 = uStack_11ac;
      }
      __return_storage_ptr__ = &local_1068;
      pTVar49 = UE::Math::TQuat<double>::FindBetweenNormals
                          (__return_storage_ptr__,(TVector<double> *)&local_13c8._s_0,
                           (TVector<double> *)&local_1428._s_0);
      auVar94._0_8_ = (double)CONCAT44(uVar192,uVar162);
      auVar94._8_4_ = uVar193;
      auVar94._12_4_ = uVar194;
      auVar117._4_4_ = uVar192;
      auVar117._0_4_ = uVar162;
      auVar117._8_4_ = uVar193;
      auVar117._12_4_ = uVar194;
      dVar163 = local_1068.Z;
      dVar188 = local_1068.W;
      dVar113 = (double)CONCAT44(uVar192,uVar162);
      dVar120 = auVar117._8_8_;
      auVar118._8_8_ = dVar113;
      auVar118._0_8_ = dVar120;
      auVar95._8_4_ = local_1068.Z._0_4_;
      auVar95._0_8_ = dVar163;
      auVar95._12_4_ = local_1068.Z._4_4_;
      dVar12 = local_1068.X * (double)FStack_12b0.Data *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
               auVar94._0_8_ * dVar188 +
               local_12b8 * local_1068.Y *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
               dVar163 * dVar120 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
      dVar13 = local_1068.X * local_12b8 *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
               auVar94._8_8_ * dVar188 +
               (double)FStack_12b0.Data * local_1068.Y *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
               auVar95._8_8_ * dVar113 *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
      uVar51 = SUB84(dVar13,0);
      uVar191 = (uint)((ulonglong)dVar13 >> 0x20);
      uVar27 = (uint)local_13e8.Data;
      uVar28 = local_13e8.Data._4_4_;
      uVar29 = (uint)uStack_13e0;
      uVar30 = uStack_13e0._4_4_;
      dVar13 = local_1068.X * dVar120 *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
               local_12b8 * dVar188 +
               (double)CONCAT44(uVar192,uVar162) * local_1068.Y *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
               dVar163 * (double)FStack_12b0.Data *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
      dVar113 = local_1068.X * dVar113 *
                GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
                (double)FStack_12b0.Data * dVar188 +
                (double)CONCAT44(uVar194,uVar193) * local_1068.Y *
                GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
                dVar163 * local_12b8 *
                GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
      uVar189 = SUB84(dVar113,0);
      uVar190 = (uint)((ulonglong)dVar113 >> 0x20);
      auVar33._8_8_ = dStack_13d0;
      auVar33._0_8_ = local_13d8.Data;
      auVar96._0_8_ =
           (double)CONCAT44(uVar196 & (uint)((ulonglong)dVar13 >> 0x20),uVar195 & SUB84(dVar13,0));
      auVar96._8_4_ = uVar197 & uVar189;
      auVar96._12_4_ = uVar198 & uVar190;
      auVar97._8_8_ = -(ulonglong)(auVar96._8_8_ == dVar111);
      auVar97._0_8_ = -(ulonglong)(auVar96._0_8_ == dVar142);
      uVar52 = movmskpd((int)__return_storage_ptr__,auVar97);
      lVar46 = -(ulonglong)((double)CONCAT44(uVar198 & uVar191,uVar197 & uVar51) == dVar111);
      auVar6._8_4_ = (int)lVar46;
      auVar6._0_8_ = -(ulonglong)
                      ((double)CONCAT44(uVar196 & (uint)((ulonglong)dVar12 >> 0x20),
                                        uVar195 & SUB84(dVar12,0)) == dVar142);
      auVar6._12_4_ = (int)((ulonglong)lVar46 >> 0x20);
      iVar40 = movmskpd((int)pTVar49,auVar6);
      if ((uVar52 & 0x3fffffff) == 0 && iVar40 == 0) {
        auVar98._0_8_ =
             (double)CONCAT44(uVar196 & (uint)((ulonglong)dVar23 >> 0x20),uVar195 & SUB84(dVar23,0))
        ;
        auVar98._8_4_ = uVar197 & uVar202;
        auVar98._12_4_ = uVar198 & uVar203;
        auVar99._8_8_ = -(ulonglong)(auVar98._8_8_ == dVar111);
        auVar99._0_8_ = -(ulonglong)(auVar98._0_8_ == dVar142);
        uVar52 = movmskpd(0,auVar99);
        lVar46 = -(ulonglong)((double)CONCAT44(uVar198 & uVar201,uVar197 & uVar200) == dVar111);
        auVar7._8_4_ = (int)lVar46;
        auVar7._0_8_ = -(ulonglong)
                        ((double)CONCAT44(uVar196 & uVar53,uVar195 & SUB84(dVar143,0)) == dVar142);
        auVar7._12_4_ = (int)((ulonglong)lVar46 >> 0x20);
        iVar40 = movmskpd(iVar40,auVar7);
        if ((uVar52 & 0x3fffffff) != 0 || iVar40 != 0) goto LAB_14a70c53e;
        auVar100._0_8_ =
             (double)CONCAT44(uVar196 & local_13e8.Data._4_4_,uVar195 & (uint)local_13e8.Data);
        auVar100._8_4_ = uVar197 & (uint)uStack_13e0;
        auVar100._12_4_ = uVar198 & uStack_13e0._4_4_;
        auVar101._8_8_ = -(ulonglong)(auVar100._8_8_ == dVar111);
        auVar101._0_8_ = -(ulonglong)(auVar100._0_8_ == dVar142);
        uVar52 = movmskpd(0,auVar101);
        lVar46 = -(ulonglong)
                  ((double)CONCAT44(uVar198 & (uint)((ulonglong)dStack_13d0 >> 0x20),
                                    uVar197 & SUB84(dStack_13d0,0)) == dVar111);
        auVar8._8_4_ = (int)lVar46;
        auVar8._0_8_ = -(ulonglong)
                        ((double)CONCAT44(uVar196 & (uint)((ulonglong)local_13d8.Data >> 0x20),
                                          uVar195 & (uint)local_13d8.Data) == dVar142);
        auVar8._12_4_ = (int)((ulonglong)lVar46 >> 0x20);
        iVar40 = movmskpd(iVar40,auVar8);
        if ((uVar52 & 0x3fffffff) != 0 || iVar40 != 0) goto LAB_14a70c53e;
      }
      else {
LAB_14a70c53e:
        bVar38 = ::FDebug::CheckVerifyFailedImpl2
                           ("!AdjustedThighTransform.ContainsNaN()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\AnimationWarping\\Source\\Runtime\\Private\\BoneControllers\\AnimNode_StrideWarping.cpp"
                            ,0x15b,L"");
        if (bVar38) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      local_c08 = pTVar57[-3].ArrayNum;
      pFVar58 = (pTVar34->AllocatorInstance).Data;
      local_bf8._8_4_ = uVar51;
      local_bf8._0_8_ = dVar12;
      local_bf8._12_4_ = uVar191;
      local_be8._8_4_ = uVar189;
      local_be8._0_8_ = dVar13;
      local_be8._12_4_ = uVar190;
      local_bd8._8_4_ = uVar200;
      local_bd8._0_8_ = dVar143;
      local_bd8._12_4_ = uVar201;
      local_bc8._8_4_ = uVar202;
      local_bc8._0_8_ = dVar23;
      local_bc8._12_4_ = uVar203;
      local_ba8 = uVar27;
      uStack_ba4 = uVar28;
      uStack_ba0 = uVar29;
      uStack_b9c = uVar30;
      local_bb8 = auVar33;
      if (((pFVar58 <= (FScriptContainerElement *)&local_c08) &&
          ((FScriptContainerElement *)&local_c08 < pFVar58 + (longlong)pTVar34->ArrayMax * 0x70)) &&
         (bVar38 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar38)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar40 = pTVar34->ArrayNum;
      if (iVar40 == pTVar34->ArrayMax) {
        iVar40 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x1070,&pTVar34->AllocatorInstance,&pTVar34->ArrayMax);
      }
      pTVar34->ArrayNum = iVar40 + 1;
      lVar46 = (longlong)iVar40 * 0x70;
      pFVar58 = (pTVar34->AllocatorInstance).Data;
      *(ulonglong *)(pFVar58 + lVar46) = CONCAT44(uStack_c04,local_c08);
      *(undefined8 *)(pFVar58 + lVar46 + 8) = uStack_c00;
      *(undefined8 *)(pFVar58 + lVar46 + 0x10) = local_bf8._0_8_;
      *(undefined8 *)(pFVar58 + lVar46 + 0x10 + 8) = local_bf8._8_8_;
      *(undefined8 *)(pFVar58 + lVar46 + 0x20) = local_be8._0_8_;
      *(undefined8 *)(pFVar58 + lVar46 + 0x20 + 8) = local_be8._8_8_;
      *(undefined8 *)(pFVar58 + lVar46 + 0x30) = local_bd8._0_8_;
      *(undefined8 *)(pFVar58 + lVar46 + 0x30 + 8) = local_bd8._8_8_;
      *(undefined8 *)(pFVar58 + lVar46 + 0x40) = local_bc8._0_8_;
      *(undefined8 *)(pFVar58 + lVar46 + 0x40 + 8) = local_bc8._8_8_;
      *(undefined8 *)(pFVar58 + lVar46 + 0x50) = local_bb8._0_8_;
      *(undefined8 *)(pFVar58 + lVar46 + 0x50 + 8) = local_bb8._8_8_;
      *(ulonglong *)(pFVar58 + lVar46 + 0x60) = CONCAT44(uStack_ba4,local_ba8);
      *(ulonglong *)(pFVar58 + lVar46 + 0x60 + 8) = CONCAT44(uStack_b9c,uStack_ba0);
      if (this->bClampIKUsingFKLimits != false) {
        auVar26._4_8_ = auVar118._8_8_;
        auVar26._0_4_ = uVar53;
        auVar119._0_8_ = auVar26._0_8_ << 0x20;
        auVar119._8_4_ = uVar200;
        auVar119._12_4_ = uVar201;
        local_eb8 = (double)local_1350._8_8_;
        local_10a0._8_4_ = uVar200;
        local_10a0._0_8_ = dVar143;
        local_10a0._12_4_ = uVar201;
        local_e58 = pTVar57[1].AllocatorInstance.Data;
        fVar141 = (float)SQRT((dVar64 - dVar114) * (dVar64 - dVar114) +
                              (dVar14 - dVar144) * (dVar14 - dVar144) +
                              (dVar31 - (double)local_1350._8_8_) *
                              (dVar31 - (double)local_1350._8_8_));
        local_e68 = (pTVar57->AllocatorInstance).Data;
        dStack_e60 = *(double *)&pTVar57->ArrayNum;
        dVar114 = auVar119._8_8_ - dStack_e60;
        local_1090 = dVar23;
        local_ee0 = auVar147;
        local_ed0 = dVar31;
        local_ec8 = auVar66;
        if (fVar141 < (float)SQRT(dVar114 * dVar114 +
                                  (dVar143 - (double)local_e68) * (dVar143 - (double)local_e68) +
                                  (dVar23 - (double)local_e58) * (dVar23 - (double)local_e58))) {
          dVar114 = (double)fVar141;
          local_eb0._8_4_ = uVar200;
          local_eb0._0_8_ = dVar143;
          local_eb0._12_4_ = uVar201;
          local_e98 = (FScriptContainerElement *)(dVar114 * local_1428._s_0.X + dVar143);
          local_e88 = (FScriptContainerElement *)(dVar114 * local_1428._s_0.Z + dVar23);
          dStack_e90 = dVar114 * local_1428._s_0.Y + dVar22;
          (pTVar57->AllocatorInstance).Data = local_e98;
          *(double *)&pTVar57->ArrayNum = dStack_e90;
          pTVar57[1].AllocatorInstance.Data = local_e88;
          pTVar57[1].ArrayNum = 0;
          pTVar57[1].ArrayMax = 0;
          local_ea0 = dVar23;
        }
      }
      pTVar62 = pTVar62 + 7;
      uVar54 = (ulonglong)local_1458 & 0xffffffff;
      pTVar57 = pTVar57 + 7;
    }
  }
  iVar40 = (this->FootData).ArrayNum;
  uVar54 = (ulonglong)iVar40;
  pFVar60 = (this->FootData).AllocatorInstance.Data;
  local_1458 = (IAnimRootMotionProvider *)CONCAT44(local_1458._4_4_,iVar40);
  pFVar58 = pFVar60 + 0x30;
  pFVar63 = pFVar60 + uVar54 * 0x70;
  while( true ) {
    uVar162 = SUB84(pTVar50,0);
    iVar40 = (int)uVar54;
    if ((this->FootData).ArrayNum != iVar40) {
      this_03 = local_1465 + 4;
      local_1465[4] = 0;
      bVar38 = `TCheckedPointerIterator<FAnimNode_StrideWarping::FStrideWarpingFootData,int,0>::
               operator!='::__l2::<lambda_1>::operator()(this_03);
      iVar40 = (int)this_03;
      uVar162 = (undefined4)CONCAT71(extraout_var,bVar38);
    }
    if (pFVar60 == pFVar63) break;
    if (bVar36) {
      pFVar55 = this->AnimInstanceProxy;
      local_e70 = *(double *)(pFVar58 + 0x10);
      local_e80 = *(double *)pFVar58;
      dStack_e78 = *(double *)(pFVar58 + 8);
      dVar22 = local_e80 * (pFVar55->ComponentTransform).Scale3D.XY.m128d_f64[0];
      dVar23 = dStack_e78 * (pFVar55->ComponentTransform).Scale3D.XY.m128d_f64[1];
      uVar162 = (undefined4)((ulonglong)dVar23 >> 0x20);
      dVar143 = local_e70 * (pFVar55->ComponentTransform).Scale3D.ZW.m128d_f64[0];
      dVar14 = (pFVar55->ComponentTransform).Scale3D.ZW.m128d_f64[1] * 0.0;
      local_1218 = (pFVar55->ComponentTransform).Rotation.XY.m128d_f64[0];
      dStack_1210 = (pFVar55->ComponentTransform).Rotation.XY.m128d_f64[1];
      auVar185._8_4_ = SUB84(dVar23,0);
      auVar185._0_8_ = dVar22;
      auVar185._12_4_ = uVar162;
      auVar147 = *(undefined1 (*) [16])(pFVar55->ComponentTransform).Rotation.ZW.m128d_f64;
      auVar66 = *(undefined1 (*) [16])(pFVar55->ComponentTransform).Rotation.XY.m128d_f64;
      dVar31 = (pFVar55->ComponentTransform).Rotation.ZW.m128d_f64[1];
      dVar114 = auVar147._0_8_;
      auVar115 = blendpd(auVar66,auVar147,2);
      auVar186._0_8_ = auVar185._8_8_ * auVar66._0_8_ - auVar66._8_8_ * dVar22;
      auVar186._8_8_ = dVar143 * auVar66._8_8_ - dVar114 * dVar23;
      auVar102._8_4_ = SUB84(dVar23,0);
      auVar102._0_8_ = dVar22;
      auVar102._12_4_ = uVar162;
      auVar66._8_4_ = SUB84(dVar14,0);
      auVar66._0_8_ = dVar143;
      auVar66._12_4_ = (int)((ulonglong)dVar14 >> 0x20);
      auVar66 = blendpd(auVar102,auVar66,2);
      auVar103._0_8_ = auVar66._0_8_ * dVar114 - auVar115._0_8_ * dVar143;
      auVar103._8_8_ = auVar66._8_8_ * auVar147._8_8_ - auVar115._8_8_ * dVar14;
      auVar66 = *(undefined1 (*) [16])(pFVar55->ComponentTransform).Rotation.XY.m128d_f64;
      auVar115 = blendpd(auVar186,auVar103,2);
      dVar14 = auVar186._8_8_ + auVar186._8_8_;
      dVar64 = auVar103._0_8_ + auVar103._0_8_;
      uVar162 = (undefined4)((ulonglong)dVar64 >> 0x20);
      auVar187._0_8_ = auVar115._0_8_ + auVar115._0_8_;
      auVar187._8_8_ = auVar115._8_8_ + auVar115._8_8_;
      auVar160._8_4_ = SUB84(dVar64,0);
      auVar160._0_8_ = dVar14;
      auVar160._12_4_ = uVar162;
      auVar139._8_4_ = SUB84(dVar64,0);
      auVar139._0_8_ = dVar14;
      auVar139._12_4_ = uVar162;
      auVar123 = blendpd(auVar139,auVar187,2);
      auVar115 = blendpd(auVar66,auVar147,2);
      auVar161._0_8_ = auVar160._8_8_ * auVar66._0_8_ - auVar66._8_8_ * dVar14;
      auVar161._8_8_ = auVar187._0_8_ * auVar66._8_8_ - dVar114 * dVar64;
      auVar104._8_4_ = SUB84(auVar161._8_8_,0);
      auVar104._0_8_ = auVar161._0_8_;
      auVar104._12_4_ = (int)((ulonglong)auVar161._8_8_ >> 0x20);
      auVar140._0_8_ = auVar123._0_8_ * dVar114 - auVar115._0_8_ * auVar187._0_8_;
      auVar140._8_8_ = auVar123._8_8_ * auVar147._8_8_ - auVar115._8_8_ * auVar187._8_8_;
      auVar147 = blendpd(auVar161,auVar140,2);
      dVar114 = dVar64 * dVar31 + dVar23 + auVar140._0_8_ +
                (pFVar55->ComponentTransform).Translation.XY.m128d_f64[1];
      local_1088._s_0.Z =
           auVar187._0_8_ * dVar31 + dVar143 + auVar147._0_8_ +
           (pFVar55->ComponentTransform).Translation.ZW.m128d_f64[0];
      local_1088._8_4_ = SUB84(dVar114,0);
      local_1088._0_8_ =
           dVar14 * dVar31 + dVar22 + auVar104._8_8_ +
           (pFVar55->ComponentTransform).Translation.XY.m128d_f64[0];
      local_1088._12_4_ = (int)((ulonglong)dVar114 >> 0x20);
      FAnimInstanceProxy::AnimDrawDebugSphere
                (pFVar55,(TVector<double> *)&local_1088._s_0,fVar141,0x10,&FColor::Blue,false,
                 fVar199,0.0,SDPG_World);
      iVar40 = (int)pFVar55;
      uVar162 = extraout_EAX;
    }
    auVar105._0_8_ =
         (double)CONCAT44(uVar196 & *(uint *)(pFVar58 + -0xc),uVar195 & *(uint *)(pFVar58 + -0x10));
    auVar105._8_4_ = uVar197 & *(uint *)(pFVar58 + -8);
    auVar105._12_4_ = uVar198 & *(uint *)(pFVar58 + -4);
    auVar106._8_8_ = -(ulonglong)(auVar105._8_8_ == dVar111);
    auVar106._0_8_ = -(ulonglong)(auVar105._0_8_ == dVar142);
    uVar53 = movmskpd(iVar40,auVar106);
    lVar46 = -(ulonglong)
              ((double)CONCAT44(uVar198 & *(uint *)(pFVar58 + -0x14),
                                uVar197 & *(uint *)(pFVar58 + -0x18)) == dVar111);
    auVar9._8_4_ = (int)lVar46;
    auVar9._0_8_ = -(ulonglong)
                    ((double)CONCAT44(uVar196 & *(uint *)(pFVar58 + -0x1c),
                                      uVar195 & *(uint *)(pFVar58 + -0x20)) == dVar142);
    auVar9._12_4_ = (int)((ulonglong)lVar46 >> 0x20);
    iVar40 = movmskpd(uVar162,auVar9);
    if ((uVar53 & 0x3fffffff) == 0 && iVar40 == 0) {
      auVar107._0_8_ =
           (double)CONCAT44(uVar196 & *(uint *)(pFVar58 + 0x14),uVar195 & *(uint *)(pFVar58 + 0x10))
      ;
      auVar107._8_4_ = uVar197 & *(uint *)(pFVar58 + 0x18);
      auVar107._12_4_ = uVar198 & *(uint *)(pFVar58 + 0x1c);
      auVar108._8_8_ = -(ulonglong)(auVar107._8_8_ == dVar111);
      auVar108._0_8_ = -(ulonglong)(auVar107._0_8_ == dVar142);
      uVar53 = movmskpd(0,auVar108);
      lVar46 = -(ulonglong)
                ((double)CONCAT44(uVar198 & *(uint *)(pFVar58 + 0xc),
                                  uVar197 & *(uint *)(pFVar58 + 8)) == dVar111);
      auVar10._8_4_ = (int)lVar46;
      auVar10._0_8_ =
           -(ulonglong)
            ((double)CONCAT44(uVar196 & *(uint *)(pFVar58 + 4),uVar195 & *(uint *)pFVar58) ==
            dVar142);
      auVar10._12_4_ = (int)((ulonglong)lVar46 >> 0x20);
      iVar40 = movmskpd(iVar40,auVar10);
      if ((uVar53 & 0x3fffffff) != 0 || iVar40 != 0) goto LAB_14a70ca1b;
      auVar109._0_8_ =
           (double)CONCAT44(uVar196 & *(uint *)(pFVar58 + 0x34),uVar195 & *(uint *)(pFVar58 + 0x30))
      ;
      auVar109._8_4_ = uVar197 & *(uint *)(pFVar58 + 0x38);
      auVar109._12_4_ = uVar198 & *(uint *)(pFVar58 + 0x3c);
      auVar110._8_8_ = -(ulonglong)(auVar109._8_8_ == dVar111);
      auVar110._0_8_ = -(ulonglong)(auVar109._0_8_ == dVar142);
      uVar53 = movmskpd(0,auVar110);
      lVar46 = -(ulonglong)
                ((double)CONCAT44(uVar198 & *(uint *)(pFVar58 + 0x2c),
                                  uVar197 & *(uint *)(pFVar58 + 0x28)) == dVar111);
      auVar11._8_4_ = (int)lVar46;
      auVar11._0_8_ =
           -(ulonglong)
            ((double)CONCAT44(uVar196 & *(uint *)(pFVar58 + 0x24),
                              uVar195 & *(uint *)(pFVar58 + 0x20)) == dVar142);
      auVar11._12_4_ = (int)((ulonglong)lVar46 >> 0x20);
      iVar40 = movmskpd(iVar40,auVar11);
      if ((uVar53 & 0x3fffffff) != 0 || iVar40 != 0) goto LAB_14a70ca1b;
    }
    else {
LAB_14a70ca1b:
      bVar38 = ::FDebug::CheckVerifyFailedImpl2
                         ("!Foot.IKFootBoneTransform.ContainsNaN()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\AnimationWarping\\Source\\Runtime\\Private\\BoneControllers\\AnimNode_StrideWarping.cpp"
                          ,0x179,L"");
      if (bVar38) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    local_b88 = *(FScriptContainerElement **)(pFVar58 + -0x20);
    dStack_b80 = *(double *)(pFVar58 + -0x18);
    local_b78 = *(FScriptContainerElement **)(pFVar58 + -0x10);
    dStack_b70 = *(double *)(pFVar58 + -8);
    local_b98 = *(undefined4 *)pFVar60;
    pFVar2 = (pTVar34->AllocatorInstance).Data;
    local_b68 = *(FScriptContainerElement **)pFVar58;
    dStack_b60 = *(double *)(pFVar58 + 8);
    local_b58 = *(FScriptContainerElement **)(pFVar58 + 0x10);
    dStack_b50 = *(double *)(pFVar58 + 0x18);
    local_b48 = *(FScriptContainerElement **)(pFVar58 + 0x20);
    dStack_b40 = *(double *)(pFVar58 + 0x28);
    local_b38 = *(FScriptContainerElement **)(pFVar58 + 0x30);
    dStack_b30 = *(double *)(pFVar58 + 0x38);
    if (((pFVar2 <= (FScriptContainerElement *)&local_b98) &&
        ((FScriptContainerElement *)&local_b98 < pFVar2 + (longlong)pTVar34->ArrayMax * 0x70)) &&
       (bVar38 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar38)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar40 = pTVar34->ArrayNum;
    if (iVar40 == pTVar34->ArrayMax) {
      iVar40 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x1070,&pTVar34->AllocatorInstance,&pTVar34->ArrayMax);
    }
    pTVar34->ArrayNum = iVar40 + 1;
    pFVar60 = pFVar60 + 0x70;
    lVar46 = (longlong)iVar40;
    pTVar50 = (TArray<FBoneTransform,TSizedDefaultAllocator<32>_> *)
              (pTVar34->AllocatorInstance).Data;
    pFVar58 = pFVar58 + 0x70;
    pTVar57 = pTVar50 + lVar46 * 7;
    (pTVar57->AllocatorInstance).Data = (FScriptContainerElement *)CONCAT44(uStack_b94,local_b98);
    pTVar57->ArrayNum = (undefined4)uStack_b90;
    pTVar57->ArrayMax = uStack_b90._4_4_;
    pTVar50[lVar46 * 7 + 1].AllocatorInstance.Data = local_b88;
    *(double *)&pTVar50[lVar46 * 7 + 1].ArrayNum = dStack_b80;
    pTVar50[lVar46 * 7 + 2].AllocatorInstance.Data = local_b78;
    *(double *)&pTVar50[lVar46 * 7 + 2].ArrayNum = dStack_b70;
    pTVar50[lVar46 * 7 + 3].AllocatorInstance.Data = local_b68;
    *(double *)&pTVar50[lVar46 * 7 + 3].ArrayNum = dStack_b60;
    pTVar50[lVar46 * 7 + 4].AllocatorInstance.Data = local_b58;
    *(double *)&pTVar50[lVar46 * 7 + 4].ArrayNum = dStack_b50;
    pTVar50[lVar46 * 7 + 5].AllocatorInstance.Data = local_b48;
    *(double *)&pTVar50[lVar46 * 7 + 5].ArrayNum = dStack_b40;
    pTVar50[lVar46 * 7 + 6].AllocatorInstance.Data = local_b38;
    *(double *)&pTVar50[lVar46 * 7 + 6].ArrayNum = dStack_b30;
    uVar54 = (ulonglong)local_1458 & 0xffffffff;
  }
  AlgoImpl::
  IntroSortInternal<FBoneTransform,int,FIdentityFunctor,TDereferenceWrapper<FBoneTransform,FCompareBoneTransformIndex>_>
            ((FBoneTransform *)(pTVar34->AllocatorInstance).Data,pTVar34->ArrayNum,local_1460[0],
             (FCompareBoneTransformIndex *)local_1460);
  if (local_a68.SecondaryData != (ForElementType<UE::Math::TVector<double>_>)0x0) {
    FMemory::Free((void *)local_a68.SecondaryData);
  }
  if (local_cb8.SecondaryData != (ForElementType<float>)0x0) {
    FMemory::Free((void *)local_cb8.SecondaryData);
  }
LAB_14a70cbc7:
  if ((local_13f0 & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((local_13f0 & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((local_13f0 & 4) != 0) {
    FThreadStats::AddMessage(local_13f8,CycleScopeEnd);
  }
  return;
}

// IsValidToEvaluate @ 14a70cca0

bool __thiscall
FAnimNode_StrideWarping::IsValidToEvaluate
          (FAnimNode_StrideWarping *this,USkeleton *param_1,FBoneContainer *param_2)

{
  int iVar1;
  TConsoleVariableData<int> *pTVar2;
  bool bVar3;
  longlong lVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res20 [8];
  
  pTVar2 = CVarAnimNodeStrideWarpingEnable.Ref;
  bVar3 = IsInParallelGameThread();
  if ((bVar3) || (bVar3 = IsInGameThread(), bVar3)) {
    lVar4 = 0;
  }
  else {
    lVar4 = 4;
  }
  if (((*(int *)((longlong)pTVar2->ShadowedValue + lVar4) != 0) &&
      (bVar3 = FBoneReference::IsValidToEvaluate(&this->PelvisBone,param_2), bVar3)) &&
     (bVar3 = FBoneReference::IsValidToEvaluate(&this->IKFootRootBone,param_2), bVar3)) {
    iVar1 = (this->FootData).ArrayNum;
    if (iVar1 != 0) {
      pFVar5 = (this->FootData).AllocatorInstance.Data;
      pFVar6 = pFVar5 + (longlong)iVar1 * 0x70;
      while( true ) {
        if ((this->FootData).ArrayNum != iVar1) {
          `TCheckedPointerIterator<FAnimNode_StrideWarping::FStrideWarpingFootData,int,0>::
          operator!='::__l2::<lambda_1>::operator()(local_res20);
        }
        if (pFVar5 == pFVar6) {
          return true;
        }
        if (((*(int *)pFVar5 == -1) || (*(int *)(pFVar5 + 4) == -1)) || (*(int *)(pFVar5 + 8) == -1)
           ) break;
        pFVar5 = pFVar5 + 0x70;
      }
    }
  }
  return false;
}

// InitializeBoneReferences @ 14a70cd70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FAnimNode_StrideWarping::InitializeBoneReferences
          (FAnimNode_StrideWarping *this,FBoneContainer *param_1)

{
  int *piVar1;
  TArray<FAnimNode_StrideWarping::FStrideWarpingFootData,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  FCompactPoseBoneIndex FVar6;
  int iVar7;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  ulonglong uVar8;
  longlong lVar9;
  FBoneReference *this_00;
  FBoneReference *pFVar10;
  FBoneReference *this_01;
  undefined1 auStackY_128 [32];
  undefined1 local_d8 [8];
  FBoneContainer *local_d0;
  uint local_c8;
  undefined1 local_c4 [8];
  undefined1 local_bc [4];
  undefined8 local_b8;
  int iStack_b0;
  uchar auStack_ac [4];
  double local_a8 [2];
  double local_98 [2];
  double local_88 [2];
  double local_78 [2];
  double local_68 [2];
  double local_58 [2];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_128;
  local_d0 = param_1;
  FBoneReference::Initialize(&this->IKFootRootBone,param_1);
  FBoneReference::Initialize(&this->PelvisBone,param_1);
  pTVar2 = &this->FootData;
  piVar1 = &(this->FootData).ArrayMax;
  (this->FootData).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x70,0x10,0,&pTVar2->AllocatorInstance,0,piVar1);
  }
  local_c8 = (this->FootDefinitions).ArrayNum;
  uVar8 = (ulonglong)(int)local_c8;
  this_00 = (FBoneReference *)(this->FootDefinitions).AllocatorInstance.Data;
  this_01 = this_00 + 2;
  pFVar10 = this_00 + uVar8 * 3;
  while( true ) {
    if ((this->FootDefinitions).ArrayNum != (int)uVar8) {
      local_d8[0] = 0;
      `TCheckedPointerIterator<FStrideWarpingFootDefinition,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_d8);
    }
    if (this_00 == pFVar10) break;
    FBoneReference::Initialize(this_00,param_1);
    FBoneReference::Initialize(this_01 + -1,local_d0);
    FBoneReference::Initialize(this_01,local_d0);
    local_a8[0] = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0];
    local_a8[1] = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1];
    local_98[0] = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0];
    local_98[1] = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1];
    local_88[0] = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0];
    local_88[1] = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1];
    local_78[0] = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0];
    local_78[1] = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1];
    local_68[0] = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0];
    local_68[1] = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1];
    local_58[0] = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0];
    local_58[1] = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1];
    local_b8 = 0xffffffffffffffff;
    iStack_b0 = -1;
    FVar6 = FBoneReference::GetCompactPoseIndex(this_00,(FBoneContainer *)local_c4);
    local_b8._0_4_ = *(int *)CONCAT44(extraout_var,FVar6);
    FVar6 = FBoneReference::GetCompactPoseIndex(this_01 + -1,(FBoneContainer *)(local_c4 + 4));
    param_1 = local_d0;
    local_b8._4_4_ = *(int *)CONCAT44(extraout_var_00,FVar6);
    FVar6 = FBoneReference::GetCompactPoseIndex(this_01,(FBoneContainer *)local_bc);
    iStack_b0 = *(int *)CONCAT44(extraout_var_01,FVar6);
    if ((((int)local_b8 != -1) && (local_b8._4_4_ != -1)) && (iStack_b0 != -1)) {
      pFVar3 = (pTVar2->AllocatorInstance).Data;
      if ((pFVar3 <= (FScriptContainerElement *)&local_b8) &&
         ((FScriptContainerElement *)&local_b8 < pFVar3 + (longlong)*piVar1 * 0x70)) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      iVar7 = (this->FootData).ArrayNum;
      if (iVar7 == *piVar1) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x1070,&pTVar2->AllocatorInstance,piVar1);
      }
      (this->FootData).ArrayNum = iVar7 + 1;
      lVar9 = (longlong)iVar7 * 0x70;
      pFVar3 = (pTVar2->AllocatorInstance).Data;
      *(undefined8 *)(pFVar3 + lVar9) = local_b8;
      *(ulonglong *)(pFVar3 + lVar9 + 8) = CONCAT44(auStack_ac,iStack_b0);
      *(double *)(pFVar3 + lVar9 + 0x10) = local_a8[0];
      *(double *)(pFVar3 + lVar9 + 0x10 + 8) = local_a8[1];
      *(double *)(pFVar3 + lVar9 + 0x20) = local_98[0];
      *(double *)(pFVar3 + lVar9 + 0x20 + 8) = local_98[1];
      *(double *)(pFVar3 + lVar9 + 0x30) = local_88[0];
      *(double *)(pFVar3 + lVar9 + 0x30 + 8) = local_88[1];
      *(double *)(pFVar3 + lVar9 + 0x40) = local_78[0];
      *(double *)(pFVar3 + lVar9 + 0x40 + 8) = local_78[1];
      *(double *)(pFVar3 + lVar9 + 0x50) = local_68[0];
      *(double *)(pFVar3 + lVar9 + 0x50 + 8) = local_68[1];
      *(double *)(pFVar3 + lVar9 + 0x60) = local_58[0];
      *(double *)(pFVar3 + lVar9 + 0x60 + 8) = local_58[1];
    }
    uVar8 = (ulonglong)local_c8;
    this_00 = this_00 + 3;
    this_01 = this_01 + 3;
  }
  return;
}

// FAnimNode_StrideWarping @ 14a71b8b0

FAnimNode_StrideWarping * __thiscall
FAnimNode_StrideWarping::FAnimNode_StrideWarping(FAnimNode_StrideWarping *this)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  
  FAnimNode_SkeletalControlBase::FAnimNode_SkeletalControlBase
            ((FAnimNode_SkeletalControlBase *)this);
  this->Mode = Manual;
  this->_padding_ = (longlong)&___7FAnimNode_StrideWarping__6B_;
  uVar2 = UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Y;
  (this->StrideDirection).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.X;
  (this->StrideDirection).field0_0x0._s_0.Y = (double)uVar2;
  (this->StrideDirection).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Z;
  this->StrideScale = 1.0;
  this->LocomotionSpeed = 0.0;
  this->MinRootMotionSpeedThreshold = 10.0;
  (this->PelvisBone).BoneName.ComparisonIndex = 0;
  (this->PelvisBone).BoneName.Number = 0;
  puVar1 = &(this->PelvisBone).field_0x8;
  (this->PelvisBone).BoneIndex = -1;
  (this->PelvisBone).bUseSkeletonIndex = 0;
  (this->PelvisBone).CachedCompactPoseIndex = (FCompactPoseBoneIndex)0xffffffff;
  (this->IKFootRootBone).BoneName.ComparisonIndex = 0;
  (this->IKFootRootBone).BoneName.Number = 0;
  puVar1 = &(this->IKFootRootBone).field_0x8;
  (this->IKFootRootBone).BoneIndex = -1;
  (this->IKFootRootBone).bUseSkeletonIndex = 0;
  (this->IKFootRootBone).CachedCompactPoseIndex = (FCompactPoseBoneIndex)0xffffffff;
  (this->FootDefinitions).ArrayNum = 0;
  (this->FootDefinitions).ArrayMax = 0;
  (this->StrideScaleModifier).bClampResult = false;
  (this->StrideScaleModifier).bInterpResult = false;
  (this->StrideScaleModifier).ClampMin = 0.0;
  (this->StrideScaleModifier).ClampMax = 1.0;
  (this->StrideScaleModifier).InterpSpeedIncreasing = 10.0;
  (this->StrideScaleModifier).InterpSpeedDecreasing = 10.0;
  (this->FloorNormalDirection).Mode = WorldSpaceVector;
  (this->FootDefinitions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  uVar2 = UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y;
  (this->FloorNormalDirection).Value.field0_0x0._s_0.X =
       UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X;
  (this->FloorNormalDirection).Value.field0_0x0._s_0.Y = (double)uVar2;
  (this->FloorNormalDirection).Value.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z;
  (this->GravityDirection).Mode = WorldSpaceVector;
  uVar2 = UE::Math::TVector<double>::DownVector.field0_0x0._s_0.Y;
  (this->GravityDirection).Value.field0_0x0._s_0.X =
       UE::Math::TVector<double>::DownVector.field0_0x0._s_0.X;
  (this->GravityDirection).Value.field0_0x0._s_0.Y = (double)uVar2;
  (this->GravityDirection).Value.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::DownVector.field0_0x0._s_0.Z;
  (this->PelvisIKFootSolver).PelvisAdjustmentInterpAlpha = 0.5;
  (this->PelvisIKFootSolver).PelvisAdjustmentMaxDistance = 10.0;
  (this->PelvisIKFootSolver).PelvisAdjustmentErrorTolerance = 0.01;
  *(undefined4 *)&(this->PelvisIKFootSolver).PelvisAdjustmentInterp = 0x3f800000;
  *(undefined4 *)&(this->PelvisIKFootSolver).PelvisAdjustmentInterp.field_0x4 = 0x3f800000;
  *(undefined2 *)&(this->PelvisIKFootSolver).PelvisAdjustmentInterp.field_0x8 = 0;
  *(undefined4 *)&(this->PelvisIKFootSolver).PelvisAdjustmentInterp.field_0xc = 0;
  *(undefined4 *)&(this->PelvisIKFootSolver).PelvisAdjustmentInterp.field_0x10 = 0x3f800000;
  *(undefined4 *)&(this->PelvisIKFootSolver).PelvisAdjustmentInterp.field_0x14 = 0x3f800000;
  *(undefined8 *)&(this->PelvisIKFootSolver).PelvisAdjustmentInterp.field_0x18 = 0;
  *(undefined8 *)&(this->PelvisIKFootSolver).PelvisAdjustmentInterp.field_0x20 = 0;
  *(undefined8 *)&(this->PelvisIKFootSolver).PelvisAdjustmentInterp.field_0x28 = 0;
  *(undefined8 *)&(this->PelvisIKFootSolver).PelvisAdjustmentInterp.field_0x30 = 0;
  *(undefined8 *)&(this->PelvisIKFootSolver).PelvisAdjustmentInterp.field_0x38 = 0;
  *(undefined8 *)&(this->PelvisIKFootSolver).PelvisAdjustmentInterp.field_0x40 = 0;
  *(undefined8 *)&(this->PelvisIKFootSolver).PelvisAdjustmentInterp.field_0x48 = 0;
  *(undefined8 *)&(this->PelvisIKFootSolver).PelvisAdjustmentInterp.field_0x50 = 0;
  *(undefined8 *)&(this->PelvisIKFootSolver).PelvisAdjustmentInterp.field_0x58 = 0;
  (this->PelvisIKFootSolver).PelvisAdjustmentMaxIter = 3;
  (this->FootData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FootData).ArrayNum = 0;
  (this->FootData).ArrayMax = 0;
  (this->StrideScaleModifierState).InterpolatedResult = 0.0;
  (this->StrideScaleModifierState).bInitialized = false;
  this->bOrientStrideDirectionUsingFloorNormal = true;
  this->bCompensateIKUsingFKThighRotation = true;
  this->bClampIKUsingFKLimits = true;
  this->bDisableIfMissingRootMotion = true;
  this->AnimInstanceProxy = (FAnimInstanceProxy *)0x0;
  uVar2 = UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Y;
  (this->ActualStrideDirection).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.X;
  (this->ActualStrideDirection).field0_0x0._s_0.Y = (double)uVar2;
  (this->ActualStrideDirection).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Z;
  this->ActualStrideScale = 1.0;
  this->CachedDeltaTime = 0.0;
  return this;
}

// operator() @ 1505530f0

bool __thiscall
`FAnimNode_StrideWarping::EvaluateSkeletalControl_AnyThread'::__l12::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<3148559001923354709>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<3148559001923354709>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150553170

bool __thiscall
`FAnimNode_StrideWarping::EvaluateSkeletalControl_AnyThread'::__l46::<lambda_2>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<3148559001923354815>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<3148559001923354815>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

