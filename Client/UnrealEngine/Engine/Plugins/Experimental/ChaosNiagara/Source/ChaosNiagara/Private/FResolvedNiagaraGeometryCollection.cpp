// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosNiagara
// Functions: 4

// GetComponentRootTransform @ 14e99c410

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TTransform<double> * __thiscall
FResolvedNiagaraGeometryCollection::GetComponentRootTransform
          (FResolvedNiagaraGeometryCollection *this,TTransform<double> *__return_storage_ptr__,
          FNiagaraSystemInstance *param_1)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  __m128d _Var7;
  __m128d _Var8;
  bool bVar9;
  UObject *pUVar10;
  
  _Var7.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(__return_storage_ptr__->Rotation).XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  _Var8 = UE::Math::TTransform<double>::Identity.Translation.XY;
  *&(__return_storage_ptr__->Rotation).ZW.m128d_f64 = _Var7.m128d_f64;
  _Var7 = UE::Math::TTransform<double>::Identity.Translation.ZW;
  *&(__return_storage_ptr__->Translation).XY.m128d_f64 = _Var8.m128d_f64;
  _Var8 = UE::Math::TTransform<double>::Identity.Scale3D.XY;
  *&(__return_storage_ptr__->Translation).ZW.m128d_f64 = _Var7.m128d_f64;
  _Var7 = UE::Math::TTransform<double>::Identity.Scale3D.ZW;
  *&(__return_storage_ptr__->Scale3D).XY.m128d_f64 = _Var8.m128d_f64;
  *&(__return_storage_ptr__->Scale3D).ZW.m128d_f64 = _Var7.m128d_f64;
  bVar9 = FWeakObjectPtr::IsValid(&(this->Component).WeakPtr);
  if (bVar9) {
    pUVar10 = FWeakObjectPtr::Get(&(this->Component).WeakPtr);
    dVar2 = *(double *)&pUVar10[0xc].field_0x18;
    dVar3 = *(double *)&pUVar10[0xc].field_0x20;
    dVar5 = *(double *)(pUVar10 + 0xd);
    (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = *(double *)&pUVar10[0xc].field_0x10;
    (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = dVar2;
    dVar2 = *(double *)&pUVar10[0xd].field_0x8;
    dVar6 = *(double *)&pUVar10[0xd].field_0x10;
    (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = dVar3;
    (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = dVar5;
    dVar3 = *(double *)&pUVar10[0xd].field_0x18;
    dVar5 = *(double *)&pUVar10[0xd].field_0x20;
    (__return_storage_ptr__->Translation).XY.m128d_f64[0] = dVar2;
    (__return_storage_ptr__->Translation).XY.m128d_f64[1] = dVar6;
    dVar2 = *(double *)(pUVar10 + 0xe);
    dVar6 = *(double *)&pUVar10[0xe].field_0x8;
    (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = dVar3;
    (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = dVar5;
    dVar3 = *(double *)&pUVar10[0xe].field_0x10;
    dVar5 = *(double *)&pUVar10[0xe].field_0x18;
    (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] = dVar2;
    (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = dVar6;
    (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = dVar3;
    (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = dVar5;
  }
  dVar2 = (double)(param_1->LWCTile).field0_0x0._s_0.Z * __real_c140000000000000;
  dVar5 = (__return_storage_ptr__->Translation).XY.m128d_f64[1] +
          (double)(param_1->LWCTile).field0_0x0._s_0.Y * __real_c140000000000000;
  dVar3 = (__return_storage_ptr__->Translation).ZW.m128d_f64[1] + 0.0;
  auVar4._8_4_ = SUB84(dVar5,0);
  auVar4._0_8_ = (__return_storage_ptr__->Translation).XY.m128d_f64[0] +
                 (double)(param_1->LWCTile).field0_0x0._s_0.X * __real_c140000000000000;
  auVar4._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Translation).XY.m128d_f64 = auVar4;
  auVar1._8_4_ = SUB84(dVar3,0);
  auVar1._0_8_ = dVar2 + (__return_storage_ptr__->Translation).ZW.m128d_f64[0];
  auVar1._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Translation).ZW.m128d_f64 = auVar1;
  return __return_storage_ptr__;
}

// GetComponentSpaceTransform @ 14e99c520

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

TTransform<double> * __thiscall
FResolvedNiagaraGeometryCollection::GetComponentSpaceTransform
          (FResolvedNiagaraGeometryCollection *this,TTransform<double> *__return_storage_ptr__,
          int param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  bool bVar18;
  UGeometryCollectionComponent *this_00;
  TArray<UE::Math::TTransform<float>,TSizedDefaultAllocator<32>_> *pTVar19;
  TTransform<double> *pTVar20;
  longlong lVar21;
  
  lVar21 = (longlong)param_1;
  bVar18 = FWeakObjectPtr::IsValid(&(this->Component).WeakPtr);
  if (bVar18) {
    this_00 = (UGeometryCollectionComponent *)FWeakObjectPtr::Get(&(this->Component).WeakPtr);
    pTVar19 = UGeometryCollectionComponent::GetComponentSpaceTransforms3f(this_00);
    if ((-1 < param_1) && (param_1 < pTVar19->ArrayNum)) {
      if (param_1 < 0) {
        bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar18) {
          pcVar4 = (code *)swi(3);
          pTVar20 = (TTransform<double> *)(*pcVar4)();
          return pTVar20;
        }
      }
      pFVar3 = (pTVar19->AllocatorInstance).Data;
      pFVar1 = pFVar3 + lVar21 * 0x30;
      fVar5 = *(float *)(pFVar1 + 4);
      fVar6 = *(float *)(pFVar1 + 8);
      fVar7 = *(float *)(pFVar1 + 0xc);
      pFVar2 = pFVar3 + lVar21 * 0x30 + 0x20;
      fVar10 = *(float *)pFVar2;
      fVar11 = *(float *)(pFVar2 + 4);
      fVar12 = *(float *)(pFVar2 + 8);
      fVar13 = *(float *)(pFVar2 + 0xc);
      pFVar3 = pFVar3 + lVar21 * 0x30 + 0x10;
      fVar14 = *(float *)pFVar3;
      fVar15 = *(float *)(pFVar3 + 4);
      fVar16 = *(float *)(pFVar3 + 8);
      fVar17 = *(float *)(pFVar3 + 0xc);
      (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = (double)*(float *)pFVar1;
      (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = (double)fVar5;
      (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = (double)fVar6;
      (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = (double)fVar7;
      auVar8._8_4_ = SUB84((double)fVar15,0);
      auVar8._0_8_ = (double)fVar14;
      auVar8._12_4_ = (int)((ulonglong)(double)fVar15 >> 0x20);
      *(undefined1 (*) [16])(__return_storage_ptr__->Translation).XY.m128d_f64 = auVar8;
      (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = (double)fVar16;
      (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = (double)fVar17;
      auVar9._8_4_ = SUB84((double)fVar11,0);
      auVar9._0_8_ = (double)fVar10;
      auVar9._12_4_ = (int)((ulonglong)(double)fVar11 >> 0x20);
      *(undefined1 (*) [16])(__return_storage_ptr__->Scale3D).XY.m128d_f64 = auVar9;
      (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = (double)fVar12;
      (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = (double)fVar13;
      return __return_storage_ptr__;
    }
  }
  fVar5 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar6 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar7 = GlobalVectorConstants::Float0001.m128_f32[3];
  (__return_storage_ptr__->Rotation).XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = (double)fVar5;
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = (double)fVar6;
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = (double)fVar7;
  fVar5 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar6 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar7 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (__return_storage_ptr__->Translation).XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (__return_storage_ptr__->Translation).XY.m128d_f64[1] = (double)fVar5;
  (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = (double)fVar6;
  (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = (double)fVar7;
  fVar5 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar6 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar7 = GlobalVectorConstants::Float1110.m128_f32[3];
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = (double)fVar5;
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = (double)fVar6;
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = (double)fVar7;
  return __return_storage_ptr__;
}

// GetGeometryCollection @ 14e99cfb0

UGeometryCollection * __thiscall
FResolvedNiagaraGeometryCollection::GetGeometryCollection(FResolvedNiagaraGeometryCollection *this)

{
  bool bVar1;
  UGeometryCollection *pUVar2;
  UObject *pUVar3;
  
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)this);
  if (bVar1) {
    pUVar2 = (UGeometryCollection *)FWeakObjectPtr::Get((FWeakObjectPtr *)this);
    return pUVar2;
  }
  bVar1 = FWeakObjectPtr::IsValid(&(this->Component).WeakPtr);
  if (bVar1) {
    pUVar3 = FWeakObjectPtr::Get(&(this->Component).WeakPtr);
    return *(UGeometryCollection **)(pUVar3 + 0x24);
  }
  return (UGeometryCollection *)0x0;
}

// GetLocalRestTransforms @ 14e99d1b0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> * __thiscall
FResolvedNiagaraGeometryCollection::GetLocalRestTransforms
          (FResolvedNiagaraGeometryCollection *this,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  UGeometryCollectionComponent *this_00;
  UObject *pUVar5;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTVar6;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> local_18;
  
  bVar4 = FWeakObjectPtr::IsValid(&(this->Component).WeakPtr);
  if (bVar4) {
    this_00 = (UGeometryCollectionComponent *)FWeakObjectPtr::Get(&(this->Component).WeakPtr);
    UGeometryCollectionComponent::GetLocalRestTransforms(this_00,__return_storage_ptr__,false);
    return __return_storage_ptr__;
  }
  bVar4 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)this);
  if (bVar4) {
    local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_18.ArrayNum = 0;
    local_18.ArrayMax = 0;
    pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)this);
    pTVar1 = *(TReferenceControllerBase<1> **)(pUVar5 + 0x10);
    lVar2 = *(longlong *)&pUVar5[0xf].field_0x20;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (lVar2 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
        return pTVar6;
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    GeometryCollectionAlgo::
    GlobalMatrices<UE::Math::TTransform<double>,UE::Math::TTransform<float>_>
              ((TManagedArray<UE::Math::TTransform<float>_> *)(lVar2 + 0xb0),
               (TManagedArray<int> *)(lVar2 + 0x110),&local_18);
    (__return_storage_ptr__->AllocatorInstance).Data = local_18.AllocatorInstance.Data;
    __return_storage_ptr__->ArrayNum = local_18.ArrayNum;
    __return_storage_ptr__->ArrayMax = local_18.ArrayMax;
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  return __return_storage_ptr__;
}

