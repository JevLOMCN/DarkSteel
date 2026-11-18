// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 20

// FDisplaceMeshOpFactory @ 14cc1b520

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FDisplaceMeshOpFactory * __thiscall
DisplaceMeshToolLocals::FDisplaceMeshOpFactory::FDisplaceMeshOpFactory
          (FDisplaceMeshOpFactory *this,TSharedPtr<UE::Geometry::FDynamicMesh3,1> *param_1,
          DisplaceMeshParameters *param_2,EDisplaceMeshToolDisplaceType param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  UTexture2D *pUVar4;
  TReferenceControllerBase<1> *pTVar5;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar6;
  TIndexedWeightMap<float> *pTVar7;
  undefined8 *puVar8;
  FRichCurve *pFVar9;
  double dVar10;
  double dVar11;
  undefined8 uVar12;
  TReferenceControllerBase<1> *pTVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  longlong *plVar16;
  longlong lVar17;
  longlong lVar18;
  undefined8 *puVar19;
  longlong *plVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined1 auStack_a8 [48];
  longlong local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  longlong *plStack_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_a8;
  this->_padding_ = (longlong)&___7FDisplaceMeshOpFactory_DisplaceMeshToolLocals__6B_;
  DisplaceMeshParameters::DisplaceMeshParameters(&this->Parameters);
  this->SourceMesh = param_1;
  (this->Parameters).DisplaceIntensity = param_2->DisplaceIntensity;
  (this->Parameters).RandomSeed = param_2->RandomSeed;
  pUVar4 = param_2->DisplacementMap;
  (this->Parameters).DisplacementMapChannel = param_2->DisplacementMapChannel;
  (this->Parameters).DisplacementMap = pUVar4;
  UpdateMap(this);
  dVar11 = __real_3ff0000000000000;
  (this->Parameters).SineWaveFrequency = param_2->SineWaveFrequency;
  (this->Parameters).SineWavePhaseShift = param_2->SineWavePhaseShift;
  dVar1 = (param_2->SineWaveDirection).field0_0x0._s_0.X;
  dVar2 = (param_2->SineWaveDirection).field0_0x0._s_0.Y;
  dVar3 = (param_2->SineWaveDirection).field0_0x0._s_0.Z;
  dVar10 = dVar2 * dVar2 + dVar1 * dVar1 + dVar3 * dVar3;
  if (dVar10 == dVar11) {
    uVar12 = (param_2->SineWaveDirection).field0_0x0._s_0.Z;
    uVar21 = (param_2->SineWaveDirection).field0_0x0._s_0.X;
    uVar22 = (param_2->SineWaveDirection).field0_0x0._s_0.Y;
  }
  else {
    uVar12 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    uVar21 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    uVar22 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    if (__real_3e45798ee0000000 <= dVar10) {
      dVar10 = dVar11 / SQRT(dVar10);
      local_68 = dVar3 * dVar10;
      uVar12 = local_68;
      uVar21 = dVar1 * dVar10;
      uVar22 = dVar2 * dVar10;
    }
  }
  (this->Parameters).SineWaveDirection.field0_0x0._s_0.X = (double)uVar21;
  (this->Parameters).SineWaveDirection.field0_0x0._s_0.Y = (double)uVar22;
  (this->Parameters).SineWaveDirection.field0_0x0._s_0.Z = (double)uVar12;
  (this->Parameters).bEnableFilter = param_2->bEnableFilter;
  dVar1 = (param_2->FilterDirection).field0_0x0._s_0.X;
  dVar2 = (param_2->FilterDirection).field0_0x0._s_0.Y;
  dVar3 = (param_2->FilterDirection).field0_0x0._s_0.Z;
  dVar10 = dVar2 * dVar2 + dVar1 * dVar1 + dVar3 * dVar3;
  if (dVar10 == dVar11) {
    uVar12 = (param_2->FilterDirection).field0_0x0._s_0.Z;
    uVar21 = (param_2->FilterDirection).field0_0x0._s_0.X;
    uVar22 = (param_2->FilterDirection).field0_0x0._s_0.Y;
  }
  else {
    uVar12 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    uVar21 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    uVar22 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    if (__real_3e45798ee0000000 <= dVar10) {
      dVar11 = dVar11 / SQRT(dVar10);
      local_68 = dVar3 * dVar11;
      uVar12 = local_68;
      uVar21 = dVar1 * dVar11;
      uVar22 = dVar2 * dVar11;
    }
  }
  (this->Parameters).FilterDirection.field0_0x0._s_0.X = (double)uVar21;
  (this->Parameters).FilterDirection.field0_0x0._s_0.Y = (double)uVar22;
  (this->Parameters).FilterDirection.field0_0x0._s_0.Z = (double)uVar12;
  (this->Parameters).FilterWidth = param_2->FilterWidth;
  TArray<FPerlinLayerProperties,TSizedDefaultAllocator<32>_>::operator=
            (&(this->Parameters).PerlinLayerProperties,&param_2->PerlinLayerProperties);
  this->DisplacementType = param_3;
  pTVar5 = (param_2->VerticesToDisplace).SharedReferenceCount.ReferenceController;
  pTVar6 = (param_2->VerticesToDisplace).Object;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar13 = (this->Parameters).VerticesToDisplace.SharedReferenceCount.ReferenceController;
  (this->Parameters).VerticesToDisplace.Object = pTVar6;
  (this->Parameters).VerticesToDisplace.SharedReferenceCount.ReferenceController = pTVar5;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  pTVar5 = (param_2->WeightMap).SharedReferenceCount.ReferenceController;
  pTVar7 = (param_2->WeightMap).Object;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar13 = (this->Parameters).WeightMap.SharedReferenceCount.ReferenceController;
  (this->Parameters).WeightMap.Object = pTVar7;
  (this->Parameters).WeightMap.SharedReferenceCount.ReferenceController = pTVar5;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
  local_78 = *(longlong *)&param_2->WeightMapQueryFunc;
  plStack_50 = (longlong *)0x0;
  if (local_78 != 0) {
    puVar8 = *(undefined8 **)&(param_2->WeightMapQueryFunc).field_0x28;
    puVar19 = (undefined8 *)&(param_2->WeightMapQueryFunc).field_0x10;
    if (puVar8 != (undefined8 *)0x0) {
      puVar19 = puVar8;
    }
    (**(code **)*puVar19)(puVar19,&local_68);
  }
  lVar17 = *(longlong *)&(this->Parameters).WeightMapQueryFunc;
  uVar21 = *(undefined8 *)&(this->Parameters).WeightMapQueryFunc.field_0x8;
  lVar18 = *(longlong *)&(this->Parameters).WeightMapQueryFunc.field_0x10;
  uVar14 = *(undefined4 *)&(this->Parameters).WeightMapQueryFunc.field_0x18;
  uVar15 = *(undefined4 *)&(this->Parameters).WeightMapQueryFunc.field_0x1c;
  uVar12 = *(undefined8 *)&(this->Parameters).WeightMapQueryFunc.field_0x20;
  plVar16 = *(longlong **)&(this->Parameters).WeightMapQueryFunc.field_0x28;
  *(longlong *)&(this->Parameters).WeightMapQueryFunc = local_78;
  *(undefined8 *)&(this->Parameters).WeightMapQueryFunc.field_0x8 = uStack_70;
  *(undefined4 *)&(this->Parameters).WeightMapQueryFunc.field_0x10 = (undefined4)local_68;
  *(undefined4 *)&(this->Parameters).WeightMapQueryFunc.field_0x14 = local_68._4_4_;
  *(undefined4 *)&(this->Parameters).WeightMapQueryFunc.field_0x18 = uStack_60;
  *(undefined4 *)&(this->Parameters).WeightMapQueryFunc.field_0x1c = uStack_5c;
  *(undefined8 *)&(this->Parameters).WeightMapQueryFunc.field_0x20 = local_58;
  *(longlong **)&(this->Parameters).WeightMapQueryFunc.field_0x28 = plStack_50;
  local_68 = (double)lVar18;
  uStack_60 = uVar14;
  uStack_5c = uVar15;
  local_58 = uVar12;
  plStack_50 = plVar16;
  local_78 = lVar17;
  uStack_70 = uVar21;
  if (lVar17 != 0) {
    plVar20 = &local_68;
    if (plVar16 != (longlong *)0x0) {
      plVar20 = plVar16;
    }
    (**(code **)(*plVar20 + 0x10))();
  }
  (this->Parameters).DisplacementMapBaseValue = param_2->DisplacementMapBaseValue;
  (this->Parameters).UVScale.field0_0x0 = (param_2->UVScale).field0_0x0;
  (this->Parameters).UVOffset.field0_0x0 = (param_2->UVOffset).field0_0x0;
  pTVar5 = (param_2->AdjustmentCurve).SharedReferenceCount.ReferenceController;
  pFVar9 = (param_2->AdjustmentCurve).Object;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar13 = (this->Parameters).AdjustmentCurve.SharedReferenceCount.ReferenceController;
  (this->Parameters).AdjustmentCurve.Object = pFVar9;
  (this->Parameters).AdjustmentCurve.SharedReferenceCount.ReferenceController = pTVar5;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
  return this;
}

// MakeNewOperator @ 14cc63b00

TUniquePtr<UE::Geometry::FDynamicMeshOperator,TDefaultDelete<UE::Geometry::FDynamicMeshOperator>_>
__thiscall
DisplaceMeshToolLocals::FDisplaceMeshOpFactory::MakeNewOperator(FDisplaceMeshOpFactory *this)

{
  EDisplaceMeshToolDisplaceType EVar1;
  TSharedPtr<UE::Geometry::FDynamicMesh3,1> *pTVar2;
  FDisplaceMeshOp *pFVar3;
  FDynamicMeshOperator *in_RDX;
  TSharedPtr<UE::Geometry::FDynamicMesh3,1> local_18;
  
  pTVar2 = this->SourceMesh;
  pFVar3 = ::operator_new(0x200);
  if (pFVar3 != (FDisplaceMeshOp *)0x0) {
    local_18.SharedReferenceCount.ReferenceController =
         (pTVar2->SharedReferenceCount).ReferenceController;
    local_18.Object = pTVar2->Object;
    EVar1 = this->DisplacementType;
    if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar3 = FDisplaceMeshOp::FDisplaceMeshOp(pFVar3,&local_18,&this->Parameters,EVar1);
    in_RDX->_padding_ = (longlong)pFVar3;
    return (TUniquePtr<UE::Geometry::FDynamicMeshOperator,TDefaultDelete<UE::Geometry::FDynamicMeshOperator>_>
            )in_RDX;
  }
  in_RDX->_padding_ = 0;
  return (TUniquePtr<UE::Geometry::FDynamicMeshOperator,TDefaultDelete<UE::Geometry::FDynamicMeshOperator>_>
          )in_RDX;
}

// SetAdjustmentCurve @ 14cc75100

void __thiscall
DisplaceMeshToolLocals::FDisplaceMeshOpFactory::SetAdjustmentCurve
          (FDisplaceMeshOpFactory *this,UCurveFloat *param_1)

{
  int *piVar1;
  TSharedPtr<FRichCurve,1> *pTVar2;
  FScriptContainerElement *_Src;
  FRichCurve *pFVar3;
  FRichCurve **ppFVar4;
  int iVar5;
  int iVar6;
  FRichCurve *local_38;
  TReferenceControllerBase<1> *local_30;
  FRichCurve *local_28;
  TReferenceControllerBase<1> *pTStack_20;
  
  pFVar3 = (FRichCurve *)0x0;
  iVar6 = 0;
  if (param_1 == (UCurveFloat *)0x0) {
    ppFVar4 = &local_28;
    local_28 = (FRichCurve *)0x0;
    pTStack_20 = (TReferenceControllerBase<1> *)0x0;
    iVar5 = 2;
  }
  else {
    pFVar3 = ::operator_new(0x80);
    if (pFVar3 == (FRichCurve *)0x0) {
      pFVar3 = (FRichCurve *)0x0;
    }
    else {
      pFVar3->_padding_ = 0;
      pFVar3->_padding_ = 0;
      pFVar3->_padding_ = 0;
      *(undefined4 *)&pFVar3->_padding_ = 0;
      *(undefined4 *)((longlong)&pFVar3->_padding_ + 4) = 0x80;
      *(undefined4 *)&pFVar3->_padding_ = 0xffffffff;
      *(undefined4 *)((longlong)&pFVar3->_padding_ + 4) = 0;
      pFVar3->_padding_ = 0;
      *(undefined4 *)&pFVar3->_padding_ = 0;
      pFVar3->_padding_ = 0;
      pFVar3->_padding_ = 0;
      pFVar3->_padding_ = (longlong)&___7FRealCurve__6B_;
      *(int *)&pFVar3->_padding_ = (int)(param_1->FloatCurve)._padding_;
      *(undefined1 *)((longlong)&pFVar3->_padding_ + 4) =
           *(undefined1 *)((longlong)&(param_1->FloatCurve)._padding_ + 4);
      *(undefined1 *)((longlong)&pFVar3->_padding_ + 5) =
           *(undefined1 *)((longlong)&(param_1->FloatCurve)._padding_ + 5);
      pFVar3->_padding_ = (longlong)&___7FRichCurve__6B_;
      (pFVar3->Keys).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      iVar5 = (param_1->FloatCurve).Keys.ArrayNum;
      _Src = (param_1->FloatCurve).Keys.AllocatorInstance.Data;
      (pFVar3->Keys).ArrayNum = iVar5;
      piVar1 = &(pFVar3->Keys).ArrayMax;
      if (iVar5 == 0) {
        *piVar1 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x1c,4,iVar5,0,&(pFVar3->Keys).AllocatorInstance,iVar5,piVar1);
        memcpy((pFVar3->Keys).AllocatorInstance.Data,_Src,(longlong)iVar5 * 0x1c);
      }
    }
    local_38 = pFVar3;
    local_30 = ::operator_new(0x18);
    if (local_30 == (TReferenceControllerBase<1> *)0x0) {
      ppFVar4 = &local_38;
      local_30 = (TReferenceControllerBase<1> *)0x0;
      iVar5 = iVar6;
      iVar6 = 1;
    }
    else {
      local_30->SharedReferenceCount = (atomic<int>)0x1;
      local_30->_padding_ =
           (longlong)
           &
           ___7__TReferenceControllerWithDeleter_UFRichCurve__U__DefaultDeleter_UFRichCurve___SharedPointerInternals___00_SharedPointerInternals__6B_
      ;
      ppFVar4 = &local_38;
      local_30->WeakReferenceCount = (atomic<int>)0x1;
      local_30[1]._padding_ = (longlong)pFVar3;
      iVar5 = 0;
      iVar6 = 1;
    }
  }
  pTVar2 = &(this->Parameters).AdjustmentCurve;
  if (pTVar2 != (TSharedPtr<FRichCurve,1> *)ppFVar4) {
    pTVar2->Object = pFVar3;
    *ppFVar4 = (FRichCurve *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->Parameters).AdjustmentCurve.SharedReferenceCount,
               (FSharedReferencer<1> *)(ppFVar4 + 1));
  }
  if (iVar5 != 0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_20);
  }
  if (iVar6 != 0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_30);
    return;
  }
  return;
}

// SetDisplacementMap @ 14cc752f0

void __thiscall
DisplaceMeshToolLocals::FDisplaceMeshOpFactory::SetDisplacementMap
          (FDisplaceMeshOpFactory *this,UTexture2D *param_1,int param_2)

{
  (this->Parameters).DisplacementMap = param_1;
  (this->Parameters).DisplacementMapChannel = param_2;
  UpdateMap(this);
  return;
}

// SetDisplacementMapBaseValue @ 14cc75310

void __thiscall
DisplaceMeshToolLocals::FDisplaceMeshOpFactory::SetDisplacementMapBaseValue
          (FDisplaceMeshOpFactory *this,float param_1)

{
  (this->Parameters).DisplacementMapBaseValue = param_1;
  return;
}

// SetDisplacementMapUVAdjustment @ 14cc75320

void __thiscall
DisplaceMeshToolLocals::FDisplaceMeshOpFactory::SetDisplacementMapUVAdjustment
          (FDisplaceMeshOpFactory *this,TVector2<float> *param_1,TVector2<float> *param_2)

{
  (this->Parameters).UVScale.field0_0x0 = param_1->field0_0x0;
  (this->Parameters).UVOffset.field0_0x0 = param_2->field0_0x0;
  return;
}

// SetDisplacementType @ 14cc75340

void __thiscall
DisplaceMeshToolLocals::FDisplaceMeshOpFactory::SetDisplacementType
          (FDisplaceMeshOpFactory *this,EDisplaceMeshToolDisplaceType param_1)

{
  this->DisplacementType = param_1;
  return;
}

// SetEnableDirectionalFilter @ 14cc75350

void __thiscall
DisplaceMeshToolLocals::FDisplaceMeshOpFactory::SetEnableDirectionalFilter
          (FDisplaceMeshOpFactory *this,bool param_1)

{
  (this->Parameters).bEnableFilter = param_1;
  return;
}

// SetFilterDirection @ 14cc75370

void __thiscall
DisplaceMeshToolLocals::FDisplaceMeshOpFactory::SetFilterDirection
          (FDisplaceMeshOpFactory *this,TVector<double> *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  undefined8 uVar5;
  undefined8 uVar6;
  double dVar7;
  
  uVar6 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  dVar1 = (param_1->field0_0x0)._s_0.X;
  dVar2 = (param_1->field0_0x0)._s_0.Z;
  dVar3 = (param_1->field0_0x0)._s_0.Y;
  dVar7 = dVar3 * dVar3 + dVar1 * dVar1 + dVar2 * dVar2;
  if (dVar7 == __real_3ff0000000000000) {
    dVar2 = (param_1->field0_0x0)._s_0.Y;
    dVar1 = (param_1->field0_0x0)._s_0.Z;
    (this->Parameters).FilterDirection.field0_0x0._s_0.X = (param_1->field0_0x0)._s_0.X;
    (this->Parameters).FilterDirection.field0_0x0._s_0.Y = dVar2;
    (this->Parameters).FilterDirection.field0_0x0._s_0.Z = dVar1;
    return;
  }
  if (dVar7 < __real_3e45798ee0000000) {
    (this->Parameters).FilterDirection.field0_0x0._s_0.X =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    (this->Parameters).FilterDirection.field0_0x0._s_0.Y = (double)uVar5;
    (this->Parameters).FilterDirection.field0_0x0._s_0.Z = (double)uVar6;
    return;
  }
  dVar7 = __real_3ff0000000000000 / SQRT(dVar7);
  auVar4._8_4_ = SUB84(dVar3 * dVar7,0);
  auVar4._0_8_ = dVar1 * dVar7;
  auVar4._12_4_ = (int)((ulonglong)(dVar3 * dVar7) >> 0x20);
  *(undefined1 (*) [16])&(this->Parameters).FilterDirection.field0_0x0 = auVar4;
  (this->Parameters).FilterDirection.field0_0x0._s_0.Z = dVar2 * dVar7;
  return;
}

// SetFilterFalloffWidth @ 14cc75440

void __thiscall
DisplaceMeshToolLocals::FDisplaceMeshOpFactory::SetFilterFalloffWidth
          (FDisplaceMeshOpFactory *this,float param_1)

{
  (this->Parameters).FilterWidth = param_1;
  return;
}

// SetFrequency @ 14cc759d0

void __thiscall
DisplaceMeshToolLocals::FDisplaceMeshOpFactory::SetFrequency
          (FDisplaceMeshOpFactory *this,float param_1)

{
  (this->Parameters).SineWaveFrequency = param_1;
  return;
}

// SetIntensity @ 14cc759e0

void __thiscall
DisplaceMeshToolLocals::FDisplaceMeshOpFactory::SetIntensity
          (FDisplaceMeshOpFactory *this,float param_1)

{
  (this->Parameters).DisplaceIntensity = param_1;
  return;
}

// SetPerlinNoiseLayerProperties @ 14cc759f0

void __thiscall
DisplaceMeshToolLocals::FDisplaceMeshOpFactory::SetPerlinNoiseLayerProperties
          (FDisplaceMeshOpFactory *this,
          TArray<FPerlinLayerProperties,TSizedDefaultAllocator<32>_> *param_1)

{
  TArray<FPerlinLayerProperties,TSizedDefaultAllocator<32>_>::operator=
            (&(this->Parameters).PerlinLayerProperties,param_1);
  return;
}

// SetPhaseShift @ 14cc75a10

void __thiscall
DisplaceMeshToolLocals::FDisplaceMeshOpFactory::SetPhaseShift
          (FDisplaceMeshOpFactory *this,float param_1)

{
  (this->Parameters).SineWavePhaseShift = param_1;
  return;
}

// SetRandomSeed @ 14cc75c00

void __thiscall
DisplaceMeshToolLocals::FDisplaceMeshOpFactory::SetRandomSeed
          (FDisplaceMeshOpFactory *this,int param_1)

{
  (this->Parameters).RandomSeed = param_1;
  return;
}

// SetRecalculateNormals @ 14cc75c10

void __thiscall
DisplaceMeshToolLocals::FDisplaceMeshOpFactory::SetRecalculateNormals
          (FDisplaceMeshOpFactory *this,bool param_1)

{
  (this->Parameters).bRecalculateNormals = param_1;
  return;
}

// SetSineWaveDirection @ 14cc75c20

void __thiscall
DisplaceMeshToolLocals::FDisplaceMeshOpFactory::SetSineWaveDirection
          (FDisplaceMeshOpFactory *this,TVector<double> *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  undefined8 uVar5;
  undefined8 uVar6;
  double dVar7;
  
  uVar6 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  dVar1 = (param_1->field0_0x0)._s_0.X;
  dVar2 = (param_1->field0_0x0)._s_0.Z;
  dVar3 = (param_1->field0_0x0)._s_0.Y;
  dVar7 = dVar3 * dVar3 + dVar1 * dVar1 + dVar2 * dVar2;
  if (dVar7 == __real_3ff0000000000000) {
    dVar2 = (param_1->field0_0x0)._s_0.Y;
    dVar1 = (param_1->field0_0x0)._s_0.Z;
    (this->Parameters).SineWaveDirection.field0_0x0._s_0.X = (param_1->field0_0x0)._s_0.X;
    (this->Parameters).SineWaveDirection.field0_0x0._s_0.Y = dVar2;
    (this->Parameters).SineWaveDirection.field0_0x0._s_0.Z = dVar1;
    return;
  }
  if (dVar7 < __real_3e45798ee0000000) {
    (this->Parameters).SineWaveDirection.field0_0x0._s_0.X =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    (this->Parameters).SineWaveDirection.field0_0x0._s_0.Y = (double)uVar5;
    (this->Parameters).SineWaveDirection.field0_0x0._s_0.Z = (double)uVar6;
    return;
  }
  dVar7 = __real_3ff0000000000000 / SQRT(dVar7);
  auVar4._8_4_ = SUB84(dVar3 * dVar7,0);
  auVar4._0_8_ = dVar1 * dVar7;
  auVar4._12_4_ = (int)((ulonglong)(dVar3 * dVar7) >> 0x20);
  *(undefined1 (*) [16])&(this->Parameters).SineWaveDirection.field0_0x0 = auVar4;
  (this->Parameters).SineWaveDirection.field0_0x0._s_0.Z = dVar2 * dVar7;
  return;
}

// SetVerticesToDisplace @ 14cc75e90

void __thiscall
DisplaceMeshToolLocals::FDisplaceMeshOpFactory::SetVerticesToDisplace
          (FDisplaceMeshOpFactory *this,
          TSharedPtr<TArray<int,TSizedDefaultAllocator<32>_>,1> *param_1)

{
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar1 = param_1->Object;
  pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = (this->Parameters).VerticesToDisplace.SharedReferenceCount.ReferenceController;
  (this->Parameters).VerticesToDisplace.Object = pTVar1;
  (this->Parameters).VerticesToDisplace.SharedReferenceCount.ReferenceController = pTVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetWeightMap @ 14cc75ef0

void __thiscall
DisplaceMeshToolLocals::FDisplaceMeshOpFactory::SetWeightMap
          (FDisplaceMeshOpFactory *this,
          TSharedPtr<UE::Geometry::TIndexedWeightMap<float>,1> *param_1)

{
  TIndexedWeightMap<float> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar1 = param_1->Object;
  pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = (this->Parameters).WeightMap.SharedReferenceCount.ReferenceController;
  (this->Parameters).WeightMap.Object = pTVar1;
  (this->Parameters).WeightMap.SharedReferenceCount.ReferenceController = pTVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// UpdateMap @ 14cc857c0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
DisplaceMeshToolLocals::FDisplaceMeshOpFactory::UpdateMap(FDisplaceMeshOpFactory *this)

{
  longlong lVar1;
  int iVar2;
  UTexture2D *this_00;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FTexturePlatformData *pFVar6;
  TVector4<float> *pTVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  float fVar12;
  TImageBuilder<UE::Math::TVector4<float>_> local_d8;
  TSampledScalarField2<float,float> local_a8;
  TSampledScalarField2<float,float> local_70;
  
  this_00 = (this->Parameters).DisplacementMap;
  if (((this_00 == (UTexture2D *)0x0) ||
      (pFVar6 = UTexture2D::GetPlatformData(this_00), pFVar6 == (FTexturePlatformData *)0x0)) ||
     (pFVar6 = UTexture2D::GetPlatformData((this->Parameters).DisplacementMap),
     (pFVar6->Mips).Array.ArrayNum < 1)) {
    local_70.GridValues.DimensionY = 0;
    local_70.GridValues.Buffer.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_70.GridValues.Buffer.ArrayNum = 0;
    local_70.GridValues.Buffer.ArrayMax = 0;
    local_70.GridValues.DimensionX = 0;
    UE::Geometry::TDenseGrid2<float>::Resize(&local_70.GridValues,2,2,Default);
    local_70.GridOrigin.field0_0x0._s_0 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
    local_70.CellDimensions.field0_0x0._s_0 = UE::Math::TVector2<float>::UnitVector.field0_0x0;
    UE::Geometry::TSampledScalarField2<float,float>::operator=
              (&(this->Parameters).DisplaceField,&local_70);
    if (local_70.GridValues.Buffer.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_70.GridValues.Buffer.AllocatorInstance.Data);
    }
    UE::Geometry::TDenseGrid2<float>::AssignAll(&(this->Parameters).DisplaceField.GridValues,0.0);
  }
  else {
    local_d8.Dimensions.Width = 0;
    local_d8.Dimensions.Height = 0;
    local_d8.Image.DimensionY = 0;
    local_d8.Image.Buffer.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_d8.Image.Buffer.ArrayNum = 0;
    local_d8.Image.Buffer.ArrayMax = 0;
    local_d8.Image.DimensionX = 0;
    bVar4 = UE::AssetUtils::ReadTexture((this->Parameters).DisplacementMap,&local_d8,false);
    if (bVar4) {
      lVar8 = (longlong)local_d8.Dimensions.Width;
      lVar9 = (longlong)local_d8.Dimensions.Height;
      UE::Geometry::TDenseGrid2<float>::Resize
                (&(this->Parameters).DisplaceField.GridValues,local_d8.Dimensions.Width,
                 local_d8.Dimensions.Height,Default);
      UE::Geometry::TDenseGrid2<float>::AssignAll(&(this->Parameters).DisplaceField.GridValues,0.0);
      fVar12 = __real_3f800000 / (float)lVar8;
      (this->Parameters).DisplaceField.CellDimensions.field0_0x0._s_0.Y = fVar12;
      (this->Parameters).DisplaceField.CellDimensions.field0_0x0._s_0.X = fVar12;
      if (0 < lVar9) {
        lVar11 = 0;
        do {
          lVar10 = 0;
          if (0 < lVar8) {
            do {
              lVar1 = lVar10 + lVar11;
              pTVar7 = UE::Geometry::TDenseGrid2<UE::Math::TVector4<float>_>::operator[]
                                 (&local_d8.Image,lVar1);
              iVar2 = (this->Parameters).DisplacementMapChannel;
              if (((iVar2 < 0) || (3 < iVar2)) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("IsValidIndex(Index)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector4.h"
                                     ,0x310,L""), bVar4)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              fVar12 = (pTVar7->field0_0x0).XYZW[iVar2];
              uVar5 = 0;
              if (lVar1 < (this->Parameters).DisplaceField.GridValues.Buffer.ArrayNum) {
                uVar5 = (uint)((ulonglong)lVar1 >> 0x3f) ^ 1;
              }
              if ((uVar5 == 0) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar4)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              lVar10 = lVar10 + 1;
              *(float *)((this->Parameters).DisplaceField.GridValues.Buffer.AllocatorInstance.Data +
                        lVar1 * 4) = fVar12;
            } while (lVar10 < lVar8);
          }
          lVar11 = lVar11 + lVar8;
          lVar9 = lVar9 + -1;
        } while (lVar9 != 0);
      }
    }
    else {
      local_a8.GridValues.DimensionY = 0;
      local_a8.GridValues.Buffer.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_a8.GridValues.Buffer.ArrayNum = 0;
      local_a8.GridValues.Buffer.ArrayMax = 0;
      local_a8.GridValues.DimensionX = 0;
      UE::Geometry::TDenseGrid2<float>::Resize(&local_a8.GridValues,2,2,Default);
      local_a8.GridOrigin.field0_0x0._s_0 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
      local_a8.CellDimensions.field0_0x0._s_0 = UE::Math::TVector2<float>::UnitVector.field0_0x0;
      UE::Geometry::TSampledScalarField2<float,float>::operator=
                (&(this->Parameters).DisplaceField,&local_a8);
      if (local_a8.GridValues.Buffer.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.GridValues.Buffer.AllocatorInstance.Data);
      }
      UE::Geometry::TDenseGrid2<float>::AssignAll(&(this->Parameters).DisplaceField.GridValues,0.0);
    }
    if (local_d8.Image.Buffer.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.Image.Buffer.AllocatorInstance.Data);
      return;
    }
  }
  return;
}

