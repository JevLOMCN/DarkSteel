// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 8

// GetTestFlags @ 14cc02690

EAutomationTestFlags __thiscall
UDisplaceMeshTestDirectionalFilter::GetTestFlags(UDisplaceMeshTestDirectionalFilter *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 14cc026a0

bool __thiscall
UDisplaceMeshTestDirectionalFilter::IsStressTest(UDisplaceMeshTestDirectionalFilter *this)

{
  return false;
}

// GetRequiredDeviceNum @ 14cc026b0

uint __thiscall
UDisplaceMeshTestDirectionalFilter::GetRequiredDeviceNum(UDisplaceMeshTestDirectionalFilter *this)

{
  return 1;
}

// GetTestSourceFileName @ 14cc026c0

FString * __thiscall
UDisplaceMeshTestDirectionalFilter::GetTestSourceFileName
          (UDisplaceMeshTestDirectionalFilter *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\Tests\\DisplaceMeshTool_Tests.inl"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 14cc026f0

int __thiscall
UDisplaceMeshTestDirectionalFilter::GetTestSourceFileLine(UDisplaceMeshTestDirectionalFilter *this)

{
  return 0x105;
}

// GetTests @ 14cc02700

/* WARNING: Removing unreachable block (ram,0x00014cc027ed) */
/* WARNING: Removing unreachable block (ram,0x00014cc028b8) */

void __thiscall
UDisplaceMeshTestDirectionalFilter::GetTests
          (UDisplaceMeshTestDirectionalFilter *this,
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
  
  ::FString::FString(&local_18,"MeshModeling.DisplaceMesh.Directional Filter");
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

// RunTest @ 14cc028e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
UDisplaceMeshTestDirectionalFilter::RunTest
          (UDisplaceMeshTestDirectionalFilter *this,FString *param_1)

{
  double *pdVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  FScriptContainerElement *pFVar6;
  longlong lVar7;
  code *pcVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  FDynamicMesh3 *pFVar15;
  bool bVar16;
  undefined1 uVar17;
  uint uVar18;
  FDisplaceMeshOp *this_00;
  FDisplaceMeshOp *pFVar19;
  ulonglong uVar20;
  ForAnyElementType FVar21;
  undefined ***pppuVar22;
  longlong *plVar23;
  uint uVar24;
  FDisplaceMeshOp *pFVar25;
  longlong lVar26;
  uint uVar27;
  undefined1 auStack_468 [32];
  longlong local_448;
  longlong local_440;
  TSharedPtr<UE::Geometry::FDynamicMesh3,1> local_438;
  FMeshNormals local_428;
  FString local_410;
  FString local_400;
  FString local_3f0;
  TSharedPtr<UE::Geometry::FDynamicMesh3,1> local_3e0;
  double local_3d0;
  double dStack_3c8;
  double local_3c0;
  double local_3b8;
  double dStack_3b0;
  double local_3a8;
  undefined1 local_398 [8];
  undefined4 local_390;
  undefined8 local_38c;
  FText local_380;
  FText local_370;
  undefined4 local_360;
  undefined4 local_35c;
  _RTL_CRITICAL_SECTION local_358;
  code *local_328;
  undefined **local_318;
  code *local_310;
  undefined ***local_300;
  FMessageInfo *local_2f8;
  undefined8 local_2f0;
  undefined1 local_2e8 [280];
  FSharedReferencer<1> local_1d0;
  FDisplaceMeshOpFactory local_1c8;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStack_468;
  DisplaceMeshToolTestsLocals::CreateTestBoxMesh(&local_438);
  local_428.Mesh = local_438.Object;
  pFVar25 = (FDisplaceMeshOp *)0x0;
  local_428.Normals.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_428.Normals.ArrayNum = 0;
  local_428.Normals.ArrayMax = 0;
  UE::Geometry::FMeshNormals::Compute_FaceAvg(&local_428,true,true);
  DisplaceMeshToolLocals::DisplaceMeshParameters::DisplaceMeshParameters
            ((DisplaceMeshParameters *)local_2e8);
  local_2e8._64_8_ = ___xmm_00000000000000003ff0000000000000;
  local_2e8._72_8_ = _UNK_150689518;
  local_2e8._56_8_ = 0.0;
  local_2e8._0_4_ = 100.0;
  local_2e8._4_4_ = 100;
  local_2e8[0x30] = true;
  local_2e8._80_4_ = 0.2;
  DisplaceMeshToolLocals::FDisplaceMeshOpFactory::FDisplaceMeshOpFactory
            (&local_1c8,&local_438,(DisplaceMeshParameters *)local_2e8,RandomNoise);
  this_00 = ::operator_new(0x200);
  pFVar19 = pFVar25;
  if (this_00 != (FDisplaceMeshOp *)0x0) {
    local_3e0.Object = (local_1c8.SourceMesh)->Object;
    local_3e0.SharedReferenceCount.ReferenceController =
         ((local_1c8.SourceMesh)->SharedReferenceCount).ReferenceController;
    if (local_3e0.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_3e0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_3e0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar19 = DisplaceMeshToolLocals::FDisplaceMeshOp::FDisplaceMeshOp
                        (this_00,&local_3e0,&local_1c8.Parameters,local_1c8.DisplacementType);
  }
  local_398[0] = 0;
  local_390 = 0;
  local_38c = 0x3f800000;
  FText::FText(&local_380);
  FText::FText(&local_370);
  local_360 = 0xffffffff;
  local_35c = 0;
  InitializeCriticalSectionAndSpinCount(&local_358,4000);
  local_300 = (undefined ***)0x0;
  local_318 = &___7__TFunction_OwnedObject_P6A_NXZ_0A__0A__Function_Private_Core_UE__6B_;
  local_2f8 = (FMessageInfo *)0x0;
  local_310 = FProgressCancel::<lambda_25_>::<lambda_invoker_cdecl>;
  local_2f0 = 0;
  local_328 = UE::Core::Private::Function::TFunctionRefCaller<bool_(__cdecl*)(void),bool>::Call;
  (**(code **)(pFVar19->_padding_ + 0x18))(pFVar19,local_398);
  puVar5 = (undefined8 *)pFVar19->_padding_;
  pFVar19->_padding_ = 0;
  if ((local_438.Object == (FDynamicMesh3 *)0x0) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar16)) {
    pcVar8 = (code *)swi(3);
    uVar17 = (*pcVar8)();
    return (bool)uVar17;
  }
  iVar3 = *(int *)(puVar5 + 10);
  iVar4 = ((local_438.Object)->VertexRefCounts).UsedCount;
  ::FString::FString(&local_410,"Before and after mesh vertex counts match");
  FVar21.Data = (FScriptContainerElement *)L"";
  if (local_410.Data.ArrayNum != 0) {
    FVar21.Data = local_410.Data.AllocatorInstance.Data;
  }
  bVar16 = FAutomationTestBase::TestTrue
                     ((FAutomationTestBase *)this,(wchar_t *)FVar21.Data,iVar4 == iVar3);
  if (local_410.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_410.Data.AllocatorInstance.Data);
  }
  if (!bVar16) {
LAB_14cc02e2c:
    bVar16 = false;
    goto LAB_14cc02e2f;
  }
  if ((local_438.Object == (FDynamicMesh3 *)0x0) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar16)) {
    pcVar8 = (code *)swi(3);
    uVar17 = (*pcVar8)();
    return (bool)uVar17;
  }
  pFVar15 = local_438.Object;
  dVar14 = __real_bfe0000000000000;
  dVar13 = __real_3f1a36e2eb1c432d;
  dVar12 = __real_3fe0000000000000;
  dVar11 = __real_3e45798ee2308c3a;
  uVar27 = ((local_438.Object)->VertexRefCounts).RefCounts.CurBlock * 0x200 +
           ((local_438.Object)->VertexRefCounts).RefCounts.CurBlockUsed;
  if ((uVar27 == 0) ||
     (pFVar6 = ((local_438.Object)->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data,
     (ushort)(**(short **)pFVar6 - 1U) < 0xfffe)) {
LAB_14cc02bd8:
    uVar24 = (uint)pFVar25;
  }
  else {
    pFVar25 = (FDisplaceMeshOp *)&DAT_00000001;
    uVar24 = 1;
    if (1 < (int)uVar27) {
      do {
        sVar2 = *(short *)(*(longlong *)(pFVar6 + ((ulonglong)pFVar25 >> 9) * 8) +
                          (ulonglong)((uint)pFVar25 & 0x1ff) * 2);
        if ((sVar2 != 0) && (sVar2 != -1)) break;
        uVar24 = (uint)pFVar25 + 1;
        pFVar25 = (FDisplaceMeshOp *)(ulonglong)uVar24;
      } while ((int)uVar24 < (int)uVar27);
      goto LAB_14cc02bd8;
    }
  }
joined_r0x00014cc02bdb:
  if (uVar24 != uVar27) {
    do {
      if ((local_438.Object == (FDynamicMesh3 *)0x0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar16)) {
        pcVar8 = (code *)swi(3);
        uVar17 = (*pcVar8)();
        return (bool)uVar17;
      }
      uVar24 = (uint)pFVar25;
      lVar26 = (longlong)(int)uVar24;
      uVar20 = (ulonglong)(uVar24 & 0x1ff);
      lVar7 = *(longlong *)
               (((local_438.Object)->Vertices).Blocks.AllocatorInstance.Data +
               ((ulonglong)pFVar25 >> 9) * 8);
      pdVar1 = (double *)(lVar7 + uVar20 * 0x18);
      local_3b8 = *pdVar1;
      dStack_3b0 = pdVar1[1];
      local_3a8 = *(double *)(lVar7 + 0x10 + uVar20 * 0x18);
      lVar7 = *(longlong *)(puVar5[2] + ((ulonglong)pFVar25 >> 9) * 8);
      pdVar1 = (double *)(lVar7 + uVar20 * 0x18);
      local_3d0 = *pdVar1;
      dStack_3c8 = pdVar1[1];
      local_3c0 = *(double *)(lVar7 + 0x10 + uVar20 * 0x18);
      uVar18 = 0;
      if ((int)uVar24 < local_428.Normals.ArrayNum) {
        uVar18 = ~uVar24 >> 0x1f;
      }
      dVar10 = SQRT((dStack_3b0 - dStack_3c8) * (dStack_3b0 - dStack_3c8) +
                    (local_3b8 - local_3d0) * (local_3b8 - local_3d0) +
                    (local_3a8 - local_3c0) * (local_3a8 - local_3c0));
      if ((uVar18 == 0) &&
         (local_448 = lVar26, local_440 = (longlong)local_428.Normals.ArrayNum,
         bVar16 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar16)) {
        pcVar8 = (code *)swi(3);
        uVar17 = (*pcVar8)();
        return (bool)uVar17;
      }
      local_3c0 = *(double *)(local_428.Normals.AllocatorInstance.Data + lVar26 * 0x18 + 0x10);
      dVar9 = (double)local_2e8._64_8_ *
              *(double *)(local_428.Normals.AllocatorInstance.Data + lVar26 * 0x18 + 8) +
              (double)local_2e8._56_8_ *
              *(double *)(local_428.Normals.AllocatorInstance.Data + lVar26 * 0x18) +
              (double)local_2e8._72_8_ * local_3c0;
      if (dVar14 <= dVar9) {
        if (dVar12 < dVar9) {
          ::FString::FString(&local_3f0,
                             "Vertex whose normal matches the filter direction should move");
          FVar21.Data = (FScriptContainerElement *)L"";
          if (local_3f0.Data.ArrayNum != 0) {
            FVar21.Data = local_3f0.Data.AllocatorInstance.Data;
          }
          bVar16 = FAutomationTestBase::TestTrue
                             ((FAutomationTestBase *)this,(wchar_t *)FVar21.Data,dVar13 < dVar10);
          FVar21.Data = local_3f0.Data.AllocatorInstance.Data;
          goto LAB_14cc02dcb;
        }
      }
      else {
        ::FString::FString(&local_400,
                           "Vertex whose normal doesn\'t match the filter direction should not move"
                          );
        FVar21.Data = (FScriptContainerElement *)L"";
        if (local_400.Data.ArrayNum != 0) {
          FVar21.Data = local_400.Data.AllocatorInstance.Data;
        }
        bVar16 = FAutomationTestBase::TestTrue
                           ((FAutomationTestBase *)this,(wchar_t *)FVar21.Data,dVar10 <= dVar11);
        FVar21.Data = local_400.Data.AllocatorInstance.Data;
LAB_14cc02dcb:
        if (FVar21.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FVar21.Data);
        }
        if (bVar16 == false) goto LAB_14cc02e2c;
      }
      uVar24 = uVar24 + 1;
      pFVar25 = (FDisplaceMeshOp *)(ulonglong)uVar24;
      if ((int)uVar27 <= (int)uVar24) goto joined_r0x00014cc02bdb;
      while( true ) {
        uVar20 = (ulonglong)((uint)pFVar25 & 0x1ff);
        lVar7 = *(longlong *)
                 ((pFVar15->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                 ((ulonglong)pFVar25 >> 9) * 8);
        if ((*(short *)(lVar7 + uVar20 * 2) != 0) && (*(short *)(lVar7 + uVar20 * 2) != -1)) break;
        uVar24 = (uint)pFVar25 + 1;
        pFVar25 = (FDisplaceMeshOp *)(ulonglong)uVar24;
        if ((int)uVar27 <= (int)uVar24) goto joined_r0x00014cc02bdb;
      }
    } while( true );
  }
  bVar16 = true;
LAB_14cc02e2f:
  (**(code **)*puVar5)(puVar5,1);
  DestructItems<FProgressCancel::FMessageInfo,int>(local_2f8,(int)local_2f0);
  if (local_2f8 != (FMessageInfo *)0x0) {
    FMemory::Free(local_2f8);
  }
  if (local_328 != (code *)0x0) {
    pppuVar22 = &local_318;
    if (local_300 != (undefined ***)0x0) {
      pppuVar22 = local_300;
    }
    (*(code *)(*pppuVar22)[2])();
  }
  DeleteCriticalSection(&local_358);
  if (local_370.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_370.TextData.Reference + 0x10))();
  }
  if (local_380.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_380.TextData.Reference + 0x10))();
  }
  (**(code **)pFVar19->_padding_)(pFVar19,1);
  DisplaceMeshToolLocals::DisplaceMeshParameters::~DisplaceMeshParameters(&local_1c8.Parameters);
  local_1c8._padding_ = (longlong)&___7IDynamicMeshOperatorFactory_Geometry_UE__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1d0.ReferenceController);
  if (local_2e8._224_8_ != 0) {
    plVar23 = (longlong *)(local_2e8 + 0xf0);
    if ((longlong *)local_2e8._264_8_ != (longlong *)0x0) {
      plVar23 = (longlong *)local_2e8._264_8_;
    }
    (**(code **)(*plVar23 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_2e8._216_8_);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_2e8._200_8_);
  if ((FScriptContainerElement *)local_2e8._144_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_2e8._144_8_);
  }
  if ((FScriptContainerElement *)local_2e8._88_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_2e8._88_8_);
  }
  if (local_428.Normals.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_428.Normals.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_438.SharedReferenceCount.ReferenceController);
  return bVar16;
}

// GetBeautifiedTestName @ 14cc02fd0

FString * __thiscall
UDisplaceMeshTestDirectionalFilter::GetBeautifiedTestName
          (UDisplaceMeshTestDirectionalFilter *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"MeshModeling.DisplaceMesh.Directional Filter");
  return __return_storage_ptr__;
}

