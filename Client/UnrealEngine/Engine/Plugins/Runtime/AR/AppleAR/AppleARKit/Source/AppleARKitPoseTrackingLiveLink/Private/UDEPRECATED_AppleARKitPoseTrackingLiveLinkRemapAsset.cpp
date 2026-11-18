// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AppleARKitPoseTrackingLiveLink
// Functions: 8

// StaticClass @ 14cfe2f00

UClass * __cdecl UDEPRECATED_AppleARKitPoseTrackingLiveLinkRemapAsset::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDEPRECATED_AppleARKitPoseTrackingLiveLinkRemapAsset.InnerSingleton
      == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AppleARKitPoseTrackingLiveLink",L"AppleARKitPoseTrackingLiveLinkRemapAsset"
               ,&Z_Registration_Info_UClass_UDEPRECATED_AppleARKitPoseTrackingLiveLinkRemapAsset.
                 InnerSingleton,
               StaticRegisterNativesUDEPRECATED_AppleARKitPoseTrackingLiveLinkRemapAsset,0xa8,8,
               CLASS_Intrinsic|CLASS_Deprecated|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UDEPRECATED_AppleARKitPoseTrackingLiveLinkRemapAsset>,
               InternalVTableHelperCtorCaller<UDEPRECATED_AppleARKitPoseTrackingLiveLinkRemapAsset>,
               local_res8,ULiveLinkRetargetAsset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDEPRECATED_AppleARKitPoseTrackingLiveLinkRemapAsset.
         InnerSingleton;
}

// UDEPRECATED_AppleARKitPoseTrackingLiveLinkRemapAsset @ 14cfe3250

UDEPRECATED_AppleARKitPoseTrackingLiveLinkRemapAsset * __thiscall
UDEPRECATED_AppleARKitPoseTrackingLiveLinkRemapAsset::
UDEPRECATED_AppleARKitPoseTrackingLiveLinkRemapAsset
          (UDEPRECATED_AppleARKitPoseTrackingLiveLinkRemapAsset *this,FVTableHelper *param_1)

{
  ULiveLinkRetargetAsset::ULiveLinkRetargetAsset((ULiveLinkRetargetAsset *)this,param_1);
  this->_padding_ = (longlong)&___7UDEPRECATED_AppleARKitPoseTrackingLiveLinkRemapAsset__6B_;
  (this->AppleARKitHumanForward).field0_0x0._s_0.X = -1.0;
  (this->MeshForward).field0_0x0._s_0.Y = 1.0;
  *(undefined8 *)&this->AppleARKitBoneNamesToMeshBoneNames = 0;
  *(undefined8 *)&(this->AppleARKitBoneNamesToMeshBoneNames).field_0x8 = 0;
  *(undefined8 *)&(this->AppleARKitBoneNamesToMeshBoneNames).field_0x20 = 0;
  (this->AppleARKitHumanForward).field0_0x0._s_0.Y = 0.0;
  (this->AppleARKitHumanForward).field0_0x0._s_0.Z = 0.0;
  (this->MeshForward).field0_0x0._s_0.X = 0.0;
  (this->MeshForward).field0_0x0._s_0.Z = 0.0;
  *(undefined4 *)&(this->AppleARKitBoneNamesToMeshBoneNames).field_0x28 = 0;
  *(undefined4 *)&(this->AppleARKitBoneNamesToMeshBoneNames).field_0x2c = 0x80;
  *(undefined4 *)&(this->AppleARKitBoneNamesToMeshBoneNames).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->AppleARKitBoneNamesToMeshBoneNames).field_0x34 = 0;
  *(undefined8 *)&(this->AppleARKitBoneNamesToMeshBoneNames).field_0x40 = 0;
  *(undefined4 *)&(this->AppleARKitBoneNamesToMeshBoneNames).field_0x48 = 0;
  return this;
}

// UDEPRECATED_AppleARKitPoseTrackingLiveLinkRemapAsset @ 14cfe32e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

UDEPRECATED_AppleARKitPoseTrackingLiveLinkRemapAsset * __thiscall
UDEPRECATED_AppleARKitPoseTrackingLiveLinkRemapAsset::
UDEPRECATED_AppleARKitPoseTrackingLiveLinkRemapAsset
          (UDEPRECATED_AppleARKitPoseTrackingLiveLinkRemapAsset *this,FObjectInitializer *param_1)

{
  FName **ppFVar1;
  undefined1 auStack_6e8 [32];
  undefined1 local_6c8 [20];
  FName local_6b4;
  FName local_6ac;
  FName local_6a4;
  FName local_69c;
  FName local_694;
  FName local_68c;
  FName local_684;
  FName local_67c;
  FName local_674;
  FName local_66c;
  FName local_664;
  FName local_65c;
  FName local_654;
  FName local_64c;
  FName local_644;
  FName local_63c;
  FName local_634;
  FName local_62c;
  FName local_624;
  FName local_61c;
  FName local_614;
  FName local_60c;
  FName local_604;
  FName local_5fc;
  FName local_5f4;
  FName local_5ec;
  FName local_5e4;
  FName local_5dc;
  FName local_5d4;
  FName local_5cc;
  FName local_5c4;
  FName local_5bc;
  FName local_5b4;
  FName local_5ac;
  FName local_5a4;
  FName local_59c;
  FName local_594;
  FName local_58c;
  FName local_584;
  FName local_57c;
  FName local_574;
  FName local_56c;
  FName local_564;
  FName local_55c;
  FName local_554;
  FName local_54c;
  FName local_544;
  FName local_53c;
  FName local_534;
  FName local_52c;
  FName local_524;
  FName local_51c;
  FName local_514;
  FName local_50c;
  FName local_504;
  FName local_4fc;
  FName local_4f4;
  FName local_4ec;
  FName local_4e4;
  FName local_4dc;
  FName local_4d4;
  FName local_4cc;
  FName local_4c4;
  FName local_4bc;
  FName local_4b4;
  FName local_4ac;
  FName local_4a4;
  FName local_49c;
  FName local_494;
  FName local_48c;
  FName local_484;
  FName local_47c;
  FName local_474;
  FName local_46c;
  FName local_464;
  FName local_45c;
  FName local_454;
  FName local_44c;
  FName local_444;
  FName local_43c;
  FName local_434;
  FName local_42c;
  FName local_424;
  FName local_41c;
  FName local_414;
  FName local_40c;
  FName local_404;
  FName local_3fc;
  FName local_3f4;
  FName local_3ec;
  FName local_3e4;
  FName local_3dc;
  FName local_3d4;
  FName local_3cc;
  FName local_3c4;
  FName local_3bc;
  FName local_3b4;
  FName local_3ac;
  FName local_3a4;
  FName local_39c;
  FName local_394;
  FName local_38c;
  FName *local_380;
  FName *local_378;
  FName *local_368 [106];
  
  local_368[0x68] = (FName *)(__security_cookie.value ^ (ulonglong)auStack_6e8);
  ULiveLinkRetargetAsset::ULiveLinkRetargetAsset((ULiveLinkRetargetAsset *)this,param_1);
  this->_padding_ = (longlong)&___7UDEPRECATED_AppleARKitPoseTrackingLiveLinkRemapAsset__6B_;
  *(undefined8 *)&this->AppleARKitBoneNamesToMeshBoneNames = 0;
  *(undefined8 *)&(this->AppleARKitBoneNamesToMeshBoneNames).field_0x8 = 0;
  *(undefined8 *)&(this->AppleARKitBoneNamesToMeshBoneNames).field_0x20 = 0;
  (this->AppleARKitHumanForward).field0_0x0._s_0.X = -1.0;
  (this->AppleARKitHumanForward).field0_0x0._s_0.Y = 0.0;
  (this->AppleARKitHumanForward).field0_0x0._s_0.Z = 0.0;
  (this->MeshForward).field0_0x0._s_0.X = 0.0;
  (this->MeshForward).field0_0x0._s_0.Z = 0.0;
  (this->MeshForward).field0_0x0._s_0.Y = 1.0;
  *(undefined4 *)&(this->AppleARKitBoneNamesToMeshBoneNames).field_0x28 = 0;
  *(undefined4 *)&(this->AppleARKitBoneNamesToMeshBoneNames).field_0x2c = 0x80;
  *(undefined4 *)&(this->AppleARKitBoneNamesToMeshBoneNames).field_0x34 = 0;
  *(undefined4 *)&(this->AppleARKitBoneNamesToMeshBoneNames).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->AppleARKitBoneNamesToMeshBoneNames).field_0x40 = 0;
  *(undefined4 *)&(this->AppleARKitBoneNamesToMeshBoneNames).field_0x48 = 0;
  ::FName::FName((FName *)(local_6c8 + 4),L"hips_joint");
  ::FName::FName((FName *)(local_6c8 + 0xc),L"pelvis");
  local_368[0] = (FName *)(local_6c8 + 4);
  local_368[1] = (FName *)(local_6c8 + 0xc);
  ::FName::FName(&local_6b4,L"spine_2_joint");
  ::FName::FName(&local_6ac,L"spine_01");
  local_368[2] = &local_6b4;
  local_368[3] = &local_6ac;
  ::FName::FName(&local_6a4,L"spine_4_joint");
  ::FName::FName(&local_69c,L"spine_02");
  local_368[4] = &local_6a4;
  local_368[5] = &local_69c;
  ::FName::FName(&local_694,L"spine_7_joint");
  ::FName::FName(&local_68c,L"spine_03");
  local_368[6] = &local_694;
  local_368[7] = &local_68c;
  ::FName::FName(&local_684,L"left_shoulder_1_joint");
  ::FName::FName(&local_67c,L"clavicle_l");
  local_368[8] = &local_684;
  local_368[9] = &local_67c;
  ::FName::FName(&local_674,L"left_arm_joint");
  ::FName::FName(&local_66c,L"upperarm_l");
  local_368[10] = &local_674;
  local_368[0xb] = &local_66c;
  ::FName::FName(&local_664,L"left_forearm_joint");
  ::FName::FName(&local_65c,L"lowerarm_l");
  local_368[0xc] = &local_664;
  local_368[0xd] = &local_65c;
  ::FName::FName(&local_654,L"left_hand_joint");
  ::FName::FName(&local_64c,L"hand_l");
  local_368[0xe] = &local_654;
  local_368[0xf] = &local_64c;
  ::FName::FName(&local_644,L"left_handIndex_1_joint");
  ::FName::FName(&local_63c,L"index_01_l");
  local_368[0x10] = &local_644;
  local_368[0x11] = &local_63c;
  ::FName::FName(&local_634,L"left_handIndex_2_joint");
  ::FName::FName(&local_62c,L"index_02_l");
  local_368[0x12] = &local_634;
  local_368[0x13] = &local_62c;
  ::FName::FName(&local_624,L"left_handIndex_3_joint");
  ::FName::FName(&local_61c,L"index_03_l");
  local_368[0x14] = &local_624;
  local_368[0x15] = &local_61c;
  ::FName::FName(&local_614,L"left_handMid_1_joint");
  ::FName::FName(&local_60c,L"middle_01_l");
  local_368[0x16] = &local_614;
  local_368[0x17] = &local_60c;
  ::FName::FName(&local_604,L"left_handMid_2_joint");
  ::FName::FName(&local_5fc,L"middle_02_l");
  local_368[0x18] = &local_604;
  local_368[0x19] = &local_5fc;
  ::FName::FName(&local_5f4,L"left_handMid_3_joint");
  ::FName::FName(&local_5ec,L"middle_03_l");
  local_368[0x1a] = &local_5f4;
  local_368[0x1b] = &local_5ec;
  ::FName::FName(&local_5e4,L"left_handPinky_1_joint");
  ::FName::FName(&local_5dc,L"pinky_01_l");
  local_368[0x1c] = &local_5e4;
  local_368[0x1d] = &local_5dc;
  ::FName::FName(&local_5d4,L"left_handPinky_2_joint");
  ::FName::FName(&local_5cc,L"pinky_02_l");
  local_368[0x1e] = &local_5d4;
  local_368[0x1f] = &local_5cc;
  ::FName::FName(&local_5c4,L"left_handPinky_3_joint");
  ::FName::FName(&local_5bc,L"pinky_03_l");
  local_368[0x20] = &local_5c4;
  local_368[0x21] = &local_5bc;
  ::FName::FName(&local_5b4,L"left_handRing_1_joint");
  ::FName::FName(&local_5ac,L"ring_01_l");
  local_368[0x22] = &local_5b4;
  local_368[0x23] = &local_5ac;
  ::FName::FName(&local_5a4,L"left_handRing_2_joint");
  ::FName::FName(&local_59c,L"ring_02_l");
  local_368[0x24] = &local_5a4;
  local_368[0x25] = &local_59c;
  ::FName::FName(&local_594,L"left_handRing_3_joint");
  ::FName::FName(&local_58c,L"ring_03_l");
  local_368[0x26] = &local_594;
  local_368[0x27] = &local_58c;
  ::FName::FName(&local_584,L"left_handThumbStart_joint");
  ::FName::FName(&local_57c,L"thumb_01_l");
  local_368[0x28] = &local_584;
  local_368[0x29] = &local_57c;
  ::FName::FName(&local_574,L"left_handThumb_1_joint");
  ::FName::FName(&local_56c,L"thumb_02_l");
  local_368[0x2a] = &local_574;
  local_368[0x2b] = &local_56c;
  ::FName::FName(&local_564,L"left_handThumb_2_joint");
  ::FName::FName(&local_55c,L"thumb_03_l");
  local_368[0x2c] = &local_564;
  local_368[0x2d] = &local_55c;
  ::FName::FName(&local_554,L"right_shoulder_1_joint");
  ::FName::FName(&local_54c,L"clavicle_r");
  local_368[0x2e] = &local_554;
  local_368[0x2f] = &local_54c;
  ::FName::FName(&local_544,L"right_arm_joint");
  ::FName::FName(&local_53c,L"upperarm_r");
  local_368[0x30] = &local_544;
  local_368[0x31] = &local_53c;
  ::FName::FName(&local_534,L"right_forearm_joint");
  ::FName::FName(&local_52c,L"lowerarm_r");
  local_368[0x32] = &local_534;
  local_368[0x33] = &local_52c;
  ::FName::FName(&local_524,L"right_hand_joint");
  ::FName::FName(&local_51c,L"hand_r");
  local_368[0x34] = &local_524;
  local_368[0x35] = &local_51c;
  ::FName::FName(&local_514,L"right_handIndex_1_joint");
  ::FName::FName(&local_50c,L"index_01_r");
  local_368[0x36] = &local_514;
  local_368[0x37] = &local_50c;
  ::FName::FName(&local_504,L"right_handIndex_2_joint");
  ::FName::FName(&local_4fc,L"index_02_r");
  local_368[0x38] = &local_504;
  local_368[0x39] = &local_4fc;
  ::FName::FName(&local_4f4,L"right_handIndex_3_joint");
  ::FName::FName(&local_4ec,L"index_03_r");
  local_368[0x3a] = &local_4f4;
  local_368[0x3b] = &local_4ec;
  ::FName::FName(&local_4e4,L"right_handMid_1_joint");
  ::FName::FName(&local_4dc,L"middle_01_r");
  local_368[0x3c] = &local_4e4;
  local_368[0x3d] = &local_4dc;
  ::FName::FName(&local_4d4,L"right_handMid_2_joint");
  ::FName::FName(&local_4cc,L"middle_02_r");
  local_368[0x3e] = &local_4d4;
  local_368[0x3f] = &local_4cc;
  ::FName::FName(&local_4c4,L"right_handMid_3_joint");
  ::FName::FName(&local_4bc,L"middle_03_r");
  local_368[0x40] = &local_4c4;
  local_368[0x41] = &local_4bc;
  ::FName::FName(&local_4b4,L"right_handPinky_1_joint");
  ::FName::FName(&local_4ac,L"pinky_01_r");
  local_368[0x42] = &local_4b4;
  local_368[0x43] = &local_4ac;
  ::FName::FName(&local_4a4,L"right_handPinky_2_joint");
  ::FName::FName(&local_49c,L"pinky_02_r");
  local_368[0x44] = &local_4a4;
  local_368[0x45] = &local_49c;
  ::FName::FName(&local_494,L"right_handPinky_3_joint");
  ::FName::FName(&local_48c,L"pinky_03_r");
  local_368[0x46] = &local_494;
  local_368[0x47] = &local_48c;
  ::FName::FName(&local_484,L"right_handRing_1_joint");
  ::FName::FName(&local_47c,L"ring_01_r");
  local_368[0x48] = &local_484;
  local_368[0x49] = &local_47c;
  ::FName::FName(&local_474,L"right_handRing_2_joint");
  ::FName::FName(&local_46c,L"ring_02_r");
  local_368[0x4a] = &local_474;
  local_368[0x4b] = &local_46c;
  ::FName::FName(&local_464,L"right_handRing_3_joint");
  ::FName::FName(&local_45c,L"ring_03_r");
  local_368[0x4c] = &local_464;
  local_368[0x4d] = &local_45c;
  ::FName::FName(&local_454,L"right_handThumbStart_joint");
  ::FName::FName(&local_44c,L"thumb_01_r");
  local_368[0x4e] = &local_454;
  local_368[0x4f] = &local_44c;
  ::FName::FName(&local_444,L"right_handThumb_1_joint");
  ::FName::FName(&local_43c,L"thumb_02_r");
  local_368[0x50] = &local_444;
  local_368[0x51] = &local_43c;
  ::FName::FName(&local_434,L"right_handThumb_2_joint");
  ::FName::FName(&local_42c,L"thumb_03_r");
  local_368[0x52] = &local_434;
  local_368[0x53] = &local_42c;
  ::FName::FName(&local_424,L"neck_1_joint");
  ::FName::FName(&local_41c,L"neck_01");
  local_368[0x54] = &local_424;
  local_368[0x55] = &local_41c;
  ::FName::FName(&local_414,L"head_joint");
  ::FName::FName(&local_40c,L"head");
  local_368[0x56] = &local_414;
  local_368[0x57] = &local_40c;
  ::FName::FName(&local_404,L"left_upLeg_joint");
  ::FName::FName(&local_3fc,L"thigh_l");
  local_368[0x58] = &local_404;
  local_368[0x59] = &local_3fc;
  ::FName::FName(&local_3f4,L"left_leg_joint");
  ::FName::FName(&local_3ec,L"calf_l");
  local_368[0x5a] = &local_3f4;
  local_368[0x5b] = &local_3ec;
  ::FName::FName(&local_3e4,L"left_foot_joint");
  ::FName::FName(&local_3dc,L"foot_l");
  local_368[0x5c] = &local_3e4;
  local_368[0x5d] = &local_3dc;
  ::FName::FName(&local_3d4,L"left_toes_joint");
  ::FName::FName(&local_3cc,L"ball_l");
  local_368[0x5e] = &local_3d4;
  local_368[0x5f] = &local_3cc;
  ::FName::FName(&local_3c4,L"right_upLeg_joint");
  ::FName::FName(&local_3bc,L"thigh_r");
  local_368[0x60] = &local_3c4;
  local_368[0x61] = &local_3bc;
  ::FName::FName(&local_3b4,L"right_leg_joint");
  ::FName::FName(&local_3ac,L"calf_r");
  local_368[0x62] = &local_3b4;
  local_368[99] = &local_3ac;
  ::FName::FName(&local_3a4,L"right_foot_joint");
  ::FName::FName(&local_39c,L"foot_r");
  local_368[100] = &local_3a4;
  local_368[0x65] = &local_39c;
  ::FName::FName(&local_394,L"right_toes_joint");
  ::FName::FName(&local_38c,L"ball_r");
  local_368[0x66] = &local_394;
  local_368[0x67] = &local_38c;
  TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>::Empty
            ((TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>
              *)&this->AppleARKitBoneNamesToMeshBoneNames,0x34);
  ppFVar1 = local_368;
  do {
    local_380 = *ppFVar1;
    local_378 = ppFVar1[1];
    TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<FName_const_&,FName_const_&>_>
              ((TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>
                *)&this->AppleARKitBoneNamesToMeshBoneNames,
               (TPairInitializer<FName_const_&,FName_const_&> *)local_6c8,(bool *)&local_380);
    ppFVar1 = ppFVar1 + 2;
  } while (ppFVar1 != local_368 + 0x68);
  return this;
}

// ~UDEPRECATED_AppleARKitPoseTrackingLiveLinkRemapAsset @ 14cfe4160

void __thiscall
UDEPRECATED_AppleARKitPoseTrackingLiveLinkRemapAsset::
~UDEPRECATED_AppleARKitPoseTrackingLiveLinkRemapAsset
          (UDEPRECATED_AppleARKitPoseTrackingLiveLinkRemapAsset *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UDEPRECATED_AppleARKitPoseTrackingLiveLinkRemapAsset__6B_;
  *(undefined4 *)&(this->AppleARKitBoneNamesToMeshBoneNames).field_0x48 = 0;
  pvVar1 = *(void **)&(this->AppleARKitBoneNamesToMeshBoneNames).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->AppleARKitBoneNamesToMeshBoneNames);
  ULiveLinkRetargetAsset::~ULiveLinkRetargetAsset((ULiveLinkRetargetAsset *)this);
  return;
}

// BuildPoseFromAnimationData @ 14cfe44a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014cfe5085) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UDEPRECATED_AppleARKitPoseTrackingLiveLinkRemapAsset::BuildPoseFromAnimationData
          (UDEPRECATED_AppleARKitPoseTrackingLiveLinkRemapAsset *this,float param_1,
          FLiveLinkSkeletonStaticData *param_2,FLiveLinkAnimationFrameData *param_3,
          FCompactPose *param_4)

{
  FScriptContainerElement *pFVar1;
  undefined4 *puVar2;
  double *pdVar3;
  ushort *puVar4;
  code *pcVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  FLiveLinkAnimationFrameData *pFVar12;
  undefined8 uVar13;
  bool bVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  TTransform<double> *pTVar19;
  FName *pFVar20;
  TTransform<double> *pTVar21;
  undefined7 extraout_var;
  uint uVar22;
  longlong lVar23;
  uint uVar24;
  uint uVar25;
  ulonglong uVar26;
  FName *pFVar27;
  ushort *puVar28;
  FName *pFVar29;
  uint uVar30;
  ulonglong uVar31;
  ForElementType<FName> FVar32;
  longlong lVar33;
  longlong lVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  double dVar57;
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  double dVar58;
  double dVar62;
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined4 uVar63;
  undefined4 uVar64;
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  double dVar67;
  uint uVar71;
  double dVar72;
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  double dVar73;
  undefined4 uVar74;
  undefined4 uVar75;
  undefined4 uVar76;
  undefined4 uVar77;
  undefined4 uVar78;
  undefined4 uVar79;
  double dVar80;
  uint uVar82;
  uint uVar84;
  undefined1 auVar81 [16];
  double dVar83;
  undefined4 uVar85;
  undefined4 uVar86;
  undefined4 uVar87;
  undefined4 uVar88;
  undefined4 uVar89;
  undefined4 uVar90;
  undefined4 uVar91;
  undefined4 uVar92;
  undefined1 auStackY_788 [32];
  undefined1 local_738 [8];
  ForElementType<FName> local_730;
  undefined8 local_728;
  ForAnyElementType local_720;
  int local_718;
  int iStack_714;
  FName local_710;
  FLiveLinkAnimationFrameData *local_708;
  undefined1 local_700 [16];
  undefined1 local_6e8 [16];
  double local_6d8;
  double dStack_6d0;
  TQuat<double> local_6c8;
  TQuat<double> local_6a8;
  double local_688 [2];
  double local_678;
  double local_670;
  double dStack_668;
  double local_660;
  double local_658;
  double dStack_650;
  double local_648;
  double local_640;
  double dStack_638;
  double local_630;
  TTransform<double> local_628;
  TTransform<double> local_5c8;
  TTransform<double> local_568;
  TTransform<double> local_508;
  TTransform<double> local_4a8;
  TTransform<double> local_448;
  TTransform<double> local_3e8;
  TTransform<double> local_388;
  TTransform<double> local_328;
  TTransform<double> local_2c8;
  TTransform<double> local_268;
  TTransform<double> local_208;
  TTransform<double> local_1a8;
  TTransform<double> local_148;
  ulonglong local_e8;
  uint uVar56;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_788;
  local_6e8._0_8_ = param_4;
  local_700._0_8_ = this;
  local_708 = param_3;
  if ((param_2 == (FLiveLinkSkeletonStaticData *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("InSkeletonData",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AR\\AppleAR\\AppleARKit\\Source\\AppleARKitPoseTrackingLiveLink\\Private\\AppleARKitPoseTrackingLiveLinkRemapAsset.cpp"
                          ,0x4d,L""), bVar14)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((param_3 == (FLiveLinkAnimationFrameData *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("InFrameData",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AR\\AppleAR\\AppleARKit\\Source\\AppleARKitPoseTrackingLiveLink\\Private\\AppleARKitPoseTrackingLiveLinkRemapAsset.cpp"
                          ,0x4e,L""), bVar14)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar18 = (param_2->BoneNames).ArrayNum;
  uVar26 = 0;
  local_730.Data = (FName *)0x0;
  local_728 = 0;
  if ((int)uVar18 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar18);
  }
  uVar31 = uVar26;
  if (0 < (int)uVar18) {
    UE::Core::Private::ReallocTo<0,TMemStackAllocator<0>::ForElementType<FName>_>
              (8,4,uVar18,&local_730,0,(int *)((longlong)&local_728 + 4));
    uVar31 = local_728 & 0xffffffff;
  }
  FVar32.Data = local_730.Data;
  local_720.Data = (FScriptContainerElement *)0x0;
  local_718 = 0;
  iStack_714 = 0;
  uVar18 = *(uint *)(*(longlong *)(*(longlong *)&param_4->field_0x10 + 0x48) + 0x28);
  if ((int)uVar18 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar18);
  }
  if (0 < (int)uVar18) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,0x10,uVar18,&local_720,0,&iStack_714);
    do {
      pTVar19 = GetRefMeshBoneToComponent(&local_1a8,param_4,(int)uVar26);
      if (local_718 == iStack_714) {
        local_718 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x1060,&local_720,&iStack_714);
      }
      iVar17 = local_718 + 1;
      uVar30 = (int)uVar26 + 1;
      uVar26 = (ulonglong)uVar30;
      dVar67 = (pTVar19->Rotation).XY.m128d_f64[1];
      lVar23 = (longlong)local_718 * 0x60;
      *(double *)(local_720.Data + lVar23) = (pTVar19->Rotation).XY.m128d_f64[0];
      *(double *)(local_720.Data + lVar23 + 8) = dVar67;
      dVar67 = (pTVar19->Rotation).ZW.m128d_f64[1];
      *(double *)(local_720.Data + lVar23 + 0x10) = (pTVar19->Rotation).ZW.m128d_f64[0];
      *(double *)(local_720.Data + lVar23 + 0x10 + 8) = dVar67;
      dVar67 = (pTVar19->Translation).XY.m128d_f64[1];
      *(double *)(local_720.Data + lVar23 + 0x20) = (pTVar19->Translation).XY.m128d_f64[0];
      *(double *)(local_720.Data + lVar23 + 0x20 + 8) = dVar67;
      dVar67 = (pTVar19->Translation).ZW.m128d_f64[1];
      *(double *)(local_720.Data + lVar23 + 0x30) = (pTVar19->Translation).ZW.m128d_f64[0];
      *(double *)(local_720.Data + lVar23 + 0x30 + 8) = dVar67;
      dVar67 = (pTVar19->Scale3D).XY.m128d_f64[1];
      *(double *)(local_720.Data + lVar23 + 0x40) = (pTVar19->Scale3D).XY.m128d_f64[0];
      *(double *)(local_720.Data + lVar23 + 0x40 + 8) = dVar67;
      uVar63 = *(undefined4 *)((longlong)(pTVar19->Scale3D).ZW.m128d_f64 + 4);
      uVar64 = *(undefined4 *)((pTVar19->Scale3D).ZW.m128d_f64 + 1);
      uVar74 = *(undefined4 *)((longlong)(pTVar19->Scale3D).ZW.m128d_f64 + 0xc);
      pFVar1 = local_720.Data + lVar23 + 0x50;
      *(undefined4 *)pFVar1 = *(undefined4 *)(pTVar19->Scale3D).ZW.m128d_f64;
      *(undefined4 *)(pFVar1 + 4) = uVar63;
      *(undefined4 *)(pFVar1 + 8) = uVar64;
      *(undefined4 *)(pFVar1 + 0xc) = uVar74;
      local_718 = iVar17;
    } while ((int)uVar30 < (int)uVar18);
  }
  pFVar27 = (FName *)(param_2->BoneNames).AllocatorInstance.Data;
  iVar17 = (param_2->BoneNames).ArrayNum;
  uVar13 = local_700._0_8_;
  pFVar29 = pFVar27 + iVar17;
  while( true ) {
    iVar15 = (int)uVar31;
    if ((param_2->BoneNames).ArrayNum != iVar17) {
      local_738[0] = 0;
      `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_738);
    }
    if (pFVar27 == pFVar29) break;
    pFVar20 = TMapBase<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>
              ::Find((TMapBase<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>
                      *)(uVar13 + 0x58),*pFVar27);
    local_710.ComparisonIndex.Value = 0;
    local_710.Number = 0;
    if (pFVar20 != (FName *)0x0) {
      local_710 = *pFVar20;
    }
    if (((FVar32.Data <= &local_710) && (&local_710 < FVar32.Data + local_728._4_4_)) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar14)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (iVar15 == local_728._4_4_) {
      iVar15 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<0,TMemStackAllocator<0>::ForElementType<FName>_>
                         (0x408,&local_730,(int *)((longlong)&local_728 + 4));
      FVar32.Data = local_730.Data;
    }
    pFVar27 = pFVar27 + 1;
    uVar31 = (ulonglong)(iVar15 + 1U);
    FVar32.Data[iVar15] = local_710;
    local_728 = CONCAT44(local_728._4_4_,iVar15 + 1U);
  }
  UE::Math::TVector<double>::ToOrientationQuat((TVector<double> *)(uVar13 + 0x28),&local_6c8);
  UE::Math::TVector<double>::ToOrientationQuat((TVector<double> *)(uVar13 + 0x40),&local_6a8);
  local_628.Rotation.XY.m128d_f64[0] = local_6c8.X;
  local_628.Rotation.XY.m128d_f64[1] = local_6c8.Y;
  local_628.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_628.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
  local_628.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_628.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
  local_628.Rotation.ZW.m128d_f64[0] = local_6c8.Z;
  local_628.Rotation.ZW.m128d_f64[1] = local_6c8.W;
  local_628.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_628.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
  local_628.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_628.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  pTVar19 = UE::Math::TTransform<double>::Inverse(&local_628,&local_148);
  local_388.Rotation.XY.m128d_f64[0] = local_6a8.X;
  local_388.Rotation.XY.m128d_f64[1] = local_6a8.Y;
  local_5c8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_5c8.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
  uVar63 = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  uVar64 = (undefined4)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  local_5c8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_5c8.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
  local_5c8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_5c8.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  local_388.Rotation.ZW.m128d_f64[0] = local_6a8.Z;
  local_388.Rotation.ZW.m128d_f64[1] = local_6a8.W;
  local_5c8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_5c8.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  local_5c8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_5c8.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
  local_388.Translation.ZW.m128d_f64[1]._0_4_ = uVar63;
  local_388.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_388.Translation.ZW.m128d_f64[1]._4_4_ = uVar64;
  local_5c8.Translation.ZW.m128d_f64[1]._0_4_ = uVar63;
  local_5c8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_5c8.Translation.ZW.m128d_f64[1]._4_4_ = uVar64;
  local_388.Translation.XY.m128d_f64[0] = local_5c8.Translation.XY.m128d_f64[0];
  local_388.Translation.XY.m128d_f64[1] = local_5c8.Translation.XY.m128d_f64[1];
  local_388.Scale3D.XY.m128d_f64[0] = local_5c8.Scale3D.XY.m128d_f64[0];
  local_388.Scale3D.XY.m128d_f64[1] = local_5c8.Scale3D.XY.m128d_f64[1];
  local_388.Scale3D.ZW.m128d_f64[0] = local_5c8.Scale3D.ZW.m128d_f64[0];
  local_388.Scale3D.ZW.m128d_f64[1] = local_5c8.Scale3D.ZW.m128d_f64[1];
  UE::Math::TTransform<double>::Multiply(&local_5c8,pTVar19,&local_388);
  pFVar12 = local_708;
  uVar24 = 0;
  uVar13 = local_6e8._0_8_;
  uVar18 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar30 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar82 = _UNK_15061cc88;
  uVar84 = _UNK_15061cc8c;
  if (0 < iVar15) {
    do {
      uVar16 = 0;
      if ((int)uVar24 < iVar15) {
        uVar16 = ~uVar24 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar16 = FBoneContainer::GetPoseBoneIndexForBoneName
                         (*(FBoneContainer **)(uVar13 + 0x10),FVar32.Data + (int)uVar24);
      if (uVar16 != 0xffffffff) {
        GetAppleBoneToComponentTransformFromRefSkeleton(&local_2c8,param_2,uVar24);
        GetAppleBoneToComponentTransform
                  (&local_268,&param_2->BoneParents,&pFVar12->Transforms,uVar24);
        pTVar19 = &local_208;
        dVar57 = local_268.Rotation.ZW.m128d_f64[0];
        local_708 = (FLiveLinkAnimationFrameData *)
                    (local_268.Translation.XY.m128d_f64[0] - local_2c8.Translation.XY.m128d_f64[0]);
        dVar67 = local_2c8.Rotation.XY.m128d_f64[0] *
                 GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
        dVar73 = local_2c8.Rotation.XY.m128d_f64[1] *
                 GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
        dVar80 = local_2c8.Rotation.ZW.m128d_f64[0] *
                 GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
        dVar83 = local_2c8.Rotation.ZW.m128d_f64[1] *
                 GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
        local_670 = local_2c8.Translation.XY.m128d_f64[0];
        dStack_668 = local_2c8.Translation.XY.m128d_f64[1];
        dVar72 = local_268.Rotation.ZW.m128d_f64[1];
        local_678 = local_268.Translation.ZW.m128d_f64[0];
        dVar58 = local_268.Rotation.XY.m128d_f64[0];
        dVar62 = local_268.Rotation.XY.m128d_f64[1];
        local_6d8 = local_268.Translation.ZW.m128d_f64[0] - local_2c8.Translation.ZW.m128d_f64[0];
        local_660 = local_2c8.Translation.ZW.m128d_f64[0];
        auVar43._8_4_ = local_268.Rotation.XY.m128d_f64[1]._0_4_;
        auVar43._0_8_ = dVar62;
        auVar43._12_4_ = local_268.Rotation.XY.m128d_f64[1]._4_4_;
        local_688[0] = local_268.Translation.XY.m128d_f64[0];
        local_688[1] = local_268.Translation.XY.m128d_f64[1];
        dVar10 = local_268.Translation.XY.m128d_f64[1] - local_2c8.Translation.XY.m128d_f64[1];
        dStack_6d0 = local_268.Translation.ZW.m128d_f64[1];
        auVar66._8_4_ = local_268.Rotation.ZW.m128d_f64[1]._0_4_;
        auVar66._0_8_ = dVar72;
        auVar66._12_4_ = local_268.Rotation.ZW.m128d_f64[1]._4_4_;
        auVar50._8_4_ = SUB84(dVar83,0);
        auVar50._0_8_ = dVar80;
        auVar50._12_4_ = (int)((ulonglong)dVar83 >> 0x20);
        auVar35._8_4_ = local_268.Rotation.ZW.m128d_f64[0]._0_4_;
        auVar35._0_8_ = dVar57;
        auVar35._12_4_ = local_268.Rotation.ZW.m128d_f64[0]._4_4_;
        dVar8 = dVar58 * dVar73 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
                dVar72 * dVar80 +
                dVar62 * dVar67 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
                dVar57 * auVar50._8_8_ *
                GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
        dVar9 = dVar58 * dVar67 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
                auVar66._8_8_ * dVar83 +
                auVar43._8_8_ * dVar73 *
                GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
                auVar35._8_8_ * dVar80 *
                GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
        local_6e8._8_4_ = SUB84(dVar9,0);
        local_6e8._0_8_ = dVar8;
        local_6e8._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
        local_700._8_4_ = local_268.Translation.XY.m128d_f64[1]._0_4_;
        local_700._0_8_ = dVar10;
        local_700._12_4_ = local_268.Translation.XY.m128d_f64[1]._4_4_;
        dVar11 = dVar58 * auVar50._8_8_ *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] + dVar72 * dVar67 +
                 dVar62 * dVar80 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
                 dVar57 * dVar73 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
        dVar67 = dVar58 * dVar80 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
                 dVar72 * dVar73 +
                 dVar62 * dVar83 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
                 dVar57 * dVar67 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
        pTVar21 = GetRefMeshBoneToComponent(pTVar19,(FCompactPose *)uVar13,uVar16);
        uVar56 = (uint)((ulonglong)local_5c8.Scale3D.ZW.m128d_f64[0] >> 0x20);
        auVar51._0_8_ =
             (double)CONCAT44(uVar56 & uVar30,SUB84(local_5c8.Scale3D.ZW.m128d_f64[0],0) & uVar18);
        auVar51._8_4_ = SUB84(local_5c8.Scale3D.ZW.m128d_f64[1],0) & uVar82;
        auVar51._12_4_ = (uint)((ulonglong)local_5c8.Scale3D.ZW.m128d_f64[1] >> 0x20) & uVar84;
        auVar44._8_8_ =
             -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[3] < auVar51._8_8_);
        auVar44._0_8_ =
             -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[2] < auVar51._0_8_);
        uVar22 = movmskpd((int)pTVar19,auVar44);
        auVar46._8_8_ = local_5c8.Scale3D.XY.m128d_f64[1];
        auVar46._0_8_ = local_5c8.Scale3D.XY.m128d_f64[0];
        uVar25 = (uint)((ulonglong)local_5c8.Scale3D.XY.m128d_f64[1] >> 0x20);
        uVar71 = (uint)((ulonglong)local_5c8.Scale3D.XY.m128d_f64[0] >> 0x20);
        auVar45._0_8_ =
             (double)CONCAT44(uVar71 & uVar30,SUB84(local_5c8.Scale3D.XY.m128d_f64[0],0) & uVar18);
        auVar45._8_4_ = SUB84(local_5c8.Scale3D.XY.m128d_f64[1],0) & uVar82;
        auVar45._12_4_ = uVar25 & uVar84;
        auVar36._8_8_ =
             -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[1] < auVar45._8_8_);
        auVar36._0_8_ =
             -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[0] < auVar45._0_8_);
        iVar17 = movmskpd((int)pTVar21,auVar36);
        if ((uVar22 & 0x3fffffff) == 0 && iVar17 == 0) {
          local_568.Rotation.XY.m128d_f64 =
               UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
          local_568.Rotation.ZW.m128d_f64 =
               UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
          local_568.Translation.XY.m128d_f64 =
               UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
          local_568.Translation.ZW.m128d_f64 =
               UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
          local_568.Scale3D.XY.m128d_f64 =
               UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
          local_568.Scale3D.ZW.m128d_f64 =
               UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
        }
        else {
          dVar58 = local_5c8.Rotation.XY.m128d_f64[0] *
                   GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
          dVar62 = local_5c8.Rotation.XY.m128d_f64[1] *
                   GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
          uVar75 = SUB84(dVar62,0);
          uVar76 = (undefined4)((ulonglong)dVar62 >> 0x20);
          dVar9 = local_5c8.Rotation.ZW.m128d_f64[0] *
                  GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
          dVar10 = local_5c8.Rotation.ZW.m128d_f64[1] *
                   GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
          uVar74 = (undefined4)((ulonglong)dVar10 >> 0x20);
          lVar23 = -(ulonglong)
                    ((double)CONCAT44(uVar30 & uVar56,
                                      uVar18 & SUB84(local_5c8.Scale3D.ZW.m128d_f64[0],0)) <=
                    (double)GlobalVectorConstants::SmallNumber.m128_f32[2]);
          auVar46 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar46);
          lVar33 = -(ulonglong)
                    ((double)CONCAT44(uVar71 & uVar30,
                                      SUB84(local_5c8.Scale3D.XY.m128d_f64[0],0) & uVar18) <=
                    (double)GlobalVectorConstants::SmallNumber.m128_f32[0]);
          lVar34 = -(ulonglong)
                    ((double)CONCAT44(uVar25 & uVar84,
                                      SUB84(local_5c8.Scale3D.XY.m128d_f64[1],0) & uVar82) <=
                    (double)GlobalVectorConstants::SmallNumber.m128_f32[1]);
          local_568.Scale3D.XY.m128d_f64[0]._0_4_ = ~(uint)lVar33 & auVar46._0_4_;
          local_568.Scale3D.XY.m128d_f64[0]._4_4_ =
               ~(uint)((ulonglong)lVar33 >> 0x20) & auVar46._4_4_;
          local_568.Scale3D.XY.m128d_f64[1]._0_4_ = ~(uint)lVar34 & auVar46._8_4_;
          local_568.Scale3D.XY.m128d_f64[1]._4_4_ =
               ~(uint)((ulonglong)lVar34 >> 0x20) & auVar46._12_4_;
          auVar6._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
          auVar6._0_8_ = local_5c8.Scale3D.ZW.m128d_f64[0];
          auVar6._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
          auVar46 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar6);
          dVar83 = local_5c8.Translation.XY.m128d_f64[0] *
                   (double)CONCAT44(local_568.Scale3D.XY.m128d_f64[0]._4_4_,
                                    local_568.Scale3D.XY.m128d_f64[0]._0_4_);
          dVar8 = local_5c8.Translation.XY.m128d_f64[1] *
                  (double)CONCAT44(local_568.Scale3D.XY.m128d_f64[1]._4_4_,
                                   local_568.Scale3D.XY.m128d_f64[1]._0_4_);
          uVar63 = (undefined4)((ulonglong)dVar8 >> 0x20);
          auVar52._8_4_ = uVar75;
          auVar52._0_8_ = dVar58;
          auVar52._12_4_ = uVar76;
          local_568.Scale3D.ZW.m128d_f64[0] =
               (double)CONCAT44(~(uint)((ulonglong)lVar23 >> 0x20) & auVar46._4_4_,
                                ~(uint)lVar23 & auVar46._0_4_);
          dVar57 = auVar52._8_8_;
          auVar37._8_4_ = SUB84(dVar9,0);
          auVar37._0_8_ = dVar57;
          auVar37._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
          auVar68._8_4_ = SUB84(dVar8,0);
          auVar68._0_8_ = dVar83;
          auVar68._12_4_ = uVar63;
          auVar81._0_8_ = local_5c8.Translation.ZW.m128d_f64[0] * local_568.Scale3D.ZW.m128d_f64[0];
          auVar81._8_8_ = local_5c8.Translation.ZW.m128d_f64[1] * 0.0;
          auVar65._8_4_ = uVar75;
          auVar65._0_8_ = dVar58;
          auVar65._12_4_ = uVar76;
          auVar47._8_4_ = SUB84(dVar8,0);
          auVar47._0_8_ = dVar83;
          auVar47._12_4_ = uVar63;
          auVar46 = blendpd(auVar47,auVar81,2);
          auVar69._0_8_ = auVar68._8_8_ * dVar58 - dVar57 * dVar83;
          auVar69._8_8_ = auVar81._0_8_ * dVar62 - auVar37._8_8_ * dVar8;
          auVar7._8_4_ = SUB84(dVar10,0);
          auVar7._0_8_ = dVar9;
          auVar7._12_4_ = uVar74;
          auVar66 = blendpd(auVar65,auVar7,2);
          auVar48._0_8_ = auVar46._0_8_ * dVar9 - auVar66._0_8_ * auVar81._0_8_;
          auVar48._8_8_ = auVar46._8_8_ * dVar10 - auVar66._8_8_ * auVar81._8_8_;
          dVar73 = auVar69._8_8_ + auVar69._8_8_;
          dVar80 = auVar48._0_8_ + auVar48._0_8_;
          uVar63 = SUB84(dVar80,0);
          uVar64 = (undefined4)((ulonglong)dVar80 >> 0x20);
          auVar46 = blendpd(auVar69,auVar48,2);
          auVar70._0_8_ = auVar46._0_8_ + auVar46._0_8_;
          auVar70._8_8_ = auVar46._8_8_ + auVar46._8_8_;
          auVar59._8_4_ = uVar63;
          auVar59._0_8_ = dVar73;
          auVar59._12_4_ = uVar64;
          auVar38._8_4_ = uVar63;
          auVar38._0_8_ = dVar73;
          auVar38._12_4_ = uVar64;
          auVar53._8_4_ = uVar63;
          auVar53._0_8_ = dVar73;
          auVar53._12_4_ = uVar64;
          auVar46 = blendpd(auVar53,auVar70,2);
          auVar60._0_8_ = auVar59._8_8_ * dVar58 - dVar73 * dVar57;
          auVar60._8_8_ = auVar70._0_8_ * dVar62 - auVar38._8_8_ * dVar9;
          auVar39._8_4_ = SUB84(auVar70._8_8_,0);
          auVar39._0_8_ = auVar70._0_8_;
          auVar39._12_4_ = (int)((ulonglong)auVar70._8_8_ >> 0x20);
          auVar54._0_8_ = auVar46._0_8_ * dVar9 - auVar70._0_8_ * auVar66._0_8_;
          auVar54._8_8_ = auVar46._8_8_ * dVar10 - auVar39._8_8_ * auVar66._8_8_;
          auVar40._8_4_ = SUB84(auVar60._8_8_,0);
          auVar40._0_8_ = auVar60._0_8_;
          auVar40._12_4_ = (int)((ulonglong)auVar60._8_8_ >> 0x20);
          auVar46 = blendpd(auVar60,auVar54,2);
          local_568.Rotation.XY.m128d_f64[1]._0_4_ = uVar75;
          local_568.Rotation.XY.m128d_f64[0] = dVar58;
          local_568.Rotation.XY.m128d_f64[1]._4_4_ = uVar76;
          local_568.Translation.ZW.m128d_f64[1] = 0.0;
          local_568.Translation.ZW.m128d_f64[0] =
               0.0 - (auVar70._0_8_ * dVar10 + auVar81._0_8_ + auVar46._0_8_);
          local_568.Rotation.ZW.m128d_f64[1]._0_4_ = SUB84(dVar10,0);
          local_568.Rotation.ZW.m128d_f64[0] = dVar9;
          local_568.Rotation.ZW.m128d_f64[1]._4_4_ = uVar74;
          local_568.Translation.XY.m128d_f64[1] = 0.0 - (dVar80 * dVar10 + dVar8 + auVar54._0_8_);
          local_568.Translation.XY.m128d_f64[0] = 0.0 - (dVar73 * dVar10 + dVar83 + auVar40._8_8_);
          local_568.Scale3D.ZW.m128d_f64[1] = 0.0;
          dVar10 = (double)local_700._0_8_;
          dVar8 = (double)local_6e8._0_8_;
          dVar9 = (double)local_6e8._8_8_;
        }
        local_508.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
        local_508.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
        local_508.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
        local_508.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
        local_508.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0]
        ;
        local_508.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1]
        ;
        local_508.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2]
        ;
        local_508.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3]
        ;
        local_508.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
        local_508.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
        local_508.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
        local_508.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
        UE::Math::TTransform<double>::Multiply(&local_508,&local_208,&local_568);
        auVar55._8_4_ = SUB84(dVar11,0);
        auVar55._0_8_ = dVar11;
        auVar55._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
        auVar41._8_4_ = SUB84(dVar8,0);
        auVar41._0_8_ = dVar8;
        auVar41._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
        local_648 = local_508.Translation.ZW.m128d_f64[0];
        local_328.Translation.XY.m128d_f64[0] =
             (double)local_708 + local_508.Translation.XY.m128d_f64[0];
        local_328.Rotation.XY.m128d_f64[0] =
             dVar11 * local_508.Rotation.ZW.m128d_f64[1] *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
             local_508.Rotation.XY.m128d_f64[0] * dVar9 +
             local_508.Rotation.ZW.m128d_f64[0] * dVar67 *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
             dVar8 * local_508.Rotation.XY.m128d_f64[1] *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
        local_328.Rotation.XY.m128d_f64[1] =
             auVar55._8_8_ * local_508.Rotation.ZW.m128d_f64[0] *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
             local_508.Rotation.XY.m128d_f64[1] * dVar9 +
             local_508.Rotation.ZW.m128d_f64[1] * dVar67 *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
             auVar41._8_8_ * local_508.Rotation.XY.m128d_f64[0] *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
        local_658 = local_508.Translation.XY.m128d_f64[0];
        dStack_650 = local_508.Translation.XY.m128d_f64[1];
        local_328.Translation.XY.m128d_f64[1] = dVar10 + local_508.Translation.XY.m128d_f64[1];
        local_328.Translation.ZW.m128d_f64[0] = local_6d8 + local_508.Translation.ZW.m128d_f64[0];
        dVar73 = dVar11 * local_508.Rotation.XY.m128d_f64[0] *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
                 local_508.Rotation.ZW.m128d_f64[1] * dVar9 +
                 local_508.Rotation.XY.m128d_f64[1] * dVar67 *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
                 dVar8 * local_508.Rotation.ZW.m128d_f64[0] *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
        local_640 = local_508.Scale3D.XY.m128d_f64[0];
        dStack_638 = local_508.Scale3D.XY.m128d_f64[1];
        local_328.Rotation.ZW.m128d_f64[1]._0_4_ = SUB84(dVar73,0);
        local_328.Rotation.ZW.m128d_f64[0] =
             dVar11 * local_508.Rotation.XY.m128d_f64[1] *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
             local_508.Rotation.ZW.m128d_f64[0] * dVar9 +
             local_508.Rotation.XY.m128d_f64[0] * dVar67 *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
             dVar8 * local_508.Rotation.ZW.m128d_f64[1] *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
        local_328.Rotation.ZW.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar73 >> 0x20);
        local_328.Translation.ZW.m128d_f64[1] = 0.0;
        local_630 = local_508.Scale3D.ZW.m128d_f64[0];
        local_328.Scale3D.XY.m128d_f64[0] = local_508.Scale3D.XY.m128d_f64[0];
        local_328.Scale3D.XY.m128d_f64[1] = local_508.Scale3D.XY.m128d_f64[1];
        local_4a8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
        local_4a8.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
        local_4a8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
        local_4a8.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
        local_328.Scale3D.ZW.m128d_f64[0] = local_508.Scale3D.ZW.m128d_f64[0];
        local_328.Scale3D.ZW.m128d_f64[1] = 0.0;
        local_4a8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0]
        ;
        local_4a8.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1]
        ;
        local_4a8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2]
        ;
        local_4a8.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3]
        ;
        local_4a8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
        local_4a8.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
        local_4a8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
        local_4a8.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
        UE::Math::TTransform<double>::Multiply(&local_4a8,&local_328,&local_5c8);
        dVar72 = local_4a8.Scale3D.ZW.m128d_f64[1];
        dVar57 = local_4a8.Scale3D.ZW.m128d_f64[0];
        dVar62 = local_4a8.Scale3D.XY.m128d_f64[1];
        dVar58 = local_4a8.Scale3D.XY.m128d_f64[0];
        dVar11 = local_4a8.Translation.ZW.m128d_f64[1];
        dVar10 = local_4a8.Translation.ZW.m128d_f64[0];
        dVar9 = local_4a8.Translation.XY.m128d_f64[1];
        dVar8 = local_4a8.Translation.XY.m128d_f64[0];
        dVar83 = local_4a8.Rotation.ZW.m128d_f64[1];
        dVar80 = local_4a8.Rotation.ZW.m128d_f64[0];
        dVar73 = local_4a8.Rotation.XY.m128d_f64[1];
        dVar67 = local_4a8.Rotation.XY.m128d_f64[0];
        uVar18 = 0;
        if ((int)uVar16 < local_718) {
          uVar18 = ~uVar16 >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        lVar23 = (longlong)(int)uVar16 * 0x60;
        *(double *)(local_720.Data + lVar23) = dVar67;
        *(double *)(local_720.Data + lVar23 + 8) = dVar73;
        *(double *)(local_720.Data + lVar23 + 0x10) = dVar80;
        *(double *)(local_720.Data + lVar23 + 0x10 + 8) = dVar83;
        *(double *)(local_720.Data + lVar23 + 0x20) = dVar8;
        *(double *)(local_720.Data + lVar23 + 0x20 + 8) = dVar9;
        *(double *)(local_720.Data + lVar23 + 0x30) = dVar10;
        *(double *)(local_720.Data + lVar23 + 0x30 + 8) = dVar11;
        uVar84 = _UNK_15061cc8c;
        uVar82 = _UNK_15061cc88;
        uVar30 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
        uVar18 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
        *(double *)(local_720.Data + lVar23 + 0x40) = dVar58;
        *(double *)(local_720.Data + lVar23 + 0x40 + 8) = dVar62;
        *(double *)(local_720.Data + lVar23 + 0x50) = dVar57;
        *(double *)(local_720.Data + lVar23 + 0x50 + 8) = dVar72;
      }
      uVar24 = uVar24 + 1;
    } while ((int)uVar24 < iVar15);
  }
  pFVar29 = FVar32.Data + iVar15;
  local_700._0_8_ = pFVar29;
  do {
    if (FVar32.Data == pFVar29) {
      if (local_720.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_720.Data);
      }
      return;
    }
    uVar24 = FBoneContainer::GetPoseBoneIndexForBoneName
                       (*(FBoneContainer **)(uVar13 + 0x10),FVar32.Data);
    if (uVar24 != 0xffffffff) {
      uVar16 = FBoneContainer::GetParentBoneIndex(*(FBoneContainer **)(uVar13 + 0x10),uVar24);
      puVar4 = (ushort *)**(undefined8 **)(uVar13 + 0x10);
      for (puVar28 = puVar4; puVar28 != puVar4 + *(int *)(*(undefined8 **)(uVar13 + 0x10) + 1);
          puVar28 = puVar28 + 1) {
        if (*puVar28 == uVar24) {
          uVar25 = (uint)((longlong)puVar28 - (longlong)puVar4 >> 1);
          goto LAB_14cfe50f9;
        }
      }
      uVar25 = 0xffffffff;
LAB_14cfe50f9:
      if (uVar25 != 0xffffffff) {
        if (uVar16 == 0xffffffff) {
          uVar18 = 0;
          if ((int)uVar24 < local_718) {
            uVar18 = ~uVar24 >> 0x1f;
          }
          if ((uVar18 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          lVar23 = (longlong)(int)uVar24 * 0x60;
          dVar67 = *(double *)(local_720.Data + lVar23);
          dVar73 = *(double *)(local_720.Data + lVar23 + 8);
          pFVar1 = local_720.Data + lVar23 + 0x10;
          uVar63 = *(undefined4 *)pFVar1;
          uVar64 = *(undefined4 *)(pFVar1 + 4);
          uVar74 = *(undefined4 *)(pFVar1 + 8);
          uVar75 = *(undefined4 *)(pFVar1 + 0xc);
          pFVar1 = local_720.Data + lVar23 + 0x20;
          uVar76 = *(undefined4 *)pFVar1;
          uVar77 = *(undefined4 *)(pFVar1 + 4);
          uVar78 = *(undefined4 *)(pFVar1 + 8);
          uVar79 = *(undefined4 *)(pFVar1 + 0xc);
          dVar80 = *(double *)(local_720.Data + lVar23 + 0x30);
          dVar83 = *(double *)(local_720.Data + lVar23 + 0x30 + 8);
          pFVar1 = local_720.Data + lVar23 + 0x40;
          uVar85 = *(undefined4 *)pFVar1;
          uVar86 = *(undefined4 *)(pFVar1 + 4);
          uVar87 = *(undefined4 *)(pFVar1 + 8);
          uVar88 = *(undefined4 *)(pFVar1 + 0xc);
          pFVar1 = local_720.Data + lVar23 + 0x50;
          uVar89 = *(undefined4 *)pFVar1;
          uVar90 = *(undefined4 *)(pFVar1 + 4);
          uVar91 = *(undefined4 *)(pFVar1 + 8);
          uVar92 = *(undefined4 *)(pFVar1 + 0xc);
        }
        else {
          uVar22 = 0;
          if ((int)uVar24 < local_718) {
            uVar22 = ~uVar24 >> 0x1f;
          }
          if ((uVar22 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pTVar19 = (TTransform<double> *)(local_720.Data + (longlong)(int)uVar24 * 0x60);
          uVar24 = 0;
          if ((int)uVar16 < local_718) {
            uVar24 = ~uVar16 >> 0x1f;
          }
          iVar17 = local_718;
          if (uVar24 == 0) {
            iVar17 = 0x506109c0;
            bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            uVar24 = (uint)CONCAT71(extraout_var,bVar14);
            if (bVar14) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
          }
          pTVar21 = (TTransform<double> *)(local_720.Data + (longlong)(int)uVar16 * 0x60);
          auVar61._0_8_ =
               (double)CONCAT44(*(uint *)((longlong)(pTVar21->Scale3D).ZW.m128d_f64 + 4) & uVar30,
                                *(uint *)(pTVar21->Scale3D).ZW.m128d_f64 & uVar18);
          auVar61._8_4_ = *(uint *)((pTVar21->Scale3D).ZW.m128d_f64 + 1) & uVar82;
          auVar61._12_4_ = *(uint *)((longlong)(pTVar21->Scale3D).ZW.m128d_f64 + 0xc) & uVar84;
          auVar49._8_8_ =
               -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[3] < auVar61._8_8_);
          auVar49._0_8_ =
               -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[2] < auVar61._0_8_);
          uVar16 = movmskpd(iVar17,auVar49);
          auVar42._8_8_ =
               -(ulonglong)
                ((double)GlobalVectorConstants::SmallNumber.m128_f32[1] <
                (double)CONCAT44(*(uint *)((longlong)(pTVar21->Scale3D).XY.m128d_f64 + 0xc) & uVar84
                                 ,*(uint *)((pTVar21->Scale3D).XY.m128d_f64 + 1) & uVar82));
          auVar42._0_8_ =
               -(ulonglong)
                ((double)GlobalVectorConstants::SmallNumber.m128_f32[0] <
                (double)CONCAT44(*(uint *)((longlong)(pTVar21->Scale3D).XY.m128d_f64 + 4) & uVar30,
                                 *(uint *)(pTVar21->Scale3D).XY.m128d_f64 & uVar18));
          iVar17 = movmskpd(uVar24,auVar42);
          if ((uVar16 & 0x3fffffff) == 0 && iVar17 == 0) {
            local_3e8.Rotation.XY.m128d_f64 =
                 UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
            local_3e8.Rotation.ZW.m128d_f64 =
                 UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
            local_3e8.Translation.XY.m128d_f64 =
                 UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
            local_3e8.Translation.ZW.m128d_f64 =
                 UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
            local_3e8.Scale3D.XY.m128d_f64 =
                 UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
            local_3e8.Scale3D.ZW.m128d_f64 =
                 UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
          }
          else {
            UE::Math::TTransform<double>::InverseFast(pTVar21,&local_3e8);
          }
          local_448.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
          local_448.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
          local_448.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
          local_448.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
          local_448.Translation.XY.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[0];
          local_448.Translation.XY.m128d_f64[1] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[1];
          local_448.Translation.ZW.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[2];
          local_448.Translation.ZW.m128d_f64[1] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[3];
          local_448.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
          local_448.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
          local_448.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
          local_448.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
          UE::Math::TTransform<double>::Multiply(&local_448,pTVar19,&local_3e8);
          uVar63 = local_448.Rotation.ZW.m128d_f64[0]._0_4_;
          uVar64 = local_448.Rotation.ZW.m128d_f64[0]._4_4_;
          uVar74 = local_448.Rotation.ZW.m128d_f64[1]._0_4_;
          uVar75 = local_448.Rotation.ZW.m128d_f64[1]._4_4_;
          uVar76 = local_448.Translation.XY.m128d_f64[0]._0_4_;
          uVar77 = local_448.Translation.XY.m128d_f64[0]._4_4_;
          uVar78 = local_448.Translation.XY.m128d_f64[1]._0_4_;
          uVar79 = local_448.Translation.XY.m128d_f64[1]._4_4_;
          uVar85 = local_448.Scale3D.XY.m128d_f64[0]._0_4_;
          uVar86 = local_448.Scale3D.XY.m128d_f64[0]._4_4_;
          uVar87 = local_448.Scale3D.XY.m128d_f64[1]._0_4_;
          uVar88 = local_448.Scale3D.XY.m128d_f64[1]._4_4_;
          uVar89 = local_448.Scale3D.ZW.m128d_f64[0]._0_4_;
          uVar90 = local_448.Scale3D.ZW.m128d_f64[0]._4_4_;
          uVar91 = local_448.Scale3D.ZW.m128d_f64[1]._0_4_;
          uVar92 = local_448.Scale3D.ZW.m128d_f64[1]._4_4_;
          dVar67 = local_448.Rotation.XY.m128d_f64[0];
          dVar73 = local_448.Rotation.XY.m128d_f64[1];
          dVar80 = local_448.Translation.ZW.m128d_f64[0];
          dVar83 = local_448.Translation.ZW.m128d_f64[1];
        }
        uVar18 = 0;
        if ((int)uVar25 < *(int *)(uVar13 + 8)) {
          uVar18 = ~uVar25 >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        lVar23 = *(longlong *)uVar13;
        lVar33 = (longlong)(int)uVar25 * 0x60;
        *(double *)(lVar33 + lVar23) = dVar67;
        ((double *)(lVar33 + lVar23))[1] = dVar73;
        puVar2 = (undefined4 *)(lVar33 + 0x10 + lVar23);
        *puVar2 = uVar63;
        puVar2[1] = uVar64;
        puVar2[2] = uVar74;
        puVar2[3] = uVar75;
        puVar2 = (undefined4 *)(lVar33 + 0x20 + lVar23);
        *puVar2 = uVar76;
        puVar2[1] = uVar77;
        puVar2[2] = uVar78;
        puVar2[3] = uVar79;
        pdVar3 = (double *)(lVar33 + 0x30 + lVar23);
        *pdVar3 = dVar80;
        pdVar3[1] = dVar83;
        puVar2 = (undefined4 *)(lVar33 + 0x40 + lVar23);
        *puVar2 = uVar85;
        puVar2[1] = uVar86;
        puVar2[2] = uVar87;
        puVar2[3] = uVar88;
        puVar2 = (undefined4 *)(lVar33 + 0x50 + lVar23);
        *puVar2 = uVar89;
        puVar2[1] = uVar90;
        puVar2[2] = uVar91;
        puVar2[3] = uVar92;
      }
      pFVar29 = (FName *)local_700._0_8_;
    }
    FVar32.Data = FVar32.Data + 1;
    uVar18 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    uVar30 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    uVar82 = _UNK_15061cc88;
    uVar84 = _UNK_15061cc8c;
  } while( true );
}

// GetPrivateStaticClass @ 14cfe5ad0

UClass * __cdecl UDEPRECATED_AppleARKitPoseTrackingLiveLinkRemapAsset::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDEPRECATED_AppleARKitPoseTrackingLiveLinkRemapAsset.InnerSingleton
      == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AppleARKitPoseTrackingLiveLink",L"AppleARKitPoseTrackingLiveLinkRemapAsset"
               ,&Z_Registration_Info_UClass_UDEPRECATED_AppleARKitPoseTrackingLiveLinkRemapAsset.
                 InnerSingleton,
               StaticRegisterNativesUDEPRECATED_AppleARKitPoseTrackingLiveLinkRemapAsset,0xa8,8,
               CLASS_Intrinsic|CLASS_Deprecated|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UDEPRECATED_AppleARKitPoseTrackingLiveLinkRemapAsset>,
               InternalVTableHelperCtorCaller<UDEPRECATED_AppleARKitPoseTrackingLiveLinkRemapAsset>,
               local_res8,ULiveLinkRetargetAsset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDEPRECATED_AppleARKitPoseTrackingLiveLinkRemapAsset.
         InnerSingleton;
}

// GetRemappedBoneName @ 14cfe5d80

FName __thiscall
UDEPRECATED_AppleARKitPoseTrackingLiveLinkRemapAsset::GetRemappedBoneName
          (UDEPRECATED_AppleARKitPoseTrackingLiveLinkRemapAsset *this,FName param_1)

{
  FName *pFVar1;
  FName in_R8;
  
  pFVar1 = TMapBase<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>::
           Find((TMapBase<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>
                 *)&this->AppleARKitBoneNamesToMeshBoneNames,in_R8);
  if (pFVar1 != (FName *)0x0) {
    *(FName *)param_1 = *pFVar1;
    return param_1;
  }
  *(undefined8 *)param_1 = 0;
  return param_1;
}

// StaticRegisterNativesUDEPRECATED_AppleARKitPoseTrackingLiveLinkRemapAsset @ 14cfe67b0

void __cdecl
UDEPRECATED_AppleARKitPoseTrackingLiveLinkRemapAsset::
StaticRegisterNativesUDEPRECATED_AppleARKitPoseTrackingLiveLinkRemapAsset(void)

{
  return;
}

