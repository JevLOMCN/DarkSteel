// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 8

// GetTestFlags @ 14cc01900

EAutomationTestFlags __thiscall
UDisplaceMeshTestSineDirection::GetTestFlags(UDisplaceMeshTestSineDirection *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 14cc01910

bool __thiscall UDisplaceMeshTestSineDirection::IsStressTest(UDisplaceMeshTestSineDirection *this)

{
  return false;
}

// GetRequiredDeviceNum @ 14cc01920

uint __thiscall
UDisplaceMeshTestSineDirection::GetRequiredDeviceNum(UDisplaceMeshTestSineDirection *this)

{
  return 1;
}

// GetTestSourceFileName @ 14cc01930

FString * __thiscall
UDisplaceMeshTestSineDirection::GetTestSourceFileName
          (UDisplaceMeshTestSineDirection *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\Tests\\DisplaceMeshTool_Tests.inl"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 14cc01960

int __thiscall
UDisplaceMeshTestSineDirection::GetTestSourceFileLine(UDisplaceMeshTestSineDirection *this)

{
  return 0xd1;
}

// GetTests @ 14cc01970

/* WARNING: Removing unreachable block (ram,0x00014cc01a5d) */
/* WARNING: Removing unreachable block (ram,0x00014cc01b28) */

void __thiscall
UDisplaceMeshTestSineDirection::GetTests
          (UDisplaceMeshTestSineDirection *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1
          ,TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"MeshModeling.DisplaceMesh.Sine Displace with Direction");
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

// RunTest @ 14cc01b50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
UDisplaceMeshTestSineDirection::RunTest(UDisplaceMeshTestSineDirection *this,FString *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  bool bVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  bool bVar10;
  undefined1 uVar11;
  FDisplaceMeshOp *this_00;
  FDisplaceMeshOp *pFVar12;
  undefined ***pppuVar13;
  longlong *plVar14;
  ForAnyElementType FVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  undefined1 auStack_418 [32];
  TSharedPtr<UE::Geometry::FDynamicMesh3,1> local_3f8;
  FString local_3e8;
  undefined8 local_3d8;
  FString local_3d0;
  FString local_3c0;
  TSharedPtr<UE::Geometry::FDynamicMesh3,1> local_3b0;
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
  
  local_88 = __security_cookie.value ^ (ulonglong)auStack_418;
  DisplaceMeshToolTestsLocals::CreateSingleTriangleMesh(&local_3f8);
  DisplaceMeshToolLocals::DisplaceMeshParameters::DisplaceMeshParameters
            ((DisplaceMeshParameters *)local_2e8);
  local_2e8._32_8_ = ___xmm_00000000000000003ff0000000000000;
  local_2e8._40_8_ = _UNK_150689518;
  local_2e8._24_8_ = 0.0;
  local_2e8._0_4_ = 1.0;
  local_2e8._16_4_ = 1.0;
  local_2e8._20_4_ = 0.0;
  DisplaceMeshToolLocals::FDisplaceMeshOpFactory::FDisplaceMeshOpFactory
            (&local_1c8,&local_3f8,(DisplaceMeshParameters *)local_2e8,SineWave);
  this_00 = ::operator_new(0x200);
  pFVar12 = (FDisplaceMeshOp *)0x0;
  if (this_00 != (FDisplaceMeshOp *)0x0) {
    local_3b0.Object = (local_1c8.SourceMesh)->Object;
    local_3b0.SharedReferenceCount.ReferenceController =
         ((local_1c8.SourceMesh)->SharedReferenceCount).ReferenceController;
    if (local_3b0.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_3b0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_3b0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar12 = DisplaceMeshToolLocals::FDisplaceMeshOp::FDisplaceMeshOp
                        (this_00,&local_3b0,&local_1c8.Parameters,local_1c8.DisplacementType);
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
  (**(code **)(pFVar12->_padding_ + 0x18))(pFVar12,local_398);
  puVar1 = (undefined8 *)pFVar12->_padding_;
  pFVar12->_padding_ = 0;
  lVar2 = *(longlong *)puVar1[2];
  dVar7 = *(double *)(lVar2 + 8);
  dVar6 = *(double *)(lVar2 + 0x20);
  dVar5 = *(double *)(lVar2 + 0x38);
  local_3d8 = *(undefined8 *)(lVar2 + 0x40);
  if ((local_3f8.Object == (FDynamicMesh3 *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar10)) {
    pcVar4 = (code *)swi(3);
    uVar11 = (*pcVar4)();
    return (bool)uVar11;
  }
  uVar17 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar16 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  lVar2 = *(longlong *)((local_3f8.Object)->Vertices).Blocks.AllocatorInstance.Data;
  dVar7 = dVar7 - *(double *)(lVar2 + 8);
  dVar9 = *(double *)(lVar2 + 0x20);
  dVar8 = *(double *)(lVar2 + 0x38) + ___real_3feaed548f090cee;
  uVar18 = SUB84(dVar7,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar19 = (uint)((ulonglong)dVar7 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  bVar10 = (double)CONCAT44(uVar19,uVar18) == __real_3f1a36e2eb1c432d;
  bVar3 = (double)CONCAT44(uVar19,uVar18) < __real_3f1a36e2eb1c432d;
  ::FString::FString(&local_3d0,"Y-axis sine displacement computed as expected");
  FVar15.Data = (FScriptContainerElement *)L"";
  if (local_3d0.Data.ArrayNum != 0) {
    FVar15.Data = local_3d0.Data.AllocatorInstance.Data;
  }
  bVar10 = FAutomationTestBase::TestTrue
                     ((FAutomationTestBase *)this,(wchar_t *)FVar15.Data,bVar3 || bVar10);
  if (local_3d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3d0.Data.AllocatorInstance.Data);
  }
  if (bVar10) {
    dVar6 = dVar6 - dVar9;
    uVar16 = SUB84(dVar6,0) & uVar16;
    uVar17 = (uint)((ulonglong)dVar6 >> 0x20) & uVar17;
    bVar10 = (double)CONCAT44(uVar17,uVar16) == __real_3f1a36e2eb1c432d;
    bVar3 = (double)CONCAT44(uVar17,uVar16) < __real_3f1a36e2eb1c432d;
    ::FString::FString(&local_3c0,"Y-axis sine displacement computed as expected");
    FVar15.Data = (FScriptContainerElement *)L"";
    if (local_3c0.Data.ArrayNum != 0) {
      FVar15.Data = local_3c0.Data.AllocatorInstance.Data;
    }
    bVar10 = FAutomationTestBase::TestTrue
                       ((FAutomationTestBase *)this,(wchar_t *)FVar15.Data,bVar3 || bVar10);
    if (local_3c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3c0.Data.AllocatorInstance.Data);
    }
    if (bVar10) {
      dVar5 = dVar5 - dVar8;
      uVar16 = SUB84(dVar5,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
      uVar17 = (uint)((ulonglong)dVar5 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
      bVar10 = (double)CONCAT44(uVar17,uVar16) == __real_3f1a36e2eb1c432d;
      bVar3 = (double)CONCAT44(uVar17,uVar16) < __real_3f1a36e2eb1c432d;
      ::FString::FString(&local_3e8,"Y-axis sine displacement computed as expected");
      FVar15.Data = (FScriptContainerElement *)L"";
      if (local_3e8.Data.ArrayNum != 0) {
        FVar15.Data = local_3e8.Data.AllocatorInstance.Data;
      }
      bVar10 = FAutomationTestBase::TestTrue
                         ((FAutomationTestBase *)this,(wchar_t *)FVar15.Data,bVar3 || bVar10);
      if (local_3e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_3e8.Data.AllocatorInstance.Data);
      }
      if (bVar10) {
        bVar10 = true;
        goto LAB_14cc01e77;
      }
    }
  }
  bVar10 = false;
LAB_14cc01e77:
  (**(code **)*puVar1)(puVar1,1);
  DestructItems<FProgressCancel::FMessageInfo,int>(local_2f8,(int)local_2f0);
  if (local_2f8 != (FMessageInfo *)0x0) {
    FMemory::Free(local_2f8);
  }
  if (local_328 != (code *)0x0) {
    pppuVar13 = &local_318;
    if (local_300 != (undefined ***)0x0) {
      pppuVar13 = local_300;
    }
    (*(code *)(*pppuVar13)[2])();
  }
  DeleteCriticalSection(&local_358);
  if (local_370.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_370.TextData.Reference + 0x10))();
  }
  if (local_380.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_380.TextData.Reference + 0x10))();
  }
  (**(code **)pFVar12->_padding_)(pFVar12,1);
  DisplaceMeshToolLocals::DisplaceMeshParameters::~DisplaceMeshParameters(&local_1c8.Parameters);
  local_1c8._padding_ = (longlong)&___7IDynamicMeshOperatorFactory_Geometry_UE__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1d0.ReferenceController);
  if (local_2e8._224_8_ != 0) {
    plVar14 = (longlong *)(local_2e8 + 0xf0);
    if ((longlong *)local_2e8._264_8_ != (longlong *)0x0) {
      plVar14 = (longlong *)local_2e8._264_8_;
    }
    (**(code **)(*plVar14 + 0x10))();
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
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3f8.SharedReferenceCount.ReferenceController);
  return bVar10;
}

// GetBeautifiedTestName @ 14cc01fe0

FString * __thiscall
UDisplaceMeshTestSineDirection::GetBeautifiedTestName
          (UDisplaceMeshTestSineDirection *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"MeshModeling.DisplaceMesh.Sine Displace with Direction"
                    );
  return __return_storage_ptr__;
}

