// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 8

// GetTestFlags @ 14cbff8c0

EAutomationTestFlags __thiscall
UDisplaceMeshTestConstant::GetTestFlags(UDisplaceMeshTestConstant *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 14cbff8d0

bool __thiscall UDisplaceMeshTestConstant::IsStressTest(UDisplaceMeshTestConstant *this)

{
  return false;
}

// GetRequiredDeviceNum @ 14cbff8e0

uint __thiscall UDisplaceMeshTestConstant::GetRequiredDeviceNum(UDisplaceMeshTestConstant *this)

{
  return 1;
}

// GetTestSourceFileName @ 14cbff8f0

FString * __thiscall
UDisplaceMeshTestConstant::GetTestSourceFileName
          (UDisplaceMeshTestConstant *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\Tests\\DisplaceMeshTool_Tests.inl"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 14cbff920

int __thiscall UDisplaceMeshTestConstant::GetTestSourceFileLine(UDisplaceMeshTestConstant *this)

{
  return 0x2c;
}

// GetTests @ 14cbff930

/* WARNING: Removing unreachable block (ram,0x00014cbffa1d) */
/* WARNING: Removing unreachable block (ram,0x00014cbffae8) */

void __thiscall
UDisplaceMeshTestConstant::GetTests
          (UDisplaceMeshTestConstant *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"MeshModeling.DisplaceMesh.Constant Displace Type");
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

// RunTest @ 14cbffb10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall UDisplaceMeshTestConstant::RunTest(UDisplaceMeshTestConstant *this,FString *param_1)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  int iVar5;
  undefined8 *puVar6;
  code *pcVar7;
  bool bVar8;
  undefined1 uVar9;
  FDisplaceMeshOp *this_00;
  FDisplaceMeshOp *pFVar10;
  ForAnyElementType FVar11;
  FDisplaceMeshOp *pFVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auStack_438 [32];
  undefined8 local_418;
  longlong local_410;
  TSharedPtr<UE::Geometry::FDynamicMesh3,1> local_408;
  FMeshNormals local_3f8;
  TSharedPtr<UE::Geometry::FDynamicMesh3,1> local_3e0;
  FString local_3c8;
  FString local_3b8;
  FString local_3a8;
  FString local_398;
  FString local_388;
  FString local_378;
  FString local_368;
  FString local_358;
  FDisplaceMeshOpFactory local_348;
  FProgressCancel local_208;
  DisplaceMeshParameters local_158;
  ulonglong local_38;
  double dVar4;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_438;
  DisplaceMeshToolTestsLocals::CreateSingleTriangleMesh(&local_408);
  if ((local_408.Object == (FDynamicMesh3 *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    uVar9 = (*pcVar7)();
    return (bool)uVar9;
  }
  iVar5 = ((local_408.Object)->VertexRefCounts).UsedCount;
  ::FString::FString(&local_3c8,"Input mesh has 3 vertices");
  FVar11.Data = (FScriptContainerElement *)L"";
  if (local_3c8.Data.ArrayNum != 0) {
    FVar11.Data = local_3c8.Data.AllocatorInstance.Data;
  }
  bVar8 = FAutomationTestBase::TestTrue
                    ((FAutomationTestBase *)this,(wchar_t *)FVar11.Data,iVar5 == 3);
  if (local_3c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3c8.Data.AllocatorInstance.Data);
  }
  if (bVar8) {
    if ((local_408.Object == (FDynamicMesh3 *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      uVar9 = (*pcVar7)();
      return (bool)uVar9;
    }
    iVar5 = ((local_408.Object)->TriangleRefCounts).UsedCount;
    ::FString::FString(&local_3b8,"Input mesh has 1 triangle");
    FVar11.Data = (FScriptContainerElement *)L"";
    if (local_3b8.Data.ArrayNum != 0) {
      FVar11.Data = local_3b8.Data.AllocatorInstance.Data;
    }
    bVar8 = FAutomationTestBase::TestTrue
                      ((FAutomationTestBase *)this,(wchar_t *)FVar11.Data,iVar5 == 1);
    if (local_3b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3b8.Data.AllocatorInstance.Data);
    }
    if (bVar8) {
      if ((local_408.Object == (FDynamicMesh3 *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar8)) {
        pcVar7 = (code *)swi(3);
        uVar9 = (*pcVar7)();
        return (bool)uVar9;
      }
      if (((int)(((local_408.Object)->VertexRefCounts).RefCounts.CurBlock * 0x200 +
                ((local_408.Object)->VertexRefCounts).RefCounts.CurBlockUsed) < 1) ||
         (0xfffd < (ushort)(**(short **)
                              ((local_408.Object)->VertexRefCounts).RefCounts.Blocks.
                              AllocatorInstance.Data - 1U))) {
        bVar8 = false;
      }
      else {
        bVar8 = true;
      }
      ::FString::FString(&local_3a8,"Input mesh has vertex at index 0");
      FVar11.Data = (FScriptContainerElement *)L"";
      if (local_3a8.Data.ArrayNum != 0) {
        FVar11.Data = local_3a8.Data.AllocatorInstance.Data;
      }
      bVar8 = FAutomationTestBase::TestTrue
                        ((FAutomationTestBase *)this,(wchar_t *)FVar11.Data,bVar8);
      if (local_3a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_3a8.Data.AllocatorInstance.Data);
      }
      if (bVar8) {
        local_3f8.Mesh = local_408.Object;
        pFVar12 = (FDisplaceMeshOp *)0x0;
        local_3f8.Normals.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_3f8.Normals.ArrayNum = 0;
        local_3f8.Normals.ArrayMax = 0;
        UE::Geometry::FMeshNormals::Compute_FaceAvg(&local_3f8,true,true);
        if (local_3f8.Normals.ArrayNum < 1) {
          local_418 = 0;
          local_410 = (longlong)local_3f8.Normals.ArrayNum;
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar8) {
            pcVar7 = (code *)swi(3);
            uVar9 = (*pcVar7)();
            return (bool)uVar9;
          }
        }
        auVar13._0_8_ =
             *(double *)local_3f8.Normals.AllocatorInstance.Data *
             *(double *)local_3f8.Normals.AllocatorInstance.Data;
        auVar13._8_8_ = 0;
        auVar14._8_8_ = 0;
        auVar14._0_8_ =
             *(double *)(local_3f8.Normals.AllocatorInstance.Data + 8) *
             *(double *)(local_3f8.Normals.AllocatorInstance.Data + 8) + auVar13._0_8_ +
             (*(double *)(local_3f8.Normals.AllocatorInstance.Data + 0x10) - __real_3ff0000000000000
             ) * (*(double *)(local_3f8.Normals.AllocatorInstance.Data + 0x10) -
                 __real_3ff0000000000000);
        auVar14 = sqrtpd(auVar13,auVar14);
        bVar8 = auVar14._0_8_ <= __real_3e45798ee2308c3a;
        ::FString::FString(&local_398,"Input mesh normals point in +Z direction");
        FVar11.Data = (FScriptContainerElement *)L"";
        if (local_398.Data.ArrayNum != 0) {
          FVar11.Data = local_398.Data.AllocatorInstance.Data;
        }
        bVar8 = FAutomationTestBase::TestTrue
                          ((FAutomationTestBase *)this,(wchar_t *)FVar11.Data,bVar8);
        if (local_398.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_398.Data.AllocatorInstance.Data);
        }
        if (bVar8) {
          DisplaceMeshToolLocals::DisplaceMeshParameters::DisplaceMeshParameters(&local_158);
          local_158.DisplaceIntensity = 10.0;
          DisplaceMeshToolLocals::FDisplaceMeshOpFactory::FDisplaceMeshOpFactory
                    (&local_348,&local_408,&local_158,Constant);
          this_00 = ::operator_new(0x200);
          pFVar10 = pFVar12;
          if (this_00 != (FDisplaceMeshOp *)0x0) {
            local_3e0.Object = (local_348.SourceMesh)->Object;
            local_3e0.SharedReferenceCount.ReferenceController =
                 ((local_348.SourceMesh)->SharedReferenceCount).ReferenceController;
            if (local_3e0.SharedReferenceCount.ReferenceController !=
                (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              (local_3e0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                   (atomic<int>)
                   ((int)(local_3e0.SharedReferenceCount.ReferenceController)->SharedReferenceCount
                   + 1);
              UNLOCK();
            }
            pFVar10 = DisplaceMeshToolLocals::FDisplaceMeshOp::FDisplaceMeshOp
                                (this_00,&local_3e0,&local_348.Parameters,local_348.DisplacementType
                                );
          }
          FProgressCancel::FProgressCancel(&local_208);
          (**(code **)(pFVar10->_padding_ + 0x18))(pFVar10,&local_208);
          puVar6 = (undefined8 *)pFVar10->_padding_;
          pFVar10->_padding_ = 0;
          iVar5 = *(int *)(puVar6 + 10);
          ::FString::FString(&local_388,"Resulting mesh has 3 vertices");
          FVar11.Data = (FScriptContainerElement *)L"";
          if (local_388.Data.ArrayNum != 0) {
            FVar11.Data = local_388.Data.AllocatorInstance.Data;
          }
          bVar8 = FAutomationTestBase::TestTrue
                            ((FAutomationTestBase *)this,(wchar_t *)FVar11.Data,iVar5 == 3);
          if (local_388.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_388.Data.AllocatorInstance.Data);
          }
          if (bVar8) {
            iVar5 = *(int *)(puVar6 + 0x2e);
            ::FString::FString(&local_378,"Resulting mesh has 1 triangle");
            FVar11.Data = (FScriptContainerElement *)L"";
            if (local_378.Data.ArrayNum != 0) {
              FVar11.Data = local_378.Data.AllocatorInstance.Data;
            }
            bVar8 = FAutomationTestBase::TestTrue
                              ((FAutomationTestBase *)this,(wchar_t *)FVar11.Data,iVar5 == 1);
            if (local_378.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_378.Data.AllocatorInstance.Data);
            }
            if (!bVar8) goto LAB_14cbffffc;
            if ((*(int *)(puVar6 + 4) * 0x200 + *(int *)((longlong)puVar6 + 0x24) < 1) ||
               (0xfffd < (ushort)(**(short **)puVar6[5] - 1U))) {
              bVar8 = false;
            }
            else {
              bVar8 = true;
            }
            ::FString::FString(&local_368,"Input mesh has vertex at index 0");
            FVar11.Data = (FScriptContainerElement *)L"";
            if (local_368.Data.ArrayNum != 0) {
              FVar11.Data = local_368.Data.AllocatorInstance.Data;
            }
            bVar8 = FAutomationTestBase::TestTrue
                              ((FAutomationTestBase *)this,(wchar_t *)FVar11.Data,bVar8);
            if (local_368.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_368.Data.AllocatorInstance.Data);
            }
            if (!bVar8) goto LAB_14cbffffc;
            if ((local_408.Object == (FDynamicMesh3 *)0x0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar8)) {
              pcVar7 = (code *)swi(3);
              uVar9 = (*pcVar7)();
              return (bool)uVar9;
            }
            dVar2 = *(double *)(*(longlong *)puVar6[2] + 0x10);
            pdVar1 = (double *)
                     (*(longlong *)((local_408.Object)->Vertices).Blocks.AllocatorInstance.Data +
                     0x10);
            dVar3 = *pdVar1;
            dVar4 = *pdVar1;
            ::FString::FString(&local_358,"Resulting mesh moved in the normal direction");
            FVar11.Data = (FScriptContainerElement *)L"";
            if (local_358.Data.ArrayNum != 0) {
              FVar11.Data = local_358.Data.AllocatorInstance.Data;
            }
            bVar8 = FAutomationTestBase::TestTrue
                              ((FAutomationTestBase *)this,(wchar_t *)FVar11.Data,
                               dVar4 <= dVar2 && dVar2 != dVar3);
            if (local_358.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_358.Data.AllocatorInstance.Data);
            }
            if (!bVar8) goto LAB_14cbffffc;
            pFVar12 = (FDisplaceMeshOp *)&DAT_00000001;
          }
          else {
LAB_14cbffffc:
            pFVar12 = (FDisplaceMeshOp *)0x0;
          }
          (**(code **)*puVar6)(puVar6,1);
          FProgressCancel::~FProgressCancel(&local_208);
          (**(code **)pFVar10->_padding_)(pFVar10,1);
          DisplaceMeshToolLocals::DisplaceMeshParameters::~DisplaceMeshParameters
                    (&local_348.Parameters);
          local_348._padding_ = (longlong)&___7IDynamicMeshOperatorFactory_Geometry_UE__6B_;
          DisplaceMeshToolLocals::DisplaceMeshParameters::~DisplaceMeshParameters(&local_158);
        }
        uVar9 = SUB81(pFVar12,0);
        if (local_3f8.Normals.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_3f8.Normals.AllocatorInstance.Data);
        }
        goto LAB_14cc00061;
      }
    }
  }
  uVar9 = 0;
LAB_14cc00061:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_408.SharedReferenceCount.ReferenceController);
  return (bool)uVar9;
}

// GetBeautifiedTestName @ 14cc000a0

FString * __thiscall
UDisplaceMeshTestConstant::GetBeautifiedTestName
          (UDisplaceMeshTestConstant *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"MeshModeling.DisplaceMesh.Constant Displace Type");
  return __return_storage_ptr__;
}

