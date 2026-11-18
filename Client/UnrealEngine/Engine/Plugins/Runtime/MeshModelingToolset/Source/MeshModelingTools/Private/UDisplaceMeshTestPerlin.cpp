// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 8

// GetTestFlags @ 14cc00720

EAutomationTestFlags __thiscall UDisplaceMeshTestPerlin::GetTestFlags(UDisplaceMeshTestPerlin *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 14cc00730

bool __thiscall UDisplaceMeshTestPerlin::IsStressTest(UDisplaceMeshTestPerlin *this)

{
  return false;
}

// GetRequiredDeviceNum @ 14cc00740

uint __thiscall UDisplaceMeshTestPerlin::GetRequiredDeviceNum(UDisplaceMeshTestPerlin *this)

{
  return 1;
}

// GetTestSourceFileName @ 14cc00750

FString * __thiscall
UDisplaceMeshTestPerlin::GetTestSourceFileName
          (UDisplaceMeshTestPerlin *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\Tests\\DisplaceMeshTool_Tests.inl"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 14cc00780

int __thiscall UDisplaceMeshTestPerlin::GetTestSourceFileLine(UDisplaceMeshTestPerlin *this)

{
  return 0x7f;
}

// GetTests @ 14cc00790

/* WARNING: Removing unreachable block (ram,0x00014cc0087d) */
/* WARNING: Removing unreachable block (ram,0x00014cc00948) */

void __thiscall
UDisplaceMeshTestPerlin::GetTests
          (UDisplaceMeshTestPerlin *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"MeshModeling.DisplaceMesh.Perlin Noise Displace Type");
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

// RunTest @ 14cc00970

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall UDisplaceMeshTestPerlin::RunTest(UDisplaceMeshTestPerlin *this,FString *param_1)

{
  undefined8 *puVar1;
  double *pdVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  bool bVar8;
  undefined1 uVar9;
  FDisplaceMeshOp *this_00;
  FDisplaceMeshOp *pFVar10;
  undefined ***pppuVar11;
  longlong *plVar12;
  ForAnyElementType FVar13;
  double dVar14;
  undefined1 auStack_408 [32];
  undefined4 *local_3e8;
  FScriptContainerElement *local_3e0;
  longlong local_3d8;
  longlong local_3d0;
  undefined8 local_3c8;
  undefined4 local_3b8;
  undefined4 uStack_3b4;
  TSharedPtr<UE::Geometry::FDynamicMesh3,1> local_3b0;
  FString local_3a0;
  TSharedPtr<UE::Geometry::FDynamicMesh3,1> local_390 [2];
  double local_370;
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
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_408;
  DisplaceMeshToolTestsLocals::CreateSingleTriangleMesh(&local_3b0);
  DisplaceMeshToolLocals::DisplaceMeshParameters::DisplaceMeshParameters
            ((DisplaceMeshParameters *)local_298);
  local_298._4_4_ = 100;
  local_3b8 = 0x3f800000;
  uStack_3b4 = 0x42c80000;
  if (((ulonglong)local_298._144_8_ <= (FScriptContainerElement *)&local_3b8) &&
     ((FScriptContainerElement *)&local_3b8 <
      (FScriptContainerElement *)(local_298._144_8_ + (longlong)(int)local_298._156_4_ * 8))) {
    local_3d0 = (longlong)(int)local_298._152_4_;
    local_3c8 = 8;
    local_3e8 = &local_3b8;
    local_3e0 = (FScriptContainerElement *)local_298._144_8_;
    local_3d8 = (longlong)(int)local_298._156_4_;
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar8) {
      pcVar3 = (code *)swi(3);
      uVar9 = (*pcVar3)();
      return (bool)uVar9;
    }
  }
  if (local_298._152_4_ == local_298._156_4_) {
    local_298._152_4_ =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x408,(ForAnyElementType *)(local_298 + 0x90),(int *)(local_298 + 0x9c));
  }
  *(ulonglong *)(local_298._144_8_ + (longlong)(int)local_298._152_4_ * 8) =
       CONCAT44(uStack_3b4,local_3b8);
  local_298._0_4_ = 1.0;
  local_298._152_4_ = local_298._152_4_ + 1;
  DisplaceMeshToolLocals::FDisplaceMeshOpFactory::FDisplaceMeshOpFactory
            (&local_178,&local_3b0,(DisplaceMeshParameters *)local_298,PerlinNoise);
  this_00 = ::operator_new(0x200);
  pFVar10 = (FDisplaceMeshOp *)0x0;
  if (this_00 != (FDisplaceMeshOp *)0x0) {
    local_390[0].Object = (local_178.SourceMesh)->Object;
    local_390[0].SharedReferenceCount.ReferenceController =
         ((local_178.SourceMesh)->SharedReferenceCount).ReferenceController;
    if (local_390[0].SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
    {
      LOCK();
      (local_390[0].SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_390[0].SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar10 = DisplaceMeshToolLocals::FDisplaceMeshOp::FDisplaceMeshOp
                        (this_00,local_390,&local_178.Parameters,local_178.DisplacementType);
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
  (**(code **)(pFVar10->_padding_ + 0x18))(pFVar10,local_348);
  puVar1 = (undefined8 *)pFVar10->_padding_;
  pFVar10->_padding_ = 0;
  pdVar2 = *(double **)puVar1[2];
  local_370 = pdVar2[2];
  dVar4 = *pdVar2;
  dVar5 = pdVar2[1];
  if ((local_3b0.Object == (FDynamicMesh3 *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar3 = (code *)swi(3);
    uVar9 = (*pcVar3)();
    return (bool)uVar9;
  }
  pdVar2 = *(double **)((local_3b0.Object)->Vertices).Blocks.AllocatorInstance.Data;
  dVar6 = *pdVar2;
  dVar7 = pdVar2[1];
  dVar14 = pdVar2[2] - local_370;
  ::FString::FString(&local_3a0,"Mesh vertex moved");
  FVar13.Data = (FScriptContainerElement *)L"";
  if (local_3a0.Data.ArrayNum != 0) {
    FVar13.Data = local_3a0.Data.AllocatorInstance.Data;
  }
  bVar8 = FAutomationTestBase::TestTrue
                    ((FAutomationTestBase *)this,(wchar_t *)FVar13.Data,
                     __real_3f1a36e2eb1c432d <
                     SQRT((dVar7 - dVar5) * (dVar7 - dVar5) + (dVar6 - dVar4) * (dVar6 - dVar4) +
                          dVar14 * dVar14));
  if (local_3a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3a0.Data.AllocatorInstance.Data);
  }
  (**(code **)*puVar1)(puVar1,1);
  DestructItems<FProgressCancel::FMessageInfo,int>(local_2a8,(int)local_2a0);
  if (local_2a8 != (FMessageInfo *)0x0) {
    FMemory::Free(local_2a8);
  }
  if (local_2d8 != (code *)0x0) {
    pppuVar11 = &local_2c8;
    if (local_2b0 != (undefined ***)0x0) {
      pppuVar11 = local_2b0;
    }
    (*(code *)(*pppuVar11)[2])();
  }
  DeleteCriticalSection(&local_308);
  if (local_320.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_320.TextData.Reference + 0x10))();
  }
  if (local_330.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_330.TextData.Reference + 0x10))();
  }
  (**(code **)pFVar10->_padding_)(pFVar10,1);
  DisplaceMeshToolLocals::DisplaceMeshParameters::~DisplaceMeshParameters(&local_178.Parameters);
  local_178._padding_ = (longlong)&___7IDynamicMeshOperatorFactory_Geometry_UE__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_180.ReferenceController);
  if (local_298._224_8_ != 0) {
    plVar12 = (longlong *)(local_298 + 0xf0);
    if ((longlong *)local_298._264_8_ != (longlong *)0x0) {
      plVar12 = (longlong *)local_298._264_8_;
    }
    (**(code **)(*plVar12 + 0x10))();
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
            (local_3b0.SharedReferenceCount.ReferenceController);
  return bVar8;
}

// GetBeautifiedTestName @ 14cc00d90

FString * __thiscall
UDisplaceMeshTestPerlin::GetBeautifiedTestName
          (UDisplaceMeshTestPerlin *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"MeshModeling.DisplaceMesh.Perlin Noise Displace Type");
  return __return_storage_ptr__;
}

