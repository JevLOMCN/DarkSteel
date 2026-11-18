// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCore
// Functions: 8

// GetTestFlags @ 1435ce0b0

EAutomationTestFlags __thiscall
FAutoRTFMDynamicMesh3Test::GetTestFlags(FAutoRTFMDynamicMesh3Test *this)

{
  return EngineFilter|CommandletContext|ServerContext|ClientContext;
}

// IsStressTest @ 1435ce0c0

bool __thiscall FAutoRTFMDynamicMesh3Test::IsStressTest(FAutoRTFMDynamicMesh3Test *this)

{
  return false;
}

// GetRequiredDeviceNum @ 1435ce0d0

uint __thiscall FAutoRTFMDynamicMesh3Test::GetRequiredDeviceNum(FAutoRTFMDynamicMesh3Test *this)

{
  return 1;
}

// GetTestSourceFileName @ 1435ce0e0

FString * __thiscall
FAutoRTFMDynamicMesh3Test::GetTestSourceFileName
          (FAutoRTFMDynamicMesh3Test *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\Tests\\AutoRTFMDynamicMesh3Tests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 1435ce110

int __thiscall FAutoRTFMDynamicMesh3Test::GetTestSourceFileLine(FAutoRTFMDynamicMesh3Test *this)

{
  return 0xd;
}

// GetTests @ 1435ce120

/* WARNING: Removing unreachable block (ram,0x0001435ce20d) */
/* WARNING: Removing unreachable block (ram,0x0001435ce2d8) */

void __thiscall
FAutoRTFMDynamicMesh3Test::GetTests
          (FAutoRTFMDynamicMesh3Test *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"AutoRTFM + FDynamicMesh3");
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

// RunTest @ 1435ce300

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall FAutoRTFMDynamicMesh3Test::RunTest(FAutoRTFMDynamicMesh3Test *this,FString *param_1)

{
  byte bVar1;
  atomic<unsigned_char> aVar2;
  undefined8 _Src;
  bool bVar3;
  FMeshShapeGenerator *pFVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  undefined1 local_res18 [8];
  uint local_res20 [2];
  uint local_3b8 [2];
  undefined1 local_3b0 [16];
  uint *local_3a0;
  FAutomationEvent local_398;
  FDynamicMesh3 local_358;
  FGridBoxMeshGenerator local_128;
  
  bVar3 = AutoRTFM::ForTheRuntime::IsAutoRTFMRuntimeEnabledInternal();
  if (bVar3) {
    local_128._padding_ = 0;
    local_128.Box.Frame.Origin.field0_0x0._s_0.X = 0.0;
    local_128.Box.Frame.Origin.field0_0x0._s_0.Y = 0.0;
    local_128.Box.Frame.Origin.field0_0x0._s_0.Z = 0.0;
    local_128._padding_ = (longlong)&___7FGridBoxMeshGenerator_Geometry_UE__6B_;
    local_128.Box.Frame.Rotation.field0_0x0._s_0.Y = 0.0;
    local_128.Box.Frame.Rotation.field0_0x0._s_0.Z = 0.0;
    local_128.Box.Extents.field0_0x0._s_0.X = __real_3ff0000000000000;
    local_128.Box.Frame.Rotation.field0_0x0._s_0.W = 1.0;
    local_128.Box.Extents.field0_0x0._s_0.Y = ___xmm_3ff00000000000003ff0000000000000;
    local_128.Box.Extents.field0_0x0._s_0.Z = _UNK_150689688;
    local_128._padding_ = 0;
    local_128._padding_ = 0;
    local_128._padding_ = 0;
    local_128._padding_ = 0;
    local_128._padding_ = 0;
    local_128._padding_ = 0;
    local_128._padding_ = 0;
    local_128._padding_ = 0;
    local_128._padding_ = 0;
    local_128._padding_ = 0;
    local_128._padding_ = 0;
    local_128._padding_ = 0;
    local_128._padding_ = 0;
    local_128._padding_ = 0;
    local_128._padding_ = 0;
    local_128._padding_ = 0;
    local_128._padding_ = 0;
    local_128._padding_._0_1_ = 0;
    local_128.bScaleUVByAspectRatio = true;
    local_128.bPolygroupPerQuad = false;
    local_128.Box.Frame.Rotation.field0_0x0._s_0.X = 0.0;
    local_128.EdgeVertices.field0_0x0._s_0.A = 3;
    local_128.EdgeVertices.field0_0x0._s_0.B = 3;
    local_128.EdgeVertices.field0_0x0._s_0.C = 3;
    pFVar4 = UE::Geometry::FGridBoxMeshGenerator::Generate(&local_128);
    UE::Geometry::FDynamicMesh3::FDynamicMesh3(&local_358,pFVar4);
    local_358.ChangeStampShape.bIsEnabled = true;
    local_358.ChangeStampTopology.bIsEnabled = true;
    LOCK();
    bVar3 = local_358.ChangeStampShape.Mutex.State == (atomic<unsigned_char>)0x0;
    if (bVar3) {
      local_358.ChangeStampShape.Mutex.State = (atomic<unsigned_char>)0x1;
    }
    UNLOCK();
    if (!bVar3) {
      UE::FMutex::LockSlow(&local_358.ChangeStampShape.Mutex);
    }
    uVar5 = local_358.ChangeStampShape.Value;
    LOCK();
    aVar2 = local_358.ChangeStampShape.Mutex.State - 1;
    UNLOCK();
    bVar1 = (byte)local_358.ChangeStampShape.Mutex.State & 2;
    local_358.ChangeStampShape.Mutex.State = aVar2;
    if (bVar1 != 0) {
      UE::FMutex::WakeWaitingThread(&local_358.ChangeStampShape.Mutex);
    }
    local_res20[0] = uVar5;
    if (local_358.ChangeStampTopology.bIsEnabled == false) {
      `UE::Geometry::FDynamicMesh3::GetTopologyChangeStamp'::__l2::<lambda_1>::operator()
                (local_res18);
    }
    uVar5 = 1;
    uVar6 = uVar5;
    if (local_358.ChangeStampTopology.bIsEnabled != false) {
      LOCK();
      bVar3 = local_358.ChangeStampTopology.Mutex.State == (atomic<unsigned_char>)0x0;
      if (bVar3) {
        local_358.ChangeStampTopology.Mutex.State = (atomic<unsigned_char>)0x1;
      }
      UNLOCK();
      if (!bVar3) {
        UE::FMutex::LockSlow(&local_358.ChangeStampTopology.Mutex);
      }
      uVar6 = local_358.ChangeStampTopology.Value;
      LOCK();
      aVar2 = local_358.ChangeStampTopology.Mutex.State - 1;
      UNLOCK();
      bVar1 = (byte)local_358.ChangeStampTopology.Mutex.State & 2;
      local_358.ChangeStampTopology.Mutex.State = aVar2;
      if (bVar1 != 0) {
        UE::FMutex::WakeWaitingThread(&local_358.ChangeStampTopology.Mutex);
      }
    }
    local_3b0._0_8_ = &local_358;
    local_3b0._8_8_ = local_res20;
    local_3a0 = local_3b8;
    local_3b8[0] = uVar6;
    AutoRTFM::AutoRTFMFunctorInvoker<_FAutoRTFMDynamicMesh3Test::RunTest_::__l2::<lambda_1>_>
              (local_3b0);
    if (local_358.ChangeStampShape.bIsEnabled == false) {
      `UE::Geometry::FDynamicMesh3::GetShapeChangeStamp'::__l2::<lambda_1>::operator()(local_res18);
    }
    uVar6 = uVar5;
    if (local_358.ChangeStampShape.bIsEnabled != false) {
      LOCK();
      bVar3 = local_358.ChangeStampShape.Mutex.State == (atomic<unsigned_char>)0x0;
      if (bVar3) {
        local_358.ChangeStampShape.Mutex.State = (atomic<unsigned_char>)0x1;
      }
      UNLOCK();
      if (!bVar3) {
        UE::FMutex::LockSlow(&local_358.ChangeStampShape.Mutex);
      }
      uVar6 = local_358.ChangeStampShape.Value;
      LOCK();
      aVar2 = local_358.ChangeStampShape.Mutex.State - 1;
      UNLOCK();
      bVar1 = (byte)local_358.ChangeStampShape.Mutex.State & 2;
      local_358.ChangeStampShape.Mutex.State = aVar2;
      if (bVar1 != 0) {
        UE::FMutex::WakeWaitingThread(&local_358.ChangeStampShape.Mutex);
      }
    }
    bVar3 = FAutomationTestBase::TestTrue
                      ((FAutomationTestBase *)this,
                       L"Mesh.GetShapeChangeStamp() == StartingShapeChangeStamp",
                       uVar6 == local_res20[0]);
    if (local_358.ChangeStampTopology.bIsEnabled == false) {
      `UE::Geometry::FDynamicMesh3::GetTopologyChangeStamp'::__l2::<lambda_1>::operator()
                (local_res18);
    }
    uVar6 = uVar5;
    if (local_358.ChangeStampTopology.bIsEnabled != false) {
      LOCK();
      bVar7 = local_358.ChangeStampTopology.Mutex.State == (atomic<unsigned_char>)0x0;
      if (bVar7) {
        local_358.ChangeStampTopology.Mutex.State = (atomic<unsigned_char>)0x1;
      }
      UNLOCK();
      if (!bVar7) {
        UE::FMutex::LockSlow(&local_358.ChangeStampTopology.Mutex);
      }
      uVar6 = local_358.ChangeStampTopology.Value;
      LOCK();
      aVar2 = local_358.ChangeStampTopology.Mutex.State - 1;
      UNLOCK();
      bVar1 = (byte)local_358.ChangeStampTopology.Mutex.State & 2;
      local_358.ChangeStampTopology.Mutex.State = aVar2;
      if (bVar1 != 0) {
        UE::FMutex::WakeWaitingThread(&local_358.ChangeStampTopology.Mutex);
      }
    }
    bVar7 = FAutomationTestBase::TestTrue
                      ((FAutomationTestBase *)this,
                       L"Mesh.GetTopologyChangeStamp() == StartingTopologyChangeStamp",
                       uVar6 == local_3b8[0]);
    local_3b0._0_8_ = &local_358;
    local_3b0._8_8_ = local_res20;
    local_3a0 = local_3b8;
    AutoRTFM::AutoRTFMFunctorInvoker<_FAutoRTFMDynamicMesh3Test::RunTest_::__l2::<lambda_2>_>
              (local_3b0);
    if (local_358.ChangeStampShape.bIsEnabled == false) {
      `UE::Geometry::FDynamicMesh3::GetShapeChangeStamp'::__l2::<lambda_1>::operator()(local_res18);
    }
    uVar6 = uVar5;
    if (local_358.ChangeStampShape.bIsEnabled != false) {
      LOCK();
      bVar8 = local_358.ChangeStampShape.Mutex.State == (atomic<unsigned_char>)0x0;
      if (bVar8) {
        local_358.ChangeStampShape.Mutex.State = (atomic<unsigned_char>)0x1;
      }
      UNLOCK();
      if (!bVar8) {
        UE::FMutex::LockSlow(&local_358.ChangeStampShape.Mutex);
      }
      uVar6 = local_358.ChangeStampShape.Value;
      LOCK();
      aVar2 = local_358.ChangeStampShape.Mutex.State - 1;
      UNLOCK();
      bVar1 = (byte)local_358.ChangeStampShape.Mutex.State & 2;
      local_358.ChangeStampShape.Mutex.State = aVar2;
      if (bVar1 != 0) {
        UE::FMutex::WakeWaitingThread(&local_358.ChangeStampShape.Mutex);
      }
    }
    bVar8 = FAutomationTestBase::TestTrue
                      ((FAutomationTestBase *)this,
                       L"Mesh.GetShapeChangeStamp() == StartingShapeChangeStamp",
                       uVar6 == local_res20[0]);
    if (local_358.ChangeStampTopology.bIsEnabled == false) {
      `UE::Geometry::FDynamicMesh3::GetTopologyChangeStamp'::__l2::<lambda_1>::operator()
                (local_res18);
    }
    uVar6 = uVar5;
    if (local_358.ChangeStampTopology.bIsEnabled != false) {
      LOCK();
      bVar9 = local_358.ChangeStampTopology.Mutex.State == (atomic<unsigned_char>)0x0;
      if (bVar9) {
        local_358.ChangeStampTopology.Mutex.State = (atomic<unsigned_char>)0x1;
      }
      UNLOCK();
      if (!bVar9) {
        UE::FMutex::LockSlow(&local_358.ChangeStampTopology.Mutex);
      }
      uVar6 = local_358.ChangeStampTopology.Value;
      LOCK();
      aVar2 = local_358.ChangeStampTopology.Mutex.State - 1;
      UNLOCK();
      bVar1 = (byte)local_358.ChangeStampTopology.Mutex.State & 2;
      local_358.ChangeStampTopology.Mutex.State = aVar2;
      if (bVar1 != 0) {
        UE::FMutex::WakeWaitingThread(&local_358.ChangeStampTopology.Mutex);
      }
    }
    bVar9 = FAutomationTestBase::TestTrue
                      ((FAutomationTestBase *)this,
                       L"Mesh.GetTopologyChangeStamp() == StartingTopologyChangeStamp",
                       uVar6 == local_3b8[0]);
    local_3b0._0_8_ = &local_358;
    local_3b0._8_8_ = local_res20;
    local_3a0 = local_3b8;
    AutoRTFM::AutoRTFMFunctorInvoker<_FAutoRTFMDynamicMesh3Test::RunTest_::__l2::<lambda_3>_>
              (local_3b0);
    if (local_358.ChangeStampShape.bIsEnabled == false) {
      `UE::Geometry::FDynamicMesh3::GetShapeChangeStamp'::__l2::<lambda_1>::operator()(local_res18);
    }
    uVar6 = uVar5;
    if (local_358.ChangeStampShape.bIsEnabled != false) {
      LOCK();
      bVar10 = local_358.ChangeStampShape.Mutex.State == (atomic<unsigned_char>)0x0;
      if (bVar10) {
        local_358.ChangeStampShape.Mutex.State = (atomic<unsigned_char>)0x1;
      }
      UNLOCK();
      if (!bVar10) {
        UE::FMutex::LockSlow(&local_358.ChangeStampShape.Mutex);
      }
      uVar6 = local_358.ChangeStampShape.Value;
      LOCK();
      aVar2 = local_358.ChangeStampShape.Mutex.State - 1;
      UNLOCK();
      bVar1 = (byte)local_358.ChangeStampShape.Mutex.State & 2;
      local_358.ChangeStampShape.Mutex.State = aVar2;
      if (bVar1 != 0) {
        UE::FMutex::WakeWaitingThread(&local_358.ChangeStampShape.Mutex);
      }
    }
    bVar10 = FAutomationTestBase::TestTrue
                       ((FAutomationTestBase *)this,
                        L"Mesh.GetShapeChangeStamp() == StartingShapeChangeStamp",
                        uVar6 == local_res20[0]);
    if (local_358.ChangeStampTopology.bIsEnabled == false) {
      `UE::Geometry::FDynamicMesh3::GetTopologyChangeStamp'::__l2::<lambda_1>::operator()
                (local_res18);
    }
    uVar6 = uVar5;
    if (local_358.ChangeStampTopology.bIsEnabled != false) {
      LOCK();
      bVar11 = local_358.ChangeStampTopology.Mutex.State == (atomic<unsigned_char>)0x0;
      if (bVar11) {
        local_358.ChangeStampTopology.Mutex.State = (atomic<unsigned_char>)0x1;
      }
      UNLOCK();
      if (!bVar11) {
        UE::FMutex::LockSlow(&local_358.ChangeStampTopology.Mutex);
      }
      uVar6 = local_358.ChangeStampTopology.Value;
      LOCK();
      aVar2 = local_358.ChangeStampTopology.Mutex.State - 1;
      UNLOCK();
      bVar1 = (byte)local_358.ChangeStampTopology.Mutex.State & 2;
      local_358.ChangeStampTopology.Mutex.State = aVar2;
      if (bVar1 != 0) {
        UE::FMutex::WakeWaitingThread(&local_358.ChangeStampTopology.Mutex);
      }
    }
    bVar11 = FAutomationTestBase::TestTrue
                       ((FAutomationTestBase *)this,
                        L"Mesh.GetTopologyChangeStamp() == StartingTopologyChangeStamp",
                        uVar6 == local_3b8[0]);
    local_3b0._0_8_ = &local_358;
    local_3b0._8_8_ = local_res20;
    local_3a0 = local_3b8;
    AutoRTFM::AutoRTFMFunctorInvoker<_FAutoRTFMDynamicMesh3Test::RunTest_::__l2::<lambda_4>_>
              (local_3b0);
    if (local_358.ChangeStampShape.bIsEnabled == false) {
      `UE::Geometry::FDynamicMesh3::GetShapeChangeStamp'::__l2::<lambda_1>::operator()(local_res18);
    }
    if (local_358.ChangeStampShape.bIsEnabled != false) {
      LOCK();
      bVar12 = local_358.ChangeStampShape.Mutex.State == (atomic<unsigned_char>)0x0;
      if (bVar12) {
        local_358.ChangeStampShape.Mutex.State = (atomic<unsigned_char>)0x1;
      }
      UNLOCK();
      if (!bVar12) {
        UE::FMutex::LockSlow(&local_358.ChangeStampShape.Mutex);
      }
      uVar5 = local_358.ChangeStampShape.Value;
      LOCK();
      aVar2 = local_358.ChangeStampShape.Mutex.State - 1;
      UNLOCK();
      bVar1 = (byte)local_358.ChangeStampShape.Mutex.State & 2;
      local_358.ChangeStampShape.Mutex.State = aVar2;
      if (bVar1 != 0) {
        UE::FMutex::WakeWaitingThread(&local_358.ChangeStampShape.Mutex);
      }
    }
    bVar12 = FAutomationTestBase::TestTrue
                       ((FAutomationTestBase *)this,
                        L"Mesh.GetShapeChangeStamp() > StartingShapeChangeStamp",
                        local_res20[0] < uVar5);
    if (local_358.ChangeStampTopology.bIsEnabled == false) {
      `UE::Geometry::FDynamicMesh3::GetTopologyChangeStamp'::__l2::<lambda_1>::operator()
                (local_res18);
    }
    uVar6 = 1;
    uVar5 = uVar6;
    if (local_358.ChangeStampTopology.bIsEnabled != false) {
      LOCK();
      bVar13 = local_358.ChangeStampTopology.Mutex.State == (atomic<unsigned_char>)0x0;
      if (bVar13) {
        local_358.ChangeStampTopology.Mutex.State = (atomic<unsigned_char>)0x1;
      }
      UNLOCK();
      if (!bVar13) {
        UE::FMutex::LockSlow(&local_358.ChangeStampTopology.Mutex);
      }
      uVar5 = local_358.ChangeStampTopology.Value;
      LOCK();
      aVar2 = local_358.ChangeStampTopology.Mutex.State - 1;
      UNLOCK();
      bVar1 = (byte)local_358.ChangeStampTopology.Mutex.State & 2;
      local_358.ChangeStampTopology.Mutex.State = aVar2;
      if (bVar1 != 0) {
        UE::FMutex::WakeWaitingThread(&local_358.ChangeStampTopology.Mutex);
      }
    }
    bVar13 = FAutomationTestBase::TestTrue
                       ((FAutomationTestBase *)this,
                        L"Mesh.GetTopologyChangeStamp() == StartingTopologyChangeStamp",
                        uVar5 == local_3b8[0]);
    if (local_358.ChangeStampShape.bIsEnabled == false) {
      `UE::Geometry::FDynamicMesh3::GetShapeChangeStamp'::__l2::<lambda_1>::operator()(local_res18);
    }
    uVar5 = uVar6;
    if (local_358.ChangeStampShape.bIsEnabled != false) {
      LOCK();
      bVar14 = local_358.ChangeStampShape.Mutex.State == (atomic<unsigned_char>)0x0;
      if (bVar14) {
        local_358.ChangeStampShape.Mutex.State = (atomic<unsigned_char>)0x1;
      }
      UNLOCK();
      if (!bVar14) {
        UE::FMutex::LockSlow(&local_358.ChangeStampShape.Mutex);
      }
      uVar5 = local_358.ChangeStampShape.Value;
      LOCK();
      aVar2 = local_358.ChangeStampShape.Mutex.State - 1;
      UNLOCK();
      bVar1 = (byte)local_358.ChangeStampShape.Mutex.State & 2;
      local_358.ChangeStampShape.Mutex.State = aVar2;
      if (bVar1 != 0) {
        UE::FMutex::WakeWaitingThread(&local_358.ChangeStampShape.Mutex);
      }
    }
    local_res20[0] = uVar5;
    if (local_358.ChangeStampTopology.bIsEnabled == false) {
      `UE::Geometry::FDynamicMesh3::GetTopologyChangeStamp'::__l2::<lambda_1>::operator()
                (local_res18);
    }
    uVar5 = uVar6;
    if (local_358.ChangeStampTopology.bIsEnabled != false) {
      LOCK();
      bVar14 = local_358.ChangeStampTopology.Mutex.State == (atomic<unsigned_char>)0x0;
      if (bVar14) {
        local_358.ChangeStampTopology.Mutex.State = (atomic<unsigned_char>)0x1;
      }
      UNLOCK();
      if (!bVar14) {
        UE::FMutex::LockSlow(&local_358.ChangeStampTopology.Mutex);
      }
      uVar5 = local_358.ChangeStampTopology.Value;
      LOCK();
      aVar2 = local_358.ChangeStampTopology.Mutex.State - 1;
      UNLOCK();
      bVar1 = (byte)local_358.ChangeStampTopology.Mutex.State & 2;
      local_358.ChangeStampTopology.Mutex.State = aVar2;
      if (bVar1 != 0) {
        UE::FMutex::WakeWaitingThread(&local_358.ChangeStampTopology.Mutex);
      }
    }
    local_3b0._0_8_ = &local_358;
    local_3b0._8_8_ = local_res20;
    local_3a0 = local_3b8;
    local_3b8[0] = uVar5;
    AutoRTFM::AutoRTFMFunctorInvoker<_FAutoRTFMDynamicMesh3Test::RunTest_::__l2::<lambda_5>_>
              (local_3b0);
    if (local_358.ChangeStampShape.bIsEnabled == false) {
      `UE::Geometry::FDynamicMesh3::GetShapeChangeStamp'::__l2::<lambda_1>::operator()(local_res18);
    }
    uVar5 = uVar6;
    if (local_358.ChangeStampShape.bIsEnabled != false) {
      LOCK();
      bVar14 = local_358.ChangeStampShape.Mutex.State == (atomic<unsigned_char>)0x0;
      if (bVar14) {
        local_358.ChangeStampShape.Mutex.State = (atomic<unsigned_char>)0x1;
      }
      UNLOCK();
      if (!bVar14) {
        UE::FMutex::LockSlow(&local_358.ChangeStampShape.Mutex);
      }
      uVar5 = local_358.ChangeStampShape.Value;
      LOCK();
      aVar2 = local_358.ChangeStampShape.Mutex.State - 1;
      UNLOCK();
      bVar1 = (byte)local_358.ChangeStampShape.Mutex.State & 2;
      local_358.ChangeStampShape.Mutex.State = aVar2;
      if (bVar1 != 0) {
        UE::FMutex::WakeWaitingThread(&local_358.ChangeStampShape.Mutex);
      }
    }
    bVar14 = FAutomationTestBase::TestTrue
                       ((FAutomationTestBase *)this,
                        L"Mesh.GetShapeChangeStamp() > StartingShapeChangeStamp",
                        local_res20[0] < uVar5);
    if (local_358.ChangeStampTopology.bIsEnabled == false) {
      `UE::Geometry::FDynamicMesh3::GetTopologyChangeStamp'::__l2::<lambda_1>::operator()
                (local_res18);
    }
    uVar5 = uVar6;
    if (local_358.ChangeStampTopology.bIsEnabled != false) {
      LOCK();
      bVar15 = local_358.ChangeStampTopology.Mutex.State == (atomic<unsigned_char>)0x0;
      if (bVar15) {
        local_358.ChangeStampTopology.Mutex.State = (atomic<unsigned_char>)0x1;
      }
      UNLOCK();
      if (!bVar15) {
        UE::FMutex::LockSlow(&local_358.ChangeStampTopology.Mutex);
      }
      uVar5 = local_358.ChangeStampTopology.Value;
      LOCK();
      aVar2 = local_358.ChangeStampTopology.Mutex.State - 1;
      UNLOCK();
      bVar1 = (byte)local_358.ChangeStampTopology.Mutex.State & 2;
      local_358.ChangeStampTopology.Mutex.State = aVar2;
      if (bVar1 != 0) {
        UE::FMutex::WakeWaitingThread(&local_358.ChangeStampTopology.Mutex);
      }
    }
    bVar15 = FAutomationTestBase::TestTrue
                       ((FAutomationTestBase *)this,
                        L"Mesh.GetTopologyChangeStamp() > StartingTopologyChangeStamp",
                        local_3b8[0] < uVar5);
    if (local_358.ChangeStampShape.bIsEnabled == false) {
      `UE::Geometry::FDynamicMesh3::GetShapeChangeStamp'::__l2::<lambda_1>::operator()(local_res18);
    }
    uVar5 = uVar6;
    if (local_358.ChangeStampShape.bIsEnabled != false) {
      LOCK();
      bVar16 = local_358.ChangeStampShape.Mutex.State == (atomic<unsigned_char>)0x0;
      if (bVar16) {
        local_358.ChangeStampShape.Mutex.State = (atomic<unsigned_char>)0x1;
      }
      UNLOCK();
      if (!bVar16) {
        UE::FMutex::LockSlow(&local_358.ChangeStampShape.Mutex);
      }
      uVar5 = local_358.ChangeStampShape.Value;
      LOCK();
      aVar2 = local_358.ChangeStampShape.Mutex.State - 1;
      UNLOCK();
      bVar1 = (byte)local_358.ChangeStampShape.Mutex.State & 2;
      local_358.ChangeStampShape.Mutex.State = aVar2;
      if (bVar1 != 0) {
        UE::FMutex::WakeWaitingThread(&local_358.ChangeStampShape.Mutex);
      }
    }
    local_res20[0] = uVar5;
    if (local_358.ChangeStampTopology.bIsEnabled == false) {
      `UE::Geometry::FDynamicMesh3::GetTopologyChangeStamp'::__l2::<lambda_1>::operator()
                (local_res18);
    }
    uVar5 = uVar6;
    if (local_358.ChangeStampTopology.bIsEnabled != false) {
      LOCK();
      bVar16 = local_358.ChangeStampTopology.Mutex.State == (atomic<unsigned_char>)0x0;
      if (bVar16) {
        local_358.ChangeStampTopology.Mutex.State = (atomic<unsigned_char>)0x1;
      }
      UNLOCK();
      if (!bVar16) {
        UE::FMutex::LockSlow(&local_358.ChangeStampTopology.Mutex);
      }
      uVar5 = local_358.ChangeStampTopology.Value;
      LOCK();
      aVar2 = local_358.ChangeStampTopology.Mutex.State - 1;
      UNLOCK();
      bVar1 = (byte)local_358.ChangeStampTopology.Mutex.State & 2;
      local_358.ChangeStampTopology.Mutex.State = aVar2;
      if (bVar1 != 0) {
        UE::FMutex::WakeWaitingThread(&local_358.ChangeStampTopology.Mutex);
      }
    }
    local_3b0._0_8_ = &local_358;
    local_3b0._8_8_ = local_res20;
    local_3a0 = local_3b8;
    local_3b8[0] = uVar5;
    AutoRTFM::AutoRTFMFunctorInvoker<_FAutoRTFMDynamicMesh3Test::RunTest_::__l2::<lambda_6>_>
              (local_3b0);
    if (local_358.ChangeStampShape.bIsEnabled == false) {
      `UE::Geometry::FDynamicMesh3::GetShapeChangeStamp'::__l2::<lambda_1>::operator()(local_res18);
    }
    if (local_358.ChangeStampShape.bIsEnabled != false) {
      LOCK();
      bVar16 = local_358.ChangeStampShape.Mutex.State == (atomic<unsigned_char>)0x0;
      if (bVar16) {
        local_358.ChangeStampShape.Mutex.State = (atomic<unsigned_char>)0x1;
      }
      UNLOCK();
      if (!bVar16) {
        UE::FMutex::LockSlow(&local_358.ChangeStampShape.Mutex);
      }
      LOCK();
      aVar2 = local_358.ChangeStampShape.Mutex.State - 1;
      UNLOCK();
      bVar1 = (byte)local_358.ChangeStampShape.Mutex.State & 2;
      uVar6 = local_358.ChangeStampShape.Value;
      local_358.ChangeStampShape.Mutex.State = aVar2;
      if (bVar1 != 0) {
        UE::FMutex::WakeWaitingThread(&local_358.ChangeStampShape.Mutex);
      }
    }
    bVar16 = FAutomationTestBase::TestTrue
                       ((FAutomationTestBase *)this,
                        L"Mesh.GetShapeChangeStamp() > StartingShapeChangeStamp",
                        local_res20[0] < uVar6);
    if ((local_358.ChangeStampTopology.bIsEnabled != false) ||
       (`UE::Geometry::FDynamicMesh3::GetTopologyChangeStamp'::__l2::<lambda_1>::operator()
                  (local_res18), uVar5 = 1, local_358.ChangeStampTopology.bIsEnabled != false)) {
      LOCK();
      bVar17 = local_358.ChangeStampTopology.Mutex.State == (atomic<unsigned_char>)0x0;
      if (bVar17) {
        local_358.ChangeStampTopology.Mutex.State = (atomic<unsigned_char>)0x1;
      }
      UNLOCK();
      if (!bVar17) {
        UE::FMutex::LockSlow(&local_358.ChangeStampTopology.Mutex);
      }
      LOCK();
      aVar2 = local_358.ChangeStampTopology.Mutex.State - 1;
      UNLOCK();
      bVar1 = (byte)local_358.ChangeStampTopology.Mutex.State & 2;
      uVar5 = local_358.ChangeStampTopology.Value;
      local_358.ChangeStampTopology.Mutex.State = aVar2;
      if (bVar1 != 0) {
        UE::FMutex::WakeWaitingThread(&local_358.ChangeStampTopology.Mutex);
      }
    }
    bVar17 = FAutomationTestBase::TestTrue
                       ((FAutomationTestBase *)this,
                        L"Mesh.GetTopologyChangeStamp() > StartingTopologyChangeStamp",
                        local_3b8[0] < uVar5);
    UE::Geometry::FDynamicMesh3::~FDynamicMesh3(&local_358);
    local_128._padding_ = (longlong)&___7FMeshShapeGenerator_Geometry_UE__6B_;
    if ((void *)local_128._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_128._padding_);
    }
    if ((void *)local_128._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_128._padding_);
    }
    if ((void *)local_128._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_128._padding_);
    }
    if ((void *)local_128._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_128._padding_);
    }
    if ((void *)local_128._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_128._padding_);
    }
    if ((void *)local_128._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_128._padding_);
    }
    if ((void *)local_128._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_128._padding_);
    }
    if ((void *)local_128._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_128._padding_);
    }
    if ((void *)local_128._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_128._padding_);
    }
    return bVar17 && ((((((((((bVar7 && bVar3) && bVar8) && bVar9) && bVar10) && bVar11) && bVar12)
                        && bVar13) && bVar14) && bVar15) && bVar16);
  }
  ::FString::FString((FString *)local_3b0,
                     L"SKIPPED \'FAutoRTFMDynamicMesh3Test\' test. AutoRTFM disabled.");
  _Src = local_3b0._0_8_;
  local_398.Type = Info;
  local_398.Message.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_3b0._8_4_ == 0) {
    local_398.Message.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_3b0._8_4_,0,(ForAnyElementType *)&local_398.Message,local_3b0._8_4_,
               &local_398.Message.Data.ArrayMax);
    memcpy(local_398.Message.Data.AllocatorInstance.Data,(void *)_Src,
           (longlong)(int)local_3b0._8_4_ * 2);
  }
  local_398.Artifact.A = 0;
  local_398.Artifact.B = 0;
  local_398.Context.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_398.Context.Data.ArrayNum = 0;
  local_398.Context.Data.ArrayMax = 0;
  local_398.Artifact.C = 0;
  local_398.Artifact.D = 0;
  FAutomationTestExecutionInfo::AddEvent
            ((FAutomationTestExecutionInfo *)&this->field_0x30,&local_398,0,true);
  if (local_398.Context.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_398.Context.Data.AllocatorInstance.Data);
  }
  if (local_398.Message.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_398.Message.Data.AllocatorInstance.Data);
  }
  if ((FScriptContainerElement *)local_3b0._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_3b0._0_8_);
  }
  return true;
}

// GetBeautifiedTestName @ 1435cef00

FString * __thiscall
FAutoRTFMDynamicMesh3Test::GetBeautifiedTestName
          (FAutoRTFMDynamicMesh3Test *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"AutoRTFM + FDynamicMesh3");
  return __return_storage_ptr__;
}

