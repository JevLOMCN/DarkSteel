// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 8

// GetTestFlags @ 14cc01040

EAutomationTestFlags __thiscall UDisplaceMeshTestSine::GetTestFlags(UDisplaceMeshTestSine *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 14cc01050

bool __thiscall UDisplaceMeshTestSine::IsStressTest(UDisplaceMeshTestSine *this)

{
  return false;
}

// GetRequiredDeviceNum @ 14cc01060

uint __thiscall UDisplaceMeshTestSine::GetRequiredDeviceNum(UDisplaceMeshTestSine *this)

{
  return 1;
}

// GetTestSourceFileName @ 14cc01070

FString * __thiscall
UDisplaceMeshTestSine::GetTestSourceFileName
          (UDisplaceMeshTestSine *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\Tests\\DisplaceMeshTool_Tests.inl"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 14cc010a0

int __thiscall UDisplaceMeshTestSine::GetTestSourceFileLine(UDisplaceMeshTestSine *this)

{
  return 0xa4;
}

// GetTests @ 14cc010b0

/* WARNING: Removing unreachable block (ram,0x00014cc0119d) */
/* WARNING: Removing unreachable block (ram,0x00014cc01268) */

void __thiscall
UDisplaceMeshTestSine::GetTests
          (UDisplaceMeshTestSine *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"MeshModeling.DisplaceMesh.Sine Displace Type");
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

// RunTest @ 14cc01290

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall UDisplaceMeshTestSine::RunTest(UDisplaceMeshTestSine *this,FString *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  bool bVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  bool bVar9;
  undefined1 uVar10;
  FDisplaceMeshOp *this_00;
  FDisplaceMeshOp *pFVar11;
  undefined ***pppuVar12;
  longlong *plVar13;
  ForAnyElementType FVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  undefined1 auStack_428 [32];
  TSharedPtr<UE::Geometry::FDynamicMesh3,1> local_408;
  TSharedPtr<UE::Geometry::FDynamicMesh3,1> local_3f0;
  FString local_3e0;
  FString local_3d0;
  FString local_3c0;
  undefined8 local_3b0;
  undefined8 uStack_3a8;
  double local_3a0;
  undefined8 local_398;
  undefined8 uStack_390;
  double local_388;
  undefined8 local_380;
  undefined8 uStack_378;
  double local_370;
  undefined1 local_368 [8];
  undefined4 local_360;
  undefined8 local_35c;
  FText local_350;
  FText local_340;
  undefined4 local_330;
  undefined4 local_32c;
  _RTL_CRITICAL_SECTION local_328;
  code *local_2f8;
  undefined **local_2e8;
  code *local_2e0;
  undefined ***local_2d0;
  FMessageInfo *local_2c8;
  undefined8 local_2c0;
  undefined1 local_2b8 [280];
  FSharedReferencer<1> local_1a0;
  FDisplaceMeshOpFactory local_198;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_428;
  DisplaceMeshToolTestsLocals::CreateSingleTriangleMesh(&local_3f0);
  DisplaceMeshToolLocals::DisplaceMeshParameters::DisplaceMeshParameters
            ((DisplaceMeshParameters *)local_2b8);
  local_2b8._32_8_ = ___xmm_3ff00000000000000000000000000000;
  local_2b8._40_8_ = _UNK_15061cbc8;
  local_2b8._24_8_ = 0.0;
  local_2b8._0_4_ = 1.0;
  local_2b8._16_4_ = 1.0;
  local_2b8._20_4_ = 0.0;
  DisplaceMeshToolLocals::FDisplaceMeshOpFactory::FDisplaceMeshOpFactory
            (&local_198,&local_3f0,(DisplaceMeshParameters *)local_2b8,SineWave);
  this_00 = ::operator_new(0x200);
  pFVar11 = (FDisplaceMeshOp *)0x0;
  if (this_00 != (FDisplaceMeshOp *)0x0) {
    local_408.Object = (local_198.SourceMesh)->Object;
    local_408.SharedReferenceCount.ReferenceController =
         ((local_198.SourceMesh)->SharedReferenceCount).ReferenceController;
    if (local_408.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_408.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_408.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar11 = DisplaceMeshToolLocals::FDisplaceMeshOp::FDisplaceMeshOp
                        (this_00,&local_408,&local_198.Parameters,local_198.DisplacementType);
  }
  local_368[0] = 0;
  local_360 = 0;
  local_35c = 0x3f800000;
  FText::FText(&local_350);
  FText::FText(&local_340);
  local_330 = 0xffffffff;
  local_32c = 0;
  InitializeCriticalSectionAndSpinCount(&local_328,4000);
  local_2d0 = (undefined ***)0x0;
  local_2e8 = &___7__TFunction_OwnedObject_P6A_NXZ_0A__0A__Function_Private_Core_UE__6B_;
  local_2c8 = (FMessageInfo *)0x0;
  local_2e0 = FProgressCancel::<lambda_25_>::<lambda_invoker_cdecl>;
  local_2c0 = 0;
  local_2f8 = UE::Core::Private::Function::TFunctionRefCaller<bool_(__cdecl*)(void),bool>::Call;
  (**(code **)(pFVar11->_padding_ + 0x18))(pFVar11,local_368);
  puVar1 = (undefined8 *)pFVar11->_padding_;
  pFVar11->_padding_ = 0;
  puVar2 = *(undefined8 **)puVar1[2];
  local_3b0 = *puVar2;
  uStack_3a8 = puVar2[1];
  local_3a0 = (double)puVar2[2];
  local_398 = puVar2[3];
  uStack_390 = puVar2[4];
  local_388 = (double)puVar2[5];
  local_380 = puVar2[6];
  uStack_378 = puVar2[7];
  local_370 = (double)puVar2[8];
  if ((local_3f0.Object == (FDynamicMesh3 *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    uVar10 = (*pcVar5)();
    return (bool)uVar10;
  }
  uVar18 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar16 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  lVar3 = *(longlong *)((local_3f0.Object)->Vertices).Blocks.AllocatorInstance.Data;
  dVar6 = local_3a0 - *(double *)(lVar3 + 0x10);
  dVar7 = *(double *)(lVar3 + 0x28) + ___real_3feaed548f090cee;
  dVar8 = *(double *)(lVar3 + 0x40) + ___real_3feaed548f090cee;
  uVar15 = SUB84(dVar6,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar17 = (uint)((ulonglong)dVar6 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  bVar9 = (double)CONCAT44(uVar17,uVar15) == __real_3f1a36e2eb1c432d;
  bVar4 = (double)CONCAT44(uVar17,uVar15) < __real_3f1a36e2eb1c432d;
  ::FString::FString(&local_3e0,"Sine displacement computed as expected");
  FVar14.Data = (FScriptContainerElement *)L"";
  if (local_3e0.Data.ArrayNum != 0) {
    FVar14.Data = local_3e0.Data.AllocatorInstance.Data;
  }
  bVar9 = FAutomationTestBase::TestTrue
                    ((FAutomationTestBase *)this,(wchar_t *)FVar14.Data,bVar4 || bVar9);
  if (local_3e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3e0.Data.AllocatorInstance.Data);
  }
  if (bVar9) {
    dVar7 = local_388 - dVar7;
    uVar16 = SUB84(dVar7,0) & uVar16;
    uVar18 = (uint)((ulonglong)dVar7 >> 0x20) & uVar18;
    bVar9 = (double)CONCAT44(uVar18,uVar16) == __real_3f1a36e2eb1c432d;
    bVar4 = (double)CONCAT44(uVar18,uVar16) < __real_3f1a36e2eb1c432d;
    ::FString::FString(&local_3d0,"Sine displacement computed as expected");
    FVar14.Data = (FScriptContainerElement *)L"";
    if (local_3d0.Data.ArrayNum != 0) {
      FVar14.Data = local_3d0.Data.AllocatorInstance.Data;
    }
    bVar9 = FAutomationTestBase::TestTrue
                      ((FAutomationTestBase *)this,(wchar_t *)FVar14.Data,bVar4 || bVar9);
    if (local_3d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3d0.Data.AllocatorInstance.Data);
    }
    if (bVar9) {
      dVar8 = local_370 - dVar8;
      uVar16 = SUB84(dVar8,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
      uVar18 = (uint)((ulonglong)dVar8 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
      bVar9 = (double)CONCAT44(uVar18,uVar16) == __real_3f1a36e2eb1c432d;
      bVar4 = (double)CONCAT44(uVar18,uVar16) < __real_3f1a36e2eb1c432d;
      ::FString::FString(&local_3c0,"Sine displacement computed as expected");
      FVar14.Data = (FScriptContainerElement *)L"";
      if (local_3c0.Data.ArrayNum != 0) {
        FVar14.Data = local_3c0.Data.AllocatorInstance.Data;
      }
      bVar9 = FAutomationTestBase::TestTrue
                        ((FAutomationTestBase *)this,(wchar_t *)FVar14.Data,bVar4 || bVar9);
      if (local_3c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_3c0.Data.AllocatorInstance.Data);
      }
      if (bVar9) {
        bVar9 = true;
        goto LAB_14cc015bd;
      }
    }
  }
  bVar9 = false;
LAB_14cc015bd:
  (**(code **)*puVar1)(puVar1,1);
  DestructItems<FProgressCancel::FMessageInfo,int>(local_2c8,(int)local_2c0);
  if (local_2c8 != (FMessageInfo *)0x0) {
    FMemory::Free(local_2c8);
  }
  if (local_2f8 != (code *)0x0) {
    pppuVar12 = &local_2e8;
    if (local_2d0 != (undefined ***)0x0) {
      pppuVar12 = local_2d0;
    }
    (*(code *)(*pppuVar12)[2])();
  }
  DeleteCriticalSection(&local_328);
  if (local_340.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_340.TextData.Reference + 0x10))();
  }
  if (local_350.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_350.TextData.Reference + 0x10))();
  }
  (**(code **)pFVar11->_padding_)(pFVar11,1);
  DisplaceMeshToolLocals::DisplaceMeshParameters::~DisplaceMeshParameters(&local_198.Parameters);
  local_198._padding_ = (longlong)&___7IDynamicMeshOperatorFactory_Geometry_UE__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1a0.ReferenceController);
  if (local_2b8._224_8_ != 0) {
    plVar13 = (longlong *)(local_2b8 + 0xf0);
    if ((longlong *)local_2b8._264_8_ != (longlong *)0x0) {
      plVar13 = (longlong *)local_2b8._264_8_;
    }
    (**(code **)(*plVar13 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_2b8._216_8_);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_2b8._200_8_);
  if ((FScriptContainerElement *)local_2b8._144_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_2b8._144_8_);
  }
  if ((FScriptContainerElement *)local_2b8._88_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_2b8._88_8_);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3f0.SharedReferenceCount.ReferenceController);
  return bVar9;
}

// GetBeautifiedTestName @ 14cc01710

FString * __thiscall
UDisplaceMeshTestSine::GetBeautifiedTestName
          (UDisplaceMeshTestSine *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"MeshModeling.DisplaceMesh.Sine Displace Type");
  return __return_storage_ptr__;
}

