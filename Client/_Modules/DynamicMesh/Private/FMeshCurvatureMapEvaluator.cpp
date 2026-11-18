// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 11

// operator() @ 14c8a7b60

void __thiscall
`UE::Geometry::FMeshCurvatureMapEvaluator::CacheDetailCurvatures'::__l5::<lambda_1>::operator()
          (void *this,void *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  code *UNRECOVERED_JUMPTABLE;
  bool bVar3;
  
  lVar1 = *(longlong *)this;
  plVar2 = *(longlong **)(lVar1 + 0x48);
  UNRECOVERED_JUMPTABLE = *(code **)(*plVar2 + 0x108);
  if (*(longlong *)(lVar1 + 0x38) == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar3) {
      UNRECOVERED_JUMPTABLE = (code *)swi(3);
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014c8a7bd6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(plVar2,param_1,*(undefined8 *)(lVar1 + 0x38));
  return;
}

// CacheDetailCurvatures @ 14c8c33e0

void __thiscall
UE::Geometry::FMeshCurvatureMapEvaluator::CacheDetailCurvatures(FMeshCurvatureMapEvaluator *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FMeshVertexCurvatureCache *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  TSharedRef<UE::Geometry::FMeshVertexCurvatureCache,1> *pTVar5;
  TReferenceControllerBase<1> *pTVar6;
  FMeshCurvatureMapEvaluator *local_res8;
  TSharedRef<UE::Geometry::FMeshVertexCurvatureCache,1> local_28;
  undefined8 local_18 [2];
  
  if ((this->Curvatures).Object == (FMeshVertexCurvatureCache *)0x0) {
    pTVar5 = MakeShared<UE::Geometry::FMeshVertexCurvatureCache,1>(&local_28);
    pTVar6 = (pTVar5->SharedReferenceCount).ReferenceController;
    pFVar3 = pTVar5->Object;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (&this->Curvatures != (TSharedPtr<UE::Geometry::FMeshVertexCurvatureCache,1> *)local_18) {
      (this->Curvatures).Object = pFVar3;
      pTVar4 = (this->Curvatures).SharedReferenceCount.ReferenceController;
      if (pTVar6 != pTVar4) {
        (this->Curvatures).SharedReferenceCount.ReferenceController = pTVar6;
        pTVar6 = (TReferenceControllerBase<1> *)0x0;
        if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          paVar1 = &pTVar4->SharedReferenceCount;
          aVar2 = *paVar1;
          *paVar1 = (atomic<int>)((int)*paVar1 + -1);
          UNLOCK();
          if (aVar2 == (atomic<int>)0x1) {
            (**(code **)pTVar4->_padding_)(pTVar4);
            LOCK();
            paVar1 = &pTVar4->WeakReferenceCount;
            aVar2 = *paVar1;
            *paVar1 = (atomic<int>)((int)*paVar1 + -1);
            UNLOCK();
            pTVar6 = (TReferenceControllerBase<1> *)0x0;
            if (aVar2 == (atomic<int>)0x1) {
              (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
            }
          }
        }
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
    local_28.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)&local_res8;
    local_28.Object =
         (FMeshVertexCurvatureCache *)
         Core::Private::Function::
         TFunctionRefCaller<`UE::Geometry::FMeshCurvatureMapEvaluator::CacheDetailCurvatures'::__l5::<lambda_1>,void,void_const_*>
         ::Call;
    local_res8 = this;
    (**(code **)((longlong)*this->DetailSampler + 8))(this->DetailSampler,&local_28);
  }
  return;
}

// DataLayout @ 14c8d6ac0

TArray<UE::Geometry::FMeshMapEvaluator::EComponents,TSizedDefaultAllocator<32>_> * __thiscall
UE::Geometry::FMeshCurvatureMapEvaluator::DataLayout(FMeshCurvatureMapEvaluator *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,1,0,&::Layout.AllocatorInstance,1,&::Layout.ArrayMax);
      *(undefined4 *)::Layout.AllocatorInstance.Data = 1;
      atexit(`UE::Geometry::FMeshCurvatureMapEvaluator::DataLayout'::__l2::
             _dynamic_atexit_destructor_for__Layout__);
      _Init_thread_footer(&::_TSS0);
      return &::Layout;
    }
  }
  return &::Layout;
}

// EvaluateChannel @ 14c8e0ca0

void __cdecl
UE::Geometry::FMeshCurvatureMapEvaluator::EvaluateChannel
          (int param_1,float **param_2,float *param_3,void *param_4)

{
  double dVar1;
  double dVar2;
  float *pfVar3;
  int iVar4;
  float fVar5;
  double dVar6;
  double dVar7;
  
  pfVar3 = *param_2;
  fVar5 = *pfVar3;
  if (fVar5 <= 0.0) {
    iVar4 = (0.0 <= fVar5) - 1;
  }
  else {
    iVar4 = 1;
  }
  dVar1 = *(double *)((longlong)param_4 + 0x60);
  dVar6 = (double)(float)((uint)fVar5 & __xmm_7fffffff7fffffff7fffffff7fffffff);
  if (dVar1 < dVar6) {
    dVar2 = *(double *)((longlong)param_4 + 0x68);
    dVar7 = __real_3ff0000000000000;
    if ((dVar6 < dVar2) && (dVar7 = __real_3fe0000000000000, dVar1 != dVar2)) {
      dVar7 = (dVar6 - dVar1) / (dVar2 - dVar1);
    }
  }
  else {
    dVar7 = 0.0;
  }
  if (0.0 <= (float)iVar4) {
    fVar5 = (float)dVar7 + __real_3f800000;
    *param_2 = pfVar3 + 1;
    *param_3 = fVar5 * __real_3f000000;
    return;
  }
  fVar5 = __real_3f800000 - (float)dVar7;
  *param_2 = pfVar3 + 1;
  *param_3 = fVar5 * __real_3f000000;
  return;
}

// EvaluateColor @ 14c8e0f60

void __cdecl
UE::Geometry::FMeshCurvatureMapEvaluator::EvaluateColor
          (int param_1,float **param_2,TVector4<float> *param_3,void *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  double dVar6;
  double dVar7;
  int iVar8;
  double dVar9;
  double dVar10;
  float fVar11;
  float fVar12;
  
  fVar11 = **param_2;
  if (fVar11 <= 0.0) {
    iVar8 = (0.0 <= fVar11) - 1;
  }
  else {
    iVar8 = 1;
  }
  dVar6 = *(double *)((longlong)param_4 + 0x60);
  dVar9 = (double)(float)((uint)fVar11 & __xmm_7fffffff7fffffff7fffffff7fffffff);
  if (dVar6 < dVar9) {
    dVar7 = *(double *)((longlong)param_4 + 0x68);
    dVar10 = __real_3ff0000000000000;
    if ((dVar9 < dVar7) && (dVar10 = __real_3fe0000000000000, dVar6 != dVar7)) {
      dVar10 = (dVar9 - dVar6) / (dVar7 - dVar6);
    }
  }
  else {
    dVar10 = 0.0;
  }
  fVar11 = (float)dVar10;
  fVar12 = __real_3f800000 - fVar11;
  if (0.0 <= (float)iVar8) {
    fVar1 = *(float *)((longlong)param_4 + 0x88);
    fVar2 = *(float *)((longlong)param_4 + 0x8c);
    fVar3 = *(float *)((longlong)param_4 + 0x90);
  }
  else {
    fVar1 = *(float *)((longlong)param_4 + 0x70);
    fVar2 = *(float *)((longlong)param_4 + 0x74);
    fVar3 = *(float *)((longlong)param_4 + 0x78);
  }
  fVar4 = *(float *)((longlong)param_4 + 0x80);
  fVar5 = *(float *)((longlong)param_4 + 0x84);
  (param_3->field0_0x0)._s_0.X = fVar12 * *(float *)((longlong)param_4 + 0x7c) + fVar11 * fVar1;
  (param_3->field0_0x0)._s_0.Y = fVar11 * fVar2 + fVar12 * fVar4;
  (param_3->field0_0x0)._s_0.Z = fVar11 * fVar3 + fVar12 * fVar5;
  (param_3->field0_0x0)._s_0.W = 1.0;
  *param_2 = *param_2 + 1;
  return;
}

// EvaluateDefault @ 14c8e1210

void __cdecl
UE::Geometry::FMeshCurvatureMapEvaluator::EvaluateDefault(float **param_1,void *param_2)

{
  float *pfVar1;
  
  pfVar1 = *param_1;
  *pfVar1 = 0.0;
  *param_1 = pfVar1 + 1;
  return;
}

// EvaluateSample @ 14c8e13a0

void __cdecl
UE::Geometry::FMeshCurvatureMapEvaluator::EvaluateSample
          (float **param_1,FCorrespondenceSample *param_2,void *param_3)

{
  float *pfVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  int local_38;
  int local_34;
  int local_30;
  
  (**(code **)(**(longlong **)((longlong)param_3 + 0x48) + 0x98))
            (*(longlong **)((longlong)param_3 + 0x48),&local_38,param_2->DetailMesh,
             param_2->DetailTriID);
  dVar2 = GetCurvature(param_3,local_38);
  dVar3 = GetCurvature(param_3,local_34);
  dVar4 = GetCurvature(param_3,local_30);
  pfVar1 = *param_1;
  *pfVar1 = (float)(dVar3 * (param_2->DetailBaryCoords).field0_0x0._s_0.Y +
                    dVar2 * (param_2->DetailBaryCoords).field0_0x0._s_0.X +
                   dVar4 * (param_2->DetailBaryCoords).field0_0x0._s_0.Z);
  *param_1 = pfVar1 + 1;
  return;
}

// GetColorMapRange @ 14c8f2750

void __thiscall
UE::Geometry::FMeshCurvatureMapEvaluator::GetColorMapRange
          (FMeshCurvatureMapEvaluator *this,TVector<float> *param_1,TVector<float> *param_2,
          TVector<float> *param_3)

{
  EColorMode EVar1;
  
  EVar1 = this->UseColorMode;
  if (EVar1 != BlackGrayWhite) {
    if (EVar1 == RedGreenBlue) {
      *(undefined8 *)&param_1->field0_0x0 = 0x3f800000;
      (param_1->field0_0x0)._s_0.Z = 0.0;
      (param_2->field0_0x0)._s_0.X = 0.0;
      *(undefined8 *)((longlong)&param_2->field0_0x0 + 4) = 0x3f800000;
      *(undefined8 *)&param_3->field0_0x0 = 0;
      (param_3->field0_0x0)._s_0.Z = 1.0;
      return;
    }
    if (EVar1 == RedBlue) {
      *(undefined8 *)&param_1->field0_0x0 = 0x3f800000;
      (param_1->field0_0x0)._s_0.Z = 0.0;
      *(undefined8 *)&param_2->field0_0x0 = 0;
      (param_2->field0_0x0)._s_0.Z = 0.0;
      *(undefined8 *)&param_3->field0_0x0 = 0;
      (param_3->field0_0x0)._s_0.Z = 1.0;
      return;
    }
  }
  *(undefined8 *)&param_1->field0_0x0 = 0;
  (param_1->field0_0x0)._s_0.Z = 0.0;
  (param_2->field0_0x0)._s_0.X = 0.5;
  (param_2->field0_0x0)._s_0.Y = 0.5;
  (param_2->field0_0x0)._s_0.Z = 0.5;
  (param_3->field0_0x0)._s_0.X = 1.0;
  (param_3->field0_0x0)._s_0.Y = 1.0;
  (param_3->field0_0x0)._s_0.Z = 1.0;
  return;
}

// GetCurvature @ 14c8f29e0

double __thiscall
UE::Geometry::FMeshCurvatureMapEvaluator::GetCurvature(FMeshCurvatureMapEvaluator *this,int param_1)

{
  ECurvatureType EVar1;
  FMeshVertexCurvatureCache *this_00;
  code *pcVar2;
  bool bVar3;
  FVertexCurvature *pFVar4;
  double dVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  if ((this->Curvatures).Object == (FMeshVertexCurvatureCache *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      dVar5 = (double)(*pcVar2)();
      return dVar5;
    }
  }
  EVar1 = this->UseCurvatureType;
  this_00 = (this->Curvatures).Object;
  if (EVar1 != Mean) {
    if (EVar1 == Gaussian) {
      uVar8 = SUB84(this->MaxPreClamp,0);
      uVar9 = (undefined4)((ulonglong)this->MaxPreClamp >> 0x20);
      uVar6 = SUB84(this->MinPreClamp,0);
      uVar7 = (undefined4)((ulonglong)this->MinPreClamp >> 0x20);
      pFVar4 = FMeshVertexCurvatureCache::operator[](this_00,param_1);
      dVar5 = pFVar4->Gaussian;
      goto LAB_14c8f2a9d;
    }
    if (EVar1 == MaxPrincipal) {
      uVar8 = SUB84(this->MaxPreClamp,0);
      uVar9 = (undefined4)((ulonglong)this->MaxPreClamp >> 0x20);
      uVar6 = SUB84(this->MinPreClamp,0);
      uVar7 = (undefined4)((ulonglong)this->MinPreClamp >> 0x20);
      pFVar4 = FMeshVertexCurvatureCache::operator[](this_00,param_1);
      dVar5 = pFVar4->MaxPrincipal;
      goto LAB_14c8f2a9d;
    }
    if (EVar1 == MinPrincipal) {
      uVar8 = SUB84(this->MaxPreClamp,0);
      uVar9 = (undefined4)((ulonglong)this->MaxPreClamp >> 0x20);
      uVar6 = SUB84(this->MinPreClamp,0);
      uVar7 = (undefined4)((ulonglong)this->MinPreClamp >> 0x20);
      pFVar4 = FMeshVertexCurvatureCache::operator[](this_00,param_1);
      dVar5 = pFVar4->MinPrincipal;
      goto LAB_14c8f2a9d;
    }
  }
  uVar8 = SUB84(this->MaxPreClamp,0);
  uVar9 = (undefined4)((ulonglong)this->MaxPreClamp >> 0x20);
  uVar6 = SUB84(this->MinPreClamp,0);
  uVar7 = (undefined4)((ulonglong)this->MinPreClamp >> 0x20);
  pFVar4 = FMeshVertexCurvatureCache::operator[](this_00,param_1);
  dVar5 = pFVar4->Mean;
LAB_14c8f2a9d:
  if (((double)CONCAT44(uVar7,uVar6) <= dVar5) &&
     (uVar6 = uVar8, uVar7 = uVar9, dVar5 <= (double)CONCAT44(uVar9,uVar8))) {
    uVar6 = SUB84(dVar5,0);
    uVar7 = (undefined4)((ulonglong)dVar5 >> 0x20);
  }
  return (double)CONCAT44(uVar7,uVar6);
}

// SampleFunction @ 14c9150d0

double __thiscall
UE::Geometry::FMeshCurvatureMapEvaluator::SampleFunction
          (FMeshCurvatureMapEvaluator *this,FCorrespondenceSample *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  int local_38;
  int local_34;
  int local_30;
  
  (**(code **)((longlong)*this->DetailSampler + 0x98))
            (this->DetailSampler,&local_38,param_1->DetailMesh,param_1->DetailTriID);
  dVar1 = GetCurvature(this,local_38);
  dVar2 = GetCurvature(this,local_34);
  dVar3 = GetCurvature(this,local_30);
  return dVar3 * (param_1->DetailBaryCoords).field0_0x0._s_0.Z +
         dVar2 * (param_1->DetailBaryCoords).field0_0x0._s_0.Y +
         dVar1 * (param_1->DetailBaryCoords).field0_0x0._s_0.X;
}

// Setup @ 14c917920

void __thiscall
UE::Geometry::FMeshCurvatureMapEvaluator::Setup
          (FMeshCurvatureMapEvaluator *this,FMeshBaseBaker *param_1,FEvaluationContext *param_2)

{
  TSharedPtr<UE::Geometry::FMeshVertexCurvatureCache,1> *pTVar1;
  atomic<int> *paVar2;
  atomic<int> aVar3;
  ECurvatureType EVar4;
  EColorMode EVar5;
  FMeshVertexCurvatureCache *pFVar6;
  TReferenceControllerBase<1> *pTVar7;
  code *pcVar8;
  bool bVar9;
  TArray<UE::Geometry::FMeshMapEvaluator::EComponents,TSizedDefaultAllocator<32>_> *pTVar10;
  TSharedRef<UE::Geometry::FMeshVertexCurvatureCache,1> *pTVar11;
  TReferenceControllerBase<1> *pTVar12;
  double dVar13;
  double dVar14;
  FMeshCurvatureMapEvaluator *local_res8;
  code *local_78;
  FMeshCurvatureMapEvaluator **local_70;
  TSharedRef<UE::Geometry::FMeshVertexCurvatureCache,1> local_68;
  longlong local_58 [8];
  
  param_2->EvalData = this;
  param_2->Evaluate = EvaluateSample;
  param_2->AccumulateMode = Add;
  param_2->EvaluateDefault = EvaluateDefault;
  param_2->EvaluateColor = EvaluateColor;
  param_2->EvaluateChannel = EvaluateChannel;
  pTVar10 = (TArray<UE::Geometry::FMeshMapEvaluator::EComponents,TSizedDefaultAllocator<32>_> *)
            (**(code **)(this->_padding_ + 0x10))();
  TArray<enum_UE::Geometry::FMeshMapEvaluator::EComponents,TSizedDefaultAllocator<32>_>::operator=
            (&param_2->DataLayout,pTVar10);
  pTVar1 = &this->Curvatures;
  this->DetailSampler = param_1->DetailSampler;
  if (pTVar1->Object == (FMeshVertexCurvatureCache *)0x0) {
    pTVar11 = MakeShared<UE::Geometry::FMeshVertexCurvatureCache,1>(&local_68);
    pTVar12 = (pTVar11->SharedReferenceCount).ReferenceController;
    pFVar6 = pTVar11->Object;
    if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar12->SharedReferenceCount = (atomic<int>)((int)pTVar12->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (pTVar1 != (TSharedPtr<UE::Geometry::FMeshVertexCurvatureCache,1> *)local_58) {
      pTVar1->Object = pFVar6;
      pTVar7 = (this->Curvatures).SharedReferenceCount.ReferenceController;
      if (pTVar12 != pTVar7) {
        (this->Curvatures).SharedReferenceCount.ReferenceController = pTVar12;
        pTVar12 = (TReferenceControllerBase<1> *)0x0;
        if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          paVar2 = &pTVar7->SharedReferenceCount;
          aVar3 = *paVar2;
          *paVar2 = (atomic<int>)((int)*paVar2 + -1);
          UNLOCK();
          if (aVar3 == (atomic<int>)0x1) {
            (**(code **)pTVar7->_padding_)(pTVar7);
            LOCK();
            paVar2 = &pTVar7->WeakReferenceCount;
            aVar3 = *paVar2;
            *paVar2 = (atomic<int>)((int)*paVar2 + -1);
            UNLOCK();
            if (aVar3 == (atomic<int>)0x1) {
              (**(code **)(pTVar7->_padding_ + 8))(pTVar7,1);
            }
          }
        }
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_68.SharedReferenceCount.ReferenceController);
    local_70 = &local_res8;
    local_78 = Core::Private::Function::
               TFunctionRefCaller<`UE::Geometry::FMeshCurvatureMapEvaluator::CacheDetailCurvatures'::__l5::<lambda_1>,void,void_const_*>
               ::Call;
    local_res8 = this;
    (**(code **)((longlong)*this->DetailSampler + 8))(this->DetailSampler,&local_78);
  }
  this->MinPreClamp = -1.7976931348623157e+308;
  this->MaxPreClamp = 1.7976931348623157e+308;
  if (this->UseClampMode == Positive) {
    this->MinPreClamp = 0.0;
  }
  else if (this->UseClampMode == Negative) {
    this->MaxPreClamp = 0.0;
  }
  if ((pTVar1->Object == (FMeshVertexCurvatureCache *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  EVar4 = this->UseCurvatureType;
  pFVar6 = pTVar1->Object;
  if (EVar4 == Mean) {
LAB_14c917b1b:
    dVar14 = (pFVar6->MeanStats).Mean;
    dVar13 = (pFVar6->MeanStats).StandardDeviation;
  }
  else if (EVar4 == Gaussian) {
    dVar14 = (pFVar6->GaussianStats).Mean;
    dVar13 = (pFVar6->GaussianStats).StandardDeviation;
  }
  else if (EVar4 == MaxPrincipal) {
    dVar14 = (pFVar6->MaxPrincipalStats).Mean;
    dVar13 = (pFVar6->MaxPrincipalStats).StandardDeviation;
  }
  else {
    if (EVar4 != MinPrincipal) goto LAB_14c917b1b;
    dVar14 = (pFVar6->MinPrincipalStats).Mean;
    dVar13 = (pFVar6->MinPrincipalStats).StandardDeviation;
  }
  dVar13 = dVar13 + dVar14;
  if (this->bOverrideCurvatureRange != false) {
    dVar13 = this->OverrideRangeMax;
  }
  dVar13 = dVar13 * this->RangeScale;
  (this->ClampRange).Min = dVar13 * this->MinRangeScale;
  (this->ClampRange).Max = dVar13;
  EVar5 = this->UseColorMode;
  if (EVar5 != BlackGrayWhite) {
    if (EVar5 == RedGreenBlue) {
      *(undefined8 *)&(this->NegativeColor).field0_0x0 = 0x3f800000;
      *(undefined8 *)((longlong)&(this->NegativeColor).field0_0x0 + 8) = 0;
      *(undefined8 *)((longlong)&(this->ZeroColor).field0_0x0 + 4) = 0x3f800000;
      *(undefined8 *)&(this->PositiveColor).field0_0x0 = 0;
      goto LAB_14c917be5;
    }
    if (EVar5 == RedBlue) {
      *(undefined8 *)&(this->NegativeColor).field0_0x0 = 0x3f800000;
      *(undefined8 *)((longlong)&(this->NegativeColor).field0_0x0 + 8) = 0;
      *(undefined8 *)((longlong)&(this->ZeroColor).field0_0x0 + 4) = 0;
      *(undefined8 *)&(this->PositiveColor).field0_0x0 = 0;
      goto LAB_14c917be5;
    }
  }
  *(undefined8 *)&(this->NegativeColor).field0_0x0 = 0;
  (this->NegativeColor).field0_0x0._s_0.Z = 0.0;
  (this->ZeroColor).field0_0x0._s_0.X = 0.5;
  (this->ZeroColor).field0_0x0._s_0.Y = 0.5;
  (this->ZeroColor).field0_0x0._s_0.Z = 0.5;
  (this->PositiveColor).field0_0x0._s_0.X = 1.0;
  (this->PositiveColor).field0_0x0._s_0.Y = 1.0;
LAB_14c917be5:
  (this->PositiveColor).field0_0x0._s_0.Z = 1.0;
  return;
}

