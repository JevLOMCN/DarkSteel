// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosCloth
// Functions: 8

// GetTestFlags @ 14db78480

EAutomationTestFlags __thiscall
FIspcTestChaosClothingSimulationSolverAABB::GetTestFlags
          (FIspcTestChaosClothingSimulationSolverAABB *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 14db78490

bool __thiscall
FIspcTestChaosClothingSimulationSolverAABB::IsStressTest
          (FIspcTestChaosClothingSimulationSolverAABB *this)

{
  return false;
}

// GetRequiredDeviceNum @ 14db784a0

uint __thiscall
FIspcTestChaosClothingSimulationSolverAABB::GetRequiredDeviceNum
          (FIspcTestChaosClothingSimulationSolverAABB *this)

{
  return 1;
}

// GetTestSourceFileName @ 14db784b0

FString * __thiscall
FIspcTestChaosClothingSimulationSolverAABB::GetTestSourceFileName
          (FIspcTestChaosClothingSimulationSolverAABB *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\IspcTestChaosClothingSimulationSolver.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 14db784e0

int __thiscall
FIspcTestChaosClothingSimulationSolverAABB::GetTestSourceFileLine
          (FIspcTestChaosClothingSimulationSolverAABB *this)

{
  return 9;
}

// GetTests @ 14db784f0

/* WARNING: Removing unreachable block (ram,0x00014db785dd) */
/* WARNING: Removing unreachable block (ram,0x00014db786a8) */

void __thiscall
FIspcTestChaosClothingSimulationSolverAABB::GetTests
          (FIspcTestChaosClothingSimulationSolverAABB *this,
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
  
  ::FString::FString(&local_18,"Ispc.Physics.ChaosClothingSimulationSolver.AABB");
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

// RunTest @ 14db786d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FIspcTestChaosClothingSimulationSolverAABB::RunTest
          (FIspcTestChaosClothingSimulationSolverAABB *this,FString *param_1)

{
  TVector<float,3> *pTVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  TArrayView<Chaos::TVector<float,3>,int> *pTVar12;
  TBoxSphereBounds<double,double> *pTVar13;
  uint uVar14;
  uint uVar15;
  bool bVar16;
  bool bVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  float fVar21;
  uint uVar22;
  uint uVar23;
  undefined1 auStackY_bc8 [32];
  TArrayView<Chaos::TVector<float,3>,int> local_b98;
  TArrayView<Chaos::TVector<float,3>,int> local_b88;
  TBoxSphereBounds<double,double> local_b78;
  TBoxSphereBounds<double,double> local_b40;
  FClothingSimulationSolver local_b08;
  FClothingSimulationSolver local_5d8;
  ulonglong local_a8;
  
  bVar17 = bChaos_CalculateBounds_ISPC_Enabled;
  local_a8 = __security_cookie.value ^ (ulonglong)auStackY_bc8;
  bChaos_CalculateBounds_ISPC_Enabled = true;
  Chaos::FClothingSimulationSolver::FClothingSimulationSolver
            (&local_b08,(FClothingSimulationConfig *)0x0,true);
  Chaos::FClothingSimulationSolver::AddParticles(&local_b08,100,0);
  Chaos::FClothingSimulationSolver::EnableParticles(&local_b08,0,true);
  dVar5 = __real_4059000000000000;
  uVar15 = 0;
  uVar14 = 0;
  do {
    pTVar12 = Chaos::FClothingSimulationSolver::GetParticleXsView(&local_b08,&local_b98,uVar14);
    pTVar1 = pTVar12->DataPtr;
    if (pTVar1 != (TVector<float,3> *)0x0) {
      uVar22 = uVar14;
      if ((uVar14 & 1) == 0) {
        uVar22 = -uVar14;
      }
      fVar21 = (float)((double)(int)uVar22 * dVar5);
      *(float *)pTVar1 = fVar21;
      *(float *)&pTVar1->field_0x4 = fVar21;
      *(float *)&pTVar1->field_0x8 = fVar21;
    }
    uVar14 = uVar14 + 1;
  } while ((int)uVar14 < 100);
  pTVar13 = Chaos::FClothingSimulationSolver::CalculateBounds(&local_b08,&local_b40);
  local_b40.SphereRadius = pTVar13->SphereRadius;
  dVar18 = (pTVar13->Origin).field0_0x0._s_0.X;
  dVar3 = (pTVar13->Origin).field0_0x0._s_0.Y;
  dVar19 = (pTVar13->Origin).field0_0x0._s_0.Z;
  dVar4 = (pTVar13->BoxExtent).field0_0x0._s_0.X;
  dVar20 = (pTVar13->BoxExtent).field0_0x0._s_0.Y;
  dVar2 = (pTVar13->BoxExtent).field0_0x0._s_0.Z;
  Chaos::FClothingSimulationSolver::~FClothingSimulationSolver(&local_b08);
  bChaos_CalculateBounds_ISPC_Enabled = false;
  Chaos::FClothingSimulationSolver::FClothingSimulationSolver
            (&local_5d8,(FClothingSimulationConfig *)0x0,true);
  Chaos::FClothingSimulationSolver::AddParticles(&local_5d8,100,0);
  Chaos::FClothingSimulationSolver::EnableParticles(&local_5d8,0,true);
  do {
    pTVar12 = Chaos::FClothingSimulationSolver::GetParticleXsView(&local_5d8,&local_b88,uVar15);
    pTVar1 = pTVar12->DataPtr;
    if (pTVar1 != (TVector<float,3> *)0x0) {
      uVar14 = uVar15;
      if ((uVar15 & 1) == 0) {
        uVar14 = -uVar15;
      }
      fVar21 = (float)((double)(int)uVar14 * dVar5);
      *(float *)pTVar1 = fVar21;
      *(float *)&pTVar1->field_0x4 = fVar21;
      *(float *)&pTVar1->field_0x8 = fVar21;
    }
    uVar15 = uVar15 + 1;
  } while ((int)uVar15 < 100);
  pTVar13 = Chaos::FClothingSimulationSolver::CalculateBounds(&local_5d8,&local_b78);
  local_b78.SphereRadius = pTVar13->SphereRadius;
  dVar5 = (pTVar13->Origin).field0_0x0._s_0.X;
  dVar6 = (pTVar13->Origin).field0_0x0._s_0.Y;
  dVar7 = (pTVar13->Origin).field0_0x0._s_0.Z;
  dVar8 = (pTVar13->BoxExtent).field0_0x0._s_0.X;
  dVar9 = (pTVar13->BoxExtent).field0_0x0._s_0.Y;
  dVar10 = (pTVar13->BoxExtent).field0_0x0._s_0.Z;
  Chaos::FClothingSimulationSolver::~FClothingSimulationSolver(&local_5d8);
  dVar11 = __real_3f1a36e2e0000000;
  uVar15 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar14 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  dVar18 = dVar18 - dVar5;
  if (((__real_3f1a36e2e0000000 <
        (double)CONCAT44((uint)((ulonglong)dVar18 >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         SUB84(dVar18,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) ||
      (dVar3 = dVar3 - dVar6, uVar22 = SUB84(dVar3,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff
      , uVar23 = (uint)((ulonglong)dVar3 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
      __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar23,uVar22) &&
      (double)CONCAT44(uVar23,uVar22) != __real_3f1a36e2e0000000)) ||
     (dVar19 = dVar19 - dVar7,
     __real_3f1a36e2e0000000 <
     (double)CONCAT44((uint)((ulonglong)dVar19 >> 0x20) &
                      __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                      SUB84(dVar19,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff))) {
    bVar16 = false;
  }
  else {
    bVar16 = true;
  }
  bChaos_CalculateBounds_ISPC_Enabled = bVar17;
  FAutomationTestBase::TestTrue((FAutomationTestBase *)this,L"Origin",bVar16);
  dVar4 = dVar4 - dVar8;
  uVar22 = SUB84(dVar4,0) & uVar14;
  uVar23 = (uint)((ulonglong)dVar4 >> 0x20) & uVar15;
  if (((dVar11 <= (double)CONCAT44(uVar23,uVar22) && (double)CONCAT44(uVar23,uVar22) != dVar11) ||
      (dVar20 = dVar20 - dVar9,
      dVar11 < (double)CONCAT44((uint)((ulonglong)dVar20 >> 0x20) & uVar15,SUB84(dVar20,0) & uVar14)
      )) || (dVar2 = dVar2 - dVar10, uVar14 = SUB84(dVar2,0) & uVar14,
            uVar15 = (uint)((ulonglong)dVar2 >> 0x20) & uVar15,
            dVar11 <= (double)CONCAT44(uVar15,uVar14) && (double)CONCAT44(uVar15,uVar14) != dVar11))
  {
    bVar17 = false;
  }
  else {
    bVar17 = true;
  }
  FAutomationTestBase::TestTrue((FAutomationTestBase *)this,L"Extent",bVar17);
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"Radius",local_b40.SphereRadius,local_b78.SphereRadius,
             dVar11);
  return true;
}

// GetBeautifiedTestName @ 14db78a30

FString * __thiscall
FIspcTestChaosClothingSimulationSolverAABB::GetBeautifiedTestName
          (FIspcTestChaosClothingSimulationSolverAABB *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"Ispc.Physics.ChaosClothingSimulationSolver.AABB");
  return __return_storage_ptr__;
}

