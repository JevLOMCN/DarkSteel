// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosCloth
// Functions: 8

// GetTestFlags @ 14db78b00

EAutomationTestFlags __thiscall
FIspcTestChaosClothingSimulationSolverPreSimulation::GetTestFlags
          (FIspcTestChaosClothingSimulationSolverPreSimulation *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 14db78b10

bool __thiscall
FIspcTestChaosClothingSimulationSolverPreSimulation::IsStressTest
          (FIspcTestChaosClothingSimulationSolverPreSimulation *this)

{
  return false;
}

// GetRequiredDeviceNum @ 14db78b20

uint __thiscall
FIspcTestChaosClothingSimulationSolverPreSimulation::GetRequiredDeviceNum
          (FIspcTestChaosClothingSimulationSolverPreSimulation *this)

{
  return 1;
}

// GetTestSourceFileName @ 14db78b30

FString * __thiscall
FIspcTestChaosClothingSimulationSolverPreSimulation::GetTestSourceFileName
          (FIspcTestChaosClothingSimulationSolverPreSimulation *this,FString *__return_storage_ptr__
          )

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\IspcTestChaosClothingSimulationSolver.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 14db78b60

int __thiscall
FIspcTestChaosClothingSimulationSolverPreSimulation::GetTestSourceFileLine
          (FIspcTestChaosClothingSimulationSolverPreSimulation *this)

{
  return 0x45;
}

// GetTests @ 14db78b70

/* WARNING: Removing unreachable block (ram,0x00014db78c5d) */
/* WARNING: Removing unreachable block (ram,0x00014db78d28) */

void __thiscall
FIspcTestChaosClothingSimulationSolverPreSimulation::GetTests
          (FIspcTestChaosClothingSimulationSolverPreSimulation *this,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"Ispc.Physics.ChaosClothingSimulationSolver.PreSimulation");
  pFVar4 = (param_1->AllocatorInstance).Data;
  if (((pFVar4 <= (FScriptContainerElement *)&local_18) &&
      ((FScriptContainerElement *)&local_18 < pFVar4 + (longlong)param_1->ArrayMax * 0x10)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar3 = param_1->ArrayNum;
  if (iVar3 == param_1->ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar3 + 1;
  pFVar4 = (param_1->AllocatorInstance).Data + (longlong)iVar3 * 0x10;
  *(undefined8 *)pFVar4 = 0;
  *(FScriptContainerElement **)pFVar4 = local_18.Data.AllocatorInstance.Data;
  *(int *)(pFVar4 + 8) = local_18.Data.ArrayNum;
  *(int *)(pFVar4 + 0xc) = local_18.Data.ArrayMax;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar4 = (param_2->AllocatorInstance).Data;
  local_28 = 0;
  local_20 = 0;
  if (((pFVar4 <= (FScriptContainerElement *)&local_28) &&
      ((FScriptContainerElement *)&local_28 < pFVar4 + (longlong)param_2->ArrayMax * 0x10)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar3 = param_2->ArrayNum;
  if (iVar3 == param_2->ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  param_2->ArrayNum = iVar3 + 1;
  pFVar4 = (param_2->AllocatorInstance).Data + (longlong)iVar3 * 0x10;
  *(undefined8 *)pFVar4 = 0;
  *(undefined8 *)pFVar4 = local_28;
  *(undefined4 *)(pFVar4 + 8) = (undefined4)local_20;
  *(undefined4 *)(pFVar4 + 0xc) = local_20._4_4_;
  return;
}

// RunTest @ 14db78d50

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
FIspcTestChaosClothingSimulationSolverPreSimulation::RunTest
          (FIspcTestChaosClothingSimulationSolverPreSimulation *this,FString *param_1)

{
  FPAndInvM *pFVar1;
  FPAndInvM *pFVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  FAutomationTestBase *this_00;
  TVector<float,3> *pTVar11;
  TVector<float,3> *pTVar12;
  undefined8 uVar13;
  bool bVar14;
  undefined1 uVar15;
  bool bVar16;
  int iVar17;
  TArrayView<Chaos::TVector<float,3>,int> *pTVar18;
  TParticlesRange<Chaos::Softs::FSolverParticles,void> *pTVar19;
  FSolverParticlesRange *pFVar20;
  TArrayView<Chaos::Softs::FPAndInvM,int> *pTVar21;
  ForAnyElementType FVar22;
  TVector<float,3> *pTVar23;
  TVector<float,3> *pTVar24;
  int iVar25;
  longlong lVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  double dVar30;
  double dVar33;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 in_XMM4 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  uint uVar36;
  uint uVar37;
  undefined1 auStackY_10f8 [32];
  longlong local_1070;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_1068 [2];
  int local_1048;
  TVector<float,3> local_1040;
  TVector<float,3> local_1030;
  TVector<float,3> local_1020;
  TVector<float,3> local_1010;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_1000;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_ff0;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_fe0;
  TVector<float,3> local_fd0;
  FAutomationTestBase *local_fc0;
  FString local_fb8;
  FString local_fa8;
  FString local_f98;
  FString local_f88;
  TArrayView<Chaos::Softs::FPAndInvM,int> local_f78;
  TArrayView<Chaos::Softs::FPAndInvM,int> local_f68;
  TArrayView<Chaos::Softs::FPAndInvM,int> local_f58;
  TArrayView<Chaos::Softs::FPAndInvM,int> local_f48;
  double local_f38;
  TArrayView<Chaos::TVector<float,3>,int> local_f30;
  TArrayView<Chaos::TVector<float,3>,int> local_f20;
  TArrayView<Chaos::TVector<float,3>,int> local_f10;
  TArrayView<Chaos::TVector<float,3>,int> local_f00;
  TArrayView<Chaos::TVector<float,3>,int> local_ef0;
  TArrayView<Chaos::TVector<float,3>,int> local_ee0;
  FString local_ed0;
  FString local_ec0;
  TArrayView<Chaos::TVector<float,3>,int> local_eb0;
  TArrayView<Chaos::TVector<float,3>,int> local_ea0;
  FString local_e90;
  FString local_e80;
  FString local_e70;
  FString local_e60;
  TVector<double,3> local_e50;
  TVector<double,3> local_e38;
  TVector<double,3> local_e20;
  TVector<double,3> local_e08;
  undefined1 local_de8 [16];
  undefined1 local_dd8 [16];
  undefined8 local_dc8;
  undefined8 uStack_dc0;
  undefined8 local_db8;
  undefined8 uStack_db0;
  double local_da8;
  double dStack_da0;
  undefined8 local_d98;
  undefined8 uStack_d90;
  undefined1 local_d88 [16];
  undefined1 local_d78 [16];
  double local_d68;
  double dStack_d60;
  undefined8 local_d58;
  undefined8 uStack_d50;
  double local_d48;
  double dStack_d40;
  undefined8 local_d38;
  undefined8 uStack_d30;
  TArrayView<Chaos::TVector<float,3>,int> local_d28;
  TArrayView<Chaos::Softs::FPAndInvM,int> local_d18;
  TArrayView<Chaos::Softs::FPAndInvM,int> local_d08;
  TArrayView<Chaos::TVector<float,3>,int> local_cf8;
  TArrayView<Chaos::Softs::FPAndInvM,int> local_ce8;
  TArrayView<Chaos::TVector<float,3>,int> local_cd8;
  TArrayView<Chaos::Softs::FPAndInvM,int> local_cc8;
  TArrayView<Chaos::TVector<float,3>,int> local_cb8;
  FStringFormatArg local_ca8;
  FStringFormatArg local_c88;
  FStringFormatArg local_c68;
  FStringFormatArg local_c48;
  FStringFormatArg local_c28;
  FStringFormatArg local_c08;
  FStringFormatArg local_be8;
  FStringFormatArg local_bc8;
  FStringFormatArg local_ba8;
  FStringFormatArg local_b88;
  FStringFormatArg local_b68;
  FStringFormatArg local_b48;
  undefined1 local_b28 [376];
  TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> local_9b0 [59];
  undefined1 local_5f8 [376];
  TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> local_480 [59];
  ulonglong local_c8;
  
  bVar16 = bChaos_PreSimulationTransforms_ISPC_Enabled;
  fVar8 = __real_3f800000;
  local_c8 = __security_cookie.value ^ (ulonglong)auStackY_10f8;
  local_1068[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1068[0].ArrayNum = 0;
  local_1040._0_4_ = 0x40a00000;
  local_1040._4_4_ = 0x40a00000;
  local_1040._8_4_ = 0x40a00000;
  local_1030._0_4_ = 0x40000000;
  local_1030._4_4_ = 0x40000000;
  local_1030._8_4_ = 0x40000000;
  local_1020._0_4_ = 0x3f800000;
  local_1020._4_4_ = 0x3f800000;
  local_1020._8_4_ = 0x3f800000;
  local_1010._0_4_ = 0x40a00000;
  local_f38 = __real_3e45798ee0000000;
  dVar30 = ___xmm_3ff00000000000003ff0000000000000 * ___xmm_3ff00000000000003ff0000000000000 +
           ___xmm_3ff00000000000003ff0000000000000 * ___xmm_3ff00000000000003ff0000000000000;
  dVar33 = _UNK_150689688 * _UNK_150689688 + _UNK_150689688 * _UNK_150689688;
  local_1010._4_4_ = 0x40a00000;
  local_1010._8_4_ = 0x40a00000;
  local_fd0._0_4_ = 0x41200000;
  local_fd0._4_4_ = 0x41200000;
  auVar34._8_4_ = SUB84(dVar33,0);
  auVar34._0_8_ = dVar30;
  auVar34._12_4_ = (int)((ulonglong)dVar33 >> 0x20);
  local_d68 = ___xmm_3ff00000000000003ff0000000000000;
  dStack_d60 = _UNK_150689688;
  auVar35._0_8_ = auVar34._8_8_ + dVar30;
  auVar35._8_8_ = dVar30 + dVar33;
  local_fd0._8_4_ = 0x41200000;
  bChaos_PreSimulationTransforms_ISPC_Enabled = true;
  local_d48 = ___xmm_3ff00000000000003ff0000000000000;
  dStack_d40 = _UNK_150689688;
  auVar34 = sqrtpd(in_XMM4,auVar35);
  uVar28 = -(ulonglong)(__real_3e45798ee0000000 <= auVar35._0_8_);
  uVar29 = -(ulonglong)(__real_3e45798ee0000000 <= auVar35._8_8_);
  uVar36 = (uint)(uVar28 >> 0x20);
  uVar37 = (uint)(uVar29 >> 0x20);
  auVar35 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar34);
  auVar31._0_4_ = ~(uint)uVar28 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
  auVar31._4_4_ =
       ~uVar36 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >> 0x20);
  auVar31._8_4_ = ~(uint)uVar29 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar31._12_4_ =
       ~uVar37 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_da8 = ___xmm_3ff00000000000003ff0000000000000;
  dStack_da0 = _UNK_150689688;
  local_de8._0_8_ = uVar28 & (ulonglong)(auVar35._0_8_ * ___xmm_3ff00000000000003ff0000000000000);
  uVar27 = uVar29 & (ulonglong)(auVar35._8_8_ * _UNK_150689688);
  local_de8._8_4_ = (undefined4)uVar27;
  local_de8._12_4_ = (undefined4)(uVar27 >> 0x20);
  local_de8 = local_de8 | auVar31;
  auVar34 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar34);
  local_dd8._0_4_ = ~(uint)uVar28 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0);
  local_dd8._4_4_ =
       ~uVar36 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2] >> 0x20);
  local_dd8._8_4_ = ~(uint)uVar29 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  local_dd8._12_4_ =
       ~uVar37 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  auVar32._0_8_ = (ulonglong)(auVar34._0_8_ * ___xmm_3ff00000000000003ff0000000000000) & uVar28;
  uVar29 = (ulonglong)(auVar34._8_8_ * _UNK_150689688) & uVar29;
  auVar32._8_4_ = (undefined4)uVar29;
  auVar32._12_4_ = (undefined4)(uVar29 >> 0x20);
  local_dd8 = local_dd8 | auVar32;
  local_d58 = ___xmm_00000000000000003ff0000000000000;
  uStack_d50 = _UNK_150689518;
  local_db8 = ___xmm_00000000000000004024000000000000;
  uStack_db0 = _UNK_151444f38;
  local_d38 = ___xmm_00000000000000003ff0000000000000;
  uStack_d30 = _UNK_150689518;
  local_dc8 = ___xmm_40240000000000004024000000000000;
  uStack_dc0 = _UNK_15104e4d8;
  local_d98 = ___xmm_00000000000000003ff0000000000000;
  uStack_d90 = _UNK_150689518;
  local_fc0 = (FAutomationTestBase *)this;
  local_d88 = local_de8;
  local_d78 = local_dd8;
  Chaos::FClothingSimulationSolver::FClothingSimulationSolver
            ((FClothingSimulationSolver *)local_5f8,(FClothingSimulationConfig *)0x0,true);
  Chaos::FClothingSimulationSolver::AddParticles((FClothingSimulationSolver *)local_5f8,100,0);
  Chaos::FClothingSimulationSolver::EnableParticles((FClothingSimulationSolver *)local_5f8,0,true);
  FVar22.Data = local_1068[0].AllocatorInstance.Data;
  iVar25 = 0;
  lVar26 = 0;
  uVar4 = CONCAT44(local_1040._4_4_,local_1040._0_4_);
  uVar5 = CONCAT44(local_1030._4_4_,local_1030._0_4_);
  uVar6 = CONCAT44(local_1020._4_4_,local_1020._0_4_);
  uVar7 = CONCAT44(local_1010._4_4_,local_1010._0_4_);
  local_1048 = local_1068[0].ArrayNum;
  local_1068[1].AllocatorInstance.Data._0_4_ = local_1040._8_4_;
  local_1068[1].AllocatorInstance.Data._4_4_ = local_1030._8_4_;
  local_1068[1].ArrayNum = local_1020._8_4_;
  local_1068[1].ArrayMax = local_1010._8_4_;
  local_1070 = 0;
  do {
    pTVar18 = Chaos::FClothingSimulationSolver::GetParticleXsView
                        ((FClothingSimulationSolver *)local_5f8,&local_cf8,iVar25);
    uVar13 = local_5f8._144_8_;
    pTVar24 = pTVar18->DataPtr;
    if ((FEvolution *)local_5f8._136_8_ == (FEvolution *)0x0) {
      iVar17 = Chaos::Softs::FPBDEvolution::GetParticleRangeSize
                         ((FPBDEvolution *)local_5f8._144_8_,iVar25);
      pTVar23 = (TVector<float,3> *)(((FSolverParticles *)(uVar13 + 0x20))->_padding_ + lVar26);
      if (iVar17 < 0) {
        bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("ArrayNum >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xfe,L"");
        if (bVar14) {
          pcVar3 = (code *)swi(3);
          uVar15 = (*pcVar3)();
          return (bool)uVar15;
        }
      }
    }
    else {
      pTVar19 = (TParticlesRange<Chaos::Softs::FSolverParticles,void> *)
                Chaos::Softs::FEvolution::GetSoftBodyParticles
                          ((FEvolution *)local_5f8._136_8_,iVar25);
      if (pTVar19->Particles == (FSolverParticles *)0x0) {
        bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("Particles",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                            ,0x57,L"");
        if (bVar14) {
          pcVar3 = (code *)swi(3);
          uVar15 = (*pcVar3)();
          return (bool)uVar15;
        }
      }
      Chaos::Softs::TParticlesRange<Chaos::Softs::FSolverParticles,void>::
      GetArrayView<Chaos::TVector<float,3>_>
                (pTVar19,&local_f30,
                 (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)
                 &pTVar19->Particles->_padding_);
      pTVar23 = local_f30.DataPtr;
    }
    Chaos::Private::GetParticleArrayView<Chaos::TVector<float,3>_>
              (&local_f20,
               (TUniquePtr<Chaos::Softs::FEvolution,TDefaultDelete<Chaos::Softs::FEvolution>_> *)
               (local_5f8 + 0x88),
               (TUniquePtr<Chaos::Softs::FPBDEvolution,TDefaultDelete<Chaos::Softs::FPBDEvolution>_>
                *)(local_5f8 + 0x90),iVar25,local_480);
    pTVar11 = local_f20.DataPtr;
    Chaos::Private::GetParticleArrayView<Chaos::TVector<float,3>_>
              (&local_f10,
               (TUniquePtr<Chaos::Softs::FEvolution,TDefaultDelete<Chaos::Softs::FEvolution>_> *)
               (local_5f8 + 0x88),
               (TUniquePtr<Chaos::Softs::FPBDEvolution,TDefaultDelete<Chaos::Softs::FPBDEvolution>_>
                *)(local_5f8 + 0x90),iVar25,
               (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)(local_5f8 + 0x160));
    uVar13 = local_5f8._144_8_;
    pTVar12 = local_f10.DataPtr;
    if ((FEvolution *)local_5f8._136_8_ == (FEvolution *)0x0) {
      local_f68.ArrayNum =
           Chaos::Softs::FPBDEvolution::GetParticleRangeSize
                     ((FPBDEvolution *)local_5f8._144_8_,iVar25);
      local_f68.DataPtr =
           (FPAndInvM *)
           (*(longlong *)&(((FSolverParticles *)(uVar13 + 0x20))->MPAndInvM).field_0x8 + local_1070)
      ;
      if (local_f68.ArrayNum < 0) {
        bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("ArrayNum >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xfe,L"");
        if (bVar14) {
          pcVar3 = (code *)swi(3);
          uVar15 = (*pcVar3)();
          return (bool)uVar15;
        }
      }
      pTVar21 = &local_f68;
    }
    else {
      pFVar20 = Chaos::Softs::FEvolution::GetSoftBodyParticles
                          ((FEvolution *)local_5f8._136_8_,iVar25);
      pTVar21 = Chaos::Softs::FSolverParticlesRange::GetPAndInvM(pFVar20,&local_ce8);
    }
    if ((((pTVar24 != (TVector<float,3> *)0x0) && (pTVar23 != (TVector<float,3> *)0x0)) &&
        (pTVar11 != (TVector<float,3> *)0x0)) &&
       ((pTVar12 != (TVector<float,3> *)0x0 &&
        (pFVar1 = pTVar21->DataPtr, pFVar1 != (FPAndInvM *)0x0)))) {
      *(undefined8 *)pTVar24 = uVar4;
      *(undefined4 *)&pTVar24->field_0x8 = local_1068[1].AllocatorInstance.Data._0_4_;
      *(undefined8 *)pTVar23 = uVar5;
      *(undefined4 *)&pTVar23->field_0x8 = local_1068[1].AllocatorInstance.Data._4_4_;
      *(undefined8 *)pTVar11 = uVar6;
      *(int *)&pTVar11->field_0x8 = local_1068[1].ArrayNum;
      *(undefined8 *)pTVar12 = uVar7;
      *(int *)&pTVar12->field_0x8 = local_1068[1].ArrayMax;
      *(FScriptContainerElement **)&pFVar1->P = FVar22.Data;
      *(int *)&(pFVar1->P).field_0x8 = local_1048;
      pFVar1->InvM = 0.5;
    }
    local_1070 = local_1070 + 0x10;
    iVar25 = iVar25 + 1;
    lVar26 = lVar26 + 0xc;
  } while (iVar25 < 100);
  Chaos::FClothingSimulationSolver::ResetStartPose((FClothingSimulationSolver *)local_5f8,0,100);
  fVar10 = __real_7f7fffff;
  local_e38._16_8_ = 0;
  local_e50._16_8_ = 0;
  local_e38._0_8_ = 0;
  local_e38._8_8_ = 0;
  local_1010._0_4_ = 0x7f7fffff;
  local_e50._0_8_ = 0;
  local_e50._8_8_ = 0;
  local_1010._4_4_ = 0x7f7fffff;
  local_1010._8_4_ = 0x7f7fffff;
  local_1020._0_4_ = 0x7f7fffff;
  local_1020._4_4_ = 0x7f7fffff;
  local_1020._8_4_ = 0x7f7fffff;
  Chaos::FClothingSimulationSolver::SetReferenceVelocityScale
            ((FClothingSimulationSolver *)local_5f8,0,(TRigidTransform<double,3> *)local_d88,
             (TRigidTransform<double,3> *)local_de8,&local_e38,&local_e50,ReferenceBoneSpace,
             &local_fd0,&local_1020,&local_1010,fVar8,fVar8,fVar8,__real_7f7fffff,__real_7f7fffff,
             false);
  fVar9 = __real_3f000000;
  Chaos::FClothingSimulationSolver::Update((FClothingSimulationSolver *)local_5f8,__real_3f000000);
  bChaos_PreSimulationTransforms_ISPC_Enabled = false;
  Chaos::FClothingSimulationSolver::FClothingSimulationSolver
            ((FClothingSimulationSolver *)local_b28,(FClothingSimulationConfig *)0x0,true);
  Chaos::FClothingSimulationSolver::AddParticles((FClothingSimulationSolver *)local_b28,100,0);
  Chaos::FClothingSimulationSolver::EnableParticles((FClothingSimulationSolver *)local_b28,0,true);
  iVar25 = 0;
  local_1070 = 0;
  lVar26 = 0;
  do {
    pTVar18 = Chaos::FClothingSimulationSolver::GetParticleXsView
                        ((FClothingSimulationSolver *)local_b28,&local_cd8,iVar25);
    uVar13 = local_b28._144_8_;
    pTVar24 = pTVar18->DataPtr;
    if ((FEvolution *)local_b28._136_8_ == (FEvolution *)0x0) {
      iVar17 = Chaos::Softs::FPBDEvolution::GetParticleRangeSize
                         ((FPBDEvolution *)local_b28._144_8_,iVar25);
      pTVar23 = (TVector<float,3> *)(((FSolverParticles *)(uVar13 + 0x20))->_padding_ + lVar26);
      if (iVar17 < 0) {
        bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("ArrayNum >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xfe,L"");
        if (bVar14) {
          pcVar3 = (code *)swi(3);
          uVar15 = (*pcVar3)();
          return (bool)uVar15;
        }
      }
    }
    else {
      pTVar19 = (TParticlesRange<Chaos::Softs::FSolverParticles,void> *)
                Chaos::Softs::FEvolution::GetSoftBodyParticles
                          ((FEvolution *)local_b28._136_8_,iVar25);
      if (pTVar19->Particles == (FSolverParticles *)0x0) {
        bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("Particles",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                            ,0x57,L"");
        if (bVar14) {
          pcVar3 = (code *)swi(3);
          uVar15 = (*pcVar3)();
          return (bool)uVar15;
        }
      }
      Chaos::Softs::TParticlesRange<Chaos::Softs::FSolverParticles,void>::
      GetArrayView<Chaos::TVector<float,3>_>
                (pTVar19,&local_f00,
                 (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)
                 &pTVar19->Particles->_padding_);
      pTVar23 = local_f00.DataPtr;
    }
    Chaos::Private::GetParticleArrayView<Chaos::TVector<float,3>_>
              (&local_ef0,
               (TUniquePtr<Chaos::Softs::FEvolution,TDefaultDelete<Chaos::Softs::FEvolution>_> *)
               (local_b28 + 0x88),
               (TUniquePtr<Chaos::Softs::FPBDEvolution,TDefaultDelete<Chaos::Softs::FPBDEvolution>_>
                *)(local_b28 + 0x90),iVar25,local_9b0);
    pTVar11 = local_ef0.DataPtr;
    Chaos::Private::GetParticleArrayView<Chaos::TVector<float,3>_>
              (&local_ee0,
               (TUniquePtr<Chaos::Softs::FEvolution,TDefaultDelete<Chaos::Softs::FEvolution>_> *)
               (local_b28 + 0x88),
               (TUniquePtr<Chaos::Softs::FPBDEvolution,TDefaultDelete<Chaos::Softs::FPBDEvolution>_>
                *)(local_b28 + 0x90),iVar25,
               (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)(local_b28 + 0x160));
    uVar13 = local_b28._144_8_;
    pTVar12 = local_ee0.DataPtr;
    if ((FEvolution *)local_b28._136_8_ == (FEvolution *)0x0) {
      local_f58.ArrayNum =
           Chaos::Softs::FPBDEvolution::GetParticleRangeSize
                     ((FPBDEvolution *)local_b28._144_8_,iVar25);
      local_f58.DataPtr =
           (FPAndInvM *)
           (*(longlong *)&(((FSolverParticles *)(uVar13 + 0x20))->MPAndInvM).field_0x8 + local_1070)
      ;
      if (local_f58.ArrayNum < 0) {
        bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("ArrayNum >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xfe,L"");
        if (bVar14) {
          pcVar3 = (code *)swi(3);
          uVar15 = (*pcVar3)();
          return (bool)uVar15;
        }
      }
      pTVar21 = &local_f58;
    }
    else {
      pFVar20 = Chaos::Softs::FEvolution::GetSoftBodyParticles
                          ((FEvolution *)local_b28._136_8_,iVar25);
      pTVar21 = Chaos::Softs::FSolverParticlesRange::GetPAndInvM(pFVar20,&local_cc8);
    }
    if (((pTVar24 != (TVector<float,3> *)0x0) && (pTVar23 != (TVector<float,3> *)0x0)) &&
       ((pTVar11 != (TVector<float,3> *)0x0 &&
        ((pTVar12 != (TVector<float,3> *)0x0 &&
         (pFVar1 = pTVar21->DataPtr, pFVar1 != (FPAndInvM *)0x0)))))) {
      *(undefined8 *)pTVar24 = uVar4;
      *(undefined4 *)&pTVar24->field_0x8 = local_1068[1].AllocatorInstance.Data._0_4_;
      *(undefined8 *)pTVar23 = uVar5;
      *(undefined4 *)&pTVar23->field_0x8 = local_1068[1].AllocatorInstance.Data._4_4_;
      *(undefined8 *)pTVar11 = uVar6;
      *(int *)&pTVar11->field_0x8 = local_1068[1].ArrayNum;
      *(undefined8 *)pTVar12 = uVar7;
      *(int *)&pTVar12->field_0x8 = local_1068[1].ArrayMax;
      *(FScriptContainerElement **)&pFVar1->P = FVar22.Data;
      *(int *)&(pFVar1->P).field_0x8 = local_1048;
      pFVar1->InvM = 0.5;
    }
    local_1070 = local_1070 + 0x10;
    iVar25 = iVar25 + 1;
    lVar26 = lVar26 + 0xc;
  } while (iVar25 < 100);
  Chaos::FClothingSimulationSolver::ResetStartPose((FClothingSimulationSolver *)local_b28,0,100);
  local_e08._16_8_ = 0;
  local_e20._16_8_ = 0;
  local_e08._0_8_ = 0;
  local_e08._8_8_ = 0;
  local_1030._0_4_ = 0x7f7fffff;
  local_e20._0_8_ = 0;
  local_e20._8_8_ = 0;
  local_1030._4_4_ = 0x7f7fffff;
  local_1030._8_4_ = 0x7f7fffff;
  local_1040._0_4_ = 0x7f7fffff;
  local_1040._4_4_ = 0x7f7fffff;
  local_1040._8_4_ = 0x7f7fffff;
  Chaos::FClothingSimulationSolver::SetReferenceVelocityScale
            ((FClothingSimulationSolver *)local_b28,0,(TRigidTransform<double,3> *)local_d88,
             (TRigidTransform<double,3> *)local_de8,&local_e08,&local_e20,ReferenceBoneSpace,
             &local_fd0,&local_1040,&local_1030,fVar8,fVar8,fVar8,fVar10,fVar10,false);
  Chaos::FClothingSimulationSolver::Update((FClothingSimulationSolver *)local_b28,fVar9);
  this_00 = local_fc0;
  uVar36 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  fVar8 = __real_38d1b717;
  uVar28 = 0;
  bChaos_CalculateBounds_ISPC_Enabled = bVar16;
  uVar27 = uVar28;
  uVar29 = uVar28;
  do {
    iVar25 = (int)uVar28;
    pTVar18 = Chaos::FClothingSimulationSolver::GetParticleXsView
                        ((FClothingSimulationSolver *)local_5f8,&local_d28,iVar25);
    pTVar24 = pTVar18->DataPtr;
    pTVar18 = Chaos::FClothingSimulationSolver::GetParticleXsView
                        ((FClothingSimulationSolver *)local_b28,&local_cb8,iVar25);
    pTVar23 = pTVar18->DataPtr;
    FStringFormatArg::FStringFormatArg(&local_ca8,iVar25);
    ::FString::PrintfImpl(&local_ed0,L"X=%3.3f Y=%3.3f Z=%3.3f");
    FStringFormatArg::FStringFormatArg(&local_c88,&local_ed0);
    ::FString::PrintfImpl(&local_ec0,L"X=%3.3f Y=%3.3f Z=%3.3f");
    FStringFormatArg::FStringFormatArg(&local_c68,&local_ec0);
    local_1000.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1000.ArrayNum = 3;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,3,0,&local_1000.AllocatorInstance,3,&local_1000.ArrayMax);
    ConstructItems<FStringFormatArg,FStringFormatArg,int>
              (local_1000.AllocatorInstance.Data,&local_ca8,3);
    ::FString::FormatImpl(&local_fb8,L"X Solver {0}: ISPC {1}, CPP {2}",&local_1000);
    DestructItems<FStringFormatArg,int>
              ((FStringFormatArg *)local_1000.AllocatorInstance.Data,local_1000.ArrayNum);
    if ((FStringFormatArg *)local_1000.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
      FMemory::Free(local_1000.AllocatorInstance.Data);
    }
    if (local_c68.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c68.StringValue.Data.AllocatorInstance.Data);
    }
    if (local_c88.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c88.StringValue.Data.AllocatorInstance.Data);
    }
    if (local_ca8.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_ca8.StringValue.Data.AllocatorInstance.Data);
    }
    if (((fVar8 < (float)((uint)(*(float *)pTVar24 - *(float *)pTVar23) & uVar36)) ||
        (fVar8 < (float)((uint)(*(float *)&pTVar24->field_0x4 - *(float *)&pTVar23->field_0x4) &
                        uVar36))) ||
       (fVar8 < (float)((uint)(*(float *)&pTVar24->field_0x8 - *(float *)&pTVar23->field_0x8) &
                       uVar36))) {
      bVar16 = false;
    }
    else {
      bVar16 = true;
    }
    FVar22.Data = (FScriptContainerElement *)L"";
    if (local_fb8.Data.ArrayNum != 0) {
      FVar22.Data = local_fb8.Data.AllocatorInstance.Data;
    }
    FAutomationTestBase::TestTrue(this_00,(wchar_t *)FVar22.Data,bVar16);
    if (local_fb8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_fb8.Data.AllocatorInstance.Data);
    }
    uVar4 = local_5f8._144_8_;
    if ((FEvolution *)local_5f8._136_8_ == (FEvolution *)0x0) {
      iVar17 = Chaos::Softs::FPBDEvolution::GetParticleRangeSize
                         ((FPBDEvolution *)local_5f8._144_8_,iVar25);
      pTVar24 = (TVector<float,3> *)(((FSolverParticles *)(uVar4 + 0x20))->_padding_ + uVar27);
      if (iVar17 < 0) {
        bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("ArrayNum >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xfe,L"");
        if (bVar16) {
          pcVar3 = (code *)swi(3);
          uVar15 = (*pcVar3)();
          return (bool)uVar15;
        }
      }
    }
    else {
      pTVar19 = (TParticlesRange<Chaos::Softs::FSolverParticles,void> *)
                Chaos::Softs::FEvolution::GetSoftBodyParticles
                          ((FEvolution *)local_5f8._136_8_,iVar25);
      if (pTVar19->Particles == (FSolverParticles *)0x0) {
        bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("Particles",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                            ,0x57,L"");
        if (bVar16) {
          pcVar3 = (code *)swi(3);
          uVar15 = (*pcVar3)();
          return (bool)uVar15;
        }
      }
      Chaos::Softs::TParticlesRange<Chaos::Softs::FSolverParticles,void>::
      GetArrayView<Chaos::TVector<float,3>_>
                (pTVar19,&local_eb0,
                 (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)
                 &pTVar19->Particles->_padding_);
      pTVar24 = local_eb0.DataPtr;
    }
    uVar4 = local_b28._144_8_;
    if ((FEvolution *)local_b28._136_8_ == (FEvolution *)0x0) {
      iVar17 = Chaos::Softs::FPBDEvolution::GetParticleRangeSize
                         ((FPBDEvolution *)local_b28._144_8_,iVar25);
      pTVar23 = (TVector<float,3> *)(((FSolverParticles *)(uVar4 + 0x20))->_padding_ + uVar27);
      if (iVar17 < 0) {
        bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("ArrayNum >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xfe,L"");
        if (bVar16) {
          pcVar3 = (code *)swi(3);
          uVar15 = (*pcVar3)();
          return (bool)uVar15;
        }
      }
    }
    else {
      pTVar19 = (TParticlesRange<Chaos::Softs::FSolverParticles,void> *)
                Chaos::Softs::FEvolution::GetSoftBodyParticles
                          ((FEvolution *)local_b28._136_8_,iVar25);
      if (pTVar19->Particles == (FSolverParticles *)0x0) {
        bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("Particles",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                            ,0x57,L"");
        if (bVar16) {
          pcVar3 = (code *)swi(3);
          uVar15 = (*pcVar3)();
          return (bool)uVar15;
        }
      }
      Chaos::Softs::TParticlesRange<Chaos::Softs::FSolverParticles,void>::
      GetArrayView<Chaos::TVector<float,3>_>
                (pTVar19,&local_ea0,
                 (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)
                 &pTVar19->Particles->_padding_);
      pTVar23 = local_ea0.DataPtr;
    }
    FStringFormatArg::FStringFormatArg(&local_c48,iVar25);
    ::FString::PrintfImpl(&local_e90,L"X=%3.3f Y=%3.3f Z=%3.3f");
    FStringFormatArg::FStringFormatArg(&local_c28,&local_e90);
    ::FString::PrintfImpl(&local_e80,L"X=%3.3f Y=%3.3f Z=%3.3f");
    FStringFormatArg::FStringFormatArg(&local_c08,&local_e80);
    local_ff0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_ff0.ArrayNum = 3;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,3,0,&local_ff0.AllocatorInstance,3,&local_ff0.ArrayMax);
    ConstructItems<FStringFormatArg,FStringFormatArg,int>
              (local_ff0.AllocatorInstance.Data,&local_c48,3);
    ::FString::FormatImpl(&local_fa8,L"V Solver {0}: ISPC {1}, CPP {2}",&local_ff0);
    DestructItems<FStringFormatArg,int>
              ((FStringFormatArg *)local_ff0.AllocatorInstance.Data,local_ff0.ArrayNum);
    if ((FStringFormatArg *)local_ff0.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
      FMemory::Free(local_ff0.AllocatorInstance.Data);
    }
    if (local_c08.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c08.StringValue.Data.AllocatorInstance.Data);
    }
    if (local_c28.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c28.StringValue.Data.AllocatorInstance.Data);
    }
    if (local_c48.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c48.StringValue.Data.AllocatorInstance.Data);
    }
    if (((fVar8 < (float)((uint)(*(float *)pTVar24 - *(float *)pTVar23) & uVar36)) ||
        (fVar8 < (float)((uint)(*(float *)&pTVar24->field_0x4 - *(float *)&pTVar23->field_0x4) &
                        uVar36))) ||
       (fVar8 < (float)((uint)(*(float *)&pTVar24->field_0x8 - *(float *)&pTVar23->field_0x8) &
                       uVar36))) {
      bVar16 = false;
    }
    else {
      bVar16 = true;
    }
    FVar22.Data = (FScriptContainerElement *)L"";
    if (local_fa8.Data.ArrayNum != 0) {
      FVar22.Data = local_fa8.Data.AllocatorInstance.Data;
    }
    FAutomationTestBase::TestTrue(this_00,(wchar_t *)FVar22.Data,bVar16);
    if (local_fa8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_fa8.Data.AllocatorInstance.Data);
    }
    uVar4 = local_5f8._144_8_;
    if ((FEvolution *)local_5f8._136_8_ == (FEvolution *)0x0) {
      local_f48.ArrayNum =
           Chaos::Softs::FPBDEvolution::GetParticleRangeSize
                     ((FPBDEvolution *)local_5f8._144_8_,iVar25);
      local_f48.DataPtr =
           (FPAndInvM *)
           (*(longlong *)&(((FSolverParticles *)(uVar4 + 0x20))->MPAndInvM).field_0x8 + uVar29);
      if (local_f48.ArrayNum < 0) {
        bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("ArrayNum >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xfe,L"");
        if (bVar16) {
          pcVar3 = (code *)swi(3);
          uVar15 = (*pcVar3)();
          return (bool)uVar15;
        }
      }
      pTVar21 = &local_f48;
    }
    else {
      pFVar20 = Chaos::Softs::FEvolution::GetSoftBodyParticles
                          ((FEvolution *)local_5f8._136_8_,iVar25);
      pTVar21 = Chaos::Softs::FSolverParticlesRange::GetPAndInvM(pFVar20,&local_d18);
    }
    uVar4 = local_b28._144_8_;
    pFVar1 = pTVar21->DataPtr;
    if ((FEvolution *)local_b28._136_8_ == (FEvolution *)0x0) {
      local_f78.ArrayNum =
           Chaos::Softs::FPBDEvolution::GetParticleRangeSize
                     ((FPBDEvolution *)local_b28._144_8_,iVar25);
      local_f78.DataPtr =
           (FPAndInvM *)
           (*(longlong *)&(((FSolverParticles *)(uVar4 + 0x20))->MPAndInvM).field_0x8 + uVar29);
      if (local_f78.ArrayNum < 0) {
        bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("ArrayNum >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xfe,L"");
        if (bVar16) {
          pcVar3 = (code *)swi(3);
          uVar15 = (*pcVar3)();
          return (bool)uVar15;
        }
      }
      pTVar21 = &local_f78;
    }
    else {
      pFVar20 = Chaos::Softs::FEvolution::GetSoftBodyParticles
                          ((FEvolution *)local_b28._136_8_,iVar25);
      pTVar21 = Chaos::Softs::FSolverParticlesRange::GetPAndInvM(pFVar20,&local_d08);
    }
    pFVar2 = pTVar21->DataPtr;
    FStringFormatArg::FStringFormatArg(&local_be8,iVar25);
    ::FString::PrintfImpl(&local_e70,L"X=%3.3f Y=%3.3f Z=%3.3f");
    FStringFormatArg::FStringFormatArg(&local_bc8,&local_e70);
    ::FString::PrintfImpl(&local_e60,L"X=%3.3f Y=%3.3f Z=%3.3f");
    FStringFormatArg::FStringFormatArg(&local_ba8,&local_e60);
    local_fe0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_fe0.ArrayNum = 3;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,3,0,&local_fe0.AllocatorInstance,3,&local_fe0.ArrayMax);
    ConstructItems<FStringFormatArg,FStringFormatArg,int>
              (local_fe0.AllocatorInstance.Data,&local_be8,3);
    ::FString::FormatImpl(&local_f88,L"P Vec {0}: ISPC {1}, CPP {2}",&local_fe0);
    DestructItems<FStringFormatArg,int>
              ((FStringFormatArg *)local_fe0.AllocatorInstance.Data,local_fe0.ArrayNum);
    if ((FStringFormatArg *)local_fe0.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
      FMemory::Free(local_fe0.AllocatorInstance.Data);
    }
    if (local_ba8.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_ba8.StringValue.Data.AllocatorInstance.Data);
    }
    if (local_bc8.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_bc8.StringValue.Data.AllocatorInstance.Data);
    }
    if (local_be8.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_be8.StringValue.Data.AllocatorInstance.Data);
    }
    FStringFormatArg::FStringFormatArg(&local_b88,iVar25);
    FStringFormatArg::FStringFormatArg(&local_b68,pFVar1->InvM);
    FStringFormatArg::FStringFormatArg(&local_b48,pFVar2->InvM);
    local_1068[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1068[0].ArrayNum = 3;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,3,0,&local_1068[0].AllocatorInstance,3,&local_1068[0].ArrayMax);
    ConstructItems<FStringFormatArg,FStringFormatArg,int>
              (local_1068[0].AllocatorInstance.Data,&local_b88,3);
    ::FString::FormatImpl(&local_f98,L"InvM {0}: ISPC {1}, CPP {2}",local_1068);
    DestructItems<FStringFormatArg,int>
              ((FStringFormatArg *)local_1068[0].AllocatorInstance.Data,local_1068[0].ArrayNum);
    if ((FStringFormatArg *)local_1068[0].AllocatorInstance.Data != (FStringFormatArg *)0x0) {
      FMemory::Free(local_1068[0].AllocatorInstance.Data);
    }
    if (local_b48.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b48.StringValue.Data.AllocatorInstance.Data);
    }
    if (local_b68.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b68.StringValue.Data.AllocatorInstance.Data);
    }
    if (local_b88.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b88.StringValue.Data.AllocatorInstance.Data);
    }
    if (((fVar8 < (float)((uint)(*(float *)&pFVar1->P - *(float *)&pFVar2->P) & uVar36)) ||
        (fVar8 < (float)((uint)(*(float *)&(pFVar1->P).field_0x4 - *(float *)&(pFVar2->P).field_0x4)
                        & uVar36))) ||
       (fVar8 < (float)((uint)(*(float *)&(pFVar1->P).field_0x8 - *(float *)&(pFVar2->P).field_0x8)
                       & uVar36))) {
      bVar16 = false;
    }
    else {
      bVar16 = true;
    }
    FVar22.Data = (FScriptContainerElement *)L"";
    if (local_f88.Data.ArrayNum != 0) {
      FVar22.Data = local_f88.Data.AllocatorInstance.Data;
    }
    FAutomationTestBase::TestTrue(this_00,(wchar_t *)FVar22.Data,bVar16);
    FVar22.Data = (FScriptContainerElement *)L"";
    if (local_f98.Data.ArrayNum != 0) {
      FVar22.Data = local_f98.Data.AllocatorInstance.Data;
    }
    FAutomationTestBase::TestEqual(this_00,(wchar_t *)FVar22.Data,pFVar1->InvM,pFVar2->InvM,fVar8);
    if (local_f98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f98.Data.AllocatorInstance.Data);
    }
    if (local_f88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f88.Data.AllocatorInstance.Data);
    }
    uVar28 = (ulonglong)(iVar25 + 1U);
    uVar27 = uVar27 + 0xc;
    uVar29 = uVar29 + 0x10;
  } while ((int)(iVar25 + 1U) < 100);
  Chaos::FClothingSimulationSolver::~FClothingSimulationSolver
            ((FClothingSimulationSolver *)local_b28);
  Chaos::FClothingSimulationSolver::~FClothingSimulationSolver
            ((FClothingSimulationSolver *)local_5f8);
  return true;
}

// GetBeautifiedTestName @ 14db79fd0

FString * __thiscall
FIspcTestChaosClothingSimulationSolverPreSimulation::GetBeautifiedTestName
          (FIspcTestChaosClothingSimulationSolverPreSimulation *this,FString *__return_storage_ptr__
          )

{
  ::FString::FString(__return_storage_ptr__,
                     "Ispc.Physics.ChaosClothingSimulationSolver.PreSimulation");
  return __return_storage_ptr__;
}

