// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SignalProcessing
// Functions: 107

// DefaultSettings'' @ 140f8a040

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl `dynamic_initializer_for_'Audio::FPlateReverbFast::DefaultSettings__(void)

{
  Audio::FEarlyReflectionsFastSettings::FEarlyReflectionsFastSettings
            (&Audio::FPlateReverbFast::DefaultSettings.EarlyReflections);
  Audio::FPlateReverbFast::DefaultSettings.LateReflections.LateDelayMsec =
       ___xmm_3f0000003f0000000000000000000000;
  Audio::FPlateReverbFast::DefaultSettings.LateReflections.LateGainDB = _UNK_150d56604;
  Audio::FPlateReverbFast::DefaultSettings.LateReflections.Bandwidth = _UNK_150d56608;
  Audio::FPlateReverbFast::DefaultSettings.LateReflections.Diffusion = _UNK_150d5660c;
  Audio::FPlateReverbFast::DefaultSettings.LateReflections.Dampening = 0.5;
  Audio::FPlateReverbFast::DefaultSettings.LateReflections.Decay = 0.5;
  Audio::FPlateReverbFast::DefaultSettings.LateReflections.Density = 0.5;
  Audio::FPlateReverbFast::DefaultSettings.bEnableEarlyReflections = true;
  Audio::FPlateReverbFast::DefaultSettings.bEnableLateReflections = true;
  Audio::FPlateReverbFast::DefaultSettings.QuadBehavior = StereoOnly;
  return;
}

// ScaleDegreeSetMap'' @ 140f8a0a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl `dynamic_initializer_for_'Audio::FMidiNoteQuantizer::ScaleDegreeSetMap__(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  Scale *pSVar5;
  ScaleDegreeSet *pSVar6;
  Scale *pSVar7;
  ScaleDegreeSet *pSVar8;
  Scale *pSVar9;
  ScaleDegreeSet *pSVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ForAnyElementType FVar13;
  longlong lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined1 auStackY_1038 [32];
  initializer_list<TPairInitializer<Audio::EMusicalScale::Scale_const_&,Audio::ScaleDegreeSet_const_&>_>
  local_ff8;
  undefined4 local_fe8;
  undefined4 local_fe4;
  undefined4 local_fe0;
  undefined4 local_fdc;
  undefined4 local_fd8;
  undefined4 local_fd4;
  undefined4 local_fd0;
  undefined4 local_fcc;
  undefined4 local_fc8;
  undefined4 local_fc4;
  undefined4 local_fc0;
  undefined4 local_fbc;
  undefined4 local_fb8;
  undefined4 local_fb4;
  undefined4 local_fb0;
  undefined4 local_fac;
  undefined4 local_fa8;
  undefined4 local_fa4;
  undefined4 local_fa0;
  undefined4 local_f9c;
  undefined4 local_f98;
  undefined4 local_f94;
  undefined4 local_f90;
  undefined4 local_f8c;
  undefined4 local_f88;
  undefined4 local_f84;
  undefined4 local_f80;
  undefined4 local_f7c;
  undefined4 local_f78 [2];
  ForAnyElementType local_f70;
  int local_f68;
  int local_f64;
  ForAnyElementType local_f60;
  int local_f58;
  int local_f54;
  ForAnyElementType local_f50;
  int local_f48;
  int local_f44;
  ForAnyElementType local_f40;
  int local_f38;
  int local_f34;
  ForAnyElementType local_f30;
  int local_f28;
  int local_f24;
  ForAnyElementType local_f20;
  int local_f18;
  int local_f14 [3];
  ForAnyElementType local_f08;
  int local_f00;
  int local_efc;
  ForAnyElementType local_ef8;
  int local_ef0;
  int local_eec;
  ForAnyElementType local_ee8;
  int local_ee0;
  int local_edc;
  ForAnyElementType local_ed8;
  int local_ed0;
  int local_ecc;
  ForAnyElementType local_ec8;
  int local_ec0;
  int local_ebc;
  ForAnyElementType local_eb8;
  int local_eb0;
  int local_eac;
  ForAnyElementType local_ea8;
  int local_ea0;
  int local_e9c;
  ForAnyElementType local_e98;
  int local_e90;
  int local_e8c;
  ForAnyElementType local_e88;
  int local_e80;
  int local_e7c;
  ForAnyElementType local_e78;
  int local_e70;
  int local_e6c;
  ForAnyElementType local_e68;
  int local_e60;
  int local_e5c;
  ForAnyElementType local_e58;
  int local_e50;
  int local_e4c;
  ForAnyElementType local_e48;
  int local_e40;
  int local_e3c;
  ForAnyElementType local_e38;
  int local_e30;
  int local_e2c;
  ForAnyElementType local_e28;
  int local_e20;
  int local_e1c;
  ForAnyElementType local_e18;
  int local_e10;
  int local_e0c;
  ForAnyElementType local_e08;
  int local_e00;
  int local_dfc;
  ForAnyElementType local_df8;
  int local_df0;
  int local_dec;
  ScaleDegreeSet local_de8;
  ForAnyElementType local_dc8;
  int local_dc0;
  int local_dbc;
  ForAnyElementType local_db8;
  int local_db0;
  int local_dac;
  ForAnyElementType local_da8;
  int local_da0;
  int local_d9c;
  ForAnyElementType local_d98;
  int local_d90;
  int local_d8c;
  ForAnyElementType local_d88;
  int local_d80;
  int local_d7c;
  ForAnyElementType local_d78;
  int local_d70;
  int local_d6c;
  ForAnyElementType local_d68;
  int local_d60;
  int local_d5c;
  ForAnyElementType local_d58;
  int local_d50;
  int local_d4c;
  ForAnyElementType local_d48;
  int local_d40;
  int local_d3c;
  ForAnyElementType local_d38;
  int local_d30;
  int local_d2c;
  TArray<float,TSizedDefaultAllocator<32>_> local_d28;
  TArray<float,TSizedDefaultAllocator<32>_> local_d18;
  TArray<float,TSizedDefaultAllocator<32>_> local_d08;
  TArray<float,TSizedDefaultAllocator<32>_> local_cf8;
  TArray<float,TSizedDefaultAllocator<32>_> local_ce8;
  TArray<float,TSizedDefaultAllocator<32>_> local_cd8;
  TArray<float,TSizedDefaultAllocator<32>_> local_cc8;
  TArray<float,TSizedDefaultAllocator<32>_> local_cb8;
  TArray<float,TSizedDefaultAllocator<32>_> local_ca8;
  TArray<float,TSizedDefaultAllocator<32>_> local_c98;
  TArray<float,TSizedDefaultAllocator<32>_> local_c88;
  TArray<float,TSizedDefaultAllocator<32>_> local_c78;
  TArray<float,TSizedDefaultAllocator<32>_> local_c68;
  TArray<float,TSizedDefaultAllocator<32>_> local_c58;
  TArray<float,TSizedDefaultAllocator<32>_> local_c48;
  TArray<float,TSizedDefaultAllocator<32>_> local_c38;
  TArray<float,TSizedDefaultAllocator<32>_> local_c28;
  TArray<float,TSizedDefaultAllocator<32>_> local_c18;
  TArray<float,TSizedDefaultAllocator<32>_> local_c08;
  TArray<float,TSizedDefaultAllocator<32>_> local_bf8;
  TArray<float,TSizedDefaultAllocator<32>_> local_be8;
  TArray<float,TSizedDefaultAllocator<32>_> local_bd8;
  TArray<float,TSizedDefaultAllocator<32>_> local_bc8;
  TArray<float,TSizedDefaultAllocator<32>_> local_bb8;
  TArray<float,TSizedDefaultAllocator<32>_> local_ba8;
  TArray<float,TSizedDefaultAllocator<32>_> local_b98;
  TArray<float,TSizedDefaultAllocator<32>_> local_b88;
  TArray<float,TSizedDefaultAllocator<32>_> local_b78;
  TArray<float,TSizedDefaultAllocator<32>_> local_b68;
  TArray<float,TSizedDefaultAllocator<32>_> local_b58;
  TArray<float,TSizedDefaultAllocator<32>_> local_b48;
  TArray<float,TSizedDefaultAllocator<32>_> local_b38;
  TArray<float,TSizedDefaultAllocator<32>_> local_b28;
  TArray<float,TSizedDefaultAllocator<32>_> local_b18;
  TArray<float,TSizedDefaultAllocator<32>_> local_b08;
  TArray<float,TSizedDefaultAllocator<32>_> local_af8;
  TArray<float,TSizedDefaultAllocator<32>_> local_ae8;
  TArray<float,TSizedDefaultAllocator<32>_> local_ad8;
  TArray<float,TSizedDefaultAllocator<32>_> local_ac8;
  TArray<float,TSizedDefaultAllocator<32>_> local_ab8;
  TArray<float,TSizedDefaultAllocator<32>_> local_aa8;
  TArray<float,TSizedDefaultAllocator<32>_> local_a98;
  ScaleDegreeSet local_a88;
  ScaleDegreeSet local_a68;
  ScaleDegreeSet local_a48;
  ScaleDegreeSet local_a28;
  ScaleDegreeSet local_a08;
  ScaleDegreeSet local_9e8;
  ScaleDegreeSet local_9c8;
  ScaleDegreeSet local_9a8;
  ScaleDegreeSet local_988;
  ScaleDegreeSet local_968;
  ScaleDegreeSet local_948;
  ScaleDegreeSet local_928;
  ScaleDegreeSet local_908;
  ScaleDegreeSet local_8e8;
  ScaleDegreeSet local_8c8;
  ScaleDegreeSet local_8a8;
  ScaleDegreeSet local_888;
  ScaleDegreeSet local_868;
  ScaleDegreeSet local_848;
  ScaleDegreeSet local_828;
  ScaleDegreeSet local_808;
  undefined4 local_7e8;
  undefined4 uStack_7e4;
  undefined4 local_7e0;
  TPairInitializer<Audio::EMusicalScale::Scale_const_&,Audio::ScaleDegreeSet_const_&> local_7d8;
  undefined4 local_7c8;
  undefined4 local_7c4;
  undefined4 local_7c0;
  undefined1 local_7bc [12];
  undefined8 uStack_7b0;
  undefined4 local_7a8;
  undefined4 local_7a4;
  undefined4 local_7a0;
  undefined1 local_79c [12];
  ScaleDegreeSet *pSStack_790;
  undefined4 local_788;
  undefined4 local_784;
  undefined4 local_780;
  undefined1 local_77c [12];
  ScaleDegreeSet *pSStack_770;
  undefined4 local_768;
  undefined4 local_764;
  undefined4 local_760;
  undefined1 local_75c [12];
  undefined8 uStack_750;
  undefined4 local_748;
  undefined4 local_744;
  undefined4 local_740;
  TPairInitializer<Audio::EMusicalScale::Scale_const_&,Audio::ScaleDegreeSet_const_&> local_73c;
  undefined4 local_728;
  undefined4 uStack_724;
  undefined4 local_720;
  undefined4 local_708;
  undefined4 uStack_704;
  undefined4 local_700;
  undefined4 local_6e8;
  undefined4 uStack_6e4;
  undefined4 local_6e0;
  undefined4 local_6c8;
  undefined4 uStack_6c4;
  undefined4 local_6c0;
  undefined4 local_6a8;
  undefined4 uStack_6a4;
  undefined4 local_6a0;
  undefined4 local_688;
  undefined4 uStack_684;
  undefined4 local_680;
  undefined4 local_668;
  undefined4 uStack_664;
  undefined4 local_660;
  undefined4 local_648;
  undefined4 uStack_644;
  undefined4 local_640;
  undefined4 local_628;
  undefined4 uStack_624;
  undefined4 local_620;
  undefined4 local_608;
  undefined4 uStack_604;
  undefined4 local_600;
  undefined4 local_5e8;
  undefined4 uStack_5e4;
  undefined4 local_5e0;
  TPairInitializer<Audio::EMusicalScale::Scale_const_&,Audio::ScaleDegreeSet_const_&> local_5d8;
  undefined4 local_5c8;
  undefined4 local_5c4;
  undefined4 local_5c0;
  undefined1 local_5bc [12];
  undefined8 uStack_5b0;
  undefined4 local_5a8;
  undefined1 local_5a4 [12];
  ScaleDegreeSet *pSStack_598;
  TPairInitializer<Audio::EMusicalScale::Scale_const_&,Audio::ScaleDegreeSet_const_&> local_590;
  TPairInitializer<Audio::EMusicalScale::Scale_const_&,Audio::ScaleDegreeSet_const_&> local_580;
  TPairInitializer<Audio::EMusicalScale::Scale_const_&,Audio::ScaleDegreeSet_const_&> local_570;
  TPairInitializer<Audio::EMusicalScale::Scale_const_&,Audio::ScaleDegreeSet_const_&> local_560;
  TPairInitializer<Audio::EMusicalScale::Scale_const_&,Audio::ScaleDegreeSet_const_&> local_550;
  TPairInitializer<Audio::EMusicalScale::Scale_const_&,Audio::ScaleDegreeSet_const_&> local_540;
  TPairInitializer<Audio::EMusicalScale::Scale_const_&,Audio::ScaleDegreeSet_const_&> local_530;
  TPairInitializer<Audio::EMusicalScale::Scale_const_&,Audio::ScaleDegreeSet_const_&> local_520;
  TPairInitializer<Audio::EMusicalScale::Scale_const_&,Audio::ScaleDegreeSet_const_&> local_510;
  TPairInitializer<Audio::EMusicalScale::Scale_const_&,Audio::ScaleDegreeSet_const_&> local_500;
  undefined4 local_4f0;
  undefined4 uStack_4ec;
  undefined4 local_4d8;
  undefined4 uStack_4d4;
  undefined4 local_4c0;
  undefined4 uStack_4bc;
  undefined4 local_4a8;
  undefined4 uStack_4a4;
  undefined4 local_490;
  TPairInitializer<Audio::EMusicalScale::Scale_const_&,Audio::ScaleDegreeSet_const_&> local_488;
  undefined4 *local_478;
  ForAnyElementType *local_470;
  undefined4 *local_468;
  ForAnyElementType *local_460;
  undefined4 *local_458;
  ForAnyElementType *local_450;
  undefined4 *local_448;
  ForAnyElementType *local_440;
  undefined4 *local_438;
  ForAnyElementType *local_430;
  undefined4 *local_428;
  ForAnyElementType *local_420;
  undefined4 *local_418;
  ForAnyElementType *local_410;
  undefined4 *local_408;
  ForAnyElementType *local_400;
  undefined4 *local_3f8;
  ScaleDegreeSet *local_3f0;
  undefined4 *local_3e8;
  ScaleDegreeSet *local_3e0;
  undefined4 *local_3d8;
  ScaleDegreeSet *local_3d0;
  undefined4 *local_3c8;
  ScaleDegreeSet *local_3c0;
  undefined4 *local_3b8;
  ScaleDegreeSet *local_3b0;
  undefined4 *local_3a8;
  ScaleDegreeSet *local_3a0;
  undefined4 *local_398;
  ScaleDegreeSet *local_390;
  undefined4 *local_388;
  ScaleDegreeSet *local_380;
  undefined4 *local_378;
  ScaleDegreeSet *local_370;
  undefined4 *local_368;
  ScaleDegreeSet *local_360;
  undefined4 *local_358;
  ScaleDegreeSet *local_350;
  undefined4 *local_348;
  ScaleDegreeSet *local_340;
  undefined4 *local_338;
  ScaleDegreeSet *local_330;
  undefined4 *local_328;
  ScaleDegreeSet *local_320;
  undefined4 *local_318;
  ScaleDegreeSet *local_310;
  undefined4 *local_308;
  ScaleDegreeSet *local_300;
  undefined4 *local_2f8;
  ScaleDegreeSet *local_2f0;
  undefined4 *local_2e8;
  ScaleDegreeSet *local_2e0;
  undefined4 *local_2d8;
  ScaleDegreeSet *local_2d0;
  undefined4 *local_2c8;
  ScaleDegreeSet *local_2c0;
  undefined4 *local_2b8;
  ScaleDegreeSet *local_2b0;
  TPairInitializer<Audio::EMusicalScale::Scale_const_&,Audio::ScaleDegreeSet_const_&> local_2a8;
  undefined8 local_298;
  undefined8 uStack_290;
  TPairInitializer<Audio::EMusicalScale::Scale_const_&,Audio::ScaleDegreeSet_const_&> local_288;
  undefined8 local_278;
  undefined8 uStack_270;
  TPairInitializer<Audio::EMusicalScale::Scale_const_&,Audio::ScaleDegreeSet_const_&> local_268;
  undefined8 local_258;
  undefined8 uStack_250;
  TPairInitializer<Audio::EMusicalScale::Scale_const_&,Audio::ScaleDegreeSet_const_&> local_248 [29]
  ;
  ulonglong local_78;
  
  uVar16 = _UNK_150d5a458;
  uVar15 = ___xmm_40a00000408000004000000000000000;
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_1038;
  local_f14[1] = 0;
  local_728 = 0x40e00000;
  uStack_724 = 0x41100000;
  local_720 = 0x41300000;
  local_e68.Data = (FScriptContainerElement *)0x0;
  local_e60 = 7;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,7,0,&local_e68,7,&local_e5c);
  uVar2 = _UNK_150d5a538;
  uVar1 = ___xmm_4130000040e000004080000000000000;
  *(undefined8 *)local_e68.Data = uVar15;
  *(undefined8 *)(local_e68.Data + 8) = uVar16;
  *(ulonglong *)(local_e68.Data + 0x10) = CONCAT44(uStack_724,local_728);
  *(undefined4 *)(local_e68.Data + 0x18) = local_720;
  local_e78.Data = (FScriptContainerElement *)0x0;
  local_e70 = 4;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,4,0,&local_e78,4,&local_e6c);
  FVar13.Data = local_e68.Data;
  *(undefined8 *)local_e78.Data = uVar1;
  *(undefined8 *)(local_e78.Data + 8) = uVar2;
  lVar14 = (longlong)local_e60;
  local_de8.ScaleDegrees.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_de8.ScaleDegrees.ArrayNum = local_e60;
  if (local_e60 == 0) {
    local_de8.ScaleDegrees.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,local_e60,0,(ForAnyElementType *)&local_de8,local_e60,
               &local_de8.ScaleDegrees.ArrayMax);
    memcpy(local_de8.ScaleDegrees.AllocatorInstance.Data,FVar13.Data,lVar14 << 2);
    uVar15 = ___xmm_40a00000408000004000000000000000;
    uVar16 = _UNK_150d5a458;
  }
  FVar13.Data = local_e78.Data;
  lVar14 = (longlong)local_e70;
  local_de8.ChordTones.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_de8.ChordTones.ArrayNum = local_e70;
  if (local_e70 == 0) {
    local_de8.ChordTones.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,local_e70,0,&local_de8.ChordTones.AllocatorInstance,local_e70,
               &local_de8.ChordTones.ArrayMax);
    memcpy(local_de8.ChordTones.AllocatorInstance.Data,FVar13.Data,lVar14 << 2);
    uVar15 = ___xmm_40a00000408000004000000000000000;
    uVar16 = _UNK_150d5a458;
  }
  local_488.Key = (Scale *)(local_f14 + 1);
  local_fe8 = 4;
  local_488.Value = &local_de8;
  local_708 = 0x40e00000;
  uStack_704 = 0x41100000;
  local_700 = 0x41200000;
  local_e88.Data = (FScriptContainerElement *)0x0;
  local_e80 = 7;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,7,0,&local_e88,7,&local_e7c);
  *(undefined8 *)local_e88.Data = uVar15;
  *(undefined8 *)(local_e88.Data + 8) = uVar16;
  uVar16 = _UNK_150d5a4f8;
  uVar15 = ___xmm_4120000040e000004080000000000000;
  *(ulonglong *)(local_e88.Data + 0x10) = CONCAT44(uStack_704,local_708);
  *(undefined4 *)(local_e88.Data + 0x18) = local_700;
  local_e98.Data = (FScriptContainerElement *)0x0;
  local_e90 = 4;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,4,0,&local_e98,4,&local_e8c);
  FVar13.Data = local_e88.Data;
  *(undefined8 *)local_e98.Data = uVar15;
  *(undefined8 *)(local_e98.Data + 8) = uVar16;
  lVar14 = (longlong)local_e80;
  local_dc8.Data = (FScriptContainerElement *)0x0;
  local_dc0 = local_e80;
  if (local_e80 == 0) {
    local_dbc = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,local_e80,0,&local_dc8,local_e80,&local_dbc);
    memcpy(local_dc8.Data,FVar13.Data,lVar14 << 2);
  }
  FVar13.Data = local_e98.Data;
  lVar14 = (longlong)local_e90;
  local_db8.Data = (FScriptContainerElement *)0x0;
  local_db0 = local_e90;
  if (local_e90 == 0) {
    local_dac = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,local_e90,0,&local_db8,local_e90,&local_dac);
    memcpy(local_db8.Data,FVar13.Data,lVar14 << 2);
  }
  pSVar6 = _UNK_150d5a438;
  pSVar5 = ___xmm_40a00000404000004000000000000000;
  local_478 = &local_fe8;
  local_470 = &local_dc8;
  local_fe4 = 1;
  local_6e8 = 0x40e00000;
  uStack_6e4 = 0x41100000;
  local_6e0 = 0x41200000;
  local_ea8.Data = (FScriptContainerElement *)0x0;
  local_ea0 = 7;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,7,0,&local_ea8,7,&local_e9c);
  pSVar10 = _UNK_150d5a4e8;
  pSVar9 = ___xmm_4120000040e000004040000000000000;
  *(Scale **)local_ea8.Data = pSVar5;
  *(ScaleDegreeSet **)(local_ea8.Data + 8) = pSVar6;
  *(ulonglong *)(local_ea8.Data + 0x10) = CONCAT44(uStack_6e4,local_6e8);
  *(undefined4 *)(local_ea8.Data + 0x18) = local_6e0;
  local_e58.Data = (FScriptContainerElement *)0x0;
  local_e50 = 4;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,4,0,&local_e58,4,&local_e4c);
  FVar13.Data = local_ea8.Data;
  *(Scale **)local_e58.Data = pSVar9;
  *(ScaleDegreeSet **)(local_e58.Data + 8) = pSVar10;
  lVar14 = (longlong)local_ea0;
  local_da8.Data = (FScriptContainerElement *)0x0;
  local_da0 = local_ea0;
  if (local_ea0 == 0) {
    local_d9c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,local_ea0,0,&local_da8,local_ea0,&local_d9c);
    memcpy(local_da8.Data,FVar13.Data,lVar14 << 2);
  }
  FVar13.Data = local_e58.Data;
  lVar14 = (longlong)local_e50;
  local_d98.Data = (FScriptContainerElement *)0x0;
  local_d90 = local_e50;
  if (local_e50 == 0) {
    local_d8c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,local_e50,0,&local_d98,local_e50,&local_d8c);
    memcpy(local_d98.Data,FVar13.Data,lVar14 << 2);
  }
  uVar16 = _UNK_150d5a428;
  uVar15 = ___xmm_40a00000404000003f80000000000000;
  local_468 = &local_fe4;
  local_460 = &local_da8;
  local_fe0 = 6;
  local_6c8 = 0x40c00000;
  uStack_6c4 = 0x41000000;
  local_6c0 = 0x41200000;
  local_ec8.Data = (FScriptContainerElement *)0x0;
  local_ec0 = 7;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,7,0,&local_ec8,7,&local_ebc);
  *(undefined8 *)local_ec8.Data = uVar15;
  *(undefined8 *)(local_ec8.Data + 8) = uVar16;
  pSVar8 = _UNK_150d5a4c8;
  pSVar7 = ___xmm_4120000040c000004040000000000000;
  *(ulonglong *)(local_ec8.Data + 0x10) = CONCAT44(uStack_6c4,local_6c8);
  *(undefined4 *)(local_ec8.Data + 0x18) = local_6c0;
  local_ed8.Data = (FScriptContainerElement *)0x0;
  local_ed0 = 4;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,4,0,&local_ed8,4,&local_ecc);
  FVar13.Data = local_ec8.Data;
  *(Scale **)local_ed8.Data = pSVar7;
  *(ScaleDegreeSet **)(local_ed8.Data + 8) = pSVar8;
  lVar14 = (longlong)local_ec0;
  local_d88.Data = (FScriptContainerElement *)0x0;
  local_d80 = local_ec0;
  if (local_ec0 == 0) {
    local_d7c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,local_ec0,0,&local_d88,local_ec0,&local_d7c);
    memcpy(local_d88.Data,FVar13.Data,lVar14 << 2);
  }
  FVar13.Data = local_ed8.Data;
  lVar14 = (longlong)local_ed0;
  local_d78.Data = (FScriptContainerElement *)0x0;
  local_d70 = local_ed0;
  if (local_ed0 == 0) {
    local_d6c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,local_ed0,0,&local_d78,local_ed0,&local_d6c);
    memcpy(local_d78.Data,FVar13.Data,lVar14 << 2);
  }
  uVar16 = _UNK_150d5a558;
  uVar15 = ___xmm_41300000411000004100000040c00000;
  local_458 = &local_fe0;
  local_450 = &local_d88;
  local_fdc = 0x18;
  local_f70.Data = (FScriptContainerElement *)0x0;
  local_f68 = 8;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,8,0,&local_f70,8,&local_f64);
  *(Scale **)local_f70.Data = pSVar5;
  *(ScaleDegreeSet **)(local_f70.Data + 8) = pSVar6;
  *(undefined8 *)(local_f70.Data + 0x10) = uVar15;
  *(undefined8 *)(local_f70.Data + 0x18) = uVar16;
  uVar16 = _UNK_150d5a4b8;
  uVar15 = ___xmm_4110000040c000004040000000000000;
  local_ee8.Data = (FScriptContainerElement *)0x0;
  local_ee0 = 4;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,4,0,&local_ee8,4,&local_edc);
  FVar13.Data = local_f70.Data;
  *(undefined8 *)local_ee8.Data = uVar15;
  *(undefined8 *)(local_ee8.Data + 8) = uVar16;
  lVar14 = (longlong)local_f68;
  local_d68.Data = (FScriptContainerElement *)0x0;
  local_d60 = local_f68;
  if (local_f68 == 0) {
    local_d5c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,local_f68,0,&local_d68,local_f68,&local_d5c);
    memcpy(local_d68.Data,FVar13.Data,lVar14 << 2);
  }
  FVar13.Data = local_ee8.Data;
  lVar14 = (longlong)local_ee0;
  local_d58.Data = (FScriptContainerElement *)0x0;
  local_d50 = local_ee0;
  if (local_ee0 == 0) {
    local_d4c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,local_ee0,0,&local_d58,local_ee0,&local_d4c);
    memcpy(local_d58.Data,FVar13.Data,lVar14 << 2);
  }
  uVar16 = _UNK_150d5a488;
  uVar15 = ___xmm_40e00000408000004000000000000000;
  local_448 = &local_fdc;
  local_440 = &local_d68;
  local_fd8 = 10;
  local_490 = 0x41100000;
  local_ef8.Data = (FScriptContainerElement *)0x0;
  local_ef0 = 5;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,5,0,&local_ef8,5,&local_eec);
  local_7e8 = 0;
  uStack_7e4 = 0x40800000;
  *(undefined8 *)local_ef8.Data = uVar15;
  *(undefined8 *)(local_ef8.Data + 8) = uVar16;
  *(undefined4 *)(local_ef8.Data + 0x10) = local_490;
  local_7e0 = 0x40e00000;
  local_f08.Data = (FScriptContainerElement *)0x0;
  local_f00 = 3;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,3,0,&local_f08,3,&local_efc);
  FVar13.Data = local_ef8.Data;
  *(ulonglong *)local_f08.Data = CONCAT44(uStack_7e4,local_7e8);
  *(undefined4 *)(local_f08.Data + 8) = local_7e0;
  lVar14 = (longlong)local_ef0;
  local_d48.Data = (FScriptContainerElement *)0x0;
  local_d40 = local_ef0;
  if (local_ef0 == 0) {
    local_d3c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,local_ef0,0,&local_d48,local_ef0,&local_d3c);
    memcpy(local_d48.Data,FVar13.Data,lVar14 << 2);
  }
  FVar13.Data = local_f08.Data;
  lVar14 = (longlong)local_f00;
  local_d38.Data = (FScriptContainerElement *)0x0;
  local_d30 = local_f00;
  if (local_f00 == 0) {
    local_d2c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,local_f00,0,&local_d38,local_f00,&local_d2c);
    memcpy(local_d38.Data,FVar13.Data,lVar14 << 2);
  }
  uVar16 = _UNK_15076c0d8;
  uVar15 = ___xmm_40c00000408000004000000000000000;
  local_438 = &local_fd8;
  local_430 = &local_d48;
  local_fd4 = 3;
  local_6a8 = 0x40e00000;
  uStack_6a4 = 0x41100000;
  local_6a0 = 0x41300000;
  local_eb8.Data = (FScriptContainerElement *)0x0;
  local_eb0 = 7;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,7,0,&local_eb8,7,&local_eac);
  *(undefined8 *)local_eb8.Data = uVar15;
  *(undefined8 *)(local_eb8.Data + 8) = uVar16;
  *(ulonglong *)(local_eb8.Data + 0x10) = CONCAT44(uStack_6a4,local_6a8);
  *(undefined4 *)(local_eb8.Data + 0x18) = local_6a0;
  local_f20.Data = (FScriptContainerElement *)0x0;
  local_f18 = 4;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,4,0,&local_f20,4,local_f14);
  FVar13.Data = local_eb8.Data;
  *(undefined8 *)local_f20.Data = uVar1;
  *(undefined8 *)(local_f20.Data + 8) = uVar2;
  lVar14 = (longlong)local_eb0;
  local_e48.Data = (FScriptContainerElement *)0x0;
  local_e40 = local_eb0;
  if (local_eb0 == 0) {
    local_e3c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,local_eb0,0,&local_e48,local_eb0,&local_e3c);
    memcpy(local_e48.Data,FVar13.Data,lVar14 << 2);
  }
  FVar13.Data = local_f20.Data;
  lVar14 = (longlong)local_f18;
  local_e38.Data = (FScriptContainerElement *)0x0;
  local_e30 = local_f18;
  if (local_f18 == 0) {
    local_e2c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,local_f18,0,&local_e38,local_f18,&local_e2c);
    memcpy(local_e38.Data,FVar13.Data,lVar14 << 2);
  }
  uVar4 = _UNK_150d5a568;
  uVar3 = ___xmm_41300000411000004100000040e00000;
  local_428 = &local_fd4;
  local_420 = &local_e48;
  local_fd0 = 0xd;
  local_f30.Data = (FScriptContainerElement *)0x0;
  local_f28 = 8;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,8,0,&local_f30,8,&local_f24);
  *(undefined8 *)local_f30.Data = uVar15;
  *(undefined8 *)(local_f30.Data + 8) = uVar16;
  *(undefined8 *)(local_f30.Data + 0x10) = uVar3;
  *(undefined8 *)(local_f30.Data + 0x18) = uVar4;
  local_f40.Data = (FScriptContainerElement *)0x0;
  local_f38 = 4;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,4,0,&local_f40,4,&local_f34);
  FVar13.Data = local_f30.Data;
  *(undefined8 *)local_f40.Data = uVar1;
  *(undefined8 *)(local_f40.Data + 8) = uVar2;
  lVar14 = (longlong)local_f28;
  local_e28.Data = (FScriptContainerElement *)0x0;
  local_e20 = local_f28;
  if (local_f28 == 0) {
    local_e1c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,local_f28,0,&local_e28,local_f28,&local_e1c);
    memcpy(local_e28.Data,FVar13.Data,lVar14 << 2);
  }
  FVar13.Data = local_f40.Data;
  lVar14 = (longlong)local_f38;
  local_e18.Data = (FScriptContainerElement *)0x0;
  local_e10 = local_f38;
  if (local_f38 == 0) {
    local_e0c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,local_f38,0,&local_e18,local_f38,&local_e0c);
    memcpy(local_e18.Data,FVar13.Data,lVar14 << 2);
  }
  uVar4 = _UNK_150d5a458;
  uVar3 = ___xmm_40a00000408000004000000000000000;
  local_418 = &local_fd0;
  local_410 = &local_e28;
  local_fcc = 0x11;
  local_688 = 0x40e00000;
  uStack_684 = 0x41000000;
  local_680 = 0x41300000;
  local_f50.Data = (FScriptContainerElement *)0x0;
  local_f48 = 7;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,7,0,&local_f50,7,&local_f44);
  *(undefined8 *)local_f50.Data = uVar3;
  *(undefined8 *)(local_f50.Data + 8) = uVar4;
  *(ulonglong *)(local_f50.Data + 0x10) = CONCAT44(uStack_684,local_688);
  *(undefined4 *)(local_f50.Data + 0x18) = local_680;
  local_f60.Data = (FScriptContainerElement *)0x0;
  local_f58 = 4;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,4,0,&local_f60,4,&local_f54);
  FVar13.Data = local_f50.Data;
  *(undefined8 *)local_f60.Data = uVar1;
  *(undefined8 *)(local_f60.Data + 8) = uVar2;
  lVar14 = (longlong)local_f48;
  local_e08.Data = (FScriptContainerElement *)0x0;
  local_e00 = local_f48;
  if (local_f48 == 0) {
    local_dfc = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,local_f48,0,&local_e08,local_f48,&local_dfc);
    memcpy(local_e08.Data,FVar13.Data,lVar14 << 2);
  }
  FVar13.Data = local_f60.Data;
  lVar14 = (longlong)local_f58;
  local_df8.Data = (FScriptContainerElement *)0x0;
  local_df0 = local_f58;
  if (local_f58 == 0) {
    local_dec = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,local_f58,0,&local_df8,local_f58,&local_dec);
    memcpy(local_df8.Data,FVar13.Data,lVar14 << 2);
  }
  local_408 = &local_fcc;
  local_fc8 = 0x15;
  local_400 = &local_e08;
  local_668 = 0x41000000;
  uStack_664 = 0x41100000;
  local_660 = 0x41300000;
  local_c68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c68.ArrayNum = 7;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,7,0,&local_c68.AllocatorInstance,7,&local_c68.ArrayMax);
  uVar4 = _UNK_150d5a548;
  uVar3 = ___xmm_41300000410000004080000000000000;
  *(undefined8 *)local_c68.AllocatorInstance.Data = uVar15;
  *(undefined8 *)(local_c68.AllocatorInstance.Data + 8) = uVar16;
  *(ulonglong *)(local_c68.AllocatorInstance.Data + 0x10) = CONCAT44(uStack_664,local_668);
  *(undefined4 *)(local_c68.AllocatorInstance.Data + 0x18) = local_660;
  local_bd8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_bd8.ArrayNum = 4;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,4,0,&local_bd8.AllocatorInstance,4,&local_bd8.ArrayMax);
  *(undefined8 *)local_bd8.AllocatorInstance.Data = uVar3;
  *(undefined8 *)(local_bd8.AllocatorInstance.Data + 8) = uVar4;
  Audio::ScaleDegreeSet::ScaleDegreeSet(&local_9e8,&local_c68,&local_bd8);
  uVar4 = _UNK_150d5a498;
  uVar3 = ___xmm_40e00000408000004040000000000000;
  local_3f8 = &local_fc8;
  local_3f0 = &local_9e8;
  local_fc4 = 0x17;
  local_4a8 = 0x41000000;
  uStack_4a4 = 0x41300000;
  local_c88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c88.ArrayNum = 6;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,6,0,&local_c88.AllocatorInstance,6,&local_c88.ArrayMax);
  *(undefined8 *)local_c88.AllocatorInstance.Data = uVar3;
  *(undefined8 *)(local_c88.AllocatorInstance.Data + 8) = uVar4;
  uVar4 = _UNK_150d5a548;
  uVar3 = ___xmm_41300000410000004080000000000000;
  *(ulonglong *)(local_c88.AllocatorInstance.Data + 0x10) = CONCAT44(uStack_4a4,local_4a8);
  local_c98.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c98.ArrayNum = 4;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,4,0,&local_c98.AllocatorInstance,4,&local_c98.ArrayMax);
  *(undefined8 *)local_c98.AllocatorInstance.Data = uVar3;
  *(undefined8 *)(local_c98.AllocatorInstance.Data + 8) = uVar4;
  Audio::ScaleDegreeSet::ScaleDegreeSet(&local_9c8,&local_c88,&local_c98);
  uVar4 = _UNK_150d5a468;
  uVar3 = ___xmm_40c00000408000004040000000000000;
  local_3e8 = &local_fc4;
  local_3e0 = &local_9c8;
  local_fc0 = 0x14;
  local_648 = 0x40e00000;
  uStack_644 = 0x41100000;
  local_640 = 0x41300000;
  local_ca8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_ca8.ArrayNum = 7;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,7,0,&local_ca8.AllocatorInstance,7,&local_ca8.ArrayMax);
  *(undefined8 *)local_ca8.AllocatorInstance.Data = uVar3;
  *(undefined8 *)(local_ca8.AllocatorInstance.Data + 8) = uVar4;
  *(ulonglong *)(local_ca8.AllocatorInstance.Data + 0x10) = CONCAT44(uStack_644,local_648);
  *(undefined4 *)(local_ca8.AllocatorInstance.Data + 0x18) = local_640;
  local_cb8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_cb8.ArrayNum = 4;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,4,0,&local_cb8.AllocatorInstance,4,&local_cb8.ArrayMax);
  *(undefined8 *)local_cb8.AllocatorInstance.Data = uVar1;
  *(undefined8 *)(local_cb8.AllocatorInstance.Data + 8) = uVar2;
  Audio::ScaleDegreeSet::ScaleDegreeSet(&local_9a8,&local_ca8,&local_cb8);
  uVar12 = _UNK_150d5a508;
  uVar11 = ___xmm_412000004110000040e0000040c00000;
  uVar4 = _UNK_150d5a418;
  uVar3 = ___xmm_40800000404000003f80000000000000;
  local_3d8 = &local_fc0;
  local_3d0 = &local_9a8;
  local_fbc = 0x19;
  local_cc8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_cc8.ArrayNum = 8;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,8,0,&local_cc8.AllocatorInstance,8,&local_cc8.ArrayMax);
  *(undefined8 *)local_cc8.AllocatorInstance.Data = uVar3;
  *(undefined8 *)(local_cc8.AllocatorInstance.Data + 8) = uVar4;
  uVar4 = _UNK_150d5a4f8;
  uVar3 = ___xmm_4120000040e000004080000000000000;
  *(undefined8 *)(local_cc8.AllocatorInstance.Data + 0x10) = uVar11;
  *(undefined8 *)(local_cc8.AllocatorInstance.Data + 0x18) = uVar12;
  local_cd8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_cd8.ArrayNum = 4;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,4,0,&local_cd8.AllocatorInstance,4,&local_cd8.ArrayMax);
  *(undefined8 *)local_cd8.AllocatorInstance.Data = uVar3;
  *(undefined8 *)(local_cd8.AllocatorInstance.Data + 8) = uVar4;
  Audio::ScaleDegreeSet::ScaleDegreeSet(&local_988,&local_cc8,&local_cd8);
  uVar4 = _UNK_150d5a478;
  uVar3 = ___xmm_40c0000040a000004040000000000000;
  local_3c8 = &local_fbc;
  local_3c0 = &local_988;
  local_fb8 = 0xc;
  local_4c0 = 0x40e00000;
  uStack_4bc = 0x41200000;
  local_ce8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_ce8.ArrayNum = 6;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,6,0,&local_ce8.AllocatorInstance,6,&local_ce8.ArrayMax);
  *(undefined8 *)local_ce8.AllocatorInstance.Data = uVar3;
  *(undefined8 *)(local_ce8.AllocatorInstance.Data + 8) = uVar4;
  *(ulonglong *)(local_ce8.AllocatorInstance.Data + 0x10) = CONCAT44(uStack_4bc,local_4c0);
  local_cf8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_cf8.ArrayNum = 4;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,4,0,&local_cf8.AllocatorInstance,4,&local_cf8.ArrayMax);
  *(Scale **)local_cf8.AllocatorInstance.Data = pSVar9;
  *(ScaleDegreeSet **)(local_cf8.AllocatorInstance.Data + 8) = pSVar10;
  Audio::ScaleDegreeSet::ScaleDegreeSet(&local_968,&local_ce8,&local_cf8);
  uVar12 = _UNK_150d5a578;
  uVar11 = ___xmm_41300000412000004110000040e00000;
  uVar4 = _UNK_150d5a458;
  uVar3 = ___xmm_40a00000408000004000000000000000;
  local_3b8 = &local_fb8;
  local_3b0 = &local_968;
  local_fb4 = 0x10;
  local_d08.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d08.ArrayNum = 8;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,8,0,&local_d08.AllocatorInstance,8,&local_d08.ArrayMax);
  *(undefined8 *)local_d08.AllocatorInstance.Data = uVar3;
  *(undefined8 *)(local_d08.AllocatorInstance.Data + 8) = uVar4;
  *(undefined8 *)(local_d08.AllocatorInstance.Data + 0x10) = uVar11;
  *(undefined8 *)(local_d08.AllocatorInstance.Data + 0x18) = uVar12;
  local_c78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c78.ArrayNum = 4;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,4,0,&local_c78.AllocatorInstance,4,&local_c78.ArrayMax);
  *(undefined8 *)local_c78.AllocatorInstance.Data = uVar1;
  *(undefined8 *)(local_c78.AllocatorInstance.Data + 8) = uVar2;
  Audio::ScaleDegreeSet::ScaleDegreeSet(&local_948,&local_d08,&local_c78);
  uVar2 = _UNK_150d5a448;
  uVar1 = ___xmm_40a00000408000003f80000000000000;
  local_3a8 = &local_fb4;
  local_3a0 = &local_948;
  local_fb0 = 0x1c;
  local_628 = 0x40e00000;
  uStack_624 = 0x41000000;
  local_620 = 0x41200000;
  local_d28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d28.ArrayNum = 7;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,7,0,&local_d28.AllocatorInstance,7,&local_d28.ArrayMax);
  *(undefined8 *)local_d28.AllocatorInstance.Data = uVar1;
  *(undefined8 *)(local_d28.AllocatorInstance.Data + 8) = uVar2;
  uVar2 = _UNK_150d5a4f8;
  uVar1 = ___xmm_4120000040e000004080000000000000;
  *(ulonglong *)(local_d28.AllocatorInstance.Data + 0x10) = CONCAT44(uStack_624,local_628);
  *(undefined4 *)(local_d28.AllocatorInstance.Data + 0x18) = local_620;
  local_be8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_be8.ArrayNum = 4;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,4,0,&local_be8.AllocatorInstance,4,&local_be8.ArrayMax);
  *(undefined8 *)local_be8.AllocatorInstance.Data = uVar1;
  *(undefined8 *)(local_be8.AllocatorInstance.Data + 8) = uVar2;
  Audio::ScaleDegreeSet::ScaleDegreeSet(&local_928,&local_d28,&local_be8);
  local_398 = &local_fb0;
  local_fac = 0x16;
  local_390 = &local_928;
  local_608 = 0x40e00000;
  uStack_604 = 0x41100000;
  local_600 = 0x41200000;
  local_bf8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_bf8.ArrayNum = 7;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,7,0,&local_bf8.AllocatorInstance,7,&local_bf8.ArrayMax);
  *(undefined8 *)local_bf8.AllocatorInstance.Data = uVar15;
  *(undefined8 *)(local_bf8.AllocatorInstance.Data + 8) = uVar16;
  *(ulonglong *)(local_bf8.AllocatorInstance.Data + 0x10) = CONCAT44(uStack_604,local_608);
  *(undefined4 *)(local_bf8.AllocatorInstance.Data + 0x18) = local_600;
  local_c08.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c08.ArrayNum = 4;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,4,0,&local_c08.AllocatorInstance,4,&local_c08.ArrayMax);
  *(undefined8 *)local_c08.AllocatorInstance.Data = uVar1;
  *(undefined8 *)(local_c08.AllocatorInstance.Data + 8) = uVar2;
  Audio::ScaleDegreeSet::ScaleDegreeSet(&local_908,&local_bf8,&local_c08);
  uVar2 = _UNK_150d5a458;
  uVar1 = ___xmm_40a00000408000004000000000000000;
  local_388 = &local_fac;
  local_380 = &local_908;
  local_fa8 = 0x1d;
  local_5e8 = 0x40e00000;
  uStack_5e4 = 0x41000000;
  local_5e0 = 0x41200000;
  local_c18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c18.ArrayNum = 7;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,7,0,&local_c18.AllocatorInstance,7,&local_c18.ArrayMax);
  *(undefined8 *)local_c18.AllocatorInstance.Data = uVar1;
  *(undefined8 *)(local_c18.AllocatorInstance.Data + 8) = uVar2;
  uVar2 = _UNK_150d5a4f8;
  uVar1 = ___xmm_4120000040e000004080000000000000;
  *(ulonglong *)(local_c18.AllocatorInstance.Data + 0x10) = CONCAT44(uStack_5e4,local_5e8);
  *(undefined4 *)(local_c18.AllocatorInstance.Data + 0x18) = local_5e0;
  local_c28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c28.ArrayNum = 4;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,4,0,&local_c28.AllocatorInstance,4,&local_c28.ArrayMax);
  *(undefined8 *)local_c28.AllocatorInstance.Data = uVar1;
  *(undefined8 *)(local_c28.AllocatorInstance.Data + 8) = uVar2;
  Audio::ScaleDegreeSet::ScaleDegreeSet(&local_8e8,&local_c18,&local_c28);
  local_378 = &local_fa8;
  local_fa4 = 8;
  local_370 = &local_8e8;
  local_4d8 = 0x41000000;
  uStack_4d4 = 0x41200000;
  local_c38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c38.ArrayNum = 6;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,6,0,&local_c38.AllocatorInstance,6,&local_c38.ArrayMax);
  uVar2 = _UNK_150d5a4d8;
  uVar1 = ___xmm_4120000040c000004080000000000000;
  *(undefined8 *)local_c38.AllocatorInstance.Data = uVar15;
  *(undefined8 *)(local_c38.AllocatorInstance.Data + 8) = uVar16;
  *(ulonglong *)(local_c38.AllocatorInstance.Data + 0x10) = CONCAT44(uStack_4d4,local_4d8);
  local_c48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c48.ArrayNum = 4;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,4,0,&local_c48.AllocatorInstance,4,&local_c48.ArrayMax);
  *(undefined8 *)local_c48.AllocatorInstance.Data = uVar1;
  *(undefined8 *)(local_c48.AllocatorInstance.Data + 8) = uVar2;
  Audio::ScaleDegreeSet::ScaleDegreeSet(&local_8c8,&local_c38,&local_c48);
  uVar12 = _UNK_150d5a588;
  uVar11 = ___xmm_41300000412000004110000041000000;
  uVar4 = _DAT_15076c108;
  uVar3 = ___xmm_40e0000040c0000040a0000040800000;
  uVar2 = _UNK_15076be08;
  uVar1 = ___xmm_40400000400000003f80000000000000;
  local_368 = &local_fa4;
  local_360 = &local_8c8;
  local_fa0 = 7;
  local_c58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c58.ArrayNum = 0xc;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,0xc,0,&local_c58.AllocatorInstance,0xc,&local_c58.ArrayMax);
  local_4f0 = 0x41000000;
  uStack_4ec = 0x41200000;
  *(undefined8 *)local_c58.AllocatorInstance.Data = uVar1;
  *(undefined8 *)(local_c58.AllocatorInstance.Data + 8) = uVar2;
  *(undefined8 *)(local_c58.AllocatorInstance.Data + 0x10) = uVar3;
  *(undefined8 *)(local_c58.AllocatorInstance.Data + 0x18) = uVar4;
  *(undefined8 *)(local_c58.AllocatorInstance.Data + 0x20) = uVar11;
  *(undefined8 *)(local_c58.AllocatorInstance.Data + 0x28) = uVar12;
  local_d18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d18.ArrayNum = 6;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,6,0,&local_d18.AllocatorInstance,6,&local_d18.ArrayMax);
  *(undefined8 *)local_d18.AllocatorInstance.Data = uVar15;
  *(undefined8 *)(local_d18.AllocatorInstance.Data + 8) = uVar16;
  *(ulonglong *)(local_d18.AllocatorInstance.Data + 0x10) = CONCAT44(uStack_4ec,local_4f0);
  Audio::ScaleDegreeSet::ScaleDegreeSet(&local_8a8,&local_c58,&local_d18);
  local_358 = &local_fa0;
  local_350 = &local_8a8;
  local_f9c = 9;
  local_ff8._First =
       (TPairInitializer<Audio::EMusicalScale::Scale_const_&,Audio::ScaleDegreeSet_const_&> *)
       (local_75c + 4);
  local_748 = 0x40c00000;
  local_ff8._Last = &local_73c;
  local_744 = 0x41000000;
  local_75c._4_8_ = ___xmm_40800000404000003f80000000000000;
  uStack_750 = _UNK_150d5a418;
  local_740 = 0x41200000;
  TArray<float,TSizedDefaultAllocator<32>_>::TArray<float,TSizedDefaultAllocator<32>_>
            (&local_bb8,(initializer_list<float> *)&local_ff8);
  local_ff8._First =
       (TPairInitializer<Audio::EMusicalScale::Scale_const_&,Audio::ScaleDegreeSet_const_&> *)
       (local_5a4 + 4);
  local_ff8._Last = &local_590;
  local_5a4._4_8_ = ___xmm_4120000040c000004040000000000000;
  pSStack_598 = _UNK_150d5a4c8;
  TArray<float,TSizedDefaultAllocator<32>_>::TArray<float,TSizedDefaultAllocator<32>_>
            (&local_bc8,(initializer_list<float> *)&local_ff8);
  Audio::ScaleDegreeSet::ScaleDegreeSet(&local_888,&local_bb8,&local_bc8);
  local_348 = &local_f9c;
  local_340 = &local_888;
  local_f98 = 0xb;
  local_ff8._First =
       (TPairInitializer<Audio::EMusicalScale::Scale_const_&,Audio::ScaleDegreeSet_const_&> *)
       (local_5bc + 4);
  local_5a8 = 0x41200000;
  local_ff8._Last =
       (TPairInitializer<Audio::EMusicalScale::Scale_const_&,Audio::ScaleDegreeSet_const_&> *)
       local_5a4;
  local_5bc._4_8_ = ___xmm_40e0000040a000004040000000000000;
  uStack_5b0 = _UNK_150d5a4a8;
  TArray<float,TSizedDefaultAllocator<32>_>::TArray<float,TSizedDefaultAllocator<32>_>
            (&local_a98,(initializer_list<float> *)&local_ff8);
  local_ff8._First = &local_520;
  local_ff8._Last = &local_510;
  local_520.Key = pSVar9;
  local_520.Value = pSVar10;
  TArray<float,TSizedDefaultAllocator<32>_>::TArray<float,TSizedDefaultAllocator<32>_>
            (&local_aa8,(initializer_list<float> *)&local_ff8);
  Audio::ScaleDegreeSet::ScaleDegreeSet(&local_868,&local_a98,&local_aa8);
  local_338 = &local_f98;
  local_330 = &local_868;
  local_f94 = 0xe;
  local_ff8._First = &local_2a8;
  local_ff8._Last = &local_288;
  local_2a8.Key = pSVar5;
  local_2a8.Value = pSVar6;
  local_298 = ___xmm_41300000411000004100000040e00000;
  uStack_290 = _UNK_150d5a568;
  TArray<float,TSizedDefaultAllocator<32>_>::TArray<float,TSizedDefaultAllocator<32>_>
            (&local_ab8,(initializer_list<float> *)&local_ff8);
  local_ff8._First = &local_530;
  local_ff8._Last = &local_520;
  local_530.Key = pSVar9;
  local_530.Value = pSVar10;
  TArray<float,TSizedDefaultAllocator<32>_>::TArray<float,TSizedDefaultAllocator<32>_>
            (&local_ac8,(initializer_list<float> *)&local_ff8);
  Audio::ScaleDegreeSet::ScaleDegreeSet(&local_848,&local_ab8,&local_ac8);
  local_328 = &local_f94;
  local_320 = &local_848;
  local_ff8._First = &local_5d8;
  local_f90 = 0x13;
  local_ff8._Last =
       (TPairInitializer<Audio::EMusicalScale::Scale_const_&,Audio::ScaleDegreeSet_const_&> *)
       local_5bc;
  local_5c8 = 0x40e00000;
  local_5d8.Key = pSVar5;
  local_5d8.Value = pSVar6;
  local_5c4 = 0x41100000;
  local_5c0 = 0x41300000;
  TArray<float,TSizedDefaultAllocator<32>_>::TArray<float,TSizedDefaultAllocator<32>_>
            (&local_ad8,(initializer_list<float> *)&local_ff8);
  local_ff8._First = &local_540;
  local_ff8._Last = &local_530;
  local_540.Key = ___xmm_4130000040e000004040000000000000;
  local_540.Value = _UNK_150d5a528;
  TArray<float,TSizedDefaultAllocator<32>_>::TArray<float,TSizedDefaultAllocator<32>_>
            (&local_ae8,(initializer_list<float> *)&local_ff8);
  Audio::ScaleDegreeSet::ScaleDegreeSet(&local_828,&local_ad8,&local_ae8);
  local_318 = &local_f90;
  local_310 = &local_828;
  local_f8c = 0xf;
  local_ff8._First = &local_288;
  local_ff8._Last = &local_268;
  local_288.Key = pSVar5;
  local_288.Value = pSVar6;
  local_278 = ___xmm_41300000411000004100000040e00000;
  uStack_270 = _UNK_150d5a568;
  TArray<float,TSizedDefaultAllocator<32>_>::TArray<float,TSizedDefaultAllocator<32>_>
            (&local_af8,(initializer_list<float> *)&local_ff8);
  local_ff8._First = &local_550;
  local_ff8._Last = &local_540;
  local_550.Key = ___xmm_4130000040e000004040000000000000;
  local_550.Value = _UNK_150d5a528;
  TArray<float,TSizedDefaultAllocator<32>_>::TArray<float,TSizedDefaultAllocator<32>_>
            (&local_b08,(initializer_list<float> *)&local_ff8);
  Audio::ScaleDegreeSet::ScaleDegreeSet(&local_808,&local_af8,&local_b08);
  local_308 = &local_f8c;
  local_f88 = 0x12;
  local_300 = &local_808;
  local_7c8 = 0x40e00000;
  local_ff8._First = &local_7d8;
  local_7c4 = 0x41000000;
  local_ff8._Last =
       (TPairInitializer<Audio::EMusicalScale::Scale_const_&,Audio::ScaleDegreeSet_const_&> *)
       local_7bc;
  local_7d8.Key = pSVar5;
  local_7d8.Value = pSVar6;
  local_7c0 = 0x41300000;
  TArray<float,TSizedDefaultAllocator<32>_>::TArray<float,TSizedDefaultAllocator<32>_>
            (&local_b18,(initializer_list<float> *)&local_ff8);
  local_ff8._First = &local_560;
  local_ff8._Last = &local_550;
  local_560.Key = ___xmm_4130000040e000004040000000000000;
  local_560.Value = _UNK_150d5a528;
  TArray<float,TSizedDefaultAllocator<32>_>::TArray<float,TSizedDefaultAllocator<32>_>
            (&local_b28,(initializer_list<float> *)&local_ff8);
  Audio::ScaleDegreeSet::ScaleDegreeSet(&local_a08,&local_b18,&local_b28);
  local_2f8 = &local_f88;
  local_2f0 = &local_a08;
  local_f84 = 0x1a;
  local_ff8._First = &local_268;
  local_ff8._Last = local_248;
  local_268.Key = pSVar5;
  local_268.Value = pSVar6;
  local_258 = ___xmm_41300000411000004100000040c00000;
  uStack_250 = _UNK_150d5a558;
  TArray<float,TSizedDefaultAllocator<32>_>::TArray<float,TSizedDefaultAllocator<32>_>
            (&local_b38,(initializer_list<float> *)&local_ff8);
  local_ff8._First = &local_570;
  local_ff8._Last = &local_560;
  local_570.Key = ___xmm_4130000040c000004040000000000000;
  local_570.Value = _UNK_150d5a518;
  TArray<float,TSizedDefaultAllocator<32>_>::TArray<float,TSizedDefaultAllocator<32>_>
            (&local_b48,(initializer_list<float> *)&local_ff8);
  Audio::ScaleDegreeSet::ScaleDegreeSet(&local_a88,&local_b38,&local_b48);
  local_2e8 = &local_f84;
  local_2e0 = &local_a88;
  local_f80 = 2;
  local_ff8._First =
       (TPairInitializer<Audio::EMusicalScale::Scale_const_&,Audio::ScaleDegreeSet_const_&> *)
       (local_7bc + 4);
  local_7a8 = 0x40e00000;
  local_ff8._Last =
       (TPairInitializer<Audio::EMusicalScale::Scale_const_&,Audio::ScaleDegreeSet_const_&> *)
       local_79c;
  local_7bc._4_8_ = ___xmm_40a00000404000003f80000000000000;
  uStack_7b0 = _UNK_150d5a428;
  local_7a4 = 0x41000000;
  local_7a0 = 0x41200000;
  TArray<float,TSizedDefaultAllocator<32>_>::TArray<float,TSizedDefaultAllocator<32>_>
            (&local_b58,(initializer_list<float> *)&local_ff8);
  local_ff8._First = &local_580;
  local_ff8._Last = &local_570;
  local_580.Key = pSVar9;
  local_580.Value = pSVar10;
  TArray<float,TSizedDefaultAllocator<32>_>::TArray<float,TSizedDefaultAllocator<32>_>
            (&local_b68,(initializer_list<float> *)&local_ff8);
  Audio::ScaleDegreeSet::ScaleDegreeSet(&local_a68,&local_b58,&local_b68);
  local_2d8 = &local_f80;
  local_f7c = 5;
  local_2d0 = &local_a68;
  local_788 = 0x40e00000;
  local_ff8._First =
       (TPairInitializer<Audio::EMusicalScale::Scale_const_&,Audio::ScaleDegreeSet_const_&> *)
       (local_79c + 4);
  local_784 = 0x41000000;
  local_ff8._Last =
       (TPairInitializer<Audio::EMusicalScale::Scale_const_&,Audio::ScaleDegreeSet_const_&> *)
       local_77c;
  local_79c._4_8_ = pSVar5;
  pSStack_790 = pSVar6;
  local_780 = 0x41200000;
  TArray<float,TSizedDefaultAllocator<32>_>::TArray<float,TSizedDefaultAllocator<32>_>
            (&local_b78,(initializer_list<float> *)&local_ff8);
  local_ff8._First = &local_590;
  local_ff8._Last = &local_580;
  local_590.Key = pSVar9;
  local_590.Value = pSVar10;
  TArray<float,TSizedDefaultAllocator<32>_>::TArray<float,TSizedDefaultAllocator<32>_>
            (&local_b88,(initializer_list<float> *)&local_ff8);
  Audio::ScaleDegreeSet::ScaleDegreeSet(&local_a48,&local_b78,&local_b88);
  local_2c8 = &local_f7c;
  local_f78[0] = 0x1b;
  local_2c0 = &local_a48;
  local_768 = 0x40c00000;
  local_ff8._First =
       (TPairInitializer<Audio::EMusicalScale::Scale_const_&,Audio::ScaleDegreeSet_const_&> *)
       (local_77c + 4);
  local_764 = 0x41000000;
  local_ff8._Last =
       (TPairInitializer<Audio::EMusicalScale::Scale_const_&,Audio::ScaleDegreeSet_const_&> *)
       local_75c;
  local_77c._4_8_ = pSVar5;
  pSStack_770 = pSVar6;
  local_760 = 0x41200000;
  TArray<float,TSizedDefaultAllocator<32>_>::TArray<float,TSizedDefaultAllocator<32>_>
            (&local_b98,(initializer_list<float> *)&local_ff8);
  local_ff8._First = &local_510;
  local_ff8._Last = &local_500;
  local_510.Key = ___xmm_4120000040c000004040000000000000;
  local_510.Value = _UNK_150d5a4c8;
  TArray<float,TSizedDefaultAllocator<32>_>::TArray<float,TSizedDefaultAllocator<32>_>
            (&local_ba8,(initializer_list<float> *)&local_ff8);
  Audio::ScaleDegreeSet::ScaleDegreeSet(&local_a28,&local_b98,&local_ba8);
  local_2b8 = local_f78;
  local_2b0 = &local_a28;
  local_ff8._First = &local_488;
  local_ff8._Last = &local_2a8;
  TMap<enum_Audio::EMusicalScale::Scale,Audio::ScaleDegreeSet,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_Audio::EMusicalScale::Scale,Audio::ScaleDegreeSet,0>_>
  ::
  TMap<enum_Audio::EMusicalScale::Scale,Audio::ScaleDegreeSet,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_Audio::EMusicalScale::Scale,Audio::ScaleDegreeSet,0>_>
            (&Audio::FMidiNoteQuantizer::ScaleDegreeSetMap,&local_ff8);
  if (local_a28.ChordTones.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a28.ChordTones.AllocatorInstance.Data);
  }
  if (local_a28.ScaleDegrees.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a28.ScaleDegrees.AllocatorInstance.Data);
  }
  if (local_ba8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_ba8.AllocatorInstance.Data);
  }
  if (local_b98.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b98.AllocatorInstance.Data);
  }
  if (local_a48.ChordTones.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a48.ChordTones.AllocatorInstance.Data);
  }
  if (local_a48.ScaleDegrees.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a48.ScaleDegrees.AllocatorInstance.Data);
  }
  if (local_b88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b88.AllocatorInstance.Data);
  }
  if (local_b78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b78.AllocatorInstance.Data);
  }
  if (local_a68.ChordTones.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a68.ChordTones.AllocatorInstance.Data);
  }
  if (local_a68.ScaleDegrees.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a68.ScaleDegrees.AllocatorInstance.Data);
  }
  if (local_b68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b68.AllocatorInstance.Data);
  }
  if (local_b58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b58.AllocatorInstance.Data);
  }
  if (local_a88.ChordTones.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a88.ChordTones.AllocatorInstance.Data);
  }
  if (local_a88.ScaleDegrees.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a88.ScaleDegrees.AllocatorInstance.Data);
  }
  if (local_b48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b48.AllocatorInstance.Data);
  }
  if (local_b38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b38.AllocatorInstance.Data);
  }
  if (local_a08.ChordTones.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a08.ChordTones.AllocatorInstance.Data);
  }
  if (local_a08.ScaleDegrees.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a08.ScaleDegrees.AllocatorInstance.Data);
  }
  if (local_b28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b28.AllocatorInstance.Data);
  }
  if (local_b18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b18.AllocatorInstance.Data);
  }
  if (local_808.ChordTones.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_808.ChordTones.AllocatorInstance.Data);
  }
  if (local_808.ScaleDegrees.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_808.ScaleDegrees.AllocatorInstance.Data);
  }
  if (local_b08.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b08.AllocatorInstance.Data);
  }
  if (local_af8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_af8.AllocatorInstance.Data);
  }
  if (local_828.ChordTones.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_828.ChordTones.AllocatorInstance.Data);
  }
  if (local_828.ScaleDegrees.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_828.ScaleDegrees.AllocatorInstance.Data);
  }
  if (local_ae8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_ae8.AllocatorInstance.Data);
  }
  if (local_ad8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_ad8.AllocatorInstance.Data);
  }
  if (local_848.ChordTones.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_848.ChordTones.AllocatorInstance.Data);
  }
  if (local_848.ScaleDegrees.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_848.ScaleDegrees.AllocatorInstance.Data);
  }
  if (local_ac8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_ac8.AllocatorInstance.Data);
  }
  if (local_ab8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_ab8.AllocatorInstance.Data);
  }
  if (local_868.ChordTones.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_868.ChordTones.AllocatorInstance.Data);
  }
  if (local_868.ScaleDegrees.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_868.ScaleDegrees.AllocatorInstance.Data);
  }
  if (local_aa8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_aa8.AllocatorInstance.Data);
  }
  if (local_a98.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a98.AllocatorInstance.Data);
  }
  if (local_888.ChordTones.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_888.ChordTones.AllocatorInstance.Data);
  }
  if (local_888.ScaleDegrees.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_888.ScaleDegrees.AllocatorInstance.Data);
  }
  if (local_bc8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_bc8.AllocatorInstance.Data);
  }
  if (local_bb8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_bb8.AllocatorInstance.Data);
  }
  if (local_8a8.ChordTones.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_8a8.ChordTones.AllocatorInstance.Data);
  }
  if (local_8a8.ScaleDegrees.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_8a8.ScaleDegrees.AllocatorInstance.Data);
  }
  if (local_d18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d18.AllocatorInstance.Data);
  }
  if (local_c58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c58.AllocatorInstance.Data);
  }
  if (local_8c8.ChordTones.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_8c8.ChordTones.AllocatorInstance.Data);
  }
  if (local_8c8.ScaleDegrees.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_8c8.ScaleDegrees.AllocatorInstance.Data);
  }
  if (local_c48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c48.AllocatorInstance.Data);
  }
  if (local_c38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c38.AllocatorInstance.Data);
  }
  if (local_8e8.ChordTones.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_8e8.ChordTones.AllocatorInstance.Data);
  }
  if (local_8e8.ScaleDegrees.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_8e8.ScaleDegrees.AllocatorInstance.Data);
  }
  if (local_c28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c28.AllocatorInstance.Data);
  }
  if (local_c18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c18.AllocatorInstance.Data);
  }
  if (local_908.ChordTones.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_908.ChordTones.AllocatorInstance.Data);
  }
  if (local_908.ScaleDegrees.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_908.ScaleDegrees.AllocatorInstance.Data);
  }
  if (local_c08.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c08.AllocatorInstance.Data);
  }
  if (local_bf8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_bf8.AllocatorInstance.Data);
  }
  if (local_928.ChordTones.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_928.ChordTones.AllocatorInstance.Data);
  }
  if (local_928.ScaleDegrees.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_928.ScaleDegrees.AllocatorInstance.Data);
  }
  if (local_be8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_be8.AllocatorInstance.Data);
  }
  if (local_d28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d28.AllocatorInstance.Data);
  }
  if (local_948.ChordTones.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_948.ChordTones.AllocatorInstance.Data);
  }
  if (local_948.ScaleDegrees.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_948.ScaleDegrees.AllocatorInstance.Data);
  }
  if (local_c78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c78.AllocatorInstance.Data);
  }
  if (local_d08.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d08.AllocatorInstance.Data);
  }
  if (local_968.ChordTones.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_968.ChordTones.AllocatorInstance.Data);
  }
  if (local_968.ScaleDegrees.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_968.ScaleDegrees.AllocatorInstance.Data);
  }
  if (local_cf8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_cf8.AllocatorInstance.Data);
  }
  if (local_ce8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_ce8.AllocatorInstance.Data);
  }
  if (local_988.ChordTones.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_988.ChordTones.AllocatorInstance.Data);
  }
  if (local_988.ScaleDegrees.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_988.ScaleDegrees.AllocatorInstance.Data);
  }
  if (local_cd8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_cd8.AllocatorInstance.Data);
  }
  if (local_cc8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_cc8.AllocatorInstance.Data);
  }
  if (local_9a8.ChordTones.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_9a8.ChordTones.AllocatorInstance.Data);
  }
  if (local_9a8.ScaleDegrees.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_9a8.ScaleDegrees.AllocatorInstance.Data);
  }
  if (local_cb8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_cb8.AllocatorInstance.Data);
  }
  if (local_ca8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_ca8.AllocatorInstance.Data);
  }
  if (local_9c8.ChordTones.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_9c8.ChordTones.AllocatorInstance.Data);
  }
  if (local_9c8.ScaleDegrees.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_9c8.ScaleDegrees.AllocatorInstance.Data);
  }
  if (local_c98.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c98.AllocatorInstance.Data);
  }
  if (local_c88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c88.AllocatorInstance.Data);
  }
  if (local_9e8.ChordTones.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_9e8.ChordTones.AllocatorInstance.Data);
  }
  if (local_9e8.ScaleDegrees.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_9e8.ScaleDegrees.AllocatorInstance.Data);
  }
  if (local_bd8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_bd8.AllocatorInstance.Data);
  }
  if (local_c68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c68.AllocatorInstance.Data);
  }
  if (local_df8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_df8.Data);
  }
  if (local_e08.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e08.Data);
  }
  if (local_f60.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f60.Data);
  }
  if (local_f50.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f50.Data);
  }
  if (local_e18.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e18.Data);
  }
  if (local_e28.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e28.Data);
  }
  if (local_f40.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f40.Data);
  }
  if (local_f30.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f30.Data);
  }
  if (local_e38.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e38.Data);
  }
  if (local_e48.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e48.Data);
  }
  if (local_f20.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f20.Data);
  }
  if (local_eb8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_eb8.Data);
  }
  if (local_d38.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d38.Data);
  }
  if (local_d48.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d48.Data);
  }
  if (local_f08.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f08.Data);
  }
  if (local_ef8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_ef8.Data);
  }
  if (local_d58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d58.Data);
  }
  if (local_d68.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d68.Data);
  }
  if (local_ee8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_ee8.Data);
  }
  if (local_f70.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f70.Data);
  }
  if (local_d78.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d78.Data);
  }
  if (local_d88.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d88.Data);
  }
  if (local_ed8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_ed8.Data);
  }
  if (local_ec8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_ec8.Data);
  }
  if (local_d98.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d98.Data);
  }
  if (local_da8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_da8.Data);
  }
  if (local_e58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e58.Data);
  }
  if (local_ea8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_ea8.Data);
  }
  if (local_db8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_db8.Data);
  }
  if (local_dc8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_dc8.Data);
  }
  if (local_e98.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e98.Data);
  }
  if (local_e88.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e88.Data);
  }
  if (local_de8.ChordTones.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_de8.ChordTones.AllocatorInstance.Data);
  }
  if (local_de8.ScaleDegrees.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_de8.ScaleDegrees.AllocatorInstance.Data);
  }
  if (local_e78.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e78.Data);
  }
  if (local_e68.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e68.Data);
  }
  atexit(`dynamic_atexit_destructor_for_'Audio::FMidiNoteQuantizer::ScaleDegreeSetMap__);
  return;
}

// `dynamic_initializer_for_'CVarMultithreadedPatchingPushCallsPerOutputCleanupCheck'' @ 140f8cb80

void __cdecl
_dynamic_initializer_for__CVarMultithreadedPatchingPushCallsPerOutputCleanupCheck__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarMultithreadedPatchingPushCallsPerOutputCleanupCheck,
             L"au.MultithreadedPatching.PushCallsPerOutputCleanupCheck",
             &MultithreadedPatchingPushCallsPerOutputCleanupCheckCVar,
             L"Number of push calls (usually corrisponding to audio block updates)\nbefore checking if an output is ready to be destroyed. Default = 256"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarMultithreadedPatchingPushCallsPerOutputCleanupCheck__);
  return;
}

// `dynamic_initializer_for_'LogSignalProcessing'' @ 140f8cbd0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogSignalProcessing__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogSignalProcessing,L"LogSignalProcessing",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogSignalProcessing__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantSignalProcessing'' @ 140f8cc10

void __cdecl _dynamic_initializer_for__ModuleRegistrantSignalProcessing__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "SignalProcessing";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"SignalProcessing",0x10);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,
             FStaticallyLinkedModuleRegistrant<Audio::FSignalProcessingModule>::InitializeModule);
  return;
}

// `dynamic_initializer_for_'NAME_ADPCM'' @ 140f8cc60

void __cdecl Audio::_dynamic_initializer_for__NAME_ADPCM__(void)

{
  ::FName::FName(&NAME_ADPCM,L"ADPCM");
  return;
}

// `dynamic_initializer_for_'NAME_BINKA'' @ 140f8cc80

void __cdecl Audio::_dynamic_initializer_for__NAME_BINKA__(void)

{
  ::FName::FName(&NAME_BINKA,L"BINKA");
  return;
}

// `dynamic_initializer_for_'NAME_OGG'' @ 140f8cca0

void __cdecl Audio::_dynamic_initializer_for__NAME_OGG__(void)

{
  ::FName::FName(&NAME_OGG,L"OGG");
  return;
}

// `dynamic_initializer_for_'NAME_OPUS'' @ 140f8ccc0

void __cdecl Audio::_dynamic_initializer_for__NAME_OPUS__(void)

{
  ::FName::FName(&NAME_OPUS,L"OPUS");
  return;
}

// `dynamic_initializer_for_'NAME_PCM'' @ 140f8cce0

void __cdecl Audio::_dynamic_initializer_for__NAME_PCM__(void)

{
  ::FName::FName(&NAME_PCM,L"PCM");
  return;
}

// `dynamic_initializer_for_'NAME_PLATFORM_SPECIFIC'' @ 140f8cd00

void __cdecl Audio::_dynamic_initializer_for__NAME_PLATFORM_SPECIFIC__(void)

{
  ::FName::FName(&NAME_PLATFORM_SPECIFIC,L"PLATFORM_SPECIFIC");
  return;
}

// `dynamic_initializer_for_'NAME_PROJECT_DEFINED'' @ 140f8cd20

void __cdecl Audio::_dynamic_initializer_for__NAME_PROJECT_DEFINED__(void)

{
  ::FName::FName(&NAME_PROJECT_DEFINED,L"PROJECT_DEFINED");
  return;
}

// `dynamic_initializer_for_'NAME_RADA'' @ 140f8cd40

void __cdecl Audio::_dynamic_initializer_for__NAME_RADA__(void)

{
  ::FName::FName(&NAME_RADA,L"RADA");
  return;
}

// `dynamic_initializer_for_'OV_CALLBACKS_DEFAULT'' @ 140f8cd60

void __cdecl _dynamic_initializer_for__OV_CALLBACKS_DEFAULT__(void)

{
  OV_CALLBACKS_DEFAULT.read_func = fread_exref;
  OV_CALLBACKS_DEFAULT.close_func = fclose_exref;
  OV_CALLBACKS_DEFAULT.tell_func = ftell_exref;
  return;
}

// `dynamic_initializer_for_'OV_CALLBACKS_NOCLOSE'' @ 140f8cda0

void __cdecl _dynamic_initializer_for__OV_CALLBACKS_NOCLOSE__(void)

{
  OV_CALLBACKS_NOCLOSE.read_func = fread_exref;
  OV_CALLBACKS_NOCLOSE.tell_func = ftell_exref;
  return;
}

// `dynamic_initializer_for_'OV_CALLBACKS_STREAMONLY'' @ 140f8cdd0

void __cdecl _dynamic_initializer_for__OV_CALLBACKS_STREAMONLY__(void)

{
  OV_CALLBACKS_STREAMONLY.read_func = fread_exref;
  OV_CALLBACKS_STREAMONLY.close_func = fclose_exref;
  return;
}

// `dynamic_initializer_for_'OV_CALLBACKS_STREAMONLY_NOCLOSE'' @ 140f8ce00

void __cdecl _dynamic_initializer_for__OV_CALLBACKS_STREAMONLY_NOCLOSE__(void)

{
  OV_CALLBACKS_STREAMONLY_NOCLOSE.read_func = fread_exref;
  return;
}

// `scalar_deleting_destructor' @ 1444e8970

void * __thiscall
Audio::FUniformPartitionConvolutionFactory::_scalar_deleting_destructor_
          (FUniformPartitionConvolutionFactory *this,uint param_1)

{
  *this = (FUniformPartitionConvolutionFactory)&___7FUniformPartitionConvolutionFactory_Audio__6B_;
  IConvolutionAlgorithmFactory::~IConvolutionAlgorithmFactory((IConvolutionAlgorithmFactory *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1444e8b00

void * __thiscall
Audio::FSignalProcessingModule::_scalar_deleting_destructor_
          (FSignalProcessingModule *this,uint param_1)

{
  this->UniformPartitionConvolutionFactory =
       (FUniformPartitionConvolutionFactory)&___7FUniformPartitionConvolutionFactory_Audio__6B_;
  IConvolutionAlgorithmFactory::~IConvolutionAlgorithmFactory
            ((IConvolutionAlgorithmFactory *)&this->UniformPartitionConvolutionFactory);
  this->VectorFFTAlgorithmFactory = (FVectorFFTFactory)&___7IFFTAlgorithmFactory_Audio__6B_;
  this->_padding_ = (longlong)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1444e8b60

void * __thiscall
Audio::IFFTAlgorithmFactory::_scalar_deleting_destructor_(IFFTAlgorithmFactory *this,uint param_1)

{
  *this = (IFFTAlgorithmFactory)&___7IFFTAlgorithmFactory_Audio__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1444e8cc0

void * __thiscall
Audio::FVectorFFTFactory::_scalar_deleting_destructor_(FVectorFFTFactory *this,uint param_1)

{
  *this = (FVectorFFTFactory)&___7IFFTAlgorithmFactory_Audio__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// AllOf<TArray<TArray<float,TAlignedHeapAllocator<16>_>,TSizedDefaultAllocator<32>_>,`Audio::MultichannelBufferPrivate::GetMultichannelBufferNumFrames<TArray<float,TAlignedHeapAllocator<16>_>_>'::__l7::<lambda_1>_> @ 1444e9bb0

bool __cdecl
Algo::
AllOf<TArray<TArray<float,TAlignedHeapAllocator<16>_>,TSizedDefaultAllocator<32>_>,_Audio::MultichannelBufferPrivate::GetMultichannelBufferNumFrames<TArray<float,TAlignedHeapAllocator<16>_>_>_::__l7::<lambda_1>_>
          (TArray<TArray<float,TAlignedHeapAllocator<16>_>,TSizedDefaultAllocator<32>_> *param_1,
          <lambda_1> param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = param_1->ArrayNum;
  pFVar3 = (param_1->AllocatorInstance).Data;
  pFVar2 = pFVar3 + (longlong)iVar1 * 0x10;
  while( true ) {
    if (param_1->ArrayNum != iVar1) {
      `TCheckedPointerIterator<TArray<float,TAlignedHeapAllocator<16>_>_const_,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar2) break;
    if (*param_2.NumFrames != *(int *)(pFVar3 + 8)) {
      return false;
    }
    pFVar3 = pFVar3 + 0x10;
  }
  return true;
}

// AllOf<TArray<TArrayView<float,int>,TSizedDefaultAllocator<32>_>,`Audio::MultichannelBufferPrivate::GetMultichannelBufferNumFrames<TArrayView<float,int>_>'::__l7::<lambda_1>_> @ 1444e9c30

bool __cdecl
Algo::
AllOf<TArray<TArrayView<float,int>,TSizedDefaultAllocator<32>_>,_Audio::MultichannelBufferPrivate::GetMultichannelBufferNumFrames<TArrayView<float,int>_>_::__l7::<lambda_1>_>
          (TArray<TArrayView<float,int>,TSizedDefaultAllocator<32>_> *param_1,<lambda_1> param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = param_1->ArrayNum;
  pFVar3 = (param_1->AllocatorInstance).Data;
  pFVar2 = pFVar3 + (longlong)iVar1 * 0x10;
  while( true ) {
    if (param_1->ArrayNum != iVar1) {
      `TCheckedPointerIterator<TArrayView<float,int>_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar3 == pFVar2) break;
    if (*param_2.NumFrames != *(int *)(pFVar3 + 8)) {
      return false;
    }
    pFVar3 = pFVar3 + 0x10;
  }
  return true;
}

// AllOf<TArray<Audio::TCircularAudioBuffer<float,16>,TSizedDefaultAllocator<32>_>,`Audio::MultichannelBufferPrivate::GetMultichannelBufferNumFrames<Audio::TCircularAudioBuffer<float,16>_>'::__l7::<lambda_1>_> @ 1444e9cb0

bool __cdecl
Algo::
AllOf<TArray<Audio::TCircularAudioBuffer<float,16>,TSizedDefaultAllocator<32>_>,_Audio::MultichannelBufferPrivate::GetMultichannelBufferNumFrames<Audio::TCircularAudioBuffer<float,16>_>_::__l7::<lambda_1>_>
          (TArray<Audio::TCircularAudioBuffer<float,16>,TSizedDefaultAllocator<32>_> *param_1,
          <lambda_1> param_2)

{
  int iVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  
  iVar1 = param_1->ArrayNum;
  pFVar4 = (param_1->AllocatorInstance).Data;
  pFVar3 = pFVar4 + (longlong)iVar1 * 0x20;
  while( true ) {
    if (param_1->ArrayNum != iVar1) {
      `TCheckedPointerIterator<Audio::TCircularAudioBuffer<float,16>_const_,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar4 == pFVar3) {
      return true;
    }
    iVar2 = *(int *)(pFVar4 + 0x14);
    if (*(int *)(pFVar4 + 0x18) < iVar2) {
      iVar2 = *(int *)(pFVar4 + 0x10) - iVar2;
    }
    else {
      iVar2 = -iVar2;
    }
    if (*param_2.NumFrames != *(int *)(pFVar4 + 0x18) + iVar2) break;
    pFVar4 = pFVar4 + 0x20;
  }
  return false;
}

// DefaultConstructItems<Audio::FLinkwitzRileyBandFilter,int> @ 1444e9d40

void __cdecl DefaultConstructItems<Audio::FLinkwitzRileyBandFilter,int>(void *param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = (longlong)param_1 + 0xc;
    do {
      *(undefined8 *)(lVar1 + -0xc) = 0;
      *(undefined8 *)(lVar1 + -4) = 0;
      lVar1 = lVar1 + 0x10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<Audio::TCircularAudioBuffer<float,16>,int> @ 1444e9d70

void __cdecl
DefaultConstructItems<Audio::TCircularAudioBuffer<float,16>,int>(void *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  
  if (param_2 != 0) {
    puVar4 = (undefined4 *)((longlong)param_1 + 0x18);
    do {
      puVar4[-4] = 0;
      puVar4[-3] = 0;
      piVar1 = puVar4 + -3;
      *(undefined8 *)(puVar4 + -6) = 0;
      puVar4[-1] = 0;
      *puVar4 = 0;
      puVar4[-2] = 1;
      LOCK();
      puVar4[-1] = 0;
      UNLOCK();
      LOCK();
      *puVar4 = 0;
      UNLOCK();
      puVar4[-4] = 0;
      if (*piVar1 < 0) {
        UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                  (4,4,0,(ForAnyElementType *)(puVar4 + -6),0,piVar1);
      }
      iVar2 = puVar4[-2];
      iVar3 = UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                        (4,4,iVar2,(ForAnyElementType *)(puVar4 + -6),puVar4 + -4,piVar1);
      memset((void *)(*(longlong *)(puVar4 + -6) + (longlong)iVar3 * 4),0,(longlong)iVar2 << 2);
      puVar4 = puVar4 + 8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<Audio::FVariablePoleFilter,int> @ 1444e9e80

void __cdecl DefaultConstructItems<Audio::FVariablePoleFilter,int>(void *param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined4 *)((longlong)param_1 + 8);
    do {
      *(undefined8 *)(puVar1 + -2) = 0;
      *puVar1 = 0;
      *(undefined8 *)(puVar1 + 2) = 0;
      *(undefined8 *)(puVar1 + 4) = 0;
      puVar1 = puVar1 + 8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<Audio::FSpectrumBandExtractor::FCQTBandSpec,int> @ 1444e9eb0

void __cdecl
DestructItems<Audio::FSpectrumBandExtractor::FCQTBandSpec,int>(FCQTBandSpec *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<float,TAlignedHeapAllocator<16>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &param_1->Weights;
    do {
      pFVar1 = pTVar2[1].AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (pTVar2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      *(undefined ***)((longlong)(pTVar2 + -3) + 8) =
           &___7FBandSpec_FSpectrumBandExtractor_Audio__6B_;
      pTVar2 = (TArray<float,TAlignedHeapAllocator<16>_> *)((longlong)(pTVar2 + 4) + 8);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<Audio::GrainDelay::FGrainDelay::FGrain,int> @ 1444e9f10

void __cdecl DestructItems<Audio::GrainDelay::FGrainDelay::FGrain,int>(FGrain *param_1,int param_2)

{
  FTapDelayPitchShifter *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &param_1->PitchShifter;
    do {
      pFVar1->_padding_ = (longlong)&___7FTapDelayPitchShifter_Audio__6B_;
      pFVar1 = (FTapDelayPitchShifter *)((longlong)(pFVar1 + 1) + 0x10);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<Audio::FUniformPartitionConvolution::FImpulseResponse,int> @ 1444e9f40

void __cdecl
DestructItems<Audio::FUniformPartitionConvolution::FImpulseResponse,int>
          (FImpulseResponse *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<TArray<float,TAlignedHeapAllocator<16>_>,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &param_1->Blocks;
    do {
      DestructItems<TArray<float,TAlignedHeapAllocator<16>_>,int>
                ((TArray<float,TAlignedHeapAllocator<16>_> *)(pTVar2->AllocatorInstance).Data,
                 pTVar2->ArrayNum);
      pFVar1 = (pTVar2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (((TArray<float,TAlignedHeapAllocator<16>_> *)(pTVar2 + -1))->AllocatorInstance).Data
      ;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((((TSharedRef<Audio::IFFTAlgorithm,1> *)(pTVar2 + -3))->SharedReferenceCount).
                 ReferenceController);
      pTVar2 = (TArray<TArray<float,TAlignedHeapAllocator<16>_>,TSizedDefaultAllocator<32>_> *)
               ((longlong)(pTVar2 + 4) + 8);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<Audio::FUniformPartitionConvolution::FInput,int> @ 1444e9fa0

void __cdecl
DestructItems<Audio::FUniformPartitionConvolution::FInput,int>(FInput *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<float,TAlignedHeapAllocator<16>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &param_1->InputBuffer;
    do {
      pFVar1 = pTVar2[1].AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (pTVar2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((((TSharedRef<Audio::IFFTAlgorithm,1> *)(pTVar2 + -1))->SharedReferenceCount).
                 ReferenceController);
      pTVar2 = (TArray<float,TAlignedHeapAllocator<16>_> *)((longlong)(pTVar2 + 3) + 8);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<Audio::FSpectrumBandExtractor::FLerpBandSpec,int> @ 1444ea000

void __cdecl
DestructItems<Audio::FSpectrumBandExtractor::FLerpBandSpec,int>(FLerpBandSpec *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    param_1->_padding_ = (longlong)&___7FBandSpec_FSpectrumBandExtractor_Audio__6B_;
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<Audio::FLinkwitzRileyBandFilter,int> @ 1444ea030

void __cdecl
DestructItems<Audio::FLinkwitzRileyBandFilter,int>(FLinkwitzRileyBandFilter *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    DestructItems<Audio::FVariablePoleFilter,int>
              ((FVariablePoleFilter *)(param_1->Filters).AllocatorInstance.Data,
               (param_1->Filters).ArrayNum);
    pFVar1 = (param_1->Filters).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<Audio::FSpectrumBandExtractor::FNNBandSpec,int> @ 1444ea080

void __cdecl
DestructItems<Audio::FSpectrumBandExtractor::FNNBandSpec,int>(FNNBandSpec *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    param_1->_padding_ = (longlong)&___7FBandSpec_FSpectrumBandExtractor_Audio__6B_;
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<Audio::FUniformPartitionConvolution::FOutput,int> @ 1444ea0b0

void __cdecl
DestructItems<Audio::FUniformPartitionConvolution::FOutput,int>(FOutput *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<TArray<float,TAlignedHeapAllocator<16>_>,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &param_1->Blocks;
    do {
      DestructItems<TArray<float,TAlignedHeapAllocator<16>_>,int>
                ((TArray<float,TAlignedHeapAllocator<16>_> *)(pTVar2->AllocatorInstance).Data,
                 pTVar2->ArrayNum);
      pFVar1 = (pTVar2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      if (((FSharedReferencer<1> *)(pTVar2 + -2))[1].ReferenceController != (void *)0x0) {
        FMemory::Free(((FSharedReferencer<1> *)(pTVar2 + -2))[1].ReferenceController);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (((FSharedReferencer<1> *)(pTVar2 + -2))->ReferenceController);
      pTVar2 = (TArray<TArray<float,TAlignedHeapAllocator<16>_>,TSizedDefaultAllocator<32>_> *)
               ((longlong)(pTVar2 + 4) + 8);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<Audio::FSpectrumBandExtractor::FQuadraticBandSpec,int> @ 1444ea110

void __cdecl
DestructItems<Audio::FSpectrumBandExtractor::FQuadraticBandSpec,int>
          (FQuadraticBandSpec *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    param_1->_padding_ = (longlong)&___7FBandSpec_FSpectrumBandExtractor_Audio__6B_;
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<TArray<Audio::FPatch_*,TSizedDefaultAllocator<32>_>,int> @ 1444ea140

void __cdecl
DestructItems<TArray<Audio::FPatch_*,TSizedDefaultAllocator<32>_>,int>
          (TArray<Audio::FPatch_*,TSizedDefaultAllocator<32>_> *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->AllocatorInstance).Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<TArray<Audio::FModulationMatrix::FDestData,TSizedDefaultAllocator<32>_>,int> @ 1444ea180

void __cdecl
DestructItems<TArray<Audio::FModulationMatrix::FDestData,TSizedDefaultAllocator<32>_>,int>
          (TArray<Audio::FModulationMatrix::FDestData,TSizedDefaultAllocator<32>_> *param_1,
          int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->AllocatorInstance).Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<Audio::TCircularAudioBuffer<float,16>,int> @ 1444ea1c0

void __cdecl
DestructItems<Audio::TCircularAudioBuffer<float,16>,int>
          (TCircularAudioBuffer<float,16> *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->InternalBuffer).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<TSharedPtr<Audio::FPatchOutput,1>,int> @ 1444ea200

void __cdecl
DestructItems<TSharedPtr<Audio::FPatchOutput,1>,int>
          (TSharedPtr<Audio::FPatchOutput,1> *param_1,int param_2)

{
  FSharedReferencer<1> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &param_1->SharedReferenceCount;
    do {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pFVar1->ReferenceController);
      pFVar1 = pFVar1 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<Audio::FGrain,int> @ 1444ea240

void __cdecl DestructItems<Audio::FGrain,int>(FGrain *param_1,int param_2)

{
  IOscBase *this;
  
  if (param_2 != 0) {
    this = (IOscBase *)&param_1->Osc;
    do {
      if (*(void **)&this[1].ModFrequencyDest != (void *)0x0) {
        FMemory::Free(*(void **)&this[1].ModFrequencyDest);
      }
      if (*(void **)&this[1].PulseWidthMod != (void *)0x0) {
        FMemory::Free(*(void **)&this[1].PulseWidthMod);
      }
      this->_padding_ = (longlong)&___7FOsc_Audio__6B_;
      Audio::IOscBase::~IOscBase(this);
      this = (IOscBase *)&this[2].FreqData.Octave;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<Audio::FTapDelayPitchShifter,int> @ 1444ea2c0

void __cdecl
DestructItems<Audio::FTapDelayPitchShifter,int>(FTapDelayPitchShifter *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    param_1->_padding_ = (longlong)&___7FTapDelayPitchShifter_Audio__6B_;
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<Audio::FVariablePoleFilter,int> @ 1444ea2f0

void __cdecl DestructItems<Audio::FVariablePoleFilter,int>(FVariablePoleFilter *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<Audio::FBiquadFilter,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &param_1->Filters;
    do {
      DestructItems<Audio::FBiquadFilter,int>
                ((FBiquadFilter *)(pTVar2->AllocatorInstance).Data,pTVar2->ArrayNum);
      pFVar1 = (pTVar2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pTVar2 = pTVar2 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// GetMultichannelBufferNumFrames<TArray<float,TAlignedHeapAllocator<16>_>_> @ 1444ea750

int __cdecl
Audio::MultichannelBufferPrivate::
GetMultichannelBufferNumFrames<TArray<float,TAlignedHeapAllocator<16>_>_>
          (TArray<TArray<float,TAlignedHeapAllocator<16>_>,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [8];
  
  iVar4 = param_1->ArrayNum;
  if (iVar4 < 1) {
    return 0;
  }
  pFVar5 = (param_1->AllocatorInstance).Data;
  pFVar6 = pFVar5 + (longlong)iVar4 * 0x10;
  iVar1 = *(int *)(pFVar5 + 8);
  while( true ) {
    if (param_1->ArrayNum != iVar4) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TArray<float,TAlignedHeapAllocator<16>_>_const_,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar5 == pFVar6) break;
    if (iVar1 != *(int *)(pFVar5 + 8)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Algo::AllOf(InBuffer, [&NumFrames](const BufferType& Buffer) { return NumFrames == Buffer.Num(); })"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\MultichannelBuffer.cpp"
                         ,0x16,L"Buffers contain inconsistent frame sizes");
      if (!bVar3) {
        return iVar1;
      }
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
    pFVar5 = pFVar5 + 0x10;
  }
  return iVar1;
}

// GetMultichannelBufferNumFrames<TArrayView<float,int>_> @ 1444ea800

int __cdecl
Audio::MultichannelBufferPrivate::GetMultichannelBufferNumFrames<TArrayView<float,int>_>
          (TArray<TArrayView<float,int>,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [8];
  
  iVar4 = param_1->ArrayNum;
  if (iVar4 < 1) {
    return 0;
  }
  pFVar5 = (param_1->AllocatorInstance).Data;
  pFVar6 = pFVar5 + (longlong)iVar4 * 0x10;
  iVar1 = *(int *)(pFVar5 + 8);
  while( true ) {
    if (param_1->ArrayNum != iVar4) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TArrayView<float,int>_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar5 == pFVar6) break;
    if (iVar1 != *(int *)(pFVar5 + 8)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Algo::AllOf(InBuffer, [&NumFrames](const BufferType& Buffer) { return NumFrames == Buffer.Num(); })"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\MultichannelBuffer.cpp"
                         ,0x16,L"Buffers contain inconsistent frame sizes");
      if (!bVar3) {
        return iVar1;
      }
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
    pFVar5 = pFVar5 + 0x10;
  }
  return iVar1;
}

// GetMultichannelBufferNumFrames<Audio::TCircularAudioBuffer<float,16>_> @ 1444ea8b0

int __cdecl
Audio::MultichannelBufferPrivate::
GetMultichannelBufferNumFrames<Audio::TCircularAudioBuffer<float,16>_>
          (TArray<Audio::TCircularAudioBuffer<float,16>,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  int iVar7;
  undefined1 local_res8 [8];
  
  if (param_1->ArrayNum < 1) {
    return 0;
  }
  pFVar5 = (param_1->AllocatorInstance).Data;
  iVar7 = *(int *)(pFVar5 + 0x18) - *(int *)(pFVar5 + 0x14);
  if (*(int *)(pFVar5 + 0x18) < *(int *)(pFVar5 + 0x14)) {
    iVar7 = iVar7 + *(int *)(pFVar5 + 0x10);
  }
  iVar1 = param_1->ArrayNum;
  pFVar5 = (param_1->AllocatorInstance).Data;
  pFVar6 = pFVar5 + (longlong)iVar1 * 0x20;
  while( true ) {
    if (param_1->ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<Audio::TCircularAudioBuffer<float,16>_const_,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar5 == pFVar6) {
      return iVar7;
    }
    iVar4 = *(int *)(pFVar5 + 0x14);
    if (*(int *)(pFVar5 + 0x18) < iVar4) {
      iVar4 = *(int *)(pFVar5 + 0x10) - iVar4;
    }
    else {
      iVar4 = -iVar4;
    }
    if (iVar7 != *(int *)(pFVar5 + 0x18) + iVar4) break;
    pFVar5 = pFVar5 + 0x20;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Algo::AllOf(InBuffer, [&NumFrames](const BufferType& Buffer) { return NumFrames == Buffer.Num(); })"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\MultichannelBuffer.cpp"
                     ,0x16,L"Buffers contain inconsistent frame sizes");
  if (!bVar3) {
    return iVar7;
  }
  pcVar2 = (code *)swi(3);
  iVar7 = (*pcVar2)();
  return iVar7;
}

// MakeMultiMonoPointersFromView<float_const_> @ 1444ea990

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

TArray<float_const_*,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>_> * __cdecl
Audio::MakeMultiMonoPointersFromView<float_const_>
          (TArray<float_const_*,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>_>
           *__return_storage_ptr__,TArrayView<float_const_,int> *param_1,int param_2,int param_3)

{
  ForElementType<float_const_*> FVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  TArray<float_const_*,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>_> *pTVar5;
  ForElementType<float_const_*> FVar6;
  longlong lVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  
  (__return_storage_ptr__->AllocatorInstance).SecondaryData = (ForElementType<float_const_*>)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0x80;
  TArray<float_const_*,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>_>::SetNum
            (__return_storage_ptr__,param_3,Default);
  uVar8 = 0;
  if (0 < param_3) {
    lVar7 = 0;
    lVar10 = 0;
    do {
      lVar9 = (longlong)param_1->DataPtr + lVar10;
      uVar4 = 0;
      if ((int)uVar8 < __return_storage_ptr__->ArrayNum) {
        uVar4 = ~uVar8 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TArray<float_const_*,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>_> *
                 )(*pcVar2)();
        return pTVar5;
      }
      FVar1 = (__return_storage_ptr__->AllocatorInstance).SecondaryData;
      FVar6 = (ForElementType<float_const_*>)__return_storage_ptr__;
      if (FVar1 != (ForElementType<float_const_*>)0x0) {
        FVar6 = FVar1;
      }
      uVar8 = uVar8 + 1;
      lVar10 = lVar10 + (longlong)param_2 * 4;
      *(longlong *)(lVar7 + (longlong)FVar6) = lVar9;
      lVar7 = lVar7 + 8;
    } while ((int)uVar8 < param_3);
  }
  return __return_storage_ptr__;
}

// MakeMultiMonoPointersFromView<float> @ 1444eaaa0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

TArray<float_*,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>_> * __cdecl
Audio::MakeMultiMonoPointersFromView<float>
          (TArray<float_*,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>_>
           *__return_storage_ptr__,TArrayView<float,int> *param_1,int param_2,int param_3)

{
  ForElementType<float_*> FVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  TArray<float_*,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>_> *pTVar5;
  ForElementType<float_*> FVar6;
  longlong lVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  
  (__return_storage_ptr__->AllocatorInstance).SecondaryData = (ForElementType<float_*>)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0x80;
  TArray<float_*,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>_>::SetNum
            (__return_storage_ptr__,param_3,Default);
  uVar8 = 0;
  if (0 < param_3) {
    lVar7 = 0;
    lVar10 = 0;
    do {
      lVar9 = (longlong)param_1->DataPtr + lVar10;
      uVar4 = 0;
      if ((int)uVar8 < __return_storage_ptr__->ArrayNum) {
        uVar4 = ~uVar8 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TArray<float_*,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>_> *)
                 (*pcVar2)();
        return pTVar5;
      }
      FVar1 = (__return_storage_ptr__->AllocatorInstance).SecondaryData;
      FVar6 = (ForElementType<float_*>)__return_storage_ptr__;
      if (FVar1 != (ForElementType<float_*>)0x0) {
        FVar6 = FVar1;
      }
      uVar8 = uVar8 + 1;
      lVar10 = lVar10 + (longlong)param_2 * 4;
      *(longlong *)(lVar7 + (longlong)FVar6) = lVar9;
      lVar7 = lVar7 + 8;
    } while ((int)uVar8 < param_3);
  }
  return __return_storage_ptr__;
}

// MinElementBy<TArray<float,TSizedDefaultAllocator<32>_>,FIdentityFunctor,TLess<void>_> @ 1444eabb0

float * __cdecl
AlgoImpl::MinElementBy<TArray<float,TSizedDefaultAllocator<32>_>,FIdentityFunctor,TLess<void>_>
          (TArray<float,TSizedDefaultAllocator<32>_> *param_1,FIdentityFunctor param_2,
          TLess<void> param_3)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  
  pFVar3 = (param_1->AllocatorInstance).Data;
  iVar2 = param_1->ArrayNum;
  pFVar4 = (FScriptContainerElement *)0x0;
  pFVar1 = pFVar3 + (longlong)iVar2 * 4;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      `TCheckedPointerIterator<float,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    if ((pFVar4 == (FScriptContainerElement *)0x0) ||
       (*(float *)pFVar3 <= *(float *)pFVar4 && *(float *)pFVar4 != *(float *)pFVar3)) {
      pFVar4 = pFVar3;
    }
    pFVar3 = pFVar3 + 4;
  }
  return (float *)pFVar4;
}

// ScaleDegreeSet @ 1444f33d0

ScaleDegreeSet * __thiscall
Audio::ScaleDegreeSet::ScaleDegreeSet
          (ScaleDegreeSet *this,TArray<float,TSizedDefaultAllocator<32>_> *param_1,
          TArray<float,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  
  piVar1 = &(this->ScaleDegrees).ArrayMax;
  (this->ScaleDegrees).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar3 = param_1->ArrayNum;
  pFVar4 = (param_1->AllocatorInstance).Data;
  (this->ScaleDegrees).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar3,0,(ForAnyElementType *)this,iVar3,piVar1);
    memcpy((this->ScaleDegrees).AllocatorInstance.Data,pFVar4,(longlong)iVar3 << 2);
  }
  pTVar2 = &this->ChordTones;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->ChordTones).ArrayMax;
  iVar3 = param_2->ArrayNum;
  pFVar4 = (param_2->AllocatorInstance).Data;
  (this->ChordTones).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar3,0,&pTVar2->AllocatorInstance,iVar3,piVar1);
    memcpy((pTVar2->AllocatorInstance).Data,pFVar4,(longlong)iVar3 << 2);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1444f4e40

/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void * __thiscall
FAsyncTask<Audio::FSpectrumAnalysisAsyncWorker>::_scalar_deleting_destructor_
          (FAsyncTask<Audio::FSpectrumAnalysisAsyncWorker> *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  DeleteCriticalSection((LPCRITICAL_SECTION)&(this->Task).NonAbandonableSection);
  pTVar3 = (this->Task).AnalyzerWeakPtr.WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  FAsyncTaskBase::~FAsyncTaskBase((FAsyncTaskBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xb0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1444f4eb0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<Audio::FPatchOutput,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<Audio::FPatchOutput,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1444f4ef0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<Audio::FSpectrumAnalyzer,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<Audio::FSpectrumAnalyzer,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1444f4f30

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<Audio::IFFTAlgorithm,SharedPointerInternals::DefaultDeleter<Audio::IFFTAlgorithm>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<Audio::IFFTAlgorithm,SharedPointerInternals::DefaultDeleter<Audio::IFFTAlgorithm>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1444f4f70

/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void * __thiscall
Audio::FAsyncSpectrumAnalyzer::_scalar_deleting_destructor_
          (FAsyncSpectrumAnalyzer *this,uint param_1)

{
  int iVar1;
  FAsyncTask<Audio::FSpectrumAnalysisAsyncWorker> *pFVar2;
  FQueuedThreadPool *pFVar3;
  code *pcVar4;
  char cVar5;
  bool bVar6;
  void *pvVar7;
  
  this->_padding_ = (longlong)&___7FAsyncSpectrumAnalyzer_Audio__6B_;
  pFVar2 = (this->AsyncAnalysisTask).Ptr;
  if (pFVar2 != (FAsyncTask<Audio::FSpectrumAnalysisAsyncWorker> *)0x0) {
    if (((FThreadSafeCounter *)&pFVar2->_padding_)->Counter == 0) {
      FAsyncTaskBase::SyncCompletion((FAsyncTaskBase *)pFVar2,false);
    }
    else {
      pFVar2 = (this->AsyncAnalysisTask).Ptr;
      pFVar3 = (FQueuedThreadPool *)pFVar2->_padding_;
      if (pFVar3 != (FQueuedThreadPool *)0x0) {
        cVar5 = (**(code **)((longlong)*pFVar3 + 0x20))(pFVar3,pFVar2);
        iVar1 = ((FThreadSafeCounter *)&pFVar2->_padding_)->Counter;
        if (cVar5 != '\0') {
          if ((iVar1 != 1) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("WorkNotFinishedCounter.GetValue() == 1",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\AsyncWork.h"
                                 ,0x1e8,L""), bVar6)) {
            pcVar4 = (code *)swi(3);
            pvVar7 = (void *)(*pcVar4)();
            return pvVar7;
          }
          LOCK();
          ((FThreadSafeCounter *)&pFVar2->_padding_)->Counter =
               ((FThreadSafeCounter *)&pFVar2->_padding_)->Counter + -1;
          UNLOCK();
          FAsyncTaskBase::FinishThreadedWork((FAsyncTaskBase *)pFVar2);
          pFVar2->_padding_ = 0;
          goto LAB_1444f502f;
        }
        if (iVar1 != 0) {
          (**(code **)(pFVar2->_padding_ + 0x40))(pFVar2);
        }
      }
      FAsyncTaskBase::EnsureCompletion((FAsyncTaskBase *)(this->AsyncAnalysisTask).Ptr,true,false);
    }
  }
LAB_1444f502f:
  pFVar2 = (this->AsyncAnalysisTask).Ptr;
  if (pFVar2 != (FAsyncTask<Audio::FSpectrumAnalysisAsyncWorker> *)0x0) {
    (**(code **)(pFVar2->_padding_ + 0x28))(pFVar2,1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Analyzer).SharedReferenceCount.ReferenceController);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1444f5080

void * __thiscall
Audio::FSpectrumBandExtractor::FBandSpec::_scalar_deleting_destructor_(FBandSpec *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FBandSpec_FSpectrumBandExtractor_Audio__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1444f50c0

void * __thiscall
Audio::FSpectrumBandExtractor::FCQTBandSpec::_scalar_deleting_destructor_
          (FCQTBandSpec *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->WorkBuffer).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Weights).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FBandSpec_FSpectrumBandExtractor_Audio__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1444f5120

void * __thiscall
Audio::FEarlyReflections::_scalar_deleting_destructor_(FEarlyReflections *this,uint param_1)

{
  ~FEarlyReflections(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x4b0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1444f5160

void * __thiscall Audio::FLFO::_scalar_deleting_destructor_(FLFO *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FLFO_Audio__6B_;
  pFVar1 = (this->ModQuadPhase).Name.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ModNormalPhase).Name.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  IOscBase::~IOscBase((IOscBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x170);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1444f51d0

void * __thiscall
Audio::FSpectrumBandExtractor::FLerpBandSpec::_scalar_deleting_destructor_
          (FLerpBandSpec *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FBandSpec_FSpectrumBandExtractor_Audio__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1444f5210

void * __thiscall
Audio::FModulationMatrix::_scalar_deleting_destructor_(FModulationMatrix *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FModulationMatrix_Audio__6B_;
  DestructItems<TArray<Audio::FModulationMatrix::FDestData,TSizedDefaultAllocator<32>_>,int>
            ((TArray<Audio::FModulationMatrix::FDestData,TSizedDefaultAllocator<32>_> *)
             (this->Destinations).AllocatorInstance.Data,(this->Destinations).ArrayNum);
  pFVar1 = (this->Destinations).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TArray<float,TSizedDefaultAllocator<32>_>,int>
            ((TArray<float,TSizedDefaultAllocator<32>_> *)(this->Sources).AllocatorInstance.Data,
             (this->Sources).ArrayNum);
  pFVar1 = (this->Sources).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TArray<Audio::FPatch_*,TSizedDefaultAllocator<32>_>,int>
            ((TArray<Audio::FPatch_*,TSizedDefaultAllocator<32>_> *)
             (this->Patches).AllocatorInstance.Data,(this->Patches).ArrayNum);
  pFVar1 = (this->Patches).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1444f52a0

void * __thiscall
Audio::FSpectrumBandExtractor::FNNBandSpec::_scalar_deleting_destructor_
          (FNNBandSpec *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FBandSpec_FSpectrumBandExtractor_Audio__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1444f52e0

void * __thiscall
FOggVorbisEncoder::_scalar_deleting_destructor_(FOggVorbisEncoder *this,uint param_1)

{
  this->_padding_ = (longlong)&___7IAudioEncoder_Audio__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x78);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1444f5360

void * __thiscall FOpusEncoder::_scalar_deleting_destructor_(FOpusEncoder *this,uint param_1)

{
  FOpusEncoderPrivateState *pFVar1;
  FScriptContainerElement *pFVar2;
  FOggEncapsulator *pFVar3;
  
  pFVar1 = this->PrivateOpusState;
  this->_padding_ = (longlong)&___7FOpusEncoder__6B_;
  if (pFVar1 != (FOpusEncoderPrivateState *)0x0) {
    pFVar2 = (pFVar1->EncoderMemory).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    ::operator_delete(pFVar1,0x18);
    this->PrivateOpusState = (FOpusEncoderPrivateState *)0x0;
  }
  pFVar3 = this->PrivateOggEncapsulator;
  if (pFVar3 != (FOggEncapsulator *)0x0) {
    ogg_stream_clear(pFVar3);
    ::operator_delete(pFVar3,0x1c0);
    this->PrivateOggEncapsulator = (FOggEncapsulator *)0x0;
  }
  this->_padding_ = (longlong)&___7IAudioEncoder_Audio__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x90);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1444f5450

void * __thiscall Audio::FOsc::_scalar_deleting_destructor_(FOsc *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FOsc_Audio__6B_;
  IOscBase::~IOscBase((IOscBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x140);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1444f54a0

void * __thiscall Audio::FPatchOutput::_scalar_deleting_destructor_(FPatchOutput *this,uint param_1)

{
  atomic<FEvent_*> aVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7FPatchOutput_Audio__6B_;
  LOCK();
  aVar1 = this->SamplesPushedEvent;
  this->SamplesPushedEvent = (atomic<FEvent_*>)0x0;
  UNLOCK();
  if (aVar1 != (atomic<FEvent_*>)0x0) {
    FGenericPlatformProcess::ReturnSynchEventToPool((FEvent *)aVar1);
  }
  pFVar2 = (this->MixingBuffer).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->InternalBuffer).InternalBuffer.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1444f5510

void * __thiscall
Audio::FSpectrumBandExtractor::FQuadraticBandSpec::_scalar_deleting_destructor_
          (FQuadraticBandSpec *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FBandSpec_FSpectrumBandExtractor_Audio__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1444f5550

void * __thiscall
Audio::FSampleRateConverter::_scalar_deleting_destructor_(FSampleRateConverter *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FSampleRateConverter_Audio__6B_;
  pFVar1 = (this->PreviousChunkFrame).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7ISampleRateConverter_Audio__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1444f55b0

void * __thiscall Audio::FSineOsc::_scalar_deleting_destructor_(FSineOsc *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FSineOsc_Audio__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1444f55f0

void * __thiscall
Audio::FSineWaveTableOsc::_scalar_deleting_destructor_(FSineWaveTableOsc *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FSineWaveTableOsc_Audio__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1444f5630

/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void * __thiscall
Audio::FSpectrumAnalyzer::_scalar_deleting_destructor_(FSpectrumAnalyzer *this,uint param_1)

{
  ~FSpectrumAnalyzer(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1444f5670

void * __thiscall
Audio::FSpectrumBandExtractor::_scalar_deleting_destructor_
          (FSpectrumBandExtractor *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<Audio::FSpectrumBandExtractor::FCQTBandSpec,int>
            ((FCQTBandSpec *)(this->CQTBandSpecs).AllocatorInstance.Data,
             (this->CQTBandSpecs).ArrayNum);
  pFVar1 = (this->CQTBandSpecs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<Audio::FSpectrumBandExtractor::FQuadraticBandSpec,int>
            ((FQuadraticBandSpec *)(this->QuadraticBandSpecs).AllocatorInstance.Data,
             (this->QuadraticBandSpecs).ArrayNum);
  pFVar1 = (this->QuadraticBandSpecs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<Audio::FSpectrumBandExtractor::FLerpBandSpec,int>
            ((FLerpBandSpec *)(this->LerpBandSpecs).AllocatorInstance.Data,
             (this->LerpBandSpecs).ArrayNum);
  pFVar1 = (this->LerpBandSpecs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<Audio::FSpectrumBandExtractor::FNNBandSpec,int>
            ((FNNBandSpec *)(this->NNBandSpecs).AllocatorInstance.Data,(this->NNBandSpecs).ArrayNum)
  ;
  pFVar1 = (this->NNBandSpecs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PowerSpectrum).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7ISpectrumBandExtractor_Audio__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x98);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1444f5730

void * __thiscall
Audio::FTapDelayPitchShifter::_scalar_deleting_destructor_(FTapDelayPitchShifter *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FTapDelayPitchShifter_Audio__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1444f5770

void * __thiscall
Audio::FUniformPartitionConvolution::_scalar_deleting_destructor_
          (FUniformPartitionConvolution *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7FUniformPartitionConvolution_Audio__6B_;
  pFVar1 = (this->IsOutputZero).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->NonZeroGains).field_0x48 = 0;
  pvVar2 = *(void **)&(this->NonZeroGains).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<Audio::FUniformPartitionConvolution::FInputTransformOutputGroup,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<Audio::FUniformPartitionConvolution::FInputTransformOutputGroup,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<Audio::FUniformPartitionConvolution::FInputTransformOutputGroup,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->NonZeroGains);
  DestructItems<Audio::FUniformPartitionConvolution::FImpulseResponse,int>
            ((FImpulseResponse *)(this->ImpulseResponses).AllocatorInstance.Data,
             (this->ImpulseResponses).ArrayNum);
  pFVar1 = (this->ImpulseResponses).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<Audio::FUniformPartitionConvolution::FOutput,int>
            ((FOutput *)(this->Outputs).AllocatorInstance.Data,(this->Outputs).ArrayNum);
  pFVar1 = (this->Outputs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<Audio::FUniformPartitionConvolution::FInput,int>
            ((FInput *)(this->Inputs).AllocatorInstance.Data,(this->Inputs).ArrayNum);
  pFVar1 = (this->Inputs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->FFTAlgorithm).SharedReferenceCount.ReferenceController);
  pFVar1 = (this->TransformedAndScaledInput).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7IConvolutionAlgorithm_Audio__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xd8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1444f5860

void * __thiscall
Audio::FVectorRealToComplexFFT::_scalar_deleting_destructor_
          (FVectorRealToComplexFFT *this,uint param_1)

{
  FVectorComplexFFT *pFVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7FVectorRealToComplexFFT_Audio__6B_;
  pFVar1 = (this->ComplexFFT).Ptr;
  if (pFVar1 != (FVectorComplexFFT *)0x0) {
    pFVar2 = (pFVar1->InverseWorkBuffer).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    pFVar2 = (pFVar1->FinalWeights).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    pFVar2 = (pFVar1->FinalIndices).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    pFVar2 = (pFVar1->Radix4Weights).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    ::operator_delete(pFVar1,0x50);
  }
  pFVar2 = (this->InverseConvBuffers).BetaImag.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->InverseConvBuffers).BetaReal.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->InverseConvBuffers).AlphaImag.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->InverseConvBuffers).AlphaReal.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->ForwardConvBuffers).BetaImag.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->ForwardConvBuffers).BetaReal.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->ForwardConvBuffers).AlphaImag.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->ForwardConvBuffers).AlphaReal.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->WorkBuffer).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  IFFTAlgorithm::~IFFTAlgorithm((IFFTAlgorithm *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1444f5990

void * __thiscall
Audio::IAudioEncoder::_scalar_deleting_destructor_(IAudioEncoder *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7IAudioEncoder_Audio__6B_;
  pFVar1 = (this->CompressedDataBuffer).InternalBuffer.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->UncompressedAudioBuffer).InternalBuffer.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CurrentCompressedBuffer).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CurrentAudioBuffer).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x68);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1444f5a10

void * __thiscall
Audio::IConvolutionAlgorithm::_scalar_deleting_destructor_(IConvolutionAlgorithm *this,uint param_1)

{
  *this = (IConvolutionAlgorithm)&___7IConvolutionAlgorithm_Audio__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1444f5a50

void * __thiscall Audio::IOscBase::_scalar_deleting_destructor_(IOscBase *this,uint param_1)

{
  ~IOscBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x110);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1444f5a90

void * __thiscall
Audio::ISampleRateConverter::_scalar_deleting_destructor_(ISampleRateConverter *this,uint param_1)

{
  *this = (ISampleRateConverter)&___7ISampleRateConverter_Audio__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1444f5ad0

void * __thiscall
Audio::ISpectrumBandExtractor::_scalar_deleting_destructor_
          (ISpectrumBandExtractor *this,uint param_1)

{
  *this = (ISpectrumBandExtractor)&___7ISpectrumBandExtractor_Audio__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// FastTanh @ 1444fb700

float __cdecl Audio::FastTanh(float param_1)

{
  if (param_1 < __real_c0400000) {
    return __real_bf800000;
  }
  if (__real_40400000 < param_1) {
    return __real_3f800000;
  }
  return ((param_1 * param_1 + __real_41d80000) * param_1) /
         (param_1 * param_1 * __real_41100000 + __real_41d80000);
}

// FillArrayWithTriangle @ 1444fb760

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`anonymous_namespace'::FillArrayWithTriangle
          (float param_1,float param_2,float param_3,int *param_4,
          TArray<float,TSizedDefaultAllocator<32>_> *param_5)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  FScriptContainerElement *pFVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  float fVar15;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 auVar16 [16];
  float fVar20;
  float fVar21;
  
  iVar9 = 0;
  iVar8 = -((int)ROUND(__real_bf000000 - (param_1 + param_1)) >> 1);
  if (iVar8 < 0) {
    iVar8 = 0;
  }
  *param_4 = iVar8;
  uVar6 = (((int)ROUND((param_3 + param_3) - __real_3f000000) >> 1) - iVar8) + 1;
  if ((int)uVar6 < 0) {
    uVar6 = 0;
  }
  if ((int)uVar6 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar6);
  }
  piVar1 = &param_5->ArrayMax;
  param_5->ArrayNum = 0;
  if (*piVar1 < (int)uVar6) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar6,&param_5->AllocatorInstance,0,piVar1);
  }
  if (0 < (int)uVar6) {
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar6,&param_5->AllocatorInstance,&param_5->ArrayNum,piVar1);
    lVar7 = (longlong)(int)uVar6;
    memset((param_5->AllocatorInstance).Data,0,lVar7 * 4);
    pFVar2 = (param_5->AllocatorInstance).Data;
    fVar21 = param_2 - param_1;
    if (param_2 - param_1 <= __real_322bcc77) {
      fVar21 = __real_322bcc77;
    }
    fVar21 = __real_3f800000 / fVar21;
    fVar20 = param_3 - param_2;
    if (param_3 - param_2 <= __real_322bcc77) {
      fVar20 = __real_322bcc77;
    }
    fVar20 = __real_3f800000 / fVar20;
    if (7 < uVar6) {
      uVar3 = uVar6 & 0x80000007;
      if ((int)uVar3 < 0) {
        uVar3 = (uVar3 - 1 | 0xfffffff8) + 1;
      }
      pFVar11 = pFVar2;
      iVar10 = iVar8 + 6;
      iVar9 = 0;
      do {
        iVar4 = iVar8 + iVar9;
        iVar9 = iVar9 + 8;
        fVar15 = (float)(iVar4 + (int)__xmm_00000003000000020000000100000000);
        fVar17 = (float)(iVar4 + __xmm_00000003000000020000000100000000._4_4_);
        fVar18 = (float)(iVar4 + _UNK_150631e08);
        fVar19 = (float)(iVar4 + _UNK_150631e0c);
        auVar13._0_4_ = ~-(uint)(fVar15 < param_2) & (uint)((param_3 - fVar15) * fVar20);
        auVar13._4_4_ = ~-(uint)(fVar17 < param_2) & (uint)((param_3 - fVar17) * fVar20);
        auVar13._8_4_ = ~-(uint)(fVar18 < param_2) & (uint)((param_3 - fVar18) * fVar20);
        auVar13._12_4_ = ~-(uint)(fVar19 < param_2) & (uint)((param_3 - fVar19) * fVar20);
        auVar16._0_4_ = (uint)((fVar15 - param_1) * fVar21) & -(uint)(fVar15 < param_2);
        auVar16._4_4_ = (uint)((fVar17 - param_1) * fVar21) & -(uint)(fVar17 < param_2);
        auVar16._8_4_ = (uint)((fVar18 - param_1) * fVar21) & -(uint)(fVar18 < param_2);
        auVar16._12_4_ = (uint)((fVar19 - param_1) * fVar21) & -(uint)(fVar19 < param_2);
        auVar12 = maxps(ZEXT816(0),auVar13 | auVar16);
        *(undefined1 (*) [16])pFVar11 = auVar12;
        fVar15 = (float)(iVar10 + -2);
        fVar17 = (float)(iVar10 + -1);
        fVar18 = (float)iVar10;
        fVar19 = (float)(iVar10 + 1);
        auVar14._0_4_ = ~-(uint)(fVar15 < param_2) & (uint)((param_3 - fVar15) * fVar20);
        auVar14._4_4_ = ~-(uint)(fVar17 < param_2) & (uint)((param_3 - fVar17) * fVar20);
        auVar14._8_4_ = ~-(uint)(fVar18 < param_2) & (uint)((param_3 - fVar18) * fVar20);
        auVar14._12_4_ = ~-(uint)(fVar19 < param_2) & (uint)((param_3 - fVar19) * fVar20);
        auVar12._4_4_ = (uint)((fVar17 - param_1) * fVar21) & -(uint)(fVar17 < param_2);
        auVar12._0_4_ = (uint)((fVar15 - param_1) * fVar21) & -(uint)(fVar15 < param_2);
        auVar12._8_4_ = (uint)((fVar18 - param_1) * fVar21) & -(uint)(fVar18 < param_2);
        auVar12._12_4_ = (uint)((fVar19 - param_1) * fVar21) & -(uint)(fVar19 < param_2);
        auVar12 = maxps(ZEXT816(0),auVar14 | auVar12);
        *(undefined1 (*) [16])(pFVar11 + 0x10) = auVar12;
        pFVar11 = pFVar11 + 0x20;
        iVar10 = iVar10 + 8;
      } while (iVar9 < (int)(uVar6 - uVar3));
    }
    lVar5 = (longlong)iVar9;
    if (lVar5 < lVar7) {
      iVar9 = iVar9 + iVar8;
      do {
        fVar15 = (float)iVar9;
        if (param_2 <= fVar15) {
          fVar15 = (param_3 - fVar15) * fVar20;
        }
        else {
          fVar15 = (fVar15 - param_1) * fVar21;
        }
        if (fVar15 <= 0.0) {
          fVar15 = 0.0;
        }
        iVar9 = iVar9 + 1;
        *(float *)(pFVar2 + lVar5 * 4) = fVar15;
        lVar5 = lVar5 + 1;
      } while (lVar5 < lVar7);
    }
  }
  return;
}

// GenerateEnvelopeData @ 1444fe720

void __cdecl
Audio::Grain::GenerateEnvelopeData
          (TArray<float,TSizedDefaultAllocator<32>_> *param_1,int param_2,EEnvelope param_3)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  float fVar4;
  bool bVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  piVar1 = &param_1->ArrayMax;
  piVar2 = &param_1->ArrayNum;
  *piVar2 = 0;
  if (*piVar1 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&param_1->AllocatorInstance,0,piVar1);
  }
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,param_2,&param_1->AllocatorInstance,piVar2,piVar1);
  fVar10 = __real_40c90fdb;
  fVar11 = __real_3f000000;
  uVar9 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  fVar12 = __real_bf000000;
  fVar4 = __real_3f800000;
  fVar13 = 0.0;
  fVar14 = (float)param_2 - __real_3f800000;
  switch(param_3) {
  case Gaussian:
    uVar9 = 0;
    if (0 < param_2) {
      fVar11 = fVar14 * __real_3f000000;
      lVar7 = 0;
      fVar14 = __real_40d55555 / fVar14;
      do {
        fVar10 = (fVar13 - fVar11) * fVar14;
        fVar10 = expf(fVar10 * fVar10 * fVar12);
        uVar8 = 0;
        if ((int)uVar9 < *piVar2) {
          uVar8 = ~uVar9 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        fVar13 = fVar13 + fVar4;
        uVar9 = uVar9 + 1;
        *(float *)((param_1->AllocatorInstance).Data + lVar7) = fVar10;
        lVar7 = lVar7 + 4;
      } while ((int)uVar9 < param_2);
    }
    break;
  case Triangle:
    fVar14 = fVar14 * __real_3f000000;
    uVar8 = 0;
    if (0 < param_2) {
      lVar7 = 0;
      fVar12 = __real_3f800000 / fVar14;
      do {
        fVar11 = fVar13 - fVar14;
        uVar6 = 0;
        if ((int)uVar8 < *piVar2) {
          uVar6 = ~uVar8 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        fVar13 = fVar13 + fVar4;
        uVar8 = uVar8 + 1;
        *(float *)((param_1->AllocatorInstance).Data + lVar7) =
             fVar4 - (float)((uint)(fVar11 * fVar12) & uVar9);
        lVar7 = lVar7 + 4;
      } while ((int)uVar8 < param_2);
    }
    break;
  case DownwardTriangle:
    uVar9 = 0;
    if (0 < param_2) {
      lVar7 = 0;
      fVar14 = __real_3f800000 / fVar14;
      do {
        uVar8 = 0;
        if ((int)uVar9 < *piVar2) {
          uVar8 = ~uVar9 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        fVar12 = fVar14 * fVar13;
        uVar9 = uVar9 + 1;
        fVar13 = fVar13 + fVar4;
        *(float *)((param_1->AllocatorInstance).Data + lVar7) = fVar4 - fVar12;
        lVar7 = lVar7 + 4;
      } while ((int)uVar9 < param_2);
    }
    break;
  case UpwardTriangle:
    uVar9 = 0;
    if (0 < param_2) {
      lVar7 = 0;
      fVar14 = __real_3f800000 / fVar14;
      do {
        uVar8 = 0;
        if ((int)uVar9 < *piVar2) {
          uVar8 = ~uVar9 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        fVar12 = fVar14 * fVar13;
        uVar9 = uVar9 + 1;
        fVar13 = fVar13 + fVar4;
        *(float *)((param_1->AllocatorInstance).Data + lVar7) = fVar12;
        lVar7 = lVar7 + 4;
      } while ((int)uVar9 < param_2);
    }
    break;
  case ExponentialDecay:
    uVar9 = 0;
    if (0 < param_2) {
      lVar7 = 0;
      fVar14 = __real_3f800000 / fVar14;
      do {
        uVar8 = 0;
        if ((int)uVar9 < *piVar2) {
          uVar8 = ~uVar9 >> 0x1f;
        }
        fVar12 = ((fVar13 - (float)param_2) + fVar4) * fVar14;
        if ((uVar8 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        fVar13 = fVar13 + fVar4;
        fVar12 = fVar12 * fVar12;
        uVar9 = uVar9 + 1;
        *(float *)((param_1->AllocatorInstance).Data + lVar7) = fVar12 * fVar12;
        lVar7 = lVar7 + 4;
      } while ((int)uVar9 < param_2);
    }
    break;
  case ExponentialAttack:
    uVar9 = 0;
    if (0 < param_2) {
      lVar7 = 0;
      fVar14 = __real_3f800000 / fVar14;
      do {
        fVar12 = fVar14 * fVar13;
        uVar8 = 0;
        if ((int)uVar9 < *piVar2) {
          uVar8 = ~uVar9 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        fVar13 = fVar13 + fVar4;
        fVar12 = fVar12 * fVar12;
        uVar9 = uVar9 + 1;
        *(float *)((param_1->AllocatorInstance).Data + lVar7) = fVar12 * fVar12;
        lVar7 = lVar7 + 4;
      } while ((int)uVar9 < param_2);
    }
    break;
  case Hann:
    uVar9 = 0;
    if (0 < param_2) {
      lVar7 = 0;
      fVar14 = __real_3f800000 / fVar14;
      do {
        fVar12 = cosf(fVar13 * fVar10 * fVar14);
        uVar8 = 0;
        if ((int)uVar9 < *piVar2) {
          uVar8 = ~uVar9 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        fVar13 = fVar13 + fVar4;
        uVar9 = uVar9 + 1;
        *(float *)((param_1->AllocatorInstance).Data + lVar7) = fVar11 - fVar12 * fVar11;
        lVar7 = lVar7 + 4;
      } while ((int)uVar9 < param_2);
    }
  }
  return;
}

// GenerateHeaderPacket @ 1445018b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TArray<unsigned_char,TSizedDefaultAllocator<32>_> * __cdecl
GenerateHeaderPacket
          (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,int param_1,
          uint param_2)

{
  int *piVar1;
  int *piVar2;
  FScriptContainerElement FVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar7;
  longlong lVar8;
  
  if (8 < param_1) {
    bVar5 = FDebug::CheckVerifyFailedImpl2
                      ("NumChannels <= 8",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\OpusEncoder.cpp"
                       ,0x31,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
      return pTVar7;
    }
  }
  piVar1 = &__return_storage_ptr__->ArrayMax;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &__return_storage_ptr__->ArrayNum;
  *piVar2 = 0;
  *piVar1 = 0;
  iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,8,&__return_storage_ptr__->AllocatorInstance,piVar2,piVar1);
  *(undefined8 *)((__return_storage_ptr__->AllocatorInstance).Data + iVar6) = 0x646165487375704f;
  iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,1,&__return_storage_ptr__->AllocatorInstance,piVar2,piVar1);
  (__return_storage_ptr__->AllocatorInstance).Data[iVar6] = (FScriptContainerElement)0x1;
  iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,1,&__return_storage_ptr__->AllocatorInstance,piVar2,piVar1);
  (__return_storage_ptr__->AllocatorInstance).Data[iVar6] = SUB41(param_1,0);
  iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,2,&__return_storage_ptr__->AllocatorInstance,piVar2,piVar1);
  *(short *)((__return_storage_ptr__->AllocatorInstance).Data + iVar6) =
       (short)((int)ROUND(___real_45effc00) >> 1);
  iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,4,&__return_storage_ptr__->AllocatorInstance,piVar2,piVar1);
  *(uint *)((__return_storage_ptr__->AllocatorInstance).Data + iVar6) = param_2;
  iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,2,&__return_storage_ptr__->AllocatorInstance,piVar2,piVar1);
  *(undefined2 *)((__return_storage_ptr__->AllocatorInstance).Data + iVar6) = 0;
  iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,1,&__return_storage_ptr__->AllocatorInstance,piVar2,piVar1);
  (__return_storage_ptr__->AllocatorInstance).Data[iVar6] =
       (FScriptContainerElement)((char)SUB41(param_1,0) + -1);
  lVar8 = (longlong)param_1 * 0x10;
  FVar3 = *(FScriptContainerElement *)(&__xmm_ff00ff00ff00ff00ff00ff00ff00ff00 + lVar8);
  iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,1,&__return_storage_ptr__->AllocatorInstance,piVar2,piVar1);
  (__return_storage_ptr__->AllocatorInstance).Data[iVar6] = FVar3;
  FVar3 = *(FScriptContainerElement *)(&DAT_150d566a4 + lVar8);
  iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,1,&__return_storage_ptr__->AllocatorInstance,piVar2,piVar1);
  (__return_storage_ptr__->AllocatorInstance).Data[iVar6] = FVar3;
  if ((&DAT_150d566a8 + lVar8 == (undefined *)0x0) && (param_1 != 0)) {
    bVar5 = FDebug::CheckVerifyFailedImpl2
                      ("Ptr != nullptr || Count == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x9c1,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
      return pTVar7;
    }
  }
  iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,param_1,&__return_storage_ptr__->AllocatorInstance,piVar2,piVar1);
  if (param_1 != 0) {
    memcpy((__return_storage_ptr__->AllocatorInstance).Data + iVar6,&DAT_150d566a8 + lVar8,
           (longlong)param_1);
  }
  return __return_storage_ptr__;
}

// GetMultichannelBufferNumFrames @ 144503e10

int __cdecl
Audio::GetMultichannelBufferNumFrames
          (TArray<TArray<float,TAlignedHeapAllocator<16>_>,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [8];
  
  iVar4 = param_1->ArrayNum;
  if (iVar4 < 1) {
    return 0;
  }
  pFVar5 = (param_1->AllocatorInstance).Data;
  pFVar6 = pFVar5 + (longlong)iVar4 * 0x10;
  iVar1 = *(int *)(pFVar5 + 8);
  while( true ) {
    if (param_1->ArrayNum != iVar4) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TArray<float,TAlignedHeapAllocator<16>_>_const_,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar5 == pFVar6) break;
    if (iVar1 != *(int *)(pFVar5 + 8)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Algo::AllOf(InBuffer, [&NumFrames](const BufferType& Buffer) { return NumFrames == Buffer.Num(); })"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\MultichannelBuffer.cpp"
                         ,0x16,L"Buffers contain inconsistent frame sizes");
      if (!bVar3) {
        return iVar1;
      }
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
    pFVar5 = pFVar5 + 0x10;
  }
  return iVar1;
}

// GetMultichannelBufferNumFrames @ 144503ec0

int __cdecl
Audio::GetMultichannelBufferNumFrames
          (TArray<TArrayView<float,int>,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [8];
  
  iVar4 = param_1->ArrayNum;
  if (iVar4 < 1) {
    return 0;
  }
  pFVar5 = (param_1->AllocatorInstance).Data;
  pFVar6 = pFVar5 + (longlong)iVar4 * 0x10;
  iVar1 = *(int *)(pFVar5 + 8);
  while( true ) {
    if (param_1->ArrayNum != iVar4) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TArrayView<float,int>_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar5 == pFVar6) break;
    if (iVar1 != *(int *)(pFVar5 + 8)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Algo::AllOf(InBuffer, [&NumFrames](const BufferType& Buffer) { return NumFrames == Buffer.Num(); })"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\MultichannelBuffer.cpp"
                         ,0x16,L"Buffers contain inconsistent frame sizes");
      if (!bVar3) {
        return iVar1;
      }
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
    pFVar5 = pFVar5 + 0x10;
  }
  return iVar1;
}

// GetMultichannelBufferNumFrames @ 144503f70

int __cdecl
Audio::GetMultichannelBufferNumFrames
          (TArray<Audio::TCircularAudioBuffer<float,16>,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  int iVar7;
  undefined1 local_res8 [8];
  
  if (param_1->ArrayNum < 1) {
    return 0;
  }
  pFVar5 = (param_1->AllocatorInstance).Data;
  iVar7 = *(int *)(pFVar5 + 0x18) - *(int *)(pFVar5 + 0x14);
  if (*(int *)(pFVar5 + 0x18) < *(int *)(pFVar5 + 0x14)) {
    iVar7 = iVar7 + *(int *)(pFVar5 + 0x10);
  }
  iVar1 = param_1->ArrayNum;
  pFVar5 = (param_1->AllocatorInstance).Data;
  pFVar6 = pFVar5 + (longlong)iVar1 * 0x20;
  while( true ) {
    if (param_1->ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<Audio::TCircularAudioBuffer<float,16>_const_,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar5 == pFVar6) {
      return iVar7;
    }
    iVar4 = *(int *)(pFVar5 + 0x14);
    if (*(int *)(pFVar5 + 0x18) < iVar4) {
      iVar4 = *(int *)(pFVar5 + 0x10) - iVar4;
    }
    else {
      iVar4 = -iVar4;
    }
    if (iVar7 != *(int *)(pFVar5 + 0x18) + iVar4) break;
    pFVar5 = pFVar5 + 0x20;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Algo::AllOf(InBuffer, [&NumFrames](const BufferType& Buffer) { return NumFrames == Buffer.Num(); })"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\MultichannelBuffer.cpp"
                     ,0x16,L"Buffers contain inconsistent frame sizes");
  if (!bVar3) {
    return iVar7;
  }
  pcVar2 = (code *)swi(3);
  iVar7 = (*pcVar2)();
  return iVar7;
}

// GetScaleDegreeSet @ 144504a10

TArrayView<float,int> * __thiscall
Audio::ScaleDegreeSet::GetScaleDegreeSet
          (ScaleDegreeSet *this,TArrayView<float,int> *__return_storage_ptr__,bool param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<float,int> *pTVar4;
  
  if ((param_1) && ((this->ChordTones).ArrayNum != 0)) {
    TArrayView<float,int>::
    TArrayView<float,int><TArray<float,TSizedDefaultAllocator<32>_>_&,TArray<float,TSizedDefaultAllocator<32>_>_>
              (__return_storage_ptr__,&this->ChordTones);
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->DataPtr = (float *)(this->ScaleDegrees).AllocatorInstance.Data;
  iVar1 = (this->ScaleDegrees).ArrayNum;
  if (iVar1 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TArrayView<float,int> *)(*pcVar2)();
      return pTVar4;
    }
  }
  __return_storage_ptr__->ArrayNum = iVar1;
  return __return_storage_ptr__;
}

// HzToMel @ 144504ea0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float __cdecl Audio::HzToMel(float param_1)

{
  float fVar1;
  
  fVar1 = logf(param_1 * ___real_3abb3ee7 + __real_3f800000);
  return fVar1 * ___real_448ce000;
}

// MakeMultichannelBufferView @ 144509470

TArray<TArrayView<float,int>,TSizedDefaultAllocator<32>_> * __cdecl
Audio::MakeMultichannelBufferView
          (TArray<TArrayView<float,int>,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TArray<TArray<float,TAlignedHeapAllocator<16>_>,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  TArray<TArrayView<float,int>,TSizedDefaultAllocator<32>_> *pTVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  undefined1 local_res8 [8];
  
  piVar1 = &__return_storage_ptr__->ArrayMax;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  *piVar1 = 0;
  uVar2 = param_1->ArrayNum;
  if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
  }
  if (0 < (int)uVar2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,uVar2,&__return_storage_ptr__->AllocatorInstance,0,piVar1);
  }
  iVar3 = param_1->ArrayNum;
  pFVar8 = (param_1->AllocatorInstance).Data;
  pFVar10 = pFVar8 + (longlong)iVar3 * 0x10;
  while( true ) {
    if (param_1->ArrayNum != iVar3) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TArray<float,TAlignedHeapAllocator<16>_>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar8 == pFVar10) break;
    iVar6 = __return_storage_ptr__->ArrayNum;
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&__return_storage_ptr__->AllocatorInstance,piVar1);
    }
    __return_storage_ptr__->ArrayNum = iVar6 + 1;
    pFVar9 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar6 * 0x10;
    *(undefined8 *)pFVar9 = *(undefined8 *)pFVar8;
    iVar6 = *(int *)(pFVar8 + 8);
    if (iVar6 < 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TArray<TArrayView<float,int>,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
        return pTVar7;
      }
    }
    *(int *)(pFVar9 + 8) = iVar6;
    pFVar8 = pFVar8 + 0x10;
  }
  return __return_storage_ptr__;
}

// MakeMultichannelBufferView @ 1445095a0

TArray<TArrayView<float,int>,TSizedDefaultAllocator<32>_> * __cdecl
Audio::MakeMultichannelBufferView
          (TArray<TArrayView<float,int>,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TArray<TArray<float,TAlignedHeapAllocator<16>_>,TSizedDefaultAllocator<32>_> *param_1,
          int param_2,int param_3)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  ulonglong uVar8;
  TArray<TArrayView<float,int>,TSizedDefaultAllocator<32>_> *pTVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  undefined1 local_res8 [8];
  uint local_res10;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &__return_storage_ptr__->ArrayMax;
  __return_storage_ptr__->ArrayNum = 0;
  *piVar1 = 0;
  uVar2 = param_1->ArrayNum;
  if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
  }
  if (0 < (int)uVar2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,uVar2,&__return_storage_ptr__->AllocatorInstance,0,piVar1);
  }
  local_res10 = param_1->ArrayNum;
  uVar8 = (ulonglong)(int)local_res10;
  pFVar10 = (param_1->AllocatorInstance).Data;
  pFVar11 = pFVar10 + uVar8 * 0x10;
  while( true ) {
    if (param_1->ArrayNum != (int)uVar8) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TArray<float,TAlignedHeapAllocator<16>_>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar10 == pFVar11) break;
    if (param_2 + param_3 < param_1->ArrayNum) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InBuffer.Num() <= (InStartFrameIndex + InNumFrames)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\MultichannelBuffer.cpp"
                         ,0x54,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pTVar9 = (TArray<TArrayView<float,int>,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
        return pTVar9;
      }
    }
    lVar3 = *(longlong *)pFVar10;
    iVar7 = __return_storage_ptr__->ArrayNum;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&__return_storage_ptr__->AllocatorInstance,piVar1);
    }
    __return_storage_ptr__->ArrayNum = iVar7 + 1;
    pFVar4 = (__return_storage_ptr__->AllocatorInstance).Data;
    *(longlong *)(pFVar4 + (longlong)iVar7 * 0x10) = lVar3 + (longlong)param_2 * 4;
    *(int *)(pFVar4 + (longlong)iVar7 * 0x10 + 8) = param_3;
    if (param_3 < 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pTVar9 = (TArray<TArrayView<float,int>,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
        return pTVar9;
      }
    }
    uVar8 = (ulonglong)local_res10;
    pFVar10 = pFVar10 + 0x10;
  }
  return __return_storage_ptr__;
}

// MelToHz @ 144509c70

float __cdecl Audio::MelToHz(float param_1)

{
  float fVar1;
  
  fVar1 = expf(param_1 * __real_3a689a77);
  return (fVar1 - __real_3f800000) * __real_442f0000;
}

// MultiMonoMixUpOrDown @ 14450a270

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
Audio::MultiMonoMixUpOrDown
          (TArrayView<float_const_,int> *param_1,TArrayView<float,int> *param_2,int param_3,
          TArrayView<float_const_,int> *param_4,int param_5,int param_6)

{
  code *pcVar1;
  float *pfVar2;
  undefined8 uVar3;
  TArrayView<float_const_,int> *pTVar4;
  int iVar5;
  bool bVar6;
  uint uVar7;
  ForElementType<float_*> FVar8;
  ForElementType<float_const_*> FVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined1 auStack_918 [32];
  longlong local_8f8;
  longlong local_8f0;
  int local_8e8;
  ForElementType<float_const_*> local_8d8;
  undefined8 uStack_8d0;
  TArrayView<float_const_,int> *local_8c8;
  undefined8 uStack_8c0;
  ForElementType<float_*> local_8b8;
  int iStack_8b0;
  undefined4 uStack_8ac;
  TArrayView<float_const_,int> local_8a8;
  TArrayView<float_*,int> local_898;
  TArrayView<float_const_*,int> local_888;
  TArray<float_const_*,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>_> local_878;
  TArray<float_*,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>_> local_468;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_918;
  local_8d8 = (ForElementType<float_const_*>)param_2->DataPtr;
  uStack_8d0 = *(undefined8 *)&param_2->ArrayNum;
  pfVar2 = param_4->DataPtr;
  uVar3._0_4_ = param_4->ArrayNum;
  uVar3._4_4_ = *(undefined4 *)&param_4->field_0xc;
  uVar11 = 0;
  local_8e8 = param_5;
  local_468.AllocatorInstance.SecondaryData = (ForElementType<float_*>)0x0;
  local_468.ArrayNum = 0;
  local_468.ArrayMax = 0x80;
  local_8c8 = param_1;
  TArray<float_*,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>_>::SetNum
            (&local_468,param_6,Default);
  FVar9 = local_8d8;
  uVar12 = uVar11;
  uVar13 = uVar11;
  if (0 < param_6) {
    do {
      uVar10 = (uint)uVar13;
      uVar7 = 0;
      if ((int)uVar10 < local_468.ArrayNum) {
        uVar7 = ~uVar10 >> 0x1f;
      }
      if (uVar7 == 0) {
        local_8f8 = (longlong)(int)uVar10;
        local_8f0 = (longlong)local_468.ArrayNum;
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      FVar8 = (ForElementType<float_*>)&local_468;
      if (local_468.AllocatorInstance.SecondaryData != (ForElementType<float_*>)0x0) {
        FVar8 = local_468.AllocatorInstance.SecondaryData;
      }
      *(float **)((longlong)FVar8 + uVar11 * 8) =
           (float *)((longlong)FVar9 + (longlong)(int)uVar12 * 4);
      uVar11 = uVar11 + 1;
      uVar12 = (ulonglong)(uint)((int)uVar12 + param_3);
      uVar13 = (ulonglong)(uVar10 + 1);
      param_1 = local_8c8;
      param_5 = local_8e8;
    } while ((longlong)uVar11 < (longlong)param_6);
  }
  iVar5 = local_468.ArrayNum;
  uVar12 = 0;
  local_8b8 = (ForElementType<float_*>)&local_468;
  if (local_468.AllocatorInstance.SecondaryData != (ForElementType<float_*>)0x0) {
    local_8b8 = local_468.AllocatorInstance.SecondaryData;
  }
  if ((local_468.ArrayNum < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar6)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_8c8 = (TArrayView<float_const_,int> *)param_1->DataPtr;
  uStack_8c0 = *(undefined8 *)&param_1->ArrayNum;
  iStack_8b0 = iVar5;
  local_878.AllocatorInstance.SecondaryData = (ForElementType<float_const_*>)0x0;
  local_878.ArrayNum = 0;
  local_878.ArrayMax = 0x80;
  TArray<float_const_*,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>_>::SetNum
            (&local_878,param_5,Default);
  pTVar4 = local_8c8;
  uVar13 = uVar12;
  uVar11 = uVar12;
  if (0 < param_5) {
    do {
      uVar10 = (uint)uVar12;
      uVar7 = 0;
      if ((int)uVar10 < local_878.ArrayNum) {
        uVar7 = ~uVar10 >> 0x1f;
      }
      if (uVar7 == 0) {
        local_8f8 = (longlong)(int)uVar10;
        local_8f0 = (longlong)local_878.ArrayNum;
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      FVar9 = (ForElementType<float_const_*>)&local_878;
      if (local_878.AllocatorInstance.SecondaryData != (ForElementType<float_const_*>)0x0) {
        FVar9 = local_878.AllocatorInstance.SecondaryData;
      }
      uVar12 = (ulonglong)(uVar10 + 1);
      *(float **)((longlong)FVar9 + uVar11 * 8) =
           (float *)((longlong)pTVar4 + (longlong)(int)uVar13 * 4);
      uVar11 = uVar11 + 1;
      uVar13 = (ulonglong)(uint)((int)uVar13 + param_3);
    } while ((longlong)uVar11 < (longlong)param_5);
  }
  iVar5 = local_878.ArrayNum;
  local_8d8 = (ForElementType<float_const_*>)&local_878;
  if (local_878.AllocatorInstance.SecondaryData != (ForElementType<float_const_*>)0x0) {
    local_8d8 = local_878.AllocatorInstance.SecondaryData;
  }
  if ((local_878.ArrayNum < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar6)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_898._12_4_ = uStack_8ac;
  local_898.ArrayNum = iStack_8b0;
  uStack_8d0._0_4_ = iVar5;
  local_888.DataPtr = (float **)local_8d8;
  local_888.ArrayNum = iVar5;
  local_888._12_4_ = uStack_8d0._4_4_;
  local_898.DataPtr = (float **)local_8b8;
  local_8a8.DataPtr = pfVar2;
  local_8a8._8_8_ = uVar3;
  MultiMonoMixUpOrDown(&local_888,&local_898,param_3,&local_8a8);
  if (local_878.AllocatorInstance.SecondaryData != (ForElementType<float_const_*>)0x0) {
    FMemory::Free((void *)local_878.AllocatorInstance.SecondaryData);
  }
  if (local_468.AllocatorInstance.SecondaryData != (ForElementType<float_*>)0x0) {
    FMemory::Free((void *)local_468.AllocatorInstance.SecondaryData);
  }
  return;
}

// MultiMonoMixUpOrDown @ 14450a5a0

void __cdecl
Audio::MultiMonoMixUpOrDown
          (TArrayView<float_const_*,int> *param_1,TArrayView<float_*,int> *param_2,int param_3,
          TArrayView<float_const_,int> *param_4)

{
  float fVar1;
  int iVar2;
  int iVar3;
  float *_Dst;
  float *pfVar4;
  code *pcVar5;
  undefined8 uVar6;
  float fVar7;
  uint uVar8;
  bool bVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  uint local_res8;
  longlong local_c8;
  undefined4 uStack_ac;
  undefined4 uStack_9c;
  TArrayView<float,int> local_98;
  TArrayView<float_const_,int> local_88 [5];
  
  uVar8 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  fVar7 = __real_322bcc77;
  iVar2 = param_2->ArrayNum;
  iVar3 = param_1->ArrayNum;
  local_res8 = 0;
  if (0 < iVar2) {
    local_c8 = 0;
    do {
      uVar12 = 0;
      if ((int)local_res8 < param_2->ArrayNum) {
        uVar12 = ~local_res8 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      _Dst = *(float **)(local_c8 + (longlong)param_2->DataPtr);
      if ((param_3 < 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      memset(_Dst,0,(longlong)param_3 << 2);
      uVar12 = 0;
      lVar13 = 0;
      if (0 < (longlong)iVar3) {
        uVar6._4_4_ = uStack_ac;
        uVar6._0_4_ = param_3;
        uVar11 = local_res8;
        do {
          uVar10 = 0;
          if ((int)uVar11 < param_4->ArrayNum) {
            uVar10 = ~uVar11 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar9)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          fVar1 = param_4->DataPtr[(int)uVar11];
          if (fVar7 < (float)((uint)fVar1 & uVar8)) {
            uVar10 = 0;
            if ((int)uVar12 < param_1->ArrayNum) {
              uVar10 = ~uVar12 >> 0x1f;
            }
            if ((uVar10 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                   ,0x14f,
                                   L"Array index out of bounds: %lld from an array of size %lld"),
               bVar9)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pfVar4 = param_1->DataPtr[lVar13];
            if ((param_3 < 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("ArrayNum >= 0",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                   ,0xfe,L""), bVar9)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            local_88[0]._12_4_ = uStack_9c;
            local_88[0].ArrayNum = param_3;
            local_98.DataPtr = _Dst;
            local_98._8_8_ = uVar6;
            local_88[0].DataPtr = pfVar4;
            ArrayMixIn(local_88,&local_98,fVar1);
          }
          uVar12 = uVar12 + 1;
          uVar11 = uVar11 + iVar2;
          lVar13 = lVar13 + 1;
        } while (lVar13 < iVar3);
      }
      local_res8 = local_res8 + 1;
      local_c8 = local_c8 + 8;
    } while ((int)local_res8 < iVar2);
  }
  return;
}

// NewMelSpectrumKernelTransform @ 14450a8a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TUniquePtr<Audio::FContiguousSparse2DKernelTransform,TDefaultDelete<Audio::FContiguousSparse2DKernelTransform>_>
 __cdecl Audio::NewMelSpectrumKernelTransform
                   (FMelSpectrumKernelSettings *param_1,int param_2,float param_3)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  bool bVar7;
  int iVar8;
  FContiguousSparse2DKernelTransform *pFVar9;
  FContiguousSparse2DKernelTransform *pFVar10;
  TUniquePtr<Audio::FContiguousSparse2DKernelTransform,TDefaultDelete<Audio::FContiguousSparse2DKernelTransform>_>
  TVar11;
  undefined4 in_register_00000014;
  int *piVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  int in_R8D;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float in_XMM3_Da;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  int local_res18 [4];
  TArray<float,TSizedDefaultAllocator<32>_> local_128;
  FScriptContainerElement *local_118;
  int iStack_110;
  undefined4 uStack_10c;
  FScriptContainerElement *local_108;
  int iStack_100;
  undefined4 uStack_fc;
  TArrayView<float,int> local_f8;
  TArrayView<float_const_,int> local_e8 [11];
  
  fVar4 = __real_3f800000;
  piVar12 = (int *)CONCAT44(in_register_00000014,param_2);
  fVar17 = logf((float)piVar12[1] * ___real_3abb3ee7 + __real_3f800000);
  iVar1 = *piVar12;
  fVar17 = fVar17 * ___real_448ce000;
  fVar18 = logf((float)piVar12[2] * ___real_3abb3ee7 + fVar4);
  iVar13 = iVar1 + -1;
  if (iVar1 + -1 < 1) {
    iVar13 = 1;
  }
  iVar1 = in_R8D / 2 + 1;
  fVar24 = (fVar18 * ___real_448ce000 - fVar17) / (float)iVar13;
  fVar18 = (float)in_R8D / in_XMM3_Da;
  pFVar9 = ::operator_new(0x20);
  iVar13 = 0;
  pFVar10 = (FContiguousSparse2DKernelTransform *)0x0;
  if (pFVar9 != (FContiguousSparse2DKernelTransform *)0x0) {
    pFVar10 = FContiguousSparse2DKernelTransform::FContiguousSparse2DKernelTransform
                        (pFVar9,iVar1,*piVar12);
  }
  *(FContiguousSparse2DKernelTransform **)param_1 = pFVar10;
  fVar6 = __real_3a689a77;
  fVar5 = __real_3f000000;
  fVar19 = fVar17 - fVar24;
  if (0 < *piVar12) {
    do {
      fVar23 = fVar17 + fVar24;
      fVar19 = expf(fVar19 * fVar6);
      fVar22 = (fVar19 - fVar4) * __real_442f0000;
      fVar19 = expf(fVar23 * fVar6);
      fVar21 = (fVar19 - fVar4) * __real_442f0000;
      fVar20 = expf(fVar17 * fVar6);
      fVar19 = (float)piVar12[4];
      fVar20 = (fVar20 - fVar4) * __real_442f0000;
      if (fVar19 != fVar4) {
        fVar22 = (fVar22 - fVar20) * fVar19 + fVar20;
        fVar21 = (fVar21 - fVar20) * fVar19 + fVar20;
      }
      local_128.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_128.ArrayNum = 0;
      local_128.ArrayMax = 0;
      local_res18[0] = 0;
      ::`anonymous_namespace'::FillArrayWithTriangle
                (fVar22 * fVar18,fVar20 * fVar18,fVar21 * fVar18,local_res18,&local_128);
      if ((char)piVar12[3] != '\0') {
        fVar19 = (fVar21 * fVar18 - fVar22 * fVar18) * fVar5;
        if ((char)piVar12[3] == '\x01') {
          fVar19 = SQRT(fVar19);
        }
        if ((0.0 < fVar19) && (fVar19 != fVar4)) {
          iVar3 = local_128.ArrayNum;
          local_118 = local_128.AllocatorInstance.Data;
          if ((local_128.ArrayNum < 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("InCount >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xeb,L""), bVar7)) {
            pcVar2 = (code *)swi(3);
            TVar11.Ptr = (FContiguousSparse2DKernelTransform *)(*pcVar2)();
            return (TUniquePtr<Audio::FContiguousSparse2DKernelTransform,TDefaultDelete<Audio::FContiguousSparse2DKernelTransform>_>
                    )TVar11.Ptr;
          }
          iStack_110 = iVar3;
          local_f8._12_4_ = uStack_10c;
          local_f8.ArrayNum = iVar3;
          local_f8.DataPtr = (float *)local_118;
          ArrayMultiplyByConstantInPlace(&local_f8,fVar4 / fVar19);
        }
      }
      iVar3 = local_res18[0];
      uVar15 = iVar1 - local_res18[0];
      if (iVar1 - local_res18[0] < 0) {
        uVar15 = 0;
      }
      iVar8 = local_128.ArrayNum;
      if ((int)uVar15 < local_128.ArrayNum) {
        if (local_128.ArrayNum < (int)uVar15) {
          iVar16 = uVar15 - local_128.ArrayNum;
          iVar8 = UE::Core::Private::
                  ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (4,4,iVar16,&local_128.AllocatorInstance,&local_128.ArrayNum,
                             &local_128.ArrayMax);
          memset(local_128.AllocatorInstance.Data + (longlong)iVar8 * 4,0,(longlong)iVar16 << 2);
LAB_14450ac60:
          iVar8 = local_128.ArrayNum;
        }
        else {
          if ((int)uVar15 < 0) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar15);
          }
          if ((int)uVar15 < local_128.ArrayNum) {
            uVar14 = local_128.ArrayNum - uVar15;
            if ((int)(uVar14 | uVar15) < 0) {
              bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x458,
                                 L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                );
              if (bVar7) {
                pcVar2 = (code *)swi(3);
                TVar11.Ptr = (FContiguousSparse2DKernelTransform *)(*pcVar2)();
                return (TUniquePtr<Audio::FContiguousSparse2DKernelTransform,TDefaultDelete<Audio::FContiguousSparse2DKernelTransform>_>
                        )TVar11.Ptr;
              }
              iVar8 = local_128.ArrayNum;
            }
            if (uVar14 != 0) {
              iVar16 = (iVar8 - uVar15) - uVar14;
              if (iVar16 != 0) {
                memmove(local_128.AllocatorInstance.Data + (longlong)(int)uVar15 * 4,
                        local_128.AllocatorInstance.Data + (longlong)(int)uVar15 * 4 +
                        (longlong)(int)uVar14 * 4,(longlong)iVar16 << 2);
                iVar8 = local_128.ArrayNum;
              }
              local_128.ArrayNum = iVar8 - uVar14;
              UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (4,4,&local_128.AllocatorInstance,iVar8 - uVar14,&local_128.ArrayMax);
              goto LAB_14450ac60;
            }
          }
        }
      }
      if (iVar1 < iVar3) {
        iVar3 = 0;
      }
      pFVar9 = *(FContiguousSparse2DKernelTransform **)param_1;
      local_108 = local_128.AllocatorInstance.Data;
      local_res18[0] = iVar3;
      if ((iVar8 < 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar7)) {
        pcVar2 = (code *)swi(3);
        TVar11.Ptr = (FContiguousSparse2DKernelTransform *)(*pcVar2)();
        return (TUniquePtr<Audio::FContiguousSparse2DKernelTransform,TDefaultDelete<Audio::FContiguousSparse2DKernelTransform>_>
                )TVar11.Ptr;
      }
      local_e8[0]._12_4_ = uStack_fc;
      local_e8[0].ArrayNum = iVar8;
      local_e8[0].DataPtr = (float *)local_108;
      iStack_100 = iVar8;
      FContiguousSparse2DKernelTransform::SetRow(pFVar9,iVar13,iVar3,local_e8);
      if (local_128.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_128.AllocatorInstance.Data);
      }
      iVar13 = iVar13 + 1;
      fVar19 = fVar17;
      fVar17 = fVar23;
    } while (iVar13 < *piVar12);
  }
  return (TUniquePtr<Audio::FContiguousSparse2DKernelTransform,TDefaultDelete<Audio::FContiguousSparse2DKernelTransform>_>
          )(FContiguousSparse2DKernelTransform *)param_1;
}

// PerlinValueNoise1D @ 14450bc20

float __cdecl Audio::PerlinValueNoise1D(float param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  ulonglong uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  uVar3 = (ulonglong)(uint)param_2;
  if ((param_2 < 1) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InNumOctaves > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\PerlinNoise.cpp"
                         ,10,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    fVar4 = (float)(*pcVar1)();
    return fVar4;
  }
  fVar4 = __real_3f800000;
  fVar6 = 0.0;
  fVar8 = 0.0;
  fVar7 = __real_3f800000;
  if (0 < param_2) {
    do {
      fVar5 = FMath::PerlinNoise1D(fVar7 * param_1);
      fVar8 = fVar8 + fVar4 / fVar7;
      fVar6 = fVar6 + fVar5 * (fVar4 / fVar7);
      uVar3 = uVar3 - 1;
      fVar7 = fVar7 + fVar7;
    } while (uVar3 != 0);
  }
  return fVar6 / fVar8;
}

// PerlinValueNoise1DBuffer @ 14450bd10

void __cdecl
Audio::PerlinValueNoise1DBuffer
          (TArrayView<float_const_,int> *param_1,float param_2,int param_3,
          TArrayView<float,int> *param_4)

{
  float fVar1;
  uint uVar2;
  code *pcVar3;
  float fVar4;
  bool bVar5;
  ulonglong uVar6;
  float *pfVar7;
  float *pfVar8;
  ulonglong uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  uVar2 = param_4->ArrayNum;
  uVar9 = (ulonglong)uVar2;
  pfVar7 = param_4->DataPtr;
  pfVar8 = param_1->DataPtr;
  if (((int)uVar2 < param_1->ArrayNum) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InXBuffer.Num() <= Size",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\PerlinNoise.cpp"
                         ,0x21,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  fVar4 = __real_3f800000;
  if (0 < (int)uVar2) {
    do {
      fVar1 = *pfVar8;
      pfVar8 = pfVar8 + 1;
      if ((param_3 < 1) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("InNumOctaves > 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\PerlinNoise.cpp"
                             ,10,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      fVar13 = 0.0;
      fVar14 = 0.0;
      if (0 < param_3) {
        uVar6 = (ulonglong)(uint)param_3;
        fVar12 = fVar4;
        do {
          fVar11 = fVar4 / fVar12;
          fVar10 = FMath::PerlinNoise1D((fVar1 + param_2) * fVar12);
          fVar14 = fVar14 + fVar11;
          fVar12 = fVar12 + fVar12;
          fVar13 = fVar13 + fVar10 * fVar11;
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
      }
      *pfVar7 = fVar13 / fVar14;
      pfVar7 = pfVar7 + 1;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  return;
}

// SetMultichannelBufferSize @ 14451b8f0

void __cdecl
Audio::SetMultichannelBufferSize
          (int param_1,int param_2,
          TArray<TArray<float,TAlignedHeapAllocator<16>_>,TSizedDefaultAllocator<32>_> *param_3)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res8 [8];
  
  piVar1 = &param_3->ArrayNum;
  iVar3 = *piVar1;
  if (iVar3 < param_1) {
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,param_1 - iVar3,&param_3->AllocatorInstance,piVar1,&param_3->ArrayMax)
    ;
    memset((param_3->AllocatorInstance).Data + (longlong)iVar6 * 0x10,0,
           (longlong)(param_1 - iVar3) << 4);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar3) {
      uVar7 = iVar3 - param_1;
      if ((int)(uVar7 | param_1) < 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          );
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      if (uVar7 != 0) {
        TArray<TArray<float,TAlignedHeapAllocator<16>_>,TSizedDefaultAllocator<32>_>::RemoveAtImpl
                  (param_3,param_1,uVar7);
      }
    }
  }
  pFVar9 = (param_3->AllocatorInstance).Data;
  iVar3 = *piVar1;
  pFVar8 = pFVar9 + (longlong)iVar3 * 0x10;
  while( true ) {
    if (*piVar1 != iVar3) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TArray<float,TAlignedHeapAllocator<16>_>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar9 == pFVar8) break;
    iVar6 = *(int *)&pFVar9[8].field_0x0;
    pFVar2 = pFVar9 + 8;
    if (iVar6 < param_2) {
      UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                (4,4,param_2 - iVar6,(ForAnyElementType *)pFVar9,(int *)pFVar2,(int *)(pFVar9 + 0xc)
                );
      pFVar9 = pFVar9 + 0x10;
    }
    else {
      if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_2);
      }
      if (param_2 < iVar6) {
        uVar7 = iVar6 - param_2;
        if ((int)(uVar7 | param_2) < 0) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            );
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        if (uVar7 != 0) {
          iVar6 = (*(int *)&pFVar2->field_0x0 - uVar7) - param_2;
          if (iVar6 != 0) {
            memmove(*(FScriptContainerElement **)&pFVar9->field_0x0 + (longlong)param_2 * 4,
                    *(FScriptContainerElement **)&pFVar9->field_0x0 + (longlong)param_2 * 4 +
                    (longlong)(int)uVar7 * 4,(longlong)iVar6 << 2);
          }
          *(uint *)&pFVar2->field_0x0 = *(int *)&pFVar2->field_0x0 - uVar7;
        }
      }
      pFVar9 = pFVar9 + 0x10;
    }
  }
  return;
}

// SetMultichannelCircularBufferCapacity @ 14451baf0

void __cdecl
Audio::SetMultichannelCircularBufferCapacity
          (int param_1,int param_2,
          TArray<Audio::TCircularAudioBuffer<float,16>,TSizedDefaultAllocator<32>_> *param_3)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  FScriptContainerElement *pFVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  uint uVar9;
  FScriptContainerElement *pFVar10;
  undefined1 local_res8 [8];
  
  piVar1 = &param_3->ArrayNum;
  iVar2 = *piVar1;
  if (iVar2 < param_1) {
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,param_1 - iVar2,&param_3->AllocatorInstance,piVar1,&param_3->ArrayMax)
    ;
    DefaultConstructItems<Audio::TCircularAudioBuffer<float,16>,int>
              ((param_3->AllocatorInstance).Data + (longlong)iVar6 * 0x20,param_1 - iVar2);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar2) {
      uVar9 = iVar2 - param_1;
      if ((int)(uVar9 | param_1) < 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          );
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      if (uVar9 != 0) {
        TArray<Audio::TCircularAudioBuffer<float,16>,TSizedDefaultAllocator<32>_>::RemoveAtImpl
                  (param_3,param_1,uVar9);
      }
    }
  }
  pFVar8 = (param_3->AllocatorInstance).Data;
  iVar2 = *piVar1;
  pFVar10 = pFVar8 + (longlong)iVar2 * 0x20;
  while( true ) {
    if (*piVar1 != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<Audio::TCircularAudioBuffer<float,16>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar8 == pFVar10) break;
    if (0x7ffffffe < (uint)param_2) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCapacity < (uint32)TNumericLimits<int32>::Max()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Public\\DSP\\Dsp.h"
                         ,0x373,
                         L"Max capacity for this buffer is 2,147,483,647 samples. Otherwise our index arithmetic will not work."
                        );
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    *(int *)&pFVar8[0x10].field_0x0 = param_2 + 1;
    pFVar4 = pFVar8 + 0xc;
    LOCK();
    *(undefined4 *)(pFVar8 + 0x14) = 0;
    UNLOCK();
    LOCK();
    *(undefined4 *)&pFVar8[0x18].field_0x0 = 0;
    UNLOCK();
    iVar6 = *(int *)pFVar4;
    *(int *)&pFVar8[8].field_0x0 = 0;
    if (iVar6 < 0) {
      UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                (4,4,0,(ForAnyElementType *)pFVar8,0,(int *)pFVar4);
    }
    iVar6 = *(int *)&pFVar8[0x10].field_0x0;
    iVar7 = UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                      (4,4,iVar6,(ForAnyElementType *)pFVar8,(int *)(pFVar8 + 8),(int *)pFVar4);
    memset(*(FScriptContainerElement **)&pFVar8->field_0x0 + (longlong)iVar7 * 4,0,
           (longlong)iVar6 << 2);
    pFVar8 = pFVar8 + 0x20;
  }
  return;
}

// ShiftMultichannelBufferView @ 14451d0a0

void __cdecl
Audio::ShiftMultichannelBufferView
          (int param_1,TArray<TArrayView<float,int>,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  undefined4 uStack_3c;
  
  iVar5 = GetMultichannelBufferNumFrames(param_2);
  iVar7 = iVar5;
  if (param_1 < iVar5) {
    iVar7 = param_1;
  }
  iVar10 = 0;
  if (0 < iVar7) {
    iVar10 = iVar7;
  }
  iVar7 = param_2->ArrayNum;
  iVar8 = iVar5 - iVar10;
  uVar9 = 0;
  if (0 < iVar7) {
    lVar11 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar9 < iVar7) {
        uVar6 = ~uVar9 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar1 = (param_2->AllocatorInstance).Data;
      if ((iVar10 < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x15b,L"Invalid index (%lld)"), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((iVar8 < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("InNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x15c,L"Invalid count (%lld)"), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((*(int *)(pFVar1 + lVar11 + 8) < iVar5) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index + InNum <= ArrayNum",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x15d,
                             L"Range (index: %lld, count: %lld) lies outside the view of %lld elements"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      lVar2 = *(longlong *)(pFVar1 + lVar11);
      if ((iVar8 < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar6 = 0;
      if ((int)uVar9 < param_2->ArrayNum) {
        uVar6 = ~uVar9 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar9 = uVar9 + 1;
      pFVar1 = (param_2->AllocatorInstance).Data + lVar11;
      *(longlong *)pFVar1 = (longlong)iVar10 * 4 + lVar2;
      *(longlong *)(pFVar1 + 8) = CONCAT44(uStack_3c,iVar8);
      iVar7 = param_2->ArrayNum;
      lVar11 = lVar11 + 0x10;
    } while ((int)uVar9 < iVar7);
  }
  return;
}

// SliceMultichannelBufferView @ 14451d2e0

TArray<TArrayView<float,int>,TSizedDefaultAllocator<32>_> * __cdecl
Audio::SliceMultichannelBufferView
          (TArray<TArrayView<float,int>,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TArray<TArrayView<float,int>,TSizedDefaultAllocator<32>_> *param_1,int param_2,int param_3
          )

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  TArray<TArrayView<float,int>,TSizedDefaultAllocator<32>_> *pTVar7;
  uint uVar8;
  longlong lVar9;
  undefined4 uStack_2c;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  uVar8 = 0;
  iVar6 = param_1->ArrayNum;
  if (0 < iVar6) {
    lVar9 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar8 < iVar6) {
        uVar5 = ~uVar8 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TArray<TArrayView<float,int>,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
        return pTVar7;
      }
      pFVar1 = (param_1->AllocatorInstance).Data;
      if ((param_2 < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x15b,L"Invalid index (%lld)"), bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TArray<TArrayView<float,int>,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
        return pTVar7;
      }
      if ((param_3 < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("InNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x15c,L"Invalid count (%lld)"), bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TArray<TArrayView<float,int>,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
        return pTVar7;
      }
      if ((*(int *)(pFVar1 + lVar9 + 8) < param_3 + param_2) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index + InNum <= ArrayNum",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x15d,
                             L"Range (index: %lld, count: %lld) lies outside the view of %lld elements"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TArray<TArrayView<float,int>,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
        return pTVar7;
      }
      lVar2 = *(longlong *)(pFVar1 + lVar9);
      if ((param_3 < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TArray<TArrayView<float,int>,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
        return pTVar7;
      }
      iVar6 = __return_storage_ptr__->ArrayNum;
      if (iVar6 == __return_storage_ptr__->ArrayMax) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&__return_storage_ptr__->AllocatorInstance,
                           &__return_storage_ptr__->ArrayMax);
      }
      uVar8 = uVar8 + 1;
      __return_storage_ptr__->ArrayNum = iVar6 + 1;
      lVar9 = lVar9 + 0x10;
      pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar6 * 0x10;
      *(longlong *)pFVar1 = (longlong)param_2 * 4 + lVar2;
      *(ulonglong *)(pFVar1 + 8) = CONCAT44(uStack_2c,param_3);
      iVar6 = param_1->ArrayNum;
    } while ((int)uVar8 < iVar6);
  }
  return __return_storage_ptr__;
}

// IMPLEMENT_MODULE_SignalProcessing @ 144520cd0

void __cdecl IMPLEMENT_MODULE_SignalProcessing(void)

{
  return;
}

// _ov_header_fseek_wrap @ 144520ce0

int __cdecl _ov_header_fseek_wrap(_iobuf *param_1,long64 param_2,int param_3)

{
  int iVar1;
  
  if (param_1 == (_iobuf *)0x0) {
    return -1;
  }
                    /* WARNING: Could not recover jumptable at 0x000144520ceb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _fseeki64((FILE *)param_1,param_2,param_3);
  return iVar1;
}

// ScaleDegreeSetMap'' @ 15036c030

void __cdecl `dynamic_atexit_destructor_for_'Audio::FMidiNoteQuantizer::ScaleDegreeSetMap__(void)

{
  Audio::FMidiNoteQuantizer::ScaleDegreeSetMap._72_4_ = 0;
  if (Audio::FMidiNoteQuantizer::ScaleDegreeSetMap._64_8_ != 0) {
    FMemory::Free((void *)Audio::FMidiNoteQuantizer::ScaleDegreeSetMap._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_Audio::EMusicalScale::Scale,Audio::ScaleDegreeSet>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_Audio::EMusicalScale::Scale,Audio::ScaleDegreeSet>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&Audio::FMidiNoteQuantizer::ScaleDegreeSetMap);
  return;
}

// `dynamic_atexit_destructor_for_'CVarMultithreadedPatchingPushCallsPerOutputCleanupCheck'' @ 15036c070

void __cdecl
_dynamic_atexit_destructor_for__CVarMultithreadedPatchingPushCallsPerOutputCleanupCheck__(void)

{
  CVarMultithreadedPatchingPushCallsPerOutputCleanupCheck._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarMultithreadedPatchingPushCallsPerOutputCleanupCheck);
  return;
}

// `dynamic_atexit_destructor_for_'LogSignalProcessing'' @ 15036c090

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogSignalProcessing__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogSignalProcessing);
  return;
}

// `dynamic_atexit_destructor_for_'SineWaveTable'' @ 15036c0b0

void __cdecl
`Audio::FSineWaveTableOsc::GetWaveTable'::__l2::_dynamic_atexit_destructor_for__SineWaveTable__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = SineWaveTable.AllocatorInstance.Data;
  if (SineWaveTable.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (SineWaveTable.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

