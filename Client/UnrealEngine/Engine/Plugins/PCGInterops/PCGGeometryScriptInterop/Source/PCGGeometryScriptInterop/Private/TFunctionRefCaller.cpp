// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCGGeometryScriptInterop
// Functions: 17

// Call @ 14cee86f0

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<bool_(__cdecl*)(FPCGContext_*,FPCGGetDataFunctionRegistryParams_const_&,AActor_*,FPCGGetDataFunctionRegistryOutput_&),bool,FPCGContext_*,FPCGGetDataFunctionRegistryParams_const_&,AActor_*,FPCGGetDataFunctionRegistryOutput_&>
::Call(void *param_1,FPCGContext **param_2,FPCGGetDataFunctionRegistryParams *param_3,
      AActor **param_4,FPCGGetDataFunctionRegistryOutput *param_5)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014cee870d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)param_1)(*param_2,param_3,*param_4,param_5);
  return (bool)uVar1;
}

// Call @ 14cee8720

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<bool_(__cdecl*)(FPCGContext_*,FPCGGetDataFunctionRegistryParams_const_&,UActorComponent_*,FPCGGetDataFunctionRegistryOutput_&),bool,FPCGContext_*,FPCGGetDataFunctionRegistryParams_const_&,UActorComponent_*,FPCGGetDataFunctionRegistryOutput_&>
::Call(void *param_1,FPCGContext **param_2,FPCGGetDataFunctionRegistryParams *param_3,
      UActorComponent **param_4,FPCGGetDataFunctionRegistryOutput *param_5)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014cee873d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)param_1)(*param_2,param_3,*param_4,param_5);
  return (bool)uVar1;
}

// Call @ 14cee8750

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FPCGAsync::AsyncProcessingOneToOneRangeEx<`PCGMeshSampler::SampleOnePointPerTriangle'::__l2::<lambda_2>,`PCGMeshSampler::SampleOnePointPerTriangle'::__l2::<lambda_1>_&>'::__l2::<lambda_1>,void,int,int,int>
::Call(void *param_1,int *param_2,int *param_3,int *param_4)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<8796504389880643724>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Helpers\\PCGAsync.h"
                     ,0x8c,"false");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// Call @ 14cee8790

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FPCGAsync::AsyncProcessingOneToOneRangeEx<`PCGMeshSampler::SampleOnePointPerVertex'::__l2::<lambda_2>,`PCGMeshSampler::SampleOnePointPerVertex'::__l2::<lambda_1>_&>'::__l2::<lambda_1>,void,int,int,int>
::Call(void *param_1,int *param_2,int *param_3,int *param_4)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<8796504389880643724>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Helpers\\PCGAsync.h"
                     ,0x8c,"false");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// Call @ 14cee87d0

TVector<double> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``FPCGAppendMeshesFromPointsElement::ExecuteInternal'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>,UE::Math::TVector<double>,int,UE::Math::TVector<double>_const_&>
::Call(TVector<double> *__return_storage_ptr__,void *param_1,int *param_2,TVector<double> *param_3)

{
  undefined1 auVar1 [16];
  undefined1 (*pauVar2) [16];
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined4 uVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  
  pauVar2 = *(undefined1 (**) [16])param_1;
  auVar1 = pauVar2[1];
  dVar5 = (param_3->field0_0x0)._s_0.X * *(double *)pauVar2[4];
  dVar6 = (param_3->field0_0x0)._s_0.Y * *(double *)(pauVar2[4] + 8);
  uVar18 = (undefined4)((ulonglong)dVar6 >> 0x20);
  auVar11 = *pauVar2;
  dVar9 = *(double *)(pauVar2[1] + 8);
  auVar19._8_4_ = SUB84(dVar6,0);
  auVar19._0_8_ = dVar5;
  auVar19._12_4_ = uVar18;
  dVar7 = (param_3->field0_0x0)._s_0.Z * *(double *)pauVar2[5];
  dVar8 = *(double *)(pauVar2[5] + 8) * 0.0;
  auVar13 = blendpd(auVar11,auVar1,2);
  dVar4 = auVar1._0_8_;
  auVar20._0_8_ = auVar19._8_8_ * auVar11._0_8_ - auVar11._8_8_ * dVar5;
  auVar20._8_8_ = dVar7 * auVar11._8_8_ - dVar4 * dVar6;
  auVar21._8_4_ = SUB84(dVar6,0);
  auVar21._0_8_ = dVar5;
  auVar21._12_4_ = uVar18;
  auVar11._8_4_ = SUB84(dVar8,0);
  auVar11._0_8_ = dVar7;
  auVar11._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
  auVar11 = blendpd(auVar21,auVar11,2);
  auVar12._0_8_ = auVar11._0_8_ * dVar4 - auVar13._0_8_ * dVar7;
  auVar12._8_8_ = auVar11._8_8_ * auVar1._8_8_ - auVar13._8_8_ * dVar8;
  auVar11 = *pauVar2;
  auVar21 = blendpd(auVar20,auVar12,2);
  auVar22._0_8_ = auVar21._0_8_ + auVar21._0_8_;
  auVar22._8_8_ = auVar21._8_8_ + auVar21._8_8_;
  dVar8 = auVar20._8_8_ + auVar20._8_8_;
  dVar3 = auVar12._0_8_ + auVar12._0_8_;
  uVar18 = (undefined4)((ulonglong)dVar3 >> 0x20);
  auVar16._8_4_ = SUB84(dVar3,0);
  auVar16._0_8_ = dVar8;
  auVar16._12_4_ = uVar18;
  auVar14._8_4_ = SUB84(dVar3,0);
  auVar14._0_8_ = dVar8;
  auVar14._12_4_ = uVar18;
  auVar21 = blendpd(auVar14,auVar22,2);
  auVar17._0_8_ = auVar16._8_8_ * auVar11._0_8_ - auVar11._8_8_ * dVar8;
  auVar17._8_8_ = auVar22._0_8_ * auVar11._8_8_ - dVar4 * dVar3;
  auVar13._8_4_ = SUB84(auVar17._8_8_,0);
  auVar13._0_8_ = auVar17._0_8_;
  auVar13._12_4_ = (int)((ulonglong)auVar17._8_8_ >> 0x20);
  auVar11 = blendpd(auVar11,auVar1,2);
  dVar10 = *(double *)pauVar2[3];
  auVar15._0_8_ = auVar21._0_8_ * dVar4 - auVar11._0_8_ * auVar22._0_8_;
  auVar15._8_8_ = auVar21._8_8_ * auVar1._8_8_ - auVar11._8_8_ * auVar22._8_8_;
  auVar11 = blendpd(auVar17,auVar15,2);
  dVar4 = dVar3 * dVar9 + dVar6 + auVar15._0_8_ + *(double *)(pauVar2[2] + 8);
  auVar1._8_4_ = SUB84(dVar4,0);
  auVar1._0_8_ = dVar8 * dVar9 + dVar5 + auVar13._8_8_ + *(double *)pauVar2[2];
  auVar1._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
  *(undefined1 (*) [16])&__return_storage_ptr__->field0_0x0 = auVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       auVar22._0_8_ * dVar9 + dVar7 + auVar11._0_8_ + dVar10;
  return __return_storage_ptr__;
}

// Call @ 14cee8910

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`PCGDynamicMeshManagedComponent::GetOrCreateDynamicMeshManagedComponent'::__l2::<lambda_1>,void,UPCGManagedResource_*>
::Call(void *param_1,UPCGManagedResource **param_2)

{
  int iVar1;
  UPCGDynamicMeshManagedComponent *this;
  char cVar2;
  UClass *pUVar3;
  UDynamicMeshComponent *pUVar4;
  
  this = (UPCGDynamicMeshManagedComponent *)*param_2;
  if ((**(longlong **)param_1 == 0) && (this != (UPCGDynamicMeshManagedComponent *)0x0)) {
    pUVar3 = UPCGDynamicMeshManagedComponent::StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(this->_padding_ + 0x38)) &&
       (((longlong *)*(undefined1 **)(*(longlong *)(this->_padding_ + 0x30) + (longlong)iVar1 * 8)
         == &pUVar3->_padding_ && (this->DataUID == (ulonglong)**(uint **)((longlong)param_1 + 8))))
       ) {
      cVar2 = (**(code **)(this->_padding_ + 0x2c8))(this);
      if (cVar2 != '\0') {
        pUVar4 = UPCGDynamicMeshManagedComponent::GetComponent(this);
        if ((pUVar4 != (UDynamicMeshComponent *)0x0) &&
           (pUVar4->_padding_ == *(longlong *)((longlong)param_1 + 0x10))) {
          **(undefined8 **)param_1 = this;
        }
      }
    }
  }
  return;
}

// Call @ 14cee89a0

int __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`PCGMeshSampler::SampleOnePointPerTriangle'::__l2::<lambda_1>,int,int,int,int>::
Call(void *param_1,int *param_2,int *param_3,int *param_4)

{
  int iVar1;
  
  iVar1 = `PCGMeshSampler::SampleOnePointPerTriangle'::__l2::<lambda_1>::operator()
                    (param_1,*param_2,*param_3,*param_4);
  return iVar1;
}

// Call @ 14cee89c0

int __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`PCGMeshSampler::SampleOnePointPerVertex'::__l2::<lambda_1>,int,int,int,int>::
Call(void *param_1,int *param_2,int *param_3,int *param_4)

{
  int iVar1;
  
  iVar1 = `PCGMeshSampler::SampleOnePointPerVertex'::__l2::<lambda_1>::operator()
                    (param_1,*param_2,*param_3,*param_4);
  return iVar1;
}

// Call @ 14cee89e0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Async<`PCGMeshSampler::PoissonSampling'::__l14::<lambda_2>_>'::__l4::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  SetPromise<bool,TUniqueFunction<bool___cdecl(void)>_&>
            ((TPromise<bool> *)((longlong)param_1 + 0x30),param_1);
  return false;
}

// Call @ 14cee8a00

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`PCGMeshSampler::PoissonSampling'::__l12::<lambda_1>,bool>::Call(void *param_1)

{
  return (bool)*(undefined1 *)(*(longlong *)param_1 + 0x378);
}

// Call @ 14cee8a20

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FPCGAsync::AsyncProcessingOneToOneRangeEx<`PCGMeshSampler::SampleOnePointPerTriangle'::__l2::<lambda_2>,`PCGMeshSampler::SampleOnePointPerTriangle'::__l2::<lambda_1>_&>'::__l2::<lambda_2>,void,int>
::Call(void *param_1,int *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (*(int *)param_1 != *param_2) {
    bVar2 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<8796504389880643725>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Helpers\\PCGAsync.h"
                       ,0x8d,"NumIterations == Count");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// Call @ 14cee8a70

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FPCGAsync::AsyncProcessingOneToOneRangeEx<`PCGMeshSampler::SampleOnePointPerVertex'::__l2::<lambda_2>,`PCGMeshSampler::SampleOnePointPerVertex'::__l2::<lambda_1>_&>'::__l2::<lambda_2>,void,int>
::Call(void *param_1,int *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (*(int *)param_1 != *param_2) {
    bVar2 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<8796504389880643725>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Helpers\\PCGAsync.h"
                       ,0x8d,"NumIterations == Count");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// Call @ 14cee8ac0

TVector<double> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``FPCGAppendMeshesFromPointsElement::ExecuteInternal'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>,UE::Math::TVector<double>,int,UE::Math::TVector<double>_const_&>
::Call(TVector<double> *__return_storage_ptr__,void *param_1,int *param_2,TVector<double> *param_3)

{
  ``FPCGAppendMeshesFromPointsElement::ExecuteInternal'::__l2::<lambda_2>::operator()'::__l2::
  <lambda_2>::operator()(param_1,__return_storage_ptr__,*param_2,param_3);
  return __return_storage_ptr__;
}

// Call @ 14cee8af0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`PCGMeshSampler::SampleOnePointPerTriangle'::__l2::<lambda_2>,void>::Call
          (void *param_1)

{
  return;
}

// Call @ 14cee8b00

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`PCGMeshSampler::SampleOnePointPerVertex'::__l2::<lambda_2>,void>::Call
          (void *param_1)

{
  return;
}

// Call @ 14cee8b10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`PCGMeshSampler::PoissonSampling'::__l14::<lambda_2>,bool>::Call(void *param_1)

{
  double dVar1;
  longlong lVar2;
  FProgressCancel *pFVar3;
  longlong *plVar4;
  code *pcVar5;
  double dVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  bool bVar10;
  undefined1 uVar11;
  int iVar12;
  ulonglong uVar13;
  uint uVar14;
  ulonglong uVar15;
  uint uVar16;
  FPCGPoint *pFVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  uint uVar20;
  bool bVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined1 auStackY_3b8 [32];
  ForAnyElementType FStack_388;
  undefined8 uStack_380;
  int iStack_378;
  longlong lStack_370;
  FMeshSurfacePointSampling FStack_368;
  FScriptContainerElement *pFStack_298;
  TVector<double>_u_0 TStack_290;
  TVector<double>_u_0 TStack_278;
  double dStack_250;
  double dStack_248;
  double dStack_240;
  double dStack_238;
  double dStack_230;
  FPCGPointValueRanges FStack_1f8;
  ulonglong uStack_68;
  ulonglong uVar21;
  
  uStack_68 = __security_cookie.value ^ (ulonglong)auStackY_3b8;
  bVar22 = -1 < CpuChannel->Enabled;
  if (bVar22) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&::__CpuProfilerEventSpecId206,"FPCGMeshSamplerElement::Execute::PoissonSampling",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCGInterops\\PCGGeometryScriptInterop\\Source\\PCGGeometryScriptInterop\\Private\\Elements\\PCGMeshSampler.cpp"
               ,0xce);
    FCpuProfilerTrace::OutputBeginEvent(::__CpuProfilerEventSpecId206);
  }
  lVar2 = *(longlong *)param_1;
  uVar15 = 0;
  FStack_368.SizeDistributionPower = __real_4000000000000000;
  FStack_368.MaxSampleRadius = 0.0;
  FStack_368.MaxSubSamplePoints = 50000000;
  FStack_368.SamplingMethodVersion = -1;
  FStack_368.SizeDistribution = Uniform;
  FStack_368.bUseVertexWeights = false;
  FStack_368.VertexWeights.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FStack_368.VertexWeights.ArrayNum = 0;
  FStack_368.VertexWeights.ArrayMax = 0;
  FStack_368.InterpretWeightMode = RadiusInterpWithFill;
  FStack_368.bInvertWeights = false;
  FStack_368.Result.Errors.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FStack_368.Result.Errors.ArrayNum = 0;
  FStack_368.Result.Errors.ArrayMax = 0;
  FStack_368.Result.Warnings.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FStack_368.Result.Warnings.ArrayNum = 0;
  FStack_368.Result.Warnings.ArrayMax = 0;
  FStack_368.Result.Result = Success;
  FStack_368.Samples.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FStack_368.Samples.ArrayNum = 0;
  FStack_368.Samples.ArrayMax = 0;
  FStack_368.Radii.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FStack_368.Radii.ArrayNum = 0;
  FStack_368.Radii.ArrayMax = 0;
  FStack_368.TriangleIDs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FStack_368.TriangleIDs.ArrayNum = 0;
  FStack_368.TriangleIDs.ArrayMax = 0;
  FStack_368.BarycentricCoords.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FStack_368.BarycentricCoords.ArrayNum = 0;
  FStack_368.BarycentricCoords.ArrayMax = 0;
  FStack_368.SampleRadius = (double)*(float *)(lVar2 + 0x150);
  FStack_368.MaxSamples = *(uint *)(lVar2 + 0x154);
  FStack_368.RandomSeed =
       PCGHelpers::ComputeSeed(*(int *)((longlong)param_1 + 0x10),*(int *)(lVar2 + 0x158));
  lVar2 = *(longlong *)param_1;
  FStack_368.SubSampleDensity = *(double *)(lVar2 + 0x160);
  if (FStack_368.SampleRadius < (double)*(float *)(lVar2 + 0x170)) {
    FStack_368.SizeDistribution = (ESizeDistribution)*(byte *)(lVar2 + 0x174);
    dVar1 = *(double *)(lVar2 + 0x178);
    uVar23 = SUB84(dVar1,0);
    uVar24 = (undefined4)((ulonglong)dVar1 >> 0x20);
    if (__real_4024000000000000 <= dVar1) {
      uVar23 = SUB84(__real_4024000000000000,0);
      uVar24 = (undefined4)((ulonglong)__real_4024000000000000 >> 0x20);
    }
    if ((double)CONCAT44(uVar24,uVar23) <= __real_3ff0000000000000) {
      uVar23 = SUB84(__real_3ff0000000000000,0);
      uVar24 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
    }
    FStack_368.SizeDistributionPower = (double)CONCAT44(uVar24,uVar23);
    FStack_368.MaxSampleRadius = (double)*(float *)(lVar2 + 0x170);
  }
  uVar20 = *(uint *)((longlong)param_1 + 0x20);
  lVar2 = *(longlong *)((longlong)param_1 + 8);
  FStack_368.bComputeBarycentrics = true;
  pFVar3 = *(FProgressCancel **)(lVar2 + 0x380);
  uVar14 = 0;
  if ((int)uVar20 < *(int *)(lVar2 + 0x2a0)) {
    uVar14 = ~uVar20 >> 0x1f;
  }
  if ((uVar14 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar5 = (code *)swi(3);
    uVar11 = (*pcVar5)();
    return (bool)uVar11;
  }
  UE::Geometry::FMeshSurfacePointSampling::ComputePoissonSampling
            (&FStack_368,
             *(FDynamicMesh3 **)
              (*(longlong *)(*(longlong *)(lVar2 + 0x298) + (longlong)(int)uVar20 * 8) + 0xb8),
             pFVar3);
  if (*(char *)(*(longlong *)((longlong)param_1 + 8) + 0x378) == '\0') {
    uVar13 = FStack_368.Samples._8_8_ & 0xffffffff;
    FStack_388.Data = (FScriptContainerElement *)0x0;
    uStack_380 = 0;
    if (FStack_368.Samples.ArrayNum < 0) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum(uVar13);
    }
    if (0 < FStack_368.Samples.ArrayNum) {
      ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xd0,0x10,FStack_368.Samples.ArrayNum,&FStack_388,0,
                 (int *)((longlong)&uStack_380 + 4));
      uVar13 = FStack_368.Samples._8_8_ & 0xffffffff;
    }
    if (0 < (int)uVar13) {
      lStack_370 = 0;
      uVar18 = uVar15;
      uVar19 = uVar15;
      uVar21 = uVar15;
      do {
        uVar14 = (uint)uVar15;
        uVar16 = ~uVar14 >> 0x1f;
        uVar20 = 0;
        if ((int)uVar14 < (int)uVar13) {
          uVar20 = uVar16;
        }
        if ((uVar20 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar5 = (code *)swi(3);
          uVar11 = (*pcVar5)();
          return (bool)uVar11;
        }
        uVar20 = (int)uVar21 + 1;
        uVar21 = (ulonglong)uVar20;
        pFStack_298 = FStack_368.Samples.AllocatorInstance.Data;
        if ((uVar20 == 0x19) &&
           (uVar21 = 0, *(char *)(*(longlong *)((longlong)param_1 + 8) + 0x378) != '\0'))
        goto LAB_14cee72fb;
        uVar20 = 0;
        if ((int)uVar14 < FStack_368.TriangleIDs.ArrayNum) {
          uVar20 = uVar16;
        }
        if ((uVar20 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar5 = (code *)swi(3);
          uVar11 = (*pcVar5)();
          return (bool)uVar11;
        }
        iStack_378 = *(int *)(FStack_368.TriangleIDs.AllocatorInstance.Data + uVar18 * 4);
        uVar20 = 0;
        if ((int)uVar14 < FStack_368.BarycentricCoords.ArrayNum) {
          uVar20 = uVar16;
        }
        if ((uVar20 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar5 = (code *)swi(3);
          uVar11 = (*pcVar5)();
          return (bool)uVar11;
        }
        TStack_290._s_0.X =
             (double)*(undefined8 *)(FStack_368.BarycentricCoords.AllocatorInstance.Data + uVar19);
        TStack_290._s_0.Y =
             (double)*(undefined8 *)
                      (FStack_368.BarycentricCoords.AllocatorInstance.Data + uVar19 + 8);
        TStack_290._s_0.Z =
             (double)*(undefined8 *)
                      (FStack_368.BarycentricCoords.AllocatorInstance.Data + uVar19 + 0x10);
        if ((int)uStack_380 == uStack_380._4_4_) {
          iVar12 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x10d0,&FStack_388,(int *)((longlong)&uStack_380 + 4));
          uStack_380 = CONCAT44(uStack_380._4_4_,iVar12);
        }
        pFVar17 = (FPCGPoint *)(FStack_388.Data + (longlong)(int)uStack_380 * 0xd0);
        uStack_380 = CONCAT44(uStack_380._4_4_,(int)uStack_380 + 1);
        memset(pFVar17,0,0xd0);
        pFVar17 = FPCGPoint::FPCGPoint(pFVar17);
        uVar9 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
        uVar8 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
        uVar7 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
        dStack_248 = *(double *)(pFStack_298 + lStack_370 + 0x18);
        dStack_240 = *(double *)(pFStack_298 + lStack_370 + 0x18 + 8);
        dStack_238 = *(double *)(pFStack_298 + lStack_370 + 0x28);
        dStack_230 = *(double *)(pFStack_298 + lStack_370 + 0x28 + 8);
        dVar1 = *(double *)(pFStack_298 + lStack_370);
        dVar6 = *(double *)(pFStack_298 + lStack_370 + 8);
        dStack_250 = *(double *)(pFStack_298 + lStack_370 + 0x10);
        (pFVar17->Transform).Rotation.XY.m128d_f64[0] = dStack_248;
        (pFVar17->Transform).Rotation.XY.m128d_f64[1] = dStack_240;
        (pFVar17->Transform).Rotation.ZW.m128d_f64[0] = dStack_238;
        (pFVar17->Transform).Rotation.ZW.m128d_f64[1] = dStack_230;
        (pFVar17->Transform).Translation.XY.m128d_f64[0] = dVar1;
        (pFVar17->Transform).Translation.XY.m128d_f64[1] = dVar6;
        (pFVar17->Transform).Translation.ZW.m128d_f64[0] = dStack_250;
        (pFVar17->Transform).Translation.ZW.m128d_f64[1] = 0.0;
        (pFVar17->Transform).Scale3D.XY.m128d_f64[0] = (double)uVar7;
        (pFVar17->Transform).Scale3D.XY.m128d_f64[1] = (double)uVar8;
        (pFVar17->Transform).Scale3D.ZW.m128d_f64[0] = (double)uVar9;
        (pFVar17->Transform).Scale3D.ZW.m128d_f64[1] = 0.0;
        pFVar17->Steepness = *(float *)(*(longlong *)param_1 + 0x1b8);
        FPCGMeshSamplerContext::SetPointColorAndDensity
                  (*(FPCGMeshSamplerContext **)((longlong)param_1 + 8),
                   *(_func___cdecl_void_FLinearColor_ptr_FPCGPoint_ptr **)((longlong)param_1 + 0x18)
                   ,iStack_378,(TVector<double> *)&TStack_290._s_0,pFVar17,
                   *(int *)((longlong)param_1 + 0x20));
        FPCGMeshSamplerContext::SetAttributeValues
                  (*(FPCGMeshSamplerContext **)((longlong)param_1 + 8),
                   *(int *)(*(longlong *)param_1 + 0x194),iStack_378,
                   (TVector<double> *)&TStack_290._s_0,&pFVar17->MetadataEntry,
                   *(int *)((longlong)param_1 + 0x20));
        TStack_278._s_0.X = (pFVar17->Transform).Translation.XY.m128d_f64[0];
        TStack_278._s_0.Y = (pFVar17->Transform).Translation.XY.m128d_f64[1];
        TStack_278._s_0.Z = (pFVar17->Transform).Translation.ZW.m128d_f64[0];
        iVar12 = PCGHelpers::ComputeSeedFromPosition((TVector<double> *)&TStack_278._s_0);
        lStack_370 = lStack_370 + 0x38;
        uVar15 = (ulonglong)(uVar14 + 1);
        uVar18 = uVar18 + 1;
        pFVar17->Seed = iVar12;
        uVar19 = uVar19 + 0x18;
        uVar13 = FStack_368.Samples._8_8_ & 0xffffffff;
      } while ((int)(uVar14 + 1) < FStack_368.Samples.ArrayNum);
    }
    uVar16 = 0;
    uVar20 = *(uint *)((longlong)param_1 + 0x20);
    lVar2 = *(longlong *)((longlong)param_1 + 8);
    uVar14 = 0;
    if ((int)uVar20 < *(int *)(lVar2 + 0x300)) {
      uVar14 = ~uVar20 >> 0x1f;
    }
    if ((uVar14 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar5 = (code *)swi(3);
      uVar11 = (*pcVar5)();
      return (bool)uVar11;
    }
    plVar4 = *(longlong **)(*(longlong *)(lVar2 + 0x2f8) + (longlong)(int)uVar20 * 8);
    (**(code **)(*plVar4 + 0x490))(plVar4,uStack_380 & 0xffffffff);
    uVar20 = *(uint *)((longlong)param_1 + 0x20);
    lVar2 = *(longlong *)((longlong)param_1 + 8);
    uVar14 = 0;
    if ((int)uVar20 < *(int *)(lVar2 + 0x300)) {
      uVar14 = ~uVar20 >> 0x1f;
    }
    if ((uVar14 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar5 = (code *)swi(3);
      uVar11 = (*pcVar5)();
      return (bool)uVar11;
    }
    plVar4 = *(longlong **)(*(longlong *)(lVar2 + 0x2f8) + (longlong)(int)uVar20 * 8);
    (**(code **)(*plVar4 + 0x498))(plVar4,0xff);
    uVar20 = *(uint *)((longlong)param_1 + 0x20);
    lVar2 = *(longlong *)((longlong)param_1 + 8);
    uVar14 = 0;
    if ((int)uVar20 < *(int *)(lVar2 + 0x300)) {
      uVar14 = ~uVar20 >> 0x1f;
    }
    if ((uVar14 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar5 = (code *)swi(3);
      uVar11 = (*pcVar5)();
      return (bool)uVar11;
    }
    FPCGPointValueRanges::FPCGPointValueRanges
              (&FStack_1f8,
               *(UPCGBasePointData **)(*(longlong *)(lVar2 + 0x2f8) + (longlong)(int)uVar20 * 8),
               false);
    if (0 < (int)uStack_380) {
      do {
        uVar20 = 0;
        if ((int)uVar16 < (int)uStack_380) {
          uVar20 = ~uVar16 >> 0x1f;
        }
        if ((uVar20 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar5 = (code *)swi(3);
          uVar11 = (*pcVar5)();
          return (bool)uVar11;
        }
        FPCGPointValueRanges::SetFromPoint
                  (&FStack_1f8,uVar16,(FPCGPoint *)(FStack_388.Data + (longlong)(int)uVar16 * 0xd0))
        ;
        uVar16 = uVar16 + 1;
      } while ((int)uVar16 < (int)uStack_380);
    }
    *(undefined1 *)(*(longlong *)((longlong)param_1 + 8) + 0x138) = 0;
LAB_14cee72fb:
    if (FStack_388.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_388.Data);
    }
  }
  if (FStack_368.BarycentricCoords.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_368.BarycentricCoords.AllocatorInstance.Data);
  }
  if (FStack_368.TriangleIDs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_368.TriangleIDs.AllocatorInstance.Data);
  }
  if (FStack_368.Radii.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_368.Radii.AllocatorInstance.Data);
  }
  if (FStack_368.Samples.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_368.Samples.AllocatorInstance.Data);
  }
  DestructItems<UE::Geometry::FGeometryWarning,int>
            ((FGeometryWarning *)FStack_368.Result.Warnings.AllocatorInstance.Data,
             FStack_368.Result.Warnings.ArrayNum);
  if ((FGeometryWarning *)FStack_368.Result.Warnings.AllocatorInstance.Data !=
      (FGeometryWarning *)0x0) {
    FMemory::Free(FStack_368.Result.Warnings.AllocatorInstance.Data);
  }
  DestructItems<UE::Geometry::FGeometryError,int>
            ((FGeometryError *)FStack_368.Result.Errors.AllocatorInstance.Data,
             FStack_368.Result.Errors.ArrayNum);
  if ((FGeometryError *)FStack_368.Result.Errors.AllocatorInstance.Data != (FGeometryError *)0x0) {
    FMemory::Free(FStack_368.Result.Errors.AllocatorInstance.Data);
  }
  if (FStack_368.VertexWeights.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_368.VertexWeights.AllocatorInstance.Data);
  }
  if (bVar22) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return true;
}

// Call @ 14cee8b20

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`PCGGeometryHelpers::ConvertDataToDynMeshes'::__l81::<lambda_4>,void,UE::Geometry::FDynamicMesh3_&>
::Call(void *param_1,FDynamicMesh3 *param_2)

{
  UE::Geometry::FDynamicMesh3::AppendWithOffsets
            (param_2,*(FDynamicMesh3 **)param_1,(FAppendInfo *)0x0);
  return;
}

