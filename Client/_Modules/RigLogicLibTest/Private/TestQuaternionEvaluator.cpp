// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigLogicLibTest
// Functions: 97

// `dynamic_initializer_for_'gtest_QuaternionEvaluatorTest_EvaluatePerLOD_registered_'' @ 141364cf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
_dynamic_initializer_for__gtest_QuaternionEvaluatorTest_EvaluatePerLOD_registered___(void)

{
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar1;
  char *pcVar2;
  undefined8 uVar3;
  ulong64 uVar4;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar5;
  undefined1 auStackY_a8 [32];
  Types4<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>,std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>_>
  local_78;
  vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  local_70;
  _Bxty local_58;
  undefined8 local_48;
  ulonglong uStack_40;
  undefined4 local_38;
  char *local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  local_70._Mypair._Myval2._Myend =
       (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
  local_70._Mypair._Myval2._Myfirst =
       (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
  local_70._Mypair._Myval2._Mylast =
       (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
  testing::internal::
  GenerateNamesRecursively<testing::internal::DefaultNameGenerator,testing::internal::Types4<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>,std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>_>_>
            (local_78,&local_70,0);
  local_28 = 0;
  pcVar2 = std::_Allocate<16,std::_Default_allocate_traits>(0xa0);
  uVar3 = s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x91;
  *(undefined8 *)pcVar2 = s_C__Workspace_UnrealEngine_Engin._0_8_;
  *(undefined8 *)(pcVar2 + 8) = uVar3;
  uVar3 = s_C__Workspace_UnrealEngine_Engin._24_8_;
  local_18 = 0x9f;
  *(undefined8 *)(pcVar2 + 0x10) = s_C__Workspace_UnrealEngine_Engin._16_8_;
  *(undefined8 *)(pcVar2 + 0x18) = uVar3;
  uVar3 = s_C__Workspace_UnrealEngine_Engin._40_8_;
  *(undefined8 *)(pcVar2 + 0x20) = s_C__Workspace_UnrealEngine_Engin._32_8_;
  *(undefined8 *)(pcVar2 + 0x28) = uVar3;
  uVar3 = s_C__Workspace_UnrealEngine_Engin._56_8_;
  *(undefined8 *)(pcVar2 + 0x30) = s_C__Workspace_UnrealEngine_Engin._48_8_;
  *(undefined8 *)(pcVar2 + 0x38) = uVar3;
  uVar3 = s_C__Workspace_UnrealEngine_Engin._72_8_;
  *(undefined8 *)(pcVar2 + 0x40) = s_C__Workspace_UnrealEngine_Engin._64_8_;
  *(undefined8 *)(pcVar2 + 0x48) = uVar3;
  uVar3 = s_C__Workspace_UnrealEngine_Engin._88_8_;
  *(undefined8 *)(pcVar2 + 0x50) = s_C__Workspace_UnrealEngine_Engin._80_8_;
  *(undefined8 *)(pcVar2 + 0x58) = uVar3;
  uVar3 = s_C__Workspace_UnrealEngine_Engin._104_8_;
  *(undefined8 *)(pcVar2 + 0x60) = s_C__Workspace_UnrealEngine_Engin._96_8_;
  *(undefined8 *)(pcVar2 + 0x68) = uVar3;
  uVar3 = s_C__Workspace_UnrealEngine_Engin._120_8_;
  *(undefined8 *)(pcVar2 + 0x70) = s_C__Workspace_UnrealEngine_Engin._112_8_;
  *(undefined8 *)(pcVar2 + 0x78) = uVar3;
  uVar3 = s_C__Workspace_UnrealEngine_Engin._136_8_;
  *(undefined8 *)(pcVar2 + 0x80) = s_C__Workspace_UnrealEngine_Engin._128_8_;
  *(undefined8 *)(pcVar2 + 0x88) = uVar3;
  pcVar2[0x90] = s_C__Workspace_UnrealEngine_Engin[0x90];
  pcVar2[0x91] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar2;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0xa0);
  local_48 = ___xmm_000000000000009f0000000000000091;
  uStack_40 = _UNK_15288ff18;
  uVar3 = *(undefined8 *)(pcVar2 + 8);
  *(undefined8 *)local_58._Ptr = *(undefined8 *)pcVar2;
  *(undefined8 *)(local_58._Ptr + 8) = uVar3;
  uVar3 = *(undefined8 *)(pcVar2 + 0x18);
  *(undefined8 *)(local_58._Ptr + 0x10) = *(undefined8 *)(pcVar2 + 0x10);
  *(undefined8 *)(local_58._Ptr + 0x18) = uVar3;
  uVar3 = *(undefined8 *)(pcVar2 + 0x28);
  *(undefined8 *)(local_58._Ptr + 0x20) = *(undefined8 *)(pcVar2 + 0x20);
  *(undefined8 *)(local_58._Ptr + 0x28) = uVar3;
  uVar3 = *(undefined8 *)(pcVar2 + 0x38);
  *(undefined8 *)(local_58._Ptr + 0x30) = *(undefined8 *)(pcVar2 + 0x30);
  *(undefined8 *)(local_58._Ptr + 0x38) = uVar3;
  uVar3 = *(undefined8 *)(pcVar2 + 0x48);
  *(undefined8 *)(local_58._Ptr + 0x40) = *(undefined8 *)(pcVar2 + 0x40);
  *(undefined8 *)(local_58._Ptr + 0x48) = uVar3;
  uVar3 = *(undefined8 *)(pcVar2 + 0x58);
  *(undefined8 *)(local_58._Ptr + 0x50) = *(undefined8 *)(pcVar2 + 0x50);
  *(undefined8 *)(local_58._Ptr + 0x58) = uVar3;
  uVar3 = *(undefined8 *)(pcVar2 + 0x68);
  *(undefined8 *)(local_58._Ptr + 0x60) = *(undefined8 *)(pcVar2 + 0x60);
  *(undefined8 *)(local_58._Ptr + 0x68) = uVar3;
  uVar3 = *(undefined8 *)(pcVar2 + 0x78);
  *(undefined8 *)(local_58._Ptr + 0x70) = *(undefined8 *)(pcVar2 + 0x70);
  *(undefined8 *)(local_58._Ptr + 0x78) = uVar3;
  uVar3 = *(undefined8 *)(pcVar2 + 0x88);
  *(undefined8 *)(local_58._Ptr + 0x80) = *(undefined8 *)(pcVar2 + 0x80);
  *(undefined8 *)(local_58._Ptr + 0x88) = uVar3;
  *(undefined2 *)(local_58._Ptr + 0x90) = *(undefined2 *)(pcVar2 + 0x90);
  local_38 = 0x8d;
  gtest_QuaternionEvaluatorTest_EvaluatePerLOD_registered_ =
       testing::internal::
       TypeParameterizedTest<`anonymous_namespace'::QuaternionEvaluatorTest,testing::internal::TemplateSel<QuaternionEvaluatorTest_EvaluatePerLOD_Test>,testing::internal::Types4<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>,std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>_>_>
       ::Register("",(CodeLocation *)&local_58,"QuaternionEvaluatorTest","EvaluatePerLOD",0,
                  &local_70);
  if (0xf < uStack_40) {
    uVar4 = uStack_40 + 1;
    uVar3 = local_58._Ptr;
    if (0xfff < uVar4) {
      uVar3 = *(undefined8 *)(local_58._Ptr + -8);
      uVar4 = uStack_40 + 0x28;
      if ((char *)0x1f < local_58._Ptr + (-8 - uVar3)) goto LAB_141364f5e;
    }
    operator_delete((void *)uVar3,uVar4);
  }
  local_58._Ptr = local_58._Ptr & 0xffffffffffffff00;
  local_48 = ___xmm_000000000000000f0000000000000000;
  uStack_40 = _UNK_15076add8;
  operator_delete(pcVar2,0xa0);
  pbVar1 = local_70._Mypair._Myval2._Mylast;
  pbVar5 = local_70._Mypair._Myval2._Myfirst;
  if (local_70._Mypair._Myval2._Myfirst !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    for (; pbVar5 != pbVar1; pbVar5 = pbVar5 + 1) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate(pbVar5)
      ;
    }
    uVar4 = (longlong)local_70._Mypair._Myval2._Myend - (longlong)local_70._Mypair._Myval2._Myfirst
            & 0xffffffffffffffe0;
    pbVar5 = local_70._Mypair._Myval2._Myfirst;
    if (0xfff < uVar4) {
      pbVar5 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_70._Mypair._Myval2._Myfirst[-1]._Mypair._Myval2._Myres;
      uVar4 = uVar4 + 0x27;
      if (0x1f < (ulonglong)((longlong)local_70._Mypair._Myval2._Myfirst + (-8 - (longlong)pbVar5)))
      {
LAB_141364f5e:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    operator_delete(pbVar5,uVar4);
  }
  return;
}

// calculate @ 14c563690

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
rl4::
VectorizedJointGroupQuaternionCalculationStrategy<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>
::calculate(VectorizedJointGroupQuaternionCalculationStrategy<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>
            *this,JointGroup<float> *param_1,ArrayView<float_const_> *param_2,
           ArrayView<float> *param_3,ushort param_4)

{
  ushort uVar1;
  float *pfVar2;
  undefined1 auVar3 [16];
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  float *pfVar7;
  float *pfVar8;
  ulonglong uVar9;
  uint uVar10;
  ushort *puVar11;
  float *pfVar12;
  LODRegion *pLVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ushort *puVar16;
  longlong lVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  float fVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 in_XMM4 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar67;
  float fVar68;
  undefined1 auVar65 [16];
  float fVar69;
  undefined1 auVar66 [16];
  undefined1 auVar70 [16];
  vec<3,tdm::ang<float,tdm::impl::radians>_> local_418;
  ushort *local_408;
  float *local_400;
  quat<float> local_3f8;
  float *local_3e8;
  undefined1 local_3d8 [8];
  float fStack_3d0;
  float fStack_3cc;
  undefined1 local_3c8 [8];
  undefined8 uStack_3c0;
  undefined8 local_3b8;
  float fStack_3b0;
  float fStack_3ac;
  LODRegion *local_3a8;
  ushort *local_3a0;
  ArrayView<float> *local_398;
  ushort *local_390;
  ArrayView<float_const_> *local_388;
  undefined1 local_378 [8];
  float fStack_370;
  float fStack_36c;
  undefined1 local_368 [8];
  float fStack_360;
  float fStack_35c;
  undefined1 local_358 [8];
  float fStack_350;
  float fStack_34c;
  undefined1 local_348 [8];
  float fStack_340;
  float fStack_33c;
  undefined1 local_338 [8];
  float fStack_330;
  float fStack_32c;
  undefined1 local_328 [8];
  float fStack_320;
  float fStack_31c;
  undefined1 local_318 [8];
  float fStack_310;
  float fStack_30c;
  undefined1 local_308 [8];
  float fStack_300;
  float fStack_2fc;
  undefined1 local_2f8 [8];
  undefined8 uStack_2f0;
  undefined1 local_2e8 [8];
  float fStack_2e0;
  float fStack_2dc;
  undefined1 local_2d8 [8];
  float fStack_2d0;
  float fStack_2cc;
  undefined1 local_2c8 [8];
  float fStack_2c0;
  float fStack_2bc;
  undefined1 local_2b8 [8];
  float fStack_2b0;
  float fStack_2ac;
  undefined1 local_2a8 [8];
  float fStack_2a0;
  float fStack_29c;
  undefined1 local_298 [8];
  float fStack_290;
  float fStack_28c;
  undefined1 local_288 [8];
  float fStack_280;
  float fStack_27c;
  undefined1 local_278 [8];
  float fStack_270;
  float fStack_26c;
  undefined1 local_268 [8];
  float fStack_260;
  float fStack_25c;
  undefined1 local_258 [8];
  undefined8 uStack_250;
  undefined1 local_248 [8];
  float fStack_240;
  float fStack_23c;
  undefined1 local_238 [8];
  float fStack_230;
  float fStack_22c;
  undefined1 local_228 [8];
  float fStack_220;
  float fStack_21c;
  undefined1 local_218 [8];
  float fStack_210;
  float fStack_20c;
  undefined1 local_208 [8];
  float fStack_200;
  float fStack_1fc;
  undefined1 local_1f8 [8];
  float fStack_1f0;
  float fStack_1ec;
  undefined1 local_1e8 [8];
  float fStack_1e0;
  float fStack_1dc;
  undefined1 local_1d8 [8];
  float fStack_1d0;
  float fStack_1cc;
  undefined1 local_1c8 [8];
  undefined8 uStack_1c0;
  undefined1 local_1b8 [8];
  float fStack_1b0;
  float fStack_1ac;
  undefined1 local_1a8 [8];
  float fStack_1a0;
  float fStack_19c;
  longlong local_198;
  longlong local_190;
  float local_188 [4];
  undefined8 local_178;
  undefined8 uStack_170;
  float local_168 [4];
  float local_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  float local_148 [4];
  float local_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float local_128 [4];
  float local_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float local_108 [4];
  float local_f8 [4];
  float local_e8 [4];
  float local_d8 [44];
  
  fVar47 = _UNK_15076b1fc;
  fVar44 = _UNK_15076b1f8;
  fVar20 = _UNK_15076b1f4;
  fVar4 = ___xmm_3f8000003f8000003f8000003f800000;
  local_3a8 = (param_1->lods)._Mypair._Myval2._Myfirst;
  puVar16 = (param_1->outputIndices)._Mypair._Myval2._Myfirst;
  uVar15 = (ulonglong)param_1->colCount;
  local_400 = (param_1->values)._Mypair._Myval2._Myfirst;
  uVar9 = (ulonglong)param_4;
  local_408 = (param_1->inputIndices)._Mypair._Myval2._Myfirst;
  local_198 = uVar9 * 3;
  local_190 = uVar15 << 4;
  uVar14 = (ulonglong)local_3a8[uVar9].inputLODs.size;
  local_390 = puVar16 + local_3a8[uVar9].outputLODs.size;
  local_3a0 = puVar16 + local_3a8[uVar9].outputLODs.sizePaddedToLastFullBlock;
  local_3e8 = (float *)(puVar16 + local_3a8[uVar9].outputLODs.sizePaddedToSecondLastFullBlock);
  local_398 = param_3;
  local_388 = param_2;
  if (puVar16 < local_3e8) {
    pfVar12 = param_2->ptr;
    pfVar7 = local_400 + 0x14;
    auVar25._0_12_ = ZEXT812(0);
    auVar25._12_4_ = 0;
    pfVar2 = param_3->ptr;
    do {
      uVar9 = 0;
      local_188[0] = 0.0;
      local_188[1] = 0.0;
      local_188[2] = 0.0;
      local_188[3] = 0.0;
      local_168[0] = 0.0;
      local_168[1] = 0.0;
      local_168[2] = 0.0;
      local_168[3] = 0.0;
      local_158 = 0.0;
      fStack_154 = 0.0;
      fStack_150 = 0.0;
      fStack_14c = 0.0;
      local_148[2] = 0.0;
      local_148[3] = 0.0;
      fStack_130 = 0.0;
      fStack_12c = 0.0;
      local_148[0] = local_188[0];
      local_148[1] = local_188[1];
      local_138 = local_188[0];
      fStack_134 = local_188[1];
      local_118 = fVar4;
      fStack_114 = fVar20;
      fStack_110 = fVar44;
      fStack_10c = fVar47;
      local_128[0] = fVar4;
      local_128[1] = fVar20;
      local_128[2] = fVar44;
      local_128[3] = fVar47;
      local_178 = (undefined1  [8])0;
      uStack_170 = 0;
      if (uVar14 != 0) {
        local_338._4_4_ = fVar20;
        local_338._0_4_ = fVar4;
        fStack_330 = fVar44;
        fStack_32c = fVar47;
        local_328._4_4_ = fVar20;
        local_328._0_4_ = fVar4;
        fStack_320 = fVar44;
        fStack_31c = fVar47;
        local_2e8._4_4_ = fVar20;
        local_2e8._0_4_ = fVar4;
        fStack_2e0 = fVar44;
        fStack_2dc = fVar47;
        local_2d8._4_4_ = fVar20;
        local_2d8._0_4_ = fVar4;
        fStack_2d0 = fVar44;
        fStack_2cc = fVar47;
        local_288._4_4_ = fVar20;
        local_288._0_4_ = fVar4;
        fStack_280 = fVar44;
        fStack_27c = fVar47;
        local_278._4_4_ = fVar20;
        local_278._0_4_ = fVar4;
        fStack_270 = fVar44;
        fStack_26c = fVar47;
        local_1b8._4_4_ = fVar20;
        local_1b8._0_4_ = fVar4;
        fStack_1b0 = fVar44;
        fStack_1ac = fVar47;
        local_1a8._4_4_ = fVar20;
        local_1a8._0_4_ = fVar4;
        fStack_1a0 = fVar44;
        fStack_19c = fVar47;
        pfVar8 = pfVar7;
        _local_3d8 = auVar25;
        _local_378 = auVar25;
        _local_368 = auVar25;
        _local_358 = auVar25;
        _local_348 = auVar25;
        _local_318 = auVar25;
        _local_308 = auVar25;
        _local_2c8 = auVar25;
        _local_2b8 = auVar25;
        _local_2a8 = auVar25;
        _local_298 = auVar25;
        _local_268 = auVar25;
        _local_248 = auVar25;
        _local_238 = auVar25;
        _local_228 = auVar25;
        _local_218 = auVar25;
        _local_208 = auVar25;
        _local_1f8 = auVar25;
        _local_1e8 = auVar25;
        _local_1d8 = auVar25;
        _local_1c8 = auVar25;
        do {
          fVar33 = pfVar12[local_408[uVar9]];
          fVar56 = fVar33 * pfVar8[-0x14];
          fVar58 = fVar33 * pfVar8[-0x13];
          fVar60 = fVar33 * pfVar8[-0x12];
          fVar62 = fVar33 * pfVar8[-0x11];
          fVar42 = fVar33 * pfVar8[-0xc];
          fVar45 = fVar33 * pfVar8[-0xb];
          fVar48 = fVar33 * pfVar8[-10];
          fVar50 = fVar33 * pfVar8[-9];
          fVar34 = fVar33 * pfVar8[-4];
          fVar35 = fVar33 * pfVar8[-3];
          fVar36 = fVar33 * pfVar8[-2];
          fVar37 = fVar33 * pfVar8[-1];
          auVar65._0_4_ = fVar33 * pfVar8[-0x10];
          auVar65._4_4_ = fVar33 * pfVar8[-0xf];
          auVar65._8_4_ = fVar33 * pfVar8[-0xe];
          auVar65._12_4_ = fVar33 * pfVar8[-0xd];
          fVar52 = fVar33 * pfVar8[-8];
          fVar53 = fVar33 * pfVar8[-7];
          fVar54 = fVar33 * pfVar8[-6];
          fVar55 = fVar33 * pfVar8[-5];
          fVar38 = fVar33 * *pfVar8;
          fVar39 = fVar33 * pfVar8[1];
          fVar40 = fVar33 * pfVar8[2];
          fVar41 = fVar33 * pfVar8[3];
          fVar26 = (float)((uint)fVar4 & -(uint)(0.0 <= pfVar8[8]) |
                          ~-(uint)(0.0 <= pfVar8[8]) & ___xmm_bf800000bf800000bf800000bf800000) *
                   (fVar4 - fVar33) + fVar33 * pfVar8[8];
          fVar27 = (float)((uint)fVar20 & -(uint)(0.0 <= pfVar8[9]) |
                          ~-(uint)(0.0 <= pfVar8[9]) & _UNK_15076c664) * (fVar20 - fVar33) +
                   fVar33 * pfVar8[9];
          fVar28 = (float)((uint)fVar44 & -(uint)(0.0 <= pfVar8[10]) |
                          ~-(uint)(0.0 <= pfVar8[10]) & _UNK_15076c668) * (fVar44 - fVar33) +
                   fVar33 * pfVar8[10];
          fVar29 = (float)((uint)fVar47 & -(uint)(0.0 <= pfVar8[0xb]) |
                          ~-(uint)(0.0 <= pfVar8[0xb]) & _UNK_15076c66c) * (fVar47 - fVar33) +
                   fVar33 * pfVar8[0xb];
          fVar30 = (float)((uint)fVar4 & -(uint)(0.0 <= pfVar8[4]) |
                          ~-(uint)(0.0 <= pfVar8[4]) & ___xmm_bf800000bf800000bf800000bf800000) *
                   (fVar4 - fVar33) + fVar33 * pfVar8[4];
          fVar31 = (float)((uint)fVar20 & -(uint)(0.0 <= pfVar8[5]) |
                          ~-(uint)(0.0 <= pfVar8[5]) & _UNK_15076c664) * (fVar20 - fVar33) +
                   fVar33 * pfVar8[5];
          fVar32 = (float)((uint)fVar44 & -(uint)(0.0 <= pfVar8[6]) |
                          ~-(uint)(0.0 <= pfVar8[6]) & _UNK_15076c668) * (fVar44 - fVar33) +
                   fVar33 * pfVar8[6];
          fVar33 = (float)((uint)fVar47 & -(uint)(0.0 <= pfVar8[7]) |
                          ~-(uint)(0.0 <= pfVar8[7]) & _UNK_15076c66c) * (fVar47 - fVar33) +
                   fVar33 * pfVar8[7];
          auVar18._0_4_ = fVar38 * fVar38;
          auVar18._4_4_ = fVar39 * fVar39;
          auVar18._8_4_ = fVar40 * fVar40;
          auVar18._12_4_ = fVar41 * fVar41;
          auVar21._0_4_ = fVar42 * fVar42 + fVar56 * fVar56 + fVar34 * fVar34 + fVar30 * fVar30;
          auVar21._4_4_ = fVar45 * fVar45 + fVar58 * fVar58 + fVar35 * fVar35 + fVar31 * fVar31;
          auVar21._8_4_ = fVar48 * fVar48 + fVar60 * fVar60 + fVar36 * fVar36 + fVar32 * fVar32;
          auVar21._12_4_ = fVar50 * fVar50 + fVar62 * fVar62 + fVar37 * fVar37 + fVar33 * fVar33;
          auVar24 = rsqrtps(in_XMM4,auVar21);
          fVar56 = auVar24._0_4_ * fVar56;
          fVar58 = auVar24._4_4_ * fVar58;
          fVar60 = auVar24._8_4_ * fVar60;
          fVar62 = auVar24._12_4_ * fVar62;
          auVar24._4_4_ =
               fVar53 * fVar53 + auVar65._4_4_ * auVar65._4_4_ + auVar18._4_4_ + fVar27 * fVar27;
          auVar24._0_4_ =
               fVar52 * fVar52 + auVar65._0_4_ * auVar65._0_4_ + auVar18._0_4_ + fVar26 * fVar26;
          auVar24._8_4_ =
               fVar54 * fVar54 + auVar65._8_4_ * auVar65._8_4_ + auVar18._8_4_ + fVar28 * fVar28;
          auVar24._12_4_ =
               fVar55 * fVar55 + auVar65._12_4_ * auVar65._12_4_ + auVar18._12_4_ + fVar29 * fVar29;
          auVar24 = rsqrtps(auVar18,auVar24);
          fVar43 = auVar24._0_4_;
          fVar46 = auVar24._4_4_;
          fVar49 = auVar24._8_4_;
          fVar51 = auVar24._12_4_;
          fVar57 = fVar43 * auVar65._0_4_;
          fVar59 = fVar46 * auVar65._4_4_;
          fVar61 = fVar49 * auVar65._8_4_;
          fVar63 = fVar51 * auVar65._12_4_;
          auVar24 = rsqrtps(auVar65,auVar21);
          fVar38 = fVar43 * fVar38;
          fVar39 = fVar46 * fVar39;
          fVar40 = fVar49 * fVar40;
          fVar41 = fVar51 * fVar41;
          fVar64 = auVar24._0_4_;
          fVar67 = auVar24._4_4_;
          fVar68 = auVar24._8_4_;
          fVar69 = auVar24._12_4_;
          fVar34 = fVar64 * fVar34;
          fVar35 = fVar67 * fVar35;
          fVar36 = fVar68 * fVar36;
          fVar37 = fVar69 * fVar37;
          fVar26 = fVar43 * fVar26;
          fVar27 = fVar46 * fVar27;
          fVar28 = fVar49 * fVar28;
          fVar29 = fVar51 * fVar29;
          fVar42 = fVar64 * fVar42;
          fVar45 = fVar67 * fVar45;
          fVar48 = fVar68 * fVar48;
          fVar50 = fVar69 * fVar50;
          fVar64 = fVar64 * fVar30;
          fVar67 = fVar67 * fVar31;
          fVar68 = fVar68 * fVar32;
          fVar69 = fVar69 * fVar33;
          fVar43 = fVar43 * fVar52;
          fVar46 = fVar46 * fVar53;
          fVar49 = fVar49 * fVar54;
          fVar51 = fVar51 * fVar55;
          local_188[0] = (fVar64 * (float)local_318._0_4_ + fVar56 * (float)local_338._0_4_ +
                         fVar42 * (float)local_358._0_4_) - fVar34 * (float)local_378._0_4_;
          local_188[1] = (fVar67 * (float)local_318._4_4_ + fVar58 * (float)local_338._4_4_ +
                         fVar45 * (float)local_358._4_4_) - fVar35 * (float)local_378._4_4_;
          local_188[2] = (fVar68 * fStack_310 + fVar60 * fStack_330 + fVar48 * fStack_350) -
                         fVar36 * fStack_370;
          local_188[3] = (fVar69 * fStack_30c + fVar62 * fStack_32c + fVar50 * fStack_34c) -
                         fVar37 * fStack_36c;
          local_3b8 = CONCAT44(local_188[1],local_188[0]);
          fStack_3b0 = local_188[2];
          fStack_3ac = local_188[3];
          local_3c8._0_4_ = local_1c8._0_4_;
          uVar5 = local_3c8._0_4_;
          local_3c8._4_4_ = local_1c8._4_4_;
          uVar6 = local_3c8._4_4_;
          uStack_3c0._0_4_ = local_1c8._8_4_;
          fVar33 = (float)uStack_3c0;
          uStack_3c0._4_4_ = local_1c8._12_4_;
          fVar30 = uStack_3c0._4_4_;
          local_3c8._4_4_ =
               (fVar27 * (float)local_3c8._4_4_ + fVar59 * (float)local_328._4_4_ +
               fVar46 * (float)local_348._4_4_) - fVar39 * (float)local_368._4_4_;
          local_3c8._0_4_ =
               (fVar26 * (float)local_3c8._0_4_ + fVar57 * (float)local_328._0_4_ +
               fVar43 * (float)local_348._0_4_) - fVar38 * (float)local_368._0_4_;
          uStack_3c0._0_4_ =
               (fVar28 * (float)uStack_3c0 + fVar61 * fStack_320 + fVar49 * fStack_340) -
               fVar40 * fStack_360;
          uStack_3c0._4_4_ =
               (fVar29 * uStack_3c0._4_4_ + fVar63 * fStack_31c + fVar51 * fStack_33c) -
               fVar41 * fStack_35c;
          local_168[0] = (fVar64 * (float)local_2a8._0_4_ - fVar56 * (float)local_2c8._0_4_) +
                         fVar42 * (float)local_2e8._0_4_ + fVar34 * (float)local_308._0_4_;
          local_168[1] = (fVar67 * (float)local_2a8._4_4_ - fVar58 * (float)local_2c8._4_4_) +
                         fVar45 * (float)local_2e8._4_4_ + fVar35 * (float)local_308._4_4_;
          local_168[2] = (fVar68 * fStack_2a0 - fVar60 * fStack_2c0) + fVar48 * fStack_2e0 +
                         fVar36 * fStack_300;
          local_168[3] = (fVar69 * fStack_29c - fVar62 * fStack_2bc) + fVar50 * fStack_2dc +
                         fVar37 * fStack_2fc;
          local_378._4_4_ = local_168[1];
          local_378._0_4_ = local_168[0];
          fStack_370 = local_168[2];
          fStack_36c = local_168[3];
          local_158 = (fVar26 * (float)local_298._0_4_ - fVar57 * (float)local_2b8._0_4_) +
                      fVar43 * (float)local_2d8._0_4_ + fVar38 * (float)uVar5;
          fStack_154 = (fVar27 * (float)local_298._4_4_ - fVar59 * (float)local_2b8._4_4_) +
                       fVar46 * (float)local_2d8._4_4_ + fVar39 * (float)uVar6;
          fStack_150 = (fVar28 * fStack_290 - fVar61 * fStack_2b0) + fVar49 * fStack_2d0 +
                       fVar40 * fVar33;
          fStack_14c = (fVar29 * fStack_28c - fVar63 * fStack_2ac) + fVar51 * fStack_2cc +
                       fVar41 * fVar30;
          in_XMM4._0_4_ = fVar56 * (float)local_1d8._0_4_;
          in_XMM4._4_4_ = fVar58 * (float)local_1d8._4_4_;
          in_XMM4._8_4_ = fVar60 * fStack_1d0;
          in_XMM4._12_4_ = fVar62 * fStack_1cc;
          local_368._4_4_ = fStack_154;
          local_368._0_4_ = local_158;
          fStack_360 = fStack_150;
          fStack_35c = fStack_14c;
          local_148[0] = ((fVar64 * (float)local_228._0_4_ + fVar56 * (float)local_248._0_4_) -
                         fVar42 * (float)local_268._0_4_) + fVar34 * (float)local_288._0_4_;
          local_148[1] = ((fVar67 * (float)local_228._4_4_ + fVar58 * (float)local_248._4_4_) -
                         fVar45 * (float)local_268._4_4_) + fVar35 * (float)local_288._4_4_;
          local_148[2] = ((fVar68 * fStack_220 + fVar60 * fStack_240) - fVar48 * fStack_260) +
                         fVar36 * fStack_280;
          local_148[3] = ((fVar69 * fStack_21c + fVar62 * fStack_23c) - fVar50 * fStack_25c) +
                         fVar37 * fStack_27c;
          local_128[0] = ((fVar64 * (float)local_1b8._0_4_ - in_XMM4._0_4_) -
                         fVar42 * (float)local_1f8._0_4_) - fVar34 * (float)local_3d8._0_4_;
          local_128[1] = ((fVar67 * (float)local_1b8._4_4_ - in_XMM4._4_4_) -
                         fVar45 * (float)local_1f8._4_4_) - fVar35 * (float)local_3d8._4_4_;
          local_128[2] = ((fVar68 * fStack_1b0 - in_XMM4._8_4_) - fVar48 * fStack_1f0) -
                         fVar36 * fStack_3d0;
          local_128[3] = ((fVar69 * fStack_1ac - in_XMM4._12_4_) - fVar50 * fStack_1ec) -
                         fVar37 * fStack_3cc;
          local_358._4_4_ = local_148[1];
          local_358._0_4_ = local_148[0];
          fStack_350 = local_148[2];
          fStack_34c = local_148[3];
          local_138 = ((fVar26 * (float)local_218._0_4_ + fVar57 * (float)local_238._0_4_) -
                      fVar43 * (float)uVar5) + fVar38 * (float)local_278._0_4_;
          fStack_134 = ((fVar27 * (float)local_218._4_4_ + fVar59 * (float)local_238._4_4_) -
                       fVar46 * (float)uVar6) + fVar39 * (float)local_278._4_4_;
          fStack_130 = ((fVar28 * fStack_210 + fVar61 * fStack_230) - fVar49 * fVar33) +
                       fVar40 * fStack_270;
          fStack_12c = ((fVar29 * fStack_20c + fVar63 * fStack_22c) - fVar51 * fVar30) +
                       fVar41 * fStack_26c;
          local_118 = ((fVar26 * (float)local_1a8._0_4_ - fVar57 * (float)uVar5) -
                      fVar43 * (float)local_1e8._0_4_) - fVar38 * (float)local_208._0_4_;
          fStack_114 = ((fVar27 * (float)local_1a8._4_4_ - fVar59 * (float)uVar6) -
                       fVar46 * (float)local_1e8._4_4_) - fVar39 * (float)local_208._4_4_;
          fStack_110 = ((fVar28 * fStack_1a0 - fVar61 * fVar33) - fVar49 * fStack_1e0) -
                       fVar40 * fStack_200;
          fStack_10c = ((fVar29 * fStack_19c - fVar63 * fVar30) - fVar51 * fStack_1dc) -
                       fVar41 * fStack_1fc;
          local_348._4_4_ = fStack_134;
          local_348._0_4_ = local_138;
          fStack_340 = fStack_130;
          fStack_33c = fStack_12c;
          uVar9 = uVar9 + 1;
          pfVar8 = pfVar8 + 0x20;
          local_338._4_4_ = local_128[1];
          local_338._0_4_ = local_128[0];
          fStack_330 = local_128[2];
          fStack_32c = local_128[3];
          local_328._4_4_ = fStack_114;
          local_328._0_4_ = local_118;
          fStack_320 = fStack_110;
          fStack_31c = fStack_10c;
          fStack_310 = local_188[2];
          local_318 = (undefined1  [8])local_3b8;
          fStack_30c = local_188[3];
          fStack_300 = local_188[2];
          local_308 = (undefined1  [8])local_3b8;
          fStack_2fc = local_188[3];
          uStack_2f0 = uStack_3c0;
          local_2f8 = local_3c8;
          local_2e8._4_4_ = local_128[1];
          local_2e8._0_4_ = local_128[0];
          fStack_2e0 = local_128[2];
          fStack_2dc = local_128[3];
          local_2d8._4_4_ = fStack_114;
          local_2d8._0_4_ = local_118;
          fStack_2d0 = fStack_110;
          fStack_2cc = fStack_10c;
          local_2c8._4_4_ = local_148[1];
          local_2c8._0_4_ = local_148[0];
          fStack_2c0 = local_148[2];
          fStack_2bc = local_148[3];
          local_2b8._4_4_ = fStack_134;
          local_2b8._0_4_ = local_138;
          fStack_2b0 = fStack_130;
          fStack_2ac = fStack_12c;
          local_2a8._4_4_ = local_168[1];
          local_2a8._0_4_ = local_168[0];
          fStack_2a0 = local_168[2];
          fStack_29c = local_168[3];
          local_298._4_4_ = fStack_154;
          local_298._0_4_ = local_158;
          fStack_290 = fStack_150;
          fStack_28c = fStack_14c;
          local_288._4_4_ = local_128[1];
          local_288._0_4_ = local_128[0];
          fStack_280 = local_128[2];
          fStack_27c = local_128[3];
          local_278._4_4_ = fStack_114;
          local_278._0_4_ = local_118;
          fStack_270 = fStack_110;
          fStack_26c = fStack_10c;
          fStack_260 = local_188[2];
          local_268 = (undefined1  [8])local_3b8;
          fStack_25c = local_188[3];
          uStack_250 = uStack_3c0;
          local_258 = local_3c8;
          local_248._4_4_ = local_168[1];
          local_248._0_4_ = local_168[0];
          fStack_240 = local_168[2];
          fStack_23c = local_168[3];
          local_238._4_4_ = fStack_154;
          local_238._0_4_ = local_158;
          fStack_230 = fStack_150;
          fStack_22c = fStack_14c;
          local_228._4_4_ = local_148[1];
          local_228._0_4_ = local_148[0];
          fStack_220 = local_148[2];
          fStack_21c = local_148[3];
          local_218._4_4_ = fStack_134;
          local_218._0_4_ = local_138;
          fStack_210 = fStack_130;
          fStack_20c = fStack_12c;
          local_3d8._4_4_ = local_148[1];
          local_3d8._0_4_ = local_148[0];
          fStack_3d0 = local_148[2];
          fStack_3cc = local_148[3];
          local_208._4_4_ = fStack_134;
          local_208._0_4_ = local_138;
          fStack_200 = fStack_130;
          fStack_1fc = fStack_12c;
          local_1f8._4_4_ = local_168[1];
          local_1f8._0_4_ = local_168[0];
          fStack_1f0 = local_168[2];
          fStack_1ec = local_168[3];
          local_1e8._4_4_ = fStack_154;
          local_1e8._0_4_ = local_158;
          fStack_1e0 = fStack_150;
          fStack_1dc = fStack_14c;
          fStack_1d0 = local_188[2];
          local_1d8 = (undefined1  [8])local_3b8;
          fStack_1cc = local_188[3];
          uStack_1c0 = uStack_3c0;
          local_1c8 = local_3c8;
          local_1b8._4_4_ = local_128[1];
          local_1b8._0_4_ = local_128[0];
          fStack_1b0 = local_128[2];
          fStack_1ac = local_128[3];
          local_1a8._4_4_ = fStack_114;
          local_1a8._0_4_ = local_118;
          fStack_1a0 = fStack_110;
          fStack_19c = fStack_10c;
          local_178 = local_3c8;
          uStack_170 = uStack_3c0;
        } while (uVar9 < uVar14);
      }
      pfVar8 = local_148;
      lVar17 = 8;
      puVar11 = puVar16 + 2;
      do {
        local_3f8.x = pfVar8[-0x10];
        local_3f8.y = pfVar8[-8];
        local_3f8.z = *pfVar8;
        local_3f8.w = pfVar8[8];
        tdm::quat<float>::euler<0>(&local_3f8,&local_418);
        pfVar8 = pfVar8 + 1;
        pfVar2[puVar11[-2]] = local_418.values[0].value;
        pfVar2[puVar11[-1]] = local_418.values[1].value;
        pfVar2[*puVar11] = local_418.values[2].value;
        lVar17 = lVar17 + -1;
        puVar11 = puVar11 + 4;
      } while (lVar17 != 0);
      puVar16 = puVar16 + 0x20;
      local_400 = local_400 + uVar15 * 0x20;
      pfVar7 = pfVar7 + uVar15 * 0x20;
    } while (puVar16 < local_3e8);
  }
  fVar47 = _UNK_15076b1fc;
  fVar44 = _UNK_15076b1f8;
  fVar20 = _UNK_15076b1f4;
  fVar4 = ___xmm_3f8000003f8000003f8000003f800000;
  if (puVar16 < local_3a0) {
    pfVar12 = local_388->ptr;
    pfVar7 = local_400 + 0x14;
    auVar70._0_12_ = ZEXT812(0);
    auVar70._12_4_ = 0;
    pfVar2 = local_398->ptr;
    lVar17 = local_198;
    pLVar13 = local_3a8;
    do {
      uVar9 = 0;
      local_188[0] = 0.0;
      local_188[1] = 0.0;
      local_188[2] = 0.0;
      local_188[3] = 0.0;
      fVar33 = 0.0;
      fVar30 = 0.0;
      fVar43 = 0.0;
      fVar46 = 0.0;
      local_168[0] = 0.0;
      local_168[1] = 0.0;
      local_168[2] = 0.0;
      local_168[3] = 0.0;
      local_158 = 0.0;
      fStack_154 = 0.0;
      fStack_150 = 0.0;
      fStack_14c = 0.0;
      local_148[2] = 0.0;
      local_148[3] = 0.0;
      fStack_130 = 0.0;
      fStack_12c = 0.0;
      local_148[0] = local_188[0];
      local_148[1] = local_188[1];
      local_138 = local_188[0];
      fStack_134 = local_188[1];
      local_118 = fVar4;
      fStack_114 = fVar20;
      fStack_110 = fVar44;
      fStack_10c = fVar47;
      local_128[0] = fVar4;
      local_128[1] = fVar20;
      local_128[2] = fVar44;
      local_128[3] = fVar47;
      if (uVar14 != 0) {
        local_1e8._4_4_ = fVar20;
        local_1e8._0_4_ = fVar4;
        fStack_1e0 = fVar44;
        fStack_1dc = fVar47;
        local_1f8._4_4_ = fVar20;
        local_1f8._0_4_ = fVar4;
        fStack_1f0 = fVar44;
        fStack_1ec = fVar47;
        local_238._4_4_ = fVar20;
        local_238._0_4_ = fVar4;
        fStack_230 = fVar44;
        fStack_22c = fVar47;
        local_248._4_4_ = fVar20;
        local_248._0_4_ = fVar4;
        fStack_240 = fVar44;
        fStack_23c = fVar47;
        local_298._4_4_ = fVar20;
        local_298._0_4_ = fVar4;
        fStack_290 = fVar44;
        fStack_28c = fVar47;
        local_2a8._4_4_ = fVar20;
        local_2a8._0_4_ = fVar4;
        fStack_2a0 = fVar44;
        fStack_29c = fVar47;
        local_368._4_4_ = fVar20;
        local_368._0_4_ = fVar4;
        fStack_360 = fVar44;
        fStack_35c = fVar47;
        local_378._4_4_ = fVar20;
        local_378._0_4_ = fVar4;
        fStack_370 = fVar44;
        fStack_36c = fVar47;
        pfVar8 = pfVar7;
        _local_3d8 = auVar70;
        _local_3c8 = auVar70;
        _local_358 = auVar70;
        _local_348 = auVar70;
        _local_338 = auVar70;
        _local_328 = auVar70;
        _local_318 = auVar70;
        _local_308 = auVar70;
        _local_2f8 = auVar70;
        _local_2e8 = auVar70;
        _local_2d8 = auVar70;
        _local_2c8 = auVar70;
        _local_2b8 = auVar70;
        _local_288 = auVar70;
        _local_278 = auVar70;
        _local_268 = auVar70;
        _local_258 = auVar70;
        _local_228 = auVar70;
        _local_218 = auVar70;
        _local_208 = auVar70;
        _local_1d8 = auVar70;
        _local_1c8 = auVar70;
        _local_1b8 = auVar70;
        _local_1a8 = auVar70;
        do {
          fVar33 = pfVar12[local_408[uVar9]];
          fVar60 = fVar33 * pfVar8[-0x14];
          fVar62 = fVar33 * pfVar8[-0x13];
          fVar38 = fVar33 * pfVar8[-0x12];
          fVar39 = fVar33 * pfVar8[-0x11];
          fVar48 = fVar33 * pfVar8[-0xc];
          fVar50 = fVar33 * pfVar8[-0xb];
          fVar56 = fVar33 * pfVar8[-10];
          fVar58 = fVar33 * pfVar8[-9];
          fVar36 = fVar33 * pfVar8[-4];
          fVar37 = fVar33 * pfVar8[-3];
          fVar42 = fVar33 * pfVar8[-2];
          fVar45 = fVar33 * pfVar8[-1];
          auVar66._0_4_ = fVar33 * pfVar8[-0x10];
          auVar66._4_4_ = fVar33 * pfVar8[-0xf];
          auVar66._8_4_ = fVar33 * pfVar8[-0xe];
          auVar66._12_4_ = fVar33 * pfVar8[-0xd];
          fVar52 = fVar33 * pfVar8[-8];
          fVar53 = fVar33 * pfVar8[-7];
          fVar54 = fVar33 * pfVar8[-6];
          fVar55 = fVar33 * pfVar8[-5];
          fVar40 = fVar33 * *pfVar8;
          fVar41 = fVar33 * pfVar8[1];
          fVar26 = fVar33 * pfVar8[2];
          fVar27 = fVar33 * pfVar8[3];
          fVar28 = (float)((uint)fVar4 & -(uint)(0.0 <= pfVar8[8]) |
                          ~-(uint)(0.0 <= pfVar8[8]) & ___xmm_bf800000bf800000bf800000bf800000) *
                   (fVar4 - fVar33) + fVar33 * pfVar8[8];
          fVar29 = (float)((uint)fVar20 & -(uint)(0.0 <= pfVar8[9]) |
                          ~-(uint)(0.0 <= pfVar8[9]) & _UNK_15076c664) * (fVar20 - fVar33) +
                   fVar33 * pfVar8[9];
          fVar31 = (float)((uint)fVar44 & -(uint)(0.0 <= pfVar8[10]) |
                          ~-(uint)(0.0 <= pfVar8[10]) & _UNK_15076c668) * (fVar44 - fVar33) +
                   fVar33 * pfVar8[10];
          fVar32 = (float)((uint)fVar47 & -(uint)(0.0 <= pfVar8[0xb]) |
                          ~-(uint)(0.0 <= pfVar8[0xb]) & _UNK_15076c66c) * (fVar47 - fVar33) +
                   fVar33 * pfVar8[0xb];
          fVar30 = (float)((uint)fVar4 & -(uint)(0.0 <= pfVar8[4]) |
                          ~-(uint)(0.0 <= pfVar8[4]) & ___xmm_bf800000bf800000bf800000bf800000) *
                   (fVar4 - fVar33) + fVar33 * pfVar8[4];
          fVar43 = (float)((uint)fVar20 & -(uint)(0.0 <= pfVar8[5]) |
                          ~-(uint)(0.0 <= pfVar8[5]) & _UNK_15076c664) * (fVar20 - fVar33) +
                   fVar33 * pfVar8[5];
          fVar46 = (float)((uint)fVar44 & -(uint)(0.0 <= pfVar8[6]) |
                          ~-(uint)(0.0 <= pfVar8[6]) & _UNK_15076c668) * (fVar44 - fVar33) +
                   fVar33 * pfVar8[6];
          fVar33 = (float)((uint)fVar47 & -(uint)(0.0 <= pfVar8[7]) |
                          ~-(uint)(0.0 <= pfVar8[7]) & _UNK_15076c66c) * (fVar47 - fVar33) +
                   fVar33 * pfVar8[7];
          auVar19._0_4_ = fVar40 * fVar40;
          auVar19._4_4_ = fVar41 * fVar41;
          auVar19._8_4_ = fVar26 * fVar26;
          auVar19._12_4_ = fVar27 * fVar27;
          auVar22._0_4_ = fVar48 * fVar48 + fVar60 * fVar60 + fVar36 * fVar36 + fVar30 * fVar30;
          auVar22._4_4_ = fVar50 * fVar50 + fVar62 * fVar62 + fVar37 * fVar37 + fVar43 * fVar43;
          auVar22._8_4_ = fVar56 * fVar56 + fVar38 * fVar38 + fVar42 * fVar42 + fVar46 * fVar46;
          auVar22._12_4_ = fVar58 * fVar58 + fVar39 * fVar39 + fVar45 * fVar45 + fVar33 * fVar33;
          auVar25 = rsqrtps(in_XMM4,auVar22);
          fVar60 = auVar25._0_4_ * fVar60;
          fVar62 = auVar25._4_4_ * fVar62;
          fVar38 = auVar25._8_4_ * fVar38;
          fVar39 = auVar25._12_4_ * fVar39;
          auVar3._4_4_ = fVar53 * fVar53 + auVar66._4_4_ * auVar66._4_4_ + auVar19._4_4_ +
                         fVar29 * fVar29;
          auVar3._0_4_ = fVar52 * fVar52 + auVar66._0_4_ * auVar66._0_4_ + auVar19._0_4_ +
                         fVar28 * fVar28;
          auVar3._8_4_ = fVar54 * fVar54 + auVar66._8_4_ * auVar66._8_4_ + auVar19._8_4_ +
                         fVar31 * fVar31;
          auVar3._12_4_ =
               fVar55 * fVar55 + auVar66._12_4_ * auVar66._12_4_ + auVar19._12_4_ + fVar32 * fVar32;
          auVar25 = rsqrtps(auVar19,auVar3);
          fVar49 = auVar25._0_4_;
          fVar51 = auVar25._4_4_;
          fVar34 = auVar25._8_4_;
          fVar35 = auVar25._12_4_;
          fVar57 = fVar49 * auVar66._0_4_;
          fVar59 = fVar51 * auVar66._4_4_;
          fVar61 = fVar34 * auVar66._8_4_;
          fVar63 = fVar35 * auVar66._12_4_;
          auVar25 = rsqrtps(auVar66,auVar22);
          fVar40 = fVar49 * fVar40;
          fVar41 = fVar51 * fVar41;
          fVar26 = fVar34 * fVar26;
          fVar27 = fVar35 * fVar27;
          fVar64 = auVar25._0_4_;
          fVar67 = auVar25._4_4_;
          fVar68 = auVar25._8_4_;
          fVar69 = auVar25._12_4_;
          fVar36 = fVar64 * fVar36;
          fVar37 = fVar67 * fVar37;
          fVar42 = fVar68 * fVar42;
          fVar45 = fVar69 * fVar45;
          fVar28 = fVar49 * fVar28;
          fVar29 = fVar51 * fVar29;
          fVar31 = fVar34 * fVar31;
          fVar32 = fVar35 * fVar32;
          fVar48 = fVar64 * fVar48;
          fVar50 = fVar67 * fVar50;
          fVar56 = fVar68 * fVar56;
          fVar58 = fVar69 * fVar58;
          fVar64 = fVar64 * fVar30;
          fVar67 = fVar67 * fVar43;
          fVar68 = fVar68 * fVar46;
          fVar69 = fVar69 * fVar33;
          fVar49 = fVar49 * fVar52;
          fVar51 = fVar51 * fVar53;
          fVar34 = fVar34 * fVar54;
          fVar35 = fVar35 * fVar55;
          local_188[0] = (fVar64 * (float)local_208._0_4_ + fVar60 * (float)local_1e8._0_4_ +
                         fVar48 * (float)local_1c8._0_4_) - fVar36 * (float)local_1a8._0_4_;
          local_188[1] = (fVar67 * (float)local_208._4_4_ + fVar62 * (float)local_1e8._4_4_ +
                         fVar50 * (float)local_1c8._4_4_) - fVar37 * (float)local_1a8._4_4_;
          local_188[2] = (fVar68 * fStack_200 + fVar38 * fStack_1e0 + fVar56 * (float)uStack_1c0) -
                         fVar42 * fStack_1a0;
          local_188[3] = (fVar69 * fStack_1fc + fVar39 * fStack_1dc + fVar58 * uStack_1c0._4_4_) -
                         fVar45 * fStack_19c;
          local_3b8 = CONCAT44(local_188[1],local_188[0]);
          fStack_3b0 = local_188[2];
          fStack_3ac = local_188[3];
          fVar33 = (fVar28 * (float)local_3d8._0_4_ + fVar57 * (float)local_1f8._0_4_ +
                   fVar49 * (float)local_1d8._0_4_) - fVar40 * (float)local_1b8._0_4_;
          fVar30 = (fVar29 * (float)local_3d8._4_4_ + fVar59 * (float)local_1f8._4_4_ +
                   fVar51 * (float)local_1d8._4_4_) - fVar41 * (float)local_1b8._4_4_;
          fVar43 = (fVar31 * fStack_3d0 + fVar61 * fStack_1f0 + fVar34 * fStack_1d0) -
                   fVar26 * fStack_1b0;
          fVar46 = (fVar32 * fStack_3cc + fVar63 * fStack_1ec + fVar35 * fStack_1cc) -
                   fVar27 * fStack_1ac;
          local_3d8._4_4_ = fVar30;
          local_3d8._0_4_ = fVar33;
          local_168[0] = (fVar64 * (float)local_278._0_4_ - fVar60 * (float)local_258._0_4_) +
                         fVar48 * (float)local_238._0_4_ + fVar36 * (float)local_218._0_4_;
          local_168[1] = (fVar67 * (float)local_278._4_4_ - fVar62 * (float)local_258._4_4_) +
                         fVar50 * (float)local_238._4_4_ + fVar37 * (float)local_218._4_4_;
          local_168[2] = (fVar68 * fStack_270 - fVar38 * (float)uStack_250) + fVar56 * fStack_230 +
                         fVar42 * fStack_210;
          local_168[3] = (fVar69 * fStack_26c - fVar39 * uStack_250._4_4_) + fVar58 * fStack_22c +
                         fVar45 * fStack_20c;
          local_1a8._4_4_ = local_168[1];
          local_1a8._0_4_ = local_168[0];
          fStack_1a0 = local_168[2];
          fStack_19c = local_168[3];
          local_158 = (fVar28 * (float)local_288._0_4_ - fVar57 * (float)local_268._0_4_) +
                      fVar49 * (float)local_248._0_4_ + fVar40 * (float)local_228._0_4_;
          fStack_154 = (fVar29 * (float)local_288._4_4_ - fVar59 * (float)local_268._4_4_) +
                       fVar51 * (float)local_248._4_4_ + fVar41 * (float)local_228._4_4_;
          fStack_150 = (fVar31 * fStack_280 - fVar61 * fStack_260) + fVar34 * fStack_240 +
                       fVar26 * fStack_220;
          fStack_14c = (fVar32 * fStack_27c - fVar63 * fStack_25c) + fVar35 * fStack_23c +
                       fVar27 * fStack_21c;
          in_XMM4._0_4_ = fVar60 * (float)local_348._0_4_;
          in_XMM4._4_4_ = fVar62 * (float)local_348._4_4_;
          in_XMM4._8_4_ = fVar38 * fStack_340;
          in_XMM4._12_4_ = fVar39 * fStack_33c;
          local_1b8._4_4_ = fStack_154;
          local_1b8._0_4_ = local_158;
          fStack_1b0 = fStack_150;
          fStack_1ac = fStack_14c;
          local_148[0] = ((fVar64 * (float)local_2f8._0_4_ + fVar60 * (float)local_2d8._0_4_) -
                         fVar48 * (float)local_2b8._0_4_) + fVar36 * (float)local_298._0_4_;
          local_148[1] = ((fVar67 * (float)local_2f8._4_4_ + fVar62 * (float)local_2d8._4_4_) -
                         fVar50 * (float)local_2b8._4_4_) + fVar37 * (float)local_298._4_4_;
          local_148[2] = ((fVar68 * (float)uStack_2f0 + fVar38 * fStack_2d0) - fVar56 * fStack_2b0)
                         + fVar42 * fStack_290;
          local_148[3] = ((fVar69 * uStack_2f0._4_4_ + fVar39 * fStack_2cc) - fVar58 * fStack_2ac) +
                         fVar45 * fStack_28c;
          local_128[0] = ((fVar64 * (float)local_368._0_4_ - in_XMM4._0_4_) -
                         fVar48 * (float)local_328._0_4_) - fVar36 * (float)local_3c8._0_4_;
          local_128[1] = ((fVar67 * (float)local_368._4_4_ - in_XMM4._4_4_) -
                         fVar50 * (float)local_328._4_4_) - fVar37 * (float)local_3c8._4_4_;
          local_128[2] = ((fVar68 * fStack_360 - in_XMM4._8_4_) - fVar56 * fStack_320) -
                         fVar42 * (float)uStack_3c0;
          local_128[3] = ((fVar69 * fStack_35c - in_XMM4._12_4_) - fVar58 * fStack_31c) -
                         fVar45 * uStack_3c0._4_4_;
          local_1c8._4_4_ = local_148[1];
          local_1c8._0_4_ = local_148[0];
          uStack_1c0._0_4_ = local_148[2];
          uStack_1c0._4_4_ = local_148[3];
          local_138 = ((fVar28 * (float)local_308._0_4_ + fVar57 * (float)local_2e8._0_4_) -
                      fVar49 * (float)local_2c8._0_4_) + fVar40 * (float)local_2a8._0_4_;
          fStack_134 = ((fVar29 * (float)local_308._4_4_ + fVar59 * (float)local_2e8._4_4_) -
                       fVar51 * (float)local_2c8._4_4_) + fVar41 * (float)local_2a8._4_4_;
          fStack_130 = ((fVar31 * fStack_300 + fVar61 * fStack_2e0) - fVar34 * fStack_2c0) +
                       fVar26 * fStack_2a0;
          fStack_12c = ((fVar32 * fStack_2fc + fVar63 * fStack_2dc) - fVar35 * fStack_2bc) +
                       fVar27 * fStack_29c;
          local_118 = ((fVar28 * (float)local_378._0_4_ - fVar57 * (float)local_358._0_4_) -
                      fVar49 * (float)local_338._0_4_) - fVar40 * (float)local_318._0_4_;
          fStack_114 = ((fVar29 * (float)local_378._4_4_ - fVar59 * (float)local_358._4_4_) -
                       fVar51 * (float)local_338._4_4_) - fVar41 * (float)local_318._4_4_;
          fStack_110 = ((fVar31 * fStack_370 - fVar61 * fStack_350) - fVar34 * fStack_330) -
                       fVar26 * fStack_310;
          fStack_10c = ((fVar32 * fStack_36c - fVar63 * fStack_34c) - fVar35 * fStack_32c) -
                       fVar27 * fStack_30c;
          local_1d8._4_4_ = fStack_134;
          local_1d8._0_4_ = local_138;
          fStack_1d0 = fStack_130;
          fStack_1cc = fStack_12c;
          uVar9 = uVar9 + 1;
          pfVar8 = pfVar8 + 0x20;
          local_1e8._4_4_ = local_128[1];
          local_1e8._0_4_ = local_128[0];
          fStack_1e0 = local_128[2];
          fStack_1dc = local_128[3];
          local_1f8._4_4_ = fStack_114;
          local_1f8._0_4_ = local_118;
          fStack_1f0 = fStack_110;
          fStack_1ec = fStack_10c;
          fStack_200 = local_188[2];
          local_208 = (undefined1  [8])local_3b8;
          fStack_1fc = local_188[3];
          fStack_3d0 = fVar43;
          fStack_3cc = fVar46;
          fStack_210 = local_188[2];
          local_218 = (undefined1  [8])local_3b8;
          fStack_20c = local_188[3];
          fStack_220 = fVar43;
          local_228 = local_3d8;
          fStack_21c = fVar46;
          local_238._4_4_ = local_128[1];
          local_238._0_4_ = local_128[0];
          fStack_230 = local_128[2];
          fStack_22c = local_128[3];
          local_248._4_4_ = fStack_114;
          local_248._0_4_ = local_118;
          fStack_240 = fStack_110;
          fStack_23c = fStack_10c;
          local_258._4_4_ = local_148[1];
          local_258._0_4_ = local_148[0];
          uStack_250._0_4_ = local_148[2];
          uStack_250._4_4_ = local_148[3];
          local_268._4_4_ = fStack_134;
          local_268._0_4_ = local_138;
          fStack_260 = fStack_130;
          fStack_25c = fStack_12c;
          local_278._4_4_ = local_168[1];
          local_278._0_4_ = local_168[0];
          fStack_270 = local_168[2];
          fStack_26c = local_168[3];
          local_288._4_4_ = fStack_154;
          local_288._0_4_ = local_158;
          fStack_280 = fStack_150;
          fStack_27c = fStack_14c;
          local_298._4_4_ = local_128[1];
          local_298._0_4_ = local_128[0];
          fStack_290 = local_128[2];
          fStack_28c = local_128[3];
          local_2a8._4_4_ = fStack_114;
          local_2a8._0_4_ = local_118;
          fStack_2a0 = fStack_110;
          fStack_29c = fStack_10c;
          fStack_2b0 = local_188[2];
          local_2b8 = (undefined1  [8])local_3b8;
          fStack_2ac = local_188[3];
          fStack_2c0 = fVar43;
          local_2c8 = local_3d8;
          fStack_2bc = fVar46;
          local_2d8._4_4_ = local_168[1];
          local_2d8._0_4_ = local_168[0];
          fStack_2d0 = local_168[2];
          fStack_2cc = local_168[3];
          local_2e8._4_4_ = fStack_154;
          local_2e8._0_4_ = local_158;
          fStack_2e0 = fStack_150;
          fStack_2dc = fStack_14c;
          local_2f8._4_4_ = local_148[1];
          local_2f8._0_4_ = local_148[0];
          uStack_2f0._0_4_ = local_148[2];
          uStack_2f0._4_4_ = local_148[3];
          local_308._4_4_ = fStack_134;
          local_308._0_4_ = local_138;
          fStack_300 = fStack_130;
          fStack_2fc = fStack_12c;
          local_3c8._4_4_ = local_148[1];
          local_3c8._0_4_ = local_148[0];
          uStack_3c0._0_4_ = local_148[2];
          uStack_3c0._4_4_ = local_148[3];
          local_318._4_4_ = fStack_134;
          local_318._0_4_ = local_138;
          fStack_310 = fStack_130;
          fStack_30c = fStack_12c;
          local_328._4_4_ = local_168[1];
          local_328._0_4_ = local_168[0];
          fStack_320 = local_168[2];
          fStack_31c = local_168[3];
          local_338._4_4_ = fStack_154;
          local_338._0_4_ = local_158;
          fStack_330 = fStack_150;
          fStack_32c = fStack_14c;
          fStack_340 = local_188[2];
          local_348 = (undefined1  [8])local_3b8;
          fStack_33c = local_188[3];
          fStack_350 = fVar43;
          local_358 = local_3d8;
          fStack_34c = fVar46;
          local_368._4_4_ = local_128[1];
          local_368._0_4_ = local_128[0];
          fStack_360 = local_128[2];
          fStack_35c = local_128[3];
          local_378._4_4_ = fStack_114;
          local_378._0_4_ = local_118;
          fStack_370 = fStack_110;
          fStack_36c = fStack_10c;
        } while (uVar9 < uVar14);
      }
      local_178 = (undefined1  [8])CONCAT44(fVar30,fVar33);
      uStack_170 = CONCAT44(fVar46,fVar43);
      uVar10 = (&(pLVar13->outputLODs).size)[lVar17 * 2] >> 2 & 7;
      uVar9 = (ulonglong)uVar10;
      if (uVar10 != 0) {
        pfVar8 = local_148;
        puVar11 = puVar16 + 2;
        do {
          local_3f8.x = pfVar8[-0x10];
          local_3f8.y = pfVar8[-8];
          local_3f8.z = *pfVar8;
          local_3f8.w = pfVar8[8];
          tdm::quat<float>::euler<0>(&local_3f8,&local_418);
          pfVar8 = pfVar8 + 1;
          pfVar2[puVar11[-2]] = local_418.values[0].value;
          pfVar2[puVar11[-1]] = local_418.values[1].value;
          pfVar2[*puVar11] = local_418.values[2].value;
          uVar9 = uVar9 - 1;
          puVar11 = puVar11 + 4;
          lVar17 = local_198;
          pLVar13 = local_3a8;
        } while (uVar9 != 0);
      }
      local_400 = local_400 + uVar15 * 0x20;
      pfVar7 = pfVar7 + uVar15 * 0x20;
      puVar16 = puVar16 + 0x20;
    } while (puVar16 < local_3a0);
  }
  fVar4 = __real_3f800000;
  if (puVar16 < local_390) {
    pfVar7 = local_400 + 4;
    lVar17 = (longlong)local_390 - (longlong)puVar16;
    pfVar12 = local_388->ptr;
    pfVar2 = local_398->ptr;
    fVar20 = __real_3fc90fda;
    local_3e8 = pfVar12;
    do {
      uVar9 = 0;
      fVar44 = 0.0;
      fVar47 = 0.0;
      fVar33 = 0.0;
      fVar30 = 0.0;
      local_f8[0] = 0.0;
      local_f8[1] = 0.0;
      local_f8[2] = 0.0;
      local_f8[3] = 0.0;
      local_e8[0] = 0.0;
      local_e8[1] = 0.0;
      local_e8[2] = 0.0;
      local_e8[3] = 0.0;
      pfVar8 = pfVar7;
      local_108[0] = fVar44;
      local_108[1] = fVar47;
      local_108[2] = fVar33;
      local_108[3] = fVar30;
      local_d8[0] = ___xmm_3f8000003f8000003f8000003f800000;
      local_d8[1] = _UNK_15076b1f4;
      local_d8[2] = _UNK_15076b1f8;
      local_d8[3] = _UNK_15076b1fc;
      if (uVar14 != 0) {
        do {
          fVar20 = pfVar12[local_408[uVar9]];
          fVar51 = fVar20 * pfVar8[-4];
          fVar34 = fVar20 * pfVar8[-3];
          fVar35 = fVar20 * pfVar8[-2];
          fVar36 = fVar20 * pfVar8[-1];
          uVar9 = uVar9 + 1;
          fVar37 = fVar20 * *pfVar8;
          fVar45 = fVar20 * pfVar8[1];
          fVar50 = fVar20 * pfVar8[2];
          fVar58 = fVar20 * pfVar8[3];
          fVar62 = fVar20 * pfVar8[4];
          fVar39 = fVar20 * pfVar8[5];
          fVar41 = fVar20 * pfVar8[6];
          fVar27 = fVar20 * pfVar8[7];
          fVar42 = (float)(~-(uint)(0.0 <= pfVar8[8]) & ___xmm_bf800000bf800000bf800000bf800000 |
                          (uint)___xmm_3f8000003f8000003f8000003f800000 & -(uint)(0.0 <= pfVar8[8]))
                   * (___xmm_3f8000003f8000003f8000003f800000 - fVar20) + fVar20 * pfVar8[8];
          fVar48 = (float)(~-(uint)(0.0 <= pfVar8[9]) & _UNK_15076c664 |
                          (uint)_UNK_15076b1f4 & -(uint)(0.0 <= pfVar8[9])) *
                   (_UNK_15076b1f4 - fVar20) + fVar20 * pfVar8[9];
          fVar56 = (float)(~-(uint)(0.0 <= pfVar8[10]) & _UNK_15076c668 |
                          (uint)_UNK_15076b1f8 & -(uint)(0.0 <= pfVar8[10])) *
                   (_UNK_15076b1f8 - fVar20) + fVar20 * pfVar8[10];
          fVar60 = (float)(~-(uint)(0.0 <= pfVar8[0xb]) & _UNK_15076c66c |
                          (uint)_UNK_15076b1fc & -(uint)(0.0 <= pfVar8[0xb])) *
                   (_UNK_15076b1fc - fVar20) + fVar20 * pfVar8[0xb];
          auVar23._0_4_ = fVar37 * fVar37 + fVar51 * fVar51 + fVar62 * fVar62 + fVar42 * fVar42;
          auVar23._4_4_ = fVar45 * fVar45 + fVar34 * fVar34 + fVar39 * fVar39 + fVar48 * fVar48;
          auVar23._8_4_ = fVar50 * fVar50 + fVar35 * fVar35 + fVar41 * fVar41 + fVar56 * fVar56;
          auVar23._12_4_ = fVar58 * fVar58 + fVar36 * fVar36 + fVar27 * fVar27 + fVar60 * fVar60;
          auVar25 = rsqrtps(auVar23,auVar23);
          fVar20 = auVar25._0_4_;
          fVar43 = auVar25._4_4_;
          fVar46 = auVar25._8_4_;
          fVar49 = auVar25._12_4_;
          fVar51 = fVar20 * fVar51;
          fVar34 = fVar43 * fVar34;
          fVar35 = fVar46 * fVar35;
          fVar36 = fVar49 * fVar36;
          fVar37 = fVar20 * fVar37;
          fVar45 = fVar43 * fVar45;
          fVar50 = fVar46 * fVar50;
          fVar58 = fVar49 * fVar58;
          fVar62 = fVar20 * fVar62;
          fVar39 = fVar43 * fVar39;
          fVar41 = fVar46 * fVar41;
          fVar27 = fVar49 * fVar27;
          fVar20 = fVar20 * fVar42;
          fVar43 = fVar43 * fVar48;
          fVar46 = fVar46 * fVar56;
          fVar49 = fVar49 * fVar60;
          fVar29 = fVar51 * local_f8[0];
          fVar31 = fVar34 * local_f8[1];
          fVar32 = fVar35 * local_f8[2];
          fVar52 = fVar36 * local_f8[3];
          local_108[0] = (fVar20 * fVar44 + fVar51 * local_d8[0] + fVar37 * local_e8[0]) -
                         fVar62 * local_f8[0];
          local_108[1] = (fVar43 * fVar47 + fVar34 * local_d8[1] + fVar45 * local_e8[1]) -
                         fVar39 * local_f8[1];
          local_108[2] = (fVar46 * fVar33 + fVar35 * local_d8[2] + fVar50 * local_e8[2]) -
                         fVar41 * local_f8[2];
          local_108[3] = (fVar49 * fVar30 + fVar36 * local_d8[3] + fVar58 * local_e8[3]) -
                         fVar27 * local_f8[3];
          fVar42 = fVar37 * local_f8[0];
          fVar48 = fVar45 * local_f8[1];
          fVar56 = fVar50 * local_f8[2];
          fVar60 = fVar58 * local_f8[3];
          local_f8[0] = (fVar20 * local_f8[0] - fVar51 * local_e8[0]) + fVar37 * local_d8[0] +
                        fVar62 * fVar44;
          local_f8[1] = (fVar43 * local_f8[1] - fVar34 * local_e8[1]) + fVar45 * local_d8[1] +
                        fVar39 * fVar47;
          local_f8[2] = (fVar46 * local_f8[2] - fVar35 * local_e8[2]) + fVar50 * local_d8[2] +
                        fVar41 * fVar33;
          local_f8[3] = (fVar49 * local_f8[3] - fVar36 * local_e8[3]) + fVar58 * local_d8[3] +
                        fVar27 * fVar30;
          fVar38 = fVar62 * local_e8[0];
          fVar40 = fVar39 * local_e8[1];
          fVar26 = fVar41 * local_e8[2];
          fVar28 = fVar27 * local_e8[3];
          local_e8[0] = ((fVar29 + fVar20 * local_e8[0]) - fVar37 * fVar44) + fVar62 * local_d8[0];
          local_e8[1] = ((fVar31 + fVar43 * local_e8[1]) - fVar45 * fVar47) + fVar39 * local_d8[1];
          local_e8[2] = ((fVar32 + fVar46 * local_e8[2]) - fVar50 * fVar33) + fVar41 * local_d8[2];
          local_e8[3] = ((fVar52 + fVar49 * local_e8[3]) - fVar58 * fVar30) + fVar27 * local_d8[3];
          local_d8[0] = ((local_d8[0] * fVar20 - fVar51 * fVar44) - fVar42) - fVar38;
          local_d8[1] = ((local_d8[1] * fVar43 - fVar34 * fVar47) - fVar48) - fVar40;
          local_d8[2] = ((local_d8[2] * fVar46 - fVar35 * fVar33) - fVar56) - fVar26;
          local_d8[3] = ((local_d8[3] * fVar49 - fVar36 * fVar30) - fVar60) - fVar28;
          pfVar8 = pfVar8 + 0x10;
          fVar44 = local_108[0];
          fVar47 = local_108[1];
          fVar33 = local_108[2];
          fVar30 = local_108[3];
          fVar20 = __real_3fc90fda;
        } while (uVar9 < uVar14);
      }
      uVar9 = (ulonglong)(lVar17 >> 1) >> 2;
      if (uVar9 != 0) {
        puVar11 = puVar16 + 2;
        pfVar8 = local_e8;
        do {
          fVar44 = pfVar8[-8];
          fVar47 = pfVar8[-4];
          fVar33 = *pfVar8;
          fVar30 = pfVar8[4];
          fVar46 = fVar33 + fVar33;
          fVar51 = fVar47 + fVar47;
          fVar36 = (fVar44 + fVar44) * fVar30;
          fVar33 = fVar46 * fVar33;
          fVar35 = fVar44 * fVar46 + fVar51 * fVar30;
          fVar49 = 0.0;
          fVar34 = (float)((uint)fVar35 & __xmm_7fffffff7fffffff7fffffff7fffffff);
          fVar43 = fVar4 - fVar34;
          if (fVar4 - fVar34 <= 0.0) {
            fVar43 = fVar49;
          }
          fVar43 = SQRT(fVar43) *
                   (((((((__real_3bda90c5 - fVar34 * ___real_3aa57a2c) * fVar34 - ___real_3c8bfc66)
                        * fVar34 + ___real_3cfd10f8) * fVar34 - ___real_3d4d8392) * fVar34 +
                     ___real_3db63a9e) * fVar34 - ___real_3e5bbfca) * fVar34 + fVar20);
          if (fVar35 < 0.0) {
            fVar43 = fVar43 - fVar20;
          }
          else {
            fVar43 = fVar20 - fVar43;
          }
          if (fVar4 <= fVar34) {
            fVar36 = fVar36 + fVar47 * fVar46;
          }
          else {
            fVar49 = atan2f(fVar30 * fVar46 - fVar51 * fVar44,fVar4 - (fVar33 + fVar51 * fVar47));
            fVar36 = fVar36 - fVar47 * fVar46;
            fVar33 = fVar51 * fVar47;
          }
          fVar44 = atan2f(fVar36,fVar4 - (fVar33 + (fVar44 + fVar44) * fVar44));
          pfVar8 = pfVar8 + 1;
          pfVar2[puVar11[-2]] = fVar44;
          pfVar2[puVar11[-1]] = fVar43;
          uVar1 = *puVar11;
          puVar11 = puVar11 + 4;
          pfVar2[uVar1] = fVar49;
          uVar9 = uVar9 - 1;
          pfVar12 = local_3e8;
        } while (uVar9 != 0);
      }
      puVar16 = puVar16 + 0x10;
      lVar17 = lVar17 + -0x20;
      pfVar7 = pfVar7 + local_190;
    } while (puVar16 < local_390);
  }
  return;
}

// `scalar_deleting_destructor' @ 14c564740

void * __thiscall
rl4::
VectorizedJointGroupQuaternionCalculationStrategy<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>
::_scalar_deleting_destructor_
          (VectorizedJointGroupQuaternionCalculationStrategy<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// SetUp @ 14c564770

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void __thiscall
`anonymous_namespace'::
QuaternionEvaluatorTest<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>_>
::SetUp(void *this)

{
  Extent *pEVar1;
  float *pfVar2;
  ushort *puVar3;
  LODRegion *pLVar4;
  longlong lVar5;
  int *piVar6;
  JointGroup<float> *pJVar7;
  MemoryResource MVar8;
  MemoryResource MVar9;
  undefined **ppuVar10;
  ulonglong uVar11;
  longlong lVar12;
  _Vector_val<std::_Simple_types<unsigned_short>_> *this_00;
  undefined **ppuVar13;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *pvVar14;
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *pvVar15;
  vector<rl4::LODRegion,pma::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>_> *pvVar16;
  longlong lVar17;
  MemoryResource MVar18;
  undefined1 auStack_268 [32];
  MemoryResource MStack_248;
  MemoryResource MStack_240;
  MemoryResource MStack_238;
  int *piStack_230;
  undefined1 auStack_228 [64];
  MemoryResource MStack_1e8;
  JointGroup<float> JStack_1e0;
  undefined1 auStack_158 [56];
  undefined8 uStack_120;
  MemoryResource MStack_118;
  undefined1 auStack_108 [56];
  undefined8 uStack_d0;
  MemoryResource MStack_c8;
  undefined **ppuStack_b8;
  undefined **ppuStack_b0;
  undefined ***pppuStack_80;
  undefined **ppuStack_78;
  undefined **ppuStack_70;
  undefined ***pppuStack_40;
  ulonglong uStack_38;
  
  uStack_38 = __security_cookie.value ^ (ulonglong)auStack_268;
  *(undefined8 *)((longlong)this + 0xd8) = 1;
  MVar18 = (MemoryResource)((longlong)this + 0x10);
  *(undefined1 *)((longlong)this + 0xe0) = 3;
  uVar11 = (longlong)rltests::qs::optimized::floatValues._Mypair._Myval2._Mylast -
           (longlong)rltests::qs::optimized::floatValues._Mypair._Myval2._Myfirst >> 5;
  pJVar7 = rl4::JointGroup<float>::JointGroup<float>(&JStack_1e0,(MemoryResource *)MVar18);
  piStack_230 = (int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9d4c)
  ;
  if ((*piStack_230 <
       `public:___cdecl_pma::impl::PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>(void)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:___cdecl_pma::impl::PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>(void)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    atexit(`pma::impl::PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>::
           PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>'::__l2::
           _dynamic_atexit_destructor_for__dmr__);
    _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  MStack_248 = (MemoryResource)
               &`public:___cdecl_pma::impl::PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>(void)___ptr64'
                ::__l2::dmr;
  if (MVar18 != (MemoryResource)0x0) {
    MStack_248 = MVar18;
  }
  MVar8 = (MemoryResource)0x0;
  MVar18 = (MemoryResource)0x0;
  MStack_240 = (MemoryResource)0x0;
  MStack_238 = (MemoryResource)0x0;
  if (uVar11 != 0) {
    if (0x1e1e1e1e1e1e1e1 < uVar11) {
                    /* WARNING: Subroutine does not return */
      std::
      vector<rl4::JointGroup<float>,pma::PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>_>
      ::_Xlength();
    }
    MVar8 = (MemoryResource)
            (**(code **)((longlong)*(MemoryResource *)MStack_248 + 8))(MStack_248,uVar11 * 0x88,8);
    MStack_238 = (MemoryResource)((longlong)MVar8 + uVar11 * 0x88);
    MVar18 = MVar8;
    MStack_240 = MVar8;
    do {
      rl4::JointGroup<float>::JointGroup<float>((JointGroup<float> *)MVar18,pJVar7);
      MVar18 = (MemoryResource)((longlong)MVar18 + 0x88);
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
  }
  rl4::JointGroup<float>::~JointGroup<float>(&JStack_1e0);
  uVar11 = 0;
  lVar5 = (longlong)MVar18 - (longlong)MVar8 >> 0x3f;
  lVar17 = ((longlong)MVar18 - (longlong)MVar8) / 0x88 + lVar5;
  if (lVar17 != lVar5) {
    lVar12 = 0;
    this_00 = (_Vector_val<std::_Simple_types<unsigned_short>_> *)((longlong)MStack_240 + 0x40);
    do {
      pvVar14 = (vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *)
                (&((rltests::qs::optimized::floatValues._Mypair._Myval2._Myfirst)->_Mypair)._Myval1.
                  field_0x0 + lVar12);
      if ((vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *)
          ((longlong)(this_00 + 0xfffffffffffffffd) + 8U) != pvVar14) {
        pfVar2 = ((_Vector_val<std::_Simple_types<float>_> *)((longlong)&pvVar14->_Mypair + 8))->
                 _Myfirst;
        std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>::
        _Assign_counted_range<float_*>
                  ((vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *)
                   ((longlong)(this_00 + 0xfffffffffffffffd) + 8U),pfVar2,
                   (longlong)*(float **)((longlong)&pvVar14->_Mypair + 0x10) - (longlong)pfVar2 >> 2
                  );
      }
      pvVar15 = (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
                 *)(&((rltests::qs::optimized::inputIndices._Mypair._Myval2._Myfirst)->_Mypair).
                     _Myval1.field_0x0 + lVar12);
      if ((vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *
          )((longlong)(this_00 + 0xfffffffffffffffe) + 0x10U) != pvVar15) {
        puVar3 = ((_Vector_val<std::_Simple_types<unsigned_short>_> *)
                 ((longlong)&pvVar15->_Mypair + 8))->_Myfirst;
        std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
        ::_Assign_counted_range<unsigned_short_*>
                  ((vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
                    *)((longlong)(this_00 + 0xfffffffffffffffe) + 0x10U),puVar3,
                   (longlong)*(ushort **)((longlong)&pvVar15->_Mypair + 0x10) - (longlong)puVar3 >>
                   1);
      }
      pvVar15 = (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
                 *)(&((rltests::qs::optimized::outputIndices._Mypair._Myval2._Myfirst
                       [*(longlong *)((longlong)this + 0xd8)]._Mypair._Myval2._Myfirst)->_Mypair).
                     _Myval1.field_0x0 + lVar12);
      if (this_00 != (_Vector_val<std::_Simple_types<unsigned_short>_> *)pvVar15) {
        puVar3 = (pvVar15->_Mypair)._Myval2._Myfirst;
        std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
        ::_Assign_counted_range<unsigned_short_*>
                  ((vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
                    *)this_00,puVar3,
                   (longlong)(pvVar15->_Mypair)._Myval2._Mylast - (longlong)puVar3 >> 1);
      }
      pvVar16 = (vector<rl4::LODRegion,pma::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>_>
                 *)(&((rltests::qs::optimized::lodRegions._Mypair._Myval2._Myfirst)->_Mypair).
                     _Myval1.field_0x0 + lVar12);
      if ((vector<rl4::LODRegion,pma::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>_> *
          )((longlong)(this_00 + 1) + 8U) != pvVar16) {
        pLVar4 = ((_Vector_val<std::_Simple_types<rl4::LODRegion>_> *)
                 ((longlong)&pvVar16->_Mypair + 8))->_Myfirst;
        std::vector<rl4::LODRegion,pma::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>_>
        ::_Assign_counted_range<rl4::LODRegion_*>
                  ((vector<rl4::LODRegion,pma::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>_>
                    *)((longlong)(this_00 + 1) + 8U),pLVar4,
                   ((longlong)*(LODRegion **)((longlong)&pvVar16->_Mypair + 0x10) - (longlong)pLVar4
                   ) / 0x18);
      }
      lVar12 = lVar12 + 0x20;
      *(uint *)&((vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
                  *)((longlong)(this_00 + 2) + 0x10))->_Mypair =
           rltests::qs::optimized::subMatrices._Mypair._Myval2._Myfirst[uVar11].cols;
      pEVar1 = rltests::qs::optimized::subMatrices._Mypair._Myval2._Myfirst + uVar11;
      uVar11 = uVar11 + 1;
      *(uint *)&((vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
                  *)((longlong)(this_00 + 2) + 0x14))->_Mypair = pEVar1->rows;
      this_00 = (_Vector_val<std::_Simple_types<unsigned_short>_> *)((longlong)(this_00 + 5) + 0x10)
      ;
    } while (uVar11 < (ulonglong)(lVar17 - lVar5));
  }
  piVar6 = piStack_230;
  ppuVar10 = (undefined **)((longlong)this + 0x10);
  if ((*piStack_230 <
       `public:___cdecl_pma::impl::PolyAllocator<rl4::VectorizedJointGroupQuaternionCalculationStrategy<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::VectorizedJointGroupQuaternionCalculationStrategy<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<rl4::VectorizedJointGroupQuaternionCalculationStrategy<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::VectorizedJointGroupQuaternionCalculationStrategy<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:___cdecl_pma::impl::PolyAllocator<rl4::VectorizedJointGroupQuaternionCalculationStrategy<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::VectorizedJointGroupQuaternionCalculationStrategy<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    atexit(`pma::impl::
           PolyAllocator<rl4::VectorizedJointGroupQuaternionCalculationStrategy<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,8,pma::DefaultMemoryResource>
           ::
           PolyAllocator<rl4::VectorizedJointGroupQuaternionCalculationStrategy<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,8,pma::DefaultMemoryResource>'
           ::__l2::_dynamic_atexit_destructor_for__dmr__);
    _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<rl4::VectorizedJointGroupQuaternionCalculationStrategy<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::VectorizedJointGroupQuaternionCalculationStrategy<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  ppuVar13 = &`public:___cdecl_pma::impl::PolyAllocator<rl4::VectorizedJointGroupQuaternionCalculationStrategy<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::VectorizedJointGroupQuaternionCalculationStrategy<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
              ::__l2::dmr;
  if (ppuVar10 != (undefined **)0x0) {
    ppuVar13 = ppuVar10;
  }
  MVar8 = (MemoryResource)(**(code **)(*ppuVar13 + 8))(ppuVar13,8,8);
  *(undefined ***)MVar8 =
       &
       ___7__VectorizedJointGroupQuaternionCalculationStrategy_MU__T256_UF128_sse_trimd___fallback_trimd__UF128_sse_3_U__QuaternionsToEulerAngles_U__ang_MUradians_impl_tdm___tdm___0A__rl4___rl4__6B_
  ;
  ppuStack_b8 = &
                ___7___Func_impl_no_alloc_V<lambda_1>__1____create___V___ManagedInstance_V__unique_ptr_U__JointGroupQuaternionCalculationStrategy_M_rl4__V__function___A6AXPEAU__JointGroupQuaternionCalculationStrategy_M_rl4___Z_std___std__U__VectorizedJointGroupQuaternionCalculationStrategy_MU__T256_UF128_sse_trimd___fallback_trimd__UF128_sse_3_U__QuaternionsToEulerAngles_U__ang_MUradians_impl_tdm___tdm___0A__rl4___rl4__U__JointGroupQuaternionCalculationStrategy_M_4__impl_pma__QEAA_AV__unique_ptr_U__JointGroupQuaternionCalculationStrategy_M_rl4__V__function___A6AXPEAU__JointGroupQuaternionCalculationStrategy_M_rl4___Z_std___std__XZ_XPEAU__JointGroupQuaternionCalculationStrategy_M_rl4___std__6B_
  ;
  pppuStack_80 = &ppuStack_b8;
  uStack_120 = (_Func_base<void,rl4::JointGroupQuaternionCalculationStrategy<float>_*> *)0x0;
  ppuStack_b0 = ppuVar13;
  uStack_120 = std::
               _Func_impl_no_alloc<`pma::impl::ManagedInstance<std::unique_ptr<rl4::JointGroupQuaternionCalculationStrategy<float>,std::function<void___cdecl(rl4::JointGroupQuaternionCalculationStrategy<float>_*)>_>,rl4::VectorizedJointGroupQuaternionCalculationStrategy<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,rl4::JointGroupQuaternionCalculationStrategy<float>_>::create<>'::__l2::<lambda_1>,void,rl4::JointGroupQuaternionCalculationStrategy<float>_*>
               ::_Move(&ppuStack_b8,auStack_158);
  if (pppuStack_80 != (undefined ***)0x0) {
    (*(code *)(*pppuStack_80)[4])(pppuStack_80,pppuStack_80 != &ppuStack_b8);
  }
  MStack_118 = MVar8;
  if ((*piVar6 < `public:___cdecl_pma::impl::PolyAllocator<rl4::QuaternionJointsEvaluator<float>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::QuaternionJointsEvaluator<float>,8,pma::DefaultMemoryResource>(void)___ptr64'
                 ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<rl4::QuaternionJointsEvaluator<float>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::QuaternionJointsEvaluator<float>,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:___cdecl_pma::impl::PolyAllocator<rl4::QuaternionJointsEvaluator<float>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::QuaternionJointsEvaluator<float>,8,pma::DefaultMemoryResource>(void)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    atexit(`pma::impl::
           PolyAllocator<rl4::QuaternionJointsEvaluator<float>,8,pma::DefaultMemoryResource>::
           PolyAllocator<rl4::QuaternionJointsEvaluator<float>,8,pma::DefaultMemoryResource>'::__l2
           ::_dynamic_atexit_destructor_for__dmr__);
    _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<rl4::QuaternionJointsEvaluator<float>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::QuaternionJointsEvaluator<float>,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  ppuVar13 = &`public:___cdecl_pma::impl::PolyAllocator<rl4::QuaternionJointsEvaluator<float>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::QuaternionJointsEvaluator<float>,8,pma::DefaultMemoryResource>(void)___ptr64'
              ::__l2::dmr;
  if (ppuVar10 != (undefined **)0x0) {
    ppuVar13 = ppuVar10;
  }
  MVar9 = (MemoryResource)(**(code **)(*ppuVar13 + 8))(ppuVar13,0xb0,8);
  MVar8 = MStack_118;
  MStack_118 = (MemoryResource)0x0;
  std::function<void___cdecl(rl4::JointGroupQuaternionCalculationStrategy<float>_*)>::
  function<void___cdecl(rl4::JointGroupQuaternionCalculationStrategy<float>_*)>
            ((function<void___cdecl(rl4::JointGroupQuaternionCalculationStrategy<float>_*)> *)
             auStack_228,
             (function<void___cdecl(rl4::JointGroupQuaternionCalculationStrategy<float>_*)> *)
             auStack_158);
  MStack_1e8 = (MemoryResource)0x0;
  *(undefined ***)MVar9 = &___7__QuaternionJointsEvaluator_M_rl4__6B_;
  std::function<void___cdecl(rl4::JointGroupQuaternionCalculationStrategy<float>_*)>::
  function<void___cdecl(rl4::JointGroupQuaternionCalculationStrategy<float>_*)>
            ((function<void___cdecl(rl4::JointGroupQuaternionCalculationStrategy<float>_*)> *)
             ((longlong)MVar9 + 8),
             (function<void___cdecl(rl4::JointGroupQuaternionCalculationStrategy<float>_*)> *)
             auStack_228);
  *(MemoryResource *)((longlong)MVar9 + 0x48) = MVar8;
  *(MemoryResource *)((longlong)MVar9 + 0x50) = MStack_248;
  *(MemoryResource *)((longlong)MVar9 + 0x58) = MStack_240;
  *(MemoryResource *)((longlong)MVar9 + 0x68) = MStack_238;
  *(MemoryResource *)((longlong)MVar9 + 0x60) = MVar18;
  *(MemoryResource *)((longlong)MVar9 + 0xa8) = (MemoryResource)0x0;
  if (MStack_1e8 != (MemoryResource)0x0) {
    MStack_248 = MStack_1e8;
    if ((longlong *)auStack_228._56_8_ == (longlong *)0x0) {
      std::_Xbad_function_call();
      return;
    }
    (**(code **)(*(longlong *)auStack_228._56_8_ + 0x10))(auStack_228._56_8_,&MStack_248);
  }
  if ((longlong *)auStack_228._56_8_ != (longlong *)0x0) {
    (**(code **)(*(longlong *)auStack_228._56_8_ + 0x20))
              (auStack_228._56_8_,(undefined1 *)auStack_228._56_8_ != auStack_228);
  }
  ppuStack_78 = &
                ___7___Func_impl_no_alloc_V<lambda_1>__1____create_V__unique_ptr_U__JointGroupQuaternionCalculationStrategy_M_rl4__V__function___A6AXPEAU__JointGroupQuaternionCalculationStrategy_M_rl4___Z_std___std__V__vector_U__JointGroup_M_rl4__V__PolyAllocator_U__JointGroup_M_rl4___07VDefaultMemoryResource_pma___pma___2___TPEAVAlignedMemoryResource_pma_____ManagedInstance_V__unique_ptr_VJointsEvaluator_rl4__V__function___A6AXPEAVJointsEvaluator_rl4___Z_std___std__V__QuaternionJointsEvaluator_M_rl4__VJointsEvaluator_4__impl_pma__QEAA_AV__unique_ptr_VJointsEvaluator_rl4__V__function___A6AXPEAVJointsEvaluator_rl4___Z_std___std____QEAV__unique_ptr_U__JointGroupQuaternionCalculationStrategy_M_rl4__V__function___A6AXPEAU__JointGroupQuaternionCalculationStrategy_M_rl4___Z_std___6___QEAV__vector_U__JointGroup_M_rl4__V__PolyAllocator_U__JointGroup_M_rl4___07VDefaultMemoryResource_pma___pma___6___QEA__T__QEAPEAVAlignedMemoryResource_4__Z_XPEAVJointsEvaluator_rl4___std__6B_
  ;
  pppuStack_40 = &ppuStack_78;
  uStack_d0 = (_Func_base<void,rl4::JointsEvaluator_*> *)0x0;
  ppuStack_70 = ppuVar13;
  uStack_d0 = std::
              _Func_impl_no_alloc<`pma::impl::ManagedInstance<std::unique_ptr<rl4::JointsEvaluator,std::function<void___cdecl(rl4::JointsEvaluator_*)>_>,rl4::QuaternionJointsEvaluator<float>,rl4::JointsEvaluator>::create<std::unique_ptr<rl4::JointGroupQuaternionCalculationStrategy<float>,std::function<void___cdecl(rl4::JointGroupQuaternionCalculationStrategy<float>_*)>_>,std::vector<rl4::JointGroup<float>,pma::PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>_>,std::nullptr_t,pma::AlignedMemoryResource_*>'::__l2::<lambda_1>,void,rl4::JointsEvaluator_*>
              ::_Move(&ppuStack_78,auStack_108);
  if (pppuStack_40 != (undefined ***)0x0) {
    (*(code *)(*pppuStack_40)[4])(pppuStack_40,pppuStack_40 != &ppuStack_78);
  }
  MStack_c8 = MVar9;
  std::unique_ptr<rl4::JointsEvaluator,std::function<void___cdecl(rl4::JointsEvaluator_*)>_>::
  operator=<std::function<void___cdecl(rl4::JointsEvaluator_*)>,0>
            ((unique_ptr<rl4::JointsEvaluator,std::function<void___cdecl(rl4::JointsEvaluator_*)>_>
              *)((longlong)this + 0x90),
             (unique_ptr<rl4::JointsEvaluator,std::function<void___cdecl(rl4::JointsEvaluator_*)>_>
              *)auStack_108);
  if (MStack_c8 != (MemoryResource)0x0) {
    MStack_248 = MStack_c8;
    if (uStack_d0 == (_Func_base<void,rl4::JointsEvaluator_*> *)0x0) {
      std::_Xbad_function_call();
      return;
    }
    (**(code **)((longlong)*uStack_d0 + 0x10))(uStack_d0,&MStack_248);
  }
  if (uStack_d0 != (_Func_base<void,rl4::JointsEvaluator_*> *)0x0) {
    (**(code **)((longlong)*uStack_d0 + 0x20))
              (uStack_d0,uStack_d0 != (_Func_base<void,rl4::JointsEvaluator_*> *)auStack_108);
  }
  if (MStack_118 != (MemoryResource)0x0) {
    MStack_248 = MStack_118;
    if (uStack_120 == (_Func_base<void,rl4::JointGroupQuaternionCalculationStrategy<float>_*> *)0x0)
    {
      std::_Xbad_function_call();
      return;
    }
    (**(code **)((longlong)*uStack_120 + 0x10))(uStack_120,&MStack_248);
  }
  if (uStack_120 != (_Func_base<void,rl4::JointGroupQuaternionCalculationStrategy<float>_*> *)0x0) {
    (**(code **)((longlong)*uStack_120 + 0x20))
              (uStack_120,
               uStack_120 !=
               (_Func_base<void,rl4::JointGroupQuaternionCalculationStrategy<float>_*> *)auStack_158
              );
  }
  return;
}

// `scalar_deleting_destructor' @ 14c564780

void * __thiscall
`anonymous_namespace'::
QuaternionEvaluatorTest<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  ~QuaternionEvaluatorTest<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>_>
            (this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe8);
  }
  return this;
}

// TestBody @ 14c5647c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014c564961) */
/* WARNING: Removing unreachable block (ram,0x00014c564968) */
/* WARNING: Removing unreachable block (ram,0x00014c56496c) */
/* WARNING: Removing unreachable block (ram,0x00014c564971) */

void __thiscall
QuaternionEvaluatorTest_EvaluatePerLOD_Test<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>_>
::TestBody(QuaternionEvaluatorTest_EvaluatePerLOD_Test<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>_>
           *this)

{
  undefined1 *puVar1;
  vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *pvVar2;
  double dVar3;
  unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  uVar4;
  Message *pMVar5;
  AssertHelper *this_00;
  float *pfVar6;
  char *pcVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  ushort uVar10;
  undefined1 auStackY_1d8 [32];
  AssertHelper local_198;
  longlong *local_190;
  AssertionResult local_188;
  unique_ptr<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>_>
  local_178;
  ArrayView<float> local_170;
  void *local_160 [3];
  undefined1 local_148 [96];
  longlong *local_e8;
  longlong local_d8 [7];
  longlong *local_a0;
  longlong *local_98;
  undefined1 local_88 [56];
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  puVar1 = &this->field_0x10;
  pvVar2 = rltests::qs::output::valuesPerLODPerConfig._Mypair._Myval2._Myfirst
           [*(longlong *)&this->field_0xd8]._Mypair._Myval2._Myfirst;
  rl4::CPUJointsOutputInstance::CPUJointsOutputInstance
            ((CPUJointsOutputInstance *)local_148,
             (ushort)((longlong)
                      (ulonglong)
                      (uint)(*(int *)&(pvVar2->_Mypair)._Myval2._Mylast -
                            *(int *)&(pvVar2->_Mypair)._Myval2._Myfirst) >> 2),Vector,
             this->field_0xe0,Vector,(MemoryResource *)puVar1);
  rl4::CPUJointsOutputInstance::getOutputBuffer((CPUJointsOutputInstance *)local_148,&local_170);
  uVar10 = 0;
  ControlsFactory::getInstanceFactory
            ((function<std::unique_ptr<rl4::ControlsInputInstance,std::function<void___cdecl(rl4::ControlsInputInstance_*)>_>___cdecl(av::ArrayView<rl4::ControlInitializer_const_>,pma::MemoryResource_*)>
              *)local_88,0,
             (ushort)((longlong)rltests::qs::input::values._Mypair._Myval2._Mylast -
                      (longlong)rltests::qs::input::values._Mypair._Myval2._Myfirst >> 2),0,0,0);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:___cdecl_pma::impl::PolyAllocator<rl4::ControlInitializer,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::ControlInitializer,8,pma::DefaultMemoryResource>(void)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<rl4::ControlInitializer,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::ControlInitializer,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:___cdecl_pma::impl::PolyAllocator<rl4::ControlInitializer,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::ControlInitializer,8,pma::DefaultMemoryResource>(void)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    atexit(`pma::impl::PolyAllocator<rl4::ControlInitializer,8,pma::DefaultMemoryResource>::
           PolyAllocator<rl4::ControlInitializer,8,pma::DefaultMemoryResource>'::__l2::
           _dynamic_atexit_destructor_for__dmr__);
    _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<rl4::ControlInitializer,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::ControlInitializer,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  local_188.success_ = false;
  local_188._1_7_ = 0;
  local_188.message_._Mypair._Myval2 =
       (_Compressed_pair<std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_*,1>
        )(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
  local_198.data_ = (AssertHelperData *)puVar1;
  if (local_50 == (longlong *)0x0) {
    std::_Xbad_function_call();
    return;
  }
  (**(code **)(*local_50 + 0x10))(local_50,local_d8,&local_188,&local_198);
  (**(code **)(*local_98 + 0x28))(local_98,local_160);
  memmove(local_160[0],rltests::qs::input::values._Mypair._Myval2._Myfirst,
          (longlong)rltests::qs::input::values._Mypair._Myval2._Mylast -
          (longlong)rltests::qs::input::values._Mypair._Myval2._Myfirst);
  dVar3 = __real_3f60624de0000000;
  if (rltests::qs::unoptimized::lodCount != 0) {
    do {
      uVar9 = 0;
      memset(local_170.ptr,0,local_170.sz * 4);
      (**(code **)(**(longlong **)&this->field_0xd0 + 0x20))
                (*(longlong **)&this->field_0xd0,local_98,local_148,uVar10);
      pvVar2 = rltests::qs::output::valuesPerLODPerConfig._Mypair._Myval2._Myfirst
               [*(longlong *)&this->field_0xd8]._Mypair._Myval2._Myfirst;
      pfVar6 = pvVar2[uVar10]._Mypair._Myval2._Myfirst;
      if ((longlong)pvVar2[uVar10]._Mypair._Myval2._Mylast - (longlong)pfVar6 >> 2 != 0) {
        do {
          testing::internal::DoubleNearPredFormat
                    (&local_188,"outputBuffer[i]","expected[i]","threshold",
                     (double)local_170.ptr[uVar9],(double)pfVar6[uVar9],dVar3);
          uVar4._Mypair._Myval2 = local_188.message_._Mypair._Myval2;
          if (local_188.success_ == false) {
            pMVar5 = (Message *)testing::Message::Message((Message *)&local_178);
            if (local_188.message_._Mypair._Myval2 ==
                (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
              pcVar7 = "";
            }
            else {
              pcVar7 = (char *)local_188.message_._Mypair._Myval2;
              if (0xf < *(ulong64 *)((longlong)local_188.message_._Mypair._Myval2 + 0x18)) {
                pcVar7 = *(char **)local_188.message_._Mypair._Myval2;
              }
            }
            this_00 = (AssertHelper *)
                      testing::internal::AssertHelper::AssertHelper
                                (&local_198,kFatalFailure,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\rltests\\joints\\quaternions\\TestQuaternionEvaluator.cpp"
                                 ,0xa9,pcVar7);
            testing::internal::AssertHelper::operator=(this_00,pMVar5);
            testing::internal::AssertHelper::~AssertHelper(&local_198);
            if (local_178._Mypair._Myval2 !=
                (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
              puVar8 = (undefined8 *)
                       ((longlong)*(int *)(*(longlong *)local_178._Mypair._Myval2 + 4) +
                       (longlong)local_178._Mypair._Myval2);
              (**(code **)*puVar8)(puVar8,1);
            }
            uVar4._Mypair._Myval2 = local_188.message_._Mypair._Myval2;
            if (local_188.message_._Mypair._Myval2 !=
                (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
              std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                        ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                         local_188.message_._Mypair._Myval2);
              ::operator_delete((void *)uVar4._Mypair._Myval2,0x20);
            }
            if (local_98 != (longlong *)0x0) {
              local_190 = local_98;
              if (local_a0 == (longlong *)0x0) {
                std::_Xbad_function_call();
                return;
              }
              (**(code **)(*local_a0 + 0x10))(local_a0,&local_190);
            }
            if (local_a0 == (longlong *)0x0) goto LAB_14c564ab5;
            (**(code **)(*local_a0 + 0x20))(local_a0,local_a0 != local_d8);
            goto LAB_14c564ab1;
          }
          if (local_188.message_._Mypair._Myval2 !=
              (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                       local_188.message_._Mypair._Myval2);
            ::operator_delete((void *)uVar4._Mypair._Myval2,0x20);
          }
          pfVar6 = pvVar2[uVar10]._Mypair._Myval2._Myfirst;
          uVar9 = uVar9 + 1;
        } while (uVar9 < (ulonglong)
                         ((longlong)pvVar2[uVar10]._Mypair._Myval2._Mylast - (longlong)pfVar6 >> 2))
        ;
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 < rltests::qs::unoptimized::lodCount);
  }
  if (local_98 != (longlong *)0x0) {
    local_190 = local_98;
    if (local_a0 == (longlong *)0x0) {
      std::_Xbad_function_call();
      return;
    }
    (**(code **)(*local_a0 + 0x10))(local_a0,&local_190);
  }
  if (local_a0 != (longlong *)0x0) {
    (**(code **)(*local_a0 + 0x20))(local_a0,local_a0 != local_d8);
LAB_14c564ab1:
    local_a0 = (longlong *)0x0;
  }
LAB_14c564ab5:
  if (local_50 != (longlong *)0x0) {
    (**(code **)(*local_50 + 0x20))(local_50,local_50 != (longlong *)local_88);
    local_50 = (longlong *)0x0;
  }
  if (local_e8 != (longlong *)0x0) {
    (**(code **)(*local_e8 + 0x20))(local_e8,local_e8 != (longlong *)(local_148 + 0x28));
    local_e8 = (longlong *)0x0;
  }
  if ((float *)local_148._16_8_ != (float *)0x0) {
    (**(code **)(*(longlong *)local_148._8_8_ + 0x10))
              (local_148._8_8_,local_148._16_8_,
               local_148._32_8_ - local_148._16_8_ & 0xfffffffffffffffc,0x40);
    local_148._32_8_ = (float *)0x0;
    local_148._16_8_ = (float *)0x0;
    local_148._24_8_ = (float *)0x0;
  }
  rl4::JointsOutputInstance::~JointsOutputInstance((JointsOutputInstance *)local_148);
  return;
}

// `scalar_deleting_destructor' @ 14c564cb0

void * __thiscall
QuaternionEvaluatorTest_EvaluatePerLOD_Test<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>_>
::_scalar_deleting_destructor_
          (QuaternionEvaluatorTest_EvaluatePerLOD_Test<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>_>
           *this,uint param_1)

{
  ::`anonymous_namespace'::
  QuaternionEvaluatorTest<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>_>
  ::
  ~QuaternionEvaluatorTest<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>_>
            (this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe8);
  }
  return this;
}

// CreateTest @ 14c564cf0

Test * __thiscall
testing::internal::
TestFactoryImpl<QuaternionEvaluatorTest_EvaluatePerLOD_Test<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>_>_>
::CreateTest(TestFactoryImpl<QuaternionEvaluatorTest_EvaluatePerLOD_Test<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>_>_>
             *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0xe8);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ =
         (longlong)
         &QuaternionEvaluatorTest<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>_>
          ::_vftable_;
    this_00[1]._padding_ = (longlong)&pma::AlignedMemoryResource::_vftable_;
    rltests::qs::QuaternionReader::QuaternionReader
              ((QuaternionReader *)&this_00[1].gtest_flag_saver_);
    this_00[0xc].gtest_flag_saver_._Mypair._Myval2 = (GTestFlagSaver *)0x0;
    this_00->_padding_ =
         (longlong)
         &
         ___7__QuaternionEvaluatorTest_EvaluatePerLOD_Test_V__tuple_MU__T256_UF128_sse_trimd___fallback_trimd__UF128_sse_3_U__QuaternionsToEulerAngles_U__ang_MUradians_impl_tdm___tdm___0A__rl4___std____6B_
    ;
    this_00[0xd]._padding_ = 0;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c564d70

void * __thiscall
testing::internal::
TestFactoryImpl<QuaternionEvaluatorTest_EvaluatePerLOD_Test<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>_>_>
::_scalar_deleting_destructor_
          (TestFactoryImpl<QuaternionEvaluatorTest_EvaluatePerLOD_Test<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>_>_>
           *this,uint param_1)

{
  *this = (TestFactoryImpl<QuaternionEvaluatorTest_EvaluatePerLOD_Test<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>_>_>
           )&___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// SetUp @ 14c564db0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void __thiscall
`anonymous_namespace'::
QuaternionEvaluatorTest<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>_>
::SetUp(void *this)

{
  Extent *pEVar1;
  float *pfVar2;
  ushort *puVar3;
  LODRegion *pLVar4;
  longlong lVar5;
  int *piVar6;
  JointGroup<float> *pJVar7;
  MemoryResource MVar8;
  MemoryResource MVar9;
  undefined **ppuVar10;
  ulonglong uVar11;
  longlong lVar12;
  _Vector_val<std::_Simple_types<unsigned_short>_> *this_00;
  undefined **ppuVar13;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *pvVar14;
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *pvVar15;
  vector<rl4::LODRegion,pma::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>_> *pvVar16;
  longlong lVar17;
  MemoryResource MVar18;
  undefined1 auStack_268 [32];
  MemoryResource MStack_248;
  MemoryResource MStack_240;
  MemoryResource MStack_238;
  int *piStack_230;
  undefined1 auStack_228 [64];
  MemoryResource MStack_1e8;
  JointGroup<float> JStack_1e0;
  undefined1 auStack_158 [56];
  undefined8 uStack_120;
  MemoryResource MStack_118;
  undefined1 auStack_108 [56];
  undefined8 uStack_d0;
  MemoryResource MStack_c8;
  undefined **ppuStack_b8;
  undefined **ppuStack_b0;
  undefined ***pppuStack_80;
  undefined **ppuStack_78;
  undefined **ppuStack_70;
  undefined ***pppuStack_40;
  ulonglong uStack_38;
  
  uStack_38 = __security_cookie.value ^ (ulonglong)auStack_268;
  *(undefined8 *)((longlong)this + 0xd8) = 0;
  MVar18 = (MemoryResource)((longlong)this + 0x10);
  *(undefined1 *)((longlong)this + 0xe0) = 4;
  uVar11 = (longlong)rltests::qs::optimized::floatValues._Mypair._Myval2._Mylast -
           (longlong)rltests::qs::optimized::floatValues._Mypair._Myval2._Myfirst >> 5;
  pJVar7 = rl4::JointGroup<float>::JointGroup<float>(&JStack_1e0,(MemoryResource *)MVar18);
  piStack_230 = (int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9d4c)
  ;
  if ((*piStack_230 <
       `public:___cdecl_pma::impl::PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>(void)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:___cdecl_pma::impl::PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>(void)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    atexit(`pma::impl::PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>::
           PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>'::__l2::
           _dynamic_atexit_destructor_for__dmr__);
    _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  MStack_248 = (MemoryResource)
               &`public:___cdecl_pma::impl::PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>(void)___ptr64'
                ::__l2::dmr;
  if (MVar18 != (MemoryResource)0x0) {
    MStack_248 = MVar18;
  }
  MVar8 = (MemoryResource)0x0;
  MVar18 = (MemoryResource)0x0;
  MStack_240 = (MemoryResource)0x0;
  MStack_238 = (MemoryResource)0x0;
  if (uVar11 != 0) {
    if (0x1e1e1e1e1e1e1e1 < uVar11) {
                    /* WARNING: Subroutine does not return */
      std::
      vector<rl4::JointGroup<float>,pma::PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>_>
      ::_Xlength();
    }
    MVar8 = (MemoryResource)
            (**(code **)((longlong)*(MemoryResource *)MStack_248 + 8))(MStack_248,uVar11 * 0x88,8);
    MStack_238 = (MemoryResource)((longlong)MVar8 + uVar11 * 0x88);
    MVar18 = MVar8;
    MStack_240 = MVar8;
    do {
      rl4::JointGroup<float>::JointGroup<float>((JointGroup<float> *)MVar18,pJVar7);
      MVar18 = (MemoryResource)((longlong)MVar18 + 0x88);
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
  }
  rl4::JointGroup<float>::~JointGroup<float>(&JStack_1e0);
  uVar11 = 0;
  lVar5 = (longlong)MVar18 - (longlong)MVar8 >> 0x3f;
  lVar17 = ((longlong)MVar18 - (longlong)MVar8) / 0x88 + lVar5;
  if (lVar17 != lVar5) {
    lVar12 = 0;
    this_00 = (_Vector_val<std::_Simple_types<unsigned_short>_> *)((longlong)MStack_240 + 0x40);
    do {
      pvVar14 = (vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *)
                (&((rltests::qs::optimized::floatValues._Mypair._Myval2._Myfirst)->_Mypair)._Myval1.
                  field_0x0 + lVar12);
      if ((vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *)
          ((longlong)(this_00 + 0xfffffffffffffffd) + 8U) != pvVar14) {
        pfVar2 = ((_Vector_val<std::_Simple_types<float>_> *)((longlong)&pvVar14->_Mypair + 8))->
                 _Myfirst;
        std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>::
        _Assign_counted_range<float_*>
                  ((vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *)
                   ((longlong)(this_00 + 0xfffffffffffffffd) + 8U),pfVar2,
                   (longlong)*(float **)((longlong)&pvVar14->_Mypair + 0x10) - (longlong)pfVar2 >> 2
                  );
      }
      pvVar15 = (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
                 *)(&((rltests::qs::optimized::inputIndices._Mypair._Myval2._Myfirst)->_Mypair).
                     _Myval1.field_0x0 + lVar12);
      if ((vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *
          )((longlong)(this_00 + 0xfffffffffffffffe) + 0x10U) != pvVar15) {
        puVar3 = ((_Vector_val<std::_Simple_types<unsigned_short>_> *)
                 ((longlong)&pvVar15->_Mypair + 8))->_Myfirst;
        std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
        ::_Assign_counted_range<unsigned_short_*>
                  ((vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
                    *)((longlong)(this_00 + 0xfffffffffffffffe) + 0x10U),puVar3,
                   (longlong)*(ushort **)((longlong)&pvVar15->_Mypair + 0x10) - (longlong)puVar3 >>
                   1);
      }
      pvVar15 = (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
                 *)(&((rltests::qs::optimized::outputIndices._Mypair._Myval2._Myfirst
                       [*(longlong *)((longlong)this + 0xd8)]._Mypair._Myval2._Myfirst)->_Mypair).
                     _Myval1.field_0x0 + lVar12);
      if (this_00 != (_Vector_val<std::_Simple_types<unsigned_short>_> *)pvVar15) {
        puVar3 = (pvVar15->_Mypair)._Myval2._Myfirst;
        std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
        ::_Assign_counted_range<unsigned_short_*>
                  ((vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
                    *)this_00,puVar3,
                   (longlong)(pvVar15->_Mypair)._Myval2._Mylast - (longlong)puVar3 >> 1);
      }
      pvVar16 = (vector<rl4::LODRegion,pma::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>_>
                 *)(&((rltests::qs::optimized::lodRegions._Mypair._Myval2._Myfirst)->_Mypair).
                     _Myval1.field_0x0 + lVar12);
      if ((vector<rl4::LODRegion,pma::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>_> *
          )((longlong)(this_00 + 1) + 8U) != pvVar16) {
        pLVar4 = ((_Vector_val<std::_Simple_types<rl4::LODRegion>_> *)
                 ((longlong)&pvVar16->_Mypair + 8))->_Myfirst;
        std::vector<rl4::LODRegion,pma::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>_>
        ::_Assign_counted_range<rl4::LODRegion_*>
                  ((vector<rl4::LODRegion,pma::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>_>
                    *)((longlong)(this_00 + 1) + 8U),pLVar4,
                   ((longlong)*(LODRegion **)((longlong)&pvVar16->_Mypair + 0x10) - (longlong)pLVar4
                   ) / 0x18);
      }
      lVar12 = lVar12 + 0x20;
      *(uint *)&((vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
                  *)((longlong)(this_00 + 2) + 0x10))->_Mypair =
           rltests::qs::optimized::subMatrices._Mypair._Myval2._Myfirst[uVar11].cols;
      pEVar1 = rltests::qs::optimized::subMatrices._Mypair._Myval2._Myfirst + uVar11;
      uVar11 = uVar11 + 1;
      *(uint *)&((vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
                  *)((longlong)(this_00 + 2) + 0x14))->_Mypair = pEVar1->rows;
      this_00 = (_Vector_val<std::_Simple_types<unsigned_short>_> *)((longlong)(this_00 + 5) + 0x10)
      ;
    } while (uVar11 < (ulonglong)(lVar17 - lVar5));
  }
  piVar6 = piStack_230;
  ppuVar10 = (undefined **)((longlong)this + 0x10);
  if ((*piStack_230 <
       `public:___cdecl_pma::impl::PolyAllocator<rl4::VectorizedJointGroupQuaternionCalculationStrategy<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::VectorizedJointGroupQuaternionCalculationStrategy<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>,8,pma::DefaultMemoryResource>(void)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<rl4::VectorizedJointGroupQuaternionCalculationStrategy<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::VectorizedJointGroupQuaternionCalculationStrategy<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:___cdecl_pma::impl::PolyAllocator<rl4::VectorizedJointGroupQuaternionCalculationStrategy<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::VectorizedJointGroupQuaternionCalculationStrategy<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>,8,pma::DefaultMemoryResource>(void)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    atexit(`pma::impl::
           PolyAllocator<rl4::VectorizedJointGroupQuaternionCalculationStrategy<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>,8,pma::DefaultMemoryResource>
           ::
           PolyAllocator<rl4::VectorizedJointGroupQuaternionCalculationStrategy<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>,8,pma::DefaultMemoryResource>'
           ::__l2::_dynamic_atexit_destructor_for__dmr__);
    _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<rl4::VectorizedJointGroupQuaternionCalculationStrategy<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::VectorizedJointGroupQuaternionCalculationStrategy<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  ppuVar13 = &`public:___cdecl_pma::impl::PolyAllocator<rl4::VectorizedJointGroupQuaternionCalculationStrategy<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::VectorizedJointGroupQuaternionCalculationStrategy<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>,8,pma::DefaultMemoryResource>(void)___ptr64'
              ::__l2::dmr;
  if (ppuVar10 != (undefined **)0x0) {
    ppuVar13 = ppuVar10;
  }
  MVar8 = (MemoryResource)(**(code **)(*ppuVar13 + 8))(ppuVar13,8,8);
  *(undefined ***)MVar8 =
       &
       ___7__VectorizedJointGroupQuaternionCalculationStrategy_MU__T256_U__T128_M_scalar_trimd___fallback_trimd__U__T128_M_scalar_3_UPassthroughAdapter_rl4___rl4__6B_
  ;
  ppuStack_b8 = &
                ___7___Func_impl_no_alloc_V<lambda_1>__1____create___V___ManagedInstance_V__unique_ptr_U__JointGroupQuaternionCalculationStrategy_M_rl4__V__function___A6AXPEAU__JointGroupQuaternionCalculationStrategy_M_rl4___Z_std___std__U__VectorizedJointGroupQuaternionCalculationStrategy_MU__T256_U__T128_M_scalar_trimd___fallback_trimd__U__T128_M_scalar_3_UPassthroughAdapter_rl4___rl4__U__JointGroupQuaternionCalculationStrategy_M_4__impl_pma__QEAA_AV__unique_ptr_U__JointGroupQuaternionCalculationStrategy_M_rl4__V__function___A6AXPEAU__JointGroupQuaternionCalculationStrategy_M_rl4___Z_std___std__XZ_XPEAU__JointGroupQuaternionCalculationStrategy_M_rl4___std__6B_
  ;
  pppuStack_80 = &ppuStack_b8;
  uStack_120 = (_Func_base<void,rl4::JointGroupQuaternionCalculationStrategy<float>_*> *)0x0;
  ppuStack_b0 = ppuVar13;
  uStack_120 = std::
               _Func_impl_no_alloc<`pma::impl::ManagedInstance<std::unique_ptr<rl4::JointGroupQuaternionCalculationStrategy<float>,std::function<void___cdecl(rl4::JointGroupQuaternionCalculationStrategy<float>_*)>_>,rl4::VectorizedJointGroupQuaternionCalculationStrategy<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>,rl4::JointGroupQuaternionCalculationStrategy<float>_>::create<>'::__l2::<lambda_1>,void,rl4::JointGroupQuaternionCalculationStrategy<float>_*>
               ::_Move(&ppuStack_b8,auStack_158);
  if (pppuStack_80 != (undefined ***)0x0) {
    (*(code *)(*pppuStack_80)[4])(pppuStack_80,pppuStack_80 != &ppuStack_b8);
  }
  MStack_118 = MVar8;
  if ((*piVar6 < `public:___cdecl_pma::impl::PolyAllocator<rl4::QuaternionJointsEvaluator<float>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::QuaternionJointsEvaluator<float>,8,pma::DefaultMemoryResource>(void)___ptr64'
                 ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<rl4::QuaternionJointsEvaluator<float>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::QuaternionJointsEvaluator<float>,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:___cdecl_pma::impl::PolyAllocator<rl4::QuaternionJointsEvaluator<float>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::QuaternionJointsEvaluator<float>,8,pma::DefaultMemoryResource>(void)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    atexit(`pma::impl::
           PolyAllocator<rl4::QuaternionJointsEvaluator<float>,8,pma::DefaultMemoryResource>::
           PolyAllocator<rl4::QuaternionJointsEvaluator<float>,8,pma::DefaultMemoryResource>'::__l2
           ::_dynamic_atexit_destructor_for__dmr__);
    _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<rl4::QuaternionJointsEvaluator<float>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::QuaternionJointsEvaluator<float>,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  ppuVar13 = &`public:___cdecl_pma::impl::PolyAllocator<rl4::QuaternionJointsEvaluator<float>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::QuaternionJointsEvaluator<float>,8,pma::DefaultMemoryResource>(void)___ptr64'
              ::__l2::dmr;
  if (ppuVar10 != (undefined **)0x0) {
    ppuVar13 = ppuVar10;
  }
  MVar9 = (MemoryResource)(**(code **)(*ppuVar13 + 8))(ppuVar13,0xb0,8);
  MVar8 = MStack_118;
  MStack_118 = (MemoryResource)0x0;
  std::function<void___cdecl(rl4::JointGroupQuaternionCalculationStrategy<float>_*)>::
  function<void___cdecl(rl4::JointGroupQuaternionCalculationStrategy<float>_*)>
            ((function<void___cdecl(rl4::JointGroupQuaternionCalculationStrategy<float>_*)> *)
             auStack_228,
             (function<void___cdecl(rl4::JointGroupQuaternionCalculationStrategy<float>_*)> *)
             auStack_158);
  MStack_1e8 = (MemoryResource)0x0;
  *(undefined ***)MVar9 = &___7__QuaternionJointsEvaluator_M_rl4__6B_;
  std::function<void___cdecl(rl4::JointGroupQuaternionCalculationStrategy<float>_*)>::
  function<void___cdecl(rl4::JointGroupQuaternionCalculationStrategy<float>_*)>
            ((function<void___cdecl(rl4::JointGroupQuaternionCalculationStrategy<float>_*)> *)
             ((longlong)MVar9 + 8),
             (function<void___cdecl(rl4::JointGroupQuaternionCalculationStrategy<float>_*)> *)
             auStack_228);
  *(MemoryResource *)((longlong)MVar9 + 0x48) = MVar8;
  *(MemoryResource *)((longlong)MVar9 + 0x50) = MStack_248;
  *(MemoryResource *)((longlong)MVar9 + 0x58) = MStack_240;
  *(MemoryResource *)((longlong)MVar9 + 0x68) = MStack_238;
  *(MemoryResource *)((longlong)MVar9 + 0x60) = MVar18;
  *(MemoryResource *)((longlong)MVar9 + 0xa8) = (MemoryResource)0x0;
  if (MStack_1e8 != (MemoryResource)0x0) {
    MStack_248 = MStack_1e8;
    if ((longlong *)auStack_228._56_8_ == (longlong *)0x0) {
      std::_Xbad_function_call();
      return;
    }
    (**(code **)(*(longlong *)auStack_228._56_8_ + 0x10))(auStack_228._56_8_,&MStack_248);
  }
  if ((longlong *)auStack_228._56_8_ != (longlong *)0x0) {
    (**(code **)(*(longlong *)auStack_228._56_8_ + 0x20))
              (auStack_228._56_8_,(undefined1 *)auStack_228._56_8_ != auStack_228);
  }
  ppuStack_78 = &
                ___7___Func_impl_no_alloc_V<lambda_1>__1____create_V__unique_ptr_U__JointGroupQuaternionCalculationStrategy_M_rl4__V__function___A6AXPEAU__JointGroupQuaternionCalculationStrategy_M_rl4___Z_std___std__V__vector_U__JointGroup_M_rl4__V__PolyAllocator_U__JointGroup_M_rl4___07VDefaultMemoryResource_pma___pma___2___TPEAVAlignedMemoryResource_pma_____ManagedInstance_V__unique_ptr_VJointsEvaluator_rl4__V__function___A6AXPEAVJointsEvaluator_rl4___Z_std___std__V__QuaternionJointsEvaluator_M_rl4__VJointsEvaluator_4__impl_pma__QEAA_AV__unique_ptr_VJointsEvaluator_rl4__V__function___A6AXPEAVJointsEvaluator_rl4___Z_std___std____QEAV__unique_ptr_U__JointGroupQuaternionCalculationStrategy_M_rl4__V__function___A6AXPEAU__JointGroupQuaternionCalculationStrategy_M_rl4___Z_std___6___QEAV__vector_U__JointGroup_M_rl4__V__PolyAllocator_U__JointGroup_M_rl4___07VDefaultMemoryResource_pma___pma___6___QEA__T__QEAPEAVAlignedMemoryResource_4__Z_XPEAVJointsEvaluator_rl4___std__6B_
  ;
  pppuStack_40 = &ppuStack_78;
  uStack_d0 = (_Func_base<void,rl4::JointsEvaluator_*> *)0x0;
  ppuStack_70 = ppuVar13;
  uStack_d0 = std::
              _Func_impl_no_alloc<`pma::impl::ManagedInstance<std::unique_ptr<rl4::JointsEvaluator,std::function<void___cdecl(rl4::JointsEvaluator_*)>_>,rl4::QuaternionJointsEvaluator<float>,rl4::JointsEvaluator>::create<std::unique_ptr<rl4::JointGroupQuaternionCalculationStrategy<float>,std::function<void___cdecl(rl4::JointGroupQuaternionCalculationStrategy<float>_*)>_>,std::vector<rl4::JointGroup<float>,pma::PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>_>,std::nullptr_t,pma::AlignedMemoryResource_*>'::__l2::<lambda_1>,void,rl4::JointsEvaluator_*>
              ::_Move(&ppuStack_78,auStack_108);
  if (pppuStack_40 != (undefined ***)0x0) {
    (*(code *)(*pppuStack_40)[4])(pppuStack_40,pppuStack_40 != &ppuStack_78);
  }
  MStack_c8 = MVar9;
  std::unique_ptr<rl4::JointsEvaluator,std::function<void___cdecl(rl4::JointsEvaluator_*)>_>::
  operator=<std::function<void___cdecl(rl4::JointsEvaluator_*)>,0>
            ((unique_ptr<rl4::JointsEvaluator,std::function<void___cdecl(rl4::JointsEvaluator_*)>_>
              *)((longlong)this + 0x90),
             (unique_ptr<rl4::JointsEvaluator,std::function<void___cdecl(rl4::JointsEvaluator_*)>_>
              *)auStack_108);
  if (MStack_c8 != (MemoryResource)0x0) {
    MStack_248 = MStack_c8;
    if (uStack_d0 == (_Func_base<void,rl4::JointsEvaluator_*> *)0x0) {
      std::_Xbad_function_call();
      return;
    }
    (**(code **)((longlong)*uStack_d0 + 0x10))(uStack_d0,&MStack_248);
  }
  if (uStack_d0 != (_Func_base<void,rl4::JointsEvaluator_*> *)0x0) {
    (**(code **)((longlong)*uStack_d0 + 0x20))
              (uStack_d0,uStack_d0 != (_Func_base<void,rl4::JointsEvaluator_*> *)auStack_108);
  }
  if (MStack_118 != (MemoryResource)0x0) {
    MStack_248 = MStack_118;
    if (uStack_120 == (_Func_base<void,rl4::JointGroupQuaternionCalculationStrategy<float>_*> *)0x0)
    {
      std::_Xbad_function_call();
      return;
    }
    (**(code **)((longlong)*uStack_120 + 0x10))(uStack_120,&MStack_248);
  }
  if (uStack_120 != (_Func_base<void,rl4::JointGroupQuaternionCalculationStrategy<float>_*> *)0x0) {
    (**(code **)((longlong)*uStack_120 + 0x20))
              (uStack_120,
               uStack_120 !=
               (_Func_base<void,rl4::JointGroupQuaternionCalculationStrategy<float>_*> *)auStack_158
              );
  }
  return;
}

// `scalar_deleting_destructor' @ 14c564dc0

void * __thiscall
`anonymous_namespace'::
QuaternionEvaluatorTest<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  ~QuaternionEvaluatorTest<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>_>
            (this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe8);
  }
  return this;
}

// TestBody @ 14c564e00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014c564fa1) */
/* WARNING: Removing unreachable block (ram,0x00014c564fa8) */
/* WARNING: Removing unreachable block (ram,0x00014c564fac) */
/* WARNING: Removing unreachable block (ram,0x00014c564fb1) */

void __thiscall
QuaternionEvaluatorTest_EvaluatePerLOD_Test<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>_>
::TestBody(QuaternionEvaluatorTest_EvaluatePerLOD_Test<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>_>
           *this)

{
  undefined1 *puVar1;
  vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *pvVar2;
  double dVar3;
  unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  uVar4;
  Message *pMVar5;
  AssertHelper *this_00;
  float *pfVar6;
  char *pcVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  ushort uVar10;
  undefined1 auStackY_1d8 [32];
  AssertHelper local_198;
  longlong *local_190;
  AssertionResult local_188;
  unique_ptr<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>_>
  local_178;
  ArrayView<float> local_170;
  void *local_160 [3];
  undefined1 local_148 [96];
  longlong *local_e8;
  longlong local_d8 [7];
  longlong *local_a0;
  longlong *local_98;
  undefined1 local_88 [56];
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  puVar1 = &this->field_0x10;
  pvVar2 = rltests::qs::output::valuesPerLODPerConfig._Mypair._Myval2._Myfirst
           [*(longlong *)&this->field_0xd8]._Mypair._Myval2._Myfirst;
  rl4::CPUJointsOutputInstance::CPUJointsOutputInstance
            ((CPUJointsOutputInstance *)local_148,
             (ushort)((longlong)
                      (ulonglong)
                      (uint)(*(int *)&(pvVar2->_Mypair)._Myval2._Mylast -
                            *(int *)&(pvVar2->_Mypair)._Myval2._Myfirst) >> 2),Vector,
             this->field_0xe0,Vector,(MemoryResource *)puVar1);
  rl4::CPUJointsOutputInstance::getOutputBuffer((CPUJointsOutputInstance *)local_148,&local_170);
  uVar10 = 0;
  ControlsFactory::getInstanceFactory
            ((function<std::unique_ptr<rl4::ControlsInputInstance,std::function<void___cdecl(rl4::ControlsInputInstance_*)>_>___cdecl(av::ArrayView<rl4::ControlInitializer_const_>,pma::MemoryResource_*)>
              *)local_88,0,
             (ushort)((longlong)rltests::qs::input::values._Mypair._Myval2._Mylast -
                      (longlong)rltests::qs::input::values._Mypair._Myval2._Myfirst >> 2),0,0,0);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:___cdecl_pma::impl::PolyAllocator<rl4::ControlInitializer,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::ControlInitializer,8,pma::DefaultMemoryResource>(void)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<rl4::ControlInitializer,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::ControlInitializer,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:___cdecl_pma::impl::PolyAllocator<rl4::ControlInitializer,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::ControlInitializer,8,pma::DefaultMemoryResource>(void)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    atexit(`pma::impl::PolyAllocator<rl4::ControlInitializer,8,pma::DefaultMemoryResource>::
           PolyAllocator<rl4::ControlInitializer,8,pma::DefaultMemoryResource>'::__l2::
           _dynamic_atexit_destructor_for__dmr__);
    _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<rl4::ControlInitializer,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::ControlInitializer,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  local_188.success_ = false;
  local_188._1_7_ = 0;
  local_188.message_._Mypair._Myval2 =
       (_Compressed_pair<std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_*,1>
        )(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
  local_198.data_ = (AssertHelperData *)puVar1;
  if (local_50 == (longlong *)0x0) {
    std::_Xbad_function_call();
    return;
  }
  (**(code **)(*local_50 + 0x10))(local_50,local_d8,&local_188,&local_198);
  (**(code **)(*local_98 + 0x28))(local_98,local_160);
  memmove(local_160[0],rltests::qs::input::values._Mypair._Myval2._Myfirst,
          (longlong)rltests::qs::input::values._Mypair._Myval2._Mylast -
          (longlong)rltests::qs::input::values._Mypair._Myval2._Myfirst);
  dVar3 = __real_3f60624de0000000;
  if (rltests::qs::unoptimized::lodCount != 0) {
    do {
      uVar9 = 0;
      memset(local_170.ptr,0,local_170.sz * 4);
      (**(code **)(**(longlong **)&this->field_0xd0 + 0x20))
                (*(longlong **)&this->field_0xd0,local_98,local_148,uVar10);
      pvVar2 = rltests::qs::output::valuesPerLODPerConfig._Mypair._Myval2._Myfirst
               [*(longlong *)&this->field_0xd8]._Mypair._Myval2._Myfirst;
      pfVar6 = pvVar2[uVar10]._Mypair._Myval2._Myfirst;
      if ((longlong)pvVar2[uVar10]._Mypair._Myval2._Mylast - (longlong)pfVar6 >> 2 != 0) {
        do {
          testing::internal::DoubleNearPredFormat
                    (&local_188,"outputBuffer[i]","expected[i]","threshold",
                     (double)local_170.ptr[uVar9],(double)pfVar6[uVar9],dVar3);
          uVar4._Mypair._Myval2 = local_188.message_._Mypair._Myval2;
          if (local_188.success_ == false) {
            pMVar5 = (Message *)testing::Message::Message((Message *)&local_178);
            if (local_188.message_._Mypair._Myval2 ==
                (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
              pcVar7 = "";
            }
            else {
              pcVar7 = (char *)local_188.message_._Mypair._Myval2;
              if (0xf < *(ulong64 *)((longlong)local_188.message_._Mypair._Myval2 + 0x18)) {
                pcVar7 = *(char **)local_188.message_._Mypair._Myval2;
              }
            }
            this_00 = (AssertHelper *)
                      testing::internal::AssertHelper::AssertHelper
                                (&local_198,kFatalFailure,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\rltests\\joints\\quaternions\\TestQuaternionEvaluator.cpp"
                                 ,0xa9,pcVar7);
            testing::internal::AssertHelper::operator=(this_00,pMVar5);
            testing::internal::AssertHelper::~AssertHelper(&local_198);
            if (local_178._Mypair._Myval2 !=
                (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
              puVar8 = (undefined8 *)
                       ((longlong)*(int *)(*(longlong *)local_178._Mypair._Myval2 + 4) +
                       (longlong)local_178._Mypair._Myval2);
              (**(code **)*puVar8)(puVar8,1);
            }
            uVar4._Mypair._Myval2 = local_188.message_._Mypair._Myval2;
            if (local_188.message_._Mypair._Myval2 !=
                (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
              std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                        ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                         local_188.message_._Mypair._Myval2);
              ::operator_delete((void *)uVar4._Mypair._Myval2,0x20);
            }
            if (local_98 != (longlong *)0x0) {
              local_190 = local_98;
              if (local_a0 == (longlong *)0x0) {
                std::_Xbad_function_call();
                return;
              }
              (**(code **)(*local_a0 + 0x10))(local_a0,&local_190);
            }
            if (local_a0 == (longlong *)0x0) goto LAB_14c5650f5;
            (**(code **)(*local_a0 + 0x20))(local_a0,local_a0 != local_d8);
            goto LAB_14c5650f1;
          }
          if (local_188.message_._Mypair._Myval2 !=
              (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                       local_188.message_._Mypair._Myval2);
            ::operator_delete((void *)uVar4._Mypair._Myval2,0x20);
          }
          pfVar6 = pvVar2[uVar10]._Mypair._Myval2._Myfirst;
          uVar9 = uVar9 + 1;
        } while (uVar9 < (ulonglong)
                         ((longlong)pvVar2[uVar10]._Mypair._Myval2._Mylast - (longlong)pfVar6 >> 2))
        ;
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 < rltests::qs::unoptimized::lodCount);
  }
  if (local_98 != (longlong *)0x0) {
    local_190 = local_98;
    if (local_a0 == (longlong *)0x0) {
      std::_Xbad_function_call();
      return;
    }
    (**(code **)(*local_a0 + 0x10))(local_a0,&local_190);
  }
  if (local_a0 != (longlong *)0x0) {
    (**(code **)(*local_a0 + 0x20))(local_a0,local_a0 != local_d8);
LAB_14c5650f1:
    local_a0 = (longlong *)0x0;
  }
LAB_14c5650f5:
  if (local_50 != (longlong *)0x0) {
    (**(code **)(*local_50 + 0x20))(local_50,local_50 != (longlong *)local_88);
    local_50 = (longlong *)0x0;
  }
  if (local_e8 != (longlong *)0x0) {
    (**(code **)(*local_e8 + 0x20))(local_e8,local_e8 != (longlong *)(local_148 + 0x28));
    local_e8 = (longlong *)0x0;
  }
  if ((float *)local_148._16_8_ != (float *)0x0) {
    (**(code **)(*(longlong *)local_148._8_8_ + 0x10))
              (local_148._8_8_,local_148._16_8_,
               local_148._32_8_ - local_148._16_8_ & 0xfffffffffffffffc,0x40);
    local_148._32_8_ = (float *)0x0;
    local_148._16_8_ = (float *)0x0;
    local_148._24_8_ = (float *)0x0;
  }
  rl4::JointsOutputInstance::~JointsOutputInstance((JointsOutputInstance *)local_148);
  return;
}

// `scalar_deleting_destructor' @ 14c5652f0

void * __thiscall
QuaternionEvaluatorTest_EvaluatePerLOD_Test<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>_>
::_scalar_deleting_destructor_
          (QuaternionEvaluatorTest_EvaluatePerLOD_Test<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>_>
           *this,uint param_1)

{
  ::`anonymous_namespace'::
  QuaternionEvaluatorTest<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>_>
  ::
  ~QuaternionEvaluatorTest<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>_>
            (this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe8);
  }
  return this;
}

// CreateTest @ 14c565330

Test * __thiscall
testing::internal::
TestFactoryImpl<QuaternionEvaluatorTest_EvaluatePerLOD_Test<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>_>_>
::CreateTest(TestFactoryImpl<QuaternionEvaluatorTest_EvaluatePerLOD_Test<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>_>_>
             *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0xe8);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ =
         (longlong)
         &QuaternionEvaluatorTest<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>_>
          ::_vftable_;
    this_00[1]._padding_ = (longlong)&pma::AlignedMemoryResource::_vftable_;
    rltests::qs::QuaternionReader::QuaternionReader
              ((QuaternionReader *)&this_00[1].gtest_flag_saver_);
    this_00[0xc].gtest_flag_saver_._Mypair._Myval2 = (GTestFlagSaver *)0x0;
    this_00->_padding_ =
         (longlong)
         &
         ___7__QuaternionEvaluatorTest_EvaluatePerLOD_Test_V__tuple_MU__T256_U__T128_M_scalar_trimd___fallback_trimd__U__T128_M_scalar_3_UPassthroughAdapter_rl4___std____6B_
    ;
    this_00[0xd]._padding_ = 0;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c5653b0

void * __thiscall
testing::internal::
TestFactoryImpl<QuaternionEvaluatorTest_EvaluatePerLOD_Test<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>_>_>
::_scalar_deleting_destructor_
          (TestFactoryImpl<QuaternionEvaluatorTest_EvaluatePerLOD_Test<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>_>_>
           *this,uint param_1)

{
  *this = (TestFactoryImpl<QuaternionEvaluatorTest_EvaluatePerLOD_Test<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>_>_>
           )&___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// SetUp @ 14c5653f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void __thiscall
`anonymous_namespace'::
QuaternionEvaluatorTest<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>_>
::SetUp(void *this)

{
  Extent *pEVar1;
  float *pfVar2;
  ushort *puVar3;
  LODRegion *pLVar4;
  longlong lVar5;
  int *piVar6;
  JointGroup<float> *pJVar7;
  MemoryResource MVar8;
  MemoryResource MVar9;
  undefined **ppuVar10;
  ulonglong uVar11;
  longlong lVar12;
  _Vector_val<std::_Simple_types<unsigned_short>_> *this_00;
  undefined **ppuVar13;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *pvVar14;
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *pvVar15;
  vector<rl4::LODRegion,pma::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>_> *pvVar16;
  longlong lVar17;
  MemoryResource MVar18;
  undefined1 auStack_268 [32];
  MemoryResource MStack_248;
  MemoryResource MStack_240;
  MemoryResource MStack_238;
  int *piStack_230;
  undefined1 auStack_228 [64];
  MemoryResource MStack_1e8;
  JointGroup<float> JStack_1e0;
  undefined1 auStack_158 [56];
  undefined8 uStack_120;
  MemoryResource MStack_118;
  undefined1 auStack_108 [56];
  undefined8 uStack_d0;
  MemoryResource MStack_c8;
  undefined **ppuStack_b8;
  undefined **ppuStack_b0;
  undefined ***pppuStack_80;
  undefined **ppuStack_78;
  undefined **ppuStack_70;
  undefined ***pppuStack_40;
  ulonglong uStack_38;
  
  uStack_38 = __security_cookie.value ^ (ulonglong)auStack_268;
  *(undefined8 *)((longlong)this + 0xd8) = 0;
  MVar18 = (MemoryResource)((longlong)this + 0x10);
  *(undefined1 *)((longlong)this + 0xe0) = 4;
  uVar11 = (longlong)rltests::qs::optimized::floatValues._Mypair._Myval2._Mylast -
           (longlong)rltests::qs::optimized::floatValues._Mypair._Myval2._Myfirst >> 5;
  pJVar7 = rl4::JointGroup<float>::JointGroup<float>(&JStack_1e0,(MemoryResource *)MVar18);
  piStack_230 = (int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9d4c)
  ;
  if ((*piStack_230 <
       `public:___cdecl_pma::impl::PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>(void)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:___cdecl_pma::impl::PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>(void)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    atexit(`pma::impl::PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>::
           PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>'::__l2::
           _dynamic_atexit_destructor_for__dmr__);
    _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  MStack_248 = (MemoryResource)
               &`public:___cdecl_pma::impl::PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>(void)___ptr64'
                ::__l2::dmr;
  if (MVar18 != (MemoryResource)0x0) {
    MStack_248 = MVar18;
  }
  MVar8 = (MemoryResource)0x0;
  MVar18 = (MemoryResource)0x0;
  MStack_240 = (MemoryResource)0x0;
  MStack_238 = (MemoryResource)0x0;
  if (uVar11 != 0) {
    if (0x1e1e1e1e1e1e1e1 < uVar11) {
                    /* WARNING: Subroutine does not return */
      std::
      vector<rl4::JointGroup<float>,pma::PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>_>
      ::_Xlength();
    }
    MVar8 = (MemoryResource)
            (**(code **)((longlong)*(MemoryResource *)MStack_248 + 8))(MStack_248,uVar11 * 0x88,8);
    MStack_238 = (MemoryResource)((longlong)MVar8 + uVar11 * 0x88);
    MVar18 = MVar8;
    MStack_240 = MVar8;
    do {
      rl4::JointGroup<float>::JointGroup<float>((JointGroup<float> *)MVar18,pJVar7);
      MVar18 = (MemoryResource)((longlong)MVar18 + 0x88);
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
  }
  rl4::JointGroup<float>::~JointGroup<float>(&JStack_1e0);
  uVar11 = 0;
  lVar5 = (longlong)MVar18 - (longlong)MVar8 >> 0x3f;
  lVar17 = ((longlong)MVar18 - (longlong)MVar8) / 0x88 + lVar5;
  if (lVar17 != lVar5) {
    lVar12 = 0;
    this_00 = (_Vector_val<std::_Simple_types<unsigned_short>_> *)((longlong)MStack_240 + 0x40);
    do {
      pvVar14 = (vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *)
                (&((rltests::qs::optimized::floatValues._Mypair._Myval2._Myfirst)->_Mypair)._Myval1.
                  field_0x0 + lVar12);
      if ((vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *)
          ((longlong)(this_00 + 0xfffffffffffffffd) + 8U) != pvVar14) {
        pfVar2 = ((_Vector_val<std::_Simple_types<float>_> *)((longlong)&pvVar14->_Mypair + 8))->
                 _Myfirst;
        std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>::
        _Assign_counted_range<float_*>
                  ((vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *)
                   ((longlong)(this_00 + 0xfffffffffffffffd) + 8U),pfVar2,
                   (longlong)*(float **)((longlong)&pvVar14->_Mypair + 0x10) - (longlong)pfVar2 >> 2
                  );
      }
      pvVar15 = (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
                 *)(&((rltests::qs::optimized::inputIndices._Mypair._Myval2._Myfirst)->_Mypair).
                     _Myval1.field_0x0 + lVar12);
      if ((vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *
          )((longlong)(this_00 + 0xfffffffffffffffe) + 0x10U) != pvVar15) {
        puVar3 = ((_Vector_val<std::_Simple_types<unsigned_short>_> *)
                 ((longlong)&pvVar15->_Mypair + 8))->_Myfirst;
        std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
        ::_Assign_counted_range<unsigned_short_*>
                  ((vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
                    *)((longlong)(this_00 + 0xfffffffffffffffe) + 0x10U),puVar3,
                   (longlong)*(ushort **)((longlong)&pvVar15->_Mypair + 0x10) - (longlong)puVar3 >>
                   1);
      }
      pvVar15 = (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
                 *)(&((rltests::qs::optimized::outputIndices._Mypair._Myval2._Myfirst
                       [*(longlong *)((longlong)this + 0xd8)]._Mypair._Myval2._Myfirst)->_Mypair).
                     _Myval1.field_0x0 + lVar12);
      if (this_00 != (_Vector_val<std::_Simple_types<unsigned_short>_> *)pvVar15) {
        puVar3 = (pvVar15->_Mypair)._Myval2._Myfirst;
        std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
        ::_Assign_counted_range<unsigned_short_*>
                  ((vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
                    *)this_00,puVar3,
                   (longlong)(pvVar15->_Mypair)._Myval2._Mylast - (longlong)puVar3 >> 1);
      }
      pvVar16 = (vector<rl4::LODRegion,pma::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>_>
                 *)(&((rltests::qs::optimized::lodRegions._Mypair._Myval2._Myfirst)->_Mypair).
                     _Myval1.field_0x0 + lVar12);
      if ((vector<rl4::LODRegion,pma::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>_> *
          )((longlong)(this_00 + 1) + 8U) != pvVar16) {
        pLVar4 = ((_Vector_val<std::_Simple_types<rl4::LODRegion>_> *)
                 ((longlong)&pvVar16->_Mypair + 8))->_Myfirst;
        std::vector<rl4::LODRegion,pma::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>_>
        ::_Assign_counted_range<rl4::LODRegion_*>
                  ((vector<rl4::LODRegion,pma::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>_>
                    *)((longlong)(this_00 + 1) + 8U),pLVar4,
                   ((longlong)*(LODRegion **)((longlong)&pvVar16->_Mypair + 0x10) - (longlong)pLVar4
                   ) / 0x18);
      }
      lVar12 = lVar12 + 0x20;
      *(uint *)&((vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
                  *)((longlong)(this_00 + 2) + 0x10))->_Mypair =
           rltests::qs::optimized::subMatrices._Mypair._Myval2._Myfirst[uVar11].cols;
      pEVar1 = rltests::qs::optimized::subMatrices._Mypair._Myval2._Myfirst + uVar11;
      uVar11 = uVar11 + 1;
      *(uint *)&((vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
                  *)((longlong)(this_00 + 2) + 0x14))->_Mypair = pEVar1->rows;
      this_00 = (_Vector_val<std::_Simple_types<unsigned_short>_> *)((longlong)(this_00 + 5) + 0x10)
      ;
    } while (uVar11 < (ulonglong)(lVar17 - lVar5));
  }
  piVar6 = piStack_230;
  ppuVar10 = (undefined **)((longlong)this + 0x10);
  if ((*piStack_230 <
       `public:___cdecl_pma::impl::PolyAllocator<rl4::VectorizedJointGroupQuaternionCalculationStrategy<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::VectorizedJointGroupQuaternionCalculationStrategy<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>,8,pma::DefaultMemoryResource>(void)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<rl4::VectorizedJointGroupQuaternionCalculationStrategy<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::VectorizedJointGroupQuaternionCalculationStrategy<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:___cdecl_pma::impl::PolyAllocator<rl4::VectorizedJointGroupQuaternionCalculationStrategy<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::VectorizedJointGroupQuaternionCalculationStrategy<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>,8,pma::DefaultMemoryResource>(void)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    atexit(`pma::impl::
           PolyAllocator<rl4::VectorizedJointGroupQuaternionCalculationStrategy<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>,8,pma::DefaultMemoryResource>
           ::
           PolyAllocator<rl4::VectorizedJointGroupQuaternionCalculationStrategy<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>,8,pma::DefaultMemoryResource>'
           ::__l2::_dynamic_atexit_destructor_for__dmr__);
    _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<rl4::VectorizedJointGroupQuaternionCalculationStrategy<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::VectorizedJointGroupQuaternionCalculationStrategy<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  ppuVar13 = &`public:___cdecl_pma::impl::PolyAllocator<rl4::VectorizedJointGroupQuaternionCalculationStrategy<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::VectorizedJointGroupQuaternionCalculationStrategy<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>,8,pma::DefaultMemoryResource>(void)___ptr64'
              ::__l2::dmr;
  if (ppuVar10 != (undefined **)0x0) {
    ppuVar13 = ppuVar10;
  }
  MVar8 = (MemoryResource)(**(code **)(*ppuVar13 + 8))(ppuVar13,8,8);
  *(undefined ***)MVar8 =
       &
       ___7__VectorizedJointGroupQuaternionCalculationStrategy_MU__T256_UF128_sse_trimd___fallback_trimd__UF128_sse_3_UPassthroughAdapter_rl4___rl4__6B_
  ;
  ppuStack_b8 = &
                ___7___Func_impl_no_alloc_V<lambda_1>__1____create___V___ManagedInstance_V__unique_ptr_U__JointGroupQuaternionCalculationStrategy_M_rl4__V__function___A6AXPEAU__JointGroupQuaternionCalculationStrategy_M_rl4___Z_std___std__U__VectorizedJointGroupQuaternionCalculationStrategy_MU__T256_UF128_sse_trimd___fallback_trimd__UF128_sse_3_UPassthroughAdapter_rl4___rl4__U__JointGroupQuaternionCalculationStrategy_M_4__impl_pma__QEAA_AV__unique_ptr_U__JointGroupQuaternionCalculationStrategy_M_rl4__V__function___A6AXPEAU__JointGroupQuaternionCalculationStrategy_M_rl4___Z_std___std__XZ_XPEAU__JointGroupQuaternionCalculationStrategy_M_rl4___std__6B_
  ;
  pppuStack_80 = &ppuStack_b8;
  uStack_120 = (_Func_base<void,rl4::JointGroupQuaternionCalculationStrategy<float>_*> *)0x0;
  ppuStack_b0 = ppuVar13;
  uStack_120 = std::
               _Func_impl_no_alloc<`pma::impl::ManagedInstance<std::unique_ptr<rl4::JointGroupQuaternionCalculationStrategy<float>,std::function<void___cdecl(rl4::JointGroupQuaternionCalculationStrategy<float>_*)>_>,rl4::VectorizedJointGroupQuaternionCalculationStrategy<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>,rl4::JointGroupQuaternionCalculationStrategy<float>_>::create<>'::__l2::<lambda_1>,void,rl4::JointGroupQuaternionCalculationStrategy<float>_*>
               ::_Move(&ppuStack_b8,auStack_158);
  if (pppuStack_80 != (undefined ***)0x0) {
    (*(code *)(*pppuStack_80)[4])(pppuStack_80,pppuStack_80 != &ppuStack_b8);
  }
  MStack_118 = MVar8;
  if ((*piVar6 < `public:___cdecl_pma::impl::PolyAllocator<rl4::QuaternionJointsEvaluator<float>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::QuaternionJointsEvaluator<float>,8,pma::DefaultMemoryResource>(void)___ptr64'
                 ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<rl4::QuaternionJointsEvaluator<float>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::QuaternionJointsEvaluator<float>,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:___cdecl_pma::impl::PolyAllocator<rl4::QuaternionJointsEvaluator<float>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::QuaternionJointsEvaluator<float>,8,pma::DefaultMemoryResource>(void)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    atexit(`pma::impl::
           PolyAllocator<rl4::QuaternionJointsEvaluator<float>,8,pma::DefaultMemoryResource>::
           PolyAllocator<rl4::QuaternionJointsEvaluator<float>,8,pma::DefaultMemoryResource>'::__l2
           ::_dynamic_atexit_destructor_for__dmr__);
    _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<rl4::QuaternionJointsEvaluator<float>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::QuaternionJointsEvaluator<float>,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  ppuVar13 = &`public:___cdecl_pma::impl::PolyAllocator<rl4::QuaternionJointsEvaluator<float>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::QuaternionJointsEvaluator<float>,8,pma::DefaultMemoryResource>(void)___ptr64'
              ::__l2::dmr;
  if (ppuVar10 != (undefined **)0x0) {
    ppuVar13 = ppuVar10;
  }
  MVar9 = (MemoryResource)(**(code **)(*ppuVar13 + 8))(ppuVar13,0xb0,8);
  MVar8 = MStack_118;
  MStack_118 = (MemoryResource)0x0;
  std::function<void___cdecl(rl4::JointGroupQuaternionCalculationStrategy<float>_*)>::
  function<void___cdecl(rl4::JointGroupQuaternionCalculationStrategy<float>_*)>
            ((function<void___cdecl(rl4::JointGroupQuaternionCalculationStrategy<float>_*)> *)
             auStack_228,
             (function<void___cdecl(rl4::JointGroupQuaternionCalculationStrategy<float>_*)> *)
             auStack_158);
  MStack_1e8 = (MemoryResource)0x0;
  *(undefined ***)MVar9 = &___7__QuaternionJointsEvaluator_M_rl4__6B_;
  std::function<void___cdecl(rl4::JointGroupQuaternionCalculationStrategy<float>_*)>::
  function<void___cdecl(rl4::JointGroupQuaternionCalculationStrategy<float>_*)>
            ((function<void___cdecl(rl4::JointGroupQuaternionCalculationStrategy<float>_*)> *)
             ((longlong)MVar9 + 8),
             (function<void___cdecl(rl4::JointGroupQuaternionCalculationStrategy<float>_*)> *)
             auStack_228);
  *(MemoryResource *)((longlong)MVar9 + 0x48) = MVar8;
  *(MemoryResource *)((longlong)MVar9 + 0x50) = MStack_248;
  *(MemoryResource *)((longlong)MVar9 + 0x58) = MStack_240;
  *(MemoryResource *)((longlong)MVar9 + 0x68) = MStack_238;
  *(MemoryResource *)((longlong)MVar9 + 0x60) = MVar18;
  *(MemoryResource *)((longlong)MVar9 + 0xa8) = (MemoryResource)0x0;
  if (MStack_1e8 != (MemoryResource)0x0) {
    MStack_248 = MStack_1e8;
    if ((longlong *)auStack_228._56_8_ == (longlong *)0x0) {
      std::_Xbad_function_call();
      return;
    }
    (**(code **)(*(longlong *)auStack_228._56_8_ + 0x10))(auStack_228._56_8_,&MStack_248);
  }
  if ((longlong *)auStack_228._56_8_ != (longlong *)0x0) {
    (**(code **)(*(longlong *)auStack_228._56_8_ + 0x20))
              (auStack_228._56_8_,(undefined1 *)auStack_228._56_8_ != auStack_228);
  }
  ppuStack_78 = &
                ___7___Func_impl_no_alloc_V<lambda_1>__1____create_V__unique_ptr_U__JointGroupQuaternionCalculationStrategy_M_rl4__V__function___A6AXPEAU__JointGroupQuaternionCalculationStrategy_M_rl4___Z_std___std__V__vector_U__JointGroup_M_rl4__V__PolyAllocator_U__JointGroup_M_rl4___07VDefaultMemoryResource_pma___pma___2___TPEAVAlignedMemoryResource_pma_____ManagedInstance_V__unique_ptr_VJointsEvaluator_rl4__V__function___A6AXPEAVJointsEvaluator_rl4___Z_std___std__V__QuaternionJointsEvaluator_M_rl4__VJointsEvaluator_4__impl_pma__QEAA_AV__unique_ptr_VJointsEvaluator_rl4__V__function___A6AXPEAVJointsEvaluator_rl4___Z_std___std____QEAV__unique_ptr_U__JointGroupQuaternionCalculationStrategy_M_rl4__V__function___A6AXPEAU__JointGroupQuaternionCalculationStrategy_M_rl4___Z_std___6___QEAV__vector_U__JointGroup_M_rl4__V__PolyAllocator_U__JointGroup_M_rl4___07VDefaultMemoryResource_pma___pma___6___QEA__T__QEAPEAVAlignedMemoryResource_4__Z_XPEAVJointsEvaluator_rl4___std__6B_
  ;
  pppuStack_40 = &ppuStack_78;
  uStack_d0 = (_Func_base<void,rl4::JointsEvaluator_*> *)0x0;
  ppuStack_70 = ppuVar13;
  uStack_d0 = std::
              _Func_impl_no_alloc<`pma::impl::ManagedInstance<std::unique_ptr<rl4::JointsEvaluator,std::function<void___cdecl(rl4::JointsEvaluator_*)>_>,rl4::QuaternionJointsEvaluator<float>,rl4::JointsEvaluator>::create<std::unique_ptr<rl4::JointGroupQuaternionCalculationStrategy<float>,std::function<void___cdecl(rl4::JointGroupQuaternionCalculationStrategy<float>_*)>_>,std::vector<rl4::JointGroup<float>,pma::PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>_>,std::nullptr_t,pma::AlignedMemoryResource_*>'::__l2::<lambda_1>,void,rl4::JointsEvaluator_*>
              ::_Move(&ppuStack_78,auStack_108);
  if (pppuStack_40 != (undefined ***)0x0) {
    (*(code *)(*pppuStack_40)[4])(pppuStack_40,pppuStack_40 != &ppuStack_78);
  }
  MStack_c8 = MVar9;
  std::unique_ptr<rl4::JointsEvaluator,std::function<void___cdecl(rl4::JointsEvaluator_*)>_>::
  operator=<std::function<void___cdecl(rl4::JointsEvaluator_*)>,0>
            ((unique_ptr<rl4::JointsEvaluator,std::function<void___cdecl(rl4::JointsEvaluator_*)>_>
              *)((longlong)this + 0x90),
             (unique_ptr<rl4::JointsEvaluator,std::function<void___cdecl(rl4::JointsEvaluator_*)>_>
              *)auStack_108);
  if (MStack_c8 != (MemoryResource)0x0) {
    MStack_248 = MStack_c8;
    if (uStack_d0 == (_Func_base<void,rl4::JointsEvaluator_*> *)0x0) {
      std::_Xbad_function_call();
      return;
    }
    (**(code **)((longlong)*uStack_d0 + 0x10))(uStack_d0,&MStack_248);
  }
  if (uStack_d0 != (_Func_base<void,rl4::JointsEvaluator_*> *)0x0) {
    (**(code **)((longlong)*uStack_d0 + 0x20))
              (uStack_d0,uStack_d0 != (_Func_base<void,rl4::JointsEvaluator_*> *)auStack_108);
  }
  if (MStack_118 != (MemoryResource)0x0) {
    MStack_248 = MStack_118;
    if (uStack_120 == (_Func_base<void,rl4::JointGroupQuaternionCalculationStrategy<float>_*> *)0x0)
    {
      std::_Xbad_function_call();
      return;
    }
    (**(code **)((longlong)*uStack_120 + 0x10))(uStack_120,&MStack_248);
  }
  if (uStack_120 != (_Func_base<void,rl4::JointGroupQuaternionCalculationStrategy<float>_*> *)0x0) {
    (**(code **)((longlong)*uStack_120 + 0x20))
              (uStack_120,
               uStack_120 !=
               (_Func_base<void,rl4::JointGroupQuaternionCalculationStrategy<float>_*> *)auStack_158
              );
  }
  return;
}

// `scalar_deleting_destructor' @ 14c565400

void * __thiscall
`anonymous_namespace'::
QuaternionEvaluatorTest<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  ~QuaternionEvaluatorTest<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>_>
            (this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe8);
  }
  return this;
}

// TestBody @ 14c565440

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014c5655e1) */
/* WARNING: Removing unreachable block (ram,0x00014c5655e8) */
/* WARNING: Removing unreachable block (ram,0x00014c5655ec) */
/* WARNING: Removing unreachable block (ram,0x00014c5655f1) */

void __thiscall
QuaternionEvaluatorTest_EvaluatePerLOD_Test<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>_>
::TestBody(QuaternionEvaluatorTest_EvaluatePerLOD_Test<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>_>
           *this)

{
  undefined1 *puVar1;
  vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *pvVar2;
  double dVar3;
  unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  uVar4;
  Message *pMVar5;
  AssertHelper *this_00;
  float *pfVar6;
  char *pcVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  ushort uVar10;
  undefined1 auStackY_1d8 [32];
  AssertHelper local_198;
  longlong *local_190;
  AssertionResult local_188;
  unique_ptr<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>_>
  local_178;
  ArrayView<float> local_170;
  void *local_160 [3];
  undefined1 local_148 [96];
  longlong *local_e8;
  longlong local_d8 [7];
  longlong *local_a0;
  longlong *local_98;
  undefined1 local_88 [56];
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  puVar1 = &this->field_0x10;
  pvVar2 = rltests::qs::output::valuesPerLODPerConfig._Mypair._Myval2._Myfirst
           [*(longlong *)&this->field_0xd8]._Mypair._Myval2._Myfirst;
  rl4::CPUJointsOutputInstance::CPUJointsOutputInstance
            ((CPUJointsOutputInstance *)local_148,
             (ushort)((longlong)
                      (ulonglong)
                      (uint)(*(int *)&(pvVar2->_Mypair)._Myval2._Mylast -
                            *(int *)&(pvVar2->_Mypair)._Myval2._Myfirst) >> 2),Vector,
             this->field_0xe0,Vector,(MemoryResource *)puVar1);
  rl4::CPUJointsOutputInstance::getOutputBuffer((CPUJointsOutputInstance *)local_148,&local_170);
  uVar10 = 0;
  ControlsFactory::getInstanceFactory
            ((function<std::unique_ptr<rl4::ControlsInputInstance,std::function<void___cdecl(rl4::ControlsInputInstance_*)>_>___cdecl(av::ArrayView<rl4::ControlInitializer_const_>,pma::MemoryResource_*)>
              *)local_88,0,
             (ushort)((longlong)rltests::qs::input::values._Mypair._Myval2._Mylast -
                      (longlong)rltests::qs::input::values._Mypair._Myval2._Myfirst >> 2),0,0,0);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:___cdecl_pma::impl::PolyAllocator<rl4::ControlInitializer,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::ControlInitializer,8,pma::DefaultMemoryResource>(void)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<rl4::ControlInitializer,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::ControlInitializer,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:___cdecl_pma::impl::PolyAllocator<rl4::ControlInitializer,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::ControlInitializer,8,pma::DefaultMemoryResource>(void)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    atexit(`pma::impl::PolyAllocator<rl4::ControlInitializer,8,pma::DefaultMemoryResource>::
           PolyAllocator<rl4::ControlInitializer,8,pma::DefaultMemoryResource>'::__l2::
           _dynamic_atexit_destructor_for__dmr__);
    _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<rl4::ControlInitializer,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::ControlInitializer,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  local_188.success_ = false;
  local_188._1_7_ = 0;
  local_188.message_._Mypair._Myval2 =
       (_Compressed_pair<std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_*,1>
        )(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
  local_198.data_ = (AssertHelperData *)puVar1;
  if (local_50 == (longlong *)0x0) {
    std::_Xbad_function_call();
    return;
  }
  (**(code **)(*local_50 + 0x10))(local_50,local_d8,&local_188,&local_198);
  (**(code **)(*local_98 + 0x28))(local_98,local_160);
  memmove(local_160[0],rltests::qs::input::values._Mypair._Myval2._Myfirst,
          (longlong)rltests::qs::input::values._Mypair._Myval2._Mylast -
          (longlong)rltests::qs::input::values._Mypair._Myval2._Myfirst);
  dVar3 = __real_3f60624de0000000;
  if (rltests::qs::unoptimized::lodCount != 0) {
    do {
      uVar9 = 0;
      memset(local_170.ptr,0,local_170.sz * 4);
      (**(code **)(**(longlong **)&this->field_0xd0 + 0x20))
                (*(longlong **)&this->field_0xd0,local_98,local_148,uVar10);
      pvVar2 = rltests::qs::output::valuesPerLODPerConfig._Mypair._Myval2._Myfirst
               [*(longlong *)&this->field_0xd8]._Mypair._Myval2._Myfirst;
      pfVar6 = pvVar2[uVar10]._Mypair._Myval2._Myfirst;
      if ((longlong)pvVar2[uVar10]._Mypair._Myval2._Mylast - (longlong)pfVar6 >> 2 != 0) {
        do {
          testing::internal::DoubleNearPredFormat
                    (&local_188,"outputBuffer[i]","expected[i]","threshold",
                     (double)local_170.ptr[uVar9],(double)pfVar6[uVar9],dVar3);
          uVar4._Mypair._Myval2 = local_188.message_._Mypair._Myval2;
          if (local_188.success_ == false) {
            pMVar5 = (Message *)testing::Message::Message((Message *)&local_178);
            if (local_188.message_._Mypair._Myval2 ==
                (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
              pcVar7 = "";
            }
            else {
              pcVar7 = (char *)local_188.message_._Mypair._Myval2;
              if (0xf < *(ulong64 *)((longlong)local_188.message_._Mypair._Myval2 + 0x18)) {
                pcVar7 = *(char **)local_188.message_._Mypair._Myval2;
              }
            }
            this_00 = (AssertHelper *)
                      testing::internal::AssertHelper::AssertHelper
                                (&local_198,kFatalFailure,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\rltests\\joints\\quaternions\\TestQuaternionEvaluator.cpp"
                                 ,0xa9,pcVar7);
            testing::internal::AssertHelper::operator=(this_00,pMVar5);
            testing::internal::AssertHelper::~AssertHelper(&local_198);
            if (local_178._Mypair._Myval2 !=
                (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
              puVar8 = (undefined8 *)
                       ((longlong)*(int *)(*(longlong *)local_178._Mypair._Myval2 + 4) +
                       (longlong)local_178._Mypair._Myval2);
              (**(code **)*puVar8)(puVar8,1);
            }
            uVar4._Mypair._Myval2 = local_188.message_._Mypair._Myval2;
            if (local_188.message_._Mypair._Myval2 !=
                (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
              std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                        ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                         local_188.message_._Mypair._Myval2);
              ::operator_delete((void *)uVar4._Mypair._Myval2,0x20);
            }
            if (local_98 != (longlong *)0x0) {
              local_190 = local_98;
              if (local_a0 == (longlong *)0x0) {
                std::_Xbad_function_call();
                return;
              }
              (**(code **)(*local_a0 + 0x10))(local_a0,&local_190);
            }
            if (local_a0 == (longlong *)0x0) goto LAB_14c565735;
            (**(code **)(*local_a0 + 0x20))(local_a0,local_a0 != local_d8);
            goto LAB_14c565731;
          }
          if (local_188.message_._Mypair._Myval2 !=
              (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                       local_188.message_._Mypair._Myval2);
            ::operator_delete((void *)uVar4._Mypair._Myval2,0x20);
          }
          pfVar6 = pvVar2[uVar10]._Mypair._Myval2._Myfirst;
          uVar9 = uVar9 + 1;
        } while (uVar9 < (ulonglong)
                         ((longlong)pvVar2[uVar10]._Mypair._Myval2._Mylast - (longlong)pfVar6 >> 2))
        ;
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 < rltests::qs::unoptimized::lodCount);
  }
  if (local_98 != (longlong *)0x0) {
    local_190 = local_98;
    if (local_a0 == (longlong *)0x0) {
      std::_Xbad_function_call();
      return;
    }
    (**(code **)(*local_a0 + 0x10))(local_a0,&local_190);
  }
  if (local_a0 != (longlong *)0x0) {
    (**(code **)(*local_a0 + 0x20))(local_a0,local_a0 != local_d8);
LAB_14c565731:
    local_a0 = (longlong *)0x0;
  }
LAB_14c565735:
  if (local_50 != (longlong *)0x0) {
    (**(code **)(*local_50 + 0x20))(local_50,local_50 != (longlong *)local_88);
    local_50 = (longlong *)0x0;
  }
  if (local_e8 != (longlong *)0x0) {
    (**(code **)(*local_e8 + 0x20))(local_e8,local_e8 != (longlong *)(local_148 + 0x28));
    local_e8 = (longlong *)0x0;
  }
  if ((float *)local_148._16_8_ != (float *)0x0) {
    (**(code **)(*(longlong *)local_148._8_8_ + 0x10))
              (local_148._8_8_,local_148._16_8_,
               local_148._32_8_ - local_148._16_8_ & 0xfffffffffffffffc,0x40);
    local_148._32_8_ = (float *)0x0;
    local_148._16_8_ = (float *)0x0;
    local_148._24_8_ = (float *)0x0;
  }
  rl4::JointsOutputInstance::~JointsOutputInstance((JointsOutputInstance *)local_148);
  return;
}

// `scalar_deleting_destructor' @ 14c565930

void * __thiscall
QuaternionEvaluatorTest_EvaluatePerLOD_Test<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>_>
::_scalar_deleting_destructor_
          (QuaternionEvaluatorTest_EvaluatePerLOD_Test<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>_>
           *this,uint param_1)

{
  ::`anonymous_namespace'::
  QuaternionEvaluatorTest<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>_>
  ::
  ~QuaternionEvaluatorTest<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>_>
            (this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe8);
  }
  return this;
}

// CreateTest @ 14c565970

Test * __thiscall
testing::internal::
TestFactoryImpl<QuaternionEvaluatorTest_EvaluatePerLOD_Test<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>_>_>
::CreateTest(TestFactoryImpl<QuaternionEvaluatorTest_EvaluatePerLOD_Test<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>_>_>
             *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0xe8);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ =
         (longlong)
         &QuaternionEvaluatorTest<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>_>
          ::_vftable_;
    this_00[1]._padding_ = (longlong)&pma::AlignedMemoryResource::_vftable_;
    rltests::qs::QuaternionReader::QuaternionReader
              ((QuaternionReader *)&this_00[1].gtest_flag_saver_);
    this_00[0xc].gtest_flag_saver_._Mypair._Myval2 = (GTestFlagSaver *)0x0;
    this_00->_padding_ =
         (longlong)
         &
         ___7__QuaternionEvaluatorTest_EvaluatePerLOD_Test_V__tuple_MU__T256_UF128_sse_trimd___fallback_trimd__UF128_sse_3_UPassthroughAdapter_rl4___std____6B_
    ;
    this_00[0xd]._padding_ = 0;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c5659f0

void * __thiscall
testing::internal::
TestFactoryImpl<QuaternionEvaluatorTest_EvaluatePerLOD_Test<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>_>_>
::_scalar_deleting_destructor_
          (TestFactoryImpl<QuaternionEvaluatorTest_EvaluatePerLOD_Test<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>_>_>
           *this,uint param_1)

{
  *this = (TestFactoryImpl<QuaternionEvaluatorTest_EvaluatePerLOD_Test<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>_>_>
           )&___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// _Copy @ 14c565a30

_Func_base<void,rl4::JointGroupQuaternionCalculationStrategy<float>_*> * __thiscall
std::
_Func_impl_no_alloc<`pma::impl::ManagedInstance<std::unique_ptr<rl4::JointGroupQuaternionCalculationStrategy<float>,std::function<void___cdecl(rl4::JointGroupQuaternionCalculationStrategy<float>_*)>_>,rl4::VectorizedJointGroupQuaternionCalculationStrategy<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,rl4::JointGroupQuaternionCalculationStrategy<float>_>::create<>'::__l2::<lambda_1>,void,rl4::JointGroupQuaternionCalculationStrategy<float>_*>
::_Copy(void *this,void *param_1)

{
  *(undefined ***)param_1 =
       &
       ___7___Func_impl_no_alloc_V<lambda_1>__1____create___V___ManagedInstance_V__unique_ptr_U__JointGroupQuaternionCalculationStrategy_M_rl4__V__function___A6AXPEAU__JointGroupQuaternionCalculationStrategy_M_rl4___Z_std___std__U__VectorizedJointGroupQuaternionCalculationStrategy_MU__T256_U__T128_M_scalar_trimd___fallback_trimd__U__T128_M_scalar_3_U__QuaternionsToEulerAngles_U__ang_MUradians_impl_tdm___tdm___0A__rl4___rl4__U__JointGroupQuaternionCalculationStrategy_M_4__impl_pma__QEAA_AV__unique_ptr_U__JointGroupQuaternionCalculationStrategy_M_rl4__V__function___A6AXPEAU__JointGroupQuaternionCalculationStrategy_M_rl4___Z_std___std__XZ_XPEAU__JointGroupQuaternionCalculationStrategy_M_rl4___std__6B_
  ;
  *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1;
}

// _Move @ 14c565a50

_Func_base<void,rl4::JointGroupQuaternionCalculationStrategy<float>_*> * __thiscall
std::
_Func_impl_no_alloc<`pma::impl::ManagedInstance<std::unique_ptr<rl4::JointGroupQuaternionCalculationStrategy<float>,std::function<void___cdecl(rl4::JointGroupQuaternionCalculationStrategy<float>_*)>_>,rl4::VectorizedJointGroupQuaternionCalculationStrategy<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,rl4::JointGroupQuaternionCalculationStrategy<float>_>::create<>'::__l2::<lambda_1>,void,rl4::JointGroupQuaternionCalculationStrategy<float>_*>
::_Move(void *this,void *param_1)

{
  *(undefined ***)param_1 =
       &
       ___7___Func_impl_no_alloc_V<lambda_1>__1____create___V___ManagedInstance_V__unique_ptr_U__JointGroupQuaternionCalculationStrategy_M_rl4__V__function___A6AXPEAU__JointGroupQuaternionCalculationStrategy_M_rl4___Z_std___std__U__VectorizedJointGroupQuaternionCalculationStrategy_MU__T256_U__T128_M_scalar_trimd___fallback_trimd__U__T128_M_scalar_3_U__QuaternionsToEulerAngles_U__ang_MUradians_impl_tdm___tdm___0A__rl4___rl4__U__JointGroupQuaternionCalculationStrategy_M_4__impl_pma__QEAA_AV__unique_ptr_U__JointGroupQuaternionCalculationStrategy_M_rl4__V__function___A6AXPEAU__JointGroupQuaternionCalculationStrategy_M_rl4___Z_std___std__XZ_XPEAU__JointGroupQuaternionCalculationStrategy_M_rl4___std__6B_
  ;
  *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1;
}

// _Do_call @ 14c565a70

void __thiscall
std::
_Func_impl_no_alloc<`pma::impl::ManagedInstance<std::unique_ptr<rl4::JointGroupQuaternionCalculationStrategy<float>,std::function<void___cdecl(rl4::JointGroupQuaternionCalculationStrategy<float>_*)>_>,rl4::VectorizedJointGroupQuaternionCalculationStrategy<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,rl4::JointGroupQuaternionCalculationStrategy<float>_>::create<>'::__l2::<lambda_1>,void,rl4::JointGroupQuaternionCalculationStrategy<float>_*>
::_Do_call(void *this,JointGroupQuaternionCalculationStrategy<float> **param_1)

{
  JointGroupQuaternionCalculationStrategy<float> *pJVar1;
  
  pJVar1 = *param_1;
  (**(code **)*pJVar1)(pJVar1,0);
                    /* WARNING: Could not recover jumptable at 0x00014c565aa7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)((longlong)this + 8) + 0x10))
            (*(longlong **)((longlong)this + 8),pJVar1,8);
  return;
}

// _Target_type @ 14c565ac0

type_info * __thiscall
std::
_Func_impl_no_alloc<`pma::impl::ManagedInstance<std::unique_ptr<rl4::JointGroupQuaternionCalculationStrategy<float>,std::function<void___cdecl(rl4::JointGroupQuaternionCalculationStrategy<float>_*)>_>,rl4::VectorizedJointGroupQuaternionCalculationStrategy<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,rl4::JointGroupQuaternionCalculationStrategy<float>_>::create<>'::__l2::<lambda_1>,void,rl4::JointGroupQuaternionCalculationStrategy<float>_*>
::_Target_type(void *this)

{
  return (type_info *)
         &`public:_class_std::unique_ptr<rl4::JointGroupQuaternionCalculationStrategy<float>,std::function<void___cdecl(rl4::JointGroupQuaternionCalculationStrategy<float>*___ptr64)>_>___cdecl_pma::impl::ManagedInstance<std::unique_ptr<rl4::JointGroupQuaternionCalculationStrategy<float>,std::function<void___cdecl(rl4::JointGroupQuaternionCalculationStrategy<float>*___ptr64)>_>,rl4::VectorizedJointGroupQuaternionCalculationStrategy<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,rl4::JointGroupQuaternionCalculationStrategy<float>_>::create<>(void)___ptr64'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}

// _Get @ 14c565ad0

void * __thiscall
std::
_Func_impl_no_alloc<`pma::impl::ManagedInstance<std::unique_ptr<rl4::JointGroupQuaternionCalculationStrategy<float>,std::function<void___cdecl(rl4::JointGroupQuaternionCalculationStrategy<float>_*)>_>,rl4::VectorizedJointGroupQuaternionCalculationStrategy<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,rl4::JointGroupQuaternionCalculationStrategy<float>_>::create<>'::__l2::<lambda_1>,void,rl4::JointGroupQuaternionCalculationStrategy<float>_*>
::_Get(void *this)

{
  return (void *)((longlong)this + 8);
}

// _Delete_this @ 14c565ae0

void __thiscall
std::
_Func_impl_no_alloc<`pma::impl::ManagedInstance<std::unique_ptr<rl4::JointGroupQuaternionCalculationStrategy<float>,std::function<void___cdecl(rl4::JointGroupQuaternionCalculationStrategy<float>_*)>_>,rl4::VectorizedJointGroupQuaternionCalculationStrategy<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,rl4::JointGroupQuaternionCalculationStrategy<float>_>::create<>'::__l2::<lambda_1>,void,rl4::JointGroupQuaternionCalculationStrategy<float>_*>
::_Delete_this(void *this,bool param_1)

{
  if (param_1) {
    ::operator_delete(this,0x10);
    return;
  }
  return;
}

// _Copy @ 14c565b00

_Func_base<void,rl4::JointGroupQuaternionCalculationStrategy<float>_*> * __thiscall
std::
_Func_impl_no_alloc<`pma::impl::ManagedInstance<std::unique_ptr<rl4::JointGroupQuaternionCalculationStrategy<float>,std::function<void___cdecl(rl4::JointGroupQuaternionCalculationStrategy<float>_*)>_>,rl4::VectorizedJointGroupQuaternionCalculationStrategy<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,rl4::JointGroupQuaternionCalculationStrategy<float>_>::create<>'::__l2::<lambda_1>,void,rl4::JointGroupQuaternionCalculationStrategy<float>_*>
::_Copy(void *this,void *param_1)

{
  *(undefined ***)param_1 =
       &
       ___7___Func_impl_no_alloc_V<lambda_1>__1____create___V___ManagedInstance_V__unique_ptr_U__JointGroupQuaternionCalculationStrategy_M_rl4__V__function___A6AXPEAU__JointGroupQuaternionCalculationStrategy_M_rl4___Z_std___std__U__VectorizedJointGroupQuaternionCalculationStrategy_MU__T256_UF128_sse_trimd___fallback_trimd__UF128_sse_3_U__QuaternionsToEulerAngles_U__ang_MUradians_impl_tdm___tdm___0A__rl4___rl4__U__JointGroupQuaternionCalculationStrategy_M_4__impl_pma__QEAA_AV__unique_ptr_U__JointGroupQuaternionCalculationStrategy_M_rl4__V__function___A6AXPEAU__JointGroupQuaternionCalculationStrategy_M_rl4___Z_std___std__XZ_XPEAU__JointGroupQuaternionCalculationStrategy_M_rl4___std__6B_
  ;
  *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1;
}

// _Move @ 14c565b20

_Func_base<void,rl4::JointGroupQuaternionCalculationStrategy<float>_*> * __thiscall
std::
_Func_impl_no_alloc<`pma::impl::ManagedInstance<std::unique_ptr<rl4::JointGroupQuaternionCalculationStrategy<float>,std::function<void___cdecl(rl4::JointGroupQuaternionCalculationStrategy<float>_*)>_>,rl4::VectorizedJointGroupQuaternionCalculationStrategy<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,rl4::JointGroupQuaternionCalculationStrategy<float>_>::create<>'::__l2::<lambda_1>,void,rl4::JointGroupQuaternionCalculationStrategy<float>_*>
::_Move(void *this,void *param_1)

{
  *(undefined ***)param_1 =
       &
       ___7___Func_impl_no_alloc_V<lambda_1>__1____create___V___ManagedInstance_V__unique_ptr_U__JointGroupQuaternionCalculationStrategy_M_rl4__V__function___A6AXPEAU__JointGroupQuaternionCalculationStrategy_M_rl4___Z_std___std__U__VectorizedJointGroupQuaternionCalculationStrategy_MU__T256_UF128_sse_trimd___fallback_trimd__UF128_sse_3_U__QuaternionsToEulerAngles_U__ang_MUradians_impl_tdm___tdm___0A__rl4___rl4__U__JointGroupQuaternionCalculationStrategy_M_4__impl_pma__QEAA_AV__unique_ptr_U__JointGroupQuaternionCalculationStrategy_M_rl4__V__function___A6AXPEAU__JointGroupQuaternionCalculationStrategy_M_rl4___Z_std___std__XZ_XPEAU__JointGroupQuaternionCalculationStrategy_M_rl4___std__6B_
  ;
  *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1;
}

// _Do_call @ 14c565b40

void __thiscall
std::
_Func_impl_no_alloc<`pma::impl::ManagedInstance<std::unique_ptr<rl4::JointGroupQuaternionCalculationStrategy<float>,std::function<void___cdecl(rl4::JointGroupQuaternionCalculationStrategy<float>_*)>_>,rl4::VectorizedJointGroupQuaternionCalculationStrategy<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,rl4::JointGroupQuaternionCalculationStrategy<float>_>::create<>'::__l2::<lambda_1>,void,rl4::JointGroupQuaternionCalculationStrategy<float>_*>
::_Do_call(void *this,JointGroupQuaternionCalculationStrategy<float> **param_1)

{
  JointGroupQuaternionCalculationStrategy<float> *pJVar1;
  
  pJVar1 = *param_1;
  (**(code **)*pJVar1)(pJVar1,0);
                    /* WARNING: Could not recover jumptable at 0x00014c565b77. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)((longlong)this + 8) + 0x10))
            (*(longlong **)((longlong)this + 8),pJVar1,8);
  return;
}

// _Target_type @ 14c565b90

type_info * __thiscall
std::
_Func_impl_no_alloc<`pma::impl::ManagedInstance<std::unique_ptr<rl4::JointGroupQuaternionCalculationStrategy<float>,std::function<void___cdecl(rl4::JointGroupQuaternionCalculationStrategy<float>_*)>_>,rl4::VectorizedJointGroupQuaternionCalculationStrategy<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,rl4::JointGroupQuaternionCalculationStrategy<float>_>::create<>'::__l2::<lambda_1>,void,rl4::JointGroupQuaternionCalculationStrategy<float>_*>
::_Target_type(void *this)

{
  return (type_info *)
         &`public:_class_std::unique_ptr<rl4::JointGroupQuaternionCalculationStrategy<float>,std::function<void___cdecl(rl4::JointGroupQuaternionCalculationStrategy<float>*___ptr64)>_>___cdecl_pma::impl::ManagedInstance<std::unique_ptr<rl4::JointGroupQuaternionCalculationStrategy<float>,std::function<void___cdecl(rl4::JointGroupQuaternionCalculationStrategy<float>*___ptr64)>_>,rl4::VectorizedJointGroupQuaternionCalculationStrategy<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,rl4::JointGroupQuaternionCalculationStrategy<float>_>::create<>(void)___ptr64'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}

// _Get @ 14c565ba0

void * __thiscall
std::
_Func_impl_no_alloc<`pma::impl::ManagedInstance<std::unique_ptr<rl4::JointGroupQuaternionCalculationStrategy<float>,std::function<void___cdecl(rl4::JointGroupQuaternionCalculationStrategy<float>_*)>_>,rl4::VectorizedJointGroupQuaternionCalculationStrategy<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,rl4::JointGroupQuaternionCalculationStrategy<float>_>::create<>'::__l2::<lambda_1>,void,rl4::JointGroupQuaternionCalculationStrategy<float>_*>
::_Get(void *this)

{
  return (void *)((longlong)this + 8);
}

// _Delete_this @ 14c565bb0

void __thiscall
std::
_Func_impl_no_alloc<`pma::impl::ManagedInstance<std::unique_ptr<rl4::JointGroupQuaternionCalculationStrategy<float>,std::function<void___cdecl(rl4::JointGroupQuaternionCalculationStrategy<float>_*)>_>,rl4::VectorizedJointGroupQuaternionCalculationStrategy<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,rl4::JointGroupQuaternionCalculationStrategy<float>_>::create<>'::__l2::<lambda_1>,void,rl4::JointGroupQuaternionCalculationStrategy<float>_*>
::_Delete_this(void *this,bool param_1)

{
  if (param_1) {
    ::operator_delete(this,0x10);
    return;
  }
  return;
}

// _Copy @ 14c565bd0

_Func_base<void,rl4::JointsEvaluator_*> * __thiscall
std::
_Func_impl_no_alloc<`pma::impl::ManagedInstance<std::unique_ptr<rl4::JointsEvaluator,std::function<void___cdecl(rl4::JointsEvaluator_*)>_>,rl4::QuaternionJointsEvaluator<float>,rl4::JointsEvaluator>::create<std::unique_ptr<rl4::JointGroupQuaternionCalculationStrategy<float>,std::function<void___cdecl(rl4::JointGroupQuaternionCalculationStrategy<float>_*)>_>,std::vector<rl4::JointGroup<float>,pma::PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>_>,std::nullptr_t,pma::AlignedMemoryResource_*>'::__l2::<lambda_1>,void,rl4::JointsEvaluator_*>
::_Copy(void *this,void *param_1)

{
  *(undefined ***)param_1 =
       &
       ___7___Func_impl_no_alloc_V<lambda_1>__1____create_V__unique_ptr_U__JointGroupQuaternionCalculationStrategy_M_rl4__V__function___A6AXPEAU__JointGroupQuaternionCalculationStrategy_M_rl4___Z_std___std__V__vector_U__JointGroup_M_rl4__V__PolyAllocator_U__JointGroup_M_rl4___07VDefaultMemoryResource_pma___pma___2___TPEAVAlignedMemoryResource_pma_____ManagedInstance_V__unique_ptr_VJointsEvaluator_rl4__V__function___A6AXPEAVJointsEvaluator_rl4___Z_std___std__V__QuaternionJointsEvaluator_M_rl4__VJointsEvaluator_4__impl_pma__QEAA_AV__unique_ptr_VJointsEvaluator_rl4__V__function___A6AXPEAVJointsEvaluator_rl4___Z_std___std____QEAV__unique_ptr_U__JointGroupQuaternionCalculationStrategy_M_rl4__V__function___A6AXPEAU__JointGroupQuaternionCalculationStrategy_M_rl4___Z_std___6___QEAV__vector_U__JointGroup_M_rl4__V__PolyAllocator_U__JointGroup_M_rl4___07VDefaultMemoryResource_pma___pma___6___QEA__T__QEAPEAVAlignedMemoryResource_4__Z_XPEAVJointsEvaluator_rl4___std__6B_
  ;
  *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1;
}

// _Move @ 14c565bf0

_Func_base<void,rl4::JointsEvaluator_*> * __thiscall
std::
_Func_impl_no_alloc<`pma::impl::ManagedInstance<std::unique_ptr<rl4::JointsEvaluator,std::function<void___cdecl(rl4::JointsEvaluator_*)>_>,rl4::QuaternionJointsEvaluator<float>,rl4::JointsEvaluator>::create<std::unique_ptr<rl4::JointGroupQuaternionCalculationStrategy<float>,std::function<void___cdecl(rl4::JointGroupQuaternionCalculationStrategy<float>_*)>_>,std::vector<rl4::JointGroup<float>,pma::PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>_>,std::nullptr_t,pma::AlignedMemoryResource_*>'::__l2::<lambda_1>,void,rl4::JointsEvaluator_*>
::_Move(void *this,void *param_1)

{
  *(undefined ***)param_1 =
       &
       ___7___Func_impl_no_alloc_V<lambda_1>__1____create_V__unique_ptr_U__JointGroupQuaternionCalculationStrategy_M_rl4__V__function___A6AXPEAU__JointGroupQuaternionCalculationStrategy_M_rl4___Z_std___std__V__vector_U__JointGroup_M_rl4__V__PolyAllocator_U__JointGroup_M_rl4___07VDefaultMemoryResource_pma___pma___2___TPEAVAlignedMemoryResource_pma_____ManagedInstance_V__unique_ptr_VJointsEvaluator_rl4__V__function___A6AXPEAVJointsEvaluator_rl4___Z_std___std__V__QuaternionJointsEvaluator_M_rl4__VJointsEvaluator_4__impl_pma__QEAA_AV__unique_ptr_VJointsEvaluator_rl4__V__function___A6AXPEAVJointsEvaluator_rl4___Z_std___std____QEAV__unique_ptr_U__JointGroupQuaternionCalculationStrategy_M_rl4__V__function___A6AXPEAU__JointGroupQuaternionCalculationStrategy_M_rl4___Z_std___6___QEAV__vector_U__JointGroup_M_rl4__V__PolyAllocator_U__JointGroup_M_rl4___07VDefaultMemoryResource_pma___pma___6___QEA__T__QEAPEAVAlignedMemoryResource_4__Z_XPEAVJointsEvaluator_rl4___std__6B_
  ;
  *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1;
}

// _Do_call @ 14c565c10

void __thiscall
std::
_Func_impl_no_alloc<`pma::impl::ManagedInstance<std::unique_ptr<rl4::JointsEvaluator,std::function<void___cdecl(rl4::JointsEvaluator_*)>_>,rl4::QuaternionJointsEvaluator<float>,rl4::JointsEvaluator>::create<std::unique_ptr<rl4::JointGroupQuaternionCalculationStrategy<float>,std::function<void___cdecl(rl4::JointGroupQuaternionCalculationStrategy<float>_*)>_>,std::vector<rl4::JointGroup<float>,pma::PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>_>,std::nullptr_t,pma::AlignedMemoryResource_*>'::__l2::<lambda_1>,void,rl4::JointsEvaluator_*>
::_Do_call(void *this,JointsEvaluator **param_1)

{
  JointsEvaluator *pJVar1;
  
  pJVar1 = *param_1;
  (**(code **)*pJVar1)(pJVar1,0);
                    /* WARNING: Could not recover jumptable at 0x00014c565c4a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)((longlong)this + 8) + 0x10))
            (*(longlong **)((longlong)this + 8),pJVar1,0xb0,8);
  return;
}

// _Target_type @ 14c565c60

type_info * __thiscall
std::
_Func_impl_no_alloc<`pma::impl::ManagedInstance<std::unique_ptr<rl4::JointsEvaluator,std::function<void___cdecl(rl4::JointsEvaluator_*)>_>,rl4::QuaternionJointsEvaluator<float>,rl4::JointsEvaluator>::create<std::unique_ptr<rl4::JointGroupQuaternionCalculationStrategy<float>,std::function<void___cdecl(rl4::JointGroupQuaternionCalculationStrategy<float>_*)>_>,std::vector<rl4::JointGroup<float>,pma::PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>_>,std::nullptr_t,pma::AlignedMemoryResource_*>'::__l2::<lambda_1>,void,rl4::JointsEvaluator_*>
::_Target_type(void *this)

{
  return (type_info *)
         &`public:_class_std::unique_ptr<rl4::JointsEvaluator,std::function<void___cdecl(rl4::JointsEvaluator*___ptr64)>_>___cdecl_pma::impl::ManagedInstance<std::unique_ptr<rl4::JointsEvaluator,std::function<void___cdecl(rl4::JointsEvaluator*___ptr64)>_>,rl4::QuaternionJointsEvaluator<float>,rl4::JointsEvaluator>::create<std::unique_ptr<rl4::JointGroupQuaternionCalculationStrategy<float>,std::function<void___cdecl(rl4::JointGroupQuaternionCalculationStrategy<float>*___ptr64)>_>,std::vector<rl4::JointGroup<float>,pma::PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>_>,std::nullptr_t,pma::AlignedMemoryResource*___ptr64>(std::unique_ptr<rl4::JointGroupQuaternionCalculationStrategy<float>,std::function<void___cdecl(rl4::JointGroupQuaternionCalculationStrategy<float>*___ptr64)>_>&&___ptr64,std::vector<rl4::JointGroup<float>,pma::PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>_>&&___ptr64,std::nullptr_t&&___ptr64,pma::AlignedMemoryResource*___ptr64&&___ptr64)___ptr64'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}

// _Get @ 14c565c70

void * __thiscall
std::
_Func_impl_no_alloc<`pma::impl::ManagedInstance<std::unique_ptr<rl4::JointsEvaluator,std::function<void___cdecl(rl4::JointsEvaluator_*)>_>,rl4::QuaternionJointsEvaluator<float>,rl4::JointsEvaluator>::create<std::unique_ptr<rl4::JointGroupQuaternionCalculationStrategy<float>,std::function<void___cdecl(rl4::JointGroupQuaternionCalculationStrategy<float>_*)>_>,std::vector<rl4::JointGroup<float>,pma::PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>_>,std::nullptr_t,pma::AlignedMemoryResource_*>'::__l2::<lambda_1>,void,rl4::JointsEvaluator_*>
::_Get(void *this)

{
  return (void *)((longlong)this + 8);
}

// _Delete_this @ 14c565c80

void __thiscall
std::
_Func_impl_no_alloc<`pma::impl::ManagedInstance<std::unique_ptr<rl4::JointsEvaluator,std::function<void___cdecl(rl4::JointsEvaluator_*)>_>,rl4::QuaternionJointsEvaluator<float>,rl4::JointsEvaluator>::create<std::unique_ptr<rl4::JointGroupQuaternionCalculationStrategy<float>,std::function<void___cdecl(rl4::JointGroupQuaternionCalculationStrategy<float>_*)>_>,std::vector<rl4::JointGroup<float>,pma::PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>_>,std::nullptr_t,pma::AlignedMemoryResource_*>'::__l2::<lambda_1>,void,rl4::JointsEvaluator_*>
::_Delete_this(void *this,bool param_1)

{
  if (param_1) {
    ::operator_delete(this,0x10);
    return;
  }
  return;
}

// calculate @ 14c565ca0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
rl4::
VectorizedJointGroupQuaternionCalculationStrategy<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>
::calculate(VectorizedJointGroupQuaternionCalculationStrategy<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>
            *this,JointGroup<float> *param_1,ArrayView<float_const_> *param_2,
           ArrayView<float> *param_3,ushort param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ushort *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  T256<trimd::scalar::T128<float>_> *pTVar30;
  T256<trimd::scalar::T128<float>_> *pTVar31;
  float *pfVar32;
  uint uVar33;
  float *pfVar34;
  longlong lVar35;
  uint uVar36;
  float *pfVar37;
  ulonglong uVar38;
  float *pfVar39;
  uint uVar40;
  LODRegion *pLVar41;
  longlong lVar42;
  ulonglong uVar43;
  uint uVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  undefined1 auStack_1378 [32];
  float local_1358;
  undefined8 local_1350;
  float local_1348;
  float local_1344;
  float local_1340;
  vec<3,tdm::ang<float,tdm::impl::radians>_> local_1338;
  float local_1328;
  float local_1324;
  float local_1320;
  float local_131c;
  float local_1318;
  float local_1314;
  float local_1310;
  float local_130c;
  float local_1308;
  float local_1304;
  float local_1300;
  float local_12fc;
  float local_12f8;
  float local_12f4;
  float local_12f0;
  float local_12ec;
  float local_12e8;
  float local_12e4;
  float local_12e0;
  float local_12dc;
  float local_12d8;
  float local_12d4;
  float local_12d0;
  float local_12cc;
  float local_12c8;
  float local_12c4;
  float local_12c0;
  T256<trimd::scalar::T128<float>_> local_12b8;
  T256<trimd::scalar::T128<float>_> local_1298;
  T256<trimd::scalar::T128<float>_> local_1278;
  T256<trimd::scalar::T128<float>_> local_1258;
  float *local_1238;
  float *local_1230;
  float *local_1228;
  LODRegion *local_1220;
  longlong local_1218;
  longlong local_1210;
  undefined8 local_1208;
  float fStack_1200;
  float fStack_11fc;
  undefined8 local_11f8;
  float fStack_11f0;
  float fStack_11ec;
  undefined8 local_11e8;
  undefined8 uStack_11e0;
  ArrayView<float> *local_11d8;
  undefined8 local_11d0;
  undefined8 uStack_11c8;
  undefined8 local_11c0;
  undefined8 uStack_11b8;
  undefined8 local_11b0;
  undefined8 uStack_11a8;
  quat<float> local_11a0;
  T256<trimd::scalar::T128<float>_> local_1190;
  undefined8 local_1170;
  float fStack_1168;
  float fStack_1164;
  undefined4 local_1160;
  undefined4 local_115c;
  undefined4 local_1158;
  undefined4 local_1154;
  ArrayView<float_const_> *local_1150;
  ushort *local_1148;
  undefined4 local_1140;
  float local_1138;
  float fStack_1134;
  float fStack_1130;
  float fStack_112c;
  float local_1128;
  float fStack_1124;
  float fStack_1120;
  float fStack_111c;
  T256<trimd::scalar::T128<float>_> local_1118;
  T256<trimd::scalar::T128<float>_> local_10f8;
  T256<trimd::scalar::T128<float>_> local_10d8;
  float local_10b8;
  float fStack_10b4;
  float fStack_10b0;
  float fStack_10ac;
  float local_10a8;
  float fStack_10a4;
  float fStack_10a0;
  float fStack_109c;
  float local_1098;
  float fStack_1094;
  float fStack_1090;
  float fStack_108c;
  float local_1088;
  float fStack_1084;
  float fStack_1080;
  float fStack_107c;
  undefined4 local_1078;
  undefined4 local_1074;
  float local_1070;
  float fStack_106c;
  float fStack_1068;
  float fStack_1064;
  float local_1060;
  float fStack_105c;
  float fStack_1058;
  float fStack_1054;
  float local_1050;
  float fStack_104c;
  float fStack_1048;
  float fStack_1044;
  float local_1040;
  float fStack_103c;
  float fStack_1038;
  float fStack_1034;
  float local_1030;
  float fStack_102c;
  float fStack_1028;
  float fStack_1024;
  float local_1020;
  float fStack_101c;
  float fStack_1018;
  float fStack_1014;
  float local_1010;
  float fStack_100c;
  float fStack_1008;
  float fStack_1004;
  float local_1000;
  float fStack_ffc;
  float fStack_ff8;
  float fStack_ff4;
  float local_ff0;
  float fStack_fec;
  float fStack_fe8;
  float fStack_fe4;
  float local_fe0;
  float fStack_fdc;
  float fStack_fd8;
  float fStack_fd4;
  T256<trimd::scalar::T128<float>_> local_fd0;
  float *local_fb0;
  float local_fa8;
  float fStack_fa4;
  float fStack_fa0;
  float fStack_f9c;
  vec<3,tdm::ang<float,tdm::impl::radians>_> local_f98;
  vec<3,tdm::ang<float,tdm::impl::radians>_> local_f88;
  T256<trimd::scalar::T128<float>_> local_f78;
  longlong local_f58;
  T256<trimd::scalar::T128<float>_> local_ee0;
  T256<trimd::scalar::T128<float>_> local_ec0;
  T256<trimd::scalar::T128<float>_> local_ea0;
  T256<trimd::scalar::T128<float>_> local_e80;
  T256<trimd::scalar::T128<float>_> local_e60;
  T256<trimd::scalar::T128<float>_> local_e40;
  T256<trimd::scalar::T128<float>_> local_e20;
  T256<trimd::scalar::T128<float>_> local_e00;
  T256<trimd::scalar::T128<float>_> local_de0;
  T256<trimd::scalar::T128<float>_> local_dc0;
  T256<trimd::scalar::T128<float>_> local_da0;
  T256<trimd::scalar::T128<float>_> local_d80;
  undefined8 local_d58;
  undefined8 uStack_d50;
  undefined8 local_d48;
  undefined8 uStack_d40;
  float local_d38 [4];
  undefined8 local_d28;
  undefined8 uStack_d20;
  float local_d18 [4];
  float local_d08 [2];
  float afStack_d00 [2];
  float local_cf8 [4];
  float local_ce8 [2];
  float afStack_ce0 [2];
  float local_cd8 [4];
  float local_cc8;
  float fStack_cc4;
  float fStack_cc0;
  float fStack_cbc;
  float local_cb8 [4];
  float local_ca8;
  float fStack_ca4;
  float fStack_ca0;
  float fStack_c9c;
  T256<trimd::scalar::T128<float>_> local_b58;
  T256<trimd::scalar::T128<float>_> local_b38;
  T256<trimd::scalar::T128<float>_> local_b18 [8];
  T256<trimd::scalar::T128<float>_> local_a18;
  T256<trimd::scalar::T128<float>_> local_9f8;
  T256<trimd::scalar::T128<float>_> local_9d8;
  T256<trimd::scalar::T128<float>_> local_9b8;
  T256<trimd::scalar::T128<float>_> local_998;
  T256<trimd::scalar::T128<float>_> local_978;
  T256<trimd::scalar::T128<float>_> local_958;
  T256<trimd::scalar::T128<float>_> local_938;
  T256<trimd::scalar::T128<float>_> local_918;
  T256<trimd::scalar::T128<float>_> local_8f8;
  T256<trimd::scalar::T128<float>_> local_8d8;
  T256<trimd::scalar::T128<float>_> local_8b8;
  T256<trimd::scalar::T128<float>_> local_898;
  T256<trimd::scalar::T128<float>_> local_878;
  T256<trimd::scalar::T128<float>_> local_858;
  T256<trimd::scalar::T128<float>_> local_838;
  T256<trimd::scalar::T128<float>_> local_818;
  T256<trimd::scalar::T128<float>_> local_7f8;
  T256<trimd::scalar::T128<float>_> local_7d8;
  T256<trimd::scalar::T128<float>_> local_7b8;
  float *local_798;
  float afStack_790 [6];
  T256<trimd::scalar::T128<float>_> local_778;
  float *local_758;
  float afStack_750 [2];
  T128<float> local_748;
  T128<float> local_738;
  T128<float> local_728;
  T128<float> local_718;
  T128<float> local_708;
  T128<float> local_6f8;
  T128<float> local_6e8;
  T128<float> local_6d8;
  T128<float> local_6c8;
  quat<float> local_6b8;
  T128<float> local_6a8;
  T128<float> local_698;
  T128<float> local_688;
  T128<float> local_678;
  T128<float> local_668;
  float *local_658;
  float afStack_650 [2];
  T128<float> local_648;
  float *local_638;
  float afStack_630 [2];
  T128<float> local_628;
  quat<float> local_618;
  T128<float> local_608;
  quat<float> local_5f8;
  T128<float> local_5e8;
  T128<float> local_5d8;
  T128<float> local_5c8;
  T128<float> local_5b8;
  T128<float> local_5a8;
  T128<float> local_598;
  T128<float> local_588;
  T128<float> local_578;
  T128<float> local_568;
  T128<float> local_558;
  T128<float> local_548;
  T128<float> local_538;
  T128<float> local_528;
  T128<float> local_518;
  T128<float> local_508;
  T128<float> local_4f8;
  T128<float> local_4e8;
  T128<float> local_4d8;
  T128<float> local_4c8;
  T128<float> local_4b8;
  T128<float> local_4a8;
  T128<float> local_498;
  T128<float> local_488;
  T128<float> local_478;
  T128<float> local_468;
  T256<trimd::scalar::T128<float>_> local_458;
  T256<trimd::scalar::T128<float>_> local_438;
  T256<trimd::scalar::T128<float>_> local_418;
  T256<trimd::scalar::T128<float>_> local_3f8;
  T256<trimd::scalar::T128<float>_> local_3d8;
  T256<trimd::scalar::T128<float>_> local_3b8;
  T256<trimd::scalar::T128<float>_> local_398;
  T256<trimd::scalar::T128<float>_> local_378;
  T256<trimd::scalar::T128<float>_> local_358;
  T256<trimd::scalar::T128<float>_> local_338;
  T256<trimd::scalar::T128<float>_> local_318;
  T256<trimd::scalar::T128<float>_> local_2f8;
  T256<trimd::scalar::T128<float>_> local_2d8;
  T256<trimd::scalar::T128<float>_> local_2b8;
  T256<trimd::scalar::T128<float>_> local_298;
  T256<trimd::scalar::T128<float>_> local_278;
  T256<trimd::scalar::T128<float>_> local_258;
  T256<trimd::scalar::T128<float>_> local_238;
  T256<trimd::scalar::T128<float>_> local_218;
  T256<trimd::scalar::T128<float>_> local_1f8;
  T256<trimd::scalar::T128<float>_> local_1d8;
  T256<trimd::scalar::T128<float>_> local_1b8;
  T256<trimd::scalar::T128<float>_> local_198;
  T256<trimd::scalar::T128<float>_> local_178;
  T256<trimd::scalar::T128<float>_> local_158;
  T256<trimd::scalar::T128<float>_> local_138;
  T256<trimd::scalar::T128<float>_> local_118;
  T256<trimd::scalar::T128<float>_> local_f8;
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStack_1378;
  pfVar32 = (float *)(param_1->outputIndices)._Mypair._Myval2._Myfirst;
  local_1228 = (param_1->values)._Mypair._Myval2._Myfirst;
  uVar38 = (ulonglong)param_4;
  local_1220 = (param_1->lods)._Mypair._Myval2._Myfirst;
  local_1218 = uVar38 * 3;
  local_1148 = (param_1->inputIndices)._Mypair._Myval2._Myfirst;
  uVar43 = (ulonglong)local_1220[uVar38].inputLODs.size;
  local_f58 = (ulonglong)param_1->colCount << 4;
  lVar42 = (ulonglong)param_1->colCount << 7;
  local_fb0 = (float *)((longlong)pfVar32 + (ulonglong)local_1220[uVar38].outputLODs.size * 2);
  local_1230 = (float *)((longlong)pfVar32 +
                        (ulonglong)local_1220[uVar38].outputLODs.sizePaddedToLastFullBlock * 2);
  local_1238 = (float *)((longlong)pfVar32 +
                        (ulonglong)local_1220[uVar38].outputLODs.sizePaddedToSecondLastFullBlock * 2
                        );
  local_1210 = lVar42;
  local_11d8 = param_3;
  local_1150 = param_2;
  if (pfVar32 < local_1238) {
    pfVar34 = local_1228 + 0xe;
    local_1170 = pfVar32;
    do {
      puVar9 = local_1148;
      pfVar37 = param_2->ptr;
      uVar38 = 0;
      fVar64 = 0.0;
      fVar65 = 0.0;
      fVar66 = 0.0;
      fVar67 = 0.0;
      fVar68 = 0.0;
      fVar69 = 0.0;
      fVar70 = 0.0;
      fVar71 = 0.0;
      fVar45 = 0.0;
      fVar46 = 0.0;
      fVar47 = 0.0;
      fVar48 = 0.0;
      fVar49 = 0.0;
      fVar50 = 0.0;
      fVar51 = 0.0;
      fVar52 = 0.0;
      fVar55 = 0.0;
      fVar56 = 0.0;
      local_7d8.data1.data._Elems[0] = 0.0;
      local_7d8.data1.data._Elems[1] = 0.0;
      local_7d8.data1.data._Elems[2] = 0.0;
      local_7d8.data1.data._Elems[3] = 0.0;
      local_7d8.data2.data._Elems[0] = 0.0;
      local_7d8.data2.data._Elems[1] = 0.0;
      local_7d8.data2.data._Elems[2] = 0.0;
      local_7d8.data2.data._Elems[3] = 0.0;
      local_7b8.data1.data._Elems[0] = 0.0;
      local_7b8.data1.data._Elems[1] = 0.0;
      local_7b8.data1.data._Elems[2] = 0.0;
      local_7b8.data1.data._Elems[3] = 0.0;
      local_7b8.data2.data._Elems[0] = 0.0;
      local_7b8.data2.data._Elems[1] = 0.0;
      local_7b8.data2.data._Elems[2] = 0.0;
      local_7b8.data2.data._Elems[3] = 0.0;
      local_798 = (float *)0x0;
      afStack_790[0] = 0.0;
      afStack_790[1] = 0.0;
      afStack_790[2] = 0.0;
      afStack_790[3] = 0.0;
      afStack_790[4] = 0.0;
      afStack_790[5] = 0.0;
      local_7f8.data1.data._Elems[0] = ___xmm_3f8000003f8000003f8000003f800000;
      local_7f8.data1.data._Elems[1] = _UNK_15076b1f4;
      local_7f8.data1.data._Elems[2] = _UNK_15076b1f8;
      local_7f8.data1.data._Elems[3] = _UNK_15076b1fc;
      local_7f8.data2.data._Elems[0] = ___xmm_3f8000003f8000003f8000003f800000;
      local_7f8.data2.data._Elems[1] = _UNK_15076b1f4;
      local_7f8.data2.data._Elems[2] = _UNK_15076b1f8;
      local_7f8.data2.data._Elems[3] = _UNK_15076b1fc;
      fVar53 = 0.0;
      fVar54 = 0.0;
      fVar57 = _UNK_15076b1f4;
      fVar58 = _UNK_15076b1f8;
      fVar59 = _UNK_15076b1fc;
      fVar60 = ___xmm_3f8000003f8000003f8000003f800000;
      fVar61 = _UNK_15076b1f4;
      fVar62 = _UNK_15076b1f8;
      fVar63 = _UNK_15076b1fc;
      local_11f8 = pfVar34;
      if (uVar43 != 0) {
        do {
          local_1118.data1.data._Elems._0_8_ = *(undefined8 *)(pfVar34 + -0xe);
          local_1118.data1.data._Elems._8_8_ = *(undefined8 *)(pfVar34 + -0xc);
          local_1118.data2.data._Elems._0_8_ = *(undefined8 *)(pfVar34 + -10);
          local_1118.data2.data._Elems._8_8_ = *(undefined8 *)(pfVar34 + -8);
          local_10d8.data1.data._Elems._0_8_ = *(undefined8 *)(pfVar34 + -6);
          local_10d8.data1.data._Elems._8_8_ = *(undefined8 *)(pfVar34 + -4);
          local_10d8.data2.data._Elems._0_8_ = *(undefined8 *)(pfVar34 + -2);
          local_10d8.data2.data._Elems._8_8_ = *(undefined8 *)pfVar34;
          local_10f8.data1.data._Elems._0_8_ = *(undefined8 *)(pfVar34 + 2);
          local_10f8.data1.data._Elems._8_8_ = *(undefined8 *)(pfVar34 + 4);
          local_10f8.data2.data._Elems._0_8_ = *(undefined8 *)(pfVar34 + 6);
          local_10f8.data2.data._Elems._8_8_ = *(undefined8 *)(pfVar34 + 8);
          local_1190.data1.data._Elems._0_8_ = *(undefined8 *)(pfVar34 + 10);
          local_1190.data1.data._Elems._8_8_ = *(undefined8 *)(pfVar34 + 0xc);
          local_1190.data2.data._Elems._0_8_ = *(undefined8 *)(pfVar34 + 0xe);
          local_1190.data2.data._Elems._8_8_ = *(undefined8 *)(pfVar34 + 0x10);
          local_fd0.data1.data._Elems[0] = pfVar37[puVar9[uVar38]];
          local_e00.data1.data._Elems[0] = ___xmm_bf800000bf800000bf800000bf800000;
          local_e00.data1.data._Elems[1] = _UNK_15076c664;
          local_e00.data1.data._Elems[2] = _UNK_15076c668;
          local_e00.data1.data._Elems[3] = _UNK_15076c66c;
          local_e00.data2.data._Elems[0] = ___xmm_bf800000bf800000bf800000bf800000;
          local_e00.data2.data._Elems[1] = _UNK_15076c664;
          local_e00.data2.data._Elems[2] = _UNK_15076c668;
          local_e00.data2.data._Elems[3] = _UNK_15076c66c;
          local_ec0.data1.data._Elems[0] = ___xmm_3f8000003f8000003f8000003f800000;
          local_ec0.data1.data._Elems[1] = _UNK_15076b1f4;
          local_ec0.data1.data._Elems[2] = _UNK_15076b1f8;
          local_ec0.data1.data._Elems[3] = _UNK_15076b1fc;
          local_ec0.data2.data._Elems[0] = ___xmm_3f8000003f8000003f8000003f800000;
          local_ec0.data2.data._Elems[1] = _UNK_15076b1f4;
          local_ec0.data2.data._Elems[2] = _UNK_15076b1f8;
          local_ec0.data2.data._Elems[3] = _UNK_15076b1fc;
          local_fd0.data1.data._Elems[1] = local_fd0.data1.data._Elems[0];
          local_fd0.data1.data._Elems[2] = local_fd0.data1.data._Elems[0];
          local_fd0.data1.data._Elems[3] = local_fd0.data1.data._Elems[0];
          local_fd0.data2.data._Elems[0] = local_fd0.data1.data._Elems[0];
          local_fd0.data2.data._Elems[1] = local_fd0.data1.data._Elems[0];
          local_fd0.data2.data._Elems[2] = local_fd0.data1.data._Elems[0];
          local_fd0.data2.data._Elems[3] = local_fd0.data1.data._Elems[0];
          trimd::fallback::operator-<trimd::scalar::T128<float>_>(&local_b38,&local_ec0,&local_fd0);
          local_d80.data1.data._Elems[0] = 0.0;
          local_d80.data1.data._Elems[1] = 0.0;
          local_d80.data1.data._Elems[2] = 0.0;
          local_d80.data1.data._Elems[3] = 0.0;
          local_d80.data2.data._Elems[0] = 0.0;
          local_d80.data2.data._Elems[1] = 0.0;
          local_d80.data2.data._Elems[2] = 0.0;
          local_d80.data2.data._Elems[3] = 0.0;
          trimd::fallback::operator>=<trimd::scalar::T128<float>_>
                    (&local_ee0,&local_1190,&local_d80);
          pTVar30 = trimd::fallback::operator&<trimd::scalar::T128<float>_>
                              (&local_9d8,&local_ec0,&local_ee0);
          pTVar31 = trimd::fallback::andnot<trimd::scalar::T128<float>_>
                              (&local_9b8,&local_ee0,&local_e00);
          trimd::fallback::operator|<trimd::scalar::T128<float>_>(local_b18,pTVar31,pTVar30);
          trimd::fallback::operator*<trimd::scalar::T128<float>_>(&local_b58,local_b18,&local_b38);
          pTVar30 = trimd::fallback::operator*<trimd::scalar::T128<float>_>
                              (&local_998,&local_1118,&local_fd0);
          local_1118.data1.data._Elems._0_8_ = *(undefined8 *)(pTVar30->data1).data._Elems;
          local_1118.data1.data._Elems._8_8_ = *(undefined8 *)((pTVar30->data1).data._Elems + 2);
          local_1118.data2.data._Elems._0_8_ = *(undefined8 *)(pTVar30->data2).data._Elems;
          local_1118.data2.data._Elems._8_8_ = *(undefined8 *)((pTVar30->data2).data._Elems + 2);
          pTVar30 = trimd::fallback::operator*<trimd::scalar::T128<float>_>
                              (&local_978,&local_10d8,&local_fd0);
          local_10d8.data1.data._Elems._0_8_ = *(undefined8 *)(pTVar30->data1).data._Elems;
          local_10d8.data1.data._Elems._8_8_ = *(undefined8 *)((pTVar30->data1).data._Elems + 2);
          local_10d8.data2.data._Elems._0_8_ = *(undefined8 *)(pTVar30->data2).data._Elems;
          local_10d8.data2.data._Elems._8_8_ = *(undefined8 *)((pTVar30->data2).data._Elems + 2);
          pTVar30 = trimd::fallback::operator*<trimd::scalar::T128<float>_>
                              (&local_9f8,&local_10f8,&local_fd0);
          local_10f8.data1.data._Elems._0_8_ = *(undefined8 *)(pTVar30->data1).data._Elems;
          local_10f8.data1.data._Elems._8_8_ = *(undefined8 *)((pTVar30->data1).data._Elems + 2);
          local_10f8.data2.data._Elems._0_8_ = *(undefined8 *)(pTVar30->data2).data._Elems;
          local_10f8.data2.data._Elems._8_8_ = *(undefined8 *)((pTVar30->data2).data._Elems + 2);
          pTVar30 = trimd::fallback::operator*<trimd::scalar::T128<float>_>
                              (&local_958,&local_1190,&local_fd0);
          pTVar30 = trimd::fallback::operator+<trimd::scalar::T128<float>_>
                              (&local_938,pTVar30,&local_b58);
          local_1190.data1.data._Elems._0_8_ = *(undefined8 *)(pTVar30->data1).data._Elems;
          local_1190.data1.data._Elems._8_8_ = *(undefined8 *)((pTVar30->data1).data._Elems + 2);
          local_1190.data2.data._Elems._0_8_ = *(undefined8 *)(pTVar30->data2).data._Elems;
          local_1190.data2.data._Elems._8_8_ = *(undefined8 *)((pTVar30->data2).data._Elems + 2);
          trimd::fallback::operator*<trimd::scalar::T128<float>_>
                    (&local_e20,&local_1118,&local_1118);
          trimd::fallback::operator*<trimd::scalar::T128<float>_>
                    (&local_ea0,&local_10d8,&local_10d8);
          trimd::fallback::operator*<trimd::scalar::T128<float>_>
                    (&local_e40,&local_10f8,&local_10f8);
          trimd::fallback::operator*<trimd::scalar::T128<float>_>
                    (&local_e60,&local_1190,&local_1190);
          pTVar30 = trimd::fallback::operator+<trimd::scalar::T128<float>_>
                              (&local_918,&local_e20,&local_ea0);
          pTVar30 = trimd::fallback::operator+<trimd::scalar::T128<float>_>
                              (&local_8f8,pTVar30,&local_e40);
          trimd::fallback::operator+<trimd::scalar::T128<float>_>(&local_e80,pTVar30,&local_e60);
          trimd::fallback::rsqrt<trimd::scalar::T128<float>_>(&local_778,&local_e80);
          trimd::fallback::T256<trimd::scalar::T128<float>_>::operator*=(&local_1118,&local_778);
          trimd::fallback::T256<trimd::scalar::T128<float>_>::operator*=(&local_10d8,&local_778);
          trimd::fallback::T256<trimd::scalar::T128<float>_>::operator*=(&local_10f8,&local_778);
          trimd::fallback::T256<trimd::scalar::T128<float>_>::operator*=(&local_1190,&local_778);
          uVar17 = local_10f8.data2.data._Elems._8_8_;
          uVar16 = local_10f8.data2.data._Elems._0_8_;
          uVar15 = local_10f8.data1.data._Elems._8_8_;
          uVar14 = local_10f8.data1.data._Elems._0_8_;
          local_458.data1.data._Elems[0] = local_10f8.data1.data._Elems[0];
          local_458.data1.data._Elems[1] = local_10f8.data1.data._Elems[1];
          local_458.data1.data._Elems[2] = local_10f8.data1.data._Elems[2];
          local_458.data1.data._Elems[3] = local_10f8.data1.data._Elems[3];
          local_458.data2.data._Elems[0] = local_10f8.data2.data._Elems[0];
          local_458.data2.data._Elems[1] = local_10f8.data2.data._Elems[1];
          local_458.data2.data._Elems[2] = local_10f8.data2.data._Elems[2];
          local_458.data2.data._Elems[3] = local_10f8.data2.data._Elems[3];
          pTVar30 = trimd::fallback::T256<trimd::scalar::T128<float>_>::operator*=
                              (&local_458,&local_7b8);
          uVar21 = local_10d8.data2.data._Elems._8_8_;
          uVar20 = local_10d8.data2.data._Elems._0_8_;
          uVar19 = local_10d8.data1.data._Elems._8_8_;
          uVar18 = local_10d8.data1.data._Elems._0_8_;
          local_5b8.data._Elems._0_8_ = *(undefined8 *)(pTVar30->data1).data._Elems;
          local_5b8.data._Elems._8_8_ = *(undefined8 *)((pTVar30->data1).data._Elems + 2);
          local_5a8.data._Elems._0_8_ = *(undefined8 *)(pTVar30->data2).data._Elems;
          local_5a8.data._Elems._8_8_ = *(undefined8 *)((pTVar30->data2).data._Elems + 2);
          local_438.data1.data._Elems[0] = local_10d8.data1.data._Elems[0];
          local_438.data1.data._Elems[1] = local_10d8.data1.data._Elems[1];
          local_438.data1.data._Elems[2] = local_10d8.data1.data._Elems[2];
          local_438.data1.data._Elems[3] = local_10d8.data1.data._Elems[3];
          local_438.data2.data._Elems[0] = local_10d8.data2.data._Elems[0];
          local_438.data2.data._Elems[1] = local_10d8.data2.data._Elems[1];
          local_438.data2.data._Elems[2] = local_10d8.data2.data._Elems[2];
          local_438.data2.data._Elems[3] = local_10d8.data2.data._Elems[3];
          pTVar30 = trimd::fallback::T256<trimd::scalar::T128<float>_>::operator*=
                              (&local_438,(T256<trimd::scalar::T128<float>_> *)&local_798);
          uVar13 = local_1118.data2.data._Elems._8_8_;
          uVar12 = local_1118.data2.data._Elems._0_8_;
          uVar11 = local_1118.data1.data._Elems._8_8_;
          uVar10 = local_1118.data1.data._Elems._0_8_;
          local_478.data._Elems._0_8_ = *(undefined8 *)(pTVar30->data1).data._Elems;
          local_478.data._Elems._8_8_ = *(undefined8 *)((pTVar30->data1).data._Elems + 2);
          local_468.data._Elems._0_8_ = *(undefined8 *)(pTVar30->data2).data._Elems;
          local_468.data._Elems._8_8_ = *(undefined8 *)((pTVar30->data2).data._Elems + 2);
          local_258.data1.data._Elems[0] = local_1118.data1.data._Elems[0];
          local_258.data1.data._Elems[1] = local_1118.data1.data._Elems[1];
          local_258.data1.data._Elems[2] = local_1118.data1.data._Elems[2];
          local_258.data1.data._Elems[3] = local_1118.data1.data._Elems[3];
          local_258.data2.data._Elems[0] = local_1118.data2.data._Elems[0];
          local_258.data2.data._Elems[1] = local_1118.data2.data._Elems[1];
          local_258.data2.data._Elems[2] = local_1118.data2.data._Elems[2];
          local_258.data2.data._Elems[3] = local_1118.data2.data._Elems[3];
          pTVar30 = trimd::fallback::T256<trimd::scalar::T128<float>_>::operator*=
                              (&local_258,&local_7f8);
          uVar7 = local_1190.data2.data._Elems._8_8_;
          uVar5 = local_1190.data2.data._Elems._0_8_;
          uVar3 = local_1190.data1.data._Elems._8_8_;
          uVar1 = local_1190.data1.data._Elems._0_8_;
          local_5d8.data._Elems._0_8_ = *(undefined8 *)(pTVar30->data1).data._Elems;
          local_5d8.data._Elems._8_8_ = *(undefined8 *)((pTVar30->data1).data._Elems + 2);
          local_5c8.data._Elems._0_8_ = *(undefined8 *)(pTVar30->data2).data._Elems;
          local_5c8.data._Elems._8_8_ = *(undefined8 *)((pTVar30->data2).data._Elems + 2);
          local_118.data1.data._Elems[0] = local_1190.data1.data._Elems[0];
          local_118.data1.data._Elems[1] = local_1190.data1.data._Elems[1];
          local_118.data1.data._Elems[2] = local_1190.data1.data._Elems[2];
          local_118.data1.data._Elems[3] = local_1190.data1.data._Elems[3];
          local_118.data2.data._Elems[0] = local_1190.data2.data._Elems[0];
          local_118.data2.data._Elems[1] = local_1190.data2.data._Elems[1];
          local_118.data2.data._Elems[2] = local_1190.data2.data._Elems[2];
          local_118.data2.data._Elems[3] = local_1190.data2.data._Elems[3];
          pTVar30 = trimd::fallback::T256<trimd::scalar::T128<float>_>::operator*=
                              (&local_118,&local_7d8);
          local_698.data._Elems._0_8_ = *(undefined8 *)(pTVar30->data1).data._Elems;
          local_698.data._Elems._8_8_ = *(undefined8 *)((pTVar30->data1).data._Elems + 2);
          local_688.data._Elems._0_8_ = *(undefined8 *)(pTVar30->data2).data._Elems;
          local_688.data._Elems._8_8_ = *(undefined8 *)((pTVar30->data2).data._Elems + 2);
          trimd::scalar::T128<float>::operator+=(&local_698,&local_5d8);
          trimd::scalar::T128<float>::operator+=(&local_688,&local_5c8);
          local_678.data._Elems[0] = local_698.data._Elems[0];
          local_678.data._Elems[1] = local_698.data._Elems[1];
          local_678.data._Elems[2] = local_698.data._Elems[2];
          local_678.data._Elems[3] = local_698.data._Elems[3];
          local_668.data._Elems[0] = local_688.data._Elems[0];
          local_668.data._Elems[1] = local_688.data._Elems[1];
          local_668.data._Elems[2] = local_688.data._Elems[2];
          local_668.data._Elems[3] = local_688.data._Elems[3];
          trimd::scalar::T128<float>::operator+=(&local_678,&local_478);
          trimd::scalar::T128<float>::operator+=(&local_668,&local_468);
          local_6d8.data._Elems[0] = local_678.data._Elems[0];
          local_6d8.data._Elems[1] = local_678.data._Elems[1];
          local_6d8.data._Elems[2] = local_678.data._Elems[2];
          local_6d8.data._Elems[3] = local_678.data._Elems[3];
          local_6c8.data._Elems[0] = local_668.data._Elems[0];
          local_6c8.data._Elems[1] = local_668.data._Elems[1];
          local_6c8.data._Elems[2] = local_668.data._Elems[2];
          local_6c8.data._Elems[3] = local_668.data._Elems[3];
          trimd::scalar::T128<float>::operator-=(&local_6d8,&local_5b8);
          trimd::scalar::T128<float>::operator-=(&local_6c8,&local_5a8);
          uVar29 = local_6c8.data._Elems._8_8_;
          uVar28 = local_6c8.data._Elems._0_8_;
          uVar27 = local_6d8.data._Elems._8_8_;
          uVar26 = local_6d8.data._Elems._0_8_;
          uVar8 = local_10f8.data2.data._Elems._8_8_;
          uVar6 = local_10f8.data2.data._Elems._0_8_;
          uVar4 = local_10f8.data1.data._Elems._8_8_;
          uVar2 = local_10f8.data1.data._Elems._0_8_;
          fVar64 = local_6d8.data._Elems[0];
          fVar65 = local_6d8.data._Elems[1];
          fVar66 = local_6d8.data._Elems[2];
          fVar67 = local_6d8.data._Elems[3];
          fVar68 = local_6c8.data._Elems[0];
          fVar69 = local_6c8.data._Elems[1];
          fVar70 = local_6c8.data._Elems[2];
          fVar71 = local_6c8.data._Elems[3];
          local_10f8.data1.data._Elems[0] = (float)uVar14;
          local_10f8.data1.data._Elems[1] = SUB84(uVar14,4);
          local_138.data1.data._Elems[0] = local_10f8.data1.data._Elems[0];
          local_138.data1.data._Elems[1] = local_10f8.data1.data._Elems[1];
          local_10f8.data1.data._Elems[2] = (float)uVar15;
          local_10f8.data1.data._Elems[3] = SUB84(uVar15,4);
          local_138.data1.data._Elems[2] = local_10f8.data1.data._Elems[2];
          local_138.data1.data._Elems[3] = local_10f8.data1.data._Elems[3];
          local_10f8.data2.data._Elems[0] = (float)uVar16;
          local_10f8.data2.data._Elems[1] = SUB84(uVar16,4);
          local_138.data2.data._Elems[0] = local_10f8.data2.data._Elems[0];
          local_138.data2.data._Elems[1] = local_10f8.data2.data._Elems[1];
          local_10f8.data2.data._Elems[2] = (float)uVar17;
          local_10f8.data2.data._Elems[3] = SUB84(uVar17,4);
          local_138.data2.data._Elems[2] = local_10f8.data2.data._Elems[2];
          local_138.data2.data._Elems[3] = local_10f8.data2.data._Elems[3];
          local_10f8.data1.data._Elems._0_8_ = uVar2;
          local_10f8.data1.data._Elems._8_8_ = uVar4;
          local_10f8.data2.data._Elems._0_8_ = uVar6;
          local_10f8.data2.data._Elems._8_8_ = uVar8;
          pTVar30 = trimd::fallback::T256<trimd::scalar::T128<float>_>::operator*=
                              (&local_138,&local_7d8);
          uVar8 = local_10d8.data2.data._Elems._8_8_;
          uVar6 = local_10d8.data2.data._Elems._0_8_;
          uVar4 = local_10d8.data1.data._Elems._8_8_;
          uVar2 = local_10d8.data1.data._Elems._0_8_;
          local_558.data._Elems._0_8_ = *(undefined8 *)(pTVar30->data1).data._Elems;
          local_558.data._Elems._8_8_ = *(undefined8 *)((pTVar30->data1).data._Elems + 2);
          local_548.data._Elems._0_8_ = *(undefined8 *)(pTVar30->data2).data._Elems;
          local_548.data._Elems._8_8_ = *(undefined8 *)((pTVar30->data2).data._Elems + 2);
          local_10d8.data1.data._Elems[0] = (float)uVar18;
          local_10d8.data1.data._Elems[1] = SUB84(uVar18,4);
          local_2f8.data1.data._Elems[0] = local_10d8.data1.data._Elems[0];
          local_2f8.data1.data._Elems[1] = local_10d8.data1.data._Elems[1];
          local_10d8.data1.data._Elems[2] = (float)uVar19;
          local_10d8.data1.data._Elems[3] = SUB84(uVar19,4);
          local_2f8.data1.data._Elems[2] = local_10d8.data1.data._Elems[2];
          local_2f8.data1.data._Elems[3] = local_10d8.data1.data._Elems[3];
          local_10d8.data2.data._Elems[0] = (float)uVar20;
          local_10d8.data2.data._Elems[1] = SUB84(uVar20,4);
          local_2f8.data2.data._Elems[0] = local_10d8.data2.data._Elems[0];
          local_2f8.data2.data._Elems[1] = local_10d8.data2.data._Elems[1];
          local_10d8.data2.data._Elems[2] = (float)uVar21;
          local_10d8.data2.data._Elems[3] = SUB84(uVar21,4);
          local_2f8.data2.data._Elems[2] = local_10d8.data2.data._Elems[2];
          local_2f8.data2.data._Elems[3] = local_10d8.data2.data._Elems[3];
          local_10d8.data1.data._Elems._0_8_ = uVar2;
          local_10d8.data1.data._Elems._8_8_ = uVar4;
          local_10d8.data2.data._Elems._0_8_ = uVar6;
          local_10d8.data2.data._Elems._8_8_ = uVar8;
          pTVar30 = trimd::fallback::T256<trimd::scalar::T128<float>_>::operator*=
                              (&local_2f8,&local_7f8);
          uVar8 = local_1118.data2.data._Elems._8_8_;
          uVar6 = local_1118.data2.data._Elems._0_8_;
          uVar4 = local_1118.data1.data._Elems._8_8_;
          uVar2 = local_1118.data1.data._Elems._0_8_;
          local_578.data._Elems._0_8_ = *(undefined8 *)(pTVar30->data1).data._Elems;
          local_578.data._Elems._8_8_ = *(undefined8 *)((pTVar30->data1).data._Elems + 2);
          local_568.data._Elems._0_8_ = *(undefined8 *)(pTVar30->data2).data._Elems;
          local_568.data._Elems._8_8_ = *(undefined8 *)((pTVar30->data2).data._Elems + 2);
          local_1118.data1.data._Elems[0] = (float)uVar10;
          local_1118.data1.data._Elems[1] = SUB84(uVar10,4);
          local_318.data1.data._Elems[0] = local_1118.data1.data._Elems[0];
          local_318.data1.data._Elems[1] = local_1118.data1.data._Elems[1];
          local_1118.data1.data._Elems[2] = (float)uVar11;
          local_1118.data1.data._Elems[3] = SUB84(uVar11,4);
          local_318.data1.data._Elems[2] = local_1118.data1.data._Elems[2];
          local_318.data1.data._Elems[3] = local_1118.data1.data._Elems[3];
          local_1118.data2.data._Elems[0] = (float)uVar12;
          local_1118.data2.data._Elems[1] = SUB84(uVar12,4);
          local_318.data2.data._Elems[0] = local_1118.data2.data._Elems[0];
          local_318.data2.data._Elems[1] = local_1118.data2.data._Elems[1];
          local_1118.data2.data._Elems[2] = (float)uVar13;
          local_1118.data2.data._Elems[3] = SUB84(uVar13,4);
          local_318.data2.data._Elems[2] = local_1118.data2.data._Elems[2];
          local_318.data2.data._Elems[3] = local_1118.data2.data._Elems[3];
          local_1118.data1.data._Elems._0_8_ = uVar2;
          local_1118.data1.data._Elems._8_8_ = uVar4;
          local_1118.data2.data._Elems._0_8_ = uVar6;
          local_1118.data2.data._Elems._8_8_ = uVar8;
          pTVar30 = trimd::fallback::T256<trimd::scalar::T128<float>_>::operator*=
                              (&local_318,(T256<trimd::scalar::T128<float>_> *)&local_798);
          uVar8 = local_1190.data2.data._Elems._8_8_;
          uVar6 = local_1190.data2.data._Elems._0_8_;
          uVar4 = local_1190.data1.data._Elems._8_8_;
          uVar2 = local_1190.data1.data._Elems._0_8_;
          local_598.data._Elems._0_8_ = *(undefined8 *)(pTVar30->data1).data._Elems;
          local_598.data._Elems._8_8_ = *(undefined8 *)((pTVar30->data1).data._Elems + 2);
          local_588.data._Elems._0_8_ = *(undefined8 *)(pTVar30->data2).data._Elems;
          local_588.data._Elems._8_8_ = *(undefined8 *)((pTVar30->data2).data._Elems + 2);
          local_1190.data1.data._Elems[0] = (float)uVar1;
          local_1190.data1.data._Elems[1] = SUB84(uVar1,4);
          local_338.data1.data._Elems[0] = local_1190.data1.data._Elems[0];
          local_338.data1.data._Elems[1] = local_1190.data1.data._Elems[1];
          local_1190.data1.data._Elems[2] = (float)uVar3;
          local_1190.data1.data._Elems[3] = SUB84(uVar3,4);
          local_338.data1.data._Elems[2] = local_1190.data1.data._Elems[2];
          local_338.data1.data._Elems[3] = local_1190.data1.data._Elems[3];
          local_1190.data2.data._Elems[0] = (float)uVar5;
          local_1190.data2.data._Elems[1] = SUB84(uVar5,4);
          local_338.data2.data._Elems[0] = local_1190.data2.data._Elems[0];
          local_338.data2.data._Elems[1] = local_1190.data2.data._Elems[1];
          local_1190.data2.data._Elems[2] = (float)uVar7;
          local_1190.data2.data._Elems[3] = SUB84(uVar7,4);
          local_338.data2.data._Elems[2] = local_1190.data2.data._Elems[2];
          local_338.data2.data._Elems[3] = local_1190.data2.data._Elems[3];
          local_1190.data1.data._Elems._0_8_ = uVar2;
          local_1190.data1.data._Elems._8_8_ = uVar4;
          local_1190.data2.data._Elems._0_8_ = uVar6;
          local_1190.data2.data._Elems._8_8_ = uVar8;
          pTVar30 = trimd::fallback::T256<trimd::scalar::T128<float>_>::operator*=
                              (&local_338,&local_7b8);
          local_6b8.x = (pTVar30->data1).data._Elems[0];
          local_6b8.y = (pTVar30->data1).data._Elems[1];
          local_6b8.z = (pTVar30->data1).data._Elems[2];
          local_6b8.w = (pTVar30->data1).data._Elems[3];
          local_6a8.data._Elems._0_8_ = *(undefined8 *)(pTVar30->data2).data._Elems;
          local_6a8.data._Elems._8_8_ = *(undefined8 *)((pTVar30->data2).data._Elems + 2);
          trimd::scalar::T128<float>::operator-=((T128<float> *)&local_6b8,&local_598);
          trimd::scalar::T128<float>::operator-=(&local_6a8,&local_588);
          local_618.x = local_6b8.x;
          local_618.y = local_6b8.y;
          local_618.z = local_6b8.z;
          local_618.w = local_6b8.w;
          local_608.data._Elems[0] = local_6a8.data._Elems[0];
          local_608.data._Elems[1] = local_6a8.data._Elems[1];
          local_608.data._Elems[2] = local_6a8.data._Elems[2];
          local_608.data._Elems[3] = local_6a8.data._Elems[3];
          trimd::scalar::T128<float>::operator+=((T128<float> *)&local_618,&local_578);
          trimd::scalar::T128<float>::operator+=(&local_608,&local_568);
          local_5f8.x = local_618.x;
          local_5f8.y = local_618.y;
          local_5f8.z = local_618.z;
          local_5f8.w = local_618.w;
          local_5e8.data._Elems[0] = local_608.data._Elems[0];
          local_5e8.data._Elems[1] = local_608.data._Elems[1];
          local_5e8.data._Elems[2] = local_608.data._Elems[2];
          local_5e8.data._Elems[3] = local_608.data._Elems[3];
          trimd::scalar::T128<float>::operator+=((T128<float> *)&local_5f8,&local_558);
          trimd::scalar::T128<float>::operator+=(&local_5e8,&local_548);
          uVar8 = local_10f8.data2.data._Elems._8_8_;
          uVar6 = local_10f8.data2.data._Elems._0_8_;
          uVar4 = local_10f8.data1.data._Elems._8_8_;
          uVar2 = local_10f8.data1.data._Elems._0_8_;
          local_11a0.x = local_5f8.x;
          local_11a0.y = local_5f8.y;
          local_11a0.z = local_5f8.z;
          local_11a0.w = local_5f8.w;
          local_1208._0_4_ = local_5e8.data._Elems[0];
          local_1208._4_4_ = local_5e8.data._Elems[1];
          fStack_1200 = local_5e8.data._Elems[2];
          fStack_11fc = local_5e8.data._Elems[3];
          local_10f8.data1.data._Elems[0] = (float)uVar14;
          local_10f8.data1.data._Elems[1] = SUB84(uVar14,4);
          local_358.data1.data._Elems[0] = local_10f8.data1.data._Elems[0];
          local_358.data1.data._Elems[1] = local_10f8.data1.data._Elems[1];
          local_10f8.data1.data._Elems[2] = (float)uVar15;
          local_10f8.data1.data._Elems[3] = SUB84(uVar15,4);
          local_358.data1.data._Elems[2] = local_10f8.data1.data._Elems[2];
          local_358.data1.data._Elems[3] = local_10f8.data1.data._Elems[3];
          local_10f8.data2.data._Elems[0] = (float)uVar16;
          local_10f8.data2.data._Elems[1] = SUB84(uVar16,4);
          local_358.data2.data._Elems[0] = local_10f8.data2.data._Elems[0];
          local_358.data2.data._Elems[1] = local_10f8.data2.data._Elems[1];
          local_10f8.data2.data._Elems[2] = (float)uVar17;
          local_10f8.data2.data._Elems[3] = SUB84(uVar17,4);
          local_358.data2.data._Elems[2] = local_10f8.data2.data._Elems[2];
          local_358.data2.data._Elems[3] = local_10f8.data2.data._Elems[3];
          local_10f8.data1.data._Elems._0_8_ = uVar2;
          local_10f8.data1.data._Elems._8_8_ = uVar4;
          local_10f8.data2.data._Elems._0_8_ = uVar6;
          local_10f8.data2.data._Elems._8_8_ = uVar8;
          pTVar30 = trimd::fallback::T256<trimd::scalar::T128<float>_>::operator*=
                              (&local_358,&local_7f8);
          uVar8 = local_10d8.data2.data._Elems._8_8_;
          uVar6 = local_10d8.data2.data._Elems._0_8_;
          uVar4 = local_10d8.data1.data._Elems._8_8_;
          uVar2 = local_10d8.data1.data._Elems._0_8_;
          local_4f8.data._Elems._0_8_ = *(undefined8 *)(pTVar30->data1).data._Elems;
          local_4f8.data._Elems._8_8_ = *(undefined8 *)((pTVar30->data1).data._Elems + 2);
          local_4e8.data._Elems._0_8_ = *(undefined8 *)(pTVar30->data2).data._Elems;
          local_4e8.data._Elems._8_8_ = *(undefined8 *)((pTVar30->data2).data._Elems + 2);
          local_10d8.data1.data._Elems[0] = (float)uVar18;
          local_10d8.data1.data._Elems[1] = SUB84(uVar18,4);
          local_378.data1.data._Elems[0] = local_10d8.data1.data._Elems[0];
          local_378.data1.data._Elems[1] = local_10d8.data1.data._Elems[1];
          local_10d8.data1.data._Elems[2] = (float)uVar19;
          local_10d8.data1.data._Elems[3] = SUB84(uVar19,4);
          local_378.data1.data._Elems[2] = local_10d8.data1.data._Elems[2];
          local_378.data1.data._Elems[3] = local_10d8.data1.data._Elems[3];
          local_10d8.data2.data._Elems[0] = (float)uVar20;
          local_10d8.data2.data._Elems[1] = SUB84(uVar20,4);
          local_378.data2.data._Elems[0] = local_10d8.data2.data._Elems[0];
          local_378.data2.data._Elems[1] = local_10d8.data2.data._Elems[1];
          local_10d8.data2.data._Elems[2] = (float)uVar21;
          local_10d8.data2.data._Elems[3] = SUB84(uVar21,4);
          local_378.data2.data._Elems[2] = local_10d8.data2.data._Elems[2];
          local_378.data2.data._Elems[3] = local_10d8.data2.data._Elems[3];
          local_10d8.data1.data._Elems._0_8_ = uVar2;
          local_10d8.data1.data._Elems._8_8_ = uVar4;
          local_10d8.data2.data._Elems._0_8_ = uVar6;
          local_10d8.data2.data._Elems._8_8_ = uVar8;
          pTVar30 = trimd::fallback::T256<trimd::scalar::T128<float>_>::operator*=
                              (&local_378,&local_7d8);
          uVar8 = local_1118.data2.data._Elems._8_8_;
          uVar6 = local_1118.data2.data._Elems._0_8_;
          uVar4 = local_1118.data1.data._Elems._8_8_;
          uVar2 = local_1118.data1.data._Elems._0_8_;
          local_518.data._Elems._0_8_ = *(undefined8 *)(pTVar30->data1).data._Elems;
          local_518.data._Elems._8_8_ = *(undefined8 *)((pTVar30->data1).data._Elems + 2);
          local_508.data._Elems._0_8_ = *(undefined8 *)(pTVar30->data2).data._Elems;
          local_508.data._Elems._8_8_ = *(undefined8 *)((pTVar30->data2).data._Elems + 2);
          local_1118.data1.data._Elems[0] = (float)uVar10;
          local_1118.data1.data._Elems[1] = SUB84(uVar10,4);
          local_178.data1.data._Elems[0] = local_1118.data1.data._Elems[0];
          local_178.data1.data._Elems[1] = local_1118.data1.data._Elems[1];
          local_1118.data1.data._Elems[2] = (float)uVar11;
          local_1118.data1.data._Elems[3] = SUB84(uVar11,4);
          local_178.data1.data._Elems[2] = local_1118.data1.data._Elems[2];
          local_178.data1.data._Elems[3] = local_1118.data1.data._Elems[3];
          local_1118.data2.data._Elems[0] = (float)uVar12;
          local_1118.data2.data._Elems[1] = SUB84(uVar12,4);
          local_178.data2.data._Elems[0] = local_1118.data2.data._Elems[0];
          local_178.data2.data._Elems[1] = local_1118.data2.data._Elems[1];
          local_1118.data2.data._Elems[2] = (float)uVar13;
          local_1118.data2.data._Elems[3] = SUB84(uVar13,4);
          local_178.data2.data._Elems[2] = local_1118.data2.data._Elems[2];
          local_178.data2.data._Elems[3] = local_1118.data2.data._Elems[3];
          local_1118.data1.data._Elems._0_8_ = uVar2;
          local_1118.data1.data._Elems._8_8_ = uVar4;
          local_1118.data2.data._Elems._0_8_ = uVar6;
          local_1118.data2.data._Elems._8_8_ = uVar8;
          pTVar30 = trimd::fallback::T256<trimd::scalar::T128<float>_>::operator*=
                              (&local_178,&local_7b8);
          uVar8 = local_1190.data2.data._Elems._8_8_;
          uVar6 = local_1190.data2.data._Elems._0_8_;
          uVar4 = local_1190.data1.data._Elems._8_8_;
          uVar2 = local_1190.data1.data._Elems._0_8_;
          local_538.data._Elems._0_8_ = *(undefined8 *)(pTVar30->data1).data._Elems;
          local_538.data._Elems._8_8_ = *(undefined8 *)((pTVar30->data1).data._Elems + 2);
          local_528.data._Elems._0_8_ = *(undefined8 *)(pTVar30->data2).data._Elems;
          local_528.data._Elems._8_8_ = *(undefined8 *)((pTVar30->data2).data._Elems + 2);
          local_1190.data1.data._Elems[0] = (float)uVar1;
          local_1190.data1.data._Elems[1] = SUB84(uVar1,4);
          local_398.data1.data._Elems[0] = local_1190.data1.data._Elems[0];
          local_398.data1.data._Elems[1] = local_1190.data1.data._Elems[1];
          local_1190.data1.data._Elems[2] = (float)uVar3;
          local_1190.data1.data._Elems[3] = SUB84(uVar3,4);
          local_398.data1.data._Elems[2] = local_1190.data1.data._Elems[2];
          local_398.data1.data._Elems[3] = local_1190.data1.data._Elems[3];
          local_1190.data2.data._Elems[0] = (float)uVar5;
          local_1190.data2.data._Elems[1] = SUB84(uVar5,4);
          local_398.data2.data._Elems[0] = local_1190.data2.data._Elems[0];
          local_398.data2.data._Elems[1] = local_1190.data2.data._Elems[1];
          local_1190.data2.data._Elems[2] = (float)uVar7;
          local_1190.data2.data._Elems[3] = SUB84(uVar7,4);
          local_398.data2.data._Elems[2] = local_1190.data2.data._Elems[2];
          local_398.data2.data._Elems[3] = local_1190.data2.data._Elems[3];
          local_1190.data1.data._Elems._0_8_ = uVar2;
          local_1190.data1.data._Elems._8_8_ = uVar4;
          local_1190.data2.data._Elems._0_8_ = uVar6;
          local_1190.data2.data._Elems._8_8_ = uVar8;
          pTVar30 = trimd::fallback::T256<trimd::scalar::T128<float>_>::operator*=
                              (&local_398,(T256<trimd::scalar::T128<float>_> *)&local_798);
          local_638 = *(float **)(pTVar30->data1).data._Elems;
          afStack_630 = *(float (*) [2])((pTVar30->data1).data._Elems + 2);
          local_628.data._Elems._0_8_ = *(undefined8 *)(pTVar30->data2).data._Elems;
          local_628.data._Elems._8_8_ = *(undefined8 *)((pTVar30->data2).data._Elems + 2);
          trimd::scalar::T128<float>::operator+=((T128<float> *)&local_638,&local_538);
          trimd::scalar::T128<float>::operator+=(&local_628,&local_528);
          local_658 = local_638;
          afStack_650[0] = afStack_630[0];
          afStack_650[1] = afStack_630[1];
          local_648.data._Elems[0] = local_628.data._Elems[0];
          local_648.data._Elems[1] = local_628.data._Elems[1];
          local_648.data._Elems[2] = local_628.data._Elems[2];
          local_648.data._Elems[3] = local_628.data._Elems[3];
          trimd::scalar::T128<float>::operator-=((T128<float> *)&local_658,&local_518);
          trimd::scalar::T128<float>::operator-=(&local_648,&local_508);
          local_758 = local_658;
          afStack_750[0] = afStack_650[0];
          afStack_750[1] = afStack_650[1];
          local_748.data._Elems[0] = local_648.data._Elems[0];
          local_748.data._Elems[1] = local_648.data._Elems[1];
          local_748.data._Elems[2] = local_648.data._Elems[2];
          local_748.data._Elems[3] = local_648.data._Elems[3];
          trimd::scalar::T128<float>::operator+=((T128<float> *)&local_758,&local_4f8);
          trimd::scalar::T128<float>::operator+=(&local_748,&local_4e8);
          uVar8 = local_10f8.data2.data._Elems._8_8_;
          uVar6 = local_10f8.data2.data._Elems._0_8_;
          uVar4 = local_10f8.data1.data._Elems._8_8_;
          uVar2 = local_10f8.data1.data._Elems._0_8_;
          local_1170 = local_758;
          fStack_1168 = afStack_750[0];
          fStack_1164 = afStack_750[1];
          local_fa8 = local_748.data._Elems[0];
          fStack_fa4 = local_748.data._Elems[1];
          fStack_fa0 = local_748.data._Elems[2];
          fStack_f9c = local_748.data._Elems[3];
          local_10f8.data1.data._Elems[0] = (float)uVar14;
          local_10f8.data1.data._Elems[1] = SUB84(uVar14,4);
          local_3b8.data1.data._Elems[0] = local_10f8.data1.data._Elems[0];
          local_3b8.data1.data._Elems[1] = local_10f8.data1.data._Elems[1];
          local_10f8.data1.data._Elems[2] = (float)uVar15;
          local_10f8.data1.data._Elems[3] = SUB84(uVar15,4);
          local_3b8.data1.data._Elems[2] = local_10f8.data1.data._Elems[2];
          local_3b8.data1.data._Elems[3] = local_10f8.data1.data._Elems[3];
          local_10f8.data2.data._Elems[0] = (float)uVar16;
          local_10f8.data2.data._Elems[1] = SUB84(uVar16,4);
          local_3b8.data2.data._Elems[0] = local_10f8.data2.data._Elems[0];
          local_3b8.data2.data._Elems[1] = local_10f8.data2.data._Elems[1];
          local_10f8.data2.data._Elems[2] = (float)uVar17;
          local_10f8.data2.data._Elems[3] = SUB84(uVar17,4);
          local_3b8.data2.data._Elems[2] = local_10f8.data2.data._Elems[2];
          local_3b8.data2.data._Elems[3] = local_10f8.data2.data._Elems[3];
          local_10f8.data1.data._Elems._0_8_ = uVar2;
          local_10f8.data1.data._Elems._8_8_ = uVar4;
          local_10f8.data2.data._Elems._0_8_ = uVar6;
          local_10f8.data2.data._Elems._8_8_ = uVar8;
          pTVar30 = trimd::fallback::T256<trimd::scalar::T128<float>_>::operator*=
                              (&local_3b8,(T256<trimd::scalar::T128<float>_> *)&local_798);
          uVar8 = local_10d8.data2.data._Elems._8_8_;
          uVar6 = local_10d8.data2.data._Elems._0_8_;
          uVar4 = local_10d8.data1.data._Elems._8_8_;
          uVar2 = local_10d8.data1.data._Elems._0_8_;
          local_498.data._Elems._0_8_ = *(undefined8 *)(pTVar30->data1).data._Elems;
          local_498.data._Elems._8_8_ = *(undefined8 *)((pTVar30->data1).data._Elems + 2);
          local_488.data._Elems._0_8_ = *(undefined8 *)(pTVar30->data2).data._Elems;
          local_488.data._Elems._8_8_ = *(undefined8 *)((pTVar30->data2).data._Elems + 2);
          local_10d8.data1.data._Elems[0] = (float)uVar18;
          local_10d8.data1.data._Elems[1] = SUB84(uVar18,4);
          local_3d8.data1.data._Elems[0] = local_10d8.data1.data._Elems[0];
          local_3d8.data1.data._Elems[1] = local_10d8.data1.data._Elems[1];
          local_10d8.data1.data._Elems[2] = (float)uVar19;
          local_10d8.data1.data._Elems[3] = SUB84(uVar19,4);
          local_3d8.data1.data._Elems[2] = local_10d8.data1.data._Elems[2];
          local_3d8.data1.data._Elems[3] = local_10d8.data1.data._Elems[3];
          local_10d8.data2.data._Elems[0] = (float)uVar20;
          local_10d8.data2.data._Elems[1] = SUB84(uVar20,4);
          local_3d8.data2.data._Elems[0] = local_10d8.data2.data._Elems[0];
          local_3d8.data2.data._Elems[1] = local_10d8.data2.data._Elems[1];
          local_10d8.data2.data._Elems[2] = (float)uVar21;
          local_10d8.data2.data._Elems[3] = SUB84(uVar21,4);
          local_3d8.data2.data._Elems[2] = local_10d8.data2.data._Elems[2];
          local_3d8.data2.data._Elems[3] = local_10d8.data2.data._Elems[3];
          local_10d8.data1.data._Elems._0_8_ = uVar2;
          local_10d8.data1.data._Elems._8_8_ = uVar4;
          local_10d8.data2.data._Elems._0_8_ = uVar6;
          local_10d8.data2.data._Elems._8_8_ = uVar8;
          pTVar30 = trimd::fallback::T256<trimd::scalar::T128<float>_>::operator*=
                              (&local_3d8,&local_7b8);
          uVar8 = local_1118.data2.data._Elems._8_8_;
          uVar6 = local_1118.data2.data._Elems._0_8_;
          uVar4 = local_1118.data1.data._Elems._8_8_;
          uVar2 = local_1118.data1.data._Elems._0_8_;
          local_4b8.data._Elems._0_8_ = *(undefined8 *)(pTVar30->data1).data._Elems;
          local_4b8.data._Elems._8_8_ = *(undefined8 *)((pTVar30->data1).data._Elems + 2);
          local_4a8.data._Elems._0_8_ = *(undefined8 *)(pTVar30->data2).data._Elems;
          local_4a8.data._Elems._8_8_ = *(undefined8 *)((pTVar30->data2).data._Elems + 2);
          local_1118.data1.data._Elems[0] = (float)uVar10;
          local_1118.data1.data._Elems[1] = SUB84(uVar10,4);
          local_3f8.data1.data._Elems[0] = local_1118.data1.data._Elems[0];
          local_3f8.data1.data._Elems[1] = local_1118.data1.data._Elems[1];
          local_1118.data1.data._Elems[2] = (float)uVar11;
          local_1118.data1.data._Elems[3] = SUB84(uVar11,4);
          local_3f8.data1.data._Elems[2] = local_1118.data1.data._Elems[2];
          local_3f8.data1.data._Elems[3] = local_1118.data1.data._Elems[3];
          local_1118.data2.data._Elems[0] = (float)uVar12;
          local_1118.data2.data._Elems[1] = SUB84(uVar12,4);
          local_3f8.data2.data._Elems[0] = local_1118.data2.data._Elems[0];
          local_3f8.data2.data._Elems[1] = local_1118.data2.data._Elems[1];
          local_1118.data2.data._Elems[2] = (float)uVar13;
          local_1118.data2.data._Elems[3] = SUB84(uVar13,4);
          local_3f8.data2.data._Elems[2] = local_1118.data2.data._Elems[2];
          local_3f8.data2.data._Elems[3] = local_1118.data2.data._Elems[3];
          local_1118.data1.data._Elems._0_8_ = uVar2;
          local_1118.data1.data._Elems._8_8_ = uVar4;
          local_1118.data2.data._Elems._0_8_ = uVar6;
          local_1118.data2.data._Elems._8_8_ = uVar8;
          pTVar30 = trimd::fallback::T256<trimd::scalar::T128<float>_>::operator*=
                              (&local_3f8,&local_7d8);
          uVar8 = local_1190.data2.data._Elems._8_8_;
          uVar6 = local_1190.data2.data._Elems._0_8_;
          uVar4 = local_1190.data1.data._Elems._8_8_;
          uVar2 = local_1190.data1.data._Elems._0_8_;
          local_4d8.data._Elems._0_8_ = *(undefined8 *)(pTVar30->data1).data._Elems;
          local_4d8.data._Elems._8_8_ = *(undefined8 *)((pTVar30->data1).data._Elems + 2);
          local_4c8.data._Elems._0_8_ = *(undefined8 *)(pTVar30->data2).data._Elems;
          local_4c8.data._Elems._8_8_ = *(undefined8 *)((pTVar30->data2).data._Elems + 2);
          local_1190.data1.data._Elems[0] = (float)uVar1;
          local_1190.data1.data._Elems[1] = SUB84(uVar1,4);
          local_418.data1.data._Elems[0] = local_1190.data1.data._Elems[0];
          local_418.data1.data._Elems[1] = local_1190.data1.data._Elems[1];
          local_1190.data1.data._Elems[2] = (float)uVar3;
          local_1190.data1.data._Elems[3] = SUB84(uVar3,4);
          local_418.data1.data._Elems[2] = local_1190.data1.data._Elems[2];
          local_418.data1.data._Elems[3] = local_1190.data1.data._Elems[3];
          local_1190.data2.data._Elems[0] = (float)uVar5;
          local_1190.data2.data._Elems[1] = SUB84(uVar5,4);
          local_418.data2.data._Elems[0] = local_1190.data2.data._Elems[0];
          local_418.data2.data._Elems[1] = local_1190.data2.data._Elems[1];
          local_1190.data2.data._Elems[2] = (float)uVar7;
          local_1190.data2.data._Elems[3] = SUB84(uVar7,4);
          local_418.data2.data._Elems[2] = local_1190.data2.data._Elems[2];
          local_418.data2.data._Elems[3] = local_1190.data2.data._Elems[3];
          local_1190.data1.data._Elems._0_8_ = uVar2;
          local_1190.data1.data._Elems._8_8_ = uVar4;
          local_1190.data2.data._Elems._0_8_ = uVar6;
          local_1190.data2.data._Elems._8_8_ = uVar8;
          pTVar30 = trimd::fallback::T256<trimd::scalar::T128<float>_>::operator*=
                              (&local_418,&local_7f8);
          local_738.data._Elems._0_8_ = *(undefined8 *)(pTVar30->data1).data._Elems;
          local_738.data._Elems._8_8_ = *(undefined8 *)((pTVar30->data1).data._Elems + 2);
          local_728.data._Elems._0_8_ = *(undefined8 *)(pTVar30->data2).data._Elems;
          local_728.data._Elems._8_8_ = *(undefined8 *)((pTVar30->data2).data._Elems + 2);
          trimd::scalar::T128<float>::operator-=(&local_738,&local_4d8);
          trimd::scalar::T128<float>::operator-=(&local_728,&local_4c8);
          local_718.data._Elems[0] = local_738.data._Elems[0];
          local_718.data._Elems[1] = local_738.data._Elems[1];
          local_718.data._Elems[2] = local_738.data._Elems[2];
          local_718.data._Elems[3] = local_738.data._Elems[3];
          local_708.data._Elems[0] = local_728.data._Elems[0];
          local_708.data._Elems[1] = local_728.data._Elems[1];
          local_708.data._Elems[2] = local_728.data._Elems[2];
          local_708.data._Elems[3] = local_728.data._Elems[3];
          trimd::scalar::T128<float>::operator-=(&local_718,&local_4b8);
          trimd::scalar::T128<float>::operator-=(&local_708,&local_4a8);
          local_6f8.data._Elems[0] = local_718.data._Elems[0];
          local_6f8.data._Elems[1] = local_718.data._Elems[1];
          local_6f8.data._Elems[2] = local_718.data._Elems[2];
          local_6f8.data._Elems[3] = local_718.data._Elems[3];
          local_6e8.data._Elems[0] = local_708.data._Elems[0];
          local_6e8.data._Elems[1] = local_708.data._Elems[1];
          local_6e8.data._Elems[2] = local_708.data._Elems[2];
          local_6e8.data._Elems[3] = local_708.data._Elems[3];
          trimd::scalar::T128<float>::operator-=(&local_6f8,&local_498);
          trimd::scalar::T128<float>::operator-=(&local_6e8,&local_488);
          uVar4 = local_6c8.data._Elems._8_8_;
          uVar3 = local_6c8.data._Elems._0_8_;
          uVar2 = local_6d8.data._Elems._8_8_;
          uVar1 = local_6d8.data._Elems._0_8_;
          fVar45 = local_11a0.x;
          fVar46 = local_11a0.y;
          fVar47 = local_11a0.z;
          fVar48 = local_11a0.w;
          fVar49 = (float)local_1208;
          fVar50 = local_1208._4_4_;
          fVar51 = fStack_1200;
          fVar52 = fStack_11fc;
          local_7b8.data1.data._Elems[0] = local_11a0.x;
          local_7b8.data1.data._Elems[1] = local_11a0.y;
          local_7b8.data1.data._Elems[2] = local_11a0.z;
          local_7b8.data1.data._Elems[3] = local_11a0.w;
          local_6d8.data._Elems[0] = (float)uVar26;
          local_6d8.data._Elems[1] = SUB84(uVar26,4);
          local_7d8.data1.data._Elems[0] = local_6d8.data._Elems[0];
          local_7d8.data1.data._Elems[1] = local_6d8.data._Elems[1];
          local_6d8.data._Elems[2] = (float)uVar27;
          local_6d8.data._Elems[3] = SUB84(uVar27,4);
          local_7d8.data1.data._Elems[2] = local_6d8.data._Elems[2];
          local_7d8.data1.data._Elems[3] = local_6d8.data._Elems[3];
          local_6c8.data._Elems[0] = (float)uVar28;
          local_6c8.data._Elems[1] = SUB84(uVar28,4);
          local_7d8.data2.data._Elems[0] = local_6c8.data._Elems[0];
          local_7d8.data2.data._Elems[1] = local_6c8.data._Elems[1];
          local_6c8.data._Elems[2] = (float)uVar29;
          local_6c8.data._Elems[3] = SUB84(uVar29,4);
          local_7d8.data2.data._Elems[2] = local_6c8.data._Elems[2];
          local_7d8.data2.data._Elems[3] = local_6c8.data._Elems[3];
          fVar55 = fStack_1168;
          fVar56 = fStack_1164;
          uVar38 = uVar38 + 1;
          pfVar34 = pfVar34 + 0x20;
          afStack_790[2] = local_fa8;
          afStack_790[3] = fStack_fa4;
          afStack_790[4] = fStack_fa0;
          afStack_790[5] = fStack_f9c;
          local_7f8.data1.data._Elems[0] = local_6f8.data._Elems[0];
          local_7f8.data1.data._Elems[1] = local_6f8.data._Elems[1];
          local_7f8.data1.data._Elems[2] = local_6f8.data._Elems[2];
          local_7f8.data1.data._Elems[3] = local_6f8.data._Elems[3];
          local_7f8.data2.data._Elems[0] = local_6e8.data._Elems[0];
          local_7f8.data2.data._Elems[1] = local_6e8.data._Elems[1];
          local_7f8.data2.data._Elems[2] = local_6e8.data._Elems[2];
          local_7f8.data2.data._Elems[3] = local_6e8.data._Elems[3];
          local_798 = local_1170;
          afStack_790[0] = fStack_1168;
          afStack_790[1] = fStack_1164;
          local_7b8.data2.data._Elems[0] = (float)local_1208;
          local_7b8.data2.data._Elems[1] = local_1208._4_4_;
          local_7b8.data2.data._Elems[2] = fStack_1200;
          local_7b8.data2.data._Elems[3] = fStack_11fc;
          param_2 = local_1150;
          lVar42 = local_1210;
          fVar53 = (float)local_1170;
          fVar54 = local_1170._4_4_;
          fVar57 = local_6f8.data._Elems[1];
          fVar58 = local_6f8.data._Elems[2];
          fVar59 = local_6f8.data._Elems[3];
          fVar60 = local_6e8.data._Elems[0];
          fVar61 = local_6e8.data._Elems[1];
          fVar62 = local_6e8.data._Elems[2];
          fVar63 = local_6e8.data._Elems[3];
          local_6d8.data._Elems._0_8_ = uVar1;
          local_6d8.data._Elems._8_8_ = uVar2;
          local_6c8.data._Elems._0_8_ = uVar3;
          local_6c8.data._Elems._8_8_ = uVar4;
        } while (uVar38 < uVar43);
      }
      fVar25 = afStack_790[5];
      fVar24 = afStack_790[4];
      fVar23 = afStack_790[3];
      fVar22 = afStack_790[2];
      param_3 = local_11d8;
      pfVar34 = local_1228;
      local_1350._4_4_ = fVar45;
      local_1350._0_4_ = fVar64;
      pfVar39 = local_11d8->ptr;
      local_1348 = fVar53;
      local_1344 = local_7f8.data1.data._Elems[0];
      local_7f8.data1.data._Elems[1] = fVar57;
      local_7f8.data1.data._Elems[2] = fVar58;
      local_7f8.data1.data._Elems[3] = fVar59;
      local_7f8.data2.data._Elems[0] = fVar60;
      local_7f8.data2.data._Elems[1] = fVar61;
      local_7f8.data2.data._Elems[2] = fVar62;
      local_7f8.data2.data._Elems[3] = fVar63;
      tdm::quat<float>::euler<0>((quat<float> *)&local_1350,&local_1338);
      pfVar39[*(ushort *)pfVar32] = local_1338.values[0].value;
      pfVar39[*(ushort *)((longlong)pfVar32 + 2)] = local_1338.values[1].value;
      pfVar39[*(ushort *)(pfVar32 + 1)] = local_1338.values[2].value;
      local_1350._4_4_ = fVar46;
      local_1350._0_4_ = fVar65;
      local_1348 = fVar54;
      local_1344 = fVar57;
      tdm::quat<float>::euler<0>((quat<float> *)&local_1350,&local_1338);
      pfVar39[*(ushort *)(pfVar32 + 2)] = local_1338.values[0].value;
      pfVar39[*(ushort *)((longlong)pfVar32 + 10)] = local_1338.values[1].value;
      pfVar39[*(ushort *)(pfVar32 + 3)] = local_1338.values[2].value;
      local_1350._4_4_ = fVar47;
      local_1350._0_4_ = fVar66;
      local_1348 = fVar55;
      local_1344 = fVar58;
      tdm::quat<float>::euler<0>((quat<float> *)&local_1350,&local_1338);
      pfVar39[*(ushort *)(pfVar32 + 4)] = local_1338.values[0].value;
      pfVar39[*(ushort *)((longlong)pfVar32 + 0x12)] = local_1338.values[1].value;
      pfVar39[*(ushort *)(pfVar32 + 5)] = local_1338.values[2].value;
      local_1350._4_4_ = fVar48;
      local_1350._0_4_ = fVar67;
      local_1348 = fVar56;
      local_1344 = fVar59;
      tdm::quat<float>::euler<0>((quat<float> *)&local_1350,&local_1338);
      local_1350._4_4_ = fVar49;
      local_1350._0_4_ = fVar68;
      pfVar39[*(ushort *)(pfVar32 + 6)] = local_1338.values[0].value;
      pfVar39[*(ushort *)((longlong)pfVar32 + 0x1a)] = local_1338.values[1].value;
      pfVar39[*(ushort *)(pfVar32 + 7)] = local_1338.values[2].value;
      local_1348 = fVar22;
      local_1344 = fVar60;
      tdm::quat<float>::euler<0>((quat<float> *)&local_1350,&local_1338);
      pfVar39[*(ushort *)(pfVar32 + 8)] = local_1338.values[0].value;
      pfVar39[*(ushort *)((longlong)pfVar32 + 0x22)] = local_1338.values[1].value;
      pfVar39[*(ushort *)(pfVar32 + 9)] = local_1338.values[2].value;
      local_1350._4_4_ = fVar50;
      local_1350._0_4_ = fVar69;
      local_1348 = fVar23;
      local_1344 = fVar61;
      tdm::quat<float>::euler<0>((quat<float> *)&local_1350,&local_1338);
      pfVar39[*(ushort *)(pfVar32 + 10)] = local_1338.values[0].value;
      pfVar39[*(ushort *)((longlong)pfVar32 + 0x2a)] = local_1338.values[1].value;
      pfVar39[*(ushort *)(pfVar32 + 0xb)] = local_1338.values[2].value;
      local_1350._4_4_ = fVar51;
      local_1350._0_4_ = fVar70;
      local_1348 = fVar24;
      local_1344 = fVar62;
      tdm::quat<float>::euler<0>((quat<float> *)&local_1350,&local_1338);
      pfVar39[*(ushort *)(pfVar32 + 0xc)] = local_1338.values[0].value;
      pfVar39[*(ushort *)((longlong)pfVar32 + 0x32)] = local_1338.values[1].value;
      pfVar39[*(ushort *)(pfVar32 + 0xd)] = local_1338.values[2].value;
      local_1350._4_4_ = fVar52;
      local_1350._0_4_ = fVar71;
      local_1348 = fVar25;
      local_1344 = fVar63;
      tdm::quat<float>::euler<0>((quat<float> *)&local_1350,&local_1338);
      local_1228 = (float *)((longlong)pfVar34 + lVar42);
      pfVar34 = (float *)((longlong)local_11f8 + lVar42);
      pfVar39[*(ushort *)(pfVar32 + 0xe)] = local_1338.values[0].value;
      pfVar39[*(ushort *)((longlong)pfVar32 + 0x3a)] = local_1338.values[1].value;
      pfVar37 = pfVar32 + 0xf;
      pfVar32 = pfVar32 + 0x10;
      pfVar39[*(ushort *)pfVar37] = local_1338.values[2].value;
      local_11f8 = pfVar34;
    } while (pfVar32 < local_1238);
  }
  fVar49 = __real_3f800000;
  local_1170 = pfVar32;
  if (pfVar32 < local_1230) {
    pfVar32 = local_1228 + 0xe;
    lVar35 = local_1218;
    pLVar41 = local_1220;
    fVar50 = ___xmm_3f8000003f8000003f8000003f800000;
    fVar51 = _UNK_15076b1f4;
    fVar52 = _UNK_15076b1f8;
    fVar45 = _UNK_15076b1fc;
    do {
      puVar9 = local_1148;
      pfVar34 = param_2->ptr;
      local_1208 = 0;
      fVar46 = 0.0;
      fVar47 = 0.0;
      local_878.data1.data._Elems[0] = 0.0;
      local_878.data1.data._Elems[1] = 0.0;
      local_878.data1.data._Elems[2] = 0.0;
      local_878.data1.data._Elems[3] = 0.0;
      local_878.data2.data._Elems[0] = 0.0;
      local_878.data2.data._Elems[1] = 0.0;
      local_878.data2.data._Elems[2] = 0.0;
      local_878.data2.data._Elems[3] = 0.0;
      local_858.data1.data._Elems[0] = 0.0;
      local_858.data1.data._Elems[1] = 0.0;
      local_858.data1.data._Elems[2] = 0.0;
      local_858.data1.data._Elems[3] = 0.0;
      local_858.data2.data._Elems[0] = 0.0;
      local_858.data2.data._Elems[1] = 0.0;
      local_858.data2.data._Elems[2] = 0.0;
      local_858.data2.data._Elems[3] = 0.0;
      local_838.data1.data._Elems[0] = 0.0;
      local_838.data1.data._Elems[1] = 0.0;
      local_838.data1.data._Elems[2] = 0.0;
      local_838.data1.data._Elems[3] = 0.0;
      local_838.data2.data._Elems[0] = 0.0;
      local_838.data2.data._Elems[1] = 0.0;
      local_838.data2.data._Elems[2] = 0.0;
      local_838.data2.data._Elems[3] = 0.0;
      local_818.data1.data._Elems[0] = fVar50;
      local_818.data1.data._Elems[1] = fVar51;
      local_818.data1.data._Elems[2] = fVar52;
      local_818.data1.data._Elems[3] = fVar45;
      local_818.data2.data._Elems[0] = fVar50;
      local_818.data2.data._Elems[1] = fVar51;
      local_818.data2.data._Elems[2] = fVar52;
      local_818.data2.data._Elems[3] = fVar45;
      fVar48 = 0.0;
      fVar55 = 0.0;
      fVar56 = 0.0;
      fVar64 = 0.0;
      fVar65 = 0.0;
      fVar66 = 0.0;
      fVar67 = fVar50;
      fVar68 = fVar51;
      fVar69 = fVar52;
      fVar70 = fVar45;
      local_1238 = pfVar32;
      if (uVar43 != 0) {
        uVar38 = 0;
        do {
          local_1258.data1.data._Elems._0_8_ = *(undefined8 *)(pfVar32 + -0xe);
          local_1258.data1.data._Elems._8_8_ = *(undefined8 *)(pfVar32 + -0xc);
          local_1258.data2.data._Elems._0_8_ = *(undefined8 *)(pfVar32 + -10);
          local_1258.data2.data._Elems._8_8_ = *(undefined8 *)(pfVar32 + -8);
          local_1278.data1.data._Elems._0_8_ = *(undefined8 *)(pfVar32 + -6);
          local_1278.data1.data._Elems._8_8_ = *(undefined8 *)(pfVar32 + -4);
          local_1278.data2.data._Elems._0_8_ = *(undefined8 *)(pfVar32 + -2);
          local_1278.data2.data._Elems._8_8_ = *(undefined8 *)pfVar32;
          local_12b8.data1.data._Elems._0_8_ = *(undefined8 *)(pfVar32 + 2);
          local_12b8.data1.data._Elems._8_8_ = *(undefined8 *)(pfVar32 + 4);
          local_12b8.data2.data._Elems._0_8_ = *(undefined8 *)(pfVar32 + 6);
          local_12b8.data2.data._Elems._8_8_ = *(undefined8 *)(pfVar32 + 8);
          local_1298.data1.data._Elems._0_8_ = *(undefined8 *)(pfVar32 + 10);
          local_1298.data1.data._Elems._8_8_ = *(undefined8 *)(pfVar32 + 0xc);
          local_1298.data2.data._Elems._0_8_ = *(undefined8 *)(pfVar32 + 0xe);
          local_1298.data2.data._Elems._8_8_ = *(undefined8 *)(pfVar32 + 0x10);
          local_1358 = pfVar34[puVar9[uVar38]];
          fVar49 = fVar49 - local_1358;
          local_da0.data1.data._Elems[0] = ___xmm_bf800000bf800000bf800000bf800000;
          local_da0.data1.data._Elems[1] = _UNK_15076c664;
          local_da0.data1.data._Elems[2] = _UNK_15076c668;
          local_da0.data1.data._Elems[3] = _UNK_15076c66c;
          local_da0.data2.data._Elems[0] = ___xmm_bf800000bf800000bf800000bf800000;
          local_da0.data2.data._Elems[1] = _UNK_15076c664;
          local_da0.data2.data._Elems[2] = _UNK_15076c668;
          local_da0.data2.data._Elems[3] = _UNK_15076c66c;
          local_de0.data1.data._Elems[0] = 0.0;
          local_de0.data1.data._Elems[1] = 0.0;
          local_de0.data1.data._Elems[2] = 0.0;
          local_de0.data1.data._Elems[3] = 0.0;
          local_de0.data2.data._Elems[0] = 0.0;
          local_de0.data2.data._Elems[1] = 0.0;
          local_de0.data2.data._Elems[2] = 0.0;
          local_de0.data2.data._Elems[3] = 0.0;
          local_1340 = fVar49;
          local_dc0.data1.data._Elems[0] = fVar67;
          local_dc0.data1.data._Elems[1] = fVar68;
          local_dc0.data1.data._Elems[2] = fVar69;
          local_dc0.data1.data._Elems[3] = fVar70;
          local_dc0.data2.data._Elems[0] = fVar67;
          local_dc0.data2.data._Elems[1] = fVar68;
          local_dc0.data2.data._Elems[2] = fVar69;
          local_dc0.data2.data._Elems[3] = fVar70;
          trimd::fallback::operator>=<trimd::scalar::T128<float>_>
                    (&local_ee0,&local_1298,&local_de0);
          pTVar30 = trimd::fallback::operator&<trimd::scalar::T128<float>_>
                              (&local_8d8,&local_dc0,&local_ee0);
          pTVar31 = trimd::fallback::andnot<trimd::scalar::T128<float>_>
                              (&local_8b8,&local_ee0,&local_da0);
          trimd::fallback::operator|<trimd::scalar::T128<float>_>(&local_778,pTVar31,pTVar30);
          local_1060 = local_778.data2.data._Elems[0];
          local_1070 = local_778.data1.data._Elems[0];
          fStack_106c = local_778.data1.data._Elems[1];
          fStack_1068 = local_778.data1.data._Elems[2] * fVar49;
          fStack_1064 = local_778.data1.data._Elems[3] * fVar49;
          fStack_105c = local_778.data2.data._Elems[1] * fVar49;
          fStack_1058 = local_778.data2.data._Elems[2] * fVar49;
          fStack_1054 = local_778.data2.data._Elems[3] * fVar49;
          local_1050 = local_1258.data1.data._Elems[0];
          fStack_104c = local_1258.data1.data._Elems[1];
          local_1258.data1.data._Elems[1] = local_1258.data1.data._Elems[1] * local_1358;
          _local_fa8 = CONCAT44(local_778.data1.data._Elems[1],
                                local_778.data1.data._Elems[1] * fVar49);
          local_1040 = local_1258.data2.data._Elems[0];
          local_1258.data1.data._Elems[0] = local_1258.data1.data._Elems[0] * local_1358;
          fStack_1048 = local_1258.data1.data._Elems[2] * local_1358;
          fStack_1044 = local_1258.data1.data._Elems[3] * local_1358;
          fStack_103c = local_1258.data2.data._Elems[1] * local_1358;
          fStack_1038 = local_1258.data2.data._Elems[2] * local_1358;
          local_1258.data2.data._Elems[0] = local_1258.data2.data._Elems[0] * local_1358;
          fStack_1034 = local_1258.data2.data._Elems[3] * local_1358;
          local_1020 = local_1278.data2.data._Elems[0];
          local_1278.data2.data._Elems[0] = local_1278.data2.data._Elems[0] * local_1358;
          fStack_101c = local_1278.data2.data._Elems[1] * local_1358;
          fStack_1018 = local_1278.data2.data._Elems[2] * local_1358;
          local_1030 = local_1278.data1.data._Elems[0];
          fStack_102c = local_1278.data1.data._Elems[1];
          fStack_1028 = local_1278.data1.data._Elems[2] * local_1358;
          fStack_1024 = local_1278.data1.data._Elems[3] * local_1358;
          local_1000 = local_12b8.data2.data._Elems[0];
          local_1278.data1.data._Elems[0] = local_1278.data1.data._Elems[0] * local_1358;
          local_1278.data1.data._Elems[1] = local_1278.data1.data._Elems[1] * local_1358;
          fStack_1014 = local_1278.data2.data._Elems[3] * local_1358;
          fStack_ffc = local_12b8.data2.data._Elems[1] * local_1358;
          fStack_ff8 = local_12b8.data2.data._Elems[2] * local_1358;
          local_12b8.data2.data._Elems[0] = local_12b8.data2.data._Elems[0] * local_1358;
          local_1010 = local_12b8.data1.data._Elems[0];
          fStack_100c = local_12b8.data1.data._Elems[1];
          fStack_1008 = local_12b8.data1.data._Elems[2] * local_1358;
          fStack_1004 = local_12b8.data1.data._Elems[3] * local_1358;
          local_12b8.data1.data._Elems[1] = local_12b8.data1.data._Elems[1] * local_1358;
          fStack_ff4 = local_12b8.data2.data._Elems[3] * local_1358;
          local_12b8.data1.data._Elems[0] = local_12b8.data1.data._Elems[0] * local_1358;
          local_ff0 = local_1298.data1.data._Elems[0];
          fStack_fec = local_1298.data1.data._Elems[1];
          local_fe0 = local_1298.data2.data._Elems[0];
          local_1298.data2.data._Elems[0] =
               local_1298.data2.data._Elems[0] * local_1358 +
               local_778.data2.data._Elems[0] * fVar49;
          fStack_fe8 = local_1298.data1.data._Elems[2] * local_1358;
          fStack_fe4 = local_1298.data1.data._Elems[3] * local_1358;
          fStack_fdc = local_1298.data2.data._Elems[1] * local_1358;
          fStack_fd8 = local_1298.data2.data._Elems[2] * local_1358;
          fStack_fd4 = local_1298.data2.data._Elems[3] * local_1358;
          local_1298.data1.data._Elems[2] = fStack_fe8 + fStack_1068;
          local_1298.data1.data._Elems[3] = fStack_fe4 + fStack_1064;
          local_1298.data1.data._Elems[0] =
               local_1358 * local_1298.data1.data._Elems[0] +
               local_778.data1.data._Elems[0] * local_1340;
          local_1298.data1.data._Elems[1] =
               local_1298.data1.data._Elems[1] * local_1358 +
               local_778.data1.data._Elems[1] * fVar49;
          local_1298.data2.data._Elems[1] = fStack_fdc + fStack_105c;
          local_1298.data2.data._Elems[2] = fStack_fd8 + fStack_1058;
          local_1298.data2.data._Elems[3] = fStack_fd4 + fStack_1054;
          local_1258.data1.data._Elems[2] = fStack_1048;
          local_1258.data1.data._Elems[3] = fStack_1044;
          local_1258.data2.data._Elems[1] = fStack_103c;
          local_1278.data1.data._Elems[2] = fStack_1028;
          local_1278.data1.data._Elems[3] = fStack_1024;
          local_1258.data2.data._Elems[2] = fStack_1038;
          local_1258.data2.data._Elems[3] = fStack_1034;
          local_1278.data2.data._Elems[1] = fStack_101c;
          local_1278.data2.data._Elems[2] = fStack_1018;
          local_1278.data2.data._Elems[3] = fStack_1014;
          local_12b8.data2.data._Elems[1] = fStack_ffc;
          local_12b8.data1.data._Elems[2] = fStack_1008;
          local_12b8.data1.data._Elems[3] = fStack_1004;
          local_12b8.data2.data._Elems[2] = fStack_ff8;
          local_12b8.data2.data._Elems[3] = fStack_ff4;
          trimd::fallback::operator*<trimd::scalar::T128<float>_>
                    (&local_e60,&local_1258,&local_1258);
          trimd::fallback::operator*<trimd::scalar::T128<float>_>
                    (&local_e80,&local_1278,&local_1278);
          trimd::fallback::operator*<trimd::scalar::T128<float>_>
                    (&local_e40,&local_12b8,&local_12b8);
          trimd::fallback::operator*<trimd::scalar::T128<float>_>
                    (&local_e20,&local_1298,&local_1298);
          pTVar30 = trimd::fallback::operator+<trimd::scalar::T128<float>_>
                              (&local_898,&local_e60,&local_e80);
          pTVar30 = trimd::fallback::operator+<trimd::scalar::T128<float>_>
                              (&local_a18,pTVar30,&local_e40);
          trimd::fallback::operator+<trimd::scalar::T128<float>_>(&local_ea0,pTVar30,&local_e20);
          trimd::fallback::rsqrt<trimd::scalar::T128<float>_>(&local_f78,&local_ea0);
          local_1258.data1.data._Elems[0] =
               local_1258.data1.data._Elems[0] * local_f78.data1.data._Elems[0];
          local_1278.data1.data._Elems[0] =
               local_1278.data1.data._Elems[0] * local_f78.data1.data._Elems[0];
          local_1258.data1.data._Elems[1] =
               local_1258.data1.data._Elems[1] * local_f78.data1.data._Elems[1];
          local_1278.data1.data._Elems[1] =
               local_1278.data1.data._Elems[1] * local_f78.data1.data._Elems[1];
          local_1258.data1.data._Elems[2] =
               local_1258.data1.data._Elems[2] * local_f78.data1.data._Elems[2];
          local_1278.data1.data._Elems[2] =
               local_1278.data1.data._Elems[2] * local_f78.data1.data._Elems[2];
          local_1258.data1.data._Elems[3] =
               local_1258.data1.data._Elems[3] * local_f78.data1.data._Elems[3];
          local_12b8.data1.data._Elems[1] =
               local_12b8.data1.data._Elems[1] * local_f78.data1.data._Elems[1];
          local_12d8 = local_1258.data2.data._Elems[0] * local_f78.data2.data._Elems[0];
          local_1258.data2.data._Elems[1] =
               local_1258.data2.data._Elems[1] * local_f78.data2.data._Elems[1];
          local_1258.data2.data._Elems[0] = local_12d8;
          local_1258.data2.data._Elems[2] =
               local_1258.data2.data._Elems[2] * local_f78.data2.data._Elems[2];
          local_12b8.data1.data._Elems[2] =
               local_12b8.data1.data._Elems[2] * local_f78.data1.data._Elems[2];
          local_1258.data2.data._Elems[3] =
               local_1258.data2.data._Elems[3] * local_f78.data2.data._Elems[3];
          local_12d4 = local_1278.data1.data._Elems[3] * local_f78.data1.data._Elems[3];
          local_1278.data1.data._Elems[3] = local_12d4;
          local_12dc = local_1278.data2.data._Elems[0] * local_f78.data2.data._Elems[0];
          local_12fc = local_1278.data2.data._Elems[1] * local_f78.data2.data._Elems[1];
          local_1278.data2.data._Elems[1] = local_12fc;
          local_1278.data2.data._Elems[0] = local_12dc;
          local_1300 = local_1278.data2.data._Elems[2] * local_f78.data2.data._Elems[2];
          local_1304 = local_1278.data2.data._Elems[3] * local_f78.data2.data._Elems[3];
          local_1278.data2.data._Elems[3] = local_1304;
          local_1278.data2.data._Elems[2] = local_1300;
          local_12b8.data1.data._Elems[0] =
               local_12b8.data1.data._Elems[0] * local_f78.data1.data._Elems[0];
          local_12b8.data2.data._Elems[1] =
               local_12b8.data2.data._Elems[1] * local_f78.data2.data._Elems[1];
          local_12b8.data1.data._Elems[3] =
               local_12b8.data1.data._Elems[3] * local_f78.data1.data._Elems[3];
          local_12b8.data2.data._Elems[2] =
               local_12b8.data2.data._Elems[2] * local_f78.data2.data._Elems[2];
          local_12b8.data2.data._Elems[0] =
               local_12b8.data2.data._Elems[0] * local_f78.data2.data._Elems[0];
          local_12b8.data2.data._Elems[3] =
               local_12b8.data2.data._Elems[3] * local_f78.data2.data._Elems[3];
          local_1298.data1.data._Elems[0] =
               local_1298.data1.data._Elems[0] * local_f78.data1.data._Elems[0];
          local_1298.data1.data._Elems[1] =
               local_1298.data1.data._Elems[1] * local_f78.data1.data._Elems[1];
          local_1298.data1.data._Elems[2] =
               local_1298.data1.data._Elems[2] * local_f78.data1.data._Elems[2];
          local_1298.data1.data._Elems[3] =
               local_1298.data1.data._Elems[3] * local_f78.data1.data._Elems[3];
          local_1298.data2.data._Elems[0] =
               local_1298.data2.data._Elems[0] * local_f78.data2.data._Elems[0];
          local_1298.data2.data._Elems[1] =
               local_1298.data2.data._Elems[1] * local_f78.data2.data._Elems[1];
          local_1298.data2.data._Elems[2] =
               local_1298.data2.data._Elems[2] * local_f78.data2.data._Elems[2];
          local_1298.data2.data._Elems[3] =
               local_1298.data2.data._Elems[3] * local_f78.data2.data._Elems[3];
          local_1358 = (local_1298.data1.data._Elems[0] * local_878.data1.data._Elems[0] +
                        local_1258.data1.data._Elems[0] * local_818.data1.data._Elems[0] +
                       local_1278.data1.data._Elems[0] * local_838.data1.data._Elems[0]) -
                       local_12b8.data1.data._Elems[0] * local_858.data1.data._Elems[0];
          local_1314 = (local_1258.data1.data._Elems[1] * local_818.data1.data._Elems[1] +
                        local_878.data1.data._Elems[1] * local_1298.data1.data._Elems[1] +
                       local_838.data1.data._Elems[1] * local_1278.data1.data._Elems[1]) -
                       local_858.data1.data._Elems[1] * local_12b8.data1.data._Elems[1];
          local_1318 = (local_1258.data1.data._Elems[2] * local_818.data1.data._Elems[2] +
                        local_878.data1.data._Elems[2] * local_1298.data1.data._Elems[2] +
                       local_838.data1.data._Elems[2] * local_1278.data1.data._Elems[2]) -
                       local_858.data1.data._Elems[2] * local_12b8.data1.data._Elems[2];
          local_131c = (local_1258.data1.data._Elems[3] * local_818.data1.data._Elems[3] +
                        local_878.data1.data._Elems[3] * local_1298.data1.data._Elems[3] +
                       local_12d4 * local_838.data1.data._Elems[3]) -
                       local_858.data1.data._Elems[3] * local_12b8.data1.data._Elems[3];
          local_1340 = (local_1298.data2.data._Elems[0] * local_878.data2.data._Elems[0] +
                        local_12d8 * local_818.data2.data._Elems[0] +
                       local_12dc * local_838.data2.data._Elems[0]) -
                       local_12b8.data2.data._Elems[0] * local_858.data2.data._Elems[0];
          local_1320 = (local_1258.data2.data._Elems[1] * local_818.data2.data._Elems[1] +
                        local_878.data2.data._Elems[1] * local_1298.data2.data._Elems[1] +
                       local_12fc * local_838.data2.data._Elems[1]) -
                       local_858.data2.data._Elems[1] * local_12b8.data2.data._Elems[1];
          local_1324 = (local_1258.data2.data._Elems[2] * local_818.data2.data._Elems[2] +
                        local_878.data2.data._Elems[2] * local_1298.data2.data._Elems[2] +
                       local_1300 * local_838.data2.data._Elems[2]) -
                       local_858.data2.data._Elems[2] * local_12b8.data2.data._Elems[2];
          local_158.data2.data._Elems[0] = local_12b8.data2.data._Elems[0];
          local_158.data2.data._Elems[1] = local_12b8.data2.data._Elems[1];
          local_158.data2.data._Elems[2] = local_12b8.data2.data._Elems[2];
          local_158.data2.data._Elems[3] = local_12b8.data2.data._Elems[3];
          local_1328 = (local_1258.data2.data._Elems[3] * local_818.data2.data._Elems[3] +
                        local_878.data2.data._Elems[3] * local_1298.data2.data._Elems[3] +
                       local_1304 * local_838.data2.data._Elems[3]) -
                       local_858.data2.data._Elems[3] * local_12b8.data2.data._Elems[3];
          local_158.data1.data._Elems[0] = local_12b8.data1.data._Elems[0];
          local_158.data1.data._Elems[1] = local_12b8.data1.data._Elems[1];
          local_158.data1.data._Elems[2] = local_12b8.data1.data._Elems[2];
          local_158.data1.data._Elems[3] = local_12b8.data1.data._Elems[3];
          pTVar30 = trimd::fallback::T256<trimd::scalar::T128<float>_>::operator*=
                              (&local_158,&local_878);
          fVar49 = (pTVar30->data1).data._Elems[0];
          fVar50 = (pTVar30->data1).data._Elems[1];
          fVar51 = (pTVar30->data1).data._Elems[2];
          fVar52 = (pTVar30->data1).data._Elems[3];
          fVar45 = (pTVar30->data2).data._Elems[0];
          fVar46 = (pTVar30->data2).data._Elems[1];
          fVar47 = (pTVar30->data2).data._Elems[2];
          fVar48 = (pTVar30->data2).data._Elems[3];
          local_198.data1.data._Elems[0] = local_1278.data1.data._Elems[0];
          local_198.data1.data._Elems[1] = local_1278.data1.data._Elems[1];
          local_198.data1.data._Elems[2] = local_1278.data1.data._Elems[2];
          local_198.data1.data._Elems[3] = local_1278.data1.data._Elems[3];
          local_198.data2.data._Elems[0] = local_1278.data2.data._Elems[0];
          local_198.data2.data._Elems[1] = local_1278.data2.data._Elems[1];
          local_198.data2.data._Elems[2] = local_1278.data2.data._Elems[2];
          local_198.data2.data._Elems[3] = local_1278.data2.data._Elems[3];
          pTVar30 = trimd::fallback::T256<trimd::scalar::T128<float>_>::operator*=
                              (&local_198,&local_818);
          fVar55 = (pTVar30->data1).data._Elems[0];
          fVar56 = (pTVar30->data1).data._Elems[1];
          fVar64 = (pTVar30->data1).data._Elems[2];
          fVar65 = (pTVar30->data1).data._Elems[3];
          fVar66 = (pTVar30->data2).data._Elems[0];
          fVar67 = (pTVar30->data2).data._Elems[1];
          fVar68 = (pTVar30->data2).data._Elems[2];
          fVar69 = (pTVar30->data2).data._Elems[3];
          local_f8.data1.data._Elems[0] = local_1258.data1.data._Elems[0];
          local_f8.data1.data._Elems[1] = local_1258.data1.data._Elems[1];
          local_f8.data1.data._Elems[2] = local_1258.data1.data._Elems[2];
          local_f8.data1.data._Elems[3] = local_1258.data1.data._Elems[3];
          local_f8.data2.data._Elems[0] = local_1258.data2.data._Elems[0];
          local_f8.data2.data._Elems[1] = local_1258.data2.data._Elems[1];
          local_f8.data2.data._Elems[2] = local_1258.data2.data._Elems[2];
          local_f8.data2.data._Elems[3] = local_1258.data2.data._Elems[3];
          pTVar30 = trimd::fallback::T256<trimd::scalar::T128<float>_>::operator*=
                              (&local_f8,&local_838);
          fVar70 = (pTVar30->data1).data._Elems[0];
          fVar71 = (pTVar30->data1).data._Elems[1];
          fVar53 = (pTVar30->data1).data._Elems[2];
          fVar54 = (pTVar30->data1).data._Elems[3];
          fVar57 = (pTVar30->data2).data._Elems[0];
          fVar58 = (pTVar30->data2).data._Elems[1];
          fVar59 = (pTVar30->data2).data._Elems[2];
          fVar60 = (pTVar30->data2).data._Elems[3];
          local_2d8.data1.data._Elems[0] = local_1298.data1.data._Elems[0];
          local_2d8.data1.data._Elems[1] = local_1298.data1.data._Elems[1];
          local_2d8.data1.data._Elems[2] = local_1298.data1.data._Elems[2];
          local_2d8.data1.data._Elems[3] = local_1298.data1.data._Elems[3];
          local_2d8.data2.data._Elems[0] = local_1298.data2.data._Elems[0];
          local_2d8.data2.data._Elems[1] = local_1298.data2.data._Elems[1];
          local_2d8.data2.data._Elems[2] = local_1298.data2.data._Elems[2];
          local_2d8.data2.data._Elems[3] = local_1298.data2.data._Elems[3];
          pTVar30 = trimd::fallback::T256<trimd::scalar::T128<float>_>::operator*=
                              (&local_2d8,&local_858);
          local_10b8 = (pTVar30->data1).data._Elems[0];
          fStack_fa4 = (pTVar30->data1).data._Elems[1];
          pfVar37 = (pTVar30->data1).data._Elems + 2;
          _fStack_fa0 = *(undefined8 *)pfVar37;
          local_10a8 = (pTVar30->data2).data._Elems[0];
          local_11a0.y = (pTVar30->data2).data._Elems[1];
          pfVar39 = (pTVar30->data2).data._Elems + 2;
          local_11a0.z = pfVar39[0];
          local_11a0.w = pfVar39[1];
          fStack_10b4 = fStack_fa4 - fVar71;
          fStack_10b0 = *pfVar37 - fVar53;
          fStack_10ac = (pTVar30->data1).data._Elems[3] - fVar54;
          fStack_10a4 = local_11a0.y - fVar58;
          local_fa8 = (local_10b8 - fVar70) + fVar55 + fVar49;
          fStack_10a0 = *pfVar39 - fVar59;
          fStack_109c = (pTVar30->data2).data._Elems[3] - fVar60;
          local_12d4 = fStack_10b4 + fVar56 + fVar50;
          local_12d8 = fStack_10b0 + fVar64 + fVar51;
          local_12dc = fStack_10ac + fVar65 + fVar52;
          local_12fc = fStack_10a4 + fVar67 + fVar46;
          local_11a0.x = (local_10a8 - fVar57) + fVar66 + fVar45;
          local_1300 = fStack_10a0 + fVar68 + fVar47;
          local_1304 = fStack_109c + fVar69 + fVar48;
          local_2b8.data1.data._Elems[0] = local_12b8.data1.data._Elems[0];
          local_2b8.data1.data._Elems[1] = local_12b8.data1.data._Elems[1];
          local_2b8.data1.data._Elems[2] = local_12b8.data1.data._Elems[2];
          local_2b8.data1.data._Elems[3] = local_12b8.data1.data._Elems[3];
          local_2b8.data2.data._Elems[0] = local_12b8.data2.data._Elems[0];
          local_2b8.data2.data._Elems[1] = local_12b8.data2.data._Elems[1];
          local_2b8.data2.data._Elems[2] = local_12b8.data2.data._Elems[2];
          local_2b8.data2.data._Elems[3] = local_12b8.data2.data._Elems[3];
          pTVar30 = trimd::fallback::T256<trimd::scalar::T128<float>_>::operator*=
                              (&local_2b8,&local_818);
          fVar49 = (pTVar30->data1).data._Elems[0];
          fVar50 = (pTVar30->data1).data._Elems[1];
          fVar51 = (pTVar30->data1).data._Elems[2];
          fVar52 = (pTVar30->data1).data._Elems[3];
          fVar45 = (pTVar30->data2).data._Elems[0];
          fVar46 = (pTVar30->data2).data._Elems[1];
          fVar47 = (pTVar30->data2).data._Elems[2];
          fVar48 = (pTVar30->data2).data._Elems[3];
          local_298.data1.data._Elems[0] = local_1278.data1.data._Elems[0];
          local_298.data1.data._Elems[1] = local_1278.data1.data._Elems[1];
          local_298.data1.data._Elems[2] = local_1278.data1.data._Elems[2];
          local_298.data1.data._Elems[3] = local_1278.data1.data._Elems[3];
          local_298.data2.data._Elems[0] = local_1278.data2.data._Elems[0];
          local_298.data2.data._Elems[1] = local_1278.data2.data._Elems[1];
          local_298.data2.data._Elems[2] = local_1278.data2.data._Elems[2];
          local_298.data2.data._Elems[3] = local_1278.data2.data._Elems[3];
          pTVar30 = trimd::fallback::T256<trimd::scalar::T128<float>_>::operator*=
                              (&local_298,&local_878);
          fVar55 = (pTVar30->data1).data._Elems[0];
          fVar56 = (pTVar30->data1).data._Elems[1];
          fVar64 = (pTVar30->data1).data._Elems[2];
          fVar65 = (pTVar30->data1).data._Elems[3];
          fVar66 = (pTVar30->data2).data._Elems[0];
          fVar67 = (pTVar30->data2).data._Elems[1];
          fVar68 = (pTVar30->data2).data._Elems[2];
          fVar69 = (pTVar30->data2).data._Elems[3];
          local_278.data1.data._Elems[0] = local_1258.data1.data._Elems[0];
          local_278.data1.data._Elems[1] = local_1258.data1.data._Elems[1];
          local_278.data1.data._Elems[2] = local_1258.data1.data._Elems[2];
          local_278.data1.data._Elems[3] = local_1258.data1.data._Elems[3];
          local_278.data2.data._Elems[0] = local_1258.data2.data._Elems[0];
          local_278.data2.data._Elems[1] = local_1258.data2.data._Elems[1];
          local_278.data2.data._Elems[2] = local_1258.data2.data._Elems[2];
          local_278.data2.data._Elems[3] = local_1258.data2.data._Elems[3];
          pTVar30 = trimd::fallback::T256<trimd::scalar::T128<float>_>::operator*=
                              (&local_278,&local_858);
          fVar70 = (pTVar30->data1).data._Elems[0];
          fVar71 = (pTVar30->data1).data._Elems[1];
          fVar53 = (pTVar30->data1).data._Elems[2];
          fVar54 = (pTVar30->data1).data._Elems[3];
          fVar57 = (pTVar30->data2).data._Elems[0];
          fVar58 = (pTVar30->data2).data._Elems[1];
          fVar59 = (pTVar30->data2).data._Elems[2];
          fVar60 = (pTVar30->data2).data._Elems[3];
          local_238.data1.data._Elems[0] = local_1298.data1.data._Elems[0];
          local_238.data1.data._Elems[1] = local_1298.data1.data._Elems[1];
          local_238.data1.data._Elems[2] = local_1298.data1.data._Elems[2];
          local_238.data1.data._Elems[3] = local_1298.data1.data._Elems[3];
          local_238.data2.data._Elems[0] = local_1298.data2.data._Elems[0];
          local_238.data2.data._Elems[1] = local_1298.data2.data._Elems[1];
          local_238.data2.data._Elems[2] = local_1298.data2.data._Elems[2];
          local_238.data2.data._Elems[3] = local_1298.data2.data._Elems[3];
          pTVar30 = trimd::fallback::T256<trimd::scalar::T128<float>_>::operator*=
                              (&local_238,&local_838);
          local_1098 = (pTVar30->data1).data._Elems[0];
          fVar61 = (pTVar30->data1).data._Elems[1];
          pfVar37 = (pTVar30->data1).data._Elems + 2;
          _fStack_1200 = *(undefined8 *)pfVar37;
          local_1088 = (pTVar30->data2).data._Elems[0];
          fVar62 = (pTVar30->data2).data._Elems[1];
          fStack_11f0 = (pTVar30->data2).data._Elems[2];
          fStack_11ec = (pTVar30->data2).data._Elems[3];
          fStack_1094 = fVar61 + fVar71;
          fStack_1090 = *pfVar37 + fVar53;
          fStack_108c = (pTVar30->data1).data._Elems[3] + fVar54;
          fStack_1084 = fVar62 + fVar58;
          fStack_1080 = fStack_11f0 + fVar59;
          fStack_107c = fStack_11ec + fVar60;
          local_1208 = CONCAT44(fVar61,((local_1098 + fVar70) - fVar55) + fVar49);
          local_12e8 = (fStack_1094 - fVar56) + fVar50;
          local_12ec = (fStack_1090 - fVar64) + fVar51;
          local_12f0 = (fStack_108c - fVar65) + fVar52;
          local_12f4 = (fStack_1084 - fVar67) + fVar46;
          local_12f8 = (fStack_1080 - fVar68) + fVar47;
          local_1308 = (fStack_107c - fVar69) + fVar48;
          local_11f8 = (float *)CONCAT44(fVar62,((local_1088 + fVar57) - fVar66) + fVar45);
          local_218.data1.data._Elems[0] = local_12b8.data1.data._Elems[0];
          local_218.data1.data._Elems[1] = local_12b8.data1.data._Elems[1];
          local_218.data1.data._Elems[2] = local_12b8.data1.data._Elems[2];
          local_218.data1.data._Elems[3] = local_12b8.data1.data._Elems[3];
          local_218.data2.data._Elems[0] = local_12b8.data2.data._Elems[0];
          local_218.data2.data._Elems[1] = local_12b8.data2.data._Elems[1];
          local_218.data2.data._Elems[2] = local_12b8.data2.data._Elems[2];
          local_218.data2.data._Elems[3] = local_12b8.data2.data._Elems[3];
          pTVar30 = trimd::fallback::T256<trimd::scalar::T128<float>_>::operator*=
                              (&local_218,&local_838);
          fVar50 = (pTVar30->data1).data._Elems[0];
          fVar51 = (pTVar30->data1).data._Elems[1];
          fVar52 = (pTVar30->data1).data._Elems[2];
          fVar45 = (pTVar30->data1).data._Elems[3];
          fVar49 = (pTVar30->data2).data._Elems[0];
          fVar46 = (pTVar30->data2).data._Elems[1];
          fVar47 = (pTVar30->data2).data._Elems[2];
          fVar48 = (pTVar30->data2).data._Elems[3];
          local_1f8.data1.data._Elems[0] = local_1278.data1.data._Elems[0];
          local_1f8.data1.data._Elems[1] = local_1278.data1.data._Elems[1];
          local_1f8.data1.data._Elems[2] = local_1278.data1.data._Elems[2];
          local_1f8.data1.data._Elems[3] = local_1278.data1.data._Elems[3];
          local_1f8.data2.data._Elems[0] = local_1278.data2.data._Elems[0];
          local_1f8.data2.data._Elems[1] = local_1278.data2.data._Elems[1];
          local_1f8.data2.data._Elems[2] = local_1278.data2.data._Elems[2];
          local_1f8.data2.data._Elems[3] = local_1278.data2.data._Elems[3];
          pTVar30 = trimd::fallback::T256<trimd::scalar::T128<float>_>::operator*=
                              (&local_1f8,&local_858);
          fVar55 = (pTVar30->data1).data._Elems[0];
          fVar56 = (pTVar30->data1).data._Elems[1];
          fVar64 = (pTVar30->data1).data._Elems[2];
          fVar65 = (pTVar30->data1).data._Elems[3];
          fVar66 = (pTVar30->data2).data._Elems[0];
          fVar67 = (pTVar30->data2).data._Elems[1];
          fVar68 = (pTVar30->data2).data._Elems[2];
          fVar69 = (pTVar30->data2).data._Elems[3];
          local_1d8.data1.data._Elems[0] = local_1258.data1.data._Elems[0];
          local_1d8.data1.data._Elems[1] = local_1258.data1.data._Elems[1];
          local_1d8.data1.data._Elems[2] = local_1258.data1.data._Elems[2];
          local_1d8.data1.data._Elems[3] = local_1258.data1.data._Elems[3];
          local_1d8.data2.data._Elems[0] = local_1258.data2.data._Elems[0];
          local_1d8.data2.data._Elems[1] = local_1258.data2.data._Elems[1];
          local_1d8.data2.data._Elems[2] = local_1258.data2.data._Elems[2];
          local_1d8.data2.data._Elems[3] = local_1258.data2.data._Elems[3];
          pTVar30 = trimd::fallback::T256<trimd::scalar::T128<float>_>::operator*=
                              (&local_1d8,&local_878);
          fVar70 = (pTVar30->data1).data._Elems[0];
          fVar71 = (pTVar30->data1).data._Elems[1];
          fVar53 = (pTVar30->data1).data._Elems[2];
          fVar54 = (pTVar30->data1).data._Elems[3];
          fVar57 = (pTVar30->data2).data._Elems[0];
          fVar58 = (pTVar30->data2).data._Elems[1];
          fVar59 = (pTVar30->data2).data._Elems[2];
          fVar60 = (pTVar30->data2).data._Elems[3];
          local_1b8.data1.data._Elems[0] = local_1298.data1.data._Elems[0];
          local_1b8.data1.data._Elems[1] = local_1298.data1.data._Elems[1];
          local_1b8.data1.data._Elems[2] = local_1298.data1.data._Elems[2];
          local_1b8.data1.data._Elems[3] = local_1298.data1.data._Elems[3];
          local_1b8.data2.data._Elems[0] = local_1298.data2.data._Elems[0];
          local_1b8.data2.data._Elems[1] = local_1298.data2.data._Elems[1];
          local_1b8.data2.data._Elems[2] = local_1298.data2.data._Elems[2];
          local_1b8.data2.data._Elems[3] = local_1298.data2.data._Elems[3];
          pTVar30 = trimd::fallback::T256<trimd::scalar::T128<float>_>::operator*=
                              (&local_1b8,&local_818);
          local_1138 = (pTVar30->data1).data._Elems[0];
          local_1128 = (pTVar30->data2).data._Elems[0];
          fStack_1134 = (pTVar30->data1).data._Elems[1] - fVar71;
          fStack_1130 = (pTVar30->data1).data._Elems[2] - fVar53;
          fStack_112c = (pTVar30->data1).data._Elems[3] - fVar54;
          fVar50 = ((local_1138 - fVar70) - fVar55) - fVar50;
          fStack_1124 = (pTVar30->data2).data._Elems[1] - fVar58;
          fStack_1120 = (pTVar30->data2).data._Elems[2] - fVar59;
          fStack_111c = (pTVar30->data2).data._Elems[3] - fVar60;
          local_818.data2.data._Elems[0] = ((local_1128 - fVar57) - fVar66) - fVar49;
          fVar51 = (fStack_1134 - fVar56) - fVar51;
          fVar52 = (fStack_1130 - fVar64) - fVar52;
          fVar45 = (fStack_112c - fVar65) - fVar45;
          local_818.data2.data._Elems[1] = (fStack_1124 - fVar67) - fVar46;
          local_818.data2.data._Elems[2] = (fStack_1120 - fVar68) - fVar47;
          local_818.data2.data._Elems[3] = (fStack_111c - fVar69) - fVar48;
          uVar38 = uVar38 + 1;
          pfVar32 = pfVar32 + 0x20;
          local_878.data1.data._Elems[1] = local_1314;
          local_878.data1.data._Elems[0] = local_1358;
          local_878.data1.data._Elems[3] = local_131c;
          local_878.data1.data._Elems[2] = local_1318;
          local_878.data2.data._Elems[1] = local_1320;
          local_878.data2.data._Elems[0] = local_1340;
          local_878.data2.data._Elems[3] = local_1328;
          local_878.data2.data._Elems[2] = local_1324;
          local_818.data1.data._Elems[0] = fVar50;
          local_818.data1.data._Elems[1] = fVar51;
          local_818.data1.data._Elems[2] = fVar52;
          local_818.data1.data._Elems[3] = fVar45;
          local_858.data1.data._Elems[0] = (float)_local_fa8;
          local_858.data1.data._Elems[1] = local_12d4;
          local_858.data1.data._Elems[3] = local_12dc;
          local_858.data1.data._Elems[2] = local_12d8;
          local_858.data2.data._Elems[0] = local_11a0.x;
          local_858.data2.data._Elems[1] = local_12fc;
          local_858.data2.data._Elems[3] = local_1304;
          local_858.data2.data._Elems[2] = local_1300;
          fVar47 = SUB84(local_11f8,0);
          fVar46 = (float)local_1208;
          local_838.data1.data._Elems[0] = fVar46;
          local_838.data1.data._Elems[1] = local_12e8;
          local_838.data1.data._Elems[3] = local_12f0;
          local_838.data1.data._Elems[2] = local_12ec;
          local_838.data2.data._Elems[0] = fVar47;
          local_838.data2.data._Elems[1] = local_12f4;
          local_838.data2.data._Elems[3] = local_1308;
          local_838.data2.data._Elems[2] = local_12f8;
          lVar35 = local_1218;
          param_3 = local_11d8;
          pLVar41 = local_1220;
          lVar42 = local_1210;
          fVar48 = local_12e8;
          fVar55 = local_12ec;
          fVar56 = local_12f0;
          fVar64 = local_12f4;
          fVar65 = local_12f8;
          fVar66 = local_1308;
          fVar49 = __real_3f800000;
          fVar67 = ___xmm_3f8000003f8000003f8000003f800000;
          fVar68 = _UNK_15076b1f4;
          fVar69 = _UNK_15076b1f8;
          fVar70 = _UNK_15076b1fc;
        } while (uVar38 < uVar43);
      }
      pfVar34 = local_1170;
      local_d18[0] = local_878.data1.data._Elems[0];
      local_d18[1] = local_878.data1.data._Elems[1];
      local_d18[2] = local_878.data1.data._Elems[2];
      local_d18[3] = local_878.data1.data._Elems[3];
      local_d08[0] = local_878.data2.data._Elems[0];
      local_d08[1] = local_878.data2.data._Elems[1];
      afStack_d00[0] = local_878.data2.data._Elems[2];
      afStack_d00[1] = local_878.data2.data._Elems[3];
      local_cf8[0] = local_858.data1.data._Elems[0];
      local_cf8[1] = local_858.data1.data._Elems[1];
      local_cf8[2] = local_858.data1.data._Elems[2];
      local_cf8[3] = local_858.data1.data._Elems[3];
      local_ce8[0] = local_858.data2.data._Elems[0];
      local_ce8[1] = local_858.data2.data._Elems[1];
      afStack_ce0[0] = local_858.data2.data._Elems[2];
      afStack_ce0[1] = local_858.data2.data._Elems[3];
      local_cd8[0] = fVar46;
      local_cd8[1] = fVar48;
      local_cd8[2] = fVar55;
      local_cd8[3] = fVar56;
      local_cc8 = fVar47;
      fStack_cc4 = fVar64;
      fStack_cc0 = fVar65;
      fStack_cbc = fVar66;
      local_cb8[0] = fVar50;
      local_cb8[1] = fVar51;
      local_cb8[2] = fVar52;
      local_cb8[3] = fVar45;
      local_ca8 = local_818.data2.data._Elems[0];
      fStack_ca4 = local_818.data2.data._Elems[1];
      fStack_ca0 = local_818.data2.data._Elems[2];
      fStack_c9c = local_818.data2.data._Elems[3];
      pfVar32 = param_3->ptr;
      uVar44 = (&(pLVar41->outputLODs).size)[lVar35 * 2] >> 2 & 7;
      uVar38 = (ulonglong)uVar44;
      local_818.data1.data._Elems[0] = fVar50;
      local_818.data1.data._Elems[1] = fVar51;
      local_818.data1.data._Elems[2] = fVar52;
      local_818.data1.data._Elems[3] = fVar45;
      if (uVar44 != 0) {
        pfVar37 = local_cd8;
        pfVar39 = local_1170 + 1;
        do {
          local_1348 = *pfVar37;
          local_1350._4_4_ = pfVar37[-8];
          local_1350._0_4_ = pfVar37[-0x10];
          local_1344 = pfVar37[8];
          tdm::quat<float>::euler<0>((quat<float> *)&local_1350,&local_f98);
          pfVar37 = pfVar37 + 1;
          pfVar32[*(ushort *)(pfVar39 + -1)] = local_f98.values[0].value;
          pfVar32[*(ushort *)((longlong)pfVar39 + -2)] = local_f98.values[1].value;
          pfVar32[*(ushort *)pfVar39] = local_f98.values[2].value;
          uVar38 = uVar38 - 1;
          lVar35 = local_1218;
          param_2 = local_1150;
          pfVar39 = pfVar39 + 2;
          pLVar41 = local_1220;
        } while (uVar38 != 0);
      }
      local_1170 = pfVar34 + 0x10;
      local_1228 = (float *)((longlong)local_1228 + lVar42);
      pfVar32 = (float *)((longlong)local_1238 + lVar42);
      param_3 = local_11d8;
      fVar50 = fVar67;
      fVar51 = fVar68;
      fVar52 = fVar69;
      fVar45 = fVar70;
      local_1238 = pfVar32;
    } while (local_1170 < local_1230);
  }
  if (local_1170 < local_fb0) {
    local_1208 = (longlong)local_fb0 - (longlong)local_1170;
    local_11f8 = local_1228 + 6;
    do {
      pfVar32 = local_1170;
      lVar42 = local_1208;
      local_1350 = param_2->ptr;
      uVar38 = 0;
      local_11e8 = CONCAT44(_UNK_15076b1f4,___xmm_3f8000003f8000003f8000003f800000);
      uStack_11e0 = CONCAT44(_UNK_15076b1fc,_UNK_15076b1f8);
      local_d38[0] = 0.0;
      local_d38[1] = 0.0;
      local_d38[2] = 0.0;
      local_d38[3] = 0.0;
      local_11c0 = 0;
      uStack_11b8 = 0;
      local_11b0 = 0;
      uStack_11a8 = 0;
      local_11d0 = 0;
      uStack_11c8 = 0;
      if (uVar43 != 0) {
        local_12c4 = 0.0;
        local_12cc = 0.0;
        local_12d0 = 0.0;
        local_12c8 = 0.0;
        local_12f0 = 0.0;
        local_12f4 = 0.0;
        local_12f8 = 0.0;
        local_1308 = 0.0;
        local_1324 = 0.0;
        local_1328 = 0.0;
        local_12e8 = 0.0;
        local_12ec = 0.0;
        local_1318 = _UNK_15076b1fc;
        local_131c = _UNK_15076b1f8;
        local_1320 = _UNK_15076b1f4;
        local_130c = ___xmm_3f8000003f8000003f8000003f800000;
        local_1154 = 0x3f800000;
        local_1158 = 0x3f800000;
        local_1160 = 0x3f800000;
        local_1074 = 0xbf800000;
        local_1078 = 0xbf800000;
        local_1140 = 0xbf800000;
        local_115c = 0xbf800000;
        pfVar34 = local_11f8;
        do {
          uVar44 = 0;
          fVar50 = local_1350[local_1148[uVar38]];
          fVar49 = fVar49 - fVar50;
          local_12d4 = fVar50 * pfVar34[-5];
          if (0.0 <= pfVar34[6]) {
            uVar44 = 0xffffffff;
          }
          local_1304 = fVar50 * pfVar34[-4];
          fVar51 = fVar50 * pfVar34[-2];
          uVar40 = 0;
          if (0.0 <= pfVar34[7]) {
            uVar40 = 0xffffffff;
          }
          uVar36 = 0;
          fVar45 = fVar50 * pfVar34[-1];
          local_1300 = fVar50 * pfVar34[1];
          fVar52 = fVar50 * pfVar34[2];
          fVar46 = fVar50 * pfVar34[3];
          local_1314 = fVar50 * pfVar34[-3];
          if (0.0 <= pfVar34[8]) {
            uVar36 = 0xffffffff;
          }
          local_1310 = fVar50 * *pfVar34;
          uVar33 = 0;
          if (0.0 <= pfVar34[9]) {
            uVar33 = 0xffffffff;
          }
          fVar48 = fVar50 * pfVar34[-6];
          fVar55 = fVar50 * pfVar34[4];
          fVar56 = fVar50 * pfVar34[6] +
                   (float)(~uVar44 & 0xbf800000 | uVar44 & 0x3f800000) * fVar49;
          fVar50 = fVar50 * pfVar34[5];
          fVar47 = local_1350[local_1148[uVar38]];
          local_12dc = pfVar34[7] * fVar47 +
                       (float)(~uVar40 & 0xbf800000 | uVar40 & 0x3f800000) * fVar49;
          local_12d8 = pfVar34[9] * fVar47 +
                       (float)(~uVar33 & 0xbf800000 | uVar33 & 0x3f800000) * fVar49;
          local_12e0 = pfVar34[8] * fVar47 +
                       (float)(~uVar36 & 0xbf800000 | uVar36 & 0x3f800000) * fVar49;
          local_1358 = __real_3f800000 /
                       SQRT(fVar56 * fVar56 + fVar52 * fVar52 + fVar51 * fVar51 + fVar48 * fVar48);
          fVar49 = __real_3f800000 /
                   SQRT(fVar45 * fVar45 + local_12d4 * local_12d4 +
                        local_12dc * local_12dc + fVar46 * fVar46);
          local_1340 = __real_3f800000 /
                       SQRT(local_1310 * local_1310 + local_1304 * local_1304 +
                            local_12e0 * local_12e0 + fVar55 * fVar55);
          fVar48 = local_1358 * fVar48;
          local_12fc = __real_3f800000 /
                       SQRT(local_1300 * local_1300 + local_1314 * local_1314 +
                            local_12d8 * local_12d8 + fVar50 * fVar50);
          local_12d4 = fVar49 * local_12d4;
          local_1238 = (float *)CONCAT44(local_1238._4_4_,fVar48);
          local_1304 = local_1340 * local_1304;
          fVar51 = local_1358 * fVar51;
          local_1314 = local_12fc * local_1314;
          local_1210 = CONCAT44(local_1210._4_4_,fVar51);
          local_1310 = local_1310 * local_1340;
          local_12e0 = local_1340 * local_12e0;
          fVar45 = fVar49 * fVar45;
          local_1300 = local_12fc * local_1300;
          fVar52 = local_1358 * fVar52;
          local_1340 = local_1340 * fVar55;
          local_12c0 = local_12fc * local_12d8;
          local_12e4 = fVar49 * local_12dc;
          local_12fc = local_12fc * fVar50;
          fVar49 = fVar49 * fVar46;
          local_1358 = local_1358 * fVar56;
          local_1220 = (LODRegion *)CONCAT44(local_1220._4_4_,fVar45);
          local_1228 = (float *)CONCAT44(local_1228._4_4_,fVar52);
          local_1218 = CONCAT44(local_1218._4_4_,fVar49);
          fVar56 = (local_1308 * local_1358 - local_12ec * fVar48) + local_130c * fVar51 +
                   local_12c8 * fVar52;
          local_1230 = (float *)CONCAT44(local_1230._4_4_,fVar56);
          fVar66 = (local_12f8 * local_12e4 - local_12e8 * local_12d4) + local_1320 * fVar45 +
                   local_12d0 * fVar49;
          fVar65 = (local_12f4 * local_12e0 - local_1328 * local_1304) + local_131c * local_1310 +
                   local_12cc * local_1340;
          fVar64 = (local_12f0 * local_12c0 - local_1324 * local_1314) + local_1318 * local_1300 +
                   local_12c4 * local_12fc;
          local_d38[0] = ((local_12ec * local_1358 + local_1308 * fVar48) - local_12c8 * fVar51) +
                         local_130c * fVar52;
          local_d38[1] = ((local_12e8 * local_12e4 + local_12f8 * local_12d4) - local_12d0 * fVar45)
                         + local_1320 * fVar49;
          local_d38[2] = ((local_1328 * local_12e0 + local_12f4 * local_1304) -
                         local_12cc * local_1310) + local_131c * local_1340;
          local_d38[3] = ((local_1324 * local_12c0 + local_12f0 * local_1314) -
                         local_12c4 * local_1300) + local_1318 * local_12fc;
          fVar55 = ((local_130c * local_1358 - local_12c8 * fVar48) - local_1308 * fVar51) -
                   local_12ec * fVar52;
          fVar47 = ((local_1320 * local_12e4 - local_12d0 * local_12d4) - local_12f8 * fVar45) -
                   local_12e8 * fVar49;
          fVar46 = ((local_131c * local_12e0 - local_12cc * local_1304) - local_12f4 * local_1310) -
                   local_1328 * local_1340;
          fVar50 = ((local_1318 * local_12c0 - local_12c4 * local_1314) - local_12f0 * local_1300) -
                   local_1324 * local_12fc;
          local_12c8 = (local_12c8 * local_1358 + local_130c * fVar48 + local_12ec * fVar51) -
                       local_1308 * fVar52;
          local_12d0 = (local_12d0 * local_12e4 + local_1320 * local_12d4 + local_12e8 * fVar45) -
                       local_12f8 * fVar49;
          local_11c0 = CONCAT44(local_12d0,local_12c8);
          local_12cc = (local_12cc * local_12e0 + local_131c * local_1304 + local_1328 * local_1310)
                       - local_12f4 * local_1340;
          local_12c4 = (local_12c4 * local_12c0 + local_1318 * local_1314 + local_1324 * local_1300)
                       - local_12f0 * local_12fc;
          uStack_11b8 = CONCAT44(local_12c4,local_12cc);
          uVar38 = uVar38 + 1;
          pfVar34 = pfVar34 + 0x10;
          local_11b0 = CONCAT44(fVar66,fVar56);
          uStack_11a8 = CONCAT44(fVar64,fVar65);
          local_11d0 = CONCAT44(local_d38[1],local_d38[0]);
          uStack_11c8 = CONCAT44(local_d38[3],local_d38[2]);
          local_11e8 = CONCAT44(fVar47,fVar55);
          uStack_11e0 = CONCAT44(fVar50,fVar46);
          fVar49 = __real_3f800000;
          local_1328 = local_d38[2];
          local_1324 = local_d38[3];
          local_1320 = fVar47;
          local_131c = fVar46;
          local_1318 = fVar50;
          local_130c = fVar55;
          local_1308 = fVar56;
          local_12f8 = fVar66;
          local_12f4 = fVar65;
          local_12f0 = fVar64;
          local_12ec = local_d38[0];
          local_12e8 = local_d38[1];
        } while (uVar38 < uVar43);
      }
      uVar38 = (ulonglong)(local_1208 >> 1) >> 2;
      local_d58 = local_11c0;
      uStack_d50 = uStack_11b8;
      local_d48 = local_11b0;
      uStack_d40 = uStack_11a8;
      local_d28 = local_11e8;
      uStack_d20 = uStack_11e0;
      pfVar34 = local_11d8->ptr;
      if (uVar38 != 0) {
        pfVar37 = local_d38;
        pfVar39 = local_1170 + 1;
        do {
          local_11a0.y = pfVar37[-4];
          local_11a0.x = pfVar37[-8];
          local_11a0.w = pfVar37[4];
          local_11a0.z = *pfVar37;
          tdm::quat<float>::euler<0>(&local_11a0,&local_f88);
          pfVar37 = pfVar37 + 1;
          pfVar34[*(ushort *)(pfVar39 + -1)] = local_f88.values[0].value;
          pfVar34[*(ushort *)((longlong)pfVar39 + -2)] = local_f88.values[1].value;
          pfVar34[*(ushort *)pfVar39] = local_f88.values[2].value;
          uVar38 = uVar38 - 1;
          pfVar39 = pfVar39 + 2;
        } while (uVar38 != 0);
      }
      local_1170 = pfVar32 + 8;
      local_1208 = lVar42 + -0x20;
      local_11f8 = local_11f8 + local_f58;
      param_2 = local_1150;
      fVar49 = __real_3f800000;
    } while (local_1170 < local_fb0);
  }
  return;
}

// `scalar_deleting_destructor' @ 14c568d90

void * __thiscall
rl4::
VectorizedJointGroupQuaternionCalculationStrategy<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>
::_scalar_deleting_destructor_
          (VectorizedJointGroupQuaternionCalculationStrategy<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// SetUp @ 14c568dc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void __thiscall
`anonymous_namespace'::
QuaternionEvaluatorTest<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>_>
::SetUp(void *this)

{
  Extent *pEVar1;
  float *pfVar2;
  ushort *puVar3;
  LODRegion *pLVar4;
  longlong lVar5;
  int *piVar6;
  JointGroup<float> *pJVar7;
  MemoryResource MVar8;
  MemoryResource MVar9;
  undefined **ppuVar10;
  ulonglong uVar11;
  longlong lVar12;
  _Vector_val<std::_Simple_types<unsigned_short>_> *this_00;
  undefined **ppuVar13;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *pvVar14;
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *pvVar15;
  vector<rl4::LODRegion,pma::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>_> *pvVar16;
  longlong lVar17;
  MemoryResource MVar18;
  undefined1 auStack_268 [32];
  MemoryResource MStack_248;
  MemoryResource MStack_240;
  MemoryResource MStack_238;
  int *piStack_230;
  undefined1 auStack_228 [64];
  MemoryResource MStack_1e8;
  JointGroup<float> JStack_1e0;
  undefined1 auStack_158 [56];
  undefined8 uStack_120;
  MemoryResource MStack_118;
  undefined1 auStack_108 [56];
  undefined8 uStack_d0;
  MemoryResource MStack_c8;
  undefined **ppuStack_b8;
  undefined **ppuStack_b0;
  undefined ***pppuStack_80;
  undefined **ppuStack_78;
  undefined **ppuStack_70;
  undefined ***pppuStack_40;
  ulonglong uStack_38;
  
  uStack_38 = __security_cookie.value ^ (ulonglong)auStack_268;
  *(undefined8 *)((longlong)this + 0xd8) = 1;
  MVar18 = (MemoryResource)((longlong)this + 0x10);
  *(undefined1 *)((longlong)this + 0xe0) = 3;
  uVar11 = (longlong)rltests::qs::optimized::floatValues._Mypair._Myval2._Mylast -
           (longlong)rltests::qs::optimized::floatValues._Mypair._Myval2._Myfirst >> 5;
  pJVar7 = rl4::JointGroup<float>::JointGroup<float>(&JStack_1e0,(MemoryResource *)MVar18);
  piStack_230 = (int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9d4c)
  ;
  if ((*piStack_230 <
       `public:___cdecl_pma::impl::PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>(void)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:___cdecl_pma::impl::PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>(void)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    atexit(`pma::impl::PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>::
           PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>'::__l2::
           _dynamic_atexit_destructor_for__dmr__);
    _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  MStack_248 = (MemoryResource)
               &`public:___cdecl_pma::impl::PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>(void)___ptr64'
                ::__l2::dmr;
  if (MVar18 != (MemoryResource)0x0) {
    MStack_248 = MVar18;
  }
  MVar8 = (MemoryResource)0x0;
  MVar18 = (MemoryResource)0x0;
  MStack_240 = (MemoryResource)0x0;
  MStack_238 = (MemoryResource)0x0;
  if (uVar11 != 0) {
    if (0x1e1e1e1e1e1e1e1 < uVar11) {
                    /* WARNING: Subroutine does not return */
      std::
      vector<rl4::JointGroup<float>,pma::PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>_>
      ::_Xlength();
    }
    MVar8 = (MemoryResource)
            (**(code **)((longlong)*(MemoryResource *)MStack_248 + 8))(MStack_248,uVar11 * 0x88,8);
    MStack_238 = (MemoryResource)((longlong)MVar8 + uVar11 * 0x88);
    MVar18 = MVar8;
    MStack_240 = MVar8;
    do {
      rl4::JointGroup<float>::JointGroup<float>((JointGroup<float> *)MVar18,pJVar7);
      MVar18 = (MemoryResource)((longlong)MVar18 + 0x88);
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
  }
  rl4::JointGroup<float>::~JointGroup<float>(&JStack_1e0);
  uVar11 = 0;
  lVar5 = (longlong)MVar18 - (longlong)MVar8 >> 0x3f;
  lVar17 = ((longlong)MVar18 - (longlong)MVar8) / 0x88 + lVar5;
  if (lVar17 != lVar5) {
    lVar12 = 0;
    this_00 = (_Vector_val<std::_Simple_types<unsigned_short>_> *)((longlong)MStack_240 + 0x40);
    do {
      pvVar14 = (vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *)
                (&((rltests::qs::optimized::floatValues._Mypair._Myval2._Myfirst)->_Mypair)._Myval1.
                  field_0x0 + lVar12);
      if ((vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *)
          ((longlong)(this_00 + 0xfffffffffffffffd) + 8U) != pvVar14) {
        pfVar2 = ((_Vector_val<std::_Simple_types<float>_> *)((longlong)&pvVar14->_Mypair + 8))->
                 _Myfirst;
        std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>::
        _Assign_counted_range<float_*>
                  ((vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *)
                   ((longlong)(this_00 + 0xfffffffffffffffd) + 8U),pfVar2,
                   (longlong)*(float **)((longlong)&pvVar14->_Mypair + 0x10) - (longlong)pfVar2 >> 2
                  );
      }
      pvVar15 = (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
                 *)(&((rltests::qs::optimized::inputIndices._Mypair._Myval2._Myfirst)->_Mypair).
                     _Myval1.field_0x0 + lVar12);
      if ((vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *
          )((longlong)(this_00 + 0xfffffffffffffffe) + 0x10U) != pvVar15) {
        puVar3 = ((_Vector_val<std::_Simple_types<unsigned_short>_> *)
                 ((longlong)&pvVar15->_Mypair + 8))->_Myfirst;
        std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
        ::_Assign_counted_range<unsigned_short_*>
                  ((vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
                    *)((longlong)(this_00 + 0xfffffffffffffffe) + 0x10U),puVar3,
                   (longlong)*(ushort **)((longlong)&pvVar15->_Mypair + 0x10) - (longlong)puVar3 >>
                   1);
      }
      pvVar15 = (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
                 *)(&((rltests::qs::optimized::outputIndices._Mypair._Myval2._Myfirst
                       [*(longlong *)((longlong)this + 0xd8)]._Mypair._Myval2._Myfirst)->_Mypair).
                     _Myval1.field_0x0 + lVar12);
      if (this_00 != (_Vector_val<std::_Simple_types<unsigned_short>_> *)pvVar15) {
        puVar3 = (pvVar15->_Mypair)._Myval2._Myfirst;
        std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
        ::_Assign_counted_range<unsigned_short_*>
                  ((vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
                    *)this_00,puVar3,
                   (longlong)(pvVar15->_Mypair)._Myval2._Mylast - (longlong)puVar3 >> 1);
      }
      pvVar16 = (vector<rl4::LODRegion,pma::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>_>
                 *)(&((rltests::qs::optimized::lodRegions._Mypair._Myval2._Myfirst)->_Mypair).
                     _Myval1.field_0x0 + lVar12);
      if ((vector<rl4::LODRegion,pma::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>_> *
          )((longlong)(this_00 + 1) + 8U) != pvVar16) {
        pLVar4 = ((_Vector_val<std::_Simple_types<rl4::LODRegion>_> *)
                 ((longlong)&pvVar16->_Mypair + 8))->_Myfirst;
        std::vector<rl4::LODRegion,pma::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>_>
        ::_Assign_counted_range<rl4::LODRegion_*>
                  ((vector<rl4::LODRegion,pma::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>_>
                    *)((longlong)(this_00 + 1) + 8U),pLVar4,
                   ((longlong)*(LODRegion **)((longlong)&pvVar16->_Mypair + 0x10) - (longlong)pLVar4
                   ) / 0x18);
      }
      lVar12 = lVar12 + 0x20;
      *(uint *)&((vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
                  *)((longlong)(this_00 + 2) + 0x10))->_Mypair =
           rltests::qs::optimized::subMatrices._Mypair._Myval2._Myfirst[uVar11].cols;
      pEVar1 = rltests::qs::optimized::subMatrices._Mypair._Myval2._Myfirst + uVar11;
      uVar11 = uVar11 + 1;
      *(uint *)&((vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
                  *)((longlong)(this_00 + 2) + 0x14))->_Mypair = pEVar1->rows;
      this_00 = (_Vector_val<std::_Simple_types<unsigned_short>_> *)((longlong)(this_00 + 5) + 0x10)
      ;
    } while (uVar11 < (ulonglong)(lVar17 - lVar5));
  }
  piVar6 = piStack_230;
  ppuVar10 = (undefined **)((longlong)this + 0x10);
  if ((*piStack_230 <
       `public:___cdecl_pma::impl::PolyAllocator<rl4::VectorizedJointGroupQuaternionCalculationStrategy<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::VectorizedJointGroupQuaternionCalculationStrategy<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<rl4::VectorizedJointGroupQuaternionCalculationStrategy<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::VectorizedJointGroupQuaternionCalculationStrategy<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:___cdecl_pma::impl::PolyAllocator<rl4::VectorizedJointGroupQuaternionCalculationStrategy<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::VectorizedJointGroupQuaternionCalculationStrategy<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    atexit(`pma::impl::
           PolyAllocator<rl4::VectorizedJointGroupQuaternionCalculationStrategy<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,8,pma::DefaultMemoryResource>
           ::
           PolyAllocator<rl4::VectorizedJointGroupQuaternionCalculationStrategy<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,8,pma::DefaultMemoryResource>'
           ::__l2::_dynamic_atexit_destructor_for__dmr__);
    _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<rl4::VectorizedJointGroupQuaternionCalculationStrategy<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::VectorizedJointGroupQuaternionCalculationStrategy<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  ppuVar13 = &`public:___cdecl_pma::impl::PolyAllocator<rl4::VectorizedJointGroupQuaternionCalculationStrategy<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::VectorizedJointGroupQuaternionCalculationStrategy<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
              ::__l2::dmr;
  if (ppuVar10 != (undefined **)0x0) {
    ppuVar13 = ppuVar10;
  }
  MVar8 = (MemoryResource)(**(code **)(*ppuVar13 + 8))(ppuVar13,8,8);
  *(undefined ***)MVar8 =
       &
       ___7__VectorizedJointGroupQuaternionCalculationStrategy_MU__T256_U__T128_M_scalar_trimd___fallback_trimd__U__T128_M_scalar_3_U__QuaternionsToEulerAngles_U__ang_MUradians_impl_tdm___tdm___0A__rl4___rl4__6B_
  ;
  ppuStack_b8 = &
                ___7___Func_impl_no_alloc_V<lambda_1>__1____create___V___ManagedInstance_V__unique_ptr_U__JointGroupQuaternionCalculationStrategy_M_rl4__V__function___A6AXPEAU__JointGroupQuaternionCalculationStrategy_M_rl4___Z_std___std__U__VectorizedJointGroupQuaternionCalculationStrategy_MU__T256_U__T128_M_scalar_trimd___fallback_trimd__U__T128_M_scalar_3_U__QuaternionsToEulerAngles_U__ang_MUradians_impl_tdm___tdm___0A__rl4___rl4__U__JointGroupQuaternionCalculationStrategy_M_4__impl_pma__QEAA_AV__unique_ptr_U__JointGroupQuaternionCalculationStrategy_M_rl4__V__function___A6AXPEAU__JointGroupQuaternionCalculationStrategy_M_rl4___Z_std___std__XZ_XPEAU__JointGroupQuaternionCalculationStrategy_M_rl4___std__6B_
  ;
  pppuStack_80 = &ppuStack_b8;
  uStack_120 = (_Func_base<void,rl4::JointGroupQuaternionCalculationStrategy<float>_*> *)0x0;
  ppuStack_b0 = ppuVar13;
  uStack_120 = std::
               _Func_impl_no_alloc<`pma::impl::ManagedInstance<std::unique_ptr<rl4::JointGroupQuaternionCalculationStrategy<float>,std::function<void___cdecl(rl4::JointGroupQuaternionCalculationStrategy<float>_*)>_>,rl4::VectorizedJointGroupQuaternionCalculationStrategy<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,rl4::JointGroupQuaternionCalculationStrategy<float>_>::create<>'::__l2::<lambda_1>,void,rl4::JointGroupQuaternionCalculationStrategy<float>_*>
               ::_Move(&ppuStack_b8,auStack_158);
  if (pppuStack_80 != (undefined ***)0x0) {
    (*(code *)(*pppuStack_80)[4])(pppuStack_80,pppuStack_80 != &ppuStack_b8);
  }
  MStack_118 = MVar8;
  if ((*piVar6 < `public:___cdecl_pma::impl::PolyAllocator<rl4::QuaternionJointsEvaluator<float>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::QuaternionJointsEvaluator<float>,8,pma::DefaultMemoryResource>(void)___ptr64'
                 ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<rl4::QuaternionJointsEvaluator<float>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::QuaternionJointsEvaluator<float>,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:___cdecl_pma::impl::PolyAllocator<rl4::QuaternionJointsEvaluator<float>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::QuaternionJointsEvaluator<float>,8,pma::DefaultMemoryResource>(void)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    atexit(`pma::impl::
           PolyAllocator<rl4::QuaternionJointsEvaluator<float>,8,pma::DefaultMemoryResource>::
           PolyAllocator<rl4::QuaternionJointsEvaluator<float>,8,pma::DefaultMemoryResource>'::__l2
           ::_dynamic_atexit_destructor_for__dmr__);
    _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<rl4::QuaternionJointsEvaluator<float>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::QuaternionJointsEvaluator<float>,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  ppuVar13 = &`public:___cdecl_pma::impl::PolyAllocator<rl4::QuaternionJointsEvaluator<float>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::QuaternionJointsEvaluator<float>,8,pma::DefaultMemoryResource>(void)___ptr64'
              ::__l2::dmr;
  if (ppuVar10 != (undefined **)0x0) {
    ppuVar13 = ppuVar10;
  }
  MVar9 = (MemoryResource)(**(code **)(*ppuVar13 + 8))(ppuVar13,0xb0,8);
  MVar8 = MStack_118;
  MStack_118 = (MemoryResource)0x0;
  std::function<void___cdecl(rl4::JointGroupQuaternionCalculationStrategy<float>_*)>::
  function<void___cdecl(rl4::JointGroupQuaternionCalculationStrategy<float>_*)>
            ((function<void___cdecl(rl4::JointGroupQuaternionCalculationStrategy<float>_*)> *)
             auStack_228,
             (function<void___cdecl(rl4::JointGroupQuaternionCalculationStrategy<float>_*)> *)
             auStack_158);
  MStack_1e8 = (MemoryResource)0x0;
  *(undefined ***)MVar9 = &___7__QuaternionJointsEvaluator_M_rl4__6B_;
  std::function<void___cdecl(rl4::JointGroupQuaternionCalculationStrategy<float>_*)>::
  function<void___cdecl(rl4::JointGroupQuaternionCalculationStrategy<float>_*)>
            ((function<void___cdecl(rl4::JointGroupQuaternionCalculationStrategy<float>_*)> *)
             ((longlong)MVar9 + 8),
             (function<void___cdecl(rl4::JointGroupQuaternionCalculationStrategy<float>_*)> *)
             auStack_228);
  *(MemoryResource *)((longlong)MVar9 + 0x48) = MVar8;
  *(MemoryResource *)((longlong)MVar9 + 0x50) = MStack_248;
  *(MemoryResource *)((longlong)MVar9 + 0x58) = MStack_240;
  *(MemoryResource *)((longlong)MVar9 + 0x68) = MStack_238;
  *(MemoryResource *)((longlong)MVar9 + 0x60) = MVar18;
  *(MemoryResource *)((longlong)MVar9 + 0xa8) = (MemoryResource)0x0;
  if (MStack_1e8 != (MemoryResource)0x0) {
    MStack_248 = MStack_1e8;
    if ((longlong *)auStack_228._56_8_ == (longlong *)0x0) {
      std::_Xbad_function_call();
      return;
    }
    (**(code **)(*(longlong *)auStack_228._56_8_ + 0x10))(auStack_228._56_8_,&MStack_248);
  }
  if ((longlong *)auStack_228._56_8_ != (longlong *)0x0) {
    (**(code **)(*(longlong *)auStack_228._56_8_ + 0x20))
              (auStack_228._56_8_,(undefined1 *)auStack_228._56_8_ != auStack_228);
  }
  ppuStack_78 = &
                ___7___Func_impl_no_alloc_V<lambda_1>__1____create_V__unique_ptr_U__JointGroupQuaternionCalculationStrategy_M_rl4__V__function___A6AXPEAU__JointGroupQuaternionCalculationStrategy_M_rl4___Z_std___std__V__vector_U__JointGroup_M_rl4__V__PolyAllocator_U__JointGroup_M_rl4___07VDefaultMemoryResource_pma___pma___2___TPEAVAlignedMemoryResource_pma_____ManagedInstance_V__unique_ptr_VJointsEvaluator_rl4__V__function___A6AXPEAVJointsEvaluator_rl4___Z_std___std__V__QuaternionJointsEvaluator_M_rl4__VJointsEvaluator_4__impl_pma__QEAA_AV__unique_ptr_VJointsEvaluator_rl4__V__function___A6AXPEAVJointsEvaluator_rl4___Z_std___std____QEAV__unique_ptr_U__JointGroupQuaternionCalculationStrategy_M_rl4__V__function___A6AXPEAU__JointGroupQuaternionCalculationStrategy_M_rl4___Z_std___6___QEAV__vector_U__JointGroup_M_rl4__V__PolyAllocator_U__JointGroup_M_rl4___07VDefaultMemoryResource_pma___pma___6___QEA__T__QEAPEAVAlignedMemoryResource_4__Z_XPEAVJointsEvaluator_rl4___std__6B_
  ;
  pppuStack_40 = &ppuStack_78;
  uStack_d0 = (_Func_base<void,rl4::JointsEvaluator_*> *)0x0;
  ppuStack_70 = ppuVar13;
  uStack_d0 = std::
              _Func_impl_no_alloc<`pma::impl::ManagedInstance<std::unique_ptr<rl4::JointsEvaluator,std::function<void___cdecl(rl4::JointsEvaluator_*)>_>,rl4::QuaternionJointsEvaluator<float>,rl4::JointsEvaluator>::create<std::unique_ptr<rl4::JointGroupQuaternionCalculationStrategy<float>,std::function<void___cdecl(rl4::JointGroupQuaternionCalculationStrategy<float>_*)>_>,std::vector<rl4::JointGroup<float>,pma::PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>_>,std::nullptr_t,pma::AlignedMemoryResource_*>'::__l2::<lambda_1>,void,rl4::JointsEvaluator_*>
              ::_Move(&ppuStack_78,auStack_108);
  if (pppuStack_40 != (undefined ***)0x0) {
    (*(code *)(*pppuStack_40)[4])(pppuStack_40,pppuStack_40 != &ppuStack_78);
  }
  MStack_c8 = MVar9;
  std::unique_ptr<rl4::JointsEvaluator,std::function<void___cdecl(rl4::JointsEvaluator_*)>_>::
  operator=<std::function<void___cdecl(rl4::JointsEvaluator_*)>,0>
            ((unique_ptr<rl4::JointsEvaluator,std::function<void___cdecl(rl4::JointsEvaluator_*)>_>
              *)((longlong)this + 0x90),
             (unique_ptr<rl4::JointsEvaluator,std::function<void___cdecl(rl4::JointsEvaluator_*)>_>
              *)auStack_108);
  if (MStack_c8 != (MemoryResource)0x0) {
    MStack_248 = MStack_c8;
    if (uStack_d0 == (_Func_base<void,rl4::JointsEvaluator_*> *)0x0) {
      std::_Xbad_function_call();
      return;
    }
    (**(code **)((longlong)*uStack_d0 + 0x10))(uStack_d0,&MStack_248);
  }
  if (uStack_d0 != (_Func_base<void,rl4::JointsEvaluator_*> *)0x0) {
    (**(code **)((longlong)*uStack_d0 + 0x20))
              (uStack_d0,uStack_d0 != (_Func_base<void,rl4::JointsEvaluator_*> *)auStack_108);
  }
  if (MStack_118 != (MemoryResource)0x0) {
    MStack_248 = MStack_118;
    if (uStack_120 == (_Func_base<void,rl4::JointGroupQuaternionCalculationStrategy<float>_*> *)0x0)
    {
      std::_Xbad_function_call();
      return;
    }
    (**(code **)((longlong)*uStack_120 + 0x10))(uStack_120,&MStack_248);
  }
  if (uStack_120 != (_Func_base<void,rl4::JointGroupQuaternionCalculationStrategy<float>_*> *)0x0) {
    (**(code **)((longlong)*uStack_120 + 0x20))
              (uStack_120,
               uStack_120 !=
               (_Func_base<void,rl4::JointGroupQuaternionCalculationStrategy<float>_*> *)auStack_158
              );
  }
  return;
}

// `scalar_deleting_destructor' @ 14c568dd0

void * __thiscall
`anonymous_namespace'::
QuaternionEvaluatorTest<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  ~QuaternionEvaluatorTest<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>_>
            (this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe8);
  }
  return this;
}

// TestBody @ 14c568e10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014c568fb1) */
/* WARNING: Removing unreachable block (ram,0x00014c568fb8) */
/* WARNING: Removing unreachable block (ram,0x00014c568fbc) */
/* WARNING: Removing unreachable block (ram,0x00014c568fc1) */

void __thiscall
QuaternionEvaluatorTest_EvaluatePerLOD_Test<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>_>
::TestBody(QuaternionEvaluatorTest_EvaluatePerLOD_Test<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>_>
           *this)

{
  undefined1 *puVar1;
  vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *pvVar2;
  double dVar3;
  unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  uVar4;
  Message *pMVar5;
  AssertHelper *this_00;
  float *pfVar6;
  char *pcVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  ushort uVar10;
  undefined1 auStackY_1d8 [32];
  AssertHelper local_198;
  longlong *local_190;
  AssertionResult local_188;
  unique_ptr<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>_>
  local_178;
  ArrayView<float> local_170;
  void *local_160 [3];
  undefined1 local_148 [96];
  longlong *local_e8;
  longlong local_d8 [7];
  longlong *local_a0;
  longlong *local_98;
  undefined1 local_88 [56];
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  puVar1 = &this->field_0x10;
  pvVar2 = rltests::qs::output::valuesPerLODPerConfig._Mypair._Myval2._Myfirst
           [*(longlong *)&this->field_0xd8]._Mypair._Myval2._Myfirst;
  rl4::CPUJointsOutputInstance::CPUJointsOutputInstance
            ((CPUJointsOutputInstance *)local_148,
             (ushort)((longlong)
                      (ulonglong)
                      (uint)(*(int *)&(pvVar2->_Mypair)._Myval2._Mylast -
                            *(int *)&(pvVar2->_Mypair)._Myval2._Myfirst) >> 2),Vector,
             this->field_0xe0,Vector,(MemoryResource *)puVar1);
  rl4::CPUJointsOutputInstance::getOutputBuffer((CPUJointsOutputInstance *)local_148,&local_170);
  uVar10 = 0;
  ControlsFactory::getInstanceFactory
            ((function<std::unique_ptr<rl4::ControlsInputInstance,std::function<void___cdecl(rl4::ControlsInputInstance_*)>_>___cdecl(av::ArrayView<rl4::ControlInitializer_const_>,pma::MemoryResource_*)>
              *)local_88,0,
             (ushort)((longlong)rltests::qs::input::values._Mypair._Myval2._Mylast -
                      (longlong)rltests::qs::input::values._Mypair._Myval2._Myfirst >> 2),0,0,0);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:___cdecl_pma::impl::PolyAllocator<rl4::ControlInitializer,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::ControlInitializer,8,pma::DefaultMemoryResource>(void)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<rl4::ControlInitializer,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::ControlInitializer,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:___cdecl_pma::impl::PolyAllocator<rl4::ControlInitializer,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::ControlInitializer,8,pma::DefaultMemoryResource>(void)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    atexit(`pma::impl::PolyAllocator<rl4::ControlInitializer,8,pma::DefaultMemoryResource>::
           PolyAllocator<rl4::ControlInitializer,8,pma::DefaultMemoryResource>'::__l2::
           _dynamic_atexit_destructor_for__dmr__);
    _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<rl4::ControlInitializer,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::ControlInitializer,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  local_188.success_ = false;
  local_188._1_7_ = 0;
  local_188.message_._Mypair._Myval2 =
       (_Compressed_pair<std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_*,1>
        )(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
  local_198.data_ = (AssertHelperData *)puVar1;
  if (local_50 == (longlong *)0x0) {
    std::_Xbad_function_call();
    return;
  }
  (**(code **)(*local_50 + 0x10))(local_50,local_d8,&local_188,&local_198);
  (**(code **)(*local_98 + 0x28))(local_98,local_160);
  memmove(local_160[0],rltests::qs::input::values._Mypair._Myval2._Myfirst,
          (longlong)rltests::qs::input::values._Mypair._Myval2._Mylast -
          (longlong)rltests::qs::input::values._Mypair._Myval2._Myfirst);
  dVar3 = __real_3f60624de0000000;
  if (rltests::qs::unoptimized::lodCount != 0) {
    do {
      uVar9 = 0;
      memset(local_170.ptr,0,local_170.sz * 4);
      (**(code **)(**(longlong **)&this->field_0xd0 + 0x20))
                (*(longlong **)&this->field_0xd0,local_98,local_148,uVar10);
      pvVar2 = rltests::qs::output::valuesPerLODPerConfig._Mypair._Myval2._Myfirst
               [*(longlong *)&this->field_0xd8]._Mypair._Myval2._Myfirst;
      pfVar6 = pvVar2[uVar10]._Mypair._Myval2._Myfirst;
      if ((longlong)pvVar2[uVar10]._Mypair._Myval2._Mylast - (longlong)pfVar6 >> 2 != 0) {
        do {
          testing::internal::DoubleNearPredFormat
                    (&local_188,"outputBuffer[i]","expected[i]","threshold",
                     (double)local_170.ptr[uVar9],(double)pfVar6[uVar9],dVar3);
          uVar4._Mypair._Myval2 = local_188.message_._Mypair._Myval2;
          if (local_188.success_ == false) {
            pMVar5 = (Message *)testing::Message::Message((Message *)&local_178);
            if (local_188.message_._Mypair._Myval2 ==
                (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
              pcVar7 = "";
            }
            else {
              pcVar7 = (char *)local_188.message_._Mypair._Myval2;
              if (0xf < *(ulong64 *)((longlong)local_188.message_._Mypair._Myval2 + 0x18)) {
                pcVar7 = *(char **)local_188.message_._Mypair._Myval2;
              }
            }
            this_00 = (AssertHelper *)
                      testing::internal::AssertHelper::AssertHelper
                                (&local_198,kFatalFailure,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\rltests\\joints\\quaternions\\TestQuaternionEvaluator.cpp"
                                 ,0xa9,pcVar7);
            testing::internal::AssertHelper::operator=(this_00,pMVar5);
            testing::internal::AssertHelper::~AssertHelper(&local_198);
            if (local_178._Mypair._Myval2 !=
                (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
              puVar8 = (undefined8 *)
                       ((longlong)*(int *)(*(longlong *)local_178._Mypair._Myval2 + 4) +
                       (longlong)local_178._Mypair._Myval2);
              (**(code **)*puVar8)(puVar8,1);
            }
            uVar4._Mypair._Myval2 = local_188.message_._Mypair._Myval2;
            if (local_188.message_._Mypair._Myval2 !=
                (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
              std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                        ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                         local_188.message_._Mypair._Myval2);
              ::operator_delete((void *)uVar4._Mypair._Myval2,0x20);
            }
            if (local_98 != (longlong *)0x0) {
              local_190 = local_98;
              if (local_a0 == (longlong *)0x0) {
                std::_Xbad_function_call();
                return;
              }
              (**(code **)(*local_a0 + 0x10))(local_a0,&local_190);
            }
            if (local_a0 == (longlong *)0x0) goto LAB_14c569105;
            (**(code **)(*local_a0 + 0x20))(local_a0,local_a0 != local_d8);
            goto LAB_14c569101;
          }
          if (local_188.message_._Mypair._Myval2 !=
              (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                       local_188.message_._Mypair._Myval2);
            ::operator_delete((void *)uVar4._Mypair._Myval2,0x20);
          }
          pfVar6 = pvVar2[uVar10]._Mypair._Myval2._Myfirst;
          uVar9 = uVar9 + 1;
        } while (uVar9 < (ulonglong)
                         ((longlong)pvVar2[uVar10]._Mypair._Myval2._Mylast - (longlong)pfVar6 >> 2))
        ;
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 < rltests::qs::unoptimized::lodCount);
  }
  if (local_98 != (longlong *)0x0) {
    local_190 = local_98;
    if (local_a0 == (longlong *)0x0) {
      std::_Xbad_function_call();
      return;
    }
    (**(code **)(*local_a0 + 0x10))(local_a0,&local_190);
  }
  if (local_a0 != (longlong *)0x0) {
    (**(code **)(*local_a0 + 0x20))(local_a0,local_a0 != local_d8);
LAB_14c569101:
    local_a0 = (longlong *)0x0;
  }
LAB_14c569105:
  if (local_50 != (longlong *)0x0) {
    (**(code **)(*local_50 + 0x20))(local_50,local_50 != (longlong *)local_88);
    local_50 = (longlong *)0x0;
  }
  if (local_e8 != (longlong *)0x0) {
    (**(code **)(*local_e8 + 0x20))(local_e8,local_e8 != (longlong *)(local_148 + 0x28));
    local_e8 = (longlong *)0x0;
  }
  if ((float *)local_148._16_8_ != (float *)0x0) {
    (**(code **)(*(longlong *)local_148._8_8_ + 0x10))
              (local_148._8_8_,local_148._16_8_,
               local_148._32_8_ - local_148._16_8_ & 0xfffffffffffffffc,0x40);
    local_148._32_8_ = (float *)0x0;
    local_148._16_8_ = (float *)0x0;
    local_148._24_8_ = (float *)0x0;
  }
  rl4::JointsOutputInstance::~JointsOutputInstance((JointsOutputInstance *)local_148);
  return;
}

// `scalar_deleting_destructor' @ 14c569300

void * __thiscall
QuaternionEvaluatorTest_EvaluatePerLOD_Test<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>_>
::_scalar_deleting_destructor_
          (QuaternionEvaluatorTest_EvaluatePerLOD_Test<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>_>
           *this,uint param_1)

{
  ::`anonymous_namespace'::
  QuaternionEvaluatorTest<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>_>
  ::
  ~QuaternionEvaluatorTest<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>_>
            (this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe8);
  }
  return this;
}

// CreateTest @ 14c569340

Test * __thiscall
testing::internal::
TestFactoryImpl<QuaternionEvaluatorTest_EvaluatePerLOD_Test<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>_>_>
::CreateTest(TestFactoryImpl<QuaternionEvaluatorTest_EvaluatePerLOD_Test<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>_>_>
             *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0xe8);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ =
         (longlong)
         &QuaternionEvaluatorTest<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>_>
          ::_vftable_;
    this_00[1]._padding_ = (longlong)&pma::AlignedMemoryResource::_vftable_;
    rltests::qs::QuaternionReader::QuaternionReader
              ((QuaternionReader *)&this_00[1].gtest_flag_saver_);
    this_00[0xc].gtest_flag_saver_._Mypair._Myval2 = (GTestFlagSaver *)0x0;
    this_00->_padding_ =
         (longlong)
         &
         ___7__QuaternionEvaluatorTest_EvaluatePerLOD_Test_V__tuple_MU__T256_U__T128_M_scalar_trimd___fallback_trimd__U__T128_M_scalar_3_U__QuaternionsToEulerAngles_U__ang_MUradians_impl_tdm___tdm___0A__rl4___std____6B_
    ;
    this_00[0xd]._padding_ = 0;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c5693c0

void * __thiscall
testing::internal::
TestFactoryImpl<QuaternionEvaluatorTest_EvaluatePerLOD_Test<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>_>_>
::_scalar_deleting_destructor_
          (TestFactoryImpl<QuaternionEvaluatorTest_EvaluatePerLOD_Test<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>_>_>
           *this,uint param_1)

{
  *this = (TestFactoryImpl<QuaternionEvaluatorTest_EvaluatePerLOD_Test<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>_>_>
           )&___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// operator=<std::function<void___cdecl(rl4::JointsEvaluator_*)>,0> @ 14c569400

unique_ptr<rl4::JointsEvaluator,std::function<void___cdecl(rl4::JointsEvaluator_*)>_> * __thiscall
std::unique_ptr<rl4::JointsEvaluator,std::function<void___cdecl(rl4::JointsEvaluator_*)>_>::
operator=<std::function<void___cdecl(rl4::JointsEvaluator_*)>,0>
          (unique_ptr<rl4::JointsEvaluator,std::function<void___cdecl(rl4::JointsEvaluator_*)>_>
           *this,unique_ptr<rl4::JointsEvaluator,std::function<void___cdecl(rl4::JointsEvaluator_*)>_>
                 *param_1)

{
  JointsEvaluator *pJVar1;
  JointsEvaluator *pJVar2;
  longlong *plVar3;
  unique_ptr<rl4::JointsEvaluator,std::function<void___cdecl(rl4::JointsEvaluator_*)>_> *puVar4;
  unique_ptr<rl4::JointsEvaluator,std::function<void___cdecl(rl4::JointsEvaluator_*)>_>
  *extraout_RAX;
  JointsEvaluator *local_res8;
  
  pJVar1 = (param_1->_Mypair)._Myval2;
  (param_1->_Mypair)._Myval2 = (JointsEvaluator *)0x0;
  pJVar2 = (this->_Mypair)._Myval2;
  (this->_Mypair)._Myval2 = pJVar1;
  if (pJVar2 != (JointsEvaluator *)0x0) {
    plVar3 = *(longlong **)&(this->_Mypair)._Myval1.field_0x38;
    local_res8 = pJVar2;
    if (plVar3 == (longlong *)0x0) {
      _Xbad_function_call();
      return extraout_RAX;
    }
    (**(code **)(*plVar3 + 0x10))(plVar3,&local_res8);
  }
  if (this != param_1) {
    puVar4 = *(unique_ptr<rl4::JointsEvaluator,std::function<void___cdecl(rl4::JointsEvaluator_*)>_>
               **)&(this->_Mypair)._Myval1.field_0x38;
    if (puVar4 != (unique_ptr<rl4::JointsEvaluator,std::function<void___cdecl(rl4::JointsEvaluator_*)>_>
                   *)0x0) {
      (**(code **)(*(longlong *)&(puVar4->_Mypair)._Myval1 + 0x20))(puVar4,puVar4 != this);
      *(undefined8 *)&(this->_Mypair)._Myval1.field_0x38 = 0;
    }
    _Func_class<void,rl4::JointsEvaluator_*>::_Reset_move
              ((_Func_class<void,rl4::JointsEvaluator_*> *)this,
               (_Func_class<void,rl4::JointsEvaluator_*> *)param_1);
  }
  return this;
}

// operator()<unsigned_int_&,unsigned_int_&,unsigned_int_&> @ 14c5694a0

void __thiscall
terse::Archive<terse::BinaryInputArchive<trio::BoundedIOStream,unsigned_int,unsigned_int,1>_>::
operator()<unsigned_int_&,unsigned_int_&,unsigned_int_&>
          (Archive<terse::BinaryInputArchive<trio::BoundedIOStream,unsigned_int,unsigned_int,1>_>
           *this,uint *param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)&this->impl->field_0x10;
  (**(code **)(*(longlong *)(lVar2 + 0x10) + 8))(lVar2 + 0x10,param_1,4);
  uVar1 = *param_1;
  *param_1 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  lVar2 = *(longlong *)&this->impl->field_0x10;
  (**(code **)(*(longlong *)(lVar2 + 0x10) + 8))(lVar2 + 0x10,param_2,4);
  uVar1 = *param_2;
  *param_2 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  lVar2 = *(longlong *)&this->impl->field_0x10;
  (**(code **)(*(longlong *)(lVar2 + 0x10) + 8))(lVar2 + 0x10,param_3,4);
  uVar1 = *param_3;
  *param_3 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  return;
}

// operator()<unsigned_int_&,unsigned_int_&,unsigned_int_&> @ 14c569540

void __thiscall
terse::Archive<terse::BinaryOutputArchive<trio::BoundedIOStream,unsigned_int,unsigned_int,1>_>::
operator()<unsigned_int_&,unsigned_int_&,unsigned_int_&>
          (Archive<terse::BinaryOutputArchive<trio::BoundedIOStream,unsigned_int,unsigned_int,1>_>
           *this,uint *param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  longlong lVar2;
  uint local_res8 [2];
  
  uVar1 = *param_1;
  local_res8[0] = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  lVar2 = *(longlong *)&this->impl->field_0x10;
  (**(code **)(*(longlong *)(lVar2 + 0x18) + 8))(lVar2 + 0x18,local_res8,4);
  uVar1 = *param_2;
  local_res8[0] = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  lVar2 = *(longlong *)&this->impl->field_0x10;
  (**(code **)(*(longlong *)(lVar2 + 0x18) + 8))(lVar2 + 0x18,local_res8,4);
  uVar1 = *param_3;
  local_res8[0] = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  lVar2 = *(longlong *)&this->impl->field_0x10;
  (**(code **)(*(longlong *)(lVar2 + 0x18) + 8))(lVar2 + 0x18,local_res8,4);
  return;
}

// GenerateNames<testing::internal::DefaultNameGenerator,testing::internal::Types4<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>,std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>_>_> @ 14c5695e0

vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
* __cdecl testing::internal::
          GenerateNames<testing::internal::DefaultNameGenerator,testing::internal::Types4<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>,std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>_>_>
                    (vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
                     *__return_storage_ptr__)

{
  Types4<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>,std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>_>
  local_res8;
  
  (__return_storage_ptr__->_Mypair)._Myval2._Myfirst =
       (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
  (__return_storage_ptr__->_Mypair)._Myval2._Mylast =
       (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
  (__return_storage_ptr__->_Mypair)._Myval2._Myend =
       (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
  GenerateNamesRecursively<testing::internal::DefaultNameGenerator,testing::internal::Types4<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>,std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>_>_>
            (local_res8,__return_storage_ptr__,0);
  return __return_storage_ptr__;
}

// GenerateNamesRecursively<testing::internal::DefaultNameGenerator,testing::internal::Types1<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>_>_> @ 14c569620

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
testing::internal::
GenerateNamesRecursively<testing::internal::DefaultNameGenerator,testing::internal::Types1<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>_>_>
          (Types1<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>_>
           param_1,vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
                   *param_2,int param_3)

{
  basic_string<char,std::char_traits<char>,std::allocator<char>_> **ppbVar1;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar2;
  void *pvVar3;
  ulonglong uVar4;
  Message *this;
  undefined8 *puVar5;
  void *pvVar6;
  ulong64 uVar7;
  undefined1 auStackY_68 [32];
  _Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
  local_38;
  _Bxty local_30;
  ulong64 local_20;
  ulong64 uStack_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_68;
  this = (Message *)testing::Message::Message((Message *)&local_38);
  std::basic_ostream<char,std::char_traits<char>_>::operator<<
            ((basic_ostream<char,std::char_traits<char>_> *)
             &((this->ss_)._Mypair._Myval2)->field_0x10,param_3);
  testing::Message::GetString
            (this,(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_30);
  if (local_38._Myval2 !=
      (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    puVar5 = (undefined8 *)
             ((longlong)&(local_38._Myval2)->field_0x0 +
             (longlong)*(int *)(*(longlong *)local_38._Myval2 + 4));
    (**(code **)*puVar5)(puVar5,1);
  }
  pbVar2 = (param_2->_Mypair)._Myval2._Mylast;
  if (pbVar2 == (param_2->_Mypair)._Myval2._Myend) {
    std::
    vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
    ::_Emplace_reallocate<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
              (param_2,pbVar2,
               (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_30);
  }
  else {
    (pbVar2->_Mypair)._Myval2._Bx._Ptr = (char *)0x0;
    *(undefined8 *)((longlong)&(pbVar2->_Mypair)._Myval2._Bx + 8) = 0;
    (pbVar2->_Mypair)._Myval2._Mysize = 0;
    (pbVar2->_Mypair)._Myval2._Myres = 0;
    (pbVar2->_Mypair)._Myval2._Bx._Ptr = (char *)CONCAT71(local_30._1_7_,local_30._Buf[0]);
    *(undefined8 *)((longlong)&(pbVar2->_Mypair)._Myval2._Bx + 8) = local_30._8_8_;
    uVar4 = _UNK_15076add8;
    uVar7 = ___xmm_000000000000000f0000000000000000;
    (pbVar2->_Mypair)._Myval2._Mysize = local_20;
    (pbVar2->_Mypair)._Myval2._Myres = uStack_18;
    ppbVar1 = &(param_2->_Mypair)._Myval2._Mylast;
    *ppbVar1 = *ppbVar1 + 1;
    local_20 = uVar7;
    uStack_18 = uVar4;
    local_30._Buf[0] = '\0';
  }
  if (0xf < uStack_18) {
    pvVar3 = (void *)CONCAT71(local_30._1_7_,local_30._Buf[0]);
    uVar7 = uStack_18 + 1;
    pvVar6 = pvVar3;
    if (0xfff < uVar7) {
      pvVar6 = *(void **)((longlong)pvVar3 + -8);
      uVar7 = uStack_18 + 0x28;
      if (0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)pvVar6))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete(pvVar6,uVar7);
  }
  return;
}

// GenerateNamesRecursively<testing::internal::DefaultNameGenerator,testing::internal::Types2<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>_>_> @ 14c569760

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
testing::internal::
GenerateNamesRecursively<testing::internal::DefaultNameGenerator,testing::internal::Types2<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>_>_>
          (Types2<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>_>
           param_1,vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
                   *param_2,int param_3)

{
  basic_string<char,std::char_traits<char>,std::allocator<char>_> **ppbVar1;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar2;
  void *pvVar3;
  ulonglong uVar4;
  Message *pMVar5;
  undefined8 *puVar6;
  void *pvVar7;
  ulong64 uVar8;
  undefined1 auStackY_78 [32];
  unique_ptr<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>_>
  local_48;
  _Bxty local_40;
  ulong64 local_30;
  ulong64 uStack_28;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_78;
  pMVar5 = (Message *)testing::Message::Message((Message *)&local_48);
  std::basic_ostream<char,std::char_traits<char>_>::operator<<
            ((basic_ostream<char,std::char_traits<char>_> *)
             &((pMVar5->ss_)._Mypair._Myval2)->field_0x10,param_3);
  testing::Message::GetString
            (pMVar5,(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_40);
  if (local_48._Mypair._Myval2 !=
      (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    puVar6 = (undefined8 *)
             ((longlong)local_48._Mypair._Myval2 +
             (longlong)*(int *)(*(longlong *)local_48._Mypair._Myval2 + 4));
    (**(code **)*puVar6)(puVar6,1);
  }
  pbVar2 = (param_2->_Mypair)._Myval2._Mylast;
  if (pbVar2 == (param_2->_Mypair)._Myval2._Myend) {
    std::
    vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
    ::_Emplace_reallocate<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
              (param_2,pbVar2,
               (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_40);
  }
  else {
    (pbVar2->_Mypair)._Myval2._Bx._Ptr = (char *)0x0;
    *(undefined8 *)((longlong)&(pbVar2->_Mypair)._Myval2._Bx + 8) = 0;
    (pbVar2->_Mypair)._Myval2._Mysize = 0;
    (pbVar2->_Mypair)._Myval2._Myres = 0;
    (pbVar2->_Mypair)._Myval2._Bx._Ptr = (char *)CONCAT71(local_40._1_7_,local_40._Buf[0]);
    *(undefined8 *)((longlong)&(pbVar2->_Mypair)._Myval2._Bx + 8) = local_40._8_8_;
    uVar4 = _UNK_15076add8;
    uVar8 = ___xmm_000000000000000f0000000000000000;
    (pbVar2->_Mypair)._Myval2._Mysize = local_30;
    (pbVar2->_Mypair)._Myval2._Myres = uStack_28;
    ppbVar1 = &(param_2->_Mypair)._Myval2._Mylast;
    *ppbVar1 = *ppbVar1 + 1;
    local_30 = uVar8;
    uStack_28 = uVar4;
    local_40._Buf[0] = '\0';
  }
  if (0xf < uStack_28) {
    pvVar3 = (void *)CONCAT71(local_40._1_7_,local_40._Buf[0]);
    uVar8 = uStack_28 + 1;
    pvVar7 = pvVar3;
    if (0xfff < uVar8) {
      pvVar7 = *(void **)((longlong)pvVar3 + -8);
      uVar8 = uStack_28 + 0x28;
      if (0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)pvVar7))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete(pvVar7,uVar8);
  }
  pMVar5 = (Message *)testing::Message::Message((Message *)&local_48);
  std::basic_ostream<char,std::char_traits<char>_>::operator<<
            ((basic_ostream<char,std::char_traits<char>_> *)
             &((pMVar5->ss_)._Mypair._Myval2)->field_0x10,param_3 + 1);
  testing::Message::GetString
            (pMVar5,(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_40);
  if (local_48._Mypair._Myval2 !=
      (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    puVar6 = (undefined8 *)
             ((longlong)*(int *)(*(longlong *)local_48._Mypair._Myval2 + 4) +
             (longlong)local_48._Mypair._Myval2);
    (**(code **)*puVar6)(puVar6,1);
  }
  pbVar2 = (param_2->_Mypair)._Myval2._Mylast;
  if (pbVar2 == (param_2->_Mypair)._Myval2._Myend) {
    std::
    vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
    ::_Emplace_reallocate<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
              (param_2,pbVar2,
               (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_40);
  }
  else {
    (pbVar2->_Mypair)._Myval2._Bx._Ptr = (char *)0x0;
    *(undefined8 *)((longlong)&(pbVar2->_Mypair)._Myval2._Bx + 8) = 0;
    (pbVar2->_Mypair)._Myval2._Mysize = 0;
    (pbVar2->_Mypair)._Myval2._Myres = 0;
    (pbVar2->_Mypair)._Myval2._Bx._Ptr = (char *)CONCAT71(local_40._1_7_,local_40._Buf[0]);
    *(undefined8 *)((longlong)&(pbVar2->_Mypair)._Myval2._Bx + 8) = local_40._8_8_;
    uVar4 = _UNK_15076add8;
    uVar8 = ___xmm_000000000000000f0000000000000000;
    (pbVar2->_Mypair)._Myval2._Mysize = local_30;
    (pbVar2->_Mypair)._Myval2._Myres = uStack_28;
    ppbVar1 = &(param_2->_Mypair)._Myval2._Mylast;
    *ppbVar1 = *ppbVar1 + 1;
    local_30 = uVar8;
    uStack_28 = uVar4;
    local_40._Buf[0] = '\0';
  }
  if (0xf < uStack_28) {
    pvVar3 = (void *)CONCAT71(local_40._1_7_,local_40._Buf[0]);
    uVar8 = uStack_28 + 1;
    pvVar7 = pvVar3;
    if (0xfff < uVar8) {
      pvVar7 = *(void **)((longlong)pvVar3 + -8);
      uVar8 = uStack_28 + 0x28;
      if (0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)pvVar7))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete(pvVar7,uVar8);
  }
  return;
}

// GenerateNamesRecursively<testing::internal::DefaultNameGenerator,testing::internal::Types3<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>,std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>_>_> @ 14c569980

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
testing::internal::
GenerateNamesRecursively<testing::internal::DefaultNameGenerator,testing::internal::Types3<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>,std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>_>_>
          (Types3<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>,std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>_>
           param_1,vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
                   *param_2,int param_3)

{
  basic_string<char,std::char_traits<char>,std::allocator<char>_> **ppbVar1;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar2;
  void *pvVar3;
  ulonglong uVar4;
  Message *this;
  undefined8 *puVar5;
  void *pvVar6;
  ulong64 uVar7;
  undefined1 auStackY_78 [32];
  Types2<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>_>
  local_48;
  _Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
  local_40;
  _Bxty local_38;
  ulong64 local_28;
  ulong64 uStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_78;
  this = (Message *)testing::Message::Message((Message *)&local_40);
  std::basic_ostream<char,std::char_traits<char>_>::operator<<
            ((basic_ostream<char,std::char_traits<char>_> *)
             &((this->ss_)._Mypair._Myval2)->field_0x10,param_3);
  testing::Message::GetString
            (this,(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_38);
  if (local_40._Myval2 !=
      (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    puVar5 = (undefined8 *)
             ((longlong)&(local_40._Myval2)->field_0x0 +
             (longlong)*(int *)(*(longlong *)local_40._Myval2 + 4));
    (**(code **)*puVar5)(puVar5,1);
  }
  pbVar2 = (param_2->_Mypair)._Myval2._Mylast;
  if (pbVar2 == (param_2->_Mypair)._Myval2._Myend) {
    std::
    vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
    ::_Emplace_reallocate<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
              (param_2,pbVar2,
               (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_38);
  }
  else {
    (pbVar2->_Mypair)._Myval2._Bx._Ptr = (char *)0x0;
    *(undefined8 *)((longlong)&(pbVar2->_Mypair)._Myval2._Bx + 8) = 0;
    (pbVar2->_Mypair)._Myval2._Mysize = 0;
    (pbVar2->_Mypair)._Myval2._Myres = 0;
    (pbVar2->_Mypair)._Myval2._Bx._Ptr = (char *)CONCAT71(local_38._1_7_,local_38._Buf[0]);
    *(undefined8 *)((longlong)&(pbVar2->_Mypair)._Myval2._Bx + 8) = local_38._8_8_;
    uVar4 = _UNK_15076add8;
    uVar7 = ___xmm_000000000000000f0000000000000000;
    (pbVar2->_Mypair)._Myval2._Mysize = local_28;
    (pbVar2->_Mypair)._Myval2._Myres = uStack_20;
    ppbVar1 = &(param_2->_Mypair)._Myval2._Mylast;
    *ppbVar1 = *ppbVar1 + 1;
    local_28 = uVar7;
    uStack_20 = uVar4;
    local_38._Buf[0] = '\0';
  }
  if (0xf < uStack_20) {
    pvVar3 = (void *)CONCAT71(local_38._1_7_,local_38._Buf[0]);
    uVar7 = uStack_20 + 1;
    pvVar6 = pvVar3;
    if (0xfff < uVar7) {
      pvVar6 = *(void **)((longlong)pvVar3 + -8);
      uVar7 = uStack_20 + 0x28;
      if (0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)pvVar6))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete(pvVar6,uVar7);
  }
  GenerateNamesRecursively<testing::internal::DefaultNameGenerator,testing::internal::Types2<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>_>_>
            (local_48,param_2,param_3 + 1);
  return;
}

// GenerateNamesRecursively<testing::internal::DefaultNameGenerator,testing::internal::Types4<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>,std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>_>_> @ 14c569ad0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
testing::internal::
GenerateNamesRecursively<testing::internal::DefaultNameGenerator,testing::internal::Types4<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>,std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>_>_>
          (Types4<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>,std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>_>
           param_1,vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
                   *param_2,int param_3)

{
  basic_string<char,std::char_traits<char>,std::allocator<char>_> **ppbVar1;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar2;
  void *pvVar3;
  ulonglong uVar4;
  Message *pMVar5;
  undefined8 *puVar6;
  void *pvVar7;
  ulong64 uVar8;
  undefined1 auStackY_88 [32];
  Types2<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>_>
  local_58;
  unique_ptr<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>_>
  local_50;
  _Bxty local_48;
  ulong64 local_38;
  ulong64 uStack_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_88;
  pMVar5 = (Message *)testing::Message::Message((Message *)&local_50);
  std::basic_ostream<char,std::char_traits<char>_>::operator<<
            ((basic_ostream<char,std::char_traits<char>_> *)
             &((pMVar5->ss_)._Mypair._Myval2)->field_0x10,param_3);
  testing::Message::GetString
            (pMVar5,(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_48);
  if (local_50._Mypair._Myval2 !=
      (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    puVar6 = (undefined8 *)
             ((longlong)local_50._Mypair._Myval2 +
             (longlong)*(int *)(*(longlong *)local_50._Mypair._Myval2 + 4));
    (**(code **)*puVar6)(puVar6,1);
  }
  pbVar2 = (param_2->_Mypair)._Myval2._Mylast;
  if (pbVar2 == (param_2->_Mypair)._Myval2._Myend) {
    std::
    vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
    ::_Emplace_reallocate<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
              (param_2,pbVar2,
               (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_48);
  }
  else {
    (pbVar2->_Mypair)._Myval2._Bx._Ptr = (char *)0x0;
    *(undefined8 *)((longlong)&(pbVar2->_Mypair)._Myval2._Bx + 8) = 0;
    (pbVar2->_Mypair)._Myval2._Mysize = 0;
    (pbVar2->_Mypair)._Myval2._Myres = 0;
    (pbVar2->_Mypair)._Myval2._Bx._Ptr = (char *)CONCAT71(local_48._1_7_,local_48._Buf[0]);
    *(undefined8 *)((longlong)&(pbVar2->_Mypair)._Myval2._Bx + 8) = local_48._8_8_;
    uVar4 = _UNK_15076add8;
    uVar8 = ___xmm_000000000000000f0000000000000000;
    (pbVar2->_Mypair)._Myval2._Mysize = local_38;
    (pbVar2->_Mypair)._Myval2._Myres = uStack_30;
    ppbVar1 = &(param_2->_Mypair)._Myval2._Mylast;
    *ppbVar1 = *ppbVar1 + 1;
    local_38 = uVar8;
    uStack_30 = uVar4;
    local_48._Buf[0] = '\0';
  }
  if (0xf < uStack_30) {
    pvVar3 = (void *)CONCAT71(local_48._1_7_,local_48._Buf[0]);
    uVar8 = uStack_30 + 1;
    pvVar7 = pvVar3;
    if (0xfff < uVar8) {
      pvVar7 = *(void **)((longlong)pvVar3 + -8);
      uVar8 = uStack_30 + 0x28;
      if (0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)pvVar7))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete(pvVar7,uVar8);
  }
  pMVar5 = (Message *)testing::Message::Message((Message *)&local_50);
  std::basic_ostream<char,std::char_traits<char>_>::operator<<
            ((basic_ostream<char,std::char_traits<char>_> *)
             &((pMVar5->ss_)._Mypair._Myval2)->field_0x10,param_3 + 1);
  testing::Message::GetString
            (pMVar5,(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_48);
  if (local_50._Mypair._Myval2 !=
      (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    puVar6 = (undefined8 *)
             ((longlong)*(int *)(*(longlong *)local_50._Mypair._Myval2 + 4) +
             (longlong)local_50._Mypair._Myval2);
    (**(code **)*puVar6)(puVar6,1);
  }
  pbVar2 = (param_2->_Mypair)._Myval2._Mylast;
  if (pbVar2 == (param_2->_Mypair)._Myval2._Myend) {
    std::
    vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
    ::_Emplace_reallocate<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
              (param_2,pbVar2,
               (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_48);
  }
  else {
    (pbVar2->_Mypair)._Myval2._Bx._Ptr = (char *)0x0;
    *(undefined8 *)((longlong)&(pbVar2->_Mypair)._Myval2._Bx + 8) = 0;
    (pbVar2->_Mypair)._Myval2._Mysize = 0;
    (pbVar2->_Mypair)._Myval2._Myres = 0;
    (pbVar2->_Mypair)._Myval2._Bx._Ptr = (char *)CONCAT71(local_48._1_7_,local_48._Buf[0]);
    *(undefined8 *)((longlong)&(pbVar2->_Mypair)._Myval2._Bx + 8) = local_48._8_8_;
    uVar4 = _UNK_15076add8;
    uVar8 = ___xmm_000000000000000f0000000000000000;
    (pbVar2->_Mypair)._Myval2._Mysize = local_38;
    (pbVar2->_Mypair)._Myval2._Myres = uStack_30;
    ppbVar1 = &(param_2->_Mypair)._Myval2._Mylast;
    *ppbVar1 = *ppbVar1 + 1;
    local_38 = uVar8;
    uStack_30 = uVar4;
    local_48._Buf[0] = '\0';
  }
  if (0xf < uStack_30) {
    pvVar3 = (void *)CONCAT71(local_48._1_7_,local_48._Buf[0]);
    uVar8 = uStack_30 + 1;
    pvVar7 = pvVar3;
    if (0xfff < uVar8) {
      pvVar7 = *(void **)((longlong)pvVar3 + -8);
      uVar8 = uStack_30 + 0x28;
      if (0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)pvVar7))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete(pvVar7,uVar8);
  }
  GenerateNamesRecursively<testing::internal::DefaultNameGenerator,testing::internal::Types2<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>_>_>
            (local_58,param_2,param_3 + 2);
  return;
}

// GetTypeName<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>_> @ 14c569d00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __cdecl
testing::internal::
GetTypeName<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>_>
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *__return_storage_ptr__)

{
  (__return_storage_ptr__->_Mypair)._Myval2._Bx._Ptr = (char *)0x0;
  *(undefined8 *)((longlong)&(__return_storage_ptr__->_Mypair)._Myval2._Bx + 8) = 0;
  (__return_storage_ptr__->_Mypair)._Myval2._Mysize = 6;
  (__return_storage_ptr__->_Mypair)._Myval2._Myres = 0xf;
  *(undefined4 *)&(__return_storage_ptr__->_Mypair)._Myval2._Bx = _s_<type>;
  *(undefined2 *)((longlong)&(__return_storage_ptr__->_Mypair)._Myval2._Bx + 4) = DAT_1528703b4;
  (__return_storage_ptr__->_Mypair)._Myval2._Bx._Buf[6] = '\0';
  return __return_storage_ptr__;
}

// GetTypeName<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>_> @ 14c569d40

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __cdecl
testing::internal::
GetTypeName<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>_>
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *__return_storage_ptr__)

{
  (__return_storage_ptr__->_Mypair)._Myval2._Bx._Ptr = (char *)0x0;
  *(undefined8 *)((longlong)&(__return_storage_ptr__->_Mypair)._Myval2._Bx + 8) = 0;
  (__return_storage_ptr__->_Mypair)._Myval2._Mysize = 6;
  (__return_storage_ptr__->_Mypair)._Myval2._Myres = 0xf;
  *(undefined4 *)&(__return_storage_ptr__->_Mypair)._Myval2._Bx = _s_<type>;
  *(undefined2 *)((longlong)&(__return_storage_ptr__->_Mypair)._Myval2._Bx + 4) = DAT_1528703b4;
  (__return_storage_ptr__->_Mypair)._Myval2._Bx._Buf[6] = '\0';
  return __return_storage_ptr__;
}

// GetTypeName<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>_> @ 14c569d80

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __cdecl
testing::internal::
GetTypeName<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>_>
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *__return_storage_ptr__)

{
  (__return_storage_ptr__->_Mypair)._Myval2._Bx._Ptr = (char *)0x0;
  *(undefined8 *)((longlong)&(__return_storage_ptr__->_Mypair)._Myval2._Bx + 8) = 0;
  (__return_storage_ptr__->_Mypair)._Myval2._Mysize = 6;
  (__return_storage_ptr__->_Mypair)._Myval2._Myres = 0xf;
  *(undefined4 *)&(__return_storage_ptr__->_Mypair)._Myval2._Bx = _s_<type>;
  *(undefined2 *)((longlong)&(__return_storage_ptr__->_Mypair)._Myval2._Bx + 4) = DAT_1528703b4;
  (__return_storage_ptr__->_Mypair)._Myval2._Bx._Buf[6] = '\0';
  return __return_storage_ptr__;
}

// GetTypeName<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>_> @ 14c569dc0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __cdecl
testing::internal::
GetTypeName<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>_>
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *__return_storage_ptr__)

{
  (__return_storage_ptr__->_Mypair)._Myval2._Bx._Ptr = (char *)0x0;
  *(undefined8 *)((longlong)&(__return_storage_ptr__->_Mypair)._Myval2._Bx + 8) = 0;
  (__return_storage_ptr__->_Mypair)._Myval2._Mysize = 6;
  (__return_storage_ptr__->_Mypair)._Myval2._Myres = 0xf;
  *(undefined4 *)&(__return_storage_ptr__->_Mypair)._Myval2._Bx = _s_<type>;
  *(undefined2 *)((longlong)&(__return_storage_ptr__->_Mypair)._Myval2._Bx + 4) = DAT_1528703b4;
  (__return_storage_ptr__->_Mypair)._Myval2._Bx._Buf[6] = '\0';
  return __return_storage_ptr__;
}

// SetUpImpl<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>_> @ 14c569e00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void __thiscall
`anonymous_namespace'::
QuaternionEvaluatorTest<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>_>
::
SetUpImpl<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>_>
          (void *this)

{
  Extent *pEVar1;
  float *pfVar2;
  ushort *puVar3;
  LODRegion *pLVar4;
  longlong lVar5;
  int *piVar6;
  JointGroup<float> *pJVar7;
  MemoryResource MVar8;
  MemoryResource MVar9;
  undefined **ppuVar10;
  ulonglong uVar11;
  longlong lVar12;
  _Vector_val<std::_Simple_types<unsigned_short>_> *this_00;
  undefined **ppuVar13;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *pvVar14;
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *pvVar15;
  vector<rl4::LODRegion,pma::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>_> *pvVar16;
  longlong lVar17;
  MemoryResource MVar18;
  undefined1 auStack_268 [32];
  MemoryResource local_248;
  MemoryResource local_240;
  MemoryResource local_238;
  int *local_230;
  undefined1 local_228 [64];
  MemoryResource local_1e8;
  JointGroup<float> local_1e0;
  undefined1 local_158 [56];
  undefined8 local_120;
  MemoryResource local_118;
  undefined1 local_108 [56];
  undefined8 local_d0;
  MemoryResource local_c8;
  undefined **local_b8;
  undefined **local_b0;
  undefined ***local_80;
  undefined **local_78;
  undefined **local_70;
  undefined ***local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_268;
  *(undefined8 *)((longlong)this + 0xd8) = 1;
  MVar18 = (MemoryResource)((longlong)this + 0x10);
  *(undefined1 *)((longlong)this + 0xe0) = 3;
  uVar11 = (longlong)rltests::qs::optimized::floatValues._Mypair._Myval2._Mylast -
           (longlong)rltests::qs::optimized::floatValues._Mypair._Myval2._Myfirst >> 5;
  pJVar7 = rl4::JointGroup<float>::JointGroup<float>(&local_1e0,(MemoryResource *)MVar18);
  local_230 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x9d4c);
  if ((*local_230 <
       `public:___cdecl_pma::impl::PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>(void)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:___cdecl_pma::impl::PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>(void)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    atexit(`pma::impl::PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>::
           PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>'::__l2::
           _dynamic_atexit_destructor_for__dmr__);
    _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  local_248 = (MemoryResource)
              &`public:___cdecl_pma::impl::PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>(void)___ptr64'
               ::__l2::dmr;
  if (MVar18 != (MemoryResource)0x0) {
    local_248 = MVar18;
  }
  MVar8 = (MemoryResource)0x0;
  MVar18 = (MemoryResource)0x0;
  local_240 = (MemoryResource)0x0;
  local_238 = (MemoryResource)0x0;
  if (uVar11 != 0) {
    if (0x1e1e1e1e1e1e1e1 < uVar11) {
                    /* WARNING: Subroutine does not return */
      std::
      vector<rl4::JointGroup<float>,pma::PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>_>
      ::_Xlength();
    }
    MVar8 = (MemoryResource)
            (**(code **)((longlong)*(MemoryResource *)local_248 + 8))(local_248,uVar11 * 0x88,8);
    local_238 = (MemoryResource)((longlong)MVar8 + uVar11 * 0x88);
    MVar18 = MVar8;
    local_240 = MVar8;
    do {
      rl4::JointGroup<float>::JointGroup<float>((JointGroup<float> *)MVar18,pJVar7);
      MVar18 = (MemoryResource)((longlong)MVar18 + 0x88);
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
  }
  rl4::JointGroup<float>::~JointGroup<float>(&local_1e0);
  uVar11 = 0;
  lVar5 = (longlong)MVar18 - (longlong)MVar8 >> 0x3f;
  lVar17 = ((longlong)MVar18 - (longlong)MVar8) / 0x88 + lVar5;
  if (lVar17 != lVar5) {
    lVar12 = 0;
    this_00 = (_Vector_val<std::_Simple_types<unsigned_short>_> *)((longlong)local_240 + 0x40);
    do {
      pvVar14 = (vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *)
                (&((rltests::qs::optimized::floatValues._Mypair._Myval2._Myfirst)->_Mypair)._Myval1.
                  field_0x0 + lVar12);
      if ((vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *)
          ((longlong)(this_00 + 0xfffffffffffffffd) + 8U) != pvVar14) {
        pfVar2 = ((_Vector_val<std::_Simple_types<float>_> *)((longlong)&pvVar14->_Mypair + 8))->
                 _Myfirst;
        std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>::
        _Assign_counted_range<float_*>
                  ((vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *)
                   ((longlong)(this_00 + 0xfffffffffffffffd) + 8U),pfVar2,
                   (longlong)*(float **)((longlong)&pvVar14->_Mypair + 0x10) - (longlong)pfVar2 >> 2
                  );
      }
      pvVar15 = (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
                 *)(&((rltests::qs::optimized::inputIndices._Mypair._Myval2._Myfirst)->_Mypair).
                     _Myval1.field_0x0 + lVar12);
      if ((vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *
          )((longlong)(this_00 + 0xfffffffffffffffe) + 0x10U) != pvVar15) {
        puVar3 = ((_Vector_val<std::_Simple_types<unsigned_short>_> *)
                 ((longlong)&pvVar15->_Mypair + 8))->_Myfirst;
        std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
        ::_Assign_counted_range<unsigned_short_*>
                  ((vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
                    *)((longlong)(this_00 + 0xfffffffffffffffe) + 0x10U),puVar3,
                   (longlong)*(ushort **)((longlong)&pvVar15->_Mypair + 0x10) - (longlong)puVar3 >>
                   1);
      }
      pvVar15 = (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
                 *)(&((rltests::qs::optimized::outputIndices._Mypair._Myval2._Myfirst
                       [*(longlong *)((longlong)this + 0xd8)]._Mypair._Myval2._Myfirst)->_Mypair).
                     _Myval1.field_0x0 + lVar12);
      if (this_00 != (_Vector_val<std::_Simple_types<unsigned_short>_> *)pvVar15) {
        puVar3 = (pvVar15->_Mypair)._Myval2._Myfirst;
        std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
        ::_Assign_counted_range<unsigned_short_*>
                  ((vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
                    *)this_00,puVar3,
                   (longlong)(pvVar15->_Mypair)._Myval2._Mylast - (longlong)puVar3 >> 1);
      }
      pvVar16 = (vector<rl4::LODRegion,pma::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>_>
                 *)(&((rltests::qs::optimized::lodRegions._Mypair._Myval2._Myfirst)->_Mypair).
                     _Myval1.field_0x0 + lVar12);
      if ((vector<rl4::LODRegion,pma::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>_> *
          )((longlong)(this_00 + 1) + 8U) != pvVar16) {
        pLVar4 = ((_Vector_val<std::_Simple_types<rl4::LODRegion>_> *)
                 ((longlong)&pvVar16->_Mypair + 8))->_Myfirst;
        std::vector<rl4::LODRegion,pma::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>_>
        ::_Assign_counted_range<rl4::LODRegion_*>
                  ((vector<rl4::LODRegion,pma::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>_>
                    *)((longlong)(this_00 + 1) + 8U),pLVar4,
                   ((longlong)*(LODRegion **)((longlong)&pvVar16->_Mypair + 0x10) - (longlong)pLVar4
                   ) / 0x18);
      }
      lVar12 = lVar12 + 0x20;
      *(uint *)&((vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
                  *)((longlong)(this_00 + 2) + 0x10))->_Mypair =
           rltests::qs::optimized::subMatrices._Mypair._Myval2._Myfirst[uVar11].cols;
      pEVar1 = rltests::qs::optimized::subMatrices._Mypair._Myval2._Myfirst + uVar11;
      uVar11 = uVar11 + 1;
      *(uint *)&((vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
                  *)((longlong)(this_00 + 2) + 0x14))->_Mypair = pEVar1->rows;
      this_00 = (_Vector_val<std::_Simple_types<unsigned_short>_> *)((longlong)(this_00 + 5) + 0x10)
      ;
    } while (uVar11 < (ulonglong)(lVar17 - lVar5));
  }
  piVar6 = local_230;
  ppuVar10 = (undefined **)((longlong)this + 0x10);
  if ((*local_230 <
       `public:___cdecl_pma::impl::PolyAllocator<rl4::VectorizedJointGroupQuaternionCalculationStrategy<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::VectorizedJointGroupQuaternionCalculationStrategy<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<rl4::VectorizedJointGroupQuaternionCalculationStrategy<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::VectorizedJointGroupQuaternionCalculationStrategy<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:___cdecl_pma::impl::PolyAllocator<rl4::VectorizedJointGroupQuaternionCalculationStrategy<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::VectorizedJointGroupQuaternionCalculationStrategy<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    atexit(`pma::impl::
           PolyAllocator<rl4::VectorizedJointGroupQuaternionCalculationStrategy<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,8,pma::DefaultMemoryResource>
           ::
           PolyAllocator<rl4::VectorizedJointGroupQuaternionCalculationStrategy<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,8,pma::DefaultMemoryResource>'
           ::__l2::_dynamic_atexit_destructor_for__dmr__);
    _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<rl4::VectorizedJointGroupQuaternionCalculationStrategy<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::VectorizedJointGroupQuaternionCalculationStrategy<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  ppuVar13 = &`public:___cdecl_pma::impl::PolyAllocator<rl4::VectorizedJointGroupQuaternionCalculationStrategy<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::VectorizedJointGroupQuaternionCalculationStrategy<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
              ::__l2::dmr;
  if (ppuVar10 != (undefined **)0x0) {
    ppuVar13 = ppuVar10;
  }
  MVar8 = (MemoryResource)(**(code **)(*ppuVar13 + 8))(ppuVar13,8,8);
  *(undefined ***)MVar8 =
       &
       ___7__VectorizedJointGroupQuaternionCalculationStrategy_MU__T256_U__T128_M_scalar_trimd___fallback_trimd__U__T128_M_scalar_3_U__QuaternionsToEulerAngles_U__ang_MUradians_impl_tdm___tdm___0A__rl4___rl4__6B_
  ;
  local_b8 = &
             ___7___Func_impl_no_alloc_V<lambda_1>__1____create___V___ManagedInstance_V__unique_ptr_U__JointGroupQuaternionCalculationStrategy_M_rl4__V__function___A6AXPEAU__JointGroupQuaternionCalculationStrategy_M_rl4___Z_std___std__U__VectorizedJointGroupQuaternionCalculationStrategy_MU__T256_U__T128_M_scalar_trimd___fallback_trimd__U__T128_M_scalar_3_U__QuaternionsToEulerAngles_U__ang_MUradians_impl_tdm___tdm___0A__rl4___rl4__U__JointGroupQuaternionCalculationStrategy_M_4__impl_pma__QEAA_AV__unique_ptr_U__JointGroupQuaternionCalculationStrategy_M_rl4__V__function___A6AXPEAU__JointGroupQuaternionCalculationStrategy_M_rl4___Z_std___std__XZ_XPEAU__JointGroupQuaternionCalculationStrategy_M_rl4___std__6B_
  ;
  local_80 = &local_b8;
  local_120 = (_Func_base<void,rl4::JointGroupQuaternionCalculationStrategy<float>_*> *)0x0;
  local_b0 = ppuVar13;
  local_120 = std::
              _Func_impl_no_alloc<`pma::impl::ManagedInstance<std::unique_ptr<rl4::JointGroupQuaternionCalculationStrategy<float>,std::function<void___cdecl(rl4::JointGroupQuaternionCalculationStrategy<float>_*)>_>,rl4::VectorizedJointGroupQuaternionCalculationStrategy<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,rl4::JointGroupQuaternionCalculationStrategy<float>_>::create<>'::__l2::<lambda_1>,void,rl4::JointGroupQuaternionCalculationStrategy<float>_*>
              ::_Move(&local_b8,local_158);
  if (local_80 != (undefined ***)0x0) {
    (*(code *)(*local_80)[4])(local_80,local_80 != &local_b8);
  }
  local_118 = MVar8;
  if ((*piVar6 < `public:___cdecl_pma::impl::PolyAllocator<rl4::QuaternionJointsEvaluator<float>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::QuaternionJointsEvaluator<float>,8,pma::DefaultMemoryResource>(void)___ptr64'
                 ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<rl4::QuaternionJointsEvaluator<float>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::QuaternionJointsEvaluator<float>,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:___cdecl_pma::impl::PolyAllocator<rl4::QuaternionJointsEvaluator<float>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::QuaternionJointsEvaluator<float>,8,pma::DefaultMemoryResource>(void)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    atexit(`pma::impl::
           PolyAllocator<rl4::QuaternionJointsEvaluator<float>,8,pma::DefaultMemoryResource>::
           PolyAllocator<rl4::QuaternionJointsEvaluator<float>,8,pma::DefaultMemoryResource>'::__l2
           ::_dynamic_atexit_destructor_for__dmr__);
    _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<rl4::QuaternionJointsEvaluator<float>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::QuaternionJointsEvaluator<float>,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  ppuVar13 = &`public:___cdecl_pma::impl::PolyAllocator<rl4::QuaternionJointsEvaluator<float>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::QuaternionJointsEvaluator<float>,8,pma::DefaultMemoryResource>(void)___ptr64'
              ::__l2::dmr;
  if (ppuVar10 != (undefined **)0x0) {
    ppuVar13 = ppuVar10;
  }
  MVar9 = (MemoryResource)(**(code **)(*ppuVar13 + 8))(ppuVar13,0xb0,8);
  MVar8 = local_118;
  local_118 = (MemoryResource)0x0;
  std::function<void___cdecl(rl4::JointGroupQuaternionCalculationStrategy<float>_*)>::
  function<void___cdecl(rl4::JointGroupQuaternionCalculationStrategy<float>_*)>
            ((function<void___cdecl(rl4::JointGroupQuaternionCalculationStrategy<float>_*)> *)
             local_228,
             (function<void___cdecl(rl4::JointGroupQuaternionCalculationStrategy<float>_*)> *)
             local_158);
  local_1e8 = (MemoryResource)0x0;
  *(undefined ***)MVar9 = &___7__QuaternionJointsEvaluator_M_rl4__6B_;
  std::function<void___cdecl(rl4::JointGroupQuaternionCalculationStrategy<float>_*)>::
  function<void___cdecl(rl4::JointGroupQuaternionCalculationStrategy<float>_*)>
            ((function<void___cdecl(rl4::JointGroupQuaternionCalculationStrategy<float>_*)> *)
             ((longlong)MVar9 + 8),
             (function<void___cdecl(rl4::JointGroupQuaternionCalculationStrategy<float>_*)> *)
             local_228);
  *(MemoryResource *)((longlong)MVar9 + 0x48) = MVar8;
  *(MemoryResource *)((longlong)MVar9 + 0x50) = local_248;
  *(MemoryResource *)((longlong)MVar9 + 0x58) = local_240;
  *(MemoryResource *)((longlong)MVar9 + 0x68) = local_238;
  *(MemoryResource *)((longlong)MVar9 + 0x60) = MVar18;
  *(MemoryResource *)((longlong)MVar9 + 0xa8) = (MemoryResource)0x0;
  if (local_1e8 != (MemoryResource)0x0) {
    local_248 = local_1e8;
    if ((longlong *)local_228._56_8_ == (longlong *)0x0) {
      std::_Xbad_function_call();
      return;
    }
    (**(code **)(*(longlong *)local_228._56_8_ + 0x10))(local_228._56_8_,&local_248);
  }
  if ((longlong *)local_228._56_8_ != (longlong *)0x0) {
    (**(code **)(*(longlong *)local_228._56_8_ + 0x20))
              (local_228._56_8_,(undefined1 *)local_228._56_8_ != local_228);
  }
  local_78 = &
             ___7___Func_impl_no_alloc_V<lambda_1>__1____create_V__unique_ptr_U__JointGroupQuaternionCalculationStrategy_M_rl4__V__function___A6AXPEAU__JointGroupQuaternionCalculationStrategy_M_rl4___Z_std___std__V__vector_U__JointGroup_M_rl4__V__PolyAllocator_U__JointGroup_M_rl4___07VDefaultMemoryResource_pma___pma___2___TPEAVAlignedMemoryResource_pma_____ManagedInstance_V__unique_ptr_VJointsEvaluator_rl4__V__function___A6AXPEAVJointsEvaluator_rl4___Z_std___std__V__QuaternionJointsEvaluator_M_rl4__VJointsEvaluator_4__impl_pma__QEAA_AV__unique_ptr_VJointsEvaluator_rl4__V__function___A6AXPEAVJointsEvaluator_rl4___Z_std___std____QEAV__unique_ptr_U__JointGroupQuaternionCalculationStrategy_M_rl4__V__function___A6AXPEAU__JointGroupQuaternionCalculationStrategy_M_rl4___Z_std___6___QEAV__vector_U__JointGroup_M_rl4__V__PolyAllocator_U__JointGroup_M_rl4___07VDefaultMemoryResource_pma___pma___6___QEA__T__QEAPEAVAlignedMemoryResource_4__Z_XPEAVJointsEvaluator_rl4___std__6B_
  ;
  local_40 = &local_78;
  local_d0 = (_Func_base<void,rl4::JointsEvaluator_*> *)0x0;
  local_70 = ppuVar13;
  local_d0 = std::
             _Func_impl_no_alloc<`pma::impl::ManagedInstance<std::unique_ptr<rl4::JointsEvaluator,std::function<void___cdecl(rl4::JointsEvaluator_*)>_>,rl4::QuaternionJointsEvaluator<float>,rl4::JointsEvaluator>::create<std::unique_ptr<rl4::JointGroupQuaternionCalculationStrategy<float>,std::function<void___cdecl(rl4::JointGroupQuaternionCalculationStrategy<float>_*)>_>,std::vector<rl4::JointGroup<float>,pma::PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>_>,std::nullptr_t,pma::AlignedMemoryResource_*>'::__l2::<lambda_1>,void,rl4::JointsEvaluator_*>
             ::_Move(&local_78,local_108);
  if (local_40 != (undefined ***)0x0) {
    (*(code *)(*local_40)[4])(local_40,local_40 != &local_78);
  }
  local_c8 = MVar9;
  std::unique_ptr<rl4::JointsEvaluator,std::function<void___cdecl(rl4::JointsEvaluator_*)>_>::
  operator=<std::function<void___cdecl(rl4::JointsEvaluator_*)>,0>
            ((unique_ptr<rl4::JointsEvaluator,std::function<void___cdecl(rl4::JointsEvaluator_*)>_>
              *)((longlong)this + 0x90),
             (unique_ptr<rl4::JointsEvaluator,std::function<void___cdecl(rl4::JointsEvaluator_*)>_>
              *)local_108);
  if (local_c8 != (MemoryResource)0x0) {
    local_248 = local_c8;
    if (local_d0 == (_Func_base<void,rl4::JointsEvaluator_*> *)0x0) {
      std::_Xbad_function_call();
      return;
    }
    (**(code **)((longlong)*local_d0 + 0x10))(local_d0,&local_248);
  }
  if (local_d0 != (_Func_base<void,rl4::JointsEvaluator_*> *)0x0) {
    (**(code **)((longlong)*local_d0 + 0x20))
              (local_d0,local_d0 != (_Func_base<void,rl4::JointsEvaluator_*> *)local_108);
  }
  if (local_118 != (MemoryResource)0x0) {
    local_248 = local_118;
    if (local_120 == (_Func_base<void,rl4::JointGroupQuaternionCalculationStrategy<float>_*> *)0x0)
    {
      std::_Xbad_function_call();
      return;
    }
    (**(code **)((longlong)*local_120 + 0x10))(local_120,&local_248);
  }
  if (local_120 != (_Func_base<void,rl4::JointGroupQuaternionCalculationStrategy<float>_*> *)0x0) {
    (**(code **)((longlong)*local_120 + 0x20))
              (local_120,
               local_120 !=
               (_Func_base<void,rl4::JointGroupQuaternionCalculationStrategy<float>_*> *)local_158);
  }
  return;
}

// SetUpImpl<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>_> @ 14c56a3d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void __thiscall
`anonymous_namespace'::
QuaternionEvaluatorTest<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>_>
::
SetUpImpl<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>_>
          (void *this)

{
  Extent *pEVar1;
  float *pfVar2;
  ushort *puVar3;
  LODRegion *pLVar4;
  longlong lVar5;
  int *piVar6;
  JointGroup<float> *pJVar7;
  MemoryResource MVar8;
  MemoryResource MVar9;
  undefined **ppuVar10;
  ulonglong uVar11;
  longlong lVar12;
  _Vector_val<std::_Simple_types<unsigned_short>_> *this_00;
  undefined **ppuVar13;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *pvVar14;
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *pvVar15;
  vector<rl4::LODRegion,pma::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>_> *pvVar16;
  longlong lVar17;
  MemoryResource MVar18;
  undefined1 auStack_268 [32];
  MemoryResource local_248;
  MemoryResource local_240;
  MemoryResource local_238;
  int *local_230;
  undefined1 local_228 [64];
  MemoryResource local_1e8;
  JointGroup<float> local_1e0;
  undefined1 local_158 [56];
  undefined8 local_120;
  MemoryResource local_118;
  undefined1 local_108 [56];
  undefined8 local_d0;
  MemoryResource local_c8;
  undefined **local_b8;
  undefined **local_b0;
  undefined ***local_80;
  undefined **local_78;
  undefined **local_70;
  undefined ***local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_268;
  *(undefined8 *)((longlong)this + 0xd8) = 0;
  MVar18 = (MemoryResource)((longlong)this + 0x10);
  *(undefined1 *)((longlong)this + 0xe0) = 4;
  uVar11 = (longlong)rltests::qs::optimized::floatValues._Mypair._Myval2._Mylast -
           (longlong)rltests::qs::optimized::floatValues._Mypair._Myval2._Myfirst >> 5;
  pJVar7 = rl4::JointGroup<float>::JointGroup<float>(&local_1e0,(MemoryResource *)MVar18);
  local_230 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x9d4c);
  if ((*local_230 <
       `public:___cdecl_pma::impl::PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>(void)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:___cdecl_pma::impl::PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>(void)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    atexit(`pma::impl::PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>::
           PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>'::__l2::
           _dynamic_atexit_destructor_for__dmr__);
    _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  local_248 = (MemoryResource)
              &`public:___cdecl_pma::impl::PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>(void)___ptr64'
               ::__l2::dmr;
  if (MVar18 != (MemoryResource)0x0) {
    local_248 = MVar18;
  }
  MVar8 = (MemoryResource)0x0;
  MVar18 = (MemoryResource)0x0;
  local_240 = (MemoryResource)0x0;
  local_238 = (MemoryResource)0x0;
  if (uVar11 != 0) {
    if (0x1e1e1e1e1e1e1e1 < uVar11) {
                    /* WARNING: Subroutine does not return */
      std::
      vector<rl4::JointGroup<float>,pma::PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>_>
      ::_Xlength();
    }
    MVar8 = (MemoryResource)
            (**(code **)((longlong)*(MemoryResource *)local_248 + 8))(local_248,uVar11 * 0x88,8);
    local_238 = (MemoryResource)((longlong)MVar8 + uVar11 * 0x88);
    MVar18 = MVar8;
    local_240 = MVar8;
    do {
      rl4::JointGroup<float>::JointGroup<float>((JointGroup<float> *)MVar18,pJVar7);
      MVar18 = (MemoryResource)((longlong)MVar18 + 0x88);
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
  }
  rl4::JointGroup<float>::~JointGroup<float>(&local_1e0);
  uVar11 = 0;
  lVar5 = (longlong)MVar18 - (longlong)MVar8 >> 0x3f;
  lVar17 = ((longlong)MVar18 - (longlong)MVar8) / 0x88 + lVar5;
  if (lVar17 != lVar5) {
    lVar12 = 0;
    this_00 = (_Vector_val<std::_Simple_types<unsigned_short>_> *)((longlong)local_240 + 0x40);
    do {
      pvVar14 = (vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *)
                (&((rltests::qs::optimized::floatValues._Mypair._Myval2._Myfirst)->_Mypair)._Myval1.
                  field_0x0 + lVar12);
      if ((vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *)
          ((longlong)(this_00 + 0xfffffffffffffffd) + 8U) != pvVar14) {
        pfVar2 = ((_Vector_val<std::_Simple_types<float>_> *)((longlong)&pvVar14->_Mypair + 8))->
                 _Myfirst;
        std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>::
        _Assign_counted_range<float_*>
                  ((vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *)
                   ((longlong)(this_00 + 0xfffffffffffffffd) + 8U),pfVar2,
                   (longlong)*(float **)((longlong)&pvVar14->_Mypair + 0x10) - (longlong)pfVar2 >> 2
                  );
      }
      pvVar15 = (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
                 *)(&((rltests::qs::optimized::inputIndices._Mypair._Myval2._Myfirst)->_Mypair).
                     _Myval1.field_0x0 + lVar12);
      if ((vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *
          )((longlong)(this_00 + 0xfffffffffffffffe) + 0x10U) != pvVar15) {
        puVar3 = ((_Vector_val<std::_Simple_types<unsigned_short>_> *)
                 ((longlong)&pvVar15->_Mypair + 8))->_Myfirst;
        std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
        ::_Assign_counted_range<unsigned_short_*>
                  ((vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
                    *)((longlong)(this_00 + 0xfffffffffffffffe) + 0x10U),puVar3,
                   (longlong)*(ushort **)((longlong)&pvVar15->_Mypair + 0x10) - (longlong)puVar3 >>
                   1);
      }
      pvVar15 = (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
                 *)(&((rltests::qs::optimized::outputIndices._Mypair._Myval2._Myfirst
                       [*(longlong *)((longlong)this + 0xd8)]._Mypair._Myval2._Myfirst)->_Mypair).
                     _Myval1.field_0x0 + lVar12);
      if (this_00 != (_Vector_val<std::_Simple_types<unsigned_short>_> *)pvVar15) {
        puVar3 = (pvVar15->_Mypair)._Myval2._Myfirst;
        std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
        ::_Assign_counted_range<unsigned_short_*>
                  ((vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
                    *)this_00,puVar3,
                   (longlong)(pvVar15->_Mypair)._Myval2._Mylast - (longlong)puVar3 >> 1);
      }
      pvVar16 = (vector<rl4::LODRegion,pma::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>_>
                 *)(&((rltests::qs::optimized::lodRegions._Mypair._Myval2._Myfirst)->_Mypair).
                     _Myval1.field_0x0 + lVar12);
      if ((vector<rl4::LODRegion,pma::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>_> *
          )((longlong)(this_00 + 1) + 8U) != pvVar16) {
        pLVar4 = ((_Vector_val<std::_Simple_types<rl4::LODRegion>_> *)
                 ((longlong)&pvVar16->_Mypair + 8))->_Myfirst;
        std::vector<rl4::LODRegion,pma::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>_>
        ::_Assign_counted_range<rl4::LODRegion_*>
                  ((vector<rl4::LODRegion,pma::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>_>
                    *)((longlong)(this_00 + 1) + 8U),pLVar4,
                   ((longlong)*(LODRegion **)((longlong)&pvVar16->_Mypair + 0x10) - (longlong)pLVar4
                   ) / 0x18);
      }
      lVar12 = lVar12 + 0x20;
      *(uint *)&((vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
                  *)((longlong)(this_00 + 2) + 0x10))->_Mypair =
           rltests::qs::optimized::subMatrices._Mypair._Myval2._Myfirst[uVar11].cols;
      pEVar1 = rltests::qs::optimized::subMatrices._Mypair._Myval2._Myfirst + uVar11;
      uVar11 = uVar11 + 1;
      *(uint *)&((vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
                  *)((longlong)(this_00 + 2) + 0x14))->_Mypair = pEVar1->rows;
      this_00 = (_Vector_val<std::_Simple_types<unsigned_short>_> *)((longlong)(this_00 + 5) + 0x10)
      ;
    } while (uVar11 < (ulonglong)(lVar17 - lVar5));
  }
  piVar6 = local_230;
  ppuVar10 = (undefined **)((longlong)this + 0x10);
  if ((*local_230 <
       `public:___cdecl_pma::impl::PolyAllocator<rl4::VectorizedJointGroupQuaternionCalculationStrategy<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::VectorizedJointGroupQuaternionCalculationStrategy<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>,8,pma::DefaultMemoryResource>(void)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<rl4::VectorizedJointGroupQuaternionCalculationStrategy<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::VectorizedJointGroupQuaternionCalculationStrategy<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:___cdecl_pma::impl::PolyAllocator<rl4::VectorizedJointGroupQuaternionCalculationStrategy<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::VectorizedJointGroupQuaternionCalculationStrategy<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>,8,pma::DefaultMemoryResource>(void)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    atexit(`pma::impl::
           PolyAllocator<rl4::VectorizedJointGroupQuaternionCalculationStrategy<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>,8,pma::DefaultMemoryResource>
           ::
           PolyAllocator<rl4::VectorizedJointGroupQuaternionCalculationStrategy<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>,8,pma::DefaultMemoryResource>'
           ::__l2::_dynamic_atexit_destructor_for__dmr__);
    _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<rl4::VectorizedJointGroupQuaternionCalculationStrategy<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::VectorizedJointGroupQuaternionCalculationStrategy<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  ppuVar13 = &`public:___cdecl_pma::impl::PolyAllocator<rl4::VectorizedJointGroupQuaternionCalculationStrategy<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::VectorizedJointGroupQuaternionCalculationStrategy<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>,8,pma::DefaultMemoryResource>(void)___ptr64'
              ::__l2::dmr;
  if (ppuVar10 != (undefined **)0x0) {
    ppuVar13 = ppuVar10;
  }
  MVar8 = (MemoryResource)(**(code **)(*ppuVar13 + 8))(ppuVar13,8,8);
  *(undefined ***)MVar8 =
       &
       ___7__VectorizedJointGroupQuaternionCalculationStrategy_MU__T256_U__T128_M_scalar_trimd___fallback_trimd__U__T128_M_scalar_3_UPassthroughAdapter_rl4___rl4__6B_
  ;
  local_b8 = &
             ___7___Func_impl_no_alloc_V<lambda_1>__1____create___V___ManagedInstance_V__unique_ptr_U__JointGroupQuaternionCalculationStrategy_M_rl4__V__function___A6AXPEAU__JointGroupQuaternionCalculationStrategy_M_rl4___Z_std___std__U__VectorizedJointGroupQuaternionCalculationStrategy_MU__T256_U__T128_M_scalar_trimd___fallback_trimd__U__T128_M_scalar_3_UPassthroughAdapter_rl4___rl4__U__JointGroupQuaternionCalculationStrategy_M_4__impl_pma__QEAA_AV__unique_ptr_U__JointGroupQuaternionCalculationStrategy_M_rl4__V__function___A6AXPEAU__JointGroupQuaternionCalculationStrategy_M_rl4___Z_std___std__XZ_XPEAU__JointGroupQuaternionCalculationStrategy_M_rl4___std__6B_
  ;
  local_80 = &local_b8;
  local_120 = (_Func_base<void,rl4::JointGroupQuaternionCalculationStrategy<float>_*> *)0x0;
  local_b0 = ppuVar13;
  local_120 = std::
              _Func_impl_no_alloc<`pma::impl::ManagedInstance<std::unique_ptr<rl4::JointGroupQuaternionCalculationStrategy<float>,std::function<void___cdecl(rl4::JointGroupQuaternionCalculationStrategy<float>_*)>_>,rl4::VectorizedJointGroupQuaternionCalculationStrategy<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>,rl4::JointGroupQuaternionCalculationStrategy<float>_>::create<>'::__l2::<lambda_1>,void,rl4::JointGroupQuaternionCalculationStrategy<float>_*>
              ::_Move(&local_b8,local_158);
  if (local_80 != (undefined ***)0x0) {
    (*(code *)(*local_80)[4])(local_80,local_80 != &local_b8);
  }
  local_118 = MVar8;
  if ((*piVar6 < `public:___cdecl_pma::impl::PolyAllocator<rl4::QuaternionJointsEvaluator<float>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::QuaternionJointsEvaluator<float>,8,pma::DefaultMemoryResource>(void)___ptr64'
                 ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<rl4::QuaternionJointsEvaluator<float>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::QuaternionJointsEvaluator<float>,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:___cdecl_pma::impl::PolyAllocator<rl4::QuaternionJointsEvaluator<float>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::QuaternionJointsEvaluator<float>,8,pma::DefaultMemoryResource>(void)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    atexit(`pma::impl::
           PolyAllocator<rl4::QuaternionJointsEvaluator<float>,8,pma::DefaultMemoryResource>::
           PolyAllocator<rl4::QuaternionJointsEvaluator<float>,8,pma::DefaultMemoryResource>'::__l2
           ::_dynamic_atexit_destructor_for__dmr__);
    _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<rl4::QuaternionJointsEvaluator<float>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::QuaternionJointsEvaluator<float>,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  ppuVar13 = &`public:___cdecl_pma::impl::PolyAllocator<rl4::QuaternionJointsEvaluator<float>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::QuaternionJointsEvaluator<float>,8,pma::DefaultMemoryResource>(void)___ptr64'
              ::__l2::dmr;
  if (ppuVar10 != (undefined **)0x0) {
    ppuVar13 = ppuVar10;
  }
  MVar9 = (MemoryResource)(**(code **)(*ppuVar13 + 8))(ppuVar13,0xb0,8);
  MVar8 = local_118;
  local_118 = (MemoryResource)0x0;
  std::function<void___cdecl(rl4::JointGroupQuaternionCalculationStrategy<float>_*)>::
  function<void___cdecl(rl4::JointGroupQuaternionCalculationStrategy<float>_*)>
            ((function<void___cdecl(rl4::JointGroupQuaternionCalculationStrategy<float>_*)> *)
             local_228,
             (function<void___cdecl(rl4::JointGroupQuaternionCalculationStrategy<float>_*)> *)
             local_158);
  local_1e8 = (MemoryResource)0x0;
  *(undefined ***)MVar9 = &___7__QuaternionJointsEvaluator_M_rl4__6B_;
  std::function<void___cdecl(rl4::JointGroupQuaternionCalculationStrategy<float>_*)>::
  function<void___cdecl(rl4::JointGroupQuaternionCalculationStrategy<float>_*)>
            ((function<void___cdecl(rl4::JointGroupQuaternionCalculationStrategy<float>_*)> *)
             ((longlong)MVar9 + 8),
             (function<void___cdecl(rl4::JointGroupQuaternionCalculationStrategy<float>_*)> *)
             local_228);
  *(MemoryResource *)((longlong)MVar9 + 0x48) = MVar8;
  *(MemoryResource *)((longlong)MVar9 + 0x50) = local_248;
  *(MemoryResource *)((longlong)MVar9 + 0x58) = local_240;
  *(MemoryResource *)((longlong)MVar9 + 0x68) = local_238;
  *(MemoryResource *)((longlong)MVar9 + 0x60) = MVar18;
  *(MemoryResource *)((longlong)MVar9 + 0xa8) = (MemoryResource)0x0;
  if (local_1e8 != (MemoryResource)0x0) {
    local_248 = local_1e8;
    if ((longlong *)local_228._56_8_ == (longlong *)0x0) {
      std::_Xbad_function_call();
      return;
    }
    (**(code **)(*(longlong *)local_228._56_8_ + 0x10))(local_228._56_8_,&local_248);
  }
  if ((longlong *)local_228._56_8_ != (longlong *)0x0) {
    (**(code **)(*(longlong *)local_228._56_8_ + 0x20))
              (local_228._56_8_,(undefined1 *)local_228._56_8_ != local_228);
  }
  local_78 = &
             ___7___Func_impl_no_alloc_V<lambda_1>__1____create_V__unique_ptr_U__JointGroupQuaternionCalculationStrategy_M_rl4__V__function___A6AXPEAU__JointGroupQuaternionCalculationStrategy_M_rl4___Z_std___std__V__vector_U__JointGroup_M_rl4__V__PolyAllocator_U__JointGroup_M_rl4___07VDefaultMemoryResource_pma___pma___2___TPEAVAlignedMemoryResource_pma_____ManagedInstance_V__unique_ptr_VJointsEvaluator_rl4__V__function___A6AXPEAVJointsEvaluator_rl4___Z_std___std__V__QuaternionJointsEvaluator_M_rl4__VJointsEvaluator_4__impl_pma__QEAA_AV__unique_ptr_VJointsEvaluator_rl4__V__function___A6AXPEAVJointsEvaluator_rl4___Z_std___std____QEAV__unique_ptr_U__JointGroupQuaternionCalculationStrategy_M_rl4__V__function___A6AXPEAU__JointGroupQuaternionCalculationStrategy_M_rl4___Z_std___6___QEAV__vector_U__JointGroup_M_rl4__V__PolyAllocator_U__JointGroup_M_rl4___07VDefaultMemoryResource_pma___pma___6___QEA__T__QEAPEAVAlignedMemoryResource_4__Z_XPEAVJointsEvaluator_rl4___std__6B_
  ;
  local_40 = &local_78;
  local_d0 = (_Func_base<void,rl4::JointsEvaluator_*> *)0x0;
  local_70 = ppuVar13;
  local_d0 = std::
             _Func_impl_no_alloc<`pma::impl::ManagedInstance<std::unique_ptr<rl4::JointsEvaluator,std::function<void___cdecl(rl4::JointsEvaluator_*)>_>,rl4::QuaternionJointsEvaluator<float>,rl4::JointsEvaluator>::create<std::unique_ptr<rl4::JointGroupQuaternionCalculationStrategy<float>,std::function<void___cdecl(rl4::JointGroupQuaternionCalculationStrategy<float>_*)>_>,std::vector<rl4::JointGroup<float>,pma::PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>_>,std::nullptr_t,pma::AlignedMemoryResource_*>'::__l2::<lambda_1>,void,rl4::JointsEvaluator_*>
             ::_Move(&local_78,local_108);
  if (local_40 != (undefined ***)0x0) {
    (*(code *)(*local_40)[4])(local_40,local_40 != &local_78);
  }
  local_c8 = MVar9;
  std::unique_ptr<rl4::JointsEvaluator,std::function<void___cdecl(rl4::JointsEvaluator_*)>_>::
  operator=<std::function<void___cdecl(rl4::JointsEvaluator_*)>,0>
            ((unique_ptr<rl4::JointsEvaluator,std::function<void___cdecl(rl4::JointsEvaluator_*)>_>
              *)((longlong)this + 0x90),
             (unique_ptr<rl4::JointsEvaluator,std::function<void___cdecl(rl4::JointsEvaluator_*)>_>
              *)local_108);
  if (local_c8 != (MemoryResource)0x0) {
    local_248 = local_c8;
    if (local_d0 == (_Func_base<void,rl4::JointsEvaluator_*> *)0x0) {
      std::_Xbad_function_call();
      return;
    }
    (**(code **)((longlong)*local_d0 + 0x10))(local_d0,&local_248);
  }
  if (local_d0 != (_Func_base<void,rl4::JointsEvaluator_*> *)0x0) {
    (**(code **)((longlong)*local_d0 + 0x20))
              (local_d0,local_d0 != (_Func_base<void,rl4::JointsEvaluator_*> *)local_108);
  }
  if (local_118 != (MemoryResource)0x0) {
    local_248 = local_118;
    if (local_120 == (_Func_base<void,rl4::JointGroupQuaternionCalculationStrategy<float>_*> *)0x0)
    {
      std::_Xbad_function_call();
      return;
    }
    (**(code **)((longlong)*local_120 + 0x10))(local_120,&local_248);
  }
  if (local_120 != (_Func_base<void,rl4::JointGroupQuaternionCalculationStrategy<float>_*> *)0x0) {
    (**(code **)((longlong)*local_120 + 0x20))
              (local_120,
               local_120 !=
               (_Func_base<void,rl4::JointGroupQuaternionCalculationStrategy<float>_*> *)local_158);
  }
  return;
}

// SetUpImpl<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>_> @ 14c56a9a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void __thiscall
`anonymous_namespace'::
QuaternionEvaluatorTest<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>_>
::
SetUpImpl<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>_>
          (void *this)

{
  Extent *pEVar1;
  float *pfVar2;
  ushort *puVar3;
  LODRegion *pLVar4;
  longlong lVar5;
  int *piVar6;
  JointGroup<float> *pJVar7;
  MemoryResource MVar8;
  MemoryResource MVar9;
  undefined **ppuVar10;
  ulonglong uVar11;
  longlong lVar12;
  _Vector_val<std::_Simple_types<unsigned_short>_> *this_00;
  undefined **ppuVar13;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *pvVar14;
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *pvVar15;
  vector<rl4::LODRegion,pma::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>_> *pvVar16;
  longlong lVar17;
  MemoryResource MVar18;
  undefined1 auStack_268 [32];
  MemoryResource local_248;
  MemoryResource local_240;
  MemoryResource local_238;
  int *local_230;
  undefined1 local_228 [64];
  MemoryResource local_1e8;
  JointGroup<float> local_1e0;
  undefined1 local_158 [56];
  undefined8 local_120;
  MemoryResource local_118;
  undefined1 local_108 [56];
  undefined8 local_d0;
  MemoryResource local_c8;
  undefined **local_b8;
  undefined **local_b0;
  undefined ***local_80;
  undefined **local_78;
  undefined **local_70;
  undefined ***local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_268;
  *(undefined8 *)((longlong)this + 0xd8) = 1;
  MVar18 = (MemoryResource)((longlong)this + 0x10);
  *(undefined1 *)((longlong)this + 0xe0) = 3;
  uVar11 = (longlong)rltests::qs::optimized::floatValues._Mypair._Myval2._Mylast -
           (longlong)rltests::qs::optimized::floatValues._Mypair._Myval2._Myfirst >> 5;
  pJVar7 = rl4::JointGroup<float>::JointGroup<float>(&local_1e0,(MemoryResource *)MVar18);
  local_230 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x9d4c);
  if ((*local_230 <
       `public:___cdecl_pma::impl::PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>(void)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:___cdecl_pma::impl::PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>(void)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    atexit(`pma::impl::PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>::
           PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>'::__l2::
           _dynamic_atexit_destructor_for__dmr__);
    _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  local_248 = (MemoryResource)
              &`public:___cdecl_pma::impl::PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>(void)___ptr64'
               ::__l2::dmr;
  if (MVar18 != (MemoryResource)0x0) {
    local_248 = MVar18;
  }
  MVar8 = (MemoryResource)0x0;
  MVar18 = (MemoryResource)0x0;
  local_240 = (MemoryResource)0x0;
  local_238 = (MemoryResource)0x0;
  if (uVar11 != 0) {
    if (0x1e1e1e1e1e1e1e1 < uVar11) {
                    /* WARNING: Subroutine does not return */
      std::
      vector<rl4::JointGroup<float>,pma::PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>_>
      ::_Xlength();
    }
    MVar8 = (MemoryResource)
            (**(code **)((longlong)*(MemoryResource *)local_248 + 8))(local_248,uVar11 * 0x88,8);
    local_238 = (MemoryResource)((longlong)MVar8 + uVar11 * 0x88);
    MVar18 = MVar8;
    local_240 = MVar8;
    do {
      rl4::JointGroup<float>::JointGroup<float>((JointGroup<float> *)MVar18,pJVar7);
      MVar18 = (MemoryResource)((longlong)MVar18 + 0x88);
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
  }
  rl4::JointGroup<float>::~JointGroup<float>(&local_1e0);
  uVar11 = 0;
  lVar5 = (longlong)MVar18 - (longlong)MVar8 >> 0x3f;
  lVar17 = ((longlong)MVar18 - (longlong)MVar8) / 0x88 + lVar5;
  if (lVar17 != lVar5) {
    lVar12 = 0;
    this_00 = (_Vector_val<std::_Simple_types<unsigned_short>_> *)((longlong)local_240 + 0x40);
    do {
      pvVar14 = (vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *)
                (&((rltests::qs::optimized::floatValues._Mypair._Myval2._Myfirst)->_Mypair)._Myval1.
                  field_0x0 + lVar12);
      if ((vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *)
          ((longlong)(this_00 + 0xfffffffffffffffd) + 8U) != pvVar14) {
        pfVar2 = ((_Vector_val<std::_Simple_types<float>_> *)((longlong)&pvVar14->_Mypair + 8))->
                 _Myfirst;
        std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>::
        _Assign_counted_range<float_*>
                  ((vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *)
                   ((longlong)(this_00 + 0xfffffffffffffffd) + 8U),pfVar2,
                   (longlong)*(float **)((longlong)&pvVar14->_Mypair + 0x10) - (longlong)pfVar2 >> 2
                  );
      }
      pvVar15 = (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
                 *)(&((rltests::qs::optimized::inputIndices._Mypair._Myval2._Myfirst)->_Mypair).
                     _Myval1.field_0x0 + lVar12);
      if ((vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *
          )((longlong)(this_00 + 0xfffffffffffffffe) + 0x10U) != pvVar15) {
        puVar3 = ((_Vector_val<std::_Simple_types<unsigned_short>_> *)
                 ((longlong)&pvVar15->_Mypair + 8))->_Myfirst;
        std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
        ::_Assign_counted_range<unsigned_short_*>
                  ((vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
                    *)((longlong)(this_00 + 0xfffffffffffffffe) + 0x10U),puVar3,
                   (longlong)*(ushort **)((longlong)&pvVar15->_Mypair + 0x10) - (longlong)puVar3 >>
                   1);
      }
      pvVar15 = (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
                 *)(&((rltests::qs::optimized::outputIndices._Mypair._Myval2._Myfirst
                       [*(longlong *)((longlong)this + 0xd8)]._Mypair._Myval2._Myfirst)->_Mypair).
                     _Myval1.field_0x0 + lVar12);
      if (this_00 != (_Vector_val<std::_Simple_types<unsigned_short>_> *)pvVar15) {
        puVar3 = (pvVar15->_Mypair)._Myval2._Myfirst;
        std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
        ::_Assign_counted_range<unsigned_short_*>
                  ((vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
                    *)this_00,puVar3,
                   (longlong)(pvVar15->_Mypair)._Myval2._Mylast - (longlong)puVar3 >> 1);
      }
      pvVar16 = (vector<rl4::LODRegion,pma::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>_>
                 *)(&((rltests::qs::optimized::lodRegions._Mypair._Myval2._Myfirst)->_Mypair).
                     _Myval1.field_0x0 + lVar12);
      if ((vector<rl4::LODRegion,pma::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>_> *
          )((longlong)(this_00 + 1) + 8U) != pvVar16) {
        pLVar4 = ((_Vector_val<std::_Simple_types<rl4::LODRegion>_> *)
                 ((longlong)&pvVar16->_Mypair + 8))->_Myfirst;
        std::vector<rl4::LODRegion,pma::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>_>
        ::_Assign_counted_range<rl4::LODRegion_*>
                  ((vector<rl4::LODRegion,pma::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>_>
                    *)((longlong)(this_00 + 1) + 8U),pLVar4,
                   ((longlong)*(LODRegion **)((longlong)&pvVar16->_Mypair + 0x10) - (longlong)pLVar4
                   ) / 0x18);
      }
      lVar12 = lVar12 + 0x20;
      *(uint *)&((vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
                  *)((longlong)(this_00 + 2) + 0x10))->_Mypair =
           rltests::qs::optimized::subMatrices._Mypair._Myval2._Myfirst[uVar11].cols;
      pEVar1 = rltests::qs::optimized::subMatrices._Mypair._Myval2._Myfirst + uVar11;
      uVar11 = uVar11 + 1;
      *(uint *)&((vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
                  *)((longlong)(this_00 + 2) + 0x14))->_Mypair = pEVar1->rows;
      this_00 = (_Vector_val<std::_Simple_types<unsigned_short>_> *)((longlong)(this_00 + 5) + 0x10)
      ;
    } while (uVar11 < (ulonglong)(lVar17 - lVar5));
  }
  piVar6 = local_230;
  ppuVar10 = (undefined **)((longlong)this + 0x10);
  if ((*local_230 <
       `public:___cdecl_pma::impl::PolyAllocator<rl4::VectorizedJointGroupQuaternionCalculationStrategy<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::VectorizedJointGroupQuaternionCalculationStrategy<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<rl4::VectorizedJointGroupQuaternionCalculationStrategy<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::VectorizedJointGroupQuaternionCalculationStrategy<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:___cdecl_pma::impl::PolyAllocator<rl4::VectorizedJointGroupQuaternionCalculationStrategy<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::VectorizedJointGroupQuaternionCalculationStrategy<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    atexit(`pma::impl::
           PolyAllocator<rl4::VectorizedJointGroupQuaternionCalculationStrategy<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,8,pma::DefaultMemoryResource>
           ::
           PolyAllocator<rl4::VectorizedJointGroupQuaternionCalculationStrategy<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,8,pma::DefaultMemoryResource>'
           ::__l2::_dynamic_atexit_destructor_for__dmr__);
    _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<rl4::VectorizedJointGroupQuaternionCalculationStrategy<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::VectorizedJointGroupQuaternionCalculationStrategy<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  ppuVar13 = &`public:___cdecl_pma::impl::PolyAllocator<rl4::VectorizedJointGroupQuaternionCalculationStrategy<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::VectorizedJointGroupQuaternionCalculationStrategy<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
              ::__l2::dmr;
  if (ppuVar10 != (undefined **)0x0) {
    ppuVar13 = ppuVar10;
  }
  MVar8 = (MemoryResource)(**(code **)(*ppuVar13 + 8))(ppuVar13,8,8);
  *(undefined ***)MVar8 =
       &
       ___7__VectorizedJointGroupQuaternionCalculationStrategy_MU__T256_UF128_sse_trimd___fallback_trimd__UF128_sse_3_U__QuaternionsToEulerAngles_U__ang_MUradians_impl_tdm___tdm___0A__rl4___rl4__6B_
  ;
  local_b8 = &
             ___7___Func_impl_no_alloc_V<lambda_1>__1____create___V___ManagedInstance_V__unique_ptr_U__JointGroupQuaternionCalculationStrategy_M_rl4__V__function___A6AXPEAU__JointGroupQuaternionCalculationStrategy_M_rl4___Z_std___std__U__VectorizedJointGroupQuaternionCalculationStrategy_MU__T256_UF128_sse_trimd___fallback_trimd__UF128_sse_3_U__QuaternionsToEulerAngles_U__ang_MUradians_impl_tdm___tdm___0A__rl4___rl4__U__JointGroupQuaternionCalculationStrategy_M_4__impl_pma__QEAA_AV__unique_ptr_U__JointGroupQuaternionCalculationStrategy_M_rl4__V__function___A6AXPEAU__JointGroupQuaternionCalculationStrategy_M_rl4___Z_std___std__XZ_XPEAU__JointGroupQuaternionCalculationStrategy_M_rl4___std__6B_
  ;
  local_80 = &local_b8;
  local_120 = (_Func_base<void,rl4::JointGroupQuaternionCalculationStrategy<float>_*> *)0x0;
  local_b0 = ppuVar13;
  local_120 = std::
              _Func_impl_no_alloc<`pma::impl::ManagedInstance<std::unique_ptr<rl4::JointGroupQuaternionCalculationStrategy<float>,std::function<void___cdecl(rl4::JointGroupQuaternionCalculationStrategy<float>_*)>_>,rl4::VectorizedJointGroupQuaternionCalculationStrategy<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,rl4::JointGroupQuaternionCalculationStrategy<float>_>::create<>'::__l2::<lambda_1>,void,rl4::JointGroupQuaternionCalculationStrategy<float>_*>
              ::_Move(&local_b8,local_158);
  if (local_80 != (undefined ***)0x0) {
    (*(code *)(*local_80)[4])(local_80,local_80 != &local_b8);
  }
  local_118 = MVar8;
  if ((*piVar6 < `public:___cdecl_pma::impl::PolyAllocator<rl4::QuaternionJointsEvaluator<float>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::QuaternionJointsEvaluator<float>,8,pma::DefaultMemoryResource>(void)___ptr64'
                 ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<rl4::QuaternionJointsEvaluator<float>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::QuaternionJointsEvaluator<float>,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:___cdecl_pma::impl::PolyAllocator<rl4::QuaternionJointsEvaluator<float>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::QuaternionJointsEvaluator<float>,8,pma::DefaultMemoryResource>(void)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    atexit(`pma::impl::
           PolyAllocator<rl4::QuaternionJointsEvaluator<float>,8,pma::DefaultMemoryResource>::
           PolyAllocator<rl4::QuaternionJointsEvaluator<float>,8,pma::DefaultMemoryResource>'::__l2
           ::_dynamic_atexit_destructor_for__dmr__);
    _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<rl4::QuaternionJointsEvaluator<float>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::QuaternionJointsEvaluator<float>,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  ppuVar13 = &`public:___cdecl_pma::impl::PolyAllocator<rl4::QuaternionJointsEvaluator<float>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::QuaternionJointsEvaluator<float>,8,pma::DefaultMemoryResource>(void)___ptr64'
              ::__l2::dmr;
  if (ppuVar10 != (undefined **)0x0) {
    ppuVar13 = ppuVar10;
  }
  MVar9 = (MemoryResource)(**(code **)(*ppuVar13 + 8))(ppuVar13,0xb0,8);
  MVar8 = local_118;
  local_118 = (MemoryResource)0x0;
  std::function<void___cdecl(rl4::JointGroupQuaternionCalculationStrategy<float>_*)>::
  function<void___cdecl(rl4::JointGroupQuaternionCalculationStrategy<float>_*)>
            ((function<void___cdecl(rl4::JointGroupQuaternionCalculationStrategy<float>_*)> *)
             local_228,
             (function<void___cdecl(rl4::JointGroupQuaternionCalculationStrategy<float>_*)> *)
             local_158);
  local_1e8 = (MemoryResource)0x0;
  *(undefined ***)MVar9 = &___7__QuaternionJointsEvaluator_M_rl4__6B_;
  std::function<void___cdecl(rl4::JointGroupQuaternionCalculationStrategy<float>_*)>::
  function<void___cdecl(rl4::JointGroupQuaternionCalculationStrategy<float>_*)>
            ((function<void___cdecl(rl4::JointGroupQuaternionCalculationStrategy<float>_*)> *)
             ((longlong)MVar9 + 8),
             (function<void___cdecl(rl4::JointGroupQuaternionCalculationStrategy<float>_*)> *)
             local_228);
  *(MemoryResource *)((longlong)MVar9 + 0x48) = MVar8;
  *(MemoryResource *)((longlong)MVar9 + 0x50) = local_248;
  *(MemoryResource *)((longlong)MVar9 + 0x58) = local_240;
  *(MemoryResource *)((longlong)MVar9 + 0x68) = local_238;
  *(MemoryResource *)((longlong)MVar9 + 0x60) = MVar18;
  *(MemoryResource *)((longlong)MVar9 + 0xa8) = (MemoryResource)0x0;
  if (local_1e8 != (MemoryResource)0x0) {
    local_248 = local_1e8;
    if ((longlong *)local_228._56_8_ == (longlong *)0x0) {
      std::_Xbad_function_call();
      return;
    }
    (**(code **)(*(longlong *)local_228._56_8_ + 0x10))(local_228._56_8_,&local_248);
  }
  if ((longlong *)local_228._56_8_ != (longlong *)0x0) {
    (**(code **)(*(longlong *)local_228._56_8_ + 0x20))
              (local_228._56_8_,(undefined1 *)local_228._56_8_ != local_228);
  }
  local_78 = &
             ___7___Func_impl_no_alloc_V<lambda_1>__1____create_V__unique_ptr_U__JointGroupQuaternionCalculationStrategy_M_rl4__V__function___A6AXPEAU__JointGroupQuaternionCalculationStrategy_M_rl4___Z_std___std__V__vector_U__JointGroup_M_rl4__V__PolyAllocator_U__JointGroup_M_rl4___07VDefaultMemoryResource_pma___pma___2___TPEAVAlignedMemoryResource_pma_____ManagedInstance_V__unique_ptr_VJointsEvaluator_rl4__V__function___A6AXPEAVJointsEvaluator_rl4___Z_std___std__V__QuaternionJointsEvaluator_M_rl4__VJointsEvaluator_4__impl_pma__QEAA_AV__unique_ptr_VJointsEvaluator_rl4__V__function___A6AXPEAVJointsEvaluator_rl4___Z_std___std____QEAV__unique_ptr_U__JointGroupQuaternionCalculationStrategy_M_rl4__V__function___A6AXPEAU__JointGroupQuaternionCalculationStrategy_M_rl4___Z_std___6___QEAV__vector_U__JointGroup_M_rl4__V__PolyAllocator_U__JointGroup_M_rl4___07VDefaultMemoryResource_pma___pma___6___QEA__T__QEAPEAVAlignedMemoryResource_4__Z_XPEAVJointsEvaluator_rl4___std__6B_
  ;
  local_40 = &local_78;
  local_d0 = (_Func_base<void,rl4::JointsEvaluator_*> *)0x0;
  local_70 = ppuVar13;
  local_d0 = std::
             _Func_impl_no_alloc<`pma::impl::ManagedInstance<std::unique_ptr<rl4::JointsEvaluator,std::function<void___cdecl(rl4::JointsEvaluator_*)>_>,rl4::QuaternionJointsEvaluator<float>,rl4::JointsEvaluator>::create<std::unique_ptr<rl4::JointGroupQuaternionCalculationStrategy<float>,std::function<void___cdecl(rl4::JointGroupQuaternionCalculationStrategy<float>_*)>_>,std::vector<rl4::JointGroup<float>,pma::PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>_>,std::nullptr_t,pma::AlignedMemoryResource_*>'::__l2::<lambda_1>,void,rl4::JointsEvaluator_*>
             ::_Move(&local_78,local_108);
  if (local_40 != (undefined ***)0x0) {
    (*(code *)(*local_40)[4])(local_40,local_40 != &local_78);
  }
  local_c8 = MVar9;
  std::unique_ptr<rl4::JointsEvaluator,std::function<void___cdecl(rl4::JointsEvaluator_*)>_>::
  operator=<std::function<void___cdecl(rl4::JointsEvaluator_*)>,0>
            ((unique_ptr<rl4::JointsEvaluator,std::function<void___cdecl(rl4::JointsEvaluator_*)>_>
              *)((longlong)this + 0x90),
             (unique_ptr<rl4::JointsEvaluator,std::function<void___cdecl(rl4::JointsEvaluator_*)>_>
              *)local_108);
  if (local_c8 != (MemoryResource)0x0) {
    local_248 = local_c8;
    if (local_d0 == (_Func_base<void,rl4::JointsEvaluator_*> *)0x0) {
      std::_Xbad_function_call();
      return;
    }
    (**(code **)((longlong)*local_d0 + 0x10))(local_d0,&local_248);
  }
  if (local_d0 != (_Func_base<void,rl4::JointsEvaluator_*> *)0x0) {
    (**(code **)((longlong)*local_d0 + 0x20))
              (local_d0,local_d0 != (_Func_base<void,rl4::JointsEvaluator_*> *)local_108);
  }
  if (local_118 != (MemoryResource)0x0) {
    local_248 = local_118;
    if (local_120 == (_Func_base<void,rl4::JointGroupQuaternionCalculationStrategy<float>_*> *)0x0)
    {
      std::_Xbad_function_call();
      return;
    }
    (**(code **)((longlong)*local_120 + 0x10))(local_120,&local_248);
  }
  if (local_120 != (_Func_base<void,rl4::JointGroupQuaternionCalculationStrategy<float>_*> *)0x0) {
    (**(code **)((longlong)*local_120 + 0x20))
              (local_120,
               local_120 !=
               (_Func_base<void,rl4::JointGroupQuaternionCalculationStrategy<float>_*> *)local_158);
  }
  return;
}

// SetUpImpl<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>_> @ 14c56af70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void __thiscall
`anonymous_namespace'::
QuaternionEvaluatorTest<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>_>
::
SetUpImpl<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>_>
          (void *this)

{
  Extent *pEVar1;
  float *pfVar2;
  ushort *puVar3;
  LODRegion *pLVar4;
  longlong lVar5;
  int *piVar6;
  JointGroup<float> *pJVar7;
  MemoryResource MVar8;
  MemoryResource MVar9;
  undefined **ppuVar10;
  ulonglong uVar11;
  longlong lVar12;
  _Vector_val<std::_Simple_types<unsigned_short>_> *this_00;
  undefined **ppuVar13;
  vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *pvVar14;
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *pvVar15;
  vector<rl4::LODRegion,pma::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>_> *pvVar16;
  longlong lVar17;
  MemoryResource MVar18;
  undefined1 auStack_268 [32];
  MemoryResource local_248;
  MemoryResource local_240;
  MemoryResource local_238;
  int *local_230;
  undefined1 local_228 [64];
  MemoryResource local_1e8;
  JointGroup<float> local_1e0;
  undefined1 local_158 [56];
  undefined8 local_120;
  MemoryResource local_118;
  undefined1 local_108 [56];
  undefined8 local_d0;
  MemoryResource local_c8;
  undefined **local_b8;
  undefined **local_b0;
  undefined ***local_80;
  undefined **local_78;
  undefined **local_70;
  undefined ***local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_268;
  *(undefined8 *)((longlong)this + 0xd8) = 0;
  MVar18 = (MemoryResource)((longlong)this + 0x10);
  *(undefined1 *)((longlong)this + 0xe0) = 4;
  uVar11 = (longlong)rltests::qs::optimized::floatValues._Mypair._Myval2._Mylast -
           (longlong)rltests::qs::optimized::floatValues._Mypair._Myval2._Myfirst >> 5;
  pJVar7 = rl4::JointGroup<float>::JointGroup<float>(&local_1e0,(MemoryResource *)MVar18);
  local_230 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x9d4c);
  if ((*local_230 <
       `public:___cdecl_pma::impl::PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>(void)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:___cdecl_pma::impl::PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>(void)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    atexit(`pma::impl::PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>::
           PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>'::__l2::
           _dynamic_atexit_destructor_for__dmr__);
    _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  local_248 = (MemoryResource)
              &`public:___cdecl_pma::impl::PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>(void)___ptr64'
               ::__l2::dmr;
  if (MVar18 != (MemoryResource)0x0) {
    local_248 = MVar18;
  }
  MVar8 = (MemoryResource)0x0;
  MVar18 = (MemoryResource)0x0;
  local_240 = (MemoryResource)0x0;
  local_238 = (MemoryResource)0x0;
  if (uVar11 != 0) {
    if (0x1e1e1e1e1e1e1e1 < uVar11) {
                    /* WARNING: Subroutine does not return */
      std::
      vector<rl4::JointGroup<float>,pma::PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>_>
      ::_Xlength();
    }
    MVar8 = (MemoryResource)
            (**(code **)((longlong)*(MemoryResource *)local_248 + 8))(local_248,uVar11 * 0x88,8);
    local_238 = (MemoryResource)((longlong)MVar8 + uVar11 * 0x88);
    MVar18 = MVar8;
    local_240 = MVar8;
    do {
      rl4::JointGroup<float>::JointGroup<float>((JointGroup<float> *)MVar18,pJVar7);
      MVar18 = (MemoryResource)((longlong)MVar18 + 0x88);
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
  }
  rl4::JointGroup<float>::~JointGroup<float>(&local_1e0);
  uVar11 = 0;
  lVar5 = (longlong)MVar18 - (longlong)MVar8 >> 0x3f;
  lVar17 = ((longlong)MVar18 - (longlong)MVar8) / 0x88 + lVar5;
  if (lVar17 != lVar5) {
    lVar12 = 0;
    this_00 = (_Vector_val<std::_Simple_types<unsigned_short>_> *)((longlong)local_240 + 0x40);
    do {
      pvVar14 = (vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *)
                (&((rltests::qs::optimized::floatValues._Mypair._Myval2._Myfirst)->_Mypair)._Myval1.
                  field_0x0 + lVar12);
      if ((vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *)
          ((longlong)(this_00 + 0xfffffffffffffffd) + 8U) != pvVar14) {
        pfVar2 = ((_Vector_val<std::_Simple_types<float>_> *)((longlong)&pvVar14->_Mypair + 8))->
                 _Myfirst;
        std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>::
        _Assign_counted_range<float_*>
                  ((vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *)
                   ((longlong)(this_00 + 0xfffffffffffffffd) + 8U),pfVar2,
                   (longlong)*(float **)((longlong)&pvVar14->_Mypair + 0x10) - (longlong)pfVar2 >> 2
                  );
      }
      pvVar15 = (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
                 *)(&((rltests::qs::optimized::inputIndices._Mypair._Myval2._Myfirst)->_Mypair).
                     _Myval1.field_0x0 + lVar12);
      if ((vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *
          )((longlong)(this_00 + 0xfffffffffffffffe) + 0x10U) != pvVar15) {
        puVar3 = ((_Vector_val<std::_Simple_types<unsigned_short>_> *)
                 ((longlong)&pvVar15->_Mypair + 8))->_Myfirst;
        std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
        ::_Assign_counted_range<unsigned_short_*>
                  ((vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
                    *)((longlong)(this_00 + 0xfffffffffffffffe) + 0x10U),puVar3,
                   (longlong)*(ushort **)((longlong)&pvVar15->_Mypair + 0x10) - (longlong)puVar3 >>
                   1);
      }
      pvVar15 = (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
                 *)(&((rltests::qs::optimized::outputIndices._Mypair._Myval2._Myfirst
                       [*(longlong *)((longlong)this + 0xd8)]._Mypair._Myval2._Myfirst)->_Mypair).
                     _Myval1.field_0x0 + lVar12);
      if (this_00 != (_Vector_val<std::_Simple_types<unsigned_short>_> *)pvVar15) {
        puVar3 = (pvVar15->_Mypair)._Myval2._Myfirst;
        std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
        ::_Assign_counted_range<unsigned_short_*>
                  ((vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
                    *)this_00,puVar3,
                   (longlong)(pvVar15->_Mypair)._Myval2._Mylast - (longlong)puVar3 >> 1);
      }
      pvVar16 = (vector<rl4::LODRegion,pma::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>_>
                 *)(&((rltests::qs::optimized::lodRegions._Mypair._Myval2._Myfirst)->_Mypair).
                     _Myval1.field_0x0 + lVar12);
      if ((vector<rl4::LODRegion,pma::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>_> *
          )((longlong)(this_00 + 1) + 8U) != pvVar16) {
        pLVar4 = ((_Vector_val<std::_Simple_types<rl4::LODRegion>_> *)
                 ((longlong)&pvVar16->_Mypair + 8))->_Myfirst;
        std::vector<rl4::LODRegion,pma::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>_>
        ::_Assign_counted_range<rl4::LODRegion_*>
                  ((vector<rl4::LODRegion,pma::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>_>
                    *)((longlong)(this_00 + 1) + 8U),pLVar4,
                   ((longlong)*(LODRegion **)((longlong)&pvVar16->_Mypair + 0x10) - (longlong)pLVar4
                   ) / 0x18);
      }
      lVar12 = lVar12 + 0x20;
      *(uint *)&((vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
                  *)((longlong)(this_00 + 2) + 0x10))->_Mypair =
           rltests::qs::optimized::subMatrices._Mypair._Myval2._Myfirst[uVar11].cols;
      pEVar1 = rltests::qs::optimized::subMatrices._Mypair._Myval2._Myfirst + uVar11;
      uVar11 = uVar11 + 1;
      *(uint *)&((vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
                  *)((longlong)(this_00 + 2) + 0x14))->_Mypair = pEVar1->rows;
      this_00 = (_Vector_val<std::_Simple_types<unsigned_short>_> *)((longlong)(this_00 + 5) + 0x10)
      ;
    } while (uVar11 < (ulonglong)(lVar17 - lVar5));
  }
  piVar6 = local_230;
  ppuVar10 = (undefined **)((longlong)this + 0x10);
  if ((*local_230 <
       `public:___cdecl_pma::impl::PolyAllocator<rl4::VectorizedJointGroupQuaternionCalculationStrategy<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::VectorizedJointGroupQuaternionCalculationStrategy<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>,8,pma::DefaultMemoryResource>(void)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<rl4::VectorizedJointGroupQuaternionCalculationStrategy<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::VectorizedJointGroupQuaternionCalculationStrategy<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:___cdecl_pma::impl::PolyAllocator<rl4::VectorizedJointGroupQuaternionCalculationStrategy<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::VectorizedJointGroupQuaternionCalculationStrategy<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>,8,pma::DefaultMemoryResource>(void)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    atexit(`pma::impl::
           PolyAllocator<rl4::VectorizedJointGroupQuaternionCalculationStrategy<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>,8,pma::DefaultMemoryResource>
           ::
           PolyAllocator<rl4::VectorizedJointGroupQuaternionCalculationStrategy<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>,8,pma::DefaultMemoryResource>'
           ::__l2::_dynamic_atexit_destructor_for__dmr__);
    _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<rl4::VectorizedJointGroupQuaternionCalculationStrategy<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::VectorizedJointGroupQuaternionCalculationStrategy<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  ppuVar13 = &`public:___cdecl_pma::impl::PolyAllocator<rl4::VectorizedJointGroupQuaternionCalculationStrategy<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::VectorizedJointGroupQuaternionCalculationStrategy<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>,8,pma::DefaultMemoryResource>(void)___ptr64'
              ::__l2::dmr;
  if (ppuVar10 != (undefined **)0x0) {
    ppuVar13 = ppuVar10;
  }
  MVar8 = (MemoryResource)(**(code **)(*ppuVar13 + 8))(ppuVar13,8,8);
  *(undefined ***)MVar8 =
       &
       ___7__VectorizedJointGroupQuaternionCalculationStrategy_MU__T256_UF128_sse_trimd___fallback_trimd__UF128_sse_3_UPassthroughAdapter_rl4___rl4__6B_
  ;
  local_b8 = &
             ___7___Func_impl_no_alloc_V<lambda_1>__1____create___V___ManagedInstance_V__unique_ptr_U__JointGroupQuaternionCalculationStrategy_M_rl4__V__function___A6AXPEAU__JointGroupQuaternionCalculationStrategy_M_rl4___Z_std___std__U__VectorizedJointGroupQuaternionCalculationStrategy_MU__T256_UF128_sse_trimd___fallback_trimd__UF128_sse_3_UPassthroughAdapter_rl4___rl4__U__JointGroupQuaternionCalculationStrategy_M_4__impl_pma__QEAA_AV__unique_ptr_U__JointGroupQuaternionCalculationStrategy_M_rl4__V__function___A6AXPEAU__JointGroupQuaternionCalculationStrategy_M_rl4___Z_std___std__XZ_XPEAU__JointGroupQuaternionCalculationStrategy_M_rl4___std__6B_
  ;
  local_80 = &local_b8;
  local_120 = (_Func_base<void,rl4::JointGroupQuaternionCalculationStrategy<float>_*> *)0x0;
  local_b0 = ppuVar13;
  local_120 = std::
              _Func_impl_no_alloc<`pma::impl::ManagedInstance<std::unique_ptr<rl4::JointGroupQuaternionCalculationStrategy<float>,std::function<void___cdecl(rl4::JointGroupQuaternionCalculationStrategy<float>_*)>_>,rl4::VectorizedJointGroupQuaternionCalculationStrategy<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>,rl4::JointGroupQuaternionCalculationStrategy<float>_>::create<>'::__l2::<lambda_1>,void,rl4::JointGroupQuaternionCalculationStrategy<float>_*>
              ::_Move(&local_b8,local_158);
  if (local_80 != (undefined ***)0x0) {
    (*(code *)(*local_80)[4])(local_80,local_80 != &local_b8);
  }
  local_118 = MVar8;
  if ((*piVar6 < `public:___cdecl_pma::impl::PolyAllocator<rl4::QuaternionJointsEvaluator<float>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::QuaternionJointsEvaluator<float>,8,pma::DefaultMemoryResource>(void)___ptr64'
                 ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<rl4::QuaternionJointsEvaluator<float>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::QuaternionJointsEvaluator<float>,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:___cdecl_pma::impl::PolyAllocator<rl4::QuaternionJointsEvaluator<float>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::QuaternionJointsEvaluator<float>,8,pma::DefaultMemoryResource>(void)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    atexit(`pma::impl::
           PolyAllocator<rl4::QuaternionJointsEvaluator<float>,8,pma::DefaultMemoryResource>::
           PolyAllocator<rl4::QuaternionJointsEvaluator<float>,8,pma::DefaultMemoryResource>'::__l2
           ::_dynamic_atexit_destructor_for__dmr__);
    _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<rl4::QuaternionJointsEvaluator<float>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::QuaternionJointsEvaluator<float>,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  ppuVar13 = &`public:___cdecl_pma::impl::PolyAllocator<rl4::QuaternionJointsEvaluator<float>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::QuaternionJointsEvaluator<float>,8,pma::DefaultMemoryResource>(void)___ptr64'
              ::__l2::dmr;
  if (ppuVar10 != (undefined **)0x0) {
    ppuVar13 = ppuVar10;
  }
  MVar9 = (MemoryResource)(**(code **)(*ppuVar13 + 8))(ppuVar13,0xb0,8);
  MVar8 = local_118;
  local_118 = (MemoryResource)0x0;
  std::function<void___cdecl(rl4::JointGroupQuaternionCalculationStrategy<float>_*)>::
  function<void___cdecl(rl4::JointGroupQuaternionCalculationStrategy<float>_*)>
            ((function<void___cdecl(rl4::JointGroupQuaternionCalculationStrategy<float>_*)> *)
             local_228,
             (function<void___cdecl(rl4::JointGroupQuaternionCalculationStrategy<float>_*)> *)
             local_158);
  local_1e8 = (MemoryResource)0x0;
  *(undefined ***)MVar9 = &___7__QuaternionJointsEvaluator_M_rl4__6B_;
  std::function<void___cdecl(rl4::JointGroupQuaternionCalculationStrategy<float>_*)>::
  function<void___cdecl(rl4::JointGroupQuaternionCalculationStrategy<float>_*)>
            ((function<void___cdecl(rl4::JointGroupQuaternionCalculationStrategy<float>_*)> *)
             ((longlong)MVar9 + 8),
             (function<void___cdecl(rl4::JointGroupQuaternionCalculationStrategy<float>_*)> *)
             local_228);
  *(MemoryResource *)((longlong)MVar9 + 0x48) = MVar8;
  *(MemoryResource *)((longlong)MVar9 + 0x50) = local_248;
  *(MemoryResource *)((longlong)MVar9 + 0x58) = local_240;
  *(MemoryResource *)((longlong)MVar9 + 0x68) = local_238;
  *(MemoryResource *)((longlong)MVar9 + 0x60) = MVar18;
  *(MemoryResource *)((longlong)MVar9 + 0xa8) = (MemoryResource)0x0;
  if (local_1e8 != (MemoryResource)0x0) {
    local_248 = local_1e8;
    if ((longlong *)local_228._56_8_ == (longlong *)0x0) {
      std::_Xbad_function_call();
      return;
    }
    (**(code **)(*(longlong *)local_228._56_8_ + 0x10))(local_228._56_8_,&local_248);
  }
  if ((longlong *)local_228._56_8_ != (longlong *)0x0) {
    (**(code **)(*(longlong *)local_228._56_8_ + 0x20))
              (local_228._56_8_,(undefined1 *)local_228._56_8_ != local_228);
  }
  local_78 = &
             ___7___Func_impl_no_alloc_V<lambda_1>__1____create_V__unique_ptr_U__JointGroupQuaternionCalculationStrategy_M_rl4__V__function___A6AXPEAU__JointGroupQuaternionCalculationStrategy_M_rl4___Z_std___std__V__vector_U__JointGroup_M_rl4__V__PolyAllocator_U__JointGroup_M_rl4___07VDefaultMemoryResource_pma___pma___2___TPEAVAlignedMemoryResource_pma_____ManagedInstance_V__unique_ptr_VJointsEvaluator_rl4__V__function___A6AXPEAVJointsEvaluator_rl4___Z_std___std__V__QuaternionJointsEvaluator_M_rl4__VJointsEvaluator_4__impl_pma__QEAA_AV__unique_ptr_VJointsEvaluator_rl4__V__function___A6AXPEAVJointsEvaluator_rl4___Z_std___std____QEAV__unique_ptr_U__JointGroupQuaternionCalculationStrategy_M_rl4__V__function___A6AXPEAU__JointGroupQuaternionCalculationStrategy_M_rl4___Z_std___6___QEAV__vector_U__JointGroup_M_rl4__V__PolyAllocator_U__JointGroup_M_rl4___07VDefaultMemoryResource_pma___pma___6___QEA__T__QEAPEAVAlignedMemoryResource_4__Z_XPEAVJointsEvaluator_rl4___std__6B_
  ;
  local_40 = &local_78;
  local_d0 = (_Func_base<void,rl4::JointsEvaluator_*> *)0x0;
  local_70 = ppuVar13;
  local_d0 = std::
             _Func_impl_no_alloc<`pma::impl::ManagedInstance<std::unique_ptr<rl4::JointsEvaluator,std::function<void___cdecl(rl4::JointsEvaluator_*)>_>,rl4::QuaternionJointsEvaluator<float>,rl4::JointsEvaluator>::create<std::unique_ptr<rl4::JointGroupQuaternionCalculationStrategy<float>,std::function<void___cdecl(rl4::JointGroupQuaternionCalculationStrategy<float>_*)>_>,std::vector<rl4::JointGroup<float>,pma::PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>_>,std::nullptr_t,pma::AlignedMemoryResource_*>'::__l2::<lambda_1>,void,rl4::JointsEvaluator_*>
             ::_Move(&local_78,local_108);
  if (local_40 != (undefined ***)0x0) {
    (*(code *)(*local_40)[4])(local_40,local_40 != &local_78);
  }
  local_c8 = MVar9;
  std::unique_ptr<rl4::JointsEvaluator,std::function<void___cdecl(rl4::JointsEvaluator_*)>_>::
  operator=<std::function<void___cdecl(rl4::JointsEvaluator_*)>,0>
            ((unique_ptr<rl4::JointsEvaluator,std::function<void___cdecl(rl4::JointsEvaluator_*)>_>
              *)((longlong)this + 0x90),
             (unique_ptr<rl4::JointsEvaluator,std::function<void___cdecl(rl4::JointsEvaluator_*)>_>
              *)local_108);
  if (local_c8 != (MemoryResource)0x0) {
    local_248 = local_c8;
    if (local_d0 == (_Func_base<void,rl4::JointsEvaluator_*> *)0x0) {
      std::_Xbad_function_call();
      return;
    }
    (**(code **)((longlong)*local_d0 + 0x10))(local_d0,&local_248);
  }
  if (local_d0 != (_Func_base<void,rl4::JointsEvaluator_*> *)0x0) {
    (**(code **)((longlong)*local_d0 + 0x20))
              (local_d0,local_d0 != (_Func_base<void,rl4::JointsEvaluator_*> *)local_108);
  }
  if (local_118 != (MemoryResource)0x0) {
    local_248 = local_118;
    if (local_120 == (_Func_base<void,rl4::JointGroupQuaternionCalculationStrategy<float>_*> *)0x0)
    {
      std::_Xbad_function_call();
      return;
    }
    (**(code **)((longlong)*local_120 + 0x10))(local_120,&local_248);
  }
  if (local_120 != (_Func_base<void,rl4::JointGroupQuaternionCalculationStrategy<float>_*> *)0x0) {
    (**(code **)((longlong)*local_120 + 0x20))
              (local_120,
               local_120 !=
               (_Func_base<void,rl4::JointGroupQuaternionCalculationStrategy<float>_*> *)local_158);
  }
  return;
}

// _Assign_counted_range<unsigned_short_*> @ 14c56b540

void __thiscall
std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>::
_Assign_counted_range<unsigned_short_*>
          (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
           *this,ushort *param_1,ulong64 param_2)

{
  ushort uVar1;
  PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource> PVar2;
  longlong lVar3;
  ushort *puVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  puVar4 = (this->_Mypair)._Myval2._Myfirst;
  uVar7 = (longlong)(this->_Mypair)._Myval2._Myend - (longlong)puVar4 >> 1;
  if (uVar7 < param_2) {
    if (0x7fffffffffffffff < param_2) {
                    /* WARNING: Subroutine does not return */
      _Xlength();
    }
    uVar6 = 0x7fffffffffffffff;
    if ((uVar7 <= 0x7fffffffffffffff - (uVar7 >> 1)) &&
       (uVar6 = uVar7 + (uVar7 >> 1), uVar6 < param_2)) {
      uVar6 = param_2;
    }
    if (puVar4 != (ushort *)0x0) {
      PVar2 = (this->_Mypair)._Myval1;
      (**(code **)(*(longlong *)PVar2 + 0x10))(PVar2,puVar4,uVar7 * 2,8);
      (this->_Mypair)._Myval2._Myfirst = (ushort *)0x0;
      (this->_Mypair)._Myval2._Mylast = (ushort *)0x0;
      (this->_Mypair)._Myval2._Myend = (ushort *)0x0;
    }
    PVar2 = (this->_Mypair)._Myval1;
    puVar4 = (ushort *)(**(code **)(*(longlong *)PVar2 + 8))(PVar2,uVar6 * 2,8);
    (this->_Mypair)._Myval2._Myfirst = puVar4;
    (this->_Mypair)._Myval2._Mylast = puVar4;
    (this->_Mypair)._Myval2._Myend = puVar4 + uVar6;
    puVar4 = (this->_Mypair)._Myval2._Myfirst;
    for (; param_2 != 0; param_2 = param_2 - 1) {
      uVar1 = *param_1;
      param_1 = param_1 + 1;
      *puVar4 = uVar1;
      puVar4 = puVar4 + 1;
    }
    (this->_Mypair)._Myval2._Mylast = puVar4;
  }
  else {
    uVar7 = (longlong)(this->_Mypair)._Myval2._Mylast - (longlong)puVar4 >> 1;
    if (uVar7 < param_2) {
      memmove(puVar4,param_1,uVar7 * 2);
      puVar4 = (this->_Mypair)._Myval2._Mylast;
      lVar5 = param_2 - uVar7;
      if (lVar5 != 0) {
        lVar3 = uVar7 * 2 - (longlong)puVar4;
        do {
          *puVar4 = *(ushort *)((longlong)param_1 + lVar3 + (longlong)puVar4);
          puVar4 = puVar4 + 1;
          lVar5 = lVar5 + -1;
        } while (lVar5 != 0);
      }
      (this->_Mypair)._Myval2._Mylast = puVar4;
    }
    else {
      memmove(puVar4,param_1,param_2 * 2);
      (this->_Mypair)._Myval2._Mylast = puVar4 + param_2;
    }
  }
  return;
}

// _Assign_counted_range<float_*> @ 14c56b6a0

void __thiscall
std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>::
_Assign_counted_range<float_*>
          (vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *this,
          float *param_1,ulong64 param_2)

{
  float fVar1;
  PolyAllocator<float,64,pma::AlignedMemoryResource> PVar2;
  longlong lVar3;
  float *pfVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  
  pfVar4 = (this->_Mypair)._Myval2._Myfirst;
  uVar7 = (longlong)(this->_Mypair)._Myval2._Myend - (longlong)pfVar4 >> 2;
  if (uVar7 < param_2) {
    if (0x3fffffffffffffff < param_2) {
                    /* WARNING: Subroutine does not return */
      _Xlength();
    }
    uVar5 = 0x3fffffffffffffff;
    if ((uVar7 <= 0x3fffffffffffffff - (uVar7 >> 1)) &&
       (uVar5 = uVar7 + (uVar7 >> 1), uVar5 < param_2)) {
      uVar5 = param_2;
    }
    if (pfVar4 != (float *)0x0) {
      PVar2 = (this->_Mypair)._Myval1;
      (**(code **)(*(longlong *)PVar2 + 0x10))(PVar2,pfVar4,uVar7 * 4,0x40);
      (this->_Mypair)._Myval2._Myfirst = (float *)0x0;
      (this->_Mypair)._Myval2._Mylast = (float *)0x0;
      (this->_Mypair)._Myval2._Myend = (float *)0x0;
    }
    PVar2 = (this->_Mypair)._Myval1;
    pfVar4 = (float *)(**(code **)(*(longlong *)PVar2 + 8))(PVar2,uVar5 * 4,0x40);
    (this->_Mypair)._Myval2._Myfirst = pfVar4;
    (this->_Mypair)._Myval2._Mylast = pfVar4;
    (this->_Mypair)._Myval2._Myend = pfVar4 + uVar5;
    pfVar4 = (this->_Mypair)._Myval2._Myfirst;
    for (; param_2 != 0; param_2 = param_2 - 1) {
      fVar1 = *param_1;
      param_1 = param_1 + 1;
      *pfVar4 = fVar1;
      pfVar4 = pfVar4 + 1;
    }
    (this->_Mypair)._Myval2._Mylast = pfVar4;
  }
  else {
    uVar7 = (longlong)(this->_Mypair)._Myval2._Mylast - (longlong)pfVar4 >> 2;
    if (uVar7 < param_2) {
      memmove(pfVar4,param_1,uVar7 * 4);
      pfVar4 = (this->_Mypair)._Myval2._Mylast;
      lVar6 = param_2 - uVar7;
      if (lVar6 != 0) {
        lVar3 = uVar7 * 4 - (longlong)pfVar4;
        do {
          *pfVar4 = *(float *)((longlong)param_1 + lVar3 + (longlong)pfVar4);
          pfVar4 = pfVar4 + 1;
          lVar6 = lVar6 + -1;
        } while (lVar6 != 0);
      }
      (this->_Mypair)._Myval2._Mylast = pfVar4;
    }
    else {
      memmove(pfVar4,param_1,param_2 * 4);
      (this->_Mypair)._Myval2._Mylast = pfVar4 + param_2;
    }
  }
  return;
}

// _Assign_counted_range<rl4::LODRegion_*> @ 14c56b820

void __thiscall
std::vector<rl4::LODRegion,pma::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>_>::
_Assign_counted_range<rl4::LODRegion_*>
          (vector<rl4::LODRegion,pma::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>_>
           *this,LODRegion *param_1,ulong64 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource> PVar3;
  undefined8 uVar4;
  uint uVar5;
  LODRegion *pLVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  
  pLVar6 = (this->_Mypair)._Myval2._Myfirst;
  uVar10 = ((longlong)(this->_Mypair)._Myval2._Myend - (longlong)pLVar6) / 0x18;
  if (uVar10 < param_2) {
    if (0xaaaaaaaaaaaaaaa < param_2) {
                    /* WARNING: Subroutine does not return */
      _Xlength();
    }
    uVar9 = 0xaaaaaaaaaaaaaaa;
    if ((uVar10 <= 0xaaaaaaaaaaaaaaa - (uVar10 >> 1)) &&
       (uVar9 = uVar10 + (uVar10 >> 1), uVar9 < param_2)) {
      uVar9 = param_2;
    }
    if (pLVar6 != (LODRegion *)0x0) {
      PVar3 = (this->_Mypair)._Myval1;
      (**(code **)(*(longlong *)PVar3 + 0x10))(PVar3,pLVar6,uVar10 * 0x18,8);
      (this->_Mypair)._Myval2._Myfirst = (LODRegion *)0x0;
      (this->_Mypair)._Myval2._Mylast = (LODRegion *)0x0;
      (this->_Mypair)._Myval2._Myend = (LODRegion *)0x0;
    }
    PVar3 = (this->_Mypair)._Myval1;
    pLVar6 = (LODRegion *)(**(code **)(*(longlong *)PVar3 + 8))(PVar3,uVar9 * 0x18,8);
    (this->_Mypair)._Myval2._Myfirst = pLVar6;
    (this->_Mypair)._Myval2._Mylast = pLVar6;
    (this->_Mypair)._Myval2._Myend = pLVar6 + uVar9;
    pLVar6 = (this->_Mypair)._Myval2._Myfirst;
    for (; param_2 != 0; param_2 = param_2 - 1) {
      uVar5 = (param_1->inputLODs).sizeAlignedTo4;
      uVar2 = *(undefined8 *)&(param_1->inputLODs).sizeAlignedTo8;
      (pLVar6->inputLODs).size = (param_1->inputLODs).size;
      (pLVar6->inputLODs).sizeAlignedTo4 = uVar5;
      *(undefined8 *)&(pLVar6->inputLODs).sizeAlignedTo8 = uVar2;
      uVar5 = (param_1->outputLODs).sizePaddedToSecondLastFullBlock;
      (pLVar6->outputLODs).sizePaddedToLastFullBlock =
           (param_1->outputLODs).sizePaddedToLastFullBlock;
      (pLVar6->outputLODs).sizePaddedToSecondLastFullBlock = uVar5;
      pLVar6 = pLVar6 + 1;
      param_1 = param_1 + 1;
    }
  }
  else {
    lVar7 = (longlong)(this->_Mypair)._Myval2._Mylast - (longlong)pLVar6;
    lVar7 = lVar7 / 6 + (lVar7 >> 0x3f);
    uVar10 = (lVar7 >> 2) - (lVar7 >> 0x3f);
    if (uVar10 < param_2) {
      memmove(pLVar6,param_1,uVar10 * 0x18);
      pLVar6 = (this->_Mypair)._Myval2._Mylast;
      lVar7 = param_2 - uVar10;
      if (lVar7 != 0) {
        lVar8 = (longlong)param_1 + (uVar10 * 0x18 - (longlong)pLVar6);
        do {
          puVar1 = (undefined8 *)(lVar8 + (longlong)pLVar6);
          uVar2 = *puVar1;
          uVar4 = puVar1[1];
          (pLVar6->inputLODs).size = (int)uVar2;
          (pLVar6->inputLODs).sizeAlignedTo4 = (int)((ulonglong)uVar2 >> 0x20);
          *(undefined8 *)&(pLVar6->inputLODs).sizeAlignedTo8 = uVar4;
          uVar2 = *(undefined8 *)(lVar8 + 0x10 + (longlong)pLVar6);
          (pLVar6->outputLODs).sizePaddedToLastFullBlock = (int)uVar2;
          (pLVar6->outputLODs).sizePaddedToSecondLastFullBlock = (int)((ulonglong)uVar2 >> 0x20);
          pLVar6 = pLVar6 + 1;
          lVar7 = lVar7 + -1;
        } while (lVar7 != 0);
      }
    }
    else {
      memmove(pLVar6,param_1,param_2 * 0x18);
      pLVar6 = pLVar6 + param_2;
    }
  }
  (this->_Mypair)._Myval2._Mylast = pLVar6;
  return;
}

// _Copy_memmove_n<rl4::LODRegion_*,rl4::LODRegion_*> @ 14c56b9e0

LODRegion * __cdecl
std::_Copy_memmove_n<rl4::LODRegion_*,rl4::LODRegion_*>
          (LODRegion *param_1,ulong64 param_2,LODRegion *param_3)

{
  memmove(param_3,param_1,param_2 * 0x18);
  return param_3 + param_2;
}

// _Resize<std::_Value_init_tag> @ 14c56ba20

void __thiscall
std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>::
_Resize<std::_Value_init_tag>
          (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
           *this,ulong64 param_1,_Value_init_tag *param_2)

{
  ushort *puVar1;
  PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource> PVar2;
  ushort *puVar3;
  ushort *puVar4;
  ulonglong uVar5;
  ushort *puVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  
  puVar4 = (this->_Mypair)._Myval2._Mylast;
  puVar1 = (this->_Mypair)._Myval2._Myfirst;
  uVar9 = (longlong)puVar4 - (longlong)puVar1 >> 1;
  if (param_1 < uVar9) {
    (this->_Mypair)._Myval2._Mylast = puVar1 + param_1;
  }
  else if (uVar9 < param_1) {
    uVar5 = (longlong)(this->_Mypair)._Myval2._Myend - (longlong)puVar1 >> 1;
    if (uVar5 < param_1) {
      if (0x7fffffffffffffff < param_1) {
                    /* WARNING: Subroutine does not return */
        _Xlength();
      }
      uVar7 = 0x7fffffffffffffff;
      if ((uVar5 <= 0x7fffffffffffffff - (uVar5 >> 1)) &&
         (uVar7 = uVar5 + (uVar5 >> 1), uVar7 < param_1)) {
        uVar7 = param_1;
      }
      PVar2 = (this->_Mypair)._Myval1;
      puVar4 = (ushort *)(**(code **)(*(longlong *)PVar2 + 8))(PVar2,uVar7 * 2,8);
      if (param_1 - uVar9 != 0) {
        memset(puVar4 + uVar9,0,(param_1 - uVar9) * 2);
      }
      puVar3 = (this->_Mypair)._Myval2._Mylast;
      puVar1 = puVar4;
      for (puVar6 = (this->_Mypair)._Myval2._Myfirst; puVar6 != puVar3; puVar6 = puVar6 + 1) {
        *puVar1 = *puVar6;
        puVar1 = puVar1 + 1;
      }
      puVar1 = (this->_Mypair)._Myval2._Myfirst;
      if (puVar1 != (ushort *)0x0) {
        PVar2 = (this->_Mypair)._Myval1;
        (**(code **)(*(longlong *)PVar2 + 0x10))
                  (PVar2,puVar1,
                   ((longlong)(this->_Mypair)._Myval2._Myend - (longlong)puVar1 >> 1) * 2,8);
      }
      (this->_Mypair)._Myval2._Myfirst = puVar4;
      (this->_Mypair)._Myval2._Mylast = puVar4 + param_1;
      (this->_Mypair)._Myval2._Myend = puVar4 + uVar7;
    }
    else {
      lVar8 = param_1 - uVar9;
      if (lVar8 != 0) {
        memset(puVar4,0,lVar8 * 2);
        puVar4 = puVar4 + lVar8;
      }
      (this->_Mypair)._Myval2._Mylast = puVar4;
    }
  }
  return;
}

// _Test_callable<`pma::impl::ManagedInstance<std::unique_ptr<rl4::JointGroupQuaternionCalculationStrategy<float>,std::function<void___cdecl(rl4::JointGroupQuaternionCalculationStrategy<float>_*)>_>,rl4::VectorizedJointGroupQuaternionCalculationStrategy<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,rl4::JointGroupQuaternionCalculationStrategy<float>_>::create<>'::__l2::<lambda_1>_> @ 14c56bb80

bool __cdecl
std::
_Test_callable<_pma::impl::ManagedInstance<std::unique_ptr<rl4::JointGroupQuaternionCalculationStrategy<float>,std::function<void___cdecl(rl4::JointGroupQuaternionCalculationStrategy<float>_*)>_>,rl4::VectorizedJointGroupQuaternionCalculationStrategy<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,rl4::JointGroupQuaternionCalculationStrategy<float>_>::create<>_::__l2::<lambda_1>_>
          (<lambda_1> *param_1)

{
  return true;
}

// _Test_callable<`pma::impl::ManagedInstance<std::unique_ptr<rl4::JointGroupQuaternionCalculationStrategy<float>,std::function<void___cdecl(rl4::JointGroupQuaternionCalculationStrategy<float>_*)>_>,rl4::VectorizedJointGroupQuaternionCalculationStrategy<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,rl4::JointGroupQuaternionCalculationStrategy<float>_>::create<>'::__l2::<lambda_1>_> @ 14c56bb90

bool __cdecl
std::
_Test_callable<_pma::impl::ManagedInstance<std::unique_ptr<rl4::JointGroupQuaternionCalculationStrategy<float>,std::function<void___cdecl(rl4::JointGroupQuaternionCalculationStrategy<float>_*)>_>,rl4::VectorizedJointGroupQuaternionCalculationStrategy<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,rl4::JointGroupQuaternionCalculationStrategy<float>_>::create<>_::__l2::<lambda_1>_>
          (<lambda_1> *param_1)

{
  return true;
}

// _Test_callable<`pma::impl::ManagedInstance<std::unique_ptr<rl4::JointsEvaluator,std::function<void___cdecl(rl4::JointsEvaluator_*)>_>,rl4::QuaternionJointsEvaluator<float>,rl4::JointsEvaluator>::create<std::unique_ptr<rl4::JointGroupQuaternionCalculationStrategy<float>,std::function<void___cdecl(rl4::JointGroupQuaternionCalculationStrategy<float>_*)>_>,std::vector<rl4::JointGroup<float>,pma::PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>_>,std::nullptr_t,pma::AlignedMemoryResource_*>'::__l2::<lambda_1>_> @ 14c56bba0

bool __cdecl
std::
_Test_callable<_pma::impl::ManagedInstance<std::unique_ptr<rl4::JointsEvaluator,std::function<void___cdecl(rl4::JointsEvaluator_*)>_>,rl4::QuaternionJointsEvaluator<float>,rl4::JointsEvaluator>::create<std::unique_ptr<rl4::JointGroupQuaternionCalculationStrategy<float>,std::function<void___cdecl(rl4::JointGroupQuaternionCalculationStrategy<float>_*)>_>,std::vector<rl4::JointGroup<float>,pma::PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>_>,std::nullptr_t,pma::AlignedMemoryResource_*>_::__l2::<lambda_1>_>
          (<lambda_1> *param_1)

{
  return true;
}

// dispatch<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>_&,std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>_&,std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>_&,std::vector<rl4::LODRegion,pma::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>_>_&,unsigned_int_&,unsigned_int_&> @ 14c56bbb0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
terse::Archive<terse::BinaryInputArchive<trio::BoundedIOStream,unsigned_int,unsigned_int,1>_>::
dispatch<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>_&,std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>_&,std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>_&,std::vector<rl4::LODRegion,pma::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>_>_&,unsigned_int_&,unsigned_int_&>
          (Archive<terse::BinaryInputArchive<trio::BoundedIOStream,unsigned_int,unsigned_int,1>_>
           *this,vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *param_1,
          vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
          *param_2,vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
                   *param_3,
          vector<rl4::LODRegion,pma::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>_>
          *param_4,uint *param_5,uint *param_6)

{
  undefined1 (*pauVar1) [16];
  float fVar2;
  BinaryInputArchive<trio::BoundedIOStream,unsigned_int,unsigned_int,1> *pBVar3;
  float *pfVar4;
  ExtendableBinaryInputArchive<terse::BinaryInputArchive<trio::BoundedIOStream,unsigned_int,unsigned_int,1>,trio::BoundedIOStream,unsigned_int,unsigned_int,1>
  *this_00;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined1 auVar9 [16];
  int iVar10;
  longlong lVar11;
  longlong *plVar12;
  undefined1 *puVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  undefined1 auVar17 [16];
  uint local_res8 [2];
  uint local_38 [4];
  undefined1 local_28 [16];
  
  pBVar3 = this->impl;
  local_38[0] = 0;
  plVar12 = (longlong *)(*(longlong *)&pBVar3->field_0x10 + 0x10);
  (**(code **)(*plVar12 + 8))(plVar12,local_38,4);
  uVar5 = local_38[0] >> 0x18;
  uVar6 = (local_38[0] & 0xff0000) >> 8;
  uVar7 = local_38[0] & 0xff00;
  uVar8 = local_38[0] << 0x18;
  local_38[0] = uVar5 | uVar6 | uVar7 << 8 | uVar8;
  uVar15 = (ulonglong)local_38[0];
  if (local_38[0] != 0) {
    std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>::
    _Resize<std::_Value_init_tag>(param_1,(ulonglong)local_38[0],(_Value_init_tag *)local_res8);
    plVar12 = (longlong *)(*(longlong *)&pBVar3->field_0x10 + 0x10);
    (**(code **)(*plVar12 + 8))(plVar12,(param_1->_Mypair)._Myval2._Myfirst,uVar15 * 4);
    iVar10 = __isa_available;
    auVar9 = ___xmm_0c0d0e0f08090a0b0405060700010203;
    uVar16 = 0;
    uVar14 = uVar15 & 0xfffffffffffffffc;
    if ((((uVar5 & 0xfffffffc) != 0 || uVar6 != 0) || uVar7 != 0) || uVar8 != 0) {
      do {
        pfVar4 = (param_1->_Mypair)._Myval2._Myfirst;
        local_28 = *(undefined1 (*) [16])(pfVar4 + uVar16);
        pauVar1 = (undefined1 (*) [16])(pfVar4 + uVar16);
        lVar11 = 0;
        if (iVar10 < 2) {
          do {
            uVar5 = *(uint *)(local_28 + lVar11 * 4);
            *(uint *)(local_28 + lVar11 * 4) =
                 uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
            lVar11 = lVar11 + 1;
            auVar17 = local_28;
          } while (lVar11 < 4);
        }
        else {
          auVar17 = pshufb(local_28,auVar9);
        }
        uVar16 = uVar16 + 4;
        *pauVar1 = auVar17;
      } while (uVar16 < uVar14);
    }
    for (; uVar14 < uVar15; uVar14 = uVar14 + 1) {
      pfVar4 = (param_1->_Mypair)._Myval2._Myfirst + uVar14;
      fVar2 = *pfVar4;
      *pfVar4 = (float)((uint)fVar2 >> 0x18 | ((uint)fVar2 & 0xff0000) >> 8 |
                        ((uint)fVar2 & 0xff00) << 8 | (int)fVar2 << 0x18);
    }
  }
  dispatch<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>_&>
            (this,param_2);
  dispatch<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>_&>
            (this,param_3);
  this_00 = (ExtendableBinaryInputArchive<terse::BinaryInputArchive<trio::BoundedIOStream,unsigned_int,unsigned_int,1>,trio::BoundedIOStream,unsigned_int,unsigned_int,1>
             *)this->impl;
  local_res8[0] = 0;
  puVar13 = &this_00->stream->field_0x10;
  (**(code **)(*(longlong *)puVar13 + 8))(puVar13,local_res8,4);
  ExtendableBinaryInputArchive<terse::BinaryInputArchive<trio::BoundedIOStream,unsigned_int,unsigned_int,1>,trio::BoundedIOStream,unsigned_int,unsigned_int,1>
  ::
  processElements<std::vector<rl4::LODRegion,pma::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>_>_>
            (this_00,param_4,
             (ulonglong)
             (local_res8[0] >> 0x18 | (local_res8[0] & 0xff0000) >> 8 |
              (local_res8[0] & 0xff00) << 8 | local_res8[0] << 0x18));
  lVar11 = *(longlong *)&this->impl->field_0x10;
  (**(code **)(*(longlong *)(lVar11 + 0x10) + 8))(lVar11 + 0x10,param_5,4);
  uVar5 = *param_5;
  *param_5 = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
  lVar11 = *(longlong *)&this->impl->field_0x10;
  (**(code **)(*(longlong *)(lVar11 + 0x10) + 8))(lVar11 + 0x10,param_6,4);
  uVar5 = *param_6;
  *param_6 = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
  return;
}

// dispatch<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>_&,std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>_&,std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>_&,std::vector<rl4::LODRegion,pma::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>_>_&,unsigned_int_&,unsigned_int_&> @ 14c56bd90

void __thiscall
terse::Archive<terse::BinaryOutputArchive<trio::BoundedIOStream,unsigned_int,unsigned_int,1>_>::
dispatch<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>_&,std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>_&,std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>_&,std::vector<rl4::LODRegion,pma::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>_>_&,unsigned_int_&,unsigned_int_&>
          (Archive<terse::BinaryOutputArchive<trio::BoundedIOStream,unsigned_int,unsigned_int,1>_>
           *this,vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *param_1,
          vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
          *param_2,vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
                   *param_3,
          vector<rl4::LODRegion,pma::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>_>
          *param_4,uint *param_5,uint *param_6)

{
  float fVar1;
  BinaryOutputArchive<trio::BoundedIOStream,unsigned_int,unsigned_int,1> *pBVar2;
  float *pfVar3;
  longlong lVar4;
  LODRegion *pLVar5;
  undefined8 *puVar6;
  vector<rl4::LODRegion,pma::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>_> *pvVar7;
  uint uVar8;
  longlong *plVar9;
  float *pfVar10;
  uint *puVar11;
  LODRegion *pLVar12;
  uint local_res8 [2];
  
  pBVar2 = this->impl;
  uVar8 = (uint)((longlong)(param_1->_Mypair)._Myval2._Mylast -
                 (longlong)(param_1->_Mypair)._Myval2._Myfirst >> 2);
  local_res8[0] = uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 | uVar8 << 0x18;
  plVar9 = (longlong *)(*(longlong *)&pBVar2->field_0x10 + 0x18);
  (**(code **)(*plVar9 + 8))(plVar9,local_res8,4);
  pfVar3 = (param_1->_Mypair)._Myval2._Mylast;
  for (pfVar10 = (param_1->_Mypair)._Myval2._Myfirst; pfVar10 != pfVar3; pfVar10 = pfVar10 + 1) {
    fVar1 = *pfVar10;
    local_res8[0] =
         (uint)fVar1 >> 0x18 | ((uint)fVar1 & 0xff0000) >> 8 | ((uint)fVar1 & 0xff00) << 8 |
         (int)fVar1 << 0x18;
    lVar4 = *(longlong *)(*(longlong *)pBVar2 + 0x10);
    (**(code **)(*(longlong *)(lVar4 + 0x18) + 8))(lVar4 + 0x18,local_res8,4);
  }
  dispatch<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>_&>
            (this,param_2);
  dispatch<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>_&>
            (this,param_3);
  pvVar7 = param_4;
  pBVar2 = this->impl;
  uVar8 = (uint)(((longlong)(param_4->_Mypair)._Myval2._Mylast -
                 (longlong)(param_4->_Mypair)._Myval2._Myfirst) / 0x18);
  plVar9 = (longlong *)(*(longlong *)&pBVar2->field_0x10 + 0x18);
  param_4._0_4_ =
       uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 | uVar8 * 0x1000000;
  (**(code **)(*plVar9 + 8))(plVar9,&param_4,4);
  pLVar5 = (pvVar7->_Mypair)._Myval2._Mylast;
  pLVar12 = (pvVar7->_Mypair)._Myval2._Myfirst;
  if (pLVar12 != pLVar5) {
    puVar11 = &(pLVar12->outputLODs).sizePaddedToLastFullBlock;
    do {
      puVar6 = *(undefined8 **)pBVar2;
      operator()<unsigned_int_&,unsigned_int_&,unsigned_int_&>
                ((Archive<terse::BinaryOutputArchive<trio::BoundedIOStream,unsigned_int,unsigned_int,1>_>
                  *)*puVar6,(uint *)pLVar12,puVar11 + -3,puVar11 + -2);
      operator()<unsigned_int_&,unsigned_int_&,unsigned_int_&>
                ((Archive<terse::BinaryOutputArchive<trio::BoundedIOStream,unsigned_int,unsigned_int,1>_>
                  *)*puVar6,(uint *)(puVar11 + -1),puVar11,puVar11 + 1);
      pLVar12 = pLVar12 + 1;
      puVar11 = puVar11 + 6;
    } while (pLVar12 != pLVar5);
  }
  uVar8 = *param_5;
  param_4._0_4_ = uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 | uVar8 << 0x18;
  lVar4 = *(longlong *)&this->impl->field_0x10;
  (**(code **)(*(longlong *)(lVar4 + 0x18) + 8))(lVar4 + 0x18,&param_4,4);
  uVar8 = *param_6;
  param_4._0_4_ = uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 | uVar8 << 0x18;
  lVar4 = *(longlong *)&this->impl->field_0x10;
  (**(code **)(*(longlong *)(lVar4 + 0x18) + 8))(lVar4 + 0x18,&param_4,4);
  return;
}

// euler<0> @ 14c56bf40

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

vec<3,tdm::ang<float,tdm::impl::radians>_> * __thiscall
tdm::quat<float>::euler<0>
          (quat<float> *this,vec<3,tdm::ang<float,tdm::impl::radians>_> *__return_storage_ptr__)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  fVar3 = __real_3f800000;
  fVar5 = this->x;
  fVar1 = this->y;
  fVar10 = this->z;
  fVar8 = fVar1 + fVar1;
  fVar6 = fVar10 + fVar10;
  fVar12 = 0.0;
  fVar10 = fVar6 * fVar10;
  fVar2 = this->w;
  __return_storage_ptr__->values[0].value = 0.0;
  fVar11 = (fVar5 + fVar5) * fVar2;
  fVar9 = fVar8 * fVar2 + fVar6 * fVar5;
  fVar7 = (float)((uint)fVar9 & __xmm_7fffffff7fffffff7fffffff7fffffff);
  fVar4 = fVar3 - fVar7;
  if (fVar4 <= 0.0) {
    fVar4 = 0.0;
  }
  fVar4 = SQRT(fVar4) *
          (((((((__real_3bda90c5 - fVar7 * ___real_3aa57a2c) * fVar7 - ___real_3c8bfc66) * fVar7 +
              ___real_3cfd10f8) * fVar7 - ___real_3d4d8392) * fVar7 + ___real_3db63a9e) * fVar7 -
           ___real_3e5bbfca) * fVar7 + __real_3fc90fda);
  if (fVar9 < 0.0) {
    fVar4 = fVar4 - __real_3fc90fda;
  }
  else {
    fVar4 = __real_3fc90fda - fVar4;
  }
  __return_storage_ptr__->values[1].value = fVar4;
  if (fVar3 <= fVar7) {
    fVar11 = fVar11 + fVar6 * fVar1;
  }
  else {
    fVar12 = atan2f(fVar6 * fVar2 - fVar8 * fVar5,fVar3 - (fVar10 + fVar8 * fVar1));
    fVar11 = fVar11 - fVar6 * fVar1;
    fVar10 = fVar8 * fVar1;
  }
  fVar5 = atan2f(fVar11,fVar3 - (fVar10 + (fVar5 + fVar5) * fVar5));
  __return_storage_ptr__->values[0].value = fVar5;
  __return_storage_ptr__->values[2].value = fVar12;
  return __return_storage_ptr__;
}

// JointGroup<float> @ 14c56c130

JointGroup<float> * __thiscall
rl4::JointGroup<float>::JointGroup<float>(JointGroup<float> *this,JointGroup<float> *param_1)

{
  PolyAllocator<float,64,pma::AlignedMemoryResource> PVar1;
  PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource> PVar2;
  undefined8 uVar3;
  uint uVar4;
  float *pfVar5;
  LODRegion *pLVar6;
  LODRegion *pLVar7;
  float *pfVar8;
  LODRegion *pLVar9;
  float *pfVar10;
  ulonglong uVar11;
  
  (this->values)._Mypair._Myval1 = (param_1->values)._Mypair._Myval1;
  (this->values)._Mypair._Myval2._Myfirst = (float *)0x0;
  (this->values)._Mypair._Myval2._Mylast = (float *)0x0;
  (this->values)._Mypair._Myval2._Myend = (float *)0x0;
  uVar11 = (longlong)(param_1->values)._Mypair._Myval2._Mylast -
           (longlong)(param_1->values)._Mypair._Myval2._Myfirst >> 2;
  if (uVar11 != 0) {
    if (0x3fffffffffffffff < uVar11) {
                    /* WARNING: Subroutine does not return */
      std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>::_Xlength();
    }
    PVar1 = (this->values)._Mypair._Myval1;
    pfVar5 = (float *)(**(code **)(*(longlong *)PVar1 + 8))(PVar1,uVar11 * 4,0x40);
    (this->values)._Mypair._Myval2._Myfirst = pfVar5;
    (this->values)._Mypair._Myval2._Mylast = pfVar5;
    (this->values)._Mypair._Myval2._Myend = pfVar5 + uVar11;
    pfVar5 = (param_1->values)._Mypair._Myval2._Mylast;
    pfVar10 = (this->values)._Mypair._Myval2._Myfirst;
    for (pfVar8 = (param_1->values)._Mypair._Myval2._Myfirst; pfVar8 != pfVar5; pfVar8 = pfVar8 + 1)
    {
      *pfVar10 = *pfVar8;
      pfVar10 = pfVar10 + 1;
    }
    (this->values)._Mypair._Myval2._Mylast = pfVar10;
  }
  std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>::
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
            (&this->inputIndices,&param_1->inputIndices);
  std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>::
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
            (&this->outputIndices,&param_1->outputIndices);
  (this->lods)._Mypair._Myval1 = (param_1->lods)._Mypair._Myval1;
  (this->lods)._Mypair._Myval2._Myfirst = (LODRegion *)0x0;
  (this->lods)._Mypair._Myval2._Mylast = (LODRegion *)0x0;
  (this->lods)._Mypair._Myval2._Myend = (LODRegion *)0x0;
  uVar11 = ((longlong)(param_1->lods)._Mypair._Myval2._Mylast -
           (longlong)(param_1->lods)._Mypair._Myval2._Myfirst) / 0x18;
  if (uVar11 != 0) {
    if (0xaaaaaaaaaaaaaaa < uVar11) {
                    /* WARNING: Subroutine does not return */
      std::vector<rl4::LODRegion,pma::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>_>::
      _Xlength();
    }
    PVar2 = (this->lods)._Mypair._Myval1;
    pLVar6 = (LODRegion *)(**(code **)(*(longlong *)PVar2 + 8))(PVar2,uVar11 * 0x18,8);
    (this->lods)._Mypair._Myval2._Myfirst = pLVar6;
    (this->lods)._Mypair._Myval2._Mylast = pLVar6;
    (this->lods)._Mypair._Myval2._Myend = pLVar6 + uVar11;
    pLVar6 = (param_1->lods)._Mypair._Myval2._Mylast;
    pLVar9 = (this->lods)._Mypair._Myval2._Myfirst;
    for (pLVar7 = (param_1->lods)._Mypair._Myval2._Myfirst; pLVar7 != pLVar6; pLVar7 = pLVar7 + 1) {
      uVar4 = (pLVar7->inputLODs).sizeAlignedTo4;
      uVar3 = *(undefined8 *)&(pLVar7->inputLODs).sizeAlignedTo8;
      (pLVar9->inputLODs).size = (pLVar7->inputLODs).size;
      (pLVar9->inputLODs).sizeAlignedTo4 = uVar4;
      *(undefined8 *)&(pLVar9->inputLODs).sizeAlignedTo8 = uVar3;
      uVar4 = (pLVar7->outputLODs).sizePaddedToSecondLastFullBlock;
      (pLVar9->outputLODs).sizePaddedToLastFullBlock =
           (pLVar7->outputLODs).sizePaddedToLastFullBlock;
      (pLVar9->outputLODs).sizePaddedToSecondLastFullBlock = uVar4;
      pLVar9 = pLVar9 + 1;
    }
    (this->lods)._Mypair._Myval2._Mylast = pLVar9;
  }
  this->colCount = param_1->colCount;
  this->rowCount = param_1->rowCount;
  return this;
}

// vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> @ 14c56c2f0

vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> * __thiscall
std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>::
vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
          (vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
           *this,vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
                 *param_1)

{
  PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource> PVar1;
  ushort *puVar2;
  ushort *puVar3;
  ushort *puVar4;
  ulonglong uVar5;
  
  (this->_Mypair)._Myval1 = (param_1->_Mypair)._Myval1;
  (this->_Mypair)._Myval2._Myfirst = (ushort *)0x0;
  (this->_Mypair)._Myval2._Mylast = (ushort *)0x0;
  (this->_Mypair)._Myval2._Myend = (ushort *)0x0;
  uVar5 = (longlong)(param_1->_Mypair)._Myval2._Mylast -
          (longlong)(param_1->_Mypair)._Myval2._Myfirst >> 1;
  if (uVar5 != 0) {
    if (0x7fffffffffffffff < uVar5) {
                    /* WARNING: Subroutine does not return */
      _Xlength();
    }
    PVar1 = (this->_Mypair)._Myval1;
    puVar2 = (ushort *)(**(code **)(*(longlong *)PVar1 + 8))(PVar1,uVar5 * 2,8);
    (this->_Mypair)._Myval2._Myfirst = puVar2;
    (this->_Mypair)._Myval2._Mylast = puVar2;
    (this->_Mypair)._Myval2._Myend = puVar2 + uVar5;
    puVar2 = (param_1->_Mypair)._Myval2._Mylast;
    puVar4 = (this->_Mypair)._Myval2._Myfirst;
    for (puVar3 = (param_1->_Mypair)._Myval2._Myfirst; puVar3 != puVar2; puVar3 = puVar3 + 1) {
      *puVar4 = *puVar3;
      puVar4 = puVar4 + 1;
    }
    (this->_Mypair)._Myval2._Mylast = puVar4;
  }
  return this;
}

// QuaternionReader @ 14c56c3b0

QuaternionReader * __thiscall
rltests::qs::QuaternionReader::QuaternionReader(QuaternionReader *this)

{
  int in_EDX;
  
  if (in_EDX != 0) {
    *(undefined1 **)&this->field_0x8 = &_vbtable__for__dna__RBFBehaviorReader__;
    *(undefined **)&this->field_0x18 = &_vbtable__for__dna__GeometryReader__;
    *(undefined **)&this->field_0x28 = &_vbtable__for__dna__MachineLearnedBehaviorReader__;
    *(undefined **)&this->field_0x38 = &_vbtable__for__dna__JointBehaviorMetadataReader__;
    *(undefined **)&this->field_0x48 = &_vbtable__for__dna__TwistSwingBehaviorReader__;
    *(undefined1 **)&this->field_0x70 = &_vbtable__for__dna__BehaviorReader__;
    *(undefined ***)&this->field_0x58 = &___7DefinitionReader_dna__6B_;
    *(undefined ***)&this->field_0x68 = &dna::BehaviorReader::_vftable__for__dna__BehaviorReader__;
    *(undefined ***)(&this->field_0x70 + *(int *)(*(longlong *)&this->field_0x70 + 4)) =
         &dna::BehaviorReader::_vftable__for__dna__DefinitionReader__;
  }
  *(undefined ***)this = &___7RBFBehaviorReader_dna__6B_;
  *(undefined ***)(&this->field_0x8 + *(int *)(*(longlong *)&this->field_0x8 + 4)) =
       &dna::RBFBehaviorReader::_vftable__for__dna__DefinitionReader__;
  *(undefined ***)(&this->field_0x8 + *(int *)(*(longlong *)&this->field_0x8 + 8)) =
       &dna::RBFBehaviorReader::_vftable__for__dna__BehaviorReader__;
  *(undefined ***)&this->field_0x10 = &dna::GeometryReader::_vftable__for__dna__GeometryReader__;
  *(undefined ***)(&this->field_0x18 + *(int *)(*(longlong *)&this->field_0x18 + 4)) =
       &dna::GeometryReader::_vftable__for__dna__DefinitionReader__;
  *(undefined ***)&this->field_0x20 =
       &dna::MachineLearnedBehaviorReader::_vftable__for__dna__MachineLearnedBehaviorReader__;
  *(undefined ***)(&this->field_0x28 + *(int *)(*(longlong *)&this->field_0x28 + 4)) =
       &dna::MachineLearnedBehaviorReader::_vftable__for__dna__DefinitionReader__;
  *(undefined ***)&this->field_0x30 =
       &dna::JointBehaviorMetadataReader::_vftable__for__dna__JointBehaviorMetadataReader__;
  *(undefined ***)(&this->field_0x38 + *(int *)(*(longlong *)&this->field_0x38 + 4)) =
       &dna::JointBehaviorMetadataReader::_vftable__for__dna__DefinitionReader__;
  *(undefined ***)&this->field_0x40 =
       &dna::TwistSwingBehaviorReader::_vftable__for__dna__TwistSwingBehaviorReader__;
  *(undefined ***)(&this->field_0x48 + *(int *)(*(longlong *)&this->field_0x48 + 4)) =
       &dna::TwistSwingBehaviorReader::_vftable__for__dna__DefinitionReader__;
  *(undefined ***)this = &___7Reader_dna__6B_;
  *(undefined ***)&this->field_0x10 = &dna::Reader::_vftable__for__dna__GeometryReader__;
  *(undefined ***)&this->field_0x20 =
       &dna::Reader::_vftable__for__dna__MachineLearnedBehaviorReader__;
  *(undefined ***)&this->field_0x30 =
       &dna::Reader::_vftable__for__dna__JointBehaviorMetadataReader__;
  *(undefined ***)&this->field_0x40 = &dna::Reader::_vftable__for__dna__TwistSwingBehaviorReader__;
  *(undefined ***)(&this->field_0x8 + *(int *)(*(longlong *)&this->field_0x8 + 4)) =
       &dna::Reader::_vftable__for__dna__DefinitionReader__;
  *(undefined ***)(&this->field_0x8 + *(int *)(*(longlong *)&this->field_0x8 + 8)) =
       &dna::Reader::_vftable__for__dna__BehaviorReader__;
  *(undefined ***)this = &___7FakeReader_dna__6B_;
  *(undefined ***)&this->field_0x10 = &dna::FakeReader::_vftable__for__dna__GeometryReader__;
  *(undefined ***)&this->field_0x20 =
       &dna::FakeReader::_vftable__for__dna__MachineLearnedBehaviorReader__;
  *(undefined ***)&this->field_0x30 =
       &dna::FakeReader::_vftable__for__dna__JointBehaviorMetadataReader__;
  *(undefined ***)&this->field_0x40 =
       &dna::FakeReader::_vftable__for__dna__TwistSwingBehaviorReader__;
  *(undefined ***)(&this->field_0x8 + *(int *)(*(longlong *)&this->field_0x8 + 4)) =
       &dna::FakeReader::_vftable__for__dna__DefinitionReader__;
  *(undefined ***)(&this->field_0x8 + *(int *)(*(longlong *)&this->field_0x8 + 8)) =
       &dna::FakeReader::_vftable__for__dna__BehaviorReader__;
  *(undefined4 *)(&this->field_0x4 + *(int *)(*(longlong *)&this->field_0x8 + 4)) = 0;
  *(undefined4 *)(&this->field_0x4 + *(int *)(*(longlong *)&this->field_0x8 + 8)) = 0;
  *(undefined ***)this = &___7QuaternionReader_qs_rltests__6B_;
  *(undefined ***)&this->field_0x10 = &_vftable__for__dna__GeometryReader__;
  *(undefined ***)&this->field_0x20 = &_vftable__for__dna__MachineLearnedBehaviorReader__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__dna__JointBehaviorMetadataReader__;
  *(undefined ***)&this->field_0x40 = &_vftable__for__dna__TwistSwingBehaviorReader__;
  *(undefined ***)(&this->field_0x8 + *(int *)(*(longlong *)&this->field_0x8 + 4)) =
       &_vftable__for__dna__DefinitionReader__;
  *(undefined ***)(&this->field_0x8 + *(int *)(*(longlong *)&this->field_0x8 + 8)) =
       &_vftable__for__dna__BehaviorReader__;
  *(undefined4 *)(&this->field_0x4 + *(int *)(*(longlong *)&this->field_0x8 + 4)) = 0;
  *(undefined4 *)(&this->field_0x4 + *(int *)(*(longlong *)&this->field_0x8 + 8)) = 0;
  return this;
}

// ~QuaternionEvaluatorTest<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>_> @ 14c56c630

void __thiscall
`anonymous_namespace'::
QuaternionEvaluatorTest<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>_>
::
~QuaternionEvaluatorTest<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>_>
          (void *this)

{
  longlong lVar1;
  longlong *plVar2;
  BehaviorReader *pBVar3;
  longlong local_res8;
  
  lVar1 = *(longlong *)((longlong)this + 0xd0);
  if (lVar1 != 0) {
    plVar2 = *(longlong **)((longlong)this + 200);
    local_res8 = lVar1;
    if (plVar2 == (longlong *)0x0) {
      std::_Xbad_function_call();
      return;
    }
    (**(code **)(*plVar2 + 0x10))(plVar2,&local_res8);
  }
  pBVar3 = *(BehaviorReader **)((longlong)this + 200);
  if (pBVar3 != (BehaviorReader *)0x0) {
    (**(code **)(*(longlong *)pBVar3 + 0x20))
              (pBVar3,pBVar3 != (BehaviorReader *)((longlong)this + 0x90));
    *(undefined8 *)((longlong)this + 200) = 0;
  }
  rltests::qs::QuaternionReader::~QuaternionReader((QuaternionReader *)((longlong)this + 0x70));
  dna::BehaviorReader::~BehaviorReader((BehaviorReader *)((longlong)this + 0x90));
  dna::DefinitionReader::~DefinitionReader((DefinitionReader *)((longlong)this + 0x70));
  pma::MemoryResource::~MemoryResource((MemoryResource *)((longlong)this + 0x10));
  testing::Test::~Test(this);
  return;
}

// ~QuaternionEvaluatorTest<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>_> @ 14c56c6d0

void __thiscall
`anonymous_namespace'::
QuaternionEvaluatorTest<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>_>
::
~QuaternionEvaluatorTest<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>_>
          (void *this)

{
  longlong lVar1;
  longlong *plVar2;
  BehaviorReader *pBVar3;
  longlong local_res8;
  
  lVar1 = *(longlong *)((longlong)this + 0xd0);
  if (lVar1 != 0) {
    plVar2 = *(longlong **)((longlong)this + 200);
    local_res8 = lVar1;
    if (plVar2 == (longlong *)0x0) {
      std::_Xbad_function_call();
      return;
    }
    (**(code **)(*plVar2 + 0x10))(plVar2,&local_res8);
  }
  pBVar3 = *(BehaviorReader **)((longlong)this + 200);
  if (pBVar3 != (BehaviorReader *)0x0) {
    (**(code **)(*(longlong *)pBVar3 + 0x20))
              (pBVar3,pBVar3 != (BehaviorReader *)((longlong)this + 0x90));
    *(undefined8 *)((longlong)this + 200) = 0;
  }
  rltests::qs::QuaternionReader::~QuaternionReader((QuaternionReader *)((longlong)this + 0x70));
  dna::BehaviorReader::~BehaviorReader((BehaviorReader *)((longlong)this + 0x90));
  dna::DefinitionReader::~DefinitionReader((DefinitionReader *)((longlong)this + 0x70));
  pma::MemoryResource::~MemoryResource((MemoryResource *)((longlong)this + 0x10));
  testing::Test::~Test(this);
  return;
}

// ~QuaternionEvaluatorTest<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>_> @ 14c56c770

void __thiscall
`anonymous_namespace'::
QuaternionEvaluatorTest<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>_>
::
~QuaternionEvaluatorTest<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>_>
          (void *this)

{
  longlong lVar1;
  longlong *plVar2;
  BehaviorReader *pBVar3;
  longlong local_res8;
  
  lVar1 = *(longlong *)((longlong)this + 0xd0);
  if (lVar1 != 0) {
    plVar2 = *(longlong **)((longlong)this + 200);
    local_res8 = lVar1;
    if (plVar2 == (longlong *)0x0) {
      std::_Xbad_function_call();
      return;
    }
    (**(code **)(*plVar2 + 0x10))(plVar2,&local_res8);
  }
  pBVar3 = *(BehaviorReader **)((longlong)this + 200);
  if (pBVar3 != (BehaviorReader *)0x0) {
    (**(code **)(*(longlong *)pBVar3 + 0x20))
              (pBVar3,pBVar3 != (BehaviorReader *)((longlong)this + 0x90));
    *(undefined8 *)((longlong)this + 200) = 0;
  }
  rltests::qs::QuaternionReader::~QuaternionReader((QuaternionReader *)((longlong)this + 0x70));
  dna::BehaviorReader::~BehaviorReader((BehaviorReader *)((longlong)this + 0x90));
  dna::DefinitionReader::~DefinitionReader((DefinitionReader *)((longlong)this + 0x70));
  pma::MemoryResource::~MemoryResource((MemoryResource *)((longlong)this + 0x10));
  testing::Test::~Test(this);
  return;
}

// ~QuaternionEvaluatorTest<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>_> @ 14c56c810

void __thiscall
`anonymous_namespace'::
QuaternionEvaluatorTest<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>_>
::
~QuaternionEvaluatorTest<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>_>
          (void *this)

{
  longlong lVar1;
  longlong *plVar2;
  BehaviorReader *pBVar3;
  longlong local_res8;
  
  lVar1 = *(longlong *)((longlong)this + 0xd0);
  if (lVar1 != 0) {
    plVar2 = *(longlong **)((longlong)this + 200);
    local_res8 = lVar1;
    if (plVar2 == (longlong *)0x0) {
      std::_Xbad_function_call();
      return;
    }
    (**(code **)(*plVar2 + 0x10))(plVar2,&local_res8);
  }
  pBVar3 = *(BehaviorReader **)((longlong)this + 200);
  if (pBVar3 != (BehaviorReader *)0x0) {
    (**(code **)(*(longlong *)pBVar3 + 0x20))
              (pBVar3,pBVar3 != (BehaviorReader *)((longlong)this + 0x90));
    *(undefined8 *)((longlong)this + 200) = 0;
  }
  rltests::qs::QuaternionReader::~QuaternionReader((QuaternionReader *)((longlong)this + 0x70));
  dna::BehaviorReader::~BehaviorReader((BehaviorReader *)((longlong)this + 0x90));
  dna::DefinitionReader::~DefinitionReader((DefinitionReader *)((longlong)this + 0x70));
  pma::MemoryResource::~MemoryResource((MemoryResource *)((longlong)this + 0x10));
  testing::Test::~Test(this);
  return;
}

// GetSetUpCaseOrSuite @ 14c56c8b0

_func___cdecl_void * __cdecl
testing::internal::
SuiteApiResolver<QuaternionEvaluatorTest_EvaluatePerLOD_Test<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>_>_>
::GetSetUpCaseOrSuite(char *param_1,int param_2)

{
  bool bVar1;
  basic_ostream<char,std::char_traits<char>_> *pbVar2;
  GTestLog local_res18 [4];
  
  bVar1 = IsTrue(true);
  if (!bVar1) {
    GTestLog::GTestLog(local_res18,GTEST_FATAL,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\GoogleTest\\include\\gtest\\internal\\gtest-internal.h"
                       ,0x204);
    pbVar2 = std::operator<<<std::char_traits<char>_>
                       ((basic_ostream<char,std::char_traits<char>_> *)cerr_exref,
                        "Condition !test_case_fp || !test_suite_fp failed. ");
    pbVar2 = std::operator<<<std::char_traits<char>_>
                       (pbVar2,
                        "Test can not provide both SetUpTestSuite and SetUpTestCase, please make sure there is only one present at "
                       );
    pbVar2 = std::operator<<<std::char_traits<char>_>(pbVar2,param_1);
    pbVar2 = std::operator<<<std::char_traits<char>_>(pbVar2,":");
    std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar2,param_2);
    GTestLog::~GTestLog(local_res18);
  }
  return (_func___cdecl_void *)0x0;
}

// GetSetUpCaseOrSuite @ 14c56c950

_func___cdecl_void * __cdecl
testing::internal::
SuiteApiResolver<QuaternionEvaluatorTest_EvaluatePerLOD_Test<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>_>_>
::GetSetUpCaseOrSuite(char *param_1,int param_2)

{
  bool bVar1;
  basic_ostream<char,std::char_traits<char>_> *pbVar2;
  GTestLog local_res18 [4];
  
  bVar1 = IsTrue(true);
  if (!bVar1) {
    GTestLog::GTestLog(local_res18,GTEST_FATAL,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\GoogleTest\\include\\gtest\\internal\\gtest-internal.h"
                       ,0x204);
    pbVar2 = std::operator<<<std::char_traits<char>_>
                       ((basic_ostream<char,std::char_traits<char>_> *)cerr_exref,
                        "Condition !test_case_fp || !test_suite_fp failed. ");
    pbVar2 = std::operator<<<std::char_traits<char>_>
                       (pbVar2,
                        "Test can not provide both SetUpTestSuite and SetUpTestCase, please make sure there is only one present at "
                       );
    pbVar2 = std::operator<<<std::char_traits<char>_>(pbVar2,param_1);
    pbVar2 = std::operator<<<std::char_traits<char>_>(pbVar2,":");
    std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar2,param_2);
    GTestLog::~GTestLog(local_res18);
  }
  return (_func___cdecl_void *)0x0;
}

// GetSetUpCaseOrSuite @ 14c56c9f0

_func___cdecl_void * __cdecl
testing::internal::
SuiteApiResolver<QuaternionEvaluatorTest_EvaluatePerLOD_Test<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>_>_>
::GetSetUpCaseOrSuite(char *param_1,int param_2)

{
  bool bVar1;
  basic_ostream<char,std::char_traits<char>_> *pbVar2;
  GTestLog local_res18 [4];
  
  bVar1 = IsTrue(true);
  if (!bVar1) {
    GTestLog::GTestLog(local_res18,GTEST_FATAL,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\GoogleTest\\include\\gtest\\internal\\gtest-internal.h"
                       ,0x204);
    pbVar2 = std::operator<<<std::char_traits<char>_>
                       ((basic_ostream<char,std::char_traits<char>_> *)cerr_exref,
                        "Condition !test_case_fp || !test_suite_fp failed. ");
    pbVar2 = std::operator<<<std::char_traits<char>_>
                       (pbVar2,
                        "Test can not provide both SetUpTestSuite and SetUpTestCase, please make sure there is only one present at "
                       );
    pbVar2 = std::operator<<<std::char_traits<char>_>(pbVar2,param_1);
    pbVar2 = std::operator<<<std::char_traits<char>_>(pbVar2,":");
    std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar2,param_2);
    GTestLog::~GTestLog(local_res18);
  }
  return (_func___cdecl_void *)0x0;
}

// GetSetUpCaseOrSuite @ 14c56ca90

_func___cdecl_void * __cdecl
testing::internal::
SuiteApiResolver<QuaternionEvaluatorTest_EvaluatePerLOD_Test<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>_>_>
::GetSetUpCaseOrSuite(char *param_1,int param_2)

{
  bool bVar1;
  basic_ostream<char,std::char_traits<char>_> *pbVar2;
  GTestLog local_res18 [4];
  
  bVar1 = IsTrue(true);
  if (!bVar1) {
    GTestLog::GTestLog(local_res18,GTEST_FATAL,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\GoogleTest\\include\\gtest\\internal\\gtest-internal.h"
                       ,0x204);
    pbVar2 = std::operator<<<std::char_traits<char>_>
                       ((basic_ostream<char,std::char_traits<char>_> *)cerr_exref,
                        "Condition !test_case_fp || !test_suite_fp failed. ");
    pbVar2 = std::operator<<<std::char_traits<char>_>
                       (pbVar2,
                        "Test can not provide both SetUpTestSuite and SetUpTestCase, please make sure there is only one present at "
                       );
    pbVar2 = std::operator<<<std::char_traits<char>_>(pbVar2,param_1);
    pbVar2 = std::operator<<<std::char_traits<char>_>(pbVar2,":");
    std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar2,param_2);
    GTestLog::~GTestLog(local_res18);
  }
  return (_func___cdecl_void *)0x0;
}

// GetTearDownCaseOrSuite @ 14c56cb30

_func___cdecl_void * __cdecl
testing::internal::
SuiteApiResolver<QuaternionEvaluatorTest_EvaluatePerLOD_Test<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>_>_>
::GetTearDownCaseOrSuite(char *param_1,int param_2)

{
  bool bVar1;
  basic_ostream<char,std::char_traits<char>_> *pbVar2;
  GTestLog local_res18 [4];
  
  bVar1 = IsTrue(true);
  if (!bVar1) {
    GTestLog::GTestLog(local_res18,GTEST_FATAL,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\GoogleTest\\include\\gtest\\internal\\gtest-internal.h"
                       ,0x213);
    pbVar2 = std::operator<<<std::char_traits<char>_>
                       ((basic_ostream<char,std::char_traits<char>_> *)cerr_exref,
                        "Condition !test_case_fp || !test_suite_fp failed. ");
    pbVar2 = std::operator<<<std::char_traits<char>_>
                       (pbVar2,
                        "Test can not provide both TearDownTestSuite and TearDownTestCase, please make sure there is only one present at"
                       );
    pbVar2 = std::operator<<<std::char_traits<char>_>(pbVar2,param_1);
    pbVar2 = std::operator<<<std::char_traits<char>_>(pbVar2,":");
    std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar2,param_2);
    GTestLog::~GTestLog(local_res18);
  }
  return (_func___cdecl_void *)0x0;
}

// GetTearDownCaseOrSuite @ 14c56cbd0

_func___cdecl_void * __cdecl
testing::internal::
SuiteApiResolver<QuaternionEvaluatorTest_EvaluatePerLOD_Test<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>_>_>
::GetTearDownCaseOrSuite(char *param_1,int param_2)

{
  bool bVar1;
  basic_ostream<char,std::char_traits<char>_> *pbVar2;
  GTestLog local_res18 [4];
  
  bVar1 = IsTrue(true);
  if (!bVar1) {
    GTestLog::GTestLog(local_res18,GTEST_FATAL,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\GoogleTest\\include\\gtest\\internal\\gtest-internal.h"
                       ,0x213);
    pbVar2 = std::operator<<<std::char_traits<char>_>
                       ((basic_ostream<char,std::char_traits<char>_> *)cerr_exref,
                        "Condition !test_case_fp || !test_suite_fp failed. ");
    pbVar2 = std::operator<<<std::char_traits<char>_>
                       (pbVar2,
                        "Test can not provide both TearDownTestSuite and TearDownTestCase, please make sure there is only one present at"
                       );
    pbVar2 = std::operator<<<std::char_traits<char>_>(pbVar2,param_1);
    pbVar2 = std::operator<<<std::char_traits<char>_>(pbVar2,":");
    std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar2,param_2);
    GTestLog::~GTestLog(local_res18);
  }
  return (_func___cdecl_void *)0x0;
}

// GetTearDownCaseOrSuite @ 14c56cc70

_func___cdecl_void * __cdecl
testing::internal::
SuiteApiResolver<QuaternionEvaluatorTest_EvaluatePerLOD_Test<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>_>_>
::GetTearDownCaseOrSuite(char *param_1,int param_2)

{
  bool bVar1;
  basic_ostream<char,std::char_traits<char>_> *pbVar2;
  GTestLog local_res18 [4];
  
  bVar1 = IsTrue(true);
  if (!bVar1) {
    GTestLog::GTestLog(local_res18,GTEST_FATAL,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\GoogleTest\\include\\gtest\\internal\\gtest-internal.h"
                       ,0x213);
    pbVar2 = std::operator<<<std::char_traits<char>_>
                       ((basic_ostream<char,std::char_traits<char>_> *)cerr_exref,
                        "Condition !test_case_fp || !test_suite_fp failed. ");
    pbVar2 = std::operator<<<std::char_traits<char>_>
                       (pbVar2,
                        "Test can not provide both TearDownTestSuite and TearDownTestCase, please make sure there is only one present at"
                       );
    pbVar2 = std::operator<<<std::char_traits<char>_>(pbVar2,param_1);
    pbVar2 = std::operator<<<std::char_traits<char>_>(pbVar2,":");
    std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar2,param_2);
    GTestLog::~GTestLog(local_res18);
  }
  return (_func___cdecl_void *)0x0;
}

// GetTearDownCaseOrSuite @ 14c56cd10

_func___cdecl_void * __cdecl
testing::internal::
SuiteApiResolver<QuaternionEvaluatorTest_EvaluatePerLOD_Test<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>_>_>
::GetTearDownCaseOrSuite(char *param_1,int param_2)

{
  bool bVar1;
  basic_ostream<char,std::char_traits<char>_> *pbVar2;
  GTestLog local_res18 [4];
  
  bVar1 = IsTrue(true);
  if (!bVar1) {
    GTestLog::GTestLog(local_res18,GTEST_FATAL,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\GoogleTest\\include\\gtest\\internal\\gtest-internal.h"
                       ,0x213);
    pbVar2 = std::operator<<<std::char_traits<char>_>
                       ((basic_ostream<char,std::char_traits<char>_> *)cerr_exref,
                        "Condition !test_case_fp || !test_suite_fp failed. ");
    pbVar2 = std::operator<<<std::char_traits<char>_>
                       (pbVar2,
                        "Test can not provide both TearDownTestSuite and TearDownTestCase, please make sure there is only one present at"
                       );
    pbVar2 = std::operator<<<std::char_traits<char>_>(pbVar2,param_1);
    pbVar2 = std::operator<<<std::char_traits<char>_>(pbVar2,":");
    std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar2,param_2);
    GTestLog::~GTestLog(local_res18);
  }
  return (_func___cdecl_void *)0x0;
}

// Register @ 14c56cdb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
testing::internal::
TypeParameterizedTest<`anonymous_namespace'::QuaternionEvaluatorTest,testing::internal::TemplateSel<QuaternionEvaluatorTest_EvaluatePerLOD_Test>,testing::internal::Types1<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>_>_>
::Register(char *param_1,CodeLocation *param_2,char *param_3,char *param_4,int param_5,
          vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
          *param_6)

{
  char cVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  void *pvVar4;
  _Compressed_pair<std::allocator<char>,std::_String_val<std::_Simple_types<char>_>,1> *p_Var5;
  ulong64 uVar6;
  TestFactoryBase *pTVar7;
  _func___cdecl_void *p_Var8;
  _func___cdecl_void *p_Var9;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar10;
  size_t sVar11;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar12;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar13;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar14;
  CodeLocation *pCVar15;
  char *******pppppppcVar16;
  undefined8 uVar17;
  void *pvVar18;
  ulong64 uVar19;
  ulong64 uVar20;
  char *pcVar21;
  undefined1 auStackY_1f8 [32];
  <lambda_1> local_1a8;
  CodeLocation local_190;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_168;
  char *******local_148;
  undefined8 uStack_140;
  ulong64 local_138;
  ulonglong uStack_130;
  _Bxty local_128;
  ulong64 local_118;
  ulong64 uStack_110;
  _Bxty local_108;
  ulong64 local_f8;
  ulong64 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  ulonglong uStack_d0;
  _Bxty local_c8;
  ulong64 local_b8;
  ulonglong uStack_b0;
  _Bxty local_a8;
  ulong64 local_98;
  ulonglong uStack_90;
  _Bxty local_88;
  ulong64 local_78;
  ulonglong uStack_70;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  pTVar7 = ::operator_new(8);
  if (pTVar7 == (TestFactoryBase *)0x0) {
    pTVar7 = (TestFactoryBase *)0x0;
  }
  else {
    *pTVar7 = (TestFactoryBase)
              &
              ___7__TestFactoryImpl_V__QuaternionEvaluatorTest_EvaluatePerLOD_Test_V__tuple_MU__T256_U__T128_M_scalar_trimd___fallback_trimd__U__T128_M_scalar_3_UPassthroughAdapter_rl4___std_____internal_testing__6B_
    ;
  }
  pCVar15 = param_2;
  if (0xf < (param_2->file)._Mypair._Myval2._Myres) {
    pCVar15 = (CodeLocation *)(param_2->file)._Mypair._Myval2._Bx._Ptr;
  }
  p_Var8 = SuiteApiResolver<QuaternionEvaluatorTest_EvaluatePerLOD_Test<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>_>_>
           ::GetTearDownCaseOrSuite((char *)pCVar15,param_2->line);
  pCVar15 = param_2;
  if (0xf < (param_2->file)._Mypair._Myval2._Myres) {
    pCVar15 = (CodeLocation *)(param_2->file)._Mypair._Myval2._Bx._Ptr;
  }
  p_Var9 = SuiteApiResolver<QuaternionEvaluatorTest_EvaluatePerLOD_Test<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>_>_>
           ::GetSetUpCaseOrSuite((char *)pCVar15,param_2->line);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>(&local_190.file,&param_2->file);
  local_190.line = param_2->line;
  uStack_e0 = 0;
  local_d8 = ___xmm_000000000000000f0000000000000006;
  uStack_d0 = _UNK_152873108;
  local_e8 = (void *)(ulonglong)CONCAT24(DAT_1528703b4,_s_<type>);
  pbVar10 = GetPrefixUntilComma(&local_168,param_4);
  pbVar10 = StripTrailingSpaces((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                                &local_88,pbVar10);
  if (0xf < (pbVar10->_Mypair)._Myval2._Myres) {
    pbVar10 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
              (pbVar10->_Mypair)._Myval2._Bx._Ptr;
  }
  cVar1 = *param_1;
  pbVar14 = (param_6->_Mypair)._Myval2._Myfirst + param_5;
  local_108._Ptr = (char *)0x0;
  local_108._8_8_ = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  sVar11 = strlen(param_1);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Construct<1,char_const_*>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_108,param_1,
             sVar11);
  pcVar21 = "/";
  if (cVar1 == '\0') {
    pcVar21 = "";
  }
  pbVar12 = std::operator+<char,std::char_traits<char>,std::allocator<char>_>
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_a8,
                       (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_108
                       ,pcVar21);
  pbVar12 = std::operator+<char,std::char_traits<char>,std::allocator<char>_>
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_c8,
                       pbVar12,param_3);
  uVar2 = (pbVar12->_Mypair)._Myval2._Myres;
  uVar3 = (pbVar12->_Mypair)._Myval2._Mysize;
  if (uVar2 == uVar3) {
    pbVar12 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
              _Reallocate_grow_by<_std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append_::__l2::<lambda_1>,char_const_*,unsigned___int64>
                        (pbVar12,1,local_1a8,"/",1);
  }
  else {
    (pbVar12->_Mypair)._Myval2._Mysize = uVar3 + 1;
    pbVar13 = pbVar12;
    if (0xf < uVar2) {
      pbVar13 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                (pbVar12->_Mypair)._Myval2._Bx._Ptr;
    }
    *(undefined2 *)((longlong)&(pbVar13->_Mypair)._Myval2._Bx + uVar3) = 0x2f;
  }
  local_128._Ptr = (pbVar12->_Mypair)._Myval2._Bx._Ptr;
  local_128._8_8_ = *(undefined8 *)((longlong)&(pbVar12->_Mypair)._Myval2._Bx + 8);
  local_118 = (pbVar12->_Mypair)._Myval2._Mysize;
  uStack_110 = (pbVar12->_Mypair)._Myval2._Myres;
  (pbVar12->_Mypair)._Myval2._Bx._Buf[0] = '\0';
  (pbVar12->_Mypair)._Myval2._Mysize = 0;
  (pbVar12->_Mypair)._Myval2._Myres = 0xf;
  p_Var5 = &pbVar14->_Mypair;
  if (0xf < (pbVar14->_Mypair)._Myval2._Myres) {
    pbVar14 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
              (pbVar14->_Mypair)._Myval2._Bx._Ptr;
  }
  pbVar14 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_128
                       ,(char *)pbVar14,(p_Var5->_Myval2)._Mysize);
  local_148 = (char *******)(pbVar14->_Mypair)._Myval2._Bx._Ptr;
  uStack_140 = *(undefined8 *)((longlong)&(pbVar14->_Mypair)._Myval2._Bx + 8);
  local_138 = (pbVar14->_Mypair)._Myval2._Mysize;
  uStack_130 = (pbVar14->_Mypair)._Myval2._Myres;
  (pbVar14->_Mypair)._Myval2._Bx._Buf[0] = '\0';
  (pbVar14->_Mypair)._Myval2._Mysize = 0;
  (pbVar14->_Mypair)._Myval2._Myres = 0xf;
  pppppppcVar16 = (char *******)&local_148;
  if (0xf < uStack_130) {
    pppppppcVar16 = local_148;
  }
  MakeAndRegisterTestInfo
            ((char *)pppppppcVar16,(char *)pbVar10,(char *)&local_e8,(char *)0x0,&local_190,
             &TypeIdHelper<QuaternionEvaluatorTest<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>_>_>
              ::dummy_,(_func_void *)p_Var9,(_func_void *)p_Var8,pTVar7);
  if (0xf < uStack_130) {
    uVar19 = uStack_130 + 1;
    pppppppcVar16 = local_148;
    if (0xfff < uVar19) {
      pppppppcVar16 = (char *******)local_148[-1];
      uVar19 = uStack_130 + 0x28;
      if ((char *)0x1f < (char *)((longlong)local_148 + (-8 - (longlong)pppppppcVar16)))
      goto LAB_14c56d242;
    }
    ::operator_delete(pppppppcVar16,uVar19);
  }
  uVar6 = _UNK_15076add8;
  uVar19 = ___xmm_000000000000000f0000000000000000;
  local_148 = (char *******)((ulonglong)local_148 & 0xffffffffffffff00);
  local_138 = ___xmm_000000000000000f0000000000000000;
  uStack_130 = _UNK_15076add8;
  if (0xf < uStack_110) {
    uVar20 = uStack_110 + 1;
    uVar17 = local_128._Ptr;
    if (0xfff < uVar20) {
      uVar17 = *(undefined8 *)(local_128._Ptr + -8);
      uVar20 = uStack_110 + 0x28;
      if ((char *)0x1f < local_128._Ptr + (-8 - uVar17)) goto LAB_14c56d242;
    }
    ::operator_delete((void *)uVar17,uVar20);
  }
  local_128._Ptr = local_128._Ptr & 0xffffffffffffff00;
  local_118 = uVar19;
  uStack_110 = uVar6;
  if (0xf < uStack_b0) {
    pvVar4 = (void *)CONCAT71(local_c8._1_7_,local_c8._Buf[0]);
    uVar20 = uStack_b0 + 1;
    pvVar18 = pvVar4;
    if (0xfff < uVar20) {
      pvVar18 = *(void **)((longlong)pvVar4 + -8);
      uVar20 = uStack_b0 + 0x28;
      if (0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar18))) goto LAB_14c56d242;
    }
    ::operator_delete(pvVar18,uVar20);
  }
  local_c8._Buf[0] = '\0';
  local_b8 = uVar19;
  uStack_b0 = uVar6;
  if (0xf < uStack_90) {
    pvVar4 = (void *)CONCAT71(local_a8._1_7_,local_a8._Buf[0]);
    uVar20 = uStack_90 + 1;
    pvVar18 = pvVar4;
    if (0xfff < uVar20) {
      pvVar18 = *(void **)((longlong)pvVar4 + -8);
      uVar20 = uStack_90 + 0x28;
      if (0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar18))) goto LAB_14c56d242;
    }
    ::operator_delete(pvVar18,uVar20);
  }
  local_a8._Buf[0] = '\0';
  local_98 = uVar19;
  uStack_90 = uVar6;
  if (0xf < uStack_f0) {
    uVar20 = uStack_f0 + 1;
    uVar17 = local_108._Ptr;
    if (0xfff < uVar20) {
      uVar17 = *(undefined8 *)(local_108._Ptr + -8);
      uVar20 = uStack_f0 + 0x28;
      if ((char *)0x1f < local_108._Ptr + (-8 - uVar17)) goto LAB_14c56d242;
    }
    ::operator_delete((void *)uVar17,uVar20);
  }
  local_108._Ptr = local_108._Ptr & 0xffffffffffffff00;
  local_f8 = uVar19;
  uStack_f0 = uVar6;
  if (0xf < uStack_70) {
    pvVar4 = (void *)CONCAT71(local_88._1_7_,local_88._Buf[0]);
    uVar20 = uStack_70 + 1;
    pvVar18 = pvVar4;
    if (0xfff < uVar20) {
      pvVar18 = *(void **)((longlong)pvVar4 + -8);
      uVar20 = uStack_70 + 0x28;
      if (0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar18))) goto LAB_14c56d242;
    }
    ::operator_delete(pvVar18,uVar20);
  }
  local_88._Buf[0] = '\0';
  local_78 = uVar19;
  uStack_70 = uVar6;
  if (0xf < uStack_d0) {
    uVar19 = uStack_d0 + 1;
    pvVar18 = local_e8;
    if (0xfff < uVar19) {
      pvVar18 = *(void **)((longlong)local_e8 + -8);
      uVar19 = uStack_d0 + 0x28;
      if (0x1f < (ulonglong)((longlong)local_e8 + (-8 - (longlong)pvVar18))) {
LAB_14c56d242:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete(pvVar18,uVar19);
  }
  return true;
}

// Register @ 14c56d290

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
testing::internal::
TypeParameterizedTest<`anonymous_namespace'::QuaternionEvaluatorTest,testing::internal::TemplateSel<QuaternionEvaluatorTest_EvaluatePerLOD_Test>,testing::internal::Types2<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>_>_>
::Register(char *param_1,CodeLocation *param_2,char *param_3,char *param_4,int param_5,
          vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
          *param_6)

{
  char cVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  void *pvVar4;
  _Compressed_pair<std::allocator<char>,std::_String_val<std::_Simple_types<char>_>,1> *p_Var5;
  ulong64 uVar6;
  bool bVar7;
  TestFactoryBase *pTVar8;
  _func___cdecl_void *p_Var9;
  _func___cdecl_void *p_Var10;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar11;
  size_t sVar12;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar13;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar14;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar15;
  CodeLocation *pCVar16;
  char *******pppppppcVar17;
  undefined8 uVar18;
  void *pvVar19;
  ulong64 uVar20;
  ulong64 uVar21;
  char *pcVar22;
  undefined1 auStackY_208 [32];
  <lambda_1> local_1b8;
  CodeLocation local_190;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_168;
  char *******local_148;
  undefined8 uStack_140;
  ulong64 local_138;
  ulonglong uStack_130;
  _Bxty local_128;
  ulong64 local_118;
  ulong64 uStack_110;
  _Bxty local_108;
  ulong64 local_f8;
  ulong64 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  ulonglong uStack_d0;
  _Bxty local_c8;
  ulong64 local_b8;
  ulonglong uStack_b0;
  _Bxty local_a8;
  ulong64 local_98;
  ulonglong uStack_90;
  _Bxty local_88;
  ulong64 local_78;
  ulonglong uStack_70;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_208;
  pTVar8 = ::operator_new(8);
  if (pTVar8 == (TestFactoryBase *)0x0) {
    pTVar8 = (TestFactoryBase *)0x0;
  }
  else {
    *pTVar8 = (TestFactoryBase)
              &
              ___7__TestFactoryImpl_V__QuaternionEvaluatorTest_EvaluatePerLOD_Test_V__tuple_MU__T256_U__T128_M_scalar_trimd___fallback_trimd__U__T128_M_scalar_3_U__QuaternionsToEulerAngles_U__ang_MUradians_impl_tdm___tdm___0A__rl4___std_____internal_testing__6B_
    ;
  }
  pCVar16 = param_2;
  if (0xf < (param_2->file)._Mypair._Myval2._Myres) {
    pCVar16 = (CodeLocation *)(param_2->file)._Mypair._Myval2._Bx._Ptr;
  }
  p_Var9 = SuiteApiResolver<QuaternionEvaluatorTest_EvaluatePerLOD_Test<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>_>_>
           ::GetTearDownCaseOrSuite((char *)pCVar16,param_2->line);
  pCVar16 = param_2;
  if (0xf < (param_2->file)._Mypair._Myval2._Myres) {
    pCVar16 = (CodeLocation *)(param_2->file)._Mypair._Myval2._Bx._Ptr;
  }
  p_Var10 = SuiteApiResolver<QuaternionEvaluatorTest_EvaluatePerLOD_Test<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>_>_>
            ::GetSetUpCaseOrSuite((char *)pCVar16,param_2->line);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>(&local_190.file,&param_2->file);
  local_190.line = param_2->line;
  uStack_e0 = 0;
  local_d8 = ___xmm_000000000000000f0000000000000006;
  uStack_d0 = _UNK_152873108;
  local_e8 = (void *)(ulonglong)CONCAT24(DAT_1528703b4,_s_<type>);
  pbVar11 = GetPrefixUntilComma(&local_168,param_4);
  pbVar11 = StripTrailingSpaces((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                                &local_88,pbVar11);
  if (0xf < (pbVar11->_Mypair)._Myval2._Myres) {
    pbVar11 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
              (pbVar11->_Mypair)._Myval2._Bx._Ptr;
  }
  local_108._Ptr = (char *)0x0;
  local_108._8_8_ = 0;
  pbVar15 = (param_6->_Mypair)._Myval2._Myfirst + param_5;
  local_f8 = 0;
  uStack_f0 = 0;
  cVar1 = *param_1;
  sVar12 = strlen(param_1);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Construct<1,char_const_*>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_108,param_1,
             sVar12);
  pcVar22 = "/";
  if (cVar1 == '\0') {
    pcVar22 = "";
  }
  pbVar13 = std::operator+<char,std::char_traits<char>,std::allocator<char>_>
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_a8,
                       (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_108
                       ,pcVar22);
  pbVar13 = std::operator+<char,std::char_traits<char>,std::allocator<char>_>
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_c8,
                       pbVar13,param_3);
  uVar2 = (pbVar13->_Mypair)._Myval2._Myres;
  uVar3 = (pbVar13->_Mypair)._Myval2._Mysize;
  if (uVar2 == uVar3) {
    pbVar13 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
              _Reallocate_grow_by<_std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append_::__l2::<lambda_1>,char_const_*,unsigned___int64>
                        (pbVar13,1,local_1b8,"/",1);
  }
  else {
    (pbVar13->_Mypair)._Myval2._Mysize = uVar3 + 1;
    pbVar14 = pbVar13;
    if (0xf < uVar2) {
      pbVar14 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                (pbVar13->_Mypair)._Myval2._Bx._Ptr;
    }
    *(undefined2 *)((longlong)&(pbVar14->_Mypair)._Myval2._Bx + uVar3) = 0x2f;
  }
  local_128._Ptr = (pbVar13->_Mypair)._Myval2._Bx._Ptr;
  local_128._8_8_ = *(undefined8 *)((longlong)&(pbVar13->_Mypair)._Myval2._Bx + 8);
  local_118 = (pbVar13->_Mypair)._Myval2._Mysize;
  uStack_110 = (pbVar13->_Mypair)._Myval2._Myres;
  (pbVar13->_Mypair)._Myval2._Bx._Buf[0] = '\0';
  (pbVar13->_Mypair)._Myval2._Mysize = 0;
  (pbVar13->_Mypair)._Myval2._Myres = 0xf;
  p_Var5 = &pbVar15->_Mypair;
  if (0xf < (pbVar15->_Mypair)._Myval2._Myres) {
    pbVar15 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
              (pbVar15->_Mypair)._Myval2._Bx._Ptr;
  }
  pbVar15 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_128
                       ,(char *)pbVar15,(p_Var5->_Myval2)._Mysize);
  local_148 = (char *******)(pbVar15->_Mypair)._Myval2._Bx._Ptr;
  uStack_140 = *(undefined8 *)((longlong)&(pbVar15->_Mypair)._Myval2._Bx + 8);
  local_138 = (pbVar15->_Mypair)._Myval2._Mysize;
  uStack_130 = (pbVar15->_Mypair)._Myval2._Myres;
  (pbVar15->_Mypair)._Myval2._Bx._Buf[0] = '\0';
  (pbVar15->_Mypair)._Myval2._Mysize = 0;
  (pbVar15->_Mypair)._Myval2._Myres = 0xf;
  pppppppcVar17 = (char *******)&local_148;
  if (0xf < uStack_130) {
    pppppppcVar17 = local_148;
  }
  MakeAndRegisterTestInfo
            ((char *)pppppppcVar17,(char *)pbVar11,(char *)&local_e8,(char *)0x0,&local_190,
             &TypeIdHelper<QuaternionEvaluatorTest<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>_>_>
              ::dummy_,(_func_void *)p_Var10,(_func_void *)p_Var9,pTVar8);
  if (0xf < uStack_130) {
    uVar20 = uStack_130 + 1;
    pppppppcVar17 = local_148;
    if (0xfff < uVar20) {
      pppppppcVar17 = (char *******)local_148[-1];
      uVar20 = uStack_130 + 0x28;
      if ((char *)0x1f < (char *)((longlong)local_148 + (-8 - (longlong)pppppppcVar17)))
      goto LAB_14c56d72f;
    }
    ::operator_delete(pppppppcVar17,uVar20);
  }
  uVar6 = _UNK_15076add8;
  uVar20 = ___xmm_000000000000000f0000000000000000;
  local_148 = (char *******)((ulonglong)local_148 & 0xffffffffffffff00);
  local_138 = ___xmm_000000000000000f0000000000000000;
  uStack_130 = _UNK_15076add8;
  if (0xf < uStack_110) {
    uVar21 = uStack_110 + 1;
    uVar18 = local_128._Ptr;
    if (0xfff < uVar21) {
      uVar18 = *(undefined8 *)(local_128._Ptr + -8);
      uVar21 = uStack_110 + 0x28;
      if ((char *)0x1f < local_128._Ptr + (-8 - uVar18)) goto LAB_14c56d72f;
    }
    ::operator_delete((void *)uVar18,uVar21);
  }
  local_128._Ptr = local_128._Ptr & 0xffffffffffffff00;
  local_118 = uVar20;
  uStack_110 = uVar6;
  if (0xf < uStack_b0) {
    pvVar4 = (void *)CONCAT71(local_c8._1_7_,local_c8._Buf[0]);
    uVar21 = uStack_b0 + 1;
    pvVar19 = pvVar4;
    if (0xfff < uVar21) {
      pvVar19 = *(void **)((longlong)pvVar4 + -8);
      uVar21 = uStack_b0 + 0x28;
      if (0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar19))) goto LAB_14c56d72f;
    }
    ::operator_delete(pvVar19,uVar21);
  }
  local_c8._Buf[0] = '\0';
  local_b8 = uVar20;
  uStack_b0 = uVar6;
  if (0xf < uStack_90) {
    pvVar4 = (void *)CONCAT71(local_a8._1_7_,local_a8._Buf[0]);
    uVar21 = uStack_90 + 1;
    pvVar19 = pvVar4;
    if (0xfff < uVar21) {
      pvVar19 = *(void **)((longlong)pvVar4 + -8);
      uVar21 = uStack_90 + 0x28;
      if (0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar19))) goto LAB_14c56d72f;
    }
    ::operator_delete(pvVar19,uVar21);
  }
  local_a8._Buf[0] = '\0';
  local_98 = uVar20;
  uStack_90 = uVar6;
  if (0xf < uStack_f0) {
    uVar21 = uStack_f0 + 1;
    uVar18 = local_108._Ptr;
    if (0xfff < uVar21) {
      uVar18 = *(undefined8 *)(local_108._Ptr + -8);
      uVar21 = uStack_f0 + 0x28;
      if ((char *)0x1f < local_108._Ptr + (-8 - uVar18)) goto LAB_14c56d72f;
    }
    ::operator_delete((void *)uVar18,uVar21);
  }
  local_108._Ptr = local_108._Ptr & 0xffffffffffffff00;
  local_f8 = uVar20;
  uStack_f0 = uVar6;
  if (0xf < uStack_70) {
    pvVar4 = (void *)CONCAT71(local_88._1_7_,local_88._Buf[0]);
    uVar21 = uStack_70 + 1;
    pvVar19 = pvVar4;
    if (0xfff < uVar21) {
      pvVar19 = *(void **)((longlong)pvVar4 + -8);
      uVar21 = uStack_70 + 0x28;
      if (0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar19))) goto LAB_14c56d72f;
    }
    ::operator_delete(pvVar19,uVar21);
  }
  local_88._Buf[0] = '\0';
  local_78 = uVar20;
  uStack_70 = uVar6;
  if (0xf < uStack_d0) {
    uVar20 = uStack_d0 + 1;
    pvVar19 = local_e8;
    if (0xfff < uVar20) {
      pvVar19 = *(void **)((longlong)local_e8 + -8);
      uVar20 = uStack_d0 + 0x28;
      if (0x1f < (ulonglong)((longlong)local_e8 + (-8 - (longlong)pvVar19))) {
LAB_14c56d72f:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete(pvVar19,uVar20);
  }
  bVar7 = TypeParameterizedTest<`anonymous_namespace'::QuaternionEvaluatorTest,testing::internal::TemplateSel<QuaternionEvaluatorTest_EvaluatePerLOD_Test>,testing::internal::Types1<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>_>_>
          ::Register(param_1,param_2,param_3,param_4,param_5 + 1,param_6);
  return bVar7;
}

// Register @ 14c56d7a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
testing::internal::
TypeParameterizedTest<`anonymous_namespace'::QuaternionEvaluatorTest,testing::internal::TemplateSel<QuaternionEvaluatorTest_EvaluatePerLOD_Test>,testing::internal::Types3<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>,std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>_>_>
::Register(char *param_1,CodeLocation *param_2,char *param_3,char *param_4,int param_5,
          vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
          *param_6)

{
  char cVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  void *pvVar4;
  _Compressed_pair<std::allocator<char>,std::_String_val<std::_Simple_types<char>_>,1> *p_Var5;
  ulong64 uVar6;
  bool bVar7;
  TestFactoryBase *pTVar8;
  _func___cdecl_void *p_Var9;
  _func___cdecl_void *p_Var10;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar11;
  size_t sVar12;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar13;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar14;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar15;
  CodeLocation *pCVar16;
  char *******pppppppcVar17;
  undefined8 uVar18;
  void *pvVar19;
  ulong64 uVar20;
  ulong64 uVar21;
  char *pcVar22;
  undefined1 auStackY_208 [32];
  <lambda_1> local_1b8;
  CodeLocation local_190;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_168;
  char *******local_148;
  undefined8 uStack_140;
  ulong64 local_138;
  ulonglong uStack_130;
  _Bxty local_128;
  ulong64 local_118;
  ulong64 uStack_110;
  _Bxty local_108;
  ulong64 local_f8;
  ulong64 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  ulonglong uStack_d0;
  _Bxty local_c8;
  ulong64 local_b8;
  ulonglong uStack_b0;
  _Bxty local_a8;
  ulong64 local_98;
  ulonglong uStack_90;
  _Bxty local_88;
  ulong64 local_78;
  ulonglong uStack_70;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_208;
  pTVar8 = ::operator_new(8);
  if (pTVar8 == (TestFactoryBase *)0x0) {
    pTVar8 = (TestFactoryBase *)0x0;
  }
  else {
    *pTVar8 = (TestFactoryBase)
              &
              ___7__TestFactoryImpl_V__QuaternionEvaluatorTest_EvaluatePerLOD_Test_V__tuple_MU__T256_UF128_sse_trimd___fallback_trimd__UF128_sse_3_UPassthroughAdapter_rl4___std_____internal_testing__6B_
    ;
  }
  pCVar16 = param_2;
  if (0xf < (param_2->file)._Mypair._Myval2._Myres) {
    pCVar16 = (CodeLocation *)(param_2->file)._Mypair._Myval2._Bx._Ptr;
  }
  p_Var9 = SuiteApiResolver<QuaternionEvaluatorTest_EvaluatePerLOD_Test<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>_>_>
           ::GetTearDownCaseOrSuite((char *)pCVar16,param_2->line);
  pCVar16 = param_2;
  if (0xf < (param_2->file)._Mypair._Myval2._Myres) {
    pCVar16 = (CodeLocation *)(param_2->file)._Mypair._Myval2._Bx._Ptr;
  }
  p_Var10 = SuiteApiResolver<QuaternionEvaluatorTest_EvaluatePerLOD_Test<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>_>_>
            ::GetSetUpCaseOrSuite((char *)pCVar16,param_2->line);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>(&local_190.file,&param_2->file);
  local_190.line = param_2->line;
  uStack_e0 = 0;
  local_d8 = ___xmm_000000000000000f0000000000000006;
  uStack_d0 = _UNK_152873108;
  local_e8 = (void *)(ulonglong)CONCAT24(DAT_1528703b4,_s_<type>);
  pbVar11 = GetPrefixUntilComma(&local_168,param_4);
  pbVar11 = StripTrailingSpaces((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                                &local_88,pbVar11);
  if (0xf < (pbVar11->_Mypair)._Myval2._Myres) {
    pbVar11 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
              (pbVar11->_Mypair)._Myval2._Bx._Ptr;
  }
  local_108._Ptr = (char *)0x0;
  local_108._8_8_ = 0;
  pbVar15 = (param_6->_Mypair)._Myval2._Myfirst + param_5;
  local_f8 = 0;
  uStack_f0 = 0;
  cVar1 = *param_1;
  sVar12 = strlen(param_1);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Construct<1,char_const_*>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_108,param_1,
             sVar12);
  pcVar22 = "/";
  if (cVar1 == '\0') {
    pcVar22 = "";
  }
  pbVar13 = std::operator+<char,std::char_traits<char>,std::allocator<char>_>
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_a8,
                       (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_108
                       ,pcVar22);
  pbVar13 = std::operator+<char,std::char_traits<char>,std::allocator<char>_>
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_c8,
                       pbVar13,param_3);
  uVar2 = (pbVar13->_Mypair)._Myval2._Myres;
  uVar3 = (pbVar13->_Mypair)._Myval2._Mysize;
  if (uVar2 == uVar3) {
    pbVar13 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
              _Reallocate_grow_by<_std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append_::__l2::<lambda_1>,char_const_*,unsigned___int64>
                        (pbVar13,1,local_1b8,"/",1);
  }
  else {
    (pbVar13->_Mypair)._Myval2._Mysize = uVar3 + 1;
    pbVar14 = pbVar13;
    if (0xf < uVar2) {
      pbVar14 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                (pbVar13->_Mypair)._Myval2._Bx._Ptr;
    }
    *(undefined2 *)((longlong)&(pbVar14->_Mypair)._Myval2._Bx + uVar3) = 0x2f;
  }
  local_128._Ptr = (pbVar13->_Mypair)._Myval2._Bx._Ptr;
  local_128._8_8_ = *(undefined8 *)((longlong)&(pbVar13->_Mypair)._Myval2._Bx + 8);
  local_118 = (pbVar13->_Mypair)._Myval2._Mysize;
  uStack_110 = (pbVar13->_Mypair)._Myval2._Myres;
  (pbVar13->_Mypair)._Myval2._Bx._Buf[0] = '\0';
  (pbVar13->_Mypair)._Myval2._Mysize = 0;
  (pbVar13->_Mypair)._Myval2._Myres = 0xf;
  p_Var5 = &pbVar15->_Mypair;
  if (0xf < (pbVar15->_Mypair)._Myval2._Myres) {
    pbVar15 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
              (pbVar15->_Mypair)._Myval2._Bx._Ptr;
  }
  pbVar15 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_128
                       ,(char *)pbVar15,(p_Var5->_Myval2)._Mysize);
  local_148 = (char *******)(pbVar15->_Mypair)._Myval2._Bx._Ptr;
  uStack_140 = *(undefined8 *)((longlong)&(pbVar15->_Mypair)._Myval2._Bx + 8);
  local_138 = (pbVar15->_Mypair)._Myval2._Mysize;
  uStack_130 = (pbVar15->_Mypair)._Myval2._Myres;
  (pbVar15->_Mypair)._Myval2._Bx._Buf[0] = '\0';
  (pbVar15->_Mypair)._Myval2._Mysize = 0;
  (pbVar15->_Mypair)._Myval2._Myres = 0xf;
  pppppppcVar17 = (char *******)&local_148;
  if (0xf < uStack_130) {
    pppppppcVar17 = local_148;
  }
  MakeAndRegisterTestInfo
            ((char *)pppppppcVar17,(char *)pbVar11,(char *)&local_e8,(char *)0x0,&local_190,
             &TypeIdHelper<QuaternionEvaluatorTest<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>_>_>
              ::dummy_,(_func_void *)p_Var10,(_func_void *)p_Var9,pTVar8);
  if (0xf < uStack_130) {
    uVar20 = uStack_130 + 1;
    pppppppcVar17 = local_148;
    if (0xfff < uVar20) {
      pppppppcVar17 = (char *******)local_148[-1];
      uVar20 = uStack_130 + 0x28;
      if ((char *)0x1f < (char *)((longlong)local_148 + (-8 - (longlong)pppppppcVar17)))
      goto LAB_14c56dc3f;
    }
    ::operator_delete(pppppppcVar17,uVar20);
  }
  uVar6 = _UNK_15076add8;
  uVar20 = ___xmm_000000000000000f0000000000000000;
  local_148 = (char *******)((ulonglong)local_148 & 0xffffffffffffff00);
  local_138 = ___xmm_000000000000000f0000000000000000;
  uStack_130 = _UNK_15076add8;
  if (0xf < uStack_110) {
    uVar21 = uStack_110 + 1;
    uVar18 = local_128._Ptr;
    if (0xfff < uVar21) {
      uVar18 = *(undefined8 *)(local_128._Ptr + -8);
      uVar21 = uStack_110 + 0x28;
      if ((char *)0x1f < local_128._Ptr + (-8 - uVar18)) goto LAB_14c56dc3f;
    }
    ::operator_delete((void *)uVar18,uVar21);
  }
  local_128._Ptr = local_128._Ptr & 0xffffffffffffff00;
  local_118 = uVar20;
  uStack_110 = uVar6;
  if (0xf < uStack_b0) {
    pvVar4 = (void *)CONCAT71(local_c8._1_7_,local_c8._Buf[0]);
    uVar21 = uStack_b0 + 1;
    pvVar19 = pvVar4;
    if (0xfff < uVar21) {
      pvVar19 = *(void **)((longlong)pvVar4 + -8);
      uVar21 = uStack_b0 + 0x28;
      if (0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar19))) goto LAB_14c56dc3f;
    }
    ::operator_delete(pvVar19,uVar21);
  }
  local_c8._Buf[0] = '\0';
  local_b8 = uVar20;
  uStack_b0 = uVar6;
  if (0xf < uStack_90) {
    pvVar4 = (void *)CONCAT71(local_a8._1_7_,local_a8._Buf[0]);
    uVar21 = uStack_90 + 1;
    pvVar19 = pvVar4;
    if (0xfff < uVar21) {
      pvVar19 = *(void **)((longlong)pvVar4 + -8);
      uVar21 = uStack_90 + 0x28;
      if (0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar19))) goto LAB_14c56dc3f;
    }
    ::operator_delete(pvVar19,uVar21);
  }
  local_a8._Buf[0] = '\0';
  local_98 = uVar20;
  uStack_90 = uVar6;
  if (0xf < uStack_f0) {
    uVar21 = uStack_f0 + 1;
    uVar18 = local_108._Ptr;
    if (0xfff < uVar21) {
      uVar18 = *(undefined8 *)(local_108._Ptr + -8);
      uVar21 = uStack_f0 + 0x28;
      if ((char *)0x1f < local_108._Ptr + (-8 - uVar18)) goto LAB_14c56dc3f;
    }
    ::operator_delete((void *)uVar18,uVar21);
  }
  local_108._Ptr = local_108._Ptr & 0xffffffffffffff00;
  local_f8 = uVar20;
  uStack_f0 = uVar6;
  if (0xf < uStack_70) {
    pvVar4 = (void *)CONCAT71(local_88._1_7_,local_88._Buf[0]);
    uVar21 = uStack_70 + 1;
    pvVar19 = pvVar4;
    if (0xfff < uVar21) {
      pvVar19 = *(void **)((longlong)pvVar4 + -8);
      uVar21 = uStack_70 + 0x28;
      if (0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar19))) goto LAB_14c56dc3f;
    }
    ::operator_delete(pvVar19,uVar21);
  }
  local_88._Buf[0] = '\0';
  local_78 = uVar20;
  uStack_70 = uVar6;
  if (0xf < uStack_d0) {
    uVar20 = uStack_d0 + 1;
    pvVar19 = local_e8;
    if (0xfff < uVar20) {
      pvVar19 = *(void **)((longlong)local_e8 + -8);
      uVar20 = uStack_d0 + 0x28;
      if (0x1f < (ulonglong)((longlong)local_e8 + (-8 - (longlong)pvVar19))) {
LAB_14c56dc3f:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete(pvVar19,uVar20);
  }
  bVar7 = TypeParameterizedTest<`anonymous_namespace'::QuaternionEvaluatorTest,testing::internal::TemplateSel<QuaternionEvaluatorTest_EvaluatePerLOD_Test>,testing::internal::Types2<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>_>_>
          ::Register(param_1,param_2,param_3,param_4,param_5 + 1,param_6);
  return bVar7;
}

// Register @ 14c56dcb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
testing::internal::
TypeParameterizedTest<`anonymous_namespace'::QuaternionEvaluatorTest,testing::internal::TemplateSel<QuaternionEvaluatorTest_EvaluatePerLOD_Test>,testing::internal::Types4<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>,std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>_>_>
::Register(char *param_1,CodeLocation *param_2,char *param_3,char *param_4,int param_5,
          vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
          *param_6)

{
  char cVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  void *pvVar4;
  _Compressed_pair<std::allocator<char>,std::_String_val<std::_Simple_types<char>_>,1> *p_Var5;
  ulong64 uVar6;
  bool bVar7;
  TestFactoryBase *pTVar8;
  _func___cdecl_void *p_Var9;
  _func___cdecl_void *p_Var10;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar11;
  size_t sVar12;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar13;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar14;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar15;
  CodeLocation *pCVar16;
  char *******pppppppcVar17;
  undefined8 uVar18;
  void *pvVar19;
  ulong64 uVar20;
  ulong64 uVar21;
  char *pcVar22;
  undefined1 auStackY_208 [32];
  <lambda_1> local_1b8;
  CodeLocation local_190;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_168;
  char *******local_148;
  undefined8 uStack_140;
  ulong64 local_138;
  ulonglong uStack_130;
  _Bxty local_128;
  ulong64 local_118;
  ulong64 uStack_110;
  _Bxty local_108;
  ulong64 local_f8;
  ulong64 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  ulonglong uStack_d0;
  _Bxty local_c8;
  ulong64 local_b8;
  ulonglong uStack_b0;
  _Bxty local_a8;
  ulong64 local_98;
  ulonglong uStack_90;
  _Bxty local_88;
  ulong64 local_78;
  ulonglong uStack_70;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_208;
  pTVar8 = ::operator_new(8);
  if (pTVar8 == (TestFactoryBase *)0x0) {
    pTVar8 = (TestFactoryBase *)0x0;
  }
  else {
    *pTVar8 = (TestFactoryBase)
              &
              ___7__TestFactoryImpl_V__QuaternionEvaluatorTest_EvaluatePerLOD_Test_V__tuple_MU__T256_UF128_sse_trimd___fallback_trimd__UF128_sse_3_U__QuaternionsToEulerAngles_U__ang_MUradians_impl_tdm___tdm___0A__rl4___std_____internal_testing__6B_
    ;
  }
  pCVar16 = param_2;
  if (0xf < (param_2->file)._Mypair._Myval2._Myres) {
    pCVar16 = (CodeLocation *)(param_2->file)._Mypair._Myval2._Bx._Ptr;
  }
  p_Var9 = SuiteApiResolver<QuaternionEvaluatorTest_EvaluatePerLOD_Test<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>_>_>
           ::GetTearDownCaseOrSuite((char *)pCVar16,param_2->line);
  pCVar16 = param_2;
  if (0xf < (param_2->file)._Mypair._Myval2._Myres) {
    pCVar16 = (CodeLocation *)(param_2->file)._Mypair._Myval2._Bx._Ptr;
  }
  p_Var10 = SuiteApiResolver<QuaternionEvaluatorTest_EvaluatePerLOD_Test<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>_>_>
            ::GetSetUpCaseOrSuite((char *)pCVar16,param_2->line);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>(&local_190.file,&param_2->file);
  local_190.line = param_2->line;
  uStack_e0 = 0;
  local_d8 = ___xmm_000000000000000f0000000000000006;
  uStack_d0 = _UNK_152873108;
  local_e8 = (void *)(ulonglong)CONCAT24(DAT_1528703b4,_s_<type>);
  pbVar11 = GetPrefixUntilComma(&local_168,param_4);
  pbVar11 = StripTrailingSpaces((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                                &local_88,pbVar11);
  if (0xf < (pbVar11->_Mypair)._Myval2._Myres) {
    pbVar11 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
              (pbVar11->_Mypair)._Myval2._Bx._Ptr;
  }
  local_108._Ptr = (char *)0x0;
  local_108._8_8_ = 0;
  pbVar15 = (param_6->_Mypair)._Myval2._Myfirst + param_5;
  local_f8 = 0;
  uStack_f0 = 0;
  cVar1 = *param_1;
  sVar12 = strlen(param_1);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Construct<1,char_const_*>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_108,param_1,
             sVar12);
  pcVar22 = "/";
  if (cVar1 == '\0') {
    pcVar22 = "";
  }
  pbVar13 = std::operator+<char,std::char_traits<char>,std::allocator<char>_>
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_a8,
                       (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_108
                       ,pcVar22);
  pbVar13 = std::operator+<char,std::char_traits<char>,std::allocator<char>_>
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_c8,
                       pbVar13,param_3);
  uVar2 = (pbVar13->_Mypair)._Myval2._Myres;
  uVar3 = (pbVar13->_Mypair)._Myval2._Mysize;
  if (uVar2 == uVar3) {
    pbVar13 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
              _Reallocate_grow_by<_std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append_::__l2::<lambda_1>,char_const_*,unsigned___int64>
                        (pbVar13,1,local_1b8,"/",1);
  }
  else {
    (pbVar13->_Mypair)._Myval2._Mysize = uVar3 + 1;
    pbVar14 = pbVar13;
    if (0xf < uVar2) {
      pbVar14 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                (pbVar13->_Mypair)._Myval2._Bx._Ptr;
    }
    *(undefined2 *)((longlong)&(pbVar14->_Mypair)._Myval2._Bx + uVar3) = 0x2f;
  }
  local_128._Ptr = (pbVar13->_Mypair)._Myval2._Bx._Ptr;
  local_128._8_8_ = *(undefined8 *)((longlong)&(pbVar13->_Mypair)._Myval2._Bx + 8);
  local_118 = (pbVar13->_Mypair)._Myval2._Mysize;
  uStack_110 = (pbVar13->_Mypair)._Myval2._Myres;
  (pbVar13->_Mypair)._Myval2._Bx._Buf[0] = '\0';
  (pbVar13->_Mypair)._Myval2._Mysize = 0;
  (pbVar13->_Mypair)._Myval2._Myres = 0xf;
  p_Var5 = &pbVar15->_Mypair;
  if (0xf < (pbVar15->_Mypair)._Myval2._Myres) {
    pbVar15 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
              (pbVar15->_Mypair)._Myval2._Bx._Ptr;
  }
  pbVar15 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_128
                       ,(char *)pbVar15,(p_Var5->_Myval2)._Mysize);
  local_148 = (char *******)(pbVar15->_Mypair)._Myval2._Bx._Ptr;
  uStack_140 = *(undefined8 *)((longlong)&(pbVar15->_Mypair)._Myval2._Bx + 8);
  local_138 = (pbVar15->_Mypair)._Myval2._Mysize;
  uStack_130 = (pbVar15->_Mypair)._Myval2._Myres;
  (pbVar15->_Mypair)._Myval2._Bx._Buf[0] = '\0';
  (pbVar15->_Mypair)._Myval2._Mysize = 0;
  (pbVar15->_Mypair)._Myval2._Myres = 0xf;
  pppppppcVar17 = (char *******)&local_148;
  if (0xf < uStack_130) {
    pppppppcVar17 = local_148;
  }
  MakeAndRegisterTestInfo
            ((char *)pppppppcVar17,(char *)pbVar11,(char *)&local_e8,(char *)0x0,&local_190,
             &TypeIdHelper<QuaternionEvaluatorTest<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>_>_>
              ::dummy_,(_func_void *)p_Var10,(_func_void *)p_Var9,pTVar8);
  if (0xf < uStack_130) {
    uVar20 = uStack_130 + 1;
    pppppppcVar17 = local_148;
    if (0xfff < uVar20) {
      pppppppcVar17 = (char *******)local_148[-1];
      uVar20 = uStack_130 + 0x28;
      if ((char *)0x1f < (char *)((longlong)local_148 + (-8 - (longlong)pppppppcVar17)))
      goto LAB_14c56e14f;
    }
    ::operator_delete(pppppppcVar17,uVar20);
  }
  uVar6 = _UNK_15076add8;
  uVar20 = ___xmm_000000000000000f0000000000000000;
  local_148 = (char *******)((ulonglong)local_148 & 0xffffffffffffff00);
  local_138 = ___xmm_000000000000000f0000000000000000;
  uStack_130 = _UNK_15076add8;
  if (0xf < uStack_110) {
    uVar21 = uStack_110 + 1;
    uVar18 = local_128._Ptr;
    if (0xfff < uVar21) {
      uVar18 = *(undefined8 *)(local_128._Ptr + -8);
      uVar21 = uStack_110 + 0x28;
      if ((char *)0x1f < local_128._Ptr + (-8 - uVar18)) goto LAB_14c56e14f;
    }
    ::operator_delete((void *)uVar18,uVar21);
  }
  local_128._Ptr = local_128._Ptr & 0xffffffffffffff00;
  local_118 = uVar20;
  uStack_110 = uVar6;
  if (0xf < uStack_b0) {
    pvVar4 = (void *)CONCAT71(local_c8._1_7_,local_c8._Buf[0]);
    uVar21 = uStack_b0 + 1;
    pvVar19 = pvVar4;
    if (0xfff < uVar21) {
      pvVar19 = *(void **)((longlong)pvVar4 + -8);
      uVar21 = uStack_b0 + 0x28;
      if (0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar19))) goto LAB_14c56e14f;
    }
    ::operator_delete(pvVar19,uVar21);
  }
  local_c8._Buf[0] = '\0';
  local_b8 = uVar20;
  uStack_b0 = uVar6;
  if (0xf < uStack_90) {
    pvVar4 = (void *)CONCAT71(local_a8._1_7_,local_a8._Buf[0]);
    uVar21 = uStack_90 + 1;
    pvVar19 = pvVar4;
    if (0xfff < uVar21) {
      pvVar19 = *(void **)((longlong)pvVar4 + -8);
      uVar21 = uStack_90 + 0x28;
      if (0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar19))) goto LAB_14c56e14f;
    }
    ::operator_delete(pvVar19,uVar21);
  }
  local_a8._Buf[0] = '\0';
  local_98 = uVar20;
  uStack_90 = uVar6;
  if (0xf < uStack_f0) {
    uVar21 = uStack_f0 + 1;
    uVar18 = local_108._Ptr;
    if (0xfff < uVar21) {
      uVar18 = *(undefined8 *)(local_108._Ptr + -8);
      uVar21 = uStack_f0 + 0x28;
      if ((char *)0x1f < local_108._Ptr + (-8 - uVar18)) goto LAB_14c56e14f;
    }
    ::operator_delete((void *)uVar18,uVar21);
  }
  local_108._Ptr = local_108._Ptr & 0xffffffffffffff00;
  local_f8 = uVar20;
  uStack_f0 = uVar6;
  if (0xf < uStack_70) {
    pvVar4 = (void *)CONCAT71(local_88._1_7_,local_88._Buf[0]);
    uVar21 = uStack_70 + 1;
    pvVar19 = pvVar4;
    if (0xfff < uVar21) {
      pvVar19 = *(void **)((longlong)pvVar4 + -8);
      uVar21 = uStack_70 + 0x28;
      if (0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar19))) goto LAB_14c56e14f;
    }
    ::operator_delete(pvVar19,uVar21);
  }
  local_88._Buf[0] = '\0';
  local_78 = uVar20;
  uStack_70 = uVar6;
  if (0xf < uStack_d0) {
    uVar20 = uStack_d0 + 1;
    pvVar19 = local_e8;
    if (0xfff < uVar20) {
      pvVar19 = *(void **)((longlong)local_e8 + -8);
      uVar20 = uStack_d0 + 0x28;
      if (0x1f < (ulonglong)((longlong)local_e8 + (-8 - (longlong)pvVar19))) {
LAB_14c56e14f:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete(pvVar19,uVar20);
  }
  bVar7 = TypeParameterizedTest<`anonymous_namespace'::QuaternionEvaluatorTest,testing::internal::TemplateSel<QuaternionEvaluatorTest_EvaluatePerLOD_Test>,testing::internal::Types3<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>,std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>_>_>
          ::Register(param_1,param_2,param_3,param_4,param_5 + 1,param_6);
  return bVar7;
}

// _Reset_move @ 14c56e1c0

void __thiscall
std::_Func_class<void,rl4::JointsEvaluator_*>::_Reset_move
          (_Func_class<void,rl4::JointsEvaluator_*> *this,
          _Func_class<void,rl4::JointsEvaluator_*> *param_1)

{
  _Func_base<void,rl4::JointsEvaluator_*> *p_Var1;
  
  p_Var1 = (param_1->_Mystorage)._Ptrs[7];
  if (p_Var1 != (_Func_base<void,rl4::JointsEvaluator_*> *)0x0) {
    if (p_Var1 == (_Func_base<void,rl4::JointsEvaluator_*> *)param_1) {
      p_Var1 = (_Func_base<void,rl4::JointsEvaluator_*> *)
               (**(code **)(*(longlong *)&p_Var1->field_0x0 + 8))(p_Var1,this);
      (this->_Mystorage)._Ptrs[7] = p_Var1;
      p_Var1 = (param_1->_Mystorage)._Ptrs[7];
      if (p_Var1 != (_Func_base<void,rl4::JointsEvaluator_*> *)0x0) {
        (*(code *)((_Storage *)&p_Var1->field_0x0)->_Ptrs[0][4])
                  (p_Var1,p_Var1 != (_Func_base<void,rl4::JointsEvaluator_*> *)param_1);
        (param_1->_Mystorage)._Ptrs[7] = (_Func_base<void,rl4::JointsEvaluator_*> *)0x0;
        return;
      }
    }
    else {
      (this->_Mystorage)._Ptrs[7] = p_Var1;
      (param_1->_Mystorage)._Ptrs[7] = (_Func_base<void,rl4::JointsEvaluator_*> *)0x0;
    }
  }
  return;
}

// _Tidy @ 14c56e230

void __thiscall
std::
vector<rl4::JointGroup<float>,pma::PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>_>
::_Tidy(vector<rl4::JointGroup<float>,pma::PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>_>
        *this)

{
  JointGroup<float> *pJVar1;
  PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource> PVar2;
  JointGroup<float> *this_00;
  
  this_00 = (this->_Mypair)._Myval2._Myfirst;
  if (this_00 != (JointGroup<float> *)0x0) {
    pJVar1 = (this->_Mypair)._Myval2._Mylast;
    for (; this_00 != pJVar1; this_00 = this_00 + 1) {
      rl4::JointGroup<float>::~JointGroup<float>(this_00);
    }
    PVar2 = (this->_Mypair)._Myval1;
    (**(code **)(*(longlong *)PVar2 + 0x10))
              (PVar2,(this->_Mypair)._Myval2._Myfirst,
               (((longlong)(this->_Mypair)._Myval2._Myend -
                (longlong)(this->_Mypair)._Myval2._Myfirst) / 0x88) * 0x88,8);
    (this->_Mypair)._Myval2._Myfirst = (JointGroup<float> *)0x0;
    (this->_Mypair)._Myval2._Mylast = (JointGroup<float> *)0x0;
    (this->_Mypair)._Myval2._Myend = (JointGroup<float> *)0x0;
  }
  return;
}

// `dynamic_atexit_destructor_for_'dmr'' @ 150451020

void __cdecl
`pma::impl::
PolyAllocator<rl4::VectorizedJointGroupQuaternionCalculationStrategy<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,8,pma::DefaultMemoryResource>
::
PolyAllocator<rl4::VectorizedJointGroupQuaternionCalculationStrategy<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,8,pma::DefaultMemoryResource>'
::__l2::_dynamic_atexit_destructor_for__dmr__(void)

{
  pma::MemoryResource::~MemoryResource
            ((MemoryResource *)
             &`public:___cdecl_pma::impl::PolyAllocator<rl4::VectorizedJointGroupQuaternionCalculationStrategy<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::VectorizedJointGroupQuaternionCalculationStrategy<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
              ::__l2::dmr);
  return;
}

// `dynamic_atexit_destructor_for_'dmr'' @ 150451040

void __cdecl
`pma::impl::
PolyAllocator<rl4::VectorizedJointGroupQuaternionCalculationStrategy<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,8,pma::DefaultMemoryResource>
::
PolyAllocator<rl4::VectorizedJointGroupQuaternionCalculationStrategy<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,8,pma::DefaultMemoryResource>'
::__l2::_dynamic_atexit_destructor_for__dmr__(void)

{
  pma::MemoryResource::~MemoryResource
            ((MemoryResource *)
             &`public:___cdecl_pma::impl::PolyAllocator<rl4::VectorizedJointGroupQuaternionCalculationStrategy<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::VectorizedJointGroupQuaternionCalculationStrategy<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
              ::__l2::dmr);
  return;
}

