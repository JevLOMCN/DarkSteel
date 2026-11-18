// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 8

// GetTestFlags @ 14cc00110

EAutomationTestFlags __thiscall UDisplaceMeshTestRandom::GetTestFlags(UDisplaceMeshTestRandom *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 14cc00120

bool __thiscall UDisplaceMeshTestRandom::IsStressTest(UDisplaceMeshTestRandom *this)

{
  return false;
}

// GetRequiredDeviceNum @ 14cc00130

uint __thiscall UDisplaceMeshTestRandom::GetRequiredDeviceNum(UDisplaceMeshTestRandom *this)

{
  return 1;
}

// GetTestSourceFileName @ 14cc00140

FString * __thiscall
UDisplaceMeshTestRandom::GetTestSourceFileName
          (UDisplaceMeshTestRandom *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\Tests\\DisplaceMeshTool_Tests.inl"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 14cc00170

int __thiscall UDisplaceMeshTestRandom::GetTestSourceFileLine(UDisplaceMeshTestRandom *this)

{
  return 0x5b;
}

// GetTests @ 14cc00180

/* WARNING: Removing unreachable block (ram,0x00014cc0026d) */
/* WARNING: Removing unreachable block (ram,0x00014cc00338) */

void __thiscall
UDisplaceMeshTestRandom::GetTests
          (UDisplaceMeshTestRandom *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"MeshModeling.DisplaceMesh.Random Displace Type");
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

// RunTest @ 14cc00360

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall UDisplaceMeshTestRandom::RunTest(UDisplaceMeshTestRandom *this,FString *param_1)

{
  double dVar1;
  double dVar2;
  undefined8 *puVar3;
  double *pdVar4;
  code *pcVar5;
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
  undefined1 auStack_3c8 [32];
  TSharedPtr<UE::Geometry::FDynamicMesh3,1> local_3a8;
  FString local_398;
  TSharedPtr<UE::Geometry::FDynamicMesh3,1> local_388 [4];
  undefined1 local_348 [8];
  undefined4 local_340;
  undefined8 local_33c;
  FText local_330;
  FText local_320;
  undefined4 local_310;
  undefined4 local_30c;
  _RTL_CRITICAL_SECTION local_308;
  code *local_2d8;
  undefined **local_2c8;
  code *local_2c0;
  undefined ***local_2b0;
  FMessageInfo *local_2a8;
  undefined8 local_2a0;
  undefined1 local_298 [280];
  FSharedReferencer<1> local_180;
  FDisplaceMeshOpFactory local_178;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_3c8;
  DisplaceMeshToolTestsLocals::CreateSingleTriangleMesh(&local_3a8);
  DisplaceMeshToolLocals::DisplaceMeshParameters::DisplaceMeshParameters
            ((DisplaceMeshParameters *)local_298);
  local_298._0_4_ = 100.0;
  local_298._4_4_ = 100;
  DisplaceMeshToolLocals::FDisplaceMeshOpFactory::FDisplaceMeshOpFactory
            (&local_178,&local_3a8,(DisplaceMeshParameters *)local_298,RandomNoise);
  this_00 = ::operator_new(0x200);
  pFVar12 = (FDisplaceMeshOp *)0x0;
  if (this_00 != (FDisplaceMeshOp *)0x0) {
    local_388[0].Object = (local_178.SourceMesh)->Object;
    local_388[0].SharedReferenceCount.ReferenceController =
         ((local_178.SourceMesh)->SharedReferenceCount).ReferenceController;
    if (local_388[0].SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
    {
      LOCK();
      (local_388[0].SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_388[0].SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar12 = DisplaceMeshToolLocals::FDisplaceMeshOp::FDisplaceMeshOp
                        (this_00,local_388,&local_178.Parameters,local_178.DisplacementType);
  }
  local_348[0] = 0;
  local_340 = 0;
  local_33c = 0x3f800000;
  FText::FText(&local_330);
  FText::FText(&local_320);
  local_310 = 0xffffffff;
  local_30c = 0;
  InitializeCriticalSectionAndSpinCount(&local_308,4000);
  local_2b0 = (undefined ***)0x0;
  local_2c8 = &___7__TFunction_OwnedObject_P6A_NXZ_0A__0A__Function_Private_Core_UE__6B_;
  local_2a8 = (FMessageInfo *)0x0;
  local_2c0 = FProgressCancel::<lambda_25_>::<lambda_invoker_cdecl>;
  local_2a0 = 0;
  local_2d8 = UE::Core::Private::Function::TFunctionRefCaller<bool_(__cdecl*)(void),bool>::Call;
  (**(code **)(pFVar12->_padding_ + 0x18))(pFVar12,local_348);
  puVar3 = (undefined8 *)pFVar12->_padding_;
  pFVar12->_padding_ = 0;
  if ((local_3a8.Object == (FDynamicMesh3 *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar10)) {
    pcVar5 = (code *)swi(3);
    uVar11 = (*pcVar5)();
    return (bool)uVar11;
  }
  pdVar4 = *(double **)((local_3a8.Object)->Vertices).Blocks.AllocatorInstance.Data;
  dVar6 = *pdVar4;
  dVar7 = pdVar4[1];
  dVar1 = pdVar4[2];
  pdVar4 = *(double **)puVar3[2];
  dVar8 = *pdVar4;
  dVar9 = pdVar4[1];
  dVar2 = pdVar4[2];
  ::FString::FString(&local_398,"Mesh vertex moved");
  FVar15.Data = (FScriptContainerElement *)L"";
  if (local_398.Data.ArrayNum != 0) {
    FVar15.Data = local_398.Data.AllocatorInstance.Data;
  }
  bVar10 = FAutomationTestBase::TestTrue
                     ((FAutomationTestBase *)this,(wchar_t *)FVar15.Data,
                      __real_3f1a36e2eb1c432d <
                      SQRT((dVar7 - dVar9) * (dVar7 - dVar9) + (dVar6 - dVar8) * (dVar6 - dVar8) +
                           (dVar1 - dVar2) * (dVar1 - dVar2)));
  if (local_398.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_398.Data.AllocatorInstance.Data);
  }
  (**(code **)*puVar3)(puVar3,1);
  DestructItems<FProgressCancel::FMessageInfo,int>(local_2a8,(int)local_2a0);
  if (local_2a8 != (FMessageInfo *)0x0) {
    FMemory::Free(local_2a8);
  }
  if (local_2d8 != (code *)0x0) {
    pppuVar13 = &local_2c8;
    if (local_2b0 != (undefined ***)0x0) {
      pppuVar13 = local_2b0;
    }
    (*(code *)(*pppuVar13)[2])();
  }
  DeleteCriticalSection(&local_308);
  if (local_320.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_320.TextData.Reference + 0x10))();
  }
  if (local_330.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_330.TextData.Reference + 0x10))();
  }
  (**(code **)pFVar12->_padding_)(pFVar12,1);
  DisplaceMeshToolLocals::DisplaceMeshParameters::~DisplaceMeshParameters(&local_178.Parameters);
  local_178._padding_ = (longlong)&___7IDynamicMeshOperatorFactory_Geometry_UE__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_180.ReferenceController);
  if (local_298._224_8_ != 0) {
    plVar14 = (longlong *)(local_298 + 0xf0);
    if ((longlong *)local_298._264_8_ != (longlong *)0x0) {
      plVar14 = (longlong *)local_298._264_8_;
    }
    (**(code **)(*plVar14 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_298._216_8_);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_298._200_8_);
  if ((FScriptContainerElement *)local_298._144_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_298._144_8_);
  }
  if ((FScriptContainerElement *)local_298._88_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_298._88_8_);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3a8.SharedReferenceCount.ReferenceController);
  return bVar10;
}

// GetBeautifiedTestName @ 14cc006b0

FString * __thiscall
UDisplaceMeshTestRandom::GetBeautifiedTestName
          (UDisplaceMeshTestRandom *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"MeshModeling.DisplaceMesh.Random Displace Type");
  return __return_storage_ptr__;
}

